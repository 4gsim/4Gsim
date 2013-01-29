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

namespace rrc {

#define maxBandComb_r10 128

#define maxBands 64

#define maxBandwidthClass_r10 16

#define maxCDMA_BandClass 32

#define maxCellBlack 16

#define maxCellInfoGERAN_r9 32

#define maxCellInfoUTRA_r9 16

#define maxFreqUTRA_TDD_r10 6

#define maxCellInter 16

#define maxCellIntra 16

#define maxCellListGERAN 3

#define maxCellMeas 32

#define maxCellReport 8

#define maxDRB 11

#define maxEARFCN 65535

#define maxFreq 8

#define maxGERAN_SI 10

#define maxGNFG 16

#define maxLogMeasReport_r10 520

#define maxMBSFN_Allocations 8

#define maxMBSFN_Area 8

#define maxMBSFN_Area_1 7

#define maxMeasId 32

#define maxObjectId 32

#define maxPageRec 16

#define maxPhysCellIdRange_r9 4

#define maxPNOffset 511

#define maxPMCH_PerMBSFN 15

#define maxRAT_Capabilities 8

#define maxReportConfigId 32

#define maxRSTD_Freq_r10 3

#define maxSCell_r10 4

#define maxServCell_r10 5

#define maxServiceCount 16

#define maxServiceCount_1 15

#define maxSessionPerPMCH 29

#define maxSessionPerPMCH_1 28

#define maxSIB 32

#define maxSIB_1 31

#define maxSI_Message 32

#define maxSimultaneousBands_r10 64

#define maxUTRA_FDD_Carrier 16

#define maxUTRA_TDD_Carrier 16

enum MasterInformationBlockdl_BandwidthValues {
	n6_MasterInformationBlockdl_Bandwidth = 0,
	n15_MasterInformationBlockdl_Bandwidth = 1,
	n25_MasterInformationBlockdl_Bandwidth = 2,
	n50_MasterInformationBlockdl_Bandwidth = 3,
	n75_MasterInformationBlockdl_Bandwidth = 4,
	n100_MasterInformationBlockdl_Bandwidth = 5,
};
typedef Enumerated<CONSTRAINED, 5> MasterInformationBlockdl_Bandwidth;

enum PHICHConfigphich_DurationValues {
	normal_PHICHConfigphich_Duration = 0,
	extended_PHICHConfigphich_Duration = 1,
};
typedef Enumerated<CONSTRAINED, 1> PHICHConfigphich_Duration;

enum PHICHConfigphich_ResourceValues {
	oneSixth_PHICHConfigphich_Resource = 0,
	half_PHICHConfigphich_Resource = 1,
	one_PHICHConfigphich_Resource = 2,
	two_PHICHConfigphich_Resource = 3,
};
typedef Enumerated<CONSTRAINED, 3> PHICHConfigphich_Resource;

class PHICHConfig : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PHICHConfig(): Sequence(&theInfo) {}
	PHICHConfig(const PHICHConfigphich_Duration& pHICHConfigphich_Duration, const PHICHConfigphich_Resource& pHICHConfigphich_Resource);

	void setPHICHConfigphich_Duration(const PHICHConfigphich_Duration& pHICHConfigphich_Duration) { *static_cast<PHICHConfigphich_Duration*>(items[0]) = pHICHConfigphich_Duration; }
	void setPHICHConfigphich_Resource(const PHICHConfigphich_Resource& pHICHConfigphich_Resource) { *static_cast<PHICHConfigphich_Resource*>(items[1]) = pHICHConfigphich_Resource; }

	PHICHConfigphich_Duration& getPHICHConfigphich_Duration() { return *static_cast<PHICHConfigphich_Duration*>(items[0]); }
	PHICHConfigphich_Resource& getPHICHConfigphich_Resource() { return *static_cast<PHICHConfigphich_Resource*>(items[1]); }
};

typedef BitString<CONSTRAINED, 8, 8> MasterInformationBlockSystemFrameNumber;

typedef BitString<CONSTRAINED, 10, 10> MasterInformationBlockSpare;

class MasterInformationBlock : public Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	MasterInformationBlock(): Sequence(&theInfo) {}
	MasterInformationBlock(const MasterInformationBlockdl_Bandwidth& masterInformationBlockdl_Bandwidth, const PHICHConfig& phichConfig, const MasterInformationBlockSystemFrameNumber& masterInformationBlockSystemFrameNumber, const MasterInformationBlockSpare& masterInformationBlockSpare);

	void setMasterInformationBlockdl_Bandwidth(const MasterInformationBlockdl_Bandwidth& masterInformationBlockdl_Bandwidth) { *static_cast<MasterInformationBlockdl_Bandwidth*>(items[0]) = masterInformationBlockdl_Bandwidth; }
	void setPhichConfig(const PHICHConfig& phichConfig) { *static_cast<PHICHConfig*>(items[1]) = phichConfig; }
	void setMasterInformationBlockSystemFrameNumber(const MasterInformationBlockSystemFrameNumber& masterInformationBlockSystemFrameNumber) { *static_cast<MasterInformationBlockSystemFrameNumber*>(items[2]) = masterInformationBlockSystemFrameNumber; }
	void setMasterInformationBlockSpare(const MasterInformationBlockSpare& masterInformationBlockSpare) { *static_cast<MasterInformationBlockSpare*>(items[3]) = masterInformationBlockSpare; }

	MasterInformationBlockdl_Bandwidth& getMasterInformationBlockdl_Bandwidth() { return *static_cast<MasterInformationBlockdl_Bandwidth*>(items[0]); }
	PHICHConfig& getPhichConfig() { return *static_cast<PHICHConfig*>(items[1]); }
	MasterInformationBlockSystemFrameNumber& getMasterInformationBlockSystemFrameNumber() { return *static_cast<MasterInformationBlockSystemFrameNumber*>(items[2]); }
	MasterInformationBlockSpare& getMasterInformationBlockSpare() { return *static_cast<MasterInformationBlockSpare*>(items[3]); }
};

typedef MasterInformationBlock BCCHBCHMessageType;

class BCCHBCHMessage : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	BCCHBCHMessage(): Sequence(&theInfo) {}
	BCCHBCHMessage(const BCCHBCHMessageType& message);

	void setMessage(const BCCHBCHMessageType& message) { *static_cast<BCCHBCHMessageType*>(items[0]) = message; }

	BCCHBCHMessageType& getMessage() { return *static_cast<BCCHBCHMessageType*>(items[0]); }
};

class SystemInformationr8IEsSibTypeAndInfo : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	SystemInformationr8IEsSibTypeAndInfo(): Sequence(&theInfo) {}


};

typedef OctetStringBase SystemInformationv8a0IEsLateNonCriticalExtension;

class SystemInformationv8a0IEsNonCriticalExtension : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	SystemInformationv8a0IEsNonCriticalExtension(): Sequence(&theInfo) {}


};

class SystemInformationv8a0IEs : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SystemInformationv8a0IEs(): Sequence(&theInfo) {}

	void setSystemInformationv8a0IEsLateNonCriticalExtension(const SystemInformationv8a0IEsLateNonCriticalExtension& systemInformationv8a0IEsLateNonCriticalExtension) { *static_cast<SystemInformationv8a0IEsLateNonCriticalExtension*>(items[0]) = systemInformationv8a0IEsLateNonCriticalExtension; }
	void setSystemInformationv8a0IEsNonCriticalExtension(const SystemInformationv8a0IEsNonCriticalExtension& systemInformationv8a0IEsNonCriticalExtension) { *static_cast<SystemInformationv8a0IEsNonCriticalExtension*>(items[1]) = systemInformationv8a0IEsNonCriticalExtension; }

	SystemInformationv8a0IEsLateNonCriticalExtension& getSystemInformationv8a0IEsLateNonCriticalExtension() { return *static_cast<SystemInformationv8a0IEsLateNonCriticalExtension*>(items[0]); }
	SystemInformationv8a0IEsNonCriticalExtension& getSystemInformationv8a0IEsNonCriticalExtension() { return *static_cast<SystemInformationv8a0IEsNonCriticalExtension*>(items[1]); }
};

class SystemInformationr8IEs : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SystemInformationr8IEs(): Sequence(&theInfo) {}
	SystemInformationr8IEs(const SystemInformationr8IEsSibTypeAndInfo& systemInformationr8IEsSibTypeAndInfo);

	void setSystemInformationr8IEsSibTypeAndInfo(const SystemInformationr8IEsSibTypeAndInfo& systemInformationr8IEsSibTypeAndInfo) { *static_cast<SystemInformationr8IEsSibTypeAndInfo*>(items[0]) = systemInformationr8IEsSibTypeAndInfo; }
	void setNonCriticalExtension(const SystemInformationv8a0IEs& nonCriticalExtension) { *static_cast<SystemInformationv8a0IEs*>(items[1]) = nonCriticalExtension; }

	SystemInformationr8IEsSibTypeAndInfo& getSystemInformationr8IEsSibTypeAndInfo() { return *static_cast<SystemInformationr8IEsSibTypeAndInfo*>(items[0]); }
	SystemInformationv8a0IEs& getNonCriticalExtension() { return *static_cast<SystemInformationv8a0IEs*>(items[1]); }
};

class SystemInformationCriticalExtensionsCriticalExtensionsFuture : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	SystemInformationCriticalExtensionsCriticalExtensionsFuture(): Sequence(&theInfo) {}


};

class SystemInformationCriticalExtensions : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum SystemInformationCriticalExtensionsChoices {
		systemInformationr8 = 0,
		systemInformationCriticalExtensionsCriticalExtensionsFuture = 1,
	};
	static const Info theInfo;
	SystemInformationCriticalExtensions(): Choice(&theInfo) {}
};

class SystemInformation : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SystemInformation(): Sequence(&theInfo) {}
	SystemInformation(const SystemInformationCriticalExtensions& systemInformationCriticalExtensions);

	void setSystemInformationCriticalExtensions(const SystemInformationCriticalExtensions& systemInformationCriticalExtensions) { *static_cast<SystemInformationCriticalExtensions*>(items[0]) = systemInformationCriticalExtensions; }

	SystemInformationCriticalExtensions& getSystemInformationCriticalExtensions() { return *static_cast<SystemInformationCriticalExtensions*>(items[0]); }
};

typedef Integer<CONSTRAINED, 0, 9> MCCMNCDigit;

typedef SequenceOf<MCCMNCDigit, CONSTRAINED, 3, 3> MCC;

typedef SequenceOf<MCCMNCDigit, CONSTRAINED, 2, 3> MNC;

class PLMNIdentity : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PLMNIdentity(): Sequence(&theInfo) {}
	PLMNIdentity(const MNC& mnc);

	void setMcc(const MCC& mcc) { *static_cast<MCC*>(items[0]) = mcc; }
	void setMnc(const MNC& mnc) { *static_cast<MNC*>(items[1]) = mnc; }

	MCC& getMcc() { return *static_cast<MCC*>(items[0]); }
	MNC& getMnc() { return *static_cast<MNC*>(items[1]); }
};

enum PLMNIdentityInfocellReservedForOperatorUseValues {
	reserved_PLMNIdentityInfocellReservedForOperatorUse = 0,
	notReserved_PLMNIdentityInfocellReservedForOperatorUse = 1,
};
typedef Enumerated<CONSTRAINED, 1> PLMNIdentityInfocellReservedForOperatorUse;

class PLMNIdentityInfo : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PLMNIdentityInfo(): Sequence(&theInfo) {}
	PLMNIdentityInfo(const PLMNIdentity& plmnIdentity, const PLMNIdentityInfocellReservedForOperatorUse& pLMNIdentityInfocellReservedForOperatorUse);

	void setPlmnIdentity(const PLMNIdentity& plmnIdentity) { *static_cast<PLMNIdentity*>(items[0]) = plmnIdentity; }
	void setPLMNIdentityInfocellReservedForOperatorUse(const PLMNIdentityInfocellReservedForOperatorUse& pLMNIdentityInfocellReservedForOperatorUse) { *static_cast<PLMNIdentityInfocellReservedForOperatorUse*>(items[1]) = pLMNIdentityInfocellReservedForOperatorUse; }

	PLMNIdentity& getPlmnIdentity() { return *static_cast<PLMNIdentity*>(items[0]); }
	PLMNIdentityInfocellReservedForOperatorUse& getPLMNIdentityInfocellReservedForOperatorUse() { return *static_cast<PLMNIdentityInfocellReservedForOperatorUse*>(items[1]); }
};

typedef SequenceOf<PLMNIdentityInfo, CONSTRAINED, 1, 6> PLMNIdentityList;

typedef BitString<CONSTRAINED, 16, 16> TrackingAreaCode;

typedef BitString<CONSTRAINED, 28, 28> CellIdentity;

enum SystemInformationBlockType1CellAccessRelatedInfocellBarredValues {
	barred_SystemInformationBlockType1CellAccessRelatedInfocellBarred = 0,
	notBarred_SystemInformationBlockType1CellAccessRelatedInfocellBarred = 1,
};
typedef Enumerated<CONSTRAINED, 1> SystemInformationBlockType1CellAccessRelatedInfocellBarred;

enum SystemInformationBlockType1CellAccessRelatedInfointraFreqReselectionValues {
	allowed_SystemInformationBlockType1CellAccessRelatedInfointraFreqReselection = 0,
	notAllowed_SystemInformationBlockType1CellAccessRelatedInfointraFreqReselection = 1,
};
typedef Enumerated<CONSTRAINED, 1> SystemInformationBlockType1CellAccessRelatedInfointraFreqReselection;

typedef Boolean SystemInformationBlockType1CellAccessRelatedInfoCsgIndication;

typedef BitString<CONSTRAINED, 27, 27> CSGIdentity;

class SystemInformationBlockType1CellAccessRelatedInfo : public Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	SystemInformationBlockType1CellAccessRelatedInfo(): Sequence(&theInfo) {}
	SystemInformationBlockType1CellAccessRelatedInfo(const PLMNIdentityList& plmnIdentityList, const TrackingAreaCode& trackingAreaCode, const CellIdentity& cellIdentity, const SystemInformationBlockType1CellAccessRelatedInfocellBarred& systemInformationBlockType1CellAccessRelatedInfocellBarred, const SystemInformationBlockType1CellAccessRelatedInfointraFreqReselection& systemInformationBlockType1CellAccessRelatedInfointraFreqReselection, const SystemInformationBlockType1CellAccessRelatedInfoCsgIndication& systemInformationBlockType1CellAccessRelatedInfoCsgIndication);

	void setPlmnIdentityList(const PLMNIdentityList& plmnIdentityList) { *static_cast<PLMNIdentityList*>(items[0]) = plmnIdentityList; }
	void setTrackingAreaCode(const TrackingAreaCode& trackingAreaCode) { *static_cast<TrackingAreaCode*>(items[1]) = trackingAreaCode; }
	void setCellIdentity(const CellIdentity& cellIdentity) { *static_cast<CellIdentity*>(items[2]) = cellIdentity; }
	void setSystemInformationBlockType1CellAccessRelatedInfocellBarred(const SystemInformationBlockType1CellAccessRelatedInfocellBarred& systemInformationBlockType1CellAccessRelatedInfocellBarred) { *static_cast<SystemInformationBlockType1CellAccessRelatedInfocellBarred*>(items[3]) = systemInformationBlockType1CellAccessRelatedInfocellBarred; }
	void setSystemInformationBlockType1CellAccessRelatedInfointraFreqReselection(const SystemInformationBlockType1CellAccessRelatedInfointraFreqReselection& systemInformationBlockType1CellAccessRelatedInfointraFreqReselection) { *static_cast<SystemInformationBlockType1CellAccessRelatedInfointraFreqReselection*>(items[4]) = systemInformationBlockType1CellAccessRelatedInfointraFreqReselection; }
	void setSystemInformationBlockType1CellAccessRelatedInfoCsgIndication(const SystemInformationBlockType1CellAccessRelatedInfoCsgIndication& systemInformationBlockType1CellAccessRelatedInfoCsgIndication) { *static_cast<SystemInformationBlockType1CellAccessRelatedInfoCsgIndication*>(items[5]) = systemInformationBlockType1CellAccessRelatedInfoCsgIndication; }
	void setCsgIdentity(const CSGIdentity& csgIdentity) { *static_cast<CSGIdentity*>(items[6]) = csgIdentity; }

	PLMNIdentityList& getPlmnIdentityList() { return *static_cast<PLMNIdentityList*>(items[0]); }
	TrackingAreaCode& getTrackingAreaCode() { return *static_cast<TrackingAreaCode*>(items[1]); }
	CellIdentity& getCellIdentity() { return *static_cast<CellIdentity*>(items[2]); }
	SystemInformationBlockType1CellAccessRelatedInfocellBarred& getSystemInformationBlockType1CellAccessRelatedInfocellBarred() { return *static_cast<SystemInformationBlockType1CellAccessRelatedInfocellBarred*>(items[3]); }
	SystemInformationBlockType1CellAccessRelatedInfointraFreqReselection& getSystemInformationBlockType1CellAccessRelatedInfointraFreqReselection() { return *static_cast<SystemInformationBlockType1CellAccessRelatedInfointraFreqReselection*>(items[4]); }
	SystemInformationBlockType1CellAccessRelatedInfoCsgIndication& getSystemInformationBlockType1CellAccessRelatedInfoCsgIndication() { return *static_cast<SystemInformationBlockType1CellAccessRelatedInfoCsgIndication*>(items[5]); }
	CSGIdentity& getCsgIdentity() { return *static_cast<CSGIdentity*>(items[6]); }
};

typedef Integer<CONSTRAINED, -70, -22> QRxLevMin;

typedef Integer<CONSTRAINED, 1, 8> SystemInformationBlockType1CellSelectionInfoQRxLevMinOffset;

class SystemInformationBlockType1CellSelectionInfo : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SystemInformationBlockType1CellSelectionInfo(): Sequence(&theInfo) {}
	SystemInformationBlockType1CellSelectionInfo(const QRxLevMin& qRxLevMin);

	void setQRxLevMin(const QRxLevMin& qRxLevMin) { *static_cast<QRxLevMin*>(items[0]) = qRxLevMin; }
	void setSystemInformationBlockType1CellSelectionInfoQRxLevMinOffset(const SystemInformationBlockType1CellSelectionInfoQRxLevMinOffset& systemInformationBlockType1CellSelectionInfoQRxLevMinOffset) { *static_cast<SystemInformationBlockType1CellSelectionInfoQRxLevMinOffset*>(items[1]) = systemInformationBlockType1CellSelectionInfoQRxLevMinOffset; }

	QRxLevMin& getQRxLevMin() { return *static_cast<QRxLevMin*>(items[0]); }
	SystemInformationBlockType1CellSelectionInfoQRxLevMinOffset& getSystemInformationBlockType1CellSelectionInfoQRxLevMinOffset() { return *static_cast<SystemInformationBlockType1CellSelectionInfoQRxLevMinOffset*>(items[1]); }
};

typedef Integer<CONSTRAINED, -30, 33> PMax;

typedef Integer<CONSTRAINED, 1, 64> SystemInformationBlockType1FreqBandIndicator;

enum SchedulingInfosi_PeriodicityValues {
	rf8_SchedulingInfosi_Periodicity = 0,
	rf16_SchedulingInfosi_Periodicity = 1,
	rf32_SchedulingInfosi_Periodicity = 2,
	rf64_SchedulingInfosi_Periodicity = 3,
	rf128_SchedulingInfosi_Periodicity = 4,
	rf256_SchedulingInfosi_Periodicity = 5,
	rf512_SchedulingInfosi_Periodicity = 6,
};
typedef Enumerated<CONSTRAINED, 6> SchedulingInfosi_Periodicity;

enum SIBTypeValues {
	sibType3_SIBType = 0,
	sibType4_SIBType = 1,
	sibType5_SIBType = 2,
	sibType6_SIBType = 3,
	sibType7_SIBType = 4,
	sibType8_SIBType = 5,
	sibType9_SIBType = 6,
	sibType10_SIBType = 7,
	sibType11_SIBType = 8,
	sibType12_v920_SIBType = 9,
	sibType13_v920_SIBType = 10,
	spare5_SIBType = 11,
	spare4_SIBType = 12,
	spare3_SIBType = 13,
	spare2_SIBType = 14,
	spare1_SIBType = 15,
};
typedef Enumerated<EXTCONSTRAINED, 15> SIBType;

typedef SequenceOf<SIBType, CONSTRAINED, 0, maxSIB_1> SIBMappingInfo;

class SchedulingInfo : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SchedulingInfo(): Sequence(&theInfo) {}
	SchedulingInfo(const SchedulingInfosi_Periodicity& schedulingInfosi_Periodicity, const SIBMappingInfo& sibMappingInfo);

	void setSchedulingInfosi_Periodicity(const SchedulingInfosi_Periodicity& schedulingInfosi_Periodicity) { *static_cast<SchedulingInfosi_Periodicity*>(items[0]) = schedulingInfosi_Periodicity; }
	void setSibMappingInfo(const SIBMappingInfo& sibMappingInfo) { *static_cast<SIBMappingInfo*>(items[1]) = sibMappingInfo; }

	SchedulingInfosi_Periodicity& getSchedulingInfosi_Periodicity() { return *static_cast<SchedulingInfosi_Periodicity*>(items[0]); }
	SIBMappingInfo& getSibMappingInfo() { return *static_cast<SIBMappingInfo*>(items[1]); }
};

typedef SequenceOf<SchedulingInfo, CONSTRAINED, 1, maxSI_Message> SchedulingInfoList;

enum TDDConfigsubframeAssignmentValues {
	sa0_TDDConfigsubframeAssignment = 0,
	sa1_TDDConfigsubframeAssignment = 1,
	sa2_TDDConfigsubframeAssignment = 2,
	sa3_TDDConfigsubframeAssignment = 3,
	sa4_TDDConfigsubframeAssignment = 4,
	sa5_TDDConfigsubframeAssignment = 5,
	sa6_TDDConfigsubframeAssignment = 6,
};
typedef Enumerated<CONSTRAINED, 6> TDDConfigsubframeAssignment;

enum TDDConfigspecialSubframePatternsValues {
	ssp0_TDDConfigspecialSubframePatterns = 0,
	ssp1_TDDConfigspecialSubframePatterns = 1,
	ssp2_TDDConfigspecialSubframePatterns = 2,
	ssp3_TDDConfigspecialSubframePatterns = 3,
	ssp4_TDDConfigspecialSubframePatterns = 4,
	ssp5_TDDConfigspecialSubframePatterns = 5,
	ssp6_TDDConfigspecialSubframePatterns = 6,
	ssp7_TDDConfigspecialSubframePatterns = 7,
	ssp8_TDDConfigspecialSubframePatterns = 8,
};
typedef Enumerated<CONSTRAINED, 8> TDDConfigspecialSubframePatterns;

class TDDConfig : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TDDConfig(): Sequence(&theInfo) {}
	TDDConfig(const TDDConfigsubframeAssignment& tDDConfigsubframeAssignment, const TDDConfigspecialSubframePatterns& tDDConfigspecialSubframePatterns);

	void setTDDConfigsubframeAssignment(const TDDConfigsubframeAssignment& tDDConfigsubframeAssignment) { *static_cast<TDDConfigsubframeAssignment*>(items[0]) = tDDConfigsubframeAssignment; }
	void setTDDConfigspecialSubframePatterns(const TDDConfigspecialSubframePatterns& tDDConfigspecialSubframePatterns) { *static_cast<TDDConfigspecialSubframePatterns*>(items[1]) = tDDConfigspecialSubframePatterns; }

	TDDConfigsubframeAssignment& getTDDConfigsubframeAssignment() { return *static_cast<TDDConfigsubframeAssignment*>(items[0]); }
	TDDConfigspecialSubframePatterns& getTDDConfigspecialSubframePatterns() { return *static_cast<TDDConfigspecialSubframePatterns*>(items[1]); }
};

enum SystemInformationBlockType1si_WindowLengthValues {
	ms1_SystemInformationBlockType1si_WindowLength = 0,
	ms2_SystemInformationBlockType1si_WindowLength = 1,
	ms5_SystemInformationBlockType1si_WindowLength = 2,
	ms10_SystemInformationBlockType1si_WindowLength = 3,
	ms15_SystemInformationBlockType1si_WindowLength = 4,
	ms20_SystemInformationBlockType1si_WindowLength = 5,
	ms40_SystemInformationBlockType1si_WindowLength = 6,
};
typedef Enumerated<CONSTRAINED, 6> SystemInformationBlockType1si_WindowLength;

typedef Integer<CONSTRAINED, 0, 31> SystemInformationBlockType1SystemInfoValueTag;

typedef OctetStringBase SystemInformationBlockType1v890IEsLateNonCriticalExtension;

enum SystemInformationBlockType1v920IEsims_EmergencySupport_r9Values {
	true_SystemInformationBlockType1v920IEsims_EmergencySupport_r9 = 0,
};
typedef Enumerated<CONSTRAINED, 0> SystemInformationBlockType1v920IEsims_EmergencySupport_r9;

typedef Integer<CONSTRAINED, -34, -3> QQualMinr9;

typedef Integer<CONSTRAINED, 1, 8> CellSelectionInfov920QQualMinOffsetr9;

class CellSelectionInfov920 : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellSelectionInfov920(): Sequence(&theInfo) {}
	CellSelectionInfov920(const QQualMinr9& qQualMinr9);

	void setQQualMinr9(const QQualMinr9& qQualMinr9) { *static_cast<QQualMinr9*>(items[0]) = qQualMinr9; }
	void setCellSelectionInfov920QQualMinOffsetr9(const CellSelectionInfov920QQualMinOffsetr9& cellSelectionInfov920QQualMinOffsetr9) { *static_cast<CellSelectionInfov920QQualMinOffsetr9*>(items[1]) = cellSelectionInfov920QQualMinOffsetr9; }

	QQualMinr9& getQQualMinr9() { return *static_cast<QQualMinr9*>(items[0]); }
	CellSelectionInfov920QQualMinOffsetr9& getCellSelectionInfov920QQualMinOffsetr9() { return *static_cast<CellSelectionInfov920QQualMinOffsetr9*>(items[1]); }
};

class SystemInformationBlockType1v920IEsNonCriticalExtension : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	SystemInformationBlockType1v920IEsNonCriticalExtension(): Sequence(&theInfo) {}


};

class SystemInformationBlockType1v920IEs : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	SystemInformationBlockType1v920IEs(): Sequence(&theInfo) {}

	void setSystemInformationBlockType1v920IEsims_EmergencySupport_r9(const SystemInformationBlockType1v920IEsims_EmergencySupport_r9& systemInformationBlockType1v920IEsims_EmergencySupport_r9) { *static_cast<SystemInformationBlockType1v920IEsims_EmergencySupport_r9*>(items[0]) = systemInformationBlockType1v920IEsims_EmergencySupport_r9; }
	void setCellSelectionInfov920(const CellSelectionInfov920& cellSelectionInfov920) { *static_cast<CellSelectionInfov920*>(items[1]) = cellSelectionInfov920; }
	void setSystemInformationBlockType1v920IEsNonCriticalExtension(const SystemInformationBlockType1v920IEsNonCriticalExtension& systemInformationBlockType1v920IEsNonCriticalExtension) { *static_cast<SystemInformationBlockType1v920IEsNonCriticalExtension*>(items[2]) = systemInformationBlockType1v920IEsNonCriticalExtension; }

	SystemInformationBlockType1v920IEsims_EmergencySupport_r9& getSystemInformationBlockType1v920IEsims_EmergencySupport_r9() { return *static_cast<SystemInformationBlockType1v920IEsims_EmergencySupport_r9*>(items[0]); }
	CellSelectionInfov920& getCellSelectionInfov920() { return *static_cast<CellSelectionInfov920*>(items[1]); }
	SystemInformationBlockType1v920IEsNonCriticalExtension& getSystemInformationBlockType1v920IEsNonCriticalExtension() { return *static_cast<SystemInformationBlockType1v920IEsNonCriticalExtension*>(items[2]); }
};

class SystemInformationBlockType1v890IEs : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SystemInformationBlockType1v890IEs(): Sequence(&theInfo) {}

	void setSystemInformationBlockType1v890IEsLateNonCriticalExtension(const SystemInformationBlockType1v890IEsLateNonCriticalExtension& systemInformationBlockType1v890IEsLateNonCriticalExtension) { *static_cast<SystemInformationBlockType1v890IEsLateNonCriticalExtension*>(items[0]) = systemInformationBlockType1v890IEsLateNonCriticalExtension; }
	void setNonCriticalExtension(const SystemInformationBlockType1v920IEs& nonCriticalExtension) { *static_cast<SystemInformationBlockType1v920IEs*>(items[1]) = nonCriticalExtension; }

	SystemInformationBlockType1v890IEsLateNonCriticalExtension& getSystemInformationBlockType1v890IEsLateNonCriticalExtension() { return *static_cast<SystemInformationBlockType1v890IEsLateNonCriticalExtension*>(items[0]); }
	SystemInformationBlockType1v920IEs& getNonCriticalExtension() { return *static_cast<SystemInformationBlockType1v920IEs*>(items[1]); }
};

class SystemInformationBlockType1 : public Sequence {
private:
	static const void *itemsInfo[9];
	static bool itemsPres[9];
public:
	static const Info theInfo;
	SystemInformationBlockType1(): Sequence(&theInfo) {}
	SystemInformationBlockType1(const SystemInformationBlockType1CellAccessRelatedInfo& systemInformationBlockType1CellAccessRelatedInfo, const SystemInformationBlockType1CellSelectionInfo& systemInformationBlockType1CellSelectionInfo, const SystemInformationBlockType1FreqBandIndicator& systemInformationBlockType1FreqBandIndicator, const SchedulingInfoList& schedulingInfoList, const SystemInformationBlockType1si_WindowLength& systemInformationBlockType1si_WindowLength, const SystemInformationBlockType1SystemInfoValueTag& systemInformationBlockType1SystemInfoValueTag);

	void setSystemInformationBlockType1CellAccessRelatedInfo(const SystemInformationBlockType1CellAccessRelatedInfo& systemInformationBlockType1CellAccessRelatedInfo) { *static_cast<SystemInformationBlockType1CellAccessRelatedInfo*>(items[0]) = systemInformationBlockType1CellAccessRelatedInfo; }
	void setSystemInformationBlockType1CellSelectionInfo(const SystemInformationBlockType1CellSelectionInfo& systemInformationBlockType1CellSelectionInfo) { *static_cast<SystemInformationBlockType1CellSelectionInfo*>(items[1]) = systemInformationBlockType1CellSelectionInfo; }
	void setPMax(const PMax& pMax) { *static_cast<PMax*>(items[2]) = pMax; }
	void setSystemInformationBlockType1FreqBandIndicator(const SystemInformationBlockType1FreqBandIndicator& systemInformationBlockType1FreqBandIndicator) { *static_cast<SystemInformationBlockType1FreqBandIndicator*>(items[3]) = systemInformationBlockType1FreqBandIndicator; }
	void setSchedulingInfoList(const SchedulingInfoList& schedulingInfoList) { *static_cast<SchedulingInfoList*>(items[4]) = schedulingInfoList; }
	void setTddConfig(const TDDConfig& tddConfig) { *static_cast<TDDConfig*>(items[5]) = tddConfig; }
	void setSystemInformationBlockType1si_WindowLength(const SystemInformationBlockType1si_WindowLength& systemInformationBlockType1si_WindowLength) { *static_cast<SystemInformationBlockType1si_WindowLength*>(items[6]) = systemInformationBlockType1si_WindowLength; }
	void setSystemInformationBlockType1SystemInfoValueTag(const SystemInformationBlockType1SystemInfoValueTag& systemInformationBlockType1SystemInfoValueTag) { *static_cast<SystemInformationBlockType1SystemInfoValueTag*>(items[7]) = systemInformationBlockType1SystemInfoValueTag; }
	void setNonCriticalExtension(const SystemInformationBlockType1v890IEs& nonCriticalExtension) { *static_cast<SystemInformationBlockType1v890IEs*>(items[8]) = nonCriticalExtension; }

	SystemInformationBlockType1CellAccessRelatedInfo& getSystemInformationBlockType1CellAccessRelatedInfo() { return *static_cast<SystemInformationBlockType1CellAccessRelatedInfo*>(items[0]); }
	SystemInformationBlockType1CellSelectionInfo& getSystemInformationBlockType1CellSelectionInfo() { return *static_cast<SystemInformationBlockType1CellSelectionInfo*>(items[1]); }
	PMax& getPMax() { return *static_cast<PMax*>(items[2]); }
	SystemInformationBlockType1FreqBandIndicator& getSystemInformationBlockType1FreqBandIndicator() { return *static_cast<SystemInformationBlockType1FreqBandIndicator*>(items[3]); }
	SchedulingInfoList& getSchedulingInfoList() { return *static_cast<SchedulingInfoList*>(items[4]); }
	TDDConfig& getTddConfig() { return *static_cast<TDDConfig*>(items[5]); }
	SystemInformationBlockType1si_WindowLength& getSystemInformationBlockType1si_WindowLength() { return *static_cast<SystemInformationBlockType1si_WindowLength*>(items[6]); }
	SystemInformationBlockType1SystemInfoValueTag& getSystemInformationBlockType1SystemInfoValueTag() { return *static_cast<SystemInformationBlockType1SystemInfoValueTag*>(items[7]); }
	SystemInformationBlockType1v890IEs& getNonCriticalExtension() { return *static_cast<SystemInformationBlockType1v890IEs*>(items[8]); }
};

class BCCHDLSCHMessageTypeC1 : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum BCCHDLSCHMessageTypeC1Choices {
		systemInformation = 0,
		systemInformationBlockType1 = 1,
	};
	static const Info theInfo;
	BCCHDLSCHMessageTypeC1(): Choice(&theInfo) {}
};

class BCCHDLSCHMessageTypeMessageClassExtension : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	BCCHDLSCHMessageTypeMessageClassExtension(): Sequence(&theInfo) {}


};

class BCCHDLSCHMessageType : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum BCCHDLSCHMessageTypeChoices {
		bCCHDLSCHMessageTypeC1 = 0,
		bCCHDLSCHMessageTypeMessageClassExtension = 1,
	};
	static const Info theInfo;
	BCCHDLSCHMessageType(): Choice(&theInfo) {}
};

class BCCHDLSCHMessage : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	BCCHDLSCHMessage(): Sequence(&theInfo) {}
	BCCHDLSCHMessage(const BCCHDLSCHMessageType& message);

	void setMessage(const BCCHDLSCHMessageType& message) { *static_cast<BCCHDLSCHMessageType*>(items[0]) = message; }

	BCCHDLSCHMessageType& getMessage() { return *static_cast<BCCHDLSCHMessageType*>(items[0]); }
};

enum MBSFNSubframeConfigradioframeAllocationPeriodValues {
	n1_MBSFNSubframeConfigradioframeAllocationPeriod = 0,
	n2_MBSFNSubframeConfigradioframeAllocationPeriod = 1,
	n4_MBSFNSubframeConfigradioframeAllocationPeriod = 2,
	n8_MBSFNSubframeConfigradioframeAllocationPeriod = 3,
	n16_MBSFNSubframeConfigradioframeAllocationPeriod = 4,
	n32_MBSFNSubframeConfigradioframeAllocationPeriod = 5,
};
typedef Enumerated<CONSTRAINED, 5> MBSFNSubframeConfigradioframeAllocationPeriod;

typedef Integer<CONSTRAINED, 0, 7> MBSFNSubframeConfigRadioframeAllocationOffset;

typedef BitString<CONSTRAINED, 6, 6> MBSFNSubframeConfigSubframeAllocationOneFrame;

typedef BitString<CONSTRAINED, 24, 24> MBSFNSubframeConfigSubframeAllocationFourFrames;

class MBSFNSubframeConfigSubframeAllocation : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum MBSFNSubframeConfigSubframeAllocationChoices {
		mBSFNSubframeConfigSubframeAllocationOneFrame = 0,
		mBSFNSubframeConfigSubframeAllocationFourFrames = 1,
	};
	static const Info theInfo;
	MBSFNSubframeConfigSubframeAllocation(): Choice(&theInfo) {}
};

class MBSFNSubframeConfig : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	MBSFNSubframeConfig(): Sequence(&theInfo) {}
	MBSFNSubframeConfig(const MBSFNSubframeConfigradioframeAllocationPeriod& mBSFNSubframeConfigradioframeAllocationPeriod, const MBSFNSubframeConfigRadioframeAllocationOffset& mBSFNSubframeConfigRadioframeAllocationOffset, const MBSFNSubframeConfigSubframeAllocation& mBSFNSubframeConfigSubframeAllocation);

	void setMBSFNSubframeConfigradioframeAllocationPeriod(const MBSFNSubframeConfigradioframeAllocationPeriod& mBSFNSubframeConfigradioframeAllocationPeriod) { *static_cast<MBSFNSubframeConfigradioframeAllocationPeriod*>(items[0]) = mBSFNSubframeConfigradioframeAllocationPeriod; }
	void setMBSFNSubframeConfigRadioframeAllocationOffset(const MBSFNSubframeConfigRadioframeAllocationOffset& mBSFNSubframeConfigRadioframeAllocationOffset) { *static_cast<MBSFNSubframeConfigRadioframeAllocationOffset*>(items[1]) = mBSFNSubframeConfigRadioframeAllocationOffset; }
	void setMBSFNSubframeConfigSubframeAllocation(const MBSFNSubframeConfigSubframeAllocation& mBSFNSubframeConfigSubframeAllocation) { *static_cast<MBSFNSubframeConfigSubframeAllocation*>(items[2]) = mBSFNSubframeConfigSubframeAllocation; }

	MBSFNSubframeConfigradioframeAllocationPeriod& getMBSFNSubframeConfigradioframeAllocationPeriod() { return *static_cast<MBSFNSubframeConfigradioframeAllocationPeriod*>(items[0]); }
	MBSFNSubframeConfigRadioframeAllocationOffset& getMBSFNSubframeConfigRadioframeAllocationOffset() { return *static_cast<MBSFNSubframeConfigRadioframeAllocationOffset*>(items[1]); }
	MBSFNSubframeConfigSubframeAllocation& getMBSFNSubframeConfigSubframeAllocation() { return *static_cast<MBSFNSubframeConfigSubframeAllocation*>(items[2]); }
};

typedef SequenceOf<MBSFNSubframeConfig, CONSTRAINED, 1, maxMBSFN_Allocations> CommonSFAllocPatternListr9;

enum MBSFNAreaConfigurationr9commonSF_AllocPeriod_r9Values {
	rf4_MBSFNAreaConfigurationr9commonSF_AllocPeriod_r9 = 0,
	rf8_MBSFNAreaConfigurationr9commonSF_AllocPeriod_r9 = 1,
	rf16_MBSFNAreaConfigurationr9commonSF_AllocPeriod_r9 = 2,
	rf32_MBSFNAreaConfigurationr9commonSF_AllocPeriod_r9 = 3,
	rf64_MBSFNAreaConfigurationr9commonSF_AllocPeriod_r9 = 4,
	rf128_MBSFNAreaConfigurationr9commonSF_AllocPeriod_r9 = 5,
	rf256_MBSFNAreaConfigurationr9commonSF_AllocPeriod_r9 = 6,
};
typedef Enumerated<CONSTRAINED, 6> MBSFNAreaConfigurationr9commonSF_AllocPeriod_r9;

typedef Integer<CONSTRAINED, 0, 1535> PMCHConfigr9SfAllocEndr9;

typedef Integer<CONSTRAINED, 0, 28> PMCHConfigr9DataMCSr9;

enum PMCHConfigr9mch_SchedulingPeriod_r9Values {
	rf8_PMCHConfigr9mch_SchedulingPeriod_r9 = 0,
	rf16_PMCHConfigr9mch_SchedulingPeriod_r9 = 1,
	rf32_PMCHConfigr9mch_SchedulingPeriod_r9 = 2,
	rf64_PMCHConfigr9mch_SchedulingPeriod_r9 = 3,
	rf128_PMCHConfigr9mch_SchedulingPeriod_r9 = 4,
	rf256_PMCHConfigr9mch_SchedulingPeriod_r9 = 5,
	rf512_PMCHConfigr9mch_SchedulingPeriod_r9 = 6,
	rf1024_PMCHConfigr9mch_SchedulingPeriod_r9 = 7,
};
typedef Enumerated<CONSTRAINED, 7> PMCHConfigr9mch_SchedulingPeriod_r9;

class PMCHConfigr9 : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PMCHConfigr9(): Sequence(&theInfo) {}
	PMCHConfigr9(const PMCHConfigr9SfAllocEndr9& pMCHConfigr9SfAllocEndr9, const PMCHConfigr9DataMCSr9& pMCHConfigr9DataMCSr9, const PMCHConfigr9mch_SchedulingPeriod_r9& pMCHConfigr9mch_SchedulingPeriod_r9);

	void setPMCHConfigr9SfAllocEndr9(const PMCHConfigr9SfAllocEndr9& pMCHConfigr9SfAllocEndr9) { *static_cast<PMCHConfigr9SfAllocEndr9*>(items[0]) = pMCHConfigr9SfAllocEndr9; }
	void setPMCHConfigr9DataMCSr9(const PMCHConfigr9DataMCSr9& pMCHConfigr9DataMCSr9) { *static_cast<PMCHConfigr9DataMCSr9*>(items[1]) = pMCHConfigr9DataMCSr9; }
	void setPMCHConfigr9mch_SchedulingPeriod_r9(const PMCHConfigr9mch_SchedulingPeriod_r9& pMCHConfigr9mch_SchedulingPeriod_r9) { *static_cast<PMCHConfigr9mch_SchedulingPeriod_r9*>(items[2]) = pMCHConfigr9mch_SchedulingPeriod_r9; }

	PMCHConfigr9SfAllocEndr9& getPMCHConfigr9SfAllocEndr9() { return *static_cast<PMCHConfigr9SfAllocEndr9*>(items[0]); }
	PMCHConfigr9DataMCSr9& getPMCHConfigr9DataMCSr9() { return *static_cast<PMCHConfigr9DataMCSr9*>(items[1]); }
	PMCHConfigr9mch_SchedulingPeriod_r9& getPMCHConfigr9mch_SchedulingPeriod_r9() { return *static_cast<PMCHConfigr9mch_SchedulingPeriod_r9*>(items[2]); }
};

typedef Integer<CONSTRAINED, 1, 6> TMGIr9PlmnIdr9PlmnIndexr9;

class TMGIr9PlmnIdr9 : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum TMGIr9PlmnIdr9Choices {
		tMGIr9PlmnIdr9PlmnIndexr9 = 0,
		explicitValuer9 = 1,
	};
	static const Info theInfo;
	TMGIr9PlmnIdr9(): Choice(&theInfo) {}
};

typedef OctetString<CONSTRAINED, 3, 3> TMGIr9ServiceIdr9;

class TMGIr9 : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TMGIr9(): Sequence(&theInfo) {}
	TMGIr9(const TMGIr9PlmnIdr9& tMGIr9PlmnIdr9, const TMGIr9ServiceIdr9& tMGIr9ServiceIdr9);

	void setTMGIr9PlmnIdr9(const TMGIr9PlmnIdr9& tMGIr9PlmnIdr9) { *static_cast<TMGIr9PlmnIdr9*>(items[0]) = tMGIr9PlmnIdr9; }
	void setTMGIr9ServiceIdr9(const TMGIr9ServiceIdr9& tMGIr9ServiceIdr9) { *static_cast<TMGIr9ServiceIdr9*>(items[1]) = tMGIr9ServiceIdr9; }

	TMGIr9PlmnIdr9& getTMGIr9PlmnIdr9() { return *static_cast<TMGIr9PlmnIdr9*>(items[0]); }
	TMGIr9ServiceIdr9& getTMGIr9ServiceIdr9() { return *static_cast<TMGIr9ServiceIdr9*>(items[1]); }
};

typedef OctetString<CONSTRAINED, 1, 1> MBMSSessionInfor9SessionIdr9;

typedef Integer<CONSTRAINED, 0, maxSessionPerPMCH_1> MBMSSessionInfor9LogicalChannelIdentityr9;

class MBMSSessionInfor9 : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	MBMSSessionInfor9(): Sequence(&theInfo) {}
	MBMSSessionInfor9(const TMGIr9& tmgir9, const MBMSSessionInfor9LogicalChannelIdentityr9& mBMSSessionInfor9LogicalChannelIdentityr9);

	void setTmgir9(const TMGIr9& tmgir9) { *static_cast<TMGIr9*>(items[0]) = tmgir9; }
	void setMBMSSessionInfor9SessionIdr9(const MBMSSessionInfor9SessionIdr9& mBMSSessionInfor9SessionIdr9) { *static_cast<MBMSSessionInfor9SessionIdr9*>(items[1]) = mBMSSessionInfor9SessionIdr9; }
	void setMBMSSessionInfor9LogicalChannelIdentityr9(const MBMSSessionInfor9LogicalChannelIdentityr9& mBMSSessionInfor9LogicalChannelIdentityr9) { *static_cast<MBMSSessionInfor9LogicalChannelIdentityr9*>(items[2]) = mBMSSessionInfor9LogicalChannelIdentityr9; }

	TMGIr9& getTmgir9() { return *static_cast<TMGIr9*>(items[0]); }
	MBMSSessionInfor9SessionIdr9& getMBMSSessionInfor9SessionIdr9() { return *static_cast<MBMSSessionInfor9SessionIdr9*>(items[1]); }
	MBMSSessionInfor9LogicalChannelIdentityr9& getMBMSSessionInfor9LogicalChannelIdentityr9() { return *static_cast<MBMSSessionInfor9LogicalChannelIdentityr9*>(items[2]); }
};

typedef SequenceOf<MBMSSessionInfor9, CONSTRAINED, 0, maxSessionPerPMCH> MBMSSessionInfoListr9;

class PMCHInfor9 : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PMCHInfor9(): Sequence(&theInfo) {}
	PMCHInfor9(const PMCHConfigr9& pmchConfigr9, const MBMSSessionInfoListr9& mbmsSessionInfoListr9);

	void setPmchConfigr9(const PMCHConfigr9& pmchConfigr9) { *static_cast<PMCHConfigr9*>(items[0]) = pmchConfigr9; }
	void setMbmsSessionInfoListr9(const MBMSSessionInfoListr9& mbmsSessionInfoListr9) { *static_cast<MBMSSessionInfoListr9*>(items[1]) = mbmsSessionInfoListr9; }

	PMCHConfigr9& getPmchConfigr9() { return *static_cast<PMCHConfigr9*>(items[0]); }
	MBMSSessionInfoListr9& getMbmsSessionInfoListr9() { return *static_cast<MBMSSessionInfoListr9*>(items[1]); }
};

typedef SequenceOf<PMCHInfor9, CONSTRAINED, 0, maxPMCH_PerMBSFN> PMCHInfoListr9;

typedef OctetStringBase MBSFNAreaConfigurationv930IEsLateNonCriticalExtension;

class MBSFNAreaConfigurationv930IEsNonCriticalExtension : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	MBSFNAreaConfigurationv930IEsNonCriticalExtension(): Sequence(&theInfo) {}


};

class MBSFNAreaConfigurationv930IEs : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MBSFNAreaConfigurationv930IEs(): Sequence(&theInfo) {}

	void setMBSFNAreaConfigurationv930IEsLateNonCriticalExtension(const MBSFNAreaConfigurationv930IEsLateNonCriticalExtension& mBSFNAreaConfigurationv930IEsLateNonCriticalExtension) { *static_cast<MBSFNAreaConfigurationv930IEsLateNonCriticalExtension*>(items[0]) = mBSFNAreaConfigurationv930IEsLateNonCriticalExtension; }
	void setMBSFNAreaConfigurationv930IEsNonCriticalExtension(const MBSFNAreaConfigurationv930IEsNonCriticalExtension& mBSFNAreaConfigurationv930IEsNonCriticalExtension) { *static_cast<MBSFNAreaConfigurationv930IEsNonCriticalExtension*>(items[1]) = mBSFNAreaConfigurationv930IEsNonCriticalExtension; }

	MBSFNAreaConfigurationv930IEsLateNonCriticalExtension& getMBSFNAreaConfigurationv930IEsLateNonCriticalExtension() { return *static_cast<MBSFNAreaConfigurationv930IEsLateNonCriticalExtension*>(items[0]); }
	MBSFNAreaConfigurationv930IEsNonCriticalExtension& getMBSFNAreaConfigurationv930IEsNonCriticalExtension() { return *static_cast<MBSFNAreaConfigurationv930IEsNonCriticalExtension*>(items[1]); }
};

class MBSFNAreaConfigurationr9 : public Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	MBSFNAreaConfigurationr9(): Sequence(&theInfo) {}
	MBSFNAreaConfigurationr9(const CommonSFAllocPatternListr9& commonSFAllocr9, const MBSFNAreaConfigurationr9commonSF_AllocPeriod_r9& mBSFNAreaConfigurationr9commonSF_AllocPeriod_r9, const PMCHInfoListr9& pmchInfoListr9);

	void setCommonSFAllocr9(const CommonSFAllocPatternListr9& commonSFAllocr9) { *static_cast<CommonSFAllocPatternListr9*>(items[0]) = commonSFAllocr9; }
	void setMBSFNAreaConfigurationr9commonSF_AllocPeriod_r9(const MBSFNAreaConfigurationr9commonSF_AllocPeriod_r9& mBSFNAreaConfigurationr9commonSF_AllocPeriod_r9) { *static_cast<MBSFNAreaConfigurationr9commonSF_AllocPeriod_r9*>(items[1]) = mBSFNAreaConfigurationr9commonSF_AllocPeriod_r9; }
	void setPmchInfoListr9(const PMCHInfoListr9& pmchInfoListr9) { *static_cast<PMCHInfoListr9*>(items[2]) = pmchInfoListr9; }
	void setNonCriticalExtension(const MBSFNAreaConfigurationv930IEs& nonCriticalExtension) { *static_cast<MBSFNAreaConfigurationv930IEs*>(items[3]) = nonCriticalExtension; }

	CommonSFAllocPatternListr9& getCommonSFAllocr9() { return *static_cast<CommonSFAllocPatternListr9*>(items[0]); }
	MBSFNAreaConfigurationr9commonSF_AllocPeriod_r9& getMBSFNAreaConfigurationr9commonSF_AllocPeriod_r9() { return *static_cast<MBSFNAreaConfigurationr9commonSF_AllocPeriod_r9*>(items[1]); }
	PMCHInfoListr9& getPmchInfoListr9() { return *static_cast<PMCHInfoListr9*>(items[2]); }
	MBSFNAreaConfigurationv930IEs& getNonCriticalExtension() { return *static_cast<MBSFNAreaConfigurationv930IEs*>(items[3]); }
};

class MCCHMessageTypeC1 : public Choice {
private:
	static const void *choicesInfo[1];
public:
	enum MCCHMessageTypeC1Choices {
		mbsfnAreaConfigurationr9 = 0,
	};
	static const Info theInfo;
	MCCHMessageTypeC1(): Choice(&theInfo) {}
};

class CountingRequestInfor10 : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CountingRequestInfor10(): Sequence(&theInfo) {}
	CountingRequestInfor10(const TMGIr9& tmgir10);

	void setTmgir10(const TMGIr9& tmgir10) { *static_cast<TMGIr9*>(items[0]) = tmgir10; }

	TMGIr9& getTmgir10() { return *static_cast<TMGIr9*>(items[0]); }
};

typedef SequenceOf<CountingRequestInfor10, CONSTRAINED, 1, maxServiceCount> CountingRequestListr10;

typedef OctetStringBase MBMSCountingRequestr10LateNonCriticalExtension;

class MBMSCountingRequestr10NonCriticalExtension : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	MBMSCountingRequestr10NonCriticalExtension(): Sequence(&theInfo) {}


};

class MBMSCountingRequestr10 : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	MBMSCountingRequestr10(): Sequence(&theInfo) {}
	MBMSCountingRequestr10(const CountingRequestListr10& countingRequestListr10);

	void setCountingRequestListr10(const CountingRequestListr10& countingRequestListr10) { *static_cast<CountingRequestListr10*>(items[0]) = countingRequestListr10; }
	void setMBMSCountingRequestr10LateNonCriticalExtension(const MBMSCountingRequestr10LateNonCriticalExtension& mBMSCountingRequestr10LateNonCriticalExtension) { *static_cast<MBMSCountingRequestr10LateNonCriticalExtension*>(items[1]) = mBMSCountingRequestr10LateNonCriticalExtension; }
	void setMBMSCountingRequestr10NonCriticalExtension(const MBMSCountingRequestr10NonCriticalExtension& mBMSCountingRequestr10NonCriticalExtension) { *static_cast<MBMSCountingRequestr10NonCriticalExtension*>(items[2]) = mBMSCountingRequestr10NonCriticalExtension; }

	CountingRequestListr10& getCountingRequestListr10() { return *static_cast<CountingRequestListr10*>(items[0]); }
	MBMSCountingRequestr10LateNonCriticalExtension& getMBMSCountingRequestr10LateNonCriticalExtension() { return *static_cast<MBMSCountingRequestr10LateNonCriticalExtension*>(items[1]); }
	MBMSCountingRequestr10NonCriticalExtension& getMBMSCountingRequestr10NonCriticalExtension() { return *static_cast<MBMSCountingRequestr10NonCriticalExtension*>(items[2]); }
};

class MCCHMessageTypeLaterC2 : public Choice {
private:
	static const void *choicesInfo[1];
public:
	enum MCCHMessageTypeLaterC2Choices {
		mbmsCountingRequestr10 = 0,
	};
	static const Info theInfo;
	MCCHMessageTypeLaterC2(): Choice(&theInfo) {}
};

class MCCHMessageTypeLaterMessageClassExtension : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	MCCHMessageTypeLaterMessageClassExtension(): Sequence(&theInfo) {}


};

class MCCHMessageTypeLater : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum MCCHMessageTypeLaterChoices {
		mCCHMessageTypeLaterC2 = 0,
		mCCHMessageTypeLaterMessageClassExtension = 1,
	};
	static const Info theInfo;
	MCCHMessageTypeLater(): Choice(&theInfo) {}
};

class MCCHMessageType : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum MCCHMessageTypeChoices {
		mCCHMessageTypeC1 = 0,
		mCCHMessageTypeLater = 1,
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
	MCCHMessage(const MCCHMessageType& message);

	void setMessage(const MCCHMessageType& message) { *static_cast<MCCHMessageType*>(items[0]) = message; }

	MCCHMessageType& getMessage() { return *static_cast<MCCHMessageType*>(items[0]); }
};

typedef BitString<CONSTRAINED, 8, 8> MMEC;

typedef BitString<CONSTRAINED, 32, 32> STMSIMTMSI;

class STMSI : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	STMSI(): Sequence(&theInfo) {}
	STMSI(const MMEC& mmec, const STMSIMTMSI& sTMSIMTMSI);

	void setMmec(const MMEC& mmec) { *static_cast<MMEC*>(items[0]) = mmec; }
	void setSTMSIMTMSI(const STMSIMTMSI& sTMSIMTMSI) { *static_cast<STMSIMTMSI*>(items[1]) = sTMSIMTMSI; }

	MMEC& getMmec() { return *static_cast<MMEC*>(items[0]); }
	STMSIMTMSI& getSTMSIMTMSI() { return *static_cast<STMSIMTMSI*>(items[1]); }
};

typedef Integer<CONSTRAINED, 0, 9> IMSIDigit;

typedef SequenceOf<IMSIDigit, CONSTRAINED, 6, 21> IMSI;

class PagingUEIdentity : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum PagingUEIdentityChoices {
		sTMSI = 0,
		imsi = 1,
	};
	static const Info theInfo;
	PagingUEIdentity(): Choice(&theInfo) {}
};

enum PagingRecordcn_DomainValues {
	ps_PagingRecordcn_Domain = 0,
	cs_PagingRecordcn_Domain = 1,
};
typedef Enumerated<CONSTRAINED, 1> PagingRecordcn_Domain;

class PagingRecord : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PagingRecord(): Sequence(&theInfo) {}
	PagingRecord(const PagingUEIdentity& ueIdentity, const PagingRecordcn_Domain& pagingRecordcn_Domain);

	void setUeIdentity(const PagingUEIdentity& ueIdentity) { *static_cast<PagingUEIdentity*>(items[0]) = ueIdentity; }
	void setPagingRecordcn_Domain(const PagingRecordcn_Domain& pagingRecordcn_Domain) { *static_cast<PagingRecordcn_Domain*>(items[1]) = pagingRecordcn_Domain; }

	PagingUEIdentity& getUeIdentity() { return *static_cast<PagingUEIdentity*>(items[0]); }
	PagingRecordcn_Domain& getPagingRecordcn_Domain() { return *static_cast<PagingRecordcn_Domain*>(items[1]); }
};

typedef SequenceOf<PagingRecord, CONSTRAINED, 1, maxPageRec> PagingRecordList;

enum PagingsystemInfoModificationValues {
	true_PagingsystemInfoModification = 0,
};
typedef Enumerated<CONSTRAINED, 0> PagingsystemInfoModification;

enum Pagingetws_IndicationValues {
	true_Pagingetws_Indication = 0,
};
typedef Enumerated<CONSTRAINED, 0> Pagingetws_Indication;

typedef OctetStringBase Pagingv890IEsLateNonCriticalExtension;

enum Pagingv920IEscmas_Indication_r9Values {
	true_Pagingv920IEscmas_Indication_r9 = 0,
};
typedef Enumerated<CONSTRAINED, 0> Pagingv920IEscmas_Indication_r9;

class Pagingv920IEsNonCriticalExtension : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	Pagingv920IEsNonCriticalExtension(): Sequence(&theInfo) {}


};

class Pagingv920IEs : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Pagingv920IEs(): Sequence(&theInfo) {}

	void setPagingv920IEscmas_Indication_r9(const Pagingv920IEscmas_Indication_r9& pagingv920IEscmas_Indication_r9) { *static_cast<Pagingv920IEscmas_Indication_r9*>(items[0]) = pagingv920IEscmas_Indication_r9; }
	void setPagingv920IEsNonCriticalExtension(const Pagingv920IEsNonCriticalExtension& pagingv920IEsNonCriticalExtension) { *static_cast<Pagingv920IEsNonCriticalExtension*>(items[1]) = pagingv920IEsNonCriticalExtension; }

	Pagingv920IEscmas_Indication_r9& getPagingv920IEscmas_Indication_r9() { return *static_cast<Pagingv920IEscmas_Indication_r9*>(items[0]); }
	Pagingv920IEsNonCriticalExtension& getPagingv920IEsNonCriticalExtension() { return *static_cast<Pagingv920IEsNonCriticalExtension*>(items[1]); }
};

class Pagingv890IEs : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Pagingv890IEs(): Sequence(&theInfo) {}

	void setPagingv890IEsLateNonCriticalExtension(const Pagingv890IEsLateNonCriticalExtension& pagingv890IEsLateNonCriticalExtension) { *static_cast<Pagingv890IEsLateNonCriticalExtension*>(items[0]) = pagingv890IEsLateNonCriticalExtension; }
	void setNonCriticalExtension(const Pagingv920IEs& nonCriticalExtension) { *static_cast<Pagingv920IEs*>(items[1]) = nonCriticalExtension; }

	Pagingv890IEsLateNonCriticalExtension& getPagingv890IEsLateNonCriticalExtension() { return *static_cast<Pagingv890IEsLateNonCriticalExtension*>(items[0]); }
	Pagingv920IEs& getNonCriticalExtension() { return *static_cast<Pagingv920IEs*>(items[1]); }
};

class Paging : public Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	Paging(): Sequence(&theInfo) {}

	void setPagingRecordList(const PagingRecordList& pagingRecordList) { *static_cast<PagingRecordList*>(items[0]) = pagingRecordList; }
	void setPagingsystemInfoModification(const PagingsystemInfoModification& pagingsystemInfoModification) { *static_cast<PagingsystemInfoModification*>(items[1]) = pagingsystemInfoModification; }
	void setPagingetws_Indication(const Pagingetws_Indication& pagingetws_Indication) { *static_cast<Pagingetws_Indication*>(items[2]) = pagingetws_Indication; }
	void setNonCriticalExtension(const Pagingv890IEs& nonCriticalExtension) { *static_cast<Pagingv890IEs*>(items[3]) = nonCriticalExtension; }

	PagingRecordList& getPagingRecordList() { return *static_cast<PagingRecordList*>(items[0]); }
	PagingsystemInfoModification& getPagingsystemInfoModification() { return *static_cast<PagingsystemInfoModification*>(items[1]); }
	Pagingetws_Indication& getPagingetws_Indication() { return *static_cast<Pagingetws_Indication*>(items[2]); }
	Pagingv890IEs& getNonCriticalExtension() { return *static_cast<Pagingv890IEs*>(items[3]); }
};

class PCCHMessageTypeC1 : public Choice {
private:
	static const void *choicesInfo[1];
public:
	enum PCCHMessageTypeC1Choices {
		paging = 0,
	};
	static const Info theInfo;
	PCCHMessageTypeC1(): Choice(&theInfo) {}
};

class PCCHMessageTypeMessageClassExtension : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	PCCHMessageTypeMessageClassExtension(): Sequence(&theInfo) {}


};

class PCCHMessageType : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum PCCHMessageTypeChoices {
		pCCHMessageTypeC1 = 0,
		pCCHMessageTypeMessageClassExtension = 1,
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
	PCCHMessage(const PCCHMessageType& message);

	void setMessage(const PCCHMessageType& message) { *static_cast<PCCHMessageType*>(items[0]) = message; }

	PCCHMessageType& getMessage() { return *static_cast<PCCHMessageType*>(items[0]); }
};

typedef Integer<CONSTRAINED, 0, 3> RRCTransactionIdentifier;

typedef Integer<CONSTRAINED, 1, 2> SRBToAddModSrbIdentity;

enum TPollRetransmitValues {
	ms5_TPollRetransmit = 0,
	ms10_TPollRetransmit = 1,
	ms15_TPollRetransmit = 2,
	ms20_TPollRetransmit = 3,
	ms25_TPollRetransmit = 4,
	ms30_TPollRetransmit = 5,
	ms35_TPollRetransmit = 6,
	ms40_TPollRetransmit = 7,
	ms45_TPollRetransmit = 8,
	ms50_TPollRetransmit = 9,
	ms55_TPollRetransmit = 10,
	ms60_TPollRetransmit = 11,
	ms65_TPollRetransmit = 12,
	ms70_TPollRetransmit = 13,
	ms75_TPollRetransmit = 14,
	ms80_TPollRetransmit = 15,
	ms85_TPollRetransmit = 16,
	ms90_TPollRetransmit = 17,
	ms95_TPollRetransmit = 18,
	ms100_TPollRetransmit = 19,
	ms105_TPollRetransmit = 20,
	ms110_TPollRetransmit = 21,
	ms115_TPollRetransmit = 22,
	ms120_TPollRetransmit = 23,
	ms125_TPollRetransmit = 24,
	ms130_TPollRetransmit = 25,
	ms135_TPollRetransmit = 26,
	ms140_TPollRetransmit = 27,
	ms145_TPollRetransmit = 28,
	ms150_TPollRetransmit = 29,
	ms155_TPollRetransmit = 30,
	ms160_TPollRetransmit = 31,
	ms165_TPollRetransmit = 32,
	ms170_TPollRetransmit = 33,
	ms175_TPollRetransmit = 34,
	ms180_TPollRetransmit = 35,
	ms185_TPollRetransmit = 36,
	ms190_TPollRetransmit = 37,
	ms195_TPollRetransmit = 38,
	ms200_TPollRetransmit = 39,
	ms205_TPollRetransmit = 40,
	ms210_TPollRetransmit = 41,
	ms215_TPollRetransmit = 42,
	ms220_TPollRetransmit = 43,
	ms225_TPollRetransmit = 44,
	ms230_TPollRetransmit = 45,
	ms235_TPollRetransmit = 46,
	ms240_TPollRetransmit = 47,
	ms245_TPollRetransmit = 48,
	ms250_TPollRetransmit = 49,
	ms300_TPollRetransmit = 50,
	ms350_TPollRetransmit = 51,
	ms400_TPollRetransmit = 52,
	ms450_TPollRetransmit = 53,
	ms500_TPollRetransmit = 54,
	spare9_TPollRetransmit = 55,
	spare8_TPollRetransmit = 56,
	spare7_TPollRetransmit = 57,
	spare6_TPollRetransmit = 58,
	spare5_TPollRetransmit = 59,
	spare4_TPollRetransmit = 60,
	spare3_TPollRetransmit = 61,
	spare2_TPollRetransmit = 62,
	spare1_TPollRetransmit = 63,
};
typedef Enumerated<CONSTRAINED, 63> TPollRetransmit;

enum PollPDUValues {
	p4_PollPDU = 0,
	p8_PollPDU = 1,
	p16_PollPDU = 2,
	p32_PollPDU = 3,
	p64_PollPDU = 4,
	p128_PollPDU = 5,
	p256_PollPDU = 6,
	pInfinity_PollPDU = 7,
};
typedef Enumerated<CONSTRAINED, 7> PollPDU;

enum PollByteValues {
	kB25_PollByte = 0,
	kB50_PollByte = 1,
	kB75_PollByte = 2,
	kB100_PollByte = 3,
	kB125_PollByte = 4,
	kB250_PollByte = 5,
	kB375_PollByte = 6,
	kB500_PollByte = 7,
	kB750_PollByte = 8,
	kB1000_PollByte = 9,
	kB1250_PollByte = 10,
	kB1500_PollByte = 11,
	kB2000_PollByte = 12,
	kB3000_PollByte = 13,
	kBinfinity_PollByte = 14,
	spare1_PollByte = 15,
};
typedef Enumerated<CONSTRAINED, 15> PollByte;

enum ULAMRLCmaxRetxThresholdValues {
	t1_ULAMRLCmaxRetxThreshold = 0,
	t2_ULAMRLCmaxRetxThreshold = 1,
	t3_ULAMRLCmaxRetxThreshold = 2,
	t4_ULAMRLCmaxRetxThreshold = 3,
	t6_ULAMRLCmaxRetxThreshold = 4,
	t8_ULAMRLCmaxRetxThreshold = 5,
	t16_ULAMRLCmaxRetxThreshold = 6,
	t32_ULAMRLCmaxRetxThreshold = 7,
};
typedef Enumerated<CONSTRAINED, 7> ULAMRLCmaxRetxThreshold;

class ULAMRLC : public Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	ULAMRLC(): Sequence(&theInfo) {}
	ULAMRLC(const TPollRetransmit& tPollRetransmit, const PollPDU& pollPDU, const PollByte& pollByte, const ULAMRLCmaxRetxThreshold& uLAMRLCmaxRetxThreshold);

	void setTPollRetransmit(const TPollRetransmit& tPollRetransmit) { *static_cast<TPollRetransmit*>(items[0]) = tPollRetransmit; }
	void setPollPDU(const PollPDU& pollPDU) { *static_cast<PollPDU*>(items[1]) = pollPDU; }
	void setPollByte(const PollByte& pollByte) { *static_cast<PollByte*>(items[2]) = pollByte; }
	void setULAMRLCmaxRetxThreshold(const ULAMRLCmaxRetxThreshold& uLAMRLCmaxRetxThreshold) { *static_cast<ULAMRLCmaxRetxThreshold*>(items[3]) = uLAMRLCmaxRetxThreshold; }

	TPollRetransmit& getTPollRetransmit() { return *static_cast<TPollRetransmit*>(items[0]); }
	PollPDU& getPollPDU() { return *static_cast<PollPDU*>(items[1]); }
	PollByte& getPollByte() { return *static_cast<PollByte*>(items[2]); }
	ULAMRLCmaxRetxThreshold& getULAMRLCmaxRetxThreshold() { return *static_cast<ULAMRLCmaxRetxThreshold*>(items[3]); }
};

enum TReorderingValues {
	ms0_TReordering = 0,
	ms5_TReordering = 1,
	ms10_TReordering = 2,
	ms15_TReordering = 3,
	ms20_TReordering = 4,
	ms25_TReordering = 5,
	ms30_TReordering = 6,
	ms35_TReordering = 7,
	ms40_TReordering = 8,
	ms45_TReordering = 9,
	ms50_TReordering = 10,
	ms55_TReordering = 11,
	ms60_TReordering = 12,
	ms65_TReordering = 13,
	ms70_TReordering = 14,
	ms75_TReordering = 15,
	ms80_TReordering = 16,
	ms85_TReordering = 17,
	ms90_TReordering = 18,
	ms95_TReordering = 19,
	ms100_TReordering = 20,
	ms110_TReordering = 21,
	ms120_TReordering = 22,
	ms130_TReordering = 23,
	ms140_TReordering = 24,
	ms150_TReordering = 25,
	ms160_TReordering = 26,
	ms170_TReordering = 27,
	ms180_TReordering = 28,
	ms190_TReordering = 29,
	ms200_TReordering = 30,
	spare1_TReordering = 31,
};
typedef Enumerated<CONSTRAINED, 31> TReordering;

enum TStatusProhibitValues {
	ms0_TStatusProhibit = 0,
	ms5_TStatusProhibit = 1,
	ms10_TStatusProhibit = 2,
	ms15_TStatusProhibit = 3,
	ms20_TStatusProhibit = 4,
	ms25_TStatusProhibit = 5,
	ms30_TStatusProhibit = 6,
	ms35_TStatusProhibit = 7,
	ms40_TStatusProhibit = 8,
	ms45_TStatusProhibit = 9,
	ms50_TStatusProhibit = 10,
	ms55_TStatusProhibit = 11,
	ms60_TStatusProhibit = 12,
	ms65_TStatusProhibit = 13,
	ms70_TStatusProhibit = 14,
	ms75_TStatusProhibit = 15,
	ms80_TStatusProhibit = 16,
	ms85_TStatusProhibit = 17,
	ms90_TStatusProhibit = 18,
	ms95_TStatusProhibit = 19,
	ms100_TStatusProhibit = 20,
	ms105_TStatusProhibit = 21,
	ms110_TStatusProhibit = 22,
	ms115_TStatusProhibit = 23,
	ms120_TStatusProhibit = 24,
	ms125_TStatusProhibit = 25,
	ms130_TStatusProhibit = 26,
	ms135_TStatusProhibit = 27,
	ms140_TStatusProhibit = 28,
	ms145_TStatusProhibit = 29,
	ms150_TStatusProhibit = 30,
	ms155_TStatusProhibit = 31,
	ms160_TStatusProhibit = 32,
	ms165_TStatusProhibit = 33,
	ms170_TStatusProhibit = 34,
	ms175_TStatusProhibit = 35,
	ms180_TStatusProhibit = 36,
	ms185_TStatusProhibit = 37,
	ms190_TStatusProhibit = 38,
	ms195_TStatusProhibit = 39,
	ms200_TStatusProhibit = 40,
	ms205_TStatusProhibit = 41,
	ms210_TStatusProhibit = 42,
	ms215_TStatusProhibit = 43,
	ms220_TStatusProhibit = 44,
	ms225_TStatusProhibit = 45,
	ms230_TStatusProhibit = 46,
	ms235_TStatusProhibit = 47,
	ms240_TStatusProhibit = 48,
	ms245_TStatusProhibit = 49,
	ms250_TStatusProhibit = 50,
	ms300_TStatusProhibit = 51,
	ms350_TStatusProhibit = 52,
	ms400_TStatusProhibit = 53,
	ms450_TStatusProhibit = 54,
	ms500_TStatusProhibit = 55,
	spare8_TStatusProhibit = 56,
	spare7_TStatusProhibit = 57,
	spare6_TStatusProhibit = 58,
	spare5_TStatusProhibit = 59,
	spare4_TStatusProhibit = 60,
	spare3_TStatusProhibit = 61,
	spare2_TStatusProhibit = 62,
	spare1_TStatusProhibit = 63,
};
typedef Enumerated<CONSTRAINED, 63> TStatusProhibit;

class DLAMRLC : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DLAMRLC(): Sequence(&theInfo) {}
	DLAMRLC(const TReordering& tReordering, const TStatusProhibit& tStatusProhibit);

	void setTReordering(const TReordering& tReordering) { *static_cast<TReordering*>(items[0]) = tReordering; }
	void setTStatusProhibit(const TStatusProhibit& tStatusProhibit) { *static_cast<TStatusProhibit*>(items[1]) = tStatusProhibit; }

	TReordering& getTReordering() { return *static_cast<TReordering*>(items[0]); }
	TStatusProhibit& getTStatusProhibit() { return *static_cast<TStatusProhibit*>(items[1]); }
};

class RLCConfigAm : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RLCConfigAm(): Sequence(&theInfo) {}
	RLCConfigAm(const ULAMRLC& ulAMRLC, const DLAMRLC& dlAMRLC);

	void setUlAMRLC(const ULAMRLC& ulAMRLC) { *static_cast<ULAMRLC*>(items[0]) = ulAMRLC; }
	void setDlAMRLC(const DLAMRLC& dlAMRLC) { *static_cast<DLAMRLC*>(items[1]) = dlAMRLC; }

	ULAMRLC& getUlAMRLC() { return *static_cast<ULAMRLC*>(items[0]); }
	DLAMRLC& getDlAMRLC() { return *static_cast<DLAMRLC*>(items[1]); }
};

enum SNFieldLengthValues {
	size5_SNFieldLength = 0,
	size10_SNFieldLength = 1,
};
typedef Enumerated<CONSTRAINED, 1> SNFieldLength;

class ULUMRLC : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULUMRLC(): Sequence(&theInfo) {}
	ULUMRLC(const SNFieldLength& snFieldLength);

	void setSnFieldLength(const SNFieldLength& snFieldLength) { *static_cast<SNFieldLength*>(items[0]) = snFieldLength; }

	SNFieldLength& getSnFieldLength() { return *static_cast<SNFieldLength*>(items[0]); }
};

class DLUMRLC : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DLUMRLC(): Sequence(&theInfo) {}
	DLUMRLC(const SNFieldLength& snFieldLength, const TReordering& tReordering);

	void setSnFieldLength(const SNFieldLength& snFieldLength) { *static_cast<SNFieldLength*>(items[0]) = snFieldLength; }
	void setTReordering(const TReordering& tReordering) { *static_cast<TReordering*>(items[1]) = tReordering; }

	SNFieldLength& getSnFieldLength() { return *static_cast<SNFieldLength*>(items[0]); }
	TReordering& getTReordering() { return *static_cast<TReordering*>(items[1]); }
};

class RLCConfigUmBiDirectional : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RLCConfigUmBiDirectional(): Sequence(&theInfo) {}
	RLCConfigUmBiDirectional(const ULUMRLC& ulUMRLC, const DLUMRLC& dlUMRLC);

	void setUlUMRLC(const ULUMRLC& ulUMRLC) { *static_cast<ULUMRLC*>(items[0]) = ulUMRLC; }
	void setDlUMRLC(const DLUMRLC& dlUMRLC) { *static_cast<DLUMRLC*>(items[1]) = dlUMRLC; }

	ULUMRLC& getUlUMRLC() { return *static_cast<ULUMRLC*>(items[0]); }
	DLUMRLC& getDlUMRLC() { return *static_cast<DLUMRLC*>(items[1]); }
};

class RLCConfigUmUniDirectionalUL : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RLCConfigUmUniDirectionalUL(): Sequence(&theInfo) {}
	RLCConfigUmUniDirectionalUL(const ULUMRLC& ulUMRLC);

	void setUlUMRLC(const ULUMRLC& ulUMRLC) { *static_cast<ULUMRLC*>(items[0]) = ulUMRLC; }

	ULUMRLC& getUlUMRLC() { return *static_cast<ULUMRLC*>(items[0]); }
};

class RLCConfigUmUniDirectionalDL : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RLCConfigUmUniDirectionalDL(): Sequence(&theInfo) {}
	RLCConfigUmUniDirectionalDL(const DLUMRLC& dlUMRLC);

	void setDlUMRLC(const DLUMRLC& dlUMRLC) { *static_cast<DLUMRLC*>(items[0]) = dlUMRLC; }

	DLUMRLC& getDlUMRLC() { return *static_cast<DLUMRLC*>(items[0]); }
};

class RLCConfig : public Choice {
private:
	static const void *choicesInfo[4];
public:
	enum RLCConfigChoices {
		rLCConfigAm = 0,
		rLCConfigUmBiDirectional = 1,
		rLCConfigUmUniDirectionalUL = 2,
		rLCConfigUmUniDirectionalDL = 3,
	};
	static const Info theInfo;
	RLCConfig(): Choice(&theInfo) {}
};

typedef Null SRBToAddModRlcConfigDefaultValue;

class SRBToAddModRlcConfig : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum SRBToAddModRlcConfigChoices {
		explicitValue = 0,
		sRBToAddModRlcConfigDefaultValue = 1,
	};
	static const Info theInfo;
	SRBToAddModRlcConfig(): Choice(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 16> LogicalChannelConfigUlSpecificParametersPriority;

enum LogicalChannelConfigUlSpecificParametersprioritisedBitRateValues {
	kBps0_LogicalChannelConfigUlSpecificParametersprioritisedBitRate = 0,
	kBps8_LogicalChannelConfigUlSpecificParametersprioritisedBitRate = 1,
	kBps16_LogicalChannelConfigUlSpecificParametersprioritisedBitRate = 2,
	kBps32_LogicalChannelConfigUlSpecificParametersprioritisedBitRate = 3,
	kBps64_LogicalChannelConfigUlSpecificParametersprioritisedBitRate = 4,
	kBps128_LogicalChannelConfigUlSpecificParametersprioritisedBitRate = 5,
	kBps256_LogicalChannelConfigUlSpecificParametersprioritisedBitRate = 6,
	infinity_LogicalChannelConfigUlSpecificParametersprioritisedBitRate = 7,
	kBps512_v1020_LogicalChannelConfigUlSpecificParametersprioritisedBitRate = 8,
	kBps1024_v1020_LogicalChannelConfigUlSpecificParametersprioritisedBitRate = 9,
	kBps2048_v1020_LogicalChannelConfigUlSpecificParametersprioritisedBitRate = 10,
	spare5_LogicalChannelConfigUlSpecificParametersprioritisedBitRate = 11,
	spare4_LogicalChannelConfigUlSpecificParametersprioritisedBitRate = 12,
	spare3_LogicalChannelConfigUlSpecificParametersprioritisedBitRate = 13,
	spare2_LogicalChannelConfigUlSpecificParametersprioritisedBitRate = 14,
	spare1_LogicalChannelConfigUlSpecificParametersprioritisedBitRate = 15,
};
typedef Enumerated<CONSTRAINED, 15> LogicalChannelConfigUlSpecificParametersprioritisedBitRate;

enum LogicalChannelConfigUlSpecificParametersbucketSizeDurationValues {
	ms50_LogicalChannelConfigUlSpecificParametersbucketSizeDuration = 0,
	ms100_LogicalChannelConfigUlSpecificParametersbucketSizeDuration = 1,
	ms150_LogicalChannelConfigUlSpecificParametersbucketSizeDuration = 2,
	ms300_LogicalChannelConfigUlSpecificParametersbucketSizeDuration = 3,
	ms500_LogicalChannelConfigUlSpecificParametersbucketSizeDuration = 4,
	ms1000_LogicalChannelConfigUlSpecificParametersbucketSizeDuration = 5,
	spare2_LogicalChannelConfigUlSpecificParametersbucketSizeDuration = 6,
	spare1_LogicalChannelConfigUlSpecificParametersbucketSizeDuration = 7,
};
typedef Enumerated<CONSTRAINED, 7> LogicalChannelConfigUlSpecificParametersbucketSizeDuration;

typedef Integer<CONSTRAINED, 0, 3> LogicalChannelConfigUlSpecificParametersLogicalChannelGroup;

class LogicalChannelConfigUlSpecificParameters : public Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	LogicalChannelConfigUlSpecificParameters(): Sequence(&theInfo) {}
	LogicalChannelConfigUlSpecificParameters(const LogicalChannelConfigUlSpecificParametersPriority& logicalChannelConfigUlSpecificParametersPriority, const LogicalChannelConfigUlSpecificParametersprioritisedBitRate& logicalChannelConfigUlSpecificParametersprioritisedBitRate, const LogicalChannelConfigUlSpecificParametersbucketSizeDuration& logicalChannelConfigUlSpecificParametersbucketSizeDuration);

	void setLogicalChannelConfigUlSpecificParametersPriority(const LogicalChannelConfigUlSpecificParametersPriority& logicalChannelConfigUlSpecificParametersPriority) { *static_cast<LogicalChannelConfigUlSpecificParametersPriority*>(items[0]) = logicalChannelConfigUlSpecificParametersPriority; }
	void setLogicalChannelConfigUlSpecificParametersprioritisedBitRate(const LogicalChannelConfigUlSpecificParametersprioritisedBitRate& logicalChannelConfigUlSpecificParametersprioritisedBitRate) { *static_cast<LogicalChannelConfigUlSpecificParametersprioritisedBitRate*>(items[1]) = logicalChannelConfigUlSpecificParametersprioritisedBitRate; }
	void setLogicalChannelConfigUlSpecificParametersbucketSizeDuration(const LogicalChannelConfigUlSpecificParametersbucketSizeDuration& logicalChannelConfigUlSpecificParametersbucketSizeDuration) { *static_cast<LogicalChannelConfigUlSpecificParametersbucketSizeDuration*>(items[2]) = logicalChannelConfigUlSpecificParametersbucketSizeDuration; }
	void setLogicalChannelConfigUlSpecificParametersLogicalChannelGroup(const LogicalChannelConfigUlSpecificParametersLogicalChannelGroup& logicalChannelConfigUlSpecificParametersLogicalChannelGroup) { *static_cast<LogicalChannelConfigUlSpecificParametersLogicalChannelGroup*>(items[3]) = logicalChannelConfigUlSpecificParametersLogicalChannelGroup; }

	LogicalChannelConfigUlSpecificParametersPriority& getLogicalChannelConfigUlSpecificParametersPriority() { return *static_cast<LogicalChannelConfigUlSpecificParametersPriority*>(items[0]); }
	LogicalChannelConfigUlSpecificParametersprioritisedBitRate& getLogicalChannelConfigUlSpecificParametersprioritisedBitRate() { return *static_cast<LogicalChannelConfigUlSpecificParametersprioritisedBitRate*>(items[1]); }
	LogicalChannelConfigUlSpecificParametersbucketSizeDuration& getLogicalChannelConfigUlSpecificParametersbucketSizeDuration() { return *static_cast<LogicalChannelConfigUlSpecificParametersbucketSizeDuration*>(items[2]); }
	LogicalChannelConfigUlSpecificParametersLogicalChannelGroup& getLogicalChannelConfigUlSpecificParametersLogicalChannelGroup() { return *static_cast<LogicalChannelConfigUlSpecificParametersLogicalChannelGroup*>(items[3]); }
};

enum LogicalChannelConfiglogicalChannelSR_Mask_r9Values {
	setup_LogicalChannelConfiglogicalChannelSR_Mask_r9 = 0,
};
typedef Enumerated<CONSTRAINED, 0> LogicalChannelConfiglogicalChannelSR_Mask_r9;

class LogicalChannelConfig : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	LogicalChannelConfig(): Sequence(&theInfo) {}

	void setLogicalChannelConfigUlSpecificParameters(const LogicalChannelConfigUlSpecificParameters& logicalChannelConfigUlSpecificParameters) { *static_cast<LogicalChannelConfigUlSpecificParameters*>(items[0]) = logicalChannelConfigUlSpecificParameters; }
	void setLogicalChannelConfiglogicalChannelSR_Mask_r9(const LogicalChannelConfiglogicalChannelSR_Mask_r9& logicalChannelConfiglogicalChannelSR_Mask_r9) { *static_cast<LogicalChannelConfiglogicalChannelSR_Mask_r9*>(items[1]) = logicalChannelConfiglogicalChannelSR_Mask_r9; }

	LogicalChannelConfigUlSpecificParameters& getLogicalChannelConfigUlSpecificParameters() { return *static_cast<LogicalChannelConfigUlSpecificParameters*>(items[0]); }
	LogicalChannelConfiglogicalChannelSR_Mask_r9& getLogicalChannelConfiglogicalChannelSR_Mask_r9() { return *static_cast<LogicalChannelConfiglogicalChannelSR_Mask_r9*>(items[1]); }
};

typedef Null SRBToAddModLogicalChannelConfigDefaultValue;

class SRBToAddModLogicalChannelConfig : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum SRBToAddModLogicalChannelConfigChoices {
		explicitValue = 0,
		sRBToAddModLogicalChannelConfigDefaultValue = 1,
	};
	static const Info theInfo;
	SRBToAddModLogicalChannelConfig(): Choice(&theInfo) {}
};

class SRBToAddMod : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	SRBToAddMod(): Sequence(&theInfo) {}
	SRBToAddMod(const SRBToAddModSrbIdentity& sRBToAddModSrbIdentity);

	void setSRBToAddModSrbIdentity(const SRBToAddModSrbIdentity& sRBToAddModSrbIdentity) { *static_cast<SRBToAddModSrbIdentity*>(items[0]) = sRBToAddModSrbIdentity; }
	void setSRBToAddModRlcConfig(const SRBToAddModRlcConfig& sRBToAddModRlcConfig) { *static_cast<SRBToAddModRlcConfig*>(items[1]) = sRBToAddModRlcConfig; }
	void setSRBToAddModLogicalChannelConfig(const SRBToAddModLogicalChannelConfig& sRBToAddModLogicalChannelConfig) { *static_cast<SRBToAddModLogicalChannelConfig*>(items[2]) = sRBToAddModLogicalChannelConfig; }

	SRBToAddModSrbIdentity& getSRBToAddModSrbIdentity() { return *static_cast<SRBToAddModSrbIdentity*>(items[0]); }
	SRBToAddModRlcConfig& getSRBToAddModRlcConfig() { return *static_cast<SRBToAddModRlcConfig*>(items[1]); }
	SRBToAddModLogicalChannelConfig& getSRBToAddModLogicalChannelConfig() { return *static_cast<SRBToAddModLogicalChannelConfig*>(items[2]); }
};

typedef SequenceOf<SRBToAddMod, CONSTRAINED, 1, 2> SRBToAddModList;

typedef Integer<CONSTRAINED, 0, 15> DRBToAddModEpsBearerIdentity;

typedef Integer<CONSTRAINED, 1, 32> DRBIdentity;

enum PDCPConfigdiscardTimerValues {
	ms50_PDCPConfigdiscardTimer = 0,
	ms100_PDCPConfigdiscardTimer = 1,
	ms150_PDCPConfigdiscardTimer = 2,
	ms300_PDCPConfigdiscardTimer = 3,
	ms500_PDCPConfigdiscardTimer = 4,
	ms750_PDCPConfigdiscardTimer = 5,
	ms1500_PDCPConfigdiscardTimer = 6,
	infinity_PDCPConfigdiscardTimer = 7,
};
typedef Enumerated<CONSTRAINED, 7> PDCPConfigdiscardTimer;

typedef Boolean PDCPConfigRlcAMStatusReportRequired;

class PDCPConfigRlcAM : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PDCPConfigRlcAM(): Sequence(&theInfo) {}
	PDCPConfigRlcAM(const PDCPConfigRlcAMStatusReportRequired& pDCPConfigRlcAMStatusReportRequired);

	void setPDCPConfigRlcAMStatusReportRequired(const PDCPConfigRlcAMStatusReportRequired& pDCPConfigRlcAMStatusReportRequired) { *static_cast<PDCPConfigRlcAMStatusReportRequired*>(items[0]) = pDCPConfigRlcAMStatusReportRequired; }

	PDCPConfigRlcAMStatusReportRequired& getPDCPConfigRlcAMStatusReportRequired() { return *static_cast<PDCPConfigRlcAMStatusReportRequired*>(items[0]); }
};

enum PDCPConfigRlcUMpdcp_SN_SizeValues {
	len7bits_PDCPConfigRlcUMpdcp_SN_Size = 0,
	len12bits_PDCPConfigRlcUMpdcp_SN_Size = 1,
};
typedef Enumerated<CONSTRAINED, 1> PDCPConfigRlcUMpdcp_SN_Size;

class PDCPConfigRlcUM : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PDCPConfigRlcUM(): Sequence(&theInfo) {}
	PDCPConfigRlcUM(const PDCPConfigRlcUMpdcp_SN_Size& pDCPConfigRlcUMpdcp_SN_Size);

	void setPDCPConfigRlcUMpdcp_SN_Size(const PDCPConfigRlcUMpdcp_SN_Size& pDCPConfigRlcUMpdcp_SN_Size) { *static_cast<PDCPConfigRlcUMpdcp_SN_Size*>(items[0]) = pDCPConfigRlcUMpdcp_SN_Size; }

	PDCPConfigRlcUMpdcp_SN_Size& getPDCPConfigRlcUMpdcp_SN_Size() { return *static_cast<PDCPConfigRlcUMpdcp_SN_Size*>(items[0]); }
};

typedef Null PDCPConfigHeaderCompressionNotUsed;

typedef Integer<CONSTRAINED, 1, 16383> PDCPConfigHeaderCompressionRohcMaxCID;

typedef Boolean PDCPConfigHeaderCompressionRohcProfilesProfile0x0001;

typedef Boolean PDCPConfigHeaderCompressionRohcProfilesProfile0x0002;

typedef Boolean PDCPConfigHeaderCompressionRohcProfilesProfile0x0003;

typedef Boolean PDCPConfigHeaderCompressionRohcProfilesProfile0x0004;

typedef Boolean PDCPConfigHeaderCompressionRohcProfilesProfile0x0006;

typedef Boolean PDCPConfigHeaderCompressionRohcProfilesProfile0x0101;

typedef Boolean PDCPConfigHeaderCompressionRohcProfilesProfile0x0102;

typedef Boolean PDCPConfigHeaderCompressionRohcProfilesProfile0x0103;

typedef Boolean PDCPConfigHeaderCompressionRohcProfilesProfile0x0104;

class PDCPConfigHeaderCompressionRohcProfiles : public Sequence {
private:
	static const void *itemsInfo[9];
	static bool itemsPres[9];
public:
	static const Info theInfo;
	PDCPConfigHeaderCompressionRohcProfiles(): Sequence(&theInfo) {}
	PDCPConfigHeaderCompressionRohcProfiles(const PDCPConfigHeaderCompressionRohcProfilesProfile0x0001& pDCPConfigHeaderCompressionRohcProfilesProfile0x0001, const PDCPConfigHeaderCompressionRohcProfilesProfile0x0002& pDCPConfigHeaderCompressionRohcProfilesProfile0x0002, const PDCPConfigHeaderCompressionRohcProfilesProfile0x0003& pDCPConfigHeaderCompressionRohcProfilesProfile0x0003, const PDCPConfigHeaderCompressionRohcProfilesProfile0x0004& pDCPConfigHeaderCompressionRohcProfilesProfile0x0004, const PDCPConfigHeaderCompressionRohcProfilesProfile0x0006& pDCPConfigHeaderCompressionRohcProfilesProfile0x0006, const PDCPConfigHeaderCompressionRohcProfilesProfile0x0101& pDCPConfigHeaderCompressionRohcProfilesProfile0x0101, const PDCPConfigHeaderCompressionRohcProfilesProfile0x0102& pDCPConfigHeaderCompressionRohcProfilesProfile0x0102, const PDCPConfigHeaderCompressionRohcProfilesProfile0x0103& pDCPConfigHeaderCompressionRohcProfilesProfile0x0103, const PDCPConfigHeaderCompressionRohcProfilesProfile0x0104& pDCPConfigHeaderCompressionRohcProfilesProfile0x0104);

	void setPDCPConfigHeaderCompressionRohcProfilesProfile0x0001(const PDCPConfigHeaderCompressionRohcProfilesProfile0x0001& pDCPConfigHeaderCompressionRohcProfilesProfile0x0001) { *static_cast<PDCPConfigHeaderCompressionRohcProfilesProfile0x0001*>(items[0]) = pDCPConfigHeaderCompressionRohcProfilesProfile0x0001; }
	void setPDCPConfigHeaderCompressionRohcProfilesProfile0x0002(const PDCPConfigHeaderCompressionRohcProfilesProfile0x0002& pDCPConfigHeaderCompressionRohcProfilesProfile0x0002) { *static_cast<PDCPConfigHeaderCompressionRohcProfilesProfile0x0002*>(items[1]) = pDCPConfigHeaderCompressionRohcProfilesProfile0x0002; }
	void setPDCPConfigHeaderCompressionRohcProfilesProfile0x0003(const PDCPConfigHeaderCompressionRohcProfilesProfile0x0003& pDCPConfigHeaderCompressionRohcProfilesProfile0x0003) { *static_cast<PDCPConfigHeaderCompressionRohcProfilesProfile0x0003*>(items[2]) = pDCPConfigHeaderCompressionRohcProfilesProfile0x0003; }
	void setPDCPConfigHeaderCompressionRohcProfilesProfile0x0004(const PDCPConfigHeaderCompressionRohcProfilesProfile0x0004& pDCPConfigHeaderCompressionRohcProfilesProfile0x0004) { *static_cast<PDCPConfigHeaderCompressionRohcProfilesProfile0x0004*>(items[3]) = pDCPConfigHeaderCompressionRohcProfilesProfile0x0004; }
	void setPDCPConfigHeaderCompressionRohcProfilesProfile0x0006(const PDCPConfigHeaderCompressionRohcProfilesProfile0x0006& pDCPConfigHeaderCompressionRohcProfilesProfile0x0006) { *static_cast<PDCPConfigHeaderCompressionRohcProfilesProfile0x0006*>(items[4]) = pDCPConfigHeaderCompressionRohcProfilesProfile0x0006; }
	void setPDCPConfigHeaderCompressionRohcProfilesProfile0x0101(const PDCPConfigHeaderCompressionRohcProfilesProfile0x0101& pDCPConfigHeaderCompressionRohcProfilesProfile0x0101) { *static_cast<PDCPConfigHeaderCompressionRohcProfilesProfile0x0101*>(items[5]) = pDCPConfigHeaderCompressionRohcProfilesProfile0x0101; }
	void setPDCPConfigHeaderCompressionRohcProfilesProfile0x0102(const PDCPConfigHeaderCompressionRohcProfilesProfile0x0102& pDCPConfigHeaderCompressionRohcProfilesProfile0x0102) { *static_cast<PDCPConfigHeaderCompressionRohcProfilesProfile0x0102*>(items[6]) = pDCPConfigHeaderCompressionRohcProfilesProfile0x0102; }
	void setPDCPConfigHeaderCompressionRohcProfilesProfile0x0103(const PDCPConfigHeaderCompressionRohcProfilesProfile0x0103& pDCPConfigHeaderCompressionRohcProfilesProfile0x0103) { *static_cast<PDCPConfigHeaderCompressionRohcProfilesProfile0x0103*>(items[7]) = pDCPConfigHeaderCompressionRohcProfilesProfile0x0103; }
	void setPDCPConfigHeaderCompressionRohcProfilesProfile0x0104(const PDCPConfigHeaderCompressionRohcProfilesProfile0x0104& pDCPConfigHeaderCompressionRohcProfilesProfile0x0104) { *static_cast<PDCPConfigHeaderCompressionRohcProfilesProfile0x0104*>(items[8]) = pDCPConfigHeaderCompressionRohcProfilesProfile0x0104; }

	PDCPConfigHeaderCompressionRohcProfilesProfile0x0001& getPDCPConfigHeaderCompressionRohcProfilesProfile0x0001() { return *static_cast<PDCPConfigHeaderCompressionRohcProfilesProfile0x0001*>(items[0]); }
	PDCPConfigHeaderCompressionRohcProfilesProfile0x0002& getPDCPConfigHeaderCompressionRohcProfilesProfile0x0002() { return *static_cast<PDCPConfigHeaderCompressionRohcProfilesProfile0x0002*>(items[1]); }
	PDCPConfigHeaderCompressionRohcProfilesProfile0x0003& getPDCPConfigHeaderCompressionRohcProfilesProfile0x0003() { return *static_cast<PDCPConfigHeaderCompressionRohcProfilesProfile0x0003*>(items[2]); }
	PDCPConfigHeaderCompressionRohcProfilesProfile0x0004& getPDCPConfigHeaderCompressionRohcProfilesProfile0x0004() { return *static_cast<PDCPConfigHeaderCompressionRohcProfilesProfile0x0004*>(items[3]); }
	PDCPConfigHeaderCompressionRohcProfilesProfile0x0006& getPDCPConfigHeaderCompressionRohcProfilesProfile0x0006() { return *static_cast<PDCPConfigHeaderCompressionRohcProfilesProfile0x0006*>(items[4]); }
	PDCPConfigHeaderCompressionRohcProfilesProfile0x0101& getPDCPConfigHeaderCompressionRohcProfilesProfile0x0101() { return *static_cast<PDCPConfigHeaderCompressionRohcProfilesProfile0x0101*>(items[5]); }
	PDCPConfigHeaderCompressionRohcProfilesProfile0x0102& getPDCPConfigHeaderCompressionRohcProfilesProfile0x0102() { return *static_cast<PDCPConfigHeaderCompressionRohcProfilesProfile0x0102*>(items[6]); }
	PDCPConfigHeaderCompressionRohcProfilesProfile0x0103& getPDCPConfigHeaderCompressionRohcProfilesProfile0x0103() { return *static_cast<PDCPConfigHeaderCompressionRohcProfilesProfile0x0103*>(items[7]); }
	PDCPConfigHeaderCompressionRohcProfilesProfile0x0104& getPDCPConfigHeaderCompressionRohcProfilesProfile0x0104() { return *static_cast<PDCPConfigHeaderCompressionRohcProfilesProfile0x0104*>(items[8]); }
};

class PDCPConfigHeaderCompressionRohc : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PDCPConfigHeaderCompressionRohc(): Sequence(&theInfo) {}
	PDCPConfigHeaderCompressionRohc(const PDCPConfigHeaderCompressionRohcProfiles& pDCPConfigHeaderCompressionRohcProfiles);

	void setPDCPConfigHeaderCompressionRohcMaxCID(const PDCPConfigHeaderCompressionRohcMaxCID& pDCPConfigHeaderCompressionRohcMaxCID) { *static_cast<PDCPConfigHeaderCompressionRohcMaxCID*>(items[0]) = pDCPConfigHeaderCompressionRohcMaxCID; }
	void setPDCPConfigHeaderCompressionRohcProfiles(const PDCPConfigHeaderCompressionRohcProfiles& pDCPConfigHeaderCompressionRohcProfiles) { *static_cast<PDCPConfigHeaderCompressionRohcProfiles*>(items[1]) = pDCPConfigHeaderCompressionRohcProfiles; }

	PDCPConfigHeaderCompressionRohcMaxCID& getPDCPConfigHeaderCompressionRohcMaxCID() { return *static_cast<PDCPConfigHeaderCompressionRohcMaxCID*>(items[0]); }
	PDCPConfigHeaderCompressionRohcProfiles& getPDCPConfigHeaderCompressionRohcProfiles() { return *static_cast<PDCPConfigHeaderCompressionRohcProfiles*>(items[1]); }
};

class PDCPConfigHeaderCompression : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum PDCPConfigHeaderCompressionChoices {
		pDCPConfigHeaderCompressionNotUsed = 0,
		pDCPConfigHeaderCompressionRohc = 1,
	};
	static const Info theInfo;
	PDCPConfigHeaderCompression(): Choice(&theInfo) {}
};

enum PDCPConfigrn_IntegrityProtection_r10Values {
	enabled_PDCPConfigrn_IntegrityProtection_r10 = 0,
};
typedef Enumerated<CONSTRAINED, 0> PDCPConfigrn_IntegrityProtection_r10;

class PDCPConfig : public Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	PDCPConfig(): Sequence(&theInfo) {}

	void setPDCPConfigdiscardTimer(const PDCPConfigdiscardTimer& pDCPConfigdiscardTimer) { *static_cast<PDCPConfigdiscardTimer*>(items[0]) = pDCPConfigdiscardTimer; }
	void setPDCPConfigRlcAM(const PDCPConfigRlcAM& pDCPConfigRlcAM) { *static_cast<PDCPConfigRlcAM*>(items[1]) = pDCPConfigRlcAM; }
	void setPDCPConfigRlcUM(const PDCPConfigRlcUM& pDCPConfigRlcUM) { *static_cast<PDCPConfigRlcUM*>(items[2]) = pDCPConfigRlcUM; }
	void setPDCPConfigHeaderCompression(const PDCPConfigHeaderCompression& pDCPConfigHeaderCompression) { *static_cast<PDCPConfigHeaderCompression*>(items[3]) = pDCPConfigHeaderCompression; }
	void setPDCPConfigrn_IntegrityProtection_r10(const PDCPConfigrn_IntegrityProtection_r10& pDCPConfigrn_IntegrityProtection_r10) { *static_cast<PDCPConfigrn_IntegrityProtection_r10*>(items[4]) = pDCPConfigrn_IntegrityProtection_r10; }

	PDCPConfigdiscardTimer& getPDCPConfigdiscardTimer() { return *static_cast<PDCPConfigdiscardTimer*>(items[0]); }
	PDCPConfigRlcAM& getPDCPConfigRlcAM() { return *static_cast<PDCPConfigRlcAM*>(items[1]); }
	PDCPConfigRlcUM& getPDCPConfigRlcUM() { return *static_cast<PDCPConfigRlcUM*>(items[2]); }
	PDCPConfigHeaderCompression& getPDCPConfigHeaderCompression() { return *static_cast<PDCPConfigHeaderCompression*>(items[3]); }
	PDCPConfigrn_IntegrityProtection_r10& getPDCPConfigrn_IntegrityProtection_r10() { return *static_cast<PDCPConfigrn_IntegrityProtection_r10*>(items[4]); }
};

typedef Integer<CONSTRAINED, 3, 10> DRBToAddModLogicalChannelIdentity;

class DRBToAddMod : public Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	DRBToAddMod(): Sequence(&theInfo) {}
	DRBToAddMod(const DRBIdentity& drbIdentity);

	void setDRBToAddModEpsBearerIdentity(const DRBToAddModEpsBearerIdentity& dRBToAddModEpsBearerIdentity) { *static_cast<DRBToAddModEpsBearerIdentity*>(items[0]) = dRBToAddModEpsBearerIdentity; }
	void setDrbIdentity(const DRBIdentity& drbIdentity) { *static_cast<DRBIdentity*>(items[1]) = drbIdentity; }
	void setPdcpConfig(const PDCPConfig& pdcpConfig) { *static_cast<PDCPConfig*>(items[2]) = pdcpConfig; }
	void setRlcConfig(const RLCConfig& rlcConfig) { *static_cast<RLCConfig*>(items[3]) = rlcConfig; }
	void setDRBToAddModLogicalChannelIdentity(const DRBToAddModLogicalChannelIdentity& dRBToAddModLogicalChannelIdentity) { *static_cast<DRBToAddModLogicalChannelIdentity*>(items[4]) = dRBToAddModLogicalChannelIdentity; }
	void setLogicalChannelConfig(const LogicalChannelConfig& logicalChannelConfig) { *static_cast<LogicalChannelConfig*>(items[5]) = logicalChannelConfig; }

	DRBToAddModEpsBearerIdentity& getDRBToAddModEpsBearerIdentity() { return *static_cast<DRBToAddModEpsBearerIdentity*>(items[0]); }
	DRBIdentity& getDrbIdentity() { return *static_cast<DRBIdentity*>(items[1]); }
	PDCPConfig& getPdcpConfig() { return *static_cast<PDCPConfig*>(items[2]); }
	RLCConfig& getRlcConfig() { return *static_cast<RLCConfig*>(items[3]); }
	DRBToAddModLogicalChannelIdentity& getDRBToAddModLogicalChannelIdentity() { return *static_cast<DRBToAddModLogicalChannelIdentity*>(items[4]); }
	LogicalChannelConfig& getLogicalChannelConfig() { return *static_cast<LogicalChannelConfig*>(items[5]); }
};

typedef SequenceOf<DRBToAddMod, CONSTRAINED, 1, maxDRB> DRBToAddModList;

typedef SequenceOf<DRBIdentity, CONSTRAINED, 1, maxDRB> DRBToReleaseList;

enum MACMainConfigUlSCHConfigmaxHARQ_TxValues {
	n1_MACMainConfigUlSCHConfigmaxHARQ_Tx = 0,
	n2_MACMainConfigUlSCHConfigmaxHARQ_Tx = 1,
	n3_MACMainConfigUlSCHConfigmaxHARQ_Tx = 2,
	n4_MACMainConfigUlSCHConfigmaxHARQ_Tx = 3,
	n5_MACMainConfigUlSCHConfigmaxHARQ_Tx = 4,
	n6_MACMainConfigUlSCHConfigmaxHARQ_Tx = 5,
	n7_MACMainConfigUlSCHConfigmaxHARQ_Tx = 6,
	n8_MACMainConfigUlSCHConfigmaxHARQ_Tx = 7,
	n10_MACMainConfigUlSCHConfigmaxHARQ_Tx = 8,
	n12_MACMainConfigUlSCHConfigmaxHARQ_Tx = 9,
	n16_MACMainConfigUlSCHConfigmaxHARQ_Tx = 10,
	n20_MACMainConfigUlSCHConfigmaxHARQ_Tx = 11,
	n24_MACMainConfigUlSCHConfigmaxHARQ_Tx = 12,
	n28_MACMainConfigUlSCHConfigmaxHARQ_Tx = 13,
	spare2_MACMainConfigUlSCHConfigmaxHARQ_Tx = 14,
	spare1_MACMainConfigUlSCHConfigmaxHARQ_Tx = 15,
};
typedef Enumerated<CONSTRAINED, 15> MACMainConfigUlSCHConfigmaxHARQ_Tx;

enum MACMainConfigUlSCHConfigperiodicBSR_TimerValues {
	sf5_MACMainConfigUlSCHConfigperiodicBSR_Timer = 0,
	sf10_MACMainConfigUlSCHConfigperiodicBSR_Timer = 1,
	sf16_MACMainConfigUlSCHConfigperiodicBSR_Timer = 2,
	sf20_MACMainConfigUlSCHConfigperiodicBSR_Timer = 3,
	sf32_MACMainConfigUlSCHConfigperiodicBSR_Timer = 4,
	sf40_MACMainConfigUlSCHConfigperiodicBSR_Timer = 5,
	sf64_MACMainConfigUlSCHConfigperiodicBSR_Timer = 6,
	sf80_MACMainConfigUlSCHConfigperiodicBSR_Timer = 7,
	sf128_MACMainConfigUlSCHConfigperiodicBSR_Timer = 8,
	sf160_MACMainConfigUlSCHConfigperiodicBSR_Timer = 9,
	sf320_MACMainConfigUlSCHConfigperiodicBSR_Timer = 10,
	sf640_MACMainConfigUlSCHConfigperiodicBSR_Timer = 11,
	sf1280_MACMainConfigUlSCHConfigperiodicBSR_Timer = 12,
	sf2560_MACMainConfigUlSCHConfigperiodicBSR_Timer = 13,
	infinity_MACMainConfigUlSCHConfigperiodicBSR_Timer = 14,
	spare1_MACMainConfigUlSCHConfigperiodicBSR_Timer = 15,
};
typedef Enumerated<CONSTRAINED, 15> MACMainConfigUlSCHConfigperiodicBSR_Timer;

enum MACMainConfigUlSCHConfigretxBSR_TimerValues {
	sf320_MACMainConfigUlSCHConfigretxBSR_Timer = 0,
	sf640_MACMainConfigUlSCHConfigretxBSR_Timer = 1,
	sf1280_MACMainConfigUlSCHConfigretxBSR_Timer = 2,
	sf2560_MACMainConfigUlSCHConfigretxBSR_Timer = 3,
	sf5120_MACMainConfigUlSCHConfigretxBSR_Timer = 4,
	sf10240_MACMainConfigUlSCHConfigretxBSR_Timer = 5,
	spare2_MACMainConfigUlSCHConfigretxBSR_Timer = 6,
	spare1_MACMainConfigUlSCHConfigretxBSR_Timer = 7,
};
typedef Enumerated<CONSTRAINED, 7> MACMainConfigUlSCHConfigretxBSR_Timer;

typedef Boolean MACMainConfigUlSCHConfigTtiBundling;

class MACMainConfigUlSCHConfig : public Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	MACMainConfigUlSCHConfig(): Sequence(&theInfo) {}
	MACMainConfigUlSCHConfig(const MACMainConfigUlSCHConfigretxBSR_Timer& mACMainConfigUlSCHConfigretxBSR_Timer, const MACMainConfigUlSCHConfigTtiBundling& mACMainConfigUlSCHConfigTtiBundling);

	void setMACMainConfigUlSCHConfigmaxHARQ_Tx(const MACMainConfigUlSCHConfigmaxHARQ_Tx& mACMainConfigUlSCHConfigmaxHARQ_Tx) { *static_cast<MACMainConfigUlSCHConfigmaxHARQ_Tx*>(items[0]) = mACMainConfigUlSCHConfigmaxHARQ_Tx; }
	void setMACMainConfigUlSCHConfigperiodicBSR_Timer(const MACMainConfigUlSCHConfigperiodicBSR_Timer& mACMainConfigUlSCHConfigperiodicBSR_Timer) { *static_cast<MACMainConfigUlSCHConfigperiodicBSR_Timer*>(items[1]) = mACMainConfigUlSCHConfigperiodicBSR_Timer; }
	void setMACMainConfigUlSCHConfigretxBSR_Timer(const MACMainConfigUlSCHConfigretxBSR_Timer& mACMainConfigUlSCHConfigretxBSR_Timer) { *static_cast<MACMainConfigUlSCHConfigretxBSR_Timer*>(items[2]) = mACMainConfigUlSCHConfigretxBSR_Timer; }
	void setMACMainConfigUlSCHConfigTtiBundling(const MACMainConfigUlSCHConfigTtiBundling& mACMainConfigUlSCHConfigTtiBundling) { *static_cast<MACMainConfigUlSCHConfigTtiBundling*>(items[3]) = mACMainConfigUlSCHConfigTtiBundling; }

	MACMainConfigUlSCHConfigmaxHARQ_Tx& getMACMainConfigUlSCHConfigmaxHARQ_Tx() { return *static_cast<MACMainConfigUlSCHConfigmaxHARQ_Tx*>(items[0]); }
	MACMainConfigUlSCHConfigperiodicBSR_Timer& getMACMainConfigUlSCHConfigperiodicBSR_Timer() { return *static_cast<MACMainConfigUlSCHConfigperiodicBSR_Timer*>(items[1]); }
	MACMainConfigUlSCHConfigretxBSR_Timer& getMACMainConfigUlSCHConfigretxBSR_Timer() { return *static_cast<MACMainConfigUlSCHConfigretxBSR_Timer*>(items[2]); }
	MACMainConfigUlSCHConfigTtiBundling& getMACMainConfigUlSCHConfigTtiBundling() { return *static_cast<MACMainConfigUlSCHConfigTtiBundling*>(items[3]); }
};

typedef Null DRXConfigRelease;

enum DRXConfigSetuponDurationTimerValues {
	psf1_DRXConfigSetuponDurationTimer = 0,
	psf2_DRXConfigSetuponDurationTimer = 1,
	psf3_DRXConfigSetuponDurationTimer = 2,
	psf4_DRXConfigSetuponDurationTimer = 3,
	psf5_DRXConfigSetuponDurationTimer = 4,
	psf6_DRXConfigSetuponDurationTimer = 5,
	psf8_DRXConfigSetuponDurationTimer = 6,
	psf10_DRXConfigSetuponDurationTimer = 7,
	psf20_DRXConfigSetuponDurationTimer = 8,
	psf30_DRXConfigSetuponDurationTimer = 9,
	psf40_DRXConfigSetuponDurationTimer = 10,
	psf50_DRXConfigSetuponDurationTimer = 11,
	psf60_DRXConfigSetuponDurationTimer = 12,
	psf80_DRXConfigSetuponDurationTimer = 13,
	psf100_DRXConfigSetuponDurationTimer = 14,
	psf200_DRXConfigSetuponDurationTimer = 15,
};
typedef Enumerated<CONSTRAINED, 15> DRXConfigSetuponDurationTimer;

enum DRXConfigSetupdrx_InactivityTimerValues {
	psf1_DRXConfigSetupdrx_InactivityTimer = 0,
	psf2_DRXConfigSetupdrx_InactivityTimer = 1,
	psf3_DRXConfigSetupdrx_InactivityTimer = 2,
	psf4_DRXConfigSetupdrx_InactivityTimer = 3,
	psf5_DRXConfigSetupdrx_InactivityTimer = 4,
	psf6_DRXConfigSetupdrx_InactivityTimer = 5,
	psf8_DRXConfigSetupdrx_InactivityTimer = 6,
	psf10_DRXConfigSetupdrx_InactivityTimer = 7,
	psf20_DRXConfigSetupdrx_InactivityTimer = 8,
	psf30_DRXConfigSetupdrx_InactivityTimer = 9,
	psf40_DRXConfigSetupdrx_InactivityTimer = 10,
	psf50_DRXConfigSetupdrx_InactivityTimer = 11,
	psf60_DRXConfigSetupdrx_InactivityTimer = 12,
	psf80_DRXConfigSetupdrx_InactivityTimer = 13,
	psf100_DRXConfigSetupdrx_InactivityTimer = 14,
	psf200_DRXConfigSetupdrx_InactivityTimer = 15,
	psf300_DRXConfigSetupdrx_InactivityTimer = 16,
	psf500_DRXConfigSetupdrx_InactivityTimer = 17,
	psf750_DRXConfigSetupdrx_InactivityTimer = 18,
	psf1280_DRXConfigSetupdrx_InactivityTimer = 19,
	psf1920_DRXConfigSetupdrx_InactivityTimer = 20,
	psf2560_DRXConfigSetupdrx_InactivityTimer = 21,
	psf0_v1020_DRXConfigSetupdrx_InactivityTimer = 22,
	spare9_DRXConfigSetupdrx_InactivityTimer = 23,
	spare8_DRXConfigSetupdrx_InactivityTimer = 24,
	spare7_DRXConfigSetupdrx_InactivityTimer = 25,
	spare6_DRXConfigSetupdrx_InactivityTimer = 26,
	spare5_DRXConfigSetupdrx_InactivityTimer = 27,
	spare4_DRXConfigSetupdrx_InactivityTimer = 28,
	spare3_DRXConfigSetupdrx_InactivityTimer = 29,
	spare2_DRXConfigSetupdrx_InactivityTimer = 30,
	spare1_DRXConfigSetupdrx_InactivityTimer = 31,
};
typedef Enumerated<CONSTRAINED, 31> DRXConfigSetupdrx_InactivityTimer;

enum DRXConfigSetupdrx_RetransmissionTimerValues {
	psf1_DRXConfigSetupdrx_RetransmissionTimer = 0,
	psf2_DRXConfigSetupdrx_RetransmissionTimer = 1,
	psf4_DRXConfigSetupdrx_RetransmissionTimer = 2,
	psf6_DRXConfigSetupdrx_RetransmissionTimer = 3,
	psf8_DRXConfigSetupdrx_RetransmissionTimer = 4,
	psf16_DRXConfigSetupdrx_RetransmissionTimer = 5,
	psf24_DRXConfigSetupdrx_RetransmissionTimer = 6,
	psf33_DRXConfigSetupdrx_RetransmissionTimer = 7,
};
typedef Enumerated<CONSTRAINED, 7> DRXConfigSetupdrx_RetransmissionTimer;

typedef Integer<CONSTRAINED, 0, 9> DRXConfigSetupLongDRXCycleStartOffsetSf10;

typedef Integer<CONSTRAINED, 0, 19> DRXConfigSetupLongDRXCycleStartOffsetSf20;

typedef Integer<CONSTRAINED, 0, 31> DRXConfigSetupLongDRXCycleStartOffsetSf32;

typedef Integer<CONSTRAINED, 0, 39> DRXConfigSetupLongDRXCycleStartOffsetSf40;

typedef Integer<CONSTRAINED, 0, 63> DRXConfigSetupLongDRXCycleStartOffsetSf64;

typedef Integer<CONSTRAINED, 0, 79> DRXConfigSetupLongDRXCycleStartOffsetSf80;

typedef Integer<CONSTRAINED, 0, 127> DRXConfigSetupLongDRXCycleStartOffsetSf128;

typedef Integer<CONSTRAINED, 0, 159> DRXConfigSetupLongDRXCycleStartOffsetSf160;

typedef Integer<CONSTRAINED, 0, 255> DRXConfigSetupLongDRXCycleStartOffsetSf256;

typedef Integer<CONSTRAINED, 0, 319> DRXConfigSetupLongDRXCycleStartOffsetSf320;

typedef Integer<CONSTRAINED, 0, 511> DRXConfigSetupLongDRXCycleStartOffsetSf512;

typedef Integer<CONSTRAINED, 0, 639> DRXConfigSetupLongDRXCycleStartOffsetSf640;

typedef Integer<CONSTRAINED, 0, 1023> DRXConfigSetupLongDRXCycleStartOffsetSf1024;

typedef Integer<CONSTRAINED, 0, 1279> DRXConfigSetupLongDRXCycleStartOffsetSf1280;

typedef Integer<CONSTRAINED, 0, 2047> DRXConfigSetupLongDRXCycleStartOffsetSf2048;

typedef Integer<CONSTRAINED, 0, 2559> DRXConfigSetupLongDRXCycleStartOffsetSf2560;

class DRXConfigSetupLongDRXCycleStartOffset : public Choice {
private:
	static const void *choicesInfo[16];
public:
	enum DRXConfigSetupLongDRXCycleStartOffsetChoices {
		dRXConfigSetupLongDRXCycleStartOffsetSf10 = 0,
		dRXConfigSetupLongDRXCycleStartOffsetSf20 = 1,
		dRXConfigSetupLongDRXCycleStartOffsetSf32 = 2,
		dRXConfigSetupLongDRXCycleStartOffsetSf40 = 3,
		dRXConfigSetupLongDRXCycleStartOffsetSf64 = 4,
		dRXConfigSetupLongDRXCycleStartOffsetSf80 = 5,
		dRXConfigSetupLongDRXCycleStartOffsetSf128 = 6,
		dRXConfigSetupLongDRXCycleStartOffsetSf160 = 7,
		dRXConfigSetupLongDRXCycleStartOffsetSf256 = 8,
		dRXConfigSetupLongDRXCycleStartOffsetSf320 = 9,
		dRXConfigSetupLongDRXCycleStartOffsetSf512 = 10,
		dRXConfigSetupLongDRXCycleStartOffsetSf640 = 11,
		dRXConfigSetupLongDRXCycleStartOffsetSf1024 = 12,
		dRXConfigSetupLongDRXCycleStartOffsetSf1280 = 13,
		dRXConfigSetupLongDRXCycleStartOffsetSf2048 = 14,
		dRXConfigSetupLongDRXCycleStartOffsetSf2560 = 15,
	};
	static const Info theInfo;
	DRXConfigSetupLongDRXCycleStartOffset(): Choice(&theInfo) {}
};

enum DRXConfigSetupShortDRXshortDRX_CycleValues {
	sf2_DRXConfigSetupShortDRXshortDRX_Cycle = 0,
	sf5_DRXConfigSetupShortDRXshortDRX_Cycle = 1,
	sf8_DRXConfigSetupShortDRXshortDRX_Cycle = 2,
	sf10_DRXConfigSetupShortDRXshortDRX_Cycle = 3,
	sf16_DRXConfigSetupShortDRXshortDRX_Cycle = 4,
	sf20_DRXConfigSetupShortDRXshortDRX_Cycle = 5,
	sf32_DRXConfigSetupShortDRXshortDRX_Cycle = 6,
	sf40_DRXConfigSetupShortDRXshortDRX_Cycle = 7,
	sf64_DRXConfigSetupShortDRXshortDRX_Cycle = 8,
	sf80_DRXConfigSetupShortDRXshortDRX_Cycle = 9,
	sf128_DRXConfigSetupShortDRXshortDRX_Cycle = 10,
	sf160_DRXConfigSetupShortDRXshortDRX_Cycle = 11,
	sf256_DRXConfigSetupShortDRXshortDRX_Cycle = 12,
	sf320_DRXConfigSetupShortDRXshortDRX_Cycle = 13,
	sf512_DRXConfigSetupShortDRXshortDRX_Cycle = 14,
	sf640_DRXConfigSetupShortDRXshortDRX_Cycle = 15,
};
typedef Enumerated<CONSTRAINED, 15> DRXConfigSetupShortDRXshortDRX_Cycle;

typedef Integer<CONSTRAINED, 1, 16> DRXConfigSetupShortDRXDrxShortCycleTimer;

class DRXConfigSetupShortDRX : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DRXConfigSetupShortDRX(): Sequence(&theInfo) {}
	DRXConfigSetupShortDRX(const DRXConfigSetupShortDRXshortDRX_Cycle& dRXConfigSetupShortDRXshortDRX_Cycle, const DRXConfigSetupShortDRXDrxShortCycleTimer& dRXConfigSetupShortDRXDrxShortCycleTimer);

	void setDRXConfigSetupShortDRXshortDRX_Cycle(const DRXConfigSetupShortDRXshortDRX_Cycle& dRXConfigSetupShortDRXshortDRX_Cycle) { *static_cast<DRXConfigSetupShortDRXshortDRX_Cycle*>(items[0]) = dRXConfigSetupShortDRXshortDRX_Cycle; }
	void setDRXConfigSetupShortDRXDrxShortCycleTimer(const DRXConfigSetupShortDRXDrxShortCycleTimer& dRXConfigSetupShortDRXDrxShortCycleTimer) { *static_cast<DRXConfigSetupShortDRXDrxShortCycleTimer*>(items[1]) = dRXConfigSetupShortDRXDrxShortCycleTimer; }

	DRXConfigSetupShortDRXshortDRX_Cycle& getDRXConfigSetupShortDRXshortDRX_Cycle() { return *static_cast<DRXConfigSetupShortDRXshortDRX_Cycle*>(items[0]); }
	DRXConfigSetupShortDRXDrxShortCycleTimer& getDRXConfigSetupShortDRXDrxShortCycleTimer() { return *static_cast<DRXConfigSetupShortDRXDrxShortCycleTimer*>(items[1]); }
};

class DRXConfigSetup : public Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	DRXConfigSetup(): Sequence(&theInfo) {}
	DRXConfigSetup(const DRXConfigSetuponDurationTimer& dRXConfigSetuponDurationTimer, const DRXConfigSetupdrx_InactivityTimer& dRXConfigSetupdrx_InactivityTimer, const DRXConfigSetupdrx_RetransmissionTimer& dRXConfigSetupdrx_RetransmissionTimer, const DRXConfigSetupLongDRXCycleStartOffset& dRXConfigSetupLongDRXCycleStartOffset);

	void setDRXConfigSetuponDurationTimer(const DRXConfigSetuponDurationTimer& dRXConfigSetuponDurationTimer) { *static_cast<DRXConfigSetuponDurationTimer*>(items[0]) = dRXConfigSetuponDurationTimer; }
	void setDRXConfigSetupdrx_InactivityTimer(const DRXConfigSetupdrx_InactivityTimer& dRXConfigSetupdrx_InactivityTimer) { *static_cast<DRXConfigSetupdrx_InactivityTimer*>(items[1]) = dRXConfigSetupdrx_InactivityTimer; }
	void setDRXConfigSetupdrx_RetransmissionTimer(const DRXConfigSetupdrx_RetransmissionTimer& dRXConfigSetupdrx_RetransmissionTimer) { *static_cast<DRXConfigSetupdrx_RetransmissionTimer*>(items[2]) = dRXConfigSetupdrx_RetransmissionTimer; }
	void setDRXConfigSetupLongDRXCycleStartOffset(const DRXConfigSetupLongDRXCycleStartOffset& dRXConfigSetupLongDRXCycleStartOffset) { *static_cast<DRXConfigSetupLongDRXCycleStartOffset*>(items[3]) = dRXConfigSetupLongDRXCycleStartOffset; }
	void setDRXConfigSetupShortDRX(const DRXConfigSetupShortDRX& dRXConfigSetupShortDRX) { *static_cast<DRXConfigSetupShortDRX*>(items[4]) = dRXConfigSetupShortDRX; }

	DRXConfigSetuponDurationTimer& getDRXConfigSetuponDurationTimer() { return *static_cast<DRXConfigSetuponDurationTimer*>(items[0]); }
	DRXConfigSetupdrx_InactivityTimer& getDRXConfigSetupdrx_InactivityTimer() { return *static_cast<DRXConfigSetupdrx_InactivityTimer*>(items[1]); }
	DRXConfigSetupdrx_RetransmissionTimer& getDRXConfigSetupdrx_RetransmissionTimer() { return *static_cast<DRXConfigSetupdrx_RetransmissionTimer*>(items[2]); }
	DRXConfigSetupLongDRXCycleStartOffset& getDRXConfigSetupLongDRXCycleStartOffset() { return *static_cast<DRXConfigSetupLongDRXCycleStartOffset*>(items[3]); }
	DRXConfigSetupShortDRX& getDRXConfigSetupShortDRX() { return *static_cast<DRXConfigSetupShortDRX*>(items[4]); }
};

class DRXConfig : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum DRXConfigChoices {
		dRXConfigRelease = 0,
		dRXConfigSetup = 1,
	};
	static const Info theInfo;
	DRXConfig(): Choice(&theInfo) {}
};

enum TimeAlignmentTimerValues {
	sf500_TimeAlignmentTimer = 0,
	sf750_TimeAlignmentTimer = 1,
	sf1280_TimeAlignmentTimer = 2,
	sf1920_TimeAlignmentTimer = 3,
	sf2560_TimeAlignmentTimer = 4,
	sf5120_TimeAlignmentTimer = 5,
	sf10240_TimeAlignmentTimer = 6,
	infinity_TimeAlignmentTimer = 7,
};
typedef Enumerated<CONSTRAINED, 7> TimeAlignmentTimer;

typedef Null MACMainConfigPhrConfigRelease;

enum MACMainConfigPhrConfigSetupperiodicPHR_TimerValues {
	sf10_MACMainConfigPhrConfigSetupperiodicPHR_Timer = 0,
	sf20_MACMainConfigPhrConfigSetupperiodicPHR_Timer = 1,
	sf50_MACMainConfigPhrConfigSetupperiodicPHR_Timer = 2,
	sf100_MACMainConfigPhrConfigSetupperiodicPHR_Timer = 3,
	sf200_MACMainConfigPhrConfigSetupperiodicPHR_Timer = 4,
	sf500_MACMainConfigPhrConfigSetupperiodicPHR_Timer = 5,
	sf1000_MACMainConfigPhrConfigSetupperiodicPHR_Timer = 6,
	infinity_MACMainConfigPhrConfigSetupperiodicPHR_Timer = 7,
};
typedef Enumerated<CONSTRAINED, 7> MACMainConfigPhrConfigSetupperiodicPHR_Timer;

enum MACMainConfigPhrConfigSetupprohibitPHR_TimerValues {
	sf0_MACMainConfigPhrConfigSetupprohibitPHR_Timer = 0,
	sf10_MACMainConfigPhrConfigSetupprohibitPHR_Timer = 1,
	sf20_MACMainConfigPhrConfigSetupprohibitPHR_Timer = 2,
	sf50_MACMainConfigPhrConfigSetupprohibitPHR_Timer = 3,
	sf100_MACMainConfigPhrConfigSetupprohibitPHR_Timer = 4,
	sf200_MACMainConfigPhrConfigSetupprohibitPHR_Timer = 5,
	sf500_MACMainConfigPhrConfigSetupprohibitPHR_Timer = 6,
	sf1000_MACMainConfigPhrConfigSetupprohibitPHR_Timer = 7,
};
typedef Enumerated<CONSTRAINED, 7> MACMainConfigPhrConfigSetupprohibitPHR_Timer;

enum MACMainConfigPhrConfigSetupdl_PathlossChangeValues {
	dB1_MACMainConfigPhrConfigSetupdl_PathlossChange = 0,
	dB3_MACMainConfigPhrConfigSetupdl_PathlossChange = 1,
	dB6_MACMainConfigPhrConfigSetupdl_PathlossChange = 2,
	infinity_MACMainConfigPhrConfigSetupdl_PathlossChange = 3,
};
typedef Enumerated<CONSTRAINED, 3> MACMainConfigPhrConfigSetupdl_PathlossChange;

class MACMainConfigPhrConfigSetup : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	MACMainConfigPhrConfigSetup(): Sequence(&theInfo) {}
	MACMainConfigPhrConfigSetup(const MACMainConfigPhrConfigSetupperiodicPHR_Timer& mACMainConfigPhrConfigSetupperiodicPHR_Timer, const MACMainConfigPhrConfigSetupprohibitPHR_Timer& mACMainConfigPhrConfigSetupprohibitPHR_Timer, const MACMainConfigPhrConfigSetupdl_PathlossChange& mACMainConfigPhrConfigSetupdl_PathlossChange);

	void setMACMainConfigPhrConfigSetupperiodicPHR_Timer(const MACMainConfigPhrConfigSetupperiodicPHR_Timer& mACMainConfigPhrConfigSetupperiodicPHR_Timer) { *static_cast<MACMainConfigPhrConfigSetupperiodicPHR_Timer*>(items[0]) = mACMainConfigPhrConfigSetupperiodicPHR_Timer; }
	void setMACMainConfigPhrConfigSetupprohibitPHR_Timer(const MACMainConfigPhrConfigSetupprohibitPHR_Timer& mACMainConfigPhrConfigSetupprohibitPHR_Timer) { *static_cast<MACMainConfigPhrConfigSetupprohibitPHR_Timer*>(items[1]) = mACMainConfigPhrConfigSetupprohibitPHR_Timer; }
	void setMACMainConfigPhrConfigSetupdl_PathlossChange(const MACMainConfigPhrConfigSetupdl_PathlossChange& mACMainConfigPhrConfigSetupdl_PathlossChange) { *static_cast<MACMainConfigPhrConfigSetupdl_PathlossChange*>(items[2]) = mACMainConfigPhrConfigSetupdl_PathlossChange; }

	MACMainConfigPhrConfigSetupperiodicPHR_Timer& getMACMainConfigPhrConfigSetupperiodicPHR_Timer() { return *static_cast<MACMainConfigPhrConfigSetupperiodicPHR_Timer*>(items[0]); }
	MACMainConfigPhrConfigSetupprohibitPHR_Timer& getMACMainConfigPhrConfigSetupprohibitPHR_Timer() { return *static_cast<MACMainConfigPhrConfigSetupprohibitPHR_Timer*>(items[1]); }
	MACMainConfigPhrConfigSetupdl_PathlossChange& getMACMainConfigPhrConfigSetupdl_PathlossChange() { return *static_cast<MACMainConfigPhrConfigSetupdl_PathlossChange*>(items[2]); }
};

class MACMainConfigPhrConfig : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum MACMainConfigPhrConfigChoices {
		mACMainConfigPhrConfigRelease = 0,
		mACMainConfigPhrConfigSetup = 1,
	};
	static const Info theInfo;
	MACMainConfigPhrConfig(): Choice(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 7> MACMainConfigSrProhibitTimerr9;

enum MACMainConfigMacMainConfigv1020sCellDeactivationTimer_r10Values {
	rf2_MACMainConfigMacMainConfigv1020sCellDeactivationTimer_r10 = 0,
	rf4_MACMainConfigMacMainConfigv1020sCellDeactivationTimer_r10 = 1,
	rf8_MACMainConfigMacMainConfigv1020sCellDeactivationTimer_r10 = 2,
	rf16_MACMainConfigMacMainConfigv1020sCellDeactivationTimer_r10 = 3,
	rf32_MACMainConfigMacMainConfigv1020sCellDeactivationTimer_r10 = 4,
	rf64_MACMainConfigMacMainConfigv1020sCellDeactivationTimer_r10 = 5,
	rf128_MACMainConfigMacMainConfigv1020sCellDeactivationTimer_r10 = 6,
	spare_MACMainConfigMacMainConfigv1020sCellDeactivationTimer_r10 = 7,
};
typedef Enumerated<CONSTRAINED, 7> MACMainConfigMacMainConfigv1020sCellDeactivationTimer_r10;

enum MACMainConfigMacMainConfigv1020extendedBSR_Sizes_r10Values {
	setup_MACMainConfigMacMainConfigv1020extendedBSR_Sizes_r10 = 0,
};
typedef Enumerated<CONSTRAINED, 0> MACMainConfigMacMainConfigv1020extendedBSR_Sizes_r10;

enum MACMainConfigMacMainConfigv1020extendedPHR_r10Values {
	setup_MACMainConfigMacMainConfigv1020extendedPHR_r10 = 0,
};
typedef Enumerated<CONSTRAINED, 0> MACMainConfigMacMainConfigv1020extendedPHR_r10;

class MACMainConfigMacMainConfigv1020 : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	MACMainConfigMacMainConfigv1020(): Sequence(&theInfo) {}

	void setMACMainConfigMacMainConfigv1020sCellDeactivationTimer_r10(const MACMainConfigMacMainConfigv1020sCellDeactivationTimer_r10& mACMainConfigMacMainConfigv1020sCellDeactivationTimer_r10) { *static_cast<MACMainConfigMacMainConfigv1020sCellDeactivationTimer_r10*>(items[0]) = mACMainConfigMacMainConfigv1020sCellDeactivationTimer_r10; }
	void setMACMainConfigMacMainConfigv1020extendedBSR_Sizes_r10(const MACMainConfigMacMainConfigv1020extendedBSR_Sizes_r10& mACMainConfigMacMainConfigv1020extendedBSR_Sizes_r10) { *static_cast<MACMainConfigMacMainConfigv1020extendedBSR_Sizes_r10*>(items[1]) = mACMainConfigMacMainConfigv1020extendedBSR_Sizes_r10; }
	void setMACMainConfigMacMainConfigv1020extendedPHR_r10(const MACMainConfigMacMainConfigv1020extendedPHR_r10& mACMainConfigMacMainConfigv1020extendedPHR_r10) { *static_cast<MACMainConfigMacMainConfigv1020extendedPHR_r10*>(items[2]) = mACMainConfigMacMainConfigv1020extendedPHR_r10; }

	MACMainConfigMacMainConfigv1020sCellDeactivationTimer_r10& getMACMainConfigMacMainConfigv1020sCellDeactivationTimer_r10() { return *static_cast<MACMainConfigMacMainConfigv1020sCellDeactivationTimer_r10*>(items[0]); }
	MACMainConfigMacMainConfigv1020extendedBSR_Sizes_r10& getMACMainConfigMacMainConfigv1020extendedBSR_Sizes_r10() { return *static_cast<MACMainConfigMacMainConfigv1020extendedBSR_Sizes_r10*>(items[1]); }
	MACMainConfigMacMainConfigv1020extendedPHR_r10& getMACMainConfigMacMainConfigv1020extendedPHR_r10() { return *static_cast<MACMainConfigMacMainConfigv1020extendedPHR_r10*>(items[2]); }
};

class MACMainConfig : public Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	MACMainConfig(): Sequence(&theInfo) {}
	MACMainConfig(const TimeAlignmentTimer& timeAlignmentTimerDedicated);

	void setMACMainConfigUlSCHConfig(const MACMainConfigUlSCHConfig& mACMainConfigUlSCHConfig) { *static_cast<MACMainConfigUlSCHConfig*>(items[0]) = mACMainConfigUlSCHConfig; }
	void setDrxConfig(const DRXConfig& drxConfig) { *static_cast<DRXConfig*>(items[1]) = drxConfig; }
	void setTimeAlignmentTimerDedicated(const TimeAlignmentTimer& timeAlignmentTimerDedicated) { *static_cast<TimeAlignmentTimer*>(items[2]) = timeAlignmentTimerDedicated; }
	void setMACMainConfigPhrConfig(const MACMainConfigPhrConfig& mACMainConfigPhrConfig) { *static_cast<MACMainConfigPhrConfig*>(items[3]) = mACMainConfigPhrConfig; }
	void setMACMainConfigSrProhibitTimerr9(const MACMainConfigSrProhibitTimerr9& mACMainConfigSrProhibitTimerr9) { *static_cast<MACMainConfigSrProhibitTimerr9*>(items[4]) = mACMainConfigSrProhibitTimerr9; }
	void setMACMainConfigMacMainConfigv1020(const MACMainConfigMacMainConfigv1020& mACMainConfigMacMainConfigv1020) { *static_cast<MACMainConfigMacMainConfigv1020*>(items[5]) = mACMainConfigMacMainConfigv1020; }

	MACMainConfigUlSCHConfig& getMACMainConfigUlSCHConfig() { return *static_cast<MACMainConfigUlSCHConfig*>(items[0]); }
	DRXConfig& getDrxConfig() { return *static_cast<DRXConfig*>(items[1]); }
	TimeAlignmentTimer& getTimeAlignmentTimerDedicated() { return *static_cast<TimeAlignmentTimer*>(items[2]); }
	MACMainConfigPhrConfig& getMACMainConfigPhrConfig() { return *static_cast<MACMainConfigPhrConfig*>(items[3]); }
	MACMainConfigSrProhibitTimerr9& getMACMainConfigSrProhibitTimerr9() { return *static_cast<MACMainConfigSrProhibitTimerr9*>(items[4]); }
	MACMainConfigMacMainConfigv1020& getMACMainConfigMacMainConfigv1020() { return *static_cast<MACMainConfigMacMainConfigv1020*>(items[5]); }
};

typedef Null RadioResourceConfigDedicatedMacMainConfigDefaultValue;

class RadioResourceConfigDedicatedMacMainConfig : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum RadioResourceConfigDedicatedMacMainConfigChoices {
		explicitValue = 0,
		radioResourceConfigDedicatedMacMainConfigDefaultValue = 1,
	};
	static const Info theInfo;
	RadioResourceConfigDedicatedMacMainConfig(): Choice(&theInfo) {}
};

typedef BitString<CONSTRAINED, 16, 16> CRNTI;

typedef Null SPSConfigDLRelease;

enum SPSConfigDLSetupsemiPersistSchedIntervalDLValues {
	sf10_SPSConfigDLSetupsemiPersistSchedIntervalDL = 0,
	sf20_SPSConfigDLSetupsemiPersistSchedIntervalDL = 1,
	sf32_SPSConfigDLSetupsemiPersistSchedIntervalDL = 2,
	sf40_SPSConfigDLSetupsemiPersistSchedIntervalDL = 3,
	sf64_SPSConfigDLSetupsemiPersistSchedIntervalDL = 4,
	sf80_SPSConfigDLSetupsemiPersistSchedIntervalDL = 5,
	sf128_SPSConfigDLSetupsemiPersistSchedIntervalDL = 6,
	sf160_SPSConfigDLSetupsemiPersistSchedIntervalDL = 7,
	sf320_SPSConfigDLSetupsemiPersistSchedIntervalDL = 8,
	sf640_SPSConfigDLSetupsemiPersistSchedIntervalDL = 9,
	spare6_SPSConfigDLSetupsemiPersistSchedIntervalDL = 10,
	spare5_SPSConfigDLSetupsemiPersistSchedIntervalDL = 11,
	spare4_SPSConfigDLSetupsemiPersistSchedIntervalDL = 12,
	spare3_SPSConfigDLSetupsemiPersistSchedIntervalDL = 13,
	spare2_SPSConfigDLSetupsemiPersistSchedIntervalDL = 14,
	spare1_SPSConfigDLSetupsemiPersistSchedIntervalDL = 15,
};
typedef Enumerated<CONSTRAINED, 15> SPSConfigDLSetupsemiPersistSchedIntervalDL;

typedef Integer<CONSTRAINED, 1, 8> SPSConfigDLSetupNumberOfConfSPSProcesses;

typedef Integer<CONSTRAINED, 0, 2047> N1PUCCHANPersistentListItem;

typedef SequenceOf<N1PUCCHANPersistentListItem, CONSTRAINED, 1, 4> N1PUCCHANPersistentList;

typedef Null SPSConfigDLSetupTwoAntennaPortActivatedr10Release;

class SPSConfigDLSetupTwoAntennaPortActivatedr10Setup : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SPSConfigDLSetupTwoAntennaPortActivatedr10Setup(): Sequence(&theInfo) {}
	SPSConfigDLSetupTwoAntennaPortActivatedr10Setup(const N1PUCCHANPersistentList& n1PUCCHANPersistentListP1r10);

	void setN1PUCCHANPersistentListP1r10(const N1PUCCHANPersistentList& n1PUCCHANPersistentListP1r10) { *static_cast<N1PUCCHANPersistentList*>(items[0]) = n1PUCCHANPersistentListP1r10; }

	N1PUCCHANPersistentList& getN1PUCCHANPersistentListP1r10() { return *static_cast<N1PUCCHANPersistentList*>(items[0]); }
};

class SPSConfigDLSetupTwoAntennaPortActivatedr10 : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum SPSConfigDLSetupTwoAntennaPortActivatedr10Choices {
		sPSConfigDLSetupTwoAntennaPortActivatedr10Release = 0,
		sPSConfigDLSetupTwoAntennaPortActivatedr10Setup = 1,
	};
	static const Info theInfo;
	SPSConfigDLSetupTwoAntennaPortActivatedr10(): Choice(&theInfo) {}
};

class SPSConfigDLSetup : public Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	SPSConfigDLSetup(): Sequence(&theInfo) {}
	SPSConfigDLSetup(const SPSConfigDLSetupsemiPersistSchedIntervalDL& sPSConfigDLSetupsemiPersistSchedIntervalDL, const SPSConfigDLSetupNumberOfConfSPSProcesses& sPSConfigDLSetupNumberOfConfSPSProcesses, const N1PUCCHANPersistentList& n1PUCCHANPersistentList);

	void setSPSConfigDLSetupsemiPersistSchedIntervalDL(const SPSConfigDLSetupsemiPersistSchedIntervalDL& sPSConfigDLSetupsemiPersistSchedIntervalDL) { *static_cast<SPSConfigDLSetupsemiPersistSchedIntervalDL*>(items[0]) = sPSConfigDLSetupsemiPersistSchedIntervalDL; }
	void setSPSConfigDLSetupNumberOfConfSPSProcesses(const SPSConfigDLSetupNumberOfConfSPSProcesses& sPSConfigDLSetupNumberOfConfSPSProcesses) { *static_cast<SPSConfigDLSetupNumberOfConfSPSProcesses*>(items[1]) = sPSConfigDLSetupNumberOfConfSPSProcesses; }
	void setN1PUCCHANPersistentList(const N1PUCCHANPersistentList& n1PUCCHANPersistentList) { *static_cast<N1PUCCHANPersistentList*>(items[2]) = n1PUCCHANPersistentList; }
	void setSPSConfigDLSetupTwoAntennaPortActivatedr10(const SPSConfigDLSetupTwoAntennaPortActivatedr10& sPSConfigDLSetupTwoAntennaPortActivatedr10) { *static_cast<SPSConfigDLSetupTwoAntennaPortActivatedr10*>(items[3]) = sPSConfigDLSetupTwoAntennaPortActivatedr10; }

	SPSConfigDLSetupsemiPersistSchedIntervalDL& getSPSConfigDLSetupsemiPersistSchedIntervalDL() { return *static_cast<SPSConfigDLSetupsemiPersistSchedIntervalDL*>(items[0]); }
	SPSConfigDLSetupNumberOfConfSPSProcesses& getSPSConfigDLSetupNumberOfConfSPSProcesses() { return *static_cast<SPSConfigDLSetupNumberOfConfSPSProcesses*>(items[1]); }
	N1PUCCHANPersistentList& getN1PUCCHANPersistentList() { return *static_cast<N1PUCCHANPersistentList*>(items[2]); }
	SPSConfigDLSetupTwoAntennaPortActivatedr10& getSPSConfigDLSetupTwoAntennaPortActivatedr10() { return *static_cast<SPSConfigDLSetupTwoAntennaPortActivatedr10*>(items[3]); }
};

class SPSConfigDL : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum SPSConfigDLChoices {
		sPSConfigDLRelease = 0,
		sPSConfigDLSetup = 1,
	};
	static const Info theInfo;
	SPSConfigDL(): Choice(&theInfo) {}
};

typedef Null SPSConfigULRelease;

enum SPSConfigULSetupsemiPersistSchedIntervalULValues {
	sf10_SPSConfigULSetupsemiPersistSchedIntervalUL = 0,
	sf20_SPSConfigULSetupsemiPersistSchedIntervalUL = 1,
	sf32_SPSConfigULSetupsemiPersistSchedIntervalUL = 2,
	sf40_SPSConfigULSetupsemiPersistSchedIntervalUL = 3,
	sf64_SPSConfigULSetupsemiPersistSchedIntervalUL = 4,
	sf80_SPSConfigULSetupsemiPersistSchedIntervalUL = 5,
	sf128_SPSConfigULSetupsemiPersistSchedIntervalUL = 6,
	sf160_SPSConfigULSetupsemiPersistSchedIntervalUL = 7,
	sf320_SPSConfigULSetupsemiPersistSchedIntervalUL = 8,
	sf640_SPSConfigULSetupsemiPersistSchedIntervalUL = 9,
	spare6_SPSConfigULSetupsemiPersistSchedIntervalUL = 10,
	spare5_SPSConfigULSetupsemiPersistSchedIntervalUL = 11,
	spare4_SPSConfigULSetupsemiPersistSchedIntervalUL = 12,
	spare3_SPSConfigULSetupsemiPersistSchedIntervalUL = 13,
	spare2_SPSConfigULSetupsemiPersistSchedIntervalUL = 14,
	spare1_SPSConfigULSetupsemiPersistSchedIntervalUL = 15,
};
typedef Enumerated<CONSTRAINED, 15> SPSConfigULSetupsemiPersistSchedIntervalUL;

enum SPSConfigULSetupimplicitReleaseAfterValues {
	e2_SPSConfigULSetupimplicitReleaseAfter = 0,
	e3_SPSConfigULSetupimplicitReleaseAfter = 1,
	e4_SPSConfigULSetupimplicitReleaseAfter = 2,
	e8_SPSConfigULSetupimplicitReleaseAfter = 3,
};
typedef Enumerated<CONSTRAINED, 3> SPSConfigULSetupimplicitReleaseAfter;

typedef Integer<CONSTRAINED, -126, 24> SPSConfigULSetupP0PersistentP0NominalPUSCHPersistent;

typedef Integer<CONSTRAINED, -8, 7> SPSConfigULSetupP0PersistentP0UEPUSCHPersistent;

class SPSConfigULSetupP0Persistent : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SPSConfigULSetupP0Persistent(): Sequence(&theInfo) {}
	SPSConfigULSetupP0Persistent(const SPSConfigULSetupP0PersistentP0NominalPUSCHPersistent& sPSConfigULSetupP0PersistentP0NominalPUSCHPersistent, const SPSConfigULSetupP0PersistentP0UEPUSCHPersistent& sPSConfigULSetupP0PersistentP0UEPUSCHPersistent);

	void setSPSConfigULSetupP0PersistentP0NominalPUSCHPersistent(const SPSConfigULSetupP0PersistentP0NominalPUSCHPersistent& sPSConfigULSetupP0PersistentP0NominalPUSCHPersistent) { *static_cast<SPSConfigULSetupP0PersistentP0NominalPUSCHPersistent*>(items[0]) = sPSConfigULSetupP0PersistentP0NominalPUSCHPersistent; }
	void setSPSConfigULSetupP0PersistentP0UEPUSCHPersistent(const SPSConfigULSetupP0PersistentP0UEPUSCHPersistent& sPSConfigULSetupP0PersistentP0UEPUSCHPersistent) { *static_cast<SPSConfigULSetupP0PersistentP0UEPUSCHPersistent*>(items[1]) = sPSConfigULSetupP0PersistentP0UEPUSCHPersistent; }

	SPSConfigULSetupP0PersistentP0NominalPUSCHPersistent& getSPSConfigULSetupP0PersistentP0NominalPUSCHPersistent() { return *static_cast<SPSConfigULSetupP0PersistentP0NominalPUSCHPersistent*>(items[0]); }
	SPSConfigULSetupP0PersistentP0UEPUSCHPersistent& getSPSConfigULSetupP0PersistentP0UEPUSCHPersistent() { return *static_cast<SPSConfigULSetupP0PersistentP0UEPUSCHPersistent*>(items[1]); }
};

enum SPSConfigULSetuptwoIntervalsConfigValues {
	true_SPSConfigULSetuptwoIntervalsConfig = 0,
};
typedef Enumerated<CONSTRAINED, 0> SPSConfigULSetuptwoIntervalsConfig;

class SPSConfigULSetup : public Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	SPSConfigULSetup(): Sequence(&theInfo) {}
	SPSConfigULSetup(const SPSConfigULSetupsemiPersistSchedIntervalUL& sPSConfigULSetupsemiPersistSchedIntervalUL, const SPSConfigULSetupimplicitReleaseAfter& sPSConfigULSetupimplicitReleaseAfter);

	void setSPSConfigULSetupsemiPersistSchedIntervalUL(const SPSConfigULSetupsemiPersistSchedIntervalUL& sPSConfigULSetupsemiPersistSchedIntervalUL) { *static_cast<SPSConfigULSetupsemiPersistSchedIntervalUL*>(items[0]) = sPSConfigULSetupsemiPersistSchedIntervalUL; }
	void setSPSConfigULSetupimplicitReleaseAfter(const SPSConfigULSetupimplicitReleaseAfter& sPSConfigULSetupimplicitReleaseAfter) { *static_cast<SPSConfigULSetupimplicitReleaseAfter*>(items[1]) = sPSConfigULSetupimplicitReleaseAfter; }
	void setSPSConfigULSetupP0Persistent(const SPSConfigULSetupP0Persistent& sPSConfigULSetupP0Persistent) { *static_cast<SPSConfigULSetupP0Persistent*>(items[2]) = sPSConfigULSetupP0Persistent; }
	void setSPSConfigULSetuptwoIntervalsConfig(const SPSConfigULSetuptwoIntervalsConfig& sPSConfigULSetuptwoIntervalsConfig) { *static_cast<SPSConfigULSetuptwoIntervalsConfig*>(items[3]) = sPSConfigULSetuptwoIntervalsConfig; }

	SPSConfigULSetupsemiPersistSchedIntervalUL& getSPSConfigULSetupsemiPersistSchedIntervalUL() { return *static_cast<SPSConfigULSetupsemiPersistSchedIntervalUL*>(items[0]); }
	SPSConfigULSetupimplicitReleaseAfter& getSPSConfigULSetupimplicitReleaseAfter() { return *static_cast<SPSConfigULSetupimplicitReleaseAfter*>(items[1]); }
	SPSConfigULSetupP0Persistent& getSPSConfigULSetupP0Persistent() { return *static_cast<SPSConfigULSetupP0Persistent*>(items[2]); }
	SPSConfigULSetuptwoIntervalsConfig& getSPSConfigULSetuptwoIntervalsConfig() { return *static_cast<SPSConfigULSetuptwoIntervalsConfig*>(items[3]); }
};

class SPSConfigUL : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum SPSConfigULChoices {
		sPSConfigULRelease = 0,
		sPSConfigULSetup = 1,
	};
	static const Info theInfo;
	SPSConfigUL(): Choice(&theInfo) {}
};

class SPSConfig : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	SPSConfig(): Sequence(&theInfo) {}

	void setSemiPersistSchedCRNTI(const CRNTI& semiPersistSchedCRNTI) { *static_cast<CRNTI*>(items[0]) = semiPersistSchedCRNTI; }
	void setSpsConfigDL(const SPSConfigDL& spsConfigDL) { *static_cast<SPSConfigDL*>(items[1]) = spsConfigDL; }
	void setSpsConfigUL(const SPSConfigUL& spsConfigUL) { *static_cast<SPSConfigUL*>(items[2]) = spsConfigUL; }

	CRNTI& getSemiPersistSchedCRNTI() { return *static_cast<CRNTI*>(items[0]); }
	SPSConfigDL& getSpsConfigDL() { return *static_cast<SPSConfigDL*>(items[1]); }
	SPSConfigUL& getSpsConfigUL() { return *static_cast<SPSConfigUL*>(items[2]); }
};

enum PDSCHConfigDedicatedp_aValues {
	dB_6_PDSCHConfigDedicatedp_a = 0,
	dB_4dot77_PDSCHConfigDedicatedp_a = 1,
	dB_3_PDSCHConfigDedicatedp_a = 2,
	dB_1dot77_PDSCHConfigDedicatedp_a = 3,
	dB0_PDSCHConfigDedicatedp_a = 4,
	dB1_PDSCHConfigDedicatedp_a = 5,
	dB2_PDSCHConfigDedicatedp_a = 6,
	dB3_PDSCHConfigDedicatedp_a = 7,
};
typedef Enumerated<CONSTRAINED, 7> PDSCHConfigDedicatedp_a;

class PDSCHConfigDedicated : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PDSCHConfigDedicated(): Sequence(&theInfo) {}
	PDSCHConfigDedicated(const PDSCHConfigDedicatedp_a& pDSCHConfigDedicatedp_a);

	void setPDSCHConfigDedicatedp_a(const PDSCHConfigDedicatedp_a& pDSCHConfigDedicatedp_a) { *static_cast<PDSCHConfigDedicatedp_a*>(items[0]) = pDSCHConfigDedicatedp_a; }

	PDSCHConfigDedicatedp_a& getPDSCHConfigDedicatedp_a() { return *static_cast<PDSCHConfigDedicatedp_a*>(items[0]); }
};

typedef Null PUCCHConfigDedicatedAckNackRepetitionRelease;

enum PUCCHConfigDedicatedAckNackRepetitionSetuprepetitionFactorValues {
	n2_PUCCHConfigDedicatedAckNackRepetitionSetuprepetitionFactor = 0,
	n4_PUCCHConfigDedicatedAckNackRepetitionSetuprepetitionFactor = 1,
	n6_PUCCHConfigDedicatedAckNackRepetitionSetuprepetitionFactor = 2,
	spare1_PUCCHConfigDedicatedAckNackRepetitionSetuprepetitionFactor = 3,
};
typedef Enumerated<CONSTRAINED, 3> PUCCHConfigDedicatedAckNackRepetitionSetuprepetitionFactor;

typedef Integer<CONSTRAINED, 0, 2047> PUCCHConfigDedicatedAckNackRepetitionSetupN1PUCCHANRep;

class PUCCHConfigDedicatedAckNackRepetitionSetup : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PUCCHConfigDedicatedAckNackRepetitionSetup(): Sequence(&theInfo) {}
	PUCCHConfigDedicatedAckNackRepetitionSetup(const PUCCHConfigDedicatedAckNackRepetitionSetuprepetitionFactor& pUCCHConfigDedicatedAckNackRepetitionSetuprepetitionFactor, const PUCCHConfigDedicatedAckNackRepetitionSetupN1PUCCHANRep& pUCCHConfigDedicatedAckNackRepetitionSetupN1PUCCHANRep);

	void setPUCCHConfigDedicatedAckNackRepetitionSetuprepetitionFactor(const PUCCHConfigDedicatedAckNackRepetitionSetuprepetitionFactor& pUCCHConfigDedicatedAckNackRepetitionSetuprepetitionFactor) { *static_cast<PUCCHConfigDedicatedAckNackRepetitionSetuprepetitionFactor*>(items[0]) = pUCCHConfigDedicatedAckNackRepetitionSetuprepetitionFactor; }
	void setPUCCHConfigDedicatedAckNackRepetitionSetupN1PUCCHANRep(const PUCCHConfigDedicatedAckNackRepetitionSetupN1PUCCHANRep& pUCCHConfigDedicatedAckNackRepetitionSetupN1PUCCHANRep) { *static_cast<PUCCHConfigDedicatedAckNackRepetitionSetupN1PUCCHANRep*>(items[1]) = pUCCHConfigDedicatedAckNackRepetitionSetupN1PUCCHANRep; }

	PUCCHConfigDedicatedAckNackRepetitionSetuprepetitionFactor& getPUCCHConfigDedicatedAckNackRepetitionSetuprepetitionFactor() { return *static_cast<PUCCHConfigDedicatedAckNackRepetitionSetuprepetitionFactor*>(items[0]); }
	PUCCHConfigDedicatedAckNackRepetitionSetupN1PUCCHANRep& getPUCCHConfigDedicatedAckNackRepetitionSetupN1PUCCHANRep() { return *static_cast<PUCCHConfigDedicatedAckNackRepetitionSetupN1PUCCHANRep*>(items[1]); }
};

class PUCCHConfigDedicatedAckNackRepetition : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum PUCCHConfigDedicatedAckNackRepetitionChoices {
		pUCCHConfigDedicatedAckNackRepetitionRelease = 0,
		pUCCHConfigDedicatedAckNackRepetitionSetup = 1,
	};
	static const Info theInfo;
	PUCCHConfigDedicatedAckNackRepetition(): Choice(&theInfo) {}
};

enum PUCCHConfigDedicatedtdd_AckNackFeedbackModeValues {
	bundling_PUCCHConfigDedicatedtdd_AckNackFeedbackMode = 0,
	multiplexing_PUCCHConfigDedicatedtdd_AckNackFeedbackMode = 1,
};
typedef Enumerated<CONSTRAINED, 1> PUCCHConfigDedicatedtdd_AckNackFeedbackMode;

class PUCCHConfigDedicated : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PUCCHConfigDedicated(): Sequence(&theInfo) {}
	PUCCHConfigDedicated(const PUCCHConfigDedicatedAckNackRepetition& pUCCHConfigDedicatedAckNackRepetition);

	void setPUCCHConfigDedicatedAckNackRepetition(const PUCCHConfigDedicatedAckNackRepetition& pUCCHConfigDedicatedAckNackRepetition) { *static_cast<PUCCHConfigDedicatedAckNackRepetition*>(items[0]) = pUCCHConfigDedicatedAckNackRepetition; }
	void setPUCCHConfigDedicatedtdd_AckNackFeedbackMode(const PUCCHConfigDedicatedtdd_AckNackFeedbackMode& pUCCHConfigDedicatedtdd_AckNackFeedbackMode) { *static_cast<PUCCHConfigDedicatedtdd_AckNackFeedbackMode*>(items[1]) = pUCCHConfigDedicatedtdd_AckNackFeedbackMode; }

	PUCCHConfigDedicatedAckNackRepetition& getPUCCHConfigDedicatedAckNackRepetition() { return *static_cast<PUCCHConfigDedicatedAckNackRepetition*>(items[0]); }
	PUCCHConfigDedicatedtdd_AckNackFeedbackMode& getPUCCHConfigDedicatedtdd_AckNackFeedbackMode() { return *static_cast<PUCCHConfigDedicatedtdd_AckNackFeedbackMode*>(items[1]); }
};

typedef Integer<CONSTRAINED, 0, 15> PUSCHConfigDedicatedBetaOffsetACKIndex;

typedef Integer<CONSTRAINED, 0, 15> PUSCHConfigDedicatedBetaOffsetRIIndex;

typedef Integer<CONSTRAINED, 0, 15> PUSCHConfigDedicatedBetaOffsetCQIIndex;

class PUSCHConfigDedicated : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PUSCHConfigDedicated(): Sequence(&theInfo) {}
	PUSCHConfigDedicated(const PUSCHConfigDedicatedBetaOffsetACKIndex& pUSCHConfigDedicatedBetaOffsetACKIndex, const PUSCHConfigDedicatedBetaOffsetRIIndex& pUSCHConfigDedicatedBetaOffsetRIIndex, const PUSCHConfigDedicatedBetaOffsetCQIIndex& pUSCHConfigDedicatedBetaOffsetCQIIndex);

	void setPUSCHConfigDedicatedBetaOffsetACKIndex(const PUSCHConfigDedicatedBetaOffsetACKIndex& pUSCHConfigDedicatedBetaOffsetACKIndex) { *static_cast<PUSCHConfigDedicatedBetaOffsetACKIndex*>(items[0]) = pUSCHConfigDedicatedBetaOffsetACKIndex; }
	void setPUSCHConfigDedicatedBetaOffsetRIIndex(const PUSCHConfigDedicatedBetaOffsetRIIndex& pUSCHConfigDedicatedBetaOffsetRIIndex) { *static_cast<PUSCHConfigDedicatedBetaOffsetRIIndex*>(items[1]) = pUSCHConfigDedicatedBetaOffsetRIIndex; }
	void setPUSCHConfigDedicatedBetaOffsetCQIIndex(const PUSCHConfigDedicatedBetaOffsetCQIIndex& pUSCHConfigDedicatedBetaOffsetCQIIndex) { *static_cast<PUSCHConfigDedicatedBetaOffsetCQIIndex*>(items[2]) = pUSCHConfigDedicatedBetaOffsetCQIIndex; }

	PUSCHConfigDedicatedBetaOffsetACKIndex& getPUSCHConfigDedicatedBetaOffsetACKIndex() { return *static_cast<PUSCHConfigDedicatedBetaOffsetACKIndex*>(items[0]); }
	PUSCHConfigDedicatedBetaOffsetRIIndex& getPUSCHConfigDedicatedBetaOffsetRIIndex() { return *static_cast<PUSCHConfigDedicatedBetaOffsetRIIndex*>(items[1]); }
	PUSCHConfigDedicatedBetaOffsetCQIIndex& getPUSCHConfigDedicatedBetaOffsetCQIIndex() { return *static_cast<PUSCHConfigDedicatedBetaOffsetCQIIndex*>(items[2]); }
};

typedef Integer<CONSTRAINED, -8, 7> UplinkPowerControlDedicatedP0UEPUSCH;

enum UplinkPowerControlDedicateddeltaMCS_EnabledValues {
	en0_UplinkPowerControlDedicateddeltaMCS_Enabled = 0,
	en1_UplinkPowerControlDedicateddeltaMCS_Enabled = 1,
};
typedef Enumerated<CONSTRAINED, 1> UplinkPowerControlDedicateddeltaMCS_Enabled;

typedef Boolean UplinkPowerControlDedicatedAccumulationEnabled;

typedef Integer<CONSTRAINED, -8, 7> UplinkPowerControlDedicatedP0UEPUCCH;

typedef Integer<CONSTRAINED, 0, 15> UplinkPowerControlDedicatedPSRSOffset;

enum FilterCoefficientValues {
	fc0_FilterCoefficient = 0,
	fc1_FilterCoefficient = 1,
	fc2_FilterCoefficient = 2,
	fc3_FilterCoefficient = 3,
	fc4_FilterCoefficient = 4,
	fc5_FilterCoefficient = 5,
	fc6_FilterCoefficient = 6,
	fc7_FilterCoefficient = 7,
	fc8_FilterCoefficient = 8,
	fc9_FilterCoefficient = 9,
	fc11_FilterCoefficient = 10,
	fc13_FilterCoefficient = 11,
	fc15_FilterCoefficient = 12,
	fc17_FilterCoefficient = 13,
	fc19_FilterCoefficient = 14,
	spare1_FilterCoefficient = 15,
};
typedef Enumerated<EXTCONSTRAINED, 15> FilterCoefficient;

class UplinkPowerControlDedicated : public Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	UplinkPowerControlDedicated(): Sequence(&theInfo) {}
	UplinkPowerControlDedicated(const UplinkPowerControlDedicatedP0UEPUSCH& uplinkPowerControlDedicatedP0UEPUSCH, const UplinkPowerControlDedicateddeltaMCS_Enabled& uplinkPowerControlDedicateddeltaMCS_Enabled, const UplinkPowerControlDedicatedAccumulationEnabled& uplinkPowerControlDedicatedAccumulationEnabled, const UplinkPowerControlDedicatedP0UEPUCCH& uplinkPowerControlDedicatedP0UEPUCCH, const UplinkPowerControlDedicatedPSRSOffset& uplinkPowerControlDedicatedPSRSOffset);

	void setUplinkPowerControlDedicatedP0UEPUSCH(const UplinkPowerControlDedicatedP0UEPUSCH& uplinkPowerControlDedicatedP0UEPUSCH) { *static_cast<UplinkPowerControlDedicatedP0UEPUSCH*>(items[0]) = uplinkPowerControlDedicatedP0UEPUSCH; }
	void setUplinkPowerControlDedicateddeltaMCS_Enabled(const UplinkPowerControlDedicateddeltaMCS_Enabled& uplinkPowerControlDedicateddeltaMCS_Enabled) { *static_cast<UplinkPowerControlDedicateddeltaMCS_Enabled*>(items[1]) = uplinkPowerControlDedicateddeltaMCS_Enabled; }
	void setUplinkPowerControlDedicatedAccumulationEnabled(const UplinkPowerControlDedicatedAccumulationEnabled& uplinkPowerControlDedicatedAccumulationEnabled) { *static_cast<UplinkPowerControlDedicatedAccumulationEnabled*>(items[2]) = uplinkPowerControlDedicatedAccumulationEnabled; }
	void setUplinkPowerControlDedicatedP0UEPUCCH(const UplinkPowerControlDedicatedP0UEPUCCH& uplinkPowerControlDedicatedP0UEPUCCH) { *static_cast<UplinkPowerControlDedicatedP0UEPUCCH*>(items[3]) = uplinkPowerControlDedicatedP0UEPUCCH; }
	void setUplinkPowerControlDedicatedPSRSOffset(const UplinkPowerControlDedicatedPSRSOffset& uplinkPowerControlDedicatedPSRSOffset) { *static_cast<UplinkPowerControlDedicatedPSRSOffset*>(items[4]) = uplinkPowerControlDedicatedPSRSOffset; }
	void setFilterCoefficient(const FilterCoefficient& filterCoefficient) { *static_cast<FilterCoefficient*>(items[5]) = filterCoefficient; }

	UplinkPowerControlDedicatedP0UEPUSCH& getUplinkPowerControlDedicatedP0UEPUSCH() { return *static_cast<UplinkPowerControlDedicatedP0UEPUSCH*>(items[0]); }
	UplinkPowerControlDedicateddeltaMCS_Enabled& getUplinkPowerControlDedicateddeltaMCS_Enabled() { return *static_cast<UplinkPowerControlDedicateddeltaMCS_Enabled*>(items[1]); }
	UplinkPowerControlDedicatedAccumulationEnabled& getUplinkPowerControlDedicatedAccumulationEnabled() { return *static_cast<UplinkPowerControlDedicatedAccumulationEnabled*>(items[2]); }
	UplinkPowerControlDedicatedP0UEPUCCH& getUplinkPowerControlDedicatedP0UEPUCCH() { return *static_cast<UplinkPowerControlDedicatedP0UEPUCCH*>(items[3]); }
	UplinkPowerControlDedicatedPSRSOffset& getUplinkPowerControlDedicatedPSRSOffset() { return *static_cast<UplinkPowerControlDedicatedPSRSOffset*>(items[4]); }
	FilterCoefficient& getFilterCoefficient() { return *static_cast<FilterCoefficient*>(items[5]); }
};

typedef Null TPCPDCCHConfigRelease;

typedef BitString<CONSTRAINED, 16, 16> TPCPDCCHConfigSetupTpcRNTI;

typedef Integer<CONSTRAINED, 1, 15> TPCIndexIndexOfFormat3;

typedef Integer<CONSTRAINED, 1, 31> TPCIndexIndexOfFormat3A;

class TPCIndex : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum TPCIndexChoices {
		tPCIndexIndexOfFormat3 = 0,
		tPCIndexIndexOfFormat3A = 1,
	};
	static const Info theInfo;
	TPCIndex(): Choice(&theInfo) {}
};

class TPCPDCCHConfigSetup : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TPCPDCCHConfigSetup(): Sequence(&theInfo) {}
	TPCPDCCHConfigSetup(const TPCPDCCHConfigSetupTpcRNTI& tPCPDCCHConfigSetupTpcRNTI, const TPCIndex& tpcIndex);

	void setTPCPDCCHConfigSetupTpcRNTI(const TPCPDCCHConfigSetupTpcRNTI& tPCPDCCHConfigSetupTpcRNTI) { *static_cast<TPCPDCCHConfigSetupTpcRNTI*>(items[0]) = tPCPDCCHConfigSetupTpcRNTI; }
	void setTpcIndex(const TPCIndex& tpcIndex) { *static_cast<TPCIndex*>(items[1]) = tpcIndex; }

	TPCPDCCHConfigSetupTpcRNTI& getTPCPDCCHConfigSetupTpcRNTI() { return *static_cast<TPCPDCCHConfigSetupTpcRNTI*>(items[0]); }
	TPCIndex& getTpcIndex() { return *static_cast<TPCIndex*>(items[1]); }
};

class TPCPDCCHConfig : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum TPCPDCCHConfigChoices {
		tPCPDCCHConfigRelease = 0,
		tPCPDCCHConfigSetup = 1,
	};
	static const Info theInfo;
	TPCPDCCHConfig(): Choice(&theInfo) {}
};

enum CQIReportModeAperiodicValues {
	rm12_CQIReportModeAperiodic = 0,
	rm20_CQIReportModeAperiodic = 1,
	rm22_CQIReportModeAperiodic = 2,
	rm30_CQIReportModeAperiodic = 3,
	rm31_CQIReportModeAperiodic = 4,
	spare3_CQIReportModeAperiodic = 5,
	spare2_CQIReportModeAperiodic = 6,
	spare1_CQIReportModeAperiodic = 7,
};
typedef Enumerated<CONSTRAINED, 7> CQIReportModeAperiodic;

typedef Integer<CONSTRAINED, -1, 6> CQIReportConfigNomPDSCHRSEPREOffset;

typedef Null CQIReportPeriodicRelease;

typedef Integer<CONSTRAINED, 0, 1185> CQIReportPeriodicSetupCqiPUCCHResourceIndex;

typedef Integer<CONSTRAINED, 0, 1023> CQIReportPeriodicSetupCqipmiConfigIndex;

typedef Null CQIReportPeriodicSetupCqiFormatIndicatorPeriodicWidebandCQI;

typedef Integer<CONSTRAINED, 1, 4> CQIReportPeriodicSetupCqiFormatIndicatorPeriodicSubbandCQIK;

class CQIReportPeriodicSetupCqiFormatIndicatorPeriodicSubbandCQI : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CQIReportPeriodicSetupCqiFormatIndicatorPeriodicSubbandCQI(): Sequence(&theInfo) {}
	CQIReportPeriodicSetupCqiFormatIndicatorPeriodicSubbandCQI(const CQIReportPeriodicSetupCqiFormatIndicatorPeriodicSubbandCQIK& cQIReportPeriodicSetupCqiFormatIndicatorPeriodicSubbandCQIK);

	void setCQIReportPeriodicSetupCqiFormatIndicatorPeriodicSubbandCQIK(const CQIReportPeriodicSetupCqiFormatIndicatorPeriodicSubbandCQIK& cQIReportPeriodicSetupCqiFormatIndicatorPeriodicSubbandCQIK) { *static_cast<CQIReportPeriodicSetupCqiFormatIndicatorPeriodicSubbandCQIK*>(items[0]) = cQIReportPeriodicSetupCqiFormatIndicatorPeriodicSubbandCQIK; }

	CQIReportPeriodicSetupCqiFormatIndicatorPeriodicSubbandCQIK& getCQIReportPeriodicSetupCqiFormatIndicatorPeriodicSubbandCQIK() { return *static_cast<CQIReportPeriodicSetupCqiFormatIndicatorPeriodicSubbandCQIK*>(items[0]); }
};

class CQIReportPeriodicSetupCqiFormatIndicatorPeriodic : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum CQIReportPeriodicSetupCqiFormatIndicatorPeriodicChoices {
		cQIReportPeriodicSetupCqiFormatIndicatorPeriodicWidebandCQI = 0,
		cQIReportPeriodicSetupCqiFormatIndicatorPeriodicSubbandCQI = 1,
	};
	static const Info theInfo;
	CQIReportPeriodicSetupCqiFormatIndicatorPeriodic(): Choice(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 1023> CQIReportPeriodicSetupRiConfigIndex;

typedef Boolean CQIReportPeriodicSetupSimultaneousAckNackAndCQI;

class CQIReportPeriodicSetup : public Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	CQIReportPeriodicSetup(): Sequence(&theInfo) {}
	CQIReportPeriodicSetup(const CQIReportPeriodicSetupCqiPUCCHResourceIndex& cQIReportPeriodicSetupCqiPUCCHResourceIndex, const CQIReportPeriodicSetupCqipmiConfigIndex& cQIReportPeriodicSetupCqipmiConfigIndex, const CQIReportPeriodicSetupCqiFormatIndicatorPeriodic& cQIReportPeriodicSetupCqiFormatIndicatorPeriodic, const CQIReportPeriodicSetupSimultaneousAckNackAndCQI& cQIReportPeriodicSetupSimultaneousAckNackAndCQI);

	void setCQIReportPeriodicSetupCqiPUCCHResourceIndex(const CQIReportPeriodicSetupCqiPUCCHResourceIndex& cQIReportPeriodicSetupCqiPUCCHResourceIndex) { *static_cast<CQIReportPeriodicSetupCqiPUCCHResourceIndex*>(items[0]) = cQIReportPeriodicSetupCqiPUCCHResourceIndex; }
	void setCQIReportPeriodicSetupCqipmiConfigIndex(const CQIReportPeriodicSetupCqipmiConfigIndex& cQIReportPeriodicSetupCqipmiConfigIndex) { *static_cast<CQIReportPeriodicSetupCqipmiConfigIndex*>(items[1]) = cQIReportPeriodicSetupCqipmiConfigIndex; }
	void setCQIReportPeriodicSetupCqiFormatIndicatorPeriodic(const CQIReportPeriodicSetupCqiFormatIndicatorPeriodic& cQIReportPeriodicSetupCqiFormatIndicatorPeriodic) { *static_cast<CQIReportPeriodicSetupCqiFormatIndicatorPeriodic*>(items[2]) = cQIReportPeriodicSetupCqiFormatIndicatorPeriodic; }
	void setCQIReportPeriodicSetupRiConfigIndex(const CQIReportPeriodicSetupRiConfigIndex& cQIReportPeriodicSetupRiConfigIndex) { *static_cast<CQIReportPeriodicSetupRiConfigIndex*>(items[3]) = cQIReportPeriodicSetupRiConfigIndex; }
	void setCQIReportPeriodicSetupSimultaneousAckNackAndCQI(const CQIReportPeriodicSetupSimultaneousAckNackAndCQI& cQIReportPeriodicSetupSimultaneousAckNackAndCQI) { *static_cast<CQIReportPeriodicSetupSimultaneousAckNackAndCQI*>(items[4]) = cQIReportPeriodicSetupSimultaneousAckNackAndCQI; }

	CQIReportPeriodicSetupCqiPUCCHResourceIndex& getCQIReportPeriodicSetupCqiPUCCHResourceIndex() { return *static_cast<CQIReportPeriodicSetupCqiPUCCHResourceIndex*>(items[0]); }
	CQIReportPeriodicSetupCqipmiConfigIndex& getCQIReportPeriodicSetupCqipmiConfigIndex() { return *static_cast<CQIReportPeriodicSetupCqipmiConfigIndex*>(items[1]); }
	CQIReportPeriodicSetupCqiFormatIndicatorPeriodic& getCQIReportPeriodicSetupCqiFormatIndicatorPeriodic() { return *static_cast<CQIReportPeriodicSetupCqiFormatIndicatorPeriodic*>(items[2]); }
	CQIReportPeriodicSetupRiConfigIndex& getCQIReportPeriodicSetupRiConfigIndex() { return *static_cast<CQIReportPeriodicSetupRiConfigIndex*>(items[3]); }
	CQIReportPeriodicSetupSimultaneousAckNackAndCQI& getCQIReportPeriodicSetupSimultaneousAckNackAndCQI() { return *static_cast<CQIReportPeriodicSetupSimultaneousAckNackAndCQI*>(items[4]); }
};

class CQIReportPeriodic : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum CQIReportPeriodicChoices {
		cQIReportPeriodicRelease = 0,
		cQIReportPeriodicSetup = 1,
	};
	static const Info theInfo;
	CQIReportPeriodic(): Choice(&theInfo) {}
};

class CQIReportConfig : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	CQIReportConfig(): Sequence(&theInfo) {}
	CQIReportConfig(const CQIReportConfigNomPDSCHRSEPREOffset& cQIReportConfigNomPDSCHRSEPREOffset);

	void setCqiReportModeAperiodic(const CQIReportModeAperiodic& cqiReportModeAperiodic) { *static_cast<CQIReportModeAperiodic*>(items[0]) = cqiReportModeAperiodic; }
	void setCQIReportConfigNomPDSCHRSEPREOffset(const CQIReportConfigNomPDSCHRSEPREOffset& cQIReportConfigNomPDSCHRSEPREOffset) { *static_cast<CQIReportConfigNomPDSCHRSEPREOffset*>(items[1]) = cQIReportConfigNomPDSCHRSEPREOffset; }
	void setCqiReportPeriodic(const CQIReportPeriodic& cqiReportPeriodic) { *static_cast<CQIReportPeriodic*>(items[2]) = cqiReportPeriodic; }

	CQIReportModeAperiodic& getCqiReportModeAperiodic() { return *static_cast<CQIReportModeAperiodic*>(items[0]); }
	CQIReportConfigNomPDSCHRSEPREOffset& getCQIReportConfigNomPDSCHRSEPREOffset() { return *static_cast<CQIReportConfigNomPDSCHRSEPREOffset*>(items[1]); }
	CQIReportPeriodic& getCqiReportPeriodic() { return *static_cast<CQIReportPeriodic*>(items[2]); }
};

typedef Null SoundingRSULConfigDedicatedRelease;

enum SoundingRSULConfigDedicatedSetupsrs_BandwidthValues {
	bw0_SoundingRSULConfigDedicatedSetupsrs_Bandwidth = 0,
	bw1_SoundingRSULConfigDedicatedSetupsrs_Bandwidth = 1,
	bw2_SoundingRSULConfigDedicatedSetupsrs_Bandwidth = 2,
	bw3_SoundingRSULConfigDedicatedSetupsrs_Bandwidth = 3,
};
typedef Enumerated<CONSTRAINED, 3> SoundingRSULConfigDedicatedSetupsrs_Bandwidth;

enum SoundingRSULConfigDedicatedSetupsrs_HoppingBandwidthValues {
	hbw0_SoundingRSULConfigDedicatedSetupsrs_HoppingBandwidth = 0,
	hbw1_SoundingRSULConfigDedicatedSetupsrs_HoppingBandwidth = 1,
	hbw2_SoundingRSULConfigDedicatedSetupsrs_HoppingBandwidth = 2,
	hbw3_SoundingRSULConfigDedicatedSetupsrs_HoppingBandwidth = 3,
};
typedef Enumerated<CONSTRAINED, 3> SoundingRSULConfigDedicatedSetupsrs_HoppingBandwidth;

typedef Integer<CONSTRAINED, 0, 23> SoundingRSULConfigDedicatedSetupFreqDomainPosition;

typedef Boolean SoundingRSULConfigDedicatedSetupDuration;

typedef Integer<CONSTRAINED, 0, 1023> SoundingRSULConfigDedicatedSetupSrsConfigIndex;

typedef Integer<CONSTRAINED, 0, 1> SoundingRSULConfigDedicatedSetupTransmissionComb;

enum SoundingRSULConfigDedicatedSetupcyclicShiftValues {
	cs0_SoundingRSULConfigDedicatedSetupcyclicShift = 0,
	cs1_SoundingRSULConfigDedicatedSetupcyclicShift = 1,
	cs2_SoundingRSULConfigDedicatedSetupcyclicShift = 2,
	cs3_SoundingRSULConfigDedicatedSetupcyclicShift = 3,
	cs4_SoundingRSULConfigDedicatedSetupcyclicShift = 4,
	cs5_SoundingRSULConfigDedicatedSetupcyclicShift = 5,
	cs6_SoundingRSULConfigDedicatedSetupcyclicShift = 6,
	cs7_SoundingRSULConfigDedicatedSetupcyclicShift = 7,
};
typedef Enumerated<CONSTRAINED, 7> SoundingRSULConfigDedicatedSetupcyclicShift;

class SoundingRSULConfigDedicatedSetup : public Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	SoundingRSULConfigDedicatedSetup(): Sequence(&theInfo) {}
	SoundingRSULConfigDedicatedSetup(const SoundingRSULConfigDedicatedSetupsrs_Bandwidth& soundingRSULConfigDedicatedSetupsrs_Bandwidth, const SoundingRSULConfigDedicatedSetupsrs_HoppingBandwidth& soundingRSULConfigDedicatedSetupsrs_HoppingBandwidth, const SoundingRSULConfigDedicatedSetupFreqDomainPosition& soundingRSULConfigDedicatedSetupFreqDomainPosition, const SoundingRSULConfigDedicatedSetupDuration& soundingRSULConfigDedicatedSetupDuration, const SoundingRSULConfigDedicatedSetupSrsConfigIndex& soundingRSULConfigDedicatedSetupSrsConfigIndex, const SoundingRSULConfigDedicatedSetupTransmissionComb& soundingRSULConfigDedicatedSetupTransmissionComb, const SoundingRSULConfigDedicatedSetupcyclicShift& soundingRSULConfigDedicatedSetupcyclicShift);

	void setSoundingRSULConfigDedicatedSetupsrs_Bandwidth(const SoundingRSULConfigDedicatedSetupsrs_Bandwidth& soundingRSULConfigDedicatedSetupsrs_Bandwidth) { *static_cast<SoundingRSULConfigDedicatedSetupsrs_Bandwidth*>(items[0]) = soundingRSULConfigDedicatedSetupsrs_Bandwidth; }
	void setSoundingRSULConfigDedicatedSetupsrs_HoppingBandwidth(const SoundingRSULConfigDedicatedSetupsrs_HoppingBandwidth& soundingRSULConfigDedicatedSetupsrs_HoppingBandwidth) { *static_cast<SoundingRSULConfigDedicatedSetupsrs_HoppingBandwidth*>(items[1]) = soundingRSULConfigDedicatedSetupsrs_HoppingBandwidth; }
	void setSoundingRSULConfigDedicatedSetupFreqDomainPosition(const SoundingRSULConfigDedicatedSetupFreqDomainPosition& soundingRSULConfigDedicatedSetupFreqDomainPosition) { *static_cast<SoundingRSULConfigDedicatedSetupFreqDomainPosition*>(items[2]) = soundingRSULConfigDedicatedSetupFreqDomainPosition; }
	void setSoundingRSULConfigDedicatedSetupDuration(const SoundingRSULConfigDedicatedSetupDuration& soundingRSULConfigDedicatedSetupDuration) { *static_cast<SoundingRSULConfigDedicatedSetupDuration*>(items[3]) = soundingRSULConfigDedicatedSetupDuration; }
	void setSoundingRSULConfigDedicatedSetupSrsConfigIndex(const SoundingRSULConfigDedicatedSetupSrsConfigIndex& soundingRSULConfigDedicatedSetupSrsConfigIndex) { *static_cast<SoundingRSULConfigDedicatedSetupSrsConfigIndex*>(items[4]) = soundingRSULConfigDedicatedSetupSrsConfigIndex; }
	void setSoundingRSULConfigDedicatedSetupTransmissionComb(const SoundingRSULConfigDedicatedSetupTransmissionComb& soundingRSULConfigDedicatedSetupTransmissionComb) { *static_cast<SoundingRSULConfigDedicatedSetupTransmissionComb*>(items[5]) = soundingRSULConfigDedicatedSetupTransmissionComb; }
	void setSoundingRSULConfigDedicatedSetupcyclicShift(const SoundingRSULConfigDedicatedSetupcyclicShift& soundingRSULConfigDedicatedSetupcyclicShift) { *static_cast<SoundingRSULConfigDedicatedSetupcyclicShift*>(items[6]) = soundingRSULConfigDedicatedSetupcyclicShift; }

	SoundingRSULConfigDedicatedSetupsrs_Bandwidth& getSoundingRSULConfigDedicatedSetupsrs_Bandwidth() { return *static_cast<SoundingRSULConfigDedicatedSetupsrs_Bandwidth*>(items[0]); }
	SoundingRSULConfigDedicatedSetupsrs_HoppingBandwidth& getSoundingRSULConfigDedicatedSetupsrs_HoppingBandwidth() { return *static_cast<SoundingRSULConfigDedicatedSetupsrs_HoppingBandwidth*>(items[1]); }
	SoundingRSULConfigDedicatedSetupFreqDomainPosition& getSoundingRSULConfigDedicatedSetupFreqDomainPosition() { return *static_cast<SoundingRSULConfigDedicatedSetupFreqDomainPosition*>(items[2]); }
	SoundingRSULConfigDedicatedSetupDuration& getSoundingRSULConfigDedicatedSetupDuration() { return *static_cast<SoundingRSULConfigDedicatedSetupDuration*>(items[3]); }
	SoundingRSULConfigDedicatedSetupSrsConfigIndex& getSoundingRSULConfigDedicatedSetupSrsConfigIndex() { return *static_cast<SoundingRSULConfigDedicatedSetupSrsConfigIndex*>(items[4]); }
	SoundingRSULConfigDedicatedSetupTransmissionComb& getSoundingRSULConfigDedicatedSetupTransmissionComb() { return *static_cast<SoundingRSULConfigDedicatedSetupTransmissionComb*>(items[5]); }
	SoundingRSULConfigDedicatedSetupcyclicShift& getSoundingRSULConfigDedicatedSetupcyclicShift() { return *static_cast<SoundingRSULConfigDedicatedSetupcyclicShift*>(items[6]); }
};

class SoundingRSULConfigDedicated : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum SoundingRSULConfigDedicatedChoices {
		soundingRSULConfigDedicatedRelease = 0,
		soundingRSULConfigDedicatedSetup = 1,
	};
	static const Info theInfo;
	SoundingRSULConfigDedicated(): Choice(&theInfo) {}
};

enum AntennaInfoDedicatedtransmissionModeValues {
	tm1_AntennaInfoDedicatedtransmissionMode = 0,
	tm2_AntennaInfoDedicatedtransmissionMode = 1,
	tm3_AntennaInfoDedicatedtransmissionMode = 2,
	tm4_AntennaInfoDedicatedtransmissionMode = 3,
	tm5_AntennaInfoDedicatedtransmissionMode = 4,
	tm6_AntennaInfoDedicatedtransmissionMode = 5,
	tm7_AntennaInfoDedicatedtransmissionMode = 6,
	tm8_v920_AntennaInfoDedicatedtransmissionMode = 7,
};
typedef Enumerated<CONSTRAINED, 7> AntennaInfoDedicatedtransmissionMode;

typedef BitString<CONSTRAINED, 2, 2> AntennaInfoDedicatedCodebookSubsetRestrictionN2TxAntennatm3;

typedef BitString<CONSTRAINED, 4, 4> AntennaInfoDedicatedCodebookSubsetRestrictionN4TxAntennatm3;

typedef BitString<CONSTRAINED, 6, 6> AntennaInfoDedicatedCodebookSubsetRestrictionN2TxAntennatm4;

typedef BitString<CONSTRAINED, 64, 64> AntennaInfoDedicatedCodebookSubsetRestrictionN4TxAntennatm4;

typedef BitString<CONSTRAINED, 4, 4> AntennaInfoDedicatedCodebookSubsetRestrictionN2TxAntennatm5;

typedef BitString<CONSTRAINED, 16, 16> AntennaInfoDedicatedCodebookSubsetRestrictionN4TxAntennatm5;

typedef BitString<CONSTRAINED, 4, 4> AntennaInfoDedicatedCodebookSubsetRestrictionN2TxAntennatm6;

typedef BitString<CONSTRAINED, 16, 16> AntennaInfoDedicatedCodebookSubsetRestrictionN4TxAntennatm6;

class AntennaInfoDedicatedCodebookSubsetRestriction : public Choice {
private:
	static const void *choicesInfo[8];
public:
	enum AntennaInfoDedicatedCodebookSubsetRestrictionChoices {
		antennaInfoDedicatedCodebookSubsetRestrictionN2TxAntennatm3 = 0,
		antennaInfoDedicatedCodebookSubsetRestrictionN4TxAntennatm3 = 1,
		antennaInfoDedicatedCodebookSubsetRestrictionN2TxAntennatm4 = 2,
		antennaInfoDedicatedCodebookSubsetRestrictionN4TxAntennatm4 = 3,
		antennaInfoDedicatedCodebookSubsetRestrictionN2TxAntennatm5 = 4,
		antennaInfoDedicatedCodebookSubsetRestrictionN4TxAntennatm5 = 5,
		antennaInfoDedicatedCodebookSubsetRestrictionN2TxAntennatm6 = 6,
		antennaInfoDedicatedCodebookSubsetRestrictionN4TxAntennatm6 = 7,
	};
	static const Info theInfo;
	AntennaInfoDedicatedCodebookSubsetRestriction(): Choice(&theInfo) {}
};

typedef Null AntennaInfoDedicatedUeTransmitAntennaSelectionRelease;

enum AntennaInfoDedicatedUeTransmitAntennaSelectionsetupValues {
	closedLoop_AntennaInfoDedicatedUeTransmitAntennaSelectionsetup = 0,
	openLoop_AntennaInfoDedicatedUeTransmitAntennaSelectionsetup = 1,
};
typedef Enumerated<CONSTRAINED, 1> AntennaInfoDedicatedUeTransmitAntennaSelectionsetup;

class AntennaInfoDedicatedUeTransmitAntennaSelection : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum AntennaInfoDedicatedUeTransmitAntennaSelectionChoices {
		antennaInfoDedicatedUeTransmitAntennaSelectionRelease = 0,
		antennaInfoDedicatedUeTransmitAntennaSelectionsetup = 1,
	};
	static const Info theInfo;
	AntennaInfoDedicatedUeTransmitAntennaSelection(): Choice(&theInfo) {}
};

class AntennaInfoDedicated : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	AntennaInfoDedicated(): Sequence(&theInfo) {}
	AntennaInfoDedicated(const AntennaInfoDedicatedtransmissionMode& antennaInfoDedicatedtransmissionMode, const AntennaInfoDedicatedUeTransmitAntennaSelection& antennaInfoDedicatedUeTransmitAntennaSelection);

	void setAntennaInfoDedicatedtransmissionMode(const AntennaInfoDedicatedtransmissionMode& antennaInfoDedicatedtransmissionMode) { *static_cast<AntennaInfoDedicatedtransmissionMode*>(items[0]) = antennaInfoDedicatedtransmissionMode; }
	void setAntennaInfoDedicatedCodebookSubsetRestriction(const AntennaInfoDedicatedCodebookSubsetRestriction& antennaInfoDedicatedCodebookSubsetRestriction) { *static_cast<AntennaInfoDedicatedCodebookSubsetRestriction*>(items[1]) = antennaInfoDedicatedCodebookSubsetRestriction; }
	void setAntennaInfoDedicatedUeTransmitAntennaSelection(const AntennaInfoDedicatedUeTransmitAntennaSelection& antennaInfoDedicatedUeTransmitAntennaSelection) { *static_cast<AntennaInfoDedicatedUeTransmitAntennaSelection*>(items[2]) = antennaInfoDedicatedUeTransmitAntennaSelection; }

	AntennaInfoDedicatedtransmissionMode& getAntennaInfoDedicatedtransmissionMode() { return *static_cast<AntennaInfoDedicatedtransmissionMode*>(items[0]); }
	AntennaInfoDedicatedCodebookSubsetRestriction& getAntennaInfoDedicatedCodebookSubsetRestriction() { return *static_cast<AntennaInfoDedicatedCodebookSubsetRestriction*>(items[1]); }
	AntennaInfoDedicatedUeTransmitAntennaSelection& getAntennaInfoDedicatedUeTransmitAntennaSelection() { return *static_cast<AntennaInfoDedicatedUeTransmitAntennaSelection*>(items[2]); }
};

typedef Null PhysicalConfigDedicatedAntennaInfoDefaultValue;

class PhysicalConfigDedicatedAntennaInfo : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum PhysicalConfigDedicatedAntennaInfoChoices {
		explicitValue = 0,
		physicalConfigDedicatedAntennaInfoDefaultValue = 1,
	};
	static const Info theInfo;
	PhysicalConfigDedicatedAntennaInfo(): Choice(&theInfo) {}
};

typedef Null SchedulingRequestConfigRelease;

typedef Integer<CONSTRAINED, 0, 2047> SchedulingRequestConfigSetupSrPUCCHResourceIndex;

typedef Integer<CONSTRAINED, 0, 157> SchedulingRequestConfigSetupSrConfigIndex;

enum SchedulingRequestConfigSetupdsr_TransMaxValues {
	n4_SchedulingRequestConfigSetupdsr_TransMax = 0,
	n8_SchedulingRequestConfigSetupdsr_TransMax = 1,
	n16_SchedulingRequestConfigSetupdsr_TransMax = 2,
	n32_SchedulingRequestConfigSetupdsr_TransMax = 3,
	n64_SchedulingRequestConfigSetupdsr_TransMax = 4,
	spare3_SchedulingRequestConfigSetupdsr_TransMax = 5,
	spare2_SchedulingRequestConfigSetupdsr_TransMax = 6,
	spare1_SchedulingRequestConfigSetupdsr_TransMax = 7,
};
typedef Enumerated<CONSTRAINED, 7> SchedulingRequestConfigSetupdsr_TransMax;

class SchedulingRequestConfigSetup : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	SchedulingRequestConfigSetup(): Sequence(&theInfo) {}
	SchedulingRequestConfigSetup(const SchedulingRequestConfigSetupSrPUCCHResourceIndex& schedulingRequestConfigSetupSrPUCCHResourceIndex, const SchedulingRequestConfigSetupSrConfigIndex& schedulingRequestConfigSetupSrConfigIndex, const SchedulingRequestConfigSetupdsr_TransMax& schedulingRequestConfigSetupdsr_TransMax);

	void setSchedulingRequestConfigSetupSrPUCCHResourceIndex(const SchedulingRequestConfigSetupSrPUCCHResourceIndex& schedulingRequestConfigSetupSrPUCCHResourceIndex) { *static_cast<SchedulingRequestConfigSetupSrPUCCHResourceIndex*>(items[0]) = schedulingRequestConfigSetupSrPUCCHResourceIndex; }
	void setSchedulingRequestConfigSetupSrConfigIndex(const SchedulingRequestConfigSetupSrConfigIndex& schedulingRequestConfigSetupSrConfigIndex) { *static_cast<SchedulingRequestConfigSetupSrConfigIndex*>(items[1]) = schedulingRequestConfigSetupSrConfigIndex; }
	void setSchedulingRequestConfigSetupdsr_TransMax(const SchedulingRequestConfigSetupdsr_TransMax& schedulingRequestConfigSetupdsr_TransMax) { *static_cast<SchedulingRequestConfigSetupdsr_TransMax*>(items[2]) = schedulingRequestConfigSetupdsr_TransMax; }

	SchedulingRequestConfigSetupSrPUCCHResourceIndex& getSchedulingRequestConfigSetupSrPUCCHResourceIndex() { return *static_cast<SchedulingRequestConfigSetupSrPUCCHResourceIndex*>(items[0]); }
	SchedulingRequestConfigSetupSrConfigIndex& getSchedulingRequestConfigSetupSrConfigIndex() { return *static_cast<SchedulingRequestConfigSetupSrConfigIndex*>(items[1]); }
	SchedulingRequestConfigSetupdsr_TransMax& getSchedulingRequestConfigSetupdsr_TransMax() { return *static_cast<SchedulingRequestConfigSetupdsr_TransMax*>(items[2]); }
};

class SchedulingRequestConfig : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum SchedulingRequestConfigChoices {
		schedulingRequestConfigRelease = 0,
		schedulingRequestConfigSetup = 1,
	};
	static const Info theInfo;
	SchedulingRequestConfig(): Choice(&theInfo) {}
};

enum CQIReportConfigv920cqi_Mask_r9Values {
	setup_CQIReportConfigv920cqi_Mask_r9 = 0,
};
typedef Enumerated<CONSTRAINED, 0> CQIReportConfigv920cqi_Mask_r9;

enum CQIReportConfigv920pmi_RI_Report_r9Values {
	setup_CQIReportConfigv920pmi_RI_Report_r9 = 0,
};
typedef Enumerated<CONSTRAINED, 0> CQIReportConfigv920pmi_RI_Report_r9;

class CQIReportConfigv920 : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CQIReportConfigv920(): Sequence(&theInfo) {}

	void setCQIReportConfigv920cqi_Mask_r9(const CQIReportConfigv920cqi_Mask_r9& cQIReportConfigv920cqi_Mask_r9) { *static_cast<CQIReportConfigv920cqi_Mask_r9*>(items[0]) = cQIReportConfigv920cqi_Mask_r9; }
	void setCQIReportConfigv920pmi_RI_Report_r9(const CQIReportConfigv920pmi_RI_Report_r9& cQIReportConfigv920pmi_RI_Report_r9) { *static_cast<CQIReportConfigv920pmi_RI_Report_r9*>(items[1]) = cQIReportConfigv920pmi_RI_Report_r9; }

	CQIReportConfigv920cqi_Mask_r9& getCQIReportConfigv920cqi_Mask_r9() { return *static_cast<CQIReportConfigv920cqi_Mask_r9*>(items[0]); }
	CQIReportConfigv920pmi_RI_Report_r9& getCQIReportConfigv920pmi_RI_Report_r9() { return *static_cast<CQIReportConfigv920pmi_RI_Report_r9*>(items[1]); }
};

typedef BitString<CONSTRAINED, 6, 6> AntennaInfoDedicatedv920CodebookSubsetRestrictionv920N2TxAntennatm8r9;

typedef BitString<CONSTRAINED, 32, 32> AntennaInfoDedicatedv920CodebookSubsetRestrictionv920N4TxAntennatm8r9;

class AntennaInfoDedicatedv920CodebookSubsetRestrictionv920 : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum AntennaInfoDedicatedv920CodebookSubsetRestrictionv920Choices {
		antennaInfoDedicatedv920CodebookSubsetRestrictionv920N2TxAntennatm8r9 = 0,
		antennaInfoDedicatedv920CodebookSubsetRestrictionv920N4TxAntennatm8r9 = 1,
	};
	static const Info theInfo;
	AntennaInfoDedicatedv920CodebookSubsetRestrictionv920(): Choice(&theInfo) {}
};

class AntennaInfoDedicatedv920 : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	AntennaInfoDedicatedv920(): Sequence(&theInfo) {}

	void setAntennaInfoDedicatedv920CodebookSubsetRestrictionv920(const AntennaInfoDedicatedv920CodebookSubsetRestrictionv920& antennaInfoDedicatedv920CodebookSubsetRestrictionv920) { *static_cast<AntennaInfoDedicatedv920CodebookSubsetRestrictionv920*>(items[0]) = antennaInfoDedicatedv920CodebookSubsetRestrictionv920; }

	AntennaInfoDedicatedv920CodebookSubsetRestrictionv920& getAntennaInfoDedicatedv920CodebookSubsetRestrictionv920() { return *static_cast<AntennaInfoDedicatedv920CodebookSubsetRestrictionv920*>(items[0]); }
};

enum AntennaInfoDedicatedr10transmissionMode_r10Values {
	tm1_AntennaInfoDedicatedr10transmissionMode_r10 = 0,
	tm2_AntennaInfoDedicatedr10transmissionMode_r10 = 1,
	tm3_AntennaInfoDedicatedr10transmissionMode_r10 = 2,
	tm4_AntennaInfoDedicatedr10transmissionMode_r10 = 3,
	tm5_AntennaInfoDedicatedr10transmissionMode_r10 = 4,
	tm6_AntennaInfoDedicatedr10transmissionMode_r10 = 5,
	tm7_AntennaInfoDedicatedr10transmissionMode_r10 = 6,
	tm8_v920_AntennaInfoDedicatedr10transmissionMode_r10 = 7,
	tm9_v1020_AntennaInfoDedicatedr10transmissionMode_r10 = 8,
	spare7_AntennaInfoDedicatedr10transmissionMode_r10 = 9,
	spare6_AntennaInfoDedicatedr10transmissionMode_r10 = 10,
	spare5_AntennaInfoDedicatedr10transmissionMode_r10 = 11,
	spare4_AntennaInfoDedicatedr10transmissionMode_r10 = 12,
	spare3_AntennaInfoDedicatedr10transmissionMode_r10 = 13,
	spare2_AntennaInfoDedicatedr10transmissionMode_r10 = 14,
	spare1_AntennaInfoDedicatedr10transmissionMode_r10 = 15,
};
typedef Enumerated<CONSTRAINED, 15> AntennaInfoDedicatedr10transmissionMode_r10;

typedef BitStringBase AntennaInfoDedicatedr10CodebookSubsetRestrictionr10;

typedef Null AntennaInfoDedicatedr10UeTransmitAntennaSelectionRelease;

enum AntennaInfoDedicatedr10UeTransmitAntennaSelectionsetupValues {
	closedLoop_AntennaInfoDedicatedr10UeTransmitAntennaSelectionsetup = 0,
	openLoop_AntennaInfoDedicatedr10UeTransmitAntennaSelectionsetup = 1,
};
typedef Enumerated<CONSTRAINED, 1> AntennaInfoDedicatedr10UeTransmitAntennaSelectionsetup;

class AntennaInfoDedicatedr10UeTransmitAntennaSelection : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum AntennaInfoDedicatedr10UeTransmitAntennaSelectionChoices {
		antennaInfoDedicatedr10UeTransmitAntennaSelectionRelease = 0,
		antennaInfoDedicatedr10UeTransmitAntennaSelectionsetup = 1,
	};
	static const Info theInfo;
	AntennaInfoDedicatedr10UeTransmitAntennaSelection(): Choice(&theInfo) {}
};

class AntennaInfoDedicatedr10 : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	AntennaInfoDedicatedr10(): Sequence(&theInfo) {}
	AntennaInfoDedicatedr10(const AntennaInfoDedicatedr10transmissionMode_r10& antennaInfoDedicatedr10transmissionMode_r10, const AntennaInfoDedicatedr10UeTransmitAntennaSelection& antennaInfoDedicatedr10UeTransmitAntennaSelection);

	void setAntennaInfoDedicatedr10transmissionMode_r10(const AntennaInfoDedicatedr10transmissionMode_r10& antennaInfoDedicatedr10transmissionMode_r10) { *static_cast<AntennaInfoDedicatedr10transmissionMode_r10*>(items[0]) = antennaInfoDedicatedr10transmissionMode_r10; }
	void setAntennaInfoDedicatedr10CodebookSubsetRestrictionr10(const AntennaInfoDedicatedr10CodebookSubsetRestrictionr10& antennaInfoDedicatedr10CodebookSubsetRestrictionr10) { *static_cast<AntennaInfoDedicatedr10CodebookSubsetRestrictionr10*>(items[1]) = antennaInfoDedicatedr10CodebookSubsetRestrictionr10; }
	void setAntennaInfoDedicatedr10UeTransmitAntennaSelection(const AntennaInfoDedicatedr10UeTransmitAntennaSelection& antennaInfoDedicatedr10UeTransmitAntennaSelection) { *static_cast<AntennaInfoDedicatedr10UeTransmitAntennaSelection*>(items[2]) = antennaInfoDedicatedr10UeTransmitAntennaSelection; }

	AntennaInfoDedicatedr10transmissionMode_r10& getAntennaInfoDedicatedr10transmissionMode_r10() { return *static_cast<AntennaInfoDedicatedr10transmissionMode_r10*>(items[0]); }
	AntennaInfoDedicatedr10CodebookSubsetRestrictionr10& getAntennaInfoDedicatedr10CodebookSubsetRestrictionr10() { return *static_cast<AntennaInfoDedicatedr10CodebookSubsetRestrictionr10*>(items[1]); }
	AntennaInfoDedicatedr10UeTransmitAntennaSelection& getAntennaInfoDedicatedr10UeTransmitAntennaSelection() { return *static_cast<AntennaInfoDedicatedr10UeTransmitAntennaSelection*>(items[2]); }
};

typedef Null PhysicalConfigDedicatedAntennaInfor10DefaultValue;

class PhysicalConfigDedicatedAntennaInfor10 : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum PhysicalConfigDedicatedAntennaInfor10Choices {
		explicitValuer10 = 0,
		physicalConfigDedicatedAntennaInfor10DefaultValue = 1,
	};
	static const Info theInfo;
	PhysicalConfigDedicatedAntennaInfor10(): Choice(&theInfo) {}
};

enum AntennaInfoULr10transmissionModeUL_r10Values {
	tm1_AntennaInfoULr10transmissionModeUL_r10 = 0,
	tm2_AntennaInfoULr10transmissionModeUL_r10 = 1,
	spare6_AntennaInfoULr10transmissionModeUL_r10 = 2,
	spare5_AntennaInfoULr10transmissionModeUL_r10 = 3,
	spare4_AntennaInfoULr10transmissionModeUL_r10 = 4,
	spare3_AntennaInfoULr10transmissionModeUL_r10 = 5,
	spare2_AntennaInfoULr10transmissionModeUL_r10 = 6,
	spare1_AntennaInfoULr10transmissionModeUL_r10 = 7,
};
typedef Enumerated<CONSTRAINED, 7> AntennaInfoULr10transmissionModeUL_r10;

enum AntennaInfoULr10fourAntennaPortActivated_r10Values {
	setup_AntennaInfoULr10fourAntennaPortActivated_r10 = 0,
};
typedef Enumerated<CONSTRAINED, 0> AntennaInfoULr10fourAntennaPortActivated_r10;

class AntennaInfoULr10 : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	AntennaInfoULr10(): Sequence(&theInfo) {}

	void setAntennaInfoULr10transmissionModeUL_r10(const AntennaInfoULr10transmissionModeUL_r10& antennaInfoULr10transmissionModeUL_r10) { *static_cast<AntennaInfoULr10transmissionModeUL_r10*>(items[0]) = antennaInfoULr10transmissionModeUL_r10; }
	void setAntennaInfoULr10fourAntennaPortActivated_r10(const AntennaInfoULr10fourAntennaPortActivated_r10& antennaInfoULr10fourAntennaPortActivated_r10) { *static_cast<AntennaInfoULr10fourAntennaPortActivated_r10*>(items[1]) = antennaInfoULr10fourAntennaPortActivated_r10; }

	AntennaInfoULr10transmissionModeUL_r10& getAntennaInfoULr10transmissionModeUL_r10() { return *static_cast<AntennaInfoULr10transmissionModeUL_r10*>(items[0]); }
	AntennaInfoULr10fourAntennaPortActivated_r10& getAntennaInfoULr10fourAntennaPortActivated_r10() { return *static_cast<AntennaInfoULr10fourAntennaPortActivated_r10*>(items[1]); }
};

typedef Boolean PhysicalConfigDedicatedCifPresencer10;

typedef Null CQIReportAperiodicr10Release;

typedef BitString<CONSTRAINED, 8, 8> CQIReportAperiodicr10SetupAperiodicCSITriggerr10Trigger1r10;

typedef BitString<CONSTRAINED, 8, 8> CQIReportAperiodicr10SetupAperiodicCSITriggerr10Trigger2r10;

class CQIReportAperiodicr10SetupAperiodicCSITriggerr10 : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CQIReportAperiodicr10SetupAperiodicCSITriggerr10(): Sequence(&theInfo) {}
	CQIReportAperiodicr10SetupAperiodicCSITriggerr10(const CQIReportAperiodicr10SetupAperiodicCSITriggerr10Trigger1r10& cQIReportAperiodicr10SetupAperiodicCSITriggerr10Trigger1r10, const CQIReportAperiodicr10SetupAperiodicCSITriggerr10Trigger2r10& cQIReportAperiodicr10SetupAperiodicCSITriggerr10Trigger2r10);

	void setCQIReportAperiodicr10SetupAperiodicCSITriggerr10Trigger1r10(const CQIReportAperiodicr10SetupAperiodicCSITriggerr10Trigger1r10& cQIReportAperiodicr10SetupAperiodicCSITriggerr10Trigger1r10) { *static_cast<CQIReportAperiodicr10SetupAperiodicCSITriggerr10Trigger1r10*>(items[0]) = cQIReportAperiodicr10SetupAperiodicCSITriggerr10Trigger1r10; }
	void setCQIReportAperiodicr10SetupAperiodicCSITriggerr10Trigger2r10(const CQIReportAperiodicr10SetupAperiodicCSITriggerr10Trigger2r10& cQIReportAperiodicr10SetupAperiodicCSITriggerr10Trigger2r10) { *static_cast<CQIReportAperiodicr10SetupAperiodicCSITriggerr10Trigger2r10*>(items[1]) = cQIReportAperiodicr10SetupAperiodicCSITriggerr10Trigger2r10; }

	CQIReportAperiodicr10SetupAperiodicCSITriggerr10Trigger1r10& getCQIReportAperiodicr10SetupAperiodicCSITriggerr10Trigger1r10() { return *static_cast<CQIReportAperiodicr10SetupAperiodicCSITriggerr10Trigger1r10*>(items[0]); }
	CQIReportAperiodicr10SetupAperiodicCSITriggerr10Trigger2r10& getCQIReportAperiodicr10SetupAperiodicCSITriggerr10Trigger2r10() { return *static_cast<CQIReportAperiodicr10SetupAperiodicCSITriggerr10Trigger2r10*>(items[1]); }
};

class CQIReportAperiodicr10Setup : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CQIReportAperiodicr10Setup(): Sequence(&theInfo) {}
	CQIReportAperiodicr10Setup(const CQIReportModeAperiodic& cqiReportModeAperiodicr10);

	void setCqiReportModeAperiodicr10(const CQIReportModeAperiodic& cqiReportModeAperiodicr10) { *static_cast<CQIReportModeAperiodic*>(items[0]) = cqiReportModeAperiodicr10; }
	void setCQIReportAperiodicr10SetupAperiodicCSITriggerr10(const CQIReportAperiodicr10SetupAperiodicCSITriggerr10& cQIReportAperiodicr10SetupAperiodicCSITriggerr10) { *static_cast<CQIReportAperiodicr10SetupAperiodicCSITriggerr10*>(items[1]) = cQIReportAperiodicr10SetupAperiodicCSITriggerr10; }

	CQIReportModeAperiodic& getCqiReportModeAperiodicr10() { return *static_cast<CQIReportModeAperiodic*>(items[0]); }
	CQIReportAperiodicr10SetupAperiodicCSITriggerr10& getCQIReportAperiodicr10SetupAperiodicCSITriggerr10() { return *static_cast<CQIReportAperiodicr10SetupAperiodicCSITriggerr10*>(items[1]); }
};

class CQIReportAperiodicr10 : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum CQIReportAperiodicr10Choices {
		cQIReportAperiodicr10Release = 0,
		cQIReportAperiodicr10Setup = 1,
	};
	static const Info theInfo;
	CQIReportAperiodicr10(): Choice(&theInfo) {}
};

typedef Integer<CONSTRAINED, -1, 6> CQIReportConfigr10NomPDSCHRSEPREOffset;

typedef Null CQIReportPeriodicr10Release;

typedef Integer<CONSTRAINED, 0, 1184> CQIReportPeriodicr10SetupCqiPUCCHResourceIndexr10;

typedef Integer<CONSTRAINED, 0, 1184> CQIReportPeriodicr10SetupCqiPUCCHResourceIndexP1r10;

typedef Integer<CONSTRAINED, 0, 1023> CQIReportPeriodicr10SetupCqipmiConfigIndex;

enum CQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10WidebandCQIr10csi_ReportMode_r10Values {
	submode1_CQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10WidebandCQIr10csi_ReportMode_r10 = 0,
	submode2_CQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10WidebandCQIr10csi_ReportMode_r10 = 1,
};
typedef Enumerated<CONSTRAINED, 1> CQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10WidebandCQIr10csi_ReportMode_r10;

class CQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10WidebandCQIr10 : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10WidebandCQIr10(): Sequence(&theInfo) {}

	void setCQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10WidebandCQIr10csi_ReportMode_r10(const CQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10WidebandCQIr10csi_ReportMode_r10& cQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10WidebandCQIr10csi_ReportMode_r10) { *static_cast<CQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10WidebandCQIr10csi_ReportMode_r10*>(items[0]) = cQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10WidebandCQIr10csi_ReportMode_r10; }

	CQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10WidebandCQIr10csi_ReportMode_r10& getCQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10WidebandCQIr10csi_ReportMode_r10() { return *static_cast<CQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10WidebandCQIr10csi_ReportMode_r10*>(items[0]); }
};

typedef Integer<CONSTRAINED, 1, 4> CQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10SubbandCQIr10K;

enum CQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10SubbandCQIr10periodicityFactor_r10Values {
	n2_CQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10SubbandCQIr10periodicityFactor_r10 = 0,
	n4_CQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10SubbandCQIr10periodicityFactor_r10 = 1,
};
typedef Enumerated<CONSTRAINED, 1> CQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10SubbandCQIr10periodicityFactor_r10;

class CQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10SubbandCQIr10 : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10SubbandCQIr10(): Sequence(&theInfo) {}
	CQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10SubbandCQIr10(const CQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10SubbandCQIr10K& cQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10SubbandCQIr10K, const CQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10SubbandCQIr10periodicityFactor_r10& cQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10SubbandCQIr10periodicityFactor_r10);

	void setCQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10SubbandCQIr10K(const CQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10SubbandCQIr10K& cQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10SubbandCQIr10K) { *static_cast<CQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10SubbandCQIr10K*>(items[0]) = cQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10SubbandCQIr10K; }
	void setCQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10SubbandCQIr10periodicityFactor_r10(const CQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10SubbandCQIr10periodicityFactor_r10& cQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10SubbandCQIr10periodicityFactor_r10) { *static_cast<CQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10SubbandCQIr10periodicityFactor_r10*>(items[1]) = cQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10SubbandCQIr10periodicityFactor_r10; }

	CQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10SubbandCQIr10K& getCQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10SubbandCQIr10K() { return *static_cast<CQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10SubbandCQIr10K*>(items[0]); }
	CQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10SubbandCQIr10periodicityFactor_r10& getCQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10SubbandCQIr10periodicityFactor_r10() { return *static_cast<CQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10SubbandCQIr10periodicityFactor_r10*>(items[1]); }
};

class CQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10 : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum CQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10Choices {
		cQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10WidebandCQIr10 = 0,
		cQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10SubbandCQIr10 = 1,
	};
	static const Info theInfo;
	CQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10(): Choice(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 1023> CQIReportPeriodicr10SetupRiConfigIndex;

typedef Boolean CQIReportPeriodicr10SetupSimultaneousAckNackAndCQI;

enum CQIReportPeriodicr10Setupcqi_Mask_r9Values {
	setup_CQIReportPeriodicr10Setupcqi_Mask_r9 = 0,
};
typedef Enumerated<CONSTRAINED, 0> CQIReportPeriodicr10Setupcqi_Mask_r9;

typedef Null CQIReportPeriodicr10SetupCsiConfigIndexr10Release;

typedef Integer<CONSTRAINED, 0, 1023> CQIReportPeriodicr10SetupCsiConfigIndexr10SetupCqipmiConfigIndex2r10;

typedef Integer<CONSTRAINED, 0, 1023> CQIReportPeriodicr10SetupCsiConfigIndexr10SetupRiConfigIndex2r10;

class CQIReportPeriodicr10SetupCsiConfigIndexr10Setup : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CQIReportPeriodicr10SetupCsiConfigIndexr10Setup(): Sequence(&theInfo) {}
	CQIReportPeriodicr10SetupCsiConfigIndexr10Setup(const CQIReportPeriodicr10SetupCsiConfigIndexr10SetupCqipmiConfigIndex2r10& cQIReportPeriodicr10SetupCsiConfigIndexr10SetupCqipmiConfigIndex2r10);

	void setCQIReportPeriodicr10SetupCsiConfigIndexr10SetupCqipmiConfigIndex2r10(const CQIReportPeriodicr10SetupCsiConfigIndexr10SetupCqipmiConfigIndex2r10& cQIReportPeriodicr10SetupCsiConfigIndexr10SetupCqipmiConfigIndex2r10) { *static_cast<CQIReportPeriodicr10SetupCsiConfigIndexr10SetupCqipmiConfigIndex2r10*>(items[0]) = cQIReportPeriodicr10SetupCsiConfigIndexr10SetupCqipmiConfigIndex2r10; }
	void setCQIReportPeriodicr10SetupCsiConfigIndexr10SetupRiConfigIndex2r10(const CQIReportPeriodicr10SetupCsiConfigIndexr10SetupRiConfigIndex2r10& cQIReportPeriodicr10SetupCsiConfigIndexr10SetupRiConfigIndex2r10) { *static_cast<CQIReportPeriodicr10SetupCsiConfigIndexr10SetupRiConfigIndex2r10*>(items[1]) = cQIReportPeriodicr10SetupCsiConfigIndexr10SetupRiConfigIndex2r10; }

	CQIReportPeriodicr10SetupCsiConfigIndexr10SetupCqipmiConfigIndex2r10& getCQIReportPeriodicr10SetupCsiConfigIndexr10SetupCqipmiConfigIndex2r10() { return *static_cast<CQIReportPeriodicr10SetupCsiConfigIndexr10SetupCqipmiConfigIndex2r10*>(items[0]); }
	CQIReportPeriodicr10SetupCsiConfigIndexr10SetupRiConfigIndex2r10& getCQIReportPeriodicr10SetupCsiConfigIndexr10SetupRiConfigIndex2r10() { return *static_cast<CQIReportPeriodicr10SetupCsiConfigIndexr10SetupRiConfigIndex2r10*>(items[1]); }
};

class CQIReportPeriodicr10SetupCsiConfigIndexr10 : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum CQIReportPeriodicr10SetupCsiConfigIndexr10Choices {
		cQIReportPeriodicr10SetupCsiConfigIndexr10Release = 0,
		cQIReportPeriodicr10SetupCsiConfigIndexr10Setup = 1,
	};
	static const Info theInfo;
	CQIReportPeriodicr10SetupCsiConfigIndexr10(): Choice(&theInfo) {}
};

class CQIReportPeriodicr10Setup : public Sequence {
private:
	static const void *itemsInfo[8];
	static bool itemsPres[8];
public:
	static const Info theInfo;
	CQIReportPeriodicr10Setup(): Sequence(&theInfo) {}
	CQIReportPeriodicr10Setup(const CQIReportPeriodicr10SetupCqiPUCCHResourceIndexr10& cQIReportPeriodicr10SetupCqiPUCCHResourceIndexr10, const CQIReportPeriodicr10SetupCqipmiConfigIndex& cQIReportPeriodicr10SetupCqipmiConfigIndex, const CQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10& cQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10, const CQIReportPeriodicr10SetupSimultaneousAckNackAndCQI& cQIReportPeriodicr10SetupSimultaneousAckNackAndCQI);

	void setCQIReportPeriodicr10SetupCqiPUCCHResourceIndexr10(const CQIReportPeriodicr10SetupCqiPUCCHResourceIndexr10& cQIReportPeriodicr10SetupCqiPUCCHResourceIndexr10) { *static_cast<CQIReportPeriodicr10SetupCqiPUCCHResourceIndexr10*>(items[0]) = cQIReportPeriodicr10SetupCqiPUCCHResourceIndexr10; }
	void setCQIReportPeriodicr10SetupCqiPUCCHResourceIndexP1r10(const CQIReportPeriodicr10SetupCqiPUCCHResourceIndexP1r10& cQIReportPeriodicr10SetupCqiPUCCHResourceIndexP1r10) { *static_cast<CQIReportPeriodicr10SetupCqiPUCCHResourceIndexP1r10*>(items[1]) = cQIReportPeriodicr10SetupCqiPUCCHResourceIndexP1r10; }
	void setCQIReportPeriodicr10SetupCqipmiConfigIndex(const CQIReportPeriodicr10SetupCqipmiConfigIndex& cQIReportPeriodicr10SetupCqipmiConfigIndex) { *static_cast<CQIReportPeriodicr10SetupCqipmiConfigIndex*>(items[2]) = cQIReportPeriodicr10SetupCqipmiConfigIndex; }
	void setCQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10(const CQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10& cQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10) { *static_cast<CQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10*>(items[3]) = cQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10; }
	void setCQIReportPeriodicr10SetupRiConfigIndex(const CQIReportPeriodicr10SetupRiConfigIndex& cQIReportPeriodicr10SetupRiConfigIndex) { *static_cast<CQIReportPeriodicr10SetupRiConfigIndex*>(items[4]) = cQIReportPeriodicr10SetupRiConfigIndex; }
	void setCQIReportPeriodicr10SetupSimultaneousAckNackAndCQI(const CQIReportPeriodicr10SetupSimultaneousAckNackAndCQI& cQIReportPeriodicr10SetupSimultaneousAckNackAndCQI) { *static_cast<CQIReportPeriodicr10SetupSimultaneousAckNackAndCQI*>(items[5]) = cQIReportPeriodicr10SetupSimultaneousAckNackAndCQI; }
	void setCQIReportPeriodicr10Setupcqi_Mask_r9(const CQIReportPeriodicr10Setupcqi_Mask_r9& cQIReportPeriodicr10Setupcqi_Mask_r9) { *static_cast<CQIReportPeriodicr10Setupcqi_Mask_r9*>(items[6]) = cQIReportPeriodicr10Setupcqi_Mask_r9; }
	void setCQIReportPeriodicr10SetupCsiConfigIndexr10(const CQIReportPeriodicr10SetupCsiConfigIndexr10& cQIReportPeriodicr10SetupCsiConfigIndexr10) { *static_cast<CQIReportPeriodicr10SetupCsiConfigIndexr10*>(items[7]) = cQIReportPeriodicr10SetupCsiConfigIndexr10; }

	CQIReportPeriodicr10SetupCqiPUCCHResourceIndexr10& getCQIReportPeriodicr10SetupCqiPUCCHResourceIndexr10() { return *static_cast<CQIReportPeriodicr10SetupCqiPUCCHResourceIndexr10*>(items[0]); }
	CQIReportPeriodicr10SetupCqiPUCCHResourceIndexP1r10& getCQIReportPeriodicr10SetupCqiPUCCHResourceIndexP1r10() { return *static_cast<CQIReportPeriodicr10SetupCqiPUCCHResourceIndexP1r10*>(items[1]); }
	CQIReportPeriodicr10SetupCqipmiConfigIndex& getCQIReportPeriodicr10SetupCqipmiConfigIndex() { return *static_cast<CQIReportPeriodicr10SetupCqipmiConfigIndex*>(items[2]); }
	CQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10& getCQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10() { return *static_cast<CQIReportPeriodicr10SetupCqiFormatIndicatorPeriodicr10*>(items[3]); }
	CQIReportPeriodicr10SetupRiConfigIndex& getCQIReportPeriodicr10SetupRiConfigIndex() { return *static_cast<CQIReportPeriodicr10SetupRiConfigIndex*>(items[4]); }
	CQIReportPeriodicr10SetupSimultaneousAckNackAndCQI& getCQIReportPeriodicr10SetupSimultaneousAckNackAndCQI() { return *static_cast<CQIReportPeriodicr10SetupSimultaneousAckNackAndCQI*>(items[5]); }
	CQIReportPeriodicr10Setupcqi_Mask_r9& getCQIReportPeriodicr10Setupcqi_Mask_r9() { return *static_cast<CQIReportPeriodicr10Setupcqi_Mask_r9*>(items[6]); }
	CQIReportPeriodicr10SetupCsiConfigIndexr10& getCQIReportPeriodicr10SetupCsiConfigIndexr10() { return *static_cast<CQIReportPeriodicr10SetupCsiConfigIndexr10*>(items[7]); }
};

class CQIReportPeriodicr10 : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum CQIReportPeriodicr10Choices {
		cQIReportPeriodicr10Release = 0,
		cQIReportPeriodicr10Setup = 1,
	};
	static const Info theInfo;
	CQIReportPeriodicr10(): Choice(&theInfo) {}
};

enum CQIReportConfigr10pmi_RI_Report_r9Values {
	setup_CQIReportConfigr10pmi_RI_Report_r9 = 0,
};
typedef Enumerated<CONSTRAINED, 0> CQIReportConfigr10pmi_RI_Report_r9;

typedef Null CQIReportConfigr10CsiSubframePatternConfigr10Release;

typedef BitString<CONSTRAINED, 40, 40> MeasSubframePatternr10SubframePatternFDDr10;

typedef BitString<CONSTRAINED, 20, 20> MeasSubframePatternr10SubframePatternTDDr10SubframeConfig15r10;

typedef BitString<CONSTRAINED, 70, 70> MeasSubframePatternr10SubframePatternTDDr10SubframeConfig0r10;

typedef BitString<CONSTRAINED, 60, 60> MeasSubframePatternr10SubframePatternTDDr10SubframeConfig6r10;

class MeasSubframePatternr10SubframePatternTDDr10 : public Choice {
private:
	static const void *choicesInfo[3];
public:
	enum MeasSubframePatternr10SubframePatternTDDr10Choices {
		measSubframePatternr10SubframePatternTDDr10SubframeConfig15r10 = 0,
		measSubframePatternr10SubframePatternTDDr10SubframeConfig0r10 = 1,
		measSubframePatternr10SubframePatternTDDr10SubframeConfig6r10 = 2,
	};
	static const Info theInfo;
	MeasSubframePatternr10SubframePatternTDDr10(): Choice(&theInfo) {}
};

class MeasSubframePatternr10 : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum MeasSubframePatternr10Choices {
		measSubframePatternr10SubframePatternFDDr10 = 0,
		measSubframePatternr10SubframePatternTDDr10 = 1,
	};
	static const Info theInfo;
	MeasSubframePatternr10(): Choice(&theInfo) {}
};

class CQIReportConfigr10CsiSubframePatternConfigr10Setup : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CQIReportConfigr10CsiSubframePatternConfigr10Setup(): Sequence(&theInfo) {}
	CQIReportConfigr10CsiSubframePatternConfigr10Setup(const MeasSubframePatternr10& csiMeasSubframeSet1r10, const MeasSubframePatternr10& csiMeasSubframeSet2r10);

	void setCsiMeasSubframeSet1r10(const MeasSubframePatternr10& csiMeasSubframeSet1r10) { *static_cast<MeasSubframePatternr10*>(items[0]) = csiMeasSubframeSet1r10; }
	void setCsiMeasSubframeSet2r10(const MeasSubframePatternr10& csiMeasSubframeSet2r10) { *static_cast<MeasSubframePatternr10*>(items[1]) = csiMeasSubframeSet2r10; }

	MeasSubframePatternr10& getCsiMeasSubframeSet1r10() { return *static_cast<MeasSubframePatternr10*>(items[0]); }
	MeasSubframePatternr10& getCsiMeasSubframeSet2r10() { return *static_cast<MeasSubframePatternr10*>(items[1]); }
};

class CQIReportConfigr10CsiSubframePatternConfigr10 : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum CQIReportConfigr10CsiSubframePatternConfigr10Choices {
		cQIReportConfigr10CsiSubframePatternConfigr10Release = 0,
		cQIReportConfigr10CsiSubframePatternConfigr10Setup = 1,
	};
	static const Info theInfo;
	CQIReportConfigr10CsiSubframePatternConfigr10(): Choice(&theInfo) {}
};

class CQIReportConfigr10 : public Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	CQIReportConfigr10(): Sequence(&theInfo) {}
	CQIReportConfigr10(const CQIReportConfigr10NomPDSCHRSEPREOffset& cQIReportConfigr10NomPDSCHRSEPREOffset);

	void setCqiReportAperiodicr10(const CQIReportAperiodicr10& cqiReportAperiodicr10) { *static_cast<CQIReportAperiodicr10*>(items[0]) = cqiReportAperiodicr10; }
	void setCQIReportConfigr10NomPDSCHRSEPREOffset(const CQIReportConfigr10NomPDSCHRSEPREOffset& cQIReportConfigr10NomPDSCHRSEPREOffset) { *static_cast<CQIReportConfigr10NomPDSCHRSEPREOffset*>(items[1]) = cQIReportConfigr10NomPDSCHRSEPREOffset; }
	void setCqiReportPeriodicr10(const CQIReportPeriodicr10& cqiReportPeriodicr10) { *static_cast<CQIReportPeriodicr10*>(items[2]) = cqiReportPeriodicr10; }
	void setCQIReportConfigr10pmi_RI_Report_r9(const CQIReportConfigr10pmi_RI_Report_r9& cQIReportConfigr10pmi_RI_Report_r9) { *static_cast<CQIReportConfigr10pmi_RI_Report_r9*>(items[3]) = cQIReportConfigr10pmi_RI_Report_r9; }
	void setCQIReportConfigr10CsiSubframePatternConfigr10(const CQIReportConfigr10CsiSubframePatternConfigr10& cQIReportConfigr10CsiSubframePatternConfigr10) { *static_cast<CQIReportConfigr10CsiSubframePatternConfigr10*>(items[4]) = cQIReportConfigr10CsiSubframePatternConfigr10; }

	CQIReportAperiodicr10& getCqiReportAperiodicr10() { return *static_cast<CQIReportAperiodicr10*>(items[0]); }
	CQIReportConfigr10NomPDSCHRSEPREOffset& getCQIReportConfigr10NomPDSCHRSEPREOffset() { return *static_cast<CQIReportConfigr10NomPDSCHRSEPREOffset*>(items[1]); }
	CQIReportPeriodicr10& getCqiReportPeriodicr10() { return *static_cast<CQIReportPeriodicr10*>(items[2]); }
	CQIReportConfigr10pmi_RI_Report_r9& getCQIReportConfigr10pmi_RI_Report_r9() { return *static_cast<CQIReportConfigr10pmi_RI_Report_r9*>(items[3]); }
	CQIReportConfigr10CsiSubframePatternConfigr10& getCQIReportConfigr10CsiSubframePatternConfigr10() { return *static_cast<CQIReportConfigr10CsiSubframePatternConfigr10*>(items[4]); }
};

typedef Null CSIRSConfigr10CsiRSr10Release;

enum CSIRSConfigr10CsiRSr10SetupantennaPortsCount_r10Values {
	an1_CSIRSConfigr10CsiRSr10SetupantennaPortsCount_r10 = 0,
	an2_CSIRSConfigr10CsiRSr10SetupantennaPortsCount_r10 = 1,
	an4_CSIRSConfigr10CsiRSr10SetupantennaPortsCount_r10 = 2,
	an8_CSIRSConfigr10CsiRSr10SetupantennaPortsCount_r10 = 3,
};
typedef Enumerated<CONSTRAINED, 3> CSIRSConfigr10CsiRSr10SetupantennaPortsCount_r10;

typedef Integer<CONSTRAINED, 0, 31> CSIRSConfigr10CsiRSr10SetupResourceConfigr10;

typedef Integer<CONSTRAINED, 0, 154> CSIRSConfigr10CsiRSr10SetupSubframeConfigr10;

typedef Integer<CONSTRAINED, -8, 15> CSIRSConfigr10CsiRSr10SetupPCr10;

class CSIRSConfigr10CsiRSr10Setup : public Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CSIRSConfigr10CsiRSr10Setup(): Sequence(&theInfo) {}
	CSIRSConfigr10CsiRSr10Setup(const CSIRSConfigr10CsiRSr10SetupantennaPortsCount_r10& cSIRSConfigr10CsiRSr10SetupantennaPortsCount_r10, const CSIRSConfigr10CsiRSr10SetupResourceConfigr10& cSIRSConfigr10CsiRSr10SetupResourceConfigr10, const CSIRSConfigr10CsiRSr10SetupSubframeConfigr10& cSIRSConfigr10CsiRSr10SetupSubframeConfigr10, const CSIRSConfigr10CsiRSr10SetupPCr10& cSIRSConfigr10CsiRSr10SetupPCr10);

	void setCSIRSConfigr10CsiRSr10SetupantennaPortsCount_r10(const CSIRSConfigr10CsiRSr10SetupantennaPortsCount_r10& cSIRSConfigr10CsiRSr10SetupantennaPortsCount_r10) { *static_cast<CSIRSConfigr10CsiRSr10SetupantennaPortsCount_r10*>(items[0]) = cSIRSConfigr10CsiRSr10SetupantennaPortsCount_r10; }
	void setCSIRSConfigr10CsiRSr10SetupResourceConfigr10(const CSIRSConfigr10CsiRSr10SetupResourceConfigr10& cSIRSConfigr10CsiRSr10SetupResourceConfigr10) { *static_cast<CSIRSConfigr10CsiRSr10SetupResourceConfigr10*>(items[1]) = cSIRSConfigr10CsiRSr10SetupResourceConfigr10; }
	void setCSIRSConfigr10CsiRSr10SetupSubframeConfigr10(const CSIRSConfigr10CsiRSr10SetupSubframeConfigr10& cSIRSConfigr10CsiRSr10SetupSubframeConfigr10) { *static_cast<CSIRSConfigr10CsiRSr10SetupSubframeConfigr10*>(items[2]) = cSIRSConfigr10CsiRSr10SetupSubframeConfigr10; }
	void setCSIRSConfigr10CsiRSr10SetupPCr10(const CSIRSConfigr10CsiRSr10SetupPCr10& cSIRSConfigr10CsiRSr10SetupPCr10) { *static_cast<CSIRSConfigr10CsiRSr10SetupPCr10*>(items[3]) = cSIRSConfigr10CsiRSr10SetupPCr10; }

	CSIRSConfigr10CsiRSr10SetupantennaPortsCount_r10& getCSIRSConfigr10CsiRSr10SetupantennaPortsCount_r10() { return *static_cast<CSIRSConfigr10CsiRSr10SetupantennaPortsCount_r10*>(items[0]); }
	CSIRSConfigr10CsiRSr10SetupResourceConfigr10& getCSIRSConfigr10CsiRSr10SetupResourceConfigr10() { return *static_cast<CSIRSConfigr10CsiRSr10SetupResourceConfigr10*>(items[1]); }
	CSIRSConfigr10CsiRSr10SetupSubframeConfigr10& getCSIRSConfigr10CsiRSr10SetupSubframeConfigr10() { return *static_cast<CSIRSConfigr10CsiRSr10SetupSubframeConfigr10*>(items[2]); }
	CSIRSConfigr10CsiRSr10SetupPCr10& getCSIRSConfigr10CsiRSr10SetupPCr10() { return *static_cast<CSIRSConfigr10CsiRSr10SetupPCr10*>(items[3]); }
};

class CSIRSConfigr10CsiRSr10 : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum CSIRSConfigr10CsiRSr10Choices {
		cSIRSConfigr10CsiRSr10Release = 0,
		cSIRSConfigr10CsiRSr10Setup = 1,
	};
	static const Info theInfo;
	CSIRSConfigr10CsiRSr10(): Choice(&theInfo) {}
};

typedef Null CSIRSConfigr10ZeroTxPowerCSIRSr10Release;

typedef BitString<CONSTRAINED, 16, 16> CSIRSConfigr10ZeroTxPowerCSIRSr10SetupZeroTxPowerResourceConfigListr10;

typedef Integer<CONSTRAINED, 0, 154> CSIRSConfigr10ZeroTxPowerCSIRSr10SetupZeroTxPowerSubframeConfigr10;

class CSIRSConfigr10ZeroTxPowerCSIRSr10Setup : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CSIRSConfigr10ZeroTxPowerCSIRSr10Setup(): Sequence(&theInfo) {}
	CSIRSConfigr10ZeroTxPowerCSIRSr10Setup(const CSIRSConfigr10ZeroTxPowerCSIRSr10SetupZeroTxPowerResourceConfigListr10& cSIRSConfigr10ZeroTxPowerCSIRSr10SetupZeroTxPowerResourceConfigListr10, const CSIRSConfigr10ZeroTxPowerCSIRSr10SetupZeroTxPowerSubframeConfigr10& cSIRSConfigr10ZeroTxPowerCSIRSr10SetupZeroTxPowerSubframeConfigr10);

	void setCSIRSConfigr10ZeroTxPowerCSIRSr10SetupZeroTxPowerResourceConfigListr10(const CSIRSConfigr10ZeroTxPowerCSIRSr10SetupZeroTxPowerResourceConfigListr10& cSIRSConfigr10ZeroTxPowerCSIRSr10SetupZeroTxPowerResourceConfigListr10) { *static_cast<CSIRSConfigr10ZeroTxPowerCSIRSr10SetupZeroTxPowerResourceConfigListr10*>(items[0]) = cSIRSConfigr10ZeroTxPowerCSIRSr10SetupZeroTxPowerResourceConfigListr10; }
	void setCSIRSConfigr10ZeroTxPowerCSIRSr10SetupZeroTxPowerSubframeConfigr10(const CSIRSConfigr10ZeroTxPowerCSIRSr10SetupZeroTxPowerSubframeConfigr10& cSIRSConfigr10ZeroTxPowerCSIRSr10SetupZeroTxPowerSubframeConfigr10) { *static_cast<CSIRSConfigr10ZeroTxPowerCSIRSr10SetupZeroTxPowerSubframeConfigr10*>(items[1]) = cSIRSConfigr10ZeroTxPowerCSIRSr10SetupZeroTxPowerSubframeConfigr10; }

	CSIRSConfigr10ZeroTxPowerCSIRSr10SetupZeroTxPowerResourceConfigListr10& getCSIRSConfigr10ZeroTxPowerCSIRSr10SetupZeroTxPowerResourceConfigListr10() { return *static_cast<CSIRSConfigr10ZeroTxPowerCSIRSr10SetupZeroTxPowerResourceConfigListr10*>(items[0]); }
	CSIRSConfigr10ZeroTxPowerCSIRSr10SetupZeroTxPowerSubframeConfigr10& getCSIRSConfigr10ZeroTxPowerCSIRSr10SetupZeroTxPowerSubframeConfigr10() { return *static_cast<CSIRSConfigr10ZeroTxPowerCSIRSr10SetupZeroTxPowerSubframeConfigr10*>(items[1]); }
};

class CSIRSConfigr10ZeroTxPowerCSIRSr10 : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum CSIRSConfigr10ZeroTxPowerCSIRSr10Choices {
		cSIRSConfigr10ZeroTxPowerCSIRSr10Release = 0,
		cSIRSConfigr10ZeroTxPowerCSIRSr10Setup = 1,
	};
	static const Info theInfo;
	CSIRSConfigr10ZeroTxPowerCSIRSr10(): Choice(&theInfo) {}
};

class CSIRSConfigr10 : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CSIRSConfigr10(): Sequence(&theInfo) {}

	void setCSIRSConfigr10CsiRSr10(const CSIRSConfigr10CsiRSr10& cSIRSConfigr10CsiRSr10) { *static_cast<CSIRSConfigr10CsiRSr10*>(items[0]) = cSIRSConfigr10CsiRSr10; }
	void setCSIRSConfigr10ZeroTxPowerCSIRSr10(const CSIRSConfigr10ZeroTxPowerCSIRSr10& cSIRSConfigr10ZeroTxPowerCSIRSr10) { *static_cast<CSIRSConfigr10ZeroTxPowerCSIRSr10*>(items[1]) = cSIRSConfigr10ZeroTxPowerCSIRSr10; }

	CSIRSConfigr10CsiRSr10& getCSIRSConfigr10CsiRSr10() { return *static_cast<CSIRSConfigr10CsiRSr10*>(items[0]); }
	CSIRSConfigr10ZeroTxPowerCSIRSr10& getCSIRSConfigr10ZeroTxPowerCSIRSr10() { return *static_cast<CSIRSConfigr10ZeroTxPowerCSIRSr10*>(items[1]); }
};

typedef Integer<CONSTRAINED, 0, 549> N3PUCCHANListr10Item;

typedef SequenceOf<N3PUCCHANListr10Item, CONSTRAINED, 1, 4> PUCCHConfigDedicatedv1020PucchFormatr10Format3r10N3PUCCHANListr10;

typedef Null PUCCHConfigDedicatedv1020PucchFormatr10Format3r10TwoAntennaPortActivatedPUCCHFormat3r10Release;

typedef Integer<CONSTRAINED, 0, 549> N3PUCCHANListP1r10Item;

typedef SequenceOf<N3PUCCHANListP1r10Item, CONSTRAINED, 1, 4> PUCCHConfigDedicatedv1020PucchFormatr10Format3r10TwoAntennaPortActivatedPUCCHFormat3r10SetupN3PUCCHANListP1r10;

class PUCCHConfigDedicatedv1020PucchFormatr10Format3r10TwoAntennaPortActivatedPUCCHFormat3r10Setup : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PUCCHConfigDedicatedv1020PucchFormatr10Format3r10TwoAntennaPortActivatedPUCCHFormat3r10Setup(): Sequence(&theInfo) {}
	PUCCHConfigDedicatedv1020PucchFormatr10Format3r10TwoAntennaPortActivatedPUCCHFormat3r10Setup(const PUCCHConfigDedicatedv1020PucchFormatr10Format3r10TwoAntennaPortActivatedPUCCHFormat3r10SetupN3PUCCHANListP1r10& pUCCHConfigDedicatedv1020PucchFormatr10Format3r10TwoAntennaPortActivatedPUCCHFormat3r10SetupN3PUCCHANListP1r10);

	void setPUCCHConfigDedicatedv1020PucchFormatr10Format3r10TwoAntennaPortActivatedPUCCHFormat3r10SetupN3PUCCHANListP1r10(const PUCCHConfigDedicatedv1020PucchFormatr10Format3r10TwoAntennaPortActivatedPUCCHFormat3r10SetupN3PUCCHANListP1r10& pUCCHConfigDedicatedv1020PucchFormatr10Format3r10TwoAntennaPortActivatedPUCCHFormat3r10SetupN3PUCCHANListP1r10) { *static_cast<PUCCHConfigDedicatedv1020PucchFormatr10Format3r10TwoAntennaPortActivatedPUCCHFormat3r10SetupN3PUCCHANListP1r10*>(items[0]) = pUCCHConfigDedicatedv1020PucchFormatr10Format3r10TwoAntennaPortActivatedPUCCHFormat3r10SetupN3PUCCHANListP1r10; }

	PUCCHConfigDedicatedv1020PucchFormatr10Format3r10TwoAntennaPortActivatedPUCCHFormat3r10SetupN3PUCCHANListP1r10& getPUCCHConfigDedicatedv1020PucchFormatr10Format3r10TwoAntennaPortActivatedPUCCHFormat3r10SetupN3PUCCHANListP1r10() { return *static_cast<PUCCHConfigDedicatedv1020PucchFormatr10Format3r10TwoAntennaPortActivatedPUCCHFormat3r10SetupN3PUCCHANListP1r10*>(items[0]); }
};

class PUCCHConfigDedicatedv1020PucchFormatr10Format3r10TwoAntennaPortActivatedPUCCHFormat3r10 : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum PUCCHConfigDedicatedv1020PucchFormatr10Format3r10TwoAntennaPortActivatedPUCCHFormat3r10Choices {
		pUCCHConfigDedicatedv1020PucchFormatr10Format3r10TwoAntennaPortActivatedPUCCHFormat3r10Release = 0,
		pUCCHConfigDedicatedv1020PucchFormatr10Format3r10TwoAntennaPortActivatedPUCCHFormat3r10Setup = 1,
	};
	static const Info theInfo;
	PUCCHConfigDedicatedv1020PucchFormatr10Format3r10TwoAntennaPortActivatedPUCCHFormat3r10(): Choice(&theInfo) {}
};

class PUCCHConfigDedicatedv1020PucchFormatr10Format3r10 : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PUCCHConfigDedicatedv1020PucchFormatr10Format3r10(): Sequence(&theInfo) {}

	void setPUCCHConfigDedicatedv1020PucchFormatr10Format3r10N3PUCCHANListr10(const PUCCHConfigDedicatedv1020PucchFormatr10Format3r10N3PUCCHANListr10& pUCCHConfigDedicatedv1020PucchFormatr10Format3r10N3PUCCHANListr10) { *static_cast<PUCCHConfigDedicatedv1020PucchFormatr10Format3r10N3PUCCHANListr10*>(items[0]) = pUCCHConfigDedicatedv1020PucchFormatr10Format3r10N3PUCCHANListr10; }
	void setPUCCHConfigDedicatedv1020PucchFormatr10Format3r10TwoAntennaPortActivatedPUCCHFormat3r10(const PUCCHConfigDedicatedv1020PucchFormatr10Format3r10TwoAntennaPortActivatedPUCCHFormat3r10& pUCCHConfigDedicatedv1020PucchFormatr10Format3r10TwoAntennaPortActivatedPUCCHFormat3r10) { *static_cast<PUCCHConfigDedicatedv1020PucchFormatr10Format3r10TwoAntennaPortActivatedPUCCHFormat3r10*>(items[1]) = pUCCHConfigDedicatedv1020PucchFormatr10Format3r10TwoAntennaPortActivatedPUCCHFormat3r10; }

	PUCCHConfigDedicatedv1020PucchFormatr10Format3r10N3PUCCHANListr10& getPUCCHConfigDedicatedv1020PucchFormatr10Format3r10N3PUCCHANListr10() { return *static_cast<PUCCHConfigDedicatedv1020PucchFormatr10Format3r10N3PUCCHANListr10*>(items[0]); }
	PUCCHConfigDedicatedv1020PucchFormatr10Format3r10TwoAntennaPortActivatedPUCCHFormat3r10& getPUCCHConfigDedicatedv1020PucchFormatr10Format3r10TwoAntennaPortActivatedPUCCHFormat3r10() { return *static_cast<PUCCHConfigDedicatedv1020PucchFormatr10Format3r10TwoAntennaPortActivatedPUCCHFormat3r10*>(items[1]); }
};

typedef Null PUCCHConfigDedicatedv1020PucchFormatr10ChannelSelectionr10N1PUCCHANCSr10Release;

typedef Integer<CONSTRAINED, 0, 2047> N1PUCCHANCSr10Item;

typedef SequenceOf<N1PUCCHANCSr10Item, CONSTRAINED, 1, 4> N1PUCCHANCSr10;

typedef SequenceOf<N1PUCCHANCSr10, CONSTRAINED, 1, 2> PUCCHConfigDedicatedv1020PucchFormatr10ChannelSelectionr10N1PUCCHANCSr10SetupN1PUCCHANCSListr10;

class PUCCHConfigDedicatedv1020PucchFormatr10ChannelSelectionr10N1PUCCHANCSr10Setup : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PUCCHConfigDedicatedv1020PucchFormatr10ChannelSelectionr10N1PUCCHANCSr10Setup(): Sequence(&theInfo) {}
	PUCCHConfigDedicatedv1020PucchFormatr10ChannelSelectionr10N1PUCCHANCSr10Setup(const PUCCHConfigDedicatedv1020PucchFormatr10ChannelSelectionr10N1PUCCHANCSr10SetupN1PUCCHANCSListr10& pUCCHConfigDedicatedv1020PucchFormatr10ChannelSelectionr10N1PUCCHANCSr10SetupN1PUCCHANCSListr10);

	void setPUCCHConfigDedicatedv1020PucchFormatr10ChannelSelectionr10N1PUCCHANCSr10SetupN1PUCCHANCSListr10(const PUCCHConfigDedicatedv1020PucchFormatr10ChannelSelectionr10N1PUCCHANCSr10SetupN1PUCCHANCSListr10& pUCCHConfigDedicatedv1020PucchFormatr10ChannelSelectionr10N1PUCCHANCSr10SetupN1PUCCHANCSListr10) { *static_cast<PUCCHConfigDedicatedv1020PucchFormatr10ChannelSelectionr10N1PUCCHANCSr10SetupN1PUCCHANCSListr10*>(items[0]) = pUCCHConfigDedicatedv1020PucchFormatr10ChannelSelectionr10N1PUCCHANCSr10SetupN1PUCCHANCSListr10; }

	PUCCHConfigDedicatedv1020PucchFormatr10ChannelSelectionr10N1PUCCHANCSr10SetupN1PUCCHANCSListr10& getPUCCHConfigDedicatedv1020PucchFormatr10ChannelSelectionr10N1PUCCHANCSr10SetupN1PUCCHANCSListr10() { return *static_cast<PUCCHConfigDedicatedv1020PucchFormatr10ChannelSelectionr10N1PUCCHANCSr10SetupN1PUCCHANCSListr10*>(items[0]); }
};

class PUCCHConfigDedicatedv1020PucchFormatr10ChannelSelectionr10N1PUCCHANCSr10 : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum PUCCHConfigDedicatedv1020PucchFormatr10ChannelSelectionr10N1PUCCHANCSr10Choices {
		pUCCHConfigDedicatedv1020PucchFormatr10ChannelSelectionr10N1PUCCHANCSr10Release = 0,
		pUCCHConfigDedicatedv1020PucchFormatr10ChannelSelectionr10N1PUCCHANCSr10Setup = 1,
	};
	static const Info theInfo;
	PUCCHConfigDedicatedv1020PucchFormatr10ChannelSelectionr10N1PUCCHANCSr10(): Choice(&theInfo) {}
};

class PUCCHConfigDedicatedv1020PucchFormatr10ChannelSelectionr10 : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PUCCHConfigDedicatedv1020PucchFormatr10ChannelSelectionr10(): Sequence(&theInfo) {}

	void setPUCCHConfigDedicatedv1020PucchFormatr10ChannelSelectionr10N1PUCCHANCSr10(const PUCCHConfigDedicatedv1020PucchFormatr10ChannelSelectionr10N1PUCCHANCSr10& pUCCHConfigDedicatedv1020PucchFormatr10ChannelSelectionr10N1PUCCHANCSr10) { *static_cast<PUCCHConfigDedicatedv1020PucchFormatr10ChannelSelectionr10N1PUCCHANCSr10*>(items[0]) = pUCCHConfigDedicatedv1020PucchFormatr10ChannelSelectionr10N1PUCCHANCSr10; }

	PUCCHConfigDedicatedv1020PucchFormatr10ChannelSelectionr10N1PUCCHANCSr10& getPUCCHConfigDedicatedv1020PucchFormatr10ChannelSelectionr10N1PUCCHANCSr10() { return *static_cast<PUCCHConfigDedicatedv1020PucchFormatr10ChannelSelectionr10N1PUCCHANCSr10*>(items[0]); }
};

class PUCCHConfigDedicatedv1020PucchFormatr10 : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum PUCCHConfigDedicatedv1020PucchFormatr10Choices {
		pUCCHConfigDedicatedv1020PucchFormatr10Format3r10 = 0,
		pUCCHConfigDedicatedv1020PucchFormatr10ChannelSelectionr10 = 1,
	};
	static const Info theInfo;
	PUCCHConfigDedicatedv1020PucchFormatr10(): Choice(&theInfo) {}
};

enum PUCCHConfigDedicatedv1020twoAntennaPortActivatedPUCCH_Format1a1b_r10Values {
	true_PUCCHConfigDedicatedv1020twoAntennaPortActivatedPUCCH_Format1a1b_r10 = 0,
};
typedef Enumerated<CONSTRAINED, 0> PUCCHConfigDedicatedv1020twoAntennaPortActivatedPUCCH_Format1a1b_r10;

enum PUCCHConfigDedicatedv1020simultaneousPUCCH_PUSCH_r10Values {
	true_PUCCHConfigDedicatedv1020simultaneousPUCCH_PUSCH_r10 = 0,
};
typedef Enumerated<CONSTRAINED, 0> PUCCHConfigDedicatedv1020simultaneousPUCCH_PUSCH_r10;

typedef Integer<CONSTRAINED, 0, 2047> PUCCHConfigDedicatedv1020N1PUCCHANRepP1r10;

class PUCCHConfigDedicatedv1020 : public Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	PUCCHConfigDedicatedv1020(): Sequence(&theInfo) {}

	void setPUCCHConfigDedicatedv1020PucchFormatr10(const PUCCHConfigDedicatedv1020PucchFormatr10& pUCCHConfigDedicatedv1020PucchFormatr10) { *static_cast<PUCCHConfigDedicatedv1020PucchFormatr10*>(items[0]) = pUCCHConfigDedicatedv1020PucchFormatr10; }
	void setPUCCHConfigDedicatedv1020twoAntennaPortActivatedPUCCH_Format1a1b_r10(const PUCCHConfigDedicatedv1020twoAntennaPortActivatedPUCCH_Format1a1b_r10& pUCCHConfigDedicatedv1020twoAntennaPortActivatedPUCCH_Format1a1b_r10) { *static_cast<PUCCHConfigDedicatedv1020twoAntennaPortActivatedPUCCH_Format1a1b_r10*>(items[1]) = pUCCHConfigDedicatedv1020twoAntennaPortActivatedPUCCH_Format1a1b_r10; }
	void setPUCCHConfigDedicatedv1020simultaneousPUCCH_PUSCH_r10(const PUCCHConfigDedicatedv1020simultaneousPUCCH_PUSCH_r10& pUCCHConfigDedicatedv1020simultaneousPUCCH_PUSCH_r10) { *static_cast<PUCCHConfigDedicatedv1020simultaneousPUCCH_PUSCH_r10*>(items[2]) = pUCCHConfigDedicatedv1020simultaneousPUCCH_PUSCH_r10; }
	void setPUCCHConfigDedicatedv1020N1PUCCHANRepP1r10(const PUCCHConfigDedicatedv1020N1PUCCHANRepP1r10& pUCCHConfigDedicatedv1020N1PUCCHANRepP1r10) { *static_cast<PUCCHConfigDedicatedv1020N1PUCCHANRepP1r10*>(items[3]) = pUCCHConfigDedicatedv1020N1PUCCHANRepP1r10; }

	PUCCHConfigDedicatedv1020PucchFormatr10& getPUCCHConfigDedicatedv1020PucchFormatr10() { return *static_cast<PUCCHConfigDedicatedv1020PucchFormatr10*>(items[0]); }
	PUCCHConfigDedicatedv1020twoAntennaPortActivatedPUCCH_Format1a1b_r10& getPUCCHConfigDedicatedv1020twoAntennaPortActivatedPUCCH_Format1a1b_r10() { return *static_cast<PUCCHConfigDedicatedv1020twoAntennaPortActivatedPUCCH_Format1a1b_r10*>(items[1]); }
	PUCCHConfigDedicatedv1020simultaneousPUCCH_PUSCH_r10& getPUCCHConfigDedicatedv1020simultaneousPUCCH_PUSCH_r10() { return *static_cast<PUCCHConfigDedicatedv1020simultaneousPUCCH_PUSCH_r10*>(items[2]); }
	PUCCHConfigDedicatedv1020N1PUCCHANRepP1r10& getPUCCHConfigDedicatedv1020N1PUCCHANRepP1r10() { return *static_cast<PUCCHConfigDedicatedv1020N1PUCCHANRepP1r10*>(items[3]); }
};

typedef Integer<CONSTRAINED, 0, 15> PUSCHConfigDedicatedv1020BetaOffsetMCr10BetaOffsetACKIndexMCr10;

typedef Integer<CONSTRAINED, 0, 15> PUSCHConfigDedicatedv1020BetaOffsetMCr10BetaOffsetRIIndexMCr10;

typedef Integer<CONSTRAINED, 0, 15> PUSCHConfigDedicatedv1020BetaOffsetMCr10BetaOffsetCQIIndexMCr10;

class PUSCHConfigDedicatedv1020BetaOffsetMCr10 : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PUSCHConfigDedicatedv1020BetaOffsetMCr10(): Sequence(&theInfo) {}
	PUSCHConfigDedicatedv1020BetaOffsetMCr10(const PUSCHConfigDedicatedv1020BetaOffsetMCr10BetaOffsetACKIndexMCr10& pUSCHConfigDedicatedv1020BetaOffsetMCr10BetaOffsetACKIndexMCr10, const PUSCHConfigDedicatedv1020BetaOffsetMCr10BetaOffsetRIIndexMCr10& pUSCHConfigDedicatedv1020BetaOffsetMCr10BetaOffsetRIIndexMCr10, const PUSCHConfigDedicatedv1020BetaOffsetMCr10BetaOffsetCQIIndexMCr10& pUSCHConfigDedicatedv1020BetaOffsetMCr10BetaOffsetCQIIndexMCr10);

	void setPUSCHConfigDedicatedv1020BetaOffsetMCr10BetaOffsetACKIndexMCr10(const PUSCHConfigDedicatedv1020BetaOffsetMCr10BetaOffsetACKIndexMCr10& pUSCHConfigDedicatedv1020BetaOffsetMCr10BetaOffsetACKIndexMCr10) { *static_cast<PUSCHConfigDedicatedv1020BetaOffsetMCr10BetaOffsetACKIndexMCr10*>(items[0]) = pUSCHConfigDedicatedv1020BetaOffsetMCr10BetaOffsetACKIndexMCr10; }
	void setPUSCHConfigDedicatedv1020BetaOffsetMCr10BetaOffsetRIIndexMCr10(const PUSCHConfigDedicatedv1020BetaOffsetMCr10BetaOffsetRIIndexMCr10& pUSCHConfigDedicatedv1020BetaOffsetMCr10BetaOffsetRIIndexMCr10) { *static_cast<PUSCHConfigDedicatedv1020BetaOffsetMCr10BetaOffsetRIIndexMCr10*>(items[1]) = pUSCHConfigDedicatedv1020BetaOffsetMCr10BetaOffsetRIIndexMCr10; }
	void setPUSCHConfigDedicatedv1020BetaOffsetMCr10BetaOffsetCQIIndexMCr10(const PUSCHConfigDedicatedv1020BetaOffsetMCr10BetaOffsetCQIIndexMCr10& pUSCHConfigDedicatedv1020BetaOffsetMCr10BetaOffsetCQIIndexMCr10) { *static_cast<PUSCHConfigDedicatedv1020BetaOffsetMCr10BetaOffsetCQIIndexMCr10*>(items[2]) = pUSCHConfigDedicatedv1020BetaOffsetMCr10BetaOffsetCQIIndexMCr10; }

	PUSCHConfigDedicatedv1020BetaOffsetMCr10BetaOffsetACKIndexMCr10& getPUSCHConfigDedicatedv1020BetaOffsetMCr10BetaOffsetACKIndexMCr10() { return *static_cast<PUSCHConfigDedicatedv1020BetaOffsetMCr10BetaOffsetACKIndexMCr10*>(items[0]); }
	PUSCHConfigDedicatedv1020BetaOffsetMCr10BetaOffsetRIIndexMCr10& getPUSCHConfigDedicatedv1020BetaOffsetMCr10BetaOffsetRIIndexMCr10() { return *static_cast<PUSCHConfigDedicatedv1020BetaOffsetMCr10BetaOffsetRIIndexMCr10*>(items[1]); }
	PUSCHConfigDedicatedv1020BetaOffsetMCr10BetaOffsetCQIIndexMCr10& getPUSCHConfigDedicatedv1020BetaOffsetMCr10BetaOffsetCQIIndexMCr10() { return *static_cast<PUSCHConfigDedicatedv1020BetaOffsetMCr10BetaOffsetCQIIndexMCr10*>(items[2]); }
};

enum PUSCHConfigDedicatedv1020groupHoppingDisabled_r10Values {
	true_PUSCHConfigDedicatedv1020groupHoppingDisabled_r10 = 0,
};
typedef Enumerated<CONSTRAINED, 0> PUSCHConfigDedicatedv1020groupHoppingDisabled_r10;

enum PUSCHConfigDedicatedv1020dmrs_WithOCC_Activated_r10Values {
	true_PUSCHConfigDedicatedv1020dmrs_WithOCC_Activated_r10 = 0,
};
typedef Enumerated<CONSTRAINED, 0> PUSCHConfigDedicatedv1020dmrs_WithOCC_Activated_r10;

class PUSCHConfigDedicatedv1020 : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PUSCHConfigDedicatedv1020(): Sequence(&theInfo) {}

	void setPUSCHConfigDedicatedv1020BetaOffsetMCr10(const PUSCHConfigDedicatedv1020BetaOffsetMCr10& pUSCHConfigDedicatedv1020BetaOffsetMCr10) { *static_cast<PUSCHConfigDedicatedv1020BetaOffsetMCr10*>(items[0]) = pUSCHConfigDedicatedv1020BetaOffsetMCr10; }
	void setPUSCHConfigDedicatedv1020groupHoppingDisabled_r10(const PUSCHConfigDedicatedv1020groupHoppingDisabled_r10& pUSCHConfigDedicatedv1020groupHoppingDisabled_r10) { *static_cast<PUSCHConfigDedicatedv1020groupHoppingDisabled_r10*>(items[1]) = pUSCHConfigDedicatedv1020groupHoppingDisabled_r10; }
	void setPUSCHConfigDedicatedv1020dmrs_WithOCC_Activated_r10(const PUSCHConfigDedicatedv1020dmrs_WithOCC_Activated_r10& pUSCHConfigDedicatedv1020dmrs_WithOCC_Activated_r10) { *static_cast<PUSCHConfigDedicatedv1020dmrs_WithOCC_Activated_r10*>(items[2]) = pUSCHConfigDedicatedv1020dmrs_WithOCC_Activated_r10; }

	PUSCHConfigDedicatedv1020BetaOffsetMCr10& getPUSCHConfigDedicatedv1020BetaOffsetMCr10() { return *static_cast<PUSCHConfigDedicatedv1020BetaOffsetMCr10*>(items[0]); }
	PUSCHConfigDedicatedv1020groupHoppingDisabled_r10& getPUSCHConfigDedicatedv1020groupHoppingDisabled_r10() { return *static_cast<PUSCHConfigDedicatedv1020groupHoppingDisabled_r10*>(items[1]); }
	PUSCHConfigDedicatedv1020dmrs_WithOCC_Activated_r10& getPUSCHConfigDedicatedv1020dmrs_WithOCC_Activated_r10() { return *static_cast<PUSCHConfigDedicatedv1020dmrs_WithOCC_Activated_r10*>(items[2]); }
};

typedef Integer<CONSTRAINED, 0, 2047> SchedulingRequestConfigv1020SrPUCCHResourceIndexP1r10;

class SchedulingRequestConfigv1020 : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SchedulingRequestConfigv1020(): Sequence(&theInfo) {}

	void setSchedulingRequestConfigv1020SrPUCCHResourceIndexP1r10(const SchedulingRequestConfigv1020SrPUCCHResourceIndexP1r10& schedulingRequestConfigv1020SrPUCCHResourceIndexP1r10) { *static_cast<SchedulingRequestConfigv1020SrPUCCHResourceIndexP1r10*>(items[0]) = schedulingRequestConfigv1020SrPUCCHResourceIndexP1r10; }

	SchedulingRequestConfigv1020SrPUCCHResourceIndexP1r10& getSchedulingRequestConfigv1020SrPUCCHResourceIndexP1r10() { return *static_cast<SchedulingRequestConfigv1020SrPUCCHResourceIndexP1r10*>(items[0]); }
};

enum SRSAntennaPortValues {
	an1_SRSAntennaPort = 0,
	an2_SRSAntennaPort = 1,
	an4_SRSAntennaPort = 2,
	spare1_SRSAntennaPort = 3,
};
typedef Enumerated<CONSTRAINED, 3> SRSAntennaPort;

class SoundingRSULConfigDedicatedv1020 : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SoundingRSULConfigDedicatedv1020(): Sequence(&theInfo) {}
	SoundingRSULConfigDedicatedv1020(const SRSAntennaPort& srsAntennaPortr10);

	void setSrsAntennaPortr10(const SRSAntennaPort& srsAntennaPortr10) { *static_cast<SRSAntennaPort*>(items[0]) = srsAntennaPortr10; }

	SRSAntennaPort& getSrsAntennaPortr10() { return *static_cast<SRSAntennaPort*>(items[0]); }
};

typedef Null SoundingRSULConfigDedicatedAperiodicr10Release;

typedef Integer<CONSTRAINED, 0, 31> SoundingRSULConfigDedicatedAperiodicr10SetupSrsConfigIndexApr10;

enum SRSConfigApr10srs_BandwidthAp_r10Values {
	bw0_SRSConfigApr10srs_BandwidthAp_r10 = 0,
	bw1_SRSConfigApr10srs_BandwidthAp_r10 = 1,
	bw2_SRSConfigApr10srs_BandwidthAp_r10 = 2,
	bw3_SRSConfigApr10srs_BandwidthAp_r10 = 3,
};
typedef Enumerated<CONSTRAINED, 3> SRSConfigApr10srs_BandwidthAp_r10;

typedef Integer<CONSTRAINED, 0, 23> SRSConfigApr10FreqDomainPositionApr10;

typedef Integer<CONSTRAINED, 0, 1> SRSConfigApr10TransmissionCombApr10;

enum SRSConfigApr10cyclicShiftAp_r10Values {
	cs0_SRSConfigApr10cyclicShiftAp_r10 = 0,
	cs1_SRSConfigApr10cyclicShiftAp_r10 = 1,
	cs2_SRSConfigApr10cyclicShiftAp_r10 = 2,
	cs3_SRSConfigApr10cyclicShiftAp_r10 = 3,
	cs4_SRSConfigApr10cyclicShiftAp_r10 = 4,
	cs5_SRSConfigApr10cyclicShiftAp_r10 = 5,
	cs6_SRSConfigApr10cyclicShiftAp_r10 = 6,
	cs7_SRSConfigApr10cyclicShiftAp_r10 = 7,
};
typedef Enumerated<CONSTRAINED, 7> SRSConfigApr10cyclicShiftAp_r10;

class SRSConfigApr10 : public Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	SRSConfigApr10(): Sequence(&theInfo) {}
	SRSConfigApr10(const SRSAntennaPort& srsAntennaPortApr10, const SRSConfigApr10srs_BandwidthAp_r10& sRSConfigApr10srs_BandwidthAp_r10, const SRSConfigApr10FreqDomainPositionApr10& sRSConfigApr10FreqDomainPositionApr10, const SRSConfigApr10TransmissionCombApr10& sRSConfigApr10TransmissionCombApr10, const SRSConfigApr10cyclicShiftAp_r10& sRSConfigApr10cyclicShiftAp_r10);

	void setSrsAntennaPortApr10(const SRSAntennaPort& srsAntennaPortApr10) { *static_cast<SRSAntennaPort*>(items[0]) = srsAntennaPortApr10; }
	void setSRSConfigApr10srs_BandwidthAp_r10(const SRSConfigApr10srs_BandwidthAp_r10& sRSConfigApr10srs_BandwidthAp_r10) { *static_cast<SRSConfigApr10srs_BandwidthAp_r10*>(items[1]) = sRSConfigApr10srs_BandwidthAp_r10; }
	void setSRSConfigApr10FreqDomainPositionApr10(const SRSConfigApr10FreqDomainPositionApr10& sRSConfigApr10FreqDomainPositionApr10) { *static_cast<SRSConfigApr10FreqDomainPositionApr10*>(items[2]) = sRSConfigApr10FreqDomainPositionApr10; }
	void setSRSConfigApr10TransmissionCombApr10(const SRSConfigApr10TransmissionCombApr10& sRSConfigApr10TransmissionCombApr10) { *static_cast<SRSConfigApr10TransmissionCombApr10*>(items[3]) = sRSConfigApr10TransmissionCombApr10; }
	void setSRSConfigApr10cyclicShiftAp_r10(const SRSConfigApr10cyclicShiftAp_r10& sRSConfigApr10cyclicShiftAp_r10) { *static_cast<SRSConfigApr10cyclicShiftAp_r10*>(items[4]) = sRSConfigApr10cyclicShiftAp_r10; }

	SRSAntennaPort& getSrsAntennaPortApr10() { return *static_cast<SRSAntennaPort*>(items[0]); }
	SRSConfigApr10srs_BandwidthAp_r10& getSRSConfigApr10srs_BandwidthAp_r10() { return *static_cast<SRSConfigApr10srs_BandwidthAp_r10*>(items[1]); }
	SRSConfigApr10FreqDomainPositionApr10& getSRSConfigApr10FreqDomainPositionApr10() { return *static_cast<SRSConfigApr10FreqDomainPositionApr10*>(items[2]); }
	SRSConfigApr10TransmissionCombApr10& getSRSConfigApr10TransmissionCombApr10() { return *static_cast<SRSConfigApr10TransmissionCombApr10*>(items[3]); }
	SRSConfigApr10cyclicShiftAp_r10& getSRSConfigApr10cyclicShiftAp_r10() { return *static_cast<SRSConfigApr10cyclicShiftAp_r10*>(items[4]); }
};

typedef SequenceOf<SRSConfigApr10, CONSTRAINED, 1, 3> SoundingRSULConfigDedicatedAperiodicr10SetupSrsConfigApDCIFormat4r10;

typedef Null SoundingRSULConfigDedicatedAperiodicr10SetupSrsActivateApr10Release;

class SoundingRSULConfigDedicatedAperiodicr10SetupSrsActivateApr10Setup : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SoundingRSULConfigDedicatedAperiodicr10SetupSrsActivateApr10Setup(): Sequence(&theInfo) {}
	SoundingRSULConfigDedicatedAperiodicr10SetupSrsActivateApr10Setup(const SRSConfigApr10& srsConfigApDCIFormat0r10, const SRSConfigApr10& srsConfigApDCIFormat1a2b2cr10);

	void setSrsConfigApDCIFormat0r10(const SRSConfigApr10& srsConfigApDCIFormat0r10) { *static_cast<SRSConfigApr10*>(items[0]) = srsConfigApDCIFormat0r10; }
	void setSrsConfigApDCIFormat1a2b2cr10(const SRSConfigApr10& srsConfigApDCIFormat1a2b2cr10) { *static_cast<SRSConfigApr10*>(items[1]) = srsConfigApDCIFormat1a2b2cr10; }

	SRSConfigApr10& getSrsConfigApDCIFormat0r10() { return *static_cast<SRSConfigApr10*>(items[0]); }
	SRSConfigApr10& getSrsConfigApDCIFormat1a2b2cr10() { return *static_cast<SRSConfigApr10*>(items[1]); }
};

class SoundingRSULConfigDedicatedAperiodicr10SetupSrsActivateApr10 : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum SoundingRSULConfigDedicatedAperiodicr10SetupSrsActivateApr10Choices {
		soundingRSULConfigDedicatedAperiodicr10SetupSrsActivateApr10Release = 0,
		soundingRSULConfigDedicatedAperiodicr10SetupSrsActivateApr10Setup = 1,
	};
	static const Info theInfo;
	SoundingRSULConfigDedicatedAperiodicr10SetupSrsActivateApr10(): Choice(&theInfo) {}
};

class SoundingRSULConfigDedicatedAperiodicr10Setup : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	SoundingRSULConfigDedicatedAperiodicr10Setup(): Sequence(&theInfo) {}
	SoundingRSULConfigDedicatedAperiodicr10Setup(const SoundingRSULConfigDedicatedAperiodicr10SetupSrsConfigIndexApr10& soundingRSULConfigDedicatedAperiodicr10SetupSrsConfigIndexApr10);

	void setSoundingRSULConfigDedicatedAperiodicr10SetupSrsConfigIndexApr10(const SoundingRSULConfigDedicatedAperiodicr10SetupSrsConfigIndexApr10& soundingRSULConfigDedicatedAperiodicr10SetupSrsConfigIndexApr10) { *static_cast<SoundingRSULConfigDedicatedAperiodicr10SetupSrsConfigIndexApr10*>(items[0]) = soundingRSULConfigDedicatedAperiodicr10SetupSrsConfigIndexApr10; }
	void setSoundingRSULConfigDedicatedAperiodicr10SetupSrsConfigApDCIFormat4r10(const SoundingRSULConfigDedicatedAperiodicr10SetupSrsConfigApDCIFormat4r10& soundingRSULConfigDedicatedAperiodicr10SetupSrsConfigApDCIFormat4r10) { *static_cast<SoundingRSULConfigDedicatedAperiodicr10SetupSrsConfigApDCIFormat4r10*>(items[1]) = soundingRSULConfigDedicatedAperiodicr10SetupSrsConfigApDCIFormat4r10; }
	void setSoundingRSULConfigDedicatedAperiodicr10SetupSrsActivateApr10(const SoundingRSULConfigDedicatedAperiodicr10SetupSrsActivateApr10& soundingRSULConfigDedicatedAperiodicr10SetupSrsActivateApr10) { *static_cast<SoundingRSULConfigDedicatedAperiodicr10SetupSrsActivateApr10*>(items[2]) = soundingRSULConfigDedicatedAperiodicr10SetupSrsActivateApr10; }

	SoundingRSULConfigDedicatedAperiodicr10SetupSrsConfigIndexApr10& getSoundingRSULConfigDedicatedAperiodicr10SetupSrsConfigIndexApr10() { return *static_cast<SoundingRSULConfigDedicatedAperiodicr10SetupSrsConfigIndexApr10*>(items[0]); }
	SoundingRSULConfigDedicatedAperiodicr10SetupSrsConfigApDCIFormat4r10& getSoundingRSULConfigDedicatedAperiodicr10SetupSrsConfigApDCIFormat4r10() { return *static_cast<SoundingRSULConfigDedicatedAperiodicr10SetupSrsConfigApDCIFormat4r10*>(items[1]); }
	SoundingRSULConfigDedicatedAperiodicr10SetupSrsActivateApr10& getSoundingRSULConfigDedicatedAperiodicr10SetupSrsActivateApr10() { return *static_cast<SoundingRSULConfigDedicatedAperiodicr10SetupSrsActivateApr10*>(items[2]); }
};

class SoundingRSULConfigDedicatedAperiodicr10 : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum SoundingRSULConfigDedicatedAperiodicr10Choices {
		soundingRSULConfigDedicatedAperiodicr10Release = 0,
		soundingRSULConfigDedicatedAperiodicr10Setup = 1,
	};
	static const Info theInfo;
	SoundingRSULConfigDedicatedAperiodicr10(): Choice(&theInfo) {}
};

enum DeltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format1_r10Values {
	dB0_DeltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format1_r10 = 0,
	dB_2_DeltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format1_r10 = 1,
};
typedef Enumerated<CONSTRAINED, 1> DeltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format1_r10;

enum DeltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format1a1b_r10Values {
	dB0_DeltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format1a1b_r10 = 0,
	dB_2_DeltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format1a1b_r10 = 1,
};
typedef Enumerated<CONSTRAINED, 1> DeltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format1a1b_r10;

enum DeltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format22a2b_r10Values {
	dB0_DeltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format22a2b_r10 = 0,
	dB_2_DeltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format22a2b_r10 = 1,
};
typedef Enumerated<CONSTRAINED, 1> DeltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format22a2b_r10;

enum DeltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format3_r10Values {
	dB0_DeltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format3_r10 = 0,
	dB_2_DeltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format3_r10 = 1,
};
typedef Enumerated<CONSTRAINED, 1> DeltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format3_r10;

class DeltaTxDOffsetListPUCCHr10 : public Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	DeltaTxDOffsetListPUCCHr10(): Sequence(&theInfo) {}
	DeltaTxDOffsetListPUCCHr10(const DeltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format1_r10& deltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format1_r10, const DeltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format1a1b_r10& deltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format1a1b_r10, const DeltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format22a2b_r10& deltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format22a2b_r10, const DeltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format3_r10& deltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format3_r10);

	void setDeltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format1_r10(const DeltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format1_r10& deltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format1_r10) { *static_cast<DeltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format1_r10*>(items[0]) = deltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format1_r10; }
	void setDeltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format1a1b_r10(const DeltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format1a1b_r10& deltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format1a1b_r10) { *static_cast<DeltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format1a1b_r10*>(items[1]) = deltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format1a1b_r10; }
	void setDeltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format22a2b_r10(const DeltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format22a2b_r10& deltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format22a2b_r10) { *static_cast<DeltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format22a2b_r10*>(items[2]) = deltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format22a2b_r10; }
	void setDeltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format3_r10(const DeltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format3_r10& deltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format3_r10) { *static_cast<DeltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format3_r10*>(items[3]) = deltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format3_r10; }

	DeltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format1_r10& getDeltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format1_r10() { return *static_cast<DeltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format1_r10*>(items[0]); }
	DeltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format1a1b_r10& getDeltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format1a1b_r10() { return *static_cast<DeltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format1a1b_r10*>(items[1]); }
	DeltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format22a2b_r10& getDeltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format22a2b_r10() { return *static_cast<DeltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format22a2b_r10*>(items[2]); }
	DeltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format3_r10& getDeltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format3_r10() { return *static_cast<DeltaTxDOffsetListPUCCHr10deltaTxD_OffsetPUCCH_Format3_r10*>(items[3]); }
};

typedef Integer<CONSTRAINED, 0, 15> UplinkPowerControlDedicatedv1020PSRSOffsetApr10;

class UplinkPowerControlDedicatedv1020 : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UplinkPowerControlDedicatedv1020(): Sequence(&theInfo) {}

	void setDeltaTxDOffsetListPUCCHr10(const DeltaTxDOffsetListPUCCHr10& deltaTxDOffsetListPUCCHr10) { *static_cast<DeltaTxDOffsetListPUCCHr10*>(items[0]) = deltaTxDOffsetListPUCCHr10; }
	void setUplinkPowerControlDedicatedv1020PSRSOffsetApr10(const UplinkPowerControlDedicatedv1020PSRSOffsetApr10& uplinkPowerControlDedicatedv1020PSRSOffsetApr10) { *static_cast<UplinkPowerControlDedicatedv1020PSRSOffsetApr10*>(items[1]) = uplinkPowerControlDedicatedv1020PSRSOffsetApr10; }

	DeltaTxDOffsetListPUCCHr10& getDeltaTxDOffsetListPUCCHr10() { return *static_cast<DeltaTxDOffsetListPUCCHr10*>(items[0]); }
	UplinkPowerControlDedicatedv1020PSRSOffsetApr10& getUplinkPowerControlDedicatedv1020PSRSOffsetApr10() { return *static_cast<UplinkPowerControlDedicatedv1020PSRSOffsetApr10*>(items[1]); }
};

typedef Null PhysicalConfigDedicatedAdditionalSpectrumEmissionCAr10Release;

typedef Integer<CONSTRAINED, 1, 32> AdditionalSpectrumEmission;

class PhysicalConfigDedicatedAdditionalSpectrumEmissionCAr10Setup : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PhysicalConfigDedicatedAdditionalSpectrumEmissionCAr10Setup(): Sequence(&theInfo) {}
	PhysicalConfigDedicatedAdditionalSpectrumEmissionCAr10Setup(const AdditionalSpectrumEmission& additionalSpectrumEmissionPCellr10);

	void setAdditionalSpectrumEmissionPCellr10(const AdditionalSpectrumEmission& additionalSpectrumEmissionPCellr10) { *static_cast<AdditionalSpectrumEmission*>(items[0]) = additionalSpectrumEmissionPCellr10; }

	AdditionalSpectrumEmission& getAdditionalSpectrumEmissionPCellr10() { return *static_cast<AdditionalSpectrumEmission*>(items[0]); }
};

class PhysicalConfigDedicatedAdditionalSpectrumEmissionCAr10 : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum PhysicalConfigDedicatedAdditionalSpectrumEmissionCAr10Choices {
		physicalConfigDedicatedAdditionalSpectrumEmissionCAr10Release = 0,
		physicalConfigDedicatedAdditionalSpectrumEmissionCAr10Setup = 1,
	};
	static const Info theInfo;
	PhysicalConfigDedicatedAdditionalSpectrumEmissionCAr10(): Choice(&theInfo) {}
};

class PhysicalConfigDedicated : public Sequence {
private:
	static const void *itemsInfo[24];
	static bool itemsPres[24];
public:
	static const Info theInfo;
	PhysicalConfigDedicated(): Sequence(&theInfo) {}

	void setPdschConfigDedicated(const PDSCHConfigDedicated& pdschConfigDedicated) { *static_cast<PDSCHConfigDedicated*>(items[0]) = pdschConfigDedicated; }
	void setPucchConfigDedicated(const PUCCHConfigDedicated& pucchConfigDedicated) { *static_cast<PUCCHConfigDedicated*>(items[1]) = pucchConfigDedicated; }
	void setPuschConfigDedicated(const PUSCHConfigDedicated& puschConfigDedicated) { *static_cast<PUSCHConfigDedicated*>(items[2]) = puschConfigDedicated; }
	void setUplinkPowerControlDedicated(const UplinkPowerControlDedicated& uplinkPowerControlDedicated) { *static_cast<UplinkPowerControlDedicated*>(items[3]) = uplinkPowerControlDedicated; }
	void setTpcPDCCHConfigPUCCH(const TPCPDCCHConfig& tpcPDCCHConfigPUCCH) { *static_cast<TPCPDCCHConfig*>(items[4]) = tpcPDCCHConfigPUCCH; }
	void setTpcPDCCHConfigPUSCH(const TPCPDCCHConfig& tpcPDCCHConfigPUSCH) { *static_cast<TPCPDCCHConfig*>(items[5]) = tpcPDCCHConfigPUSCH; }
	void setCqiReportConfig(const CQIReportConfig& cqiReportConfig) { *static_cast<CQIReportConfig*>(items[6]) = cqiReportConfig; }
	void setSoundingRSULConfigDedicated(const SoundingRSULConfigDedicated& soundingRSULConfigDedicated) { *static_cast<SoundingRSULConfigDedicated*>(items[7]) = soundingRSULConfigDedicated; }
	void setPhysicalConfigDedicatedAntennaInfo(const PhysicalConfigDedicatedAntennaInfo& physicalConfigDedicatedAntennaInfo) { *static_cast<PhysicalConfigDedicatedAntennaInfo*>(items[8]) = physicalConfigDedicatedAntennaInfo; }
	void setSchedulingRequestConfig(const SchedulingRequestConfig& schedulingRequestConfig) { *static_cast<SchedulingRequestConfig*>(items[9]) = schedulingRequestConfig; }
	void setCqiReportConfigv920(const CQIReportConfigv920& cqiReportConfigv920) { *static_cast<CQIReportConfigv920*>(items[10]) = cqiReportConfigv920; }
	void setAntennaInfov920(const AntennaInfoDedicatedv920& antennaInfov920) { *static_cast<AntennaInfoDedicatedv920*>(items[11]) = antennaInfov920; }
	void setPhysicalConfigDedicatedAntennaInfor10(const PhysicalConfigDedicatedAntennaInfor10& physicalConfigDedicatedAntennaInfor10) { *static_cast<PhysicalConfigDedicatedAntennaInfor10*>(items[12]) = physicalConfigDedicatedAntennaInfor10; }
	void setAntennaInfoULr10(const AntennaInfoULr10& antennaInfoULr10) { *static_cast<AntennaInfoULr10*>(items[13]) = antennaInfoULr10; }
	void setPhysicalConfigDedicatedCifPresencer10(const PhysicalConfigDedicatedCifPresencer10& physicalConfigDedicatedCifPresencer10) { *static_cast<PhysicalConfigDedicatedCifPresencer10*>(items[14]) = physicalConfigDedicatedCifPresencer10; }
	void setCqiReportConfigr10(const CQIReportConfigr10& cqiReportConfigr10) { *static_cast<CQIReportConfigr10*>(items[15]) = cqiReportConfigr10; }
	void setCsiRSConfigr10(const CSIRSConfigr10& csiRSConfigr10) { *static_cast<CSIRSConfigr10*>(items[16]) = csiRSConfigr10; }
	void setPucchConfigDedicatedv1020(const PUCCHConfigDedicatedv1020& pucchConfigDedicatedv1020) { *static_cast<PUCCHConfigDedicatedv1020*>(items[17]) = pucchConfigDedicatedv1020; }
	void setPuschConfigDedicatedv1020(const PUSCHConfigDedicatedv1020& puschConfigDedicatedv1020) { *static_cast<PUSCHConfigDedicatedv1020*>(items[18]) = puschConfigDedicatedv1020; }
	void setSchedulingRequestConfigv1020(const SchedulingRequestConfigv1020& schedulingRequestConfigv1020) { *static_cast<SchedulingRequestConfigv1020*>(items[19]) = schedulingRequestConfigv1020; }
	void setSoundingRSULConfigDedicatedv1020(const SoundingRSULConfigDedicatedv1020& soundingRSULConfigDedicatedv1020) { *static_cast<SoundingRSULConfigDedicatedv1020*>(items[20]) = soundingRSULConfigDedicatedv1020; }
	void setSoundingRSULConfigDedicatedAperiodicr10(const SoundingRSULConfigDedicatedAperiodicr10& soundingRSULConfigDedicatedAperiodicr10) { *static_cast<SoundingRSULConfigDedicatedAperiodicr10*>(items[21]) = soundingRSULConfigDedicatedAperiodicr10; }
	void setUplinkPowerControlDedicatedv1020(const UplinkPowerControlDedicatedv1020& uplinkPowerControlDedicatedv1020) { *static_cast<UplinkPowerControlDedicatedv1020*>(items[22]) = uplinkPowerControlDedicatedv1020; }
	void setPhysicalConfigDedicatedAdditionalSpectrumEmissionCAr10(const PhysicalConfigDedicatedAdditionalSpectrumEmissionCAr10& physicalConfigDedicatedAdditionalSpectrumEmissionCAr10) { *static_cast<PhysicalConfigDedicatedAdditionalSpectrumEmissionCAr10*>(items[23]) = physicalConfigDedicatedAdditionalSpectrumEmissionCAr10; }

	PDSCHConfigDedicated& getPdschConfigDedicated() { return *static_cast<PDSCHConfigDedicated*>(items[0]); }
	PUCCHConfigDedicated& getPucchConfigDedicated() { return *static_cast<PUCCHConfigDedicated*>(items[1]); }
	PUSCHConfigDedicated& getPuschConfigDedicated() { return *static_cast<PUSCHConfigDedicated*>(items[2]); }
	UplinkPowerControlDedicated& getUplinkPowerControlDedicated() { return *static_cast<UplinkPowerControlDedicated*>(items[3]); }
	TPCPDCCHConfig& getTpcPDCCHConfigPUCCH() { return *static_cast<TPCPDCCHConfig*>(items[4]); }
	TPCPDCCHConfig& getTpcPDCCHConfigPUSCH() { return *static_cast<TPCPDCCHConfig*>(items[5]); }
	CQIReportConfig& getCqiReportConfig() { return *static_cast<CQIReportConfig*>(items[6]); }
	SoundingRSULConfigDedicated& getSoundingRSULConfigDedicated() { return *static_cast<SoundingRSULConfigDedicated*>(items[7]); }
	PhysicalConfigDedicatedAntennaInfo& getPhysicalConfigDedicatedAntennaInfo() { return *static_cast<PhysicalConfigDedicatedAntennaInfo*>(items[8]); }
	SchedulingRequestConfig& getSchedulingRequestConfig() { return *static_cast<SchedulingRequestConfig*>(items[9]); }
	CQIReportConfigv920& getCqiReportConfigv920() { return *static_cast<CQIReportConfigv920*>(items[10]); }
	AntennaInfoDedicatedv920& getAntennaInfov920() { return *static_cast<AntennaInfoDedicatedv920*>(items[11]); }
	PhysicalConfigDedicatedAntennaInfor10& getPhysicalConfigDedicatedAntennaInfor10() { return *static_cast<PhysicalConfigDedicatedAntennaInfor10*>(items[12]); }
	AntennaInfoULr10& getAntennaInfoULr10() { return *static_cast<AntennaInfoULr10*>(items[13]); }
	PhysicalConfigDedicatedCifPresencer10& getPhysicalConfigDedicatedCifPresencer10() { return *static_cast<PhysicalConfigDedicatedCifPresencer10*>(items[14]); }
	CQIReportConfigr10& getCqiReportConfigr10() { return *static_cast<CQIReportConfigr10*>(items[15]); }
	CSIRSConfigr10& getCsiRSConfigr10() { return *static_cast<CSIRSConfigr10*>(items[16]); }
	PUCCHConfigDedicatedv1020& getPucchConfigDedicatedv1020() { return *static_cast<PUCCHConfigDedicatedv1020*>(items[17]); }
	PUSCHConfigDedicatedv1020& getPuschConfigDedicatedv1020() { return *static_cast<PUSCHConfigDedicatedv1020*>(items[18]); }
	SchedulingRequestConfigv1020& getSchedulingRequestConfigv1020() { return *static_cast<SchedulingRequestConfigv1020*>(items[19]); }
	SoundingRSULConfigDedicatedv1020& getSoundingRSULConfigDedicatedv1020() { return *static_cast<SoundingRSULConfigDedicatedv1020*>(items[20]); }
	SoundingRSULConfigDedicatedAperiodicr10& getSoundingRSULConfigDedicatedAperiodicr10() { return *static_cast<SoundingRSULConfigDedicatedAperiodicr10*>(items[21]); }
	UplinkPowerControlDedicatedv1020& getUplinkPowerControlDedicatedv1020() { return *static_cast<UplinkPowerControlDedicatedv1020*>(items[22]); }
	PhysicalConfigDedicatedAdditionalSpectrumEmissionCAr10& getPhysicalConfigDedicatedAdditionalSpectrumEmissionCAr10() { return *static_cast<PhysicalConfigDedicatedAdditionalSpectrumEmissionCAr10*>(items[23]); }
};

typedef Null RLFTimersAndConstantsr9Release;

enum RLFTimersAndConstantsr9Setupt301_r9Values {
	ms100_RLFTimersAndConstantsr9Setupt301_r9 = 0,
	ms200_RLFTimersAndConstantsr9Setupt301_r9 = 1,
	ms300_RLFTimersAndConstantsr9Setupt301_r9 = 2,
	ms400_RLFTimersAndConstantsr9Setupt301_r9 = 3,
	ms600_RLFTimersAndConstantsr9Setupt301_r9 = 4,
	ms1000_RLFTimersAndConstantsr9Setupt301_r9 = 5,
	ms1500_RLFTimersAndConstantsr9Setupt301_r9 = 6,
	ms2000_RLFTimersAndConstantsr9Setupt301_r9 = 7,
};
typedef Enumerated<CONSTRAINED, 7> RLFTimersAndConstantsr9Setupt301_r9;

enum RLFTimersAndConstantsr9Setupt310_r9Values {
	ms0_RLFTimersAndConstantsr9Setupt310_r9 = 0,
	ms50_RLFTimersAndConstantsr9Setupt310_r9 = 1,
	ms100_RLFTimersAndConstantsr9Setupt310_r9 = 2,
	ms200_RLFTimersAndConstantsr9Setupt310_r9 = 3,
	ms500_RLFTimersAndConstantsr9Setupt310_r9 = 4,
	ms1000_RLFTimersAndConstantsr9Setupt310_r9 = 5,
	ms2000_RLFTimersAndConstantsr9Setupt310_r9 = 6,
};
typedef Enumerated<CONSTRAINED, 6> RLFTimersAndConstantsr9Setupt310_r9;

enum RLFTimersAndConstantsr9Setupn310_r9Values {
	n1_RLFTimersAndConstantsr9Setupn310_r9 = 0,
	n2_RLFTimersAndConstantsr9Setupn310_r9 = 1,
	n3_RLFTimersAndConstantsr9Setupn310_r9 = 2,
	n4_RLFTimersAndConstantsr9Setupn310_r9 = 3,
	n6_RLFTimersAndConstantsr9Setupn310_r9 = 4,
	n8_RLFTimersAndConstantsr9Setupn310_r9 = 5,
	n10_RLFTimersAndConstantsr9Setupn310_r9 = 6,
	n20_RLFTimersAndConstantsr9Setupn310_r9 = 7,
};
typedef Enumerated<CONSTRAINED, 7> RLFTimersAndConstantsr9Setupn310_r9;

enum RLFTimersAndConstantsr9Setupt311_r9Values {
	ms1000_RLFTimersAndConstantsr9Setupt311_r9 = 0,
	ms3000_RLFTimersAndConstantsr9Setupt311_r9 = 1,
	ms5000_RLFTimersAndConstantsr9Setupt311_r9 = 2,
	ms10000_RLFTimersAndConstantsr9Setupt311_r9 = 3,
	ms15000_RLFTimersAndConstantsr9Setupt311_r9 = 4,
	ms20000_RLFTimersAndConstantsr9Setupt311_r9 = 5,
	ms30000_RLFTimersAndConstantsr9Setupt311_r9 = 6,
};
typedef Enumerated<CONSTRAINED, 6> RLFTimersAndConstantsr9Setupt311_r9;

enum RLFTimersAndConstantsr9Setupn311_r9Values {
	n1_RLFTimersAndConstantsr9Setupn311_r9 = 0,
	n2_RLFTimersAndConstantsr9Setupn311_r9 = 1,
	n3_RLFTimersAndConstantsr9Setupn311_r9 = 2,
	n4_RLFTimersAndConstantsr9Setupn311_r9 = 3,
	n5_RLFTimersAndConstantsr9Setupn311_r9 = 4,
	n6_RLFTimersAndConstantsr9Setupn311_r9 = 5,
	n8_RLFTimersAndConstantsr9Setupn311_r9 = 6,
	n10_RLFTimersAndConstantsr9Setupn311_r9 = 7,
};
typedef Enumerated<CONSTRAINED, 7> RLFTimersAndConstantsr9Setupn311_r9;

class RLFTimersAndConstantsr9Setup : public Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	RLFTimersAndConstantsr9Setup(): Sequence(&theInfo) {}
	RLFTimersAndConstantsr9Setup(const RLFTimersAndConstantsr9Setupt301_r9& rLFTimersAndConstantsr9Setupt301_r9, const RLFTimersAndConstantsr9Setupt310_r9& rLFTimersAndConstantsr9Setupt310_r9, const RLFTimersAndConstantsr9Setupn310_r9& rLFTimersAndConstantsr9Setupn310_r9, const RLFTimersAndConstantsr9Setupt311_r9& rLFTimersAndConstantsr9Setupt311_r9, const RLFTimersAndConstantsr9Setupn311_r9& rLFTimersAndConstantsr9Setupn311_r9);

	void setRLFTimersAndConstantsr9Setupt301_r9(const RLFTimersAndConstantsr9Setupt301_r9& rLFTimersAndConstantsr9Setupt301_r9) { *static_cast<RLFTimersAndConstantsr9Setupt301_r9*>(items[0]) = rLFTimersAndConstantsr9Setupt301_r9; }
	void setRLFTimersAndConstantsr9Setupt310_r9(const RLFTimersAndConstantsr9Setupt310_r9& rLFTimersAndConstantsr9Setupt310_r9) { *static_cast<RLFTimersAndConstantsr9Setupt310_r9*>(items[1]) = rLFTimersAndConstantsr9Setupt310_r9; }
	void setRLFTimersAndConstantsr9Setupn310_r9(const RLFTimersAndConstantsr9Setupn310_r9& rLFTimersAndConstantsr9Setupn310_r9) { *static_cast<RLFTimersAndConstantsr9Setupn310_r9*>(items[2]) = rLFTimersAndConstantsr9Setupn310_r9; }
	void setRLFTimersAndConstantsr9Setupt311_r9(const RLFTimersAndConstantsr9Setupt311_r9& rLFTimersAndConstantsr9Setupt311_r9) { *static_cast<RLFTimersAndConstantsr9Setupt311_r9*>(items[3]) = rLFTimersAndConstantsr9Setupt311_r9; }
	void setRLFTimersAndConstantsr9Setupn311_r9(const RLFTimersAndConstantsr9Setupn311_r9& rLFTimersAndConstantsr9Setupn311_r9) { *static_cast<RLFTimersAndConstantsr9Setupn311_r9*>(items[4]) = rLFTimersAndConstantsr9Setupn311_r9; }

	RLFTimersAndConstantsr9Setupt301_r9& getRLFTimersAndConstantsr9Setupt301_r9() { return *static_cast<RLFTimersAndConstantsr9Setupt301_r9*>(items[0]); }
	RLFTimersAndConstantsr9Setupt310_r9& getRLFTimersAndConstantsr9Setupt310_r9() { return *static_cast<RLFTimersAndConstantsr9Setupt310_r9*>(items[1]); }
	RLFTimersAndConstantsr9Setupn310_r9& getRLFTimersAndConstantsr9Setupn310_r9() { return *static_cast<RLFTimersAndConstantsr9Setupn310_r9*>(items[2]); }
	RLFTimersAndConstantsr9Setupt311_r9& getRLFTimersAndConstantsr9Setupt311_r9() { return *static_cast<RLFTimersAndConstantsr9Setupt311_r9*>(items[3]); }
	RLFTimersAndConstantsr9Setupn311_r9& getRLFTimersAndConstantsr9Setupn311_r9() { return *static_cast<RLFTimersAndConstantsr9Setupn311_r9*>(items[4]); }
};

class RLFTimersAndConstantsr9 : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum RLFTimersAndConstantsr9Choices {
		rLFTimersAndConstantsr9Release = 0,
		rLFTimersAndConstantsr9Setup = 1,
	};
	static const Info theInfo;
	RLFTimersAndConstantsr9(): Choice(&theInfo) {}
};

typedef Null MeasSubframePatternPCellr10Release;

class MeasSubframePatternPCellr10 : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum MeasSubframePatternPCellr10Choices {
		measSubframePatternPCellr10Release = 0,
		setup = 1,
	};
	static const Info theInfo;
	MeasSubframePatternPCellr10(): Choice(&theInfo) {}
};

class RadioResourceConfigDedicated : public Sequence {
private:
	static const void *itemsInfo[8];
	static bool itemsPres[8];
public:
	static const Info theInfo;
	RadioResourceConfigDedicated(): Sequence(&theInfo) {}

	void setSrbToAddModList(const SRBToAddModList& srbToAddModList) { *static_cast<SRBToAddModList*>(items[0]) = srbToAddModList; }
	void setDrbToAddModList(const DRBToAddModList& drbToAddModList) { *static_cast<DRBToAddModList*>(items[1]) = drbToAddModList; }
	void setDrbToReleaseList(const DRBToReleaseList& drbToReleaseList) { *static_cast<DRBToReleaseList*>(items[2]) = drbToReleaseList; }
	void setRadioResourceConfigDedicatedMacMainConfig(const RadioResourceConfigDedicatedMacMainConfig& radioResourceConfigDedicatedMacMainConfig) { *static_cast<RadioResourceConfigDedicatedMacMainConfig*>(items[3]) = radioResourceConfigDedicatedMacMainConfig; }
	void setSpsConfig(const SPSConfig& spsConfig) { *static_cast<SPSConfig*>(items[4]) = spsConfig; }
	void setPhysicalConfigDedicated(const PhysicalConfigDedicated& physicalConfigDedicated) { *static_cast<PhysicalConfigDedicated*>(items[5]) = physicalConfigDedicated; }
	void setRlfTimersAndConstantsr9(const RLFTimersAndConstantsr9& rlfTimersAndConstantsr9) { *static_cast<RLFTimersAndConstantsr9*>(items[6]) = rlfTimersAndConstantsr9; }
	void setMeasSubframePatternPCellr10(const MeasSubframePatternPCellr10& measSubframePatternPCellr10) { *static_cast<MeasSubframePatternPCellr10*>(items[7]) = measSubframePatternPCellr10; }

	SRBToAddModList& getSrbToAddModList() { return *static_cast<SRBToAddModList*>(items[0]); }
	DRBToAddModList& getDrbToAddModList() { return *static_cast<DRBToAddModList*>(items[1]); }
	DRBToReleaseList& getDrbToReleaseList() { return *static_cast<DRBToReleaseList*>(items[2]); }
	RadioResourceConfigDedicatedMacMainConfig& getRadioResourceConfigDedicatedMacMainConfig() { return *static_cast<RadioResourceConfigDedicatedMacMainConfig*>(items[3]); }
	SPSConfig& getSpsConfig() { return *static_cast<SPSConfig*>(items[4]); }
	PhysicalConfigDedicated& getPhysicalConfigDedicated() { return *static_cast<PhysicalConfigDedicated*>(items[5]); }
	RLFTimersAndConstantsr9& getRlfTimersAndConstantsr9() { return *static_cast<RLFTimersAndConstantsr9*>(items[6]); }
	MeasSubframePatternPCellr10& getMeasSubframePatternPCellr10() { return *static_cast<MeasSubframePatternPCellr10*>(items[7]); }
};

typedef Integer<CONSTRAINED, 0, 7> NextHopChainingCount;

typedef OctetStringBase RRCConnectionReestablishmentv8a0IEsLateNonCriticalExtension;

class RRCConnectionReestablishmentv8a0IEsNonCriticalExtension : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RRCConnectionReestablishmentv8a0IEsNonCriticalExtension(): Sequence(&theInfo) {}


};

class RRCConnectionReestablishmentv8a0IEs : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionReestablishmentv8a0IEs(): Sequence(&theInfo) {}

	void setRRCConnectionReestablishmentv8a0IEsLateNonCriticalExtension(const RRCConnectionReestablishmentv8a0IEsLateNonCriticalExtension& rRCConnectionReestablishmentv8a0IEsLateNonCriticalExtension) { *static_cast<RRCConnectionReestablishmentv8a0IEsLateNonCriticalExtension*>(items[0]) = rRCConnectionReestablishmentv8a0IEsLateNonCriticalExtension; }
	void setRRCConnectionReestablishmentv8a0IEsNonCriticalExtension(const RRCConnectionReestablishmentv8a0IEsNonCriticalExtension& rRCConnectionReestablishmentv8a0IEsNonCriticalExtension) { *static_cast<RRCConnectionReestablishmentv8a0IEsNonCriticalExtension*>(items[1]) = rRCConnectionReestablishmentv8a0IEsNonCriticalExtension; }

	RRCConnectionReestablishmentv8a0IEsLateNonCriticalExtension& getRRCConnectionReestablishmentv8a0IEsLateNonCriticalExtension() { return *static_cast<RRCConnectionReestablishmentv8a0IEsLateNonCriticalExtension*>(items[0]); }
	RRCConnectionReestablishmentv8a0IEsNonCriticalExtension& getRRCConnectionReestablishmentv8a0IEsNonCriticalExtension() { return *static_cast<RRCConnectionReestablishmentv8a0IEsNonCriticalExtension*>(items[1]); }
};

class RRCConnectionReestablishmentr8IEs : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RRCConnectionReestablishmentr8IEs(): Sequence(&theInfo) {}
	RRCConnectionReestablishmentr8IEs(const RadioResourceConfigDedicated& radioResourceConfigDedicated, const NextHopChainingCount& nextHopChainingCount);

	void setRadioResourceConfigDedicated(const RadioResourceConfigDedicated& radioResourceConfigDedicated) { *static_cast<RadioResourceConfigDedicated*>(items[0]) = radioResourceConfigDedicated; }
	void setNextHopChainingCount(const NextHopChainingCount& nextHopChainingCount) { *static_cast<NextHopChainingCount*>(items[1]) = nextHopChainingCount; }
	void setNonCriticalExtension(const RRCConnectionReestablishmentv8a0IEs& nonCriticalExtension) { *static_cast<RRCConnectionReestablishmentv8a0IEs*>(items[2]) = nonCriticalExtension; }

	RadioResourceConfigDedicated& getRadioResourceConfigDedicated() { return *static_cast<RadioResourceConfigDedicated*>(items[0]); }
	NextHopChainingCount& getNextHopChainingCount() { return *static_cast<NextHopChainingCount*>(items[1]); }
	RRCConnectionReestablishmentv8a0IEs& getNonCriticalExtension() { return *static_cast<RRCConnectionReestablishmentv8a0IEs*>(items[2]); }
};

typedef Null RRCConnectionReestablishmentCriticalExtensionsC1Spare7;

typedef Null RRCConnectionReestablishmentCriticalExtensionsC1Spare6;

typedef Null RRCConnectionReestablishmentCriticalExtensionsC1Spare5;

typedef Null RRCConnectionReestablishmentCriticalExtensionsC1Spare4;

typedef Null RRCConnectionReestablishmentCriticalExtensionsC1Spare3;

typedef Null RRCConnectionReestablishmentCriticalExtensionsC1Spare2;

typedef Null RRCConnectionReestablishmentCriticalExtensionsC1Spare1;

class RRCConnectionReestablishmentCriticalExtensionsC1 : public Choice {
private:
	static const void *choicesInfo[8];
public:
	enum RRCConnectionReestablishmentCriticalExtensionsC1Choices {
		rrcConnectionReestablishmentr8 = 0,
		rRCConnectionReestablishmentCriticalExtensionsC1Spare7 = 1,
		rRCConnectionReestablishmentCriticalExtensionsC1Spare6 = 2,
		rRCConnectionReestablishmentCriticalExtensionsC1Spare5 = 3,
		rRCConnectionReestablishmentCriticalExtensionsC1Spare4 = 4,
		rRCConnectionReestablishmentCriticalExtensionsC1Spare3 = 5,
		rRCConnectionReestablishmentCriticalExtensionsC1Spare2 = 6,
		rRCConnectionReestablishmentCriticalExtensionsC1Spare1 = 7,
	};
	static const Info theInfo;
	RRCConnectionReestablishmentCriticalExtensionsC1(): Choice(&theInfo) {}
};

class RRCConnectionReestablishmentCriticalExtensionsCriticalExtensionsFuture : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RRCConnectionReestablishmentCriticalExtensionsCriticalExtensionsFuture(): Sequence(&theInfo) {}


};

class RRCConnectionReestablishmentCriticalExtensions : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum RRCConnectionReestablishmentCriticalExtensionsChoices {
		rRCConnectionReestablishmentCriticalExtensionsC1 = 0,
		rRCConnectionReestablishmentCriticalExtensionsCriticalExtensionsFuture = 1,
	};
	static const Info theInfo;
	RRCConnectionReestablishmentCriticalExtensions(): Choice(&theInfo) {}
};

class RRCConnectionReestablishment : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionReestablishment(): Sequence(&theInfo) {}
	RRCConnectionReestablishment(const RRCTransactionIdentifier& rrcTransactionIdentifier, const RRCConnectionReestablishmentCriticalExtensions& rRCConnectionReestablishmentCriticalExtensions);

	void setRrcTransactionIdentifier(const RRCTransactionIdentifier& rrcTransactionIdentifier) { *static_cast<RRCTransactionIdentifier*>(items[0]) = rrcTransactionIdentifier; }
	void setRRCConnectionReestablishmentCriticalExtensions(const RRCConnectionReestablishmentCriticalExtensions& rRCConnectionReestablishmentCriticalExtensions) { *static_cast<RRCConnectionReestablishmentCriticalExtensions*>(items[1]) = rRCConnectionReestablishmentCriticalExtensions; }

	RRCTransactionIdentifier& getRrcTransactionIdentifier() { return *static_cast<RRCTransactionIdentifier*>(items[0]); }
	RRCConnectionReestablishmentCriticalExtensions& getRRCConnectionReestablishmentCriticalExtensions() { return *static_cast<RRCConnectionReestablishmentCriticalExtensions*>(items[1]); }
};

typedef OctetStringBase RRCConnectionReestablishmentRejectv8a0IEsLateNonCriticalExtension;

class RRCConnectionReestablishmentRejectv8a0IEsNonCriticalExtension : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RRCConnectionReestablishmentRejectv8a0IEsNonCriticalExtension(): Sequence(&theInfo) {}


};

class RRCConnectionReestablishmentRejectv8a0IEs : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionReestablishmentRejectv8a0IEs(): Sequence(&theInfo) {}

	void setRRCConnectionReestablishmentRejectv8a0IEsLateNonCriticalExtension(const RRCConnectionReestablishmentRejectv8a0IEsLateNonCriticalExtension& rRCConnectionReestablishmentRejectv8a0IEsLateNonCriticalExtension) { *static_cast<RRCConnectionReestablishmentRejectv8a0IEsLateNonCriticalExtension*>(items[0]) = rRCConnectionReestablishmentRejectv8a0IEsLateNonCriticalExtension; }
	void setRRCConnectionReestablishmentRejectv8a0IEsNonCriticalExtension(const RRCConnectionReestablishmentRejectv8a0IEsNonCriticalExtension& rRCConnectionReestablishmentRejectv8a0IEsNonCriticalExtension) { *static_cast<RRCConnectionReestablishmentRejectv8a0IEsNonCriticalExtension*>(items[1]) = rRCConnectionReestablishmentRejectv8a0IEsNonCriticalExtension; }

	RRCConnectionReestablishmentRejectv8a0IEsLateNonCriticalExtension& getRRCConnectionReestablishmentRejectv8a0IEsLateNonCriticalExtension() { return *static_cast<RRCConnectionReestablishmentRejectv8a0IEsLateNonCriticalExtension*>(items[0]); }
	RRCConnectionReestablishmentRejectv8a0IEsNonCriticalExtension& getRRCConnectionReestablishmentRejectv8a0IEsNonCriticalExtension() { return *static_cast<RRCConnectionReestablishmentRejectv8a0IEsNonCriticalExtension*>(items[1]); }
};

class RRCConnectionReestablishmentRejectr8IEs : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RRCConnectionReestablishmentRejectr8IEs(): Sequence(&theInfo) {}

	void setNonCriticalExtension(const RRCConnectionReestablishmentRejectv8a0IEs& nonCriticalExtension) { *static_cast<RRCConnectionReestablishmentRejectv8a0IEs*>(items[0]) = nonCriticalExtension; }

	RRCConnectionReestablishmentRejectv8a0IEs& getNonCriticalExtension() { return *static_cast<RRCConnectionReestablishmentRejectv8a0IEs*>(items[0]); }
};

class RRCConnectionReestablishmentRejectCriticalExtensionsCriticalExtensionsFuture : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RRCConnectionReestablishmentRejectCriticalExtensionsCriticalExtensionsFuture(): Sequence(&theInfo) {}


};

class RRCConnectionReestablishmentRejectCriticalExtensions : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum RRCConnectionReestablishmentRejectCriticalExtensionsChoices {
		rrcConnectionReestablishmentRejectr8 = 0,
		rRCConnectionReestablishmentRejectCriticalExtensionsCriticalExtensionsFuture = 1,
	};
	static const Info theInfo;
	RRCConnectionReestablishmentRejectCriticalExtensions(): Choice(&theInfo) {}
};

class RRCConnectionReestablishmentReject : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RRCConnectionReestablishmentReject(): Sequence(&theInfo) {}
	RRCConnectionReestablishmentReject(const RRCConnectionReestablishmentRejectCriticalExtensions& rRCConnectionReestablishmentRejectCriticalExtensions);

	void setRRCConnectionReestablishmentRejectCriticalExtensions(const RRCConnectionReestablishmentRejectCriticalExtensions& rRCConnectionReestablishmentRejectCriticalExtensions) { *static_cast<RRCConnectionReestablishmentRejectCriticalExtensions*>(items[0]) = rRCConnectionReestablishmentRejectCriticalExtensions; }

	RRCConnectionReestablishmentRejectCriticalExtensions& getRRCConnectionReestablishmentRejectCriticalExtensions() { return *static_cast<RRCConnectionReestablishmentRejectCriticalExtensions*>(items[0]); }
};

typedef Integer<CONSTRAINED, 1, 16> RRCConnectionRejectr8IEsWaitTime;

typedef OctetStringBase RRCConnectionRejectv8a0IEsLateNonCriticalExtension;

typedef Integer<CONSTRAINED, 1, 1800> RRCConnectionRejectv1020IEsExtendedWaitTimer10;

class RRCConnectionRejectv1020IEsNonCriticalExtension : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RRCConnectionRejectv1020IEsNonCriticalExtension(): Sequence(&theInfo) {}


};

class RRCConnectionRejectv1020IEs : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionRejectv1020IEs(): Sequence(&theInfo) {}

	void setRRCConnectionRejectv1020IEsExtendedWaitTimer10(const RRCConnectionRejectv1020IEsExtendedWaitTimer10& rRCConnectionRejectv1020IEsExtendedWaitTimer10) { *static_cast<RRCConnectionRejectv1020IEsExtendedWaitTimer10*>(items[0]) = rRCConnectionRejectv1020IEsExtendedWaitTimer10; }
	void setRRCConnectionRejectv1020IEsNonCriticalExtension(const RRCConnectionRejectv1020IEsNonCriticalExtension& rRCConnectionRejectv1020IEsNonCriticalExtension) { *static_cast<RRCConnectionRejectv1020IEsNonCriticalExtension*>(items[1]) = rRCConnectionRejectv1020IEsNonCriticalExtension; }

	RRCConnectionRejectv1020IEsExtendedWaitTimer10& getRRCConnectionRejectv1020IEsExtendedWaitTimer10() { return *static_cast<RRCConnectionRejectv1020IEsExtendedWaitTimer10*>(items[0]); }
	RRCConnectionRejectv1020IEsNonCriticalExtension& getRRCConnectionRejectv1020IEsNonCriticalExtension() { return *static_cast<RRCConnectionRejectv1020IEsNonCriticalExtension*>(items[1]); }
};

class RRCConnectionRejectv8a0IEs : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionRejectv8a0IEs(): Sequence(&theInfo) {}

	void setRRCConnectionRejectv8a0IEsLateNonCriticalExtension(const RRCConnectionRejectv8a0IEsLateNonCriticalExtension& rRCConnectionRejectv8a0IEsLateNonCriticalExtension) { *static_cast<RRCConnectionRejectv8a0IEsLateNonCriticalExtension*>(items[0]) = rRCConnectionRejectv8a0IEsLateNonCriticalExtension; }
	void setNonCriticalExtension(const RRCConnectionRejectv1020IEs& nonCriticalExtension) { *static_cast<RRCConnectionRejectv1020IEs*>(items[1]) = nonCriticalExtension; }

	RRCConnectionRejectv8a0IEsLateNonCriticalExtension& getRRCConnectionRejectv8a0IEsLateNonCriticalExtension() { return *static_cast<RRCConnectionRejectv8a0IEsLateNonCriticalExtension*>(items[0]); }
	RRCConnectionRejectv1020IEs& getNonCriticalExtension() { return *static_cast<RRCConnectionRejectv1020IEs*>(items[1]); }
};

class RRCConnectionRejectr8IEs : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionRejectr8IEs(): Sequence(&theInfo) {}
	RRCConnectionRejectr8IEs(const RRCConnectionRejectr8IEsWaitTime& rRCConnectionRejectr8IEsWaitTime);

	void setRRCConnectionRejectr8IEsWaitTime(const RRCConnectionRejectr8IEsWaitTime& rRCConnectionRejectr8IEsWaitTime) { *static_cast<RRCConnectionRejectr8IEsWaitTime*>(items[0]) = rRCConnectionRejectr8IEsWaitTime; }
	void setNonCriticalExtension(const RRCConnectionRejectv8a0IEs& nonCriticalExtension) { *static_cast<RRCConnectionRejectv8a0IEs*>(items[1]) = nonCriticalExtension; }

	RRCConnectionRejectr8IEsWaitTime& getRRCConnectionRejectr8IEsWaitTime() { return *static_cast<RRCConnectionRejectr8IEsWaitTime*>(items[0]); }
	RRCConnectionRejectv8a0IEs& getNonCriticalExtension() { return *static_cast<RRCConnectionRejectv8a0IEs*>(items[1]); }
};

typedef Null RRCConnectionRejectCriticalExtensionsC1Spare3;

typedef Null RRCConnectionRejectCriticalExtensionsC1Spare2;

typedef Null RRCConnectionRejectCriticalExtensionsC1Spare1;

class RRCConnectionRejectCriticalExtensionsC1 : public Choice {
private:
	static const void *choicesInfo[4];
public:
	enum RRCConnectionRejectCriticalExtensionsC1Choices {
		rrcConnectionRejectr8 = 0,
		rRCConnectionRejectCriticalExtensionsC1Spare3 = 1,
		rRCConnectionRejectCriticalExtensionsC1Spare2 = 2,
		rRCConnectionRejectCriticalExtensionsC1Spare1 = 3,
	};
	static const Info theInfo;
	RRCConnectionRejectCriticalExtensionsC1(): Choice(&theInfo) {}
};

class RRCConnectionRejectCriticalExtensionsCriticalExtensionsFuture : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RRCConnectionRejectCriticalExtensionsCriticalExtensionsFuture(): Sequence(&theInfo) {}


};

class RRCConnectionRejectCriticalExtensions : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum RRCConnectionRejectCriticalExtensionsChoices {
		rRCConnectionRejectCriticalExtensionsC1 = 0,
		rRCConnectionRejectCriticalExtensionsCriticalExtensionsFuture = 1,
	};
	static const Info theInfo;
	RRCConnectionRejectCriticalExtensions(): Choice(&theInfo) {}
};

class RRCConnectionReject : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RRCConnectionReject(): Sequence(&theInfo) {}
	RRCConnectionReject(const RRCConnectionRejectCriticalExtensions& rRCConnectionRejectCriticalExtensions);

	void setRRCConnectionRejectCriticalExtensions(const RRCConnectionRejectCriticalExtensions& rRCConnectionRejectCriticalExtensions) { *static_cast<RRCConnectionRejectCriticalExtensions*>(items[0]) = rRCConnectionRejectCriticalExtensions; }

	RRCConnectionRejectCriticalExtensions& getRRCConnectionRejectCriticalExtensions() { return *static_cast<RRCConnectionRejectCriticalExtensions*>(items[0]); }
};

typedef OctetStringBase RRCConnectionSetupv8a0IEsLateNonCriticalExtension;

class RRCConnectionSetupv8a0IEsNonCriticalExtension : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RRCConnectionSetupv8a0IEsNonCriticalExtension(): Sequence(&theInfo) {}


};

class RRCConnectionSetupv8a0IEs : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionSetupv8a0IEs(): Sequence(&theInfo) {}

	void setRRCConnectionSetupv8a0IEsLateNonCriticalExtension(const RRCConnectionSetupv8a0IEsLateNonCriticalExtension& rRCConnectionSetupv8a0IEsLateNonCriticalExtension) { *static_cast<RRCConnectionSetupv8a0IEsLateNonCriticalExtension*>(items[0]) = rRCConnectionSetupv8a0IEsLateNonCriticalExtension; }
	void setRRCConnectionSetupv8a0IEsNonCriticalExtension(const RRCConnectionSetupv8a0IEsNonCriticalExtension& rRCConnectionSetupv8a0IEsNonCriticalExtension) { *static_cast<RRCConnectionSetupv8a0IEsNonCriticalExtension*>(items[1]) = rRCConnectionSetupv8a0IEsNonCriticalExtension; }

	RRCConnectionSetupv8a0IEsLateNonCriticalExtension& getRRCConnectionSetupv8a0IEsLateNonCriticalExtension() { return *static_cast<RRCConnectionSetupv8a0IEsLateNonCriticalExtension*>(items[0]); }
	RRCConnectionSetupv8a0IEsNonCriticalExtension& getRRCConnectionSetupv8a0IEsNonCriticalExtension() { return *static_cast<RRCConnectionSetupv8a0IEsNonCriticalExtension*>(items[1]); }
};

class RRCConnectionSetupr8IEs : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionSetupr8IEs(): Sequence(&theInfo) {}
	RRCConnectionSetupr8IEs(const RadioResourceConfigDedicated& radioResourceConfigDedicated);

	void setRadioResourceConfigDedicated(const RadioResourceConfigDedicated& radioResourceConfigDedicated) { *static_cast<RadioResourceConfigDedicated*>(items[0]) = radioResourceConfigDedicated; }
	void setNonCriticalExtension(const RRCConnectionSetupv8a0IEs& nonCriticalExtension) { *static_cast<RRCConnectionSetupv8a0IEs*>(items[1]) = nonCriticalExtension; }

	RadioResourceConfigDedicated& getRadioResourceConfigDedicated() { return *static_cast<RadioResourceConfigDedicated*>(items[0]); }
	RRCConnectionSetupv8a0IEs& getNonCriticalExtension() { return *static_cast<RRCConnectionSetupv8a0IEs*>(items[1]); }
};

typedef Null RRCConnectionSetupCriticalExtensionsC1Spare7;

typedef Null RRCConnectionSetupCriticalExtensionsC1Spare6;

typedef Null RRCConnectionSetupCriticalExtensionsC1Spare5;

typedef Null RRCConnectionSetupCriticalExtensionsC1Spare4;

typedef Null RRCConnectionSetupCriticalExtensionsC1Spare3;

typedef Null RRCConnectionSetupCriticalExtensionsC1Spare2;

typedef Null RRCConnectionSetupCriticalExtensionsC1Spare1;

class RRCConnectionSetupCriticalExtensionsC1 : public Choice {
private:
	static const void *choicesInfo[8];
public:
	enum RRCConnectionSetupCriticalExtensionsC1Choices {
		rrcConnectionSetupr8 = 0,
		rRCConnectionSetupCriticalExtensionsC1Spare7 = 1,
		rRCConnectionSetupCriticalExtensionsC1Spare6 = 2,
		rRCConnectionSetupCriticalExtensionsC1Spare5 = 3,
		rRCConnectionSetupCriticalExtensionsC1Spare4 = 4,
		rRCConnectionSetupCriticalExtensionsC1Spare3 = 5,
		rRCConnectionSetupCriticalExtensionsC1Spare2 = 6,
		rRCConnectionSetupCriticalExtensionsC1Spare1 = 7,
	};
	static const Info theInfo;
	RRCConnectionSetupCriticalExtensionsC1(): Choice(&theInfo) {}
};

class RRCConnectionSetupCriticalExtensionsCriticalExtensionsFuture : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RRCConnectionSetupCriticalExtensionsCriticalExtensionsFuture(): Sequence(&theInfo) {}


};

class RRCConnectionSetupCriticalExtensions : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum RRCConnectionSetupCriticalExtensionsChoices {
		rRCConnectionSetupCriticalExtensionsC1 = 0,
		rRCConnectionSetupCriticalExtensionsCriticalExtensionsFuture = 1,
	};
	static const Info theInfo;
	RRCConnectionSetupCriticalExtensions(): Choice(&theInfo) {}
};

class RRCConnectionSetup : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionSetup(): Sequence(&theInfo) {}
	RRCConnectionSetup(const RRCTransactionIdentifier& rrcTransactionIdentifier, const RRCConnectionSetupCriticalExtensions& rRCConnectionSetupCriticalExtensions);

	void setRrcTransactionIdentifier(const RRCTransactionIdentifier& rrcTransactionIdentifier) { *static_cast<RRCTransactionIdentifier*>(items[0]) = rrcTransactionIdentifier; }
	void setRRCConnectionSetupCriticalExtensions(const RRCConnectionSetupCriticalExtensions& rRCConnectionSetupCriticalExtensions) { *static_cast<RRCConnectionSetupCriticalExtensions*>(items[1]) = rRCConnectionSetupCriticalExtensions; }

	RRCTransactionIdentifier& getRrcTransactionIdentifier() { return *static_cast<RRCTransactionIdentifier*>(items[0]); }
	RRCConnectionSetupCriticalExtensions& getRRCConnectionSetupCriticalExtensions() { return *static_cast<RRCConnectionSetupCriticalExtensions*>(items[1]); }
};

class DLCCCHMessageTypeC1 : public Choice {
private:
	static const void *choicesInfo[4];
public:
	enum DLCCCHMessageTypeC1Choices {
		rrcConnectionReestablishment = 0,
		rrcConnectionReestablishmentReject = 1,
		rrcConnectionReject = 2,
		rrcConnectionSetup = 3,
	};
	static const Info theInfo;
	DLCCCHMessageTypeC1(): Choice(&theInfo) {}
};

class DLCCCHMessageTypeMessageClassExtension : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	DLCCCHMessageTypeMessageClassExtension(): Sequence(&theInfo) {}


};

class DLCCCHMessageType : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum DLCCCHMessageTypeChoices {
		dLCCCHMessageTypeC1 = 0,
		dLCCCHMessageTypeMessageClassExtension = 1,
	};
	static const Info theInfo;
	DLCCCHMessageType(): Choice(&theInfo) {}
};

class DLCCCHMessage : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLCCCHMessage(): Sequence(&theInfo) {}
	DLCCCHMessage(const DLCCCHMessageType& message);

	void setMessage(const DLCCCHMessageType& message) { *static_cast<DLCCCHMessageType*>(items[0]) = message; }

	DLCCCHMessageType& getMessage() { return *static_cast<DLCCCHMessageType*>(items[0]); }
};

typedef BitString<CONSTRAINED, 32, 32> RANDCDMA2000;

typedef OctetStringBase MobilityParametersCDMA2000;

typedef OctetStringBase CSFBParametersResponseCDMA2000v8a0IEsLateNonCriticalExtension;

class CSFBParametersResponseCDMA2000v8a0IEsNonCriticalExtension : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	CSFBParametersResponseCDMA2000v8a0IEsNonCriticalExtension(): Sequence(&theInfo) {}


};

class CSFBParametersResponseCDMA2000v8a0IEs : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CSFBParametersResponseCDMA2000v8a0IEs(): Sequence(&theInfo) {}

	void setCSFBParametersResponseCDMA2000v8a0IEsLateNonCriticalExtension(const CSFBParametersResponseCDMA2000v8a0IEsLateNonCriticalExtension& cSFBParametersResponseCDMA2000v8a0IEsLateNonCriticalExtension) { *static_cast<CSFBParametersResponseCDMA2000v8a0IEsLateNonCriticalExtension*>(items[0]) = cSFBParametersResponseCDMA2000v8a0IEsLateNonCriticalExtension; }
	void setCSFBParametersResponseCDMA2000v8a0IEsNonCriticalExtension(const CSFBParametersResponseCDMA2000v8a0IEsNonCriticalExtension& cSFBParametersResponseCDMA2000v8a0IEsNonCriticalExtension) { *static_cast<CSFBParametersResponseCDMA2000v8a0IEsNonCriticalExtension*>(items[1]) = cSFBParametersResponseCDMA2000v8a0IEsNonCriticalExtension; }

	CSFBParametersResponseCDMA2000v8a0IEsLateNonCriticalExtension& getCSFBParametersResponseCDMA2000v8a0IEsLateNonCriticalExtension() { return *static_cast<CSFBParametersResponseCDMA2000v8a0IEsLateNonCriticalExtension*>(items[0]); }
	CSFBParametersResponseCDMA2000v8a0IEsNonCriticalExtension& getCSFBParametersResponseCDMA2000v8a0IEsNonCriticalExtension() { return *static_cast<CSFBParametersResponseCDMA2000v8a0IEsNonCriticalExtension*>(items[1]); }
};

class CSFBParametersResponseCDMA2000r8IEs : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	CSFBParametersResponseCDMA2000r8IEs(): Sequence(&theInfo) {}
	CSFBParametersResponseCDMA2000r8IEs(const RANDCDMA2000& rand, const MobilityParametersCDMA2000& mobilityParameters);

	void setRand(const RANDCDMA2000& rand) { *static_cast<RANDCDMA2000*>(items[0]) = rand; }
	void setMobilityParameters(const MobilityParametersCDMA2000& mobilityParameters) { *static_cast<MobilityParametersCDMA2000*>(items[1]) = mobilityParameters; }
	void setNonCriticalExtension(const CSFBParametersResponseCDMA2000v8a0IEs& nonCriticalExtension) { *static_cast<CSFBParametersResponseCDMA2000v8a0IEs*>(items[2]) = nonCriticalExtension; }

	RANDCDMA2000& getRand() { return *static_cast<RANDCDMA2000*>(items[0]); }
	MobilityParametersCDMA2000& getMobilityParameters() { return *static_cast<MobilityParametersCDMA2000*>(items[1]); }
	CSFBParametersResponseCDMA2000v8a0IEs& getNonCriticalExtension() { return *static_cast<CSFBParametersResponseCDMA2000v8a0IEs*>(items[2]); }
};

class CSFBParametersResponseCDMA2000CriticalExtensionsCriticalExtensionsFuture : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	CSFBParametersResponseCDMA2000CriticalExtensionsCriticalExtensionsFuture(): Sequence(&theInfo) {}


};

class CSFBParametersResponseCDMA2000CriticalExtensions : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum CSFBParametersResponseCDMA2000CriticalExtensionsChoices {
		csfbParametersResponseCDMA2000r8 = 0,
		cSFBParametersResponseCDMA2000CriticalExtensionsCriticalExtensionsFuture = 1,
	};
	static const Info theInfo;
	CSFBParametersResponseCDMA2000CriticalExtensions(): Choice(&theInfo) {}
};

class CSFBParametersResponseCDMA2000 : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CSFBParametersResponseCDMA2000(): Sequence(&theInfo) {}
	CSFBParametersResponseCDMA2000(const RRCTransactionIdentifier& rrcTransactionIdentifier, const CSFBParametersResponseCDMA2000CriticalExtensions& cSFBParametersResponseCDMA2000CriticalExtensions);

	void setRrcTransactionIdentifier(const RRCTransactionIdentifier& rrcTransactionIdentifier) { *static_cast<RRCTransactionIdentifier*>(items[0]) = rrcTransactionIdentifier; }
	void setCSFBParametersResponseCDMA2000CriticalExtensions(const CSFBParametersResponseCDMA2000CriticalExtensions& cSFBParametersResponseCDMA2000CriticalExtensions) { *static_cast<CSFBParametersResponseCDMA2000CriticalExtensions*>(items[1]) = cSFBParametersResponseCDMA2000CriticalExtensions; }

	RRCTransactionIdentifier& getRrcTransactionIdentifier() { return *static_cast<RRCTransactionIdentifier*>(items[0]); }
	CSFBParametersResponseCDMA2000CriticalExtensions& getCSFBParametersResponseCDMA2000CriticalExtensions() { return *static_cast<CSFBParametersResponseCDMA2000CriticalExtensions*>(items[1]); }
};

typedef OctetStringBase DedicatedInfoNAS;

typedef OctetStringBase DedicatedInfoCDMA2000;

class DLInformationTransferr8IEsDedicatedInfoType : public Choice {
private:
	static const void *choicesInfo[3];
public:
	enum DLInformationTransferr8IEsDedicatedInfoTypeChoices {
		dedicatedInfoNAS = 0,
		dedicatedInfoCDMA20001XRTT = 1,
		dedicatedInfoCDMA2000HRPD = 2,
	};
	static const Info theInfo;
	DLInformationTransferr8IEsDedicatedInfoType(): Choice(&theInfo) {}
};

typedef OctetStringBase DLInformationTransferv8a0IEsLateNonCriticalExtension;

class DLInformationTransferv8a0IEsNonCriticalExtension : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	DLInformationTransferv8a0IEsNonCriticalExtension(): Sequence(&theInfo) {}


};

class DLInformationTransferv8a0IEs : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DLInformationTransferv8a0IEs(): Sequence(&theInfo) {}

	void setDLInformationTransferv8a0IEsLateNonCriticalExtension(const DLInformationTransferv8a0IEsLateNonCriticalExtension& dLInformationTransferv8a0IEsLateNonCriticalExtension) { *static_cast<DLInformationTransferv8a0IEsLateNonCriticalExtension*>(items[0]) = dLInformationTransferv8a0IEsLateNonCriticalExtension; }
	void setDLInformationTransferv8a0IEsNonCriticalExtension(const DLInformationTransferv8a0IEsNonCriticalExtension& dLInformationTransferv8a0IEsNonCriticalExtension) { *static_cast<DLInformationTransferv8a0IEsNonCriticalExtension*>(items[1]) = dLInformationTransferv8a0IEsNonCriticalExtension; }

	DLInformationTransferv8a0IEsLateNonCriticalExtension& getDLInformationTransferv8a0IEsLateNonCriticalExtension() { return *static_cast<DLInformationTransferv8a0IEsLateNonCriticalExtension*>(items[0]); }
	DLInformationTransferv8a0IEsNonCriticalExtension& getDLInformationTransferv8a0IEsNonCriticalExtension() { return *static_cast<DLInformationTransferv8a0IEsNonCriticalExtension*>(items[1]); }
};

class DLInformationTransferr8IEs : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DLInformationTransferr8IEs(): Sequence(&theInfo) {}
	DLInformationTransferr8IEs(const DLInformationTransferr8IEsDedicatedInfoType& dLInformationTransferr8IEsDedicatedInfoType);

	void setDLInformationTransferr8IEsDedicatedInfoType(const DLInformationTransferr8IEsDedicatedInfoType& dLInformationTransferr8IEsDedicatedInfoType) { *static_cast<DLInformationTransferr8IEsDedicatedInfoType*>(items[0]) = dLInformationTransferr8IEsDedicatedInfoType; }
	void setNonCriticalExtension(const DLInformationTransferv8a0IEs& nonCriticalExtension) { *static_cast<DLInformationTransferv8a0IEs*>(items[1]) = nonCriticalExtension; }

	DLInformationTransferr8IEsDedicatedInfoType& getDLInformationTransferr8IEsDedicatedInfoType() { return *static_cast<DLInformationTransferr8IEsDedicatedInfoType*>(items[0]); }
	DLInformationTransferv8a0IEs& getNonCriticalExtension() { return *static_cast<DLInformationTransferv8a0IEs*>(items[1]); }
};

typedef Null DLInformationTransferCriticalExtensionsC1Spare3;

typedef Null DLInformationTransferCriticalExtensionsC1Spare2;

typedef Null DLInformationTransferCriticalExtensionsC1Spare1;

class DLInformationTransferCriticalExtensionsC1 : public Choice {
private:
	static const void *choicesInfo[4];
public:
	enum DLInformationTransferCriticalExtensionsC1Choices {
		dlInformationTransferr8 = 0,
		dLInformationTransferCriticalExtensionsC1Spare3 = 1,
		dLInformationTransferCriticalExtensionsC1Spare2 = 2,
		dLInformationTransferCriticalExtensionsC1Spare1 = 3,
	};
	static const Info theInfo;
	DLInformationTransferCriticalExtensionsC1(): Choice(&theInfo) {}
};

class DLInformationTransferCriticalExtensionsCriticalExtensionsFuture : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	DLInformationTransferCriticalExtensionsCriticalExtensionsFuture(): Sequence(&theInfo) {}


};

class DLInformationTransferCriticalExtensions : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum DLInformationTransferCriticalExtensionsChoices {
		dLInformationTransferCriticalExtensionsC1 = 0,
		dLInformationTransferCriticalExtensionsCriticalExtensionsFuture = 1,
	};
	static const Info theInfo;
	DLInformationTransferCriticalExtensions(): Choice(&theInfo) {}
};

class DLInformationTransfer : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DLInformationTransfer(): Sequence(&theInfo) {}
	DLInformationTransfer(const RRCTransactionIdentifier& rrcTransactionIdentifier, const DLInformationTransferCriticalExtensions& dLInformationTransferCriticalExtensions);

	void setRrcTransactionIdentifier(const RRCTransactionIdentifier& rrcTransactionIdentifier) { *static_cast<RRCTransactionIdentifier*>(items[0]) = rrcTransactionIdentifier; }
	void setDLInformationTransferCriticalExtensions(const DLInformationTransferCriticalExtensions& dLInformationTransferCriticalExtensions) { *static_cast<DLInformationTransferCriticalExtensions*>(items[1]) = dLInformationTransferCriticalExtensions; }

	RRCTransactionIdentifier& getRrcTransactionIdentifier() { return *static_cast<RRCTransactionIdentifier*>(items[0]); }
	DLInformationTransferCriticalExtensions& getDLInformationTransferCriticalExtensions() { return *static_cast<DLInformationTransferCriticalExtensions*>(items[1]); }
};

enum CDMA2000TypeValues {
	type1XRTT_CDMA2000Type = 0,
	typeHRPD_CDMA2000Type = 1,
};
typedef Enumerated<CONSTRAINED, 1> CDMA2000Type;

typedef OctetStringBase HandoverFromEUTRAPreparationRequestv890IEsLateNonCriticalExtension;

typedef Boolean HandoverFromEUTRAPreparationRequestv920IEsConcurrPrepCDMA2000HRPDr9;

enum HandoverFromEUTRAPreparationRequestv1020IEsdualRxTxRedirectIndicator_r10Values {
	true_HandoverFromEUTRAPreparationRequestv1020IEsdualRxTxRedirectIndicator_r10 = 0,
};
typedef Enumerated<CONSTRAINED, 0> HandoverFromEUTRAPreparationRequestv1020IEsdualRxTxRedirectIndicator_r10;

enum BandclassCDMA2000Values {
	bc0_BandclassCDMA2000 = 0,
	bc1_BandclassCDMA2000 = 1,
	bc2_BandclassCDMA2000 = 2,
	bc3_BandclassCDMA2000 = 3,
	bc4_BandclassCDMA2000 = 4,
	bc5_BandclassCDMA2000 = 5,
	bc6_BandclassCDMA2000 = 6,
	bc7_BandclassCDMA2000 = 7,
	bc8_BandclassCDMA2000 = 8,
	bc9_BandclassCDMA2000 = 9,
	bc10_BandclassCDMA2000 = 10,
	bc11_BandclassCDMA2000 = 11,
	bc12_BandclassCDMA2000 = 12,
	bc13_BandclassCDMA2000 = 13,
	bc14_BandclassCDMA2000 = 14,
	bc15_BandclassCDMA2000 = 15,
	bc16_BandclassCDMA2000 = 16,
	bc17_BandclassCDMA2000 = 17,
	bc18_v9a0_BandclassCDMA2000 = 18,
	bc19_v9a0_BandclassCDMA2000 = 19,
	bc20_v9a0_BandclassCDMA2000 = 20,
	bc21_v9a0_BandclassCDMA2000 = 21,
	spare10_BandclassCDMA2000 = 22,
	spare9_BandclassCDMA2000 = 23,
	spare8_BandclassCDMA2000 = 24,
	spare7_BandclassCDMA2000 = 25,
	spare6_BandclassCDMA2000 = 26,
	spare5_BandclassCDMA2000 = 27,
	spare4_BandclassCDMA2000 = 28,
	spare3_BandclassCDMA2000 = 29,
	spare2_BandclassCDMA2000 = 30,
	spare1_BandclassCDMA2000 = 31,
};
typedef Enumerated<EXTCONSTRAINED, 31> BandclassCDMA2000;

typedef Integer<CONSTRAINED, 0, 2047> ARFCNValueCDMA2000;

class CarrierFreqCDMA2000 : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CarrierFreqCDMA2000(): Sequence(&theInfo) {}
	CarrierFreqCDMA2000(const BandclassCDMA2000& bandClass, const ARFCNValueCDMA2000& arfcn);

	void setBandClass(const BandclassCDMA2000& bandClass) { *static_cast<BandclassCDMA2000*>(items[0]) = bandClass; }
	void setArfcn(const ARFCNValueCDMA2000& arfcn) { *static_cast<ARFCNValueCDMA2000*>(items[1]) = arfcn; }

	BandclassCDMA2000& getBandClass() { return *static_cast<BandclassCDMA2000*>(items[0]); }
	ARFCNValueCDMA2000& getArfcn() { return *static_cast<ARFCNValueCDMA2000*>(items[1]); }
};

class HandoverFromEUTRAPreparationRequestv1020IEsNonCriticalExtension : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	HandoverFromEUTRAPreparationRequestv1020IEsNonCriticalExtension(): Sequence(&theInfo) {}


};

class HandoverFromEUTRAPreparationRequestv1020IEs : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	HandoverFromEUTRAPreparationRequestv1020IEs(): Sequence(&theInfo) {}

	void setHandoverFromEUTRAPreparationRequestv1020IEsdualRxTxRedirectIndicator_r10(const HandoverFromEUTRAPreparationRequestv1020IEsdualRxTxRedirectIndicator_r10& handoverFromEUTRAPreparationRequestv1020IEsdualRxTxRedirectIndicator_r10) { *static_cast<HandoverFromEUTRAPreparationRequestv1020IEsdualRxTxRedirectIndicator_r10*>(items[0]) = handoverFromEUTRAPreparationRequestv1020IEsdualRxTxRedirectIndicator_r10; }
	void setRedirectCarrierCDMA20001XRTTr10(const CarrierFreqCDMA2000& redirectCarrierCDMA20001XRTTr10) { *static_cast<CarrierFreqCDMA2000*>(items[1]) = redirectCarrierCDMA20001XRTTr10; }
	void setHandoverFromEUTRAPreparationRequestv1020IEsNonCriticalExtension(const HandoverFromEUTRAPreparationRequestv1020IEsNonCriticalExtension& handoverFromEUTRAPreparationRequestv1020IEsNonCriticalExtension) { *static_cast<HandoverFromEUTRAPreparationRequestv1020IEsNonCriticalExtension*>(items[2]) = handoverFromEUTRAPreparationRequestv1020IEsNonCriticalExtension; }

	HandoverFromEUTRAPreparationRequestv1020IEsdualRxTxRedirectIndicator_r10& getHandoverFromEUTRAPreparationRequestv1020IEsdualRxTxRedirectIndicator_r10() { return *static_cast<HandoverFromEUTRAPreparationRequestv1020IEsdualRxTxRedirectIndicator_r10*>(items[0]); }
	CarrierFreqCDMA2000& getRedirectCarrierCDMA20001XRTTr10() { return *static_cast<CarrierFreqCDMA2000*>(items[1]); }
	HandoverFromEUTRAPreparationRequestv1020IEsNonCriticalExtension& getHandoverFromEUTRAPreparationRequestv1020IEsNonCriticalExtension() { return *static_cast<HandoverFromEUTRAPreparationRequestv1020IEsNonCriticalExtension*>(items[2]); }
};

class HandoverFromEUTRAPreparationRequestv920IEs : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HandoverFromEUTRAPreparationRequestv920IEs(): Sequence(&theInfo) {}

	void setHandoverFromEUTRAPreparationRequestv920IEsConcurrPrepCDMA2000HRPDr9(const HandoverFromEUTRAPreparationRequestv920IEsConcurrPrepCDMA2000HRPDr9& handoverFromEUTRAPreparationRequestv920IEsConcurrPrepCDMA2000HRPDr9) { *static_cast<HandoverFromEUTRAPreparationRequestv920IEsConcurrPrepCDMA2000HRPDr9*>(items[0]) = handoverFromEUTRAPreparationRequestv920IEsConcurrPrepCDMA2000HRPDr9; }
	void setNonCriticalExtension(const HandoverFromEUTRAPreparationRequestv1020IEs& nonCriticalExtension) { *static_cast<HandoverFromEUTRAPreparationRequestv1020IEs*>(items[1]) = nonCriticalExtension; }

	HandoverFromEUTRAPreparationRequestv920IEsConcurrPrepCDMA2000HRPDr9& getHandoverFromEUTRAPreparationRequestv920IEsConcurrPrepCDMA2000HRPDr9() { return *static_cast<HandoverFromEUTRAPreparationRequestv920IEsConcurrPrepCDMA2000HRPDr9*>(items[0]); }
	HandoverFromEUTRAPreparationRequestv1020IEs& getNonCriticalExtension() { return *static_cast<HandoverFromEUTRAPreparationRequestv1020IEs*>(items[1]); }
};

class HandoverFromEUTRAPreparationRequestv890IEs : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HandoverFromEUTRAPreparationRequestv890IEs(): Sequence(&theInfo) {}

	void setHandoverFromEUTRAPreparationRequestv890IEsLateNonCriticalExtension(const HandoverFromEUTRAPreparationRequestv890IEsLateNonCriticalExtension& handoverFromEUTRAPreparationRequestv890IEsLateNonCriticalExtension) { *static_cast<HandoverFromEUTRAPreparationRequestv890IEsLateNonCriticalExtension*>(items[0]) = handoverFromEUTRAPreparationRequestv890IEsLateNonCriticalExtension; }
	void setNonCriticalExtension(const HandoverFromEUTRAPreparationRequestv920IEs& nonCriticalExtension) { *static_cast<HandoverFromEUTRAPreparationRequestv920IEs*>(items[1]) = nonCriticalExtension; }

	HandoverFromEUTRAPreparationRequestv890IEsLateNonCriticalExtension& getHandoverFromEUTRAPreparationRequestv890IEsLateNonCriticalExtension() { return *static_cast<HandoverFromEUTRAPreparationRequestv890IEsLateNonCriticalExtension*>(items[0]); }
	HandoverFromEUTRAPreparationRequestv920IEs& getNonCriticalExtension() { return *static_cast<HandoverFromEUTRAPreparationRequestv920IEs*>(items[1]); }
};

class HandoverFromEUTRAPreparationRequestr8IEs : public Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	HandoverFromEUTRAPreparationRequestr8IEs(): Sequence(&theInfo) {}
	HandoverFromEUTRAPreparationRequestr8IEs(const CDMA2000Type& cdma2000Type);

	void setCdma2000Type(const CDMA2000Type& cdma2000Type) { *static_cast<CDMA2000Type*>(items[0]) = cdma2000Type; }
	void setRand(const RANDCDMA2000& rand) { *static_cast<RANDCDMA2000*>(items[1]) = rand; }
	void setMobilityParameters(const MobilityParametersCDMA2000& mobilityParameters) { *static_cast<MobilityParametersCDMA2000*>(items[2]) = mobilityParameters; }
	void setNonCriticalExtension(const HandoverFromEUTRAPreparationRequestv890IEs& nonCriticalExtension) { *static_cast<HandoverFromEUTRAPreparationRequestv890IEs*>(items[3]) = nonCriticalExtension; }

	CDMA2000Type& getCdma2000Type() { return *static_cast<CDMA2000Type*>(items[0]); }
	RANDCDMA2000& getRand() { return *static_cast<RANDCDMA2000*>(items[1]); }
	MobilityParametersCDMA2000& getMobilityParameters() { return *static_cast<MobilityParametersCDMA2000*>(items[2]); }
	HandoverFromEUTRAPreparationRequestv890IEs& getNonCriticalExtension() { return *static_cast<HandoverFromEUTRAPreparationRequestv890IEs*>(items[3]); }
};

typedef Null HandoverFromEUTRAPreparationRequestCriticalExtensionsC1Spare3;

typedef Null HandoverFromEUTRAPreparationRequestCriticalExtensionsC1Spare2;

typedef Null HandoverFromEUTRAPreparationRequestCriticalExtensionsC1Spare1;

class HandoverFromEUTRAPreparationRequestCriticalExtensionsC1 : public Choice {
private:
	static const void *choicesInfo[4];
public:
	enum HandoverFromEUTRAPreparationRequestCriticalExtensionsC1Choices {
		handoverFromEUTRAPreparationRequestr8 = 0,
		handoverFromEUTRAPreparationRequestCriticalExtensionsC1Spare3 = 1,
		handoverFromEUTRAPreparationRequestCriticalExtensionsC1Spare2 = 2,
		handoverFromEUTRAPreparationRequestCriticalExtensionsC1Spare1 = 3,
	};
	static const Info theInfo;
	HandoverFromEUTRAPreparationRequestCriticalExtensionsC1(): Choice(&theInfo) {}
};

class HandoverFromEUTRAPreparationRequestCriticalExtensionsCriticalExtensionsFuture : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	HandoverFromEUTRAPreparationRequestCriticalExtensionsCriticalExtensionsFuture(): Sequence(&theInfo) {}


};

class HandoverFromEUTRAPreparationRequestCriticalExtensions : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum HandoverFromEUTRAPreparationRequestCriticalExtensionsChoices {
		handoverFromEUTRAPreparationRequestCriticalExtensionsC1 = 0,
		handoverFromEUTRAPreparationRequestCriticalExtensionsCriticalExtensionsFuture = 1,
	};
	static const Info theInfo;
	HandoverFromEUTRAPreparationRequestCriticalExtensions(): Choice(&theInfo) {}
};

class HandoverFromEUTRAPreparationRequest : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HandoverFromEUTRAPreparationRequest(): Sequence(&theInfo) {}
	HandoverFromEUTRAPreparationRequest(const RRCTransactionIdentifier& rrcTransactionIdentifier, const HandoverFromEUTRAPreparationRequestCriticalExtensions& handoverFromEUTRAPreparationRequestCriticalExtensions);

	void setRrcTransactionIdentifier(const RRCTransactionIdentifier& rrcTransactionIdentifier) { *static_cast<RRCTransactionIdentifier*>(items[0]) = rrcTransactionIdentifier; }
	void setHandoverFromEUTRAPreparationRequestCriticalExtensions(const HandoverFromEUTRAPreparationRequestCriticalExtensions& handoverFromEUTRAPreparationRequestCriticalExtensions) { *static_cast<HandoverFromEUTRAPreparationRequestCriticalExtensions*>(items[1]) = handoverFromEUTRAPreparationRequestCriticalExtensions; }

	RRCTransactionIdentifier& getRrcTransactionIdentifier() { return *static_cast<RRCTransactionIdentifier*>(items[0]); }
	HandoverFromEUTRAPreparationRequestCriticalExtensions& getHandoverFromEUTRAPreparationRequestCriticalExtensions() { return *static_cast<HandoverFromEUTRAPreparationRequestCriticalExtensions*>(items[1]); }
};

typedef Boolean MobilityFromEUTRACommandr8IEsCsFallbackIndicator;

enum HandovertargetRAT_TypeValues {
	utra_HandovertargetRAT_Type = 0,
	geran_HandovertargetRAT_Type = 1,
	cdma2000_1XRTT_HandovertargetRAT_Type = 2,
	cdma2000_HRPD_HandovertargetRAT_Type = 3,
	spare4_HandovertargetRAT_Type = 4,
	spare3_HandovertargetRAT_Type = 5,
	spare2_HandovertargetRAT_Type = 6,
	spare1_HandovertargetRAT_Type = 7,
};
typedef Enumerated<EXTCONSTRAINED, 7> HandovertargetRAT_Type;

typedef OctetStringBase HandoverTargetRATMessageContainer;

typedef OctetString<CONSTRAINED, 1, 1> HandoverNasSecurityParamFromEUTRA;

typedef OctetString<CONSTRAINED, 1, 23> SystemInfoListGERANItem;

typedef SequenceOf<SystemInfoListGERANItem, CONSTRAINED, 1, maxGERAN_SI> SystemInfoListGERAN;

class SIOrPSIGERAN : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum SIOrPSIGERANChoices {
		si = 0,
		psi = 1,
	};
	static const Info theInfo;
	SIOrPSIGERAN(): Choice(&theInfo) {}
};

class Handover : public Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	Handover(): Sequence(&theInfo) {}
	Handover(const HandovertargetRAT_Type& handovertargetRAT_Type, const HandoverTargetRATMessageContainer& handoverTargetRATMessageContainer);

	void setHandovertargetRAT_Type(const HandovertargetRAT_Type& handovertargetRAT_Type) { *static_cast<HandovertargetRAT_Type*>(items[0]) = handovertargetRAT_Type; }
	void setHandoverTargetRATMessageContainer(const HandoverTargetRATMessageContainer& handoverTargetRATMessageContainer) { *static_cast<HandoverTargetRATMessageContainer*>(items[1]) = handoverTargetRATMessageContainer; }
	void setHandoverNasSecurityParamFromEUTRA(const HandoverNasSecurityParamFromEUTRA& handoverNasSecurityParamFromEUTRA) { *static_cast<HandoverNasSecurityParamFromEUTRA*>(items[2]) = handoverNasSecurityParamFromEUTRA; }
	void setSystemInformation(const SIOrPSIGERAN& systemInformation) { *static_cast<SIOrPSIGERAN*>(items[3]) = systemInformation; }

	HandovertargetRAT_Type& getHandovertargetRAT_Type() { return *static_cast<HandovertargetRAT_Type*>(items[0]); }
	HandoverTargetRATMessageContainer& getHandoverTargetRATMessageContainer() { return *static_cast<HandoverTargetRATMessageContainer*>(items[1]); }
	HandoverNasSecurityParamFromEUTRA& getHandoverNasSecurityParamFromEUTRA() { return *static_cast<HandoverNasSecurityParamFromEUTRA*>(items[2]); }
	SIOrPSIGERAN& getSystemInformation() { return *static_cast<SIOrPSIGERAN*>(items[3]); }
};

enum CellChangeOrdert304Values {
	ms100_CellChangeOrdert304 = 0,
	ms200_CellChangeOrdert304 = 1,
	ms500_CellChangeOrdert304 = 2,
	ms1000_CellChangeOrdert304 = 3,
	ms2000_CellChangeOrdert304 = 4,
	ms4000_CellChangeOrdert304 = 5,
	ms8000_CellChangeOrdert304 = 6,
	spare1_CellChangeOrdert304 = 7,
};
typedef Enumerated<CONSTRAINED, 7> CellChangeOrdert304;

typedef BitString<CONSTRAINED, 3, 3> PhysCellIdGERANNetworkColourCode;

typedef BitString<CONSTRAINED, 3, 3> PhysCellIdGERANBaseStationColourCode;

class PhysCellIdGERAN : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PhysCellIdGERAN(): Sequence(&theInfo) {}
	PhysCellIdGERAN(const PhysCellIdGERANNetworkColourCode& physCellIdGERANNetworkColourCode, const PhysCellIdGERANBaseStationColourCode& physCellIdGERANBaseStationColourCode);

	void setPhysCellIdGERANNetworkColourCode(const PhysCellIdGERANNetworkColourCode& physCellIdGERANNetworkColourCode) { *static_cast<PhysCellIdGERANNetworkColourCode*>(items[0]) = physCellIdGERANNetworkColourCode; }
	void setPhysCellIdGERANBaseStationColourCode(const PhysCellIdGERANBaseStationColourCode& physCellIdGERANBaseStationColourCode) { *static_cast<PhysCellIdGERANBaseStationColourCode*>(items[1]) = physCellIdGERANBaseStationColourCode; }

	PhysCellIdGERANNetworkColourCode& getPhysCellIdGERANNetworkColourCode() { return *static_cast<PhysCellIdGERANNetworkColourCode*>(items[0]); }
	PhysCellIdGERANBaseStationColourCode& getPhysCellIdGERANBaseStationColourCode() { return *static_cast<PhysCellIdGERANBaseStationColourCode*>(items[1]); }
};

typedef Integer<CONSTRAINED, 0, 1023> ARFCNValueGERAN;

enum BandIndicatorGERANValues {
	dcs1800_BandIndicatorGERAN = 0,
	pcs1900_BandIndicatorGERAN = 1,
};
typedef Enumerated<CONSTRAINED, 1> BandIndicatorGERAN;

class CarrierFreqGERAN : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CarrierFreqGERAN(): Sequence(&theInfo) {}
	CarrierFreqGERAN(const ARFCNValueGERAN& arfcn, const BandIndicatorGERAN& bandIndicator);

	void setArfcn(const ARFCNValueGERAN& arfcn) { *static_cast<ARFCNValueGERAN*>(items[0]) = arfcn; }
	void setBandIndicator(const BandIndicatorGERAN& bandIndicator) { *static_cast<BandIndicatorGERAN*>(items[1]) = bandIndicator; }

	ARFCNValueGERAN& getArfcn() { return *static_cast<ARFCNValueGERAN*>(items[0]); }
	BandIndicatorGERAN& getBandIndicator() { return *static_cast<BandIndicatorGERAN*>(items[1]); }
};

typedef BitString<CONSTRAINED, 2, 2> CellChangeOrderTargetRATTypeGeranNetworkControlOrder;

class CellChangeOrderTargetRATTypeGeran : public Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CellChangeOrderTargetRATTypeGeran(): Sequence(&theInfo) {}
	CellChangeOrderTargetRATTypeGeran(const PhysCellIdGERAN& physCellId, const CarrierFreqGERAN& carrierFreq);

	void setPhysCellId(const PhysCellIdGERAN& physCellId) { *static_cast<PhysCellIdGERAN*>(items[0]) = physCellId; }
	void setCarrierFreq(const CarrierFreqGERAN& carrierFreq) { *static_cast<CarrierFreqGERAN*>(items[1]) = carrierFreq; }
	void setCellChangeOrderTargetRATTypeGeranNetworkControlOrder(const CellChangeOrderTargetRATTypeGeranNetworkControlOrder& cellChangeOrderTargetRATTypeGeranNetworkControlOrder) { *static_cast<CellChangeOrderTargetRATTypeGeranNetworkControlOrder*>(items[2]) = cellChangeOrderTargetRATTypeGeranNetworkControlOrder; }
	void setSystemInformation(const SIOrPSIGERAN& systemInformation) { *static_cast<SIOrPSIGERAN*>(items[3]) = systemInformation; }

	PhysCellIdGERAN& getPhysCellId() { return *static_cast<PhysCellIdGERAN*>(items[0]); }
	CarrierFreqGERAN& getCarrierFreq() { return *static_cast<CarrierFreqGERAN*>(items[1]); }
	CellChangeOrderTargetRATTypeGeranNetworkControlOrder& getCellChangeOrderTargetRATTypeGeranNetworkControlOrder() { return *static_cast<CellChangeOrderTargetRATTypeGeranNetworkControlOrder*>(items[2]); }
	SIOrPSIGERAN& getSystemInformation() { return *static_cast<SIOrPSIGERAN*>(items[3]); }
};

class CellChangeOrderTargetRATType : public Choice {
private:
	static const void *choicesInfo[1];
public:
	enum CellChangeOrderTargetRATTypeChoices {
		cellChangeOrderTargetRATTypeGeran = 0,
	};
	static const Info theInfo;
	CellChangeOrderTargetRATType(): Choice(&theInfo) {}
};

class CellChangeOrder : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellChangeOrder(): Sequence(&theInfo) {}
	CellChangeOrder(const CellChangeOrdert304& cellChangeOrdert304, const CellChangeOrderTargetRATType& cellChangeOrderTargetRATType);

	void setCellChangeOrdert304(const CellChangeOrdert304& cellChangeOrdert304) { *static_cast<CellChangeOrdert304*>(items[0]) = cellChangeOrdert304; }
	void setCellChangeOrderTargetRATType(const CellChangeOrderTargetRATType& cellChangeOrderTargetRATType) { *static_cast<CellChangeOrderTargetRATType*>(items[1]) = cellChangeOrderTargetRATType; }

	CellChangeOrdert304& getCellChangeOrdert304() { return *static_cast<CellChangeOrdert304*>(items[0]); }
	CellChangeOrderTargetRATType& getCellChangeOrderTargetRATType() { return *static_cast<CellChangeOrderTargetRATType*>(items[1]); }
};

class MobilityFromEUTRACommandr8IEsPurpose : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum MobilityFromEUTRACommandr8IEsPurposeChoices {
		handover = 0,
		cellChangeOrder = 1,
	};
	static const Info theInfo;
	MobilityFromEUTRACommandr8IEsPurpose(): Choice(&theInfo) {}
};

typedef OctetStringBase MobilityFromEUTRACommandv8a0IEsLateNonCriticalExtension;

class MobilityFromEUTRACommandv8d0IEsNonCriticalExtension : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	MobilityFromEUTRACommandv8d0IEsNonCriticalExtension(): Sequence(&theInfo) {}


};

class MobilityFromEUTRACommandv8d0IEs : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MobilityFromEUTRACommandv8d0IEs(): Sequence(&theInfo) {}

	void setBandIndicator(const BandIndicatorGERAN& bandIndicator) { *static_cast<BandIndicatorGERAN*>(items[0]) = bandIndicator; }
	void setMobilityFromEUTRACommandv8d0IEsNonCriticalExtension(const MobilityFromEUTRACommandv8d0IEsNonCriticalExtension& mobilityFromEUTRACommandv8d0IEsNonCriticalExtension) { *static_cast<MobilityFromEUTRACommandv8d0IEsNonCriticalExtension*>(items[1]) = mobilityFromEUTRACommandv8d0IEsNonCriticalExtension; }

	BandIndicatorGERAN& getBandIndicator() { return *static_cast<BandIndicatorGERAN*>(items[0]); }
	MobilityFromEUTRACommandv8d0IEsNonCriticalExtension& getMobilityFromEUTRACommandv8d0IEsNonCriticalExtension() { return *static_cast<MobilityFromEUTRACommandv8d0IEsNonCriticalExtension*>(items[1]); }
};

class MobilityFromEUTRACommandv8a0IEs : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MobilityFromEUTRACommandv8a0IEs(): Sequence(&theInfo) {}

	void setMobilityFromEUTRACommandv8a0IEsLateNonCriticalExtension(const MobilityFromEUTRACommandv8a0IEsLateNonCriticalExtension& mobilityFromEUTRACommandv8a0IEsLateNonCriticalExtension) { *static_cast<MobilityFromEUTRACommandv8a0IEsLateNonCriticalExtension*>(items[0]) = mobilityFromEUTRACommandv8a0IEsLateNonCriticalExtension; }
	void setNonCriticalExtension(const MobilityFromEUTRACommandv8d0IEs& nonCriticalExtension) { *static_cast<MobilityFromEUTRACommandv8d0IEs*>(items[1]) = nonCriticalExtension; }

	MobilityFromEUTRACommandv8a0IEsLateNonCriticalExtension& getMobilityFromEUTRACommandv8a0IEsLateNonCriticalExtension() { return *static_cast<MobilityFromEUTRACommandv8a0IEsLateNonCriticalExtension*>(items[0]); }
	MobilityFromEUTRACommandv8d0IEs& getNonCriticalExtension() { return *static_cast<MobilityFromEUTRACommandv8d0IEs*>(items[1]); }
};

class MobilityFromEUTRACommandr8IEs : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	MobilityFromEUTRACommandr8IEs(): Sequence(&theInfo) {}
	MobilityFromEUTRACommandr8IEs(const MobilityFromEUTRACommandr8IEsCsFallbackIndicator& mobilityFromEUTRACommandr8IEsCsFallbackIndicator, const MobilityFromEUTRACommandr8IEsPurpose& mobilityFromEUTRACommandr8IEsPurpose);

	void setMobilityFromEUTRACommandr8IEsCsFallbackIndicator(const MobilityFromEUTRACommandr8IEsCsFallbackIndicator& mobilityFromEUTRACommandr8IEsCsFallbackIndicator) { *static_cast<MobilityFromEUTRACommandr8IEsCsFallbackIndicator*>(items[0]) = mobilityFromEUTRACommandr8IEsCsFallbackIndicator; }
	void setMobilityFromEUTRACommandr8IEsPurpose(const MobilityFromEUTRACommandr8IEsPurpose& mobilityFromEUTRACommandr8IEsPurpose) { *static_cast<MobilityFromEUTRACommandr8IEsPurpose*>(items[1]) = mobilityFromEUTRACommandr8IEsPurpose; }
	void setNonCriticalExtension(const MobilityFromEUTRACommandv8a0IEs& nonCriticalExtension) { *static_cast<MobilityFromEUTRACommandv8a0IEs*>(items[2]) = nonCriticalExtension; }

	MobilityFromEUTRACommandr8IEsCsFallbackIndicator& getMobilityFromEUTRACommandr8IEsCsFallbackIndicator() { return *static_cast<MobilityFromEUTRACommandr8IEsCsFallbackIndicator*>(items[0]); }
	MobilityFromEUTRACommandr8IEsPurpose& getMobilityFromEUTRACommandr8IEsPurpose() { return *static_cast<MobilityFromEUTRACommandr8IEsPurpose*>(items[1]); }
	MobilityFromEUTRACommandv8a0IEs& getNonCriticalExtension() { return *static_cast<MobilityFromEUTRACommandv8a0IEs*>(items[2]); }
};

typedef Boolean MobilityFromEUTRACommandr9IEsCsFallbackIndicator;

typedef OctetStringBase ECSFBr9MessageContCDMA20001XRTTr9;

enum ECSFBr9mobilityCDMA2000_HRPD_r9Values {
	handover_ECSFBr9mobilityCDMA2000_HRPD_r9 = 0,
	redirection_ECSFBr9mobilityCDMA2000_HRPD_r9 = 1,
};
typedef Enumerated<CONSTRAINED, 1> ECSFBr9mobilityCDMA2000_HRPD_r9;

typedef OctetStringBase ECSFBr9MessageContCDMA2000HRPDr9;

class ECSFBr9 : public Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	ECSFBr9(): Sequence(&theInfo) {}

	void setECSFBr9MessageContCDMA20001XRTTr9(const ECSFBr9MessageContCDMA20001XRTTr9& eCSFBr9MessageContCDMA20001XRTTr9) { *static_cast<ECSFBr9MessageContCDMA20001XRTTr9*>(items[0]) = eCSFBr9MessageContCDMA20001XRTTr9; }
	void setECSFBr9mobilityCDMA2000_HRPD_r9(const ECSFBr9mobilityCDMA2000_HRPD_r9& eCSFBr9mobilityCDMA2000_HRPD_r9) { *static_cast<ECSFBr9mobilityCDMA2000_HRPD_r9*>(items[1]) = eCSFBr9mobilityCDMA2000_HRPD_r9; }
	void setECSFBr9MessageContCDMA2000HRPDr9(const ECSFBr9MessageContCDMA2000HRPDr9& eCSFBr9MessageContCDMA2000HRPDr9) { *static_cast<ECSFBr9MessageContCDMA2000HRPDr9*>(items[2]) = eCSFBr9MessageContCDMA2000HRPDr9; }
	void setRedirectCarrierCDMA2000HRPDr9(const CarrierFreqCDMA2000& redirectCarrierCDMA2000HRPDr9) { *static_cast<CarrierFreqCDMA2000*>(items[3]) = redirectCarrierCDMA2000HRPDr9; }

	ECSFBr9MessageContCDMA20001XRTTr9& getECSFBr9MessageContCDMA20001XRTTr9() { return *static_cast<ECSFBr9MessageContCDMA20001XRTTr9*>(items[0]); }
	ECSFBr9mobilityCDMA2000_HRPD_r9& getECSFBr9mobilityCDMA2000_HRPD_r9() { return *static_cast<ECSFBr9mobilityCDMA2000_HRPD_r9*>(items[1]); }
	ECSFBr9MessageContCDMA2000HRPDr9& getECSFBr9MessageContCDMA2000HRPDr9() { return *static_cast<ECSFBr9MessageContCDMA2000HRPDr9*>(items[2]); }
	CarrierFreqCDMA2000& getRedirectCarrierCDMA2000HRPDr9() { return *static_cast<CarrierFreqCDMA2000*>(items[3]); }
};

class MobilityFromEUTRACommandr9IEsPurpose : public Choice {
private:
	static const void *choicesInfo[3];
public:
	enum MobilityFromEUTRACommandr9IEsPurposeChoices {
		handover = 0,
		cellChangeOrder = 1,
		eCSFBr9 = 2,
	};
	static const Info theInfo;
	MobilityFromEUTRACommandr9IEsPurpose(): Choice(&theInfo) {}
};

typedef OctetStringBase MobilityFromEUTRACommandv930IEsLateNonCriticalExtension;

class MobilityFromEUTRACommandv960IEsNonCriticalExtension : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	MobilityFromEUTRACommandv960IEsNonCriticalExtension(): Sequence(&theInfo) {}


};

class MobilityFromEUTRACommandv960IEs : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MobilityFromEUTRACommandv960IEs(): Sequence(&theInfo) {}

	void setBandIndicator(const BandIndicatorGERAN& bandIndicator) { *static_cast<BandIndicatorGERAN*>(items[0]) = bandIndicator; }
	void setMobilityFromEUTRACommandv960IEsNonCriticalExtension(const MobilityFromEUTRACommandv960IEsNonCriticalExtension& mobilityFromEUTRACommandv960IEsNonCriticalExtension) { *static_cast<MobilityFromEUTRACommandv960IEsNonCriticalExtension*>(items[1]) = mobilityFromEUTRACommandv960IEsNonCriticalExtension; }

	BandIndicatorGERAN& getBandIndicator() { return *static_cast<BandIndicatorGERAN*>(items[0]); }
	MobilityFromEUTRACommandv960IEsNonCriticalExtension& getMobilityFromEUTRACommandv960IEsNonCriticalExtension() { return *static_cast<MobilityFromEUTRACommandv960IEsNonCriticalExtension*>(items[1]); }
};

class MobilityFromEUTRACommandv930IEs : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MobilityFromEUTRACommandv930IEs(): Sequence(&theInfo) {}

	void setMobilityFromEUTRACommandv930IEsLateNonCriticalExtension(const MobilityFromEUTRACommandv930IEsLateNonCriticalExtension& mobilityFromEUTRACommandv930IEsLateNonCriticalExtension) { *static_cast<MobilityFromEUTRACommandv930IEsLateNonCriticalExtension*>(items[0]) = mobilityFromEUTRACommandv930IEsLateNonCriticalExtension; }
	void setNonCriticalExtension(const MobilityFromEUTRACommandv960IEs& nonCriticalExtension) { *static_cast<MobilityFromEUTRACommandv960IEs*>(items[1]) = nonCriticalExtension; }

	MobilityFromEUTRACommandv930IEsLateNonCriticalExtension& getMobilityFromEUTRACommandv930IEsLateNonCriticalExtension() { return *static_cast<MobilityFromEUTRACommandv930IEsLateNonCriticalExtension*>(items[0]); }
	MobilityFromEUTRACommandv960IEs& getNonCriticalExtension() { return *static_cast<MobilityFromEUTRACommandv960IEs*>(items[1]); }
};

class MobilityFromEUTRACommandr9IEs : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	MobilityFromEUTRACommandr9IEs(): Sequence(&theInfo) {}
	MobilityFromEUTRACommandr9IEs(const MobilityFromEUTRACommandr9IEsCsFallbackIndicator& mobilityFromEUTRACommandr9IEsCsFallbackIndicator, const MobilityFromEUTRACommandr9IEsPurpose& mobilityFromEUTRACommandr9IEsPurpose);

	void setMobilityFromEUTRACommandr9IEsCsFallbackIndicator(const MobilityFromEUTRACommandr9IEsCsFallbackIndicator& mobilityFromEUTRACommandr9IEsCsFallbackIndicator) { *static_cast<MobilityFromEUTRACommandr9IEsCsFallbackIndicator*>(items[0]) = mobilityFromEUTRACommandr9IEsCsFallbackIndicator; }
	void setMobilityFromEUTRACommandr9IEsPurpose(const MobilityFromEUTRACommandr9IEsPurpose& mobilityFromEUTRACommandr9IEsPurpose) { *static_cast<MobilityFromEUTRACommandr9IEsPurpose*>(items[1]) = mobilityFromEUTRACommandr9IEsPurpose; }
	void setNonCriticalExtension(const MobilityFromEUTRACommandv930IEs& nonCriticalExtension) { *static_cast<MobilityFromEUTRACommandv930IEs*>(items[2]) = nonCriticalExtension; }

	MobilityFromEUTRACommandr9IEsCsFallbackIndicator& getMobilityFromEUTRACommandr9IEsCsFallbackIndicator() { return *static_cast<MobilityFromEUTRACommandr9IEsCsFallbackIndicator*>(items[0]); }
	MobilityFromEUTRACommandr9IEsPurpose& getMobilityFromEUTRACommandr9IEsPurpose() { return *static_cast<MobilityFromEUTRACommandr9IEsPurpose*>(items[1]); }
	MobilityFromEUTRACommandv930IEs& getNonCriticalExtension() { return *static_cast<MobilityFromEUTRACommandv930IEs*>(items[2]); }
};

typedef Null MobilityFromEUTRACommandCriticalExtensionsC1Spare2;

typedef Null MobilityFromEUTRACommandCriticalExtensionsC1Spare1;

class MobilityFromEUTRACommandCriticalExtensionsC1 : public Choice {
private:
	static const void *choicesInfo[4];
public:
	enum MobilityFromEUTRACommandCriticalExtensionsC1Choices {
		mobilityFromEUTRACommandr8 = 0,
		mobilityFromEUTRACommandr9 = 1,
		mobilityFromEUTRACommandCriticalExtensionsC1Spare2 = 2,
		mobilityFromEUTRACommandCriticalExtensionsC1Spare1 = 3,
	};
	static const Info theInfo;
	MobilityFromEUTRACommandCriticalExtensionsC1(): Choice(&theInfo) {}
};

class MobilityFromEUTRACommandCriticalExtensionsCriticalExtensionsFuture : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	MobilityFromEUTRACommandCriticalExtensionsCriticalExtensionsFuture(): Sequence(&theInfo) {}


};

class MobilityFromEUTRACommandCriticalExtensions : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum MobilityFromEUTRACommandCriticalExtensionsChoices {
		mobilityFromEUTRACommandCriticalExtensionsC1 = 0,
		mobilityFromEUTRACommandCriticalExtensionsCriticalExtensionsFuture = 1,
	};
	static const Info theInfo;
	MobilityFromEUTRACommandCriticalExtensions(): Choice(&theInfo) {}
};

class MobilityFromEUTRACommand : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MobilityFromEUTRACommand(): Sequence(&theInfo) {}
	MobilityFromEUTRACommand(const RRCTransactionIdentifier& rrcTransactionIdentifier, const MobilityFromEUTRACommandCriticalExtensions& mobilityFromEUTRACommandCriticalExtensions);

	void setRrcTransactionIdentifier(const RRCTransactionIdentifier& rrcTransactionIdentifier) { *static_cast<RRCTransactionIdentifier*>(items[0]) = rrcTransactionIdentifier; }
	void setMobilityFromEUTRACommandCriticalExtensions(const MobilityFromEUTRACommandCriticalExtensions& mobilityFromEUTRACommandCriticalExtensions) { *static_cast<MobilityFromEUTRACommandCriticalExtensions*>(items[1]) = mobilityFromEUTRACommandCriticalExtensions; }

	RRCTransactionIdentifier& getRrcTransactionIdentifier() { return *static_cast<RRCTransactionIdentifier*>(items[0]); }
	MobilityFromEUTRACommandCriticalExtensions& getMobilityFromEUTRACommandCriticalExtensions() { return *static_cast<MobilityFromEUTRACommandCriticalExtensions*>(items[1]); }
};

typedef Integer<CONSTRAINED, 1, maxObjectId> MeasObjectId;

typedef SequenceOf<MeasObjectId, CONSTRAINED, 1, maxObjectId> MeasObjectToRemoveList;

typedef Integer<CONSTRAINED, 0, maxEARFCN> ARFCNValueEUTRA;

enum AllowedMeasBandwidthValues {
	mbw6_AllowedMeasBandwidth = 0,
	mbw15_AllowedMeasBandwidth = 1,
	mbw25_AllowedMeasBandwidth = 2,
	mbw50_AllowedMeasBandwidth = 3,
	mbw75_AllowedMeasBandwidth = 4,
	mbw100_AllowedMeasBandwidth = 5,
};
typedef Enumerated<CONSTRAINED, 5> AllowedMeasBandwidth;

typedef Boolean PresenceAntennaPort1;

typedef BitString<CONSTRAINED, 2, 2> NeighCellConfig;

enum QOffsetRangeValues {
	dB_24_QOffsetRange = 0,
	dB_22_QOffsetRange = 1,
	dB_20_QOffsetRange = 2,
	dB_18_QOffsetRange = 3,
	dB_16_QOffsetRange = 4,
	dB_14_QOffsetRange = 5,
	dB_12_QOffsetRange = 6,
	dB_10_QOffsetRange = 7,
	dB_8_QOffsetRange = 8,
	dB_6_QOffsetRange = 9,
	dB_5_QOffsetRange = 10,
	dB_4_QOffsetRange = 11,
	dB_3_QOffsetRange = 12,
	dB_2_QOffsetRange = 13,
	dB_1_QOffsetRange = 14,
	dB0_QOffsetRange = 15,
	dB1_QOffsetRange = 16,
	dB2_QOffsetRange = 17,
	dB3_QOffsetRange = 18,
	dB4_QOffsetRange = 19,
	dB5_QOffsetRange = 20,
	dB6_QOffsetRange = 21,
	dB8_QOffsetRange = 22,
	dB10_QOffsetRange = 23,
	dB12_QOffsetRange = 24,
	dB14_QOffsetRange = 25,
	dB16_QOffsetRange = 26,
	dB18_QOffsetRange = 27,
	dB20_QOffsetRange = 28,
	dB22_QOffsetRange = 29,
	dB24_QOffsetRange = 30,
};
typedef Enumerated<CONSTRAINED, 30> QOffsetRange;

typedef Integer<CONSTRAINED, 1, maxCellMeas> CellIndex;

typedef SequenceOf<CellIndex, CONSTRAINED, 1, maxCellMeas> CellIndexList;

typedef Integer<CONSTRAINED, 1, maxCellMeas> CellsToAddModCellIndex;

typedef Integer<CONSTRAINED, 0, 503> PhysCellId;

class CellsToAddMod : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	CellsToAddMod(): Sequence(&theInfo) {}
	CellsToAddMod(const CellsToAddModCellIndex& cellsToAddModCellIndex, const PhysCellId& physCellId, const QOffsetRange& cellIndividualOffset);

	void setCellsToAddModCellIndex(const CellsToAddModCellIndex& cellsToAddModCellIndex) { *static_cast<CellsToAddModCellIndex*>(items[0]) = cellsToAddModCellIndex; }
	void setPhysCellId(const PhysCellId& physCellId) { *static_cast<PhysCellId*>(items[1]) = physCellId; }
	void setCellIndividualOffset(const QOffsetRange& cellIndividualOffset) { *static_cast<QOffsetRange*>(items[2]) = cellIndividualOffset; }

	CellsToAddModCellIndex& getCellsToAddModCellIndex() { return *static_cast<CellsToAddModCellIndex*>(items[0]); }
	PhysCellId& getPhysCellId() { return *static_cast<PhysCellId*>(items[1]); }
	QOffsetRange& getCellIndividualOffset() { return *static_cast<QOffsetRange*>(items[2]); }
};

typedef SequenceOf<CellsToAddMod, CONSTRAINED, 1, maxCellMeas> CellsToAddModList;

typedef Integer<CONSTRAINED, 1, maxCellMeas> BlackCellsToAddModCellIndex;

enum PhysCellIdRangerangeValues {
	n4_PhysCellIdRangerange = 0,
	n8_PhysCellIdRangerange = 1,
	n12_PhysCellIdRangerange = 2,
	n16_PhysCellIdRangerange = 3,
	n24_PhysCellIdRangerange = 4,
	n32_PhysCellIdRangerange = 5,
	n48_PhysCellIdRangerange = 6,
	n64_PhysCellIdRangerange = 7,
	n84_PhysCellIdRangerange = 8,
	n96_PhysCellIdRangerange = 9,
	n128_PhysCellIdRangerange = 10,
	n168_PhysCellIdRangerange = 11,
	n252_PhysCellIdRangerange = 12,
	n504_PhysCellIdRangerange = 13,
	spare2_PhysCellIdRangerange = 14,
	spare1_PhysCellIdRangerange = 15,
};
typedef Enumerated<CONSTRAINED, 15> PhysCellIdRangerange;

class PhysCellIdRange : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PhysCellIdRange(): Sequence(&theInfo) {}
	PhysCellIdRange(const PhysCellId& start);

	void setStart(const PhysCellId& start) { *static_cast<PhysCellId*>(items[0]) = start; }
	void setPhysCellIdRangerange(const PhysCellIdRangerange& physCellIdRangerange) { *static_cast<PhysCellIdRangerange*>(items[1]) = physCellIdRangerange; }

	PhysCellId& getStart() { return *static_cast<PhysCellId*>(items[0]); }
	PhysCellIdRangerange& getPhysCellIdRangerange() { return *static_cast<PhysCellIdRangerange*>(items[1]); }
};

class BlackCellsToAddMod : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	BlackCellsToAddMod(): Sequence(&theInfo) {}
	BlackCellsToAddMod(const BlackCellsToAddModCellIndex& blackCellsToAddModCellIndex, const PhysCellIdRange& physCellIdRange);

	void setBlackCellsToAddModCellIndex(const BlackCellsToAddModCellIndex& blackCellsToAddModCellIndex) { *static_cast<BlackCellsToAddModCellIndex*>(items[0]) = blackCellsToAddModCellIndex; }
	void setPhysCellIdRange(const PhysCellIdRange& physCellIdRange) { *static_cast<PhysCellIdRange*>(items[1]) = physCellIdRange; }

	BlackCellsToAddModCellIndex& getBlackCellsToAddModCellIndex() { return *static_cast<BlackCellsToAddModCellIndex*>(items[0]); }
	PhysCellIdRange& getPhysCellIdRange() { return *static_cast<PhysCellIdRange*>(items[1]); }
};

typedef SequenceOf<BlackCellsToAddMod, CONSTRAINED, 1, maxCellMeas> BlackCellsToAddModList;

enum MeasCycleSCellr10Values {
	sf160_MeasCycleSCellr10 = 0,
	sf256_MeasCycleSCellr10 = 1,
	sf320_MeasCycleSCellr10 = 2,
	sf512_MeasCycleSCellr10 = 3,
	sf640_MeasCycleSCellr10 = 4,
	sf1024_MeasCycleSCellr10 = 5,
	sf1280_MeasCycleSCellr10 = 6,
	spare1_MeasCycleSCellr10 = 7,
};
typedef Enumerated<CONSTRAINED, 7> MeasCycleSCellr10;

typedef Null MeasSubframePatternConfigNeighr10Release;

typedef SequenceOf<PhysCellIdRange, CONSTRAINED, 1, maxCellMeas> MeasSubframeCellListr10;

class MeasSubframePatternConfigNeighr10Setup : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MeasSubframePatternConfigNeighr10Setup(): Sequence(&theInfo) {}
	MeasSubframePatternConfigNeighr10Setup(const MeasSubframePatternr10& measSubframePatternNeighr10);

	void setMeasSubframePatternNeighr10(const MeasSubframePatternr10& measSubframePatternNeighr10) { *static_cast<MeasSubframePatternr10*>(items[0]) = measSubframePatternNeighr10; }
	void setMeasSubframeCellListr10(const MeasSubframeCellListr10& measSubframeCellListr10) { *static_cast<MeasSubframeCellListr10*>(items[1]) = measSubframeCellListr10; }

	MeasSubframePatternr10& getMeasSubframePatternNeighr10() { return *static_cast<MeasSubframePatternr10*>(items[0]); }
	MeasSubframeCellListr10& getMeasSubframeCellListr10() { return *static_cast<MeasSubframeCellListr10*>(items[1]); }
};

class MeasSubframePatternConfigNeighr10 : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum MeasSubframePatternConfigNeighr10Choices {
		measSubframePatternConfigNeighr10Release = 0,
		measSubframePatternConfigNeighr10Setup = 1,
	};
	static const Info theInfo;
	MeasSubframePatternConfigNeighr10(): Choice(&theInfo) {}
};

class MeasObjectEUTRA : public Sequence {
private:
	static const void *itemsInfo[12];
	static bool itemsPres[12];
public:
	static const Info theInfo;
	MeasObjectEUTRA(): Sequence(&theInfo) {}
	MeasObjectEUTRA(const ARFCNValueEUTRA& carrierFreq, const AllowedMeasBandwidth& allowedMeasBandwidth, const PresenceAntennaPort1& presenceAntennaPort1, const NeighCellConfig& neighCellConfig);

	void setCarrierFreq(const ARFCNValueEUTRA& carrierFreq) { *static_cast<ARFCNValueEUTRA*>(items[0]) = carrierFreq; }
	void setAllowedMeasBandwidth(const AllowedMeasBandwidth& allowedMeasBandwidth) { *static_cast<AllowedMeasBandwidth*>(items[1]) = allowedMeasBandwidth; }
	void setPresenceAntennaPort1(const PresenceAntennaPort1& presenceAntennaPort1) { *static_cast<PresenceAntennaPort1*>(items[2]) = presenceAntennaPort1; }
	void setNeighCellConfig(const NeighCellConfig& neighCellConfig) { *static_cast<NeighCellConfig*>(items[3]) = neighCellConfig; }
	void setOffsetFreq(const QOffsetRange& offsetFreq) { *static_cast<QOffsetRange*>(items[4]) = offsetFreq; }
	void setCellsToRemoveList(const CellIndexList& cellsToRemoveList) { *static_cast<CellIndexList*>(items[5]) = cellsToRemoveList; }
	void setCellsToAddModList(const CellsToAddModList& cellsToAddModList) { *static_cast<CellsToAddModList*>(items[6]) = cellsToAddModList; }
	void setBlackCellsToRemoveList(const CellIndexList& blackCellsToRemoveList) { *static_cast<CellIndexList*>(items[7]) = blackCellsToRemoveList; }
	void setBlackCellsToAddModList(const BlackCellsToAddModList& blackCellsToAddModList) { *static_cast<BlackCellsToAddModList*>(items[8]) = blackCellsToAddModList; }
	void setCellForWhichToReportCGI(const PhysCellId& cellForWhichToReportCGI) { *static_cast<PhysCellId*>(items[9]) = cellForWhichToReportCGI; }
	void setMeasCycleSCellr10(const MeasCycleSCellr10& measCycleSCellr10) { *static_cast<MeasCycleSCellr10*>(items[10]) = measCycleSCellr10; }
	void setMeasSubframePatternConfigNeighr10(const MeasSubframePatternConfigNeighr10& measSubframePatternConfigNeighr10) { *static_cast<MeasSubframePatternConfigNeighr10*>(items[11]) = measSubframePatternConfigNeighr10; }

	ARFCNValueEUTRA& getCarrierFreq() { return *static_cast<ARFCNValueEUTRA*>(items[0]); }
	AllowedMeasBandwidth& getAllowedMeasBandwidth() { return *static_cast<AllowedMeasBandwidth*>(items[1]); }
	PresenceAntennaPort1& getPresenceAntennaPort1() { return *static_cast<PresenceAntennaPort1*>(items[2]); }
	NeighCellConfig& getNeighCellConfig() { return *static_cast<NeighCellConfig*>(items[3]); }
	QOffsetRange& getOffsetFreq() { return *static_cast<QOffsetRange*>(items[4]); }
	CellIndexList& getCellsToRemoveList() { return *static_cast<CellIndexList*>(items[5]); }
	CellsToAddModList& getCellsToAddModList() { return *static_cast<CellsToAddModList*>(items[6]); }
	CellIndexList& getBlackCellsToRemoveList() { return *static_cast<CellIndexList*>(items[7]); }
	BlackCellsToAddModList& getBlackCellsToAddModList() { return *static_cast<BlackCellsToAddModList*>(items[8]); }
	PhysCellId& getCellForWhichToReportCGI() { return *static_cast<PhysCellId*>(items[9]); }
	MeasCycleSCellr10& getMeasCycleSCellr10() { return *static_cast<MeasCycleSCellr10*>(items[10]); }
	MeasSubframePatternConfigNeighr10& getMeasSubframePatternConfigNeighr10() { return *static_cast<MeasSubframePatternConfigNeighr10*>(items[11]); }
};

typedef Integer<CONSTRAINED, 0, 16383> ARFCNValueUTRA;

typedef Integer<CONSTRAINED, -15, 15> QOffsetRangeInterRAT;

typedef Integer<CONSTRAINED, 1, maxCellMeas> CellsToAddModUTRAFDDCellIndex;

typedef Integer<CONSTRAINED, 0, 511> PhysCellIdUTRAFDD;

class CellsToAddModUTRAFDD : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellsToAddModUTRAFDD(): Sequence(&theInfo) {}
	CellsToAddModUTRAFDD(const CellsToAddModUTRAFDDCellIndex& cellsToAddModUTRAFDDCellIndex, const PhysCellIdUTRAFDD& physCellId);

	void setCellsToAddModUTRAFDDCellIndex(const CellsToAddModUTRAFDDCellIndex& cellsToAddModUTRAFDDCellIndex) { *static_cast<CellsToAddModUTRAFDDCellIndex*>(items[0]) = cellsToAddModUTRAFDDCellIndex; }
	void setPhysCellId(const PhysCellIdUTRAFDD& physCellId) { *static_cast<PhysCellIdUTRAFDD*>(items[1]) = physCellId; }

	CellsToAddModUTRAFDDCellIndex& getCellsToAddModUTRAFDDCellIndex() { return *static_cast<CellsToAddModUTRAFDDCellIndex*>(items[0]); }
	PhysCellIdUTRAFDD& getPhysCellId() { return *static_cast<PhysCellIdUTRAFDD*>(items[1]); }
};

typedef SequenceOf<CellsToAddModUTRAFDD, CONSTRAINED, 1, maxCellMeas> CellsToAddModListUTRAFDD;

typedef Integer<CONSTRAINED, 1, maxCellMeas> CellsToAddModUTRATDDCellIndex;

typedef Integer<CONSTRAINED, 0, 127> PhysCellIdUTRATDD;

class CellsToAddModUTRATDD : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellsToAddModUTRATDD(): Sequence(&theInfo) {}
	CellsToAddModUTRATDD(const CellsToAddModUTRATDDCellIndex& cellsToAddModUTRATDDCellIndex, const PhysCellIdUTRATDD& physCellId);

	void setCellsToAddModUTRATDDCellIndex(const CellsToAddModUTRATDDCellIndex& cellsToAddModUTRATDDCellIndex) { *static_cast<CellsToAddModUTRATDDCellIndex*>(items[0]) = cellsToAddModUTRATDDCellIndex; }
	void setPhysCellId(const PhysCellIdUTRATDD& physCellId) { *static_cast<PhysCellIdUTRATDD*>(items[1]) = physCellId; }

	CellsToAddModUTRATDDCellIndex& getCellsToAddModUTRATDDCellIndex() { return *static_cast<CellsToAddModUTRATDDCellIndex*>(items[0]); }
	PhysCellIdUTRATDD& getPhysCellId() { return *static_cast<PhysCellIdUTRATDD*>(items[1]); }
};

typedef SequenceOf<CellsToAddModUTRATDD, CONSTRAINED, 1, maxCellMeas> CellsToAddModListUTRATDD;

class MeasObjectUTRACellsToAddModList : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum MeasObjectUTRACellsToAddModListChoices {
		cellsToAddModListUTRAFDD = 0,
		cellsToAddModListUTRATDD = 1,
	};
	static const Info theInfo;
	MeasObjectUTRACellsToAddModList(): Choice(&theInfo) {}
};

class MeasObjectUTRACellForWhichToReportCGI : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum MeasObjectUTRACellForWhichToReportCGIChoices {
		utraFDD = 0,
		utraTDD = 1,
	};
	static const Info theInfo;
	MeasObjectUTRACellForWhichToReportCGI(): Choice(&theInfo) {}
};

typedef Integer<CONSTRAINED, 2, 512> PhysCellIdRangeUTRAFDDr9Ranger9;

class PhysCellIdRangeUTRAFDDr9 : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PhysCellIdRangeUTRAFDDr9(): Sequence(&theInfo) {}
	PhysCellIdRangeUTRAFDDr9(const PhysCellIdUTRAFDD& startr9);

	void setStartr9(const PhysCellIdUTRAFDD& startr9) { *static_cast<PhysCellIdUTRAFDD*>(items[0]) = startr9; }
	void setPhysCellIdRangeUTRAFDDr9Ranger9(const PhysCellIdRangeUTRAFDDr9Ranger9& physCellIdRangeUTRAFDDr9Ranger9) { *static_cast<PhysCellIdRangeUTRAFDDr9Ranger9*>(items[1]) = physCellIdRangeUTRAFDDr9Ranger9; }

	PhysCellIdUTRAFDD& getStartr9() { return *static_cast<PhysCellIdUTRAFDD*>(items[0]); }
	PhysCellIdRangeUTRAFDDr9Ranger9& getPhysCellIdRangeUTRAFDDr9Ranger9() { return *static_cast<PhysCellIdRangeUTRAFDDr9Ranger9*>(items[1]); }
};

typedef SequenceOf<PhysCellIdRangeUTRAFDDr9, CONSTRAINED, 1,  maxPhysCellIdRange_r9> PhysCellIdRangeUTRAFDDListr9;

class CSGAllowedReportingCellsr9 : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CSGAllowedReportingCellsr9(): Sequence(&theInfo) {}

	void setPhysCellIdRangeUTRAFDDListr9(const PhysCellIdRangeUTRAFDDListr9& physCellIdRangeUTRAFDDListr9) { *static_cast<PhysCellIdRangeUTRAFDDListr9*>(items[0]) = physCellIdRangeUTRAFDDListr9; }

	PhysCellIdRangeUTRAFDDListr9& getPhysCellIdRangeUTRAFDDListr9() { return *static_cast<PhysCellIdRangeUTRAFDDListr9*>(items[0]); }
};

class MeasObjectUTRA : public Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	MeasObjectUTRA(): Sequence(&theInfo) {}
	MeasObjectUTRA(const ARFCNValueUTRA& carrierFreq);

	void setCarrierFreq(const ARFCNValueUTRA& carrierFreq) { *static_cast<ARFCNValueUTRA*>(items[0]) = carrierFreq; }
	void setOffsetFreq(const QOffsetRangeInterRAT& offsetFreq) { *static_cast<QOffsetRangeInterRAT*>(items[1]) = offsetFreq; }
	void setCellsToRemoveList(const CellIndexList& cellsToRemoveList) { *static_cast<CellIndexList*>(items[2]) = cellsToRemoveList; }
	void setMeasObjectUTRACellsToAddModList(const MeasObjectUTRACellsToAddModList& measObjectUTRACellsToAddModList) { *static_cast<MeasObjectUTRACellsToAddModList*>(items[3]) = measObjectUTRACellsToAddModList; }
	void setMeasObjectUTRACellForWhichToReportCGI(const MeasObjectUTRACellForWhichToReportCGI& measObjectUTRACellForWhichToReportCGI) { *static_cast<MeasObjectUTRACellForWhichToReportCGI*>(items[4]) = measObjectUTRACellForWhichToReportCGI; }
	void setCsgallowedReportingCellsv930(const CSGAllowedReportingCellsr9& csgallowedReportingCellsv930) { *static_cast<CSGAllowedReportingCellsr9*>(items[5]) = csgallowedReportingCellsv930; }

	ARFCNValueUTRA& getCarrierFreq() { return *static_cast<ARFCNValueUTRA*>(items[0]); }
	QOffsetRangeInterRAT& getOffsetFreq() { return *static_cast<QOffsetRangeInterRAT*>(items[1]); }
	CellIndexList& getCellsToRemoveList() { return *static_cast<CellIndexList*>(items[2]); }
	MeasObjectUTRACellsToAddModList& getMeasObjectUTRACellsToAddModList() { return *static_cast<MeasObjectUTRACellsToAddModList*>(items[3]); }
	MeasObjectUTRACellForWhichToReportCGI& getMeasObjectUTRACellForWhichToReportCGI() { return *static_cast<MeasObjectUTRACellForWhichToReportCGI*>(items[4]); }
	CSGAllowedReportingCellsr9& getCsgallowedReportingCellsv930() { return *static_cast<CSGAllowedReportingCellsr9*>(items[5]); }
};

typedef SequenceOf<ARFCNValueGERAN, CONSTRAINED, 0, 31> ExplicitListOfARFCNs;

typedef Integer<CONSTRAINED, 1, 8> CarrierFreqsGERANFollowingARFCNsEquallySpacedARFCNsArfcnSpacing;

typedef Integer<CONSTRAINED, 0, 31> CarrierFreqsGERANFollowingARFCNsEquallySpacedARFCNsNumberOfFollowingARFCNs;

class CarrierFreqsGERANFollowingARFCNsEquallySpacedARFCNs : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CarrierFreqsGERANFollowingARFCNsEquallySpacedARFCNs(): Sequence(&theInfo) {}
	CarrierFreqsGERANFollowingARFCNsEquallySpacedARFCNs(const CarrierFreqsGERANFollowingARFCNsEquallySpacedARFCNsArfcnSpacing& carrierFreqsGERANFollowingARFCNsEquallySpacedARFCNsArfcnSpacing, const CarrierFreqsGERANFollowingARFCNsEquallySpacedARFCNsNumberOfFollowingARFCNs& carrierFreqsGERANFollowingARFCNsEquallySpacedARFCNsNumberOfFollowingARFCNs);

	void setCarrierFreqsGERANFollowingARFCNsEquallySpacedARFCNsArfcnSpacing(const CarrierFreqsGERANFollowingARFCNsEquallySpacedARFCNsArfcnSpacing& carrierFreqsGERANFollowingARFCNsEquallySpacedARFCNsArfcnSpacing) { *static_cast<CarrierFreqsGERANFollowingARFCNsEquallySpacedARFCNsArfcnSpacing*>(items[0]) = carrierFreqsGERANFollowingARFCNsEquallySpacedARFCNsArfcnSpacing; }
	void setCarrierFreqsGERANFollowingARFCNsEquallySpacedARFCNsNumberOfFollowingARFCNs(const CarrierFreqsGERANFollowingARFCNsEquallySpacedARFCNsNumberOfFollowingARFCNs& carrierFreqsGERANFollowingARFCNsEquallySpacedARFCNsNumberOfFollowingARFCNs) { *static_cast<CarrierFreqsGERANFollowingARFCNsEquallySpacedARFCNsNumberOfFollowingARFCNs*>(items[1]) = carrierFreqsGERANFollowingARFCNsEquallySpacedARFCNsNumberOfFollowingARFCNs; }

	CarrierFreqsGERANFollowingARFCNsEquallySpacedARFCNsArfcnSpacing& getCarrierFreqsGERANFollowingARFCNsEquallySpacedARFCNsArfcnSpacing() { return *static_cast<CarrierFreqsGERANFollowingARFCNsEquallySpacedARFCNsArfcnSpacing*>(items[0]); }
	CarrierFreqsGERANFollowingARFCNsEquallySpacedARFCNsNumberOfFollowingARFCNs& getCarrierFreqsGERANFollowingARFCNsEquallySpacedARFCNsNumberOfFollowingARFCNs() { return *static_cast<CarrierFreqsGERANFollowingARFCNsEquallySpacedARFCNsNumberOfFollowingARFCNs*>(items[1]); }
};

typedef OctetString<CONSTRAINED, 1, 16> CarrierFreqsGERANFollowingARFCNsVariableBitMapOfARFCNs;

class CarrierFreqsGERANFollowingARFCNs : public Choice {
private:
	static const void *choicesInfo[3];
public:
	enum CarrierFreqsGERANFollowingARFCNsChoices {
		explicitListOfARFCNs = 0,
		carrierFreqsGERANFollowingARFCNsEquallySpacedARFCNs = 1,
		carrierFreqsGERANFollowingARFCNsVariableBitMapOfARFCNs = 2,
	};
	static const Info theInfo;
	CarrierFreqsGERANFollowingARFCNs(): Choice(&theInfo) {}
};

class CarrierFreqsGERAN : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	CarrierFreqsGERAN(): Sequence(&theInfo) {}
	CarrierFreqsGERAN(const ARFCNValueGERAN& startingARFCN, const BandIndicatorGERAN& bandIndicator, const CarrierFreqsGERANFollowingARFCNs& carrierFreqsGERANFollowingARFCNs);

	void setStartingARFCN(const ARFCNValueGERAN& startingARFCN) { *static_cast<ARFCNValueGERAN*>(items[0]) = startingARFCN; }
	void setBandIndicator(const BandIndicatorGERAN& bandIndicator) { *static_cast<BandIndicatorGERAN*>(items[1]) = bandIndicator; }
	void setCarrierFreqsGERANFollowingARFCNs(const CarrierFreqsGERANFollowingARFCNs& carrierFreqsGERANFollowingARFCNs) { *static_cast<CarrierFreqsGERANFollowingARFCNs*>(items[2]) = carrierFreqsGERANFollowingARFCNs; }

	ARFCNValueGERAN& getStartingARFCN() { return *static_cast<ARFCNValueGERAN*>(items[0]); }
	BandIndicatorGERAN& getBandIndicator() { return *static_cast<BandIndicatorGERAN*>(items[1]); }
	CarrierFreqsGERANFollowingARFCNs& getCarrierFreqsGERANFollowingARFCNs() { return *static_cast<CarrierFreqsGERANFollowingARFCNs*>(items[2]); }
};

typedef BitString<CONSTRAINED, 8, 8> MeasObjectGERANNccPermitted;

class MeasObjectGERAN : public Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	MeasObjectGERAN(): Sequence(&theInfo) {}
	MeasObjectGERAN(const CarrierFreqsGERAN& carrierFreqs);

	void setCarrierFreqs(const CarrierFreqsGERAN& carrierFreqs) { *static_cast<CarrierFreqsGERAN*>(items[0]) = carrierFreqs; }
	void setOffsetFreq(const QOffsetRangeInterRAT& offsetFreq) { *static_cast<QOffsetRangeInterRAT*>(items[1]) = offsetFreq; }
	void setMeasObjectGERANNccPermitted(const MeasObjectGERANNccPermitted& measObjectGERANNccPermitted) { *static_cast<MeasObjectGERANNccPermitted*>(items[2]) = measObjectGERANNccPermitted; }
	void setCellForWhichToReportCGI(const PhysCellIdGERAN& cellForWhichToReportCGI) { *static_cast<PhysCellIdGERAN*>(items[3]) = cellForWhichToReportCGI; }

	CarrierFreqsGERAN& getCarrierFreqs() { return *static_cast<CarrierFreqsGERAN*>(items[0]); }
	QOffsetRangeInterRAT& getOffsetFreq() { return *static_cast<QOffsetRangeInterRAT*>(items[1]); }
	MeasObjectGERANNccPermitted& getMeasObjectGERANNccPermitted() { return *static_cast<MeasObjectGERANNccPermitted*>(items[2]); }
	PhysCellIdGERAN& getCellForWhichToReportCGI() { return *static_cast<PhysCellIdGERAN*>(items[3]); }
};

typedef Integer<CONSTRAINED, 0, 15> MeasObjectCDMA2000SearchWindowSize;

typedef Integer<CONSTRAINED, 1, maxCellMeas> CellsToAddModCDMA2000CellIndex;

typedef Integer<CONSTRAINED, 0, maxPNOffset> PhysCellIdCDMA2000;

class CellsToAddModCDMA2000 : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellsToAddModCDMA2000(): Sequence(&theInfo) {}
	CellsToAddModCDMA2000(const CellsToAddModCDMA2000CellIndex& cellsToAddModCDMA2000CellIndex, const PhysCellIdCDMA2000& physCellId);

	void setCellsToAddModCDMA2000CellIndex(const CellsToAddModCDMA2000CellIndex& cellsToAddModCDMA2000CellIndex) { *static_cast<CellsToAddModCDMA2000CellIndex*>(items[0]) = cellsToAddModCDMA2000CellIndex; }
	void setPhysCellId(const PhysCellIdCDMA2000& physCellId) { *static_cast<PhysCellIdCDMA2000*>(items[1]) = physCellId; }

	CellsToAddModCDMA2000CellIndex& getCellsToAddModCDMA2000CellIndex() { return *static_cast<CellsToAddModCDMA2000CellIndex*>(items[0]); }
	PhysCellIdCDMA2000& getPhysCellId() { return *static_cast<PhysCellIdCDMA2000*>(items[1]); }
};

typedef SequenceOf<CellsToAddModCDMA2000, CONSTRAINED, 1, maxCellMeas> CellsToAddModListCDMA2000;

class MeasObjectCDMA2000 : public Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	MeasObjectCDMA2000(): Sequence(&theInfo) {}
	MeasObjectCDMA2000(const CDMA2000Type& cdma2000Type, const CarrierFreqCDMA2000& carrierFreq);

	void setCdma2000Type(const CDMA2000Type& cdma2000Type) { *static_cast<CDMA2000Type*>(items[0]) = cdma2000Type; }
	void setCarrierFreq(const CarrierFreqCDMA2000& carrierFreq) { *static_cast<CarrierFreqCDMA2000*>(items[1]) = carrierFreq; }
	void setMeasObjectCDMA2000SearchWindowSize(const MeasObjectCDMA2000SearchWindowSize& measObjectCDMA2000SearchWindowSize) { *static_cast<MeasObjectCDMA2000SearchWindowSize*>(items[2]) = measObjectCDMA2000SearchWindowSize; }
	void setOffsetFreq(const QOffsetRangeInterRAT& offsetFreq) { *static_cast<QOffsetRangeInterRAT*>(items[3]) = offsetFreq; }
	void setCellsToRemoveList(const CellIndexList& cellsToRemoveList) { *static_cast<CellIndexList*>(items[4]) = cellsToRemoveList; }
	void setCellsToAddModList(const CellsToAddModListCDMA2000& cellsToAddModList) { *static_cast<CellsToAddModListCDMA2000*>(items[5]) = cellsToAddModList; }
	void setCellForWhichToReportCGI(const PhysCellIdCDMA2000& cellForWhichToReportCGI) { *static_cast<PhysCellIdCDMA2000*>(items[6]) = cellForWhichToReportCGI; }

	CDMA2000Type& getCdma2000Type() { return *static_cast<CDMA2000Type*>(items[0]); }
	CarrierFreqCDMA2000& getCarrierFreq() { return *static_cast<CarrierFreqCDMA2000*>(items[1]); }
	MeasObjectCDMA2000SearchWindowSize& getMeasObjectCDMA2000SearchWindowSize() { return *static_cast<MeasObjectCDMA2000SearchWindowSize*>(items[2]); }
	QOffsetRangeInterRAT& getOffsetFreq() { return *static_cast<QOffsetRangeInterRAT*>(items[3]); }
	CellIndexList& getCellsToRemoveList() { return *static_cast<CellIndexList*>(items[4]); }
	CellsToAddModListCDMA2000& getCellsToAddModList() { return *static_cast<CellsToAddModListCDMA2000*>(items[5]); }
	PhysCellIdCDMA2000& getCellForWhichToReportCGI() { return *static_cast<PhysCellIdCDMA2000*>(items[6]); }
};

class MeasObjectToAddModMeasObject : public Choice {
private:
	static const void *choicesInfo[4];
public:
	enum MeasObjectToAddModMeasObjectChoices {
		measObjectEUTRA = 0,
		measObjectUTRA = 1,
		measObjectGERAN = 2,
		measObjectCDMA2000 = 3,
	};
	static const Info theInfo;
	MeasObjectToAddModMeasObject(): Choice(&theInfo) {}
};

class MeasObjectToAddMod : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MeasObjectToAddMod(): Sequence(&theInfo) {}
	MeasObjectToAddMod(const MeasObjectId& measObjectId, const MeasObjectToAddModMeasObject& measObjectToAddModMeasObject);

	void setMeasObjectId(const MeasObjectId& measObjectId) { *static_cast<MeasObjectId*>(items[0]) = measObjectId; }
	void setMeasObjectToAddModMeasObject(const MeasObjectToAddModMeasObject& measObjectToAddModMeasObject) { *static_cast<MeasObjectToAddModMeasObject*>(items[1]) = measObjectToAddModMeasObject; }

	MeasObjectId& getMeasObjectId() { return *static_cast<MeasObjectId*>(items[0]); }
	MeasObjectToAddModMeasObject& getMeasObjectToAddModMeasObject() { return *static_cast<MeasObjectToAddModMeasObject*>(items[1]); }
};

typedef SequenceOf<MeasObjectToAddMod, CONSTRAINED, 1, maxObjectId> MeasObjectToAddModList;

typedef Integer<CONSTRAINED, 1, maxReportConfigId> ReportConfigId;

typedef SequenceOf<ReportConfigId, CONSTRAINED, 1, maxReportConfigId> ReportConfigToRemoveList;

typedef Integer<CONSTRAINED, 0, 97> RSRPRange;

typedef Integer<CONSTRAINED, 0, 34> RSRQRange;

class ThresholdEUTRA : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum ThresholdEUTRAChoices {
		thresholdRSRP = 0,
		thresholdRSRQ = 1,
	};
	static const Info theInfo;
	ThresholdEUTRA(): Choice(&theInfo) {}
};

class ReportConfigEUTRATriggerTypeEventEventIdEventA1 : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ReportConfigEUTRATriggerTypeEventEventIdEventA1(): Sequence(&theInfo) {}
	ReportConfigEUTRATriggerTypeEventEventIdEventA1(const ThresholdEUTRA& a1Threshold);

	void setA1Threshold(const ThresholdEUTRA& a1Threshold) { *static_cast<ThresholdEUTRA*>(items[0]) = a1Threshold; }

	ThresholdEUTRA& getA1Threshold() { return *static_cast<ThresholdEUTRA*>(items[0]); }
};

class ReportConfigEUTRATriggerTypeEventEventIdEventA2 : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ReportConfigEUTRATriggerTypeEventEventIdEventA2(): Sequence(&theInfo) {}
	ReportConfigEUTRATriggerTypeEventEventIdEventA2(const ThresholdEUTRA& a2Threshold);

	void setA2Threshold(const ThresholdEUTRA& a2Threshold) { *static_cast<ThresholdEUTRA*>(items[0]) = a2Threshold; }

	ThresholdEUTRA& getA2Threshold() { return *static_cast<ThresholdEUTRA*>(items[0]); }
};

typedef Integer<CONSTRAINED, -30, 30> ReportConfigEUTRATriggerTypeEventEventIdEventA3A3Offset;

typedef Boolean ReportConfigEUTRATriggerTypeEventEventIdEventA3ReportOnLeave;

class ReportConfigEUTRATriggerTypeEventEventIdEventA3 : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ReportConfigEUTRATriggerTypeEventEventIdEventA3(): Sequence(&theInfo) {}
	ReportConfigEUTRATriggerTypeEventEventIdEventA3(const ReportConfigEUTRATriggerTypeEventEventIdEventA3A3Offset& reportConfigEUTRATriggerTypeEventEventIdEventA3A3Offset, const ReportConfigEUTRATriggerTypeEventEventIdEventA3ReportOnLeave& reportConfigEUTRATriggerTypeEventEventIdEventA3ReportOnLeave);

	void setReportConfigEUTRATriggerTypeEventEventIdEventA3A3Offset(const ReportConfigEUTRATriggerTypeEventEventIdEventA3A3Offset& reportConfigEUTRATriggerTypeEventEventIdEventA3A3Offset) { *static_cast<ReportConfigEUTRATriggerTypeEventEventIdEventA3A3Offset*>(items[0]) = reportConfigEUTRATriggerTypeEventEventIdEventA3A3Offset; }
	void setReportConfigEUTRATriggerTypeEventEventIdEventA3ReportOnLeave(const ReportConfigEUTRATriggerTypeEventEventIdEventA3ReportOnLeave& reportConfigEUTRATriggerTypeEventEventIdEventA3ReportOnLeave) { *static_cast<ReportConfigEUTRATriggerTypeEventEventIdEventA3ReportOnLeave*>(items[1]) = reportConfigEUTRATriggerTypeEventEventIdEventA3ReportOnLeave; }

	ReportConfigEUTRATriggerTypeEventEventIdEventA3A3Offset& getReportConfigEUTRATriggerTypeEventEventIdEventA3A3Offset() { return *static_cast<ReportConfigEUTRATriggerTypeEventEventIdEventA3A3Offset*>(items[0]); }
	ReportConfigEUTRATriggerTypeEventEventIdEventA3ReportOnLeave& getReportConfigEUTRATriggerTypeEventEventIdEventA3ReportOnLeave() { return *static_cast<ReportConfigEUTRATriggerTypeEventEventIdEventA3ReportOnLeave*>(items[1]); }
};

class ReportConfigEUTRATriggerTypeEventEventIdEventA4 : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ReportConfigEUTRATriggerTypeEventEventIdEventA4(): Sequence(&theInfo) {}
	ReportConfigEUTRATriggerTypeEventEventIdEventA4(const ThresholdEUTRA& a4Threshold);

	void setA4Threshold(const ThresholdEUTRA& a4Threshold) { *static_cast<ThresholdEUTRA*>(items[0]) = a4Threshold; }

	ThresholdEUTRA& getA4Threshold() { return *static_cast<ThresholdEUTRA*>(items[0]); }
};

class ReportConfigEUTRATriggerTypeEventEventIdEventA5 : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ReportConfigEUTRATriggerTypeEventEventIdEventA5(): Sequence(&theInfo) {}
	ReportConfigEUTRATriggerTypeEventEventIdEventA5(const ThresholdEUTRA& a5Threshold1, const ThresholdEUTRA& a5Threshold2);

	void setA5Threshold1(const ThresholdEUTRA& a5Threshold1) { *static_cast<ThresholdEUTRA*>(items[0]) = a5Threshold1; }
	void setA5Threshold2(const ThresholdEUTRA& a5Threshold2) { *static_cast<ThresholdEUTRA*>(items[1]) = a5Threshold2; }

	ThresholdEUTRA& getA5Threshold1() { return *static_cast<ThresholdEUTRA*>(items[0]); }
	ThresholdEUTRA& getA5Threshold2() { return *static_cast<ThresholdEUTRA*>(items[1]); }
};

typedef Integer<CONSTRAINED, -30, 30> ReportConfigEUTRATriggerTypeEventEventIdEventA6r10A6Offsetr10;

typedef Boolean ReportConfigEUTRATriggerTypeEventEventIdEventA6r10A6ReportOnLeaver10;

class ReportConfigEUTRATriggerTypeEventEventIdEventA6r10 : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ReportConfigEUTRATriggerTypeEventEventIdEventA6r10(): Sequence(&theInfo) {}
	ReportConfigEUTRATriggerTypeEventEventIdEventA6r10(const ReportConfigEUTRATriggerTypeEventEventIdEventA6r10A6Offsetr10& reportConfigEUTRATriggerTypeEventEventIdEventA6r10A6Offsetr10, const ReportConfigEUTRATriggerTypeEventEventIdEventA6r10A6ReportOnLeaver10& reportConfigEUTRATriggerTypeEventEventIdEventA6r10A6ReportOnLeaver10);

	void setReportConfigEUTRATriggerTypeEventEventIdEventA6r10A6Offsetr10(const ReportConfigEUTRATriggerTypeEventEventIdEventA6r10A6Offsetr10& reportConfigEUTRATriggerTypeEventEventIdEventA6r10A6Offsetr10) { *static_cast<ReportConfigEUTRATriggerTypeEventEventIdEventA6r10A6Offsetr10*>(items[0]) = reportConfigEUTRATriggerTypeEventEventIdEventA6r10A6Offsetr10; }
	void setReportConfigEUTRATriggerTypeEventEventIdEventA6r10A6ReportOnLeaver10(const ReportConfigEUTRATriggerTypeEventEventIdEventA6r10A6ReportOnLeaver10& reportConfigEUTRATriggerTypeEventEventIdEventA6r10A6ReportOnLeaver10) { *static_cast<ReportConfigEUTRATriggerTypeEventEventIdEventA6r10A6ReportOnLeaver10*>(items[1]) = reportConfigEUTRATriggerTypeEventEventIdEventA6r10A6ReportOnLeaver10; }

	ReportConfigEUTRATriggerTypeEventEventIdEventA6r10A6Offsetr10& getReportConfigEUTRATriggerTypeEventEventIdEventA6r10A6Offsetr10() { return *static_cast<ReportConfigEUTRATriggerTypeEventEventIdEventA6r10A6Offsetr10*>(items[0]); }
	ReportConfigEUTRATriggerTypeEventEventIdEventA6r10A6ReportOnLeaver10& getReportConfigEUTRATriggerTypeEventEventIdEventA6r10A6ReportOnLeaver10() { return *static_cast<ReportConfigEUTRATriggerTypeEventEventIdEventA6r10A6ReportOnLeaver10*>(items[1]); }
};

class ReportConfigEUTRATriggerTypeEventEventId : public Choice {
private:
	static const void *choicesInfo[6];
public:
	enum ReportConfigEUTRATriggerTypeEventEventIdChoices {
		reportConfigEUTRATriggerTypeEventEventIdEventA1 = 0,
		reportConfigEUTRATriggerTypeEventEventIdEventA2 = 1,
		reportConfigEUTRATriggerTypeEventEventIdEventA3 = 2,
		reportConfigEUTRATriggerTypeEventEventIdEventA4 = 3,
		reportConfigEUTRATriggerTypeEventEventIdEventA5 = 4,
		reportConfigEUTRATriggerTypeEventEventIdEventA6r10 = 5,
	};
	static const Info theInfo;
	ReportConfigEUTRATriggerTypeEventEventId(): Choice(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 30> Hysteresis;

enum TimeToTriggerValues {
	ms0_TimeToTrigger = 0,
	ms40_TimeToTrigger = 1,
	ms64_TimeToTrigger = 2,
	ms80_TimeToTrigger = 3,
	ms100_TimeToTrigger = 4,
	ms128_TimeToTrigger = 5,
	ms160_TimeToTrigger = 6,
	ms256_TimeToTrigger = 7,
	ms320_TimeToTrigger = 8,
	ms480_TimeToTrigger = 9,
	ms512_TimeToTrigger = 10,
	ms640_TimeToTrigger = 11,
	ms1024_TimeToTrigger = 12,
	ms1280_TimeToTrigger = 13,
	ms2560_TimeToTrigger = 14,
	ms5120_TimeToTrigger = 15,
};
typedef Enumerated<CONSTRAINED, 15> TimeToTrigger;

class ReportConfigEUTRATriggerTypeEvent : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	ReportConfigEUTRATriggerTypeEvent(): Sequence(&theInfo) {}
	ReportConfigEUTRATriggerTypeEvent(const ReportConfigEUTRATriggerTypeEventEventId& reportConfigEUTRATriggerTypeEventEventId, const Hysteresis& hysteresis, const TimeToTrigger& timeToTrigger);

	void setReportConfigEUTRATriggerTypeEventEventId(const ReportConfigEUTRATriggerTypeEventEventId& reportConfigEUTRATriggerTypeEventEventId) { *static_cast<ReportConfigEUTRATriggerTypeEventEventId*>(items[0]) = reportConfigEUTRATriggerTypeEventEventId; }
	void setHysteresis(const Hysteresis& hysteresis) { *static_cast<Hysteresis*>(items[1]) = hysteresis; }
	void setTimeToTrigger(const TimeToTrigger& timeToTrigger) { *static_cast<TimeToTrigger*>(items[2]) = timeToTrigger; }

	ReportConfigEUTRATriggerTypeEventEventId& getReportConfigEUTRATriggerTypeEventEventId() { return *static_cast<ReportConfigEUTRATriggerTypeEventEventId*>(items[0]); }
	Hysteresis& getHysteresis() { return *static_cast<Hysteresis*>(items[1]); }
	TimeToTrigger& getTimeToTrigger() { return *static_cast<TimeToTrigger*>(items[2]); }
};

enum ReportConfigEUTRATriggerTypePeriodicalpurposeValues {
	reportStrongestCells_ReportConfigEUTRATriggerTypePeriodicalpurpose = 0,
	reportCGI_ReportConfigEUTRATriggerTypePeriodicalpurpose = 1,
};
typedef Enumerated<CONSTRAINED, 1> ReportConfigEUTRATriggerTypePeriodicalpurpose;

class ReportConfigEUTRATriggerTypePeriodical : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ReportConfigEUTRATriggerTypePeriodical(): Sequence(&theInfo) {}
	ReportConfigEUTRATriggerTypePeriodical(const ReportConfigEUTRATriggerTypePeriodicalpurpose& reportConfigEUTRATriggerTypePeriodicalpurpose);

	void setReportConfigEUTRATriggerTypePeriodicalpurpose(const ReportConfigEUTRATriggerTypePeriodicalpurpose& reportConfigEUTRATriggerTypePeriodicalpurpose) { *static_cast<ReportConfigEUTRATriggerTypePeriodicalpurpose*>(items[0]) = reportConfigEUTRATriggerTypePeriodicalpurpose; }

	ReportConfigEUTRATriggerTypePeriodicalpurpose& getReportConfigEUTRATriggerTypePeriodicalpurpose() { return *static_cast<ReportConfigEUTRATriggerTypePeriodicalpurpose*>(items[0]); }
};

class ReportConfigEUTRATriggerType : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum ReportConfigEUTRATriggerTypeChoices {
		reportConfigEUTRATriggerTypeEvent = 0,
		reportConfigEUTRATriggerTypePeriodical = 1,
	};
	static const Info theInfo;
	ReportConfigEUTRATriggerType(): Choice(&theInfo) {}
};

enum ReportConfigEUTRAtriggerQuantityValues {
	rsrp_ReportConfigEUTRAtriggerQuantity = 0,
	rsrq_ReportConfigEUTRAtriggerQuantity = 1,
};
typedef Enumerated<CONSTRAINED, 1> ReportConfigEUTRAtriggerQuantity;

enum ReportConfigEUTRAreportQuantityValues {
	sameAsTriggerQuantity_ReportConfigEUTRAreportQuantity = 0,
	both_ReportConfigEUTRAreportQuantity = 1,
};
typedef Enumerated<CONSTRAINED, 1> ReportConfigEUTRAreportQuantity;

typedef Integer<CONSTRAINED, 1, maxCellReport> ReportConfigEUTRAMaxReportCells;

enum ReportIntervalValues {
	ms120_ReportInterval = 0,
	ms240_ReportInterval = 1,
	ms480_ReportInterval = 2,
	ms640_ReportInterval = 3,
	ms1024_ReportInterval = 4,
	ms2048_ReportInterval = 5,
	ms5120_ReportInterval = 6,
	ms10240_ReportInterval = 7,
	min1_ReportInterval = 8,
	min6_ReportInterval = 9,
	min12_ReportInterval = 10,
	min30_ReportInterval = 11,
	min60_ReportInterval = 12,
	spare3_ReportInterval = 13,
	spare2_ReportInterval = 14,
	spare1_ReportInterval = 15,
};
typedef Enumerated<CONSTRAINED, 15> ReportInterval;

enum ReportConfigEUTRAreportAmountValues {
	r1_ReportConfigEUTRAreportAmount = 0,
	r2_ReportConfigEUTRAreportAmount = 1,
	r4_ReportConfigEUTRAreportAmount = 2,
	r8_ReportConfigEUTRAreportAmount = 3,
	r16_ReportConfigEUTRAreportAmount = 4,
	r32_ReportConfigEUTRAreportAmount = 5,
	r64_ReportConfigEUTRAreportAmount = 6,
	infinity_ReportConfigEUTRAreportAmount = 7,
};
typedef Enumerated<CONSTRAINED, 7> ReportConfigEUTRAreportAmount;

enum ReportConfigEUTRAsi_RequestForHO_r9Values {
	setup_ReportConfigEUTRAsi_RequestForHO_r9 = 0,
};
typedef Enumerated<CONSTRAINED, 0> ReportConfigEUTRAsi_RequestForHO_r9;

enum ReportConfigEUTRAue_RxTxTimeDiffPeriodical_r9Values {
	setup_ReportConfigEUTRAue_RxTxTimeDiffPeriodical_r9 = 0,
};
typedef Enumerated<CONSTRAINED, 0> ReportConfigEUTRAue_RxTxTimeDiffPeriodical_r9;

enum ReportConfigEUTRAincludeLocationInfo_r10Values {
	true_ReportConfigEUTRAincludeLocationInfo_r10 = 0,
};
typedef Enumerated<CONSTRAINED, 0> ReportConfigEUTRAincludeLocationInfo_r10;

enum ReportConfigEUTRAreportAddNeighMeas_r10Values {
	setup_ReportConfigEUTRAreportAddNeighMeas_r10 = 0,
};
typedef Enumerated<CONSTRAINED, 0> ReportConfigEUTRAreportAddNeighMeas_r10;

class ReportConfigEUTRA : public Sequence {
private:
	static const void *itemsInfo[10];
	static bool itemsPres[10];
public:
	static const Info theInfo;
	ReportConfigEUTRA(): Sequence(&theInfo) {}
	ReportConfigEUTRA(const ReportConfigEUTRATriggerType& reportConfigEUTRATriggerType, const ReportConfigEUTRAtriggerQuantity& reportConfigEUTRAtriggerQuantity, const ReportConfigEUTRAreportQuantity& reportConfigEUTRAreportQuantity, const ReportConfigEUTRAMaxReportCells& reportConfigEUTRAMaxReportCells, const ReportInterval& reportInterval, const ReportConfigEUTRAreportAmount& reportConfigEUTRAreportAmount);

	void setReportConfigEUTRATriggerType(const ReportConfigEUTRATriggerType& reportConfigEUTRATriggerType) { *static_cast<ReportConfigEUTRATriggerType*>(items[0]) = reportConfigEUTRATriggerType; }
	void setReportConfigEUTRAtriggerQuantity(const ReportConfigEUTRAtriggerQuantity& reportConfigEUTRAtriggerQuantity) { *static_cast<ReportConfigEUTRAtriggerQuantity*>(items[1]) = reportConfigEUTRAtriggerQuantity; }
	void setReportConfigEUTRAreportQuantity(const ReportConfigEUTRAreportQuantity& reportConfigEUTRAreportQuantity) { *static_cast<ReportConfigEUTRAreportQuantity*>(items[2]) = reportConfigEUTRAreportQuantity; }
	void setReportConfigEUTRAMaxReportCells(const ReportConfigEUTRAMaxReportCells& reportConfigEUTRAMaxReportCells) { *static_cast<ReportConfigEUTRAMaxReportCells*>(items[3]) = reportConfigEUTRAMaxReportCells; }
	void setReportInterval(const ReportInterval& reportInterval) { *static_cast<ReportInterval*>(items[4]) = reportInterval; }
	void setReportConfigEUTRAreportAmount(const ReportConfigEUTRAreportAmount& reportConfigEUTRAreportAmount) { *static_cast<ReportConfigEUTRAreportAmount*>(items[5]) = reportConfigEUTRAreportAmount; }
	void setReportConfigEUTRAsi_RequestForHO_r9(const ReportConfigEUTRAsi_RequestForHO_r9& reportConfigEUTRAsi_RequestForHO_r9) { *static_cast<ReportConfigEUTRAsi_RequestForHO_r9*>(items[6]) = reportConfigEUTRAsi_RequestForHO_r9; }
	void setReportConfigEUTRAue_RxTxTimeDiffPeriodical_r9(const ReportConfigEUTRAue_RxTxTimeDiffPeriodical_r9& reportConfigEUTRAue_RxTxTimeDiffPeriodical_r9) { *static_cast<ReportConfigEUTRAue_RxTxTimeDiffPeriodical_r9*>(items[7]) = reportConfigEUTRAue_RxTxTimeDiffPeriodical_r9; }
	void setReportConfigEUTRAincludeLocationInfo_r10(const ReportConfigEUTRAincludeLocationInfo_r10& reportConfigEUTRAincludeLocationInfo_r10) { *static_cast<ReportConfigEUTRAincludeLocationInfo_r10*>(items[8]) = reportConfigEUTRAincludeLocationInfo_r10; }
	void setReportConfigEUTRAreportAddNeighMeas_r10(const ReportConfigEUTRAreportAddNeighMeas_r10& reportConfigEUTRAreportAddNeighMeas_r10) { *static_cast<ReportConfigEUTRAreportAddNeighMeas_r10*>(items[9]) = reportConfigEUTRAreportAddNeighMeas_r10; }

	ReportConfigEUTRATriggerType& getReportConfigEUTRATriggerType() { return *static_cast<ReportConfigEUTRATriggerType*>(items[0]); }
	ReportConfigEUTRAtriggerQuantity& getReportConfigEUTRAtriggerQuantity() { return *static_cast<ReportConfigEUTRAtriggerQuantity*>(items[1]); }
	ReportConfigEUTRAreportQuantity& getReportConfigEUTRAreportQuantity() { return *static_cast<ReportConfigEUTRAreportQuantity*>(items[2]); }
	ReportConfigEUTRAMaxReportCells& getReportConfigEUTRAMaxReportCells() { return *static_cast<ReportConfigEUTRAMaxReportCells*>(items[3]); }
	ReportInterval& getReportInterval() { return *static_cast<ReportInterval*>(items[4]); }
	ReportConfigEUTRAreportAmount& getReportConfigEUTRAreportAmount() { return *static_cast<ReportConfigEUTRAreportAmount*>(items[5]); }
	ReportConfigEUTRAsi_RequestForHO_r9& getReportConfigEUTRAsi_RequestForHO_r9() { return *static_cast<ReportConfigEUTRAsi_RequestForHO_r9*>(items[6]); }
	ReportConfigEUTRAue_RxTxTimeDiffPeriodical_r9& getReportConfigEUTRAue_RxTxTimeDiffPeriodical_r9() { return *static_cast<ReportConfigEUTRAue_RxTxTimeDiffPeriodical_r9*>(items[7]); }
	ReportConfigEUTRAincludeLocationInfo_r10& getReportConfigEUTRAincludeLocationInfo_r10() { return *static_cast<ReportConfigEUTRAincludeLocationInfo_r10*>(items[8]); }
	ReportConfigEUTRAreportAddNeighMeas_r10& getReportConfigEUTRAreportAddNeighMeas_r10() { return *static_cast<ReportConfigEUTRAreportAddNeighMeas_r10*>(items[9]); }
};

typedef Integer<CONSTRAINED, -5, 91> ThresholdUTRAUtraRSCP;

typedef Integer<CONSTRAINED, 0, 49> ThresholdUTRAUtraEcN0;

class ThresholdUTRA : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum ThresholdUTRAChoices {
		thresholdUTRAUtraRSCP = 0,
		thresholdUTRAUtraEcN0 = 1,
	};
	static const Info theInfo;
	ThresholdUTRA(): Choice(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 63> ThresholdGERAN;

typedef Integer<CONSTRAINED, 0, 63> ThresholdCDMA2000;

class ReportConfigInterRATTriggerTypeEventEventIdEventB1B1Threshold : public Choice {
private:
	static const void *choicesInfo[3];
public:
	enum ReportConfigInterRATTriggerTypeEventEventIdEventB1B1ThresholdChoices {
		b1ThresholdUTRA = 0,
		b1ThresholdGERAN = 1,
		b1ThresholdCDMA2000 = 2,
	};
	static const Info theInfo;
	ReportConfigInterRATTriggerTypeEventEventIdEventB1B1Threshold(): Choice(&theInfo) {}
};

class ReportConfigInterRATTriggerTypeEventEventIdEventB1 : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ReportConfigInterRATTriggerTypeEventEventIdEventB1(): Sequence(&theInfo) {}
	ReportConfigInterRATTriggerTypeEventEventIdEventB1(const ReportConfigInterRATTriggerTypeEventEventIdEventB1B1Threshold& reportConfigInterRATTriggerTypeEventEventIdEventB1B1Threshold);

	void setReportConfigInterRATTriggerTypeEventEventIdEventB1B1Threshold(const ReportConfigInterRATTriggerTypeEventEventIdEventB1B1Threshold& reportConfigInterRATTriggerTypeEventEventIdEventB1B1Threshold) { *static_cast<ReportConfigInterRATTriggerTypeEventEventIdEventB1B1Threshold*>(items[0]) = reportConfigInterRATTriggerTypeEventEventIdEventB1B1Threshold; }

	ReportConfigInterRATTriggerTypeEventEventIdEventB1B1Threshold& getReportConfigInterRATTriggerTypeEventEventIdEventB1B1Threshold() { return *static_cast<ReportConfigInterRATTriggerTypeEventEventIdEventB1B1Threshold*>(items[0]); }
};

class ReportConfigInterRATTriggerTypeEventEventIdEventB2B2Threshold2 : public Choice {
private:
	static const void *choicesInfo[3];
public:
	enum ReportConfigInterRATTriggerTypeEventEventIdEventB2B2Threshold2Choices {
		b2Threshold2UTRA = 0,
		b2Threshold2GERAN = 1,
		b2Threshold2CDMA2000 = 2,
	};
	static const Info theInfo;
	ReportConfigInterRATTriggerTypeEventEventIdEventB2B2Threshold2(): Choice(&theInfo) {}
};

class ReportConfigInterRATTriggerTypeEventEventIdEventB2 : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ReportConfigInterRATTriggerTypeEventEventIdEventB2(): Sequence(&theInfo) {}
	ReportConfigInterRATTriggerTypeEventEventIdEventB2(const ThresholdEUTRA& b2Threshold1, const ReportConfigInterRATTriggerTypeEventEventIdEventB2B2Threshold2& reportConfigInterRATTriggerTypeEventEventIdEventB2B2Threshold2);

	void setB2Threshold1(const ThresholdEUTRA& b2Threshold1) { *static_cast<ThresholdEUTRA*>(items[0]) = b2Threshold1; }
	void setReportConfigInterRATTriggerTypeEventEventIdEventB2B2Threshold2(const ReportConfigInterRATTriggerTypeEventEventIdEventB2B2Threshold2& reportConfigInterRATTriggerTypeEventEventIdEventB2B2Threshold2) { *static_cast<ReportConfigInterRATTriggerTypeEventEventIdEventB2B2Threshold2*>(items[1]) = reportConfigInterRATTriggerTypeEventEventIdEventB2B2Threshold2; }

	ThresholdEUTRA& getB2Threshold1() { return *static_cast<ThresholdEUTRA*>(items[0]); }
	ReportConfigInterRATTriggerTypeEventEventIdEventB2B2Threshold2& getReportConfigInterRATTriggerTypeEventEventIdEventB2B2Threshold2() { return *static_cast<ReportConfigInterRATTriggerTypeEventEventIdEventB2B2Threshold2*>(items[1]); }
};

class ReportConfigInterRATTriggerTypeEventEventId : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum ReportConfigInterRATTriggerTypeEventEventIdChoices {
		reportConfigInterRATTriggerTypeEventEventIdEventB1 = 0,
		reportConfigInterRATTriggerTypeEventEventIdEventB2 = 1,
	};
	static const Info theInfo;
	ReportConfigInterRATTriggerTypeEventEventId(): Choice(&theInfo) {}
};

class ReportConfigInterRATTriggerTypeEvent : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	ReportConfigInterRATTriggerTypeEvent(): Sequence(&theInfo) {}
	ReportConfigInterRATTriggerTypeEvent(const ReportConfigInterRATTriggerTypeEventEventId& reportConfigInterRATTriggerTypeEventEventId, const Hysteresis& hysteresis, const TimeToTrigger& timeToTrigger);

	void setReportConfigInterRATTriggerTypeEventEventId(const ReportConfigInterRATTriggerTypeEventEventId& reportConfigInterRATTriggerTypeEventEventId) { *static_cast<ReportConfigInterRATTriggerTypeEventEventId*>(items[0]) = reportConfigInterRATTriggerTypeEventEventId; }
	void setHysteresis(const Hysteresis& hysteresis) { *static_cast<Hysteresis*>(items[1]) = hysteresis; }
	void setTimeToTrigger(const TimeToTrigger& timeToTrigger) { *static_cast<TimeToTrigger*>(items[2]) = timeToTrigger; }

	ReportConfigInterRATTriggerTypeEventEventId& getReportConfigInterRATTriggerTypeEventEventId() { return *static_cast<ReportConfigInterRATTriggerTypeEventEventId*>(items[0]); }
	Hysteresis& getHysteresis() { return *static_cast<Hysteresis*>(items[1]); }
	TimeToTrigger& getTimeToTrigger() { return *static_cast<TimeToTrigger*>(items[2]); }
};

enum ReportConfigInterRATTriggerTypePeriodicalpurposeValues {
	reportStrongestCells_ReportConfigInterRATTriggerTypePeriodicalpurpose = 0,
	reportStrongestCellsForSON_ReportConfigInterRATTriggerTypePeriodicalpurpose = 1,
	reportCGI_ReportConfigInterRATTriggerTypePeriodicalpurpose = 2,
};
typedef Enumerated<CONSTRAINED, 2> ReportConfigInterRATTriggerTypePeriodicalpurpose;

class ReportConfigInterRATTriggerTypePeriodical : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ReportConfigInterRATTriggerTypePeriodical(): Sequence(&theInfo) {}
	ReportConfigInterRATTriggerTypePeriodical(const ReportConfigInterRATTriggerTypePeriodicalpurpose& reportConfigInterRATTriggerTypePeriodicalpurpose);

	void setReportConfigInterRATTriggerTypePeriodicalpurpose(const ReportConfigInterRATTriggerTypePeriodicalpurpose& reportConfigInterRATTriggerTypePeriodicalpurpose) { *static_cast<ReportConfigInterRATTriggerTypePeriodicalpurpose*>(items[0]) = reportConfigInterRATTriggerTypePeriodicalpurpose; }

	ReportConfigInterRATTriggerTypePeriodicalpurpose& getReportConfigInterRATTriggerTypePeriodicalpurpose() { return *static_cast<ReportConfigInterRATTriggerTypePeriodicalpurpose*>(items[0]); }
};

class ReportConfigInterRATTriggerType : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum ReportConfigInterRATTriggerTypeChoices {
		reportConfigInterRATTriggerTypeEvent = 0,
		reportConfigInterRATTriggerTypePeriodical = 1,
	};
	static const Info theInfo;
	ReportConfigInterRATTriggerType(): Choice(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, maxCellReport> ReportConfigInterRATMaxReportCells;

enum ReportConfigInterRATreportAmountValues {
	r1_ReportConfigInterRATreportAmount = 0,
	r2_ReportConfigInterRATreportAmount = 1,
	r4_ReportConfigInterRATreportAmount = 2,
	r8_ReportConfigInterRATreportAmount = 3,
	r16_ReportConfigInterRATreportAmount = 4,
	r32_ReportConfigInterRATreportAmount = 5,
	r64_ReportConfigInterRATreportAmount = 6,
	infinity_ReportConfigInterRATreportAmount = 7,
};
typedef Enumerated<CONSTRAINED, 7> ReportConfigInterRATreportAmount;

enum ReportConfigInterRATsi_RequestForHO_r9Values {
	setup_ReportConfigInterRATsi_RequestForHO_r9 = 0,
};
typedef Enumerated<CONSTRAINED, 0> ReportConfigInterRATsi_RequestForHO_r9;

enum ReportConfigInterRATreportQuantityUTRA_FDD_r10Values {
	both_ReportConfigInterRATreportQuantityUTRA_FDD_r10 = 0,
};
typedef Enumerated<CONSTRAINED, 0> ReportConfigInterRATreportQuantityUTRA_FDD_r10;

class ReportConfigInterRAT : public Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	ReportConfigInterRAT(): Sequence(&theInfo) {}
	ReportConfigInterRAT(const ReportConfigInterRATTriggerType& reportConfigInterRATTriggerType, const ReportConfigInterRATMaxReportCells& reportConfigInterRATMaxReportCells, const ReportInterval& reportInterval, const ReportConfigInterRATreportAmount& reportConfigInterRATreportAmount);

	void setReportConfigInterRATTriggerType(const ReportConfigInterRATTriggerType& reportConfigInterRATTriggerType) { *static_cast<ReportConfigInterRATTriggerType*>(items[0]) = reportConfigInterRATTriggerType; }
	void setReportConfigInterRATMaxReportCells(const ReportConfigInterRATMaxReportCells& reportConfigInterRATMaxReportCells) { *static_cast<ReportConfigInterRATMaxReportCells*>(items[1]) = reportConfigInterRATMaxReportCells; }
	void setReportInterval(const ReportInterval& reportInterval) { *static_cast<ReportInterval*>(items[2]) = reportInterval; }
	void setReportConfigInterRATreportAmount(const ReportConfigInterRATreportAmount& reportConfigInterRATreportAmount) { *static_cast<ReportConfigInterRATreportAmount*>(items[3]) = reportConfigInterRATreportAmount; }
	void setReportConfigInterRATsi_RequestForHO_r9(const ReportConfigInterRATsi_RequestForHO_r9& reportConfigInterRATsi_RequestForHO_r9) { *static_cast<ReportConfigInterRATsi_RequestForHO_r9*>(items[4]) = reportConfigInterRATsi_RequestForHO_r9; }
	void setReportConfigInterRATreportQuantityUTRA_FDD_r10(const ReportConfigInterRATreportQuantityUTRA_FDD_r10& reportConfigInterRATreportQuantityUTRA_FDD_r10) { *static_cast<ReportConfigInterRATreportQuantityUTRA_FDD_r10*>(items[5]) = reportConfigInterRATreportQuantityUTRA_FDD_r10; }

	ReportConfigInterRATTriggerType& getReportConfigInterRATTriggerType() { return *static_cast<ReportConfigInterRATTriggerType*>(items[0]); }
	ReportConfigInterRATMaxReportCells& getReportConfigInterRATMaxReportCells() { return *static_cast<ReportConfigInterRATMaxReportCells*>(items[1]); }
	ReportInterval& getReportInterval() { return *static_cast<ReportInterval*>(items[2]); }
	ReportConfigInterRATreportAmount& getReportConfigInterRATreportAmount() { return *static_cast<ReportConfigInterRATreportAmount*>(items[3]); }
	ReportConfigInterRATsi_RequestForHO_r9& getReportConfigInterRATsi_RequestForHO_r9() { return *static_cast<ReportConfigInterRATsi_RequestForHO_r9*>(items[4]); }
	ReportConfigInterRATreportQuantityUTRA_FDD_r10& getReportConfigInterRATreportQuantityUTRA_FDD_r10() { return *static_cast<ReportConfigInterRATreportQuantityUTRA_FDD_r10*>(items[5]); }
};

class ReportConfigToAddModReportConfig : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum ReportConfigToAddModReportConfigChoices {
		reportConfigEUTRA = 0,
		reportConfigInterRAT = 1,
	};
	static const Info theInfo;
	ReportConfigToAddModReportConfig(): Choice(&theInfo) {}
};

class ReportConfigToAddMod : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ReportConfigToAddMod(): Sequence(&theInfo) {}
	ReportConfigToAddMod(const ReportConfigId& reportConfigId, const ReportConfigToAddModReportConfig& reportConfigToAddModReportConfig);

	void setReportConfigId(const ReportConfigId& reportConfigId) { *static_cast<ReportConfigId*>(items[0]) = reportConfigId; }
	void setReportConfigToAddModReportConfig(const ReportConfigToAddModReportConfig& reportConfigToAddModReportConfig) { *static_cast<ReportConfigToAddModReportConfig*>(items[1]) = reportConfigToAddModReportConfig; }

	ReportConfigId& getReportConfigId() { return *static_cast<ReportConfigId*>(items[0]); }
	ReportConfigToAddModReportConfig& getReportConfigToAddModReportConfig() { return *static_cast<ReportConfigToAddModReportConfig*>(items[1]); }
};

typedef SequenceOf<ReportConfigToAddMod, CONSTRAINED, 1, maxReportConfigId> ReportConfigToAddModList;

typedef Integer<CONSTRAINED, 1, maxMeasId> MeasId;

typedef SequenceOf<MeasId, CONSTRAINED, 1, maxMeasId> MeasIdToRemoveList;

class MeasIdToAddMod : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	MeasIdToAddMod(): Sequence(&theInfo) {}
	MeasIdToAddMod(const MeasId& measId, const MeasObjectId& measObjectId, const ReportConfigId& reportConfigId);

	void setMeasId(const MeasId& measId) { *static_cast<MeasId*>(items[0]) = measId; }
	void setMeasObjectId(const MeasObjectId& measObjectId) { *static_cast<MeasObjectId*>(items[1]) = measObjectId; }
	void setReportConfigId(const ReportConfigId& reportConfigId) { *static_cast<ReportConfigId*>(items[2]) = reportConfigId; }

	MeasId& getMeasId() { return *static_cast<MeasId*>(items[0]); }
	MeasObjectId& getMeasObjectId() { return *static_cast<MeasObjectId*>(items[1]); }
	ReportConfigId& getReportConfigId() { return *static_cast<ReportConfigId*>(items[2]); }
};

typedef SequenceOf<MeasIdToAddMod, CONSTRAINED, 1, maxMeasId> MeasIdToAddModList;

class QuantityConfigEUTRA : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	QuantityConfigEUTRA(): Sequence(&theInfo) {}

	void setFilterCoefficientRSRP(const FilterCoefficient& filterCoefficientRSRP) { *static_cast<FilterCoefficient*>(items[0]) = filterCoefficientRSRP; }
	void setFilterCoefficientRSRQ(const FilterCoefficient& filterCoefficientRSRQ) { *static_cast<FilterCoefficient*>(items[1]) = filterCoefficientRSRQ; }

	FilterCoefficient& getFilterCoefficientRSRP() { return *static_cast<FilterCoefficient*>(items[0]); }
	FilterCoefficient& getFilterCoefficientRSRQ() { return *static_cast<FilterCoefficient*>(items[1]); }
};

enum QuantityConfigUTRAmeasQuantityUTRA_FDDValues {
	cpich_RSCP_QuantityConfigUTRAmeasQuantityUTRA_FDD = 0,
	cpich_EcN0_QuantityConfigUTRAmeasQuantityUTRA_FDD = 1,
};
typedef Enumerated<CONSTRAINED, 1> QuantityConfigUTRAmeasQuantityUTRA_FDD;

enum QuantityConfigUTRAmeasQuantityUTRA_TDDValues {
	pccpch_RSCP_QuantityConfigUTRAmeasQuantityUTRA_TDD = 0,
};
typedef Enumerated<CONSTRAINED, 0> QuantityConfigUTRAmeasQuantityUTRA_TDD;

class QuantityConfigUTRA : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	QuantityConfigUTRA(): Sequence(&theInfo) {}
	QuantityConfigUTRA(const QuantityConfigUTRAmeasQuantityUTRA_FDD& quantityConfigUTRAmeasQuantityUTRA_FDD, const QuantityConfigUTRAmeasQuantityUTRA_TDD& quantityConfigUTRAmeasQuantityUTRA_TDD);

	void setQuantityConfigUTRAmeasQuantityUTRA_FDD(const QuantityConfigUTRAmeasQuantityUTRA_FDD& quantityConfigUTRAmeasQuantityUTRA_FDD) { *static_cast<QuantityConfigUTRAmeasQuantityUTRA_FDD*>(items[0]) = quantityConfigUTRAmeasQuantityUTRA_FDD; }
	void setQuantityConfigUTRAmeasQuantityUTRA_TDD(const QuantityConfigUTRAmeasQuantityUTRA_TDD& quantityConfigUTRAmeasQuantityUTRA_TDD) { *static_cast<QuantityConfigUTRAmeasQuantityUTRA_TDD*>(items[1]) = quantityConfigUTRAmeasQuantityUTRA_TDD; }
	void setFilterCoefficient(const FilterCoefficient& filterCoefficient) { *static_cast<FilterCoefficient*>(items[2]) = filterCoefficient; }

	QuantityConfigUTRAmeasQuantityUTRA_FDD& getQuantityConfigUTRAmeasQuantityUTRA_FDD() { return *static_cast<QuantityConfigUTRAmeasQuantityUTRA_FDD*>(items[0]); }
	QuantityConfigUTRAmeasQuantityUTRA_TDD& getQuantityConfigUTRAmeasQuantityUTRA_TDD() { return *static_cast<QuantityConfigUTRAmeasQuantityUTRA_TDD*>(items[1]); }
	FilterCoefficient& getFilterCoefficient() { return *static_cast<FilterCoefficient*>(items[2]); }
};

enum QuantityConfigGERANmeasQuantityGERANValues {
	rssi_QuantityConfigGERANmeasQuantityGERAN = 0,
};
typedef Enumerated<CONSTRAINED, 0> QuantityConfigGERANmeasQuantityGERAN;

class QuantityConfigGERAN : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	QuantityConfigGERAN(): Sequence(&theInfo) {}
	QuantityConfigGERAN(const QuantityConfigGERANmeasQuantityGERAN& quantityConfigGERANmeasQuantityGERAN);

	void setQuantityConfigGERANmeasQuantityGERAN(const QuantityConfigGERANmeasQuantityGERAN& quantityConfigGERANmeasQuantityGERAN) { *static_cast<QuantityConfigGERANmeasQuantityGERAN*>(items[0]) = quantityConfigGERANmeasQuantityGERAN; }
	void setFilterCoefficient(const FilterCoefficient& filterCoefficient) { *static_cast<FilterCoefficient*>(items[1]) = filterCoefficient; }

	QuantityConfigGERANmeasQuantityGERAN& getQuantityConfigGERANmeasQuantityGERAN() { return *static_cast<QuantityConfigGERANmeasQuantityGERAN*>(items[0]); }
	FilterCoefficient& getFilterCoefficient() { return *static_cast<FilterCoefficient*>(items[1]); }
};

enum QuantityConfigCDMA2000measQuantityCDMA2000Values {
	pilotStrength_QuantityConfigCDMA2000measQuantityCDMA2000 = 0,
	pilotPnPhaseAndPilotStrength_QuantityConfigCDMA2000measQuantityCDMA2000 = 1,
};
typedef Enumerated<CONSTRAINED, 1> QuantityConfigCDMA2000measQuantityCDMA2000;

class QuantityConfigCDMA2000 : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	QuantityConfigCDMA2000(): Sequence(&theInfo) {}
	QuantityConfigCDMA2000(const QuantityConfigCDMA2000measQuantityCDMA2000& quantityConfigCDMA2000measQuantityCDMA2000);

	void setQuantityConfigCDMA2000measQuantityCDMA2000(const QuantityConfigCDMA2000measQuantityCDMA2000& quantityConfigCDMA2000measQuantityCDMA2000) { *static_cast<QuantityConfigCDMA2000measQuantityCDMA2000*>(items[0]) = quantityConfigCDMA2000measQuantityCDMA2000; }

	QuantityConfigCDMA2000measQuantityCDMA2000& getQuantityConfigCDMA2000measQuantityCDMA2000() { return *static_cast<QuantityConfigCDMA2000measQuantityCDMA2000*>(items[0]); }
};

class QuantityConfigUTRAv1020 : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	QuantityConfigUTRAv1020(): Sequence(&theInfo) {}

	void setFilterCoefficient2FDDr10(const FilterCoefficient& filterCoefficient2FDDr10) { *static_cast<FilterCoefficient*>(items[0]) = filterCoefficient2FDDr10; }

	FilterCoefficient& getFilterCoefficient2FDDr10() { return *static_cast<FilterCoefficient*>(items[0]); }
};

class QuantityConfig : public Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	QuantityConfig(): Sequence(&theInfo) {}

	void setQuantityConfigEUTRA(const QuantityConfigEUTRA& quantityConfigEUTRA) { *static_cast<QuantityConfigEUTRA*>(items[0]) = quantityConfigEUTRA; }
	void setQuantityConfigUTRA(const QuantityConfigUTRA& quantityConfigUTRA) { *static_cast<QuantityConfigUTRA*>(items[1]) = quantityConfigUTRA; }
	void setQuantityConfigGERAN(const QuantityConfigGERAN& quantityConfigGERAN) { *static_cast<QuantityConfigGERAN*>(items[2]) = quantityConfigGERAN; }
	void setQuantityConfigCDMA2000(const QuantityConfigCDMA2000& quantityConfigCDMA2000) { *static_cast<QuantityConfigCDMA2000*>(items[3]) = quantityConfigCDMA2000; }
	void setQuantityConfigUTRAv1020(const QuantityConfigUTRAv1020& quantityConfigUTRAv1020) { *static_cast<QuantityConfigUTRAv1020*>(items[4]) = quantityConfigUTRAv1020; }

	QuantityConfigEUTRA& getQuantityConfigEUTRA() { return *static_cast<QuantityConfigEUTRA*>(items[0]); }
	QuantityConfigUTRA& getQuantityConfigUTRA() { return *static_cast<QuantityConfigUTRA*>(items[1]); }
	QuantityConfigGERAN& getQuantityConfigGERAN() { return *static_cast<QuantityConfigGERAN*>(items[2]); }
	QuantityConfigCDMA2000& getQuantityConfigCDMA2000() { return *static_cast<QuantityConfigCDMA2000*>(items[3]); }
	QuantityConfigUTRAv1020& getQuantityConfigUTRAv1020() { return *static_cast<QuantityConfigUTRAv1020*>(items[4]); }
};

typedef Null MeasGapConfigRelease;

typedef Integer<CONSTRAINED, 0, 39> MeasGapConfigSetupGapOffsetGp0;

typedef Integer<CONSTRAINED, 0, 79> MeasGapConfigSetupGapOffsetGp1;

class MeasGapConfigSetupGapOffset : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum MeasGapConfigSetupGapOffsetChoices {
		measGapConfigSetupGapOffsetGp0 = 0,
		measGapConfigSetupGapOffsetGp1 = 1,
	};
	static const Info theInfo;
	MeasGapConfigSetupGapOffset(): Choice(&theInfo) {}
};

class MeasGapConfigSetup : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasGapConfigSetup(): Sequence(&theInfo) {}
	MeasGapConfigSetup(const MeasGapConfigSetupGapOffset& measGapConfigSetupGapOffset);

	void setMeasGapConfigSetupGapOffset(const MeasGapConfigSetupGapOffset& measGapConfigSetupGapOffset) { *static_cast<MeasGapConfigSetupGapOffset*>(items[0]) = measGapConfigSetupGapOffset; }

	MeasGapConfigSetupGapOffset& getMeasGapConfigSetupGapOffset() { return *static_cast<MeasGapConfigSetupGapOffset*>(items[0]); }
};

class MeasGapConfig : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum MeasGapConfigChoices {
		measGapConfigRelease = 0,
		measGapConfigSetup = 1,
	};
	static const Info theInfo;
	MeasGapConfig(): Choice(&theInfo) {}
};

typedef Boolean PreRegistrationInfoHRPDPreRegistrationAllowed;

typedef Integer<CONSTRAINED, 0, 255> PreRegistrationZoneIdHRPD;

typedef SequenceOf<PreRegistrationZoneIdHRPD, CONSTRAINED, 1, 2> SecondaryPreRegistrationZoneIdListHRPD;

class PreRegistrationInfoHRPD : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PreRegistrationInfoHRPD(): Sequence(&theInfo) {}
	PreRegistrationInfoHRPD(const PreRegistrationInfoHRPDPreRegistrationAllowed& preRegistrationInfoHRPDPreRegistrationAllowed);

	void setPreRegistrationInfoHRPDPreRegistrationAllowed(const PreRegistrationInfoHRPDPreRegistrationAllowed& preRegistrationInfoHRPDPreRegistrationAllowed) { *static_cast<PreRegistrationInfoHRPDPreRegistrationAllowed*>(items[0]) = preRegistrationInfoHRPDPreRegistrationAllowed; }
	void setPreRegistrationZoneId(const PreRegistrationZoneIdHRPD& preRegistrationZoneId) { *static_cast<PreRegistrationZoneIdHRPD*>(items[1]) = preRegistrationZoneId; }
	void setSecondaryPreRegistrationZoneIdList(const SecondaryPreRegistrationZoneIdListHRPD& secondaryPreRegistrationZoneIdList) { *static_cast<SecondaryPreRegistrationZoneIdListHRPD*>(items[2]) = secondaryPreRegistrationZoneIdList; }

	PreRegistrationInfoHRPDPreRegistrationAllowed& getPreRegistrationInfoHRPDPreRegistrationAllowed() { return *static_cast<PreRegistrationInfoHRPDPreRegistrationAllowed*>(items[0]); }
	PreRegistrationZoneIdHRPD& getPreRegistrationZoneId() { return *static_cast<PreRegistrationZoneIdHRPD*>(items[1]); }
	SecondaryPreRegistrationZoneIdListHRPD& getSecondaryPreRegistrationZoneIdList() { return *static_cast<SecondaryPreRegistrationZoneIdListHRPD*>(items[2]); }
};

typedef Null MeasConfigSpeedStateParsRelease;

enum MobilityStateParameterst_EvaluationValues {
	s30_MobilityStateParameterst_Evaluation = 0,
	s60_MobilityStateParameterst_Evaluation = 1,
	s120_MobilityStateParameterst_Evaluation = 2,
	s180_MobilityStateParameterst_Evaluation = 3,
	s240_MobilityStateParameterst_Evaluation = 4,
	spare3_MobilityStateParameterst_Evaluation = 5,
	spare2_MobilityStateParameterst_Evaluation = 6,
	spare1_MobilityStateParameterst_Evaluation = 7,
};
typedef Enumerated<CONSTRAINED, 7> MobilityStateParameterst_Evaluation;

enum MobilityStateParameterst_HystNormalValues {
	s30_MobilityStateParameterst_HystNormal = 0,
	s60_MobilityStateParameterst_HystNormal = 1,
	s120_MobilityStateParameterst_HystNormal = 2,
	s180_MobilityStateParameterst_HystNormal = 3,
	s240_MobilityStateParameterst_HystNormal = 4,
	spare3_MobilityStateParameterst_HystNormal = 5,
	spare2_MobilityStateParameterst_HystNormal = 6,
	spare1_MobilityStateParameterst_HystNormal = 7,
};
typedef Enumerated<CONSTRAINED, 7> MobilityStateParameterst_HystNormal;

typedef Integer<CONSTRAINED, 1, 16> MobilityStateParametersNCellChangeMedium;

typedef Integer<CONSTRAINED, 1, 16> MobilityStateParametersNCellChangeHigh;

class MobilityStateParameters : public Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	MobilityStateParameters(): Sequence(&theInfo) {}
	MobilityStateParameters(const MobilityStateParameterst_Evaluation& mobilityStateParameterst_Evaluation, const MobilityStateParameterst_HystNormal& mobilityStateParameterst_HystNormal, const MobilityStateParametersNCellChangeMedium& mobilityStateParametersNCellChangeMedium, const MobilityStateParametersNCellChangeHigh& mobilityStateParametersNCellChangeHigh);

	void setMobilityStateParameterst_Evaluation(const MobilityStateParameterst_Evaluation& mobilityStateParameterst_Evaluation) { *static_cast<MobilityStateParameterst_Evaluation*>(items[0]) = mobilityStateParameterst_Evaluation; }
	void setMobilityStateParameterst_HystNormal(const MobilityStateParameterst_HystNormal& mobilityStateParameterst_HystNormal) { *static_cast<MobilityStateParameterst_HystNormal*>(items[1]) = mobilityStateParameterst_HystNormal; }
	void setMobilityStateParametersNCellChangeMedium(const MobilityStateParametersNCellChangeMedium& mobilityStateParametersNCellChangeMedium) { *static_cast<MobilityStateParametersNCellChangeMedium*>(items[2]) = mobilityStateParametersNCellChangeMedium; }
	void setMobilityStateParametersNCellChangeHigh(const MobilityStateParametersNCellChangeHigh& mobilityStateParametersNCellChangeHigh) { *static_cast<MobilityStateParametersNCellChangeHigh*>(items[3]) = mobilityStateParametersNCellChangeHigh; }

	MobilityStateParameterst_Evaluation& getMobilityStateParameterst_Evaluation() { return *static_cast<MobilityStateParameterst_Evaluation*>(items[0]); }
	MobilityStateParameterst_HystNormal& getMobilityStateParameterst_HystNormal() { return *static_cast<MobilityStateParameterst_HystNormal*>(items[1]); }
	MobilityStateParametersNCellChangeMedium& getMobilityStateParametersNCellChangeMedium() { return *static_cast<MobilityStateParametersNCellChangeMedium*>(items[2]); }
	MobilityStateParametersNCellChangeHigh& getMobilityStateParametersNCellChangeHigh() { return *static_cast<MobilityStateParametersNCellChangeHigh*>(items[3]); }
};

enum SpeedStateScaleFactorssf_MediumValues {
	oDot25_SpeedStateScaleFactorssf_Medium = 0,
	oDot5_SpeedStateScaleFactorssf_Medium = 1,
	oDot75_SpeedStateScaleFactorssf_Medium = 2,
	lDot0_SpeedStateScaleFactorssf_Medium = 3,
};
typedef Enumerated<CONSTRAINED, 3> SpeedStateScaleFactorssf_Medium;

enum SpeedStateScaleFactorssf_HighValues {
	oDot25_SpeedStateScaleFactorssf_High = 0,
	oDot5_SpeedStateScaleFactorssf_High = 1,
	oDot75_SpeedStateScaleFactorssf_High = 2,
	lDot0_SpeedStateScaleFactorssf_High = 3,
};
typedef Enumerated<CONSTRAINED, 3> SpeedStateScaleFactorssf_High;

class SpeedStateScaleFactors : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SpeedStateScaleFactors(): Sequence(&theInfo) {}
	SpeedStateScaleFactors(const SpeedStateScaleFactorssf_Medium& speedStateScaleFactorssf_Medium, const SpeedStateScaleFactorssf_High& speedStateScaleFactorssf_High);

	void setSpeedStateScaleFactorssf_Medium(const SpeedStateScaleFactorssf_Medium& speedStateScaleFactorssf_Medium) { *static_cast<SpeedStateScaleFactorssf_Medium*>(items[0]) = speedStateScaleFactorssf_Medium; }
	void setSpeedStateScaleFactorssf_High(const SpeedStateScaleFactorssf_High& speedStateScaleFactorssf_High) { *static_cast<SpeedStateScaleFactorssf_High*>(items[1]) = speedStateScaleFactorssf_High; }

	SpeedStateScaleFactorssf_Medium& getSpeedStateScaleFactorssf_Medium() { return *static_cast<SpeedStateScaleFactorssf_Medium*>(items[0]); }
	SpeedStateScaleFactorssf_High& getSpeedStateScaleFactorssf_High() { return *static_cast<SpeedStateScaleFactorssf_High*>(items[1]); }
};

class MeasConfigSpeedStateParsSetup : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MeasConfigSpeedStateParsSetup(): Sequence(&theInfo) {}
	MeasConfigSpeedStateParsSetup(const MobilityStateParameters& mobilityStateParameters, const SpeedStateScaleFactors& timeToTriggerSF);

	void setMobilityStateParameters(const MobilityStateParameters& mobilityStateParameters) { *static_cast<MobilityStateParameters*>(items[0]) = mobilityStateParameters; }
	void setTimeToTriggerSF(const SpeedStateScaleFactors& timeToTriggerSF) { *static_cast<SpeedStateScaleFactors*>(items[1]) = timeToTriggerSF; }

	MobilityStateParameters& getMobilityStateParameters() { return *static_cast<MobilityStateParameters*>(items[0]); }
	SpeedStateScaleFactors& getTimeToTriggerSF() { return *static_cast<SpeedStateScaleFactors*>(items[1]); }
};

class MeasConfigSpeedStatePars : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum MeasConfigSpeedStateParsChoices {
		measConfigSpeedStateParsRelease = 0,
		measConfigSpeedStateParsSetup = 1,
	};
	static const Info theInfo;
	MeasConfigSpeedStatePars(): Choice(&theInfo) {}
};

class MeasConfig : public Sequence {
private:
	static const void *itemsInfo[11];
	static bool itemsPres[11];
public:
	static const Info theInfo;
	MeasConfig(): Sequence(&theInfo) {}

	void setMeasObjectToRemoveList(const MeasObjectToRemoveList& measObjectToRemoveList) { *static_cast<MeasObjectToRemoveList*>(items[0]) = measObjectToRemoveList; }
	void setMeasObjectToAddModList(const MeasObjectToAddModList& measObjectToAddModList) { *static_cast<MeasObjectToAddModList*>(items[1]) = measObjectToAddModList; }
	void setReportConfigToRemoveList(const ReportConfigToRemoveList& reportConfigToRemoveList) { *static_cast<ReportConfigToRemoveList*>(items[2]) = reportConfigToRemoveList; }
	void setReportConfigToAddModList(const ReportConfigToAddModList& reportConfigToAddModList) { *static_cast<ReportConfigToAddModList*>(items[3]) = reportConfigToAddModList; }
	void setMeasIdToRemoveList(const MeasIdToRemoveList& measIdToRemoveList) { *static_cast<MeasIdToRemoveList*>(items[4]) = measIdToRemoveList; }
	void setMeasIdToAddModList(const MeasIdToAddModList& measIdToAddModList) { *static_cast<MeasIdToAddModList*>(items[5]) = measIdToAddModList; }
	void setQuantityConfig(const QuantityConfig& quantityConfig) { *static_cast<QuantityConfig*>(items[6]) = quantityConfig; }
	void setMeasGapConfig(const MeasGapConfig& measGapConfig) { *static_cast<MeasGapConfig*>(items[7]) = measGapConfig; }
	void setSMeasure(const RSRPRange& sMeasure) { *static_cast<RSRPRange*>(items[8]) = sMeasure; }
	void setPreRegistrationInfoHRPD(const PreRegistrationInfoHRPD& preRegistrationInfoHRPD) { *static_cast<PreRegistrationInfoHRPD*>(items[9]) = preRegistrationInfoHRPD; }
	void setMeasConfigSpeedStatePars(const MeasConfigSpeedStatePars& measConfigSpeedStatePars) { *static_cast<MeasConfigSpeedStatePars*>(items[10]) = measConfigSpeedStatePars; }

	MeasObjectToRemoveList& getMeasObjectToRemoveList() { return *static_cast<MeasObjectToRemoveList*>(items[0]); }
	MeasObjectToAddModList& getMeasObjectToAddModList() { return *static_cast<MeasObjectToAddModList*>(items[1]); }
	ReportConfigToRemoveList& getReportConfigToRemoveList() { return *static_cast<ReportConfigToRemoveList*>(items[2]); }
	ReportConfigToAddModList& getReportConfigToAddModList() { return *static_cast<ReportConfigToAddModList*>(items[3]); }
	MeasIdToRemoveList& getMeasIdToRemoveList() { return *static_cast<MeasIdToRemoveList*>(items[4]); }
	MeasIdToAddModList& getMeasIdToAddModList() { return *static_cast<MeasIdToAddModList*>(items[5]); }
	QuantityConfig& getQuantityConfig() { return *static_cast<QuantityConfig*>(items[6]); }
	MeasGapConfig& getMeasGapConfig() { return *static_cast<MeasGapConfig*>(items[7]); }
	RSRPRange& getSMeasure() { return *static_cast<RSRPRange*>(items[8]); }
	PreRegistrationInfoHRPD& getPreRegistrationInfoHRPD() { return *static_cast<PreRegistrationInfoHRPD*>(items[9]); }
	MeasConfigSpeedStatePars& getMeasConfigSpeedStatePars() { return *static_cast<MeasConfigSpeedStatePars*>(items[10]); }
};

class CarrierFreqEUTRA : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CarrierFreqEUTRA(): Sequence(&theInfo) {}
	CarrierFreqEUTRA(const ARFCNValueEUTRA& dlCarrierFreq);

	void setDlCarrierFreq(const ARFCNValueEUTRA& dlCarrierFreq) { *static_cast<ARFCNValueEUTRA*>(items[0]) = dlCarrierFreq; }
	void setUlCarrierFreq(const ARFCNValueEUTRA& ulCarrierFreq) { *static_cast<ARFCNValueEUTRA*>(items[1]) = ulCarrierFreq; }

	ARFCNValueEUTRA& getDlCarrierFreq() { return *static_cast<ARFCNValueEUTRA*>(items[0]); }
	ARFCNValueEUTRA& getUlCarrierFreq() { return *static_cast<ARFCNValueEUTRA*>(items[1]); }
};

enum CarrierBandwidthEUTRAdl_BandwidthValues {
	n6_CarrierBandwidthEUTRAdl_Bandwidth = 0,
	n15_CarrierBandwidthEUTRAdl_Bandwidth = 1,
	n25_CarrierBandwidthEUTRAdl_Bandwidth = 2,
	n50_CarrierBandwidthEUTRAdl_Bandwidth = 3,
	n75_CarrierBandwidthEUTRAdl_Bandwidth = 4,
	n100_CarrierBandwidthEUTRAdl_Bandwidth = 5,
	spare10_CarrierBandwidthEUTRAdl_Bandwidth = 6,
	spare9_CarrierBandwidthEUTRAdl_Bandwidth = 7,
	spare8_CarrierBandwidthEUTRAdl_Bandwidth = 8,
	spare7_CarrierBandwidthEUTRAdl_Bandwidth = 9,
	spare6_CarrierBandwidthEUTRAdl_Bandwidth = 10,
	spare5_CarrierBandwidthEUTRAdl_Bandwidth = 11,
	spare4_CarrierBandwidthEUTRAdl_Bandwidth = 12,
	spare3_CarrierBandwidthEUTRAdl_Bandwidth = 13,
	spare2_CarrierBandwidthEUTRAdl_Bandwidth = 14,
	spare1_CarrierBandwidthEUTRAdl_Bandwidth = 15,
};
typedef Enumerated<CONSTRAINED, 15> CarrierBandwidthEUTRAdl_Bandwidth;

enum CarrierBandwidthEUTRAul_BandwidthValues {
	n6_CarrierBandwidthEUTRAul_Bandwidth = 0,
	n15_CarrierBandwidthEUTRAul_Bandwidth = 1,
	n25_CarrierBandwidthEUTRAul_Bandwidth = 2,
	n50_CarrierBandwidthEUTRAul_Bandwidth = 3,
	n75_CarrierBandwidthEUTRAul_Bandwidth = 4,
	n100_CarrierBandwidthEUTRAul_Bandwidth = 5,
	spare10_CarrierBandwidthEUTRAul_Bandwidth = 6,
	spare9_CarrierBandwidthEUTRAul_Bandwidth = 7,
	spare8_CarrierBandwidthEUTRAul_Bandwidth = 8,
	spare7_CarrierBandwidthEUTRAul_Bandwidth = 9,
	spare6_CarrierBandwidthEUTRAul_Bandwidth = 10,
	spare5_CarrierBandwidthEUTRAul_Bandwidth = 11,
	spare4_CarrierBandwidthEUTRAul_Bandwidth = 12,
	spare3_CarrierBandwidthEUTRAul_Bandwidth = 13,
	spare2_CarrierBandwidthEUTRAul_Bandwidth = 14,
	spare1_CarrierBandwidthEUTRAul_Bandwidth = 15,
};
typedef Enumerated<CONSTRAINED, 15> CarrierBandwidthEUTRAul_Bandwidth;

class CarrierBandwidthEUTRA : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CarrierBandwidthEUTRA(): Sequence(&theInfo) {}
	CarrierBandwidthEUTRA(const CarrierBandwidthEUTRAdl_Bandwidth& carrierBandwidthEUTRAdl_Bandwidth);

	void setCarrierBandwidthEUTRAdl_Bandwidth(const CarrierBandwidthEUTRAdl_Bandwidth& carrierBandwidthEUTRAdl_Bandwidth) { *static_cast<CarrierBandwidthEUTRAdl_Bandwidth*>(items[0]) = carrierBandwidthEUTRAdl_Bandwidth; }
	void setCarrierBandwidthEUTRAul_Bandwidth(const CarrierBandwidthEUTRAul_Bandwidth& carrierBandwidthEUTRAul_Bandwidth) { *static_cast<CarrierBandwidthEUTRAul_Bandwidth*>(items[1]) = carrierBandwidthEUTRAul_Bandwidth; }

	CarrierBandwidthEUTRAdl_Bandwidth& getCarrierBandwidthEUTRAdl_Bandwidth() { return *static_cast<CarrierBandwidthEUTRAdl_Bandwidth*>(items[0]); }
	CarrierBandwidthEUTRAul_Bandwidth& getCarrierBandwidthEUTRAul_Bandwidth() { return *static_cast<CarrierBandwidthEUTRAul_Bandwidth*>(items[1]); }
};

enum MobilityControlInfot304Values {
	ms50_MobilityControlInfot304 = 0,
	ms100_MobilityControlInfot304 = 1,
	ms150_MobilityControlInfot304 = 2,
	ms200_MobilityControlInfot304 = 3,
	ms500_MobilityControlInfot304 = 4,
	ms1000_MobilityControlInfot304 = 5,
	ms2000_MobilityControlInfot304 = 6,
	spare1_MobilityControlInfot304 = 7,
};
typedef Enumerated<CONSTRAINED, 7> MobilityControlInfot304;

enum RACHConfigCommonPreambleInfonumberOfRA_PreamblesValues {
	n4_RACHConfigCommonPreambleInfonumberOfRA_Preambles = 0,
	n8_RACHConfigCommonPreambleInfonumberOfRA_Preambles = 1,
	n12_RACHConfigCommonPreambleInfonumberOfRA_Preambles = 2,
	n16_RACHConfigCommonPreambleInfonumberOfRA_Preambles = 3,
	n20_RACHConfigCommonPreambleInfonumberOfRA_Preambles = 4,
	n24_RACHConfigCommonPreambleInfonumberOfRA_Preambles = 5,
	n28_RACHConfigCommonPreambleInfonumberOfRA_Preambles = 6,
	n32_RACHConfigCommonPreambleInfonumberOfRA_Preambles = 7,
	n36_RACHConfigCommonPreambleInfonumberOfRA_Preambles = 8,
	n40_RACHConfigCommonPreambleInfonumberOfRA_Preambles = 9,
	n44_RACHConfigCommonPreambleInfonumberOfRA_Preambles = 10,
	n48_RACHConfigCommonPreambleInfonumberOfRA_Preambles = 11,
	n52_RACHConfigCommonPreambleInfonumberOfRA_Preambles = 12,
	n56_RACHConfigCommonPreambleInfonumberOfRA_Preambles = 13,
	n60_RACHConfigCommonPreambleInfonumberOfRA_Preambles = 14,
	n64_RACHConfigCommonPreambleInfonumberOfRA_Preambles = 15,
};
typedef Enumerated<CONSTRAINED, 15> RACHConfigCommonPreambleInfonumberOfRA_Preambles;

enum RACHConfigCommonPreambleInfoPreamblesGroupAConfigsizeOfRA_PreamblesGroupAValues {
	n4_RACHConfigCommonPreambleInfoPreamblesGroupAConfigsizeOfRA_PreamblesGroupA = 0,
	n8_RACHConfigCommonPreambleInfoPreamblesGroupAConfigsizeOfRA_PreamblesGroupA = 1,
	n12_RACHConfigCommonPreambleInfoPreamblesGroupAConfigsizeOfRA_PreamblesGroupA = 2,
	n16_RACHConfigCommonPreambleInfoPreamblesGroupAConfigsizeOfRA_PreamblesGroupA = 3,
	n20_RACHConfigCommonPreambleInfoPreamblesGroupAConfigsizeOfRA_PreamblesGroupA = 4,
	n24_RACHConfigCommonPreambleInfoPreamblesGroupAConfigsizeOfRA_PreamblesGroupA = 5,
	n28_RACHConfigCommonPreambleInfoPreamblesGroupAConfigsizeOfRA_PreamblesGroupA = 6,
	n32_RACHConfigCommonPreambleInfoPreamblesGroupAConfigsizeOfRA_PreamblesGroupA = 7,
	n36_RACHConfigCommonPreambleInfoPreamblesGroupAConfigsizeOfRA_PreamblesGroupA = 8,
	n40_RACHConfigCommonPreambleInfoPreamblesGroupAConfigsizeOfRA_PreamblesGroupA = 9,
	n44_RACHConfigCommonPreambleInfoPreamblesGroupAConfigsizeOfRA_PreamblesGroupA = 10,
	n48_RACHConfigCommonPreambleInfoPreamblesGroupAConfigsizeOfRA_PreamblesGroupA = 11,
	n52_RACHConfigCommonPreambleInfoPreamblesGroupAConfigsizeOfRA_PreamblesGroupA = 12,
	n56_RACHConfigCommonPreambleInfoPreamblesGroupAConfigsizeOfRA_PreamblesGroupA = 13,
	n60_RACHConfigCommonPreambleInfoPreamblesGroupAConfigsizeOfRA_PreamblesGroupA = 14,
};
typedef Enumerated<CONSTRAINED, 14> RACHConfigCommonPreambleInfoPreamblesGroupAConfigsizeOfRA_PreamblesGroupA;

enum RACHConfigCommonPreambleInfoPreamblesGroupAConfigmessageSizeGroupAValues {
	b56_RACHConfigCommonPreambleInfoPreamblesGroupAConfigmessageSizeGroupA = 0,
	b144_RACHConfigCommonPreambleInfoPreamblesGroupAConfigmessageSizeGroupA = 1,
	b208_RACHConfigCommonPreambleInfoPreamblesGroupAConfigmessageSizeGroupA = 2,
	b256_RACHConfigCommonPreambleInfoPreamblesGroupAConfigmessageSizeGroupA = 3,
};
typedef Enumerated<CONSTRAINED, 3> RACHConfigCommonPreambleInfoPreamblesGroupAConfigmessageSizeGroupA;

enum RACHConfigCommonPreambleInfoPreamblesGroupAConfigmessagePowerOffsetGroupBValues {
	minusinfinity_RACHConfigCommonPreambleInfoPreamblesGroupAConfigmessagePowerOffsetGroupB = 0,
	dB0_RACHConfigCommonPreambleInfoPreamblesGroupAConfigmessagePowerOffsetGroupB = 1,
	dB5_RACHConfigCommonPreambleInfoPreamblesGroupAConfigmessagePowerOffsetGroupB = 2,
	dB8_RACHConfigCommonPreambleInfoPreamblesGroupAConfigmessagePowerOffsetGroupB = 3,
	dB10_RACHConfigCommonPreambleInfoPreamblesGroupAConfigmessagePowerOffsetGroupB = 4,
	dB12_RACHConfigCommonPreambleInfoPreamblesGroupAConfigmessagePowerOffsetGroupB = 5,
	dB15_RACHConfigCommonPreambleInfoPreamblesGroupAConfigmessagePowerOffsetGroupB = 6,
	dB18_RACHConfigCommonPreambleInfoPreamblesGroupAConfigmessagePowerOffsetGroupB = 7,
};
typedef Enumerated<CONSTRAINED, 7> RACHConfigCommonPreambleInfoPreamblesGroupAConfigmessagePowerOffsetGroupB;

class RACHConfigCommonPreambleInfoPreamblesGroupAConfig : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RACHConfigCommonPreambleInfoPreamblesGroupAConfig(): Sequence(&theInfo) {}
	RACHConfigCommonPreambleInfoPreamblesGroupAConfig(const RACHConfigCommonPreambleInfoPreamblesGroupAConfigsizeOfRA_PreamblesGroupA& rACHConfigCommonPreambleInfoPreamblesGroupAConfigsizeOfRA_PreamblesGroupA, const RACHConfigCommonPreambleInfoPreamblesGroupAConfigmessageSizeGroupA& rACHConfigCommonPreambleInfoPreamblesGroupAConfigmessageSizeGroupA, const RACHConfigCommonPreambleInfoPreamblesGroupAConfigmessagePowerOffsetGroupB& rACHConfigCommonPreambleInfoPreamblesGroupAConfigmessagePowerOffsetGroupB);

	void setRACHConfigCommonPreambleInfoPreamblesGroupAConfigsizeOfRA_PreamblesGroupA(const RACHConfigCommonPreambleInfoPreamblesGroupAConfigsizeOfRA_PreamblesGroupA& rACHConfigCommonPreambleInfoPreamblesGroupAConfigsizeOfRA_PreamblesGroupA) { *static_cast<RACHConfigCommonPreambleInfoPreamblesGroupAConfigsizeOfRA_PreamblesGroupA*>(items[0]) = rACHConfigCommonPreambleInfoPreamblesGroupAConfigsizeOfRA_PreamblesGroupA; }
	void setRACHConfigCommonPreambleInfoPreamblesGroupAConfigmessageSizeGroupA(const RACHConfigCommonPreambleInfoPreamblesGroupAConfigmessageSizeGroupA& rACHConfigCommonPreambleInfoPreamblesGroupAConfigmessageSizeGroupA) { *static_cast<RACHConfigCommonPreambleInfoPreamblesGroupAConfigmessageSizeGroupA*>(items[1]) = rACHConfigCommonPreambleInfoPreamblesGroupAConfigmessageSizeGroupA; }
	void setRACHConfigCommonPreambleInfoPreamblesGroupAConfigmessagePowerOffsetGroupB(const RACHConfigCommonPreambleInfoPreamblesGroupAConfigmessagePowerOffsetGroupB& rACHConfigCommonPreambleInfoPreamblesGroupAConfigmessagePowerOffsetGroupB) { *static_cast<RACHConfigCommonPreambleInfoPreamblesGroupAConfigmessagePowerOffsetGroupB*>(items[2]) = rACHConfigCommonPreambleInfoPreamblesGroupAConfigmessagePowerOffsetGroupB; }

	RACHConfigCommonPreambleInfoPreamblesGroupAConfigsizeOfRA_PreamblesGroupA& getRACHConfigCommonPreambleInfoPreamblesGroupAConfigsizeOfRA_PreamblesGroupA() { return *static_cast<RACHConfigCommonPreambleInfoPreamblesGroupAConfigsizeOfRA_PreamblesGroupA*>(items[0]); }
	RACHConfigCommonPreambleInfoPreamblesGroupAConfigmessageSizeGroupA& getRACHConfigCommonPreambleInfoPreamblesGroupAConfigmessageSizeGroupA() { return *static_cast<RACHConfigCommonPreambleInfoPreamblesGroupAConfigmessageSizeGroupA*>(items[1]); }
	RACHConfigCommonPreambleInfoPreamblesGroupAConfigmessagePowerOffsetGroupB& getRACHConfigCommonPreambleInfoPreamblesGroupAConfigmessagePowerOffsetGroupB() { return *static_cast<RACHConfigCommonPreambleInfoPreamblesGroupAConfigmessagePowerOffsetGroupB*>(items[2]); }
};

class RACHConfigCommonPreambleInfo : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RACHConfigCommonPreambleInfo(): Sequence(&theInfo) {}
	RACHConfigCommonPreambleInfo(const RACHConfigCommonPreambleInfonumberOfRA_Preambles& rACHConfigCommonPreambleInfonumberOfRA_Preambles);

	void setRACHConfigCommonPreambleInfonumberOfRA_Preambles(const RACHConfigCommonPreambleInfonumberOfRA_Preambles& rACHConfigCommonPreambleInfonumberOfRA_Preambles) { *static_cast<RACHConfigCommonPreambleInfonumberOfRA_Preambles*>(items[0]) = rACHConfigCommonPreambleInfonumberOfRA_Preambles; }
	void setRACHConfigCommonPreambleInfoPreamblesGroupAConfig(const RACHConfigCommonPreambleInfoPreamblesGroupAConfig& rACHConfigCommonPreambleInfoPreamblesGroupAConfig) { *static_cast<RACHConfigCommonPreambleInfoPreamblesGroupAConfig*>(items[1]) = rACHConfigCommonPreambleInfoPreamblesGroupAConfig; }

	RACHConfigCommonPreambleInfonumberOfRA_Preambles& getRACHConfigCommonPreambleInfonumberOfRA_Preambles() { return *static_cast<RACHConfigCommonPreambleInfonumberOfRA_Preambles*>(items[0]); }
	RACHConfigCommonPreambleInfoPreamblesGroupAConfig& getRACHConfigCommonPreambleInfoPreamblesGroupAConfig() { return *static_cast<RACHConfigCommonPreambleInfoPreamblesGroupAConfig*>(items[1]); }
};

enum RACHConfigCommonPowerRampingParameterspowerRampingStepValues {
	dB0_RACHConfigCommonPowerRampingParameterspowerRampingStep = 0,
	dB2_RACHConfigCommonPowerRampingParameterspowerRampingStep = 1,
	dB4_RACHConfigCommonPowerRampingParameterspowerRampingStep = 2,
	dB6_RACHConfigCommonPowerRampingParameterspowerRampingStep = 3,
};
typedef Enumerated<CONSTRAINED, 3> RACHConfigCommonPowerRampingParameterspowerRampingStep;

enum RACHConfigCommonPowerRampingParameterspreambleInitialReceivedTargetPowerValues {
	dBm_120_RACHConfigCommonPowerRampingParameterspreambleInitialReceivedTargetPower = 0,
	dBm_118_RACHConfigCommonPowerRampingParameterspreambleInitialReceivedTargetPower = 1,
	dBm_116_RACHConfigCommonPowerRampingParameterspreambleInitialReceivedTargetPower = 2,
	dBm_114_RACHConfigCommonPowerRampingParameterspreambleInitialReceivedTargetPower = 3,
	dBm_112_RACHConfigCommonPowerRampingParameterspreambleInitialReceivedTargetPower = 4,
	dBm_110_RACHConfigCommonPowerRampingParameterspreambleInitialReceivedTargetPower = 5,
	dBm_108_RACHConfigCommonPowerRampingParameterspreambleInitialReceivedTargetPower = 6,
	dBm_106_RACHConfigCommonPowerRampingParameterspreambleInitialReceivedTargetPower = 7,
	dBm_104_RACHConfigCommonPowerRampingParameterspreambleInitialReceivedTargetPower = 8,
	dBm_102_RACHConfigCommonPowerRampingParameterspreambleInitialReceivedTargetPower = 9,
	dBm_100_RACHConfigCommonPowerRampingParameterspreambleInitialReceivedTargetPower = 10,
	dBm_98_RACHConfigCommonPowerRampingParameterspreambleInitialReceivedTargetPower = 11,
	dBm_96_RACHConfigCommonPowerRampingParameterspreambleInitialReceivedTargetPower = 12,
	dBm_94_RACHConfigCommonPowerRampingParameterspreambleInitialReceivedTargetPower = 13,
	dBm_92_RACHConfigCommonPowerRampingParameterspreambleInitialReceivedTargetPower = 14,
	dBm_90_RACHConfigCommonPowerRampingParameterspreambleInitialReceivedTargetPower = 15,
};
typedef Enumerated<CONSTRAINED, 15> RACHConfigCommonPowerRampingParameterspreambleInitialReceivedTargetPower;

class RACHConfigCommonPowerRampingParameters : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RACHConfigCommonPowerRampingParameters(): Sequence(&theInfo) {}
	RACHConfigCommonPowerRampingParameters(const RACHConfigCommonPowerRampingParameterspowerRampingStep& rACHConfigCommonPowerRampingParameterspowerRampingStep, const RACHConfigCommonPowerRampingParameterspreambleInitialReceivedTargetPower& rACHConfigCommonPowerRampingParameterspreambleInitialReceivedTargetPower);

	void setRACHConfigCommonPowerRampingParameterspowerRampingStep(const RACHConfigCommonPowerRampingParameterspowerRampingStep& rACHConfigCommonPowerRampingParameterspowerRampingStep) { *static_cast<RACHConfigCommonPowerRampingParameterspowerRampingStep*>(items[0]) = rACHConfigCommonPowerRampingParameterspowerRampingStep; }
	void setRACHConfigCommonPowerRampingParameterspreambleInitialReceivedTargetPower(const RACHConfigCommonPowerRampingParameterspreambleInitialReceivedTargetPower& rACHConfigCommonPowerRampingParameterspreambleInitialReceivedTargetPower) { *static_cast<RACHConfigCommonPowerRampingParameterspreambleInitialReceivedTargetPower*>(items[1]) = rACHConfigCommonPowerRampingParameterspreambleInitialReceivedTargetPower; }

	RACHConfigCommonPowerRampingParameterspowerRampingStep& getRACHConfigCommonPowerRampingParameterspowerRampingStep() { return *static_cast<RACHConfigCommonPowerRampingParameterspowerRampingStep*>(items[0]); }
	RACHConfigCommonPowerRampingParameterspreambleInitialReceivedTargetPower& getRACHConfigCommonPowerRampingParameterspreambleInitialReceivedTargetPower() { return *static_cast<RACHConfigCommonPowerRampingParameterspreambleInitialReceivedTargetPower*>(items[1]); }
};

enum RACHConfigCommonRaSupervisionInfopreambleTransMaxValues {
	n3_RACHConfigCommonRaSupervisionInfopreambleTransMax = 0,
	n4_RACHConfigCommonRaSupervisionInfopreambleTransMax = 1,
	n5_RACHConfigCommonRaSupervisionInfopreambleTransMax = 2,
	n6_RACHConfigCommonRaSupervisionInfopreambleTransMax = 3,
	n7_RACHConfigCommonRaSupervisionInfopreambleTransMax = 4,
	n8_RACHConfigCommonRaSupervisionInfopreambleTransMax = 5,
	n10_RACHConfigCommonRaSupervisionInfopreambleTransMax = 6,
	n20_RACHConfigCommonRaSupervisionInfopreambleTransMax = 7,
	n50_RACHConfigCommonRaSupervisionInfopreambleTransMax = 8,
	n100_RACHConfigCommonRaSupervisionInfopreambleTransMax = 9,
	n200_RACHConfigCommonRaSupervisionInfopreambleTransMax = 10,
};
typedef Enumerated<CONSTRAINED, 10> RACHConfigCommonRaSupervisionInfopreambleTransMax;

enum RACHConfigCommonRaSupervisionInfora_ResponseWindowSizeValues {
	sf2_RACHConfigCommonRaSupervisionInfora_ResponseWindowSize = 0,
	sf3_RACHConfigCommonRaSupervisionInfora_ResponseWindowSize = 1,
	sf4_RACHConfigCommonRaSupervisionInfora_ResponseWindowSize = 2,
	sf5_RACHConfigCommonRaSupervisionInfora_ResponseWindowSize = 3,
	sf6_RACHConfigCommonRaSupervisionInfora_ResponseWindowSize = 4,
	sf7_RACHConfigCommonRaSupervisionInfora_ResponseWindowSize = 5,
	sf8_RACHConfigCommonRaSupervisionInfora_ResponseWindowSize = 6,
	sf10_RACHConfigCommonRaSupervisionInfora_ResponseWindowSize = 7,
};
typedef Enumerated<CONSTRAINED, 7> RACHConfigCommonRaSupervisionInfora_ResponseWindowSize;

enum RACHConfigCommonRaSupervisionInfomac_ContentionResolutionTimerValues {
	sf8_RACHConfigCommonRaSupervisionInfomac_ContentionResolutionTimer = 0,
	sf16_RACHConfigCommonRaSupervisionInfomac_ContentionResolutionTimer = 1,
	sf24_RACHConfigCommonRaSupervisionInfomac_ContentionResolutionTimer = 2,
	sf32_RACHConfigCommonRaSupervisionInfomac_ContentionResolutionTimer = 3,
	sf40_RACHConfigCommonRaSupervisionInfomac_ContentionResolutionTimer = 4,
	sf48_RACHConfigCommonRaSupervisionInfomac_ContentionResolutionTimer = 5,
	sf56_RACHConfigCommonRaSupervisionInfomac_ContentionResolutionTimer = 6,
	sf64_RACHConfigCommonRaSupervisionInfomac_ContentionResolutionTimer = 7,
};
typedef Enumerated<CONSTRAINED, 7> RACHConfigCommonRaSupervisionInfomac_ContentionResolutionTimer;

class RACHConfigCommonRaSupervisionInfo : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RACHConfigCommonRaSupervisionInfo(): Sequence(&theInfo) {}
	RACHConfigCommonRaSupervisionInfo(const RACHConfigCommonRaSupervisionInfopreambleTransMax& rACHConfigCommonRaSupervisionInfopreambleTransMax, const RACHConfigCommonRaSupervisionInfora_ResponseWindowSize& rACHConfigCommonRaSupervisionInfora_ResponseWindowSize, const RACHConfigCommonRaSupervisionInfomac_ContentionResolutionTimer& rACHConfigCommonRaSupervisionInfomac_ContentionResolutionTimer);

	void setRACHConfigCommonRaSupervisionInfopreambleTransMax(const RACHConfigCommonRaSupervisionInfopreambleTransMax& rACHConfigCommonRaSupervisionInfopreambleTransMax) { *static_cast<RACHConfigCommonRaSupervisionInfopreambleTransMax*>(items[0]) = rACHConfigCommonRaSupervisionInfopreambleTransMax; }
	void setRACHConfigCommonRaSupervisionInfora_ResponseWindowSize(const RACHConfigCommonRaSupervisionInfora_ResponseWindowSize& rACHConfigCommonRaSupervisionInfora_ResponseWindowSize) { *static_cast<RACHConfigCommonRaSupervisionInfora_ResponseWindowSize*>(items[1]) = rACHConfigCommonRaSupervisionInfora_ResponseWindowSize; }
	void setRACHConfigCommonRaSupervisionInfomac_ContentionResolutionTimer(const RACHConfigCommonRaSupervisionInfomac_ContentionResolutionTimer& rACHConfigCommonRaSupervisionInfomac_ContentionResolutionTimer) { *static_cast<RACHConfigCommonRaSupervisionInfomac_ContentionResolutionTimer*>(items[2]) = rACHConfigCommonRaSupervisionInfomac_ContentionResolutionTimer; }

	RACHConfigCommonRaSupervisionInfopreambleTransMax& getRACHConfigCommonRaSupervisionInfopreambleTransMax() { return *static_cast<RACHConfigCommonRaSupervisionInfopreambleTransMax*>(items[0]); }
	RACHConfigCommonRaSupervisionInfora_ResponseWindowSize& getRACHConfigCommonRaSupervisionInfora_ResponseWindowSize() { return *static_cast<RACHConfigCommonRaSupervisionInfora_ResponseWindowSize*>(items[1]); }
	RACHConfigCommonRaSupervisionInfomac_ContentionResolutionTimer& getRACHConfigCommonRaSupervisionInfomac_ContentionResolutionTimer() { return *static_cast<RACHConfigCommonRaSupervisionInfomac_ContentionResolutionTimer*>(items[2]); }
};

typedef Integer<CONSTRAINED, 1, 8> RACHConfigCommonMaxHARQMsg3Tx;

class RACHConfigCommon : public Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	RACHConfigCommon(): Sequence(&theInfo) {}
	RACHConfigCommon(const RACHConfigCommonPreambleInfo& rACHConfigCommonPreambleInfo, const RACHConfigCommonPowerRampingParameters& rACHConfigCommonPowerRampingParameters, const RACHConfigCommonRaSupervisionInfo& rACHConfigCommonRaSupervisionInfo, const RACHConfigCommonMaxHARQMsg3Tx& rACHConfigCommonMaxHARQMsg3Tx);

	void setRACHConfigCommonPreambleInfo(const RACHConfigCommonPreambleInfo& rACHConfigCommonPreambleInfo) { *static_cast<RACHConfigCommonPreambleInfo*>(items[0]) = rACHConfigCommonPreambleInfo; }
	void setRACHConfigCommonPowerRampingParameters(const RACHConfigCommonPowerRampingParameters& rACHConfigCommonPowerRampingParameters) { *static_cast<RACHConfigCommonPowerRampingParameters*>(items[1]) = rACHConfigCommonPowerRampingParameters; }
	void setRACHConfigCommonRaSupervisionInfo(const RACHConfigCommonRaSupervisionInfo& rACHConfigCommonRaSupervisionInfo) { *static_cast<RACHConfigCommonRaSupervisionInfo*>(items[2]) = rACHConfigCommonRaSupervisionInfo; }
	void setRACHConfigCommonMaxHARQMsg3Tx(const RACHConfigCommonMaxHARQMsg3Tx& rACHConfigCommonMaxHARQMsg3Tx) { *static_cast<RACHConfigCommonMaxHARQMsg3Tx*>(items[3]) = rACHConfigCommonMaxHARQMsg3Tx; }

	RACHConfigCommonPreambleInfo& getRACHConfigCommonPreambleInfo() { return *static_cast<RACHConfigCommonPreambleInfo*>(items[0]); }
	RACHConfigCommonPowerRampingParameters& getRACHConfigCommonPowerRampingParameters() { return *static_cast<RACHConfigCommonPowerRampingParameters*>(items[1]); }
	RACHConfigCommonRaSupervisionInfo& getRACHConfigCommonRaSupervisionInfo() { return *static_cast<RACHConfigCommonRaSupervisionInfo*>(items[2]); }
	RACHConfigCommonMaxHARQMsg3Tx& getRACHConfigCommonMaxHARQMsg3Tx() { return *static_cast<RACHConfigCommonMaxHARQMsg3Tx*>(items[3]); }
};

typedef Integer<CONSTRAINED, 0, 837> PRACHConfigRootSequenceIndex;

typedef Integer<CONSTRAINED, 0, 63> PRACHConfigInfoPrachConfigIndex;

typedef Boolean PRACHConfigInfoHighSpeedFlag;

typedef Integer<CONSTRAINED, 0, 15> PRACHConfigInfoZeroCorrelationZoneConfig;

typedef Integer<CONSTRAINED, 0, 94> PRACHConfigInfoPrachFreqOffset;

class PRACHConfigInfo : public Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	PRACHConfigInfo(): Sequence(&theInfo) {}
	PRACHConfigInfo(const PRACHConfigInfoPrachConfigIndex& pRACHConfigInfoPrachConfigIndex, const PRACHConfigInfoHighSpeedFlag& pRACHConfigInfoHighSpeedFlag, const PRACHConfigInfoZeroCorrelationZoneConfig& pRACHConfigInfoZeroCorrelationZoneConfig, const PRACHConfigInfoPrachFreqOffset& pRACHConfigInfoPrachFreqOffset);

	void setPRACHConfigInfoPrachConfigIndex(const PRACHConfigInfoPrachConfigIndex& pRACHConfigInfoPrachConfigIndex) { *static_cast<PRACHConfigInfoPrachConfigIndex*>(items[0]) = pRACHConfigInfoPrachConfigIndex; }
	void setPRACHConfigInfoHighSpeedFlag(const PRACHConfigInfoHighSpeedFlag& pRACHConfigInfoHighSpeedFlag) { *static_cast<PRACHConfigInfoHighSpeedFlag*>(items[1]) = pRACHConfigInfoHighSpeedFlag; }
	void setPRACHConfigInfoZeroCorrelationZoneConfig(const PRACHConfigInfoZeroCorrelationZoneConfig& pRACHConfigInfoZeroCorrelationZoneConfig) { *static_cast<PRACHConfigInfoZeroCorrelationZoneConfig*>(items[2]) = pRACHConfigInfoZeroCorrelationZoneConfig; }
	void setPRACHConfigInfoPrachFreqOffset(const PRACHConfigInfoPrachFreqOffset& pRACHConfigInfoPrachFreqOffset) { *static_cast<PRACHConfigInfoPrachFreqOffset*>(items[3]) = pRACHConfigInfoPrachFreqOffset; }

	PRACHConfigInfoPrachConfigIndex& getPRACHConfigInfoPrachConfigIndex() { return *static_cast<PRACHConfigInfoPrachConfigIndex*>(items[0]); }
	PRACHConfigInfoHighSpeedFlag& getPRACHConfigInfoHighSpeedFlag() { return *static_cast<PRACHConfigInfoHighSpeedFlag*>(items[1]); }
	PRACHConfigInfoZeroCorrelationZoneConfig& getPRACHConfigInfoZeroCorrelationZoneConfig() { return *static_cast<PRACHConfigInfoZeroCorrelationZoneConfig*>(items[2]); }
	PRACHConfigInfoPrachFreqOffset& getPRACHConfigInfoPrachFreqOffset() { return *static_cast<PRACHConfigInfoPrachFreqOffset*>(items[3]); }
};

class PRACHConfig : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PRACHConfig(): Sequence(&theInfo) {}
	PRACHConfig(const PRACHConfigRootSequenceIndex& pRACHConfigRootSequenceIndex);

	void setPRACHConfigRootSequenceIndex(const PRACHConfigRootSequenceIndex& pRACHConfigRootSequenceIndex) { *static_cast<PRACHConfigRootSequenceIndex*>(items[0]) = pRACHConfigRootSequenceIndex; }
	void setPrachConfigInfo(const PRACHConfigInfo& prachConfigInfo) { *static_cast<PRACHConfigInfo*>(items[1]) = prachConfigInfo; }

	PRACHConfigRootSequenceIndex& getPRACHConfigRootSequenceIndex() { return *static_cast<PRACHConfigRootSequenceIndex*>(items[0]); }
	PRACHConfigInfo& getPrachConfigInfo() { return *static_cast<PRACHConfigInfo*>(items[1]); }
};

typedef Integer<CONSTRAINED, -60, 50> PDSCHConfigCommonReferenceSignalPower;

typedef Integer<CONSTRAINED, 0, 3> PDSCHConfigCommonPb;

class PDSCHConfigCommon : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PDSCHConfigCommon(): Sequence(&theInfo) {}
	PDSCHConfigCommon(const PDSCHConfigCommonReferenceSignalPower& pDSCHConfigCommonReferenceSignalPower, const PDSCHConfigCommonPb& pDSCHConfigCommonPb);

	void setPDSCHConfigCommonReferenceSignalPower(const PDSCHConfigCommonReferenceSignalPower& pDSCHConfigCommonReferenceSignalPower) { *static_cast<PDSCHConfigCommonReferenceSignalPower*>(items[0]) = pDSCHConfigCommonReferenceSignalPower; }
	void setPDSCHConfigCommonPb(const PDSCHConfigCommonPb& pDSCHConfigCommonPb) { *static_cast<PDSCHConfigCommonPb*>(items[1]) = pDSCHConfigCommonPb; }

	PDSCHConfigCommonReferenceSignalPower& getPDSCHConfigCommonReferenceSignalPower() { return *static_cast<PDSCHConfigCommonReferenceSignalPower*>(items[0]); }
	PDSCHConfigCommonPb& getPDSCHConfigCommonPb() { return *static_cast<PDSCHConfigCommonPb*>(items[1]); }
};

typedef Integer<CONSTRAINED, 1, 4> PUSCHConfigCommonPuschConfigBasicNSB;

enum PUSCHConfigCommonPuschConfigBasichoppingModeValues {
	interSubFrame_PUSCHConfigCommonPuschConfigBasichoppingMode = 0,
	intraAndInterSubFrame_PUSCHConfigCommonPuschConfigBasichoppingMode = 1,
};
typedef Enumerated<CONSTRAINED, 1> PUSCHConfigCommonPuschConfigBasichoppingMode;

typedef Integer<CONSTRAINED, 0, 98> PUSCHConfigCommonPuschConfigBasicPuschHoppingOffset;

typedef Boolean PUSCHConfigCommonPuschConfigBasicEnable64QAM;

class PUSCHConfigCommonPuschConfigBasic : public Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	PUSCHConfigCommonPuschConfigBasic(): Sequence(&theInfo) {}
	PUSCHConfigCommonPuschConfigBasic(const PUSCHConfigCommonPuschConfigBasicNSB& pUSCHConfigCommonPuschConfigBasicNSB, const PUSCHConfigCommonPuschConfigBasichoppingMode& pUSCHConfigCommonPuschConfigBasichoppingMode, const PUSCHConfigCommonPuschConfigBasicPuschHoppingOffset& pUSCHConfigCommonPuschConfigBasicPuschHoppingOffset, const PUSCHConfigCommonPuschConfigBasicEnable64QAM& pUSCHConfigCommonPuschConfigBasicEnable64QAM);

	void setPUSCHConfigCommonPuschConfigBasicNSB(const PUSCHConfigCommonPuschConfigBasicNSB& pUSCHConfigCommonPuschConfigBasicNSB) { *static_cast<PUSCHConfigCommonPuschConfigBasicNSB*>(items[0]) = pUSCHConfigCommonPuschConfigBasicNSB; }
	void setPUSCHConfigCommonPuschConfigBasichoppingMode(const PUSCHConfigCommonPuschConfigBasichoppingMode& pUSCHConfigCommonPuschConfigBasichoppingMode) { *static_cast<PUSCHConfigCommonPuschConfigBasichoppingMode*>(items[1]) = pUSCHConfigCommonPuschConfigBasichoppingMode; }
	void setPUSCHConfigCommonPuschConfigBasicPuschHoppingOffset(const PUSCHConfigCommonPuschConfigBasicPuschHoppingOffset& pUSCHConfigCommonPuschConfigBasicPuschHoppingOffset) { *static_cast<PUSCHConfigCommonPuschConfigBasicPuschHoppingOffset*>(items[2]) = pUSCHConfigCommonPuschConfigBasicPuschHoppingOffset; }
	void setPUSCHConfigCommonPuschConfigBasicEnable64QAM(const PUSCHConfigCommonPuschConfigBasicEnable64QAM& pUSCHConfigCommonPuschConfigBasicEnable64QAM) { *static_cast<PUSCHConfigCommonPuschConfigBasicEnable64QAM*>(items[3]) = pUSCHConfigCommonPuschConfigBasicEnable64QAM; }

	PUSCHConfigCommonPuschConfigBasicNSB& getPUSCHConfigCommonPuschConfigBasicNSB() { return *static_cast<PUSCHConfigCommonPuschConfigBasicNSB*>(items[0]); }
	PUSCHConfigCommonPuschConfigBasichoppingMode& getPUSCHConfigCommonPuschConfigBasichoppingMode() { return *static_cast<PUSCHConfigCommonPuschConfigBasichoppingMode*>(items[1]); }
	PUSCHConfigCommonPuschConfigBasicPuschHoppingOffset& getPUSCHConfigCommonPuschConfigBasicPuschHoppingOffset() { return *static_cast<PUSCHConfigCommonPuschConfigBasicPuschHoppingOffset*>(items[2]); }
	PUSCHConfigCommonPuschConfigBasicEnable64QAM& getPUSCHConfigCommonPuschConfigBasicEnable64QAM() { return *static_cast<PUSCHConfigCommonPuschConfigBasicEnable64QAM*>(items[3]); }
};

typedef Boolean ULReferenceSignalsPUSCHGroupHoppingEnabled;

typedef Integer<CONSTRAINED, 0, 29> ULReferenceSignalsPUSCHGroupAssignmentPUSCH;

typedef Boolean ULReferenceSignalsPUSCHSequenceHoppingEnabled;

typedef Integer<CONSTRAINED, 0, 7> ULReferenceSignalsPUSCHCyclicShift;

class ULReferenceSignalsPUSCH : public Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	ULReferenceSignalsPUSCH(): Sequence(&theInfo) {}
	ULReferenceSignalsPUSCH(const ULReferenceSignalsPUSCHGroupHoppingEnabled& uLReferenceSignalsPUSCHGroupHoppingEnabled, const ULReferenceSignalsPUSCHGroupAssignmentPUSCH& uLReferenceSignalsPUSCHGroupAssignmentPUSCH, const ULReferenceSignalsPUSCHSequenceHoppingEnabled& uLReferenceSignalsPUSCHSequenceHoppingEnabled, const ULReferenceSignalsPUSCHCyclicShift& uLReferenceSignalsPUSCHCyclicShift);

	void setULReferenceSignalsPUSCHGroupHoppingEnabled(const ULReferenceSignalsPUSCHGroupHoppingEnabled& uLReferenceSignalsPUSCHGroupHoppingEnabled) { *static_cast<ULReferenceSignalsPUSCHGroupHoppingEnabled*>(items[0]) = uLReferenceSignalsPUSCHGroupHoppingEnabled; }
	void setULReferenceSignalsPUSCHGroupAssignmentPUSCH(const ULReferenceSignalsPUSCHGroupAssignmentPUSCH& uLReferenceSignalsPUSCHGroupAssignmentPUSCH) { *static_cast<ULReferenceSignalsPUSCHGroupAssignmentPUSCH*>(items[1]) = uLReferenceSignalsPUSCHGroupAssignmentPUSCH; }
	void setULReferenceSignalsPUSCHSequenceHoppingEnabled(const ULReferenceSignalsPUSCHSequenceHoppingEnabled& uLReferenceSignalsPUSCHSequenceHoppingEnabled) { *static_cast<ULReferenceSignalsPUSCHSequenceHoppingEnabled*>(items[2]) = uLReferenceSignalsPUSCHSequenceHoppingEnabled; }
	void setULReferenceSignalsPUSCHCyclicShift(const ULReferenceSignalsPUSCHCyclicShift& uLReferenceSignalsPUSCHCyclicShift) { *static_cast<ULReferenceSignalsPUSCHCyclicShift*>(items[3]) = uLReferenceSignalsPUSCHCyclicShift; }

	ULReferenceSignalsPUSCHGroupHoppingEnabled& getULReferenceSignalsPUSCHGroupHoppingEnabled() { return *static_cast<ULReferenceSignalsPUSCHGroupHoppingEnabled*>(items[0]); }
	ULReferenceSignalsPUSCHGroupAssignmentPUSCH& getULReferenceSignalsPUSCHGroupAssignmentPUSCH() { return *static_cast<ULReferenceSignalsPUSCHGroupAssignmentPUSCH*>(items[1]); }
	ULReferenceSignalsPUSCHSequenceHoppingEnabled& getULReferenceSignalsPUSCHSequenceHoppingEnabled() { return *static_cast<ULReferenceSignalsPUSCHSequenceHoppingEnabled*>(items[2]); }
	ULReferenceSignalsPUSCHCyclicShift& getULReferenceSignalsPUSCHCyclicShift() { return *static_cast<ULReferenceSignalsPUSCHCyclicShift*>(items[3]); }
};

class PUSCHConfigCommon : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PUSCHConfigCommon(): Sequence(&theInfo) {}
	PUSCHConfigCommon(const PUSCHConfigCommonPuschConfigBasic& pUSCHConfigCommonPuschConfigBasic, const ULReferenceSignalsPUSCH& ulReferenceSignalsPUSCH);

	void setPUSCHConfigCommonPuschConfigBasic(const PUSCHConfigCommonPuschConfigBasic& pUSCHConfigCommonPuschConfigBasic) { *static_cast<PUSCHConfigCommonPuschConfigBasic*>(items[0]) = pUSCHConfigCommonPuschConfigBasic; }
	void setUlReferenceSignalsPUSCH(const ULReferenceSignalsPUSCH& ulReferenceSignalsPUSCH) { *static_cast<ULReferenceSignalsPUSCH*>(items[1]) = ulReferenceSignalsPUSCH; }

	PUSCHConfigCommonPuschConfigBasic& getPUSCHConfigCommonPuschConfigBasic() { return *static_cast<PUSCHConfigCommonPuschConfigBasic*>(items[0]); }
	ULReferenceSignalsPUSCH& getUlReferenceSignalsPUSCH() { return *static_cast<ULReferenceSignalsPUSCH*>(items[1]); }
};

enum PUCCHConfigCommondeltaPUCCH_ShiftValues {
	ds1_PUCCHConfigCommondeltaPUCCH_Shift = 0,
	ds2_PUCCHConfigCommondeltaPUCCH_Shift = 1,
	ds3_PUCCHConfigCommondeltaPUCCH_Shift = 2,
};
typedef Enumerated<CONSTRAINED, 2> PUCCHConfigCommondeltaPUCCH_Shift;

typedef Integer<CONSTRAINED, 0, 98> PUCCHConfigCommonNRBCQI;

typedef Integer<CONSTRAINED, 0, 7> PUCCHConfigCommonNCSAN;

typedef Integer<CONSTRAINED, 0, 2047> PUCCHConfigCommonN1PUCCHAN;

class PUCCHConfigCommon : public Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	PUCCHConfigCommon(): Sequence(&theInfo) {}
	PUCCHConfigCommon(const PUCCHConfigCommondeltaPUCCH_Shift& pUCCHConfigCommondeltaPUCCH_Shift, const PUCCHConfigCommonNRBCQI& pUCCHConfigCommonNRBCQI, const PUCCHConfigCommonNCSAN& pUCCHConfigCommonNCSAN, const PUCCHConfigCommonN1PUCCHAN& pUCCHConfigCommonN1PUCCHAN);

	void setPUCCHConfigCommondeltaPUCCH_Shift(const PUCCHConfigCommondeltaPUCCH_Shift& pUCCHConfigCommondeltaPUCCH_Shift) { *static_cast<PUCCHConfigCommondeltaPUCCH_Shift*>(items[0]) = pUCCHConfigCommondeltaPUCCH_Shift; }
	void setPUCCHConfigCommonNRBCQI(const PUCCHConfigCommonNRBCQI& pUCCHConfigCommonNRBCQI) { *static_cast<PUCCHConfigCommonNRBCQI*>(items[1]) = pUCCHConfigCommonNRBCQI; }
	void setPUCCHConfigCommonNCSAN(const PUCCHConfigCommonNCSAN& pUCCHConfigCommonNCSAN) { *static_cast<PUCCHConfigCommonNCSAN*>(items[2]) = pUCCHConfigCommonNCSAN; }
	void setPUCCHConfigCommonN1PUCCHAN(const PUCCHConfigCommonN1PUCCHAN& pUCCHConfigCommonN1PUCCHAN) { *static_cast<PUCCHConfigCommonN1PUCCHAN*>(items[3]) = pUCCHConfigCommonN1PUCCHAN; }

	PUCCHConfigCommondeltaPUCCH_Shift& getPUCCHConfigCommondeltaPUCCH_Shift() { return *static_cast<PUCCHConfigCommondeltaPUCCH_Shift*>(items[0]); }
	PUCCHConfigCommonNRBCQI& getPUCCHConfigCommonNRBCQI() { return *static_cast<PUCCHConfigCommonNRBCQI*>(items[1]); }
	PUCCHConfigCommonNCSAN& getPUCCHConfigCommonNCSAN() { return *static_cast<PUCCHConfigCommonNCSAN*>(items[2]); }
	PUCCHConfigCommonN1PUCCHAN& getPUCCHConfigCommonN1PUCCHAN() { return *static_cast<PUCCHConfigCommonN1PUCCHAN*>(items[3]); }
};

typedef Null SoundingRSULConfigCommonRelease;

enum SoundingRSULConfigCommonSetupsrs_BandwidthConfigValues {
	bw0_SoundingRSULConfigCommonSetupsrs_BandwidthConfig = 0,
	bw1_SoundingRSULConfigCommonSetupsrs_BandwidthConfig = 1,
	bw2_SoundingRSULConfigCommonSetupsrs_BandwidthConfig = 2,
	bw3_SoundingRSULConfigCommonSetupsrs_BandwidthConfig = 3,
	bw4_SoundingRSULConfigCommonSetupsrs_BandwidthConfig = 4,
	bw5_SoundingRSULConfigCommonSetupsrs_BandwidthConfig = 5,
	bw6_SoundingRSULConfigCommonSetupsrs_BandwidthConfig = 6,
	bw7_SoundingRSULConfigCommonSetupsrs_BandwidthConfig = 7,
};
typedef Enumerated<CONSTRAINED, 7> SoundingRSULConfigCommonSetupsrs_BandwidthConfig;

enum SoundingRSULConfigCommonSetupsrs_SubframeConfigValues {
	sc0_SoundingRSULConfigCommonSetupsrs_SubframeConfig = 0,
	sc1_SoundingRSULConfigCommonSetupsrs_SubframeConfig = 1,
	sc2_SoundingRSULConfigCommonSetupsrs_SubframeConfig = 2,
	sc3_SoundingRSULConfigCommonSetupsrs_SubframeConfig = 3,
	sc4_SoundingRSULConfigCommonSetupsrs_SubframeConfig = 4,
	sc5_SoundingRSULConfigCommonSetupsrs_SubframeConfig = 5,
	sc6_SoundingRSULConfigCommonSetupsrs_SubframeConfig = 6,
	sc7_SoundingRSULConfigCommonSetupsrs_SubframeConfig = 7,
	sc8_SoundingRSULConfigCommonSetupsrs_SubframeConfig = 8,
	sc9_SoundingRSULConfigCommonSetupsrs_SubframeConfig = 9,
	sc10_SoundingRSULConfigCommonSetupsrs_SubframeConfig = 10,
	sc11_SoundingRSULConfigCommonSetupsrs_SubframeConfig = 11,
	sc12_SoundingRSULConfigCommonSetupsrs_SubframeConfig = 12,
	sc13_SoundingRSULConfigCommonSetupsrs_SubframeConfig = 13,
	sc14_SoundingRSULConfigCommonSetupsrs_SubframeConfig = 14,
	sc15_SoundingRSULConfigCommonSetupsrs_SubframeConfig = 15,
};
typedef Enumerated<CONSTRAINED, 15> SoundingRSULConfigCommonSetupsrs_SubframeConfig;

typedef Boolean SoundingRSULConfigCommonSetupAckNackSRSSimultaneousTransmission;

enum SoundingRSULConfigCommonSetupsrs_MaxUpPtsValues {
	true_SoundingRSULConfigCommonSetupsrs_MaxUpPts = 0,
};
typedef Enumerated<CONSTRAINED, 0> SoundingRSULConfigCommonSetupsrs_MaxUpPts;

class SoundingRSULConfigCommonSetup : public Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	SoundingRSULConfigCommonSetup(): Sequence(&theInfo) {}
	SoundingRSULConfigCommonSetup(const SoundingRSULConfigCommonSetupsrs_BandwidthConfig& soundingRSULConfigCommonSetupsrs_BandwidthConfig, const SoundingRSULConfigCommonSetupsrs_SubframeConfig& soundingRSULConfigCommonSetupsrs_SubframeConfig, const SoundingRSULConfigCommonSetupAckNackSRSSimultaneousTransmission& soundingRSULConfigCommonSetupAckNackSRSSimultaneousTransmission);

	void setSoundingRSULConfigCommonSetupsrs_BandwidthConfig(const SoundingRSULConfigCommonSetupsrs_BandwidthConfig& soundingRSULConfigCommonSetupsrs_BandwidthConfig) { *static_cast<SoundingRSULConfigCommonSetupsrs_BandwidthConfig*>(items[0]) = soundingRSULConfigCommonSetupsrs_BandwidthConfig; }
	void setSoundingRSULConfigCommonSetupsrs_SubframeConfig(const SoundingRSULConfigCommonSetupsrs_SubframeConfig& soundingRSULConfigCommonSetupsrs_SubframeConfig) { *static_cast<SoundingRSULConfigCommonSetupsrs_SubframeConfig*>(items[1]) = soundingRSULConfigCommonSetupsrs_SubframeConfig; }
	void setSoundingRSULConfigCommonSetupAckNackSRSSimultaneousTransmission(const SoundingRSULConfigCommonSetupAckNackSRSSimultaneousTransmission& soundingRSULConfigCommonSetupAckNackSRSSimultaneousTransmission) { *static_cast<SoundingRSULConfigCommonSetupAckNackSRSSimultaneousTransmission*>(items[2]) = soundingRSULConfigCommonSetupAckNackSRSSimultaneousTransmission; }
	void setSoundingRSULConfigCommonSetupsrs_MaxUpPts(const SoundingRSULConfigCommonSetupsrs_MaxUpPts& soundingRSULConfigCommonSetupsrs_MaxUpPts) { *static_cast<SoundingRSULConfigCommonSetupsrs_MaxUpPts*>(items[3]) = soundingRSULConfigCommonSetupsrs_MaxUpPts; }

	SoundingRSULConfigCommonSetupsrs_BandwidthConfig& getSoundingRSULConfigCommonSetupsrs_BandwidthConfig() { return *static_cast<SoundingRSULConfigCommonSetupsrs_BandwidthConfig*>(items[0]); }
	SoundingRSULConfigCommonSetupsrs_SubframeConfig& getSoundingRSULConfigCommonSetupsrs_SubframeConfig() { return *static_cast<SoundingRSULConfigCommonSetupsrs_SubframeConfig*>(items[1]); }
	SoundingRSULConfigCommonSetupAckNackSRSSimultaneousTransmission& getSoundingRSULConfigCommonSetupAckNackSRSSimultaneousTransmission() { return *static_cast<SoundingRSULConfigCommonSetupAckNackSRSSimultaneousTransmission*>(items[2]); }
	SoundingRSULConfigCommonSetupsrs_MaxUpPts& getSoundingRSULConfigCommonSetupsrs_MaxUpPts() { return *static_cast<SoundingRSULConfigCommonSetupsrs_MaxUpPts*>(items[3]); }
};

class SoundingRSULConfigCommon : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum SoundingRSULConfigCommonChoices {
		soundingRSULConfigCommonRelease = 0,
		soundingRSULConfigCommonSetup = 1,
	};
	static const Info theInfo;
	SoundingRSULConfigCommon(): Choice(&theInfo) {}
};

typedef Integer<CONSTRAINED, -126, 24> UplinkPowerControlCommonP0NominalPUSCH;

enum UplinkPowerControlCommonalphaValues {
	al0_UplinkPowerControlCommonalpha = 0,
	al04_UplinkPowerControlCommonalpha = 1,
	al05_UplinkPowerControlCommonalpha = 2,
	al06_UplinkPowerControlCommonalpha = 3,
	al07_UplinkPowerControlCommonalpha = 4,
	al08_UplinkPowerControlCommonalpha = 5,
	al09_UplinkPowerControlCommonalpha = 6,
	al1_UplinkPowerControlCommonalpha = 7,
};
typedef Enumerated<CONSTRAINED, 7> UplinkPowerControlCommonalpha;

typedef Integer<CONSTRAINED, -127, -96> UplinkPowerControlCommonP0NominalPUCCH;

enum DeltaFListPUCCHdeltaF_PUCCH_Format1Values {
	deltaF_2_DeltaFListPUCCHdeltaF_PUCCH_Format1 = 0,
	deltaF0_DeltaFListPUCCHdeltaF_PUCCH_Format1 = 1,
	deltaF2_DeltaFListPUCCHdeltaF_PUCCH_Format1 = 2,
};
typedef Enumerated<CONSTRAINED, 2> DeltaFListPUCCHdeltaF_PUCCH_Format1;

enum DeltaFListPUCCHdeltaF_PUCCH_Format1bValues {
	deltaF1_DeltaFListPUCCHdeltaF_PUCCH_Format1b = 0,
	deltaF3_DeltaFListPUCCHdeltaF_PUCCH_Format1b = 1,
	deltaF5_DeltaFListPUCCHdeltaF_PUCCH_Format1b = 2,
};
typedef Enumerated<CONSTRAINED, 2> DeltaFListPUCCHdeltaF_PUCCH_Format1b;

enum DeltaFListPUCCHdeltaF_PUCCH_Format2Values {
	deltaF_2_DeltaFListPUCCHdeltaF_PUCCH_Format2 = 0,
	deltaF0_DeltaFListPUCCHdeltaF_PUCCH_Format2 = 1,
	deltaF1_DeltaFListPUCCHdeltaF_PUCCH_Format2 = 2,
	deltaF2_DeltaFListPUCCHdeltaF_PUCCH_Format2 = 3,
};
typedef Enumerated<CONSTRAINED, 3> DeltaFListPUCCHdeltaF_PUCCH_Format2;

enum DeltaFListPUCCHdeltaF_PUCCH_Format2aValues {
	deltaF_2_DeltaFListPUCCHdeltaF_PUCCH_Format2a = 0,
	deltaF0_DeltaFListPUCCHdeltaF_PUCCH_Format2a = 1,
	deltaF2_DeltaFListPUCCHdeltaF_PUCCH_Format2a = 2,
};
typedef Enumerated<CONSTRAINED, 2> DeltaFListPUCCHdeltaF_PUCCH_Format2a;

enum DeltaFListPUCCHdeltaF_PUCCH_Format2bValues {
	deltaF_2_DeltaFListPUCCHdeltaF_PUCCH_Format2b = 0,
	deltaF0_DeltaFListPUCCHdeltaF_PUCCH_Format2b = 1,
	deltaF2_DeltaFListPUCCHdeltaF_PUCCH_Format2b = 2,
};
typedef Enumerated<CONSTRAINED, 2> DeltaFListPUCCHdeltaF_PUCCH_Format2b;

class DeltaFListPUCCH : public Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	DeltaFListPUCCH(): Sequence(&theInfo) {}
	DeltaFListPUCCH(const DeltaFListPUCCHdeltaF_PUCCH_Format1& deltaFListPUCCHdeltaF_PUCCH_Format1, const DeltaFListPUCCHdeltaF_PUCCH_Format1b& deltaFListPUCCHdeltaF_PUCCH_Format1b, const DeltaFListPUCCHdeltaF_PUCCH_Format2& deltaFListPUCCHdeltaF_PUCCH_Format2, const DeltaFListPUCCHdeltaF_PUCCH_Format2a& deltaFListPUCCHdeltaF_PUCCH_Format2a, const DeltaFListPUCCHdeltaF_PUCCH_Format2b& deltaFListPUCCHdeltaF_PUCCH_Format2b);

	void setDeltaFListPUCCHdeltaF_PUCCH_Format1(const DeltaFListPUCCHdeltaF_PUCCH_Format1& deltaFListPUCCHdeltaF_PUCCH_Format1) { *static_cast<DeltaFListPUCCHdeltaF_PUCCH_Format1*>(items[0]) = deltaFListPUCCHdeltaF_PUCCH_Format1; }
	void setDeltaFListPUCCHdeltaF_PUCCH_Format1b(const DeltaFListPUCCHdeltaF_PUCCH_Format1b& deltaFListPUCCHdeltaF_PUCCH_Format1b) { *static_cast<DeltaFListPUCCHdeltaF_PUCCH_Format1b*>(items[1]) = deltaFListPUCCHdeltaF_PUCCH_Format1b; }
	void setDeltaFListPUCCHdeltaF_PUCCH_Format2(const DeltaFListPUCCHdeltaF_PUCCH_Format2& deltaFListPUCCHdeltaF_PUCCH_Format2) { *static_cast<DeltaFListPUCCHdeltaF_PUCCH_Format2*>(items[2]) = deltaFListPUCCHdeltaF_PUCCH_Format2; }
	void setDeltaFListPUCCHdeltaF_PUCCH_Format2a(const DeltaFListPUCCHdeltaF_PUCCH_Format2a& deltaFListPUCCHdeltaF_PUCCH_Format2a) { *static_cast<DeltaFListPUCCHdeltaF_PUCCH_Format2a*>(items[3]) = deltaFListPUCCHdeltaF_PUCCH_Format2a; }
	void setDeltaFListPUCCHdeltaF_PUCCH_Format2b(const DeltaFListPUCCHdeltaF_PUCCH_Format2b& deltaFListPUCCHdeltaF_PUCCH_Format2b) { *static_cast<DeltaFListPUCCHdeltaF_PUCCH_Format2b*>(items[4]) = deltaFListPUCCHdeltaF_PUCCH_Format2b; }

	DeltaFListPUCCHdeltaF_PUCCH_Format1& getDeltaFListPUCCHdeltaF_PUCCH_Format1() { return *static_cast<DeltaFListPUCCHdeltaF_PUCCH_Format1*>(items[0]); }
	DeltaFListPUCCHdeltaF_PUCCH_Format1b& getDeltaFListPUCCHdeltaF_PUCCH_Format1b() { return *static_cast<DeltaFListPUCCHdeltaF_PUCCH_Format1b*>(items[1]); }
	DeltaFListPUCCHdeltaF_PUCCH_Format2& getDeltaFListPUCCHdeltaF_PUCCH_Format2() { return *static_cast<DeltaFListPUCCHdeltaF_PUCCH_Format2*>(items[2]); }
	DeltaFListPUCCHdeltaF_PUCCH_Format2a& getDeltaFListPUCCHdeltaF_PUCCH_Format2a() { return *static_cast<DeltaFListPUCCHdeltaF_PUCCH_Format2a*>(items[3]); }
	DeltaFListPUCCHdeltaF_PUCCH_Format2b& getDeltaFListPUCCHdeltaF_PUCCH_Format2b() { return *static_cast<DeltaFListPUCCHdeltaF_PUCCH_Format2b*>(items[4]); }
};

typedef Integer<CONSTRAINED, -1, 6> UplinkPowerControlCommonDeltaPreambleMsg3;

class UplinkPowerControlCommon : public Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	UplinkPowerControlCommon(): Sequence(&theInfo) {}
	UplinkPowerControlCommon(const UplinkPowerControlCommonP0NominalPUSCH& uplinkPowerControlCommonP0NominalPUSCH, const UplinkPowerControlCommonalpha& uplinkPowerControlCommonalpha, const UplinkPowerControlCommonP0NominalPUCCH& uplinkPowerControlCommonP0NominalPUCCH, const DeltaFListPUCCH& deltaFListPUCCH, const UplinkPowerControlCommonDeltaPreambleMsg3& uplinkPowerControlCommonDeltaPreambleMsg3);

	void setUplinkPowerControlCommonP0NominalPUSCH(const UplinkPowerControlCommonP0NominalPUSCH& uplinkPowerControlCommonP0NominalPUSCH) { *static_cast<UplinkPowerControlCommonP0NominalPUSCH*>(items[0]) = uplinkPowerControlCommonP0NominalPUSCH; }
	void setUplinkPowerControlCommonalpha(const UplinkPowerControlCommonalpha& uplinkPowerControlCommonalpha) { *static_cast<UplinkPowerControlCommonalpha*>(items[1]) = uplinkPowerControlCommonalpha; }
	void setUplinkPowerControlCommonP0NominalPUCCH(const UplinkPowerControlCommonP0NominalPUCCH& uplinkPowerControlCommonP0NominalPUCCH) { *static_cast<UplinkPowerControlCommonP0NominalPUCCH*>(items[2]) = uplinkPowerControlCommonP0NominalPUCCH; }
	void setDeltaFListPUCCH(const DeltaFListPUCCH& deltaFListPUCCH) { *static_cast<DeltaFListPUCCH*>(items[3]) = deltaFListPUCCH; }
	void setUplinkPowerControlCommonDeltaPreambleMsg3(const UplinkPowerControlCommonDeltaPreambleMsg3& uplinkPowerControlCommonDeltaPreambleMsg3) { *static_cast<UplinkPowerControlCommonDeltaPreambleMsg3*>(items[4]) = uplinkPowerControlCommonDeltaPreambleMsg3; }

	UplinkPowerControlCommonP0NominalPUSCH& getUplinkPowerControlCommonP0NominalPUSCH() { return *static_cast<UplinkPowerControlCommonP0NominalPUSCH*>(items[0]); }
	UplinkPowerControlCommonalpha& getUplinkPowerControlCommonalpha() { return *static_cast<UplinkPowerControlCommonalpha*>(items[1]); }
	UplinkPowerControlCommonP0NominalPUCCH& getUplinkPowerControlCommonP0NominalPUCCH() { return *static_cast<UplinkPowerControlCommonP0NominalPUCCH*>(items[2]); }
	DeltaFListPUCCH& getDeltaFListPUCCH() { return *static_cast<DeltaFListPUCCH*>(items[3]); }
	UplinkPowerControlCommonDeltaPreambleMsg3& getUplinkPowerControlCommonDeltaPreambleMsg3() { return *static_cast<UplinkPowerControlCommonDeltaPreambleMsg3*>(items[4]); }
};

enum AntennaInfoCommonantennaPortsCountValues {
	an1_AntennaInfoCommonantennaPortsCount = 0,
	an2_AntennaInfoCommonantennaPortsCount = 1,
	an4_AntennaInfoCommonantennaPortsCount = 2,
	spare1_AntennaInfoCommonantennaPortsCount = 3,
};
typedef Enumerated<CONSTRAINED, 3> AntennaInfoCommonantennaPortsCount;

class AntennaInfoCommon : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	AntennaInfoCommon(): Sequence(&theInfo) {}
	AntennaInfoCommon(const AntennaInfoCommonantennaPortsCount& antennaInfoCommonantennaPortsCount);

	void setAntennaInfoCommonantennaPortsCount(const AntennaInfoCommonantennaPortsCount& antennaInfoCommonantennaPortsCount) { *static_cast<AntennaInfoCommonantennaPortsCount*>(items[0]) = antennaInfoCommonantennaPortsCount; }

	AntennaInfoCommonantennaPortsCount& getAntennaInfoCommonantennaPortsCount() { return *static_cast<AntennaInfoCommonantennaPortsCount*>(items[0]); }
};

enum ULCyclicPrefixLengthValues {
	len1_ULCyclicPrefixLength = 0,
	len2_ULCyclicPrefixLength = 1,
};
typedef Enumerated<CONSTRAINED, 1> ULCyclicPrefixLength;

enum UplinkPowerControlCommonv1020deltaF_PUCCH_Format3_r10Values {
	deltaF_1_UplinkPowerControlCommonv1020deltaF_PUCCH_Format3_r10 = 0,
	deltaF0_UplinkPowerControlCommonv1020deltaF_PUCCH_Format3_r10 = 1,
	deltaF1_UplinkPowerControlCommonv1020deltaF_PUCCH_Format3_r10 = 2,
	deltaF2_UplinkPowerControlCommonv1020deltaF_PUCCH_Format3_r10 = 3,
	deltaF3_UplinkPowerControlCommonv1020deltaF_PUCCH_Format3_r10 = 4,
	deltaF4_UplinkPowerControlCommonv1020deltaF_PUCCH_Format3_r10 = 5,
	deltaF5_UplinkPowerControlCommonv1020deltaF_PUCCH_Format3_r10 = 6,
	deltaF6_UplinkPowerControlCommonv1020deltaF_PUCCH_Format3_r10 = 7,
};
typedef Enumerated<CONSTRAINED, 7> UplinkPowerControlCommonv1020deltaF_PUCCH_Format3_r10;

enum UplinkPowerControlCommonv1020deltaF_PUCCH_Format1bCS_r10Values {
	deltaF1_UplinkPowerControlCommonv1020deltaF_PUCCH_Format1bCS_r10 = 0,
	deltaF2_UplinkPowerControlCommonv1020deltaF_PUCCH_Format1bCS_r10 = 1,
	spare2_UplinkPowerControlCommonv1020deltaF_PUCCH_Format1bCS_r10 = 2,
	spare1_UplinkPowerControlCommonv1020deltaF_PUCCH_Format1bCS_r10 = 3,
};
typedef Enumerated<CONSTRAINED, 3> UplinkPowerControlCommonv1020deltaF_PUCCH_Format1bCS_r10;

class UplinkPowerControlCommonv1020 : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UplinkPowerControlCommonv1020(): Sequence(&theInfo) {}
	UplinkPowerControlCommonv1020(const UplinkPowerControlCommonv1020deltaF_PUCCH_Format3_r10& uplinkPowerControlCommonv1020deltaF_PUCCH_Format3_r10, const UplinkPowerControlCommonv1020deltaF_PUCCH_Format1bCS_r10& uplinkPowerControlCommonv1020deltaF_PUCCH_Format1bCS_r10);

	void setUplinkPowerControlCommonv1020deltaF_PUCCH_Format3_r10(const UplinkPowerControlCommonv1020deltaF_PUCCH_Format3_r10& uplinkPowerControlCommonv1020deltaF_PUCCH_Format3_r10) { *static_cast<UplinkPowerControlCommonv1020deltaF_PUCCH_Format3_r10*>(items[0]) = uplinkPowerControlCommonv1020deltaF_PUCCH_Format3_r10; }
	void setUplinkPowerControlCommonv1020deltaF_PUCCH_Format1bCS_r10(const UplinkPowerControlCommonv1020deltaF_PUCCH_Format1bCS_r10& uplinkPowerControlCommonv1020deltaF_PUCCH_Format1bCS_r10) { *static_cast<UplinkPowerControlCommonv1020deltaF_PUCCH_Format1bCS_r10*>(items[1]) = uplinkPowerControlCommonv1020deltaF_PUCCH_Format1bCS_r10; }

	UplinkPowerControlCommonv1020deltaF_PUCCH_Format3_r10& getUplinkPowerControlCommonv1020deltaF_PUCCH_Format3_r10() { return *static_cast<UplinkPowerControlCommonv1020deltaF_PUCCH_Format3_r10*>(items[0]); }
	UplinkPowerControlCommonv1020deltaF_PUCCH_Format1bCS_r10& getUplinkPowerControlCommonv1020deltaF_PUCCH_Format1bCS_r10() { return *static_cast<UplinkPowerControlCommonv1020deltaF_PUCCH_Format1bCS_r10*>(items[1]); }
};

class RadioResourceConfigCommon : public Sequence {
private:
	static const void *itemsInfo[13];
	static bool itemsPres[13];
public:
	static const Info theInfo;
	RadioResourceConfigCommon(): Sequence(&theInfo) {}
	RadioResourceConfigCommon(const PRACHConfig& prachConfig, const PUSCHConfigCommon& puschConfigCommon, const ULCyclicPrefixLength& ulCyclicPrefixLength);

	void setRachConfigCommon(const RACHConfigCommon& rachConfigCommon) { *static_cast<RACHConfigCommon*>(items[0]) = rachConfigCommon; }
	void setPrachConfig(const PRACHConfig& prachConfig) { *static_cast<PRACHConfig*>(items[1]) = prachConfig; }
	void setPdschConfigCommon(const PDSCHConfigCommon& pdschConfigCommon) { *static_cast<PDSCHConfigCommon*>(items[2]) = pdschConfigCommon; }
	void setPuschConfigCommon(const PUSCHConfigCommon& puschConfigCommon) { *static_cast<PUSCHConfigCommon*>(items[3]) = puschConfigCommon; }
	void setPhichConfig(const PHICHConfig& phichConfig) { *static_cast<PHICHConfig*>(items[4]) = phichConfig; }
	void setPucchConfigCommon(const PUCCHConfigCommon& pucchConfigCommon) { *static_cast<PUCCHConfigCommon*>(items[5]) = pucchConfigCommon; }
	void setSoundingRSULConfigCommon(const SoundingRSULConfigCommon& soundingRSULConfigCommon) { *static_cast<SoundingRSULConfigCommon*>(items[6]) = soundingRSULConfigCommon; }
	void setUplinkPowerControlCommon(const UplinkPowerControlCommon& uplinkPowerControlCommon) { *static_cast<UplinkPowerControlCommon*>(items[7]) = uplinkPowerControlCommon; }
	void setAntennaInfoCommon(const AntennaInfoCommon& antennaInfoCommon) { *static_cast<AntennaInfoCommon*>(items[8]) = antennaInfoCommon; }
	void setPMax(const PMax& pMax) { *static_cast<PMax*>(items[9]) = pMax; }
	void setTddConfig(const TDDConfig& tddConfig) { *static_cast<TDDConfig*>(items[10]) = tddConfig; }
	void setUlCyclicPrefixLength(const ULCyclicPrefixLength& ulCyclicPrefixLength) { *static_cast<ULCyclicPrefixLength*>(items[11]) = ulCyclicPrefixLength; }
	void setUplinkPowerControlCommonv1020(const UplinkPowerControlCommonv1020& uplinkPowerControlCommonv1020) { *static_cast<UplinkPowerControlCommonv1020*>(items[12]) = uplinkPowerControlCommonv1020; }

	RACHConfigCommon& getRachConfigCommon() { return *static_cast<RACHConfigCommon*>(items[0]); }
	PRACHConfig& getPrachConfig() { return *static_cast<PRACHConfig*>(items[1]); }
	PDSCHConfigCommon& getPdschConfigCommon() { return *static_cast<PDSCHConfigCommon*>(items[2]); }
	PUSCHConfigCommon& getPuschConfigCommon() { return *static_cast<PUSCHConfigCommon*>(items[3]); }
	PHICHConfig& getPhichConfig() { return *static_cast<PHICHConfig*>(items[4]); }
	PUCCHConfigCommon& getPucchConfigCommon() { return *static_cast<PUCCHConfigCommon*>(items[5]); }
	SoundingRSULConfigCommon& getSoundingRSULConfigCommon() { return *static_cast<SoundingRSULConfigCommon*>(items[6]); }
	UplinkPowerControlCommon& getUplinkPowerControlCommon() { return *static_cast<UplinkPowerControlCommon*>(items[7]); }
	AntennaInfoCommon& getAntennaInfoCommon() { return *static_cast<AntennaInfoCommon*>(items[8]); }
	PMax& getPMax() { return *static_cast<PMax*>(items[9]); }
	TDDConfig& getTddConfig() { return *static_cast<TDDConfig*>(items[10]); }
	ULCyclicPrefixLength& getUlCyclicPrefixLength() { return *static_cast<ULCyclicPrefixLength*>(items[11]); }
	UplinkPowerControlCommonv1020& getUplinkPowerControlCommonv1020() { return *static_cast<UplinkPowerControlCommonv1020*>(items[12]); }
};

typedef Integer<CONSTRAINED, 0, 63> RACHConfigDedicatedRaPreambleIndex;

typedef Integer<CONSTRAINED, 0, 15> RACHConfigDedicatedRaPRACHMaskIndex;

class RACHConfigDedicated : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RACHConfigDedicated(): Sequence(&theInfo) {}
	RACHConfigDedicated(const RACHConfigDedicatedRaPreambleIndex& rACHConfigDedicatedRaPreambleIndex, const RACHConfigDedicatedRaPRACHMaskIndex& rACHConfigDedicatedRaPRACHMaskIndex);

	void setRACHConfigDedicatedRaPreambleIndex(const RACHConfigDedicatedRaPreambleIndex& rACHConfigDedicatedRaPreambleIndex) { *static_cast<RACHConfigDedicatedRaPreambleIndex*>(items[0]) = rACHConfigDedicatedRaPreambleIndex; }
	void setRACHConfigDedicatedRaPRACHMaskIndex(const RACHConfigDedicatedRaPRACHMaskIndex& rACHConfigDedicatedRaPRACHMaskIndex) { *static_cast<RACHConfigDedicatedRaPRACHMaskIndex*>(items[1]) = rACHConfigDedicatedRaPRACHMaskIndex; }

	RACHConfigDedicatedRaPreambleIndex& getRACHConfigDedicatedRaPreambleIndex() { return *static_cast<RACHConfigDedicatedRaPreambleIndex*>(items[0]); }
	RACHConfigDedicatedRaPRACHMaskIndex& getRACHConfigDedicatedRaPRACHMaskIndex() { return *static_cast<RACHConfigDedicatedRaPRACHMaskIndex*>(items[1]); }
};

class MobilityControlInfo : public Sequence {
private:
	static const void *itemsInfo[8];
	static bool itemsPres[8];
public:
	static const Info theInfo;
	MobilityControlInfo(): Sequence(&theInfo) {}
	MobilityControlInfo(const PhysCellId& targetPhysCellId, const MobilityControlInfot304& mobilityControlInfot304, const CRNTI& newUEIdentity, const RadioResourceConfigCommon& radioResourceConfigCommon);

	void setTargetPhysCellId(const PhysCellId& targetPhysCellId) { *static_cast<PhysCellId*>(items[0]) = targetPhysCellId; }
	void setCarrierFreq(const CarrierFreqEUTRA& carrierFreq) { *static_cast<CarrierFreqEUTRA*>(items[1]) = carrierFreq; }
	void setCarrierBandwidth(const CarrierBandwidthEUTRA& carrierBandwidth) { *static_cast<CarrierBandwidthEUTRA*>(items[2]) = carrierBandwidth; }
	void setAdditionalSpectrumEmission(const AdditionalSpectrumEmission& additionalSpectrumEmission) { *static_cast<AdditionalSpectrumEmission*>(items[3]) = additionalSpectrumEmission; }
	void setMobilityControlInfot304(const MobilityControlInfot304& mobilityControlInfot304) { *static_cast<MobilityControlInfot304*>(items[4]) = mobilityControlInfot304; }
	void setNewUEIdentity(const CRNTI& newUEIdentity) { *static_cast<CRNTI*>(items[5]) = newUEIdentity; }
	void setRadioResourceConfigCommon(const RadioResourceConfigCommon& radioResourceConfigCommon) { *static_cast<RadioResourceConfigCommon*>(items[6]) = radioResourceConfigCommon; }
	void setRachConfigDedicated(const RACHConfigDedicated& rachConfigDedicated) { *static_cast<RACHConfigDedicated*>(items[7]) = rachConfigDedicated; }

	PhysCellId& getTargetPhysCellId() { return *static_cast<PhysCellId*>(items[0]); }
	CarrierFreqEUTRA& getCarrierFreq() { return *static_cast<CarrierFreqEUTRA*>(items[1]); }
	CarrierBandwidthEUTRA& getCarrierBandwidth() { return *static_cast<CarrierBandwidthEUTRA*>(items[2]); }
	AdditionalSpectrumEmission& getAdditionalSpectrumEmission() { return *static_cast<AdditionalSpectrumEmission*>(items[3]); }
	MobilityControlInfot304& getMobilityControlInfot304() { return *static_cast<MobilityControlInfot304*>(items[4]); }
	CRNTI& getNewUEIdentity() { return *static_cast<CRNTI*>(items[5]); }
	RadioResourceConfigCommon& getRadioResourceConfigCommon() { return *static_cast<RadioResourceConfigCommon*>(items[6]); }
	RACHConfigDedicated& getRachConfigDedicated() { return *static_cast<RACHConfigDedicated*>(items[7]); }
};

typedef SequenceOf<DedicatedInfoNAS, CONSTRAINED, 1, maxDRB> RRCConnectionReconfigurationr8IEsDedicatedInfoNASList;

enum SecurityAlgorithmConfigcipheringAlgorithmValues {
	eea0_SecurityAlgorithmConfigcipheringAlgorithm = 0,
	eea1_SecurityAlgorithmConfigcipheringAlgorithm = 1,
	eea2_SecurityAlgorithmConfigcipheringAlgorithm = 2,
	spare5_SecurityAlgorithmConfigcipheringAlgorithm = 3,
	spare4_SecurityAlgorithmConfigcipheringAlgorithm = 4,
	spare3_SecurityAlgorithmConfigcipheringAlgorithm = 5,
	spare2_SecurityAlgorithmConfigcipheringAlgorithm = 6,
	spare1_SecurityAlgorithmConfigcipheringAlgorithm = 7,
};
typedef Enumerated<EXTCONSTRAINED, 7> SecurityAlgorithmConfigcipheringAlgorithm;

enum SecurityAlgorithmConfigintegrityProtAlgorithmValues {
	eia0_v920_SecurityAlgorithmConfigintegrityProtAlgorithm = 0,
	eia1_SecurityAlgorithmConfigintegrityProtAlgorithm = 1,
	eia2_SecurityAlgorithmConfigintegrityProtAlgorithm = 2,
	spare5_SecurityAlgorithmConfigintegrityProtAlgorithm = 3,
	spare4_SecurityAlgorithmConfigintegrityProtAlgorithm = 4,
	spare3_SecurityAlgorithmConfigintegrityProtAlgorithm = 5,
	spare2_SecurityAlgorithmConfigintegrityProtAlgorithm = 6,
	spare1_SecurityAlgorithmConfigintegrityProtAlgorithm = 7,
};
typedef Enumerated<EXTCONSTRAINED, 7> SecurityAlgorithmConfigintegrityProtAlgorithm;

class SecurityAlgorithmConfig : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SecurityAlgorithmConfig(): Sequence(&theInfo) {}
	SecurityAlgorithmConfig(const SecurityAlgorithmConfigcipheringAlgorithm& securityAlgorithmConfigcipheringAlgorithm, const SecurityAlgorithmConfigintegrityProtAlgorithm& securityAlgorithmConfigintegrityProtAlgorithm);

	void setSecurityAlgorithmConfigcipheringAlgorithm(const SecurityAlgorithmConfigcipheringAlgorithm& securityAlgorithmConfigcipheringAlgorithm) { *static_cast<SecurityAlgorithmConfigcipheringAlgorithm*>(items[0]) = securityAlgorithmConfigcipheringAlgorithm; }
	void setSecurityAlgorithmConfigintegrityProtAlgorithm(const SecurityAlgorithmConfigintegrityProtAlgorithm& securityAlgorithmConfigintegrityProtAlgorithm) { *static_cast<SecurityAlgorithmConfigintegrityProtAlgorithm*>(items[1]) = securityAlgorithmConfigintegrityProtAlgorithm; }

	SecurityAlgorithmConfigcipheringAlgorithm& getSecurityAlgorithmConfigcipheringAlgorithm() { return *static_cast<SecurityAlgorithmConfigcipheringAlgorithm*>(items[0]); }
	SecurityAlgorithmConfigintegrityProtAlgorithm& getSecurityAlgorithmConfigintegrityProtAlgorithm() { return *static_cast<SecurityAlgorithmConfigintegrityProtAlgorithm*>(items[1]); }
};

typedef Boolean SecurityConfigHOHandoverTypeIntraLTEKeyChangeIndicator;

class SecurityConfigHOHandoverTypeIntraLTE : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	SecurityConfigHOHandoverTypeIntraLTE(): Sequence(&theInfo) {}
	SecurityConfigHOHandoverTypeIntraLTE(const SecurityConfigHOHandoverTypeIntraLTEKeyChangeIndicator& securityConfigHOHandoverTypeIntraLTEKeyChangeIndicator, const NextHopChainingCount& nextHopChainingCount);

	void setSecurityAlgorithmConfig(const SecurityAlgorithmConfig& securityAlgorithmConfig) { *static_cast<SecurityAlgorithmConfig*>(items[0]) = securityAlgorithmConfig; }
	void setSecurityConfigHOHandoverTypeIntraLTEKeyChangeIndicator(const SecurityConfigHOHandoverTypeIntraLTEKeyChangeIndicator& securityConfigHOHandoverTypeIntraLTEKeyChangeIndicator) { *static_cast<SecurityConfigHOHandoverTypeIntraLTEKeyChangeIndicator*>(items[1]) = securityConfigHOHandoverTypeIntraLTEKeyChangeIndicator; }
	void setNextHopChainingCount(const NextHopChainingCount& nextHopChainingCount) { *static_cast<NextHopChainingCount*>(items[2]) = nextHopChainingCount; }

	SecurityAlgorithmConfig& getSecurityAlgorithmConfig() { return *static_cast<SecurityAlgorithmConfig*>(items[0]); }
	SecurityConfigHOHandoverTypeIntraLTEKeyChangeIndicator& getSecurityConfigHOHandoverTypeIntraLTEKeyChangeIndicator() { return *static_cast<SecurityConfigHOHandoverTypeIntraLTEKeyChangeIndicator*>(items[1]); }
	NextHopChainingCount& getNextHopChainingCount() { return *static_cast<NextHopChainingCount*>(items[2]); }
};

typedef OctetString<CONSTRAINED, 6, 6> SecurityConfigHOHandoverTypeInterRATNasSecurityParamToEUTRA;

class SecurityConfigHOHandoverTypeInterRAT : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SecurityConfigHOHandoverTypeInterRAT(): Sequence(&theInfo) {}
	SecurityConfigHOHandoverTypeInterRAT(const SecurityAlgorithmConfig& securityAlgorithmConfig, const SecurityConfigHOHandoverTypeInterRATNasSecurityParamToEUTRA& securityConfigHOHandoverTypeInterRATNasSecurityParamToEUTRA);

	void setSecurityAlgorithmConfig(const SecurityAlgorithmConfig& securityAlgorithmConfig) { *static_cast<SecurityAlgorithmConfig*>(items[0]) = securityAlgorithmConfig; }
	void setSecurityConfigHOHandoverTypeInterRATNasSecurityParamToEUTRA(const SecurityConfigHOHandoverTypeInterRATNasSecurityParamToEUTRA& securityConfigHOHandoverTypeInterRATNasSecurityParamToEUTRA) { *static_cast<SecurityConfigHOHandoverTypeInterRATNasSecurityParamToEUTRA*>(items[1]) = securityConfigHOHandoverTypeInterRATNasSecurityParamToEUTRA; }

	SecurityAlgorithmConfig& getSecurityAlgorithmConfig() { return *static_cast<SecurityAlgorithmConfig*>(items[0]); }
	SecurityConfigHOHandoverTypeInterRATNasSecurityParamToEUTRA& getSecurityConfigHOHandoverTypeInterRATNasSecurityParamToEUTRA() { return *static_cast<SecurityConfigHOHandoverTypeInterRATNasSecurityParamToEUTRA*>(items[1]); }
};

class SecurityConfigHOHandoverType : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum SecurityConfigHOHandoverTypeChoices {
		securityConfigHOHandoverTypeIntraLTE = 0,
		securityConfigHOHandoverTypeInterRAT = 1,
	};
	static const Info theInfo;
	SecurityConfigHOHandoverType(): Choice(&theInfo) {}
};

class SecurityConfigHO : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SecurityConfigHO(): Sequence(&theInfo) {}
	SecurityConfigHO(const SecurityConfigHOHandoverType& securityConfigHOHandoverType);

	void setSecurityConfigHOHandoverType(const SecurityConfigHOHandoverType& securityConfigHOHandoverType) { *static_cast<SecurityConfigHOHandoverType*>(items[0]) = securityConfigHOHandoverType; }

	SecurityConfigHOHandoverType& getSecurityConfigHOHandoverType() { return *static_cast<SecurityConfigHOHandoverType*>(items[0]); }
};

typedef OctetStringBase RRCConnectionReconfigurationv890IEsLateNonCriticalExtension;

enum ReportProximityConfigr9proximityIndicationEUTRA_r9Values {
	enabled_ReportProximityConfigr9proximityIndicationEUTRA_r9 = 0,
};
typedef Enumerated<CONSTRAINED, 0> ReportProximityConfigr9proximityIndicationEUTRA_r9;

enum ReportProximityConfigr9proximityIndicationUTRA_r9Values {
	enabled_ReportProximityConfigr9proximityIndicationUTRA_r9 = 0,
};
typedef Enumerated<CONSTRAINED, 0> ReportProximityConfigr9proximityIndicationUTRA_r9;

class ReportProximityConfigr9 : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ReportProximityConfigr9(): Sequence(&theInfo) {}

	void setReportProximityConfigr9proximityIndicationEUTRA_r9(const ReportProximityConfigr9proximityIndicationEUTRA_r9& reportProximityConfigr9proximityIndicationEUTRA_r9) { *static_cast<ReportProximityConfigr9proximityIndicationEUTRA_r9*>(items[0]) = reportProximityConfigr9proximityIndicationEUTRA_r9; }
	void setReportProximityConfigr9proximityIndicationUTRA_r9(const ReportProximityConfigr9proximityIndicationUTRA_r9& reportProximityConfigr9proximityIndicationUTRA_r9) { *static_cast<ReportProximityConfigr9proximityIndicationUTRA_r9*>(items[1]) = reportProximityConfigr9proximityIndicationUTRA_r9; }

	ReportProximityConfigr9proximityIndicationEUTRA_r9& getReportProximityConfigr9proximityIndicationEUTRA_r9() { return *static_cast<ReportProximityConfigr9proximityIndicationEUTRA_r9*>(items[0]); }
	ReportProximityConfigr9proximityIndicationUTRA_r9& getReportProximityConfigr9proximityIndicationUTRA_r9() { return *static_cast<ReportProximityConfigr9proximityIndicationUTRA_r9*>(items[1]); }
};

class OtherConfigr9 : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	OtherConfigr9(): Sequence(&theInfo) {}

	void setReportProximityConfigr9(const ReportProximityConfigr9& reportProximityConfigr9) { *static_cast<ReportProximityConfigr9*>(items[0]) = reportProximityConfigr9; }

	ReportProximityConfigr9& getReportProximityConfigr9() { return *static_cast<ReportProximityConfigr9*>(items[0]); }
};

enum RRCConnectionReconfigurationv920IEsfullConfig_r9Values {
	true_RRCConnectionReconfigurationv920IEsfullConfig_r9 = 0,
};
typedef Enumerated<CONSTRAINED, 0> RRCConnectionReconfigurationv920IEsfullConfig_r9;

typedef Integer<CONSTRAINED, 1, 7> SCellIndexr10;

typedef SequenceOf<SCellIndexr10, CONSTRAINED, 1, maxSCell_r10> SCellToReleaseListr10;

class SCellToAddModr10CellIdentificationr10 : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SCellToAddModr10CellIdentificationr10(): Sequence(&theInfo) {}
	SCellToAddModr10CellIdentificationr10(const PhysCellId& physCellIdr10, const ARFCNValueEUTRA& dlCarrierFreqr10);

	void setPhysCellIdr10(const PhysCellId& physCellIdr10) { *static_cast<PhysCellId*>(items[0]) = physCellIdr10; }
	void setDlCarrierFreqr10(const ARFCNValueEUTRA& dlCarrierFreqr10) { *static_cast<ARFCNValueEUTRA*>(items[1]) = dlCarrierFreqr10; }

	PhysCellId& getPhysCellIdr10() { return *static_cast<PhysCellId*>(items[0]); }
	ARFCNValueEUTRA& getDlCarrierFreqr10() { return *static_cast<ARFCNValueEUTRA*>(items[1]); }
};

enum RadioResourceConfigCommonSCellr10NonULConfigurationr10dl_Bandwidth_r10Values {
	n6_RadioResourceConfigCommonSCellr10NonULConfigurationr10dl_Bandwidth_r10 = 0,
	n15_RadioResourceConfigCommonSCellr10NonULConfigurationr10dl_Bandwidth_r10 = 1,
	n25_RadioResourceConfigCommonSCellr10NonULConfigurationr10dl_Bandwidth_r10 = 2,
	n50_RadioResourceConfigCommonSCellr10NonULConfigurationr10dl_Bandwidth_r10 = 3,
	n75_RadioResourceConfigCommonSCellr10NonULConfigurationr10dl_Bandwidth_r10 = 4,
	n100_RadioResourceConfigCommonSCellr10NonULConfigurationr10dl_Bandwidth_r10 = 5,
};
typedef Enumerated<CONSTRAINED, 5> RadioResourceConfigCommonSCellr10NonULConfigurationr10dl_Bandwidth_r10;

typedef SequenceOf<MBSFNSubframeConfig, CONSTRAINED, 1, maxMBSFN_Allocations> MBSFNSubframeConfigList;

class RadioResourceConfigCommonSCellr10NonULConfigurationr10 : public Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	RadioResourceConfigCommonSCellr10NonULConfigurationr10(): Sequence(&theInfo) {}
	RadioResourceConfigCommonSCellr10NonULConfigurationr10(const RadioResourceConfigCommonSCellr10NonULConfigurationr10dl_Bandwidth_r10& radioResourceConfigCommonSCellr10NonULConfigurationr10dl_Bandwidth_r10, const AntennaInfoCommon& antennaInfoCommonr10, const PHICHConfig& phichConfigr10, const PDSCHConfigCommon& pdschConfigCommonr10);

	void setRadioResourceConfigCommonSCellr10NonULConfigurationr10dl_Bandwidth_r10(const RadioResourceConfigCommonSCellr10NonULConfigurationr10dl_Bandwidth_r10& radioResourceConfigCommonSCellr10NonULConfigurationr10dl_Bandwidth_r10) { *static_cast<RadioResourceConfigCommonSCellr10NonULConfigurationr10dl_Bandwidth_r10*>(items[0]) = radioResourceConfigCommonSCellr10NonULConfigurationr10dl_Bandwidth_r10; }
	void setAntennaInfoCommonr10(const AntennaInfoCommon& antennaInfoCommonr10) { *static_cast<AntennaInfoCommon*>(items[1]) = antennaInfoCommonr10; }
	void setMbsfnSubframeConfigListr10(const MBSFNSubframeConfigList& mbsfnSubframeConfigListr10) { *static_cast<MBSFNSubframeConfigList*>(items[2]) = mbsfnSubframeConfigListr10; }
	void setPhichConfigr10(const PHICHConfig& phichConfigr10) { *static_cast<PHICHConfig*>(items[3]) = phichConfigr10; }
	void setPdschConfigCommonr10(const PDSCHConfigCommon& pdschConfigCommonr10) { *static_cast<PDSCHConfigCommon*>(items[4]) = pdschConfigCommonr10; }
	void setTddConfigr10(const TDDConfig& tddConfigr10) { *static_cast<TDDConfig*>(items[5]) = tddConfigr10; }

	RadioResourceConfigCommonSCellr10NonULConfigurationr10dl_Bandwidth_r10& getRadioResourceConfigCommonSCellr10NonULConfigurationr10dl_Bandwidth_r10() { return *static_cast<RadioResourceConfigCommonSCellr10NonULConfigurationr10dl_Bandwidth_r10*>(items[0]); }
	AntennaInfoCommon& getAntennaInfoCommonr10() { return *static_cast<AntennaInfoCommon*>(items[1]); }
	MBSFNSubframeConfigList& getMbsfnSubframeConfigListr10() { return *static_cast<MBSFNSubframeConfigList*>(items[2]); }
	PHICHConfig& getPhichConfigr10() { return *static_cast<PHICHConfig*>(items[3]); }
	PDSCHConfigCommon& getPdschConfigCommonr10() { return *static_cast<PDSCHConfigCommon*>(items[4]); }
	TDDConfig& getTddConfigr10() { return *static_cast<TDDConfig*>(items[5]); }
};

enum RadioResourceConfigCommonSCellr10UlConfigurationr10UlFreqInfor10ul_Bandwidth_r10Values {
	n6_RadioResourceConfigCommonSCellr10UlConfigurationr10UlFreqInfor10ul_Bandwidth_r10 = 0,
	n15_RadioResourceConfigCommonSCellr10UlConfigurationr10UlFreqInfor10ul_Bandwidth_r10 = 1,
	n25_RadioResourceConfigCommonSCellr10UlConfigurationr10UlFreqInfor10ul_Bandwidth_r10 = 2,
	n50_RadioResourceConfigCommonSCellr10UlConfigurationr10UlFreqInfor10ul_Bandwidth_r10 = 3,
	n75_RadioResourceConfigCommonSCellr10UlConfigurationr10UlFreqInfor10ul_Bandwidth_r10 = 4,
	n100_RadioResourceConfigCommonSCellr10UlConfigurationr10UlFreqInfor10ul_Bandwidth_r10 = 5,
};
typedef Enumerated<CONSTRAINED, 5> RadioResourceConfigCommonSCellr10UlConfigurationr10UlFreqInfor10ul_Bandwidth_r10;

class RadioResourceConfigCommonSCellr10UlConfigurationr10UlFreqInfor10 : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RadioResourceConfigCommonSCellr10UlConfigurationr10UlFreqInfor10(): Sequence(&theInfo) {}
	RadioResourceConfigCommonSCellr10UlConfigurationr10UlFreqInfor10(const AdditionalSpectrumEmission& additionalSpectrumEmissionSCellr10);

	void setUlCarrierFreqr10(const ARFCNValueEUTRA& ulCarrierFreqr10) { *static_cast<ARFCNValueEUTRA*>(items[0]) = ulCarrierFreqr10; }
	void setRadioResourceConfigCommonSCellr10UlConfigurationr10UlFreqInfor10ul_Bandwidth_r10(const RadioResourceConfigCommonSCellr10UlConfigurationr10UlFreqInfor10ul_Bandwidth_r10& radioResourceConfigCommonSCellr10UlConfigurationr10UlFreqInfor10ul_Bandwidth_r10) { *static_cast<RadioResourceConfigCommonSCellr10UlConfigurationr10UlFreqInfor10ul_Bandwidth_r10*>(items[1]) = radioResourceConfigCommonSCellr10UlConfigurationr10UlFreqInfor10ul_Bandwidth_r10; }
	void setAdditionalSpectrumEmissionSCellr10(const AdditionalSpectrumEmission& additionalSpectrumEmissionSCellr10) { *static_cast<AdditionalSpectrumEmission*>(items[2]) = additionalSpectrumEmissionSCellr10; }

	ARFCNValueEUTRA& getUlCarrierFreqr10() { return *static_cast<ARFCNValueEUTRA*>(items[0]); }
	RadioResourceConfigCommonSCellr10UlConfigurationr10UlFreqInfor10ul_Bandwidth_r10& getRadioResourceConfigCommonSCellr10UlConfigurationr10UlFreqInfor10ul_Bandwidth_r10() { return *static_cast<RadioResourceConfigCommonSCellr10UlConfigurationr10UlFreqInfor10ul_Bandwidth_r10*>(items[1]); }
	AdditionalSpectrumEmission& getAdditionalSpectrumEmissionSCellr10() { return *static_cast<AdditionalSpectrumEmission*>(items[2]); }
};

typedef Integer<CONSTRAINED, -126, 24> UplinkPowerControlCommonSCellr10P0NominalPUSCHr10;

enum UplinkPowerControlCommonSCellr10alpha_r10Values {
	al0_UplinkPowerControlCommonSCellr10alpha_r10 = 0,
	al04_UplinkPowerControlCommonSCellr10alpha_r10 = 1,
	al05_UplinkPowerControlCommonSCellr10alpha_r10 = 2,
	al06_UplinkPowerControlCommonSCellr10alpha_r10 = 3,
	al07_UplinkPowerControlCommonSCellr10alpha_r10 = 4,
	al08_UplinkPowerControlCommonSCellr10alpha_r10 = 5,
	al09_UplinkPowerControlCommonSCellr10alpha_r10 = 6,
	al1_UplinkPowerControlCommonSCellr10alpha_r10 = 7,
};
typedef Enumerated<CONSTRAINED, 7> UplinkPowerControlCommonSCellr10alpha_r10;

class UplinkPowerControlCommonSCellr10 : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UplinkPowerControlCommonSCellr10(): Sequence(&theInfo) {}
	UplinkPowerControlCommonSCellr10(const UplinkPowerControlCommonSCellr10P0NominalPUSCHr10& uplinkPowerControlCommonSCellr10P0NominalPUSCHr10, const UplinkPowerControlCommonSCellr10alpha_r10& uplinkPowerControlCommonSCellr10alpha_r10);

	void setUplinkPowerControlCommonSCellr10P0NominalPUSCHr10(const UplinkPowerControlCommonSCellr10P0NominalPUSCHr10& uplinkPowerControlCommonSCellr10P0NominalPUSCHr10) { *static_cast<UplinkPowerControlCommonSCellr10P0NominalPUSCHr10*>(items[0]) = uplinkPowerControlCommonSCellr10P0NominalPUSCHr10; }
	void setUplinkPowerControlCommonSCellr10alpha_r10(const UplinkPowerControlCommonSCellr10alpha_r10& uplinkPowerControlCommonSCellr10alpha_r10) { *static_cast<UplinkPowerControlCommonSCellr10alpha_r10*>(items[1]) = uplinkPowerControlCommonSCellr10alpha_r10; }

	UplinkPowerControlCommonSCellr10P0NominalPUSCHr10& getUplinkPowerControlCommonSCellr10P0NominalPUSCHr10() { return *static_cast<UplinkPowerControlCommonSCellr10P0NominalPUSCHr10*>(items[0]); }
	UplinkPowerControlCommonSCellr10alpha_r10& getUplinkPowerControlCommonSCellr10alpha_r10() { return *static_cast<UplinkPowerControlCommonSCellr10alpha_r10*>(items[1]); }
};

typedef Integer<CONSTRAINED, 0, 63> PRACHConfigSCellr10PrachConfigIndexr10;

class PRACHConfigSCellr10 : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PRACHConfigSCellr10(): Sequence(&theInfo) {}
	PRACHConfigSCellr10(const PRACHConfigSCellr10PrachConfigIndexr10& pRACHConfigSCellr10PrachConfigIndexr10);

	void setPRACHConfigSCellr10PrachConfigIndexr10(const PRACHConfigSCellr10PrachConfigIndexr10& pRACHConfigSCellr10PrachConfigIndexr10) { *static_cast<PRACHConfigSCellr10PrachConfigIndexr10*>(items[0]) = pRACHConfigSCellr10PrachConfigIndexr10; }

	PRACHConfigSCellr10PrachConfigIndexr10& getPRACHConfigSCellr10PrachConfigIndexr10() { return *static_cast<PRACHConfigSCellr10PrachConfigIndexr10*>(items[0]); }
};

class RadioResourceConfigCommonSCellr10UlConfigurationr10 : public Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	RadioResourceConfigCommonSCellr10UlConfigurationr10(): Sequence(&theInfo) {}
	RadioResourceConfigCommonSCellr10UlConfigurationr10(const RadioResourceConfigCommonSCellr10UlConfigurationr10UlFreqInfor10& radioResourceConfigCommonSCellr10UlConfigurationr10UlFreqInfor10, const UplinkPowerControlCommonSCellr10& uplinkPowerControlCommonSCellr10, const SoundingRSULConfigCommon& soundingRSULConfigCommonr10, const ULCyclicPrefixLength& ulCyclicPrefixLengthr10, const PUSCHConfigCommon& puschConfigCommonr10);

	void setRadioResourceConfigCommonSCellr10UlConfigurationr10UlFreqInfor10(const RadioResourceConfigCommonSCellr10UlConfigurationr10UlFreqInfor10& radioResourceConfigCommonSCellr10UlConfigurationr10UlFreqInfor10) { *static_cast<RadioResourceConfigCommonSCellr10UlConfigurationr10UlFreqInfor10*>(items[0]) = radioResourceConfigCommonSCellr10UlConfigurationr10UlFreqInfor10; }
	void setPMaxr10(const PMax& pMaxr10) { *static_cast<PMax*>(items[1]) = pMaxr10; }
	void setUplinkPowerControlCommonSCellr10(const UplinkPowerControlCommonSCellr10& uplinkPowerControlCommonSCellr10) { *static_cast<UplinkPowerControlCommonSCellr10*>(items[2]) = uplinkPowerControlCommonSCellr10; }
	void setSoundingRSULConfigCommonr10(const SoundingRSULConfigCommon& soundingRSULConfigCommonr10) { *static_cast<SoundingRSULConfigCommon*>(items[3]) = soundingRSULConfigCommonr10; }
	void setUlCyclicPrefixLengthr10(const ULCyclicPrefixLength& ulCyclicPrefixLengthr10) { *static_cast<ULCyclicPrefixLength*>(items[4]) = ulCyclicPrefixLengthr10; }
	void setPrachConfigSCellr10(const PRACHConfigSCellr10& prachConfigSCellr10) { *static_cast<PRACHConfigSCellr10*>(items[5]) = prachConfigSCellr10; }
	void setPuschConfigCommonr10(const PUSCHConfigCommon& puschConfigCommonr10) { *static_cast<PUSCHConfigCommon*>(items[6]) = puschConfigCommonr10; }

	RadioResourceConfigCommonSCellr10UlConfigurationr10UlFreqInfor10& getRadioResourceConfigCommonSCellr10UlConfigurationr10UlFreqInfor10() { return *static_cast<RadioResourceConfigCommonSCellr10UlConfigurationr10UlFreqInfor10*>(items[0]); }
	PMax& getPMaxr10() { return *static_cast<PMax*>(items[1]); }
	UplinkPowerControlCommonSCellr10& getUplinkPowerControlCommonSCellr10() { return *static_cast<UplinkPowerControlCommonSCellr10*>(items[2]); }
	SoundingRSULConfigCommon& getSoundingRSULConfigCommonr10() { return *static_cast<SoundingRSULConfigCommon*>(items[3]); }
	ULCyclicPrefixLength& getUlCyclicPrefixLengthr10() { return *static_cast<ULCyclicPrefixLength*>(items[4]); }
	PRACHConfigSCellr10& getPrachConfigSCellr10() { return *static_cast<PRACHConfigSCellr10*>(items[5]); }
	PUSCHConfigCommon& getPuschConfigCommonr10() { return *static_cast<PUSCHConfigCommon*>(items[6]); }
};

class RadioResourceConfigCommonSCellr10 : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioResourceConfigCommonSCellr10(): Sequence(&theInfo) {}
	RadioResourceConfigCommonSCellr10(const RadioResourceConfigCommonSCellr10NonULConfigurationr10& radioResourceConfigCommonSCellr10NonULConfigurationr10);

	void setRadioResourceConfigCommonSCellr10NonULConfigurationr10(const RadioResourceConfigCommonSCellr10NonULConfigurationr10& radioResourceConfigCommonSCellr10NonULConfigurationr10) { *static_cast<RadioResourceConfigCommonSCellr10NonULConfigurationr10*>(items[0]) = radioResourceConfigCommonSCellr10NonULConfigurationr10; }
	void setRadioResourceConfigCommonSCellr10UlConfigurationr10(const RadioResourceConfigCommonSCellr10UlConfigurationr10& radioResourceConfigCommonSCellr10UlConfigurationr10) { *static_cast<RadioResourceConfigCommonSCellr10UlConfigurationr10*>(items[1]) = radioResourceConfigCommonSCellr10UlConfigurationr10; }

	RadioResourceConfigCommonSCellr10NonULConfigurationr10& getRadioResourceConfigCommonSCellr10NonULConfigurationr10() { return *static_cast<RadioResourceConfigCommonSCellr10NonULConfigurationr10*>(items[0]); }
	RadioResourceConfigCommonSCellr10UlConfigurationr10& getRadioResourceConfigCommonSCellr10UlConfigurationr10() { return *static_cast<RadioResourceConfigCommonSCellr10UlConfigurationr10*>(items[1]); }
};

typedef Boolean CrossCarrierSchedulingConfigr10SchedulingCellInfor10Ownr10CifPresencer10;

class CrossCarrierSchedulingConfigr10SchedulingCellInfor10Ownr10 : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CrossCarrierSchedulingConfigr10SchedulingCellInfor10Ownr10(): Sequence(&theInfo) {}
	CrossCarrierSchedulingConfigr10SchedulingCellInfor10Ownr10(const CrossCarrierSchedulingConfigr10SchedulingCellInfor10Ownr10CifPresencer10& crossCarrierSchedulingConfigr10SchedulingCellInfor10Ownr10CifPresencer10);

	void setCrossCarrierSchedulingConfigr10SchedulingCellInfor10Ownr10CifPresencer10(const CrossCarrierSchedulingConfigr10SchedulingCellInfor10Ownr10CifPresencer10& crossCarrierSchedulingConfigr10SchedulingCellInfor10Ownr10CifPresencer10) { *static_cast<CrossCarrierSchedulingConfigr10SchedulingCellInfor10Ownr10CifPresencer10*>(items[0]) = crossCarrierSchedulingConfigr10SchedulingCellInfor10Ownr10CifPresencer10; }

	CrossCarrierSchedulingConfigr10SchedulingCellInfor10Ownr10CifPresencer10& getCrossCarrierSchedulingConfigr10SchedulingCellInfor10Ownr10CifPresencer10() { return *static_cast<CrossCarrierSchedulingConfigr10SchedulingCellInfor10Ownr10CifPresencer10*>(items[0]); }
};

typedef Integer<CONSTRAINED, 0, 7> ServCellIndexr10;

typedef Integer<CONSTRAINED, 1, 4> CrossCarrierSchedulingConfigr10SchedulingCellInfor10Otherr10PdschStartr10;

class CrossCarrierSchedulingConfigr10SchedulingCellInfor10Otherr10 : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CrossCarrierSchedulingConfigr10SchedulingCellInfor10Otherr10(): Sequence(&theInfo) {}
	CrossCarrierSchedulingConfigr10SchedulingCellInfor10Otherr10(const ServCellIndexr10& schedulingCellIdr10, const CrossCarrierSchedulingConfigr10SchedulingCellInfor10Otherr10PdschStartr10& crossCarrierSchedulingConfigr10SchedulingCellInfor10Otherr10PdschStartr10);

	void setSchedulingCellIdr10(const ServCellIndexr10& schedulingCellIdr10) { *static_cast<ServCellIndexr10*>(items[0]) = schedulingCellIdr10; }
	void setCrossCarrierSchedulingConfigr10SchedulingCellInfor10Otherr10PdschStartr10(const CrossCarrierSchedulingConfigr10SchedulingCellInfor10Otherr10PdschStartr10& crossCarrierSchedulingConfigr10SchedulingCellInfor10Otherr10PdschStartr10) { *static_cast<CrossCarrierSchedulingConfigr10SchedulingCellInfor10Otherr10PdschStartr10*>(items[1]) = crossCarrierSchedulingConfigr10SchedulingCellInfor10Otherr10PdschStartr10; }

	ServCellIndexr10& getSchedulingCellIdr10() { return *static_cast<ServCellIndexr10*>(items[0]); }
	CrossCarrierSchedulingConfigr10SchedulingCellInfor10Otherr10PdschStartr10& getCrossCarrierSchedulingConfigr10SchedulingCellInfor10Otherr10PdschStartr10() { return *static_cast<CrossCarrierSchedulingConfigr10SchedulingCellInfor10Otherr10PdschStartr10*>(items[1]); }
};

class CrossCarrierSchedulingConfigr10SchedulingCellInfor10 : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum CrossCarrierSchedulingConfigr10SchedulingCellInfor10Choices {
		crossCarrierSchedulingConfigr10SchedulingCellInfor10Ownr10 = 0,
		crossCarrierSchedulingConfigr10SchedulingCellInfor10Otherr10 = 1,
	};
	static const Info theInfo;
	CrossCarrierSchedulingConfigr10SchedulingCellInfor10(): Choice(&theInfo) {}
};

class CrossCarrierSchedulingConfigr10 : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CrossCarrierSchedulingConfigr10(): Sequence(&theInfo) {}
	CrossCarrierSchedulingConfigr10(const CrossCarrierSchedulingConfigr10SchedulingCellInfor10& crossCarrierSchedulingConfigr10SchedulingCellInfor10);

	void setCrossCarrierSchedulingConfigr10SchedulingCellInfor10(const CrossCarrierSchedulingConfigr10SchedulingCellInfor10& crossCarrierSchedulingConfigr10SchedulingCellInfor10) { *static_cast<CrossCarrierSchedulingConfigr10SchedulingCellInfor10*>(items[0]) = crossCarrierSchedulingConfigr10SchedulingCellInfor10; }

	CrossCarrierSchedulingConfigr10SchedulingCellInfor10& getCrossCarrierSchedulingConfigr10SchedulingCellInfor10() { return *static_cast<CrossCarrierSchedulingConfigr10SchedulingCellInfor10*>(items[0]); }
};

class PhysicalConfigDedicatedSCellr10NonULConfigurationr10 : public Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	PhysicalConfigDedicatedSCellr10NonULConfigurationr10(): Sequence(&theInfo) {}

	void setAntennaInfor10(const AntennaInfoDedicatedr10& antennaInfor10) { *static_cast<AntennaInfoDedicatedr10*>(items[0]) = antennaInfor10; }
	void setCrossCarrierSchedulingConfigr10(const CrossCarrierSchedulingConfigr10& crossCarrierSchedulingConfigr10) { *static_cast<CrossCarrierSchedulingConfigr10*>(items[1]) = crossCarrierSchedulingConfigr10; }
	void setCsiRSConfigr10(const CSIRSConfigr10& csiRSConfigr10) { *static_cast<CSIRSConfigr10*>(items[2]) = csiRSConfigr10; }
	void setPdschConfigDedicatedr10(const PDSCHConfigDedicated& pdschConfigDedicatedr10) { *static_cast<PDSCHConfigDedicated*>(items[3]) = pdschConfigDedicatedr10; }

	AntennaInfoDedicatedr10& getAntennaInfor10() { return *static_cast<AntennaInfoDedicatedr10*>(items[0]); }
	CrossCarrierSchedulingConfigr10& getCrossCarrierSchedulingConfigr10() { return *static_cast<CrossCarrierSchedulingConfigr10*>(items[1]); }
	CSIRSConfigr10& getCsiRSConfigr10() { return *static_cast<CSIRSConfigr10*>(items[2]); }
	PDSCHConfigDedicated& getPdschConfigDedicatedr10() { return *static_cast<PDSCHConfigDedicated*>(items[3]); }
};

enum PUSCHConfigDedicatedSCellr10groupHoppingDisabled_r10Values {
	true_PUSCHConfigDedicatedSCellr10groupHoppingDisabled_r10 = 0,
};
typedef Enumerated<CONSTRAINED, 0> PUSCHConfigDedicatedSCellr10groupHoppingDisabled_r10;

enum PUSCHConfigDedicatedSCellr10dmrs_WithOCC_Activated_r10Values {
	true_PUSCHConfigDedicatedSCellr10dmrs_WithOCC_Activated_r10 = 0,
};
typedef Enumerated<CONSTRAINED, 0> PUSCHConfigDedicatedSCellr10dmrs_WithOCC_Activated_r10;

class PUSCHConfigDedicatedSCellr10 : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PUSCHConfigDedicatedSCellr10(): Sequence(&theInfo) {}

	void setPUSCHConfigDedicatedSCellr10groupHoppingDisabled_r10(const PUSCHConfigDedicatedSCellr10groupHoppingDisabled_r10& pUSCHConfigDedicatedSCellr10groupHoppingDisabled_r10) { *static_cast<PUSCHConfigDedicatedSCellr10groupHoppingDisabled_r10*>(items[0]) = pUSCHConfigDedicatedSCellr10groupHoppingDisabled_r10; }
	void setPUSCHConfigDedicatedSCellr10dmrs_WithOCC_Activated_r10(const PUSCHConfigDedicatedSCellr10dmrs_WithOCC_Activated_r10& pUSCHConfigDedicatedSCellr10dmrs_WithOCC_Activated_r10) { *static_cast<PUSCHConfigDedicatedSCellr10dmrs_WithOCC_Activated_r10*>(items[1]) = pUSCHConfigDedicatedSCellr10dmrs_WithOCC_Activated_r10; }

	PUSCHConfigDedicatedSCellr10groupHoppingDisabled_r10& getPUSCHConfigDedicatedSCellr10groupHoppingDisabled_r10() { return *static_cast<PUSCHConfigDedicatedSCellr10groupHoppingDisabled_r10*>(items[0]); }
	PUSCHConfigDedicatedSCellr10dmrs_WithOCC_Activated_r10& getPUSCHConfigDedicatedSCellr10dmrs_WithOCC_Activated_r10() { return *static_cast<PUSCHConfigDedicatedSCellr10dmrs_WithOCC_Activated_r10*>(items[1]); }
};

typedef Integer<CONSTRAINED, -8, 7> UplinkPowerControlDedicatedSCellr10P0UEPUSCHr10;

enum UplinkPowerControlDedicatedSCellr10deltaMCS_Enabled_r10Values {
	en0_UplinkPowerControlDedicatedSCellr10deltaMCS_Enabled_r10 = 0,
	en1_UplinkPowerControlDedicatedSCellr10deltaMCS_Enabled_r10 = 1,
};
typedef Enumerated<CONSTRAINED, 1> UplinkPowerControlDedicatedSCellr10deltaMCS_Enabled_r10;

typedef Boolean UplinkPowerControlDedicatedSCellr10AccumulationEnabledr10;

typedef Integer<CONSTRAINED, 0, 15> UplinkPowerControlDedicatedSCellr10PSRSOffsetr10;

typedef Integer<CONSTRAINED, 0, 15> UplinkPowerControlDedicatedSCellr10PSRSOffsetApr10;

enum UplinkPowerControlDedicatedSCellr10pathlossReferenceLinking_r10Values {
	pCell_UplinkPowerControlDedicatedSCellr10pathlossReferenceLinking_r10 = 0,
	sCell_UplinkPowerControlDedicatedSCellr10pathlossReferenceLinking_r10 = 1,
};
typedef Enumerated<CONSTRAINED, 1> UplinkPowerControlDedicatedSCellr10pathlossReferenceLinking_r10;

class UplinkPowerControlDedicatedSCellr10 : public Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	UplinkPowerControlDedicatedSCellr10(): Sequence(&theInfo) {}
	UplinkPowerControlDedicatedSCellr10(const UplinkPowerControlDedicatedSCellr10P0UEPUSCHr10& uplinkPowerControlDedicatedSCellr10P0UEPUSCHr10, const UplinkPowerControlDedicatedSCellr10deltaMCS_Enabled_r10& uplinkPowerControlDedicatedSCellr10deltaMCS_Enabled_r10, const UplinkPowerControlDedicatedSCellr10AccumulationEnabledr10& uplinkPowerControlDedicatedSCellr10AccumulationEnabledr10, const UplinkPowerControlDedicatedSCellr10PSRSOffsetr10& uplinkPowerControlDedicatedSCellr10PSRSOffsetr10, const UplinkPowerControlDedicatedSCellr10pathlossReferenceLinking_r10& uplinkPowerControlDedicatedSCellr10pathlossReferenceLinking_r10);

	void setUplinkPowerControlDedicatedSCellr10P0UEPUSCHr10(const UplinkPowerControlDedicatedSCellr10P0UEPUSCHr10& uplinkPowerControlDedicatedSCellr10P0UEPUSCHr10) { *static_cast<UplinkPowerControlDedicatedSCellr10P0UEPUSCHr10*>(items[0]) = uplinkPowerControlDedicatedSCellr10P0UEPUSCHr10; }
	void setUplinkPowerControlDedicatedSCellr10deltaMCS_Enabled_r10(const UplinkPowerControlDedicatedSCellr10deltaMCS_Enabled_r10& uplinkPowerControlDedicatedSCellr10deltaMCS_Enabled_r10) { *static_cast<UplinkPowerControlDedicatedSCellr10deltaMCS_Enabled_r10*>(items[1]) = uplinkPowerControlDedicatedSCellr10deltaMCS_Enabled_r10; }
	void setUplinkPowerControlDedicatedSCellr10AccumulationEnabledr10(const UplinkPowerControlDedicatedSCellr10AccumulationEnabledr10& uplinkPowerControlDedicatedSCellr10AccumulationEnabledr10) { *static_cast<UplinkPowerControlDedicatedSCellr10AccumulationEnabledr10*>(items[2]) = uplinkPowerControlDedicatedSCellr10AccumulationEnabledr10; }
	void setUplinkPowerControlDedicatedSCellr10PSRSOffsetr10(const UplinkPowerControlDedicatedSCellr10PSRSOffsetr10& uplinkPowerControlDedicatedSCellr10PSRSOffsetr10) { *static_cast<UplinkPowerControlDedicatedSCellr10PSRSOffsetr10*>(items[3]) = uplinkPowerControlDedicatedSCellr10PSRSOffsetr10; }
	void setUplinkPowerControlDedicatedSCellr10PSRSOffsetApr10(const UplinkPowerControlDedicatedSCellr10PSRSOffsetApr10& uplinkPowerControlDedicatedSCellr10PSRSOffsetApr10) { *static_cast<UplinkPowerControlDedicatedSCellr10PSRSOffsetApr10*>(items[4]) = uplinkPowerControlDedicatedSCellr10PSRSOffsetApr10; }
	void setFilterCoefficientr10(const FilterCoefficient& filterCoefficientr10) { *static_cast<FilterCoefficient*>(items[5]) = filterCoefficientr10; }
	void setUplinkPowerControlDedicatedSCellr10pathlossReferenceLinking_r10(const UplinkPowerControlDedicatedSCellr10pathlossReferenceLinking_r10& uplinkPowerControlDedicatedSCellr10pathlossReferenceLinking_r10) { *static_cast<UplinkPowerControlDedicatedSCellr10pathlossReferenceLinking_r10*>(items[6]) = uplinkPowerControlDedicatedSCellr10pathlossReferenceLinking_r10; }

	UplinkPowerControlDedicatedSCellr10P0UEPUSCHr10& getUplinkPowerControlDedicatedSCellr10P0UEPUSCHr10() { return *static_cast<UplinkPowerControlDedicatedSCellr10P0UEPUSCHr10*>(items[0]); }
	UplinkPowerControlDedicatedSCellr10deltaMCS_Enabled_r10& getUplinkPowerControlDedicatedSCellr10deltaMCS_Enabled_r10() { return *static_cast<UplinkPowerControlDedicatedSCellr10deltaMCS_Enabled_r10*>(items[1]); }
	UplinkPowerControlDedicatedSCellr10AccumulationEnabledr10& getUplinkPowerControlDedicatedSCellr10AccumulationEnabledr10() { return *static_cast<UplinkPowerControlDedicatedSCellr10AccumulationEnabledr10*>(items[2]); }
	UplinkPowerControlDedicatedSCellr10PSRSOffsetr10& getUplinkPowerControlDedicatedSCellr10PSRSOffsetr10() { return *static_cast<UplinkPowerControlDedicatedSCellr10PSRSOffsetr10*>(items[3]); }
	UplinkPowerControlDedicatedSCellr10PSRSOffsetApr10& getUplinkPowerControlDedicatedSCellr10PSRSOffsetApr10() { return *static_cast<UplinkPowerControlDedicatedSCellr10PSRSOffsetApr10*>(items[4]); }
	FilterCoefficient& getFilterCoefficientr10() { return *static_cast<FilterCoefficient*>(items[5]); }
	UplinkPowerControlDedicatedSCellr10pathlossReferenceLinking_r10& getUplinkPowerControlDedicatedSCellr10pathlossReferenceLinking_r10() { return *static_cast<UplinkPowerControlDedicatedSCellr10pathlossReferenceLinking_r10*>(items[6]); }
};

typedef Integer<CONSTRAINED, -1, 6> CQIReportConfigSCellr10NomPDSCHRSEPREOffsetr10;

enum CQIReportConfigSCellr10pmi_RI_Report_r10Values {
	setup_CQIReportConfigSCellr10pmi_RI_Report_r10 = 0,
};
typedef Enumerated<CONSTRAINED, 0> CQIReportConfigSCellr10pmi_RI_Report_r10;

class CQIReportConfigSCellr10 : public Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CQIReportConfigSCellr10(): Sequence(&theInfo) {}
	CQIReportConfigSCellr10(const CQIReportConfigSCellr10NomPDSCHRSEPREOffsetr10& cQIReportConfigSCellr10NomPDSCHRSEPREOffsetr10);

	void setCqiReportModeAperiodicr10(const CQIReportModeAperiodic& cqiReportModeAperiodicr10) { *static_cast<CQIReportModeAperiodic*>(items[0]) = cqiReportModeAperiodicr10; }
	void setCQIReportConfigSCellr10NomPDSCHRSEPREOffsetr10(const CQIReportConfigSCellr10NomPDSCHRSEPREOffsetr10& cQIReportConfigSCellr10NomPDSCHRSEPREOffsetr10) { *static_cast<CQIReportConfigSCellr10NomPDSCHRSEPREOffsetr10*>(items[1]) = cQIReportConfigSCellr10NomPDSCHRSEPREOffsetr10; }
	void setCqiReportPeriodicSCellr10(const CQIReportPeriodicr10& cqiReportPeriodicSCellr10) { *static_cast<CQIReportPeriodicr10*>(items[2]) = cqiReportPeriodicSCellr10; }
	void setCQIReportConfigSCellr10pmi_RI_Report_r10(const CQIReportConfigSCellr10pmi_RI_Report_r10& cQIReportConfigSCellr10pmi_RI_Report_r10) { *static_cast<CQIReportConfigSCellr10pmi_RI_Report_r10*>(items[3]) = cQIReportConfigSCellr10pmi_RI_Report_r10; }

	CQIReportModeAperiodic& getCqiReportModeAperiodicr10() { return *static_cast<CQIReportModeAperiodic*>(items[0]); }
	CQIReportConfigSCellr10NomPDSCHRSEPREOffsetr10& getCQIReportConfigSCellr10NomPDSCHRSEPREOffsetr10() { return *static_cast<CQIReportConfigSCellr10NomPDSCHRSEPREOffsetr10*>(items[1]); }
	CQIReportPeriodicr10& getCqiReportPeriodicSCellr10() { return *static_cast<CQIReportPeriodicr10*>(items[2]); }
	CQIReportConfigSCellr10pmi_RI_Report_r10& getCQIReportConfigSCellr10pmi_RI_Report_r10() { return *static_cast<CQIReportConfigSCellr10pmi_RI_Report_r10*>(items[3]); }
};

class PhysicalConfigDedicatedSCellr10UlConfigurationr10 : public Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	PhysicalConfigDedicatedSCellr10UlConfigurationr10(): Sequence(&theInfo) {}

	void setAntennaInfoULr10(const AntennaInfoULr10& antennaInfoULr10) { *static_cast<AntennaInfoULr10*>(items[0]) = antennaInfoULr10; }
	void setPuschConfigDedicatedSCellr10(const PUSCHConfigDedicatedSCellr10& puschConfigDedicatedSCellr10) { *static_cast<PUSCHConfigDedicatedSCellr10*>(items[1]) = puschConfigDedicatedSCellr10; }
	void setUplinkPowerControlDedicatedSCellr10(const UplinkPowerControlDedicatedSCellr10& uplinkPowerControlDedicatedSCellr10) { *static_cast<UplinkPowerControlDedicatedSCellr10*>(items[2]) = uplinkPowerControlDedicatedSCellr10; }
	void setCqiReportConfigSCellr10(const CQIReportConfigSCellr10& cqiReportConfigSCellr10) { *static_cast<CQIReportConfigSCellr10*>(items[3]) = cqiReportConfigSCellr10; }
	void setSoundingRSULConfigDedicatedr10(const SoundingRSULConfigDedicated& soundingRSULConfigDedicatedr10) { *static_cast<SoundingRSULConfigDedicated*>(items[4]) = soundingRSULConfigDedicatedr10; }
	void setSoundingRSULConfigDedicatedv1020(const SoundingRSULConfigDedicatedv1020& soundingRSULConfigDedicatedv1020) { *static_cast<SoundingRSULConfigDedicatedv1020*>(items[5]) = soundingRSULConfigDedicatedv1020; }
	void setSoundingRSULConfigDedicatedAperiodicr10(const SoundingRSULConfigDedicatedAperiodicr10& soundingRSULConfigDedicatedAperiodicr10) { *static_cast<SoundingRSULConfigDedicatedAperiodicr10*>(items[6]) = soundingRSULConfigDedicatedAperiodicr10; }

	AntennaInfoULr10& getAntennaInfoULr10() { return *static_cast<AntennaInfoULr10*>(items[0]); }
	PUSCHConfigDedicatedSCellr10& getPuschConfigDedicatedSCellr10() { return *static_cast<PUSCHConfigDedicatedSCellr10*>(items[1]); }
	UplinkPowerControlDedicatedSCellr10& getUplinkPowerControlDedicatedSCellr10() { return *static_cast<UplinkPowerControlDedicatedSCellr10*>(items[2]); }
	CQIReportConfigSCellr10& getCqiReportConfigSCellr10() { return *static_cast<CQIReportConfigSCellr10*>(items[3]); }
	SoundingRSULConfigDedicated& getSoundingRSULConfigDedicatedr10() { return *static_cast<SoundingRSULConfigDedicated*>(items[4]); }
	SoundingRSULConfigDedicatedv1020& getSoundingRSULConfigDedicatedv1020() { return *static_cast<SoundingRSULConfigDedicatedv1020*>(items[5]); }
	SoundingRSULConfigDedicatedAperiodicr10& getSoundingRSULConfigDedicatedAperiodicr10() { return *static_cast<SoundingRSULConfigDedicatedAperiodicr10*>(items[6]); }
};

class PhysicalConfigDedicatedSCellr10 : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PhysicalConfigDedicatedSCellr10(): Sequence(&theInfo) {}

	void setPhysicalConfigDedicatedSCellr10NonULConfigurationr10(const PhysicalConfigDedicatedSCellr10NonULConfigurationr10& physicalConfigDedicatedSCellr10NonULConfigurationr10) { *static_cast<PhysicalConfigDedicatedSCellr10NonULConfigurationr10*>(items[0]) = physicalConfigDedicatedSCellr10NonULConfigurationr10; }
	void setPhysicalConfigDedicatedSCellr10UlConfigurationr10(const PhysicalConfigDedicatedSCellr10UlConfigurationr10& physicalConfigDedicatedSCellr10UlConfigurationr10) { *static_cast<PhysicalConfigDedicatedSCellr10UlConfigurationr10*>(items[1]) = physicalConfigDedicatedSCellr10UlConfigurationr10; }

	PhysicalConfigDedicatedSCellr10NonULConfigurationr10& getPhysicalConfigDedicatedSCellr10NonULConfigurationr10() { return *static_cast<PhysicalConfigDedicatedSCellr10NonULConfigurationr10*>(items[0]); }
	PhysicalConfigDedicatedSCellr10UlConfigurationr10& getPhysicalConfigDedicatedSCellr10UlConfigurationr10() { return *static_cast<PhysicalConfigDedicatedSCellr10UlConfigurationr10*>(items[1]); }
};

class RadioResourceConfigDedicatedSCellr10 : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RadioResourceConfigDedicatedSCellr10(): Sequence(&theInfo) {}

	void setPhysicalConfigDedicatedSCellr10(const PhysicalConfigDedicatedSCellr10& physicalConfigDedicatedSCellr10) { *static_cast<PhysicalConfigDedicatedSCellr10*>(items[0]) = physicalConfigDedicatedSCellr10; }

	PhysicalConfigDedicatedSCellr10& getPhysicalConfigDedicatedSCellr10() { return *static_cast<PhysicalConfigDedicatedSCellr10*>(items[0]); }
};

class SCellToAddModr10 : public Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	SCellToAddModr10(): Sequence(&theInfo) {}
	SCellToAddModr10(const SCellIndexr10& sCellIndexr10);

	void setSCellIndexr10(const SCellIndexr10& sCellIndexr10) { *static_cast<SCellIndexr10*>(items[0]) = sCellIndexr10; }
	void setSCellToAddModr10CellIdentificationr10(const SCellToAddModr10CellIdentificationr10& sCellToAddModr10CellIdentificationr10) { *static_cast<SCellToAddModr10CellIdentificationr10*>(items[1]) = sCellToAddModr10CellIdentificationr10; }
	void setRadioResourceConfigCommonSCellr10(const RadioResourceConfigCommonSCellr10& radioResourceConfigCommonSCellr10) { *static_cast<RadioResourceConfigCommonSCellr10*>(items[2]) = radioResourceConfigCommonSCellr10; }
	void setRadioResourceConfigDedicatedSCellr10(const RadioResourceConfigDedicatedSCellr10& radioResourceConfigDedicatedSCellr10) { *static_cast<RadioResourceConfigDedicatedSCellr10*>(items[3]) = radioResourceConfigDedicatedSCellr10; }

	SCellIndexr10& getSCellIndexr10() { return *static_cast<SCellIndexr10*>(items[0]); }
	SCellToAddModr10CellIdentificationr10& getSCellToAddModr10CellIdentificationr10() { return *static_cast<SCellToAddModr10CellIdentificationr10*>(items[1]); }
	RadioResourceConfigCommonSCellr10& getRadioResourceConfigCommonSCellr10() { return *static_cast<RadioResourceConfigCommonSCellr10*>(items[2]); }
	RadioResourceConfigDedicatedSCellr10& getRadioResourceConfigDedicatedSCellr10() { return *static_cast<RadioResourceConfigDedicatedSCellr10*>(items[3]); }
};

typedef SequenceOf<SCellToAddModr10, CONSTRAINED, 1, maxSCell_r10> SCellToAddModListr10;

class RRCConnectionReconfigurationv1020IEsNonCriticalExtension : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RRCConnectionReconfigurationv1020IEsNonCriticalExtension(): Sequence(&theInfo) {}


};

class RRCConnectionReconfigurationv1020IEs : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RRCConnectionReconfigurationv1020IEs(): Sequence(&theInfo) {}

	void setSCellToReleaseListr10(const SCellToReleaseListr10& sCellToReleaseListr10) { *static_cast<SCellToReleaseListr10*>(items[0]) = sCellToReleaseListr10; }
	void setSCellToAddModListr10(const SCellToAddModListr10& sCellToAddModListr10) { *static_cast<SCellToAddModListr10*>(items[1]) = sCellToAddModListr10; }
	void setRRCConnectionReconfigurationv1020IEsNonCriticalExtension(const RRCConnectionReconfigurationv1020IEsNonCriticalExtension& rRCConnectionReconfigurationv1020IEsNonCriticalExtension) { *static_cast<RRCConnectionReconfigurationv1020IEsNonCriticalExtension*>(items[2]) = rRCConnectionReconfigurationv1020IEsNonCriticalExtension; }

	SCellToReleaseListr10& getSCellToReleaseListr10() { return *static_cast<SCellToReleaseListr10*>(items[0]); }
	SCellToAddModListr10& getSCellToAddModListr10() { return *static_cast<SCellToAddModListr10*>(items[1]); }
	RRCConnectionReconfigurationv1020IEsNonCriticalExtension& getRRCConnectionReconfigurationv1020IEsNonCriticalExtension() { return *static_cast<RRCConnectionReconfigurationv1020IEsNonCriticalExtension*>(items[2]); }
};

class RRCConnectionReconfigurationv920IEs : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RRCConnectionReconfigurationv920IEs(): Sequence(&theInfo) {}

	void setOtherConfigr9(const OtherConfigr9& otherConfigr9) { *static_cast<OtherConfigr9*>(items[0]) = otherConfigr9; }
	void setRRCConnectionReconfigurationv920IEsfullConfig_r9(const RRCConnectionReconfigurationv920IEsfullConfig_r9& rRCConnectionReconfigurationv920IEsfullConfig_r9) { *static_cast<RRCConnectionReconfigurationv920IEsfullConfig_r9*>(items[1]) = rRCConnectionReconfigurationv920IEsfullConfig_r9; }
	void setNonCriticalExtension(const RRCConnectionReconfigurationv1020IEs& nonCriticalExtension) { *static_cast<RRCConnectionReconfigurationv1020IEs*>(items[2]) = nonCriticalExtension; }

	OtherConfigr9& getOtherConfigr9() { return *static_cast<OtherConfigr9*>(items[0]); }
	RRCConnectionReconfigurationv920IEsfullConfig_r9& getRRCConnectionReconfigurationv920IEsfullConfig_r9() { return *static_cast<RRCConnectionReconfigurationv920IEsfullConfig_r9*>(items[1]); }
	RRCConnectionReconfigurationv1020IEs& getNonCriticalExtension() { return *static_cast<RRCConnectionReconfigurationv1020IEs*>(items[2]); }
};

class RRCConnectionReconfigurationv890IEs : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionReconfigurationv890IEs(): Sequence(&theInfo) {}

	void setRRCConnectionReconfigurationv890IEsLateNonCriticalExtension(const RRCConnectionReconfigurationv890IEsLateNonCriticalExtension& rRCConnectionReconfigurationv890IEsLateNonCriticalExtension) { *static_cast<RRCConnectionReconfigurationv890IEsLateNonCriticalExtension*>(items[0]) = rRCConnectionReconfigurationv890IEsLateNonCriticalExtension; }
	void setNonCriticalExtension(const RRCConnectionReconfigurationv920IEs& nonCriticalExtension) { *static_cast<RRCConnectionReconfigurationv920IEs*>(items[1]) = nonCriticalExtension; }

	RRCConnectionReconfigurationv890IEsLateNonCriticalExtension& getRRCConnectionReconfigurationv890IEsLateNonCriticalExtension() { return *static_cast<RRCConnectionReconfigurationv890IEsLateNonCriticalExtension*>(items[0]); }
	RRCConnectionReconfigurationv920IEs& getNonCriticalExtension() { return *static_cast<RRCConnectionReconfigurationv920IEs*>(items[1]); }
};

class RRCConnectionReconfigurationr8IEs : public Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	RRCConnectionReconfigurationr8IEs(): Sequence(&theInfo) {}

	void setMeasConfig(const MeasConfig& measConfig) { *static_cast<MeasConfig*>(items[0]) = measConfig; }
	void setMobilityControlInfo(const MobilityControlInfo& mobilityControlInfo) { *static_cast<MobilityControlInfo*>(items[1]) = mobilityControlInfo; }
	void setRRCConnectionReconfigurationr8IEsDedicatedInfoNASList(const RRCConnectionReconfigurationr8IEsDedicatedInfoNASList& rRCConnectionReconfigurationr8IEsDedicatedInfoNASList) { *static_cast<RRCConnectionReconfigurationr8IEsDedicatedInfoNASList*>(items[2]) = rRCConnectionReconfigurationr8IEsDedicatedInfoNASList; }
	void setRadioResourceConfigDedicated(const RadioResourceConfigDedicated& radioResourceConfigDedicated) { *static_cast<RadioResourceConfigDedicated*>(items[3]) = radioResourceConfigDedicated; }
	void setSecurityConfigHO(const SecurityConfigHO& securityConfigHO) { *static_cast<SecurityConfigHO*>(items[4]) = securityConfigHO; }
	void setNonCriticalExtension(const RRCConnectionReconfigurationv890IEs& nonCriticalExtension) { *static_cast<RRCConnectionReconfigurationv890IEs*>(items[5]) = nonCriticalExtension; }

	MeasConfig& getMeasConfig() { return *static_cast<MeasConfig*>(items[0]); }
	MobilityControlInfo& getMobilityControlInfo() { return *static_cast<MobilityControlInfo*>(items[1]); }
	RRCConnectionReconfigurationr8IEsDedicatedInfoNASList& getRRCConnectionReconfigurationr8IEsDedicatedInfoNASList() { return *static_cast<RRCConnectionReconfigurationr8IEsDedicatedInfoNASList*>(items[2]); }
	RadioResourceConfigDedicated& getRadioResourceConfigDedicated() { return *static_cast<RadioResourceConfigDedicated*>(items[3]); }
	SecurityConfigHO& getSecurityConfigHO() { return *static_cast<SecurityConfigHO*>(items[4]); }
	RRCConnectionReconfigurationv890IEs& getNonCriticalExtension() { return *static_cast<RRCConnectionReconfigurationv890IEs*>(items[5]); }
};

typedef Null RRCConnectionReconfigurationCriticalExtensionsC1Spare7;

typedef Null RRCConnectionReconfigurationCriticalExtensionsC1Spare6;

typedef Null RRCConnectionReconfigurationCriticalExtensionsC1Spare5;

typedef Null RRCConnectionReconfigurationCriticalExtensionsC1Spare4;

typedef Null RRCConnectionReconfigurationCriticalExtensionsC1Spare3;

typedef Null RRCConnectionReconfigurationCriticalExtensionsC1Spare2;

typedef Null RRCConnectionReconfigurationCriticalExtensionsC1Spare1;

class RRCConnectionReconfigurationCriticalExtensionsC1 : public Choice {
private:
	static const void *choicesInfo[8];
public:
	enum RRCConnectionReconfigurationCriticalExtensionsC1Choices {
		rrcConnectionReconfigurationr8 = 0,
		rRCConnectionReconfigurationCriticalExtensionsC1Spare7 = 1,
		rRCConnectionReconfigurationCriticalExtensionsC1Spare6 = 2,
		rRCConnectionReconfigurationCriticalExtensionsC1Spare5 = 3,
		rRCConnectionReconfigurationCriticalExtensionsC1Spare4 = 4,
		rRCConnectionReconfigurationCriticalExtensionsC1Spare3 = 5,
		rRCConnectionReconfigurationCriticalExtensionsC1Spare2 = 6,
		rRCConnectionReconfigurationCriticalExtensionsC1Spare1 = 7,
	};
	static const Info theInfo;
	RRCConnectionReconfigurationCriticalExtensionsC1(): Choice(&theInfo) {}
};

class RRCConnectionReconfigurationCriticalExtensionsCriticalExtensionsFuture : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RRCConnectionReconfigurationCriticalExtensionsCriticalExtensionsFuture(): Sequence(&theInfo) {}


};

class RRCConnectionReconfigurationCriticalExtensions : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum RRCConnectionReconfigurationCriticalExtensionsChoices {
		rRCConnectionReconfigurationCriticalExtensionsC1 = 0,
		rRCConnectionReconfigurationCriticalExtensionsCriticalExtensionsFuture = 1,
	};
	static const Info theInfo;
	RRCConnectionReconfigurationCriticalExtensions(): Choice(&theInfo) {}
};

class RRCConnectionReconfiguration : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionReconfiguration(): Sequence(&theInfo) {}
	RRCConnectionReconfiguration(const RRCTransactionIdentifier& rrcTransactionIdentifier, const RRCConnectionReconfigurationCriticalExtensions& rRCConnectionReconfigurationCriticalExtensions);

	void setRrcTransactionIdentifier(const RRCTransactionIdentifier& rrcTransactionIdentifier) { *static_cast<RRCTransactionIdentifier*>(items[0]) = rrcTransactionIdentifier; }
	void setRRCConnectionReconfigurationCriticalExtensions(const RRCConnectionReconfigurationCriticalExtensions& rRCConnectionReconfigurationCriticalExtensions) { *static_cast<RRCConnectionReconfigurationCriticalExtensions*>(items[1]) = rRCConnectionReconfigurationCriticalExtensions; }

	RRCTransactionIdentifier& getRrcTransactionIdentifier() { return *static_cast<RRCTransactionIdentifier*>(items[0]); }
	RRCConnectionReconfigurationCriticalExtensions& getRRCConnectionReconfigurationCriticalExtensions() { return *static_cast<RRCConnectionReconfigurationCriticalExtensions*>(items[1]); }
};

enum ReleaseCauseValues {
	loadBalancingTAUrequired_ReleaseCause = 0,
	other_ReleaseCause = 1,
	cs_FallbackHighPriority_v1020_ReleaseCause = 2,
	spare1_ReleaseCause = 3,
};
typedef Enumerated<CONSTRAINED, 3> ReleaseCause;

typedef SequenceOf<ARFCNValueUTRA, CONSTRAINED, 1, maxFreqUTRA_TDD_r10> CarrierFreqListUTRATDDr10;

class RedirectedCarrierInfo : public Choice {
private:
	static const void *choicesInfo[7];
public:
	enum RedirectedCarrierInfoChoices {
		eutra = 0,
		geran = 1,
		utraFDD = 2,
		utraTDD = 3,
		cdma2000HRPD = 4,
		cdma20001xRTT = 5,
		utraTDDr10 = 6,
	};
	static const Info theInfo;
	RedirectedCarrierInfo(): Choice(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 7> CellReselectionPriority;

class FreqPriorityEUTRA : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	FreqPriorityEUTRA(): Sequence(&theInfo) {}
	FreqPriorityEUTRA(const ARFCNValueEUTRA& carrierFreq, const CellReselectionPriority& cellReselectionPriority);

	void setCarrierFreq(const ARFCNValueEUTRA& carrierFreq) { *static_cast<ARFCNValueEUTRA*>(items[0]) = carrierFreq; }
	void setCellReselectionPriority(const CellReselectionPriority& cellReselectionPriority) { *static_cast<CellReselectionPriority*>(items[1]) = cellReselectionPriority; }

	ARFCNValueEUTRA& getCarrierFreq() { return *static_cast<ARFCNValueEUTRA*>(items[0]); }
	CellReselectionPriority& getCellReselectionPriority() { return *static_cast<CellReselectionPriority*>(items[1]); }
};

typedef SequenceOf<FreqPriorityEUTRA, CONSTRAINED, 1, maxFreq> FreqPriorityListEUTRA;

class FreqsPriorityGERAN : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	FreqsPriorityGERAN(): Sequence(&theInfo) {}
	FreqsPriorityGERAN(const CarrierFreqsGERAN& carrierFreqs, const CellReselectionPriority& cellReselectionPriority);

	void setCarrierFreqs(const CarrierFreqsGERAN& carrierFreqs) { *static_cast<CarrierFreqsGERAN*>(items[0]) = carrierFreqs; }
	void setCellReselectionPriority(const CellReselectionPriority& cellReselectionPriority) { *static_cast<CellReselectionPriority*>(items[1]) = cellReselectionPriority; }

	CarrierFreqsGERAN& getCarrierFreqs() { return *static_cast<CarrierFreqsGERAN*>(items[0]); }
	CellReselectionPriority& getCellReselectionPriority() { return *static_cast<CellReselectionPriority*>(items[1]); }
};

typedef SequenceOf<FreqsPriorityGERAN, CONSTRAINED, 1, maxGNFG> FreqsPriorityListGERAN;

class FreqPriorityUTRAFDD : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	FreqPriorityUTRAFDD(): Sequence(&theInfo) {}
	FreqPriorityUTRAFDD(const ARFCNValueUTRA& carrierFreq, const CellReselectionPriority& cellReselectionPriority);

	void setCarrierFreq(const ARFCNValueUTRA& carrierFreq) { *static_cast<ARFCNValueUTRA*>(items[0]) = carrierFreq; }
	void setCellReselectionPriority(const CellReselectionPriority& cellReselectionPriority) { *static_cast<CellReselectionPriority*>(items[1]) = cellReselectionPriority; }

	ARFCNValueUTRA& getCarrierFreq() { return *static_cast<ARFCNValueUTRA*>(items[0]); }
	CellReselectionPriority& getCellReselectionPriority() { return *static_cast<CellReselectionPriority*>(items[1]); }
};

typedef SequenceOf<FreqPriorityUTRAFDD, CONSTRAINED, 1, maxUTRA_FDD_Carrier> FreqPriorityListUTRAFDD;

class FreqPriorityUTRATDD : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	FreqPriorityUTRATDD(): Sequence(&theInfo) {}
	FreqPriorityUTRATDD(const ARFCNValueUTRA& carrierFreq, const CellReselectionPriority& cellReselectionPriority);

	void setCarrierFreq(const ARFCNValueUTRA& carrierFreq) { *static_cast<ARFCNValueUTRA*>(items[0]) = carrierFreq; }
	void setCellReselectionPriority(const CellReselectionPriority& cellReselectionPriority) { *static_cast<CellReselectionPriority*>(items[1]) = cellReselectionPriority; }

	ARFCNValueUTRA& getCarrierFreq() { return *static_cast<ARFCNValueUTRA*>(items[0]); }
	CellReselectionPriority& getCellReselectionPriority() { return *static_cast<CellReselectionPriority*>(items[1]); }
};

typedef SequenceOf<FreqPriorityUTRATDD, CONSTRAINED, 1, maxUTRA_TDD_Carrier> FreqPriorityListUTRATDD;

class BandClassPriorityHRPD : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	BandClassPriorityHRPD(): Sequence(&theInfo) {}
	BandClassPriorityHRPD(const BandclassCDMA2000& bandClass, const CellReselectionPriority& cellReselectionPriority);

	void setBandClass(const BandclassCDMA2000& bandClass) { *static_cast<BandclassCDMA2000*>(items[0]) = bandClass; }
	void setCellReselectionPriority(const CellReselectionPriority& cellReselectionPriority) { *static_cast<CellReselectionPriority*>(items[1]) = cellReselectionPriority; }

	BandclassCDMA2000& getBandClass() { return *static_cast<BandclassCDMA2000*>(items[0]); }
	CellReselectionPriority& getCellReselectionPriority() { return *static_cast<CellReselectionPriority*>(items[1]); }
};

typedef SequenceOf<BandClassPriorityHRPD, CONSTRAINED, 1, maxCDMA_BandClass> BandClassPriorityListHRPD;

class BandClassPriority1XRTT : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	BandClassPriority1XRTT(): Sequence(&theInfo) {}
	BandClassPriority1XRTT(const BandclassCDMA2000& bandClass, const CellReselectionPriority& cellReselectionPriority);

	void setBandClass(const BandclassCDMA2000& bandClass) { *static_cast<BandclassCDMA2000*>(items[0]) = bandClass; }
	void setCellReselectionPriority(const CellReselectionPriority& cellReselectionPriority) { *static_cast<CellReselectionPriority*>(items[1]) = cellReselectionPriority; }

	BandclassCDMA2000& getBandClass() { return *static_cast<BandclassCDMA2000*>(items[0]); }
	CellReselectionPriority& getCellReselectionPriority() { return *static_cast<CellReselectionPriority*>(items[1]); }
};

typedef SequenceOf<BandClassPriority1XRTT, CONSTRAINED, 1, maxCDMA_BandClass> BandClassPriorityList1XRTT;

enum IdleModeMobilityControlInfot320Values {
	min5_IdleModeMobilityControlInfot320 = 0,
	min10_IdleModeMobilityControlInfot320 = 1,
	min20_IdleModeMobilityControlInfot320 = 2,
	min30_IdleModeMobilityControlInfot320 = 3,
	min60_IdleModeMobilityControlInfot320 = 4,
	min120_IdleModeMobilityControlInfot320 = 5,
	min180_IdleModeMobilityControlInfot320 = 6,
	spare1_IdleModeMobilityControlInfot320 = 7,
};
typedef Enumerated<CONSTRAINED, 7> IdleModeMobilityControlInfot320;

class IdleModeMobilityControlInfo : public Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	IdleModeMobilityControlInfo(): Sequence(&theInfo) {}

	void setFreqPriorityListEUTRA(const FreqPriorityListEUTRA& freqPriorityListEUTRA) { *static_cast<FreqPriorityListEUTRA*>(items[0]) = freqPriorityListEUTRA; }
	void setFreqPriorityListGERAN(const FreqsPriorityListGERAN& freqPriorityListGERAN) { *static_cast<FreqsPriorityListGERAN*>(items[1]) = freqPriorityListGERAN; }
	void setFreqPriorityListUTRAFDD(const FreqPriorityListUTRAFDD& freqPriorityListUTRAFDD) { *static_cast<FreqPriorityListUTRAFDD*>(items[2]) = freqPriorityListUTRAFDD; }
	void setFreqPriorityListUTRATDD(const FreqPriorityListUTRATDD& freqPriorityListUTRATDD) { *static_cast<FreqPriorityListUTRATDD*>(items[3]) = freqPriorityListUTRATDD; }
	void setBandClassPriorityListHRPD(const BandClassPriorityListHRPD& bandClassPriorityListHRPD) { *static_cast<BandClassPriorityListHRPD*>(items[4]) = bandClassPriorityListHRPD; }
	void setBandClassPriorityList1XRTT(const BandClassPriorityList1XRTT& bandClassPriorityList1XRTT) { *static_cast<BandClassPriorityList1XRTT*>(items[5]) = bandClassPriorityList1XRTT; }
	void setIdleModeMobilityControlInfot320(const IdleModeMobilityControlInfot320& idleModeMobilityControlInfot320) { *static_cast<IdleModeMobilityControlInfot320*>(items[6]) = idleModeMobilityControlInfot320; }

	FreqPriorityListEUTRA& getFreqPriorityListEUTRA() { return *static_cast<FreqPriorityListEUTRA*>(items[0]); }
	FreqsPriorityListGERAN& getFreqPriorityListGERAN() { return *static_cast<FreqsPriorityListGERAN*>(items[1]); }
	FreqPriorityListUTRAFDD& getFreqPriorityListUTRAFDD() { return *static_cast<FreqPriorityListUTRAFDD*>(items[2]); }
	FreqPriorityListUTRATDD& getFreqPriorityListUTRATDD() { return *static_cast<FreqPriorityListUTRATDD*>(items[3]); }
	BandClassPriorityListHRPD& getBandClassPriorityListHRPD() { return *static_cast<BandClassPriorityListHRPD*>(items[4]); }
	BandClassPriorityList1XRTT& getBandClassPriorityList1XRTT() { return *static_cast<BandClassPriorityList1XRTT*>(items[5]); }
	IdleModeMobilityControlInfot320& getIdleModeMobilityControlInfot320() { return *static_cast<IdleModeMobilityControlInfot320*>(items[6]); }
};

typedef OctetStringBase RRCConnectionReleasev890IEsLateNonCriticalExtension;

class CellInfoGERANr9 : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	CellInfoGERANr9(): Sequence(&theInfo) {}
	CellInfoGERANr9(const PhysCellIdGERAN& physCellIdr9, const CarrierFreqGERAN& carrierFreqr9, const SystemInfoListGERAN& systemInformationr9);

	void setPhysCellIdr9(const PhysCellIdGERAN& physCellIdr9) { *static_cast<PhysCellIdGERAN*>(items[0]) = physCellIdr9; }
	void setCarrierFreqr9(const CarrierFreqGERAN& carrierFreqr9) { *static_cast<CarrierFreqGERAN*>(items[1]) = carrierFreqr9; }
	void setSystemInformationr9(const SystemInfoListGERAN& systemInformationr9) { *static_cast<SystemInfoListGERAN*>(items[2]) = systemInformationr9; }

	PhysCellIdGERAN& getPhysCellIdr9() { return *static_cast<PhysCellIdGERAN*>(items[0]); }
	CarrierFreqGERAN& getCarrierFreqr9() { return *static_cast<CarrierFreqGERAN*>(items[1]); }
	SystemInfoListGERAN& getSystemInformationr9() { return *static_cast<SystemInfoListGERAN*>(items[2]); }
};

typedef SequenceOf<CellInfoGERANr9, CONSTRAINED, 1, maxCellInfoGERAN_r9> CellInfoListGERANr9;

typedef OctetStringBase CellInfoUTRAFDDr9UtraBCCHContainerr9;

class CellInfoUTRAFDDr9 : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellInfoUTRAFDDr9(): Sequence(&theInfo) {}
	CellInfoUTRAFDDr9(const PhysCellIdUTRAFDD& physCellIdr9, const CellInfoUTRAFDDr9UtraBCCHContainerr9& cellInfoUTRAFDDr9UtraBCCHContainerr9);

	void setPhysCellIdr9(const PhysCellIdUTRAFDD& physCellIdr9) { *static_cast<PhysCellIdUTRAFDD*>(items[0]) = physCellIdr9; }
	void setCellInfoUTRAFDDr9UtraBCCHContainerr9(const CellInfoUTRAFDDr9UtraBCCHContainerr9& cellInfoUTRAFDDr9UtraBCCHContainerr9) { *static_cast<CellInfoUTRAFDDr9UtraBCCHContainerr9*>(items[1]) = cellInfoUTRAFDDr9UtraBCCHContainerr9; }

	PhysCellIdUTRAFDD& getPhysCellIdr9() { return *static_cast<PhysCellIdUTRAFDD*>(items[0]); }
	CellInfoUTRAFDDr9UtraBCCHContainerr9& getCellInfoUTRAFDDr9UtraBCCHContainerr9() { return *static_cast<CellInfoUTRAFDDr9UtraBCCHContainerr9*>(items[1]); }
};

typedef SequenceOf<CellInfoUTRAFDDr9, CONSTRAINED, 1, maxCellInfoUTRA_r9> CellInfoListUTRAFDDr9;

typedef OctetStringBase CellInfoUTRATDDr9UtraBCCHContainerr9;

class CellInfoUTRATDDr9 : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellInfoUTRATDDr9(): Sequence(&theInfo) {}
	CellInfoUTRATDDr9(const PhysCellIdUTRATDD& physCellIdr9, const CellInfoUTRATDDr9UtraBCCHContainerr9& cellInfoUTRATDDr9UtraBCCHContainerr9);

	void setPhysCellIdr9(const PhysCellIdUTRATDD& physCellIdr9) { *static_cast<PhysCellIdUTRATDD*>(items[0]) = physCellIdr9; }
	void setCellInfoUTRATDDr9UtraBCCHContainerr9(const CellInfoUTRATDDr9UtraBCCHContainerr9& cellInfoUTRATDDr9UtraBCCHContainerr9) { *static_cast<CellInfoUTRATDDr9UtraBCCHContainerr9*>(items[1]) = cellInfoUTRATDDr9UtraBCCHContainerr9; }

	PhysCellIdUTRATDD& getPhysCellIdr9() { return *static_cast<PhysCellIdUTRATDD*>(items[0]); }
	CellInfoUTRATDDr9UtraBCCHContainerr9& getCellInfoUTRATDDr9UtraBCCHContainerr9() { return *static_cast<CellInfoUTRATDDr9UtraBCCHContainerr9*>(items[1]); }
};

typedef SequenceOf<CellInfoUTRATDDr9, CONSTRAINED, 1, maxCellInfoUTRA_r9> CellInfoListUTRATDDr9;

typedef OctetStringBase CellInfoUTRATDDr10UtraBCCHContainerr10;

class CellInfoUTRATDDr10 : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	CellInfoUTRATDDr10(): Sequence(&theInfo) {}
	CellInfoUTRATDDr10(const PhysCellIdUTRATDD& physCellIdr10, const ARFCNValueUTRA& carrierFreqr10, const CellInfoUTRATDDr10UtraBCCHContainerr10& cellInfoUTRATDDr10UtraBCCHContainerr10);

	void setPhysCellIdr10(const PhysCellIdUTRATDD& physCellIdr10) { *static_cast<PhysCellIdUTRATDD*>(items[0]) = physCellIdr10; }
	void setCarrierFreqr10(const ARFCNValueUTRA& carrierFreqr10) { *static_cast<ARFCNValueUTRA*>(items[1]) = carrierFreqr10; }
	void setCellInfoUTRATDDr10UtraBCCHContainerr10(const CellInfoUTRATDDr10UtraBCCHContainerr10& cellInfoUTRATDDr10UtraBCCHContainerr10) { *static_cast<CellInfoUTRATDDr10UtraBCCHContainerr10*>(items[2]) = cellInfoUTRATDDr10UtraBCCHContainerr10; }

	PhysCellIdUTRATDD& getPhysCellIdr10() { return *static_cast<PhysCellIdUTRATDD*>(items[0]); }
	ARFCNValueUTRA& getCarrierFreqr10() { return *static_cast<ARFCNValueUTRA*>(items[1]); }
	CellInfoUTRATDDr10UtraBCCHContainerr10& getCellInfoUTRATDDr10UtraBCCHContainerr10() { return *static_cast<CellInfoUTRATDDr10UtraBCCHContainerr10*>(items[2]); }
};

typedef SequenceOf<CellInfoUTRATDDr10, CONSTRAINED, 1, maxCellInfoUTRA_r9> CellInfoListUTRATDDr10;

class RRCConnectionReleasev920IEsCellInfoListr9 : public Choice {
private:
	static const void *choicesInfo[4];
public:
	enum RRCConnectionReleasev920IEsCellInfoListr9Choices {
		geranr9 = 0,
		utraFDDr9 = 1,
		utraTDDr9 = 2,
		utraTDDr10 = 3,
	};
	static const Info theInfo;
	RRCConnectionReleasev920IEsCellInfoListr9(): Choice(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 1800> RRCConnectionReleasev1020IEsExtendedWaitTimer10;

class RRCConnectionReleasev1020IEsNonCriticalExtension : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RRCConnectionReleasev1020IEsNonCriticalExtension(): Sequence(&theInfo) {}


};

class RRCConnectionReleasev1020IEs : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionReleasev1020IEs(): Sequence(&theInfo) {}

	void setRRCConnectionReleasev1020IEsExtendedWaitTimer10(const RRCConnectionReleasev1020IEsExtendedWaitTimer10& rRCConnectionReleasev1020IEsExtendedWaitTimer10) { *static_cast<RRCConnectionReleasev1020IEsExtendedWaitTimer10*>(items[0]) = rRCConnectionReleasev1020IEsExtendedWaitTimer10; }
	void setRRCConnectionReleasev1020IEsNonCriticalExtension(const RRCConnectionReleasev1020IEsNonCriticalExtension& rRCConnectionReleasev1020IEsNonCriticalExtension) { *static_cast<RRCConnectionReleasev1020IEsNonCriticalExtension*>(items[1]) = rRCConnectionReleasev1020IEsNonCriticalExtension; }

	RRCConnectionReleasev1020IEsExtendedWaitTimer10& getRRCConnectionReleasev1020IEsExtendedWaitTimer10() { return *static_cast<RRCConnectionReleasev1020IEsExtendedWaitTimer10*>(items[0]); }
	RRCConnectionReleasev1020IEsNonCriticalExtension& getRRCConnectionReleasev1020IEsNonCriticalExtension() { return *static_cast<RRCConnectionReleasev1020IEsNonCriticalExtension*>(items[1]); }
};

class RRCConnectionReleasev920IEs : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionReleasev920IEs(): Sequence(&theInfo) {}

	void setRRCConnectionReleasev920IEsCellInfoListr9(const RRCConnectionReleasev920IEsCellInfoListr9& rRCConnectionReleasev920IEsCellInfoListr9) { *static_cast<RRCConnectionReleasev920IEsCellInfoListr9*>(items[0]) = rRCConnectionReleasev920IEsCellInfoListr9; }
	void setNonCriticalExtension(const RRCConnectionReleasev1020IEs& nonCriticalExtension) { *static_cast<RRCConnectionReleasev1020IEs*>(items[1]) = nonCriticalExtension; }

	RRCConnectionReleasev920IEsCellInfoListr9& getRRCConnectionReleasev920IEsCellInfoListr9() { return *static_cast<RRCConnectionReleasev920IEsCellInfoListr9*>(items[0]); }
	RRCConnectionReleasev1020IEs& getNonCriticalExtension() { return *static_cast<RRCConnectionReleasev1020IEs*>(items[1]); }
};

class RRCConnectionReleasev890IEs : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionReleasev890IEs(): Sequence(&theInfo) {}

	void setRRCConnectionReleasev890IEsLateNonCriticalExtension(const RRCConnectionReleasev890IEsLateNonCriticalExtension& rRCConnectionReleasev890IEsLateNonCriticalExtension) { *static_cast<RRCConnectionReleasev890IEsLateNonCriticalExtension*>(items[0]) = rRCConnectionReleasev890IEsLateNonCriticalExtension; }
	void setNonCriticalExtension(const RRCConnectionReleasev920IEs& nonCriticalExtension) { *static_cast<RRCConnectionReleasev920IEs*>(items[1]) = nonCriticalExtension; }

	RRCConnectionReleasev890IEsLateNonCriticalExtension& getRRCConnectionReleasev890IEsLateNonCriticalExtension() { return *static_cast<RRCConnectionReleasev890IEsLateNonCriticalExtension*>(items[0]); }
	RRCConnectionReleasev920IEs& getNonCriticalExtension() { return *static_cast<RRCConnectionReleasev920IEs*>(items[1]); }
};

class RRCConnectionReleaser8IEs : public Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	RRCConnectionReleaser8IEs(): Sequence(&theInfo) {}
	RRCConnectionReleaser8IEs(const ReleaseCause& releaseCause);

	void setReleaseCause(const ReleaseCause& releaseCause) { *static_cast<ReleaseCause*>(items[0]) = releaseCause; }
	void setRedirectedCarrierInfo(const RedirectedCarrierInfo& redirectedCarrierInfo) { *static_cast<RedirectedCarrierInfo*>(items[1]) = redirectedCarrierInfo; }
	void setIdleModeMobilityControlInfo(const IdleModeMobilityControlInfo& idleModeMobilityControlInfo) { *static_cast<IdleModeMobilityControlInfo*>(items[2]) = idleModeMobilityControlInfo; }
	void setNonCriticalExtension(const RRCConnectionReleasev890IEs& nonCriticalExtension) { *static_cast<RRCConnectionReleasev890IEs*>(items[3]) = nonCriticalExtension; }

	ReleaseCause& getReleaseCause() { return *static_cast<ReleaseCause*>(items[0]); }
	RedirectedCarrierInfo& getRedirectedCarrierInfo() { return *static_cast<RedirectedCarrierInfo*>(items[1]); }
	IdleModeMobilityControlInfo& getIdleModeMobilityControlInfo() { return *static_cast<IdleModeMobilityControlInfo*>(items[2]); }
	RRCConnectionReleasev890IEs& getNonCriticalExtension() { return *static_cast<RRCConnectionReleasev890IEs*>(items[3]); }
};

typedef Null RRCConnectionReleaseCriticalExtensionsC1Spare3;

typedef Null RRCConnectionReleaseCriticalExtensionsC1Spare2;

typedef Null RRCConnectionReleaseCriticalExtensionsC1Spare1;

class RRCConnectionReleaseCriticalExtensionsC1 : public Choice {
private:
	static const void *choicesInfo[4];
public:
	enum RRCConnectionReleaseCriticalExtensionsC1Choices {
		rrcConnectionReleaser8 = 0,
		rRCConnectionReleaseCriticalExtensionsC1Spare3 = 1,
		rRCConnectionReleaseCriticalExtensionsC1Spare2 = 2,
		rRCConnectionReleaseCriticalExtensionsC1Spare1 = 3,
	};
	static const Info theInfo;
	RRCConnectionReleaseCriticalExtensionsC1(): Choice(&theInfo) {}
};

class RRCConnectionReleaseCriticalExtensionsCriticalExtensionsFuture : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RRCConnectionReleaseCriticalExtensionsCriticalExtensionsFuture(): Sequence(&theInfo) {}


};

class RRCConnectionReleaseCriticalExtensions : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum RRCConnectionReleaseCriticalExtensionsChoices {
		rRCConnectionReleaseCriticalExtensionsC1 = 0,
		rRCConnectionReleaseCriticalExtensionsCriticalExtensionsFuture = 1,
	};
	static const Info theInfo;
	RRCConnectionReleaseCriticalExtensions(): Choice(&theInfo) {}
};

class RRCConnectionRelease : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionRelease(): Sequence(&theInfo) {}
	RRCConnectionRelease(const RRCTransactionIdentifier& rrcTransactionIdentifier, const RRCConnectionReleaseCriticalExtensions& rRCConnectionReleaseCriticalExtensions);

	void setRrcTransactionIdentifier(const RRCTransactionIdentifier& rrcTransactionIdentifier) { *static_cast<RRCTransactionIdentifier*>(items[0]) = rrcTransactionIdentifier; }
	void setRRCConnectionReleaseCriticalExtensions(const RRCConnectionReleaseCriticalExtensions& rRCConnectionReleaseCriticalExtensions) { *static_cast<RRCConnectionReleaseCriticalExtensions*>(items[1]) = rRCConnectionReleaseCriticalExtensions; }

	RRCTransactionIdentifier& getRrcTransactionIdentifier() { return *static_cast<RRCTransactionIdentifier*>(items[0]); }
	RRCConnectionReleaseCriticalExtensions& getRRCConnectionReleaseCriticalExtensions() { return *static_cast<RRCConnectionReleaseCriticalExtensions*>(items[1]); }
};

class SecurityConfigSMC : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SecurityConfigSMC(): Sequence(&theInfo) {}
	SecurityConfigSMC(const SecurityAlgorithmConfig& securityAlgorithmConfig);

	void setSecurityAlgorithmConfig(const SecurityAlgorithmConfig& securityAlgorithmConfig) { *static_cast<SecurityAlgorithmConfig*>(items[0]) = securityAlgorithmConfig; }

	SecurityAlgorithmConfig& getSecurityAlgorithmConfig() { return *static_cast<SecurityAlgorithmConfig*>(items[0]); }
};

typedef OctetStringBase SecurityModeCommandv8a0IEsLateNonCriticalExtension;

class SecurityModeCommandv8a0IEsNonCriticalExtension : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	SecurityModeCommandv8a0IEsNonCriticalExtension(): Sequence(&theInfo) {}


};

class SecurityModeCommandv8a0IEs : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SecurityModeCommandv8a0IEs(): Sequence(&theInfo) {}

	void setSecurityModeCommandv8a0IEsLateNonCriticalExtension(const SecurityModeCommandv8a0IEsLateNonCriticalExtension& securityModeCommandv8a0IEsLateNonCriticalExtension) { *static_cast<SecurityModeCommandv8a0IEsLateNonCriticalExtension*>(items[0]) = securityModeCommandv8a0IEsLateNonCriticalExtension; }
	void setSecurityModeCommandv8a0IEsNonCriticalExtension(const SecurityModeCommandv8a0IEsNonCriticalExtension& securityModeCommandv8a0IEsNonCriticalExtension) { *static_cast<SecurityModeCommandv8a0IEsNonCriticalExtension*>(items[1]) = securityModeCommandv8a0IEsNonCriticalExtension; }

	SecurityModeCommandv8a0IEsLateNonCriticalExtension& getSecurityModeCommandv8a0IEsLateNonCriticalExtension() { return *static_cast<SecurityModeCommandv8a0IEsLateNonCriticalExtension*>(items[0]); }
	SecurityModeCommandv8a0IEsNonCriticalExtension& getSecurityModeCommandv8a0IEsNonCriticalExtension() { return *static_cast<SecurityModeCommandv8a0IEsNonCriticalExtension*>(items[1]); }
};

class SecurityModeCommandr8IEs : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SecurityModeCommandr8IEs(): Sequence(&theInfo) {}
	SecurityModeCommandr8IEs(const SecurityConfigSMC& securityConfigSMC);

	void setSecurityConfigSMC(const SecurityConfigSMC& securityConfigSMC) { *static_cast<SecurityConfigSMC*>(items[0]) = securityConfigSMC; }
	void setNonCriticalExtension(const SecurityModeCommandv8a0IEs& nonCriticalExtension) { *static_cast<SecurityModeCommandv8a0IEs*>(items[1]) = nonCriticalExtension; }

	SecurityConfigSMC& getSecurityConfigSMC() { return *static_cast<SecurityConfigSMC*>(items[0]); }
	SecurityModeCommandv8a0IEs& getNonCriticalExtension() { return *static_cast<SecurityModeCommandv8a0IEs*>(items[1]); }
};

typedef Null SecurityModeCommandCriticalExtensionsC1Spare3;

typedef Null SecurityModeCommandCriticalExtensionsC1Spare2;

typedef Null SecurityModeCommandCriticalExtensionsC1Spare1;

class SecurityModeCommandCriticalExtensionsC1 : public Choice {
private:
	static const void *choicesInfo[4];
public:
	enum SecurityModeCommandCriticalExtensionsC1Choices {
		securityModeCommandr8 = 0,
		securityModeCommandCriticalExtensionsC1Spare3 = 1,
		securityModeCommandCriticalExtensionsC1Spare2 = 2,
		securityModeCommandCriticalExtensionsC1Spare1 = 3,
	};
	static const Info theInfo;
	SecurityModeCommandCriticalExtensionsC1(): Choice(&theInfo) {}
};

class SecurityModeCommandCriticalExtensionsCriticalExtensionsFuture : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	SecurityModeCommandCriticalExtensionsCriticalExtensionsFuture(): Sequence(&theInfo) {}


};

class SecurityModeCommandCriticalExtensions : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum SecurityModeCommandCriticalExtensionsChoices {
		securityModeCommandCriticalExtensionsC1 = 0,
		securityModeCommandCriticalExtensionsCriticalExtensionsFuture = 1,
	};
	static const Info theInfo;
	SecurityModeCommandCriticalExtensions(): Choice(&theInfo) {}
};

class SecurityModeCommand : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SecurityModeCommand(): Sequence(&theInfo) {}
	SecurityModeCommand(const RRCTransactionIdentifier& rrcTransactionIdentifier, const SecurityModeCommandCriticalExtensions& securityModeCommandCriticalExtensions);

	void setRrcTransactionIdentifier(const RRCTransactionIdentifier& rrcTransactionIdentifier) { *static_cast<RRCTransactionIdentifier*>(items[0]) = rrcTransactionIdentifier; }
	void setSecurityModeCommandCriticalExtensions(const SecurityModeCommandCriticalExtensions& securityModeCommandCriticalExtensions) { *static_cast<SecurityModeCommandCriticalExtensions*>(items[1]) = securityModeCommandCriticalExtensions; }

	RRCTransactionIdentifier& getRrcTransactionIdentifier() { return *static_cast<RRCTransactionIdentifier*>(items[0]); }
	SecurityModeCommandCriticalExtensions& getSecurityModeCommandCriticalExtensions() { return *static_cast<SecurityModeCommandCriticalExtensions*>(items[1]); }
};

enum RATTypeValues {
	eutra_RATType = 0,
	utra_RATType = 1,
	geran_cs_RATType = 2,
	geran_ps_RATType = 3,
	cdma2000_1XRTT_RATType = 4,
	spare3_RATType = 5,
	spare2_RATType = 6,
	spare1_RATType = 7,
};
typedef Enumerated<EXTCONSTRAINED, 7> RATType;

typedef SequenceOf<RATType, CONSTRAINED, 1, maxRAT_Capabilities> UECapabilityRequest;

typedef OctetStringBase UECapabilityEnquiryv8a0IEsLateNonCriticalExtension;

class UECapabilityEnquiryv8a0IEsNonCriticalExtension : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	UECapabilityEnquiryv8a0IEsNonCriticalExtension(): Sequence(&theInfo) {}


};

class UECapabilityEnquiryv8a0IEs : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UECapabilityEnquiryv8a0IEs(): Sequence(&theInfo) {}

	void setUECapabilityEnquiryv8a0IEsLateNonCriticalExtension(const UECapabilityEnquiryv8a0IEsLateNonCriticalExtension& uECapabilityEnquiryv8a0IEsLateNonCriticalExtension) { *static_cast<UECapabilityEnquiryv8a0IEsLateNonCriticalExtension*>(items[0]) = uECapabilityEnquiryv8a0IEsLateNonCriticalExtension; }
	void setUECapabilityEnquiryv8a0IEsNonCriticalExtension(const UECapabilityEnquiryv8a0IEsNonCriticalExtension& uECapabilityEnquiryv8a0IEsNonCriticalExtension) { *static_cast<UECapabilityEnquiryv8a0IEsNonCriticalExtension*>(items[1]) = uECapabilityEnquiryv8a0IEsNonCriticalExtension; }

	UECapabilityEnquiryv8a0IEsLateNonCriticalExtension& getUECapabilityEnquiryv8a0IEsLateNonCriticalExtension() { return *static_cast<UECapabilityEnquiryv8a0IEsLateNonCriticalExtension*>(items[0]); }
	UECapabilityEnquiryv8a0IEsNonCriticalExtension& getUECapabilityEnquiryv8a0IEsNonCriticalExtension() { return *static_cast<UECapabilityEnquiryv8a0IEsNonCriticalExtension*>(items[1]); }
};

class UECapabilityEnquiryr8IEs : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UECapabilityEnquiryr8IEs(): Sequence(&theInfo) {}
	UECapabilityEnquiryr8IEs(const UECapabilityRequest& ueCapabilityRequest);

	void setUeCapabilityRequest(const UECapabilityRequest& ueCapabilityRequest) { *static_cast<UECapabilityRequest*>(items[0]) = ueCapabilityRequest; }
	void setNonCriticalExtension(const UECapabilityEnquiryv8a0IEs& nonCriticalExtension) { *static_cast<UECapabilityEnquiryv8a0IEs*>(items[1]) = nonCriticalExtension; }

	UECapabilityRequest& getUeCapabilityRequest() { return *static_cast<UECapabilityRequest*>(items[0]); }
	UECapabilityEnquiryv8a0IEs& getNonCriticalExtension() { return *static_cast<UECapabilityEnquiryv8a0IEs*>(items[1]); }
};

typedef Null UECapabilityEnquiryCriticalExtensionsC1Spare3;

typedef Null UECapabilityEnquiryCriticalExtensionsC1Spare2;

typedef Null UECapabilityEnquiryCriticalExtensionsC1Spare1;

class UECapabilityEnquiryCriticalExtensionsC1 : public Choice {
private:
	static const void *choicesInfo[4];
public:
	enum UECapabilityEnquiryCriticalExtensionsC1Choices {
		ueCapabilityEnquiryr8 = 0,
		uECapabilityEnquiryCriticalExtensionsC1Spare3 = 1,
		uECapabilityEnquiryCriticalExtensionsC1Spare2 = 2,
		uECapabilityEnquiryCriticalExtensionsC1Spare1 = 3,
	};
	static const Info theInfo;
	UECapabilityEnquiryCriticalExtensionsC1(): Choice(&theInfo) {}
};

class UECapabilityEnquiryCriticalExtensionsCriticalExtensionsFuture : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	UECapabilityEnquiryCriticalExtensionsCriticalExtensionsFuture(): Sequence(&theInfo) {}


};

class UECapabilityEnquiryCriticalExtensions : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum UECapabilityEnquiryCriticalExtensionsChoices {
		uECapabilityEnquiryCriticalExtensionsC1 = 0,
		uECapabilityEnquiryCriticalExtensionsCriticalExtensionsFuture = 1,
	};
	static const Info theInfo;
	UECapabilityEnquiryCriticalExtensions(): Choice(&theInfo) {}
};

class UECapabilityEnquiry : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UECapabilityEnquiry(): Sequence(&theInfo) {}
	UECapabilityEnquiry(const RRCTransactionIdentifier& rrcTransactionIdentifier, const UECapabilityEnquiryCriticalExtensions& uECapabilityEnquiryCriticalExtensions);

	void setRrcTransactionIdentifier(const RRCTransactionIdentifier& rrcTransactionIdentifier) { *static_cast<RRCTransactionIdentifier*>(items[0]) = rrcTransactionIdentifier; }
	void setUECapabilityEnquiryCriticalExtensions(const UECapabilityEnquiryCriticalExtensions& uECapabilityEnquiryCriticalExtensions) { *static_cast<UECapabilityEnquiryCriticalExtensions*>(items[1]) = uECapabilityEnquiryCriticalExtensions; }

	RRCTransactionIdentifier& getRrcTransactionIdentifier() { return *static_cast<RRCTransactionIdentifier*>(items[0]); }
	UECapabilityEnquiryCriticalExtensions& getUECapabilityEnquiryCriticalExtensions() { return *static_cast<UECapabilityEnquiryCriticalExtensions*>(items[1]); }
};

typedef Integer<CONSTRAINED, 0, 33554431> DRBCountMSBInfoCountMSBUplink;

typedef Integer<CONSTRAINED, 0, 33554431> DRBCountMSBInfoCountMSBDownlink;

class DRBCountMSBInfo : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DRBCountMSBInfo(): Sequence(&theInfo) {}
	DRBCountMSBInfo(const DRBIdentity& drbIdentity, const DRBCountMSBInfoCountMSBUplink& dRBCountMSBInfoCountMSBUplink, const DRBCountMSBInfoCountMSBDownlink& dRBCountMSBInfoCountMSBDownlink);

	void setDrbIdentity(const DRBIdentity& drbIdentity) { *static_cast<DRBIdentity*>(items[0]) = drbIdentity; }
	void setDRBCountMSBInfoCountMSBUplink(const DRBCountMSBInfoCountMSBUplink& dRBCountMSBInfoCountMSBUplink) { *static_cast<DRBCountMSBInfoCountMSBUplink*>(items[1]) = dRBCountMSBInfoCountMSBUplink; }
	void setDRBCountMSBInfoCountMSBDownlink(const DRBCountMSBInfoCountMSBDownlink& dRBCountMSBInfoCountMSBDownlink) { *static_cast<DRBCountMSBInfoCountMSBDownlink*>(items[2]) = dRBCountMSBInfoCountMSBDownlink; }

	DRBIdentity& getDrbIdentity() { return *static_cast<DRBIdentity*>(items[0]); }
	DRBCountMSBInfoCountMSBUplink& getDRBCountMSBInfoCountMSBUplink() { return *static_cast<DRBCountMSBInfoCountMSBUplink*>(items[1]); }
	DRBCountMSBInfoCountMSBDownlink& getDRBCountMSBInfoCountMSBDownlink() { return *static_cast<DRBCountMSBInfoCountMSBDownlink*>(items[2]); }
};

typedef SequenceOf<DRBCountMSBInfo, CONSTRAINED, 1, maxDRB> DRBCountMSBInfoList;

typedef OctetStringBase CounterCheckv8a0IEsLateNonCriticalExtension;

class CounterCheckv8a0IEsNonCriticalExtension : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	CounterCheckv8a0IEsNonCriticalExtension(): Sequence(&theInfo) {}


};

class CounterCheckv8a0IEs : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CounterCheckv8a0IEs(): Sequence(&theInfo) {}

	void setCounterCheckv8a0IEsLateNonCriticalExtension(const CounterCheckv8a0IEsLateNonCriticalExtension& counterCheckv8a0IEsLateNonCriticalExtension) { *static_cast<CounterCheckv8a0IEsLateNonCriticalExtension*>(items[0]) = counterCheckv8a0IEsLateNonCriticalExtension; }
	void setCounterCheckv8a0IEsNonCriticalExtension(const CounterCheckv8a0IEsNonCriticalExtension& counterCheckv8a0IEsNonCriticalExtension) { *static_cast<CounterCheckv8a0IEsNonCriticalExtension*>(items[1]) = counterCheckv8a0IEsNonCriticalExtension; }

	CounterCheckv8a0IEsLateNonCriticalExtension& getCounterCheckv8a0IEsLateNonCriticalExtension() { return *static_cast<CounterCheckv8a0IEsLateNonCriticalExtension*>(items[0]); }
	CounterCheckv8a0IEsNonCriticalExtension& getCounterCheckv8a0IEsNonCriticalExtension() { return *static_cast<CounterCheckv8a0IEsNonCriticalExtension*>(items[1]); }
};

class CounterCheckr8IEs : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CounterCheckr8IEs(): Sequence(&theInfo) {}
	CounterCheckr8IEs(const DRBCountMSBInfoList& drbCountMSBInfoList);

	void setDrbCountMSBInfoList(const DRBCountMSBInfoList& drbCountMSBInfoList) { *static_cast<DRBCountMSBInfoList*>(items[0]) = drbCountMSBInfoList; }
	void setNonCriticalExtension(const CounterCheckv8a0IEs& nonCriticalExtension) { *static_cast<CounterCheckv8a0IEs*>(items[1]) = nonCriticalExtension; }

	DRBCountMSBInfoList& getDrbCountMSBInfoList() { return *static_cast<DRBCountMSBInfoList*>(items[0]); }
	CounterCheckv8a0IEs& getNonCriticalExtension() { return *static_cast<CounterCheckv8a0IEs*>(items[1]); }
};

typedef Null CounterCheckCriticalExtensionsC1Spare3;

typedef Null CounterCheckCriticalExtensionsC1Spare2;

typedef Null CounterCheckCriticalExtensionsC1Spare1;

class CounterCheckCriticalExtensionsC1 : public Choice {
private:
	static const void *choicesInfo[4];
public:
	enum CounterCheckCriticalExtensionsC1Choices {
		counterCheckr8 = 0,
		counterCheckCriticalExtensionsC1Spare3 = 1,
		counterCheckCriticalExtensionsC1Spare2 = 2,
		counterCheckCriticalExtensionsC1Spare1 = 3,
	};
	static const Info theInfo;
	CounterCheckCriticalExtensionsC1(): Choice(&theInfo) {}
};

class CounterCheckCriticalExtensionsCriticalExtensionsFuture : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	CounterCheckCriticalExtensionsCriticalExtensionsFuture(): Sequence(&theInfo) {}


};

class CounterCheckCriticalExtensions : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum CounterCheckCriticalExtensionsChoices {
		counterCheckCriticalExtensionsC1 = 0,
		counterCheckCriticalExtensionsCriticalExtensionsFuture = 1,
	};
	static const Info theInfo;
	CounterCheckCriticalExtensions(): Choice(&theInfo) {}
};

class CounterCheck : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CounterCheck(): Sequence(&theInfo) {}
	CounterCheck(const RRCTransactionIdentifier& rrcTransactionIdentifier, const CounterCheckCriticalExtensions& counterCheckCriticalExtensions);

	void setRrcTransactionIdentifier(const RRCTransactionIdentifier& rrcTransactionIdentifier) { *static_cast<RRCTransactionIdentifier*>(items[0]) = rrcTransactionIdentifier; }
	void setCounterCheckCriticalExtensions(const CounterCheckCriticalExtensions& counterCheckCriticalExtensions) { *static_cast<CounterCheckCriticalExtensions*>(items[1]) = counterCheckCriticalExtensions; }

	RRCTransactionIdentifier& getRrcTransactionIdentifier() { return *static_cast<RRCTransactionIdentifier*>(items[0]); }
	CounterCheckCriticalExtensions& getCounterCheckCriticalExtensions() { return *static_cast<CounterCheckCriticalExtensions*>(items[1]); }
};

typedef Boolean UEInformationRequestr9IEsRachReportReqr9;

typedef Boolean UEInformationRequestr9IEsRlfReportReqr9;

typedef OctetStringBase UEInformationRequestv930IEsLateNonCriticalExtension;

enum UEInformationRequestv1020IEslogMeasReportReq_r10Values {
	true_UEInformationRequestv1020IEslogMeasReportReq_r10 = 0,
};
typedef Enumerated<CONSTRAINED, 0> UEInformationRequestv1020IEslogMeasReportReq_r10;

class UEInformationRequestv1020IEsNonCriticalExtension : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	UEInformationRequestv1020IEsNonCriticalExtension(): Sequence(&theInfo) {}


};

class UEInformationRequestv1020IEs : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UEInformationRequestv1020IEs(): Sequence(&theInfo) {}

	void setUEInformationRequestv1020IEslogMeasReportReq_r10(const UEInformationRequestv1020IEslogMeasReportReq_r10& uEInformationRequestv1020IEslogMeasReportReq_r10) { *static_cast<UEInformationRequestv1020IEslogMeasReportReq_r10*>(items[0]) = uEInformationRequestv1020IEslogMeasReportReq_r10; }
	void setUEInformationRequestv1020IEsNonCriticalExtension(const UEInformationRequestv1020IEsNonCriticalExtension& uEInformationRequestv1020IEsNonCriticalExtension) { *static_cast<UEInformationRequestv1020IEsNonCriticalExtension*>(items[1]) = uEInformationRequestv1020IEsNonCriticalExtension; }

	UEInformationRequestv1020IEslogMeasReportReq_r10& getUEInformationRequestv1020IEslogMeasReportReq_r10() { return *static_cast<UEInformationRequestv1020IEslogMeasReportReq_r10*>(items[0]); }
	UEInformationRequestv1020IEsNonCriticalExtension& getUEInformationRequestv1020IEsNonCriticalExtension() { return *static_cast<UEInformationRequestv1020IEsNonCriticalExtension*>(items[1]); }
};

class UEInformationRequestv930IEs : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UEInformationRequestv930IEs(): Sequence(&theInfo) {}

	void setUEInformationRequestv930IEsLateNonCriticalExtension(const UEInformationRequestv930IEsLateNonCriticalExtension& uEInformationRequestv930IEsLateNonCriticalExtension) { *static_cast<UEInformationRequestv930IEsLateNonCriticalExtension*>(items[0]) = uEInformationRequestv930IEsLateNonCriticalExtension; }
	void setNonCriticalExtension(const UEInformationRequestv1020IEs& nonCriticalExtension) { *static_cast<UEInformationRequestv1020IEs*>(items[1]) = nonCriticalExtension; }

	UEInformationRequestv930IEsLateNonCriticalExtension& getUEInformationRequestv930IEsLateNonCriticalExtension() { return *static_cast<UEInformationRequestv930IEsLateNonCriticalExtension*>(items[0]); }
	UEInformationRequestv1020IEs& getNonCriticalExtension() { return *static_cast<UEInformationRequestv1020IEs*>(items[1]); }
};

class UEInformationRequestr9IEs : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	UEInformationRequestr9IEs(): Sequence(&theInfo) {}
	UEInformationRequestr9IEs(const UEInformationRequestr9IEsRachReportReqr9& uEInformationRequestr9IEsRachReportReqr9, const UEInformationRequestr9IEsRlfReportReqr9& uEInformationRequestr9IEsRlfReportReqr9);

	void setUEInformationRequestr9IEsRachReportReqr9(const UEInformationRequestr9IEsRachReportReqr9& uEInformationRequestr9IEsRachReportReqr9) { *static_cast<UEInformationRequestr9IEsRachReportReqr9*>(items[0]) = uEInformationRequestr9IEsRachReportReqr9; }
	void setUEInformationRequestr9IEsRlfReportReqr9(const UEInformationRequestr9IEsRlfReportReqr9& uEInformationRequestr9IEsRlfReportReqr9) { *static_cast<UEInformationRequestr9IEsRlfReportReqr9*>(items[1]) = uEInformationRequestr9IEsRlfReportReqr9; }
	void setNonCriticalExtension(const UEInformationRequestv930IEs& nonCriticalExtension) { *static_cast<UEInformationRequestv930IEs*>(items[2]) = nonCriticalExtension; }

	UEInformationRequestr9IEsRachReportReqr9& getUEInformationRequestr9IEsRachReportReqr9() { return *static_cast<UEInformationRequestr9IEsRachReportReqr9*>(items[0]); }
	UEInformationRequestr9IEsRlfReportReqr9& getUEInformationRequestr9IEsRlfReportReqr9() { return *static_cast<UEInformationRequestr9IEsRlfReportReqr9*>(items[1]); }
	UEInformationRequestv930IEs& getNonCriticalExtension() { return *static_cast<UEInformationRequestv930IEs*>(items[2]); }
};

typedef Null UEInformationRequestr9CriticalExtensionsC1Spare3;

typedef Null UEInformationRequestr9CriticalExtensionsC1Spare2;

typedef Null UEInformationRequestr9CriticalExtensionsC1Spare1;

class UEInformationRequestr9CriticalExtensionsC1 : public Choice {
private:
	static const void *choicesInfo[4];
public:
	enum UEInformationRequestr9CriticalExtensionsC1Choices {
		ueInformationRequestr9 = 0,
		uEInformationRequestr9CriticalExtensionsC1Spare3 = 1,
		uEInformationRequestr9CriticalExtensionsC1Spare2 = 2,
		uEInformationRequestr9CriticalExtensionsC1Spare1 = 3,
	};
	static const Info theInfo;
	UEInformationRequestr9CriticalExtensionsC1(): Choice(&theInfo) {}
};

class UEInformationRequestr9CriticalExtensionsCriticalExtensionsFuture : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	UEInformationRequestr9CriticalExtensionsCriticalExtensionsFuture(): Sequence(&theInfo) {}


};

class UEInformationRequestr9CriticalExtensions : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum UEInformationRequestr9CriticalExtensionsChoices {
		uEInformationRequestr9CriticalExtensionsC1 = 0,
		uEInformationRequestr9CriticalExtensionsCriticalExtensionsFuture = 1,
	};
	static const Info theInfo;
	UEInformationRequestr9CriticalExtensions(): Choice(&theInfo) {}
};

class UEInformationRequestr9 : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UEInformationRequestr9(): Sequence(&theInfo) {}
	UEInformationRequestr9(const RRCTransactionIdentifier& rrcTransactionIdentifier, const UEInformationRequestr9CriticalExtensions& uEInformationRequestr9CriticalExtensions);

	void setRrcTransactionIdentifier(const RRCTransactionIdentifier& rrcTransactionIdentifier) { *static_cast<RRCTransactionIdentifier*>(items[0]) = rrcTransactionIdentifier; }
	void setUEInformationRequestr9CriticalExtensions(const UEInformationRequestr9CriticalExtensions& uEInformationRequestr9CriticalExtensions) { *static_cast<UEInformationRequestr9CriticalExtensions*>(items[1]) = uEInformationRequestr9CriticalExtensions; }

	RRCTransactionIdentifier& getRrcTransactionIdentifier() { return *static_cast<RRCTransactionIdentifier*>(items[0]); }
	UEInformationRequestr9CriticalExtensions& getUEInformationRequestr9CriticalExtensions() { return *static_cast<UEInformationRequestr9CriticalExtensions*>(items[1]); }
};

typedef OctetString<CONSTRAINED, 3, 3> TraceReferencer10TraceIdr10;

class TraceReferencer10 : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TraceReferencer10(): Sequence(&theInfo) {}
	TraceReferencer10(const PLMNIdentity& plmnIdentityr10, const TraceReferencer10TraceIdr10& traceReferencer10TraceIdr10);

	void setPlmnIdentityr10(const PLMNIdentity& plmnIdentityr10) { *static_cast<PLMNIdentity*>(items[0]) = plmnIdentityr10; }
	void setTraceReferencer10TraceIdr10(const TraceReferencer10TraceIdr10& traceReferencer10TraceIdr10) { *static_cast<TraceReferencer10TraceIdr10*>(items[1]) = traceReferencer10TraceIdr10; }

	PLMNIdentity& getPlmnIdentityr10() { return *static_cast<PLMNIdentity*>(items[0]); }
	TraceReferencer10TraceIdr10& getTraceReferencer10TraceIdr10() { return *static_cast<TraceReferencer10TraceIdr10*>(items[1]); }
};

typedef OctetString<CONSTRAINED, 2, 2> LoggedMeasurementConfigurationr10IEsTraceRecordingSessionRefr10;

typedef OctetString<CONSTRAINED, 1, 1> LoggedMeasurementConfigurationr10IEsTceIdr10;

typedef BitString<CONSTRAINED, 48, 48> AbsoluteTimeInfor10;

class CellGlobalIdEUTRA : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellGlobalIdEUTRA(): Sequence(&theInfo) {}
	CellGlobalIdEUTRA(const PLMNIdentity& plmnIdentity, const CellIdentity& cellIdentity);

	void setPlmnIdentity(const PLMNIdentity& plmnIdentity) { *static_cast<PLMNIdentity*>(items[0]) = plmnIdentity; }
	void setCellIdentity(const CellIdentity& cellIdentity) { *static_cast<CellIdentity*>(items[1]) = cellIdentity; }

	PLMNIdentity& getPlmnIdentity() { return *static_cast<PLMNIdentity*>(items[0]); }
	CellIdentity& getCellIdentity() { return *static_cast<CellIdentity*>(items[1]); }
};

typedef SequenceOf<CellGlobalIdEUTRA, CONSTRAINED, 1, 32> CellGlobalIdListr10;

typedef SequenceOf<TrackingAreaCode, CONSTRAINED, 1, 8> TrackingAreaCodeListr10;

class AreaConfigurationr10 : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum AreaConfigurationr10Choices {
		cellGlobalIdListr10 = 0,
		trackingAreaCodeListr10 = 1,
	};
	static const Info theInfo;
	AreaConfigurationr10(): Choice(&theInfo) {}
};

enum LoggingDurationr10Values {
	min10_LoggingDurationr10 = 0,
	min20_LoggingDurationr10 = 1,
	min40_LoggingDurationr10 = 2,
	min60_LoggingDurationr10 = 3,
	min90_LoggingDurationr10 = 4,
	min120_LoggingDurationr10 = 5,
	spare2_LoggingDurationr10 = 6,
	spare1_LoggingDurationr10 = 7,
};
typedef Enumerated<CONSTRAINED, 7> LoggingDurationr10;

enum LoggingIntervalr10Values {
	ms1280_LoggingIntervalr10 = 0,
	ms2560_LoggingIntervalr10 = 1,
	ms5120_LoggingIntervalr10 = 2,
	ms10240_LoggingIntervalr10 = 3,
	ms20480_LoggingIntervalr10 = 4,
	ms30720_LoggingIntervalr10 = 5,
	ms40960_LoggingIntervalr10 = 6,
	ms61440_LoggingIntervalr10 = 7,
};
typedef Enumerated<CONSTRAINED, 7> LoggingIntervalr10;

class LoggedMeasurementConfigurationr10IEsNonCriticalExtension : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	LoggedMeasurementConfigurationr10IEsNonCriticalExtension(): Sequence(&theInfo) {}


};

class LoggedMeasurementConfigurationr10IEs : public Sequence {
private:
	static const void *itemsInfo[8];
	static bool itemsPres[8];
public:
	static const Info theInfo;
	LoggedMeasurementConfigurationr10IEs(): Sequence(&theInfo) {}
	LoggedMeasurementConfigurationr10IEs(const TraceReferencer10& traceReferencer10, const LoggedMeasurementConfigurationr10IEsTraceRecordingSessionRefr10& loggedMeasurementConfigurationr10IEsTraceRecordingSessionRefr10, const LoggedMeasurementConfigurationr10IEsTceIdr10& loggedMeasurementConfigurationr10IEsTceIdr10, const AbsoluteTimeInfor10& absoluteTimeInfor10, const LoggingDurationr10& loggingDurationr10, const LoggingIntervalr10& loggingIntervalr10);

	void setTraceReferencer10(const TraceReferencer10& traceReferencer10) { *static_cast<TraceReferencer10*>(items[0]) = traceReferencer10; }
	void setLoggedMeasurementConfigurationr10IEsTraceRecordingSessionRefr10(const LoggedMeasurementConfigurationr10IEsTraceRecordingSessionRefr10& loggedMeasurementConfigurationr10IEsTraceRecordingSessionRefr10) { *static_cast<LoggedMeasurementConfigurationr10IEsTraceRecordingSessionRefr10*>(items[1]) = loggedMeasurementConfigurationr10IEsTraceRecordingSessionRefr10; }
	void setLoggedMeasurementConfigurationr10IEsTceIdr10(const LoggedMeasurementConfigurationr10IEsTceIdr10& loggedMeasurementConfigurationr10IEsTceIdr10) { *static_cast<LoggedMeasurementConfigurationr10IEsTceIdr10*>(items[2]) = loggedMeasurementConfigurationr10IEsTceIdr10; }
	void setAbsoluteTimeInfor10(const AbsoluteTimeInfor10& absoluteTimeInfor10) { *static_cast<AbsoluteTimeInfor10*>(items[3]) = absoluteTimeInfor10; }
	void setAreaConfigurationr10(const AreaConfigurationr10& areaConfigurationr10) { *static_cast<AreaConfigurationr10*>(items[4]) = areaConfigurationr10; }
	void setLoggingDurationr10(const LoggingDurationr10& loggingDurationr10) { *static_cast<LoggingDurationr10*>(items[5]) = loggingDurationr10; }
	void setLoggingIntervalr10(const LoggingIntervalr10& loggingIntervalr10) { *static_cast<LoggingIntervalr10*>(items[6]) = loggingIntervalr10; }
	void setLoggedMeasurementConfigurationr10IEsNonCriticalExtension(const LoggedMeasurementConfigurationr10IEsNonCriticalExtension& loggedMeasurementConfigurationr10IEsNonCriticalExtension) { *static_cast<LoggedMeasurementConfigurationr10IEsNonCriticalExtension*>(items[7]) = loggedMeasurementConfigurationr10IEsNonCriticalExtension; }

	TraceReferencer10& getTraceReferencer10() { return *static_cast<TraceReferencer10*>(items[0]); }
	LoggedMeasurementConfigurationr10IEsTraceRecordingSessionRefr10& getLoggedMeasurementConfigurationr10IEsTraceRecordingSessionRefr10() { return *static_cast<LoggedMeasurementConfigurationr10IEsTraceRecordingSessionRefr10*>(items[1]); }
	LoggedMeasurementConfigurationr10IEsTceIdr10& getLoggedMeasurementConfigurationr10IEsTceIdr10() { return *static_cast<LoggedMeasurementConfigurationr10IEsTceIdr10*>(items[2]); }
	AbsoluteTimeInfor10& getAbsoluteTimeInfor10() { return *static_cast<AbsoluteTimeInfor10*>(items[3]); }
	AreaConfigurationr10& getAreaConfigurationr10() { return *static_cast<AreaConfigurationr10*>(items[4]); }
	LoggingDurationr10& getLoggingDurationr10() { return *static_cast<LoggingDurationr10*>(items[5]); }
	LoggingIntervalr10& getLoggingIntervalr10() { return *static_cast<LoggingIntervalr10*>(items[6]); }
	LoggedMeasurementConfigurationr10IEsNonCriticalExtension& getLoggedMeasurementConfigurationr10IEsNonCriticalExtension() { return *static_cast<LoggedMeasurementConfigurationr10IEsNonCriticalExtension*>(items[7]); }
};

typedef Null LoggedMeasurementConfigurationr10CriticalExtensionsC1Spare3;

typedef Null LoggedMeasurementConfigurationr10CriticalExtensionsC1Spare2;

typedef Null LoggedMeasurementConfigurationr10CriticalExtensionsC1Spare1;

class LoggedMeasurementConfigurationr10CriticalExtensionsC1 : public Choice {
private:
	static const void *choicesInfo[4];
public:
	enum LoggedMeasurementConfigurationr10CriticalExtensionsC1Choices {
		loggedMeasurementConfigurationr10 = 0,
		loggedMeasurementConfigurationr10CriticalExtensionsC1Spare3 = 1,
		loggedMeasurementConfigurationr10CriticalExtensionsC1Spare2 = 2,
		loggedMeasurementConfigurationr10CriticalExtensionsC1Spare1 = 3,
	};
	static const Info theInfo;
	LoggedMeasurementConfigurationr10CriticalExtensionsC1(): Choice(&theInfo) {}
};

class LoggedMeasurementConfigurationr10CriticalExtensionsCriticalExtensionsFuture : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	LoggedMeasurementConfigurationr10CriticalExtensionsCriticalExtensionsFuture(): Sequence(&theInfo) {}


};

class LoggedMeasurementConfigurationr10CriticalExtensions : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum LoggedMeasurementConfigurationr10CriticalExtensionsChoices {
		loggedMeasurementConfigurationr10CriticalExtensionsC1 = 0,
		loggedMeasurementConfigurationr10CriticalExtensionsCriticalExtensionsFuture = 1,
	};
	static const Info theInfo;
	LoggedMeasurementConfigurationr10CriticalExtensions(): Choice(&theInfo) {}
};

class LoggedMeasurementConfigurationr10 : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	LoggedMeasurementConfigurationr10(): Sequence(&theInfo) {}
	LoggedMeasurementConfigurationr10(const LoggedMeasurementConfigurationr10CriticalExtensions& loggedMeasurementConfigurationr10CriticalExtensions);

	void setLoggedMeasurementConfigurationr10CriticalExtensions(const LoggedMeasurementConfigurationr10CriticalExtensions& loggedMeasurementConfigurationr10CriticalExtensions) { *static_cast<LoggedMeasurementConfigurationr10CriticalExtensions*>(items[0]) = loggedMeasurementConfigurationr10CriticalExtensions; }

	LoggedMeasurementConfigurationr10CriticalExtensions& getLoggedMeasurementConfigurationr10CriticalExtensions() { return *static_cast<LoggedMeasurementConfigurationr10CriticalExtensions*>(items[0]); }
};

typedef OctetStringBase RNSystemInfor10SystemInformationBlockType1r10;

typedef Boolean SystemInformationBlockType2AcBarringInfoAcBarringForEmergency;

enum ACBarringConfigac_BarringFactorValues {
	p00_ACBarringConfigac_BarringFactor = 0,
	p05_ACBarringConfigac_BarringFactor = 1,
	p10_ACBarringConfigac_BarringFactor = 2,
	p15_ACBarringConfigac_BarringFactor = 3,
	p20_ACBarringConfigac_BarringFactor = 4,
	p25_ACBarringConfigac_BarringFactor = 5,
	p30_ACBarringConfigac_BarringFactor = 6,
	p40_ACBarringConfigac_BarringFactor = 7,
	p50_ACBarringConfigac_BarringFactor = 8,
	p60_ACBarringConfigac_BarringFactor = 9,
	p70_ACBarringConfigac_BarringFactor = 10,
	p75_ACBarringConfigac_BarringFactor = 11,
	p80_ACBarringConfigac_BarringFactor = 12,
	p85_ACBarringConfigac_BarringFactor = 13,
	p90_ACBarringConfigac_BarringFactor = 14,
	p95_ACBarringConfigac_BarringFactor = 15,
};
typedef Enumerated<CONSTRAINED, 15> ACBarringConfigac_BarringFactor;

enum ACBarringConfigac_BarringTimeValues {
	s4_ACBarringConfigac_BarringTime = 0,
	s8_ACBarringConfigac_BarringTime = 1,
	s16_ACBarringConfigac_BarringTime = 2,
	s32_ACBarringConfigac_BarringTime = 3,
	s64_ACBarringConfigac_BarringTime = 4,
	s128_ACBarringConfigac_BarringTime = 5,
	s256_ACBarringConfigac_BarringTime = 6,
	s512_ACBarringConfigac_BarringTime = 7,
};
typedef Enumerated<CONSTRAINED, 7> ACBarringConfigac_BarringTime;

typedef BitString<CONSTRAINED, 5, 5> ACBarringConfigAcBarringForSpecialAC;

class ACBarringConfig : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	ACBarringConfig(): Sequence(&theInfo) {}
	ACBarringConfig(const ACBarringConfigac_BarringFactor& aCBarringConfigac_BarringFactor, const ACBarringConfigac_BarringTime& aCBarringConfigac_BarringTime, const ACBarringConfigAcBarringForSpecialAC& aCBarringConfigAcBarringForSpecialAC);

	void setACBarringConfigac_BarringFactor(const ACBarringConfigac_BarringFactor& aCBarringConfigac_BarringFactor) { *static_cast<ACBarringConfigac_BarringFactor*>(items[0]) = aCBarringConfigac_BarringFactor; }
	void setACBarringConfigac_BarringTime(const ACBarringConfigac_BarringTime& aCBarringConfigac_BarringTime) { *static_cast<ACBarringConfigac_BarringTime*>(items[1]) = aCBarringConfigac_BarringTime; }
	void setACBarringConfigAcBarringForSpecialAC(const ACBarringConfigAcBarringForSpecialAC& aCBarringConfigAcBarringForSpecialAC) { *static_cast<ACBarringConfigAcBarringForSpecialAC*>(items[2]) = aCBarringConfigAcBarringForSpecialAC; }

	ACBarringConfigac_BarringFactor& getACBarringConfigac_BarringFactor() { return *static_cast<ACBarringConfigac_BarringFactor*>(items[0]); }
	ACBarringConfigac_BarringTime& getACBarringConfigac_BarringTime() { return *static_cast<ACBarringConfigac_BarringTime*>(items[1]); }
	ACBarringConfigAcBarringForSpecialAC& getACBarringConfigAcBarringForSpecialAC() { return *static_cast<ACBarringConfigAcBarringForSpecialAC*>(items[2]); }
};

class SystemInformationBlockType2AcBarringInfo : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	SystemInformationBlockType2AcBarringInfo(): Sequence(&theInfo) {}
	SystemInformationBlockType2AcBarringInfo(const SystemInformationBlockType2AcBarringInfoAcBarringForEmergency& systemInformationBlockType2AcBarringInfoAcBarringForEmergency);

	void setSystemInformationBlockType2AcBarringInfoAcBarringForEmergency(const SystemInformationBlockType2AcBarringInfoAcBarringForEmergency& systemInformationBlockType2AcBarringInfoAcBarringForEmergency) { *static_cast<SystemInformationBlockType2AcBarringInfoAcBarringForEmergency*>(items[0]) = systemInformationBlockType2AcBarringInfoAcBarringForEmergency; }
	void setAcBarringForMOSignalling(const ACBarringConfig& acBarringForMOSignalling) { *static_cast<ACBarringConfig*>(items[1]) = acBarringForMOSignalling; }
	void setAcBarringForMOData(const ACBarringConfig& acBarringForMOData) { *static_cast<ACBarringConfig*>(items[2]) = acBarringForMOData; }

	SystemInformationBlockType2AcBarringInfoAcBarringForEmergency& getSystemInformationBlockType2AcBarringInfoAcBarringForEmergency() { return *static_cast<SystemInformationBlockType2AcBarringInfoAcBarringForEmergency*>(items[0]); }
	ACBarringConfig& getAcBarringForMOSignalling() { return *static_cast<ACBarringConfig*>(items[1]); }
	ACBarringConfig& getAcBarringForMOData() { return *static_cast<ACBarringConfig*>(items[2]); }
};

enum BCCHConfigmodificationPeriodCoeffValues {
	n2_BCCHConfigmodificationPeriodCoeff = 0,
	n4_BCCHConfigmodificationPeriodCoeff = 1,
	n8_BCCHConfigmodificationPeriodCoeff = 2,
	n16_BCCHConfigmodificationPeriodCoeff = 3,
};
typedef Enumerated<CONSTRAINED, 3> BCCHConfigmodificationPeriodCoeff;

class BCCHConfig : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	BCCHConfig(): Sequence(&theInfo) {}
	BCCHConfig(const BCCHConfigmodificationPeriodCoeff& bCCHConfigmodificationPeriodCoeff);

	void setBCCHConfigmodificationPeriodCoeff(const BCCHConfigmodificationPeriodCoeff& bCCHConfigmodificationPeriodCoeff) { *static_cast<BCCHConfigmodificationPeriodCoeff*>(items[0]) = bCCHConfigmodificationPeriodCoeff; }

	BCCHConfigmodificationPeriodCoeff& getBCCHConfigmodificationPeriodCoeff() { return *static_cast<BCCHConfigmodificationPeriodCoeff*>(items[0]); }
};

enum PCCHConfigdefaultPagingCycleValues {
	rf32_PCCHConfigdefaultPagingCycle = 0,
	rf64_PCCHConfigdefaultPagingCycle = 1,
	rf128_PCCHConfigdefaultPagingCycle = 2,
	rf256_PCCHConfigdefaultPagingCycle = 3,
};
typedef Enumerated<CONSTRAINED, 3> PCCHConfigdefaultPagingCycle;

enum PCCHConfignBValues {
	fourT_PCCHConfignB = 0,
	twoT_PCCHConfignB = 1,
	oneT_PCCHConfignB = 2,
	halfT_PCCHConfignB = 3,
	quarterT_PCCHConfignB = 4,
	oneEighthT_PCCHConfignB = 5,
	oneSixteenthT_PCCHConfignB = 6,
	oneThirtySecondT_PCCHConfignB = 7,
};
typedef Enumerated<CONSTRAINED, 7> PCCHConfignB;

class PCCHConfig : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PCCHConfig(): Sequence(&theInfo) {}
	PCCHConfig(const PCCHConfigdefaultPagingCycle& pCCHConfigdefaultPagingCycle, const PCCHConfignB& pCCHConfignB);

	void setPCCHConfigdefaultPagingCycle(const PCCHConfigdefaultPagingCycle& pCCHConfigdefaultPagingCycle) { *static_cast<PCCHConfigdefaultPagingCycle*>(items[0]) = pCCHConfigdefaultPagingCycle; }
	void setPCCHConfignB(const PCCHConfignB& pCCHConfignB) { *static_cast<PCCHConfignB*>(items[1]) = pCCHConfignB; }

	PCCHConfigdefaultPagingCycle& getPCCHConfigdefaultPagingCycle() { return *static_cast<PCCHConfigdefaultPagingCycle*>(items[0]); }
	PCCHConfignB& getPCCHConfignB() { return *static_cast<PCCHConfignB*>(items[1]); }
};

typedef Integer<CONSTRAINED, 0, 837> PRACHConfigSIBRootSequenceIndex;

class PRACHConfigSIB : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PRACHConfigSIB(): Sequence(&theInfo) {}
	PRACHConfigSIB(const PRACHConfigSIBRootSequenceIndex& pRACHConfigSIBRootSequenceIndex, const PRACHConfigInfo& prachConfigInfo);

	void setPRACHConfigSIBRootSequenceIndex(const PRACHConfigSIBRootSequenceIndex& pRACHConfigSIBRootSequenceIndex) { *static_cast<PRACHConfigSIBRootSequenceIndex*>(items[0]) = pRACHConfigSIBRootSequenceIndex; }
	void setPrachConfigInfo(const PRACHConfigInfo& prachConfigInfo) { *static_cast<PRACHConfigInfo*>(items[1]) = prachConfigInfo; }

	PRACHConfigSIBRootSequenceIndex& getPRACHConfigSIBRootSequenceIndex() { return *static_cast<PRACHConfigSIBRootSequenceIndex*>(items[0]); }
	PRACHConfigInfo& getPrachConfigInfo() { return *static_cast<PRACHConfigInfo*>(items[1]); }
};

class RadioResourceConfigCommonSIB : public Sequence {
private:
	static const void *itemsInfo[11];
	static bool itemsPres[11];
public:
	static const Info theInfo;
	RadioResourceConfigCommonSIB(): Sequence(&theInfo) {}
	RadioResourceConfigCommonSIB(const RACHConfigCommon& rachConfigCommon, const BCCHConfig& bcchConfig, const PCCHConfig& pcchConfig, const PRACHConfigSIB& prachConfig, const PDSCHConfigCommon& pdschConfigCommon, const PUSCHConfigCommon& puschConfigCommon, const PUCCHConfigCommon& pucchConfigCommon, const SoundingRSULConfigCommon& soundingRSULConfigCommon, const UplinkPowerControlCommon& uplinkPowerControlCommon, const ULCyclicPrefixLength& ulCyclicPrefixLength);

	void setRachConfigCommon(const RACHConfigCommon& rachConfigCommon) { *static_cast<RACHConfigCommon*>(items[0]) = rachConfigCommon; }
	void setBcchConfig(const BCCHConfig& bcchConfig) { *static_cast<BCCHConfig*>(items[1]) = bcchConfig; }
	void setPcchConfig(const PCCHConfig& pcchConfig) { *static_cast<PCCHConfig*>(items[2]) = pcchConfig; }
	void setPrachConfig(const PRACHConfigSIB& prachConfig) { *static_cast<PRACHConfigSIB*>(items[3]) = prachConfig; }
	void setPdschConfigCommon(const PDSCHConfigCommon& pdschConfigCommon) { *static_cast<PDSCHConfigCommon*>(items[4]) = pdschConfigCommon; }
	void setPuschConfigCommon(const PUSCHConfigCommon& puschConfigCommon) { *static_cast<PUSCHConfigCommon*>(items[5]) = puschConfigCommon; }
	void setPucchConfigCommon(const PUCCHConfigCommon& pucchConfigCommon) { *static_cast<PUCCHConfigCommon*>(items[6]) = pucchConfigCommon; }
	void setSoundingRSULConfigCommon(const SoundingRSULConfigCommon& soundingRSULConfigCommon) { *static_cast<SoundingRSULConfigCommon*>(items[7]) = soundingRSULConfigCommon; }
	void setUplinkPowerControlCommon(const UplinkPowerControlCommon& uplinkPowerControlCommon) { *static_cast<UplinkPowerControlCommon*>(items[8]) = uplinkPowerControlCommon; }
	void setUlCyclicPrefixLength(const ULCyclicPrefixLength& ulCyclicPrefixLength) { *static_cast<ULCyclicPrefixLength*>(items[9]) = ulCyclicPrefixLength; }
	void setUplinkPowerControlCommonv1020(const UplinkPowerControlCommonv1020& uplinkPowerControlCommonv1020) { *static_cast<UplinkPowerControlCommonv1020*>(items[10]) = uplinkPowerControlCommonv1020; }

	RACHConfigCommon& getRachConfigCommon() { return *static_cast<RACHConfigCommon*>(items[0]); }
	BCCHConfig& getBcchConfig() { return *static_cast<BCCHConfig*>(items[1]); }
	PCCHConfig& getPcchConfig() { return *static_cast<PCCHConfig*>(items[2]); }
	PRACHConfigSIB& getPrachConfig() { return *static_cast<PRACHConfigSIB*>(items[3]); }
	PDSCHConfigCommon& getPdschConfigCommon() { return *static_cast<PDSCHConfigCommon*>(items[4]); }
	PUSCHConfigCommon& getPuschConfigCommon() { return *static_cast<PUSCHConfigCommon*>(items[5]); }
	PUCCHConfigCommon& getPucchConfigCommon() { return *static_cast<PUCCHConfigCommon*>(items[6]); }
	SoundingRSULConfigCommon& getSoundingRSULConfigCommon() { return *static_cast<SoundingRSULConfigCommon*>(items[7]); }
	UplinkPowerControlCommon& getUplinkPowerControlCommon() { return *static_cast<UplinkPowerControlCommon*>(items[8]); }
	ULCyclicPrefixLength& getUlCyclicPrefixLength() { return *static_cast<ULCyclicPrefixLength*>(items[9]); }
	UplinkPowerControlCommonv1020& getUplinkPowerControlCommonv1020() { return *static_cast<UplinkPowerControlCommonv1020*>(items[10]); }
};

enum UETimersAndConstantst300Values {
	ms100_UETimersAndConstantst300 = 0,
	ms200_UETimersAndConstantst300 = 1,
	ms300_UETimersAndConstantst300 = 2,
	ms400_UETimersAndConstantst300 = 3,
	ms600_UETimersAndConstantst300 = 4,
	ms1000_UETimersAndConstantst300 = 5,
	ms1500_UETimersAndConstantst300 = 6,
	ms2000_UETimersAndConstantst300 = 7,
};
typedef Enumerated<CONSTRAINED, 7> UETimersAndConstantst300;

enum UETimersAndConstantst301Values {
	ms100_UETimersAndConstantst301 = 0,
	ms200_UETimersAndConstantst301 = 1,
	ms300_UETimersAndConstantst301 = 2,
	ms400_UETimersAndConstantst301 = 3,
	ms600_UETimersAndConstantst301 = 4,
	ms1000_UETimersAndConstantst301 = 5,
	ms1500_UETimersAndConstantst301 = 6,
	ms2000_UETimersAndConstantst301 = 7,
};
typedef Enumerated<CONSTRAINED, 7> UETimersAndConstantst301;

enum UETimersAndConstantst310Values {
	ms0_UETimersAndConstantst310 = 0,
	ms50_UETimersAndConstantst310 = 1,
	ms100_UETimersAndConstantst310 = 2,
	ms200_UETimersAndConstantst310 = 3,
	ms500_UETimersAndConstantst310 = 4,
	ms1000_UETimersAndConstantst310 = 5,
	ms2000_UETimersAndConstantst310 = 6,
};
typedef Enumerated<CONSTRAINED, 6> UETimersAndConstantst310;

enum UETimersAndConstantsn310Values {
	n1_UETimersAndConstantsn310 = 0,
	n2_UETimersAndConstantsn310 = 1,
	n3_UETimersAndConstantsn310 = 2,
	n4_UETimersAndConstantsn310 = 3,
	n6_UETimersAndConstantsn310 = 4,
	n8_UETimersAndConstantsn310 = 5,
	n10_UETimersAndConstantsn310 = 6,
	n20_UETimersAndConstantsn310 = 7,
};
typedef Enumerated<CONSTRAINED, 7> UETimersAndConstantsn310;

enum UETimersAndConstantst311Values {
	ms1000_UETimersAndConstantst311 = 0,
	ms3000_UETimersAndConstantst311 = 1,
	ms5000_UETimersAndConstantst311 = 2,
	ms10000_UETimersAndConstantst311 = 3,
	ms15000_UETimersAndConstantst311 = 4,
	ms20000_UETimersAndConstantst311 = 5,
	ms30000_UETimersAndConstantst311 = 6,
};
typedef Enumerated<CONSTRAINED, 6> UETimersAndConstantst311;

enum UETimersAndConstantsn311Values {
	n1_UETimersAndConstantsn311 = 0,
	n2_UETimersAndConstantsn311 = 1,
	n3_UETimersAndConstantsn311 = 2,
	n4_UETimersAndConstantsn311 = 3,
	n5_UETimersAndConstantsn311 = 4,
	n6_UETimersAndConstantsn311 = 5,
	n8_UETimersAndConstantsn311 = 6,
	n10_UETimersAndConstantsn311 = 7,
};
typedef Enumerated<CONSTRAINED, 7> UETimersAndConstantsn311;

class UETimersAndConstants : public Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	UETimersAndConstants(): Sequence(&theInfo) {}
	UETimersAndConstants(const UETimersAndConstantst300& uETimersAndConstantst300, const UETimersAndConstantst301& uETimersAndConstantst301, const UETimersAndConstantst310& uETimersAndConstantst310, const UETimersAndConstantsn310& uETimersAndConstantsn310, const UETimersAndConstantst311& uETimersAndConstantst311, const UETimersAndConstantsn311& uETimersAndConstantsn311);

	void setUETimersAndConstantst300(const UETimersAndConstantst300& uETimersAndConstantst300) { *static_cast<UETimersAndConstantst300*>(items[0]) = uETimersAndConstantst300; }
	void setUETimersAndConstantst301(const UETimersAndConstantst301& uETimersAndConstantst301) { *static_cast<UETimersAndConstantst301*>(items[1]) = uETimersAndConstantst301; }
	void setUETimersAndConstantst310(const UETimersAndConstantst310& uETimersAndConstantst310) { *static_cast<UETimersAndConstantst310*>(items[2]) = uETimersAndConstantst310; }
	void setUETimersAndConstantsn310(const UETimersAndConstantsn310& uETimersAndConstantsn310) { *static_cast<UETimersAndConstantsn310*>(items[3]) = uETimersAndConstantsn310; }
	void setUETimersAndConstantst311(const UETimersAndConstantst311& uETimersAndConstantst311) { *static_cast<UETimersAndConstantst311*>(items[4]) = uETimersAndConstantst311; }
	void setUETimersAndConstantsn311(const UETimersAndConstantsn311& uETimersAndConstantsn311) { *static_cast<UETimersAndConstantsn311*>(items[5]) = uETimersAndConstantsn311; }

	UETimersAndConstantst300& getUETimersAndConstantst300() { return *static_cast<UETimersAndConstantst300*>(items[0]); }
	UETimersAndConstantst301& getUETimersAndConstantst301() { return *static_cast<UETimersAndConstantst301*>(items[1]); }
	UETimersAndConstantst310& getUETimersAndConstantst310() { return *static_cast<UETimersAndConstantst310*>(items[2]); }
	UETimersAndConstantsn310& getUETimersAndConstantsn310() { return *static_cast<UETimersAndConstantsn310*>(items[3]); }
	UETimersAndConstantst311& getUETimersAndConstantst311() { return *static_cast<UETimersAndConstantst311*>(items[4]); }
	UETimersAndConstantsn311& getUETimersAndConstantsn311() { return *static_cast<UETimersAndConstantsn311*>(items[5]); }
};

enum SystemInformationBlockType2FreqInfoul_BandwidthValues {
	n6_SystemInformationBlockType2FreqInfoul_Bandwidth = 0,
	n15_SystemInformationBlockType2FreqInfoul_Bandwidth = 1,
	n25_SystemInformationBlockType2FreqInfoul_Bandwidth = 2,
	n50_SystemInformationBlockType2FreqInfoul_Bandwidth = 3,
	n75_SystemInformationBlockType2FreqInfoul_Bandwidth = 4,
	n100_SystemInformationBlockType2FreqInfoul_Bandwidth = 5,
};
typedef Enumerated<CONSTRAINED, 5> SystemInformationBlockType2FreqInfoul_Bandwidth;

class SystemInformationBlockType2FreqInfo : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	SystemInformationBlockType2FreqInfo(): Sequence(&theInfo) {}
	SystemInformationBlockType2FreqInfo(const AdditionalSpectrumEmission& additionalSpectrumEmission);

	void setUlCarrierFreq(const ARFCNValueEUTRA& ulCarrierFreq) { *static_cast<ARFCNValueEUTRA*>(items[0]) = ulCarrierFreq; }
	void setSystemInformationBlockType2FreqInfoul_Bandwidth(const SystemInformationBlockType2FreqInfoul_Bandwidth& systemInformationBlockType2FreqInfoul_Bandwidth) { *static_cast<SystemInformationBlockType2FreqInfoul_Bandwidth*>(items[1]) = systemInformationBlockType2FreqInfoul_Bandwidth; }
	void setAdditionalSpectrumEmission(const AdditionalSpectrumEmission& additionalSpectrumEmission) { *static_cast<AdditionalSpectrumEmission*>(items[2]) = additionalSpectrumEmission; }

	ARFCNValueEUTRA& getUlCarrierFreq() { return *static_cast<ARFCNValueEUTRA*>(items[0]); }
	SystemInformationBlockType2FreqInfoul_Bandwidth& getSystemInformationBlockType2FreqInfoul_Bandwidth() { return *static_cast<SystemInformationBlockType2FreqInfoul_Bandwidth*>(items[1]); }
	AdditionalSpectrumEmission& getAdditionalSpectrumEmission() { return *static_cast<AdditionalSpectrumEmission*>(items[2]); }
};

typedef OctetStringBase SystemInformationBlockType2LateNonCriticalExtension;

class SystemInformationBlockType2 : public Sequence {
private:
	static const void *itemsInfo[10];
	static bool itemsPres[10];
public:
	static const Info theInfo;
	SystemInformationBlockType2(): Sequence(&theInfo) {}
	SystemInformationBlockType2(const RadioResourceConfigCommonSIB& radioResourceConfigCommon, const UETimersAndConstants& ueTimersAndConstants, const SystemInformationBlockType2FreqInfo& systemInformationBlockType2FreqInfo, const TimeAlignmentTimer& timeAlignmentTimerCommon);

	void setSystemInformationBlockType2AcBarringInfo(const SystemInformationBlockType2AcBarringInfo& systemInformationBlockType2AcBarringInfo) { *static_cast<SystemInformationBlockType2AcBarringInfo*>(items[0]) = systemInformationBlockType2AcBarringInfo; }
	void setRadioResourceConfigCommon(const RadioResourceConfigCommonSIB& radioResourceConfigCommon) { *static_cast<RadioResourceConfigCommonSIB*>(items[1]) = radioResourceConfigCommon; }
	void setUeTimersAndConstants(const UETimersAndConstants& ueTimersAndConstants) { *static_cast<UETimersAndConstants*>(items[2]) = ueTimersAndConstants; }
	void setSystemInformationBlockType2FreqInfo(const SystemInformationBlockType2FreqInfo& systemInformationBlockType2FreqInfo) { *static_cast<SystemInformationBlockType2FreqInfo*>(items[3]) = systemInformationBlockType2FreqInfo; }
	void setMbsfnSubframeConfigList(const MBSFNSubframeConfigList& mbsfnSubframeConfigList) { *static_cast<MBSFNSubframeConfigList*>(items[4]) = mbsfnSubframeConfigList; }
	void setTimeAlignmentTimerCommon(const TimeAlignmentTimer& timeAlignmentTimerCommon) { *static_cast<TimeAlignmentTimer*>(items[5]) = timeAlignmentTimerCommon; }
	void setSystemInformationBlockType2LateNonCriticalExtension(const SystemInformationBlockType2LateNonCriticalExtension& systemInformationBlockType2LateNonCriticalExtension) { *static_cast<SystemInformationBlockType2LateNonCriticalExtension*>(items[6]) = systemInformationBlockType2LateNonCriticalExtension; }
	void setSsacBarringForMMTELVoicer9(const ACBarringConfig& ssacBarringForMMTELVoicer9) { *static_cast<ACBarringConfig*>(items[7]) = ssacBarringForMMTELVoicer9; }
	void setSsacBarringForMMTELVideor9(const ACBarringConfig& ssacBarringForMMTELVideor9) { *static_cast<ACBarringConfig*>(items[8]) = ssacBarringForMMTELVideor9; }
	void setAcBarringForCSFBr10(const ACBarringConfig& acBarringForCSFBr10) { *static_cast<ACBarringConfig*>(items[9]) = acBarringForCSFBr10; }

	SystemInformationBlockType2AcBarringInfo& getSystemInformationBlockType2AcBarringInfo() { return *static_cast<SystemInformationBlockType2AcBarringInfo*>(items[0]); }
	RadioResourceConfigCommonSIB& getRadioResourceConfigCommon() { return *static_cast<RadioResourceConfigCommonSIB*>(items[1]); }
	UETimersAndConstants& getUeTimersAndConstants() { return *static_cast<UETimersAndConstants*>(items[2]); }
	SystemInformationBlockType2FreqInfo& getSystemInformationBlockType2FreqInfo() { return *static_cast<SystemInformationBlockType2FreqInfo*>(items[3]); }
	MBSFNSubframeConfigList& getMbsfnSubframeConfigList() { return *static_cast<MBSFNSubframeConfigList*>(items[4]); }
	TimeAlignmentTimer& getTimeAlignmentTimerCommon() { return *static_cast<TimeAlignmentTimer*>(items[5]); }
	SystemInformationBlockType2LateNonCriticalExtension& getSystemInformationBlockType2LateNonCriticalExtension() { return *static_cast<SystemInformationBlockType2LateNonCriticalExtension*>(items[6]); }
	ACBarringConfig& getSsacBarringForMMTELVoicer9() { return *static_cast<ACBarringConfig*>(items[7]); }
	ACBarringConfig& getSsacBarringForMMTELVideor9() { return *static_cast<ACBarringConfig*>(items[8]); }
	ACBarringConfig& getAcBarringForCSFBr10() { return *static_cast<ACBarringConfig*>(items[9]); }
};

class RNSystemInfor10 : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RNSystemInfor10(): Sequence(&theInfo) {}

	void setRNSystemInfor10SystemInformationBlockType1r10(const RNSystemInfor10SystemInformationBlockType1r10& rNSystemInfor10SystemInformationBlockType1r10) { *static_cast<RNSystemInfor10SystemInformationBlockType1r10*>(items[0]) = rNSystemInfor10SystemInformationBlockType1r10; }
	void setSystemInformationBlockType2r10(const SystemInformationBlockType2& systemInformationBlockType2r10) { *static_cast<SystemInformationBlockType2*>(items[1]) = systemInformationBlockType2r10; }

	RNSystemInfor10SystemInformationBlockType1r10& getRNSystemInfor10SystemInformationBlockType1r10() { return *static_cast<RNSystemInfor10SystemInformationBlockType1r10*>(items[0]); }
	SystemInformationBlockType2& getSystemInformationBlockType2r10() { return *static_cast<SystemInformationBlockType2*>(items[1]); }
};

typedef BitString<CONSTRAINED, 8, 8> RNSubframeConfigr10SubframeConfigPatternr10SubframeConfigPatternFDDr10;

typedef Integer<CONSTRAINED, 0, 31> RNSubframeConfigr10SubframeConfigPatternr10SubframeConfigPatternTDDr10;

class RNSubframeConfigr10SubframeConfigPatternr10 : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum RNSubframeConfigr10SubframeConfigPatternr10Choices {
		rNSubframeConfigr10SubframeConfigPatternr10SubframeConfigPatternFDDr10 = 0,
		rNSubframeConfigr10SubframeConfigPatternr10SubframeConfigPatternTDDr10 = 1,
	};
	static const Info theInfo;
	RNSubframeConfigr10SubframeConfigPatternr10(): Choice(&theInfo) {}
};

enum RNSubframeConfigr10RpdcchConfigr10resourceAllocationType_r10Values {
	type0_RNSubframeConfigr10RpdcchConfigr10resourceAllocationType_r10 = 0,
	type1_RNSubframeConfigr10RpdcchConfigr10resourceAllocationType_r10 = 1,
	type2Localized_RNSubframeConfigr10RpdcchConfigr10resourceAllocationType_r10 = 2,
	type2Distributed_RNSubframeConfigr10RpdcchConfigr10resourceAllocationType_r10 = 3,
	spare4_RNSubframeConfigr10RpdcchConfigr10resourceAllocationType_r10 = 4,
	spare3_RNSubframeConfigr10RpdcchConfigr10resourceAllocationType_r10 = 5,
	spare2_RNSubframeConfigr10RpdcchConfigr10resourceAllocationType_r10 = 6,
	spare1_RNSubframeConfigr10RpdcchConfigr10resourceAllocationType_r10 = 7,
};
typedef Enumerated<CONSTRAINED, 7> RNSubframeConfigr10RpdcchConfigr10resourceAllocationType_r10;

typedef BitString<CONSTRAINED, 6, 6> RNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10Type01r10Nrb6r10;

typedef BitString<CONSTRAINED, 8, 8> RNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10Type01r10Nrb15r10;

typedef BitString<CONSTRAINED, 13, 13> RNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10Type01r10Nrb25r10;

typedef BitString<CONSTRAINED, 17, 17> RNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10Type01r10Nrb50r10;

typedef BitString<CONSTRAINED, 19, 19> RNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10Type01r10Nrb75r10;

typedef BitString<CONSTRAINED, 25, 25> RNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10Type01r10Nrb100r10;

class RNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10Type01r10 : public Choice {
private:
	static const void *choicesInfo[6];
public:
	enum RNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10Type01r10Choices {
		rNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10Type01r10Nrb6r10 = 0,
		rNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10Type01r10Nrb15r10 = 1,
		rNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10Type01r10Nrb25r10 = 2,
		rNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10Type01r10Nrb50r10 = 3,
		rNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10Type01r10Nrb75r10 = 4,
		rNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10Type01r10Nrb100r10 = 5,
	};
	static const Info theInfo;
	RNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10Type01r10(): Choice(&theInfo) {}
};

typedef BitString<CONSTRAINED, 5, 5> RNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10Type2r10Nrb6r10;

typedef BitString<CONSTRAINED, 7, 7> RNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10Type2r10Nrb15r10;

typedef BitString<CONSTRAINED, 9, 9> RNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10Type2r10Nrb25r10;

typedef BitString<CONSTRAINED, 11, 11> RNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10Type2r10Nrb50r10;

typedef BitString<CONSTRAINED, 12, 12> RNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10Type2r10Nrb75r10;

typedef BitString<CONSTRAINED, 13, 13> RNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10Type2r10Nrb100r10;

class RNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10Type2r10 : public Choice {
private:
	static const void *choicesInfo[6];
public:
	enum RNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10Type2r10Choices {
		rNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10Type2r10Nrb6r10 = 0,
		rNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10Type2r10Nrb15r10 = 1,
		rNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10Type2r10Nrb25r10 = 2,
		rNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10Type2r10Nrb50r10 = 3,
		rNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10Type2r10Nrb75r10 = 4,
		rNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10Type2r10Nrb100r10 = 5,
	};
	static const Info theInfo;
	RNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10Type2r10(): Choice(&theInfo) {}
};

class RNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10 : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum RNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10Choices {
		rNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10Type01r10 = 0,
		rNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10Type2r10 = 1,
	};
	static const Info theInfo;
	RNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10(): Choice(&theInfo) {}
};

enum RNSubframeConfigr10RpdcchConfigr10DemodulationRSr10interleaving_r10Values {
	crs_RNSubframeConfigr10RpdcchConfigr10DemodulationRSr10interleaving_r10 = 0,
};
typedef Enumerated<CONSTRAINED, 0> RNSubframeConfigr10RpdcchConfigr10DemodulationRSr10interleaving_r10;

enum RNSubframeConfigr10RpdcchConfigr10DemodulationRSr10noInterleaving_r10Values {
	crs_RNSubframeConfigr10RpdcchConfigr10DemodulationRSr10noInterleaving_r10 = 0,
	dmrs_RNSubframeConfigr10RpdcchConfigr10DemodulationRSr10noInterleaving_r10 = 1,
};
typedef Enumerated<CONSTRAINED, 1> RNSubframeConfigr10RpdcchConfigr10DemodulationRSr10noInterleaving_r10;

class RNSubframeConfigr10RpdcchConfigr10DemodulationRSr10 : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum RNSubframeConfigr10RpdcchConfigr10DemodulationRSr10Choices {
		rNSubframeConfigr10RpdcchConfigr10DemodulationRSr10interleaving_r10 = 0,
		rNSubframeConfigr10RpdcchConfigr10DemodulationRSr10noInterleaving_r10 = 1,
	};
	static const Info theInfo;
	RNSubframeConfigr10RpdcchConfigr10DemodulationRSr10(): Choice(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 3> RNSubframeConfigr10RpdcchConfigr10PdschStartr10;

typedef Integer<CONSTRAINED, 0, 2047> N1PUCCHANListr10Item;

typedef SequenceOf<N1PUCCHANListr10Item, CONSTRAINED, 1, 4> RNSubframeConfigr10RpdcchConfigr10PucchConfigr10TddChannelSelectionMultiplexingBundlingN1PUCCHANListr10;

class RNSubframeConfigr10RpdcchConfigr10PucchConfigr10TddChannelSelectionMultiplexingBundling : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RNSubframeConfigr10RpdcchConfigr10PucchConfigr10TddChannelSelectionMultiplexingBundling(): Sequence(&theInfo) {}
	RNSubframeConfigr10RpdcchConfigr10PucchConfigr10TddChannelSelectionMultiplexingBundling(const RNSubframeConfigr10RpdcchConfigr10PucchConfigr10TddChannelSelectionMultiplexingBundlingN1PUCCHANListr10& rNSubframeConfigr10RpdcchConfigr10PucchConfigr10TddChannelSelectionMultiplexingBundlingN1PUCCHANListr10);

	void setRNSubframeConfigr10RpdcchConfigr10PucchConfigr10TddChannelSelectionMultiplexingBundlingN1PUCCHANListr10(const RNSubframeConfigr10RpdcchConfigr10PucchConfigr10TddChannelSelectionMultiplexingBundlingN1PUCCHANListr10& rNSubframeConfigr10RpdcchConfigr10PucchConfigr10TddChannelSelectionMultiplexingBundlingN1PUCCHANListr10) { *static_cast<RNSubframeConfigr10RpdcchConfigr10PucchConfigr10TddChannelSelectionMultiplexingBundlingN1PUCCHANListr10*>(items[0]) = rNSubframeConfigr10RpdcchConfigr10PucchConfigr10TddChannelSelectionMultiplexingBundlingN1PUCCHANListr10; }

	RNSubframeConfigr10RpdcchConfigr10PucchConfigr10TddChannelSelectionMultiplexingBundlingN1PUCCHANListr10& getRNSubframeConfigr10RpdcchConfigr10PucchConfigr10TddChannelSelectionMultiplexingBundlingN1PUCCHANListr10() { return *static_cast<RNSubframeConfigr10RpdcchConfigr10PucchConfigr10TddChannelSelectionMultiplexingBundlingN1PUCCHANListr10*>(items[0]); }
};

typedef Integer<CONSTRAINED, 0, 2047> RNSubframeConfigr10RpdcchConfigr10PucchConfigr10TddFallbackForFormat3N1PUCCHANP0r10;

typedef Integer<CONSTRAINED, 0, 2047> RNSubframeConfigr10RpdcchConfigr10PucchConfigr10TddFallbackForFormat3N1PUCCHANP1r10;

class RNSubframeConfigr10RpdcchConfigr10PucchConfigr10TddFallbackForFormat3 : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RNSubframeConfigr10RpdcchConfigr10PucchConfigr10TddFallbackForFormat3(): Sequence(&theInfo) {}
	RNSubframeConfigr10RpdcchConfigr10PucchConfigr10TddFallbackForFormat3(const RNSubframeConfigr10RpdcchConfigr10PucchConfigr10TddFallbackForFormat3N1PUCCHANP0r10& rNSubframeConfigr10RpdcchConfigr10PucchConfigr10TddFallbackForFormat3N1PUCCHANP0r10);

	void setRNSubframeConfigr10RpdcchConfigr10PucchConfigr10TddFallbackForFormat3N1PUCCHANP0r10(const RNSubframeConfigr10RpdcchConfigr10PucchConfigr10TddFallbackForFormat3N1PUCCHANP0r10& rNSubframeConfigr10RpdcchConfigr10PucchConfigr10TddFallbackForFormat3N1PUCCHANP0r10) { *static_cast<RNSubframeConfigr10RpdcchConfigr10PucchConfigr10TddFallbackForFormat3N1PUCCHANP0r10*>(items[0]) = rNSubframeConfigr10RpdcchConfigr10PucchConfigr10TddFallbackForFormat3N1PUCCHANP0r10; }
	void setRNSubframeConfigr10RpdcchConfigr10PucchConfigr10TddFallbackForFormat3N1PUCCHANP1r10(const RNSubframeConfigr10RpdcchConfigr10PucchConfigr10TddFallbackForFormat3N1PUCCHANP1r10& rNSubframeConfigr10RpdcchConfigr10PucchConfigr10TddFallbackForFormat3N1PUCCHANP1r10) { *static_cast<RNSubframeConfigr10RpdcchConfigr10PucchConfigr10TddFallbackForFormat3N1PUCCHANP1r10*>(items[1]) = rNSubframeConfigr10RpdcchConfigr10PucchConfigr10TddFallbackForFormat3N1PUCCHANP1r10; }

	RNSubframeConfigr10RpdcchConfigr10PucchConfigr10TddFallbackForFormat3N1PUCCHANP0r10& getRNSubframeConfigr10RpdcchConfigr10PucchConfigr10TddFallbackForFormat3N1PUCCHANP0r10() { return *static_cast<RNSubframeConfigr10RpdcchConfigr10PucchConfigr10TddFallbackForFormat3N1PUCCHANP0r10*>(items[0]); }
	RNSubframeConfigr10RpdcchConfigr10PucchConfigr10TddFallbackForFormat3N1PUCCHANP1r10& getRNSubframeConfigr10RpdcchConfigr10PucchConfigr10TddFallbackForFormat3N1PUCCHANP1r10() { return *static_cast<RNSubframeConfigr10RpdcchConfigr10PucchConfigr10TddFallbackForFormat3N1PUCCHANP1r10*>(items[1]); }
};

class RNSubframeConfigr10RpdcchConfigr10PucchConfigr10Tdd : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum RNSubframeConfigr10RpdcchConfigr10PucchConfigr10TddChoices {
		rNSubframeConfigr10RpdcchConfigr10PucchConfigr10TddChannelSelectionMultiplexingBundling = 0,
		rNSubframeConfigr10RpdcchConfigr10PucchConfigr10TddFallbackForFormat3 = 1,
	};
	static const Info theInfo;
	RNSubframeConfigr10RpdcchConfigr10PucchConfigr10Tdd(): Choice(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 2047> RNSubframeConfigr10RpdcchConfigr10PucchConfigr10FddN1PUCCHANP0r10;

typedef Integer<CONSTRAINED, 0, 2047> RNSubframeConfigr10RpdcchConfigr10PucchConfigr10FddN1PUCCHANP1r10;

class RNSubframeConfigr10RpdcchConfigr10PucchConfigr10Fdd : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RNSubframeConfigr10RpdcchConfigr10PucchConfigr10Fdd(): Sequence(&theInfo) {}
	RNSubframeConfigr10RpdcchConfigr10PucchConfigr10Fdd(const RNSubframeConfigr10RpdcchConfigr10PucchConfigr10FddN1PUCCHANP0r10& rNSubframeConfigr10RpdcchConfigr10PucchConfigr10FddN1PUCCHANP0r10);

	void setRNSubframeConfigr10RpdcchConfigr10PucchConfigr10FddN1PUCCHANP0r10(const RNSubframeConfigr10RpdcchConfigr10PucchConfigr10FddN1PUCCHANP0r10& rNSubframeConfigr10RpdcchConfigr10PucchConfigr10FddN1PUCCHANP0r10) { *static_cast<RNSubframeConfigr10RpdcchConfigr10PucchConfigr10FddN1PUCCHANP0r10*>(items[0]) = rNSubframeConfigr10RpdcchConfigr10PucchConfigr10FddN1PUCCHANP0r10; }
	void setRNSubframeConfigr10RpdcchConfigr10PucchConfigr10FddN1PUCCHANP1r10(const RNSubframeConfigr10RpdcchConfigr10PucchConfigr10FddN1PUCCHANP1r10& rNSubframeConfigr10RpdcchConfigr10PucchConfigr10FddN1PUCCHANP1r10) { *static_cast<RNSubframeConfigr10RpdcchConfigr10PucchConfigr10FddN1PUCCHANP1r10*>(items[1]) = rNSubframeConfigr10RpdcchConfigr10PucchConfigr10FddN1PUCCHANP1r10; }

	RNSubframeConfigr10RpdcchConfigr10PucchConfigr10FddN1PUCCHANP0r10& getRNSubframeConfigr10RpdcchConfigr10PucchConfigr10FddN1PUCCHANP0r10() { return *static_cast<RNSubframeConfigr10RpdcchConfigr10PucchConfigr10FddN1PUCCHANP0r10*>(items[0]); }
	RNSubframeConfigr10RpdcchConfigr10PucchConfigr10FddN1PUCCHANP1r10& getRNSubframeConfigr10RpdcchConfigr10PucchConfigr10FddN1PUCCHANP1r10() { return *static_cast<RNSubframeConfigr10RpdcchConfigr10PucchConfigr10FddN1PUCCHANP1r10*>(items[1]); }
};

class RNSubframeConfigr10RpdcchConfigr10PucchConfigr10 : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum RNSubframeConfigr10RpdcchConfigr10PucchConfigr10Choices {
		rNSubframeConfigr10RpdcchConfigr10PucchConfigr10Tdd = 0,
		rNSubframeConfigr10RpdcchConfigr10PucchConfigr10Fdd = 1,
	};
	static const Info theInfo;
	RNSubframeConfigr10RpdcchConfigr10PucchConfigr10(): Choice(&theInfo) {}
};

class RNSubframeConfigr10RpdcchConfigr10 : public Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	RNSubframeConfigr10RpdcchConfigr10(): Sequence(&theInfo) {}
	RNSubframeConfigr10RpdcchConfigr10(const RNSubframeConfigr10RpdcchConfigr10resourceAllocationType_r10& rNSubframeConfigr10RpdcchConfigr10resourceAllocationType_r10, const RNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10& rNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10, const RNSubframeConfigr10RpdcchConfigr10DemodulationRSr10& rNSubframeConfigr10RpdcchConfigr10DemodulationRSr10, const RNSubframeConfigr10RpdcchConfigr10PdschStartr10& rNSubframeConfigr10RpdcchConfigr10PdschStartr10, const RNSubframeConfigr10RpdcchConfigr10PucchConfigr10& rNSubframeConfigr10RpdcchConfigr10PucchConfigr10);

	void setRNSubframeConfigr10RpdcchConfigr10resourceAllocationType_r10(const RNSubframeConfigr10RpdcchConfigr10resourceAllocationType_r10& rNSubframeConfigr10RpdcchConfigr10resourceAllocationType_r10) { *static_cast<RNSubframeConfigr10RpdcchConfigr10resourceAllocationType_r10*>(items[0]) = rNSubframeConfigr10RpdcchConfigr10resourceAllocationType_r10; }
	void setRNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10(const RNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10& rNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10) { *static_cast<RNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10*>(items[1]) = rNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10; }
	void setRNSubframeConfigr10RpdcchConfigr10DemodulationRSr10(const RNSubframeConfigr10RpdcchConfigr10DemodulationRSr10& rNSubframeConfigr10RpdcchConfigr10DemodulationRSr10) { *static_cast<RNSubframeConfigr10RpdcchConfigr10DemodulationRSr10*>(items[2]) = rNSubframeConfigr10RpdcchConfigr10DemodulationRSr10; }
	void setRNSubframeConfigr10RpdcchConfigr10PdschStartr10(const RNSubframeConfigr10RpdcchConfigr10PdschStartr10& rNSubframeConfigr10RpdcchConfigr10PdschStartr10) { *static_cast<RNSubframeConfigr10RpdcchConfigr10PdschStartr10*>(items[3]) = rNSubframeConfigr10RpdcchConfigr10PdschStartr10; }
	void setRNSubframeConfigr10RpdcchConfigr10PucchConfigr10(const RNSubframeConfigr10RpdcchConfigr10PucchConfigr10& rNSubframeConfigr10RpdcchConfigr10PucchConfigr10) { *static_cast<RNSubframeConfigr10RpdcchConfigr10PucchConfigr10*>(items[4]) = rNSubframeConfigr10RpdcchConfigr10PucchConfigr10; }

	RNSubframeConfigr10RpdcchConfigr10resourceAllocationType_r10& getRNSubframeConfigr10RpdcchConfigr10resourceAllocationType_r10() { return *static_cast<RNSubframeConfigr10RpdcchConfigr10resourceAllocationType_r10*>(items[0]); }
	RNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10& getRNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10() { return *static_cast<RNSubframeConfigr10RpdcchConfigr10ResourceBlockAssignmentr10*>(items[1]); }
	RNSubframeConfigr10RpdcchConfigr10DemodulationRSr10& getRNSubframeConfigr10RpdcchConfigr10DemodulationRSr10() { return *static_cast<RNSubframeConfigr10RpdcchConfigr10DemodulationRSr10*>(items[2]); }
	RNSubframeConfigr10RpdcchConfigr10PdschStartr10& getRNSubframeConfigr10RpdcchConfigr10PdschStartr10() { return *static_cast<RNSubframeConfigr10RpdcchConfigr10PdschStartr10*>(items[3]); }
	RNSubframeConfigr10RpdcchConfigr10PucchConfigr10& getRNSubframeConfigr10RpdcchConfigr10PucchConfigr10() { return *static_cast<RNSubframeConfigr10RpdcchConfigr10PucchConfigr10*>(items[4]); }
};

class RNSubframeConfigr10 : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RNSubframeConfigr10(): Sequence(&theInfo) {}

	void setRNSubframeConfigr10SubframeConfigPatternr10(const RNSubframeConfigr10SubframeConfigPatternr10& rNSubframeConfigr10SubframeConfigPatternr10) { *static_cast<RNSubframeConfigr10SubframeConfigPatternr10*>(items[0]) = rNSubframeConfigr10SubframeConfigPatternr10; }
	void setRNSubframeConfigr10RpdcchConfigr10(const RNSubframeConfigr10RpdcchConfigr10& rNSubframeConfigr10RpdcchConfigr10) { *static_cast<RNSubframeConfigr10RpdcchConfigr10*>(items[1]) = rNSubframeConfigr10RpdcchConfigr10; }

	RNSubframeConfigr10SubframeConfigPatternr10& getRNSubframeConfigr10SubframeConfigPatternr10() { return *static_cast<RNSubframeConfigr10SubframeConfigPatternr10*>(items[0]); }
	RNSubframeConfigr10RpdcchConfigr10& getRNSubframeConfigr10RpdcchConfigr10() { return *static_cast<RNSubframeConfigr10RpdcchConfigr10*>(items[1]); }
};

typedef OctetStringBase RNReconfigurationr10IEsLateNonCriticalExtension;

class RNReconfigurationr10IEsNonCriticalExtension : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RNReconfigurationr10IEsNonCriticalExtension(): Sequence(&theInfo) {}


};

class RNReconfigurationr10IEs : public Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	RNReconfigurationr10IEs(): Sequence(&theInfo) {}

	void setRnSystemInfor10(const RNSystemInfor10& rnSystemInfor10) { *static_cast<RNSystemInfor10*>(items[0]) = rnSystemInfor10; }
	void setRnSubframeConfigr10(const RNSubframeConfigr10& rnSubframeConfigr10) { *static_cast<RNSubframeConfigr10*>(items[1]) = rnSubframeConfigr10; }
	void setRNReconfigurationr10IEsLateNonCriticalExtension(const RNReconfigurationr10IEsLateNonCriticalExtension& rNReconfigurationr10IEsLateNonCriticalExtension) { *static_cast<RNReconfigurationr10IEsLateNonCriticalExtension*>(items[2]) = rNReconfigurationr10IEsLateNonCriticalExtension; }
	void setRNReconfigurationr10IEsNonCriticalExtension(const RNReconfigurationr10IEsNonCriticalExtension& rNReconfigurationr10IEsNonCriticalExtension) { *static_cast<RNReconfigurationr10IEsNonCriticalExtension*>(items[3]) = rNReconfigurationr10IEsNonCriticalExtension; }

	RNSystemInfor10& getRnSystemInfor10() { return *static_cast<RNSystemInfor10*>(items[0]); }
	RNSubframeConfigr10& getRnSubframeConfigr10() { return *static_cast<RNSubframeConfigr10*>(items[1]); }
	RNReconfigurationr10IEsLateNonCriticalExtension& getRNReconfigurationr10IEsLateNonCriticalExtension() { return *static_cast<RNReconfigurationr10IEsLateNonCriticalExtension*>(items[2]); }
	RNReconfigurationr10IEsNonCriticalExtension& getRNReconfigurationr10IEsNonCriticalExtension() { return *static_cast<RNReconfigurationr10IEsNonCriticalExtension*>(items[3]); }
};

typedef Null RNReconfigurationr10CriticalExtensionsC1Spare3;

typedef Null RNReconfigurationr10CriticalExtensionsC1Spare2;

typedef Null RNReconfigurationr10CriticalExtensionsC1Spare1;

class RNReconfigurationr10CriticalExtensionsC1 : public Choice {
private:
	static const void *choicesInfo[4];
public:
	enum RNReconfigurationr10CriticalExtensionsC1Choices {
		rnReconfigurationr10 = 0,
		rNReconfigurationr10CriticalExtensionsC1Spare3 = 1,
		rNReconfigurationr10CriticalExtensionsC1Spare2 = 2,
		rNReconfigurationr10CriticalExtensionsC1Spare1 = 3,
	};
	static const Info theInfo;
	RNReconfigurationr10CriticalExtensionsC1(): Choice(&theInfo) {}
};

class RNReconfigurationr10CriticalExtensionsCriticalExtensionsFuture : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RNReconfigurationr10CriticalExtensionsCriticalExtensionsFuture(): Sequence(&theInfo) {}


};

class RNReconfigurationr10CriticalExtensions : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum RNReconfigurationr10CriticalExtensionsChoices {
		rNReconfigurationr10CriticalExtensionsC1 = 0,
		rNReconfigurationr10CriticalExtensionsCriticalExtensionsFuture = 1,
	};
	static const Info theInfo;
	RNReconfigurationr10CriticalExtensions(): Choice(&theInfo) {}
};

class RNReconfigurationr10 : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RNReconfigurationr10(): Sequence(&theInfo) {}
	RNReconfigurationr10(const RRCTransactionIdentifier& rrcTransactionIdentifier, const RNReconfigurationr10CriticalExtensions& rNReconfigurationr10CriticalExtensions);

	void setRrcTransactionIdentifier(const RRCTransactionIdentifier& rrcTransactionIdentifier) { *static_cast<RRCTransactionIdentifier*>(items[0]) = rrcTransactionIdentifier; }
	void setRNReconfigurationr10CriticalExtensions(const RNReconfigurationr10CriticalExtensions& rNReconfigurationr10CriticalExtensions) { *static_cast<RNReconfigurationr10CriticalExtensions*>(items[1]) = rNReconfigurationr10CriticalExtensions; }

	RRCTransactionIdentifier& getRrcTransactionIdentifier() { return *static_cast<RRCTransactionIdentifier*>(items[0]); }
	RNReconfigurationr10CriticalExtensions& getRNReconfigurationr10CriticalExtensions() { return *static_cast<RNReconfigurationr10CriticalExtensions*>(items[1]); }
};

typedef Null DLDCCHMessageTypeC1Spare4;

typedef Null DLDCCHMessageTypeC1Spare3;

typedef Null DLDCCHMessageTypeC1Spare2;

typedef Null DLDCCHMessageTypeC1Spare1;

class DLDCCHMessageTypeC1 : public Choice {
private:
	static const void *choicesInfo[16];
public:
	enum DLDCCHMessageTypeC1Choices {
		csfbParametersResponseCDMA2000 = 0,
		dlInformationTransfer = 1,
		handoverFromEUTRAPreparationRequest = 2,
		mobilityFromEUTRACommand = 3,
		rrcConnectionReconfiguration = 4,
		rrcConnectionRelease = 5,
		securityModeCommand = 6,
		ueCapabilityEnquiry = 7,
		counterCheck = 8,
		ueInformationRequestr9 = 9,
		loggedMeasurementConfigurationr10 = 10,
		rnReconfigurationr10 = 11,
		dLDCCHMessageTypeC1Spare4 = 12,
		dLDCCHMessageTypeC1Spare3 = 13,
		dLDCCHMessageTypeC1Spare2 = 14,
		dLDCCHMessageTypeC1Spare1 = 15,
	};
	static const Info theInfo;
	DLDCCHMessageTypeC1(): Choice(&theInfo) {}
};

class DLDCCHMessageTypeMessageClassExtension : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	DLDCCHMessageTypeMessageClassExtension(): Sequence(&theInfo) {}


};

class DLDCCHMessageType : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum DLDCCHMessageTypeChoices {
		dLDCCHMessageTypeC1 = 0,
		dLDCCHMessageTypeMessageClassExtension = 1,
	};
	static const Info theInfo;
	DLDCCHMessageType(): Choice(&theInfo) {}
};

class DLDCCHMessage : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLDCCHMessage(): Sequence(&theInfo) {}
	DLDCCHMessage(const DLDCCHMessageType& message);

	void setMessage(const DLDCCHMessageType& message) { *static_cast<DLDCCHMessageType*>(items[0]) = message; }

	DLDCCHMessageType& getMessage() { return *static_cast<DLDCCHMessageType*>(items[0]); }
};

typedef BitString<CONSTRAINED, 16, 16> ShortMACI;

class ReestabUEIdentity : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	ReestabUEIdentity(): Sequence(&theInfo) {}
	ReestabUEIdentity(const CRNTI& cRNTI, const PhysCellId& physCellId, const ShortMACI& shortMACI);

	void setCRNTI(const CRNTI& cRNTI) { *static_cast<CRNTI*>(items[0]) = cRNTI; }
	void setPhysCellId(const PhysCellId& physCellId) { *static_cast<PhysCellId*>(items[1]) = physCellId; }
	void setShortMACI(const ShortMACI& shortMACI) { *static_cast<ShortMACI*>(items[2]) = shortMACI; }

	CRNTI& getCRNTI() { return *static_cast<CRNTI*>(items[0]); }
	PhysCellId& getPhysCellId() { return *static_cast<PhysCellId*>(items[1]); }
	ShortMACI& getShortMACI() { return *static_cast<ShortMACI*>(items[2]); }
};

enum ReestablishmentCauseValues {
	reconfigurationFailure_ReestablishmentCause = 0,
	handoverFailure_ReestablishmentCause = 1,
	otherFailure_ReestablishmentCause = 2,
	spare1_ReestablishmentCause = 3,
};
typedef Enumerated<CONSTRAINED, 3> ReestablishmentCause;

typedef BitString<CONSTRAINED, 2, 2> RRCConnectionReestablishmentRequestr8IEsSpare;

class RRCConnectionReestablishmentRequestr8IEs : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RRCConnectionReestablishmentRequestr8IEs(): Sequence(&theInfo) {}
	RRCConnectionReestablishmentRequestr8IEs(const ReestabUEIdentity& ueIdentity, const ReestablishmentCause& reestablishmentCause, const RRCConnectionReestablishmentRequestr8IEsSpare& rRCConnectionReestablishmentRequestr8IEsSpare);

	void setUeIdentity(const ReestabUEIdentity& ueIdentity) { *static_cast<ReestabUEIdentity*>(items[0]) = ueIdentity; }
	void setReestablishmentCause(const ReestablishmentCause& reestablishmentCause) { *static_cast<ReestablishmentCause*>(items[1]) = reestablishmentCause; }
	void setRRCConnectionReestablishmentRequestr8IEsSpare(const RRCConnectionReestablishmentRequestr8IEsSpare& rRCConnectionReestablishmentRequestr8IEsSpare) { *static_cast<RRCConnectionReestablishmentRequestr8IEsSpare*>(items[2]) = rRCConnectionReestablishmentRequestr8IEsSpare; }

	ReestabUEIdentity& getUeIdentity() { return *static_cast<ReestabUEIdentity*>(items[0]); }
	ReestablishmentCause& getReestablishmentCause() { return *static_cast<ReestablishmentCause*>(items[1]); }
	RRCConnectionReestablishmentRequestr8IEsSpare& getRRCConnectionReestablishmentRequestr8IEsSpare() { return *static_cast<RRCConnectionReestablishmentRequestr8IEsSpare*>(items[2]); }
};

class RRCConnectionReestablishmentRequestCriticalExtensionsCriticalExtensionsFuture : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RRCConnectionReestablishmentRequestCriticalExtensionsCriticalExtensionsFuture(): Sequence(&theInfo) {}


};

class RRCConnectionReestablishmentRequestCriticalExtensions : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum RRCConnectionReestablishmentRequestCriticalExtensionsChoices {
		rrcConnectionReestablishmentRequestr8 = 0,
		rRCConnectionReestablishmentRequestCriticalExtensionsCriticalExtensionsFuture = 1,
	};
	static const Info theInfo;
	RRCConnectionReestablishmentRequestCriticalExtensions(): Choice(&theInfo) {}
};

class RRCConnectionReestablishmentRequest : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RRCConnectionReestablishmentRequest(): Sequence(&theInfo) {}
	RRCConnectionReestablishmentRequest(const RRCConnectionReestablishmentRequestCriticalExtensions& rRCConnectionReestablishmentRequestCriticalExtensions);

	void setRRCConnectionReestablishmentRequestCriticalExtensions(const RRCConnectionReestablishmentRequestCriticalExtensions& rRCConnectionReestablishmentRequestCriticalExtensions) { *static_cast<RRCConnectionReestablishmentRequestCriticalExtensions*>(items[0]) = rRCConnectionReestablishmentRequestCriticalExtensions; }

	RRCConnectionReestablishmentRequestCriticalExtensions& getRRCConnectionReestablishmentRequestCriticalExtensions() { return *static_cast<RRCConnectionReestablishmentRequestCriticalExtensions*>(items[0]); }
};

typedef BitString<CONSTRAINED, 40, 40> InitialUEIdentityRandomValue;

class InitialUEIdentity : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum InitialUEIdentityChoices {
		sTMSI = 0,
		initialUEIdentityRandomValue = 1,
	};
	static const Info theInfo;
	InitialUEIdentity(): Choice(&theInfo) {}
};

enum EstablishmentCauseValues {
	emergency_EstablishmentCause = 0,
	highPriorityAccess_EstablishmentCause = 1,
	mt_Access_EstablishmentCause = 2,
	mo_Signalling_EstablishmentCause = 3,
	mo_Data_EstablishmentCause = 4,
	delayTolerantAccess_v1020_EstablishmentCause = 5,
	spare2_EstablishmentCause = 6,
	spare1_EstablishmentCause = 7,
};
typedef Enumerated<CONSTRAINED, 7> EstablishmentCause;

typedef BitString<CONSTRAINED, 1, 1> RRCConnectionRequestr8IEsSpare;

class RRCConnectionRequestr8IEs : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RRCConnectionRequestr8IEs(): Sequence(&theInfo) {}
	RRCConnectionRequestr8IEs(const InitialUEIdentity& ueIdentity, const EstablishmentCause& establishmentCause, const RRCConnectionRequestr8IEsSpare& rRCConnectionRequestr8IEsSpare);

	void setUeIdentity(const InitialUEIdentity& ueIdentity) { *static_cast<InitialUEIdentity*>(items[0]) = ueIdentity; }
	void setEstablishmentCause(const EstablishmentCause& establishmentCause) { *static_cast<EstablishmentCause*>(items[1]) = establishmentCause; }
	void setRRCConnectionRequestr8IEsSpare(const RRCConnectionRequestr8IEsSpare& rRCConnectionRequestr8IEsSpare) { *static_cast<RRCConnectionRequestr8IEsSpare*>(items[2]) = rRCConnectionRequestr8IEsSpare; }

	InitialUEIdentity& getUeIdentity() { return *static_cast<InitialUEIdentity*>(items[0]); }
	EstablishmentCause& getEstablishmentCause() { return *static_cast<EstablishmentCause*>(items[1]); }
	RRCConnectionRequestr8IEsSpare& getRRCConnectionRequestr8IEsSpare() { return *static_cast<RRCConnectionRequestr8IEsSpare*>(items[2]); }
};

class RRCConnectionRequestCriticalExtensionsCriticalExtensionsFuture : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RRCConnectionRequestCriticalExtensionsCriticalExtensionsFuture(): Sequence(&theInfo) {}


};

class RRCConnectionRequestCriticalExtensions : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum RRCConnectionRequestCriticalExtensionsChoices {
		rrcConnectionRequestr8 = 0,
		rRCConnectionRequestCriticalExtensionsCriticalExtensionsFuture = 1,
	};
	static const Info theInfo;
	RRCConnectionRequestCriticalExtensions(): Choice(&theInfo) {}
};

class RRCConnectionRequest : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RRCConnectionRequest(): Sequence(&theInfo) {}
	RRCConnectionRequest(const RRCConnectionRequestCriticalExtensions& rRCConnectionRequestCriticalExtensions);

	void setRRCConnectionRequestCriticalExtensions(const RRCConnectionRequestCriticalExtensions& rRCConnectionRequestCriticalExtensions) { *static_cast<RRCConnectionRequestCriticalExtensions*>(items[0]) = rRCConnectionRequestCriticalExtensions; }

	RRCConnectionRequestCriticalExtensions& getRRCConnectionRequestCriticalExtensions() { return *static_cast<RRCConnectionRequestCriticalExtensions*>(items[0]); }
};

class ULCCCHMessageTypeC1 : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum ULCCCHMessageTypeC1Choices {
		rrcConnectionReestablishmentRequest = 0,
		rrcConnectionRequest = 1,
	};
	static const Info theInfo;
	ULCCCHMessageTypeC1(): Choice(&theInfo) {}
};

class ULCCCHMessageTypeMessageClassExtension : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	ULCCCHMessageTypeMessageClassExtension(): Sequence(&theInfo) {}


};

class ULCCCHMessageType : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum ULCCCHMessageTypeChoices {
		uLCCCHMessageTypeC1 = 0,
		uLCCCHMessageTypeMessageClassExtension = 1,
	};
	static const Info theInfo;
	ULCCCHMessageType(): Choice(&theInfo) {}
};

class ULCCCHMessage : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULCCCHMessage(): Sequence(&theInfo) {}
	ULCCCHMessage(const ULCCCHMessageType& message);

	void setMessage(const ULCCCHMessageType& message) { *static_cast<ULCCCHMessageType*>(items[0]) = message; }

	ULCCCHMessageType& getMessage() { return *static_cast<ULCCCHMessageType*>(items[0]); }
};

typedef OctetStringBase CSFBParametersRequestCDMA2000v8a0IEsLateNonCriticalExtension;

class CSFBParametersRequestCDMA2000v8a0IEsNonCriticalExtension : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	CSFBParametersRequestCDMA2000v8a0IEsNonCriticalExtension(): Sequence(&theInfo) {}


};

class CSFBParametersRequestCDMA2000v8a0IEs : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CSFBParametersRequestCDMA2000v8a0IEs(): Sequence(&theInfo) {}

	void setCSFBParametersRequestCDMA2000v8a0IEsLateNonCriticalExtension(const CSFBParametersRequestCDMA2000v8a0IEsLateNonCriticalExtension& cSFBParametersRequestCDMA2000v8a0IEsLateNonCriticalExtension) { *static_cast<CSFBParametersRequestCDMA2000v8a0IEsLateNonCriticalExtension*>(items[0]) = cSFBParametersRequestCDMA2000v8a0IEsLateNonCriticalExtension; }
	void setCSFBParametersRequestCDMA2000v8a0IEsNonCriticalExtension(const CSFBParametersRequestCDMA2000v8a0IEsNonCriticalExtension& cSFBParametersRequestCDMA2000v8a0IEsNonCriticalExtension) { *static_cast<CSFBParametersRequestCDMA2000v8a0IEsNonCriticalExtension*>(items[1]) = cSFBParametersRequestCDMA2000v8a0IEsNonCriticalExtension; }

	CSFBParametersRequestCDMA2000v8a0IEsLateNonCriticalExtension& getCSFBParametersRequestCDMA2000v8a0IEsLateNonCriticalExtension() { return *static_cast<CSFBParametersRequestCDMA2000v8a0IEsLateNonCriticalExtension*>(items[0]); }
	CSFBParametersRequestCDMA2000v8a0IEsNonCriticalExtension& getCSFBParametersRequestCDMA2000v8a0IEsNonCriticalExtension() { return *static_cast<CSFBParametersRequestCDMA2000v8a0IEsNonCriticalExtension*>(items[1]); }
};

class CSFBParametersRequestCDMA2000r8IEs : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CSFBParametersRequestCDMA2000r8IEs(): Sequence(&theInfo) {}

	void setNonCriticalExtension(const CSFBParametersRequestCDMA2000v8a0IEs& nonCriticalExtension) { *static_cast<CSFBParametersRequestCDMA2000v8a0IEs*>(items[0]) = nonCriticalExtension; }

	CSFBParametersRequestCDMA2000v8a0IEs& getNonCriticalExtension() { return *static_cast<CSFBParametersRequestCDMA2000v8a0IEs*>(items[0]); }
};

class CSFBParametersRequestCDMA2000CriticalExtensionsCriticalExtensionsFuture : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	CSFBParametersRequestCDMA2000CriticalExtensionsCriticalExtensionsFuture(): Sequence(&theInfo) {}


};

class CSFBParametersRequestCDMA2000CriticalExtensions : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum CSFBParametersRequestCDMA2000CriticalExtensionsChoices {
		csfbParametersRequestCDMA2000r8 = 0,
		cSFBParametersRequestCDMA2000CriticalExtensionsCriticalExtensionsFuture = 1,
	};
	static const Info theInfo;
	CSFBParametersRequestCDMA2000CriticalExtensions(): Choice(&theInfo) {}
};

class CSFBParametersRequestCDMA2000 : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CSFBParametersRequestCDMA2000(): Sequence(&theInfo) {}
	CSFBParametersRequestCDMA2000(const CSFBParametersRequestCDMA2000CriticalExtensions& cSFBParametersRequestCDMA2000CriticalExtensions);

	void setCSFBParametersRequestCDMA2000CriticalExtensions(const CSFBParametersRequestCDMA2000CriticalExtensions& cSFBParametersRequestCDMA2000CriticalExtensions) { *static_cast<CSFBParametersRequestCDMA2000CriticalExtensions*>(items[0]) = cSFBParametersRequestCDMA2000CriticalExtensions; }

	CSFBParametersRequestCDMA2000CriticalExtensions& getCSFBParametersRequestCDMA2000CriticalExtensions() { return *static_cast<CSFBParametersRequestCDMA2000CriticalExtensions*>(items[0]); }
};

class MeasResultsMeasResultPCell : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MeasResultsMeasResultPCell(): Sequence(&theInfo) {}
	MeasResultsMeasResultPCell(const RSRPRange& rsrpResult, const RSRQRange& rsrqResult);

	void setRsrpResult(const RSRPRange& rsrpResult) { *static_cast<RSRPRange*>(items[0]) = rsrpResult; }
	void setRsrqResult(const RSRQRange& rsrqResult) { *static_cast<RSRQRange*>(items[1]) = rsrqResult; }

	RSRPRange& getRsrpResult() { return *static_cast<RSRPRange*>(items[0]); }
	RSRQRange& getRsrqResult() { return *static_cast<RSRQRange*>(items[1]); }
};

typedef SequenceOf<PLMNIdentity, CONSTRAINED, 1, 5> PLMNIdentityList2;

class MeasResultEUTRACgiInfo : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	MeasResultEUTRACgiInfo(): Sequence(&theInfo) {}
	MeasResultEUTRACgiInfo(const CellGlobalIdEUTRA& cellGlobalId, const TrackingAreaCode& trackingAreaCode);

	void setCellGlobalId(const CellGlobalIdEUTRA& cellGlobalId) { *static_cast<CellGlobalIdEUTRA*>(items[0]) = cellGlobalId; }
	void setTrackingAreaCode(const TrackingAreaCode& trackingAreaCode) { *static_cast<TrackingAreaCode*>(items[1]) = trackingAreaCode; }
	void setPlmnIdentityList(const PLMNIdentityList2& plmnIdentityList) { *static_cast<PLMNIdentityList2*>(items[2]) = plmnIdentityList; }

	CellGlobalIdEUTRA& getCellGlobalId() { return *static_cast<CellGlobalIdEUTRA*>(items[0]); }
	TrackingAreaCode& getTrackingAreaCode() { return *static_cast<TrackingAreaCode*>(items[1]); }
	PLMNIdentityList2& getPlmnIdentityList() { return *static_cast<PLMNIdentityList2*>(items[2]); }
};

enum AdditionalSIInfor9csg_MemberStatus_r9Values {
	member_AdditionalSIInfor9csg_MemberStatus_r9 = 0,
};
typedef Enumerated<CONSTRAINED, 0> AdditionalSIInfor9csg_MemberStatus_r9;

class AdditionalSIInfor9 : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	AdditionalSIInfor9(): Sequence(&theInfo) {}

	void setAdditionalSIInfor9csg_MemberStatus_r9(const AdditionalSIInfor9csg_MemberStatus_r9& additionalSIInfor9csg_MemberStatus_r9) { *static_cast<AdditionalSIInfor9csg_MemberStatus_r9*>(items[0]) = additionalSIInfor9csg_MemberStatus_r9; }
	void setCsgIdentityr9(const CSGIdentity& csgIdentityr9) { *static_cast<CSGIdentity*>(items[1]) = csgIdentityr9; }

	AdditionalSIInfor9csg_MemberStatus_r9& getAdditionalSIInfor9csg_MemberStatus_r9() { return *static_cast<AdditionalSIInfor9csg_MemberStatus_r9*>(items[0]); }
	CSGIdentity& getCsgIdentityr9() { return *static_cast<CSGIdentity*>(items[1]); }
};

class MeasResultEUTRAMeasResult : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	MeasResultEUTRAMeasResult(): Sequence(&theInfo) {}

	void setRsrpResult(const RSRPRange& rsrpResult) { *static_cast<RSRPRange*>(items[0]) = rsrpResult; }
	void setRsrqResult(const RSRQRange& rsrqResult) { *static_cast<RSRQRange*>(items[1]) = rsrqResult; }
	void setAdditionalSIInfor9(const AdditionalSIInfor9& additionalSIInfor9) { *static_cast<AdditionalSIInfor9*>(items[2]) = additionalSIInfor9; }

	RSRPRange& getRsrpResult() { return *static_cast<RSRPRange*>(items[0]); }
	RSRQRange& getRsrqResult() { return *static_cast<RSRQRange*>(items[1]); }
	AdditionalSIInfor9& getAdditionalSIInfor9() { return *static_cast<AdditionalSIInfor9*>(items[2]); }
};

class MeasResultEUTRA : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	MeasResultEUTRA(): Sequence(&theInfo) {}
	MeasResultEUTRA(const PhysCellId& physCellId, const MeasResultEUTRAMeasResult& measResultEUTRAMeasResult);

	void setPhysCellId(const PhysCellId& physCellId) { *static_cast<PhysCellId*>(items[0]) = physCellId; }
	void setMeasResultEUTRACgiInfo(const MeasResultEUTRACgiInfo& measResultEUTRACgiInfo) { *static_cast<MeasResultEUTRACgiInfo*>(items[1]) = measResultEUTRACgiInfo; }
	void setMeasResultEUTRAMeasResult(const MeasResultEUTRAMeasResult& measResultEUTRAMeasResult) { *static_cast<MeasResultEUTRAMeasResult*>(items[2]) = measResultEUTRAMeasResult; }

	PhysCellId& getPhysCellId() { return *static_cast<PhysCellId*>(items[0]); }
	MeasResultEUTRACgiInfo& getMeasResultEUTRACgiInfo() { return *static_cast<MeasResultEUTRACgiInfo*>(items[1]); }
	MeasResultEUTRAMeasResult& getMeasResultEUTRAMeasResult() { return *static_cast<MeasResultEUTRAMeasResult*>(items[2]); }
};

typedef SequenceOf<MeasResultEUTRA, CONSTRAINED, 1, maxCellReport> MeasResultListEUTRA;

class MeasResultUTRAPhysCellId : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum MeasResultUTRAPhysCellIdChoices {
		fdd = 0,
		tdd = 1,
	};
	static const Info theInfo;
	MeasResultUTRAPhysCellId(): Choice(&theInfo) {}
};

typedef BitString<CONSTRAINED, 28, 28> CellGlobalIdUTRACellIdentity;

class CellGlobalIdUTRA : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellGlobalIdUTRA(): Sequence(&theInfo) {}
	CellGlobalIdUTRA(const PLMNIdentity& plmnIdentity, const CellGlobalIdUTRACellIdentity& cellGlobalIdUTRACellIdentity);

	void setPlmnIdentity(const PLMNIdentity& plmnIdentity) { *static_cast<PLMNIdentity*>(items[0]) = plmnIdentity; }
	void setCellGlobalIdUTRACellIdentity(const CellGlobalIdUTRACellIdentity& cellGlobalIdUTRACellIdentity) { *static_cast<CellGlobalIdUTRACellIdentity*>(items[1]) = cellGlobalIdUTRACellIdentity; }

	PLMNIdentity& getPlmnIdentity() { return *static_cast<PLMNIdentity*>(items[0]); }
	CellGlobalIdUTRACellIdentity& getCellGlobalIdUTRACellIdentity() { return *static_cast<CellGlobalIdUTRACellIdentity*>(items[1]); }
};

typedef BitString<CONSTRAINED, 16, 16> MeasResultUTRACgiInfoLocationAreaCode;

typedef BitString<CONSTRAINED, 8, 8> MeasResultUTRACgiInfoRoutingAreaCode;

class MeasResultUTRACgiInfo : public Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	MeasResultUTRACgiInfo(): Sequence(&theInfo) {}
	MeasResultUTRACgiInfo(const CellGlobalIdUTRA& cellGlobalId);

	void setCellGlobalId(const CellGlobalIdUTRA& cellGlobalId) { *static_cast<CellGlobalIdUTRA*>(items[0]) = cellGlobalId; }
	void setMeasResultUTRACgiInfoLocationAreaCode(const MeasResultUTRACgiInfoLocationAreaCode& measResultUTRACgiInfoLocationAreaCode) { *static_cast<MeasResultUTRACgiInfoLocationAreaCode*>(items[1]) = measResultUTRACgiInfoLocationAreaCode; }
	void setMeasResultUTRACgiInfoRoutingAreaCode(const MeasResultUTRACgiInfoRoutingAreaCode& measResultUTRACgiInfoRoutingAreaCode) { *static_cast<MeasResultUTRACgiInfoRoutingAreaCode*>(items[2]) = measResultUTRACgiInfoRoutingAreaCode; }
	void setPlmnIdentityList(const PLMNIdentityList2& plmnIdentityList) { *static_cast<PLMNIdentityList2*>(items[3]) = plmnIdentityList; }

	CellGlobalIdUTRA& getCellGlobalId() { return *static_cast<CellGlobalIdUTRA*>(items[0]); }
	MeasResultUTRACgiInfoLocationAreaCode& getMeasResultUTRACgiInfoLocationAreaCode() { return *static_cast<MeasResultUTRACgiInfoLocationAreaCode*>(items[1]); }
	MeasResultUTRACgiInfoRoutingAreaCode& getMeasResultUTRACgiInfoRoutingAreaCode() { return *static_cast<MeasResultUTRACgiInfoRoutingAreaCode*>(items[2]); }
	PLMNIdentityList2& getPlmnIdentityList() { return *static_cast<PLMNIdentityList2*>(items[3]); }
};

typedef Integer<CONSTRAINED, -5, 91> MeasResultUTRAMeasResultUtraRSCP;

typedef Integer<CONSTRAINED, 0, 49> MeasResultUTRAMeasResultUtraEcN0;

class MeasResultUTRAMeasResult : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	MeasResultUTRAMeasResult(): Sequence(&theInfo) {}

	void setMeasResultUTRAMeasResultUtraRSCP(const MeasResultUTRAMeasResultUtraRSCP& measResultUTRAMeasResultUtraRSCP) { *static_cast<MeasResultUTRAMeasResultUtraRSCP*>(items[0]) = measResultUTRAMeasResultUtraRSCP; }
	void setMeasResultUTRAMeasResultUtraEcN0(const MeasResultUTRAMeasResultUtraEcN0& measResultUTRAMeasResultUtraEcN0) { *static_cast<MeasResultUTRAMeasResultUtraEcN0*>(items[1]) = measResultUTRAMeasResultUtraEcN0; }
	void setAdditionalSIInfor9(const AdditionalSIInfor9& additionalSIInfor9) { *static_cast<AdditionalSIInfor9*>(items[2]) = additionalSIInfor9; }

	MeasResultUTRAMeasResultUtraRSCP& getMeasResultUTRAMeasResultUtraRSCP() { return *static_cast<MeasResultUTRAMeasResultUtraRSCP*>(items[0]); }
	MeasResultUTRAMeasResultUtraEcN0& getMeasResultUTRAMeasResultUtraEcN0() { return *static_cast<MeasResultUTRAMeasResultUtraEcN0*>(items[1]); }
	AdditionalSIInfor9& getAdditionalSIInfor9() { return *static_cast<AdditionalSIInfor9*>(items[2]); }
};

class MeasResultUTRA : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	MeasResultUTRA(): Sequence(&theInfo) {}
	MeasResultUTRA(const MeasResultUTRAPhysCellId& measResultUTRAPhysCellId, const MeasResultUTRAMeasResult& measResultUTRAMeasResult);

	void setMeasResultUTRAPhysCellId(const MeasResultUTRAPhysCellId& measResultUTRAPhysCellId) { *static_cast<MeasResultUTRAPhysCellId*>(items[0]) = measResultUTRAPhysCellId; }
	void setMeasResultUTRACgiInfo(const MeasResultUTRACgiInfo& measResultUTRACgiInfo) { *static_cast<MeasResultUTRACgiInfo*>(items[1]) = measResultUTRACgiInfo; }
	void setMeasResultUTRAMeasResult(const MeasResultUTRAMeasResult& measResultUTRAMeasResult) { *static_cast<MeasResultUTRAMeasResult*>(items[2]) = measResultUTRAMeasResult; }

	MeasResultUTRAPhysCellId& getMeasResultUTRAPhysCellId() { return *static_cast<MeasResultUTRAPhysCellId*>(items[0]); }
	MeasResultUTRACgiInfo& getMeasResultUTRACgiInfo() { return *static_cast<MeasResultUTRACgiInfo*>(items[1]); }
	MeasResultUTRAMeasResult& getMeasResultUTRAMeasResult() { return *static_cast<MeasResultUTRAMeasResult*>(items[2]); }
};

typedef SequenceOf<MeasResultUTRA, CONSTRAINED, 1, maxCellReport> MeasResultListUTRA;

typedef BitString<CONSTRAINED, 16, 16> CellGlobalIdGERANLocationAreaCode;

typedef BitString<CONSTRAINED, 16, 16> CellGlobalIdGERANCellIdentity;

class CellGlobalIdGERAN : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	CellGlobalIdGERAN(): Sequence(&theInfo) {}
	CellGlobalIdGERAN(const PLMNIdentity& plmnIdentity, const CellGlobalIdGERANLocationAreaCode& cellGlobalIdGERANLocationAreaCode, const CellGlobalIdGERANCellIdentity& cellGlobalIdGERANCellIdentity);

	void setPlmnIdentity(const PLMNIdentity& plmnIdentity) { *static_cast<PLMNIdentity*>(items[0]) = plmnIdentity; }
	void setCellGlobalIdGERANLocationAreaCode(const CellGlobalIdGERANLocationAreaCode& cellGlobalIdGERANLocationAreaCode) { *static_cast<CellGlobalIdGERANLocationAreaCode*>(items[1]) = cellGlobalIdGERANLocationAreaCode; }
	void setCellGlobalIdGERANCellIdentity(const CellGlobalIdGERANCellIdentity& cellGlobalIdGERANCellIdentity) { *static_cast<CellGlobalIdGERANCellIdentity*>(items[2]) = cellGlobalIdGERANCellIdentity; }

	PLMNIdentity& getPlmnIdentity() { return *static_cast<PLMNIdentity*>(items[0]); }
	CellGlobalIdGERANLocationAreaCode& getCellGlobalIdGERANLocationAreaCode() { return *static_cast<CellGlobalIdGERANLocationAreaCode*>(items[1]); }
	CellGlobalIdGERANCellIdentity& getCellGlobalIdGERANCellIdentity() { return *static_cast<CellGlobalIdGERANCellIdentity*>(items[2]); }
};

typedef BitString<CONSTRAINED, 8, 8> MeasResultGERANCgiInfoRoutingAreaCode;

class MeasResultGERANCgiInfo : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MeasResultGERANCgiInfo(): Sequence(&theInfo) {}
	MeasResultGERANCgiInfo(const CellGlobalIdGERAN& cellGlobalId);

	void setCellGlobalId(const CellGlobalIdGERAN& cellGlobalId) { *static_cast<CellGlobalIdGERAN*>(items[0]) = cellGlobalId; }
	void setMeasResultGERANCgiInfoRoutingAreaCode(const MeasResultGERANCgiInfoRoutingAreaCode& measResultGERANCgiInfoRoutingAreaCode) { *static_cast<MeasResultGERANCgiInfoRoutingAreaCode*>(items[1]) = measResultGERANCgiInfoRoutingAreaCode; }

	CellGlobalIdGERAN& getCellGlobalId() { return *static_cast<CellGlobalIdGERAN*>(items[0]); }
	MeasResultGERANCgiInfoRoutingAreaCode& getMeasResultGERANCgiInfoRoutingAreaCode() { return *static_cast<MeasResultGERANCgiInfoRoutingAreaCode*>(items[1]); }
};

typedef Integer<CONSTRAINED, 0, 63> MeasResultGERANMeasResultRssi;

class MeasResultGERANMeasResult : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasResultGERANMeasResult(): Sequence(&theInfo) {}
	MeasResultGERANMeasResult(const MeasResultGERANMeasResultRssi& measResultGERANMeasResultRssi);

	void setMeasResultGERANMeasResultRssi(const MeasResultGERANMeasResultRssi& measResultGERANMeasResultRssi) { *static_cast<MeasResultGERANMeasResultRssi*>(items[0]) = measResultGERANMeasResultRssi; }

	MeasResultGERANMeasResultRssi& getMeasResultGERANMeasResultRssi() { return *static_cast<MeasResultGERANMeasResultRssi*>(items[0]); }
};

class MeasResultGERAN : public Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	MeasResultGERAN(): Sequence(&theInfo) {}
	MeasResultGERAN(const CarrierFreqGERAN& carrierFreq, const PhysCellIdGERAN& physCellId, const MeasResultGERANMeasResult& measResultGERANMeasResult);

	void setCarrierFreq(const CarrierFreqGERAN& carrierFreq) { *static_cast<CarrierFreqGERAN*>(items[0]) = carrierFreq; }
	void setPhysCellId(const PhysCellIdGERAN& physCellId) { *static_cast<PhysCellIdGERAN*>(items[1]) = physCellId; }
	void setMeasResultGERANCgiInfo(const MeasResultGERANCgiInfo& measResultGERANCgiInfo) { *static_cast<MeasResultGERANCgiInfo*>(items[2]) = measResultGERANCgiInfo; }
	void setMeasResultGERANMeasResult(const MeasResultGERANMeasResult& measResultGERANMeasResult) { *static_cast<MeasResultGERANMeasResult*>(items[3]) = measResultGERANMeasResult; }

	CarrierFreqGERAN& getCarrierFreq() { return *static_cast<CarrierFreqGERAN*>(items[0]); }
	PhysCellIdGERAN& getPhysCellId() { return *static_cast<PhysCellIdGERAN*>(items[1]); }
	MeasResultGERANCgiInfo& getMeasResultGERANCgiInfo() { return *static_cast<MeasResultGERANCgiInfo*>(items[2]); }
	MeasResultGERANMeasResult& getMeasResultGERANMeasResult() { return *static_cast<MeasResultGERANMeasResult*>(items[3]); }
};

typedef SequenceOf<MeasResultGERAN, CONSTRAINED, 1, maxCellReport> MeasResultListGERAN;

typedef Boolean MeasResultsCDMA2000PreRegistrationStatusHRPD;

typedef BitString<CONSTRAINED, 47, 47> CellGlobalIdCDMA2000CellGlobalId1XRTT;

typedef BitString<CONSTRAINED, 128, 128> CellGlobalIdCDMA2000CellGlobalIdHRPD;

class CellGlobalIdCDMA2000 : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum CellGlobalIdCDMA2000Choices {
		cellGlobalIdCDMA2000CellGlobalId1XRTT = 0,
		cellGlobalIdCDMA2000CellGlobalIdHRPD = 1,
	};
	static const Info theInfo;
	CellGlobalIdCDMA2000(): Choice(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 32767> MeasResultCDMA2000MeasResultPilotPnPhase;

typedef Integer<CONSTRAINED, 0, 63> MeasResultCDMA2000MeasResultPilotStrength;

class MeasResultCDMA2000MeasResult : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MeasResultCDMA2000MeasResult(): Sequence(&theInfo) {}
	MeasResultCDMA2000MeasResult(const MeasResultCDMA2000MeasResultPilotStrength& measResultCDMA2000MeasResultPilotStrength);

	void setMeasResultCDMA2000MeasResultPilotPnPhase(const MeasResultCDMA2000MeasResultPilotPnPhase& measResultCDMA2000MeasResultPilotPnPhase) { *static_cast<MeasResultCDMA2000MeasResultPilotPnPhase*>(items[0]) = measResultCDMA2000MeasResultPilotPnPhase; }
	void setMeasResultCDMA2000MeasResultPilotStrength(const MeasResultCDMA2000MeasResultPilotStrength& measResultCDMA2000MeasResultPilotStrength) { *static_cast<MeasResultCDMA2000MeasResultPilotStrength*>(items[1]) = measResultCDMA2000MeasResultPilotStrength; }

	MeasResultCDMA2000MeasResultPilotPnPhase& getMeasResultCDMA2000MeasResultPilotPnPhase() { return *static_cast<MeasResultCDMA2000MeasResultPilotPnPhase*>(items[0]); }
	MeasResultCDMA2000MeasResultPilotStrength& getMeasResultCDMA2000MeasResultPilotStrength() { return *static_cast<MeasResultCDMA2000MeasResultPilotStrength*>(items[1]); }
};

class MeasResultCDMA2000 : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	MeasResultCDMA2000(): Sequence(&theInfo) {}
	MeasResultCDMA2000(const PhysCellIdCDMA2000& physCellId, const MeasResultCDMA2000MeasResult& measResultCDMA2000MeasResult);

	void setPhysCellId(const PhysCellIdCDMA2000& physCellId) { *static_cast<PhysCellIdCDMA2000*>(items[0]) = physCellId; }
	void setCgiInfo(const CellGlobalIdCDMA2000& cgiInfo) { *static_cast<CellGlobalIdCDMA2000*>(items[1]) = cgiInfo; }
	void setMeasResultCDMA2000MeasResult(const MeasResultCDMA2000MeasResult& measResultCDMA2000MeasResult) { *static_cast<MeasResultCDMA2000MeasResult*>(items[2]) = measResultCDMA2000MeasResult; }

	PhysCellIdCDMA2000& getPhysCellId() { return *static_cast<PhysCellIdCDMA2000*>(items[0]); }
	CellGlobalIdCDMA2000& getCgiInfo() { return *static_cast<CellGlobalIdCDMA2000*>(items[1]); }
	MeasResultCDMA2000MeasResult& getMeasResultCDMA2000MeasResult() { return *static_cast<MeasResultCDMA2000MeasResult*>(items[2]); }
};

typedef SequenceOf<MeasResultCDMA2000, CONSTRAINED, 1, maxCellReport> MeasResultListCDMA2000;

class MeasResultsCDMA2000 : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MeasResultsCDMA2000(): Sequence(&theInfo) {}
	MeasResultsCDMA2000(const MeasResultsCDMA2000PreRegistrationStatusHRPD& measResultsCDMA2000PreRegistrationStatusHRPD, const MeasResultListCDMA2000& measResultListCDMA2000);

	void setMeasResultsCDMA2000PreRegistrationStatusHRPD(const MeasResultsCDMA2000PreRegistrationStatusHRPD& measResultsCDMA2000PreRegistrationStatusHRPD) { *static_cast<MeasResultsCDMA2000PreRegistrationStatusHRPD*>(items[0]) = measResultsCDMA2000PreRegistrationStatusHRPD; }
	void setMeasResultListCDMA2000(const MeasResultListCDMA2000& measResultListCDMA2000) { *static_cast<MeasResultListCDMA2000*>(items[1]) = measResultListCDMA2000; }

	MeasResultsCDMA2000PreRegistrationStatusHRPD& getMeasResultsCDMA2000PreRegistrationStatusHRPD() { return *static_cast<MeasResultsCDMA2000PreRegistrationStatusHRPD*>(items[0]); }
	MeasResultListCDMA2000& getMeasResultListCDMA2000() { return *static_cast<MeasResultListCDMA2000*>(items[1]); }
};

class MeasResultsMeasResultNeighCells : public Choice {
private:
	static const void *choicesInfo[4];
public:
	enum MeasResultsMeasResultNeighCellsChoices {
		measResultListEUTRA = 0,
		measResultListUTRA = 1,
		measResultListGERAN = 2,
		measResultsCDMA2000 = 3,
	};
	static const Info theInfo;
	MeasResultsMeasResultNeighCells(): Choice(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 4095> MeasResultForECIDr9UeRxTxTimeDiffResultr9;

typedef BitString<CONSTRAINED, 10, 10> MeasResultForECIDr9CurrentSFNr9;

class MeasResultForECIDr9 : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MeasResultForECIDr9(): Sequence(&theInfo) {}
	MeasResultForECIDr9(const MeasResultForECIDr9UeRxTxTimeDiffResultr9& measResultForECIDr9UeRxTxTimeDiffResultr9, const MeasResultForECIDr9CurrentSFNr9& measResultForECIDr9CurrentSFNr9);

	void setMeasResultForECIDr9UeRxTxTimeDiffResultr9(const MeasResultForECIDr9UeRxTxTimeDiffResultr9& measResultForECIDr9UeRxTxTimeDiffResultr9) { *static_cast<MeasResultForECIDr9UeRxTxTimeDiffResultr9*>(items[0]) = measResultForECIDr9UeRxTxTimeDiffResultr9; }
	void setMeasResultForECIDr9CurrentSFNr9(const MeasResultForECIDr9CurrentSFNr9& measResultForECIDr9CurrentSFNr9) { *static_cast<MeasResultForECIDr9CurrentSFNr9*>(items[1]) = measResultForECIDr9CurrentSFNr9; }

	MeasResultForECIDr9UeRxTxTimeDiffResultr9& getMeasResultForECIDr9UeRxTxTimeDiffResultr9() { return *static_cast<MeasResultForECIDr9UeRxTxTimeDiffResultr9*>(items[0]); }
	MeasResultForECIDr9CurrentSFNr9& getMeasResultForECIDr9CurrentSFNr9() { return *static_cast<MeasResultForECIDr9CurrentSFNr9*>(items[1]); }
};

typedef OctetStringBase LocationInfor10LocationCoordinatesr10EllipsoidPointr10;

typedef OctetStringBase LocationInfor10LocationCoordinatesr10EllipsoidPointWithAltituder10;

class LocationInfor10LocationCoordinatesr10 : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum LocationInfor10LocationCoordinatesr10Choices {
		locationInfor10LocationCoordinatesr10EllipsoidPointr10 = 0,
		locationInfor10LocationCoordinatesr10EllipsoidPointWithAltituder10 = 1,
	};
	static const Info theInfo;
	LocationInfor10LocationCoordinatesr10(): Choice(&theInfo) {}
};

typedef OctetStringBase LocationInfor10HorizontalVelocityr10;

typedef OctetStringBase LocationInfor10GnssTODmsecr10;

class LocationInfor10 : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	LocationInfor10(): Sequence(&theInfo) {}
	LocationInfor10(const LocationInfor10LocationCoordinatesr10& locationInfor10LocationCoordinatesr10);

	void setLocationInfor10LocationCoordinatesr10(const LocationInfor10LocationCoordinatesr10& locationInfor10LocationCoordinatesr10) { *static_cast<LocationInfor10LocationCoordinatesr10*>(items[0]) = locationInfor10LocationCoordinatesr10; }
	void setLocationInfor10HorizontalVelocityr10(const LocationInfor10HorizontalVelocityr10& locationInfor10HorizontalVelocityr10) { *static_cast<LocationInfor10HorizontalVelocityr10*>(items[1]) = locationInfor10HorizontalVelocityr10; }
	void setLocationInfor10GnssTODmsecr10(const LocationInfor10GnssTODmsecr10& locationInfor10GnssTODmsecr10) { *static_cast<LocationInfor10GnssTODmsecr10*>(items[2]) = locationInfor10GnssTODmsecr10; }

	LocationInfor10LocationCoordinatesr10& getLocationInfor10LocationCoordinatesr10() { return *static_cast<LocationInfor10LocationCoordinatesr10*>(items[0]); }
	LocationInfor10HorizontalVelocityr10& getLocationInfor10HorizontalVelocityr10() { return *static_cast<LocationInfor10HorizontalVelocityr10*>(items[1]); }
	LocationInfor10GnssTODmsecr10& getLocationInfor10GnssTODmsecr10() { return *static_cast<LocationInfor10GnssTODmsecr10*>(items[2]); }
};

class MeasResultServFreqr10MeasResultSCellr10 : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MeasResultServFreqr10MeasResultSCellr10(): Sequence(&theInfo) {}
	MeasResultServFreqr10MeasResultSCellr10(const RSRPRange& rsrpResultSCellr10, const RSRQRange& rsrqResultSCellr10);

	void setRsrpResultSCellr10(const RSRPRange& rsrpResultSCellr10) { *static_cast<RSRPRange*>(items[0]) = rsrpResultSCellr10; }
	void setRsrqResultSCellr10(const RSRQRange& rsrqResultSCellr10) { *static_cast<RSRQRange*>(items[1]) = rsrqResultSCellr10; }

	RSRPRange& getRsrpResultSCellr10() { return *static_cast<RSRPRange*>(items[0]); }
	RSRQRange& getRsrqResultSCellr10() { return *static_cast<RSRQRange*>(items[1]); }
};

class MeasResultServFreqr10MeasResultBestNeighCellr10 : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	MeasResultServFreqr10MeasResultBestNeighCellr10(): Sequence(&theInfo) {}
	MeasResultServFreqr10MeasResultBestNeighCellr10(const PhysCellId& physCellIdr10, const RSRPRange& rsrpResultNCellr10, const RSRQRange& rsrqResultNCellr10);

	void setPhysCellIdr10(const PhysCellId& physCellIdr10) { *static_cast<PhysCellId*>(items[0]) = physCellIdr10; }
	void setRsrpResultNCellr10(const RSRPRange& rsrpResultNCellr10) { *static_cast<RSRPRange*>(items[1]) = rsrpResultNCellr10; }
	void setRsrqResultNCellr10(const RSRQRange& rsrqResultNCellr10) { *static_cast<RSRQRange*>(items[2]) = rsrqResultNCellr10; }

	PhysCellId& getPhysCellIdr10() { return *static_cast<PhysCellId*>(items[0]); }
	RSRPRange& getRsrpResultNCellr10() { return *static_cast<RSRPRange*>(items[1]); }
	RSRQRange& getRsrqResultNCellr10() { return *static_cast<RSRQRange*>(items[2]); }
};

class MeasResultServFreqr10 : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	MeasResultServFreqr10(): Sequence(&theInfo) {}
	MeasResultServFreqr10(const ServCellIndexr10& servFreqIdr10);

	void setServFreqIdr10(const ServCellIndexr10& servFreqIdr10) { *static_cast<ServCellIndexr10*>(items[0]) = servFreqIdr10; }
	void setMeasResultServFreqr10MeasResultSCellr10(const MeasResultServFreqr10MeasResultSCellr10& measResultServFreqr10MeasResultSCellr10) { *static_cast<MeasResultServFreqr10MeasResultSCellr10*>(items[1]) = measResultServFreqr10MeasResultSCellr10; }
	void setMeasResultServFreqr10MeasResultBestNeighCellr10(const MeasResultServFreqr10MeasResultBestNeighCellr10& measResultServFreqr10MeasResultBestNeighCellr10) { *static_cast<MeasResultServFreqr10MeasResultBestNeighCellr10*>(items[2]) = measResultServFreqr10MeasResultBestNeighCellr10; }

	ServCellIndexr10& getServFreqIdr10() { return *static_cast<ServCellIndexr10*>(items[0]); }
	MeasResultServFreqr10MeasResultSCellr10& getMeasResultServFreqr10MeasResultSCellr10() { return *static_cast<MeasResultServFreqr10MeasResultSCellr10*>(items[1]); }
	MeasResultServFreqr10MeasResultBestNeighCellr10& getMeasResultServFreqr10MeasResultBestNeighCellr10() { return *static_cast<MeasResultServFreqr10MeasResultBestNeighCellr10*>(items[2]); }
};

typedef SequenceOf<MeasResultServFreqr10, CONSTRAINED, 1, maxServCell_r10> MeasResultServFreqListr10;

class MeasResults : public Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	MeasResults(): Sequence(&theInfo) {}
	MeasResults(const MeasId& measId, const MeasResultsMeasResultPCell& measResultsMeasResultPCell);

	void setMeasId(const MeasId& measId) { *static_cast<MeasId*>(items[0]) = measId; }
	void setMeasResultsMeasResultPCell(const MeasResultsMeasResultPCell& measResultsMeasResultPCell) { *static_cast<MeasResultsMeasResultPCell*>(items[1]) = measResultsMeasResultPCell; }
	void setMeasResultsMeasResultNeighCells(const MeasResultsMeasResultNeighCells& measResultsMeasResultNeighCells) { *static_cast<MeasResultsMeasResultNeighCells*>(items[2]) = measResultsMeasResultNeighCells; }
	void setMeasResultForECIDr9(const MeasResultForECIDr9& measResultForECIDr9) { *static_cast<MeasResultForECIDr9*>(items[3]) = measResultForECIDr9; }
	void setLocationInfor10(const LocationInfor10& locationInfor10) { *static_cast<LocationInfor10*>(items[4]) = locationInfor10; }
	void setMeasResultServFreqListr10(const MeasResultServFreqListr10& measResultServFreqListr10) { *static_cast<MeasResultServFreqListr10*>(items[5]) = measResultServFreqListr10; }

	MeasId& getMeasId() { return *static_cast<MeasId*>(items[0]); }
	MeasResultsMeasResultPCell& getMeasResultsMeasResultPCell() { return *static_cast<MeasResultsMeasResultPCell*>(items[1]); }
	MeasResultsMeasResultNeighCells& getMeasResultsMeasResultNeighCells() { return *static_cast<MeasResultsMeasResultNeighCells*>(items[2]); }
	MeasResultForECIDr9& getMeasResultForECIDr9() { return *static_cast<MeasResultForECIDr9*>(items[3]); }
	LocationInfor10& getLocationInfor10() { return *static_cast<LocationInfor10*>(items[4]); }
	MeasResultServFreqListr10& getMeasResultServFreqListr10() { return *static_cast<MeasResultServFreqListr10*>(items[5]); }
};

typedef OctetStringBase MeasurementReportv8a0IEsLateNonCriticalExtension;

class MeasurementReportv8a0IEsNonCriticalExtension : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	MeasurementReportv8a0IEsNonCriticalExtension(): Sequence(&theInfo) {}


};

class MeasurementReportv8a0IEs : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MeasurementReportv8a0IEs(): Sequence(&theInfo) {}

	void setMeasurementReportv8a0IEsLateNonCriticalExtension(const MeasurementReportv8a0IEsLateNonCriticalExtension& measurementReportv8a0IEsLateNonCriticalExtension) { *static_cast<MeasurementReportv8a0IEsLateNonCriticalExtension*>(items[0]) = measurementReportv8a0IEsLateNonCriticalExtension; }
	void setMeasurementReportv8a0IEsNonCriticalExtension(const MeasurementReportv8a0IEsNonCriticalExtension& measurementReportv8a0IEsNonCriticalExtension) { *static_cast<MeasurementReportv8a0IEsNonCriticalExtension*>(items[1]) = measurementReportv8a0IEsNonCriticalExtension; }

	MeasurementReportv8a0IEsLateNonCriticalExtension& getMeasurementReportv8a0IEsLateNonCriticalExtension() { return *static_cast<MeasurementReportv8a0IEsLateNonCriticalExtension*>(items[0]); }
	MeasurementReportv8a0IEsNonCriticalExtension& getMeasurementReportv8a0IEsNonCriticalExtension() { return *static_cast<MeasurementReportv8a0IEsNonCriticalExtension*>(items[1]); }
};

class MeasurementReportr8IEs : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MeasurementReportr8IEs(): Sequence(&theInfo) {}
	MeasurementReportr8IEs(const MeasResults& measResults);

	void setMeasResults(const MeasResults& measResults) { *static_cast<MeasResults*>(items[0]) = measResults; }
	void setNonCriticalExtension(const MeasurementReportv8a0IEs& nonCriticalExtension) { *static_cast<MeasurementReportv8a0IEs*>(items[1]) = nonCriticalExtension; }

	MeasResults& getMeasResults() { return *static_cast<MeasResults*>(items[0]); }
	MeasurementReportv8a0IEs& getNonCriticalExtension() { return *static_cast<MeasurementReportv8a0IEs*>(items[1]); }
};

typedef Null MeasurementReportCriticalExtensionsC1Spare7;

typedef Null MeasurementReportCriticalExtensionsC1Spare6;

typedef Null MeasurementReportCriticalExtensionsC1Spare5;

typedef Null MeasurementReportCriticalExtensionsC1Spare4;

typedef Null MeasurementReportCriticalExtensionsC1Spare3;

typedef Null MeasurementReportCriticalExtensionsC1Spare2;

typedef Null MeasurementReportCriticalExtensionsC1Spare1;

class MeasurementReportCriticalExtensionsC1 : public Choice {
private:
	static const void *choicesInfo[8];
public:
	enum MeasurementReportCriticalExtensionsC1Choices {
		measurementReportr8 = 0,
		measurementReportCriticalExtensionsC1Spare7 = 1,
		measurementReportCriticalExtensionsC1Spare6 = 2,
		measurementReportCriticalExtensionsC1Spare5 = 3,
		measurementReportCriticalExtensionsC1Spare4 = 4,
		measurementReportCriticalExtensionsC1Spare3 = 5,
		measurementReportCriticalExtensionsC1Spare2 = 6,
		measurementReportCriticalExtensionsC1Spare1 = 7,
	};
	static const Info theInfo;
	MeasurementReportCriticalExtensionsC1(): Choice(&theInfo) {}
};

class MeasurementReportCriticalExtensionsCriticalExtensionsFuture : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	MeasurementReportCriticalExtensionsCriticalExtensionsFuture(): Sequence(&theInfo) {}


};

class MeasurementReportCriticalExtensions : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum MeasurementReportCriticalExtensionsChoices {
		measurementReportCriticalExtensionsC1 = 0,
		measurementReportCriticalExtensionsCriticalExtensionsFuture = 1,
	};
	static const Info theInfo;
	MeasurementReportCriticalExtensions(): Choice(&theInfo) {}
};

class MeasurementReport : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasurementReport(): Sequence(&theInfo) {}
	MeasurementReport(const MeasurementReportCriticalExtensions& measurementReportCriticalExtensions);

	void setMeasurementReportCriticalExtensions(const MeasurementReportCriticalExtensions& measurementReportCriticalExtensions) { *static_cast<MeasurementReportCriticalExtensions*>(items[0]) = measurementReportCriticalExtensions; }

	MeasurementReportCriticalExtensions& getMeasurementReportCriticalExtensions() { return *static_cast<MeasurementReportCriticalExtensions*>(items[0]); }
};

typedef OctetStringBase RRCConnectionReconfigurationCompletev8a0IEsLateNonCriticalExtension;

enum RRCConnectionReconfigurationCompletev1020IEsrlf_InfoAvailable_r10Values {
	true_RRCConnectionReconfigurationCompletev1020IEsrlf_InfoAvailable_r10 = 0,
};
typedef Enumerated<CONSTRAINED, 0> RRCConnectionReconfigurationCompletev1020IEsrlf_InfoAvailable_r10;

enum RRCConnectionReconfigurationCompletev1020IEslogMeasAvailable_r10Values {
	true_RRCConnectionReconfigurationCompletev1020IEslogMeasAvailable_r10 = 0,
};
typedef Enumerated<CONSTRAINED, 0> RRCConnectionReconfigurationCompletev1020IEslogMeasAvailable_r10;

class RRCConnectionReconfigurationCompletev1020IEsNonCriticalExtension : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RRCConnectionReconfigurationCompletev1020IEsNonCriticalExtension(): Sequence(&theInfo) {}


};

class RRCConnectionReconfigurationCompletev1020IEs : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RRCConnectionReconfigurationCompletev1020IEs(): Sequence(&theInfo) {}

	void setRRCConnectionReconfigurationCompletev1020IEsrlf_InfoAvailable_r10(const RRCConnectionReconfigurationCompletev1020IEsrlf_InfoAvailable_r10& rRCConnectionReconfigurationCompletev1020IEsrlf_InfoAvailable_r10) { *static_cast<RRCConnectionReconfigurationCompletev1020IEsrlf_InfoAvailable_r10*>(items[0]) = rRCConnectionReconfigurationCompletev1020IEsrlf_InfoAvailable_r10; }
	void setRRCConnectionReconfigurationCompletev1020IEslogMeasAvailable_r10(const RRCConnectionReconfigurationCompletev1020IEslogMeasAvailable_r10& rRCConnectionReconfigurationCompletev1020IEslogMeasAvailable_r10) { *static_cast<RRCConnectionReconfigurationCompletev1020IEslogMeasAvailable_r10*>(items[1]) = rRCConnectionReconfigurationCompletev1020IEslogMeasAvailable_r10; }
	void setRRCConnectionReconfigurationCompletev1020IEsNonCriticalExtension(const RRCConnectionReconfigurationCompletev1020IEsNonCriticalExtension& rRCConnectionReconfigurationCompletev1020IEsNonCriticalExtension) { *static_cast<RRCConnectionReconfigurationCompletev1020IEsNonCriticalExtension*>(items[2]) = rRCConnectionReconfigurationCompletev1020IEsNonCriticalExtension; }

	RRCConnectionReconfigurationCompletev1020IEsrlf_InfoAvailable_r10& getRRCConnectionReconfigurationCompletev1020IEsrlf_InfoAvailable_r10() { return *static_cast<RRCConnectionReconfigurationCompletev1020IEsrlf_InfoAvailable_r10*>(items[0]); }
	RRCConnectionReconfigurationCompletev1020IEslogMeasAvailable_r10& getRRCConnectionReconfigurationCompletev1020IEslogMeasAvailable_r10() { return *static_cast<RRCConnectionReconfigurationCompletev1020IEslogMeasAvailable_r10*>(items[1]); }
	RRCConnectionReconfigurationCompletev1020IEsNonCriticalExtension& getRRCConnectionReconfigurationCompletev1020IEsNonCriticalExtension() { return *static_cast<RRCConnectionReconfigurationCompletev1020IEsNonCriticalExtension*>(items[2]); }
};

class RRCConnectionReconfigurationCompletev8a0IEs : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionReconfigurationCompletev8a0IEs(): Sequence(&theInfo) {}

	void setRRCConnectionReconfigurationCompletev8a0IEsLateNonCriticalExtension(const RRCConnectionReconfigurationCompletev8a0IEsLateNonCriticalExtension& rRCConnectionReconfigurationCompletev8a0IEsLateNonCriticalExtension) { *static_cast<RRCConnectionReconfigurationCompletev8a0IEsLateNonCriticalExtension*>(items[0]) = rRCConnectionReconfigurationCompletev8a0IEsLateNonCriticalExtension; }
	void setNonCriticalExtension(const RRCConnectionReconfigurationCompletev1020IEs& nonCriticalExtension) { *static_cast<RRCConnectionReconfigurationCompletev1020IEs*>(items[1]) = nonCriticalExtension; }

	RRCConnectionReconfigurationCompletev8a0IEsLateNonCriticalExtension& getRRCConnectionReconfigurationCompletev8a0IEsLateNonCriticalExtension() { return *static_cast<RRCConnectionReconfigurationCompletev8a0IEsLateNonCriticalExtension*>(items[0]); }
	RRCConnectionReconfigurationCompletev1020IEs& getNonCriticalExtension() { return *static_cast<RRCConnectionReconfigurationCompletev1020IEs*>(items[1]); }
};

class RRCConnectionReconfigurationCompleter8IEs : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RRCConnectionReconfigurationCompleter8IEs(): Sequence(&theInfo) {}

	void setNonCriticalExtension(const RRCConnectionReconfigurationCompletev8a0IEs& nonCriticalExtension) { *static_cast<RRCConnectionReconfigurationCompletev8a0IEs*>(items[0]) = nonCriticalExtension; }

	RRCConnectionReconfigurationCompletev8a0IEs& getNonCriticalExtension() { return *static_cast<RRCConnectionReconfigurationCompletev8a0IEs*>(items[0]); }
};

class RRCConnectionReconfigurationCompleteCriticalExtensionsCriticalExtensionsFuture : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RRCConnectionReconfigurationCompleteCriticalExtensionsCriticalExtensionsFuture(): Sequence(&theInfo) {}


};

class RRCConnectionReconfigurationCompleteCriticalExtensions : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum RRCConnectionReconfigurationCompleteCriticalExtensionsChoices {
		rrcConnectionReconfigurationCompleter8 = 0,
		rRCConnectionReconfigurationCompleteCriticalExtensionsCriticalExtensionsFuture = 1,
	};
	static const Info theInfo;
	RRCConnectionReconfigurationCompleteCriticalExtensions(): Choice(&theInfo) {}
};

class RRCConnectionReconfigurationComplete : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionReconfigurationComplete(): Sequence(&theInfo) {}
	RRCConnectionReconfigurationComplete(const RRCTransactionIdentifier& rrcTransactionIdentifier, const RRCConnectionReconfigurationCompleteCriticalExtensions& rRCConnectionReconfigurationCompleteCriticalExtensions);

	void setRrcTransactionIdentifier(const RRCTransactionIdentifier& rrcTransactionIdentifier) { *static_cast<RRCTransactionIdentifier*>(items[0]) = rrcTransactionIdentifier; }
	void setRRCConnectionReconfigurationCompleteCriticalExtensions(const RRCConnectionReconfigurationCompleteCriticalExtensions& rRCConnectionReconfigurationCompleteCriticalExtensions) { *static_cast<RRCConnectionReconfigurationCompleteCriticalExtensions*>(items[1]) = rRCConnectionReconfigurationCompleteCriticalExtensions; }

	RRCTransactionIdentifier& getRrcTransactionIdentifier() { return *static_cast<RRCTransactionIdentifier*>(items[0]); }
	RRCConnectionReconfigurationCompleteCriticalExtensions& getRRCConnectionReconfigurationCompleteCriticalExtensions() { return *static_cast<RRCConnectionReconfigurationCompleteCriticalExtensions*>(items[1]); }
};

enum RRCConnectionReestablishmentCompletev920IEsrlf_InfoAvailable_r9Values {
	true_RRCConnectionReestablishmentCompletev920IEsrlf_InfoAvailable_r9 = 0,
};
typedef Enumerated<CONSTRAINED, 0> RRCConnectionReestablishmentCompletev920IEsrlf_InfoAvailable_r9;

typedef OctetStringBase RRCConnectionReestablishmentCompletev8a0IEsLateNonCriticalExtension;

enum RRCConnectionReestablishmentCompletev1020IEslogMeasAvailable_r10Values {
	true_RRCConnectionReestablishmentCompletev1020IEslogMeasAvailable_r10 = 0,
};
typedef Enumerated<CONSTRAINED, 0> RRCConnectionReestablishmentCompletev1020IEslogMeasAvailable_r10;

class RRCConnectionReestablishmentCompletev1020IEsNonCriticalExtension : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RRCConnectionReestablishmentCompletev1020IEsNonCriticalExtension(): Sequence(&theInfo) {}


};

class RRCConnectionReestablishmentCompletev1020IEs : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionReestablishmentCompletev1020IEs(): Sequence(&theInfo) {}

	void setRRCConnectionReestablishmentCompletev1020IEslogMeasAvailable_r10(const RRCConnectionReestablishmentCompletev1020IEslogMeasAvailable_r10& rRCConnectionReestablishmentCompletev1020IEslogMeasAvailable_r10) { *static_cast<RRCConnectionReestablishmentCompletev1020IEslogMeasAvailable_r10*>(items[0]) = rRCConnectionReestablishmentCompletev1020IEslogMeasAvailable_r10; }
	void setRRCConnectionReestablishmentCompletev1020IEsNonCriticalExtension(const RRCConnectionReestablishmentCompletev1020IEsNonCriticalExtension& rRCConnectionReestablishmentCompletev1020IEsNonCriticalExtension) { *static_cast<RRCConnectionReestablishmentCompletev1020IEsNonCriticalExtension*>(items[1]) = rRCConnectionReestablishmentCompletev1020IEsNonCriticalExtension; }

	RRCConnectionReestablishmentCompletev1020IEslogMeasAvailable_r10& getRRCConnectionReestablishmentCompletev1020IEslogMeasAvailable_r10() { return *static_cast<RRCConnectionReestablishmentCompletev1020IEslogMeasAvailable_r10*>(items[0]); }
	RRCConnectionReestablishmentCompletev1020IEsNonCriticalExtension& getRRCConnectionReestablishmentCompletev1020IEsNonCriticalExtension() { return *static_cast<RRCConnectionReestablishmentCompletev1020IEsNonCriticalExtension*>(items[1]); }
};

class RRCConnectionReestablishmentCompletev8a0IEs : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionReestablishmentCompletev8a0IEs(): Sequence(&theInfo) {}

	void setRRCConnectionReestablishmentCompletev8a0IEsLateNonCriticalExtension(const RRCConnectionReestablishmentCompletev8a0IEsLateNonCriticalExtension& rRCConnectionReestablishmentCompletev8a0IEsLateNonCriticalExtension) { *static_cast<RRCConnectionReestablishmentCompletev8a0IEsLateNonCriticalExtension*>(items[0]) = rRCConnectionReestablishmentCompletev8a0IEsLateNonCriticalExtension; }
	void setNonCriticalExtension(const RRCConnectionReestablishmentCompletev1020IEs& nonCriticalExtension) { *static_cast<RRCConnectionReestablishmentCompletev1020IEs*>(items[1]) = nonCriticalExtension; }

	RRCConnectionReestablishmentCompletev8a0IEsLateNonCriticalExtension& getRRCConnectionReestablishmentCompletev8a0IEsLateNonCriticalExtension() { return *static_cast<RRCConnectionReestablishmentCompletev8a0IEsLateNonCriticalExtension*>(items[0]); }
	RRCConnectionReestablishmentCompletev1020IEs& getNonCriticalExtension() { return *static_cast<RRCConnectionReestablishmentCompletev1020IEs*>(items[1]); }
};

class RRCConnectionReestablishmentCompletev920IEs : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionReestablishmentCompletev920IEs(): Sequence(&theInfo) {}

	void setRRCConnectionReestablishmentCompletev920IEsrlf_InfoAvailable_r9(const RRCConnectionReestablishmentCompletev920IEsrlf_InfoAvailable_r9& rRCConnectionReestablishmentCompletev920IEsrlf_InfoAvailable_r9) { *static_cast<RRCConnectionReestablishmentCompletev920IEsrlf_InfoAvailable_r9*>(items[0]) = rRCConnectionReestablishmentCompletev920IEsrlf_InfoAvailable_r9; }
	void setNonCriticalExtension(const RRCConnectionReestablishmentCompletev8a0IEs& nonCriticalExtension) { *static_cast<RRCConnectionReestablishmentCompletev8a0IEs*>(items[1]) = nonCriticalExtension; }

	RRCConnectionReestablishmentCompletev920IEsrlf_InfoAvailable_r9& getRRCConnectionReestablishmentCompletev920IEsrlf_InfoAvailable_r9() { return *static_cast<RRCConnectionReestablishmentCompletev920IEsrlf_InfoAvailable_r9*>(items[0]); }
	RRCConnectionReestablishmentCompletev8a0IEs& getNonCriticalExtension() { return *static_cast<RRCConnectionReestablishmentCompletev8a0IEs*>(items[1]); }
};

class RRCConnectionReestablishmentCompleter8IEs : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RRCConnectionReestablishmentCompleter8IEs(): Sequence(&theInfo) {}

	void setNonCriticalExtension(const RRCConnectionReestablishmentCompletev920IEs& nonCriticalExtension) { *static_cast<RRCConnectionReestablishmentCompletev920IEs*>(items[0]) = nonCriticalExtension; }

	RRCConnectionReestablishmentCompletev920IEs& getNonCriticalExtension() { return *static_cast<RRCConnectionReestablishmentCompletev920IEs*>(items[0]); }
};

class RRCConnectionReestablishmentCompleteCriticalExtensionsCriticalExtensionsFuture : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RRCConnectionReestablishmentCompleteCriticalExtensionsCriticalExtensionsFuture(): Sequence(&theInfo) {}


};

class RRCConnectionReestablishmentCompleteCriticalExtensions : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum RRCConnectionReestablishmentCompleteCriticalExtensionsChoices {
		rrcConnectionReestablishmentCompleter8 = 0,
		rRCConnectionReestablishmentCompleteCriticalExtensionsCriticalExtensionsFuture = 1,
	};
	static const Info theInfo;
	RRCConnectionReestablishmentCompleteCriticalExtensions(): Choice(&theInfo) {}
};

class RRCConnectionReestablishmentComplete : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionReestablishmentComplete(): Sequence(&theInfo) {}
	RRCConnectionReestablishmentComplete(const RRCTransactionIdentifier& rrcTransactionIdentifier, const RRCConnectionReestablishmentCompleteCriticalExtensions& rRCConnectionReestablishmentCompleteCriticalExtensions);

	void setRrcTransactionIdentifier(const RRCTransactionIdentifier& rrcTransactionIdentifier) { *static_cast<RRCTransactionIdentifier*>(items[0]) = rrcTransactionIdentifier; }
	void setRRCConnectionReestablishmentCompleteCriticalExtensions(const RRCConnectionReestablishmentCompleteCriticalExtensions& rRCConnectionReestablishmentCompleteCriticalExtensions) { *static_cast<RRCConnectionReestablishmentCompleteCriticalExtensions*>(items[1]) = rRCConnectionReestablishmentCompleteCriticalExtensions; }

	RRCTransactionIdentifier& getRrcTransactionIdentifier() { return *static_cast<RRCTransactionIdentifier*>(items[0]); }
	RRCConnectionReestablishmentCompleteCriticalExtensions& getRRCConnectionReestablishmentCompleteCriticalExtensions() { return *static_cast<RRCConnectionReestablishmentCompleteCriticalExtensions*>(items[1]); }
};

typedef Integer<CONSTRAINED, 1, 6> RRCConnectionSetupCompleter8IEsSelectedPLMNIdentity;

typedef BitString<CONSTRAINED, 16, 16> RegisteredMMEMmegi;

class RegisteredMME : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RegisteredMME(): Sequence(&theInfo) {}
	RegisteredMME(const RegisteredMMEMmegi& registeredMMEMmegi, const MMEC& mmec);

	void setPlmnIdentity(const PLMNIdentity& plmnIdentity) { *static_cast<PLMNIdentity*>(items[0]) = plmnIdentity; }
	void setRegisteredMMEMmegi(const RegisteredMMEMmegi& registeredMMEMmegi) { *static_cast<RegisteredMMEMmegi*>(items[1]) = registeredMMEMmegi; }
	void setMmec(const MMEC& mmec) { *static_cast<MMEC*>(items[2]) = mmec; }

	PLMNIdentity& getPlmnIdentity() { return *static_cast<PLMNIdentity*>(items[0]); }
	RegisteredMMEMmegi& getRegisteredMMEMmegi() { return *static_cast<RegisteredMMEMmegi*>(items[1]); }
	MMEC& getMmec() { return *static_cast<MMEC*>(items[2]); }
};

typedef OctetStringBase RRCConnectionSetupCompletev8a0IEsLateNonCriticalExtension;

enum RRCConnectionSetupCompletev1020IEsgummei_Type_r10Values {
	native_RRCConnectionSetupCompletev1020IEsgummei_Type_r10 = 0,
	mapped_RRCConnectionSetupCompletev1020IEsgummei_Type_r10 = 1,
};
typedef Enumerated<CONSTRAINED, 1> RRCConnectionSetupCompletev1020IEsgummei_Type_r10;

enum RRCConnectionSetupCompletev1020IEsrlf_InfoAvailable_r10Values {
	true_RRCConnectionSetupCompletev1020IEsrlf_InfoAvailable_r10 = 0,
};
typedef Enumerated<CONSTRAINED, 0> RRCConnectionSetupCompletev1020IEsrlf_InfoAvailable_r10;

enum RRCConnectionSetupCompletev1020IEslogMeasAvailable_r10Values {
	true_RRCConnectionSetupCompletev1020IEslogMeasAvailable_r10 = 0,
};
typedef Enumerated<CONSTRAINED, 0> RRCConnectionSetupCompletev1020IEslogMeasAvailable_r10;

enum RRCConnectionSetupCompletev1020IEsrn_SubframeConfigReq_r10Values {
	required_RRCConnectionSetupCompletev1020IEsrn_SubframeConfigReq_r10 = 0,
	notRequired_RRCConnectionSetupCompletev1020IEsrn_SubframeConfigReq_r10 = 1,
};
typedef Enumerated<CONSTRAINED, 1> RRCConnectionSetupCompletev1020IEsrn_SubframeConfigReq_r10;

class RRCConnectionSetupCompletev1020IEsNonCriticalExtension : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RRCConnectionSetupCompletev1020IEsNonCriticalExtension(): Sequence(&theInfo) {}


};

class RRCConnectionSetupCompletev1020IEs : public Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	RRCConnectionSetupCompletev1020IEs(): Sequence(&theInfo) {}

	void setRRCConnectionSetupCompletev1020IEsgummei_Type_r10(const RRCConnectionSetupCompletev1020IEsgummei_Type_r10& rRCConnectionSetupCompletev1020IEsgummei_Type_r10) { *static_cast<RRCConnectionSetupCompletev1020IEsgummei_Type_r10*>(items[0]) = rRCConnectionSetupCompletev1020IEsgummei_Type_r10; }
	void setRRCConnectionSetupCompletev1020IEsrlf_InfoAvailable_r10(const RRCConnectionSetupCompletev1020IEsrlf_InfoAvailable_r10& rRCConnectionSetupCompletev1020IEsrlf_InfoAvailable_r10) { *static_cast<RRCConnectionSetupCompletev1020IEsrlf_InfoAvailable_r10*>(items[1]) = rRCConnectionSetupCompletev1020IEsrlf_InfoAvailable_r10; }
	void setRRCConnectionSetupCompletev1020IEslogMeasAvailable_r10(const RRCConnectionSetupCompletev1020IEslogMeasAvailable_r10& rRCConnectionSetupCompletev1020IEslogMeasAvailable_r10) { *static_cast<RRCConnectionSetupCompletev1020IEslogMeasAvailable_r10*>(items[2]) = rRCConnectionSetupCompletev1020IEslogMeasAvailable_r10; }
	void setRRCConnectionSetupCompletev1020IEsrn_SubframeConfigReq_r10(const RRCConnectionSetupCompletev1020IEsrn_SubframeConfigReq_r10& rRCConnectionSetupCompletev1020IEsrn_SubframeConfigReq_r10) { *static_cast<RRCConnectionSetupCompletev1020IEsrn_SubframeConfigReq_r10*>(items[3]) = rRCConnectionSetupCompletev1020IEsrn_SubframeConfigReq_r10; }
	void setRRCConnectionSetupCompletev1020IEsNonCriticalExtension(const RRCConnectionSetupCompletev1020IEsNonCriticalExtension& rRCConnectionSetupCompletev1020IEsNonCriticalExtension) { *static_cast<RRCConnectionSetupCompletev1020IEsNonCriticalExtension*>(items[4]) = rRCConnectionSetupCompletev1020IEsNonCriticalExtension; }

	RRCConnectionSetupCompletev1020IEsgummei_Type_r10& getRRCConnectionSetupCompletev1020IEsgummei_Type_r10() { return *static_cast<RRCConnectionSetupCompletev1020IEsgummei_Type_r10*>(items[0]); }
	RRCConnectionSetupCompletev1020IEsrlf_InfoAvailable_r10& getRRCConnectionSetupCompletev1020IEsrlf_InfoAvailable_r10() { return *static_cast<RRCConnectionSetupCompletev1020IEsrlf_InfoAvailable_r10*>(items[1]); }
	RRCConnectionSetupCompletev1020IEslogMeasAvailable_r10& getRRCConnectionSetupCompletev1020IEslogMeasAvailable_r10() { return *static_cast<RRCConnectionSetupCompletev1020IEslogMeasAvailable_r10*>(items[2]); }
	RRCConnectionSetupCompletev1020IEsrn_SubframeConfigReq_r10& getRRCConnectionSetupCompletev1020IEsrn_SubframeConfigReq_r10() { return *static_cast<RRCConnectionSetupCompletev1020IEsrn_SubframeConfigReq_r10*>(items[3]); }
	RRCConnectionSetupCompletev1020IEsNonCriticalExtension& getRRCConnectionSetupCompletev1020IEsNonCriticalExtension() { return *static_cast<RRCConnectionSetupCompletev1020IEsNonCriticalExtension*>(items[4]); }
};

class RRCConnectionSetupCompletev8a0IEs : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionSetupCompletev8a0IEs(): Sequence(&theInfo) {}

	void setRRCConnectionSetupCompletev8a0IEsLateNonCriticalExtension(const RRCConnectionSetupCompletev8a0IEsLateNonCriticalExtension& rRCConnectionSetupCompletev8a0IEsLateNonCriticalExtension) { *static_cast<RRCConnectionSetupCompletev8a0IEsLateNonCriticalExtension*>(items[0]) = rRCConnectionSetupCompletev8a0IEsLateNonCriticalExtension; }
	void setNonCriticalExtension(const RRCConnectionSetupCompletev1020IEs& nonCriticalExtension) { *static_cast<RRCConnectionSetupCompletev1020IEs*>(items[1]) = nonCriticalExtension; }

	RRCConnectionSetupCompletev8a0IEsLateNonCriticalExtension& getRRCConnectionSetupCompletev8a0IEsLateNonCriticalExtension() { return *static_cast<RRCConnectionSetupCompletev8a0IEsLateNonCriticalExtension*>(items[0]); }
	RRCConnectionSetupCompletev1020IEs& getNonCriticalExtension() { return *static_cast<RRCConnectionSetupCompletev1020IEs*>(items[1]); }
};

class RRCConnectionSetupCompleter8IEs : public Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	RRCConnectionSetupCompleter8IEs(): Sequence(&theInfo) {}
	RRCConnectionSetupCompleter8IEs(const RRCConnectionSetupCompleter8IEsSelectedPLMNIdentity& rRCConnectionSetupCompleter8IEsSelectedPLMNIdentity, const DedicatedInfoNAS& dedicatedInfoNAS);

	void setRRCConnectionSetupCompleter8IEsSelectedPLMNIdentity(const RRCConnectionSetupCompleter8IEsSelectedPLMNIdentity& rRCConnectionSetupCompleter8IEsSelectedPLMNIdentity) { *static_cast<RRCConnectionSetupCompleter8IEsSelectedPLMNIdentity*>(items[0]) = rRCConnectionSetupCompleter8IEsSelectedPLMNIdentity; }
	void setRegisteredMME(const RegisteredMME& registeredMME) { *static_cast<RegisteredMME*>(items[1]) = registeredMME; }
	void setDedicatedInfoNAS(const DedicatedInfoNAS& dedicatedInfoNAS) { *static_cast<DedicatedInfoNAS*>(items[2]) = dedicatedInfoNAS; }
	void setNonCriticalExtension(const RRCConnectionSetupCompletev8a0IEs& nonCriticalExtension) { *static_cast<RRCConnectionSetupCompletev8a0IEs*>(items[3]) = nonCriticalExtension; }

	RRCConnectionSetupCompleter8IEsSelectedPLMNIdentity& getRRCConnectionSetupCompleter8IEsSelectedPLMNIdentity() { return *static_cast<RRCConnectionSetupCompleter8IEsSelectedPLMNIdentity*>(items[0]); }
	RegisteredMME& getRegisteredMME() { return *static_cast<RegisteredMME*>(items[1]); }
	DedicatedInfoNAS& getDedicatedInfoNAS() { return *static_cast<DedicatedInfoNAS*>(items[2]); }
	RRCConnectionSetupCompletev8a0IEs& getNonCriticalExtension() { return *static_cast<RRCConnectionSetupCompletev8a0IEs*>(items[3]); }
};

typedef Null RRCConnectionSetupCompleteCriticalExtensionsC1Spare3;

typedef Null RRCConnectionSetupCompleteCriticalExtensionsC1Spare2;

typedef Null RRCConnectionSetupCompleteCriticalExtensionsC1Spare1;

class RRCConnectionSetupCompleteCriticalExtensionsC1 : public Choice {
private:
	static const void *choicesInfo[4];
public:
	enum RRCConnectionSetupCompleteCriticalExtensionsC1Choices {
		rrcConnectionSetupCompleter8 = 0,
		rRCConnectionSetupCompleteCriticalExtensionsC1Spare3 = 1,
		rRCConnectionSetupCompleteCriticalExtensionsC1Spare2 = 2,
		rRCConnectionSetupCompleteCriticalExtensionsC1Spare1 = 3,
	};
	static const Info theInfo;
	RRCConnectionSetupCompleteCriticalExtensionsC1(): Choice(&theInfo) {}
};

class RRCConnectionSetupCompleteCriticalExtensionsCriticalExtensionsFuture : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RRCConnectionSetupCompleteCriticalExtensionsCriticalExtensionsFuture(): Sequence(&theInfo) {}


};

class RRCConnectionSetupCompleteCriticalExtensions : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum RRCConnectionSetupCompleteCriticalExtensionsChoices {
		rRCConnectionSetupCompleteCriticalExtensionsC1 = 0,
		rRCConnectionSetupCompleteCriticalExtensionsCriticalExtensionsFuture = 1,
	};
	static const Info theInfo;
	RRCConnectionSetupCompleteCriticalExtensions(): Choice(&theInfo) {}
};

class RRCConnectionSetupComplete : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionSetupComplete(): Sequence(&theInfo) {}
	RRCConnectionSetupComplete(const RRCTransactionIdentifier& rrcTransactionIdentifier, const RRCConnectionSetupCompleteCriticalExtensions& rRCConnectionSetupCompleteCriticalExtensions);

	void setRrcTransactionIdentifier(const RRCTransactionIdentifier& rrcTransactionIdentifier) { *static_cast<RRCTransactionIdentifier*>(items[0]) = rrcTransactionIdentifier; }
	void setRRCConnectionSetupCompleteCriticalExtensions(const RRCConnectionSetupCompleteCriticalExtensions& rRCConnectionSetupCompleteCriticalExtensions) { *static_cast<RRCConnectionSetupCompleteCriticalExtensions*>(items[1]) = rRCConnectionSetupCompleteCriticalExtensions; }

	RRCTransactionIdentifier& getRrcTransactionIdentifier() { return *static_cast<RRCTransactionIdentifier*>(items[0]); }
	RRCConnectionSetupCompleteCriticalExtensions& getRRCConnectionSetupCompleteCriticalExtensions() { return *static_cast<RRCConnectionSetupCompleteCriticalExtensions*>(items[1]); }
};

typedef OctetStringBase SecurityModeCompletev8a0IEsLateNonCriticalExtension;

class SecurityModeCompletev8a0IEsNonCriticalExtension : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	SecurityModeCompletev8a0IEsNonCriticalExtension(): Sequence(&theInfo) {}


};

class SecurityModeCompletev8a0IEs : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SecurityModeCompletev8a0IEs(): Sequence(&theInfo) {}

	void setSecurityModeCompletev8a0IEsLateNonCriticalExtension(const SecurityModeCompletev8a0IEsLateNonCriticalExtension& securityModeCompletev8a0IEsLateNonCriticalExtension) { *static_cast<SecurityModeCompletev8a0IEsLateNonCriticalExtension*>(items[0]) = securityModeCompletev8a0IEsLateNonCriticalExtension; }
	void setSecurityModeCompletev8a0IEsNonCriticalExtension(const SecurityModeCompletev8a0IEsNonCriticalExtension& securityModeCompletev8a0IEsNonCriticalExtension) { *static_cast<SecurityModeCompletev8a0IEsNonCriticalExtension*>(items[1]) = securityModeCompletev8a0IEsNonCriticalExtension; }

	SecurityModeCompletev8a0IEsLateNonCriticalExtension& getSecurityModeCompletev8a0IEsLateNonCriticalExtension() { return *static_cast<SecurityModeCompletev8a0IEsLateNonCriticalExtension*>(items[0]); }
	SecurityModeCompletev8a0IEsNonCriticalExtension& getSecurityModeCompletev8a0IEsNonCriticalExtension() { return *static_cast<SecurityModeCompletev8a0IEsNonCriticalExtension*>(items[1]); }
};

class SecurityModeCompleter8IEs : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SecurityModeCompleter8IEs(): Sequence(&theInfo) {}

	void setNonCriticalExtension(const SecurityModeCompletev8a0IEs& nonCriticalExtension) { *static_cast<SecurityModeCompletev8a0IEs*>(items[0]) = nonCriticalExtension; }

	SecurityModeCompletev8a0IEs& getNonCriticalExtension() { return *static_cast<SecurityModeCompletev8a0IEs*>(items[0]); }
};

class SecurityModeCompleteCriticalExtensionsCriticalExtensionsFuture : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	SecurityModeCompleteCriticalExtensionsCriticalExtensionsFuture(): Sequence(&theInfo) {}


};

class SecurityModeCompleteCriticalExtensions : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum SecurityModeCompleteCriticalExtensionsChoices {
		securityModeCompleter8 = 0,
		securityModeCompleteCriticalExtensionsCriticalExtensionsFuture = 1,
	};
	static const Info theInfo;
	SecurityModeCompleteCriticalExtensions(): Choice(&theInfo) {}
};

class SecurityModeComplete : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SecurityModeComplete(): Sequence(&theInfo) {}
	SecurityModeComplete(const RRCTransactionIdentifier& rrcTransactionIdentifier, const SecurityModeCompleteCriticalExtensions& securityModeCompleteCriticalExtensions);

	void setRrcTransactionIdentifier(const RRCTransactionIdentifier& rrcTransactionIdentifier) { *static_cast<RRCTransactionIdentifier*>(items[0]) = rrcTransactionIdentifier; }
	void setSecurityModeCompleteCriticalExtensions(const SecurityModeCompleteCriticalExtensions& securityModeCompleteCriticalExtensions) { *static_cast<SecurityModeCompleteCriticalExtensions*>(items[1]) = securityModeCompleteCriticalExtensions; }

	RRCTransactionIdentifier& getRrcTransactionIdentifier() { return *static_cast<RRCTransactionIdentifier*>(items[0]); }
	SecurityModeCompleteCriticalExtensions& getSecurityModeCompleteCriticalExtensions() { return *static_cast<SecurityModeCompleteCriticalExtensions*>(items[1]); }
};

typedef OctetStringBase SecurityModeFailurev8a0IEsLateNonCriticalExtension;

class SecurityModeFailurev8a0IEsNonCriticalExtension : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	SecurityModeFailurev8a0IEsNonCriticalExtension(): Sequence(&theInfo) {}


};

class SecurityModeFailurev8a0IEs : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SecurityModeFailurev8a0IEs(): Sequence(&theInfo) {}

	void setSecurityModeFailurev8a0IEsLateNonCriticalExtension(const SecurityModeFailurev8a0IEsLateNonCriticalExtension& securityModeFailurev8a0IEsLateNonCriticalExtension) { *static_cast<SecurityModeFailurev8a0IEsLateNonCriticalExtension*>(items[0]) = securityModeFailurev8a0IEsLateNonCriticalExtension; }
	void setSecurityModeFailurev8a0IEsNonCriticalExtension(const SecurityModeFailurev8a0IEsNonCriticalExtension& securityModeFailurev8a0IEsNonCriticalExtension) { *static_cast<SecurityModeFailurev8a0IEsNonCriticalExtension*>(items[1]) = securityModeFailurev8a0IEsNonCriticalExtension; }

	SecurityModeFailurev8a0IEsLateNonCriticalExtension& getSecurityModeFailurev8a0IEsLateNonCriticalExtension() { return *static_cast<SecurityModeFailurev8a0IEsLateNonCriticalExtension*>(items[0]); }
	SecurityModeFailurev8a0IEsNonCriticalExtension& getSecurityModeFailurev8a0IEsNonCriticalExtension() { return *static_cast<SecurityModeFailurev8a0IEsNonCriticalExtension*>(items[1]); }
};

class SecurityModeFailurer8IEs : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SecurityModeFailurer8IEs(): Sequence(&theInfo) {}

	void setNonCriticalExtension(const SecurityModeFailurev8a0IEs& nonCriticalExtension) { *static_cast<SecurityModeFailurev8a0IEs*>(items[0]) = nonCriticalExtension; }

	SecurityModeFailurev8a0IEs& getNonCriticalExtension() { return *static_cast<SecurityModeFailurev8a0IEs*>(items[0]); }
};

class SecurityModeFailureCriticalExtensionsCriticalExtensionsFuture : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	SecurityModeFailureCriticalExtensionsCriticalExtensionsFuture(): Sequence(&theInfo) {}


};

class SecurityModeFailureCriticalExtensions : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum SecurityModeFailureCriticalExtensionsChoices {
		securityModeFailurer8 = 0,
		securityModeFailureCriticalExtensionsCriticalExtensionsFuture = 1,
	};
	static const Info theInfo;
	SecurityModeFailureCriticalExtensions(): Choice(&theInfo) {}
};

class SecurityModeFailure : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SecurityModeFailure(): Sequence(&theInfo) {}
	SecurityModeFailure(const RRCTransactionIdentifier& rrcTransactionIdentifier, const SecurityModeFailureCriticalExtensions& securityModeFailureCriticalExtensions);

	void setRrcTransactionIdentifier(const RRCTransactionIdentifier& rrcTransactionIdentifier) { *static_cast<RRCTransactionIdentifier*>(items[0]) = rrcTransactionIdentifier; }
	void setSecurityModeFailureCriticalExtensions(const SecurityModeFailureCriticalExtensions& securityModeFailureCriticalExtensions) { *static_cast<SecurityModeFailureCriticalExtensions*>(items[1]) = securityModeFailureCriticalExtensions; }

	RRCTransactionIdentifier& getRrcTransactionIdentifier() { return *static_cast<RRCTransactionIdentifier*>(items[0]); }
	SecurityModeFailureCriticalExtensions& getSecurityModeFailureCriticalExtensions() { return *static_cast<SecurityModeFailureCriticalExtensions*>(items[1]); }
};

typedef OctetStringBase UECapabilityRATContainerUeCapabilityRATContainer;

class UECapabilityRATContainer : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UECapabilityRATContainer(): Sequence(&theInfo) {}
	UECapabilityRATContainer(const RATType& ratType, const UECapabilityRATContainerUeCapabilityRATContainer& uECapabilityRATContainerUeCapabilityRATContainer);

	void setRatType(const RATType& ratType) { *static_cast<RATType*>(items[0]) = ratType; }
	void setUECapabilityRATContainerUeCapabilityRATContainer(const UECapabilityRATContainerUeCapabilityRATContainer& uECapabilityRATContainerUeCapabilityRATContainer) { *static_cast<UECapabilityRATContainerUeCapabilityRATContainer*>(items[1]) = uECapabilityRATContainerUeCapabilityRATContainer; }

	RATType& getRatType() { return *static_cast<RATType*>(items[0]); }
	UECapabilityRATContainerUeCapabilityRATContainer& getUECapabilityRATContainerUeCapabilityRATContainer() { return *static_cast<UECapabilityRATContainerUeCapabilityRATContainer*>(items[1]); }
};

typedef SequenceOf<UECapabilityRATContainer, CONSTRAINED, 0, maxRAT_Capabilities> UECapabilityRATContainerList;

typedef OctetStringBase UECapabilityInformationv8a0IEsLateNonCriticalExtension;

class UECapabilityInformationv8a0IEsNonCriticalExtension : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	UECapabilityInformationv8a0IEsNonCriticalExtension(): Sequence(&theInfo) {}


};

class UECapabilityInformationv8a0IEs : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UECapabilityInformationv8a0IEs(): Sequence(&theInfo) {}

	void setUECapabilityInformationv8a0IEsLateNonCriticalExtension(const UECapabilityInformationv8a0IEsLateNonCriticalExtension& uECapabilityInformationv8a0IEsLateNonCriticalExtension) { *static_cast<UECapabilityInformationv8a0IEsLateNonCriticalExtension*>(items[0]) = uECapabilityInformationv8a0IEsLateNonCriticalExtension; }
	void setUECapabilityInformationv8a0IEsNonCriticalExtension(const UECapabilityInformationv8a0IEsNonCriticalExtension& uECapabilityInformationv8a0IEsNonCriticalExtension) { *static_cast<UECapabilityInformationv8a0IEsNonCriticalExtension*>(items[1]) = uECapabilityInformationv8a0IEsNonCriticalExtension; }

	UECapabilityInformationv8a0IEsLateNonCriticalExtension& getUECapabilityInformationv8a0IEsLateNonCriticalExtension() { return *static_cast<UECapabilityInformationv8a0IEsLateNonCriticalExtension*>(items[0]); }
	UECapabilityInformationv8a0IEsNonCriticalExtension& getUECapabilityInformationv8a0IEsNonCriticalExtension() { return *static_cast<UECapabilityInformationv8a0IEsNonCriticalExtension*>(items[1]); }
};

class UECapabilityInformationr8IEs : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UECapabilityInformationr8IEs(): Sequence(&theInfo) {}
	UECapabilityInformationr8IEs(const UECapabilityRATContainerList& ueCapabilityRATContainerList);

	void setUeCapabilityRATContainerList(const UECapabilityRATContainerList& ueCapabilityRATContainerList) { *static_cast<UECapabilityRATContainerList*>(items[0]) = ueCapabilityRATContainerList; }
	void setNonCriticalExtension(const UECapabilityInformationv8a0IEs& nonCriticalExtension) { *static_cast<UECapabilityInformationv8a0IEs*>(items[1]) = nonCriticalExtension; }

	UECapabilityRATContainerList& getUeCapabilityRATContainerList() { return *static_cast<UECapabilityRATContainerList*>(items[0]); }
	UECapabilityInformationv8a0IEs& getNonCriticalExtension() { return *static_cast<UECapabilityInformationv8a0IEs*>(items[1]); }
};

typedef Null UECapabilityInformationCriticalExtensionsC1Spare7;

typedef Null UECapabilityInformationCriticalExtensionsC1Spare6;

typedef Null UECapabilityInformationCriticalExtensionsC1Spare5;

typedef Null UECapabilityInformationCriticalExtensionsC1Spare4;

typedef Null UECapabilityInformationCriticalExtensionsC1Spare3;

typedef Null UECapabilityInformationCriticalExtensionsC1Spare2;

typedef Null UECapabilityInformationCriticalExtensionsC1Spare1;

class UECapabilityInformationCriticalExtensionsC1 : public Choice {
private:
	static const void *choicesInfo[8];
public:
	enum UECapabilityInformationCriticalExtensionsC1Choices {
		ueCapabilityInformationr8 = 0,
		uECapabilityInformationCriticalExtensionsC1Spare7 = 1,
		uECapabilityInformationCriticalExtensionsC1Spare6 = 2,
		uECapabilityInformationCriticalExtensionsC1Spare5 = 3,
		uECapabilityInformationCriticalExtensionsC1Spare4 = 4,
		uECapabilityInformationCriticalExtensionsC1Spare3 = 5,
		uECapabilityInformationCriticalExtensionsC1Spare2 = 6,
		uECapabilityInformationCriticalExtensionsC1Spare1 = 7,
	};
	static const Info theInfo;
	UECapabilityInformationCriticalExtensionsC1(): Choice(&theInfo) {}
};

class UECapabilityInformationCriticalExtensionsCriticalExtensionsFuture : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	UECapabilityInformationCriticalExtensionsCriticalExtensionsFuture(): Sequence(&theInfo) {}


};

class UECapabilityInformationCriticalExtensions : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum UECapabilityInformationCriticalExtensionsChoices {
		uECapabilityInformationCriticalExtensionsC1 = 0,
		uECapabilityInformationCriticalExtensionsCriticalExtensionsFuture = 1,
	};
	static const Info theInfo;
	UECapabilityInformationCriticalExtensions(): Choice(&theInfo) {}
};

class UECapabilityInformation : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UECapabilityInformation(): Sequence(&theInfo) {}
	UECapabilityInformation(const RRCTransactionIdentifier& rrcTransactionIdentifier, const UECapabilityInformationCriticalExtensions& uECapabilityInformationCriticalExtensions);

	void setRrcTransactionIdentifier(const RRCTransactionIdentifier& rrcTransactionIdentifier) { *static_cast<RRCTransactionIdentifier*>(items[0]) = rrcTransactionIdentifier; }
	void setUECapabilityInformationCriticalExtensions(const UECapabilityInformationCriticalExtensions& uECapabilityInformationCriticalExtensions) { *static_cast<UECapabilityInformationCriticalExtensions*>(items[1]) = uECapabilityInformationCriticalExtensions; }

	RRCTransactionIdentifier& getRrcTransactionIdentifier() { return *static_cast<RRCTransactionIdentifier*>(items[0]); }
	UECapabilityInformationCriticalExtensions& getUECapabilityInformationCriticalExtensions() { return *static_cast<UECapabilityInformationCriticalExtensions*>(items[1]); }
};

typedef BitString<CONSTRAINED, 56, 56> ULHandoverPreparationTransferr8IEsMeid;

typedef OctetStringBase ULHandoverPreparationTransferv8a0IEsLateNonCriticalExtension;

class ULHandoverPreparationTransferv8a0IEsNonCriticalExtension : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	ULHandoverPreparationTransferv8a0IEsNonCriticalExtension(): Sequence(&theInfo) {}


};

class ULHandoverPreparationTransferv8a0IEs : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULHandoverPreparationTransferv8a0IEs(): Sequence(&theInfo) {}

	void setULHandoverPreparationTransferv8a0IEsLateNonCriticalExtension(const ULHandoverPreparationTransferv8a0IEsLateNonCriticalExtension& uLHandoverPreparationTransferv8a0IEsLateNonCriticalExtension) { *static_cast<ULHandoverPreparationTransferv8a0IEsLateNonCriticalExtension*>(items[0]) = uLHandoverPreparationTransferv8a0IEsLateNonCriticalExtension; }
	void setULHandoverPreparationTransferv8a0IEsNonCriticalExtension(const ULHandoverPreparationTransferv8a0IEsNonCriticalExtension& uLHandoverPreparationTransferv8a0IEsNonCriticalExtension) { *static_cast<ULHandoverPreparationTransferv8a0IEsNonCriticalExtension*>(items[1]) = uLHandoverPreparationTransferv8a0IEsNonCriticalExtension; }

	ULHandoverPreparationTransferv8a0IEsLateNonCriticalExtension& getULHandoverPreparationTransferv8a0IEsLateNonCriticalExtension() { return *static_cast<ULHandoverPreparationTransferv8a0IEsLateNonCriticalExtension*>(items[0]); }
	ULHandoverPreparationTransferv8a0IEsNonCriticalExtension& getULHandoverPreparationTransferv8a0IEsNonCriticalExtension() { return *static_cast<ULHandoverPreparationTransferv8a0IEsNonCriticalExtension*>(items[1]); }
};

class ULHandoverPreparationTransferr8IEs : public Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	ULHandoverPreparationTransferr8IEs(): Sequence(&theInfo) {}
	ULHandoverPreparationTransferr8IEs(const CDMA2000Type& cdma2000Type, const DedicatedInfoCDMA2000& dedicatedInfo);

	void setCdma2000Type(const CDMA2000Type& cdma2000Type) { *static_cast<CDMA2000Type*>(items[0]) = cdma2000Type; }
	void setULHandoverPreparationTransferr8IEsMeid(const ULHandoverPreparationTransferr8IEsMeid& uLHandoverPreparationTransferr8IEsMeid) { *static_cast<ULHandoverPreparationTransferr8IEsMeid*>(items[1]) = uLHandoverPreparationTransferr8IEsMeid; }
	void setDedicatedInfo(const DedicatedInfoCDMA2000& dedicatedInfo) { *static_cast<DedicatedInfoCDMA2000*>(items[2]) = dedicatedInfo; }
	void setNonCriticalExtension(const ULHandoverPreparationTransferv8a0IEs& nonCriticalExtension) { *static_cast<ULHandoverPreparationTransferv8a0IEs*>(items[3]) = nonCriticalExtension; }

	CDMA2000Type& getCdma2000Type() { return *static_cast<CDMA2000Type*>(items[0]); }
	ULHandoverPreparationTransferr8IEsMeid& getULHandoverPreparationTransferr8IEsMeid() { return *static_cast<ULHandoverPreparationTransferr8IEsMeid*>(items[1]); }
	DedicatedInfoCDMA2000& getDedicatedInfo() { return *static_cast<DedicatedInfoCDMA2000*>(items[2]); }
	ULHandoverPreparationTransferv8a0IEs& getNonCriticalExtension() { return *static_cast<ULHandoverPreparationTransferv8a0IEs*>(items[3]); }
};

typedef Null ULHandoverPreparationTransferCriticalExtensionsC1Spare3;

typedef Null ULHandoverPreparationTransferCriticalExtensionsC1Spare2;

typedef Null ULHandoverPreparationTransferCriticalExtensionsC1Spare1;

class ULHandoverPreparationTransferCriticalExtensionsC1 : public Choice {
private:
	static const void *choicesInfo[4];
public:
	enum ULHandoverPreparationTransferCriticalExtensionsC1Choices {
		ulHandoverPreparationTransferr8 = 0,
		uLHandoverPreparationTransferCriticalExtensionsC1Spare3 = 1,
		uLHandoverPreparationTransferCriticalExtensionsC1Spare2 = 2,
		uLHandoverPreparationTransferCriticalExtensionsC1Spare1 = 3,
	};
	static const Info theInfo;
	ULHandoverPreparationTransferCriticalExtensionsC1(): Choice(&theInfo) {}
};

class ULHandoverPreparationTransferCriticalExtensionsCriticalExtensionsFuture : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	ULHandoverPreparationTransferCriticalExtensionsCriticalExtensionsFuture(): Sequence(&theInfo) {}


};

class ULHandoverPreparationTransferCriticalExtensions : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum ULHandoverPreparationTransferCriticalExtensionsChoices {
		uLHandoverPreparationTransferCriticalExtensionsC1 = 0,
		uLHandoverPreparationTransferCriticalExtensionsCriticalExtensionsFuture = 1,
	};
	static const Info theInfo;
	ULHandoverPreparationTransferCriticalExtensions(): Choice(&theInfo) {}
};

class ULHandoverPreparationTransfer : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULHandoverPreparationTransfer(): Sequence(&theInfo) {}
	ULHandoverPreparationTransfer(const ULHandoverPreparationTransferCriticalExtensions& uLHandoverPreparationTransferCriticalExtensions);

	void setULHandoverPreparationTransferCriticalExtensions(const ULHandoverPreparationTransferCriticalExtensions& uLHandoverPreparationTransferCriticalExtensions) { *static_cast<ULHandoverPreparationTransferCriticalExtensions*>(items[0]) = uLHandoverPreparationTransferCriticalExtensions; }

	ULHandoverPreparationTransferCriticalExtensions& getULHandoverPreparationTransferCriticalExtensions() { return *static_cast<ULHandoverPreparationTransferCriticalExtensions*>(items[0]); }
};

class ULInformationTransferr8IEsDedicatedInfoType : public Choice {
private:
	static const void *choicesInfo[3];
public:
	enum ULInformationTransferr8IEsDedicatedInfoTypeChoices {
		dedicatedInfoNAS = 0,
		dedicatedInfoCDMA20001XRTT = 1,
		dedicatedInfoCDMA2000HRPD = 2,
	};
	static const Info theInfo;
	ULInformationTransferr8IEsDedicatedInfoType(): Choice(&theInfo) {}
};

typedef OctetStringBase ULInformationTransferv8a0IEsLateNonCriticalExtension;

class ULInformationTransferv8a0IEsNonCriticalExtension : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	ULInformationTransferv8a0IEsNonCriticalExtension(): Sequence(&theInfo) {}


};

class ULInformationTransferv8a0IEs : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULInformationTransferv8a0IEs(): Sequence(&theInfo) {}

	void setULInformationTransferv8a0IEsLateNonCriticalExtension(const ULInformationTransferv8a0IEsLateNonCriticalExtension& uLInformationTransferv8a0IEsLateNonCriticalExtension) { *static_cast<ULInformationTransferv8a0IEsLateNonCriticalExtension*>(items[0]) = uLInformationTransferv8a0IEsLateNonCriticalExtension; }
	void setULInformationTransferv8a0IEsNonCriticalExtension(const ULInformationTransferv8a0IEsNonCriticalExtension& uLInformationTransferv8a0IEsNonCriticalExtension) { *static_cast<ULInformationTransferv8a0IEsNonCriticalExtension*>(items[1]) = uLInformationTransferv8a0IEsNonCriticalExtension; }

	ULInformationTransferv8a0IEsLateNonCriticalExtension& getULInformationTransferv8a0IEsLateNonCriticalExtension() { return *static_cast<ULInformationTransferv8a0IEsLateNonCriticalExtension*>(items[0]); }
	ULInformationTransferv8a0IEsNonCriticalExtension& getULInformationTransferv8a0IEsNonCriticalExtension() { return *static_cast<ULInformationTransferv8a0IEsNonCriticalExtension*>(items[1]); }
};

class ULInformationTransferr8IEs : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULInformationTransferr8IEs(): Sequence(&theInfo) {}
	ULInformationTransferr8IEs(const ULInformationTransferr8IEsDedicatedInfoType& uLInformationTransferr8IEsDedicatedInfoType);

	void setULInformationTransferr8IEsDedicatedInfoType(const ULInformationTransferr8IEsDedicatedInfoType& uLInformationTransferr8IEsDedicatedInfoType) { *static_cast<ULInformationTransferr8IEsDedicatedInfoType*>(items[0]) = uLInformationTransferr8IEsDedicatedInfoType; }
	void setNonCriticalExtension(const ULInformationTransferv8a0IEs& nonCriticalExtension) { *static_cast<ULInformationTransferv8a0IEs*>(items[1]) = nonCriticalExtension; }

	ULInformationTransferr8IEsDedicatedInfoType& getULInformationTransferr8IEsDedicatedInfoType() { return *static_cast<ULInformationTransferr8IEsDedicatedInfoType*>(items[0]); }
	ULInformationTransferv8a0IEs& getNonCriticalExtension() { return *static_cast<ULInformationTransferv8a0IEs*>(items[1]); }
};

typedef Null ULInformationTransferCriticalExtensionsC1Spare3;

typedef Null ULInformationTransferCriticalExtensionsC1Spare2;

typedef Null ULInformationTransferCriticalExtensionsC1Spare1;

class ULInformationTransferCriticalExtensionsC1 : public Choice {
private:
	static const void *choicesInfo[4];
public:
	enum ULInformationTransferCriticalExtensionsC1Choices {
		ulInformationTransferr8 = 0,
		uLInformationTransferCriticalExtensionsC1Spare3 = 1,
		uLInformationTransferCriticalExtensionsC1Spare2 = 2,
		uLInformationTransferCriticalExtensionsC1Spare1 = 3,
	};
	static const Info theInfo;
	ULInformationTransferCriticalExtensionsC1(): Choice(&theInfo) {}
};

class ULInformationTransferCriticalExtensionsCriticalExtensionsFuture : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	ULInformationTransferCriticalExtensionsCriticalExtensionsFuture(): Sequence(&theInfo) {}


};

class ULInformationTransferCriticalExtensions : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum ULInformationTransferCriticalExtensionsChoices {
		uLInformationTransferCriticalExtensionsC1 = 0,
		uLInformationTransferCriticalExtensionsCriticalExtensionsFuture = 1,
	};
	static const Info theInfo;
	ULInformationTransferCriticalExtensions(): Choice(&theInfo) {}
};

class ULInformationTransfer : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULInformationTransfer(): Sequence(&theInfo) {}
	ULInformationTransfer(const ULInformationTransferCriticalExtensions& uLInformationTransferCriticalExtensions);

	void setULInformationTransferCriticalExtensions(const ULInformationTransferCriticalExtensions& uLInformationTransferCriticalExtensions) { *static_cast<ULInformationTransferCriticalExtensions*>(items[0]) = uLInformationTransferCriticalExtensions; }

	ULInformationTransferCriticalExtensions& getULInformationTransferCriticalExtensions() { return *static_cast<ULInformationTransferCriticalExtensions*>(items[0]); }
};

typedef Integer<CONSTRAINED, 0, 4294967295> DRBCountInfoCountUplink;

typedef Integer<CONSTRAINED, 0, 4294967295> DRBCountInfoCountDownlink;

class DRBCountInfo : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DRBCountInfo(): Sequence(&theInfo) {}
	DRBCountInfo(const DRBIdentity& drbIdentity, const DRBCountInfoCountUplink& dRBCountInfoCountUplink, const DRBCountInfoCountDownlink& dRBCountInfoCountDownlink);

	void setDrbIdentity(const DRBIdentity& drbIdentity) { *static_cast<DRBIdentity*>(items[0]) = drbIdentity; }
	void setDRBCountInfoCountUplink(const DRBCountInfoCountUplink& dRBCountInfoCountUplink) { *static_cast<DRBCountInfoCountUplink*>(items[1]) = dRBCountInfoCountUplink; }
	void setDRBCountInfoCountDownlink(const DRBCountInfoCountDownlink& dRBCountInfoCountDownlink) { *static_cast<DRBCountInfoCountDownlink*>(items[2]) = dRBCountInfoCountDownlink; }

	DRBIdentity& getDrbIdentity() { return *static_cast<DRBIdentity*>(items[0]); }
	DRBCountInfoCountUplink& getDRBCountInfoCountUplink() { return *static_cast<DRBCountInfoCountUplink*>(items[1]); }
	DRBCountInfoCountDownlink& getDRBCountInfoCountDownlink() { return *static_cast<DRBCountInfoCountDownlink*>(items[2]); }
};

typedef SequenceOf<DRBCountInfo, CONSTRAINED, 0, maxDRB> DRBCountInfoList;

typedef OctetStringBase CounterCheckResponsev8a0IEsLateNonCriticalExtension;

class CounterCheckResponsev8a0IEsNonCriticalExtension : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	CounterCheckResponsev8a0IEsNonCriticalExtension(): Sequence(&theInfo) {}


};

class CounterCheckResponsev8a0IEs : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CounterCheckResponsev8a0IEs(): Sequence(&theInfo) {}

	void setCounterCheckResponsev8a0IEsLateNonCriticalExtension(const CounterCheckResponsev8a0IEsLateNonCriticalExtension& counterCheckResponsev8a0IEsLateNonCriticalExtension) { *static_cast<CounterCheckResponsev8a0IEsLateNonCriticalExtension*>(items[0]) = counterCheckResponsev8a0IEsLateNonCriticalExtension; }
	void setCounterCheckResponsev8a0IEsNonCriticalExtension(const CounterCheckResponsev8a0IEsNonCriticalExtension& counterCheckResponsev8a0IEsNonCriticalExtension) { *static_cast<CounterCheckResponsev8a0IEsNonCriticalExtension*>(items[1]) = counterCheckResponsev8a0IEsNonCriticalExtension; }

	CounterCheckResponsev8a0IEsLateNonCriticalExtension& getCounterCheckResponsev8a0IEsLateNonCriticalExtension() { return *static_cast<CounterCheckResponsev8a0IEsLateNonCriticalExtension*>(items[0]); }
	CounterCheckResponsev8a0IEsNonCriticalExtension& getCounterCheckResponsev8a0IEsNonCriticalExtension() { return *static_cast<CounterCheckResponsev8a0IEsNonCriticalExtension*>(items[1]); }
};

class CounterCheckResponser8IEs : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CounterCheckResponser8IEs(): Sequence(&theInfo) {}
	CounterCheckResponser8IEs(const DRBCountInfoList& drbCountInfoList);

	void setDrbCountInfoList(const DRBCountInfoList& drbCountInfoList) { *static_cast<DRBCountInfoList*>(items[0]) = drbCountInfoList; }
	void setNonCriticalExtension(const CounterCheckResponsev8a0IEs& nonCriticalExtension) { *static_cast<CounterCheckResponsev8a0IEs*>(items[1]) = nonCriticalExtension; }

	DRBCountInfoList& getDrbCountInfoList() { return *static_cast<DRBCountInfoList*>(items[0]); }
	CounterCheckResponsev8a0IEs& getNonCriticalExtension() { return *static_cast<CounterCheckResponsev8a0IEs*>(items[1]); }
};

class CounterCheckResponseCriticalExtensionsCriticalExtensionsFuture : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	CounterCheckResponseCriticalExtensionsCriticalExtensionsFuture(): Sequence(&theInfo) {}


};

class CounterCheckResponseCriticalExtensions : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum CounterCheckResponseCriticalExtensionsChoices {
		counterCheckResponser8 = 0,
		counterCheckResponseCriticalExtensionsCriticalExtensionsFuture = 1,
	};
	static const Info theInfo;
	CounterCheckResponseCriticalExtensions(): Choice(&theInfo) {}
};

class CounterCheckResponse : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CounterCheckResponse(): Sequence(&theInfo) {}
	CounterCheckResponse(const RRCTransactionIdentifier& rrcTransactionIdentifier, const CounterCheckResponseCriticalExtensions& counterCheckResponseCriticalExtensions);

	void setRrcTransactionIdentifier(const RRCTransactionIdentifier& rrcTransactionIdentifier) { *static_cast<RRCTransactionIdentifier*>(items[0]) = rrcTransactionIdentifier; }
	void setCounterCheckResponseCriticalExtensions(const CounterCheckResponseCriticalExtensions& counterCheckResponseCriticalExtensions) { *static_cast<CounterCheckResponseCriticalExtensions*>(items[1]) = counterCheckResponseCriticalExtensions; }

	RRCTransactionIdentifier& getRrcTransactionIdentifier() { return *static_cast<RRCTransactionIdentifier*>(items[0]); }
	CounterCheckResponseCriticalExtensions& getCounterCheckResponseCriticalExtensions() { return *static_cast<CounterCheckResponseCriticalExtensions*>(items[1]); }
};

typedef Integer<CONSTRAINED, 1, 200> UEInformationResponser9IEsRachReportr9NumberOfPreamblesSentr9;

typedef Boolean UEInformationResponser9IEsRachReportr9ContentionDetectedr9;

class UEInformationResponser9IEsRachReportr9 : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UEInformationResponser9IEsRachReportr9(): Sequence(&theInfo) {}
	UEInformationResponser9IEsRachReportr9(const UEInformationResponser9IEsRachReportr9NumberOfPreamblesSentr9& uEInformationResponser9IEsRachReportr9NumberOfPreamblesSentr9, const UEInformationResponser9IEsRachReportr9ContentionDetectedr9& uEInformationResponser9IEsRachReportr9ContentionDetectedr9);

	void setUEInformationResponser9IEsRachReportr9NumberOfPreamblesSentr9(const UEInformationResponser9IEsRachReportr9NumberOfPreamblesSentr9& uEInformationResponser9IEsRachReportr9NumberOfPreamblesSentr9) { *static_cast<UEInformationResponser9IEsRachReportr9NumberOfPreamblesSentr9*>(items[0]) = uEInformationResponser9IEsRachReportr9NumberOfPreamblesSentr9; }
	void setUEInformationResponser9IEsRachReportr9ContentionDetectedr9(const UEInformationResponser9IEsRachReportr9ContentionDetectedr9& uEInformationResponser9IEsRachReportr9ContentionDetectedr9) { *static_cast<UEInformationResponser9IEsRachReportr9ContentionDetectedr9*>(items[1]) = uEInformationResponser9IEsRachReportr9ContentionDetectedr9; }

	UEInformationResponser9IEsRachReportr9NumberOfPreamblesSentr9& getUEInformationResponser9IEsRachReportr9NumberOfPreamblesSentr9() { return *static_cast<UEInformationResponser9IEsRachReportr9NumberOfPreamblesSentr9*>(items[0]); }
	UEInformationResponser9IEsRachReportr9ContentionDetectedr9& getUEInformationResponser9IEsRachReportr9ContentionDetectedr9() { return *static_cast<UEInformationResponser9IEsRachReportr9ContentionDetectedr9*>(items[1]); }
};

class RLFReportr9MeasResultLastServCellr9 : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RLFReportr9MeasResultLastServCellr9(): Sequence(&theInfo) {}
	RLFReportr9MeasResultLastServCellr9(const RSRPRange& rsrpResultr9);

	void setRsrpResultr9(const RSRPRange& rsrpResultr9) { *static_cast<RSRPRange*>(items[0]) = rsrpResultr9; }
	void setRsrqResultr9(const RSRQRange& rsrqResultr9) { *static_cast<RSRQRange*>(items[1]) = rsrqResultr9; }

	RSRPRange& getRsrpResultr9() { return *static_cast<RSRPRange*>(items[0]); }
	RSRQRange& getRsrqResultr9() { return *static_cast<RSRQRange*>(items[1]); }
};

class MeasResult2EUTRAr9 : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MeasResult2EUTRAr9(): Sequence(&theInfo) {}
	MeasResult2EUTRAr9(const ARFCNValueEUTRA& carrierFreqr9, const MeasResultListEUTRA& measResultListr9);

	void setCarrierFreqr9(const ARFCNValueEUTRA& carrierFreqr9) { *static_cast<ARFCNValueEUTRA*>(items[0]) = carrierFreqr9; }
	void setMeasResultListr9(const MeasResultListEUTRA& measResultListr9) { *static_cast<MeasResultListEUTRA*>(items[1]) = measResultListr9; }

	ARFCNValueEUTRA& getCarrierFreqr9() { return *static_cast<ARFCNValueEUTRA*>(items[0]); }
	MeasResultListEUTRA& getMeasResultListr9() { return *static_cast<MeasResultListEUTRA*>(items[1]); }
};

typedef SequenceOf<MeasResult2EUTRAr9, CONSTRAINED, 1, maxFreq> MeasResultList2EUTRAr9;

class MeasResult2UTRAr9 : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MeasResult2UTRAr9(): Sequence(&theInfo) {}
	MeasResult2UTRAr9(const ARFCNValueUTRA& carrierFreqr9, const MeasResultListUTRA& measResultListr9);

	void setCarrierFreqr9(const ARFCNValueUTRA& carrierFreqr9) { *static_cast<ARFCNValueUTRA*>(items[0]) = carrierFreqr9; }
	void setMeasResultListr9(const MeasResultListUTRA& measResultListr9) { *static_cast<MeasResultListUTRA*>(items[1]) = measResultListr9; }

	ARFCNValueUTRA& getCarrierFreqr9() { return *static_cast<ARFCNValueUTRA*>(items[0]); }
	MeasResultListUTRA& getMeasResultListr9() { return *static_cast<MeasResultListUTRA*>(items[1]); }
};

typedef SequenceOf<MeasResult2UTRAr9, CONSTRAINED, 1, maxFreq> MeasResultList2UTRAr9;

class MeasResult2CDMA2000r9 : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MeasResult2CDMA2000r9(): Sequence(&theInfo) {}
	MeasResult2CDMA2000r9(const CarrierFreqCDMA2000& carrierFreqr9, const MeasResultsCDMA2000& measResultListr9);

	void setCarrierFreqr9(const CarrierFreqCDMA2000& carrierFreqr9) { *static_cast<CarrierFreqCDMA2000*>(items[0]) = carrierFreqr9; }
	void setMeasResultListr9(const MeasResultsCDMA2000& measResultListr9) { *static_cast<MeasResultsCDMA2000*>(items[1]) = measResultListr9; }

	CarrierFreqCDMA2000& getCarrierFreqr9() { return *static_cast<CarrierFreqCDMA2000*>(items[0]); }
	MeasResultsCDMA2000& getMeasResultListr9() { return *static_cast<MeasResultsCDMA2000*>(items[1]); }
};

typedef SequenceOf<MeasResult2CDMA2000r9, CONSTRAINED, 1, maxFreq> MeasResultList2CDMA2000r9;

class RLFReportr9MeasResultNeighCellsr9 : public Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	RLFReportr9MeasResultNeighCellsr9(): Sequence(&theInfo) {}

	void setMeasResultListEUTRAr9(const MeasResultList2EUTRAr9& measResultListEUTRAr9) { *static_cast<MeasResultList2EUTRAr9*>(items[0]) = measResultListEUTRAr9; }
	void setMeasResultListUTRAr9(const MeasResultList2UTRAr9& measResultListUTRAr9) { *static_cast<MeasResultList2UTRAr9*>(items[1]) = measResultListUTRAr9; }
	void setMeasResultListGERANr9(const MeasResultListGERAN& measResultListGERANr9) { *static_cast<MeasResultListGERAN*>(items[2]) = measResultListGERANr9; }
	void setMeasResultsCDMA2000r9(const MeasResultList2CDMA2000r9& measResultsCDMA2000r9) { *static_cast<MeasResultList2CDMA2000r9*>(items[3]) = measResultsCDMA2000r9; }

	MeasResultList2EUTRAr9& getMeasResultListEUTRAr9() { return *static_cast<MeasResultList2EUTRAr9*>(items[0]); }
	MeasResultList2UTRAr9& getMeasResultListUTRAr9() { return *static_cast<MeasResultList2UTRAr9*>(items[1]); }
	MeasResultListGERAN& getMeasResultListGERANr9() { return *static_cast<MeasResultListGERAN*>(items[2]); }
	MeasResultList2CDMA2000r9& getMeasResultsCDMA2000r9() { return *static_cast<MeasResultList2CDMA2000r9*>(items[3]); }
};

class RLFReportr9FailedPCellIdr10Pciarfcnr10 : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RLFReportr9FailedPCellIdr10Pciarfcnr10(): Sequence(&theInfo) {}
	RLFReportr9FailedPCellIdr10Pciarfcnr10(const PhysCellId& physCellIdr10, const ARFCNValueEUTRA& carrierFreqr10);

	void setPhysCellIdr10(const PhysCellId& physCellIdr10) { *static_cast<PhysCellId*>(items[0]) = physCellIdr10; }
	void setCarrierFreqr10(const ARFCNValueEUTRA& carrierFreqr10) { *static_cast<ARFCNValueEUTRA*>(items[1]) = carrierFreqr10; }

	PhysCellId& getPhysCellIdr10() { return *static_cast<PhysCellId*>(items[0]); }
	ARFCNValueEUTRA& getCarrierFreqr10() { return *static_cast<ARFCNValueEUTRA*>(items[1]); }
};

class RLFReportr9FailedPCellIdr10 : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum RLFReportr9FailedPCellIdr10Choices {
		cellGlobalIdr10 = 0,
		rLFReportr9FailedPCellIdr10Pciarfcnr10 = 1,
	};
	static const Info theInfo;
	RLFReportr9FailedPCellIdr10(): Choice(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 1023> RLFReportr9TimeConnFailurer10;

enum RLFReportr9connectionFailureType_r10Values {
	rlf_RLFReportr9connectionFailureType_r10 = 0,
	hof_RLFReportr9connectionFailureType_r10 = 1,
};
typedef Enumerated<CONSTRAINED, 1> RLFReportr9connectionFailureType_r10;

class RLFReportr9 : public Sequence {
private:
	static const void *itemsInfo[8];
	static bool itemsPres[8];
public:
	static const Info theInfo;
	RLFReportr9(): Sequence(&theInfo) {}
	RLFReportr9(const RLFReportr9MeasResultLastServCellr9& rLFReportr9MeasResultLastServCellr9);

	void setRLFReportr9MeasResultLastServCellr9(const RLFReportr9MeasResultLastServCellr9& rLFReportr9MeasResultLastServCellr9) { *static_cast<RLFReportr9MeasResultLastServCellr9*>(items[0]) = rLFReportr9MeasResultLastServCellr9; }
	void setRLFReportr9MeasResultNeighCellsr9(const RLFReportr9MeasResultNeighCellsr9& rLFReportr9MeasResultNeighCellsr9) { *static_cast<RLFReportr9MeasResultNeighCellsr9*>(items[1]) = rLFReportr9MeasResultNeighCellsr9; }
	void setLocationInfor10(const LocationInfor10& locationInfor10) { *static_cast<LocationInfor10*>(items[2]) = locationInfor10; }
	void setRLFReportr9FailedPCellIdr10(const RLFReportr9FailedPCellIdr10& rLFReportr9FailedPCellIdr10) { *static_cast<RLFReportr9FailedPCellIdr10*>(items[3]) = rLFReportr9FailedPCellIdr10; }
	void setReestablishmentCellIdr10(const CellGlobalIdEUTRA& reestablishmentCellIdr10) { *static_cast<CellGlobalIdEUTRA*>(items[4]) = reestablishmentCellIdr10; }
	void setRLFReportr9TimeConnFailurer10(const RLFReportr9TimeConnFailurer10& rLFReportr9TimeConnFailurer10) { *static_cast<RLFReportr9TimeConnFailurer10*>(items[5]) = rLFReportr9TimeConnFailurer10; }
	void setRLFReportr9connectionFailureType_r10(const RLFReportr9connectionFailureType_r10& rLFReportr9connectionFailureType_r10) { *static_cast<RLFReportr9connectionFailureType_r10*>(items[6]) = rLFReportr9connectionFailureType_r10; }
	void setPreviousPCellIdr10(const CellGlobalIdEUTRA& previousPCellIdr10) { *static_cast<CellGlobalIdEUTRA*>(items[7]) = previousPCellIdr10; }

	RLFReportr9MeasResultLastServCellr9& getRLFReportr9MeasResultLastServCellr9() { return *static_cast<RLFReportr9MeasResultLastServCellr9*>(items[0]); }
	RLFReportr9MeasResultNeighCellsr9& getRLFReportr9MeasResultNeighCellsr9() { return *static_cast<RLFReportr9MeasResultNeighCellsr9*>(items[1]); }
	LocationInfor10& getLocationInfor10() { return *static_cast<LocationInfor10*>(items[2]); }
	RLFReportr9FailedPCellIdr10& getRLFReportr9FailedPCellIdr10() { return *static_cast<RLFReportr9FailedPCellIdr10*>(items[3]); }
	CellGlobalIdEUTRA& getReestablishmentCellIdr10() { return *static_cast<CellGlobalIdEUTRA*>(items[4]); }
	RLFReportr9TimeConnFailurer10& getRLFReportr9TimeConnFailurer10() { return *static_cast<RLFReportr9TimeConnFailurer10*>(items[5]); }
	RLFReportr9connectionFailureType_r10& getRLFReportr9connectionFailureType_r10() { return *static_cast<RLFReportr9connectionFailureType_r10*>(items[6]); }
	CellGlobalIdEUTRA& getPreviousPCellIdr10() { return *static_cast<CellGlobalIdEUTRA*>(items[7]); }
};

typedef OctetStringBase UEInformationResponsev930IEsLateNonCriticalExtension;

typedef OctetString<CONSTRAINED, 2, 2> LogMeasReportr10TraceRecordingSessionRefr10;

typedef OctetString<CONSTRAINED, 1, 1> LogMeasReportr10TceIdr10;

typedef Integer<CONSTRAINED, 0, 7200> LogMeasInfor10RelativeTimeStampr10;

class LogMeasInfor10MeasResultServCellr10 : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	LogMeasInfor10MeasResultServCellr10(): Sequence(&theInfo) {}
	LogMeasInfor10MeasResultServCellr10(const RSRPRange& rsrpResultr10, const RSRQRange& rsrqResultr10);

	void setRsrpResultr10(const RSRPRange& rsrpResultr10) { *static_cast<RSRPRange*>(items[0]) = rsrpResultr10; }
	void setRsrqResultr10(const RSRQRange& rsrqResultr10) { *static_cast<RSRQRange*>(items[1]) = rsrqResultr10; }

	RSRPRange& getRsrpResultr10() { return *static_cast<RSRPRange*>(items[0]); }
	RSRQRange& getRsrqResultr10() { return *static_cast<RSRQRange*>(items[1]); }
};

typedef SequenceOf<MeasResultListGERAN, CONSTRAINED, 1, maxCellListGERAN> MeasResultList2GERANr10;

class LogMeasInfor10MeasResultNeighCellsr10 : public Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	LogMeasInfor10MeasResultNeighCellsr10(): Sequence(&theInfo) {}

	void setMeasResultListEUTRAr10(const MeasResultList2EUTRAr9& measResultListEUTRAr10) { *static_cast<MeasResultList2EUTRAr9*>(items[0]) = measResultListEUTRAr10; }
	void setMeasResultListUTRAr10(const MeasResultList2UTRAr9& measResultListUTRAr10) { *static_cast<MeasResultList2UTRAr9*>(items[1]) = measResultListUTRAr10; }
	void setMeasResultListGERANr10(const MeasResultList2GERANr10& measResultListGERANr10) { *static_cast<MeasResultList2GERANr10*>(items[2]) = measResultListGERANr10; }
	void setMeasResultListCDMA2000r10(const MeasResultList2CDMA2000r9& measResultListCDMA2000r10) { *static_cast<MeasResultList2CDMA2000r9*>(items[3]) = measResultListCDMA2000r10; }

	MeasResultList2EUTRAr9& getMeasResultListEUTRAr10() { return *static_cast<MeasResultList2EUTRAr9*>(items[0]); }
	MeasResultList2UTRAr9& getMeasResultListUTRAr10() { return *static_cast<MeasResultList2UTRAr9*>(items[1]); }
	MeasResultList2GERANr10& getMeasResultListGERANr10() { return *static_cast<MeasResultList2GERANr10*>(items[2]); }
	MeasResultList2CDMA2000r9& getMeasResultListCDMA2000r10() { return *static_cast<MeasResultList2CDMA2000r9*>(items[3]); }
};

class LogMeasInfor10 : public Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	LogMeasInfor10(): Sequence(&theInfo) {}
	LogMeasInfor10(const LogMeasInfor10RelativeTimeStampr10& logMeasInfor10RelativeTimeStampr10, const CellGlobalIdEUTRA& servCellIdentityr10, const LogMeasInfor10MeasResultServCellr10& logMeasInfor10MeasResultServCellr10);

	void setLocationInfor10(const LocationInfor10& locationInfor10) { *static_cast<LocationInfor10*>(items[0]) = locationInfor10; }
	void setLogMeasInfor10RelativeTimeStampr10(const LogMeasInfor10RelativeTimeStampr10& logMeasInfor10RelativeTimeStampr10) { *static_cast<LogMeasInfor10RelativeTimeStampr10*>(items[1]) = logMeasInfor10RelativeTimeStampr10; }
	void setServCellIdentityr10(const CellGlobalIdEUTRA& servCellIdentityr10) { *static_cast<CellGlobalIdEUTRA*>(items[2]) = servCellIdentityr10; }
	void setLogMeasInfor10MeasResultServCellr10(const LogMeasInfor10MeasResultServCellr10& logMeasInfor10MeasResultServCellr10) { *static_cast<LogMeasInfor10MeasResultServCellr10*>(items[3]) = logMeasInfor10MeasResultServCellr10; }
	void setLogMeasInfor10MeasResultNeighCellsr10(const LogMeasInfor10MeasResultNeighCellsr10& logMeasInfor10MeasResultNeighCellsr10) { *static_cast<LogMeasInfor10MeasResultNeighCellsr10*>(items[4]) = logMeasInfor10MeasResultNeighCellsr10; }

	LocationInfor10& getLocationInfor10() { return *static_cast<LocationInfor10*>(items[0]); }
	LogMeasInfor10RelativeTimeStampr10& getLogMeasInfor10RelativeTimeStampr10() { return *static_cast<LogMeasInfor10RelativeTimeStampr10*>(items[1]); }
	CellGlobalIdEUTRA& getServCellIdentityr10() { return *static_cast<CellGlobalIdEUTRA*>(items[2]); }
	LogMeasInfor10MeasResultServCellr10& getLogMeasInfor10MeasResultServCellr10() { return *static_cast<LogMeasInfor10MeasResultServCellr10*>(items[3]); }
	LogMeasInfor10MeasResultNeighCellsr10& getLogMeasInfor10MeasResultNeighCellsr10() { return *static_cast<LogMeasInfor10MeasResultNeighCellsr10*>(items[4]); }
};

typedef SequenceOf<LogMeasInfor10, CONSTRAINED, 1, maxLogMeasReport_r10> LogMeasInfoListr10;

enum LogMeasReportr10logMeasAvailable_r10Values {
	true_LogMeasReportr10logMeasAvailable_r10 = 0,
};
typedef Enumerated<CONSTRAINED, 0> LogMeasReportr10logMeasAvailable_r10;

class LogMeasReportr10 : public Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	LogMeasReportr10(): Sequence(&theInfo) {}
	LogMeasReportr10(const AbsoluteTimeInfor10& absoluteTimeStampr10, const TraceReferencer10& traceReferencer10, const LogMeasReportr10TraceRecordingSessionRefr10& logMeasReportr10TraceRecordingSessionRefr10, const LogMeasReportr10TceIdr10& logMeasReportr10TceIdr10, const LogMeasInfoListr10& logMeasInfoListr10);

	void setAbsoluteTimeStampr10(const AbsoluteTimeInfor10& absoluteTimeStampr10) { *static_cast<AbsoluteTimeInfor10*>(items[0]) = absoluteTimeStampr10; }
	void setTraceReferencer10(const TraceReferencer10& traceReferencer10) { *static_cast<TraceReferencer10*>(items[1]) = traceReferencer10; }
	void setLogMeasReportr10TraceRecordingSessionRefr10(const LogMeasReportr10TraceRecordingSessionRefr10& logMeasReportr10TraceRecordingSessionRefr10) { *static_cast<LogMeasReportr10TraceRecordingSessionRefr10*>(items[2]) = logMeasReportr10TraceRecordingSessionRefr10; }
	void setLogMeasReportr10TceIdr10(const LogMeasReportr10TceIdr10& logMeasReportr10TceIdr10) { *static_cast<LogMeasReportr10TceIdr10*>(items[3]) = logMeasReportr10TceIdr10; }
	void setLogMeasInfoListr10(const LogMeasInfoListr10& logMeasInfoListr10) { *static_cast<LogMeasInfoListr10*>(items[4]) = logMeasInfoListr10; }
	void setLogMeasReportr10logMeasAvailable_r10(const LogMeasReportr10logMeasAvailable_r10& logMeasReportr10logMeasAvailable_r10) { *static_cast<LogMeasReportr10logMeasAvailable_r10*>(items[5]) = logMeasReportr10logMeasAvailable_r10; }

	AbsoluteTimeInfor10& getAbsoluteTimeStampr10() { return *static_cast<AbsoluteTimeInfor10*>(items[0]); }
	TraceReferencer10& getTraceReferencer10() { return *static_cast<TraceReferencer10*>(items[1]); }
	LogMeasReportr10TraceRecordingSessionRefr10& getLogMeasReportr10TraceRecordingSessionRefr10() { return *static_cast<LogMeasReportr10TraceRecordingSessionRefr10*>(items[2]); }
	LogMeasReportr10TceIdr10& getLogMeasReportr10TceIdr10() { return *static_cast<LogMeasReportr10TceIdr10*>(items[3]); }
	LogMeasInfoListr10& getLogMeasInfoListr10() { return *static_cast<LogMeasInfoListr10*>(items[4]); }
	LogMeasReportr10logMeasAvailable_r10& getLogMeasReportr10logMeasAvailable_r10() { return *static_cast<LogMeasReportr10logMeasAvailable_r10*>(items[5]); }
};

class UEInformationResponsev1020IEsNonCriticalExtension : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	UEInformationResponsev1020IEsNonCriticalExtension(): Sequence(&theInfo) {}


};

class UEInformationResponsev1020IEs : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UEInformationResponsev1020IEs(): Sequence(&theInfo) {}

	void setLogMeasReportr10(const LogMeasReportr10& logMeasReportr10) { *static_cast<LogMeasReportr10*>(items[0]) = logMeasReportr10; }
	void setUEInformationResponsev1020IEsNonCriticalExtension(const UEInformationResponsev1020IEsNonCriticalExtension& uEInformationResponsev1020IEsNonCriticalExtension) { *static_cast<UEInformationResponsev1020IEsNonCriticalExtension*>(items[1]) = uEInformationResponsev1020IEsNonCriticalExtension; }

	LogMeasReportr10& getLogMeasReportr10() { return *static_cast<LogMeasReportr10*>(items[0]); }
	UEInformationResponsev1020IEsNonCriticalExtension& getUEInformationResponsev1020IEsNonCriticalExtension() { return *static_cast<UEInformationResponsev1020IEsNonCriticalExtension*>(items[1]); }
};

class UEInformationResponsev930IEs : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UEInformationResponsev930IEs(): Sequence(&theInfo) {}

	void setUEInformationResponsev930IEsLateNonCriticalExtension(const UEInformationResponsev930IEsLateNonCriticalExtension& uEInformationResponsev930IEsLateNonCriticalExtension) { *static_cast<UEInformationResponsev930IEsLateNonCriticalExtension*>(items[0]) = uEInformationResponsev930IEsLateNonCriticalExtension; }
	void setNonCriticalExtension(const UEInformationResponsev1020IEs& nonCriticalExtension) { *static_cast<UEInformationResponsev1020IEs*>(items[1]) = nonCriticalExtension; }

	UEInformationResponsev930IEsLateNonCriticalExtension& getUEInformationResponsev930IEsLateNonCriticalExtension() { return *static_cast<UEInformationResponsev930IEsLateNonCriticalExtension*>(items[0]); }
	UEInformationResponsev1020IEs& getNonCriticalExtension() { return *static_cast<UEInformationResponsev1020IEs*>(items[1]); }
};

class UEInformationResponser9IEs : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	UEInformationResponser9IEs(): Sequence(&theInfo) {}

	void setUEInformationResponser9IEsRachReportr9(const UEInformationResponser9IEsRachReportr9& uEInformationResponser9IEsRachReportr9) { *static_cast<UEInformationResponser9IEsRachReportr9*>(items[0]) = uEInformationResponser9IEsRachReportr9; }
	void setRlfReportr9(const RLFReportr9& rlfReportr9) { *static_cast<RLFReportr9*>(items[1]) = rlfReportr9; }
	void setNonCriticalExtension(const UEInformationResponsev930IEs& nonCriticalExtension) { *static_cast<UEInformationResponsev930IEs*>(items[2]) = nonCriticalExtension; }

	UEInformationResponser9IEsRachReportr9& getUEInformationResponser9IEsRachReportr9() { return *static_cast<UEInformationResponser9IEsRachReportr9*>(items[0]); }
	RLFReportr9& getRlfReportr9() { return *static_cast<RLFReportr9*>(items[1]); }
	UEInformationResponsev930IEs& getNonCriticalExtension() { return *static_cast<UEInformationResponsev930IEs*>(items[2]); }
};

typedef Null UEInformationResponser9CriticalExtensionsC1Spare3;

typedef Null UEInformationResponser9CriticalExtensionsC1Spare2;

typedef Null UEInformationResponser9CriticalExtensionsC1Spare1;

class UEInformationResponser9CriticalExtensionsC1 : public Choice {
private:
	static const void *choicesInfo[4];
public:
	enum UEInformationResponser9CriticalExtensionsC1Choices {
		ueInformationResponser9 = 0,
		uEInformationResponser9CriticalExtensionsC1Spare3 = 1,
		uEInformationResponser9CriticalExtensionsC1Spare2 = 2,
		uEInformationResponser9CriticalExtensionsC1Spare1 = 3,
	};
	static const Info theInfo;
	UEInformationResponser9CriticalExtensionsC1(): Choice(&theInfo) {}
};

class UEInformationResponser9CriticalExtensionsCriticalExtensionsFuture : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	UEInformationResponser9CriticalExtensionsCriticalExtensionsFuture(): Sequence(&theInfo) {}


};

class UEInformationResponser9CriticalExtensions : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum UEInformationResponser9CriticalExtensionsChoices {
		uEInformationResponser9CriticalExtensionsC1 = 0,
		uEInformationResponser9CriticalExtensionsCriticalExtensionsFuture = 1,
	};
	static const Info theInfo;
	UEInformationResponser9CriticalExtensions(): Choice(&theInfo) {}
};

class UEInformationResponser9 : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UEInformationResponser9(): Sequence(&theInfo) {}
	UEInformationResponser9(const RRCTransactionIdentifier& rrcTransactionIdentifier, const UEInformationResponser9CriticalExtensions& uEInformationResponser9CriticalExtensions);

	void setRrcTransactionIdentifier(const RRCTransactionIdentifier& rrcTransactionIdentifier) { *static_cast<RRCTransactionIdentifier*>(items[0]) = rrcTransactionIdentifier; }
	void setUEInformationResponser9CriticalExtensions(const UEInformationResponser9CriticalExtensions& uEInformationResponser9CriticalExtensions) { *static_cast<UEInformationResponser9CriticalExtensions*>(items[1]) = uEInformationResponser9CriticalExtensions; }

	RRCTransactionIdentifier& getRrcTransactionIdentifier() { return *static_cast<RRCTransactionIdentifier*>(items[0]); }
	UEInformationResponser9CriticalExtensions& getUEInformationResponser9CriticalExtensions() { return *static_cast<UEInformationResponser9CriticalExtensions*>(items[1]); }
};

enum ProximityIndicationr9IEstype_r9Values {
	entering_ProximityIndicationr9IEstype_r9 = 0,
	leaving_ProximityIndicationr9IEstype_r9 = 1,
};
typedef Enumerated<CONSTRAINED, 1> ProximityIndicationr9IEstype_r9;

class ProximityIndicationr9IEsCarrierFreqr9 : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum ProximityIndicationr9IEsCarrierFreqr9Choices {
		eutrar9 = 0,
		utrar9 = 1,
	};
	static const Info theInfo;
	ProximityIndicationr9IEsCarrierFreqr9(): Choice(&theInfo) {}
};

typedef OctetStringBase ProximityIndicationv930IEsLateNonCriticalExtension;

class ProximityIndicationv930IEsNonCriticalExtension : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	ProximityIndicationv930IEsNonCriticalExtension(): Sequence(&theInfo) {}


};

class ProximityIndicationv930IEs : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ProximityIndicationv930IEs(): Sequence(&theInfo) {}

	void setProximityIndicationv930IEsLateNonCriticalExtension(const ProximityIndicationv930IEsLateNonCriticalExtension& proximityIndicationv930IEsLateNonCriticalExtension) { *static_cast<ProximityIndicationv930IEsLateNonCriticalExtension*>(items[0]) = proximityIndicationv930IEsLateNonCriticalExtension; }
	void setProximityIndicationv930IEsNonCriticalExtension(const ProximityIndicationv930IEsNonCriticalExtension& proximityIndicationv930IEsNonCriticalExtension) { *static_cast<ProximityIndicationv930IEsNonCriticalExtension*>(items[1]) = proximityIndicationv930IEsNonCriticalExtension; }

	ProximityIndicationv930IEsLateNonCriticalExtension& getProximityIndicationv930IEsLateNonCriticalExtension() { return *static_cast<ProximityIndicationv930IEsLateNonCriticalExtension*>(items[0]); }
	ProximityIndicationv930IEsNonCriticalExtension& getProximityIndicationv930IEsNonCriticalExtension() { return *static_cast<ProximityIndicationv930IEsNonCriticalExtension*>(items[1]); }
};

class ProximityIndicationr9IEs : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	ProximityIndicationr9IEs(): Sequence(&theInfo) {}
	ProximityIndicationr9IEs(const ProximityIndicationr9IEstype_r9& proximityIndicationr9IEstype_r9, const ProximityIndicationr9IEsCarrierFreqr9& proximityIndicationr9IEsCarrierFreqr9);

	void setProximityIndicationr9IEstype_r9(const ProximityIndicationr9IEstype_r9& proximityIndicationr9IEstype_r9) { *static_cast<ProximityIndicationr9IEstype_r9*>(items[0]) = proximityIndicationr9IEstype_r9; }
	void setProximityIndicationr9IEsCarrierFreqr9(const ProximityIndicationr9IEsCarrierFreqr9& proximityIndicationr9IEsCarrierFreqr9) { *static_cast<ProximityIndicationr9IEsCarrierFreqr9*>(items[1]) = proximityIndicationr9IEsCarrierFreqr9; }
	void setNonCriticalExtension(const ProximityIndicationv930IEs& nonCriticalExtension) { *static_cast<ProximityIndicationv930IEs*>(items[2]) = nonCriticalExtension; }

	ProximityIndicationr9IEstype_r9& getProximityIndicationr9IEstype_r9() { return *static_cast<ProximityIndicationr9IEstype_r9*>(items[0]); }
	ProximityIndicationr9IEsCarrierFreqr9& getProximityIndicationr9IEsCarrierFreqr9() { return *static_cast<ProximityIndicationr9IEsCarrierFreqr9*>(items[1]); }
	ProximityIndicationv930IEs& getNonCriticalExtension() { return *static_cast<ProximityIndicationv930IEs*>(items[2]); }
};

typedef Null ProximityIndicationr9CriticalExtensionsC1Spare3;

typedef Null ProximityIndicationr9CriticalExtensionsC1Spare2;

typedef Null ProximityIndicationr9CriticalExtensionsC1Spare1;

class ProximityIndicationr9CriticalExtensionsC1 : public Choice {
private:
	static const void *choicesInfo[4];
public:
	enum ProximityIndicationr9CriticalExtensionsC1Choices {
		proximityIndicationr9 = 0,
		proximityIndicationr9CriticalExtensionsC1Spare3 = 1,
		proximityIndicationr9CriticalExtensionsC1Spare2 = 2,
		proximityIndicationr9CriticalExtensionsC1Spare1 = 3,
	};
	static const Info theInfo;
	ProximityIndicationr9CriticalExtensionsC1(): Choice(&theInfo) {}
};

class ProximityIndicationr9CriticalExtensionsCriticalExtensionsFuture : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	ProximityIndicationr9CriticalExtensionsCriticalExtensionsFuture(): Sequence(&theInfo) {}


};

class ProximityIndicationr9CriticalExtensions : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum ProximityIndicationr9CriticalExtensionsChoices {
		proximityIndicationr9CriticalExtensionsC1 = 0,
		proximityIndicationr9CriticalExtensionsCriticalExtensionsFuture = 1,
	};
	static const Info theInfo;
	ProximityIndicationr9CriticalExtensions(): Choice(&theInfo) {}
};

class ProximityIndicationr9 : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ProximityIndicationr9(): Sequence(&theInfo) {}
	ProximityIndicationr9(const ProximityIndicationr9CriticalExtensions& proximityIndicationr9CriticalExtensions);

	void setProximityIndicationr9CriticalExtensions(const ProximityIndicationr9CriticalExtensions& proximityIndicationr9CriticalExtensions) { *static_cast<ProximityIndicationr9CriticalExtensions*>(items[0]) = proximityIndicationr9CriticalExtensions; }

	ProximityIndicationr9CriticalExtensions& getProximityIndicationr9CriticalExtensions() { return *static_cast<ProximityIndicationr9CriticalExtensions*>(items[0]); }
};

typedef OctetStringBase RNReconfigurationCompleter10IEsLateNonCriticalExtension;

class RNReconfigurationCompleter10IEsNonCriticalExtension : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RNReconfigurationCompleter10IEsNonCriticalExtension(): Sequence(&theInfo) {}


};

class RNReconfigurationCompleter10IEs : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RNReconfigurationCompleter10IEs(): Sequence(&theInfo) {}

	void setRNReconfigurationCompleter10IEsLateNonCriticalExtension(const RNReconfigurationCompleter10IEsLateNonCriticalExtension& rNReconfigurationCompleter10IEsLateNonCriticalExtension) { *static_cast<RNReconfigurationCompleter10IEsLateNonCriticalExtension*>(items[0]) = rNReconfigurationCompleter10IEsLateNonCriticalExtension; }
	void setRNReconfigurationCompleter10IEsNonCriticalExtension(const RNReconfigurationCompleter10IEsNonCriticalExtension& rNReconfigurationCompleter10IEsNonCriticalExtension) { *static_cast<RNReconfigurationCompleter10IEsNonCriticalExtension*>(items[1]) = rNReconfigurationCompleter10IEsNonCriticalExtension; }

	RNReconfigurationCompleter10IEsLateNonCriticalExtension& getRNReconfigurationCompleter10IEsLateNonCriticalExtension() { return *static_cast<RNReconfigurationCompleter10IEsLateNonCriticalExtension*>(items[0]); }
	RNReconfigurationCompleter10IEsNonCriticalExtension& getRNReconfigurationCompleter10IEsNonCriticalExtension() { return *static_cast<RNReconfigurationCompleter10IEsNonCriticalExtension*>(items[1]); }
};

typedef Null RNReconfigurationCompleter10CriticalExtensionsC1Spare3;

typedef Null RNReconfigurationCompleter10CriticalExtensionsC1Spare2;

typedef Null RNReconfigurationCompleter10CriticalExtensionsC1Spare1;

class RNReconfigurationCompleter10CriticalExtensionsC1 : public Choice {
private:
	static const void *choicesInfo[4];
public:
	enum RNReconfigurationCompleter10CriticalExtensionsC1Choices {
		rnReconfigurationCompleter10 = 0,
		rNReconfigurationCompleter10CriticalExtensionsC1Spare3 = 1,
		rNReconfigurationCompleter10CriticalExtensionsC1Spare2 = 2,
		rNReconfigurationCompleter10CriticalExtensionsC1Spare1 = 3,
	};
	static const Info theInfo;
	RNReconfigurationCompleter10CriticalExtensionsC1(): Choice(&theInfo) {}
};

class RNReconfigurationCompleter10CriticalExtensionsCriticalExtensionsFuture : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RNReconfigurationCompleter10CriticalExtensionsCriticalExtensionsFuture(): Sequence(&theInfo) {}


};

class RNReconfigurationCompleter10CriticalExtensions : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum RNReconfigurationCompleter10CriticalExtensionsChoices {
		rNReconfigurationCompleter10CriticalExtensionsC1 = 0,
		rNReconfigurationCompleter10CriticalExtensionsCriticalExtensionsFuture = 1,
	};
	static const Info theInfo;
	RNReconfigurationCompleter10CriticalExtensions(): Choice(&theInfo) {}
};

class RNReconfigurationCompleter10 : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RNReconfigurationCompleter10(): Sequence(&theInfo) {}
	RNReconfigurationCompleter10(const RRCTransactionIdentifier& rrcTransactionIdentifier, const RNReconfigurationCompleter10CriticalExtensions& rNReconfigurationCompleter10CriticalExtensions);

	void setRrcTransactionIdentifier(const RRCTransactionIdentifier& rrcTransactionIdentifier) { *static_cast<RRCTransactionIdentifier*>(items[0]) = rrcTransactionIdentifier; }
	void setRNReconfigurationCompleter10CriticalExtensions(const RNReconfigurationCompleter10CriticalExtensions& rNReconfigurationCompleter10CriticalExtensions) { *static_cast<RNReconfigurationCompleter10CriticalExtensions*>(items[1]) = rNReconfigurationCompleter10CriticalExtensions; }

	RRCTransactionIdentifier& getRrcTransactionIdentifier() { return *static_cast<RRCTransactionIdentifier*>(items[0]); }
	RNReconfigurationCompleter10CriticalExtensions& getRNReconfigurationCompleter10CriticalExtensions() { return *static_cast<RNReconfigurationCompleter10CriticalExtensions*>(items[1]); }
};

typedef Integer<CONSTRAINED, 0, maxMBSFN_Area_1> MBMSCountingResponser10IEsMbsfnAreaIndexr10;

typedef Integer<CONSTRAINED, 0, maxServiceCount_1> CountingResponseInfor10CountingResponseServicer10;

class CountingResponseInfor10 : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CountingResponseInfor10(): Sequence(&theInfo) {}
	CountingResponseInfor10(const CountingResponseInfor10CountingResponseServicer10& countingResponseInfor10CountingResponseServicer10);

	void setCountingResponseInfor10CountingResponseServicer10(const CountingResponseInfor10CountingResponseServicer10& countingResponseInfor10CountingResponseServicer10) { *static_cast<CountingResponseInfor10CountingResponseServicer10*>(items[0]) = countingResponseInfor10CountingResponseServicer10; }

	CountingResponseInfor10CountingResponseServicer10& getCountingResponseInfor10CountingResponseServicer10() { return *static_cast<CountingResponseInfor10CountingResponseServicer10*>(items[0]); }
};

typedef SequenceOf<CountingResponseInfor10, CONSTRAINED, 1, maxServiceCount> CountingResponseListr10;

typedef OctetStringBase MBMSCountingResponser10IEsLateNonCriticalExtension;

class MBMSCountingResponser10IEsNonCriticalExtension : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	MBMSCountingResponser10IEsNonCriticalExtension(): Sequence(&theInfo) {}


};

class MBMSCountingResponser10IEs : public Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	MBMSCountingResponser10IEs(): Sequence(&theInfo) {}

	void setMBMSCountingResponser10IEsMbsfnAreaIndexr10(const MBMSCountingResponser10IEsMbsfnAreaIndexr10& mBMSCountingResponser10IEsMbsfnAreaIndexr10) { *static_cast<MBMSCountingResponser10IEsMbsfnAreaIndexr10*>(items[0]) = mBMSCountingResponser10IEsMbsfnAreaIndexr10; }
	void setCountingResponseListr10(const CountingResponseListr10& countingResponseListr10) { *static_cast<CountingResponseListr10*>(items[1]) = countingResponseListr10; }
	void setMBMSCountingResponser10IEsLateNonCriticalExtension(const MBMSCountingResponser10IEsLateNonCriticalExtension& mBMSCountingResponser10IEsLateNonCriticalExtension) { *static_cast<MBMSCountingResponser10IEsLateNonCriticalExtension*>(items[2]) = mBMSCountingResponser10IEsLateNonCriticalExtension; }
	void setMBMSCountingResponser10IEsNonCriticalExtension(const MBMSCountingResponser10IEsNonCriticalExtension& mBMSCountingResponser10IEsNonCriticalExtension) { *static_cast<MBMSCountingResponser10IEsNonCriticalExtension*>(items[3]) = mBMSCountingResponser10IEsNonCriticalExtension; }

	MBMSCountingResponser10IEsMbsfnAreaIndexr10& getMBMSCountingResponser10IEsMbsfnAreaIndexr10() { return *static_cast<MBMSCountingResponser10IEsMbsfnAreaIndexr10*>(items[0]); }
	CountingResponseListr10& getCountingResponseListr10() { return *static_cast<CountingResponseListr10*>(items[1]); }
	MBMSCountingResponser10IEsLateNonCriticalExtension& getMBMSCountingResponser10IEsLateNonCriticalExtension() { return *static_cast<MBMSCountingResponser10IEsLateNonCriticalExtension*>(items[2]); }
	MBMSCountingResponser10IEsNonCriticalExtension& getMBMSCountingResponser10IEsNonCriticalExtension() { return *static_cast<MBMSCountingResponser10IEsNonCriticalExtension*>(items[3]); }
};

typedef Null MBMSCountingResponser10CriticalExtensionsC1Spare3;

typedef Null MBMSCountingResponser10CriticalExtensionsC1Spare2;

typedef Null MBMSCountingResponser10CriticalExtensionsC1Spare1;

class MBMSCountingResponser10CriticalExtensionsC1 : public Choice {
private:
	static const void *choicesInfo[4];
public:
	enum MBMSCountingResponser10CriticalExtensionsC1Choices {
		countingResponser10 = 0,
		mBMSCountingResponser10CriticalExtensionsC1Spare3 = 1,
		mBMSCountingResponser10CriticalExtensionsC1Spare2 = 2,
		mBMSCountingResponser10CriticalExtensionsC1Spare1 = 3,
	};
	static const Info theInfo;
	MBMSCountingResponser10CriticalExtensionsC1(): Choice(&theInfo) {}
};

class MBMSCountingResponser10CriticalExtensionsCriticalExtensionsFuture : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	MBMSCountingResponser10CriticalExtensionsCriticalExtensionsFuture(): Sequence(&theInfo) {}


};

class MBMSCountingResponser10CriticalExtensions : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum MBMSCountingResponser10CriticalExtensionsChoices {
		mBMSCountingResponser10CriticalExtensionsC1 = 0,
		mBMSCountingResponser10CriticalExtensionsCriticalExtensionsFuture = 1,
	};
	static const Info theInfo;
	MBMSCountingResponser10CriticalExtensions(): Choice(&theInfo) {}
};

class MBMSCountingResponser10 : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBMSCountingResponser10(): Sequence(&theInfo) {}
	MBMSCountingResponser10(const MBMSCountingResponser10CriticalExtensions& mBMSCountingResponser10CriticalExtensions);

	void setMBMSCountingResponser10CriticalExtensions(const MBMSCountingResponser10CriticalExtensions& mBMSCountingResponser10CriticalExtensions) { *static_cast<MBMSCountingResponser10CriticalExtensions*>(items[0]) = mBMSCountingResponser10CriticalExtensions; }

	MBMSCountingResponser10CriticalExtensions& getMBMSCountingResponser10CriticalExtensions() { return *static_cast<MBMSCountingResponser10CriticalExtensions*>(items[0]); }
};

typedef Integer<CONSTRAINED, 0, 39> RSTDInterFreqInfor10MeasPRSOffsetr10;

class RSTDInterFreqInfor10 : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RSTDInterFreqInfor10(): Sequence(&theInfo) {}
	RSTDInterFreqInfor10(const ARFCNValueEUTRA& carrierFreqr10, const RSTDInterFreqInfor10MeasPRSOffsetr10& rSTDInterFreqInfor10MeasPRSOffsetr10);

	void setCarrierFreqr10(const ARFCNValueEUTRA& carrierFreqr10) { *static_cast<ARFCNValueEUTRA*>(items[0]) = carrierFreqr10; }
	void setRSTDInterFreqInfor10MeasPRSOffsetr10(const RSTDInterFreqInfor10MeasPRSOffsetr10& rSTDInterFreqInfor10MeasPRSOffsetr10) { *static_cast<RSTDInterFreqInfor10MeasPRSOffsetr10*>(items[1]) = rSTDInterFreqInfor10MeasPRSOffsetr10; }

	ARFCNValueEUTRA& getCarrierFreqr10() { return *static_cast<ARFCNValueEUTRA*>(items[0]); }
	RSTDInterFreqInfor10MeasPRSOffsetr10& getRSTDInterFreqInfor10MeasPRSOffsetr10() { return *static_cast<RSTDInterFreqInfor10MeasPRSOffsetr10*>(items[1]); }
};

typedef SequenceOf<RSTDInterFreqInfor10, CONSTRAINED, 1, maxRSTD_Freq_r10> RSTDInterFreqInfoListr10;

class InterFreqRSTDMeasurementIndicationr10IEsRstdInterFreqIndicationr10Start : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterFreqRSTDMeasurementIndicationr10IEsRstdInterFreqIndicationr10Start(): Sequence(&theInfo) {}
	InterFreqRSTDMeasurementIndicationr10IEsRstdInterFreqIndicationr10Start(const RSTDInterFreqInfoListr10& rstdInterFreqInfoListr10);

	void setRstdInterFreqInfoListr10(const RSTDInterFreqInfoListr10& rstdInterFreqInfoListr10) { *static_cast<RSTDInterFreqInfoListr10*>(items[0]) = rstdInterFreqInfoListr10; }

	RSTDInterFreqInfoListr10& getRstdInterFreqInfoListr10() { return *static_cast<RSTDInterFreqInfoListr10*>(items[0]); }
};

typedef Null InterFreqRSTDMeasurementIndicationr10IEsRstdInterFreqIndicationr10Stop;

class InterFreqRSTDMeasurementIndicationr10IEsRstdInterFreqIndicationr10 : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum InterFreqRSTDMeasurementIndicationr10IEsRstdInterFreqIndicationr10Choices {
		interFreqRSTDMeasurementIndicationr10IEsRstdInterFreqIndicationr10Start = 0,
		interFreqRSTDMeasurementIndicationr10IEsRstdInterFreqIndicationr10Stop = 1,
	};
	static const Info theInfo;
	InterFreqRSTDMeasurementIndicationr10IEsRstdInterFreqIndicationr10(): Choice(&theInfo) {}
};

typedef OctetStringBase InterFreqRSTDMeasurementIndicationr10IEsLateNonCriticalExtension;

class InterFreqRSTDMeasurementIndicationr10IEsNonCriticalExtension : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	InterFreqRSTDMeasurementIndicationr10IEsNonCriticalExtension(): Sequence(&theInfo) {}


};

class InterFreqRSTDMeasurementIndicationr10IEs : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	InterFreqRSTDMeasurementIndicationr10IEs(): Sequence(&theInfo) {}
	InterFreqRSTDMeasurementIndicationr10IEs(const InterFreqRSTDMeasurementIndicationr10IEsRstdInterFreqIndicationr10& interFreqRSTDMeasurementIndicationr10IEsRstdInterFreqIndicationr10);

	void setInterFreqRSTDMeasurementIndicationr10IEsRstdInterFreqIndicationr10(const InterFreqRSTDMeasurementIndicationr10IEsRstdInterFreqIndicationr10& interFreqRSTDMeasurementIndicationr10IEsRstdInterFreqIndicationr10) { *static_cast<InterFreqRSTDMeasurementIndicationr10IEsRstdInterFreqIndicationr10*>(items[0]) = interFreqRSTDMeasurementIndicationr10IEsRstdInterFreqIndicationr10; }
	void setInterFreqRSTDMeasurementIndicationr10IEsLateNonCriticalExtension(const InterFreqRSTDMeasurementIndicationr10IEsLateNonCriticalExtension& interFreqRSTDMeasurementIndicationr10IEsLateNonCriticalExtension) { *static_cast<InterFreqRSTDMeasurementIndicationr10IEsLateNonCriticalExtension*>(items[1]) = interFreqRSTDMeasurementIndicationr10IEsLateNonCriticalExtension; }
	void setInterFreqRSTDMeasurementIndicationr10IEsNonCriticalExtension(const InterFreqRSTDMeasurementIndicationr10IEsNonCriticalExtension& interFreqRSTDMeasurementIndicationr10IEsNonCriticalExtension) { *static_cast<InterFreqRSTDMeasurementIndicationr10IEsNonCriticalExtension*>(items[2]) = interFreqRSTDMeasurementIndicationr10IEsNonCriticalExtension; }

	InterFreqRSTDMeasurementIndicationr10IEsRstdInterFreqIndicationr10& getInterFreqRSTDMeasurementIndicationr10IEsRstdInterFreqIndicationr10() { return *static_cast<InterFreqRSTDMeasurementIndicationr10IEsRstdInterFreqIndicationr10*>(items[0]); }
	InterFreqRSTDMeasurementIndicationr10IEsLateNonCriticalExtension& getInterFreqRSTDMeasurementIndicationr10IEsLateNonCriticalExtension() { return *static_cast<InterFreqRSTDMeasurementIndicationr10IEsLateNonCriticalExtension*>(items[1]); }
	InterFreqRSTDMeasurementIndicationr10IEsNonCriticalExtension& getInterFreqRSTDMeasurementIndicationr10IEsNonCriticalExtension() { return *static_cast<InterFreqRSTDMeasurementIndicationr10IEsNonCriticalExtension*>(items[2]); }
};

typedef Null InterFreqRSTDMeasurementIndicationr10CriticalExtensionsC1Spare3;

typedef Null InterFreqRSTDMeasurementIndicationr10CriticalExtensionsC1Spare2;

typedef Null InterFreqRSTDMeasurementIndicationr10CriticalExtensionsC1Spare1;

class InterFreqRSTDMeasurementIndicationr10CriticalExtensionsC1 : public Choice {
private:
	static const void *choicesInfo[4];
public:
	enum InterFreqRSTDMeasurementIndicationr10CriticalExtensionsC1Choices {
		interFreqRSTDMeasurementIndicationr10 = 0,
		interFreqRSTDMeasurementIndicationr10CriticalExtensionsC1Spare3 = 1,
		interFreqRSTDMeasurementIndicationr10CriticalExtensionsC1Spare2 = 2,
		interFreqRSTDMeasurementIndicationr10CriticalExtensionsC1Spare1 = 3,
	};
	static const Info theInfo;
	InterFreqRSTDMeasurementIndicationr10CriticalExtensionsC1(): Choice(&theInfo) {}
};

class InterFreqRSTDMeasurementIndicationr10CriticalExtensionsCriticalExtensionsFuture : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	InterFreqRSTDMeasurementIndicationr10CriticalExtensionsCriticalExtensionsFuture(): Sequence(&theInfo) {}


};

class InterFreqRSTDMeasurementIndicationr10CriticalExtensions : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum InterFreqRSTDMeasurementIndicationr10CriticalExtensionsChoices {
		interFreqRSTDMeasurementIndicationr10CriticalExtensionsC1 = 0,
		interFreqRSTDMeasurementIndicationr10CriticalExtensionsCriticalExtensionsFuture = 1,
	};
	static const Info theInfo;
	InterFreqRSTDMeasurementIndicationr10CriticalExtensions(): Choice(&theInfo) {}
};

class InterFreqRSTDMeasurementIndicationr10 : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterFreqRSTDMeasurementIndicationr10(): Sequence(&theInfo) {}
	InterFreqRSTDMeasurementIndicationr10(const InterFreqRSTDMeasurementIndicationr10CriticalExtensions& interFreqRSTDMeasurementIndicationr10CriticalExtensions);

	void setInterFreqRSTDMeasurementIndicationr10CriticalExtensions(const InterFreqRSTDMeasurementIndicationr10CriticalExtensions& interFreqRSTDMeasurementIndicationr10CriticalExtensions) { *static_cast<InterFreqRSTDMeasurementIndicationr10CriticalExtensions*>(items[0]) = interFreqRSTDMeasurementIndicationr10CriticalExtensions; }

	InterFreqRSTDMeasurementIndicationr10CriticalExtensions& getInterFreqRSTDMeasurementIndicationr10CriticalExtensions() { return *static_cast<InterFreqRSTDMeasurementIndicationr10CriticalExtensions*>(items[0]); }
};

class ULDCCHMessageTypeC1 : public Choice {
private:
	static const void *choicesInfo[16];
public:
	enum ULDCCHMessageTypeC1Choices {
		csfbParametersRequestCDMA2000 = 0,
		measurementReport = 1,
		rrcConnectionReconfigurationComplete = 2,
		rrcConnectionReestablishmentComplete = 3,
		rrcConnectionSetupComplete = 4,
		securityModeComplete = 5,
		securityModeFailure = 6,
		ueCapabilityInformation = 7,
		ulHandoverPreparationTransfer = 8,
		ulInformationTransfer = 9,
		counterCheckResponse = 10,
		ueInformationResponser9 = 11,
		proximityIndicationr9 = 12,
		rnReconfigurationCompleter10 = 13,
		mbmsCountingResponser10 = 14,
		interFreqRSTDMeasurementIndicationr10 = 15,
	};
	static const Info theInfo;
	ULDCCHMessageTypeC1(): Choice(&theInfo) {}
};

class ULDCCHMessageTypeMessageClassExtension : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	ULDCCHMessageTypeMessageClassExtension(): Sequence(&theInfo) {}


};

class ULDCCHMessageType : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum ULDCCHMessageTypeChoices {
		uLDCCHMessageTypeC1 = 0,
		uLDCCHMessageTypeMessageClassExtension = 1,
	};
	static const Info theInfo;
	ULDCCHMessageType(): Choice(&theInfo) {}
};

class ULDCCHMessage : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULDCCHMessage(): Sequence(&theInfo) {}
	ULDCCHMessage(const ULDCCHMessageType& message);

	void setMessage(const ULDCCHMessageType& message) { *static_cast<ULDCCHMessageType*>(items[0]) = message; }

	ULDCCHMessageType& getMessage() { return *static_cast<ULDCCHMessageType*>(items[0]); }
};

enum SystemInformationBlockType3CellReselectionInfoCommonq_HystValues {
	dB0_SystemInformationBlockType3CellReselectionInfoCommonq_Hyst = 0,
	dB1_SystemInformationBlockType3CellReselectionInfoCommonq_Hyst = 1,
	dB2_SystemInformationBlockType3CellReselectionInfoCommonq_Hyst = 2,
	dB3_SystemInformationBlockType3CellReselectionInfoCommonq_Hyst = 3,
	dB4_SystemInformationBlockType3CellReselectionInfoCommonq_Hyst = 4,
	dB5_SystemInformationBlockType3CellReselectionInfoCommonq_Hyst = 5,
	dB6_SystemInformationBlockType3CellReselectionInfoCommonq_Hyst = 6,
	dB8_SystemInformationBlockType3CellReselectionInfoCommonq_Hyst = 7,
	dB10_SystemInformationBlockType3CellReselectionInfoCommonq_Hyst = 8,
	dB12_SystemInformationBlockType3CellReselectionInfoCommonq_Hyst = 9,
	dB14_SystemInformationBlockType3CellReselectionInfoCommonq_Hyst = 10,
	dB16_SystemInformationBlockType3CellReselectionInfoCommonq_Hyst = 11,
	dB18_SystemInformationBlockType3CellReselectionInfoCommonq_Hyst = 12,
	dB20_SystemInformationBlockType3CellReselectionInfoCommonq_Hyst = 13,
	dB22_SystemInformationBlockType3CellReselectionInfoCommonq_Hyst = 14,
	dB24_SystemInformationBlockType3CellReselectionInfoCommonq_Hyst = 15,
};
typedef Enumerated<CONSTRAINED, 15> SystemInformationBlockType3CellReselectionInfoCommonq_Hyst;

enum SystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionParsQHystSFsf_MediumValues {
	dB_6_SystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionParsQHystSFsf_Medium = 0,
	dB_4_SystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionParsQHystSFsf_Medium = 1,
	dB_2_SystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionParsQHystSFsf_Medium = 2,
	dB0_SystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionParsQHystSFsf_Medium = 3,
};
typedef Enumerated<CONSTRAINED, 3> SystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionParsQHystSFsf_Medium;

enum SystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionParsQHystSFsf_HighValues {
	dB_6_SystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionParsQHystSFsf_High = 0,
	dB_4_SystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionParsQHystSFsf_High = 1,
	dB_2_SystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionParsQHystSFsf_High = 2,
	dB0_SystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionParsQHystSFsf_High = 3,
};
typedef Enumerated<CONSTRAINED, 3> SystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionParsQHystSFsf_High;

class SystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionParsQHystSF : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionParsQHystSF(): Sequence(&theInfo) {}
	SystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionParsQHystSF(const SystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionParsQHystSFsf_Medium& systemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionParsQHystSFsf_Medium, const SystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionParsQHystSFsf_High& systemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionParsQHystSFsf_High);

	void setSystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionParsQHystSFsf_Medium(const SystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionParsQHystSFsf_Medium& systemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionParsQHystSFsf_Medium) { *static_cast<SystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionParsQHystSFsf_Medium*>(items[0]) = systemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionParsQHystSFsf_Medium; }
	void setSystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionParsQHystSFsf_High(const SystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionParsQHystSFsf_High& systemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionParsQHystSFsf_High) { *static_cast<SystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionParsQHystSFsf_High*>(items[1]) = systemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionParsQHystSFsf_High; }

	SystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionParsQHystSFsf_Medium& getSystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionParsQHystSFsf_Medium() { return *static_cast<SystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionParsQHystSFsf_Medium*>(items[0]); }
	SystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionParsQHystSFsf_High& getSystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionParsQHystSFsf_High() { return *static_cast<SystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionParsQHystSFsf_High*>(items[1]); }
};

class SystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionPars : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionPars(): Sequence(&theInfo) {}
	SystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionPars(const MobilityStateParameters& mobilityStateParameters, const SystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionParsQHystSF& systemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionParsQHystSF);

	void setMobilityStateParameters(const MobilityStateParameters& mobilityStateParameters) { *static_cast<MobilityStateParameters*>(items[0]) = mobilityStateParameters; }
	void setSystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionParsQHystSF(const SystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionParsQHystSF& systemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionParsQHystSF) { *static_cast<SystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionParsQHystSF*>(items[1]) = systemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionParsQHystSF; }

	MobilityStateParameters& getMobilityStateParameters() { return *static_cast<MobilityStateParameters*>(items[0]); }
	SystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionParsQHystSF& getSystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionParsQHystSF() { return *static_cast<SystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionParsQHystSF*>(items[1]); }
};

class SystemInformationBlockType3CellReselectionInfoCommon : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SystemInformationBlockType3CellReselectionInfoCommon(): Sequence(&theInfo) {}
	SystemInformationBlockType3CellReselectionInfoCommon(const SystemInformationBlockType3CellReselectionInfoCommonq_Hyst& systemInformationBlockType3CellReselectionInfoCommonq_Hyst);

	void setSystemInformationBlockType3CellReselectionInfoCommonq_Hyst(const SystemInformationBlockType3CellReselectionInfoCommonq_Hyst& systemInformationBlockType3CellReselectionInfoCommonq_Hyst) { *static_cast<SystemInformationBlockType3CellReselectionInfoCommonq_Hyst*>(items[0]) = systemInformationBlockType3CellReselectionInfoCommonq_Hyst; }
	void setSystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionPars(const SystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionPars& systemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionPars) { *static_cast<SystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionPars*>(items[1]) = systemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionPars; }

	SystemInformationBlockType3CellReselectionInfoCommonq_Hyst& getSystemInformationBlockType3CellReselectionInfoCommonq_Hyst() { return *static_cast<SystemInformationBlockType3CellReselectionInfoCommonq_Hyst*>(items[0]); }
	SystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionPars& getSystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionPars() { return *static_cast<SystemInformationBlockType3CellReselectionInfoCommonSpeedStateReselectionPars*>(items[1]); }
};

typedef Integer<CONSTRAINED, 0, 31> ReselectionThreshold;

class SystemInformationBlockType3CellReselectionServingFreqInfo : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	SystemInformationBlockType3CellReselectionServingFreqInfo(): Sequence(&theInfo) {}
	SystemInformationBlockType3CellReselectionServingFreqInfo(const ReselectionThreshold& threshServingLow, const CellReselectionPriority& cellReselectionPriority);

	void setSNonIntraSearch(const ReselectionThreshold& sNonIntraSearch) { *static_cast<ReselectionThreshold*>(items[0]) = sNonIntraSearch; }
	void setThreshServingLow(const ReselectionThreshold& threshServingLow) { *static_cast<ReselectionThreshold*>(items[1]) = threshServingLow; }
	void setCellReselectionPriority(const CellReselectionPriority& cellReselectionPriority) { *static_cast<CellReselectionPriority*>(items[2]) = cellReselectionPriority; }

	ReselectionThreshold& getSNonIntraSearch() { return *static_cast<ReselectionThreshold*>(items[0]); }
	ReselectionThreshold& getThreshServingLow() { return *static_cast<ReselectionThreshold*>(items[1]); }
	CellReselectionPriority& getCellReselectionPriority() { return *static_cast<CellReselectionPriority*>(items[2]); }
};

typedef Integer<CONSTRAINED, 0, 7> TReselection;

class SystemInformationBlockType3IntraFreqCellReselectionInfo : public Sequence {
private:
	static const void *itemsInfo[8];
	static bool itemsPres[8];
public:
	static const Info theInfo;
	SystemInformationBlockType3IntraFreqCellReselectionInfo(): Sequence(&theInfo) {}
	SystemInformationBlockType3IntraFreqCellReselectionInfo(const QRxLevMin& qRxLevMin, const PresenceAntennaPort1& presenceAntennaPort1, const NeighCellConfig& neighCellConfig, const TReselection& tReselectionEUTRA);

	void setQRxLevMin(const QRxLevMin& qRxLevMin) { *static_cast<QRxLevMin*>(items[0]) = qRxLevMin; }
	void setPMax(const PMax& pMax) { *static_cast<PMax*>(items[1]) = pMax; }
	void setSIntraSearch(const ReselectionThreshold& sIntraSearch) { *static_cast<ReselectionThreshold*>(items[2]) = sIntraSearch; }
	void setAllowedMeasBandwidth(const AllowedMeasBandwidth& allowedMeasBandwidth) { *static_cast<AllowedMeasBandwidth*>(items[3]) = allowedMeasBandwidth; }
	void setPresenceAntennaPort1(const PresenceAntennaPort1& presenceAntennaPort1) { *static_cast<PresenceAntennaPort1*>(items[4]) = presenceAntennaPort1; }
	void setNeighCellConfig(const NeighCellConfig& neighCellConfig) { *static_cast<NeighCellConfig*>(items[5]) = neighCellConfig; }
	void setTReselectionEUTRA(const TReselection& tReselectionEUTRA) { *static_cast<TReselection*>(items[6]) = tReselectionEUTRA; }
	void setTReselectionEUTRASF(const SpeedStateScaleFactors& tReselectionEUTRASF) { *static_cast<SpeedStateScaleFactors*>(items[7]) = tReselectionEUTRASF; }

	QRxLevMin& getQRxLevMin() { return *static_cast<QRxLevMin*>(items[0]); }
	PMax& getPMax() { return *static_cast<PMax*>(items[1]); }
	ReselectionThreshold& getSIntraSearch() { return *static_cast<ReselectionThreshold*>(items[2]); }
	AllowedMeasBandwidth& getAllowedMeasBandwidth() { return *static_cast<AllowedMeasBandwidth*>(items[3]); }
	PresenceAntennaPort1& getPresenceAntennaPort1() { return *static_cast<PresenceAntennaPort1*>(items[4]); }
	NeighCellConfig& getNeighCellConfig() { return *static_cast<NeighCellConfig*>(items[5]); }
	TReselection& getTReselectionEUTRA() { return *static_cast<TReselection*>(items[6]); }
	SpeedStateScaleFactors& getTReselectionEUTRASF() { return *static_cast<SpeedStateScaleFactors*>(items[7]); }
};

typedef OctetStringBase SystemInformationBlockType3LateNonCriticalExtension;

typedef Integer<CONSTRAINED, 0, 31> ReselectionThresholdQr9;

class SystemInformationBlockType3SIntraSearchv920 : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SystemInformationBlockType3SIntraSearchv920(): Sequence(&theInfo) {}
	SystemInformationBlockType3SIntraSearchv920(const ReselectionThreshold& sIntraSearchPr9, const ReselectionThresholdQr9& sIntraSearchQr9);

	void setSIntraSearchPr9(const ReselectionThreshold& sIntraSearchPr9) { *static_cast<ReselectionThreshold*>(items[0]) = sIntraSearchPr9; }
	void setSIntraSearchQr9(const ReselectionThresholdQr9& sIntraSearchQr9) { *static_cast<ReselectionThresholdQr9*>(items[1]) = sIntraSearchQr9; }

	ReselectionThreshold& getSIntraSearchPr9() { return *static_cast<ReselectionThreshold*>(items[0]); }
	ReselectionThresholdQr9& getSIntraSearchQr9() { return *static_cast<ReselectionThresholdQr9*>(items[1]); }
};

class SystemInformationBlockType3SNonIntraSearchv920 : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SystemInformationBlockType3SNonIntraSearchv920(): Sequence(&theInfo) {}
	SystemInformationBlockType3SNonIntraSearchv920(const ReselectionThreshold& sNonIntraSearchPr9, const ReselectionThresholdQr9& sNonIntraSearchQr9);

	void setSNonIntraSearchPr9(const ReselectionThreshold& sNonIntraSearchPr9) { *static_cast<ReselectionThreshold*>(items[0]) = sNonIntraSearchPr9; }
	void setSNonIntraSearchQr9(const ReselectionThresholdQr9& sNonIntraSearchQr9) { *static_cast<ReselectionThresholdQr9*>(items[1]) = sNonIntraSearchQr9; }

	ReselectionThreshold& getSNonIntraSearchPr9() { return *static_cast<ReselectionThreshold*>(items[0]); }
	ReselectionThresholdQr9& getSNonIntraSearchQr9() { return *static_cast<ReselectionThresholdQr9*>(items[1]); }
};

class SystemInformationBlockType3 : public Sequence {
private:
	static const void *itemsInfo[8];
	static bool itemsPres[8];
public:
	static const Info theInfo;
	SystemInformationBlockType3(): Sequence(&theInfo) {}
	SystemInformationBlockType3(const SystemInformationBlockType3CellReselectionInfoCommon& systemInformationBlockType3CellReselectionInfoCommon, const SystemInformationBlockType3CellReselectionServingFreqInfo& systemInformationBlockType3CellReselectionServingFreqInfo, const SystemInformationBlockType3IntraFreqCellReselectionInfo& systemInformationBlockType3IntraFreqCellReselectionInfo);

	void setSystemInformationBlockType3CellReselectionInfoCommon(const SystemInformationBlockType3CellReselectionInfoCommon& systemInformationBlockType3CellReselectionInfoCommon) { *static_cast<SystemInformationBlockType3CellReselectionInfoCommon*>(items[0]) = systemInformationBlockType3CellReselectionInfoCommon; }
	void setSystemInformationBlockType3CellReselectionServingFreqInfo(const SystemInformationBlockType3CellReselectionServingFreqInfo& systemInformationBlockType3CellReselectionServingFreqInfo) { *static_cast<SystemInformationBlockType3CellReselectionServingFreqInfo*>(items[1]) = systemInformationBlockType3CellReselectionServingFreqInfo; }
	void setSystemInformationBlockType3IntraFreqCellReselectionInfo(const SystemInformationBlockType3IntraFreqCellReselectionInfo& systemInformationBlockType3IntraFreqCellReselectionInfo) { *static_cast<SystemInformationBlockType3IntraFreqCellReselectionInfo*>(items[2]) = systemInformationBlockType3IntraFreqCellReselectionInfo; }
	void setSystemInformationBlockType3LateNonCriticalExtension(const SystemInformationBlockType3LateNonCriticalExtension& systemInformationBlockType3LateNonCriticalExtension) { *static_cast<SystemInformationBlockType3LateNonCriticalExtension*>(items[3]) = systemInformationBlockType3LateNonCriticalExtension; }
	void setSystemInformationBlockType3SIntraSearchv920(const SystemInformationBlockType3SIntraSearchv920& systemInformationBlockType3SIntraSearchv920) { *static_cast<SystemInformationBlockType3SIntraSearchv920*>(items[4]) = systemInformationBlockType3SIntraSearchv920; }
	void setSystemInformationBlockType3SNonIntraSearchv920(const SystemInformationBlockType3SNonIntraSearchv920& systemInformationBlockType3SNonIntraSearchv920) { *static_cast<SystemInformationBlockType3SNonIntraSearchv920*>(items[5]) = systemInformationBlockType3SNonIntraSearchv920; }
	void setQQualMinr9(const QQualMinr9& qQualMinr9) { *static_cast<QQualMinr9*>(items[6]) = qQualMinr9; }
	void setThreshServingLowQr9(const ReselectionThresholdQr9& threshServingLowQr9) { *static_cast<ReselectionThresholdQr9*>(items[7]) = threshServingLowQr9; }

	SystemInformationBlockType3CellReselectionInfoCommon& getSystemInformationBlockType3CellReselectionInfoCommon() { return *static_cast<SystemInformationBlockType3CellReselectionInfoCommon*>(items[0]); }
	SystemInformationBlockType3CellReselectionServingFreqInfo& getSystemInformationBlockType3CellReselectionServingFreqInfo() { return *static_cast<SystemInformationBlockType3CellReselectionServingFreqInfo*>(items[1]); }
	SystemInformationBlockType3IntraFreqCellReselectionInfo& getSystemInformationBlockType3IntraFreqCellReselectionInfo() { return *static_cast<SystemInformationBlockType3IntraFreqCellReselectionInfo*>(items[2]); }
	SystemInformationBlockType3LateNonCriticalExtension& getSystemInformationBlockType3LateNonCriticalExtension() { return *static_cast<SystemInformationBlockType3LateNonCriticalExtension*>(items[3]); }
	SystemInformationBlockType3SIntraSearchv920& getSystemInformationBlockType3SIntraSearchv920() { return *static_cast<SystemInformationBlockType3SIntraSearchv920*>(items[4]); }
	SystemInformationBlockType3SNonIntraSearchv920& getSystemInformationBlockType3SNonIntraSearchv920() { return *static_cast<SystemInformationBlockType3SNonIntraSearchv920*>(items[5]); }
	QQualMinr9& getQQualMinr9() { return *static_cast<QQualMinr9*>(items[6]); }
	ReselectionThresholdQr9& getThreshServingLowQr9() { return *static_cast<ReselectionThresholdQr9*>(items[7]); }
};

class IntraFreqNeighCellInfo : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	IntraFreqNeighCellInfo(): Sequence(&theInfo) {}
	IntraFreqNeighCellInfo(const PhysCellId& physCellId, const QOffsetRange& qOffsetCell);

	void setPhysCellId(const PhysCellId& physCellId) { *static_cast<PhysCellId*>(items[0]) = physCellId; }
	void setQOffsetCell(const QOffsetRange& qOffsetCell) { *static_cast<QOffsetRange*>(items[1]) = qOffsetCell; }

	PhysCellId& getPhysCellId() { return *static_cast<PhysCellId*>(items[0]); }
	QOffsetRange& getQOffsetCell() { return *static_cast<QOffsetRange*>(items[1]); }
};

typedef SequenceOf<IntraFreqNeighCellInfo, CONSTRAINED, 1, maxCellIntra> IntraFreqNeighCellList;

typedef SequenceOf<PhysCellIdRange, CONSTRAINED, 1, maxCellBlack> IntraFreqBlackCellList;

typedef OctetStringBase SystemInformationBlockType4LateNonCriticalExtension;

class SystemInformationBlockType4 : public Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	SystemInformationBlockType4(): Sequence(&theInfo) {}

	void setIntraFreqNeighCellList(const IntraFreqNeighCellList& intraFreqNeighCellList) { *static_cast<IntraFreqNeighCellList*>(items[0]) = intraFreqNeighCellList; }
	void setIntraFreqBlackCellList(const IntraFreqBlackCellList& intraFreqBlackCellList) { *static_cast<IntraFreqBlackCellList*>(items[1]) = intraFreqBlackCellList; }
	void setCsgPhysCellIdRange(const PhysCellIdRange& csgPhysCellIdRange) { *static_cast<PhysCellIdRange*>(items[2]) = csgPhysCellIdRange; }
	void setSystemInformationBlockType4LateNonCriticalExtension(const SystemInformationBlockType4LateNonCriticalExtension& systemInformationBlockType4LateNonCriticalExtension) { *static_cast<SystemInformationBlockType4LateNonCriticalExtension*>(items[3]) = systemInformationBlockType4LateNonCriticalExtension; }

	IntraFreqNeighCellList& getIntraFreqNeighCellList() { return *static_cast<IntraFreqNeighCellList*>(items[0]); }
	IntraFreqBlackCellList& getIntraFreqBlackCellList() { return *static_cast<IntraFreqBlackCellList*>(items[1]); }
	PhysCellIdRange& getCsgPhysCellIdRange() { return *static_cast<PhysCellIdRange*>(items[2]); }
	SystemInformationBlockType4LateNonCriticalExtension& getSystemInformationBlockType4LateNonCriticalExtension() { return *static_cast<SystemInformationBlockType4LateNonCriticalExtension*>(items[3]); }
};

class InterFreqNeighCellInfo : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	InterFreqNeighCellInfo(): Sequence(&theInfo) {}
	InterFreqNeighCellInfo(const PhysCellId& physCellId, const QOffsetRange& qOffsetCell);

	void setPhysCellId(const PhysCellId& physCellId) { *static_cast<PhysCellId*>(items[0]) = physCellId; }
	void setQOffsetCell(const QOffsetRange& qOffsetCell) { *static_cast<QOffsetRange*>(items[1]) = qOffsetCell; }

	PhysCellId& getPhysCellId() { return *static_cast<PhysCellId*>(items[0]); }
	QOffsetRange& getQOffsetCell() { return *static_cast<QOffsetRange*>(items[1]); }
};

typedef SequenceOf<InterFreqNeighCellInfo, CONSTRAINED, 1, maxCellInter> InterFreqNeighCellList;

typedef SequenceOf<PhysCellIdRange, CONSTRAINED, 1, maxCellBlack> InterFreqBlackCellList;

class InterFreqCarrierFreqInfoThreshXQr9 : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	InterFreqCarrierFreqInfoThreshXQr9(): Sequence(&theInfo) {}
	InterFreqCarrierFreqInfoThreshXQr9(const ReselectionThresholdQr9& threshXHighQr9, const ReselectionThresholdQr9& threshXLowQr9);

	void setThreshXHighQr9(const ReselectionThresholdQr9& threshXHighQr9) { *static_cast<ReselectionThresholdQr9*>(items[0]) = threshXHighQr9; }
	void setThreshXLowQr9(const ReselectionThresholdQr9& threshXLowQr9) { *static_cast<ReselectionThresholdQr9*>(items[1]) = threshXLowQr9; }

	ReselectionThresholdQr9& getThreshXHighQr9() { return *static_cast<ReselectionThresholdQr9*>(items[0]); }
	ReselectionThresholdQr9& getThreshXLowQr9() { return *static_cast<ReselectionThresholdQr9*>(items[1]); }
};

class InterFreqCarrierFreqInfo : public Sequence {
private:
	static const void *itemsInfo[16];
	static bool itemsPres[16];
public:
	static const Info theInfo;
	InterFreqCarrierFreqInfo(): Sequence(&theInfo) {}
	InterFreqCarrierFreqInfo(const ARFCNValueEUTRA& dlCarrierFreq, const QRxLevMin& qRxLevMin, const TReselection& tReselectionEUTRA, const ReselectionThreshold& threshXHigh, const ReselectionThreshold& threshXLow, const AllowedMeasBandwidth& allowedMeasBandwidth, const PresenceAntennaPort1& presenceAntennaPort1, const NeighCellConfig& neighCellConfig);

	void setDlCarrierFreq(const ARFCNValueEUTRA& dlCarrierFreq) { *static_cast<ARFCNValueEUTRA*>(items[0]) = dlCarrierFreq; }
	void setQRxLevMin(const QRxLevMin& qRxLevMin) { *static_cast<QRxLevMin*>(items[1]) = qRxLevMin; }
	void setPMax(const PMax& pMax) { *static_cast<PMax*>(items[2]) = pMax; }
	void setTReselectionEUTRA(const TReselection& tReselectionEUTRA) { *static_cast<TReselection*>(items[3]) = tReselectionEUTRA; }
	void setTReselectionEUTRASF(const SpeedStateScaleFactors& tReselectionEUTRASF) { *static_cast<SpeedStateScaleFactors*>(items[4]) = tReselectionEUTRASF; }
	void setThreshXHigh(const ReselectionThreshold& threshXHigh) { *static_cast<ReselectionThreshold*>(items[5]) = threshXHigh; }
	void setThreshXLow(const ReselectionThreshold& threshXLow) { *static_cast<ReselectionThreshold*>(items[6]) = threshXLow; }
	void setAllowedMeasBandwidth(const AllowedMeasBandwidth& allowedMeasBandwidth) { *static_cast<AllowedMeasBandwidth*>(items[7]) = allowedMeasBandwidth; }
	void setPresenceAntennaPort1(const PresenceAntennaPort1& presenceAntennaPort1) { *static_cast<PresenceAntennaPort1*>(items[8]) = presenceAntennaPort1; }
	void setCellReselectionPriority(const CellReselectionPriority& cellReselectionPriority) { *static_cast<CellReselectionPriority*>(items[9]) = cellReselectionPriority; }
	void setNeighCellConfig(const NeighCellConfig& neighCellConfig) { *static_cast<NeighCellConfig*>(items[10]) = neighCellConfig; }
	void setQOffsetFreq(const QOffsetRange& qOffsetFreq) { *static_cast<QOffsetRange*>(items[11]) = qOffsetFreq; }
	void setInterFreqNeighCellList(const InterFreqNeighCellList& interFreqNeighCellList) { *static_cast<InterFreqNeighCellList*>(items[12]) = interFreqNeighCellList; }
	void setInterFreqBlackCellList(const InterFreqBlackCellList& interFreqBlackCellList) { *static_cast<InterFreqBlackCellList*>(items[13]) = interFreqBlackCellList; }
	void setQQualMinr9(const QQualMinr9& qQualMinr9) { *static_cast<QQualMinr9*>(items[14]) = qQualMinr9; }
	void setInterFreqCarrierFreqInfoThreshXQr9(const InterFreqCarrierFreqInfoThreshXQr9& interFreqCarrierFreqInfoThreshXQr9) { *static_cast<InterFreqCarrierFreqInfoThreshXQr9*>(items[15]) = interFreqCarrierFreqInfoThreshXQr9; }

	ARFCNValueEUTRA& getDlCarrierFreq() { return *static_cast<ARFCNValueEUTRA*>(items[0]); }
	QRxLevMin& getQRxLevMin() { return *static_cast<QRxLevMin*>(items[1]); }
	PMax& getPMax() { return *static_cast<PMax*>(items[2]); }
	TReselection& getTReselectionEUTRA() { return *static_cast<TReselection*>(items[3]); }
	SpeedStateScaleFactors& getTReselectionEUTRASF() { return *static_cast<SpeedStateScaleFactors*>(items[4]); }
	ReselectionThreshold& getThreshXHigh() { return *static_cast<ReselectionThreshold*>(items[5]); }
	ReselectionThreshold& getThreshXLow() { return *static_cast<ReselectionThreshold*>(items[6]); }
	AllowedMeasBandwidth& getAllowedMeasBandwidth() { return *static_cast<AllowedMeasBandwidth*>(items[7]); }
	PresenceAntennaPort1& getPresenceAntennaPort1() { return *static_cast<PresenceAntennaPort1*>(items[8]); }
	CellReselectionPriority& getCellReselectionPriority() { return *static_cast<CellReselectionPriority*>(items[9]); }
	NeighCellConfig& getNeighCellConfig() { return *static_cast<NeighCellConfig*>(items[10]); }
	QOffsetRange& getQOffsetFreq() { return *static_cast<QOffsetRange*>(items[11]); }
	InterFreqNeighCellList& getInterFreqNeighCellList() { return *static_cast<InterFreqNeighCellList*>(items[12]); }
	InterFreqBlackCellList& getInterFreqBlackCellList() { return *static_cast<InterFreqBlackCellList*>(items[13]); }
	QQualMinr9& getQQualMinr9() { return *static_cast<QQualMinr9*>(items[14]); }
	InterFreqCarrierFreqInfoThreshXQr9& getInterFreqCarrierFreqInfoThreshXQr9() { return *static_cast<InterFreqCarrierFreqInfoThreshXQr9*>(items[15]); }
};

typedef SequenceOf<InterFreqCarrierFreqInfo, CONSTRAINED, 1, maxFreq> InterFreqCarrierFreqList;

typedef OctetStringBase SystemInformationBlockType5LateNonCriticalExtension;

class SystemInformationBlockType5 : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SystemInformationBlockType5(): Sequence(&theInfo) {}
	SystemInformationBlockType5(const InterFreqCarrierFreqList& interFreqCarrierFreqList);

	void setInterFreqCarrierFreqList(const InterFreqCarrierFreqList& interFreqCarrierFreqList) { *static_cast<InterFreqCarrierFreqList*>(items[0]) = interFreqCarrierFreqList; }
	void setSystemInformationBlockType5LateNonCriticalExtension(const SystemInformationBlockType5LateNonCriticalExtension& systemInformationBlockType5LateNonCriticalExtension) { *static_cast<SystemInformationBlockType5LateNonCriticalExtension*>(items[1]) = systemInformationBlockType5LateNonCriticalExtension; }

	InterFreqCarrierFreqList& getInterFreqCarrierFreqList() { return *static_cast<InterFreqCarrierFreqList*>(items[0]); }
	SystemInformationBlockType5LateNonCriticalExtension& getSystemInformationBlockType5LateNonCriticalExtension() { return *static_cast<SystemInformationBlockType5LateNonCriticalExtension*>(items[1]); }
};

typedef Integer<CONSTRAINED, -60, -13> CarrierFreqUTRAFDDQRxLevMin;

typedef Integer<CONSTRAINED, -50, 33> CarrierFreqUTRAFDDPMaxUTRA;

typedef Integer<CONSTRAINED, -24, 0> CarrierFreqUTRAFDDQQualMin;

class CarrierFreqUTRAFDDThreshXQr9 : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CarrierFreqUTRAFDDThreshXQr9(): Sequence(&theInfo) {}
	CarrierFreqUTRAFDDThreshXQr9(const ReselectionThresholdQr9& threshXHighQr9, const ReselectionThresholdQr9& threshXLowQr9);

	void setThreshXHighQr9(const ReselectionThresholdQr9& threshXHighQr9) { *static_cast<ReselectionThresholdQr9*>(items[0]) = threshXHighQr9; }
	void setThreshXLowQr9(const ReselectionThresholdQr9& threshXLowQr9) { *static_cast<ReselectionThresholdQr9*>(items[1]) = threshXLowQr9; }

	ReselectionThresholdQr9& getThreshXHighQr9() { return *static_cast<ReselectionThresholdQr9*>(items[0]); }
	ReselectionThresholdQr9& getThreshXLowQr9() { return *static_cast<ReselectionThresholdQr9*>(items[1]); }
};

class CarrierFreqUTRAFDD : public Sequence {
private:
	static const void *itemsInfo[8];
	static bool itemsPres[8];
public:
	static const Info theInfo;
	CarrierFreqUTRAFDD(): Sequence(&theInfo) {}
	CarrierFreqUTRAFDD(const ARFCNValueUTRA& carrierFreq, const ReselectionThreshold& threshXHigh, const ReselectionThreshold& threshXLow, const CarrierFreqUTRAFDDQRxLevMin& carrierFreqUTRAFDDQRxLevMin, const CarrierFreqUTRAFDDPMaxUTRA& carrierFreqUTRAFDDPMaxUTRA, const CarrierFreqUTRAFDDQQualMin& carrierFreqUTRAFDDQQualMin);

	void setCarrierFreq(const ARFCNValueUTRA& carrierFreq) { *static_cast<ARFCNValueUTRA*>(items[0]) = carrierFreq; }
	void setCellReselectionPriority(const CellReselectionPriority& cellReselectionPriority) { *static_cast<CellReselectionPriority*>(items[1]) = cellReselectionPriority; }
	void setThreshXHigh(const ReselectionThreshold& threshXHigh) { *static_cast<ReselectionThreshold*>(items[2]) = threshXHigh; }
	void setThreshXLow(const ReselectionThreshold& threshXLow) { *static_cast<ReselectionThreshold*>(items[3]) = threshXLow; }
	void setCarrierFreqUTRAFDDQRxLevMin(const CarrierFreqUTRAFDDQRxLevMin& carrierFreqUTRAFDDQRxLevMin) { *static_cast<CarrierFreqUTRAFDDQRxLevMin*>(items[4]) = carrierFreqUTRAFDDQRxLevMin; }
	void setCarrierFreqUTRAFDDPMaxUTRA(const CarrierFreqUTRAFDDPMaxUTRA& carrierFreqUTRAFDDPMaxUTRA) { *static_cast<CarrierFreqUTRAFDDPMaxUTRA*>(items[5]) = carrierFreqUTRAFDDPMaxUTRA; }
	void setCarrierFreqUTRAFDDQQualMin(const CarrierFreqUTRAFDDQQualMin& carrierFreqUTRAFDDQQualMin) { *static_cast<CarrierFreqUTRAFDDQQualMin*>(items[6]) = carrierFreqUTRAFDDQQualMin; }
	void setCarrierFreqUTRAFDDThreshXQr9(const CarrierFreqUTRAFDDThreshXQr9& carrierFreqUTRAFDDThreshXQr9) { *static_cast<CarrierFreqUTRAFDDThreshXQr9*>(items[7]) = carrierFreqUTRAFDDThreshXQr9; }

	ARFCNValueUTRA& getCarrierFreq() { return *static_cast<ARFCNValueUTRA*>(items[0]); }
	CellReselectionPriority& getCellReselectionPriority() { return *static_cast<CellReselectionPriority*>(items[1]); }
	ReselectionThreshold& getThreshXHigh() { return *static_cast<ReselectionThreshold*>(items[2]); }
	ReselectionThreshold& getThreshXLow() { return *static_cast<ReselectionThreshold*>(items[3]); }
	CarrierFreqUTRAFDDQRxLevMin& getCarrierFreqUTRAFDDQRxLevMin() { return *static_cast<CarrierFreqUTRAFDDQRxLevMin*>(items[4]); }
	CarrierFreqUTRAFDDPMaxUTRA& getCarrierFreqUTRAFDDPMaxUTRA() { return *static_cast<CarrierFreqUTRAFDDPMaxUTRA*>(items[5]); }
	CarrierFreqUTRAFDDQQualMin& getCarrierFreqUTRAFDDQQualMin() { return *static_cast<CarrierFreqUTRAFDDQQualMin*>(items[6]); }
	CarrierFreqUTRAFDDThreshXQr9& getCarrierFreqUTRAFDDThreshXQr9() { return *static_cast<CarrierFreqUTRAFDDThreshXQr9*>(items[7]); }
};

typedef SequenceOf<CarrierFreqUTRAFDD, CONSTRAINED, 1, maxUTRA_FDD_Carrier> CarrierFreqListUTRAFDD;

typedef Integer<CONSTRAINED, -60, -13> CarrierFreqUTRATDDQRxLevMin;

typedef Integer<CONSTRAINED, -50, 33> CarrierFreqUTRATDDPMaxUTRA;

class CarrierFreqUTRATDD : public Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	CarrierFreqUTRATDD(): Sequence(&theInfo) {}
	CarrierFreqUTRATDD(const ARFCNValueUTRA& carrierFreq, const ReselectionThreshold& threshXHigh, const ReselectionThreshold& threshXLow, const CarrierFreqUTRATDDQRxLevMin& carrierFreqUTRATDDQRxLevMin, const CarrierFreqUTRATDDPMaxUTRA& carrierFreqUTRATDDPMaxUTRA);

	void setCarrierFreq(const ARFCNValueUTRA& carrierFreq) { *static_cast<ARFCNValueUTRA*>(items[0]) = carrierFreq; }
	void setCellReselectionPriority(const CellReselectionPriority& cellReselectionPriority) { *static_cast<CellReselectionPriority*>(items[1]) = cellReselectionPriority; }
	void setThreshXHigh(const ReselectionThreshold& threshXHigh) { *static_cast<ReselectionThreshold*>(items[2]) = threshXHigh; }
	void setThreshXLow(const ReselectionThreshold& threshXLow) { *static_cast<ReselectionThreshold*>(items[3]) = threshXLow; }
	void setCarrierFreqUTRATDDQRxLevMin(const CarrierFreqUTRATDDQRxLevMin& carrierFreqUTRATDDQRxLevMin) { *static_cast<CarrierFreqUTRATDDQRxLevMin*>(items[4]) = carrierFreqUTRATDDQRxLevMin; }
	void setCarrierFreqUTRATDDPMaxUTRA(const CarrierFreqUTRATDDPMaxUTRA& carrierFreqUTRATDDPMaxUTRA) { *static_cast<CarrierFreqUTRATDDPMaxUTRA*>(items[5]) = carrierFreqUTRATDDPMaxUTRA; }

	ARFCNValueUTRA& getCarrierFreq() { return *static_cast<ARFCNValueUTRA*>(items[0]); }
	CellReselectionPriority& getCellReselectionPriority() { return *static_cast<CellReselectionPriority*>(items[1]); }
	ReselectionThreshold& getThreshXHigh() { return *static_cast<ReselectionThreshold*>(items[2]); }
	ReselectionThreshold& getThreshXLow() { return *static_cast<ReselectionThreshold*>(items[3]); }
	CarrierFreqUTRATDDQRxLevMin& getCarrierFreqUTRATDDQRxLevMin() { return *static_cast<CarrierFreqUTRATDDQRxLevMin*>(items[4]); }
	CarrierFreqUTRATDDPMaxUTRA& getCarrierFreqUTRATDDPMaxUTRA() { return *static_cast<CarrierFreqUTRATDDPMaxUTRA*>(items[5]); }
};

typedef SequenceOf<CarrierFreqUTRATDD, CONSTRAINED, 1, maxUTRA_TDD_Carrier> CarrierFreqListUTRATDD;

typedef OctetStringBase SystemInformationBlockType6LateNonCriticalExtension;

class SystemInformationBlockType6 : public Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	SystemInformationBlockType6(): Sequence(&theInfo) {}
	SystemInformationBlockType6(const TReselection& tReselectionUTRA);

	void setCarrierFreqListUTRAFDD(const CarrierFreqListUTRAFDD& carrierFreqListUTRAFDD) { *static_cast<CarrierFreqListUTRAFDD*>(items[0]) = carrierFreqListUTRAFDD; }
	void setCarrierFreqListUTRATDD(const CarrierFreqListUTRATDD& carrierFreqListUTRATDD) { *static_cast<CarrierFreqListUTRATDD*>(items[1]) = carrierFreqListUTRATDD; }
	void setTReselectionUTRA(const TReselection& tReselectionUTRA) { *static_cast<TReselection*>(items[2]) = tReselectionUTRA; }
	void setTReselectionUTRASF(const SpeedStateScaleFactors& tReselectionUTRASF) { *static_cast<SpeedStateScaleFactors*>(items[3]) = tReselectionUTRASF; }
	void setSystemInformationBlockType6LateNonCriticalExtension(const SystemInformationBlockType6LateNonCriticalExtension& systemInformationBlockType6LateNonCriticalExtension) { *static_cast<SystemInformationBlockType6LateNonCriticalExtension*>(items[4]) = systemInformationBlockType6LateNonCriticalExtension; }

	CarrierFreqListUTRAFDD& getCarrierFreqListUTRAFDD() { return *static_cast<CarrierFreqListUTRAFDD*>(items[0]); }
	CarrierFreqListUTRATDD& getCarrierFreqListUTRATDD() { return *static_cast<CarrierFreqListUTRATDD*>(items[1]); }
	TReselection& getTReselectionUTRA() { return *static_cast<TReselection*>(items[2]); }
	SpeedStateScaleFactors& getTReselectionUTRASF() { return *static_cast<SpeedStateScaleFactors*>(items[3]); }
	SystemInformationBlockType6LateNonCriticalExtension& getSystemInformationBlockType6LateNonCriticalExtension() { return *static_cast<SystemInformationBlockType6LateNonCriticalExtension*>(items[4]); }
};

typedef BitString<CONSTRAINED, 8, 8> CarrierFreqsInfoGERANCommonInfoNccPermitted;

typedef Integer<CONSTRAINED, 0, 45> CarrierFreqsInfoGERANCommonInfoQRxLevMin;

typedef Integer<CONSTRAINED, 0, 39> CarrierFreqsInfoGERANCommonInfoPMaxGERAN;

class CarrierFreqsInfoGERANCommonInfo : public Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	CarrierFreqsInfoGERANCommonInfo(): Sequence(&theInfo) {}
	CarrierFreqsInfoGERANCommonInfo(const CarrierFreqsInfoGERANCommonInfoNccPermitted& carrierFreqsInfoGERANCommonInfoNccPermitted, const CarrierFreqsInfoGERANCommonInfoQRxLevMin& carrierFreqsInfoGERANCommonInfoQRxLevMin, const ReselectionThreshold& threshXHigh, const ReselectionThreshold& threshXLow);

	void setCellReselectionPriority(const CellReselectionPriority& cellReselectionPriority) { *static_cast<CellReselectionPriority*>(items[0]) = cellReselectionPriority; }
	void setCarrierFreqsInfoGERANCommonInfoNccPermitted(const CarrierFreqsInfoGERANCommonInfoNccPermitted& carrierFreqsInfoGERANCommonInfoNccPermitted) { *static_cast<CarrierFreqsInfoGERANCommonInfoNccPermitted*>(items[1]) = carrierFreqsInfoGERANCommonInfoNccPermitted; }
	void setCarrierFreqsInfoGERANCommonInfoQRxLevMin(const CarrierFreqsInfoGERANCommonInfoQRxLevMin& carrierFreqsInfoGERANCommonInfoQRxLevMin) { *static_cast<CarrierFreqsInfoGERANCommonInfoQRxLevMin*>(items[2]) = carrierFreqsInfoGERANCommonInfoQRxLevMin; }
	void setCarrierFreqsInfoGERANCommonInfoPMaxGERAN(const CarrierFreqsInfoGERANCommonInfoPMaxGERAN& carrierFreqsInfoGERANCommonInfoPMaxGERAN) { *static_cast<CarrierFreqsInfoGERANCommonInfoPMaxGERAN*>(items[3]) = carrierFreqsInfoGERANCommonInfoPMaxGERAN; }
	void setThreshXHigh(const ReselectionThreshold& threshXHigh) { *static_cast<ReselectionThreshold*>(items[4]) = threshXHigh; }
	void setThreshXLow(const ReselectionThreshold& threshXLow) { *static_cast<ReselectionThreshold*>(items[5]) = threshXLow; }

	CellReselectionPriority& getCellReselectionPriority() { return *static_cast<CellReselectionPriority*>(items[0]); }
	CarrierFreqsInfoGERANCommonInfoNccPermitted& getCarrierFreqsInfoGERANCommonInfoNccPermitted() { return *static_cast<CarrierFreqsInfoGERANCommonInfoNccPermitted*>(items[1]); }
	CarrierFreqsInfoGERANCommonInfoQRxLevMin& getCarrierFreqsInfoGERANCommonInfoQRxLevMin() { return *static_cast<CarrierFreqsInfoGERANCommonInfoQRxLevMin*>(items[2]); }
	CarrierFreqsInfoGERANCommonInfoPMaxGERAN& getCarrierFreqsInfoGERANCommonInfoPMaxGERAN() { return *static_cast<CarrierFreqsInfoGERANCommonInfoPMaxGERAN*>(items[3]); }
	ReselectionThreshold& getThreshXHigh() { return *static_cast<ReselectionThreshold*>(items[4]); }
	ReselectionThreshold& getThreshXLow() { return *static_cast<ReselectionThreshold*>(items[5]); }
};

class CarrierFreqsInfoGERAN : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CarrierFreqsInfoGERAN(): Sequence(&theInfo) {}
	CarrierFreqsInfoGERAN(const CarrierFreqsGERAN& carrierFreqs, const CarrierFreqsInfoGERANCommonInfo& carrierFreqsInfoGERANCommonInfo);

	void setCarrierFreqs(const CarrierFreqsGERAN& carrierFreqs) { *static_cast<CarrierFreqsGERAN*>(items[0]) = carrierFreqs; }
	void setCarrierFreqsInfoGERANCommonInfo(const CarrierFreqsInfoGERANCommonInfo& carrierFreqsInfoGERANCommonInfo) { *static_cast<CarrierFreqsInfoGERANCommonInfo*>(items[1]) = carrierFreqsInfoGERANCommonInfo; }

	CarrierFreqsGERAN& getCarrierFreqs() { return *static_cast<CarrierFreqsGERAN*>(items[0]); }
	CarrierFreqsInfoGERANCommonInfo& getCarrierFreqsInfoGERANCommonInfo() { return *static_cast<CarrierFreqsInfoGERANCommonInfo*>(items[1]); }
};

typedef SequenceOf<CarrierFreqsInfoGERAN, CONSTRAINED, 1, maxGNFG> CarrierFreqsInfoListGERAN;

typedef OctetStringBase SystemInformationBlockType7LateNonCriticalExtension;

class SystemInformationBlockType7 : public Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	SystemInformationBlockType7(): Sequence(&theInfo) {}
	SystemInformationBlockType7(const TReselection& tReselectionGERAN);

	void setTReselectionGERAN(const TReselection& tReselectionGERAN) { *static_cast<TReselection*>(items[0]) = tReselectionGERAN; }
	void setTReselectionGERANSF(const SpeedStateScaleFactors& tReselectionGERANSF) { *static_cast<SpeedStateScaleFactors*>(items[1]) = tReselectionGERANSF; }
	void setCarrierFreqsInfoList(const CarrierFreqsInfoListGERAN& carrierFreqsInfoList) { *static_cast<CarrierFreqsInfoListGERAN*>(items[2]) = carrierFreqsInfoList; }
	void setSystemInformationBlockType7LateNonCriticalExtension(const SystemInformationBlockType7LateNonCriticalExtension& systemInformationBlockType7LateNonCriticalExtension) { *static_cast<SystemInformationBlockType7LateNonCriticalExtension*>(items[3]) = systemInformationBlockType7LateNonCriticalExtension; }

	TReselection& getTReselectionGERAN() { return *static_cast<TReselection*>(items[0]); }
	SpeedStateScaleFactors& getTReselectionGERANSF() { return *static_cast<SpeedStateScaleFactors*>(items[1]); }
	CarrierFreqsInfoListGERAN& getCarrierFreqsInfoList() { return *static_cast<CarrierFreqsInfoListGERAN*>(items[2]); }
	SystemInformationBlockType7LateNonCriticalExtension& getSystemInformationBlockType7LateNonCriticalExtension() { return *static_cast<SystemInformationBlockType7LateNonCriticalExtension*>(items[3]); }
};

typedef Boolean SystemTimeInfoCDMA2000CdmaEUTRASynchronisation;

typedef BitString<CONSTRAINED, 39, 39> SystemTimeInfoCDMA2000CdmaSystemTimeSynchronousSystemTime;

typedef BitString<CONSTRAINED, 49, 49> SystemTimeInfoCDMA2000CdmaSystemTimeAsynchronousSystemTime;

class SystemTimeInfoCDMA2000CdmaSystemTime : public Choice {
private:
	static const void *choicesInfo[2];
public:
	enum SystemTimeInfoCDMA2000CdmaSystemTimeChoices {
		systemTimeInfoCDMA2000CdmaSystemTimeSynchronousSystemTime = 0,
		systemTimeInfoCDMA2000CdmaSystemTimeAsynchronousSystemTime = 1,
	};
	static const Info theInfo;
	SystemTimeInfoCDMA2000CdmaSystemTime(): Choice(&theInfo) {}
};

class SystemTimeInfoCDMA2000 : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SystemTimeInfoCDMA2000(): Sequence(&theInfo) {}
	SystemTimeInfoCDMA2000(const SystemTimeInfoCDMA2000CdmaEUTRASynchronisation& systemTimeInfoCDMA2000CdmaEUTRASynchronisation, const SystemTimeInfoCDMA2000CdmaSystemTime& systemTimeInfoCDMA2000CdmaSystemTime);

	void setSystemTimeInfoCDMA2000CdmaEUTRASynchronisation(const SystemTimeInfoCDMA2000CdmaEUTRASynchronisation& systemTimeInfoCDMA2000CdmaEUTRASynchronisation) { *static_cast<SystemTimeInfoCDMA2000CdmaEUTRASynchronisation*>(items[0]) = systemTimeInfoCDMA2000CdmaEUTRASynchronisation; }
	void setSystemTimeInfoCDMA2000CdmaSystemTime(const SystemTimeInfoCDMA2000CdmaSystemTime& systemTimeInfoCDMA2000CdmaSystemTime) { *static_cast<SystemTimeInfoCDMA2000CdmaSystemTime*>(items[1]) = systemTimeInfoCDMA2000CdmaSystemTime; }

	SystemTimeInfoCDMA2000CdmaEUTRASynchronisation& getSystemTimeInfoCDMA2000CdmaEUTRASynchronisation() { return *static_cast<SystemTimeInfoCDMA2000CdmaEUTRASynchronisation*>(items[0]); }
	SystemTimeInfoCDMA2000CdmaSystemTime& getSystemTimeInfoCDMA2000CdmaSystemTime() { return *static_cast<SystemTimeInfoCDMA2000CdmaSystemTime*>(items[1]); }
};

typedef Integer<CONSTRAINED, 0, 15> SystemInformationBlockType8SearchWindowSize;

typedef Integer<CONSTRAINED, 0, 63> BandClassInfoCDMA2000ThreshXHigh;

typedef Integer<CONSTRAINED, 0, 63> BandClassInfoCDMA2000ThreshXLow;

class BandClassInfoCDMA2000 : public Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	BandClassInfoCDMA2000(): Sequence(&theInfo) {}
	BandClassInfoCDMA2000(const BandclassCDMA2000& bandClass, const BandClassInfoCDMA2000ThreshXHigh& bandClassInfoCDMA2000ThreshXHigh, const BandClassInfoCDMA2000ThreshXLow& bandClassInfoCDMA2000ThreshXLow);

	void setBandClass(const BandclassCDMA2000& bandClass) { *static_cast<BandclassCDMA2000*>(items[0]) = bandClass; }
	void setCellReselectionPriority(const CellReselectionPriority& cellReselectionPriority) { *static_cast<CellReselectionPriority*>(items[1]) = cellReselectionPriority; }
	void setBandClassInfoCDMA2000ThreshXHigh(const BandClassInfoCDMA2000ThreshXHigh& bandClassInfoCDMA2000ThreshXHigh) { *static_cast<BandClassInfoCDMA2000ThreshXHigh*>(items[2]) = bandClassInfoCDMA2000ThreshXHigh; }
	void setBandClassInfoCDMA2000ThreshXLow(const BandClassInfoCDMA2000ThreshXLow& bandClassInfoCDMA2000ThreshXLow) { *static_cast<BandClassInfoCDMA2000ThreshXLow*>(items[3]) = bandClassInfoCDMA2000ThreshXLow; }

	BandclassCDMA2000& getBandClass() { return *static_cast<BandclassCDMA2000*>(items[0]); }
	CellReselectionPriority& getCellReselectionPriority() { return *static_cast<CellReselectionPriority*>(items[1]); }
	BandClassInfoCDMA2000ThreshXHigh& getBandClassInfoCDMA2000ThreshXHigh() { return *static_cast<BandClassInfoCDMA2000ThreshXHigh*>(items[2]); }
	BandClassInfoCDMA2000ThreshXLow& getBandClassInfoCDMA2000ThreshXLow() { return *static_cast<BandClassInfoCDMA2000ThreshXLow*>(items[3]); }
};

typedef SequenceOf<BandClassInfoCDMA2000, CONSTRAINED, 1, maxCDMA_BandClass> BandClassListCDMA2000;

typedef SequenceOf<PhysCellIdCDMA2000, CONSTRAINED, 1, 16> PhysCellIdListCDMA2000;

class NeighCellsPerBandclassCDMA2000 : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	NeighCellsPerBandclassCDMA2000(): Sequence(&theInfo) {}
	NeighCellsPerBandclassCDMA2000(const ARFCNValueCDMA2000& arfcn, const PhysCellIdListCDMA2000& physCellIdList);

	void setArfcn(const ARFCNValueCDMA2000& arfcn) { *static_cast<ARFCNValueCDMA2000*>(items[0]) = arfcn; }
	void setPhysCellIdList(const PhysCellIdListCDMA2000& physCellIdList) { *static_cast<PhysCellIdListCDMA2000*>(items[1]) = physCellIdList; }

	ARFCNValueCDMA2000& getArfcn() { return *static_cast<ARFCNValueCDMA2000*>(items[0]); }
	PhysCellIdListCDMA2000& getPhysCellIdList() { return *static_cast<PhysCellIdListCDMA2000*>(items[1]); }
};

typedef SequenceOf<NeighCellsPerBandclassCDMA2000, CONSTRAINED, 1, 16> NeighCellsPerBandclassListCDMA2000;

class NeighCellCDMA2000 : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	NeighCellCDMA2000(): Sequence(&theInfo) {}
	NeighCellCDMA2000(const BandclassCDMA2000& bandClass, const NeighCellsPerBandclassListCDMA2000& neighCellsPerFreqList);

	void setBandClass(const BandclassCDMA2000& bandClass) { *static_cast<BandclassCDMA2000*>(items[0]) = bandClass; }
	void setNeighCellsPerFreqList(const NeighCellsPerBandclassListCDMA2000& neighCellsPerFreqList) { *static_cast<NeighCellsPerBandclassListCDMA2000*>(items[1]) = neighCellsPerFreqList; }

	BandclassCDMA2000& getBandClass() { return *static_cast<BandclassCDMA2000*>(items[0]); }
	NeighCellsPerBandclassListCDMA2000& getNeighCellsPerFreqList() { return *static_cast<NeighCellsPerBandclassListCDMA2000*>(items[1]); }
};

typedef SequenceOf<NeighCellCDMA2000, CONSTRAINED, 1, 16> NeighCellListCDMA2000;

class CellReselectionParametersCDMA2000 : public Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CellReselectionParametersCDMA2000(): Sequence(&theInfo) {}
	CellReselectionParametersCDMA2000(const BandClassListCDMA2000& bandClassList, const NeighCellListCDMA2000& neighCellList, const TReselection& tReselectionCDMA2000);

	void setBandClassList(const BandClassListCDMA2000& bandClassList) { *static_cast<BandClassListCDMA2000*>(items[0]) = bandClassList; }
	void setNeighCellList(const NeighCellListCDMA2000& neighCellList) { *static_cast<NeighCellListCDMA2000*>(items[1]) = neighCellList; }
	void setTReselectionCDMA2000(const TReselection& tReselectionCDMA2000) { *static_cast<TReselection*>(items[2]) = tReselectionCDMA2000; }
	void setTReselectionCDMA2000SF(const SpeedStateScaleFactors& tReselectionCDMA2000SF) { *static_cast<SpeedStateScaleFactors*>(items[3]) = tReselectionCDMA2000SF; }

	BandClassListCDMA2000& getBandClassList() { return *static_cast<BandClassListCDMA2000*>(items[0]); }
	NeighCellListCDMA2000& getNeighCellList() { return *static_cast<NeighCellListCDMA2000*>(items[1]); }
	TReselection& getTReselectionCDMA2000() { return *static_cast<TReselection*>(items[2]); }
	SpeedStateScaleFactors& getTReselectionCDMA2000SF() { return *static_cast<SpeedStateScaleFactors*>(items[3]); }
};

class SystemInformationBlockType8ParametersHRPD : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SystemInformationBlockType8ParametersHRPD(): Sequence(&theInfo) {}
	SystemInformationBlockType8ParametersHRPD(const PreRegistrationInfoHRPD& preRegistrationInfoHRPD);

	void setPreRegistrationInfoHRPD(const PreRegistrationInfoHRPD& preRegistrationInfoHRPD) { *static_cast<PreRegistrationInfoHRPD*>(items[0]) = preRegistrationInfoHRPD; }
	void setCellReselectionParametersHRPD(const CellReselectionParametersCDMA2000& cellReselectionParametersHRPD) { *static_cast<CellReselectionParametersCDMA2000*>(items[1]) = cellReselectionParametersHRPD; }

	PreRegistrationInfoHRPD& getPreRegistrationInfoHRPD() { return *static_cast<PreRegistrationInfoHRPD*>(items[0]); }
	CellReselectionParametersCDMA2000& getCellReselectionParametersHRPD() { return *static_cast<CellReselectionParametersCDMA2000*>(items[1]); }
};

typedef BitString<CONSTRAINED, 15, 15> CSFBRegistrationParam1XRTTSid;

typedef BitString<CONSTRAINED, 16, 16> CSFBRegistrationParam1XRTTNid;

typedef Boolean CSFBRegistrationParam1XRTTMultipleSID;

typedef Boolean CSFBRegistrationParam1XRTTMultipleNID;

typedef Boolean CSFBRegistrationParam1XRTTHomeReg;

typedef Boolean CSFBRegistrationParam1XRTTForeignSIDReg;

typedef Boolean CSFBRegistrationParam1XRTTForeignNIDReg;

typedef Boolean CSFBRegistrationParam1XRTTParameterReg;

typedef Boolean CSFBRegistrationParam1XRTTPowerUpReg;

typedef BitString<CONSTRAINED, 7, 7> CSFBRegistrationParam1XRTTRegistrationPeriod;

typedef BitString<CONSTRAINED, 12, 12> CSFBRegistrationParam1XRTTRegistrationZone;

typedef BitString<CONSTRAINED, 3, 3> CSFBRegistrationParam1XRTTTotalZone;

typedef BitString<CONSTRAINED, 3, 3> CSFBRegistrationParam1XRTTZoneTimer;

class CSFBRegistrationParam1XRTT : public Sequence {
private:
	static const void *itemsInfo[13];
	static bool itemsPres[13];
public:
	static const Info theInfo;
	CSFBRegistrationParam1XRTT(): Sequence(&theInfo) {}
	CSFBRegistrationParam1XRTT(const CSFBRegistrationParam1XRTTSid& cSFBRegistrationParam1XRTTSid, const CSFBRegistrationParam1XRTTNid& cSFBRegistrationParam1XRTTNid, const CSFBRegistrationParam1XRTTMultipleSID& cSFBRegistrationParam1XRTTMultipleSID, const CSFBRegistrationParam1XRTTMultipleNID& cSFBRegistrationParam1XRTTMultipleNID, const CSFBRegistrationParam1XRTTHomeReg& cSFBRegistrationParam1XRTTHomeReg, const CSFBRegistrationParam1XRTTForeignSIDReg& cSFBRegistrationParam1XRTTForeignSIDReg, const CSFBRegistrationParam1XRTTForeignNIDReg& cSFBRegistrationParam1XRTTForeignNIDReg, const CSFBRegistrationParam1XRTTParameterReg& cSFBRegistrationParam1XRTTParameterReg, const CSFBRegistrationParam1XRTTPowerUpReg& cSFBRegistrationParam1XRTTPowerUpReg, const CSFBRegistrationParam1XRTTRegistrationPeriod& cSFBRegistrationParam1XRTTRegistrationPeriod, const CSFBRegistrationParam1XRTTRegistrationZone& cSFBRegistrationParam1XRTTRegistrationZone, const CSFBRegistrationParam1XRTTTotalZone& cSFBRegistrationParam1XRTTTotalZone, const CSFBRegistrationParam1XRTTZoneTimer& cSFBRegistrationParam1XRTTZoneTimer);

	void setCSFBRegistrationParam1XRTTSid(const CSFBRegistrationParam1XRTTSid& cSFBRegistrationParam1XRTTSid) { *static_cast<CSFBRegistrationParam1XRTTSid*>(items[0]) = cSFBRegistrationParam1XRTTSid; }
	void setCSFBRegistrationParam1XRTTNid(const CSFBRegistrationParam1XRTTNid& cSFBRegistrationParam1XRTTNid) { *static_cast<CSFBRegistrationParam1XRTTNid*>(items[1]) = cSFBRegistrationParam1XRTTNid; }
	void setCSFBRegistrationParam1XRTTMultipleSID(const CSFBRegistrationParam1XRTTMultipleSID& cSFBRegistrationParam1XRTTMultipleSID) { *static_cast<CSFBRegistrationParam1XRTTMultipleSID*>(items[2]) = cSFBRegistrationParam1XRTTMultipleSID; }
	void setCSFBRegistrationParam1XRTTMultipleNID(const CSFBRegistrationParam1XRTTMultipleNID& cSFBRegistrationParam1XRTTMultipleNID) { *static_cast<CSFBRegistrationParam1XRTTMultipleNID*>(items[3]) = cSFBRegistrationParam1XRTTMultipleNID; }
	void setCSFBRegistrationParam1XRTTHomeReg(const CSFBRegistrationParam1XRTTHomeReg& cSFBRegistrationParam1XRTTHomeReg) { *static_cast<CSFBRegistrationParam1XRTTHomeReg*>(items[4]) = cSFBRegistrationParam1XRTTHomeReg; }
	void setCSFBRegistrationParam1XRTTForeignSIDReg(const CSFBRegistrationParam1XRTTForeignSIDReg& cSFBRegistrationParam1XRTTForeignSIDReg) { *static_cast<CSFBRegistrationParam1XRTTForeignSIDReg*>(items[5]) = cSFBRegistrationParam1XRTTForeignSIDReg; }
	void setCSFBRegistrationParam1XRTTForeignNIDReg(const CSFBRegistrationParam1XRTTForeignNIDReg& cSFBRegistrationParam1XRTTForeignNIDReg) { *static_cast<CSFBRegistrationParam1XRTTForeignNIDReg*>(items[6]) = cSFBRegistrationParam1XRTTForeignNIDReg; }
	void setCSFBRegistrationParam1XRTTParameterReg(const CSFBRegistrationParam1XRTTParameterReg& cSFBRegistrationParam1XRTTParameterReg) { *static_cast<CSFBRegistrationParam1XRTTParameterReg*>(items[7]) = cSFBRegistrationParam1XRTTParameterReg; }
	void setCSFBRegistrationParam1XRTTPowerUpReg(const CSFBRegistrationParam1XRTTPowerUpReg& cSFBRegistrationParam1XRTTPowerUpReg) { *static_cast<CSFBRegistrationParam1XRTTPowerUpReg*>(items[8]) = cSFBRegistrationParam1XRTTPowerUpReg; }
	void setCSFBRegistrationParam1XRTTRegistrationPeriod(const CSFBRegistrationParam1XRTTRegistrationPeriod& cSFBRegistrationParam1XRTTRegistrationPeriod) { *static_cast<CSFBRegistrationParam1XRTTRegistrationPeriod*>(items[9]) = cSFBRegistrationParam1XRTTRegistrationPeriod; }
	void setCSFBRegistrationParam1XRTTRegistrationZone(const CSFBRegistrationParam1XRTTRegistrationZone& cSFBRegistrationParam1XRTTRegistrationZone) { *static_cast<CSFBRegistrationParam1XRTTRegistrationZone*>(items[10]) = cSFBRegistrationParam1XRTTRegistrationZone; }
	void setCSFBRegistrationParam1XRTTTotalZone(const CSFBRegistrationParam1XRTTTotalZone& cSFBRegistrationParam1XRTTTotalZone) { *static_cast<CSFBRegistrationParam1XRTTTotalZone*>(items[11]) = cSFBRegistrationParam1XRTTTotalZone; }
	void setCSFBRegistrationParam1XRTTZoneTimer(const CSFBRegistrationParam1XRTTZoneTimer& cSFBRegistrationParam1XRTTZoneTimer) { *static_cast<CSFBRegistrationParam1XRTTZoneTimer*>(items[12]) = cSFBRegistrationParam1XRTTZoneTimer; }

	CSFBRegistrationParam1XRTTSid& getCSFBRegistrationParam1XRTTSid() { return *static_cast<CSFBRegistrationParam1XRTTSid*>(items[0]); }
	CSFBRegistrationParam1XRTTNid& getCSFBRegistrationParam1XRTTNid() { return *static_cast<CSFBRegistrationParam1XRTTNid*>(items[1]); }
	CSFBRegistrationParam1XRTTMultipleSID& getCSFBRegistrationParam1XRTTMultipleSID() { return *static_cast<CSFBRegistrationParam1XRTTMultipleSID*>(items[2]); }
	CSFBRegistrationParam1XRTTMultipleNID& getCSFBRegistrationParam1XRTTMultipleNID() { return *static_cast<CSFBRegistrationParam1XRTTMultipleNID*>(items[3]); }
	CSFBRegistrationParam1XRTTHomeReg& getCSFBRegistrationParam1XRTTHomeReg() { return *static_cast<CSFBRegistrationParam1XRTTHomeReg*>(items[4]); }
	CSFBRegistrationParam1XRTTForeignSIDReg& getCSFBRegistrationParam1XRTTForeignSIDReg() { return *static_cast<CSFBRegistrationParam1XRTTForeignSIDReg*>(items[5]); }
	CSFBRegistrationParam1XRTTForeignNIDReg& getCSFBRegistrationParam1XRTTForeignNIDReg() { return *static_cast<CSFBRegistrationParam1XRTTForeignNIDReg*>(items[6]); }
	CSFBRegistrationParam1XRTTParameterReg& getCSFBRegistrationParam1XRTTParameterReg() { return *static_cast<CSFBRegistrationParam1XRTTParameterReg*>(items[7]); }
	CSFBRegistrationParam1XRTTPowerUpReg& getCSFBRegistrationParam1XRTTPowerUpReg() { return *static_cast<CSFBRegistrationParam1XRTTPowerUpReg*>(items[8]); }
	CSFBRegistrationParam1XRTTRegistrationPeriod& getCSFBRegistrationParam1XRTTRegistrationPeriod() { return *static_cast<CSFBRegistrationParam1XRTTRegistrationPeriod*>(items[9]); }
	CSFBRegistrationParam1XRTTRegistrationZone& getCSFBRegistrationParam1XRTTRegistrationZone() { return *static_cast<CSFBRegistrationParam1XRTTRegistrationZone*>(items[10]); }
	CSFBRegistrationParam1XRTTTotalZone& getCSFBRegistrationParam1XRTTTotalZone() { return *static_cast<CSFBRegistrationParam1XRTTTotalZone*>(items[11]); }
	CSFBRegistrationParam1XRTTZoneTimer& getCSFBRegistrationParam1XRTTZoneTimer() { return *static_cast<CSFBRegistrationParam1XRTTZoneTimer*>(items[12]); }
};

typedef BitString<CONSTRAINED, 42, 42> SystemInformationBlockType8Parameters1XRTTLongCodeState1XRTT;

class SystemInformationBlockType8Parameters1XRTT : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	SystemInformationBlockType8Parameters1XRTT(): Sequence(&theInfo) {}

	void setCsfbRegistrationParam1XRTT(const CSFBRegistrationParam1XRTT& csfbRegistrationParam1XRTT) { *static_cast<CSFBRegistrationParam1XRTT*>(items[0]) = csfbRegistrationParam1XRTT; }
	void setSystemInformationBlockType8Parameters1XRTTLongCodeState1XRTT(const SystemInformationBlockType8Parameters1XRTTLongCodeState1XRTT& systemInformationBlockType8Parameters1XRTTLongCodeState1XRTT) { *static_cast<SystemInformationBlockType8Parameters1XRTTLongCodeState1XRTT*>(items[1]) = systemInformationBlockType8Parameters1XRTTLongCodeState1XRTT; }
	void setCellReselectionParameters1XRTT(const CellReselectionParametersCDMA2000& cellReselectionParameters1XRTT) { *static_cast<CellReselectionParametersCDMA2000*>(items[2]) = cellReselectionParameters1XRTT; }

	CSFBRegistrationParam1XRTT& getCsfbRegistrationParam1XRTT() { return *static_cast<CSFBRegistrationParam1XRTT*>(items[0]); }
	SystemInformationBlockType8Parameters1XRTTLongCodeState1XRTT& getSystemInformationBlockType8Parameters1XRTTLongCodeState1XRTT() { return *static_cast<SystemInformationBlockType8Parameters1XRTTLongCodeState1XRTT*>(items[1]); }
	CellReselectionParametersCDMA2000& getCellReselectionParameters1XRTT() { return *static_cast<CellReselectionParametersCDMA2000*>(items[2]); }
};

typedef OctetStringBase SystemInformationBlockType8LateNonCriticalExtension;

typedef Boolean SystemInformationBlockType8CsfbSupportForDualRxUEsr9;

typedef SequenceOf<PhysCellIdCDMA2000, CONSTRAINED, 0, 24> PhysCellIdListCDMA2000v920;

class NeighCellsPerBandclassCDMA2000v920 : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	NeighCellsPerBandclassCDMA2000v920(): Sequence(&theInfo) {}
	NeighCellsPerBandclassCDMA2000v920(const PhysCellIdListCDMA2000v920& physCellIdListv920);

	void setPhysCellIdListv920(const PhysCellIdListCDMA2000v920& physCellIdListv920) { *static_cast<PhysCellIdListCDMA2000v920*>(items[0]) = physCellIdListv920; }

	PhysCellIdListCDMA2000v920& getPhysCellIdListv920() { return *static_cast<PhysCellIdListCDMA2000v920*>(items[0]); }
};

typedef SequenceOf<NeighCellsPerBandclassCDMA2000v920, CONSTRAINED, 1, 16> NeighCellsPerBandclassListCDMA2000v920;

class NeighCellCDMA2000v920 : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	NeighCellCDMA2000v920(): Sequence(&theInfo) {}
	NeighCellCDMA2000v920(const NeighCellsPerBandclassListCDMA2000v920& neighCellsPerFreqListv920);

	void setNeighCellsPerFreqListv920(const NeighCellsPerBandclassListCDMA2000v920& neighCellsPerFreqListv920) { *static_cast<NeighCellsPerBandclassListCDMA2000v920*>(items[0]) = neighCellsPerFreqListv920; }

	NeighCellsPerBandclassListCDMA2000v920& getNeighCellsPerFreqListv920() { return *static_cast<NeighCellsPerBandclassListCDMA2000v920*>(items[0]); }
};

typedef SequenceOf<NeighCellCDMA2000v920, CONSTRAINED, 1, 16> NeighCellListCDMA2000v920;

class CellReselectionParametersCDMA2000v920 : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellReselectionParametersCDMA2000v920(): Sequence(&theInfo) {}
	CellReselectionParametersCDMA2000v920(const NeighCellListCDMA2000v920& neighCellListv920);

	void setNeighCellListv920(const NeighCellListCDMA2000v920& neighCellListv920) { *static_cast<NeighCellListCDMA2000v920*>(items[0]) = neighCellListv920; }

	NeighCellListCDMA2000v920& getNeighCellListv920() { return *static_cast<NeighCellListCDMA2000v920*>(items[0]); }
};

enum CSFBRegistrationParam1XRTTv920powerDownReg_r9Values {
	true_CSFBRegistrationParam1XRTTv920powerDownReg_r9 = 0,
};
typedef Enumerated<CONSTRAINED, 0> CSFBRegistrationParam1XRTTv920powerDownReg_r9;

class CSFBRegistrationParam1XRTTv920 : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CSFBRegistrationParam1XRTTv920(): Sequence(&theInfo) {}
	CSFBRegistrationParam1XRTTv920(const CSFBRegistrationParam1XRTTv920powerDownReg_r9& cSFBRegistrationParam1XRTTv920powerDownReg_r9);

	void setCSFBRegistrationParam1XRTTv920powerDownReg_r9(const CSFBRegistrationParam1XRTTv920powerDownReg_r9& cSFBRegistrationParam1XRTTv920powerDownReg_r9) { *static_cast<CSFBRegistrationParam1XRTTv920powerDownReg_r9*>(items[0]) = cSFBRegistrationParam1XRTTv920powerDownReg_r9; }

	CSFBRegistrationParam1XRTTv920powerDownReg_r9& getCSFBRegistrationParam1XRTTv920powerDownReg_r9() { return *static_cast<CSFBRegistrationParam1XRTTv920powerDownReg_r9*>(items[0]); }
};

typedef Integer<CONSTRAINED, 0, 63> ACBarringConfig1XRTTr9AcBarring0to9r9;

typedef Integer<CONSTRAINED, 0, 7> ACBarringConfig1XRTTr9AcBarring10r9;

typedef Integer<CONSTRAINED, 0, 7> ACBarringConfig1XRTTr9AcBarring11r9;

typedef Integer<CONSTRAINED, 0, 7> ACBarringConfig1XRTTr9AcBarring12r9;

typedef Integer<CONSTRAINED, 0, 7> ACBarringConfig1XRTTr9AcBarring13r9;

typedef Integer<CONSTRAINED, 0, 7> ACBarringConfig1XRTTr9AcBarring14r9;

typedef Integer<CONSTRAINED, 0, 7> ACBarringConfig1XRTTr9AcBarring15r9;

typedef Integer<CONSTRAINED, 0, 7> ACBarringConfig1XRTTr9AcBarringMsgr9;

typedef Integer<CONSTRAINED, 0, 7> ACBarringConfig1XRTTr9AcBarringRegr9;

typedef Integer<CONSTRAINED, 0, 7> ACBarringConfig1XRTTr9AcBarringEmgr9;

class ACBarringConfig1XRTTr9 : public Sequence {
private:
	static const void *itemsInfo[10];
	static bool itemsPres[10];
public:
	static const Info theInfo;
	ACBarringConfig1XRTTr9(): Sequence(&theInfo) {}
	ACBarringConfig1XRTTr9(const ACBarringConfig1XRTTr9AcBarring0to9r9& aCBarringConfig1XRTTr9AcBarring0to9r9, const ACBarringConfig1XRTTr9AcBarring10r9& aCBarringConfig1XRTTr9AcBarring10r9, const ACBarringConfig1XRTTr9AcBarring11r9& aCBarringConfig1XRTTr9AcBarring11r9, const ACBarringConfig1XRTTr9AcBarring12r9& aCBarringConfig1XRTTr9AcBarring12r9, const ACBarringConfig1XRTTr9AcBarring13r9& aCBarringConfig1XRTTr9AcBarring13r9, const ACBarringConfig1XRTTr9AcBarring14r9& aCBarringConfig1XRTTr9AcBarring14r9, const ACBarringConfig1XRTTr9AcBarring15r9& aCBarringConfig1XRTTr9AcBarring15r9, const ACBarringConfig1XRTTr9AcBarringMsgr9& aCBarringConfig1XRTTr9AcBarringMsgr9, const ACBarringConfig1XRTTr9AcBarringRegr9& aCBarringConfig1XRTTr9AcBarringRegr9, const ACBarringConfig1XRTTr9AcBarringEmgr9& aCBarringConfig1XRTTr9AcBarringEmgr9);

	void setACBarringConfig1XRTTr9AcBarring0to9r9(const ACBarringConfig1XRTTr9AcBarring0to9r9& aCBarringConfig1XRTTr9AcBarring0to9r9) { *static_cast<ACBarringConfig1XRTTr9AcBarring0to9r9*>(items[0]) = aCBarringConfig1XRTTr9AcBarring0to9r9; }
	void setACBarringConfig1XRTTr9AcBarring10r9(const ACBarringConfig1XRTTr9AcBarring10r9& aCBarringConfig1XRTTr9AcBarring10r9) { *static_cast<ACBarringConfig1XRTTr9AcBarring10r9*>(items[1]) = aCBarringConfig1XRTTr9AcBarring10r9; }
	void setACBarringConfig1XRTTr9AcBarring11r9(const ACBarringConfig1XRTTr9AcBarring11r9& aCBarringConfig1XRTTr9AcBarring11r9) { *static_cast<ACBarringConfig1XRTTr9AcBarring11r9*>(items[2]) = aCBarringConfig1XRTTr9AcBarring11r9; }
	void setACBarringConfig1XRTTr9AcBarring12r9(const ACBarringConfig1XRTTr9AcBarring12r9& aCBarringConfig1XRTTr9AcBarring12r9) { *static_cast<ACBarringConfig1XRTTr9AcBarring12r9*>(items[3]) = aCBarringConfig1XRTTr9AcBarring12r9; }
	void setACBarringConfig1XRTTr9AcBarring13r9(const ACBarringConfig1XRTTr9AcBarring13r9& aCBarringConfig1XRTTr9AcBarring13r9) { *static_cast<ACBarringConfig1XRTTr9AcBarring13r9*>(items[4]) = aCBarringConfig1XRTTr9AcBarring13r9; }
	void setACBarringConfig1XRTTr9AcBarring14r9(const ACBarringConfig1XRTTr9AcBarring14r9& aCBarringConfig1XRTTr9AcBarring14r9) { *static_cast<ACBarringConfig1XRTTr9AcBarring14r9*>(items[5]) = aCBarringConfig1XRTTr9AcBarring14r9; }
	void setACBarringConfig1XRTTr9AcBarring15r9(const ACBarringConfig1XRTTr9AcBarring15r9& aCBarringConfig1XRTTr9AcBarring15r9) { *static_cast<ACBarringConfig1XRTTr9AcBarring15r9*>(items[6]) = aCBarringConfig1XRTTr9AcBarring15r9; }
	void setACBarringConfig1XRTTr9AcBarringMsgr9(const ACBarringConfig1XRTTr9AcBarringMsgr9& aCBarringConfig1XRTTr9AcBarringMsgr9) { *static_cast<ACBarringConfig1XRTTr9AcBarringMsgr9*>(items[7]) = aCBarringConfig1XRTTr9AcBarringMsgr9; }
	void setACBarringConfig1XRTTr9AcBarringRegr9(const ACBarringConfig1XRTTr9AcBarringRegr9& aCBarringConfig1XRTTr9AcBarringRegr9) { *static_cast<ACBarringConfig1XRTTr9AcBarringRegr9*>(items[8]) = aCBarringConfig1XRTTr9AcBarringRegr9; }
	void setACBarringConfig1XRTTr9AcBarringEmgr9(const ACBarringConfig1XRTTr9AcBarringEmgr9& aCBarringConfig1XRTTr9AcBarringEmgr9) { *static_cast<ACBarringConfig1XRTTr9AcBarringEmgr9*>(items[9]) = aCBarringConfig1XRTTr9AcBarringEmgr9; }

	ACBarringConfig1XRTTr9AcBarring0to9r9& getACBarringConfig1XRTTr9AcBarring0to9r9() { return *static_cast<ACBarringConfig1XRTTr9AcBarring0to9r9*>(items[0]); }
	ACBarringConfig1XRTTr9AcBarring10r9& getACBarringConfig1XRTTr9AcBarring10r9() { return *static_cast<ACBarringConfig1XRTTr9AcBarring10r9*>(items[1]); }
	ACBarringConfig1XRTTr9AcBarring11r9& getACBarringConfig1XRTTr9AcBarring11r9() { return *static_cast<ACBarringConfig1XRTTr9AcBarring11r9*>(items[2]); }
	ACBarringConfig1XRTTr9AcBarring12r9& getACBarringConfig1XRTTr9AcBarring12r9() { return *static_cast<ACBarringConfig1XRTTr9AcBarring12r9*>(items[3]); }
	ACBarringConfig1XRTTr9AcBarring13r9& getACBarringConfig1XRTTr9AcBarring13r9() { return *static_cast<ACBarringConfig1XRTTr9AcBarring13r9*>(items[4]); }
	ACBarringConfig1XRTTr9AcBarring14r9& getACBarringConfig1XRTTr9AcBarring14r9() { return *static_cast<ACBarringConfig1XRTTr9AcBarring14r9*>(items[5]); }
	ACBarringConfig1XRTTr9AcBarring15r9& getACBarringConfig1XRTTr9AcBarring15r9() { return *static_cast<ACBarringConfig1XRTTr9AcBarring15r9*>(items[6]); }
	ACBarringConfig1XRTTr9AcBarringMsgr9& getACBarringConfig1XRTTr9AcBarringMsgr9() { return *static_cast<ACBarringConfig1XRTTr9AcBarringMsgr9*>(items[7]); }
	ACBarringConfig1XRTTr9AcBarringRegr9& getACBarringConfig1XRTTr9AcBarringRegr9() { return *static_cast<ACBarringConfig1XRTTr9AcBarringRegr9*>(items[8]); }
	ACBarringConfig1XRTTr9AcBarringEmgr9& getACBarringConfig1XRTTr9AcBarringEmgr9() { return *static_cast<ACBarringConfig1XRTTr9AcBarringEmgr9*>(items[9]); }
};

enum SystemInformationBlockType8csfb_DualRxTxSupport_r10Values {
	true_SystemInformationBlockType8csfb_DualRxTxSupport_r10 = 0,
};
typedef Enumerated<CONSTRAINED, 0> SystemInformationBlockType8csfb_DualRxTxSupport_r10;

class SystemInformationBlockType8 : public Sequence {
private:
	static const void *itemsInfo[11];
	static bool itemsPres[11];
public:
	static const Info theInfo;
	SystemInformationBlockType8(): Sequence(&theInfo) {}

	void setSystemTimeInfo(const SystemTimeInfoCDMA2000& systemTimeInfo) { *static_cast<SystemTimeInfoCDMA2000*>(items[0]) = systemTimeInfo; }
	void setSystemInformationBlockType8SearchWindowSize(const SystemInformationBlockType8SearchWindowSize& systemInformationBlockType8SearchWindowSize) { *static_cast<SystemInformationBlockType8SearchWindowSize*>(items[1]) = systemInformationBlockType8SearchWindowSize; }
	void setSystemInformationBlockType8ParametersHRPD(const SystemInformationBlockType8ParametersHRPD& systemInformationBlockType8ParametersHRPD) { *static_cast<SystemInformationBlockType8ParametersHRPD*>(items[2]) = systemInformationBlockType8ParametersHRPD; }
	void setSystemInformationBlockType8Parameters1XRTT(const SystemInformationBlockType8Parameters1XRTT& systemInformationBlockType8Parameters1XRTT) { *static_cast<SystemInformationBlockType8Parameters1XRTT*>(items[3]) = systemInformationBlockType8Parameters1XRTT; }
	void setSystemInformationBlockType8LateNonCriticalExtension(const SystemInformationBlockType8LateNonCriticalExtension& systemInformationBlockType8LateNonCriticalExtension) { *static_cast<SystemInformationBlockType8LateNonCriticalExtension*>(items[4]) = systemInformationBlockType8LateNonCriticalExtension; }
	void setSystemInformationBlockType8CsfbSupportForDualRxUEsr9(const SystemInformationBlockType8CsfbSupportForDualRxUEsr9& systemInformationBlockType8CsfbSupportForDualRxUEsr9) { *static_cast<SystemInformationBlockType8CsfbSupportForDualRxUEsr9*>(items[5]) = systemInformationBlockType8CsfbSupportForDualRxUEsr9; }
	void setCellReselectionParametersHRPDv920(const CellReselectionParametersCDMA2000v920& cellReselectionParametersHRPDv920) { *static_cast<CellReselectionParametersCDMA2000v920*>(items[6]) = cellReselectionParametersHRPDv920; }
	void setCellReselectionParameters1XRTTv920(const CellReselectionParametersCDMA2000v920& cellReselectionParameters1XRTTv920) { *static_cast<CellReselectionParametersCDMA2000v920*>(items[7]) = cellReselectionParameters1XRTTv920; }
	void setCsfbRegistrationParam1XRTTv920(const CSFBRegistrationParam1XRTTv920& csfbRegistrationParam1XRTTv920) { *static_cast<CSFBRegistrationParam1XRTTv920*>(items[8]) = csfbRegistrationParam1XRTTv920; }
	void setAcBarringConfig1XRTTr9(const ACBarringConfig1XRTTr9& acBarringConfig1XRTTr9) { *static_cast<ACBarringConfig1XRTTr9*>(items[9]) = acBarringConfig1XRTTr9; }
	void setSystemInformationBlockType8csfb_DualRxTxSupport_r10(const SystemInformationBlockType8csfb_DualRxTxSupport_r10& systemInformationBlockType8csfb_DualRxTxSupport_r10) { *static_cast<SystemInformationBlockType8csfb_DualRxTxSupport_r10*>(items[10]) = systemInformationBlockType8csfb_DualRxTxSupport_r10; }

	SystemTimeInfoCDMA2000& getSystemTimeInfo() { return *static_cast<SystemTimeInfoCDMA2000*>(items[0]); }
	SystemInformationBlockType8SearchWindowSize& getSystemInformationBlockType8SearchWindowSize() { return *static_cast<SystemInformationBlockType8SearchWindowSize*>(items[1]); }
	SystemInformationBlockType8ParametersHRPD& getSystemInformationBlockType8ParametersHRPD() { return *static_cast<SystemInformationBlockType8ParametersHRPD*>(items[2]); }
	SystemInformationBlockType8Parameters1XRTT& getSystemInformationBlockType8Parameters1XRTT() { return *static_cast<SystemInformationBlockType8Parameters1XRTT*>(items[3]); }
	SystemInformationBlockType8LateNonCriticalExtension& getSystemInformationBlockType8LateNonCriticalExtension() { return *static_cast<SystemInformationBlockType8LateNonCriticalExtension*>(items[4]); }
	SystemInformationBlockType8CsfbSupportForDualRxUEsr9& getSystemInformationBlockType8CsfbSupportForDualRxUEsr9() { return *static_cast<SystemInformationBlockType8CsfbSupportForDualRxUEsr9*>(items[5]); }
	CellReselectionParametersCDMA2000v920& getCellReselectionParametersHRPDv920() { return *static_cast<CellReselectionParametersCDMA2000v920*>(items[6]); }
	CellReselectionParametersCDMA2000v920& getCellReselectionParameters1XRTTv920() { return *static_cast<CellReselectionParametersCDMA2000v920*>(items[7]); }
	CSFBRegistrationParam1XRTTv920& getCsfbRegistrationParam1XRTTv920() { return *static_cast<CSFBRegistrationParam1XRTTv920*>(items[8]); }
	ACBarringConfig1XRTTr9& getAcBarringConfig1XRTTr9() { return *static_cast<ACBarringConfig1XRTTr9*>(items[9]); }
	SystemInformationBlockType8csfb_DualRxTxSupport_r10& getSystemInformationBlockType8csfb_DualRxTxSupport_r10() { return *static_cast<SystemInformationBlockType8csfb_DualRxTxSupport_r10*>(items[10]); }
};

typedef OctetString<CONSTRAINED, 1, 48> SystemInformationBlockType9HnbName;

typedef OctetStringBase SystemInformationBlockType9LateNonCriticalExtension;

class SystemInformationBlockType9 : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SystemInformationBlockType9(): Sequence(&theInfo) {}

	void setSystemInformationBlockType9HnbName(const SystemInformationBlockType9HnbName& systemInformationBlockType9HnbName) { *static_cast<SystemInformationBlockType9HnbName*>(items[0]) = systemInformationBlockType9HnbName; }
	void setSystemInformationBlockType9LateNonCriticalExtension(const SystemInformationBlockType9LateNonCriticalExtension& systemInformationBlockType9LateNonCriticalExtension) { *static_cast<SystemInformationBlockType9LateNonCriticalExtension*>(items[1]) = systemInformationBlockType9LateNonCriticalExtension; }

	SystemInformationBlockType9HnbName& getSystemInformationBlockType9HnbName() { return *static_cast<SystemInformationBlockType9HnbName*>(items[0]); }
	SystemInformationBlockType9LateNonCriticalExtension& getSystemInformationBlockType9LateNonCriticalExtension() { return *static_cast<SystemInformationBlockType9LateNonCriticalExtension*>(items[1]); }
};

typedef BitString<CONSTRAINED, 16, 16> SystemInformationBlockType10MessageIdentifier;

typedef BitString<CONSTRAINED, 16, 16> SystemInformationBlockType10SerialNumber;

typedef OctetString<CONSTRAINED, 2, 2> SystemInformationBlockType10WarningType;

typedef OctetString<CONSTRAINED, 50, 50> SystemInformationBlockType10WarningSecurityInfo;

typedef OctetStringBase SystemInformationBlockType10LateNonCriticalExtension;

class SystemInformationBlockType10 : public Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	SystemInformationBlockType10(): Sequence(&theInfo) {}
	SystemInformationBlockType10(const SystemInformationBlockType10MessageIdentifier& systemInformationBlockType10MessageIdentifier, const SystemInformationBlockType10SerialNumber& systemInformationBlockType10SerialNumber, const SystemInformationBlockType10WarningType& systemInformationBlockType10WarningType);

	void setSystemInformationBlockType10MessageIdentifier(const SystemInformationBlockType10MessageIdentifier& systemInformationBlockType10MessageIdentifier) { *static_cast<SystemInformationBlockType10MessageIdentifier*>(items[0]) = systemInformationBlockType10MessageIdentifier; }
	void setSystemInformationBlockType10SerialNumber(const SystemInformationBlockType10SerialNumber& systemInformationBlockType10SerialNumber) { *static_cast<SystemInformationBlockType10SerialNumber*>(items[1]) = systemInformationBlockType10SerialNumber; }
	void setSystemInformationBlockType10WarningType(const SystemInformationBlockType10WarningType& systemInformationBlockType10WarningType) { *static_cast<SystemInformationBlockType10WarningType*>(items[2]) = systemInformationBlockType10WarningType; }
	void setSystemInformationBlockType10WarningSecurityInfo(const SystemInformationBlockType10WarningSecurityInfo& systemInformationBlockType10WarningSecurityInfo) { *static_cast<SystemInformationBlockType10WarningSecurityInfo*>(items[3]) = systemInformationBlockType10WarningSecurityInfo; }
	void setSystemInformationBlockType10LateNonCriticalExtension(const SystemInformationBlockType10LateNonCriticalExtension& systemInformationBlockType10LateNonCriticalExtension) { *static_cast<SystemInformationBlockType10LateNonCriticalExtension*>(items[4]) = systemInformationBlockType10LateNonCriticalExtension; }

	SystemInformationBlockType10MessageIdentifier& getSystemInformationBlockType10MessageIdentifier() { return *static_cast<SystemInformationBlockType10MessageIdentifier*>(items[0]); }
	SystemInformationBlockType10SerialNumber& getSystemInformationBlockType10SerialNumber() { return *static_cast<SystemInformationBlockType10SerialNumber*>(items[1]); }
	SystemInformationBlockType10WarningType& getSystemInformationBlockType10WarningType() { return *static_cast<SystemInformationBlockType10WarningType*>(items[2]); }
	SystemInformationBlockType10WarningSecurityInfo& getSystemInformationBlockType10WarningSecurityInfo() { return *static_cast<SystemInformationBlockType10WarningSecurityInfo*>(items[3]); }
	SystemInformationBlockType10LateNonCriticalExtension& getSystemInformationBlockType10LateNonCriticalExtension() { return *static_cast<SystemInformationBlockType10LateNonCriticalExtension*>(items[4]); }
};

typedef BitString<CONSTRAINED, 16, 16> SystemInformationBlockType11MessageIdentifier;

typedef BitString<CONSTRAINED, 16, 16> SystemInformationBlockType11SerialNumber;

enum SystemInformationBlockType11warningMessageSegmentTypeValues {
	notLastSegment_SystemInformationBlockType11warningMessageSegmentType = 0,
	lastSegment_SystemInformationBlockType11warningMessageSegmentType = 1,
};
typedef Enumerated<CONSTRAINED, 1> SystemInformationBlockType11warningMessageSegmentType;

typedef Integer<CONSTRAINED, 0, 63> SystemInformationBlockType11WarningMessageSegmentNumber;

typedef OctetStringBase SystemInformationBlockType11WarningMessageSegment;

typedef OctetString<CONSTRAINED, 1, 1> SystemInformationBlockType11DataCodingScheme;

typedef OctetStringBase SystemInformationBlockType11LateNonCriticalExtension;

class SystemInformationBlockType11 : public Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	SystemInformationBlockType11(): Sequence(&theInfo) {}
	SystemInformationBlockType11(const SystemInformationBlockType11MessageIdentifier& systemInformationBlockType11MessageIdentifier, const SystemInformationBlockType11SerialNumber& systemInformationBlockType11SerialNumber, const SystemInformationBlockType11warningMessageSegmentType& systemInformationBlockType11warningMessageSegmentType, const SystemInformationBlockType11WarningMessageSegmentNumber& systemInformationBlockType11WarningMessageSegmentNumber, const SystemInformationBlockType11WarningMessageSegment& systemInformationBlockType11WarningMessageSegment);

	void setSystemInformationBlockType11MessageIdentifier(const SystemInformationBlockType11MessageIdentifier& systemInformationBlockType11MessageIdentifier) { *static_cast<SystemInformationBlockType11MessageIdentifier*>(items[0]) = systemInformationBlockType11MessageIdentifier; }
	void setSystemInformationBlockType11SerialNumber(const SystemInformationBlockType11SerialNumber& systemInformationBlockType11SerialNumber) { *static_cast<SystemInformationBlockType11SerialNumber*>(items[1]) = systemInformationBlockType11SerialNumber; }
	void setSystemInformationBlockType11warningMessageSegmentType(const SystemInformationBlockType11warningMessageSegmentType& systemInformationBlockType11warningMessageSegmentType) { *static_cast<SystemInformationBlockType11warningMessageSegmentType*>(items[2]) = systemInformationBlockType11warningMessageSegmentType; }
	void setSystemInformationBlockType11WarningMessageSegmentNumber(const SystemInformationBlockType11WarningMessageSegmentNumber& systemInformationBlockType11WarningMessageSegmentNumber) { *static_cast<SystemInformationBlockType11WarningMessageSegmentNumber*>(items[3]) = systemInformationBlockType11WarningMessageSegmentNumber; }
	void setSystemInformationBlockType11WarningMessageSegment(const SystemInformationBlockType11WarningMessageSegment& systemInformationBlockType11WarningMessageSegment) { *static_cast<SystemInformationBlockType11WarningMessageSegment*>(items[4]) = systemInformationBlockType11WarningMessageSegment; }
	void setSystemInformationBlockType11DataCodingScheme(const SystemInformationBlockType11DataCodingScheme& systemInformationBlockType11DataCodingScheme) { *static_cast<SystemInformationBlockType11DataCodingScheme*>(items[5]) = systemInformationBlockType11DataCodingScheme; }
	void setSystemInformationBlockType11LateNonCriticalExtension(const SystemInformationBlockType11LateNonCriticalExtension& systemInformationBlockType11LateNonCriticalExtension) { *static_cast<SystemInformationBlockType11LateNonCriticalExtension*>(items[6]) = systemInformationBlockType11LateNonCriticalExtension; }

	SystemInformationBlockType11MessageIdentifier& getSystemInformationBlockType11MessageIdentifier() { return *static_cast<SystemInformationBlockType11MessageIdentifier*>(items[0]); }
	SystemInformationBlockType11SerialNumber& getSystemInformationBlockType11SerialNumber() { return *static_cast<SystemInformationBlockType11SerialNumber*>(items[1]); }
	SystemInformationBlockType11warningMessageSegmentType& getSystemInformationBlockType11warningMessageSegmentType() { return *static_cast<SystemInformationBlockType11warningMessageSegmentType*>(items[2]); }
	SystemInformationBlockType11WarningMessageSegmentNumber& getSystemInformationBlockType11WarningMessageSegmentNumber() { return *static_cast<SystemInformationBlockType11WarningMessageSegmentNumber*>(items[3]); }
	SystemInformationBlockType11WarningMessageSegment& getSystemInformationBlockType11WarningMessageSegment() { return *static_cast<SystemInformationBlockType11WarningMessageSegment*>(items[4]); }
	SystemInformationBlockType11DataCodingScheme& getSystemInformationBlockType11DataCodingScheme() { return *static_cast<SystemInformationBlockType11DataCodingScheme*>(items[5]); }
	SystemInformationBlockType11LateNonCriticalExtension& getSystemInformationBlockType11LateNonCriticalExtension() { return *static_cast<SystemInformationBlockType11LateNonCriticalExtension*>(items[6]); }
};

typedef BitString<CONSTRAINED, 16, 16> SystemInformationBlockType12r9MessageIdentifierr9;

typedef BitString<CONSTRAINED, 16, 16> SystemInformationBlockType12r9SerialNumberr9;

enum SystemInformationBlockType12r9warningMessageSegmentType_r9Values {
	notLastSegment_SystemInformationBlockType12r9warningMessageSegmentType_r9 = 0,
	lastSegment_SystemInformationBlockType12r9warningMessageSegmentType_r9 = 1,
};
typedef Enumerated<CONSTRAINED, 1> SystemInformationBlockType12r9warningMessageSegmentType_r9;

typedef Integer<CONSTRAINED, 0, 63> SystemInformationBlockType12r9WarningMessageSegmentNumberr9;

typedef OctetStringBase SystemInformationBlockType12r9WarningMessageSegmentr9;

typedef OctetString<CONSTRAINED, 1, 1> SystemInformationBlockType12r9DataCodingSchemer9;

typedef OctetStringBase SystemInformationBlockType12r9LateNonCriticalExtension;

class SystemInformationBlockType12r9 : public Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	SystemInformationBlockType12r9(): Sequence(&theInfo) {}
	SystemInformationBlockType12r9(const SystemInformationBlockType12r9MessageIdentifierr9& systemInformationBlockType12r9MessageIdentifierr9, const SystemInformationBlockType12r9SerialNumberr9& systemInformationBlockType12r9SerialNumberr9, const SystemInformationBlockType12r9warningMessageSegmentType_r9& systemInformationBlockType12r9warningMessageSegmentType_r9, const SystemInformationBlockType12r9WarningMessageSegmentNumberr9& systemInformationBlockType12r9WarningMessageSegmentNumberr9, const SystemInformationBlockType12r9WarningMessageSegmentr9& systemInformationBlockType12r9WarningMessageSegmentr9);

	void setSystemInformationBlockType12r9MessageIdentifierr9(const SystemInformationBlockType12r9MessageIdentifierr9& systemInformationBlockType12r9MessageIdentifierr9) { *static_cast<SystemInformationBlockType12r9MessageIdentifierr9*>(items[0]) = systemInformationBlockType12r9MessageIdentifierr9; }
	void setSystemInformationBlockType12r9SerialNumberr9(const SystemInformationBlockType12r9SerialNumberr9& systemInformationBlockType12r9SerialNumberr9) { *static_cast<SystemInformationBlockType12r9SerialNumberr9*>(items[1]) = systemInformationBlockType12r9SerialNumberr9; }
	void setSystemInformationBlockType12r9warningMessageSegmentType_r9(const SystemInformationBlockType12r9warningMessageSegmentType_r9& systemInformationBlockType12r9warningMessageSegmentType_r9) { *static_cast<SystemInformationBlockType12r9warningMessageSegmentType_r9*>(items[2]) = systemInformationBlockType12r9warningMessageSegmentType_r9; }
	void setSystemInformationBlockType12r9WarningMessageSegmentNumberr9(const SystemInformationBlockType12r9WarningMessageSegmentNumberr9& systemInformationBlockType12r9WarningMessageSegmentNumberr9) { *static_cast<SystemInformationBlockType12r9WarningMessageSegmentNumberr9*>(items[3]) = systemInformationBlockType12r9WarningMessageSegmentNumberr9; }
	void setSystemInformationBlockType12r9WarningMessageSegmentr9(const SystemInformationBlockType12r9WarningMessageSegmentr9& systemInformationBlockType12r9WarningMessageSegmentr9) { *static_cast<SystemInformationBlockType12r9WarningMessageSegmentr9*>(items[4]) = systemInformationBlockType12r9WarningMessageSegmentr9; }
	void setSystemInformationBlockType12r9DataCodingSchemer9(const SystemInformationBlockType12r9DataCodingSchemer9& systemInformationBlockType12r9DataCodingSchemer9) { *static_cast<SystemInformationBlockType12r9DataCodingSchemer9*>(items[5]) = systemInformationBlockType12r9DataCodingSchemer9; }
	void setSystemInformationBlockType12r9LateNonCriticalExtension(const SystemInformationBlockType12r9LateNonCriticalExtension& systemInformationBlockType12r9LateNonCriticalExtension) { *static_cast<SystemInformationBlockType12r9LateNonCriticalExtension*>(items[6]) = systemInformationBlockType12r9LateNonCriticalExtension; }

	SystemInformationBlockType12r9MessageIdentifierr9& getSystemInformationBlockType12r9MessageIdentifierr9() { return *static_cast<SystemInformationBlockType12r9MessageIdentifierr9*>(items[0]); }
	SystemInformationBlockType12r9SerialNumberr9& getSystemInformationBlockType12r9SerialNumberr9() { return *static_cast<SystemInformationBlockType12r9SerialNumberr9*>(items[1]); }
	SystemInformationBlockType12r9warningMessageSegmentType_r9& getSystemInformationBlockType12r9warningMessageSegmentType_r9() { return *static_cast<SystemInformationBlockType12r9warningMessageSegmentType_r9*>(items[2]); }
	SystemInformationBlockType12r9WarningMessageSegmentNumberr9& getSystemInformationBlockType12r9WarningMessageSegmentNumberr9() { return *static_cast<SystemInformationBlockType12r9WarningMessageSegmentNumberr9*>(items[3]); }
	SystemInformationBlockType12r9WarningMessageSegmentr9& getSystemInformationBlockType12r9WarningMessageSegmentr9() { return *static_cast<SystemInformationBlockType12r9WarningMessageSegmentr9*>(items[4]); }
	SystemInformationBlockType12r9DataCodingSchemer9& getSystemInformationBlockType12r9DataCodingSchemer9() { return *static_cast<SystemInformationBlockType12r9DataCodingSchemer9*>(items[5]); }
	SystemInformationBlockType12r9LateNonCriticalExtension& getSystemInformationBlockType12r9LateNonCriticalExtension() { return *static_cast<SystemInformationBlockType12r9LateNonCriticalExtension*>(items[6]); }
};

typedef Integer<CONSTRAINED, 0, 255> MBSFNAreaInfor9MbsfnAreaIdr9;

enum MBSFNAreaInfor9non_MBSFNregionLengthValues {
	s1_MBSFNAreaInfor9non_MBSFNregionLength = 0,
	s2_MBSFNAreaInfor9non_MBSFNregionLength = 1,
};
typedef Enumerated<CONSTRAINED, 1> MBSFNAreaInfor9non_MBSFNregionLength;

typedef Integer<CONSTRAINED, 0, 7> MBSFNAreaInfor9NotificationIndicatorr9;

enum MBSFNAreaInfor9McchConfigr9mcch_RepetitionPeriod_r9Values {
	rf32_MBSFNAreaInfor9McchConfigr9mcch_RepetitionPeriod_r9 = 0,
	rf64_MBSFNAreaInfor9McchConfigr9mcch_RepetitionPeriod_r9 = 1,
	rf128_MBSFNAreaInfor9McchConfigr9mcch_RepetitionPeriod_r9 = 2,
	rf256_MBSFNAreaInfor9McchConfigr9mcch_RepetitionPeriod_r9 = 3,
};
typedef Enumerated<CONSTRAINED, 3> MBSFNAreaInfor9McchConfigr9mcch_RepetitionPeriod_r9;

typedef Integer<CONSTRAINED, 0, 10> MBSFNAreaInfor9McchConfigr9McchOffsetr9;

enum MBSFNAreaInfor9McchConfigr9mcch_ModificationPeriod_r9Values {
	rf512_MBSFNAreaInfor9McchConfigr9mcch_ModificationPeriod_r9 = 0,
	rf1024_MBSFNAreaInfor9McchConfigr9mcch_ModificationPeriod_r9 = 1,
};
typedef Enumerated<CONSTRAINED, 1> MBSFNAreaInfor9McchConfigr9mcch_ModificationPeriod_r9;

typedef BitString<CONSTRAINED, 6, 6> MBSFNAreaInfor9McchConfigr9SfAllocInfor9;

enum MBSFNAreaInfor9McchConfigr9signallingMCS_r9Values {
	n2_MBSFNAreaInfor9McchConfigr9signallingMCS_r9 = 0,
	n7_MBSFNAreaInfor9McchConfigr9signallingMCS_r9 = 1,
	n13_MBSFNAreaInfor9McchConfigr9signallingMCS_r9 = 2,
	n19_MBSFNAreaInfor9McchConfigr9signallingMCS_r9 = 3,
};
typedef Enumerated<CONSTRAINED, 3> MBSFNAreaInfor9McchConfigr9signallingMCS_r9;

class MBSFNAreaInfor9McchConfigr9 : public Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	MBSFNAreaInfor9McchConfigr9(): Sequence(&theInfo) {}
	MBSFNAreaInfor9McchConfigr9(const MBSFNAreaInfor9McchConfigr9mcch_RepetitionPeriod_r9& mBSFNAreaInfor9McchConfigr9mcch_RepetitionPeriod_r9, const MBSFNAreaInfor9McchConfigr9McchOffsetr9& mBSFNAreaInfor9McchConfigr9McchOffsetr9, const MBSFNAreaInfor9McchConfigr9mcch_ModificationPeriod_r9& mBSFNAreaInfor9McchConfigr9mcch_ModificationPeriod_r9, const MBSFNAreaInfor9McchConfigr9SfAllocInfor9& mBSFNAreaInfor9McchConfigr9SfAllocInfor9, const MBSFNAreaInfor9McchConfigr9signallingMCS_r9& mBSFNAreaInfor9McchConfigr9signallingMCS_r9);

	void setMBSFNAreaInfor9McchConfigr9mcch_RepetitionPeriod_r9(const MBSFNAreaInfor9McchConfigr9mcch_RepetitionPeriod_r9& mBSFNAreaInfor9McchConfigr9mcch_RepetitionPeriod_r9) { *static_cast<MBSFNAreaInfor9McchConfigr9mcch_RepetitionPeriod_r9*>(items[0]) = mBSFNAreaInfor9McchConfigr9mcch_RepetitionPeriod_r9; }
	void setMBSFNAreaInfor9McchConfigr9McchOffsetr9(const MBSFNAreaInfor9McchConfigr9McchOffsetr9& mBSFNAreaInfor9McchConfigr9McchOffsetr9) { *static_cast<MBSFNAreaInfor9McchConfigr9McchOffsetr9*>(items[1]) = mBSFNAreaInfor9McchConfigr9McchOffsetr9; }
	void setMBSFNAreaInfor9McchConfigr9mcch_ModificationPeriod_r9(const MBSFNAreaInfor9McchConfigr9mcch_ModificationPeriod_r9& mBSFNAreaInfor9McchConfigr9mcch_ModificationPeriod_r9) { *static_cast<MBSFNAreaInfor9McchConfigr9mcch_ModificationPeriod_r9*>(items[2]) = mBSFNAreaInfor9McchConfigr9mcch_ModificationPeriod_r9; }
	void setMBSFNAreaInfor9McchConfigr9SfAllocInfor9(const MBSFNAreaInfor9McchConfigr9SfAllocInfor9& mBSFNAreaInfor9McchConfigr9SfAllocInfor9) { *static_cast<MBSFNAreaInfor9McchConfigr9SfAllocInfor9*>(items[3]) = mBSFNAreaInfor9McchConfigr9SfAllocInfor9; }
	void setMBSFNAreaInfor9McchConfigr9signallingMCS_r9(const MBSFNAreaInfor9McchConfigr9signallingMCS_r9& mBSFNAreaInfor9McchConfigr9signallingMCS_r9) { *static_cast<MBSFNAreaInfor9McchConfigr9signallingMCS_r9*>(items[4]) = mBSFNAreaInfor9McchConfigr9signallingMCS_r9; }

	MBSFNAreaInfor9McchConfigr9mcch_RepetitionPeriod_r9& getMBSFNAreaInfor9McchConfigr9mcch_RepetitionPeriod_r9() { return *static_cast<MBSFNAreaInfor9McchConfigr9mcch_RepetitionPeriod_r9*>(items[0]); }
	MBSFNAreaInfor9McchConfigr9McchOffsetr9& getMBSFNAreaInfor9McchConfigr9McchOffsetr9() { return *static_cast<MBSFNAreaInfor9McchConfigr9McchOffsetr9*>(items[1]); }
	MBSFNAreaInfor9McchConfigr9mcch_ModificationPeriod_r9& getMBSFNAreaInfor9McchConfigr9mcch_ModificationPeriod_r9() { return *static_cast<MBSFNAreaInfor9McchConfigr9mcch_ModificationPeriod_r9*>(items[2]); }
	MBSFNAreaInfor9McchConfigr9SfAllocInfor9& getMBSFNAreaInfor9McchConfigr9SfAllocInfor9() { return *static_cast<MBSFNAreaInfor9McchConfigr9SfAllocInfor9*>(items[3]); }
	MBSFNAreaInfor9McchConfigr9signallingMCS_r9& getMBSFNAreaInfor9McchConfigr9signallingMCS_r9() { return *static_cast<MBSFNAreaInfor9McchConfigr9signallingMCS_r9*>(items[4]); }
};

class MBSFNAreaInfor9 : public Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	MBSFNAreaInfor9(): Sequence(&theInfo) {}
	MBSFNAreaInfor9(const MBSFNAreaInfor9MbsfnAreaIdr9& mBSFNAreaInfor9MbsfnAreaIdr9, const MBSFNAreaInfor9non_MBSFNregionLength& mBSFNAreaInfor9non_MBSFNregionLength, const MBSFNAreaInfor9NotificationIndicatorr9& mBSFNAreaInfor9NotificationIndicatorr9, const MBSFNAreaInfor9McchConfigr9& mBSFNAreaInfor9McchConfigr9);

	void setMBSFNAreaInfor9MbsfnAreaIdr9(const MBSFNAreaInfor9MbsfnAreaIdr9& mBSFNAreaInfor9MbsfnAreaIdr9) { *static_cast<MBSFNAreaInfor9MbsfnAreaIdr9*>(items[0]) = mBSFNAreaInfor9MbsfnAreaIdr9; }
	void setMBSFNAreaInfor9non_MBSFNregionLength(const MBSFNAreaInfor9non_MBSFNregionLength& mBSFNAreaInfor9non_MBSFNregionLength) { *static_cast<MBSFNAreaInfor9non_MBSFNregionLength*>(items[1]) = mBSFNAreaInfor9non_MBSFNregionLength; }
	void setMBSFNAreaInfor9NotificationIndicatorr9(const MBSFNAreaInfor9NotificationIndicatorr9& mBSFNAreaInfor9NotificationIndicatorr9) { *static_cast<MBSFNAreaInfor9NotificationIndicatorr9*>(items[2]) = mBSFNAreaInfor9NotificationIndicatorr9; }
	void setMBSFNAreaInfor9McchConfigr9(const MBSFNAreaInfor9McchConfigr9& mBSFNAreaInfor9McchConfigr9) { *static_cast<MBSFNAreaInfor9McchConfigr9*>(items[3]) = mBSFNAreaInfor9McchConfigr9; }

	MBSFNAreaInfor9MbsfnAreaIdr9& getMBSFNAreaInfor9MbsfnAreaIdr9() { return *static_cast<MBSFNAreaInfor9MbsfnAreaIdr9*>(items[0]); }
	MBSFNAreaInfor9non_MBSFNregionLength& getMBSFNAreaInfor9non_MBSFNregionLength() { return *static_cast<MBSFNAreaInfor9non_MBSFNregionLength*>(items[1]); }
	MBSFNAreaInfor9NotificationIndicatorr9& getMBSFNAreaInfor9NotificationIndicatorr9() { return *static_cast<MBSFNAreaInfor9NotificationIndicatorr9*>(items[2]); }
	MBSFNAreaInfor9McchConfigr9& getMBSFNAreaInfor9McchConfigr9() { return *static_cast<MBSFNAreaInfor9McchConfigr9*>(items[3]); }
};

typedef SequenceOf<MBSFNAreaInfor9, CONSTRAINED, 1, maxMBSFN_Area> MBSFNAreaInfoListr9;

enum MBMSNotificationConfigr9notificationRepetitionCoeff_r9Values {
	n2_MBMSNotificationConfigr9notificationRepetitionCoeff_r9 = 0,
	n4_MBMSNotificationConfigr9notificationRepetitionCoeff_r9 = 1,
};
typedef Enumerated<CONSTRAINED, 1> MBMSNotificationConfigr9notificationRepetitionCoeff_r9;

typedef Integer<CONSTRAINED, 0, 10> MBMSNotificationConfigr9NotificationOffsetr9;

typedef Integer<CONSTRAINED, 1, 6> MBMSNotificationConfigr9NotificationSFIndexr9;

class MBMSNotificationConfigr9 : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	MBMSNotificationConfigr9(): Sequence(&theInfo) {}
	MBMSNotificationConfigr9(const MBMSNotificationConfigr9notificationRepetitionCoeff_r9& mBMSNotificationConfigr9notificationRepetitionCoeff_r9, const MBMSNotificationConfigr9NotificationOffsetr9& mBMSNotificationConfigr9NotificationOffsetr9, const MBMSNotificationConfigr9NotificationSFIndexr9& mBMSNotificationConfigr9NotificationSFIndexr9);

	void setMBMSNotificationConfigr9notificationRepetitionCoeff_r9(const MBMSNotificationConfigr9notificationRepetitionCoeff_r9& mBMSNotificationConfigr9notificationRepetitionCoeff_r9) { *static_cast<MBMSNotificationConfigr9notificationRepetitionCoeff_r9*>(items[0]) = mBMSNotificationConfigr9notificationRepetitionCoeff_r9; }
	void setMBMSNotificationConfigr9NotificationOffsetr9(const MBMSNotificationConfigr9NotificationOffsetr9& mBMSNotificationConfigr9NotificationOffsetr9) { *static_cast<MBMSNotificationConfigr9NotificationOffsetr9*>(items[1]) = mBMSNotificationConfigr9NotificationOffsetr9; }
	void setMBMSNotificationConfigr9NotificationSFIndexr9(const MBMSNotificationConfigr9NotificationSFIndexr9& mBMSNotificationConfigr9NotificationSFIndexr9) { *static_cast<MBMSNotificationConfigr9NotificationSFIndexr9*>(items[2]) = mBMSNotificationConfigr9NotificationSFIndexr9; }

	MBMSNotificationConfigr9notificationRepetitionCoeff_r9& getMBMSNotificationConfigr9notificationRepetitionCoeff_r9() { return *static_cast<MBMSNotificationConfigr9notificationRepetitionCoeff_r9*>(items[0]); }
	MBMSNotificationConfigr9NotificationOffsetr9& getMBMSNotificationConfigr9NotificationOffsetr9() { return *static_cast<MBMSNotificationConfigr9NotificationOffsetr9*>(items[1]); }
	MBMSNotificationConfigr9NotificationSFIndexr9& getMBMSNotificationConfigr9NotificationSFIndexr9() { return *static_cast<MBMSNotificationConfigr9NotificationSFIndexr9*>(items[2]); }
};

typedef OctetStringBase SystemInformationBlockType13r9LateNonCriticalExtension;

class SystemInformationBlockType13r9 : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	SystemInformationBlockType13r9(): Sequence(&theInfo) {}
	SystemInformationBlockType13r9(const MBSFNAreaInfoListr9& mbsfnAreaInfoListr9, const MBMSNotificationConfigr9& notificationConfigr9);

	void setMbsfnAreaInfoListr9(const MBSFNAreaInfoListr9& mbsfnAreaInfoListr9) { *static_cast<MBSFNAreaInfoListr9*>(items[0]) = mbsfnAreaInfoListr9; }
	void setNotificationConfigr9(const MBMSNotificationConfigr9& notificationConfigr9) { *static_cast<MBMSNotificationConfigr9*>(items[1]) = notificationConfigr9; }
	void setSystemInformationBlockType13r9LateNonCriticalExtension(const SystemInformationBlockType13r9LateNonCriticalExtension& systemInformationBlockType13r9LateNonCriticalExtension) { *static_cast<SystemInformationBlockType13r9LateNonCriticalExtension*>(items[2]) = systemInformationBlockType13r9LateNonCriticalExtension; }

	MBSFNAreaInfoListr9& getMbsfnAreaInfoListr9() { return *static_cast<MBSFNAreaInfoListr9*>(items[0]); }
	MBMSNotificationConfigr9& getNotificationConfigr9() { return *static_cast<MBMSNotificationConfigr9*>(items[1]); }
	SystemInformationBlockType13r9LateNonCriticalExtension& getSystemInformationBlockType13r9LateNonCriticalExtension() { return *static_cast<SystemInformationBlockType13r9LateNonCriticalExtension*>(items[2]); }
};

enum AccessStratumReleaseValues {
	rel8_AccessStratumRelease = 0,
	rel9_AccessStratumRelease = 1,
	rel10_AccessStratumRelease = 2,
	spare5_AccessStratumRelease = 3,
	spare4_AccessStratumRelease = 4,
	spare3_AccessStratumRelease = 5,
	spare2_AccessStratumRelease = 6,
	spare1_AccessStratumRelease = 7,
};
typedef Enumerated<EXTCONSTRAINED, 7> AccessStratumRelease;

typedef Integer<CONSTRAINED, 1, 5> UEEUTRACapabilityUeCategory;

typedef Boolean PDCPParametersSupportedROHCProfilesProfile0x0001;

typedef Boolean PDCPParametersSupportedROHCProfilesProfile0x0002;

typedef Boolean PDCPParametersSupportedROHCProfilesProfile0x0003;

typedef Boolean PDCPParametersSupportedROHCProfilesProfile0x0004;

typedef Boolean PDCPParametersSupportedROHCProfilesProfile0x0006;

typedef Boolean PDCPParametersSupportedROHCProfilesProfile0x0101;

typedef Boolean PDCPParametersSupportedROHCProfilesProfile0x0102;

typedef Boolean PDCPParametersSupportedROHCProfilesProfile0x0103;

typedef Boolean PDCPParametersSupportedROHCProfilesProfile0x0104;

class PDCPParametersSupportedROHCProfiles : public Sequence {
private:
	static const void *itemsInfo[9];
	static bool itemsPres[9];
public:
	static const Info theInfo;
	PDCPParametersSupportedROHCProfiles(): Sequence(&theInfo) {}
	PDCPParametersSupportedROHCProfiles(const PDCPParametersSupportedROHCProfilesProfile0x0001& pDCPParametersSupportedROHCProfilesProfile0x0001, const PDCPParametersSupportedROHCProfilesProfile0x0002& pDCPParametersSupportedROHCProfilesProfile0x0002, const PDCPParametersSupportedROHCProfilesProfile0x0003& pDCPParametersSupportedROHCProfilesProfile0x0003, const PDCPParametersSupportedROHCProfilesProfile0x0004& pDCPParametersSupportedROHCProfilesProfile0x0004, const PDCPParametersSupportedROHCProfilesProfile0x0006& pDCPParametersSupportedROHCProfilesProfile0x0006, const PDCPParametersSupportedROHCProfilesProfile0x0101& pDCPParametersSupportedROHCProfilesProfile0x0101, const PDCPParametersSupportedROHCProfilesProfile0x0102& pDCPParametersSupportedROHCProfilesProfile0x0102, const PDCPParametersSupportedROHCProfilesProfile0x0103& pDCPParametersSupportedROHCProfilesProfile0x0103, const PDCPParametersSupportedROHCProfilesProfile0x0104& pDCPParametersSupportedROHCProfilesProfile0x0104);

	void setPDCPParametersSupportedROHCProfilesProfile0x0001(const PDCPParametersSupportedROHCProfilesProfile0x0001& pDCPParametersSupportedROHCProfilesProfile0x0001) { *static_cast<PDCPParametersSupportedROHCProfilesProfile0x0001*>(items[0]) = pDCPParametersSupportedROHCProfilesProfile0x0001; }
	void setPDCPParametersSupportedROHCProfilesProfile0x0002(const PDCPParametersSupportedROHCProfilesProfile0x0002& pDCPParametersSupportedROHCProfilesProfile0x0002) { *static_cast<PDCPParametersSupportedROHCProfilesProfile0x0002*>(items[1]) = pDCPParametersSupportedROHCProfilesProfile0x0002; }
	void setPDCPParametersSupportedROHCProfilesProfile0x0003(const PDCPParametersSupportedROHCProfilesProfile0x0003& pDCPParametersSupportedROHCProfilesProfile0x0003) { *static_cast<PDCPParametersSupportedROHCProfilesProfile0x0003*>(items[2]) = pDCPParametersSupportedROHCProfilesProfile0x0003; }
	void setPDCPParametersSupportedROHCProfilesProfile0x0004(const PDCPParametersSupportedROHCProfilesProfile0x0004& pDCPParametersSupportedROHCProfilesProfile0x0004) { *static_cast<PDCPParametersSupportedROHCProfilesProfile0x0004*>(items[3]) = pDCPParametersSupportedROHCProfilesProfile0x0004; }
	void setPDCPParametersSupportedROHCProfilesProfile0x0006(const PDCPParametersSupportedROHCProfilesProfile0x0006& pDCPParametersSupportedROHCProfilesProfile0x0006) { *static_cast<PDCPParametersSupportedROHCProfilesProfile0x0006*>(items[4]) = pDCPParametersSupportedROHCProfilesProfile0x0006; }
	void setPDCPParametersSupportedROHCProfilesProfile0x0101(const PDCPParametersSupportedROHCProfilesProfile0x0101& pDCPParametersSupportedROHCProfilesProfile0x0101) { *static_cast<PDCPParametersSupportedROHCProfilesProfile0x0101*>(items[5]) = pDCPParametersSupportedROHCProfilesProfile0x0101; }
	void setPDCPParametersSupportedROHCProfilesProfile0x0102(const PDCPParametersSupportedROHCProfilesProfile0x0102& pDCPParametersSupportedROHCProfilesProfile0x0102) { *static_cast<PDCPParametersSupportedROHCProfilesProfile0x0102*>(items[6]) = pDCPParametersSupportedROHCProfilesProfile0x0102; }
	void setPDCPParametersSupportedROHCProfilesProfile0x0103(const PDCPParametersSupportedROHCProfilesProfile0x0103& pDCPParametersSupportedROHCProfilesProfile0x0103) { *static_cast<PDCPParametersSupportedROHCProfilesProfile0x0103*>(items[7]) = pDCPParametersSupportedROHCProfilesProfile0x0103; }
	void setPDCPParametersSupportedROHCProfilesProfile0x0104(const PDCPParametersSupportedROHCProfilesProfile0x0104& pDCPParametersSupportedROHCProfilesProfile0x0104) { *static_cast<PDCPParametersSupportedROHCProfilesProfile0x0104*>(items[8]) = pDCPParametersSupportedROHCProfilesProfile0x0104; }

	PDCPParametersSupportedROHCProfilesProfile0x0001& getPDCPParametersSupportedROHCProfilesProfile0x0001() { return *static_cast<PDCPParametersSupportedROHCProfilesProfile0x0001*>(items[0]); }
	PDCPParametersSupportedROHCProfilesProfile0x0002& getPDCPParametersSupportedROHCProfilesProfile0x0002() { return *static_cast<PDCPParametersSupportedROHCProfilesProfile0x0002*>(items[1]); }
	PDCPParametersSupportedROHCProfilesProfile0x0003& getPDCPParametersSupportedROHCProfilesProfile0x0003() { return *static_cast<PDCPParametersSupportedROHCProfilesProfile0x0003*>(items[2]); }
	PDCPParametersSupportedROHCProfilesProfile0x0004& getPDCPParametersSupportedROHCProfilesProfile0x0004() { return *static_cast<PDCPParametersSupportedROHCProfilesProfile0x0004*>(items[3]); }
	PDCPParametersSupportedROHCProfilesProfile0x0006& getPDCPParametersSupportedROHCProfilesProfile0x0006() { return *static_cast<PDCPParametersSupportedROHCProfilesProfile0x0006*>(items[4]); }
	PDCPParametersSupportedROHCProfilesProfile0x0101& getPDCPParametersSupportedROHCProfilesProfile0x0101() { return *static_cast<PDCPParametersSupportedROHCProfilesProfile0x0101*>(items[5]); }
	PDCPParametersSupportedROHCProfilesProfile0x0102& getPDCPParametersSupportedROHCProfilesProfile0x0102() { return *static_cast<PDCPParametersSupportedROHCProfilesProfile0x0102*>(items[6]); }
	PDCPParametersSupportedROHCProfilesProfile0x0103& getPDCPParametersSupportedROHCProfilesProfile0x0103() { return *static_cast<PDCPParametersSupportedROHCProfilesProfile0x0103*>(items[7]); }
	PDCPParametersSupportedROHCProfilesProfile0x0104& getPDCPParametersSupportedROHCProfilesProfile0x0104() { return *static_cast<PDCPParametersSupportedROHCProfilesProfile0x0104*>(items[8]); }
};

enum PDCPParametersmaxNumberROHC_ContextSessionsValues {
	cs2_PDCPParametersmaxNumberROHC_ContextSessions = 0,
	cs4_PDCPParametersmaxNumberROHC_ContextSessions = 1,
	cs8_PDCPParametersmaxNumberROHC_ContextSessions = 2,
	cs12_PDCPParametersmaxNumberROHC_ContextSessions = 3,
	cs16_PDCPParametersmaxNumberROHC_ContextSessions = 4,
	cs24_PDCPParametersmaxNumberROHC_ContextSessions = 5,
	cs32_PDCPParametersmaxNumberROHC_ContextSessions = 6,
	cs48_PDCPParametersmaxNumberROHC_ContextSessions = 7,
	cs64_PDCPParametersmaxNumberROHC_ContextSessions = 8,
	cs128_PDCPParametersmaxNumberROHC_ContextSessions = 9,
	cs256_PDCPParametersmaxNumberROHC_ContextSessions = 10,
	cs512_PDCPParametersmaxNumberROHC_ContextSessions = 11,
	cs1024_PDCPParametersmaxNumberROHC_ContextSessions = 12,
	cs16384_PDCPParametersmaxNumberROHC_ContextSessions = 13,
	spare2_PDCPParametersmaxNumberROHC_ContextSessions = 14,
	spare1_PDCPParametersmaxNumberROHC_ContextSessions = 15,
};
typedef Enumerated<CONSTRAINED, 15> PDCPParametersmaxNumberROHC_ContextSessions;

class PDCPParameters : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PDCPParameters(): Sequence(&theInfo) {}
	PDCPParameters(const PDCPParametersSupportedROHCProfiles& pDCPParametersSupportedROHCProfiles);

	void setPDCPParametersSupportedROHCProfiles(const PDCPParametersSupportedROHCProfiles& pDCPParametersSupportedROHCProfiles) { *static_cast<PDCPParametersSupportedROHCProfiles*>(items[0]) = pDCPParametersSupportedROHCProfiles; }
	void setPDCPParametersmaxNumberROHC_ContextSessions(const PDCPParametersmaxNumberROHC_ContextSessions& pDCPParametersmaxNumberROHC_ContextSessions) { *static_cast<PDCPParametersmaxNumberROHC_ContextSessions*>(items[1]) = pDCPParametersmaxNumberROHC_ContextSessions; }

	PDCPParametersSupportedROHCProfiles& getPDCPParametersSupportedROHCProfiles() { return *static_cast<PDCPParametersSupportedROHCProfiles*>(items[0]); }
	PDCPParametersmaxNumberROHC_ContextSessions& getPDCPParametersmaxNumberROHC_ContextSessions() { return *static_cast<PDCPParametersmaxNumberROHC_ContextSessions*>(items[1]); }
};

typedef Boolean PhyLayerParametersUeTxAntennaSelectionSupported;

typedef Boolean PhyLayerParametersUeSpecificRefSigsSupported;

class PhyLayerParameters : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PhyLayerParameters(): Sequence(&theInfo) {}
	PhyLayerParameters(const PhyLayerParametersUeTxAntennaSelectionSupported& phyLayerParametersUeTxAntennaSelectionSupported, const PhyLayerParametersUeSpecificRefSigsSupported& phyLayerParametersUeSpecificRefSigsSupported);

	void setPhyLayerParametersUeTxAntennaSelectionSupported(const PhyLayerParametersUeTxAntennaSelectionSupported& phyLayerParametersUeTxAntennaSelectionSupported) { *static_cast<PhyLayerParametersUeTxAntennaSelectionSupported*>(items[0]) = phyLayerParametersUeTxAntennaSelectionSupported; }
	void setPhyLayerParametersUeSpecificRefSigsSupported(const PhyLayerParametersUeSpecificRefSigsSupported& phyLayerParametersUeSpecificRefSigsSupported) { *static_cast<PhyLayerParametersUeSpecificRefSigsSupported*>(items[1]) = phyLayerParametersUeSpecificRefSigsSupported; }

	PhyLayerParametersUeTxAntennaSelectionSupported& getPhyLayerParametersUeTxAntennaSelectionSupported() { return *static_cast<PhyLayerParametersUeTxAntennaSelectionSupported*>(items[0]); }
	PhyLayerParametersUeSpecificRefSigsSupported& getPhyLayerParametersUeSpecificRefSigsSupported() { return *static_cast<PhyLayerParametersUeSpecificRefSigsSupported*>(items[1]); }
};

typedef Integer<CONSTRAINED, 1, 64> SupportedBandEUTRABandEUTRA;

typedef Boolean SupportedBandEUTRAHalfDuplex;

class SupportedBandEUTRA : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SupportedBandEUTRA(): Sequence(&theInfo) {}
	SupportedBandEUTRA(const SupportedBandEUTRABandEUTRA& supportedBandEUTRABandEUTRA, const SupportedBandEUTRAHalfDuplex& supportedBandEUTRAHalfDuplex);

	void setSupportedBandEUTRABandEUTRA(const SupportedBandEUTRABandEUTRA& supportedBandEUTRABandEUTRA) { *static_cast<SupportedBandEUTRABandEUTRA*>(items[0]) = supportedBandEUTRABandEUTRA; }
	void setSupportedBandEUTRAHalfDuplex(const SupportedBandEUTRAHalfDuplex& supportedBandEUTRAHalfDuplex) { *static_cast<SupportedBandEUTRAHalfDuplex*>(items[1]) = supportedBandEUTRAHalfDuplex; }

	SupportedBandEUTRABandEUTRA& getSupportedBandEUTRABandEUTRA() { return *static_cast<SupportedBandEUTRABandEUTRA*>(items[0]); }
	SupportedBandEUTRAHalfDuplex& getSupportedBandEUTRAHalfDuplex() { return *static_cast<SupportedBandEUTRAHalfDuplex*>(items[1]); }
};

typedef SequenceOf<SupportedBandEUTRA, CONSTRAINED, 1, maxBands> SupportedBandListEUTRA;

class RFParameters : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RFParameters(): Sequence(&theInfo) {}
	RFParameters(const SupportedBandListEUTRA& supportedBandListEUTRA);

	void setSupportedBandListEUTRA(const SupportedBandListEUTRA& supportedBandListEUTRA) { *static_cast<SupportedBandListEUTRA*>(items[0]) = supportedBandListEUTRA; }

	SupportedBandListEUTRA& getSupportedBandListEUTRA() { return *static_cast<SupportedBandListEUTRA*>(items[0]); }
};

typedef Boolean InterFreqBandInfoInterFreqNeedForGaps;

class InterFreqBandInfo : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterFreqBandInfo(): Sequence(&theInfo) {}
	InterFreqBandInfo(const InterFreqBandInfoInterFreqNeedForGaps& interFreqBandInfoInterFreqNeedForGaps);

	void setInterFreqBandInfoInterFreqNeedForGaps(const InterFreqBandInfoInterFreqNeedForGaps& interFreqBandInfoInterFreqNeedForGaps) { *static_cast<InterFreqBandInfoInterFreqNeedForGaps*>(items[0]) = interFreqBandInfoInterFreqNeedForGaps; }

	InterFreqBandInfoInterFreqNeedForGaps& getInterFreqBandInfoInterFreqNeedForGaps() { return *static_cast<InterFreqBandInfoInterFreqNeedForGaps*>(items[0]); }
};

typedef SequenceOf<InterFreqBandInfo, CONSTRAINED, 1, maxBands> InterFreqBandList;

typedef Boolean InterRATBandInfoInterRATNeedForGaps;

class InterRATBandInfo : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterRATBandInfo(): Sequence(&theInfo) {}
	InterRATBandInfo(const InterRATBandInfoInterRATNeedForGaps& interRATBandInfoInterRATNeedForGaps);

	void setInterRATBandInfoInterRATNeedForGaps(const InterRATBandInfoInterRATNeedForGaps& interRATBandInfoInterRATNeedForGaps) { *static_cast<InterRATBandInfoInterRATNeedForGaps*>(items[0]) = interRATBandInfoInterRATNeedForGaps; }

	InterRATBandInfoInterRATNeedForGaps& getInterRATBandInfoInterRATNeedForGaps() { return *static_cast<InterRATBandInfoInterRATNeedForGaps*>(items[0]); }
};

typedef SequenceOf<InterRATBandInfo, CONSTRAINED, 1, maxBands> InterRATBandList;

class BandInfoEUTRA : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	BandInfoEUTRA(): Sequence(&theInfo) {}
	BandInfoEUTRA(const InterFreqBandList& interFreqBandList);

	void setInterFreqBandList(const InterFreqBandList& interFreqBandList) { *static_cast<InterFreqBandList*>(items[0]) = interFreqBandList; }
	void setInterRATBandList(const InterRATBandList& interRATBandList) { *static_cast<InterRATBandList*>(items[1]) = interRATBandList; }

	InterFreqBandList& getInterFreqBandList() { return *static_cast<InterFreqBandList*>(items[0]); }
	InterRATBandList& getInterRATBandList() { return *static_cast<InterRATBandList*>(items[1]); }
};

typedef SequenceOf<BandInfoEUTRA, CONSTRAINED, 1, maxBands> BandListEUTRA;

class MeasParameters : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasParameters(): Sequence(&theInfo) {}
	MeasParameters(const BandListEUTRA& bandListEUTRA);

	void setBandListEUTRA(const BandListEUTRA& bandListEUTRA) { *static_cast<BandListEUTRA*>(items[0]) = bandListEUTRA; }

	BandListEUTRA& getBandListEUTRA() { return *static_cast<BandListEUTRA*>(items[0]); }
};

typedef BitString<CONSTRAINED, 32, 32> UEEUTRACapabilityFeatureGroupIndicators;

enum SupportedBandUTRAFDDValues {
	bandI_SupportedBandUTRAFDD = 0,
	bandII_SupportedBandUTRAFDD = 1,
	bandIII_SupportedBandUTRAFDD = 2,
	bandIV_SupportedBandUTRAFDD = 3,
	bandV_SupportedBandUTRAFDD = 4,
	bandVI_SupportedBandUTRAFDD = 5,
	bandVII_SupportedBandUTRAFDD = 6,
	bandVIII_SupportedBandUTRAFDD = 7,
	bandIX_SupportedBandUTRAFDD = 8,
	bandX_SupportedBandUTRAFDD = 9,
	bandXI_SupportedBandUTRAFDD = 10,
	bandXII_SupportedBandUTRAFDD = 11,
	bandXIII_SupportedBandUTRAFDD = 12,
	bandXIV_SupportedBandUTRAFDD = 13,
	bandXV_SupportedBandUTRAFDD = 14,
	bandXVI_SupportedBandUTRAFDD = 15,
	bandXVII_8a0_SupportedBandUTRAFDD = 16,
	bandXVIII_8a0_SupportedBandUTRAFDD = 17,
	bandXIX_8a0_SupportedBandUTRAFDD = 18,
	bandXX_8a0_SupportedBandUTRAFDD = 19,
	bandXXI_8a0_SupportedBandUTRAFDD = 20,
	bandXXII_8a0_SupportedBandUTRAFDD = 21,
	bandXXIII_8a0_SupportedBandUTRAFDD = 22,
	bandXXIV_8a0_SupportedBandUTRAFDD = 23,
	bandXXV_8a0_SupportedBandUTRAFDD = 24,
	bandXXVI_8a0_SupportedBandUTRAFDD = 25,
	bandXXVII_8a0_SupportedBandUTRAFDD = 26,
	bandXXVIII_8a0_SupportedBandUTRAFDD = 27,
	bandXXIX_8a0_SupportedBandUTRAFDD = 28,
	bandXXX_8a0_SupportedBandUTRAFDD = 29,
	bandXXXI_8a0_SupportedBandUTRAFDD = 30,
	bandXXXII_8a0_SupportedBandUTRAFDD = 31,
};
typedef Enumerated<CONSTRAINED, 31> SupportedBandUTRAFDD;

typedef SequenceOf<SupportedBandUTRAFDD, CONSTRAINED, 1, maxBands> SupportedBandListUTRAFDD;

class IRATParametersUTRAFDD : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IRATParametersUTRAFDD(): Sequence(&theInfo) {}
	IRATParametersUTRAFDD(const SupportedBandListUTRAFDD& supportedBandListUTRAFDD);

	void setSupportedBandListUTRAFDD(const SupportedBandListUTRAFDD& supportedBandListUTRAFDD) { *static_cast<SupportedBandListUTRAFDD*>(items[0]) = supportedBandListUTRAFDD; }

	SupportedBandListUTRAFDD& getSupportedBandListUTRAFDD() { return *static_cast<SupportedBandListUTRAFDD*>(items[0]); }
};

enum SupportedBandUTRATDD128Values {
	a_SupportedBandUTRATDD128 = 0,
	b_SupportedBandUTRATDD128 = 1,
	c_SupportedBandUTRATDD128 = 2,
	d_SupportedBandUTRATDD128 = 3,
	e_SupportedBandUTRATDD128 = 4,
	f_SupportedBandUTRATDD128 = 5,
	g_SupportedBandUTRATDD128 = 6,
	h_SupportedBandUTRATDD128 = 7,
	i_SupportedBandUTRATDD128 = 8,
	j_SupportedBandUTRATDD128 = 9,
	k_SupportedBandUTRATDD128 = 10,
	l_SupportedBandUTRATDD128 = 11,
	m_SupportedBandUTRATDD128 = 12,
	n_SupportedBandUTRATDD128 = 13,
	o_SupportedBandUTRATDD128 = 14,
	p_SupportedBandUTRATDD128 = 15,
};
typedef Enumerated<EXTCONSTRAINED, 15> SupportedBandUTRATDD128;

typedef SequenceOf<SupportedBandUTRATDD128, CONSTRAINED, 1, maxBands> SupportedBandListUTRATDD128;

class IRATParametersUTRATDD128 : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IRATParametersUTRATDD128(): Sequence(&theInfo) {}
	IRATParametersUTRATDD128(const SupportedBandListUTRATDD128& supportedBandListUTRATDD128);

	void setSupportedBandListUTRATDD128(const SupportedBandListUTRATDD128& supportedBandListUTRATDD128) { *static_cast<SupportedBandListUTRATDD128*>(items[0]) = supportedBandListUTRATDD128; }

	SupportedBandListUTRATDD128& getSupportedBandListUTRATDD128() { return *static_cast<SupportedBandListUTRATDD128*>(items[0]); }
};

enum SupportedBandUTRATDD384Values {
	a_SupportedBandUTRATDD384 = 0,
	b_SupportedBandUTRATDD384 = 1,
	c_SupportedBandUTRATDD384 = 2,
	d_SupportedBandUTRATDD384 = 3,
	e_SupportedBandUTRATDD384 = 4,
	f_SupportedBandUTRATDD384 = 5,
	g_SupportedBandUTRATDD384 = 6,
	h_SupportedBandUTRATDD384 = 7,
	i_SupportedBandUTRATDD384 = 8,
	j_SupportedBandUTRATDD384 = 9,
	k_SupportedBandUTRATDD384 = 10,
	l_SupportedBandUTRATDD384 = 11,
	m_SupportedBandUTRATDD384 = 12,
	n_SupportedBandUTRATDD384 = 13,
	o_SupportedBandUTRATDD384 = 14,
	p_SupportedBandUTRATDD384 = 15,
};
typedef Enumerated<EXTCONSTRAINED, 15> SupportedBandUTRATDD384;

typedef SequenceOf<SupportedBandUTRATDD384, CONSTRAINED, 1, maxBands> SupportedBandListUTRATDD384;

class IRATParametersUTRATDD384 : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IRATParametersUTRATDD384(): Sequence(&theInfo) {}
	IRATParametersUTRATDD384(const SupportedBandListUTRATDD384& supportedBandListUTRATDD384);

	void setSupportedBandListUTRATDD384(const SupportedBandListUTRATDD384& supportedBandListUTRATDD384) { *static_cast<SupportedBandListUTRATDD384*>(items[0]) = supportedBandListUTRATDD384; }

	SupportedBandListUTRATDD384& getSupportedBandListUTRATDD384() { return *static_cast<SupportedBandListUTRATDD384*>(items[0]); }
};

enum SupportedBandUTRATDD768Values {
	a_SupportedBandUTRATDD768 = 0,
	b_SupportedBandUTRATDD768 = 1,
	c_SupportedBandUTRATDD768 = 2,
	d_SupportedBandUTRATDD768 = 3,
	e_SupportedBandUTRATDD768 = 4,
	f_SupportedBandUTRATDD768 = 5,
	g_SupportedBandUTRATDD768 = 6,
	h_SupportedBandUTRATDD768 = 7,
	i_SupportedBandUTRATDD768 = 8,
	j_SupportedBandUTRATDD768 = 9,
	k_SupportedBandUTRATDD768 = 10,
	l_SupportedBandUTRATDD768 = 11,
	m_SupportedBandUTRATDD768 = 12,
	n_SupportedBandUTRATDD768 = 13,
	o_SupportedBandUTRATDD768 = 14,
	p_SupportedBandUTRATDD768 = 15,
};
typedef Enumerated<EXTCONSTRAINED, 15> SupportedBandUTRATDD768;

typedef SequenceOf<SupportedBandUTRATDD768, CONSTRAINED, 1, maxBands> SupportedBandListUTRATDD768;

class IRATParametersUTRATDD768 : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IRATParametersUTRATDD768(): Sequence(&theInfo) {}
	IRATParametersUTRATDD768(const SupportedBandListUTRATDD768& supportedBandListUTRATDD768);

	void setSupportedBandListUTRATDD768(const SupportedBandListUTRATDD768& supportedBandListUTRATDD768) { *static_cast<SupportedBandListUTRATDD768*>(items[0]) = supportedBandListUTRATDD768; }

	SupportedBandListUTRATDD768& getSupportedBandListUTRATDD768() { return *static_cast<SupportedBandListUTRATDD768*>(items[0]); }
};

enum SupportedBandGERANValues {
	gsm450_SupportedBandGERAN = 0,
	gsm480_SupportedBandGERAN = 1,
	gsm710_SupportedBandGERAN = 2,
	gsm750_SupportedBandGERAN = 3,
	gsm810_SupportedBandGERAN = 4,
	gsm850_SupportedBandGERAN = 5,
	gsm900P_SupportedBandGERAN = 6,
	gsm900E_SupportedBandGERAN = 7,
	gsm900R_SupportedBandGERAN = 8,
	gsm1800_SupportedBandGERAN = 9,
	gsm1900_SupportedBandGERAN = 10,
	spare5_SupportedBandGERAN = 11,
	spare4_SupportedBandGERAN = 12,
	spare3_SupportedBandGERAN = 13,
	spare2_SupportedBandGERAN = 14,
	spare1_SupportedBandGERAN = 15,
};
typedef Enumerated<EXTCONSTRAINED, 15> SupportedBandGERAN;

typedef SequenceOf<SupportedBandGERAN, CONSTRAINED, 1, maxBands> SupportedBandListGERAN;

typedef Boolean IRATParametersGERANInterRATPSHOToGERAN;

class IRATParametersGERAN : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	IRATParametersGERAN(): Sequence(&theInfo) {}
	IRATParametersGERAN(const SupportedBandListGERAN& supportedBandListGERAN, const IRATParametersGERANInterRATPSHOToGERAN& iRATParametersGERANInterRATPSHOToGERAN);

	void setSupportedBandListGERAN(const SupportedBandListGERAN& supportedBandListGERAN) { *static_cast<SupportedBandListGERAN*>(items[0]) = supportedBandListGERAN; }
	void setIRATParametersGERANInterRATPSHOToGERAN(const IRATParametersGERANInterRATPSHOToGERAN& iRATParametersGERANInterRATPSHOToGERAN) { *static_cast<IRATParametersGERANInterRATPSHOToGERAN*>(items[1]) = iRATParametersGERANInterRATPSHOToGERAN; }

	SupportedBandListGERAN& getSupportedBandListGERAN() { return *static_cast<SupportedBandListGERAN*>(items[0]); }
	IRATParametersGERANInterRATPSHOToGERAN& getIRATParametersGERANInterRATPSHOToGERAN() { return *static_cast<IRATParametersGERANInterRATPSHOToGERAN*>(items[1]); }
};

typedef SequenceOf<BandclassCDMA2000, CONSTRAINED, 1, maxCDMA_BandClass> SupportedBandListHRPD;

enum IRATParametersCDMA2000HRPDtx_ConfigHRPDValues {
	single_IRATParametersCDMA2000HRPDtx_ConfigHRPD = 0,
	dual_IRATParametersCDMA2000HRPDtx_ConfigHRPD = 1,
};
typedef Enumerated<CONSTRAINED, 1> IRATParametersCDMA2000HRPDtx_ConfigHRPD;

enum IRATParametersCDMA2000HRPDrx_ConfigHRPDValues {
	single_IRATParametersCDMA2000HRPDrx_ConfigHRPD = 0,
	dual_IRATParametersCDMA2000HRPDrx_ConfigHRPD = 1,
};
typedef Enumerated<CONSTRAINED, 1> IRATParametersCDMA2000HRPDrx_ConfigHRPD;

class IRATParametersCDMA2000HRPD : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	IRATParametersCDMA2000HRPD(): Sequence(&theInfo) {}
	IRATParametersCDMA2000HRPD(const SupportedBandListHRPD& supportedBandListHRPD, const IRATParametersCDMA2000HRPDtx_ConfigHRPD& iRATParametersCDMA2000HRPDtx_ConfigHRPD, const IRATParametersCDMA2000HRPDrx_ConfigHRPD& iRATParametersCDMA2000HRPDrx_ConfigHRPD);

	void setSupportedBandListHRPD(const SupportedBandListHRPD& supportedBandListHRPD) { *static_cast<SupportedBandListHRPD*>(items[0]) = supportedBandListHRPD; }
	void setIRATParametersCDMA2000HRPDtx_ConfigHRPD(const IRATParametersCDMA2000HRPDtx_ConfigHRPD& iRATParametersCDMA2000HRPDtx_ConfigHRPD) { *static_cast<IRATParametersCDMA2000HRPDtx_ConfigHRPD*>(items[1]) = iRATParametersCDMA2000HRPDtx_ConfigHRPD; }
	void setIRATParametersCDMA2000HRPDrx_ConfigHRPD(const IRATParametersCDMA2000HRPDrx_ConfigHRPD& iRATParametersCDMA2000HRPDrx_ConfigHRPD) { *static_cast<IRATParametersCDMA2000HRPDrx_ConfigHRPD*>(items[2]) = iRATParametersCDMA2000HRPDrx_ConfigHRPD; }

	SupportedBandListHRPD& getSupportedBandListHRPD() { return *static_cast<SupportedBandListHRPD*>(items[0]); }
	IRATParametersCDMA2000HRPDtx_ConfigHRPD& getIRATParametersCDMA2000HRPDtx_ConfigHRPD() { return *static_cast<IRATParametersCDMA2000HRPDtx_ConfigHRPD*>(items[1]); }
	IRATParametersCDMA2000HRPDrx_ConfigHRPD& getIRATParametersCDMA2000HRPDrx_ConfigHRPD() { return *static_cast<IRATParametersCDMA2000HRPDrx_ConfigHRPD*>(items[2]); }
};

typedef SequenceOf<BandclassCDMA2000, CONSTRAINED, 1, maxCDMA_BandClass> SupportedBandList1XRTT;

enum IRATParametersCDMA20001XRTTtx_Config1XRTTValues {
	single_IRATParametersCDMA20001XRTTtx_Config1XRTT = 0,
	dual_IRATParametersCDMA20001XRTTtx_Config1XRTT = 1,
};
typedef Enumerated<CONSTRAINED, 1> IRATParametersCDMA20001XRTTtx_Config1XRTT;

enum IRATParametersCDMA20001XRTTrx_Config1XRTTValues {
	single_IRATParametersCDMA20001XRTTrx_Config1XRTT = 0,
	dual_IRATParametersCDMA20001XRTTrx_Config1XRTT = 1,
};
typedef Enumerated<CONSTRAINED, 1> IRATParametersCDMA20001XRTTrx_Config1XRTT;

class IRATParametersCDMA20001XRTT : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	IRATParametersCDMA20001XRTT(): Sequence(&theInfo) {}
	IRATParametersCDMA20001XRTT(const SupportedBandList1XRTT& supportedBandList1XRTT, const IRATParametersCDMA20001XRTTtx_Config1XRTT& iRATParametersCDMA20001XRTTtx_Config1XRTT, const IRATParametersCDMA20001XRTTrx_Config1XRTT& iRATParametersCDMA20001XRTTrx_Config1XRTT);

	void setSupportedBandList1XRTT(const SupportedBandList1XRTT& supportedBandList1XRTT) { *static_cast<SupportedBandList1XRTT*>(items[0]) = supportedBandList1XRTT; }
	void setIRATParametersCDMA20001XRTTtx_Config1XRTT(const IRATParametersCDMA20001XRTTtx_Config1XRTT& iRATParametersCDMA20001XRTTtx_Config1XRTT) { *static_cast<IRATParametersCDMA20001XRTTtx_Config1XRTT*>(items[1]) = iRATParametersCDMA20001XRTTtx_Config1XRTT; }
	void setIRATParametersCDMA20001XRTTrx_Config1XRTT(const IRATParametersCDMA20001XRTTrx_Config1XRTT& iRATParametersCDMA20001XRTTrx_Config1XRTT) { *static_cast<IRATParametersCDMA20001XRTTrx_Config1XRTT*>(items[2]) = iRATParametersCDMA20001XRTTrx_Config1XRTT; }

	SupportedBandList1XRTT& getSupportedBandList1XRTT() { return *static_cast<SupportedBandList1XRTT*>(items[0]); }
	IRATParametersCDMA20001XRTTtx_Config1XRTT& getIRATParametersCDMA20001XRTTtx_Config1XRTT() { return *static_cast<IRATParametersCDMA20001XRTTtx_Config1XRTT*>(items[1]); }
	IRATParametersCDMA20001XRTTrx_Config1XRTT& getIRATParametersCDMA20001XRTTrx_Config1XRTT() { return *static_cast<IRATParametersCDMA20001XRTTrx_Config1XRTT*>(items[2]); }
};

class UEEUTRACapabilityInterRATParameters : public Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	UEEUTRACapabilityInterRATParameters(): Sequence(&theInfo) {}

	void setUtraFDD(const IRATParametersUTRAFDD& utraFDD) { *static_cast<IRATParametersUTRAFDD*>(items[0]) = utraFDD; }
	void setUtraTDD128(const IRATParametersUTRATDD128& utraTDD128) { *static_cast<IRATParametersUTRATDD128*>(items[1]) = utraTDD128; }
	void setUtraTDD384(const IRATParametersUTRATDD384& utraTDD384) { *static_cast<IRATParametersUTRATDD384*>(items[2]) = utraTDD384; }
	void setUtraTDD768(const IRATParametersUTRATDD768& utraTDD768) { *static_cast<IRATParametersUTRATDD768*>(items[3]) = utraTDD768; }
	void setGeran(const IRATParametersGERAN& geran) { *static_cast<IRATParametersGERAN*>(items[4]) = geran; }
	void setCdma2000HRPD(const IRATParametersCDMA2000HRPD& cdma2000HRPD) { *static_cast<IRATParametersCDMA2000HRPD*>(items[5]) = cdma2000HRPD; }
	void setCdma20001xRTT(const IRATParametersCDMA20001XRTT& cdma20001xRTT) { *static_cast<IRATParametersCDMA20001XRTT*>(items[6]) = cdma20001xRTT; }

	IRATParametersUTRAFDD& getUtraFDD() { return *static_cast<IRATParametersUTRAFDD*>(items[0]); }
	IRATParametersUTRATDD128& getUtraTDD128() { return *static_cast<IRATParametersUTRATDD128*>(items[1]); }
	IRATParametersUTRATDD384& getUtraTDD384() { return *static_cast<IRATParametersUTRATDD384*>(items[2]); }
	IRATParametersUTRATDD768& getUtraTDD768() { return *static_cast<IRATParametersUTRATDD768*>(items[3]); }
	IRATParametersGERAN& getGeran() { return *static_cast<IRATParametersGERAN*>(items[4]); }
	IRATParametersCDMA2000HRPD& getCdma2000HRPD() { return *static_cast<IRATParametersCDMA2000HRPD*>(items[5]); }
	IRATParametersCDMA20001XRTT& getCdma20001xRTT() { return *static_cast<IRATParametersCDMA20001XRTT*>(items[6]); }
};

enum PhyLayerParametersv920enhancedDualLayerFDD_r9Values {
	supported_PhyLayerParametersv920enhancedDualLayerFDD_r9 = 0,
};
typedef Enumerated<CONSTRAINED, 0> PhyLayerParametersv920enhancedDualLayerFDD_r9;

enum PhyLayerParametersv920enhancedDualLayerTDD_r9Values {
	supported_PhyLayerParametersv920enhancedDualLayerTDD_r9 = 0,
};
typedef Enumerated<CONSTRAINED, 0> PhyLayerParametersv920enhancedDualLayerTDD_r9;

class PhyLayerParametersv920 : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PhyLayerParametersv920(): Sequence(&theInfo) {}

	void setPhyLayerParametersv920enhancedDualLayerFDD_r9(const PhyLayerParametersv920enhancedDualLayerFDD_r9& phyLayerParametersv920enhancedDualLayerFDD_r9) { *static_cast<PhyLayerParametersv920enhancedDualLayerFDD_r9*>(items[0]) = phyLayerParametersv920enhancedDualLayerFDD_r9; }
	void setPhyLayerParametersv920enhancedDualLayerTDD_r9(const PhyLayerParametersv920enhancedDualLayerTDD_r9& phyLayerParametersv920enhancedDualLayerTDD_r9) { *static_cast<PhyLayerParametersv920enhancedDualLayerTDD_r9*>(items[1]) = phyLayerParametersv920enhancedDualLayerTDD_r9; }

	PhyLayerParametersv920enhancedDualLayerFDD_r9& getPhyLayerParametersv920enhancedDualLayerFDD_r9() { return *static_cast<PhyLayerParametersv920enhancedDualLayerFDD_r9*>(items[0]); }
	PhyLayerParametersv920enhancedDualLayerTDD_r9& getPhyLayerParametersv920enhancedDualLayerTDD_r9() { return *static_cast<PhyLayerParametersv920enhancedDualLayerTDD_r9*>(items[1]); }
};

enum IRATParametersGERANv920dtm_r9Values {
	supported_IRATParametersGERANv920dtm_r9 = 0,
};
typedef Enumerated<CONSTRAINED, 0> IRATParametersGERANv920dtm_r9;

enum IRATParametersGERANv920e_RedirectionGERAN_r9Values {
	supported_IRATParametersGERANv920e_RedirectionGERAN_r9 = 0,
};
typedef Enumerated<CONSTRAINED, 0> IRATParametersGERANv920e_RedirectionGERAN_r9;

class IRATParametersGERANv920 : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	IRATParametersGERANv920(): Sequence(&theInfo) {}

	void setIRATParametersGERANv920dtm_r9(const IRATParametersGERANv920dtm_r9& iRATParametersGERANv920dtm_r9) { *static_cast<IRATParametersGERANv920dtm_r9*>(items[0]) = iRATParametersGERANv920dtm_r9; }
	void setIRATParametersGERANv920e_RedirectionGERAN_r9(const IRATParametersGERANv920e_RedirectionGERAN_r9& iRATParametersGERANv920e_RedirectionGERAN_r9) { *static_cast<IRATParametersGERANv920e_RedirectionGERAN_r9*>(items[1]) = iRATParametersGERANv920e_RedirectionGERAN_r9; }

	IRATParametersGERANv920dtm_r9& getIRATParametersGERANv920dtm_r9() { return *static_cast<IRATParametersGERANv920dtm_r9*>(items[0]); }
	IRATParametersGERANv920e_RedirectionGERAN_r9& getIRATParametersGERANv920e_RedirectionGERAN_r9() { return *static_cast<IRATParametersGERANv920e_RedirectionGERAN_r9*>(items[1]); }
};

enum IRATParametersUTRAv920e_RedirectionUTRA_r9Values {
	supported_IRATParametersUTRAv920e_RedirectionUTRA_r9 = 0,
};
typedef Enumerated<CONSTRAINED, 0> IRATParametersUTRAv920e_RedirectionUTRA_r9;

class IRATParametersUTRAv920 : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IRATParametersUTRAv920(): Sequence(&theInfo) {}
	IRATParametersUTRAv920(const IRATParametersUTRAv920e_RedirectionUTRA_r9& iRATParametersUTRAv920e_RedirectionUTRA_r9);

	void setIRATParametersUTRAv920e_RedirectionUTRA_r9(const IRATParametersUTRAv920e_RedirectionUTRA_r9& iRATParametersUTRAv920e_RedirectionUTRA_r9) { *static_cast<IRATParametersUTRAv920e_RedirectionUTRA_r9*>(items[0]) = iRATParametersUTRAv920e_RedirectionUTRA_r9; }

	IRATParametersUTRAv920e_RedirectionUTRA_r9& getIRATParametersUTRAv920e_RedirectionUTRA_r9() { return *static_cast<IRATParametersUTRAv920e_RedirectionUTRA_r9*>(items[0]); }
};

enum IRATParametersCDMA20001XRTTv920e_CSFB_1XRTT_r9Values {
	supported_IRATParametersCDMA20001XRTTv920e_CSFB_1XRTT_r9 = 0,
};
typedef Enumerated<CONSTRAINED, 0> IRATParametersCDMA20001XRTTv920e_CSFB_1XRTT_r9;

enum IRATParametersCDMA20001XRTTv920e_CSFB_ConcPS_Mob1XRTT_r9Values {
	supported_IRATParametersCDMA20001XRTTv920e_CSFB_ConcPS_Mob1XRTT_r9 = 0,
};
typedef Enumerated<CONSTRAINED, 0> IRATParametersCDMA20001XRTTv920e_CSFB_ConcPS_Mob1XRTT_r9;

class IRATParametersCDMA20001XRTTv920 : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	IRATParametersCDMA20001XRTTv920(): Sequence(&theInfo) {}
	IRATParametersCDMA20001XRTTv920(const IRATParametersCDMA20001XRTTv920e_CSFB_1XRTT_r9& iRATParametersCDMA20001XRTTv920e_CSFB_1XRTT_r9);

	void setIRATParametersCDMA20001XRTTv920e_CSFB_1XRTT_r9(const IRATParametersCDMA20001XRTTv920e_CSFB_1XRTT_r9& iRATParametersCDMA20001XRTTv920e_CSFB_1XRTT_r9) { *static_cast<IRATParametersCDMA20001XRTTv920e_CSFB_1XRTT_r9*>(items[0]) = iRATParametersCDMA20001XRTTv920e_CSFB_1XRTT_r9; }
	void setIRATParametersCDMA20001XRTTv920e_CSFB_ConcPS_Mob1XRTT_r9(const IRATParametersCDMA20001XRTTv920e_CSFB_ConcPS_Mob1XRTT_r9& iRATParametersCDMA20001XRTTv920e_CSFB_ConcPS_Mob1XRTT_r9) { *static_cast<IRATParametersCDMA20001XRTTv920e_CSFB_ConcPS_Mob1XRTT_r9*>(items[1]) = iRATParametersCDMA20001XRTTv920e_CSFB_ConcPS_Mob1XRTT_r9; }

	IRATParametersCDMA20001XRTTv920e_CSFB_1XRTT_r9& getIRATParametersCDMA20001XRTTv920e_CSFB_1XRTT_r9() { return *static_cast<IRATParametersCDMA20001XRTTv920e_CSFB_1XRTT_r9*>(items[0]); }
	IRATParametersCDMA20001XRTTv920e_CSFB_ConcPS_Mob1XRTT_r9& getIRATParametersCDMA20001XRTTv920e_CSFB_ConcPS_Mob1XRTT_r9() { return *static_cast<IRATParametersCDMA20001XRTTv920e_CSFB_ConcPS_Mob1XRTT_r9*>(items[1]); }
};

enum UEEUTRACapabilityv920IEsdeviceType_r9Values {
	noBenFromBatConsumpOpt_UEEUTRACapabilityv920IEsdeviceType_r9 = 0,
};
typedef Enumerated<CONSTRAINED, 0> UEEUTRACapabilityv920IEsdeviceType_r9;

enum CSGProximityIndicationParametersr9intraFreqProximityIndication_r9Values {
	supported_CSGProximityIndicationParametersr9intraFreqProximityIndication_r9 = 0,
};
typedef Enumerated<CONSTRAINED, 0> CSGProximityIndicationParametersr9intraFreqProximityIndication_r9;

enum CSGProximityIndicationParametersr9interFreqProximityIndication_r9Values {
	supported_CSGProximityIndicationParametersr9interFreqProximityIndication_r9 = 0,
};
typedef Enumerated<CONSTRAINED, 0> CSGProximityIndicationParametersr9interFreqProximityIndication_r9;

enum CSGProximityIndicationParametersr9utran_ProximityIndication_r9Values {
	supported_CSGProximityIndicationParametersr9utran_ProximityIndication_r9 = 0,
};
typedef Enumerated<CONSTRAINED, 0> CSGProximityIndicationParametersr9utran_ProximityIndication_r9;

class CSGProximityIndicationParametersr9 : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	CSGProximityIndicationParametersr9(): Sequence(&theInfo) {}

	void setCSGProximityIndicationParametersr9intraFreqProximityIndication_r9(const CSGProximityIndicationParametersr9intraFreqProximityIndication_r9& cSGProximityIndicationParametersr9intraFreqProximityIndication_r9) { *static_cast<CSGProximityIndicationParametersr9intraFreqProximityIndication_r9*>(items[0]) = cSGProximityIndicationParametersr9intraFreqProximityIndication_r9; }
	void setCSGProximityIndicationParametersr9interFreqProximityIndication_r9(const CSGProximityIndicationParametersr9interFreqProximityIndication_r9& cSGProximityIndicationParametersr9interFreqProximityIndication_r9) { *static_cast<CSGProximityIndicationParametersr9interFreqProximityIndication_r9*>(items[1]) = cSGProximityIndicationParametersr9interFreqProximityIndication_r9; }
	void setCSGProximityIndicationParametersr9utran_ProximityIndication_r9(const CSGProximityIndicationParametersr9utran_ProximityIndication_r9& cSGProximityIndicationParametersr9utran_ProximityIndication_r9) { *static_cast<CSGProximityIndicationParametersr9utran_ProximityIndication_r9*>(items[2]) = cSGProximityIndicationParametersr9utran_ProximityIndication_r9; }

	CSGProximityIndicationParametersr9intraFreqProximityIndication_r9& getCSGProximityIndicationParametersr9intraFreqProximityIndication_r9() { return *static_cast<CSGProximityIndicationParametersr9intraFreqProximityIndication_r9*>(items[0]); }
	CSGProximityIndicationParametersr9interFreqProximityIndication_r9& getCSGProximityIndicationParametersr9interFreqProximityIndication_r9() { return *static_cast<CSGProximityIndicationParametersr9interFreqProximityIndication_r9*>(items[1]); }
	CSGProximityIndicationParametersr9utran_ProximityIndication_r9& getCSGProximityIndicationParametersr9utran_ProximityIndication_r9() { return *static_cast<CSGProximityIndicationParametersr9utran_ProximityIndication_r9*>(items[2]); }
};

enum NeighCellSIAcquisitionParametersr9intraFreqSI_AcquisitionForHO_r9Values {
	supported_NeighCellSIAcquisitionParametersr9intraFreqSI_AcquisitionForHO_r9 = 0,
};
typedef Enumerated<CONSTRAINED, 0> NeighCellSIAcquisitionParametersr9intraFreqSI_AcquisitionForHO_r9;

enum NeighCellSIAcquisitionParametersr9interFreqSI_AcquisitionForHO_r9Values {
	supported_NeighCellSIAcquisitionParametersr9interFreqSI_AcquisitionForHO_r9 = 0,
};
typedef Enumerated<CONSTRAINED, 0> NeighCellSIAcquisitionParametersr9interFreqSI_AcquisitionForHO_r9;

enum NeighCellSIAcquisitionParametersr9utran_SI_AcquisitionForHO_r9Values {
	supported_NeighCellSIAcquisitionParametersr9utran_SI_AcquisitionForHO_r9 = 0,
};
typedef Enumerated<CONSTRAINED, 0> NeighCellSIAcquisitionParametersr9utran_SI_AcquisitionForHO_r9;

class NeighCellSIAcquisitionParametersr9 : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	NeighCellSIAcquisitionParametersr9(): Sequence(&theInfo) {}

	void setNeighCellSIAcquisitionParametersr9intraFreqSI_AcquisitionForHO_r9(const NeighCellSIAcquisitionParametersr9intraFreqSI_AcquisitionForHO_r9& neighCellSIAcquisitionParametersr9intraFreqSI_AcquisitionForHO_r9) { *static_cast<NeighCellSIAcquisitionParametersr9intraFreqSI_AcquisitionForHO_r9*>(items[0]) = neighCellSIAcquisitionParametersr9intraFreqSI_AcquisitionForHO_r9; }
	void setNeighCellSIAcquisitionParametersr9interFreqSI_AcquisitionForHO_r9(const NeighCellSIAcquisitionParametersr9interFreqSI_AcquisitionForHO_r9& neighCellSIAcquisitionParametersr9interFreqSI_AcquisitionForHO_r9) { *static_cast<NeighCellSIAcquisitionParametersr9interFreqSI_AcquisitionForHO_r9*>(items[1]) = neighCellSIAcquisitionParametersr9interFreqSI_AcquisitionForHO_r9; }
	void setNeighCellSIAcquisitionParametersr9utran_SI_AcquisitionForHO_r9(const NeighCellSIAcquisitionParametersr9utran_SI_AcquisitionForHO_r9& neighCellSIAcquisitionParametersr9utran_SI_AcquisitionForHO_r9) { *static_cast<NeighCellSIAcquisitionParametersr9utran_SI_AcquisitionForHO_r9*>(items[2]) = neighCellSIAcquisitionParametersr9utran_SI_AcquisitionForHO_r9; }

	NeighCellSIAcquisitionParametersr9intraFreqSI_AcquisitionForHO_r9& getNeighCellSIAcquisitionParametersr9intraFreqSI_AcquisitionForHO_r9() { return *static_cast<NeighCellSIAcquisitionParametersr9intraFreqSI_AcquisitionForHO_r9*>(items[0]); }
	NeighCellSIAcquisitionParametersr9interFreqSI_AcquisitionForHO_r9& getNeighCellSIAcquisitionParametersr9interFreqSI_AcquisitionForHO_r9() { return *static_cast<NeighCellSIAcquisitionParametersr9interFreqSI_AcquisitionForHO_r9*>(items[1]); }
	NeighCellSIAcquisitionParametersr9utran_SI_AcquisitionForHO_r9& getNeighCellSIAcquisitionParametersr9utran_SI_AcquisitionForHO_r9() { return *static_cast<NeighCellSIAcquisitionParametersr9utran_SI_AcquisitionForHO_r9*>(items[2]); }
};

enum SONParametersr9rach_Report_r9Values {
	supported_SONParametersr9rach_Report_r9 = 0,
};
typedef Enumerated<CONSTRAINED, 0> SONParametersr9rach_Report_r9;

class SONParametersr9 : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SONParametersr9(): Sequence(&theInfo) {}

	void setSONParametersr9rach_Report_r9(const SONParametersr9rach_Report_r9& sONParametersr9rach_Report_r9) { *static_cast<SONParametersr9rach_Report_r9*>(items[0]) = sONParametersr9rach_Report_r9; }

	SONParametersr9rach_Report_r9& getSONParametersr9rach_Report_r9() { return *static_cast<SONParametersr9rach_Report_r9*>(items[0]); }
};

typedef OctetStringBase UEEUTRACapabilityv940IEsLateNonCriticalExtension;

typedef Integer<CONSTRAINED, 6, 8> UEEUTRACapabilityv1020IEsUeCategoryv1020;

enum PhyLayerParametersv1020twoAntennaPortsForPUCCH_r10Values {
	supported_PhyLayerParametersv1020twoAntennaPortsForPUCCH_r10 = 0,
};
typedef Enumerated<CONSTRAINED, 0> PhyLayerParametersv1020twoAntennaPortsForPUCCH_r10;

enum PhyLayerParametersv1020tm9_With_8Tx_FDD_r10Values {
	supported_PhyLayerParametersv1020tm9_With_8Tx_FDD_r10 = 0,
};
typedef Enumerated<CONSTRAINED, 0> PhyLayerParametersv1020tm9_With_8Tx_FDD_r10;

enum PhyLayerParametersv1020pmi_Disabling_r10Values {
	supported_PhyLayerParametersv1020pmi_Disabling_r10 = 0,
};
typedef Enumerated<CONSTRAINED, 0> PhyLayerParametersv1020pmi_Disabling_r10;

enum PhyLayerParametersv1020crossCarrierScheduling_r10Values {
	supported_PhyLayerParametersv1020crossCarrierScheduling_r10 = 0,
};
typedef Enumerated<CONSTRAINED, 0> PhyLayerParametersv1020crossCarrierScheduling_r10;

enum PhyLayerParametersv1020simultaneousPUCCH_PUSCH_r10Values {
	supported_PhyLayerParametersv1020simultaneousPUCCH_PUSCH_r10 = 0,
};
typedef Enumerated<CONSTRAINED, 0> PhyLayerParametersv1020simultaneousPUCCH_PUSCH_r10;

enum PhyLayerParametersv1020multiClusterPUSCH_WithinCC_r10Values {
	supported_PhyLayerParametersv1020multiClusterPUSCH_WithinCC_r10 = 0,
};
typedef Enumerated<CONSTRAINED, 0> PhyLayerParametersv1020multiClusterPUSCH_WithinCC_r10;

enum NonContiguousULRAWithinCCr10nonContiguousUL_RA_WithinCC_Info_r10Values {
	supported_NonContiguousULRAWithinCCr10nonContiguousUL_RA_WithinCC_Info_r10 = 0,
};
typedef Enumerated<CONSTRAINED, 0> NonContiguousULRAWithinCCr10nonContiguousUL_RA_WithinCC_Info_r10;

class NonContiguousULRAWithinCCr10 : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	NonContiguousULRAWithinCCr10(): Sequence(&theInfo) {}

	void setNonContiguousULRAWithinCCr10nonContiguousUL_RA_WithinCC_Info_r10(const NonContiguousULRAWithinCCr10nonContiguousUL_RA_WithinCC_Info_r10& nonContiguousULRAWithinCCr10nonContiguousUL_RA_WithinCC_Info_r10) { *static_cast<NonContiguousULRAWithinCCr10nonContiguousUL_RA_WithinCC_Info_r10*>(items[0]) = nonContiguousULRAWithinCCr10nonContiguousUL_RA_WithinCC_Info_r10; }

	NonContiguousULRAWithinCCr10nonContiguousUL_RA_WithinCC_Info_r10& getNonContiguousULRAWithinCCr10nonContiguousUL_RA_WithinCC_Info_r10() { return *static_cast<NonContiguousULRAWithinCCr10nonContiguousUL_RA_WithinCC_Info_r10*>(items[0]); }
};

typedef SequenceOf<NonContiguousULRAWithinCCr10, CONSTRAINED, 1, maxBands> NonContiguousULRAWithinCCListr10;

class PhyLayerParametersv1020 : public Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	PhyLayerParametersv1020(): Sequence(&theInfo) {}

	void setPhyLayerParametersv1020twoAntennaPortsForPUCCH_r10(const PhyLayerParametersv1020twoAntennaPortsForPUCCH_r10& phyLayerParametersv1020twoAntennaPortsForPUCCH_r10) { *static_cast<PhyLayerParametersv1020twoAntennaPortsForPUCCH_r10*>(items[0]) = phyLayerParametersv1020twoAntennaPortsForPUCCH_r10; }
	void setPhyLayerParametersv1020tm9_With_8Tx_FDD_r10(const PhyLayerParametersv1020tm9_With_8Tx_FDD_r10& phyLayerParametersv1020tm9_With_8Tx_FDD_r10) { *static_cast<PhyLayerParametersv1020tm9_With_8Tx_FDD_r10*>(items[1]) = phyLayerParametersv1020tm9_With_8Tx_FDD_r10; }
	void setPhyLayerParametersv1020pmi_Disabling_r10(const PhyLayerParametersv1020pmi_Disabling_r10& phyLayerParametersv1020pmi_Disabling_r10) { *static_cast<PhyLayerParametersv1020pmi_Disabling_r10*>(items[2]) = phyLayerParametersv1020pmi_Disabling_r10; }
	void setPhyLayerParametersv1020crossCarrierScheduling_r10(const PhyLayerParametersv1020crossCarrierScheduling_r10& phyLayerParametersv1020crossCarrierScheduling_r10) { *static_cast<PhyLayerParametersv1020crossCarrierScheduling_r10*>(items[3]) = phyLayerParametersv1020crossCarrierScheduling_r10; }
	void setPhyLayerParametersv1020simultaneousPUCCH_PUSCH_r10(const PhyLayerParametersv1020simultaneousPUCCH_PUSCH_r10& phyLayerParametersv1020simultaneousPUCCH_PUSCH_r10) { *static_cast<PhyLayerParametersv1020simultaneousPUCCH_PUSCH_r10*>(items[4]) = phyLayerParametersv1020simultaneousPUCCH_PUSCH_r10; }
	void setPhyLayerParametersv1020multiClusterPUSCH_WithinCC_r10(const PhyLayerParametersv1020multiClusterPUSCH_WithinCC_r10& phyLayerParametersv1020multiClusterPUSCH_WithinCC_r10) { *static_cast<PhyLayerParametersv1020multiClusterPUSCH_WithinCC_r10*>(items[5]) = phyLayerParametersv1020multiClusterPUSCH_WithinCC_r10; }
	void setNonContiguousULRAWithinCCListr10(const NonContiguousULRAWithinCCListr10& nonContiguousULRAWithinCCListr10) { *static_cast<NonContiguousULRAWithinCCListr10*>(items[6]) = nonContiguousULRAWithinCCListr10; }

	PhyLayerParametersv1020twoAntennaPortsForPUCCH_r10& getPhyLayerParametersv1020twoAntennaPortsForPUCCH_r10() { return *static_cast<PhyLayerParametersv1020twoAntennaPortsForPUCCH_r10*>(items[0]); }
	PhyLayerParametersv1020tm9_With_8Tx_FDD_r10& getPhyLayerParametersv1020tm9_With_8Tx_FDD_r10() { return *static_cast<PhyLayerParametersv1020tm9_With_8Tx_FDD_r10*>(items[1]); }
	PhyLayerParametersv1020pmi_Disabling_r10& getPhyLayerParametersv1020pmi_Disabling_r10() { return *static_cast<PhyLayerParametersv1020pmi_Disabling_r10*>(items[2]); }
	PhyLayerParametersv1020crossCarrierScheduling_r10& getPhyLayerParametersv1020crossCarrierScheduling_r10() { return *static_cast<PhyLayerParametersv1020crossCarrierScheduling_r10*>(items[3]); }
	PhyLayerParametersv1020simultaneousPUCCH_PUSCH_r10& getPhyLayerParametersv1020simultaneousPUCCH_PUSCH_r10() { return *static_cast<PhyLayerParametersv1020simultaneousPUCCH_PUSCH_r10*>(items[4]); }
	PhyLayerParametersv1020multiClusterPUSCH_WithinCC_r10& getPhyLayerParametersv1020multiClusterPUSCH_WithinCC_r10() { return *static_cast<PhyLayerParametersv1020multiClusterPUSCH_WithinCC_r10*>(items[5]); }
	NonContiguousULRAWithinCCListr10& getNonContiguousULRAWithinCCListr10() { return *static_cast<NonContiguousULRAWithinCCListr10*>(items[6]); }
};

typedef Integer<CONSTRAINED, 1, 64> BandParametersr10BandEUTRAr10;

enum CABandwidthClassr10Values {
	a_CABandwidthClassr10 = 0,
	b_CABandwidthClassr10 = 1,
	c_CABandwidthClassr10 = 2,
	d_CABandwidthClassr10 = 3,
	e_CABandwidthClassr10 = 4,
	f_CABandwidthClassr10 = 5,
};
typedef Enumerated<EXTCONSTRAINED, 5> CABandwidthClassr10;

enum MIMOCapabilityULr10Values {
	twoLayers_MIMOCapabilityULr10 = 0,
	fourLayers_MIMOCapabilityULr10 = 1,
};
typedef Enumerated<CONSTRAINED, 1> MIMOCapabilityULr10;

class CAMIMOParametersULr10 : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CAMIMOParametersULr10(): Sequence(&theInfo) {}
	CAMIMOParametersULr10(const CABandwidthClassr10& caBandwidthClassULr10);

	void setCaBandwidthClassULr10(const CABandwidthClassr10& caBandwidthClassULr10) { *static_cast<CABandwidthClassr10*>(items[0]) = caBandwidthClassULr10; }
	void setSupportedMIMOCapabilityULr10(const MIMOCapabilityULr10& supportedMIMOCapabilityULr10) { *static_cast<MIMOCapabilityULr10*>(items[1]) = supportedMIMOCapabilityULr10; }

	CABandwidthClassr10& getCaBandwidthClassULr10() { return *static_cast<CABandwidthClassr10*>(items[0]); }
	MIMOCapabilityULr10& getSupportedMIMOCapabilityULr10() { return *static_cast<MIMOCapabilityULr10*>(items[1]); }
};

typedef SequenceOf<CAMIMOParametersULr10, CONSTRAINED, 1, maxBandwidthClass_r10> BandParametersULr10;

enum MIMOCapabilityDLr10Values {
	twoLayers_MIMOCapabilityDLr10 = 0,
	fourLayers_MIMOCapabilityDLr10 = 1,
	eightLayers_MIMOCapabilityDLr10 = 2,
};
typedef Enumerated<CONSTRAINED, 2> MIMOCapabilityDLr10;

class CAMIMOParametersDLr10 : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CAMIMOParametersDLr10(): Sequence(&theInfo) {}
	CAMIMOParametersDLr10(const CABandwidthClassr10& caBandwidthClassDLr10);

	void setCaBandwidthClassDLr10(const CABandwidthClassr10& caBandwidthClassDLr10) { *static_cast<CABandwidthClassr10*>(items[0]) = caBandwidthClassDLr10; }
	void setSupportedMIMOCapabilityDLr10(const MIMOCapabilityDLr10& supportedMIMOCapabilityDLr10) { *static_cast<MIMOCapabilityDLr10*>(items[1]) = supportedMIMOCapabilityDLr10; }

	CABandwidthClassr10& getCaBandwidthClassDLr10() { return *static_cast<CABandwidthClassr10*>(items[0]); }
	MIMOCapabilityDLr10& getSupportedMIMOCapabilityDLr10() { return *static_cast<MIMOCapabilityDLr10*>(items[1]); }
};

typedef SequenceOf<CAMIMOParametersDLr10, CONSTRAINED, 1, maxBandwidthClass_r10> BandParametersDLr10;

class BandParametersr10 : public Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	BandParametersr10(): Sequence(&theInfo) {}
	BandParametersr10(const BandParametersr10BandEUTRAr10& bandParametersr10BandEUTRAr10);

	void setBandParametersr10BandEUTRAr10(const BandParametersr10BandEUTRAr10& bandParametersr10BandEUTRAr10) { *static_cast<BandParametersr10BandEUTRAr10*>(items[0]) = bandParametersr10BandEUTRAr10; }
	void setBandParametersULr10(const BandParametersULr10& bandParametersULr10) { *static_cast<BandParametersULr10*>(items[1]) = bandParametersULr10; }
	void setBandParametersDLr10(const BandParametersDLr10& bandParametersDLr10) { *static_cast<BandParametersDLr10*>(items[2]) = bandParametersDLr10; }

	BandParametersr10BandEUTRAr10& getBandParametersr10BandEUTRAr10() { return *static_cast<BandParametersr10BandEUTRAr10*>(items[0]); }
	BandParametersULr10& getBandParametersULr10() { return *static_cast<BandParametersULr10*>(items[1]); }
	BandParametersDLr10& getBandParametersDLr10() { return *static_cast<BandParametersDLr10*>(items[2]); }
};

typedef SequenceOf<BandParametersr10, CONSTRAINED, 1, maxSimultaneousBands_r10> BandCombinationParametersr10;

typedef SequenceOf<BandCombinationParametersr10, CONSTRAINED, 1, maxBandComb_r10> SupportedBandCombinationr10;

class RFParametersv1020 : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RFParametersv1020(): Sequence(&theInfo) {}
	RFParametersv1020(const SupportedBandCombinationr10& supportedBandCombinationr10);

	void setSupportedBandCombinationr10(const SupportedBandCombinationr10& supportedBandCombinationr10) { *static_cast<SupportedBandCombinationr10*>(items[0]) = supportedBandCombinationr10; }

	SupportedBandCombinationr10& getSupportedBandCombinationr10() { return *static_cast<SupportedBandCombinationr10*>(items[0]); }
};

typedef SequenceOf<BandInfoEUTRA, CONSTRAINED, 1, maxBandComb_r10> BandCombinationListEUTRAr10;

class MeasParametersv1020 : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasParametersv1020(): Sequence(&theInfo) {}
	MeasParametersv1020(const BandCombinationListEUTRAr10& bandCombinationListEUTRAr10);

	void setBandCombinationListEUTRAr10(const BandCombinationListEUTRAr10& bandCombinationListEUTRAr10) { *static_cast<BandCombinationListEUTRAr10*>(items[0]) = bandCombinationListEUTRAr10; }

	BandCombinationListEUTRAr10& getBandCombinationListEUTRAr10() { return *static_cast<BandCombinationListEUTRAr10*>(items[0]); }
};

typedef BitString<CONSTRAINED, 32, 32> UEEUTRACapabilityv1020IEsFeatureGroupIndRel10r10;

enum IRATParametersCDMA20001XRTTv1020e_CSFB_dual_1XRTT_r10Values {
	supported_IRATParametersCDMA20001XRTTv1020e_CSFB_dual_1XRTT_r10 = 0,
};
typedef Enumerated<CONSTRAINED, 0> IRATParametersCDMA20001XRTTv1020e_CSFB_dual_1XRTT_r10;

class IRATParametersCDMA20001XRTTv1020 : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IRATParametersCDMA20001XRTTv1020(): Sequence(&theInfo) {}
	IRATParametersCDMA20001XRTTv1020(const IRATParametersCDMA20001XRTTv1020e_CSFB_dual_1XRTT_r10& iRATParametersCDMA20001XRTTv1020e_CSFB_dual_1XRTT_r10);

	void setIRATParametersCDMA20001XRTTv1020e_CSFB_dual_1XRTT_r10(const IRATParametersCDMA20001XRTTv1020e_CSFB_dual_1XRTT_r10& iRATParametersCDMA20001XRTTv1020e_CSFB_dual_1XRTT_r10) { *static_cast<IRATParametersCDMA20001XRTTv1020e_CSFB_dual_1XRTT_r10*>(items[0]) = iRATParametersCDMA20001XRTTv1020e_CSFB_dual_1XRTT_r10; }

	IRATParametersCDMA20001XRTTv1020e_CSFB_dual_1XRTT_r10& getIRATParametersCDMA20001XRTTv1020e_CSFB_dual_1XRTT_r10() { return *static_cast<IRATParametersCDMA20001XRTTv1020e_CSFB_dual_1XRTT_r10*>(items[0]); }
};

enum UEBasedNetwPerfMeasParametersr10loggedMeasurementsIdle_r10Values {
	supported_UEBasedNetwPerfMeasParametersr10loggedMeasurementsIdle_r10 = 0,
};
typedef Enumerated<CONSTRAINED, 0> UEBasedNetwPerfMeasParametersr10loggedMeasurementsIdle_r10;

enum UEBasedNetwPerfMeasParametersr10standaloneGNSS_Location_r10Values {
	supported_UEBasedNetwPerfMeasParametersr10standaloneGNSS_Location_r10 = 0,
};
typedef Enumerated<CONSTRAINED, 0> UEBasedNetwPerfMeasParametersr10standaloneGNSS_Location_r10;

class UEBasedNetwPerfMeasParametersr10 : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UEBasedNetwPerfMeasParametersr10(): Sequence(&theInfo) {}

	void setUEBasedNetwPerfMeasParametersr10loggedMeasurementsIdle_r10(const UEBasedNetwPerfMeasParametersr10loggedMeasurementsIdle_r10& uEBasedNetwPerfMeasParametersr10loggedMeasurementsIdle_r10) { *static_cast<UEBasedNetwPerfMeasParametersr10loggedMeasurementsIdle_r10*>(items[0]) = uEBasedNetwPerfMeasParametersr10loggedMeasurementsIdle_r10; }
	void setUEBasedNetwPerfMeasParametersr10standaloneGNSS_Location_r10(const UEBasedNetwPerfMeasParametersr10standaloneGNSS_Location_r10& uEBasedNetwPerfMeasParametersr10standaloneGNSS_Location_r10) { *static_cast<UEBasedNetwPerfMeasParametersr10standaloneGNSS_Location_r10*>(items[1]) = uEBasedNetwPerfMeasParametersr10standaloneGNSS_Location_r10; }

	UEBasedNetwPerfMeasParametersr10loggedMeasurementsIdle_r10& getUEBasedNetwPerfMeasParametersr10loggedMeasurementsIdle_r10() { return *static_cast<UEBasedNetwPerfMeasParametersr10loggedMeasurementsIdle_r10*>(items[0]); }
	UEBasedNetwPerfMeasParametersr10standaloneGNSS_Location_r10& getUEBasedNetwPerfMeasParametersr10standaloneGNSS_Location_r10() { return *static_cast<UEBasedNetwPerfMeasParametersr10standaloneGNSS_Location_r10*>(items[1]); }
};

enum IRATParametersUTRATDDv1020e_RedirectionUTRA_TDD_r10Values {
	supported_IRATParametersUTRATDDv1020e_RedirectionUTRA_TDD_r10 = 0,
};
typedef Enumerated<CONSTRAINED, 0> IRATParametersUTRATDDv1020e_RedirectionUTRA_TDD_r10;

class IRATParametersUTRATDDv1020 : public Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IRATParametersUTRATDDv1020(): Sequence(&theInfo) {}
	IRATParametersUTRATDDv1020(const IRATParametersUTRATDDv1020e_RedirectionUTRA_TDD_r10& iRATParametersUTRATDDv1020e_RedirectionUTRA_TDD_r10);

	void setIRATParametersUTRATDDv1020e_RedirectionUTRA_TDD_r10(const IRATParametersUTRATDDv1020e_RedirectionUTRA_TDD_r10& iRATParametersUTRATDDv1020e_RedirectionUTRA_TDD_r10) { *static_cast<IRATParametersUTRATDDv1020e_RedirectionUTRA_TDD_r10*>(items[0]) = iRATParametersUTRATDDv1020e_RedirectionUTRA_TDD_r10; }

	IRATParametersUTRATDDv1020e_RedirectionUTRA_TDD_r10& getIRATParametersUTRATDDv1020e_RedirectionUTRA_TDD_r10() { return *static_cast<IRATParametersUTRATDDv1020e_RedirectionUTRA_TDD_r10*>(items[0]); }
};

class UEEUTRACapabilityv1020IEsNonCriticalExtension : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	UEEUTRACapabilityv1020IEsNonCriticalExtension(): Sequence(&theInfo) {}


};

class UEEUTRACapabilityv1020IEs : public Sequence {
private:
	static const void *itemsInfo[9];
	static bool itemsPres[9];
public:
	static const Info theInfo;
	UEEUTRACapabilityv1020IEs(): Sequence(&theInfo) {}

	void setUEEUTRACapabilityv1020IEsUeCategoryv1020(const UEEUTRACapabilityv1020IEsUeCategoryv1020& uEEUTRACapabilityv1020IEsUeCategoryv1020) { *static_cast<UEEUTRACapabilityv1020IEsUeCategoryv1020*>(items[0]) = uEEUTRACapabilityv1020IEsUeCategoryv1020; }
	void setPhyLayerParametersv1020(const PhyLayerParametersv1020& phyLayerParametersv1020) { *static_cast<PhyLayerParametersv1020*>(items[1]) = phyLayerParametersv1020; }
	void setRfParametersv1020(const RFParametersv1020& rfParametersv1020) { *static_cast<RFParametersv1020*>(items[2]) = rfParametersv1020; }
	void setMeasParametersv1020(const MeasParametersv1020& measParametersv1020) { *static_cast<MeasParametersv1020*>(items[3]) = measParametersv1020; }
	void setUEEUTRACapabilityv1020IEsFeatureGroupIndRel10r10(const UEEUTRACapabilityv1020IEsFeatureGroupIndRel10r10& uEEUTRACapabilityv1020IEsFeatureGroupIndRel10r10) { *static_cast<UEEUTRACapabilityv1020IEsFeatureGroupIndRel10r10*>(items[4]) = uEEUTRACapabilityv1020IEsFeatureGroupIndRel10r10; }
	void setInterRATParametersCDMA2000v1020(const IRATParametersCDMA20001XRTTv1020& interRATParametersCDMA2000v1020) { *static_cast<IRATParametersCDMA20001XRTTv1020*>(items[5]) = interRATParametersCDMA2000v1020; }
	void setUeBasedNetwPerfMeasParametersr10(const UEBasedNetwPerfMeasParametersr10& ueBasedNetwPerfMeasParametersr10) { *static_cast<UEBasedNetwPerfMeasParametersr10*>(items[6]) = ueBasedNetwPerfMeasParametersr10; }
	void setInterRATParametersUTRATDDv1020(const IRATParametersUTRATDDv1020& interRATParametersUTRATDDv1020) { *static_cast<IRATParametersUTRATDDv1020*>(items[7]) = interRATParametersUTRATDDv1020; }
	void setUEEUTRACapabilityv1020IEsNonCriticalExtension(const UEEUTRACapabilityv1020IEsNonCriticalExtension& uEEUTRACapabilityv1020IEsNonCriticalExtension) { *static_cast<UEEUTRACapabilityv1020IEsNonCriticalExtension*>(items[8]) = uEEUTRACapabilityv1020IEsNonCriticalExtension; }

	UEEUTRACapabilityv1020IEsUeCategoryv1020& getUEEUTRACapabilityv1020IEsUeCategoryv1020() { return *static_cast<UEEUTRACapabilityv1020IEsUeCategoryv1020*>(items[0]); }
	PhyLayerParametersv1020& getPhyLayerParametersv1020() { return *static_cast<PhyLayerParametersv1020*>(items[1]); }
	RFParametersv1020& getRfParametersv1020() { return *static_cast<RFParametersv1020*>(items[2]); }
	MeasParametersv1020& getMeasParametersv1020() { return *static_cast<MeasParametersv1020*>(items[3]); }
	UEEUTRACapabilityv1020IEsFeatureGroupIndRel10r10& getUEEUTRACapabilityv1020IEsFeatureGroupIndRel10r10() { return *static_cast<UEEUTRACapabilityv1020IEsFeatureGroupIndRel10r10*>(items[4]); }
	IRATParametersCDMA20001XRTTv1020& getInterRATParametersCDMA2000v1020() { return *static_cast<IRATParametersCDMA20001XRTTv1020*>(items[5]); }
	UEBasedNetwPerfMeasParametersr10& getUeBasedNetwPerfMeasParametersr10() { return *static_cast<UEBasedNetwPerfMeasParametersr10*>(items[6]); }
	IRATParametersUTRATDDv1020& getInterRATParametersUTRATDDv1020() { return *static_cast<IRATParametersUTRATDDv1020*>(items[7]); }
	UEEUTRACapabilityv1020IEsNonCriticalExtension& getUEEUTRACapabilityv1020IEsNonCriticalExtension() { return *static_cast<UEEUTRACapabilityv1020IEsNonCriticalExtension*>(items[8]); }
};

class UEEUTRACapabilityv940IEs : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UEEUTRACapabilityv940IEs(): Sequence(&theInfo) {}

	void setUEEUTRACapabilityv940IEsLateNonCriticalExtension(const UEEUTRACapabilityv940IEsLateNonCriticalExtension& uEEUTRACapabilityv940IEsLateNonCriticalExtension) { *static_cast<UEEUTRACapabilityv940IEsLateNonCriticalExtension*>(items[0]) = uEEUTRACapabilityv940IEsLateNonCriticalExtension; }
	void setNonCriticalExtension(const UEEUTRACapabilityv1020IEs& nonCriticalExtension) { *static_cast<UEEUTRACapabilityv1020IEs*>(items[1]) = nonCriticalExtension; }

	UEEUTRACapabilityv940IEsLateNonCriticalExtension& getUEEUTRACapabilityv940IEsLateNonCriticalExtension() { return *static_cast<UEEUTRACapabilityv940IEsLateNonCriticalExtension*>(items[0]); }
	UEEUTRACapabilityv1020IEs& getNonCriticalExtension() { return *static_cast<UEEUTRACapabilityv1020IEs*>(items[1]); }
};

class UEEUTRACapabilityv920IEs : public Sequence {
private:
	static const void *itemsInfo[9];
	static bool itemsPres[9];
public:
	static const Info theInfo;
	UEEUTRACapabilityv920IEs(): Sequence(&theInfo) {}
	UEEUTRACapabilityv920IEs(const PhyLayerParametersv920& phyLayerParametersv920, const IRATParametersGERANv920& interRATParametersGERANv920, const CSGProximityIndicationParametersr9& csgProximityIndicationParametersr9, const NeighCellSIAcquisitionParametersr9& neighCellSIAcquisitionParametersr9, const SONParametersr9& sonParametersr9);

	void setPhyLayerParametersv920(const PhyLayerParametersv920& phyLayerParametersv920) { *static_cast<PhyLayerParametersv920*>(items[0]) = phyLayerParametersv920; }
	void setInterRATParametersGERANv920(const IRATParametersGERANv920& interRATParametersGERANv920) { *static_cast<IRATParametersGERANv920*>(items[1]) = interRATParametersGERANv920; }
	void setInterRATParametersUTRAv920(const IRATParametersUTRAv920& interRATParametersUTRAv920) { *static_cast<IRATParametersUTRAv920*>(items[2]) = interRATParametersUTRAv920; }
	void setInterRATParametersCDMA2000v920(const IRATParametersCDMA20001XRTTv920& interRATParametersCDMA2000v920) { *static_cast<IRATParametersCDMA20001XRTTv920*>(items[3]) = interRATParametersCDMA2000v920; }
	void setUEEUTRACapabilityv920IEsdeviceType_r9(const UEEUTRACapabilityv920IEsdeviceType_r9& uEEUTRACapabilityv920IEsdeviceType_r9) { *static_cast<UEEUTRACapabilityv920IEsdeviceType_r9*>(items[4]) = uEEUTRACapabilityv920IEsdeviceType_r9; }
	void setCsgProximityIndicationParametersr9(const CSGProximityIndicationParametersr9& csgProximityIndicationParametersr9) { *static_cast<CSGProximityIndicationParametersr9*>(items[5]) = csgProximityIndicationParametersr9; }
	void setNeighCellSIAcquisitionParametersr9(const NeighCellSIAcquisitionParametersr9& neighCellSIAcquisitionParametersr9) { *static_cast<NeighCellSIAcquisitionParametersr9*>(items[6]) = neighCellSIAcquisitionParametersr9; }
	void setSonParametersr9(const SONParametersr9& sonParametersr9) { *static_cast<SONParametersr9*>(items[7]) = sonParametersr9; }
	void setNonCriticalExtension(const UEEUTRACapabilityv940IEs& nonCriticalExtension) { *static_cast<UEEUTRACapabilityv940IEs*>(items[8]) = nonCriticalExtension; }

	PhyLayerParametersv920& getPhyLayerParametersv920() { return *static_cast<PhyLayerParametersv920*>(items[0]); }
	IRATParametersGERANv920& getInterRATParametersGERANv920() { return *static_cast<IRATParametersGERANv920*>(items[1]); }
	IRATParametersUTRAv920& getInterRATParametersUTRAv920() { return *static_cast<IRATParametersUTRAv920*>(items[2]); }
	IRATParametersCDMA20001XRTTv920& getInterRATParametersCDMA2000v920() { return *static_cast<IRATParametersCDMA20001XRTTv920*>(items[3]); }
	UEEUTRACapabilityv920IEsdeviceType_r9& getUEEUTRACapabilityv920IEsdeviceType_r9() { return *static_cast<UEEUTRACapabilityv920IEsdeviceType_r9*>(items[4]); }
	CSGProximityIndicationParametersr9& getCsgProximityIndicationParametersr9() { return *static_cast<CSGProximityIndicationParametersr9*>(items[5]); }
	NeighCellSIAcquisitionParametersr9& getNeighCellSIAcquisitionParametersr9() { return *static_cast<NeighCellSIAcquisitionParametersr9*>(items[6]); }
	SONParametersr9& getSonParametersr9() { return *static_cast<SONParametersr9*>(items[7]); }
	UEEUTRACapabilityv940IEs& getNonCriticalExtension() { return *static_cast<UEEUTRACapabilityv940IEs*>(items[8]); }
};

class UEEUTRACapability : public Sequence {
private:
	static const void *itemsInfo[9];
	static bool itemsPres[9];
public:
	static const Info theInfo;
	UEEUTRACapability(): Sequence(&theInfo) {}
	UEEUTRACapability(const AccessStratumRelease& accessStratumRelease, const UEEUTRACapabilityUeCategory& uEEUTRACapabilityUeCategory, const PDCPParameters& pdcpParameters, const PhyLayerParameters& phyLayerParameters, const RFParameters& rfParameters, const MeasParameters& measParameters, const UEEUTRACapabilityInterRATParameters& uEEUTRACapabilityInterRATParameters);

	void setAccessStratumRelease(const AccessStratumRelease& accessStratumRelease) { *static_cast<AccessStratumRelease*>(items[0]) = accessStratumRelease; }
	void setUEEUTRACapabilityUeCategory(const UEEUTRACapabilityUeCategory& uEEUTRACapabilityUeCategory) { *static_cast<UEEUTRACapabilityUeCategory*>(items[1]) = uEEUTRACapabilityUeCategory; }
	void setPdcpParameters(const PDCPParameters& pdcpParameters) { *static_cast<PDCPParameters*>(items[2]) = pdcpParameters; }
	void setPhyLayerParameters(const PhyLayerParameters& phyLayerParameters) { *static_cast<PhyLayerParameters*>(items[3]) = phyLayerParameters; }
	void setRfParameters(const RFParameters& rfParameters) { *static_cast<RFParameters*>(items[4]) = rfParameters; }
	void setMeasParameters(const MeasParameters& measParameters) { *static_cast<MeasParameters*>(items[5]) = measParameters; }
	void setUEEUTRACapabilityFeatureGroupIndicators(const UEEUTRACapabilityFeatureGroupIndicators& uEEUTRACapabilityFeatureGroupIndicators) { *static_cast<UEEUTRACapabilityFeatureGroupIndicators*>(items[6]) = uEEUTRACapabilityFeatureGroupIndicators; }
	void setUEEUTRACapabilityInterRATParameters(const UEEUTRACapabilityInterRATParameters& uEEUTRACapabilityInterRATParameters) { *static_cast<UEEUTRACapabilityInterRATParameters*>(items[7]) = uEEUTRACapabilityInterRATParameters; }
	void setNonCriticalExtension(const UEEUTRACapabilityv920IEs& nonCriticalExtension) { *static_cast<UEEUTRACapabilityv920IEs*>(items[8]) = nonCriticalExtension; }

	AccessStratumRelease& getAccessStratumRelease() { return *static_cast<AccessStratumRelease*>(items[0]); }
	UEEUTRACapabilityUeCategory& getUEEUTRACapabilityUeCategory() { return *static_cast<UEEUTRACapabilityUeCategory*>(items[1]); }
	PDCPParameters& getPdcpParameters() { return *static_cast<PDCPParameters*>(items[2]); }
	PhyLayerParameters& getPhyLayerParameters() { return *static_cast<PhyLayerParameters*>(items[3]); }
	RFParameters& getRfParameters() { return *static_cast<RFParameters*>(items[4]); }
	MeasParameters& getMeasParameters() { return *static_cast<MeasParameters*>(items[5]); }
	UEEUTRACapabilityFeatureGroupIndicators& getUEEUTRACapabilityFeatureGroupIndicators() { return *static_cast<UEEUTRACapabilityFeatureGroupIndicators*>(items[6]); }
	UEEUTRACapabilityInterRATParameters& getUEEUTRACapabilityInterRATParameters() { return *static_cast<UEEUTRACapabilityInterRATParameters*>(items[7]); }
	UEEUTRACapabilityv920IEs& getNonCriticalExtension() { return *static_cast<UEEUTRACapabilityv920IEs*>(items[8]); }
};

typedef BitString<CONSTRAINED, 32, 32> UEEUTRACapabilityv9a0IEsFeatureGroupIndRel9Addr9;

typedef BitString<CONSTRAINED, 32, 32> UEEUTRACapabilityAddXDDModer9FeatureGroupIndicatorsr9;

typedef BitString<CONSTRAINED, 32, 32> UEEUTRACapabilityAddXDDModer9FeatureGroupIndRel9Addr9;

class UEEUTRACapabilityAddXDDModer9 : public Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	UEEUTRACapabilityAddXDDModer9(): Sequence(&theInfo) {}

	void setPhyLayerParametersr9(const PhyLayerParameters& phyLayerParametersr9) { *static_cast<PhyLayerParameters*>(items[0]) = phyLayerParametersr9; }
	void setUEEUTRACapabilityAddXDDModer9FeatureGroupIndicatorsr9(const UEEUTRACapabilityAddXDDModer9FeatureGroupIndicatorsr9& uEEUTRACapabilityAddXDDModer9FeatureGroupIndicatorsr9) { *static_cast<UEEUTRACapabilityAddXDDModer9FeatureGroupIndicatorsr9*>(items[1]) = uEEUTRACapabilityAddXDDModer9FeatureGroupIndicatorsr9; }
	void setUEEUTRACapabilityAddXDDModer9FeatureGroupIndRel9Addr9(const UEEUTRACapabilityAddXDDModer9FeatureGroupIndRel9Addr9& uEEUTRACapabilityAddXDDModer9FeatureGroupIndRel9Addr9) { *static_cast<UEEUTRACapabilityAddXDDModer9FeatureGroupIndRel9Addr9*>(items[2]) = uEEUTRACapabilityAddXDDModer9FeatureGroupIndRel9Addr9; }
	void setInterRATParametersGERANr9(const IRATParametersGERAN& interRATParametersGERANr9) { *static_cast<IRATParametersGERAN*>(items[3]) = interRATParametersGERANr9; }
	void setInterRATParametersUTRAr9(const IRATParametersUTRAv920& interRATParametersUTRAr9) { *static_cast<IRATParametersUTRAv920*>(items[4]) = interRATParametersUTRAr9; }
	void setInterRATParametersCDMA2000r9(const IRATParametersCDMA20001XRTTv920& interRATParametersCDMA2000r9) { *static_cast<IRATParametersCDMA20001XRTTv920*>(items[5]) = interRATParametersCDMA2000r9; }
	void setNeighCellSIAcquisitionParametersr9(const NeighCellSIAcquisitionParametersr9& neighCellSIAcquisitionParametersr9) { *static_cast<NeighCellSIAcquisitionParametersr9*>(items[6]) = neighCellSIAcquisitionParametersr9; }

	PhyLayerParameters& getPhyLayerParametersr9() { return *static_cast<PhyLayerParameters*>(items[0]); }
	UEEUTRACapabilityAddXDDModer9FeatureGroupIndicatorsr9& getUEEUTRACapabilityAddXDDModer9FeatureGroupIndicatorsr9() { return *static_cast<UEEUTRACapabilityAddXDDModer9FeatureGroupIndicatorsr9*>(items[1]); }
	UEEUTRACapabilityAddXDDModer9FeatureGroupIndRel9Addr9& getUEEUTRACapabilityAddXDDModer9FeatureGroupIndRel9Addr9() { return *static_cast<UEEUTRACapabilityAddXDDModer9FeatureGroupIndRel9Addr9*>(items[2]); }
	IRATParametersGERAN& getInterRATParametersGERANr9() { return *static_cast<IRATParametersGERAN*>(items[3]); }
	IRATParametersUTRAv920& getInterRATParametersUTRAr9() { return *static_cast<IRATParametersUTRAv920*>(items[4]); }
	IRATParametersCDMA20001XRTTv920& getInterRATParametersCDMA2000r9() { return *static_cast<IRATParametersCDMA20001XRTTv920*>(items[5]); }
	NeighCellSIAcquisitionParametersr9& getNeighCellSIAcquisitionParametersr9() { return *static_cast<NeighCellSIAcquisitionParametersr9*>(items[6]); }
};

class UEEUTRACapabilityv9a0IEsNonCriticalExtension : public Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	UEEUTRACapabilityv9a0IEsNonCriticalExtension(): Sequence(&theInfo) {}


};

class UEEUTRACapabilityv9a0IEs : public Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	UEEUTRACapabilityv9a0IEs(): Sequence(&theInfo) {}

	void setUEEUTRACapabilityv9a0IEsFeatureGroupIndRel9Addr9(const UEEUTRACapabilityv9a0IEsFeatureGroupIndRel9Addr9& uEEUTRACapabilityv9a0IEsFeatureGroupIndRel9Addr9) { *static_cast<UEEUTRACapabilityv9a0IEsFeatureGroupIndRel9Addr9*>(items[0]) = uEEUTRACapabilityv9a0IEsFeatureGroupIndRel9Addr9; }
	void setFddAddUEEUTRACapabilitiesr9(const UEEUTRACapabilityAddXDDModer9& fddAddUEEUTRACapabilitiesr9) { *static_cast<UEEUTRACapabilityAddXDDModer9*>(items[1]) = fddAddUEEUTRACapabilitiesr9; }
	void setTddAddUEEUTRACapabilitiesr9(const UEEUTRACapabilityAddXDDModer9& tddAddUEEUTRACapabilitiesr9) { *static_cast<UEEUTRACapabilityAddXDDModer9*>(items[2]) = tddAddUEEUTRACapabilitiesr9; }
	void setUEEUTRACapabilityv9a0IEsNonCriticalExtension(const UEEUTRACapabilityv9a0IEsNonCriticalExtension& uEEUTRACapabilityv9a0IEsNonCriticalExtension) { *static_cast<UEEUTRACapabilityv9a0IEsNonCriticalExtension*>(items[3]) = uEEUTRACapabilityv9a0IEsNonCriticalExtension; }

	UEEUTRACapabilityv9a0IEsFeatureGroupIndRel9Addr9& getUEEUTRACapabilityv9a0IEsFeatureGroupIndRel9Addr9() { return *static_cast<UEEUTRACapabilityv9a0IEsFeatureGroupIndRel9Addr9*>(items[0]); }
	UEEUTRACapabilityAddXDDModer9& getFddAddUEEUTRACapabilitiesr9() { return *static_cast<UEEUTRACapabilityAddXDDModer9*>(items[1]); }
	UEEUTRACapabilityAddXDDModer9& getTddAddUEEUTRACapabilitiesr9() { return *static_cast<UEEUTRACapabilityAddXDDModer9*>(items[2]); }
	UEEUTRACapabilityv9a0IEsNonCriticalExtension& getUEEUTRACapabilityv9a0IEsNonCriticalExtension() { return *static_cast<UEEUTRACapabilityv9a0IEsNonCriticalExtension*>(items[3]); }
};

}

#endif /* RRCCLASSDEFINITIONS_H_ */
