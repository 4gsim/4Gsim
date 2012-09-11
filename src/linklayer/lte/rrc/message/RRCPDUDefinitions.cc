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

#include "RRCPDUDefinitions.h"

namespace rrc {

const void *HandoverCommandr8IEsNonCriticalExtension::itemsInfo[0] = {
};
bool HandoverCommandr8IEsNonCriticalExtension::itemsPres[0] = {
};
const HandoverCommandr8IEsNonCriticalExtension::Info HandoverCommandr8IEsNonCriticalExtension::theInfo = {
	HandoverCommandr8IEsNonCriticalExtension::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *HandoverCommandr8IEs::itemsInfo[2] = {
	&HandoverCommandr8IEsHandoverCommandMessage::theInfo,
	&HandoverCommandr8IEsNonCriticalExtension::theInfo,
};
bool HandoverCommandr8IEs::itemsPres[2] = {
	1,
	0,
};
const HandoverCommandr8IEs::Info HandoverCommandr8IEs::theInfo = {
	HandoverCommandr8IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};
HandoverCommandr8IEs::HandoverCommandr8IEs(const HandoverCommandr8IEsHandoverCommandMessage& handoverCommandr8IEsHandoverCommandMessage) : Sequence(&theInfo) {
	setHandoverCommandr8IEsHandoverCommandMessage(handoverCommandr8IEsHandoverCommandMessage);
}

const void *HandoverCommandCriticalExtensionsC1::choicesInfo[8] = {
	&HandoverCommandr8IEs::theInfo,
	&HandoverCommandCriticalExtensionsC1Spare7::theInfo,
	&HandoverCommandCriticalExtensionsC1Spare6::theInfo,
	&HandoverCommandCriticalExtensionsC1Spare5::theInfo,
	&HandoverCommandCriticalExtensionsC1Spare4::theInfo,
	&HandoverCommandCriticalExtensionsC1Spare3::theInfo,
	&HandoverCommandCriticalExtensionsC1Spare2::theInfo,
	&HandoverCommandCriticalExtensionsC1Spare1::theInfo,
};
const HandoverCommandCriticalExtensionsC1::Info HandoverCommandCriticalExtensionsC1::theInfo = {
	HandoverCommandCriticalExtensionsC1::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	7
};

const void *HandoverCommandCriticalExtensionsCriticalExtensionsFuture::itemsInfo[0] = {
};
bool HandoverCommandCriticalExtensionsCriticalExtensionsFuture::itemsPres[0] = {
};
const HandoverCommandCriticalExtensionsCriticalExtensionsFuture::Info HandoverCommandCriticalExtensionsCriticalExtensionsFuture::theInfo = {
	HandoverCommandCriticalExtensionsCriticalExtensionsFuture::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *HandoverCommandCriticalExtensions::choicesInfo[2] = {
	&HandoverCommandCriticalExtensionsC1::theInfo,
	&HandoverCommandCriticalExtensionsCriticalExtensionsFuture::theInfo,
};
const HandoverCommandCriticalExtensions::Info HandoverCommandCriticalExtensions::theInfo = {
	HandoverCommandCriticalExtensions::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *HandoverCommand::itemsInfo[1] = {
	&HandoverCommandCriticalExtensions::theInfo,
};
bool HandoverCommand::itemsPres[1] = {
	1,
};
const HandoverCommand::Info HandoverCommand::theInfo = {
	HandoverCommand::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
HandoverCommand::HandoverCommand(const HandoverCommandCriticalExtensions& handoverCommandCriticalExtensions) : Sequence(&theInfo) {
	setHandoverCommandCriticalExtensions(handoverCommandCriticalExtensions);
}

const void *ASConfig::itemsInfo[12] = {
	&MeasConfig::theInfo,
	&RadioResourceConfigDedicated::theInfo,
	&SecurityAlgorithmConfig::theInfo,
	&CRNTI::theInfo,
	&MasterInformationBlock::theInfo,
	&SystemInformationBlockType1::theInfo,
	&SystemInformationBlockType2::theInfo,
	&AntennaInfoCommon::theInfo,
	&ARFCNValueEUTRA::theInfo,
	&ASConfigSourceSystemInformationBlockType1Ext::theInfo,
	&OtherConfigr9::theInfo,
	&SCellToAddModListr10::theInfo,
};
bool ASConfig::itemsPres[12] = {
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	0,
	1,
	0,
};
const ASConfig::Info ASConfig::theInfo = {
	ASConfig::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	12, 2, 0
};
ASConfig::ASConfig(const MeasConfig& sourceMeasConfig, const RadioResourceConfigDedicated& sourceRadioResourceConfig, const SecurityAlgorithmConfig& sourceSecurityAlgorithmConfig, const CRNTI& sourceUEIdentity, const MasterInformationBlock& sourceMasterInformationBlock, const SystemInformationBlockType1& sourceSystemInformationBlockType1, const SystemInformationBlockType2& sourceSystemInformationBlockType2, const AntennaInfoCommon& antennaInfoCommon, const ARFCNValueEUTRA& sourceDlCarrierFreq, const OtherConfigr9& sourceOtherConfigr9) : Sequence(&theInfo) {
	setSourceMeasConfig(sourceMeasConfig);
	setSourceRadioResourceConfig(sourceRadioResourceConfig);
	setSourceSecurityAlgorithmConfig(sourceSecurityAlgorithmConfig);
	setSourceUEIdentity(sourceUEIdentity);
	setSourceMasterInformationBlock(sourceMasterInformationBlock);
	setSourceSystemInformationBlockType1(sourceSystemInformationBlockType1);
	setSourceSystemInformationBlockType2(sourceSystemInformationBlockType2);
	setAntennaInfoCommon(antennaInfoCommon);
	setSourceDlCarrierFreq(sourceDlCarrierFreq);
	setSourceOtherConfigr9(sourceOtherConfigr9);
}

const void *CandidateCellInfor10::itemsInfo[4] = {
	&PhysCellId::theInfo,
	&ARFCNValueEUTRA::theInfo,
	&RSRPRange::theInfo,
	&RSRQRange::theInfo,
};
bool CandidateCellInfor10::itemsPres[4] = {
	1,
	1,
	0,
	0,
};
const CandidateCellInfor10::Info CandidateCellInfor10::theInfo = {
	CandidateCellInfor10::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	4, 2, 0
};
CandidateCellInfor10::CandidateCellInfor10(const PhysCellId& physCellIdr10, const ARFCNValueEUTRA& dlCarrierFreqr10) : Sequence(&theInfo) {
	setPhysCellIdr10(physCellIdr10);
	setDlCarrierFreqr10(dlCarrierFreqr10);
}

const void *RRMConfig::itemsInfo[2] = {
	&RRMConfigue_InactiveTime::theInfo,
	&CandidateCellInfoListr10::theInfo,
};
bool RRMConfig::itemsPres[2] = {
	0,
	0,
};
const RRMConfig::Info RRMConfig::theInfo = {
	RRMConfig::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *AdditionalReestabInfo::itemsInfo[3] = {
	&CellIdentity::theInfo,
	&KeyeNodeBStar::theInfo,
	&ShortMACI::theInfo,
};
bool AdditionalReestabInfo::itemsPres[3] = {
	1,
	1,
	1,
};
const AdditionalReestabInfo::Info AdditionalReestabInfo::theInfo = {
	AdditionalReestabInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};
AdditionalReestabInfo::AdditionalReestabInfo(const CellIdentity& cellIdentity, const KeyeNodeBStar& keyeNodeBStar, const ShortMACI& shortMACI) : Sequence(&theInfo) {
	setCellIdentity(cellIdentity);
	setKeyeNodeBStar(keyeNodeBStar);
	setShortMACI(shortMACI);
}

const void *ReestablishmentInfo::itemsInfo[3] = {
	&PhysCellId::theInfo,
	&ShortMACI::theInfo,
	&AdditionalReestabInfoList::theInfo,
};
bool ReestablishmentInfo::itemsPres[3] = {
	1,
	1,
	0,
};
const ReestablishmentInfo::Info ReestablishmentInfo::theInfo = {
	ReestablishmentInfo::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	3, 1, 0
};
ReestablishmentInfo::ReestablishmentInfo(const PhysCellId& sourcePhysCellId, const ShortMACI& targetCellShortMACI) : Sequence(&theInfo) {
	setSourcePhysCellId(sourcePhysCellId);
	setTargetCellShortMACI(targetCellShortMACI);
}

const void *ASContext::itemsInfo[1] = {
	&ReestablishmentInfo::theInfo,
};
bool ASContext::itemsPres[1] = {
	0,
};
const ASContext::Info ASContext::theInfo = {
	ASContext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *HandoverPreparationInformationv920IEsNonCriticalExtension::itemsInfo[0] = {
};
bool HandoverPreparationInformationv920IEsNonCriticalExtension::itemsPres[0] = {
};
const HandoverPreparationInformationv920IEsNonCriticalExtension::Info HandoverPreparationInformationv920IEsNonCriticalExtension::theInfo = {
	HandoverPreparationInformationv920IEsNonCriticalExtension::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *HandoverPreparationInformationv920IEs::itemsInfo[2] = {
	&HandoverPreparationInformationv920IEsue_ConfigRelease_r9::theInfo,
	&HandoverPreparationInformationv920IEsNonCriticalExtension::theInfo,
};
bool HandoverPreparationInformationv920IEs::itemsPres[2] = {
	0,
	0,
};
const HandoverPreparationInformationv920IEs::Info HandoverPreparationInformationv920IEs::theInfo = {
	HandoverPreparationInformationv920IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *HandoverPreparationInformationr8IEs::itemsInfo[5] = {
	&UECapabilityRATContainerList::theInfo,
	&ASConfig::theInfo,
	&RRMConfig::theInfo,
	&ASContext::theInfo,
	&HandoverPreparationInformationv920IEs::theInfo,
};
bool HandoverPreparationInformationr8IEs::itemsPres[5] = {
	1,
	0,
	0,
	0,
	0,
};
const HandoverPreparationInformationr8IEs::Info HandoverPreparationInformationr8IEs::theInfo = {
	HandoverPreparationInformationr8IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 4, 0
};
HandoverPreparationInformationr8IEs::HandoverPreparationInformationr8IEs(const UECapabilityRATContainerList& ueRadioAccessCapabilityInfo) : Sequence(&theInfo) {
	setUeRadioAccessCapabilityInfo(ueRadioAccessCapabilityInfo);
}

const void *HandoverPreparationInformationCriticalExtensionsC1::choicesInfo[8] = {
	&HandoverPreparationInformationr8IEs::theInfo,
	&HandoverPreparationInformationCriticalExtensionsC1Spare7::theInfo,
	&HandoverPreparationInformationCriticalExtensionsC1Spare6::theInfo,
	&HandoverPreparationInformationCriticalExtensionsC1Spare5::theInfo,
	&HandoverPreparationInformationCriticalExtensionsC1Spare4::theInfo,
	&HandoverPreparationInformationCriticalExtensionsC1Spare3::theInfo,
	&HandoverPreparationInformationCriticalExtensionsC1Spare2::theInfo,
	&HandoverPreparationInformationCriticalExtensionsC1Spare1::theInfo,
};
const HandoverPreparationInformationCriticalExtensionsC1::Info HandoverPreparationInformationCriticalExtensionsC1::theInfo = {
	HandoverPreparationInformationCriticalExtensionsC1::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	7
};

const void *HandoverPreparationInformationCriticalExtensionsCriticalExtensionsFuture::itemsInfo[0] = {
};
bool HandoverPreparationInformationCriticalExtensionsCriticalExtensionsFuture::itemsPres[0] = {
};
const HandoverPreparationInformationCriticalExtensionsCriticalExtensionsFuture::Info HandoverPreparationInformationCriticalExtensionsCriticalExtensionsFuture::theInfo = {
	HandoverPreparationInformationCriticalExtensionsCriticalExtensionsFuture::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *HandoverPreparationInformationCriticalExtensions::choicesInfo[2] = {
	&HandoverPreparationInformationCriticalExtensionsC1::theInfo,
	&HandoverPreparationInformationCriticalExtensionsCriticalExtensionsFuture::theInfo,
};
const HandoverPreparationInformationCriticalExtensions::Info HandoverPreparationInformationCriticalExtensions::theInfo = {
	HandoverPreparationInformationCriticalExtensions::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *HandoverPreparationInformation::itemsInfo[1] = {
	&HandoverPreparationInformationCriticalExtensions::theInfo,
};
bool HandoverPreparationInformation::itemsPres[1] = {
	1,
};
const HandoverPreparationInformation::Info HandoverPreparationInformation::theInfo = {
	HandoverPreparationInformation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
HandoverPreparationInformation::HandoverPreparationInformation(const HandoverPreparationInformationCriticalExtensions& handoverPreparationInformationCriticalExtensions) : Sequence(&theInfo) {
	setHandoverPreparationInformationCriticalExtensions(handoverPreparationInformationCriticalExtensions);
}

const void *UERadioAccessCapabilityInformationr8IEsNonCriticalExtension::itemsInfo[0] = {
};
bool UERadioAccessCapabilityInformationr8IEsNonCriticalExtension::itemsPres[0] = {
};
const UERadioAccessCapabilityInformationr8IEsNonCriticalExtension::Info UERadioAccessCapabilityInformationr8IEsNonCriticalExtension::theInfo = {
	UERadioAccessCapabilityInformationr8IEsNonCriticalExtension::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *UERadioAccessCapabilityInformationr8IEs::itemsInfo[2] = {
	&UERadioAccessCapabilityInformationr8IEsUeRadioAccessCapabilityInfo::theInfo,
	&UERadioAccessCapabilityInformationr8IEsNonCriticalExtension::theInfo,
};
bool UERadioAccessCapabilityInformationr8IEs::itemsPres[2] = {
	1,
	0,
};
const UERadioAccessCapabilityInformationr8IEs::Info UERadioAccessCapabilityInformationr8IEs::theInfo = {
	UERadioAccessCapabilityInformationr8IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};
UERadioAccessCapabilityInformationr8IEs::UERadioAccessCapabilityInformationr8IEs(const UERadioAccessCapabilityInformationr8IEsUeRadioAccessCapabilityInfo& uERadioAccessCapabilityInformationr8IEsUeRadioAccessCapabilityInfo) : Sequence(&theInfo) {
	setUERadioAccessCapabilityInformationr8IEsUeRadioAccessCapabilityInfo(uERadioAccessCapabilityInformationr8IEsUeRadioAccessCapabilityInfo);
}

const void *UERadioAccessCapabilityInformationCriticalExtensionsC1::choicesInfo[8] = {
	&UERadioAccessCapabilityInformationr8IEs::theInfo,
	&UERadioAccessCapabilityInformationCriticalExtensionsC1Spare7::theInfo,
	&UERadioAccessCapabilityInformationCriticalExtensionsC1Spare6::theInfo,
	&UERadioAccessCapabilityInformationCriticalExtensionsC1Spare5::theInfo,
	&UERadioAccessCapabilityInformationCriticalExtensionsC1Spare4::theInfo,
	&UERadioAccessCapabilityInformationCriticalExtensionsC1Spare3::theInfo,
	&UERadioAccessCapabilityInformationCriticalExtensionsC1Spare2::theInfo,
	&UERadioAccessCapabilityInformationCriticalExtensionsC1Spare1::theInfo,
};
const UERadioAccessCapabilityInformationCriticalExtensionsC1::Info UERadioAccessCapabilityInformationCriticalExtensionsC1::theInfo = {
	UERadioAccessCapabilityInformationCriticalExtensionsC1::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	7
};

const void *UERadioAccessCapabilityInformationCriticalExtensionsCriticalExtensionsFuture::itemsInfo[0] = {
};
bool UERadioAccessCapabilityInformationCriticalExtensionsCriticalExtensionsFuture::itemsPres[0] = {
};
const UERadioAccessCapabilityInformationCriticalExtensionsCriticalExtensionsFuture::Info UERadioAccessCapabilityInformationCriticalExtensionsCriticalExtensionsFuture::theInfo = {
	UERadioAccessCapabilityInformationCriticalExtensionsCriticalExtensionsFuture::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *UERadioAccessCapabilityInformationCriticalExtensions::choicesInfo[2] = {
	&UERadioAccessCapabilityInformationCriticalExtensionsC1::theInfo,
	&UERadioAccessCapabilityInformationCriticalExtensionsCriticalExtensionsFuture::theInfo,
};
const UERadioAccessCapabilityInformationCriticalExtensions::Info UERadioAccessCapabilityInformationCriticalExtensions::theInfo = {
	UERadioAccessCapabilityInformationCriticalExtensions::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *UERadioAccessCapabilityInformation::itemsInfo[1] = {
	&UERadioAccessCapabilityInformationCriticalExtensions::theInfo,
};
bool UERadioAccessCapabilityInformation::itemsPres[1] = {
	1,
};
const UERadioAccessCapabilityInformation::Info UERadioAccessCapabilityInformation::theInfo = {
	UERadioAccessCapabilityInformation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
UERadioAccessCapabilityInformation::UERadioAccessCapabilityInformation(const UERadioAccessCapabilityInformationCriticalExtensions& uERadioAccessCapabilityInformationCriticalExtensions) : Sequence(&theInfo) {
	setUERadioAccessCapabilityInformationCriticalExtensions(uERadioAccessCapabilityInformationCriticalExtensions);
}

}
