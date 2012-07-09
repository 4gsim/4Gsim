//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
// 
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
// 

#include "PerEncoder.h"
#include <omnetpp.h>

PerEncoder::PerEncoder() {
	usedBits = 8;
	len = 0;
	val = (char *)calloc(len, sizeof(char));
}

PerEncoder::~PerEncoder() {

}

bool PerEncoder::encodeAbstractType(const AbstractType& abstractType) {
	switch(abstractType.getTag()) {
		case INTEGER:
			return encodeInteger(static_cast<const IntegerBase&>(abstractType));
		case ENUMERATED:
			return encodeEnumerated(static_cast<const EnumeratedBase&>(abstractType));
		case BITSTRING:
			return encodeBitString(static_cast<const BitStringBase&>(abstractType));
		case OCTETSTRING:
			return encodeOctetString(static_cast<const OctetStringBase&>(abstractType));
		case SEQUENCE:
			return encodeSequence(static_cast<const Sequence&>(abstractType));
		case SEQUENCEOF:
			return encodeSequenceOf(static_cast<const SequenceOfBase&>(abstractType));
		case CHOICE:
			return encodeChoice(static_cast<const Choice&>(abstractType));
		case PRINTABLESTRING:
			return encodePrintableString(static_cast<const PrintableStringBase&>(abstractType));
		case OPENTYPE:
			return encodeOpenType(static_cast<const OpenType&>(abstractType));
		default:
			return false;
	}
	return true;
}

bool PerEncoder::encodeOpenType(const OpenType& openType) {
	if (!encodeLength(openType.getLength(), 0, INT_MAX))
		return false;

	encodeBytes(openType.getValue(), openType.getLength());

	return true;
}

bool PerEncoder::encodeConstrainedValue(int64_t lowerBound, int64_t upperBound, int64_t val) {
	int64_t range = upperBound - lowerBound + 1;
	val -= lowerBound;
	int64_t bitCount;

	if (range < 2) {
		return true;
	} else if (range < 256) {
		bitCount = countBits(range - 1, 0);
		val <<= (8 - bitCount);
		encodeBits(val, bitCount);
	} else if (range < 65537) {
		bitCount = (countBits(range - 1, 0) + 7) / 8;
		encodeValue(val, bitCount);
	} else {
		bitCount = (countBits(val, 0) + 7) / 8;
		if (!encodeLength(bitCount, (countBits(lowerBound, 0) + 7) / 8, (countBits(upperBound, 0) + 7) / 8))
			return false;
		encodeValue(val, bitCount);
	}
	return true;
}

bool PerEncoder::encodeUnconstrainedValue(int64_t value) {
	int64_t bitCount = (countBits(value, 0) + 7) / 8;

	if (!encodeLength(bitCount, 0, INT_MAX))
		return false;

	encodeValue(value, bitCount);

	return true;
}

bool PerEncoder::encodeInteger(const IntegerBase& integer) {
	bool isExtension = (integer.getValue() > integer.getUpperBound());
	if (integer.isExtendable()) {
		encodeBits(isExtension << 7, 1);
	}

	if ((integer.isExtendable() && isExtension))
		return encodeUnconstrainedValue(integer.getValue());
	else
		return encodeConstrainedValue(integer.getLowerBound(), integer.getUpperBound(), integer.getValue());
}

bool PerEncoder::encodeEnumerated(const EnumeratedBase& enumerated) {
	bool isExtension = (enumerated.getValue() > enumerated.getUpperBound());
	if (enumerated.isExtendable()) {
		encodeBits(isExtension << 7, 1);
	}

	if (enumerated.isExtendable() && enumerated.getValue() > enumerated.getUpperBound())
		return encodeSmallNumber(enumerated.getValue());
	else
		return encodeConstrainedValue(0, enumerated.getUpperBound(), enumerated.getValue());
}

void PerEncoder::encodeSmallBitString(char *val, unsigned char len) {
	if (len < 9) {
		encodeBits(*val, len);
	} else {
		encodeBits(*val, 8);
		encodeBits(*(val + 1), len - 8);
	}
}

//bool PerEncoder::encodeConstrainedBitString(const BitString *bitString) {
//	int64_t bytesNr;
//
//	if ((bitString.getLowerBound() == bitString.getUpperBound())
//			&& (bitString.getUpperBound() < 65537)
//			&& (!bitString.isExtension()) && (bitString.getTag() != UNCONSTRAINED)) {
//		if (!bitString.length()) {
//			return true;
//		} else if (bitString.length() < 17) {
//			encodeSmallBitString(bitString.getValue(), bitString.length());
//		} else {
//			bytesNr = (bitString.length() + 7) / 8;
//			encodeBytes(bitString.getValue(), bytesNr);
//			usedBits = bytesNr * 8 - bitString.length();
//		}
//	} else {
//		if (!encodeLength(bitString.length(), bitString.getLowerBound(), bitString.getTag() != UNCONSTRAINED ? bitString.getUpperBound() : INT_MAX))
//			return false;
//
//		bytesNr = (bitString.length() + 7) / 8;
//		encodeBytes(bitString.getValue(), bytesNr);
//		usedBits = bytesNr * 8 - bitString.length();
//	}
//	return true;
//}

bool PerEncoder::encodeBitString(const BitStringBase& bitString) {
	int64_t bytesNr = 0;
	bool isExtension = (bitString.getLength() > bitString.getUpperBound());
	if (bitString.isExtendable()) {
		encodeBits(isExtension << 7, 1);
	}

	if ((bitString.getLowerBound() != bitString.getUpperBound())
			|| (bitString.getUpperBound() > 65536)
			|| (bitString.isExtendable() && (isExtension))
			|| (bitString.getConstraintType() == UNCONSTRAINED)) {
		if (!encodeLength(bitString.getLength(), bitString.getLowerBound(), bitString.getTag() != UNCONSTRAINED ? bitString.getUpperBound() : INT_MAX))
			return false;
		bytesNr = (bitString.getLength() + 7) / 8;
		encodeBytes(bitString.getValue(), bytesNr);
		usedBits = bytesNr * 8 - bitString.getLength();
	} else {
		if (!bitString.getLength()) {
			return true;
		} else if (bitString.getLength() < 17) {
			encodeSmallBitString(bitString.getValue(), bitString.getLength());
		} else {
			bytesNr = (bitString.getLength() + 7) / 8;
			encodeBytes(bitString.getValue(), bytesNr);
			usedBits = bytesNr * 8 - bitString.getLength();
		}
	}

	return true;
}

//bool PerEncoder::encodeConstrainedOctetString(const OctetString *octetString) {
//	if ((octetString.getLowerBound() == octetString.getUpperBound())
//			&& (octetString.getUpperBound() < 65537)
//			&& (!octetString.isExtension()) && (octetString.getTag() != UNCONSTRAINED)) {
//		if (!octetString.length()) {
//			return true;
//		} else if (octetString.length() < 3) {
//			encodeSmallBitString(octetString.getValue(), octetString.length() * 8);
//		} else {
//			encodeBytes(octetString.getValue(), octetString.length());
//		}
//	} else {
//		if (!encodeLength(octetString.length(), octetString.getLowerBound(), octetString.getTag() != UNCONSTRAINED ? octetString.getUpperBound() : INT_MAX)) {
//			return false;
//		}
//		encodeBytes(octetString.getValue(), octetString.length());
//	}
//	return true;
//}

bool PerEncoder::encodeOctetString(const OctetStringBase& octetString) {
	bool isExtension = (octetString.getLength() > octetString.getUpperBound());
	if (octetString.isExtendable()) {
		encodeBits(isExtension << 7, 1);
	}

	if ((octetString.getLowerBound() != octetString.getUpperBound())
			|| (octetString.getUpperBound() > 65536)
			|| (octetString.isExtendable() && (isExtension))
			|| (octetString.getConstraintType() == UNCONSTRAINED)) {
		if (!encodeLength(octetString.getLength(), octetString.getLowerBound(), octetString.getTag() != UNCONSTRAINED ? octetString.getUpperBound() : INT_MAX)) {
			return false;
		}
		encodeBytes(octetString.getValue(), octetString.getLength());
	} else {
		if (!octetString.getLength()) {
			return true;
		} else if (octetString.getLength() < 3) {
			encodeSmallBitString(octetString.getValue(), octetString.getLength() * 8);
		} else {
			encodeBytes(octetString.getValue(), octetString.getLength());
		}

	}
	return true;
}

bool PerEncoder::encodeSequence(const Sequence& sequence) {
	if (sequence.isExtendable()) {
		char extFlag = 0x00;
		char *extFlags = sequence.getExtFlags();
		for (int64_t i = 0; i < sequence.getInfo()->sizeExt; i += 8)
			if (extFlags[i / 8])
				extFlag = 0x80;
		encodeBits(extFlag, 1);
	}

	char *optFlags = sequence.getOptFlags();
	for (int64_t i = 0; i < sequence.getInfo()->sizeOpt; i += 8) {
		if (sequence.getInfo()->sizeOpt - i < 8) {
			encodeBits(optFlags[i / 8], sequence.getInfo()->sizeOpt - i);
			break;
		} else
			encodeBits(optFlags[i / 8], 8);
	}
	int64_t optIndex = 0;
	for (int64_t i = 0; i < sequence.getInfo()->sizeRoot; i++) {
		if (sequence.isOptional(i)) {
			if (!sequence.getOptFlag(optIndex++))
				continue;
		}
		if (!encodeAbstractType(*(sequence.at(i))))
			return false;
	}
/*
	if (!sequence.getExtPresent().isEmpty()) {

		if (!encodeSmallNumber(sequence.sizeExt()))
				return false;

		if (!encodeBitString(sequence.getExtPresent()))
			return false;

		for (unsigned i = 0; i < sequence.sizeExt(); i++)
			if (!encodeAbstractType(sequence.getExtItem(i))) // trebuie OpenType
				return false;
	}
*/
	return true;
}

bool PerEncoder::encodeSequenceOf(const SequenceOfBase& sequenceOf) {
	bool isExtension = (sequenceOf.size() > sequenceOf.getUpperBound());
	if (sequenceOf.isExtendable()) {
		encodeBits(isExtension << 7, 1);
	}

	if ((sequenceOf.getLowerBound() != sequenceOf.getUpperBound())
			|| (sequenceOf.getUpperBound() > 65536)) {
		if (!encodeLength(sequenceOf.size(), sequenceOf.getLowerBound(), isExtension ? INT_MAX : sequenceOf.getUpperBound()))
			return false;
	}

	for (int64_t i = 0; i < sequenceOf.size(); i++)
		if (!encodeAbstractType(*(sequenceOf.at(i))))
			return false;

	return true;
}

bool PerEncoder::encodeChoice(const Choice& choice) {
//	int64_t index = choice.getChoice();
	bool isExtension = (choice.getChoice() > choice.getUpperBound());
	if (choice.isExtendable()) {
		encodeBits(isExtension << 7, 1);
	}

	if (choice.isExtendable() && isExtension) {

		if (!encodeSmallNumber(choice.getChoice()))
			return false;

		OpenType openType = (choice.getValue());

		if (!encodeOpenType(openType))
			return false;
	} else {
		if (!encodeConstrainedValue(0, choice.getUpperBound(), choice.getChoice()))
			return false;

		if (!encodeAbstractType(*(choice.getValue())))
			return false;
	}

	return true;
}

bool PerEncoder::encodePrintableString(const PrintableStringBase& printableString) {

	bool isExtension = (printableString.getLength() > printableString.getUpperBound());
	if (printableString.isExtendable()) {
		encodeBits(isExtension << 7, 1);
	}

	if ((printableString.getLowerBound() != printableString.getUpperBound())
			|| (printableString.getUpperBound() > 65536)) {
		if (!encodeLength(printableString.getLength(), printableString.getLowerBound(), isExtension ? INT_MAX : printableString.getUpperBound()))
			return false;
	}

	encodeBytes(printableString.getValue().c_str(), printableString.getLength());

	return true;
}

void PerEncoder::print(bool type) {
	if (type == BIN) {
//		for (int64_t i = 0; i < len; i++) {
//			for (short j = 7; j >= 0; j--) {
//				if ((data[i] & (1 << j)) == 0)
//					printf("0");
//				else
//					printf("1");
//			}
//			printf(" ");
//		}
	} else {
	    char buf[len * 3 + 1];
	    int j = 0;
	    for (int i = 0; i < len; i++, j += 3)
	        sprintf(&buf[j], " %02x ", (unsigned char)val[i]);
	    buf[len * 3] = '\0';
	    EV << buf;
	}
	EV << endl;
}

void PerEncoder::encodeBytes(const char *val, int64_t len) {
	this->val = (char *)realloc(this->val, this->len + len);
	memcpy(this->val + this->len, val, len);
	this->len += len;
	usedBits = 8;
}

bool PerEncoder::encodeSmallNumber(int64_t val) {
	if (val < 64) {
		val = val << 1;
		encodeBits((unsigned char )val, 7);
	} else {
		encodeBits(128, 1);
		if (encodeLength(val, 0, INT_MAX) < 0)
			return false;
	}
	return true;
}

bool PerEncoder::encodeLength(int64_t len, int64_t lowerBound, int64_t upperBound) {
	if (upperBound > 65535) { /* FIXME */
		if (len < 128) {
			encodeValue(len, 1);
		} else if (len < 16384) {
			len += 32768;
			encodeValue(len, 2);
		} else {
			for (unsigned char f = 4; f > 0; f--) {
				while((len - f * 16384) >= 0) {
					len -= f * 16384;
					char tmp = (char )(192 + f);
					encodeBytes(&tmp, 1);
				}
			}
			encodeLength(len, lowerBound, upperBound);
		}
	} else {
		return encodeConstrainedValue(lowerBound, upperBound, len);
	}
	return true;
}

void PerEncoder::encodeBits(char val, unsigned char len) {
	if (usedBits == 8) {
		encodeBytes(&val, 1);
		usedBits = len;
		return;
	} else if (usedBits + len > 8) {
		this->val[this->len - 1] += ((unsigned char)val >> usedBits);
		unsigned char tmpBits = len - (8 - usedBits);
		val = (unsigned char)val << (len - tmpBits);
		encodeBytes(&val, 1);
		usedBits = tmpBits;
	} else {
		this->val[this->len - 1] += ((unsigned char)val >> usedBits);
		usedBits += len;
	}
}

void PerEncoder::encodeValue(int64_t value, int64_t size) {
	for (int i = size - 1; i >= 0; i--) {
		char tmp = (char)(value >> i * 8);
		encodeBytes(&tmp, 1);
	}
	usedBits = 8;
}

