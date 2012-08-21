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

#ifndef RRCCLASSDEFINITIONS_H_
#define RRCCLASSDEFINITIONS_H_

#include "ASNTypes.h"
#include "RRCPDUDefinitions.h"
#include "RRCInformationElements.h"

namespace rrc {

typedef Null DLDCCHMessageTypeSpare3;

typedef Null DLDCCHMessageTypeSpare2;

typedef Null DLDCCHMessageTypeSpare1;

class DLDCCHMessageType : Choice {
private:
	static const void *choicesInfo[32];
public:
	static const Info theInfo;
	DLDCCHMessageType(): Choice(&theInfo) {}
};

class DLDCCHMessage : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DLDCCHMessage(): Sequence(&theInfo) {}
};

typedef Null ULDCCHMessageTypeSpare1;

class ULDCCHMessageType : Choice {
private:
	static const void *choicesInfo[32];
public:
	static const Info theInfo;
	ULDCCHMessageType(): Choice(&theInfo) {}
};

class ULDCCHMessage : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULDCCHMessage(): Sequence(&theInfo) {}
};

typedef Null DLCCCHMessageTypeSpare2;

typedef Null DLCCCHMessageTypeSpare1;

class DLCCCHMessageType : Choice {
private:
	static const void *choicesInfo[8];
public:
	static const Info theInfo;
	DLCCCHMessageType(): Choice(&theInfo) {}
};

class DLCCCHMessage : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DLCCCHMessage(): Sequence(&theInfo) {}
};

typedef Null ULCCCHMessageTypeSpare;

class ULCCCHMessageType : Choice {
private:
	static const void *choicesInfo[4];
public:
	static const Info theInfo;
	ULCCCHMessageType(): Choice(&theInfo) {}
};

class ULCCCHMessage : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULCCCHMessage(): Sequence(&theInfo) {}
};

typedef Null PCCHMessageTypeSpare;

class PCCHMessageType : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PCCHMessageType(): Choice(&theInfo) {}
};

class PCCHMessage : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PCCHMessage(): Sequence(&theInfo) {}
};

typedef Null DLSHCCHMessageTypeSpare;

class DLSHCCHMessageType : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLSHCCHMessageType(): Choice(&theInfo) {}
};

class DLSHCCHMessage : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLSHCCHMessage(): Sequence(&theInfo) {}
};

typedef Null ULSHCCHMessageTypeSpare;

class ULSHCCHMessageType : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULSHCCHMessageType(): Choice(&theInfo) {}
};

class ULSHCCHMessage : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULSHCCHMessage(): Sequence(&theInfo) {}
};

typedef Null BCCHFACHMessageTypeSpare2;

typedef Null BCCHFACHMessageTypeSpare1;

class BCCHFACHMessageType : Choice {
private:
	static const void *choicesInfo[4];
public:
	static const Info theInfo;
	BCCHFACHMessageType(): Choice(&theInfo) {}
};

class BCCHFACHMessage : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	BCCHFACHMessage(): Sequence(&theInfo) {}
};

class BCCHBCHMessage : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	BCCHBCHMessage(): Sequence(&theInfo) {}
};

typedef Null MCCHMessageTypeSpare9;

typedef Null MCCHMessageTypeSpare8;

typedef Null MCCHMessageTypeSpare7;

typedef Null MCCHMessageTypeSpare6;

typedef Null MCCHMessageTypeSpare5;

typedef Null MCCHMessageTypeSpare4;

typedef Null MCCHMessageTypeSpare3;

typedef Null MCCHMessageTypeSpare2;

typedef Null MCCHMessageTypeSpare1;

class MCCHMessageType : Choice {
private:
	static const void *choicesInfo[16];
public:
	static const Info theInfo;
	MCCHMessageType(): Choice(&theInfo) {}
};

class MCCHMessage : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MCCHMessage(): Sequence(&theInfo) {}
};

typedef Null MSCHMessageTypeSpare3;

typedef Null MSCHMessageTypeSpare2;

typedef Null MSCHMessageTypeSpare1;

class MSCHMessageType : Choice {
private:
	static const void *choicesInfo[4];
public:
	static const Info theInfo;
	MSCHMessageType(): Choice(&theInfo) {}
};

class MSCHMessage : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MSCHMessage(): Sequence(&theInfo) {}
};

}

#endif /* RRCCLASSDEFINITIONS_H_ */
