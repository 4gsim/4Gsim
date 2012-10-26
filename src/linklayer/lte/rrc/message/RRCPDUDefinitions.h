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

#ifndef RRCPDUDEFINITIONS_H_
#define RRCPDUDEFINITIONS_H_

#include "ASNTypes.h"
#include "RRCClassDefinitions.h"

namespace rrc {

#define maxReestabInfo 32

typedef OctetStringBase HandoverCommandr8IEsHandoverCommandMessage;

class HandoverCommandr8IEsNonCriticalExtension : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	HandoverCommandr8IEsNonCriticalExtension(): Sequence(&theInfo) {}
};

class HandoverCommandr8IEs : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HandoverCommandr8IEs(): Sequence(&theInfo) {}
	HandoverCommandr8IEs(const HandoverCommandr8IEsHandoverCommandMessage& handoverCommandr8IEsHandoverCommandMessage);

	void setHandoverCommandr8IEsHandoverCommandMessage(const HandoverCommandr8IEsHandoverCommandMessage& handoverCommandr8IEsHandoverCommandMessage) { *static_cast<HandoverCommandr8IEsHandoverCommandMessage*>(items[0]) = handoverCommandr8IEsHandoverCommandMessage; }
	void setHandoverCommandr8IEsNonCriticalExtension(const HandoverCommandr8IEsNonCriticalExtension& handoverCommandr8IEsNonCriticalExtension) { *static_cast<HandoverCommandr8IEsNonCriticalExtension*>(items[1]) = handoverCommandr8IEsNonCriticalExtension; }
};

typedef Null HandoverCommandCriticalExtensionsC1Spare7;

typedef Null HandoverCommandCriticalExtensionsC1Spare6;

typedef Null HandoverCommandCriticalExtensionsC1Spare5;

typedef Null HandoverCommandCriticalExtensionsC1Spare4;

typedef Null HandoverCommandCriticalExtensionsC1Spare3;

typedef Null HandoverCommandCriticalExtensionsC1Spare2;

typedef Null HandoverCommandCriticalExtensionsC1Spare1;

class HandoverCommandCriticalExtensionsC1 : public Choice {
private:
	static const void *choicesInfo[8];
public:
	enum HandoverCommandCriticalExtensionsC1Choices {
		handoverCommandr8 = 0,
		handoverCommandCriticalExtensionsC1Spare7 = 1,
		handoverCommandCriticalExtensionsC1Spare6 = 2,
		handoverCommandCriticalExtensionsC1Spare5 = 3,
		handoverCommandCriticalExtensionsC1Spare4 = 4,
		handoverCommandCriticalExtensionsC1Spare3 = 5,
		handoverCommandCriticalExtensionsC1Spare2 = 6,
		handoverCommandCriticalExtensionsC1Spare1 = 7,
	};
	static const Info theInfo;
	HandoverCommandCriticalExtensionsC1(): Choice(&theInfo) {}
};

class HandoverCommandCriticalExtensionsCriticalExtensionsFuture : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	HandoverCommandCriticalExtensionsCriticalExtensionsFuture(): Sequence(&theInfo) {}
};

class HandoverCommandCriticalExtensions : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum HandoverCommandCriticalExtensionsChoices {
		handoverCommandCriticalExtensionsC1 = 0,
		handoverCommandCriticalExtensionsCriticalExtensionsFuture = 1,
	};
	static const Info theInfo;
	HandoverCommandCriticalExtensions(): Choice(&theInfo) {}
};

class HandoverCommand : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HandoverCommand(): Sequence(&theInfo) {}
	HandoverCommand(const HandoverCommandCriticalExtensions& handoverCommandCriticalExtensions);

	void setHandoverCommandCriticalExtensions(const HandoverCommandCriticalExtensions& handoverCommandCriticalExtensions) { *static_cast<HandoverCommandCriticalExtensions*>(items[0]) = handoverCommandCriticalExtensions; }
};

typedef OctetStringBase ASConfigSourceSystemInformationBlockType1Ext;

class ASConfig : public Sequence {
private:
	static const void *itemsInfo[12];
	static bool itemsPres[12];
public:
	static const Info theInfo;
	ASConfig(): Sequence(&theInfo) {}
	ASConfig(const MeasConfig& sourceMeasConfig, const RadioResourceConfigDedicated& sourceRadioResourceConfig, const SecurityAlgorithmConfig& sourceSecurityAlgorithmConfig, const CRNTI& sourceUEIdentity, const MasterInformationBlock& sourceMasterInformationBlock, const SystemInformationBlockType1& sourceSystemInformationBlockType1, const SystemInformationBlockType2& sourceSystemInformationBlockType2, const AntennaInfoCommon& antennaInfoCommon, const ARFCNValueEUTRA& sourceDlCarrierFreq, const OtherConfigr9& sourceOtherConfigr9);

	void setSourceMeasConfig(const MeasConfig& sourceMeasConfig) { *static_cast<MeasConfig*>(items[0]) = sourceMeasConfig; }
	void setSourceRadioResourceConfig(const RadioResourceConfigDedicated& sourceRadioResourceConfig) { *static_cast<RadioResourceConfigDedicated*>(items[1]) = sourceRadioResourceConfig; }
	void setSourceSecurityAlgorithmConfig(const SecurityAlgorithmConfig& sourceSecurityAlgorithmConfig) { *static_cast<SecurityAlgorithmConfig*>(items[2]) = sourceSecurityAlgorithmConfig; }
	void setSourceUEIdentity(const CRNTI& sourceUEIdentity) { *static_cast<CRNTI*>(items[3]) = sourceUEIdentity; }
	void setSourceMasterInformationBlock(const MasterInformationBlock& sourceMasterInformationBlock) { *static_cast<MasterInformationBlock*>(items[4]) = sourceMasterInformationBlock; }
	void setSourceSystemInformationBlockType1(const SystemInformationBlockType1& sourceSystemInformationBlockType1) { *static_cast<SystemInformationBlockType1*>(items[5]) = sourceSystemInformationBlockType1; }
	void setSourceSystemInformationBlockType2(const SystemInformationBlockType2& sourceSystemInformationBlockType2) { *static_cast<SystemInformationBlockType2*>(items[6]) = sourceSystemInformationBlockType2; }
	void setAntennaInfoCommon(const AntennaInfoCommon& antennaInfoCommon) { *static_cast<AntennaInfoCommon*>(items[7]) = antennaInfoCommon; }
	void setSourceDlCarrierFreq(const ARFCNValueEUTRA& sourceDlCarrierFreq) { *static_cast<ARFCNValueEUTRA*>(items[8]) = sourceDlCarrierFreq; }
	void setASConfigSourceSystemInformationBlockType1Ext(const ASConfigSourceSystemInformationBlockType1Ext& aSConfigSourceSystemInformationBlockType1Ext) { *static_cast<ASConfigSourceSystemInformationBlockType1Ext*>(items[9]) = aSConfigSourceSystemInformationBlockType1Ext; }
	void setSourceOtherConfigr9(const OtherConfigr9& sourceOtherConfigr9) { *static_cast<OtherConfigr9*>(items[10]) = sourceOtherConfigr9; }
	void setSourceSCellConfigListr10(const SCellToAddModListr10& sourceSCellConfigListr10) { *static_cast<SCellToAddModListr10*>(items[11]) = sourceSCellConfigListr10; }
};

enum RRMConfigue_InactiveTimeValues {
	s1_RRMConfigue_InactiveTime = 0,
	s2_RRMConfigue_InactiveTime = 1,
	s3_RRMConfigue_InactiveTime = 2,
	s5_RRMConfigue_InactiveTime = 3,
	s7_RRMConfigue_InactiveTime = 4,
	s10_RRMConfigue_InactiveTime = 5,
	s15_RRMConfigue_InactiveTime = 6,
	s20_RRMConfigue_InactiveTime = 7,
	s25_RRMConfigue_InactiveTime = 8,
	s30_RRMConfigue_InactiveTime = 9,
	s40_RRMConfigue_InactiveTime = 10,
	s50_RRMConfigue_InactiveTime = 11,
	min1_RRMConfigue_InactiveTime = 12,
	min1s20c_RRMConfigue_InactiveTime = 13,
	min1s40_RRMConfigue_InactiveTime = 14,
	min2_RRMConfigue_InactiveTime = 15,
	min2s30_RRMConfigue_InactiveTime = 16,
	min3_RRMConfigue_InactiveTime = 17,
	min3s30_RRMConfigue_InactiveTime = 18,
	min4_RRMConfigue_InactiveTime = 19,
	min5_RRMConfigue_InactiveTime = 20,
	min6_RRMConfigue_InactiveTime = 21,
	min7_RRMConfigue_InactiveTime = 22,
	min8_RRMConfigue_InactiveTime = 23,
	min9_RRMConfigue_InactiveTime = 24,
	min10_RRMConfigue_InactiveTime = 25,
	min12_RRMConfigue_InactiveTime = 26,
	min14_RRMConfigue_InactiveTime = 27,
	min17_RRMConfigue_InactiveTime = 28,
	min20_RRMConfigue_InactiveTime = 29,
	min24_RRMConfigue_InactiveTime = 30,
	min28_RRMConfigue_InactiveTime = 31,
	min33_RRMConfigue_InactiveTime = 32,
	min38_RRMConfigue_InactiveTime = 33,
	min44_RRMConfigue_InactiveTime = 34,
	min50_RRMConfigue_InactiveTime = 35,
	hr1_RRMConfigue_InactiveTime = 36,
	hr1min30_RRMConfigue_InactiveTime = 37,
	hr2_RRMConfigue_InactiveTime = 38,
	hr2min30_RRMConfigue_InactiveTime = 39,
	hr3_RRMConfigue_InactiveTime = 40,
	hr3min30_RRMConfigue_InactiveTime = 41,
	hr4_RRMConfigue_InactiveTime = 42,
	hr5_RRMConfigue_InactiveTime = 43,
	hr6_RRMConfigue_InactiveTime = 44,
	hr8_RRMConfigue_InactiveTime = 45,
	hr10_RRMConfigue_InactiveTime = 46,
	hr13_RRMConfigue_InactiveTime = 47,
	hr16_RRMConfigue_InactiveTime = 48,
	hr20_RRMConfigue_InactiveTime = 49,
	day1_RRMConfigue_InactiveTime = 50,
	day1hr12_RRMConfigue_InactiveTime = 51,
	day2_RRMConfigue_InactiveTime = 52,
	day2hr12_RRMConfigue_InactiveTime = 53,
	day3_RRMConfigue_InactiveTime = 54,
	day4_RRMConfigue_InactiveTime = 55,
	day5_RRMConfigue_InactiveTime = 56,
	day7_RRMConfigue_InactiveTime = 57,
	day10_RRMConfigue_InactiveTime = 58,
	day14_RRMConfigue_InactiveTime = 59,
	day19_RRMConfigue_InactiveTime = 60,
	day24_RRMConfigue_InactiveTime = 61,
	day30_RRMConfigue_InactiveTime = 62,
	dayMoreThan30_RRMConfigue_InactiveTime = 63,
};
typedef Enumerated<CONSTRAINED, 63> RRMConfigue_InactiveTime;

class CandidateCellInfor10 : public Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CandidateCellInfor10(): Sequence(&theInfo) {}
	CandidateCellInfor10(const PhysCellId& physCellIdr10, const ARFCNValueEUTRA& dlCarrierFreqr10);

	void setPhysCellIdr10(const PhysCellId& physCellIdr10) { *static_cast<PhysCellId*>(items[0]) = physCellIdr10; }
	void setDlCarrierFreqr10(const ARFCNValueEUTRA& dlCarrierFreqr10) { *static_cast<ARFCNValueEUTRA*>(items[1]) = dlCarrierFreqr10; }
	void setRsrpResultr10(const RSRPRange& rsrpResultr10) { *static_cast<RSRPRange*>(items[2]) = rsrpResultr10; }
	void setRsrqResultr10(const RSRQRange& rsrqResultr10) { *static_cast<RSRQRange*>(items[3]) = rsrqResultr10; }
};

typedef SequenceOf<CandidateCellInfor10, CONSTRAINED, 1, maxFreq> CandidateCellInfoListr10;

class RRMConfig : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRMConfig(): Sequence(&theInfo) {}
	void setRRMConfigue_InactiveTime(const RRMConfigue_InactiveTime& rRMConfigue_InactiveTime) { *static_cast<RRMConfigue_InactiveTime*>(items[0]) = rRMConfigue_InactiveTime; }
	void setCandidateCellInfoListr10(const CandidateCellInfoListr10& candidateCellInfoListr10) { *static_cast<CandidateCellInfoListr10*>(items[1]) = candidateCellInfoListr10; }
};

typedef BitString<CONSTRAINED, 256, 256> KeyeNodeBStar;

class AdditionalReestabInfo : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	AdditionalReestabInfo(): Sequence(&theInfo) {}
	AdditionalReestabInfo(const CellIdentity& cellIdentity, const KeyeNodeBStar& keyeNodeBStar, const ShortMACI& shortMACI);

	void setCellIdentity(const CellIdentity& cellIdentity) { *static_cast<CellIdentity*>(items[0]) = cellIdentity; }
	void setKeyeNodeBStar(const KeyeNodeBStar& keyeNodeBStar) { *static_cast<KeyeNodeBStar*>(items[1]) = keyeNodeBStar; }
	void setShortMACI(const ShortMACI& shortMACI) { *static_cast<ShortMACI*>(items[2]) = shortMACI; }
};

typedef SequenceOf<AdditionalReestabInfo, CONSTRAINED, 1, maxReestabInfo> AdditionalReestabInfoList;

class ReestablishmentInfo : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	ReestablishmentInfo(): Sequence(&theInfo) {}
	ReestablishmentInfo(const PhysCellId& sourcePhysCellId, const ShortMACI& targetCellShortMACI);

	void setSourcePhysCellId(const PhysCellId& sourcePhysCellId) { *static_cast<PhysCellId*>(items[0]) = sourcePhysCellId; }
	void setTargetCellShortMACI(const ShortMACI& targetCellShortMACI) { *static_cast<ShortMACI*>(items[1]) = targetCellShortMACI; }
	void setAdditionalReestabInfoList(const AdditionalReestabInfoList& additionalReestabInfoList) { *static_cast<AdditionalReestabInfoList*>(items[2]) = additionalReestabInfoList; }
};

class ASContext : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ASContext(): Sequence(&theInfo) {}
	void setReestablishmentInfo(const ReestablishmentInfo& reestablishmentInfo) { *static_cast<ReestablishmentInfo*>(items[0]) = reestablishmentInfo; }
};

enum HandoverPreparationInformationv920IEsue_ConfigRelease_r9Values {
	rel9_HandoverPreparationInformationv920IEsue_ConfigRelease_r9 = 0,
	rel10_HandoverPreparationInformationv920IEsue_ConfigRelease_r9 = 1,
	spare6_HandoverPreparationInformationv920IEsue_ConfigRelease_r9 = 2,
	spare5_HandoverPreparationInformationv920IEsue_ConfigRelease_r9 = 3,
	spare4_HandoverPreparationInformationv920IEsue_ConfigRelease_r9 = 4,
	spare3_HandoverPreparationInformationv920IEsue_ConfigRelease_r9 = 5,
	spare2_HandoverPreparationInformationv920IEsue_ConfigRelease_r9 = 6,
	spare1_HandoverPreparationInformationv920IEsue_ConfigRelease_r9 = 7,
};
typedef Enumerated<EXTCONSTRAINED, 7> HandoverPreparationInformationv920IEsue_ConfigRelease_r9;

class HandoverPreparationInformationv920IEsNonCriticalExtension : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	HandoverPreparationInformationv920IEsNonCriticalExtension(): Sequence(&theInfo) {}
};

class HandoverPreparationInformationv920IEs : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HandoverPreparationInformationv920IEs(): Sequence(&theInfo) {}
	void setHandoverPreparationInformationv920IEsue_ConfigRelease_r9(const HandoverPreparationInformationv920IEsue_ConfigRelease_r9& handoverPreparationInformationv920IEsue_ConfigRelease_r9) { *static_cast<HandoverPreparationInformationv920IEsue_ConfigRelease_r9*>(items[0]) = handoverPreparationInformationv920IEsue_ConfigRelease_r9; }
	void setHandoverPreparationInformationv920IEsNonCriticalExtension(const HandoverPreparationInformationv920IEsNonCriticalExtension& handoverPreparationInformationv920IEsNonCriticalExtension) { *static_cast<HandoverPreparationInformationv920IEsNonCriticalExtension*>(items[1]) = handoverPreparationInformationv920IEsNonCriticalExtension; }
};

class HandoverPreparationInformationr8IEs : public Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	HandoverPreparationInformationr8IEs(): Sequence(&theInfo) {}
	HandoverPreparationInformationr8IEs(const UECapabilityRATContainerList& ueRadioAccessCapabilityInfo);

	void setUeRadioAccessCapabilityInfo(const UECapabilityRATContainerList& ueRadioAccessCapabilityInfo) { *static_cast<UECapabilityRATContainerList*>(items[0]) = ueRadioAccessCapabilityInfo; }
	void setAsConfig(const ASConfig& asConfig) { *static_cast<ASConfig*>(items[1]) = asConfig; }
	void setRrmConfig(const RRMConfig& rrmConfig) { *static_cast<RRMConfig*>(items[2]) = rrmConfig; }
	void setAsContext(const ASContext& asContext) { *static_cast<ASContext*>(items[3]) = asContext; }
	void setNonCriticalExtension(const HandoverPreparationInformationv920IEs& nonCriticalExtension) { *static_cast<HandoverPreparationInformationv920IEs*>(items[4]) = nonCriticalExtension; }
};

typedef Null HandoverPreparationInformationCriticalExtensionsC1Spare7;

typedef Null HandoverPreparationInformationCriticalExtensionsC1Spare6;

typedef Null HandoverPreparationInformationCriticalExtensionsC1Spare5;

typedef Null HandoverPreparationInformationCriticalExtensionsC1Spare4;

typedef Null HandoverPreparationInformationCriticalExtensionsC1Spare3;

typedef Null HandoverPreparationInformationCriticalExtensionsC1Spare2;

typedef Null HandoverPreparationInformationCriticalExtensionsC1Spare1;

class HandoverPreparationInformationCriticalExtensionsC1 : public Choice {
private:
	static const void *choicesInfo[8];
public:
	enum HandoverPreparationInformationCriticalExtensionsC1Choices {
		handoverPreparationInformationr8 = 0,
		handoverPreparationInformationCriticalExtensionsC1Spare7 = 1,
		handoverPreparationInformationCriticalExtensionsC1Spare6 = 2,
		handoverPreparationInformationCriticalExtensionsC1Spare5 = 3,
		handoverPreparationInformationCriticalExtensionsC1Spare4 = 4,
		handoverPreparationInformationCriticalExtensionsC1Spare3 = 5,
		handoverPreparationInformationCriticalExtensionsC1Spare2 = 6,
		handoverPreparationInformationCriticalExtensionsC1Spare1 = 7,
	};
	static const Info theInfo;
	HandoverPreparationInformationCriticalExtensionsC1(): Choice(&theInfo) {}
};

class HandoverPreparationInformationCriticalExtensionsCriticalExtensionsFuture : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	HandoverPreparationInformationCriticalExtensionsCriticalExtensionsFuture(): Sequence(&theInfo) {}
};

class HandoverPreparationInformationCriticalExtensions : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum HandoverPreparationInformationCriticalExtensionsChoices {
		handoverPreparationInformationCriticalExtensionsC1 = 0,
		handoverPreparationInformationCriticalExtensionsCriticalExtensionsFuture = 1,
	};
	static const Info theInfo;
	HandoverPreparationInformationCriticalExtensions(): Choice(&theInfo) {}
};

class HandoverPreparationInformation : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HandoverPreparationInformation(): Sequence(&theInfo) {}
	HandoverPreparationInformation(const HandoverPreparationInformationCriticalExtensions& handoverPreparationInformationCriticalExtensions);

	void setHandoverPreparationInformationCriticalExtensions(const HandoverPreparationInformationCriticalExtensions& handoverPreparationInformationCriticalExtensions) { *static_cast<HandoverPreparationInformationCriticalExtensions*>(items[0]) = handoverPreparationInformationCriticalExtensions; }
};

typedef OctetStringBase UERadioAccessCapabilityInformationr8IEsUeRadioAccessCapabilityInfo;

class UERadioAccessCapabilityInformationr8IEsNonCriticalExtension : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	UERadioAccessCapabilityInformationr8IEsNonCriticalExtension(): Sequence(&theInfo) {}
};

class UERadioAccessCapabilityInformationr8IEs : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UERadioAccessCapabilityInformationr8IEs(): Sequence(&theInfo) {}
	UERadioAccessCapabilityInformationr8IEs(const UERadioAccessCapabilityInformationr8IEsUeRadioAccessCapabilityInfo& uERadioAccessCapabilityInformationr8IEsUeRadioAccessCapabilityInfo);

	void setUERadioAccessCapabilityInformationr8IEsUeRadioAccessCapabilityInfo(const UERadioAccessCapabilityInformationr8IEsUeRadioAccessCapabilityInfo& uERadioAccessCapabilityInformationr8IEsUeRadioAccessCapabilityInfo) { *static_cast<UERadioAccessCapabilityInformationr8IEsUeRadioAccessCapabilityInfo*>(items[0]) = uERadioAccessCapabilityInformationr8IEsUeRadioAccessCapabilityInfo; }
	void setUERadioAccessCapabilityInformationr8IEsNonCriticalExtension(const UERadioAccessCapabilityInformationr8IEsNonCriticalExtension& uERadioAccessCapabilityInformationr8IEsNonCriticalExtension) { *static_cast<UERadioAccessCapabilityInformationr8IEsNonCriticalExtension*>(items[1]) = uERadioAccessCapabilityInformationr8IEsNonCriticalExtension; }
};

typedef Null UERadioAccessCapabilityInformationCriticalExtensionsC1Spare7;

typedef Null UERadioAccessCapabilityInformationCriticalExtensionsC1Spare6;

typedef Null UERadioAccessCapabilityInformationCriticalExtensionsC1Spare5;

typedef Null UERadioAccessCapabilityInformationCriticalExtensionsC1Spare4;

typedef Null UERadioAccessCapabilityInformationCriticalExtensionsC1Spare3;

typedef Null UERadioAccessCapabilityInformationCriticalExtensionsC1Spare2;

typedef Null UERadioAccessCapabilityInformationCriticalExtensionsC1Spare1;

class UERadioAccessCapabilityInformationCriticalExtensionsC1 : public Choice {
private:
	static const void *choicesInfo[8];
public:
	enum UERadioAccessCapabilityInformationCriticalExtensionsC1Choices {
		ueRadioAccessCapabilityInformationr8 = 0,
		uERadioAccessCapabilityInformationCriticalExtensionsC1Spare7 = 1,
		uERadioAccessCapabilityInformationCriticalExtensionsC1Spare6 = 2,
		uERadioAccessCapabilityInformationCriticalExtensionsC1Spare5 = 3,
		uERadioAccessCapabilityInformationCriticalExtensionsC1Spare4 = 4,
		uERadioAccessCapabilityInformationCriticalExtensionsC1Spare3 = 5,
		uERadioAccessCapabilityInformationCriticalExtensionsC1Spare2 = 6,
		uERadioAccessCapabilityInformationCriticalExtensionsC1Spare1 = 7,
	};
	static const Info theInfo;
	UERadioAccessCapabilityInformationCriticalExtensionsC1(): Choice(&theInfo) {}
};

class UERadioAccessCapabilityInformationCriticalExtensionsCriticalExtensionsFuture : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	UERadioAccessCapabilityInformationCriticalExtensionsCriticalExtensionsFuture(): Sequence(&theInfo) {}
};

class UERadioAccessCapabilityInformationCriticalExtensions : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum UERadioAccessCapabilityInformationCriticalExtensionsChoices {
		uERadioAccessCapabilityInformationCriticalExtensionsC1 = 0,
		uERadioAccessCapabilityInformationCriticalExtensionsCriticalExtensionsFuture = 1,
	};
	static const Info theInfo;
	UERadioAccessCapabilityInformationCriticalExtensions(): Choice(&theInfo) {}
};

class UERadioAccessCapabilityInformation : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityInformation(): Sequence(&theInfo) {}
	UERadioAccessCapabilityInformation(const UERadioAccessCapabilityInformationCriticalExtensions& uERadioAccessCapabilityInformationCriticalExtensions);

	void setUERadioAccessCapabilityInformationCriticalExtensions(const UERadioAccessCapabilityInformationCriticalExtensions& uERadioAccessCapabilityInformationCriticalExtensions) { *static_cast<UERadioAccessCapabilityInformationCriticalExtensions*>(items[0]) = uERadioAccessCapabilityInformationCriticalExtensions; }
};

}

#endif /* RRCPDUDEFINITIONS_H_ */
