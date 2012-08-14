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

#ifndef RRCIE_H_
#define RRCIE_H_

#include "ASNTypes.h"


typedef BitString<CONSTRAINED, 14, 14> Ansi41IDNNS;

enum CNDomainIdentityValues {
	cs_domain = 0,
	ps_domain = 1,
};
typedef Enumerated<CONSTRAINED, 1> CNDomainIdentity;

typedef OctetString<CONSTRAINED, 1, 8> NASSystemInformationGSMMAP;

class CNDomainInformation : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CNDomainInformation(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 6, 9> CNDRXCycleLengthCoefficient;

class CNDomainInformationFull : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	CNDomainInformationFull(): Sequence(&theInfo) {}
};

typedef SequenceOf<CNDomainInformation, CONSTRAINED, 1, maxCNdomains> CNDomainInformationList;

typedef SequenceOf<CNDomainInformationFull, CONSTRAINED, 1, maxCNdomains> CNDomainInformationListFull;


class Cn_Type : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Cn_Type(): Choices(&theInfo) {}
};

class CNDomainSysInfo : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	CNDomainSysInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<CNDomainSysInfo, CONSTRAINED, 1, maxCNdomains> CNDomainSysInfoList;

typedef Integer<CONSTRAINED, 0, 9> Digit;

typedef SequenceOf<Digit, CONSTRAINED, 3, 3> MCC;

typedef SequenceOf<Digit, CONSTRAINED, 2, 3> MNC;

class PLMNIdentity : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PLMNIdentity(): Sequence(&theInfo) {}
};

class CNInformationInfo : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	CNInformationInfo(): Sequence(&theInfo) {}
};

class CNInformationInfor6 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CNInformationInfor6(): Sequence(&theInfo) {}
};

class CNInformationInfoFull : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	CNInformationInfoFull(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED, 10, 10> RoutingParameter;

class LocalPTMSI : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	LocalPTMSI(): Sequence(&theInfo) {}
};

class TMSIofsamePLMN : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	TMSIofsamePLMN(): Sequence(&theInfo) {}
};

class TMSIofdifferentPLMN : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	TMSIofdifferentPLMN(): Sequence(&theInfo) {}
};

class IMSIresponsetopaging : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IMSIresponsetopaging(): Sequence(&theInfo) {}
};

class IMSIcauseUEinitiatedEvent : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IMSIcauseUEinitiatedEvent(): Sequence(&theInfo) {}
};

class IMEI : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IMEI(): Sequence(&theInfo) {}
};

class Spare2 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Spare2(): Sequence(&theInfo) {}
};

class Spare1 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Spare1(): Sequence(&theInfo) {}
};

class Routingbasis : Choice {
private:
	static const void *choicesInfo[8];
public:
	static const Info theInfo;
	Routingbasis(): Choices(&theInfo) {}
};

typedef Boolean Dummy;

class GsmmapIDNNS : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	GsmmapIDNNS(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 15> IMEIDigit;

typedef SequenceOf<IMEIDigit, CONSTRAINED, 15, 15> IMEI;

typedef SequenceOf<Digit, CONSTRAINED, 6, 21> IMSIGSMMAP;

class Cn_Type : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Cn_Type(): Choices(&theInfo) {}
};

class Release99 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Release99(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED, 15, 15> Futurecoding;

class Later : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Later(): Sequence(&theInfo) {}
};

class Version : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Version(): Choices(&theInfo) {}
};

class IntraDomainNasNodeSelector : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IntraDomainNasNodeSelector(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED, 16, 16> Lac;

class LAI : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	LAI(): Sequence(&theInfo) {}
};

enum AccessClassBarredValues {
	barred = 0,
	notBarred = 1,
};
typedef Enumerated<CONSTRAINED, 1> AccessClassBarred;

typedef SequenceOf<AccessClassBarred, CONSTRAINED, 15, 15> LocationRegistrationAccessClassBarredList;

typedef _Null NoRestriction;

class LocationRegistrationParameters : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	LocationRegistrationParameters(): Choices(&theInfo) {}
};

typedef Boolean MibPLMN_Identity;

class PLMNIdentityWithOptionalMCCr6 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PLMNIdentityWithOptionalMCCr6(): Sequence(&theInfo) {}
};

typedef SequenceOf<PLMNIdentityWithOptionalMCCr6, CONSTRAINED, 1, 5> MultiplePLMNs;

class MultiplePLMNListr6 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MultiplePLMNListr6(): Sequence(&theInfo) {}
};

typedef OctetString<CONSTRAINED, 1, 4095> NASMessage;

typedef BitString<CONSTRAINED, 4, 4> NASSynchronisationIndicator;

typedef BitString<CONSTRAINED, 32, 32> PTMSIGSMMAP;

enum pagingResponseRestrictionIndicatorValues {
	all = 0,
	cS = 1,
	pS = 2,
	none = 3,
};
typedef Enumerated<CONSTRAINED, 3> pagingResponseRestrictionIndicator;

enum locationRegistrationRestrictionIndicatorValues {
	all = 0,
	cS = 1,
	pS = 2,
};
typedef Enumerated<CONSTRAINED, 2> locationRegistrationRestrictionIndicator;

class PagingPermissionWithAccessControlParameters : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PagingPermissionWithAccessControlParameters(): Sequence(&theInfo) {}
};

class PagingPermissionWithAccessControlList : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	PagingPermissionWithAccessControlList(): Sequence(&theInfo) {}
};

class PagingPermissionWithAccessControlForSharedNetwork : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PagingPermissionWithAccessControlForSharedNetwork(): Choices(&theInfo) {}
};

enum PagingRecordTypeIDValues {
	imsi_GSM_MAP = 0,
	tmsi_GSM_MAP_P_TMSI = 1,
	imsi_DS_41 = 2,
	tmsi_DS_41 = 3,
};
typedef Enumerated<CONSTRAINED, 3> PagingRecordTypeID;

class Gsm_MAP : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Gsm_MAP(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED, 8, 8> PREV;

typedef BitString<CONSTRAINED, 8, 8> MinPREV;

typedef BitString<CONSTRAINED, 15, 15> SID;

typedef BitString<CONSTRAINED, 16, 16> NID;

class Ansi_41 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	Ansi_41(): Sequence(&theInfo) {}
};

class Gsm_MAP_and_ANSI_41 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	Gsm_MAP_and_ANSI_41(): Sequence(&theInfo) {}
};

typedef _Null Spare;

class PLMNType : Choice {
private:
	static const void *choicesInfo[4];
public:
	static const Info theInfo;
	PLMNType(): Choices(&theInfo) {}
};

typedef BitString<CONSTRAINED, 8, 8> Gsm_MAP_RAB_Identity;

typedef BitString<CONSTRAINED, 8, 8> Ansi_41_RAB_Identity;

class RABIdentity : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RABIdentity(): Choices(&theInfo) {}
};

typedef BitString<CONSTRAINED, 8, 8> RoutingAreaCode;

class RAI : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RAI(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED, 32, 32> TMSIGSMMAP;

typedef SequenceOf<AccessClassBarred, CONSTRAINED, maxAC, maxAC> AccessClassBarredList;

enum AllowedIndicatorValues {
	allowed = 0,
	notAllowed = 1,
};
typedef Enumerated<CONSTRAINED, 1> AllowedIndicator;

enum TBarredValues {
	s10 = 0,
	s20 = 1,
	s40 = 2,
	s80 = 3,
	s160 = 4,
	s320 = 5,
	s640 = 6,
	s1280 = 7,
};
typedef Enumerated<CONSTRAINED, 7> TBarred;

class Barred : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Barred(): Sequence(&theInfo) {}
};

typedef _Null NotBarred;

class CellBarred : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CellBarred(): Choices(&theInfo) {}
};

enum ReservedIndicatorValues {
	reserved = 0,
	notReserved = 1,
};
typedef Enumerated<CONSTRAINED, 1> ReservedIndicator;

class CellAccessRestriction : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CellAccessRestriction(): Sequence(&theInfo) {}
};

enum cellReservedForCSGValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> cellReservedForCSG;

class CellAccessRestrictionv870ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellAccessRestrictionv870ext(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED, 28, 28> CellIdentity;

typedef SequenceOf<CellIdentity, CONSTRAINED, 1, maxRL> CellIdentityPerRLList;

enum RATValues {
	utra_FDD = 0,
	utra_TDD = 1,
	gsm = 2,
	cdma2000 = 3,
};
typedef Enumerated<CONSTRAINED, 3> RAT;

enum MappingFunctionTypeValues {
	linear = 0,
	functionType2 = 1,
	functionType3 = 2,
	functionType4 = 3,
};
typedef Enumerated<CONSTRAINED, 3> MappingFunctionType;

typedef Integer<CONSTRAINED, 0, 127> MapParameter;

typedef Integer<CONSTRAINED, 1, 91> UpperLimit;

class MappingFunctionParameter : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	MappingFunctionParameter(): Sequence(&theInfo) {}
};

typedef SequenceOf<MappingFunctionParameter, CONSTRAINED, 1, maxMeasIntervals> MappingFunctionParameterList;

class Mapping : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Mapping(): Sequence(&theInfo) {}
};

typedef SequenceOf<Mapping, CONSTRAINED, 1, maxRAT> MappingInfo;

typedef Integer<CONSTRAINED, 0, 20> QHystS;

class Cpich_Ec_N0 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Cpich_Ec_N0(): Sequence(&theInfo) {}
};

typedef _Null Cpich_RSCP;

class CellSelectQualityMeasure : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CellSelectQualityMeasure(): Choices(&theInfo) {}
};

typedef Integer<CONSTRAINED, -16, 10> SSearchQual;

typedef Integer<CONSTRAINED, -53, 45> SSearchRXLEV;

enum RATIdentifierValues {
	gsm = 0,
	cdma2000 = 1,
};
typedef Enumerated<CONSTRAINED, 1> RATIdentifier;

class RATFDDInfo : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	RATFDDInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<RATFDDInfo, CONSTRAINED, 1, maxOtherRAT> RATFDDInfoList;

typedef Integer<CONSTRAINED, -24, 0> QQualMin;

typedef Integer<CONSTRAINED, -58, -13> QRxlevMin;

class Fdd : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

class RATTDDInfo : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	RATTDDInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<RATTDDInfo, CONSTRAINED, 1, maxOtherRAT> RATTDDInfoList;

class Tdd : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 31> TReselectionS;

typedef Integer<CONSTRAINED, 0, 7> HCSPRIO;

typedef Integer<CONSTRAINED, 0, 99> QHCS;

typedef _Null NotUsed;

typedef Integer<CONSTRAINED, 1, 16> N_CR;

enum TCRMaxHystValues {
	notUsed = 0,
	t10 = 1,
	t20 = 2,
	t30 = 3,
	t40 = 4,
	t50 = 5,
	t60 = 6,
	t70 = 7,
};
typedef Enumerated<CONSTRAINED, 7> TCRMaxHyst;

class NCRTCRMaxHyst : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	NCRTCRMaxHyst(): Sequence(&theInfo) {}
};

class TCRMax : Choice {
private:
	static const void *choicesInfo[6];
public:
	static const Info theInfo;
	TCRMax(): Choices(&theInfo) {}
};

class HCSServingCellInformation : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	HCSServingCellInformation(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, -50, 33> MaxAllowedULTXPower;

class CellSelectReselectInfoSIB34 : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	CellSelectReselectInfoSIB34(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 16383> UARFCN;

class FrequencyInfoFDD : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	FrequencyInfoFDD(): Sequence(&theInfo) {}
};

class FrequencyInfoTDD : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	FrequencyInfoTDD(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class FrequencyInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	FrequencyInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<FrequencyInfo, CONSTRAINED, 1, maxDedicatedCSGFreq> CSGDedicatedFrequencyInfoList;

typedef BitString<CONSTRAINED, 27, 27> CSGIdentity;

typedef Integer<CONSTRAINED, 0, 63> StartPSC;

enum numberOfPSCsValues {
	psc5 = 0,
	psc10 = 1,
	psc15 = 2,
	psc20 = 3,
	psc30 = 4,
	psc40 = 5,
	psc50 = 6,
	psc64 = 7,
	psc80 = 8,
	psc120 = 9,
	psc160 = 10,
	psc256 = 11,
	alltheRest = 12,
	spare3 = 13,
	spare2 = 14,
	spare1 = 15,
};
typedef Enumerated<CONSTRAINED, 15> numberOfPSCs;

typedef Integer<CONSTRAINED, 1, 63> PscRange2Offset;

class CSGPSCSplitInfo : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	CSGPSCSplitInfo(): Sequence(&theInfo) {}
};

typedef _Null NoRestriction;

class Restriction : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Restriction(): Sequence(&theInfo) {}
};

class DomainSpecificAccessRestrictionv670ext : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DomainSpecificAccessRestrictionv670ext(): Choices(&theInfo) {}
};

class DomainSpecificAccessRestrictionParamv670ext : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DomainSpecificAccessRestrictionParamv670ext(): Sequence(&theInfo) {}
};

class DomainSpecificAccessRestrictionListv670ext : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	DomainSpecificAccessRestrictionListv670ext(): Sequence(&theInfo) {}
};

class DomainSpecificAccessRestrictionForSharedNetworkv670ext : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DomainSpecificAccessRestrictionForSharedNetworkv670ext(): Choices(&theInfo) {}
};

class MappingLCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MappingLCRr4(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, maxSCCPCH> OccurrenceSequenceNumberOfPICH;

typedef _Null ClearDedicatedPriorities;

enum T322Values {
	m5 = 0,
	m10 = 1,
	m20 = 2,
	m30 = 3,
	m60 = 4,
	m120 = 5,
	m180 = 6,
	spare1 = 7,
};
typedef Enumerated<CONSTRAINED, 7> T322;

typedef Integer<CONSTRAINED, 0, maxPrio_1> Priority;

class UtraFDD : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	UtraFDD(): Sequence(&theInfo) {}
};

class UtraTDD : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	UtraTDD(): Sequence(&theInfo) {}
};

class Eutra : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	Eutra(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 1023> BCCHARFCN;

enum bandIndicatorValues {
	dcs1800 = 0,
	pcs1900 = 1,
};
typedef Enumerated<CONSTRAINED, 1> bandIndicator;

typedef SequenceOf<BCCHARFCN, CONSTRAINED, 0, 31> ExplicitListOfARFCNs;

typedef Integer<CONSTRAINED, 1, 8> Arfcn_Spacing;

typedef Integer<CONSTRAINED, 0, 31> NumberOfFollowingARFCNs;

class EquallySpacedARFCNs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	EquallySpacedARFCNs(): Sequence(&theInfo) {}
};

typedef OctetString<CONSTRAINED, 1, 16> VariableBitMapOfARFCNs;

class ContinuousRangeOfARFCNs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ContinuousRangeOfARFCNs(): Sequence(&theInfo) {}
};

class FollowingARFCNs : Choice {
private:
	static const void *choicesInfo[4];
public:
	static const Info theInfo;
	FollowingARFCNs(): Choices(&theInfo) {}
};

class GSMCellGroup : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	GSMCellGroup(): Sequence(&theInfo) {}
};

class Gsm : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Gsm(): Sequence(&theInfo) {}
};

class RadioAccessTechnology : Choice {
private:
	static const void *choicesInfo[4];
public:
	static const Info theInfo;
	RadioAccessTechnology(): Choices(&theInfo) {}
};

class PriorityLevel : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PriorityLevel(): Sequence(&theInfo) {}
};

typedef SequenceOf<PriorityLevel, CONSTRAINED, 1, maxPrio> PriorityLevelList;

typedef Boolean EutraDetection;

class ConfigureDedicatedPriorities : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	ConfigureDedicatedPriorities(): Sequence(&theInfo) {}
};

class Action : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Action(): Choices(&theInfo) {}
};

class DedicatedPriorityInformation : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DedicatedPriorityInformation(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 40> QHystSFine;

typedef Integer<CONSTRAINED, 0, 10> SpeedDependentScalingFactor;

typedef Integer<CONSTRAINED, 0, 31> TReselectionSFine;

typedef Integer<CONSTRAINED, 4, 19> TreselectionScalingFactor;

typedef BitString<CONSTRAINED, 16, 16> URAIdentity;

typedef SequenceOf<URAIdentity, CONSTRAINED, 1, maxURA> URAIdentityList;

enum AccessStratumReleaseIndicatorValues {
	rel_4 = 0,
	rel_5 = 1,
	rel_6 = 2,
	rel_7 = 3,
	rel_8 = 4,
	rel_9 = 5,
	spare10 = 6,
	spare9 = 7,
	spare8 = 8,
	spare7 = 9,
	spare6 = 10,
	spare5 = 11,
	spare4 = 12,
	spare3 = 13,
	spare2 = 14,
	spare1 = 15,
};
typedef Enumerated<CONSTRAINED, 15> AccessStratumReleaseIndicator;

typedef Integer<CONSTRAINED, 0, 255> ActivationTime;

typedef Integer<CONSTRAINED, 1, 64> NAPRetransMax;

typedef Integer<CONSTRAINED, 1, 64> NAccessFails;

typedef Integer<CONSTRAINED, 0, 31> NFBONoAICH;

typedef Integer<CONSTRAINED, 0, 63> NSBOBusy;

typedef Integer<CONSTRAINED, 0, 31> NFBOAllBusy;

typedef Integer<CONSTRAINED, 0, 127> NFBOMismatch;

enum TCPCHValues {
	ct0 = 0,
	ct1 = 1,
};
typedef Enumerated<CONSTRAINED, 1> TCPCH;

class BackoffControlParams : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	BackoffControlParams(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 256> BandComb;

typedef BitString<CONSTRAINED, 16, 16> CRNTI;

typedef Boolean Ue_RadioCapabilityFDDUpdateRequirement;

typedef Boolean Ue_RadioCapabilityTDDUpdateRequirement;

enum SystemSpecificCapUpdateReqValues {
	gsm = 0,
};
typedef Enumerated<CONSTRAINED, 0> SystemSpecificCapUpdateReq;

typedef SequenceOf<SystemSpecificCapUpdateReq, CONSTRAINED, 1, maxSystemCapability> SystemSpecificCapUpdateReqList;

class CapabilityUpdateRequirement : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	CapabilityUpdateRequirement(): Sequence(&theInfo) {}
};

typedef Boolean Ue_RadioCapabilityUpdateRequirement_TDD128;

class CapabilityUpdateRequirementr4ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CapabilityUpdateRequirementr4ext(): Sequence(&theInfo) {}
};

typedef Boolean Ue_RadioCapabilityFDDUpdateRequirement_FDD;

typedef Boolean Ue_RadioCapabilityTDDUpdateRequirement_TDD384;

typedef Boolean Ue_RadioCapabilityTDDUpdateRequirement_TDD128;

class CapabilityUpdateRequirementr4 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CapabilityUpdateRequirementr4(): Sequence(&theInfo) {}
};

typedef Boolean Ue_RadioCapabilityFDDUpdateRequirement_FDD;

typedef Boolean Ue_RadioCapabilityTDDUpdateRequirement_TDD384;

typedef Boolean Ue_RadioCapabilityTDDUpdateRequirement_TDD128;

enum SystemSpecificCapUpdateReqr5Values {
	gsm = 0,
	geranIu = 1,
};
typedef Enumerated<CONSTRAINED, 1> SystemSpecificCapUpdateReqr5;

typedef SequenceOf<SystemSpecificCapUpdateReqr5, CONSTRAINED, 1, maxSystemCapability> SystemSpecificCapUpdateReqListr5;

class CapabilityUpdateRequirementr5 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CapabilityUpdateRequirementr5(): Sequence(&theInfo) {}
};

typedef Boolean Ue_RadioCapabilityTDDUpdateRequirement_TDD768;

class CapabilityUpdateRequirementv770ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CapabilityUpdateRequirementv770ext(): Sequence(&theInfo) {}
};

typedef Boolean Ue_RadioCapabilityFDDUpdateRequirement_FDD;

typedef Boolean Ue_RadioCapabilityTDDUpdateRequirement_TDD384;

typedef Boolean Ue_RadioCapabilityTDDUpdateRequirement_TDD768;

typedef Boolean Ue_RadioCapabilityTDDUpdateRequirement_TDD128;

class CapabilityUpdateRequirementr7 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	CapabilityUpdateRequirementr7(): Sequence(&theInfo) {}
};

enum SystemSpecificCapUpdateReqr8Values {
	gsm = 0,
	geranIu = 1,
	eutra = 2,
	spare5 = 3,
	spare4 = 4,
	spare3 = 5,
	spare2 = 6,
	spare1 = 7,
};
typedef Enumerated<CONSTRAINED, 7> SystemSpecificCapUpdateReqr8;

typedef SequenceOf<SystemSpecificCapUpdateReqr8, CONSTRAINED, 1, maxSystemCapability> SystemSpecificCapUpdateReqListr8;

class CapabilityUpdateRequirementv860ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CapabilityUpdateRequirementv860ext(): Sequence(&theInfo) {}
};

typedef Boolean Ue_RadioCapabilityFDDUpdateRequirement_FDD;

typedef Boolean Ue_RadioCapabilityTDDUpdateRequirement_TDD384;

typedef Boolean Ue_RadioCapabilityTDDUpdateRequirement_TDD768;

typedef Boolean Ue_RadioCapabilityTDDUpdateRequirement_TDD128;

class CapabilityUpdateRequirementr8 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	CapabilityUpdateRequirementr8(): Sequence(&theInfo) {}
};

enum CellUpdateCauseValues {
	cellReselection = 0,
	periodicalCellUpdate = 1,
	uplinkDataTransmission = 2,
	utran_pagingResponse = 3,
	re_enteredServiceArea = 4,
	radiolinkFailure = 5,
	rlc_unrecoverableError = 6,
	cellUpdateCause_ext = 7,
};
typedef Enumerated<CONSTRAINED, 7> CellUpdateCause;

enum CellUpdateCauseextValues {
	mbms_Reception = 0,
	mbms_PTP_RB_Request = 1,
	dummy = 2,
	spare1 = 3,
};
typedef Enumerated<CONSTRAINED, 3> CellUpdateCauseext;

enum ChipRateCapabilityValues {
	mcps3_84 = 0,
	mcps1_28 = 1,
};
typedef Enumerated<CONSTRAINED, 1> ChipRateCapability;

enum CipheringAlgorithmValues {
	uea0 = 0,
	uea1 = 1,
};
typedef Enumerated<CONSTRAINED, 1> CipheringAlgorithm;

enum CipheringAlgorithmr7Values {
	uea0 = 0,
	uea1 = 1,
	uea2 = 2,
};
typedef Enumerated<CONSTRAINED, 2> CipheringAlgorithmr7;

typedef _Null Dummy;

class CipheringModeCommand : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CipheringModeCommand(): Choices(&theInfo) {}
};

class CipheringModeCommandr7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CipheringModeCommandr7(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 32> RBIdentity;

typedef Integer<CONSTRAINED, 0, 4095> RLCSequenceNumber;

class RBActivationTimeInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RBActivationTimeInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<RBActivationTimeInfo, CONSTRAINED, 1, maxRB> RBActivationTimeInfoList;

class CipheringModeInfo : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	CipheringModeInfo(): Sequence(&theInfo) {}
};

class CipheringModeInfor7 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	CipheringModeInfor7(): Sequence(&theInfo) {}
};

typedef OctetString<CONSTRAINED, 5, 7> IMSIDS41;

typedef OctetString<CONSTRAINED, 2, 17> TMSIDS41;

typedef _Null Spare3;

typedef _Null Spare2;

typedef _Null Spare1;

class CNPagedUEIdentity : Choice {
private:
	static const void *choicesInfo[8];
public:
	static const Info theInfo;
	CNPagedUEIdentity(): Choices(&theInfo) {}
};

typedef Boolean Fdd_Measurements;

typedef Boolean Tdd_Measurements;

typedef Boolean Gsm900;

typedef Boolean Dcs1800;

typedef Boolean Gsm1900;

class GSMMeasurements : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	GSMMeasurements(): Sequence(&theInfo) {}
};

typedef Boolean MultiCarrierMeasurements;

class CompressedModeMeasCapability : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CompressedModeMeasCapability(): Sequence(&theInfo) {}
};

typedef Boolean Tdd128_Measurements;

class CompressedModeMeasCapabilityLCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CompressedModeMeasCapabilityLCRr4(): Sequence(&theInfo) {}
};

enum adjacentFrequencyMeasurementsValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> adjacentFrequencyMeasurements;

class CompressedModeMeasCapabilityv860ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CompressedModeMeasCapabilityv860ext(): Sequence(&theInfo) {}
};

enum interBandMeasurementsValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> interBandMeasurements;

class CompressedModeMeasCapabilityv920ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CompressedModeMeasCapabilityv920ext(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 64> RadioFrequencyBandEUTRA;

typedef Boolean CompressedMode;

class CompressedModeMeasCapabEUTRA : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CompressedModeMeasCapabEUTRA(): Sequence(&theInfo) {}
};

typedef SequenceOf<CompressedModeMeasCapabEUTRA, CONSTRAINED, 1, maxFreqBandsEUTRA> CompressedModeMeasCapabEUTRAList;

enum RadioFrequencyBandFDDValues {
	fdd2100 = 0,
	fdd1900 = 1,
	fdd1800 = 2,
	bandVI = 3,
	bandIV = 4,
	bandV = 5,
	bandVII = 6,
	extension_indicator = 7,
};
typedef Enumerated<CONSTRAINED, 7> RadioFrequencyBandFDD;

typedef Boolean Dl_MeasurementsFDD;

typedef Boolean Ul_MeasurementsFDD;

class CompressedModeMeasCapabFDD : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	CompressedModeMeasCapabFDD(): Sequence(&theInfo) {}
};

typedef SequenceOf<CompressedModeMeasCapabFDD, CONSTRAINED, 1, maxFreqBandsFDD> CompressedModeMeasCapabFDDList;

enum RadioFrequencyBandFDD2Values {
	bandVIII = 0,
	bandIX = 1,
	bandX = 2,
	bandXI = 3,
	bandXII = 4,
	bandXIII = 5,
	bandXIV = 6,
	bandXV = 7,
	bandXVI = 8,
	bandXVII = 9,
	bandXVIII = 10,
	bandXIX = 11,
	bandXX = 12,
	bandXXI = 13,
	bandXXII = 14,
	extension_indicator = 15,
};
typedef Enumerated<CONSTRAINED, 15> RadioFrequencyBandFDD2;

typedef Boolean Dl_MeasurementsFDD;

typedef Boolean Ul_MeasurementsFDD;

class CompressedModeMeasCapabFDD2 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CompressedModeMeasCapabFDD2(): Sequence(&theInfo) {}
};

typedef SequenceOf<CompressedModeMeasCapabFDD2, CONSTRAINED, 1, maxFreqBandsFDD> CompressedModeMeasCapabFDDList2;

typedef Boolean Dl_MeasurementsFDD;

typedef Boolean Ul_MeasurementsFDD;

class CompressedModeMeasCapabFDDext : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	CompressedModeMeasCapabFDDext(): Sequence(&theInfo) {}
};

typedef SequenceOf<CompressedModeMeasCapabFDDext, CONSTRAINED, 1, maxFreqBandsFDD> CompressedModeMeasCapabFDDListext;

enum RadioFrequencyBandTDDValues {
	a = 0,
	b = 1,
	c = 2,
	d = 3,
};
typedef Enumerated<CONSTRAINED, 3> RadioFrequencyBandTDD;

typedef Boolean Dl_MeasurementsTDD;

typedef Boolean Ul_MeasurementsTDD;

class CompressedModeMeasCapabTDD : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	CompressedModeMeasCapabTDD(): Sequence(&theInfo) {}
};

typedef SequenceOf<CompressedModeMeasCapabTDD, CONSTRAINED, 1, maxFreqBandsTDD> CompressedModeMeasCapabTDDList;

enum RadioFrequencyBandGSMValues {
	gsm450 = 0,
	gsm480 = 1,
	gsm850 = 2,
	gsm900P = 3,
	gsm900E = 4,
	gsm1800 = 5,
	gsm1900 = 6,
	spare9 = 7,
	spare8 = 8,
	spare7 = 9,
	spare6 = 10,
	spare5 = 11,
	spare4 = 12,
	spare3 = 13,
	spare2 = 14,
	spare1 = 15,
};
typedef Enumerated<CONSTRAINED, 15> RadioFrequencyBandGSM;

typedef Boolean Dl_MeasurementsGSM;

typedef Boolean Ul_MeasurementsGSM;

class CompressedModeMeasCapabGSM : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	CompressedModeMeasCapabGSM(): Sequence(&theInfo) {}
};

typedef SequenceOf<CompressedModeMeasCapabGSM, CONSTRAINED, 1, maxFreqBandsGSM> CompressedModeMeasCapabGSMList;

typedef Boolean Dl_MeasurementsMC;

typedef Boolean Ul_MeasurementsMC;

class CompressedModeMeasCapabMC : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CompressedModeMeasCapabMC(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 28> NSIP;

typedef SequenceOf<NSIP, CONSTRAINED, 1, maxASC> InitialPriorityDelayList;

typedef Integer<CONSTRAINED, 0, 1> TPCStepSizeFDD;

typedef _Null Algorithm2;

class PowerControlAlgorithm : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PowerControlAlgorithm(): Choices(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 63> DLDPCCHBER;

class CPCHParameters : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CPCHParameters(): Sequence(&theInfo) {}
};

enum supportOfIntraFreqProximityIndicationValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> supportOfIntraFreqProximityIndication;

enum supportOfInterFreqProximityIndicationValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> supportOfInterFreqProximityIndication;

enum supportOfE_UtraProximityIndicationValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> supportOfE_UtraProximityIndication;

class CSGProximityIndicationCapability : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	CSGProximityIndicationCapability(): Sequence(&theInfo) {}
};

enum DLCapabilityWithSimultaneousHSDSCHConfigValues {
	kbps32 = 0,
	kbps64 = 1,
	kbps128 = 2,
	kbps384 = 3,
};
typedef Enumerated<CONSTRAINED, 3> DLCapabilityWithSimultaneousHSDSCHConfig;

typedef Integer<CONSTRAINED, 0, 511> PrimaryScramblingCode;

class PrimaryCPICHInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PrimaryCPICHInfo(): Sequence(&theInfo) {}
};

enum PCPICHUsageForChannelEstValues {
	mayBeUsed = 0,
	shallNotBeUsed = 1,
};
typedef Enumerated<CONSTRAINED, 1> PCPICHUsageForChannelEst;

typedef Integer<CONSTRAINED, 0, 149> DPCHFrameOffset;

typedef Integer<CONSTRAINED, 0, 9> FDPCHSlotFormat;

typedef Integer<CONSTRAINED, 1, 15> SecondaryScramblingCode;

typedef Integer<CONSTRAINED, 0, 255> ChannelisationCode256;

class SecondaryCPICHInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SecondaryCPICHInfo(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 255> Dl_ChannelisationCode;

typedef Integer<CONSTRAINED, 0, 5> TPCCombinationIndex;

enum STTDIndicationValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> STTDIndication;

class DLFDPCHInfoPerRLr7 : Sequence {
private:
	static const void *itemsInfo[8];
	static bool itemsPres[8];
public:
	static const Info theInfo;
	DLFDPCHInfoPerRLr7(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 255> EAGCHChannelisationCode;

class EAGCHInformation : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EAGCHInformation(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 127> EHICHChannelisationCode;

typedef Integer<CONSTRAINED, 0, 39> EHICHRGCHSignatureSequence;

class EHICHInformation : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	EHICHInformation(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 5> ERGCHCombinationIndex;

class ERGCHInformation : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ERGCHInformation(): Sequence(&theInfo) {}
};

typedef _Null ReleaseIndicator;

class E_RGCH_Info : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	E_RGCH_Info(): Choices(&theInfo) {}
};

class DLInformationPerSecondaryRL : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	DLInformationPerSecondaryRL(): Sequence(&theInfo) {}
};

typedef SequenceOf<DLInformationPerSecondaryRL, CONSTRAINED, 1, maxEDCHRL> DLInformationPerSecondaryRLList;

typedef Integer<CONSTRAINED, 1, 8> MaxNoDPCH_PDSCH_Codes;

enum MaxNoPhysChBitsReceivedValues {
	dummy = 0,
	b1200 = 1,
	b2400 = 2,
	b3600 = 3,
	b4800 = 4,
	b7200 = 5,
	b9600 = 6,
	b14400 = 7,
	b19200 = 8,
	b28800 = 9,
	b38400 = 10,
	b48000 = 11,
	b57600 = 12,
	b67200 = 13,
	b76800 = 14,
};
typedef Enumerated<CONSTRAINED, 14> MaxNoPhysChBitsReceived;

typedef Boolean SupportForSF_512;

typedef Boolean Dummy;

typedef _Null NotSupported;

enum MaxNoSCCPCHRLValues {
	rl1 = 0,
};
typedef Enumerated<CONSTRAINED, 0> MaxNoSCCPCHRL;

typedef Boolean SimultaneousSCCPCH_DPCH_DPDCH_Reception;

class Supported : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Supported(): Sequence(&theInfo) {}
};

class SimultaneousSCCPCHDPCHReception : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	SimultaneousSCCPCHDPCHReception(): Choices(&theInfo) {}
};

class DLPhysChCapabilityFDD : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	DLPhysChCapabilityFDD(): Sequence(&theInfo) {}
};

enum SupportOfDedicatedPilotsForChEstimationValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> SupportOfDedicatedPilotsForChEstimation;

class DLPhysChCapabilityFDDv380ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLPhysChCapabilityFDDv380ext(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 20> HSDSCHphysicallayercategoryext;

enum hsscchlessHsdschOperationValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> hsscchlessHsdschOperation;

enum enhancedFdpchValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> enhancedFdpch;

enum hsdschReception_CellFachValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> hsdschReception_CellFach;

enum hsdschReception_CellUraPchValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> hsdschReception_CellUraPch;

class DLPhysChCapabilityFDDv770ext : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	DLPhysChCapabilityFDDv770ext(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 21, 24> HSDSCHphysicallayercategoryext2;

enum supportOfTargetCellPreConfigValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> supportOfTargetCellPreConfig;

enum supportOfHsdschDrxOperationValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> supportOfHsdschDrxOperation;

class DLPhysChCapabilityFDDv860ext : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DLPhysChCapabilityFDDv860ext(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 25, 28> HSDSCHphysicallayercategoryext3;

enum supportOfMimoOnlySingleStreamValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> supportOfMimoOnlySingleStream;

class DLPhysChCapabilityFDDv920ext : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DLPhysChCapabilityFDDv920ext(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 14> MaxTSPerFrame;

typedef Integer<CONSTRAINED, 1, 224> MaxPhysChPerFrame;

enum MinimumSFDLValues {
	sf1 = 0,
	sf16 = 1,
};
typedef Enumerated<CONSTRAINED, 1> MinimumSFDL;

typedef Boolean SupportOfPDSCH;

typedef Integer<CONSTRAINED, 1, 16> MaxPhysChPerTS;

class DLPhysChCapabilityTDD : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	DLPhysChCapabilityTDD(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 6> MaxTSPerSubFramer4;

typedef Integer<CONSTRAINED, 1, 96> MaxPhysChPerSubFramer4;

typedef Boolean SupportOfPDSCH;

typedef Boolean SupportOf8PSK;

class DLPhysChCapabilityTDDLCRr4 : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	DLPhysChCapabilityTDDLCRr4(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 64> MultiCarrierHSDSCHphysicallayercategory;

class DLPhysChCapabilityTDD128v770ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLPhysChCapabilityTDD128v770ext(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 64> HSDSCHphysicallayercategoryextension;

typedef Integer<CONSTRAINED, 1, 36> MultiCarrierHSDSCHphysicallayercategoryextension;

enum supportOfSFModeForHSPDSCHDualStreamValues {
	sf1 = 0,
	sf1sf16 = 1,
};
typedef Enumerated<CONSTRAINED, 1> supportOfSFModeForHSPDSCHDualStream;

class DLPhysChCapabilityTDD128v860ext : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DLPhysChCapabilityTDD128v860ext(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 448> MaxPhysChPerFrame768;

enum MinimumSFDL768Values {
	sf1 = 0,
	sf32 = 1,
};
typedef Enumerated<CONSTRAINED, 1> MinimumSFDL768;

typedef Boolean SupportOfPDSCH;

typedef Integer<CONSTRAINED, 1, 64> HSDSCHphysicallayercategory;

typedef _Null Unsupported;

class Tdd768_hspdsch : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Tdd768_hspdsch(): Choices(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 32> MaxPhysChPerTS768;

class DLPhysChCapabilityTDD768 : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	DLPhysChCapabilityTDD768(): Sequence(&theInfo) {}
};

typedef Boolean SupportOfPDSCH;

class DLPhysChCapabilityInfoTDD768 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	DLPhysChCapabilityInfoTDD768(): Sequence(&theInfo) {}
};

enum MaxNoBitsValues {
	b640 = 0,
	b1280 = 1,
	b2560 = 2,
	b3840 = 3,
	b5120 = 4,
	b6400 = 5,
	b7680 = 6,
	b8960 = 7,
	b10240 = 8,
	b20480 = 9,
	b40960 = 10,
	b81920 = 11,
	b163840 = 12,
};
typedef Enumerated<CONSTRAINED, 12> MaxNoBits;

typedef _Null NotSupported;

class TurboSupport : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	TurboSupport(): Choices(&theInfo) {}
};

enum MaxSimultaneousTransChsDLValues {
	e4 = 0,
	e8 = 1,
	e16 = 2,
	e32 = 3,
};
typedef Enumerated<CONSTRAINED, 3> MaxSimultaneousTransChsDL;

typedef Integer<CONSTRAINED, 1, 8> MaxSimultaneousCCTrCHCount;

enum MaxTransportBlocksDLValues {
	tb4 = 0,
	tb8 = 1,
	tb16 = 2,
	tb32 = 3,
	tb48 = 4,
	tb64 = 5,
	tb96 = 6,
	tb128 = 7,
	tb256 = 8,
	tb512 = 9,
};
typedef Enumerated<CONSTRAINED, 9> MaxTransportBlocksDL;

enum MaxNumberOfTFCDLValues {
	tfc16 = 0,
	tfc32 = 1,
	tfc48 = 2,
	tfc64 = 3,
	tfc96 = 4,
	tfc128 = 5,
	tfc256 = 6,
	tfc512 = 7,
	tfc1024 = 8,
};
typedef Enumerated<CONSTRAINED, 8> MaxNumberOfTFCDL;

enum MaxNumberOfTFValues {
	tf32 = 0,
	tf64 = 1,
	tf128 = 2,
	tf256 = 3,
	tf512 = 4,
	tf1024 = 5,
};
typedef Enumerated<CONSTRAINED, 5> MaxNumberOfTF;

class DLTransChCapability : Sequence {
private:
	static const void *itemsInfo[8];
	static bool itemsPres[8];
public:
	static const Info theInfo;
	DLTransChCapability(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 8> TransmissionProbability;

typedef Integer<CONSTRAINED, 0, 32> MaximumBitRate;

class DRACSysInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DRACSysInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<DRACSysInfo, CONSTRAINED, 1, maxDRACclasses> DRACSysInfoList;

typedef BitString<CONSTRAINED, 16, 16> DSCHRNTI;

enum DelayRestrictionFlagValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> DelayRestrictionFlag;

typedef BitString<CONSTRAINED, 16, 16> ERNTI;

typedef BitString<CONSTRAINED, 32, 32> ESNDS41;

enum EstablishmentCauseValues {
	originatingConversationalCall = 0,
	originatingStreamingCall = 1,
	originatingInteractiveCall = 2,
	originatingBackgroundCall = 3,
	originatingSubscribedTrafficCall = 4,
	terminatingConversationalCall = 5,
	terminatingStreamingCall = 6,
	terminatingInteractiveCall = 7,
	terminatingBackgroundCall = 8,
	emergencyCall = 9,
	interRAT_CellReselection = 10,
	interRAT_CellChangeOrder = 11,
	registration = 12,
	detach = 13,
	originatingHighPrioritySignalling = 14,
	originatingLowPrioritySignalling = 15,
	callRe_establishment = 16,
	terminatingHighPrioritySignalling = 17,
	terminatingLowPrioritySignalling = 18,
	terminatingCauseUnknown = 19,
	mbms_Reception = 20,
	mbms_PTP_RB_Request = 21,
	spare10 = 22,
	spare9 = 23,
	spare8 = 24,
	spare7 = 25,
	spare6 = 26,
	spare5 = 27,
	spare4 = 28,
	spare3 = 29,
	spare2 = 30,
	spare1 = 31,
};
typedef Enumerated<CONSTRAINED, 31> EstablishmentCause;

typedef _Null ConfigurationUnsupported;

typedef _Null PhysicalChannelFailure;

typedef _Null IncompatibleSimultaneousReconfiguration;

typedef Integer<CONSTRAINED, 1, maxTGPS> TGPSI;

enum ProtocolErrorCauseValues {
	asn1_ViolationOrEncodingError = 0,
	messageTypeNonexistent = 1,
	messageNotCompatibleWithReceiverState = 2,
	ie_ValueNotComprehended = 3,
	informationElementMissing = 4,
	messageExtensionNotComprehended = 5,
	spare2 = 6,
	spare1 = 7,
};
typedef Enumerated<CONSTRAINED, 7> ProtocolErrorCause;

class Type1 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Type1(): Sequence(&theInfo) {}
};

typedef _Null Spare;

class DiagnosticsType : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DiagnosticsType(): Choices(&theInfo) {}
};

class ProtocolErrorInformation : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ProtocolErrorInformation(): Sequence(&theInfo) {}
};

typedef _Null CellUpdateOccurred;

typedef _Null InvalidConfiguration;

typedef _Null ConfigurationIncomplete;

typedef _Null UnsupportedMeasurement;

typedef _Null MbmsSessionAlreadyReceivedCorrectly;

typedef _Null LowerPriorityMBMSService;

typedef _Null Spare5;

typedef _Null Spare4;

typedef _Null Spare3;

typedef _Null Spare2;

typedef _Null Spare1;

class FailureCauseWithProtErr : Choice {
private:
	static const void *choicesInfo[16];
public:
	static const Info theInfo;
	FailureCauseWithProtErr(): Choices(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 3> RRCTransactionIdentifier;

class FailureCauseWithProtErrTrId : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	FailureCauseWithProtErrTrId(): Sequence(&theInfo) {}
};

enum GANSSModeValues {
	networkBased = 0,
	uEBased = 1,
	both = 2,
	none = 3,
};
typedef Enumerated<CONSTRAINED, 3> GANSSMode;

typedef _Null NoRelease;

enum ReleaseCauseValues {
	normalEvent = 0,
	unspecified = 1,
	pre_emptiveRelease = 2,
	congestion = 3,
	re_establishmentReject = 4,
	directedsignallingconnectionre_establishment = 5,
	userInactivity = 6,
	spare = 7,
};
typedef Enumerated<CONSTRAINED, 7> ReleaseCause;

class Release : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Release(): Sequence(&theInfo) {}
};

class RRCConnectionReleaseInformation : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RRCConnectionReleaseInformation(): Choices(&theInfo) {}
};

typedef _Null All;

typedef BitString<CONSTRAINED, 31, 31> U_RNTI_BitMaskIndex_b1;

typedef BitString<CONSTRAINED, 30, 30> U_RNTI_BitMaskIndex_b2;

typedef BitString<CONSTRAINED, 29, 29> U_RNTI_BitMaskIndex_b3;

typedef BitString<CONSTRAINED, 28, 28> U_RNTI_BitMaskIndex_b4;

typedef BitString<CONSTRAINED, 27, 27> U_RNTI_BitMaskIndex_b5;

typedef BitString<CONSTRAINED, 26, 26> U_RNTI_BitMaskIndex_b6;

typedef BitString<CONSTRAINED, 25, 25> U_RNTI_BitMaskIndex_b7;

typedef BitString<CONSTRAINED, 24, 24> U_RNTI_BitMaskIndex_b8;

typedef BitString<CONSTRAINED, 23, 23> U_RNTI_BitMaskIndex_b9;

typedef BitString<CONSTRAINED, 22, 22> U_RNTI_BitMaskIndex_b10;

typedef BitString<CONSTRAINED, 21, 21> U_RNTI_BitMaskIndex_b11;

typedef BitString<CONSTRAINED, 20, 20> U_RNTI_BitMaskIndex_b12;

typedef BitString<CONSTRAINED, 19, 19> U_RNTI_BitMaskIndex_b13;

typedef BitString<CONSTRAINED, 18, 18> U_RNTI_BitMaskIndex_b14;

typedef BitString<CONSTRAINED, 17, 17> U_RNTI_BitMaskIndex_b15;

typedef BitString<CONSTRAINED, 16, 16> U_RNTI_BitMaskIndex_b16;

typedef BitString<CONSTRAINED, 15, 15> U_RNTI_BitMaskIndex_b17;

typedef BitString<CONSTRAINED, 14, 14> U_RNTI_BitMaskIndex_b18;

typedef BitString<CONSTRAINED, 13, 13> U_RNTI_BitMaskIndex_b19;

typedef BitString<CONSTRAINED, 12, 12> U_RNTI_BitMaskIndex_b20;

typedef BitString<CONSTRAINED, 11, 11> U_RNTI_BitMaskIndex_b21;

typedef BitString<CONSTRAINED, 10, 10> U_RNTI_BitMaskIndex_b22;

typedef BitString<CONSTRAINED, 9, 9> U_RNTI_BitMaskIndex_b23;

typedef BitString<CONSTRAINED, 8, 8> U_RNTI_BitMaskIndex_b24;

typedef BitString<CONSTRAINED, 7, 7> U_RNTI_BitMaskIndex_b25;

typedef BitString<CONSTRAINED, 6, 6> U_RNTI_BitMaskIndex_b26;

typedef BitString<CONSTRAINED, 5, 5> U_RNTI_BitMaskIndex_b27;

typedef BitString<CONSTRAINED, 4, 4> U_RNTI_BitMaskIndex_b28;

typedef BitString<CONSTRAINED, 3, 3> U_RNTI_BitMaskIndex_b29;

typedef BitString<CONSTRAINED, 2, 2> U_RNTI_BitMaskIndex_b30;

typedef BitString<CONSTRAINED, 1, 1> U_RNTI_BitMaskIndex_b31;

class URNTIGroup : Choice {
private:
	static const void *choicesInfo[32];
public:
	static const Info theInfo;
	URNTIGroup(): Choices(&theInfo) {}
};

class GroupReleaseInformation : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	GroupReleaseInformation(): Sequence(&theInfo) {}
};

class GroupIdentityWithReleaseInformation : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	GroupIdentityWithReleaseInformation(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED, 16, 16> HRNTI;

enum HighMobilityDetectedValues {
	high_MobilityDetected = 0,
};
typedef Enumerated<CONSTRAINED, 0> HighMobilityDetected;

typedef BitString<CONSTRAINED, 4, 4> UESpecificBehaviourInformation1idle;

typedef BitString<CONSTRAINED, 8, 8> UESpecificBehaviourInformation1interRAT;

typedef Boolean IdleInterval;

class IdleIntervalMeasCapabEUTRA : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	IdleIntervalMeasCapabEUTRA(): Sequence(&theInfo) {}
};

typedef SequenceOf<IdleIntervalMeasCapabEUTRA, CONSTRAINED, 1, maxFreqBandsEUTRA> IdleIntervalMeasCapabEUTRAList;

class IMSIandESNDS41 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	IMSIandESNDS41(): Sequence(&theInfo) {}
};

class TMSIandLAIGSMMAP : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TMSIandLAIGSMMAP(): Sequence(&theInfo) {}
};

class PTMSIandRAIGSMMAP : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PTMSIandRAIGSMMAP(): Sequence(&theInfo) {}
};

class InitialUEIdentity : Choice {
private:
	static const void *choicesInfo[8];
public:
	static const Info theInfo;
	InitialUEIdentity(): Choices(&theInfo) {}
};

typedef BitString<CONSTRAINED, 32, 32> MessageAuthenticationCode;

typedef Integer<CONSTRAINED, 0, 15> RRCMessageSequenceNumber;

class IntegrityCheckInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	IntegrityCheckInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<RRCMessageSequenceNumber, CONSTRAINED, 4, 5> RRCMessageSequenceNumberList;

class IntegrityProtActivationInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IntegrityProtActivationInfo(): Sequence(&theInfo) {}
};

enum IntegrityProtectionAlgorithmValues {
	uia1 = 0,
};
typedef Enumerated<CONSTRAINED, 0> IntegrityProtectionAlgorithm;

enum IntegrityProtectionAlgorithmr7Values {
	uia1 = 0,
	uia2 = 1,
};
typedef Enumerated<CONSTRAINED, 1> IntegrityProtectionAlgorithmr7;

typedef BitString<CONSTRAINED, 32, 32> IntegrityProtInitNumber;

class StartIntegrityProtection : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	StartIntegrityProtection(): Sequence(&theInfo) {}
};

class Modify : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Modify(): Sequence(&theInfo) {}
};

class IntegrityProtectionModeCommand : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	IntegrityProtectionModeCommand(): Choices(&theInfo) {}
};

class IntegrityProtectionModeInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	IntegrityProtectionModeInfo(): Sequence(&theInfo) {}
};

class IntegrityProtectionModeInfor7 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	IntegrityProtectionModeInfor7(): Sequence(&theInfo) {}
};

enum MaxHcContextSpaceValues {
	dummy = 0,
	by1024 = 1,
	by2048 = 2,
	by4096 = 3,
	by8192 = 4,
};
typedef Enumerated<CONSTRAINED, 4> MaxHcContextSpace;

enum MaxHcContextSpacer5extValues {
	by16384 = 0,
	by32768 = 1,
	by65536 = 2,
	by131072 = 3,
};
typedef Enumerated<CONSTRAINED, 3> MaxHcContextSpacer5ext;

enum MaxROHCContextSessionsr4Values {
	s2 = 0,
	s4 = 1,
	s8 = 2,
	s12 = 3,
	s16 = 4,
	s24 = 5,
	s32 = 6,
	s48 = 7,
	s64 = 8,
	s128 = 9,
	s256 = 10,
	s512 = 11,
	s1024 = 12,
	s16384 = 13,
};
typedef Enumerated<CONSTRAINED, 13> MaxROHCContextSessionsr4;

enum MaximumAMEntityNumberRLCCapValues {
	dummy = 0,
	am4 = 1,
	am5 = 2,
	am6 = 3,
	am8 = 4,
	am16 = 5,
	am30 = 6,
};
typedef Enumerated<CONSTRAINED, 6> MaximumAMEntityNumberRLCCap;

enum MaximumRLCWindowSizeValues {
	mws2047 = 0,
	mws4095 = 1,
};
typedef Enumerated<CONSTRAINED, 1> MaximumRLCWindowSize;

enum MaxNoDPDCHBitsTransmittedValues {
	b600 = 0,
	b1200 = 1,
	b2400 = 2,
	b4800 = 3,
	b9600 = 4,
	b19200 = 5,
	b28800 = 6,
	b38400 = 7,
	b48000 = 8,
	b57600 = 9,
};
typedef Enumerated<CONSTRAINED, 9> MaxNoDPDCHBitsTransmitted;

enum MaxNumberOfTFCULValues {
	dummy1 = 0,
	dummy2 = 1,
	tfc16 = 2,
	tfc32 = 3,
	tfc48 = 4,
	tfc64 = 5,
	tfc96 = 6,
	tfc128 = 7,
	tfc256 = 8,
	tfc512 = 9,
	tfc1024 = 10,
};
typedef Enumerated<CONSTRAINED, 10> MaxNumberOfTFCUL;

enum MaxPhysChPerTimeslotValues {
	ts1 = 0,
	ts2 = 1,
};
typedef Enumerated<CONSTRAINED, 1> MaxPhysChPerTimeslot;

typedef Integer<CONSTRAINED, 1, 4> MaxPhysChPerTimeslotLCRr7;

enum MaxSimultaneousTransChsULValues {
	dummy = 0,
	e4 = 1,
	e8 = 2,
	e16 = 3,
	e32 = 4,
};
typedef Enumerated<CONSTRAINED, 4> MaxSimultaneousTransChsUL;

enum MaxTransportBlocksULValues {
	dummy = 0,
	tb4 = 1,
	tb8 = 2,
	tb16 = 3,
	tb32 = 4,
	tb48 = 5,
	tb64 = 6,
	tb96 = 7,
	tb128 = 8,
	tb256 = 9,
	tb512 = 10,
};
typedef Enumerated<CONSTRAINED, 10> MaxTransportBlocksUL;

class MeasurementCapability : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MeasurementCapability(): Sequence(&theInfo) {}
};

class MeasurementCapabilityExt : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	MeasurementCapabilityExt(): Sequence(&theInfo) {}
};

class MeasurementCapabilityExt2 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	MeasurementCapabilityExt2(): Sequence(&theInfo) {}
};

class MeasurementCapabilityExt3 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasurementCapabilityExt3(): Sequence(&theInfo) {}
};

class MeasurementCapabilityr4ext : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MeasurementCapabilityr4ext(): Sequence(&theInfo) {}
};

class MeasurementCapabilityv860ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasurementCapabilityv860ext(): Sequence(&theInfo) {}
};

class MeasurementCapabilityv920ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasurementCapabilityv920ext(): Sequence(&theInfo) {}
};

class MeasurementCapabilityTDD : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasurementCapabilityTDD(): Sequence(&theInfo) {}
};

enum MinimumSFULValues {
	sf1 = 0,
	sf2 = 1,
	sf4 = 2,
	sf8 = 3,
	dummy = 4,
};
typedef Enumerated<CONSTRAINED, 4> MinimumSFUL;

enum MultiModeCapabilityValues {
	tdd = 0,
	fdd = 1,
	fdd_tdd = 2,
};
typedef Enumerated<CONSTRAINED, 2> MultiModeCapability;

typedef Boolean SupportOfGSM;

typedef Boolean SupportOfMulticarrier;

class MultiRATCapability : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MultiRATCapability(): Sequence(&theInfo) {}
};

typedef Boolean SupportOfUTRAN_ToGERAN_NACC;

class MultiModeRATCapabilityv590ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MultiModeRATCapabilityv590ext(): Sequence(&theInfo) {}
};

enum supportOfHandoverToGANValues {
	doesSupportHandoverToGAN = 0,
};
typedef Enumerated<CONSTRAINED, 0> supportOfHandoverToGAN;

class MultiModeRATCapabilityv680ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MultiModeRATCapabilityv680ext(): Sequence(&theInfo) {}
};

enum supportOfPSHandoverToGANValues {
	doesSupportPSHandoverToGAN = 0,
};
typedef Enumerated<CONSTRAINED, 0> supportOfPSHandoverToGAN;

class MultiModeRATCapabilityv770ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MultiModeRATCapabilityv770ext(): Sequence(&theInfo) {}
};

enum supportOfEUTRAFDDValues {
	doesSupportEUTRAFDD = 0,
};
typedef Enumerated<CONSTRAINED, 0> supportOfEUTRAFDD;

enum supportOfInterRATHOToEUTRAFDDValues {
	doesSupportInterRATHOToEUTRAFDD = 0,
};
typedef Enumerated<CONSTRAINED, 0> supportOfInterRATHOToEUTRAFDD;

enum supportOfEUTRATDDValues {
	doesSupportEUTRATDD = 0,
};
typedef Enumerated<CONSTRAINED, 0> supportOfEUTRATDD;

enum supportOfInterRATHOToEUTRATDDValues {
	doesSupportInterRATHOToEUTRATDD = 0,
};
typedef Enumerated<CONSTRAINED, 0> supportOfInterRATHOToEUTRATDD;

typedef BitString<CONSTRAINED, 4, 4> EutraFeatureGroupIndicators;

class MultiModeRATCapabilityv860ext : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	MultiModeRATCapabilityv860ext(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 7> N300;

typedef Integer<CONSTRAINED, 0, 7> N301;

typedef Integer<CONSTRAINED, 0, 7> N302;

typedef Integer<CONSTRAINED, 0, 7> N304;

typedef Integer<CONSTRAINED, 1, 8> N308;

typedef Integer<CONSTRAINED, 0, 7> N310;

enum N312Values {
	s1 = 0,
	s50 = 1,
	s100 = 2,
	s200 = 3,
	s400 = 4,
	s600 = 5,
	s800 = 6,
	s1000 = 7,
};
typedef Enumerated<CONSTRAINED, 7> N312;

enum N312extValues {
	s2 = 0,
	s4 = 1,
	s10 = 2,
	s20 = 3,
};
typedef Enumerated<CONSTRAINED, 3> N312ext;

enum N312r5Values {
	s1 = 0,
	s2 = 1,
	s4 = 2,
	s10 = 3,
	s20 = 4,
	s50 = 5,
	s100 = 6,
	s200 = 7,
	s400 = 8,
	s600 = 9,
	s800 = 10,
	s1000 = 11,
};
typedef Enumerated<CONSTRAINED, 11> N312r5;

enum N313Values {
	s1 = 0,
	s2 = 1,
	s4 = 2,
	s10 = 3,
	s20 = 4,
	s50 = 5,
	s100 = 6,
	s200 = 7,
};
typedef Enumerated<CONSTRAINED, 7> N313;

enum N315Values {
	s1 = 0,
	s50 = 1,
	s100 = 2,
	s200 = 3,
	s400 = 4,
	s600 = 5,
	s800 = 6,
	s1000 = 7,
};
typedef Enumerated<CONSTRAINED, 7> N315;

enum N315extValues {
	s2 = 0,
	s4 = 1,
	s10 = 2,
	s20 = 3,
};
typedef Enumerated<CONSTRAINED, 3> N315ext;

enum N315r5Values {
	s1 = 0,
	s2 = 1,
	s4 = 2,
	s10 = 3,
	s20 = 4,
	s50 = 5,
	s100 = 6,
	s200 = 7,
	s400 = 8,
	s600 = 9,
	s800 = 10,
	s1000 = 11,
};
typedef Enumerated<CONSTRAINED, 11> N315r5;

enum supportOfIntraFreqSIAcquisitionForHOValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> supportOfIntraFreqSIAcquisitionForHO;

enum supportOfInterFreqSIAcquisitionForHOValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> supportOfInterFreqSIAcquisitionForHO;

enum supportOfE_UtraSIAcquisitionForHOValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> supportOfE_UtraSIAcquisitionForHO;

class NeighCellSIAcquisitionCapability : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	NeighCellSIAcquisitionCapability(): Sequence(&theInfo) {}
};

class NetworkAssistedGANSSSupportedList : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	NetworkAssistedGANSSSupportedList(): Sequence(&theInfo) {}
};

class NetworkAssistedGANSSSupportedListv860ext : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	NetworkAssistedGANSSSupportedListv860ext(): Sequence(&theInfo) {}
};

enum NetworkAssistedGPSSupportedValues {
	networkBased = 0,
	ue_Based = 1,
	bothNetworkAndUE_Based = 2,
	noNetworkAssistedGPS = 3,
};
typedef Enumerated<CONSTRAINED, 3> NetworkAssistedGPSSupported;

enum PagingCauseValues {
	terminatingConversationalCall = 0,
	terminatingStreamingCall = 1,
	terminatingInteractiveCall = 2,
	terminatingBackgroundCall = 3,
	terminatingHighPrioritySignalling = 4,
	terminatingLowPrioritySignalling = 5,
	terminatingCauseUnknown = 6,
	spare = 7,
};
typedef Enumerated<CONSTRAINED, 7> PagingCause;

class Cn_Identity : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	Cn_Identity(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED, 12, 12> SRNCIdentity;

typedef BitString<CONSTRAINED, 20, 20> SRNTI;

class URNTI : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	URNTI(): Sequence(&theInfo) {}
};

class Cn_OriginatedPage_connectedMode_UE : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	Cn_OriginatedPage_connectedMode_UE(): Sequence(&theInfo) {}
};

class Utran_Identity : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Utran_Identity(): Sequence(&theInfo) {}
};

class PagingRecord : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PagingRecord(): Choices(&theInfo) {}
};

class Cn_OriginatedPage_connectedMode_UE : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	Cn_OriginatedPage_connectedMode_UE(): Sequence(&theInfo) {}
};

class Utran_SingleUE_Identity : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	Utran_SingleUE_Identity(): Sequence(&theInfo) {}
};

typedef SequenceOf<GroupIdentityWithReleaseInformation, CONSTRAINED, 1 ,  maxURNTI_Group> Utran_GroupIdentity;

class PagingRecord2r5 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PagingRecord2r5(): Choices(&theInfo) {}
};

typedef SequenceOf<PagingRecord, CONSTRAINED, 1, maxPage1> PagingRecordList;

typedef SequenceOf<PagingRecord2r5, CONSTRAINED, 1, maxPage1> PagingRecord2Listr5;

typedef Boolean LosslessSRNS_RelocationSupport;

typedef _Null NotSupported;

class SupportForRfc2507 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	SupportForRfc2507(): Choices(&theInfo) {}
};

class PDCPCapability : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PDCPCapability(): Sequence(&theInfo) {}
};

typedef _Null NotSupported;

typedef Integer<CONSTRAINED, 0, 65535> ReverseCompressionDepth;

class Supported : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Supported(): Sequence(&theInfo) {}
};

class SupportForRfc3095 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	SupportForRfc3095(): Choices(&theInfo) {}
};

class PDCPCapabilityr4ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PDCPCapabilityr4ext(): Sequence(&theInfo) {}
};

typedef Boolean SupportForRfc3095ContextRelocation;

class PDCPCapabilityr5ext : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PDCPCapabilityr5ext(): Sequence(&theInfo) {}
};

enum losslessDLRLC_PDUSizeChangeValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> losslessDLRLC_PDUSizeChange;

class PDCPCapabilityr5ext2 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PDCPCapabilityr5ext2(): Sequence(&theInfo) {}
};

enum supportForCSVoiceoverHSPAValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> supportForCSVoiceoverHSPA;

class PDCPCapabilityv770ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PDCPCapabilityv770ext(): Sequence(&theInfo) {}
};

typedef Boolean Dummy;

class ULPhysChCapabilityFDD : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULPhysChCapabilityFDD(): Sequence(&theInfo) {}
};

class FddPhysChCapability : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	FddPhysChCapability(): Sequence(&theInfo) {}
};

typedef Boolean SupportOfPUSCH;

class ULPhysChCapabilityTDD : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	ULPhysChCapabilityTDD(): Sequence(&theInfo) {}
};

class TddPhysChCapability : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TddPhysChCapability(): Sequence(&theInfo) {}
};

class PhysicalChannelCapability : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PhysicalChannelCapability(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 7, 7> Edch_PhysicalLayerCategory_extension;

enum discontinuousDpcchTransmissionValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> discontinuousDpcchTransmission;

enum slotFormat4Values {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> slotFormat4;

class ULPhysChCapabilityFDDv770ext : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	ULPhysChCapabilityFDDv770ext(): Sequence(&theInfo) {}
};

class FddPhysChCapability : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	FddPhysChCapability(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 16> Tdd_edch_PhysicalLayerCategory;

class Supported : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Supported(): Sequence(&theInfo) {}
};

typedef _Null Unsupported;

class Tdd384_edch : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Tdd384_edch(): Choices(&theInfo) {}
};

class ULPhysChCapabilityTDD384v770ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULPhysChCapabilityTDD384v770ext(): Sequence(&theInfo) {}
};

class TddPhysChCapability_384 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	TddPhysChCapability_384(): Sequence(&theInfo) {}
};

typedef Boolean SupportOfPUSCH;

typedef Integer<CONSTRAINED, 1, 16> Tdd_edch_PhysicalLayerCategory;

class Supported : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Supported(): Sequence(&theInfo) {}
};

typedef _Null Unsupported;

class Tdd384_edch : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Tdd384_edch(): Choices(&theInfo) {}
};

class ULPhysChCapabilityTDD768 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	ULPhysChCapabilityTDD768(): Sequence(&theInfo) {}
};

class TddPhysChCapability_768 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TddPhysChCapability_768(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 6> Tdd_edch_PhysicalLayerCategory;

class Supported : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Supported(): Sequence(&theInfo) {}
};

typedef _Null Unsupported;

class Tdd128_edch : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Tdd128_edch(): Choices(&theInfo) {}
};

class ULPhysChCapabilityTDD128v770ext : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULPhysChCapabilityTDD128v770ext(): Sequence(&theInfo) {}
};

class TddPhysChCapability_128 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TddPhysChCapability_128(): Sequence(&theInfo) {}
};

class PhysicalChannelCapabilityv770ext : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	PhysicalChannelCapabilityv770ext(): Sequence(&theInfo) {}
};

class FddPhysChCapability : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	FddPhysChCapability(): Sequence(&theInfo) {}
};

class TddPhysChCapability_128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	TddPhysChCapability_128(): Sequence(&theInfo) {}
};

class PhysicalChannelCapabilityv860ext : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PhysicalChannelCapabilityv860ext(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 8, 9> Edch_PhysicalLayerCategory_extension2;

class ULPhysChCapabilityFDDv920ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULPhysChCapabilityFDDv920ext(): Sequence(&theInfo) {}
};

class FddPhysChCapability : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	FddPhysChCapability(): Sequence(&theInfo) {}
};

class PhysicalChannelCapabilityv920ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PhysicalChannelCapabilityv920ext(): Sequence(&theInfo) {}
};

class TddPhysChCapability_768 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TddPhysChCapability_768(): Sequence(&theInfo) {}
};

class ULPhysChCapabilityInfoTDD128v770ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULPhysChCapabilityInfoTDD128v770ext(): Sequence(&theInfo) {}
};

class TddPhysChCapability_128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	TddPhysChCapability_128(): Sequence(&theInfo) {}
};

class PhysicalChannelCapabilityInfov770ext : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PhysicalChannelCapabilityInfov770ext(): Sequence(&theInfo) {}
};

typedef Boolean SupportOfPUSCH;

typedef Boolean SupportOf8PSK;

class ULPhysChCapabilityTDDLCRr4 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	ULPhysChCapabilityTDDLCRr4(): Sequence(&theInfo) {}
};

class Tdd128_PhysChCapability : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Tdd128_PhysChCapability(): Sequence(&theInfo) {}
};

class PhysicalChannelCapabilityLCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PhysicalChannelCapabilityLCRr4(): Sequence(&theInfo) {}
};

typedef Boolean Dummy;

typedef Boolean Dummy2;

class Supported : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	Supported(): Sequence(&theInfo) {}
};

typedef _Null Unsupported;

class Fdd_hspdsch : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Fdd_hspdsch(): Choices(&theInfo) {}
};

typedef _Null Unsupported;

class Tdd384_hspdsch : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Tdd384_hspdsch(): Choices(&theInfo) {}
};

typedef _Null Unsupported;

class Tdd128_hspdsch : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Tdd128_hspdsch(): Choices(&theInfo) {}
};

class PhysicalChannelCapabilityhspdschr5 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PhysicalChannelCapabilityhspdschr5(): Sequence(&theInfo) {}
};

enum numberOfRepetitionsPerSFNPeriodValues {
	c2 = 0,
	c3 = 1,
	c4 = 2,
	c5 = 3,
	c6 = 4,
	c7 = 5,
	c8 = 6,
	c9 = 7,
	c10 = 8,
	c12 = 9,
	c14 = 10,
	c16 = 11,
	c18 = 12,
	c20 = 13,
	c24 = 14,
	c28 = 15,
	c32 = 16,
	c36 = 17,
	c40 = 18,
	c48 = 19,
	c56 = 20,
	c64 = 21,
	c72 = 22,
	c80 = 23,
};
typedef Enumerated<CONSTRAINED, 23> numberOfRepetitionsPerSFNPeriod;

class PNBSCHAllocationr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PNBSCHAllocationr4(): Sequence(&theInfo) {}
};

typedef Boolean SupportEUTRA_FDD;

typedef Boolean SupportEUTRA_TDD;

class PreRedirectionInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PreRedirectionInfo(): Sequence(&theInfo) {}
};

enum ProtocolErrorIndicatorValues {
	noError = 0,
	errorOccurred = 1,
};
typedef Enumerated<CONSTRAINED, 1> ProtocolErrorIndicator;

typedef _Null NoError;

class ErrorOccurred : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ErrorOccurred(): Sequence(&theInfo) {}
};

class ProtocolErrorIndicatorWithMoreInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ProtocolErrorIndicatorWithMoreInfo(): Choices(&theInfo) {}
};

typedef _Null Asn1_ViolationOrEncodingError;

typedef _Null MessageTypeNonexistent;

enum ReceivedMessageTypeValues {
	activeSetUpdate = 0,
	cellChangeOrderFromUTRAN = 1,
	cellUpdateConfirm = 2,
	counterCheck = 3,
	downlinkDirectTransfer = 4,
	interRATHandoverCommand = 5,
	measurementControl = 6,
	pagingType2 = 7,
	physicalChannelReconfiguration = 8,
	physicalSharedChannelAllocation = 9,
	radioBearerReconfiguration = 10,
	radioBearerRelease = 11,
	radioBearerSetup = 12,
	rrcConnectionRelease = 13,
	rrcConnectionReject = 14,
	rrcConnectionSetup = 15,
	securityModeCommand = 16,
	signallingConnectionRelease = 17,
	transportChannelReconfiguration = 18,
	transportFormatCombinationControl = 19,
	ueCapabilityEnquiry = 20,
	ueCapabilityInformationConfirm = 21,
	uplinkPhysicalChannelControl = 22,
	uraUpdateConfirm = 23,
	utranMobilityInformation = 24,
	assistanceDataDelivery = 25,
	spare6 = 26,
	spare5 = 27,
	spare4 = 28,
	spare3 = 29,
	spare2 = 30,
	spare1 = 31,
};
typedef Enumerated<CONSTRAINED, 31> ReceivedMessageType;

class IdentificationOfReceivedMessage : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	IdentificationOfReceivedMessage(): Sequence(&theInfo) {}
};

typedef _Null Spare1;

typedef _Null Spare2;

class Type1 : Choice {
private:
	static const void *choicesInfo[8];
public:
	static const Info theInfo;
	Type1(): Choices(&theInfo) {}
};

typedef _Null Spare;

class DiagnosticsType : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DiagnosticsType(): Choices(&theInfo) {}
};

class ProtocolErrorMoreInformation : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ProtocolErrorMoreInformation(): Sequence(&theInfo) {}
};

enum RadioFrequencyBandTDDListValues {
	a = 0,
	b = 1,
	c = 2,
	ab = 3,
	ac = 4,
	bc = 5,
	abc = 6,
	spare = 7,
};
typedef Enumerated<CONSTRAINED, 7> RadioFrequencyBandTDDList;

enum RadioFrequencyBandTDDListr7Values {
	a = 0,
	b = 1,
	c = 2,
	d = 3,
	ab = 4,
	ac = 5,
	ad = 6,
	bc = 7,
	bd = 8,
	cd = 9,
	abc = 10,
	abd = 11,
	acd = 12,
	bcd = 13,
	abcd = 14,
	notabcd = 15,
};
typedef Enumerated<CONSTRAINED, 15> RadioFrequencyBandTDDListr7;

enum RadioFrequencyBandTDDextValues {
	e = 0,
	f = 1,
	g = 2,
	h = 3,
	i = 4,
	j = 5,
	k = 6,
	l = 7,
	m = 8,
	n = 9,
	o = 10,
	p = 11,
	spare4 = 12,
	spare3 = 13,
	spare2 = 14,
	spare1 = 15,
};
typedef Enumerated<CONSTRAINED, 15> RadioFrequencyBandTDDext;

typedef SequenceOf<RadioFrequencyBandTDDext, CONSTRAINED, 1, maxFreqBandsTDD_ext> RadioFrequencyBandTDDextList;

typedef Boolean T314_expired;

typedef Boolean T315_expired;

class Rbtimerindicator : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Rbtimerindicator(): Sequence(&theInfo) {}
};

enum ReEstablishmentTimerValues {
	useT314 = 0,
	useT315 = 1,
};
typedef Enumerated<CONSTRAINED, 1> ReEstablishmentTimer;

enum InterRATInfoValues {
	gsm = 0,
};
typedef Enumerated<CONSTRAINED, 0> InterRATInfo;

class RedirectionInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RedirectionInfo(): Choices(&theInfo) {}
};

enum FrequencyBandValues {
	dcs1800BandUsed = 0,
	pcs1900BandUsed = 1,
};
typedef Enumerated<CONSTRAINED, 1> FrequencyBand;

typedef Integer<CONSTRAINED, 0, 7> NCC;

typedef Integer<CONSTRAINED, 0, 7> BCC;

class BSIC : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	BSIC(): Sequence(&theInfo) {}
};

class GSMTargetCellInfo : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	GSMTargetCellInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<GSMTargetCellInfo, CONSTRAINED, 1, maxGSMTargetCells> GSMTargetCellInfoList;

class InterRATInfor6 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	InterRATInfor6(): Sequence(&theInfo) {}
};

class RedirectionInfor6 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RedirectionInfor6(): Choices(&theInfo) {}
};

typedef _Null FrequencyInfo;

typedef _Null Gsm;

typedef Integer<CONSTRAINED, 0, 65535> EARFCN;

typedef Integer<CONSTRAINED, 0, 503> EUTRAPhysicalCellIdentity;

class EUTRABlacklistedCell : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EUTRABlacklistedCell(): Sequence(&theInfo) {}
};

typedef SequenceOf<EUTRABlacklistedCell, CONSTRAINED, 1, maxEUTRACellPerFreq> EUTRABlacklistedCellPerFreqList;

class EUTRATargetFreqInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	EUTRATargetFreqInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<EUTRATargetFreqInfo, CONSTRAINED, 1, maxEUTRATargetFreqs> EUTRATargetFreqInfoList;

class Eutra : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Eutra(): Sequence(&theInfo) {}
};

class InterRATInfov860ext : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	InterRATInfov860ext(): Choices(&theInfo) {}
};

class RedirectionInfov860ext : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RedirectionInfov860ext(): Choices(&theInfo) {}
};

enum RejectionCauseValues {
	congestion = 0,
	unspecified = 1,
};
typedef Enumerated<CONSTRAINED, 1> RejectionCause;

typedef Integer<CONSTRAINED, 1, 4> UEPowerClass;

enum TxRxFrequencySeparationValues {
	default_TxRx_separation = 0,
	spare2 = 1,
	spare1 = 2,
};
typedef Enumerated<CONSTRAINED, 2> TxRxFrequencySeparation;

class FddRF_Capability : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	FddRF_Capability(): Sequence(&theInfo) {}
};

class TddRF_Capability : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	TddRF_Capability(): Sequence(&theInfo) {}
};

class RFCapability : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RFCapability(): Sequence(&theInfo) {}
};

class TddRF_Capability : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	TddRF_Capability(): Sequence(&theInfo) {}
};

class RFCapabilityr4ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RFCapabilityr4ext(): Sequence(&theInfo) {}
};

class Tdd768RF_Capability : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Tdd768RF_Capability(): Sequence(&theInfo) {}
};

class RFCapabilityv770ext : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RFCapabilityv770ext(): Sequence(&theInfo) {}
};

class RFCapabilityv860ext : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RFCapabilityv860ext(): Sequence(&theInfo) {}
};

enum TotalRLCAMBufferSizeValues {
	dummy = 0,
	kb10 = 1,
	kb50 = 2,
	kb100 = 3,
	kb150 = 4,
	kb500 = 5,
	kb1000 = 6,
	spare = 7,
};
typedef Enumerated<CONSTRAINED, 7> TotalRLCAMBufferSize;

class RLCCapability : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RLCCapability(): Sequence(&theInfo) {}
};

enum TotalRLCAMBufferSizer5extValues {
	kb200 = 0,
	kb300 = 1,
	kb400 = 2,
	kb750 = 3,
};
typedef Enumerated<CONSTRAINED, 3> TotalRLCAMBufferSizer5ext;

class RLCCapabilityr5ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RLCCapabilityr5ext(): Sequence(&theInfo) {}
};

typedef Boolean SupportOfTwoLogicalChannel;

class RLCCapabilityv770ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RLCCapabilityv770ext(): Sequence(&theInfo) {}
};

enum TotalRLCAMBufferSizev920extValues {
	kb1150 = 0,
	kb1250 = 1,
};
typedef Enumerated<CONSTRAINED, 1> TotalRLCAMBufferSizev920ext;

class RLCCapabilityv920ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RLCCapabilityv920ext(): Sequence(&theInfo) {}
};

enum RRCStateIndicatorValues {
	cell_DCH = 0,
	cell_FACH = 1,
	cell_PCH = 2,
	ura_PCH = 3,
};
typedef Enumerated<CONSTRAINED, 3> RRCStateIndicator;

typedef BitString<CONSTRAINED, 10, 10> SRNTI2;

typedef BitString<CONSTRAINED> CipheringAlgorithmCap;

typedef BitString<CONSTRAINED> IntegrityProtectionAlgorithmCap;

class SecurityCapability : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SecurityCapability(): Sequence(&theInfo) {}
};

class SecondaryServingEDCHCellInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SecondaryServingEDCHCellInfo(): Sequence(&theInfo) {}
};

enum ScramblingCodeTypeValues {
	shortSC = 0,
	longSC = 1,
};
typedef Enumerated<CONSTRAINED, 1> ScramblingCodeType;

typedef Integer<CONSTRAINED, 0, 16777215> ULScramblingCode;

typedef BitString<CONSTRAINED, 8, 8> Ms2_SchedTransmGrantHARQAlloc;

enum primary_Secondary_GrantSelectorValues {
	primary = 0,
	secondary = 1,
};
typedef Enumerated<CONSTRAINED, 1> primary_Secondary_GrantSelector;

class ServingGrant : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ServingGrant(): Sequence(&theInfo) {}
};

enum MinReducedEDPDCHGainFactorValues {
	m8_15 = 0,
	m11_15 = 1,
	m15_15 = 2,
	m21_15 = 3,
	m30_15 = 4,
	m42_15 = 5,
	m60_15 = 6,
	m84_15 = 7,
};
typedef Enumerated<CONSTRAINED, 7> MinReducedEDPDCHGainFactor;

typedef Integer<CONSTRAINED, 0, 127> EDCHMinimumSetETFCI;

typedef Integer<CONSTRAINED, 0, 7> DpcchPowerOffset_SecondaryULFrequency;

typedef Integer<CONSTRAINED, 0, 7> PCPreamble;

class SecondaryEDCHInfoCommon : Sequence {
private:
	static const void *itemsInfo[9];
	static bool itemsPres[9];
public:
	static const Info theInfo;
	SecondaryEDCHInfoCommon(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 8> DeltaACK;

typedef Integer<CONSTRAINED, 0, 8> DeltaNACK;

typedef Integer<CONSTRAINED, 0, 1> HARQPreambleMode;

typedef Integer<CONSTRAINED, 0, 127> HSSCCHCodes;

typedef SequenceOf<HSSCCHCodes, CONSTRAINED, 1, maxHSSCCHs> HS_SCCHChannelisationCodeInfo;

class Fdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, -7, 8> Nack_ack_power_offset;

typedef Integer<CONSTRAINED, -22, 40> Ul_target_SIR;

typedef Integer<CONSTRAINED, -35, -10> ConstantValue;

class HSSICHPowerControlInfoTDD384 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HSSICHPowerControlInfoTDD384(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 14> TimeslotNumber;

enum DLTSChannelisationCodeValues {
	cc16_1 = 0,
	cc16_2 = 1,
	cc16_3 = 2,
	cc16_4 = 3,
	cc16_5 = 4,
	cc16_6 = 5,
	cc16_7 = 6,
	cc16_8 = 7,
	cc16_9 = 8,
	cc16_10 = 9,
	cc16_11 = 10,
	cc16_12 = 11,
	cc16_13 = 12,
	cc16_14 = 13,
	cc16_15 = 14,
	cc16_16 = 15,
};
typedef Enumerated<CONSTRAINED, 15> DLTSChannelisationCode;

typedef _Null DefaultMidamble;

typedef _Null CommonMidamble;

typedef Integer<CONSTRAINED, 0, 15> MidambleShiftLong;

class UeSpecificMidamble : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UeSpecificMidamble(): Sequence(&theInfo) {}
};

class MidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	MidambleAllocationMode(): Choices(&theInfo) {}
};

enum MidambleConfigurationBurstType1and3Values {
	ms4 = 0,
	ms8 = 1,
	ms16 = 2,
};
typedef Enumerated<CONSTRAINED, 2> MidambleConfigurationBurstType1and3;

typedef Integer<CONSTRAINED, -63, 0> BlerTarget;

typedef _Null DefaultMidamble;

class UeSpecificMidamble : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UeSpecificMidamble(): Sequence(&theInfo) {}
};

class MidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	MidambleAllocationMode(): Choices(&theInfo) {}
};

class HSSICHConfigurationTDD384 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	HSSICHConfigurationTDD384(): Sequence(&theInfo) {}
};

class HSSCCHTDD384 : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	HSSCCHTDD384(): Sequence(&theInfo) {}
};

typedef SequenceOf<HSSCCHTDD384, CONSTRAINED, 1, maxHSSCCHs> HS_SCCH_SetConfiguration;

class Tdd384 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	Tdd384(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 6> TimeslotNumberLCRr4;

enum HSChannelisationCodeLCRValues {
	cc16_1 = 0,
	cc16_2 = 1,
	cc16_3 = 2,
	cc16_4 = 3,
	cc16_5 = 4,
	cc16_6 = 5,
	cc16_7 = 6,
	cc16_8 = 7,
	cc16_9 = 8,
	cc16_10 = 9,
	cc16_11 = 10,
	cc16_12 = 11,
	cc16_13 = 12,
	cc16_14 = 13,
	cc16_15 = 14,
	cc16_16 = 15,
};
typedef Enumerated<CONSTRAINED, 15> HSChannelisationCodeLCR;

typedef _Null DefaultMidamble;

typedef _Null CommonMidamble;

typedef Integer<CONSTRAINED, 0, 15> UeSpecificMidamble;

class MidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	MidambleAllocationMode(): Choices(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 8> MidambleConfiguration;

typedef _Null DefaultMidamble;

class UeSpecificMidamble : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UeSpecificMidamble(): Sequence(&theInfo) {}
};

class MidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	MidambleAllocationMode(): Choices(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 8> MidambleConfiguration;

typedef Integer<CONSTRAINED, -7, 8> Nack_ack_power_offset;

typedef Integer<CONSTRAINED, -120, -58> Power_level_HSSICH;

enum tpc_step_sizeValues {
	s1 = 0,
	s2 = 1,
	s3 = 2,
	spare1 = 3,
};
typedef Enumerated<CONSTRAINED, 3> tpc_step_size;

class HSSICHConfigurationTDD128 : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	HSSICHConfigurationTDD128(): Sequence(&theInfo) {}
};

class HSSCCHTDD128 : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	HSSCCHTDD128(): Sequence(&theInfo) {}
};

typedef SequenceOf<HSSCCHTDD128, CONSTRAINED, 1, maxHSSCCHs> Tdd128;

class Tdd : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Tdd(): Choices(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class HSSCCHInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HSSCCHInfo(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, -12, 26> MeasurementPowerOffset;

enum FeedbackcycleValues {
	fc0 = 0,
	fc2 = 1,
	fc4 = 2,
	fc8 = 3,
	fc10 = 4,
	fc20 = 5,
	fc40 = 6,
	fc80 = 7,
	fc160 = 8,
};
typedef Enumerated<CONSTRAINED, 8> Feedbackcycle;

typedef Integer<CONSTRAINED, 1, 4> CQIRepetitionFactor;

typedef Integer<CONSTRAINED, 0, 8> DeltaCQI;

class Fdd : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

typedef _Null Tdd;

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class MeasurementFeedbackInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasurementFeedbackInfo(): Sequence(&theInfo) {}
};

class DLHSPDSCHTSConfiguration : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	DLHSPDSCHTSConfiguration(): Sequence(&theInfo) {}
};

class Tdd384 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd384(): Sequence(&theInfo) {}
};

typedef _Null DefaultMidamble;

typedef _Null CommonMidamble;

typedef Integer<CONSTRAINED, 0, 15> UeSpecificMidamble;

class MidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	MidambleAllocationMode(): Choices(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 8> MidambleConfiguration;

class HSPDSCHMidambleConfigurationTDD128 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HSPDSCHMidambleConfigurationTDD128(): Sequence(&theInfo) {}
};

class Tdd128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd128(): Sequence(&theInfo) {}
};

class Tdd : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Tdd(): Choices(&theInfo) {}
};

typedef _Null Fdd;

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class DLHSPDSCHInformation : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DLHSPDSCHInformation(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 8> NumberOfProcesses;

typedef _Null Implicit;

enum HARQMemorySizeValues {
	hms800 = 0,
	hms1600 = 1,
	hms2400 = 2,
	hms3200 = 3,
	hms4000 = 4,
	hms4800 = 5,
	hms5600 = 6,
	hms6400 = 7,
	hms7200 = 8,
	hms8000 = 9,
	hms8800 = 10,
	hms9600 = 11,
	hms10400 = 12,
	hms11200 = 13,
	hms12000 = 14,
	hms12800 = 15,
	hms13600 = 16,
	hms14400 = 17,
	hms15200 = 18,
	hms16000 = 19,
	hms17600 = 20,
	hms19200 = 21,
	hms20800 = 22,
	hms22400 = 23,
	hms24000 = 24,
	hms25600 = 25,
	hms27200 = 26,
	hms28800 = 27,
	hms30400 = 28,
	hms32000 = 29,
	hms36000 = 30,
	hms40000 = 31,
	hms44000 = 32,
	hms48000 = 33,
	hms52000 = 34,
	hms56000 = 35,
	hms60000 = 36,
	hms64000 = 37,
	hms68000 = 38,
	hms72000 = 39,
	hms76000 = 40,
	hms80000 = 41,
	hms88000 = 42,
	hms96000 = 43,
	hms104000 = 44,
	hms112000 = 45,
	hms120000 = 46,
	hms128000 = 47,
	hms136000 = 48,
	hms144000 = 49,
	hms152000 = 50,
	hms160000 = 51,
	hms176000 = 52,
	hms192000 = 53,
	hms208000 = 54,
	hms224000 = 55,
	hms240000 = 56,
	hms256000 = 57,
	hms272000 = 58,
	hms288000 = 59,
	hms304000 = 60,
};
typedef Enumerated<CONSTRAINED, 60> HARQMemorySize;

typedef SequenceOf<HARQMemorySize, CONSTRAINED, 1, maxHProcesses> Explicit;

class MemoryPartitioning : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	MemoryPartitioning(): Choices(&theInfo) {}
};

class HARQInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HARQInfo(): Sequence(&theInfo) {}
};

enum mac_hsResetIndicatorValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> mac_hsResetIndicator;

class ServingHSDSCHCellInformation : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	ServingHSDSCHCellInformation(): Sequence(&theInfo) {}
};

typedef SequenceOf<HSSCCHCodes, CONSTRAINED, 1, maxHSSCCHs> HS_SCCHChannelisationCodeInfo;

class Fdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, -7, 8> Nack_ack_power_offset;

typedef Integer<CONSTRAINED, -20, 10> DHSSync;

typedef _Null DefaultMidamble;

typedef _Null CommonMidamble;

class UeSpecificMidamble : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UeSpecificMidamble(): Sequence(&theInfo) {}
};

class MidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	MidambleAllocationMode(): Choices(&theInfo) {}
};

class HSSCCHTDD384r6 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	HSSCCHTDD384r6(): Sequence(&theInfo) {}
};

typedef SequenceOf<HSSCCHTDD384r6, CONSTRAINED, 1, maxHSSCCHs> HS_SCCH_SetConfiguration;

class Tdd384 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	Tdd384(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, -7, 8> Nack_ack_power_offset;

typedef Integer<CONSTRAINED, -22, 40> Ul_target_SIR;

class HSSICHPowerControlInfoTDD768 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HSSICHPowerControlInfoTDD768(): Sequence(&theInfo) {}
};

enum DLTSChannelisationCodeVHCRValues {
	cc32_1 = 0,
	cc32_2 = 1,
	cc32_3 = 2,
	cc32_4 = 3,
	cc132_5 = 4,
	cc32_6 = 5,
	cc32_7 = 6,
	cc32_8 = 7,
	cc32_9 = 8,
	cc32_10 = 9,
	cc32_11 = 10,
	cc32_12 = 11,
	cc32_13 = 12,
	cc32_14 = 13,
	cc32_15 = 14,
	cc32_16 = 15,
	cc32_17 = 16,
	cc32_18 = 17,
	cc32_19 = 18,
	cc32_20 = 19,
	cc32_21 = 20,
	cc32_22 = 21,
	cc32_23 = 22,
	cc32_24 = 23,
	cc32_25 = 24,
	cc32_26 = 25,
	cc32_27 = 26,
	cc32_28 = 27,
	cc32_29 = 28,
	cc32_30 = 29,
	cc32_31 = 30,
	cc32_32 = 31,
};
typedef Enumerated<CONSTRAINED, 31> DLTSChannelisationCodeVHCR;

typedef _Null DefaultMidamble;

typedef _Null CommonMidamble;

class UeSpecificMidamble : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UeSpecificMidamble(): Sequence(&theInfo) {}
};

class MidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	MidambleAllocationMode(): Choices(&theInfo) {}
};

typedef _Null DefaultMidamble;

class UeSpecificMidamble : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UeSpecificMidamble(): Sequence(&theInfo) {}
};

class MidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	MidambleAllocationMode(): Choices(&theInfo) {}
};

class HSSICHConfigurationTDD768 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	HSSICHConfigurationTDD768(): Sequence(&theInfo) {}
};

class HSSCCHTDD768 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	HSSCCHTDD768(): Sequence(&theInfo) {}
};

typedef SequenceOf<HSSCCHTDD768, CONSTRAINED, 1, maxHSSCCHs> HS_SCCH_SetConfiguration;

class Tdd768 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	Tdd768(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, -7, 8> Nack_ack_power_offset;

typedef Integer<CONSTRAINED, -120, -58> Power_level_HSSICH;

enum tpc_step_sizeValues {
	s1 = 0,
	s2 = 1,
	s3 = 2,
	spare1 = 3,
};
typedef Enumerated<CONSTRAINED, 3> tpc_step_size;

typedef Integer<CONSTRAINED, 0, 255> PowerControlGAP;

typedef Boolean PathlossCompensationSwitch;

typedef _Null DefaultMidamble;

typedef _Null CommonMidamble;

typedef Integer<CONSTRAINED, 0, 15> UeSpecificMidamble;

class MidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	MidambleAllocationMode(): Choices(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 8> MidambleConfiguration;

typedef _Null DefaultMidamble;

class UeSpecificMidamble : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UeSpecificMidamble(): Sequence(&theInfo) {}
};

class MidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	MidambleAllocationMode(): Choices(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 8> MidambleConfiguration;

class HSSICHConfigurationTDD128r6 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	HSSICHConfigurationTDD128r6(): Sequence(&theInfo) {}
};

class HSSCCHTDD128r6 : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	HSSCCHTDD128r6(): Sequence(&theInfo) {}
};

typedef SequenceOf<HSSCCHTDD128r6, CONSTRAINED, 1, maxHSSCCHs> HS_SCCH_SetConfiguration;

class Tdd128 : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	Tdd128(): Sequence(&theInfo) {}
};

class Tdd : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	Tdd(): Choices(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class HSSCCHInfor7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HSSCCHInfor7(): Sequence(&theInfo) {}
};

enum Feedbackcycler7Values {
	fc0 = 0,
	fc2 = 1,
	fc4 = 2,
	fc8 = 3,
	fc10 = 4,
	fc20 = 5,
	fc40 = 6,
	fc80 = 7,
	fc160 = 8,
	fc16 = 9,
	fc32 = 10,
	fc64 = 11,
	spare4 = 12,
	spare3 = 13,
	spare2 = 14,
	spare1 = 15,
};
typedef Enumerated<CONSTRAINED, 15> Feedbackcycler7;

class Fdd : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

typedef _Null Tdd;

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class MeasurementFeedbackInfor7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasurementFeedbackInfor7(): Sequence(&theInfo) {}
};

class Tdd384 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd384(): Sequence(&theInfo) {}
};

class DLHSPDSCHTSConfigurationVHCR : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	DLHSPDSCHTSConfigurationVHCR(): Sequence(&theInfo) {}
};

class Tdd768 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd768(): Sequence(&theInfo) {}
};

enum tsn_LengthValues {
	tsn_6bits = 0,
	tsn_9bits = 1,
};
typedef Enumerated<CONSTRAINED, 1> tsn_Length;

typedef Integer<CONSTRAINED, 1, maxTDD128Carrier> MultiCarrierNumber;

class DLHSPDSCHMultiCarrierInformation : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	DLHSPDSCHMultiCarrierInformation(): Sequence(&theInfo) {}
};

class DLMultiCarrierInformation : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DLMultiCarrierInformation(): Sequence(&theInfo) {}
};

class Tdd128 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Tdd128(): Sequence(&theInfo) {}
};

class Tdd : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	Tdd(): Choices(&theInfo) {}
};

enum dl_64QAM_ConfiguredValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> dl_64QAM_Configured;

class Fdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class DLHSPDSCHInformationr7 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DLHSPDSCHInformationr7(): Sequence(&theInfo) {}
};

enum numberOfProcessesValues {
	n1 = 0,
	n2 = 1,
	n3 = 2,
	n4 = 3,
	n5 = 4,
	n6 = 5,
	n7 = 6,
	n8 = 7,
	n12 = 8,
	n14 = 9,
	n16 = 10,
};
typedef Enumerated<CONSTRAINED, 10> numberOfProcesses;

typedef _Null Implicit;

typedef SequenceOf<HARQMemorySize, CONSTRAINED, 1, maxHProcesses> MemorySize;

typedef SequenceOf<HARQMemorySize, CONSTRAINED, 1, maxHProcesses> AdditionalMemorySizesForMIMO;

class Explicit : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Explicit(): Sequence(&theInfo) {}
};

class MemoryPartitioning : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	MemoryPartitioning(): Choices(&theInfo) {}
};

class HARQInfor7 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HARQInfor7(): Sequence(&theInfo) {}
};

enum mac_hsResetIndicatorValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> mac_hsResetIndicator;

class ServingHSDSCHCellInformationr7 : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	ServingHSDSCHCellInformationr7(): Sequence(&theInfo) {}
};

class Tdd384 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd384(): Sequence(&theInfo) {}
};

class Tdd768 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd768(): Sequence(&theInfo) {}
};

class Tdd128 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Tdd128(): Sequence(&theInfo) {}
};

class Tdd : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	Tdd(): Choices(&theInfo) {}
};

enum dl_64QAM_ConfiguredValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> dl_64QAM_Configured;

enum HSDSCHTBSizeTableValues {
	octetAligned = 0,
};
typedef Enumerated<CONSTRAINED, 0> HSDSCHTBSizeTable;

class Fdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class DLHSPDSCHInformationr8 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DLHSPDSCHInformationr8(): Sequence(&theInfo) {}
};

enum mac_hsResetIndicatorValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> mac_hsResetIndicator;

class ServingHSDSCHCellInformationr8 : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	ServingHSDSCHCellInformationr8(): Sequence(&theInfo) {}
};

typedef SequenceOf<HSSCCHCodes, CONSTRAINED, 1, maxHSSCCHs> HS_SCCHChannelisationCodeInfo;

class Fdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, -7, 8> Nack_ack_power_offset;

typedef SequenceOf<HSSCCHTDD384r6, CONSTRAINED, 1, maxHSSCCHs> HS_SCCH_SetConfiguration;

class Tdd384 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	Tdd384(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, -7, 8> Nack_ack_power_offset;

typedef SequenceOf<HSSCCHTDD768, CONSTRAINED, 1, maxHSSCCHs> HS_SCCH_SetConfiguration;

class Tdd768 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	Tdd768(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, -7, 8> Nack_ack_power_offset;

typedef Integer<CONSTRAINED, -120, -58> Power_level_HSSICH;

enum tpc_step_sizeValues {
	s1 = 0,
	s2 = 1,
	s3 = 2,
	spare1 = 3,
};
typedef Enumerated<CONSTRAINED, 3> tpc_step_size;

enum hS_SCCH_tpc_step_sizeValues {
	s1 = 0,
	s2 = 1,
	s3 = 2,
	spare1 = 3,
};
typedef Enumerated<CONSTRAINED, 3> hS_SCCH_tpc_step_size;

typedef Boolean PathlossCompensationSwitch;

typedef SequenceOf<HSSCCHTDD128r6, CONSTRAINED, 1, maxHSSCCHs> HS_SCCH_SetConfiguration;

class Tdd128 : Sequence {
private:
	static const void *itemsInfo[8];
	static bool itemsPres[8];
public:
	static const Info theInfo;
	Tdd128(): Sequence(&theInfo) {}
};

class Tdd : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	Tdd(): Choices(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class HSSCCHInfor9 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HSSCCHInfor9(): Sequence(&theInfo) {}
};

class Tdd384 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd384(): Sequence(&theInfo) {}
};

class Tdd768 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd768(): Sequence(&theInfo) {}
};

enum tS0_IndicatorValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> tS0_Indicator;

enum OutofSyncWindowValues {
	ms40 = 0,
	ms80 = 1,
	ms160 = 2,
	ms320 = 3,
	ms640 = 4,
	spare3 = 5,
	spare2 = 6,
	spare1 = 7,
};
typedef Enumerated<CONSTRAINED, 7> OutofSyncWindow;

class Tdd128 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	Tdd128(): Sequence(&theInfo) {}
};

class Tdd : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	Tdd(): Choices(&theInfo) {}
};

enum dl_64QAM_ConfiguredValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> dl_64QAM_Configured;

class Fdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class DLHSPDSCHInformationr9 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DLHSPDSCHInformationr9(): Sequence(&theInfo) {}
};

enum mac_hsResetIndicatorValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> mac_hsResetIndicator;

class ServingHSDSCHCellInformationr9 : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	ServingHSDSCHCellInformationr9(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED, 128, 128> Nonce;

class SRVCCInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SRVCCInfo(): Sequence(&theInfo) {}
};

class RABInfoReplace : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RABInfoReplace(): Sequence(&theInfo) {}
};

class SRVCCSecurityRABInfov860ext : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SRVCCSecurityRABInfov860ext(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED, 20, 20> STARTValue;

class STARTSingle : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	STARTSingle(): Sequence(&theInfo) {}
};

typedef SequenceOf<STARTSingle, CONSTRAINED, 1, maxCNdomains> STARTList;

enum SystemSpecificCapUpdateReqv590extValues {
	geranIu = 0,
};
typedef Enumerated<CONSTRAINED, 0> SystemSpecificCapUpdateReqv590ext;

enum T300Values {
	ms100 = 0,
	ms200 = 1,
	ms400 = 2,
	ms600 = 3,
	ms800 = 4,
	ms1000 = 5,
	ms1200 = 6,
	ms1400 = 7,
	ms1600 = 8,
	ms1800 = 9,
	ms2000 = 10,
	ms3000 = 11,
	ms4000 = 12,
	ms6000 = 13,
	ms8000 = 14,
};
typedef Enumerated<CONSTRAINED, 14> T300;

enum T301Values {
	ms100 = 0,
	ms200 = 1,
	ms400 = 2,
	ms600 = 3,
	ms800 = 4,
	ms1000 = 5,
	ms1200 = 6,
	ms1400 = 7,
	ms1600 = 8,
	ms1800 = 9,
	ms2000 = 10,
	ms3000 = 11,
	ms4000 = 12,
	ms6000 = 13,
	ms8000 = 14,
	spare = 15,
};
typedef Enumerated<CONSTRAINED, 15> T301;

enum T302Values {
	ms100 = 0,
	ms200 = 1,
	ms400 = 2,
	ms600 = 3,
	ms800 = 4,
	ms1000 = 5,
	ms1200 = 6,
	ms1400 = 7,
	ms1600 = 8,
	ms1800 = 9,
	ms2000 = 10,
	ms3000 = 11,
	ms4000 = 12,
	ms6000 = 13,
	ms8000 = 14,
	spare = 15,
};
typedef Enumerated<CONSTRAINED, 15> T302;

enum T304Values {
	ms100 = 0,
	ms200 = 1,
	ms400 = 2,
	ms1000 = 3,
	ms2000 = 4,
	spare3 = 5,
	spare2 = 6,
	spare1 = 7,
};
typedef Enumerated<CONSTRAINED, 7> T304;

enum T305Values {
	noUpdate = 0,
	m5 = 1,
	m10 = 2,
	m30 = 3,
	m60 = 4,
	m120 = 5,
	m360 = 6,
	m720 = 7,
};
typedef Enumerated<CONSTRAINED, 7> T305;

enum T307Values {
	s5 = 0,
	s10 = 1,
	s15 = 2,
	s20 = 3,
	s30 = 4,
	s40 = 5,
	s50 = 6,
	spare = 7,
};
typedef Enumerated<CONSTRAINED, 7> T307;

enum T308Values {
	ms40 = 0,
	ms80 = 1,
	ms160 = 2,
	ms320 = 3,
};
typedef Enumerated<CONSTRAINED, 3> T308;

typedef Integer<CONSTRAINED, 1, 8> T309;

enum T310Values {
	ms40 = 0,
	ms80 = 1,
	ms120 = 2,
	ms160 = 3,
	ms200 = 4,
	ms240 = 5,
	ms280 = 6,
	ms320 = 7,
};
typedef Enumerated<CONSTRAINED, 7> T310;

enum T311Values {
	ms250 = 0,
	ms500 = 1,
	ms750 = 2,
	ms1000 = 3,
	ms1250 = 4,
	ms1500 = 5,
	ms1750 = 6,
	ms2000 = 7,
};
typedef Enumerated<CONSTRAINED, 7> T311;

typedef Integer<CONSTRAINED, 0, 15> T312;

typedef Integer<CONSTRAINED, 0, 15> T313;

enum T314Values {
	s0 = 0,
	s2 = 1,
	s4 = 2,
	s6 = 3,
	s8 = 4,
	s12 = 5,
	s16 = 6,
	s20 = 7,
};
typedef Enumerated<CONSTRAINED, 7> T314;

enum T315Values {
	s0 = 0,
	s10 = 1,
	s30 = 2,
	s60 = 3,
	s180 = 4,
	s600 = 5,
	s1200 = 6,
	s1800 = 7,
};
typedef Enumerated<CONSTRAINED, 7> T315;

enum T316Values {
	s0 = 0,
	s10 = 1,
	s20 = 2,
	s30 = 3,
	s40 = 4,
	s50 = 5,
	s_inf = 6,
	spare = 7,
};
typedef Enumerated<CONSTRAINED, 7> T316;

enum T317Values {
	infinity0 = 0,
	infinity1 = 1,
	infinity2 = 2,
	infinity3 = 3,
	infinity4 = 4,
	infinity5 = 5,
	infinity6 = 6,
	infinity7 = 7,
};
typedef Enumerated<CONSTRAINED, 7> T317;

enum T318Values {
	ms250 = 0,
	ms500 = 1,
	ms750 = 2,
	ms1000 = 3,
	ms1250 = 4,
	ms1500 = 5,
	ms1750 = 6,
	ms2000 = 7,
	ms3000 = 8,
	ms4000 = 9,
	ms6000 = 10,
	ms8000 = 11,
	ms10000 = 12,
	ms12000 = 13,
	ms16000 = 14,
};
typedef Enumerated<CONSTRAINED, 14> T318;

enum T319Values {
	ms80 = 0,
	ms160 = 1,
	ms320 = 2,
	ms640 = 3,
	ms1280 = 4,
	ms2560 = 5,
	ms5120 = 6,
};
typedef Enumerated<CONSTRAINED, 6> T319;

enum T321Values {
	ms100 = 0,
	ms200 = 1,
	ms400 = 2,
	ms800 = 3,
};
typedef Enumerated<CONSTRAINED, 3> T321;

enum T323Values {
	s0 = 0,
	s5 = 1,
	s10 = 2,
	s20 = 3,
	s30 = 4,
	s60 = 5,
	s90 = 6,
	s120 = 7,
};
typedef Enumerated<CONSTRAINED, 7> T323;

typedef _Null Fdd;

class Tdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class ULTransChCapability : Sequence {
private:
	static const void *itemsInfo[8];
	static bool itemsPres[8];
public:
	static const Info theInfo;
	ULTransChCapability(): Sequence(&theInfo) {}
};

class TransportChannelCapability : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TransportChannelCapability(): Sequence(&theInfo) {}
};

class URNTIShort : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	URNTIShort(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 16> Edch_PhysicalLayerCategory;

class Supported : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Supported(): Sequence(&theInfo) {}
};

typedef _Null Unsupported;

class Fdd_edch : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Fdd_edch(): Choices(&theInfo) {}
};

class PhysicalChannelCapabilityedchr6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PhysicalChannelCapabilityedchr6(): Sequence(&theInfo) {}
};

enum deviceTypeValues {
	doesNotBenefitFromBatteryConsumptionOptimisation = 0,
};
typedef Enumerated<CONSTRAINED, 0> deviceType;

class UERadioAccessCapabilityv690ext : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv690ext(): Sequence(&theInfo) {}
};

enum supportOfInter_RAT_PS_HandoverValues {
	doesSupporInter_RAT_PS_Handover = 0,
};
typedef Enumerated<CONSTRAINED, 0> supportOfInter_RAT_PS_Handover;

typedef OctetString<CONSTRAINED, 1, 64> GSMMSRadioAccessCapability;

class InterRATUERadioAccessCapabilityv690ext : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	InterRATUERadioAccessCapabilityv690ext(): Sequence(&theInfo) {}
};

enum supportForSIB11bisValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> supportForSIB11bis;

class UERadioAccessCapabilityv6b0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv6b0extIEs(): Sequence(&theInfo) {}
};

enum supportForFDPCHValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> supportForFDPCH;

class UERadioAccessCapabilityv6e0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv6e0extIEs(): Sequence(&theInfo) {}
};

class UEGANSSPositioningCapability : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEGANSSPositioningCapability(): Sequence(&theInfo) {}
};

class UEPositioningCapabilityv770ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningCapabilityv770ext(): Sequence(&theInfo) {}
};

enum mac_ehsSupportValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> mac_ehsSupport;

enum UESpecificCapabilityInformationLCRTDDValues {
	nF = 0,
	nFMc_TriRx_UniTx = 1,
	nFMc_TriRx_TriTx = 2,
	nFMc_HexRx_UniTx = 3,
	nFMc_HexRx_TriTx = 4,
	nFMc_HexRx_HexTx = 5,
	spare10 = 6,
	spare9 = 7,
	spare8 = 8,
	spare7 = 9,
	spare6 = 10,
	spare5 = 11,
	spare4 = 12,
	spare3 = 13,
	spare2 = 14,
	spare1 = 15,
};
typedef Enumerated<CONSTRAINED, 15> UESpecificCapabilityInformationLCRTDD;

class UERadioAccessCapabilityv770extIEs : Sequence {
private:
	static const void *itemsInfo[8];
	static bool itemsPres[8];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv770extIEs(): Sequence(&theInfo) {}
};

enum supportForEDPCCHPowerBoostingValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> supportForEDPCCHPowerBoosting;

class UERadioAccessCapabilityv790extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv790extIEs(): Sequence(&theInfo) {}
};

class UEGANSSPositioningCapabilityv860extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEGANSSPositioningCapabilityv860extIEs(): Sequence(&theInfo) {}
};

class UEPositioningCapabilityv860ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningCapabilityv860ext(): Sequence(&theInfo) {}
};

enum supportOfCommonEDCHValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> supportOfCommonEDCH;

enum supportOfMACiisValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> supportOfMACiis;

enum supportOfSPSOperationValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> supportOfSPSOperation;

enum supportOfControlChannelDRXOperationValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> supportOfControlChannelDRXOperation;

enum supportOfCSGValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> supportOfCSG;

class UERadioAccessCapabBandFDD3 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	UERadioAccessCapabBandFDD3(): Sequence(&theInfo) {}
};

typedef SequenceOf<UERadioAccessCapabBandFDD3, CONSTRAINED, 1, maxFreqBandsFDD> UERadioAccessCapabBandFDDList3;

class UERadioAccessCapabilityv860extIEs : Sequence {
private:
	static const void *itemsInfo[12];
	static bool itemsPres[12];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv860extIEs(): Sequence(&theInfo) {}
};

typedef OctetString<UNCONSTRAINED> Ue_EUTRA_Capability;

class EUTRARadioAccessCapability : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EUTRARadioAccessCapability(): Sequence(&theInfo) {}
};

class InterRATUERadioAccessCapabilityv860ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterRATUERadioAccessCapabilityv860ext(): Sequence(&theInfo) {}
};

enum supportForPriorityReselectionInUTRANValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> supportForPriorityReselectionInUTRAN;

class UERadioAccessCapabilityv880extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv880extIEs(): Sequence(&theInfo) {}
};

enum supportCellSpecificTxDiversityinDC_OperationValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> supportCellSpecificTxDiversityinDC_Operation;

class UERadioAccessCapabilityv890extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv890extIEs(): Sequence(&theInfo) {}
};

typedef SequenceOf<BandComb, CONSTRAINED, 1, 16> UERadioAccessCapabBandCombList;

enum supportOfenhancedTS0Values {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> supportOfenhancedTS0;

class UERadioAccessCapabilityv920extIEs : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv920extIEs(): Sequence(&theInfo) {}
};

enum ue_ExtendedMeasurementSupportValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> ue_ExtendedMeasurementSupport;

class UERadioAccessCapabilityv970extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv970extIEs(): Sequence(&theInfo) {}
};

class NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	NonCriticalExtensions(): Sequence(&theInfo) {}
};

class V970NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V970NonCriticalExtensions(): Sequence(&theInfo) {}
};

class V920NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V920NonCriticalExtensions(): Sequence(&theInfo) {}
};

class V890NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V890NonCriticalExtensions(): Sequence(&theInfo) {}
};

class V880NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V880NonCriticalExtensions(): Sequence(&theInfo) {}
};

class V860NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	V860NonCriticalExtensions(): Sequence(&theInfo) {}
};

class V790NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V790NonCriticalExtensions(): Sequence(&theInfo) {}
};

class V770NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V770NonCriticalExtensions(): Sequence(&theInfo) {}
};

class V6e0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V6e0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class V6b0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V6b0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class UECapabilityContainerIEs : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	UECapabilityContainerIEs(): Sequence(&theInfo) {}
};

class UEConnTimersAndConstants : Sequence {
private:
	static const void *itemsInfo[22];
	static bool itemsPres[22];
public:
	static const Info theInfo;
	UEConnTimersAndConstants(): Sequence(&theInfo) {}
};

class UEConnTimersAndConstantsv3a0ext : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UEConnTimersAndConstantsv3a0ext(): Sequence(&theInfo) {}
};

class UEConnTimersAndConstantsr5 : Sequence {
private:
	static const void *itemsInfo[22];
	static bool itemsPres[22];
public:
	static const Info theInfo;
	UEConnTimersAndConstantsr5(): Sequence(&theInfo) {}
};

class UEConnTimersAndConstantsv860ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEConnTimersAndConstantsv860ext(): Sequence(&theInfo) {}
};

class UEIdleTimersAndConstants : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	UEIdleTimersAndConstants(): Sequence(&theInfo) {}
};

class UEHSPAIdentitiesr6 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	UEHSPAIdentitiesr6(): Sequence(&theInfo) {}
};

class UEIdleTimersAndConstantsv3a0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEIdleTimersAndConstantsv3a0ext(): Sequence(&theInfo) {}
};

class UEMultiModeRATCapability : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UEMultiModeRATCapability(): Sequence(&theInfo) {}
};

enum UEPowerClassExtValues {
	class1 = 0,
	class2 = 1,
	class3 = 2,
	class4 = 3,
	spare4 = 4,
	spare3 = 5,
	spare2 = 6,
	spare1 = 7,
};
typedef Enumerated<CONSTRAINED, 7> UEPowerClassExt;

typedef Boolean StandaloneLocMethodsSupported;

typedef Boolean Ue_BasedOTDOA_Supported;

typedef Boolean SupportForUE_GPS_TimingOfCellFrames;

typedef Boolean SupportForIPDL;

class UEPositioningCapability : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	UEPositioningCapability(): Sequence(&theInfo) {}
};

class UERadioAccessCapability : Sequence {
private:
	static const void *itemsInfo[9];
	static bool itemsPres[9];
public:
	static const Info theInfo;
	UERadioAccessCapability(): Sequence(&theInfo) {}
};

class FddRF_Capability : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	FddRF_Capability(): Sequence(&theInfo) {}
};

class UERadioAccessCapabBandFDD : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	UERadioAccessCapabBandFDD(): Sequence(&theInfo) {}
};

typedef SequenceOf<UERadioAccessCapabBandFDD, CONSTRAINED, 1, maxFreqBandsFDD> UERadioAccessCapabBandFDDList;

class UERadioAccessCapabilityv370ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv370ext(): Sequence(&theInfo) {}
};

class UERadioAccessCapabilityInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UERadioAccessCapabilityInfo(): Sequence(&theInfo) {}
};

typedef Boolean Rx_tx_TimeDifferenceType2Capable;

class UEPositioningCapabilityExtv380 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningCapabilityExtv380(): Sequence(&theInfo) {}
};

class UERadioAccessCapabilityv380ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv380ext(): Sequence(&theInfo) {}
};

enum validity_CellPCH_UraPCHValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> validity_CellPCH_UraPCH;

class UEPositioningCapabilityExtv3a0 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningCapabilityExtv3a0(): Sequence(&theInfo) {}
};

class UERadioAccessCapabilityv3a0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv3a0ext(): Sequence(&theInfo) {}
};

enum sfn_sfnType2CapabilityValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> sfn_sfnType2Capability;

class UEPositioningCapabilityExtv3g0 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningCapabilityExtv3g0(): Sequence(&theInfo) {}
};

class UERadioAccessCapabilityv3g0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv3g0ext(): Sequence(&theInfo) {}
};

class FddRF_Capability : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	FddRF_Capability(): Sequence(&theInfo) {}
};

class UERadioAccessCapabBandFDD2 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	UERadioAccessCapabBandFDD2(): Sequence(&theInfo) {}
};

typedef SequenceOf<UERadioAccessCapabBandFDD2, CONSTRAINED, 1, maxFreqBandsFDD> UERadioAccessCapabBandFDDList2;

class UERadioAccessCapabBandFDDext : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UERadioAccessCapabBandFDDext(): Sequence(&theInfo) {}
};

typedef SequenceOf<UERadioAccessCapabBandFDDext, CONSTRAINED, 1, maxFreqBandsFDD> UERadioAccessCapabBandFDDListext;

class UERadioAccessCapabilityv650ext : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv650ext(): Sequence(&theInfo) {}
};

enum supportForTwoDRXSchemesInPCHValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> supportForTwoDRXSchemesInPCH;

enum supportEDPDCHPowerInterpolationValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> supportEDPDCHPowerInterpolation;

class UERadioAccessCapabilityv7e0ext : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv7e0ext(): Sequence(&theInfo) {}
};

enum supportofTxDivOnNonMIMOChannelValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> supportofTxDivOnNonMIMOChannel;

typedef Integer<CONSTRAINED, 1, 6> Tdd_edch_PhysicalLayerCategory;

enum supportForCSVoiceoverHSPAValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> supportForCSVoiceoverHSPA;

class UERadioAccessCapabilityCompTDD128v7f0ext : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	UERadioAccessCapabilityCompTDD128v7f0ext(): Sequence(&theInfo) {}
};

class UERadioAccessCapabilityv7f0ext : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv7f0ext(): Sequence(&theInfo) {}
};

enum ganssSupportIndicationValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> ganssSupportIndication;

enum mac_ehsSupportValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> mac_ehsSupport;

class UERadioAccessCapabilityInfov770ext : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	UERadioAccessCapabilityInfov770ext(): Sequence(&theInfo) {}
};

class UERadioAccessCapabilityInfoTDD128v8b0ext : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UERadioAccessCapabilityInfoTDD128v8b0ext(): Sequence(&theInfo) {}
};

class UERadioAccessCapabilityv860ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv860ext(): Sequence(&theInfo) {}
};

enum supportForPriorityReselectionInUTRANValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> supportForPriorityReselectionInUTRAN;

class UERadioAccessCapabilityv880ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv880ext(): Sequence(&theInfo) {}
};

enum supportCellSpecificTxDiversityinDC_OperationValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> supportCellSpecificTxDiversityinDC_Operation;

class UERadioAccessCapabilityv890ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv890ext(): Sequence(&theInfo) {}
};

enum supportOfenhancedTS0Values {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> supportOfenhancedTS0;

class UERadioAccessCapabilityv920ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv920ext(): Sequence(&theInfo) {}
};

class Tdd_CapabilityExt : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	Tdd_CapabilityExt(): Sequence(&theInfo) {}
};

class UERadioAccessCapabilityv4b0ext : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv4b0ext(): Sequence(&theInfo) {}
};

typedef Boolean TotalAM_RLCMemoryExceeds10kB;

typedef _Null NotSupported;

enum RFCapabBandFDDCompValues {
	notSupported = 0,
	default_TxRx_separation = 1,
	spare2 = 2,
	spare1 = 3,
};
typedef Enumerated<CONSTRAINED, 3> RFCapabBandFDDComp;

typedef SequenceOf<RFCapabBandFDDComp, CONSTRAINED, 1, maxFreqBandsFDD> RFCapabBandListFDDComp;

class Fdd : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Fdd(): Choices(&theInfo) {}
};

typedef _Null NotSupported;

class Tdd384_RF_Capability : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Tdd384_RF_Capability(): Choices(&theInfo) {}
};

typedef _Null NotSupported;

class Tdd128_RF_Capability : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Tdd128_RF_Capability(): Choices(&theInfo) {}
};

class RFCapabilityComp : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RFCapabilityComp(): Sequence(&theInfo) {}
};

class UERadioAccessCapabilityComp : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UERadioAccessCapabilityComp(): Sequence(&theInfo) {}
};

typedef SequenceOf<RFCapabBandFDDComp, CONSTRAINED, 1, maxFreqBandsFDD_ext> RFCapabBandListFDDCompext;

class UERadioAccessCapabilityCompext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityCompext(): Sequence(&theInfo) {}
};

typedef _Null NotSupported;

class Tdd768_RF_Capability : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Tdd768_RF_Capability(): Choices(&theInfo) {}
};

class RFCapabilityCompv770ext : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RFCapabilityCompv770ext(): Sequence(&theInfo) {}
};

enum securityCapabilityIndicationValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> securityCapabilityIndication;

enum ganssSupportIndicationValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> ganssSupportIndication;

enum mac_ehsSupportValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> mac_ehsSupport;

class UERadioAccessCapabilityCompv770ext : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	UERadioAccessCapabilityCompv770ext(): Sequence(&theInfo) {}
};

class FddPhysicalChannelCapab_hspdsch_edch : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	FddPhysicalChannelCapab_hspdsch_edch(): Sequence(&theInfo) {}
};

class UERadioAccessCapabilityComp2 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityComp2(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 7, 7> Edch_PhysicalLayerCategory_extension;

enum hsscchlessHsdschOperationValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> hsscchlessHsdschOperation;

enum enhancedFdpchValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> enhancedFdpch;

enum hsdschReception_CellFachValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> hsdschReception_CellFach;

enum hsdschReception_CellUraPchValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> hsdschReception_CellUraPch;

enum discontinuousDpcchTransmissionValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> discontinuousDpcchTransmission;

enum slotFormat4Values {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> slotFormat4;

class UERadioAccessCapabilityComp2v770ext : Sequence {
private:
	static const void *itemsInfo[9];
	static bool itemsPres[9];
public:
	static const Info theInfo;
	UERadioAccessCapabilityComp2v770ext(): Sequence(&theInfo) {}
};

enum supportofTxDivOnNonMIMOChannelValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> supportofTxDivOnNonMIMOChannel;

class UERadioAccessCapabilityComp2v7f0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityComp2v7f0ext(): Sequence(&theInfo) {}
};

enum supportOfMACiisValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> supportOfMACiis;

class UERadioAccessCapabilityComp2v860ext : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UERadioAccessCapabilityComp2v860ext(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 8, 9> Edch_PhysicalLayerCategory_extension2;

class UERadioAccessCapabilityComp2v920ext : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UERadioAccessCapabilityComp2v920ext(): Sequence(&theInfo) {}
};

enum supportOfSFModeForHSPDSCHDualStreamValues {
	sf1 = 0,
	sf1sf16 = 1,
};
typedef Enumerated<CONSTRAINED, 1> supportOfSFModeForHSPDSCHDualStream;

enum supportOfCommonEDCHValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> supportOfCommonEDCH;

enum supportOfMACiisValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> supportOfMACiis;

enum supportOfSPSOperationValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> supportOfSPSOperation;

enum supportOfControlChannelDRXOperationValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> supportOfControlChannelDRXOperation;

class UERadioAccessCapabilityCompTDD128 : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	UERadioAccessCapabilityCompTDD128(): Sequence(&theInfo) {}
};

class UERadioAccessCapabilityv590ext : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv590ext(): Sequence(&theInfo) {}
};

class UERadioAccessCapabilityv5c0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv5c0ext(): Sequence(&theInfo) {}
};

class UERadioAccessCapabilityv680ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv680ext(): Sequence(&theInfo) {}
};

class ULPhysChCapabilityFDDr6 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULPhysChCapabilityFDDr6(): Sequence(&theInfo) {}
};

typedef _Null Continue;

class NewConfiguration : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	NewConfiguration(): Sequence(&theInfo) {}
};

class ULSecondaryCellInfoFDD : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULSecondaryCellInfoFDD(): Choices(&theInfo) {}
};

class UESecurityInformation : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UESecurityInformation(): Sequence(&theInfo) {}
};

class UESecurityInformation2 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UESecurityInformation2(): Sequence(&theInfo) {}
};

enum URAUpdateCauseValues {
	changeOfURA = 0,
	periodicURAUpdate = 1,
	dummy = 2,
	spare1 = 3,
};
typedef Enumerated<CONSTRAINED, 3> URAUpdateCause;

typedef Integer<CONSTRAINED, 3, 9> UTRANDRXCycleLengthCoefficient;

typedef Integer<CONSTRAINED, 3, 9> Drx_CycleLengthCoefficient;

typedef Integer<CONSTRAINED, 3, 9> Drx_CycleLengthCoefficient2;

class UTRANDRXCycleLengthCoefficientr7 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	UTRANDRXCycleLengthCoefficientr7(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 15> WaitTime;

typedef Integer<CONSTRAINED, 1, 65535> F_MAX_PERIOD;

typedef Integer<CONSTRAINED, 1, 255> F_MAX_TIME;

typedef Integer<CONSTRAINED, 60, 65535> Max_HEADER;

typedef Integer<CONSTRAINED, 3, 255> Tcp_SPACE;

typedef Integer<CONSTRAINED, 3, 65535> Non_TCP_SPACE;

enum ExpectReorderingValues {
	reorderingNotExpected = 0,
	reorderingExpected = 1,
};
typedef Enumerated<CONSTRAINED, 1> ExpectReordering;

class RFC2507Info : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	RFC2507Info(): Sequence(&theInfo) {}
};

class AlgorithmSpecificInfo : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	AlgorithmSpecificInfo(): Choices(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 3> ROHCProfiler4;

typedef SequenceOf<ROHCProfiler4, CONSTRAINED, 1, maxROHC_Profile_r4> ROHCProfileListr4;

enum CIDInclusionInfor4Values {
	pdcp_Header = 0,
	rfc3095_PacketFormat = 1,
};
typedef Enumerated<CONSTRAINED, 1> CIDInclusionInfor4;

typedef Integer<CONSTRAINED, 1, 16383> Max_CID;

typedef Integer<CONSTRAINED, 2, 1500> ROHCPacketSizer4;

typedef SequenceOf<ROHCPacketSizer4, CONSTRAINED, 1, maxROHC_PacketSizes_r4> ROHCPacketSizeListr4;

class ULRFC3095r4 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	ULRFC3095r4(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 16383> Max_CID;

typedef Integer<CONSTRAINED, 0, 65535> ReverseDecompressionDepth;

class DLRFC3095r4 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DLRFC3095r4(): Sequence(&theInfo) {}
};

class RFC3095Infor4 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RFC3095Infor4(): Sequence(&theInfo) {}
};

class AlgorithmSpecificInfor4 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	AlgorithmSpecificInfor4(): Choices(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 15> LogicalChannelIdentity;

typedef Integer<CONSTRAINED, 0, 7> MACehsQueueId;

class CommonRBMappingInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CommonRBMappingInfo(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 4294967295> COUNTC;

typedef Integer<CONSTRAINED, 0, 33554431> COUNTCMSB;

enum ULAMRRateValues {
	t0 = 0,
	t1 = 1,
	t2 = 2,
	t3 = 3,
	t4 = 4,
	t5 = 5,
	t6 = 6,
	t7 = 7,
	t8 = 8,
	spare7 = 9,
	spare6 = 10,
	spare5 = 11,
	spare4 = 12,
	spare3 = 13,
	spare2 = 14,
	spare1 = 15,
};
typedef Enumerated<CONSTRAINED, 15> ULAMRRate;

typedef Integer<CONSTRAINED, 0, 18> MaxCSDelay;

class CSHSPAInformation : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CSHSPAInformation(): Sequence(&theInfo) {}
};

enum DefaultConfigModeValues {
	fdd = 0,
	tdd = 1,
};
typedef Enumerated<CONSTRAINED, 1> DefaultConfigMode;

typedef Integer<CONSTRAINED, 0, 15> DefaultConfigIdForCellFACH;

class DefaultConfigForCellFACH : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DefaultConfigForCellFACH(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 10> DefaultConfigIdentity;

typedef Integer<CONSTRAINED, 0, 12> DefaultConfigIdentityr4;

typedef Integer<CONSTRAINED, 0, 13> DefaultConfigIdentityr5;

typedef Integer<CONSTRAINED, 0, 31> DefaultConfigIdentityr6;

typedef Integer<CONSTRAINED, 0, 62> DDI;

typedef Boolean InSequenceDelivery;

enum ReceivingWindowSizeValues {
	rw1 = 0,
	rw8 = 1,
	rw16 = 2,
	rw32 = 3,
	rw64 = 4,
	rw128 = 5,
	rw256 = 6,
	rw512 = 7,
	rw768 = 8,
	rw1024 = 9,
	rw1536 = 10,
	rw2047 = 11,
	rw2560 = 12,
	rw3072 = 13,
	rw3584 = 14,
	rw4095 = 15,
};
typedef Enumerated<CONSTRAINED, 15> ReceivingWindowSize;

enum TimerStatusProhibitValues {
	tsp10 = 0,
	tsp20 = 1,
	tsp30 = 2,
	tsp40 = 3,
	tsp50 = 4,
	tsp60 = 5,
	tsp70 = 6,
	tsp80 = 7,
	tsp90 = 8,
	tsp100 = 9,
	tsp110 = 10,
	tsp120 = 11,
	tsp130 = 12,
	tsp140 = 13,
	tsp150 = 14,
	tsp160 = 15,
	tsp170 = 16,
	tsp180 = 17,
	tsp190 = 18,
	tsp200 = 19,
	tsp210 = 20,
	tsp220 = 21,
	tsp230 = 22,
	tsp240 = 23,
	tsp250 = 24,
	tsp260 = 25,
	tsp270 = 26,
	tsp280 = 27,
	tsp290 = 28,
	tsp300 = 29,
	tsp310 = 30,
	tsp320 = 31,
	tsp330 = 32,
	tsp340 = 33,
	tsp350 = 34,
	tsp360 = 35,
	tsp370 = 36,
	tsp380 = 37,
	tsp390 = 38,
	tsp400 = 39,
	tsp410 = 40,
	tsp420 = 41,
	tsp430 = 42,
	tsp440 = 43,
	tsp450 = 44,
	tsp460 = 45,
	tsp470 = 46,
	tsp480 = 47,
	tsp490 = 48,
	tsp500 = 49,
	tsp510 = 50,
	tsp520 = 51,
	tsp530 = 52,
	tsp540 = 53,
	tsp550 = 54,
	tsp600 = 55,
	tsp650 = 56,
	tsp700 = 57,
	tsp750 = 58,
	tsp800 = 59,
	tsp850 = 60,
	tsp900 = 61,
	tsp950 = 62,
	tsp1000 = 63,
};
typedef Enumerated<CONSTRAINED, 63> TimerStatusProhibit;

enum TimerEPCValues {
	te50 = 0,
	te60 = 1,
	te70 = 2,
	te80 = 3,
	te90 = 4,
	te100 = 5,
	te120 = 6,
	te140 = 7,
	te160 = 8,
	te180 = 9,
	te200 = 10,
	te300 = 11,
	te400 = 12,
	te500 = 13,
	te700 = 14,
	te900 = 15,
};
typedef Enumerated<CONSTRAINED, 15> TimerEPC;

typedef Boolean MissingPDU_Indicator;

enum TimerStatusPeriodicValues {
	tsp100 = 0,
	tsp200 = 1,
	tsp300 = 2,
	tsp400 = 3,
	tsp500 = 4,
	tsp750 = 5,
	tsp1000 = 6,
	tsp2000 = 7,
};
typedef Enumerated<CONSTRAINED, 7> TimerStatusPeriodic;

class DLRLCStatusInfo : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	DLRLCStatusInfo(): Sequence(&theInfo) {}
};

class DLAMRLCMode : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DLAMRLCMode(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 31> SizeType1;

typedef Integer<CONSTRAINED, 0, 23> Part1;

typedef Integer<CONSTRAINED, 1, 3> Part2;

class SizeType2 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SizeType2(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 61> Part1;

typedef Integer<CONSTRAINED, 1, 7> Part2;

class SizeType3 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SizeType3(): Sequence(&theInfo) {}
};

class OctetModeRLCSizeInfoType1 : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	OctetModeRLCSizeInfoType1(): Choices(&theInfo) {}
};

typedef Boolean InSequenceDelivery;

class DLAMRLCModer5 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	DLAMRLCModer5(): Sequence(&theInfo) {}
};

enum flexibleSizeValues {
	size7 = 0,
	size15 = 1,
};
typedef Enumerated<CONSTRAINED, 1> flexibleSize;

class Dl_RLC_PDU_size : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Dl_RLC_PDU_size(): Choices(&theInfo) {}
};

typedef Boolean InSequenceDelivery;

class DLAMRLCModer7 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	DLAMRLCModer7(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 65535> PDCPSNInfo;

class RBWithPDCPInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RBWithPDCPInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<RBWithPDCPInfo, CONSTRAINED, 1, maxRBallRABs> RBWithPDCPInfoList;

class DLCounterSynchronisationInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLCounterSynchronisationInfo(): Sequence(&theInfo) {}
};

typedef Boolean Dl_RFC3095_Context_Relocation;

typedef Boolean Ul_RFC3095_Context_Relocation;

class RBPDCPContextRelocation : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RBPDCPContextRelocation(): Sequence(&theInfo) {}
};

typedef SequenceOf<RBPDCPContextRelocation, CONSTRAINED, 1, maxRBallRABs> RBPDCPContextRelocationList;

class DLCounterSynchronisationInfor5 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DLCounterSynchronisationInfor5(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 32> TransportChannelIdentity;

typedef _Null Fach;

class TransportChannelIdentityDCHandDSCH : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TransportChannelIdentityDCHandDSCH(): Sequence(&theInfo) {}
};

class DLTransportChannelType : Choice {
private:
	static const void *choicesInfo[4];
public:
	static const Info theInfo;
	DLTransportChannelType(): Choices(&theInfo) {}
};

class DLLogicalChannelMapping : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DLLogicalChannelMapping(): Sequence(&theInfo) {}
};

typedef _Null Fach;

typedef Integer<CONSTRAINED, 0, 7> MACdFlowIdentity;

class MACdFlowIdentityDCHandHSDSCH : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MACdFlowIdentityDCHandHSDSCH(): Sequence(&theInfo) {}
};

class DLTransportChannelTyper5 : Choice {
private:
	static const void *choicesInfo[6];
public:
	static const Info theInfo;
	DLTransportChannelTyper5(): Choices(&theInfo) {}
};

class DLLogicalChannelMappingr5 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DLLogicalChannelMappingr5(): Sequence(&theInfo) {}
};

typedef _Null Fach;

class Hsdsch : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Hsdsch(): Choices(&theInfo) {}
};

class MACehsQueueIdDCHandHSDSCH : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MACehsQueueIdDCHandHSDSCH(): Sequence(&theInfo) {}
};

class Dch_and_hsdsch : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Dch_and_hsdsch(): Choices(&theInfo) {}
};

class DLTransportChannelTyper7 : Choice {
private:
	static const void *choicesInfo[6];
public:
	static const Info theInfo;
	DLTransportChannelTyper7(): Choices(&theInfo) {}
};

class DLLogicalChannelMappingr7 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DLLogicalChannelMappingr7(): Sequence(&theInfo) {}
};

typedef SequenceOf<DLLogicalChannelMapping, CONSTRAINED, 1, maxLoCHperRLC> DLLogicalChannelMappingList;

typedef SequenceOf<DLLogicalChannelMappingr5, CONSTRAINED, 1, maxLoCHperRLC> DLLogicalChannelMappingListr5;

typedef SequenceOf<DLLogicalChannelMappingr7, CONSTRAINED, 1, maxLoCHperRLC> DLLogicalChannelMappingListr7;

enum DLReceptionWindowSizer6Values {
	size32 = 0,
	size48 = 1,
	size64 = 2,
	size80 = 3,
	size96 = 4,
	size112 = 5,
};
typedef Enumerated<CONSTRAINED, 5> DLReceptionWindowSizer6;

typedef _Null Dl_UM_RLC_Mode;

typedef Boolean SegmentationIndication;

class DLTMRLCMode : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLTMRLCMode(): Sequence(&theInfo) {}
};

class DLRLCMode : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	DLRLCMode(): Choices(&theInfo) {}
};

enum DLUMRLCLIsizeValues {
	size7 = 0,
	size15 = 1,
};
typedef Enumerated<CONSTRAINED, 1> DLUMRLCLIsize;

class DLUMRLCModer5 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLUMRLCModer5(): Sequence(&theInfo) {}
};

class DLRLCModer5 : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	DLRLCModer5(): Choices(&theInfo) {}
};

class DLUMRLCModer6 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DLUMRLCModer6(): Sequence(&theInfo) {}
};

class DLRLCModer6 : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	DLRLCModer6(): Choices(&theInfo) {}
};

class DLRLCModer7 : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	DLRLCModer7(): Choices(&theInfo) {}
};

enum TimerMRWValues {
	te50 = 0,
	te60 = 1,
	te70 = 2,
	te80 = 3,
	te90 = 4,
	te100 = 5,
	te120 = 6,
	te140 = 7,
	te160 = 8,
	te180 = 9,
	te200 = 10,
	te300 = 11,
	te400 = 12,
	te500 = 13,
	te700 = 14,
	te900 = 15,
};
typedef Enumerated<CONSTRAINED, 15> TimerMRW;

enum TimerDiscardValues {
	td0_1 = 0,
	td0_25 = 1,
	td0_5 = 2,
	td0_75 = 3,
	td1 = 4,
	td1_25 = 5,
	td1_5 = 6,
	td1_75 = 7,
	td2 = 8,
	td2_5 = 9,
	td3 = 10,
	td3_5 = 11,
	td4 = 12,
	td4_5 = 13,
	td5 = 14,
	td7_5 = 15,
};
typedef Enumerated<CONSTRAINED, 15> TimerDiscard;

enum MaxMRWValues {
	mm1 = 0,
	mm4 = 1,
	mm6 = 2,
	mm8 = 3,
	mm12 = 4,
	mm16 = 5,
	mm24 = 6,
	mm32 = 7,
};
typedef Enumerated<CONSTRAINED, 7> MaxMRW;

class ExplicitDiscard : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	ExplicitDiscard(): Sequence(&theInfo) {}
};

class HeaderCompressionInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HeaderCompressionInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<HeaderCompressionInfo, CONSTRAINED, 1, maxPDCPAlgoType> HeaderCompressionInfoList;

class HeaderCompressionInfor4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HeaderCompressionInfor4(): Sequence(&theInfo) {}
};

typedef SequenceOf<HeaderCompressionInfor4, CONSTRAINED, 1, maxPDCPAlgoType> HeaderCompressionInfoListr4;

enum MaxPDCPSNWindowSizeValues {
	sn255 = 0,
	sn65535 = 1,
};
typedef Enumerated<CONSTRAINED, 1> MaxPDCPSNWindowSize;

typedef _Null NotSupported;

class LosslessSRNSRelocSupport : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	LosslessSRNSRelocSupport(): Choices(&theInfo) {}
};

typedef BitString<CONSTRAINED, 24, 24> MACdHFNinitialvalue;

typedef Integer<CONSTRAINED, 1, 8> MACLogicalChannelPriority;

enum MaxDATValues {
	dat1 = 0,
	dat2 = 1,
	dat3 = 2,
	dat4 = 3,
	dat5 = 4,
	dat6 = 5,
	dat7 = 6,
	dat8 = 7,
	dat9 = 8,
	dat10 = 9,
	dat15 = 10,
	dat20 = 11,
	dat25 = 12,
	dat30 = 13,
	dat35 = 14,
	dat40 = 15,
};
typedef Enumerated<CONSTRAINED, 15> MaxDAT;

class MaxDATRetransmissions : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	MaxDATRetransmissions(): Sequence(&theInfo) {}
};

enum MaxRSTValues {
	rst1 = 0,
	rst4 = 1,
	rst6 = 2,
	rst8 = 3,
	rst12 = 4,
	rst16 = 5,
	rst24 = 6,
	rst32 = 7,
};
typedef Enumerated<CONSTRAINED, 7> MaxRST;

enum NoExplicitDiscardValues {
	dt10 = 0,
	dt20 = 1,
	dt30 = 2,
	dt40 = 3,
	dt50 = 4,
	dt60 = 5,
	dt70 = 6,
	dt80 = 7,
	dt90 = 8,
	dt100 = 9,
};
typedef Enumerated<CONSTRAINED, 9> NoExplicitDiscard;

enum PDCPPDUHeaderValues {
	present = 0,
	absent = 1,
};
typedef Enumerated<CONSTRAINED, 1> PDCPPDUHeader;

class PDCPInfo : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PDCPInfo(): Sequence(&theInfo) {}
};

class PDCPInfor4 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PDCPInfor4(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 65535> Dummy;

class PDCPInfoReconfig : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PDCPInfoReconfig(): Sequence(&theInfo) {}
};

class PDCPInfoReconfigr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PDCPInfoReconfigr4(): Sequence(&theInfo) {}
};

enum PDCPROHCTargetModeValues {
	o_Mode = 0,
	r_Mode = 1,
};
typedef Enumerated<CONSTRAINED, 1> PDCPROHCTargetMode;

enum PollPDUValues {
	pdu1 = 0,
	pdu2 = 1,
	pdu4 = 2,
	pdu8 = 3,
	pdu16 = 4,
	pdu32 = 5,
	pdu64 = 6,
	pdu128 = 7,
};
typedef Enumerated<CONSTRAINED, 7> PollPDU;

enum PollSDUValues {
	sdu1 = 0,
	sdu4 = 1,
	sdu16 = 2,
	sdu64 = 3,
};
typedef Enumerated<CONSTRAINED, 3> PollSDU;

enum TimerPollProhibitValues {
	tpp10 = 0,
	tpp20 = 1,
	tpp30 = 2,
	tpp40 = 3,
	tpp50 = 4,
	tpp60 = 5,
	tpp70 = 6,
	tpp80 = 7,
	tpp90 = 8,
	tpp100 = 9,
	tpp110 = 10,
	tpp120 = 11,
	tpp130 = 12,
	tpp140 = 13,
	tpp150 = 14,
	tpp160 = 15,
	tpp170 = 16,
	tpp180 = 17,
	tpp190 = 18,
	tpp200 = 19,
	tpp210 = 20,
	tpp220 = 21,
	tpp230 = 22,
	tpp240 = 23,
	tpp250 = 24,
	tpp260 = 25,
	tpp270 = 26,
	tpp280 = 27,
	tpp290 = 28,
	tpp300 = 29,
	tpp310 = 30,
	tpp320 = 31,
	tpp330 = 32,
	tpp340 = 33,
	tpp350 = 34,
	tpp360 = 35,
	tpp370 = 36,
	tpp380 = 37,
	tpp390 = 38,
	tpp400 = 39,
	tpp410 = 40,
	tpp420 = 41,
	tpp430 = 42,
	tpp440 = 43,
	tpp450 = 44,
	tpp460 = 45,
	tpp470 = 46,
	tpp480 = 47,
	tpp490 = 48,
	tpp500 = 49,
	tpp510 = 50,
	tpp520 = 51,
	tpp530 = 52,
	tpp540 = 53,
	tpp550 = 54,
	tpp600 = 55,
	tpp650 = 56,
	tpp700 = 57,
	tpp750 = 58,
	tpp800 = 59,
	tpp850 = 60,
	tpp900 = 61,
	tpp950 = 62,
	tpp1000 = 63,
};
typedef Enumerated<CONSTRAINED, 63> TimerPollProhibit;

enum TimerPollValues {
	tp10 = 0,
	tp20 = 1,
	tp30 = 2,
	tp40 = 3,
	tp50 = 4,
	tp60 = 5,
	tp70 = 6,
	tp80 = 7,
	tp90 = 8,
	tp100 = 9,
	tp110 = 10,
	tp120 = 11,
	tp130 = 12,
	tp140 = 13,
	tp150 = 14,
	tp160 = 15,
	tp170 = 16,
	tp180 = 17,
	tp190 = 18,
	tp200 = 19,
	tp210 = 20,
	tp220 = 21,
	tp230 = 22,
	tp240 = 23,
	tp250 = 24,
	tp260 = 25,
	tp270 = 26,
	tp280 = 27,
	tp290 = 28,
	tp300 = 29,
	tp310 = 30,
	tp320 = 31,
	tp330 = 32,
	tp340 = 33,
	tp350 = 34,
	tp360 = 35,
	tp370 = 36,
	tp380 = 37,
	tp390 = 38,
	tp400 = 39,
	tp410 = 40,
	tp420 = 41,
	tp430 = 42,
	tp440 = 43,
	tp450 = 44,
	tp460 = 45,
	tp470 = 46,
	tp480 = 47,
	tp490 = 48,
	tp500 = 49,
	tp510 = 50,
	tp520 = 51,
	tp530 = 52,
	tp540 = 53,
	tp550 = 54,
	tp600 = 55,
	tp650 = 56,
	tp700 = 57,
	tp750 = 58,
	tp800 = 59,
	tp850 = 60,
	tp900 = 61,
	tp950 = 62,
	tp1000 = 63,
};
typedef Enumerated<CONSTRAINED, 63> TimerPoll;

typedef Boolean LastTransmissionPDU_Poll;

typedef Boolean LastRetransmissionPDU_Poll;

enum PollWindowValues {
	pw50 = 0,
	pw60 = 1,
	pw70 = 2,
	pw80 = 3,
	pw85 = 4,
	pw90 = 5,
	pw95 = 6,
	pw99 = 7,
};
typedef Enumerated<CONSTRAINED, 7> PollWindow;

enum TimerPollPeriodicValues {
	tper100 = 0,
	tper200 = 1,
	tper300 = 2,
	tper400 = 3,
	tper500 = 4,
	tper750 = 5,
	tper1000 = 6,
	tper2000 = 7,
};
typedef Enumerated<CONSTRAINED, 7> TimerPollPeriodic;

class PollingInfo : Sequence {
private:
	static const void *itemsInfo[8];
	static bool itemsPres[8];
public:
	static const Info theInfo;
	PollingInfo(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 15> PredefinedConfigIdentity;

typedef Integer<CONSTRAINED, 0, 15> PredefinedConfigValueTag;

class TransmissionRLCDiscard : Choice {
private:
	static const void *choicesInfo[4];
public:
	static const Info theInfo;
	TransmissionRLCDiscard(): Choices(&theInfo) {}
};

enum TransmissionWindowSizeValues {
	tw1 = 0,
	tw8 = 1,
	tw16 = 2,
	tw32 = 3,
	tw64 = 4,
	tw128 = 5,
	tw256 = 6,
	tw512 = 7,
	tw768 = 8,
	tw1024 = 9,
	tw1536 = 10,
	tw2047 = 11,
	tw2560 = 12,
	tw3072 = 13,
	tw3584 = 14,
	tw4095 = 15,
};
typedef Enumerated<CONSTRAINED, 15> TransmissionWindowSize;

enum TimerRSTValues {
	tr50 = 0,
	tr100 = 1,
	tr150 = 2,
	tr200 = 3,
	tr250 = 4,
	tr300 = 5,
	tr350 = 6,
	tr400 = 7,
	tr450 = 8,
	tr500 = 9,
	tr550 = 10,
	tr600 = 11,
	tr700 = 12,
	tr800 = 13,
	tr900 = 14,
	tr1000 = 15,
};
typedef Enumerated<CONSTRAINED, 15> TimerRST;

class ULAMRLCMode : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	ULAMRLCMode(): Sequence(&theInfo) {}
};

class ULUMRLCMode : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULUMRLCMode(): Sequence(&theInfo) {}
};

typedef Boolean SegmentationIndication;

class ULTMRLCMode : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULTMRLCMode(): Sequence(&theInfo) {}
};

typedef _Null Spare;

class ULRLCMode : Choice {
private:
	static const void *choicesInfo[4];
public:
	static const Info theInfo;
	ULRLCMode(): Choices(&theInfo) {}
};

class RLCInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RLCInfo(): Sequence(&theInfo) {}
};

class RLCInfoChoice : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RLCInfoChoice(): Choices(&theInfo) {}
};

typedef _Null Rach;

typedef _Null Dummy;

class ULTransportChannelType : Choice {
private:
	static const void *choicesInfo[4];
public:
	static const Info theInfo;
	ULTransportChannelType(): Choices(&theInfo) {}
};

typedef _Null AllSizes;

typedef _Null Configured;

typedef Integer<CONSTRAINED, 1, maxTF> Rlc_SizeIndex;

class RLCSizeInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RLCSizeInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<RLCSizeInfo, CONSTRAINED, 1, maxTF> RLCSizeExplicitList;

class Rlc_SizeList : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	Rlc_SizeList(): Choices(&theInfo) {}
};

class ULLogicalChannelMapping : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	ULLogicalChannelMapping(): Sequence(&theInfo) {}
};

typedef Boolean Rlc_LogicalChannelMappingIndicator;

typedef SequenceOf<ULLogicalChannelMapping, CONSTRAINED, maxLoCHperRLC, maxLoCHperRLC> Ul_LogicalChannelMapping;

class ULLogicalChannelMappingList : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULLogicalChannelMappingList(): Sequence(&theInfo) {}
};

class ULLogicalChannelMappings : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULLogicalChannelMappings(): Choices(&theInfo) {}
};

class RBMappingOption : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RBMappingOption(): Sequence(&theInfo) {}
};

typedef SequenceOf<RBMappingOption, CONSTRAINED, 1, maxRBMuxOptions> RBMappingInfo;

class SRBInformationSetup : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	SRBInformationSetup(): Sequence(&theInfo) {}
};

typedef SequenceOf<SRBInformationSetup, CONSTRAINED, 1, maxSRBsetup> SRBInformationSetupList;

class RBInformationSetup : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	RBInformationSetup(): Sequence(&theInfo) {}
};

typedef SequenceOf<RBInformationSetup, CONSTRAINED, 1, maxRBperRAB> RBInformationSetupList;

class PredefinedRBConfiguration : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PredefinedRBConfiguration(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 1023> TFCValue;

typedef SequenceOf<TFCValue, CONSTRAINED, 1, maxTFC> AllowedTFCList;

typedef SequenceOf<TFCValue, CONSTRAINED, 1, maxTFC> NonallowedTFCList;

enum ULTrCHTypeValues {
	dch = 0,
	usch = 1,
};
typedef Enumerated<CONSTRAINED, 1> ULTrCHType;

typedef Integer<CONSTRAINED, 0, 31> AllowedTFIListItem;

typedef SequenceOf<AllowedTFIListItem, CONSTRAINED, 1, maxTF> AllowedTFIList;

class RestrictedTrChInfo : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RestrictedTrChInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<RestrictedTrChInfo, CONSTRAINED, 1, maxTrCH> RestrictedTrChInfoList;

typedef _Null FullTFCS;

class TFCSubset : Choice {
private:
	static const void *choicesInfo[5];
public:
	static const Info theInfo;
	TFCSubset(): Choices(&theInfo) {}
};

class Ctfc2Bit : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	Ctfc2Bit(): Sequence(&theInfo) {}
};

class Ctfc4Bit : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	Ctfc4Bit(): Sequence(&theInfo) {}
};

class Ctfc6Bit : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	Ctfc6Bit(): Sequence(&theInfo) {}
};

class Ctfc8Bit : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	Ctfc8Bit(): Sequence(&theInfo) {}
};

class Ctfc12Bit : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	Ctfc12Bit(): Sequence(&theInfo) {}
};

class Ctfc16Bit : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	Ctfc16Bit(): Sequence(&theInfo) {}
};

class Ctfc24Bit : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	Ctfc24Bit(): Sequence(&theInfo) {}
};

class CtfcSize : Choice {
private:
	static const void *choicesInfo[7];
public:
	static const Info theInfo;
	CtfcSize(): Choices(&theInfo) {}
};

class TFCSReconfAdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	TFCSReconfAdd(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 1023> Tfci;

class TFCSRemoval : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	TFCSRemoval(): Sequence(&theInfo) {}
};

typedef SequenceOf<TFCSRemoval, CONSTRAINED, 1, maxTFC> TFCSRemovalList;

class Replacement : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Replacement(): Sequence(&theInfo) {}
};

class ExplicitTFCSConfiguration : Choice {
private:
	static const void *choicesInfo[4];
public:
	static const Info theInfo;
	ExplicitTFCSConfiguration(): Choices(&theInfo) {}
};

enum SplitTypeValues {
	hardSplit = 0,
	logicalSplit = 1,
};
typedef Enumerated<CONSTRAINED, 1> SplitType;

typedef Integer<CONSTRAINED, 1, 10> Tfci_Field2_Length;

typedef Integer<CONSTRAINED, 1, 1023> MaxTFCIField2Value;

typedef Integer<CONSTRAINED, 0, 3> Ctfc2bit;

typedef Integer<CONSTRAINED, 0, 15> Ctfc4bit;

typedef Integer<CONSTRAINED, 0, 63> Ctfc6bit;

typedef Integer<CONSTRAINED, 0, 255> Ctfc8bit;

typedef Integer<CONSTRAINED, 0, 4095> Ctfc12bit;

typedef Integer<CONSTRAINED, 0, 65535> Ctfc16bit;

typedef Integer<CONSTRAINED, 0, 16777215> Ctfc24bit;

class TFCSInfoForDSCH : Choice {
private:
	static const void *choicesInfo[7];
public:
	static const Info theInfo;
	TFCSInfoForDSCH(): Choices(&theInfo) {}
};

class TFCIRange : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TFCIRange(): Sequence(&theInfo) {}
};

typedef SequenceOf<TFCIRange, CONSTRAINED, 1, maxPDSCH_TFCIgroups> TFCIRangeList;

class TFCIField2Information : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	TFCIField2Information(): Choices(&theInfo) {}
};

class SplitTFCISignalling : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	SplitTFCISignalling(): Sequence(&theInfo) {}
};

class TFCS : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	TFCS(): Choices(&theInfo) {}
};

class Fdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 8> TFCSIdentityPlain;

typedef Boolean SharedChannelIndicator;

class TFCSIdentity : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TFCSIdentity(): Sequence(&theInfo) {}
};

class IndividualULCCTrCHInfo : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	IndividualULCCTrCHInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<IndividualULCCTrCHInfo, CONSTRAINED, 1, maxCCTrCH> IndividualULCCTrCHInfoList;

class Tdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class ULCommonTransChInfo : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	ULCommonTransChInfo(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 127> SizeType1;

typedef Integer<CONSTRAINED, 0, 15> Part1;

typedef Integer<CONSTRAINED, 1, 7> Part2;

class SizeType2 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SizeType2(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 47> Part1;

typedef Integer<CONSTRAINED, 1, 15> Part2;

class SizeType3 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SizeType3(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 62> Part1;

typedef Integer<CONSTRAINED, 1, 63> Part2;

class SizeType4 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SizeType4(): Sequence(&theInfo) {}
};

class BitModeRLCSizeInfo : Choice {
private:
	static const void *choicesInfo[4];
public:
	static const Info theInfo;
	BitModeRLCSizeInfo(): Choices(&theInfo) {}
};

class Rlc_Size : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Rlc_Size(): Choices(&theInfo) {}
};

typedef _Null Zero;

typedef _Null One;

typedef Integer<CONSTRAINED, 2, 17> Small;

typedef Integer<CONSTRAINED, 18, 512> Large;

class NumberOfTransportBlocks : Choice {
private:
	static const void *choicesInfo[4];
public:
	static const Info theInfo;
	NumberOfTransportBlocks(): Choices(&theInfo) {}
};

typedef SequenceOf<NumberOfTransportBlocks, CONSTRAINED, 1, maxTF> NumberOfTbSizeList;

typedef _Null AllSizes;

typedef _Null Configured;

typedef Integer<CONSTRAINED, 0, 1> LogChOfRb;

class LogicalChannelByRB : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	LogicalChannelByRB(): Sequence(&theInfo) {}
};

typedef SequenceOf<LogicalChannelByRB, CONSTRAINED, 1, 15> ExplicitList;

class LogicalChannelList : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	LogicalChannelList(): Choices(&theInfo) {}
};

class DedicatedDynamicTFInfo : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DedicatedDynamicTFInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<DedicatedDynamicTFInfo, CONSTRAINED, 1, maxTF> DedicatedDynamicTFInfoList;

class Rlc_Size : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Rlc_Size(): Choices(&theInfo) {}
};

class NumberOfTbSizeAndTTIList : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	NumberOfTbSizeAndTTIList(): Sequence(&theInfo) {}
};

class DedicatedDynamicTFInfoDynamicTTI : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DedicatedDynamicTFInfoDynamicTTI(): Sequence(&theInfo) {}
};

typedef SequenceOf<DedicatedDynamicTFInfoDynamicTTI, CONSTRAINED, 1, maxTF> DedicatedDynamicTFInfoListDynamicTTI;

class Tti : Choice {
private:
	static const void *choicesInfo[5];
public:
	static const Info theInfo;
	Tti(): Choices(&theInfo) {}
};

typedef _Null NoCoding;

enum CodingRateValues {
	half = 0,
	third = 1,
};
typedef Enumerated<CONSTRAINED, 1> CodingRate;

typedef _Null Turbo;

class ChannelCodingType : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	ChannelCodingType(): Choices(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, hiRM> RateMatchingAttribute;

enum CRCSizeValues {
	crc0 = 0,
	crc8 = 1,
	crc12 = 2,
	crc16 = 3,
	crc24 = 4,
};
typedef Enumerated<CONSTRAINED, 4> CRCSize;

class SemistaticTFInformation : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	SemistaticTFInformation(): Sequence(&theInfo) {}
};

class DedicatedTransChTFS : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DedicatedTransChTFS(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 31> SizeType1;

typedef Integer<CONSTRAINED, 0, 63> SizeType2;

typedef Integer<CONSTRAINED, 0, 56> SizeType3;

class OctetModeRLCSizeInfoType2 : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	OctetModeRLCSizeInfoType2(): Choices(&theInfo) {}
};

class Fdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

class CommonTDD_Choice : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CommonTDD_Choice(): Choices(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class Rlc_Size : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Rlc_Size(): Choices(&theInfo) {}
};

typedef SequenceOf<NumberOfTransportBlocks, CONSTRAINED, 1, maxTF> NumberOfTbSizeList;

class CommonDynamicTFInfo : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	CommonDynamicTFInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<CommonDynamicTFInfo, CONSTRAINED, 1, maxTF> CommonDynamicTFInfoList;

class CommonTDD_Choice : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CommonTDD_Choice(): Choices(&theInfo) {}
};

class CommonDynamicTFInfoDynamicTTI : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	CommonDynamicTFInfoDynamicTTI(): Sequence(&theInfo) {}
};

typedef SequenceOf<CommonDynamicTFInfoDynamicTTI, CONSTRAINED, 1, maxTF> CommonDynamicTFInfoListDynamicTTI;

class Tti : Choice {
private:
	static const void *choicesInfo[5];
public:
	static const Info theInfo;
	Tti(): Choices(&theInfo) {}
};

class CommonTransChTFS : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CommonTransChTFS(): Sequence(&theInfo) {}
};

class TransportFormatSet : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	TransportFormatSet(): Choices(&theInfo) {}
};

class ULAddReconfTransChInformation : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	ULAddReconfTransChInformation(): Sequence(&theInfo) {}
};

typedef SequenceOf<ULAddReconfTransChInformation, CONSTRAINED, 1, maxTrCHpreconf> ULAddReconfTransChInfoList;

typedef _Null SameAsUL;

class Dl_Parameters : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Dl_Parameters(): Choices(&theInfo) {}
};

class Fdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

class Tfcs_SignallingMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Tfcs_SignallingMode(): Choices(&theInfo) {}
};

class IndividualDLCCTrCHInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	IndividualDLCCTrCHInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<IndividualDLCCTrCHInfo, CONSTRAINED, 1, maxCCTrCH> IndividualDLCCTrCHInfoList;

class Tdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class DLCommonTransChInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DLCommonTransChInfo(): Sequence(&theInfo) {}
};

enum DLTrCHTypeValues {
	dch = 0,
	dsch = 1,
};
typedef Enumerated<CONSTRAINED, 1> DLTrCHType;

class ULTransportChannelIdentity : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULTransportChannelIdentity(): Sequence(&theInfo) {}
};

class Tfs_SignallingMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Tfs_SignallingMode(): Choices(&theInfo) {}
};

typedef Integer<CONSTRAINED, -63, 0> BLERQualityValue;

class QualityTarget : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	QualityTarget(): Sequence(&theInfo) {}
};

enum MessTypeValues {
	transportFormatCombinationControl = 0,
};
typedef Enumerated<CONSTRAINED, 0> MessType;

typedef _Null Mode1;

typedef SequenceOf<TransportChannelIdentity, CONSTRAINED, 1, maxTrCH> ULControlledTrChList;

class Mode2 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Mode2(): Sequence(&theInfo) {}
};

class Tm_SignallingMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Tm_SignallingMode(): Choices(&theInfo) {}
};

class TMSignallingInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TMSignallingInfo(): Sequence(&theInfo) {}
};

class DLAddReconfTransChInformation : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	DLAddReconfTransChInformation(): Sequence(&theInfo) {}
};

typedef SequenceOf<DLAddReconfTransChInformation, CONSTRAINED, 1, maxTrCHpreconf> DLAddReconfTransChInfoList;

class PreDefTransChConfiguration : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	PreDefTransChConfiguration(): Sequence(&theInfo) {}
};

class Fdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, -35, 10> ConstantValueTdd;

class Tdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ULDPCHPowerControlInfoPredef : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULDPCHPowerControlInfoPredef(): Choices(&theInfo) {}
};

typedef Boolean Tfci_Existence;

enum PuncturingLimitValues {
	pl0_40 = 0,
	pl0_44 = 1,
	pl0_48 = 2,
	pl0_52 = 3,
	pl0_56 = 4,
	pl0_60 = 5,
	pl0_64 = 6,
	pl0_68 = 7,
	pl0_72 = 8,
	pl0_76 = 9,
	pl0_80 = 10,
	pl0_84 = 11,
	pl0_88 = 12,
	pl0_92 = 13,
	pl0_96 = 14,
	pl1 = 15,
};
typedef Enumerated<CONSTRAINED, 15> PuncturingLimit;

class Fdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

enum SecondInterleavingModeValues {
	frameRelated = 0,
	timeslotRelated = 1,
};
typedef Enumerated<CONSTRAINED, 1> SecondInterleavingMode;

enum TFCICodingValues {
	tfci_bits_4 = 0,
	tfci_bits_8 = 1,
	tfci_bits_16 = 2,
	tfci_bits_32 = 3,
};
typedef Enumerated<CONSTRAINED, 3> TFCICoding;

typedef _Null RepetitionPeriod1;

typedef Integer<CONSTRAINED, 1, 1> RepetitionPeriod2;

typedef Integer<CONSTRAINED, 1, 3> RepetitionPeriod4;

typedef Integer<CONSTRAINED, 1, 7> RepetitionPeriod8;

typedef Integer<CONSTRAINED, 1, 15> RepetitionPeriod16;

typedef Integer<CONSTRAINED, 1, 31> RepetitionPeriod32;

typedef Integer<CONSTRAINED, 1, 63> RepetitionPeriod64;

class RepetitionPeriodAndLength : Choice {
private:
	static const void *choicesInfo[7];
public:
	static const Info theInfo;
	RepetitionPeriodAndLength(): Choices(&theInfo) {}
};

class CommonTimeslotInfo : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CommonTimeslotInfo(): Sequence(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class ULDPCHInfoPredef : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULDPCHInfoPredef(): Sequence(&theInfo) {}
};

typedef _Null Sfd4;

typedef _Null Sfd8;

typedef _Null Sfd16;

typedef _Null Sfd32;

typedef _Null Sfd64;

enum PilotBits128Values {
	pb4 = 0,
	pb8 = 1,
};
typedef Enumerated<CONSTRAINED, 1> PilotBits128;

enum PilotBits256Values {
	pb2 = 0,
	pb4 = 1,
	pb8 = 2,
};
typedef Enumerated<CONSTRAINED, 2> PilotBits256;

typedef _Null Sfd512;

class SF512AndPilot : Choice {
private:
	static const void *choicesInfo[8];
public:
	static const Info theInfo;
	SF512AndPilot(): Choices(&theInfo) {}
};

enum PositionFixedOrFlexibleValues {
	fixed = 0,
	flexible = 1,
};
typedef Enumerated<CONSTRAINED, 1> PositionFixedOrFlexible;

typedef Boolean Tfci_Existence;

class Fdd : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class DLDPCHInfoCommonPredef : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLDPCHInfoCommonPredef(): Sequence(&theInfo) {}
};

class DLCommonInformationPredef : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLCommonInformationPredef(): Sequence(&theInfo) {}
};

class PreDefPhyChConfiguration : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PreDefPhyChConfiguration(): Sequence(&theInfo) {}
};

class PreDefRadioConfiguration : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PreDefRadioConfiguration(): Sequence(&theInfo) {}
};

enum NumberOfTPCBitsValues {
	tpc4 = 0,
};
typedef Enumerated<CONSTRAINED, 0> NumberOfTPCBits;

class Fdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

typedef _Null Tdd;

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class ULDPCHInfoPredefv770ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULDPCHInfoPredefv770ext(): Sequence(&theInfo) {}
};

class PreDefPhyChConfigurationv770ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PreDefPhyChConfigurationv770ext(): Sequence(&theInfo) {}
};

class PreDefRadioConfigurationv770ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PreDefRadioConfigurationv770ext(): Sequence(&theInfo) {}
};

enum MAChsWindowSizer9Values {
	mws4 = 0,
	mws6 = 1,
	mws8 = 2,
	mws12 = 3,
	mws16 = 4,
	mws24 = 5,
	mws32 = 6,
	mw64 = 7,
	mw128 = 8,
};
typedef Enumerated<CONSTRAINED, 8> MAChsWindowSizer9;

class PreDefRadioConfigurationv920ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PreDefRadioConfigurationv920ext(): Sequence(&theInfo) {}
};

typedef _Null StoredWithValueTagSameAsPrevius;

typedef _Null NotStored;

class Other : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Other(): Choices(&theInfo) {}
};

class PredefinedConfigStatusInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PredefinedConfigStatusInfo(): Choices(&theInfo) {}
};

typedef SequenceOf<PredefinedConfigStatusInfo, CONSTRAINED, maxPredefConfig, maxPredefConfig> PredefinedConfigStatusList;

typedef Integer<CONSTRAINED, 0, 10> StartPosition;

typedef SequenceOf<PredefinedConfigValueTag, CONSTRAINED, 1, maxPredefConfig> PredefinedConfigValueTagList;

class PredefinedConfigSetWithDifferentValueTag : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PredefinedConfigSetWithDifferentValueTag(): Sequence(&theInfo) {}
};

typedef SequenceOf<PredefinedConfigSetWithDifferentValueTag, CONSTRAINED, 1, 2> PredefinedConfigSetsWithDifferentValueTag;

typedef SequenceOf<PredefinedConfigStatusInfo, CONSTRAINED, 1, maxPredefConfig> PredefinedConfigStatusListVarSz;

class PredefinedConfigStatusListComp : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PredefinedConfigStatusListComp(): Sequence(&theInfo) {}
};

class RABInfo : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	RABInfo(): Sequence(&theInfo) {}
};

typedef OctetString<CONSTRAINED, 1, 1> MBMSSessionIdentity;

class RABInfor6ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RABInfor6ext(): Sequence(&theInfo) {}
};

typedef OctetString<CONSTRAINED, 3, 3> Mbms_ServiceIdentity;

class RABInfov6b0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RABInfov6b0ext(): Sequence(&theInfo) {}
};

class RABInfor6 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	RABInfor6(): Sequence(&theInfo) {}
};

typedef OctetString<CONSTRAINED, 3, 3> Mbms_ServiceIdentity;

class RABInfor7 : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	RABInfor7(): Sequence(&theInfo) {}
};

typedef SequenceOf<RABInfo, CONSTRAINED, 1, maxRABsetup> RABInformationList;

typedef SequenceOf<RABInfor6, CONSTRAINED, 1, maxRABsetup> RABInformationListr6;

class RABInformationReconfig : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RABInformationReconfig(): Sequence(&theInfo) {}
};

typedef SequenceOf<RABInformationReconfig, CONSTRAINED, 1,  maxRABsetup> RABInformationReconfigList;

class RABInformationReconfigr8 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	RABInformationReconfigr8(): Sequence(&theInfo) {}
};

typedef SequenceOf<RABInformationReconfigr8, CONSTRAINED, 1, maxRABsetup> RABInformationReconfigListr8;

class RABInfoPost : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RABInfoPost(): Sequence(&theInfo) {}
};

typedef OctetString<CONSTRAINED, 3, 3> Mbms_ServiceIdentity;

class RABInformationMBMSPtp : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RABInformationMBMSPtp(): Sequence(&theInfo) {}
};

typedef SequenceOf<RABInformationMBMSPtp, CONSTRAINED, 1, maxMBMSservSelect> RABInformationMBMSPtpList;

class RABInformationSetup : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RABInformationSetup(): Sequence(&theInfo) {}
};

class RBInformationSetupr4 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	RBInformationSetupr4(): Sequence(&theInfo) {}
};

typedef SequenceOf<RBInformationSetupr4, CONSTRAINED, 1, maxRBperRAB> RBInformationSetupListr4;

class RABInformationSetupr4 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RABInformationSetupr4(): Sequence(&theInfo) {}
};

typedef Boolean Rlc_OneSidedReEst;

class RLCInfor5 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RLCInfor5(): Sequence(&theInfo) {}
};

class RLCInfoChoicer5 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RLCInfoChoicer5(): Choices(&theInfo) {}
};

class RBMappingOptionr5 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RBMappingOptionr5(): Sequence(&theInfo) {}
};

typedef SequenceOf<RBMappingOptionr5, CONSTRAINED, 1, maxRBMuxOptions> RBMappingInfor5;

class RBInformationSetupr5 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	RBInformationSetupr5(): Sequence(&theInfo) {}
};

typedef SequenceOf<RBInformationSetupr5, CONSTRAINED, 1, maxRBperRAB> RBInformationSetupListr5;

class RABInformationSetupr5 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RABInformationSetupr5(): Sequence(&theInfo) {}
};

class RABInformationSetupr6ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RABInformationSetupr6ext(): Sequence(&theInfo) {}
};

typedef Boolean Rlc_OneSidedReEst;

enum altE_bitInterpretationValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> altE_bitInterpretation;

class RLCInfor6 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	RLCInfor6(): Sequence(&theInfo) {}
};

class RLCInfoChoicer6 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RLCInfoChoicer6(): Choices(&theInfo) {}
};

typedef _Null AllSizes;

typedef _Null Configured;

class Rlc_SizeList : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	Rlc_SizeList(): Choices(&theInfo) {}
};

class Dch_rach_usch : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	Dch_rach_usch(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, maxE_DCHMACdFlow_1> EDCHMACdFlowIdentity;


typedef SequenceOf<RLCPDUSize, CONSTRAINED, 1, maxRLCPDUsizePerLogChan> RLCPDUSizeList;

typedef Boolean IncludeInSchedulingInfo;

class E_dch : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	E_dch(): Sequence(&theInfo) {}
};

class Ul_TrCH_Type : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Ul_TrCH_Type(): Choices(&theInfo) {}
};

class ULLogicalChannelMappingr6 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULLogicalChannelMappingr6(): Sequence(&theInfo) {}
};

typedef Boolean Rlc_LogicalChannelMappingIndicator;

typedef SequenceOf<ULLogicalChannelMappingr6, CONSTRAINED, maxLoCHperRLC, maxLoCHperRLC> Ul_LogicalChannelMapping;

class ULLogicalChannelMappingListr6 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULLogicalChannelMappingListr6(): Sequence(&theInfo) {}
};

class ULLogicalChannelMappingsr6 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULLogicalChannelMappingsr6(): Choices(&theInfo) {}
};

class RBMappingOptionr6 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RBMappingOptionr6(): Sequence(&theInfo) {}
};

typedef SequenceOf<RBMappingOptionr6, CONSTRAINED, 1, maxRBMuxOptions> RBMappingInfor6;

class RBInformationSetupr6 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	RBInformationSetupr6(): Sequence(&theInfo) {}
};

typedef SequenceOf<RBInformationSetupr6, CONSTRAINED, 1, maxRBperRAB> RBInformationSetupListr6;

class RABInformationSetupr6 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RABInformationSetupr6(): Sequence(&theInfo) {}
};

class RABInformationSetupv6b0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RABInformationSetupv6b0ext(): Sequence(&theInfo) {}
};

typedef Boolean Rlc_OneSidedReEst;

enum altE_bitInterpretationValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> altE_bitInterpretation;

enum useSpecialValueOfHEFieldValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> useSpecialValueOfHEField;

class RLCInfor7 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	RLCInfor7(): Sequence(&theInfo) {}
};

class RLCInfoChoicer7 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RLCInfoChoicer7(): Choices(&theInfo) {}
};

class RBMappingOptionr7 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RBMappingOptionr7(): Sequence(&theInfo) {}
};

typedef SequenceOf<RBMappingOptionr7, CONSTRAINED, 1, maxRBMuxOptions> RBMappingInfor7;

class RBInformationSetupr7 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	RBInformationSetupr7(): Sequence(&theInfo) {}
};

typedef SequenceOf<RBInformationSetupr7, CONSTRAINED, 1, maxRBperRAB> RBInformationSetupListr7;

class RABInformationSetupr7 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RABInformationSetupr7(): Sequence(&theInfo) {}
};

typedef _Null AllSizes;

typedef _Null Configured;

class Rlc_SizeList : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	Rlc_SizeList(): Choices(&theInfo) {}
};

class Dch_rach_usch : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	Dch_rach_usch(): Sequence(&theInfo) {}
};

class FixedSize : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	FixedSize(): Sequence(&theInfo) {}
};

enum lengthIndicatorSizeValues {
	size7 = 0,
	size15 = 1,
};
typedef Enumerated<CONSTRAINED, 1> lengthIndicatorSize;

typedef Integer<CONSTRAINED, 0, 1503> MinRLC_PDU_Size;

typedef Integer<CONSTRAINED, 0, 1503> LargestRLC_PDU_Size;

class RLCPDUSizeConstraint : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RLCPDUSizeConstraint(): Sequence(&theInfo) {}
};

class Rlc_PDU_Size : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Rlc_PDU_Size(): Choices(&theInfo) {}
};

typedef Boolean IncludeInSchedulingInfo;

class E_dch : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	E_dch(): Sequence(&theInfo) {}
};

class Ul_TrCH_Type : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Ul_TrCH_Type(): Choices(&theInfo) {}
};

class ULLogicalChannelMappingr8 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULLogicalChannelMappingr8(): Sequence(&theInfo) {}
};

typedef Boolean Rlc_LogicalChannelMappingIndicator;

typedef SequenceOf<ULLogicalChannelMappingr8, CONSTRAINED, maxLoCHperRLC, maxLoCHperRLC> Ul_LogicalChannelMapping;

class ULLogicalChannelMappingListr8 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULLogicalChannelMappingListr8(): Sequence(&theInfo) {}
};

class ULLogicalChannelMappingsr8 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULLogicalChannelMappingsr8(): Choices(&theInfo) {}
};

class RBMappingOptionr8 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RBMappingOptionr8(): Sequence(&theInfo) {}
};

typedef SequenceOf<RBMappingOptionr8, CONSTRAINED, 1, maxRBMuxOptions> RBMappingInfor8;

class RBInformationSetupr8 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	RBInformationSetupr8(): Sequence(&theInfo) {}
};

typedef SequenceOf<RBInformationSetupr8, CONSTRAINED, 1, maxRBperRAB> RBInformationSetupListr8;

class RABInformationSetupr8 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	RABInformationSetupr8(): Sequence(&theInfo) {}
};

class RABInformationSetupv820ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RABInformationSetupv820ext(): Sequence(&theInfo) {}
};

typedef SequenceOf<RABInformationSetup, CONSTRAINED, 1, maxRABsetup> RABInformationSetupList;

typedef SequenceOf<RABInformationSetupr4, CONSTRAINED, 1, maxRABsetup> RABInformationSetupListr4;

typedef SequenceOf<RABInformationSetupr5, CONSTRAINED, 1, maxRABsetup> RABInformationSetupListr5;

typedef SequenceOf<RABInformationSetupr6, CONSTRAINED, 1, maxRABsetup> RABInformationSetupListr6;

typedef SequenceOf<RABInformationSetupr6ext, CONSTRAINED, 1, maxRABsetup> RABInformationSetupListr6ext;

typedef SequenceOf<RABInformationSetupv6b0ext, CONSTRAINED, 1, maxRABsetup> RABInformationSetupListv6b0ext;

typedef SequenceOf<RABInformationSetupr7, CONSTRAINED, 1, maxRABsetup> RABInformationSetupListr7;

typedef SequenceOf<RABInformationSetupr8, CONSTRAINED, 1, maxRABsetup> RABInformationSetupListr8;

typedef SequenceOf<RABInformationSetupv820ext, CONSTRAINED, 1, maxRABsetup> RABInformationSetupListv820ext;

class RBCOUNTCInformation : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RBCOUNTCInformation(): Sequence(&theInfo) {}
};

typedef SequenceOf<RBCOUNTCInformation, CONSTRAINED, 1, maxRBallRABs> RBCOUNTCInformationList;

class RBCOUNTCMSBInformation : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RBCOUNTCMSBInformation(): Sequence(&theInfo) {}
};

typedef SequenceOf<RBCOUNTCMSBInformation, CONSTRAINED, 1, maxRBallRABs> RBCOUNTCMSBInformationList;

typedef SequenceOf<RBIdentity, CONSTRAINED, 1, maxRB> RBIdentityList;

class RBInformationAffected : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RBInformationAffected(): Sequence(&theInfo) {}
};

class RBInformationAffectedr5 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RBInformationAffectedr5(): Sequence(&theInfo) {}
};

class RBInformationAffectedr6 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RBInformationAffectedr6(): Sequence(&theInfo) {}
};

class RBInformationAffectedr7 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RBInformationAffectedr7(): Sequence(&theInfo) {}
};

class RBInformationAffectedr8 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RBInformationAffectedr8(): Sequence(&theInfo) {}
};

typedef SequenceOf<RBInformationAffected, CONSTRAINED, 1, maxRB> RBInformationAffectedList;

typedef SequenceOf<RBInformationAffectedr5, CONSTRAINED, 1, maxRB> RBInformationAffectedListr5;

typedef SequenceOf<RBInformationAffectedr6, CONSTRAINED, 1, maxRB> RBInformationAffectedListr6;

typedef SequenceOf<RBInformationAffectedr7, CONSTRAINED, 1, maxRB> RBInformationAffectedListr7;

typedef SequenceOf<RBInformationAffectedr8, CONSTRAINED, 1, maxRB> RBInformationAffectedListr8;

typedef _Null Release;

class Rb_Change : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Rb_Change(): Choices(&theInfo) {}
};

class RBInformationChangedr6 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RBInformationChangedr6(): Sequence(&theInfo) {}
};

typedef SequenceOf<RBInformationChangedr6, CONSTRAINED, 1, maxRB> RBInformationChangedListr6;

enum RBStopContinueValues {
	stopRB = 0,
	continueRB = 1,
};
typedef Enumerated<CONSTRAINED, 1> RBStopContinue;

class RBInformationReconfig : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	RBInformationReconfig(): Sequence(&theInfo) {}
};

class RBInformationReconfigr4 : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	RBInformationReconfigr4(): Sequence(&theInfo) {}
};

class RBInformationReconfigr5 : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	RBInformationReconfigr5(): Sequence(&theInfo) {}
};

class RBInformationReconfigr6 : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	RBInformationReconfigr6(): Sequence(&theInfo) {}
};

class RBInformationReconfigr7 : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	RBInformationReconfigr7(): Sequence(&theInfo) {}
};

class RBInformationReconfigr8 : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	RBInformationReconfigr8(): Sequence(&theInfo) {}
};

typedef SequenceOf<RBInformationReconfig, CONSTRAINED, 1, maxRB> RBInformationReconfigList;

typedef SequenceOf<RBInformationReconfigr4, CONSTRAINED, 1, maxRB> RBInformationReconfigListr4;

typedef SequenceOf<RBInformationReconfigr5, CONSTRAINED, 1, maxRB> RBInformationReconfigListr5;

typedef SequenceOf<RBInformationReconfigr6, CONSTRAINED, 1, maxRB> RBInformationReconfigListr6;

typedef SequenceOf<RBInformationReconfigr7, CONSTRAINED, 1, maxRB> RBInformationReconfigListr7;

typedef SequenceOf<RBInformationReconfigr8, CONSTRAINED, 1, maxRB> RBInformationReconfigListr8;

typedef SequenceOf<RBIdentity, CONSTRAINED, 1, maxRB> RBInformationReleaseList;

enum TimerOSDr6Values {
	ms40 = 0,
	ms80 = 1,
	ms120 = 2,
	ms160 = 3,
	ms240 = 4,
	ms320 = 5,
	ms480 = 6,
	ms640 = 7,
	ms960 = 8,
	ms1280 = 9,
	ms1920 = 10,
	ms2560 = 11,
	ms3840 = 12,
	ms5120 = 13,
};
typedef Enumerated<CONSTRAINED, 13> TimerOSDr6;

enum WindowSizeOSDr6Values {
	ws8 = 0,
	ws16 = 1,
	ws32 = 2,
	ws40 = 3,
	ws48 = 4,
	ws56 = 5,
	ws64 = 6,
};
typedef Enumerated<CONSTRAINED, 6> WindowSizeOSDr6;

class UMRLCOutOSeqDeliveryInfor6 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UMRLCOutOSeqDeliveryInfor6(): Sequence(&theInfo) {}
};

class RLCInfoMCCHr6 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RLCInfoMCCHr6(): Sequence(&theInfo) {}
};

class RLCInfoMSCHr6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RLCInfoMSCHr6(): Sequence(&theInfo) {}
};

enum TimerDARr6Values {
	ms40 = 0,
	ms80 = 1,
	ms120 = 2,
	ms160 = 3,
	ms240 = 4,
	ms320 = 5,
	ms480 = 6,
	ms640 = 7,
	ms960 = 8,
	ms1280 = 9,
	ms1920 = 10,
	ms2560 = 11,
	ms3840 = 12,
	ms5120 = 13,
};
typedef Enumerated<CONSTRAINED, 13> TimerDARr6;

enum WindowSizeDARr6Values {
	ws4 = 0,
	ws8 = 1,
	ws16 = 2,
	ws32 = 3,
	ws40 = 4,
	ws48 = 5,
	ws56 = 6,
	ws64 = 7,
};
typedef Enumerated<CONSTRAINED, 7> WindowSizeDARr6;

class UMRLCDuplAvoidReordInfor6 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UMRLCDuplAvoidReordInfor6(): Sequence(&theInfo) {}
};

class RLCInfoMTCHr6 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RLCInfoMTCHr6(): Sequence(&theInfo) {}
};

class SRBInformationSetupr5 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	SRBInformationSetupr5(): Sequence(&theInfo) {}
};

class SRBInformationSetupr6 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	SRBInformationSetupr6(): Sequence(&theInfo) {}
};

class SRBInformationSetupr7 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	SRBInformationSetupr7(): Sequence(&theInfo) {}
};

class SRBInformationSetupr8 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	SRBInformationSetupr8(): Sequence(&theInfo) {}
};

typedef SequenceOf<SRBInformationSetupr5, CONSTRAINED, 1, maxSRBsetup> SRBInformationSetupListr5;

typedef SequenceOf<SRBInformationSetupr6, CONSTRAINED, 1, maxSRBsetup> SRBInformationSetupListr6;

typedef SequenceOf<SRBInformationSetupr7, CONSTRAINED, 1, maxSRBsetup> SRBInformationSetupListr7;

typedef SequenceOf<SRBInformationSetupr8, CONSTRAINED, 1, maxSRBsetup> SRBInformationSetupListr8;

typedef SequenceOf<SRBInformationSetup, CONSTRAINED, 3, 4> SRBInformationSetupList2;

typedef SequenceOf<SRBInformationSetupr6, CONSTRAINED, 3, 4> SRBInformationSetupList2r6;

typedef SequenceOf<SRBInformationSetupr7, CONSTRAINED, 3, 4> SRBInformationSetupList2r7;

typedef SequenceOf<SRBInformationSetupr8, CONSTRAINED, 3, 4> SRBInformationSetupList2r8;

class ULCounterSynchronisationInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULCounterSynchronisationInfo(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 7> Mac_hsQueueId;

enum T1ReleaseTimerValues {
	rt10 = 0,
	rt20 = 1,
	rt30 = 2,
	rt40 = 3,
	rt50 = 4,
	rt60 = 5,
	rt70 = 6,
	rt80 = 7,
	rt90 = 8,
	rt100 = 9,
	rt120 = 10,
	rt140 = 11,
	rt160 = 12,
	rt200 = 13,
	rt300 = 14,
	rt400 = 15,
};
typedef Enumerated<CONSTRAINED, 15> T1ReleaseTimer;

enum MAChsWindowSizeValues {
	mws4 = 0,
	mws6 = 1,
	mws8 = 2,
	mws12 = 3,
	mws16 = 4,
	mws24 = 5,
	mws32 = 6,
};
typedef Enumerated<CONSTRAINED, 6> MAChsWindowSize;

typedef Integer<CONSTRAINED, 1, 5000> Mac_d_PDU_Size;

typedef Integer<CONSTRAINED, 0, 7> Mac_d_PDU_Index;

class MACdPDUsizeInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MACdPDUsizeInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<MACdPDUsizeInfo, CONSTRAINED, 1,  maxMAC_d_PDUsizes> MACdPDUSizeInfoList;

class MAChsAddReconfQueue : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	MAChsAddReconfQueue(): Sequence(&theInfo) {}
};

typedef SequenceOf<MAChsAddReconfQueue, CONSTRAINED, 1, maxQueueIDs> MAChsAddReconfQueueList;

typedef Integer<CONSTRAINED, 0, 7> Mac_hsQueueId;

class MAChsDelQueue : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MAChsDelQueue(): Sequence(&theInfo) {}
};

typedef SequenceOf<MAChsDelQueue, CONSTRAINED, 1, maxQueueIDs> MAChsDelQueueList;

class AddOrReconfMACdFlow : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	AddOrReconfMACdFlow(): Sequence(&theInfo) {}
};

enum TresetResetTimerValues {
	rt1 = 0,
	rt2 = 1,
	rt3 = 2,
	rt4 = 3,
};
typedef Enumerated<CONSTRAINED, 3> TresetResetTimer;

class MACehsAddReconfReordQ : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	MACehsAddReconfReordQ(): Sequence(&theInfo) {}
};

typedef SequenceOf<MACehsAddReconfReordQ, CONSTRAINED, 1, maxQueueIDs> MACehsAddReconfReordQList;

class MACehsDelReordQ : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MACehsDelReordQ(): Sequence(&theInfo) {}
};

typedef SequenceOf<MACehsDelReordQ, CONSTRAINED, 1, maxQueueIDs> MACehsDelReordQList;

class AddOrReconfMACehsReordQ : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	AddOrReconfMACehsReordQ(): Sequence(&theInfo) {}
};

class MACehsAddReconfReordQr9 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	MACehsAddReconfReordQr9(): Sequence(&theInfo) {}
};

typedef SequenceOf<MACehsAddReconfReordQr9, CONSTRAINED, 1, maxQueueIDs> MACehsAddReconfReordQListr9;

class AddOrReconfMACehsReordQr9 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	AddOrReconfMACehsReordQr9(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 6> EDCHMACdFlowPowerOffset;

typedef Integer<CONSTRAINED, 0, 15> EDCHMACdFlowMaxRetrans;

typedef BitString<CONSTRAINED, maxE_DCHMACdFlow, maxE_DCHMACdFlow> EDCHMACdFlowMultiplexingList;

enum EDCHMACdFlowRetransTimerValues {
	ms10 = 0,
	ms15 = 1,
	ms20 = 2,
	ms25 = 3,
	ms30 = 4,
	ms35 = 5,
	ms40 = 6,
	ms45 = 7,
	ms50 = 8,
	ms55 = 9,
	ms60 = 10,
	ms65 = 11,
	ms70 = 12,
	ms75 = 13,
	ms80 = 14,
	ms85 = 15,
	ms90 = 16,
	ms95 = 17,
	ms100 = 18,
	ms110 = 19,
	ms120 = 20,
	ms140 = 21,
	ms160 = 22,
	ms200 = 23,
	ms240 = 24,
	ms280 = 25,
	ms320 = 26,
	ms400 = 27,
	ms480 = 28,
	ms560 = 29,
};
typedef Enumerated<CONSTRAINED, 29> EDCHMACdFlowRetransTimer;

class CommonEDCHMACdFlow : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	CommonEDCHMACdFlow(): Sequence(&theInfo) {}
};

typedef SequenceOf<CommonEDCHMACdFlow, CONSTRAINED, 1, maxE_DCHMACdFlow> CommonEDCHMACdFlowList;

class Tti : Choice {
private:
	static const void *choicesInfo[6];
public:
	static const Info theInfo;
	Tti(): Choices(&theInfo) {}
};

class CommonTransChTFSLCR : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CommonTransChTFSLCR(): Sequence(&theInfo) {}
};

class CommonMACehsReorderingQueue : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CommonMACehsReorderingQueue(): Sequence(&theInfo) {}
};

typedef SequenceOf<CommonMACehsReorderingQueue, CONSTRAINED, 1,  maxCommonQueueID> CommonMACehsReorderingQueueList;

typedef Integer<CONSTRAINED, 1, maxCPCHsets> CPCHSetID;

class Tfs_SignallingMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Tfs_SignallingMode(): Choices(&theInfo) {}
};

class DLAddReconfTransChInformation2 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	DLAddReconfTransChInformation2(): Sequence(&theInfo) {}
};

typedef SequenceOf<DLAddReconfTransChInformation2, CONSTRAINED, 1, maxTrCHpreconf> DLAddReconfTransChInfo2List;

class Tfs_SignallingMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Tfs_SignallingMode(): Choices(&theInfo) {}
};

class DLAddReconfTransChInformationr4 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	DLAddReconfTransChInformationr4(): Sequence(&theInfo) {}
};

typedef SequenceOf<DLAddReconfTransChInformationr4, CONSTRAINED, 1, maxTrCHpreconf> DLAddReconfTransChInfoListr4;

typedef _Null Hsdsch;

class DLTrCHTypeId1r5 : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	DLTrCHTypeId1r5(): Choices(&theInfo) {}
};

class HSDSCHInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HSDSCHInfo(): Sequence(&theInfo) {}
};

class Tfs_SignallingMode : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	Tfs_SignallingMode(): Choices(&theInfo) {}
};

class DLAddReconfTransChInformationr5 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DLAddReconfTransChInformationr5(): Sequence(&theInfo) {}
};

typedef SequenceOf<DLAddReconfTransChInformationr5, CONSTRAINED, 1, maxTrCHpreconf> DLAddReconfTransChInfoListr5;

class Dl_MAC_HeaderType : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Dl_MAC_HeaderType(): Choices(&theInfo) {}
};

class HSDSCHInfor7 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HSDSCHInfor7(): Sequence(&theInfo) {}
};

class Tfs_SignallingMode : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	Tfs_SignallingMode(): Choices(&theInfo) {}
};

class DLAddReconfTransChInformationr7 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DLAddReconfTransChInformationr7(): Sequence(&theInfo) {}
};

typedef SequenceOf<DLAddReconfTransChInformationr7, CONSTRAINED, 1, maxTrCHpreconf> DLAddReconfTransChInfoListr7;

class Dl_MAC_HeaderType : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Dl_MAC_HeaderType(): Choices(&theInfo) {}
};

class HSDSCHInfor9 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HSDSCHInfor9(): Sequence(&theInfo) {}
};

class Tfs_SignallingMode : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	Tfs_SignallingMode(): Choices(&theInfo) {}
};

class DLAddReconfTransChInformationr9 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DLAddReconfTransChInformationr9(): Sequence(&theInfo) {}
};

typedef SequenceOf<DLAddReconfTransChInformationr9, CONSTRAINED, 1, maxTrCHpreconf> DLAddReconfTransChInfoListr9;

class Dl_DCH_TFCS : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Dl_DCH_TFCS(): Sequence(&theInfo) {}
};

typedef _Null SameAsUL;

class Dl_Parameters : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Dl_Parameters(): Choices(&theInfo) {}
};

class Fdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class DLCommonTransChInfor4 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DLCommonTransChInfor4(): Sequence(&theInfo) {}
};

class DLTransportChannelIdentity : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DLTransportChannelIdentity(): Sequence(&theInfo) {}
};

typedef SequenceOf<DLTransportChannelIdentity, CONSTRAINED, 1, maxTrCH> DLDeletedTransChInfoList;

class DLTrCHTypeId2r5 : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	DLTrCHTypeId2r5(): Choices(&theInfo) {}
};

class DLTransportChannelIdentityr5 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLTransportChannelIdentityr5(): Sequence(&theInfo) {}
};

typedef SequenceOf<DLTransportChannelIdentityr5, CONSTRAINED, 1, maxTrCH> DLDeletedTransChInfoListr5;

class Hsdsch : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Hsdsch(): Choices(&theInfo) {}
};

class DLTrCHTypeId2r7 : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	DLTrCHTypeId2r7(): Choices(&theInfo) {}
};

class DLTransportChannelIdentityr7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLTransportChannelIdentityr7(): Sequence(&theInfo) {}
};

typedef SequenceOf<DLTransportChannelIdentityr7, CONSTRAINED, 1, maxTrCH> DLDeletedTransChInfoListr7;

typedef Integer<CONSTRAINED, 1, maxDRACclasses> DRACClassIdentity;

typedef Integer<CONSTRAINED, 1, 256> TransmissionTimeValidity;

typedef Integer<CONSTRAINED, 1, 256> TimeDurationBeforeRetry;

class DRACStaticInformation : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DRACStaticInformation(): Sequence(&theInfo) {}
};

typedef SequenceOf<DRACStaticInformation, CONSTRAINED, 1, maxTrCH> DRACStaticInformationList;

typedef Integer<CONSTRAINED, 1, 19982> MaxMAC_e_PDUContents;

typedef BitString<CONSTRAINED, 8, 8> Ms2_NonSchedTransmGrantHARQAlloc;

class Non_ScheduledTransGrantInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Non_ScheduledTransGrantInfo(): Sequence(&theInfo) {}
};

typedef _Null ScheduledTransmissionGrantInfo;

class TransmissionGrantType : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	TransmissionGrantType(): Choices(&theInfo) {}
};

class EDCHAddReconfMACdFlow : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	EDCHAddReconfMACdFlow(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 19982> MaxMAC_e_PDUContents;

typedef BitString<CONSTRAINED, 8, 8> Ms2_NonSchedTransmGrantHARQAlloc;

class Fdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

typedef _Null Tdd;

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class Non_ScheduledTransGrantInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Non_ScheduledTransGrantInfo(): Sequence(&theInfo) {}
};

typedef _Null ScheduledTransmissionGrantInfo;

class TransmissionGrantType : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	TransmissionGrantType(): Choices(&theInfo) {}
};

class EDCHAddReconfMACdFlowr7 : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	EDCHAddReconfMACdFlowr7(): Sequence(&theInfo) {}
};

typedef SequenceOf<EDCHAddReconfMACdFlow, CONSTRAINED, 1, maxE_DCHMACdFlow> EDCHAddReconfMACdFlowList;

typedef SequenceOf<EDCHAddReconfMACdFlowr7, CONSTRAINED, 1, maxE_DCHMACdFlow> EDCHAddReconfMACdFlowListr7;

enum EDCHTTIValues {
	tti2 = 0,
	tti10 = 1,
};
typedef Enumerated<CONSTRAINED, 1> EDCHTTI;

typedef Integer<CONSTRAINED, 0, 15> GainFactor;

class Fdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

typedef _Null Tdd;

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 3> ReferenceTFCID;

class SignalledGainFactors : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	SignalledGainFactors(): Sequence(&theInfo) {}
};

class GainFactorInformation : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	GainFactorInformation(): Choices(&theInfo) {}
};

class Fdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

typedef _Null Tdd;

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class PowerOffsetInfoShort : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PowerOffsetInfoShort(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, -5, 10> PowerOffsetPpm;

class PowerOffsetInformation : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PowerOffsetInformation(): Sequence(&theInfo) {}
};

class TFCSubsetList : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	TFCSubsetList(): Sequence(&theInfo) {}
};

enum TransmissionTimeIntervalValues {
	tti10 = 0,
	tti20 = 1,
	tti40 = 2,
	tti80 = 3,
};
typedef Enumerated<CONSTRAINED, 3> TransmissionTimeInterval;

class TransportFormatSetLCR : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	TransportFormatSetLCR(): Choices(&theInfo) {}
};

class Dch_usch : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	Dch_usch(): Sequence(&theInfo) {}
};

enum harq_InfoValues {
	rv0 = 0,
	rvtable = 1,
};
typedef Enumerated<CONSTRAINED, 1> harq_Info;

class E_dch : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	E_dch(): Sequence(&theInfo) {}
};

class ULAddReconfTransChInformationr6 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULAddReconfTransChInformationr6(): Choices(&theInfo) {}
};

typedef SequenceOf<ULAddReconfTransChInformationr6, CONSTRAINED, 1, maxTrCH> ULAddReconfTransChInfoListr6;

class Dch_usch : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	Dch_usch(): Sequence(&theInfo) {}
};

class Fdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

typedef _Null Tdd;

class ModeSpecific : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecific(): Choices(&theInfo) {}
};

enum harq_InfoValues {
	rv0 = 0,
	rvtable = 1,
};
typedef Enumerated<CONSTRAINED, 1> harq_Info;

class E_dch : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	E_dch(): Sequence(&theInfo) {}
};

class ULAddReconfTransChInformationr7 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULAddReconfTransChInformationr7(): Choices(&theInfo) {}
};

typedef SequenceOf<ULAddReconfTransChInformationr7, CONSTRAINED, 1, maxTrCH> ULAddReconfTransChInfoListr7;

class Dch_usch : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	Dch_usch(): Sequence(&theInfo) {}
};

enum ul_MAC_HeaderTypeValues {
	mac_iis = 0,
};
typedef Enumerated<CONSTRAINED, 0> ul_MAC_HeaderType;

class Fdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

typedef _Null Tdd;

class ModeSpecific : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecific(): Choices(&theInfo) {}
};

enum harq_InfoValues {
	rv0 = 0,
	rvtable = 1,
};
typedef Enumerated<CONSTRAINED, 1> harq_Info;

class E_dch : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	E_dch(): Sequence(&theInfo) {}
};

class ULAddReconfTransChInformationr8 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULAddReconfTransChInformationr8(): Choices(&theInfo) {}
};

typedef SequenceOf<ULAddReconfTransChInformationr8, CONSTRAINED, 1, maxTrCH> ULAddReconfTransChInfoListr8;

class Fdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class ULCommonTransChInfor4 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	ULCommonTransChInfor4(): Sequence(&theInfo) {}
};

typedef SequenceOf<ULTransportChannelIdentity, CONSTRAINED, 1, maxTrCH> ULDeletedTransChInfoList;

class Dch_usch : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Dch_usch(): Sequence(&theInfo) {}
};

class ULTransportChannelIdentityr6 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULTransportChannelIdentityr6(): Choices(&theInfo) {}
};

typedef SequenceOf<ULTransportChannelIdentityr6, CONSTRAINED, 1, maxTrCH> ULDeletedTransChInfoListr6;

class USCHTransportChannelsInfo : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	USCHTransportChannelsInfo(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 4> ACKNACKrepetitionFactor;

typedef Integer<CONSTRAINED, 0, 7> ACToASCMapping;

typedef SequenceOf<ACToASCMapping, CONSTRAINED, maxASCmap, maxASCmap> ACToASCMappingTable;

typedef Integer<CONSTRAINED, 0, 15> AvailableSignatureStartIndex;

typedef Integer<CONSTRAINED, 0, 15> AvailableSignatureEndIndex;

typedef BitString<CONSTRAINED> AssignedSubChannelNumber;

class AccessServiceClassFDD : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	AccessServiceClassFDD(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED> ChannelisationCodeIndices;

typedef _Null Size1;

enum subchannelsValues {
	subch0 = 0,
	subch1 = 1,
};
typedef Enumerated<CONSTRAINED, 1> subchannels;

class Size2 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Size2(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED> Subchannels;

class Size4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Size4(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED> Subchannels;

class Size8 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Size8(): Sequence(&theInfo) {}
};

class SubchannelSize : Choice {
private:
	static const void *choicesInfo[4];
public:
	static const Info theInfo;
	SubchannelSize(): Choices(&theInfo) {}
};

class AccessServiceClassTDD : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	AccessServiceClassTDD(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED> ChannelisationCodeIndices;

typedef _Null Size1;

enum subchannelsValues {
	subch0 = 0,
	subch1 = 1,
};
typedef Enumerated<CONSTRAINED, 1> subchannels;

class Size2 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Size2(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED> Subchannels;

class Size4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Size4(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED> Subchannels;

class Size8 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Size8(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED> Subchannels;

class Size16 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Size16(): Sequence(&theInfo) {}
};

class SubchannelSize : Choice {
private:
	static const void *choicesInfo[5];
public:
	static const Info theInfo;
	SubchannelSize(): Choices(&theInfo) {}
};

class AccessServiceClassTDDr7 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	AccessServiceClassTDDr7(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED> AvailableSYNC_UlCodesIndics;

typedef _Null Size1;

enum subchannelsValues {
	subch0 = 0,
	subch1 = 1,
};
typedef Enumerated<CONSTRAINED, 1> subchannels;

class Size2 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Size2(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED> Subchannels;

class Size4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Size4(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED> Subchannels;

class Size8 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Size8(): Sequence(&theInfo) {}
};

class SubchannelSize : Choice {
private:
	static const void *choicesInfo[4];
public:
	static const Info theInfo;
	SubchannelSize(): Choices(&theInfo) {}
};

class AccessServiceClassTDDLCRr4 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	AccessServiceClassTDDLCRr4(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0 ,  255> ActivationTimeOffset;

class DynamicTFInformationCCCH : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DynamicTFInformationCCCH(): Sequence(&theInfo) {}
};

class AdditionalPRACHTFandTFCSCCCHIEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	AdditionalPRACHTFandTFCSCCCHIEs(): Sequence(&theInfo) {}
};

class AdditionalPRACHTFandTFCSCCCH : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	AdditionalPRACHTFandTFCSCCCH(): Sequence(&theInfo) {}
};

typedef SequenceOf<AdditionalPRACHTFandTFCSCCCH, CONSTRAINED, 1, maxPRACH> AdditionalPRACHTFandTFCSCCCHList;

typedef Boolean Sttd_Indicator;

enum AICHTransmissionTimingValues {
	e0 = 0,
	e1 = 1,
};
typedef Enumerated<CONSTRAINED, 1> AICHTransmissionTiming;

class AICHInfo : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	AICHInfo(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, -22, 5> AICHPowerOffset;

typedef Integer<CONSTRAINED, 0, 255> AllocationActivationTime;

typedef Integer<CONSTRAINED, 1, 256> AllocationDuration;

class AllocationPeriodInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	AllocationPeriodInfo(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 8> Alpha;

typedef Integer<CONSTRAINED, 0, 255> APAICHChannelisationCode;

typedef Integer<CONSTRAINED, 0, 79> APPreambleScramblingCode;

typedef Integer<CONSTRAINED, 0, 15> APSignature;

typedef Integer<CONSTRAINED, 0, 11> APSubchannel;

typedef SequenceOf<APSubchannel, CONSTRAINED, 1, maxPCPCH_APsubCh> AvailableAPSubchannelList;

class APSignatureVCAM : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	APSignatureVCAM(): Sequence(&theInfo) {}
};

class ASCSettingFDD : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ASCSettingFDD(): Sequence(&theInfo) {}
};

class ASCSettingTDD : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ASCSettingTDD(): Sequence(&theInfo) {}
};

class ASCSettingTDDr7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ASCSettingTDDr7(): Sequence(&theInfo) {}
};

class ASCSettingTDDLCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ASCSettingTDDLCRr4(): Sequence(&theInfo) {}
};

typedef SequenceOf<APSignatureVCAM, CONSTRAINED, 1, maxPCPCH_APsig> AvailableAPSignatureVCAMList;

typedef SequenceOf<APSignature, CONSTRAINED, 1, maxPCPCH_APsig> AvailableAPSignatureList;

enum MinimumSpreadingFactorValues {
	sf4 = 0,
	sf8 = 1,
	sf16 = 2,
	sf32 = 3,
	sf64 = 4,
	sf128 = 5,
	sf256 = 6,
};
typedef Enumerated<CONSTRAINED, 6> MinimumSpreadingFactor;

typedef Integer<CONSTRAINED, 1, 64> NFMax;

typedef Integer<CONSTRAINED, 1, 64> MaxAvailablePCPCHNumber;

class AvailableMinimumSFVCAM : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	AvailableMinimumSFVCAM(): Sequence(&theInfo) {}
};

typedef SequenceOf<AvailableMinimumSFVCAM, CONSTRAINED, 1, maxPCPCH_SF> AvailableMinimumSFListVCAM;

typedef BitString<CONSTRAINED> AvailableSignatures;

typedef BitString<CONSTRAINED> AvailableSubChannelNumbers;

enum BEACONPLEstValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> BEACONPLEst;

enum BurstTypeValues {
	type1 = 0,
	type2 = 1,
};
typedef Enumerated<CONSTRAINED, 1> BurstType;

typedef Integer<CONSTRAINED, -82, -3> DPCCHPowerOffset;

typedef Integer<CONSTRAINED, 0, 7> SRBdelay;

class Fdd : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 62> ULTargetSIR;

typedef _Null Broadcast_UL_OL_PC_info;

typedef Integer<CONSTRAINED, -110, -52> TDDULInterference;

class IndividualTSInterference : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	IndividualTSInterference(): Sequence(&theInfo) {}
};

typedef SequenceOf<IndividualTSInterference, CONSTRAINED, 1, maxTS> IndividualTSInterferenceList;

typedef Integer<CONSTRAINED, 6, 43> PrimaryCCPCHTXPower;

class IndividuallySignalled : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	IndividuallySignalled(): Sequence(&theInfo) {}
};

class Ul_OL_PC_Signalling : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Ul_OL_PC_Signalling(): Choices(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ULDPCHPowerControlInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULDPCHPowerControlInfo(): Choices(&theInfo) {}
};

class CCTrCHPowerControlInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CCTrCHPowerControlInfo(): Sequence(&theInfo) {}
};

class Fdd : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

typedef _Null Broadcast_UL_OL_PC_info;

class Tdd384 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Tdd384(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 3> TPCStepSizeTDD;

class Tdd128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd128(): Sequence(&theInfo) {}
};

class TddOption : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	TddOption(): Choices(&theInfo) {}
};

class IndividuallySignalled : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	IndividuallySignalled(): Sequence(&theInfo) {}
};

class Ul_OL_PC_Signalling : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Ul_OL_PC_Signalling(): Choices(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ULDPCHPowerControlInfor4 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULDPCHPowerControlInfor4(): Choices(&theInfo) {}
};

class CCTrCHPowerControlInfor4 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CCTrCHPowerControlInfor4(): Sequence(&theInfo) {}
};

class Fdd : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

typedef _Null Broadcast_UL_OL_PC_info;

class Tdd384 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Tdd384(): Sequence(&theInfo) {}
};

class Tdd128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd128(): Sequence(&theInfo) {}
};

class TddOption : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	TddOption(): Choices(&theInfo) {}
};

class IndividuallySignalled : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	IndividuallySignalled(): Sequence(&theInfo) {}
};

class Ul_OL_PC_Signalling : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Ul_OL_PC_Signalling(): Choices(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ULDPCHPowerControlInfor5 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULDPCHPowerControlInfor5(): Choices(&theInfo) {}
};

class CCTrCHPowerControlInfor5 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CCTrCHPowerControlInfor5(): Sequence(&theInfo) {}
};

class Fdd : Sequence {
private:
	static const void *itemsInfo[8];
	static bool itemsPres[8];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

typedef _Null Broadcast_UL_OL_PC_info;

class Tdd384 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Tdd384(): Sequence(&theInfo) {}
};

class Tdd768 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Tdd768(): Sequence(&theInfo) {}
};

class Tdd128 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Tdd128(): Sequence(&theInfo) {}
};

class TddOption : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	TddOption(): Choices(&theInfo) {}
};

class IndividuallySignalled : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	IndividuallySignalled(): Sequence(&theInfo) {}
};

class Ul_OL_PC_Signalling : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Ul_OL_PC_Signalling(): Choices(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ULDPCHPowerControlInfor7 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULDPCHPowerControlInfor7(): Choices(&theInfo) {}
};

class CCTrCHPowerControlInfor7 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CCTrCHPowerControlInfor7(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 11> CDAccessSlotSubchannel;

typedef SequenceOf<CDAccessSlotSubchannel, CONSTRAINED, 1, maxPCPCH_CDsubCh> CDAccessSlotSubchannelList;

typedef Integer<CONSTRAINED, 0, 255> CDCAICHChannelisationCode;

typedef Integer<CONSTRAINED, 0, 79> CDPreambleScramblingCode;

typedef Integer<CONSTRAINED, 0, 15> CDSignatureCode;

typedef SequenceOf<CDSignatureCode, CONSTRAINED, 1, maxPCPCH_CDsig> CDSignatureCodeList;

typedef Integer<CONSTRAINED, 0, 127> CellParametersID;

class CellAndChannelIdentity : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CellAndChannelIdentity(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 255> Cfntargetsfnframeoffset;

typedef _Null NotActive;

class ChannelAssignmentActive : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ChannelAssignmentActive(): Choices(&theInfo) {}
};

class ChannelReqParamsForUCSM : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ChannelReqParamsForUCSM(): Sequence(&theInfo) {}
};

enum ClosedLoopTimingAdjModeValues {
	slot1 = 0,
	slot2 = 1,
};
typedef Enumerated<CONSTRAINED, 1> ClosedLoopTimingAdjMode;

typedef Integer<CONSTRAINED, 0, 255> CodeNumberDSCH;

enum SFPDSCHValues {
	sfp4 = 0,
	sfp8 = 1,
	sfp16 = 2,
	sfp32 = 3,
	sfp64 = 4,
	sfp128 = 5,
	sfp256 = 6,
};
typedef Enumerated<CONSTRAINED, 6> SFPDSCH;

typedef Integer<CONSTRAINED, 1, 16> MultiCodeInfo;

class PDSCHCodeMap : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	PDSCHCodeMap(): Sequence(&theInfo) {}
};

typedef SequenceOf<PDSCHCodeMap, CONSTRAINED, 1, maxPDSCH_TFCIgroups> PDSCHCodeMapList;

class CodeRange : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CodeRange(): Sequence(&theInfo) {}
};

class CodeResourceInformationTDD128 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CodeResourceInformationTDD128(): Sequence(&theInfo) {}
};

enum CodeWordSetValues {
	longCWS = 0,
	mediumCWS = 1,
	shortCWS = 2,
	ssdtOff = 3,
};
typedef Enumerated<CONSTRAINED, 3> CodeWordSet;

typedef Integer<CONSTRAINED, 0, 9> S_offset;

typedef Integer<CONSTRAINED, 0, 255> F_dpch_ChannelisationCodeNumber;

class ERGCHInformationCommonEdch : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ERGCHInformationCommonEdch(): Sequence(&theInfo) {}
};

class EHICHInformationCommonEdch : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	EHICHInformationCommonEdch(): Sequence(&theInfo) {}
};

class ULDPCHCodeInfoForCommonEDCH : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULDPCHCodeInfoForCommonEDCH(): Sequence(&theInfo) {}
};

class CommonEDCHResourceInfoList : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	CommonEDCHResourceInfoList(): Sequence(&theInfo) {}
};

class CommonERNTIInfo : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	CommonERNTIInfo(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, -110, -70> ULInterference;

class Dummy : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	Dummy(): Sequence(&theInfo) {}
};

typedef _Null Tdd768;

typedef _Null Tdd384;

enum t_RUCCHValues {
	ms20 = 0,
	ms40 = 1,
	ms60 = 2,
	ms80 = 3,
	ms120 = 4,
	ms160 = 5,
	ms200 = 6,
	ms240 = 7,
	ms280 = 8,
	ms320 = 9,
	ms400 = 10,
	ms500 = 11,
	ms600 = 12,
	ms800 = 13,
	ms1000 = 14,
	ms2000 = 15,
};
typedef Enumerated<CONSTRAINED, 15> t_RUCCH;

typedef Integer<CONSTRAINED, 0, 7> N_RUCCH;

enum t_WAITValues {
	everyEDCHTTI = 0,
	ms40 = 1,
	ms80 = 2,
	ms160 = 3,
	ms320 = 4,
	ms640 = 5,
	ms1000 = 6,
	ms2000 = 7,
};
typedef Enumerated<CONSTRAINED, 7> t_WAIT;

enum t_SIValues {
	everyEDCHTTI = 0,
	ms20 = 1,
	ms40 = 2,
	ms60 = 3,
	ms80 = 4,
	ms160 = 5,
	ms200 = 6,
};
typedef Enumerated<CONSTRAINED, 6> t_SI;

typedef Integer<CONSTRAINED, 2, 5> ExtendedEstimationWindow;


enum PersistenceScalingFactorValues {
	psf0_9 = 0,
	psf0_8 = 1,
	psf0_7 = 2,
	psf0_6 = 3,
	psf0_5 = 4,
	psf0_4 = 5,
	psf0_3 = 6,
	psf0_2 = 7,
};
typedef Enumerated<CONSTRAINED, 7> PersistenceScalingFactor;

typedef SequenceOf<PersistenceScalingFactor, CONSTRAINED, 1, maxASCpersist> PersistenceScalingFactorList;

typedef Integer<CONSTRAINED, 0, 62> PrxUpPCHdes;

typedef Integer<CONSTRAINED, 0, 3> PowerRampStep;

enum max_SYNC_UL_TransmissionsValues {
	tr1 = 0,
	tr2 = 1,
	tr4 = 2,
	tr8 = 3,
};
typedef Enumerated<CONSTRAINED, 3> max_SYNC_UL_Transmissions;

typedef BitString<CONSTRAINED> SyncULCodesBitmap;

typedef Integer<CONSTRAINED, 1, 32> Mmax;

class SYNCULInfoForERUCCH : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	SYNCULInfoForERUCCH(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 6> TimeslotNumberPRACHLCRr4;

enum TDDPRACHCCodeLCRr4Values {
	cc4_1 = 0,
	cc4_2 = 1,
	cc4_3 = 2,
	cc4_4 = 3,
	cc8_1 = 4,
	cc8_2 = 5,
	cc8_3 = 6,
	cc8_4 = 7,
	cc8_5 = 8,
	cc8_6 = 9,
	cc8_7 = 10,
	cc8_8 = 11,
	cc16_1 = 12,
	cc16_2 = 13,
	cc16_3 = 14,
	cc16_4 = 15,
	cc16_5 = 16,
	cc16_6 = 17,
	cc16_7 = 18,
	cc16_8 = 19,
	cc16_9 = 20,
	cc16_10 = 21,
	cc16_11 = 22,
	cc16_12 = 23,
	cc16_13 = 24,
	cc16_14 = 25,
	cc16_15 = 26,
	cc16_16 = 27,
};
typedef Enumerated<CONSTRAINED, 27> TDDPRACHCCodeLCRr4;

typedef SequenceOf<TDDPRACHCCodeLCRr4, CONSTRAINED, 1, 2> PRACHChanCodesListLCR;

typedef _Null DefaultMidamble;

typedef _Null CommonMidamble;

typedef Integer<CONSTRAINED, 0, 15> MidambleShift;

class UeSpecificMidamble : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UeSpecificMidamble(): Sequence(&theInfo) {}
};

class MidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	MidambleAllocationMode(): Choices(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 8> MidambleConfiguration;

class MidambleShiftAndBurstTypeLCRr4 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeLCRr4(): Sequence(&theInfo) {}
};

enum TDDFPACHCCode16r4Values {
	cc16_1 = 0,
	cc16_2 = 1,
	cc16_3 = 2,
	cc16_4 = 3,
	cc16_5 = 4,
	cc16_6 = 5,
	cc16_7 = 6,
	cc16_8 = 7,
	cc16_9 = 8,
	cc16_10 = 9,
	cc16_11 = 10,
	cc16_12 = 11,
	cc16_13 = 12,
	cc16_14 = 13,
	cc16_15 = 14,
	cc16_16 = 15,
};
typedef Enumerated<CONSTRAINED, 15> TDDFPACHCCode16r4;

typedef Integer<CONSTRAINED, 1, 4> WiLCR;

class FPACHInfor4 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	FPACHInfor4(): Sequence(&theInfo) {}
};

class PRACHInformationLCR : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	PRACHInformationLCR(): Sequence(&theInfo) {}
};

typedef SequenceOf<PRACHInformationLCR, CONSTRAINED, 1, maxPRACH_FPACH> PRACHInformationLCRList;

class ERUCCHInfoTDD128 : Sequence {
private:
	static const void *itemsInfo[9];
	static bool itemsPres[9];
public:
	static const Info theInfo;
	ERUCCHInfoTDD128(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 10> Reference_Code_Rate;

typedef Integer<CONSTRAINED, -15, 16> Reference_Beta;

class ReferenceBetaQPSK : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ReferenceBetaQPSK(): Sequence(&theInfo) {}
};

typedef SequenceOf<ReferenceBetaQPSK, CONSTRAINED, 1, 8> Reference_Beta_QPSK_List;

typedef Integer<CONSTRAINED, 0, 10> Reference_Code_Rate;

typedef Integer<CONSTRAINED, -15, 16> Reference_Beta;

class ReferenceBeta16QAM : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ReferenceBeta16QAM(): Sequence(&theInfo) {}
};

typedef SequenceOf<ReferenceBeta16QAM, CONSTRAINED, 1, 8> Reference_Beta_16QAM_List;

class ETFCSInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ETFCSInfo(): Sequence(&theInfo) {}
};

enum snpl_ReportTypeValues {
	type1 = 0,
	type2 = 1,
};
typedef Enumerated<CONSTRAINED, 1> snpl_ReportType;

typedef Integer<CONSTRAINED, -112, -50> PrxBASEdes;

typedef Boolean BeaconPLEst;

typedef Integer<CONSTRAINED, 1, 255> Pebase_PowerControlGAP;

typedef Integer<CONSTRAINED, 1, 8> StepSize;

typedef Integer<CONSTRAINED, 1, 8> Frequency;

class ULSynchronisationParametersr4 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULSynchronisationParametersr4(): Sequence(&theInfo) {}
};

typedef _Null DefaultMidamble;

typedef Integer<CONSTRAINED, 0, 15> UeSpecificMidamble;

class MidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	MidambleAllocationMode(): Choices(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 8> MidambleConfiguration;

class EPUCHTSSlotsLCR : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	EPUCHTSSlotsLCR(): Sequence(&theInfo) {}
};

typedef SequenceOf<EPUCHTSSlotsLCR, CONSTRAINED, 1, maxTS_LCR_1> E_PUCH_TS_ConfigurationList;

typedef Integer<CONSTRAINED, 0, 63> Minimum_Allowed_Code_Rate;

typedef Integer<CONSTRAINED, 0, 63> Maximum_Allowed_Code_Rate;

typedef Integer<CONSTRAINED, 0, 15> MaximumNumOfRetransSchedInfo;

enum retransTimerForSchedInfoValues {
	ms10 = 0,
	ms15 = 1,
	ms20 = 2,
	ms25 = 3,
	ms30 = 4,
	ms35 = 5,
	ms40 = 6,
	ms45 = 7,
	ms50 = 8,
	ms55 = 9,
	ms60 = 10,
	ms65 = 11,
	ms70 = 12,
	ms75 = 13,
	ms80 = 14,
	ms85 = 15,
	ms90 = 16,
	ms95 = 17,
	ms100 = 18,
	ms110 = 19,
	ms120 = 20,
	ms140 = 21,
	ms160 = 22,
	ms200 = 23,
	ms240 = 24,
	ms280 = 25,
	ms320 = 26,
	ms400 = 27,
	ms480 = 28,
	ms560 = 29,
};
typedef Enumerated<CONSTRAINED, 29> retransTimerForSchedInfo;

typedef Integer<CONSTRAINED, 0, 6> Dummy;

class EPUCHInfoTDD128 : Sequence {
private:
	static const void *itemsInfo[13];
	static bool itemsPres[13];
public:
	static const Info theInfo;
	EPUCHInfoTDD128(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 4, 15> N_E_HICH;

typedef Integer<CONSTRAINED, 0, 3> Ei;

typedef _Null DefaultMidamble;

typedef Integer<CONSTRAINED, 0, 15> UeSpecificMidamble;

class MidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	MidambleAllocationMode(): Choices(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 8> MidambleConfiguration;

class EHICHInformationLCR : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	EHICHInformationLCR(): Sequence(&theInfo) {}
};

typedef SequenceOf<EHICHInformationLCR, CONSTRAINED, 1, maxNumE_HICH> EHICHInformationLCRList;

class EHICHInformationTDD128 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	EHICHInformationTDD128(): Sequence(&theInfo) {}
};

typedef Boolean Rdi_Indicator;

typedef _Null DefaultMidamble;

typedef _Null CommonMidamble;

typedef Integer<CONSTRAINED, 0, 15> UeSpecificMidamble;

class MidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	MidambleAllocationMode(): Choices(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 8> MidambleConfiguration;

class EAGCHIndividualLCR : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	EAGCHIndividualLCR(): Sequence(&theInfo) {}
};

typedef SequenceOf<EAGCHIndividualLCR, CONSTRAINED, 1, maxNumE_AGCH> EAGCHSetConfigLCR;

class EAGCHInformationTDD128 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	EAGCHInformationTDD128(): Sequence(&theInfo) {}
};

enum harq_InfoValues {
	rv0 = 0,
	rvtable = 1,
};
typedef Enumerated<CONSTRAINED, 1> harq_Info;

typedef Integer<CONSTRAINED, 0, 7> Harq_MaximumNumberOfRetransmissions;

enum harq_retransmission_timerValues {
	ms10 = 0,
	ms15 = 1,
	ms20 = 2,
	ms25 = 3,
	ms30 = 4,
	ms35 = 5,
	ms40 = 6,
	ms45 = 7,
	ms50 = 8,
	ms55 = 9,
	ms60 = 10,
	ms65 = 11,
	ms70 = 12,
	ms75 = 13,
	ms80 = 14,
	ms85 = 15,
	ms90 = 16,
	ms95 = 17,
	ms100 = 18,
	ms110 = 19,
	ms120 = 20,
	ms140 = 21,
	ms160 = 22,
};
typedef Enumerated<CONSTRAINED, 22> harq_retransmission_timer;

typedef Integer<CONSTRAINED, 0, 6> Harq_power_offset;

class Ccch_transmission_Info : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	Ccch_transmission_Info(): Sequence(&theInfo) {}
};

class Tdd128 : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	Tdd128(): Sequence(&theInfo) {}
};

class Tdd : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	Tdd(): Choices(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class CommonEDCHSystemInfo : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	CommonEDCHSystemInfo(): Sequence(&theInfo) {}
};

typedef Boolean E_ai_Indication;

typedef Integer<CONSTRAINED, 0, 15> PreambleScramblingCodeWordNumber;

typedef SequenceOf<ASCSettingFDD, CONSTRAINED, 1, maxASC> Fdd;

typedef SequenceOf<ASCSettingTDDr7, CONSTRAINED, 1, maxASC> Tdd;

class PRACHPartitioningr7 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PRACHPartitioningr7(): Choices(&theInfo) {}
};

typedef Integer<CONSTRAINED, -10, 50> PrimaryCPICHTXPower;

typedef Integer<CONSTRAINED, 1, 8> PowerRampStep;

typedef Integer<CONSTRAINED, 1, 64> PreambleRetransMax;

class PRACHPowerOffset : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PRACHPowerOffset(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 32> Mmax;

typedef Integer<CONSTRAINED, 0, 50> NB01;

class RACHTransmissionParameters : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RACHTransmissionParameters(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, -5, 10> PowerOffsetPp_e;

class PRACHPreambleForEnhancedUplink : Sequence {
private:
	static const void *itemsInfo[13];
	static bool itemsPres[13];
public:
	static const Info theInfo;
	PRACHPreambleForEnhancedUplink(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 37> InitialServingGrantValue;

enum harq_InfoValues {
	rv0 = 0,
	rvtable = 1,
};
typedef Enumerated<CONSTRAINED, 1> harq_Info;

class ULDPCHpowerControlInfoForCommonEDCH : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	ULDPCHpowerControlInfoForCommonEDCH(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 8> EDPCCHDPCCHPowerOffset;

enum HappyBitDelayConditionValues {
	ms2 = 0,
	ms10 = 1,
	ms20 = 2,
	ms50 = 3,
	ms100 = 4,
	ms200 = 5,
	ms500 = 6,
	ms1000 = 7,
};
typedef Enumerated<CONSTRAINED, 7> HappyBitDelayCondition;

typedef Integer<CONSTRAINED, 0, 127> E_TFCI_Boost;

typedef Integer<CONSTRAINED, 0, 6> Delta_T2TP;

class ETFCBoostInfor7 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ETFCBoostInfor7(): Sequence(&theInfo) {}
};

typedef Boolean EDPDCHPowerInterpolation;

class EDPCCHInfor7 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	EDPCCHInfor7(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 1> ETFCITableIndex;

typedef Integer<CONSTRAINED, 0, 127> Reference_E_TFCI;

typedef Integer<CONSTRAINED, 0, 31> Reference_E_TFCI_PO_r7;

class EDPDCHReferenceETFCIr7 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	EDPDCHReferenceETFCIr7(): Sequence(&theInfo) {}
};

typedef SequenceOf<EDPDCHReferenceETFCIr7, CONSTRAINED, 1, 8> EDPDCHReferenceETFCIListr7;

enum EDPDCHMaxChannelisationCodesValues {
	sf256 = 0,
	sf128 = 1,
	sf64 = 2,
	sf32 = 3,
	sf16 = 4,
	sf8 = 5,
	sf4 = 6,
	sf4x2 = 7,
	sf2x2 = 8,
	sf4x2_and_sf2x2 = 9,
};
typedef Enumerated<CONSTRAINED, 9> EDPDCHMaxChannelisationCodes;

typedef Integer<CONSTRAINED, 11, 25> EDPDCHPLNonMax;

enum EDPDCHPeriodicyOfSchedInfoValues {
	everyEDCHTTI = 0,
	ms4 = 1,
	ms10 = 2,
	ms20 = 3,
	ms50 = 4,
	ms100 = 5,
	ms200 = 6,
	ms500 = 7,
	ms1000 = 8,
};
typedef Enumerated<CONSTRAINED, 8> EDPDCHPeriodicyOfSchedInfo;

typedef Integer<CONSTRAINED, 0, 6> PowerOffsetForSchedInfo;

class EDPDCHSchedulingInfoConfiguration : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	EDPDCHSchedulingInfoConfiguration(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 37> ThreeIndexStepThreshold;

typedef Integer<CONSTRAINED, 0, 37> TwoIndexStepThreshold;

class EDPDCHInfor8 : Sequence {
private:
	static const void *itemsInfo[9];
	static bool itemsPres[9];
public:
	static const Info theInfo;
	EDPDCHInfor8(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 10> Dl_FDPCH_TPCcommandErrorRate;

typedef Integer<CONSTRAINED, 0, 15> Additional_E_DCH_TransmitBackoff;

enum max_CCCH_ResourceAllocationValues {
	tti8 = 0,
	tti12 = 1,
	tti16 = 2,
	tti20 = 3,
	tti24 = 4,
	tti32 = 5,
	tti40 = 6,
	tti80 = 7,
};
typedef Enumerated<CONSTRAINED, 7> max_CCCH_ResourceAllocation;

typedef Integer<CONSTRAINED, 8, 24> Max_PeriodForCollisionResolution;

enum e_dch_TransmitContinuationOffsetValues {
	tti0 = 0,
	tti4 = 1,
	tti8 = 2,
	tti16 = 3,
	tti24 = 4,
	tti40 = 5,
	tti80 = 6,
	infinity = 7,
};
typedef Enumerated<CONSTRAINED, 7> e_dch_TransmitContinuationOffset;

typedef Boolean Ack_nack_support_on_HS_DPCCH;

typedef SequenceOf<CommonEDCHResourceInfoList, CONSTRAINED, 1, maxEDCHs> Common_E_DCH_ResourceInfoList;

class CommonEDCHSystemInfoFDD : Sequence {
private:
	static const void *itemsInfo[18];
	static bool itemsPres[18];
public:
	static const Info theInfo;
	CommonEDCHSystemInfoFDD(): Sequence(&theInfo) {}
};

class CommonTimeslotInfoMBMS : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	CommonTimeslotInfoMBMS(): Sequence(&theInfo) {}
};

typedef _Null RepetitionPeriod1;

typedef _Null Length;

typedef Integer<CONSTRAINED, 0, 1> Offset;

class RepetitionPeriod2 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RepetitionPeriod2(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 3> Length;

typedef Integer<CONSTRAINED, 0, 3> Offset;

class RepetitionPeriod4 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RepetitionPeriod4(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 7> Length;

typedef Integer<CONSTRAINED, 0, 7> Offset;

class RepetitionPeriod8 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RepetitionPeriod8(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 15> Length;

typedef Integer<CONSTRAINED, 0, 15> Offset;

class RepetitionPeriod16 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RepetitionPeriod16(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 31> Length;

typedef Integer<CONSTRAINED, 0, 31> Offset;

class RepetitionPeriod32 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RepetitionPeriod32(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 63> Length;

typedef Integer<CONSTRAINED, 0, 63> Offset;

class RepetitionPeriod64 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RepetitionPeriod64(): Sequence(&theInfo) {}
};

class RepetitionPeriodLengthAndOffset : Choice {
private:
	static const void *choicesInfo[7];
public:
	static const Info theInfo;
	RepetitionPeriodLengthAndOffset(): Choices(&theInfo) {}
};

class CommonTimeslotInfoSCCPCH : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CommonTimeslotInfoSCCPCH(): Sequence(&theInfo) {}
};

enum ControlChannelDRXCycleTDD128Values {
	sub_frames_1 = 0,
	sub_frames_2 = 1,
	sub_frames_4 = 2,
	sub_frames_8 = 3,
	sub_frames_16 = 4,
	sub_frames_32 = 5,
	sub_frames_64 = 6,
	spare1 = 7,
};
typedef Enumerated<CONSTRAINED, 7> ControlChannelDRXCycleTDD128;

enum EnablingDelayTDD128Values {
	radio_frames_0 = 0,
	radio_frames_1 = 1,
	radio_frames_2 = 2,
	radio_frames_4 = 3,
	radio_frames_8 = 4,
	radio_frames_16 = 5,
	radio_frames_32 = 6,
	radio_frames_64 = 7,
	radio_frames_128 = 8,
	spare7 = 9,
	spare6 = 10,
	spare5 = 11,
	spare4 = 12,
	spare3 = 13,
	spare2 = 14,
	infinity = 15,
};
typedef Enumerated<CONSTRAINED, 15> EnablingDelayTDD128;

class Continue : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Continue(): Sequence(&theInfo) {}
};

enum HSSCCHDRXInactivityThresholdTDD128Values {
	sub_frames_1 = 0,
	sub_frames_2 = 1,
	sub_frames_4 = 2,
	sub_frames_8 = 3,
	sub_frames_16 = 4,
	sub_frames_32 = 5,
	sub_frames_64 = 6,
	sub_frames_128 = 7,
	sub_frames_256 = 8,
	sub_frames_512 = 9,
	spare6 = 10,
	spare5 = 11,
	spare4 = 12,
	spare3 = 13,
	spare2 = 14,
	infinity = 15,
};
typedef Enumerated<CONSTRAINED, 15> HSSCCHDRXInactivityThresholdTDD128;

typedef Integer<CONSTRAINED, 0, 63> HS_SCCH_DRX_Offset;

class HSSCCHDRXInfoTDD128 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	HSSCCHDRXInfoTDD128(): Sequence(&theInfo) {}
};

typedef _Null SameAsHS_SCCH;

enum EAGCHInactivityMonitorThresholdTDD128Values {
	radio_frames_0 = 0,
	radio_frames_1 = 1,
	radio_frames_2 = 2,
	radio_frames_4 = 3,
	radio_frames_8 = 4,
	radio_frames_16 = 5,
	radio_frames_32 = 6,
	radio_frames_64 = 7,
	radio_frames_128 = 8,
	radio_frames_256 = 9,
	radio_frames_512 = 10,
	spare5 = 11,
	spare4 = 12,
	spare3 = 13,
	spare2 = 14,
	infinity = 15,
};
typedef Enumerated<CONSTRAINED, 15> EAGCHInactivityMonitorThresholdTDD128;

typedef Integer<CONSTRAINED, 0, 63> E_AGCH_DRX_Offset;

class E_AGCH_DRX_Parameters : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	E_AGCH_DRX_Parameters(): Sequence(&theInfo) {}
};

class E_AGCH_DRX_InfoType : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	E_AGCH_DRX_InfoType(): Choices(&theInfo) {}
};

class EAGCHDRXInfoTDD128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EAGCHDRXInfoTDD128(): Sequence(&theInfo) {}
};

class NewOperation : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	NewOperation(): Sequence(&theInfo) {}
};

class ControlChannelDrxOperation : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ControlChannelDrxOperation(): Choices(&theInfo) {}
};

class ControlChannelDRXInfoTDD128r8 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ControlChannelDRXInfoTDD128r8(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 8> DynamicPersistenceLevel;

typedef SequenceOf<DynamicPersistenceLevel, CONSTRAINED, 1, maxTF_CPCH> DynamicPersistenceLevelTFList;

class CPCHPersistenceLevels : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CPCHPersistenceLevels(): Sequence(&theInfo) {}
};

typedef SequenceOf<CPCHPersistenceLevels, CONSTRAINED, 1, maxCPCHsets> CPCHPersistenceLevelsList;

typedef Integer<CONSTRAINED, -10, 10> DeltaPpm;

enum ULDPCCHSlotFormatValues {
	slf0 = 0,
	slf1 = 1,
	slf2 = 2,
};
typedef Enumerated<CONSTRAINED, 2> ULDPCCHSlotFormat;

typedef Integer<CONSTRAINED, 1, 8> NStartMessage;

typedef Integer<CONSTRAINED, 0, 7> NEOT;

enum CPCHStatusIndicationModeValues {
	pa_mode = 0,
	pamsf_mode = 1,
};
typedef Enumerated<CONSTRAINED, 1> CPCHStatusIndicationMode;

typedef Integer<CONSTRAINED, 0, 79> Pcpch_UL_ScramblingCode;

typedef Integer<CONSTRAINED, 0, 511> Pcpch_DL_ChannelisationCode;

enum PCPLengthValues {
	as0 = 0,
	as8 = 1,
};
typedef Enumerated<CONSTRAINED, 1> PCPLength;

class UCSMInfo : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	UCSMInfo(): Sequence(&theInfo) {}
};

class PCPCHChannelInfo : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	PCPCHChannelInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<PCPCHChannelInfo, CONSTRAINED, 1, maxPCPCHs> PCPCHChannelInfoList;

class CPCHSetInfo : Sequence {
private:
	static const void *itemsInfo[16];
	static bool itemsPres[16];
public:
	static const Info theInfo;
	CPCHSetInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<CPCHSetInfo, CONSTRAINED, 1, maxCPCHsets> CPCHSetInfoList;

enum CQIDTXTimerValues {
	sub_frames_0 = 0,
	sub_frames_1 = 1,
	sub_frames_2 = 2,
	sub_frames_4 = 3,
	sub_frames_8 = 4,
	sub_frames_16 = 5,
	sub_frames_32 = 6,
	sub_frames_64 = 7,
	sub_frames_128 = 8,
	sub_frames_256 = 9,
	sub_frames_512 = 10,
	sub_frames_Infinity = 11,
	spare4 = 12,
	spare3 = 13,
	spare2 = 14,
	spare1 = 15,
};
typedef Enumerated<CONSTRAINED, 15> CQIDTXTimer;

typedef Integer<CONSTRAINED, -10, 5> CSICHPowerOffset;

typedef Integer<CONSTRAINED, 0, 599> DefaultDPCHOffsetValueFDD;

typedef Integer<CONSTRAINED, 0, 7> DefaultDPCHOffsetValueTDD;

typedef Integer<CONSTRAINED, 0, 30> DeltaSIR;

typedef Integer<CONSTRAINED, 1, 4096> DurationTimeInfo;

class TimeInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TimeInfo(): Sequence(&theInfo) {}
};

typedef Boolean Tfci_Existence;

typedef _Null DefaultMidamble;

typedef _Null CommonMidamble;

class UeSpecificMidamble : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UeSpecificMidamble(): Sequence(&theInfo) {}
};

class MidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	MidambleAllocationMode(): Choices(&theInfo) {}
};

class Type1 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Type1(): Sequence(&theInfo) {}
};

enum MidambleConfigurationBurstType2Values {
	ms3 = 0,
	ms6 = 1,
};
typedef Enumerated<CONSTRAINED, 1> MidambleConfigurationBurstType2;

typedef _Null DefaultMidamble;

typedef _Null CommonMidamble;

typedef Integer<CONSTRAINED, 0, 5> MidambleShiftShort;

class UeSpecificMidamble : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UeSpecificMidamble(): Sequence(&theInfo) {}
};

class MidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	MidambleAllocationMode(): Choices(&theInfo) {}
};

class Type2 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Type2(): Sequence(&theInfo) {}
};

typedef _Null DefaultMidamble;

class UeSpecificMidamble : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UeSpecificMidamble(): Sequence(&theInfo) {}
};

class MidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	MidambleAllocationMode(): Choices(&theInfo) {}
};

class Type3 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Type3(): Sequence(&theInfo) {}
};

class BurstType : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	BurstType(): Choices(&theInfo) {}
};

class MidambleShiftAndBurstType : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MidambleShiftAndBurstType(): Sequence(&theInfo) {}
};

class IndividualTimeslotInfo : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	IndividualTimeslotInfo(): Sequence(&theInfo) {}
};

class Consecutive : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Consecutive(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED> Bitmap;

class CodesRepresentation : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CodesRepresentation(): Choices(&theInfo) {}
};

class DLTSChannelisationCodesShort : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLTSChannelisationCodesShort(): Sequence(&theInfo) {}
};

typedef _Null NoMore;

typedef Integer<CONSTRAINED, 1, maxTS_1> Consecutive;

class SameAsLast : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SameAsLast(): Sequence(&theInfo) {}
};

class NewParameters : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	NewParameters(): Sequence(&theInfo) {}
};

class Parameters : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Parameters(): Choices(&theInfo) {}
};

class DownlinkAdditionalTimeslots : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DownlinkAdditionalTimeslots(): Sequence(&theInfo) {}
};

typedef SequenceOf<DownlinkAdditionalTimeslots, CONSTRAINED, 1, maxTS_1> TimeslotList;

class AdditionalTimeslots : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	AdditionalTimeslots(): Choices(&theInfo) {}
};

class MoreTimeslots : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	MoreTimeslots(): Choices(&theInfo) {}
};

class DownlinkTimeslotsCodes : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DownlinkTimeslotsCodes(): Sequence(&theInfo) {}
};

typedef SequenceOf<TFCSIdentity, CONSTRAINED, 0, maxCCTrCH> ULCCTrChTPCList;

class DLCCTrCh : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	DLCCTrCh(): Sequence(&theInfo) {}
};

class Tdd384 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd384(): Sequence(&theInfo) {}
};

typedef Boolean Tfci_Existence;

enum modulationValues {
	mod_QPSK = 0,
	mod_8PSK = 1,
};
typedef Enumerated<CONSTRAINED, 1> modulation;

enum ss_TPC_SymbolsValues {
	zero = 0,
	one = 1,
	sixteenOverSF = 2,
};
typedef Enumerated<CONSTRAINED, 2> ss_TPC_Symbols;

typedef Integer<CONSTRAINED, 1, 15> AdditionalSS_TPC_Symbols;

class IndividualTimeslotInfoLCRr4 : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	IndividualTimeslotInfoLCRr4(): Sequence(&theInfo) {}
};

typedef _Null NoMore;

typedef Integer<CONSTRAINED, 1, maxTS_LCR_1> Consecutive;

class SameAsLast : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SameAsLast(): Sequence(&theInfo) {}
};

class NewParameters : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	NewParameters(): Sequence(&theInfo) {}
};

class Parameters : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Parameters(): Choices(&theInfo) {}
};

class DownlinkAdditionalTimeslotsLCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DownlinkAdditionalTimeslotsLCRr4(): Sequence(&theInfo) {}
};

typedef SequenceOf<DownlinkAdditionalTimeslotsLCRr4, CONSTRAINED, 1, maxTS_LCR_1> TimeslotList;

class AdditionalTimeslots : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	AdditionalTimeslots(): Choices(&theInfo) {}
};

class MoreTimeslots : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	MoreTimeslots(): Choices(&theInfo) {}
};

class DownlinkTimeslotsCodesLCRr4 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DownlinkTimeslotsCodesLCRr4(): Sequence(&theInfo) {}
};

class Tdd128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd128(): Sequence(&theInfo) {}
};

class TddOption : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	TddOption(): Choices(&theInfo) {}
};

class DLCCTrChr4 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	DLCCTrChr4(): Sequence(&theInfo) {}
};

typedef Boolean Tfci_Existence;

typedef _Null DefaultMidamble;

typedef _Null CommonMidamble;

class UeSpecificMidamble : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UeSpecificMidamble(): Sequence(&theInfo) {}
};

class MidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	MidambleAllocationMode(): Choices(&theInfo) {}
};

class Type1 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Type1(): Sequence(&theInfo) {}
};

typedef _Null DefaultMidamble;

typedef _Null CommonMidamble;

class UeSpecificMidamble : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UeSpecificMidamble(): Sequence(&theInfo) {}
};

class MidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	MidambleAllocationMode(): Choices(&theInfo) {}
};

class Type2 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Type2(): Sequence(&theInfo) {}
};

typedef _Null DefaultMidamble;

class UeSpecificMidamble : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UeSpecificMidamble(): Sequence(&theInfo) {}
};

class MidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	MidambleAllocationMode(): Choices(&theInfo) {}
};

class Type3 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Type3(): Sequence(&theInfo) {}
};

typedef _Null MbsfnBurstType4;

class BurstType : Choice {
private:
	static const void *choicesInfo[4];
public:
	static const Info theInfo;
	BurstType(): Choices(&theInfo) {}
};

class MidambleShiftAndBurstTyper7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTyper7(): Sequence(&theInfo) {}
};

class IndividualTimeslotInfor7 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	IndividualTimeslotInfor7(): Sequence(&theInfo) {}
};

typedef _Null NoMore;

typedef Integer<CONSTRAINED, 1, maxTS_1> Consecutive;

class SameAsLast : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SameAsLast(): Sequence(&theInfo) {}
};

class NewParameters : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	NewParameters(): Sequence(&theInfo) {}
};

class Parameters : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Parameters(): Choices(&theInfo) {}
};

class DownlinkAdditionalTimeslotsr7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DownlinkAdditionalTimeslotsr7(): Sequence(&theInfo) {}
};

typedef SequenceOf<DownlinkAdditionalTimeslotsr7, CONSTRAINED, 1, maxTS_1> TimeslotList;

class AdditionalTimeslots : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	AdditionalTimeslots(): Choices(&theInfo) {}
};

class MoreTimeslots : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	MoreTimeslots(): Choices(&theInfo) {}
};

class DownlinkTimeslotsCodesr7 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DownlinkTimeslotsCodesr7(): Sequence(&theInfo) {}
};

class Tdd384 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd384(): Sequence(&theInfo) {}
};

typedef Boolean Tfci_Existence;

typedef _Null DefaultMidamble;

typedef _Null CommonMidamble;

class UeSpecificMidamble : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UeSpecificMidamble(): Sequence(&theInfo) {}
};

class MidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	MidambleAllocationMode(): Choices(&theInfo) {}
};

class Type1 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Type1(): Sequence(&theInfo) {}
};

enum MidambleConfigurationBurstType2VHCRValues {
	ms4 = 0,
	ms8 = 1,
};
typedef Enumerated<CONSTRAINED, 1> MidambleConfigurationBurstType2VHCR;

typedef _Null DefaultMidamble;

typedef _Null CommonMidamble;

typedef Integer<CONSTRAINED, 0, 7> MidambleShiftShortVHCR;

class UeSpecificMidamble : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UeSpecificMidamble(): Sequence(&theInfo) {}
};

class MidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	MidambleAllocationMode(): Choices(&theInfo) {}
};

class Type2 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Type2(): Sequence(&theInfo) {}
};

typedef _Null DefaultMidamble;

class UeSpecificMidamble : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UeSpecificMidamble(): Sequence(&theInfo) {}
};

class MidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	MidambleAllocationMode(): Choices(&theInfo) {}
};

class Type3 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Type3(): Sequence(&theInfo) {}
};

typedef _Null MbsfnBurstType4;

class BurstType : Choice {
private:
	static const void *choicesInfo[4];
public:
	static const Info theInfo;
	BurstType(): Choices(&theInfo) {}
};

class MidambleShiftAndBurstTypeVHCR : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeVHCR(): Sequence(&theInfo) {}
};

class IndividualTimeslotInfoVHCR : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	IndividualTimeslotInfoVHCR(): Sequence(&theInfo) {}
};

class Consecutive : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Consecutive(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED> Bitmap;

class CodesRepresentation : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CodesRepresentation(): Choices(&theInfo) {}
};

class DLTSChannelisationCodesShortVHCR : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLTSChannelisationCodesShortVHCR(): Sequence(&theInfo) {}
};

typedef _Null NoMore;

typedef Integer<CONSTRAINED, 1, maxTS_1> Consecutive;

class SameAsLast : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SameAsLast(): Sequence(&theInfo) {}
};

class NewParameters : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	NewParameters(): Sequence(&theInfo) {}
};

class Parameters : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Parameters(): Choices(&theInfo) {}
};

class DownlinkAdditionalTimeslotsVHCR : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DownlinkAdditionalTimeslotsVHCR(): Sequence(&theInfo) {}
};

typedef SequenceOf<DownlinkAdditionalTimeslotsVHCR, CONSTRAINED, 1, maxTS_1> TimeslotList;

class AdditionalTimeslots : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	AdditionalTimeslots(): Choices(&theInfo) {}
};

class MoreTimeslots : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	MoreTimeslots(): Choices(&theInfo) {}
};

class DownlinkTimeslotsCodesVHCR : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DownlinkTimeslotsCodesVHCR(): Sequence(&theInfo) {}
};

class Tdd768 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd768(): Sequence(&theInfo) {}
};

class Tdd128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd128(): Sequence(&theInfo) {}
};

class TddOption : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	TddOption(): Choices(&theInfo) {}
};

class DLCCTrChr7 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	DLCCTrChr7(): Sequence(&theInfo) {}
};

typedef SequenceOf<DLCCTrCh, CONSTRAINED, 1, maxCCTrCH> DLCCTrChList;

typedef SequenceOf<DLCCTrChr7, CONSTRAINED, 1, maxCCTrCH> DLCCTrChListr7;

typedef SequenceOf<DLCCTrChr4, CONSTRAINED, 1, maxCCTrCH> DLCCTrChListr4;

typedef SequenceOf<TFCSIdentityPlain, CONSTRAINED, 1, maxCCTrCH> DLCCTrChListToRemove;

typedef Integer<CONSTRAINED, 0, 3> Sf4;

typedef Integer<CONSTRAINED, 0, 7> Sf8;

typedef Integer<CONSTRAINED, 0, 15> Sf16;

typedef Integer<CONSTRAINED, 0, 31> Sf32;

typedef Integer<CONSTRAINED, 0, 63> Sf64;

typedef Integer<CONSTRAINED, 0, 127> Sf128;

typedef Integer<CONSTRAINED, 0, 255> Sf256;

typedef Integer<CONSTRAINED, 0, 511> Sf512;

class SF512AndCodeNumber : Choice {
private:
	static const void *choicesInfo[8];
public:
	static const Info theInfo;
	SF512AndCodeNumber(): Choices(&theInfo) {}
};

enum ScramblingCodeChangeValues {
	codeChange = 0,
	noCodeChange = 1,
};
typedef Enumerated<CONSTRAINED, 1> ScramblingCodeChange;

class DLChannelisationCode : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DLChannelisationCode(): Sequence(&theInfo) {}
};

typedef SequenceOf<DLChannelisationCode, CONSTRAINED, 1, maxDPCH_DLchan> DLChannelisationCodeList;

typedef _Null Maintain;

class Initialise : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Initialise(): Sequence(&theInfo) {}
};

class CfnHandling : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CfnHandling(): Choices(&theInfo) {}
};

enum DPCModeValues {
	singleTPC = 0,
	tpcTripletInSoft = 1,
};
typedef Enumerated<CONSTRAINED, 1> DPCMode;

class Fdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class DLDPCHPowerControlInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLDPCHPowerControlInfo(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 24> PowerOffsetPilotpdpdch;

class RestrictedTrCH : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RestrictedTrCH(): Sequence(&theInfo) {}
};

typedef SequenceOf<RestrictedTrCH, CONSTRAINED, 1, maxTrCH> RestrictedTrCHInfoList;

class Dlratematchingrestriction : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Dlratematchingrestriction(): Sequence(&theInfo) {}
};

typedef Boolean Tfci_Existence;

class Fdd : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class DLDPCHInfoCommon : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DLDPCHInfoCommon(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 255> TGCFN;

class Activate : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Activate(): Sequence(&theInfo) {}
};

typedef _Null Deactivate;

class Tgps_Status : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Tgps_Status(): Choices(&theInfo) {}
};

enum TGMPValues {
	tdd_Measurement = 0,
	fdd_Measurement = 1,
	gsm_CarrierRSSIMeasurement = 2,
	gsm_initialBSICIdentification = 3,
	gsmBSICReconfirmation = 4,
	multi_carrier = 5,
};
typedef Enumerated<CONSTRAINED, 5> TGMP;

typedef Integer<CONSTRAINED, 0, 511> TGPRC;

typedef Integer<CONSTRAINED, 0, 14> TGSN;

typedef Integer<CONSTRAINED, 1, 14> TGL;

typedef Integer<CONSTRAINED, 15, 270> TGD;

typedef Integer<CONSTRAINED, 1, 144> TGPL;

enum RPPValues {
	mode0 = 0,
	mode1 = 1,
};
typedef Enumerated<CONSTRAINED, 1> RPP;

enum ITPValues {
	mode0 = 0,
	mode1 = 1,
};
typedef Enumerated<CONSTRAINED, 1> ITP;

enum ULCompressedModeMethodValues {
	sf_2 = 0,
	higherLayerScheduling = 1,
};
typedef Enumerated<CONSTRAINED, 1> ULCompressedModeMethod;

enum DLCompressedModeMethodValues {
	dummy = 0,
	sf_2 = 1,
	higherLayerScheduling = 2,
};
typedef Enumerated<CONSTRAINED, 2> DLCompressedModeMethod;

class Ul_and_dl : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Ul_and_dl(): Sequence(&theInfo) {}
};

class ULDLMode : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	ULDLMode(): Choices(&theInfo) {}
};

enum DLFrameTypeValues {
	dl_FrameTypeA = 0,
	dl_FrameTypeB = 1,
};
typedef Enumerated<CONSTRAINED, 1> DLFrameType;

typedef Integer<CONSTRAINED, 1, 128> NidentifyAbort;

typedef Integer<CONSTRAINED, 1, 20> TreconfirmAbort;

class TGPSConfigurationParams : Sequence {
private:
	static const void *itemsInfo[18];
	static bool itemsPres[18];
public:
	static const Info theInfo;
	TGPSConfigurationParams(): Sequence(&theInfo) {}
};

class TGPSequence : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	TGPSequence(): Sequence(&theInfo) {}
};

typedef SequenceOf<TGPSequence, CONSTRAINED, 1, maxTGPS> TGPSequenceList;

class DPCHCompressedModeInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DPCHCompressedModeInfo(): Sequence(&theInfo) {}
};

enum TXDiversityModeValues {
	noDiversity = 0,
	sttd = 1,
	closedLoopMode1 = 2,
	dummy = 3,
};
typedef Enumerated<CONSTRAINED, 3> TXDiversityMode;

enum SFieldValues {
	e1bit = 0,
	e2bits = 1,
};
typedef Enumerated<CONSTRAINED, 1> SField;

class SSDTInformation : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SSDTInformation(): Sequence(&theInfo) {}
};

class Fdd : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class DLCommonInformation : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DLCommonInformation(): Sequence(&theInfo) {}
};

typedef _Null Maintain;

class Initialise : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Initialise(): Sequence(&theInfo) {}
};

class CfnHandling : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CfnHandling(): Choices(&theInfo) {}
};

typedef Boolean Tfci_Existence;

class Fdd : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class DLDPCHInfoCommonr4 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DLDPCHInfoCommonr4(): Sequence(&theInfo) {}
};

enum SSDTULValues {
	ul = 0,
	ul_AndDL = 1,
};
typedef Enumerated<CONSTRAINED, 1> SSDTUL;

class SSDTInformationr4 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	SSDTInformationr4(): Sequence(&theInfo) {}
};

class Fdd : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

typedef _Null Tdd384;

typedef Boolean Tstd_Indicator;

class Tdd128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd128(): Sequence(&theInfo) {}
};

class TddOption : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	TddOption(): Choices(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class DLCommonInformationr4 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DLCommonInformationr4(): Sequence(&theInfo) {}
};

class Fdd : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

typedef _Null Tdd384;

typedef Boolean Tstd_Indicator;

class Tdd128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd128(): Sequence(&theInfo) {}
};

class TddOption : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	TddOption(): Choices(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

enum mac_hsResetIndicatorValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> mac_hsResetIndicator;

class DLCommonInformationr5 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DLCommonInformationr5(): Sequence(&theInfo) {}
};

enum TimingMaintainedSynchIndValues {
	false = 0,
};
typedef Enumerated<CONSTRAINED, 0> TimingMaintainedSynchInd;

class Maintain : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Maintain(): Sequence(&theInfo) {}
};

typedef _Null Initialise;

class CfnHandling : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CfnHandling(): Choices(&theInfo) {}
};

typedef Boolean Tfci_Existence;

class Fdd : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class DLDPCHInfoCommonr6 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DLDPCHInfoCommonr6(): Sequence(&theInfo) {}
};

class Maintain : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Maintain(): Sequence(&theInfo) {}
};

typedef _Null Initialise;

class CfnHandling : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CfnHandling(): Choices(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 16> Dl_FDPCH_TPCcommandErrorRate;

class DLFDPCHInfoCommonr6 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DLFDPCHInfoCommonr6(): Sequence(&theInfo) {}
};

class Dl_dpchInfoCommon : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Dl_dpchInfoCommon(): Choices(&theInfo) {}
};

class Fdd : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

typedef _Null Tdd384;

typedef Boolean Tstd_Indicator;

class Tdd128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd128(): Sequence(&theInfo) {}
};

class TddOption : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	TddOption(): Choices(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

enum mac_hsResetIndicatorValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> mac_hsResetIndicator;

enum postVerificationPeriodValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> postVerificationPeriod;

class DLCommonInformationr6 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	DLCommonInformationr6(): Sequence(&theInfo) {}
};

class Dl_dpchInfoCommon : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Dl_dpchInfoCommon(): Choices(&theInfo) {}
};

class Fdd : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

typedef _Null Tdd384;

typedef _Null Tdd768;

typedef Boolean Tstd_Indicator;

class Tdd128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd128(): Sequence(&theInfo) {}
};

class TddOption : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	TddOption(): Choices(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

enum mac_hsResetIndicatorValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> mac_hsResetIndicator;

enum postVerificationPeriodValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> postVerificationPeriod;

class DLCommonInformationr7 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	DLCommonInformationr7(): Sequence(&theInfo) {}
};

class Dl_dpchInfoCommon : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Dl_dpchInfoCommon(): Choices(&theInfo) {}
};

class Activate : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Activate(): Sequence(&theInfo) {}
};

typedef _Null Deactivate;

class Tgps_Status : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Tgps_Status(): Choices(&theInfo) {}
};

enum TGMPr8Values {
	tdd_Measurement = 0,
	fdd_Measurement = 1,
	gsm_CarrierRSSIMeasurement = 2,
	gsm_initialBSICIdentification = 3,
	gsmBSICReconfirmation = 4,
	multi_carrier = 5,
	e_UTRA = 6,
	spare = 7,
};
typedef Enumerated<CONSTRAINED, 7> TGMPr8;

class TGPSConfigurationParamsr8 : Sequence {
private:
	static const void *itemsInfo[17];
	static bool itemsPres[17];
public:
	static const Info theInfo;
	TGPSConfigurationParamsr8(): Sequence(&theInfo) {}
};

class TGPSequencer8 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	TGPSequencer8(): Sequence(&theInfo) {}
};

typedef SequenceOf<TGPSequencer8, CONSTRAINED, 1, maxTGPS> TGPSequenceListr8;

class DPCHCompressedModeInfor8 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DPCHCompressedModeInfor8(): Sequence(&theInfo) {}
};

class Fdd : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

typedef _Null Tdd384;

typedef _Null Tdd768;

typedef Boolean Tstd_Indicator;

class Tdd128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd128(): Sequence(&theInfo) {}
};

class TddOption : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	TddOption(): Choices(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

enum mac_hsResetIndicatorValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> mac_hsResetIndicator;

enum postVerificationPeriodValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> postVerificationPeriod;

class DLCommonInformationr8 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	DLCommonInformationr8(): Sequence(&theInfo) {}
};

class DLDPCHInfoCommonPost : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLDPCHInfoCommonPost(): Sequence(&theInfo) {}
};

class DLCommonInformationPost : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLCommonInformationPost(): Sequence(&theInfo) {}
};

enum SSDTCellIdentityValues {
	ssdt_id_a = 0,
	ssdt_id_b = 1,
	ssdt_id_c = 2,
	ssdt_id_d = 3,
	ssdt_id_e = 4,
	ssdt_id_f = 5,
	ssdt_id_g = 6,
	ssdt_id_h = 7,
};
typedef Enumerated<CONSTRAINED, 7> SSDTCellIdentity;

class Fdd : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class DLDPCHInfoPerRL : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLDPCHInfoPerRL(): Choices(&theInfo) {}
};

class Fdd : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class DLDPCHInfoPerRLr4 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLDPCHInfoPerRLr4(): Choices(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 24> PowerOffsetTPCpdpdch;

class Fdd : Sequence {
private:
	static const void *itemsInfo[8];
	static bool itemsPres[8];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class DLDPCHInfoPerRLr5 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLDPCHInfoPerRLr5(): Choices(&theInfo) {}
};

class Fdd : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class DLDPCHInfoPerRLr6 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLDPCHInfoPerRLr6(): Choices(&theInfo) {}
};

class Fdd : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class DLDPCHInfoPerRLr7 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLDPCHInfoPerRLr7(): Choices(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 255> Dl_ChannelisationCode;

class DLFDPCHInfoPerRLr6 : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	DLFDPCHInfoPerRLr6(): Sequence(&theInfo) {}
};

class DLDPCHInfoPerRLPostFDD : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DLDPCHInfoPerRLPostFDD(): Sequence(&theInfo) {}
};

class DLDPCHInfoPerRLPostTDD : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLDPCHInfoPerRLPostTDD(): Sequence(&theInfo) {}
};

class DLDPCHInfoPerRLPostTDDLCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLDPCHInfoPerRLPostTDDLCRr4(): Sequence(&theInfo) {}
};

typedef SequenceOf<HSSCCHCodes, CONSTRAINED, 1, maxHSSCCHs> HS_SCCHChannelisationCodeInfo;

class Fdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, -7, 8> Nack_ack_power_offset;

typedef SequenceOf<HSSCCHTDD384r6, CONSTRAINED, 1, maxHSSCCHs> HS_SCCH_SetConfiguration;

class Tdd384 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	Tdd384(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, -7, 8> Nack_ack_power_offset;

typedef Integer<CONSTRAINED, -120, -58> Power_level_HSSICH;

enum tpc_step_sizeValues {
	s1 = 0,
	s2 = 1,
	s3 = 2,
	spare1 = 3,
};
typedef Enumerated<CONSTRAINED, 3> tpc_step_size;

typedef SequenceOf<HSSCCHTDD128r6, CONSTRAINED, 1, maxHSSCCHs> HS_SCCH_SetConfiguration;

class Tdd128 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	Tdd128(): Sequence(&theInfo) {}
};

class Tdd : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Tdd(): Choices(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class HSSCCHInfor6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HSSCCHInfor6(): Sequence(&theInfo) {}
};

class Tdd384 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd384(): Sequence(&theInfo) {}
};

class Tdd128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd128(): Sequence(&theInfo) {}
};

class Tdd : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Tdd(): Choices(&theInfo) {}
};

typedef _Null Fdd;

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class DLHSPDSCHInformationr6 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DLHSPDSCHInformationr6(): Sequence(&theInfo) {}
};

typedef _Null Tdd384;

typedef _Null Tdd768;

class Tdd128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd128(): Sequence(&theInfo) {}
};

class Tdd : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	Tdd(): Choices(&theInfo) {}
};

typedef _Null Fdd;

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class DLHSPDSCHInformationr8ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLHSPDSCHInformationr8ext(): Sequence(&theInfo) {}
};

typedef _Null Fdd;

typedef _Null Tdd384;

typedef _Null Tdd768;

enum hS_SCCH_tpc_step_sizeValues {
	s1 = 0,
	s2 = 1,
	s3 = 2,
	spare1 = 3,
};
typedef Enumerated<CONSTRAINED, 3> hS_SCCH_tpc_step_size;

class Tdd128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd128(): Sequence(&theInfo) {}
};

class Tdd : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	Tdd(): Choices(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class HSSCCHInfor8ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HSSCCHInfor8ext(): Sequence(&theInfo) {}
};

class DLHSPDSCHInformationr8ext2 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLHSPDSCHInformationr8ext2(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 511> DSCHRadioLinkIdentifier;

typedef SequenceOf<PrimaryCPICHInfo, CONSTRAINED, 1, maxRL> RLIdentifierList;

class PDSCHSHODCHInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PDSCHSHODCHInfo(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 1023> MaxTFCIField2Value;

class DSCHMapping : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	DSCHMapping(): Sequence(&theInfo) {}
};

typedef SequenceOf<DSCHMapping, CONSTRAINED, 1, maxPDSCH_TFCIgroups> DSCHMappingList;

class PDSCHCodeInfo : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PDSCHCodeInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<PDSCHCodeInfo, CONSTRAINED, 1, maxTFCI_2_Combs> PDSCHCodeInfoList;

class ReplacedPDSCHCodeInfo : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	ReplacedPDSCHCodeInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<ReplacedPDSCHCodeInfo, CONSTRAINED, 1, maxTFCI_2_Combs> ReplacedPDSCHCodeInfoList;

class SignallingMethod : Choice {
private:
	static const void *choicesInfo[4];
public:
	static const Info theInfo;
	SignallingMethod(): Choices(&theInfo) {}
};

class PDSCHCodeMapping : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PDSCHCodeMapping(): Sequence(&theInfo) {}
};

class Fdd : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

typedef Boolean Tx_DiversityIndicator;

class Fdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

class SyncCase1 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SyncCase1(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 6> TimeslotSync2;

class SyncCase2 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SyncCase2(): Sequence(&theInfo) {}
};

class SyncCase : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	SyncCase(): Choices(&theInfo) {}
};

typedef Boolean Sctd_Indicator;

class Tdd : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class PrimaryCCPCHInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PrimaryCCPCHInfo(): Choices(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

typedef Boolean Sttd_Indicator;

typedef Integer<CONSTRAINED, 0, 3> Sf4;

typedef Integer<CONSTRAINED, 0, 7> Sf8;

typedef Integer<CONSTRAINED, 0, 15> Sf16;

typedef Integer<CONSTRAINED, 0, 31> Sf32;

typedef Integer<CONSTRAINED, 0, 63> Sf64;

typedef Integer<CONSTRAINED, 0, 127> Sf128;

typedef Integer<CONSTRAINED, 0, 255> Sf256;

class SF256AndCodeNumber : Choice {
private:
	static const void *choicesInfo[7];
public:
	static const Info theInfo;
	SF256AndCodeNumber(): Choices(&theInfo) {}
};

typedef Boolean PilotSymbolExistence;

typedef Boolean Tfci_Existence;

typedef Integer<CONSTRAINED, 0, 149> TimingOffset;

class Fdd : Sequence {
private:
	static const void *itemsInfo[9];
	static bool itemsPres[9];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

enum SCCPCHChannelisationCodeValues {
	cc16_1 = 0,
	cc16_2 = 1,
	cc16_3 = 2,
	cc16_4 = 3,
	cc16_5 = 4,
	cc16_6 = 5,
	cc16_7 = 6,
	cc16_8 = 7,
	cc16_9 = 8,
	cc16_10 = 9,
	cc16_11 = 10,
	cc16_12 = 11,
	cc16_13 = 12,
	cc16_14 = 13,
	cc16_15 = 14,
	cc16_16 = 15,
};
typedef Enumerated<CONSTRAINED, 15> SCCPCHChannelisationCode;

typedef SequenceOf<SCCPCHChannelisationCode, CONSTRAINED, 1, 16> SCCPCHChannelisationCodeList;

class Tdd : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class SecondaryCCPCHInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SecondaryCCPCHInfo(): Sequence(&theInfo) {}
};

typedef Boolean Ctch_Indicator;

class FACHPCHInformation : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	FACHPCHInformation(): Sequence(&theInfo) {}
};

typedef SequenceOf<FACHPCHInformation, CONSTRAINED, 1, maxFACHPCH> FACHPCHInformationList;

typedef Integer<CONSTRAINED, 1, 256> PLMNValueTag;

typedef Integer<CONSTRAINED, 1, 4> CellValueTag;

typedef _Null SysInfoType7;

typedef _Null Dummy2;

typedef _Null Dummy3;

typedef _Null SysInfoType14;

class PredefinedConfigIdentityAndValueTag : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PredefinedConfigIdentityAndValueTag(): Sequence(&theInfo) {}
};

typedef _Null SysInfoType17;

typedef Integer<CONSTRAINED, 0, 15> SIBOccurIdentity;

typedef Integer<CONSTRAINED, 0, 15> SIBOccurValueTag;

class SIBOccurrenceIdentityAndValueTag : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SIBOccurrenceIdentityAndValueTag(): Sequence(&theInfo) {}
};

typedef _Null Spare4;

typedef _Null Spare3;

typedef _Null Spare2;

typedef _Null Spare1;

class SIBTypeAndTag : Choice {
private:
	static const void *choicesInfo[32];
public:
	static const Info theInfo;
	SIBTypeAndTag(): Choices(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 16> SegCount;

typedef Integer<CONSTRAINED, 0, 1> Rep4;

typedef Integer<CONSTRAINED, 0, 3> Rep8;

typedef Integer<CONSTRAINED, 0, 7> Rep16;

typedef Integer<CONSTRAINED, 0, 15> Rep32;

typedef Integer<CONSTRAINED, 0, 31> Rep64;

typedef Integer<CONSTRAINED, 0, 63> Rep128;

typedef Integer<CONSTRAINED, 0, 127> Rep256;

typedef Integer<CONSTRAINED, 0, 255> Rep512;

typedef Integer<CONSTRAINED, 0, 511> Rep1024;

typedef Integer<CONSTRAINED, 0, 1023> Rep2048;

typedef Integer<CONSTRAINED, 0, 2047> Rep4096;

class Sib_Pos : Choice {
private:
	static const void *choicesInfo[11];
public:
	static const Info theInfo;
	Sib_Pos(): Choices(&theInfo) {}
};

enum SibOFFValues {
	so2 = 0,
	so4 = 1,
	so6 = 2,
	so8 = 3,
	so10 = 4,
	so12 = 5,
	so14 = 6,
	so16 = 7,
	so18 = 8,
	so20 = 9,
	so22 = 10,
	so24 = 11,
	so26 = 12,
	so28 = 13,
	so30 = 14,
	so32 = 15,
};
typedef Enumerated<CONSTRAINED, 15> SibOFF;

typedef SequenceOf<SibOFF, CONSTRAINED, 1, 15> SibOFFList;

class Scheduling : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	Scheduling(): Sequence(&theInfo) {}
};

class SchedulingInformation : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SchedulingInformation(): Sequence(&theInfo) {}
};

class SchedulingInformationSIB : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SchedulingInformationSIB(): Sequence(&theInfo) {}
};

typedef SequenceOf<SchedulingInformationSIB, CONSTRAINED, 1, maxSIB_FACH> SIBReferenceListFACH;

class Fdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class SCCPCHInfoForFACH : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	SCCPCHInfoForFACH(): Sequence(&theInfo) {}
};

class DLInformationPerRL : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DLInformationPerRL(): Sequence(&theInfo) {}
};

class Fdd : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

typedef Boolean Tx_DiversityIndicator;

class Fdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

class SyncCase1 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SyncCase1(): Sequence(&theInfo) {}
};

class SyncCase2 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SyncCase2(): Sequence(&theInfo) {}
};

class SyncCase : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	SyncCase(): Choices(&theInfo) {}
};

class Tdd384_tdd768 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd384_tdd768(): Sequence(&theInfo) {}
};

typedef Boolean Tstd_Indicator;

class Tdd128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd128(): Sequence(&theInfo) {}
};

class TddOption : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	TddOption(): Choices(&theInfo) {}
};

typedef Boolean Sctd_Indicator;

class Tdd : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class PrimaryCCPCHInfor4 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PrimaryCCPCHInfor4(): Choices(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

typedef Boolean Sttd_Indicator;

typedef Boolean PilotSymbolExistence;

typedef Boolean Tfci_Existence;

class Fdd : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

class Tdd384 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd384(): Sequence(&theInfo) {}
};

class Tdd128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd128(): Sequence(&theInfo) {}
};

class TddOption : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	TddOption(): Choices(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class SecondaryCCPCHInfor4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SecondaryCCPCHInfor4(): Sequence(&theInfo) {}
};

class Fdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

typedef _Null Tdd;

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class SCCPCHInfoForFACHr4 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	SCCPCHInfoForFACHr4(): Sequence(&theInfo) {}
};

class DLInformationPerRLr4 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	DLInformationPerRLr4(): Sequence(&theInfo) {}
};

typedef Boolean ServingHSDSCH_RL_indicator;

class Fdd : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class DLInformationPerRLr5 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	DLInformationPerRLr5(): Sequence(&theInfo) {}
};

class Fdd : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class DLInformationPerRLr5bis : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	DLInformationPerRLr5bis(): Sequence(&theInfo) {}
};

typedef Boolean ServingHSDSCH_RL_indicator;

typedef Boolean ServingEDCH_RL_indicator;

class Fdd : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class Dl_dpchInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Dl_dpchInfo(): Choices(&theInfo) {}
};

typedef _Null ReleaseIndicator;

class E_HICH_Info : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	E_HICH_Info(): Choices(&theInfo) {}
};

typedef _Null ReleaseIndicator;

class E_RGCH_Info : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	E_RGCH_Info(): Choices(&theInfo) {}
};

class DLInformationPerRLr6 : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	DLInformationPerRLr6(): Sequence(&theInfo) {}
};

class DLInformationPerRLv6b0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLInformationPerRLv6b0ext(): Sequence(&theInfo) {}
};

typedef Boolean ServingHSDSCH_RL_indicator;

typedef Boolean ServingEDCH_RL_indicator;

class Fdd : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class Dl_dpchInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Dl_dpchInfo(): Choices(&theInfo) {}
};

class Fdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

typedef Boolean Long_Term_Grant_Indicator;

typedef Integer<CONSTRAINED, 1, 12> Length_of_TTRI_field;

typedef Integer<CONSTRAINED, 0, 14> TS_number;

enum MidambleConfigurationBurstType1Values {
	ms4 = 0,
	ms8 = 1,
	ms16 = 2,
};
typedef Enumerated<CONSTRAINED, 2> MidambleConfigurationBurstType1;

typedef _Null DefaultMidamble;

typedef _Null CommonMidamble;

class UeSpecificMidamble : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UeSpecificMidamble(): Sequence(&theInfo) {}
};

class MidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	MidambleAllocationMode(): Choices(&theInfo) {}
};

class Type1 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Type1(): Sequence(&theInfo) {}
};

typedef _Null DefaultMidamble;

typedef _Null CommonMidamble;

class UeSpecificMidamble : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UeSpecificMidamble(): Sequence(&theInfo) {}
};

class MidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	MidambleAllocationMode(): Choices(&theInfo) {}
};

class Type2 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Type2(): Sequence(&theInfo) {}
};

class BurstType : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	BurstType(): Choices(&theInfo) {}
};

class MidambleShiftAndBurstTypeEDCH : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeEDCH(): Sequence(&theInfo) {}
};

class EAGCHIndividual : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	EAGCHIndividual(): Sequence(&theInfo) {}
};

typedef SequenceOf<EAGCHIndividual, CONSTRAINED, 1, maxNumE_AGCH> EAGCHSetConfig;

class Tdd384 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	Tdd384(): Sequence(&theInfo) {}
};

typedef Boolean Long_Term_Grant_Indicator;

typedef Integer<CONSTRAINED, 1, 12> Length_of_TTRI_field;

typedef Integer<CONSTRAINED, 0, 14> TS_number;

class EAGCHIndividualVHCR : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	EAGCHIndividualVHCR(): Sequence(&theInfo) {}
};

typedef SequenceOf<EAGCHIndividualVHCR, CONSTRAINED, 1, maxNumE_AGCH> EAGCHSetConfigVHCR;

class Tdd768 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	Tdd768(): Sequence(&theInfo) {}
};

typedef Boolean Rdi_Indicator;

class Tdd128 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	Tdd128(): Sequence(&theInfo) {}
};

class Tdd : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	Tdd(): Choices(&theInfo) {}
};

class ModeSpecific : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecific(): Choices(&theInfo) {}
};

class EAGCHInformationr7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EAGCHInformationr7(): Sequence(&theInfo) {}
};

typedef _Null ReleaseIndicator;

class E_HICH_Info : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	E_HICH_Info(): Choices(&theInfo) {}
};

typedef _Null ReleaseIndicator;

class E_RGCH_Info : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	E_RGCH_Info(): Choices(&theInfo) {}
};

class Fdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 4, 44> N_E_HICH;

typedef Integer<CONSTRAINED, 0, 14> TS_Number;

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

enum burst_TypeValues {
	type1 = 0,
	type2 = 1,
};
typedef Enumerated<CONSTRAINED, 1> burst_Type;

enum midamble_Allocation_ModeValues {
	default = 0,
	common = 1,
};
typedef Enumerated<CONSTRAINED, 1> midamble_Allocation_Mode;

class EHICHInformationTDD384768 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	EHICHInformationTDD384768(): Sequence(&theInfo) {}
};

class Tdd384_tdd768 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd384_tdd768(): Sequence(&theInfo) {}
};

class Tdd128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd128(): Sequence(&theInfo) {}
};

class Tdd : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Tdd(): Choices(&theInfo) {}
};

class ModeSpecificInfo2 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo2(): Choices(&theInfo) {}
};

class DLInformationPerRLr7 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	DLInformationPerRLr7(): Sequence(&theInfo) {}
};

typedef Boolean ServingHSDSCH_RL_indicator;

typedef Boolean ServingEDCH_RL_indicator;

class Fdd : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class Dl_dpchInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Dl_dpchInfo(): Choices(&theInfo) {}
};

class Fdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

typedef Boolean Long_Term_Grant_Indicator;

typedef Integer<CONSTRAINED, 1, 12> Length_of_TTRI_field;

class Tdd384 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	Tdd384(): Sequence(&theInfo) {}
};

typedef Boolean Long_Term_Grant_Indicator;

typedef Integer<CONSTRAINED, 1, 12> Length_of_TTRI_field;

class Tdd768 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	Tdd768(): Sequence(&theInfo) {}
};

typedef Boolean Rdi_Indicator;

class Tdd128 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	Tdd128(): Sequence(&theInfo) {}
};

class Tdd : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	Tdd(): Choices(&theInfo) {}
};

class ModeSpecific : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecific(): Choices(&theInfo) {}
};

class EAGCHInformationr8 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EAGCHInformationr8(): Sequence(&theInfo) {}
};

typedef _Null ReleaseIndicator;

class E_HICH_Info : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	E_HICH_Info(): Choices(&theInfo) {}
};

typedef _Null ReleaseIndicator;

class E_RGCH_Info : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	E_RGCH_Info(): Choices(&theInfo) {}
};

class Fdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

class Tdd384_tdd768 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd384_tdd768(): Sequence(&theInfo) {}
};

class Tdd128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd128(): Sequence(&theInfo) {}
};

class Tdd : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Tdd(): Choices(&theInfo) {}
};

class ModeSpecificInfo2 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo2(): Choices(&theInfo) {}
};

class DLInformationPerRLr8 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	DLInformationPerRLr8(): Sequence(&theInfo) {}
};

typedef SequenceOf<DLInformationPerRL, CONSTRAINED, 1, maxRL> DLInformationPerRLList;

typedef SequenceOf<DLInformationPerRLr4, CONSTRAINED, 1, maxRL> DLInformationPerRLListr4;

typedef SequenceOf<DLInformationPerRLr5, CONSTRAINED, 1, maxRL> DLInformationPerRLListr5;

typedef SequenceOf<DLInformationPerRLr6, CONSTRAINED, 1, maxRL> DLInformationPerRLListr6;

typedef SequenceOf<DLInformationPerRLv6b0ext, CONSTRAINED, 1, maxRL> DLInformationPerRLListv6b0ext;

typedef SequenceOf<DLInformationPerRLr5bis, CONSTRAINED, 1, maxRL> DLInformationPerRLListr5bis;

typedef SequenceOf<DLInformationPerRLr7, CONSTRAINED, 1, maxRL> DLInformationPerRLListr7;

typedef SequenceOf<DLInformationPerRLr8, CONSTRAINED, 1, maxRL> DLInformationPerRLListr8;

class DLInformationPerRLPostFDD : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DLInformationPerRLPostFDD(): Sequence(&theInfo) {}
};

typedef SequenceOf<DLInformationPerRLPostFDD, CONSTRAINED, 1, maxRL> DLInformationPerRLListPostFDD;

class SyncCase1 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SyncCase1(): Sequence(&theInfo) {}
};

class SyncCase2 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SyncCase2(): Sequence(&theInfo) {}
};

class SyncCase : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	SyncCase(): Choices(&theInfo) {}
};

typedef Boolean Sctd_Indicator;

class PrimaryCCPCHInfoPost : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PrimaryCCPCHInfoPost(): Sequence(&theInfo) {}
};

class DLInformationPerRLPostTDD : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DLInformationPerRLPostTDD(): Sequence(&theInfo) {}
};

typedef Boolean Tstd_Indicator;

typedef Boolean Sctd_Indicator;

class PrimaryCCPCHInfoPostTDDLCRr4 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PrimaryCCPCHInfoPostTDDLCRr4(): Sequence(&theInfo) {}
};

class DLInformationPerRLPostTDDLCRr4 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DLInformationPerRLPostTDDLCRr4(): Sequence(&theInfo) {}
};

class DLPDSCHInformation : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DLPDSCHInformation(): Sequence(&theInfo) {}
};

typedef _Null Continue;

enum dl_64QAM_ConfiguredValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> dl_64QAM_Configured;

typedef SequenceOf<HSSCCHCodes, CONSTRAINED, 1, maxHSSCCHs> HS_SCCHChannelisationCodeInfo;

class NewConfiguration : Sequence {
private:
	static const void *itemsInfo[8];
	static bool itemsPres[8];
public:
	static const Info theInfo;
	NewConfiguration(): Sequence(&theInfo) {}
};

class DLSecondaryCellInfoFDD : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLSecondaryCellInfoFDD(): Choices(&theInfo) {}
};

enum differentTxModeFromServingHS_DSCHCellValues {
	different = 0,
};
typedef Enumerated<CONSTRAINED, 0> differentTxModeFromServingHS_DSCHCell;

class DLSecondaryCellInfoFDDv890ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLSecondaryCellInfoFDDv890ext(): Sequence(&theInfo) {}
};

typedef _Null Continue;

enum dl_64QAM_ConfiguredValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> dl_64QAM_Configured;

typedef SequenceOf<HSSCCHCodes, CONSTRAINED, 1, maxHSSCCHs> HS_SCCHChannelisationCodeInfo;

enum differentTxModeFromServingHS_DSCHCellValues {
	different = 0,
};
typedef Enumerated<CONSTRAINED, 0> differentTxModeFromServingHS_DSCHCell;

class NewConfiguration : Sequence {
private:
	static const void *itemsInfo[9];
	static bool itemsPres[9];
public:
	static const Info theInfo;
	NewConfiguration(): Sequence(&theInfo) {}
};

class ConfigurationInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ConfigurationInfo(): Choices(&theInfo) {}
};

typedef _Null Continue;

enum MIMONMRatioValues {
	mnm1_2 = 0,
	mnm2_3 = 1,
	mnm3_4 = 2,
	mnm4_5 = 3,
	mnm5_6 = 4,
	mnm6_7 = 5,
	mnm7_8 = 6,
	mnm8_9 = 7,
	mnm9_10 = 8,
	mnm1_1 = 9,
};
typedef Enumerated<CONSTRAINED, 9> MIMONMRatio;

typedef _Null NormalPattern;

typedef Integer<CONSTRAINED, -6, 0> SCPICHPowerOffsetMIMO;

class DiversityPattern : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DiversityPattern(): Sequence(&theInfo) {}
};

class SecondCPICH_Pattern : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	SecondCPICH_Pattern(): Choices(&theInfo) {}
};

class MIMOPilotConfigurationr9 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MIMOPilotConfigurationr9(): Sequence(&theInfo) {}
};

class NewConfiguration : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	NewConfiguration(): Sequence(&theInfo) {}
};

class SecondaryCellMIMOparametersFDD : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	SecondaryCellMIMOparametersFDD(): Choices(&theInfo) {}
};

class DLSecondaryCellInfoFDDr9 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DLSecondaryCellInfoFDDr9(): Sequence(&theInfo) {}
};

class DLTPCPowerOffsetPerRL : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLTPCPowerOffsetPerRL(): Sequence(&theInfo) {}
};

typedef SequenceOf<DLTPCPowerOffsetPerRL, CONSTRAINED, 1, maxRL> DLTPCPowerOffsetPerRLList;

typedef Integer<CONSTRAINED, 1, 15> FirstChannelisationCode;

typedef Integer<CONSTRAINED, 1, 15> LastChannelisationCode;

class DLChannelCodesMBSFNIMB384 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DLChannelCodesMBSFNIMB384(): Sequence(&theInfo) {}
};

enum mac_es_e_resetIndicatorValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> mac_es_e_resetIndicator;

typedef BitString<CONSTRAINED, 8, 8> Ms2_SchedTransmGrantHARQAlloc;

typedef Integer<CONSTRAINED, 0, 38> Value;

enum primary_Secondary_GrantSelectorValues {
	primary = 0,
	secondary = 1,
};
typedef Enumerated<CONSTRAINED, 1> primary_Secondary_GrantSelector;

class ServingGrant : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ServingGrant(): Sequence(&theInfo) {}
};

class EDPDCHSchedulingTransmConfiguration : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	EDPDCHSchedulingTransmConfiguration(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 1> Beta_Ed_Gain_E_AGCH_Table_Selection;

class UL16QAMSettings : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UL16QAMSettings(): Sequence(&theInfo) {}
};

class Fdd : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, -35, 10> E_RUCCH_ConstantValue;

enum t_RUCCHValues {
	ms40 = 0,
	ms80 = 1,
	ms120 = 2,
	ms160 = 3,
	ms200 = 4,
	ms240 = 5,
	ms280 = 6,
	ms320 = 7,
};
typedef Enumerated<CONSTRAINED, 7> t_RUCCH;

typedef Integer<CONSTRAINED, 0, 14> E_RUCCH_TS_Number;

enum e_RUCCH_MidambleValues {
	direct = 0,
	direct_Inverted = 1,
};
typedef Enumerated<CONSTRAINED, 1> e_RUCCH_Midamble;

enum t_advValues {
	sec1 = 0,
	sec2 = 1,
	sec4 = 2,
	sec8 = 3,
	sec16 = 4,
	sec32 = 5,
	sec128 = 6,
	infinity = 7,
};
typedef Enumerated<CONSTRAINED, 7> t_adv;

enum t_SCHEDValues {
	zero = 0,
	ms40 = 1,
	ms80 = 2,
	ms160 = 3,
	ms250 = 4,
	sec1 = 5,
	sec2 = 6,
	sec4 = 7,
};
typedef Enumerated<CONSTRAINED, 7> t_SCHED;

enum SF16CodesValues {
	cc16_1 = 0,
	cc16_2 = 1,
	cc16_3 = 2,
	cc16_4 = 3,
	cc16_5 = 4,
	cc16_6 = 5,
	cc16_7 = 6,
	cc16_8 = 7,
};
typedef Enumerated<CONSTRAINED, 7> SF16Codes;

typedef SequenceOf<SF16Codes, CONSTRAINED, 1, 8> SF16;

enum SF8CodesValues {
	cc8_1 = 0,
	cc8_2 = 1,
	cc8_3 = 2,
	cc8_4 = 3,
	cc8_5 = 4,
	cc8_6 = 5,
	cc8_7 = 6,
	cc8_8 = 7,
};
typedef Enumerated<CONSTRAINED, 7> SF8Codes;

typedef SequenceOf<SF8Codes, CONSTRAINED, 1, 8> SF8;

class Tdd384 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Tdd384(): Choices(&theInfo) {}
};

enum SF32CodesValues {
	cc32_1 = 0,
	cc32_2 = 1,
	cc32_3 = 2,
	cc32_4 = 3,
	cc32_5 = 4,
	cc32_6 = 5,
	cc32_7 = 6,
	cc32_8 = 7,
	cc32_9 = 8,
	cc32_10 = 9,
	cc32_11 = 10,
	cc32_12 = 11,
	cc32_13 = 12,
	cc32_14 = 13,
	cc32_15 = 14,
	cc32_16 = 15,
};
typedef Enumerated<CONSTRAINED, 15> SF32Codes;

typedef SequenceOf<SF32Codes, CONSTRAINED, 1, 16> SF32;

enum SF16Codes2Values {
	cc16_1 = 0,
	cc16_2 = 1,
	cc16_3 = 2,
	cc16_4 = 3,
	cc16_5 = 4,
	cc16_6 = 5,
	cc16_7 = 6,
	cc16_8 = 7,
	cc16_9 = 8,
	cc16_10 = 9,
	cc16_11 = 10,
	cc16_12 = 11,
	cc16_13 = 12,
	cc16_14 = 13,
	cc16_15 = 14,
	cc16_16 = 15,
};
typedef Enumerated<CONSTRAINED, 15> SF16Codes2;

typedef SequenceOf<SF16Codes2, CONSTRAINED, 1, 16> SF816;

class Tdd768 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Tdd768(): Choices(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class Tdd384_tdd768 : Sequence {
private:
	static const void *itemsInfo[8];
	static bool itemsPres[8];
public:
	static const Info theInfo;
	Tdd384_tdd768(): Sequence(&theInfo) {}
};

enum t_RUCCHValues {
	ms20 = 0,
	ms40 = 1,
	ms60 = 2,
	ms80 = 3,
	ms120 = 4,
	ms160 = 5,
	ms200 = 6,
	ms240 = 7,
	ms280 = 8,
	ms320 = 9,
	ms400 = 10,
	ms500 = 11,
	ms600 = 12,
	ms800 = 13,
	ms1000 = 14,
	ms2000 = 15,
};
typedef Enumerated<CONSTRAINED, 15> t_RUCCH;

typedef Integer<CONSTRAINED, 0, 7> N_RUCCH;

enum t_WAITValues {
	everyEDCHTTI = 0,
	ms40 = 1,
	ms80 = 2,
	ms160 = 3,
	ms320 = 4,
	ms640 = 5,
	ms1000 = 6,
	ms2000 = 7,
};
typedef Enumerated<CONSTRAINED, 7> t_WAIT;

enum t_SIValues {
	everyEDCHTTI = 0,
	ms20 = 1,
	ms40 = 2,
	ms60 = 3,
	ms80 = 4,
	ms160 = 5,
	ms200 = 6,
};
typedef Enumerated<CONSTRAINED, 6> t_SI;

typedef Integer<CONSTRAINED, 2, 5> ExtendedEstimationWindow;

class Tdd128 : Sequence {
private:
	static const void *itemsInfo[9];
	static bool itemsPres[9];
public:
	static const Info theInfo;
	Tdd128(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class ERUCCHInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ERUCCHInfo(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 12> NoSlotsForTFCIandTPC;

typedef Integer<CONSTRAINED, -35, 10> E_PUCH_ContantValue;

typedef Integer<CONSTRAINED, 0, 14> Ts_Number;

class EPUCHTSSlots : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	EPUCHTSSlots(): Sequence(&theInfo) {}
};

typedef SequenceOf<EPUCHTSSlots, CONSTRAINED, 1, maxTS_2> E_PUCH_TS_ConfigurationList;

typedef Boolean E_PUCH_CodeHopping;

typedef Integer<CONSTRAINED, 1, 3> E_PUCH_TPC_Step_Size;

typedef Integer<CONSTRAINED, 0, 63> Minimum_Allowed_Code_Rate;

typedef Integer<CONSTRAINED, 0, 63> Maximum_Allowed_Code_Rate;

class Tdd348_tdd768 : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	Tdd348_tdd768(): Sequence(&theInfo) {}
};

enum snpl_ReportTypeValues {
	type1 = 0,
	type2 = 1,
};
typedef Enumerated<CONSTRAINED, 1> snpl_ReportType;

typedef Integer<CONSTRAINED, -112, -50> PrxBASEdes;

typedef Boolean BeaconPLEst;

typedef SequenceOf<EPUCHTSSlotsLCR, CONSTRAINED, 1, maxTS_LCR_1> E_PUCH_TS_ConfigurationList;

typedef Integer<CONSTRAINED, 0, 63> Minimum_Allowed_Code_Rate;

typedef Integer<CONSTRAINED, 0, 63> Maximum_Allowed_Code_Rate;

typedef Integer<CONSTRAINED, 0, 15> MaximumNumOfRetransSchedInfo;

enum retransTimerForSchedInfoValues {
	ms10 = 0,
	ms15 = 1,
	ms20 = 2,
	ms25 = 3,
	ms30 = 4,
	ms35 = 5,
	ms40 = 6,
	ms45 = 7,
	ms50 = 8,
	ms55 = 9,
	ms60 = 10,
	ms65 = 11,
	ms70 = 12,
	ms75 = 13,
	ms80 = 14,
	ms85 = 15,
	ms90 = 16,
	ms95 = 17,
	ms100 = 18,
	ms110 = 19,
	ms120 = 20,
	ms140 = 21,
	ms160 = 22,
	ms200 = 23,
	ms240 = 24,
	ms280 = 25,
	ms320 = 26,
	ms400 = 27,
	ms480 = 28,
	ms560 = 29,
};
typedef Enumerated<CONSTRAINED, 29> retransTimerForSchedInfo;

class Tdd128 : Sequence {
private:
	static const void *itemsInfo[11];
	static bool itemsPres[11];
public:
	static const Info theInfo;
	Tdd128(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 6> PowerOffsetForSchedInfo;

class EPUCHInfo : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	EPUCHInfo(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED, 13, 13> TimeslotResourceRelatedInfo;

typedef Integer<CONSTRAINED, 1, 32> PowerResourceRelatedInfo;

enum ULTSChannelisationCodeValues {
	cc1_1 = 0,
	cc2_1 = 1,
	cc2_2 = 2,
	cc4_1 = 3,
	cc4_2 = 4,
	cc4_3 = 5,
	cc4_4 = 6,
	cc8_1 = 7,
	cc8_2 = 8,
	cc8_3 = 9,
	cc8_4 = 10,
	cc8_5 = 11,
	cc8_6 = 12,
	cc8_7 = 13,
	cc8_8 = 14,
	cc16_1 = 15,
	cc16_2 = 16,
	cc16_3 = 17,
	cc16_4 = 18,
	cc16_5 = 19,
	cc16_6 = 20,
	cc16_7 = 21,
	cc16_8 = 22,
	cc16_9 = 23,
	cc16_10 = 24,
	cc16_11 = 25,
	cc16_12 = 26,
	cc16_13 = 27,
	cc16_14 = 28,
	cc16_15 = 29,
	cc16_16 = 30,
};
typedef Enumerated<CONSTRAINED, 30> ULTSChannelisationCode;

class Tdd384_768 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	Tdd384_768(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 8> N_E_UCCH;

typedef Integer<CONSTRAINED, 4, 15> N_E_HICH;

typedef BitString<CONSTRAINED, 5, 5> TimeslotResourceRelatedInfo;

typedef Integer<CONSTRAINED, 1, 32> PowerResourceRelatedInfo;

typedef Integer<CONSTRAINED, 0, 1> SfnNum;

typedef _Null DefaultMidamble;

typedef Integer<CONSTRAINED, 0, 15> UeSpecificMidamble;

class MidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	MidambleAllocationMode(): Choices(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 8> MidambleConfiguration;

typedef Integer<CONSTRAINED, 0, 19> SignatureSequenceGroupIndex;

class E_HICH_Info : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	E_HICH_Info(): Sequence(&theInfo) {}
};

class Tdd128 : Sequence {
private:
	static const void *itemsInfo[9];
	static bool itemsPres[9];
public:
	static const Info theInfo;
	Tdd128(): Sequence(&theInfo) {}
};

class NonScheduledTransGrantInfoTDD : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	NonScheduledTransGrantInfoTDD(): Choices(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class ULEDCHInformationr8 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULEDCHInformationr8(): Sequence(&theInfo) {}
};

class DLULHSPAInformationr8 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	DLULHSPAInformationr8(): Sequence(&theInfo) {}
};

enum mac_es_e_resetIndicatorValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> mac_es_e_resetIndicator;

class Fdd : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED, 13, 13> TimeslotResourceRelatedInfo;

typedef Integer<CONSTRAINED, 1, 32> PowerResourceRelatedInfo;

class Tdd384_768 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	Tdd384_768(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 8> N_E_UCCH;

typedef Integer<CONSTRAINED, 4, 15> N_E_HICH;

typedef BitString<CONSTRAINED, 5, 5> TimeslotResourceRelatedInfo;

typedef Integer<CONSTRAINED, 1, 32> PowerResourceRelatedInfo;

typedef Integer<CONSTRAINED, 0, 1> SfnNum;

typedef _Null DefaultMidamble;

typedef Integer<CONSTRAINED, 0, 15> UeSpecificMidamble;

class MidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	MidambleAllocationMode(): Choices(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 8> MidambleConfiguration;

typedef Integer<CONSTRAINED, 0, 19> SignatureSequenceGroupIndex;

class E_HICH_Info : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	E_HICH_Info(): Sequence(&theInfo) {}
};

enum t_SI_nstValues {
	everyEDCHTTI = 0,
	ms20 = 1,
	ms40 = 2,
	ms60 = 3,
	ms80 = 4,
	ms160 = 5,
	ms200 = 6,
};
typedef Enumerated<CONSTRAINED, 6> t_SI_nst;

class Tdd128 : Sequence {
private:
	static const void *itemsInfo[10];
	static bool itemsPres[10];
public:
	static const Info theInfo;
	Tdd128(): Sequence(&theInfo) {}
};

class NonScheduledTransGrantInfoTDDr9 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	NonScheduledTransGrantInfoTDDr9(): Choices(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class ULEDCHInformationr9 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULEDCHInformationr9(): Sequence(&theInfo) {}
};

class DLULHSPAInformationr9 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	DLULHSPAInformationr9(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, -28, -13> DPCCHPowerOffset2;

typedef Integer<CONSTRAINED, 0, 255> TGPSReconfigurationCFN;

class Activate : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Activate(): Sequence(&theInfo) {}
};

typedef _Null Deactivate;

class Tgps_Status : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Tgps_Status(): Choices(&theInfo) {}
};

class TGPSequenceShort : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TGPSequenceShort(): Sequence(&theInfo) {}
};

typedef SequenceOf<TGPSequenceShort, CONSTRAINED, 1, maxTGPS> Tgp_SequenceShortList;

class DPCHCompressedModeStatusInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DPCHCompressedModeStatusInfo(): Sequence(&theInfo) {}
};

enum UEDRXCycleInactivityThresholdValues {
	sub_frames_0 = 0,
	sub_frames_1 = 1,
	sub_frames_2 = 2,
	sub_frames_4 = 3,
	sub_frames_8 = 4,
	sub_frames_16 = 5,
	sub_frames_32 = 6,
	sub_frames_64 = 7,
	sub_frames_128 = 8,
	sub_frames_256 = 9,
	sub_frames_512 = 10,
	spare5 = 11,
	spare4 = 12,
	spare3 = 13,
	spare2 = 14,
	spare1 = 15,
};
typedef Enumerated<CONSTRAINED, 15> UEDRXCycleInactivityThreshold;

enum UEDRXCycleValues {
	sub_frames_4 = 0,
	sub_frames_5 = 1,
	sub_frames_8 = 2,
	sub_frames_10 = 3,
	sub_frames_16 = 4,
	sub_frames_20 = 5,
	spare2 = 6,
	spare1 = 7,
};
typedef Enumerated<CONSTRAINED, 7> UEDRXCycle;

enum UEGrantMonitoringInactivityThresholdValues {
	e_dch_tti_0 = 0,
	e_dch_tti_1 = 1,
	e_dch_tti_2 = 2,
	e_dch_tti_4 = 3,
	e_dch_tti_8 = 4,
	e_dch_tti_16 = 5,
	e_dch_tti_32 = 6,
	e_dch_tti_64 = 7,
	e_dch_tti_128 = 8,
	e_dch_tti_256 = 9,
	spare6 = 10,
	spare5 = 11,
	spare4 = 12,
	spare3 = 13,
	spare2 = 14,
	spare1 = 15,
};
typedef Enumerated<CONSTRAINED, 15> UEGrantMonitoringInactivityThreshold;

typedef Boolean Ue_drx_GrantMonitoring;

class DRXInfo : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	DRXInfo(): Sequence(&theInfo) {}
};

class DSCHTransportChannelsInfo : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	DSCHTransportChannelsInfo(): Sequence(&theInfo) {}
};

enum UEDTXCycle110msValues {
	sub_frames_1 = 0,
	sub_frames_5 = 1,
	sub_frames_10 = 2,
	sub_frames_20 = 3,
};
typedef Enumerated<CONSTRAINED, 3> UEDTXCycle110ms;

enum UEDTXCycle210msValues {
	sub_frames_5 = 0,
	sub_frames_10 = 1,
	sub_frames_20 = 2,
	sub_frames_40 = 3,
	sub_frames_80 = 4,
	sub_frames_160 = 5,
	spare2 = 6,
	spare1 = 7,
};
typedef Enumerated<CONSTRAINED, 7> UEDTXCycle210ms;

enum MACDTXCycle10msValues {
	sub_frames_5 = 0,
	sub_frames_10 = 1,
	sub_frames_20 = 2,
	spare1 = 3,
};
typedef Enumerated<CONSTRAINED, 3> MACDTXCycle10ms;

class DTXEDCHTTI10ms : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DTXEDCHTTI10ms(): Sequence(&theInfo) {}
};

enum UEDTXCycle12msValues {
	sub_frames_1 = 0,
	sub_frames_4 = 1,
	sub_frames_5 = 2,
	sub_frames_8 = 3,
	sub_frames_10 = 4,
	sub_frames_16 = 5,
	sub_frames_20 = 6,
	spare1 = 7,
};
typedef Enumerated<CONSTRAINED, 7> UEDTXCycle12ms;

enum UEDTXCycle22msValues {
	sub_frames_4 = 0,
	sub_frames_5 = 1,
	sub_frames_8 = 2,
	sub_frames_10 = 3,
	sub_frames_16 = 4,
	sub_frames_20 = 5,
	sub_frames_32 = 6,
	sub_frames_40 = 7,
	sub_frames_64 = 8,
	sub_frames_80 = 9,
	sub_frames_128 = 10,
	sub_frames_160 = 11,
	spare4 = 12,
	spare3 = 13,
	spare2 = 14,
	spare1 = 15,
};
typedef Enumerated<CONSTRAINED, 15> UEDTXCycle22ms;

enum MACDTXCycle2msValues {
	sub_frames_1 = 0,
	sub_frames_4 = 1,
	sub_frames_5 = 2,
	sub_frames_8 = 3,
	sub_frames_10 = 4,
	sub_frames_16 = 5,
	sub_frames_20 = 6,
	spare1 = 7,
};
typedef Enumerated<CONSTRAINED, 7> MACDTXCycle2ms;

class DTXEDCHTTI2ms : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DTXEDCHTTI2ms(): Sequence(&theInfo) {}
};

class E_dch_TTI_Length : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	E_dch_TTI_Length(): Choices(&theInfo) {}
};

enum UEDTXCycle2InactivityThresholdValues {
	e_dch_tti_1 = 0,
	e_dch_tti_4 = 1,
	e_dch_tti_8 = 2,
	e_dch_tti_16 = 3,
	e_dch_tti_32 = 4,
	e_dch_tti_64 = 5,
	e_dch_tti_128 = 6,
	e_dch_tti_256 = 7,
	spare8 = 8,
	spare7 = 9,
	spare6 = 10,
	spare5 = 11,
	spare4 = 12,
	spare3 = 13,
	spare2 = 14,
	spare1 = 15,
};
typedef Enumerated<CONSTRAINED, 15> UEDTXCycle2InactivityThreshold;

typedef Integer<CONSTRAINED, 0, 38> Ue_dtx_cycle2DefaultSG;

enum UEDTXlongpreamblelengthValues {
	slots_4 = 0,
	slots_15 = 1,
};
typedef Enumerated<CONSTRAINED, 1> UEDTXlongpreamblelength;

enum MACInactivityThresholdValues {
	e_dch_tti_1 = 0,
	e_dch_tti_2 = 1,
	e_dch_tti_4 = 2,
	e_dch_tti_8 = 3,
	e_dch_tti_16 = 4,
	e_dch_tti_32 = 5,
	e_dch_tti_64 = 6,
	e_dch_tti_128 = 7,
	e_dch_tti_256 = 8,
	e_dch_tti_512 = 9,
	e_dch_tti_Infinity = 10,
	spare5 = 11,
	spare4 = 12,
	spare3 = 13,
	spare2 = 14,
	spare1 = 15,
};
typedef Enumerated<CONSTRAINED, 15> MACInactivityThreshold;

enum UEDPCCHBurstValues {
	sub_frames_1 = 0,
	sub_frames_2 = 1,
	sub_frames_5 = 2,
	spare1 = 3,
};
typedef Enumerated<CONSTRAINED, 3> UEDPCCHBurst;

class DTXInfo : Sequence {
private:
	static const void *itemsInfo[8];
	static bool itemsPres[8];
public:
	static const Info theInfo;
	DTXInfo(): Sequence(&theInfo) {}
};

enum UplinkDPCCHSlotFormatInformationValues {
	slot_format_1 = 0,
	dummy = 1,
	slot_format_4 = 2,
	spare1 = 3,
};
typedef Enumerated<CONSTRAINED, 3> UplinkDPCCHSlotFormatInformation;

class DTXDRXInfor7 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DTXDRXInfor7(): Sequence(&theInfo) {}
};

typedef SequenceOf<DynamicPersistenceLevel, CONSTRAINED, 1, maxPRACH> DynamicPersistenceLevelList;

typedef Integer<CONSTRAINED, 0, 38> Value;

enum primary_Secondary_GrantSelectorValues {
	primary = 0,
	secondary = 1,
};
typedef Enumerated<CONSTRAINED, 1> primary_Secondary_GrantSelector;

class ServingGrant : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ServingGrant(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 127> Reference_E_TFCI;

typedef Integer<CONSTRAINED, 0, 29> Reference_E_TFCI_PO;

class EDPDCHReferenceETFCI : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	EDPDCHReferenceETFCI(): Sequence(&theInfo) {}
};

typedef SequenceOf<EDPDCHReferenceETFCI, CONSTRAINED, 1, 8> EDPDCHReferenceETFCIList;

typedef Integer<CONSTRAINED, 0, 6> PowerOffsetForSchedInfo;

typedef Integer<CONSTRAINED, 0, 37> ThreeIndexStepThreshold;

typedef Integer<CONSTRAINED, 0, 37> TwoIndexStepThreshold;

typedef _Null ReleaseIndicator;

class E_RGCH_Info : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	E_RGCH_Info(): Choices(&theInfo) {}
};

class EDCHRLInfoNewServingCell : Sequence {
private:
	static const void *itemsInfo[10];
	static bool itemsPres[10];
public:
	static const Info theInfo;
	EDCHRLInfoNewServingCell(): Sequence(&theInfo) {}
};

typedef _Null ReleaseIndicator;

class E_HICH_Info : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	E_HICH_Info(): Choices(&theInfo) {}
};

typedef _Null ReleaseIndicator;

class E_RGCH_Info : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	E_RGCH_Info(): Choices(&theInfo) {}
};

class EDCHRLInfoOtherCell : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	EDCHRLInfoOtherCell(): Sequence(&theInfo) {}
};

typedef SequenceOf<EDCHRLInfoOtherCell, CONSTRAINED, 1, maxEDCHRL> E_DCH_RL_InfoOtherCellList;

class EDCHReconfigurationInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	EDCHReconfigurationInfo(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 38> Value;

enum primary_Secondary_GrantSelectorValues {
	primary = 0,
	secondary = 1,
};
typedef Enumerated<CONSTRAINED, 1> primary_Secondary_GrantSelector;

class ServingGrant : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ServingGrant(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 6> PowerOffsetForSchedInfo;

typedef Integer<CONSTRAINED, 0, 37> ThreeIndexStepThreshold;

typedef Integer<CONSTRAINED, 0, 37> TwoIndexStepThreshold;

typedef _Null ReleaseIndicator;

class E_RGCH_Info : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	E_RGCH_Info(): Choices(&theInfo) {}
};

class EDCHRLInfoNewServingCellr7 : Sequence {
private:
	static const void *itemsInfo[10];
	static bool itemsPres[10];
public:
	static const Info theInfo;
	EDCHRLInfoNewServingCellr7(): Sequence(&theInfo) {}
};

typedef SequenceOf<EDCHRLInfoOtherCell, CONSTRAINED, 1, maxEDCHRL> E_DCH_RL_InfoOtherCellList;

class EDCHReconfigurationInfor7 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	EDCHReconfigurationInfor7(): Sequence(&theInfo) {}
};

typedef _Null ReleaseIndicator;

class E_RGCH_Info : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	E_RGCH_Info(): Choices(&theInfo) {}
};

class EDCHRLInfoNewSecServingCell : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	EDCHRLInfoNewSecServingCell(): Sequence(&theInfo) {}
};

typedef _Null ReleaseIndicator;

class E_RGCH_Info : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	E_RGCH_Info(): Choices(&theInfo) {}
};

class EDCHRLInfoOtherCellSecULFreq : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	EDCHRLInfoOtherCellSecULFreq(): Sequence(&theInfo) {}
};

typedef SequenceOf<EDCHRLInfoOtherCellSecULFreq, CONSTRAINED, 1, maxEDCHRL> E_DCH_RL_InfoOtherCellList_SecULFreq;

class EDCHReconfigurationInfoSecULFrequency : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	EDCHReconfigurationInfoSecULFrequency(): Sequence(&theInfo) {}
};

class EDCHRLInfoSameServingCell : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	EDCHRLInfoSameServingCell(): Sequence(&theInfo) {}
};

typedef _Null Continue;

typedef Integer<CONSTRAINED, 0, 3> Ei;

class Implicit : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Implicit(): Sequence(&theInfo) {}
};

typedef _Null DefaultMidamble;

typedef Integer<CONSTRAINED, 0, 15> UeSpecificMidamble;

class MidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	MidambleAllocationMode(): Choices(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 8> MidambleConfiguration;

class Explicit : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	Explicit(): Sequence(&theInfo) {}
};

class Configurationmode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Configurationmode(): Choices(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 19> SignatureSequenceGroupIndex;

class EHICHInformationForSPSTDD128 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	EHICHInformationForSPSTDD128(): Sequence(&theInfo) {}
};

class EDCHTxPatternListTDD128 : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	EDCHTxPatternListTDD128(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 8> N_E_UCCH;

typedef BitString<CONSTRAINED, 5, 5> TimeslotResourceRelatedInfo;

typedef Integer<CONSTRAINED, 1, 32> PowerResourceRelatedInfo;

typedef Integer<CONSTRAINED, 0, 1> SubframeNum;

typedef Integer<CONSTRAINED, 0, maxEDCHTxPattern_TDD128_1> InitialTxPatternIndex;

class InitialSPSInfoForEDCH : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	InitialSPSInfoForEDCH(): Sequence(&theInfo) {}
};

class EDCHSPSNewOperationTDD128 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	EDCHSPSNewOperationTDD128(): Sequence(&theInfo) {}
};

class E_dch_SPS_Operation : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	E_dch_SPS_Operation(): Choices(&theInfo) {}
};

class EDCHSPSInformationTDD128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EDCHSPSInformationTDD128(): Sequence(&theInfo) {}
};

class EDPCCHInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	EDPCCHInfo(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 37> ThreeIndexStepThreshold;

typedef Integer<CONSTRAINED, 0, 37> TwoIndexStepThreshold;

class EDPDCHInfo : Sequence {
private:
	static const void *itemsInfo[8];
	static bool itemsPres[8];
public:
	static const Info theInfo;
	EDPDCHInfo(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 37> ThreeIndexStepThreshold;

typedef Integer<CONSTRAINED, 0, 37> TwoIndexStepThreshold;

class EDPDCHInfor7 : Sequence {
private:
	static const void *itemsInfo[8];
	static bool itemsPres[8];
public:
	static const Info theInfo;
	EDPDCHInfor7(): Sequence(&theInfo) {}
};

enum EnablingDelayValues {
	radio_frames_0 = 0,
	radio_frames_1 = 1,
	radio_frames_2 = 2,
	radio_frames_4 = 3,
	radio_frames_8 = 4,
	radio_frames_16 = 5,
	radio_frames_32 = 6,
	radio_frames_64 = 7,
	radio_frames_128 = 8,
	spare7 = 9,
	spare6 = 10,
	spare5 = 11,
	spare4 = 12,
	spare3 = 13,
	spare2 = 14,
	spare1 = 15,
};
typedef Enumerated<CONSTRAINED, 15> EnablingDelay;

typedef Integer<CONSTRAINED, 0, 255> Ex_ul_TimingAdvance;

class Tdd384 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd384(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 511> Ex_ul_TimingAdvance;

class Tdd768 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd768(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class EXTULTimingAdvance : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EXTULTimingAdvance(): Sequence(&theInfo) {}
};

class HSChannelisationCodeSetInfoLCR : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HSChannelisationCodeSetInfoLCR(): Sequence(&theInfo) {}
};

typedef SequenceOf<HSSCCHCodes, CONSTRAINED, 1, maxHSSCCHs> HS_SCCHChannelisationCodeInfo;

class HSSCCHSystemInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HSSCCHSystemInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<HRNTI, CONSTRAINED, 1, maxCommonHRNTI> Common_H_RNTI_information;

class HSDSCHCommonSystemInformation : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	HSDSCHCommonSystemInformation(): Sequence(&theInfo) {}
};

typedef SequenceOf<HSSCCHTDD128r6, CONSTRAINED, 1, maxHSSCCHs> Hs_SCCH_SetConfiguration;

typedef Integer<CONSTRAINED, -120, -58> Power_level_HSSICH;

typedef Integer<CONSTRAINED, -7, 8> Nack_ack_power_offset;

enum tpc_step_sizeValues {
	s1 = 0,
	s2 = 1,
	s3 = 2,
	spare1 = 3,
};
typedef Enumerated<CONSTRAINED, 3> tpc_step_size;

typedef Integer<CONSTRAINED, 1, 255> Power_control_gap;

typedef Boolean Pathloss_compensation_switch;

class HSSCCHSystemInfoTDD128 : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	HSSCCHSystemInfoTDD128(): Sequence(&theInfo) {}
};

typedef SequenceOf<HRNTI, CONSTRAINED, 1, maxCommonHRNTI> Common_H_RNTI_information;

class HSDSCHCommonSystemInformationTDD128 : Sequence {
private:
	static const void *itemsInfo[8];
	static bool itemsPres[8];
public:
	static const Info theInfo;
	HSDSCHCommonSystemInformationTDD128(): Sequence(&theInfo) {}
};

enum HSDSCHDrxBurstFachValues {
	f1 = 0,
	f2 = 1,
	f4 = 2,
	f8 = 3,
	f16 = 4,
	spare3 = 5,
	spare2 = 6,
	spare1 = 7,
};
typedef Enumerated<CONSTRAINED, 7> HSDSCHDrxBurstFach;

enum HSDSCHDrxCycleFachValues {
	f4 = 0,
	f8 = 1,
	f16 = 2,
	f32 = 3,
};
typedef Enumerated<CONSTRAINED, 3> HSDSCHDrxCycleFach;

typedef Boolean DrxInterruption_hs_dsch;

class HSDSCHDrxCellfachinfo : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	HSDSCHDrxCellfachinfo(): Sequence(&theInfo) {}
};

class HSDSCHDrxCellfachinfoTDD128 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	HSDSCHDrxCellfachinfoTDD128(): Sequence(&theInfo) {}
};

enum PICountPerFrameValues {
	e18 = 0,
	e36 = 1,
	e72 = 2,
	e144 = 3,
};
typedef Enumerated<CONSTRAINED, 3> PICountPerFrame;

typedef Boolean Sttd_Indicator;

class Fdd : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

enum TDDPICHCCodeValues {
	cc16_1 = 0,
	cc16_2 = 1,
	cc16_3 = 2,
	cc16_4 = 3,
	cc16_5 = 4,
	cc16_6 = 5,
	cc16_7 = 6,
	cc16_8 = 7,
	cc16_9 = 8,
	cc16_10 = 9,
	cc16_11 = 10,
	cc16_12 = 11,
	cc16_13 = 12,
	cc16_14 = 13,
	cc16_15 = 14,
	cc16_16 = 15,
};
typedef Enumerated<CONSTRAINED, 15> TDDPICHCCode;

typedef Integer<CONSTRAINED, 0, 3> Rpp4_2;

typedef Integer<CONSTRAINED, 0, 7> Rpp8_2;

typedef Integer<CONSTRAINED, 0, 7> Rpp8_4;

typedef Integer<CONSTRAINED, 0, 15> Rpp16_2;

typedef Integer<CONSTRAINED, 0, 15> Rpp16_4;

typedef Integer<CONSTRAINED, 0, 31> Rpp32_2;

typedef Integer<CONSTRAINED, 0, 31> Rpp32_4;

typedef Integer<CONSTRAINED, 0, 63> Rpp64_2;

typedef Integer<CONSTRAINED, 0, 63> Rpp64_4;

class RepPerLengthOffsetPICH : Choice {
private:
	static const void *choicesInfo[9];
public:
	static const Info theInfo;
	RepPerLengthOffsetPICH(): Choices(&theInfo) {}
};

enum PagingIndicatorLengthValues {
	pi4 = 0,
	pi8 = 1,
	pi16 = 2,
};
typedef Enumerated<CONSTRAINED, 2> PagingIndicatorLength;

enum NGAPValues {
	f2 = 0,
	f4 = 1,
	f8 = 2,
};
typedef Enumerated<CONSTRAINED, 2> NGAP;

typedef Integer<CONSTRAINED, 1, 8> NPCH;

class Tdd : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class PICHInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PICHInfo(): Choices(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 15> Hs_pdschChannelisationCode;

class PICHForHSDPASupportedPaging : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PICHForHSDPASupportedPaging(): Sequence(&theInfo) {}
};

typedef SequenceOf<PICHForHSDPASupportedPaging, CONSTRAINED, 1, maxSCCPCH> Pich_ForHSDPASupportedPagingList;

typedef Integer<CONSTRAINED, 1, 5> NumberOfPcchTransmissions;

typedef Integer<CONSTRAINED, 1, 32> TransportBlockSizeIndex;

typedef SequenceOf<TransportBlockSizeIndex, CONSTRAINED, 1, 2> TransportBlockSizeList;

class HSDSCHPagingSystemInformation : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	HSDSCHPagingSystemInformation(): Sequence(&theInfo) {}
};

class Implicit : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Implicit(): Sequence(&theInfo) {}
};

typedef SequenceOf<DLTSChannelisationCode, CONSTRAINED, 1, 2> PichChannelisationCodeListLCRr4;

class PICHInfoLCRr4 : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	PICHInfoLCRr4(): Sequence(&theInfo) {}
};

class PICHForHSDPASupportedPagingTDD128 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PICHForHSDPASupportedPagingTDD128(): Choices(&theInfo) {}
};

typedef SequenceOf<PICHForHSDPASupportedPagingTDD128, CONSTRAINED, 1, maxSCCPCH> Pich_ForHsdschList;

typedef Integer<CONSTRAINED, 1, 16> Dtch_DCCH_reception_window_size;

class Paging_associatedHspdschInfo : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	Paging_associatedHspdschInfo(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 3> Paging_sub_Channel_size;

typedef SequenceOf<TransportBlockSizeIndex, CONSTRAINED, 1, 2> TransportBlockSizeList;

class PCCHInformationList : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PCCHInformationList(): Sequence(&theInfo) {}
};

class HSDSCHPagingSystemInformationTDD128 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	HSDSCHPagingSystemInformationTDD128(): Sequence(&theInfo) {}
};

class HSDSCHRxPatternListTDD128 : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	HSDSCHRxPatternListTDD128(): Sequence(&theInfo) {}
};

class HSDSCHTbsListTDD128 : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	HSDSCHTbsListTDD128(): Sequence(&theInfo) {}
};

typedef _Null Continue;

typedef Integer<CONSTRAINED, 1, 8> NumberOfProcesses;

class HARQInfoForSPS : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HARQInfoForSPS(): Sequence(&theInfo) {}
};

class HSSICHListTDD128 : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	HSSICHListTDD128(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED, 5, 5> TimeslotInfo;

typedef Integer<CONSTRAINED, 0, 1> SfnNum;

typedef Integer<CONSTRAINED, 0, maxRxPatternForHSDSCH_TDD128_1> InitialRxPatternIndex;

typedef Integer<CONSTRAINED, 0, maxTbsForHSDSCH_TDD128_1> InitialTfsIndex;

enum modulationValues {
	modQPSK = 0,
	mod16QAM = 1,
};
typedef Enumerated<CONSTRAINED, 1> modulation;

typedef Integer<CONSTRAINED, 0, maxHSSICH_TDD128_1> Hs_sich_Index;

class InitialSPSInfoForHSDSCH : Sequence {
private:
	static const void *itemsInfo[8];
	static bool itemsPres[8];
public:
	static const Info theInfo;
	InitialSPSInfoForHSDSCH(): Sequence(&theInfo) {}
};

class HSDSCHSPSNewOperationTDD128 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	HSDSCHSPSNewOperationTDD128(): Sequence(&theInfo) {}
};

class Hs_dsch_SPS_Operation : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Hs_dsch_SPS_Operation(): Choices(&theInfo) {}
};

class HSDSCHSPSInformationTDD128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HSDSCHSPSInformationTDD128(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 15> Hs_pdsch_CodeIndex;

class HSSCCHLessTFSList : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	HSSCCHLessTFSList(): Sequence(&theInfo) {}
};

class HSSCCHLessNewOperation : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HSSCCHLessNewOperation(): Sequence(&theInfo) {}
};

typedef _Null Continue;

class Hs_scchLessOperation : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Hs_scchLessOperation(): Choices(&theInfo) {}
};

class HSSCCHLessInfor7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HSSCCHLessInfor7(): Sequence(&theInfo) {}
};

typedef _Null DefaultMidamble;

typedef _Null CommonMidamble;

typedef Integer<CONSTRAINED, 0, 15> UeSpecificMidamble;

class MidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	MidambleAllocationMode(): Choices(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 8> MidambleConfiguration;

class HSSCCHTDD128MultiCarrier : Sequence {
private:
	static const void *itemsInfo[8];
	static bool itemsPres[8];
public:
	static const Info theInfo;
	HSSCCHTDD128MultiCarrier(): Sequence(&theInfo) {}
};

class HSSICHReferenceSignalInfoList : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	HSSICHReferenceSignalInfoList(): Sequence(&theInfo) {}
};

enum modulationValues {
	mod_QPSK = 0,
	mod_8PSK = 1,
};
typedef Enumerated<CONSTRAINED, 1> modulation;

enum ss_TPC_SymbolsValues {
	zero = 0,
	one = 1,
	sixteenOverSF = 2,
};
typedef Enumerated<CONSTRAINED, 2> ss_TPC_Symbols;

class IndividualTimeslotInfoLCRr4ext : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	IndividualTimeslotInfoLCRr4ext(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 3> MaxPowerIncreaser4;

typedef _Null DefaultMidamble;

typedef _Null CommonMidamble;

class UeSpecificMidamble : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UeSpecificMidamble(): Sequence(&theInfo) {}
};

class MidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	MidambleAllocationMode(): Choices(&theInfo) {}
};

class Type1 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Type1(): Sequence(&theInfo) {}
};

typedef _Null DefaultMidamble;

typedef _Null CommonMidamble;

class UeSpecificMidamble : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UeSpecificMidamble(): Sequence(&theInfo) {}
};

class MidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	MidambleAllocationMode(): Choices(&theInfo) {}
};

class Type2 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Type2(): Sequence(&theInfo) {}
};

class BurstType : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	BurstType(): Choices(&theInfo) {}
};

class MidambleShiftAndBurstTypeDL : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeDL(): Sequence(&theInfo) {}
};

typedef _Null DefaultMidamble;

typedef _Null CommonMidamble;

class UeSpecificMidamble : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UeSpecificMidamble(): Sequence(&theInfo) {}
};

class MidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	MidambleAllocationMode(): Choices(&theInfo) {}
};

class Type1 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Type1(): Sequence(&theInfo) {}
};

typedef _Null DefaultMidamble;

typedef _Null CommonMidamble;

class UeSpecificMidamble : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UeSpecificMidamble(): Sequence(&theInfo) {}
};

class MidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	MidambleAllocationMode(): Choices(&theInfo) {}
};

class Type2 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Type2(): Sequence(&theInfo) {}
};

class BurstType : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	BurstType(): Choices(&theInfo) {}
};

class MidambleShiftAndBurstTypeDLVHCR : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeDLVHCR(): Sequence(&theInfo) {}
};

enum MIMOOperationValues {
	start = 0,
	continue = 1,
};
typedef Enumerated<CONSTRAINED, 1> MIMOOperation;

typedef _Null NormalPattern;

class DiversityPattern : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DiversityPattern(): Sequence(&theInfo) {}
};

class SecondCPICH_Pattern : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	SecondCPICH_Pattern(): Choices(&theInfo) {}
};

class MIMOPilotConfiguration : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MIMOPilotConfiguration(): Sequence(&theInfo) {}
};

class MIMOParametersr7 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	MIMOParametersr7(): Sequence(&theInfo) {}
};


enum precodingWeightSetRestrictionValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> precodingWeightSetRestriction;

class MIMOParametersv7g0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MIMOParametersv7g0ext(): Sequence(&theInfo) {}
};

class Fdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

enum mimoSFModeForHSPDSCHDualStreamValues {
	sf1 = 0,
	sf1sf16 = 1,
};
typedef Enumerated<CONSTRAINED, 1> mimoSFModeForHSPDSCHDualStream;

class Tdd128 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Tdd128(): Sequence(&theInfo) {}
};

typedef _Null Tdd384_tdd768;

class Tdd : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Tdd(): Choices(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class MIMOParametersr8 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MIMOParametersr8(): Sequence(&theInfo) {}
};

enum precodingWeightSetRestrictionValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> precodingWeightSetRestriction;

class Fdd : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

enum mimoSFModeForHSPDSCHDualStreamValues {
	sf1 = 0,
	sf1sf16 = 1,
};
typedef Enumerated<CONSTRAINED, 1> mimoSFModeForHSPDSCHDualStream;

class Tdd128 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Tdd128(): Sequence(&theInfo) {}
};

typedef _Null Tdd384_tdd768;

class Tdd : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Tdd(): Choices(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class MIMOParametersr9 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MIMOParametersr9(): Sequence(&theInfo) {}
};

class MIMOPilotConfigurationv7f0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MIMOPilotConfigurationv7f0ext(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 127> UpPCHpositionLCR;

class MultifrequencyInfoLCRr7 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	MultifrequencyInfoLCRr7(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 159> UEDTXDRXOffset;

class NewTiming : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	NewTiming(): Sequence(&theInfo) {}
};

typedef _Null Tdd384_768;

enum t_SI_nstValues {
	everyEDCHTTI = 0,
	ms20 = 1,
	ms40 = 2,
	ms60 = 3,
	ms80 = 4,
	ms160 = 5,
	ms200 = 6,
};
typedef Enumerated<CONSTRAINED, 6> t_SI_nst;

class Tdd128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd128(): Sequence(&theInfo) {}
};

class NonScheduledTransGrantInfoTDDext : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	NonScheduledTransGrantInfoTDDext(): Choices(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, maxDPDCH_UL> NumberOfDPDCH;

typedef Integer<CONSTRAINED, 1, 2> NumberOfFBIBits;

class OpenLoopPowerControlTDD : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	OpenLoopPowerControlTDD(): Sequence(&theInfo) {}
};

class OpenLoopPowerControlIPDLTDDr4 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	OpenLoopPowerControlIPDLTDDr4(): Sequence(&theInfo) {}
};

class PDSCHPowerControlInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PDSCHPowerControlInfo(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, hiPDSCHidentities> PDSCHIdentity;

class Old_Configuration : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Old_Configuration(): Sequence(&theInfo) {}
};

class PDSCHInfo : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PDSCHInfo(): Sequence(&theInfo) {}
};

class New_Configuration : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	New_Configuration(): Sequence(&theInfo) {}
};

class Configuration : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Configuration(): Choices(&theInfo) {}
};

class PDSCHCapacityAllocationInfo : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PDSCHCapacityAllocationInfo(): Sequence(&theInfo) {}
};

class Old_Configuration : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Old_Configuration(): Sequence(&theInfo) {}
};

class Tdd384 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd384(): Sequence(&theInfo) {}
};

class Tdd128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd128(): Sequence(&theInfo) {}
};

class TddOption : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	TddOption(): Choices(&theInfo) {}
};

class PDSCHInfor4 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PDSCHInfor4(): Sequence(&theInfo) {}
};

class New_Configuration : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	New_Configuration(): Sequence(&theInfo) {}
};

class Configuration : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Configuration(): Choices(&theInfo) {}
};

class PDSCHCapacityAllocationInfor4 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PDSCHCapacityAllocationInfor4(): Sequence(&theInfo) {}
};

class Old_Configuration : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Old_Configuration(): Sequence(&theInfo) {}
};

class Tdd384 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd384(): Sequence(&theInfo) {}
};

class Tdd768 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd768(): Sequence(&theInfo) {}
};

class Tdd128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd128(): Sequence(&theInfo) {}
};

class TddOption : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	TddOption(): Choices(&theInfo) {}
};

class PDSCHInfor7 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PDSCHInfor7(): Sequence(&theInfo) {}
};

class New_Configuration : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	New_Configuration(): Sequence(&theInfo) {}
};

class Configuration : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Configuration(): Choices(&theInfo) {}
};

class PDSCHCapacityAllocationInfor7 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PDSCHCapacityAllocationInfor7(): Sequence(&theInfo) {}
};

class PDSCHInfoLCRr4 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PDSCHInfoLCRr4(): Sequence(&theInfo) {}
};

class PDSCHSysInfo : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	PDSCHSysInfo(): Sequence(&theInfo) {}
};

class PDSCHSysInfoVHCRr7 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	PDSCHSysInfoVHCRr7(): Sequence(&theInfo) {}
};

class PDSCHSysInfoHCRr5 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	PDSCHSysInfoHCRr5(): Sequence(&theInfo) {}
};

class PDSCHSysInfoLCRr4 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	PDSCHSysInfoLCRr4(): Sequence(&theInfo) {}
};

typedef SequenceOf<PDSCHSysInfo, CONSTRAINED, 1, maxPDSCH> PDSCHSysInfoList;

typedef SequenceOf<PDSCHSysInfoVHCRr7, CONSTRAINED, 1, maxPDSCH> PDSCHSysInfoListVHCRr7;

typedef SequenceOf<PDSCHSysInfoHCRr5, CONSTRAINED, 1, maxPDSCH> PDSCHSysInfoListHCRr5;

typedef SequenceOf<PDSCHSysInfoLCRr4, CONSTRAINED, 1, maxPDSCH> PDSCHSysInfoListLCRr4;

class PDSCHSysInfoListSFN : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	PDSCHSysInfoListSFN(): Sequence(&theInfo) {}
};

class PDSCHSysInfoListSFNHCRr5 : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	PDSCHSysInfoListSFNHCRr5(): Sequence(&theInfo) {}
};

class PDSCHSysInfoListSFNLCRr4 : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	PDSCHSysInfoListSFNLCRr4(): Sequence(&theInfo) {}
};

enum TDD768PICHCCodeValues {
	cc32_1 = 0,
	cc32_2 = 1,
	cc32_3 = 2,
	cc32_4 = 3,
	cc32_5 = 4,
	cc32_6 = 5,
	cc32_7 = 6,
	cc32_8 = 7,
	cc32_9 = 8,
	cc32_10 = 9,
	cc32_11 = 10,
	cc32_12 = 11,
	cc32_13 = 12,
	cc32_14 = 13,
	cc32_15 = 14,
	cc32_16 = 15,
	cc32_17 = 16,
	cc32_18 = 17,
	cc32_19 = 18,
	cc32_20 = 19,
	cc32_21 = 20,
	cc32_22 = 21,
	cc32_23 = 22,
	cc32_24 = 23,
	cc32_25 = 24,
	cc32_26 = 25,
	cc32_27 = 26,
	cc32_28 = 27,
	cc32_29 = 28,
	cc32_30 = 29,
	cc32_31 = 30,
	cc32_32 = 31,
};
typedef Enumerated<CONSTRAINED, 31> TDD768PICHCCode;

class ChannelisationCode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ChannelisationCode(): Choices(&theInfo) {}
};

class PICHInfoHCRVHCRr7 : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	PICHInfoHCRVHCRr7(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, -10, 5> PICHPowerOffset;

typedef Integer<CONSTRAINED, 1, 14> PlcchSequenceNumber;

typedef Integer<CONSTRAINED, 0, 10> TPCCommandTargetRate;

class PLCCHInfo : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	PLCCHInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<TDDPRACHCCodeLCRr4, CONSTRAINED, 1, 4> PRACHChanCodesLCRr4;

class PRACHDefinitionLCRr4 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	PRACHDefinitionLCRr4(): Sequence(&theInfo) {}
};

enum PRACHMidambleValues {
	direct = 0,
	direct_Inverted = 1,
};
typedef Enumerated<CONSTRAINED, 1> PRACHMidamble;

typedef SequenceOf<ASCSettingFDD, CONSTRAINED, 1, maxASC> Fdd;

typedef SequenceOf<ASCSettingTDD, CONSTRAINED, 1, maxASC> Tdd;

class PRACHPartitioning : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PRACHPartitioning(): Choices(&theInfo) {}
};

typedef SequenceOf<ASCSettingTDDLCRr4, CONSTRAINED, 1, maxASC> PRACHPartitioningLCRr4;

enum SFPRACHValues {
	sfpr32 = 0,
	sfpr64 = 1,
	sfpr128 = 2,
	sfpr256 = 3,
};
typedef Enumerated<CONSTRAINED, 3> SFPRACH;

class Fdd : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

enum TDDPRACHCCode8Values {
	cc8_1 = 0,
	cc8_2 = 1,
	cc8_3 = 2,
	cc8_4 = 3,
	cc8_5 = 4,
	cc8_6 = 5,
	cc8_7 = 6,
	cc8_8 = 7,
};
typedef Enumerated<CONSTRAINED, 7> TDDPRACHCCode8;

typedef SequenceOf<TDDPRACHCCode8, CONSTRAINED, 1, 8> Sf8;

enum TDDPRACHCCode16Values {
	cc16_1 = 0,
	cc16_2 = 1,
	cc16_3 = 2,
	cc16_4 = 3,
	cc16_5 = 4,
	cc16_6 = 5,
	cc16_7 = 6,
	cc16_8 = 7,
	cc16_9 = 8,
	cc16_10 = 9,
	cc16_11 = 10,
	cc16_12 = 11,
	cc16_13 = 12,
	cc16_14 = 13,
	cc16_15 = 14,
	cc16_16 = 15,
};
typedef Enumerated<CONSTRAINED, 15> TDDPRACHCCode16;

typedef SequenceOf<TDDPRACHCCode16, CONSTRAINED, 1, 8> Sf16;

class TDDPRACHCCodeList : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	TDDPRACHCCodeList(): Choices(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class PRACHRACHInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PRACHRACHInfo(): Sequence(&theInfo) {}
};

enum TDD768PRACHCCode32Values {
	cc32_1 = 0,
	cc32_2 = 1,
	cc32_3 = 2,
	cc32_4 = 3,
	cc32_5 = 4,
	cc32_6 = 5,
	cc32_7 = 6,
	cc32_8 = 7,
	cc32_9 = 8,
	cc32_10 = 9,
	cc32_11 = 10,
	cc32_12 = 11,
	cc32_13 = 12,
	cc32_14 = 13,
	cc32_15 = 14,
	cc32_16 = 15,
};
typedef Enumerated<CONSTRAINED, 15> TDD768PRACHCCode32;

typedef SequenceOf<TDD768PRACHCCode32, CONSTRAINED, 1, 16> Sf32;

enum TDD768PRACHCCode16Values {
	cc16_1 = 0,
	cc16_2 = 1,
	cc16_3 = 2,
	cc16_4 = 3,
	cc16_5 = 4,
	cc16_6 = 5,
	cc16_7 = 6,
	cc16_8 = 7,
	cc16_9 = 8,
	cc16_10 = 9,
	cc16_11 = 10,
	cc16_12 = 11,
	cc16_13 = 12,
	cc16_14 = 13,
	cc16_15 = 14,
	cc16_16 = 15,
};
typedef Enumerated<CONSTRAINED, 15> TDD768PRACHCCode16;

typedef SequenceOf<TDD768PRACHCCode16, CONSTRAINED, 1, 16> Sf16;

class TDD768PRACHCCodeList : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	TDD768PRACHCCodeList(): Choices(&theInfo) {}
};

class PRACHRACHInfoVHCRr7 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PRACHRACHInfoVHCRr7(): Sequence(&theInfo) {}
};

class PRACHRACHInfoLCRv770ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PRACHRACHInfoLCRv770ext(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 62> PrxUpPCHdes;

typedef Integer<CONSTRAINED, 0, 3> PowerRampStep;

enum max_SYNC_UL_TransmissionsValues {
	tr1 = 0,
	tr2 = 1,
	tr4 = 2,
	tr8 = 3,
};
typedef Enumerated<CONSTRAINED, 3> max_SYNC_UL_Transmissions;

typedef Integer<CONSTRAINED, 1, 32> Mmax;

class SYNCULInfor4 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	SYNCULInfor4(): Sequence(&theInfo) {}
};

typedef SequenceOf<PRACHDefinitionLCRr4, CONSTRAINED, 1, maxPRACH_FPACH> Prach_DefinitionList;

class PRACHRACHInfoLCRr4 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PRACHRACHInfoLCRr4(): Sequence(&theInfo) {}
};

class Fdd : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

typedef _Null Tdd;

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class PRACHSystemInformation : Sequence {
private:
	static const void *itemsInfo[8];
	static bool itemsPres[8];
public:
	static const Info theInfo;
	PRACHSystemInformation(): Sequence(&theInfo) {}
};

class PRACHSystemInformationVHCRr7 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PRACHSystemInformationVHCRr7(): Sequence(&theInfo) {}
};

class PRACHSystemInformationLCRr4 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PRACHSystemInformationLCRr4(): Sequence(&theInfo) {}
};

class PRACHSystemInformationLCRv770ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PRACHSystemInformationLCRv770ext(): Sequence(&theInfo) {}
};

typedef SequenceOf<PRACHSystemInformation, CONSTRAINED, 1, maxPRACH> PRACHSystemInformationList;

typedef SequenceOf<PRACHSystemInformationVHCRr7, CONSTRAINED, 1, maxPRACH> PRACHSystemInformationListVHCRr7;

typedef SequenceOf<PRACHSystemInformationLCRr4, CONSTRAINED, 1, maxPRACH> PRACHSystemInformationListLCRr4;

typedef SequenceOf<PRACHSystemInformationLCRv770ext, CONSTRAINED, 1, maxPRACH> PRACHSystemInformationListLCRv770ext;

typedef Boolean Tstd_Indicator;

typedef Boolean Sctd_Indicator;

class PrimaryCCPCHInfoLCRr4 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PrimaryCCPCHInfoLCRr4(): Sequence(&theInfo) {}
};

typedef Boolean Tstd_Indicator;

class PrimaryCCPCHInfoLCRr4ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PrimaryCCPCHInfoLCRr4ext(): Sequence(&theInfo) {}
};

typedef _Null Pusch_AllocationPending;

typedef Integer<CONSTRAINED, 1, hiPUSCHidentities> PUSCHIdentity;

class Old_Configuration : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Old_Configuration(): Sequence(&theInfo) {}
};

typedef Boolean DynamicSFusage;

typedef SequenceOf<ULTSChannelisationCode, CONSTRAINED, 1, 2> ULTSChannelisationCodeList;

typedef _Null NoMore;

typedef Integer<CONSTRAINED, 1, maxTS_1> NumAdditionalTimeslots;

class Consecutive : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Consecutive(): Sequence(&theInfo) {}
};

class SameAsLast : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SameAsLast(): Sequence(&theInfo) {}
};

class NewParameters : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	NewParameters(): Sequence(&theInfo) {}
};

class Parameters : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Parameters(): Choices(&theInfo) {}
};

class UplinkAdditionalTimeslots : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UplinkAdditionalTimeslots(): Sequence(&theInfo) {}
};

typedef SequenceOf<UplinkAdditionalTimeslots, CONSTRAINED, 1, maxTS_1> TimeslotList;

class AdditionalTimeslots : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	AdditionalTimeslots(): Choices(&theInfo) {}
};

class MoreTimeslots : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	MoreTimeslots(): Choices(&theInfo) {}
};

class UplinkTimeslotsCodes : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	UplinkTimeslotsCodes(): Sequence(&theInfo) {}
};

class PUSCHInfo : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PUSCHInfo(): Sequence(&theInfo) {}
};

class New_Configuration : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	New_Configuration(): Sequence(&theInfo) {}
};

class Configuration : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Configuration(): Choices(&theInfo) {}
};

class Pusch_AllocationAssignment : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	Pusch_AllocationAssignment(): Sequence(&theInfo) {}
};

class Pusch_Allocation : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Pusch_Allocation(): Choices(&theInfo) {}
};

class PUSCHCapacityAllocationInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PUSCHCapacityAllocationInfo(): Sequence(&theInfo) {}
};

typedef _Null Pusch_AllocationPending;

typedef _Null Tdd384;

class Tdd128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd128(): Sequence(&theInfo) {}
};

class TddOption : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	TddOption(): Choices(&theInfo) {}
};

class PUSCHPowerControlInfor4 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PUSCHPowerControlInfor4(): Sequence(&theInfo) {}
};

class Old_Configuration : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Old_Configuration(): Sequence(&theInfo) {}
};

class Tdd384 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd384(): Sequence(&theInfo) {}
};

typedef Boolean DynamicSFusage;

typedef _Null NoMore;

typedef Integer<CONSTRAINED, 1, maxTS_LCR_1> NumAdditionalTimeslots;

class Consecutive : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Consecutive(): Sequence(&theInfo) {}
};

class SameAsLast : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SameAsLast(): Sequence(&theInfo) {}
};

class NewParameters : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	NewParameters(): Sequence(&theInfo) {}
};

class Parameters : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Parameters(): Choices(&theInfo) {}
};

class UplinkAdditionalTimeslotsLCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UplinkAdditionalTimeslotsLCRr4(): Sequence(&theInfo) {}
};

typedef SequenceOf<UplinkAdditionalTimeslotsLCRr4, CONSTRAINED, 1, maxTS_LCR_1> TimeslotList;

class AdditionalTimeslots : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	AdditionalTimeslots(): Choices(&theInfo) {}
};

class MoreTimeslots : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	MoreTimeslots(): Choices(&theInfo) {}
};

class UplinkTimeslotsCodesLCRr4 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	UplinkTimeslotsCodesLCRr4(): Sequence(&theInfo) {}
};

class Tdd128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd128(): Sequence(&theInfo) {}
};

class TddOption : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	TddOption(): Choices(&theInfo) {}
};

class PUSCHInfor4 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PUSCHInfor4(): Sequence(&theInfo) {}
};

class New_Configuration : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	New_Configuration(): Sequence(&theInfo) {}
};

class Configuration : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Configuration(): Choices(&theInfo) {}
};

class Pusch_AllocationAssignment : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	Pusch_AllocationAssignment(): Sequence(&theInfo) {}
};

class Pusch_Allocation : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Pusch_Allocation(): Choices(&theInfo) {}
};

class PUSCHCapacityAllocationInfor4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PUSCHCapacityAllocationInfor4(): Sequence(&theInfo) {}
};

typedef _Null Pusch_AllocationPending;

typedef _Null Tdd384;

typedef _Null Tdd768;

class Tdd128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd128(): Sequence(&theInfo) {}
};

class TddOption : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	TddOption(): Choices(&theInfo) {}
};

class PUSCHPowerControlInfor7 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PUSCHPowerControlInfor7(): Sequence(&theInfo) {}
};

class Old_Configuration : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Old_Configuration(): Sequence(&theInfo) {}
};

typedef Boolean DynamicSFusage;

enum ULTSChannelisationCodeVHCRValues {
	cc1_1 = 0,
	cc2_1 = 1,
	cc2_2 = 2,
	cc4_1 = 3,
	cc4_2 = 4,
	cc4_3 = 5,
	cc4_4 = 6,
	cc8_1 = 7,
	cc8_2 = 8,
	cc8_3 = 9,
	cc8_4 = 10,
	cc8_5 = 11,
	cc8_6 = 12,
	cc8_7 = 13,
	cc8_8 = 14,
	cc16_1 = 15,
	cc16_2 = 16,
	cc16_3 = 17,
	cc16_4 = 18,
	cc16_5 = 19,
	cc16_6 = 20,
	cc16_7 = 21,
	cc16_8 = 22,
	cc16_9 = 23,
	cc16_10 = 24,
	cc16_11 = 25,
	cc16_12 = 26,
	cc16_13 = 27,
	cc16_14 = 28,
	cc16_15 = 29,
	cc16_16 = 30,
	cc32_1 = 31,
	cc32_2 = 32,
	cc32_3 = 33,
	cc32_4 = 34,
	cc32_5 = 35,
	cc32_6 = 36,
	cc32_7 = 37,
	cc32_8 = 38,
	cc32_9 = 39,
	cc32_10 = 40,
	cc32_11 = 41,
	cc32_12 = 42,
	cc32_13 = 43,
	cc32_14 = 44,
	cc32_15 = 45,
	cc32_16 = 46,
	cc32_17 = 47,
	cc32_18 = 48,
	cc32_19 = 49,
	cc32_20 = 50,
	cc32_21 = 51,
	cc32_22 = 52,
	cc32_23 = 53,
	cc32_24 = 54,
	cc32_25 = 55,
	cc32_26 = 56,
	cc32_27 = 57,
	cc32_28 = 58,
	cc32_29 = 59,
	cc32_30 = 60,
	cc32_31 = 61,
	cc32_32 = 62,
};
typedef Enumerated<CONSTRAINED, 62> ULTSChannelisationCodeVHCR;

typedef SequenceOf<ULTSChannelisationCodeVHCR, CONSTRAINED, 1, 2> ULTSChannelisationCodeListVHCR;

typedef _Null NoMore;

typedef Integer<CONSTRAINED, 1, maxTS_1> NumAdditionalTimeslots;

class Consecutive : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Consecutive(): Sequence(&theInfo) {}
};

class SameAsLast : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SameAsLast(): Sequence(&theInfo) {}
};

class NewParameters : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	NewParameters(): Sequence(&theInfo) {}
};

class Parameters : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Parameters(): Choices(&theInfo) {}
};

class UplinkAdditionalTimeslotsVHCR : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UplinkAdditionalTimeslotsVHCR(): Sequence(&theInfo) {}
};

typedef SequenceOf<UplinkAdditionalTimeslotsVHCR, CONSTRAINED, 1, maxTS_1> TimeslotList;

class AdditionalTimeslots : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	AdditionalTimeslots(): Choices(&theInfo) {}
};

class MoreTimeslots : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	MoreTimeslots(): Choices(&theInfo) {}
};

class UplinkTimeslotsCodesVHCR : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	UplinkTimeslotsCodesVHCR(): Sequence(&theInfo) {}
};

class PUSCHInfoVHCR : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PUSCHInfoVHCR(): Sequence(&theInfo) {}
};

class New_Configuration : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	New_Configuration(): Sequence(&theInfo) {}
};

class Configuration : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Configuration(): Choices(&theInfo) {}
};

class Pusch_AllocationAssignment : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	Pusch_AllocationAssignment(): Sequence(&theInfo) {}
};

class Pusch_Allocation : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Pusch_Allocation(): Choices(&theInfo) {}
};

class PUSCHCapacityAllocationInfor7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PUSCHCapacityAllocationInfor7(): Sequence(&theInfo) {}
};

class PUSCHInfoLCRr4 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PUSCHInfoLCRr4(): Sequence(&theInfo) {}
};

class PUSCHSysInfo : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	PUSCHSysInfo(): Sequence(&theInfo) {}
};

class PUSCHSysInfoVHCR : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	PUSCHSysInfoVHCR(): Sequence(&theInfo) {}
};

class PUSCHSysInfoHCRr5 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	PUSCHSysInfoHCRr5(): Sequence(&theInfo) {}
};

class PUSCHSysInfoLCRr4 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	PUSCHSysInfoLCRr4(): Sequence(&theInfo) {}
};

typedef SequenceOf<PUSCHSysInfo, CONSTRAINED, 1, maxPUSCH> PUSCHSysInfoList;

typedef SequenceOf<PUSCHSysInfoHCRr5, CONSTRAINED, 1, maxPUSCH> PUSCHSysInfoListHCRr5;

typedef SequenceOf<PUSCHSysInfoLCRr4, CONSTRAINED, 1, maxPUSCH> PUSCHSysInfoListLCRr4;

class PUSCHSysInfoListSFN : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	PUSCHSysInfoListSFN(): Sequence(&theInfo) {}
};

class PUSCHSysInfoListSFNHCRr5 : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	PUSCHSysInfoListSFNHCRr5(): Sequence(&theInfo) {}
};

class PUSCHSysInfoListSFNLCRr4 : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	PUSCHSysInfoListSFNLCRr4(): Sequence(&theInfo) {}
};

class PUSCHSysInfoListSFNVHCR : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	PUSCHSysInfoListSFNVHCR(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 8191> ReducedScramblingCodeNumber;

typedef _Null RepetitionPeriod1;

typedef Integer<CONSTRAINED, 1, 1> RepetitionPeriod2;

typedef Integer<CONSTRAINED, 1, 3> RepetitionPeriod4;

typedef Integer<CONSTRAINED, 1, 7> RepetitionPeriod8;

typedef Integer<CONSTRAINED, 1, 15> RepetitionPeriod16;

typedef Integer<CONSTRAINED, 1, 31> RepetitionPeriod32;

class RepetitionPeriodAndLengthForSPS : Choice {
private:
	static const void *choicesInfo[6];
public:
	static const Info theInfo;
	RepetitionPeriodAndLengthForSPS(): Choices(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 3> Rpp4_2;

typedef Integer<CONSTRAINED, 0, 7> Rpp8_2;

typedef Integer<CONSTRAINED, 0, 7> Rpp8_4;

typedef Integer<CONSTRAINED, 0, 15> Rpp16_2;

typedef Integer<CONSTRAINED, 0, 15> Rpp16_4;

typedef Integer<CONSTRAINED, 0, 31> Rpp32_2;

typedef Integer<CONSTRAINED, 0, 31> Rpp32_4;

typedef Integer<CONSTRAINED, 0, 63> Rpp64_2;

typedef Integer<CONSTRAINED, 0, 63> Rpp64_4;

class RepPerLengthOffsetMICH : Choice {
private:
	static const void *choicesInfo[9];
public:
	static const Info theInfo;
	RepPerLengthOffsetMICH(): Choices(&theInfo) {}
};

typedef Boolean Dummy;

class RLAdditionInformation : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	RLAdditionInformation(): Sequence(&theInfo) {}
};

class Dl_dpchInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Dl_dpchInfo(): Choices(&theInfo) {}
};

class RLAdditionInformationr6 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	RLAdditionInformationr6(): Sequence(&theInfo) {}
};

class Dl_dpchInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Dl_dpchInfo(): Choices(&theInfo) {}
};

class RLAdditionInformationr7 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	RLAdditionInformationr7(): Sequence(&theInfo) {}
};

class Dl_dpchInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Dl_dpchInfo(): Choices(&theInfo) {}
};

typedef _Null Continue;

class Timing : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Timing(): Choices(&theInfo) {}
};

class DTXDRXTimingInfor7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DTXDRXTimingInfor7(): Sequence(&theInfo) {}
};

class TargetCellPreconfigInfo : Sequence {
private:
	static const void *itemsInfo[11];
	static bool itemsPres[11];
public:
	static const Info theInfo;
	TargetCellPreconfigInfo(): Sequence(&theInfo) {}
};

class RLAdditionInformationr8 : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	RLAdditionInformationr8(): Sequence(&theInfo) {}
};

class Dl_dpchInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Dl_dpchInfo(): Choices(&theInfo) {}
};

class TargetCellPreconfigInfor9 : Sequence {
private:
	static const void *itemsInfo[13];
	static bool itemsPres[13];
public:
	static const Info theInfo;
	TargetCellPreconfigInfor9(): Sequence(&theInfo) {}
};

class RLAdditionInformationr9 : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	RLAdditionInformationr9(): Sequence(&theInfo) {}
};

class RLAdditionInformationv6b0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RLAdditionInformationv6b0ext(): Sequence(&theInfo) {}
};


class RLAdditionInformationv890ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RLAdditionInformationv890ext(): Sequence(&theInfo) {}
};


class RLAdditionInformationv950ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RLAdditionInformationv950ext(): Sequence(&theInfo) {}
};

typedef SequenceOf<RLAdditionInformation, CONSTRAINED, 1, maxRL_1> RLAdditionInformationList;

typedef SequenceOf<RLAdditionInformationr6, CONSTRAINED, 1, maxRL_1> RLAdditionInformationListr6;

typedef SequenceOf<RLAdditionInformationr7, CONSTRAINED, 1, maxRL_1> RLAdditionInformationListr7;

typedef SequenceOf<RLAdditionInformationv6b0ext, CONSTRAINED, 1, maxRL> RLAdditionInformationlistv6b0ext;

typedef SequenceOf<RLAdditionInformationr8, CONSTRAINED, 1, maxRL_1> RLAdditionInformationListr8;

typedef SequenceOf<RLAdditionInformationv890ext, CONSTRAINED, 1, maxRL_1> RLAdditionInformationListv890ext;

typedef SequenceOf<RLAdditionInformationr9, CONSTRAINED, 1, maxRL_1> RLAdditionInformationListr9;

typedef SequenceOf<RLAdditionInformationv950ext, CONSTRAINED, 1, maxRL_1> RLAdditionInformationListv950ext;

class RLAdditionInformationSecULFreq : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	RLAdditionInformationSecULFreq(): Sequence(&theInfo) {}
};

typedef SequenceOf<RLAdditionInformationSecULFreq, CONSTRAINED, 1, maxEDCHRL_1> RLAdditionInformationListSecULFreq;

typedef SequenceOf<PrimaryCPICHInfo, CONSTRAINED, 1, maxRL> RLRemovalInformationList;

typedef SequenceOf<PrimaryCPICHInfo, CONSTRAINED, 1, maxEDCHRL> RLRemovalInformationListSecULFreq;

enum SCCPCHChannelisationCodeVHCRValues {
	cc32_1 = 0,
	cc32_2 = 1,
	cc32_3 = 2,
	cc32_4 = 3,
	cc32_5 = 4,
	cc32_6 = 5,
	cc32_7 = 6,
	cc32_8 = 7,
	cc32_9 = 8,
	cc32_10 = 9,
	cc32_11 = 10,
	cc32_12 = 11,
	cc32_13 = 12,
	cc32_14 = 13,
	cc32_15 = 14,
	cc32_16 = 15,
	cc32_17 = 16,
	cc32_18 = 17,
	cc32_19 = 18,
	cc32_20 = 19,
	cc32_21 = 20,
	cc32_22 = 21,
	cc32_23 = 22,
	cc32_24 = 23,
	cc32_25 = 24,
	cc32_26 = 25,
	cc32_27 = 26,
	cc32_28 = 27,
	cc32_29 = 28,
	cc32_30 = 29,
	cc32_31 = 30,
	cc32_32 = 31,
};
typedef Enumerated<CONSTRAINED, 31> SCCPCHChannelisationCodeVHCR;

typedef SequenceOf<SCCPCHChannelisationCodeVHCR, CONSTRAINED, 1, 32> SCCPCHChannelisationCodeListVHCR;

class SCCPCHSystemInformation : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	SCCPCHSystemInformation(): Sequence(&theInfo) {}
};

class SecondaryCCPCHInfoLCRr4ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SecondaryCCPCHInfoLCRr4ext(): Sequence(&theInfo) {}
};

class SCCPCHSystemInformationLCRr4ext : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SCCPCHSystemInformationLCRr4ext(): Sequence(&theInfo) {}
};

class Tdd384 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Tdd384(): Sequence(&theInfo) {}
};

class Tdd768 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Tdd768(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class SecondaryCCPCHInfoHCRVHCRr7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SecondaryCCPCHInfoHCRVHCRr7(): Sequence(&theInfo) {}
};

class SCCPCHSystemInformationHCRVHCRr7 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	SCCPCHSystemInformationHCRVHCRr7(): Sequence(&theInfo) {}
};

typedef SequenceOf<SCCPCHSystemInformation, CONSTRAINED, 1, maxSCCPCH> SCCPCHSystemInformationList;

typedef SequenceOf<SCCPCHSystemInformationHCRVHCRr7, CONSTRAINED, 1, maxSCCPCH> SCCPCHSystemInformationListHCRVHCRr7;

typedef SequenceOf<SCCPCHSystemInformationLCRr4ext, CONSTRAINED, 1, maxSCCPCH> SCCPCHSystemInformationListLCRr4ext;

typedef Boolean Sttd_Indicator;

class Fdd : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

class Tdd384 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Tdd384(): Sequence(&theInfo) {}
};

class Tdd128 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Tdd128(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class SecondaryCCPCHInfoMBMSr6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SecondaryCCPCHInfoMBMSr6(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 3> AccessInfoPeriodCoefficient;

typedef Integer<CONSTRAINED, 0, 3> RepetitionPeriodCoefficient;

typedef Integer<CONSTRAINED, 7, 10> ModificationPeriodCoefficient;

enum MBMSTCTFPresenceValues {
	false = 0,
};
typedef Enumerated<CONSTRAINED, 0> MBMSTCTFPresence;

class MBMSMCCHConfigurationInfor6 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	MBMSMCCHConfigurationInfor6(): Sequence(&theInfo) {}
};

class FachCarryingMCCH : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	FachCarryingMCCH(): Sequence(&theInfo) {}
};

typedef SequenceOf<TransportFormatSet, CONSTRAINED, 1, maxFACHPCH> MBMSFACHCarryingMTCHList;

typedef Integer<CONSTRAINED, 0, 31> SchedulingPeriod_32_Offset;

typedef Integer<CONSTRAINED, 0, 63> SchedulingPeriod_64_Offset;

typedef Integer<CONSTRAINED, 0, 127> SchedulingPeriod_128_Offset;

typedef Integer<CONSTRAINED, 0, 255> SchedulingPeriod_256_Offset;

typedef Integer<CONSTRAINED, 0, 511> SchedulingPeriod_512_Offset;

typedef Integer<CONSTRAINED, 0, 1023> SchedulingPeriod_1024_Offset;

class MBMSMSCHSchedulingInfo : Choice {
private:
	static const void *choicesInfo[6];
public:
	static const Info theInfo;
	MBMSMSCHSchedulingInfo(): Choices(&theInfo) {}
};

class MBMSMSCHConfigurationInfor6 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	MBMSMSCHConfigurationInfor6(): Sequence(&theInfo) {}
};

class FachCarryingMSCH : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	FachCarryingMSCH(): Sequence(&theInfo) {}
};

class SCCPCHSystemInformationMBMSr6 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	SCCPCHSystemInformationMBMSr6(): Sequence(&theInfo) {}
};

typedef Boolean Sttd_Indicator;

typedef _Null ModQPSK;

typedef Integer<CONSTRAINED, -11, 4> Mod16QAM;

class Modulation : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Modulation(): Choices(&theInfo) {}
};

class Fdd : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

enum modulationValues {
	modQPSK = 0,
	mod16QAM = 1,
};
typedef Enumerated<CONSTRAINED, 1> modulation;

class Tdd384 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	Tdd384(): Sequence(&theInfo) {}
};

enum modulationValues {
	modQPSK = 0,
	mod16QAM = 1,
};
typedef Enumerated<CONSTRAINED, 1> modulation;

class Tdd768 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	Tdd768(): Sequence(&theInfo) {}
};

enum TimeSlotLCRextValues {
	ts7 = 0,
	spare3 = 1,
	spare2 = 2,
	spare1 = 3,
};
typedef Enumerated<CONSTRAINED, 3> TimeSlotLCRext;

enum modulationValues {
	modQPSK = 0,
	mod16QAM = 1,
};
typedef Enumerated<CONSTRAINED, 1> modulation;

class Tdd128 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	Tdd128(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[4];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class SecondaryCCPCHInfoMBMSr7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SecondaryCCPCHInfoMBMSr7(): Sequence(&theInfo) {}
};

class FachCarryingMCCH : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	FachCarryingMCCH(): Sequence(&theInfo) {}
};

class FachCarryingMSCH : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	FachCarryingMSCH(): Sequence(&theInfo) {}
};

class SCCPCHSystemInformationMBMSr7 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	SCCPCHSystemInformationMBMSr7(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 4> SubFrameNumber;

typedef _Null ModQPSK;

typedef Integer<CONSTRAINED, -11, 4> Cpich_SecCCPCH_PowerOffset;

class Mod16QAM : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Mod16QAM(): Sequence(&theInfo) {}
};

class Modulation : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Modulation(): Choices(&theInfo) {}
};

class SecondaryCCPCHFrameType2Info : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	SecondaryCCPCHFrameType2Info(): Sequence(&theInfo) {}
};

typedef Boolean Sttd_Indicator;

class SecondaryCCPCHInfoDiffMBMS : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	SecondaryCCPCHInfoDiffMBMS(): Sequence(&theInfo) {}
};

enum precodingWeightSetRestrictionValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> precodingWeightSetRestriction;

class SecondaryCellMIMOparametersFDDv950ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SecondaryCellMIMOparametersFDDv950ext(): Sequence(&theInfo) {}
};

typedef Boolean ServingCellChangeMACreset;

enum ServingCellChangeMsgTypeValues {
	radioBearerSetup = 0,
	radioBearerReconfiguration = 1,
	transportChannelReconfiguration = 2,
	physicalChannelReconfiguration = 3,
};
typedef Enumerated<CONSTRAINED, 3> ServingCellChangeMsgType;

typedef Integer<CONSTRAINED, 0, 3> ServingCellChangeTrId;

class ServingCellChangeParameters : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	ServingCellChangeParameters(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 4095> ActivationTimeSFN;

class SFNTimeInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SFNTimeInfo(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 7> SpecialBurstScheduling;

enum SpreadingFactorValues {
	sf4 = 0,
	sf8 = 1,
	sf16 = 2,
	sf32 = 3,
	sf64 = 4,
	sf128 = 5,
	sf256 = 6,
};
typedef Enumerated<CONSTRAINED, 6> SpreadingFactor;

class SPSInformationTDD128r8 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SPSInformationTDD128r8(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED> Sync_UL_CodesBitmap;

typedef Integer<CONSTRAINED, 0, 62> PrxUpPCHdes;

enum max_SYNC_UL_TransmissionsValues {
	tr1 = 0,
	tr2 = 1,
	tr4 = 2,
	tr8 = 3,
};
typedef Enumerated<CONSTRAINED, 3> max_SYNC_UL_Transmissions;

typedef Integer<CONSTRAINED, 0, 3> PowerRampStep;

class SYNCULProcedurer4 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SYNCULProcedurer4(): Sequence(&theInfo) {}
};

class SynchronisationParametersr4 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	SynchronisationParametersr4(): Sequence(&theInfo) {}
};

class TDDMBSFNTSlotInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TDDMBSFNTSlotInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<TDDMBSFNTSlotInfo, CONSTRAINED, 1, maxTS> TDDMBSFNInformation;

enum TFCControlDurationValues {
	tfc_cd1 = 0,
	tfc_cd2 = 1,
	tfc_cd4 = 2,
	tfc_cd8 = 3,
	tfc_cd16 = 4,
	tfc_cd24 = 5,
	tfc_cd32 = 6,
	tfc_cd48 = 7,
	tfc_cd64 = 8,
	tfc_cd128 = 9,
	tfc_cd192 = 10,
	tfc_cd256 = 11,
	tfc_cd512 = 12,
};
typedef Enumerated<CONSTRAINED, 12> TFCControlDuration;

typedef SequenceOf<TimeslotNumber, CONSTRAINED, 1, maxTS> TimeslotList;

typedef SequenceOf<TimeslotNumber, CONSTRAINED, 1, maxTS> Tdd384;

typedef SequenceOf<TimeslotNumberLCRr4, CONSTRAINED, 1, maxTS_LCR> Tdd128;

class TimeslotListr4 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	TimeslotListr4(): Choices(&theInfo) {}
};

enum mac_es_e_resetIndicatorValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> mac_es_e_resetIndicator;

class UL16QAMConfig : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	UL16QAMConfig(): Sequence(&theInfo) {}
};

class ULCCTrCH : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	ULCCTrCH(): Sequence(&theInfo) {}
};

class Tdd384 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd384(): Sequence(&theInfo) {}
};

class Tdd128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd128(): Sequence(&theInfo) {}
};

class TddOption : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	TddOption(): Choices(&theInfo) {}
};

class ULCCTrCHr4 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	ULCCTrCHr4(): Sequence(&theInfo) {}
};

class Tdd384 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd384(): Sequence(&theInfo) {}
};

class Tdd768 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd768(): Sequence(&theInfo) {}
};

typedef Boolean DynamicSFusage;

class ULTSChannelisationCodeListr7 : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	ULTSChannelisationCodeListr7(): Sequence(&theInfo) {}
};

typedef _Null NoMore;

typedef Integer<CONSTRAINED, 1, maxTS_LCR_1> NumAdditionalTimeslots;

class Consecutive : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Consecutive(): Sequence(&theInfo) {}
};

class SameAsLast : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SameAsLast(): Sequence(&theInfo) {}
};

class NewParameters : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	NewParameters(): Sequence(&theInfo) {}
};

class Parameters : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Parameters(): Choices(&theInfo) {}
};

class UplinkAdditionalTimeslotsLCRr7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UplinkAdditionalTimeslotsLCRr7(): Sequence(&theInfo) {}
};

typedef SequenceOf<UplinkAdditionalTimeslotsLCRr7, CONSTRAINED, 1, maxTS_LCR_1> TimeslotList;

class AdditionalTimeslots : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	AdditionalTimeslots(): Choices(&theInfo) {}
};

class MoreTimeslots : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	MoreTimeslots(): Choices(&theInfo) {}
};

class UplinkTimeslotsCodesLCRr7 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	UplinkTimeslotsCodesLCRr7(): Sequence(&theInfo) {}
};

class Tdd128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd128(): Sequence(&theInfo) {}
};

class TddOption : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	TddOption(): Choices(&theInfo) {}
};

class ULCCTrCHr7 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	ULCCTrCHr7(): Sequence(&theInfo) {}
};

typedef SequenceOf<ULCCTrCH, CONSTRAINED, 1, maxCCTrCH> ULCCTrCHList;

typedef SequenceOf<ULCCTrCHr4, CONSTRAINED, 1, maxCCTrCH> ULCCTrCHListr4;

typedef SequenceOf<ULCCTrCHr7, CONSTRAINED, 1, maxCCTrCH> ULCCTrCHListr7;

typedef SequenceOf<TFCSIdentityPlain, CONSTRAINED, 1, maxCCTrCH> ULCCTrCHListToRemove;

typedef Boolean Tfci_Existence;

class Fdd : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

typedef _Null Disabled;

typedef Integer<CONSTRAINED, 0, 63> ULTimingAdvance;

class Enabled : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Enabled(): Sequence(&theInfo) {}
};

class ULTimingAdvanceControl : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULTimingAdvanceControl(): Choices(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class ULDPCHInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULDPCHInfo(): Sequence(&theInfo) {}
};

class ULChannelRequirement : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULChannelRequirement(): Choices(&theInfo) {}
};

typedef Boolean Tfci_Existence;

class Fdd : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

typedef _Null Disabled;

class Tdd384 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Tdd384(): Sequence(&theInfo) {}
};

class Tdd128 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Tdd128(): Sequence(&theInfo) {}
};

class TddOption : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	TddOption(): Choices(&theInfo) {}
};

class Enabled : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Enabled(): Sequence(&theInfo) {}
};

class ULTimingAdvanceControlr4 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULTimingAdvanceControlr4(): Choices(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class ULDPCHInfor4 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULDPCHInfor4(): Sequence(&theInfo) {}
};

class ULChannelRequirementr4 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULChannelRequirementr4(): Choices(&theInfo) {}
};

typedef Boolean Tfci_Existence;

class Fdd : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class ULDPCHInfor5 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULDPCHInfor5(): Sequence(&theInfo) {}
};

class ULChannelRequirementr5 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULChannelRequirementr5(): Choices(&theInfo) {}
};

class ULChannelRequirementWithCPCHSetID : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	ULChannelRequirementWithCPCHSetID(): Choices(&theInfo) {}
};

class ULChannelRequirementWithCPCHSetIDr4 : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	ULChannelRequirementWithCPCHSetIDr4(): Choices(&theInfo) {}
};

class ULChannelRequirementWithCPCHSetIDr5 : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	ULChannelRequirementWithCPCHSetIDr5(): Choices(&theInfo) {}
};

class Fdd : Sequence {
private:
	static const void *itemsInfo[8];
	static bool itemsPres[8];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

typedef _Null Broadcast_UL_OL_PC_info;

class Tdd384 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Tdd384(): Sequence(&theInfo) {}
};

class Tdd128 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Tdd128(): Sequence(&theInfo) {}
};

class TddOption : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	TddOption(): Choices(&theInfo) {}
};

class IndividuallySignalled : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	IndividuallySignalled(): Sequence(&theInfo) {}
};

class Ul_OL_PC_Signalling : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Ul_OL_PC_Signalling(): Choices(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ULDPCHPowerControlInfor6 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULDPCHPowerControlInfor6(): Choices(&theInfo) {}
};

typedef Boolean Tfci_Existence;

class Present : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	Present(): Sequence(&theInfo) {}
};

typedef Boolean Tfci_Existence;

class NotPresent : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	NotPresent(): Sequence(&theInfo) {}
};

class DpdchPresence : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DpdchPresence(): Choices(&theInfo) {}
};

class Fdd : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class ULDPCHInfor6 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULDPCHInfor6(): Sequence(&theInfo) {}
};

typedef Boolean Tfci_Existence;

class Present : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	Present(): Sequence(&theInfo) {}
};

typedef Boolean Tfci_Existence;

class NotPresent : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	NotPresent(): Sequence(&theInfo) {}
};

class DpdchPresence : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DpdchPresence(): Choices(&theInfo) {}
};

class Fdd : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

typedef _Null Disabled;

class Tdd384 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	Tdd384(): Sequence(&theInfo) {}
};

class Tdd768 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Tdd768(): Sequence(&theInfo) {}
};

class Tdd128 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Tdd128(): Sequence(&theInfo) {}
};

class TddOption : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	TddOption(): Choices(&theInfo) {}
};

class Enabled : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Enabled(): Sequence(&theInfo) {}
};

class ULTimingAdvanceControlr7 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULTimingAdvanceControlr7(): Choices(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class ULDPCHInfor7 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULDPCHInfor7(): Sequence(&theInfo) {}
};

class ULDPCHPowerControlInfoPostFDD : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	ULDPCHPowerControlInfoPostFDD(): Sequence(&theInfo) {}
};

class ULDPCHInfoPostFDD : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	ULDPCHInfoPostFDD(): Sequence(&theInfo) {}
};

class ULDPCHPowerControlInfoPostTDD : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULDPCHPowerControlInfoPostTDD(): Sequence(&theInfo) {}
};

class ULDPCHInfoPostTDD : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	ULDPCHInfoPostTDD(): Sequence(&theInfo) {}
};

class ULDPCHPowerControlInfoPostTDDLCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULDPCHPowerControlInfoPostTDDLCRr4(): Sequence(&theInfo) {}
};

typedef _Null Disabled;

class Enabled : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Enabled(): Sequence(&theInfo) {}
};

class ULTimingAdvanceControlLCRr4 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULTimingAdvanceControlLCRr4(): Choices(&theInfo) {}
};

class ULDPCHInfoPostTDDLCRr4 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	ULDPCHInfoPostTDDLCRr4(): Sequence(&theInfo) {}
};

typedef _Null Fdd;

class Tdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ULEDCHInformationext : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULEDCHInformationext(): Choices(&theInfo) {}
};

enum mac_es_e_resetIndicatorValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> mac_es_e_resetIndicator;

class ULEDCHInformationr6 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	ULEDCHInformationr6(): Sequence(&theInfo) {}
};

enum mac_es_e_resetIndicatorValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> mac_es_e_resetIndicator;

class Fdd : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class ULEDCHInformationr7 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULEDCHInformationr7(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 63> SatID;

typedef Integer<CONSTRAINED, -2048, 2047> Doppler0thOrder;

typedef Integer<CONSTRAINED, -42, 21> Doppler1stOrder;

enum DopplerUncertaintyValues {
	hz12_5 = 0,
	hz25 = 1,
	hz50 = 2,
	hz100 = 3,
	hz200 = 4,
	spare3 = 5,
	spare2 = 6,
	spare1 = 7,
};
typedef Enumerated<CONSTRAINED, 7> DopplerUncertainty;

class ExtraDopplerInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ExtraDopplerInfo(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 1022> CodePhase;

typedef Integer<CONSTRAINED, 0, 19> IntegerCodePhase;

typedef Integer<CONSTRAINED, 0, 3> Gps_BitNumber;

enum CodePhaseSearchWindowValues {
	w1023 = 0,
	w1 = 1,
	w2 = 2,
	w3 = 3,
	w4 = 4,
	w6 = 5,
	w8 = 6,
	w12 = 7,
	w16 = 8,
	w24 = 9,
	w32 = 10,
	w48 = 11,
	w64 = 12,
	w96 = 13,
	w128 = 14,
	w192 = 15,
};
typedef Enumerated<CONSTRAINED, 15> CodePhaseSearchWindow;

typedef Integer<CONSTRAINED, 0, 31> Azimuth;

typedef Integer<CONSTRAINED, 0, 7> Elevation;

class AzimuthAndElevation : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	AzimuthAndElevation(): Sequence(&theInfo) {}
};

class AcquisitionSatInfo : Sequence {
private:
	static const void *itemsInfo[8];
	static bool itemsPres[8];
public:
	static const Info theInfo;
	AcquisitionSatInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<AcquisitionSatInfo, CONSTRAINED, 1, maxSat> AcquisitionSatInfoList;

typedef Integer<CONSTRAINED, 1, 16> MeasurementIdentity;

typedef SequenceOf<MeasurementIdentity, CONSTRAINED, 1, maxAdditionalMeas> AdditionalMeasurementIDList;

typedef Integer<CONSTRAINED, 1, 32> MeasurementIdentityr9;

typedef SequenceOf<MeasurementIdentityr9, CONSTRAINED, 1, maxAdditionalMeas> AdditionalMeasurementIDListr9;

typedef Integer<CONSTRAINED, 0, 3> DataID;

typedef BitString<CONSTRAINED, 16, 16> E;

typedef BitString<CONSTRAINED, 8, 8> T_oa;

typedef BitString<CONSTRAINED, 16, 16> DeltaI;

typedef BitString<CONSTRAINED, 16, 16> OmegaDot;

typedef BitString<CONSTRAINED, 8, 8> SatHealth;

typedef BitString<CONSTRAINED, 24, 24> A_Sqrt;

typedef BitString<CONSTRAINED, 24, 24> Omega0;

typedef BitString<CONSTRAINED, 24, 24> M0;

typedef BitString<CONSTRAINED, 24, 24> Omega;

typedef BitString<CONSTRAINED, 11, 11> Af0;

typedef BitString<CONSTRAINED, 11, 11> Af1;

class AlmanacSatInfo : Sequence {
private:
	static const void *itemsInfo[13];
	static bool itemsPres[13];
public:
	static const Info theInfo;
	AlmanacSatInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<AlmanacSatInfo, CONSTRAINED, 1, maxSat> AlmanacSatInfoList;

typedef BitString<CONSTRAINED, 2, 2> SbasAlmDataID;

typedef Integer<CONSTRAINED, 0, 63> SvID;

typedef BitString<CONSTRAINED, 8, 8> SbasAlmHealth;

typedef BitString<CONSTRAINED, 15, 15> SbasAlmXg;

typedef BitString<CONSTRAINED, 15, 15> SbasAlmYg;

typedef BitString<CONSTRAINED, 9, 9> SbasAlmZg;

typedef BitString<CONSTRAINED, 3, 3> SbasAlmXgdot;

typedef BitString<CONSTRAINED, 3, 3> SbasAlmYgDot;

typedef BitString<CONSTRAINED, 4, 4> SbasAlmZgDot;

typedef BitString<CONSTRAINED, 11, 11> SbasAlmTo;

class GANSSSATInfoAlmanacSBASecef : Sequence {
private:
	static const void *itemsInfo[10];
	static bool itemsPres[10];
public:
	static const Info theInfo;
	GANSSSATInfoAlmanacSBASecef(): Sequence(&theInfo) {}
};

typedef SequenceOf<GANSSSATInfoAlmanacSBASecef, CONSTRAINED, 1, maxGANSSSat> GANSSSATInfoAlmanacSBASecefList;

class ALMECEFsbasAlmanacSet : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ALMECEFsbasAlmanacSet(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED, 11, 11> GloAlmNA;

typedef BitString<CONSTRAINED, 5, 5> GloAlmnA;

typedef BitString<CONSTRAINED, 5, 5> GloAlmHA;

typedef BitString<CONSTRAINED, 21, 21> GloAlmLambdaA;

typedef BitString<CONSTRAINED, 21, 21> GloAlmTlambdaA;

typedef BitString<CONSTRAINED, 18, 18> GloAlmDeltaIA;

typedef BitString<CONSTRAINED, 22, 22> GloAkmDeltaTA;

typedef BitString<CONSTRAINED, 7, 7> GloAlmDeltaTdotA;

typedef BitString<CONSTRAINED, 15, 15> GloAlmEpsilonA;

typedef BitString<CONSTRAINED, 16, 16> GloAlmOmegaA;

typedef BitString<CONSTRAINED, 10, 10> GloAlmTauA;

typedef BitString<CONSTRAINED, 1, 1> GloAlmCA;

typedef BitString<CONSTRAINED, 2, 2> GloAlmMA;

class GANSSSATInfoAlmanacGLOkp : Sequence {
private:
	static const void *itemsInfo[13];
	static bool itemsPres[13];
public:
	static const Info theInfo;
	GANSSSATInfoAlmanacGLOkp(): Sequence(&theInfo) {}
};

typedef SequenceOf<GANSSSATInfoAlmanacGLOkp, CONSTRAINED, 1, maxGANSSSat> GANSSSATInfoAlmanacGLOkpList;

class ALMGlonassAlmanacSet : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ALMGlonassAlmanacSet(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 147> T_oa;

typedef Integer<CONSTRAINED, 0, 3> Iod_a;

typedef Integer<CONSTRAINED, 0, 63> SvId;

typedef BitString<CONSTRAINED, 11, 11> Ganss_alm_e;

typedef BitString<CONSTRAINED, 11, 11> Ganss_delta_I_alm;

typedef BitString<CONSTRAINED, 11, 11> Ganss_omegadot_alm;

typedef BitString<CONSTRAINED, 4, 4> Ganss_svhealth_alm;

typedef BitString<CONSTRAINED, 17, 17> Ganss_delta_a_sqrt_alm;

typedef BitString<CONSTRAINED, 16, 16> Ganss_omegazero_alm;

typedef BitString<CONSTRAINED, 16, 16> Ganss_m_zero_alm;

typedef BitString<CONSTRAINED, 16, 16> Ganss_omega_alm;

typedef BitString<CONSTRAINED, 14, 14> Ganss_af_zero_alm;

typedef BitString<CONSTRAINED, 11, 11> Ganss_af_one_alm;

class GANSSSATInfoAlmanacKp : Sequence {
private:
	static const void *itemsInfo[11];
	static bool itemsPres[11];
public:
	static const Info theInfo;
	GANSSSATInfoAlmanacKp(): Sequence(&theInfo) {}
};

typedef SequenceOf<GANSSSATInfoAlmanacKp, CONSTRAINED, 1, maxGANSSSat> GANSSSATInfoAlmanacKpList;

class ALMkeplerianParameters : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	ALMkeplerianParameters(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 147> T_oa;

typedef Integer<CONSTRAINED, 0, 63> SvID;

typedef BitString<CONSTRAINED, 11, 11> MidiAlmE;

typedef BitString<CONSTRAINED, 11, 11> MidiAlmDeltaI;

typedef BitString<CONSTRAINED, 11, 11> MidiAlmOmegaDot;

typedef BitString<CONSTRAINED, 17, 17> MidiAlmSqrtA;

typedef BitString<CONSTRAINED, 16, 16> MidiAlmOmega0;

typedef BitString<CONSTRAINED, 16, 16> MidiAlmOmega;

typedef BitString<CONSTRAINED, 16, 16> MidiAlmMo;

typedef BitString<CONSTRAINED, 11, 11> MidiAlmaf0;

typedef BitString<CONSTRAINED, 10, 10> MidiAlmaf1;

typedef BitString<CONSTRAINED, 1, 1> MidiAlmL1Health;

typedef BitString<CONSTRAINED, 1, 1> MidiAlmL2Health;

typedef BitString<CONSTRAINED, 1, 1> MidiAlmL5Health;

class GANSSSATInfoAlmanacMIDIkp : Sequence {
private:
	static const void *itemsInfo[13];
	static bool itemsPres[13];
public:
	static const Info theInfo;
	GANSSSATInfoAlmanacMIDIkp(): Sequence(&theInfo) {}
};

typedef SequenceOf<GANSSSATInfoAlmanacMIDIkp, CONSTRAINED, 1, maxGANSSSat> GANSSSATInfoAlmanacMIDIkpList;

class ALMMidiAlmanacSet : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ALMMidiAlmanacSet(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 147> T_oa;

typedef Integer<CONSTRAINED, 0, 63> SvID;

typedef BitString<CONSTRAINED, 16, 16> NavAlmE;

typedef BitString<CONSTRAINED, 16, 16> NavAlmDeltaI;

typedef BitString<CONSTRAINED, 16, 16> NavAlmOMEGADOT;

typedef BitString<CONSTRAINED, 8, 8> NavAlmSVHealth;

typedef BitString<CONSTRAINED, 24, 24> NavAlmSqrtA;

typedef BitString<CONSTRAINED, 24, 24> NavAlmOMEGAo;

typedef BitString<CONSTRAINED, 24, 24> NavAlmOmega;

typedef BitString<CONSTRAINED, 24, 24> NavAlmMo;

typedef BitString<CONSTRAINED, 11, 11> NavAlmaf0;

typedef BitString<CONSTRAINED, 11, 11> NavAlmaf1;

class GANSSSATInfoAlmanacNAVkp : Sequence {
private:
	static const void *itemsInfo[11];
	static bool itemsPres[11];
public:
	static const Info theInfo;
	GANSSSATInfoAlmanacNAVkp(): Sequence(&theInfo) {}
};

typedef SequenceOf<GANSSSATInfoAlmanacNAVkp, CONSTRAINED, 1, maxGANSSSat> GANSSSATInfoAlmanacNAVkpList;

class ALMNAVKeplerianSet : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ALMNAVKeplerianSet(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 147> T_oa;

typedef Integer<CONSTRAINED, 0, 63> SvID;

typedef BitString<CONSTRAINED, 8, 8> RedAlmDeltaA;

typedef BitString<CONSTRAINED, 7, 7> RedAlmOmega0;

typedef BitString<CONSTRAINED, 7, 7> RedAlmPhi0;

typedef BitString<CONSTRAINED, 1, 1> RedAlmL1Health;

typedef BitString<CONSTRAINED, 1, 1> RedAlmL2Health;

typedef BitString<CONSTRAINED, 1, 1> RedAlmL5Health;

class GANSSSATInfoAlmanacREDkp : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	GANSSSATInfoAlmanacREDkp(): Sequence(&theInfo) {}
};

typedef SequenceOf<GANSSSATInfoAlmanacREDkp, CONSTRAINED, 1, maxGANSSSat> GANSSSATInfoAlmanacREDkpList;

class ALMReducedKeplerianSet : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ALMReducedKeplerianSet(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 63> SvID;

typedef BitString<CONSTRAINED, 8, 8> SignalsAvailable;

class AuxInfoGANSSID1element : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	AuxInfoGANSSID1element(): Sequence(&theInfo) {}
};

typedef SequenceOf<AuxInfoGANSSID1element, CONSTRAINED, 1, maxGANSSSat> AuxInfoGANSSID1;

typedef Integer<CONSTRAINED, 0, 63> SvID;

typedef BitString<CONSTRAINED, 8, 8> SignalsAvailable;

typedef Integer<CONSTRAINED, -7, 13> ChannelNumber;

class AuxInfoGANSSID3element : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	AuxInfoGANSSID3element(): Sequence(&theInfo) {}
};

typedef SequenceOf<AuxInfoGANSSID3element, CONSTRAINED, 1,  maxGANSSSat> AuxInfoGANSSID3;

enum AverageRLCBufferPayloadValues {
	pla0 = 0,
	pla4 = 1,
	pla8 = 2,
	pla16 = 3,
	pla32 = 4,
	pla64 = 5,
	pla128 = 6,
	pla256 = 7,
	pla512 = 8,
	pla1024 = 9,
	pla2k = 10,
	pla4k = 11,
	pla8k = 12,
	pla16k = 13,
	pla32k = 14,
	pla64k = 15,
	pla128k = 16,
	pla256k = 17,
	pla512k = 18,
	pla1024k = 19,
	spare12 = 20,
	spare11 = 21,
	spare10 = 22,
	spare9 = 23,
	spare8 = 24,
	spare7 = 25,
	spare6 = 26,
	spare5 = 27,
	spare4 = 28,
	spare3 = 29,
	spare2 = 30,
	spare1 = 31,
};
typedef Enumerated<CONSTRAINED, 31> AverageRLCBufferPayload;

typedef Integer<CONSTRAINED, 0, 63> BadSatListItem;

typedef SequenceOf<BadSatListItem, CONSTRAINED, 1, maxSat> BadSatList;

typedef Integer<CONSTRAINED, 0, 63> DLTransportChannelBLER;

class BLERMeasurementResults : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	BLERMeasurementResults(): Sequence(&theInfo) {}
};

typedef SequenceOf<BLERMeasurementResults, CONSTRAINED, 1, maxTrCH> BLERMeasurementResultsList;

typedef SequenceOf<TransportChannelIdentity, CONSTRAINED, 1, maxTrCH> BLERTransChIdList;

enum BSICVerificationRequiredValues {
	required = 0,
	notRequired = 1,
};
typedef Enumerated<CONSTRAINED, 1> BSICVerificationRequired;

typedef Integer<CONSTRAINED, 0, maxCellMeas> VerifiedBSIC;

class BSICReported : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	BSICReported(): Choices(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 15> BurstStart;

typedef Integer<CONSTRAINED, 10, 25> BurstLength;

typedef Integer<CONSTRAINED, 1, 16> BurstFreq;

class BurstModeParameters : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	BurstModeParameters(): Sequence(&theInfo) {}
};

enum TriggeringCondition2Values {
	activeSetCellsOnly = 0,
	monitoredSetCellsOnly = 1,
	activeSetAndMonitoredSetCells = 2,
	detectedSetCellsOnly = 3,
	detectedSetAndMonitoredSetCells = 4,
};
typedef Enumerated<CONSTRAINED, 4> TriggeringCondition2;

typedef Integer<CONSTRAINED, 0, 29> ReportingRange;

class ForbiddenAffectCell : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ForbiddenAffectCell(): Choices(&theInfo) {}
};

typedef SequenceOf<ForbiddenAffectCell, CONSTRAINED, 1, maxCellMeas> ForbiddenAffectCellList;

typedef Integer<CONSTRAINED, 0, 20> W;

enum ReportDeactivationThresholdValues {
	notApplicable = 0,
	t1 = 1,
	t2 = 2,
	t3 = 3,
	t4 = 4,
	t5 = 5,
	t6 = 6,
	t7 = 7,
};
typedef Enumerated<CONSTRAINED, 7> ReportDeactivationThreshold;

enum ReportingAmountValues {
	ra1 = 0,
	ra2 = 1,
	ra4 = 2,
	ra8 = 3,
	ra16 = 4,
	ra32 = 5,
	ra64 = 6,
	ra_Infinity = 7,
};
typedef Enumerated<CONSTRAINED, 7> ReportingAmount;

enum ReportingIntervalValues {
	noPeriodicalreporting = 0,
	ri0_25 = 1,
	ri0_5 = 2,
	ri1 = 3,
	ri2 = 4,
	ri4 = 5,
	ri8 = 6,
	ri16 = 7,
};
typedef Enumerated<CONSTRAINED, 7> ReportingInterval;

class Event1a : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	Event1a(): Sequence(&theInfo) {}
};

enum TriggeringCondition1Values {
	activeSetCellsOnly = 0,
	monitoredSetCellsOnly = 1,
	activeSetAndMonitoredSetCells = 2,
};
typedef Enumerated<CONSTRAINED, 2> TriggeringCondition1;

class Event1b : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	Event1b(): Sequence(&theInfo) {}
};

enum ReplacementActivationThresholdValues {
	notApplicable = 0,
	t1 = 1,
	t2 = 2,
	t3 = 3,
	t4 = 4,
	t5 = 5,
	t6 = 6,
	t7 = 7,
};
typedef Enumerated<CONSTRAINED, 7> ReplacementActivationThreshold;

class Event1c : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	Event1c(): Sequence(&theInfo) {}
};

typedef _Null E1d;

typedef Integer<CONSTRAINED, -115, 165> ThresholdUsedFrequency;

class Event1e : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Event1e(): Sequence(&theInfo) {}
};

class Event1f : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Event1f(): Sequence(&theInfo) {}
};

typedef _Null E1g;

class IntraFreqEvent : Choice {
private:
	static const void *choicesInfo[9];
public:
	static const Info theInfo;
	IntraFreqEvent(): Choices(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 15> Hysteresis;

enum TimeToTriggerValues {
	ttt0 = 0,
	ttt10 = 1,
	ttt20 = 2,
	ttt40 = 3,
	ttt60 = 4,
	ttt80 = 5,
	ttt100 = 6,
	ttt120 = 7,
	ttt160 = 8,
	ttt200 = 9,
	ttt240 = 10,
	tt320 = 11,
	ttt640 = 12,
	ttt1280 = 13,
	ttt2560 = 14,
	ttt5000 = 15,
};
typedef Enumerated<CONSTRAINED, 15> TimeToTrigger;

enum MaxNumberOfReportingCellsType1Values {
	e1 = 0,
	e2 = 1,
	e3 = 2,
	e4 = 3,
	e5 = 4,
	e6 = 5,
};
typedef Enumerated<CONSTRAINED, 5> MaxNumberOfReportingCellsType1;

enum MaxNumberOfReportingCellsType3Values {
	viactCellsPlus1 = 0,
	viactCellsPlus2 = 1,
	viactCellsPlus3 = 2,
	viactCellsPlus4 = 3,
	viactCellsPlus5 = 4,
	viactCellsPlus6 = 5,
};
typedef Enumerated<CONSTRAINED, 5> MaxNumberOfReportingCellsType3;

enum MaxNumberOfReportingCellsType2Values {
	e1 = 0,
	e2 = 1,
	e3 = 2,
	e4 = 3,
	e5 = 4,
	e6 = 5,
	e7 = 6,
	e8 = 7,
	e9 = 8,
	e10 = 9,
	e11 = 10,
	e12 = 11,
};
typedef Enumerated<CONSTRAINED, 11> MaxNumberOfReportingCellsType2;

class ReportingCellStatus : Choice {
private:
	static const void *choicesInfo[14];
public:
	static const Info theInfo;
	ReportingCellStatus(): Choices(&theInfo) {}
};

class IntraFreqEventCriteria : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	IntraFreqEventCriteria(): Sequence(&theInfo) {}
};

typedef SequenceOf<IntraFreqEventCriteria, CONSTRAINED, 1, maxMeasEvent> IntraFreqEventCriteriaList;

class IntraFreqReportingCriteria : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IntraFreqReportingCriteria(): Sequence(&theInfo) {}
};

enum ReportingIntervalLongValues {
	ril0 = 0,
	ril0_25 = 1,
	ril0_5 = 2,
	ril1 = 3,
	ril2 = 4,
	ril3 = 5,
	ril4 = 6,
	ril6 = 7,
	ril8 = 8,
	ril12 = 9,
	ril16 = 10,
	ril20 = 11,
	ril24 = 12,
	ril28 = 13,
	ril32 = 14,
	ril64 = 15,
};
typedef Enumerated<CONSTRAINED, 15> ReportingIntervalLong;

class PeriodicalReportingCriteria : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PeriodicalReportingCriteria(): Sequence(&theInfo) {}
};

class CellDCHReportCriteria : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CellDCHReportCriteria(): Choices(&theInfo) {}
};

class ForbiddenAffectCellLCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ForbiddenAffectCellLCRr4(): Sequence(&theInfo) {}
};

typedef SequenceOf<ForbiddenAffectCellLCRr4, CONSTRAINED, 1, maxCellMeas> ForbiddenAffectCellListLCRr4;

class Event1aLCRr4 : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	Event1aLCRr4(): Sequence(&theInfo) {}
};

class Event1bLCRr4 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	Event1bLCRr4(): Sequence(&theInfo) {}
};

typedef _Null E1d;

typedef _Null E1g;

class IntraFreqEventLCRr4 : Choice {
private:
	static const void *choicesInfo[9];
public:
	static const Info theInfo;
	IntraFreqEventLCRr4(): Choices(&theInfo) {}
};

class IntraFreqEventCriteriaLCRr4 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	IntraFreqEventCriteriaLCRr4(): Sequence(&theInfo) {}
};

typedef SequenceOf<IntraFreqEventCriteriaLCRr4, CONSTRAINED, 1, maxMeasEvent> IntraFreqEventCriteriaListLCRr4;

class IntraFreqReportingCriteriaLCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IntraFreqReportingCriteriaLCRr4(): Sequence(&theInfo) {}
};

class CellDCHReportCriteriaLCRr4 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CellDCHReportCriteriaLCRr4(): Choices(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, maxMeasOccasionPattern_1> PatternIdentifier;

enum statusFlagValues {
	activate = 0,
	deactivate = 1,
};
typedef Enumerated<CONSTRAINED, 1> statusFlag;

typedef BitString<CONSTRAINED, 5, 5> MeasurementPurpose;

typedef Integer<CONSTRAINED, 1, 9> Measurement_Occasion_Coeff;

typedef Integer<CONSTRAINED, 0, 511> Measurement_Occasion_Offset;

typedef Integer<CONSTRAINED, 1, 512> Measurement_Occasion_Length;

typedef BitString<CONSTRAINED, 7, 7> TimeslotBitmap;

class MeasurementOccasionPatternParameter : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	MeasurementOccasionPatternParameter(): Sequence(&theInfo) {}
};

class CellDCHMeasOccasionPatternLCR : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CellDCHMeasOccasionPatternLCR(): Sequence(&theInfo) {}
};

typedef SequenceOf<CellDCHMeasOccasionPatternLCR, CONSTRAINED, 1, maxMeasOccasionPattern> CellDCHMeasOccasionSequenceList;

class CellDCHMeasOccasionInfoTDD128r9 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellDCHMeasOccasionInfoTDD128r9(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, -20, 20> CellIndividualOffset;

typedef Integer<CONSTRAINED, 0, 960> Accuracy40;

typedef Integer<CONSTRAINED, 0, 150> Accuracy256;

typedef Integer<CONSTRAINED, 0, 15> Accuracy2560;

class ReferenceTimeDifferenceToCell : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	ReferenceTimeDifferenceToCell(): Choices(&theInfo) {}
};

typedef Boolean ReadSFN_Indicator;

typedef Boolean Tx_DiversityIndicator;

class Fdd : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

class TimeslotInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TimeslotInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<TimeslotInfo, CONSTRAINED, 1, maxTS> TimeslotInfoList;

typedef Boolean ReadSFN_Indicator;

class Tdd : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class CellInfo : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	CellInfo(): Sequence(&theInfo) {}
};

typedef Boolean ReadSFN_Indicator;

typedef Boolean Tx_DiversityIndicator;

class Fdd : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

typedef SequenceOf<TimeslotInfo, CONSTRAINED, 1, maxTS> Tdd384;

class TimeslotInfoLCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	TimeslotInfoLCRr4(): Sequence(&theInfo) {}
};

typedef SequenceOf<TimeslotInfoLCRr4, CONSTRAINED, 1, maxTS_LCR> Tdd128;

class TimeslotInfoListr4 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	TimeslotInfoListr4(): Choices(&theInfo) {}
};

typedef Boolean ReadSFN_Indicator;

class Tdd : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class CellInfor4 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	CellInfor4(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, -50, 50> QOffsetSN;

typedef _Null NotUsed;

enum TemporaryOffset1Values {
	to3 = 0,
	to6 = 1,
	to9 = 2,
	to12 = 3,
	to15 = 4,
	to18 = 5,
	to21 = 6,
	infinite = 7,
};
typedef Enumerated<CONSTRAINED, 7> TemporaryOffset1;

class PenaltyTimeRSCP : Choice {
private:
	static const void *choicesInfo[7];
public:
	static const Info theInfo;
	PenaltyTimeRSCP(): Choices(&theInfo) {}
};

class HCSCellReselectInformationRSCP : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HCSCellReselectInformationRSCP(): Sequence(&theInfo) {}
};

class HCSNeighbouringCellInformationRSCP : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	HCSNeighbouringCellInformationRSCP(): Sequence(&theInfo) {}
};

class Fdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class Gsm : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Gsm(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class CellSelectReselectInfoMCRSCP : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CellSelectReselectInfoMCRSCP(): Sequence(&theInfo) {}
};

class CellInfoLCRr8ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellInfoLCRr8ext(): Sequence(&theInfo) {}
};

typedef Boolean ReadSFN_Indicator;

typedef Boolean Tx_DiversityIndicator;

class Fdd : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

typedef Boolean ReadSFN_Indicator;

class Tdd : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class CellInfor9 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CellInfor9(): Sequence(&theInfo) {}
};

typedef Boolean ReadSFN_Indicator;

typedef Boolean Tx_DiversityIndicator;

class Fdd : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

typedef Boolean ReadSFN_Indicator;

class Tdd : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class Fdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class Gsm : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Gsm(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class CellSelectReselectInfoSIB1112RSCP : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	CellSelectReselectInfoSIB1112RSCP(): Sequence(&theInfo) {}
};

class CellInfoSIRSCP : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CellInfoSIRSCP(): Sequence(&theInfo) {}
};

typedef SequenceOf<TimeslotInfoLCRr4, CONSTRAINED, 1, maxTS_LCR> TimeslotInfoListLCRr4;

typedef Boolean ReadSFN_Indicator;

class CellInfoSIRSCPLCRr4 : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	CellInfoSIRSCPLCRr4(): Sequence(&theInfo) {}
};

typedef Boolean ReadSFN_Indicator;

typedef Boolean Tx_DiversityIndicator;

class Fdd : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

typedef Boolean ReadSFN_Indicator;

class Tdd : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class Fdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class Gsm : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Gsm(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class CellSelectReselectInfoSIB1112ECN0 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CellSelectReselectInfoSIB1112ECN0(): Sequence(&theInfo) {}
};

class CellInfoSIECN0 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CellInfoSIECN0(): Sequence(&theInfo) {}
};

typedef Boolean ReadSFN_Indicator;

class CellInfoSIECN0LCRr4 : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	CellInfoSIECN0LCRr4(): Sequence(&theInfo) {}
};

typedef Boolean ReadSFN_Indicator;

typedef Boolean Tx_DiversityIndicator;

class Fdd : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

typedef Boolean ReadSFN_Indicator;

class Tdd : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class Fdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class Gsm : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Gsm(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class CellSelectReselectInfoSIB1112HCSRSCP : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CellSelectReselectInfoSIB1112HCSRSCP(): Sequence(&theInfo) {}
};

class CellInfoSIHCSRSCP : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CellInfoSIHCSRSCP(): Sequence(&theInfo) {}
};

typedef Boolean ReadSFN_Indicator;

class CellInfoSIHCSRSCPLCRr4 : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	CellInfoSIHCSRSCPLCRr4(): Sequence(&theInfo) {}
};

typedef Boolean ReadSFN_Indicator;

typedef Boolean Tx_DiversityIndicator;

class Fdd : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

typedef Boolean ReadSFN_Indicator;

class Tdd : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

typedef _Null NotUsed;

enum TemporaryOffset2Values {
	to2 = 0,
	to3 = 1,
	to4 = 2,
	to6 = 3,
	to8 = 4,
	to10 = 5,
	to12 = 6,
	infinite = 7,
};
typedef Enumerated<CONSTRAINED, 7> TemporaryOffset2;

class TemporaryOffsetList : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TemporaryOffsetList(): Sequence(&theInfo) {}
};

class PenaltyTimeECN0 : Choice {
private:
	static const void *choicesInfo[7];
public:
	static const Info theInfo;
	PenaltyTimeECN0(): Choices(&theInfo) {}
};

class HCSCellReselectInformationECN0 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HCSCellReselectInformationECN0(): Sequence(&theInfo) {}
};

class HCSNeighbouringCellInformationECN0 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	HCSNeighbouringCellInformationECN0(): Sequence(&theInfo) {}
};

class Fdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class Gsm : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Gsm(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class CellSelectReselectInfoSIB1112HCSECN0 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	CellSelectReselectInfoSIB1112HCSECN0(): Sequence(&theInfo) {}
};

class CellInfoSIHCSECN0 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CellInfoSIHCSECN0(): Sequence(&theInfo) {}
};

typedef Boolean ReadSFN_Indicator;

class CellInfoSIHCSECN0LCRr4 : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	CellInfoSIHCSECN0LCRr4(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 16777215> SFNSFNObsTimeDifference1;

typedef Integer<CONSTRAINED, 0, 65535> SFNSFNObsTimeDifference2;

class SFNSFNObsTimeDifference : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	SFNSFNObsTimeDifference(): Choices(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 15> CountC_SFN_High;

typedef Integer<CONSTRAINED, 0, 255> Off;

class CountCSFNFramedifference : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CountCSFNFramedifference(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 38399> Tm;

class Fdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class CellSynchronisationInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellSynchronisationInfo(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 63> CPICHEcN0;

typedef Integer<CONSTRAINED, 0, 127> CPICHRSCP;

typedef Integer<CONSTRAINED, 46, 173> Pathloss;

class Fdd : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 127> PrimaryCCPCHRSCP;

typedef Integer<CONSTRAINED, 0, 127> TimeslotISCP;

typedef SequenceOf<TimeslotISCP, CONSTRAINED, 1, maxTS> TimeslotISCPList;

class Tdd : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class CellMeasuredResults : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CellMeasuredResults(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, -5, -1> DeltaRSCP;

class DeltaRSCPPerCell : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DeltaRSCPPerCell(): Sequence(&theInfo) {}
};

class Fdd : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class CellMeasuredResultsr9 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	CellMeasuredResultsr9(): Sequence(&theInfo) {}
};

enum csgMemberIndicationValues {
	member = 0,
};
typedef Enumerated<CONSTRAINED, 0> csgMemberIndication;

class CellMeasuredResultsv920ext : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellMeasuredResultsv920ext(): Sequence(&theInfo) {}
};

typedef SequenceOf<PrimaryCPICHInfo, CONSTRAINED, 1, maxCellMeas> Fdd;

typedef SequenceOf<PrimaryCCPCHInfo, CONSTRAINED, 1, maxCellMeas> Tdd;

class CellMeasurementEventResults : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CellMeasurementEventResults(): Choices(&theInfo) {}
};

typedef SequenceOf<PrimaryCPICHInfo, CONSTRAINED, 1,  maxCellMeasOnSecULFreq> Fdd;

typedef _Null Spare;

class CellMeasurementEventResultsOnSecUlFreq : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CellMeasurementEventResultsOnSecUlFreq(): Choices(&theInfo) {}
};

typedef SequenceOf<PrimaryCCPCHInfoLCRr4, CONSTRAINED, 1, maxCellMeas> CellMeasurementEventResultsLCRr4;

enum SFNSFNOTDTypeValues {
	noReport = 0,
	type1 = 1,
	type2 = 2,
};
typedef Enumerated<CONSTRAINED, 2> SFNSFNOTDType;

typedef Boolean CellIdentity_reportingIndicator;

typedef Boolean CellSynchronisationInfoReportingIndicator;

typedef Boolean Cpich_Ec_N0_reportingIndicator;

typedef Boolean Cpich_RSCP_reportingIndicator;

typedef Boolean Pathloss_reportingIndicator;

class Fdd : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

typedef Boolean TimeslotISCP_reportingIndicator;

typedef Boolean ProposedTGSN_ReportingRequired;

typedef Boolean PrimaryCCPCH_RSCP_reportingIndicator;

typedef Boolean Pathloss_reportingIndicator;

class Tdd : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class CellReportingQuantities : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CellReportingQuantities(): Sequence(&theInfo) {}
};

class Fdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class Gsm : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Gsm(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class CellSelectReselectInfoSIB1112 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	CellSelectReselectInfoSIB1112(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, -2, -1> DeltaQrxlevmin;

class CellSelectReselectInfov590ext : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellSelectReselectInfov590ext(): Sequence(&theInfo) {}
};

class CellSelectReselectInfoPCHFACHv5b0ext : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	CellSelectReselectInfoPCHFACHv5b0ext(): Sequence(&theInfo) {}
};

class CellSelectReselectInfoTreselectionScalingv5c0ext : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CellSelectReselectInfoTreselectionScalingv5c0ext(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, maxCellMeas_1> InterFreqCellID;

typedef SequenceOf<InterFreqCellID, CONSTRAINED, 1, maxCellMeas> CellsForInterFreqMeasList;

typedef Integer<CONSTRAINED, 0, maxCellMeas_1> InterRATCellID;

typedef SequenceOf<InterRATCellID, CONSTRAINED, 1, maxCellMeas> CellsForInterRATMeasList;

typedef Integer<CONSTRAINED, 0, maxCellMeas_1> IntraFreqCellID;

typedef SequenceOf<IntraFreqCellID, CONSTRAINED, 1, maxCellMeas> CellsForIntraFreqMeasList;

typedef Integer<CONSTRAINED, 0, maxCellMeasOnSecULFreq_1> IntraFreqCellIDOnSecULFreq;

typedef SequenceOf<IntraFreqCellIDOnSecULFreq, CONSTRAINED, 1, maxCellMeasOnSecULFreq> CellsForIntraFreqMeasListOnSecULFreq;

class CellToReport : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellToReport(): Sequence(&theInfo) {}
};

typedef SequenceOf<CellToReport, CONSTRAINED, 1, maxCellMeas> CellToReportList;

typedef BitString<CONSTRAINED, 11, 11> CnavToc;

typedef BitString<CONSTRAINED, 11, 11> CnavTop;

typedef BitString<CONSTRAINED, 5, 5> CnavURA0;

typedef BitString<CONSTRAINED, 3, 3> CnavURA1;

typedef BitString<CONSTRAINED, 3, 3> CnavURA2;

typedef BitString<CONSTRAINED, 10, 10> CnavAf2;

typedef BitString<CONSTRAINED, 20, 20> CnavAf1;

typedef BitString<CONSTRAINED, 26, 26> CnavAf0;

typedef BitString<CONSTRAINED, 13, 13> CnavTgd;

typedef BitString<CONSTRAINED, 13, 13> CnavISCl1cp;

typedef BitString<CONSTRAINED, 13, 13> CnavISCl1cd;

typedef BitString<CONSTRAINED, 13, 13> CnavISCl1ca;

typedef BitString<CONSTRAINED, 13, 13> CnavISCl2c;

typedef BitString<CONSTRAINED, 13, 13> CnavISCl5i5;

typedef BitString<CONSTRAINED, 13, 13> CnavISCl5q5;

class CNAVclockModel : Sequence {
private:
	static const void *itemsInfo[15];
	static bool itemsPres[15];
public:
	static const Info theInfo;
	CNAVclockModel(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 512> NumberOfPSCs;

class Fdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

typedef _Null Tdd;

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class CSGCellInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CSGCellInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<CSGCellInfo, CONSTRAINED, 1, maxMeasCSGRange> CSGCellInfoList;

class CSGInterFreqCellInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CSGInterFreqCellInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<CSGInterFreqCellInfo, CONSTRAINED, 1, maxFreq> CSGInterFreqCellInfoList;


enum uTRACSGProximityDetecValues {
	enable = 0,
};
typedef Enumerated<CONSTRAINED, 0> uTRACSGProximityDetec;

enum e_UTRACSGProximityDetecValues {
	enable = 0,
};
typedef Enumerated<CONSTRAINED, 0> e_UTRACSGProximityDetec;

class CSGProximityDetection : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CSGProximityDetection(): Sequence(&theInfo) {}
};

enum cSGproximityIndValues {
	entering = 0,
	leaving = 1,
};
typedef Enumerated<CONSTRAINED, 1> cSGproximityInd;

class UTRA : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UTRA(): Sequence(&theInfo) {}
};

class E_UTRA : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	E_UTRA(): Sequence(&theInfo) {}
};

class RadioAccessTechnology : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RadioAccessTechnology(): Choices(&theInfo) {}
};

class CSGProximityIndication : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CSGProximityIndication(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 7> GANSSSignalId;

typedef BitString<CONSTRAINED, 1, 1024> Data_bits;

class DataBitAssistance : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DataBitAssistance(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 63> SatID;

typedef SequenceOf<DataBitAssistance, CONSTRAINED, 1, maxSgnType> DataBitAssistanceSgnList;

class DataBitAssistanceSat : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DataBitAssistanceSat(): Sequence(&theInfo) {}
};

typedef SequenceOf<DataBitAssistanceSat, CONSTRAINED, 1, maxGANSSSat> DataBitAssistanceList;

typedef Integer<CONSTRAINED, -127, 127> DeltaPRC;

typedef Integer<CONSTRAINED, -7, 7> DeltaRRC;

typedef BitString<CONSTRAINED, 11, 11> B1;

typedef BitString<CONSTRAINED, 10, 10> B2;

class DeltaUT1 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DeltaUT1(): Sequence(&theInfo) {}
};

enum GANSSStatusHealthValues {
	udre_scale_1dot0 = 0,
	udre_scale_0dot75 = 1,
	udre_scale_0dot5 = 2,
	udre_scale_0dot3 = 3,
	udre_scale_0dot2 = 4,
	udre_scale_0dot1 = 5,
	no_data = 6,
	invalid_data = 7,
};
typedef Enumerated<CONSTRAINED, 7> GANSSStatusHealth;

typedef Integer<CONSTRAINED, 0, 63> SatId;

typedef BitString<CONSTRAINED, 10, 10> Iode_dganss;

enum UDREValues {
	lessThan1 = 0,
	between1_and_4 = 1,
	between4_and_8 = 2,
	over8 = 3,
};
typedef Enumerated<CONSTRAINED, 3> UDRE;

class DGANSSSignalInformation : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DGANSSSignalInformation(): Sequence(&theInfo) {}
};

typedef SequenceOf<DGANSSSignalInformation, CONSTRAINED, 1, maxGANSSSat> DGANSSSignalInformationList;

class DGANSSInfo : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DGANSSInfo(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 63> SatId;

typedef BitString<CONSTRAINED, 10, 10> Iode_dganss;

enum UDREGrowthRateValues {
	growth_1_5 = 0,
	growth_2 = 1,
	growth_4 = 2,
	growth_6 = 3,
	growth_8 = 4,
	growth_10 = 5,
	growth_12 = 6,
	growth_16 = 7,
};
typedef Enumerated<CONSTRAINED, 7> UDREGrowthRate;

enum UDREValidityTimeValues {
	val_20sec = 0,
	val_40sec = 1,
	val_80sec = 2,
	val_160sec = 3,
	val_320sec = 4,
	val_640sec = 5,
	val_1280sec = 6,
	val_2560sec = 7,
};
typedef Enumerated<CONSTRAINED, 7> UDREValidityTime;

class DGANSSSignalInformationr9 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	DGANSSSignalInformationr9(): Sequence(&theInfo) {}
};

typedef SequenceOf<DGANSSSignalInformationr9, CONSTRAINED, 1, maxGANSSSat> DGANSSSignalInformationListr9;

class DGANSSInfor9 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DGANSSInfor9(): Sequence(&theInfo) {}
};

class DGANSSSignalInformationv920ext : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DGANSSSignalInformationv920ext(): Sequence(&theInfo) {}
};

typedef SequenceOf<DGANSSSignalInformationv920ext, CONSTRAINED, 1, maxGANSSSat> DGANSSSignalInformationListv920ext;

class DGANSSInfov920ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DGANSSInfov920ext(): Sequence(&theInfo) {}
};

typedef SequenceOf<DGANSSInfo, CONSTRAINED, 1, maxSgnType> DGANSSInfoList;

typedef SequenceOf<DGANSSInfor9, CONSTRAINED, 1, maxSgnType> DGANSSInfoListr9;

typedef SequenceOf<DGANSSInfov920ext, CONSTRAINED, 1, maxSgnType> DGANSSInfoListv920ext;

typedef BitString<CONSTRAINED, 8, 8> DGANSSSigIdReq;

typedef Integer<CONSTRAINED, 0, 255> IODE;

typedef Integer<CONSTRAINED, -2047, 2047> PRC;

typedef Integer<CONSTRAINED, -127, 127> RRC;

class DGPSCorrectionSatInfo : Sequence {
private:
	static const void *itemsInfo[9];
	static bool itemsPres[9];
public:
	static const Info theInfo;
	DGPSCorrectionSatInfo(): Sequence(&theInfo) {}
};

class DGPSCorrectionSatInfor9 : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	DGPSCorrectionSatInfor9(): Sequence(&theInfo) {}
};

class DGPSCorrectionSatInfov920ext : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DGPSCorrectionSatInfov920ext(): Sequence(&theInfo) {}
};

typedef SequenceOf<DGPSCorrectionSatInfo, CONSTRAINED, 1, maxSat> DGPSCorrectionSatInfoList;

typedef SequenceOf<DGPSCorrectionSatInfor9, CONSTRAINED, 1, maxSat> DGPSCorrectionSatInfoListr9;

typedef SequenceOf<DGPSCorrectionSatInfov920ext, CONSTRAINED, 1, maxSat> DGPSCorrectionSatInfoListv920ext;

enum DiffCorrectionStatusValues {
	udre_1_0 = 0,
	udre_0_75 = 1,
	udre_0_5 = 2,
	udre_0_3 = 3,
	udre_0_2 = 4,
	udre_0_1 = 5,
	noData = 6,
	invalidData = 7,
};
typedef Enumerated<CONSTRAINED, 7> DiffCorrectionStatus;

enum latitudeSignValues {
	north = 0,
	south = 1,
};
typedef Enumerated<CONSTRAINED, 1> latitudeSign;

typedef Integer<CONSTRAINED, 0, 8388607> Latitude;

typedef Integer<CONSTRAINED, -8388608, 8388607> Longitude;

class EllipsoidPoint : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	EllipsoidPoint(): Sequence(&theInfo) {}
};

enum latitudeSignValues {
	north = 0,
	south = 1,
};
typedef Enumerated<CONSTRAINED, 1> latitudeSign;

typedef Integer<CONSTRAINED, 0, 8388607> Latitude;

typedef Integer<CONSTRAINED, -8388608, 8388607> Longitude;

enum altitudeDirectionValues {
	height = 0,
	depth = 1,
};
typedef Enumerated<CONSTRAINED, 1> altitudeDirection;

typedef Integer<CONSTRAINED, 0, 32767> Altitude;

class EllipsoidPointAltitude : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	EllipsoidPointAltitude(): Sequence(&theInfo) {}
};

enum latitudeSignValues {
	north = 0,
	south = 1,
};
typedef Enumerated<CONSTRAINED, 1> latitudeSign;

typedef Integer<CONSTRAINED, 0, 8388607> Latitude;

typedef Integer<CONSTRAINED, -8388608, 8388607> Longitude;

enum altitudeDirectionValues {
	height = 0,
	depth = 1,
};
typedef Enumerated<CONSTRAINED, 1> altitudeDirection;

typedef Integer<CONSTRAINED, 0, 32767> Altitude;

typedef Integer<CONSTRAINED, 0, 127> UncertaintySemiMajor;

typedef Integer<CONSTRAINED, 0, 127> UncertaintySemiMinor;

typedef Integer<CONSTRAINED, 0, 89> OrientationMajorAxis;

typedef Integer<CONSTRAINED, 0, 127> UncertaintyAltitude;

typedef Integer<CONSTRAINED, 0, 100> Confidence;

class EllipsoidPointAltitudeEllipsoide : Sequence {
private:
	static const void *itemsInfo[10];
	static bool itemsPres[10];
public:
	static const Info theInfo;
	EllipsoidPointAltitudeEllipsoide(): Sequence(&theInfo) {}
};

enum latitudeSignValues {
	north = 0,
	south = 1,
};
typedef Enumerated<CONSTRAINED, 1> latitudeSign;

typedef Integer<CONSTRAINED, 0, 8388607> Latitude;

typedef Integer<CONSTRAINED, -8388608, 8388607> Longitude;

typedef Integer<CONSTRAINED, 0, 127> UncertaintyCode;

class EllipsoidPointUncertCircle : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	EllipsoidPointUncertCircle(): Sequence(&theInfo) {}
};

enum latitudeSignValues {
	north = 0,
	south = 1,
};
typedef Enumerated<CONSTRAINED, 1> latitudeSign;

typedef Integer<CONSTRAINED, 0, 8388607> Latitude;

typedef Integer<CONSTRAINED, -8388608, 8388607> Longitude;

typedef Integer<CONSTRAINED, 0, 127> UncertaintySemiMajor;

typedef Integer<CONSTRAINED, 0, 127> UncertaintySemiMinor;

typedef Integer<CONSTRAINED, 0, 89> OrientationMajorAxis;

typedef Integer<CONSTRAINED, 0, 100> Confidence;

class EllipsoidPointUncertEllipse : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	EllipsoidPointUncertEllipse(): Sequence(&theInfo) {}
};

enum EnvironmentCharacterisationValues {
	possibleHeavyMultipathNLOS = 0,
	lightMultipathLOS = 1,
	notDefined = 2,
	spare = 3,
};
typedef Enumerated<CONSTRAINED, 3> EnvironmentCharacterisation;

typedef SequenceOf<EUTRAPhysicalCellIdentity, CONSTRAINED, 1, maxReportedEUTRACellPerFreq> ReportedCells;

class EutraEventResult : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	EutraEventResult(): Sequence(&theInfo) {}
};

typedef SequenceOf<EutraEventResult, CONSTRAINED, 1, maxReportedEUTRAFreqs> EutraEventResultList;

enum EventIDInterRATValues {
	e3a = 0,
	e3b = 1,
	e3c = 2,
	e3d = 3,
};
typedef Enumerated<CONSTRAINED, 3> EventIDInterRAT;

class EUTRAEventResults : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	EUTRAEventResults(): Sequence(&theInfo) {}
};

enum EUTRAMeasurementBandwidthValues {
	mbw6 = 0,
	mbw15 = 1,
	mbw25 = 2,
	mbw50 = 3,
	mbw75 = 4,
	mbw100 = 5,
};
typedef Enumerated<CONSTRAINED, 5> EUTRAMeasurementBandwidth;

typedef Integer<CONSTRAINED, 0, maxPrio_1> Priority;

typedef Integer<CONSTRAINED, -70, -22> QRxLevMinEUTRA;

typedef Integer<CONSTRAINED, 0, 31> ThreshXhigh;

typedef Integer<CONSTRAINED, 0, 31> ThreshXlow;

typedef Boolean EutraDetection;

class EUTRAFrequencyAndPriorityInfo : Sequence {
private:
	static const void *itemsInfo[8];
	static bool itemsPres[8];
public:
	static const Info theInfo;
	EUTRAFrequencyAndPriorityInfo(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, -34, -3> QqualMinEUTRA;

typedef Integer<CONSTRAINED, 0, 31> ThreshXhigh2;

typedef Integer<CONSTRAINED, 0, 31> ThreshXlow2;

class EUTRAFrequencyAndPriorityInfov920ext : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	EUTRAFrequencyAndPriorityInfov920ext(): Sequence(&theInfo) {}
};

typedef SequenceOf<EUTRAFrequencyAndPriorityInfo, CONSTRAINED, 1, maxNumEUTRAFreqs> EUTRAFrequencyAndPriorityInfoList;

typedef SequenceOf<EUTRAFrequencyAndPriorityInfov920ext, CONSTRAINED, 1, maxNumEUTRAFreqs> EUTRAFrequencyAndPriorityInfoListv920ext;

typedef _Null RemoveAllFrequencies;

typedef SequenceOf<EARFCN, CONSTRAINED, 1, maxNumEUTRAFreqs> RemoveSomeFrequencies;

typedef _Null RemoveNoFrequencies;

class EUTRAFrequencyRemoval : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	EUTRAFrequencyRemoval(): Choices(&theInfo) {}
};

class EUTRAFrequencyInfo : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	EUTRAFrequencyInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<EUTRAFrequencyInfo, CONSTRAINED, 1, maxNumEUTRAFreqs> EUTRAFrequencyInfoList;

class EUTRAFrequencyList : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	EUTRAFrequencyList(): Sequence(&theInfo) {}
};

class EUTRASIAcquisition : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	EUTRASIAcquisition(): Sequence(&theInfo) {}
};

class EUTRAFrequencyListr9 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	EUTRAFrequencyListr9(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 97> RSRP;

typedef Integer<CONSTRAINED, 0, 33> RSRQ;

class EUTRAMeasuredCells : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	EUTRAMeasuredCells(): Sequence(&theInfo) {}
};

typedef SequenceOf<EUTRAMeasuredCells, CONSTRAINED, 1, maxReportedEUTRACellPerFreq> MeasuredEUTRACells;

class EutraMeasuredResult : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	EutraMeasuredResult(): Sequence(&theInfo) {}
};

typedef SequenceOf<EutraMeasuredResult, CONSTRAINED, 1, maxReportedEUTRAFreqs> EutraMeasuredResultList;

class EUTRAMeasuredResults : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EUTRAMeasuredResults(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED, 28, 28> CellIdentity;

typedef BitString<CONSTRAINED, 16, 16> TrackingAreaCode;

class CgiInfo : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	CgiInfo(): Sequence(&theInfo) {}
};

enum csgMemberIndicationValues {
	member = 0,
};
typedef Enumerated<CONSTRAINED, 0> csgMemberIndication;

class EUTRASIacquisitionResults : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	EUTRASIacquisitionResults(): Sequence(&theInfo) {}
};

class EUTRAMeasuredCellsv920ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EUTRAMeasuredCellsv920ext(): Sequence(&theInfo) {}
};

typedef SequenceOf<EUTRAMeasuredCellsv920ext, CONSTRAINED, 1, maxReportedEUTRACellPerFreq> MeasuredEUTRACells_v920ext;

class EutraMeasuredResultv920ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EutraMeasuredResultv920ext(): Sequence(&theInfo) {}
};

typedef SequenceOf<EutraMeasuredResultv920ext, CONSTRAINED, 1, maxReportedEUTRAFreqs> EutraMeasuredResultListv920ext;

class EUTRAMeasuredResultsv920ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EUTRAMeasuredResultsv920ext(): Sequence(&theInfo) {}
};

class ForbiddenAffectCellr4 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ForbiddenAffectCellr4(): Choices(&theInfo) {}
};

typedef SequenceOf<ForbiddenAffectCellr4, CONSTRAINED, 1, maxCellMeas> ForbiddenAffectCellListr4;

class Event1ar4 : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	Event1ar4(): Sequence(&theInfo) {}
};

class ForbiddenAffectCellOnSecULFreq : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ForbiddenAffectCellOnSecULFreq(): Sequence(&theInfo) {}
};

typedef SequenceOf<ForbiddenAffectCellOnSecULFreq, CONSTRAINED, 1,  maxCellMeasOnSecULFreq> ForbiddenAffectCellListOnSecULFreq;

class Event1aOnSecUlFreqr9 : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	Event1aOnSecUlFreqr9(): Sequence(&theInfo) {}
};

class Event1br4 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	Event1br4(): Sequence(&theInfo) {}
};

class PeriodicReportingInfo1b : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PeriodicReportingInfo1b(): Sequence(&theInfo) {}
};

class Event1br7 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	Event1br7(): Sequence(&theInfo) {}
};

class Event1bOnSecUlFreqr9 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	Event1bOnSecUlFreqr9(): Sequence(&theInfo) {}
};

typedef Boolean UseCIO;

class Event1d : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Event1d(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, -120, 165> ThresholdUsedFrequencyr6;

class Event1er6 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Event1er6(): Sequence(&theInfo) {}
};

class Event1fr6 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Event1fr6(): Sequence(&theInfo) {}
};

class Event1jr6 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	Event1jr6(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, -115, 0> Threshold;

typedef Integer<CONSTRAINED, 0, 29> HysteresisInterFreq;

class NonUsedFreqParameter : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	NonUsedFreqParameter(): Sequence(&theInfo) {}
};

typedef SequenceOf<NonUsedFreqParameter, CONSTRAINED, 1, maxFreq> NonUsedFreqParameterList;

class Event2a : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	Event2a(): Sequence(&theInfo) {}
};

typedef SequenceOf<W, CONSTRAINED, 1, maxFreq> NonUsedFreqWListr6;

class Event2ar6 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	Event2ar6(): Sequence(&theInfo) {}
};

class Event2b : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	Event2b(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, -120, 0> Thresholdr6;

class NonUsedFreqParameterr6 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	NonUsedFreqParameterr6(): Sequence(&theInfo) {}
};

typedef SequenceOf<NonUsedFreqParameterr6, CONSTRAINED, 1, maxFreq> NonUsedFreqParameterListr6;

class Event2br6 : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	Event2br6(): Sequence(&theInfo) {}
};

class Event2c : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	Event2c(): Sequence(&theInfo) {}
};

class Event2cr6 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	Event2cr6(): Sequence(&theInfo) {}
};

class Event2d : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	Event2d(): Sequence(&theInfo) {}
};

class Event2dr6 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	Event2dr6(): Sequence(&theInfo) {}
};

class Event2e : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	Event2e(): Sequence(&theInfo) {}
};

class Event2er6 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	Event2er6(): Sequence(&theInfo) {}
};

class Event2f : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	Event2f(): Sequence(&theInfo) {}
};

class Event2fr6 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	Event2fr6(): Sequence(&theInfo) {}
};

class Event3a : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	Event3a(): Sequence(&theInfo) {}
};

class Event3b : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	Event3b(): Sequence(&theInfo) {}
};

class Event3c : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	Event3c(): Sequence(&theInfo) {}
};

class Event3d : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	Event3d(): Sequence(&theInfo) {}
};

enum EventIDInterFreqValues {
	e2a = 0,
	e2b = 1,
	e2c = 2,
	e2d = 3,
	e2e = 4,
	e2f = 5,
	spare2 = 6,
	spare1 = 7,
};
typedef Enumerated<CONSTRAINED, 7> EventIDInterFreq;

enum EventIDIntraFreqValues {
	e1a = 0,
	e1b = 1,
	e1c = 2,
	e1d = 3,
	e1e = 4,
	e1f = 5,
	e1g = 6,
	e1h = 7,
	e1i = 8,
	e1j = 9,
	spare6 = 10,
	spare5 = 11,
	spare4 = 12,
	spare3 = 13,
	spare2 = 14,
	spare1 = 15,
};
typedef Enumerated<CONSTRAINED, 15> EventIDIntraFreq;

class IntraFreqEventResults : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	IntraFreqEventResults(): Sequence(&theInfo) {}
};

class InterFreqCell : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	InterFreqCell(): Sequence(&theInfo) {}
};

typedef SequenceOf<InterFreqCell, CONSTRAINED, 1, maxFreq> InterFreqCellList;

class InterFreqEventResults : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	InterFreqEventResults(): Sequence(&theInfo) {}
};

class InterRATEventResults : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	InterRATEventResults(): Sequence(&theInfo) {}
};

typedef _Null Rachorcpch;

class ULTrCHIdentity : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	ULTrCHIdentity(): Choices(&theInfo) {}
};

enum TrafficVolumeEventTypeValues {
	e4a = 0,
	e4b = 1,
};
typedef Enumerated<CONSTRAINED, 1> TrafficVolumeEventType;

class TrafficVolumeEventResults : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TrafficVolumeEventResults(): Sequence(&theInfo) {}
};

typedef SequenceOf<TransportChannelIdentity, CONSTRAINED, 1, maxTrCH> QualityEventResults;

typedef _Null Event6a;

typedef _Null Event6b;

typedef _Null Event6c;

typedef _Null Event6d;

typedef _Null Event6e;

typedef _Null Spare;

class UEInternalEventResults : Choice {
private:
	static const void *choicesInfo[8];
public:
	static const Info theInfo;
	UEInternalEventResults(): Choices(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0,  16383> Ms_part;

typedef Integer<CONSTRAINED, 0, 4294967295> Ls_part;

class Ue_GPSTimingOfCell : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Ue_GPSTimingOfCell(): Sequence(&theInfo) {}
};

class Fdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 4095> Sfn;

class UTRANGPSReferenceTimeResult : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	UTRANGPSReferenceTimeResult(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 604799999> GPSTOW1msec;

typedef Integer<CONSTRAINED, 0, 4095> Sfn;

class Fdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class Cell_Timing : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Cell_Timing(): Sequence(&theInfo) {}
};

class ReferenceTime : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	ReferenceTime(): Choices(&theInfo) {}
};

class PositionEstimate : Choice {
private:
	static const void *choicesInfo[5];
public:
	static const Info theInfo;
	PositionEstimate(): Choices(&theInfo) {}
};

class UEPositioningPositionEstimateInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UEPositioningPositionEstimateInfo(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 4095> Sfn;

typedef Integer<CONSTRAINED, 0, 8191> UERXTXTimeDifferenceType2;

typedef BitString<CONSTRAINED, 2, 2> StdResolution;

typedef BitString<CONSTRAINED, 3, 3> NumberOfOTDOA_Measurements;

typedef BitString<CONSTRAINED, 5, 5> StdOfOTDOA_Measurements;

class UEPositioningOTDOAQuality : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	UEPositioningOTDOAQuality(): Sequence(&theInfo) {}
};

class NeighbourQuality : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	NeighbourQuality(): Sequence(&theInfo) {}
};

class UERXTXTimeDifferenceType2Info : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UERXTXTimeDifferenceType2Info(): Sequence(&theInfo) {}
};

class Fdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class Fdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class Neighbour : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	Neighbour(): Sequence(&theInfo) {}
};

typedef SequenceOf<Neighbour, CONSTRAINED, 1, maxCellMeas> NeighbourList;

class UEPositioningOTDOAMeasurement : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	UEPositioningOTDOAMeasurement(): Sequence(&theInfo) {}
};

class ReferenceTime : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ReferenceTime(): Choices(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 63> SatelliteID;

typedef Integer<CONSTRAINED, 0, 63> C_N0;

typedef Integer<CONSTRAINED, -32768, 32768> Doppler;

typedef Integer<CONSTRAINED, 0, 1022> WholeGPS_Chips;

typedef Integer<CONSTRAINED, 0, 1023> FractionalGPS_Chips;

enum MultipathIndicatorValues {
	nm = 0,
	low = 1,
	medium = 2,
	high = 3,
};
typedef Enumerated<CONSTRAINED, 3> MultipathIndicator;

typedef Integer<CONSTRAINED, 0, 63> PseudorangeRMS_Error;

class GPSMeasurementParam : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	GPSMeasurementParam(): Sequence(&theInfo) {}
};

typedef SequenceOf<GPSMeasurementParam, CONSTRAINED, 1, maxSat> GPSMeasurementParamList;

class UEPositioningGPSMeasurementResults : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UEPositioningGPSMeasurementResults(): Sequence(&theInfo) {}
};

typedef _Null AdditionalOrReplacedPosMeasEvent;

class UEPositioningMeasurementEventResults : Choice {
private:
	static const void *choicesInfo[4];
public:
	static const Info theInfo;
	UEPositioningMeasurementEventResults(): Choices(&theInfo) {}
};

typedef _Null Spare;

class EventResults : Choice {
private:
	static const void *choicesInfo[8];
public:
	static const Info theInfo;
	EventResults(): Choices(&theInfo) {}
};

typedef _Null Earlier_than_r7;

typedef Integer<CONSTRAINED, 0, 80> Ms_Part;

typedef Integer<CONSTRAINED, 0, 4294967295> Ls_Part;

class Ue_GANSSTimingOfCellFrames : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Ue_GANSSTimingOfCellFrames(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 7> GANSS_TimeId;

typedef Integer<CONSTRAINED, 0, 127> GANSS_TimeUncertainty;

class Fdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class Mode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Mode(): Choices(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 4095> ReferenceSfn;

class UTRANGANSSReferenceTime : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	UTRANGANSSReferenceTime(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 3599999> GANSS_tod;

typedef Integer<CONSTRAINED, 0, 7> GANSS_timeId;

typedef Integer<CONSTRAINED, 0, 127> GANSS_tod_uncertainty;

class GANSSReferenceTimeOnly : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	GANSSReferenceTimeOnly(): Sequence(&theInfo) {}
};

class ReferenceTime : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ReferenceTime(): Choices(&theInfo) {}
};

class R7 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	R7(): Sequence(&theInfo) {}
};

class ReferenceTimeOptions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ReferenceTimeOptions(): Choices(&theInfo) {}
};

typedef BitString<CONSTRAINED, 16, 16> PositionData;

typedef Integer<CONSTRAINED, 0, 359> Bearing;

typedef Integer<CONSTRAINED, 0, 2047> HorizontalSpeed;

class HorizontalVelocity : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HorizontalVelocity(): Sequence(&theInfo) {}
};

enum verticalSpeedDirectionValues {
	upward = 0,
	downward = 1,
};
typedef Enumerated<CONSTRAINED, 1> verticalSpeedDirection;

typedef Integer<CONSTRAINED, 0, 359> Bearing;

typedef Integer<CONSTRAINED, 0, 2047> HorizontalSpeed;

typedef Integer<CONSTRAINED, 0, 255> VerticalSpeed;

class HorizontalWithVerticalVelocity : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	HorizontalWithVerticalVelocity(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 359> Bearing;

typedef Integer<CONSTRAINED, 0, 2047> HorizontalSpeed;

typedef Integer<CONSTRAINED, 0, 255> HorizontalSpeedUncertainty;

class HorizontalVelocityWithUncertainty : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	HorizontalVelocityWithUncertainty(): Sequence(&theInfo) {}
};

enum verticalSpeedDirectionValues {
	upward = 0,
	downward = 1,
};
typedef Enumerated<CONSTRAINED, 1> verticalSpeedDirection;

typedef Integer<CONSTRAINED, 0, 359> Bearing;

typedef Integer<CONSTRAINED, 0, 2047> HorizontalSpeed;

typedef Integer<CONSTRAINED, 0, 255> VerticalSpeed;

typedef Integer<CONSTRAINED, 0, 255> HorizontalUncertaintySpeed;

typedef Integer<CONSTRAINED, 0, 255> VerticalUncertaintySpeed;

class HorizontalWithVerticalVelocityAndUncertainty : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	HorizontalWithVerticalVelocityAndUncertainty(): Sequence(&theInfo) {}
};

class VelocityEstimate : Choice {
private:
	static const void *choicesInfo[4];
public:
	static const Info theInfo;
	VelocityEstimate(): Choices(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 127> UEPositioningGPSReferenceTimeUncertainty;

class UEPositioningPositionEstimateInfov770ext : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	UEPositioningPositionEstimateInfov770ext(): Sequence(&theInfo) {}
};

class UEPositioningGPSMeasurementResultsv770ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningGPSMeasurementResultsv770ext(): Sequence(&theInfo) {}
};

class ReferenceTime : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ReferenceTime(): Choices(&theInfo) {}
};

class GANSSGenericMeasurementInfo : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	GANSSGenericMeasurementInfo(): Sequence(&theInfo) {}
};

class UEPositioningGANSSMeasuredResults : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UEPositioningGANSSMeasuredResults(): Sequence(&theInfo) {}
};

typedef _Null Spare;

class UEPositioningMeasurementEventResultsv770ext : Choice {
private:
	static const void *choicesInfo[4];
public:
	static const Info theInfo;
	UEPositioningMeasurementEventResultsv770ext(): Choices(&theInfo) {}
};

class EventResultsv770ext : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	EventResultsv770ext(): Choices(&theInfo) {}
};

class GANSSGenericMeasurementInfov860ext : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	GANSSGenericMeasurementInfov860ext(): Sequence(&theInfo) {}
};

class UEPositioningGANSSMeasuredResultsv860ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningGANSSMeasuredResultsv860ext(): Sequence(&theInfo) {}
};

class UEPositioningMeasurementEventResultsv860ext : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	UEPositioningMeasurementEventResultsv860ext(): Choices(&theInfo) {}
};

class EventResultsv860ext : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	EventResultsv860ext(): Choices(&theInfo) {}
};

class IntraFreqEventResultsOnSecUlFreq : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	IntraFreqEventResultsOnSecUlFreq(): Sequence(&theInfo) {}
};

class EventResultsOnSecUlFreq : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EventResultsOnSecUlFreq(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, -42,  21> DopplerFirstOrder;

enum dopplerUncertaintyValues {
	dopU40 = 0,
	dopU20 = 1,
	dopU10 = 2,
	dopU5 = 3,
	dopU2_5 = 4,
	spare3 = 5,
	spare2 = 6,
	spare1 = 7,
};
typedef Enumerated<CONSTRAINED, 7> dopplerUncertainty;

class ExtraDoppler : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ExtraDoppler(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 12> FACH_meas_occasion_coeff;

typedef Boolean Inter_freq_FDD_meas_ind;

typedef Boolean Inter_freq_TDD_meas_ind;

enum RATTypeValues {
	gsm = 0,
	is2000 = 1,
};
typedef Enumerated<CONSTRAINED, 1> RATType;

typedef SequenceOf<RATType, CONSTRAINED, 1, maxOtherRAT> Inter_RAT_meas_ind;

class FACHMeasurementOccasionInfo : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	FACHMeasurementOccasionInfo(): Sequence(&theInfo) {}
};

typedef Boolean Inter_freq_TDD128_meas_ind;

class FACHMeasurementOccasionInfoLCRr4ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	FACHMeasurementOccasionInfoLCRr4ext(): Sequence(&theInfo) {}
};

enum FilterCoefficientValues {
	fc0 = 0,
	fc1 = 1,
	fc2 = 2,
	fc3 = 3,
	fc4 = 4,
	fc5 = 5,
	fc6 = 6,
	fc7 = 7,
	fc8 = 8,
	fc9 = 9,
	fc11 = 10,
	fc13 = 11,
	fc15 = 12,
	fc17 = 13,
	fc19 = 14,
	spare1 = 15,
};
typedef Enumerated<CONSTRAINED, 15> FilterCoefficient;

typedef Integer<CONSTRAINED, 0, 15> FineSFNSFN;

enum FreqQualityEstimateQuantityFDDValues {
	cpich_Ec_N0 = 0,
	cpich_RSCP = 1,
};
typedef Enumerated<CONSTRAINED, 1> FreqQualityEstimateQuantityFDD;

enum FreqQualityEstimateQuantityTDDValues {
	primaryCCPCH_RSCP = 0,
};
typedef Enumerated<CONSTRAINED, 0> FreqQualityEstimateQuantityTDD;

typedef Integer<CONSTRAINED, 0, 86399> GanssTod;

typedef Integer<CONSTRAINED, 0, 15> GanssDataBitInterval;

typedef Integer<CONSTRAINED, 0, 63> GanssSatelliteInfoItem;

typedef SequenceOf<GanssSatelliteInfoItem, CONSTRAINED, 1, maxGANSSSat> GanssSatelliteInfo;

class ReqDataBitAssistance : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	ReqDataBitAssistance(): Sequence(&theInfo) {}
};

class GanssDataBits : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	GanssDataBits(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED, 56, 56> CurrentDecipheringKey;

typedef BitString<CONSTRAINED, 56, 56> NextDecipheringKey;

class GANSSDecipheringKeys : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	GANSSDecipheringKeys(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 7> GanssId;

typedef Integer<CONSTRAINED, -8388608, 8388607> Ganss_t_a1;

typedef Integer<CONSTRAINED, -64, 63> Ganss_t_a2;

enum gnss_to_idValues {
	gps = 0,
	galileo = 1,
	qzss = 2,
	glonass = 3,
	spare4 = 4,
	spare3 = 5,
	spare2 = 6,
	spare1 = 7,
};
typedef Enumerated<CONSTRAINED, 7> gnss_to_id;

typedef Integer<CONSTRAINED, 0, 8191> Ganss_wk_number;

class UEPositioningGANSSTimeModel : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	UEPositioningGANSSTimeModel(): Sequence(&theInfo) {}
};

typedef SequenceOf<UEPositioningGANSSTimeModel, CONSTRAINED, 1, maxGANSS_1> GANSSTimeModelsList;

class UEPositioningDGANSSCorrections : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningDGANSSCorrections(): Sequence(&theInfo) {}
};

enum non_broadcastIndicationValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> non_broadcastIndication;

typedef Integer<CONSTRAINED, 0, 63> SatId;

typedef BitString<CONSTRAINED, 5, 5> SvHealth;

typedef BitString<CONSTRAINED, 10, 10> Iod;

typedef BitString<CONSTRAINED, 14, 14> T_oc;

typedef BitString<CONSTRAINED, 12, 12> Af2;

typedef BitString<CONSTRAINED, 18, 18> Af1;

typedef BitString<CONSTRAINED, 28, 28> Af0;

typedef BitString<CONSTRAINED, 10, 10> Tgd;

typedef Integer<CONSTRAINED, 0, 1> Model_id;

class Satelliteclockmodel : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	Satelliteclockmodel(): Sequence(&theInfo) {}
};

typedef SequenceOf<Satelliteclockmodel, CONSTRAINED, 1, maxSatClockModels> SatelliteclockmodelList;

class UEPositioningGANSSClockModel : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningGANSSClockModel(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED, 14, 14> Toe_nav;

typedef BitString<CONSTRAINED, 32, 32> Ganss_omega_nav;

typedef BitString<CONSTRAINED, 16, 16> Delta_n_nav;

typedef BitString<CONSTRAINED, 32, 32> M_zero_nav;

typedef BitString<CONSTRAINED, 24, 24> Omegadot_nav;

typedef BitString<CONSTRAINED, 32, 32> Ganss_e_nav;

typedef BitString<CONSTRAINED, 14, 14> Idot_nav;

typedef BitString<CONSTRAINED, 32, 32> A_sqrt_nav;

typedef BitString<CONSTRAINED, 32, 32> I_zero_nav;

typedef BitString<CONSTRAINED, 32, 32> Omega_zero_nav;

typedef BitString<CONSTRAINED, 16, 16> C_rs_nav;

typedef BitString<CONSTRAINED, 16, 16> C_is_nav;

typedef BitString<CONSTRAINED, 16, 16> C_us_nav;

typedef BitString<CONSTRAINED, 16, 16> C_rc_nav;

typedef BitString<CONSTRAINED, 16, 16> C_ic_nav;

typedef BitString<CONSTRAINED, 16, 16> C_uc_nav;

class KeplerianParameters : Sequence {
private:
	static const void *itemsInfo[16];
	static bool itemsPres[16];
public:
	static const Info theInfo;
	KeplerianParameters(): Sequence(&theInfo) {}
};

class UEPositioningGANSSOrbitModel : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningGANSSOrbitModel(): Sequence(&theInfo) {}
};

class GanssSatInfoNav : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	GanssSatInfoNav(): Sequence(&theInfo) {}
};

typedef SequenceOf<GanssSatInfoNav, CONSTRAINED, 1, maxGANSSSat> GanssSatInfoNavList;

class UEPositioningGANSSNavigationModel : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UEPositioningGANSSNavigationModel(): Sequence(&theInfo) {}
};

class UEPositioningGANSSRealTimeIntegrity : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	UEPositioningGANSSRealTimeIntegrity(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 59> Ganss_tod;

class UEPositioningGANSSDataBitAssistance : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UEPositioningGANSSDataBitAssistance(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 63> GanssSatId;

typedef Integer<CONSTRAINED, 0, 1023> CodePhase;

typedef Integer<CONSTRAINED, 0, 127> IntegerCodePhase;

typedef BitString<CONSTRAINED, 5, 5> CodePhaseSearchWindow;

class GANSSSatelliteInformation : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	GANSSSatelliteInformation(): Sequence(&theInfo) {}
};

typedef SequenceOf<GANSSSatelliteInformation, CONSTRAINED, 1, maxGANSSSat> GANSSSatelliteInformationList;

class UEPositioningGANSSReferenceMeasurementInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UEPositioningGANSSReferenceMeasurementInfo(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 255> Ganss_wk_number;

class UEPositioningGANSSAlmanac : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UEPositioningGANSSAlmanac(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED, 24, 24> A_one_utc;

typedef BitString<CONSTRAINED, 32, 32> A_zero_utc;

typedef BitString<CONSTRAINED, 8, 8> T_ot_utc;

typedef BitString<CONSTRAINED, 8, 8> Delta_t_ls_utc;

typedef BitString<CONSTRAINED, 8, 8> W_n_t_utc;

typedef BitString<CONSTRAINED, 8, 8> W_n_lsf_utc;

typedef BitString<CONSTRAINED, 8, 8> Dn_utc;

typedef BitString<CONSTRAINED, 8, 8> Delta_t_lsf_utc;

class UEPositioningGANSSUTCModel : Sequence {
private:
	static const void *itemsInfo[8];
	static bool itemsPres[8];
public:
	static const Info theInfo;
	UEPositioningGANSSUTCModel(): Sequence(&theInfo) {}
};

class GANSSGenericData : Sequence {
private:
	static const void *itemsInfo[9];
	static bool itemsPres[9];
public:
	static const Info theInfo;
	GANSSGenericData(): Sequence(&theInfo) {}
};

enum UEPositioningGANSSSBASIDValues {
	waas = 0,
	egnos = 1,
	msas = 2,
	gagan = 3,
	spare4 = 4,
	spare3 = 5,
	spare2 = 6,
	spare1 = 7,
};
typedef Enumerated<CONSTRAINED, 7> UEPositioningGANSSSBASID;

enum non_broadcastIndicationValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> non_broadcastIndication;

typedef Integer<CONSTRAINED, 0, 63> SatId;

typedef BitString<CONSTRAINED, 6, 6> SvHealth;

typedef BitString<CONSTRAINED, 11, 11> Iod;

typedef BitString<CONSTRAINED, 16, 16> NavToc;

typedef BitString<CONSTRAINED, 8, 8> Navaf2;

typedef BitString<CONSTRAINED, 16, 16> Navaf1;

typedef BitString<CONSTRAINED, 22, 22> Navaf0;

typedef BitString<CONSTRAINED, 8, 8> NavTgd;

class NAVclockModel : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	NAVclockModel(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED, 22, 22> GloTau;

typedef BitString<CONSTRAINED, 11, 11> GloGamma;

typedef BitString<CONSTRAINED, 5, 5> GloDeltaTau;

class GLONASSclockModel : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	GLONASSclockModel(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED, 13, 13> SbasTo;

typedef BitString<CONSTRAINED, 12, 12> SbasAgfo;

typedef BitString<CONSTRAINED, 8, 8> SbasAgf1;

class SBASclockModel : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	SBASclockModel(): Sequence(&theInfo) {}
};

class UEPositioningGANSSAddClockModels : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	UEPositioningGANSSAddClockModels(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED, 4, 4> NavURA;

typedef BitString<CONSTRAINED, 1, 1> NavFitFlag;

typedef BitString<CONSTRAINED, 16, 16> NavToe;

typedef BitString<CONSTRAINED, 32, 32> NavOmega;

typedef BitString<CONSTRAINED, 16, 16> NavDeltaN;

typedef BitString<CONSTRAINED, 32, 32> NavM0;

typedef BitString<CONSTRAINED, 24, 24> NavOmegaADot;

typedef BitString<CONSTRAINED, 32, 32> NavE;

typedef BitString<CONSTRAINED, 14, 14> NavIDot;

typedef BitString<CONSTRAINED, 32, 32> NavAPowerHalf;

typedef BitString<CONSTRAINED, 32, 32> NavI0;

typedef BitString<CONSTRAINED, 32, 32> NavOmegaA0;

typedef BitString<CONSTRAINED, 16, 16> NavCrs;

typedef BitString<CONSTRAINED, 16, 16> NavCis;

typedef BitString<CONSTRAINED, 16, 16> NavCus;

typedef BitString<CONSTRAINED, 16, 16> NavCrc;

typedef BitString<CONSTRAINED, 16, 16> NavCic;

typedef BitString<CONSTRAINED, 16, 16> NavCuc;

class NavModelNAVKeplerianSet : Sequence {
private:
	static const void *itemsInfo[18];
	static bool itemsPres[18];
public:
	static const Info theInfo;
	NavModelNAVKeplerianSet(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED, 11, 11> CnavTop;

typedef BitString<CONSTRAINED, 5, 5> CnavURAindex;

typedef BitString<CONSTRAINED, 26, 26> CnavDeltaA;

typedef BitString<CONSTRAINED, 25, 25> CnavAdot;

typedef BitString<CONSTRAINED, 17, 17> CnavDeltaNo;

typedef BitString<CONSTRAINED, 23, 23> CnavDeltaNoDot;

typedef BitString<CONSTRAINED, 33, 33> CnavMo;

typedef BitString<CONSTRAINED, 33, 33> CnavE;

typedef BitString<CONSTRAINED, 33, 33> CnavOmega;

typedef BitString<CONSTRAINED, 33, 33> CnavOMEGA0;

typedef BitString<CONSTRAINED, 17, 17> CnavDeltaOmegaDot;

typedef BitString<CONSTRAINED, 33, 33> CnavIo;

typedef BitString<CONSTRAINED, 15, 15> CnavIoDot;

typedef BitString<CONSTRAINED, 16, 16> CnavCis;

typedef BitString<CONSTRAINED, 16, 16> CnavCic;

typedef BitString<CONSTRAINED, 24, 24> CnavCrs;

typedef BitString<CONSTRAINED, 24, 24> CnavCrc;

typedef BitString<CONSTRAINED, 21, 21> CnavCus;

typedef BitString<CONSTRAINED, 21, 21> CnavCuc;

class NavModelCNAVKeplerianSet : Sequence {
private:
	static const void *itemsInfo[19];
	static bool itemsPres[19];
public:
	static const Info theInfo;
	NavModelCNAVKeplerianSet(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED, 5, 5> GloEn;

typedef BitString<CONSTRAINED, 2, 2> GloP1;

typedef BitString<CONSTRAINED, 1, 1> GloP2;

typedef BitString<CONSTRAINED, 2, 2> GloM;

typedef BitString<CONSTRAINED, 27, 27> GloX;

typedef BitString<CONSTRAINED, 24, 24> GloXdot;

typedef BitString<CONSTRAINED, 5, 5> GloXdotdot;

typedef BitString<CONSTRAINED, 27, 27> GloY;

typedef BitString<CONSTRAINED, 24, 24> GloYdot;

typedef BitString<CONSTRAINED, 5, 5> GloYdotdot;

typedef BitString<CONSTRAINED, 27, 27> GloZ;

typedef BitString<CONSTRAINED, 24, 24> GloZdot;

typedef BitString<CONSTRAINED, 5, 5> GloZdotdot;

class NavModelGLONASSecef : Sequence {
private:
	static const void *itemsInfo[13];
	static bool itemsPres[13];
public:
	static const Info theInfo;
	NavModelGLONASSecef(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED, 13, 13> SbasTo;

typedef BitString<CONSTRAINED, 4, 4> SbasAccuracy;

typedef BitString<CONSTRAINED, 30, 30> SbasXg;

typedef BitString<CONSTRAINED, 30, 30> SbasYg;

typedef BitString<CONSTRAINED, 25, 25> SbasZg;

typedef BitString<CONSTRAINED, 17, 17> SbasXgDot;

typedef BitString<CONSTRAINED, 17, 17> SbasYgDot;

typedef BitString<CONSTRAINED, 18, 18> SbasZgDot;

typedef BitString<CONSTRAINED, 10, 10> SbasXgDotDot;

typedef BitString<CONSTRAINED, 10, 10> SbagYgDotDot;

typedef BitString<CONSTRAINED, 10, 10> SbasZgDotDot;

class NavModelSBASecef : Sequence {
private:
	static const void *itemsInfo[11];
	static bool itemsPres[11];
public:
	static const Info theInfo;
	NavModelSBASecef(): Sequence(&theInfo) {}
};

class UEPositioningGANSSAddOrbitModels : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	UEPositioningGANSSAddOrbitModels(): Sequence(&theInfo) {}
};

class GanssSatInfoAddNav : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	GanssSatInfoAddNav(): Sequence(&theInfo) {}
};

typedef SequenceOf<GanssSatInfoAddNav, CONSTRAINED, 1, maxGANSSSat> GanssSatInfoAddNavList;

class UEPositioningGANSSAddNavigationModels : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UEPositioningGANSSAddNavigationModels(): Sequence(&theInfo) {}
};

class UEPositioningGANSSAlmanacv860ext : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	UEPositioningGANSSAlmanacv860ext(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED, 16, 16> UtcA0;

typedef BitString<CONSTRAINED, 13, 13> UtcA1;

typedef BitString<CONSTRAINED, 7, 7> UtcA2;

typedef BitString<CONSTRAINED, 8, 8> UtcDeltaTls;

typedef BitString<CONSTRAINED, 16, 16> UtcTot;

typedef BitString<CONSTRAINED, 13, 13> UtcWNot;

typedef BitString<CONSTRAINED, 8, 8> UtcWNlsf;

typedef BitString<CONSTRAINED, 4, 4> UtcDN;

typedef BitString<CONSTRAINED, 8, 8> UtcDeltaTlsf;

class UTCmodelSet1 : Sequence {
private:
	static const void *itemsInfo[9];
	static bool itemsPres[9];
public:
	static const Info theInfo;
	UTCmodelSet1(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED, 11, 11> NA;

typedef BitString<CONSTRAINED, 32, 32> TauC;

typedef BitString<CONSTRAINED, 2, 2> Kp;

class UTCmodelSet2 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	UTCmodelSet2(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED, 24, 24> UtcA1wnt;

typedef BitString<CONSTRAINED, 32, 32> UtcA0wnt;

typedef BitString<CONSTRAINED, 8, 8> UtcTot;

typedef BitString<CONSTRAINED, 8, 8> UtcWNt;

typedef BitString<CONSTRAINED, 8, 8> UtcDeltaTls;

typedef BitString<CONSTRAINED, 8, 8> UtcWNlsf;

typedef BitString<CONSTRAINED, 8, 8> UtcDN;

typedef BitString<CONSTRAINED, 8, 8> UtcDeltaTlsf;

typedef BitString<CONSTRAINED, 3, 3> UtcStandardID;

class UTCmodelSet3 : Sequence {
private:
	static const void *itemsInfo[9];
	static bool itemsPres[9];
public:
	static const Info theInfo;
	UTCmodelSet3(): Sequence(&theInfo) {}
};

class UEPositioningGANSSAddUTCModels : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	UEPositioningGANSSAddUTCModels(): Sequence(&theInfo) {}
};

class UEPositioningGANSSAuxiliaryInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	UEPositioningGANSSAuxiliaryInfo(): Choices(&theInfo) {}
};

class GANSSGenericDatav860ext : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	GANSSGenericDatav860ext(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 7> GanssId;

typedef Integer<CONSTRAINED, 0, 255> Ganss_wk_number;

class UEPositioningGANSSAlmanacr8 : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	UEPositioningGANSSAlmanacr8(): Sequence(&theInfo) {}
};

class GANSSGenericDatar8 : Sequence {
private:
	static const void *itemsInfo[13];
	static bool itemsPres[13];
public:
	static const Info theInfo;
	GANSSGenericDatar8(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 7> GanssId;

class UEPositioningDGANSSCorrectionsr9 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningDGANSSCorrectionsr9(): Sequence(&theInfo) {}
};

class GANSSGenericDatar9 : Sequence {
private:
	static const void *itemsInfo[13];
	static bool itemsPres[13];
public:
	static const Info theInfo;
	GANSSGenericDatar9(): Sequence(&theInfo) {}
};

class UEPositioningDGANSSCorrectionsv920ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningDGANSSCorrectionsv920ext(): Sequence(&theInfo) {}
};

class GANSSGenericDatav920ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	GANSSGenericDatav920ext(): Sequence(&theInfo) {}
};

typedef SequenceOf<GANSSGenericData, CONSTRAINED, 1, maxGANSS> GANSSGenericDataList;

typedef SequenceOf<GANSSGenericDatav860ext, CONSTRAINED, 1, maxGANSS> GANSSGenericDataListv860ext;

typedef SequenceOf<GANSSGenericDatar8, CONSTRAINED, 1, maxGANSS> GANSSGenericDataListr8;

typedef SequenceOf<GANSSGenericDatar9, CONSTRAINED, 1, maxGANSS> GANSSGenericDataListr9;

typedef SequenceOf<GANSSGenericDatav920ext, CONSTRAINED, 1, maxGANSS> GANSSGenericDataListv920ext;

class GANSSMeasurementParameters : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	GANSSMeasurementParameters(): Sequence(&theInfo) {}
};

class GANSSMeasurementParametersv860ext : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	GANSSMeasurementParametersv860ext(): Sequence(&theInfo) {}
};

class GANSSMeasurementSignalList : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	GANSSMeasurementSignalList(): Sequence(&theInfo) {}
};

class GANSSMeasurementSignalListv860ext : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	GANSSMeasurementSignalListv860ext(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 4095> GanssWeek;

typedef Integer<CONSTRAINED, 0, 167> GanssToe;

typedef Integer<CONSTRAINED, 0, 10> T_toeLimit;

typedef Integer<CONSTRAINED, 0, 63> SatId;

typedef Integer<CONSTRAINED, 0, 1023> Iod;

class SatellitesListRelatedData : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SatellitesListRelatedData(): Sequence(&theInfo) {}
};

typedef SequenceOf<SatellitesListRelatedData, CONSTRAINED, 1, maxGANSSSat> SatellitesListRelatedDataList;

class GanssNavigationModelAdditionalData : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	GanssNavigationModelAdditionalData(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 7> GanssId;

typedef Boolean GanssRealTimeIntegrity;

typedef Boolean GanssAlmanac;

typedef Boolean GanssNavigationModel;

typedef BitString<CONSTRAINED, 8, 8> GanssTimeModelGNSS_GNSS;

typedef Boolean GanssReferenceMeasurementInfo;

typedef Boolean GanssUTCModel;

class GanssReqGenericData : Sequence {
private:
	static const void *itemsInfo[10];
	static bool itemsPres[10];
public:
	static const Info theInfo;
	GanssReqGenericData(): Sequence(&theInfo) {}
};

enum ganssAddNavigationModelValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> ganssAddNavigationModel;

enum ganssAddUTCmodelValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> ganssAddUTCmodel;

enum ganssAuxInfoValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> ganssAuxInfo;

typedef Integer<CONSTRAINED, 0, 7> OrbitModelID;

typedef Integer<CONSTRAINED, 0, 7> ClockModelID;

typedef Integer<CONSTRAINED, 0, 7> UtcModelID;

typedef Integer<CONSTRAINED, 0, 7> AlmanacModelID;

class GanssAddADchoices : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	GanssAddADchoices(): Sequence(&theInfo) {}
};

class GanssReqGenericDatav860ext : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	GanssReqGenericDatav860ext(): Sequence(&theInfo) {}
};

typedef SequenceOf<GanssReqGenericData, CONSTRAINED, 1, maxGANSS> GanssRequestedGenericAssistanceDataList;

typedef SequenceOf<GanssReqGenericDatav860ext, CONSTRAINED, 1, maxGANSS> GanssRequestedGenericAssistanceDataListv860ext;

typedef Boolean Storm_flag_one;

typedef Boolean Storm_flag_two;

typedef Boolean Storm_flag_three;

typedef Boolean Storm_flag_four;

typedef Boolean Storm_flag_five;

class GANSSStormFlag : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	GANSSStormFlag(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED, 6, 6> GSMCarrierRSSI;

typedef Integer<CONSTRAINED, 46, 173> Dummy;

typedef Integer<CONSTRAINED, 0, 4095> ObservedTimeDifferenceToGSM;

class GSMMeasuredResults : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	GSMMeasuredResults(): Sequence(&theInfo) {}
};

typedef SequenceOf<GSMMeasuredResults, CONSTRAINED, 1, maxReportedGSMCells> GSMMeasuredResultsList;

typedef Integer<CONSTRAINED, 0, 604799> GPSTOW1sec;

typedef BitString<CONSTRAINED, 14, 14> Tlm_Message;

typedef BitString<CONSTRAINED, 2, 2> Tlm_Reserved;

typedef Boolean Alert;

typedef Boolean AntiSpoof;

class GPSTOWAssist : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	GPSTOWAssist(): Sequence(&theInfo) {}
};

typedef SequenceOf<GPSTOWAssist, CONSTRAINED, 1, maxSat> GPSTOWAssistList;

typedef Integer<CONSTRAINED, 0, maxCellMeas_1> Gsm_CellID;

class GSMCellID : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	GSMCellID(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, maxPrio_1> Priority;

typedef Integer<CONSTRAINED, -58, -13> QRxLevMinGSM;

typedef Integer<CONSTRAINED, 0, 31> ThreshXhigh;

typedef Integer<CONSTRAINED, 0, 31> ThreshXlow;

class GSMPriorityInfo : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	GSMPriorityInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<GSMPriorityInfo, CONSTRAINED, 1, maxNumGSMCellGroup> GSMPriorityInfoList;

typedef SequenceOf<GSMCellID, CONSTRAINED, 1, maxCellMeas> GSMCellGroupingList;

typedef Integer<CONSTRAINED, 2, 3> K;

typedef Integer<CONSTRAINED, 0, 7> Offset;

class IdleIntervalInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	IdleIntervalInfo(): Sequence(&theInfo) {}
};

class InterFreqCellLCRr4 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	InterFreqCellLCRr4(): Sequence(&theInfo) {}
};

typedef _Null RemoveAllInterFreqCells;

typedef SequenceOf<InterFreqCellID, CONSTRAINED, 1, maxCellMeas> RemoveSomeInterFreqCells;

typedef _Null RemoveNoInterFreqCells;

class RemovedInterFreqCellList : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	RemovedInterFreqCellList(): Choices(&theInfo) {}
};

class NewInterFreqCell : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	NewInterFreqCell(): Sequence(&theInfo) {}
};

typedef SequenceOf<NewInterFreqCell, CONSTRAINED, 1, maxCellMeas> NewInterFreqCellList;

class InterFreqCellInfoList : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	InterFreqCellInfoList(): Sequence(&theInfo) {}
};

class NewInterFreqCellr4 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	NewInterFreqCellr4(): Sequence(&theInfo) {}
};

typedef SequenceOf<NewInterFreqCellr4, CONSTRAINED, 1, maxCellMeas> NewInterFreqCellListr4;

class InterFreqCellInfoListr4 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	InterFreqCellInfoListr4(): Sequence(&theInfo) {}
};

typedef _Null NoInfo;

typedef Boolean IntraSecondaryFreqIndicator;

class Tdd128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd128(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class NewInterFreqCellr8 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	NewInterFreqCellr8(): Sequence(&theInfo) {}
};

typedef SequenceOf<NewInterFreqCellr8, CONSTRAINED, 1, maxCellMeas> NewInterFreqCellListr8;

class InterFreqCellInfoListr8 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	InterFreqCellInfoListr8(): Sequence(&theInfo) {}
};

typedef _Null NoInfo;

typedef Boolean IntraSecondaryFreqIndicator;

class Tdd128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd128(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class NewInterFreqCellr9 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	NewInterFreqCellr9(): Sequence(&theInfo) {}
};

typedef SequenceOf<NewInterFreqCellr9, CONSTRAINED, 1, maxCellMeas> NewInterFreqCellListr9;

class Fdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

typedef _Null Tdd;

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class InterFreqSIAcquisition : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	InterFreqSIAcquisition(): Sequence(&theInfo) {}
};

class InterFreqCellInfoListr9 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	InterFreqCellInfoListr9(): Sequence(&theInfo) {}
};

class NewInterFreqCellSIRSCP : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	NewInterFreqCellSIRSCP(): Sequence(&theInfo) {}
};

typedef SequenceOf<NewInterFreqCellSIRSCP, CONSTRAINED, 1, maxCellMeas> NewInterFreqCellSIListRSCP;

class InterFreqCellInfoSIListRSCP : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	InterFreqCellInfoSIListRSCP(): Sequence(&theInfo) {}
};

class NewInterFreqCellSIECN0 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	NewInterFreqCellSIECN0(): Sequence(&theInfo) {}
};

typedef SequenceOf<NewInterFreqCellSIECN0, CONSTRAINED, 1, maxCellMeas> NewInterFreqCellSIListECN0;

class InterFreqCellInfoSIListECN0 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	InterFreqCellInfoSIListECN0(): Sequence(&theInfo) {}
};

class NewInterFreqCellSIHCSRSCP : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	NewInterFreqCellSIHCSRSCP(): Sequence(&theInfo) {}
};

typedef SequenceOf<NewInterFreqCellSIHCSRSCP, CONSTRAINED, 1, maxCellMeas> NewInterFreqCellSIListHCSRSCP;

class InterFreqCellInfoSIListHCSRSCP : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	InterFreqCellInfoSIListHCSRSCP(): Sequence(&theInfo) {}
};

class NewInterFreqCellSIHCSECN0 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	NewInterFreqCellSIHCSECN0(): Sequence(&theInfo) {}
};

typedef SequenceOf<NewInterFreqCellSIHCSECN0, CONSTRAINED, 1, maxCellMeas> NewInterFreqCellSIListHCSECN0;

class InterFreqCellInfoSIListHCSECN0 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	InterFreqCellInfoSIListHCSECN0(): Sequence(&theInfo) {}
};

class NewInterFreqCellSIRSCPLCRr4 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	NewInterFreqCellSIRSCPLCRr4(): Sequence(&theInfo) {}
};

typedef SequenceOf<NewInterFreqCellSIRSCPLCRr4, CONSTRAINED, 1, maxCellMeas> NewInterFreqCellSIListRSCPLCRr4;

class InterFreqCellInfoSIListRSCPLCR : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	InterFreqCellInfoSIListRSCPLCR(): Sequence(&theInfo) {}
};

class NewInterFreqCellSIECN0LCRr4 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	NewInterFreqCellSIECN0LCRr4(): Sequence(&theInfo) {}
};

typedef SequenceOf<NewInterFreqCellSIECN0LCRr4, CONSTRAINED, 1, maxCellMeas> NewInterFreqCellSIListECN0LCRr4;

class InterFreqCellInfoSIListECN0LCR : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	InterFreqCellInfoSIListECN0LCR(): Sequence(&theInfo) {}
};

class NewInterFreqCellSIHCSRSCPLCRr4 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	NewInterFreqCellSIHCSRSCPLCRr4(): Sequence(&theInfo) {}
};

typedef SequenceOf<NewInterFreqCellSIHCSRSCPLCRr4, CONSTRAINED, 1, maxCellMeas> NewInterFreqCellSIListHCSRSCPLCRr4;

class InterFreqCellInfoSIListHCSRSCPLCR : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	InterFreqCellInfoSIListHCSRSCPLCR(): Sequence(&theInfo) {}
};

class NewInterFreqCellSIHCSECN0LCRr4 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	NewInterFreqCellSIHCSECN0LCRr4(): Sequence(&theInfo) {}
};

typedef SequenceOf<NewInterFreqCellSIHCSECN0LCRr4, CONSTRAINED, 1, maxCellMeas> NewInterFreqCellSIListHCSECN0LCRr4;

class InterFreqCellInfoSIListHCSECN0LCR : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	InterFreqCellInfoSIListHCSECN0LCR(): Sequence(&theInfo) {}
};

typedef SequenceOf<InterFreqCellLCRr4, CONSTRAINED, 1, maxFreq> InterFreqCellListLCRr4ext;

typedef SequenceOf<CellMeasuredResults, CONSTRAINED, 1, maxCellMeas> InterFreqCellMeasuredResultsList;

typedef SequenceOf<CellMeasuredResultsv920ext, CONSTRAINED, 1, maxCellMeas> InterFreqCellMeasuredResultsListv920ext;

class InterFreqEvent : Choice {
private:
	static const void *choicesInfo[6];
public:
	static const Info theInfo;
	InterFreqEvent(): Choices(&theInfo) {}
};

class InterFreqEventr6 : Choice {
private:
	static const void *choicesInfo[6];
public:
	static const Info theInfo;
	InterFreqEventr6(): Choices(&theInfo) {}
};

typedef SequenceOf<InterFreqEvent, CONSTRAINED, 1, maxMeasEvent> InterFreqEventList;

typedef SequenceOf<InterFreqEventr6, CONSTRAINED, 1, maxMeasEvent> InterFreqEventListr6;

typedef SequenceOf<DeltaRSCPPerCell, CONSTRAINED, 1, maxCellMeas> InterFrequencyMeasuredResultsListv590ext;

typedef SequenceOf<DeltaRSCPPerCell, CONSTRAINED, 1, maxFreq> ThreholdNonUsedFrequencydeltaList;

class InterFreqEventCriteriav590ext : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	InterFreqEventCriteriav590ext(): Sequence(&theInfo) {}
};

typedef SequenceOf<InterFreqEventCriteriav590ext, CONSTRAINED, 1, maxMeasEvent> InterFreqEventCriteriaListv590ext;

typedef SequenceOf<DeltaRSCP, CONSTRAINED, 1, maxMeasEvent> IntraFreqEventCriteriaListv590ext;

typedef SequenceOf<DeltaRSCPPerCell, CONSTRAINED, 1, maxCellMeas> IntraFrequencyMeasuredResultsListv590ext;

class InterFreqEventResultsLCRr4ext : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	InterFreqEventResultsLCRr4ext(): Sequence(&theInfo) {}
};

enum IntraFreqMeasQuantityFDDValues {
	cpich_Ec_N0 = 0,
	cpich_RSCP = 1,
	pathloss = 2,
	dummy = 3,
};
typedef Enumerated<CONSTRAINED, 3> IntraFreqMeasQuantityFDD;

class Fdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

enum IntraFreqMeasQuantityTDDValues {
	primaryCCPCH_RSCP = 0,
	pathloss = 1,
	timeslotISCP = 2,
	dummy = 3,
};
typedef Enumerated<CONSTRAINED, 3> IntraFreqMeasQuantityTDD;

typedef SequenceOf<IntraFreqMeasQuantityTDD, CONSTRAINED, 1, 4> IntraFreqMeasQuantityTDDList;

class Tdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class IntraFreqMeasQuantity : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	IntraFreqMeasQuantity(): Sequence(&theInfo) {}
};

class IntraFreqReportingCriteria : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IntraFreqReportingCriteria(): Sequence(&theInfo) {}
};

class Fdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class InterFreqReportingCriteria : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	InterFreqReportingCriteria(): Sequence(&theInfo) {}
};

class ReportingCriteria : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ReportingCriteria(): Choices(&theInfo) {}
};

class InterFreqMeasQuantity : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterFreqMeasQuantity(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 127> UTRACarrierRSSI;

class InterFreqMeasuredResults : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	InterFreqMeasuredResults(): Sequence(&theInfo) {}
};

class InterFreqMeasuredResultsv920ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterFreqMeasuredResultsv920ext(): Sequence(&theInfo) {}
};

typedef SequenceOf<InterFreqMeasuredResults, CONSTRAINED, 1, maxFreq> InterFreqMeasuredResultsList;

typedef SequenceOf<InterFreqMeasuredResultsv920ext, CONSTRAINED, 1, maxFreq> InterFreqMeasuredResultsListv920ext;

class InterFreqMeasurementSysInfoRSCP : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterFreqMeasurementSysInfoRSCP(): Sequence(&theInfo) {}
};

class InterFreqMeasurementSysInfoECN0 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterFreqMeasurementSysInfoECN0(): Sequence(&theInfo) {}
};

class InterFreqMeasurementSysInfoHCSRSCP : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterFreqMeasurementSysInfoHCSRSCP(): Sequence(&theInfo) {}
};

class InterFreqMeasurementSysInfoHCSECN0 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterFreqMeasurementSysInfoHCSECN0(): Sequence(&theInfo) {}
};

class InterFreqMeasurementSysInfoRSCPLCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterFreqMeasurementSysInfoRSCPLCRr4(): Sequence(&theInfo) {}
};

class InterFreqMeasurementSysInfoECN0LCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterFreqMeasurementSysInfoECN0LCRr4(): Sequence(&theInfo) {}
};

class InterFreqMeasurementSysInfoHCSRSCPLCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterFreqMeasurementSysInfoHCSRSCPLCRr4(): Sequence(&theInfo) {}
};

class InterFreqMeasurementSysInfoHCSECN0LCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterFreqMeasurementSysInfoHCSECN0LCRr4(): Sequence(&theInfo) {}
};

class InterFreqRACHRepCellsList : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	InterFreqRACHRepCellsList(): Sequence(&theInfo) {}
};

enum InterFreqRepQuantityRACHFDDValues {
	cpich_EcN0 = 0,
	cpich_RSCP = 1,
};
typedef Enumerated<CONSTRAINED, 1> InterFreqRepQuantityRACHFDD;

class Fdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

enum InterFreqRepQuantityRACHTDDValues {
	dummy = 0,
	primaryCCPCH_RSCP = 1,
};
typedef Enumerated<CONSTRAINED, 1> InterFreqRepQuantityRACHTDD;

typedef SequenceOf<InterFreqRepQuantityRACHTDD, CONSTRAINED, 1, 2> InterFreqRepQuantityRACHTDDList;

class Tdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 8> MaxReportedCellsOnRACHinterFreq;

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[4];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class DummyInterFreqRACHReportingInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DummyInterFreqRACHReportingInfo(): Sequence(&theInfo) {}
};

class Fdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class InterFreqRACHReportingInfo : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	InterFreqRACHReportingInfo(): Sequence(&theInfo) {}
};

class InterFreqReportingCriteria : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterFreqReportingCriteria(): Sequence(&theInfo) {}
};

class PeriodicalWithReportingCellStatus : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PeriodicalWithReportingCellStatus(): Sequence(&theInfo) {}
};

class ReportingCellStatusOpt : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ReportingCellStatusOpt(): Sequence(&theInfo) {}
};

class InterFreqReportCriteria : Choice {
private:
	static const void *choicesInfo[4];
public:
	static const Info theInfo;
	InterFreqReportCriteria(): Choices(&theInfo) {}
};

typedef _Null E1d;

typedef _Null E1g;

class IntraFreqEventr4 : Choice {
private:
	static const void *choicesInfo[9];
public:
	static const Info theInfo;
	IntraFreqEventr4(): Choices(&theInfo) {}
};

class IntraFreqEventCriteriar4 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	IntraFreqEventCriteriar4(): Sequence(&theInfo) {}
};

typedef SequenceOf<IntraFreqEventCriteriar4, CONSTRAINED, 1, maxMeasEvent> IntraFreqEventCriteriaListr4;

class IntraFreqReportingCriteriar4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IntraFreqReportingCriteriar4(): Sequence(&theInfo) {}
};

class InterFreqReportCriteriar4 : Choice {
private:
	static const void *choicesInfo[4];
public:
	static const Info theInfo;
	InterFreqReportCriteriar4(): Choices(&theInfo) {}
};

typedef _Null E1g;

class IntraFreqEventr6 : Choice {
private:
	static const void *choicesInfo[10];
public:
	static const Info theInfo;
	IntraFreqEventr6(): Choices(&theInfo) {}
};

class IntraFreqEventCriteriar6 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	IntraFreqEventCriteriar6(): Sequence(&theInfo) {}
};

typedef SequenceOf<IntraFreqEventCriteriar6, CONSTRAINED, 1, maxMeasEvent> IntraFreqEventCriteriaListr6;

class IntraFreqReportingCriteriar6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IntraFreqReportingCriteriar6(): Sequence(&theInfo) {}
};

class InterFreqReportingCriteriar6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterFreqReportingCriteriar6(): Sequence(&theInfo) {}
};

class InterFreqReportCriteriar6 : Choice {
private:
	static const void *choicesInfo[4];
public:
	static const Info theInfo;
	InterFreqReportCriteriar6(): Choices(&theInfo) {}
};

typedef _Null E1g;

class IntraFreqEventr7 : Choice {
private:
	static const void *choicesInfo[10];
public:
	static const Info theInfo;
	IntraFreqEventr7(): Choices(&theInfo) {}
};

class IntraFreqEventCriteriar7 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	IntraFreqEventCriteriar7(): Sequence(&theInfo) {}
};

typedef SequenceOf<IntraFreqEventCriteriar7, CONSTRAINED, 1, maxMeasEvent> IntraFreqEventCriteriaListr7;

class IntraFreqReportingCriteriar7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IntraFreqReportingCriteriar7(): Sequence(&theInfo) {}
};

class InterFreqReportCriteriar7 : Choice {
private:
	static const void *choicesInfo[4];
public:
	static const Info theInfo;
	InterFreqReportCriteriar7(): Choices(&theInfo) {}
};

class IntraFreqEventOnSecULFreq : Choice {
private:
	static const void *choicesInfo[5];
public:
	static const Info theInfo;
	IntraFreqEventOnSecULFreq(): Choices(&theInfo) {}
};

class IntraFreqEventCriteriaOnSecULFreq : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	IntraFreqEventCriteriaOnSecULFreq(): Sequence(&theInfo) {}
};

typedef SequenceOf<IntraFreqEventCriteriaOnSecULFreq, CONSTRAINED, 1, maxMeasEventOnSecULFreq> IntraFreqEventCriteria;

class IntraFreqEventCriteriaListOnSecULFreq : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	IntraFreqEventCriteriaListOnSecULFreq(): Sequence(&theInfo) {}
};

class IntraFreqReportingCriteriar9 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	IntraFreqReportingCriteriar9(): Sequence(&theInfo) {}
};

class InterFreqReportCriteriar9 : Choice {
private:
	static const void *choicesInfo[4];
public:
	static const Info theInfo;
	InterFreqReportCriteriar9(): Choices(&theInfo) {}
};

typedef Boolean Utra_Carrier_RSSI;

typedef Boolean FrequencyQualityEstimate;

class InterFreqReportingQuantity : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	InterFreqReportingQuantity(): Sequence(&theInfo) {}
};

enum ue_StateValues {
	cell_DCH = 0,
	all_But_Cell_DCH = 1,
	all_States = 2,
};
typedef Enumerated<CONSTRAINED, 2> ue_State;

class MeasurementValidity : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasurementValidity(): Sequence(&theInfo) {}
};

typedef _Null Dummy;

typedef _Null OnWithNoReporting;

typedef SequenceOf<PrimaryCPICHInfo, CONSTRAINED, 1, maxRL> RLAdditionInfoList;

class RLInformationLists : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RLInformationLists(): Sequence(&theInfo) {}
};

class UEAutonomousUpdateMode : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	UEAutonomousUpdateMode(): Choices(&theInfo) {}
};

class InterFrequencyMeasurement : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	InterFrequencyMeasurement(): Sequence(&theInfo) {}
};

class InterFrequencyMeasurementr4 : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	InterFrequencyMeasurementr4(): Sequence(&theInfo) {}
};

class InterFrequencyMeasurementr6 : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	InterFrequencyMeasurementr6(): Sequence(&theInfo) {}
};

class InterFrequencyMeasurementr7 : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	InterFrequencyMeasurementr7(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 31> AdjacentFrequencyIndex;

class InterFrequencyMeasurementr8 : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	InterFrequencyMeasurementr8(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 31> AdjacentFrequencyIndex;

typedef Integer<CONSTRAINED, 0, 31> InterBandFrequencyIndex;

class InterFrequencyMeasurementr9 : Sequence {
private:
	static const void *itemsInfo[8];
	static bool itemsPres[8];
public:
	static const Info theInfo;
	InterFrequencyMeasurementr9(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED, 3, 3> NCMode;

class Gsm : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	Gsm(): Sequence(&theInfo) {}
};

typedef _Null Is_2000;

typedef _Null Spare2;

typedef _Null Spare1;

class TechnologySpecificInfo : Choice {
private:
	static const void *choicesInfo[4];
public:
	static const Info theInfo;
	TechnologySpecificInfo(): Choices(&theInfo) {}
};

class InterRATTargetCellDescription : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterRATTargetCellDescription(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 3> InterRATCellInfoIndication;

typedef _Null RemoveAllInterRATCells;

typedef SequenceOf<InterRATCellID, CONSTRAINED, 1, maxCellMeas> RemoveSomeInterRATCells;

typedef _Null RemoveNoInterRATCells;

class RemovedInterRATCellList : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	RemovedInterRATCellList(): Choices(&theInfo) {}
};

typedef Integer<CONSTRAINED, -50, 50> InterRATCellIndividualOffset;

typedef _Null Dummy;

class Gsm : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	Gsm(): Sequence(&theInfo) {}
};

enum IS2000SpecificMeasInfoValues {
	frequency = 0,
	timeslot = 1,
	colourcode = 2,
	outputpower = 3,
	pn_Offset = 4,
};
typedef Enumerated<CONSTRAINED, 4> IS2000SpecificMeasInfo;

class Is_2000 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Is_2000(): Sequence(&theInfo) {}
};

typedef _Null Absent;

typedef _Null Spare1;

class TechnologySpecificInfo : Choice {
private:
	static const void *choicesInfo[4];
public:
	static const Info theInfo;
	TechnologySpecificInfo(): Choices(&theInfo) {}
};

class NewInterRATCell : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	NewInterRATCell(): Sequence(&theInfo) {}
};

typedef SequenceOf<NewInterRATCell, CONSTRAINED, 1, maxCellMeas> NewInterRATCellList;

class InterRATCellInfoList : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	InterRATCellInfoList(): Sequence(&theInfo) {}
};

typedef _Null Dummy;

class Gsm : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	Gsm(): Sequence(&theInfo) {}
};

class Is_2000 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Is_2000(): Sequence(&theInfo) {}
};

typedef _Null Absent;

typedef _Null Spare1;

class TechnologySpecificInfo : Choice {
private:
	static const void *choicesInfo[4];
public:
	static const Info theInfo;
	TechnologySpecificInfo(): Choices(&theInfo) {}
};

class NewInterRATCellB : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	NewInterRATCellB(): Sequence(&theInfo) {}
};

typedef SequenceOf<NewInterRATCellB, CONSTRAINED, 1, maxCellMeas> NewInterRATCellListB;

class InterRATCellInfoListB : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	InterRATCellInfoListB(): Sequence(&theInfo) {}
};

class InterRATCellInfoListr4 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	InterRATCellInfoListr4(): Sequence(&theInfo) {}
};

class InterRATCellInfoListr6 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	InterRATCellInfoListr6(): Sequence(&theInfo) {}
};

class InterRATEvent : Choice {
private:
	static const void *choicesInfo[4];
public:
	static const Info theInfo;
	InterRATEvent(): Choices(&theInfo) {}
};

typedef SequenceOf<InterRATEvent, CONSTRAINED, 1, maxMeasEvent> InterRATEventList;

enum MeasurementQuantityGSMValues {
	gsm_CarrierRSSI = 0,
	dummy = 1,
};
typedef Enumerated<CONSTRAINED, 1> MeasurementQuantityGSM;

class Gsm : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	Gsm(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 63> Tadd_EcIo;

typedef Integer<CONSTRAINED, 0, 15> Tcomp_EcIo;

typedef Integer<CONSTRAINED, 0, 63> SoftSlope;

typedef Integer<CONSTRAINED, 0, 63> AddIntercept;

class Is_2000 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	Is_2000(): Sequence(&theInfo) {}
};

class RatSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RatSpecificInfo(): Choices(&theInfo) {}
};

class InterRATMeasQuantity : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	InterRATMeasQuantity(): Sequence(&theInfo) {}
};

class Gsm : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	Gsm(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 63> Tadd_EcIo;

typedef Integer<CONSTRAINED, 0, 15> Tcomp_EcIo;

typedef Integer<CONSTRAINED, 0, 63> SoftSlope;

typedef Integer<CONSTRAINED, 0, 63> AddIntercept;

class Is_2000 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	Is_2000(): Sequence(&theInfo) {}
};

enum MeasurementQuantityEUTRAValues {
	rrsp = 0,
	rsrq = 1,
};
typedef Enumerated<CONSTRAINED, 1> MeasurementQuantityEUTRA;

class E_UTRA : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	E_UTRA(): Sequence(&theInfo) {}
};

class RatSpecificInfo : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	RatSpecificInfo(): Choices(&theInfo) {}
};

class InterRATMeasQuantityr8 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	InterRATMeasQuantityr8(): Sequence(&theInfo) {}
};

typedef _Null Spare;

class InterRATMeasuredResults : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	InterRATMeasuredResults(): Choices(&theInfo) {}
};

typedef SequenceOf<InterRATMeasuredResults, CONSTRAINED, 1, maxOtherRAT_16> InterRATMeasuredResultsList;

typedef Boolean Utran_EstimatedQuality;

typedef Boolean Dummy;

typedef Boolean Dummy2;

typedef Boolean Gsm_Carrier_RSSI;

class Gsm : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	Gsm(): Sequence(&theInfo) {}
};

class RatSpecificInfo : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	RatSpecificInfo(): Choices(&theInfo) {}
};

class InterRATReportingQuantity : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	InterRATReportingQuantity(): Sequence(&theInfo) {}
};

class InterRATReportingCriteria : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterRATReportingCriteria(): Sequence(&theInfo) {}
};

class InterRATReportCriteria : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	InterRATReportCriteria(): Choices(&theInfo) {}
};

class InterRATMeasurement : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	InterRATMeasurement(): Sequence(&theInfo) {}
};

class InterRATMeasurementr4 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	InterRATMeasurementr4(): Sequence(&theInfo) {}
};

class InterRATMeasurementr6 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	InterRATMeasurementr6(): Sequence(&theInfo) {}
};

class InterRATMeasurementObjects : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	InterRATMeasurementObjects(): Choices(&theInfo) {}
};

typedef Boolean Utran_EstimatedQuality;

typedef Boolean Gsm_Carrier_RSSI;

class Gsm : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Gsm(): Sequence(&theInfo) {}
};

enum reportingQuantityValues {
	measurementQuantity = 0,
	both = 1,
};
typedef Enumerated<CONSTRAINED, 1> reportingQuantity;

class Eutra : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Eutra(): Sequence(&theInfo) {}
};

class RatSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RatSpecificInfo(): Choices(&theInfo) {}
};

class InterRATReportingQuantityr8 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	InterRATReportingQuantityr8(): Sequence(&theInfo) {}
};

class InterRATMeasurementr8 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	InterRATMeasurementr8(): Sequence(&theInfo) {}
};

class InterRATMeasurementObjects : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	InterRATMeasurementObjects(): Choices(&theInfo) {}
};

class InterRATMeasurementr9 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	InterRATMeasurementr9(): Sequence(&theInfo) {}
};

class InterRATMeasurementSysInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterRATMeasurementSysInfo(): Sequence(&theInfo) {}
};

class InterRATMeasurementSysInfoB : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterRATMeasurementSysInfoB(): Sequence(&theInfo) {}
};

typedef _Null RemoveAllIntraFreqCells;

typedef SequenceOf<IntraFreqCellID, CONSTRAINED, 1, maxCellMeas> RemoveSomeIntraFreqCells;

typedef _Null RemoveNoIntraFreqCells;

class RemovedIntraFreqCellList : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	RemovedIntraFreqCellList(): Choices(&theInfo) {}
};

class NewIntraFreqCell : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	NewIntraFreqCell(): Sequence(&theInfo) {}
};

typedef SequenceOf<NewIntraFreqCell, CONSTRAINED, 1, maxCellMeas> NewIntraFreqCellList;

class IntraFreqCellInfoList : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	IntraFreqCellInfoList(): Sequence(&theInfo) {}
};

class NewIntraFreqCellr4 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	NewIntraFreqCellr4(): Sequence(&theInfo) {}
};

typedef SequenceOf<NewIntraFreqCellr4, CONSTRAINED, 1, maxCellMeas> NewIntraFreqCellListr4;

class IntraFreqCellInfoListr4 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	IntraFreqCellInfoListr4(): Sequence(&theInfo) {}
};

typedef _Null RemoveAllIntraFreqCells;

typedef SequenceOf<IntraFreqCellIDOnSecULFreq, CONSTRAINED, 1, maxCellMeasOnSecULFreq> RemoveSomeIntraFreqCells;

typedef _Null RemoveNoIntraFreqCells;

class RemovedIntraFreqCellListOnSecULFreq : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	RemovedIntraFreqCellListOnSecULFreq(): Choices(&theInfo) {}
};

class NewIntraFreqCellOnSecULFreq : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	NewIntraFreqCellOnSecULFreq(): Sequence(&theInfo) {}
};

typedef SequenceOf<NewIntraFreqCellOnSecULFreq, CONSTRAINED, 1, maxCellMeasOnSecULFreq> NewIntraFreqCellListOnSecULFreq;

class IntraFreqCellInfoListInfoOnSecULFreq : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	IntraFreqCellInfoListInfoOnSecULFreq(): Sequence(&theInfo) {}
};

class IntraFreqCellInfoListOnSecULFreq : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IntraFreqCellInfoListOnSecULFreq(): Sequence(&theInfo) {}
};

class NewIntraFreqCellr9 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	NewIntraFreqCellr9(): Sequence(&theInfo) {}
};

typedef SequenceOf<NewIntraFreqCellr9, CONSTRAINED, 1, maxCellMeas> NewIntraFreqCellListr9;

typedef SequenceOf<PrimaryCPICHInfo, CONSTRAINED, 1, maxSIrequest> IntraFreqSIAcquisitionInfo;

class Fdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

typedef _Null Tdd;

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class IntraFreqSIAcquisition : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IntraFreqSIAcquisition(): Sequence(&theInfo) {}
};

class IntraFreqCellInfoListr9 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	IntraFreqCellInfoListr9(): Sequence(&theInfo) {}
};

class NewIntraFreqCellSIRSCP : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	NewIntraFreqCellSIRSCP(): Sequence(&theInfo) {}
};

typedef SequenceOf<NewIntraFreqCellSIRSCP, CONSTRAINED, 1, maxCellMeas> NewIntraFreqCellSIListRSCP;

class IntraFreqCellInfoSIListRSCP : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	IntraFreqCellInfoSIListRSCP(): Sequence(&theInfo) {}
};

class NewIntraFreqCellSIECN0 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	NewIntraFreqCellSIECN0(): Sequence(&theInfo) {}
};

typedef SequenceOf<NewIntraFreqCellSIECN0, CONSTRAINED, 1, maxCellMeas> NewIntraFreqCellSIListECN0;

class IntraFreqCellInfoSIListECN0 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	IntraFreqCellInfoSIListECN0(): Sequence(&theInfo) {}
};

class NewIntraFreqCellSIHCSRSCP : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	NewIntraFreqCellSIHCSRSCP(): Sequence(&theInfo) {}
};

typedef SequenceOf<NewIntraFreqCellSIHCSRSCP, CONSTRAINED, 1, maxCellMeas> NewIntraFreqCellSIListHCSRSCP;

class IntraFreqCellInfoSIListHCSRSCP : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	IntraFreqCellInfoSIListHCSRSCP(): Sequence(&theInfo) {}
};

class NewIntraFreqCellSIHCSECN0 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	NewIntraFreqCellSIHCSECN0(): Sequence(&theInfo) {}
};

typedef SequenceOf<NewIntraFreqCellSIHCSECN0, CONSTRAINED, 1, maxCellMeas> NewIntraFreqCellSIListHCSECN0;

class IntraFreqCellInfoSIListHCSECN0 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	IntraFreqCellInfoSIListHCSECN0(): Sequence(&theInfo) {}
};

class NewIntraFreqCellSIRSCPLCRr4 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	NewIntraFreqCellSIRSCPLCRr4(): Sequence(&theInfo) {}
};

typedef SequenceOf<NewIntraFreqCellSIRSCPLCRr4, CONSTRAINED, 1, maxCellMeas> NewIntraFreqCellSIListRSCPLCRr4;

class IntraFreqCellInfoSIListRSCPLCRr4 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	IntraFreqCellInfoSIListRSCPLCRr4(): Sequence(&theInfo) {}
};

class NewIntraFreqCellSIECN0LCRr4 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	NewIntraFreqCellSIECN0LCRr4(): Sequence(&theInfo) {}
};

typedef SequenceOf<NewIntraFreqCellSIECN0LCRr4, CONSTRAINED, 1, maxCellMeas> NewIntraFreqCellSIListECN0LCRr4;

class IntraFreqCellInfoSIListECN0LCRr4 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	IntraFreqCellInfoSIListECN0LCRr4(): Sequence(&theInfo) {}
};

class NewIntraFreqCellSIHCSRSCPLCRr4 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	NewIntraFreqCellSIHCSRSCPLCRr4(): Sequence(&theInfo) {}
};

typedef SequenceOf<NewIntraFreqCellSIHCSRSCPLCRr4, CONSTRAINED, 1, maxCellMeas> NewIntraFreqCellSIListHCSRSCPLCRr4;

class IntraFreqCellInfoSIListHCSRSCPLCRr4 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	IntraFreqCellInfoSIListHCSRSCPLCRr4(): Sequence(&theInfo) {}
};

class NewIntraFreqCellSIHCSECN0LCRr4 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	NewIntraFreqCellSIHCSECN0LCRr4(): Sequence(&theInfo) {}
};

typedef SequenceOf<NewIntraFreqCellSIHCSECN0LCRr4, CONSTRAINED, 1, maxCellMeas> NewIntraFreqCellSIListHCSECN0LCRr4;

class IntraFreqCellInfoSIListHCSECN0LCRr4 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	IntraFreqCellInfoSIListHCSECN0LCRr4(): Sequence(&theInfo) {}
};

typedef Boolean UseCIO;

class IntraFreqEvent1dr5 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	IntraFreqEvent1dr5(): Sequence(&theInfo) {}
};

enum IntraFreqMeasQuantityFDDsib3Values {
	cpich_Ec_N0 = 0,
	cpich_RSCP = 1,
};
typedef Enumerated<CONSTRAINED, 1> IntraFreqMeasQuantityFDDsib3;

class IntraFreqMeasQuantityTDDsib3List : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	IntraFreqMeasQuantityTDDsib3List(): Sequence(&theInfo) {}
};

typedef SequenceOf<CellMeasuredResults, CONSTRAINED, 1, maxCellMeas> IntraFreqMeasuredResultsList;

typedef SequenceOf<CellMeasuredResultsv920ext, CONSTRAINED, 1, maxCellMeas> IntraFreqMeasuredResultsListv920ext;

enum IntraFreqRepQuantityRACHFDDValues {
	cpich_EcN0 = 0,
	cpich_RSCP = 1,
	pathloss = 2,
	noReport = 3,
};
typedef Enumerated<CONSTRAINED, 3> IntraFreqRepQuantityRACHFDD;

class Fdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

enum IntraFreqRepQuantityRACHTDDValues {
	timeslotISCP = 0,
	primaryCCPCH_RSCP = 1,
	noReport = 2,
};
typedef Enumerated<CONSTRAINED, 2> IntraFreqRepQuantityRACHTDD;

typedef SequenceOf<IntraFreqRepQuantityRACHTDD, CONSTRAINED, 1, 2> IntraFreqRepQuantityRACHTDDList;

class Tdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class IntraFreqReportingQuantityForRACH : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	IntraFreqReportingQuantityForRACH(): Sequence(&theInfo) {}
};

enum MaxReportedCellsOnRACHValues {
	noReport = 0,
	currentCell = 1,
	currentAnd_1_BestNeighbour = 2,
	currentAnd_2_BestNeighbour = 3,
	currentAnd_3_BestNeighbour = 4,
	currentAnd_4_BestNeighbour = 5,
	currentAnd_5_BestNeighbour = 6,
	currentAnd_6_BestNeighbour = 7,
};
typedef Enumerated<CONSTRAINED, 7> MaxReportedCellsOnRACH;

class IntraFreqReportingQuantity : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	IntraFreqReportingQuantity(): Sequence(&theInfo) {}
};

enum TransferModeValues {
	acknowledgedModeRLC = 0,
	unacknowledgedModeRLC = 1,
};
typedef Enumerated<CONSTRAINED, 1> TransferMode;

enum PeriodicalOrEventTriggerValues {
	periodical = 0,
	eventTrigger = 1,
};
typedef Enumerated<CONSTRAINED, 1> PeriodicalOrEventTrigger;

class MeasurementReportingMode : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MeasurementReportingMode(): Sequence(&theInfo) {}
};

class ReportingInfoForCellDCH : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	ReportingInfoForCellDCH(): Sequence(&theInfo) {}
};

class IntraFreqMeasurementSysInfoRSCP : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	IntraFreqMeasurementSysInfoRSCP(): Sequence(&theInfo) {}
};

class IntraFreqMeasurementSysInfoECN0 : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	IntraFreqMeasurementSysInfoECN0(): Sequence(&theInfo) {}
};

class IntraFreqMeasurementSysInfoHCSRSCP : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	IntraFreqMeasurementSysInfoHCSRSCP(): Sequence(&theInfo) {}
};

class IntraFreqMeasurementSysInfoHCSECN0 : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	IntraFreqMeasurementSysInfoHCSECN0(): Sequence(&theInfo) {}
};

class ReportingInfoForCellDCHLCRr4 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	ReportingInfoForCellDCHLCRr4(): Sequence(&theInfo) {}
};

class IntraFreqMeasurementSysInfoRSCPLCRr4 : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	IntraFreqMeasurementSysInfoRSCPLCRr4(): Sequence(&theInfo) {}
};

class IntraFreqMeasurementSysInfoECN0LCRr4 : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	IntraFreqMeasurementSysInfoECN0LCRr4(): Sequence(&theInfo) {}
};

class IntraFreqMeasurementSysInfoHCSRSCPLCRr4 : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	IntraFreqMeasurementSysInfoHCSRSCPLCRr4(): Sequence(&theInfo) {}
};

class IntraFreqMeasurementSysInfoHCSECN0LCRr4 : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	IntraFreqMeasurementSysInfoHCSECN0LCRr4(): Sequence(&theInfo) {}
};

class IntraFreqReportCriteria : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	IntraFreqReportCriteria(): Choices(&theInfo) {}
};

class IntraFreqReportCriteriar4 : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	IntraFreqReportCriteriar4(): Choices(&theInfo) {}
};

class IntraFreqReportCriteriar6 : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	IntraFreqReportCriteriar6(): Choices(&theInfo) {}
};

class IntraFreqReportCriteriar7 : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	IntraFreqReportCriteriar7(): Choices(&theInfo) {}
};

class IntraFreqReportCriteriar9 : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	IntraFreqReportCriteriar9(): Choices(&theInfo) {}
};

class IntraFreqReportingCriteria1br5 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IntraFreqReportingCriteria1br5(): Sequence(&theInfo) {}
};

class IntraFrequencyMeasurement : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	IntraFrequencyMeasurement(): Sequence(&theInfo) {}
};

class IntraFrequencyMeasurementr4 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	IntraFrequencyMeasurementr4(): Sequence(&theInfo) {}
};

class IntraFrequencyMeasurementr6 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	IntraFrequencyMeasurementr6(): Sequence(&theInfo) {}
};

class IntraFrequencyMeasurementr7 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	IntraFrequencyMeasurementr7(): Sequence(&theInfo) {}
};

class IntraFrequencyMeasurementr9 : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	IntraFrequencyMeasurementr9(): Sequence(&theInfo) {}
};

typedef SequenceOf<CellMeasuredResultsr9, CONSTRAINED, 1, maxCellMeasOnSecULFreq> IntraFrequencyMeasuredResultsListOnSecULFreq;

enum IPLengthValues {
	ipl5 = 0,
	ipl10 = 1,
};
typedef Enumerated<CONSTRAINED, 1> IPLength;

typedef Boolean IPPCCPCHr4;

enum IPSpacingValues {
	e5 = 0,
	e7 = 1,
	e10 = 2,
	e15 = 3,
	e20 = 4,
	e30 = 5,
	e40 = 6,
	e50 = 7,
};
typedef Enumerated<CONSTRAINED, 7> IPSpacing;

enum IPSpacingTDDValues {
	e30 = 0,
	e40 = 1,
	e50 = 2,
	e70 = 3,
	e100 = 4,
};
typedef Enumerated<CONSTRAINED, 4> IPSpacingTDD;

enum RLCBuffersPayloadValues {
	pl0 = 0,
	pl4 = 1,
	pl8 = 2,
	pl16 = 3,
	pl32 = 4,
	pl64 = 5,
	pl128 = 6,
	pl256 = 7,
	pl512 = 8,
	pl1024 = 9,
	pl2k = 10,
	pl4k = 11,
	pl8k = 12,
	pl16k = 13,
	pl32k = 14,
	pl64k = 15,
	pl128k = 16,
	pl256k = 17,
	pl512k = 18,
	pl1024k = 19,
	spare12 = 20,
	spare11 = 21,
	spare10 = 22,
	spare9 = 23,
	spare8 = 24,
	spare7 = 25,
	spare6 = 26,
	spare5 = 27,
	spare4 = 28,
	spare3 = 29,
	spare2 = 30,
	spare1 = 31,
};
typedef Enumerated<CONSTRAINED, 31> RLCBuffersPayload;

enum VarianceOfRLCBufferPayloadValues {
	plv0 = 0,
	plv4 = 1,
	plv8 = 2,
	plv16 = 3,
	plv32 = 4,
	plv64 = 5,
	plv128 = 6,
	plv256 = 7,
	plv512 = 8,
	plv1024 = 9,
	plv2k = 10,
	plv4k = 11,
	plv8k = 12,
	plv16k = 13,
	spare2 = 14,
	spare1 = 15,
};
typedef Enumerated<CONSTRAINED, 15> VarianceOfRLCBufferPayload;

class TrafficVolumeMeasuredResults : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	TrafficVolumeMeasuredResults(): Sequence(&theInfo) {}
};

typedef SequenceOf<TrafficVolumeMeasuredResults, CONSTRAINED, 1, maxRB> TrafficVolumeMeasuredResultsList;

typedef _Null Fdd;

typedef Integer<CONSTRAINED, 0, 63> SIR;

typedef SequenceOf<SIR, CONSTRAINED, 1, maxTS> SIRTimeslotList;

class SIRMeasurementResults : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SIRMeasurementResults(): Sequence(&theInfo) {}
};

typedef SequenceOf<SIRMeasurementResults, CONSTRAINED, 1, maxCCTrCH> SIRMeasurementList;

class Tdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class QualityMeasuredResults : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	QualityMeasuredResults(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 104> UETransmittedPower;

typedef Integer<CONSTRAINED, 768, 1791> UERXTXTimeDifferenceType1;

class UERXTXReportEntry : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UERXTXReportEntry(): Sequence(&theInfo) {}
};

typedef SequenceOf<UERXTXReportEntry, CONSTRAINED, 1, maxRL> UERXTXReportEntryList;

class Fdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

typedef SequenceOf<UETransmittedPower, CONSTRAINED, 1, maxTS> UETransmittedPowerTDDList;

class Tdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class UEInternalMeasuredResults : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEInternalMeasuredResults(): Sequence(&theInfo) {}
};

enum UEPositioningErrorCauseValues {
	notEnoughOTDOA_Cells = 0,
	notEnoughGPS_Satellites = 1,
	assistanceDataMissing = 2,
	notAccomplishedGPS_TimingOfCellFrames = 3,
	undefinedError = 4,
	requestDeniedByUser = 5,
	notProcessedAndTimeout = 6,
	referenceCellNotServingCell = 7,
};
typedef Enumerated<CONSTRAINED, 7> UEPositioningErrorCause;

typedef Boolean AlmanacRequest;

typedef Boolean UtcModelRequest;

typedef Boolean IonosphericModelRequest;

typedef Boolean NavigationModelRequest;

typedef Boolean DgpsCorrectionsRequest;

typedef Boolean ReferenceLocationRequest;

typedef Boolean ReferenceTimeRequest;

typedef Boolean AquisitionAssistanceRequest;

typedef Boolean RealTimeIntegrityRequest;

typedef Integer<CONSTRAINED, 0, 1023> Gps_Week;

typedef Integer<CONSTRAINED, 0, 255> Gps_Toe;

typedef Integer<CONSTRAINED, 0, 15> TToeLimit;

class SatData : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SatData(): Sequence(&theInfo) {}
};

typedef SequenceOf<SatData, CONSTRAINED, 0, maxSat> SatDataList;

class UEPositioningGPSNavModelAddDataReq : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	UEPositioningGPSNavModelAddDataReq(): Sequence(&theInfo) {}
};

class UEPositioningGPSAdditionalAssistanceDataRequest : Sequence {
private:
	static const void *itemsInfo[10];
	static bool itemsPres[10];
public:
	static const Info theInfo;
	UEPositioningGPSAdditionalAssistanceDataRequest(): Sequence(&theInfo) {}
};

class UEPositioningError : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UEPositioningError(): Sequence(&theInfo) {}
};

class UEPositioningMeasuredResults : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	UEPositioningMeasuredResults(): Sequence(&theInfo) {}
};

typedef _Null Spare;

class MeasuredResults : Choice {
private:
	static const void *choicesInfo[8];
public:
	static const Info theInfo;
	MeasuredResults(): Choices(&theInfo) {}
};

class MeasuredResultsOnSecUlFreq : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasuredResultsOnSecUlFreq(): Sequence(&theInfo) {}
};

class Fdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

typedef _Null Tdd;

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class Neighbourv390ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Neighbourv390ext(): Sequence(&theInfo) {}
};

typedef SequenceOf<Neighbourv390ext, CONSTRAINED, 1, maxCellMeas> NeighbourListv390ext;

class UEPositioningOTDOAMeasurementv390ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningOTDOAMeasurementv390ext(): Sequence(&theInfo) {}
};

class UEPositioningMeasuredResultsv390ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningMeasuredResultsv390ext(): Sequence(&theInfo) {}
};

class MeasuredResultsv390ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasuredResultsv390ext(): Sequence(&theInfo) {}
};

class MeasuredResultsv590ext : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	MeasuredResultsv590ext(): Choices(&theInfo) {}
};

class Tdd384_768 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd384_768(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 8191> T_ADV;

typedef Integer<CONSTRAINED, 0, 4095> Sfn;

class TADVinfoext : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TADVinfoext(): Sequence(&theInfo) {}
};

class Tdd128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd128(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class UEInternalMeasuredResultsv770ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEInternalMeasuredResultsv770ext(): Sequence(&theInfo) {}
};

enum UEPositioningErrorCauser7Values {
	notEnoughOTDOA_Cells = 0,
	notEnoughGPS_Satellites = 1,
	assistanceDataMissing = 2,
	notAccomplishedGPS_TimingOfCellFrames = 3,
	undefinedError = 4,
	requestDeniedByUser = 5,
	notProcessedAndTimeout = 6,
	referenceCellNotServingCell = 7,
	notEnoughGANSS_Satellites = 8,
	notAccomplishedGANSS_TimingOfCellFrames = 9,
	spare6 = 10,
	spare5 = 11,
	spare4 = 12,
	spare3 = 13,
	spare2 = 14,
	spare1 = 15,
};
typedef Enumerated<CONSTRAINED, 15> UEPositioningErrorCauser7;

typedef Boolean GanssReferenceTime;

typedef Boolean GanssreferenceLocation;

typedef Boolean GanssIonosphericModel;

class UEPositioningGANSSAdditionalAssistanceDataRequest : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	UEPositioningGANSSAdditionalAssistanceDataRequest(): Sequence(&theInfo) {}
};

class UEPositioningErrorr7 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	UEPositioningErrorr7(): Sequence(&theInfo) {}
};

class UEPositioningMeasuredResultsv770ext : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	UEPositioningMeasuredResultsv770ext(): Sequence(&theInfo) {}
};

class MeasuredResultsv770ext : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	MeasuredResultsv770ext(): Choices(&theInfo) {}
};

typedef BitString<CONSTRAINED, 2, 2> GanssAddIonoModelReq;

enum ganssEOPreqValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> ganssEOPreq;

class UEPositioningGANSSAdditionalAssistanceDataRequestv860ext : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	UEPositioningGANSSAdditionalAssistanceDataRequestv860ext(): Sequence(&theInfo) {}
};

class UEPositioningErrorv860ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningErrorv860ext(): Sequence(&theInfo) {}
};

class UEPositioningMeasuredResultsv860ext : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UEPositioningMeasuredResultsv860ext(): Sequence(&theInfo) {}
};

class MeasuredResultsv860ext : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	MeasuredResultsv860ext(): Choices(&theInfo) {}
};

class MeasuredResultsv920ext : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	MeasuredResultsv920ext(): Choices(&theInfo) {}
};

typedef SequenceOf<MeasuredResultsv920ext, CONSTRAINED, 1, maxAdditionalMeas> MeasuredResultsListv920ext;

typedef SequenceOf<MeasuredResultsOnSecUlFreq, CONSTRAINED, 1, maxAdditionalMeas> MeasuredResultsListOnSecUlFreq;

typedef Integer<CONSTRAINED, 0, 2047> T_ADV;

typedef Integer<CONSTRAINED, 0, 4095> Sfn;

class TADVinfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TADVinfo(): Sequence(&theInfo) {}
};

class UEInternalMeasuredResultsLCRr4 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UEInternalMeasuredResultsLCRr4(): Sequence(&theInfo) {}
};

typedef _Null Spare;

class MeasuredResultsLCRr4 : Choice {
private:
	static const void *choicesInfo[8];
public:
	static const Info theInfo;
	MeasuredResultsLCRr4(): Choices(&theInfo) {}
};

typedef SequenceOf<MeasuredResults, CONSTRAINED, 1, maxAdditionalMeas> MeasuredResultsList;

typedef SequenceOf<MeasuredResultsLCRr4, CONSTRAINED, 1, maxAdditionalMeas> MeasuredResultsListLCRr4ext;

class MeasuredResultsListv770xet : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	MeasuredResultsListv770xet(): Sequence(&theInfo) {}
};

class MeasuredResultsListv860ext : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	MeasuredResultsListv860ext(): Sequence(&theInfo) {}
};

typedef _Null Spare;

class MeasurementQuantity : Choice {
private:
	static const void *choicesInfo[4];
public:
	static const Info theInfo;
	MeasurementQuantity(): Choices(&theInfo) {}
};

class Fdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class CurrentCell : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CurrentCell(): Sequence(&theInfo) {}
};

typedef _Null Spare;

class MeasurementQuantity : Choice {
private:
	static const void *choicesInfo[4];
public:
	static const Info theInfo;
	MeasurementQuantity(): Choices(&theInfo) {}
};

class Fdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class MonitoredCellRACHResult : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MonitoredCellRACHResult(): Sequence(&theInfo) {}
};

typedef SequenceOf<MonitoredCellRACHResult, CONSTRAINED, 1, 8> MonitoredCellRACHList;

class MeasuredResultsOnRACH : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MeasuredResultsOnRACH(): Sequence(&theInfo) {}
};

typedef SequenceOf<DeltaRSCPPerCell, CONSTRAINED, 1, 8> MonitoredCellRACHListv7g0ext;

class MeasuredResultsOnRACHv7g0ext : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MeasuredResultsOnRACHv7g0ext(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 1> InterFreqCellIndication_SIB11;

typedef Integer<CONSTRAINED, 0, 1> InterFreqCellIndication_SIB12;

class MeasuredResultsOnRACHinterFreq : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	MeasuredResultsOnRACHinterFreq(): Sequence(&theInfo) {}
};

enum UEPositioningMethodTypeValues {
	ue_Assisted = 0,
	ue_Based = 1,
	ue_BasedPreferred = 2,
	ue_AssistedPreferred = 3,
};
typedef Enumerated<CONSTRAINED, 3> UEPositioningMethodType;

enum PositioningMethodValues {
	otdoa = 0,
	gps = 1,
	otdoaOrGPS = 2,
	cellID = 3,
};
typedef Enumerated<CONSTRAINED, 3> PositioningMethod;

enum UEPositioningResponseTimeValues {
	s1 = 0,
	s2 = 1,
	s4 = 2,
	s8 = 3,
	s16 = 4,
	s32 = 5,
	s64 = 6,
	s128 = 7,
};
typedef Enumerated<CONSTRAINED, 7> UEPositioningResponseTime;

typedef BitString<CONSTRAINED, 7, 7> UEPositioningAccuracy;

typedef Boolean Gps_TimingOfCellWanted;

typedef Boolean Dummy2;

typedef Boolean AdditionalAssistanceDataRequest;

class UEPositioningReportingQuantity : Sequence {
private:
	static const void *itemsInfo[8];
	static bool itemsPres[8];
public:
	static const Info theInfo;
	UEPositioningReportingQuantity(): Sequence(&theInfo) {}
};

typedef Boolean ReportFirstFix;

enum UEPositioningMeasurementIntervalValues {
	e5 = 0,
	e15 = 1,
	e60 = 2,
	e300 = 3,
	e900 = 4,
	e1800 = 5,
	e3600 = 6,
	e7200 = 7,
};
typedef Enumerated<CONSTRAINED, 7> UEPositioningMeasurementInterval;

enum ThresholdPositionChangeValues {
	pc10 = 0,
	pc20 = 1,
	pc30 = 2,
	pc40 = 3,
	pc50 = 4,
	pc100 = 5,
	pc200 = 6,
	pc300 = 7,
	pc500 = 8,
	pc1000 = 9,
	pc2000 = 10,
	pc5000 = 11,
	pc10000 = 12,
	pc20000 = 13,
	pc50000 = 14,
	pc100000 = 15,
};
typedef Enumerated<CONSTRAINED, 15> ThresholdPositionChange;

enum ThresholdSFNSFNChangeValues {
	c0_25 = 0,
	c0_5 = 1,
	c1 = 2,
	c2 = 3,
	c3 = 4,
	c4 = 5,
	c5 = 6,
	c10 = 7,
	c20 = 8,
	c50 = 9,
	c100 = 10,
	c200 = 11,
	c500 = 12,
	c1000 = 13,
	c2000 = 14,
	c5000 = 15,
};
typedef Enumerated<CONSTRAINED, 15> ThresholdSFNSFNChange;

enum ThresholdSFNGPSTOWValues {
	ms1 = 0,
	ms2 = 1,
	ms3 = 2,
	ms5 = 3,
	ms10 = 4,
	ms20 = 5,
	ms50 = 6,
	ms100 = 7,
};
typedef Enumerated<CONSTRAINED, 7> ThresholdSFNGPSTOW;

class UEPositioningEventSpecificInfo : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	UEPositioningEventSpecificInfo(): Choices(&theInfo) {}
};

class UEPositioningEventParam : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	UEPositioningEventParam(): Sequence(&theInfo) {}
};

typedef SequenceOf<UEPositioningEventParam, CONSTRAINED, 1, maxMeasEvent> UEPositioningEventParamList;

typedef _Null NoReporting;

class UEPositioningReportCriteria : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	UEPositioningReportCriteria(): Choices(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 4095> Sfn;

class Fdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class UeBased : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	UeBased(): Sequence(&theInfo) {}
};

class UeAssisted : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	UeAssisted(): Sequence(&theInfo) {}
};

class PositioningMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PositioningMode(): Choices(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 9> Ip_Offset;

typedef Integer<CONSTRAINED, 0, 63> Seed;

class UEPositioningIPDLParameters : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	UEPositioningIPDLParameters(): Sequence(&theInfo) {}
};

class UEPositioningOTDOAReferenceCellInfo : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	UEPositioningOTDOAReferenceCellInfo(): Sequence(&theInfo) {}
};

class Fdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0 ,  4095> Sfn_Offset;

typedef Integer<CONSTRAINED, 0,  38399> Sfn_sfn_Reltimedifference;

class SFNSFNRelTimeDifference1 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SFNSFNRelTimeDifference1(): Sequence(&theInfo) {}
};

enum SFNSFNDriftValues {
	sfnsfndrift0 = 0,
	sfnsfndrift1 = 1,
	sfnsfndrift2 = 2,
	sfnsfndrift3 = 3,
	sfnsfndrift4 = 4,
	sfnsfndrift5 = 5,
	sfnsfndrift8 = 6,
	sfnsfndrift10 = 7,
	sfnsfndrift15 = 8,
	sfnsfndrift25 = 9,
	sfnsfndrift35 = 10,
	sfnsfndrift50 = 11,
	sfnsfndrift65 = 12,
	sfnsfndrift80 = 13,
	sfnsfndrift100 = 14,
	sfnsfndrift_1 = 15,
	sfnsfndrift_2 = 16,
	sfnsfndrift_3 = 17,
	sfnsfndrift_4 = 18,
	sfnsfndrift_5 = 19,
	sfnsfndrift_8 = 20,
	sfnsfndrift_10 = 21,
	sfnsfndrift_15 = 22,
	sfnsfndrift_25 = 23,
	sfnsfndrift_35 = 24,
	sfnsfndrift_50 = 25,
	sfnsfndrift_65 = 26,
	sfnsfndrift_80 = 27,
	sfnsfndrift_100 = 28,
};
typedef Enumerated<CONSTRAINED, 28> SFNSFNDrift;

enum OTDOASearchWindowSizeValues {
	c20 = 0,
	c40 = 1,
	c80 = 2,
	c160 = 3,
	c320 = 4,
	c640 = 5,
	c1280 = 6,
	moreThan1280 = 7,
};
typedef Enumerated<CONSTRAINED, 7> OTDOASearchWindowSize;

class UeBased : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	UeBased(): Sequence(&theInfo) {}
};

class UeAssisted : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	UeAssisted(): Sequence(&theInfo) {}
};

class PositioningMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PositioningMode(): Choices(&theInfo) {}
};

class UEPositioningOTDOANeighbourCellInfo : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	UEPositioningOTDOANeighbourCellInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<UEPositioningOTDOANeighbourCellInfo, CONSTRAINED, 1, maxCellMeas> UEPositioningOTDOANeighbourCellList;

class UEPositioningOTDOAAssistanceData : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UEPositioningOTDOAAssistanceData(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 1023> Gps_Week;

typedef Integer<CONSTRAINED, 0, 1023> Ms_part;

typedef Integer<CONSTRAINED, 0, 4294967295> Ls_part;

class Utran_GPSTimingOfCell : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Utran_GPSTimingOfCell(): Sequence(&theInfo) {}
};

class Fdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 4095> Sfn;

class UTRANGPSReferenceTime : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	UTRANGPSReferenceTime(): Sequence(&theInfo) {}
};

enum SFNTOWUncertaintyValues {
	lessThan10 = 0,
	moreThan10 = 1,
};
typedef Enumerated<CONSTRAINED, 1> SFNTOWUncertainty;

enum UTRANGPSDriftRateValues {
	utran_GPSDrift0 = 0,
	utran_GPSDrift1 = 1,
	utran_GPSDrift2 = 2,
	utran_GPSDrift5 = 3,
	utran_GPSDrift10 = 4,
	utran_GPSDrift15 = 5,
	utran_GPSDrift25 = 6,
	utran_GPSDrift50 = 7,
	utran_GPSDrift_1 = 8,
	utran_GPSDrift_2 = 9,
	utran_GPSDrift_5 = 10,
	utran_GPSDrift_10 = 11,
	utran_GPSDrift_15 = 12,
	utran_GPSDrift_25 = 13,
	utran_GPSDrift_50 = 14,
};
typedef Enumerated<CONSTRAINED, 14> UTRANGPSDriftRate;

class UEPositioningGPSReferenceTime : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	UEPositioningGPSReferenceTime(): Sequence(&theInfo) {}
};

class ReferenceLocation : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ReferenceLocation(): Sequence(&theInfo) {}
};

class UEPositioningGPSDGPSCorrections : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	UEPositioningGPSDGPSCorrections(): Sequence(&theInfo) {}
};

enum SatelliteStatusValues {
	ns_NN_U = 0,
	es_SN = 1,
	es_NN_U = 2,
	rev2 = 3,
	rev = 4,
};
typedef Enumerated<CONSTRAINED, 4> SatelliteStatus;

typedef BitString<CONSTRAINED, 2, 2> CodeOnL2;

typedef BitString<CONSTRAINED, 4, 4> UraIndex;

typedef BitString<CONSTRAINED, 6, 6> SatHealth;

typedef BitString<CONSTRAINED, 10, 10> Iodc;

typedef BitString<CONSTRAINED, 1, 1> L2Pflag;

typedef BitString<CONSTRAINED, 23, 23> Reserved1;

typedef BitString<CONSTRAINED, 24, 24> Reserved2;

typedef BitString<CONSTRAINED, 24, 24> Reserved3;

typedef BitString<CONSTRAINED, 16, 16> Reserved4;

class SubFrame1Reserved : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	SubFrame1Reserved(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED, 8, 8> T_GD;

typedef BitString<CONSTRAINED, 16, 16> T_oc;

typedef BitString<CONSTRAINED, 8, 8> Af2;

typedef BitString<CONSTRAINED, 16, 16> Af1;

typedef BitString<CONSTRAINED, 22, 22> Af0;

typedef BitString<CONSTRAINED, 16, 16> C_rs;

typedef BitString<CONSTRAINED, 16, 16> Delta_n;

typedef BitString<CONSTRAINED, 32, 32> M0;

typedef BitString<CONSTRAINED, 16, 16> C_uc;

typedef BitString<CONSTRAINED, 32, 32> E;

typedef BitString<CONSTRAINED, 16, 16> C_us;

typedef BitString<CONSTRAINED, 32, 32> A_Sqrt;

typedef BitString<CONSTRAINED, 16, 16> T_oe;

typedef BitString<CONSTRAINED, 1, 1> FitInterval;

typedef BitString<CONSTRAINED, 5, 5> Aodo;

typedef BitString<CONSTRAINED, 16, 16> C_ic;

typedef BitString<CONSTRAINED, 32, 32> Omega0;

typedef BitString<CONSTRAINED, 16, 16> C_is;

typedef BitString<CONSTRAINED, 32, 32> I0;

typedef BitString<CONSTRAINED, 16, 16> C_rc;

typedef BitString<CONSTRAINED, 32, 32> Omega;

typedef BitString<CONSTRAINED, 24, 24> OmegaDot;

typedef BitString<CONSTRAINED, 14, 14> IDot;

class EphemerisParameter : Sequence {
private:
	static const void *itemsInfo[29];
	static bool itemsPres[29];
public:
	static const Info theInfo;
	EphemerisParameter(): Sequence(&theInfo) {}
};

class NavigationModelSatInfo : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	NavigationModelSatInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<NavigationModelSatInfo, CONSTRAINED, 1, maxSat> NavigationModelSatInfoList;

class UEPositioningGPSNavigationModel : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningGPSNavigationModel(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED, 8, 8> Alpha0;

typedef BitString<CONSTRAINED, 8, 8> Alpha1;

typedef BitString<CONSTRAINED, 8, 8> Alpha2;

typedef BitString<CONSTRAINED, 8, 8> Alpha3;

typedef BitString<CONSTRAINED, 8, 8> Beta0;

typedef BitString<CONSTRAINED, 8, 8> Beta1;

typedef BitString<CONSTRAINED, 8, 8> Beta2;

typedef BitString<CONSTRAINED, 8, 8> Beta3;

class UEPositioningGPSIonosphericModel : Sequence {
private:
	static const void *itemsInfo[8];
	static bool itemsPres[8];
public:
	static const Info theInfo;
	UEPositioningGPSIonosphericModel(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED, 24, 24> A1;

typedef BitString<CONSTRAINED, 32, 32> A0;

typedef BitString<CONSTRAINED, 8, 8> T_ot;

typedef BitString<CONSTRAINED, 8, 8> Wn_t;

typedef BitString<CONSTRAINED, 8, 8> Delta_t_LS;

typedef BitString<CONSTRAINED, 8, 8> Wn_lsf;

typedef BitString<CONSTRAINED, 8, 8> Dn;

typedef BitString<CONSTRAINED, 8, 8> Delta_t_LSF;

class UEPositioningGPSUTCModel : Sequence {
private:
	static const void *itemsInfo[8];
	static bool itemsPres[8];
public:
	static const Info theInfo;
	UEPositioningGPSUTCModel(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED, 8, 8> Wn_a;

typedef BitString<CONSTRAINED, 364, 364> Sv_GlobalHealth;

class UEPositioningGPSAlmanac : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	UEPositioningGPSAlmanac(): Sequence(&theInfo) {}
};

class UEPositioningGPSAcquisitionAssistance : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	UEPositioningGPSAcquisitionAssistance(): Sequence(&theInfo) {}
};

class Fdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class UEPositioningGPSReferenceCellInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningGPSReferenceCellInfo(): Sequence(&theInfo) {}
};

class UEPositioningGPSAssistanceData : Sequence {
private:
	static const void *itemsInfo[10];
	static bool itemsPres[10];
public:
	static const Info theInfo;
	UEPositioningGPSAssistanceData(): Sequence(&theInfo) {}
};

class UEPositioningMeasurement : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	UEPositioningMeasurement(): Sequence(&theInfo) {}
};

typedef SequenceOf<ULTrCHIdentity, CONSTRAINED, 1, maxTrCH> TrafficVolumeMeasurementObjectList;

typedef _Null Rlc_BufferPayload;

typedef Integer<CONSTRAINED, 1, 13> TimeInterval;

class TrafficVolumeMeasQuantity : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	TrafficVolumeMeasQuantity(): Choices(&theInfo) {}
};

typedef Boolean Rlc_RB_BufferPayload;

typedef Boolean Rlc_RB_BufferPayloadAverage;

typedef Boolean Rlc_RB_BufferPayloadVariance;

class TrafficVolumeReportingQuantity : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	TrafficVolumeReportingQuantity(): Sequence(&theInfo) {}
};

enum TrafficVolumeThresholdValues {
	th8 = 0,
	th16 = 1,
	th32 = 2,
	th64 = 3,
	th128 = 4,
	th256 = 5,
	th512 = 6,
	th1024 = 7,
	th2k = 8,
	th3k = 9,
	th4k = 10,
	th6k = 11,
	th8k = 12,
	th12k = 13,
	th16k = 14,
	th24k = 15,
	th32k = 16,
	th48k = 17,
	th64k = 18,
	th96k = 19,
	th128k = 20,
	th192k = 21,
	th256k = 22,
	th384k = 23,
	th512k = 24,
	th768k = 25,
};
typedef Enumerated<CONSTRAINED, 25> TrafficVolumeThreshold;

enum PendingTimeAfterTriggerValues {
	ptat0_25 = 0,
	ptat0_5 = 1,
	ptat1 = 2,
	ptat2 = 3,
	ptat4 = 4,
	ptat8 = 5,
	ptat16 = 6,
};
typedef Enumerated<CONSTRAINED, 6> PendingTimeAfterTrigger;

enum TXInterruptionAfterTriggerValues {
	txiat0_25 = 0,
	txiat0_5 = 1,
	txiat1 = 2,
	txiat2 = 3,
	txiat4 = 4,
	txiat8 = 5,
	txiat16 = 6,
};
typedef Enumerated<CONSTRAINED, 6> TXInterruptionAfterTrigger;

class TrafficVolumeEventParam : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	TrafficVolumeEventParam(): Sequence(&theInfo) {}
};

typedef SequenceOf<TrafficVolumeEventParam, CONSTRAINED, 1, maxMeasParEvent> EventSpecificParameters;

class TransChCriteria : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TransChCriteria(): Sequence(&theInfo) {}
};

typedef SequenceOf<TransChCriteria, CONSTRAINED, 1, maxTrCH> TransChCriteriaList;

class TrafficVolumeReportingCriteria : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	TrafficVolumeReportingCriteria(): Sequence(&theInfo) {}
};

typedef _Null NoReporting;

class TrafficVolumeReportCriteria : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	TrafficVolumeReportCriteria(): Choices(&theInfo) {}
};

class TrafficVolumeMeasurement : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	TrafficVolumeMeasurement(): Sequence(&theInfo) {}
};

typedef Boolean Dl_TransChBLER;

typedef _Null Fdd;


typedef SequenceOf<SIRTFCS, CONSTRAINED, 1, maxCCTrCH> SIRTFCSList;

class Tdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class QualityReportingQuantity : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	QualityReportingQuantity(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 512> TotalCRC;

typedef Integer<CONSTRAINED, 1, 512> BadCRC;

typedef Integer<CONSTRAINED, 1, 512> PendingAfterTrigger;

class QualityReportingCriteriaSingle : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	QualityReportingCriteriaSingle(): Sequence(&theInfo) {}
};

typedef SequenceOf<QualityReportingCriteriaSingle, CONSTRAINED, 1, maxTrCH> QualityReportingCriteria;

typedef _Null NoReporting;

class QualityReportCriteria : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	QualityReportCriteria(): Choices(&theInfo) {}
};

class QualityMeasurement : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	QualityMeasurement(): Sequence(&theInfo) {}
};

enum UEMeasurementQuantityValues {
	ue_TransmittedPower = 0,
	utra_Carrier_RSSI = 1,
	ue_RX_TX_TimeDifference = 2,
};
typedef Enumerated<CONSTRAINED, 2> UEMeasurementQuantity;

class UEInternalMeasQuantity : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UEInternalMeasQuantity(): Sequence(&theInfo) {}
};

typedef Boolean Ue_TransmittedPower;

typedef Boolean Ue_RX_TX_TimeDifference;

class Fdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

typedef Boolean AppliedTA;

class Tdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class UEInternalReportingQuantity : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UEInternalReportingQuantity(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, -50, 33> TransmittedPowerThreshold;

class UE6ABEvent : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UE6ABEvent(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 768, 1280> UERXTXTimeDifferenceThreshold;

class UE6FGEvent : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UE6FGEvent(): Sequence(&theInfo) {}
};

class UEInternalEventParam : Choice {
private:
	static const void *choicesInfo[7];
public:
	static const Info theInfo;
	UEInternalEventParam(): Choices(&theInfo) {}
};

typedef SequenceOf<UEInternalEventParam, CONSTRAINED, 1, maxMeasEvent> UEInternalEventParamList;

class UEInternalReportingCriteria : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEInternalReportingCriteria(): Sequence(&theInfo) {}
};

typedef _Null NoReporting;

class UEInternalReportCriteria : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	UEInternalReportCriteria(): Choices(&theInfo) {}
};

class UEInternalMeasurement : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	UEInternalMeasurement(): Sequence(&theInfo) {}
};

class MeasurementType : Choice {
private:
	static const void *choicesInfo[7];
public:
	static const Info theInfo;
	MeasurementType(): Choices(&theInfo) {}
};

class Modify : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Modify(): Sequence(&theInfo) {}
};

typedef _Null Release;

class MeasurementCommand : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	MeasurementCommand(): Choices(&theInfo) {}
};

typedef Boolean Gps_TimingOfCellWanted;

typedef Boolean AdditionalAssistanceDataReq;

class UEPositioningReportingQuantityr4 : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	UEPositioningReportingQuantityr4(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 4095> Sfn;

class Fdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class ReferenceCellPosition : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ReferenceCellPosition(): Choices(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 32766> RoundTripTime;

class UeBased : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UeBased(): Sequence(&theInfo) {}
};

class UeAssisted : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	UeAssisted(): Sequence(&theInfo) {}
};

class PositioningMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PositioningMode(): Choices(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 9> Ip_Offset;

typedef Integer<CONSTRAINED, 0, 63> Seed;

class Fdd : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 14> Ip_slot;

typedef Integer<CONSTRAINED, 0, 4095> Ip_Start;

class Tdd : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class UEPositioningIPDLParametersr4 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UEPositioningIPDLParametersr4(): Sequence(&theInfo) {}
};

class UEPositioningOTDOAReferenceCellInfor4 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	UEPositioningOTDOAReferenceCellInfor4(): Sequence(&theInfo) {}
};

class Fdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

enum SFNOffsetValidityValues {
	false = 0,
};
typedef Enumerated<CONSTRAINED, 0> SFNOffsetValidity;

typedef Integer<CONSTRAINED, -20000, 20000> RelativeNorth;

typedef Integer<CONSTRAINED, -20000, 20000> RelativeEast;

typedef Integer<CONSTRAINED, -4000, 4000> RelativeAltitude;

typedef Integer<CONSTRAINED, 0,  32766> RoundTripTime;

class UeBased : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	UeBased(): Sequence(&theInfo) {}
};

class UeAssisted : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	UeAssisted(): Sequence(&theInfo) {}
};

class PositioningMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PositioningMode(): Choices(&theInfo) {}
};

class UEPositioningOTDOANeighbourCellInfor4 : Sequence {
private:
	static const void *itemsInfo[8];
	static bool itemsPres[8];
public:
	static const Info theInfo;
	UEPositioningOTDOANeighbourCellInfor4(): Sequence(&theInfo) {}
};

typedef SequenceOf<UEPositioningOTDOANeighbourCellInfor4, CONSTRAINED, 1, maxCellMeas> UEPositioningOTDOANeighbourCellListr4;

class UEPositioningOTDOAAssistanceDatar4 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UEPositioningOTDOAAssistanceDatar4(): Sequence(&theInfo) {}
};

class UEPositioningMeasurementr4 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	UEPositioningMeasurementr4(): Sequence(&theInfo) {}
};

typedef Boolean Ue_TransmittedPower;

typedef Boolean Ue_RX_TX_TimeDifference;

class Fdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

typedef Boolean AppliedTA;

class Tdd384 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd384(): Sequence(&theInfo) {}
};

typedef Boolean T_ADVinfo;

class Tdd128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd128(): Sequence(&theInfo) {}
};

class TddOption : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	TddOption(): Choices(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class UEInternalReportingQuantityr4 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UEInternalReportingQuantityr4(): Sequence(&theInfo) {}
};

class UEInternalMeasurementr4 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	UEInternalMeasurementr4(): Sequence(&theInfo) {}
};

class MeasurementTyper4 : Choice {
private:
	static const void *choicesInfo[7];
public:
	static const Info theInfo;
	MeasurementTyper4(): Choices(&theInfo) {}
};

class Modify : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Modify(): Sequence(&theInfo) {}
};

typedef _Null Release;

class MeasurementCommandr4 : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	MeasurementCommandr4(): Choices(&theInfo) {}
};

class MeasurementTyper6 : Choice {
private:
	static const void *choicesInfo[7];
public:
	static const Info theInfo;
	MeasurementTyper6(): Choices(&theInfo) {}
};

class Modify : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Modify(): Sequence(&theInfo) {}
};

typedef _Null Release;

class MeasurementCommandr6 : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	MeasurementCommandr6(): Choices(&theInfo) {}
};

typedef Boolean Gps_TimingOfCellWanted;

typedef Boolean AdditionalAssistanceDataReq;

enum velocityRequestedValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> velocityRequested;

typedef BitString<CONSTRAINED, 16, 16> GANSSPositioningMethods;

typedef BitString<CONSTRAINED, 8, 8> GANSSTimingOfCellWanted;

typedef BitString<CONSTRAINED, 8, 8> GANSSCarrierPhaseMeasurementRequested;

class UEPositioningReportingQuantityr7 : Sequence {
private:
	static const void *itemsInfo[11];
	static bool itemsPres[11];
public:
	static const Info theInfo;
	UEPositioningReportingQuantityr7(): Sequence(&theInfo) {}
};

typedef Boolean ReportFirstFix;

enum ThresholdSFNGPSTOWusValues {
	us1 = 0,
	us2 = 1,
	us3 = 2,
	us5 = 3,
	us10 = 4,
	us20 = 5,
	us50 = 6,
	us100 = 7,
};
typedef Enumerated<CONSTRAINED, 7> ThresholdSFNGPSTOWus;

enum ThresholdSFNGANSSTOWValues {
	us1 = 0,
	us2 = 1,
	us3 = 2,
	us5 = 3,
	us10 = 4,
	us20 = 5,
	us50 = 6,
	us100 = 7,
};
typedef Enumerated<CONSTRAINED, 7> ThresholdSFNGANSSTOW;

class UEPositioningEventSpecificInfor7 : Choice {
private:
	static const void *choicesInfo[4];
public:
	static const Info theInfo;
	UEPositioningEventSpecificInfor7(): Choices(&theInfo) {}
};

class UEPositioningEventParamr7 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	UEPositioningEventParamr7(): Sequence(&theInfo) {}
};

typedef SequenceOf<UEPositioningEventParamr7, CONSTRAINED, 1, maxMeasEvent> UEPositioningEventParamListr7;

typedef _Null NoReporting;

class UEPositioningReportCriteriar7 : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	UEPositioningReportCriteriar7(): Choices(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 4095> Sfn;

class Fdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 32766> RoundTripTime;

typedef Integer<CONSTRAINED, 0, 70274> RoundTripTimeExtension;

class UeBased : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	UeBased(): Sequence(&theInfo) {}
};

class UeAssisted : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	UeAssisted(): Sequence(&theInfo) {}
};

class PositioningMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PositioningMode(): Choices(&theInfo) {}
};

class UEPositioningOTDOAReferenceCellInfor7 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	UEPositioningOTDOAReferenceCellInfor7(): Sequence(&theInfo) {}
};

class Fdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

typedef Integer<CONSTRAINED, -20000, 20000> RelativeNorth;

typedef Integer<CONSTRAINED, -20000, 20000> RelativeEast;

typedef Integer<CONSTRAINED, -4000, 4000> RelativeAltitude;

typedef Integer<CONSTRAINED, 0,  32766> RoundTripTime;

typedef Integer<CONSTRAINED, 0, 70274> RoundTripTimeExtension;

class UeBased : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	UeBased(): Sequence(&theInfo) {}
};

class UeAssisted : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	UeAssisted(): Sequence(&theInfo) {}
};

class PositioningMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PositioningMode(): Choices(&theInfo) {}
};

class UEPositioningOTDOANeighbourCellInfor7 : Sequence {
private:
	static const void *itemsInfo[8];
	static bool itemsPres[8];
public:
	static const Info theInfo;
	UEPositioningOTDOANeighbourCellInfor7(): Sequence(&theInfo) {}
};

typedef SequenceOf<UEPositioningOTDOANeighbourCellInfor7, CONSTRAINED, 1, maxCellMeas> UEPositioningOTDOANeighbourCellListr7;

class UEPositioningOTDOAAssistanceDatar7 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UEPositioningOTDOAAssistanceDatar7(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 1023> Gps_Week;

class UEPositioningGPSReferenceTimer7 : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	UEPositioningGPSReferenceTimer7(): Sequence(&theInfo) {}
};

class UEPositioningGPSAcquisitionAssistancer7 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	UEPositioningGPSAcquisitionAssistancer7(): Sequence(&theInfo) {}
};

class UEPositioningGPSAssistanceDatar7 : Sequence {
private:
	static const void *itemsInfo[9];
	static bool itemsPres[9];
public:
	static const Info theInfo;
	UEPositioningGPSAssistanceDatar7(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 8191> GanssDay;

typedef Integer<CONSTRAINED, 0, 86399> GanssTod;

typedef Integer<CONSTRAINED, 0, 127> GanssTodUncertainty;

typedef Integer<CONSTRAINED, 0, 7> GanssTimeId;

typedef Integer<CONSTRAINED, 0, 3999999> TimingOfCellFrames;

class Fdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class Mode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Mode(): Choices(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 4095> ReferenceSfn;

class Utran_ganssreferenceTime : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	Utran_ganssreferenceTime(): Sequence(&theInfo) {}
};

enum TutranGanssDriftRateValues {
	ugdr0 = 0,
	ugdr1 = 1,
	ugdr2 = 2,
	ugdr5 = 3,
	ugdr10 = 4,
	ugdr15 = 5,
	ugdr25 = 6,
	ugdr50 = 7,
	ugdr_1 = 8,
	ugdr_2 = 9,
	ugdr_5 = 10,
	ugdr_10 = 11,
	ugdr_15 = 12,
	ugdr_25 = 13,
	ugdr_50 = 14,
	spare = 15,
};
typedef Enumerated<CONSTRAINED, 15> TutranGanssDriftRate;

class UEPositioningGANSSReferenceTime : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	UEPositioningGANSSReferenceTime(): Sequence(&theInfo) {}
};

class ReferenceLocationGANSS : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ReferenceLocationGANSS(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED, 12, 12> Alpha_zero_ionos;

typedef BitString<CONSTRAINED, 12, 12> Alpha_one_ionos;

typedef BitString<CONSTRAINED, 12, 12> Alpha_two_ionos;

class UEPositioningGANSSIonosphericModel : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	UEPositioningGANSSIonosphericModel(): Sequence(&theInfo) {}
};

class UEPositioningGANSSAssistanceData : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	UEPositioningGANSSAssistanceData(): Sequence(&theInfo) {}
};

class UEPositioningMeasurementr7 : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	UEPositioningMeasurementr7(): Sequence(&theInfo) {}
};

class MeasurementTyper7 : Choice {
private:
	static const void *choicesInfo[7];
public:
	static const Info theInfo;
	MeasurementTyper7(): Choices(&theInfo) {}
};

class Modify : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Modify(): Sequence(&theInfo) {}
};

typedef _Null Release;

class MeasurementCommandr7 : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	MeasurementCommandr7(): Choices(&theInfo) {}
};

typedef Boolean Gps_TimingOfCellWanted;

typedef Boolean AdditionalAssistanceDataReq;

enum velocityRequestedValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> velocityRequested;

typedef BitString<CONSTRAINED, 16, 16> GANSSPositioningMethods;

typedef BitString<CONSTRAINED, 8, 8> GANSSTimingOfCellWanted;

typedef BitString<CONSTRAINED, 8, 8> GANSSCarrierPhaseMeasurementRequested;

typedef BitString<CONSTRAINED, 8, 8> GANSSMultiFreqMeasurementRequested;

class UEPositioningReportingQuantityr8 : Sequence {
private:
	static const void *itemsInfo[12];
	static bool itemsPres[12];
public:
	static const Info theInfo;
	UEPositioningReportingQuantityr8(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED, 2, 2> DataID;

class UEPositioningGANSSAddIonoModel : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UEPositioningGANSSAddIonoModel(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED, 16, 16> Teop;

typedef BitString<CONSTRAINED, 21, 21> PmX;

typedef BitString<CONSTRAINED, 15, 15> PmXdot;

typedef BitString<CONSTRAINED, 21, 21> PmY;

typedef BitString<CONSTRAINED, 15, 15> PmYdot;

typedef BitString<CONSTRAINED, 31, 31> DeltaUT1;

typedef BitString<CONSTRAINED, 19, 19> DeltaUT1dot;

class UEPositioningGANSSEarthOrientPara : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	UEPositioningGANSSEarthOrientPara(): Sequence(&theInfo) {}
};

class UEPositioningGANSSAssistanceDatar8 : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	UEPositioningGANSSAssistanceDatar8(): Sequence(&theInfo) {}
};

class UEPositioningMeasurementr8 : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	UEPositioningMeasurementr8(): Sequence(&theInfo) {}
};

class MeasurementTyper8 : Choice {
private:
	static const void *choicesInfo[7];
public:
	static const Info theInfo;
	MeasurementTyper8(): Choices(&theInfo) {}
};

class Modify : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Modify(): Sequence(&theInfo) {}
};

typedef _Null Release;

class MeasurementCommandr8 : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	MeasurementCommandr8(): Choices(&theInfo) {}
};

class UEPositioningGPSDGPSCorrectionsr9 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	UEPositioningGPSDGPSCorrectionsr9(): Sequence(&theInfo) {}
};

class UEPositioningGPSAssistanceDatar9 : Sequence {
private:
	static const void *itemsInfo[9];
	static bool itemsPres[9];
public:
	static const Info theInfo;
	UEPositioningGPSAssistanceDatar9(): Sequence(&theInfo) {}
};

class UEPositioningGANSSAssistanceDatar9 : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	UEPositioningGANSSAssistanceDatar9(): Sequence(&theInfo) {}
};

class UEPositioningMeasurementr9 : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	UEPositioningMeasurementr9(): Sequence(&theInfo) {}
};

class MeasurementTyper9 : Choice {
private:
	static const void *choicesInfo[8];
public:
	static const Info theInfo;
	MeasurementTyper9(): Choices(&theInfo) {}
};

class Modify : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Modify(): Sequence(&theInfo) {}
};

typedef _Null Release;

class MeasurementCommandr9 : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	MeasurementCommandr9(): Choices(&theInfo) {}
};

class Cpich_RSCP : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Cpich_RSCP(): Sequence(&theInfo) {}
};

class Cpich_Ec_N0 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Cpich_Ec_N0(): Sequence(&theInfo) {}
};

class CellSelectQualityMeasure : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CellSelectQualityMeasure(): Choices(&theInfo) {}
};

class Hcs_not_used : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Hcs_not_used(): Sequence(&theInfo) {}
};

class Cpich_RSCP : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Cpich_RSCP(): Sequence(&theInfo) {}
};

class Cpich_Ec_N0 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Cpich_Ec_N0(): Sequence(&theInfo) {}
};

class CellSelectQualityMeasure : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CellSelectQualityMeasure(): Choices(&theInfo) {}
};

class Hcs_used : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Hcs_used(): Sequence(&theInfo) {}
};

class Use_of_HCS : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Use_of_HCS(): Choices(&theInfo) {}
};

class TrafficVolumeReportCriteriaSysInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	TrafficVolumeReportCriteriaSysInfo(): Choices(&theInfo) {}
};

class TrafficVolumeMeasSysInfo : Sequence {
private:
	static const void *itemsInfo[8];
	static bool itemsPres[8];
public:
	static const Info theInfo;
	TrafficVolumeMeasSysInfo(): Sequence(&theInfo) {}
};

class UEInternalMeasurementSysInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UEInternalMeasurementSysInfo(): Sequence(&theInfo) {}
};

class MeasurementControlSysInfo : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	MeasurementControlSysInfo(): Sequence(&theInfo) {}
};

class Cpich_RSCP : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Cpich_RSCP(): Sequence(&theInfo) {}
};

class Cpich_Ec_N0 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Cpich_Ec_N0(): Sequence(&theInfo) {}
};

class CellSelectQualityMeasure : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CellSelectQualityMeasure(): Choices(&theInfo) {}
};

class Hcs_not_used : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Hcs_not_used(): Sequence(&theInfo) {}
};

class Cpich_RSCP : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Cpich_RSCP(): Sequence(&theInfo) {}
};

class Cpich_Ec_N0 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Cpich_Ec_N0(): Sequence(&theInfo) {}
};

class CellSelectQualityMeasure : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CellSelectQualityMeasure(): Choices(&theInfo) {}
};

class Hcs_used : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Hcs_used(): Sequence(&theInfo) {}
};

class Use_of_HCS : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Use_of_HCS(): Choices(&theInfo) {}
};

class MeasurementControlSysInfoExtension : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasurementControlSysInfoExtension(): Sequence(&theInfo) {}
};

typedef SequenceOf<CellSelectReselectInfov590ext, CONSTRAINED, 1, maxCellMeas> NewIntraFrequencyCellInfoListAddon_r5;

typedef SequenceOf<CellSelectReselectInfov590ext, CONSTRAINED, 1, maxCellMeas> NewInterFrequencyCellInfoListAddon_r5;

typedef SequenceOf<CellSelectReselectInfov590ext, CONSTRAINED, 1, maxCellMeas> NewInterRATCellInfoListAddon_r5;

class MeasurementControlSysInfoExtensionAddonr5 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	MeasurementControlSysInfoExtensionAddonr5(): Sequence(&theInfo) {}
};

class Cpich_RSCP : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Cpich_RSCP(): Sequence(&theInfo) {}
};

class Cpich_Ec_N0 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Cpich_Ec_N0(): Sequence(&theInfo) {}
};

class CellSelectQualityMeasure : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CellSelectQualityMeasure(): Choices(&theInfo) {}
};

class Hcs_not_used : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Hcs_not_used(): Sequence(&theInfo) {}
};

class Cpich_RSCP : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Cpich_RSCP(): Sequence(&theInfo) {}
};

class Cpich_Ec_N0 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Cpich_Ec_N0(): Sequence(&theInfo) {}
};

class CellSelectQualityMeasure : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CellSelectQualityMeasure(): Choices(&theInfo) {}
};

class Hcs_used : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Hcs_used(): Sequence(&theInfo) {}
};

class Use_of_HCS : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Use_of_HCS(): Choices(&theInfo) {}
};

class MeasurementControlSysInfoExtensionLCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasurementControlSysInfoExtensionLCRr4(): Sequence(&theInfo) {}
};

class Cpich_RSCP : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Cpich_RSCP(): Sequence(&theInfo) {}
};

class Cpich_Ec_N0 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Cpich_Ec_N0(): Sequence(&theInfo) {}
};

class CellSelectQualityMeasure : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CellSelectQualityMeasure(): Choices(&theInfo) {}
};

class Hcs_not_used : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Hcs_not_used(): Sequence(&theInfo) {}
};

class Cpich_RSCP : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Cpich_RSCP(): Sequence(&theInfo) {}
};

class Cpich_Ec_N0 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Cpich_Ec_N0(): Sequence(&theInfo) {}
};

class CellSelectQualityMeasure : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CellSelectQualityMeasure(): Choices(&theInfo) {}
};

class Hcs_used : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Hcs_used(): Sequence(&theInfo) {}
};

class Use_of_HCS : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Use_of_HCS(): Choices(&theInfo) {}
};

class MeasurementControlSysInfoLCRr4ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasurementControlSysInfoLCRr4ext(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 17, 32> MeasurementIdentityExt;

class NeighbourTDDr7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	NeighbourTDDr7(): Sequence(&theInfo) {}
};

typedef SequenceOf<NeighbourTDDr7, CONSTRAINED, 1, maxCellMeas> NeighbourListTDDr7;

typedef Boolean IntraSecondaryFreqIndicator;

class NewInterFreqCellv7b0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	NewInterFreqCellv7b0ext(): Sequence(&theInfo) {}
};

class NewInterFreqCellLCRv8a0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	NewInterFreqCellLCRv8a0ext(): Sequence(&theInfo) {}
};

typedef SequenceOf<NewInterFreqCellv7b0ext, CONSTRAINED, 1, maxCellMeas> NewInterFreqCellListv7b0ext;

typedef SequenceOf<NewInterFreqCellLCRv8a0ext, CONSTRAINED, 1, maxCellMeas> NewInterFreqCellListLCRv8a0ext;

class NewIntraFreqCellLCRv8a0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	NewIntraFreqCellLCRv8a0ext(): Sequence(&theInfo) {}
};

typedef SequenceOf<NewIntraFreqCellLCRv8a0ext, CONSTRAINED, 1, maxCellMeas> NewIntraFreqCellListLCRv8a0ext;

class PLMNsOfIntraFreqCellsList : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	PLMNsOfIntraFreqCellsList(): Sequence(&theInfo) {}
};

class PLMNsOfInterFreqCellsList : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	PLMNsOfInterFreqCellsList(): Sequence(&theInfo) {}
};

class PLMNsOfInterRATCellsList : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	PLMNsOfInterRATCellsList(): Sequence(&theInfo) {}
};

class PLMNIdentitiesOfNeighbourCells : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PLMNIdentitiesOfNeighbourCells(): Sequence(&theInfo) {}
};

class MultiplePLMNsOfIntraFreqCellsList : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	MultiplePLMNsOfIntraFreqCellsList(): Sequence(&theInfo) {}
};

class MultiplePLMNsOfInterFreqCellsList : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	MultiplePLMNsOfInterFreqCellsList(): Sequence(&theInfo) {}
};

class PLMNIdentitiesOfNeighbourCellsv860ext : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PLMNIdentitiesOfNeighbourCellsv860ext(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 16> QQualMinOffset;

typedef Integer<CONSTRAINED, 1, 8> QRxlevMinOffset;

class TimeslotWithISCP : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TimeslotWithISCP(): Sequence(&theInfo) {}
};

typedef SequenceOf<TimeslotWithISCP, CONSTRAINED, 1, maxTS> TimeslotListWithISCP;

typedef BitString<CONSTRAINED, 1, 1> CipheringKeyFlag;

typedef Integer<CONSTRAINED, 0, 65535> CipheringSerialNumber;

class UEPositioningCipherParameters : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UEPositioningCipherParameters(): Sequence(&theInfo) {}
};

class UEPositioningGANSSAssistanceDatav860ext : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	UEPositioningGANSSAssistanceDatav860ext(): Sequence(&theInfo) {}
};

class UEPositioningGANSSAssistanceDatav920ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningGANSSAssistanceDatav920ext(): Sequence(&theInfo) {}
};

class UEPositioningGANSSData : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	UEPositioningGANSSData(): Sequence(&theInfo) {}
};

typedef SequenceOf<UEPositioningGANSSTimeModel, CONSTRAINED, 1, maxGANSS_1> UEPositioningGANSSTimeModels;

class UEPositioningGPSAcquisitionAssistancev770ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningGPSAcquisitionAssistancev770ext(): Sequence(&theInfo) {}
};

class UEPositioningGPSReferenceTimev770ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningGPSReferenceTimev770ext(): Sequence(&theInfo) {}
};

class UEPositioningGPSAssistanceDatav770ext : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UEPositioningGPSAssistanceDatav770ext(): Sequence(&theInfo) {}
};

class UEPositioningGPSDGPSCorrectionsv920ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningGPSDGPSCorrectionsv920ext(): Sequence(&theInfo) {}
};

class UEPositioningGPSAssistanceDatav920ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningGPSAssistanceDatav920ext(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 14> Ip_slot;

typedef Integer<CONSTRAINED, 0, 4095> Ip_Start;

class UEPositioningIPDLParametersTDDr4ext : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	UEPositioningIPDLParametersTDDr4ext(): Sequence(&theInfo) {}
};

class UEPositioningReportingQuantityv390ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningReportingQuantityv390ext(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 4095> Sfn;

class Fdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 32766> RoundTripTime;

class UEPositioningOTDOAReferenceCellInfoUEB : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	UEPositioningOTDOAReferenceCellInfoUEB(): Sequence(&theInfo) {}
};

class Fdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

typedef Integer<CONSTRAINED, -20000, 20000> RelativeNorth;

typedef Integer<CONSTRAINED, -20000, 20000> RelativeEast;

typedef Integer<CONSTRAINED, -4000, 4000> RelativeAltitude;

typedef Integer<CONSTRAINED, 0, 32766> RoundTripTime;

class UEPositioningOTDOANeighbourCellInfoUEB : Sequence {
private:
	static const void *itemsInfo[11];
	static bool itemsPres[11];
public:
	static const Info theInfo;
	UEPositioningOTDOANeighbourCellInfoUEB(): Sequence(&theInfo) {}
};

typedef SequenceOf<UEPositioningOTDOANeighbourCellInfoUEB, CONSTRAINED, 1, maxCellMeas> UEPositioningOTDOANeighbourCellListUEB;

class UEPositioningOTDOAAssistanceDataUEB : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UEPositioningOTDOAAssistanceDataUEB(): Sequence(&theInfo) {}
};

class UEPositioningMeasurementv390ext : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	UEPositioningMeasurementv390ext(): Sequence(&theInfo) {}
};

class UEPositioningMeasurementv920ext : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UEPositioningMeasurementv920ext(): Sequence(&theInfo) {}
};

typedef SequenceOf<UEPositioningIPDLParametersTDDr4ext, CONSTRAINED, 1, maxCellMeas> UEPositioningIPDLParametersTDDListr4ext;

class UEPositioningOTDOAAssistanceDatar4ext : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UEPositioningOTDOAAssistanceDatar4ext(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 70274> RoundTripTimeExtension;

class UEPositioningOTDOAReferenceCellInfoUEBext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningOTDOAReferenceCellInfoUEBext(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 70274> RoundTripTimeExtension;

class UEPositioningOTDOANeighbourCellInfoUEBext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningOTDOANeighbourCellInfoUEBext(): Sequence(&theInfo) {}
};

typedef SequenceOf<UEPositioningOTDOANeighbourCellInfoUEBext, CONSTRAINED, 1, maxCellMeas> UEPositioningOTDOANeighbourCellListUEBext;

class UEPositioningOTDOAAssistanceDataUEBext : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UEPositioningOTDOAAssistanceDataUEBext(): Sequence(&theInfo) {}
};

class UEPositioningOTDOAMeasuredResultsTDDext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningOTDOAMeasuredResultsTDDext(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, maxPrio_1> Priority;

typedef Integer<CONSTRAINED, 0, 31> ThreshXhigh;

typedef Integer<CONSTRAINED, 0, 31> ThreshXlow;

typedef Integer<CONSTRAINED, -24, 0> QQualMinFDD;

typedef Integer<CONSTRAINED, -60, -13> QRxLevMinFDD;

class UTRANFDDFrequency : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	UTRANFDDFrequency(): Sequence(&theInfo) {}
};

typedef SequenceOf<UTRANFDDFrequency, CONSTRAINED, 1, maxNumFDDFreqs> UTRANFDDFrequencyList;

typedef Integer<CONSTRAINED, 0, maxPrio_1> Priority;

typedef Integer<CONSTRAINED, 0, 31> ThreshXhigh;

typedef Integer<CONSTRAINED, 0, 31> ThreshXlow;

typedef Integer<CONSTRAINED, -60, -13> QRxLevMinTDD;

class UTRANTDDFrequency : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	UTRANTDDFrequency(): Sequence(&theInfo) {}
};

typedef SequenceOf<UTRANTDDFrequency, CONSTRAINED, 1, maxNumTDDFreqs> UTRANTDDFrequencyList;

typedef Integer<CONSTRAINED, 0, maxPrio_1> Priority;

typedef Integer<CONSTRAINED, 0, 31> S_PrioritySearch1;

typedef Integer<CONSTRAINED, 0, 7> S_PrioritySearch2;

typedef Integer<CONSTRAINED, 0, 31> ThreshServingLow;

class Utra_ServingCell : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	Utra_ServingCell(): Sequence(&theInfo) {}
};

class UTRAPriorityInfoList : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	UTRAPriorityInfoList(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 31> ThreshServingLow2;

class UTRAPriorityInfoListv920ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UTRAPriorityInfoListv920ext(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 8> MIBValueTag;

typedef Integer<CONSTRAINED, 0, 511> BCCHModificationTime;

class BCCHModificationInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	BCCHModificationInfo(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 256> Ctch_AllocationPeriod;

typedef Integer<CONSTRAINED, 0, 255> Cbs_FrameOffset;

class CBSDRXLevel1Information : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CBSDRXLevel1Information(): Sequence(&theInfo) {}
};

enum CBSDRXLevel1Informationextensionr6Values {
	p8 = 0,
	p16 = 1,
	p32 = 2,
	p64 = 3,
	p128 = 4,
	p256 = 5,
};
typedef Enumerated<CONSTRAINED, 5> CBSDRXLevel1Informationextensionr6;

typedef BitString<CONSTRAINED, 8, 8> Msg_Type;

typedef BitString<CONSTRAINED, 1, 512> Payload;

class CDMA2000Message : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CDMA2000Message(): Sequence(&theInfo) {}
};

typedef SequenceOf<CDMA2000Message, CONSTRAINED, 1, maxInterSysMessages> CDMA2000MessageList;

typedef BitString<CONSTRAINED, 5, 5> Band_Class;

typedef BitString<CONSTRAINED, 11, 11> Cdma_Freq;

class FrequencyInfoCDMA2000 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	FrequencyInfoCDMA2000(): Sequence(&theInfo) {}
};

typedef SequenceOf<FrequencyInfoCDMA2000, CONSTRAINED, 1, maxNumCDMA2000Freqs> CDMA2000UMTSFrequencyList;

enum dataTransmFreqGranularityValues {
	ms100 = 0,
	ms250 = 1,
	ms500 = 2,
	ms1000 = 3,
	ms2000 = 4,
	ms5000 = 5,
	ms10000 = 6,
	ms60000 = 7,
};
typedef Enumerated<CONSTRAINED, 7> dataTransmFreqGranularity;

typedef Integer<CONSTRAINED, 1, 610> NumberOfDataTransmOcc;

class DataTransmFrequency : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DataTransmFrequency(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 120> DataVolumeMontoringWindow;

typedef Integer<CONSTRAINED, 0, 4294967295> DataVolume;

class DataVolumePerRB : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DataVolumePerRB(): Sequence(&theInfo) {}
};

typedef SequenceOf<DataVolumePerRB, CONSTRAINED, 1, maxRB> DataVolumePerRBList;

class DataVolumeHistory : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DataVolumeHistory(): Sequence(&theInfo) {}
};

class Fdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class DeferredMeasurementControlReadingSupport : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DeferredMeasurementControlReadingSupport(): Sequence(&theInfo) {}
};

typedef OctetString<CONSTRAINED, 1, 2> WarningType;

typedef OctetString<CONSTRAINED, 2, 2> MessageIdentifier;

typedef OctetString<CONSTRAINED, 2, 2> SerialNumber;

class ETWSInformation : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	ETWSInformation(): Sequence(&theInfo) {}
};

typedef OctetString<UNCONSTRAINED> ETWSWarningSecurityInfo;

typedef Integer<CONSTRAINED, 1, 8> ExpirationTimeFactor;

typedef _Null SystemInfoType15_1bis;

typedef _Null SystemInfoType15_2bis;

typedef _Null SystemInfoType15_2ter;

typedef _Null SystemInfoType15_3bis;

typedef _Null SystemInfoType15_6;

typedef _Null SystemInfoType15_7;

typedef _Null SystemInfoType15_8;

typedef _Null Spare9;

typedef _Null Spare8;

typedef _Null Spare7;

typedef _Null Spare6;

typedef _Null Spare5;

typedef _Null Spare4;

typedef _Null Spare3;

typedef _Null Spare2;

typedef _Null Spare1;

class SIBTypeExtGANSS : Choice {
private:
	static const void *choicesInfo[16];
public:
	static const Info theInfo;
	SIBTypeExtGANSS(): Choices(&theInfo) {}
};

typedef _Null None;

class ValueTagInfo : Choice {
private:
	static const void *choicesInfo[4];
public:
	static const Info theInfo;
	ValueTagInfo(): Choices(&theInfo) {}
};

class ExtGANSSSchedulingInfo : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	ExtGANSSSchedulingInfo(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 7> GanssID;

typedef SequenceOf<ExtGANSSSchedulingInfo, CONSTRAINED, 1, maxSIB> GanssScheduling;

class ExtGANSSSIBTypeInfoSchedulingInfo : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	ExtGANSSSIBTypeInfoSchedulingInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<ExtGANSSSIBTypeInfoSchedulingInfo, CONSTRAINED, 1, maxGANSS> ExtGANSSSIBTypeInfoSchedulingInfoList;

typedef _Null SystemInfoType11bis;

typedef _Null SystemInfoType15bis;

typedef _Null SystemInfoType15_1bis;

typedef _Null SystemInfoType15_2bis;

typedef _Null SystemInfoType15_3bis;

typedef _Null SystemInfoType15_6;

typedef _Null SystemInfoType15_7;

typedef _Null SystemInfoType15_8;

class SIBTypeExt : Choice {
private:
	static const void *choicesInfo[8];
public:
	static const Info theInfo;
	SIBTypeExt(): Choices(&theInfo) {}
};

class ExtSIBTypeInfoSchedulingInfo : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	ExtSIBTypeInfoSchedulingInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<ExtSIBTypeInfoSchedulingInfo, CONSTRAINED, 1, maxSIB> ExtSIBTypeInfoSchedulingInfoList;

typedef _Null SystemInfoType19;

typedef _Null SystemInfoType15_2ter;

typedef _Null SystemInfoType20;

typedef _Null Spare5;

typedef _Null Spare4;

typedef _Null Spare3;

typedef _Null Spare2;

typedef _Null Spare1;

class SIBTypeExt2 : Choice {
private:
	static const void *choicesInfo[8];
public:
	static const Info theInfo;
	SIBTypeExt2(): Choices(&theInfo) {}
};

class ExtSIBTypeInfoSchedulingInfo2 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	ExtSIBTypeInfoSchedulingInfo2(): Sequence(&theInfo) {}
};

typedef SequenceOf<ExtSIBTypeInfoSchedulingInfo2, CONSTRAINED, 1, maxSIB> ExtSIBTypeInfoSchedulingInfoList2;

typedef SequenceOf<FrequencyInfoFDD, CONSTRAINED, 1, maxNumFDDFreqs> FDDUMTSFrequencyList;

typedef OctetString<CONSTRAINED, 1, 23> GERANSystemInfoBlock;

typedef SequenceOf<GERANSystemInfoBlock, CONSTRAINED, 1, maxGERAN_SI> GERANSystemInformation;

class GSMBARange : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	GSMBARange(): Sequence(&theInfo) {}
};

typedef SequenceOf<GSMBARange, CONSTRAINED, 1, maxNumGSMFreqRanges> GSMBARangeList;

typedef OctetString<CONSTRAINED, 5, 5> GSMClassmark2;

typedef OctetString<CONSTRAINED, 1, 32> GSMClassmark3;

typedef BitString<CONSTRAINED, 1, 512> GSMMessageListItem;

typedef SequenceOf<GSMMessageListItem, CONSTRAINED, 1, maxInterSysMessages> GSMMessageList;

typedef BitString<CONSTRAINED> GsmSecurityCapability;

typedef OctetString<CONSTRAINED, 1, maxHNBNameSize> HNBName;

typedef _Null ConfigurationUnacceptable;

typedef _Null PhysicalChannelFailure;

typedef _Null Unspecified;

typedef _Null Spare4;

typedef _Null Spare3;

typedef _Null Spare2;

typedef _Null Spare1;

class InterRATChangeFailureCause : Choice {
private:
	static const void *choicesInfo[8];
public:
	static const Info theInfo;
	InterRATChangeFailureCause(): Choices(&theInfo) {}
};

typedef BitString<CONSTRAINED, 1, 32768> GERANIuMessageListItem;

typedef SequenceOf<GERANIuMessageListItem, CONSTRAINED, 1, maxInterSysMessages> GERANIuMessageList;

typedef BitString<CONSTRAINED, 1, 170> GERANIuRadioAccessCapability;

class Gsm : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Gsm(): Sequence(&theInfo) {}
};

class Cdma2000 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Cdma2000(): Sequence(&theInfo) {}
};

class InterRATUERadioAccessCapability : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	InterRATUERadioAccessCapability(): Choices(&theInfo) {}
};

typedef SequenceOf<InterRATUERadioAccessCapability, CONSTRAINED, 1, maxInterSysMessages> InterRATUERadioAccessCapabilityList;

class InterRATUERadioAccessCapabilityv590ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterRATUERadioAccessCapabilityv590ext(): Sequence(&theInfo) {}
};

class Gsm : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Gsm(): Sequence(&theInfo) {}
};

class InterRATUESecurityCapability : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	InterRATUESecurityCapability(): Choices(&theInfo) {}
};

typedef SequenceOf<InterRATUESecurityCapability, CONSTRAINED, 1, maxInterSysMessages> InterRATUESecurityCapList;

typedef _Null ConfigurationUnacceptable;

typedef _Null PhysicalChannelFailure;

typedef _Null InterRAT_ProtocolError;

typedef _Null Unspecified;

typedef _Null Spare11;

typedef _Null Spare10;

typedef _Null Spare9;

typedef _Null Spare8;

typedef _Null Spare7;

typedef _Null Spare6;

typedef _Null Spare5;

typedef _Null Spare4;

typedef _Null Spare3;

typedef _Null Spare2;

typedef _Null Spare1;

class InterRATHOFailureCause : Choice {
private:
	static const void *choicesInfo[16];
public:
	static const Info theInfo;
	InterRATHOFailureCause(): Choices(&theInfo) {}
};

typedef _Null SysInfoType7;

typedef _Null Dummy2;

typedef _Null Dummy3;

typedef _Null SysInfoType14;

typedef _Null SysInfoType17;

typedef _Null Spare2;

typedef _Null Spare1;

class SIBSbTypeAndTag : Choice {
private:
	static const void *choicesInfo[32];
public:
	static const Info theInfo;
	SIBSbTypeAndTag(): Choices(&theInfo) {}
};

class SchedulingInformationSIBSb : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SchedulingInformationSIBSb(): Sequence(&theInfo) {}
};

typedef SequenceOf<SchedulingInformationSIBSb, CONSTRAINED, 1, maxSIB> SIBSbReferenceList;

class MasterInformationBlockv690ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MasterInformationBlockv690ext(): Sequence(&theInfo) {}
};

class MasterInformationBlockv6b0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MasterInformationBlockv6b0extIEs(): Sequence(&theInfo) {}
};

enum csg_IndicatorValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> csg_Indicator;

class MasterInformationBlockv860extIEs : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	MasterInformationBlockv860extIEs(): Sequence(&theInfo) {}
};

class NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	NonCriticalExtensions(): Sequence(&theInfo) {}
};

class V860NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V860NonCriticalExtensions(): Sequence(&theInfo) {}
};

class V6b0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V6b0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class V690NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V690NonCriticalExtensions(): Sequence(&theInfo) {}
};

class MasterInformationBlock : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	MasterInformationBlock(): Sequence(&theInfo) {}
};

typedef SequenceOf<FrequencyInfoTDD, CONSTRAINED, 1, maxNumTDDFreqs> TDDUMTSFrequencyList;

class RplmnInformation : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	RplmnInformation(): Sequence(&theInfo) {}
};

class RplmnInformationr4 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	RplmnInformationr4(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 15> SegmentIndex;

typedef Integer<CONSTRAINED, 0, 2047> SFNPrime;

typedef BitString<CONSTRAINED, 222, 222> SIBDatafixed;

typedef BitString<CONSTRAINED, 1, 214> SIBDatavariable;

typedef SequenceOf<SchedulingInformationSIB, CONSTRAINED, 1, maxSIB> SIBReferenceList;

enum SIBTypeValues {
	masterInformationBlock = 0,
	systemInformationBlockType1 = 1,
	systemInformationBlockType2 = 2,
	systemInformationBlockType3 = 3,
	systemInformationBlockType4 = 4,
	systemInformationBlockType5 = 5,
	systemInformationBlockType6 = 6,
	systemInformationBlockType7 = 7,
	dummy = 8,
	dummy2 = 9,
	dummy3 = 10,
	systemInformationBlockType11 = 11,
	systemInformationBlockType12 = 12,
	systemInformationBlockType13 = 13,
	systemInformationBlockType13_1 = 14,
	systemInformationBlockType13_2 = 15,
	systemInformationBlockType13_3 = 16,
	systemInformationBlockType13_4 = 17,
	systemInformationBlockType14 = 18,
	systemInformationBlockType15 = 19,
	systemInformationBlockType15_1 = 20,
	systemInformationBlockType15_2 = 21,
	systemInformationBlockType15_3 = 22,
	systemInformationBlockType16 = 23,
	systemInformationBlockType17 = 24,
	systemInformationBlockType15_4 = 25,
	systemInformationBlockType18 = 26,
	schedulingBlock1 = 27,
	schedulingBlock2 = 28,
	systemInformationBlockType15_5 = 29,
	systemInformationBlockType5bis = 30,
	extensionType = 31,
};
typedef Enumerated<CONSTRAINED, 31> SIBType;

class SysInfoType1v3a0extIEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SysInfoType1v3a0extIEs(): Sequence(&theInfo) {}
};

class SysInfoType1v860extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType1v860extIEs(): Sequence(&theInfo) {}
};

class NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	NonCriticalExtensions(): Sequence(&theInfo) {}
};

class V860NonCriticalExtentions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V860NonCriticalExtentions(): Sequence(&theInfo) {}
};

class V3a0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V3a0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class SysInfoType1 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	SysInfoType1(): Sequence(&theInfo) {}
};

class NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	NonCriticalExtensions(): Sequence(&theInfo) {}
};

class SysInfoType2 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SysInfoType2(): Sequence(&theInfo) {}
};

typedef Boolean Sib4indicator;

class SysInfoType3v4b0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType3v4b0extIEs(): Sequence(&theInfo) {}
};

class SysInfoType3v590ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType3v590ext(): Sequence(&theInfo) {}
};

class SysInfoType3v5c0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType3v5c0extIEs(): Sequence(&theInfo) {}
};

class SysInfoType3v670ext : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SysInfoType3v670ext(): Sequence(&theInfo) {}
};

enum MBSFNOnlyServiceValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> MBSFNOnlyService;

class SysInfoType3v770extIEs : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	SysInfoType3v770extIEs(): Sequence(&theInfo) {}
};

class SysInfoType3v830extIEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SysInfoType3v830extIEs(): Sequence(&theInfo) {}
};

class SysInfoType3v860extIEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SysInfoType3v860extIEs(): Sequence(&theInfo) {}
};

class SysInfoType3v870extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType3v870extIEs(): Sequence(&theInfo) {}
};

enum imsEmergencySupportIndicatorValues {
	supported = 0,
};
typedef Enumerated<CONSTRAINED, 0> imsEmergencySupportIndicator;

class SysInfoType3v920extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType3v920extIEs(): Sequence(&theInfo) {}
};

class NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	NonCriticalExtensions(): Sequence(&theInfo) {}
};

class V900NonCriticalExtension : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V900NonCriticalExtension(): Sequence(&theInfo) {}
};

class V870NonCriticalExtension : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V870NonCriticalExtension(): Sequence(&theInfo) {}
};

class V860NonCriticalExtension : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V860NonCriticalExtension(): Sequence(&theInfo) {}
};

class V830NonCriticalExtension : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V830NonCriticalExtension(): Sequence(&theInfo) {}
};

class V770NonCriticalExtension : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V770NonCriticalExtension(): Sequence(&theInfo) {}
};

class V670NonCriticalExtension : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V670NonCriticalExtension(): Sequence(&theInfo) {}
};

class V5c0NoncriticalExtension : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V5c0NoncriticalExtension(): Sequence(&theInfo) {}
};

class V590NonCriticalExtension : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V590NonCriticalExtension(): Sequence(&theInfo) {}
};

class V4b0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V4b0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class SysInfoType3 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	SysInfoType3(): Sequence(&theInfo) {}
};

class SysInfoType4v4b0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType4v4b0extIEs(): Sequence(&theInfo) {}
};

class SysInfoType4v590ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType4v590ext(): Sequence(&theInfo) {}
};

class SysInfoType4v5b0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType4v5b0extIEs(): Sequence(&theInfo) {}
};

class SysInfoType4v5c0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType4v5c0extIEs(): Sequence(&theInfo) {}
};

class NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	NonCriticalExtensions(): Sequence(&theInfo) {}
};

class V5c0NonCriticalExtension : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V5c0NonCriticalExtension(): Sequence(&theInfo) {}
};

class V5b0NonCriticalExtension : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V5b0NonCriticalExtension(): Sequence(&theInfo) {}
};

class V590NonCriticalExtension : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V590NonCriticalExtension(): Sequence(&theInfo) {}
};

class V4b0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V4b0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class SysInfoType4 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	SysInfoType4(): Sequence(&theInfo) {}
};

typedef Boolean Sib6indicator;

class Fdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class Tdd128SpecificInfo : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	Tdd128SpecificInfo(): Sequence(&theInfo) {}
};

class SysInfoType5v4b0extIEs : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	SysInfoType5v4b0extIEs(): Sequence(&theInfo) {}
};

class Hcr_r5_SpecificInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Hcr_r5_SpecificInfo(): Sequence(&theInfo) {}
};

class SysInfoType5v590extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType5v590extIEs(): Sequence(&theInfo) {}
};

class SysInfoType5v650extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType5v650extIEs(): Sequence(&theInfo) {}
};

enum hsdpa_CellIndicatorValues {
	hsdpa_CapableCell = 0,
};
typedef Enumerated<CONSTRAINED, 0> hsdpa_CellIndicator;

class SysInfoType5v680extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType5v680extIEs(): Sequence(&theInfo) {}
};

enum edch_CellIndicatorValues {
	edch_CapableCell = 0,
};
typedef Enumerated<CONSTRAINED, 0> edch_CellIndicator;

class Sccpch_SystemInformation_MBMS : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Sccpch_SystemInformation_MBMS(): Choices(&theInfo) {}
};

class SysInfoType5v690extIEs : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	SysInfoType5v690extIEs(): Sequence(&theInfo) {}
};

class Fdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

class Tdd768 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	Tdd768(): Sequence(&theInfo) {}
};

class Tdd128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd128(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class Sccpch_SystemInformation_MBMS : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	Sccpch_SystemInformation_MBMS(): Choices(&theInfo) {}
};

class SysInfoType5v770extIEs : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	SysInfoType5v770extIEs(): Sequence(&theInfo) {}
};

class Dummy : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	Dummy(): Sequence(&theInfo) {}
};

class Fdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

class Hs_dsch_CommonSysInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Hs_dsch_CommonSysInfo(): Sequence(&theInfo) {}
};

class Tdd128 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Tdd128(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class SysInfoType5v860extIEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SysInfoType5v860extIEs(): Sequence(&theInfo) {}
};

class SysInfoType5v890extIEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SysInfoType5v890extIEs(): Sequence(&theInfo) {}
};

enum tresetUsageIndicatorValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> tresetUsageIndicator;

class SysInfoType5v8b0extIEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SysInfoType5v8b0extIEs(): Sequence(&theInfo) {}
};

class SysInfoType5v8d0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType5v8d0extIEs(): Sequence(&theInfo) {}
};

class NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	NonCriticalExtensions(): Sequence(&theInfo) {}
};

class V8d0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V8d0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class V8b0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V8b0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class V890NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V890NonCriticalExtensions(): Sequence(&theInfo) {}
};

class V860NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V860NonCriticalExtensions(): Sequence(&theInfo) {}
};

class V770NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V770NonCriticalExtensions(): Sequence(&theInfo) {}
};

class V690NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V690NonCriticalExtensions(): Sequence(&theInfo) {}
};

class V680NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V680NonCriticalExtensions(): Sequence(&theInfo) {}
};

class V650NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V650NonCriticalExtensions(): Sequence(&theInfo) {}
};

class V590NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V590NonCriticalExtensions(): Sequence(&theInfo) {}
};

class V4b0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V4b0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class SysInfoType5 : Sequence {
private:
	static const void *itemsInfo[8];
	static bool itemsPres[8];
public:
	static const Info theInfo;
	SysInfoType5(): Sequence(&theInfo) {}
};


class Fdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

class Tdd : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	Tdd(): Sequence(&theInfo) {}
};

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class Tdd128SpecificInfo : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	Tdd128SpecificInfo(): Sequence(&theInfo) {}
};

class SysInfoType6v4b0extIEs : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	SysInfoType6v4b0extIEs(): Sequence(&theInfo) {}
};

class Hcr_r5_SpecificInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Hcr_r5_SpecificInfo(): Sequence(&theInfo) {}
};

class SysInfoType6v590extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType6v590extIEs(): Sequence(&theInfo) {}
};

class SysInfoType6v650extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType6v650extIEs(): Sequence(&theInfo) {}
};

class SysInfoType6v690extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType6v690extIEs(): Sequence(&theInfo) {}
};

class Tdd768SpecificInfo : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	Tdd768SpecificInfo(): Sequence(&theInfo) {}
};

class SysInfoType6v770extIEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SysInfoType6v770extIEs(): Sequence(&theInfo) {}
};

class NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	NonCriticalExtensions(): Sequence(&theInfo) {}
};

class V770NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V770NonCriticalExtensions(): Sequence(&theInfo) {}
};

class V690nonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V690nonCriticalExtensions(): Sequence(&theInfo) {}
};

class V650nonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V650nonCriticalExtensions(): Sequence(&theInfo) {}
};

class V590NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V590NonCriticalExtensions(): Sequence(&theInfo) {}
};

class V4b0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V4b0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class SysInfoType6 : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	SysInfoType6(): Sequence(&theInfo) {}
};

class Fdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

typedef _Null Tdd;

class ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ModeSpecificInfo(): Choices(&theInfo) {}
};

class NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	NonCriticalExtensions(): Sequence(&theInfo) {}
};

class SysInfoType7 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	SysInfoType7(): Sequence(&theInfo) {}
};

class NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	NonCriticalExtensions(): Sequence(&theInfo) {}
};

class SysInfoType8 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	SysInfoType8(): Sequence(&theInfo) {}
};

class NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	NonCriticalExtensions(): Sequence(&theInfo) {}
};

class SysInfoType9 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SysInfoType9(): Sequence(&theInfo) {}
};

class NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	NonCriticalExtensions(): Sequence(&theInfo) {}
};

class SysInfoType10 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SysInfoType10(): Sequence(&theInfo) {}
};

typedef Boolean Sib12indicator;

class SysInfoType11v4b0extIEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SysInfoType11v4b0extIEs(): Sequence(&theInfo) {}
};

typedef SequenceOf<CellSelectReselectInfov590ext, CONSTRAINED, 1, maxCellMeas> NewIntraFrequencyCellInfoList_v590ext;

typedef SequenceOf<CellSelectReselectInfov590ext, CONSTRAINED, 1, maxCellMeas> NewInterFrequencyCellInfoList_v590ext;

typedef SequenceOf<CellSelectReselectInfov590ext, CONSTRAINED, 1, maxCellMeas> NewInterRATCellInfoList_v590ext;

class SysInfoType11v590extIEs : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	SysInfoType11v590extIEs(): Sequence(&theInfo) {}
};

class SysInfoType11v690extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType11v690extIEs(): Sequence(&theInfo) {}
};

class SysInfoType11v6b0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType11v6b0extIEs(): Sequence(&theInfo) {}
};

class MBSFNFrequency : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MBSFNFrequency(): Sequence(&theInfo) {}
};

typedef SequenceOf<MBSFNFrequency, CONSTRAINED, 0, maxMBSFNClusters> MBSFNFrequencyList;

class SysInfoType11v770extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType11v770extIEs(): Sequence(&theInfo) {}
};

class SysInfoType11v7b0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType11v7b0extIEs(): Sequence(&theInfo) {}
};

enum imb_IndicationValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> imb_Indication;

class MBSFNFrequencyv860ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBSFNFrequencyv860ext(): Sequence(&theInfo) {}
};

typedef SequenceOf<MBSFNFrequencyv860ext, CONSTRAINED, 0, maxMBSFNClusters> MBSFNFrequencyListv860ext;

class SysInfoType11v860extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType11v860extIEs(): Sequence(&theInfo) {}
};

class NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	NonCriticalExtensions(): Sequence(&theInfo) {}
};

class V860NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V860NonCriticalExtensions(): Sequence(&theInfo) {}
};

class V7b0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V7b0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class V770NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V770NonCriticalExtensions(): Sequence(&theInfo) {}
};

class V6b0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V6b0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class V690NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V690NonCriticalExtensions(): Sequence(&theInfo) {}
};

class V590NonCriticalExtension : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V590NonCriticalExtension(): Sequence(&theInfo) {}
};

class V4b0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V4b0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class SysInfoType11 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	SysInfoType11(): Sequence(&theInfo) {}
};

class SysInfoType11bisv7b0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType11bisv7b0extIEs(): Sequence(&theInfo) {}
};

class SysInfoType11bisv860extIEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SysInfoType11bisv860extIEs(): Sequence(&theInfo) {}
};

class NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	NonCriticalExtensions(): Sequence(&theInfo) {}
};

class V860NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V860NonCriticalExtensions(): Sequence(&theInfo) {}
};

class V7b0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V7b0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class SysInfoType11bis : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	SysInfoType11bis(): Sequence(&theInfo) {}
};

class SysInfoType12v4b0extIEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SysInfoType12v4b0extIEs(): Sequence(&theInfo) {}
};

typedef SequenceOf<CellSelectReselectInfov590ext, CONSTRAINED, 1, maxCellMeas> NewIntraFrequencyCellInfoList_v590ext;

typedef SequenceOf<CellSelectReselectInfov590ext, CONSTRAINED, 1, maxCellMeas> NewInterFrequencyCellInfoList_v590ext;

typedef SequenceOf<CellSelectReselectInfov590ext, CONSTRAINED, 1, maxCellMeas> NewInterRATCellInfoList_v590ext;

class SysInfoType12v590extIEs : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	SysInfoType12v590extIEs(): Sequence(&theInfo) {}
};

class SysInfoType12v690extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType12v690extIEs(): Sequence(&theInfo) {}
};

class SysInfoType12v6b0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType12v6b0extIEs(): Sequence(&theInfo) {}
};

class SysInfoType12v7b0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType12v7b0extIEs(): Sequence(&theInfo) {}
};

class NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	NonCriticalExtensions(): Sequence(&theInfo) {}
};

class V7b0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V7b0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class V6b0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V6b0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class V690NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V690NonCriticalExtensions(): Sequence(&theInfo) {}
};

class V590NonCriticalExtension : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V590NonCriticalExtension(): Sequence(&theInfo) {}
};

class V4b0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V4b0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class SysInfoType12 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	SysInfoType12(): Sequence(&theInfo) {}
};

class SysInfoType13v3a0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType13v3a0extIEs(): Sequence(&theInfo) {}
};

class SysInfoType13v4b0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType13v4b0extIEs(): Sequence(&theInfo) {}
};

class SysInfoType13v770extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType13v770extIEs(): Sequence(&theInfo) {}
};

class NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	NonCriticalExtensions(): Sequence(&theInfo) {}
};

class V770NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V770NonCriticalExtensions(): Sequence(&theInfo) {}
};

class V4b0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V4b0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class V3a0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V3a0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class SysInfoType13 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	SysInfoType13(): Sequence(&theInfo) {}
};


class NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	NonCriticalExtensions(): Sequence(&theInfo) {}
};

class SysInfoType131 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SysInfoType131(): Sequence(&theInfo) {}
};


class NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	NonCriticalExtensions(): Sequence(&theInfo) {}
};

class SysInfoType132 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SysInfoType132(): Sequence(&theInfo) {}
};


class NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	NonCriticalExtensions(): Sequence(&theInfo) {}
};

class SysInfoType133 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SysInfoType133(): Sequence(&theInfo) {}
};


class NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	NonCriticalExtensions(): Sequence(&theInfo) {}
};

class SysInfoType134 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SysInfoType134(): Sequence(&theInfo) {}
};

class NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	NonCriticalExtensions(): Sequence(&theInfo) {}
};

class SysInfoType14 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	SysInfoType14(): Sequence(&theInfo) {}
};

class SysInfoType15v4b0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType15v4b0extIEs(): Sequence(&theInfo) {}
};

class SysInfoType15v770extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType15v770extIEs(): Sequence(&theInfo) {}
};

class NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	NonCriticalExtensions(): Sequence(&theInfo) {}
};

class V770NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V770NonCriticalExtensions(): Sequence(&theInfo) {}
};

class V4b0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V4b0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class SysInfoType15 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	SysInfoType15(): Sequence(&theInfo) {}
};

class SysInfoType15bisv860extIEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SysInfoType15bisv860extIEs(): Sequence(&theInfo) {}
};

class NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	NonCriticalExtensions(): Sequence(&theInfo) {}
};

class V860NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V860NonCriticalExtensions(): Sequence(&theInfo) {}
};

class SysInfoType15bis : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	SysInfoType15bis(): Sequence(&theInfo) {}
};

class SysInfoType151v920extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType151v920extIEs(): Sequence(&theInfo) {}
};

class NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	NonCriticalExtensions(): Sequence(&theInfo) {}
};

class V920NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V920NonCriticalExtensions(): Sequence(&theInfo) {}
};

class SysInfoType151 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SysInfoType151(): Sequence(&theInfo) {}
};

class SysInfoType151bisv920extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType151bisv920extIEs(): Sequence(&theInfo) {}
};

class NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	NonCriticalExtensions(): Sequence(&theInfo) {}
};

class V920NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V920NonCriticalExtensions(): Sequence(&theInfo) {}
};

class SysInfoType151bis : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SysInfoType151bis(): Sequence(&theInfo) {}
};

class NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	NonCriticalExtensions(): Sequence(&theInfo) {}
};

class SysInfoType152 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	SysInfoType152(): Sequence(&theInfo) {}
};

class NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	NonCriticalExtensions(): Sequence(&theInfo) {}
};

class SysInfoType152bis : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SysInfoType152bis(): Sequence(&theInfo) {}
};

class NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	NonCriticalExtensions(): Sequence(&theInfo) {}
};

class SysInfoType152ter : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SysInfoType152ter(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED, 1, 32> SatMask;

typedef BitString<CONSTRAINED, 8, 8> LsbTOW;

class NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	NonCriticalExtensions(): Sequence(&theInfo) {}
};

class SysInfoType153 : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	SysInfoType153(): Sequence(&theInfo) {}
};

class SysInfoType153bisv860extIEs : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	SysInfoType153bisv860extIEs(): Sequence(&theInfo) {}
};

class NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	NonCriticalExtensions(): Sequence(&theInfo) {}
};

class V860NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V860NonCriticalExtensions(): Sequence(&theInfo) {}
};

class SysInfoType153bis : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	SysInfoType153bis(): Sequence(&theInfo) {}
};

class SysInfoType154v3a0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType154v3a0ext(): Sequence(&theInfo) {}
};

class SysInfoType154v4b0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType154v4b0ext(): Sequence(&theInfo) {}
};

class NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	NonCriticalExtensions(): Sequence(&theInfo) {}
};

class V4b0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V4b0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class V3a0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V3a0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class SysInfoType154 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	SysInfoType154(): Sequence(&theInfo) {}
};

class SysInfoType155v3a0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType155v3a0ext(): Sequence(&theInfo) {}
};

class SysInfoType155v770extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType155v770extIEs(): Sequence(&theInfo) {}
};

class NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	NonCriticalExtensions(): Sequence(&theInfo) {}
};

class V770NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V770NonCriticalExtensions(): Sequence(&theInfo) {}
};

class V3a0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V3a0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class SysInfoType155 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SysInfoType155(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 86399> Ue_positioning_GANSS_TOD;

class NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	NonCriticalExtensions(): Sequence(&theInfo) {}
};

class SysInfoType156 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	SysInfoType156(): Sequence(&theInfo) {}
};

class NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	NonCriticalExtensions(): Sequence(&theInfo) {}
};

class SysInfoType157 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SysInfoType157(): Sequence(&theInfo) {}
};

class NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	NonCriticalExtensions(): Sequence(&theInfo) {}
};

class SysInfoType158 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	SysInfoType158(): Sequence(&theInfo) {}
};

class SysInfoType16v770extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType16v770extIEs(): Sequence(&theInfo) {}
};

class SysInfoType16v920extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType16v920extIEs(): Sequence(&theInfo) {}
};

class NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	NonCriticalExtensions(): Sequence(&theInfo) {}
};

class V920NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V920NonCriticalExtensions(): Sequence(&theInfo) {}
};

class V770NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V770NonCriticalExtensions(): Sequence(&theInfo) {}
};

class SysInfoType16 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SysInfoType16(): Sequence(&theInfo) {}
};

class Tdd128SpecificInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Tdd128SpecificInfo(): Sequence(&theInfo) {}
};

class SysInfoType17v4b0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType17v4b0extIEs(): Sequence(&theInfo) {}
};

class Hcr_r5_SpecificInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Hcr_r5_SpecificInfo(): Sequence(&theInfo) {}
};

class SysInfoType17v590extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType17v590extIEs(): Sequence(&theInfo) {}
};

class Tdd768SpecificInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Tdd768SpecificInfo(): Sequence(&theInfo) {}
};

class SysInfoType17v770extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType17v770extIEs(): Sequence(&theInfo) {}
};

class NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	NonCriticalExtensions(): Sequence(&theInfo) {}
};

class V770NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V770NonCriticalExtensions(): Sequence(&theInfo) {}
};

class V590NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V590NonCriticalExtensions(): Sequence(&theInfo) {}
};

class V4b0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V4b0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class SysInfoType17 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	SysInfoType17(): Sequence(&theInfo) {}
};

class SysInfoType18v6b0ext : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SysInfoType18v6b0ext(): Sequence(&theInfo) {}
};

class SysInfoType18v860ext : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SysInfoType18v860ext(): Sequence(&theInfo) {}
};

class NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	NonCriticalExtensions(): Sequence(&theInfo) {}
};

class V860NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V860NonCriticalExtensions(): Sequence(&theInfo) {}
};

class V6b0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V6b0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class SysInfoType18 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	SysInfoType18(): Sequence(&theInfo) {}
};

class SysInfoType19v920ext : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SysInfoType19v920ext(): Sequence(&theInfo) {}
};

class NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	NonCriticalExtensions(): Sequence(&theInfo) {}
};

class V920NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V920NonCriticalExtensions(): Sequence(&theInfo) {}
};

class SysInfoType19 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	SysInfoType19(): Sequence(&theInfo) {}
};

class NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	NonCriticalExtensions(): Sequence(&theInfo) {}
};

class SysInfoType20 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SysInfoType20(): Sequence(&theInfo) {}
};

class SysInfoTypeSB1v6b0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoTypeSB1v6b0ext(): Sequence(&theInfo) {}
};

class SysInfoTypeSB1v860ext : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SysInfoTypeSB1v860ext(): Sequence(&theInfo) {}
};

class NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	NonCriticalExtensions(): Sequence(&theInfo) {}
};

class V860NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V860NonCriticalExtensions(): Sequence(&theInfo) {}
};

class V6b0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V6b0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class SysInfoTypeSB1 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SysInfoTypeSB1(): Sequence(&theInfo) {}
};

class SysInfoTypeSB2v6b0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoTypeSB2v6b0ext(): Sequence(&theInfo) {}
};

class SysInfoTypeSB2v860ext : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SysInfoTypeSB2v860ext(): Sequence(&theInfo) {}
};

class NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	NonCriticalExtensions(): Sequence(&theInfo) {}
};

class V860NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V860NonCriticalExtensions(): Sequence(&theInfo) {}
};

class V6b0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V6b0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class SysInfoTypeSB2 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SysInfoTypeSB2(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 120> Ue_InactivityPeriod;

class UEHistoryInformation : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	UEHistoryInformation(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED, 1, 2048> ANSI41NASParameter;

enum MBMSAccessProbabilityFactorValues {
	apf0 = 0,
	apf32 = 1,
	apf64 = 2,
	apf96 = 3,
	apf128 = 4,
	apf160 = 5,
	apf192 = 6,
	apf224 = 7,
	apf256 = 8,
	apf288 = 9,
	apf320 = 10,
	apf352 = 11,
	apf384 = 12,
	apf416 = 13,
	apf448 = 14,
	apf480 = 15,
	apf512 = 16,
	apf544 = 17,
	apf576 = 18,
	apf608 = 19,
	apf640 = 20,
	apf672 = 21,
	apf704 = 22,
	apf736 = 23,
	apf768 = 24,
	apf800 = 25,
	apf832 = 26,
	apf864 = 27,
	apf896 = 28,
	apf928 = 29,
	apf960 = 30,
	apf1000 = 31,
};
typedef Enumerated<CONSTRAINED, 31> MBMSAccessProbabilityFactor;

typedef BitString<CONSTRAINED, 12, 12> MBMSCellGroupIdentityr6;

typedef Integer<CONSTRAINED, 1, 32> MBMSCommonCCTrChIdentity;

typedef Integer<CONSTRAINED, 1, 32> MBMSCommonPhyChIdentity;

typedef Integer<CONSTRAINED, 1, 32> MBMSCommonRBIdentity;

class MBMSCommonRBInformationr6 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	MBMSCommonRBInformationr6(): Sequence(&theInfo) {}
};

typedef SequenceOf<MBMSCommonRBInformationr6, CONSTRAINED, 1, maxMBMS_CommonRB> MBMSCommonRBInformationListr6;

typedef Integer<CONSTRAINED, 1, 32> MBMSCommonTrChIdentity;

typedef Boolean CountingForUraPCH;

typedef Boolean CountingForCellPCH;

typedef Boolean CountingForCellFACH;

class MBMSConnectedModeCountingScope : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	MBMSConnectedModeCountingScope(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, maxSCCPCH> MBMSSCCPCHIdentity;

enum MBMSSoftCombTimingOffsetValues {
	ms0 = 0,
	ms10 = 1,
	ms20 = 2,
	ms40 = 3,
};
typedef Enumerated<CONSTRAINED, 3> MBMSSoftCombTimingOffset;

typedef Integer<CONSTRAINED, 1, maxMBMSservUnmodif> MBMSShortTransmissionID;

typedef Integer<CONSTRAINED, 1, 15> MBMSLogicalChIdentity;

class MBMSPTMRBInformationC : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	MBMSPTMRBInformationC(): Sequence(&theInfo) {}
};

typedef SequenceOf<MBMSPTMRBInformationC, CONSTRAINED, 1, maxRBperTrCh> MBMSPTMRBInformationCList;

class MBMSTrCHInformationCurr : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	MBMSTrCHInformationCurr(): Sequence(&theInfo) {}
};

typedef SequenceOf<MBMSTrCHInformationCurr, CONSTRAINED, 1, maxFACHPCH> MBMSTrCHInformationCurrList;

class MBMSCurrentCellSCCPCHr6 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	MBMSCurrentCellSCCPCHr6(): Sequence(&theInfo) {}
};

typedef SequenceOf<MBMSCurrentCellSCCPCHr6, CONSTRAINED, 1, maxSCCPCH> MBMSCurrentCellSCCPCHListr6;

class MBMSJoinedInformationr6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBMSJoinedInformationr6(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 7> CycleOffset;

class Mtch_L1CombiningPeriodList : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	Mtch_L1CombiningPeriodList(): Sequence(&theInfo) {}
};

class MBMSL1CombiningSchedule32 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MBMSL1CombiningSchedule32(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 15> CycleOffset;

class Mtch_L1CombiningPeriodList : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	Mtch_L1CombiningPeriodList(): Sequence(&theInfo) {}
};

class MBMSL1CombiningSchedule64 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MBMSL1CombiningSchedule64(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 31> CycleOffset;

class Mtch_L1CombiningPeriodList : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	Mtch_L1CombiningPeriodList(): Sequence(&theInfo) {}
};

class MBMSL1CombiningSchedule128 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MBMSL1CombiningSchedule128(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 63> CycleOffset;

class Mtch_L1CombiningPeriodList : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	Mtch_L1CombiningPeriodList(): Sequence(&theInfo) {}
};

class MBMSL1CombiningSchedule256 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MBMSL1CombiningSchedule256(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 127> CycleOffset;

class Mtch_L1CombiningPeriodList : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	Mtch_L1CombiningPeriodList(): Sequence(&theInfo) {}
};

class MBMSL1CombiningSchedule512 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MBMSL1CombiningSchedule512(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 255> CycleOffset;

class Mtch_L1CombiningPeriodList : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	Mtch_L1CombiningPeriodList(): Sequence(&theInfo) {}
};

class MBMSL1CombiningSchedule1024 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MBMSL1CombiningSchedule1024(): Sequence(&theInfo) {}
};

class MBMSL1CombiningSchedule : Choice {
private:
	static const void *choicesInfo[6];
public:
	static const Info theInfo;
	MBMSL1CombiningSchedule(): Choices(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 3> MBMSL1CombiningTransmTimeDiff;

class SameAsCurrent : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SameAsCurrent(): Sequence(&theInfo) {}
};

typedef Boolean TranspCh_CombiningStatus;

typedef Boolean Layer1_CombiningStatus;

class MBMSPTMRBInformationN : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	MBMSPTMRBInformationN(): Sequence(&theInfo) {}
};

typedef SequenceOf<MBMSPTMRBInformationN, CONSTRAINED, 1, maxRBperTrCh> MBMSPTMRBInformationNList;

class MBMSTrCHInformationNeighb : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	MBMSTrCHInformationNeighb(): Sequence(&theInfo) {}
};

typedef SequenceOf<MBMSTrCHInformationNeighb, CONSTRAINED, 1, maxFACHPCH> MBMSTrCHInformationNeighbList;

class Different : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Different(): Sequence(&theInfo) {}
};

class MBMSL23Configuration : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	MBMSL23Configuration(): Choices(&theInfo) {}
};

typedef Integer<CONSTRAINED, -10, 5> MBMSMICHPowerOffset;

enum MBMSNICountPerFrameValues {
	ni18 = 0,
	ni36 = 1,
	ni72 = 2,
	ni144 = 3,
};
typedef Enumerated<CONSTRAINED, 3> MBMSNICountPerFrame;

typedef Boolean Sttd_Indicator;

class Fdd : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

enum MBMSMICHNotificationIndLengthValues {
	mn4 = 0,
	mn8 = 1,
	mn16 = 2,
};
typedef Enumerated<CONSTRAINED, 2> MBMSMICHNotificationIndLength;

class Tdd384 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	Tdd384(): Sequence(&theInfo) {}
};

typedef SequenceOf<DLTSChannelisationCode, CONSTRAINED, 1, 2> ChannelisationCodeList;

class Tdd128 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	Tdd128(): Sequence(&theInfo) {}
};

class Mode : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	Mode(): Choices(&theInfo) {}
};

class MBMSMICHConfigurationInfor6 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MBMSMICHConfigurationInfor6(): Sequence(&theInfo) {}
};

class Tdd384 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd384(): Sequence(&theInfo) {}
};

class Tdd768 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd768(): Sequence(&theInfo) {}
};

class Tdd128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Tdd128(): Sequence(&theInfo) {}
};

class Mode : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	Mode(): Choices(&theInfo) {}
};

class MBMSMICHConfigurationInfov770ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBMSMICHConfigurationInfov770ext(): Sequence(&theInfo) {}
};

enum MBMSNICountPerFrameIMB384Values {
	ni16 = 0,
	ni32 = 1,
	ni64 = 2,
	ni128 = 3,
};
typedef Enumerated<CONSTRAINED, 3> MBMSNICountPerFrameIMB384;

class Imb384 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Imb384(): Sequence(&theInfo) {}
};

class Mode : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	Mode(): Choices(&theInfo) {}
};

class MBMSMICHConfigurationInfov890ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBMSMICHConfigurationInfov890ext(): Sequence(&theInfo) {}
};

typedef OctetString<CONSTRAINED, 3, 3> ServiceIdentity;

typedef _Null SameAsMIB_PLMN_Id;

typedef Integer<CONSTRAINED, 1, 5> SameAsMIB_MultiPLMN_Id;

class Other : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Other(): Choices(&theInfo) {}
};

class Plmn_Identity : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Plmn_Identity(): Choices(&theInfo) {}
};

class MBMSServiceIdentityr6 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MBMSServiceIdentityr6(): Sequence(&theInfo) {}
};

class MBMSTransmissionIdentity : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MBMSTransmissionIdentity(): Sequence(&theInfo) {}
};

enum MBMSRequiredUEActionModValues {
	none = 0,
	acquireCountingInfo = 1,
	acquireCountingInfoPTM_RBsUnmodified = 2,
	acquirePTM_RBInfo = 3,
	requestPTPRB = 4,
	releasePTM_RB = 5,
};
typedef Enumerated<CONSTRAINED, 5> MBMSRequiredUEActionMod;

typedef Integer<CONSTRAINED, 1, maxMBMS_Freq> MBMSPFLIndex;


class Mbms_PreferredFrequency : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Mbms_PreferredFrequency(): Choices(&theInfo) {}
};

enum dummyValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> dummy;

typedef Boolean ContinueMCCHReading;

class MBMSModifedServicer6 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	MBMSModifedServicer6(): Sequence(&theInfo) {}
};

typedef SequenceOf<MBMSModifedServicer6, CONSTRAINED, 1, maxMBMSservModif> MBMSModifedServiceListr6;

typedef Integer<CONSTRAINED, 1, maxMBSFNClusters> MBSFNClusterFrequencyr7;

class MBMSModifiedServicev770ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBMSModifiedServicev770ext(): Sequence(&theInfo) {}
};

enum MBMSPTMRBReleaseCauseLCRr7Values {
	normalRelease = 0,
	outOfMBMSServiceCoverageInRAN = 1,
	networkAbnormalRelease = 2,
	spare5 = 3,
	spare4 = 4,
	spare3 = 5,
	spare2 = 6,
	spare1 = 7,
};
typedef Enumerated<CONSTRAINED, 7> MBMSPTMRBReleaseCauseLCRr7;

class MBMSModifiedServiceLCRv7c0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBMSModifiedServiceLCRv7c0ext(): Sequence(&theInfo) {}
};

typedef SequenceOf<MBMSModifiedServicev770ext, CONSTRAINED, 1, maxMBMSservModif> MBMSModifiedServiceListv770ext;

typedef SequenceOf<MBMSModifiedServiceLCRv7c0ext, CONSTRAINED, 1, maxMBMSservModif> MBMSModifiedServiceListLCRv7c0ext;

enum MBMSSCCPCHPwrOffsetDiffValues {
	mcpo_minus6 = 0,
	mcpo_minus3 = 1,
	mcpo_plus3 = 2,
	mcpo_plus6 = 3,
};
typedef Enumerated<CONSTRAINED, 3> MBMSSCCPCHPwrOffsetDiff;

class Fdd : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

typedef _Null Tdd;

class Layer1Combining : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Layer1Combining(): Choices(&theInfo) {}
};

class MBMSNeighbouringCellSCCPCHr6 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	MBMSNeighbouringCellSCCPCHr6(): Sequence(&theInfo) {}
};

class Fdd : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	Fdd(): Sequence(&theInfo) {}
};

typedef _Null Tdd;

class Layer1Combining : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Layer1Combining(): Choices(&theInfo) {}
};

class MBMSNeighbouringCellSCCPCHv770ext : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	MBMSNeighbouringCellSCCPCHv770ext(): Sequence(&theInfo) {}
};

typedef SequenceOf<MBMSNeighbouringCellSCCPCHr6, CONSTRAINED, 1, maxSCCPCH> MBMSNeighbouringCellSCCPCHListr6;

typedef SequenceOf<MBMSNeighbouringCellSCCPCHv770ext, CONSTRAINED, 1, maxSCCPCH> MBMSNeighbouringCellSCCPCHListv770ext;

typedef BitString<CONSTRAINED, 40, 40> NetworkStandardTime;

typedef Integer<CONSTRAINED, 0, 4095> CorrelativeSFN;

class MBMSNetworkStandardTimeInformationLCRv890ext : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MBMSNetworkStandardTimeInformationLCRv890ext(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 32> MBMSNumberOfNeighbourCellsr6;

class MBMSPhyChInformationIMB384 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MBMSPhyChInformationIMB384(): Sequence(&theInfo) {}
};

typedef SequenceOf<MBMSPhyChInformationIMB384, CONSTRAINED, 1, maxMBMS_CommonPhyCh> MBMSPhyChInformationListIMB384;

class MBMSPhyChInformationr6 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MBMSPhyChInformationr6(): Sequence(&theInfo) {}
};

class MBMSPhyChInformationr7 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MBMSPhyChInformationr7(): Sequence(&theInfo) {}
};

typedef SequenceOf<MBMSPhyChInformationr6, CONSTRAINED, 1, maxMBMS_CommonPhyCh> MBMSPhyChInformationListr6;

typedef SequenceOf<MBMSPhyChInformationr7, CONSTRAINED, 1, maxMBMS_CommonPhyCh> MBMSPhyChInformationListr7;

enum MBMSPLServiceRestrictInfor6Values {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> MBMSPLServiceRestrictInfor6;

typedef Integer<CONSTRAINED, 1, maxMBMS_Freq> MbmsPreferredFrequency;

enum MBMSQoffsetValues {
	q4 = 0,
	q8 = 1,
	q12 = 2,
	q16 = 3,
	q20 = 4,
	q30 = 5,
	q40 = 6,
	qInfinity = 7,
};
typedef Enumerated<CONSTRAINED, 7> MBMSQoffset;

typedef Integer<CONSTRAINED, 0, 7> Mbms_HCSoffset;

class LayerConvergenceInformation : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	LayerConvergenceInformation(): Choices(&theInfo) {}
};

class MBMSPreferredFrequencyInfor6 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	MBMSPreferredFrequencyInfor6(): Sequence(&theInfo) {}
};

typedef SequenceOf<MBMSPreferredFrequencyInfor6, CONSTRAINED, 1, maxMBMS_Freq> MBMSPreferredFrequencyListr6;

typedef Integer<CONSTRAINED, 0, 2047> MBMSPTMActivationTimer6;

enum MBMSRequiredUEActionUModValues {
	none = 0,
	acquirePTM_RBInfo = 1,
	requestPTPRB = 2,
};
typedef Enumerated<CONSTRAINED, 2> MBMSRequiredUEActionUMod;

typedef _Null None;

typedef SequenceOf<MBMSServiceIdentityr6, CONSTRAINED, 1, maxMBMSservSelect> MBMSSelectedServicesListFull;

class Status : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	Status(): Choices(&theInfo) {}
};

class MBMSSelectedServiceInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBMSSelectedServiceInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<MBMSShortTransmissionID, CONSTRAINED, 1, maxMBMSservSelect> MBMSSelectedServicesListShort;

typedef Integer<CONSTRAINED, 0, 1> ModificationPeriodIdentity;

class MBMSSelectedServicesShort : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MBMSSelectedServicesShort(): Sequence(&theInfo) {}
};

class MBMSServiceAccessInfor6 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	MBMSServiceAccessInfor6(): Sequence(&theInfo) {}
};

typedef SequenceOf<MBMSServiceAccessInfor6, CONSTRAINED, 1, maxMBMSservCount> MBMSServiceAccessInfoListr6;

typedef Integer<CONSTRAINED, 0, 255> Start;

typedef Integer<CONSTRAINED, 1, 256> Duration;

class MBMSServiceTransmInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MBMSServiceTransmInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<MBMSServiceTransmInfo, CONSTRAINED, 1, maxMBMSTransmis> MBMSServiceTransmInfoList;

typedef Integer<CONSTRAINED, 0, 31> NextSchedulingperiod;

class MBMSServiceSchedulingInfor6 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	MBMSServiceSchedulingInfor6(): Sequence(&theInfo) {}
};

typedef SequenceOf<MBMSServiceSchedulingInfor6, CONSTRAINED, 1, maxMBMSservSched> MBMSServiceSchedulingInfoListr6;

typedef Integer<CONSTRAINED, 1, maxFACHPCH> TranspCh_Identity;

class MBMSTrCHInformationSIB5 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	MBMSTrCHInformationSIB5(): Sequence(&theInfo) {}
};

typedef SequenceOf<MBMSTrCHInformationSIB5, CONSTRAINED, 1, maxFACHPCH> MBMSTrCHInformationSIB5List;

class MBMSSIBType5SCCPCHr6 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MBMSSIBType5SCCPCHr6(): Sequence(&theInfo) {}
};

typedef SequenceOf<MBMSSIBType5SCCPCHr6, CONSTRAINED, 1, maxSCCPCH> MBMSSIBType5SCCPCHListr6;

class MBMSTimersAndCountersr6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBMSTimersAndCountersr6(): Sequence(&theInfo) {}
};

class MBMSTranspChInfoForCCTrChr6 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MBMSTranspChInfoForCCTrChr6(): Sequence(&theInfo) {}
};

typedef SequenceOf<MBMSTranspChInfoForCCTrChr6, CONSTRAINED, 1, maxMBMS_CommonCCTrCh> MBMSTranspChInfoForEachCCTrChr6;

class MBMSTranspChInfoForTrChr6 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MBMSTranspChInfoForTrChr6(): Sequence(&theInfo) {}
};

typedef SequenceOf<MBMSTranspChInfoForTrChr6, CONSTRAINED, 1, maxMBMS_CommonTrCh> MBMSTranspChInfoForEachTrChr6;

class MBMSUnmodifiedServicer6 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	MBMSUnmodifiedServicer6(): Sequence(&theInfo) {}
};

typedef SequenceOf<MBMSUnmodifiedServicer6, CONSTRAINED, 1, maxMBMSservUnmodif> MBMSUnmodifiedServiceListr6;

class MBMSUnmodifiedServicev770ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBMSUnmodifiedServicev770ext(): Sequence(&theInfo) {}
};

typedef SequenceOf<MBMSUnmodifiedServicev770ext, CONSTRAINED, 1, maxMBMSservUnmodif> MBMSUnmodifiedServiceListv770ext;

enum notificationOfAllMBSFNServicesInTheBandValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> notificationOfAllMBSFNServicesInTheBand;

class MBSFNservicesNotNotifiedr7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBSFNservicesNotNotifiedr7(): Sequence(&theInfo) {}
};

typedef _Null MbsfnServicesNotified;

class MbsfnServicesNotification : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	MbsfnServicesNotification(): Choices(&theInfo) {}
};

class MBSFNInterFrequencyNeighbourr7 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MBSFNInterFrequencyNeighbourr7(): Sequence(&theInfo) {}
};

enum imb_IndicationValues {
	true = 0,
};
typedef Enumerated<CONSTRAINED, 0> imb_Indication;

class MBSFNInterFrequencyNeighbourv860ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBSFNInterFrequencyNeighbourv860ext(): Sequence(&theInfo) {}
};

typedef SequenceOf<MBSFNInterFrequencyNeighbourr7, CONSTRAINED, 1, maxMBSFNClusters> MBSFNInterFrequencyNeighbourListr7;

typedef SequenceOf<MBSFNInterFrequencyNeighbourv860ext, CONSTRAINED, 1, maxMBSFNClusters> MBSFNInterFrequencyNeighbourListv860ext;

class MBSFNTDDTimeSlotInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MBSFNTDDTimeSlotInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<MBSFNTDDTimeSlotInfo, CONSTRAINED, 1, maxTS> MBSFNTDDInformation;

typedef Integer<CONSTRAINED, 1, maxMBSFNClusters> FrequencyIndex;

class MBSFNTDDTimeSlotInfoLCR : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MBSFNTDDTimeSlotInfoLCR(): Sequence(&theInfo) {}
};

typedef SequenceOf<MBSFNTDDTimeSlotInfoLCR, CONSTRAINED, 1, maxMBSFNClusters> MBSFNTDDInformationLCR;

typedef Integer<CONSTRAINED, 2, 9> TDMPeriod;

typedef Integer<CONSTRAINED, 0, 8> TDMOffset;

typedef Integer<CONSTRAINED, 1, 8> TDMLength;

class MBSFNTDMInfo : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	MBSFNTDMInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<MBSFNTDMInfo, CONSTRAINED, 1, maxMBMSservUnmodif> MBSFNTDMInfoList;

#endif /* RRCIE_H_ */
