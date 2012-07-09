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

#include "PerDecoder.h"

PerDecoder::PerDecoder(char *val)  {
	this->val = val;
	this->it = 0;
	leftBits = 8;
}

PerDecoder::~PerDecoder() {

}

//bool PerDecoder::decodeExtension(ConstrainedType *constrainedType) {
//	if (constrainedType->getConstraintType() == EXTCONSTRAINED) {
//		BitString<CONSTRAINED, 1, 1> *extBit = new BitString<CONSTRAINED, 1, 1>(1);
//
//		if (!decodeBitString(extBit))
//			return false;
//		abstractType->setExtension(extBit->getBit(0));
//	}
//	return true;
//}

bool PerDecoder::decodeAbstractType(AbstractType& abstractType) {
	switch(abstractType.getTag()) {
		case INTEGER:
			return decodeInteger(static_cast<IntegerBase&>(abstractType));
		case ENUMERATED:
			return decodeEnumerated(static_cast<EnumeratedBase&>(abstractType));
		case BITSTRING:
			return decodeBitString(static_cast<BitStringBase&>(abstractType));
		case OCTETSTRING:
			return decodeOctetString(static_cast<OctetStringBase&>(abstractType));
		case SEQUENCE:
			return decodeSequence(static_cast<Sequence&>(abstractType));
		case SEQUENCEOF:
			return decodeSequenceOf(static_cast<SequenceOfBase&>(abstractType));
		case CHOICE:
			return decodeChoice(static_cast<Choice&>(abstractType));
		case PRINTABLESTRING:
			return decodePrintableString(static_cast<PrintableStringBase&>(abstractType));
		case OPENTYPE:
			return decodeOpenType(static_cast<OpenType&>(abstractType));
		default:
			return false;
	}
	return true;
}

bool PerDecoder::decodeOpenType(OpenType& openType) {
	openType.setLength(decodeLength(0, INT_MAX));
	openType.setValue(val + it);
	it += openType.getLength();
	return true;
}

int64_t PerDecoder::decodeConstrainedValue(int64_t lowerBound, int64_t upperBound) {
	int64_t range = upperBound - lowerBound + 1;
	int64_t len;
	int64_t val;

	if (range < 2) {
		return 0;
	} else if (range < 256) {
		int64_t numBits = countBits(range - 1, 0);
		val = (decodeBits(numBits) >> (8 - numBits)) + lowerBound;
	} else if (range < 65537) {
		len = (countBits(range - 1, 0) + 7) / 8;
		val = decodeValue(len) + lowerBound;
	} else {
		len = decodeLength((countBits(lowerBound, 0) + 7) / 8, (countBits(upperBound, 0) + 7) / 8);
		val = decodeValue(len) + lowerBound;
	}
	return val;
}

int64_t PerDecoder::decodeUnconstrainedValue() {
	return decodeValue(decodeLength(0, INT_MAX));
}

bool PerDecoder::decodeInteger(IntegerBase& integer) {
	if ((integer.isExtendable() && decodeBits(1))
			|| integer.getConstraintType() > EXTCONSTRAINED)
		integer.setValue(decodeUnconstrainedValue());
	else
		integer.setValue(decodeConstrainedValue(integer.getLowerBound(), integer.getUpperBound()));
	return true;
}

bool PerDecoder::decodeEnumerated(EnumeratedBase& enumerated) {
	if ((enumerated.isExtendable() && decodeBits(1)))
		enumerated.setValue(decodeSmallNumber());
	else
		enumerated.setValue(decodeConstrainedValue(0, enumerated.getUpperBound()));
	return true;
}

char *PerDecoder::decodeSmallBitString(unsigned char len) {
	char *buffer = (char*)calloc((len + 7) / 8, sizeof(char));
	if (len < 9) {
		*buffer = decodeBits(len);
	} else {
		*buffer = decodeBits(8);
		*(buffer + 1) = decodeBits(len - 8);
	}
	return buffer;
}

//bool PerDecoder::decodeConstrainedBitString(BitStringBase *bitString) {
//
//}

bool PerDecoder::decodeBitString(BitStringBase& bitString) {
	if ((bitString.isExtendable() && decodeBits(1))
			|| (bitString.getLowerBound() != bitString.getUpperBound())
			|| (bitString.getUpperBound() > 65536)
			|| (bitString.getConstraintType() == UNCONSTRAINED)) {
		int64_t upperBound = bitString.getConstraintType() == UNCONSTRAINED ? INT_MAX : bitString.getUpperBound();
		bitString.setLength(decodeLength(bitString.getLowerBound(), upperBound));
		bitString.setValue(decodeBytes((bitString.getLength() + 7) / 8));
	} else {
		if (!bitString.getLength()) {
			return true;
		} else if (bitString.getLength() < 17) {
			bitString.setValue(decodeSmallBitString(bitString.getLength()));
		} else {
			bitString.setValue(decodeBytes((bitString.getLength() + 7) / 8));
		}
	}
	return true;
}

//bool PerDecoder::decodeConstrainedOctetString(OctetStringBase *octetString) {
//
//}

bool PerDecoder::decodeOctetString(OctetStringBase& octetString) {
	if ((octetString.isExtendable() && decodeBits(1))
			|| (octetString.getLowerBound() != octetString.getUpperBound())
			|| (octetString.getUpperBound() > 65536)
			|| (octetString.getConstraintType() == UNCONSTRAINED)) {
		int64_t upperBound = octetString.getConstraintType() == UNCONSTRAINED ? INT_MAX : octetString.getUpperBound();
		octetString.setLength(decodeLength(octetString.getLowerBound(), upperBound));
		octetString.setValue(decodeBytes(octetString.getLength()));
	} else {
		if (!octetString.getUpperBound()) {
			return true;
		} else if (octetString.getUpperBound() < 3) {
			octetString.setValue(decodeSmallBitString(octetString.getUpperBound() * 8));
		} else {
			octetString.setValue(decodeBytes(octetString.getUpperBound()));
		}
	}
	return true;
}

//bool PerDecoder::decodeSequenceHeader(Sequence *sequence) {
//	if (!decodeExtension(sequence))
//		return false;
//	if (!decodeBitString(sequence.getRootFlags()))
//		return false;
//	return true;
//}
//
bool PerDecoder::decodeSequence(Sequence& sequence) {
	bool hasExtension = false;
	if (sequence.isExtendable() && decodeBits(1))
		hasExtension = true;

	char *optFlags = sequence.getOptFlags();
	for (int64_t i = 0; i < sequence.getInfo()->sizeOpt; i += 8) {
		if (sequence.getInfo()->sizeOpt - i < 8) {
			optFlags[i / 8] = decodeBits(sequence.getInfo()->sizeOpt - i);
			break;
		} else
			optFlags[i / 8] = decodeBits(8);
	}
	int64_t optIndex = 0;
	for (int64_t i = 0; i < sequence.getInfo()->sizeRoot; i++) {
		if (sequence.isOptional(i)) {
			if (!sequence.getOptFlag(optIndex++))
				continue;
		}
		if (!decodeAbstractType(*(sequence.at(i))))
			return false;
	}

	if (hasExtension) {

	}
///*
//	if ((!sequence.getExtBit().isEmpty()) &&
//			sequence.getExtBit().get(0)) {
//
//		extSize = decodeSmallNumber();
//		extPresent = new BitString(CONSTRAINED, extSize, extSize, extSize);
//
//		if (!decodeBitString(extPresent))
//			return false;
//
//		sequence.setExtPresent(extPresent);
//
//		for (unsigned i = 0; i < extSize; i++)
//			if (!decodeAbstractType(sequence.getExtItem(i))) // trebuie OpenType
//				return false;
//
//	}
//*/
	return true;
}

int64_t PerDecoder::decodeSequenceOfSize(SequenceOfBase& sequenceOf) {
	int64_t size = 0;
	int64_t upperBound = sequenceOf.getUpperBound();

	if ((sequenceOf.getLowerBound() != sequenceOf.getUpperBound()) || (sequenceOf.getUpperBound() > 65536)) {
		if (sequenceOf.getConstraintType() == EXTCONSTRAINED && decodeBits(1))
			upperBound = INT_MAX;
		size = decodeLength(sequenceOf.getLowerBound(), upperBound);
	} else {
		size = sequenceOf.getUpperBound();
	}
	return size;
}

bool PerDecoder::decodeSequenceOf(SequenceOfBase& sequenceOf) {
	int64_t size = 0;

	if ((size = decodeSequenceOfSize(sequenceOf)) == -1)
		return false;

	for (int64_t i = 0; i < size; i++) {
		sequenceOf.push_back(sequenceOf.createItem());
		if (!decodeAbstractType(*(sequenceOf.at(i))))
			sequenceOf.pop_back();
	}
	return true;
}

bool PerDecoder::decodeChoiceValue(Choice& choice) {
	if (choice.isExtendable() && decodeBits(1)) {
		choice.createChoice(decodeSmallNumber());
	} else
		choice.createChoice(decodeConstrainedValue(0, choice.getUpperBound()));
	return true;
}

bool PerDecoder::decodeChoice(Choice& choice) {
	/* TODO add support for extension */
	if (!decodeChoiceValue(choice))
		return false;

	bool isExtension = choice.getChoice() > choice.getUpperBound() ? true : false;

	if ((choice.getTag() == CONSTRAINED) || (!isExtension)) {
		choice.createValue();
		if (!decodeAbstractType(*(choice.getValue())))
			return false;
	} else {
//		OpenType *openType = new OpenType();
//		openType.setEmpty(0);
//
//		if (!decodeOpenType(openType))
//			return false;
//
//		PerDecoder *perDec = new PerDecoder(openType.getValue());
//
//		if (!perDec.decodeAbstractType(choice.getItem()))
//			return false;
	}
	return true;
}

bool PerDecoder::decodePrintableString(PrintableStringBase& printableString) {
	if ((printableString.isExtendable() && decodeBits(1))
			|| (printableString.getLowerBound() != printableString.getUpperBound())
			|| (printableString.getUpperBound() > 65536)
			|| (printableString.getConstraintType() == UNCONSTRAINED)) {
		int64_t upperBound = printableString.getConstraintType() == UNCONSTRAINED ? INT_MAX : printableString.getUpperBound();
		int64_t len = decodeLength(printableString.getLowerBound(), upperBound);
		printableString.setValue(decodeBytes(len));
	} else {
		printableString.setValue(decodeBytes(printableString.getUpperBound()));
	}

	return true;
}

char *PerDecoder::decodeBytes(int64_t len) {
	allignIterator();

	char *val = (char *)calloc(sizeof(char), len);
	memcpy(val, this->val + it, len);
	it += len;

	return val;
}

unsigned char PerDecoder::decodeBits(unsigned char len) {
	unsigned char val = 0;
	if (leftBits - len < 0) {
		val = ((unsigned char)this->val[it++] << (8 - leftBits));
		val += ((unsigned char)this->val[it] >> leftBits);
		leftBits = (8 - (len - leftBits));
	} else {
		val = (unsigned char)((this->val[it] & bitMask(leftBits - len, leftBits)) << (8 - leftBits));
		leftBits -= len;
		if (!leftBits) {
			leftBits = 8;
			it++;
		}
	}
	return val;
}

int64_t PerDecoder::decodeValue(int64_t len) {
	int64_t val = 0;
	allignIterator();

	for (int i = len - 1; i >= 0; i--) {
		val += ((1 << (8 * i))) * ((int64_t )*(this->val + it++));
	}
	return val;
}

int64_t PerDecoder::decodeSmallNumber() {
	int64_t val;

	if ((*(this->val + it) << (8 - leftBits)) < 128) {
		val = (decodeBits(7) >> 1);
	} else {
		it++;
		val = decodeLength(0, INT_MAX);
	}
	return val;
}

int64_t PerDecoder::decodeLength(int64_t lowerBound, int64_t upperBound) {
	int64_t len;

	if (upperBound > 65535) {
		allignIterator();
		if ((unsigned char)*(val + it) < 128) {
			len = decodeValue(1);
		} else if ((unsigned char)*(val + it) < 192) {
			len = decodeValue(2) - 32768;
		} else { /* FIXME */
			while ((unsigned char)*(val + it) > 191) {
				len += (decodeValue(1) - 192) * 16384;
			}
			len += decodeLength(0, INT_MAX);
		}
	} else {
		len = decodeConstrainedValue(lowerBound, upperBound);
	}

	return len;

}

unsigned char PerDecoder::bitMask(unsigned char start, unsigned char end) {
	unsigned char mask = ((1 << (end - start)) - 1);
	return mask << start;
}

void PerDecoder::allignIterator() {
	if (leftBits != 8) {
		it++;
		leftBits = 8;
	}
}

