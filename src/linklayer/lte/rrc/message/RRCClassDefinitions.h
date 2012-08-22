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

class DLDCCHMessageType : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	DLDCCHMessageType(): Choice(&theInfo) {}
};

class ULDCCHMessageType : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	ULDCCHMessageType(): Choice(&theInfo) {}
};

class DLCCCHMessageType : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	DLCCCHMessageType(): Choice(&theInfo) {}
};

class ULCCCHMessageType : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	ULCCCHMessageType(): Choice(&theInfo) {}
};

class PCCHMessageType : Choice {
private:
	static const void *choicesInfo[1];
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

	void setMessage(const PCCHMessageType& Message) { *static_cast<PCCHMessageType*>(items[0]) = Message; }
};

class DLSHCCHMessageType : Choice {
private:
	static const void *choicesInfo[1];
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

	void setMessage(const DLSHCCHMessageType& Message) { *static_cast<DLSHCCHMessageType*>(items[0]) = Message; }
};

class ULSHCCHMessageType : Choice {
private:
	static const void *choicesInfo[1];
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

	void setMessage(const ULSHCCHMessageType& Message) { *static_cast<ULSHCCHMessageType*>(items[0]) = Message; }
};

class BCCHFACHMessageType : Choice {
private:
	static const void *choicesInfo[1];
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

	void setMessage(const BCCHFACHMessageType& Message) { *static_cast<BCCHFACHMessageType*>(items[0]) = Message; }
};

class BCCHBCHMessage : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	BCCHBCHMessage(): Sequence(&theInfo) {}

	void setMessage(const SystemInformationBCH& Message) { *static_cast<SystemInformationBCH*>(items[0]) = Message; }
};

class MCCHMessageType : Choice {
private:
	static const void *choicesInfo[1];
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

	void setMessage(const MCCHMessageType& Message) { *static_cast<MCCHMessageType*>(items[0]) = Message; }
};

class MSCHMessageType : Choice {
private:
	static const void *choicesInfo[1];
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

	void setMessage(const MSCHMessageType& Message) { *static_cast<MSCHMessageType*>(items[0]) = Message; }
};

}

#endif /* RRCCLASSDEFINITIONS_H_ */
