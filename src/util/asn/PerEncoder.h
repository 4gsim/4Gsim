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

#ifndef PERENCODER_H_
#define PERENCODER_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include "ASNTypes.h"

#define BIN		0
#define HEX		1

class PerEncoder {

public:
	PerEncoder();
	virtual ~PerEncoder();

	bool encodeAbstractType(const AbstractType& abstractType);
	bool encodeOpenType(const OpenType& openType);
	bool encodeInteger(const IntegerBase& integer);
	bool encodeEnumerated(const EnumeratedBase& enumerated);
	bool encodeBitString(const BitStringBase& bitString);
	bool encodeOctetString(const OctetStringBase& octetString);
	bool encodeSequence(const Sequence& sequence);
	bool encodeSequenceOf(const SequenceOfBase& sequenceOf);
	bool encodeChoice(const Choice& choice);
	bool encodePrintableString(const PrintableStringBase& printableString);

	void print(bool type);

	char *getValue() { return val; }
	char getValueAt(int64_t index) { return val[index]; }
	void setValue(char *val) { this->val = val; }
	int64_t getLength() { return len; }
	void setLength(int64_t len) { this->len = len; }

private:
	short usedBits;
	int64_t len;
	char *val;

//	bool encodeExtension(const AbstractType *abstractType);
	bool encodeConstrainedValue(int64_t lowerBound, int64_t upperBound, int64_t val);
	bool encodeUnconstrainedValue(int64_t val);
	void encodeSmallBitString(char *val, unsigned char len);
//	bool encodeConstrainedBitString(const BitStringBase *bitString);
//	bool encodeConstrainedOctetString(const OctetStringBase *octetString);
	void encodeBytes(const char *val, int64_t len);
	bool encodeSmallNumber(int64_t val);
	bool encodeLength(int64_t len, int64_t lowerBound, int64_t upperBound);
	void encodeBits(char val, unsigned char len);
	void encodeValue(int64_t val, int64_t len);

//	bool checkFullConstraint(int64_t lowerBound, int64_t upperBound, int64_t val, AbstractType *abstractType);
};
#endif /* PERENCODER_H_ */
