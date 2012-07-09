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

#ifndef PERDECODER_H_
#define PERDECODER_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include "ASNTypes.h"

class PerDecoder {

public:
	PerDecoder(char *val);
	virtual ~PerDecoder();

	bool decodeAbstractType(AbstractType& abstractType);
	bool decodeOpenType(OpenType& openType);
	bool decodeInteger(IntegerBase& integer);
	bool decodeEnumerated(EnumeratedBase& enumerated);
	bool decodeBitString(BitStringBase& bitString);
	bool decodeOctetString(OctetStringBase& octetString);
//	bool decodeSequenceHeader(Sequence *sequence);
	bool decodeSequence(Sequence& sequence);
	int64_t decodeSequenceOfSize(SequenceOfBase& sequenceOf);
	bool decodeSequenceOf(SequenceOfBase& sequenceOf);
	bool decodeChoiceValue(Choice& choice);
	bool decodeChoice(Choice& choice);
	bool decodePrintableString(PrintableStringBase& printableString);

private:
	char *val;
	int64_t it;
	short leftBits;

//	bool decodeExtension(ConstrainedType *constrainedType);
	int64_t decodeConstrainedValue(int64_t lowerBound, int64_t upperBound);
	int64_t decodeUnconstrainedValue();
	char *decodeSmallBitString(unsigned char len);
//	bool decodeConstrainedBitString(BitStringBase *bitString);
//	bool decodeConstrainedOctetString(OctetStringBase *octetString);
	unsigned char bitMask(unsigned char start, unsigned char end);
	char *decodeBytes(int64_t len);
	void allignIterator();
	unsigned char decodeBits(unsigned char len);
	int64_t decodeValue(int64_t len);
	int64_t decodeSmallNumber();
	int64_t decodeLength(int64_t lowerBound, int64_t upperBound);

};


#endif /* PERDECODER_H_ */
