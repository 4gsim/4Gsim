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
	enum DLDCCHMessageTypeChoices {
		activeSetUpdate = 0,
		assistanceDataDelivery = 1,
		cellChangeOrderFromUTRAN = 2,
		cellUpdateConfirm = 3,
		counterCheck = 4,
		downlinkDirectTransfer = 5,
		handoverFromUTRANCommandGSM = 6,
		handoverFromUTRANCommandCDMA2000 = 7,
		measurementControl = 8,
		pagingType2 = 9,
		physicalChannelReconfiguration = 10,
		physicalSharedChannelAllocation = 11,
		radioBearerReconfiguration = 12,
		radioBearerRelease = 13,
		radioBearerSetup = 14,
		rrcConnectionRelease = 15,
		securityModeCommand = 16,
		signallingConnectionRelease = 17,
		transportChannelReconfiguration = 18,
		transportFormatCombinationControl = 19,
		ueCapabilityEnquiry = 20,
		ueCapabilityInformationConfirm = 21,
		uplinkPhysicalChannelControl = 22,
		uraUpdateConfirm = 23,
		utranMobilityInformation = 24,
		handoverFromUTRANCommandGERANIu = 25,
		mbmsModifiedServicesInformation = 26,
		etwsPrimaryNotificationWithSecurity = 27,
		handoverFromUTRANCommandEUTRA = 28,
		dLDCCHMessageTypeSpare3 = 29,
		dLDCCHMessageTypeSpare2 = 30,
		dLDCCHMessageTypeSpare1 = 31,
	};
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
	enum ULDCCHMessageTypeChoices {
		activeSetUpdateComplete = 0,
		activeSetUpdateFailure = 1,
		cellChangeOrderFromUTRANFailure = 2,
		counterCheckResponse = 3,
		handoverToUTRANComplete = 4,
		initialDirectTransfer = 5,
		handoverFromUTRANFailure = 6,
		measurementControlFailure = 7,
		measurementReport = 8,
		physicalChannelReconfigurationComplete = 9,
		physicalChannelReconfigurationFailure = 10,
		radioBearerReconfigurationComplete = 11,
		radioBearerReconfigurationFailure = 12,
		radioBearerReleaseComplete = 13,
		radioBearerReleaseFailure = 14,
		radioBearerSetupComplete = 15,
		radioBearerSetupFailure = 16,
		rrcConnectionReleaseComplete = 17,
		rrcConnectionSetupComplete = 18,
		rrcStatus = 19,
		securityModeComplete = 20,
		securityModeFailure = 21,
		signallingConnectionReleaseIndication = 22,
		transportChannelReconfigurationComplete = 23,
		transportChannelReconfigurationFailure = 24,
		transportFormatCombinationControlFailure = 25,
		ueCapabilityInformation = 26,
		uplinkDirectTransfer = 27,
		utranMobilityInformationConfirm = 28,
		utranMobilityInformationFailure = 29,
		mbmsModificationRequest = 30,
		uLDCCHMessageTypeSpare1 = 31,
	};
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
	enum DLCCCHMessageTypeChoices {
		cellUpdateConfirm = 0,
		rrcConnectionReject = 1,
		rrcConnectionRelease = 2,
		rrcConnectionSetup = 3,
		uraUpdateConfirm = 4,
		etwsPrimaryNotificationWithSecurity = 5,
		dLCCCHMessageTypeSpare2 = 6,
		dLCCCHMessageTypeSpare1 = 7,
	};
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
	enum ULCCCHMessageTypeChoices {
		cellUpdate = 0,
		rrcConnectionRequest = 1,
		uraUpdate = 2,
		uLCCCHMessageTypeSpare = 3,
	};
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
	enum PCCHMessageTypeChoices {
		pagingType1 = 0,
		pCCHMessageTypeSpare = 1,
	};
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
	enum DLSHCCHMessageTypeChoices {
		physicalSharedChannelAllocation = 0,
		dLSHCCHMessageTypeSpare = 1,
	};
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
	enum ULSHCCHMessageTypeChoices {
		puschCapacityRequest = 0,
		uLSHCCHMessageTypeSpare = 1,
	};
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
	enum BCCHFACHMessageTypeChoices {
		systemInformation = 0,
		systemInformationChangeIndication = 1,
		bCCHFACHMessageTypeSpare2 = 2,
		bCCHFACHMessageTypeSpare1 = 3,
	};
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
	enum MCCHMessageTypeChoices {
		mbmsAccessInformation = 0,
		mbmsCommonPTMRBInformation = 1,
		mbmsCurrentCellPTMRBInformation = 2,
		mbmsGeneralInformation = 3,
		mbmsModifiedServicesInformation = 4,
		mbmsNeighbouringCellPTMRBInformation = 5,
		mbmsUnmodifiedServicesInformation = 6,
		mCCHMessageTypeSpare9 = 7,
		mCCHMessageTypeSpare8 = 8,
		mCCHMessageTypeSpare7 = 9,
		mCCHMessageTypeSpare6 = 10,
		mCCHMessageTypeSpare5 = 11,
		mCCHMessageTypeSpare4 = 12,
		mCCHMessageTypeSpare3 = 13,
		mCCHMessageTypeSpare2 = 14,
		mCCHMessageTypeSpare1 = 15,
	};
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
	enum MSCHMessageTypeChoices {
		mbmsSchedulingInformation = 0,
		mSCHMessageTypeSpare3 = 1,
		mSCHMessageTypeSpare2 = 2,
		mSCHMessageTypeSpare1 = 3,
	};
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
