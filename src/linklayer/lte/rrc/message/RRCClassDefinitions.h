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

class DLDCCHMessageType : public Choice {
private:
	static const void *choicesInfo[32];
public:
	static const Info theInfo;
	DLDCCHMessageType(): Choice(&theInfo) {}
};

class DLDCCHMessage : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DLDCCHMessage(): Sequence(&theInfo) {}

	void setIntegrityCheckInfo(const IntegrityCheckInfo& integrityCheckInfo) { *static_cast<IntegrityCheckInfo*>(items[0]) = integrityCheckInfo; }
	void setMessage(const DLDCCHMessageType& message) { *static_cast<DLDCCHMessageType*>(items[1]) = message; }
};

typedef Null ULDCCHMessageTypeSpare1;

class ULDCCHMessageType : public Choice {
private:
	static const void *choicesInfo[32];
public:
	static const Info theInfo;
	ULDCCHMessageType(): Choice(&theInfo) {}
};

class ULDCCHMessage : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULDCCHMessage(): Sequence(&theInfo) {}

	void setIntegrityCheckInfo(const IntegrityCheckInfo& integrityCheckInfo) { *static_cast<IntegrityCheckInfo*>(items[0]) = integrityCheckInfo; }
	void setMessage(const ULDCCHMessageType& message) { *static_cast<ULDCCHMessageType*>(items[1]) = message; }
};

typedef Null DLCCCHMessageTypeSpare2;

typedef Null DLCCCHMessageTypeSpare1;

class DLCCCHMessageType : public Choice {
private:
	static const void *choicesInfo[8];
public:
	static const Info theInfo;
	DLCCCHMessageType(): Choice(&theInfo) {}
};

class DLCCCHMessage : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DLCCCHMessage(): Sequence(&theInfo) {}

	void setIntegrityCheckInfo(const IntegrityCheckInfo& integrityCheckInfo) { *static_cast<IntegrityCheckInfo*>(items[0]) = integrityCheckInfo; }
	void setMessage(const DLCCCHMessageType& message) { *static_cast<DLCCCHMessageType*>(items[1]) = message; }
};

typedef Null ULCCCHMessageTypeSpare;

class ULCCCHMessageType : public Choice {
private:
	static const void *choicesInfo[4];
public:
	static const Info theInfo;
	ULCCCHMessageType(): Choice(&theInfo) {}
};

class ULCCCHMessage : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULCCCHMessage(): Sequence(&theInfo) {}

	void setIntegrityCheckInfo(const IntegrityCheckInfo& integrityCheckInfo) { *static_cast<IntegrityCheckInfo*>(items[0]) = integrityCheckInfo; }
	void setMessage(const ULCCCHMessageType& message) { *static_cast<ULCCCHMessageType*>(items[1]) = message; }
};

typedef Null PCCHMessageTypeSpare;

class PCCHMessageType : public Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PCCHMessageType(): Choice(&theInfo) {}
};

class PCCHMessage : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PCCHMessage(): Sequence(&theInfo) {}

	void setMessage(const PCCHMessageType& message) { *static_cast<PCCHMessageType*>(items[0]) = message; }
};

typedef Null DLSHCCHMessageTypeSpare;

class DLSHCCHMessageType : public Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLSHCCHMessageType(): Choice(&theInfo) {}
};

class DLSHCCHMessage : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLSHCCHMessage(): Sequence(&theInfo) {}

	void setMessage(const DLSHCCHMessageType& message) { *static_cast<DLSHCCHMessageType*>(items[0]) = message; }
};

typedef Null ULSHCCHMessageTypeSpare;

class ULSHCCHMessageType : public Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULSHCCHMessageType(): Choice(&theInfo) {}
};

class ULSHCCHMessage : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULSHCCHMessage(): Sequence(&theInfo) {}

	void setMessage(const ULSHCCHMessageType& message) { *static_cast<ULSHCCHMessageType*>(items[0]) = message; }
};

typedef Null BCCHFACHMessageTypeSpare2;

typedef Null BCCHFACHMessageTypeSpare1;

class BCCHFACHMessageType : public Choice {
private:
	static const void *choicesInfo[4];
public:
	static const Info theInfo;
	BCCHFACHMessageType(): Choice(&theInfo) {}
};

class BCCHFACHMessage : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	BCCHFACHMessage(): Sequence(&theInfo) {}

	void setMessage(const BCCHFACHMessageType& message) { *static_cast<BCCHFACHMessageType*>(items[0]) = message; }
};

class BCCHBCHMessage : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	BCCHBCHMessage(): Sequence(&theInfo) {}

	void setMessage(const SystemInformationBCH& message) { *static_cast<SystemInformationBCH*>(items[0]) = message; }
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

class MCCHMessageType : public Choice {
private:
	static const void *choicesInfo[16];
public:
	static const Info theInfo;
	MCCHMessageType(): Choice(&theInfo) {}
};

class MCCHMessage : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MCCHMessage(): Sequence(&theInfo) {}

	void setMessage(const MCCHMessageType& message) { *static_cast<MCCHMessageType*>(items[0]) = message; }
};

typedef Null MSCHMessageTypeSpare3;

typedef Null MSCHMessageTypeSpare2;

typedef Null MSCHMessageTypeSpare1;

class MSCHMessageType : public Choice {
private:
	static const void *choicesInfo[4];
public:
	static const Info theInfo;
	MSCHMessageType(): Choice(&theInfo) {}
};

class MSCHMessage : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MSCHMessage(): Sequence(&theInfo) {}

	void setMessage(const MSCHMessageType& message) { *static_cast<MSCHMessageType*>(items[0]) = message; }
};

}

#endif /* RRCCLASSDEFINITIONS_H_ */
