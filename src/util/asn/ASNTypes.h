//
// Copyright (C) 2012 Calin Cerchez
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

#ifndef ASNTYPES_H
#define ASNTYPES_H

#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <omnetpp.h>

enum ConstraintType {
	CONSTRAINED			= 0,
	EXTCONSTRAINED		= 1,
	UNCONSTRAINED		= 2,
	SEMICONSTRAINED		= 3,
};

enum ObjectType {
	INTEGER				= 0,
	ENUMERATED			= 1,
	BITSTRING			= 3,
	OCTETSTRING			= 4,
	SEQUENCE			= 6,
	SEQUENCEOF			= 7,
	CHOICE				= 10,
	PRINTABLESTRING		= 16,
	OPENTYPE			= 19,
	ABSTRACTTYPELIST	= 20
};

/*
 * Header file for all ASN.1 type implemented. For more details read X691 specification from ITU-T.
 * ASN implementation is based on IIIASN.1 Tool, http://iiiasn1.sourceforge.net/main.html,
 * but only covers PER encoding/decoding, used for S1AP protocol.
 */

/*
 * Method for counting the bits needed to represent a certain value.
 */
int64_t countBits(int64_t value, int64_t count);

class PerEncoder;

class AbstractType {
public:
    inline static AbstractType* create(const void* info) { return info ? static_cast<const Info*>(info)->create(info) : 0; }
    typedef AbstractType* (*CreateAbstractType)(const void*);
protected:
    struct Info {
    	CreateAbstractType create;
    	char tag;
    	const void* parentInfo;
    };
    const void* info;
public:
	AbstractType(const void *info) { this->info = info; }
	virtual ~AbstractType() {}

    /* getter */
	char getTag() const { return getInfo()->tag; }
	const Info *getInfo() const { return static_cast<const Info*>(info); }

	/* utility */
	virtual AbstractType *clone() const = 0;
	virtual int64_t compare(const AbstractType& other) const = 0;
};

//class AbstractTypeList : public AbstractType {
//private:
//	std::vector<AbstractType *>items;
//public:
//	AbstractTypeList(const void *info) : AbstractType(info) {}
//	virtual ~AbstractTypeList() {}
//
//	static const Info theInfo;
//};

class ConstrainedType : public AbstractType {
protected:
    struct Info {
    	CreateAbstractType create;
    	char tag;
    	const void* parentInfo;
    	char type;
    	int64_t lowerBound;
    	int64_t upperBound;
    };
public:
	ConstrainedType(const void *info) : AbstractType(info) {}

	/* getter */
	char getConstraintType() const { return getInfo()->type; }
	int64_t getLowerBound() const { return getInfo()->lowerBound; }
	int64_t getUpperBound() const { return getInfo()->upperBound; }
	bool isExtendable() const { return (getInfo()->type == EXTCONSTRAINED); }
	const Info* getInfo() const { return static_cast<const Info*>(info); }

};

/**********************************/
/* Class for ASN.1 OpenType type  */
/**********************************/

class OpenType : public AbstractType {
private:
	int64_t length;
	char *value;
public:
	static const Info theInfo;

	OpenType(const void *info = &theInfo) : AbstractType(info) {}
	OpenType(char *val, int64_t len, const void *info = &theInfo);
	OpenType(AbstractType *val, const void *info = &theInfo);
	OpenType(const OpenType& other) : AbstractType(other) { operator=(other); }
	virtual ~OpenType() {}

	/* operator */
	OpenType &operator=(const OpenType& other);
//	OpenType &operator=(const AbstractType &other);

	/* setter */
	void setValue(char *value) { this->value = value; }
	void setLength(int64_t length) { this->length = length; }

	/* getter */
	char *getValue() const { return value; }
	int64_t getLength() const { return length; }

	/* utility */
	virtual AbstractType *clone() const { return new OpenType(*this); }
	virtual int64_t compare(const AbstractType& other) const;
	static AbstractType *create(const void *info) { return new OpenType(info); }

	/* encoding */
	bool decode(char *buffer);
	bool encode(PerEncoder& encoder) const;
};

/********************************/
/* Class for ASN.1 INTEGER type */
/********************************/

class IntegerBase : public ConstrainedType {
private:
	int64_t value;
public:
	static const Info theInfo;

	IntegerBase(const void *info = &theInfo) : ConstrainedType(info) {}
	IntegerBase(int64_t value, const void *info = &theInfo) : ConstrainedType(info) { setValue(value); }
	IntegerBase(const IntegerBase& other) : ConstrainedType(other) { operator=(other); }
	virtual ~IntegerBase() {}

	/* operator */
	IntegerBase &operator=(const IntegerBase &other);

	/* getter */
	int64_t getValue() const { return value; }

	/* setter */
	void setValue(int64_t value) { this->value = value; }

	/* utility */
	virtual AbstractType *clone() const { return new IntegerBase(*this); }
	virtual int64_t compare(const AbstractType& other) const;
	static AbstractType *create(const void *info) { return new IntegerBase(info); }

	/* encoding */
	bool decode(char *buffer);
	bool encode(PerEncoder& encoder) const;
};

template <ConstraintType type, int64_t lowerBound, int64_t upperBound>
class Integer : public IntegerBase {
public:
	static const Info theInfo;
	Integer(int64_t value = 0) : IntegerBase(&theInfo) { setValue(value); }
};

template <ConstraintType type, int64_t lowerBound, int64_t upperBound>
const typename Integer<type, lowerBound, upperBound>::Info Integer<type, lowerBound, upperBound>::theInfo = {
    &IntegerBase::create,
    INTEGER,
    0,
    type,
    lowerBound,
    upperBound
};

/***********************************/
/* Class for ASN.1 ENUMERATED type */
/***********************************/

class EnumeratedBase : public AbstractType {
private:
	int64_t value;
protected:
    struct Info {
    	CreateAbstractType create;
    	char tag;
    	const void* parentInfo;
    	bool extFlag;
    	int64_t upperBound;
    };
public:
	EnumeratedBase(const void *info) : AbstractType(info) {}
	EnumeratedBase(const EnumeratedBase& other) : AbstractType(other) { operator=(other); }
	virtual ~EnumeratedBase() {}

	/* operator */
	EnumeratedBase &operator=(const EnumeratedBase& other);

	/* getter */
	int64_t getValue() const { return value; }
	bool isExtendable() const { return getInfo()->extFlag; }
	int64_t getUpperBound() const { return getInfo()->upperBound; }
	const Info* getInfo() const { return static_cast<const Info*>(info); }

	/* setter */
	void setValue(int64_t value) { this->value = value; }

	/* utility */
	virtual AbstractType *clone() const { return new EnumeratedBase(*this); }
	virtual int64_t compare(const AbstractType& other) const;
	static AbstractType *create(const void *info) { return new EnumeratedBase(info); }

	/* encoding */
	bool decode(char *buffer);
	bool encode(PerEncoder& encoder) const;
};

template <bool ext, int64_t upperBound>
class Enumerated : public EnumeratedBase {
public:
	static const Info theInfo;
	Enumerated(int64_t value = 0) : EnumeratedBase(&theInfo) { setValue(value); }

//	Enumerated<ext, upperBound> &operator=(int64_t val) { setValue(val); return *this; }
};

template <bool ext, int64_t upperBound>
const typename Enumerated<ext, upperBound>::Info Enumerated<ext, upperBound>::theInfo = {
    &EnumeratedBase::create,
    ENUMERATED,
    0,
    ext,
    upperBound
};

/**********************************/
/* Class for ASN.1 BITSTRING type */
/**********************************/

class BitStringBase : public ConstrainedType {
protected:
	int64_t length;
	char *value;
public:
	static const Info theInfo;

	BitStringBase(const void *info = &theInfo);
	BitStringBase(const BitStringBase& other) : ConstrainedType(other) { operator=(other); }
	virtual ~BitStringBase() {}

	/* operator */
	BitStringBase& operator=(const BitStringBase& other);
//	bool operator==(const BitStringBase& other) const { return compare(other) == 0; }

	/* getter */
	int64_t getLength() const { return length; }
	char *getValue() const { return value; }
	bool getBit(int64_t index) const;

	/* setter */
	void setValue(char *value) { this->value = value; }
	void setLength(int64_t length) { this->length = length; }
	void setBit(int64_t index, bool bit);
	int64_t resize(int64_t length);

	/* utility */
	virtual AbstractType *clone() const { return new BitStringBase(*this); }
	virtual int64_t compare(const AbstractType& other) const;
	static AbstractType *create(const void *info) { return new BitStringBase(info); }
	void print();

	/* encoding */
	bool decode(char *buffer);
	bool encode(PerEncoder& encoder) const;
};

template <ConstraintType type, int64_t lowerBound, int64_t upperBound>
class BitString : public BitStringBase {
public:
	static const Info theInfo;
	BitString(char *value = NULL) : BitStringBase(&theInfo) { setValue(value); }
};

template <ConstraintType type, int64_t lowerBound, int64_t upperBound>
const typename BitString<type, lowerBound, upperBound>::Info BitString<type, lowerBound, upperBound>::theInfo = {
    &BitStringBase::create,
    BITSTRING,
    0,
    type,
    lowerBound,
    upperBound
};

/************************************/
/* Class for ASN.1 OCTETSTRING type */
/************************************/

class OctetStringBase : public ConstrainedType {
protected:
	int64_t length;
	char *value;
public:
	static const Info theInfo;

	OctetStringBase(const void *info = &theInfo);
	OctetStringBase(const OctetStringBase& other) : ConstrainedType(other) { operator=(other); }
	virtual ~OctetStringBase() {}

	/* operator */
	OctetStringBase& operator=(const OctetStringBase& other);
//	bool operator==(const OctetStringBase& other) const { return compare(other) == 0; }

	/* getter */
	int64_t getLength() const { return length; }
	char *getValue() const { return value; }

	/* setter */
	void setValue(char *value) { this->value = value; }
	void setLength(int64_t length) { this->length = length; }

	/* utility */
	virtual AbstractType *clone() const { return new OctetStringBase(*this); }
	virtual int64_t compare(const AbstractType& other) const;
	static AbstractType *create(const void *info) { return new OctetStringBase(info); }

	/* encoding */
	bool decode(char *buffer);
	bool encode(PerEncoder& encoder) const;
};

template <ConstraintType type, int64_t lowerBound, int64_t upperBound>
class OctetString : public OctetStringBase {
public:
	static const Info theInfo;
	OctetString(char *value = NULL) : OctetStringBase(&theInfo) { setValue(value); }
};

template <ConstraintType type, int64_t lowerBound, int64_t upperBound>
const typename OctetString<type, lowerBound, upperBound>::Info OctetString<type, lowerBound, upperBound>::theInfo = {
    &OctetStringBase::create,
    OCTETSTRING,
    0,
    type,
    lowerBound,
    upperBound
};

//class AbstractString : public ConstrainedType {
//protected:
//	std::string val;
//public:
//	AbstractString(const void *info) : ConstrainedType(info) {}
//	AbstractString(std::string val, const void *info) : ConstrainedType(info) { this->val = val; }
//	AbstractString(const AbstractString &other) : ConstrainedType(other) { this->val = other.val; }
//	virtual ~AbstractString() {}
//
//	AbstractString *clone() const { return new AbstractString(*this); }
//	static AbstractType *create(const void *info) { return new AbstractString(info); }
//};

/****************************************/
/* Class for ASN.1 PrintableString type */
/****************************************/

class PrintableStringBase : public ConstrainedType {
private:
	std::string value;
public:
	static const Info theInfo;

	PrintableStringBase(const void *info = &theInfo) : ConstrainedType(info) {}
	PrintableStringBase(std::string value, const void *info = &theInfo) : ConstrainedType(info) { setValue(value); }
	PrintableStringBase(const char *value, const void *info = &theInfo) : ConstrainedType(info) { setValue(value); }
	PrintableStringBase(const PrintableStringBase& other) : ConstrainedType(other) { operator=(other); }
	virtual ~PrintableStringBase() {}

	/* operator */
	PrintableStringBase& operator=(const PrintableStringBase& other);
	//	bool operator==(const PrintableStringBase& other) const { return compare(other) == 0; }

	/* getter */
	int64_t getLength() const { return value.size(); }
	std::string getValue() const { return value; }

	/* setter */
	void setValue(std::string value) { this->value = value; }
	void print() { printf("%s\n", value.c_str()); }

	/* utility */
	virtual AbstractType *clone() const { return new PrintableStringBase(*this); }
	virtual int64_t compare(const AbstractType& other) const;
	static AbstractType *create(const void *info) { return new PrintableStringBase(info); }

	/* encoding */
	bool decode(char *buffer);
	bool encode(PerEncoder& encoder) const;
};

template <ConstraintType type, int64_t lowerBound, int64_t upperBound>
class PrintableString : public PrintableStringBase {
public:
	static const Info theInfo;
	PrintableString(std::string value) : PrintableStringBase(value, &theInfo) {}
	PrintableString(const char *value) : PrintableStringBase(value, &theInfo) {}
};

template <ConstraintType type, int64_t lowerBound, int64_t upperBound>
const typename PrintableString<type, lowerBound, upperBound>::Info PrintableString<type, lowerBound, upperBound>::theInfo = {
    &PrintableStringBase::create,
    PRINTABLESTRING,
    0,
    type,
    lowerBound,
    upperBound
};

/*********************************/
/* Class for ASN.1 SEQUENCE type */
/*********************************/

class Sequence : public AbstractType {
protected:
	char *optFlags;
	char *extFlags;
	std::vector<AbstractType*> items;
    struct Info {
    	CreateAbstractType create;
    	char tag;
    	const void* parentInfo;
    	bool extFlag;
    	const void** itemsInfo;
    	bool* itemsPres;
    	int64_t sizeRoot;
    	int64_t sizeOpt;
    	int64_t sizeExt;
    };
public:
	Sequence(const void *info);
	Sequence(const Sequence& other);
	virtual ~Sequence() {}

	/* getter */
	AbstractType *at(int64_t index) const { return items.at(index); }
	int64_t getLength() const { return items.size(); }
	char *getOptFlags() const { return optFlags; }
	char *getExtFlags() const { return extFlags; }
	bool isExtendable() const { return getInfo()->extFlag; }
	bool isOptional(int64_t i) const { return !(getInfo()->itemsPres[i]); }
	bool getOptFlag(int64_t index) const;
	const Info* getInfo() const { return static_cast<const Info*>(info);}

	/* setter */
	void setOptFlag(int64_t index, bool bit);

//	bool operator==(const Sequence& other) const { return compare(other); }

	virtual AbstractType *clone() const { return new Sequence(*this); }
	virtual int64_t compare(const AbstractType& other) const;
	static AbstractType *create(const void *info) { return new Sequence(info); }

	/* encoding */
	bool decode(char *buffer);
	bool encode(PerEncoder& encoder) const;
};

/***********************************/
/* Class for ASN.1 SEQUENCEOF type */
/***********************************/

class SequenceOfBase : public ConstrainedType {
protected:
	typedef std::vector<AbstractType*> Container;
	Container items;
    struct Info {
    	CreateAbstractType create;
    	char tag;
    	const void* parentInfo;
    	char type;
    	int64_t lowerBound;
    	int64_t upperBound;
    	const void* itemInfo;
    };
public:
	SequenceOfBase(const void *info) : ConstrainedType(info) {}
	SequenceOfBase(const SequenceOfBase& other);
	virtual ~SequenceOfBase() {}

	/* getter */
	int64_t size() const { return items.size(); }
	AbstractType *at(int64_t it) const { return items.at(it); }
	void pop_back() { items.pop_back(); }
	const Info* getInfo() const { return static_cast<const Info*>(info); }

	/* setter */
	void push_back(AbstractType *item) { items.push_back(item); }

    /* utils */
	virtual AbstractType *clone() const { return new SequenceOfBase(*this); }
	virtual int64_t compare(const AbstractType& other) const;
	static AbstractType *create(const void *info) { return new SequenceOfBase(info); }
    AbstractType * createItem() const;

    /*encoding */
	bool decode(char *buffer);
	bool encode(PerEncoder& encoder) const;
};

template <class T, char type, int64_t lowerBound, int64_t upperBound>
class SequenceOf : public SequenceOfBase {
public:
	static const Info theInfo;
	SequenceOf(const void *info = &theInfo) : SequenceOfBase(info) {}

    void push_back(const T& x) { items.push_back(x.clone());}
    void push_back(T* x) { items.push_back(x);}

    T& operator[](int64_t n) { return *static_cast<T*>(items.operator[](n));}
    const T&  operator[](int64_t n)  const{ return *static_cast<const T*>(items.operator[](n));}

    T& at(int64_t n) { return *static_cast<T*>(items.at(n));}
    const T& at(int64_t n) const { return *static_cast<const T*>(items.at(n));}

	int64_t size() const { return items.size(); }
};

template <class T, char type, int64_t lowerBound, int64_t upperBound>
const typename SequenceOf<T, type, lowerBound, upperBound>::Info SequenceOf<T, type, lowerBound, upperBound>::theInfo = {
	SequenceOfBase::create,
	SEQUENCEOF,
	0,
	type,
	lowerBound,
	upperBound,
	&T::theInfo
};

/*******************************/
/* Class for ASN.1 CHOICE type */
/*******************************/

class Choice : public AbstractType {
protected:
	int64_t choice;
	AbstractType *value;
    struct Info {
    	CreateAbstractType create;
    	char tag;
    	const void* parentInfo;
    	bool extFlag;
    	const void** choicesInfo;
    	int64_t upperBound;
    };
public:
	Choice(const void *info, int64_t choice = -1, AbstractType *value = NULL);
	Choice(const Choice& other);
	virtual ~Choice() {}

	/* getter */
	AbstractType *getValue() const { return value; }
	int64_t getChoice() const { return choice; }
	bool isExtendable() const { return getInfo()->extFlag; }
	int64_t getUpperBound() const { return getInfo()->upperBound; }
	const Info* getInfo() const { return static_cast<const Info*>(info);}

	/* setter */
	void setValue(AbstractType *value, int64_t choice) { this->choice = choice; this->value = value; }
	void createChoice(int64_t choice) { this->choice = choice; createValue(); }
	void createValue();

	/* utils */
	virtual AbstractType *clone() const { return new Choice(*this); }
	virtual int64_t compare(const AbstractType& other) const;
	static AbstractType *create(const void *info) { return new Choice(info); }

	/* encoding */
	bool decode(char *buffer);
	bool encode(PerEncoder& encoder) const;
};

#endif /* ASNTYPES_H */
