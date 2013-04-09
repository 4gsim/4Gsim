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

const void *PHICHConfig::itemsInfo[2] = {
	&PHICHConfigphich_Duration::theInfo,
	&PHICHConfigphich_Resource::theInfo,
};
bool PHICHConfig::itemsPres[2] = {
	1,
	1,
};
const PHICHConfig::Info PHICHConfig::theInfo = {
	PHICHConfig::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
PHICHConfig::PHICHConfig(const PHICHConfigphich_Duration& pHICHConfigphich_Duration, const PHICHConfigphich_Resource& pHICHConfigphich_Resource) : Sequence(&theInfo) {
	setPHICHConfigphich_Duration(pHICHConfigphich_Duration);
	setPHICHConfigphich_Resource(pHICHConfigphich_Resource);
}

const void *MasterInformationBlock::itemsInfo[4] = {
	&MasterInformationBlockdl_Bandwidth::theInfo,
	&PHICHConfig::theInfo,
	&MasterInformationBlockSystemFrameNumber::theInfo,
	&MasterInformationBlockSpare::theInfo,
};
bool MasterInformationBlock::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const MasterInformationBlock::Info MasterInformationBlock::theInfo = {
	MasterInformationBlock::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 0, 0
};
MasterInformationBlock::MasterInformationBlock(const MasterInformationBlockdl_Bandwidth& masterInformationBlockdl_Bandwidth, const PHICHConfig& phichConfig, const MasterInformationBlockSystemFrameNumber& masterInformationBlockSystemFrameNumber, const MasterInformationBlockSpare& masterInformationBlockSpare) : Sequence(&theInfo) {
	setMasterInformationBlockdl_Bandwidth(masterInformationBlockdl_Bandwidth);
	setPhichConfig(phichConfig);
	setMasterInformationBlockSystemFrameNumber(masterInformationBlockSystemFrameNumber);
	setMasterInformationBlockSpare(masterInformationBlockSpare);
}

const void *BCCHBCHMessage::itemsInfo[1] = {
	&BCCHBCHMessageType::theInfo,
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
BCCHBCHMessage::BCCHBCHMessage(const BCCHBCHMessageType& message) : Sequence(&theInfo) {
	setMessage(message);
}

const void *ACBarringConfig::itemsInfo[3] = {
	&ACBarringConfigac_BarringFactor::theInfo,
	&ACBarringConfigac_BarringTime::theInfo,
	&ACBarringConfigAcBarringForSpecialAC::theInfo,
};
bool ACBarringConfig::itemsPres[3] = {
	1,
	1,
	1,
};
const ACBarringConfig::Info ACBarringConfig::theInfo = {
	ACBarringConfig::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};
ACBarringConfig::ACBarringConfig(const ACBarringConfigac_BarringFactor& aCBarringConfigac_BarringFactor, const ACBarringConfigac_BarringTime& aCBarringConfigac_BarringTime, const ACBarringConfigAcBarringForSpecialAC& aCBarringConfigAcBarringForSpecialAC) : Sequence(&theInfo) {
	setACBarringConfigac_BarringFactor(aCBarringConfigac_BarringFactor);
	setACBarringConfigac_BarringTime(aCBarringConfigac_BarringTime);
	setACBarringConfigAcBarringForSpecialAC(aCBarringConfigAcBarringForSpecialAC);
}

const void *SystemInformationBlockType2AcBarringInfo::itemsInfo[3] = {
	&SystemInformationBlockType2AcBarringInfoAcBarringForEmergency::theInfo,
	&ACBarringConfig::theInfo,
	&ACBarringConfig::theInfo,
};
bool SystemInformationBlockType2AcBarringInfo::itemsPres[3] = {
	1,
	0,
	0,
};
const SystemInformationBlockType2AcBarringInfo::Info SystemInformationBlockType2AcBarringInfo::theInfo = {
	SystemInformationBlockType2AcBarringInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};
SystemInformationBlockType2AcBarringInfo::SystemInformationBlockType2AcBarringInfo(const SystemInformationBlockType2AcBarringInfoAcBarringForEmergency& systemInformationBlockType2AcBarringInfoAcBarringForEmergency) : Sequence(&theInfo) {
	setSystemInformationBlockType2AcBarringInfoAcBarringForEmergency(systemInformationBlockType2AcBarringInfoAcBarringForEmergency);
}

const void *RACHConfigCommonPreambleInfoPreamblesGroupAConfig::itemsInfo[3] = {
	&RACHConfigCommonPreambleInfoPreamblesGroupAConfigsizeOfRA_PreamblesGroupA::theInfo,
	&RACHConfigCommonPreambleInfoPreamblesGroupAConfigmessageSizeGroupA::theInfo,
	&RACHConfigCommonPreambleInfoPreamblesGroupAConfigmessagePowerOffsetGroupB::theInfo,
};
bool RACHConfigCommonPreambleInfoPreamblesGroupAConfig::itemsPres[3] = {
	1,
	1,
	1,
};
const RACHConfigCommonPreambleInfoPreamblesGroupAConfig::Info RACHConfigCommonPreambleInfoPreamblesGroupAConfig::theInfo = {
	RACHConfigCommonPreambleInfoPreamblesGroupAConfig::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	3, 0, 0
};
RACHConfigCommonPreambleInfoPreamblesGroupAConfig::RACHConfigCommonPreambleInfoPreamblesGroupAConfig(const RACHConfigCommonPreambleInfoPreamblesGroupAConfigsizeOfRA_PreamblesGroupA& rACHConfigCommonPreambleInfoPreamblesGroupAConfigsizeOfRA_PreamblesGroupA, const RACHConfigCommonPreambleInfoPreamblesGroupAConfigmessageSizeGroupA& rACHConfigCommonPreambleInfoPreamblesGroupAConfigmessageSizeGroupA, const RACHConfigCommonPreambleInfoPreamblesGroupAConfigmessagePowerOffsetGroupB& rACHConfigCommonPreambleInfoPreamblesGroupAConfigmessagePowerOffsetGroupB) : Sequence(&theInfo) {
	setRACHConfigCommonPreambleInfoPreamblesGroupAConfigsizeOfRA_PreamblesGroupA(rACHConfigCommonPreambleInfoPreamblesGroupAConfigsizeOfRA_PreamblesGroupA);
	setRACHConfigCommonPreambleInfoPreamblesGroupAConfigmessageSizeGroupA(rACHConfigCommonPreambleInfoPreamblesGroupAConfigmessageSizeGroupA);
	setRACHConfigCommonPreambleInfoPreamblesGroupAConfigmessagePowerOffsetGroupB(rACHConfigCommonPreambleInfoPreamblesGroupAConfigmessagePowerOffsetGroupB);
}

const void *RACHConfigCommonPreambleInfo::itemsInfo[2] = {
	&RACHConfigCommonPreambleInfonumberOfRA_Preambles::theInfo,
	&RACHConfigCommonPreambleInfoPreamblesGroupAConfig::theInfo,
};
bool RACHConfigCommonPreambleInfo::itemsPres[2] = {
	1,
	0,
};
const RACHConfigCommonPreambleInfo::Info RACHConfigCommonPreambleInfo::theInfo = {
	RACHConfigCommonPreambleInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};
RACHConfigCommonPreambleInfo::RACHConfigCommonPreambleInfo(const RACHConfigCommonPreambleInfonumberOfRA_Preambles& rACHConfigCommonPreambleInfonumberOfRA_Preambles) : Sequence(&theInfo) {
	setRACHConfigCommonPreambleInfonumberOfRA_Preambles(rACHConfigCommonPreambleInfonumberOfRA_Preambles);
}

const void *RACHConfigCommonPowerRampingParameters::itemsInfo[2] = {
	&RACHConfigCommonPowerRampingParameterspowerRampingStep::theInfo,
	&RACHConfigCommonPowerRampingParameterspreambleInitialReceivedTargetPower::theInfo,
};
bool RACHConfigCommonPowerRampingParameters::itemsPres[2] = {
	1,
	1,
};
const RACHConfigCommonPowerRampingParameters::Info RACHConfigCommonPowerRampingParameters::theInfo = {
	RACHConfigCommonPowerRampingParameters::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
RACHConfigCommonPowerRampingParameters::RACHConfigCommonPowerRampingParameters(const RACHConfigCommonPowerRampingParameterspowerRampingStep& rACHConfigCommonPowerRampingParameterspowerRampingStep, const RACHConfigCommonPowerRampingParameterspreambleInitialReceivedTargetPower& rACHConfigCommonPowerRampingParameterspreambleInitialReceivedTargetPower) : Sequence(&theInfo) {
	setRACHConfigCommonPowerRampingParameterspowerRampingStep(rACHConfigCommonPowerRampingParameterspowerRampingStep);
	setRACHConfigCommonPowerRampingParameterspreambleInitialReceivedTargetPower(rACHConfigCommonPowerRampingParameterspreambleInitialReceivedTargetPower);
}

const void *RACHConfigCommonRaSupervisionInfo::itemsInfo[3] = {
	&RACHConfigCommonRaSupervisionInfopreambleTransMax::theInfo,
	&RACHConfigCommonRaSupervisionInfora_ResponseWindowSize::theInfo,
	&RACHConfigCommonRaSupervisionInfomac_ContentionResolutionTimer::theInfo,
};
bool RACHConfigCommonRaSupervisionInfo::itemsPres[3] = {
	1,
	1,
	1,
};
const RACHConfigCommonRaSupervisionInfo::Info RACHConfigCommonRaSupervisionInfo::theInfo = {
	RACHConfigCommonRaSupervisionInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};
RACHConfigCommonRaSupervisionInfo::RACHConfigCommonRaSupervisionInfo(const RACHConfigCommonRaSupervisionInfopreambleTransMax& rACHConfigCommonRaSupervisionInfopreambleTransMax, const RACHConfigCommonRaSupervisionInfora_ResponseWindowSize& rACHConfigCommonRaSupervisionInfora_ResponseWindowSize, const RACHConfigCommonRaSupervisionInfomac_ContentionResolutionTimer& rACHConfigCommonRaSupervisionInfomac_ContentionResolutionTimer) : Sequence(&theInfo) {
	setRACHConfigCommonRaSupervisionInfopreambleTransMax(rACHConfigCommonRaSupervisionInfopreambleTransMax);
	setRACHConfigCommonRaSupervisionInfora_ResponseWindowSize(rACHConfigCommonRaSupervisionInfora_ResponseWindowSize);
	setRACHConfigCommonRaSupervisionInfomac_ContentionResolutionTimer(rACHConfigCommonRaSupervisionInfomac_ContentionResolutionTimer);
}

const void *RACHConfigCommon::itemsInfo[4] = {
	&RACHConfigCommonPreambleInfo::theInfo,
	&RACHConfigCommonPowerRampingParameters::theInfo,
	&RACHConfigCommonRaSupervisionInfo::theInfo,
	&RACHConfigCommonMaxHARQMsg3Tx::theInfo,
};
bool RACHConfigCommon::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const RACHConfigCommon::Info RACHConfigCommon::theInfo = {
	RACHConfigCommon::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	4, 0, 0
};
RACHConfigCommon::RACHConfigCommon(const RACHConfigCommonPreambleInfo& rACHConfigCommonPreambleInfo, const RACHConfigCommonPowerRampingParameters& rACHConfigCommonPowerRampingParameters, const RACHConfigCommonRaSupervisionInfo& rACHConfigCommonRaSupervisionInfo, const RACHConfigCommonMaxHARQMsg3Tx& rACHConfigCommonMaxHARQMsg3Tx) : Sequence(&theInfo) {
	setRACHConfigCommonPreambleInfo(rACHConfigCommonPreambleInfo);
	setRACHConfigCommonPowerRampingParameters(rACHConfigCommonPowerRampingParameters);
	setRACHConfigCommonRaSupervisionInfo(rACHConfigCommonRaSupervisionInfo);
	setRACHConfigCommonMaxHARQMsg3Tx(rACHConfigCommonMaxHARQMsg3Tx);
}

const void *BCCHConfig::itemsInfo[1] = {
	&BCCHConfigmodificationPeriodCoeff::theInfo,
};
bool BCCHConfig::itemsPres[1] = {
	1,
};
const BCCHConfig::Info BCCHConfig::theInfo = {
	BCCHConfig::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
BCCHConfig::BCCHConfig(const BCCHConfigmodificationPeriodCoeff& bCCHConfigmodificationPeriodCoeff) : Sequence(&theInfo) {
	setBCCHConfigmodificationPeriodCoeff(bCCHConfigmodificationPeriodCoeff);
}

const void *PCCHConfig::itemsInfo[2] = {
	&PCCHConfigdefaultPagingCycle::theInfo,
	&PCCHConfignB::theInfo,
};
bool PCCHConfig::itemsPres[2] = {
	1,
	1,
};
const PCCHConfig::Info PCCHConfig::theInfo = {
	PCCHConfig::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
PCCHConfig::PCCHConfig(const PCCHConfigdefaultPagingCycle& pCCHConfigdefaultPagingCycle, const PCCHConfignB& pCCHConfignB) : Sequence(&theInfo) {
	setPCCHConfigdefaultPagingCycle(pCCHConfigdefaultPagingCycle);
	setPCCHConfignB(pCCHConfignB);
}

const void *PRACHConfigInfo::itemsInfo[4] = {
	&PRACHConfigInfoPrachConfigIndex::theInfo,
	&PRACHConfigInfoHighSpeedFlag::theInfo,
	&PRACHConfigInfoZeroCorrelationZoneConfig::theInfo,
	&PRACHConfigInfoPrachFreqOffset::theInfo,
};
bool PRACHConfigInfo::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const PRACHConfigInfo::Info PRACHConfigInfo::theInfo = {
	PRACHConfigInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 0, 0
};
PRACHConfigInfo::PRACHConfigInfo(const PRACHConfigInfoPrachConfigIndex& pRACHConfigInfoPrachConfigIndex, const PRACHConfigInfoHighSpeedFlag& pRACHConfigInfoHighSpeedFlag, const PRACHConfigInfoZeroCorrelationZoneConfig& pRACHConfigInfoZeroCorrelationZoneConfig, const PRACHConfigInfoPrachFreqOffset& pRACHConfigInfoPrachFreqOffset) : Sequence(&theInfo) {
	setPRACHConfigInfoPrachConfigIndex(pRACHConfigInfoPrachConfigIndex);
	setPRACHConfigInfoHighSpeedFlag(pRACHConfigInfoHighSpeedFlag);
	setPRACHConfigInfoZeroCorrelationZoneConfig(pRACHConfigInfoZeroCorrelationZoneConfig);
	setPRACHConfigInfoPrachFreqOffset(pRACHConfigInfoPrachFreqOffset);
}

const void *PRACHConfigSIB::itemsInfo[2] = {
	&PRACHConfigSIBRootSequenceIndex::theInfo,
	&PRACHConfigInfo::theInfo,
};
bool PRACHConfigSIB::itemsPres[2] = {
	1,
	1,
};
const PRACHConfigSIB::Info PRACHConfigSIB::theInfo = {
	PRACHConfigSIB::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
PRACHConfigSIB::PRACHConfigSIB(const PRACHConfigSIBRootSequenceIndex& pRACHConfigSIBRootSequenceIndex, const PRACHConfigInfo& prachConfigInfo) : Sequence(&theInfo) {
	setPRACHConfigSIBRootSequenceIndex(pRACHConfigSIBRootSequenceIndex);
	setPrachConfigInfo(prachConfigInfo);
}

const void *PDSCHConfigCommon::itemsInfo[2] = {
	&PDSCHConfigCommonReferenceSignalPower::theInfo,
	&PDSCHConfigCommonPb::theInfo,
};
bool PDSCHConfigCommon::itemsPres[2] = {
	1,
	1,
};
const PDSCHConfigCommon::Info PDSCHConfigCommon::theInfo = {
	PDSCHConfigCommon::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
PDSCHConfigCommon::PDSCHConfigCommon(const PDSCHConfigCommonReferenceSignalPower& pDSCHConfigCommonReferenceSignalPower, const PDSCHConfigCommonPb& pDSCHConfigCommonPb) : Sequence(&theInfo) {
	setPDSCHConfigCommonReferenceSignalPower(pDSCHConfigCommonReferenceSignalPower);
	setPDSCHConfigCommonPb(pDSCHConfigCommonPb);
}

const void *PUSCHConfigCommonPuschConfigBasic::itemsInfo[4] = {
	&PUSCHConfigCommonPuschConfigBasicNSB::theInfo,
	&PUSCHConfigCommonPuschConfigBasichoppingMode::theInfo,
	&PUSCHConfigCommonPuschConfigBasicPuschHoppingOffset::theInfo,
	&PUSCHConfigCommonPuschConfigBasicEnable64QAM::theInfo,
};
bool PUSCHConfigCommonPuschConfigBasic::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const PUSCHConfigCommonPuschConfigBasic::Info PUSCHConfigCommonPuschConfigBasic::theInfo = {
	PUSCHConfigCommonPuschConfigBasic::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 0, 0
};
PUSCHConfigCommonPuschConfigBasic::PUSCHConfigCommonPuschConfigBasic(const PUSCHConfigCommonPuschConfigBasicNSB& pUSCHConfigCommonPuschConfigBasicNSB, const PUSCHConfigCommonPuschConfigBasichoppingMode& pUSCHConfigCommonPuschConfigBasichoppingMode, const PUSCHConfigCommonPuschConfigBasicPuschHoppingOffset& pUSCHConfigCommonPuschConfigBasicPuschHoppingOffset, const PUSCHConfigCommonPuschConfigBasicEnable64QAM& pUSCHConfigCommonPuschConfigBasicEnable64QAM) : Sequence(&theInfo) {
	setPUSCHConfigCommonPuschConfigBasicNSB(pUSCHConfigCommonPuschConfigBasicNSB);
	setPUSCHConfigCommonPuschConfigBasichoppingMode(pUSCHConfigCommonPuschConfigBasichoppingMode);
	setPUSCHConfigCommonPuschConfigBasicPuschHoppingOffset(pUSCHConfigCommonPuschConfigBasicPuschHoppingOffset);
	setPUSCHConfigCommonPuschConfigBasicEnable64QAM(pUSCHConfigCommonPuschConfigBasicEnable64QAM);
}

const void *ULReferenceSignalsPUSCH::itemsInfo[4] = {
	&ULReferenceSignalsPUSCHGroupHoppingEnabled::theInfo,
	&ULReferenceSignalsPUSCHGroupAssignmentPUSCH::theInfo,
	&ULReferenceSignalsPUSCHSequenceHoppingEnabled::theInfo,
	&ULReferenceSignalsPUSCHCyclicShift::theInfo,
};
bool ULReferenceSignalsPUSCH::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const ULReferenceSignalsPUSCH::Info ULReferenceSignalsPUSCH::theInfo = {
	ULReferenceSignalsPUSCH::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 0, 0
};
ULReferenceSignalsPUSCH::ULReferenceSignalsPUSCH(const ULReferenceSignalsPUSCHGroupHoppingEnabled& uLReferenceSignalsPUSCHGroupHoppingEnabled, const ULReferenceSignalsPUSCHGroupAssignmentPUSCH& uLReferenceSignalsPUSCHGroupAssignmentPUSCH, const ULReferenceSignalsPUSCHSequenceHoppingEnabled& uLReferenceSignalsPUSCHSequenceHoppingEnabled, const ULReferenceSignalsPUSCHCyclicShift& uLReferenceSignalsPUSCHCyclicShift) : Sequence(&theInfo) {
	setULReferenceSignalsPUSCHGroupHoppingEnabled(uLReferenceSignalsPUSCHGroupHoppingEnabled);
	setULReferenceSignalsPUSCHGroupAssignmentPUSCH(uLReferenceSignalsPUSCHGroupAssignmentPUSCH);
	setULReferenceSignalsPUSCHSequenceHoppingEnabled(uLReferenceSignalsPUSCHSequenceHoppingEnabled);
	setULReferenceSignalsPUSCHCyclicShift(uLReferenceSignalsPUSCHCyclicShift);
}

const void *PUSCHConfigCommon::itemsInfo[2] = {
	&PUSCHConfigCommonPuschConfigBasic::theInfo,
	&ULReferenceSignalsPUSCH::theInfo,
};
bool PUSCHConfigCommon::itemsPres[2] = {
	1,
	1,
};
const PUSCHConfigCommon::Info PUSCHConfigCommon::theInfo = {
	PUSCHConfigCommon::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
PUSCHConfigCommon::PUSCHConfigCommon(const PUSCHConfigCommonPuschConfigBasic& pUSCHConfigCommonPuschConfigBasic, const ULReferenceSignalsPUSCH& ulReferenceSignalsPUSCH) : Sequence(&theInfo) {
	setPUSCHConfigCommonPuschConfigBasic(pUSCHConfigCommonPuschConfigBasic);
	setUlReferenceSignalsPUSCH(ulReferenceSignalsPUSCH);
}

const void *PUCCHConfigCommon::itemsInfo[4] = {
	&PUCCHConfigCommondeltaPUCCH_Shift::theInfo,
	&PUCCHConfigCommonNRBCQI::theInfo,
	&PUCCHConfigCommonNCSAN::theInfo,
	&PUCCHConfigCommonN1PUCCHAN::theInfo,
};
bool PUCCHConfigCommon::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const PUCCHConfigCommon::Info PUCCHConfigCommon::theInfo = {
	PUCCHConfigCommon::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 0, 0
};
PUCCHConfigCommon::PUCCHConfigCommon(const PUCCHConfigCommondeltaPUCCH_Shift& pUCCHConfigCommondeltaPUCCH_Shift, const PUCCHConfigCommonNRBCQI& pUCCHConfigCommonNRBCQI, const PUCCHConfigCommonNCSAN& pUCCHConfigCommonNCSAN, const PUCCHConfigCommonN1PUCCHAN& pUCCHConfigCommonN1PUCCHAN) : Sequence(&theInfo) {
	setPUCCHConfigCommondeltaPUCCH_Shift(pUCCHConfigCommondeltaPUCCH_Shift);
	setPUCCHConfigCommonNRBCQI(pUCCHConfigCommonNRBCQI);
	setPUCCHConfigCommonNCSAN(pUCCHConfigCommonNCSAN);
	setPUCCHConfigCommonN1PUCCHAN(pUCCHConfigCommonN1PUCCHAN);
}

const void *SoundingRSULConfigCommonSetup::itemsInfo[4] = {
	&SoundingRSULConfigCommonSetupsrs_BandwidthConfig::theInfo,
	&SoundingRSULConfigCommonSetupsrs_SubframeConfig::theInfo,
	&SoundingRSULConfigCommonSetupAckNackSRSSimultaneousTransmission::theInfo,
	&SoundingRSULConfigCommonSetupsrs_MaxUpPts::theInfo,
};
bool SoundingRSULConfigCommonSetup::itemsPres[4] = {
	1,
	1,
	1,
	0,
};
const SoundingRSULConfigCommonSetup::Info SoundingRSULConfigCommonSetup::theInfo = {
	SoundingRSULConfigCommonSetup::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 1, 0
};
SoundingRSULConfigCommonSetup::SoundingRSULConfigCommonSetup(const SoundingRSULConfigCommonSetupsrs_BandwidthConfig& soundingRSULConfigCommonSetupsrs_BandwidthConfig, const SoundingRSULConfigCommonSetupsrs_SubframeConfig& soundingRSULConfigCommonSetupsrs_SubframeConfig, const SoundingRSULConfigCommonSetupAckNackSRSSimultaneousTransmission& soundingRSULConfigCommonSetupAckNackSRSSimultaneousTransmission) : Sequence(&theInfo) {
	setSoundingRSULConfigCommonSetupsrs_BandwidthConfig(soundingRSULConfigCommonSetupsrs_BandwidthConfig);
	setSoundingRSULConfigCommonSetupsrs_SubframeConfig(soundingRSULConfigCommonSetupsrs_SubframeConfig);
	setSoundingRSULConfigCommonSetupAckNackSRSSimultaneousTransmission(soundingRSULConfigCommonSetupAckNackSRSSimultaneousTransmission);
}

const void *SoundingRSULConfigCommon::choicesInfo[2] = {
	&SoundingRSULConfigCommonRelease::theInfo,
	&SoundingRSULConfigCommonSetup::theInfo,
};
const SoundingRSULConfigCommon::Info SoundingRSULConfigCommon::theInfo = {
	SoundingRSULConfigCommon::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DeltaFListPUCCH::itemsInfo[5] = {
	&DeltaFListPUCCHdeltaF_PUCCH_Format1::theInfo,
	&DeltaFListPUCCHdeltaF_PUCCH_Format1b::theInfo,
	&DeltaFListPUCCHdeltaF_PUCCH_Format2::theInfo,
	&DeltaFListPUCCHdeltaF_PUCCH_Format2a::theInfo,
	&DeltaFListPUCCHdeltaF_PUCCH_Format2b::theInfo,
};
bool DeltaFListPUCCH::itemsPres[5] = {
	1,
	1,
	1,
	1,
	1,
};
const DeltaFListPUCCH::Info DeltaFListPUCCH::theInfo = {
	DeltaFListPUCCH::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 0, 0
};
DeltaFListPUCCH::DeltaFListPUCCH(const DeltaFListPUCCHdeltaF_PUCCH_Format1& deltaFListPUCCHdeltaF_PUCCH_Format1, const DeltaFListPUCCHdeltaF_PUCCH_Format1b& deltaFListPUCCHdeltaF_PUCCH_Format1b, const DeltaFListPUCCHdeltaF_PUCCH_Format2& deltaFListPUCCHdeltaF_PUCCH_Format2, const DeltaFListPUCCHdeltaF_PUCCH_Format2a& deltaFListPUCCHdeltaF_PUCCH_Format2a, const DeltaFListPUCCHdeltaF_PUCCH_Format2b& deltaFListPUCCHdeltaF_PUCCH_Format2b) : Sequence(&theInfo) {
	setDeltaFListPUCCHdeltaF_PUCCH_Format1(deltaFListPUCCHdeltaF_PUCCH_Format1);
	setDeltaFListPUCCHdeltaF_PUCCH_Format1b(deltaFListPUCCHdeltaF_PUCCH_Format1b);
	setDeltaFListPUCCHdeltaF_PUCCH_Format2(deltaFListPUCCHdeltaF_PUCCH_Format2);
	setDeltaFListPUCCHdeltaF_PUCCH_Format2a(deltaFListPUCCHdeltaF_PUCCH_Format2a);
	setDeltaFListPUCCHdeltaF_PUCCH_Format2b(deltaFListPUCCHdeltaF_PUCCH_Format2b);
}

const void *UplinkPowerControlCommon::itemsInfo[5] = {
	&UplinkPowerControlCommonP0NominalPUSCH::theInfo,
	&UplinkPowerControlCommonalpha::theInfo,
	&UplinkPowerControlCommonP0NominalPUCCH::theInfo,
	&DeltaFListPUCCH::theInfo,
	&UplinkPowerControlCommonDeltaPreambleMsg3::theInfo,
};
bool UplinkPowerControlCommon::itemsPres[5] = {
	1,
	1,
	1,
	1,
	1,
};
const UplinkPowerControlCommon::Info UplinkPowerControlCommon::theInfo = {
	UplinkPowerControlCommon::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 0, 0
};
UplinkPowerControlCommon::UplinkPowerControlCommon(const UplinkPowerControlCommonP0NominalPUSCH& uplinkPowerControlCommonP0NominalPUSCH, const UplinkPowerControlCommonalpha& uplinkPowerControlCommonalpha, const UplinkPowerControlCommonP0NominalPUCCH& uplinkPowerControlCommonP0NominalPUCCH, const DeltaFListPUCCH& deltaFListPUCCH, const UplinkPowerControlCommonDeltaPreambleMsg3& uplinkPowerControlCommonDeltaPreambleMsg3) : Sequence(&theInfo) {
	setUplinkPowerControlCommonP0NominalPUSCH(uplinkPowerControlCommonP0NominalPUSCH);
	setUplinkPowerControlCommonalpha(uplinkPowerControlCommonalpha);
	setUplinkPowerControlCommonP0NominalPUCCH(uplinkPowerControlCommonP0NominalPUCCH);
	setDeltaFListPUCCH(deltaFListPUCCH);
	setUplinkPowerControlCommonDeltaPreambleMsg3(uplinkPowerControlCommonDeltaPreambleMsg3);
}

const void *UplinkPowerControlCommonv1020::itemsInfo[2] = {
	&UplinkPowerControlCommonv1020deltaF_PUCCH_Format3_r10::theInfo,
	&UplinkPowerControlCommonv1020deltaF_PUCCH_Format1bCS_r10::theInfo,
};
bool UplinkPowerControlCommonv1020::itemsPres[2] = {
	1,
	1,
};
const UplinkPowerControlCommonv1020::Info UplinkPowerControlCommonv1020::theInfo = {
	UplinkPowerControlCommonv1020::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
UplinkPowerControlCommonv1020::UplinkPowerControlCommonv1020(const UplinkPowerControlCommonv1020deltaF_PUCCH_Format3_r10& uplinkPowerControlCommonv1020deltaF_PUCCH_Format3_r10, const UplinkPowerControlCommonv1020deltaF_PUCCH_Format1bCS_r10& uplinkPowerControlCommonv1020deltaF_PUCCH_Format1bCS_r10) : Sequence(&theInfo) {
	setUplinkPowerControlCommonv1020deltaF_PUCCH_Format3_r10(uplinkPowerControlCommonv1020deltaF_PUCCH_Format3_r10);
	setUplinkPowerControlCommonv1020deltaF_PUCCH_Format1bCS_r10(uplinkPowerControlCommonv1020deltaF_PUCCH_Format1bCS_r10);
}

const void *RadioResourceConfigCommonSIB::itemsInfo[11] = {
	&RACHConfigCommon::theInfo,
	&BCCHConfig::theInfo,
	&PCCHConfig::theInfo,
	&PRACHConfigSIB::theInfo,
	&PDSCHConfigCommon::theInfo,
	&PUSCHConfigCommon::theInfo,
	&PUCCHConfigCommon::theInfo,
	&SoundingRSULConfigCommon::theInfo,
	&UplinkPowerControlCommon::theInfo,
	&ULCyclicPrefixLength::theInfo,
	&UplinkPowerControlCommonv1020::theInfo,
};
bool RadioResourceConfigCommonSIB::itemsPres[11] = {
	1,
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
};
const RadioResourceConfigCommonSIB::Info RadioResourceConfigCommonSIB::theInfo = {
	RadioResourceConfigCommonSIB::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	10, 0, 1
};
RadioResourceConfigCommonSIB::RadioResourceConfigCommonSIB(const RACHConfigCommon& rachConfigCommon, const BCCHConfig& bcchConfig, const PCCHConfig& pcchConfig, const PRACHConfigSIB& prachConfig, const PDSCHConfigCommon& pdschConfigCommon, const PUSCHConfigCommon& puschConfigCommon, const PUCCHConfigCommon& pucchConfigCommon, const SoundingRSULConfigCommon& soundingRSULConfigCommon, const UplinkPowerControlCommon& uplinkPowerControlCommon, const ULCyclicPrefixLength& ulCyclicPrefixLength) : Sequence(&theInfo) {
	setRachConfigCommon(rachConfigCommon);
	setBcchConfig(bcchConfig);
	setPcchConfig(pcchConfig);
	setPrachConfig(prachConfig);
	setPdschConfigCommon(pdschConfigCommon);
	setPuschConfigCommon(puschConfigCommon);
	setPucchConfigCommon(pucchConfigCommon);
	setSoundingRSULConfigCommon(soundingRSULConfigCommon);
	setUplinkPowerControlCommon(uplinkPowerControlCommon);
	setUlCyclicPrefixLength(ulCyclicPrefixLength);
}

const void *UETimersAndConstants::itemsInfo[6] = {
	&UETimersAndConstantst300::theInfo,
	&UETimersAndConstantst301::theInfo,
	&UETimersAndConstantst310::theInfo,
	&UETimersAndConstantsn310::theInfo,
	&UETimersAndConstantst311::theInfo,
	&UETimersAndConstantsn311::theInfo,
};
bool UETimersAndConstants::itemsPres[6] = {
	1,
	1,
	1,
	1,
	1,
	1,
};
const UETimersAndConstants::Info UETimersAndConstants::theInfo = {
	UETimersAndConstants::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	6, 0, 0
};
UETimersAndConstants::UETimersAndConstants(const UETimersAndConstantst300& uETimersAndConstantst300, const UETimersAndConstantst301& uETimersAndConstantst301, const UETimersAndConstantst310& uETimersAndConstantst310, const UETimersAndConstantsn310& uETimersAndConstantsn310, const UETimersAndConstantst311& uETimersAndConstantst311, const UETimersAndConstantsn311& uETimersAndConstantsn311) : Sequence(&theInfo) {
	setUETimersAndConstantst300(uETimersAndConstantst300);
	setUETimersAndConstantst301(uETimersAndConstantst301);
	setUETimersAndConstantst310(uETimersAndConstantst310);
	setUETimersAndConstantsn310(uETimersAndConstantsn310);
	setUETimersAndConstantst311(uETimersAndConstantst311);
	setUETimersAndConstantsn311(uETimersAndConstantsn311);
}

const void *SystemInformationBlockType2FreqInfo::itemsInfo[3] = {
	&ARFCNValueEUTRA::theInfo,
	&SystemInformationBlockType2FreqInfoul_Bandwidth::theInfo,
	&AdditionalSpectrumEmission::theInfo,
};
bool SystemInformationBlockType2FreqInfo::itemsPres[3] = {
	0,
	0,
	1,
};
const SystemInformationBlockType2FreqInfo::Info SystemInformationBlockType2FreqInfo::theInfo = {
	SystemInformationBlockType2FreqInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};
SystemInformationBlockType2FreqInfo::SystemInformationBlockType2FreqInfo(const AdditionalSpectrumEmission& additionalSpectrumEmission) : Sequence(&theInfo) {
	setAdditionalSpectrumEmission(additionalSpectrumEmission);
}

const void *MBSFNSubframeConfigSubframeAllocation::choicesInfo[2] = {
	&MBSFNSubframeConfigSubframeAllocationOneFrame::theInfo,
	&MBSFNSubframeConfigSubframeAllocationFourFrames::theInfo,
};
const MBSFNSubframeConfigSubframeAllocation::Info MBSFNSubframeConfigSubframeAllocation::theInfo = {
	MBSFNSubframeConfigSubframeAllocation::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *MBSFNSubframeConfig::itemsInfo[3] = {
	&MBSFNSubframeConfigradioframeAllocationPeriod::theInfo,
	&MBSFNSubframeConfigRadioframeAllocationOffset::theInfo,
	&MBSFNSubframeConfigSubframeAllocation::theInfo,
};
bool MBSFNSubframeConfig::itemsPres[3] = {
	1,
	1,
	1,
};
const MBSFNSubframeConfig::Info MBSFNSubframeConfig::theInfo = {
	MBSFNSubframeConfig::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};
MBSFNSubframeConfig::MBSFNSubframeConfig(const MBSFNSubframeConfigradioframeAllocationPeriod& mBSFNSubframeConfigradioframeAllocationPeriod, const MBSFNSubframeConfigRadioframeAllocationOffset& mBSFNSubframeConfigRadioframeAllocationOffset, const MBSFNSubframeConfigSubframeAllocation& mBSFNSubframeConfigSubframeAllocation) : Sequence(&theInfo) {
	setMBSFNSubframeConfigradioframeAllocationPeriod(mBSFNSubframeConfigradioframeAllocationPeriod);
	setMBSFNSubframeConfigRadioframeAllocationOffset(mBSFNSubframeConfigRadioframeAllocationOffset);
	setMBSFNSubframeConfigSubframeAllocation(mBSFNSubframeConfigSubframeAllocation);
}

const void *SystemInformationBlockType2::itemsInfo[10] = {
	&SystemInformationBlockType2AcBarringInfo::theInfo,
	&RadioResourceConfigCommonSIB::theInfo,
	&UETimersAndConstants::theInfo,
	&SystemInformationBlockType2FreqInfo::theInfo,
	&MBSFNSubframeConfigList::theInfo,
	&TimeAlignmentTimer::theInfo,
	&SystemInformationBlockType2LateNonCriticalExtension::theInfo,
	&ACBarringConfig::theInfo,
	&ACBarringConfig::theInfo,
	&ACBarringConfig::theInfo,
};
bool SystemInformationBlockType2::itemsPres[10] = {
	0,
	1,
	1,
	1,
	0,
	1,
	0,
	0,
	0,
	0,
};
const SystemInformationBlockType2::Info SystemInformationBlockType2::theInfo = {
	SystemInformationBlockType2::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	6, 2, 4
};
SystemInformationBlockType2::SystemInformationBlockType2(const RadioResourceConfigCommonSIB& radioResourceConfigCommon, const UETimersAndConstants& ueTimersAndConstants, const SystemInformationBlockType2FreqInfo& systemInformationBlockType2FreqInfo, const TimeAlignmentTimer& timeAlignmentTimerCommon) : Sequence(&theInfo) {
	setRadioResourceConfigCommon(radioResourceConfigCommon);
	setUeTimersAndConstants(ueTimersAndConstants);
	setSystemInformationBlockType2FreqInfo(systemInformationBlockType2FreqInfo);
	setTimeAlignmentTimerCommon(timeAlignmentTimerCommon);
}

const void *MobilityStateParameters::itemsInfo[4] = {
	&MobilityStateParameterst_Evaluation::theInfo,
	&MobilityStateParameterst_HystNormal::theInfo,
	&MobilityStateParametersNCellChangeMedium::theInfo,
	&MobilityStateParametersNCellChangeHigh::theInfo,
};
bool MobilityStateParameters::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const MobilityStateParameters::Info MobilityStateParameters::theInfo = {
	MobilityStateParameters::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 0, 0
};
MobilityStateParameters::MobilityStateParameters(const MobilityStateParameterst_Evaluation& mobilityStateParameterst_Evaluation, const MobilityStateParameterst_HystNormal& mobilityStateParameterst_HystNormal, const MobilityStateParametersNCellChangeMedium& mobilityStateParametersNCellChangeMedium, const MobilityStateParametersNCellChangeHigh& mobilityStateParametersNCellChangeHigh) : Sequence(&theInfo) {
	setMobilityStateParameterst_Evaluation(mobilityStateParameterst_Evaluation);
	setMobilityStateParameterst_HystNormal(mobilityStateParameterst_HystNormal);
	setMobilityStateParametersNCellChangeMedium(mobilityStateParametersNCellChangeMedium);
	setMobilityStateParametersNCellChangeHigh(mobilityStateParametersNCellChangeHigh);
}

const void *SystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionParsQHystSF::itemsInfo[2] = {
	&SystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionParsQHystSFsf_Medium::theInfo,
	&SystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionParsQHystSFsf_High::theInfo,
};
bool SystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionParsQHystSF::itemsPres[2] = {
	1,
	1,
};
const SystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionParsQHystSF::Info SystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionParsQHystSF::theInfo = {
	SystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionParsQHystSF::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
SystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionParsQHystSF::SystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionParsQHystSF(const SystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionParsQHystSFsf_Medium& systemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionParsQHystSFsf_Medium, const SystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionParsQHystSFsf_High& systemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionParsQHystSFsf_High) : Sequence(&theInfo) {
	setSystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionParsQHystSFsf_Medium(systemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionParsQHystSFsf_Medium);
	setSystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionParsQHystSFsf_High(systemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionParsQHystSFsf_High);
}

const void *SystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionPars::itemsInfo[2] = {
	&MobilityStateParameters::theInfo,
	&SystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionParsQHystSF::theInfo,
};
bool SystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionPars::itemsPres[2] = {
	1,
	1,
};
const SystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionPars::Info SystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionPars::theInfo = {
	SystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionPars::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
SystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionPars::SystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionPars(const MobilityStateParameters& mobilityStateParameters, const SystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionParsQHystSF& systemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionParsQHystSF) : Sequence(&theInfo) {
	setMobilityStateParameters(mobilityStateParameters);
	setSystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionParsQHystSF(systemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionParsQHystSF);
}

const void *SystemInformationBlockType3CellReselectionInfoCommon::itemsInfo[2] = {
	&SystemInformationBlockType3CellReselectionInfoCommonq_Hyst::theInfo,
	&SystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionPars::theInfo,
};
bool SystemInformationBlockType3CellReselectionInfoCommon::itemsPres[2] = {
	1,
	0,
};
const SystemInformationBlockType3CellReselectionInfoCommon::Info SystemInformationBlockType3CellReselectionInfoCommon::theInfo = {
	SystemInformationBlockType3CellReselectionInfoCommon::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};
SystemInformationBlockType3CellReselectionInfoCommon::SystemInformationBlockType3CellReselectionInfoCommon(const SystemInformationBlockType3CellReselectionInfoCommonq_Hyst& systemInformationBlockType3CellReselectionInfoCommonq_Hyst) : Sequence(&theInfo) {
	setSystemInformationBlockType3CellReselectionInfoCommonq_Hyst(systemInformationBlockType3CellReselectionInfoCommonq_Hyst);
}

const void *SystemInformationBlockType3CellReselectionServingFreqInfo::itemsInfo[3] = {
	&ReselectionThreshold::theInfo,
	&ReselectionThreshold::theInfo,
	&CellReselectionPriority::theInfo,
};
bool SystemInformationBlockType3CellReselectionServingFreqInfo::itemsPres[3] = {
	0,
	1,
	1,
};
const SystemInformationBlockType3CellReselectionServingFreqInfo::Info SystemInformationBlockType3CellReselectionServingFreqInfo::theInfo = {
	SystemInformationBlockType3CellReselectionServingFreqInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};
SystemInformationBlockType3CellReselectionServingFreqInfo::SystemInformationBlockType3CellReselectionServingFreqInfo(const ReselectionThreshold& threshServingLow, const CellReselectionPriority& cellReselectionPriority) : Sequence(&theInfo) {
	setThreshServingLow(threshServingLow);
	setCellReselectionPriority(cellReselectionPriority);
}

const void *SpeedStateScaleFactors::itemsInfo[2] = {
	&SpeedStateScaleFactorssf_Medium::theInfo,
	&SpeedStateScaleFactorssf_High::theInfo,
};
bool SpeedStateScaleFactors::itemsPres[2] = {
	1,
	1,
};
const SpeedStateScaleFactors::Info SpeedStateScaleFactors::theInfo = {
	SpeedStateScaleFactors::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
SpeedStateScaleFactors::SpeedStateScaleFactors(const SpeedStateScaleFactorssf_Medium& speedStateScaleFactorssf_Medium, const SpeedStateScaleFactorssf_High& speedStateScaleFactorssf_High) : Sequence(&theInfo) {
	setSpeedStateScaleFactorssf_Medium(speedStateScaleFactorssf_Medium);
	setSpeedStateScaleFactorssf_High(speedStateScaleFactorssf_High);
}

const void *SystemInformationBlockType3IntraFreqCellReselectionInfo::itemsInfo[8] = {
	&QRxLevMin::theInfo,
	&PMax::theInfo,
	&ReselectionThreshold::theInfo,
	&AllowedMeasBandwidth::theInfo,
	&PresenceAntennaPort1::theInfo,
	&NeighCellConfig::theInfo,
	&TReselection::theInfo,
	&SpeedStateScaleFactors::theInfo,
};
bool SystemInformationBlockType3IntraFreqCellReselectionInfo::itemsPres[8] = {
	1,
	0,
	0,
	0,
	1,
	1,
	1,
	0,
};
const SystemInformationBlockType3IntraFreqCellReselectionInfo::Info SystemInformationBlockType3IntraFreqCellReselectionInfo::theInfo = {
	SystemInformationBlockType3IntraFreqCellReselectionInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	8, 4, 0
};
SystemInformationBlockType3IntraFreqCellReselectionInfo::SystemInformationBlockType3IntraFreqCellReselectionInfo(const QRxLevMin& qRxLevMin, const PresenceAntennaPort1& presenceAntennaPort1, const NeighCellConfig& neighCellConfig, const TReselection& tReselectionEUTRA) : Sequence(&theInfo) {
	setQRxLevMin(qRxLevMin);
	setPresenceAntennaPort1(presenceAntennaPort1);
	setNeighCellConfig(neighCellConfig);
	setTReselectionEUTRA(tReselectionEUTRA);
}

const void *SystemInformationBlockType3SIntraSearchv920::itemsInfo[2] = {
	&ReselectionThreshold::theInfo,
	&ReselectionThresholdQr9::theInfo,
};
bool SystemInformationBlockType3SIntraSearchv920::itemsPres[2] = {
	1,
	1,
};
const SystemInformationBlockType3SIntraSearchv920::Info SystemInformationBlockType3SIntraSearchv920::theInfo = {
	SystemInformationBlockType3SIntraSearchv920::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
SystemInformationBlockType3SIntraSearchv920::SystemInformationBlockType3SIntraSearchv920(const ReselectionThreshold& sIntraSearchPr9, const ReselectionThresholdQr9& sIntraSearchQr9) : Sequence(&theInfo) {
	setSIntraSearchPr9(sIntraSearchPr9);
	setSIntraSearchQr9(sIntraSearchQr9);
}

const void *SystemInformationBlockType3SNonIntraSearchv920::itemsInfo[2] = {
	&ReselectionThreshold::theInfo,
	&ReselectionThresholdQr9::theInfo,
};
bool SystemInformationBlockType3SNonIntraSearchv920::itemsPres[2] = {
	1,
	1,
};
const SystemInformationBlockType3SNonIntraSearchv920::Info SystemInformationBlockType3SNonIntraSearchv920::theInfo = {
	SystemInformationBlockType3SNonIntraSearchv920::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
SystemInformationBlockType3SNonIntraSearchv920::SystemInformationBlockType3SNonIntraSearchv920(const ReselectionThreshold& sNonIntraSearchPr9, const ReselectionThresholdQr9& sNonIntraSearchQr9) : Sequence(&theInfo) {
	setSNonIntraSearchPr9(sNonIntraSearchPr9);
	setSNonIntraSearchQr9(sNonIntraSearchQr9);
}

const void *SystemInformationBlockType3::itemsInfo[8] = {
	&SystemInformationBlockType3CellReselectionInfoCommon::theInfo,
	&SystemInformationBlockType3CellReselectionServingFreqInfo::theInfo,
	&SystemInformationBlockType3IntraFreqCellReselectionInfo::theInfo,
	&SystemInformationBlockType3LateNonCriticalExtension::theInfo,
	&SystemInformationBlockType3SIntraSearchv920::theInfo,
	&SystemInformationBlockType3SNonIntraSearchv920::theInfo,
	&QQualMinr9::theInfo,
	&ReselectionThresholdQr9::theInfo,
};
bool SystemInformationBlockType3::itemsPres[8] = {
	1,
	1,
	1,
	0,
	0,
	0,
	0,
	0,
};
const SystemInformationBlockType3::Info SystemInformationBlockType3::theInfo = {
	SystemInformationBlockType3::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	3, 0, 5
};
SystemInformationBlockType3::SystemInformationBlockType3(const SystemInformationBlockType3CellReselectionInfoCommon& systemInformationBlockType3CellReselectionInfoCommon, const SystemInformationBlockType3CellReselectionServingFreqInfo& systemInformationBlockType3CellReselectionServingFreqInfo, const SystemInformationBlockType3IntraFreqCellReselectionInfo& systemInformationBlockType3IntraFreqCellReselectionInfo) : Sequence(&theInfo) {
	setSystemInformationBlockType3CellReselectionInfoCommon(systemInformationBlockType3CellReselectionInfoCommon);
	setSystemInformationBlockType3CellReselectionServingFreqInfo(systemInformationBlockType3CellReselectionServingFreqInfo);
	setSystemInformationBlockType3IntraFreqCellReselectionInfo(systemInformationBlockType3IntraFreqCellReselectionInfo);
}

const void *IntraFreqNeighCellInfo::itemsInfo[2] = {
	&PhysCellId::theInfo,
	&QOffsetRange::theInfo,
};
bool IntraFreqNeighCellInfo::itemsPres[2] = {
	1,
	1,
};
const IntraFreqNeighCellInfo::Info IntraFreqNeighCellInfo::theInfo = {
	IntraFreqNeighCellInfo::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
IntraFreqNeighCellInfo::IntraFreqNeighCellInfo(const PhysCellId& physCellId, const QOffsetRange& qOffsetCell) : Sequence(&theInfo) {
	setPhysCellId(physCellId);
	setQOffsetCell(qOffsetCell);
}

const void *PhysCellIdRange::itemsInfo[2] = {
	&PhysCellId::theInfo,
	&PhysCellIdRangerange::theInfo,
};
bool PhysCellIdRange::itemsPres[2] = {
	1,
	0,
};
const PhysCellIdRange::Info PhysCellIdRange::theInfo = {
	PhysCellIdRange::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};
PhysCellIdRange::PhysCellIdRange(const PhysCellId& start) : Sequence(&theInfo) {
	setStart(start);
}

const void *SystemInformationBlockType4::itemsInfo[4] = {
	&IntraFreqNeighCellList::theInfo,
	&IntraFreqBlackCellList::theInfo,
	&PhysCellIdRange::theInfo,
	&SystemInformationBlockType4LateNonCriticalExtension::theInfo,
};
bool SystemInformationBlockType4::itemsPres[4] = {
	0,
	0,
	0,
	0,
};
const SystemInformationBlockType4::Info SystemInformationBlockType4::theInfo = {
	SystemInformationBlockType4::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	3, 3, 1
};

const void *InterFreqNeighCellInfo::itemsInfo[2] = {
	&PhysCellId::theInfo,
	&QOffsetRange::theInfo,
};
bool InterFreqNeighCellInfo::itemsPres[2] = {
	1,
	1,
};
const InterFreqNeighCellInfo::Info InterFreqNeighCellInfo::theInfo = {
	InterFreqNeighCellInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
InterFreqNeighCellInfo::InterFreqNeighCellInfo(const PhysCellId& physCellId, const QOffsetRange& qOffsetCell) : Sequence(&theInfo) {
	setPhysCellId(physCellId);
	setQOffsetCell(qOffsetCell);
}

const void *InterFreqCarrierFreqInfoThreshXQr9::itemsInfo[2] = {
	&ReselectionThresholdQr9::theInfo,
	&ReselectionThresholdQr9::theInfo,
};
bool InterFreqCarrierFreqInfoThreshXQr9::itemsPres[2] = {
	1,
	1,
};
const InterFreqCarrierFreqInfoThreshXQr9::Info InterFreqCarrierFreqInfoThreshXQr9::theInfo = {
	InterFreqCarrierFreqInfoThreshXQr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
InterFreqCarrierFreqInfoThreshXQr9::InterFreqCarrierFreqInfoThreshXQr9(const ReselectionThresholdQr9& threshXHighQr9, const ReselectionThresholdQr9& threshXLowQr9) : Sequence(&theInfo) {
	setThreshXHighQr9(threshXHighQr9);
	setThreshXLowQr9(threshXLowQr9);
}

const void *InterFreqCarrierFreqInfo::itemsInfo[16] = {
	&ARFCNValueEUTRA::theInfo,
	&QRxLevMin::theInfo,
	&PMax::theInfo,
	&TReselection::theInfo,
	&SpeedStateScaleFactors::theInfo,
	&ReselectionThreshold::theInfo,
	&ReselectionThreshold::theInfo,
	&AllowedMeasBandwidth::theInfo,
	&PresenceAntennaPort1::theInfo,
	&CellReselectionPriority::theInfo,
	&NeighCellConfig::theInfo,
	&QOffsetRange::theInfo,
	&InterFreqNeighCellList::theInfo,
	&InterFreqBlackCellList::theInfo,
	&QQualMinr9::theInfo,
	&InterFreqCarrierFreqInfoThreshXQr9::theInfo,
};
bool InterFreqCarrierFreqInfo::itemsPres[16] = {
	1,
	1,
	0,
	1,
	0,
	1,
	1,
	1,
	1,
	0,
	1,
	0,
	0,
	0,
	0,
	0,
};
const InterFreqCarrierFreqInfo::Info InterFreqCarrierFreqInfo::theInfo = {
	InterFreqCarrierFreqInfo::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	14, 6, 2
};
InterFreqCarrierFreqInfo::InterFreqCarrierFreqInfo(const ARFCNValueEUTRA& dlCarrierFreq, const QRxLevMin& qRxLevMin, const TReselection& tReselectionEUTRA, const ReselectionThreshold& threshXHigh, const ReselectionThreshold& threshXLow, const AllowedMeasBandwidth& allowedMeasBandwidth, const PresenceAntennaPort1& presenceAntennaPort1, const NeighCellConfig& neighCellConfig) : Sequence(&theInfo) {
	setDlCarrierFreq(dlCarrierFreq);
	setQRxLevMin(qRxLevMin);
	setTReselectionEUTRA(tReselectionEUTRA);
	setThreshXHigh(threshXHigh);
	setThreshXLow(threshXLow);
	setAllowedMeasBandwidth(allowedMeasBandwidth);
	setPresenceAntennaPort1(presenceAntennaPort1);
	setNeighCellConfig(neighCellConfig);
}

const void *SystemInformationBlockType5::itemsInfo[2] = {
	&InterFreqCarrierFreqList::theInfo,
	&SystemInformationBlockType5LateNonCriticalExtension::theInfo,
};
bool SystemInformationBlockType5::itemsPres[2] = {
	1,
	0,
};
const SystemInformationBlockType5::Info SystemInformationBlockType5::theInfo = {
	SystemInformationBlockType5::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	1, 0, 1
};
SystemInformationBlockType5::SystemInformationBlockType5(const InterFreqCarrierFreqList& interFreqCarrierFreqList) : Sequence(&theInfo) {
	setInterFreqCarrierFreqList(interFreqCarrierFreqList);
}

const void *CarrierFreqUTRAFDDThreshXQr9::itemsInfo[2] = {
	&ReselectionThresholdQr9::theInfo,
	&ReselectionThresholdQr9::theInfo,
};
bool CarrierFreqUTRAFDDThreshXQr9::itemsPres[2] = {
	1,
	1,
};
const CarrierFreqUTRAFDDThreshXQr9::Info CarrierFreqUTRAFDDThreshXQr9::theInfo = {
	CarrierFreqUTRAFDDThreshXQr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
CarrierFreqUTRAFDDThreshXQr9::CarrierFreqUTRAFDDThreshXQr9(const ReselectionThresholdQr9& threshXHighQr9, const ReselectionThresholdQr9& threshXLowQr9) : Sequence(&theInfo) {
	setThreshXHighQr9(threshXHighQr9);
	setThreshXLowQr9(threshXLowQr9);
}

const void *CarrierFreqUTRAFDD::itemsInfo[8] = {
	&ARFCNValueUTRA::theInfo,
	&CellReselectionPriority::theInfo,
	&ReselectionThreshold::theInfo,
	&ReselectionThreshold::theInfo,
	&CarrierFreqUTRAFDDQRxLevMin::theInfo,
	&CarrierFreqUTRAFDDPMaxUTRA::theInfo,
	&CarrierFreqUTRAFDDQQualMin::theInfo,
	&CarrierFreqUTRAFDDThreshXQr9::theInfo,
};
bool CarrierFreqUTRAFDD::itemsPres[8] = {
	1,
	0,
	1,
	1,
	1,
	1,
	1,
	0,
};
const CarrierFreqUTRAFDD::Info CarrierFreqUTRAFDD::theInfo = {
	CarrierFreqUTRAFDD::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	7, 1, 1
};
CarrierFreqUTRAFDD::CarrierFreqUTRAFDD(const ARFCNValueUTRA& carrierFreq, const ReselectionThreshold& threshXHigh, const ReselectionThreshold& threshXLow, const CarrierFreqUTRAFDDQRxLevMin& carrierFreqUTRAFDDQRxLevMin, const CarrierFreqUTRAFDDPMaxUTRA& carrierFreqUTRAFDDPMaxUTRA, const CarrierFreqUTRAFDDQQualMin& carrierFreqUTRAFDDQQualMin) : Sequence(&theInfo) {
	setCarrierFreq(carrierFreq);
	setThreshXHigh(threshXHigh);
	setThreshXLow(threshXLow);
	setCarrierFreqUTRAFDDQRxLevMin(carrierFreqUTRAFDDQRxLevMin);
	setCarrierFreqUTRAFDDPMaxUTRA(carrierFreqUTRAFDDPMaxUTRA);
	setCarrierFreqUTRAFDDQQualMin(carrierFreqUTRAFDDQQualMin);
}

const void *CarrierFreqUTRATDD::itemsInfo[6] = {
	&ARFCNValueUTRA::theInfo,
	&CellReselectionPriority::theInfo,
	&ReselectionThreshold::theInfo,
	&ReselectionThreshold::theInfo,
	&CarrierFreqUTRATDDQRxLevMin::theInfo,
	&CarrierFreqUTRATDDPMaxUTRA::theInfo,
};
bool CarrierFreqUTRATDD::itemsPres[6] = {
	1,
	0,
	1,
	1,
	1,
	1,
};
const CarrierFreqUTRATDD::Info CarrierFreqUTRATDD::theInfo = {
	CarrierFreqUTRATDD::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	6, 1, 0
};
CarrierFreqUTRATDD::CarrierFreqUTRATDD(const ARFCNValueUTRA& carrierFreq, const ReselectionThreshold& threshXHigh, const ReselectionThreshold& threshXLow, const CarrierFreqUTRATDDQRxLevMin& carrierFreqUTRATDDQRxLevMin, const CarrierFreqUTRATDDPMaxUTRA& carrierFreqUTRATDDPMaxUTRA) : Sequence(&theInfo) {
	setCarrierFreq(carrierFreq);
	setThreshXHigh(threshXHigh);
	setThreshXLow(threshXLow);
	setCarrierFreqUTRATDDQRxLevMin(carrierFreqUTRATDDQRxLevMin);
	setCarrierFreqUTRATDDPMaxUTRA(carrierFreqUTRATDDPMaxUTRA);
}

const void *SystemInformationBlockType6::itemsInfo[5] = {
	&CarrierFreqListUTRAFDD::theInfo,
	&CarrierFreqListUTRATDD::theInfo,
	&TReselection::theInfo,
	&SpeedStateScaleFactors::theInfo,
	&SystemInformationBlockType6LateNonCriticalExtension::theInfo,
};
bool SystemInformationBlockType6::itemsPres[5] = {
	0,
	0,
	1,
	0,
	0,
};
const SystemInformationBlockType6::Info SystemInformationBlockType6::theInfo = {
	SystemInformationBlockType6::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	4, 3, 1
};
SystemInformationBlockType6::SystemInformationBlockType6(const TReselection& tReselectionUTRA) : Sequence(&theInfo) {
	setTReselectionUTRA(tReselectionUTRA);
}

const void *CarrierFreqsGERANFollowingARFCNsEquallySpacedARFCNs::itemsInfo[2] = {
	&CarrierFreqsGERANFollowingARFCNsEquallySpacedARFCNsArfcnSpacing::theInfo,
	&CarrierFreqsGERANFollowingARFCNsEquallySpacedARFCNsNumberOfFollowingARFCNs::theInfo,
};
bool CarrierFreqsGERANFollowingARFCNsEquallySpacedARFCNs::itemsPres[2] = {
	1,
	1,
};
const CarrierFreqsGERANFollowingARFCNsEquallySpacedARFCNs::Info CarrierFreqsGERANFollowingARFCNsEquallySpacedARFCNs::theInfo = {
	CarrierFreqsGERANFollowingARFCNsEquallySpacedARFCNs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
CarrierFreqsGERANFollowingARFCNsEquallySpacedARFCNs::CarrierFreqsGERANFollowingARFCNsEquallySpacedARFCNs(const CarrierFreqsGERANFollowingARFCNsEquallySpacedARFCNsArfcnSpacing& carrierFreqsGERANFollowingARFCNsEquallySpacedARFCNsArfcnSpacing, const CarrierFreqsGERANFollowingARFCNsEquallySpacedARFCNsNumberOfFollowingARFCNs& carrierFreqsGERANFollowingARFCNsEquallySpacedARFCNsNumberOfFollowingARFCNs) : Sequence(&theInfo) {
	setCarrierFreqsGERANFollowingARFCNsEquallySpacedARFCNsArfcnSpacing(carrierFreqsGERANFollowingARFCNsEquallySpacedARFCNsArfcnSpacing);
	setCarrierFreqsGERANFollowingARFCNsEquallySpacedARFCNsNumberOfFollowingARFCNs(carrierFreqsGERANFollowingARFCNsEquallySpacedARFCNsNumberOfFollowingARFCNs);
}

const void *CarrierFreqsGERANFollowingARFCNs::choicesInfo[3] = {
	&ExplicitListOfARFCNs::theInfo,
	&CarrierFreqsGERANFollowingARFCNsEquallySpacedARFCNs::theInfo,
	&CarrierFreqsGERANFollowingARFCNsVariableBitMapOfARFCNs::theInfo,
};
const CarrierFreqsGERANFollowingARFCNs::Info CarrierFreqsGERANFollowingARFCNs::theInfo = {
	CarrierFreqsGERANFollowingARFCNs::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *CarrierFreqsGERAN::itemsInfo[3] = {
	&ARFCNValueGERAN::theInfo,
	&BandIndicatorGERAN::theInfo,
	&CarrierFreqsGERANFollowingARFCNs::theInfo,
};
bool CarrierFreqsGERAN::itemsPres[3] = {
	1,
	1,
	1,
};
const CarrierFreqsGERAN::Info CarrierFreqsGERAN::theInfo = {
	CarrierFreqsGERAN::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};
CarrierFreqsGERAN::CarrierFreqsGERAN(const ARFCNValueGERAN& startingARFCN, const BandIndicatorGERAN& bandIndicator, const CarrierFreqsGERANFollowingARFCNs& carrierFreqsGERANFollowingARFCNs) : Sequence(&theInfo) {
	setStartingARFCN(startingARFCN);
	setBandIndicator(bandIndicator);
	setCarrierFreqsGERANFollowingARFCNs(carrierFreqsGERANFollowingARFCNs);
}

const void *CarrierFreqsInfoGERANCommonInfo::itemsInfo[6] = {
	&CellReselectionPriority::theInfo,
	&CarrierFreqsInfoGERANCommonInfoNccPermitted::theInfo,
	&CarrierFreqsInfoGERANCommonInfoQRxLevMin::theInfo,
	&CarrierFreqsInfoGERANCommonInfoPMaxGERAN::theInfo,
	&ReselectionThreshold::theInfo,
	&ReselectionThreshold::theInfo,
};
bool CarrierFreqsInfoGERANCommonInfo::itemsPres[6] = {
	0,
	1,
	1,
	0,
	1,
	1,
};
const CarrierFreqsInfoGERANCommonInfo::Info CarrierFreqsInfoGERANCommonInfo::theInfo = {
	CarrierFreqsInfoGERANCommonInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 2, 0
};
CarrierFreqsInfoGERANCommonInfo::CarrierFreqsInfoGERANCommonInfo(const CarrierFreqsInfoGERANCommonInfoNccPermitted& carrierFreqsInfoGERANCommonInfoNccPermitted, const CarrierFreqsInfoGERANCommonInfoQRxLevMin& carrierFreqsInfoGERANCommonInfoQRxLevMin, const ReselectionThreshold& threshXHigh, const ReselectionThreshold& threshXLow) : Sequence(&theInfo) {
	setCarrierFreqsInfoGERANCommonInfoNccPermitted(carrierFreqsInfoGERANCommonInfoNccPermitted);
	setCarrierFreqsInfoGERANCommonInfoQRxLevMin(carrierFreqsInfoGERANCommonInfoQRxLevMin);
	setThreshXHigh(threshXHigh);
	setThreshXLow(threshXLow);
}

const void *CarrierFreqsInfoGERAN::itemsInfo[2] = {
	&CarrierFreqsGERAN::theInfo,
	&CarrierFreqsInfoGERANCommonInfo::theInfo,
};
bool CarrierFreqsInfoGERAN::itemsPres[2] = {
	1,
	1,
};
const CarrierFreqsInfoGERAN::Info CarrierFreqsInfoGERAN::theInfo = {
	CarrierFreqsInfoGERAN::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
CarrierFreqsInfoGERAN::CarrierFreqsInfoGERAN(const CarrierFreqsGERAN& carrierFreqs, const CarrierFreqsInfoGERANCommonInfo& carrierFreqsInfoGERANCommonInfo) : Sequence(&theInfo) {
	setCarrierFreqs(carrierFreqs);
	setCarrierFreqsInfoGERANCommonInfo(carrierFreqsInfoGERANCommonInfo);
}

const void *SystemInformationBlockType7::itemsInfo[4] = {
	&TReselection::theInfo,
	&SpeedStateScaleFactors::theInfo,
	&CarrierFreqsInfoListGERAN::theInfo,
	&SystemInformationBlockType7LateNonCriticalExtension::theInfo,
};
bool SystemInformationBlockType7::itemsPres[4] = {
	1,
	0,
	0,
	0,
};
const SystemInformationBlockType7::Info SystemInformationBlockType7::theInfo = {
	SystemInformationBlockType7::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	3, 2, 1
};
SystemInformationBlockType7::SystemInformationBlockType7(const TReselection& tReselectionGERAN) : Sequence(&theInfo) {
	setTReselectionGERAN(tReselectionGERAN);
}

const void *SystemTimeInfoCDMA2000CdmaSystemTime::choicesInfo[2] = {
	&SystemTimeInfoCDMA2000CdmaSystemTimeSynchronousSystemTime::theInfo,
	&SystemTimeInfoCDMA2000CdmaSystemTimeAsynchronousSystemTime::theInfo,
};
const SystemTimeInfoCDMA2000CdmaSystemTime::Info SystemTimeInfoCDMA2000CdmaSystemTime::theInfo = {
	SystemTimeInfoCDMA2000CdmaSystemTime::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *SystemTimeInfoCDMA2000::itemsInfo[2] = {
	&SystemTimeInfoCDMA2000CdmaEUTRASynchronisation::theInfo,
	&SystemTimeInfoCDMA2000CdmaSystemTime::theInfo,
};
bool SystemTimeInfoCDMA2000::itemsPres[2] = {
	1,
	1,
};
const SystemTimeInfoCDMA2000::Info SystemTimeInfoCDMA2000::theInfo = {
	SystemTimeInfoCDMA2000::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
SystemTimeInfoCDMA2000::SystemTimeInfoCDMA2000(const SystemTimeInfoCDMA2000CdmaEUTRASynchronisation& systemTimeInfoCDMA2000CdmaEUTRASynchronisation, const SystemTimeInfoCDMA2000CdmaSystemTime& systemTimeInfoCDMA2000CdmaSystemTime) : Sequence(&theInfo) {
	setSystemTimeInfoCDMA2000CdmaEUTRASynchronisation(systemTimeInfoCDMA2000CdmaEUTRASynchronisation);
	setSystemTimeInfoCDMA2000CdmaSystemTime(systemTimeInfoCDMA2000CdmaSystemTime);
}

const void *PreRegistrationInfoHRPD::itemsInfo[3] = {
	&PreRegistrationInfoHRPDPreRegistrationAllowed::theInfo,
	&PreRegistrationZoneIdHRPD::theInfo,
	&SecondaryPreRegistrationZoneIdListHRPD::theInfo,
};
bool PreRegistrationInfoHRPD::itemsPres[3] = {
	1,
	0,
	0,
};
const PreRegistrationInfoHRPD::Info PreRegistrationInfoHRPD::theInfo = {
	PreRegistrationInfoHRPD::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};
PreRegistrationInfoHRPD::PreRegistrationInfoHRPD(const PreRegistrationInfoHRPDPreRegistrationAllowed& preRegistrationInfoHRPDPreRegistrationAllowed) : Sequence(&theInfo) {
	setPreRegistrationInfoHRPDPreRegistrationAllowed(preRegistrationInfoHRPDPreRegistrationAllowed);
}

const void *BandClassInfoCDMA2000::itemsInfo[4] = {
	&BandclassCDMA2000::theInfo,
	&CellReselectionPriority::theInfo,
	&BandClassInfoCDMA2000ThreshXHigh::theInfo,
	&BandClassInfoCDMA2000ThreshXLow::theInfo,
};
bool BandClassInfoCDMA2000::itemsPres[4] = {
	1,
	0,
	1,
	1,
};
const BandClassInfoCDMA2000::Info BandClassInfoCDMA2000::theInfo = {
	BandClassInfoCDMA2000::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	4, 1, 0
};
BandClassInfoCDMA2000::BandClassInfoCDMA2000(const BandclassCDMA2000& bandClass, const BandClassInfoCDMA2000ThreshXHigh& bandClassInfoCDMA2000ThreshXHigh, const BandClassInfoCDMA2000ThreshXLow& bandClassInfoCDMA2000ThreshXLow) : Sequence(&theInfo) {
	setBandClass(bandClass);
	setBandClassInfoCDMA2000ThreshXHigh(bandClassInfoCDMA2000ThreshXHigh);
	setBandClassInfoCDMA2000ThreshXLow(bandClassInfoCDMA2000ThreshXLow);
}

const void *NeighCellsPerBandclassCDMA2000::itemsInfo[2] = {
	&ARFCNValueCDMA2000::theInfo,
	&PhysCellIdListCDMA2000::theInfo,
};
bool NeighCellsPerBandclassCDMA2000::itemsPres[2] = {
	1,
	1,
};
const NeighCellsPerBandclassCDMA2000::Info NeighCellsPerBandclassCDMA2000::theInfo = {
	NeighCellsPerBandclassCDMA2000::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
NeighCellsPerBandclassCDMA2000::NeighCellsPerBandclassCDMA2000(const ARFCNValueCDMA2000& arfcn, const PhysCellIdListCDMA2000& physCellIdList) : Sequence(&theInfo) {
	setArfcn(arfcn);
	setPhysCellIdList(physCellIdList);
}

const void *NeighCellCDMA2000::itemsInfo[2] = {
	&BandclassCDMA2000::theInfo,
	&NeighCellsPerBandclassListCDMA2000::theInfo,
};
bool NeighCellCDMA2000::itemsPres[2] = {
	1,
	1,
};
const NeighCellCDMA2000::Info NeighCellCDMA2000::theInfo = {
	NeighCellCDMA2000::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
NeighCellCDMA2000::NeighCellCDMA2000(const BandclassCDMA2000& bandClass, const NeighCellsPerBandclassListCDMA2000& neighCellsPerFreqList) : Sequence(&theInfo) {
	setBandClass(bandClass);
	setNeighCellsPerFreqList(neighCellsPerFreqList);
}

const void *CellReselectionParametersCDMA2000::itemsInfo[4] = {
	&BandClassListCDMA2000::theInfo,
	&NeighCellListCDMA2000::theInfo,
	&TReselection::theInfo,
	&SpeedStateScaleFactors::theInfo,
};
bool CellReselectionParametersCDMA2000::itemsPres[4] = {
	1,
	1,
	1,
	0,
};
const CellReselectionParametersCDMA2000::Info CellReselectionParametersCDMA2000::theInfo = {
	CellReselectionParametersCDMA2000::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 1, 0
};
CellReselectionParametersCDMA2000::CellReselectionParametersCDMA2000(const BandClassListCDMA2000& bandClassList, const NeighCellListCDMA2000& neighCellList, const TReselection& tReselectionCDMA2000) : Sequence(&theInfo) {
	setBandClassList(bandClassList);
	setNeighCellList(neighCellList);
	setTReselectionCDMA2000(tReselectionCDMA2000);
}

const void *SystemInformationBlockType8ParametersHRPD::itemsInfo[2] = {
	&PreRegistrationInfoHRPD::theInfo,
	&CellReselectionParametersCDMA2000::theInfo,
};
bool SystemInformationBlockType8ParametersHRPD::itemsPres[2] = {
	1,
	0,
};
const SystemInformationBlockType8ParametersHRPD::Info SystemInformationBlockType8ParametersHRPD::theInfo = {
	SystemInformationBlockType8ParametersHRPD::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};
SystemInformationBlockType8ParametersHRPD::SystemInformationBlockType8ParametersHRPD(const PreRegistrationInfoHRPD& preRegistrationInfoHRPD) : Sequence(&theInfo) {
	setPreRegistrationInfoHRPD(preRegistrationInfoHRPD);
}

const void *CSFBRegistrationParam1XRTT::itemsInfo[13] = {
	&CSFBRegistrationParam1XRTTSid::theInfo,
	&CSFBRegistrationParam1XRTTNid::theInfo,
	&CSFBRegistrationParam1XRTTMultipleSID::theInfo,
	&CSFBRegistrationParam1XRTTMultipleNID::theInfo,
	&CSFBRegistrationParam1XRTTHomeReg::theInfo,
	&CSFBRegistrationParam1XRTTForeignSIDReg::theInfo,
	&CSFBRegistrationParam1XRTTForeignNIDReg::theInfo,
	&CSFBRegistrationParam1XRTTParameterReg::theInfo,
	&CSFBRegistrationParam1XRTTPowerUpReg::theInfo,
	&CSFBRegistrationParam1XRTTRegistrationPeriod::theInfo,
	&CSFBRegistrationParam1XRTTRegistrationZone::theInfo,
	&CSFBRegistrationParam1XRTTTotalZone::theInfo,
	&CSFBRegistrationParam1XRTTZoneTimer::theInfo,
};
bool CSFBRegistrationParam1XRTT::itemsPres[13] = {
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
};
const CSFBRegistrationParam1XRTT::Info CSFBRegistrationParam1XRTT::theInfo = {
	CSFBRegistrationParam1XRTT::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	13, 0, 0
};
CSFBRegistrationParam1XRTT::CSFBRegistrationParam1XRTT(const CSFBRegistrationParam1XRTTSid& cSFBRegistrationParam1XRTTSid, const CSFBRegistrationParam1XRTTNid& cSFBRegistrationParam1XRTTNid, const CSFBRegistrationParam1XRTTMultipleSID& cSFBRegistrationParam1XRTTMultipleSID, const CSFBRegistrationParam1XRTTMultipleNID& cSFBRegistrationParam1XRTTMultipleNID, const CSFBRegistrationParam1XRTTHomeReg& cSFBRegistrationParam1XRTTHomeReg, const CSFBRegistrationParam1XRTTForeignSIDReg& cSFBRegistrationParam1XRTTForeignSIDReg, const CSFBRegistrationParam1XRTTForeignNIDReg& cSFBRegistrationParam1XRTTForeignNIDReg, const CSFBRegistrationParam1XRTTParameterReg& cSFBRegistrationParam1XRTTParameterReg, const CSFBRegistrationParam1XRTTPowerUpReg& cSFBRegistrationParam1XRTTPowerUpReg, const CSFBRegistrationParam1XRTTRegistrationPeriod& cSFBRegistrationParam1XRTTRegistrationPeriod, const CSFBRegistrationParam1XRTTRegistrationZone& cSFBRegistrationParam1XRTTRegistrationZone, const CSFBRegistrationParam1XRTTTotalZone& cSFBRegistrationParam1XRTTTotalZone, const CSFBRegistrationParam1XRTTZoneTimer& cSFBRegistrationParam1XRTTZoneTimer) : Sequence(&theInfo) {
	setCSFBRegistrationParam1XRTTSid(cSFBRegistrationParam1XRTTSid);
	setCSFBRegistrationParam1XRTTNid(cSFBRegistrationParam1XRTTNid);
	setCSFBRegistrationParam1XRTTMultipleSID(cSFBRegistrationParam1XRTTMultipleSID);
	setCSFBRegistrationParam1XRTTMultipleNID(cSFBRegistrationParam1XRTTMultipleNID);
	setCSFBRegistrationParam1XRTTHomeReg(cSFBRegistrationParam1XRTTHomeReg);
	setCSFBRegistrationParam1XRTTForeignSIDReg(cSFBRegistrationParam1XRTTForeignSIDReg);
	setCSFBRegistrationParam1XRTTForeignNIDReg(cSFBRegistrationParam1XRTTForeignNIDReg);
	setCSFBRegistrationParam1XRTTParameterReg(cSFBRegistrationParam1XRTTParameterReg);
	setCSFBRegistrationParam1XRTTPowerUpReg(cSFBRegistrationParam1XRTTPowerUpReg);
	setCSFBRegistrationParam1XRTTRegistrationPeriod(cSFBRegistrationParam1XRTTRegistrationPeriod);
	setCSFBRegistrationParam1XRTTRegistrationZone(cSFBRegistrationParam1XRTTRegistrationZone);
	setCSFBRegistrationParam1XRTTTotalZone(cSFBRegistrationParam1XRTTTotalZone);
	setCSFBRegistrationParam1XRTTZoneTimer(cSFBRegistrationParam1XRTTZoneTimer);
}

const void *SystemInformationBlockType8Parameters1XRTT::itemsInfo[3] = {
	&CSFBRegistrationParam1XRTT::theInfo,
	&SystemInformationBlockType8Parameters1XRTTLongCodeState1XRTT::theInfo,
	&CellReselectionParametersCDMA2000::theInfo,
};
bool SystemInformationBlockType8Parameters1XRTT::itemsPres[3] = {
	0,
	0,
	0,
};
const SystemInformationBlockType8Parameters1XRTT::Info SystemInformationBlockType8Parameters1XRTT::theInfo = {
	SystemInformationBlockType8Parameters1XRTT::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *NeighCellsPerBandclassCDMA2000v920::itemsInfo[1] = {
	&PhysCellIdListCDMA2000v920::theInfo,
};
bool NeighCellsPerBandclassCDMA2000v920::itemsPres[1] = {
	1,
};
const NeighCellsPerBandclassCDMA2000v920::Info NeighCellsPerBandclassCDMA2000v920::theInfo = {
	NeighCellsPerBandclassCDMA2000v920::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
NeighCellsPerBandclassCDMA2000v920::NeighCellsPerBandclassCDMA2000v920(const PhysCellIdListCDMA2000v920& physCellIdListv920) : Sequence(&theInfo) {
	setPhysCellIdListv920(physCellIdListv920);
}

const void *NeighCellCDMA2000v920::itemsInfo[1] = {
	&NeighCellsPerBandclassListCDMA2000v920::theInfo,
};
bool NeighCellCDMA2000v920::itemsPres[1] = {
	1,
};
const NeighCellCDMA2000v920::Info NeighCellCDMA2000v920::theInfo = {
	NeighCellCDMA2000v920::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
NeighCellCDMA2000v920::NeighCellCDMA2000v920(const NeighCellsPerBandclassListCDMA2000v920& neighCellsPerFreqListv920) : Sequence(&theInfo) {
	setNeighCellsPerFreqListv920(neighCellsPerFreqListv920);
}

const void *CellReselectionParametersCDMA2000v920::itemsInfo[1] = {
	&NeighCellListCDMA2000v920::theInfo,
};
bool CellReselectionParametersCDMA2000v920::itemsPres[1] = {
	1,
};
const CellReselectionParametersCDMA2000v920::Info CellReselectionParametersCDMA2000v920::theInfo = {
	CellReselectionParametersCDMA2000v920::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
CellReselectionParametersCDMA2000v920::CellReselectionParametersCDMA2000v920(const NeighCellListCDMA2000v920& neighCellListv920) : Sequence(&theInfo) {
	setNeighCellListv920(neighCellListv920);
}

const void *CSFBRegistrationParam1XRTTv920::itemsInfo[1] = {
	&CSFBRegistrationParam1XRTTv920powerDownReg_r9::theInfo,
};
bool CSFBRegistrationParam1XRTTv920::itemsPres[1] = {
	1,
};
const CSFBRegistrationParam1XRTTv920::Info CSFBRegistrationParam1XRTTv920::theInfo = {
	CSFBRegistrationParam1XRTTv920::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
CSFBRegistrationParam1XRTTv920::CSFBRegistrationParam1XRTTv920(const CSFBRegistrationParam1XRTTv920powerDownReg_r9& cSFBRegistrationParam1XRTTv920powerDownReg_r9) : Sequence(&theInfo) {
	setCSFBRegistrationParam1XRTTv920powerDownReg_r9(cSFBRegistrationParam1XRTTv920powerDownReg_r9);
}

const void *ACBarringConfig1XRTTr9::itemsInfo[10] = {
	&ACBarringConfig1XRTTr9AcBarring0to9r9::theInfo,
	&ACBarringConfig1XRTTr9AcBarring10r9::theInfo,
	&ACBarringConfig1XRTTr9AcBarring11r9::theInfo,
	&ACBarringConfig1XRTTr9AcBarring12r9::theInfo,
	&ACBarringConfig1XRTTr9AcBarring13r9::theInfo,
	&ACBarringConfig1XRTTr9AcBarring14r9::theInfo,
	&ACBarringConfig1XRTTr9AcBarring15r9::theInfo,
	&ACBarringConfig1XRTTr9AcBarringMsgr9::theInfo,
	&ACBarringConfig1XRTTr9AcBarringRegr9::theInfo,
	&ACBarringConfig1XRTTr9AcBarringEmgr9::theInfo,
};
bool ACBarringConfig1XRTTr9::itemsPres[10] = {
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
};
const ACBarringConfig1XRTTr9::Info ACBarringConfig1XRTTr9::theInfo = {
	ACBarringConfig1XRTTr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	10, 0, 0
};
ACBarringConfig1XRTTr9::ACBarringConfig1XRTTr9(const ACBarringConfig1XRTTr9AcBarring0to9r9& aCBarringConfig1XRTTr9AcBarring0to9r9, const ACBarringConfig1XRTTr9AcBarring10r9& aCBarringConfig1XRTTr9AcBarring10r9, const ACBarringConfig1XRTTr9AcBarring11r9& aCBarringConfig1XRTTr9AcBarring11r9, const ACBarringConfig1XRTTr9AcBarring12r9& aCBarringConfig1XRTTr9AcBarring12r9, const ACBarringConfig1XRTTr9AcBarring13r9& aCBarringConfig1XRTTr9AcBarring13r9, const ACBarringConfig1XRTTr9AcBarring14r9& aCBarringConfig1XRTTr9AcBarring14r9, const ACBarringConfig1XRTTr9AcBarring15r9& aCBarringConfig1XRTTr9AcBarring15r9, const ACBarringConfig1XRTTr9AcBarringMsgr9& aCBarringConfig1XRTTr9AcBarringMsgr9, const ACBarringConfig1XRTTr9AcBarringRegr9& aCBarringConfig1XRTTr9AcBarringRegr9, const ACBarringConfig1XRTTr9AcBarringEmgr9& aCBarringConfig1XRTTr9AcBarringEmgr9) : Sequence(&theInfo) {
	setACBarringConfig1XRTTr9AcBarring0to9r9(aCBarringConfig1XRTTr9AcBarring0to9r9);
	setACBarringConfig1XRTTr9AcBarring10r9(aCBarringConfig1XRTTr9AcBarring10r9);
	setACBarringConfig1XRTTr9AcBarring11r9(aCBarringConfig1XRTTr9AcBarring11r9);
	setACBarringConfig1XRTTr9AcBarring12r9(aCBarringConfig1XRTTr9AcBarring12r9);
	setACBarringConfig1XRTTr9AcBarring13r9(aCBarringConfig1XRTTr9AcBarring13r9);
	setACBarringConfig1XRTTr9AcBarring14r9(aCBarringConfig1XRTTr9AcBarring14r9);
	setACBarringConfig1XRTTr9AcBarring15r9(aCBarringConfig1XRTTr9AcBarring15r9);
	setACBarringConfig1XRTTr9AcBarringMsgr9(aCBarringConfig1XRTTr9AcBarringMsgr9);
	setACBarringConfig1XRTTr9AcBarringRegr9(aCBarringConfig1XRTTr9AcBarringRegr9);
	setACBarringConfig1XRTTr9AcBarringEmgr9(aCBarringConfig1XRTTr9AcBarringEmgr9);
}

const void *SystemInformationBlockType8::itemsInfo[11] = {
	&SystemTimeInfoCDMA2000::theInfo,
	&SystemInformationBlockType8SearchWindowSize::theInfo,
	&SystemInformationBlockType8ParametersHRPD::theInfo,
	&SystemInformationBlockType8Parameters1XRTT::theInfo,
	&SystemInformationBlockType8LateNonCriticalExtension::theInfo,
	&SystemInformationBlockType8CsfbSupportForDualRxUEsr9::theInfo,
	&CellReselectionParametersCDMA2000v920::theInfo,
	&CellReselectionParametersCDMA2000v920::theInfo,
	&CSFBRegistrationParam1XRTTv920::theInfo,
	&ACBarringConfig1XRTTr9::theInfo,
	&SystemInformationBlockType8csfb_DualRxTxSupport_r10::theInfo,
};
bool SystemInformationBlockType8::itemsPres[11] = {
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
const SystemInformationBlockType8::Info SystemInformationBlockType8::theInfo = {
	SystemInformationBlockType8::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	4, 4, 7
};

const void *SystemInformationBlockType9::itemsInfo[2] = {
	&SystemInformationBlockType9HnbName::theInfo,
	&SystemInformationBlockType9LateNonCriticalExtension::theInfo,
};
bool SystemInformationBlockType9::itemsPres[2] = {
	0,
	0,
};
const SystemInformationBlockType9::Info SystemInformationBlockType9::theInfo = {
	SystemInformationBlockType9::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	1, 1, 1
};

const void *SystemInformationBlockType10::itemsInfo[5] = {
	&SystemInformationBlockType10MessageIdentifier::theInfo,
	&SystemInformationBlockType10SerialNumber::theInfo,
	&SystemInformationBlockType10WarningType::theInfo,
	&SystemInformationBlockType10WarningSecurityInfo::theInfo,
	&SystemInformationBlockType10LateNonCriticalExtension::theInfo,
};
bool SystemInformationBlockType10::itemsPres[5] = {
	1,
	1,
	1,
	0,
	0,
};
const SystemInformationBlockType10::Info SystemInformationBlockType10::theInfo = {
	SystemInformationBlockType10::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	4, 1, 1
};
SystemInformationBlockType10::SystemInformationBlockType10(const SystemInformationBlockType10MessageIdentifier& systemInformationBlockType10MessageIdentifier, const SystemInformationBlockType10SerialNumber& systemInformationBlockType10SerialNumber, const SystemInformationBlockType10WarningType& systemInformationBlockType10WarningType) : Sequence(&theInfo) {
	setSystemInformationBlockType10MessageIdentifier(systemInformationBlockType10MessageIdentifier);
	setSystemInformationBlockType10SerialNumber(systemInformationBlockType10SerialNumber);
	setSystemInformationBlockType10WarningType(systemInformationBlockType10WarningType);
}

const void *SystemInformationBlockType11::itemsInfo[7] = {
	&SystemInformationBlockType11MessageIdentifier::theInfo,
	&SystemInformationBlockType11SerialNumber::theInfo,
	&SystemInformationBlockType11warningMessageSegmentType::theInfo,
	&SystemInformationBlockType11WarningMessageSegmentNumber::theInfo,
	&SystemInformationBlockType11WarningMessageSegment::theInfo,
	&SystemInformationBlockType11DataCodingScheme::theInfo,
	&SystemInformationBlockType11LateNonCriticalExtension::theInfo,
};
bool SystemInformationBlockType11::itemsPres[7] = {
	1,
	1,
	1,
	1,
	1,
	0,
	0,
};
const SystemInformationBlockType11::Info SystemInformationBlockType11::theInfo = {
	SystemInformationBlockType11::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	6, 1, 1
};
SystemInformationBlockType11::SystemInformationBlockType11(const SystemInformationBlockType11MessageIdentifier& systemInformationBlockType11MessageIdentifier, const SystemInformationBlockType11SerialNumber& systemInformationBlockType11SerialNumber, const SystemInformationBlockType11warningMessageSegmentType& systemInformationBlockType11warningMessageSegmentType, const SystemInformationBlockType11WarningMessageSegmentNumber& systemInformationBlockType11WarningMessageSegmentNumber, const SystemInformationBlockType11WarningMessageSegment& systemInformationBlockType11WarningMessageSegment) : Sequence(&theInfo) {
	setSystemInformationBlockType11MessageIdentifier(systemInformationBlockType11MessageIdentifier);
	setSystemInformationBlockType11SerialNumber(systemInformationBlockType11SerialNumber);
	setSystemInformationBlockType11warningMessageSegmentType(systemInformationBlockType11warningMessageSegmentType);
	setSystemInformationBlockType11WarningMessageSegmentNumber(systemInformationBlockType11WarningMessageSegmentNumber);
	setSystemInformationBlockType11WarningMessageSegment(systemInformationBlockType11WarningMessageSegment);
}

const void *SystemInformationBlockType12r9::itemsInfo[7] = {
	&SystemInformationBlockType12r9MessageIdentifierr9::theInfo,
	&SystemInformationBlockType12r9SerialNumberr9::theInfo,
	&SystemInformationBlockType12r9warningMessageSegmentType_r9::theInfo,
	&SystemInformationBlockType12r9WarningMessageSegmentNumberr9::theInfo,
	&SystemInformationBlockType12r9WarningMessageSegmentr9::theInfo,
	&SystemInformationBlockType12r9DataCodingSchemer9::theInfo,
	&SystemInformationBlockType12r9LateNonCriticalExtension::theInfo,
};
bool SystemInformationBlockType12r9::itemsPres[7] = {
	1,
	1,
	1,
	1,
	1,
	0,
	0,
};
const SystemInformationBlockType12r9::Info SystemInformationBlockType12r9::theInfo = {
	SystemInformationBlockType12r9::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	7, 2, 0
};
SystemInformationBlockType12r9::SystemInformationBlockType12r9(const SystemInformationBlockType12r9MessageIdentifierr9& systemInformationBlockType12r9MessageIdentifierr9, const SystemInformationBlockType12r9SerialNumberr9& systemInformationBlockType12r9SerialNumberr9, const SystemInformationBlockType12r9warningMessageSegmentType_r9& systemInformationBlockType12r9warningMessageSegmentType_r9, const SystemInformationBlockType12r9WarningMessageSegmentNumberr9& systemInformationBlockType12r9WarningMessageSegmentNumberr9, const SystemInformationBlockType12r9WarningMessageSegmentr9& systemInformationBlockType12r9WarningMessageSegmentr9) : Sequence(&theInfo) {
	setSystemInformationBlockType12r9MessageIdentifierr9(systemInformationBlockType12r9MessageIdentifierr9);
	setSystemInformationBlockType12r9SerialNumberr9(systemInformationBlockType12r9SerialNumberr9);
	setSystemInformationBlockType12r9warningMessageSegmentType_r9(systemInformationBlockType12r9warningMessageSegmentType_r9);
	setSystemInformationBlockType12r9WarningMessageSegmentNumberr9(systemInformationBlockType12r9WarningMessageSegmentNumberr9);
	setSystemInformationBlockType12r9WarningMessageSegmentr9(systemInformationBlockType12r9WarningMessageSegmentr9);
}

const void *MBSFNAreaInfor9McchConfigr9::itemsInfo[5] = {
	&MBSFNAreaInfor9McchConfigr9mcch_RepetitionPeriod_r9::theInfo,
	&MBSFNAreaInfor9McchConfigr9McchOffsetr9::theInfo,
	&MBSFNAreaInfor9McchConfigr9mcch_ModificationPeriod_r9::theInfo,
	&MBSFNAreaInfor9McchConfigr9SfAllocInfor9::theInfo,
	&MBSFNAreaInfor9McchConfigr9signallingMCS_r9::theInfo,
};
bool MBSFNAreaInfor9McchConfigr9::itemsPres[5] = {
	1,
	1,
	1,
	1,
	1,
};
const MBSFNAreaInfor9McchConfigr9::Info MBSFNAreaInfor9McchConfigr9::theInfo = {
	MBSFNAreaInfor9McchConfigr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 0, 0
};
MBSFNAreaInfor9McchConfigr9::MBSFNAreaInfor9McchConfigr9(const MBSFNAreaInfor9McchConfigr9mcch_RepetitionPeriod_r9& mBSFNAreaInfor9McchConfigr9mcch_RepetitionPeriod_r9, const MBSFNAreaInfor9McchConfigr9McchOffsetr9& mBSFNAreaInfor9McchConfigr9McchOffsetr9, const MBSFNAreaInfor9McchConfigr9mcch_ModificationPeriod_r9& mBSFNAreaInfor9McchConfigr9mcch_ModificationPeriod_r9, const MBSFNAreaInfor9McchConfigr9SfAllocInfor9& mBSFNAreaInfor9McchConfigr9SfAllocInfor9, const MBSFNAreaInfor9McchConfigr9signallingMCS_r9& mBSFNAreaInfor9McchConfigr9signallingMCS_r9) : Sequence(&theInfo) {
	setMBSFNAreaInfor9McchConfigr9mcch_RepetitionPeriod_r9(mBSFNAreaInfor9McchConfigr9mcch_RepetitionPeriod_r9);
	setMBSFNAreaInfor9McchConfigr9McchOffsetr9(mBSFNAreaInfor9McchConfigr9McchOffsetr9);
	setMBSFNAreaInfor9McchConfigr9mcch_ModificationPeriod_r9(mBSFNAreaInfor9McchConfigr9mcch_ModificationPeriod_r9);
	setMBSFNAreaInfor9McchConfigr9SfAllocInfor9(mBSFNAreaInfor9McchConfigr9SfAllocInfor9);
	setMBSFNAreaInfor9McchConfigr9signallingMCS_r9(mBSFNAreaInfor9McchConfigr9signallingMCS_r9);
}

const void *MBSFNAreaInfor9::itemsInfo[4] = {
	&MBSFNAreaInfor9MbsfnAreaIdr9::theInfo,
	&MBSFNAreaInfor9non_MBSFNregionLength::theInfo,
	&MBSFNAreaInfor9NotificationIndicatorr9::theInfo,
	&MBSFNAreaInfor9McchConfigr9::theInfo,
};
bool MBSFNAreaInfor9::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const MBSFNAreaInfor9::Info MBSFNAreaInfor9::theInfo = {
	MBSFNAreaInfor9::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	4, 0, 0
};
MBSFNAreaInfor9::MBSFNAreaInfor9(const MBSFNAreaInfor9MbsfnAreaIdr9& mBSFNAreaInfor9MbsfnAreaIdr9, const MBSFNAreaInfor9non_MBSFNregionLength& mBSFNAreaInfor9non_MBSFNregionLength, const MBSFNAreaInfor9NotificationIndicatorr9& mBSFNAreaInfor9NotificationIndicatorr9, const MBSFNAreaInfor9McchConfigr9& mBSFNAreaInfor9McchConfigr9) : Sequence(&theInfo) {
	setMBSFNAreaInfor9MbsfnAreaIdr9(mBSFNAreaInfor9MbsfnAreaIdr9);
	setMBSFNAreaInfor9non_MBSFNregionLength(mBSFNAreaInfor9non_MBSFNregionLength);
	setMBSFNAreaInfor9NotificationIndicatorr9(mBSFNAreaInfor9NotificationIndicatorr9);
	setMBSFNAreaInfor9McchConfigr9(mBSFNAreaInfor9McchConfigr9);
}

const void *MBMSNotificationConfigr9::itemsInfo[3] = {
	&MBMSNotificationConfigr9notificationRepetitionCoeff_r9::theInfo,
	&MBMSNotificationConfigr9NotificationOffsetr9::theInfo,
	&MBMSNotificationConfigr9NotificationSFIndexr9::theInfo,
};
bool MBMSNotificationConfigr9::itemsPres[3] = {
	1,
	1,
	1,
};
const MBMSNotificationConfigr9::Info MBMSNotificationConfigr9::theInfo = {
	MBMSNotificationConfigr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};
MBMSNotificationConfigr9::MBMSNotificationConfigr9(const MBMSNotificationConfigr9notificationRepetitionCoeff_r9& mBMSNotificationConfigr9notificationRepetitionCoeff_r9, const MBMSNotificationConfigr9NotificationOffsetr9& mBMSNotificationConfigr9NotificationOffsetr9, const MBMSNotificationConfigr9NotificationSFIndexr9& mBMSNotificationConfigr9NotificationSFIndexr9) : Sequence(&theInfo) {
	setMBMSNotificationConfigr9notificationRepetitionCoeff_r9(mBMSNotificationConfigr9notificationRepetitionCoeff_r9);
	setMBMSNotificationConfigr9NotificationOffsetr9(mBMSNotificationConfigr9NotificationOffsetr9);
	setMBMSNotificationConfigr9NotificationSFIndexr9(mBMSNotificationConfigr9NotificationSFIndexr9);
}

const void *SystemInformationBlockType13r9::itemsInfo[3] = {
	&MBSFNAreaInfoListr9::theInfo,
	&MBMSNotificationConfigr9::theInfo,
	&SystemInformationBlockType13r9LateNonCriticalExtension::theInfo,
};
bool SystemInformationBlockType13r9::itemsPres[3] = {
	1,
	1,
	0,
};
const SystemInformationBlockType13r9::Info SystemInformationBlockType13r9::theInfo = {
	SystemInformationBlockType13r9::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	3, 1, 0
};
SystemInformationBlockType13r9::SystemInformationBlockType13r9(const MBSFNAreaInfoListr9& mbsfnAreaInfoListr9, const MBMSNotificationConfigr9& notificationConfigr9) : Sequence(&theInfo) {
	setMbsfnAreaInfoListr9(mbsfnAreaInfoListr9);
	setNotificationConfigr9(notificationConfigr9);
}

const void *SibTypeAndInfoItem::choicesInfo[12] = {
	&SystemInformationBlockType2::theInfo,
	&SystemInformationBlockType3::theInfo,
	&SystemInformationBlockType4::theInfo,
	&SystemInformationBlockType5::theInfo,
	&SystemInformationBlockType6::theInfo,
	&SystemInformationBlockType7::theInfo,
	&SystemInformationBlockType8::theInfo,
	&SystemInformationBlockType9::theInfo,
	&SystemInformationBlockType10::theInfo,
	&SystemInformationBlockType11::theInfo,
	&SystemInformationBlockType12r9::theInfo,
	&SystemInformationBlockType13r9::theInfo,
};
const SibTypeAndInfoItem::Info SibTypeAndInfoItem::theInfo = {
	SibTypeAndInfoItem::create,
	CHOICE,
	0,
	true,
	choicesInfo,
	9
};

const void *SystemInformationv8a0IEsNonCriticalExtension::itemsInfo[0] = {
};
bool SystemInformationv8a0IEsNonCriticalExtension::itemsPres[0] = {
};
const SystemInformationv8a0IEsNonCriticalExtension::Info SystemInformationv8a0IEsNonCriticalExtension::theInfo = {
	SystemInformationv8a0IEsNonCriticalExtension::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *SystemInformationv8a0IEs::itemsInfo[2] = {
	&SystemInformationv8a0IEsLateNonCriticalExtension::theInfo,
	&SystemInformationv8a0IEsNonCriticalExtension::theInfo,
};
bool SystemInformationv8a0IEs::itemsPres[2] = {
	0,
	0,
};
const SystemInformationv8a0IEs::Info SystemInformationv8a0IEs::theInfo = {
	SystemInformationv8a0IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *SystemInformationr8IEs::itemsInfo[2] = {
	&SystemInformationr8IEsSibTypeAndInfo::theInfo,
	&SystemInformationv8a0IEs::theInfo,
};
bool SystemInformationr8IEs::itemsPres[2] = {
	1,
	0,
};
const SystemInformationr8IEs::Info SystemInformationr8IEs::theInfo = {
	SystemInformationr8IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};
SystemInformationr8IEs::SystemInformationr8IEs(const SystemInformationr8IEsSibTypeAndInfo& systemInformationr8IEsSibTypeAndInfo) : Sequence(&theInfo) {
	setSystemInformationr8IEsSibTypeAndInfo(systemInformationr8IEsSibTypeAndInfo);
}

const void *SystemInformationCriticalExtensionsCriticalExtensionsFuture::itemsInfo[0] = {
};
bool SystemInformationCriticalExtensionsCriticalExtensionsFuture::itemsPres[0] = {
};
const SystemInformationCriticalExtensionsCriticalExtensionsFuture::Info SystemInformationCriticalExtensionsCriticalExtensionsFuture::theInfo = {
	SystemInformationCriticalExtensionsCriticalExtensionsFuture::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *SystemInformationCriticalExtensions::choicesInfo[2] = {
	&SystemInformationr8IEs::theInfo,
	&SystemInformationCriticalExtensionsCriticalExtensionsFuture::theInfo,
};
const SystemInformationCriticalExtensions::Info SystemInformationCriticalExtensions::theInfo = {
	SystemInformationCriticalExtensions::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *SystemInformation::itemsInfo[1] = {
	&SystemInformationCriticalExtensions::theInfo,
};
bool SystemInformation::itemsPres[1] = {
	1,
};
const SystemInformation::Info SystemInformation::theInfo = {
	SystemInformation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
SystemInformation::SystemInformation(const SystemInformationCriticalExtensions& systemInformationCriticalExtensions) : Sequence(&theInfo) {
	setSystemInformationCriticalExtensions(systemInformationCriticalExtensions);
}

const void *PLMNIdentity::itemsInfo[2] = {
	&MCC::theInfo,
	&MNC::theInfo,
};
bool PLMNIdentity::itemsPres[2] = {
	0,
	1,
};
const PLMNIdentity::Info PLMNIdentity::theInfo = {
	PLMNIdentity::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};
PLMNIdentity::PLMNIdentity(const MNC& mnc) : Sequence(&theInfo) {
	setMnc(mnc);
}

const void *PLMNIdentityInfo::itemsInfo[2] = {
	&PLMNIdentity::theInfo,
	&PLMNIdentityInfocellReservedForOperatorUse::theInfo,
};
bool PLMNIdentityInfo::itemsPres[2] = {
	1,
	1,
};
const PLMNIdentityInfo::Info PLMNIdentityInfo::theInfo = {
	PLMNIdentityInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
PLMNIdentityInfo::PLMNIdentityInfo(const PLMNIdentity& plmnIdentity, const PLMNIdentityInfocellReservedForOperatorUse& pLMNIdentityInfocellReservedForOperatorUse) : Sequence(&theInfo) {
	setPlmnIdentity(plmnIdentity);
	setPLMNIdentityInfocellReservedForOperatorUse(pLMNIdentityInfocellReservedForOperatorUse);
}

const void *SystemInformationBlockType1CellAccessRelatedInfo::itemsInfo[7] = {
	&PLMNIdentityList::theInfo,
	&TrackingAreaCode::theInfo,
	&CellIdentity::theInfo,
	&SystemInformationBlockType1CellAccessRelatedInfocellBarred::theInfo,
	&SystemInformationBlockType1CellAccessRelatedInfointraFreqReselection::theInfo,
	&SystemInformationBlockType1CellAccessRelatedInfoCsgIndication::theInfo,
	&CSGIdentity::theInfo,
};
bool SystemInformationBlockType1CellAccessRelatedInfo::itemsPres[7] = {
	1,
	1,
	1,
	1,
	1,
	1,
	0,
};
const SystemInformationBlockType1CellAccessRelatedInfo::Info SystemInformationBlockType1CellAccessRelatedInfo::theInfo = {
	SystemInformationBlockType1CellAccessRelatedInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	7, 1, 0
};
SystemInformationBlockType1CellAccessRelatedInfo::SystemInformationBlockType1CellAccessRelatedInfo(const PLMNIdentityList& plmnIdentityList, const TrackingAreaCode& trackingAreaCode, const CellIdentity& cellIdentity, const SystemInformationBlockType1CellAccessRelatedInfocellBarred& systemInformationBlockType1CellAccessRelatedInfocellBarred, const SystemInformationBlockType1CellAccessRelatedInfointraFreqReselection& systemInformationBlockType1CellAccessRelatedInfointraFreqReselection, const SystemInformationBlockType1CellAccessRelatedInfoCsgIndication& systemInformationBlockType1CellAccessRelatedInfoCsgIndication) : Sequence(&theInfo) {
	setPlmnIdentityList(plmnIdentityList);
	setTrackingAreaCode(trackingAreaCode);
	setCellIdentity(cellIdentity);
	setSystemInformationBlockType1CellAccessRelatedInfocellBarred(systemInformationBlockType1CellAccessRelatedInfocellBarred);
	setSystemInformationBlockType1CellAccessRelatedInfointraFreqReselection(systemInformationBlockType1CellAccessRelatedInfointraFreqReselection);
	setSystemInformationBlockType1CellAccessRelatedInfoCsgIndication(systemInformationBlockType1CellAccessRelatedInfoCsgIndication);
}

const void *SystemInformationBlockType1CellSelectionInfo::itemsInfo[2] = {
	&QRxLevMin::theInfo,
	&SystemInformationBlockType1CellSelectionInfoQRxLevMinOffset::theInfo,
};
bool SystemInformationBlockType1CellSelectionInfo::itemsPres[2] = {
	1,
	0,
};
const SystemInformationBlockType1CellSelectionInfo::Info SystemInformationBlockType1CellSelectionInfo::theInfo = {
	SystemInformationBlockType1CellSelectionInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};
SystemInformationBlockType1CellSelectionInfo::SystemInformationBlockType1CellSelectionInfo(const QRxLevMin& qRxLevMin) : Sequence(&theInfo) {
	setQRxLevMin(qRxLevMin);
}

const void *SchedulingInfo::itemsInfo[2] = {
	&SchedulingInfosi_Periodicity::theInfo,
	&SIBMappingInfo::theInfo,
};
bool SchedulingInfo::itemsPres[2] = {
	1,
	1,
};
const SchedulingInfo::Info SchedulingInfo::theInfo = {
	SchedulingInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
SchedulingInfo::SchedulingInfo(const SchedulingInfosi_Periodicity& schedulingInfosi_Periodicity, const SIBMappingInfo& sibMappingInfo) : Sequence(&theInfo) {
	setSchedulingInfosi_Periodicity(schedulingInfosi_Periodicity);
	setSibMappingInfo(sibMappingInfo);
}

const void *TDDConfig::itemsInfo[2] = {
	&TDDConfigsubframeAssignment::theInfo,
	&TDDConfigspecialSubframePatterns::theInfo,
};
bool TDDConfig::itemsPres[2] = {
	1,
	1,
};
const TDDConfig::Info TDDConfig::theInfo = {
	TDDConfig::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
TDDConfig::TDDConfig(const TDDConfigsubframeAssignment& tDDConfigsubframeAssignment, const TDDConfigspecialSubframePatterns& tDDConfigspecialSubframePatterns) : Sequence(&theInfo) {
	setTDDConfigsubframeAssignment(tDDConfigsubframeAssignment);
	setTDDConfigspecialSubframePatterns(tDDConfigspecialSubframePatterns);
}

const void *CellSelectionInfov920::itemsInfo[2] = {
	&QQualMinr9::theInfo,
	&CellSelectionInfov920QQualMinOffsetr9::theInfo,
};
bool CellSelectionInfov920::itemsPres[2] = {
	1,
	0,
};
const CellSelectionInfov920::Info CellSelectionInfov920::theInfo = {
	CellSelectionInfov920::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};
CellSelectionInfov920::CellSelectionInfov920(const QQualMinr9& qQualMinr9) : Sequence(&theInfo) {
	setQQualMinr9(qQualMinr9);
}

const void *SystemInformationBlockType1v920IEsNonCriticalExtension::itemsInfo[0] = {
};
bool SystemInformationBlockType1v920IEsNonCriticalExtension::itemsPres[0] = {
};
const SystemInformationBlockType1v920IEsNonCriticalExtension::Info SystemInformationBlockType1v920IEsNonCriticalExtension::theInfo = {
	SystemInformationBlockType1v920IEsNonCriticalExtension::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *SystemInformationBlockType1v920IEs::itemsInfo[3] = {
	&SystemInformationBlockType1v920IEsims_EmergencySupport_r9::theInfo,
	&CellSelectionInfov920::theInfo,
	&SystemInformationBlockType1v920IEsNonCriticalExtension::theInfo,
};
bool SystemInformationBlockType1v920IEs::itemsPres[3] = {
	0,
	0,
	0,
};
const SystemInformationBlockType1v920IEs::Info SystemInformationBlockType1v920IEs::theInfo = {
	SystemInformationBlockType1v920IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *SystemInformationBlockType1v890IEs::itemsInfo[2] = {
	&SystemInformationBlockType1v890IEsLateNonCriticalExtension::theInfo,
	&SystemInformationBlockType1v920IEs::theInfo,
};
bool SystemInformationBlockType1v890IEs::itemsPres[2] = {
	0,
	0,
};
const SystemInformationBlockType1v890IEs::Info SystemInformationBlockType1v890IEs::theInfo = {
	SystemInformationBlockType1v890IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *SystemInformationBlockType1::itemsInfo[9] = {
	&SystemInformationBlockType1CellAccessRelatedInfo::theInfo,
	&SystemInformationBlockType1CellSelectionInfo::theInfo,
	&PMax::theInfo,
	&SystemInformationBlockType1FreqBandIndicator::theInfo,
	&SchedulingInfoList::theInfo,
	&TDDConfig::theInfo,
	&SystemInformationBlockType1si_WindowLength::theInfo,
	&SystemInformationBlockType1SystemInfoValueTag::theInfo,
	&SystemInformationBlockType1v890IEs::theInfo,
};
bool SystemInformationBlockType1::itemsPres[9] = {
	1,
	1,
	0,
	1,
	1,
	0,
	1,
	1,
	0,
};
const SystemInformationBlockType1::Info SystemInformationBlockType1::theInfo = {
	SystemInformationBlockType1::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	9, 3, 0
};
SystemInformationBlockType1::SystemInformationBlockType1(const SystemInformationBlockType1CellAccessRelatedInfo& systemInformationBlockType1CellAccessRelatedInfo, const SystemInformationBlockType1CellSelectionInfo& systemInformationBlockType1CellSelectionInfo, const SystemInformationBlockType1FreqBandIndicator& systemInformationBlockType1FreqBandIndicator, const SchedulingInfoList& schedulingInfoList, const SystemInformationBlockType1si_WindowLength& systemInformationBlockType1si_WindowLength, const SystemInformationBlockType1SystemInfoValueTag& systemInformationBlockType1SystemInfoValueTag) : Sequence(&theInfo) {
	setSystemInformationBlockType1CellAccessRelatedInfo(systemInformationBlockType1CellAccessRelatedInfo);
	setSystemInformationBlockType1CellSelectionInfo(systemInformationBlockType1CellSelectionInfo);
	setSystemInformationBlockType1FreqBandIndicator(systemInformationBlockType1FreqBandIndicator);
	setSchedulingInfoList(schedulingInfoList);
	setSystemInformationBlockType1si_WindowLength(systemInformationBlockType1si_WindowLength);
	setSystemInformationBlockType1SystemInfoValueTag(systemInformationBlockType1SystemInfoValueTag);
}

const void *BCCHDLSCHMessageTypeC1::choicesInfo[2] = {
	&SystemInformation::theInfo,
	&SystemInformationBlockType1::theInfo,
};
const BCCHDLSCHMessageTypeC1::Info BCCHDLSCHMessageTypeC1::theInfo = {
	BCCHDLSCHMessageTypeC1::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *BCCHDLSCHMessageTypeMessageClassExtension::itemsInfo[0] = {
};
bool BCCHDLSCHMessageTypeMessageClassExtension::itemsPres[0] = {
};
const BCCHDLSCHMessageTypeMessageClassExtension::Info BCCHDLSCHMessageTypeMessageClassExtension::theInfo = {
	BCCHDLSCHMessageTypeMessageClassExtension::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *BCCHDLSCHMessageType::choicesInfo[2] = {
	&BCCHDLSCHMessageTypeC1::theInfo,
	&BCCHDLSCHMessageTypeMessageClassExtension::theInfo,
};
const BCCHDLSCHMessageType::Info BCCHDLSCHMessageType::theInfo = {
	BCCHDLSCHMessageType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *BCCHDLSCHMessage::itemsInfo[1] = {
	&BCCHDLSCHMessageType::theInfo,
};
bool BCCHDLSCHMessage::itemsPres[1] = {
	1,
};
const BCCHDLSCHMessage::Info BCCHDLSCHMessage::theInfo = {
	BCCHDLSCHMessage::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
BCCHDLSCHMessage::BCCHDLSCHMessage(const BCCHDLSCHMessageType& message) : Sequence(&theInfo) {
	setMessage(message);
}

const void *PMCHConfigr9::itemsInfo[3] = {
	&PMCHConfigr9SfAllocEndr9::theInfo,
	&PMCHConfigr9DataMCSr9::theInfo,
	&PMCHConfigr9mch_SchedulingPeriod_r9::theInfo,
};
bool PMCHConfigr9::itemsPres[3] = {
	1,
	1,
	1,
};
const PMCHConfigr9::Info PMCHConfigr9::theInfo = {
	PMCHConfigr9::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	3, 0, 0
};
PMCHConfigr9::PMCHConfigr9(const PMCHConfigr9SfAllocEndr9& pMCHConfigr9SfAllocEndr9, const PMCHConfigr9DataMCSr9& pMCHConfigr9DataMCSr9, const PMCHConfigr9mch_SchedulingPeriod_r9& pMCHConfigr9mch_SchedulingPeriod_r9) : Sequence(&theInfo) {
	setPMCHConfigr9SfAllocEndr9(pMCHConfigr9SfAllocEndr9);
	setPMCHConfigr9DataMCSr9(pMCHConfigr9DataMCSr9);
	setPMCHConfigr9mch_SchedulingPeriod_r9(pMCHConfigr9mch_SchedulingPeriod_r9);
}

const void *TMGIr9PlmnIdr9::choicesInfo[2] = {
	&TMGIr9PlmnIdr9PlmnIndexr9::theInfo,
	&PLMNIdentity::theInfo,
};
const TMGIr9PlmnIdr9::Info TMGIr9PlmnIdr9::theInfo = {
	TMGIr9PlmnIdr9::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *TMGIr9::itemsInfo[2] = {
	&TMGIr9PlmnIdr9::theInfo,
	&TMGIr9ServiceIdr9::theInfo,
};
bool TMGIr9::itemsPres[2] = {
	1,
	1,
};
const TMGIr9::Info TMGIr9::theInfo = {
	TMGIr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
TMGIr9::TMGIr9(const TMGIr9PlmnIdr9& tMGIr9PlmnIdr9, const TMGIr9ServiceIdr9& tMGIr9ServiceIdr9) : Sequence(&theInfo) {
	setTMGIr9PlmnIdr9(tMGIr9PlmnIdr9);
	setTMGIr9ServiceIdr9(tMGIr9ServiceIdr9);
}

const void *MBMSSessionInfor9::itemsInfo[3] = {
	&TMGIr9::theInfo,
	&MBMSSessionInfor9SessionIdr9::theInfo,
	&MBMSSessionInfor9LogicalChannelIdentityr9::theInfo,
};
bool MBMSSessionInfor9::itemsPres[3] = {
	1,
	0,
	1,
};
const MBMSSessionInfor9::Info MBMSSessionInfor9::theInfo = {
	MBMSSessionInfor9::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	3, 1, 0
};
MBMSSessionInfor9::MBMSSessionInfor9(const TMGIr9& tmgir9, const MBMSSessionInfor9LogicalChannelIdentityr9& mBMSSessionInfor9LogicalChannelIdentityr9) : Sequence(&theInfo) {
	setTmgir9(tmgir9);
	setMBMSSessionInfor9LogicalChannelIdentityr9(mBMSSessionInfor9LogicalChannelIdentityr9);
}

const void *PMCHInfor9::itemsInfo[2] = {
	&PMCHConfigr9::theInfo,
	&MBMSSessionInfoListr9::theInfo,
};
bool PMCHInfor9::itemsPres[2] = {
	1,
	1,
};
const PMCHInfor9::Info PMCHInfor9::theInfo = {
	PMCHInfor9::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
PMCHInfor9::PMCHInfor9(const PMCHConfigr9& pmchConfigr9, const MBMSSessionInfoListr9& mbmsSessionInfoListr9) : Sequence(&theInfo) {
	setPmchConfigr9(pmchConfigr9);
	setMbmsSessionInfoListr9(mbmsSessionInfoListr9);
}

const void *MBSFNAreaConfigurationv930IEsNonCriticalExtension::itemsInfo[0] = {
};
bool MBSFNAreaConfigurationv930IEsNonCriticalExtension::itemsPres[0] = {
};
const MBSFNAreaConfigurationv930IEsNonCriticalExtension::Info MBSFNAreaConfigurationv930IEsNonCriticalExtension::theInfo = {
	MBSFNAreaConfigurationv930IEsNonCriticalExtension::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *MBSFNAreaConfigurationv930IEs::itemsInfo[2] = {
	&MBSFNAreaConfigurationv930IEsLateNonCriticalExtension::theInfo,
	&MBSFNAreaConfigurationv930IEsNonCriticalExtension::theInfo,
};
bool MBSFNAreaConfigurationv930IEs::itemsPres[2] = {
	0,
	0,
};
const MBSFNAreaConfigurationv930IEs::Info MBSFNAreaConfigurationv930IEs::theInfo = {
	MBSFNAreaConfigurationv930IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *MBSFNAreaConfigurationr9::itemsInfo[4] = {
	&CommonSFAllocPatternListr9::theInfo,
	&MBSFNAreaConfigurationr9commonSF_AllocPeriod_r9::theInfo,
	&PMCHInfoListr9::theInfo,
	&MBSFNAreaConfigurationv930IEs::theInfo,
};
bool MBSFNAreaConfigurationr9::itemsPres[4] = {
	1,
	1,
	1,
	0,
};
const MBSFNAreaConfigurationr9::Info MBSFNAreaConfigurationr9::theInfo = {
	MBSFNAreaConfigurationr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 1, 0
};
MBSFNAreaConfigurationr9::MBSFNAreaConfigurationr9(const CommonSFAllocPatternListr9& commonSFAllocr9, const MBSFNAreaConfigurationr9commonSF_AllocPeriod_r9& mBSFNAreaConfigurationr9commonSF_AllocPeriod_r9, const PMCHInfoListr9& pmchInfoListr9) : Sequence(&theInfo) {
	setCommonSFAllocr9(commonSFAllocr9);
	setMBSFNAreaConfigurationr9commonSF_AllocPeriod_r9(mBSFNAreaConfigurationr9commonSF_AllocPeriod_r9);
	setPmchInfoListr9(pmchInfoListr9);
}

const void *MCCHMessageTypeC1::choicesInfo[1] = {
	&MBSFNAreaConfigurationr9::theInfo,
};
const MCCHMessageTypeC1::Info MCCHMessageTypeC1::theInfo = {
	MCCHMessageTypeC1::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *CountingRequestInfor10::itemsInfo[1] = {
	&TMGIr9::theInfo,
};
bool CountingRequestInfor10::itemsPres[1] = {
	1,
};
const CountingRequestInfor10::Info CountingRequestInfor10::theInfo = {
	CountingRequestInfor10::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
CountingRequestInfor10::CountingRequestInfor10(const TMGIr9& tmgir10) : Sequence(&theInfo) {
	setTmgir10(tmgir10);
}

const void *MBMSCountingRequestr10NonCriticalExtension::itemsInfo[0] = {
};
bool MBMSCountingRequestr10NonCriticalExtension::itemsPres[0] = {
};
const MBMSCountingRequestr10NonCriticalExtension::Info MBMSCountingRequestr10NonCriticalExtension::theInfo = {
	MBMSCountingRequestr10NonCriticalExtension::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *MBMSCountingRequestr10::itemsInfo[3] = {
	&CountingRequestListr10::theInfo,
	&MBMSCountingRequestr10LateNonCriticalExtension::theInfo,
	&MBMSCountingRequestr10NonCriticalExtension::theInfo,
};
bool MBMSCountingRequestr10::itemsPres[3] = {
	1,
	0,
	0,
};
const MBMSCountingRequestr10::Info MBMSCountingRequestr10::theInfo = {
	MBMSCountingRequestr10::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};
MBMSCountingRequestr10::MBMSCountingRequestr10(const CountingRequestListr10& countingRequestListr10) : Sequence(&theInfo) {
	setCountingRequestListr10(countingRequestListr10);
}

const void *MCCHMessageTypeLaterC2::choicesInfo[1] = {
	&MBMSCountingRequestr10::theInfo,
};
const MCCHMessageTypeLaterC2::Info MCCHMessageTypeLaterC2::theInfo = {
	MCCHMessageTypeLaterC2::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *MCCHMessageTypeLaterMessageClassExtension::itemsInfo[0] = {
};
bool MCCHMessageTypeLaterMessageClassExtension::itemsPres[0] = {
};
const MCCHMessageTypeLaterMessageClassExtension::Info MCCHMessageTypeLaterMessageClassExtension::theInfo = {
	MCCHMessageTypeLaterMessageClassExtension::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *MCCHMessageTypeLater::choicesInfo[2] = {
	&MCCHMessageTypeLaterC2::theInfo,
	&MCCHMessageTypeLaterMessageClassExtension::theInfo,
};
const MCCHMessageTypeLater::Info MCCHMessageTypeLater::theInfo = {
	MCCHMessageTypeLater::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *MCCHMessageType::choicesInfo[2] = {
	&MCCHMessageTypeC1::theInfo,
	&MCCHMessageTypeLater::theInfo,
};
const MCCHMessageType::Info MCCHMessageType::theInfo = {
	MCCHMessageType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
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
MCCHMessage::MCCHMessage(const MCCHMessageType& message) : Sequence(&theInfo) {
	setMessage(message);
}

const void *STMSI::itemsInfo[2] = {
	&MMEC::theInfo,
	&STMSIMTMSI::theInfo,
};
bool STMSI::itemsPres[2] = {
	1,
	1,
};
const STMSI::Info STMSI::theInfo = {
	STMSI::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
STMSI::STMSI(const MMEC& mmec, const STMSIMTMSI& sTMSIMTMSI) : Sequence(&theInfo) {
	setMmec(mmec);
	setSTMSIMTMSI(sTMSIMTMSI);
}

const void *PagingUEIdentity::choicesInfo[2] = {
	&STMSI::theInfo,
	&IMSI::theInfo,
};
const PagingUEIdentity::Info PagingUEIdentity::theInfo = {
	PagingUEIdentity::create,
	CHOICE,
	0,
	true,
	choicesInfo,
	1
};

const void *PagingRecord::itemsInfo[2] = {
	&PagingUEIdentity::theInfo,
	&PagingRecordcn_Domain::theInfo,
};
bool PagingRecord::itemsPres[2] = {
	1,
	1,
};
const PagingRecord::Info PagingRecord::theInfo = {
	PagingRecord::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
PagingRecord::PagingRecord(const PagingUEIdentity& ueIdentity, const PagingRecordcn_Domain& pagingRecordcn_Domain) : Sequence(&theInfo) {
	setUeIdentity(ueIdentity);
	setPagingRecordcn_Domain(pagingRecordcn_Domain);
}

const void *Pagingv920IEsNonCriticalExtension::itemsInfo[0] = {
};
bool Pagingv920IEsNonCriticalExtension::itemsPres[0] = {
};
const Pagingv920IEsNonCriticalExtension::Info Pagingv920IEsNonCriticalExtension::theInfo = {
	Pagingv920IEsNonCriticalExtension::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *Pagingv920IEs::itemsInfo[2] = {
	&Pagingv920IEscmas_Indication_r9::theInfo,
	&Pagingv920IEsNonCriticalExtension::theInfo,
};
bool Pagingv920IEs::itemsPres[2] = {
	0,
	0,
};
const Pagingv920IEs::Info Pagingv920IEs::theInfo = {
	Pagingv920IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *Pagingv890IEs::itemsInfo[2] = {
	&Pagingv890IEsLateNonCriticalExtension::theInfo,
	&Pagingv920IEs::theInfo,
};
bool Pagingv890IEs::itemsPres[2] = {
	0,
	0,
};
const Pagingv890IEs::Info Pagingv890IEs::theInfo = {
	Pagingv890IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *Paging::itemsInfo[4] = {
	&PagingRecordList::theInfo,
	&PagingsystemInfoModification::theInfo,
	&Pagingetws_Indication::theInfo,
	&Pagingv890IEs::theInfo,
};
bool Paging::itemsPres[4] = {
	0,
	0,
	0,
	0,
};
const Paging::Info Paging::theInfo = {
	Paging::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 4, 0
};

const void *PCCHMessageTypeC1::choicesInfo[1] = {
	&Paging::theInfo,
};
const PCCHMessageTypeC1::Info PCCHMessageTypeC1::theInfo = {
	PCCHMessageTypeC1::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *PCCHMessageTypeMessageClassExtension::itemsInfo[0] = {
};
bool PCCHMessageTypeMessageClassExtension::itemsPres[0] = {
};
const PCCHMessageTypeMessageClassExtension::Info PCCHMessageTypeMessageClassExtension::theInfo = {
	PCCHMessageTypeMessageClassExtension::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *PCCHMessageType::choicesInfo[2] = {
	&PCCHMessageTypeC1::theInfo,
	&PCCHMessageTypeMessageClassExtension::theInfo,
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
PCCHMessage::PCCHMessage(const PCCHMessageType& message) : Sequence(&theInfo) {
	setMessage(message);
}

const void *ULAMRLC::itemsInfo[4] = {
	&TPollRetransmit::theInfo,
	&PollPDU::theInfo,
	&PollByte::theInfo,
	&ULAMRLCmaxRetxThreshold::theInfo,
};
bool ULAMRLC::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const ULAMRLC::Info ULAMRLC::theInfo = {
	ULAMRLC::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 0, 0
};
ULAMRLC::ULAMRLC(const TPollRetransmit& tPollRetransmit, const PollPDU& pollPDU, const PollByte& pollByte, const ULAMRLCmaxRetxThreshold& uLAMRLCmaxRetxThreshold) : Sequence(&theInfo) {
	setTPollRetransmit(tPollRetransmit);
	setPollPDU(pollPDU);
	setPollByte(pollByte);
	setULAMRLCmaxRetxThreshold(uLAMRLCmaxRetxThreshold);
}

const void *DLAMRLC::itemsInfo[2] = {
	&TReordering::theInfo,
	&TStatusProhibit::theInfo,
};
bool DLAMRLC::itemsPres[2] = {
	1,
	1,
};
const DLAMRLC::Info DLAMRLC::theInfo = {
	DLAMRLC::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
DLAMRLC::DLAMRLC(const TReordering& tReordering, const TStatusProhibit& tStatusProhibit) : Sequence(&theInfo) {
	setTReordering(tReordering);
	setTStatusProhibit(tStatusProhibit);
}

const void *RLCConfigAm::itemsInfo[2] = {
	&ULAMRLC::theInfo,
	&DLAMRLC::theInfo,
};
bool RLCConfigAm::itemsPres[2] = {
	1,
	1,
};
const RLCConfigAm::Info RLCConfigAm::theInfo = {
	RLCConfigAm::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
RLCConfigAm::RLCConfigAm(const ULAMRLC& ulAMRLC, const DLAMRLC& dlAMRLC) : Sequence(&theInfo) {
	setUlAMRLC(ulAMRLC);
	setDlAMRLC(dlAMRLC);
}

const void *ULUMRLC::itemsInfo[1] = {
	&SNFieldLength::theInfo,
};
bool ULUMRLC::itemsPres[1] = {
	1,
};
const ULUMRLC::Info ULUMRLC::theInfo = {
	ULUMRLC::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
ULUMRLC::ULUMRLC(const SNFieldLength& snFieldLength) : Sequence(&theInfo) {
	setSnFieldLength(snFieldLength);
}

const void *DLUMRLC::itemsInfo[2] = {
	&SNFieldLength::theInfo,
	&TReordering::theInfo,
};
bool DLUMRLC::itemsPres[2] = {
	1,
	1,
};
const DLUMRLC::Info DLUMRLC::theInfo = {
	DLUMRLC::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
DLUMRLC::DLUMRLC(const SNFieldLength& snFieldLength, const TReordering& tReordering) : Sequence(&theInfo) {
	setSnFieldLength(snFieldLength);
	setTReordering(tReordering);
}

const void *RLCConfigUmBiDirectional::itemsInfo[2] = {
	&ULUMRLC::theInfo,
	&DLUMRLC::theInfo,
};
bool RLCConfigUmBiDirectional::itemsPres[2] = {
	1,
	1,
};
const RLCConfigUmBiDirectional::Info RLCConfigUmBiDirectional::theInfo = {
	RLCConfigUmBiDirectional::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
RLCConfigUmBiDirectional::RLCConfigUmBiDirectional(const ULUMRLC& ulUMRLC, const DLUMRLC& dlUMRLC) : Sequence(&theInfo) {
	setUlUMRLC(ulUMRLC);
	setDlUMRLC(dlUMRLC);
}

const void *RLCConfigUmUniDirectionalUL::itemsInfo[1] = {
	&ULUMRLC::theInfo,
};
bool RLCConfigUmUniDirectionalUL::itemsPres[1] = {
	1,
};
const RLCConfigUmUniDirectionalUL::Info RLCConfigUmUniDirectionalUL::theInfo = {
	RLCConfigUmUniDirectionalUL::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
RLCConfigUmUniDirectionalUL::RLCConfigUmUniDirectionalUL(const ULUMRLC& ulUMRLC) : Sequence(&theInfo) {
	setUlUMRLC(ulUMRLC);
}

const void *RLCConfigUmUniDirectionalDL::itemsInfo[1] = {
	&DLUMRLC::theInfo,
};
bool RLCConfigUmUniDirectionalDL::itemsPres[1] = {
	1,
};
const RLCConfigUmUniDirectionalDL::Info RLCConfigUmUniDirectionalDL::theInfo = {
	RLCConfigUmUniDirectionalDL::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
RLCConfigUmUniDirectionalDL::RLCConfigUmUniDirectionalDL(const DLUMRLC& dlUMRLC) : Sequence(&theInfo) {
	setDlUMRLC(dlUMRLC);
}

const void *RLCConfig::choicesInfo[4] = {
	&RLCConfigAm::theInfo,
	&RLCConfigUmBiDirectional::theInfo,
	&RLCConfigUmUniDirectionalUL::theInfo,
	&RLCConfigUmUniDirectionalDL::theInfo,
};
const RLCConfig::Info RLCConfig::theInfo = {
	RLCConfig::create,
	CHOICE,
	0,
	true,
	choicesInfo,
	3
};

const void *SRBToAddModRlcConfig::choicesInfo[2] = {
	&RLCConfig::theInfo,
	&SRBToAddModRlcConfigDefaultValue::theInfo,
};
const SRBToAddModRlcConfig::Info SRBToAddModRlcConfig::theInfo = {
	SRBToAddModRlcConfig::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *LogicalChannelConfigUlSpecificParameters::itemsInfo[4] = {
	&LogicalChannelConfigUlSpecificParametersPriority::theInfo,
	&LogicalChannelConfigUlSpecificParametersprioritisedBitRate::theInfo,
	&LogicalChannelConfigUlSpecificParametersbucketSizeDuration::theInfo,
	&LogicalChannelConfigUlSpecificParametersLogicalChannelGroup::theInfo,
};
bool LogicalChannelConfigUlSpecificParameters::itemsPres[4] = {
	1,
	1,
	1,
	0,
};
const LogicalChannelConfigUlSpecificParameters::Info LogicalChannelConfigUlSpecificParameters::theInfo = {
	LogicalChannelConfigUlSpecificParameters::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 1, 0
};
LogicalChannelConfigUlSpecificParameters::LogicalChannelConfigUlSpecificParameters(const LogicalChannelConfigUlSpecificParametersPriority& logicalChannelConfigUlSpecificParametersPriority, const LogicalChannelConfigUlSpecificParametersprioritisedBitRate& logicalChannelConfigUlSpecificParametersprioritisedBitRate, const LogicalChannelConfigUlSpecificParametersbucketSizeDuration& logicalChannelConfigUlSpecificParametersbucketSizeDuration) : Sequence(&theInfo) {
	setLogicalChannelConfigUlSpecificParametersPriority(logicalChannelConfigUlSpecificParametersPriority);
	setLogicalChannelConfigUlSpecificParametersprioritisedBitRate(logicalChannelConfigUlSpecificParametersprioritisedBitRate);
	setLogicalChannelConfigUlSpecificParametersbucketSizeDuration(logicalChannelConfigUlSpecificParametersbucketSizeDuration);
}

const void *LogicalChannelConfig::itemsInfo[2] = {
	&LogicalChannelConfigUlSpecificParameters::theInfo,
	&LogicalChannelConfiglogicalChannelSR_Mask_r9::theInfo,
};
bool LogicalChannelConfig::itemsPres[2] = {
	0,
	0,
};
const LogicalChannelConfig::Info LogicalChannelConfig::theInfo = {
	LogicalChannelConfig::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	1, 1, 1
};

const void *SRBToAddModLogicalChannelConfig::choicesInfo[2] = {
	&LogicalChannelConfig::theInfo,
	&SRBToAddModLogicalChannelConfigDefaultValue::theInfo,
};
const SRBToAddModLogicalChannelConfig::Info SRBToAddModLogicalChannelConfig::theInfo = {
	SRBToAddModLogicalChannelConfig::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *SRBToAddMod::itemsInfo[3] = {
	&SRBToAddModSrbIdentity::theInfo,
	&SRBToAddModRlcConfig::theInfo,
	&SRBToAddModLogicalChannelConfig::theInfo,
};
bool SRBToAddMod::itemsPres[3] = {
	1,
	0,
	0,
};
const SRBToAddMod::Info SRBToAddMod::theInfo = {
	SRBToAddMod::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	3, 2, 0
};
SRBToAddMod::SRBToAddMod(const SRBToAddModSrbIdentity& sRBToAddModSrbIdentity) : Sequence(&theInfo) {
	setSRBToAddModSrbIdentity(sRBToAddModSrbIdentity);
}

const void *PDCPConfigRlcAM::itemsInfo[1] = {
	&PDCPConfigRlcAMStatusReportRequired::theInfo,
};
bool PDCPConfigRlcAM::itemsPres[1] = {
	1,
};
const PDCPConfigRlcAM::Info PDCPConfigRlcAM::theInfo = {
	PDCPConfigRlcAM::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
PDCPConfigRlcAM::PDCPConfigRlcAM(const PDCPConfigRlcAMStatusReportRequired& pDCPConfigRlcAMStatusReportRequired) : Sequence(&theInfo) {
	setPDCPConfigRlcAMStatusReportRequired(pDCPConfigRlcAMStatusReportRequired);
}

const void *PDCPConfigRlcUM::itemsInfo[1] = {
	&PDCPConfigRlcUMpdcp_SN_Size::theInfo,
};
bool PDCPConfigRlcUM::itemsPres[1] = {
	1,
};
const PDCPConfigRlcUM::Info PDCPConfigRlcUM::theInfo = {
	PDCPConfigRlcUM::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
PDCPConfigRlcUM::PDCPConfigRlcUM(const PDCPConfigRlcUMpdcp_SN_Size& pDCPConfigRlcUMpdcp_SN_Size) : Sequence(&theInfo) {
	setPDCPConfigRlcUMpdcp_SN_Size(pDCPConfigRlcUMpdcp_SN_Size);
}

const void *PDCPConfigHeaderCompressionRohcProfiles::itemsInfo[9] = {
	&PDCPConfigHeaderCompressionRohcProfilesProfile0x0001::theInfo,
	&PDCPConfigHeaderCompressionRohcProfilesProfile0x0002::theInfo,
	&PDCPConfigHeaderCompressionRohcProfilesProfile0x0003::theInfo,
	&PDCPConfigHeaderCompressionRohcProfilesProfile0x0004::theInfo,
	&PDCPConfigHeaderCompressionRohcProfilesProfile0x0006::theInfo,
	&PDCPConfigHeaderCompressionRohcProfilesProfile0x0101::theInfo,
	&PDCPConfigHeaderCompressionRohcProfilesProfile0x0102::theInfo,
	&PDCPConfigHeaderCompressionRohcProfilesProfile0x0103::theInfo,
	&PDCPConfigHeaderCompressionRohcProfilesProfile0x0104::theInfo,
};
bool PDCPConfigHeaderCompressionRohcProfiles::itemsPres[9] = {
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
};
const PDCPConfigHeaderCompressionRohcProfiles::Info PDCPConfigHeaderCompressionRohcProfiles::theInfo = {
	PDCPConfigHeaderCompressionRohcProfiles::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	9, 0, 0
};
PDCPConfigHeaderCompressionRohcProfiles::PDCPConfigHeaderCompressionRohcProfiles(const PDCPConfigHeaderCompressionRohcProfilesProfile0x0001& pDCPConfigHeaderCompressionRohcProfilesProfile0x0001, const PDCPConfigHeaderCompressionRohcProfilesProfile0x0002& pDCPConfigHeaderCompressionRohcProfilesProfile0x0002, const PDCPConfigHeaderCompressionRohcProfilesProfile0x0003& pDCPConfigHeaderCompressionRohcProfilesProfile0x0003, const PDCPConfigHeaderCompressionRohcProfilesProfile0x0004& pDCPConfigHeaderCompressionRohcProfilesProfile0x0004, const PDCPConfigHeaderCompressionRohcProfilesProfile0x0006& pDCPConfigHeaderCompressionRohcProfilesProfile0x0006, const PDCPConfigHeaderCompressionRohcProfilesProfile0x0101& pDCPConfigHeaderCompressionRohcProfilesProfile0x0101, const PDCPConfigHeaderCompressionRohcProfilesProfile0x0102& pDCPConfigHeaderCompressionRohcProfilesProfile0x0102, const PDCPConfigHeaderCompressionRohcProfilesProfile0x0103& pDCPConfigHeaderCompressionRohcProfilesProfile0x0103, const PDCPConfigHeaderCompressionRohcProfilesProfile0x0104& pDCPConfigHeaderCompressionRohcProfilesProfile0x0104) : Sequence(&theInfo) {
	setPDCPConfigHeaderCompressionRohcProfilesProfile0x0001(pDCPConfigHeaderCompressionRohcProfilesProfile0x0001);
	setPDCPConfigHeaderCompressionRohcProfilesProfile0x0002(pDCPConfigHeaderCompressionRohcProfilesProfile0x0002);
	setPDCPConfigHeaderCompressionRohcProfilesProfile0x0003(pDCPConfigHeaderCompressionRohcProfilesProfile0x0003);
	setPDCPConfigHeaderCompressionRohcProfilesProfile0x0004(pDCPConfigHeaderCompressionRohcProfilesProfile0x0004);
	setPDCPConfigHeaderCompressionRohcProfilesProfile0x0006(pDCPConfigHeaderCompressionRohcProfilesProfile0x0006);
	setPDCPConfigHeaderCompressionRohcProfilesProfile0x0101(pDCPConfigHeaderCompressionRohcProfilesProfile0x0101);
	setPDCPConfigHeaderCompressionRohcProfilesProfile0x0102(pDCPConfigHeaderCompressionRohcProfilesProfile0x0102);
	setPDCPConfigHeaderCompressionRohcProfilesProfile0x0103(pDCPConfigHeaderCompressionRohcProfilesProfile0x0103);
	setPDCPConfigHeaderCompressionRohcProfilesProfile0x0104(pDCPConfigHeaderCompressionRohcProfilesProfile0x0104);
}

const void *PDCPConfigHeaderCompressionRohc::itemsInfo[2] = {
	&PDCPConfigHeaderCompressionRohcMaxCID::theInfo,
	&PDCPConfigHeaderCompressionRohcProfiles::theInfo,
};
bool PDCPConfigHeaderCompressionRohc::itemsPres[2] = {
	0,
	1,
};
const PDCPConfigHeaderCompressionRohc::Info PDCPConfigHeaderCompressionRohc::theInfo = {
	PDCPConfigHeaderCompressionRohc::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	2, 1, 0
};
PDCPConfigHeaderCompressionRohc::PDCPConfigHeaderCompressionRohc(const PDCPConfigHeaderCompressionRohcProfiles& pDCPConfigHeaderCompressionRohcProfiles) : Sequence(&theInfo) {
	setPDCPConfigHeaderCompressionRohcProfiles(pDCPConfigHeaderCompressionRohcProfiles);
}

const void *PDCPConfigHeaderCompression::choicesInfo[2] = {
	&PDCPConfigHeaderCompressionNotUsed::theInfo,
	&PDCPConfigHeaderCompressionRohc::theInfo,
};
const PDCPConfigHeaderCompression::Info PDCPConfigHeaderCompression::theInfo = {
	PDCPConfigHeaderCompression::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *PDCPConfig::itemsInfo[5] = {
	&PDCPConfigdiscardTimer::theInfo,
	&PDCPConfigRlcAM::theInfo,
	&PDCPConfigRlcUM::theInfo,
	&PDCPConfigHeaderCompression::theInfo,
	&PDCPConfigrn_IntegrityProtection_r10::theInfo,
};
bool PDCPConfig::itemsPres[5] = {
	0,
	0,
	0,
	0,
	0,
};
const PDCPConfig::Info PDCPConfig::theInfo = {
	PDCPConfig::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	4, 4, 1
};

const void *DRBToAddMod::itemsInfo[6] = {
	&DRBToAddModEpsBearerIdentity::theInfo,
	&DRBIdentity::theInfo,
	&PDCPConfig::theInfo,
	&RLCConfig::theInfo,
	&DRBToAddModLogicalChannelIdentity::theInfo,
	&LogicalChannelConfig::theInfo,
};
bool DRBToAddMod::itemsPres[6] = {
	0,
	1,
	0,
	0,
	0,
	0,
};
const DRBToAddMod::Info DRBToAddMod::theInfo = {
	DRBToAddMod::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	6, 5, 0
};
DRBToAddMod::DRBToAddMod(const DRBIdentity& drbIdentity) : Sequence(&theInfo) {
	setDrbIdentity(drbIdentity);
}

const void *MACMainConfigUlSCHConfig::itemsInfo[4] = {
	&MACMainConfigUlSCHConfigmaxHARQ_Tx::theInfo,
	&MACMainConfigUlSCHConfigperiodicBSR_Timer::theInfo,
	&MACMainConfigUlSCHConfigretxBSR_Timer::theInfo,
	&MACMainConfigUlSCHConfigTtiBundling::theInfo,
};
bool MACMainConfigUlSCHConfig::itemsPres[4] = {
	0,
	0,
	1,
	1,
};
const MACMainConfigUlSCHConfig::Info MACMainConfigUlSCHConfig::theInfo = {
	MACMainConfigUlSCHConfig::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
};
MACMainConfigUlSCHConfig::MACMainConfigUlSCHConfig(const MACMainConfigUlSCHConfigretxBSR_Timer& mACMainConfigUlSCHConfigretxBSR_Timer, const MACMainConfigUlSCHConfigTtiBundling& mACMainConfigUlSCHConfigTtiBundling) : Sequence(&theInfo) {
	setMACMainConfigUlSCHConfigretxBSR_Timer(mACMainConfigUlSCHConfigretxBSR_Timer);
	setMACMainConfigUlSCHConfigTtiBundling(mACMainConfigUlSCHConfigTtiBundling);
}

const void *DRXConfigSetupLongDRXCycleStartOffset::choicesInfo[16] = {
	&DRXConfigSetupLongDRXCycleStartOffsetSf10::theInfo,
	&DRXConfigSetupLongDRXCycleStartOffsetSf20::theInfo,
	&DRXConfigSetupLongDRXCycleStartOffsetSf32::theInfo,
	&DRXConfigSetupLongDRXCycleStartOffsetSf40::theInfo,
	&DRXConfigSetupLongDRXCycleStartOffsetSf64::theInfo,
	&DRXConfigSetupLongDRXCycleStartOffsetSf80::theInfo,
	&DRXConfigSetupLongDRXCycleStartOffsetSf128::theInfo,
	&DRXConfigSetupLongDRXCycleStartOffsetSf160::theInfo,
	&DRXConfigSetupLongDRXCycleStartOffsetSf256::theInfo,
	&DRXConfigSetupLongDRXCycleStartOffsetSf320::theInfo,
	&DRXConfigSetupLongDRXCycleStartOffsetSf512::theInfo,
	&DRXConfigSetupLongDRXCycleStartOffsetSf640::theInfo,
	&DRXConfigSetupLongDRXCycleStartOffsetSf1024::theInfo,
	&DRXConfigSetupLongDRXCycleStartOffsetSf1280::theInfo,
	&DRXConfigSetupLongDRXCycleStartOffsetSf2048::theInfo,
	&DRXConfigSetupLongDRXCycleStartOffsetSf2560::theInfo,
};
const DRXConfigSetupLongDRXCycleStartOffset::Info DRXConfigSetupLongDRXCycleStartOffset::theInfo = {
	DRXConfigSetupLongDRXCycleStartOffset::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	15
};

const void *DRXConfigSetupShortDRX::itemsInfo[2] = {
	&DRXConfigSetupShortDRXshortDRX_Cycle::theInfo,
	&DRXConfigSetupShortDRXDrxShortCycleTimer::theInfo,
};
bool DRXConfigSetupShortDRX::itemsPres[2] = {
	1,
	1,
};
const DRXConfigSetupShortDRX::Info DRXConfigSetupShortDRX::theInfo = {
	DRXConfigSetupShortDRX::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
DRXConfigSetupShortDRX::DRXConfigSetupShortDRX(const DRXConfigSetupShortDRXshortDRX_Cycle& dRXConfigSetupShortDRXshortDRX_Cycle, const DRXConfigSetupShortDRXDrxShortCycleTimer& dRXConfigSetupShortDRXDrxShortCycleTimer) : Sequence(&theInfo) {
	setDRXConfigSetupShortDRXshortDRX_Cycle(dRXConfigSetupShortDRXshortDRX_Cycle);
	setDRXConfigSetupShortDRXDrxShortCycleTimer(dRXConfigSetupShortDRXDrxShortCycleTimer);
}

const void *DRXConfigSetup::itemsInfo[5] = {
	&DRXConfigSetuponDurationTimer::theInfo,
	&DRXConfigSetupdrx_InactivityTimer::theInfo,
	&DRXConfigSetupdrx_RetransmissionTimer::theInfo,
	&DRXConfigSetupLongDRXCycleStartOffset::theInfo,
	&DRXConfigSetupShortDRX::theInfo,
};
bool DRXConfigSetup::itemsPres[5] = {
	1,
	1,
	1,
	1,
	0,
};
const DRXConfigSetup::Info DRXConfigSetup::theInfo = {
	DRXConfigSetup::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 1, 0
};
DRXConfigSetup::DRXConfigSetup(const DRXConfigSetuponDurationTimer& dRXConfigSetuponDurationTimer, const DRXConfigSetupdrx_InactivityTimer& dRXConfigSetupdrx_InactivityTimer, const DRXConfigSetupdrx_RetransmissionTimer& dRXConfigSetupdrx_RetransmissionTimer, const DRXConfigSetupLongDRXCycleStartOffset& dRXConfigSetupLongDRXCycleStartOffset) : Sequence(&theInfo) {
	setDRXConfigSetuponDurationTimer(dRXConfigSetuponDurationTimer);
	setDRXConfigSetupdrx_InactivityTimer(dRXConfigSetupdrx_InactivityTimer);
	setDRXConfigSetupdrx_RetransmissionTimer(dRXConfigSetupdrx_RetransmissionTimer);
	setDRXConfigSetupLongDRXCycleStartOffset(dRXConfigSetupLongDRXCycleStartOffset);
}

const void *DRXConfig::choicesInfo[2] = {
	&DRXConfigRelease::theInfo,
	&DRXConfigSetup::theInfo,
};
const DRXConfig::Info DRXConfig::theInfo = {
	DRXConfig::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *MACMainConfigPhrConfigSetup::itemsInfo[3] = {
	&MACMainConfigPhrConfigSetupperiodicPHR_Timer::theInfo,
	&MACMainConfigPhrConfigSetupprohibitPHR_Timer::theInfo,
	&MACMainConfigPhrConfigSetupdl_PathlossChange::theInfo,
};
bool MACMainConfigPhrConfigSetup::itemsPres[3] = {
	1,
	1,
	1,
};
const MACMainConfigPhrConfigSetup::Info MACMainConfigPhrConfigSetup::theInfo = {
	MACMainConfigPhrConfigSetup::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};
MACMainConfigPhrConfigSetup::MACMainConfigPhrConfigSetup(const MACMainConfigPhrConfigSetupperiodicPHR_Timer& mACMainConfigPhrConfigSetupperiodicPHR_Timer, const MACMainConfigPhrConfigSetupprohibitPHR_Timer& mACMainConfigPhrConfigSetupprohibitPHR_Timer, const MACMainConfigPhrConfigSetupdl_PathlossChange& mACMainConfigPhrConfigSetupdl_PathlossChange) : Sequence(&theInfo) {
	setMACMainConfigPhrConfigSetupperiodicPHR_Timer(mACMainConfigPhrConfigSetupperiodicPHR_Timer);
	setMACMainConfigPhrConfigSetupprohibitPHR_Timer(mACMainConfigPhrConfigSetupprohibitPHR_Timer);
	setMACMainConfigPhrConfigSetupdl_PathlossChange(mACMainConfigPhrConfigSetupdl_PathlossChange);
}

const void *MACMainConfigPhrConfig::choicesInfo[2] = {
	&MACMainConfigPhrConfigRelease::theInfo,
	&MACMainConfigPhrConfigSetup::theInfo,
};
const MACMainConfigPhrConfig::Info MACMainConfigPhrConfig::theInfo = {
	MACMainConfigPhrConfig::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *MACMainConfigMacMainConfigv1020::itemsInfo[3] = {
	&MACMainConfigMacMainConfigv1020sCellDeactivationTimer_r10::theInfo,
	&MACMainConfigMacMainConfigv1020extendedBSR_Sizes_r10::theInfo,
	&MACMainConfigMacMainConfigv1020extendedPHR_r10::theInfo,
};
bool MACMainConfigMacMainConfigv1020::itemsPres[3] = {
	0,
	0,
	0,
};
const MACMainConfigMacMainConfigv1020::Info MACMainConfigMacMainConfigv1020::theInfo = {
	MACMainConfigMacMainConfigv1020::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *MACMainConfig::itemsInfo[6] = {
	&MACMainConfigUlSCHConfig::theInfo,
	&DRXConfig::theInfo,
	&TimeAlignmentTimer::theInfo,
	&MACMainConfigPhrConfig::theInfo,
	&MACMainConfigSrProhibitTimerr9::theInfo,
	&MACMainConfigMacMainConfigv1020::theInfo,
};
bool MACMainConfig::itemsPres[6] = {
	0,
	0,
	1,
	0,
	0,
	0,
};
const MACMainConfig::Info MACMainConfig::theInfo = {
	MACMainConfig::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	4, 3, 2
};
MACMainConfig::MACMainConfig(const TimeAlignmentTimer& timeAlignmentTimerDedicated) : Sequence(&theInfo) {
	setTimeAlignmentTimerDedicated(timeAlignmentTimerDedicated);
}

const void *RadioResourceConfigDedicatedMacMainConfig::choicesInfo[2] = {
	&MACMainConfig::theInfo,
	&RadioResourceConfigDedicatedMacMainConfigDefaultValue::theInfo,
};
const RadioResourceConfigDedicatedMacMainConfig::Info RadioResourceConfigDedicatedMacMainConfig::theInfo = {
	RadioResourceConfigDedicatedMacMainConfig::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *SPSConfigDLSetupTwoAntennaPortActivatedr10Setup::itemsInfo[1] = {
	&N1PUCCHANPersistentList::theInfo,
};
bool SPSConfigDLSetupTwoAntennaPortActivatedr10Setup::itemsPres[1] = {
	1,
};
const SPSConfigDLSetupTwoAntennaPortActivatedr10Setup::Info SPSConfigDLSetupTwoAntennaPortActivatedr10Setup::theInfo = {
	SPSConfigDLSetupTwoAntennaPortActivatedr10Setup::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
SPSConfigDLSetupTwoAntennaPortActivatedr10Setup::SPSConfigDLSetupTwoAntennaPortActivatedr10Setup(const N1PUCCHANPersistentList& n1PUCCHANPersistentListP1r10) : Sequence(&theInfo) {
	setN1PUCCHANPersistentListP1r10(n1PUCCHANPersistentListP1r10);
}

const void *SPSConfigDLSetupTwoAntennaPortActivatedr10::choicesInfo[2] = {
	&SPSConfigDLSetupTwoAntennaPortActivatedr10Release::theInfo,
	&SPSConfigDLSetupTwoAntennaPortActivatedr10Setup::theInfo,
};
const SPSConfigDLSetupTwoAntennaPortActivatedr10::Info SPSConfigDLSetupTwoAntennaPortActivatedr10::theInfo = {
	SPSConfigDLSetupTwoAntennaPortActivatedr10::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *SPSConfigDLSetup::itemsInfo[4] = {
	&SPSConfigDLSetupsemiPersistSchedIntervalDL::theInfo,
	&SPSConfigDLSetupNumberOfConfSPSProcesses::theInfo,
	&N1PUCCHANPersistentList::theInfo,
	&SPSConfigDLSetupTwoAntennaPortActivatedr10::theInfo,
};
bool SPSConfigDLSetup::itemsPres[4] = {
	1,
	1,
	1,
	0,
};
const SPSConfigDLSetup::Info SPSConfigDLSetup::theInfo = {
	SPSConfigDLSetup::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	3, 0, 1
};
SPSConfigDLSetup::SPSConfigDLSetup(const SPSConfigDLSetupsemiPersistSchedIntervalDL& sPSConfigDLSetupsemiPersistSchedIntervalDL, const SPSConfigDLSetupNumberOfConfSPSProcesses& sPSConfigDLSetupNumberOfConfSPSProcesses, const N1PUCCHANPersistentList& n1PUCCHANPersistentList) : Sequence(&theInfo) {
	setSPSConfigDLSetupsemiPersistSchedIntervalDL(sPSConfigDLSetupsemiPersistSchedIntervalDL);
	setSPSConfigDLSetupNumberOfConfSPSProcesses(sPSConfigDLSetupNumberOfConfSPSProcesses);
	setN1PUCCHANPersistentList(n1PUCCHANPersistentList);
}

const void *SPSConfigDL::choicesInfo[2] = {
	&SPSConfigDLRelease::theInfo,
	&SPSConfigDLSetup::theInfo,
};
const SPSConfigDL::Info SPSConfigDL::theInfo = {
	SPSConfigDL::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *SPSConfigULSetupP0Persistent::itemsInfo[2] = {
	&SPSConfigULSetupP0PersistentP0NominalPUSCHPersistent::theInfo,
	&SPSConfigULSetupP0PersistentP0UEPUSCHPersistent::theInfo,
};
bool SPSConfigULSetupP0Persistent::itemsPres[2] = {
	1,
	1,
};
const SPSConfigULSetupP0Persistent::Info SPSConfigULSetupP0Persistent::theInfo = {
	SPSConfigULSetupP0Persistent::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
SPSConfigULSetupP0Persistent::SPSConfigULSetupP0Persistent(const SPSConfigULSetupP0PersistentP0NominalPUSCHPersistent& sPSConfigULSetupP0PersistentP0NominalPUSCHPersistent, const SPSConfigULSetupP0PersistentP0UEPUSCHPersistent& sPSConfigULSetupP0PersistentP0UEPUSCHPersistent) : Sequence(&theInfo) {
	setSPSConfigULSetupP0PersistentP0NominalPUSCHPersistent(sPSConfigULSetupP0PersistentP0NominalPUSCHPersistent);
	setSPSConfigULSetupP0PersistentP0UEPUSCHPersistent(sPSConfigULSetupP0PersistentP0UEPUSCHPersistent);
}

const void *SPSConfigULSetup::itemsInfo[4] = {
	&SPSConfigULSetupsemiPersistSchedIntervalUL::theInfo,
	&SPSConfigULSetupimplicitReleaseAfter::theInfo,
	&SPSConfigULSetupP0Persistent::theInfo,
	&SPSConfigULSetuptwoIntervalsConfig::theInfo,
};
bool SPSConfigULSetup::itemsPres[4] = {
	1,
	1,
	0,
	0,
};
const SPSConfigULSetup::Info SPSConfigULSetup::theInfo = {
	SPSConfigULSetup::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	4, 2, 0
};
SPSConfigULSetup::SPSConfigULSetup(const SPSConfigULSetupsemiPersistSchedIntervalUL& sPSConfigULSetupsemiPersistSchedIntervalUL, const SPSConfigULSetupimplicitReleaseAfter& sPSConfigULSetupimplicitReleaseAfter) : Sequence(&theInfo) {
	setSPSConfigULSetupsemiPersistSchedIntervalUL(sPSConfigULSetupsemiPersistSchedIntervalUL);
	setSPSConfigULSetupimplicitReleaseAfter(sPSConfigULSetupimplicitReleaseAfter);
}

const void *SPSConfigUL::choicesInfo[2] = {
	&SPSConfigULRelease::theInfo,
	&SPSConfigULSetup::theInfo,
};
const SPSConfigUL::Info SPSConfigUL::theInfo = {
	SPSConfigUL::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *SPSConfig::itemsInfo[3] = {
	&CRNTI::theInfo,
	&SPSConfigDL::theInfo,
	&SPSConfigUL::theInfo,
};
bool SPSConfig::itemsPres[3] = {
	0,
	0,
	0,
};
const SPSConfig::Info SPSConfig::theInfo = {
	SPSConfig::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *PDSCHConfigDedicated::itemsInfo[1] = {
	&PDSCHConfigDedicatedp_a::theInfo,
};
bool PDSCHConfigDedicated::itemsPres[1] = {
	1,
};
const PDSCHConfigDedicated::Info PDSCHConfigDedicated::theInfo = {
	PDSCHConfigDedicated::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
PDSCHConfigDedicated::PDSCHConfigDedicated(const PDSCHConfigDedicatedp_a& pDSCHConfigDedicatedp_a) : Sequence(&theInfo) {
	setPDSCHConfigDedicatedp_a(pDSCHConfigDedicatedp_a);
}

const void *PUCCHConfigDedicatedAckNackRepetitionSetup::itemsInfo[2] = {
	&PUCCHConfigDedicatedAckNackRepetitionSetuprepetitionFactor::theInfo,
	&PUCCHConfigDedicatedAckNackRepetitionSetupN1PUCCHANRep::theInfo,
};
bool PUCCHConfigDedicatedAckNackRepetitionSetup::itemsPres[2] = {
	1,
	1,
};
const PUCCHConfigDedicatedAckNackRepetitionSetup::Info PUCCHConfigDedicatedAckNackRepetitionSetup::theInfo = {
	PUCCHConfigDedicatedAckNackRepetitionSetup::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
PUCCHConfigDedicatedAckNackRepetitionSetup::PUCCHConfigDedicatedAckNackRepetitionSetup(const PUCCHConfigDedicatedAckNackRepetitionSetuprepetitionFactor& pUCCHConfigDedicatedAckNackRepetitionSetuprepetitionFactor, const PUCCHConfigDedicatedAckNackRepetitionSetupN1PUCCHANRep& pUCCHConfigDedicatedAckNackRepetitionSetupN1PUCCHANRep) : Sequence(&theInfo) {
	setPUCCHConfigDedicatedAckNackRepetitionSetuprepetitionFactor(pUCCHConfigDedicatedAckNackRepetitionSetuprepetitionFactor);
	setPUCCHConfigDedicatedAckNackRepetitionSetupN1PUCCHANRep(pUCCHConfigDedicatedAckNackRepetitionSetupN1PUCCHANRep);
}

const void *PUCCHConfigDedicatedAckNackRepetition::choicesInfo[2] = {
	&PUCCHConfigDedicatedAckNackRepetitionRelease::theInfo,
	&PUCCHConfigDedicatedAckNackRepetitionSetup::theInfo,
};
const PUCCHConfigDedicatedAckNackRepetition::Info PUCCHConfigDedicatedAckNackRepetition::theInfo = {
	PUCCHConfigDedicatedAckNackRepetition::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *PUCCHConfigDedicated::itemsInfo[2] = {
	&PUCCHConfigDedicatedAckNackRepetition::theInfo,
	&PUCCHConfigDedicatedtdd_AckNackFeedbackMode::theInfo,
};
bool PUCCHConfigDedicated::itemsPres[2] = {
	1,
	0,
};
const PUCCHConfigDedicated::Info PUCCHConfigDedicated::theInfo = {
	PUCCHConfigDedicated::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};
PUCCHConfigDedicated::PUCCHConfigDedicated(const PUCCHConfigDedicatedAckNackRepetition& pUCCHConfigDedicatedAckNackRepetition) : Sequence(&theInfo) {
	setPUCCHConfigDedicatedAckNackRepetition(pUCCHConfigDedicatedAckNackRepetition);
}

const void *PUSCHConfigDedicated::itemsInfo[3] = {
	&PUSCHConfigDedicatedBetaOffsetACKIndex::theInfo,
	&PUSCHConfigDedicatedBetaOffsetRIIndex::theInfo,
	&PUSCHConfigDedicatedBetaOffsetCQIIndex::theInfo,
};
bool PUSCHConfigDedicated::itemsPres[3] = {
	1,
	1,
	1,
};
const PUSCHConfigDedicated::Info PUSCHConfigDedicated::theInfo = {
	PUSCHConfigDedicated::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};
PUSCHConfigDedicated::PUSCHConfigDedicated(const PUSCHConfigDedicatedBetaOffsetACKIndex& pUSCHConfigDedicatedBetaOffsetACKIndex, const PUSCHConfigDedicatedBetaOffsetRIIndex& pUSCHConfigDedicatedBetaOffsetRIIndex, const PUSCHConfigDedicatedBetaOffsetCQIIndex& pUSCHConfigDedicatedBetaOffsetCQIIndex) : Sequence(&theInfo) {
	setPUSCHConfigDedicatedBetaOffsetACKIndex(pUSCHConfigDedicatedBetaOffsetACKIndex);
	setPUSCHConfigDedicatedBetaOffsetRIIndex(pUSCHConfigDedicatedBetaOffsetRIIndex);
	setPUSCHConfigDedicatedBetaOffsetCQIIndex(pUSCHConfigDedicatedBetaOffsetCQIIndex);
}

const void *UplinkPowerControlDedicated::itemsInfo[6] = {
	&UplinkPowerControlDedicatedP0UEPUSCH::theInfo,
	&UplinkPowerControlDedicateddeltaMCS_Enabled::theInfo,
	&UplinkPowerControlDedicatedAccumulationEnabled::theInfo,
	&UplinkPowerControlDedicatedP0UEPUCCH::theInfo,
	&UplinkPowerControlDedicatedPSRSOffset::theInfo,
	&FilterCoefficient::theInfo,
};
bool UplinkPowerControlDedicated::itemsPres[6] = {
	1,
	1,
	1,
	1,
	1,
	0,
};
const UplinkPowerControlDedicated::Info UplinkPowerControlDedicated::theInfo = {
	UplinkPowerControlDedicated::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 1, 0
};
UplinkPowerControlDedicated::UplinkPowerControlDedicated(const UplinkPowerControlDedicatedP0UEPUSCH& uplinkPowerControlDedicatedP0UEPUSCH, const UplinkPowerControlDedicateddeltaMCS_Enabled& uplinkPowerControlDedicateddeltaMCS_Enabled, const UplinkPowerControlDedicatedAccumulationEnabled& uplinkPowerControlDedicatedAccumulationEnabled, const UplinkPowerControlDedicatedP0UEPUCCH& uplinkPowerControlDedicatedP0UEPUCCH, const UplinkPowerControlDedicatedPSRSOffset& uplinkPowerControlDedicatedPSRSOffset) : Sequence(&theInfo) {
	setUplinkPowerControlDedicatedP0UEPUSCH(uplinkPowerControlDedicatedP0UEPUSCH);
	setUplinkPowerControlDedicateddeltaMCS_Enabled(uplinkPowerControlDedicateddeltaMCS_Enabled);
	setUplinkPowerControlDedicatedAccumulationEnabled(uplinkPowerControlDedicatedAccumulationEnabled);
	setUplinkPowerControlDedicatedP0UEPUCCH(uplinkPowerControlDedicatedP0UEPUCCH);
	setUplinkPowerControlDedicatedPSRSOffset(uplinkPowerControlDedicatedPSRSOffset);
}

const void *TPCIndex::choicesInfo[2] = {
	&TPCIndexIndexOfFormat3::theInfo,
	&TPCIndexIndexOfFormat3A::theInfo,
};
const TPCIndex::Info TPCIndex::theInfo = {
	TPCIndex::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *TPCPDCCHConfigSetup::itemsInfo[2] = {
	&TPCPDCCHConfigSetupTpcRNTI::theInfo,
	&TPCIndex::theInfo,
};
bool TPCPDCCHConfigSetup::itemsPres[2] = {
	1,
	1,
};
const TPCPDCCHConfigSetup::Info TPCPDCCHConfigSetup::theInfo = {
	TPCPDCCHConfigSetup::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
TPCPDCCHConfigSetup::TPCPDCCHConfigSetup(const TPCPDCCHConfigSetupTpcRNTI& tPCPDCCHConfigSetupTpcRNTI, const TPCIndex& tpcIndex) : Sequence(&theInfo) {
	setTPCPDCCHConfigSetupTpcRNTI(tPCPDCCHConfigSetupTpcRNTI);
	setTpcIndex(tpcIndex);
}

const void *TPCPDCCHConfig::choicesInfo[2] = {
	&TPCPDCCHConfigRelease::theInfo,
	&TPCPDCCHConfigSetup::theInfo,
};
const TPCPDCCHConfig::Info TPCPDCCHConfig::theInfo = {
	TPCPDCCHConfig::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *CQIReportPeriodicSetupCqiFormatIndicatorPeriodicSubbandCQI::itemsInfo[1] = {
	&CQIReportPeriodicSetupCqiFormatIndicatorPeriodicSubbandCQIK::theInfo,
};
bool CQIReportPeriodicSetupCqiFormatIndicatorPeriodicSubbandCQI::itemsPres[1] = {
	1,
};
const CQIReportPeriodicSetupCqiFormatIndicatorPeriodicSubbandCQI::Info CQIReportPeriodicSetupCqiFormatIndicatorPeriodicSubbandCQI::theInfo = {
	CQIReportPeriodicSetupCqiFormatIndicatorPeriodicSubbandCQI::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
CQIReportPeriodicSetupCqiFormatIndicatorPeriodicSubbandCQI::CQIReportPeriodicSetupCqiFormatIndicatorPeriodicSubbandCQI(const CQIReportPeriodicSetupCqiFormatIndicatorPeriodicSubbandCQIK& cQIReportPeriodicSetupCqiFormatIndicatorPeriodicSubbandCQIK) : Sequence(&theInfo) {
	setCQIReportPeriodicSetupCqiFormatIndicatorPeriodicSubbandCQIK(cQIReportPeriodicSetupCqiFormatIndicatorPeriodicSubbandCQIK);
}

const void *CQIReportPeriodicSetupCqiFormatIndicatorPeriodic::choicesInfo[2] = {
	&CQIReportPeriodicSetupCqiFormatIndicatorPeriodicWidebandCQI::theInfo,
	&CQIReportPeriodicSetupCqiFormatIndicatorPeriodicSubbandCQI::theInfo,
};
const CQIReportPeriodicSetupCqiFormatIndicatorPeriodic::Info CQIReportPeriodicSetupCqiFormatIndicatorPeriodic::theInfo = {
	CQIReportPeriodicSetupCqiFormatIndicatorPeriodic::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *CQIReportPeriodicSetup::itemsInfo[5] = {
	&CQIReportPeriodicSetupCqiPUCCHResourceIndex::theInfo,
	&CQIReportPeriodicSetupCqipmiConfigIndex::theInfo,
	&CQIReportPeriodicSetupCqiFormatIndicatorPeriodic::theInfo,
	&CQIReportPeriodicSetupRiConfigIndex::theInfo,
	&CQIReportPeriodicSetupSimultaneousAckNackAndCQI::theInfo,
};
bool CQIReportPeriodicSetup::itemsPres[5] = {
	1,
	1,
	1,
	0,
	1,
};
const CQIReportPeriodicSetup::Info CQIReportPeriodicSetup::theInfo = {
	CQIReportPeriodicSetup::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 1, 0
};
CQIReportPeriodicSetup::CQIReportPeriodicSetup(const CQIReportPeriodicSetupCqiPUCCHResourceIndex& cQIReportPeriodicSetupCqiPUCCHResourceIndex, const CQIReportPeriodicSetupCqipmiConfigIndex& cQIReportPeriodicSetupCqipmiConfigIndex, const CQIReportPeriodicSetupCqiFormatIndicatorPeriodic& cQIReportPeriodicSetupCqiFormatIndicatorPeriodic, const CQIReportPeriodicSetupSimultaneousAckNackAndCQI& cQIReportPeriodicSetupSimultaneousAckNackAndCQI) : Sequence(&theInfo) {
	setCQIReportPeriodicSetupCqiPUCCHResourceIndex(cQIReportPeriodicSetupCqiPUCCHResourceIndex);
	setCQIReportPeriodicSetupCqipmiConfigIndex(cQIReportPeriodicSetupCqipmiConfigIndex);
	setCQIReportPeriodicSetupCqiFormatIndicatorPeriodic(cQIReportPeriodicSetupCqiFormatIndicatorPeriodic);
	setCQIReportPeriodicSetupSimultaneousAckNackAndCQI(cQIReportPeriodicSetupSimultaneousAckNackAndCQI);
}

const void *CQIReportPeriodic::choicesInfo[2] = {
	&CQIReportPeriodicRelease::theInfo,
	&CQIReportPeriodicSetup::theInfo,
};
const CQIReportPeriodic::Info CQIReportPeriodic::theInfo = {
	CQIReportPeriodic::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *CQIReportConfig::itemsInfo[3] = {
	&CQIReportModeAperiodic::theInfo,
	&CQIReportConfigNomPDSCHRSEPREOffset::theInfo,
	&CQIReportPeriodic::theInfo,
};
bool CQIReportConfig::itemsPres[3] = {
	0,
	1,
	0,
};
const CQIReportConfig::Info CQIReportConfig::theInfo = {
	CQIReportConfig::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};
CQIReportConfig::CQIReportConfig(const CQIReportConfigNomPDSCHRSEPREOffset& cQIReportConfigNomPDSCHRSEPREOffset) : Sequence(&theInfo) {
	setCQIReportConfigNomPDSCHRSEPREOffset(cQIReportConfigNomPDSCHRSEPREOffset);
}

const void *SoundingRSULConfigDedicatedSetup::itemsInfo[7] = {
	&SoundingRSULConfigDedicatedSetupsrs_Bandwidth::theInfo,
	&SoundingRSULConfigDedicatedSetupsrs_HoppingBandwidth::theInfo,
	&SoundingRSULConfigDedicatedSetupFreqDomainPosition::theInfo,
	&SoundingRSULConfigDedicatedSetupDuration::theInfo,
	&SoundingRSULConfigDedicatedSetupSrsConfigIndex::theInfo,
	&SoundingRSULConfigDedicatedSetupTransmissionComb::theInfo,
	&SoundingRSULConfigDedicatedSetupcyclicShift::theInfo,
};
bool SoundingRSULConfigDedicatedSetup::itemsPres[7] = {
	1,
	1,
	1,
	1,
	1,
	1,
	1,
};
const SoundingRSULConfigDedicatedSetup::Info SoundingRSULConfigDedicatedSetup::theInfo = {
	SoundingRSULConfigDedicatedSetup::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	7, 0, 0
};
SoundingRSULConfigDedicatedSetup::SoundingRSULConfigDedicatedSetup(const SoundingRSULConfigDedicatedSetupsrs_Bandwidth& soundingRSULConfigDedicatedSetupsrs_Bandwidth, const SoundingRSULConfigDedicatedSetupsrs_HoppingBandwidth& soundingRSULConfigDedicatedSetupsrs_HoppingBandwidth, const SoundingRSULConfigDedicatedSetupFreqDomainPosition& soundingRSULConfigDedicatedSetupFreqDomainPosition, const SoundingRSULConfigDedicatedSetupDuration& soundingRSULConfigDedicatedSetupDuration, const SoundingRSULConfigDedicatedSetupSrsConfigIndex& soundingRSULConfigDedicatedSetupSrsConfigIndex, const SoundingRSULConfigDedicatedSetupTransmissionComb& soundingRSULConfigDedicatedSetupTransmissionComb, const SoundingRSULConfigDedicatedSetupcyclicShift& soundingRSULConfigDedicatedSetupcyclicShift) : Sequence(&theInfo) {
	setSoundingRSULConfigDedicatedSetupsrs_Bandwidth(soundingRSULConfigDedicatedSetupsrs_Bandwidth);
	setSoundingRSULConfigDedicatedSetupsrs_HoppingBandwidth(soundingRSULConfigDedicatedSetupsrs_HoppingBandwidth);
	setSoundingRSULConfigDedicatedSetupFreqDomainPosition(soundingRSULConfigDedicatedSetupFreqDomainPosition);
	setSoundingRSULConfigDedicatedSetupDuration(soundingRSULConfigDedicatedSetupDuration);
	setSoundingRSULConfigDedicatedSetupSrsConfigIndex(soundingRSULConfigDedicatedSetupSrsConfigIndex);
	setSoundingRSULConfigDedicatedSetupTransmissionComb(soundingRSULConfigDedicatedSetupTransmissionComb);
	setSoundingRSULConfigDedicatedSetupcyclicShift(soundingRSULConfigDedicatedSetupcyclicShift);
}

const void *SoundingRSULConfigDedicated::choicesInfo[2] = {
	&SoundingRSULConfigDedicatedRelease::theInfo,
	&SoundingRSULConfigDedicatedSetup::theInfo,
};
const SoundingRSULConfigDedicated::Info SoundingRSULConfigDedicated::theInfo = {
	SoundingRSULConfigDedicated::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *AntennaInfoDedicatedCodebookSubsetRestriction::choicesInfo[8] = {
	&AntennaInfoDedicatedCodebookSubsetRestrictionN2TxAntennatm3::theInfo,
	&AntennaInfoDedicatedCodebookSubsetRestrictionN4TxAntennatm3::theInfo,
	&AntennaInfoDedicatedCodebookSubsetRestrictionN2TxAntennatm4::theInfo,
	&AntennaInfoDedicatedCodebookSubsetRestrictionN4TxAntennatm4::theInfo,
	&AntennaInfoDedicatedCodebookSubsetRestrictionN2TxAntennatm5::theInfo,
	&AntennaInfoDedicatedCodebookSubsetRestrictionN4TxAntennatm5::theInfo,
	&AntennaInfoDedicatedCodebookSubsetRestrictionN2TxAntennatm6::theInfo,
	&AntennaInfoDedicatedCodebookSubsetRestrictionN4TxAntennatm6::theInfo,
};
const AntennaInfoDedicatedCodebookSubsetRestriction::Info AntennaInfoDedicatedCodebookSubsetRestriction::theInfo = {
	AntennaInfoDedicatedCodebookSubsetRestriction::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	7
};

const void *AntennaInfoDedicatedUeTransmitAntennaSelection::choicesInfo[2] = {
	&AntennaInfoDedicatedUeTransmitAntennaSelectionRelease::theInfo,
	&AntennaInfoDedicatedUeTransmitAntennaSelectionsetup::theInfo,
};
const AntennaInfoDedicatedUeTransmitAntennaSelection::Info AntennaInfoDedicatedUeTransmitAntennaSelection::theInfo = {
	AntennaInfoDedicatedUeTransmitAntennaSelection::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *AntennaInfoDedicated::itemsInfo[3] = {
	&AntennaInfoDedicatedtransmissionMode::theInfo,
	&AntennaInfoDedicatedCodebookSubsetRestriction::theInfo,
	&AntennaInfoDedicatedUeTransmitAntennaSelection::theInfo,
};
bool AntennaInfoDedicated::itemsPres[3] = {
	1,
	0,
	1,
};
const AntennaInfoDedicated::Info AntennaInfoDedicated::theInfo = {
	AntennaInfoDedicated::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};
AntennaInfoDedicated::AntennaInfoDedicated(const AntennaInfoDedicatedtransmissionMode& antennaInfoDedicatedtransmissionMode, const AntennaInfoDedicatedUeTransmitAntennaSelection& antennaInfoDedicatedUeTransmitAntennaSelection) : Sequence(&theInfo) {
	setAntennaInfoDedicatedtransmissionMode(antennaInfoDedicatedtransmissionMode);
	setAntennaInfoDedicatedUeTransmitAntennaSelection(antennaInfoDedicatedUeTransmitAntennaSelection);
}

const void *PhysicalConfigDedicatedAntennaInfo::choicesInfo[2] = {
	&AntennaInfoDedicated::theInfo,
	&PhysicalConfigDedicatedAntennaInfoDefaultValue::theInfo,
};
const PhysicalConfigDedicatedAntennaInfo::Info PhysicalConfigDedicatedAntennaInfo::theInfo = {
	PhysicalConfigDedicatedAntennaInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *SchedulingRequestConfigSetup::itemsInfo[3] = {
	&SchedulingRequestConfigSetupSrPUCCHResourceIndex::theInfo,
	&SchedulingRequestConfigSetupSrConfigIndex::theInfo,
	&SchedulingRequestConfigSetupdsr_TransMax::theInfo,
};
bool SchedulingRequestConfigSetup::itemsPres[3] = {
	1,
	1,
	1,
};
const SchedulingRequestConfigSetup::Info SchedulingRequestConfigSetup::theInfo = {
	SchedulingRequestConfigSetup::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};
SchedulingRequestConfigSetup::SchedulingRequestConfigSetup(const SchedulingRequestConfigSetupSrPUCCHResourceIndex& schedulingRequestConfigSetupSrPUCCHResourceIndex, const SchedulingRequestConfigSetupSrConfigIndex& schedulingRequestConfigSetupSrConfigIndex, const SchedulingRequestConfigSetupdsr_TransMax& schedulingRequestConfigSetupdsr_TransMax) : Sequence(&theInfo) {
	setSchedulingRequestConfigSetupSrPUCCHResourceIndex(schedulingRequestConfigSetupSrPUCCHResourceIndex);
	setSchedulingRequestConfigSetupSrConfigIndex(schedulingRequestConfigSetupSrConfigIndex);
	setSchedulingRequestConfigSetupdsr_TransMax(schedulingRequestConfigSetupdsr_TransMax);
}

const void *SchedulingRequestConfig::choicesInfo[2] = {
	&SchedulingRequestConfigRelease::theInfo,
	&SchedulingRequestConfigSetup::theInfo,
};
const SchedulingRequestConfig::Info SchedulingRequestConfig::theInfo = {
	SchedulingRequestConfig::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *CQIReportConfigv920::itemsInfo[2] = {
	&CQIReportConfigv920cqi_Mask_r9::theInfo,
	&CQIReportConfigv920pmi_RI_Report_r9::theInfo,
};
bool CQIReportConfigv920::itemsPres[2] = {
	0,
	0,
};
const CQIReportConfigv920::Info CQIReportConfigv920::theInfo = {
	CQIReportConfigv920::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *AntennaInfoDedicatedv920CodebookSubsetRestrictionv920::choicesInfo[2] = {
	&AntennaInfoDedicatedv920CodebookSubsetRestrictionv920N2TxAntennatm8r9::theInfo,
	&AntennaInfoDedicatedv920CodebookSubsetRestrictionv920N4TxAntennatm8r9::theInfo,
};
const AntennaInfoDedicatedv920CodebookSubsetRestrictionv920::Info AntennaInfoDedicatedv920CodebookSubsetRestrictionv920::theInfo = {
	AntennaInfoDedicatedv920CodebookSubsetRestrictionv920::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *AntennaInfoDedicatedv920::itemsInfo[1] = {
	&AntennaInfoDedicatedv920CodebookSubsetRestrictionv920::theInfo,
};
bool AntennaInfoDedicatedv920::itemsPres[1] = {
	0,
};
const AntennaInfoDedicatedv920::Info AntennaInfoDedicatedv920::theInfo = {
	AntennaInfoDedicatedv920::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *AntennaInfoDedicatedr10UeTransmitAntennaSelection::choicesInfo[2] = {
	&AntennaInfoDedicatedr10UeTransmitAntennaSelectionRelease::theInfo,
	&AntennaInfoDedicatedr10UeTransmitAntennaSelectionsetup::theInfo,
};
const AntennaInfoDedicatedr10UeTransmitAntennaSelection::Info AntennaInfoDedicatedr10UeTransmitAntennaSelection::theInfo = {
	AntennaInfoDedicatedr10UeTransmitAntennaSelection::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *AntennaInfoDedicatedr10::itemsInfo[3] = {
	&AntennaInfoDedicatedr10transmissionMode_r10::theInfo,
	&AntennaInfoDedicatedr10CodebookSubsetRestrictionr10::theInfo,
	&AntennaInfoDedicatedr10UeTransmitAntennaSelection::theInfo,
};
bool AntennaInfoDedicatedr10::itemsPres[3] = {
	1,
	0,
	1,
};
const AntennaInfoDedicatedr10::Info AntennaInfoDedicatedr10::theInfo = {
	AntennaInfoDedicatedr10::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};
AntennaInfoDedicatedr10::AntennaInfoDedicatedr10(const AntennaInfoDedicatedr10transmissionMode_r10& antennaInfoDedicatedr10transmissionMode_r10, const AntennaInfoDedicatedr10UeTransmitAntennaSelection& antennaInfoDedicatedr10UeTransmitAntennaSelection) : Sequence(&theInfo) {
	setAntennaInfoDedicatedr10transmissionMode_r10(antennaInfoDedicatedr10transmissionMode_r10);
	setAntennaInfoDedicatedr10UeTransmitAntennaSelection(antennaInfoDedicatedr10UeTransmitAntennaSelection);
}

const void *PhysicalConfigDedicatedAntennaInfor10::choicesInfo[2] = {
	&AntennaInfoDedicatedr10::theInfo,
	&PhysicalConfigDedicatedAntennaInfor10DefaultValue::theInfo,
};
const PhysicalConfigDedicatedAntennaInfor10::Info PhysicalConfigDedicatedAntennaInfor10::theInfo = {
	PhysicalConfigDedicatedAntennaInfor10::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *AntennaInfoULr10::itemsInfo[2] = {
	&AntennaInfoULr10transmissionModeUL_r10::theInfo,
	&AntennaInfoULr10fourAntennaPortActivated_r10::theInfo,
};
bool AntennaInfoULr10::itemsPres[2] = {
	0,
	0,
};
const AntennaInfoULr10::Info AntennaInfoULr10::theInfo = {
	AntennaInfoULr10::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *CQIReportAperiodicr10SetupAperiodicCSITriggerr10::itemsInfo[2] = {
	&CQIReportAperiodicr10SetupAperiodicCSITriggerr10Trigger1r10::theInfo,
	&CQIReportAperiodicr10SetupAperiodicCSITriggerr10Trigger2r10::theInfo,
};
bool CQIReportAperiodicr10SetupAperiodicCSITriggerr10::itemsPres[2] = {
	1,
	1,
};
const CQIReportAperiodicr10SetupAperiodicCSITriggerr10::Info CQIReportAperiodicr10SetupAperiodicCSITriggerr10::theInfo = {
	CQIReportAperiodicr10SetupAperiodicCSITriggerr10::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
CQIReportAperiodicr10SetupAperiodicCSITriggerr10::CQIReportAperiodicr10SetupAperiodicCSITriggerr10(const CQIReportAperiodicr10SetupAperiodicCSITriggerr10Trigger1r10& cQIReportAperiodicr10SetupAperiodicCSITriggerr10Trigger1r10, const CQIReportAperiodicr10SetupAperiodicCSITriggerr10Trigger2r10& cQIReportAperiodicr10SetupAperiodicCSITriggerr10Trigger2r10) : Sequence(&theInfo) {
	setCQIReportAperiodicr10SetupAperiodicCSITriggerr10Trigger1r10(cQIReportAperiodicr10SetupAperiodicCSITriggerr10Trigger1r10);
	setCQIReportAperiodicr10SetupAperiodicCSITriggerr10Trigger2r10(cQIReportAperiodicr10SetupAperiodicCSITriggerr10Trigger2r10);
}

const void *CQIReportAperiodicr10Setup::itemsInfo[2] = {
	&CQIReportModeAperiodic::theInfo,
	&CQIReportAperiodicr10SetupAperiodicCSITriggerr10::theInfo,
};
bool CQIReportAperiodicr10Setup::itemsPres[2] = {
	1,
	0,
};
const CQIReportAperiodicr10Setup::Info CQIReportAperiodicr10Setup::theInfo = {
	CQIReportAperiodicr10Setup::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};
CQIReportAperiodicr10Setup::CQIReportAperiodicr10Setup(const CQIReportModeAperiodic& cqiReportModeAperiodicr10) : Sequence(&theInfo) {
	setCqiReportModeAperiodicr10(cqiReportModeAperiodicr10);
}

const void *CQIReportAperiodicr10::choicesInfo[2] = {
	&CQIReportAperiodicr10Release::theInfo,
	&CQIReportAperiodicr10Setup::theInfo,
};
const CQIReportAperiodicr10::Info CQIReportAperiodicr10::theInfo = {
	CQIReportAperiodicr10::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *CQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10WidebandCQIr10::itemsInfo[1] = {
	&CQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10WidebandCQIr10csi_ReportMode_r10::theInfo,
};
bool CQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10WidebandCQIr10::itemsPres[1] = {
	0,
};
const CQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10WidebandCQIr10::Info CQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10WidebandCQIr10::theInfo = {
	CQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10WidebandCQIr10::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *CQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10SubbandCQIr10::itemsInfo[2] = {
	&CQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10SubbandCQIr10K::theInfo,
	&CQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10SubbandCQIr10periodicityFactor_r10::theInfo,
};
bool CQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10SubbandCQIr10::itemsPres[2] = {
	1,
	1,
};
const CQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10SubbandCQIr10::Info CQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10SubbandCQIr10::theInfo = {
	CQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10SubbandCQIr10::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
CQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10SubbandCQIr10::CQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10SubbandCQIr10(const CQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10SubbandCQIr10K& cQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10SubbandCQIr10K, const CQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10SubbandCQIr10periodicityFactor_r10& cQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10SubbandCQIr10periodicityFactor_r10) : Sequence(&theInfo) {
	setCQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10SubbandCQIr10K(cQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10SubbandCQIr10K);
	setCQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10SubbandCQIr10periodicityFactor_r10(cQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10SubbandCQIr10periodicityFactor_r10);
}

const void *CQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10::choicesInfo[2] = {
	&CQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10WidebandCQIr10::theInfo,
	&CQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10SubbandCQIr10::theInfo,
};
const CQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10::Info CQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10::theInfo = {
	CQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *CQIReportPeriodicr10SetupCsiConfigIndexr10Setup::itemsInfo[2] = {
	&CQIReportPeriodicr10SetupCsiConfigIndexr10SetupCqipmiConfigIndex2r10::theInfo,
	&CQIReportPeriodicr10SetupCsiConfigIndexr10SetupRiConfigIndex2r10::theInfo,
};
bool CQIReportPeriodicr10SetupCsiConfigIndexr10Setup::itemsPres[2] = {
	1,
	0,
};
const CQIReportPeriodicr10SetupCsiConfigIndexr10Setup::Info CQIReportPeriodicr10SetupCsiConfigIndexr10Setup::theInfo = {
	CQIReportPeriodicr10SetupCsiConfigIndexr10Setup::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};
CQIReportPeriodicr10SetupCsiConfigIndexr10Setup::CQIReportPeriodicr10SetupCsiConfigIndexr10Setup(const CQIReportPeriodicr10SetupCsiConfigIndexr10SetupCqipmiConfigIndex2r10& cQIReportPeriodicr10SetupCsiConfigIndexr10SetupCqipmiConfigIndex2r10) : Sequence(&theInfo) {
	setCQIReportPeriodicr10SetupCsiConfigIndexr10SetupCqipmiConfigIndex2r10(cQIReportPeriodicr10SetupCsiConfigIndexr10SetupCqipmiConfigIndex2r10);
}

const void *CQIReportPeriodicr10SetupCsiConfigIndexr10::choicesInfo[2] = {
	&CQIReportPeriodicr10SetupCsiConfigIndexr10Release::theInfo,
	&CQIReportPeriodicr10SetupCsiConfigIndexr10Setup::theInfo,
};
const CQIReportPeriodicr10SetupCsiConfigIndexr10::Info CQIReportPeriodicr10SetupCsiConfigIndexr10::theInfo = {
	CQIReportPeriodicr10SetupCsiConfigIndexr10::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *CQIReportPeriodicr10Setup::itemsInfo[8] = {
	&CQIReportPeriodicr10SetupCqiPUCCHResourceIndexr10::theInfo,
	&CQIReportPeriodicr10SetupCqiPUCCHResourceIndexP1r10::theInfo,
	&CQIReportPeriodicr10SetupCqipmiConfigIndex::theInfo,
	&CQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10::theInfo,
	&CQIReportPeriodicr10SetupRiConfigIndex::theInfo,
	&CQIReportPeriodicr10SetupSimultaneousAckNackAndCQI::theInfo,
	&CQIReportPeriodicr10Setupcqi_Mask_r9::theInfo,
	&CQIReportPeriodicr10SetupCsiConfigIndexr10::theInfo,
};
bool CQIReportPeriodicr10Setup::itemsPres[8] = {
	1,
	0,
	1,
	1,
	0,
	1,
	0,
	0,
};
const CQIReportPeriodicr10Setup::Info CQIReportPeriodicr10Setup::theInfo = {
	CQIReportPeriodicr10Setup::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	8, 4, 0
};
CQIReportPeriodicr10Setup::CQIReportPeriodicr10Setup(const CQIReportPeriodicr10SetupCqiPUCCHResourceIndexr10& cQIReportPeriodicr10SetupCqiPUCCHResourceIndexr10, const CQIReportPeriodicr10SetupCqipmiConfigIndex& cQIReportPeriodicr10SetupCqipmiConfigIndex, const CQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10& cQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10, const CQIReportPeriodicr10SetupSimultaneousAckNackAndCQI& cQIReportPeriodicr10SetupSimultaneousAckNackAndCQI) : Sequence(&theInfo) {
	setCQIReportPeriodicr10SetupCqiPUCCHResourceIndexr10(cQIReportPeriodicr10SetupCqiPUCCHResourceIndexr10);
	setCQIReportPeriodicr10SetupCqipmiConfigIndex(cQIReportPeriodicr10SetupCqipmiConfigIndex);
	setCQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10(cQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10);
	setCQIReportPeriodicr10SetupSimultaneousAckNackAndCQI(cQIReportPeriodicr10SetupSimultaneousAckNackAndCQI);
}

const void *CQIReportPeriodicr10::choicesInfo[2] = {
	&CQIReportPeriodicr10Release::theInfo,
	&CQIReportPeriodicr10Setup::theInfo,
};
const CQIReportPeriodicr10::Info CQIReportPeriodicr10::theInfo = {
	CQIReportPeriodicr10::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *MeasSubframePatternr10SubframePatternTDDr10::choicesInfo[3] = {
	&MeasSubframePatternr10SubframePatternTDDr10SubframeConfig15r10::theInfo,
	&MeasSubframePatternr10SubframePatternTDDr10SubframeConfig0r10::theInfo,
	&MeasSubframePatternr10SubframePatternTDDr10SubframeConfig6r10::theInfo,
};
const MeasSubframePatternr10SubframePatternTDDr10::Info MeasSubframePatternr10SubframePatternTDDr10::theInfo = {
	MeasSubframePatternr10SubframePatternTDDr10::create,
	CHOICE,
	0,
	true,
	choicesInfo,
	2
};

const void *MeasSubframePatternr10::choicesInfo[2] = {
	&MeasSubframePatternr10SubframePatternFDDr10::theInfo,
	&MeasSubframePatternr10SubframePatternTDDr10::theInfo,
};
const MeasSubframePatternr10::Info MeasSubframePatternr10::theInfo = {
	MeasSubframePatternr10::create,
	CHOICE,
	0,
	true,
	choicesInfo,
	1
};

const void *CQIReportConfigr10CsiSubframePatternConfigr10Setup::itemsInfo[2] = {
	&MeasSubframePatternr10::theInfo,
	&MeasSubframePatternr10::theInfo,
};
bool CQIReportConfigr10CsiSubframePatternConfigr10Setup::itemsPres[2] = {
	1,
	1,
};
const CQIReportConfigr10CsiSubframePatternConfigr10Setup::Info CQIReportConfigr10CsiSubframePatternConfigr10Setup::theInfo = {
	CQIReportConfigr10CsiSubframePatternConfigr10Setup::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
CQIReportConfigr10CsiSubframePatternConfigr10Setup::CQIReportConfigr10CsiSubframePatternConfigr10Setup(const MeasSubframePatternr10& csiMeasSubframeSet1r10, const MeasSubframePatternr10& csiMeasSubframeSet2r10) : Sequence(&theInfo) {
	setCsiMeasSubframeSet1r10(csiMeasSubframeSet1r10);
	setCsiMeasSubframeSet2r10(csiMeasSubframeSet2r10);
}

const void *CQIReportConfigr10CsiSubframePatternConfigr10::choicesInfo[2] = {
	&CQIReportConfigr10CsiSubframePatternConfigr10Release::theInfo,
	&CQIReportConfigr10CsiSubframePatternConfigr10Setup::theInfo,
};
const CQIReportConfigr10CsiSubframePatternConfigr10::Info CQIReportConfigr10CsiSubframePatternConfigr10::theInfo = {
	CQIReportConfigr10CsiSubframePatternConfigr10::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *CQIReportConfigr10::itemsInfo[5] = {
	&CQIReportAperiodicr10::theInfo,
	&CQIReportConfigr10NomPDSCHRSEPREOffset::theInfo,
	&CQIReportPeriodicr10::theInfo,
	&CQIReportConfigr10pmi_RI_Report_r9::theInfo,
	&CQIReportConfigr10CsiSubframePatternConfigr10::theInfo,
};
bool CQIReportConfigr10::itemsPres[5] = {
	0,
	1,
	0,
	0,
	0,
};
const CQIReportConfigr10::Info CQIReportConfigr10::theInfo = {
	CQIReportConfigr10::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 4, 0
};
CQIReportConfigr10::CQIReportConfigr10(const CQIReportConfigr10NomPDSCHRSEPREOffset& cQIReportConfigr10NomPDSCHRSEPREOffset) : Sequence(&theInfo) {
	setCQIReportConfigr10NomPDSCHRSEPREOffset(cQIReportConfigr10NomPDSCHRSEPREOffset);
}

const void *CSIRSConfigr10CsiRSr10Setup::itemsInfo[4] = {
	&CSIRSConfigr10CsiRSr10SetupantennaPortsCount_r10::theInfo,
	&CSIRSConfigr10CsiRSr10SetupResourceConfigr10::theInfo,
	&CSIRSConfigr10CsiRSr10SetupSubframeConfigr10::theInfo,
	&CSIRSConfigr10CsiRSr10SetupPCr10::theInfo,
};
bool CSIRSConfigr10CsiRSr10Setup::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const CSIRSConfigr10CsiRSr10Setup::Info CSIRSConfigr10CsiRSr10Setup::theInfo = {
	CSIRSConfigr10CsiRSr10Setup::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 0, 0
};
CSIRSConfigr10CsiRSr10Setup::CSIRSConfigr10CsiRSr10Setup(const CSIRSConfigr10CsiRSr10SetupantennaPortsCount_r10& cSIRSConfigr10CsiRSr10SetupantennaPortsCount_r10, const CSIRSConfigr10CsiRSr10SetupResourceConfigr10& cSIRSConfigr10CsiRSr10SetupResourceConfigr10, const CSIRSConfigr10CsiRSr10SetupSubframeConfigr10& cSIRSConfigr10CsiRSr10SetupSubframeConfigr10, const CSIRSConfigr10CsiRSr10SetupPCr10& cSIRSConfigr10CsiRSr10SetupPCr10) : Sequence(&theInfo) {
	setCSIRSConfigr10CsiRSr10SetupantennaPortsCount_r10(cSIRSConfigr10CsiRSr10SetupantennaPortsCount_r10);
	setCSIRSConfigr10CsiRSr10SetupResourceConfigr10(cSIRSConfigr10CsiRSr10SetupResourceConfigr10);
	setCSIRSConfigr10CsiRSr10SetupSubframeConfigr10(cSIRSConfigr10CsiRSr10SetupSubframeConfigr10);
	setCSIRSConfigr10CsiRSr10SetupPCr10(cSIRSConfigr10CsiRSr10SetupPCr10);
}

const void *CSIRSConfigr10CsiRSr10::choicesInfo[2] = {
	&CSIRSConfigr10CsiRSr10Release::theInfo,
	&CSIRSConfigr10CsiRSr10Setup::theInfo,
};
const CSIRSConfigr10CsiRSr10::Info CSIRSConfigr10CsiRSr10::theInfo = {
	CSIRSConfigr10CsiRSr10::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *CSIRSConfigr10ZeroTxPowerCSIRSr10Setup::itemsInfo[2] = {
	&CSIRSConfigr10ZeroTxPowerCSIRSr10SetupZeroTxPowerResourceConfigListr10::theInfo,
	&CSIRSConfigr10ZeroTxPowerCSIRSr10SetupZeroTxPowerSubframeConfigr10::theInfo,
};
bool CSIRSConfigr10ZeroTxPowerCSIRSr10Setup::itemsPres[2] = {
	1,
	1,
};
const CSIRSConfigr10ZeroTxPowerCSIRSr10Setup::Info CSIRSConfigr10ZeroTxPowerCSIRSr10Setup::theInfo = {
	CSIRSConfigr10ZeroTxPowerCSIRSr10Setup::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
CSIRSConfigr10ZeroTxPowerCSIRSr10Setup::CSIRSConfigr10ZeroTxPowerCSIRSr10Setup(const CSIRSConfigr10ZeroTxPowerCSIRSr10SetupZeroTxPowerResourceConfigListr10& cSIRSConfigr10ZeroTxPowerCSIRSr10SetupZeroTxPowerResourceConfigListr10, const CSIRSConfigr10ZeroTxPowerCSIRSr10SetupZeroTxPowerSubframeConfigr10& cSIRSConfigr10ZeroTxPowerCSIRSr10SetupZeroTxPowerSubframeConfigr10) : Sequence(&theInfo) {
	setCSIRSConfigr10ZeroTxPowerCSIRSr10SetupZeroTxPowerResourceConfigListr10(cSIRSConfigr10ZeroTxPowerCSIRSr10SetupZeroTxPowerResourceConfigListr10);
	setCSIRSConfigr10ZeroTxPowerCSIRSr10SetupZeroTxPowerSubframeConfigr10(cSIRSConfigr10ZeroTxPowerCSIRSr10SetupZeroTxPowerSubframeConfigr10);
}

const void *CSIRSConfigr10ZeroTxPowerCSIRSr10::choicesInfo[2] = {
	&CSIRSConfigr10ZeroTxPowerCSIRSr10Release::theInfo,
	&CSIRSConfigr10ZeroTxPowerCSIRSr10Setup::theInfo,
};
const CSIRSConfigr10ZeroTxPowerCSIRSr10::Info CSIRSConfigr10ZeroTxPowerCSIRSr10::theInfo = {
	CSIRSConfigr10ZeroTxPowerCSIRSr10::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *CSIRSConfigr10::itemsInfo[2] = {
	&CSIRSConfigr10CsiRSr10::theInfo,
	&CSIRSConfigr10ZeroTxPowerCSIRSr10::theInfo,
};
bool CSIRSConfigr10::itemsPres[2] = {
	0,
	0,
};
const CSIRSConfigr10::Info CSIRSConfigr10::theInfo = {
	CSIRSConfigr10::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *PUCCHConfigDedicatedv1020PucchFormatr10Format3r10TwoAntennaPortActivatedPUCCHFormat3r10Setup::itemsInfo[1] = {
	&PUCCHConfigDedicatedv1020PucchFormatr10Format3r10TwoAntennaPortActivatedPUCCHFormat3r10SetupN3PUCCHANListP1r10::theInfo,
};
bool PUCCHConfigDedicatedv1020PucchFormatr10Format3r10TwoAntennaPortActivatedPUCCHFormat3r10Setup::itemsPres[1] = {
	1,
};
const PUCCHConfigDedicatedv1020PucchFormatr10Format3r10TwoAntennaPortActivatedPUCCHFormat3r10Setup::Info PUCCHConfigDedicatedv1020PucchFormatr10Format3r10TwoAntennaPortActivatedPUCCHFormat3r10Setup::theInfo = {
	PUCCHConfigDedicatedv1020PucchFormatr10Format3r10TwoAntennaPortActivatedPUCCHFormat3r10Setup::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
PUCCHConfigDedicatedv1020PucchFormatr10Format3r10TwoAntennaPortActivatedPUCCHFormat3r10Setup::PUCCHConfigDedicatedv1020PucchFormatr10Format3r10TwoAntennaPortActivatedPUCCHFormat3r10Setup(const PUCCHConfigDedicatedv1020PucchFormatr10Format3r10TwoAntennaPortActivatedPUCCHFormat3r10SetupN3PUCCHANListP1r10& pUCCHConfigDedicatedv1020PucchFormatr10Format3r10TwoAntennaPortActivatedPUCCHFormat3r10SetupN3PUCCHANListP1r10) : Sequence(&theInfo) {
	setPUCCHConfigDedicatedv1020PucchFormatr10Format3r10TwoAntennaPortActivatedPUCCHFormat3r10SetupN3PUCCHANListP1r10(pUCCHConfigDedicatedv1020PucchFormatr10Format3r10TwoAntennaPortActivatedPUCCHFormat3r10SetupN3PUCCHANListP1r10);
}

const void *PUCCHConfigDedicatedv1020PucchFormatr10Format3r10TwoAntennaPortActivatedPUCCHFormat3r10::choicesInfo[2] = {
	&PUCCHConfigDedicatedv1020PucchFormatr10Format3r10TwoAntennaPortActivatedPUCCHFormat3r10Release::theInfo,
	&PUCCHConfigDedicatedv1020PucchFormatr10Format3r10TwoAntennaPortActivatedPUCCHFormat3r10Setup::theInfo,
};
const PUCCHConfigDedicatedv1020PucchFormatr10Format3r10TwoAntennaPortActivatedPUCCHFormat3r10::Info PUCCHConfigDedicatedv1020PucchFormatr10Format3r10TwoAntennaPortActivatedPUCCHFormat3r10::theInfo = {
	PUCCHConfigDedicatedv1020PucchFormatr10Format3r10TwoAntennaPortActivatedPUCCHFormat3r10::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *PUCCHConfigDedicatedv1020PucchFormatr10Format3r10::itemsInfo[2] = {
	&PUCCHConfigDedicatedv1020PucchFormatr10Format3r10N3PUCCHANListr10::theInfo,
	&PUCCHConfigDedicatedv1020PucchFormatr10Format3r10TwoAntennaPortActivatedPUCCHFormat3r10::theInfo,
};
bool PUCCHConfigDedicatedv1020PucchFormatr10Format3r10::itemsPres[2] = {
	0,
	0,
};
const PUCCHConfigDedicatedv1020PucchFormatr10Format3r10::Info PUCCHConfigDedicatedv1020PucchFormatr10Format3r10::theInfo = {
	PUCCHConfigDedicatedv1020PucchFormatr10Format3r10::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *PUCCHConfigDedicatedv1020PucchFormatr10ChannelSelectionr10N1PUCCHANCSr10Setup::itemsInfo[1] = {
	&PUCCHConfigDedicatedv1020PucchFormatr10ChannelSelectionr10N1PUCCHANCSr10SetupN1PUCCHANCSListr10::theInfo,
};
bool PUCCHConfigDedicatedv1020PucchFormatr10ChannelSelectionr10N1PUCCHANCSr10Setup::itemsPres[1] = {
	1,
};
const PUCCHConfigDedicatedv1020PucchFormatr10ChannelSelectionr10N1PUCCHANCSr10Setup::Info PUCCHConfigDedicatedv1020PucchFormatr10ChannelSelectionr10N1PUCCHANCSr10Setup::theInfo = {
	PUCCHConfigDedicatedv1020PucchFormatr10ChannelSelectionr10N1PUCCHANCSr10Setup::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
PUCCHConfigDedicatedv1020PucchFormatr10ChannelSelectionr10N1PUCCHANCSr10Setup::PUCCHConfigDedicatedv1020PucchFormatr10ChannelSelectionr10N1PUCCHANCSr10Setup(const PUCCHConfigDedicatedv1020PucchFormatr10ChannelSelectionr10N1PUCCHANCSr10SetupN1PUCCHANCSListr10& pUCCHConfigDedicatedv1020PucchFormatr10ChannelSelectionr10N1PUCCHANCSr10SetupN1PUCCHANCSListr10) : Sequence(&theInfo) {
	setPUCCHConfigDedicatedv1020PucchFormatr10ChannelSelectionr10N1PUCCHANCSr10SetupN1PUCCHANCSListr10(pUCCHConfigDedicatedv1020PucchFormatr10ChannelSelectionr10N1PUCCHANCSr10SetupN1PUCCHANCSListr10);
}

const void *PUCCHConfigDedicatedv1020PucchFormatr10ChannelSelectionr10N1PUCCHANCSr10::choicesInfo[2] = {
	&PUCCHConfigDedicatedv1020PucchFormatr10ChannelSelectionr10N1PUCCHANCSr10Release::theInfo,
	&PUCCHConfigDedicatedv1020PucchFormatr10ChannelSelectionr10N1PUCCHANCSr10Setup::theInfo,
};
const PUCCHConfigDedicatedv1020PucchFormatr10ChannelSelectionr10N1PUCCHANCSr10::Info PUCCHConfigDedicatedv1020PucchFormatr10ChannelSelectionr10N1PUCCHANCSr10::theInfo = {
	PUCCHConfigDedicatedv1020PucchFormatr10ChannelSelectionr10N1PUCCHANCSr10::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *PUCCHConfigDedicatedv1020PucchFormatr10ChannelSelectionr10::itemsInfo[1] = {
	&PUCCHConfigDedicatedv1020PucchFormatr10ChannelSelectionr10N1PUCCHANCSr10::theInfo,
};
bool PUCCHConfigDedicatedv1020PucchFormatr10ChannelSelectionr10::itemsPres[1] = {
	0,
};
const PUCCHConfigDedicatedv1020PucchFormatr10ChannelSelectionr10::Info PUCCHConfigDedicatedv1020PucchFormatr10ChannelSelectionr10::theInfo = {
	PUCCHConfigDedicatedv1020PucchFormatr10ChannelSelectionr10::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *PUCCHConfigDedicatedv1020PucchFormatr10::choicesInfo[2] = {
	&PUCCHConfigDedicatedv1020PucchFormatr10Format3r10::theInfo,
	&PUCCHConfigDedicatedv1020PucchFormatr10ChannelSelectionr10::theInfo,
};
const PUCCHConfigDedicatedv1020PucchFormatr10::Info PUCCHConfigDedicatedv1020PucchFormatr10::theInfo = {
	PUCCHConfigDedicatedv1020PucchFormatr10::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *PUCCHConfigDedicatedv1020::itemsInfo[4] = {
	&PUCCHConfigDedicatedv1020PucchFormatr10::theInfo,
	&PUCCHConfigDedicatedv1020twoAntennaPortActivatedPUCCH_Format1a1b_r10::theInfo,
	&PUCCHConfigDedicatedv1020simultaneousPUCCH_PUSCH_r10::theInfo,
	&PUCCHConfigDedicatedv1020N1PUCCHANRepP1r10::theInfo,
};
bool PUCCHConfigDedicatedv1020::itemsPres[4] = {
	0,
	0,
	0,
	0,
};
const PUCCHConfigDedicatedv1020::Info PUCCHConfigDedicatedv1020::theInfo = {
	PUCCHConfigDedicatedv1020::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 4, 0
};

const void *PUSCHConfigDedicatedv1020BetaOffsetMCr10::itemsInfo[3] = {
	&PUSCHConfigDedicatedv1020BetaOffsetMCr10BetaOffsetACKIndexMCr10::theInfo,
	&PUSCHConfigDedicatedv1020BetaOffsetMCr10BetaOffsetRIIndexMCr10::theInfo,
	&PUSCHConfigDedicatedv1020BetaOffsetMCr10BetaOffsetCQIIndexMCr10::theInfo,
};
bool PUSCHConfigDedicatedv1020BetaOffsetMCr10::itemsPres[3] = {
	1,
	1,
	1,
};
const PUSCHConfigDedicatedv1020BetaOffsetMCr10::Info PUSCHConfigDedicatedv1020BetaOffsetMCr10::theInfo = {
	PUSCHConfigDedicatedv1020BetaOffsetMCr10::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};
PUSCHConfigDedicatedv1020BetaOffsetMCr10::PUSCHConfigDedicatedv1020BetaOffsetMCr10(const PUSCHConfigDedicatedv1020BetaOffsetMCr10BetaOffsetACKIndexMCr10& pUSCHConfigDedicatedv1020BetaOffsetMCr10BetaOffsetACKIndexMCr10, const PUSCHConfigDedicatedv1020BetaOffsetMCr10BetaOffsetRIIndexMCr10& pUSCHConfigDedicatedv1020BetaOffsetMCr10BetaOffsetRIIndexMCr10, const PUSCHConfigDedicatedv1020BetaOffsetMCr10BetaOffsetCQIIndexMCr10& pUSCHConfigDedicatedv1020BetaOffsetMCr10BetaOffsetCQIIndexMCr10) : Sequence(&theInfo) {
	setPUSCHConfigDedicatedv1020BetaOffsetMCr10BetaOffsetACKIndexMCr10(pUSCHConfigDedicatedv1020BetaOffsetMCr10BetaOffsetACKIndexMCr10);
	setPUSCHConfigDedicatedv1020BetaOffsetMCr10BetaOffsetRIIndexMCr10(pUSCHConfigDedicatedv1020BetaOffsetMCr10BetaOffsetRIIndexMCr10);
	setPUSCHConfigDedicatedv1020BetaOffsetMCr10BetaOffsetCQIIndexMCr10(pUSCHConfigDedicatedv1020BetaOffsetMCr10BetaOffsetCQIIndexMCr10);
}

const void *PUSCHConfigDedicatedv1020::itemsInfo[3] = {
	&PUSCHConfigDedicatedv1020BetaOffsetMCr10::theInfo,
	&PUSCHConfigDedicatedv1020groupHoppingDisabled_r10::theInfo,
	&PUSCHConfigDedicatedv1020dmrs_WithOCC_Activated_r10::theInfo,
};
bool PUSCHConfigDedicatedv1020::itemsPres[3] = {
	0,
	0,
	0,
};
const PUSCHConfigDedicatedv1020::Info PUSCHConfigDedicatedv1020::theInfo = {
	PUSCHConfigDedicatedv1020::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *SchedulingRequestConfigv1020::itemsInfo[1] = {
	&SchedulingRequestConfigv1020SrPUCCHResourceIndexP1r10::theInfo,
};
bool SchedulingRequestConfigv1020::itemsPres[1] = {
	0,
};
const SchedulingRequestConfigv1020::Info SchedulingRequestConfigv1020::theInfo = {
	SchedulingRequestConfigv1020::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SoundingRSULConfigDedicatedv1020::itemsInfo[1] = {
	&SRSAntennaPort::theInfo,
};
bool SoundingRSULConfigDedicatedv1020::itemsPres[1] = {
	1,
};
const SoundingRSULConfigDedicatedv1020::Info SoundingRSULConfigDedicatedv1020::theInfo = {
	SoundingRSULConfigDedicatedv1020::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
SoundingRSULConfigDedicatedv1020::SoundingRSULConfigDedicatedv1020(const SRSAntennaPort& srsAntennaPortr10) : Sequence(&theInfo) {
	setSrsAntennaPortr10(srsAntennaPortr10);
}

const void *SRSConfigApr10::itemsInfo[5] = {
	&SRSAntennaPort::theInfo,
	&SRSConfigApr10srs_BandwidthAp_r10::theInfo,
	&SRSConfigApr10FreqDomainPositionApr10::theInfo,
	&SRSConfigApr10TransmissionCombApr10::theInfo,
	&SRSConfigApr10cyclicShiftAp_r10::theInfo,
};
bool SRSConfigApr10::itemsPres[5] = {
	1,
	1,
	1,
	1,
	1,
};
const SRSConfigApr10::Info SRSConfigApr10::theInfo = {
	SRSConfigApr10::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 0, 0
};
SRSConfigApr10::SRSConfigApr10(const SRSAntennaPort& srsAntennaPortApr10, const SRSConfigApr10srs_BandwidthAp_r10& sRSConfigApr10srs_BandwidthAp_r10, const SRSConfigApr10FreqDomainPositionApr10& sRSConfigApr10FreqDomainPositionApr10, const SRSConfigApr10TransmissionCombApr10& sRSConfigApr10TransmissionCombApr10, const SRSConfigApr10cyclicShiftAp_r10& sRSConfigApr10cyclicShiftAp_r10) : Sequence(&theInfo) {
	setSrsAntennaPortApr10(srsAntennaPortApr10);
	setSRSConfigApr10srs_BandwidthAp_r10(sRSConfigApr10srs_BandwidthAp_r10);
	setSRSConfigApr10FreqDomainPositionApr10(sRSConfigApr10FreqDomainPositionApr10);
	setSRSConfigApr10TransmissionCombApr10(sRSConfigApr10TransmissionCombApr10);
	setSRSConfigApr10cyclicShiftAp_r10(sRSConfigApr10cyclicShiftAp_r10);
}

const void *SoundingRSULConfigDedicatedAperiodicr10SetupSrsActivateApr10Setup::itemsInfo[2] = {
	&SRSConfigApr10::theInfo,
	&SRSConfigApr10::theInfo,
};
bool SoundingRSULConfigDedicatedAperiodicr10SetupSrsActivateApr10Setup::itemsPres[2] = {
	1,
	1,
};
const SoundingRSULConfigDedicatedAperiodicr10SetupSrsActivateApr10Setup::Info SoundingRSULConfigDedicatedAperiodicr10SetupSrsActivateApr10Setup::theInfo = {
	SoundingRSULConfigDedicatedAperiodicr10SetupSrsActivateApr10Setup::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
SoundingRSULConfigDedicatedAperiodicr10SetupSrsActivateApr10Setup::SoundingRSULConfigDedicatedAperiodicr10SetupSrsActivateApr10Setup(const SRSConfigApr10& srsConfigApDCIFormat0r10, const SRSConfigApr10& srsConfigApDCIFormat1a2b2cr10) : Sequence(&theInfo) {
	setSrsConfigApDCIFormat0r10(srsConfigApDCIFormat0r10);
	setSrsConfigApDCIFormat1a2b2cr10(srsConfigApDCIFormat1a2b2cr10);
}

const void *SoundingRSULConfigDedicatedAperiodicr10SetupSrsActivateApr10::choicesInfo[2] = {
	&SoundingRSULConfigDedicatedAperiodicr10SetupSrsActivateApr10Release::theInfo,
	&SoundingRSULConfigDedicatedAperiodicr10SetupSrsActivateApr10Setup::theInfo,
};
const SoundingRSULConfigDedicatedAperiodicr10SetupSrsActivateApr10::Info SoundingRSULConfigDedicatedAperiodicr10SetupSrsActivateApr10::theInfo = {
	SoundingRSULConfigDedicatedAperiodicr10SetupSrsActivateApr10::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *SoundingRSULConfigDedicatedAperiodicr10Setup::itemsInfo[3] = {
	&SoundingRSULConfigDedicatedAperiodicr10SetupSrsConfigIndexApr10::theInfo,
	&SoundingRSULConfigDedicatedAperiodicr10SetupSrsConfigApDCIFormat4r10::theInfo,
	&SoundingRSULConfigDedicatedAperiodicr10SetupSrsActivateApr10::theInfo,
};
bool SoundingRSULConfigDedicatedAperiodicr10Setup::itemsPres[3] = {
	1,
	0,
	0,
};
const SoundingRSULConfigDedicatedAperiodicr10Setup::Info SoundingRSULConfigDedicatedAperiodicr10Setup::theInfo = {
	SoundingRSULConfigDedicatedAperiodicr10Setup::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};
SoundingRSULConfigDedicatedAperiodicr10Setup::SoundingRSULConfigDedicatedAperiodicr10Setup(const SoundingRSULConfigDedicatedAperiodicr10SetupSrsConfigIndexApr10& soundingRSULConfigDedicatedAperiodicr10SetupSrsConfigIndexApr10) : Sequence(&theInfo) {
	setSoundingRSULConfigDedicatedAperiodicr10SetupSrsConfigIndexApr10(soundingRSULConfigDedicatedAperiodicr10SetupSrsConfigIndexApr10);
}

const void *SoundingRSULConfigDedicatedAperiodicr10::choicesInfo[2] = {
	&SoundingRSULConfigDedicatedAperiodicr10Release::theInfo,
	&SoundingRSULConfigDedicatedAperiodicr10Setup::theInfo,
};
const SoundingRSULConfigDedicatedAperiodicr10::Info SoundingRSULConfigDedicatedAperiodicr10::theInfo = {
	SoundingRSULConfigDedicatedAperiodicr10::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DeltaTxDOffsetListPUCCHr10::itemsInfo[4] = {
	&DeltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format1_r10::theInfo,
	&DeltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format1a1b_r10::theInfo,
	&DeltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format22a2b_r10::theInfo,
	&DeltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format3_r10::theInfo,
};
bool DeltaTxDOffsetListPUCCHr10::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const DeltaTxDOffsetListPUCCHr10::Info DeltaTxDOffsetListPUCCHr10::theInfo = {
	DeltaTxDOffsetListPUCCHr10::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	4, 0, 0
};
DeltaTxDOffsetListPUCCHr10::DeltaTxDOffsetListPUCCHr10(const DeltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format1_r10& deltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format1_r10, const DeltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format1a1b_r10& deltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format1a1b_r10, const DeltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format22a2b_r10& deltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format22a2b_r10, const DeltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format3_r10& deltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format3_r10) : Sequence(&theInfo) {
	setDeltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format1_r10(deltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format1_r10);
	setDeltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format1a1b_r10(deltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format1a1b_r10);
	setDeltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format22a2b_r10(deltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format22a2b_r10);
	setDeltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format3_r10(deltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format3_r10);
}

const void *UplinkPowerControlDedicatedv1020::itemsInfo[2] = {
	&DeltaTxDOffsetListPUCCHr10::theInfo,
	&UplinkPowerControlDedicatedv1020PSRSOffsetApr10::theInfo,
};
bool UplinkPowerControlDedicatedv1020::itemsPres[2] = {
	0,
	0,
};
const UplinkPowerControlDedicatedv1020::Info UplinkPowerControlDedicatedv1020::theInfo = {
	UplinkPowerControlDedicatedv1020::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *PhysicalConfigDedicatedAdditionalSpectrumEmissionCAr10Setup::itemsInfo[1] = {
	&AdditionalSpectrumEmission::theInfo,
};
bool PhysicalConfigDedicatedAdditionalSpectrumEmissionCAr10Setup::itemsPres[1] = {
	1,
};
const PhysicalConfigDedicatedAdditionalSpectrumEmissionCAr10Setup::Info PhysicalConfigDedicatedAdditionalSpectrumEmissionCAr10Setup::theInfo = {
	PhysicalConfigDedicatedAdditionalSpectrumEmissionCAr10Setup::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
PhysicalConfigDedicatedAdditionalSpectrumEmissionCAr10Setup::PhysicalConfigDedicatedAdditionalSpectrumEmissionCAr10Setup(const AdditionalSpectrumEmission& additionalSpectrumEmissionPCellr10) : Sequence(&theInfo) {
	setAdditionalSpectrumEmissionPCellr10(additionalSpectrumEmissionPCellr10);
}

const void *PhysicalConfigDedicatedAdditionalSpectrumEmissionCAr10::choicesInfo[2] = {
	&PhysicalConfigDedicatedAdditionalSpectrumEmissionCAr10Release::theInfo,
	&PhysicalConfigDedicatedAdditionalSpectrumEmissionCAr10Setup::theInfo,
};
const PhysicalConfigDedicatedAdditionalSpectrumEmissionCAr10::Info PhysicalConfigDedicatedAdditionalSpectrumEmissionCAr10::theInfo = {
	PhysicalConfigDedicatedAdditionalSpectrumEmissionCAr10::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *PhysicalConfigDedicated::itemsInfo[24] = {
	&PDSCHConfigDedicated::theInfo,
	&PUCCHConfigDedicated::theInfo,
	&PUSCHConfigDedicated::theInfo,
	&UplinkPowerControlDedicated::theInfo,
	&TPCPDCCHConfig::theInfo,
	&TPCPDCCHConfig::theInfo,
	&CQIReportConfig::theInfo,
	&SoundingRSULConfigDedicated::theInfo,
	&PhysicalConfigDedicatedAntennaInfo::theInfo,
	&SchedulingRequestConfig::theInfo,
	&CQIReportConfigv920::theInfo,
	&AntennaInfoDedicatedv920::theInfo,
	&PhysicalConfigDedicatedAntennaInfor10::theInfo,
	&AntennaInfoULr10::theInfo,
	&PhysicalConfigDedicatedCifPresencer10::theInfo,
	&CQIReportConfigr10::theInfo,
	&CSIRSConfigr10::theInfo,
	&PUCCHConfigDedicatedv1020::theInfo,
	&PUSCHConfigDedicatedv1020::theInfo,
	&SchedulingRequestConfigv1020::theInfo,
	&SoundingRSULConfigDedicatedv1020::theInfo,
	&SoundingRSULConfigDedicatedAperiodicr10::theInfo,
	&UplinkPowerControlDedicatedv1020::theInfo,
	&PhysicalConfigDedicatedAdditionalSpectrumEmissionCAr10::theInfo,
};
bool PhysicalConfigDedicated::itemsPres[24] = {
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
const PhysicalConfigDedicated::Info PhysicalConfigDedicated::theInfo = {
	PhysicalConfigDedicated::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	10, 10, 14
};

const void *RLFTimersAndConstantsr9Setup::itemsInfo[5] = {
	&RLFTimersAndConstantsr9Setupt301_r9::theInfo,
	&RLFTimersAndConstantsr9Setupt310_r9::theInfo,
	&RLFTimersAndConstantsr9Setupn310_r9::theInfo,
	&RLFTimersAndConstantsr9Setupt311_r9::theInfo,
	&RLFTimersAndConstantsr9Setupn311_r9::theInfo,
};
bool RLFTimersAndConstantsr9Setup::itemsPres[5] = {
	1,
	1,
	1,
	1,
	1,
};
const RLFTimersAndConstantsr9Setup::Info RLFTimersAndConstantsr9Setup::theInfo = {
	RLFTimersAndConstantsr9Setup::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	5, 0, 0
};
RLFTimersAndConstantsr9Setup::RLFTimersAndConstantsr9Setup(const RLFTimersAndConstantsr9Setupt301_r9& rLFTimersAndConstantsr9Setupt301_r9, const RLFTimersAndConstantsr9Setupt310_r9& rLFTimersAndConstantsr9Setupt310_r9, const RLFTimersAndConstantsr9Setupn310_r9& rLFTimersAndConstantsr9Setupn310_r9, const RLFTimersAndConstantsr9Setupt311_r9& rLFTimersAndConstantsr9Setupt311_r9, const RLFTimersAndConstantsr9Setupn311_r9& rLFTimersAndConstantsr9Setupn311_r9) : Sequence(&theInfo) {
	setRLFTimersAndConstantsr9Setupt301_r9(rLFTimersAndConstantsr9Setupt301_r9);
	setRLFTimersAndConstantsr9Setupt310_r9(rLFTimersAndConstantsr9Setupt310_r9);
	setRLFTimersAndConstantsr9Setupn310_r9(rLFTimersAndConstantsr9Setupn310_r9);
	setRLFTimersAndConstantsr9Setupt311_r9(rLFTimersAndConstantsr9Setupt311_r9);
	setRLFTimersAndConstantsr9Setupn311_r9(rLFTimersAndConstantsr9Setupn311_r9);
}

const void *RLFTimersAndConstantsr9::choicesInfo[2] = {
	&RLFTimersAndConstantsr9Release::theInfo,
	&RLFTimersAndConstantsr9Setup::theInfo,
};
const RLFTimersAndConstantsr9::Info RLFTimersAndConstantsr9::theInfo = {
	RLFTimersAndConstantsr9::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *MeasSubframePatternPCellr10::choicesInfo[2] = {
	&MeasSubframePatternPCellr10Release::theInfo,
	&MeasSubframePatternr10::theInfo,
};
const MeasSubframePatternPCellr10::Info MeasSubframePatternPCellr10::theInfo = {
	MeasSubframePatternPCellr10::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *RadioResourceConfigDedicated::itemsInfo[8] = {
	&SRBToAddModList::theInfo,
	&DRBToAddModList::theInfo,
	&DRBToReleaseList::theInfo,
	&RadioResourceConfigDedicatedMacMainConfig::theInfo,
	&SPSConfig::theInfo,
	&PhysicalConfigDedicated::theInfo,
	&RLFTimersAndConstantsr9::theInfo,
	&MeasSubframePatternPCellr10::theInfo,
};
bool RadioResourceConfigDedicated::itemsPres[8] = {
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
const RadioResourceConfigDedicated::Info RadioResourceConfigDedicated::theInfo = {
	RadioResourceConfigDedicated::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	6, 6, 2
};

const void *RRCConnectionReestablishmentv8a0IEsNonCriticalExtension::itemsInfo[0] = {
};
bool RRCConnectionReestablishmentv8a0IEsNonCriticalExtension::itemsPres[0] = {
};
const RRCConnectionReestablishmentv8a0IEsNonCriticalExtension::Info RRCConnectionReestablishmentv8a0IEsNonCriticalExtension::theInfo = {
	RRCConnectionReestablishmentv8a0IEsNonCriticalExtension::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *RRCConnectionReestablishmentv8a0IEs::itemsInfo[2] = {
	&RRCConnectionReestablishmentv8a0IEsLateNonCriticalExtension::theInfo,
	&RRCConnectionReestablishmentv8a0IEsNonCriticalExtension::theInfo,
};
bool RRCConnectionReestablishmentv8a0IEs::itemsPres[2] = {
	0,
	0,
};
const RRCConnectionReestablishmentv8a0IEs::Info RRCConnectionReestablishmentv8a0IEs::theInfo = {
	RRCConnectionReestablishmentv8a0IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *RRCConnectionReestablishmentr8IEs::itemsInfo[3] = {
	&RadioResourceConfigDedicated::theInfo,
	&NextHopChainingCount::theInfo,
	&RRCConnectionReestablishmentv8a0IEs::theInfo,
};
bool RRCConnectionReestablishmentr8IEs::itemsPres[3] = {
	1,
	1,
	0,
};
const RRCConnectionReestablishmentr8IEs::Info RRCConnectionReestablishmentr8IEs::theInfo = {
	RRCConnectionReestablishmentr8IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};
RRCConnectionReestablishmentr8IEs::RRCConnectionReestablishmentr8IEs(const RadioResourceConfigDedicated& radioResourceConfigDedicated, const NextHopChainingCount& nextHopChainingCount) : Sequence(&theInfo) {
	setRadioResourceConfigDedicated(radioResourceConfigDedicated);
	setNextHopChainingCount(nextHopChainingCount);
}

const void *RRCConnectionReestablishmentCriticalExtensionsC1::choicesInfo[8] = {
	&RRCConnectionReestablishmentr8IEs::theInfo,
	&RRCConnectionReestablishmentCriticalExtensionsC1Spare7::theInfo,
	&RRCConnectionReestablishmentCriticalExtensionsC1Spare6::theInfo,
	&RRCConnectionReestablishmentCriticalExtensionsC1Spare5::theInfo,
	&RRCConnectionReestablishmentCriticalExtensionsC1Spare4::theInfo,
	&RRCConnectionReestablishmentCriticalExtensionsC1Spare3::theInfo,
	&RRCConnectionReestablishmentCriticalExtensionsC1Spare2::theInfo,
	&RRCConnectionReestablishmentCriticalExtensionsC1Spare1::theInfo,
};
const RRCConnectionReestablishmentCriticalExtensionsC1::Info RRCConnectionReestablishmentCriticalExtensionsC1::theInfo = {
	RRCConnectionReestablishmentCriticalExtensionsC1::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	7
};

const void *RRCConnectionReestablishmentCriticalExtensionsCriticalExtensionsFuture::itemsInfo[0] = {
};
bool RRCConnectionReestablishmentCriticalExtensionsCriticalExtensionsFuture::itemsPres[0] = {
};
const RRCConnectionReestablishmentCriticalExtensionsCriticalExtensionsFuture::Info RRCConnectionReestablishmentCriticalExtensionsCriticalExtensionsFuture::theInfo = {
	RRCConnectionReestablishmentCriticalExtensionsCriticalExtensionsFuture::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *RRCConnectionReestablishmentCriticalExtensions::choicesInfo[2] = {
	&RRCConnectionReestablishmentCriticalExtensionsC1::theInfo,
	&RRCConnectionReestablishmentCriticalExtensionsCriticalExtensionsFuture::theInfo,
};
const RRCConnectionReestablishmentCriticalExtensions::Info RRCConnectionReestablishmentCriticalExtensions::theInfo = {
	RRCConnectionReestablishmentCriticalExtensions::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *RRCConnectionReestablishment::itemsInfo[2] = {
	&RRCTransactionIdentifier::theInfo,
	&RRCConnectionReestablishmentCriticalExtensions::theInfo,
};
bool RRCConnectionReestablishment::itemsPres[2] = {
	1,
	1,
};
const RRCConnectionReestablishment::Info RRCConnectionReestablishment::theInfo = {
	RRCConnectionReestablishment::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
RRCConnectionReestablishment::RRCConnectionReestablishment(const RRCTransactionIdentifier& rrcTransactionIdentifier, const RRCConnectionReestablishmentCriticalExtensions& rRCConnectionReestablishmentCriticalExtensions) : Sequence(&theInfo) {
	setRrcTransactionIdentifier(rrcTransactionIdentifier);
	setRRCConnectionReestablishmentCriticalExtensions(rRCConnectionReestablishmentCriticalExtensions);
}

const void *RRCConnectionReestablishmentRejectv8a0IEsNonCriticalExtension::itemsInfo[0] = {
};
bool RRCConnectionReestablishmentRejectv8a0IEsNonCriticalExtension::itemsPres[0] = {
};
const RRCConnectionReestablishmentRejectv8a0IEsNonCriticalExtension::Info RRCConnectionReestablishmentRejectv8a0IEsNonCriticalExtension::theInfo = {
	RRCConnectionReestablishmentRejectv8a0IEsNonCriticalExtension::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *RRCConnectionReestablishmentRejectv8a0IEs::itemsInfo[2] = {
	&RRCConnectionReestablishmentRejectv8a0IEsLateNonCriticalExtension::theInfo,
	&RRCConnectionReestablishmentRejectv8a0IEsNonCriticalExtension::theInfo,
};
bool RRCConnectionReestablishmentRejectv8a0IEs::itemsPres[2] = {
	0,
	0,
};
const RRCConnectionReestablishmentRejectv8a0IEs::Info RRCConnectionReestablishmentRejectv8a0IEs::theInfo = {
	RRCConnectionReestablishmentRejectv8a0IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *RRCConnectionReestablishmentRejectr8IEs::itemsInfo[1] = {
	&RRCConnectionReestablishmentRejectv8a0IEs::theInfo,
};
bool RRCConnectionReestablishmentRejectr8IEs::itemsPres[1] = {
	0,
};
const RRCConnectionReestablishmentRejectr8IEs::Info RRCConnectionReestablishmentRejectr8IEs::theInfo = {
	RRCConnectionReestablishmentRejectr8IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *RRCConnectionReestablishmentRejectCriticalExtensionsCriticalExtensionsFuture::itemsInfo[0] = {
};
bool RRCConnectionReestablishmentRejectCriticalExtensionsCriticalExtensionsFuture::itemsPres[0] = {
};
const RRCConnectionReestablishmentRejectCriticalExtensionsCriticalExtensionsFuture::Info RRCConnectionReestablishmentRejectCriticalExtensionsCriticalExtensionsFuture::theInfo = {
	RRCConnectionReestablishmentRejectCriticalExtensionsCriticalExtensionsFuture::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *RRCConnectionReestablishmentRejectCriticalExtensions::choicesInfo[2] = {
	&RRCConnectionReestablishmentRejectr8IEs::theInfo,
	&RRCConnectionReestablishmentRejectCriticalExtensionsCriticalExtensionsFuture::theInfo,
};
const RRCConnectionReestablishmentRejectCriticalExtensions::Info RRCConnectionReestablishmentRejectCriticalExtensions::theInfo = {
	RRCConnectionReestablishmentRejectCriticalExtensions::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *RRCConnectionReestablishmentReject::itemsInfo[1] = {
	&RRCConnectionReestablishmentRejectCriticalExtensions::theInfo,
};
bool RRCConnectionReestablishmentReject::itemsPres[1] = {
	1,
};
const RRCConnectionReestablishmentReject::Info RRCConnectionReestablishmentReject::theInfo = {
	RRCConnectionReestablishmentReject::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
RRCConnectionReestablishmentReject::RRCConnectionReestablishmentReject(const RRCConnectionReestablishmentRejectCriticalExtensions& rRCConnectionReestablishmentRejectCriticalExtensions) : Sequence(&theInfo) {
	setRRCConnectionReestablishmentRejectCriticalExtensions(rRCConnectionReestablishmentRejectCriticalExtensions);
}

const void *RRCConnectionRejectv1020IEsNonCriticalExtension::itemsInfo[0] = {
};
bool RRCConnectionRejectv1020IEsNonCriticalExtension::itemsPres[0] = {
};
const RRCConnectionRejectv1020IEsNonCriticalExtension::Info RRCConnectionRejectv1020IEsNonCriticalExtension::theInfo = {
	RRCConnectionRejectv1020IEsNonCriticalExtension::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *RRCConnectionRejectv1020IEs::itemsInfo[2] = {
	&RRCConnectionRejectv1020IEsExtendedWaitTimer10::theInfo,
	&RRCConnectionRejectv1020IEsNonCriticalExtension::theInfo,
};
bool RRCConnectionRejectv1020IEs::itemsPres[2] = {
	0,
	0,
};
const RRCConnectionRejectv1020IEs::Info RRCConnectionRejectv1020IEs::theInfo = {
	RRCConnectionRejectv1020IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *RRCConnectionRejectv8a0IEs::itemsInfo[2] = {
	&RRCConnectionRejectv8a0IEsLateNonCriticalExtension::theInfo,
	&RRCConnectionRejectv1020IEs::theInfo,
};
bool RRCConnectionRejectv8a0IEs::itemsPres[2] = {
	0,
	0,
};
const RRCConnectionRejectv8a0IEs::Info RRCConnectionRejectv8a0IEs::theInfo = {
	RRCConnectionRejectv8a0IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *RRCConnectionRejectr8IEs::itemsInfo[2] = {
	&RRCConnectionRejectr8IEsWaitTime::theInfo,
	&RRCConnectionRejectv8a0IEs::theInfo,
};
bool RRCConnectionRejectr8IEs::itemsPres[2] = {
	1,
	0,
};
const RRCConnectionRejectr8IEs::Info RRCConnectionRejectr8IEs::theInfo = {
	RRCConnectionRejectr8IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};
RRCConnectionRejectr8IEs::RRCConnectionRejectr8IEs(const RRCConnectionRejectr8IEsWaitTime& rRCConnectionRejectr8IEsWaitTime) : Sequence(&theInfo) {
	setRRCConnectionRejectr8IEsWaitTime(rRCConnectionRejectr8IEsWaitTime);
}

const void *RRCConnectionRejectCriticalExtensionsC1::choicesInfo[4] = {
	&RRCConnectionRejectr8IEs::theInfo,
	&RRCConnectionRejectCriticalExtensionsC1Spare3::theInfo,
	&RRCConnectionRejectCriticalExtensionsC1Spare2::theInfo,
	&RRCConnectionRejectCriticalExtensionsC1Spare1::theInfo,
};
const RRCConnectionRejectCriticalExtensionsC1::Info RRCConnectionRejectCriticalExtensionsC1::theInfo = {
	RRCConnectionRejectCriticalExtensionsC1::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	3
};

const void *RRCConnectionRejectCriticalExtensionsCriticalExtensionsFuture::itemsInfo[0] = {
};
bool RRCConnectionRejectCriticalExtensionsCriticalExtensionsFuture::itemsPres[0] = {
};
const RRCConnectionRejectCriticalExtensionsCriticalExtensionsFuture::Info RRCConnectionRejectCriticalExtensionsCriticalExtensionsFuture::theInfo = {
	RRCConnectionRejectCriticalExtensionsCriticalExtensionsFuture::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *RRCConnectionRejectCriticalExtensions::choicesInfo[2] = {
	&RRCConnectionRejectCriticalExtensionsC1::theInfo,
	&RRCConnectionRejectCriticalExtensionsCriticalExtensionsFuture::theInfo,
};
const RRCConnectionRejectCriticalExtensions::Info RRCConnectionRejectCriticalExtensions::theInfo = {
	RRCConnectionRejectCriticalExtensions::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *RRCConnectionReject::itemsInfo[1] = {
	&RRCConnectionRejectCriticalExtensions::theInfo,
};
bool RRCConnectionReject::itemsPres[1] = {
	1,
};
const RRCConnectionReject::Info RRCConnectionReject::theInfo = {
	RRCConnectionReject::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
RRCConnectionReject::RRCConnectionReject(const RRCConnectionRejectCriticalExtensions& rRCConnectionRejectCriticalExtensions) : Sequence(&theInfo) {
	setRRCConnectionRejectCriticalExtensions(rRCConnectionRejectCriticalExtensions);
}

const void *RRCConnectionSetupv8a0IEsNonCriticalExtension::itemsInfo[0] = {
};
bool RRCConnectionSetupv8a0IEsNonCriticalExtension::itemsPres[0] = {
};
const RRCConnectionSetupv8a0IEsNonCriticalExtension::Info RRCConnectionSetupv8a0IEsNonCriticalExtension::theInfo = {
	RRCConnectionSetupv8a0IEsNonCriticalExtension::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *RRCConnectionSetupv8a0IEs::itemsInfo[2] = {
	&RRCConnectionSetupv8a0IEsLateNonCriticalExtension::theInfo,
	&RRCConnectionSetupv8a0IEsNonCriticalExtension::theInfo,
};
bool RRCConnectionSetupv8a0IEs::itemsPres[2] = {
	0,
	0,
};
const RRCConnectionSetupv8a0IEs::Info RRCConnectionSetupv8a0IEs::theInfo = {
	RRCConnectionSetupv8a0IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *RRCConnectionSetupr8IEs::itemsInfo[2] = {
	&RadioResourceConfigDedicated::theInfo,
	&RRCConnectionSetupv8a0IEs::theInfo,
};
bool RRCConnectionSetupr8IEs::itemsPres[2] = {
	1,
	0,
};
const RRCConnectionSetupr8IEs::Info RRCConnectionSetupr8IEs::theInfo = {
	RRCConnectionSetupr8IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};
RRCConnectionSetupr8IEs::RRCConnectionSetupr8IEs(const RadioResourceConfigDedicated& radioResourceConfigDedicated) : Sequence(&theInfo) {
	setRadioResourceConfigDedicated(radioResourceConfigDedicated);
}

const void *RRCConnectionSetupCriticalExtensionsC1::choicesInfo[8] = {
	&RRCConnectionSetupr8IEs::theInfo,
	&RRCConnectionSetupCriticalExtensionsC1Spare7::theInfo,
	&RRCConnectionSetupCriticalExtensionsC1Spare6::theInfo,
	&RRCConnectionSetupCriticalExtensionsC1Spare5::theInfo,
	&RRCConnectionSetupCriticalExtensionsC1Spare4::theInfo,
	&RRCConnectionSetupCriticalExtensionsC1Spare3::theInfo,
	&RRCConnectionSetupCriticalExtensionsC1Spare2::theInfo,
	&RRCConnectionSetupCriticalExtensionsC1Spare1::theInfo,
};
const RRCConnectionSetupCriticalExtensionsC1::Info RRCConnectionSetupCriticalExtensionsC1::theInfo = {
	RRCConnectionSetupCriticalExtensionsC1::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	7
};

const void *RRCConnectionSetupCriticalExtensionsCriticalExtensionsFuture::itemsInfo[0] = {
};
bool RRCConnectionSetupCriticalExtensionsCriticalExtensionsFuture::itemsPres[0] = {
};
const RRCConnectionSetupCriticalExtensionsCriticalExtensionsFuture::Info RRCConnectionSetupCriticalExtensionsCriticalExtensionsFuture::theInfo = {
	RRCConnectionSetupCriticalExtensionsCriticalExtensionsFuture::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *RRCConnectionSetupCriticalExtensions::choicesInfo[2] = {
	&RRCConnectionSetupCriticalExtensionsC1::theInfo,
	&RRCConnectionSetupCriticalExtensionsCriticalExtensionsFuture::theInfo,
};
const RRCConnectionSetupCriticalExtensions::Info RRCConnectionSetupCriticalExtensions::theInfo = {
	RRCConnectionSetupCriticalExtensions::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *RRCConnectionSetup::itemsInfo[2] = {
	&RRCTransactionIdentifier::theInfo,
	&RRCConnectionSetupCriticalExtensions::theInfo,
};
bool RRCConnectionSetup::itemsPres[2] = {
	1,
	1,
};
const RRCConnectionSetup::Info RRCConnectionSetup::theInfo = {
	RRCConnectionSetup::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
RRCConnectionSetup::RRCConnectionSetup(const RRCTransactionIdentifier& rrcTransactionIdentifier, const RRCConnectionSetupCriticalExtensions& rRCConnectionSetupCriticalExtensions) : Sequence(&theInfo) {
	setRrcTransactionIdentifier(rrcTransactionIdentifier);
	setRRCConnectionSetupCriticalExtensions(rRCConnectionSetupCriticalExtensions);
}

const void *DLCCCHMessageTypeC1::choicesInfo[4] = {
	&RRCConnectionReestablishment::theInfo,
	&RRCConnectionReestablishmentReject::theInfo,
	&RRCConnectionReject::theInfo,
	&RRCConnectionSetup::theInfo,
};
const DLCCCHMessageTypeC1::Info DLCCCHMessageTypeC1::theInfo = {
	DLCCCHMessageTypeC1::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	3
};

const void *DLCCCHMessageTypeMessageClassExtension::itemsInfo[0] = {
};
bool DLCCCHMessageTypeMessageClassExtension::itemsPres[0] = {
};
const DLCCCHMessageTypeMessageClassExtension::Info DLCCCHMessageTypeMessageClassExtension::theInfo = {
	DLCCCHMessageTypeMessageClassExtension::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *DLCCCHMessageType::choicesInfo[2] = {
	&DLCCCHMessageTypeC1::theInfo,
	&DLCCCHMessageTypeMessageClassExtension::theInfo,
};
const DLCCCHMessageType::Info DLCCCHMessageType::theInfo = {
	DLCCCHMessageType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLCCCHMessage::itemsInfo[1] = {
	&DLCCCHMessageType::theInfo,
};
bool DLCCCHMessage::itemsPres[1] = {
	1,
};
const DLCCCHMessage::Info DLCCCHMessage::theInfo = {
	DLCCCHMessage::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
DLCCCHMessage::DLCCCHMessage(const DLCCCHMessageType& message) : Sequence(&theInfo) {
	setMessage(message);
}

const void *CSFBParametersResponseCDMA2000v8a0IEsNonCriticalExtension::itemsInfo[0] = {
};
bool CSFBParametersResponseCDMA2000v8a0IEsNonCriticalExtension::itemsPres[0] = {
};
const CSFBParametersResponseCDMA2000v8a0IEsNonCriticalExtension::Info CSFBParametersResponseCDMA2000v8a0IEsNonCriticalExtension::theInfo = {
	CSFBParametersResponseCDMA2000v8a0IEsNonCriticalExtension::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *CSFBParametersResponseCDMA2000v8a0IEs::itemsInfo[2] = {
	&CSFBParametersResponseCDMA2000v8a0IEsLateNonCriticalExtension::theInfo,
	&CSFBParametersResponseCDMA2000v8a0IEsNonCriticalExtension::theInfo,
};
bool CSFBParametersResponseCDMA2000v8a0IEs::itemsPres[2] = {
	0,
	0,
};
const CSFBParametersResponseCDMA2000v8a0IEs::Info CSFBParametersResponseCDMA2000v8a0IEs::theInfo = {
	CSFBParametersResponseCDMA2000v8a0IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *CSFBParametersResponseCDMA2000r8IEs::itemsInfo[3] = {
	&RANDCDMA2000::theInfo,
	&MobilityParametersCDMA2000::theInfo,
	&CSFBParametersResponseCDMA2000v8a0IEs::theInfo,
};
bool CSFBParametersResponseCDMA2000r8IEs::itemsPres[3] = {
	1,
	1,
	0,
};
const CSFBParametersResponseCDMA2000r8IEs::Info CSFBParametersResponseCDMA2000r8IEs::theInfo = {
	CSFBParametersResponseCDMA2000r8IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};
CSFBParametersResponseCDMA2000r8IEs::CSFBParametersResponseCDMA2000r8IEs(const RANDCDMA2000& rand, const MobilityParametersCDMA2000& mobilityParameters) : Sequence(&theInfo) {
	setRand(rand);
	setMobilityParameters(mobilityParameters);
}

const void *CSFBParametersResponseCDMA2000CriticalExtensionsCriticalExtensionsFuture::itemsInfo[0] = {
};
bool CSFBParametersResponseCDMA2000CriticalExtensionsCriticalExtensionsFuture::itemsPres[0] = {
};
const CSFBParametersResponseCDMA2000CriticalExtensionsCriticalExtensionsFuture::Info CSFBParametersResponseCDMA2000CriticalExtensionsCriticalExtensionsFuture::theInfo = {
	CSFBParametersResponseCDMA2000CriticalExtensionsCriticalExtensionsFuture::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *CSFBParametersResponseCDMA2000CriticalExtensions::choicesInfo[2] = {
	&CSFBParametersResponseCDMA2000r8IEs::theInfo,
	&CSFBParametersResponseCDMA2000CriticalExtensionsCriticalExtensionsFuture::theInfo,
};
const CSFBParametersResponseCDMA2000CriticalExtensions::Info CSFBParametersResponseCDMA2000CriticalExtensions::theInfo = {
	CSFBParametersResponseCDMA2000CriticalExtensions::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *CSFBParametersResponseCDMA2000::itemsInfo[2] = {
	&RRCTransactionIdentifier::theInfo,
	&CSFBParametersResponseCDMA2000CriticalExtensions::theInfo,
};
bool CSFBParametersResponseCDMA2000::itemsPres[2] = {
	1,
	1,
};
const CSFBParametersResponseCDMA2000::Info CSFBParametersResponseCDMA2000::theInfo = {
	CSFBParametersResponseCDMA2000::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
CSFBParametersResponseCDMA2000::CSFBParametersResponseCDMA2000(const RRCTransactionIdentifier& rrcTransactionIdentifier, const CSFBParametersResponseCDMA2000CriticalExtensions& cSFBParametersResponseCDMA2000CriticalExtensions) : Sequence(&theInfo) {
	setRrcTransactionIdentifier(rrcTransactionIdentifier);
	setCSFBParametersResponseCDMA2000CriticalExtensions(cSFBParametersResponseCDMA2000CriticalExtensions);
}

const void *DLInformationTransferr8IEsDedicatedInfoType::choicesInfo[3] = {
	&DedicatedInfoNAS::theInfo,
	&DedicatedInfoCDMA2000::theInfo,
	&DedicatedInfoCDMA2000::theInfo,
};
const DLInformationTransferr8IEsDedicatedInfoType::Info DLInformationTransferr8IEsDedicatedInfoType::theInfo = {
	DLInformationTransferr8IEsDedicatedInfoType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *DLInformationTransferv8a0IEsNonCriticalExtension::itemsInfo[0] = {
};
bool DLInformationTransferv8a0IEsNonCriticalExtension::itemsPres[0] = {
};
const DLInformationTransferv8a0IEsNonCriticalExtension::Info DLInformationTransferv8a0IEsNonCriticalExtension::theInfo = {
	DLInformationTransferv8a0IEsNonCriticalExtension::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *DLInformationTransferv8a0IEs::itemsInfo[2] = {
	&DLInformationTransferv8a0IEsLateNonCriticalExtension::theInfo,
	&DLInformationTransferv8a0IEsNonCriticalExtension::theInfo,
};
bool DLInformationTransferv8a0IEs::itemsPres[2] = {
	0,
	0,
};
const DLInformationTransferv8a0IEs::Info DLInformationTransferv8a0IEs::theInfo = {
	DLInformationTransferv8a0IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *DLInformationTransferr8IEs::itemsInfo[2] = {
	&DLInformationTransferr8IEsDedicatedInfoType::theInfo,
	&DLInformationTransferv8a0IEs::theInfo,
};
bool DLInformationTransferr8IEs::itemsPres[2] = {
	1,
	0,
};
const DLInformationTransferr8IEs::Info DLInformationTransferr8IEs::theInfo = {
	DLInformationTransferr8IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};
DLInformationTransferr8IEs::DLInformationTransferr8IEs(const DLInformationTransferr8IEsDedicatedInfoType& dLInformationTransferr8IEsDedicatedInfoType) : Sequence(&theInfo) {
	setDLInformationTransferr8IEsDedicatedInfoType(dLInformationTransferr8IEsDedicatedInfoType);
}

const void *DLInformationTransferCriticalExtensionsC1::choicesInfo[4] = {
	&DLInformationTransferr8IEs::theInfo,
	&DLInformationTransferCriticalExtensionsC1Spare3::theInfo,
	&DLInformationTransferCriticalExtensionsC1Spare2::theInfo,
	&DLInformationTransferCriticalExtensionsC1Spare1::theInfo,
};
const DLInformationTransferCriticalExtensionsC1::Info DLInformationTransferCriticalExtensionsC1::theInfo = {
	DLInformationTransferCriticalExtensionsC1::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	3
};

const void *DLInformationTransferCriticalExtensionsCriticalExtensionsFuture::itemsInfo[0] = {
};
bool DLInformationTransferCriticalExtensionsCriticalExtensionsFuture::itemsPres[0] = {
};
const DLInformationTransferCriticalExtensionsCriticalExtensionsFuture::Info DLInformationTransferCriticalExtensionsCriticalExtensionsFuture::theInfo = {
	DLInformationTransferCriticalExtensionsCriticalExtensionsFuture::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *DLInformationTransferCriticalExtensions::choicesInfo[2] = {
	&DLInformationTransferCriticalExtensionsC1::theInfo,
	&DLInformationTransferCriticalExtensionsCriticalExtensionsFuture::theInfo,
};
const DLInformationTransferCriticalExtensions::Info DLInformationTransferCriticalExtensions::theInfo = {
	DLInformationTransferCriticalExtensions::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLInformationTransfer::itemsInfo[2] = {
	&RRCTransactionIdentifier::theInfo,
	&DLInformationTransferCriticalExtensions::theInfo,
};
bool DLInformationTransfer::itemsPres[2] = {
	1,
	1,
};
const DLInformationTransfer::Info DLInformationTransfer::theInfo = {
	DLInformationTransfer::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
DLInformationTransfer::DLInformationTransfer(const RRCTransactionIdentifier& rrcTransactionIdentifier, const DLInformationTransferCriticalExtensions& dLInformationTransferCriticalExtensions) : Sequence(&theInfo) {
	setRrcTransactionIdentifier(rrcTransactionIdentifier);
	setDLInformationTransferCriticalExtensions(dLInformationTransferCriticalExtensions);
}

const void *CarrierFreqCDMA2000::itemsInfo[2] = {
	&BandclassCDMA2000::theInfo,
	&ARFCNValueCDMA2000::theInfo,
};
bool CarrierFreqCDMA2000::itemsPres[2] = {
	1,
	1,
};
const CarrierFreqCDMA2000::Info CarrierFreqCDMA2000::theInfo = {
	CarrierFreqCDMA2000::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
CarrierFreqCDMA2000::CarrierFreqCDMA2000(const BandclassCDMA2000& bandClass, const ARFCNValueCDMA2000& arfcn) : Sequence(&theInfo) {
	setBandClass(bandClass);
	setArfcn(arfcn);
}

const void *HandoverFromEUTRAPreparationRequestv1020IEsNonCriticalExtension::itemsInfo[0] = {
};
bool HandoverFromEUTRAPreparationRequestv1020IEsNonCriticalExtension::itemsPres[0] = {
};
const HandoverFromEUTRAPreparationRequestv1020IEsNonCriticalExtension::Info HandoverFromEUTRAPreparationRequestv1020IEsNonCriticalExtension::theInfo = {
	HandoverFromEUTRAPreparationRequestv1020IEsNonCriticalExtension::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *HandoverFromEUTRAPreparationRequestv1020IEs::itemsInfo[3] = {
	&HandoverFromEUTRAPreparationRequestv1020IEsdualRxTxRedirectIndicator_r10::theInfo,
	&CarrierFreqCDMA2000::theInfo,
	&HandoverFromEUTRAPreparationRequestv1020IEsNonCriticalExtension::theInfo,
};
bool HandoverFromEUTRAPreparationRequestv1020IEs::itemsPres[3] = {
	0,
	0,
	0,
};
const HandoverFromEUTRAPreparationRequestv1020IEs::Info HandoverFromEUTRAPreparationRequestv1020IEs::theInfo = {
	HandoverFromEUTRAPreparationRequestv1020IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *HandoverFromEUTRAPreparationRequestv920IEs::itemsInfo[2] = {
	&HandoverFromEUTRAPreparationRequestv920IEsConcurrPrepCDMA2000HRPDr9::theInfo,
	&HandoverFromEUTRAPreparationRequestv1020IEs::theInfo,
};
bool HandoverFromEUTRAPreparationRequestv920IEs::itemsPres[2] = {
	0,
	0,
};
const HandoverFromEUTRAPreparationRequestv920IEs::Info HandoverFromEUTRAPreparationRequestv920IEs::theInfo = {
	HandoverFromEUTRAPreparationRequestv920IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *HandoverFromEUTRAPreparationRequestv890IEs::itemsInfo[2] = {
	&HandoverFromEUTRAPreparationRequestv890IEsLateNonCriticalExtension::theInfo,
	&HandoverFromEUTRAPreparationRequestv920IEs::theInfo,
};
bool HandoverFromEUTRAPreparationRequestv890IEs::itemsPres[2] = {
	0,
	0,
};
const HandoverFromEUTRAPreparationRequestv890IEs::Info HandoverFromEUTRAPreparationRequestv890IEs::theInfo = {
	HandoverFromEUTRAPreparationRequestv890IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *HandoverFromEUTRAPreparationRequestr8IEs::itemsInfo[4] = {
	&CDMA2000Type::theInfo,
	&RANDCDMA2000::theInfo,
	&MobilityParametersCDMA2000::theInfo,
	&HandoverFromEUTRAPreparationRequestv890IEs::theInfo,
};
bool HandoverFromEUTRAPreparationRequestr8IEs::itemsPres[4] = {
	1,
	0,
	0,
	0,
};
const HandoverFromEUTRAPreparationRequestr8IEs::Info HandoverFromEUTRAPreparationRequestr8IEs::theInfo = {
	HandoverFromEUTRAPreparationRequestr8IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 3, 0
};
HandoverFromEUTRAPreparationRequestr8IEs::HandoverFromEUTRAPreparationRequestr8IEs(const CDMA2000Type& cdma2000Type) : Sequence(&theInfo) {
	setCdma2000Type(cdma2000Type);
}

const void *HandoverFromEUTRAPreparationRequestCriticalExtensionsC1::choicesInfo[4] = {
	&HandoverFromEUTRAPreparationRequestr8IEs::theInfo,
	&HandoverFromEUTRAPreparationRequestCriticalExtensionsC1Spare3::theInfo,
	&HandoverFromEUTRAPreparationRequestCriticalExtensionsC1Spare2::theInfo,
	&HandoverFromEUTRAPreparationRequestCriticalExtensionsC1Spare1::theInfo,
};
const HandoverFromEUTRAPreparationRequestCriticalExtensionsC1::Info HandoverFromEUTRAPreparationRequestCriticalExtensionsC1::theInfo = {
	HandoverFromEUTRAPreparationRequestCriticalExtensionsC1::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	3
};

const void *HandoverFromEUTRAPreparationRequestCriticalExtensionsCriticalExtensionsFuture::itemsInfo[0] = {
};
bool HandoverFromEUTRAPreparationRequestCriticalExtensionsCriticalExtensionsFuture::itemsPres[0] = {
};
const HandoverFromEUTRAPreparationRequestCriticalExtensionsCriticalExtensionsFuture::Info HandoverFromEUTRAPreparationRequestCriticalExtensionsCriticalExtensionsFuture::theInfo = {
	HandoverFromEUTRAPreparationRequestCriticalExtensionsCriticalExtensionsFuture::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *HandoverFromEUTRAPreparationRequestCriticalExtensions::choicesInfo[2] = {
	&HandoverFromEUTRAPreparationRequestCriticalExtensionsC1::theInfo,
	&HandoverFromEUTRAPreparationRequestCriticalExtensionsCriticalExtensionsFuture::theInfo,
};
const HandoverFromEUTRAPreparationRequestCriticalExtensions::Info HandoverFromEUTRAPreparationRequestCriticalExtensions::theInfo = {
	HandoverFromEUTRAPreparationRequestCriticalExtensions::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *HandoverFromEUTRAPreparationRequest::itemsInfo[2] = {
	&RRCTransactionIdentifier::theInfo,
	&HandoverFromEUTRAPreparationRequestCriticalExtensions::theInfo,
};
bool HandoverFromEUTRAPreparationRequest::itemsPres[2] = {
	1,
	1,
};
const HandoverFromEUTRAPreparationRequest::Info HandoverFromEUTRAPreparationRequest::theInfo = {
	HandoverFromEUTRAPreparationRequest::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
HandoverFromEUTRAPreparationRequest::HandoverFromEUTRAPreparationRequest(const RRCTransactionIdentifier& rrcTransactionIdentifier, const HandoverFromEUTRAPreparationRequestCriticalExtensions& handoverFromEUTRAPreparationRequestCriticalExtensions) : Sequence(&theInfo) {
	setRrcTransactionIdentifier(rrcTransactionIdentifier);
	setHandoverFromEUTRAPreparationRequestCriticalExtensions(handoverFromEUTRAPreparationRequestCriticalExtensions);
}

const void *SIOrPSIGERAN::choicesInfo[2] = {
	&SystemInfoListGERAN::theInfo,
	&SystemInfoListGERAN::theInfo,
};
const SIOrPSIGERAN::Info SIOrPSIGERAN::theInfo = {
	SIOrPSIGERAN::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Handover::itemsInfo[4] = {
	&HandovertargetRAT_Type::theInfo,
	&HandoverTargetRATMessageContainer::theInfo,
	&HandoverNasSecurityParamFromEUTRA::theInfo,
	&SIOrPSIGERAN::theInfo,
};
bool Handover::itemsPres[4] = {
	1,
	1,
	0,
	0,
};
const Handover::Info Handover::theInfo = {
	Handover::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
};
Handover::Handover(const HandovertargetRAT_Type& handovertargetRAT_Type, const HandoverTargetRATMessageContainer& handoverTargetRATMessageContainer) : Sequence(&theInfo) {
	setHandovertargetRAT_Type(handovertargetRAT_Type);
	setHandoverTargetRATMessageContainer(handoverTargetRATMessageContainer);
}

const void *PhysCellIdGERAN::itemsInfo[2] = {
	&PhysCellIdGERANNetworkColourCode::theInfo,
	&PhysCellIdGERANBaseStationColourCode::theInfo,
};
bool PhysCellIdGERAN::itemsPres[2] = {
	1,
	1,
};
const PhysCellIdGERAN::Info PhysCellIdGERAN::theInfo = {
	PhysCellIdGERAN::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
PhysCellIdGERAN::PhysCellIdGERAN(const PhysCellIdGERANNetworkColourCode& physCellIdGERANNetworkColourCode, const PhysCellIdGERANBaseStationColourCode& physCellIdGERANBaseStationColourCode) : Sequence(&theInfo) {
	setPhysCellIdGERANNetworkColourCode(physCellIdGERANNetworkColourCode);
	setPhysCellIdGERANBaseStationColourCode(physCellIdGERANBaseStationColourCode);
}

const void *CarrierFreqGERAN::itemsInfo[2] = {
	&ARFCNValueGERAN::theInfo,
	&BandIndicatorGERAN::theInfo,
};
bool CarrierFreqGERAN::itemsPres[2] = {
	1,
	1,
};
const CarrierFreqGERAN::Info CarrierFreqGERAN::theInfo = {
	CarrierFreqGERAN::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
CarrierFreqGERAN::CarrierFreqGERAN(const ARFCNValueGERAN& arfcn, const BandIndicatorGERAN& bandIndicator) : Sequence(&theInfo) {
	setArfcn(arfcn);
	setBandIndicator(bandIndicator);
}

const void *CellChangeOrderTargetRATTypeGeran::itemsInfo[4] = {
	&PhysCellIdGERAN::theInfo,
	&CarrierFreqGERAN::theInfo,
	&CellChangeOrderTargetRATTypeGeranNetworkControlOrder::theInfo,
	&SIOrPSIGERAN::theInfo,
};
bool CellChangeOrderTargetRATTypeGeran::itemsPres[4] = {
	1,
	1,
	0,
	0,
};
const CellChangeOrderTargetRATTypeGeran::Info CellChangeOrderTargetRATTypeGeran::theInfo = {
	CellChangeOrderTargetRATTypeGeran::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
};
CellChangeOrderTargetRATTypeGeran::CellChangeOrderTargetRATTypeGeran(const PhysCellIdGERAN& physCellId, const CarrierFreqGERAN& carrierFreq) : Sequence(&theInfo) {
	setPhysCellId(physCellId);
	setCarrierFreq(carrierFreq);
}

const void *CellChangeOrderTargetRATType::choicesInfo[1] = {
	&CellChangeOrderTargetRATTypeGeran::theInfo,
};
const CellChangeOrderTargetRATType::Info CellChangeOrderTargetRATType::theInfo = {
	CellChangeOrderTargetRATType::create,
	CHOICE,
	0,
	true,
	choicesInfo,
	0
};

const void *CellChangeOrder::itemsInfo[2] = {
	&CellChangeOrdert304::theInfo,
	&CellChangeOrderTargetRATType::theInfo,
};
bool CellChangeOrder::itemsPres[2] = {
	1,
	1,
};
const CellChangeOrder::Info CellChangeOrder::theInfo = {
	CellChangeOrder::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
CellChangeOrder::CellChangeOrder(const CellChangeOrdert304& cellChangeOrdert304, const CellChangeOrderTargetRATType& cellChangeOrderTargetRATType) : Sequence(&theInfo) {
	setCellChangeOrdert304(cellChangeOrdert304);
	setCellChangeOrderTargetRATType(cellChangeOrderTargetRATType);
}

const void *MobilityFromEUTRACommandr8IEsPurpose::choicesInfo[2] = {
	&Handover::theInfo,
	&CellChangeOrder::theInfo,
};
const MobilityFromEUTRACommandr8IEsPurpose::Info MobilityFromEUTRACommandr8IEsPurpose::theInfo = {
	MobilityFromEUTRACommandr8IEsPurpose::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *MobilityFromEUTRACommandv8d0IEsNonCriticalExtension::itemsInfo[0] = {
};
bool MobilityFromEUTRACommandv8d0IEsNonCriticalExtension::itemsPres[0] = {
};
const MobilityFromEUTRACommandv8d0IEsNonCriticalExtension::Info MobilityFromEUTRACommandv8d0IEsNonCriticalExtension::theInfo = {
	MobilityFromEUTRACommandv8d0IEsNonCriticalExtension::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *MobilityFromEUTRACommandv8d0IEs::itemsInfo[2] = {
	&BandIndicatorGERAN::theInfo,
	&MobilityFromEUTRACommandv8d0IEsNonCriticalExtension::theInfo,
};
bool MobilityFromEUTRACommandv8d0IEs::itemsPres[2] = {
	0,
	0,
};
const MobilityFromEUTRACommandv8d0IEs::Info MobilityFromEUTRACommandv8d0IEs::theInfo = {
	MobilityFromEUTRACommandv8d0IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *MobilityFromEUTRACommandv8a0IEs::itemsInfo[2] = {
	&MobilityFromEUTRACommandv8a0IEsLateNonCriticalExtension::theInfo,
	&MobilityFromEUTRACommandv8d0IEs::theInfo,
};
bool MobilityFromEUTRACommandv8a0IEs::itemsPres[2] = {
	0,
	0,
};
const MobilityFromEUTRACommandv8a0IEs::Info MobilityFromEUTRACommandv8a0IEs::theInfo = {
	MobilityFromEUTRACommandv8a0IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *MobilityFromEUTRACommandr8IEs::itemsInfo[3] = {
	&MobilityFromEUTRACommandr8IEsCsFallbackIndicator::theInfo,
	&MobilityFromEUTRACommandr8IEsPurpose::theInfo,
	&MobilityFromEUTRACommandv8a0IEs::theInfo,
};
bool MobilityFromEUTRACommandr8IEs::itemsPres[3] = {
	1,
	1,
	0,
};
const MobilityFromEUTRACommandr8IEs::Info MobilityFromEUTRACommandr8IEs::theInfo = {
	MobilityFromEUTRACommandr8IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};
MobilityFromEUTRACommandr8IEs::MobilityFromEUTRACommandr8IEs(const MobilityFromEUTRACommandr8IEsCsFallbackIndicator& mobilityFromEUTRACommandr8IEsCsFallbackIndicator, const MobilityFromEUTRACommandr8IEsPurpose& mobilityFromEUTRACommandr8IEsPurpose) : Sequence(&theInfo) {
	setMobilityFromEUTRACommandr8IEsCsFallbackIndicator(mobilityFromEUTRACommandr8IEsCsFallbackIndicator);
	setMobilityFromEUTRACommandr8IEsPurpose(mobilityFromEUTRACommandr8IEsPurpose);
}

const void *ECSFBr9::itemsInfo[4] = {
	&ECSFBr9MessageContCDMA20001XRTTr9::theInfo,
	&ECSFBr9mobilityCDMA2000_HRPD_r9::theInfo,
	&ECSFBr9MessageContCDMA2000HRPDr9::theInfo,
	&CarrierFreqCDMA2000::theInfo,
};
bool ECSFBr9::itemsPres[4] = {
	0,
	0,
	0,
	0,
};
const ECSFBr9::Info ECSFBr9::theInfo = {
	ECSFBr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 4, 0
};

const void *MobilityFromEUTRACommandr9IEsPurpose::choicesInfo[3] = {
	&Handover::theInfo,
	&CellChangeOrder::theInfo,
	&ECSFBr9::theInfo,
};
const MobilityFromEUTRACommandr9IEsPurpose::Info MobilityFromEUTRACommandr9IEsPurpose::theInfo = {
	MobilityFromEUTRACommandr9IEsPurpose::create,
	CHOICE,
	0,
	true,
	choicesInfo,
	2
};

const void *MobilityFromEUTRACommandv960IEsNonCriticalExtension::itemsInfo[0] = {
};
bool MobilityFromEUTRACommandv960IEsNonCriticalExtension::itemsPres[0] = {
};
const MobilityFromEUTRACommandv960IEsNonCriticalExtension::Info MobilityFromEUTRACommandv960IEsNonCriticalExtension::theInfo = {
	MobilityFromEUTRACommandv960IEsNonCriticalExtension::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *MobilityFromEUTRACommandv960IEs::itemsInfo[2] = {
	&BandIndicatorGERAN::theInfo,
	&MobilityFromEUTRACommandv960IEsNonCriticalExtension::theInfo,
};
bool MobilityFromEUTRACommandv960IEs::itemsPres[2] = {
	0,
	0,
};
const MobilityFromEUTRACommandv960IEs::Info MobilityFromEUTRACommandv960IEs::theInfo = {
	MobilityFromEUTRACommandv960IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *MobilityFromEUTRACommandv930IEs::itemsInfo[2] = {
	&MobilityFromEUTRACommandv930IEsLateNonCriticalExtension::theInfo,
	&MobilityFromEUTRACommandv960IEs::theInfo,
};
bool MobilityFromEUTRACommandv930IEs::itemsPres[2] = {
	0,
	0,
};
const MobilityFromEUTRACommandv930IEs::Info MobilityFromEUTRACommandv930IEs::theInfo = {
	MobilityFromEUTRACommandv930IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *MobilityFromEUTRACommandr9IEs::itemsInfo[3] = {
	&MobilityFromEUTRACommandr9IEsCsFallbackIndicator::theInfo,
	&MobilityFromEUTRACommandr9IEsPurpose::theInfo,
	&MobilityFromEUTRACommandv930IEs::theInfo,
};
bool MobilityFromEUTRACommandr9IEs::itemsPres[3] = {
	1,
	1,
	0,
};
const MobilityFromEUTRACommandr9IEs::Info MobilityFromEUTRACommandr9IEs::theInfo = {
	MobilityFromEUTRACommandr9IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};
MobilityFromEUTRACommandr9IEs::MobilityFromEUTRACommandr9IEs(const MobilityFromEUTRACommandr9IEsCsFallbackIndicator& mobilityFromEUTRACommandr9IEsCsFallbackIndicator, const MobilityFromEUTRACommandr9IEsPurpose& mobilityFromEUTRACommandr9IEsPurpose) : Sequence(&theInfo) {
	setMobilityFromEUTRACommandr9IEsCsFallbackIndicator(mobilityFromEUTRACommandr9IEsCsFallbackIndicator);
	setMobilityFromEUTRACommandr9IEsPurpose(mobilityFromEUTRACommandr9IEsPurpose);
}

const void *MobilityFromEUTRACommandCriticalExtensionsC1::choicesInfo[4] = {
	&MobilityFromEUTRACommandr8IEs::theInfo,
	&MobilityFromEUTRACommandr9IEs::theInfo,
	&MobilityFromEUTRACommandCriticalExtensionsC1Spare2::theInfo,
	&MobilityFromEUTRACommandCriticalExtensionsC1Spare1::theInfo,
};
const MobilityFromEUTRACommandCriticalExtensionsC1::Info MobilityFromEUTRACommandCriticalExtensionsC1::theInfo = {
	MobilityFromEUTRACommandCriticalExtensionsC1::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	3
};

const void *MobilityFromEUTRACommandCriticalExtensionsCriticalExtensionsFuture::itemsInfo[0] = {
};
bool MobilityFromEUTRACommandCriticalExtensionsCriticalExtensionsFuture::itemsPres[0] = {
};
const MobilityFromEUTRACommandCriticalExtensionsCriticalExtensionsFuture::Info MobilityFromEUTRACommandCriticalExtensionsCriticalExtensionsFuture::theInfo = {
	MobilityFromEUTRACommandCriticalExtensionsCriticalExtensionsFuture::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *MobilityFromEUTRACommandCriticalExtensions::choicesInfo[2] = {
	&MobilityFromEUTRACommandCriticalExtensionsC1::theInfo,
	&MobilityFromEUTRACommandCriticalExtensionsCriticalExtensionsFuture::theInfo,
};
const MobilityFromEUTRACommandCriticalExtensions::Info MobilityFromEUTRACommandCriticalExtensions::theInfo = {
	MobilityFromEUTRACommandCriticalExtensions::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *MobilityFromEUTRACommand::itemsInfo[2] = {
	&RRCTransactionIdentifier::theInfo,
	&MobilityFromEUTRACommandCriticalExtensions::theInfo,
};
bool MobilityFromEUTRACommand::itemsPres[2] = {
	1,
	1,
};
const MobilityFromEUTRACommand::Info MobilityFromEUTRACommand::theInfo = {
	MobilityFromEUTRACommand::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
MobilityFromEUTRACommand::MobilityFromEUTRACommand(const RRCTransactionIdentifier& rrcTransactionIdentifier, const MobilityFromEUTRACommandCriticalExtensions& mobilityFromEUTRACommandCriticalExtensions) : Sequence(&theInfo) {
	setRrcTransactionIdentifier(rrcTransactionIdentifier);
	setMobilityFromEUTRACommandCriticalExtensions(mobilityFromEUTRACommandCriticalExtensions);
}

const void *CellsToAddMod::itemsInfo[3] = {
	&CellsToAddModCellIndex::theInfo,
	&PhysCellId::theInfo,
	&QOffsetRange::theInfo,
};
bool CellsToAddMod::itemsPres[3] = {
	1,
	1,
	1,
};
const CellsToAddMod::Info CellsToAddMod::theInfo = {
	CellsToAddMod::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};
CellsToAddMod::CellsToAddMod(const CellsToAddModCellIndex& cellsToAddModCellIndex, const PhysCellId& physCellId, const QOffsetRange& cellIndividualOffset) : Sequence(&theInfo) {
	setCellsToAddModCellIndex(cellsToAddModCellIndex);
	setPhysCellId(physCellId);
	setCellIndividualOffset(cellIndividualOffset);
}

const void *BlackCellsToAddMod::itemsInfo[2] = {
	&BlackCellsToAddModCellIndex::theInfo,
	&PhysCellIdRange::theInfo,
};
bool BlackCellsToAddMod::itemsPres[2] = {
	1,
	1,
};
const BlackCellsToAddMod::Info BlackCellsToAddMod::theInfo = {
	BlackCellsToAddMod::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
BlackCellsToAddMod::BlackCellsToAddMod(const BlackCellsToAddModCellIndex& blackCellsToAddModCellIndex, const PhysCellIdRange& physCellIdRange) : Sequence(&theInfo) {
	setBlackCellsToAddModCellIndex(blackCellsToAddModCellIndex);
	setPhysCellIdRange(physCellIdRange);
}

const void *MeasSubframePatternConfigNeighr10Setup::itemsInfo[2] = {
	&MeasSubframePatternr10::theInfo,
	&MeasSubframeCellListr10::theInfo,
};
bool MeasSubframePatternConfigNeighr10Setup::itemsPres[2] = {
	1,
	0,
};
const MeasSubframePatternConfigNeighr10Setup::Info MeasSubframePatternConfigNeighr10Setup::theInfo = {
	MeasSubframePatternConfigNeighr10Setup::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};
MeasSubframePatternConfigNeighr10Setup::MeasSubframePatternConfigNeighr10Setup(const MeasSubframePatternr10& measSubframePatternNeighr10) : Sequence(&theInfo) {
	setMeasSubframePatternNeighr10(measSubframePatternNeighr10);
}

const void *MeasSubframePatternConfigNeighr10::choicesInfo[2] = {
	&MeasSubframePatternConfigNeighr10Release::theInfo,
	&MeasSubframePatternConfigNeighr10Setup::theInfo,
};
const MeasSubframePatternConfigNeighr10::Info MeasSubframePatternConfigNeighr10::theInfo = {
	MeasSubframePatternConfigNeighr10::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *MeasObjectEUTRA::itemsInfo[12] = {
	&ARFCNValueEUTRA::theInfo,
	&AllowedMeasBandwidth::theInfo,
	&PresenceAntennaPort1::theInfo,
	&NeighCellConfig::theInfo,
	&QOffsetRange::theInfo,
	&CellIndexList::theInfo,
	&CellsToAddModList::theInfo,
	&CellIndexList::theInfo,
	&BlackCellsToAddModList::theInfo,
	&PhysCellId::theInfo,
	&MeasCycleSCellr10::theInfo,
	&MeasSubframePatternConfigNeighr10::theInfo,
};
bool MeasObjectEUTRA::itemsPres[12] = {
	1,
	1,
	1,
	1,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
const MeasObjectEUTRA::Info MeasObjectEUTRA::theInfo = {
	MeasObjectEUTRA::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	10, 6, 2
};
MeasObjectEUTRA::MeasObjectEUTRA(const ARFCNValueEUTRA& carrierFreq, const AllowedMeasBandwidth& allowedMeasBandwidth, const PresenceAntennaPort1& presenceAntennaPort1, const NeighCellConfig& neighCellConfig) : Sequence(&theInfo) {
	setCarrierFreq(carrierFreq);
	setAllowedMeasBandwidth(allowedMeasBandwidth);
	setPresenceAntennaPort1(presenceAntennaPort1);
	setNeighCellConfig(neighCellConfig);
}

const void *CellsToAddModUTRAFDD::itemsInfo[2] = {
	&CellsToAddModUTRAFDDCellIndex::theInfo,
	&PhysCellIdUTRAFDD::theInfo,
};
bool CellsToAddModUTRAFDD::itemsPres[2] = {
	1,
	1,
};
const CellsToAddModUTRAFDD::Info CellsToAddModUTRAFDD::theInfo = {
	CellsToAddModUTRAFDD::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
CellsToAddModUTRAFDD::CellsToAddModUTRAFDD(const CellsToAddModUTRAFDDCellIndex& cellsToAddModUTRAFDDCellIndex, const PhysCellIdUTRAFDD& physCellId) : Sequence(&theInfo) {
	setCellsToAddModUTRAFDDCellIndex(cellsToAddModUTRAFDDCellIndex);
	setPhysCellId(physCellId);
}

const void *CellsToAddModUTRATDD::itemsInfo[2] = {
	&CellsToAddModUTRATDDCellIndex::theInfo,
	&PhysCellIdUTRATDD::theInfo,
};
bool CellsToAddModUTRATDD::itemsPres[2] = {
	1,
	1,
};
const CellsToAddModUTRATDD::Info CellsToAddModUTRATDD::theInfo = {
	CellsToAddModUTRATDD::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
CellsToAddModUTRATDD::CellsToAddModUTRATDD(const CellsToAddModUTRATDDCellIndex& cellsToAddModUTRATDDCellIndex, const PhysCellIdUTRATDD& physCellId) : Sequence(&theInfo) {
	setCellsToAddModUTRATDDCellIndex(cellsToAddModUTRATDDCellIndex);
	setPhysCellId(physCellId);
}

const void *MeasObjectUTRACellsToAddModList::choicesInfo[2] = {
	&CellsToAddModListUTRAFDD::theInfo,
	&CellsToAddModListUTRATDD::theInfo,
};
const MeasObjectUTRACellsToAddModList::Info MeasObjectUTRACellsToAddModList::theInfo = {
	MeasObjectUTRACellsToAddModList::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *MeasObjectUTRACellForWhichToReportCGI::choicesInfo[2] = {
	&PhysCellIdUTRAFDD::theInfo,
	&PhysCellIdUTRATDD::theInfo,
};
const MeasObjectUTRACellForWhichToReportCGI::Info MeasObjectUTRACellForWhichToReportCGI::theInfo = {
	MeasObjectUTRACellForWhichToReportCGI::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *PhysCellIdRangeUTRAFDDr9::itemsInfo[2] = {
	&PhysCellIdUTRAFDD::theInfo,
	&PhysCellIdRangeUTRAFDDr9Ranger9::theInfo,
};
bool PhysCellIdRangeUTRAFDDr9::itemsPres[2] = {
	1,
	0,
};
const PhysCellIdRangeUTRAFDDr9::Info PhysCellIdRangeUTRAFDDr9::theInfo = {
	PhysCellIdRangeUTRAFDDr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};
PhysCellIdRangeUTRAFDDr9::PhysCellIdRangeUTRAFDDr9(const PhysCellIdUTRAFDD& startr9) : Sequence(&theInfo) {
	setStartr9(startr9);
}

const void *CSGAllowedReportingCellsr9::itemsInfo[1] = {
	&PhysCellIdRangeUTRAFDDListr9::theInfo,
};
bool CSGAllowedReportingCellsr9::itemsPres[1] = {
	0,
};
const CSGAllowedReportingCellsr9::Info CSGAllowedReportingCellsr9::theInfo = {
	CSGAllowedReportingCellsr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *MeasObjectUTRA::itemsInfo[6] = {
	&ARFCNValueUTRA::theInfo,
	&QOffsetRangeInterRAT::theInfo,
	&CellIndexList::theInfo,
	&MeasObjectUTRACellsToAddModList::theInfo,
	&MeasObjectUTRACellForWhichToReportCGI::theInfo,
	&CSGAllowedReportingCellsr9::theInfo,
};
bool MeasObjectUTRA::itemsPres[6] = {
	1,
	0,
	0,
	0,
	0,
	0,
};
const MeasObjectUTRA::Info MeasObjectUTRA::theInfo = {
	MeasObjectUTRA::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	5, 4, 1
};
MeasObjectUTRA::MeasObjectUTRA(const ARFCNValueUTRA& carrierFreq) : Sequence(&theInfo) {
	setCarrierFreq(carrierFreq);
}

const void *MeasObjectGERAN::itemsInfo[4] = {
	&CarrierFreqsGERAN::theInfo,
	&QOffsetRangeInterRAT::theInfo,
	&MeasObjectGERANNccPermitted::theInfo,
	&PhysCellIdGERAN::theInfo,
};
bool MeasObjectGERAN::itemsPres[4] = {
	1,
	0,
	0,
	0,
};
const MeasObjectGERAN::Info MeasObjectGERAN::theInfo = {
	MeasObjectGERAN::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	4, 3, 0
};
MeasObjectGERAN::MeasObjectGERAN(const CarrierFreqsGERAN& carrierFreqs) : Sequence(&theInfo) {
	setCarrierFreqs(carrierFreqs);
}

const void *CellsToAddModCDMA2000::itemsInfo[2] = {
	&CellsToAddModCDMA2000CellIndex::theInfo,
	&PhysCellIdCDMA2000::theInfo,
};
bool CellsToAddModCDMA2000::itemsPres[2] = {
	1,
	1,
};
const CellsToAddModCDMA2000::Info CellsToAddModCDMA2000::theInfo = {
	CellsToAddModCDMA2000::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
CellsToAddModCDMA2000::CellsToAddModCDMA2000(const CellsToAddModCDMA2000CellIndex& cellsToAddModCDMA2000CellIndex, const PhysCellIdCDMA2000& physCellId) : Sequence(&theInfo) {
	setCellsToAddModCDMA2000CellIndex(cellsToAddModCDMA2000CellIndex);
	setPhysCellId(physCellId);
}

const void *MeasObjectCDMA2000::itemsInfo[7] = {
	&CDMA2000Type::theInfo,
	&CarrierFreqCDMA2000::theInfo,
	&MeasObjectCDMA2000SearchWindowSize::theInfo,
	&QOffsetRangeInterRAT::theInfo,
	&CellIndexList::theInfo,
	&CellsToAddModListCDMA2000::theInfo,
	&PhysCellIdCDMA2000::theInfo,
};
bool MeasObjectCDMA2000::itemsPres[7] = {
	1,
	1,
	0,
	0,
	0,
	0,
	0,
};
const MeasObjectCDMA2000::Info MeasObjectCDMA2000::theInfo = {
	MeasObjectCDMA2000::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	7, 5, 0
};
MeasObjectCDMA2000::MeasObjectCDMA2000(const CDMA2000Type& cdma2000Type, const CarrierFreqCDMA2000& carrierFreq) : Sequence(&theInfo) {
	setCdma2000Type(cdma2000Type);
	setCarrierFreq(carrierFreq);
}

const void *MeasObjectToAddModMeasObject::choicesInfo[4] = {
	&MeasObjectEUTRA::theInfo,
	&MeasObjectUTRA::theInfo,
	&MeasObjectGERAN::theInfo,
	&MeasObjectCDMA2000::theInfo,
};
const MeasObjectToAddModMeasObject::Info MeasObjectToAddModMeasObject::theInfo = {
	MeasObjectToAddModMeasObject::create,
	CHOICE,
	0,
	true,
	choicesInfo,
	3
};

const void *MeasObjectToAddMod::itemsInfo[2] = {
	&MeasObjectId::theInfo,
	&MeasObjectToAddModMeasObject::theInfo,
};
bool MeasObjectToAddMod::itemsPres[2] = {
	1,
	1,
};
const MeasObjectToAddMod::Info MeasObjectToAddMod::theInfo = {
	MeasObjectToAddMod::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
MeasObjectToAddMod::MeasObjectToAddMod(const MeasObjectId& measObjectId, const MeasObjectToAddModMeasObject& measObjectToAddModMeasObject) : Sequence(&theInfo) {
	setMeasObjectId(measObjectId);
	setMeasObjectToAddModMeasObject(measObjectToAddModMeasObject);
}

const void *ThresholdEUTRA::choicesInfo[2] = {
	&RSRPRange::theInfo,
	&RSRQRange::theInfo,
};
const ThresholdEUTRA::Info ThresholdEUTRA::theInfo = {
	ThresholdEUTRA::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ReportConfigEUTRATriggerTypeEventEventIdEventA1::itemsInfo[1] = {
	&ThresholdEUTRA::theInfo,
};
bool ReportConfigEUTRATriggerTypeEventEventIdEventA1::itemsPres[1] = {
	1,
};
const ReportConfigEUTRATriggerTypeEventEventIdEventA1::Info ReportConfigEUTRATriggerTypeEventEventIdEventA1::theInfo = {
	ReportConfigEUTRATriggerTypeEventEventIdEventA1::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
ReportConfigEUTRATriggerTypeEventEventIdEventA1::ReportConfigEUTRATriggerTypeEventEventIdEventA1(const ThresholdEUTRA& a1Threshold) : Sequence(&theInfo) {
	setA1Threshold(a1Threshold);
}

const void *ReportConfigEUTRATriggerTypeEventEventIdEventA2::itemsInfo[1] = {
	&ThresholdEUTRA::theInfo,
};
bool ReportConfigEUTRATriggerTypeEventEventIdEventA2::itemsPres[1] = {
	1,
};
const ReportConfigEUTRATriggerTypeEventEventIdEventA2::Info ReportConfigEUTRATriggerTypeEventEventIdEventA2::theInfo = {
	ReportConfigEUTRATriggerTypeEventEventIdEventA2::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
ReportConfigEUTRATriggerTypeEventEventIdEventA2::ReportConfigEUTRATriggerTypeEventEventIdEventA2(const ThresholdEUTRA& a2Threshold) : Sequence(&theInfo) {
	setA2Threshold(a2Threshold);
}

const void *ReportConfigEUTRATriggerTypeEventEventIdEventA3::itemsInfo[2] = {
	&ReportConfigEUTRATriggerTypeEventEventIdEventA3A3Offset::theInfo,
	&ReportConfigEUTRATriggerTypeEventEventIdEventA3ReportOnLeave::theInfo,
};
bool ReportConfigEUTRATriggerTypeEventEventIdEventA3::itemsPres[2] = {
	1,
	1,
};
const ReportConfigEUTRATriggerTypeEventEventIdEventA3::Info ReportConfigEUTRATriggerTypeEventEventIdEventA3::theInfo = {
	ReportConfigEUTRATriggerTypeEventEventIdEventA3::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
ReportConfigEUTRATriggerTypeEventEventIdEventA3::ReportConfigEUTRATriggerTypeEventEventIdEventA3(const ReportConfigEUTRATriggerTypeEventEventIdEventA3A3Offset& reportConfigEUTRATriggerTypeEventEventIdEventA3A3Offset, const ReportConfigEUTRATriggerTypeEventEventIdEventA3ReportOnLeave& reportConfigEUTRATriggerTypeEventEventIdEventA3ReportOnLeave) : Sequence(&theInfo) {
	setReportConfigEUTRATriggerTypeEventEventIdEventA3A3Offset(reportConfigEUTRATriggerTypeEventEventIdEventA3A3Offset);
	setReportConfigEUTRATriggerTypeEventEventIdEventA3ReportOnLeave(reportConfigEUTRATriggerTypeEventEventIdEventA3ReportOnLeave);
}

const void *ReportConfigEUTRATriggerTypeEventEventIdEventA4::itemsInfo[1] = {
	&ThresholdEUTRA::theInfo,
};
bool ReportConfigEUTRATriggerTypeEventEventIdEventA4::itemsPres[1] = {
	1,
};
const ReportConfigEUTRATriggerTypeEventEventIdEventA4::Info ReportConfigEUTRATriggerTypeEventEventIdEventA4::theInfo = {
	ReportConfigEUTRATriggerTypeEventEventIdEventA4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
ReportConfigEUTRATriggerTypeEventEventIdEventA4::ReportConfigEUTRATriggerTypeEventEventIdEventA4(const ThresholdEUTRA& a4Threshold) : Sequence(&theInfo) {
	setA4Threshold(a4Threshold);
}

const void *ReportConfigEUTRATriggerTypeEventEventIdEventA5::itemsInfo[2] = {
	&ThresholdEUTRA::theInfo,
	&ThresholdEUTRA::theInfo,
};
bool ReportConfigEUTRATriggerTypeEventEventIdEventA5::itemsPres[2] = {
	1,
	1,
};
const ReportConfigEUTRATriggerTypeEventEventIdEventA5::Info ReportConfigEUTRATriggerTypeEventEventIdEventA5::theInfo = {
	ReportConfigEUTRATriggerTypeEventEventIdEventA5::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
ReportConfigEUTRATriggerTypeEventEventIdEventA5::ReportConfigEUTRATriggerTypeEventEventIdEventA5(const ThresholdEUTRA& a5Threshold1, const ThresholdEUTRA& a5Threshold2) : Sequence(&theInfo) {
	setA5Threshold1(a5Threshold1);
	setA5Threshold2(a5Threshold2);
}

const void *ReportConfigEUTRATriggerTypeEventEventIdEventA6r10::itemsInfo[2] = {
	&ReportConfigEUTRATriggerTypeEventEventIdEventA6r10A6Offsetr10::theInfo,
	&ReportConfigEUTRATriggerTypeEventEventIdEventA6r10A6ReportOnLeaver10::theInfo,
};
bool ReportConfigEUTRATriggerTypeEventEventIdEventA6r10::itemsPres[2] = {
	1,
	1,
};
const ReportConfigEUTRATriggerTypeEventEventIdEventA6r10::Info ReportConfigEUTRATriggerTypeEventEventIdEventA6r10::theInfo = {
	ReportConfigEUTRATriggerTypeEventEventIdEventA6r10::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
ReportConfigEUTRATriggerTypeEventEventIdEventA6r10::ReportConfigEUTRATriggerTypeEventEventIdEventA6r10(const ReportConfigEUTRATriggerTypeEventEventIdEventA6r10A6Offsetr10& reportConfigEUTRATriggerTypeEventEventIdEventA6r10A6Offsetr10, const ReportConfigEUTRATriggerTypeEventEventIdEventA6r10A6ReportOnLeaver10& reportConfigEUTRATriggerTypeEventEventIdEventA6r10A6ReportOnLeaver10) : Sequence(&theInfo) {
	setReportConfigEUTRATriggerTypeEventEventIdEventA6r10A6Offsetr10(reportConfigEUTRATriggerTypeEventEventIdEventA6r10A6Offsetr10);
	setReportConfigEUTRATriggerTypeEventEventIdEventA6r10A6ReportOnLeaver10(reportConfigEUTRATriggerTypeEventEventIdEventA6r10A6ReportOnLeaver10);
}

const void *ReportConfigEUTRATriggerTypeEventEventId::choicesInfo[6] = {
	&ReportConfigEUTRATriggerTypeEventEventIdEventA1::theInfo,
	&ReportConfigEUTRATriggerTypeEventEventIdEventA2::theInfo,
	&ReportConfigEUTRATriggerTypeEventEventIdEventA3::theInfo,
	&ReportConfigEUTRATriggerTypeEventEventIdEventA4::theInfo,
	&ReportConfigEUTRATriggerTypeEventEventIdEventA5::theInfo,
	&ReportConfigEUTRATriggerTypeEventEventIdEventA6r10::theInfo,
};
const ReportConfigEUTRATriggerTypeEventEventId::Info ReportConfigEUTRATriggerTypeEventEventId::theInfo = {
	ReportConfigEUTRATriggerTypeEventEventId::create,
	CHOICE,
	0,
	true,
	choicesInfo,
	4
};

const void *ReportConfigEUTRATriggerTypeEvent::itemsInfo[3] = {
	&ReportConfigEUTRATriggerTypeEventEventId::theInfo,
	&Hysteresis::theInfo,
	&TimeToTrigger::theInfo,
};
bool ReportConfigEUTRATriggerTypeEvent::itemsPres[3] = {
	1,
	1,
	1,
};
const ReportConfigEUTRATriggerTypeEvent::Info ReportConfigEUTRATriggerTypeEvent::theInfo = {
	ReportConfigEUTRATriggerTypeEvent::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};
ReportConfigEUTRATriggerTypeEvent::ReportConfigEUTRATriggerTypeEvent(const ReportConfigEUTRATriggerTypeEventEventId& reportConfigEUTRATriggerTypeEventEventId, const Hysteresis& hysteresis, const TimeToTrigger& timeToTrigger) : Sequence(&theInfo) {
	setReportConfigEUTRATriggerTypeEventEventId(reportConfigEUTRATriggerTypeEventEventId);
	setHysteresis(hysteresis);
	setTimeToTrigger(timeToTrigger);
}

const void *ReportConfigEUTRATriggerTypePeriodical::itemsInfo[1] = {
	&ReportConfigEUTRATriggerTypePeriodicalpurpose::theInfo,
};
bool ReportConfigEUTRATriggerTypePeriodical::itemsPres[1] = {
	1,
};
const ReportConfigEUTRATriggerTypePeriodical::Info ReportConfigEUTRATriggerTypePeriodical::theInfo = {
	ReportConfigEUTRATriggerTypePeriodical::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
ReportConfigEUTRATriggerTypePeriodical::ReportConfigEUTRATriggerTypePeriodical(const ReportConfigEUTRATriggerTypePeriodicalpurpose& reportConfigEUTRATriggerTypePeriodicalpurpose) : Sequence(&theInfo) {
	setReportConfigEUTRATriggerTypePeriodicalpurpose(reportConfigEUTRATriggerTypePeriodicalpurpose);
}

const void *ReportConfigEUTRATriggerType::choicesInfo[2] = {
	&ReportConfigEUTRATriggerTypeEvent::theInfo,
	&ReportConfigEUTRATriggerTypePeriodical::theInfo,
};
const ReportConfigEUTRATriggerType::Info ReportConfigEUTRATriggerType::theInfo = {
	ReportConfigEUTRATriggerType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ReportConfigEUTRA::itemsInfo[10] = {
	&ReportConfigEUTRATriggerType::theInfo,
	&ReportConfigEUTRAtriggerQuantity::theInfo,
	&ReportConfigEUTRAreportQuantity::theInfo,
	&ReportConfigEUTRAMaxReportCells::theInfo,
	&ReportInterval::theInfo,
	&ReportConfigEUTRAreportAmount::theInfo,
	&ReportConfigEUTRAsi_RequestForHO_r9::theInfo,
	&ReportConfigEUTRAue_RxTxTimeDiffPeriodical_r9::theInfo,
	&ReportConfigEUTRAincludeLocationInfo_r10::theInfo,
	&ReportConfigEUTRAreportAddNeighMeas_r10::theInfo,
};
bool ReportConfigEUTRA::itemsPres[10] = {
	1,
	1,
	1,
	1,
	1,
	1,
	0,
	0,
	0,
	0,
};
const ReportConfigEUTRA::Info ReportConfigEUTRA::theInfo = {
	ReportConfigEUTRA::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	6, 0, 4
};
ReportConfigEUTRA::ReportConfigEUTRA(const ReportConfigEUTRATriggerType& reportConfigEUTRATriggerType, const ReportConfigEUTRAtriggerQuantity& reportConfigEUTRAtriggerQuantity, const ReportConfigEUTRAreportQuantity& reportConfigEUTRAreportQuantity, const ReportConfigEUTRAMaxReportCells& reportConfigEUTRAMaxReportCells, const ReportInterval& reportInterval, const ReportConfigEUTRAreportAmount& reportConfigEUTRAreportAmount) : Sequence(&theInfo) {
	setReportConfigEUTRATriggerType(reportConfigEUTRATriggerType);
	setReportConfigEUTRAtriggerQuantity(reportConfigEUTRAtriggerQuantity);
	setReportConfigEUTRAreportQuantity(reportConfigEUTRAreportQuantity);
	setReportConfigEUTRAMaxReportCells(reportConfigEUTRAMaxReportCells);
	setReportInterval(reportInterval);
	setReportConfigEUTRAreportAmount(reportConfigEUTRAreportAmount);
}

const void *ThresholdUTRA::choicesInfo[2] = {
	&ThresholdUTRAUtraRSCP::theInfo,
	&ThresholdUTRAUtraEcN0::theInfo,
};
const ThresholdUTRA::Info ThresholdUTRA::theInfo = {
	ThresholdUTRA::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ReportConfigInterRATTriggerTypeEventEventIdEventB1B1Threshold::choicesInfo[3] = {
	&ThresholdUTRA::theInfo,
	&ThresholdGERAN::theInfo,
	&ThresholdCDMA2000::theInfo,
};
const ReportConfigInterRATTriggerTypeEventEventIdEventB1B1Threshold::Info ReportConfigInterRATTriggerTypeEventEventIdEventB1B1Threshold::theInfo = {
	ReportConfigInterRATTriggerTypeEventEventIdEventB1B1Threshold::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *ReportConfigInterRATTriggerTypeEventEventIdEventB1::itemsInfo[1] = {
	&ReportConfigInterRATTriggerTypeEventEventIdEventB1B1Threshold::theInfo,
};
bool ReportConfigInterRATTriggerTypeEventEventIdEventB1::itemsPres[1] = {
	1,
};
const ReportConfigInterRATTriggerTypeEventEventIdEventB1::Info ReportConfigInterRATTriggerTypeEventEventIdEventB1::theInfo = {
	ReportConfigInterRATTriggerTypeEventEventIdEventB1::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
ReportConfigInterRATTriggerTypeEventEventIdEventB1::ReportConfigInterRATTriggerTypeEventEventIdEventB1(const ReportConfigInterRATTriggerTypeEventEventIdEventB1B1Threshold& reportConfigInterRATTriggerTypeEventEventIdEventB1B1Threshold) : Sequence(&theInfo) {
	setReportConfigInterRATTriggerTypeEventEventIdEventB1B1Threshold(reportConfigInterRATTriggerTypeEventEventIdEventB1B1Threshold);
}

const void *ReportConfigInterRATTriggerTypeEventEventIdEventB2B2Threshold2::choicesInfo[3] = {
	&ThresholdUTRA::theInfo,
	&ThresholdGERAN::theInfo,
	&ThresholdCDMA2000::theInfo,
};
const ReportConfigInterRATTriggerTypeEventEventIdEventB2B2Threshold2::Info ReportConfigInterRATTriggerTypeEventEventIdEventB2B2Threshold2::theInfo = {
	ReportConfigInterRATTriggerTypeEventEventIdEventB2B2Threshold2::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *ReportConfigInterRATTriggerTypeEventEventIdEventB2::itemsInfo[2] = {
	&ThresholdEUTRA::theInfo,
	&ReportConfigInterRATTriggerTypeEventEventIdEventB2B2Threshold2::theInfo,
};
bool ReportConfigInterRATTriggerTypeEventEventIdEventB2::itemsPres[2] = {
	1,
	1,
};
const ReportConfigInterRATTriggerTypeEventEventIdEventB2::Info ReportConfigInterRATTriggerTypeEventEventIdEventB2::theInfo = {
	ReportConfigInterRATTriggerTypeEventEventIdEventB2::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
ReportConfigInterRATTriggerTypeEventEventIdEventB2::ReportConfigInterRATTriggerTypeEventEventIdEventB2(const ThresholdEUTRA& b2Threshold1, const ReportConfigInterRATTriggerTypeEventEventIdEventB2B2Threshold2& reportConfigInterRATTriggerTypeEventEventIdEventB2B2Threshold2) : Sequence(&theInfo) {
	setB2Threshold1(b2Threshold1);
	setReportConfigInterRATTriggerTypeEventEventIdEventB2B2Threshold2(reportConfigInterRATTriggerTypeEventEventIdEventB2B2Threshold2);
}

const void *ReportConfigInterRATTriggerTypeEventEventId::choicesInfo[2] = {
	&ReportConfigInterRATTriggerTypeEventEventIdEventB1::theInfo,
	&ReportConfigInterRATTriggerTypeEventEventIdEventB2::theInfo,
};
const ReportConfigInterRATTriggerTypeEventEventId::Info ReportConfigInterRATTriggerTypeEventEventId::theInfo = {
	ReportConfigInterRATTriggerTypeEventEventId::create,
	CHOICE,
	0,
	true,
	choicesInfo,
	1
};

const void *ReportConfigInterRATTriggerTypeEvent::itemsInfo[3] = {
	&ReportConfigInterRATTriggerTypeEventEventId::theInfo,
	&Hysteresis::theInfo,
	&TimeToTrigger::theInfo,
};
bool ReportConfigInterRATTriggerTypeEvent::itemsPres[3] = {
	1,
	1,
	1,
};
const ReportConfigInterRATTriggerTypeEvent::Info ReportConfigInterRATTriggerTypeEvent::theInfo = {
	ReportConfigInterRATTriggerTypeEvent::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};
ReportConfigInterRATTriggerTypeEvent::ReportConfigInterRATTriggerTypeEvent(const ReportConfigInterRATTriggerTypeEventEventId& reportConfigInterRATTriggerTypeEventEventId, const Hysteresis& hysteresis, const TimeToTrigger& timeToTrigger) : Sequence(&theInfo) {
	setReportConfigInterRATTriggerTypeEventEventId(reportConfigInterRATTriggerTypeEventEventId);
	setHysteresis(hysteresis);
	setTimeToTrigger(timeToTrigger);
}

const void *ReportConfigInterRATTriggerTypePeriodical::itemsInfo[1] = {
	&ReportConfigInterRATTriggerTypePeriodicalpurpose::theInfo,
};
bool ReportConfigInterRATTriggerTypePeriodical::itemsPres[1] = {
	1,
};
const ReportConfigInterRATTriggerTypePeriodical::Info ReportConfigInterRATTriggerTypePeriodical::theInfo = {
	ReportConfigInterRATTriggerTypePeriodical::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
ReportConfigInterRATTriggerTypePeriodical::ReportConfigInterRATTriggerTypePeriodical(const ReportConfigInterRATTriggerTypePeriodicalpurpose& reportConfigInterRATTriggerTypePeriodicalpurpose) : Sequence(&theInfo) {
	setReportConfigInterRATTriggerTypePeriodicalpurpose(reportConfigInterRATTriggerTypePeriodicalpurpose);
}

const void *ReportConfigInterRATTriggerType::choicesInfo[2] = {
	&ReportConfigInterRATTriggerTypeEvent::theInfo,
	&ReportConfigInterRATTriggerTypePeriodical::theInfo,
};
const ReportConfigInterRATTriggerType::Info ReportConfigInterRATTriggerType::theInfo = {
	ReportConfigInterRATTriggerType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ReportConfigInterRAT::itemsInfo[6] = {
	&ReportConfigInterRATTriggerType::theInfo,
	&ReportConfigInterRATMaxReportCells::theInfo,
	&ReportInterval::theInfo,
	&ReportConfigInterRATreportAmount::theInfo,
	&ReportConfigInterRATsi_RequestForHO_r9::theInfo,
	&ReportConfigInterRATreportQuantityUTRA_FDD_r10::theInfo,
};
bool ReportConfigInterRAT::itemsPres[6] = {
	1,
	1,
	1,
	1,
	0,
	0,
};
const ReportConfigInterRAT::Info ReportConfigInterRAT::theInfo = {
	ReportConfigInterRAT::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	4, 0, 2
};
ReportConfigInterRAT::ReportConfigInterRAT(const ReportConfigInterRATTriggerType& reportConfigInterRATTriggerType, const ReportConfigInterRATMaxReportCells& reportConfigInterRATMaxReportCells, const ReportInterval& reportInterval, const ReportConfigInterRATreportAmount& reportConfigInterRATreportAmount) : Sequence(&theInfo) {
	setReportConfigInterRATTriggerType(reportConfigInterRATTriggerType);
	setReportConfigInterRATMaxReportCells(reportConfigInterRATMaxReportCells);
	setReportInterval(reportInterval);
	setReportConfigInterRATreportAmount(reportConfigInterRATreportAmount);
}

const void *ReportConfigToAddModReportConfig::choicesInfo[2] = {
	&ReportConfigEUTRA::theInfo,
	&ReportConfigInterRAT::theInfo,
};
const ReportConfigToAddModReportConfig::Info ReportConfigToAddModReportConfig::theInfo = {
	ReportConfigToAddModReportConfig::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ReportConfigToAddMod::itemsInfo[2] = {
	&ReportConfigId::theInfo,
	&ReportConfigToAddModReportConfig::theInfo,
};
bool ReportConfigToAddMod::itemsPres[2] = {
	1,
	1,
};
const ReportConfigToAddMod::Info ReportConfigToAddMod::theInfo = {
	ReportConfigToAddMod::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
ReportConfigToAddMod::ReportConfigToAddMod(const ReportConfigId& reportConfigId, const ReportConfigToAddModReportConfig& reportConfigToAddModReportConfig) : Sequence(&theInfo) {
	setReportConfigId(reportConfigId);
	setReportConfigToAddModReportConfig(reportConfigToAddModReportConfig);
}

const void *MeasIdToAddMod::itemsInfo[3] = {
	&MeasId::theInfo,
	&MeasObjectId::theInfo,
	&ReportConfigId::theInfo,
};
bool MeasIdToAddMod::itemsPres[3] = {
	1,
	1,
	1,
};
const MeasIdToAddMod::Info MeasIdToAddMod::theInfo = {
	MeasIdToAddMod::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};
MeasIdToAddMod::MeasIdToAddMod(const MeasId& measId, const MeasObjectId& measObjectId, const ReportConfigId& reportConfigId) : Sequence(&theInfo) {
	setMeasId(measId);
	setMeasObjectId(measObjectId);
	setReportConfigId(reportConfigId);
}

const void *QuantityConfigEUTRA::itemsInfo[2] = {
	&FilterCoefficient::theInfo,
	&FilterCoefficient::theInfo,
};
bool QuantityConfigEUTRA::itemsPres[2] = {
	0,
	0,
};
const QuantityConfigEUTRA::Info QuantityConfigEUTRA::theInfo = {
	QuantityConfigEUTRA::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *QuantityConfigUTRA::itemsInfo[3] = {
	&QuantityConfigUTRAmeasQuantityUTRA_FDD::theInfo,
	&QuantityConfigUTRAmeasQuantityUTRA_TDD::theInfo,
	&FilterCoefficient::theInfo,
};
bool QuantityConfigUTRA::itemsPres[3] = {
	1,
	1,
	0,
};
const QuantityConfigUTRA::Info QuantityConfigUTRA::theInfo = {
	QuantityConfigUTRA::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};
QuantityConfigUTRA::QuantityConfigUTRA(const QuantityConfigUTRAmeasQuantityUTRA_FDD& quantityConfigUTRAmeasQuantityUTRA_FDD, const QuantityConfigUTRAmeasQuantityUTRA_TDD& quantityConfigUTRAmeasQuantityUTRA_TDD) : Sequence(&theInfo) {
	setQuantityConfigUTRAmeasQuantityUTRA_FDD(quantityConfigUTRAmeasQuantityUTRA_FDD);
	setQuantityConfigUTRAmeasQuantityUTRA_TDD(quantityConfigUTRAmeasQuantityUTRA_TDD);
}

const void *QuantityConfigGERAN::itemsInfo[2] = {
	&QuantityConfigGERANmeasQuantityGERAN::theInfo,
	&FilterCoefficient::theInfo,
};
bool QuantityConfigGERAN::itemsPres[2] = {
	1,
	0,
};
const QuantityConfigGERAN::Info QuantityConfigGERAN::theInfo = {
	QuantityConfigGERAN::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};
QuantityConfigGERAN::QuantityConfigGERAN(const QuantityConfigGERANmeasQuantityGERAN& quantityConfigGERANmeasQuantityGERAN) : Sequence(&theInfo) {
	setQuantityConfigGERANmeasQuantityGERAN(quantityConfigGERANmeasQuantityGERAN);
}

const void *QuantityConfigCDMA2000::itemsInfo[1] = {
	&QuantityConfigCDMA2000measQuantityCDMA2000::theInfo,
};
bool QuantityConfigCDMA2000::itemsPres[1] = {
	1,
};
const QuantityConfigCDMA2000::Info QuantityConfigCDMA2000::theInfo = {
	QuantityConfigCDMA2000::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
QuantityConfigCDMA2000::QuantityConfigCDMA2000(const QuantityConfigCDMA2000measQuantityCDMA2000& quantityConfigCDMA2000measQuantityCDMA2000) : Sequence(&theInfo) {
	setQuantityConfigCDMA2000measQuantityCDMA2000(quantityConfigCDMA2000measQuantityCDMA2000);
}

const void *QuantityConfigUTRAv1020::itemsInfo[1] = {
	&FilterCoefficient::theInfo,
};
bool QuantityConfigUTRAv1020::itemsPres[1] = {
	0,
};
const QuantityConfigUTRAv1020::Info QuantityConfigUTRAv1020::theInfo = {
	QuantityConfigUTRAv1020::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *QuantityConfig::itemsInfo[5] = {
	&QuantityConfigEUTRA::theInfo,
	&QuantityConfigUTRA::theInfo,
	&QuantityConfigGERAN::theInfo,
	&QuantityConfigCDMA2000::theInfo,
	&QuantityConfigUTRAv1020::theInfo,
};
bool QuantityConfig::itemsPres[5] = {
	0,
	0,
	0,
	0,
	0,
};
const QuantityConfig::Info QuantityConfig::theInfo = {
	QuantityConfig::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	4, 4, 1
};

const void *MeasGapConfigSetupGapOffset::choicesInfo[2] = {
	&MeasGapConfigSetupGapOffsetGp0::theInfo,
	&MeasGapConfigSetupGapOffsetGp1::theInfo,
};
const MeasGapConfigSetupGapOffset::Info MeasGapConfigSetupGapOffset::theInfo = {
	MeasGapConfigSetupGapOffset::create,
	CHOICE,
	0,
	true,
	choicesInfo,
	1
};

const void *MeasGapConfigSetup::itemsInfo[1] = {
	&MeasGapConfigSetupGapOffset::theInfo,
};
bool MeasGapConfigSetup::itemsPres[1] = {
	1,
};
const MeasGapConfigSetup::Info MeasGapConfigSetup::theInfo = {
	MeasGapConfigSetup::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
MeasGapConfigSetup::MeasGapConfigSetup(const MeasGapConfigSetupGapOffset& measGapConfigSetupGapOffset) : Sequence(&theInfo) {
	setMeasGapConfigSetupGapOffset(measGapConfigSetupGapOffset);
}

const void *MeasGapConfig::choicesInfo[2] = {
	&MeasGapConfigRelease::theInfo,
	&MeasGapConfigSetup::theInfo,
};
const MeasGapConfig::Info MeasGapConfig::theInfo = {
	MeasGapConfig::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *MeasConfigSpeedStateParsSetup::itemsInfo[2] = {
	&MobilityStateParameters::theInfo,
	&SpeedStateScaleFactors::theInfo,
};
bool MeasConfigSpeedStateParsSetup::itemsPres[2] = {
	1,
	1,
};
const MeasConfigSpeedStateParsSetup::Info MeasConfigSpeedStateParsSetup::theInfo = {
	MeasConfigSpeedStateParsSetup::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
MeasConfigSpeedStateParsSetup::MeasConfigSpeedStateParsSetup(const MobilityStateParameters& mobilityStateParameters, const SpeedStateScaleFactors& timeToTriggerSF) : Sequence(&theInfo) {
	setMobilityStateParameters(mobilityStateParameters);
	setTimeToTriggerSF(timeToTriggerSF);
}

const void *MeasConfigSpeedStatePars::choicesInfo[2] = {
	&MeasConfigSpeedStateParsRelease::theInfo,
	&MeasConfigSpeedStateParsSetup::theInfo,
};
const MeasConfigSpeedStatePars::Info MeasConfigSpeedStatePars::theInfo = {
	MeasConfigSpeedStatePars::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *MeasConfig::itemsInfo[11] = {
	&MeasObjectToRemoveList::theInfo,
	&MeasObjectToAddModList::theInfo,
	&ReportConfigToRemoveList::theInfo,
	&ReportConfigToAddModList::theInfo,
	&MeasIdToRemoveList::theInfo,
	&MeasIdToAddModList::theInfo,
	&QuantityConfig::theInfo,
	&MeasGapConfig::theInfo,
	&RSRPRange::theInfo,
	&PreRegistrationInfoHRPD::theInfo,
	&MeasConfigSpeedStatePars::theInfo,
};
bool MeasConfig::itemsPres[11] = {
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
const MeasConfig::Info MeasConfig::theInfo = {
	MeasConfig::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	11, 11, 0
};

const void *CarrierFreqEUTRA::itemsInfo[2] = {
	&ARFCNValueEUTRA::theInfo,
	&ARFCNValueEUTRA::theInfo,
};
bool CarrierFreqEUTRA::itemsPres[2] = {
	1,
	0,
};
const CarrierFreqEUTRA::Info CarrierFreqEUTRA::theInfo = {
	CarrierFreqEUTRA::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};
CarrierFreqEUTRA::CarrierFreqEUTRA(const ARFCNValueEUTRA& dlCarrierFreq) : Sequence(&theInfo) {
	setDlCarrierFreq(dlCarrierFreq);
}

const void *CarrierBandwidthEUTRA::itemsInfo[2] = {
	&CarrierBandwidthEUTRAdl_Bandwidth::theInfo,
	&CarrierBandwidthEUTRAul_Bandwidth::theInfo,
};
bool CarrierBandwidthEUTRA::itemsPres[2] = {
	1,
	0,
};
const CarrierBandwidthEUTRA::Info CarrierBandwidthEUTRA::theInfo = {
	CarrierBandwidthEUTRA::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};
CarrierBandwidthEUTRA::CarrierBandwidthEUTRA(const CarrierBandwidthEUTRAdl_Bandwidth& carrierBandwidthEUTRAdl_Bandwidth) : Sequence(&theInfo) {
	setCarrierBandwidthEUTRAdl_Bandwidth(carrierBandwidthEUTRAdl_Bandwidth);
}

const void *PRACHConfig::itemsInfo[2] = {
	&PRACHConfigRootSequenceIndex::theInfo,
	&PRACHConfigInfo::theInfo,
};
bool PRACHConfig::itemsPres[2] = {
	1,
	0,
};
const PRACHConfig::Info PRACHConfig::theInfo = {
	PRACHConfig::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};
PRACHConfig::PRACHConfig(const PRACHConfigRootSequenceIndex& pRACHConfigRootSequenceIndex) : Sequence(&theInfo) {
	setPRACHConfigRootSequenceIndex(pRACHConfigRootSequenceIndex);
}

const void *AntennaInfoCommon::itemsInfo[1] = {
	&AntennaInfoCommonantennaPortsCount::theInfo,
};
bool AntennaInfoCommon::itemsPres[1] = {
	1,
};
const AntennaInfoCommon::Info AntennaInfoCommon::theInfo = {
	AntennaInfoCommon::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
AntennaInfoCommon::AntennaInfoCommon(const AntennaInfoCommonantennaPortsCount& antennaInfoCommonantennaPortsCount) : Sequence(&theInfo) {
	setAntennaInfoCommonantennaPortsCount(antennaInfoCommonantennaPortsCount);
}

const void *RadioResourceConfigCommon::itemsInfo[13] = {
	&RACHConfigCommon::theInfo,
	&PRACHConfig::theInfo,
	&PDSCHConfigCommon::theInfo,
	&PUSCHConfigCommon::theInfo,
	&PHICHConfig::theInfo,
	&PUCCHConfigCommon::theInfo,
	&SoundingRSULConfigCommon::theInfo,
	&UplinkPowerControlCommon::theInfo,
	&AntennaInfoCommon::theInfo,
	&PMax::theInfo,
	&TDDConfig::theInfo,
	&ULCyclicPrefixLength::theInfo,
	&UplinkPowerControlCommonv1020::theInfo,
};
bool RadioResourceConfigCommon::itemsPres[13] = {
	0,
	1,
	0,
	1,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	1,
	0,
};
const RadioResourceConfigCommon::Info RadioResourceConfigCommon::theInfo = {
	RadioResourceConfigCommon::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	12, 9, 1
};
RadioResourceConfigCommon::RadioResourceConfigCommon(const PRACHConfig& prachConfig, const PUSCHConfigCommon& puschConfigCommon, const ULCyclicPrefixLength& ulCyclicPrefixLength) : Sequence(&theInfo) {
	setPrachConfig(prachConfig);
	setPuschConfigCommon(puschConfigCommon);
	setUlCyclicPrefixLength(ulCyclicPrefixLength);
}

const void *RACHConfigDedicated::itemsInfo[2] = {
	&RACHConfigDedicatedRaPreambleIndex::theInfo,
	&RACHConfigDedicatedRaPRACHMaskIndex::theInfo,
};
bool RACHConfigDedicated::itemsPres[2] = {
	1,
	1,
};
const RACHConfigDedicated::Info RACHConfigDedicated::theInfo = {
	RACHConfigDedicated::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
RACHConfigDedicated::RACHConfigDedicated(const RACHConfigDedicatedRaPreambleIndex& rACHConfigDedicatedRaPreambleIndex, const RACHConfigDedicatedRaPRACHMaskIndex& rACHConfigDedicatedRaPRACHMaskIndex) : Sequence(&theInfo) {
	setRACHConfigDedicatedRaPreambleIndex(rACHConfigDedicatedRaPreambleIndex);
	setRACHConfigDedicatedRaPRACHMaskIndex(rACHConfigDedicatedRaPRACHMaskIndex);
}

const void *MobilityControlInfo::itemsInfo[8] = {
	&PhysCellId::theInfo,
	&CarrierFreqEUTRA::theInfo,
	&CarrierBandwidthEUTRA::theInfo,
	&AdditionalSpectrumEmission::theInfo,
	&MobilityControlInfot304::theInfo,
	&CRNTI::theInfo,
	&RadioResourceConfigCommon::theInfo,
	&RACHConfigDedicated::theInfo,
};
bool MobilityControlInfo::itemsPres[8] = {
	1,
	0,
	0,
	0,
	1,
	1,
	1,
	0,
};
const MobilityControlInfo::Info MobilityControlInfo::theInfo = {
	MobilityControlInfo::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	8, 4, 0
};
MobilityControlInfo::MobilityControlInfo(const PhysCellId& targetPhysCellId, const MobilityControlInfot304& mobilityControlInfot304, const CRNTI& newUEIdentity, const RadioResourceConfigCommon& radioResourceConfigCommon) : Sequence(&theInfo) {
	setTargetPhysCellId(targetPhysCellId);
	setMobilityControlInfot304(mobilityControlInfot304);
	setNewUEIdentity(newUEIdentity);
	setRadioResourceConfigCommon(radioResourceConfigCommon);
}

const void *SecurityAlgorithmConfig::itemsInfo[2] = {
	&SecurityAlgorithmConfigcipheringAlgorithm::theInfo,
	&SecurityAlgorithmConfigintegrityProtAlgorithm::theInfo,
};
bool SecurityAlgorithmConfig::itemsPres[2] = {
	1,
	1,
};
const SecurityAlgorithmConfig::Info SecurityAlgorithmConfig::theInfo = {
	SecurityAlgorithmConfig::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
SecurityAlgorithmConfig::SecurityAlgorithmConfig(const SecurityAlgorithmConfigcipheringAlgorithm& securityAlgorithmConfigcipheringAlgorithm, const SecurityAlgorithmConfigintegrityProtAlgorithm& securityAlgorithmConfigintegrityProtAlgorithm) : Sequence(&theInfo) {
	setSecurityAlgorithmConfigcipheringAlgorithm(securityAlgorithmConfigcipheringAlgorithm);
	setSecurityAlgorithmConfigintegrityProtAlgorithm(securityAlgorithmConfigintegrityProtAlgorithm);
}

const void *SecurityConfigHOHandoverTypeIntraLTE::itemsInfo[3] = {
	&SecurityAlgorithmConfig::theInfo,
	&SecurityConfigHOHandoverTypeIntraLTEKeyChangeIndicator::theInfo,
	&NextHopChainingCount::theInfo,
};
bool SecurityConfigHOHandoverTypeIntraLTE::itemsPres[3] = {
	0,
	1,
	1,
};
const SecurityConfigHOHandoverTypeIntraLTE::Info SecurityConfigHOHandoverTypeIntraLTE::theInfo = {
	SecurityConfigHOHandoverTypeIntraLTE::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};
SecurityConfigHOHandoverTypeIntraLTE::SecurityConfigHOHandoverTypeIntraLTE(const SecurityConfigHOHandoverTypeIntraLTEKeyChangeIndicator& securityConfigHOHandoverTypeIntraLTEKeyChangeIndicator, const NextHopChainingCount& nextHopChainingCount) : Sequence(&theInfo) {
	setSecurityConfigHOHandoverTypeIntraLTEKeyChangeIndicator(securityConfigHOHandoverTypeIntraLTEKeyChangeIndicator);
	setNextHopChainingCount(nextHopChainingCount);
}

const void *SecurityConfigHOHandoverTypeInterRAT::itemsInfo[2] = {
	&SecurityAlgorithmConfig::theInfo,
	&SecurityConfigHOHandoverTypeInterRATNasSecurityParamToEUTRA::theInfo,
};
bool SecurityConfigHOHandoverTypeInterRAT::itemsPres[2] = {
	1,
	1,
};
const SecurityConfigHOHandoverTypeInterRAT::Info SecurityConfigHOHandoverTypeInterRAT::theInfo = {
	SecurityConfigHOHandoverTypeInterRAT::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
SecurityConfigHOHandoverTypeInterRAT::SecurityConfigHOHandoverTypeInterRAT(const SecurityAlgorithmConfig& securityAlgorithmConfig, const SecurityConfigHOHandoverTypeInterRATNasSecurityParamToEUTRA& securityConfigHOHandoverTypeInterRATNasSecurityParamToEUTRA) : Sequence(&theInfo) {
	setSecurityAlgorithmConfig(securityAlgorithmConfig);
	setSecurityConfigHOHandoverTypeInterRATNasSecurityParamToEUTRA(securityConfigHOHandoverTypeInterRATNasSecurityParamToEUTRA);
}

const void *SecurityConfigHOHandoverType::choicesInfo[2] = {
	&SecurityConfigHOHandoverTypeIntraLTE::theInfo,
	&SecurityConfigHOHandoverTypeInterRAT::theInfo,
};
const SecurityConfigHOHandoverType::Info SecurityConfigHOHandoverType::theInfo = {
	SecurityConfigHOHandoverType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *SecurityConfigHO::itemsInfo[1] = {
	&SecurityConfigHOHandoverType::theInfo,
};
bool SecurityConfigHO::itemsPres[1] = {
	1,
};
const SecurityConfigHO::Info SecurityConfigHO::theInfo = {
	SecurityConfigHO::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
SecurityConfigHO::SecurityConfigHO(const SecurityConfigHOHandoverType& securityConfigHOHandoverType) : Sequence(&theInfo) {
	setSecurityConfigHOHandoverType(securityConfigHOHandoverType);
}

const void *ReportProximityConfigr9::itemsInfo[2] = {
	&ReportProximityConfigr9proximityIndicationEUTRA_r9::theInfo,
	&ReportProximityConfigr9proximityIndicationUTRA_r9::theInfo,
};
bool ReportProximityConfigr9::itemsPres[2] = {
	0,
	0,
};
const ReportProximityConfigr9::Info ReportProximityConfigr9::theInfo = {
	ReportProximityConfigr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *OtherConfigr9::itemsInfo[1] = {
	&ReportProximityConfigr9::theInfo,
};
bool OtherConfigr9::itemsPres[1] = {
	0,
};
const OtherConfigr9::Info OtherConfigr9::theInfo = {
	OtherConfigr9::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SCellToAddModr10CellIdentificationr10::itemsInfo[2] = {
	&PhysCellId::theInfo,
	&ARFCNValueEUTRA::theInfo,
};
bool SCellToAddModr10CellIdentificationr10::itemsPres[2] = {
	1,
	1,
};
const SCellToAddModr10CellIdentificationr10::Info SCellToAddModr10CellIdentificationr10::theInfo = {
	SCellToAddModr10CellIdentificationr10::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
SCellToAddModr10CellIdentificationr10::SCellToAddModr10CellIdentificationr10(const PhysCellId& physCellIdr10, const ARFCNValueEUTRA& dlCarrierFreqr10) : Sequence(&theInfo) {
	setPhysCellIdr10(physCellIdr10);
	setDlCarrierFreqr10(dlCarrierFreqr10);
}

const void *RadioResourceConfigCommonSCellr10NonULConfigurationr10::itemsInfo[6] = {
	&RadioResourceConfigCommonSCellr10NonULConfigurationr10dl_Bandwidth_r10::theInfo,
	&AntennaInfoCommon::theInfo,
	&MBSFNSubframeConfigList::theInfo,
	&PHICHConfig::theInfo,
	&PDSCHConfigCommon::theInfo,
	&TDDConfig::theInfo,
};
bool RadioResourceConfigCommonSCellr10NonULConfigurationr10::itemsPres[6] = {
	1,
	1,
	0,
	1,
	1,
	0,
};
const RadioResourceConfigCommonSCellr10NonULConfigurationr10::Info RadioResourceConfigCommonSCellr10NonULConfigurationr10::theInfo = {
	RadioResourceConfigCommonSCellr10NonULConfigurationr10::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 2, 0
};
RadioResourceConfigCommonSCellr10NonULConfigurationr10::RadioResourceConfigCommonSCellr10NonULConfigurationr10(const RadioResourceConfigCommonSCellr10NonULConfigurationr10dl_Bandwidth_r10& radioResourceConfigCommonSCellr10NonULConfigurationr10dl_Bandwidth_r10, const AntennaInfoCommon& antennaInfoCommonr10, const PHICHConfig& phichConfigr10, const PDSCHConfigCommon& pdschConfigCommonr10) : Sequence(&theInfo) {
	setRadioResourceConfigCommonSCellr10NonULConfigurationr10dl_Bandwidth_r10(radioResourceConfigCommonSCellr10NonULConfigurationr10dl_Bandwidth_r10);
	setAntennaInfoCommonr10(antennaInfoCommonr10);
	setPhichConfigr10(phichConfigr10);
	setPdschConfigCommonr10(pdschConfigCommonr10);
}

const void *RadioResourceConfigCommonSCellr10UlConfigurationr10UlFreqInfor10::itemsInfo[3] = {
	&ARFCNValueEUTRA::theInfo,
	&RadioResourceConfigCommonSCellr10UlConfigurationr10UlFreqInfor10ul_Bandwidth_r10::theInfo,
	&AdditionalSpectrumEmission::theInfo,
};
bool RadioResourceConfigCommonSCellr10UlConfigurationr10UlFreqInfor10::itemsPres[3] = {
	0,
	0,
	1,
};
const RadioResourceConfigCommonSCellr10UlConfigurationr10UlFreqInfor10::Info RadioResourceConfigCommonSCellr10UlConfigurationr10UlFreqInfor10::theInfo = {
	RadioResourceConfigCommonSCellr10UlConfigurationr10UlFreqInfor10::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};
RadioResourceConfigCommonSCellr10UlConfigurationr10UlFreqInfor10::RadioResourceConfigCommonSCellr10UlConfigurationr10UlFreqInfor10(const AdditionalSpectrumEmission& additionalSpectrumEmissionSCellr10) : Sequence(&theInfo) {
	setAdditionalSpectrumEmissionSCellr10(additionalSpectrumEmissionSCellr10);
}

const void *UplinkPowerControlCommonSCellr10::itemsInfo[2] = {
	&UplinkPowerControlCommonSCellr10P0NominalPUSCHr10::theInfo,
	&UplinkPowerControlCommonSCellr10alpha_r10::theInfo,
};
bool UplinkPowerControlCommonSCellr10::itemsPres[2] = {
	1,
	1,
};
const UplinkPowerControlCommonSCellr10::Info UplinkPowerControlCommonSCellr10::theInfo = {
	UplinkPowerControlCommonSCellr10::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
UplinkPowerControlCommonSCellr10::UplinkPowerControlCommonSCellr10(const UplinkPowerControlCommonSCellr10P0NominalPUSCHr10& uplinkPowerControlCommonSCellr10P0NominalPUSCHr10, const UplinkPowerControlCommonSCellr10alpha_r10& uplinkPowerControlCommonSCellr10alpha_r10) : Sequence(&theInfo) {
	setUplinkPowerControlCommonSCellr10P0NominalPUSCHr10(uplinkPowerControlCommonSCellr10P0NominalPUSCHr10);
	setUplinkPowerControlCommonSCellr10alpha_r10(uplinkPowerControlCommonSCellr10alpha_r10);
}

const void *PRACHConfigSCellr10::itemsInfo[1] = {
	&PRACHConfigSCellr10PrachConfigIndexr10::theInfo,
};
bool PRACHConfigSCellr10::itemsPres[1] = {
	1,
};
const PRACHConfigSCellr10::Info PRACHConfigSCellr10::theInfo = {
	PRACHConfigSCellr10::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
PRACHConfigSCellr10::PRACHConfigSCellr10(const PRACHConfigSCellr10PrachConfigIndexr10& pRACHConfigSCellr10PrachConfigIndexr10) : Sequence(&theInfo) {
	setPRACHConfigSCellr10PrachConfigIndexr10(pRACHConfigSCellr10PrachConfigIndexr10);
}

const void *RadioResourceConfigCommonSCellr10UlConfigurationr10::itemsInfo[7] = {
	&RadioResourceConfigCommonSCellr10UlConfigurationr10UlFreqInfor10::theInfo,
	&PMax::theInfo,
	&UplinkPowerControlCommonSCellr10::theInfo,
	&SoundingRSULConfigCommon::theInfo,
	&ULCyclicPrefixLength::theInfo,
	&PRACHConfigSCellr10::theInfo,
	&PUSCHConfigCommon::theInfo,
};
bool RadioResourceConfigCommonSCellr10UlConfigurationr10::itemsPres[7] = {
	1,
	0,
	1,
	1,
	1,
	0,
	1,
};
const RadioResourceConfigCommonSCellr10UlConfigurationr10::Info RadioResourceConfigCommonSCellr10UlConfigurationr10::theInfo = {
	RadioResourceConfigCommonSCellr10UlConfigurationr10::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	7, 2, 0
};
RadioResourceConfigCommonSCellr10UlConfigurationr10::RadioResourceConfigCommonSCellr10UlConfigurationr10(const RadioResourceConfigCommonSCellr10UlConfigurationr10UlFreqInfor10& radioResourceConfigCommonSCellr10UlConfigurationr10UlFreqInfor10, const UplinkPowerControlCommonSCellr10& uplinkPowerControlCommonSCellr10, const SoundingRSULConfigCommon& soundingRSULConfigCommonr10, const ULCyclicPrefixLength& ulCyclicPrefixLengthr10, const PUSCHConfigCommon& puschConfigCommonr10) : Sequence(&theInfo) {
	setRadioResourceConfigCommonSCellr10UlConfigurationr10UlFreqInfor10(radioResourceConfigCommonSCellr10UlConfigurationr10UlFreqInfor10);
	setUplinkPowerControlCommonSCellr10(uplinkPowerControlCommonSCellr10);
	setSoundingRSULConfigCommonr10(soundingRSULConfigCommonr10);
	setUlCyclicPrefixLengthr10(ulCyclicPrefixLengthr10);
	setPuschConfigCommonr10(puschConfigCommonr10);
}

const void *RadioResourceConfigCommonSCellr10::itemsInfo[2] = {
	&RadioResourceConfigCommonSCellr10NonULConfigurationr10::theInfo,
	&RadioResourceConfigCommonSCellr10UlConfigurationr10::theInfo,
};
bool RadioResourceConfigCommonSCellr10::itemsPres[2] = {
	1,
	0,
};
const RadioResourceConfigCommonSCellr10::Info RadioResourceConfigCommonSCellr10::theInfo = {
	RadioResourceConfigCommonSCellr10::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	2, 1, 0
};
RadioResourceConfigCommonSCellr10::RadioResourceConfigCommonSCellr10(const RadioResourceConfigCommonSCellr10NonULConfigurationr10& radioResourceConfigCommonSCellr10NonULConfigurationr10) : Sequence(&theInfo) {
	setRadioResourceConfigCommonSCellr10NonULConfigurationr10(radioResourceConfigCommonSCellr10NonULConfigurationr10);
}

const void *CrossCarrierSchedulingConfigr10SchedulingCellInfor10Ownr10::itemsInfo[1] = {
	&CrossCarrierSchedulingConfigr10SchedulingCellInfor10Ownr10CifPresencer10::theInfo,
};
bool CrossCarrierSchedulingConfigr10SchedulingCellInfor10Ownr10::itemsPres[1] = {
	1,
};
const CrossCarrierSchedulingConfigr10SchedulingCellInfor10Ownr10::Info CrossCarrierSchedulingConfigr10SchedulingCellInfor10Ownr10::theInfo = {
	CrossCarrierSchedulingConfigr10SchedulingCellInfor10Ownr10::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
CrossCarrierSchedulingConfigr10SchedulingCellInfor10Ownr10::CrossCarrierSchedulingConfigr10SchedulingCellInfor10Ownr10(const CrossCarrierSchedulingConfigr10SchedulingCellInfor10Ownr10CifPresencer10& crossCarrierSchedulingConfigr10SchedulingCellInfor10Ownr10CifPresencer10) : Sequence(&theInfo) {
	setCrossCarrierSchedulingConfigr10SchedulingCellInfor10Ownr10CifPresencer10(crossCarrierSchedulingConfigr10SchedulingCellInfor10Ownr10CifPresencer10);
}

const void *CrossCarrierSchedulingConfigr10SchedulingCellInfor10Otherr10::itemsInfo[2] = {
	&ServCellIndexr10::theInfo,
	&CrossCarrierSchedulingConfigr10SchedulingCellInfor10Otherr10PdschStartr10::theInfo,
};
bool CrossCarrierSchedulingConfigr10SchedulingCellInfor10Otherr10::itemsPres[2] = {
	1,
	1,
};
const CrossCarrierSchedulingConfigr10SchedulingCellInfor10Otherr10::Info CrossCarrierSchedulingConfigr10SchedulingCellInfor10Otherr10::theInfo = {
	CrossCarrierSchedulingConfigr10SchedulingCellInfor10Otherr10::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
CrossCarrierSchedulingConfigr10SchedulingCellInfor10Otherr10::CrossCarrierSchedulingConfigr10SchedulingCellInfor10Otherr10(const ServCellIndexr10& schedulingCellIdr10, const CrossCarrierSchedulingConfigr10SchedulingCellInfor10Otherr10PdschStartr10& crossCarrierSchedulingConfigr10SchedulingCellInfor10Otherr10PdschStartr10) : Sequence(&theInfo) {
	setSchedulingCellIdr10(schedulingCellIdr10);
	setCrossCarrierSchedulingConfigr10SchedulingCellInfor10Otherr10PdschStartr10(crossCarrierSchedulingConfigr10SchedulingCellInfor10Otherr10PdschStartr10);
}

const void *CrossCarrierSchedulingConfigr10SchedulingCellInfor10::choicesInfo[2] = {
	&CrossCarrierSchedulingConfigr10SchedulingCellInfor10Ownr10::theInfo,
	&CrossCarrierSchedulingConfigr10SchedulingCellInfor10Otherr10::theInfo,
};
const CrossCarrierSchedulingConfigr10SchedulingCellInfor10::Info CrossCarrierSchedulingConfigr10SchedulingCellInfor10::theInfo = {
	CrossCarrierSchedulingConfigr10SchedulingCellInfor10::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *CrossCarrierSchedulingConfigr10::itemsInfo[1] = {
	&CrossCarrierSchedulingConfigr10SchedulingCellInfor10::theInfo,
};
bool CrossCarrierSchedulingConfigr10::itemsPres[1] = {
	1,
};
const CrossCarrierSchedulingConfigr10::Info CrossCarrierSchedulingConfigr10::theInfo = {
	CrossCarrierSchedulingConfigr10::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
CrossCarrierSchedulingConfigr10::CrossCarrierSchedulingConfigr10(const CrossCarrierSchedulingConfigr10SchedulingCellInfor10& crossCarrierSchedulingConfigr10SchedulingCellInfor10) : Sequence(&theInfo) {
	setCrossCarrierSchedulingConfigr10SchedulingCellInfor10(crossCarrierSchedulingConfigr10SchedulingCellInfor10);
}

const void *PhysicalConfigDedicatedSCellr10NonULConfigurationr10::itemsInfo[4] = {
	&AntennaInfoDedicatedr10::theInfo,
	&CrossCarrierSchedulingConfigr10::theInfo,
	&CSIRSConfigr10::theInfo,
	&PDSCHConfigDedicated::theInfo,
};
bool PhysicalConfigDedicatedSCellr10NonULConfigurationr10::itemsPres[4] = {
	0,
	0,
	0,
	0,
};
const PhysicalConfigDedicatedSCellr10NonULConfigurationr10::Info PhysicalConfigDedicatedSCellr10NonULConfigurationr10::theInfo = {
	PhysicalConfigDedicatedSCellr10NonULConfigurationr10::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 4, 0
};

const void *PUSCHConfigDedicatedSCellr10::itemsInfo[2] = {
	&PUSCHConfigDedicatedSCellr10groupHoppingDisabled_r10::theInfo,
	&PUSCHConfigDedicatedSCellr10dmrs_WithOCC_Activated_r10::theInfo,
};
bool PUSCHConfigDedicatedSCellr10::itemsPres[2] = {
	0,
	0,
};
const PUSCHConfigDedicatedSCellr10::Info PUSCHConfigDedicatedSCellr10::theInfo = {
	PUSCHConfigDedicatedSCellr10::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *UplinkPowerControlDedicatedSCellr10::itemsInfo[7] = {
	&UplinkPowerControlDedicatedSCellr10P0UEPUSCHr10::theInfo,
	&UplinkPowerControlDedicatedSCellr10deltaMCS_Enabled_r10::theInfo,
	&UplinkPowerControlDedicatedSCellr10AccumulationEnabledr10::theInfo,
	&UplinkPowerControlDedicatedSCellr10PSRSOffsetr10::theInfo,
	&UplinkPowerControlDedicatedSCellr10PSRSOffsetApr10::theInfo,
	&FilterCoefficient::theInfo,
	&UplinkPowerControlDedicatedSCellr10pathlossReferenceLinking_r10::theInfo,
};
bool UplinkPowerControlDedicatedSCellr10::itemsPres[7] = {
	1,
	1,
	1,
	1,
	0,
	0,
	1,
};
const UplinkPowerControlDedicatedSCellr10::Info UplinkPowerControlDedicatedSCellr10::theInfo = {
	UplinkPowerControlDedicatedSCellr10::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	7, 2, 0
};
UplinkPowerControlDedicatedSCellr10::UplinkPowerControlDedicatedSCellr10(const UplinkPowerControlDedicatedSCellr10P0UEPUSCHr10& uplinkPowerControlDedicatedSCellr10P0UEPUSCHr10, const UplinkPowerControlDedicatedSCellr10deltaMCS_Enabled_r10& uplinkPowerControlDedicatedSCellr10deltaMCS_Enabled_r10, const UplinkPowerControlDedicatedSCellr10AccumulationEnabledr10& uplinkPowerControlDedicatedSCellr10AccumulationEnabledr10, const UplinkPowerControlDedicatedSCellr10PSRSOffsetr10& uplinkPowerControlDedicatedSCellr10PSRSOffsetr10, const UplinkPowerControlDedicatedSCellr10pathlossReferenceLinking_r10& uplinkPowerControlDedicatedSCellr10pathlossReferenceLinking_r10) : Sequence(&theInfo) {
	setUplinkPowerControlDedicatedSCellr10P0UEPUSCHr10(uplinkPowerControlDedicatedSCellr10P0UEPUSCHr10);
	setUplinkPowerControlDedicatedSCellr10deltaMCS_Enabled_r10(uplinkPowerControlDedicatedSCellr10deltaMCS_Enabled_r10);
	setUplinkPowerControlDedicatedSCellr10AccumulationEnabledr10(uplinkPowerControlDedicatedSCellr10AccumulationEnabledr10);
	setUplinkPowerControlDedicatedSCellr10PSRSOffsetr10(uplinkPowerControlDedicatedSCellr10PSRSOffsetr10);
	setUplinkPowerControlDedicatedSCellr10pathlossReferenceLinking_r10(uplinkPowerControlDedicatedSCellr10pathlossReferenceLinking_r10);
}

const void *CQIReportConfigSCellr10::itemsInfo[4] = {
	&CQIReportModeAperiodic::theInfo,
	&CQIReportConfigSCellr10NomPDSCHRSEPREOffsetr10::theInfo,
	&CQIReportPeriodicr10::theInfo,
	&CQIReportConfigSCellr10pmi_RI_Report_r10::theInfo,
};
bool CQIReportConfigSCellr10::itemsPres[4] = {
	0,
	1,
	0,
	0,
};
const CQIReportConfigSCellr10::Info CQIReportConfigSCellr10::theInfo = {
	CQIReportConfigSCellr10::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 3, 0
};
CQIReportConfigSCellr10::CQIReportConfigSCellr10(const CQIReportConfigSCellr10NomPDSCHRSEPREOffsetr10& cQIReportConfigSCellr10NomPDSCHRSEPREOffsetr10) : Sequence(&theInfo) {
	setCQIReportConfigSCellr10NomPDSCHRSEPREOffsetr10(cQIReportConfigSCellr10NomPDSCHRSEPREOffsetr10);
}

const void *PhysicalConfigDedicatedSCellr10UlConfigurationr10::itemsInfo[7] = {
	&AntennaInfoULr10::theInfo,
	&PUSCHConfigDedicatedSCellr10::theInfo,
	&UplinkPowerControlDedicatedSCellr10::theInfo,
	&CQIReportConfigSCellr10::theInfo,
	&SoundingRSULConfigDedicated::theInfo,
	&SoundingRSULConfigDedicatedv1020::theInfo,
	&SoundingRSULConfigDedicatedAperiodicr10::theInfo,
};
bool PhysicalConfigDedicatedSCellr10UlConfigurationr10::itemsPres[7] = {
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
const PhysicalConfigDedicatedSCellr10UlConfigurationr10::Info PhysicalConfigDedicatedSCellr10UlConfigurationr10::theInfo = {
	PhysicalConfigDedicatedSCellr10UlConfigurationr10::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	7, 7, 0
};

const void *PhysicalConfigDedicatedSCellr10::itemsInfo[2] = {
	&PhysicalConfigDedicatedSCellr10NonULConfigurationr10::theInfo,
	&PhysicalConfigDedicatedSCellr10UlConfigurationr10::theInfo,
};
bool PhysicalConfigDedicatedSCellr10::itemsPres[2] = {
	0,
	0,
};
const PhysicalConfigDedicatedSCellr10::Info PhysicalConfigDedicatedSCellr10::theInfo = {
	PhysicalConfigDedicatedSCellr10::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *RadioResourceConfigDedicatedSCellr10::itemsInfo[1] = {
	&PhysicalConfigDedicatedSCellr10::theInfo,
};
bool RadioResourceConfigDedicatedSCellr10::itemsPres[1] = {
	0,
};
const RadioResourceConfigDedicatedSCellr10::Info RadioResourceConfigDedicatedSCellr10::theInfo = {
	RadioResourceConfigDedicatedSCellr10::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SCellToAddModr10::itemsInfo[4] = {
	&SCellIndexr10::theInfo,
	&SCellToAddModr10CellIdentificationr10::theInfo,
	&RadioResourceConfigCommonSCellr10::theInfo,
	&RadioResourceConfigDedicatedSCellr10::theInfo,
};
bool SCellToAddModr10::itemsPres[4] = {
	1,
	0,
	0,
	0,
};
const SCellToAddModr10::Info SCellToAddModr10::theInfo = {
	SCellToAddModr10::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	4, 3, 0
};
SCellToAddModr10::SCellToAddModr10(const SCellIndexr10& sCellIndexr10) : Sequence(&theInfo) {
	setSCellIndexr10(sCellIndexr10);
}

const void *RRCConnectionReconfigurationv1020IEsNonCriticalExtension::itemsInfo[0] = {
};
bool RRCConnectionReconfigurationv1020IEsNonCriticalExtension::itemsPres[0] = {
};
const RRCConnectionReconfigurationv1020IEsNonCriticalExtension::Info RRCConnectionReconfigurationv1020IEsNonCriticalExtension::theInfo = {
	RRCConnectionReconfigurationv1020IEsNonCriticalExtension::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *RRCConnectionReconfigurationv1020IEs::itemsInfo[3] = {
	&SCellToReleaseListr10::theInfo,
	&SCellToAddModListr10::theInfo,
	&RRCConnectionReconfigurationv1020IEsNonCriticalExtension::theInfo,
};
bool RRCConnectionReconfigurationv1020IEs::itemsPres[3] = {
	0,
	0,
	0,
};
const RRCConnectionReconfigurationv1020IEs::Info RRCConnectionReconfigurationv1020IEs::theInfo = {
	RRCConnectionReconfigurationv1020IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *RRCConnectionReconfigurationv920IEs::itemsInfo[3] = {
	&OtherConfigr9::theInfo,
	&RRCConnectionReconfigurationv920IEsfullConfig_r9::theInfo,
	&RRCConnectionReconfigurationv1020IEs::theInfo,
};
bool RRCConnectionReconfigurationv920IEs::itemsPres[3] = {
	0,
	0,
	0,
};
const RRCConnectionReconfigurationv920IEs::Info RRCConnectionReconfigurationv920IEs::theInfo = {
	RRCConnectionReconfigurationv920IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *RRCConnectionReconfigurationv890IEs::itemsInfo[2] = {
	&RRCConnectionReconfigurationv890IEsLateNonCriticalExtension::theInfo,
	&RRCConnectionReconfigurationv920IEs::theInfo,
};
bool RRCConnectionReconfigurationv890IEs::itemsPres[2] = {
	0,
	0,
};
const RRCConnectionReconfigurationv890IEs::Info RRCConnectionReconfigurationv890IEs::theInfo = {
	RRCConnectionReconfigurationv890IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *RRCConnectionReconfigurationr8IEs::itemsInfo[6] = {
	&MeasConfig::theInfo,
	&MobilityControlInfo::theInfo,
	&RRCConnectionReconfigurationr8IEsDedicatedInfoNASList::theInfo,
	&RadioResourceConfigDedicated::theInfo,
	&SecurityConfigHO::theInfo,
	&RRCConnectionReconfigurationv890IEs::theInfo,
};
bool RRCConnectionReconfigurationr8IEs::itemsPres[6] = {
	0,
	0,
	0,
	0,
	0,
	0,
};
const RRCConnectionReconfigurationr8IEs::Info RRCConnectionReconfigurationr8IEs::theInfo = {
	RRCConnectionReconfigurationr8IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 6, 0
};

const void *RRCConnectionReconfigurationCriticalExtensionsC1::choicesInfo[8] = {
	&RRCConnectionReconfigurationr8IEs::theInfo,
	&RRCConnectionReconfigurationCriticalExtensionsC1Spare7::theInfo,
	&RRCConnectionReconfigurationCriticalExtensionsC1Spare6::theInfo,
	&RRCConnectionReconfigurationCriticalExtensionsC1Spare5::theInfo,
	&RRCConnectionReconfigurationCriticalExtensionsC1Spare4::theInfo,
	&RRCConnectionReconfigurationCriticalExtensionsC1Spare3::theInfo,
	&RRCConnectionReconfigurationCriticalExtensionsC1Spare2::theInfo,
	&RRCConnectionReconfigurationCriticalExtensionsC1Spare1::theInfo,
};
const RRCConnectionReconfigurationCriticalExtensionsC1::Info RRCConnectionReconfigurationCriticalExtensionsC1::theInfo = {
	RRCConnectionReconfigurationCriticalExtensionsC1::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	7
};

const void *RRCConnectionReconfigurationCriticalExtensionsCriticalExtensionsFuture::itemsInfo[0] = {
};
bool RRCConnectionReconfigurationCriticalExtensionsCriticalExtensionsFuture::itemsPres[0] = {
};
const RRCConnectionReconfigurationCriticalExtensionsCriticalExtensionsFuture::Info RRCConnectionReconfigurationCriticalExtensionsCriticalExtensionsFuture::theInfo = {
	RRCConnectionReconfigurationCriticalExtensionsCriticalExtensionsFuture::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *RRCConnectionReconfigurationCriticalExtensions::choicesInfo[2] = {
	&RRCConnectionReconfigurationCriticalExtensionsC1::theInfo,
	&RRCConnectionReconfigurationCriticalExtensionsCriticalExtensionsFuture::theInfo,
};
const RRCConnectionReconfigurationCriticalExtensions::Info RRCConnectionReconfigurationCriticalExtensions::theInfo = {
	RRCConnectionReconfigurationCriticalExtensions::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *RRCConnectionReconfiguration::itemsInfo[2] = {
	&RRCTransactionIdentifier::theInfo,
	&RRCConnectionReconfigurationCriticalExtensions::theInfo,
};
bool RRCConnectionReconfiguration::itemsPres[2] = {
	1,
	1,
};
const RRCConnectionReconfiguration::Info RRCConnectionReconfiguration::theInfo = {
	RRCConnectionReconfiguration::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
RRCConnectionReconfiguration::RRCConnectionReconfiguration(const RRCTransactionIdentifier& rrcTransactionIdentifier, const RRCConnectionReconfigurationCriticalExtensions& rRCConnectionReconfigurationCriticalExtensions) : Sequence(&theInfo) {
	setRrcTransactionIdentifier(rrcTransactionIdentifier);
	setRRCConnectionReconfigurationCriticalExtensions(rRCConnectionReconfigurationCriticalExtensions);
}

const void *RedirectedCarrierInfo::choicesInfo[7] = {
	&ARFCNValueEUTRA::theInfo,
	&CarrierFreqsGERAN::theInfo,
	&ARFCNValueUTRA::theInfo,
	&ARFCNValueUTRA::theInfo,
	&CarrierFreqCDMA2000::theInfo,
	&CarrierFreqCDMA2000::theInfo,
	&CarrierFreqListUTRATDDr10::theInfo,
};
const RedirectedCarrierInfo::Info RedirectedCarrierInfo::theInfo = {
	RedirectedCarrierInfo::create,
	CHOICE,
	0,
	true,
	choicesInfo,
	5
};

const void *FreqPriorityEUTRA::itemsInfo[2] = {
	&ARFCNValueEUTRA::theInfo,
	&CellReselectionPriority::theInfo,
};
bool FreqPriorityEUTRA::itemsPres[2] = {
	1,
	1,
};
const FreqPriorityEUTRA::Info FreqPriorityEUTRA::theInfo = {
	FreqPriorityEUTRA::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
FreqPriorityEUTRA::FreqPriorityEUTRA(const ARFCNValueEUTRA& carrierFreq, const CellReselectionPriority& cellReselectionPriority) : Sequence(&theInfo) {
	setCarrierFreq(carrierFreq);
	setCellReselectionPriority(cellReselectionPriority);
}

const void *FreqsPriorityGERAN::itemsInfo[2] = {
	&CarrierFreqsGERAN::theInfo,
	&CellReselectionPriority::theInfo,
};
bool FreqsPriorityGERAN::itemsPres[2] = {
	1,
	1,
};
const FreqsPriorityGERAN::Info FreqsPriorityGERAN::theInfo = {
	FreqsPriorityGERAN::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
FreqsPriorityGERAN::FreqsPriorityGERAN(const CarrierFreqsGERAN& carrierFreqs, const CellReselectionPriority& cellReselectionPriority) : Sequence(&theInfo) {
	setCarrierFreqs(carrierFreqs);
	setCellReselectionPriority(cellReselectionPriority);
}

const void *FreqPriorityUTRAFDD::itemsInfo[2] = {
	&ARFCNValueUTRA::theInfo,
	&CellReselectionPriority::theInfo,
};
bool FreqPriorityUTRAFDD::itemsPres[2] = {
	1,
	1,
};
const FreqPriorityUTRAFDD::Info FreqPriorityUTRAFDD::theInfo = {
	FreqPriorityUTRAFDD::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
FreqPriorityUTRAFDD::FreqPriorityUTRAFDD(const ARFCNValueUTRA& carrierFreq, const CellReselectionPriority& cellReselectionPriority) : Sequence(&theInfo) {
	setCarrierFreq(carrierFreq);
	setCellReselectionPriority(cellReselectionPriority);
}

const void *FreqPriorityUTRATDD::itemsInfo[2] = {
	&ARFCNValueUTRA::theInfo,
	&CellReselectionPriority::theInfo,
};
bool FreqPriorityUTRATDD::itemsPres[2] = {
	1,
	1,
};
const FreqPriorityUTRATDD::Info FreqPriorityUTRATDD::theInfo = {
	FreqPriorityUTRATDD::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
FreqPriorityUTRATDD::FreqPriorityUTRATDD(const ARFCNValueUTRA& carrierFreq, const CellReselectionPriority& cellReselectionPriority) : Sequence(&theInfo) {
	setCarrierFreq(carrierFreq);
	setCellReselectionPriority(cellReselectionPriority);
}

const void *BandClassPriorityHRPD::itemsInfo[2] = {
	&BandclassCDMA2000::theInfo,
	&CellReselectionPriority::theInfo,
};
bool BandClassPriorityHRPD::itemsPres[2] = {
	1,
	1,
};
const BandClassPriorityHRPD::Info BandClassPriorityHRPD::theInfo = {
	BandClassPriorityHRPD::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
BandClassPriorityHRPD::BandClassPriorityHRPD(const BandclassCDMA2000& bandClass, const CellReselectionPriority& cellReselectionPriority) : Sequence(&theInfo) {
	setBandClass(bandClass);
	setCellReselectionPriority(cellReselectionPriority);
}

const void *BandClassPriority1XRTT::itemsInfo[2] = {
	&BandclassCDMA2000::theInfo,
	&CellReselectionPriority::theInfo,
};
bool BandClassPriority1XRTT::itemsPres[2] = {
	1,
	1,
};
const BandClassPriority1XRTT::Info BandClassPriority1XRTT::theInfo = {
	BandClassPriority1XRTT::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
BandClassPriority1XRTT::BandClassPriority1XRTT(const BandclassCDMA2000& bandClass, const CellReselectionPriority& cellReselectionPriority) : Sequence(&theInfo) {
	setBandClass(bandClass);
	setCellReselectionPriority(cellReselectionPriority);
}

const void *IdleModeMobilityControlInfo::itemsInfo[7] = {
	&FreqPriorityListEUTRA::theInfo,
	&FreqsPriorityListGERAN::theInfo,
	&FreqPriorityListUTRAFDD::theInfo,
	&FreqPriorityListUTRATDD::theInfo,
	&BandClassPriorityListHRPD::theInfo,
	&BandClassPriorityList1XRTT::theInfo,
	&IdleModeMobilityControlInfot320::theInfo,
};
bool IdleModeMobilityControlInfo::itemsPres[7] = {
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
const IdleModeMobilityControlInfo::Info IdleModeMobilityControlInfo::theInfo = {
	IdleModeMobilityControlInfo::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	7, 7, 0
};

const void *CellInfoGERANr9::itemsInfo[3] = {
	&PhysCellIdGERAN::theInfo,
	&CarrierFreqGERAN::theInfo,
	&SystemInfoListGERAN::theInfo,
};
bool CellInfoGERANr9::itemsPres[3] = {
	1,
	1,
	1,
};
const CellInfoGERANr9::Info CellInfoGERANr9::theInfo = {
	CellInfoGERANr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};
CellInfoGERANr9::CellInfoGERANr9(const PhysCellIdGERAN& physCellIdr9, const CarrierFreqGERAN& carrierFreqr9, const SystemInfoListGERAN& systemInformationr9) : Sequence(&theInfo) {
	setPhysCellIdr9(physCellIdr9);
	setCarrierFreqr9(carrierFreqr9);
	setSystemInformationr9(systemInformationr9);
}

const void *CellInfoUTRAFDDr9::itemsInfo[2] = {
	&PhysCellIdUTRAFDD::theInfo,
	&CellInfoUTRAFDDr9UtraBCCHContainerr9::theInfo,
};
bool CellInfoUTRAFDDr9::itemsPres[2] = {
	1,
	1,
};
const CellInfoUTRAFDDr9::Info CellInfoUTRAFDDr9::theInfo = {
	CellInfoUTRAFDDr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
CellInfoUTRAFDDr9::CellInfoUTRAFDDr9(const PhysCellIdUTRAFDD& physCellIdr9, const CellInfoUTRAFDDr9UtraBCCHContainerr9& cellInfoUTRAFDDr9UtraBCCHContainerr9) : Sequence(&theInfo) {
	setPhysCellIdr9(physCellIdr9);
	setCellInfoUTRAFDDr9UtraBCCHContainerr9(cellInfoUTRAFDDr9UtraBCCHContainerr9);
}

const void *CellInfoUTRATDDr9::itemsInfo[2] = {
	&PhysCellIdUTRATDD::theInfo,
	&CellInfoUTRATDDr9UtraBCCHContainerr9::theInfo,
};
bool CellInfoUTRATDDr9::itemsPres[2] = {
	1,
	1,
};
const CellInfoUTRATDDr9::Info CellInfoUTRATDDr9::theInfo = {
	CellInfoUTRATDDr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
CellInfoUTRATDDr9::CellInfoUTRATDDr9(const PhysCellIdUTRATDD& physCellIdr9, const CellInfoUTRATDDr9UtraBCCHContainerr9& cellInfoUTRATDDr9UtraBCCHContainerr9) : Sequence(&theInfo) {
	setPhysCellIdr9(physCellIdr9);
	setCellInfoUTRATDDr9UtraBCCHContainerr9(cellInfoUTRATDDr9UtraBCCHContainerr9);
}

const void *CellInfoUTRATDDr10::itemsInfo[3] = {
	&PhysCellIdUTRATDD::theInfo,
	&ARFCNValueUTRA::theInfo,
	&CellInfoUTRATDDr10UtraBCCHContainerr10::theInfo,
};
bool CellInfoUTRATDDr10::itemsPres[3] = {
	1,
	1,
	1,
};
const CellInfoUTRATDDr10::Info CellInfoUTRATDDr10::theInfo = {
	CellInfoUTRATDDr10::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};
CellInfoUTRATDDr10::CellInfoUTRATDDr10(const PhysCellIdUTRATDD& physCellIdr10, const ARFCNValueUTRA& carrierFreqr10, const CellInfoUTRATDDr10UtraBCCHContainerr10& cellInfoUTRATDDr10UtraBCCHContainerr10) : Sequence(&theInfo) {
	setPhysCellIdr10(physCellIdr10);
	setCarrierFreqr10(carrierFreqr10);
	setCellInfoUTRATDDr10UtraBCCHContainerr10(cellInfoUTRATDDr10UtraBCCHContainerr10);
}

const void *RRCConnectionReleasev920IEsCellInfoListr9::choicesInfo[4] = {
	&CellInfoListGERANr9::theInfo,
	&CellInfoListUTRAFDDr9::theInfo,
	&CellInfoListUTRATDDr9::theInfo,
	&CellInfoListUTRATDDr10::theInfo,
};
const RRCConnectionReleasev920IEsCellInfoListr9::Info RRCConnectionReleasev920IEsCellInfoListr9::theInfo = {
	RRCConnectionReleasev920IEsCellInfoListr9::create,
	CHOICE,
	0,
	true,
	choicesInfo,
	2
};

const void *RRCConnectionReleasev1020IEsNonCriticalExtension::itemsInfo[0] = {
};
bool RRCConnectionReleasev1020IEsNonCriticalExtension::itemsPres[0] = {
};
const RRCConnectionReleasev1020IEsNonCriticalExtension::Info RRCConnectionReleasev1020IEsNonCriticalExtension::theInfo = {
	RRCConnectionReleasev1020IEsNonCriticalExtension::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *RRCConnectionReleasev1020IEs::itemsInfo[2] = {
	&RRCConnectionReleasev1020IEsExtendedWaitTimer10::theInfo,
	&RRCConnectionReleasev1020IEsNonCriticalExtension::theInfo,
};
bool RRCConnectionReleasev1020IEs::itemsPres[2] = {
	0,
	0,
};
const RRCConnectionReleasev1020IEs::Info RRCConnectionReleasev1020IEs::theInfo = {
	RRCConnectionReleasev1020IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *RRCConnectionReleasev920IEs::itemsInfo[2] = {
	&RRCConnectionReleasev920IEsCellInfoListr9::theInfo,
	&RRCConnectionReleasev1020IEs::theInfo,
};
bool RRCConnectionReleasev920IEs::itemsPres[2] = {
	0,
	0,
};
const RRCConnectionReleasev920IEs::Info RRCConnectionReleasev920IEs::theInfo = {
	RRCConnectionReleasev920IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *RRCConnectionReleasev890IEs::itemsInfo[2] = {
	&RRCConnectionReleasev890IEsLateNonCriticalExtension::theInfo,
	&RRCConnectionReleasev920IEs::theInfo,
};
bool RRCConnectionReleasev890IEs::itemsPres[2] = {
	0,
	0,
};
const RRCConnectionReleasev890IEs::Info RRCConnectionReleasev890IEs::theInfo = {
	RRCConnectionReleasev890IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *RRCConnectionReleaser8IEs::itemsInfo[4] = {
	&ReleaseCause::theInfo,
	&RedirectedCarrierInfo::theInfo,
	&IdleModeMobilityControlInfo::theInfo,
	&RRCConnectionReleasev890IEs::theInfo,
};
bool RRCConnectionReleaser8IEs::itemsPres[4] = {
	1,
	0,
	0,
	0,
};
const RRCConnectionReleaser8IEs::Info RRCConnectionReleaser8IEs::theInfo = {
	RRCConnectionReleaser8IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 3, 0
};
RRCConnectionReleaser8IEs::RRCConnectionReleaser8IEs(const ReleaseCause& releaseCause) : Sequence(&theInfo) {
	setReleaseCause(releaseCause);
}

const void *RRCConnectionReleaseCriticalExtensionsC1::choicesInfo[4] = {
	&RRCConnectionReleaser8IEs::theInfo,
	&RRCConnectionReleaseCriticalExtensionsC1Spare3::theInfo,
	&RRCConnectionReleaseCriticalExtensionsC1Spare2::theInfo,
	&RRCConnectionReleaseCriticalExtensionsC1Spare1::theInfo,
};
const RRCConnectionReleaseCriticalExtensionsC1::Info RRCConnectionReleaseCriticalExtensionsC1::theInfo = {
	RRCConnectionReleaseCriticalExtensionsC1::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	3
};

const void *RRCConnectionReleaseCriticalExtensionsCriticalExtensionsFuture::itemsInfo[0] = {
};
bool RRCConnectionReleaseCriticalExtensionsCriticalExtensionsFuture::itemsPres[0] = {
};
const RRCConnectionReleaseCriticalExtensionsCriticalExtensionsFuture::Info RRCConnectionReleaseCriticalExtensionsCriticalExtensionsFuture::theInfo = {
	RRCConnectionReleaseCriticalExtensionsCriticalExtensionsFuture::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *RRCConnectionReleaseCriticalExtensions::choicesInfo[2] = {
	&RRCConnectionReleaseCriticalExtensionsC1::theInfo,
	&RRCConnectionReleaseCriticalExtensionsCriticalExtensionsFuture::theInfo,
};
const RRCConnectionReleaseCriticalExtensions::Info RRCConnectionReleaseCriticalExtensions::theInfo = {
	RRCConnectionReleaseCriticalExtensions::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *RRCConnectionRelease::itemsInfo[2] = {
	&RRCTransactionIdentifier::theInfo,
	&RRCConnectionReleaseCriticalExtensions::theInfo,
};
bool RRCConnectionRelease::itemsPres[2] = {
	1,
	1,
};
const RRCConnectionRelease::Info RRCConnectionRelease::theInfo = {
	RRCConnectionRelease::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
RRCConnectionRelease::RRCConnectionRelease(const RRCTransactionIdentifier& rrcTransactionIdentifier, const RRCConnectionReleaseCriticalExtensions& rRCConnectionReleaseCriticalExtensions) : Sequence(&theInfo) {
	setRrcTransactionIdentifier(rrcTransactionIdentifier);
	setRRCConnectionReleaseCriticalExtensions(rRCConnectionReleaseCriticalExtensions);
}

const void *SecurityConfigSMC::itemsInfo[1] = {
	&SecurityAlgorithmConfig::theInfo,
};
bool SecurityConfigSMC::itemsPres[1] = {
	1,
};
const SecurityConfigSMC::Info SecurityConfigSMC::theInfo = {
	SecurityConfigSMC::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
SecurityConfigSMC::SecurityConfigSMC(const SecurityAlgorithmConfig& securityAlgorithmConfig) : Sequence(&theInfo) {
	setSecurityAlgorithmConfig(securityAlgorithmConfig);
}

const void *SecurityModeCommandv8a0IEsNonCriticalExtension::itemsInfo[0] = {
};
bool SecurityModeCommandv8a0IEsNonCriticalExtension::itemsPres[0] = {
};
const SecurityModeCommandv8a0IEsNonCriticalExtension::Info SecurityModeCommandv8a0IEsNonCriticalExtension::theInfo = {
	SecurityModeCommandv8a0IEsNonCriticalExtension::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *SecurityModeCommandv8a0IEs::itemsInfo[2] = {
	&SecurityModeCommandv8a0IEsLateNonCriticalExtension::theInfo,
	&SecurityModeCommandv8a0IEsNonCriticalExtension::theInfo,
};
bool SecurityModeCommandv8a0IEs::itemsPres[2] = {
	0,
	0,
};
const SecurityModeCommandv8a0IEs::Info SecurityModeCommandv8a0IEs::theInfo = {
	SecurityModeCommandv8a0IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *SecurityModeCommandr8IEs::itemsInfo[2] = {
	&SecurityConfigSMC::theInfo,
	&SecurityModeCommandv8a0IEs::theInfo,
};
bool SecurityModeCommandr8IEs::itemsPres[2] = {
	1,
	0,
};
const SecurityModeCommandr8IEs::Info SecurityModeCommandr8IEs::theInfo = {
	SecurityModeCommandr8IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};
SecurityModeCommandr8IEs::SecurityModeCommandr8IEs(const SecurityConfigSMC& securityConfigSMC) : Sequence(&theInfo) {
	setSecurityConfigSMC(securityConfigSMC);
}

const void *SecurityModeCommandCriticalExtensionsC1::choicesInfo[4] = {
	&SecurityModeCommandr8IEs::theInfo,
	&SecurityModeCommandCriticalExtensionsC1Spare3::theInfo,
	&SecurityModeCommandCriticalExtensionsC1Spare2::theInfo,
	&SecurityModeCommandCriticalExtensionsC1Spare1::theInfo,
};
const SecurityModeCommandCriticalExtensionsC1::Info SecurityModeCommandCriticalExtensionsC1::theInfo = {
	SecurityModeCommandCriticalExtensionsC1::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	3
};

const void *SecurityModeCommandCriticalExtensionsCriticalExtensionsFuture::itemsInfo[0] = {
};
bool SecurityModeCommandCriticalExtensionsCriticalExtensionsFuture::itemsPres[0] = {
};
const SecurityModeCommandCriticalExtensionsCriticalExtensionsFuture::Info SecurityModeCommandCriticalExtensionsCriticalExtensionsFuture::theInfo = {
	SecurityModeCommandCriticalExtensionsCriticalExtensionsFuture::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *SecurityModeCommandCriticalExtensions::choicesInfo[2] = {
	&SecurityModeCommandCriticalExtensionsC1::theInfo,
	&SecurityModeCommandCriticalExtensionsCriticalExtensionsFuture::theInfo,
};
const SecurityModeCommandCriticalExtensions::Info SecurityModeCommandCriticalExtensions::theInfo = {
	SecurityModeCommandCriticalExtensions::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *SecurityModeCommand::itemsInfo[2] = {
	&RRCTransactionIdentifier::theInfo,
	&SecurityModeCommandCriticalExtensions::theInfo,
};
bool SecurityModeCommand::itemsPres[2] = {
	1,
	1,
};
const SecurityModeCommand::Info SecurityModeCommand::theInfo = {
	SecurityModeCommand::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
SecurityModeCommand::SecurityModeCommand(const RRCTransactionIdentifier& rrcTransactionIdentifier, const SecurityModeCommandCriticalExtensions& securityModeCommandCriticalExtensions) : Sequence(&theInfo) {
	setRrcTransactionIdentifier(rrcTransactionIdentifier);
	setSecurityModeCommandCriticalExtensions(securityModeCommandCriticalExtensions);
}

const void *UECapabilityEnquiryv8a0IEsNonCriticalExtension::itemsInfo[0] = {
};
bool UECapabilityEnquiryv8a0IEsNonCriticalExtension::itemsPres[0] = {
};
const UECapabilityEnquiryv8a0IEsNonCriticalExtension::Info UECapabilityEnquiryv8a0IEsNonCriticalExtension::theInfo = {
	UECapabilityEnquiryv8a0IEsNonCriticalExtension::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *UECapabilityEnquiryv8a0IEs::itemsInfo[2] = {
	&UECapabilityEnquiryv8a0IEsLateNonCriticalExtension::theInfo,
	&UECapabilityEnquiryv8a0IEsNonCriticalExtension::theInfo,
};
bool UECapabilityEnquiryv8a0IEs::itemsPres[2] = {
	0,
	0,
};
const UECapabilityEnquiryv8a0IEs::Info UECapabilityEnquiryv8a0IEs::theInfo = {
	UECapabilityEnquiryv8a0IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *UECapabilityEnquiryr8IEs::itemsInfo[2] = {
	&UECapabilityRequest::theInfo,
	&UECapabilityEnquiryv8a0IEs::theInfo,
};
bool UECapabilityEnquiryr8IEs::itemsPres[2] = {
	1,
	0,
};
const UECapabilityEnquiryr8IEs::Info UECapabilityEnquiryr8IEs::theInfo = {
	UECapabilityEnquiryr8IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};
UECapabilityEnquiryr8IEs::UECapabilityEnquiryr8IEs(const UECapabilityRequest& ueCapabilityRequest) : Sequence(&theInfo) {
	setUeCapabilityRequest(ueCapabilityRequest);
}

const void *UECapabilityEnquiryCriticalExtensionsC1::choicesInfo[4] = {
	&UECapabilityEnquiryr8IEs::theInfo,
	&UECapabilityEnquiryCriticalExtensionsC1Spare3::theInfo,
	&UECapabilityEnquiryCriticalExtensionsC1Spare2::theInfo,
	&UECapabilityEnquiryCriticalExtensionsC1Spare1::theInfo,
};
const UECapabilityEnquiryCriticalExtensionsC1::Info UECapabilityEnquiryCriticalExtensionsC1::theInfo = {
	UECapabilityEnquiryCriticalExtensionsC1::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	3
};

const void *UECapabilityEnquiryCriticalExtensionsCriticalExtensionsFuture::itemsInfo[0] = {
};
bool UECapabilityEnquiryCriticalExtensionsCriticalExtensionsFuture::itemsPres[0] = {
};
const UECapabilityEnquiryCriticalExtensionsCriticalExtensionsFuture::Info UECapabilityEnquiryCriticalExtensionsCriticalExtensionsFuture::theInfo = {
	UECapabilityEnquiryCriticalExtensionsCriticalExtensionsFuture::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *UECapabilityEnquiryCriticalExtensions::choicesInfo[2] = {
	&UECapabilityEnquiryCriticalExtensionsC1::theInfo,
	&UECapabilityEnquiryCriticalExtensionsCriticalExtensionsFuture::theInfo,
};
const UECapabilityEnquiryCriticalExtensions::Info UECapabilityEnquiryCriticalExtensions::theInfo = {
	UECapabilityEnquiryCriticalExtensions::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *UECapabilityEnquiry::itemsInfo[2] = {
	&RRCTransactionIdentifier::theInfo,
	&UECapabilityEnquiryCriticalExtensions::theInfo,
};
bool UECapabilityEnquiry::itemsPres[2] = {
	1,
	1,
};
const UECapabilityEnquiry::Info UECapabilityEnquiry::theInfo = {
	UECapabilityEnquiry::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
UECapabilityEnquiry::UECapabilityEnquiry(const RRCTransactionIdentifier& rrcTransactionIdentifier, const UECapabilityEnquiryCriticalExtensions& uECapabilityEnquiryCriticalExtensions) : Sequence(&theInfo) {
	setRrcTransactionIdentifier(rrcTransactionIdentifier);
	setUECapabilityEnquiryCriticalExtensions(uECapabilityEnquiryCriticalExtensions);
}

const void *DRBCountMSBInfo::itemsInfo[3] = {
	&DRBIdentity::theInfo,
	&DRBCountMSBInfoCountMSBUplink::theInfo,
	&DRBCountMSBInfoCountMSBDownlink::theInfo,
};
bool DRBCountMSBInfo::itemsPres[3] = {
	1,
	1,
	1,
};
const DRBCountMSBInfo::Info DRBCountMSBInfo::theInfo = {
	DRBCountMSBInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};
DRBCountMSBInfo::DRBCountMSBInfo(const DRBIdentity& drbIdentity, const DRBCountMSBInfoCountMSBUplink& dRBCountMSBInfoCountMSBUplink, const DRBCountMSBInfoCountMSBDownlink& dRBCountMSBInfoCountMSBDownlink) : Sequence(&theInfo) {
	setDrbIdentity(drbIdentity);
	setDRBCountMSBInfoCountMSBUplink(dRBCountMSBInfoCountMSBUplink);
	setDRBCountMSBInfoCountMSBDownlink(dRBCountMSBInfoCountMSBDownlink);
}

const void *CounterCheckv8a0IEsNonCriticalExtension::itemsInfo[0] = {
};
bool CounterCheckv8a0IEsNonCriticalExtension::itemsPres[0] = {
};
const CounterCheckv8a0IEsNonCriticalExtension::Info CounterCheckv8a0IEsNonCriticalExtension::theInfo = {
	CounterCheckv8a0IEsNonCriticalExtension::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *CounterCheckv8a0IEs::itemsInfo[2] = {
	&CounterCheckv8a0IEsLateNonCriticalExtension::theInfo,
	&CounterCheckv8a0IEsNonCriticalExtension::theInfo,
};
bool CounterCheckv8a0IEs::itemsPres[2] = {
	0,
	0,
};
const CounterCheckv8a0IEs::Info CounterCheckv8a0IEs::theInfo = {
	CounterCheckv8a0IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *CounterCheckr8IEs::itemsInfo[2] = {
	&DRBCountMSBInfoList::theInfo,
	&CounterCheckv8a0IEs::theInfo,
};
bool CounterCheckr8IEs::itemsPres[2] = {
	1,
	0,
};
const CounterCheckr8IEs::Info CounterCheckr8IEs::theInfo = {
	CounterCheckr8IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};
CounterCheckr8IEs::CounterCheckr8IEs(const DRBCountMSBInfoList& drbCountMSBInfoList) : Sequence(&theInfo) {
	setDrbCountMSBInfoList(drbCountMSBInfoList);
}

const void *CounterCheckCriticalExtensionsC1::choicesInfo[4] = {
	&CounterCheckr8IEs::theInfo,
	&CounterCheckCriticalExtensionsC1Spare3::theInfo,
	&CounterCheckCriticalExtensionsC1Spare2::theInfo,
	&CounterCheckCriticalExtensionsC1Spare1::theInfo,
};
const CounterCheckCriticalExtensionsC1::Info CounterCheckCriticalExtensionsC1::theInfo = {
	CounterCheckCriticalExtensionsC1::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	3
};

const void *CounterCheckCriticalExtensionsCriticalExtensionsFuture::itemsInfo[0] = {
};
bool CounterCheckCriticalExtensionsCriticalExtensionsFuture::itemsPres[0] = {
};
const CounterCheckCriticalExtensionsCriticalExtensionsFuture::Info CounterCheckCriticalExtensionsCriticalExtensionsFuture::theInfo = {
	CounterCheckCriticalExtensionsCriticalExtensionsFuture::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *CounterCheckCriticalExtensions::choicesInfo[2] = {
	&CounterCheckCriticalExtensionsC1::theInfo,
	&CounterCheckCriticalExtensionsCriticalExtensionsFuture::theInfo,
};
const CounterCheckCriticalExtensions::Info CounterCheckCriticalExtensions::theInfo = {
	CounterCheckCriticalExtensions::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *CounterCheck::itemsInfo[2] = {
	&RRCTransactionIdentifier::theInfo,
	&CounterCheckCriticalExtensions::theInfo,
};
bool CounterCheck::itemsPres[2] = {
	1,
	1,
};
const CounterCheck::Info CounterCheck::theInfo = {
	CounterCheck::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
CounterCheck::CounterCheck(const RRCTransactionIdentifier& rrcTransactionIdentifier, const CounterCheckCriticalExtensions& counterCheckCriticalExtensions) : Sequence(&theInfo) {
	setRrcTransactionIdentifier(rrcTransactionIdentifier);
	setCounterCheckCriticalExtensions(counterCheckCriticalExtensions);
}

const void *UEInformationRequestv1020IEsNonCriticalExtension::itemsInfo[0] = {
};
bool UEInformationRequestv1020IEsNonCriticalExtension::itemsPres[0] = {
};
const UEInformationRequestv1020IEsNonCriticalExtension::Info UEInformationRequestv1020IEsNonCriticalExtension::theInfo = {
	UEInformationRequestv1020IEsNonCriticalExtension::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *UEInformationRequestv1020IEs::itemsInfo[2] = {
	&UEInformationRequestv1020IEslogMeasReportReq_r10::theInfo,
	&UEInformationRequestv1020IEsNonCriticalExtension::theInfo,
};
bool UEInformationRequestv1020IEs::itemsPres[2] = {
	0,
	0,
};
const UEInformationRequestv1020IEs::Info UEInformationRequestv1020IEs::theInfo = {
	UEInformationRequestv1020IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *UEInformationRequestv930IEs::itemsInfo[2] = {
	&UEInformationRequestv930IEsLateNonCriticalExtension::theInfo,
	&UEInformationRequestv1020IEs::theInfo,
};
bool UEInformationRequestv930IEs::itemsPres[2] = {
	0,
	0,
};
const UEInformationRequestv930IEs::Info UEInformationRequestv930IEs::theInfo = {
	UEInformationRequestv930IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *UEInformationRequestr9IEs::itemsInfo[3] = {
	&UEInformationRequestr9IEsRachReportReqr9::theInfo,
	&UEInformationRequestr9IEsRlfReportReqr9::theInfo,
	&UEInformationRequestv930IEs::theInfo,
};
bool UEInformationRequestr9IEs::itemsPres[3] = {
	1,
	1,
	0,
};
const UEInformationRequestr9IEs::Info UEInformationRequestr9IEs::theInfo = {
	UEInformationRequestr9IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};
UEInformationRequestr9IEs::UEInformationRequestr9IEs(const UEInformationRequestr9IEsRachReportReqr9& uEInformationRequestr9IEsRachReportReqr9, const UEInformationRequestr9IEsRlfReportReqr9& uEInformationRequestr9IEsRlfReportReqr9) : Sequence(&theInfo) {
	setUEInformationRequestr9IEsRachReportReqr9(uEInformationRequestr9IEsRachReportReqr9);
	setUEInformationRequestr9IEsRlfReportReqr9(uEInformationRequestr9IEsRlfReportReqr9);
}

const void *UEInformationRequestr9CriticalExtensionsC1::choicesInfo[4] = {
	&UEInformationRequestr9IEs::theInfo,
	&UEInformationRequestr9CriticalExtensionsC1Spare3::theInfo,
	&UEInformationRequestr9CriticalExtensionsC1Spare2::theInfo,
	&UEInformationRequestr9CriticalExtensionsC1Spare1::theInfo,
};
const UEInformationRequestr9CriticalExtensionsC1::Info UEInformationRequestr9CriticalExtensionsC1::theInfo = {
	UEInformationRequestr9CriticalExtensionsC1::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	3
};

const void *UEInformationRequestr9CriticalExtensionsCriticalExtensionsFuture::itemsInfo[0] = {
};
bool UEInformationRequestr9CriticalExtensionsCriticalExtensionsFuture::itemsPres[0] = {
};
const UEInformationRequestr9CriticalExtensionsCriticalExtensionsFuture::Info UEInformationRequestr9CriticalExtensionsCriticalExtensionsFuture::theInfo = {
	UEInformationRequestr9CriticalExtensionsCriticalExtensionsFuture::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *UEInformationRequestr9CriticalExtensions::choicesInfo[2] = {
	&UEInformationRequestr9CriticalExtensionsC1::theInfo,
	&UEInformationRequestr9CriticalExtensionsCriticalExtensionsFuture::theInfo,
};
const UEInformationRequestr9CriticalExtensions::Info UEInformationRequestr9CriticalExtensions::theInfo = {
	UEInformationRequestr9CriticalExtensions::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *UEInformationRequestr9::itemsInfo[2] = {
	&RRCTransactionIdentifier::theInfo,
	&UEInformationRequestr9CriticalExtensions::theInfo,
};
bool UEInformationRequestr9::itemsPres[2] = {
	1,
	1,
};
const UEInformationRequestr9::Info UEInformationRequestr9::theInfo = {
	UEInformationRequestr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
UEInformationRequestr9::UEInformationRequestr9(const RRCTransactionIdentifier& rrcTransactionIdentifier, const UEInformationRequestr9CriticalExtensions& uEInformationRequestr9CriticalExtensions) : Sequence(&theInfo) {
	setRrcTransactionIdentifier(rrcTransactionIdentifier);
	setUEInformationRequestr9CriticalExtensions(uEInformationRequestr9CriticalExtensions);
}

const void *TraceReferencer10::itemsInfo[2] = {
	&PLMNIdentity::theInfo,
	&TraceReferencer10TraceIdr10::theInfo,
};
bool TraceReferencer10::itemsPres[2] = {
	1,
	1,
};
const TraceReferencer10::Info TraceReferencer10::theInfo = {
	TraceReferencer10::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
TraceReferencer10::TraceReferencer10(const PLMNIdentity& plmnIdentityr10, const TraceReferencer10TraceIdr10& traceReferencer10TraceIdr10) : Sequence(&theInfo) {
	setPlmnIdentityr10(plmnIdentityr10);
	setTraceReferencer10TraceIdr10(traceReferencer10TraceIdr10);
}

const void *CellGlobalIdEUTRA::itemsInfo[2] = {
	&PLMNIdentity::theInfo,
	&CellIdentity::theInfo,
};
bool CellGlobalIdEUTRA::itemsPres[2] = {
	1,
	1,
};
const CellGlobalIdEUTRA::Info CellGlobalIdEUTRA::theInfo = {
	CellGlobalIdEUTRA::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
CellGlobalIdEUTRA::CellGlobalIdEUTRA(const PLMNIdentity& plmnIdentity, const CellIdentity& cellIdentity) : Sequence(&theInfo) {
	setPlmnIdentity(plmnIdentity);
	setCellIdentity(cellIdentity);
}

const void *AreaConfigurationr10::choicesInfo[2] = {
	&CellGlobalIdListr10::theInfo,
	&TrackingAreaCodeListr10::theInfo,
};
const AreaConfigurationr10::Info AreaConfigurationr10::theInfo = {
	AreaConfigurationr10::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *LoggedMeasurementConfigurationr10IEsNonCriticalExtension::itemsInfo[0] = {
};
bool LoggedMeasurementConfigurationr10IEsNonCriticalExtension::itemsPres[0] = {
};
const LoggedMeasurementConfigurationr10IEsNonCriticalExtension::Info LoggedMeasurementConfigurationr10IEsNonCriticalExtension::theInfo = {
	LoggedMeasurementConfigurationr10IEsNonCriticalExtension::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *LoggedMeasurementConfigurationr10IEs::itemsInfo[8] = {
	&TraceReferencer10::theInfo,
	&LoggedMeasurementConfigurationr10IEsTraceRecordingSessionRefr10::theInfo,
	&LoggedMeasurementConfigurationr10IEsTceIdr10::theInfo,
	&AbsoluteTimeInfor10::theInfo,
	&AreaConfigurationr10::theInfo,
	&LoggingDurationr10::theInfo,
	&LoggingIntervalr10::theInfo,
	&LoggedMeasurementConfigurationr10IEsNonCriticalExtension::theInfo,
};
bool LoggedMeasurementConfigurationr10IEs::itemsPres[8] = {
	1,
	1,
	1,
	1,
	0,
	1,
	1,
	0,
};
const LoggedMeasurementConfigurationr10IEs::Info LoggedMeasurementConfigurationr10IEs::theInfo = {
	LoggedMeasurementConfigurationr10IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	8, 2, 0
};
LoggedMeasurementConfigurationr10IEs::LoggedMeasurementConfigurationr10IEs(const TraceReferencer10& traceReferencer10, const LoggedMeasurementConfigurationr10IEsTraceRecordingSessionRefr10& loggedMeasurementConfigurationr10IEsTraceRecordingSessionRefr10, const LoggedMeasurementConfigurationr10IEsTceIdr10& loggedMeasurementConfigurationr10IEsTceIdr10, const AbsoluteTimeInfor10& absoluteTimeInfor10, const LoggingDurationr10& loggingDurationr10, const LoggingIntervalr10& loggingIntervalr10) : Sequence(&theInfo) {
	setTraceReferencer10(traceReferencer10);
	setLoggedMeasurementConfigurationr10IEsTraceRecordingSessionRefr10(loggedMeasurementConfigurationr10IEsTraceRecordingSessionRefr10);
	setLoggedMeasurementConfigurationr10IEsTceIdr10(loggedMeasurementConfigurationr10IEsTceIdr10);
	setAbsoluteTimeInfor10(absoluteTimeInfor10);
	setLoggingDurationr10(loggingDurationr10);
	setLoggingIntervalr10(loggingIntervalr10);
}

const void *LoggedMeasurementConfigurationr10CriticalExtensionsC1::choicesInfo[4] = {
	&LoggedMeasurementConfigurationr10IEs::theInfo,
	&LoggedMeasurementConfigurationr10CriticalExtensionsC1Spare3::theInfo,
	&LoggedMeasurementConfigurationr10CriticalExtensionsC1Spare2::theInfo,
	&LoggedMeasurementConfigurationr10CriticalExtensionsC1Spare1::theInfo,
};
const LoggedMeasurementConfigurationr10CriticalExtensionsC1::Info LoggedMeasurementConfigurationr10CriticalExtensionsC1::theInfo = {
	LoggedMeasurementConfigurationr10CriticalExtensionsC1::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	3
};

const void *LoggedMeasurementConfigurationr10CriticalExtensionsCriticalExtensionsFuture::itemsInfo[0] = {
};
bool LoggedMeasurementConfigurationr10CriticalExtensionsCriticalExtensionsFuture::itemsPres[0] = {
};
const LoggedMeasurementConfigurationr10CriticalExtensionsCriticalExtensionsFuture::Info LoggedMeasurementConfigurationr10CriticalExtensionsCriticalExtensionsFuture::theInfo = {
	LoggedMeasurementConfigurationr10CriticalExtensionsCriticalExtensionsFuture::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *LoggedMeasurementConfigurationr10CriticalExtensions::choicesInfo[2] = {
	&LoggedMeasurementConfigurationr10CriticalExtensionsC1::theInfo,
	&LoggedMeasurementConfigurationr10CriticalExtensionsCriticalExtensionsFuture::theInfo,
};
const LoggedMeasurementConfigurationr10CriticalExtensions::Info LoggedMeasurementConfigurationr10CriticalExtensions::theInfo = {
	LoggedMeasurementConfigurationr10CriticalExtensions::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *LoggedMeasurementConfigurationr10::itemsInfo[1] = {
	&LoggedMeasurementConfigurationr10CriticalExtensions::theInfo,
};
bool LoggedMeasurementConfigurationr10::itemsPres[1] = {
	1,
};
const LoggedMeasurementConfigurationr10::Info LoggedMeasurementConfigurationr10::theInfo = {
	LoggedMeasurementConfigurationr10::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
LoggedMeasurementConfigurationr10::LoggedMeasurementConfigurationr10(const LoggedMeasurementConfigurationr10CriticalExtensions& loggedMeasurementConfigurationr10CriticalExtensions) : Sequence(&theInfo) {
	setLoggedMeasurementConfigurationr10CriticalExtensions(loggedMeasurementConfigurationr10CriticalExtensions);
}

const void *RNSystemInfor10::itemsInfo[2] = {
	&RNSystemInfor10SystemInformationBlockType1r10::theInfo,
	&SystemInformationBlockType2::theInfo,
};
bool RNSystemInfor10::itemsPres[2] = {
	0,
	0,
};
const RNSystemInfor10::Info RNSystemInfor10::theInfo = {
	RNSystemInfor10::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *RNSubframeConfigr10SubframeConfigPatternr10::choicesInfo[2] = {
	&RNSubframeConfigr10SubframeConfigPatternr10SubframeConfigPatternFDDr10::theInfo,
	&RNSubframeConfigr10SubframeConfigPatternr10SubframeConfigPatternTDDr10::theInfo,
};
const RNSubframeConfigr10SubframeConfigPatternr10::Info RNSubframeConfigr10SubframeConfigPatternr10::theInfo = {
	RNSubframeConfigr10SubframeConfigPatternr10::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *RNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10Type01r10::choicesInfo[6] = {
	&RNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10Type01r10Nrb6r10::theInfo,
	&RNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10Type01r10Nrb15r10::theInfo,
	&RNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10Type01r10Nrb25r10::theInfo,
	&RNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10Type01r10Nrb50r10::theInfo,
	&RNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10Type01r10Nrb75r10::theInfo,
	&RNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10Type01r10Nrb100r10::theInfo,
};
const RNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10Type01r10::Info RNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10Type01r10::theInfo = {
	RNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10Type01r10::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	5
};

const void *RNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10Type2r10::choicesInfo[6] = {
	&RNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10Type2r10Nrb6r10::theInfo,
	&RNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10Type2r10Nrb15r10::theInfo,
	&RNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10Type2r10Nrb25r10::theInfo,
	&RNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10Type2r10Nrb50r10::theInfo,
	&RNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10Type2r10Nrb75r10::theInfo,
	&RNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10Type2r10Nrb100r10::theInfo,
};
const RNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10Type2r10::Info RNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10Type2r10::theInfo = {
	RNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10Type2r10::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	5
};

const void *RNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10::choicesInfo[2] = {
	&RNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10Type01r10::theInfo,
	&RNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10Type2r10::theInfo,
};
const RNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10::Info RNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10::theInfo = {
	RNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10::create,
	CHOICE,
	0,
	true,
	choicesInfo,
	1
};

const void *RNSubframeConfigr10RpdcchConfigr10DemodulationRSr10::choicesInfo[2] = {
	&RNSubframeConfigr10RpdcchConfigr10DemodulationRSr10interleaving_r10::theInfo,
	&RNSubframeConfigr10RpdcchConfigr10DemodulationRSr10noInterleaving_r10::theInfo,
};
const RNSubframeConfigr10RpdcchConfigr10DemodulationRSr10::Info RNSubframeConfigr10RpdcchConfigr10DemodulationRSr10::theInfo = {
	RNSubframeConfigr10RpdcchConfigr10DemodulationRSr10::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *RNSubframeConfigr10RpdcchConfigr10PucchConfigr10TddChannelSelectionMultiplexingBundling::itemsInfo[1] = {
	&RNSubframeConfigr10RpdcchConfigr10PucchConfigr10TddChannelSelectionMultiplexingBundlingN1PUCCHANListr10::theInfo,
};
bool RNSubframeConfigr10RpdcchConfigr10PucchConfigr10TddChannelSelectionMultiplexingBundling::itemsPres[1] = {
	1,
};
const RNSubframeConfigr10RpdcchConfigr10PucchConfigr10TddChannelSelectionMultiplexingBundling::Info RNSubframeConfigr10RpdcchConfigr10PucchConfigr10TddChannelSelectionMultiplexingBundling::theInfo = {
	RNSubframeConfigr10RpdcchConfigr10PucchConfigr10TddChannelSelectionMultiplexingBundling::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
RNSubframeConfigr10RpdcchConfigr10PucchConfigr10TddChannelSelectionMultiplexingBundling::RNSubframeConfigr10RpdcchConfigr10PucchConfigr10TddChannelSelectionMultiplexingBundling(const RNSubframeConfigr10RpdcchConfigr10PucchConfigr10TddChannelSelectionMultiplexingBundlingN1PUCCHANListr10& rNSubframeConfigr10RpdcchConfigr10PucchConfigr10TddChannelSelectionMultiplexingBundlingN1PUCCHANListr10) : Sequence(&theInfo) {
	setRNSubframeConfigr10RpdcchConfigr10PucchConfigr10TddChannelSelectionMultiplexingBundlingN1PUCCHANListr10(rNSubframeConfigr10RpdcchConfigr10PucchConfigr10TddChannelSelectionMultiplexingBundlingN1PUCCHANListr10);
}

const void *RNSubframeConfigr10RpdcchConfigr10PucchConfigr10TddFallbackForFormat3::itemsInfo[2] = {
	&RNSubframeConfigr10RpdcchConfigr10PucchConfigr10TddFallbackForFormat3N1PUCCHANP0r10::theInfo,
	&RNSubframeConfigr10RpdcchConfigr10PucchConfigr10TddFallbackForFormat3N1PUCCHANP1r10::theInfo,
};
bool RNSubframeConfigr10RpdcchConfigr10PucchConfigr10TddFallbackForFormat3::itemsPres[2] = {
	1,
	0,
};
const RNSubframeConfigr10RpdcchConfigr10PucchConfigr10TddFallbackForFormat3::Info RNSubframeConfigr10RpdcchConfigr10PucchConfigr10TddFallbackForFormat3::theInfo = {
	RNSubframeConfigr10RpdcchConfigr10PucchConfigr10TddFallbackForFormat3::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};
RNSubframeConfigr10RpdcchConfigr10PucchConfigr10TddFallbackForFormat3::RNSubframeConfigr10RpdcchConfigr10PucchConfigr10TddFallbackForFormat3(const RNSubframeConfigr10RpdcchConfigr10PucchConfigr10TddFallbackForFormat3N1PUCCHANP0r10& rNSubframeConfigr10RpdcchConfigr10PucchConfigr10TddFallbackForFormat3N1PUCCHANP0r10) : Sequence(&theInfo) {
	setRNSubframeConfigr10RpdcchConfigr10PucchConfigr10TddFallbackForFormat3N1PUCCHANP0r10(rNSubframeConfigr10RpdcchConfigr10PucchConfigr10TddFallbackForFormat3N1PUCCHANP0r10);
}

const void *RNSubframeConfigr10RpdcchConfigr10PucchConfigr10Tdd::choicesInfo[2] = {
	&RNSubframeConfigr10RpdcchConfigr10PucchConfigr10TddChannelSelectionMultiplexingBundling::theInfo,
	&RNSubframeConfigr10RpdcchConfigr10PucchConfigr10TddFallbackForFormat3::theInfo,
};
const RNSubframeConfigr10RpdcchConfigr10PucchConfigr10Tdd::Info RNSubframeConfigr10RpdcchConfigr10PucchConfigr10Tdd::theInfo = {
	RNSubframeConfigr10RpdcchConfigr10PucchConfigr10Tdd::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *RNSubframeConfigr10RpdcchConfigr10PucchConfigr10Fdd::itemsInfo[2] = {
	&RNSubframeConfigr10RpdcchConfigr10PucchConfigr10FddN1PUCCHANP0r10::theInfo,
	&RNSubframeConfigr10RpdcchConfigr10PucchConfigr10FddN1PUCCHANP1r10::theInfo,
};
bool RNSubframeConfigr10RpdcchConfigr10PucchConfigr10Fdd::itemsPres[2] = {
	1,
	0,
};
const RNSubframeConfigr10RpdcchConfigr10PucchConfigr10Fdd::Info RNSubframeConfigr10RpdcchConfigr10PucchConfigr10Fdd::theInfo = {
	RNSubframeConfigr10RpdcchConfigr10PucchConfigr10Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};
RNSubframeConfigr10RpdcchConfigr10PucchConfigr10Fdd::RNSubframeConfigr10RpdcchConfigr10PucchConfigr10Fdd(const RNSubframeConfigr10RpdcchConfigr10PucchConfigr10FddN1PUCCHANP0r10& rNSubframeConfigr10RpdcchConfigr10PucchConfigr10FddN1PUCCHANP0r10) : Sequence(&theInfo) {
	setRNSubframeConfigr10RpdcchConfigr10PucchConfigr10FddN1PUCCHANP0r10(rNSubframeConfigr10RpdcchConfigr10PucchConfigr10FddN1PUCCHANP0r10);
}

const void *RNSubframeConfigr10RpdcchConfigr10PucchConfigr10::choicesInfo[2] = {
	&RNSubframeConfigr10RpdcchConfigr10PucchConfigr10Tdd::theInfo,
	&RNSubframeConfigr10RpdcchConfigr10PucchConfigr10Fdd::theInfo,
};
const RNSubframeConfigr10RpdcchConfigr10PucchConfigr10::Info RNSubframeConfigr10RpdcchConfigr10PucchConfigr10::theInfo = {
	RNSubframeConfigr10RpdcchConfigr10PucchConfigr10::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *RNSubframeConfigr10RpdcchConfigr10::itemsInfo[5] = {
	&RNSubframeConfigr10RpdcchConfigr10resourceAllocationType_r10::theInfo,
	&RNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10::theInfo,
	&RNSubframeConfigr10RpdcchConfigr10DemodulationRSr10::theInfo,
	&RNSubframeConfigr10RpdcchConfigr10PdschStartr10::theInfo,
	&RNSubframeConfigr10RpdcchConfigr10PucchConfigr10::theInfo,
};
bool RNSubframeConfigr10RpdcchConfigr10::itemsPres[5] = {
	1,
	1,
	1,
	1,
	1,
};
const RNSubframeConfigr10RpdcchConfigr10::Info RNSubframeConfigr10RpdcchConfigr10::theInfo = {
	RNSubframeConfigr10RpdcchConfigr10::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	5, 0, 0
};
RNSubframeConfigr10RpdcchConfigr10::RNSubframeConfigr10RpdcchConfigr10(const RNSubframeConfigr10RpdcchConfigr10resourceAllocationType_r10& rNSubframeConfigr10RpdcchConfigr10resourceAllocationType_r10, const RNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10& rNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10, const RNSubframeConfigr10RpdcchConfigr10DemodulationRSr10& rNSubframeConfigr10RpdcchConfigr10DemodulationRSr10, const RNSubframeConfigr10RpdcchConfigr10PdschStartr10& rNSubframeConfigr10RpdcchConfigr10PdschStartr10, const RNSubframeConfigr10RpdcchConfigr10PucchConfigr10& rNSubframeConfigr10RpdcchConfigr10PucchConfigr10) : Sequence(&theInfo) {
	setRNSubframeConfigr10RpdcchConfigr10resourceAllocationType_r10(rNSubframeConfigr10RpdcchConfigr10resourceAllocationType_r10);
	setRNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10(rNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10);
	setRNSubframeConfigr10RpdcchConfigr10DemodulationRSr10(rNSubframeConfigr10RpdcchConfigr10DemodulationRSr10);
	setRNSubframeConfigr10RpdcchConfigr10PdschStartr10(rNSubframeConfigr10RpdcchConfigr10PdschStartr10);
	setRNSubframeConfigr10RpdcchConfigr10PucchConfigr10(rNSubframeConfigr10RpdcchConfigr10PucchConfigr10);
}

const void *RNSubframeConfigr10::itemsInfo[2] = {
	&RNSubframeConfigr10SubframeConfigPatternr10::theInfo,
	&RNSubframeConfigr10RpdcchConfigr10::theInfo,
};
bool RNSubframeConfigr10::itemsPres[2] = {
	0,
	0,
};
const RNSubframeConfigr10::Info RNSubframeConfigr10::theInfo = {
	RNSubframeConfigr10::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *RNReconfigurationr10IEsNonCriticalExtension::itemsInfo[0] = {
};
bool RNReconfigurationr10IEsNonCriticalExtension::itemsPres[0] = {
};
const RNReconfigurationr10IEsNonCriticalExtension::Info RNReconfigurationr10IEsNonCriticalExtension::theInfo = {
	RNReconfigurationr10IEsNonCriticalExtension::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *RNReconfigurationr10IEs::itemsInfo[4] = {
	&RNSystemInfor10::theInfo,
	&RNSubframeConfigr10::theInfo,
	&RNReconfigurationr10IEsLateNonCriticalExtension::theInfo,
	&RNReconfigurationr10IEsNonCriticalExtension::theInfo,
};
bool RNReconfigurationr10IEs::itemsPres[4] = {
	0,
	0,
	0,
	0,
};
const RNReconfigurationr10IEs::Info RNReconfigurationr10IEs::theInfo = {
	RNReconfigurationr10IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 4, 0
};

const void *RNReconfigurationr10CriticalExtensionsC1::choicesInfo[4] = {
	&RNReconfigurationr10IEs::theInfo,
	&RNReconfigurationr10CriticalExtensionsC1Spare3::theInfo,
	&RNReconfigurationr10CriticalExtensionsC1Spare2::theInfo,
	&RNReconfigurationr10CriticalExtensionsC1Spare1::theInfo,
};
const RNReconfigurationr10CriticalExtensionsC1::Info RNReconfigurationr10CriticalExtensionsC1::theInfo = {
	RNReconfigurationr10CriticalExtensionsC1::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	3
};

const void *RNReconfigurationr10CriticalExtensionsCriticalExtensionsFuture::itemsInfo[0] = {
};
bool RNReconfigurationr10CriticalExtensionsCriticalExtensionsFuture::itemsPres[0] = {
};
const RNReconfigurationr10CriticalExtensionsCriticalExtensionsFuture::Info RNReconfigurationr10CriticalExtensionsCriticalExtensionsFuture::theInfo = {
	RNReconfigurationr10CriticalExtensionsCriticalExtensionsFuture::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *RNReconfigurationr10CriticalExtensions::choicesInfo[2] = {
	&RNReconfigurationr10CriticalExtensionsC1::theInfo,
	&RNReconfigurationr10CriticalExtensionsCriticalExtensionsFuture::theInfo,
};
const RNReconfigurationr10CriticalExtensions::Info RNReconfigurationr10CriticalExtensions::theInfo = {
	RNReconfigurationr10CriticalExtensions::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *RNReconfigurationr10::itemsInfo[2] = {
	&RRCTransactionIdentifier::theInfo,
	&RNReconfigurationr10CriticalExtensions::theInfo,
};
bool RNReconfigurationr10::itemsPres[2] = {
	1,
	1,
};
const RNReconfigurationr10::Info RNReconfigurationr10::theInfo = {
	RNReconfigurationr10::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
RNReconfigurationr10::RNReconfigurationr10(const RRCTransactionIdentifier& rrcTransactionIdentifier, const RNReconfigurationr10CriticalExtensions& rNReconfigurationr10CriticalExtensions) : Sequence(&theInfo) {
	setRrcTransactionIdentifier(rrcTransactionIdentifier);
	setRNReconfigurationr10CriticalExtensions(rNReconfigurationr10CriticalExtensions);
}

const void *DLDCCHMessageTypeC1::choicesInfo[16] = {
	&CSFBParametersResponseCDMA2000::theInfo,
	&DLInformationTransfer::theInfo,
	&HandoverFromEUTRAPreparationRequest::theInfo,
	&MobilityFromEUTRACommand::theInfo,
	&RRCConnectionReconfiguration::theInfo,
	&RRCConnectionRelease::theInfo,
	&SecurityModeCommand::theInfo,
	&UECapabilityEnquiry::theInfo,
	&CounterCheck::theInfo,
	&UEInformationRequestr9::theInfo,
	&LoggedMeasurementConfigurationr10::theInfo,
	&RNReconfigurationr10::theInfo,
	&DLDCCHMessageTypeC1Spare4::theInfo,
	&DLDCCHMessageTypeC1Spare3::theInfo,
	&DLDCCHMessageTypeC1Spare2::theInfo,
	&DLDCCHMessageTypeC1Spare1::theInfo,
};
const DLDCCHMessageTypeC1::Info DLDCCHMessageTypeC1::theInfo = {
	DLDCCHMessageTypeC1::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	15
};

const void *DLDCCHMessageTypeMessageClassExtension::itemsInfo[0] = {
};
bool DLDCCHMessageTypeMessageClassExtension::itemsPres[0] = {
};
const DLDCCHMessageTypeMessageClassExtension::Info DLDCCHMessageTypeMessageClassExtension::theInfo = {
	DLDCCHMessageTypeMessageClassExtension::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *DLDCCHMessageType::choicesInfo[2] = {
	&DLDCCHMessageTypeC1::theInfo,
	&DLDCCHMessageTypeMessageClassExtension::theInfo,
};
const DLDCCHMessageType::Info DLDCCHMessageType::theInfo = {
	DLDCCHMessageType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLDCCHMessage::itemsInfo[1] = {
	&DLDCCHMessageType::theInfo,
};
bool DLDCCHMessage::itemsPres[1] = {
	1,
};
const DLDCCHMessage::Info DLDCCHMessage::theInfo = {
	DLDCCHMessage::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
DLDCCHMessage::DLDCCHMessage(const DLDCCHMessageType& message) : Sequence(&theInfo) {
	setMessage(message);
}

const void *ReestabUEIdentity::itemsInfo[3] = {
	&CRNTI::theInfo,
	&PhysCellId::theInfo,
	&ShortMACI::theInfo,
};
bool ReestabUEIdentity::itemsPres[3] = {
	1,
	1,
	1,
};
const ReestabUEIdentity::Info ReestabUEIdentity::theInfo = {
	ReestabUEIdentity::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};
ReestabUEIdentity::ReestabUEIdentity(const CRNTI& cRNTI, const PhysCellId& physCellId, const ShortMACI& shortMACI) : Sequence(&theInfo) {
	setCRNTI(cRNTI);
	setPhysCellId(physCellId);
	setShortMACI(shortMACI);
}

const void *RRCConnectionReestablishmentRequestr8IEs::itemsInfo[3] = {
	&ReestabUEIdentity::theInfo,
	&ReestablishmentCause::theInfo,
	&RRCConnectionReestablishmentRequestr8IEsSpare::theInfo,
};
bool RRCConnectionReestablishmentRequestr8IEs::itemsPres[3] = {
	1,
	1,
	1,
};
const RRCConnectionReestablishmentRequestr8IEs::Info RRCConnectionReestablishmentRequestr8IEs::theInfo = {
	RRCConnectionReestablishmentRequestr8IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};
RRCConnectionReestablishmentRequestr8IEs::RRCConnectionReestablishmentRequestr8IEs(const ReestabUEIdentity& ueIdentity, const ReestablishmentCause& reestablishmentCause, const RRCConnectionReestablishmentRequestr8IEsSpare& rRCConnectionReestablishmentRequestr8IEsSpare) : Sequence(&theInfo) {
	setUeIdentity(ueIdentity);
	setReestablishmentCause(reestablishmentCause);
	setRRCConnectionReestablishmentRequestr8IEsSpare(rRCConnectionReestablishmentRequestr8IEsSpare);
}

const void *RRCConnectionReestablishmentRequestCriticalExtensionsCriticalExtensionsFuture::itemsInfo[0] = {
};
bool RRCConnectionReestablishmentRequestCriticalExtensionsCriticalExtensionsFuture::itemsPres[0] = {
};
const RRCConnectionReestablishmentRequestCriticalExtensionsCriticalExtensionsFuture::Info RRCConnectionReestablishmentRequestCriticalExtensionsCriticalExtensionsFuture::theInfo = {
	RRCConnectionReestablishmentRequestCriticalExtensionsCriticalExtensionsFuture::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *RRCConnectionReestablishmentRequestCriticalExtensions::choicesInfo[2] = {
	&RRCConnectionReestablishmentRequestr8IEs::theInfo,
	&RRCConnectionReestablishmentRequestCriticalExtensionsCriticalExtensionsFuture::theInfo,
};
const RRCConnectionReestablishmentRequestCriticalExtensions::Info RRCConnectionReestablishmentRequestCriticalExtensions::theInfo = {
	RRCConnectionReestablishmentRequestCriticalExtensions::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *RRCConnectionReestablishmentRequest::itemsInfo[1] = {
	&RRCConnectionReestablishmentRequestCriticalExtensions::theInfo,
};
bool RRCConnectionReestablishmentRequest::itemsPres[1] = {
	1,
};
const RRCConnectionReestablishmentRequest::Info RRCConnectionReestablishmentRequest::theInfo = {
	RRCConnectionReestablishmentRequest::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
RRCConnectionReestablishmentRequest::RRCConnectionReestablishmentRequest(const RRCConnectionReestablishmentRequestCriticalExtensions& rRCConnectionReestablishmentRequestCriticalExtensions) : Sequence(&theInfo) {
	setRRCConnectionReestablishmentRequestCriticalExtensions(rRCConnectionReestablishmentRequestCriticalExtensions);
}

const void *InitialUEIdentity::choicesInfo[2] = {
	&STMSI::theInfo,
	&InitialUEIdentityRandomValue::theInfo,
};
const InitialUEIdentity::Info InitialUEIdentity::theInfo = {
	InitialUEIdentity::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *RRCConnectionRequestr8IEs::itemsInfo[3] = {
	&InitialUEIdentity::theInfo,
	&EstablishmentCause::theInfo,
	&RRCConnectionRequestr8IEsSpare::theInfo,
};
bool RRCConnectionRequestr8IEs::itemsPres[3] = {
	1,
	1,
	1,
};
const RRCConnectionRequestr8IEs::Info RRCConnectionRequestr8IEs::theInfo = {
	RRCConnectionRequestr8IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};
RRCConnectionRequestr8IEs::RRCConnectionRequestr8IEs(const InitialUEIdentity& ueIdentity, const EstablishmentCause& establishmentCause, const RRCConnectionRequestr8IEsSpare& rRCConnectionRequestr8IEsSpare) : Sequence(&theInfo) {
	setUeIdentity(ueIdentity);
	setEstablishmentCause(establishmentCause);
	setRRCConnectionRequestr8IEsSpare(rRCConnectionRequestr8IEsSpare);
}

const void *RRCConnectionRequestCriticalExtensionsCriticalExtensionsFuture::itemsInfo[0] = {
};
bool RRCConnectionRequestCriticalExtensionsCriticalExtensionsFuture::itemsPres[0] = {
};
const RRCConnectionRequestCriticalExtensionsCriticalExtensionsFuture::Info RRCConnectionRequestCriticalExtensionsCriticalExtensionsFuture::theInfo = {
	RRCConnectionRequestCriticalExtensionsCriticalExtensionsFuture::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *RRCConnectionRequestCriticalExtensions::choicesInfo[2] = {
	&RRCConnectionRequestr8IEs::theInfo,
	&RRCConnectionRequestCriticalExtensionsCriticalExtensionsFuture::theInfo,
};
const RRCConnectionRequestCriticalExtensions::Info RRCConnectionRequestCriticalExtensions::theInfo = {
	RRCConnectionRequestCriticalExtensions::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *RRCConnectionRequest::itemsInfo[1] = {
	&RRCConnectionRequestCriticalExtensions::theInfo,
};
bool RRCConnectionRequest::itemsPres[1] = {
	1,
};
const RRCConnectionRequest::Info RRCConnectionRequest::theInfo = {
	RRCConnectionRequest::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
RRCConnectionRequest::RRCConnectionRequest(const RRCConnectionRequestCriticalExtensions& rRCConnectionRequestCriticalExtensions) : Sequence(&theInfo) {
	setRRCConnectionRequestCriticalExtensions(rRCConnectionRequestCriticalExtensions);
}

const void *ULCCCHMessageTypeC1::choicesInfo[2] = {
	&RRCConnectionReestablishmentRequest::theInfo,
	&RRCConnectionRequest::theInfo,
};
const ULCCCHMessageTypeC1::Info ULCCCHMessageTypeC1::theInfo = {
	ULCCCHMessageTypeC1::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULCCCHMessageTypeMessageClassExtension::itemsInfo[0] = {
};
bool ULCCCHMessageTypeMessageClassExtension::itemsPres[0] = {
};
const ULCCCHMessageTypeMessageClassExtension::Info ULCCCHMessageTypeMessageClassExtension::theInfo = {
	ULCCCHMessageTypeMessageClassExtension::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *ULCCCHMessageType::choicesInfo[2] = {
	&ULCCCHMessageTypeC1::theInfo,
	&ULCCCHMessageTypeMessageClassExtension::theInfo,
};
const ULCCCHMessageType::Info ULCCCHMessageType::theInfo = {
	ULCCCHMessageType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULCCCHMessage::itemsInfo[1] = {
	&ULCCCHMessageType::theInfo,
};
bool ULCCCHMessage::itemsPres[1] = {
	1,
};
const ULCCCHMessage::Info ULCCCHMessage::theInfo = {
	ULCCCHMessage::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
ULCCCHMessage::ULCCCHMessage(const ULCCCHMessageType& message) : Sequence(&theInfo) {
	setMessage(message);
}

const void *CSFBParametersRequestCDMA2000v8a0IEsNonCriticalExtension::itemsInfo[0] = {
};
bool CSFBParametersRequestCDMA2000v8a0IEsNonCriticalExtension::itemsPres[0] = {
};
const CSFBParametersRequestCDMA2000v8a0IEsNonCriticalExtension::Info CSFBParametersRequestCDMA2000v8a0IEsNonCriticalExtension::theInfo = {
	CSFBParametersRequestCDMA2000v8a0IEsNonCriticalExtension::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *CSFBParametersRequestCDMA2000v8a0IEs::itemsInfo[2] = {
	&CSFBParametersRequestCDMA2000v8a0IEsLateNonCriticalExtension::theInfo,
	&CSFBParametersRequestCDMA2000v8a0IEsNonCriticalExtension::theInfo,
};
bool CSFBParametersRequestCDMA2000v8a0IEs::itemsPres[2] = {
	0,
	0,
};
const CSFBParametersRequestCDMA2000v8a0IEs::Info CSFBParametersRequestCDMA2000v8a0IEs::theInfo = {
	CSFBParametersRequestCDMA2000v8a0IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *CSFBParametersRequestCDMA2000r8IEs::itemsInfo[1] = {
	&CSFBParametersRequestCDMA2000v8a0IEs::theInfo,
};
bool CSFBParametersRequestCDMA2000r8IEs::itemsPres[1] = {
	0,
};
const CSFBParametersRequestCDMA2000r8IEs::Info CSFBParametersRequestCDMA2000r8IEs::theInfo = {
	CSFBParametersRequestCDMA2000r8IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *CSFBParametersRequestCDMA2000CriticalExtensionsCriticalExtensionsFuture::itemsInfo[0] = {
};
bool CSFBParametersRequestCDMA2000CriticalExtensionsCriticalExtensionsFuture::itemsPres[0] = {
};
const CSFBParametersRequestCDMA2000CriticalExtensionsCriticalExtensionsFuture::Info CSFBParametersRequestCDMA2000CriticalExtensionsCriticalExtensionsFuture::theInfo = {
	CSFBParametersRequestCDMA2000CriticalExtensionsCriticalExtensionsFuture::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *CSFBParametersRequestCDMA2000CriticalExtensions::choicesInfo[2] = {
	&CSFBParametersRequestCDMA2000r8IEs::theInfo,
	&CSFBParametersRequestCDMA2000CriticalExtensionsCriticalExtensionsFuture::theInfo,
};
const CSFBParametersRequestCDMA2000CriticalExtensions::Info CSFBParametersRequestCDMA2000CriticalExtensions::theInfo = {
	CSFBParametersRequestCDMA2000CriticalExtensions::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *CSFBParametersRequestCDMA2000::itemsInfo[1] = {
	&CSFBParametersRequestCDMA2000CriticalExtensions::theInfo,
};
bool CSFBParametersRequestCDMA2000::itemsPres[1] = {
	1,
};
const CSFBParametersRequestCDMA2000::Info CSFBParametersRequestCDMA2000::theInfo = {
	CSFBParametersRequestCDMA2000::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
CSFBParametersRequestCDMA2000::CSFBParametersRequestCDMA2000(const CSFBParametersRequestCDMA2000CriticalExtensions& cSFBParametersRequestCDMA2000CriticalExtensions) : Sequence(&theInfo) {
	setCSFBParametersRequestCDMA2000CriticalExtensions(cSFBParametersRequestCDMA2000CriticalExtensions);
}

const void *MeasResultsMeasResultPCell::itemsInfo[2] = {
	&RSRPRange::theInfo,
	&RSRQRange::theInfo,
};
bool MeasResultsMeasResultPCell::itemsPres[2] = {
	1,
	1,
};
const MeasResultsMeasResultPCell::Info MeasResultsMeasResultPCell::theInfo = {
	MeasResultsMeasResultPCell::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
MeasResultsMeasResultPCell::MeasResultsMeasResultPCell(const RSRPRange& rsrpResult, const RSRQRange& rsrqResult) : Sequence(&theInfo) {
	setRsrpResult(rsrpResult);
	setRsrqResult(rsrqResult);
}

const void *MeasResultEUTRACgiInfo::itemsInfo[3] = {
	&CellGlobalIdEUTRA::theInfo,
	&TrackingAreaCode::theInfo,
	&PLMNIdentityList2::theInfo,
};
bool MeasResultEUTRACgiInfo::itemsPres[3] = {
	1,
	1,
	0,
};
const MeasResultEUTRACgiInfo::Info MeasResultEUTRACgiInfo::theInfo = {
	MeasResultEUTRACgiInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};
MeasResultEUTRACgiInfo::MeasResultEUTRACgiInfo(const CellGlobalIdEUTRA& cellGlobalId, const TrackingAreaCode& trackingAreaCode) : Sequence(&theInfo) {
	setCellGlobalId(cellGlobalId);
	setTrackingAreaCode(trackingAreaCode);
}

const void *AdditionalSIInfor9::itemsInfo[2] = {
	&AdditionalSIInfor9csg_MemberStatus_r9::theInfo,
	&CSGIdentity::theInfo,
};
bool AdditionalSIInfor9::itemsPres[2] = {
	0,
	0,
};
const AdditionalSIInfor9::Info AdditionalSIInfor9::theInfo = {
	AdditionalSIInfor9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *MeasResultEUTRAMeasResult::itemsInfo[3] = {
	&RSRPRange::theInfo,
	&RSRQRange::theInfo,
	&AdditionalSIInfor9::theInfo,
};
bool MeasResultEUTRAMeasResult::itemsPres[3] = {
	0,
	0,
	0,
};
const MeasResultEUTRAMeasResult::Info MeasResultEUTRAMeasResult::theInfo = {
	MeasResultEUTRAMeasResult::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	2, 2, 1
};

const void *MeasResultEUTRA::itemsInfo[3] = {
	&PhysCellId::theInfo,
	&MeasResultEUTRACgiInfo::theInfo,
	&MeasResultEUTRAMeasResult::theInfo,
};
bool MeasResultEUTRA::itemsPres[3] = {
	1,
	0,
	1,
};
const MeasResultEUTRA::Info MeasResultEUTRA::theInfo = {
	MeasResultEUTRA::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};
MeasResultEUTRA::MeasResultEUTRA(const PhysCellId& physCellId, const MeasResultEUTRAMeasResult& measResultEUTRAMeasResult) : Sequence(&theInfo) {
	setPhysCellId(physCellId);
	setMeasResultEUTRAMeasResult(measResultEUTRAMeasResult);
}

const void *MeasResultUTRAPhysCellId::choicesInfo[2] = {
	&PhysCellIdUTRAFDD::theInfo,
	&PhysCellIdUTRATDD::theInfo,
};
const MeasResultUTRAPhysCellId::Info MeasResultUTRAPhysCellId::theInfo = {
	MeasResultUTRAPhysCellId::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *CellGlobalIdUTRA::itemsInfo[2] = {
	&PLMNIdentity::theInfo,
	&CellGlobalIdUTRACellIdentity::theInfo,
};
bool CellGlobalIdUTRA::itemsPres[2] = {
	1,
	1,
};
const CellGlobalIdUTRA::Info CellGlobalIdUTRA::theInfo = {
	CellGlobalIdUTRA::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
CellGlobalIdUTRA::CellGlobalIdUTRA(const PLMNIdentity& plmnIdentity, const CellGlobalIdUTRACellIdentity& cellGlobalIdUTRACellIdentity) : Sequence(&theInfo) {
	setPlmnIdentity(plmnIdentity);
	setCellGlobalIdUTRACellIdentity(cellGlobalIdUTRACellIdentity);
}

const void *MeasResultUTRACgiInfo::itemsInfo[4] = {
	&CellGlobalIdUTRA::theInfo,
	&MeasResultUTRACgiInfoLocationAreaCode::theInfo,
	&MeasResultUTRACgiInfoRoutingAreaCode::theInfo,
	&PLMNIdentityList2::theInfo,
};
bool MeasResultUTRACgiInfo::itemsPres[4] = {
	1,
	0,
	0,
	0,
};
const MeasResultUTRACgiInfo::Info MeasResultUTRACgiInfo::theInfo = {
	MeasResultUTRACgiInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 3, 0
};
MeasResultUTRACgiInfo::MeasResultUTRACgiInfo(const CellGlobalIdUTRA& cellGlobalId) : Sequence(&theInfo) {
	setCellGlobalId(cellGlobalId);
}

const void *MeasResultUTRAMeasResult::itemsInfo[3] = {
	&MeasResultUTRAMeasResultUtraRSCP::theInfo,
	&MeasResultUTRAMeasResultUtraEcN0::theInfo,
	&AdditionalSIInfor9::theInfo,
};
bool MeasResultUTRAMeasResult::itemsPres[3] = {
	0,
	0,
	0,
};
const MeasResultUTRAMeasResult::Info MeasResultUTRAMeasResult::theInfo = {
	MeasResultUTRAMeasResult::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	2, 2, 1
};

const void *MeasResultUTRA::itemsInfo[3] = {
	&MeasResultUTRAPhysCellId::theInfo,
	&MeasResultUTRACgiInfo::theInfo,
	&MeasResultUTRAMeasResult::theInfo,
};
bool MeasResultUTRA::itemsPres[3] = {
	1,
	0,
	1,
};
const MeasResultUTRA::Info MeasResultUTRA::theInfo = {
	MeasResultUTRA::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};
MeasResultUTRA::MeasResultUTRA(const MeasResultUTRAPhysCellId& measResultUTRAPhysCellId, const MeasResultUTRAMeasResult& measResultUTRAMeasResult) : Sequence(&theInfo) {
	setMeasResultUTRAPhysCellId(measResultUTRAPhysCellId);
	setMeasResultUTRAMeasResult(measResultUTRAMeasResult);
}

const void *CellGlobalIdGERAN::itemsInfo[3] = {
	&PLMNIdentity::theInfo,
	&CellGlobalIdGERANLocationAreaCode::theInfo,
	&CellGlobalIdGERANCellIdentity::theInfo,
};
bool CellGlobalIdGERAN::itemsPres[3] = {
	1,
	1,
	1,
};
const CellGlobalIdGERAN::Info CellGlobalIdGERAN::theInfo = {
	CellGlobalIdGERAN::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};
CellGlobalIdGERAN::CellGlobalIdGERAN(const PLMNIdentity& plmnIdentity, const CellGlobalIdGERANLocationAreaCode& cellGlobalIdGERANLocationAreaCode, const CellGlobalIdGERANCellIdentity& cellGlobalIdGERANCellIdentity) : Sequence(&theInfo) {
	setPlmnIdentity(plmnIdentity);
	setCellGlobalIdGERANLocationAreaCode(cellGlobalIdGERANLocationAreaCode);
	setCellGlobalIdGERANCellIdentity(cellGlobalIdGERANCellIdentity);
}

const void *MeasResultGERANCgiInfo::itemsInfo[2] = {
	&CellGlobalIdGERAN::theInfo,
	&MeasResultGERANCgiInfoRoutingAreaCode::theInfo,
};
bool MeasResultGERANCgiInfo::itemsPres[2] = {
	1,
	0,
};
const MeasResultGERANCgiInfo::Info MeasResultGERANCgiInfo::theInfo = {
	MeasResultGERANCgiInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};
MeasResultGERANCgiInfo::MeasResultGERANCgiInfo(const CellGlobalIdGERAN& cellGlobalId) : Sequence(&theInfo) {
	setCellGlobalId(cellGlobalId);
}

const void *MeasResultGERANMeasResult::itemsInfo[1] = {
	&MeasResultGERANMeasResultRssi::theInfo,
};
bool MeasResultGERANMeasResult::itemsPres[1] = {
	1,
};
const MeasResultGERANMeasResult::Info MeasResultGERANMeasResult::theInfo = {
	MeasResultGERANMeasResult::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
MeasResultGERANMeasResult::MeasResultGERANMeasResult(const MeasResultGERANMeasResultRssi& measResultGERANMeasResultRssi) : Sequence(&theInfo) {
	setMeasResultGERANMeasResultRssi(measResultGERANMeasResultRssi);
}

const void *MeasResultGERAN::itemsInfo[4] = {
	&CarrierFreqGERAN::theInfo,
	&PhysCellIdGERAN::theInfo,
	&MeasResultGERANCgiInfo::theInfo,
	&MeasResultGERANMeasResult::theInfo,
};
bool MeasResultGERAN::itemsPres[4] = {
	1,
	1,
	0,
	1,
};
const MeasResultGERAN::Info MeasResultGERAN::theInfo = {
	MeasResultGERAN::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 1, 0
};
MeasResultGERAN::MeasResultGERAN(const CarrierFreqGERAN& carrierFreq, const PhysCellIdGERAN& physCellId, const MeasResultGERANMeasResult& measResultGERANMeasResult) : Sequence(&theInfo) {
	setCarrierFreq(carrierFreq);
	setPhysCellId(physCellId);
	setMeasResultGERANMeasResult(measResultGERANMeasResult);
}

const void *CellGlobalIdCDMA2000::choicesInfo[2] = {
	&CellGlobalIdCDMA2000CellGlobalId1XRTT::theInfo,
	&CellGlobalIdCDMA2000CellGlobalIdHRPD::theInfo,
};
const CellGlobalIdCDMA2000::Info CellGlobalIdCDMA2000::theInfo = {
	CellGlobalIdCDMA2000::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *MeasResultCDMA2000MeasResult::itemsInfo[2] = {
	&MeasResultCDMA2000MeasResultPilotPnPhase::theInfo,
	&MeasResultCDMA2000MeasResultPilotStrength::theInfo,
};
bool MeasResultCDMA2000MeasResult::itemsPres[2] = {
	0,
	1,
};
const MeasResultCDMA2000MeasResult::Info MeasResultCDMA2000MeasResult::theInfo = {
	MeasResultCDMA2000MeasResult::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	2, 1, 0
};
MeasResultCDMA2000MeasResult::MeasResultCDMA2000MeasResult(const MeasResultCDMA2000MeasResultPilotStrength& measResultCDMA2000MeasResultPilotStrength) : Sequence(&theInfo) {
	setMeasResultCDMA2000MeasResultPilotStrength(measResultCDMA2000MeasResultPilotStrength);
}

const void *MeasResultCDMA2000::itemsInfo[3] = {
	&PhysCellIdCDMA2000::theInfo,
	&CellGlobalIdCDMA2000::theInfo,
	&MeasResultCDMA2000MeasResult::theInfo,
};
bool MeasResultCDMA2000::itemsPres[3] = {
	1,
	0,
	1,
};
const MeasResultCDMA2000::Info MeasResultCDMA2000::theInfo = {
	MeasResultCDMA2000::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};
MeasResultCDMA2000::MeasResultCDMA2000(const PhysCellIdCDMA2000& physCellId, const MeasResultCDMA2000MeasResult& measResultCDMA2000MeasResult) : Sequence(&theInfo) {
	setPhysCellId(physCellId);
	setMeasResultCDMA2000MeasResult(measResultCDMA2000MeasResult);
}

const void *MeasResultsCDMA2000::itemsInfo[2] = {
	&MeasResultsCDMA2000PreRegistrationStatusHRPD::theInfo,
	&MeasResultListCDMA2000::theInfo,
};
bool MeasResultsCDMA2000::itemsPres[2] = {
	1,
	1,
};
const MeasResultsCDMA2000::Info MeasResultsCDMA2000::theInfo = {
	MeasResultsCDMA2000::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
MeasResultsCDMA2000::MeasResultsCDMA2000(const MeasResultsCDMA2000PreRegistrationStatusHRPD& measResultsCDMA2000PreRegistrationStatusHRPD, const MeasResultListCDMA2000& measResultListCDMA2000) : Sequence(&theInfo) {
	setMeasResultsCDMA2000PreRegistrationStatusHRPD(measResultsCDMA2000PreRegistrationStatusHRPD);
	setMeasResultListCDMA2000(measResultListCDMA2000);
}

const void *MeasResultsMeasResultNeighCells::choicesInfo[4] = {
	&MeasResultListEUTRA::theInfo,
	&MeasResultListUTRA::theInfo,
	&MeasResultListGERAN::theInfo,
	&MeasResultsCDMA2000::theInfo,
};
const MeasResultsMeasResultNeighCells::Info MeasResultsMeasResultNeighCells::theInfo = {
	MeasResultsMeasResultNeighCells::create,
	CHOICE,
	0,
	true,
	choicesInfo,
	3
};

const void *MeasResultForECIDr9::itemsInfo[2] = {
	&MeasResultForECIDr9UeRxTxTimeDiffResultr9::theInfo,
	&MeasResultForECIDr9CurrentSFNr9::theInfo,
};
bool MeasResultForECIDr9::itemsPres[2] = {
	1,
	1,
};
const MeasResultForECIDr9::Info MeasResultForECIDr9::theInfo = {
	MeasResultForECIDr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
MeasResultForECIDr9::MeasResultForECIDr9(const MeasResultForECIDr9UeRxTxTimeDiffResultr9& measResultForECIDr9UeRxTxTimeDiffResultr9, const MeasResultForECIDr9CurrentSFNr9& measResultForECIDr9CurrentSFNr9) : Sequence(&theInfo) {
	setMeasResultForECIDr9UeRxTxTimeDiffResultr9(measResultForECIDr9UeRxTxTimeDiffResultr9);
	setMeasResultForECIDr9CurrentSFNr9(measResultForECIDr9CurrentSFNr9);
}

const void *LocationInfor10LocationCoordinatesr10::choicesInfo[2] = {
	&LocationInfor10LocationCoordinatesr10EllipsoidPointr10::theInfo,
	&LocationInfor10LocationCoordinatesr10EllipsoidPointWithAltituder10::theInfo,
};
const LocationInfor10LocationCoordinatesr10::Info LocationInfor10LocationCoordinatesr10::theInfo = {
	LocationInfor10LocationCoordinatesr10::create,
	CHOICE,
	0,
	true,
	choicesInfo,
	1
};

const void *LocationInfor10::itemsInfo[3] = {
	&LocationInfor10LocationCoordinatesr10::theInfo,
	&LocationInfor10HorizontalVelocityr10::theInfo,
	&LocationInfor10GnssTODmsecr10::theInfo,
};
bool LocationInfor10::itemsPres[3] = {
	1,
	0,
	0,
};
const LocationInfor10::Info LocationInfor10::theInfo = {
	LocationInfor10::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	3, 2, 0
};
LocationInfor10::LocationInfor10(const LocationInfor10LocationCoordinatesr10& locationInfor10LocationCoordinatesr10) : Sequence(&theInfo) {
	setLocationInfor10LocationCoordinatesr10(locationInfor10LocationCoordinatesr10);
}

const void *MeasResultServFreqr10MeasResultSCellr10::itemsInfo[2] = {
	&RSRPRange::theInfo,
	&RSRQRange::theInfo,
};
bool MeasResultServFreqr10MeasResultSCellr10::itemsPres[2] = {
	1,
	1,
};
const MeasResultServFreqr10MeasResultSCellr10::Info MeasResultServFreqr10MeasResultSCellr10::theInfo = {
	MeasResultServFreqr10MeasResultSCellr10::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
MeasResultServFreqr10MeasResultSCellr10::MeasResultServFreqr10MeasResultSCellr10(const RSRPRange& rsrpResultSCellr10, const RSRQRange& rsrqResultSCellr10) : Sequence(&theInfo) {
	setRsrpResultSCellr10(rsrpResultSCellr10);
	setRsrqResultSCellr10(rsrqResultSCellr10);
}

const void *MeasResultServFreqr10MeasResultBestNeighCellr10::itemsInfo[3] = {
	&PhysCellId::theInfo,
	&RSRPRange::theInfo,
	&RSRQRange::theInfo,
};
bool MeasResultServFreqr10MeasResultBestNeighCellr10::itemsPres[3] = {
	1,
	1,
	1,
};
const MeasResultServFreqr10MeasResultBestNeighCellr10::Info MeasResultServFreqr10MeasResultBestNeighCellr10::theInfo = {
	MeasResultServFreqr10MeasResultBestNeighCellr10::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};
MeasResultServFreqr10MeasResultBestNeighCellr10::MeasResultServFreqr10MeasResultBestNeighCellr10(const PhysCellId& physCellIdr10, const RSRPRange& rsrpResultNCellr10, const RSRQRange& rsrqResultNCellr10) : Sequence(&theInfo) {
	setPhysCellIdr10(physCellIdr10);
	setRsrpResultNCellr10(rsrpResultNCellr10);
	setRsrqResultNCellr10(rsrqResultNCellr10);
}

const void *MeasResultServFreqr10::itemsInfo[3] = {
	&ServCellIndexr10::theInfo,
	&MeasResultServFreqr10MeasResultSCellr10::theInfo,
	&MeasResultServFreqr10MeasResultBestNeighCellr10::theInfo,
};
bool MeasResultServFreqr10::itemsPres[3] = {
	1,
	0,
	0,
};
const MeasResultServFreqr10::Info MeasResultServFreqr10::theInfo = {
	MeasResultServFreqr10::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	3, 2, 0
};
MeasResultServFreqr10::MeasResultServFreqr10(const ServCellIndexr10& servFreqIdr10) : Sequence(&theInfo) {
	setServFreqIdr10(servFreqIdr10);
}

const void *MeasResults::itemsInfo[6] = {
	&MeasId::theInfo,
	&MeasResultsMeasResultPCell::theInfo,
	&MeasResultsMeasResultNeighCells::theInfo,
	&MeasResultForECIDr9::theInfo,
	&LocationInfor10::theInfo,
	&MeasResultServFreqListr10::theInfo,
};
bool MeasResults::itemsPres[6] = {
	1,
	1,
	0,
	0,
	0,
	0,
};
const MeasResults::Info MeasResults::theInfo = {
	MeasResults::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	3, 1, 3
};
MeasResults::MeasResults(const MeasId& measId, const MeasResultsMeasResultPCell& measResultsMeasResultPCell) : Sequence(&theInfo) {
	setMeasId(measId);
	setMeasResultsMeasResultPCell(measResultsMeasResultPCell);
}

const void *MeasurementReportv8a0IEsNonCriticalExtension::itemsInfo[0] = {
};
bool MeasurementReportv8a0IEsNonCriticalExtension::itemsPres[0] = {
};
const MeasurementReportv8a0IEsNonCriticalExtension::Info MeasurementReportv8a0IEsNonCriticalExtension::theInfo = {
	MeasurementReportv8a0IEsNonCriticalExtension::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *MeasurementReportv8a0IEs::itemsInfo[2] = {
	&MeasurementReportv8a0IEsLateNonCriticalExtension::theInfo,
	&MeasurementReportv8a0IEsNonCriticalExtension::theInfo,
};
bool MeasurementReportv8a0IEs::itemsPres[2] = {
	0,
	0,
};
const MeasurementReportv8a0IEs::Info MeasurementReportv8a0IEs::theInfo = {
	MeasurementReportv8a0IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *MeasurementReportr8IEs::itemsInfo[2] = {
	&MeasResults::theInfo,
	&MeasurementReportv8a0IEs::theInfo,
};
bool MeasurementReportr8IEs::itemsPres[2] = {
	1,
	0,
};
const MeasurementReportr8IEs::Info MeasurementReportr8IEs::theInfo = {
	MeasurementReportr8IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};
MeasurementReportr8IEs::MeasurementReportr8IEs(const MeasResults& measResults) : Sequence(&theInfo) {
	setMeasResults(measResults);
}

const void *MeasurementReportCriticalExtensionsC1::choicesInfo[8] = {
	&MeasurementReportr8IEs::theInfo,
	&MeasurementReportCriticalExtensionsC1Spare7::theInfo,
	&MeasurementReportCriticalExtensionsC1Spare6::theInfo,
	&MeasurementReportCriticalExtensionsC1Spare5::theInfo,
	&MeasurementReportCriticalExtensionsC1Spare4::theInfo,
	&MeasurementReportCriticalExtensionsC1Spare3::theInfo,
	&MeasurementReportCriticalExtensionsC1Spare2::theInfo,
	&MeasurementReportCriticalExtensionsC1Spare1::theInfo,
};
const MeasurementReportCriticalExtensionsC1::Info MeasurementReportCriticalExtensionsC1::theInfo = {
	MeasurementReportCriticalExtensionsC1::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	7
};

const void *MeasurementReportCriticalExtensionsCriticalExtensionsFuture::itemsInfo[0] = {
};
bool MeasurementReportCriticalExtensionsCriticalExtensionsFuture::itemsPres[0] = {
};
const MeasurementReportCriticalExtensionsCriticalExtensionsFuture::Info MeasurementReportCriticalExtensionsCriticalExtensionsFuture::theInfo = {
	MeasurementReportCriticalExtensionsCriticalExtensionsFuture::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *MeasurementReportCriticalExtensions::choicesInfo[2] = {
	&MeasurementReportCriticalExtensionsC1::theInfo,
	&MeasurementReportCriticalExtensionsCriticalExtensionsFuture::theInfo,
};
const MeasurementReportCriticalExtensions::Info MeasurementReportCriticalExtensions::theInfo = {
	MeasurementReportCriticalExtensions::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *MeasurementReport::itemsInfo[1] = {
	&MeasurementReportCriticalExtensions::theInfo,
};
bool MeasurementReport::itemsPres[1] = {
	1,
};
const MeasurementReport::Info MeasurementReport::theInfo = {
	MeasurementReport::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
MeasurementReport::MeasurementReport(const MeasurementReportCriticalExtensions& measurementReportCriticalExtensions) : Sequence(&theInfo) {
	setMeasurementReportCriticalExtensions(measurementReportCriticalExtensions);
}

const void *RRCConnectionReconfigurationCompletev1020IEsNonCriticalExtension::itemsInfo[0] = {
};
bool RRCConnectionReconfigurationCompletev1020IEsNonCriticalExtension::itemsPres[0] = {
};
const RRCConnectionReconfigurationCompletev1020IEsNonCriticalExtension::Info RRCConnectionReconfigurationCompletev1020IEsNonCriticalExtension::theInfo = {
	RRCConnectionReconfigurationCompletev1020IEsNonCriticalExtension::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *RRCConnectionReconfigurationCompletev1020IEs::itemsInfo[3] = {
	&RRCConnectionReconfigurationCompletev1020IEsrlf_InfoAvailable_r10::theInfo,
	&RRCConnectionReconfigurationCompletev1020IEslogMeasAvailable_r10::theInfo,
	&RRCConnectionReconfigurationCompletev1020IEsNonCriticalExtension::theInfo,
};
bool RRCConnectionReconfigurationCompletev1020IEs::itemsPres[3] = {
	0,
	0,
	0,
};
const RRCConnectionReconfigurationCompletev1020IEs::Info RRCConnectionReconfigurationCompletev1020IEs::theInfo = {
	RRCConnectionReconfigurationCompletev1020IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *RRCConnectionReconfigurationCompletev8a0IEs::itemsInfo[2] = {
	&RRCConnectionReconfigurationCompletev8a0IEsLateNonCriticalExtension::theInfo,
	&RRCConnectionReconfigurationCompletev1020IEs::theInfo,
};
bool RRCConnectionReconfigurationCompletev8a0IEs::itemsPres[2] = {
	0,
	0,
};
const RRCConnectionReconfigurationCompletev8a0IEs::Info RRCConnectionReconfigurationCompletev8a0IEs::theInfo = {
	RRCConnectionReconfigurationCompletev8a0IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *RRCConnectionReconfigurationCompleter8IEs::itemsInfo[1] = {
	&RRCConnectionReconfigurationCompletev8a0IEs::theInfo,
};
bool RRCConnectionReconfigurationCompleter8IEs::itemsPres[1] = {
	0,
};
const RRCConnectionReconfigurationCompleter8IEs::Info RRCConnectionReconfigurationCompleter8IEs::theInfo = {
	RRCConnectionReconfigurationCompleter8IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *RRCConnectionReconfigurationCompleteCriticalExtensionsCriticalExtensionsFuture::itemsInfo[0] = {
};
bool RRCConnectionReconfigurationCompleteCriticalExtensionsCriticalExtensionsFuture::itemsPres[0] = {
};
const RRCConnectionReconfigurationCompleteCriticalExtensionsCriticalExtensionsFuture::Info RRCConnectionReconfigurationCompleteCriticalExtensionsCriticalExtensionsFuture::theInfo = {
	RRCConnectionReconfigurationCompleteCriticalExtensionsCriticalExtensionsFuture::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *RRCConnectionReconfigurationCompleteCriticalExtensions::choicesInfo[2] = {
	&RRCConnectionReconfigurationCompleter8IEs::theInfo,
	&RRCConnectionReconfigurationCompleteCriticalExtensionsCriticalExtensionsFuture::theInfo,
};
const RRCConnectionReconfigurationCompleteCriticalExtensions::Info RRCConnectionReconfigurationCompleteCriticalExtensions::theInfo = {
	RRCConnectionReconfigurationCompleteCriticalExtensions::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *RRCConnectionReconfigurationComplete::itemsInfo[2] = {
	&RRCTransactionIdentifier::theInfo,
	&RRCConnectionReconfigurationCompleteCriticalExtensions::theInfo,
};
bool RRCConnectionReconfigurationComplete::itemsPres[2] = {
	1,
	1,
};
const RRCConnectionReconfigurationComplete::Info RRCConnectionReconfigurationComplete::theInfo = {
	RRCConnectionReconfigurationComplete::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
RRCConnectionReconfigurationComplete::RRCConnectionReconfigurationComplete(const RRCTransactionIdentifier& rrcTransactionIdentifier, const RRCConnectionReconfigurationCompleteCriticalExtensions& rRCConnectionReconfigurationCompleteCriticalExtensions) : Sequence(&theInfo) {
	setRrcTransactionIdentifier(rrcTransactionIdentifier);
	setRRCConnectionReconfigurationCompleteCriticalExtensions(rRCConnectionReconfigurationCompleteCriticalExtensions);
}

const void *RRCConnectionReestablishmentCompletev1020IEsNonCriticalExtension::itemsInfo[0] = {
};
bool RRCConnectionReestablishmentCompletev1020IEsNonCriticalExtension::itemsPres[0] = {
};
const RRCConnectionReestablishmentCompletev1020IEsNonCriticalExtension::Info RRCConnectionReestablishmentCompletev1020IEsNonCriticalExtension::theInfo = {
	RRCConnectionReestablishmentCompletev1020IEsNonCriticalExtension::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *RRCConnectionReestablishmentCompletev1020IEs::itemsInfo[2] = {
	&RRCConnectionReestablishmentCompletev1020IEslogMeasAvailable_r10::theInfo,
	&RRCConnectionReestablishmentCompletev1020IEsNonCriticalExtension::theInfo,
};
bool RRCConnectionReestablishmentCompletev1020IEs::itemsPres[2] = {
	0,
	0,
};
const RRCConnectionReestablishmentCompletev1020IEs::Info RRCConnectionReestablishmentCompletev1020IEs::theInfo = {
	RRCConnectionReestablishmentCompletev1020IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *RRCConnectionReestablishmentCompletev8a0IEs::itemsInfo[2] = {
	&RRCConnectionReestablishmentCompletev8a0IEsLateNonCriticalExtension::theInfo,
	&RRCConnectionReestablishmentCompletev1020IEs::theInfo,
};
bool RRCConnectionReestablishmentCompletev8a0IEs::itemsPres[2] = {
	0,
	0,
};
const RRCConnectionReestablishmentCompletev8a0IEs::Info RRCConnectionReestablishmentCompletev8a0IEs::theInfo = {
	RRCConnectionReestablishmentCompletev8a0IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *RRCConnectionReestablishmentCompletev920IEs::itemsInfo[2] = {
	&RRCConnectionReestablishmentCompletev920IEsrlf_InfoAvailable_r9::theInfo,
	&RRCConnectionReestablishmentCompletev8a0IEs::theInfo,
};
bool RRCConnectionReestablishmentCompletev920IEs::itemsPres[2] = {
	0,
	0,
};
const RRCConnectionReestablishmentCompletev920IEs::Info RRCConnectionReestablishmentCompletev920IEs::theInfo = {
	RRCConnectionReestablishmentCompletev920IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *RRCConnectionReestablishmentCompleter8IEs::itemsInfo[1] = {
	&RRCConnectionReestablishmentCompletev920IEs::theInfo,
};
bool RRCConnectionReestablishmentCompleter8IEs::itemsPres[1] = {
	0,
};
const RRCConnectionReestablishmentCompleter8IEs::Info RRCConnectionReestablishmentCompleter8IEs::theInfo = {
	RRCConnectionReestablishmentCompleter8IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *RRCConnectionReestablishmentCompleteCriticalExtensionsCriticalExtensionsFuture::itemsInfo[0] = {
};
bool RRCConnectionReestablishmentCompleteCriticalExtensionsCriticalExtensionsFuture::itemsPres[0] = {
};
const RRCConnectionReestablishmentCompleteCriticalExtensionsCriticalExtensionsFuture::Info RRCConnectionReestablishmentCompleteCriticalExtensionsCriticalExtensionsFuture::theInfo = {
	RRCConnectionReestablishmentCompleteCriticalExtensionsCriticalExtensionsFuture::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *RRCConnectionReestablishmentCompleteCriticalExtensions::choicesInfo[2] = {
	&RRCConnectionReestablishmentCompleter8IEs::theInfo,
	&RRCConnectionReestablishmentCompleteCriticalExtensionsCriticalExtensionsFuture::theInfo,
};
const RRCConnectionReestablishmentCompleteCriticalExtensions::Info RRCConnectionReestablishmentCompleteCriticalExtensions::theInfo = {
	RRCConnectionReestablishmentCompleteCriticalExtensions::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *RRCConnectionReestablishmentComplete::itemsInfo[2] = {
	&RRCTransactionIdentifier::theInfo,
	&RRCConnectionReestablishmentCompleteCriticalExtensions::theInfo,
};
bool RRCConnectionReestablishmentComplete::itemsPres[2] = {
	1,
	1,
};
const RRCConnectionReestablishmentComplete::Info RRCConnectionReestablishmentComplete::theInfo = {
	RRCConnectionReestablishmentComplete::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
RRCConnectionReestablishmentComplete::RRCConnectionReestablishmentComplete(const RRCTransactionIdentifier& rrcTransactionIdentifier, const RRCConnectionReestablishmentCompleteCriticalExtensions& rRCConnectionReestablishmentCompleteCriticalExtensions) : Sequence(&theInfo) {
	setRrcTransactionIdentifier(rrcTransactionIdentifier);
	setRRCConnectionReestablishmentCompleteCriticalExtensions(rRCConnectionReestablishmentCompleteCriticalExtensions);
}

const void *RegisteredMME::itemsInfo[3] = {
	&PLMNIdentity::theInfo,
	&RegisteredMMEMmegi::theInfo,
	&MMEC::theInfo,
};
bool RegisteredMME::itemsPres[3] = {
	0,
	1,
	1,
};
const RegisteredMME::Info RegisteredMME::theInfo = {
	RegisteredMME::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};
RegisteredMME::RegisteredMME(const RegisteredMMEMmegi& registeredMMEMmegi, const MMEC& mmec) : Sequence(&theInfo) {
	setRegisteredMMEMmegi(registeredMMEMmegi);
	setMmec(mmec);
}

const void *RRCConnectionSetupCompletev1020IEsNonCriticalExtension::itemsInfo[0] = {
};
bool RRCConnectionSetupCompletev1020IEsNonCriticalExtension::itemsPres[0] = {
};
const RRCConnectionSetupCompletev1020IEsNonCriticalExtension::Info RRCConnectionSetupCompletev1020IEsNonCriticalExtension::theInfo = {
	RRCConnectionSetupCompletev1020IEsNonCriticalExtension::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *RRCConnectionSetupCompletev1020IEs::itemsInfo[5] = {
	&RRCConnectionSetupCompletev1020IEsgummei_Type_r10::theInfo,
	&RRCConnectionSetupCompletev1020IEsrlf_InfoAvailable_r10::theInfo,
	&RRCConnectionSetupCompletev1020IEslogMeasAvailable_r10::theInfo,
	&RRCConnectionSetupCompletev1020IEsrn_SubframeConfigReq_r10::theInfo,
	&RRCConnectionSetupCompletev1020IEsNonCriticalExtension::theInfo,
};
bool RRCConnectionSetupCompletev1020IEs::itemsPres[5] = {
	0,
	0,
	0,
	0,
	0,
};
const RRCConnectionSetupCompletev1020IEs::Info RRCConnectionSetupCompletev1020IEs::theInfo = {
	RRCConnectionSetupCompletev1020IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 5, 0
};

const void *RRCConnectionSetupCompletev8a0IEs::itemsInfo[2] = {
	&RRCConnectionSetupCompletev8a0IEsLateNonCriticalExtension::theInfo,
	&RRCConnectionSetupCompletev1020IEs::theInfo,
};
bool RRCConnectionSetupCompletev8a0IEs::itemsPres[2] = {
	0,
	0,
};
const RRCConnectionSetupCompletev8a0IEs::Info RRCConnectionSetupCompletev8a0IEs::theInfo = {
	RRCConnectionSetupCompletev8a0IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *RRCConnectionSetupCompleter8IEs::itemsInfo[4] = {
	&RRCConnectionSetupCompleter8IEsSelectedPLMNIdentity::theInfo,
	&RegisteredMME::theInfo,
	&DedicatedInfoNAS::theInfo,
	&RRCConnectionSetupCompletev8a0IEs::theInfo,
};
bool RRCConnectionSetupCompleter8IEs::itemsPres[4] = {
	1,
	0,
	1,
	0,
};
const RRCConnectionSetupCompleter8IEs::Info RRCConnectionSetupCompleter8IEs::theInfo = {
	RRCConnectionSetupCompleter8IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
};
RRCConnectionSetupCompleter8IEs::RRCConnectionSetupCompleter8IEs(const RRCConnectionSetupCompleter8IEsSelectedPLMNIdentity& rRCConnectionSetupCompleter8IEsSelectedPLMNIdentity, const DedicatedInfoNAS& dedicatedInfoNAS) : Sequence(&theInfo) {
	setRRCConnectionSetupCompleter8IEsSelectedPLMNIdentity(rRCConnectionSetupCompleter8IEsSelectedPLMNIdentity);
	setDedicatedInfoNAS(dedicatedInfoNAS);
}

const void *RRCConnectionSetupCompleteCriticalExtensionsC1::choicesInfo[4] = {
	&RRCConnectionSetupCompleter8IEs::theInfo,
	&RRCConnectionSetupCompleteCriticalExtensionsC1Spare3::theInfo,
	&RRCConnectionSetupCompleteCriticalExtensionsC1Spare2::theInfo,
	&RRCConnectionSetupCompleteCriticalExtensionsC1Spare1::theInfo,
};
const RRCConnectionSetupCompleteCriticalExtensionsC1::Info RRCConnectionSetupCompleteCriticalExtensionsC1::theInfo = {
	RRCConnectionSetupCompleteCriticalExtensionsC1::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	3
};

const void *RRCConnectionSetupCompleteCriticalExtensionsCriticalExtensionsFuture::itemsInfo[0] = {
};
bool RRCConnectionSetupCompleteCriticalExtensionsCriticalExtensionsFuture::itemsPres[0] = {
};
const RRCConnectionSetupCompleteCriticalExtensionsCriticalExtensionsFuture::Info RRCConnectionSetupCompleteCriticalExtensionsCriticalExtensionsFuture::theInfo = {
	RRCConnectionSetupCompleteCriticalExtensionsCriticalExtensionsFuture::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *RRCConnectionSetupCompleteCriticalExtensions::choicesInfo[2] = {
	&RRCConnectionSetupCompleteCriticalExtensionsC1::theInfo,
	&RRCConnectionSetupCompleteCriticalExtensionsCriticalExtensionsFuture::theInfo,
};
const RRCConnectionSetupCompleteCriticalExtensions::Info RRCConnectionSetupCompleteCriticalExtensions::theInfo = {
	RRCConnectionSetupCompleteCriticalExtensions::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *RRCConnectionSetupComplete::itemsInfo[2] = {
	&RRCTransactionIdentifier::theInfo,
	&RRCConnectionSetupCompleteCriticalExtensions::theInfo,
};
bool RRCConnectionSetupComplete::itemsPres[2] = {
	1,
	1,
};
const RRCConnectionSetupComplete::Info RRCConnectionSetupComplete::theInfo = {
	RRCConnectionSetupComplete::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
RRCConnectionSetupComplete::RRCConnectionSetupComplete(const RRCTransactionIdentifier& rrcTransactionIdentifier, const RRCConnectionSetupCompleteCriticalExtensions& rRCConnectionSetupCompleteCriticalExtensions) : Sequence(&theInfo) {
	setRrcTransactionIdentifier(rrcTransactionIdentifier);
	setRRCConnectionSetupCompleteCriticalExtensions(rRCConnectionSetupCompleteCriticalExtensions);
}

const void *SecurityModeCompletev8a0IEsNonCriticalExtension::itemsInfo[0] = {
};
bool SecurityModeCompletev8a0IEsNonCriticalExtension::itemsPres[0] = {
};
const SecurityModeCompletev8a0IEsNonCriticalExtension::Info SecurityModeCompletev8a0IEsNonCriticalExtension::theInfo = {
	SecurityModeCompletev8a0IEsNonCriticalExtension::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *SecurityModeCompletev8a0IEs::itemsInfo[2] = {
	&SecurityModeCompletev8a0IEsLateNonCriticalExtension::theInfo,
	&SecurityModeCompletev8a0IEsNonCriticalExtension::theInfo,
};
bool SecurityModeCompletev8a0IEs::itemsPres[2] = {
	0,
	0,
};
const SecurityModeCompletev8a0IEs::Info SecurityModeCompletev8a0IEs::theInfo = {
	SecurityModeCompletev8a0IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *SecurityModeCompleter8IEs::itemsInfo[1] = {
	&SecurityModeCompletev8a0IEs::theInfo,
};
bool SecurityModeCompleter8IEs::itemsPres[1] = {
	0,
};
const SecurityModeCompleter8IEs::Info SecurityModeCompleter8IEs::theInfo = {
	SecurityModeCompleter8IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SecurityModeCompleteCriticalExtensionsCriticalExtensionsFuture::itemsInfo[0] = {
};
bool SecurityModeCompleteCriticalExtensionsCriticalExtensionsFuture::itemsPres[0] = {
};
const SecurityModeCompleteCriticalExtensionsCriticalExtensionsFuture::Info SecurityModeCompleteCriticalExtensionsCriticalExtensionsFuture::theInfo = {
	SecurityModeCompleteCriticalExtensionsCriticalExtensionsFuture::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *SecurityModeCompleteCriticalExtensions::choicesInfo[2] = {
	&SecurityModeCompleter8IEs::theInfo,
	&SecurityModeCompleteCriticalExtensionsCriticalExtensionsFuture::theInfo,
};
const SecurityModeCompleteCriticalExtensions::Info SecurityModeCompleteCriticalExtensions::theInfo = {
	SecurityModeCompleteCriticalExtensions::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *SecurityModeComplete::itemsInfo[2] = {
	&RRCTransactionIdentifier::theInfo,
	&SecurityModeCompleteCriticalExtensions::theInfo,
};
bool SecurityModeComplete::itemsPres[2] = {
	1,
	1,
};
const SecurityModeComplete::Info SecurityModeComplete::theInfo = {
	SecurityModeComplete::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
SecurityModeComplete::SecurityModeComplete(const RRCTransactionIdentifier& rrcTransactionIdentifier, const SecurityModeCompleteCriticalExtensions& securityModeCompleteCriticalExtensions) : Sequence(&theInfo) {
	setRrcTransactionIdentifier(rrcTransactionIdentifier);
	setSecurityModeCompleteCriticalExtensions(securityModeCompleteCriticalExtensions);
}

const void *SecurityModeFailurev8a0IEsNonCriticalExtension::itemsInfo[0] = {
};
bool SecurityModeFailurev8a0IEsNonCriticalExtension::itemsPres[0] = {
};
const SecurityModeFailurev8a0IEsNonCriticalExtension::Info SecurityModeFailurev8a0IEsNonCriticalExtension::theInfo = {
	SecurityModeFailurev8a0IEsNonCriticalExtension::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *SecurityModeFailurev8a0IEs::itemsInfo[2] = {
	&SecurityModeFailurev8a0IEsLateNonCriticalExtension::theInfo,
	&SecurityModeFailurev8a0IEsNonCriticalExtension::theInfo,
};
bool SecurityModeFailurev8a0IEs::itemsPres[2] = {
	0,
	0,
};
const SecurityModeFailurev8a0IEs::Info SecurityModeFailurev8a0IEs::theInfo = {
	SecurityModeFailurev8a0IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *SecurityModeFailurer8IEs::itemsInfo[1] = {
	&SecurityModeFailurev8a0IEs::theInfo,
};
bool SecurityModeFailurer8IEs::itemsPres[1] = {
	0,
};
const SecurityModeFailurer8IEs::Info SecurityModeFailurer8IEs::theInfo = {
	SecurityModeFailurer8IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SecurityModeFailureCriticalExtensionsCriticalExtensionsFuture::itemsInfo[0] = {
};
bool SecurityModeFailureCriticalExtensionsCriticalExtensionsFuture::itemsPres[0] = {
};
const SecurityModeFailureCriticalExtensionsCriticalExtensionsFuture::Info SecurityModeFailureCriticalExtensionsCriticalExtensionsFuture::theInfo = {
	SecurityModeFailureCriticalExtensionsCriticalExtensionsFuture::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *SecurityModeFailureCriticalExtensions::choicesInfo[2] = {
	&SecurityModeFailurer8IEs::theInfo,
	&SecurityModeFailureCriticalExtensionsCriticalExtensionsFuture::theInfo,
};
const SecurityModeFailureCriticalExtensions::Info SecurityModeFailureCriticalExtensions::theInfo = {
	SecurityModeFailureCriticalExtensions::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *SecurityModeFailure::itemsInfo[2] = {
	&RRCTransactionIdentifier::theInfo,
	&SecurityModeFailureCriticalExtensions::theInfo,
};
bool SecurityModeFailure::itemsPres[2] = {
	1,
	1,
};
const SecurityModeFailure::Info SecurityModeFailure::theInfo = {
	SecurityModeFailure::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
SecurityModeFailure::SecurityModeFailure(const RRCTransactionIdentifier& rrcTransactionIdentifier, const SecurityModeFailureCriticalExtensions& securityModeFailureCriticalExtensions) : Sequence(&theInfo) {
	setRrcTransactionIdentifier(rrcTransactionIdentifier);
	setSecurityModeFailureCriticalExtensions(securityModeFailureCriticalExtensions);
}

const void *UECapabilityRATContainer::itemsInfo[2] = {
	&RATType::theInfo,
	&UECapabilityRATContainerUeCapabilityRATContainer::theInfo,
};
bool UECapabilityRATContainer::itemsPres[2] = {
	1,
	1,
};
const UECapabilityRATContainer::Info UECapabilityRATContainer::theInfo = {
	UECapabilityRATContainer::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
UECapabilityRATContainer::UECapabilityRATContainer(const RATType& ratType, const UECapabilityRATContainerUeCapabilityRATContainer& uECapabilityRATContainerUeCapabilityRATContainer) : Sequence(&theInfo) {
	setRatType(ratType);
	setUECapabilityRATContainerUeCapabilityRATContainer(uECapabilityRATContainerUeCapabilityRATContainer);
}

const void *UECapabilityInformationv8a0IEsNonCriticalExtension::itemsInfo[0] = {
};
bool UECapabilityInformationv8a0IEsNonCriticalExtension::itemsPres[0] = {
};
const UECapabilityInformationv8a0IEsNonCriticalExtension::Info UECapabilityInformationv8a0IEsNonCriticalExtension::theInfo = {
	UECapabilityInformationv8a0IEsNonCriticalExtension::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *UECapabilityInformationv8a0IEs::itemsInfo[2] = {
	&UECapabilityInformationv8a0IEsLateNonCriticalExtension::theInfo,
	&UECapabilityInformationv8a0IEsNonCriticalExtension::theInfo,
};
bool UECapabilityInformationv8a0IEs::itemsPres[2] = {
	0,
	0,
};
const UECapabilityInformationv8a0IEs::Info UECapabilityInformationv8a0IEs::theInfo = {
	UECapabilityInformationv8a0IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *UECapabilityInformationr8IEs::itemsInfo[2] = {
	&UECapabilityRATContainerList::theInfo,
	&UECapabilityInformationv8a0IEs::theInfo,
};
bool UECapabilityInformationr8IEs::itemsPres[2] = {
	1,
	0,
};
const UECapabilityInformationr8IEs::Info UECapabilityInformationr8IEs::theInfo = {
	UECapabilityInformationr8IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};
UECapabilityInformationr8IEs::UECapabilityInformationr8IEs(const UECapabilityRATContainerList& ueCapabilityRATContainerList) : Sequence(&theInfo) {
	setUeCapabilityRATContainerList(ueCapabilityRATContainerList);
}

const void *UECapabilityInformationCriticalExtensionsC1::choicesInfo[8] = {
	&UECapabilityInformationr8IEs::theInfo,
	&UECapabilityInformationCriticalExtensionsC1Spare7::theInfo,
	&UECapabilityInformationCriticalExtensionsC1Spare6::theInfo,
	&UECapabilityInformationCriticalExtensionsC1Spare5::theInfo,
	&UECapabilityInformationCriticalExtensionsC1Spare4::theInfo,
	&UECapabilityInformationCriticalExtensionsC1Spare3::theInfo,
	&UECapabilityInformationCriticalExtensionsC1Spare2::theInfo,
	&UECapabilityInformationCriticalExtensionsC1Spare1::theInfo,
};
const UECapabilityInformationCriticalExtensionsC1::Info UECapabilityInformationCriticalExtensionsC1::theInfo = {
	UECapabilityInformationCriticalExtensionsC1::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	7
};

const void *UECapabilityInformationCriticalExtensionsCriticalExtensionsFuture::itemsInfo[0] = {
};
bool UECapabilityInformationCriticalExtensionsCriticalExtensionsFuture::itemsPres[0] = {
};
const UECapabilityInformationCriticalExtensionsCriticalExtensionsFuture::Info UECapabilityInformationCriticalExtensionsCriticalExtensionsFuture::theInfo = {
	UECapabilityInformationCriticalExtensionsCriticalExtensionsFuture::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *UECapabilityInformationCriticalExtensions::choicesInfo[2] = {
	&UECapabilityInformationCriticalExtensionsC1::theInfo,
	&UECapabilityInformationCriticalExtensionsCriticalExtensionsFuture::theInfo,
};
const UECapabilityInformationCriticalExtensions::Info UECapabilityInformationCriticalExtensions::theInfo = {
	UECapabilityInformationCriticalExtensions::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *UECapabilityInformation::itemsInfo[2] = {
	&RRCTransactionIdentifier::theInfo,
	&UECapabilityInformationCriticalExtensions::theInfo,
};
bool UECapabilityInformation::itemsPres[2] = {
	1,
	1,
};
const UECapabilityInformation::Info UECapabilityInformation::theInfo = {
	UECapabilityInformation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
UECapabilityInformation::UECapabilityInformation(const RRCTransactionIdentifier& rrcTransactionIdentifier, const UECapabilityInformationCriticalExtensions& uECapabilityInformationCriticalExtensions) : Sequence(&theInfo) {
	setRrcTransactionIdentifier(rrcTransactionIdentifier);
	setUECapabilityInformationCriticalExtensions(uECapabilityInformationCriticalExtensions);
}

const void *ULHandoverPreparationTransferv8a0IEsNonCriticalExtension::itemsInfo[0] = {
};
bool ULHandoverPreparationTransferv8a0IEsNonCriticalExtension::itemsPres[0] = {
};
const ULHandoverPreparationTransferv8a0IEsNonCriticalExtension::Info ULHandoverPreparationTransferv8a0IEsNonCriticalExtension::theInfo = {
	ULHandoverPreparationTransferv8a0IEsNonCriticalExtension::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *ULHandoverPreparationTransferv8a0IEs::itemsInfo[2] = {
	&ULHandoverPreparationTransferv8a0IEsLateNonCriticalExtension::theInfo,
	&ULHandoverPreparationTransferv8a0IEsNonCriticalExtension::theInfo,
};
bool ULHandoverPreparationTransferv8a0IEs::itemsPres[2] = {
	0,
	0,
};
const ULHandoverPreparationTransferv8a0IEs::Info ULHandoverPreparationTransferv8a0IEs::theInfo = {
	ULHandoverPreparationTransferv8a0IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *ULHandoverPreparationTransferr8IEs::itemsInfo[4] = {
	&CDMA2000Type::theInfo,
	&ULHandoverPreparationTransferr8IEsMeid::theInfo,
	&DedicatedInfoCDMA2000::theInfo,
	&ULHandoverPreparationTransferv8a0IEs::theInfo,
};
bool ULHandoverPreparationTransferr8IEs::itemsPres[4] = {
	1,
	0,
	1,
	0,
};
const ULHandoverPreparationTransferr8IEs::Info ULHandoverPreparationTransferr8IEs::theInfo = {
	ULHandoverPreparationTransferr8IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
};
ULHandoverPreparationTransferr8IEs::ULHandoverPreparationTransferr8IEs(const CDMA2000Type& cdma2000Type, const DedicatedInfoCDMA2000& dedicatedInfo) : Sequence(&theInfo) {
	setCdma2000Type(cdma2000Type);
	setDedicatedInfo(dedicatedInfo);
}

const void *ULHandoverPreparationTransferCriticalExtensionsC1::choicesInfo[4] = {
	&ULHandoverPreparationTransferr8IEs::theInfo,
	&ULHandoverPreparationTransferCriticalExtensionsC1Spare3::theInfo,
	&ULHandoverPreparationTransferCriticalExtensionsC1Spare2::theInfo,
	&ULHandoverPreparationTransferCriticalExtensionsC1Spare1::theInfo,
};
const ULHandoverPreparationTransferCriticalExtensionsC1::Info ULHandoverPreparationTransferCriticalExtensionsC1::theInfo = {
	ULHandoverPreparationTransferCriticalExtensionsC1::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	3
};

const void *ULHandoverPreparationTransferCriticalExtensionsCriticalExtensionsFuture::itemsInfo[0] = {
};
bool ULHandoverPreparationTransferCriticalExtensionsCriticalExtensionsFuture::itemsPres[0] = {
};
const ULHandoverPreparationTransferCriticalExtensionsCriticalExtensionsFuture::Info ULHandoverPreparationTransferCriticalExtensionsCriticalExtensionsFuture::theInfo = {
	ULHandoverPreparationTransferCriticalExtensionsCriticalExtensionsFuture::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *ULHandoverPreparationTransferCriticalExtensions::choicesInfo[2] = {
	&ULHandoverPreparationTransferCriticalExtensionsC1::theInfo,
	&ULHandoverPreparationTransferCriticalExtensionsCriticalExtensionsFuture::theInfo,
};
const ULHandoverPreparationTransferCriticalExtensions::Info ULHandoverPreparationTransferCriticalExtensions::theInfo = {
	ULHandoverPreparationTransferCriticalExtensions::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULHandoverPreparationTransfer::itemsInfo[1] = {
	&ULHandoverPreparationTransferCriticalExtensions::theInfo,
};
bool ULHandoverPreparationTransfer::itemsPres[1] = {
	1,
};
const ULHandoverPreparationTransfer::Info ULHandoverPreparationTransfer::theInfo = {
	ULHandoverPreparationTransfer::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
ULHandoverPreparationTransfer::ULHandoverPreparationTransfer(const ULHandoverPreparationTransferCriticalExtensions& uLHandoverPreparationTransferCriticalExtensions) : Sequence(&theInfo) {
	setULHandoverPreparationTransferCriticalExtensions(uLHandoverPreparationTransferCriticalExtensions);
}

const void *ULInformationTransferr8IEsDedicatedInfoType::choicesInfo[3] = {
	&DedicatedInfoNAS::theInfo,
	&DedicatedInfoCDMA2000::theInfo,
	&DedicatedInfoCDMA2000::theInfo,
};
const ULInformationTransferr8IEsDedicatedInfoType::Info ULInformationTransferr8IEsDedicatedInfoType::theInfo = {
	ULInformationTransferr8IEsDedicatedInfoType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *ULInformationTransferv8a0IEsNonCriticalExtension::itemsInfo[0] = {
};
bool ULInformationTransferv8a0IEsNonCriticalExtension::itemsPres[0] = {
};
const ULInformationTransferv8a0IEsNonCriticalExtension::Info ULInformationTransferv8a0IEsNonCriticalExtension::theInfo = {
	ULInformationTransferv8a0IEsNonCriticalExtension::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *ULInformationTransferv8a0IEs::itemsInfo[2] = {
	&ULInformationTransferv8a0IEsLateNonCriticalExtension::theInfo,
	&ULInformationTransferv8a0IEsNonCriticalExtension::theInfo,
};
bool ULInformationTransferv8a0IEs::itemsPres[2] = {
	0,
	0,
};
const ULInformationTransferv8a0IEs::Info ULInformationTransferv8a0IEs::theInfo = {
	ULInformationTransferv8a0IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *ULInformationTransferr8IEs::itemsInfo[2] = {
	&ULInformationTransferr8IEsDedicatedInfoType::theInfo,
	&ULInformationTransferv8a0IEs::theInfo,
};
bool ULInformationTransferr8IEs::itemsPres[2] = {
	1,
	0,
};
const ULInformationTransferr8IEs::Info ULInformationTransferr8IEs::theInfo = {
	ULInformationTransferr8IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};
ULInformationTransferr8IEs::ULInformationTransferr8IEs(const ULInformationTransferr8IEsDedicatedInfoType& uLInformationTransferr8IEsDedicatedInfoType) : Sequence(&theInfo) {
	setULInformationTransferr8IEsDedicatedInfoType(uLInformationTransferr8IEsDedicatedInfoType);
}

const void *ULInformationTransferCriticalExtensionsC1::choicesInfo[4] = {
	&ULInformationTransferr8IEs::theInfo,
	&ULInformationTransferCriticalExtensionsC1Spare3::theInfo,
	&ULInformationTransferCriticalExtensionsC1Spare2::theInfo,
	&ULInformationTransferCriticalExtensionsC1Spare1::theInfo,
};
const ULInformationTransferCriticalExtensionsC1::Info ULInformationTransferCriticalExtensionsC1::theInfo = {
	ULInformationTransferCriticalExtensionsC1::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	3
};

const void *ULInformationTransferCriticalExtensionsCriticalExtensionsFuture::itemsInfo[0] = {
};
bool ULInformationTransferCriticalExtensionsCriticalExtensionsFuture::itemsPres[0] = {
};
const ULInformationTransferCriticalExtensionsCriticalExtensionsFuture::Info ULInformationTransferCriticalExtensionsCriticalExtensionsFuture::theInfo = {
	ULInformationTransferCriticalExtensionsCriticalExtensionsFuture::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *ULInformationTransferCriticalExtensions::choicesInfo[2] = {
	&ULInformationTransferCriticalExtensionsC1::theInfo,
	&ULInformationTransferCriticalExtensionsCriticalExtensionsFuture::theInfo,
};
const ULInformationTransferCriticalExtensions::Info ULInformationTransferCriticalExtensions::theInfo = {
	ULInformationTransferCriticalExtensions::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULInformationTransfer::itemsInfo[1] = {
	&ULInformationTransferCriticalExtensions::theInfo,
};
bool ULInformationTransfer::itemsPres[1] = {
	1,
};
const ULInformationTransfer::Info ULInformationTransfer::theInfo = {
	ULInformationTransfer::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
ULInformationTransfer::ULInformationTransfer(const ULInformationTransferCriticalExtensions& uLInformationTransferCriticalExtensions) : Sequence(&theInfo) {
	setULInformationTransferCriticalExtensions(uLInformationTransferCriticalExtensions);
}

const void *DRBCountInfo::itemsInfo[3] = {
	&DRBIdentity::theInfo,
	&DRBCountInfoCountUplink::theInfo,
	&DRBCountInfoCountDownlink::theInfo,
};
bool DRBCountInfo::itemsPres[3] = {
	1,
	1,
	1,
};
const DRBCountInfo::Info DRBCountInfo::theInfo = {
	DRBCountInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};
DRBCountInfo::DRBCountInfo(const DRBIdentity& drbIdentity, const DRBCountInfoCountUplink& dRBCountInfoCountUplink, const DRBCountInfoCountDownlink& dRBCountInfoCountDownlink) : Sequence(&theInfo) {
	setDrbIdentity(drbIdentity);
	setDRBCountInfoCountUplink(dRBCountInfoCountUplink);
	setDRBCountInfoCountDownlink(dRBCountInfoCountDownlink);
}

const void *CounterCheckResponsev8a0IEsNonCriticalExtension::itemsInfo[0] = {
};
bool CounterCheckResponsev8a0IEsNonCriticalExtension::itemsPres[0] = {
};
const CounterCheckResponsev8a0IEsNonCriticalExtension::Info CounterCheckResponsev8a0IEsNonCriticalExtension::theInfo = {
	CounterCheckResponsev8a0IEsNonCriticalExtension::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *CounterCheckResponsev8a0IEs::itemsInfo[2] = {
	&CounterCheckResponsev8a0IEsLateNonCriticalExtension::theInfo,
	&CounterCheckResponsev8a0IEsNonCriticalExtension::theInfo,
};
bool CounterCheckResponsev8a0IEs::itemsPres[2] = {
	0,
	0,
};
const CounterCheckResponsev8a0IEs::Info CounterCheckResponsev8a0IEs::theInfo = {
	CounterCheckResponsev8a0IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *CounterCheckResponser8IEs::itemsInfo[2] = {
	&DRBCountInfoList::theInfo,
	&CounterCheckResponsev8a0IEs::theInfo,
};
bool CounterCheckResponser8IEs::itemsPres[2] = {
	1,
	0,
};
const CounterCheckResponser8IEs::Info CounterCheckResponser8IEs::theInfo = {
	CounterCheckResponser8IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};
CounterCheckResponser8IEs::CounterCheckResponser8IEs(const DRBCountInfoList& drbCountInfoList) : Sequence(&theInfo) {
	setDrbCountInfoList(drbCountInfoList);
}

const void *CounterCheckResponseCriticalExtensionsCriticalExtensionsFuture::itemsInfo[0] = {
};
bool CounterCheckResponseCriticalExtensionsCriticalExtensionsFuture::itemsPres[0] = {
};
const CounterCheckResponseCriticalExtensionsCriticalExtensionsFuture::Info CounterCheckResponseCriticalExtensionsCriticalExtensionsFuture::theInfo = {
	CounterCheckResponseCriticalExtensionsCriticalExtensionsFuture::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *CounterCheckResponseCriticalExtensions::choicesInfo[2] = {
	&CounterCheckResponser8IEs::theInfo,
	&CounterCheckResponseCriticalExtensionsCriticalExtensionsFuture::theInfo,
};
const CounterCheckResponseCriticalExtensions::Info CounterCheckResponseCriticalExtensions::theInfo = {
	CounterCheckResponseCriticalExtensions::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *CounterCheckResponse::itemsInfo[2] = {
	&RRCTransactionIdentifier::theInfo,
	&CounterCheckResponseCriticalExtensions::theInfo,
};
bool CounterCheckResponse::itemsPres[2] = {
	1,
	1,
};
const CounterCheckResponse::Info CounterCheckResponse::theInfo = {
	CounterCheckResponse::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
CounterCheckResponse::CounterCheckResponse(const RRCTransactionIdentifier& rrcTransactionIdentifier, const CounterCheckResponseCriticalExtensions& counterCheckResponseCriticalExtensions) : Sequence(&theInfo) {
	setRrcTransactionIdentifier(rrcTransactionIdentifier);
	setCounterCheckResponseCriticalExtensions(counterCheckResponseCriticalExtensions);
}

const void *UEInformationResponser9IEsRachReportr9::itemsInfo[2] = {
	&UEInformationResponser9IEsRachReportr9NumberOfPreamblesSentr9::theInfo,
	&UEInformationResponser9IEsRachReportr9ContentionDetectedr9::theInfo,
};
bool UEInformationResponser9IEsRachReportr9::itemsPres[2] = {
	1,
	1,
};
const UEInformationResponser9IEsRachReportr9::Info UEInformationResponser9IEsRachReportr9::theInfo = {
	UEInformationResponser9IEsRachReportr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
UEInformationResponser9IEsRachReportr9::UEInformationResponser9IEsRachReportr9(const UEInformationResponser9IEsRachReportr9NumberOfPreamblesSentr9& uEInformationResponser9IEsRachReportr9NumberOfPreamblesSentr9, const UEInformationResponser9IEsRachReportr9ContentionDetectedr9& uEInformationResponser9IEsRachReportr9ContentionDetectedr9) : Sequence(&theInfo) {
	setUEInformationResponser9IEsRachReportr9NumberOfPreamblesSentr9(uEInformationResponser9IEsRachReportr9NumberOfPreamblesSentr9);
	setUEInformationResponser9IEsRachReportr9ContentionDetectedr9(uEInformationResponser9IEsRachReportr9ContentionDetectedr9);
}

const void *RLFReportr9MeasResultLastServCellr9::itemsInfo[2] = {
	&RSRPRange::theInfo,
	&RSRQRange::theInfo,
};
bool RLFReportr9MeasResultLastServCellr9::itemsPres[2] = {
	1,
	0,
};
const RLFReportr9MeasResultLastServCellr9::Info RLFReportr9MeasResultLastServCellr9::theInfo = {
	RLFReportr9MeasResultLastServCellr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};
RLFReportr9MeasResultLastServCellr9::RLFReportr9MeasResultLastServCellr9(const RSRPRange& rsrpResultr9) : Sequence(&theInfo) {
	setRsrpResultr9(rsrpResultr9);
}

const void *MeasResult2EUTRAr9::itemsInfo[2] = {
	&ARFCNValueEUTRA::theInfo,
	&MeasResultListEUTRA::theInfo,
};
bool MeasResult2EUTRAr9::itemsPres[2] = {
	1,
	1,
};
const MeasResult2EUTRAr9::Info MeasResult2EUTRAr9::theInfo = {
	MeasResult2EUTRAr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
MeasResult2EUTRAr9::MeasResult2EUTRAr9(const ARFCNValueEUTRA& carrierFreqr9, const MeasResultListEUTRA& measResultListr9) : Sequence(&theInfo) {
	setCarrierFreqr9(carrierFreqr9);
	setMeasResultListr9(measResultListr9);
}

const void *MeasResult2UTRAr9::itemsInfo[2] = {
	&ARFCNValueUTRA::theInfo,
	&MeasResultListUTRA::theInfo,
};
bool MeasResult2UTRAr9::itemsPres[2] = {
	1,
	1,
};
const MeasResult2UTRAr9::Info MeasResult2UTRAr9::theInfo = {
	MeasResult2UTRAr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
MeasResult2UTRAr9::MeasResult2UTRAr9(const ARFCNValueUTRA& carrierFreqr9, const MeasResultListUTRA& measResultListr9) : Sequence(&theInfo) {
	setCarrierFreqr9(carrierFreqr9);
	setMeasResultListr9(measResultListr9);
}

const void *MeasResult2CDMA2000r9::itemsInfo[2] = {
	&CarrierFreqCDMA2000::theInfo,
	&MeasResultsCDMA2000::theInfo,
};
bool MeasResult2CDMA2000r9::itemsPres[2] = {
	1,
	1,
};
const MeasResult2CDMA2000r9::Info MeasResult2CDMA2000r9::theInfo = {
	MeasResult2CDMA2000r9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
MeasResult2CDMA2000r9::MeasResult2CDMA2000r9(const CarrierFreqCDMA2000& carrierFreqr9, const MeasResultsCDMA2000& measResultListr9) : Sequence(&theInfo) {
	setCarrierFreqr9(carrierFreqr9);
	setMeasResultListr9(measResultListr9);
}

const void *RLFReportr9MeasResultNeighCellsr9::itemsInfo[4] = {
	&MeasResultList2EUTRAr9::theInfo,
	&MeasResultList2UTRAr9::theInfo,
	&MeasResultListGERAN::theInfo,
	&MeasResultList2CDMA2000r9::theInfo,
};
bool RLFReportr9MeasResultNeighCellsr9::itemsPres[4] = {
	0,
	0,
	0,
	0,
};
const RLFReportr9MeasResultNeighCellsr9::Info RLFReportr9MeasResultNeighCellsr9::theInfo = {
	RLFReportr9MeasResultNeighCellsr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 4, 0
};

const void *RLFReportr9FailedPCellIdr10Pciarfcnr10::itemsInfo[2] = {
	&PhysCellId::theInfo,
	&ARFCNValueEUTRA::theInfo,
};
bool RLFReportr9FailedPCellIdr10Pciarfcnr10::itemsPres[2] = {
	1,
	1,
};
const RLFReportr9FailedPCellIdr10Pciarfcnr10::Info RLFReportr9FailedPCellIdr10Pciarfcnr10::theInfo = {
	RLFReportr9FailedPCellIdr10Pciarfcnr10::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
RLFReportr9FailedPCellIdr10Pciarfcnr10::RLFReportr9FailedPCellIdr10Pciarfcnr10(const PhysCellId& physCellIdr10, const ARFCNValueEUTRA& carrierFreqr10) : Sequence(&theInfo) {
	setPhysCellIdr10(physCellIdr10);
	setCarrierFreqr10(carrierFreqr10);
}

const void *RLFReportr9FailedPCellIdr10::choicesInfo[2] = {
	&CellGlobalIdEUTRA::theInfo,
	&RLFReportr9FailedPCellIdr10Pciarfcnr10::theInfo,
};
const RLFReportr9FailedPCellIdr10::Info RLFReportr9FailedPCellIdr10::theInfo = {
	RLFReportr9FailedPCellIdr10::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *RLFReportr9::itemsInfo[8] = {
	&RLFReportr9MeasResultLastServCellr9::theInfo,
	&RLFReportr9MeasResultNeighCellsr9::theInfo,
	&LocationInfor10::theInfo,
	&RLFReportr9FailedPCellIdr10::theInfo,
	&CellGlobalIdEUTRA::theInfo,
	&RLFReportr9TimeConnFailurer10::theInfo,
	&RLFReportr9connectionFailureType_r10::theInfo,
	&CellGlobalIdEUTRA::theInfo,
};
bool RLFReportr9::itemsPres[8] = {
	1,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
const RLFReportr9::Info RLFReportr9::theInfo = {
	RLFReportr9::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	2, 1, 6
};
RLFReportr9::RLFReportr9(const RLFReportr9MeasResultLastServCellr9& rLFReportr9MeasResultLastServCellr9) : Sequence(&theInfo) {
	setRLFReportr9MeasResultLastServCellr9(rLFReportr9MeasResultLastServCellr9);
}

const void *LogMeasInfor10MeasResultServCellr10::itemsInfo[2] = {
	&RSRPRange::theInfo,
	&RSRQRange::theInfo,
};
bool LogMeasInfor10MeasResultServCellr10::itemsPres[2] = {
	1,
	1,
};
const LogMeasInfor10MeasResultServCellr10::Info LogMeasInfor10MeasResultServCellr10::theInfo = {
	LogMeasInfor10MeasResultServCellr10::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
LogMeasInfor10MeasResultServCellr10::LogMeasInfor10MeasResultServCellr10(const RSRPRange& rsrpResultr10, const RSRQRange& rsrqResultr10) : Sequence(&theInfo) {
	setRsrpResultr10(rsrpResultr10);
	setRsrqResultr10(rsrqResultr10);
}

const void *LogMeasInfor10MeasResultNeighCellsr10::itemsInfo[4] = {
	&MeasResultList2EUTRAr9::theInfo,
	&MeasResultList2UTRAr9::theInfo,
	&MeasResultList2GERANr10::theInfo,
	&MeasResultList2CDMA2000r9::theInfo,
};
bool LogMeasInfor10MeasResultNeighCellsr10::itemsPres[4] = {
	0,
	0,
	0,
	0,
};
const LogMeasInfor10MeasResultNeighCellsr10::Info LogMeasInfor10MeasResultNeighCellsr10::theInfo = {
	LogMeasInfor10MeasResultNeighCellsr10::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 4, 0
};

const void *LogMeasInfor10::itemsInfo[5] = {
	&LocationInfor10::theInfo,
	&LogMeasInfor10RelativeTimeStampr10::theInfo,
	&CellGlobalIdEUTRA::theInfo,
	&LogMeasInfor10MeasResultServCellr10::theInfo,
	&LogMeasInfor10MeasResultNeighCellsr10::theInfo,
};
bool LogMeasInfor10::itemsPres[5] = {
	0,
	1,
	1,
	1,
	0,
};
const LogMeasInfor10::Info LogMeasInfor10::theInfo = {
	LogMeasInfor10::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	5, 2, 0
};
LogMeasInfor10::LogMeasInfor10(const LogMeasInfor10RelativeTimeStampr10& logMeasInfor10RelativeTimeStampr10, const CellGlobalIdEUTRA& servCellIdentityr10, const LogMeasInfor10MeasResultServCellr10& logMeasInfor10MeasResultServCellr10) : Sequence(&theInfo) {
	setLogMeasInfor10RelativeTimeStampr10(logMeasInfor10RelativeTimeStampr10);
	setServCellIdentityr10(servCellIdentityr10);
	setLogMeasInfor10MeasResultServCellr10(logMeasInfor10MeasResultServCellr10);
}

const void *LogMeasReportr10::itemsInfo[6] = {
	&AbsoluteTimeInfor10::theInfo,
	&TraceReferencer10::theInfo,
	&LogMeasReportr10TraceRecordingSessionRefr10::theInfo,
	&LogMeasReportr10TceIdr10::theInfo,
	&LogMeasInfoListr10::theInfo,
	&LogMeasReportr10logMeasAvailable_r10::theInfo,
};
bool LogMeasReportr10::itemsPres[6] = {
	1,
	1,
	1,
	1,
	1,
	0,
};
const LogMeasReportr10::Info LogMeasReportr10::theInfo = {
	LogMeasReportr10::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	6, 1, 0
};
LogMeasReportr10::LogMeasReportr10(const AbsoluteTimeInfor10& absoluteTimeStampr10, const TraceReferencer10& traceReferencer10, const LogMeasReportr10TraceRecordingSessionRefr10& logMeasReportr10TraceRecordingSessionRefr10, const LogMeasReportr10TceIdr10& logMeasReportr10TceIdr10, const LogMeasInfoListr10& logMeasInfoListr10) : Sequence(&theInfo) {
	setAbsoluteTimeStampr10(absoluteTimeStampr10);
	setTraceReferencer10(traceReferencer10);
	setLogMeasReportr10TraceRecordingSessionRefr10(logMeasReportr10TraceRecordingSessionRefr10);
	setLogMeasReportr10TceIdr10(logMeasReportr10TceIdr10);
	setLogMeasInfoListr10(logMeasInfoListr10);
}

const void *UEInformationResponsev1020IEsNonCriticalExtension::itemsInfo[0] = {
};
bool UEInformationResponsev1020IEsNonCriticalExtension::itemsPres[0] = {
};
const UEInformationResponsev1020IEsNonCriticalExtension::Info UEInformationResponsev1020IEsNonCriticalExtension::theInfo = {
	UEInformationResponsev1020IEsNonCriticalExtension::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *UEInformationResponsev1020IEs::itemsInfo[2] = {
	&LogMeasReportr10::theInfo,
	&UEInformationResponsev1020IEsNonCriticalExtension::theInfo,
};
bool UEInformationResponsev1020IEs::itemsPres[2] = {
	0,
	0,
};
const UEInformationResponsev1020IEs::Info UEInformationResponsev1020IEs::theInfo = {
	UEInformationResponsev1020IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *UEInformationResponsev930IEs::itemsInfo[2] = {
	&UEInformationResponsev930IEsLateNonCriticalExtension::theInfo,
	&UEInformationResponsev1020IEs::theInfo,
};
bool UEInformationResponsev930IEs::itemsPres[2] = {
	0,
	0,
};
const UEInformationResponsev930IEs::Info UEInformationResponsev930IEs::theInfo = {
	UEInformationResponsev930IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *UEInformationResponser9IEs::itemsInfo[3] = {
	&UEInformationResponser9IEsRachReportr9::theInfo,
	&RLFReportr9::theInfo,
	&UEInformationResponsev930IEs::theInfo,
};
bool UEInformationResponser9IEs::itemsPres[3] = {
	0,
	0,
	0,
};
const UEInformationResponser9IEs::Info UEInformationResponser9IEs::theInfo = {
	UEInformationResponser9IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *UEInformationResponser9CriticalExtensionsC1::choicesInfo[4] = {
	&UEInformationResponser9IEs::theInfo,
	&UEInformationResponser9CriticalExtensionsC1Spare3::theInfo,
	&UEInformationResponser9CriticalExtensionsC1Spare2::theInfo,
	&UEInformationResponser9CriticalExtensionsC1Spare1::theInfo,
};
const UEInformationResponser9CriticalExtensionsC1::Info UEInformationResponser9CriticalExtensionsC1::theInfo = {
	UEInformationResponser9CriticalExtensionsC1::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	3
};

const void *UEInformationResponser9CriticalExtensionsCriticalExtensionsFuture::itemsInfo[0] = {
};
bool UEInformationResponser9CriticalExtensionsCriticalExtensionsFuture::itemsPres[0] = {
};
const UEInformationResponser9CriticalExtensionsCriticalExtensionsFuture::Info UEInformationResponser9CriticalExtensionsCriticalExtensionsFuture::theInfo = {
	UEInformationResponser9CriticalExtensionsCriticalExtensionsFuture::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *UEInformationResponser9CriticalExtensions::choicesInfo[2] = {
	&UEInformationResponser9CriticalExtensionsC1::theInfo,
	&UEInformationResponser9CriticalExtensionsCriticalExtensionsFuture::theInfo,
};
const UEInformationResponser9CriticalExtensions::Info UEInformationResponser9CriticalExtensions::theInfo = {
	UEInformationResponser9CriticalExtensions::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *UEInformationResponser9::itemsInfo[2] = {
	&RRCTransactionIdentifier::theInfo,
	&UEInformationResponser9CriticalExtensions::theInfo,
};
bool UEInformationResponser9::itemsPres[2] = {
	1,
	1,
};
const UEInformationResponser9::Info UEInformationResponser9::theInfo = {
	UEInformationResponser9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
UEInformationResponser9::UEInformationResponser9(const RRCTransactionIdentifier& rrcTransactionIdentifier, const UEInformationResponser9CriticalExtensions& uEInformationResponser9CriticalExtensions) : Sequence(&theInfo) {
	setRrcTransactionIdentifier(rrcTransactionIdentifier);
	setUEInformationResponser9CriticalExtensions(uEInformationResponser9CriticalExtensions);
}

const void *ProximityIndicationr9IEsCarrierFreqr9::choicesInfo[2] = {
	&ARFCNValueEUTRA::theInfo,
	&ARFCNValueUTRA::theInfo,
};
const ProximityIndicationr9IEsCarrierFreqr9::Info ProximityIndicationr9IEsCarrierFreqr9::theInfo = {
	ProximityIndicationr9IEsCarrierFreqr9::create,
	CHOICE,
	0,
	true,
	choicesInfo,
	1
};

const void *ProximityIndicationv930IEsNonCriticalExtension::itemsInfo[0] = {
};
bool ProximityIndicationv930IEsNonCriticalExtension::itemsPres[0] = {
};
const ProximityIndicationv930IEsNonCriticalExtension::Info ProximityIndicationv930IEsNonCriticalExtension::theInfo = {
	ProximityIndicationv930IEsNonCriticalExtension::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *ProximityIndicationv930IEs::itemsInfo[2] = {
	&ProximityIndicationv930IEsLateNonCriticalExtension::theInfo,
	&ProximityIndicationv930IEsNonCriticalExtension::theInfo,
};
bool ProximityIndicationv930IEs::itemsPres[2] = {
	0,
	0,
};
const ProximityIndicationv930IEs::Info ProximityIndicationv930IEs::theInfo = {
	ProximityIndicationv930IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *ProximityIndicationr9IEs::itemsInfo[3] = {
	&ProximityIndicationr9IEstype_r9::theInfo,
	&ProximityIndicationr9IEsCarrierFreqr9::theInfo,
	&ProximityIndicationv930IEs::theInfo,
};
bool ProximityIndicationr9IEs::itemsPres[3] = {
	1,
	1,
	0,
};
const ProximityIndicationr9IEs::Info ProximityIndicationr9IEs::theInfo = {
	ProximityIndicationr9IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};
ProximityIndicationr9IEs::ProximityIndicationr9IEs(const ProximityIndicationr9IEstype_r9& proximityIndicationr9IEstype_r9, const ProximityIndicationr9IEsCarrierFreqr9& proximityIndicationr9IEsCarrierFreqr9) : Sequence(&theInfo) {
	setProximityIndicationr9IEstype_r9(proximityIndicationr9IEstype_r9);
	setProximityIndicationr9IEsCarrierFreqr9(proximityIndicationr9IEsCarrierFreqr9);
}

const void *ProximityIndicationr9CriticalExtensionsC1::choicesInfo[4] = {
	&ProximityIndicationr9IEs::theInfo,
	&ProximityIndicationr9CriticalExtensionsC1Spare3::theInfo,
	&ProximityIndicationr9CriticalExtensionsC1Spare2::theInfo,
	&ProximityIndicationr9CriticalExtensionsC1Spare1::theInfo,
};
const ProximityIndicationr9CriticalExtensionsC1::Info ProximityIndicationr9CriticalExtensionsC1::theInfo = {
	ProximityIndicationr9CriticalExtensionsC1::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	3
};

const void *ProximityIndicationr9CriticalExtensionsCriticalExtensionsFuture::itemsInfo[0] = {
};
bool ProximityIndicationr9CriticalExtensionsCriticalExtensionsFuture::itemsPres[0] = {
};
const ProximityIndicationr9CriticalExtensionsCriticalExtensionsFuture::Info ProximityIndicationr9CriticalExtensionsCriticalExtensionsFuture::theInfo = {
	ProximityIndicationr9CriticalExtensionsCriticalExtensionsFuture::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *ProximityIndicationr9CriticalExtensions::choicesInfo[2] = {
	&ProximityIndicationr9CriticalExtensionsC1::theInfo,
	&ProximityIndicationr9CriticalExtensionsCriticalExtensionsFuture::theInfo,
};
const ProximityIndicationr9CriticalExtensions::Info ProximityIndicationr9CriticalExtensions::theInfo = {
	ProximityIndicationr9CriticalExtensions::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ProximityIndicationr9::itemsInfo[1] = {
	&ProximityIndicationr9CriticalExtensions::theInfo,
};
bool ProximityIndicationr9::itemsPres[1] = {
	1,
};
const ProximityIndicationr9::Info ProximityIndicationr9::theInfo = {
	ProximityIndicationr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
ProximityIndicationr9::ProximityIndicationr9(const ProximityIndicationr9CriticalExtensions& proximityIndicationr9CriticalExtensions) : Sequence(&theInfo) {
	setProximityIndicationr9CriticalExtensions(proximityIndicationr9CriticalExtensions);
}

const void *RNReconfigurationCompleter10IEsNonCriticalExtension::itemsInfo[0] = {
};
bool RNReconfigurationCompleter10IEsNonCriticalExtension::itemsPres[0] = {
};
const RNReconfigurationCompleter10IEsNonCriticalExtension::Info RNReconfigurationCompleter10IEsNonCriticalExtension::theInfo = {
	RNReconfigurationCompleter10IEsNonCriticalExtension::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *RNReconfigurationCompleter10IEs::itemsInfo[2] = {
	&RNReconfigurationCompleter10IEsLateNonCriticalExtension::theInfo,
	&RNReconfigurationCompleter10IEsNonCriticalExtension::theInfo,
};
bool RNReconfigurationCompleter10IEs::itemsPres[2] = {
	0,
	0,
};
const RNReconfigurationCompleter10IEs::Info RNReconfigurationCompleter10IEs::theInfo = {
	RNReconfigurationCompleter10IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *RNReconfigurationCompleter10CriticalExtensionsC1::choicesInfo[4] = {
	&RNReconfigurationCompleter10IEs::theInfo,
	&RNReconfigurationCompleter10CriticalExtensionsC1Spare3::theInfo,
	&RNReconfigurationCompleter10CriticalExtensionsC1Spare2::theInfo,
	&RNReconfigurationCompleter10CriticalExtensionsC1Spare1::theInfo,
};
const RNReconfigurationCompleter10CriticalExtensionsC1::Info RNReconfigurationCompleter10CriticalExtensionsC1::theInfo = {
	RNReconfigurationCompleter10CriticalExtensionsC1::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	3
};

const void *RNReconfigurationCompleter10CriticalExtensionsCriticalExtensionsFuture::itemsInfo[0] = {
};
bool RNReconfigurationCompleter10CriticalExtensionsCriticalExtensionsFuture::itemsPres[0] = {
};
const RNReconfigurationCompleter10CriticalExtensionsCriticalExtensionsFuture::Info RNReconfigurationCompleter10CriticalExtensionsCriticalExtensionsFuture::theInfo = {
	RNReconfigurationCompleter10CriticalExtensionsCriticalExtensionsFuture::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *RNReconfigurationCompleter10CriticalExtensions::choicesInfo[2] = {
	&RNReconfigurationCompleter10CriticalExtensionsC1::theInfo,
	&RNReconfigurationCompleter10CriticalExtensionsCriticalExtensionsFuture::theInfo,
};
const RNReconfigurationCompleter10CriticalExtensions::Info RNReconfigurationCompleter10CriticalExtensions::theInfo = {
	RNReconfigurationCompleter10CriticalExtensions::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *RNReconfigurationCompleter10::itemsInfo[2] = {
	&RRCTransactionIdentifier::theInfo,
	&RNReconfigurationCompleter10CriticalExtensions::theInfo,
};
bool RNReconfigurationCompleter10::itemsPres[2] = {
	1,
	1,
};
const RNReconfigurationCompleter10::Info RNReconfigurationCompleter10::theInfo = {
	RNReconfigurationCompleter10::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
RNReconfigurationCompleter10::RNReconfigurationCompleter10(const RRCTransactionIdentifier& rrcTransactionIdentifier, const RNReconfigurationCompleter10CriticalExtensions& rNReconfigurationCompleter10CriticalExtensions) : Sequence(&theInfo) {
	setRrcTransactionIdentifier(rrcTransactionIdentifier);
	setRNReconfigurationCompleter10CriticalExtensions(rNReconfigurationCompleter10CriticalExtensions);
}

const void *CountingResponseInfor10::itemsInfo[1] = {
	&CountingResponseInfor10CountingResponseServicer10::theInfo,
};
bool CountingResponseInfor10::itemsPres[1] = {
	1,
};
const CountingResponseInfor10::Info CountingResponseInfor10::theInfo = {
	CountingResponseInfor10::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
CountingResponseInfor10::CountingResponseInfor10(const CountingResponseInfor10CountingResponseServicer10& countingResponseInfor10CountingResponseServicer10) : Sequence(&theInfo) {
	setCountingResponseInfor10CountingResponseServicer10(countingResponseInfor10CountingResponseServicer10);
}

const void *MBMSCountingResponser10IEsNonCriticalExtension::itemsInfo[0] = {
};
bool MBMSCountingResponser10IEsNonCriticalExtension::itemsPres[0] = {
};
const MBMSCountingResponser10IEsNonCriticalExtension::Info MBMSCountingResponser10IEsNonCriticalExtension::theInfo = {
	MBMSCountingResponser10IEsNonCriticalExtension::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *MBMSCountingResponser10IEs::itemsInfo[4] = {
	&MBMSCountingResponser10IEsMbsfnAreaIndexr10::theInfo,
	&CountingResponseListr10::theInfo,
	&MBMSCountingResponser10IEsLateNonCriticalExtension::theInfo,
	&MBMSCountingResponser10IEsNonCriticalExtension::theInfo,
};
bool MBMSCountingResponser10IEs::itemsPres[4] = {
	0,
	0,
	0,
	0,
};
const MBMSCountingResponser10IEs::Info MBMSCountingResponser10IEs::theInfo = {
	MBMSCountingResponser10IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 4, 0
};

const void *MBMSCountingResponser10CriticalExtensionsC1::choicesInfo[4] = {
	&MBMSCountingResponser10IEs::theInfo,
	&MBMSCountingResponser10CriticalExtensionsC1Spare3::theInfo,
	&MBMSCountingResponser10CriticalExtensionsC1Spare2::theInfo,
	&MBMSCountingResponser10CriticalExtensionsC1Spare1::theInfo,
};
const MBMSCountingResponser10CriticalExtensionsC1::Info MBMSCountingResponser10CriticalExtensionsC1::theInfo = {
	MBMSCountingResponser10CriticalExtensionsC1::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	3
};

const void *MBMSCountingResponser10CriticalExtensionsCriticalExtensionsFuture::itemsInfo[0] = {
};
bool MBMSCountingResponser10CriticalExtensionsCriticalExtensionsFuture::itemsPres[0] = {
};
const MBMSCountingResponser10CriticalExtensionsCriticalExtensionsFuture::Info MBMSCountingResponser10CriticalExtensionsCriticalExtensionsFuture::theInfo = {
	MBMSCountingResponser10CriticalExtensionsCriticalExtensionsFuture::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *MBMSCountingResponser10CriticalExtensions::choicesInfo[2] = {
	&MBMSCountingResponser10CriticalExtensionsC1::theInfo,
	&MBMSCountingResponser10CriticalExtensionsCriticalExtensionsFuture::theInfo,
};
const MBMSCountingResponser10CriticalExtensions::Info MBMSCountingResponser10CriticalExtensions::theInfo = {
	MBMSCountingResponser10CriticalExtensions::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *MBMSCountingResponser10::itemsInfo[1] = {
	&MBMSCountingResponser10CriticalExtensions::theInfo,
};
bool MBMSCountingResponser10::itemsPres[1] = {
	1,
};
const MBMSCountingResponser10::Info MBMSCountingResponser10::theInfo = {
	MBMSCountingResponser10::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
MBMSCountingResponser10::MBMSCountingResponser10(const MBMSCountingResponser10CriticalExtensions& mBMSCountingResponser10CriticalExtensions) : Sequence(&theInfo) {
	setMBMSCountingResponser10CriticalExtensions(mBMSCountingResponser10CriticalExtensions);
}

const void *RSTDInterFreqInfor10::itemsInfo[2] = {
	&ARFCNValueEUTRA::theInfo,
	&RSTDInterFreqInfor10MeasPRSOffsetr10::theInfo,
};
bool RSTDInterFreqInfor10::itemsPres[2] = {
	1,
	1,
};
const RSTDInterFreqInfor10::Info RSTDInterFreqInfor10::theInfo = {
	RSTDInterFreqInfor10::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
RSTDInterFreqInfor10::RSTDInterFreqInfor10(const ARFCNValueEUTRA& carrierFreqr10, const RSTDInterFreqInfor10MeasPRSOffsetr10& rSTDInterFreqInfor10MeasPRSOffsetr10) : Sequence(&theInfo) {
	setCarrierFreqr10(carrierFreqr10);
	setRSTDInterFreqInfor10MeasPRSOffsetr10(rSTDInterFreqInfor10MeasPRSOffsetr10);
}

const void *InterFreqRSTDMeasurementIndicationr10IEsRstdInterFreqIndicationr10Start::itemsInfo[1] = {
	&RSTDInterFreqInfoListr10::theInfo,
};
bool InterFreqRSTDMeasurementIndicationr10IEsRstdInterFreqIndicationr10Start::itemsPres[1] = {
	1,
};
const InterFreqRSTDMeasurementIndicationr10IEsRstdInterFreqIndicationr10Start::Info InterFreqRSTDMeasurementIndicationr10IEsRstdInterFreqIndicationr10Start::theInfo = {
	InterFreqRSTDMeasurementIndicationr10IEsRstdInterFreqIndicationr10Start::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
InterFreqRSTDMeasurementIndicationr10IEsRstdInterFreqIndicationr10Start::InterFreqRSTDMeasurementIndicationr10IEsRstdInterFreqIndicationr10Start(const RSTDInterFreqInfoListr10& rstdInterFreqInfoListr10) : Sequence(&theInfo) {
	setRstdInterFreqInfoListr10(rstdInterFreqInfoListr10);
}

const void *InterFreqRSTDMeasurementIndicationr10IEsRstdInterFreqIndicationr10::choicesInfo[2] = {
	&InterFreqRSTDMeasurementIndicationr10IEsRstdInterFreqIndicationr10Start::theInfo,
	&InterFreqRSTDMeasurementIndicationr10IEsRstdInterFreqIndicationr10Stop::theInfo,
};
const InterFreqRSTDMeasurementIndicationr10IEsRstdInterFreqIndicationr10::Info InterFreqRSTDMeasurementIndicationr10IEsRstdInterFreqIndicationr10::theInfo = {
	InterFreqRSTDMeasurementIndicationr10IEsRstdInterFreqIndicationr10::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *InterFreqRSTDMeasurementIndicationr10IEsNonCriticalExtension::itemsInfo[0] = {
};
bool InterFreqRSTDMeasurementIndicationr10IEsNonCriticalExtension::itemsPres[0] = {
};
const InterFreqRSTDMeasurementIndicationr10IEsNonCriticalExtension::Info InterFreqRSTDMeasurementIndicationr10IEsNonCriticalExtension::theInfo = {
	InterFreqRSTDMeasurementIndicationr10IEsNonCriticalExtension::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *InterFreqRSTDMeasurementIndicationr10IEs::itemsInfo[3] = {
	&InterFreqRSTDMeasurementIndicationr10IEsRstdInterFreqIndicationr10::theInfo,
	&InterFreqRSTDMeasurementIndicationr10IEsLateNonCriticalExtension::theInfo,
	&InterFreqRSTDMeasurementIndicationr10IEsNonCriticalExtension::theInfo,
};
bool InterFreqRSTDMeasurementIndicationr10IEs::itemsPres[3] = {
	1,
	0,
	0,
};
const InterFreqRSTDMeasurementIndicationr10IEs::Info InterFreqRSTDMeasurementIndicationr10IEs::theInfo = {
	InterFreqRSTDMeasurementIndicationr10IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};
InterFreqRSTDMeasurementIndicationr10IEs::InterFreqRSTDMeasurementIndicationr10IEs(const InterFreqRSTDMeasurementIndicationr10IEsRstdInterFreqIndicationr10& interFreqRSTDMeasurementIndicationr10IEsRstdInterFreqIndicationr10) : Sequence(&theInfo) {
	setInterFreqRSTDMeasurementIndicationr10IEsRstdInterFreqIndicationr10(interFreqRSTDMeasurementIndicationr10IEsRstdInterFreqIndicationr10);
}

const void *InterFreqRSTDMeasurementIndicationr10CriticalExtensionsC1::choicesInfo[4] = {
	&InterFreqRSTDMeasurementIndicationr10IEs::theInfo,
	&InterFreqRSTDMeasurementIndicationr10CriticalExtensionsC1Spare3::theInfo,
	&InterFreqRSTDMeasurementIndicationr10CriticalExtensionsC1Spare2::theInfo,
	&InterFreqRSTDMeasurementIndicationr10CriticalExtensionsC1Spare1::theInfo,
};
const InterFreqRSTDMeasurementIndicationr10CriticalExtensionsC1::Info InterFreqRSTDMeasurementIndicationr10CriticalExtensionsC1::theInfo = {
	InterFreqRSTDMeasurementIndicationr10CriticalExtensionsC1::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	3
};

const void *InterFreqRSTDMeasurementIndicationr10CriticalExtensionsCriticalExtensionsFuture::itemsInfo[0] = {
};
bool InterFreqRSTDMeasurementIndicationr10CriticalExtensionsCriticalExtensionsFuture::itemsPres[0] = {
};
const InterFreqRSTDMeasurementIndicationr10CriticalExtensionsCriticalExtensionsFuture::Info InterFreqRSTDMeasurementIndicationr10CriticalExtensionsCriticalExtensionsFuture::theInfo = {
	InterFreqRSTDMeasurementIndicationr10CriticalExtensionsCriticalExtensionsFuture::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *InterFreqRSTDMeasurementIndicationr10CriticalExtensions::choicesInfo[2] = {
	&InterFreqRSTDMeasurementIndicationr10CriticalExtensionsC1::theInfo,
	&InterFreqRSTDMeasurementIndicationr10CriticalExtensionsCriticalExtensionsFuture::theInfo,
};
const InterFreqRSTDMeasurementIndicationr10CriticalExtensions::Info InterFreqRSTDMeasurementIndicationr10CriticalExtensions::theInfo = {
	InterFreqRSTDMeasurementIndicationr10CriticalExtensions::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *InterFreqRSTDMeasurementIndicationr10::itemsInfo[1] = {
	&InterFreqRSTDMeasurementIndicationr10CriticalExtensions::theInfo,
};
bool InterFreqRSTDMeasurementIndicationr10::itemsPres[1] = {
	1,
};
const InterFreqRSTDMeasurementIndicationr10::Info InterFreqRSTDMeasurementIndicationr10::theInfo = {
	InterFreqRSTDMeasurementIndicationr10::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
InterFreqRSTDMeasurementIndicationr10::InterFreqRSTDMeasurementIndicationr10(const InterFreqRSTDMeasurementIndicationr10CriticalExtensions& interFreqRSTDMeasurementIndicationr10CriticalExtensions) : Sequence(&theInfo) {
	setInterFreqRSTDMeasurementIndicationr10CriticalExtensions(interFreqRSTDMeasurementIndicationr10CriticalExtensions);
}

const void *ULDCCHMessageTypeC1::choicesInfo[16] = {
	&CSFBParametersRequestCDMA2000::theInfo,
	&MeasurementReport::theInfo,
	&RRCConnectionReconfigurationComplete::theInfo,
	&RRCConnectionReestablishmentComplete::theInfo,
	&RRCConnectionSetupComplete::theInfo,
	&SecurityModeComplete::theInfo,
	&SecurityModeFailure::theInfo,
	&UECapabilityInformation::theInfo,
	&ULHandoverPreparationTransfer::theInfo,
	&ULInformationTransfer::theInfo,
	&CounterCheckResponse::theInfo,
	&UEInformationResponser9::theInfo,
	&ProximityIndicationr9::theInfo,
	&RNReconfigurationCompleter10::theInfo,
	&MBMSCountingResponser10::theInfo,
	&InterFreqRSTDMeasurementIndicationr10::theInfo,
};
const ULDCCHMessageTypeC1::Info ULDCCHMessageTypeC1::theInfo = {
	ULDCCHMessageTypeC1::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	15
};

const void *ULDCCHMessageTypeMessageClassExtension::itemsInfo[0] = {
};
bool ULDCCHMessageTypeMessageClassExtension::itemsPres[0] = {
};
const ULDCCHMessageTypeMessageClassExtension::Info ULDCCHMessageTypeMessageClassExtension::theInfo = {
	ULDCCHMessageTypeMessageClassExtension::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *ULDCCHMessageType::choicesInfo[2] = {
	&ULDCCHMessageTypeC1::theInfo,
	&ULDCCHMessageTypeMessageClassExtension::theInfo,
};
const ULDCCHMessageType::Info ULDCCHMessageType::theInfo = {
	ULDCCHMessageType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULDCCHMessage::itemsInfo[1] = {
	&ULDCCHMessageType::theInfo,
};
bool ULDCCHMessage::itemsPres[1] = {
	1,
};
const ULDCCHMessage::Info ULDCCHMessage::theInfo = {
	ULDCCHMessage::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
ULDCCHMessage::ULDCCHMessage(const ULDCCHMessageType& message) : Sequence(&theInfo) {
	setMessage(message);
}

const void *PDCPParametersSupportedROHCProfiles::itemsInfo[9] = {
	&PDCPParametersSupportedROHCProfilesProfile0x0001::theInfo,
	&PDCPParametersSupportedROHCProfilesProfile0x0002::theInfo,
	&PDCPParametersSupportedROHCProfilesProfile0x0003::theInfo,
	&PDCPParametersSupportedROHCProfilesProfile0x0004::theInfo,
	&PDCPParametersSupportedROHCProfilesProfile0x0006::theInfo,
	&PDCPParametersSupportedROHCProfilesProfile0x0101::theInfo,
	&PDCPParametersSupportedROHCProfilesProfile0x0102::theInfo,
	&PDCPParametersSupportedROHCProfilesProfile0x0103::theInfo,
	&PDCPParametersSupportedROHCProfilesProfile0x0104::theInfo,
};
bool PDCPParametersSupportedROHCProfiles::itemsPres[9] = {
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
};
const PDCPParametersSupportedROHCProfiles::Info PDCPParametersSupportedROHCProfiles::theInfo = {
	PDCPParametersSupportedROHCProfiles::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	9, 0, 0
};
PDCPParametersSupportedROHCProfiles::PDCPParametersSupportedROHCProfiles(const PDCPParametersSupportedROHCProfilesProfile0x0001& pDCPParametersSupportedROHCProfilesProfile0x0001, const PDCPParametersSupportedROHCProfilesProfile0x0002& pDCPParametersSupportedROHCProfilesProfile0x0002, const PDCPParametersSupportedROHCProfilesProfile0x0003& pDCPParametersSupportedROHCProfilesProfile0x0003, const PDCPParametersSupportedROHCProfilesProfile0x0004& pDCPParametersSupportedROHCProfilesProfile0x0004, const PDCPParametersSupportedROHCProfilesProfile0x0006& pDCPParametersSupportedROHCProfilesProfile0x0006, const PDCPParametersSupportedROHCProfilesProfile0x0101& pDCPParametersSupportedROHCProfilesProfile0x0101, const PDCPParametersSupportedROHCProfilesProfile0x0102& pDCPParametersSupportedROHCProfilesProfile0x0102, const PDCPParametersSupportedROHCProfilesProfile0x0103& pDCPParametersSupportedROHCProfilesProfile0x0103, const PDCPParametersSupportedROHCProfilesProfile0x0104& pDCPParametersSupportedROHCProfilesProfile0x0104) : Sequence(&theInfo) {
	setPDCPParametersSupportedROHCProfilesProfile0x0001(pDCPParametersSupportedROHCProfilesProfile0x0001);
	setPDCPParametersSupportedROHCProfilesProfile0x0002(pDCPParametersSupportedROHCProfilesProfile0x0002);
	setPDCPParametersSupportedROHCProfilesProfile0x0003(pDCPParametersSupportedROHCProfilesProfile0x0003);
	setPDCPParametersSupportedROHCProfilesProfile0x0004(pDCPParametersSupportedROHCProfilesProfile0x0004);
	setPDCPParametersSupportedROHCProfilesProfile0x0006(pDCPParametersSupportedROHCProfilesProfile0x0006);
	setPDCPParametersSupportedROHCProfilesProfile0x0101(pDCPParametersSupportedROHCProfilesProfile0x0101);
	setPDCPParametersSupportedROHCProfilesProfile0x0102(pDCPParametersSupportedROHCProfilesProfile0x0102);
	setPDCPParametersSupportedROHCProfilesProfile0x0103(pDCPParametersSupportedROHCProfilesProfile0x0103);
	setPDCPParametersSupportedROHCProfilesProfile0x0104(pDCPParametersSupportedROHCProfilesProfile0x0104);
}

const void *PDCPParameters::itemsInfo[2] = {
	&PDCPParametersSupportedROHCProfiles::theInfo,
	&PDCPParametersmaxNumberROHC_ContextSessions::theInfo,
};
bool PDCPParameters::itemsPres[2] = {
	1,
	0,
};
const PDCPParameters::Info PDCPParameters::theInfo = {
	PDCPParameters::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	2, 1, 0
};
PDCPParameters::PDCPParameters(const PDCPParametersSupportedROHCProfiles& pDCPParametersSupportedROHCProfiles) : Sequence(&theInfo) {
	setPDCPParametersSupportedROHCProfiles(pDCPParametersSupportedROHCProfiles);
}

const void *PhyLayerParameters::itemsInfo[2] = {
	&PhyLayerParametersUeTxAntennaSelectionSupported::theInfo,
	&PhyLayerParametersUeSpecificRefSigsSupported::theInfo,
};
bool PhyLayerParameters::itemsPres[2] = {
	1,
	1,
};
const PhyLayerParameters::Info PhyLayerParameters::theInfo = {
	PhyLayerParameters::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
PhyLayerParameters::PhyLayerParameters(const PhyLayerParametersUeTxAntennaSelectionSupported& phyLayerParametersUeTxAntennaSelectionSupported, const PhyLayerParametersUeSpecificRefSigsSupported& phyLayerParametersUeSpecificRefSigsSupported) : Sequence(&theInfo) {
	setPhyLayerParametersUeTxAntennaSelectionSupported(phyLayerParametersUeTxAntennaSelectionSupported);
	setPhyLayerParametersUeSpecificRefSigsSupported(phyLayerParametersUeSpecificRefSigsSupported);
}

const void *SupportedBandEUTRA::itemsInfo[2] = {
	&SupportedBandEUTRABandEUTRA::theInfo,
	&SupportedBandEUTRAHalfDuplex::theInfo,
};
bool SupportedBandEUTRA::itemsPres[2] = {
	1,
	1,
};
const SupportedBandEUTRA::Info SupportedBandEUTRA::theInfo = {
	SupportedBandEUTRA::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
SupportedBandEUTRA::SupportedBandEUTRA(const SupportedBandEUTRABandEUTRA& supportedBandEUTRABandEUTRA, const SupportedBandEUTRAHalfDuplex& supportedBandEUTRAHalfDuplex) : Sequence(&theInfo) {
	setSupportedBandEUTRABandEUTRA(supportedBandEUTRABandEUTRA);
	setSupportedBandEUTRAHalfDuplex(supportedBandEUTRAHalfDuplex);
}

const void *RFParameters::itemsInfo[1] = {
	&SupportedBandListEUTRA::theInfo,
};
bool RFParameters::itemsPres[1] = {
	1,
};
const RFParameters::Info RFParameters::theInfo = {
	RFParameters::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
RFParameters::RFParameters(const SupportedBandListEUTRA& supportedBandListEUTRA) : Sequence(&theInfo) {
	setSupportedBandListEUTRA(supportedBandListEUTRA);
}

const void *InterFreqBandInfo::itemsInfo[1] = {
	&InterFreqBandInfoInterFreqNeedForGaps::theInfo,
};
bool InterFreqBandInfo::itemsPres[1] = {
	1,
};
const InterFreqBandInfo::Info InterFreqBandInfo::theInfo = {
	InterFreqBandInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
InterFreqBandInfo::InterFreqBandInfo(const InterFreqBandInfoInterFreqNeedForGaps& interFreqBandInfoInterFreqNeedForGaps) : Sequence(&theInfo) {
	setInterFreqBandInfoInterFreqNeedForGaps(interFreqBandInfoInterFreqNeedForGaps);
}

const void *InterRATBandInfo::itemsInfo[1] = {
	&InterRATBandInfoInterRATNeedForGaps::theInfo,
};
bool InterRATBandInfo::itemsPres[1] = {
	1,
};
const InterRATBandInfo::Info InterRATBandInfo::theInfo = {
	InterRATBandInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
InterRATBandInfo::InterRATBandInfo(const InterRATBandInfoInterRATNeedForGaps& interRATBandInfoInterRATNeedForGaps) : Sequence(&theInfo) {
	setInterRATBandInfoInterRATNeedForGaps(interRATBandInfoInterRATNeedForGaps);
}

const void *BandInfoEUTRA::itemsInfo[2] = {
	&InterFreqBandList::theInfo,
	&InterRATBandList::theInfo,
};
bool BandInfoEUTRA::itemsPres[2] = {
	1,
	0,
};
const BandInfoEUTRA::Info BandInfoEUTRA::theInfo = {
	BandInfoEUTRA::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};
BandInfoEUTRA::BandInfoEUTRA(const InterFreqBandList& interFreqBandList) : Sequence(&theInfo) {
	setInterFreqBandList(interFreqBandList);
}

const void *MeasParameters::itemsInfo[1] = {
	&BandListEUTRA::theInfo,
};
bool MeasParameters::itemsPres[1] = {
	1,
};
const MeasParameters::Info MeasParameters::theInfo = {
	MeasParameters::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
MeasParameters::MeasParameters(const BandListEUTRA& bandListEUTRA) : Sequence(&theInfo) {
	setBandListEUTRA(bandListEUTRA);
}

const void *IRATParametersUTRAFDD::itemsInfo[1] = {
	&SupportedBandListUTRAFDD::theInfo,
};
bool IRATParametersUTRAFDD::itemsPres[1] = {
	1,
};
const IRATParametersUTRAFDD::Info IRATParametersUTRAFDD::theInfo = {
	IRATParametersUTRAFDD::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
IRATParametersUTRAFDD::IRATParametersUTRAFDD(const SupportedBandListUTRAFDD& supportedBandListUTRAFDD) : Sequence(&theInfo) {
	setSupportedBandListUTRAFDD(supportedBandListUTRAFDD);
}

const void *IRATParametersUTRATDD128::itemsInfo[1] = {
	&SupportedBandListUTRATDD128::theInfo,
};
bool IRATParametersUTRATDD128::itemsPres[1] = {
	1,
};
const IRATParametersUTRATDD128::Info IRATParametersUTRATDD128::theInfo = {
	IRATParametersUTRATDD128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
IRATParametersUTRATDD128::IRATParametersUTRATDD128(const SupportedBandListUTRATDD128& supportedBandListUTRATDD128) : Sequence(&theInfo) {
	setSupportedBandListUTRATDD128(supportedBandListUTRATDD128);
}

const void *IRATParametersUTRATDD384::itemsInfo[1] = {
	&SupportedBandListUTRATDD384::theInfo,
};
bool IRATParametersUTRATDD384::itemsPres[1] = {
	1,
};
const IRATParametersUTRATDD384::Info IRATParametersUTRATDD384::theInfo = {
	IRATParametersUTRATDD384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
IRATParametersUTRATDD384::IRATParametersUTRATDD384(const SupportedBandListUTRATDD384& supportedBandListUTRATDD384) : Sequence(&theInfo) {
	setSupportedBandListUTRATDD384(supportedBandListUTRATDD384);
}

const void *IRATParametersUTRATDD768::itemsInfo[1] = {
	&SupportedBandListUTRATDD768::theInfo,
};
bool IRATParametersUTRATDD768::itemsPres[1] = {
	1,
};
const IRATParametersUTRATDD768::Info IRATParametersUTRATDD768::theInfo = {
	IRATParametersUTRATDD768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
IRATParametersUTRATDD768::IRATParametersUTRATDD768(const SupportedBandListUTRATDD768& supportedBandListUTRATDD768) : Sequence(&theInfo) {
	setSupportedBandListUTRATDD768(supportedBandListUTRATDD768);
}

const void *IRATParametersGERAN::itemsInfo[2] = {
	&SupportedBandListGERAN::theInfo,
	&IRATParametersGERANInterRATPSHOToGERAN::theInfo,
};
bool IRATParametersGERAN::itemsPres[2] = {
	1,
	1,
};
const IRATParametersGERAN::Info IRATParametersGERAN::theInfo = {
	IRATParametersGERAN::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};
IRATParametersGERAN::IRATParametersGERAN(const SupportedBandListGERAN& supportedBandListGERAN, const IRATParametersGERANInterRATPSHOToGERAN& iRATParametersGERANInterRATPSHOToGERAN) : Sequence(&theInfo) {
	setSupportedBandListGERAN(supportedBandListGERAN);
	setIRATParametersGERANInterRATPSHOToGERAN(iRATParametersGERANInterRATPSHOToGERAN);
}

const void *IRATParametersCDMA2000HRPD::itemsInfo[3] = {
	&SupportedBandListHRPD::theInfo,
	&IRATParametersCDMA2000HRPDtx_ConfigHRPD::theInfo,
	&IRATParametersCDMA2000HRPDrx_ConfigHRPD::theInfo,
};
bool IRATParametersCDMA2000HRPD::itemsPres[3] = {
	1,
	1,
	1,
};
const IRATParametersCDMA2000HRPD::Info IRATParametersCDMA2000HRPD::theInfo = {
	IRATParametersCDMA2000HRPD::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};
IRATParametersCDMA2000HRPD::IRATParametersCDMA2000HRPD(const SupportedBandListHRPD& supportedBandListHRPD, const IRATParametersCDMA2000HRPDtx_ConfigHRPD& iRATParametersCDMA2000HRPDtx_ConfigHRPD, const IRATParametersCDMA2000HRPDrx_ConfigHRPD& iRATParametersCDMA2000HRPDrx_ConfigHRPD) : Sequence(&theInfo) {
	setSupportedBandListHRPD(supportedBandListHRPD);
	setIRATParametersCDMA2000HRPDtx_ConfigHRPD(iRATParametersCDMA2000HRPDtx_ConfigHRPD);
	setIRATParametersCDMA2000HRPDrx_ConfigHRPD(iRATParametersCDMA2000HRPDrx_ConfigHRPD);
}

const void *IRATParametersCDMA20001XRTT::itemsInfo[3] = {
	&SupportedBandList1XRTT::theInfo,
	&IRATParametersCDMA20001XRTTtx_Config1XRTT::theInfo,
	&IRATParametersCDMA20001XRTTrx_Config1XRTT::theInfo,
};
bool IRATParametersCDMA20001XRTT::itemsPres[3] = {
	1,
	1,
	1,
};
const IRATParametersCDMA20001XRTT::Info IRATParametersCDMA20001XRTT::theInfo = {
	IRATParametersCDMA20001XRTT::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};
IRATParametersCDMA20001XRTT::IRATParametersCDMA20001XRTT(const SupportedBandList1XRTT& supportedBandList1XRTT, const IRATParametersCDMA20001XRTTtx_Config1XRTT& iRATParametersCDMA20001XRTTtx_Config1XRTT, const IRATParametersCDMA20001XRTTrx_Config1XRTT& iRATParametersCDMA20001XRTTrx_Config1XRTT) : Sequence(&theInfo) {
	setSupportedBandList1XRTT(supportedBandList1XRTT);
	setIRATParametersCDMA20001XRTTtx_Config1XRTT(iRATParametersCDMA20001XRTTtx_Config1XRTT);
	setIRATParametersCDMA20001XRTTrx_Config1XRTT(iRATParametersCDMA20001XRTTrx_Config1XRTT);
}

const void *UEEUTRACapabilityInterRATParameters::itemsInfo[7] = {
	&IRATParametersUTRAFDD::theInfo,
	&IRATParametersUTRATDD128::theInfo,
	&IRATParametersUTRATDD384::theInfo,
	&IRATParametersUTRATDD768::theInfo,
	&IRATParametersGERAN::theInfo,
	&IRATParametersCDMA2000HRPD::theInfo,
	&IRATParametersCDMA20001XRTT::theInfo,
};
bool UEEUTRACapabilityInterRATParameters::itemsPres[7] = {
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
const UEEUTRACapabilityInterRATParameters::Info UEEUTRACapabilityInterRATParameters::theInfo = {
	UEEUTRACapabilityInterRATParameters::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	7, 7, 0
};

const void *PhyLayerParametersv920::itemsInfo[2] = {
	&PhyLayerParametersv920enhancedDualLayerFDD_r9::theInfo,
	&PhyLayerParametersv920enhancedDualLayerTDD_r9::theInfo,
};
bool PhyLayerParametersv920::itemsPres[2] = {
	0,
	0,
};
const PhyLayerParametersv920::Info PhyLayerParametersv920::theInfo = {
	PhyLayerParametersv920::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *IRATParametersGERANv920::itemsInfo[2] = {
	&IRATParametersGERANv920dtm_r9::theInfo,
	&IRATParametersGERANv920e_RedirectionGERAN_r9::theInfo,
};
bool IRATParametersGERANv920::itemsPres[2] = {
	0,
	0,
};
const IRATParametersGERANv920::Info IRATParametersGERANv920::theInfo = {
	IRATParametersGERANv920::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *IRATParametersUTRAv920::itemsInfo[1] = {
	&IRATParametersUTRAv920e_RedirectionUTRA_r9::theInfo,
};
bool IRATParametersUTRAv920::itemsPres[1] = {
	1,
};
const IRATParametersUTRAv920::Info IRATParametersUTRAv920::theInfo = {
	IRATParametersUTRAv920::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
IRATParametersUTRAv920::IRATParametersUTRAv920(const IRATParametersUTRAv920e_RedirectionUTRA_r9& iRATParametersUTRAv920e_RedirectionUTRA_r9) : Sequence(&theInfo) {
	setIRATParametersUTRAv920e_RedirectionUTRA_r9(iRATParametersUTRAv920e_RedirectionUTRA_r9);
}

const void *IRATParametersCDMA20001XRTTv920::itemsInfo[2] = {
	&IRATParametersCDMA20001XRTTv920e_CSFB_1XRTT_r9::theInfo,
	&IRATParametersCDMA20001XRTTv920e_CSFB_ConcPS_Mob1XRTT_r9::theInfo,
};
bool IRATParametersCDMA20001XRTTv920::itemsPres[2] = {
	1,
	0,
};
const IRATParametersCDMA20001XRTTv920::Info IRATParametersCDMA20001XRTTv920::theInfo = {
	IRATParametersCDMA20001XRTTv920::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};
IRATParametersCDMA20001XRTTv920::IRATParametersCDMA20001XRTTv920(const IRATParametersCDMA20001XRTTv920e_CSFB_1XRTT_r9& iRATParametersCDMA20001XRTTv920e_CSFB_1XRTT_r9) : Sequence(&theInfo) {
	setIRATParametersCDMA20001XRTTv920e_CSFB_1XRTT_r9(iRATParametersCDMA20001XRTTv920e_CSFB_1XRTT_r9);
}

const void *CSGProximityIndicationParametersr9::itemsInfo[3] = {
	&CSGProximityIndicationParametersr9intraFreqProximityIndication_r9::theInfo,
	&CSGProximityIndicationParametersr9interFreqProximityIndication_r9::theInfo,
	&CSGProximityIndicationParametersr9utran_ProximityIndication_r9::theInfo,
};
bool CSGProximityIndicationParametersr9::itemsPres[3] = {
	0,
	0,
	0,
};
const CSGProximityIndicationParametersr9::Info CSGProximityIndicationParametersr9::theInfo = {
	CSGProximityIndicationParametersr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *NeighCellSIAcquisitionParametersr9::itemsInfo[3] = {
	&NeighCellSIAcquisitionParametersr9intraFreqSI_AcquisitionForHO_r9::theInfo,
	&NeighCellSIAcquisitionParametersr9interFreqSI_AcquisitionForHO_r9::theInfo,
	&NeighCellSIAcquisitionParametersr9utran_SI_AcquisitionForHO_r9::theInfo,
};
bool NeighCellSIAcquisitionParametersr9::itemsPres[3] = {
	0,
	0,
	0,
};
const NeighCellSIAcquisitionParametersr9::Info NeighCellSIAcquisitionParametersr9::theInfo = {
	NeighCellSIAcquisitionParametersr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *SONParametersr9::itemsInfo[1] = {
	&SONParametersr9rach_Report_r9::theInfo,
};
bool SONParametersr9::itemsPres[1] = {
	0,
};
const SONParametersr9::Info SONParametersr9::theInfo = {
	SONParametersr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *NonContiguousULRAWithinCCr10::itemsInfo[1] = {
	&NonContiguousULRAWithinCCr10nonContiguousUL_RA_WithinCC_Info_r10::theInfo,
};
bool NonContiguousULRAWithinCCr10::itemsPres[1] = {
	0,
};
const NonContiguousULRAWithinCCr10::Info NonContiguousULRAWithinCCr10::theInfo = {
	NonContiguousULRAWithinCCr10::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *PhyLayerParametersv1020::itemsInfo[7] = {
	&PhyLayerParametersv1020twoAntennaPortsForPUCCH_r10::theInfo,
	&PhyLayerParametersv1020tm9_With_8Tx_FDD_r10::theInfo,
	&PhyLayerParametersv1020pmi_Disabling_r10::theInfo,
	&PhyLayerParametersv1020crossCarrierScheduling_r10::theInfo,
	&PhyLayerParametersv1020simultaneousPUCCH_PUSCH_r10::theInfo,
	&PhyLayerParametersv1020multiClusterPUSCH_WithinCC_r10::theInfo,
	&NonContiguousULRAWithinCCListr10::theInfo,
};
bool PhyLayerParametersv1020::itemsPres[7] = {
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
const PhyLayerParametersv1020::Info PhyLayerParametersv1020::theInfo = {
	PhyLayerParametersv1020::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	7, 7, 0
};

const void *CAMIMOParametersULr10::itemsInfo[2] = {
	&CABandwidthClassr10::theInfo,
	&MIMOCapabilityULr10::theInfo,
};
bool CAMIMOParametersULr10::itemsPres[2] = {
	1,
	0,
};
const CAMIMOParametersULr10::Info CAMIMOParametersULr10::theInfo = {
	CAMIMOParametersULr10::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};
CAMIMOParametersULr10::CAMIMOParametersULr10(const CABandwidthClassr10& caBandwidthClassULr10) : Sequence(&theInfo) {
	setCaBandwidthClassULr10(caBandwidthClassULr10);
}

const void *CAMIMOParametersDLr10::itemsInfo[2] = {
	&CABandwidthClassr10::theInfo,
	&MIMOCapabilityDLr10::theInfo,
};
bool CAMIMOParametersDLr10::itemsPres[2] = {
	1,
	0,
};
const CAMIMOParametersDLr10::Info CAMIMOParametersDLr10::theInfo = {
	CAMIMOParametersDLr10::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};
CAMIMOParametersDLr10::CAMIMOParametersDLr10(const CABandwidthClassr10& caBandwidthClassDLr10) : Sequence(&theInfo) {
	setCaBandwidthClassDLr10(caBandwidthClassDLr10);
}

const void *BandParametersr10::itemsInfo[3] = {
	&BandParametersr10BandEUTRAr10::theInfo,
	&BandParametersULr10::theInfo,
	&BandParametersDLr10::theInfo,
};
bool BandParametersr10::itemsPres[3] = {
	1,
	0,
	0,
};
const BandParametersr10::Info BandParametersr10::theInfo = {
	BandParametersr10::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};
BandParametersr10::BandParametersr10(const BandParametersr10BandEUTRAr10& bandParametersr10BandEUTRAr10) : Sequence(&theInfo) {
	setBandParametersr10BandEUTRAr10(bandParametersr10BandEUTRAr10);
}

const void *RFParametersv1020::itemsInfo[1] = {
	&SupportedBandCombinationr10::theInfo,
};
bool RFParametersv1020::itemsPres[1] = {
	1,
};
const RFParametersv1020::Info RFParametersv1020::theInfo = {
	RFParametersv1020::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
RFParametersv1020::RFParametersv1020(const SupportedBandCombinationr10& supportedBandCombinationr10) : Sequence(&theInfo) {
	setSupportedBandCombinationr10(supportedBandCombinationr10);
}

const void *MeasParametersv1020::itemsInfo[1] = {
	&BandCombinationListEUTRAr10::theInfo,
};
bool MeasParametersv1020::itemsPres[1] = {
	1,
};
const MeasParametersv1020::Info MeasParametersv1020::theInfo = {
	MeasParametersv1020::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
MeasParametersv1020::MeasParametersv1020(const BandCombinationListEUTRAr10& bandCombinationListEUTRAr10) : Sequence(&theInfo) {
	setBandCombinationListEUTRAr10(bandCombinationListEUTRAr10);
}

const void *IRATParametersCDMA20001XRTTv1020::itemsInfo[1] = {
	&IRATParametersCDMA20001XRTTv1020e_CSFB_dual_1XRTT_r10::theInfo,
};
bool IRATParametersCDMA20001XRTTv1020::itemsPres[1] = {
	1,
};
const IRATParametersCDMA20001XRTTv1020::Info IRATParametersCDMA20001XRTTv1020::theInfo = {
	IRATParametersCDMA20001XRTTv1020::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
IRATParametersCDMA20001XRTTv1020::IRATParametersCDMA20001XRTTv1020(const IRATParametersCDMA20001XRTTv1020e_CSFB_dual_1XRTT_r10& iRATParametersCDMA20001XRTTv1020e_CSFB_dual_1XRTT_r10) : Sequence(&theInfo) {
	setIRATParametersCDMA20001XRTTv1020e_CSFB_dual_1XRTT_r10(iRATParametersCDMA20001XRTTv1020e_CSFB_dual_1XRTT_r10);
}

const void *UEBasedNetwPerfMeasParametersr10::itemsInfo[2] = {
	&UEBasedNetwPerfMeasParametersr10loggedMeasurementsIdle_r10::theInfo,
	&UEBasedNetwPerfMeasParametersr10standaloneGNSS_Location_r10::theInfo,
};
bool UEBasedNetwPerfMeasParametersr10::itemsPres[2] = {
	0,
	0,
};
const UEBasedNetwPerfMeasParametersr10::Info UEBasedNetwPerfMeasParametersr10::theInfo = {
	UEBasedNetwPerfMeasParametersr10::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *IRATParametersUTRATDDv1020::itemsInfo[1] = {
	&IRATParametersUTRATDDv1020e_RedirectionUTRA_TDD_r10::theInfo,
};
bool IRATParametersUTRATDDv1020::itemsPres[1] = {
	1,
};
const IRATParametersUTRATDDv1020::Info IRATParametersUTRATDDv1020::theInfo = {
	IRATParametersUTRATDDv1020::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};
IRATParametersUTRATDDv1020::IRATParametersUTRATDDv1020(const IRATParametersUTRATDDv1020e_RedirectionUTRA_TDD_r10& iRATParametersUTRATDDv1020e_RedirectionUTRA_TDD_r10) : Sequence(&theInfo) {
	setIRATParametersUTRATDDv1020e_RedirectionUTRA_TDD_r10(iRATParametersUTRATDDv1020e_RedirectionUTRA_TDD_r10);
}

const void *UEEUTRACapabilityv1020IEsNonCriticalExtension::itemsInfo[0] = {
};
bool UEEUTRACapabilityv1020IEsNonCriticalExtension::itemsPres[0] = {
};
const UEEUTRACapabilityv1020IEsNonCriticalExtension::Info UEEUTRACapabilityv1020IEsNonCriticalExtension::theInfo = {
	UEEUTRACapabilityv1020IEsNonCriticalExtension::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *UEEUTRACapabilityv1020IEs::itemsInfo[9] = {
	&UEEUTRACapabilityv1020IEsUeCategoryv1020::theInfo,
	&PhyLayerParametersv1020::theInfo,
	&RFParametersv1020::theInfo,
	&MeasParametersv1020::theInfo,
	&UEEUTRACapabilityv1020IEsFeatureGroupIndRel10r10::theInfo,
	&IRATParametersCDMA20001XRTTv1020::theInfo,
	&UEBasedNetwPerfMeasParametersr10::theInfo,
	&IRATParametersUTRATDDv1020::theInfo,
	&UEEUTRACapabilityv1020IEsNonCriticalExtension::theInfo,
};
bool UEEUTRACapabilityv1020IEs::itemsPres[9] = {
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
const UEEUTRACapabilityv1020IEs::Info UEEUTRACapabilityv1020IEs::theInfo = {
	UEEUTRACapabilityv1020IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	9, 9, 0
};

const void *UEEUTRACapabilityv940IEs::itemsInfo[2] = {
	&UEEUTRACapabilityv940IEsLateNonCriticalExtension::theInfo,
	&UEEUTRACapabilityv1020IEs::theInfo,
};
bool UEEUTRACapabilityv940IEs::itemsPres[2] = {
	0,
	0,
};
const UEEUTRACapabilityv940IEs::Info UEEUTRACapabilityv940IEs::theInfo = {
	UEEUTRACapabilityv940IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *UEEUTRACapabilityv920IEs::itemsInfo[9] = {
	&PhyLayerParametersv920::theInfo,
	&IRATParametersGERANv920::theInfo,
	&IRATParametersUTRAv920::theInfo,
	&IRATParametersCDMA20001XRTTv920::theInfo,
	&UEEUTRACapabilityv920IEsdeviceType_r9::theInfo,
	&CSGProximityIndicationParametersr9::theInfo,
	&NeighCellSIAcquisitionParametersr9::theInfo,
	&SONParametersr9::theInfo,
	&UEEUTRACapabilityv940IEs::theInfo,
};
bool UEEUTRACapabilityv920IEs::itemsPres[9] = {
	1,
	1,
	0,
	0,
	0,
	1,
	1,
	1,
	0,
};
const UEEUTRACapabilityv920IEs::Info UEEUTRACapabilityv920IEs::theInfo = {
	UEEUTRACapabilityv920IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	9, 4, 0
};
UEEUTRACapabilityv920IEs::UEEUTRACapabilityv920IEs(const PhyLayerParametersv920& phyLayerParametersv920, const IRATParametersGERANv920& interRATParametersGERANv920, const CSGProximityIndicationParametersr9& csgProximityIndicationParametersr9, const NeighCellSIAcquisitionParametersr9& neighCellSIAcquisitionParametersr9, const SONParametersr9& sonParametersr9) : Sequence(&theInfo) {
	setPhyLayerParametersv920(phyLayerParametersv920);
	setInterRATParametersGERANv920(interRATParametersGERANv920);
	setCsgProximityIndicationParametersr9(csgProximityIndicationParametersr9);
	setNeighCellSIAcquisitionParametersr9(neighCellSIAcquisitionParametersr9);
	setSonParametersr9(sonParametersr9);
}

const void *UEEUTRACapability::itemsInfo[9] = {
	&AccessStratumRelease::theInfo,
	&UEEUTRACapabilityUeCategory::theInfo,
	&PDCPParameters::theInfo,
	&PhyLayerParameters::theInfo,
	&RFParameters::theInfo,
	&MeasParameters::theInfo,
	&UEEUTRACapabilityFeatureGroupIndicators::theInfo,
	&UEEUTRACapabilityInterRATParameters::theInfo,
	&UEEUTRACapabilityv920IEs::theInfo,
};
bool UEEUTRACapability::itemsPres[9] = {
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
const UEEUTRACapability::Info UEEUTRACapability::theInfo = {
	UEEUTRACapability::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	9, 2, 0
};
UEEUTRACapability::UEEUTRACapability(const AccessStratumRelease& accessStratumRelease, const UEEUTRACapabilityUeCategory& uEEUTRACapabilityUeCategory, const PDCPParameters& pdcpParameters, const PhyLayerParameters& phyLayerParameters, const RFParameters& rfParameters, const MeasParameters& measParameters, const UEEUTRACapabilityInterRATParameters& uEEUTRACapabilityInterRATParameters) : Sequence(&theInfo) {
	setAccessStratumRelease(accessStratumRelease);
	setUEEUTRACapabilityUeCategory(uEEUTRACapabilityUeCategory);
	setPdcpParameters(pdcpParameters);
	setPhyLayerParameters(phyLayerParameters);
	setRfParameters(rfParameters);
	setMeasParameters(measParameters);
	setUEEUTRACapabilityInterRATParameters(uEEUTRACapabilityInterRATParameters);
}

const void *UEEUTRACapabilityAddXDDModer9::itemsInfo[7] = {
	&PhyLayerParameters::theInfo,
	&UEEUTRACapabilityAddXDDModer9FeatureGroupIndicatorsr9::theInfo,
	&UEEUTRACapabilityAddXDDModer9FeatureGroupIndRel9Addr9::theInfo,
	&IRATParametersGERAN::theInfo,
	&IRATParametersUTRAv920::theInfo,
	&IRATParametersCDMA20001XRTTv920::theInfo,
	&NeighCellSIAcquisitionParametersr9::theInfo,
};
bool UEEUTRACapabilityAddXDDModer9::itemsPres[7] = {
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
const UEEUTRACapabilityAddXDDModer9::Info UEEUTRACapabilityAddXDDModer9::theInfo = {
	UEEUTRACapabilityAddXDDModer9::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	7, 7, 0
};

const void *UEEUTRACapabilityv9a0IEsNonCriticalExtension::itemsInfo[0] = {
};
bool UEEUTRACapabilityv9a0IEsNonCriticalExtension::itemsPres[0] = {
};
const UEEUTRACapabilityv9a0IEsNonCriticalExtension::Info UEEUTRACapabilityv9a0IEsNonCriticalExtension::theInfo = {
	UEEUTRACapabilityv9a0IEsNonCriticalExtension::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *UEEUTRACapabilityv9a0IEs::itemsInfo[4] = {
	&UEEUTRACapabilityv9a0IEsFeatureGroupIndRel9Addr9::theInfo,
	&UEEUTRACapabilityAddXDDModer9::theInfo,
	&UEEUTRACapabilityAddXDDModer9::theInfo,
	&UEEUTRACapabilityv9a0IEsNonCriticalExtension::theInfo,
};
bool UEEUTRACapabilityv9a0IEs::itemsPres[4] = {
	0,
	0,
	0,
	0,
};
const UEEUTRACapabilityv9a0IEs::Info UEEUTRACapabilityv9a0IEs::theInfo = {
	UEEUTRACapabilityv9a0IEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 4, 0
};

}
