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

#include "RRCClassDefinitions.h"

namespace rrc {

const void *DLDCCHMessageType::choicesInfo[32] = {
	&ActiveSetUpdate::theInfo,
	&AssistanceDataDelivery::theInfo,
	&CellChangeOrderFromUTRAN::theInfo,
	&CellUpdateConfirm::theInfo,
	&CounterCheck::theInfo,
	&DownlinkDirectTransfer::theInfo,
	&HandoverFromUTRANCommandGSM::theInfo,
	&HandoverFromUTRANCommandCDMA2000::theInfo,
	&MeasurementControl::theInfo,
	&PagingType2::theInfo,
	&PhysicalChannelReconfiguration::theInfo,
	&PhysicalSharedChannelAllocation::theInfo,
	&RadioBearerReconfiguration::theInfo,
	&RadioBearerRelease::theInfo,
	&RadioBearerSetup::theInfo,
	&RRCConnectionRelease::theInfo,
	&SecurityModeCommand::theInfo,
	&SignallingConnectionRelease::theInfo,
	&TransportChannelReconfiguration::theInfo,
	&TransportFormatCombinationControl::theInfo,
	&UECapabilityEnquiry::theInfo,
	&UECapabilityInformationConfirm::theInfo,
	&UplinkPhysicalChannelControl::theInfo,
	&URAUpdateConfirm::theInfo,
	&UTRANMobilityInformation::theInfo,
	&HandoverFromUTRANCommandGERANIu::theInfo,
	&MBMSModifiedServicesInformation::theInfo,
	&ETWSPrimaryNotificationWithSecurity::theInfo,
	&HandoverFromUTRANCommandEUTRA::theInfo,
	&DLDCCHMessageTypeSpare3::theInfo,
	&DLDCCHMessageTypeSpare2::theInfo,
	&DLDCCHMessageTypeSpare1::theInfo,
};
const DLDCCHMessageType::Info DLDCCHMessageType::theInfo = {
	DLDCCHMessageType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	31
};

const void *DLDCCHMessage::itemsInfo[2] = {
	&IntegrityCheckInfo::theInfo,
	&DLDCCHMessageType::theInfo,
};
bool DLDCCHMessage::itemsPres[2] = {
	0,
	1,
};
const DLDCCHMessage::Info DLDCCHMessage::theInfo = {
	DLDCCHMessage::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *ULDCCHMessageType::choicesInfo[32] = {
	&ActiveSetUpdateComplete::theInfo,
	&ActiveSetUpdateFailure::theInfo,
	&CellChangeOrderFromUTRANFailure::theInfo,
	&CounterCheckResponse::theInfo,
	&HandoverToUTRANComplete::theInfo,
	&InitialDirectTransfer::theInfo,
	&HandoverFromUTRANFailure::theInfo,
	&MeasurementControlFailure::theInfo,
	&MeasurementReport::theInfo,
	&PhysicalChannelReconfigurationComplete::theInfo,
	&PhysicalChannelReconfigurationFailure::theInfo,
	&RadioBearerReconfigurationComplete::theInfo,
	&RadioBearerReconfigurationFailure::theInfo,
	&RadioBearerReleaseComplete::theInfo,
	&RadioBearerReleaseFailure::theInfo,
	&RadioBearerSetupComplete::theInfo,
	&RadioBearerSetupFailure::theInfo,
	&RRCConnectionReleaseComplete::theInfo,
	&RRCConnectionSetupComplete::theInfo,
	&RRCStatus::theInfo,
	&SecurityModeComplete::theInfo,
	&SecurityModeFailure::theInfo,
	&SignallingConnectionReleaseIndication::theInfo,
	&TransportChannelReconfigurationComplete::theInfo,
	&TransportChannelReconfigurationFailure::theInfo,
	&TransportFormatCombinationControlFailure::theInfo,
	&UECapabilityInformation::theInfo,
	&UplinkDirectTransfer::theInfo,
	&UTRANMobilityInformationConfirm::theInfo,
	&UTRANMobilityInformationFailure::theInfo,
	&MBMSModificationRequest::theInfo,
	&ULDCCHMessageTypeSpare1::theInfo,
};
const ULDCCHMessageType::Info ULDCCHMessageType::theInfo = {
	ULDCCHMessageType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	31
};

const void *ULDCCHMessage::itemsInfo[2] = {
	&IntegrityCheckInfo::theInfo,
	&ULDCCHMessageType::theInfo,
};
bool ULDCCHMessage::itemsPres[2] = {
	0,
	1,
};
const ULDCCHMessage::Info ULDCCHMessage::theInfo = {
	ULDCCHMessage::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *DLCCCHMessageType::choicesInfo[8] = {
	&CellUpdateConfirmCCCH::theInfo,
	&RRCConnectionReject::theInfo,
	&RRCConnectionReleaseCCCH::theInfo,
	&RRCConnectionSetup::theInfo,
	&URAUpdateConfirmCCCH::theInfo,
	&ETWSPrimaryNotificationWithSecurity::theInfo,
	&DLCCCHMessageTypeSpare2::theInfo,
	&DLCCCHMessageTypeSpare1::theInfo,
};
const DLCCCHMessageType::Info DLCCCHMessageType::theInfo = {
	DLCCCHMessageType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	7
};

const void *DLCCCHMessage::itemsInfo[2] = {
	&IntegrityCheckInfo::theInfo,
	&DLCCCHMessageType::theInfo,
};
bool DLCCCHMessage::itemsPres[2] = {
	0,
	1,
};
const DLCCCHMessage::Info DLCCCHMessage::theInfo = {
	DLCCCHMessage::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *ULCCCHMessageType::choicesInfo[4] = {
	&CellUpdate::theInfo,
	&RRCConnectionRequest::theInfo,
	&URAUpdate::theInfo,
	&ULCCCHMessageTypeSpare::theInfo,
};
const ULCCCHMessageType::Info ULCCCHMessageType::theInfo = {
	ULCCCHMessageType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	3
};

const void *ULCCCHMessage::itemsInfo[2] = {
	&IntegrityCheckInfo::theInfo,
	&ULCCCHMessageType::theInfo,
};
bool ULCCCHMessage::itemsPres[2] = {
	0,
	1,
};
const ULCCCHMessage::Info ULCCCHMessage::theInfo = {
	ULCCCHMessage::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *PCCHMessageType::choicesInfo[2] = {
	&PagingType1::theInfo,
	&PCCHMessageTypeSpare::theInfo,
};
const PCCHMessageType::Info PCCHMessageType::theInfo = {
	PCCHMessageType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *PCCHMessage::itemsInfo[1] = {
	&PCCHMessageType::theInfo,
};
bool PCCHMessage::itemsPres[1] = {
	1,
};
const PCCHMessage::Info PCCHMessage::theInfo = {
	PCCHMessage::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DLSHCCHMessageType::choicesInfo[2] = {
	&PhysicalSharedChannelAllocation::theInfo,
	&DLSHCCHMessageTypeSpare::theInfo,
};
const DLSHCCHMessageType::Info DLSHCCHMessageType::theInfo = {
	DLSHCCHMessageType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLSHCCHMessage::itemsInfo[1] = {
	&DLSHCCHMessageType::theInfo,
};
bool DLSHCCHMessage::itemsPres[1] = {
	1,
};
const DLSHCCHMessage::Info DLSHCCHMessage::theInfo = {
	DLSHCCHMessage::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ULSHCCHMessageType::choicesInfo[2] = {
	&PUSCHCapacityRequest::theInfo,
	&ULSHCCHMessageTypeSpare::theInfo,
};
const ULSHCCHMessageType::Info ULSHCCHMessageType::theInfo = {
	ULSHCCHMessageType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULSHCCHMessage::itemsInfo[1] = {
	&ULSHCCHMessageType::theInfo,
};
bool ULSHCCHMessage::itemsPres[1] = {
	1,
};
const ULSHCCHMessage::Info ULSHCCHMessage::theInfo = {
	ULSHCCHMessage::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *BCCHFACHMessageType::choicesInfo[4] = {
	&SystemInformationFACH::theInfo,
	&SystemInformationChangeIndication::theInfo,
	&BCCHFACHMessageTypeSpare2::theInfo,
	&BCCHFACHMessageTypeSpare1::theInfo,
};
const BCCHFACHMessageType::Info BCCHFACHMessageType::theInfo = {
	BCCHFACHMessageType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	3
};

const void *BCCHFACHMessage::itemsInfo[1] = {
	&BCCHFACHMessageType::theInfo,
};
bool BCCHFACHMessage::itemsPres[1] = {
	1,
};
const BCCHFACHMessage::Info BCCHFACHMessage::theInfo = {
	BCCHFACHMessage::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *BCCHBCHMessage::itemsInfo[1] = {
	&SystemInformationBCH::theInfo,
};
bool BCCHBCHMessage::itemsPres[1] = {
	1,
};
const BCCHBCHMessage::Info BCCHBCHMessage::theInfo = {
	BCCHBCHMessage::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MCCHMessageType::choicesInfo[16] = {
	&MBMSAccessInformation::theInfo,
	&MBMSCommonPTMRBInformation::theInfo,
	&MBMSCurrentCellPTMRBInformation::theInfo,
	&MBMSGeneralInformation::theInfo,
	&MBMSModifiedServicesInformation::theInfo,
	&MBMSNeighbouringCellPTMRBInformation::theInfo,
	&MBMSUnmodifiedServicesInformation::theInfo,
	&MCCHMessageTypeSpare9::theInfo,
	&MCCHMessageTypeSpare8::theInfo,
	&MCCHMessageTypeSpare7::theInfo,
	&MCCHMessageTypeSpare6::theInfo,
	&MCCHMessageTypeSpare5::theInfo,
	&MCCHMessageTypeSpare4::theInfo,
	&MCCHMessageTypeSpare3::theInfo,
	&MCCHMessageTypeSpare2::theInfo,
	&MCCHMessageTypeSpare1::theInfo,
};
const MCCHMessageType::Info MCCHMessageType::theInfo = {
	MCCHMessageType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	15
};

const void *MCCHMessage::itemsInfo[1] = {
	&MCCHMessageType::theInfo,
};
bool MCCHMessage::itemsPres[1] = {
	1,
};
const MCCHMessage::Info MCCHMessage::theInfo = {
	MCCHMessage::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MSCHMessageType::choicesInfo[4] = {
	&MBMSSchedulingInformation::theInfo,
	&MSCHMessageTypeSpare3::theInfo,
	&MSCHMessageTypeSpare2::theInfo,
	&MSCHMessageTypeSpare1::theInfo,
};
const MSCHMessageType::Info MSCHMessageType::theInfo = {
	MSCHMessageType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	3
};

const void *MSCHMessage::itemsInfo[1] = {
	&MSCHMessageType::theInfo,
};
bool MSCHMessage::itemsPres[1] = {
	1,
};
const MSCHMessage::Info MSCHMessage::theInfo = {
	MSCHMessage::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

}
