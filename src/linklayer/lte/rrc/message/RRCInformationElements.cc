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

#include "RRCInformationElements.h"

namespace rrc {

const void *VarLogMeasConfigr10::itemsInfo[3] = {
	&AreaConfigurationr10::theInfo,
	&LoggingDurationr10::theInfo,
	&LoggingIntervalr10::theInfo,
};
bool VarLogMeasConfigr10::itemsPres[3] = {
	0,
	1,
	1,
};
const VarLogMeasConfigr10::Info VarLogMeasConfigr10::theInfo = {
	VarLogMeasConfigr10::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};
VarLogMeasConfigr10::VarLogMeasConfigr10(const LoggingDurationr10& loggingDurationr10, const LoggingIntervalr10& loggingIntervalr10) : Sequence(&theInfo) {
	setLoggingDurationr10(loggingDurationr10);
	setLoggingIntervalr10(loggingIntervalr10);
}

const void *VarLogMeasReportr10::itemsInfo[6] = {
	&TraceReferencer10::theInfo,
	&VarLogMeasReportr10TraceRecordingSessionRefr10::theInfo,
	&VarLogMeasReportr10TceIdr10::theInfo,
	&PLMNIdentity::theInfo,
	&AbsoluteTimeInfor10::theInfo,
	&LogMeasInfoList2r10::theInfo,
};
bool VarLogMeasReportr10::itemsPres[6] = {
	1,
	1,
	1,
	1,
	1,
	1,
};
const VarLogMeasReportr10::Info VarLogMeasReportr10::theInfo = {
	VarLogMeasReportr10::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 0, 0
};
VarLogMeasReportr10::VarLogMeasReportr10(const TraceReferencer10& traceReferencer10, const VarLogMeasReportr10TraceRecordingSessionRefr10& varLogMeasReportr10TraceRecordingSessionRefr10, const VarLogMeasReportr10TceIdr10& varLogMeasReportr10TceIdr10, const PLMNIdentity& plmnIdentityr10, const AbsoluteTimeInfor10& absoluteTimeInfor10, const LogMeasInfoList2r10& logMeasInfoListr10) : Sequence(&theInfo) {
	setTraceReferencer10(traceReferencer10);
	setVarLogMeasReportr10TraceRecordingSessionRefr10(varLogMeasReportr10TraceRecordingSessionRefr10);
	setVarLogMeasReportr10TceIdr10(varLogMeasReportr10TceIdr10);
	setPlmnIdentityr10(plmnIdentityr10);
	setAbsoluteTimeInfor10(absoluteTimeInfor10);
	setLogMeasInfoListr10(logMeasInfoListr10);
}

const void *VarMeasConfigSpeedStateParsSetup::itemsInfo[2] = {
	&MobilityStateParameters::theInfo,
	&SpeedStateScaleFactors::theInfo,
};
bool VarMeasConfigSpeedStateParsSetup::itemsPres[2] = {
	1,
	1,
};
const VarMeasConfigSpeedStateParsSetup::Info VarMeasConfigSpeedStateParsSetup::theInfo = {
	VarMeasConfigSpeedStateParsSetup::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
VarMeasConfigSpeedStateParsSetup::VarMeasConfigSpeedStateParsSetup(const MobilityStateParameters& mobilityStateParameters, const SpeedStateScaleFactors& timeToTriggerSF) : Sequence(&theInfo) {
	setMobilityStateParameters(mobilityStateParameters);
	setTimeToTriggerSF(timeToTriggerSF);
}

const void *VarMeasConfigSpeedStatePars::choicesInfo[2] = {
	&VarMeasConfigSpeedStateParsRelease::theInfo,
	&VarMeasConfigSpeedStateParsSetup::theInfo,
};
const VarMeasConfigSpeedStatePars::Info VarMeasConfigSpeedStatePars::theInfo = {
	VarMeasConfigSpeedStatePars::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *VarMeasConfig::itemsInfo[6] = {
	&MeasIdToAddModList::theInfo,
	&MeasObjectToAddModList::theInfo,
	&ReportConfigToAddModList::theInfo,
	&QuantityConfig::theInfo,
	&VarMeasConfigSMeasure::theInfo,
	&VarMeasConfigSpeedStatePars::theInfo,
};
bool VarMeasConfig::itemsPres[6] = {
	0,
	0,
	0,
	0,
	0,
	0,
};
const VarMeasConfig::Info VarMeasConfig::theInfo = {
	VarMeasConfig::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 6, 0
};

const void *CellsTriggeredListItemPhysCellIdUTRA::choicesInfo[2] = {
	&PhysCellIdUTRAFDD::theInfo,
	&PhysCellIdUTRATDD::theInfo,
};
const CellsTriggeredListItemPhysCellIdUTRA::Info CellsTriggeredListItemPhysCellIdUTRA::theInfo = {
	CellsTriggeredListItemPhysCellIdUTRA::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *CellsTriggeredListItemPhysCellIdGERAN::itemsInfo[2] = {
	&CarrierFreqGERAN::theInfo,
	&PhysCellIdGERAN::theInfo,
};
bool CellsTriggeredListItemPhysCellIdGERAN::itemsPres[2] = {
	1,
	1,
};
const CellsTriggeredListItemPhysCellIdGERAN::Info CellsTriggeredListItemPhysCellIdGERAN::theInfo = {
	CellsTriggeredListItemPhysCellIdGERAN::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
CellsTriggeredListItemPhysCellIdGERAN::CellsTriggeredListItemPhysCellIdGERAN(const CarrierFreqGERAN& carrierFreq, const PhysCellIdGERAN& physCellId) : Sequence(&theInfo) {
	setCarrierFreq(carrierFreq);
	setPhysCellId(physCellId);
}

const void *CellsTriggeredListItem::choicesInfo[4] = {
	&PhysCellId::theInfo,
	&CellsTriggeredListItemPhysCellIdUTRA::theInfo,
	&CellsTriggeredListItemPhysCellIdGERAN::theInfo,
	&PhysCellIdCDMA2000::theInfo,
};
const CellsTriggeredListItem::Info CellsTriggeredListItem::theInfo = {
	CellsTriggeredListItem::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	3
};

const void *VarMeasReport::itemsInfo[3] = {
	&MeasId::theInfo,
	&CellsTriggeredList::theInfo,
	&VarMeasReportNumberOfReportsSent::theInfo,
};
bool VarMeasReport::itemsPres[3] = {
	1,
	0,
	1,
};
const VarMeasReport::Info VarMeasReport::theInfo = {
	VarMeasReport::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};
VarMeasReport::VarMeasReport(const MeasId& measId, const VarMeasReportNumberOfReportsSent& varMeasReportNumberOfReportsSent) : Sequence(&theInfo) {
	setMeasId(measId);
	setVarMeasReportNumberOfReportsSent(varMeasReportNumberOfReportsSent);
}

const void *VarRLFReportr10::itemsInfo[2] = {
	&RLFReportr9::theInfo,
	&PLMNIdentity::theInfo,
};
bool VarRLFReportr10::itemsPres[2] = {
	1,
	1,
};
const VarRLFReportr10::Info VarRLFReportr10::theInfo = {
	VarRLFReportr10::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
VarRLFReportr10::VarRLFReportr10(const RLFReportr9& rlfReportr10, const PLMNIdentity& plmnIdentityr10) : Sequence(&theInfo) {
	setRlfReportr10(rlfReportr10);
	setPlmnIdentityr10(plmnIdentityr10);
}

const void *VarShortMACInput::itemsInfo[3] = {
	&CellIdentity::theInfo,
	&PhysCellId::theInfo,
	&CRNTI::theInfo,
};
bool VarShortMACInput::itemsPres[3] = {
	1,
	1,
	1,
};
const VarShortMACInput::Info VarShortMACInput::theInfo = {
	VarShortMACInput::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};
VarShortMACInput::VarShortMACInput(const CellIdentity& cellIdentity, const PhysCellId& physCellId, const CRNTI& cRNTI) : Sequence(&theInfo) {
	setCellIdentity(cellIdentity);
	setPhysCellId(physCellId);
	setCRNTI(cRNTI);
}

}
