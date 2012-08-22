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

#ifndef RRCINFORMATIONELEMENTS_H_
#define RRCINFORMATIONELEMENTS_H_

#include "ASNTypes.h"
#include "RRCConstantDefinitions.h"

namespace rrc {

typedef BitString<CONSTRAINED, 14, 14> Ansi41IDNNS;

enum CNDomainIdentityValues {
	cs_domain,ps_domain_CNDomainIdentity = 0,
};
typedef Enumerated<CONSTRAINED, 0> CNDomainIdentity;

class CNDomainInformation : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CNDomainInformation(): Sequence(&theInfo) {}

	void setCnDomainIdentity(const CNDomainIdentity& CnDomainIdentity) { *static_cast<CNDomainIdentity*>(items[0]) = CnDomainIdentity; }
};

class CNDomainInformationFull : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CNDomainInformationFull(): Sequence(&theInfo) {}

	void setCnDomainIdentity(const CNDomainIdentity& CnDomainIdentity) { *static_cast<CNDomainIdentity*>(items[0]) = CnDomainIdentity; }
};

typedef SequenceOf<CNDomainInformation, CONSTRAINED, 1, maxCNdomains> CNDomainInformationList;

typedef SequenceOf<CNDomainInformationFull, CONSTRAINED, 1, maxCNdomains> CNDomainInformationListFull;

class CNDomainSysInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CNDomainSysInfo(): Sequence(&theInfo) {}

	void setCnDomainIdentity(const CNDomainIdentity& CnDomainIdentity) { *static_cast<CNDomainIdentity*>(items[0]) = CnDomainIdentity; }
};

typedef SequenceOf<CNDomainSysInfo, CONSTRAINED, 1, maxCNdomains> CNDomainSysInfoList;

typedef Integer<CONSTRAINED, 0, 9> Digit;

typedef SequenceOf<Digit, CONSTRAINED, 3, 3> MCC;

class PLMNIdentity : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PLMNIdentity(): Sequence(&theInfo) {}

	void setMcc(const MCC& Mcc) { *static_cast<MCC*>(items[0]) = Mcc; }
};

class CNInformationInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CNInformationInfo(): Sequence(&theInfo) {}

	void setPlmnIdentity(const PLMNIdentity& PlmnIdentity) { *static_cast<PLMNIdentity*>(items[0]) = PlmnIdentity; }
};

class CNInformationInfor6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CNInformationInfor6(): Sequence(&theInfo) {}

	void setPlmnIdentity(const PLMNIdentity& PlmnIdentity) { *static_cast<PLMNIdentity*>(items[0]) = PlmnIdentity; }
};

class CNInformationInfoFull : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CNInformationInfoFull(): Sequence(&theInfo) {}

	void setPlmnIdentity(const PLMNIdentity& PlmnIdentity) { *static_cast<PLMNIdentity*>(items[0]) = PlmnIdentity; }
};

class GsmmapIDNNSRoutingbasis : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	GsmmapIDNNSRoutingbasis(): Choice(&theInfo) {}
};

class GsmmapIDNNS : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	GsmmapIDNNS(): Sequence(&theInfo) {}

	void setGsmmapIDNNSRoutingbasis(const GsmmapIDNNSRoutingbasis& GsmmapIDNNSRoutingbasis) { *static_cast<GsmmapIDNNSRoutingbasis*>(items[0]) = GsmmapIDNNSRoutingbasis; }
};

typedef Integer<CONSTRAINED, 0, 15> IMEIDigit;

typedef SequenceOf<IMEIDigit, CONSTRAINED, 15, 15> IMEI;

typedef SequenceOf<Digit, CONSTRAINED, 6, 21> IMSIGSMMAP;

class IntraDomainNasNodeSelectorVersionRelease99CnType : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	IntraDomainNasNodeSelectorVersionRelease99CnType(): Choice(&theInfo) {}
};

class IntraDomainNasNodeSelectorVersionRelease99 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IntraDomainNasNodeSelectorVersionRelease99(): Sequence(&theInfo) {}

	void setIntraDomainNasNodeSelectorVersionRelease99CnType(const IntraDomainNasNodeSelectorVersionRelease99CnType& IntraDomainNasNodeSelectorVersionRelease99CnType) { *static_cast<IntraDomainNasNodeSelectorVersionRelease99CnType*>(items[0]) = IntraDomainNasNodeSelectorVersionRelease99CnType; }
};

class IntraDomainNasNodeSelectorVersion : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	IntraDomainNasNodeSelectorVersion(): Choice(&theInfo) {}
};

class IntraDomainNasNodeSelector : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IntraDomainNasNodeSelector(): Sequence(&theInfo) {}

	void setIntraDomainNasNodeSelectorVersion(const IntraDomainNasNodeSelectorVersion& IntraDomainNasNodeSelectorVersion) { *static_cast<IntraDomainNasNodeSelectorVersion*>(items[0]) = IntraDomainNasNodeSelectorVersion; }
};

class LAI : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	LAI(): Sequence(&theInfo) {}

	void setPlmnIdentity(const PLMNIdentity& PlmnIdentity) { *static_cast<PLMNIdentity*>(items[0]) = PlmnIdentity; }
};

enum AccessClassBarredValues {
	Barred,_AccessClassBarred = 0,
};
typedef Enumerated<CONSTRAINED, 0> AccessClassBarred;

typedef SequenceOf<AccessClassBarred, CONSTRAINED, 15, 15> LocationRegistrationAccessClassBarredList;

typedef Null LocationRegistrationParametersNoRestriction;

class LocationRegistrationParameters : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	LocationRegistrationParameters(): Choice(&theInfo) {}
};

typedef SequenceOf<Digit, CONSTRAINED, 2, 3> MNC;

typedef Boolean MultiplePLMNListr6MibPLMNIdentity;

class MultiplePLMNListr6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MultiplePLMNListr6(): Sequence(&theInfo) {}

	void setMultiplePLMNListr6MibPLMNIdentity(const MultiplePLMNListr6MibPLMNIdentity& MultiplePLMNListr6MibPLMNIdentity) { *static_cast<MultiplePLMNListr6MibPLMNIdentity*>(items[0]) = MultiplePLMNListr6MibPLMNIdentity; }
};

typedef OctetString<CONSTRAINED, 1, 4095> NASMessage;

typedef BitString<CONSTRAINED, 4, 4> NASSynchronisationIndicator;

typedef OctetString<CONSTRAINED, 1, 8> NASSystemInformationGSMMAP;

typedef BitString<CONSTRAINED, 32, 32> PTMSIGSMMAP;

enum PagingPermissionWithAccessControlParameterspagingResponseRestrictionIndicatorValues {
	All,_PagingPermissionWithAccessControlParameterspagingResponseRestrictionIndicator = 0,
};
typedef Enumerated<CONSTRAINED, 0> PagingPermissionWithAccessControlParameterspagingResponseRestrictionIndicator;

class PagingPermissionWithAccessControlParameters : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PagingPermissionWithAccessControlParameters(): Sequence(&theInfo) {}

	void setPagingPermissionWithAccessControlParameterspagingResponseRestrictionIndicator(const PagingPermissionWithAccessControlParameterspagingResponseRestrictionIndicator& PagingPermissionWithAccessControlParameterspagingResponseRestrictionIndicator) { *static_cast<PagingPermissionWithAccessControlParameterspagingResponseRestrictionIndicator*>(items[0]) = PagingPermissionWithAccessControlParameterspagingResponseRestrictionIndicator; }
};

class PagingPermissionWithAccessControlList : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PagingPermissionWithAccessControlList(): Sequence(&theInfo) {}

	void setPagingPermissionWithAccessControlParametersForOperator1(const PagingPermissionWithAccessControlParameters& PagingPermissionWithAccessControlParametersForOperator1) { *static_cast<PagingPermissionWithAccessControlParameters*>(items[0]) = PagingPermissionWithAccessControlParametersForOperator1; }
};

class PagingPermissionWithAccessControlForSharedNetwork : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	PagingPermissionWithAccessControlForSharedNetwork(): Choice(&theInfo) {}
};

enum PagingRecordTypeIDValues {
	ImsiGSMMAP,_PagingRecordTypeID = 0,
};
typedef Enumerated<CONSTRAINED, 0> PagingRecordTypeID;

class PLMNType : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	PLMNType(): Choice(&theInfo) {}
};

typedef BitString<EXTCONSTRAINED, 8, 8> RABIdentityGsmMAPRABIdentity;

class RABIdentity : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	RABIdentity(): Choice(&theInfo) {}
};

class RAI : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RAI(): Sequence(&theInfo) {}

	void setLai(const LAI& Lai) { *static_cast<LAI*>(items[0]) = Lai; }
};

typedef BitString<CONSTRAINED, 8, 8> RoutingAreaCode;

typedef BitString<CONSTRAINED, 10, 10> RoutingParameter;

typedef BitString<CONSTRAINED, 32, 32> TMSIGSMMAP;

typedef SequenceOf<AccessClassBarred, CONSTRAINED, maxAC, maxAC> AccessClassBarredList;

enum AllowedIndicatorValues {
	Allowed,_AllowedIndicator = 0,
};
typedef Enumerated<CONSTRAINED, 0> AllowedIndicator;

class CellBarredBarred : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellBarredBarred(): Sequence(&theInfo) {}

	void setIntraFreqCellReselectionInd(const AllowedIndicator& IntraFreqCellReselectionInd) { *static_cast<AllowedIndicator*>(items[0]) = IntraFreqCellReselectionInd; }
};

class CellBarred : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	CellBarred(): Choice(&theInfo) {}
};

class CellAccessRestriction : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellAccessRestriction(): Sequence(&theInfo) {}

	void setCellBarred(const CellBarred& CellBarred) { *static_cast<CellBarred*>(items[0]) = CellBarred; }
};

enum CellAccessRestrictionv870extcellReservedForCSGValues {
	true_CellAccessRestrictionv870extcellReservedForCSG = 0,
};
typedef Enumerated<CONSTRAINED, 0> CellAccessRestrictionv870extcellReservedForCSG;

class CellAccessRestrictionv870ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellAccessRestrictionv870ext(): Sequence(&theInfo) {}

	void setCellAccessRestrictionv870extcellReservedForCSG(const CellAccessRestrictionv870extcellReservedForCSG& CellAccessRestrictionv870extcellReservedForCSG) { *static_cast<CellAccessRestrictionv870extcellReservedForCSG*>(items[0]) = CellAccessRestrictionv870extcellReservedForCSG; }
};

typedef BitString<CONSTRAINED, 28, 28> CellIdentity;

typedef SequenceOf<CellIdentity, CONSTRAINED, 1, maxRL> CellIdentityPerRLList;

class FrequencyInfoModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	FrequencyInfoModeSpecificInfo(): Choice(&theInfo) {}
};

class FrequencyInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	FrequencyInfo(): Sequence(&theInfo) {}

	void setFrequencyInfoModeSpecificInfo(const FrequencyInfoModeSpecificInfo& FrequencyInfoModeSpecificInfo) { *static_cast<FrequencyInfoModeSpecificInfo*>(items[0]) = FrequencyInfoModeSpecificInfo; }
};

typedef SequenceOf<FrequencyInfo, CONSTRAINED, 1, maxDedicatedCSGFreq> CSGDedicatedFrequencyInfoList;

typedef BitString<CONSTRAINED, 27, 27> CSGIdentity;

typedef Integer<EXTCONSTRAINED, 0, 63> CSGPSCSplitInfoStartPSC;

class CSGPSCSplitInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CSGPSCSplitInfo(): Sequence(&theInfo) {}

	void setCSGPSCSplitInfoStartPSC(const CSGPSCSplitInfoStartPSC& CSGPSCSplitInfoStartPSC) { *static_cast<CSGPSCSplitInfoStartPSC*>(items[0]) = CSGPSCSplitInfoStartPSC; }
};

typedef Null DomainSpecificAccessRestrictionv670extNoRestriction;

class DomainSpecificAccessRestrictionv670ext : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	DomainSpecificAccessRestrictionv670ext(): Choice(&theInfo) {}
};

class DomainSpecificAccessRestrictionParamv670ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DomainSpecificAccessRestrictionParamv670ext(): Sequence(&theInfo) {}

	void setCSDomainSpecificAccessRestriction(const DomainSpecificAccessRestrictionv670ext& CSDomainSpecificAccessRestriction) { *static_cast<DomainSpecificAccessRestrictionv670ext*>(items[0]) = CSDomainSpecificAccessRestriction; }
};

class DomainSpecificAccessRestrictionListv670ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DomainSpecificAccessRestrictionListv670ext(): Sequence(&theInfo) {}

	void setDomainSpecificAccessRestrictionParametersForOperator1(const DomainSpecificAccessRestrictionParamv670ext& DomainSpecificAccessRestrictionParametersForOperator1) { *static_cast<DomainSpecificAccessRestrictionParamv670ext*>(items[0]) = DomainSpecificAccessRestrictionParametersForOperator1; }
};

class DomainSpecificAccessRestrictionForSharedNetworkv670ext : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	DomainSpecificAccessRestrictionForSharedNetworkv670ext(): Choice(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 127> MapParameter;

enum RATValues {
	UtraFDD,_RAT = 0,
};
typedef Enumerated<CONSTRAINED, 0> RAT;

class Mapping : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Mapping(): Sequence(&theInfo) {}

	void setRat(const RAT& Rat) { *static_cast<RAT*>(items[0]) = Rat; }
};

enum MappingFunctionTypeValues {
	Linear,_MappingFunctionType = 0,
};
typedef Enumerated<CONSTRAINED, 0> MappingFunctionType;

class MappingFunctionParameter : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MappingFunctionParameter(): Sequence(&theInfo) {}

	void setFunctionType(const MappingFunctionType& FunctionType) { *static_cast<MappingFunctionType*>(items[0]) = FunctionType; }
};

typedef SequenceOf<MappingFunctionParameter, CONSTRAINED, 1, maxMeasIntervals> MappingFunctionParameterList;

class MappingLCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MappingLCRr4(): Sequence(&theInfo) {}

	void setMappingFunctionParameterList(const MappingFunctionParameterList& MappingFunctionParameterList) { *static_cast<MappingFunctionParameterList*>(items[0]) = MappingFunctionParameterList; }
};

typedef SequenceOf<Mapping, CONSTRAINED, 1, maxRAT> MappingInfo;

typedef Integer<CONSTRAINED, 1, maxSCCPCH> OccurrenceSequenceNumberOfPICH;

typedef Null DedicatedPriorityInformationActionClearDedicatedPriorities;

class DedicatedPriorityInformationAction : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	DedicatedPriorityInformationAction(): Choice(&theInfo) {}
};

class DedicatedPriorityInformation : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DedicatedPriorityInformation(): Sequence(&theInfo) {}

	void setDedicatedPriorityInformationAction(const DedicatedPriorityInformationAction& DedicatedPriorityInformationAction) { *static_cast<DedicatedPriorityInformationAction*>(items[0]) = DedicatedPriorityInformationAction; }
};

typedef Integer<EXTCONSTRAINED, SIZE (1, maxNumFDDFreqs> PriorityLevelPriority;

class PriorityLevel : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PriorityLevel(): Sequence(&theInfo) {}

	void setPriorityLevelPriority(const PriorityLevelPriority& PriorityLevelPriority) { *static_cast<PriorityLevelPriority*>(items[0]) = PriorityLevelPriority; }
};

typedef SequenceOf<PriorityLevel, CONSTRAINED, 1, maxPrio> PriorityLevelList;

typedef Integer<CONSTRAINED, 0, 20> QHystS;

typedef Integer<CONSTRAINED, 0, 40> QHystSFine;

enum RATIdentifierValues {
	Gsm,_RATIdentifier = 0,
};
typedef Enumerated<CONSTRAINED, 0> RATIdentifier;

class RATFDDInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RATFDDInfo(): Sequence(&theInfo) {}

	void setRatIdentifier(const RATIdentifier& RatIdentifier) { *static_cast<RATIdentifier*>(items[0]) = RatIdentifier; }
};

typedef SequenceOf<RATFDDInfo, CONSTRAINED, 1, maxOtherRAT> RATFDDInfoList;

class RATTDDInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RATTDDInfo(): Sequence(&theInfo) {}

	void setRatIdentifier(const RATIdentifier& RatIdentifier) { *static_cast<RATIdentifier*>(items[0]) = RatIdentifier; }
};

typedef SequenceOf<RATTDDInfo, CONSTRAINED, 1, maxOtherRAT> RATTDDInfoList;

enum ReservedIndicatorValues {
	Reserved,_ReservedIndicator = 0,
};
typedef Enumerated<CONSTRAINED, 0> ReservedIndicator;

typedef Integer<CONSTRAINED, -16, 10> SSearchQual;

typedef Integer<CONSTRAINED, -53, 45> SSearchRXLEV;

typedef Integer<CONSTRAINED, 0, 10> SpeedDependentScalingFactor;

enum TBarredValues {
	S10,_TBarred = 0,
};
typedef Enumerated<CONSTRAINED, 0> TBarred;

typedef Integer<CONSTRAINED, 0, 31> TReselectionS;

typedef Integer<CONSTRAINED, 0, 31> TReselectionSFine;

typedef Integer<CONSTRAINED, 4, 19> TreselectionScalingFactor;

typedef Integer<CONSTRAINED, 1, 91> UpperLimit;

typedef BitString<CONSTRAINED, 16, 16> URAIdentity;

typedef SequenceOf<URAIdentity, CONSTRAINED, 1, maxURA> URAIdentityList;

enum AccessStratumReleaseIndicatorValues {
	Rel4,_AccessStratumReleaseIndicator = 0,
};
typedef Enumerated<CONSTRAINED, 0> AccessStratumReleaseIndicator;

typedef Integer<CONSTRAINED, 0, 255> ActivationTime;

typedef Integer<CONSTRAINED, 1, 64> NAPRetransMax;

class BackoffControlParams : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	BackoffControlParams(): Sequence(&theInfo) {}

	void setNAPRetransMax(const NAPRetransMax& NAPRetransMax) { *static_cast<NAPRetransMax*>(items[0]) = NAPRetransMax; }
};

typedef Integer<CONSTRAINED, 1, 256> BandComb;

typedef BitString<CONSTRAINED, 16, 16> CRNTI;

typedef Boolean CapabilityUpdateRequirementUeRadioCapabilityFDDUpdateRequirement;

class CapabilityUpdateRequirement : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CapabilityUpdateRequirement(): Sequence(&theInfo) {}

	void setCapabilityUpdateRequirementUeRadioCapabilityFDDUpdateRequirement(const CapabilityUpdateRequirementUeRadioCapabilityFDDUpdateRequirement& CapabilityUpdateRequirementUeRadioCapabilityFDDUpdateRequirement) { *static_cast<CapabilityUpdateRequirementUeRadioCapabilityFDDUpdateRequirement*>(items[0]) = CapabilityUpdateRequirementUeRadioCapabilityFDDUpdateRequirement; }
};

typedef Boolean CapabilityUpdateRequirementr4extUeRadioCapabilityUpdateRequirementTDD128;

class CapabilityUpdateRequirementr4ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CapabilityUpdateRequirementr4ext(): Sequence(&theInfo) {}

	void setCapabilityUpdateRequirementr4extUeRadioCapabilityUpdateRequirementTDD128(const CapabilityUpdateRequirementr4extUeRadioCapabilityUpdateRequirementTDD128& CapabilityUpdateRequirementr4extUeRadioCapabilityUpdateRequirementTDD128) { *static_cast<CapabilityUpdateRequirementr4extUeRadioCapabilityUpdateRequirementTDD128*>(items[0]) = CapabilityUpdateRequirementr4extUeRadioCapabilityUpdateRequirementTDD128; }
};

typedef Boolean CapabilityUpdateRequirementr4UeRadioCapabilityFDDUpdateRequirementFDD;

class CapabilityUpdateRequirementr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CapabilityUpdateRequirementr4(): Sequence(&theInfo) {}

	void setCapabilityUpdateRequirementr4UeRadioCapabilityFDDUpdateRequirementFDD(const CapabilityUpdateRequirementr4UeRadioCapabilityFDDUpdateRequirementFDD& CapabilityUpdateRequirementr4UeRadioCapabilityFDDUpdateRequirementFDD) { *static_cast<CapabilityUpdateRequirementr4UeRadioCapabilityFDDUpdateRequirementFDD*>(items[0]) = CapabilityUpdateRequirementr4UeRadioCapabilityFDDUpdateRequirementFDD; }
};

typedef Boolean CapabilityUpdateRequirementr5UeRadioCapabilityFDDUpdateRequirementFDD;

class CapabilityUpdateRequirementr5 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CapabilityUpdateRequirementr5(): Sequence(&theInfo) {}

	void setCapabilityUpdateRequirementr5UeRadioCapabilityFDDUpdateRequirementFDD(const CapabilityUpdateRequirementr5UeRadioCapabilityFDDUpdateRequirementFDD& CapabilityUpdateRequirementr5UeRadioCapabilityFDDUpdateRequirementFDD) { *static_cast<CapabilityUpdateRequirementr5UeRadioCapabilityFDDUpdateRequirementFDD*>(items[0]) = CapabilityUpdateRequirementr5UeRadioCapabilityFDDUpdateRequirementFDD; }
};

typedef Boolean CapabilityUpdateRequirementv770extUeRadioCapabilityTDDUpdateRequirementTDD768;

class CapabilityUpdateRequirementv770ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CapabilityUpdateRequirementv770ext(): Sequence(&theInfo) {}

	void setCapabilityUpdateRequirementv770extUeRadioCapabilityTDDUpdateRequirementTDD768(const CapabilityUpdateRequirementv770extUeRadioCapabilityTDDUpdateRequirementTDD768& CapabilityUpdateRequirementv770extUeRadioCapabilityTDDUpdateRequirementTDD768) { *static_cast<CapabilityUpdateRequirementv770extUeRadioCapabilityTDDUpdateRequirementTDD768*>(items[0]) = CapabilityUpdateRequirementv770extUeRadioCapabilityTDDUpdateRequirementTDD768; }
};

typedef Boolean CapabilityUpdateRequirementr7UeRadioCapabilityFDDUpdateRequirementFDD;

class CapabilityUpdateRequirementr7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CapabilityUpdateRequirementr7(): Sequence(&theInfo) {}

	void setCapabilityUpdateRequirementr7UeRadioCapabilityFDDUpdateRequirementFDD(const CapabilityUpdateRequirementr7UeRadioCapabilityFDDUpdateRequirementFDD& CapabilityUpdateRequirementr7UeRadioCapabilityFDDUpdateRequirementFDD) { *static_cast<CapabilityUpdateRequirementr7UeRadioCapabilityFDDUpdateRequirementFDD*>(items[0]) = CapabilityUpdateRequirementr7UeRadioCapabilityFDDUpdateRequirementFDD; }
};

enum SystemSpecificCapUpdateReqr8Values {
	Gsm,_SystemSpecificCapUpdateReqr8 = 0,
};
typedef Enumerated<CONSTRAINED, 0> SystemSpecificCapUpdateReqr8;

typedef SequenceOf<SystemSpecificCapUpdateReqr8, CONSTRAINED, 1, maxSystemCapability> SystemSpecificCapUpdateReqListr8;

class CapabilityUpdateRequirementv860ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CapabilityUpdateRequirementv860ext(): Sequence(&theInfo) {}

	void setSystemSpecificCapUpdateReqList(const SystemSpecificCapUpdateReqListr8& SystemSpecificCapUpdateReqList) { *static_cast<SystemSpecificCapUpdateReqListr8*>(items[0]) = SystemSpecificCapUpdateReqList; }
};

typedef Boolean CapabilityUpdateRequirementr8UeRadioCapabilityFDDUpdateRequirementFDD;

class CapabilityUpdateRequirementr8 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CapabilityUpdateRequirementr8(): Sequence(&theInfo) {}

	void setCapabilityUpdateRequirementr8UeRadioCapabilityFDDUpdateRequirementFDD(const CapabilityUpdateRequirementr8UeRadioCapabilityFDDUpdateRequirementFDD& CapabilityUpdateRequirementr8UeRadioCapabilityFDDUpdateRequirementFDD) { *static_cast<CapabilityUpdateRequirementr8UeRadioCapabilityFDDUpdateRequirementFDD*>(items[0]) = CapabilityUpdateRequirementr8UeRadioCapabilityFDDUpdateRequirementFDD; }
};

enum CellUpdateCauseValues {
	CellReselection,_CellUpdateCause = 0,
};
typedef Enumerated<CONSTRAINED, 0> CellUpdateCause;

enum CellUpdateCauseextValues {
	MbmsReception,_CellUpdateCauseext = 0,
};
typedef Enumerated<CONSTRAINED, 0> CellUpdateCauseext;

enum ChipRateCapabilityValues {
	Mcps384,_ChipRateCapability = 0,
};
typedef Enumerated<CONSTRAINED, 0> ChipRateCapability;

enum CipheringAlgorithmValues {
	Uea0,_CipheringAlgorithm = 0,
};
typedef Enumerated<CONSTRAINED, 0> CipheringAlgorithm;

enum CipheringAlgorithmr7Values {
	Uea0,_CipheringAlgorithmr7 = 0,
};
typedef Enumerated<CONSTRAINED, 0> CipheringAlgorithmr7;

class CipheringModeCommand : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	CipheringModeCommand(): Choice(&theInfo) {}
};

class CipheringModeCommandr7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CipheringModeCommandr7(): Sequence(&theInfo) {}

	void setStartRestart(const CipheringAlgorithmr7& StartRestart) { *static_cast<CipheringAlgorithmr7*>(items[0]) = StartRestart; }
};

class CipheringModeInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CipheringModeInfo(): Sequence(&theInfo) {}

	void setCipheringModeCommand(const CipheringModeCommand& CipheringModeCommand) { *static_cast<CipheringModeCommand*>(items[0]) = CipheringModeCommand; }
};

class CipheringModeInfor7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CipheringModeInfor7(): Sequence(&theInfo) {}

	void setCipheringModeCommand(const CipheringModeCommandr7& CipheringModeCommand) { *static_cast<CipheringModeCommandr7*>(items[0]) = CipheringModeCommand; }
};

typedef Integer<CONSTRAINED, 6, 9> CNDRXCycleLengthCoefficient;

class CNPagedUEIdentity : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	CNPagedUEIdentity(): Choice(&theInfo) {}
};

typedef Boolean CompressedModeMeasCapabilityFddMeasurements;

class CompressedModeMeasCapability : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CompressedModeMeasCapability(): Sequence(&theInfo) {}

	void setCompressedModeMeasCapabilityFddMeasurements(const CompressedModeMeasCapabilityFddMeasurements& CompressedModeMeasCapabilityFddMeasurements) { *static_cast<CompressedModeMeasCapabilityFddMeasurements*>(items[0]) = CompressedModeMeasCapabilityFddMeasurements; }
};

typedef Boolean CompressedModeMeasCapabilityLCRr4Tdd128Measurements;

class CompressedModeMeasCapabilityLCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CompressedModeMeasCapabilityLCRr4(): Sequence(&theInfo) {}

	void setCompressedModeMeasCapabilityLCRr4Tdd128Measurements(const CompressedModeMeasCapabilityLCRr4Tdd128Measurements& CompressedModeMeasCapabilityLCRr4Tdd128Measurements) { *static_cast<CompressedModeMeasCapabilityLCRr4Tdd128Measurements*>(items[0]) = CompressedModeMeasCapabilityLCRr4Tdd128Measurements; }
};

enum CompressedModeMeasCapabilityv860extadjacentFrequencyMeasurementsValues {
	true_CompressedModeMeasCapabilityv860extadjacentFrequencyMeasurements = 0,
};
typedef Enumerated<CONSTRAINED, 0> CompressedModeMeasCapabilityv860extadjacentFrequencyMeasurements;

class CompressedModeMeasCapabilityv860ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CompressedModeMeasCapabilityv860ext(): Sequence(&theInfo) {}

	void setCompressedModeMeasCapabilityv860extadjacentFrequencyMeasurements(const CompressedModeMeasCapabilityv860extadjacentFrequencyMeasurements& CompressedModeMeasCapabilityv860extadjacentFrequencyMeasurements) { *static_cast<CompressedModeMeasCapabilityv860extadjacentFrequencyMeasurements*>(items[0]) = CompressedModeMeasCapabilityv860extadjacentFrequencyMeasurements; }
};

enum CompressedModeMeasCapabilityv920extinterBandMeasurementsValues {
	true_CompressedModeMeasCapabilityv920extinterBandMeasurements = 0,
};
typedef Enumerated<CONSTRAINED, 0> CompressedModeMeasCapabilityv920extinterBandMeasurements;

class CompressedModeMeasCapabilityv920ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CompressedModeMeasCapabilityv920ext(): Sequence(&theInfo) {}

	void setCompressedModeMeasCapabilityv920extinterBandMeasurements(const CompressedModeMeasCapabilityv920extinterBandMeasurements& CompressedModeMeasCapabilityv920extinterBandMeasurements) { *static_cast<CompressedModeMeasCapabilityv920extinterBandMeasurements*>(items[0]) = CompressedModeMeasCapabilityv920extinterBandMeasurements; }
};

typedef Integer<CONSTRAINED, 1, 64> RadioFrequencyBandEUTRA;

class CompressedModeMeasCapabEUTRA : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CompressedModeMeasCapabEUTRA(): Sequence(&theInfo) {}

	void setRadioFrequencyBandEUTRA(const RadioFrequencyBandEUTRA& RadioFrequencyBandEUTRA) { *static_cast<RadioFrequencyBandEUTRA*>(items[0]) = RadioFrequencyBandEUTRA; }
};

typedef SequenceOf<CompressedModeMeasCapabEUTRA, CONSTRAINED, 1, maxFreqBandsEUTRA> CompressedModeMeasCapabEUTRAList;

typedef SequenceOf<CompressedModeMeasCapabFDD, CONSTRAINED, 1, maxFreqBandsFDD> CompressedModeMeasCapabFDDList;

typedef SequenceOf<CompressedModeMeasCapabFDD2, CONSTRAINED, 1, maxFreqBandsFDD> CompressedModeMeasCapabFDDList2;

enum RadioFrequencyBandFDD2Values {
	BandVIII,_RadioFrequencyBandFDD2 = 0,
};
typedef Enumerated<CONSTRAINED, 0> RadioFrequencyBandFDD2;

class CompressedModeMeasCapabFDDext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CompressedModeMeasCapabFDDext(): Sequence(&theInfo) {}

	void setRadioFrequencyBandFDD2(const RadioFrequencyBandFDD2& RadioFrequencyBandFDD2) { *static_cast<RadioFrequencyBandFDD2*>(items[0]) = RadioFrequencyBandFDD2; }
};

typedef SequenceOf<CompressedModeMeasCapabFDDext, CONSTRAINED, 1, maxFreqBandsFDD> CompressedModeMeasCapabFDDListext;



enum RadioFrequencyBandTDDValues {
	A,_RadioFrequencyBandTDD = 0,
};
typedef Enumerated<CONSTRAINED, 0> RadioFrequencyBandTDD;

class CompressedModeMeasCapabTDD : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CompressedModeMeasCapabTDD(): Sequence(&theInfo) {}

	void setRadioFrequencyBandTDD(const RadioFrequencyBandTDD& RadioFrequencyBandTDD) { *static_cast<RadioFrequencyBandTDD*>(items[0]) = RadioFrequencyBandTDD; }
};

typedef SequenceOf<CompressedModeMeasCapabTDD, CONSTRAINED, 1, maxFreqBandsTDD> CompressedModeMeasCapabTDDList;

enum RadioFrequencyBandGSMValues {
	Gsm450,_RadioFrequencyBandGSM = 0,
};
typedef Enumerated<CONSTRAINED, 0> RadioFrequencyBandGSM;

class CompressedModeMeasCapabGSM : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CompressedModeMeasCapabGSM(): Sequence(&theInfo) {}

	void setRadioFrequencyBandGSM(const RadioFrequencyBandGSM& RadioFrequencyBandGSM) { *static_cast<RadioFrequencyBandGSM*>(items[0]) = RadioFrequencyBandGSM; }
};

typedef SequenceOf<CompressedModeMeasCapabGSM, CONSTRAINED, 1, maxFreqBandsGSM> CompressedModeMeasCapabGSMList;

typedef Boolean CompressedModeMeasCapabMCDlMeasurementsMC;

class CompressedModeMeasCapabMC : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CompressedModeMeasCapabMC(): Sequence(&theInfo) {}

	void setCompressedModeMeasCapabMCDlMeasurementsMC(const CompressedModeMeasCapabMCDlMeasurementsMC& CompressedModeMeasCapabMCDlMeasurementsMC) { *static_cast<CompressedModeMeasCapabMCDlMeasurementsMC*>(items[0]) = CompressedModeMeasCapabMCDlMeasurementsMC; }
};

enum CSGProximityIndicationCapabilitysupportOfIntraFreqProximityIndicationValues {
	True_CSGProximityIndicationCapabilitysupportOfIntraFreqProximityIndication = 0,
};
typedef Enumerated<CONSTRAINED, 0> CSGProximityIndicationCapabilitysupportOfIntraFreqProximityIndication;

class CSGProximityIndicationCapability : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CSGProximityIndicationCapability(): Sequence(&theInfo) {}

	void setCSGProximityIndicationCapabilitysupportOfIntraFreqProximityIndication(const CSGProximityIndicationCapabilitysupportOfIntraFreqProximityIndication& CSGProximityIndicationCapabilitysupportOfIntraFreqProximityIndication) { *static_cast<CSGProximityIndicationCapabilitysupportOfIntraFreqProximityIndication*>(items[0]) = CSGProximityIndicationCapabilitysupportOfIntraFreqProximityIndication; }
};

enum DLCapabilityWithSimultaneousHSDSCHConfigValues {
	Kbps32,_DLCapabilityWithSimultaneousHSDSCHConfig = 0,
};
typedef Enumerated<CONSTRAINED, 0> DLCapabilityWithSimultaneousHSDSCHConfig;

typedef Integer<CONSTRAINED, 0, 63> DLDPCCHBER;

typedef Integer<CONSTRAINED, 0, 511> PrimaryScramblingCode;

class PrimaryCPICHInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PrimaryCPICHInfo(): Sequence(&theInfo) {}

	void setPrimaryScramblingCode(const PrimaryScramblingCode& PrimaryScramblingCode) { *static_cast<PrimaryScramblingCode*>(items[0]) = PrimaryScramblingCode; }
};

class DLInformationPerSecondaryRL : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLInformationPerSecondaryRL(): Sequence(&theInfo) {}

	void setPrimaryCPICHInfo(const PrimaryCPICHInfo& PrimaryCPICHInfo) { *static_cast<PrimaryCPICHInfo*>(items[0]) = PrimaryCPICHInfo; }
};

typedef SequenceOf<DLInformationPerSecondaryRL, CONSTRAINED, 1, maxEDCHRL> DLInformationPerSecondaryRLList;

typedef Integer<EXTCONSTRAINED, 1, 8> DLPhysChCapabilityFDDMaxNoDPCHPDSCHCodes;

class DLPhysChCapabilityFDD : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLPhysChCapabilityFDD(): Sequence(&theInfo) {}

	void setDLPhysChCapabilityFDDMaxNoDPCHPDSCHCodes(const DLPhysChCapabilityFDDMaxNoDPCHPDSCHCodes& DLPhysChCapabilityFDDMaxNoDPCHPDSCHCodes) { *static_cast<DLPhysChCapabilityFDDMaxNoDPCHPDSCHCodes*>(items[0]) = DLPhysChCapabilityFDDMaxNoDPCHPDSCHCodes; }
};

enum SupportOfDedicatedPilotsForChEstimationValues {
	true_SupportOfDedicatedPilotsForChEstimation = 0,
};
typedef Enumerated<CONSTRAINED, 0> SupportOfDedicatedPilotsForChEstimation;

class DLPhysChCapabilityFDDv380ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLPhysChCapabilityFDDv380ext(): Sequence(&theInfo) {}

	void setDummy(const SupportOfDedicatedPilotsForChEstimation& Dummy) { *static_cast<SupportOfDedicatedPilotsForChEstimation*>(items[0]) = Dummy; }
};

typedef Integer<CONSTRAINED, 1, 20> HSDSCHphysicallayercategoryext;

class DLPhysChCapabilityFDDv770ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLPhysChCapabilityFDDv770ext(): Sequence(&theInfo) {}

	void setHsdschphysicallayercategoryext(const HSDSCHphysicallayercategoryext& Hsdschphysicallayercategoryext) { *static_cast<HSDSCHphysicallayercategoryext*>(items[0]) = Hsdschphysicallayercategoryext; }
};

typedef Integer<CONSTRAINED, 21, 24> HSDSCHphysicallayercategoryext2;

class DLPhysChCapabilityFDDv860ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLPhysChCapabilityFDDv860ext(): Sequence(&theInfo) {}

	void setHsdschphysicallayercategoryext2(const HSDSCHphysicallayercategoryext2& Hsdschphysicallayercategoryext2) { *static_cast<HSDSCHphysicallayercategoryext2*>(items[0]) = Hsdschphysicallayercategoryext2; }
};

typedef Integer<CONSTRAINED, 25, 28> HSDSCHphysicallayercategoryext3;

class DLPhysChCapabilityFDDv920ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLPhysChCapabilityFDDv920ext(): Sequence(&theInfo) {}

	void setHsdschphysicallayercategoryext3(const HSDSCHphysicallayercategoryext3& Hsdschphysicallayercategoryext3) { *static_cast<HSDSCHphysicallayercategoryext3*>(items[0]) = Hsdschphysicallayercategoryext3; }
};

typedef Integer<CONSTRAINED, 1, 14> MaxTSPerFrame;

class DLPhysChCapabilityTDD : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLPhysChCapabilityTDD(): Sequence(&theInfo) {}

	void setMaxTSPerFrame(const MaxTSPerFrame& MaxTSPerFrame) { *static_cast<MaxTSPerFrame*>(items[0]) = MaxTSPerFrame; }
};

typedef Integer<CONSTRAINED, 1, 6> MaxTSPerSubFramer4;

class DLPhysChCapabilityTDDLCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLPhysChCapabilityTDDLCRr4(): Sequence(&theInfo) {}

	void setMaxTSPerSubFrame(const MaxTSPerSubFramer4& MaxTSPerSubFrame) { *static_cast<MaxTSPerSubFramer4*>(items[0]) = MaxTSPerSubFrame; }
};

typedef Integer<CONSTRAINED, 1, 64> MultiCarrierHSDSCHphysicallayercategory;

class DLPhysChCapabilityTDD128v770ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLPhysChCapabilityTDD128v770ext(): Sequence(&theInfo) {}

	void setMultiCarrierphysicallayercategory(const MultiCarrierHSDSCHphysicallayercategory& MultiCarrierphysicallayercategory) { *static_cast<MultiCarrierHSDSCHphysicallayercategory*>(items[0]) = MultiCarrierphysicallayercategory; }
};

typedef Integer<CONSTRAINED, 1, 64> HSDSCHphysicallayercategoryextension;

class DLPhysChCapabilityTDD128v860ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLPhysChCapabilityTDD128v860ext(): Sequence(&theInfo) {}

	void setHSDSCHphysicallayercategoryextension(const HSDSCHphysicallayercategoryextension& HSDSCHphysicallayercategoryextension) { *static_cast<HSDSCHphysicallayercategoryextension*>(items[0]) = HSDSCHphysicallayercategoryextension; }
};

class DLPhysChCapabilityTDD768 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLPhysChCapabilityTDD768(): Sequence(&theInfo) {}

	void setMaxTSPerFrame(const MaxTSPerFrame& MaxTSPerFrame) { *static_cast<MaxTSPerFrame*>(items[0]) = MaxTSPerFrame; }
};

class DLPhysChCapabilityInfoTDD768 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLPhysChCapabilityInfoTDD768(): Sequence(&theInfo) {}

	void setMaxTSPerFrame(const MaxTSPerFrame& MaxTSPerFrame) { *static_cast<MaxTSPerFrame*>(items[0]) = MaxTSPerFrame; }
};

enum MaxNoBitsValues {
	B640,_MaxNoBits = 0,
};
typedef Enumerated<CONSTRAINED, 0> MaxNoBits;

class DLTransChCapability : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLTransChCapability(): Sequence(&theInfo) {}

	void setMaxNoBitsReceived(const MaxNoBits& MaxNoBitsReceived) { *static_cast<MaxNoBits*>(items[0]) = MaxNoBitsReceived; }
};

typedef Integer<CONSTRAINED, 1, 8> TransmissionProbability;

class DRACSysInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DRACSysInfo(): Sequence(&theInfo) {}

	void setTransmissionProbability(const TransmissionProbability& TransmissionProbability) { *static_cast<TransmissionProbability*>(items[0]) = TransmissionProbability; }
};

typedef SequenceOf<DRACSysInfo, CONSTRAINED, 1, maxDRACclasses> DRACSysInfoList;

typedef BitString<CONSTRAINED, 16, 16> DSCHRNTI;

enum DelayRestrictionFlagValues {
	true_DelayRestrictionFlag = 0,
};
typedef Enumerated<CONSTRAINED, 0> DelayRestrictionFlag;

typedef BitString<CONSTRAINED, 16, 16> ERNTI;

typedef BitString<CONSTRAINED, 32, 32> ESNDS41;

enum EstablishmentCauseValues {
	OriginatingConversationalCall,_EstablishmentCause = 0,
};
typedef Enumerated<CONSTRAINED, 0> EstablishmentCause;

typedef Null FailureCauseWithProtErrConfigurationUnsupported;

class FailureCauseWithProtErr : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	FailureCauseWithProtErr(): Choice(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 3> RRCTransactionIdentifier;

class FailureCauseWithProtErrTrId : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	FailureCauseWithProtErrTrId(): Sequence(&theInfo) {}

	void setRrcTransactionIdentifier(const RRCTransactionIdentifier& RrcTransactionIdentifier) { *static_cast<RRCTransactionIdentifier*>(items[0]) = RrcTransactionIdentifier; }
};

enum GANSSModeValues {
	NetworkBased,_GANSSMode = 0,
};
typedef Enumerated<CONSTRAINED, 0> GANSSMode;

typedef Null RRCConnectionReleaseInformationNoRelease;

class RRCConnectionReleaseInformation : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	RRCConnectionReleaseInformation(): Choice(&theInfo) {}
};

class GroupIdentityWithReleaseInformation : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	GroupIdentityWithReleaseInformation(): Sequence(&theInfo) {}

	void setRrcConnectionReleaseInformation(const RRCConnectionReleaseInformation& RrcConnectionReleaseInformation) { *static_cast<RRCConnectionReleaseInformation*>(items[0]) = RrcConnectionReleaseInformation; }
};

typedef Null URNTIGroupAll;

class URNTIGroup : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	URNTIGroup(): Choice(&theInfo) {}
};

class GroupReleaseInformation : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	GroupReleaseInformation(): Sequence(&theInfo) {}

	void setURNTIGroup(const URNTIGroup& URNTIGroup) { *static_cast<URNTIGroup*>(items[0]) = URNTIGroup; }
};

typedef Boolean GSMMeasurementsGsm900;

class GSMMeasurements : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	GSMMeasurements(): Sequence(&theInfo) {}

	void setGSMMeasurementsGsm900(const GSMMeasurementsGsm900& GSMMeasurementsGsm900) { *static_cast<GSMMeasurementsGsm900*>(items[0]) = GSMMeasurementsGsm900; }
};

typedef BitString<CONSTRAINED, 16, 16> HRNTI;

enum HighMobilityDetectedValues {
	high_MobilityDetected_HighMobilityDetected = 0,
};
typedef Enumerated<CONSTRAINED, 0> HighMobilityDetected;

typedef Integer<CONSTRAINED, 1, 64> HSDSCHphysicallayercategory;

typedef Integer<CONSTRAINED, 1, 36> MultiCarrierHSDSCHphysicallayercategoryextension;

typedef BitString<CONSTRAINED, 4, 4> UESpecificBehaviourInformation1idle;

typedef BitString<CONSTRAINED, 8, 8> UESpecificBehaviourInformation1interRAT;

class IdleIntervalMeasCapabEUTRA : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IdleIntervalMeasCapabEUTRA(): Sequence(&theInfo) {}

	void setRadioFrequencyBandEUTRA(const RadioFrequencyBandEUTRA& RadioFrequencyBandEUTRA) { *static_cast<RadioFrequencyBandEUTRA*>(items[0]) = RadioFrequencyBandEUTRA; }
};

typedef SequenceOf<IdleIntervalMeasCapabEUTRA, CONSTRAINED, 1, maxFreqBandsEUTRA> IdleIntervalMeasCapabEUTRAList;

typedef OctetString<CONSTRAINED, 5, 7> IMSIDS41;

class IMSIandESNDS41 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IMSIandESNDS41(): Sequence(&theInfo) {}

	void setImsiDS41(const IMSIDS41& ImsiDS41) { *static_cast<IMSIDS41*>(items[0]) = ImsiDS41; }
};

typedef Integer<CONSTRAINED, 0, 28> NSIP;

typedef SequenceOf<NSIP, CONSTRAINED, 1, maxASC> InitialPriorityDelayList;

class InitialUEIdentity : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	InitialUEIdentity(): Choice(&theInfo) {}
};

typedef BitString<CONSTRAINED, 32, 32> MessageAuthenticationCode;

class IntegrityCheckInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IntegrityCheckInfo(): Sequence(&theInfo) {}

	void setMessageAuthenticationCode(const MessageAuthenticationCode& MessageAuthenticationCode) { *static_cast<MessageAuthenticationCode*>(items[0]) = MessageAuthenticationCode; }
};

typedef Integer<CONSTRAINED, 0, 15> RRCMessageSequenceNumber;

typedef SequenceOf<RRCMessageSequenceNumber, CONSTRAINED, 4, 5> RRCMessageSequenceNumberList;

class IntegrityProtActivationInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IntegrityProtActivationInfo(): Sequence(&theInfo) {}

	void setRrcMessageSequenceNumberList(const RRCMessageSequenceNumberList& RrcMessageSequenceNumberList) { *static_cast<RRCMessageSequenceNumberList*>(items[0]) = RrcMessageSequenceNumberList; }
};

enum IntegrityProtectionAlgorithmValues {
	uia1_IntegrityProtectionAlgorithm = 0,
};
typedef Enumerated<CONSTRAINED, 0> IntegrityProtectionAlgorithm;

enum IntegrityProtectionAlgorithmr7Values {
	Uia1,_IntegrityProtectionAlgorithmr7 = 0,
};
typedef Enumerated<CONSTRAINED, 0> IntegrityProtectionAlgorithmr7;

class IntegrityProtectionModeCommand : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	IntegrityProtectionModeCommand(): Choice(&theInfo) {}
};

class IntegrityProtectionModeInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IntegrityProtectionModeInfo(): Sequence(&theInfo) {}

	void setIntegrityProtectionModeCommand(const IntegrityProtectionModeCommand& IntegrityProtectionModeCommand) { *static_cast<IntegrityProtectionModeCommand*>(items[0]) = IntegrityProtectionModeCommand; }
};

class IntegrityProtectionModeInfor7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IntegrityProtectionModeInfor7(): Sequence(&theInfo) {}

	void setIntegrityProtectionModeCommand(const IntegrityProtectionModeCommand& IntegrityProtectionModeCommand) { *static_cast<IntegrityProtectionModeCommand*>(items[0]) = IntegrityProtectionModeCommand; }
};

typedef BitString<CONSTRAINED, 32, 32> IntegrityProtInitNumber;

enum MaxHcContextSpaceValues {
	Dummy,_MaxHcContextSpace = 0,
};
typedef Enumerated<CONSTRAINED, 0> MaxHcContextSpace;

enum MaxHcContextSpacer5extValues {
	By16384,_MaxHcContextSpacer5ext = 0,
};
typedef Enumerated<CONSTRAINED, 0> MaxHcContextSpacer5ext;

enum MaxROHCContextSessionsr4Values {
	S2,_MaxROHCContextSessionsr4 = 0,
};
typedef Enumerated<CONSTRAINED, 0> MaxROHCContextSessionsr4;

enum MaximumAMEntityNumberRLCCapValues {
	Dummy,_MaximumAMEntityNumberRLCCap = 0,
};
typedef Enumerated<CONSTRAINED, 0> MaximumAMEntityNumberRLCCap;

typedef Integer<CONSTRAINED, 0, 32> MaximumBitRate;

enum MaximumRLCWindowSizeValues {
	Mws2047,_MaximumRLCWindowSize = 0,
};
typedef Enumerated<CONSTRAINED, 0> MaximumRLCWindowSize;

enum MaxNoDPDCHBitsTransmittedValues {
	B600,_MaxNoDPDCHBitsTransmitted = 0,
};
typedef Enumerated<CONSTRAINED, 0> MaxNoDPDCHBitsTransmitted;

enum MaxNoPhysChBitsReceivedValues {
	Dummy,_MaxNoPhysChBitsReceived = 0,
};
typedef Enumerated<CONSTRAINED, 0> MaxNoPhysChBitsReceived;

enum MaxNoSCCPCHRLValues {
	rl1_MaxNoSCCPCHRL = 0,
};
typedef Enumerated<CONSTRAINED, 0> MaxNoSCCPCHRL;

enum MaxNumberOfTFValues {
	Tf32,_MaxNumberOfTF = 0,
};
typedef Enumerated<CONSTRAINED, 0> MaxNumberOfTF;

enum MaxNumberOfTFCDLValues {
	Tfc16,_MaxNumberOfTFCDL = 0,
};
typedef Enumerated<CONSTRAINED, 0> MaxNumberOfTFCDL;

enum MaxNumberOfTFCULValues {
	Dummy1,_MaxNumberOfTFCUL = 0,
};
typedef Enumerated<CONSTRAINED, 0> MaxNumberOfTFCUL;

typedef Integer<CONSTRAINED, 1, 224> MaxPhysChPerFrame;

typedef Integer<CONSTRAINED, 1, 448> MaxPhysChPerFrame768;

typedef Integer<CONSTRAINED, 1, 96> MaxPhysChPerSubFramer4;

enum MaxPhysChPerTimeslotValues {
	Ts1,_MaxPhysChPerTimeslot = 0,
};
typedef Enumerated<CONSTRAINED, 0> MaxPhysChPerTimeslot;

typedef Integer<CONSTRAINED, 1, 4> MaxPhysChPerTimeslotLCRr7;

typedef Integer<CONSTRAINED, 1, 16> MaxPhysChPerTS;

typedef Integer<CONSTRAINED, 1, 32> MaxPhysChPerTS768;

typedef Integer<CONSTRAINED, 1, 8> MaxSimultaneousCCTrCHCount;

enum MaxSimultaneousTransChsDLValues {
	E4,_MaxSimultaneousTransChsDL = 0,
};
typedef Enumerated<CONSTRAINED, 0> MaxSimultaneousTransChsDL;

enum MaxSimultaneousTransChsULValues {
	Dummy,_MaxSimultaneousTransChsUL = 0,
};
typedef Enumerated<CONSTRAINED, 0> MaxSimultaneousTransChsUL;

enum MaxTransportBlocksDLValues {
	Tb4,_MaxTransportBlocksDL = 0,
};
typedef Enumerated<CONSTRAINED, 0> MaxTransportBlocksDL;

enum MaxTransportBlocksULValues {
	Dummy,_MaxTransportBlocksUL = 0,
};
typedef Enumerated<CONSTRAINED, 0> MaxTransportBlocksUL;

class MeasurementCapability : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasurementCapability(): Sequence(&theInfo) {}

	void setDownlinkCompressedMode(const CompressedModeMeasCapability& DownlinkCompressedMode) { *static_cast<CompressedModeMeasCapability*>(items[0]) = DownlinkCompressedMode; }
};

class MeasurementCapabilityExt : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasurementCapabilityExt(): Sequence(&theInfo) {}

	void setCompressedModeMeasCapabFDDList(const CompressedModeMeasCapabFDDList& CompressedModeMeasCapabFDDList) { *static_cast<CompressedModeMeasCapabFDDList*>(items[0]) = CompressedModeMeasCapabFDDList; }
};

class MeasurementCapabilityExt2 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasurementCapabilityExt2(): Sequence(&theInfo) {}

	void setCompressedModeMeasCapabFDDList(const CompressedModeMeasCapabFDDList2& CompressedModeMeasCapabFDDList) { *static_cast<CompressedModeMeasCapabFDDList2*>(items[0]) = CompressedModeMeasCapabFDDList; }
};

class MeasurementCapabilityExt3 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasurementCapabilityExt3(): Sequence(&theInfo) {}

	void setCompressedModeMeasCapabEUTRAList(const CompressedModeMeasCapabEUTRAList& CompressedModeMeasCapabEUTRAList) { *static_cast<CompressedModeMeasCapabEUTRAList*>(items[0]) = CompressedModeMeasCapabEUTRAList; }
};

class MeasurementCapabilityr4ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasurementCapabilityr4ext(): Sequence(&theInfo) {}

	void setDownlinkCompressedModeLCR(const CompressedModeMeasCapabilityLCRr4& DownlinkCompressedModeLCR) { *static_cast<CompressedModeMeasCapabilityLCRr4*>(items[0]) = DownlinkCompressedModeLCR; }
};

class MeasurementCapabilityv860ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasurementCapabilityv860ext(): Sequence(&theInfo) {}

	void setDownlinkCompressedMode(const CompressedModeMeasCapabilityv860ext& DownlinkCompressedMode) { *static_cast<CompressedModeMeasCapabilityv860ext*>(items[0]) = DownlinkCompressedMode; }
};

class MeasurementCapabilityv920ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasurementCapabilityv920ext(): Sequence(&theInfo) {}

	void setDownlinkCompressedMode(const CompressedModeMeasCapabilityv920ext& DownlinkCompressedMode) { *static_cast<CompressedModeMeasCapabilityv920ext*>(items[0]) = DownlinkCompressedMode; }
};

class MeasurementCapabilityTDD : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasurementCapabilityTDD(): Sequence(&theInfo) {}

	void setIdleIntervalMeasCapabEUTRAList(const IdleIntervalMeasCapabEUTRAList& IdleIntervalMeasCapabEUTRAList) { *static_cast<IdleIntervalMeasCapabEUTRAList*>(items[0]) = IdleIntervalMeasCapabEUTRAList; }
};

enum MinimumSFDLValues {
	Sf1,_MinimumSFDL = 0,
};
typedef Enumerated<CONSTRAINED, 0> MinimumSFDL;

enum MinimumSFDL768Values {
	Sf1,_MinimumSFDL768 = 0,
};
typedef Enumerated<CONSTRAINED, 0> MinimumSFDL768;

enum MinimumSFULValues {
	Sf1,_MinimumSFUL = 0,
};
typedef Enumerated<CONSTRAINED, 0> MinimumSFUL;

enum MultiModeCapabilityValues {
	Tdd,_MultiModeCapability = 0,
};
typedef Enumerated<CONSTRAINED, 0> MultiModeCapability;

typedef Boolean MultiRATCapabilitySupportOfGSM;

class MultiRATCapability : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MultiRATCapability(): Sequence(&theInfo) {}

	void setMultiRATCapabilitySupportOfGSM(const MultiRATCapabilitySupportOfGSM& MultiRATCapabilitySupportOfGSM) { *static_cast<MultiRATCapabilitySupportOfGSM*>(items[0]) = MultiRATCapabilitySupportOfGSM; }
};

typedef Boolean MultiModeRATCapabilityv590extSupportOfUTRANToGERANNACC;

class MultiModeRATCapabilityv590ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MultiModeRATCapabilityv590ext(): Sequence(&theInfo) {}

	void setMultiModeRATCapabilityv590extSupportOfUTRANToGERANNACC(const MultiModeRATCapabilityv590extSupportOfUTRANToGERANNACC& MultiModeRATCapabilityv590extSupportOfUTRANToGERANNACC) { *static_cast<MultiModeRATCapabilityv590extSupportOfUTRANToGERANNACC*>(items[0]) = MultiModeRATCapabilityv590extSupportOfUTRANToGERANNACC; }
};

enum MultiModeRATCapabilityv680extsupportOfHandoverToGANValues {
	doesSupportHandoverToGAN_MultiModeRATCapabilityv680extsupportOfHandoverToGAN = 0,
};
typedef Enumerated<CONSTRAINED, 0> MultiModeRATCapabilityv680extsupportOfHandoverToGAN;

class MultiModeRATCapabilityv680ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MultiModeRATCapabilityv680ext(): Sequence(&theInfo) {}

	void setMultiModeRATCapabilityv680extsupportOfHandoverToGAN(const MultiModeRATCapabilityv680extsupportOfHandoverToGAN& MultiModeRATCapabilityv680extsupportOfHandoverToGAN) { *static_cast<MultiModeRATCapabilityv680extsupportOfHandoverToGAN*>(items[0]) = MultiModeRATCapabilityv680extsupportOfHandoverToGAN; }
};

enum MultiModeRATCapabilityv770extsupportOfPSHandoverToGANValues {
	doesSupportPSHandoverToGAN_MultiModeRATCapabilityv770extsupportOfPSHandoverToGAN = 0,
};
typedef Enumerated<CONSTRAINED, 0> MultiModeRATCapabilityv770extsupportOfPSHandoverToGAN;

class MultiModeRATCapabilityv770ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MultiModeRATCapabilityv770ext(): Sequence(&theInfo) {}

	void setMultiModeRATCapabilityv770extsupportOfPSHandoverToGAN(const MultiModeRATCapabilityv770extsupportOfPSHandoverToGAN& MultiModeRATCapabilityv770extsupportOfPSHandoverToGAN) { *static_cast<MultiModeRATCapabilityv770extsupportOfPSHandoverToGAN*>(items[0]) = MultiModeRATCapabilityv770extsupportOfPSHandoverToGAN; }
};

enum MultiModeRATCapabilityv860extsupportOfEUTRAFDDValues {
	DoesSupportEUTRAFDD_MultiModeRATCapabilityv860extsupportOfEUTRAFDD = 0,
};
typedef Enumerated<CONSTRAINED, 0> MultiModeRATCapabilityv860extsupportOfEUTRAFDD;

class MultiModeRATCapabilityv860ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MultiModeRATCapabilityv860ext(): Sequence(&theInfo) {}

	void setMultiModeRATCapabilityv860extsupportOfEUTRAFDD(const MultiModeRATCapabilityv860extsupportOfEUTRAFDD& MultiModeRATCapabilityv860extsupportOfEUTRAFDD) { *static_cast<MultiModeRATCapabilityv860extsupportOfEUTRAFDD*>(items[0]) = MultiModeRATCapabilityv860extsupportOfEUTRAFDD; }
};

typedef Integer<CONSTRAINED, 0, 7> N300;

typedef Integer<CONSTRAINED, 0, 7> N301;

typedef Integer<CONSTRAINED, 0, 7> N302;

typedef Integer<CONSTRAINED, 0, 7> N304;

typedef Integer<CONSTRAINED, 1, 8> N308;

typedef Integer<CONSTRAINED, 0, 7> N310;

enum N312Values {
	S1,_N312 = 0,
};
typedef Enumerated<CONSTRAINED, 0> N312;

enum N312extValues {
	S2,_N312ext = 0,
};
typedef Enumerated<CONSTRAINED, 0> N312ext;

enum N312r5Values {
	S1,_N312r5 = 0,
};
typedef Enumerated<CONSTRAINED, 0> N312r5;

enum N313Values {
	S1,_N313 = 0,
};
typedef Enumerated<CONSTRAINED, 0> N313;

enum N315Values {
	S1,_N315 = 0,
};
typedef Enumerated<CONSTRAINED, 0> N315;

enum N315extValues {
	S2,_N315ext = 0,
};
typedef Enumerated<CONSTRAINED, 0> N315ext;

enum N315r5Values {
	S1,_N315r5 = 0,
};
typedef Enumerated<CONSTRAINED, 0> N315r5;

typedef Integer<CONSTRAINED, 1, 64> NAccessFails;

enum NeighCellSIAcquisitionCapabilitysupportOfIntraFreqSIAcquisitionForHOValues {
	True_NeighCellSIAcquisitionCapabilitysupportOfIntraFreqSIAcquisitionForHO = 0,
};
typedef Enumerated<CONSTRAINED, 0> NeighCellSIAcquisitionCapabilitysupportOfIntraFreqSIAcquisitionForHO;

class NeighCellSIAcquisitionCapability : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	NeighCellSIAcquisitionCapability(): Sequence(&theInfo) {}

	void setNeighCellSIAcquisitionCapabilitysupportOfIntraFreqSIAcquisitionForHO(const NeighCellSIAcquisitionCapabilitysupportOfIntraFreqSIAcquisitionForHO& NeighCellSIAcquisitionCapabilitysupportOfIntraFreqSIAcquisitionForHO) { *static_cast<NeighCellSIAcquisitionCapabilitysupportOfIntraFreqSIAcquisitionForHO*>(items[0]) = NeighCellSIAcquisitionCapabilitysupportOfIntraFreqSIAcquisitionForHO; }
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
	NetworkBased,_NetworkAssistedGPSSupported = 0,
};
typedef Enumerated<CONSTRAINED, 0> NetworkAssistedGPSSupported;

typedef Integer<CONSTRAINED, 0, 31> NFBOAllBusy;

typedef Integer<CONSTRAINED, 0, 31> NFBONoAICH;

typedef Integer<CONSTRAINED, 0, 127> NFBOMismatch;

typedef Integer<CONSTRAINED, 0, 63> NSBOBusy;

class PTMSIandRAIGSMMAP : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PTMSIandRAIGSMMAP(): Sequence(&theInfo) {}

	void setPTMSI(const PTMSIGSMMAP& PTMSI) { *static_cast<PTMSIGSMMAP*>(items[0]) = PTMSI; }
};

enum PagingCauseValues {
	TerminatingConversationalCall,_PagingCause = 0,
};
typedef Enumerated<CONSTRAINED, 0> PagingCause;

class PagingRecordCnIdentity : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PagingRecordCnIdentity(): Sequence(&theInfo) {}

	void setPagingCause(const PagingCause& PagingCause) { *static_cast<PagingCause*>(items[0]) = PagingCause; }
};

class PagingRecord : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	PagingRecord(): Choice(&theInfo) {}
};

typedef BitString<CONSTRAINED, 12, 12> SRNCIdentity;

class URNTI : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	URNTI(): Sequence(&theInfo) {}

	void setSrncIdentity(const SRNCIdentity& SrncIdentity) { *static_cast<SRNCIdentity*>(items[0]) = SrncIdentity; }
};

class PagingRecord2r5UtranSingleUEIdentity : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PagingRecord2r5UtranSingleUEIdentity(): Sequence(&theInfo) {}

	void setURNTI(const URNTI& URNTI) { *static_cast<URNTI*>(items[0]) = URNTI; }
};

class PagingRecord2r5 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	PagingRecord2r5(): Choice(&theInfo) {}
};

typedef SequenceOf<PagingRecord, CONSTRAINED, 1, maxPage1> PagingRecordList;

typedef SequenceOf<PagingRecord2r5, CONSTRAINED, 1, maxPage1> PagingRecord2Listr5;

typedef Boolean PDCPCapabilityLosslessSRNSRelocationSupport;

class PDCPCapability : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PDCPCapability(): Sequence(&theInfo) {}

	void setPDCPCapabilityLosslessSRNSRelocationSupport(const PDCPCapabilityLosslessSRNSRelocationSupport& PDCPCapabilityLosslessSRNSRelocationSupport) { *static_cast<PDCPCapabilityLosslessSRNSRelocationSupport*>(items[0]) = PDCPCapabilityLosslessSRNSRelocationSupport; }
};

typedef Null PDCPCapabilityr4extSupportForRfc3095NotSupported;

class PDCPCapabilityr4extSupportForRfc3095 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	PDCPCapabilityr4extSupportForRfc3095(): Choice(&theInfo) {}
};

class PDCPCapabilityr4ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PDCPCapabilityr4ext(): Sequence(&theInfo) {}

	void setPDCPCapabilityr4extSupportForRfc3095(const PDCPCapabilityr4extSupportForRfc3095& PDCPCapabilityr4extSupportForRfc3095) { *static_cast<PDCPCapabilityr4extSupportForRfc3095*>(items[0]) = PDCPCapabilityr4extSupportForRfc3095; }
};

typedef Boolean PDCPCapabilityr5extSupportForRfc3095ContextRelocation;

class PDCPCapabilityr5ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PDCPCapabilityr5ext(): Sequence(&theInfo) {}

	void setPDCPCapabilityr5extSupportForRfc3095ContextRelocation(const PDCPCapabilityr5extSupportForRfc3095ContextRelocation& PDCPCapabilityr5extSupportForRfc3095ContextRelocation) { *static_cast<PDCPCapabilityr5extSupportForRfc3095ContextRelocation*>(items[0]) = PDCPCapabilityr5extSupportForRfc3095ContextRelocation; }
};

enum PDCPCapabilityr5ext2losslessDLRLC_PDUSizeChangeValues {
	true_PDCPCapabilityr5ext2losslessDLRLC_PDUSizeChange = 0,
};
typedef Enumerated<CONSTRAINED, 0> PDCPCapabilityr5ext2losslessDLRLC_PDUSizeChange;

class PDCPCapabilityr5ext2 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PDCPCapabilityr5ext2(): Sequence(&theInfo) {}

	void setPDCPCapabilityr5ext2losslessDLRLC_PDUSizeChange(const PDCPCapabilityr5ext2losslessDLRLC_PDUSizeChange& PDCPCapabilityr5ext2losslessDLRLC_PDUSizeChange) { *static_cast<PDCPCapabilityr5ext2losslessDLRLC_PDUSizeChange*>(items[0]) = PDCPCapabilityr5ext2losslessDLRLC_PDUSizeChange; }
};

enum PDCPCapabilityv770extsupportForCSVoiceoverHSPAValues {
	true_PDCPCapabilityv770extsupportForCSVoiceoverHSPA = 0,
};
typedef Enumerated<CONSTRAINED, 0> PDCPCapabilityv770extsupportForCSVoiceoverHSPA;

class PDCPCapabilityv770ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PDCPCapabilityv770ext(): Sequence(&theInfo) {}

	void setPDCPCapabilityv770extsupportForCSVoiceoverHSPA(const PDCPCapabilityv770extsupportForCSVoiceoverHSPA& PDCPCapabilityv770extsupportForCSVoiceoverHSPA) { *static_cast<PDCPCapabilityv770extsupportForCSVoiceoverHSPA*>(items[0]) = PDCPCapabilityv770extsupportForCSVoiceoverHSPA; }
};

class PhysicalChannelCapabilityFddPhysChCapability : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PhysicalChannelCapabilityFddPhysChCapability(): Sequence(&theInfo) {}

	void setDownlinkPhysChCapability(const DLPhysChCapabilityFDD& DownlinkPhysChCapability) { *static_cast<DLPhysChCapabilityFDD*>(items[0]) = DownlinkPhysChCapability; }
};

class PhysicalChannelCapability : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PhysicalChannelCapability(): Sequence(&theInfo) {}

	void setPhysicalChannelCapabilityFddPhysChCapability(const PhysicalChannelCapabilityFddPhysChCapability& PhysicalChannelCapabilityFddPhysChCapability) { *static_cast<PhysicalChannelCapabilityFddPhysChCapability*>(items[0]) = PhysicalChannelCapabilityFddPhysChCapability; }
};

class PhysicalChannelCapabilityv770extFddPhysChCapability : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PhysicalChannelCapabilityv770extFddPhysChCapability(): Sequence(&theInfo) {}

	void setDownlinkPhysChCapability(const DLPhysChCapabilityFDDv770ext& DownlinkPhysChCapability) { *static_cast<DLPhysChCapabilityFDDv770ext*>(items[0]) = DownlinkPhysChCapability; }
};

class PhysicalChannelCapabilityv770ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PhysicalChannelCapabilityv770ext(): Sequence(&theInfo) {}

	void setPhysicalChannelCapabilityv770extFddPhysChCapability(const PhysicalChannelCapabilityv770extFddPhysChCapability& PhysicalChannelCapabilityv770extFddPhysChCapability) { *static_cast<PhysicalChannelCapabilityv770extFddPhysChCapability*>(items[0]) = PhysicalChannelCapabilityv770extFddPhysChCapability; }
};

class PhysicalChannelCapabilityv860ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PhysicalChannelCapabilityv860ext(): Sequence(&theInfo) {}

	void setPhysicalChannelCapabilityv860extFddPhysChCapability(const PhysicalChannelCapabilityv860extFddPhysChCapability& PhysicalChannelCapabilityv860extFddPhysChCapability) { *static_cast<PhysicalChannelCapabilityv860extFddPhysChCapability*>(items[0]) = PhysicalChannelCapabilityv860extFddPhysChCapability; }
};

class PhysicalChannelCapabilityv920extFddPhysChCapability : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PhysicalChannelCapabilityv920extFddPhysChCapability(): Sequence(&theInfo) {}

	void setDownlinkPhysChCapability(const DLPhysChCapabilityFDDv920ext& DownlinkPhysChCapability) { *static_cast<DLPhysChCapabilityFDDv920ext*>(items[0]) = DownlinkPhysChCapability; }
};

class PhysicalChannelCapabilityv920ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PhysicalChannelCapabilityv920ext(): Sequence(&theInfo) {}

	void setPhysicalChannelCapabilityv920extFddPhysChCapability(const PhysicalChannelCapabilityv920extFddPhysChCapability& PhysicalChannelCapabilityv920extFddPhysChCapability) { *static_cast<PhysicalChannelCapabilityv920extFddPhysChCapability*>(items[0]) = PhysicalChannelCapabilityv920extFddPhysChCapability; }
};

class PhysicalChannelCapabilityInfov770extTddPhysChCapability768 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PhysicalChannelCapabilityInfov770extTddPhysChCapability768(): Sequence(&theInfo) {}

	void setDownlinkPhysChCapability(const DLPhysChCapabilityInfoTDD768& DownlinkPhysChCapability) { *static_cast<DLPhysChCapabilityInfoTDD768*>(items[0]) = DownlinkPhysChCapability; }
};

class PhysicalChannelCapabilityInfov770ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PhysicalChannelCapabilityInfov770ext(): Sequence(&theInfo) {}

	void setPhysicalChannelCapabilityInfov770extTddPhysChCapability768(const PhysicalChannelCapabilityInfov770extTddPhysChCapability768& PhysicalChannelCapabilityInfov770extTddPhysChCapability768) { *static_cast<PhysicalChannelCapabilityInfov770extTddPhysChCapability768*>(items[0]) = PhysicalChannelCapabilityInfov770extTddPhysChCapability768; }
};

class PhysicalChannelCapabilityLCRr4Tdd128PhysChCapability : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PhysicalChannelCapabilityLCRr4Tdd128PhysChCapability(): Sequence(&theInfo) {}

	void setDownlinkPhysChCapability(const DLPhysChCapabilityTDDLCRr4& DownlinkPhysChCapability) { *static_cast<DLPhysChCapabilityTDDLCRr4*>(items[0]) = DownlinkPhysChCapability; }
};

class PhysicalChannelCapabilityLCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PhysicalChannelCapabilityLCRr4(): Sequence(&theInfo) {}

	void setPhysicalChannelCapabilityLCRr4Tdd128PhysChCapability(const PhysicalChannelCapabilityLCRr4Tdd128PhysChCapability& PhysicalChannelCapabilityLCRr4Tdd128PhysChCapability) { *static_cast<PhysicalChannelCapabilityLCRr4Tdd128PhysChCapability*>(items[0]) = PhysicalChannelCapabilityLCRr4Tdd128PhysChCapability; }
};

class PhysicalChannelCapabilityhspdschr5FddhspdschSupported : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PhysicalChannelCapabilityhspdschr5FddhspdschSupported(): Sequence(&theInfo) {}

	void setHsdschphysicallayercategory(const HSDSCHphysicallayercategory& Hsdschphysicallayercategory) { *static_cast<HSDSCHphysicallayercategory*>(items[0]) = Hsdschphysicallayercategory; }
};

class PhysicalChannelCapabilityhspdschr5Fddhspdsch : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	PhysicalChannelCapabilityhspdschr5Fddhspdsch(): Choice(&theInfo) {}
};

class PhysicalChannelCapabilityhspdschr5 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PhysicalChannelCapabilityhspdschr5(): Sequence(&theInfo) {}

	void setPhysicalChannelCapabilityhspdschr5Fddhspdsch(const PhysicalChannelCapabilityhspdschr5Fddhspdsch& PhysicalChannelCapabilityhspdschr5Fddhspdsch) { *static_cast<PhysicalChannelCapabilityhspdschr5Fddhspdsch*>(items[0]) = PhysicalChannelCapabilityhspdschr5Fddhspdsch; }
};

enum PNBSCHAllocationr4numberOfRepetitionsPerSFNPeriodValues {
	C2,_PNBSCHAllocationr4numberOfRepetitionsPerSFNPeriod = 0,
};
typedef Enumerated<CONSTRAINED, 0> PNBSCHAllocationr4numberOfRepetitionsPerSFNPeriod;

class PNBSCHAllocationr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PNBSCHAllocationr4(): Sequence(&theInfo) {}

	void setPNBSCHAllocationr4numberOfRepetitionsPerSFNPeriod(const PNBSCHAllocationr4numberOfRepetitionsPerSFNPeriod& PNBSCHAllocationr4numberOfRepetitionsPerSFNPeriod) { *static_cast<PNBSCHAllocationr4numberOfRepetitionsPerSFNPeriod*>(items[0]) = PNBSCHAllocationr4numberOfRepetitionsPerSFNPeriod; }
};

typedef Boolean PreRedirectionInfoSupportEUTRAFDD;

class PreRedirectionInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PreRedirectionInfo(): Sequence(&theInfo) {}

	void setPreRedirectionInfoSupportEUTRAFDD(const PreRedirectionInfoSupportEUTRAFDD& PreRedirectionInfoSupportEUTRAFDD) { *static_cast<PreRedirectionInfoSupportEUTRAFDD*>(items[0]) = PreRedirectionInfoSupportEUTRAFDD; }
};

enum ProtocolErrorCauseValues {
	Asn1ViolationOrEncodingError,_ProtocolErrorCause = 0,
};
typedef Enumerated<CONSTRAINED, 0> ProtocolErrorCause;

enum ProtocolErrorIndicatorValues {
	NoError,_ProtocolErrorIndicator = 0,
};
typedef Enumerated<CONSTRAINED, 0> ProtocolErrorIndicator;

typedef Null ProtocolErrorIndicatorWithMoreInfoNoError;

class ProtocolErrorIndicatorWithMoreInfo : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	ProtocolErrorIndicatorWithMoreInfo(): Choice(&theInfo) {}
};

typedef Null ProtocolErrorMoreInformationDiagnosticsTypeType1Asn1ViolationOrEncodingError;

class ProtocolErrorMoreInformationDiagnosticsTypeType1 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	ProtocolErrorMoreInformationDiagnosticsTypeType1(): Choice(&theInfo) {}
};

class ProtocolErrorMoreInformationDiagnosticsType : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	ProtocolErrorMoreInformationDiagnosticsType(): Choice(&theInfo) {}
};

class ProtocolErrorMoreInformation : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ProtocolErrorMoreInformation(): Sequence(&theInfo) {}

	void setProtocolErrorMoreInformationDiagnosticsType(const ProtocolErrorMoreInformationDiagnosticsType& ProtocolErrorMoreInformationDiagnosticsType) { *static_cast<ProtocolErrorMoreInformationDiagnosticsType*>(items[0]) = ProtocolErrorMoreInformationDiagnosticsType; }
};

enum RadioFrequencyBandFDDValues {
	Fdd2100,_RadioFrequencyBandFDD = 0,
};
typedef Enumerated<CONSTRAINED, 0> RadioFrequencyBandFDD;

enum RadioFrequencyBandTDDListValues {
	A,_RadioFrequencyBandTDDList = 0,
};
typedef Enumerated<CONSTRAINED, 0> RadioFrequencyBandTDDList;

enum RadioFrequencyBandTDDListr7Values {
	A,_RadioFrequencyBandTDDListr7 = 0,
};
typedef Enumerated<CONSTRAINED, 0> RadioFrequencyBandTDDListr7;

enum RadioFrequencyBandTDDextValues {
	E,_RadioFrequencyBandTDDext = 0,
};
typedef Enumerated<CONSTRAINED, 0> RadioFrequencyBandTDDext;

typedef SequenceOf<RadioFrequencyBandTDDext, CONSTRAINED, 1, maxFreqBandsTDD_ext> RadioFrequencyBandTDDextList;

typedef Boolean RbtimerindicatorT314expired;

class Rbtimerindicator : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Rbtimerindicator(): Sequence(&theInfo) {}

	void setRbtimerindicatorT314expired(const RbtimerindicatorT314expired& RbtimerindicatorT314expired) { *static_cast<RbtimerindicatorT314expired*>(items[0]) = RbtimerindicatorT314expired; }
};

enum ReEstablishmentTimerValues {
	UseT314,_ReEstablishmentTimer = 0,
};
typedef Enumerated<CONSTRAINED, 0> ReEstablishmentTimer;

class RedirectionInfo : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	RedirectionInfo(): Choice(&theInfo) {}
};

class RedirectionInfor6 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	RedirectionInfor6(): Choice(&theInfo) {}
};

typedef Null RedirectionInfov860extFrequencyInfo;

class RedirectionInfov860ext : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	RedirectionInfov860ext(): Choice(&theInfo) {}
};

enum RejectionCauseValues {
	Congestion,_RejectionCause = 0,
};
typedef Enumerated<CONSTRAINED, 0> RejectionCause;

enum ReleaseCauseValues {
	NormalEvent,_ReleaseCause = 0,
};
typedef Enumerated<CONSTRAINED, 0> ReleaseCause;

typedef Integer<CONSTRAINED, 1, 4> UEPowerClass;

class RFCapabilityFddRFCapability : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RFCapabilityFddRFCapability(): Sequence(&theInfo) {}

	void setUePowerClass(const UEPowerClass& UePowerClass) { *static_cast<UEPowerClass*>(items[0]) = UePowerClass; }
};

class RFCapability : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RFCapability(): Sequence(&theInfo) {}

	void setRFCapabilityFddRFCapability(const RFCapabilityFddRFCapability& RFCapabilityFddRFCapability) { *static_cast<RFCapabilityFddRFCapability*>(items[0]) = RFCapabilityFddRFCapability; }
};

class RFCapabilityr4extTddRFCapability : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RFCapabilityr4extTddRFCapability(): Sequence(&theInfo) {}

	void setUePowerClass(const UEPowerClass& UePowerClass) { *static_cast<UEPowerClass*>(items[0]) = UePowerClass; }
};

class RFCapabilityr4ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RFCapabilityr4ext(): Sequence(&theInfo) {}

	void setRFCapabilityr4extTddRFCapability(const RFCapabilityr4extTddRFCapability& RFCapabilityr4extTddRFCapability) { *static_cast<RFCapabilityr4extTddRFCapability*>(items[0]) = RFCapabilityr4extTddRFCapability; }
};

class RFCapabilityv770ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RFCapabilityv770ext(): Sequence(&theInfo) {}

	void setTdd384RFCapability(const RadioFrequencyBandTDDListr7& Tdd384RFCapability) { *static_cast<RadioFrequencyBandTDDListr7*>(items[0]) = Tdd384RFCapability; }
};

class RFCapabilityv860ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RFCapabilityv860ext(): Sequence(&theInfo) {}

	void setTdd128RFCapability(const RadioFrequencyBandTDDextList& Tdd128RFCapability) { *static_cast<RadioFrequencyBandTDDextList*>(items[0]) = Tdd128RFCapability; }
};

enum TotalRLCAMBufferSizeValues {
	Dummy,_TotalRLCAMBufferSize = 0,
};
typedef Enumerated<CONSTRAINED, 0> TotalRLCAMBufferSize;

class RLCCapability : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RLCCapability(): Sequence(&theInfo) {}

	void setTotalRLCAMBufferSize(const TotalRLCAMBufferSize& TotalRLCAMBufferSize) { *static_cast<TotalRLCAMBufferSize*>(items[0]) = TotalRLCAMBufferSize; }
};

enum TotalRLCAMBufferSizer5extValues {
	Kb200,_TotalRLCAMBufferSizer5ext = 0,
};
typedef Enumerated<CONSTRAINED, 0> TotalRLCAMBufferSizer5ext;

class RLCCapabilityr5ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RLCCapabilityr5ext(): Sequence(&theInfo) {}

	void setTotalRLCAMBufferSize(const TotalRLCAMBufferSizer5ext& TotalRLCAMBufferSize) { *static_cast<TotalRLCAMBufferSizer5ext*>(items[0]) = TotalRLCAMBufferSize; }
};

typedef Boolean RLCCapabilityv770extSupportOfTwoLogicalChannel;

class RLCCapabilityv770ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RLCCapabilityv770ext(): Sequence(&theInfo) {}

	void setRLCCapabilityv770extSupportOfTwoLogicalChannel(const RLCCapabilityv770extSupportOfTwoLogicalChannel& RLCCapabilityv770extSupportOfTwoLogicalChannel) { *static_cast<RLCCapabilityv770extSupportOfTwoLogicalChannel*>(items[0]) = RLCCapabilityv770extSupportOfTwoLogicalChannel; }
};

enum TotalRLCAMBufferSizev920extValues {
	Kb1150,_TotalRLCAMBufferSizev920ext = 0,
};
typedef Enumerated<CONSTRAINED, 0> TotalRLCAMBufferSizev920ext;

class RLCCapabilityv920ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RLCCapabilityv920ext(): Sequence(&theInfo) {}

	void setTotalRLCAMBufferSize(const TotalRLCAMBufferSizev920ext& TotalRLCAMBufferSize) { *static_cast<TotalRLCAMBufferSizev920ext*>(items[0]) = TotalRLCAMBufferSize; }
};

enum RRCStateIndicatorValues {
	CellDCH,_RRCStateIndicator = 0,
};
typedef Enumerated<CONSTRAINED, 0> RRCStateIndicator;

typedef BitString<CONSTRAINED, 20, 20> SRNTI;

typedef BitString<CONSTRAINED, 10, 10> SRNTI2;

typedef BitString<EXTCONSTRAINED, 16, 16> SecurityCapabilityCipheringAlgorithmCap;

class SecurityCapability : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SecurityCapability(): Sequence(&theInfo) {}

	void setSecurityCapabilityCipheringAlgorithmCap(const SecurityCapabilityCipheringAlgorithmCap& SecurityCapabilityCipheringAlgorithmCap) { *static_cast<SecurityCapabilityCipheringAlgorithmCap*>(items[0]) = SecurityCapabilityCipheringAlgorithmCap; }
};

class SecondaryServingEDCHCellInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SecondaryServingEDCHCellInfo(): Sequence(&theInfo) {}

	void setPrimaryERNTI(const ERNTI& PrimaryERNTI) { *static_cast<ERNTI*>(items[0]) = PrimaryERNTI; }
};

class SecondaryEDCHInfoCommon : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SecondaryEDCHInfoCommon(): Sequence(&theInfo) {}

	void setFrequencyInfo(const FrequencyInfo& FrequencyInfo) { *static_cast<FrequencyInfo*>(items[0]) = FrequencyInfo; }
};

typedef Integer<CONSTRAINED, 0, 8> DeltaACK;

class ServingHSDSCHCellInformation : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ServingHSDSCHCellInformation(): Sequence(&theInfo) {}

	void setDeltaACK(const DeltaACK& DeltaACK) { *static_cast<DeltaACK*>(items[0]) = DeltaACK; }
};

class ServingHSDSCHCellInformationr7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ServingHSDSCHCellInformationr7(): Sequence(&theInfo) {}

	void setDeltaACK(const DeltaACK& DeltaACK) { *static_cast<DeltaACK*>(items[0]) = DeltaACK; }
};

class ServingHSDSCHCellInformationr8 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ServingHSDSCHCellInformationr8(): Sequence(&theInfo) {}

	void setDeltaACK(const DeltaACK& DeltaACK) { *static_cast<DeltaACK*>(items[0]) = DeltaACK; }
};

class ServingHSDSCHCellInformationr9 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ServingHSDSCHCellInformationr9(): Sequence(&theInfo) {}

	void setDeltaACK(const DeltaACK& DeltaACK) { *static_cast<DeltaACK*>(items[0]) = DeltaACK; }
};

typedef Null SimultaneousSCCPCHDPCHReceptionNotSupported;

class SimultaneousSCCPCHDPCHReception : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	SimultaneousSCCPCHDPCHReception(): Choice(&theInfo) {}
};

typedef BitString<CONSTRAINED, 128, 128> SRVCCInfoNonce;

class SRVCCInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SRVCCInfo(): Sequence(&theInfo) {}

	void setSRVCCInfoNonce(const SRVCCInfoNonce& SRVCCInfoNonce) { *static_cast<SRVCCInfoNonce*>(items[0]) = SRVCCInfoNonce; }
};

class SRVCCSecurityRABInfov860ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SRVCCSecurityRABInfov860ext(): Sequence(&theInfo) {}

	void setSrvccInfo(const SRVCCInfo& SrvccInfo) { *static_cast<SRVCCInfo*>(items[0]) = SrvccInfo; }
};

typedef BitString<CONSTRAINED, 20, 20> STARTValue;

class STARTSingle : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	STARTSingle(): Sequence(&theInfo) {}

	void setCnDomainIdentity(const CNDomainIdentity& CnDomainIdentity) { *static_cast<CNDomainIdentity*>(items[0]) = CnDomainIdentity; }
};

typedef SequenceOf<STARTSingle, CONSTRAINED, 1, maxCNdomains> STARTList;

enum SystemSpecificCapUpdateReqValues {
	gsm_SystemSpecificCapUpdateReq = 0,
};
typedef Enumerated<CONSTRAINED, 0> SystemSpecificCapUpdateReq;

enum SystemSpecificCapUpdateReqv590extValues {
	geranIu_SystemSpecificCapUpdateReqv590ext = 0,
};
typedef Enumerated<CONSTRAINED, 0> SystemSpecificCapUpdateReqv590ext;

enum SystemSpecificCapUpdateReqr5Values {
	Gsm,_SystemSpecificCapUpdateReqr5 = 0,
};
typedef Enumerated<CONSTRAINED, 0> SystemSpecificCapUpdateReqr5;

typedef SequenceOf<SystemSpecificCapUpdateReq, CONSTRAINED, 1, maxSystemCapability> SystemSpecificCapUpdateReqList;

typedef SequenceOf<SystemSpecificCapUpdateReqr5, CONSTRAINED, 1, maxSystemCapability> SystemSpecificCapUpdateReqListr5;

enum T300Values {
	Ms100,_T300 = 0,
};
typedef Enumerated<CONSTRAINED, 0> T300;

enum T301Values {
	Ms100,_T301 = 0,
};
typedef Enumerated<CONSTRAINED, 0> T301;

enum T302Values {
	Ms100,_T302 = 0,
};
typedef Enumerated<CONSTRAINED, 0> T302;

enum T304Values {
	Ms100,_T304 = 0,
};
typedef Enumerated<CONSTRAINED, 0> T304;

enum T305Values {
	NoUpdate,_T305 = 0,
};
typedef Enumerated<CONSTRAINED, 0> T305;

enum T307Values {
	S5,_T307 = 0,
};
typedef Enumerated<CONSTRAINED, 0> T307;

enum T308Values {
	Ms40,_T308 = 0,
};
typedef Enumerated<CONSTRAINED, 0> T308;

typedef Integer<CONSTRAINED, 1, 8> T309;

enum T310Values {
	Ms40,_T310 = 0,
};
typedef Enumerated<CONSTRAINED, 0> T310;

enum T311Values {
	Ms250,_T311 = 0,
};
typedef Enumerated<CONSTRAINED, 0> T311;

typedef Integer<CONSTRAINED, 0, 15> T312;

typedef Integer<CONSTRAINED, 0, 15> T313;

enum T314Values {
	S0,_T314 = 0,
};
typedef Enumerated<CONSTRAINED, 0> T314;

enum T315Values {
	S0,_T315 = 0,
};
typedef Enumerated<CONSTRAINED, 0> T315;

enum T316Values {
	S0,_T316 = 0,
};
typedef Enumerated<CONSTRAINED, 0> T316;

enum T317Values {
	Infinity0,_T317 = 0,
};
typedef Enumerated<CONSTRAINED, 0> T317;

enum T318Values {
	Ms250,_T318 = 0,
};
typedef Enumerated<CONSTRAINED, 0> T318;

enum T319Values {
	Ms80,_T319 = 0,
};
typedef Enumerated<CONSTRAINED, 0> T319;

enum T321Values {
	Ms100,_T321 = 0,
};
typedef Enumerated<CONSTRAINED, 0> T321;

enum T322Values {
	M5,_T322 = 0,
};
typedef Enumerated<CONSTRAINED, 0> T322;

enum T323Values {
	S0,_T323 = 0,
};
typedef Enumerated<CONSTRAINED, 0> T323;

enum TCPCHValues {
	Ct0,_TCPCH = 0,
};
typedef Enumerated<CONSTRAINED, 0> TCPCH;

class TMSIandLAIGSMMAP : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	TMSIandLAIGSMMAP(): Sequence(&theInfo) {}

	void setTmsi(const TMSIGSMMAP& Tmsi) { *static_cast<TMSIGSMMAP*>(items[0]) = Tmsi; }
};

typedef OctetString<CONSTRAINED, 2, 17> TMSIDS41;

class TransportChannelCapability : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	TransportChannelCapability(): Sequence(&theInfo) {}

	void setDlTransChCapability(const DLTransChCapability& DlTransChCapability) { *static_cast<DLTransChCapability*>(items[0]) = DlTransChCapability; }
};

typedef Null TurboSupportNotSupported;

class TurboSupport : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	TurboSupport(): Choice(&theInfo) {}
};

enum TxRxFrequencySeparationValues {
	DefaultTxRxseparation,_TxRxFrequencySeparation = 0,
};
typedef Enumerated<CONSTRAINED, 0> TxRxFrequencySeparation;

class URNTIShort : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	URNTIShort(): Sequence(&theInfo) {}

	void setSrncIdentity(const SRNCIdentity& SrncIdentity) { *static_cast<SRNCIdentity*>(items[0]) = SrncIdentity; }
};

typedef Integer<CONSTRAINED, 1, 16> PhysicalChannelCapabilityedchr6FddedchSupportedEdchPhysicalLayerCategory;

class PhysicalChannelCapabilityedchr6FddedchSupported : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PhysicalChannelCapabilityedchr6FddedchSupported(): Sequence(&theInfo) {}

	void setPhysicalChannelCapabilityedchr6FddedchSupportedEdchPhysicalLayerCategory(const PhysicalChannelCapabilityedchr6FddedchSupportedEdchPhysicalLayerCategory& PhysicalChannelCapabilityedchr6FddedchSupportedEdchPhysicalLayerCategory) { *static_cast<PhysicalChannelCapabilityedchr6FddedchSupportedEdchPhysicalLayerCategory*>(items[0]) = PhysicalChannelCapabilityedchr6FddedchSupportedEdchPhysicalLayerCategory; }
};

class PhysicalChannelCapabilityedchr6Fddedch : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	PhysicalChannelCapabilityedchr6Fddedch(): Choice(&theInfo) {}
};

class PhysicalChannelCapabilityedchr6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PhysicalChannelCapabilityedchr6(): Sequence(&theInfo) {}

	void setPhysicalChannelCapabilityedchr6Fddedch(const PhysicalChannelCapabilityedchr6Fddedch& PhysicalChannelCapabilityedchr6Fddedch) { *static_cast<PhysicalChannelCapabilityedchr6Fddedch*>(items[0]) = PhysicalChannelCapabilityedchr6Fddedch; }
};

class UERadioAccessCapabilityv690ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv690ext(): Sequence(&theInfo) {}

	void setPhysicalchannelcapabilityedch(const PhysicalChannelCapabilityedchr6& Physicalchannelcapabilityedch) { *static_cast<PhysicalChannelCapabilityedchr6*>(items[0]) = Physicalchannelcapabilityedch; }
};

class UECapabilityContainerIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UECapabilityContainerIEs(): Sequence(&theInfo) {}

	void setUeRadioAccessCapabilityv690ext(const UERadioAccessCapabilityv690ext& UeRadioAccessCapabilityv690ext) { *static_cast<UERadioAccessCapabilityv690ext*>(items[0]) = UeRadioAccessCapabilityv690ext; }
};

enum UERadioAccessCapabilityv6b0extIEssupportForSIB11bisValues {
	true_UERadioAccessCapabilityv6b0extIEssupportForSIB11bis = 0,
};
typedef Enumerated<CONSTRAINED, 0> UERadioAccessCapabilityv6b0extIEssupportForSIB11bis;

class UERadioAccessCapabilityv6b0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv6b0extIEs(): Sequence(&theInfo) {}

	void setUERadioAccessCapabilityv6b0extIEssupportForSIB11bis(const UERadioAccessCapabilityv6b0extIEssupportForSIB11bis& UERadioAccessCapabilityv6b0extIEssupportForSIB11bis) { *static_cast<UERadioAccessCapabilityv6b0extIEssupportForSIB11bis*>(items[0]) = UERadioAccessCapabilityv6b0extIEssupportForSIB11bis; }
};

enum UERadioAccessCapabilityv6e0extIEssupportForFDPCHValues {
	true_UERadioAccessCapabilityv6e0extIEssupportForFDPCH = 0,
};
typedef Enumerated<CONSTRAINED, 0> UERadioAccessCapabilityv6e0extIEssupportForFDPCH;

class UERadioAccessCapabilityv6e0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv6e0extIEs(): Sequence(&theInfo) {}

	void setUERadioAccessCapabilityv6e0extIEssupportForFDPCH(const UERadioAccessCapabilityv6e0extIEssupportForFDPCH& UERadioAccessCapabilityv6e0extIEssupportForFDPCH) { *static_cast<UERadioAccessCapabilityv6e0extIEssupportForFDPCH*>(items[0]) = UERadioAccessCapabilityv6e0extIEssupportForFDPCH; }
};

class UERadioAccessCapabilityv770extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv770extIEs(): Sequence(&theInfo) {}

	void setPdcpCapability(const PDCPCapabilityv770ext& PdcpCapability) { *static_cast<PDCPCapabilityv770ext*>(items[0]) = PdcpCapability; }
};

enum UERadioAccessCapabilityv790extIEssupportForEDPCCHPowerBoostingValues {
	true_UERadioAccessCapabilityv790extIEssupportForEDPCCHPowerBoosting = 0,
};
typedef Enumerated<CONSTRAINED, 0> UERadioAccessCapabilityv790extIEssupportForEDPCCHPowerBoosting;

class UERadioAccessCapabilityv790extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv790extIEs(): Sequence(&theInfo) {}

	void setUERadioAccessCapabilityv790extIEssupportForEDPCCHPowerBoosting(const UERadioAccessCapabilityv790extIEssupportForEDPCCHPowerBoosting& UERadioAccessCapabilityv790extIEssupportForEDPCCHPowerBoosting) { *static_cast<UERadioAccessCapabilityv790extIEssupportForEDPCCHPowerBoosting*>(items[0]) = UERadioAccessCapabilityv790extIEssupportForEDPCCHPowerBoosting; }
};

class UERadioAccessCapabilityv860extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv860extIEs(): Sequence(&theInfo) {}

	void setRfCapability(const RFCapabilityv860ext& RfCapability) { *static_cast<RFCapabilityv860ext*>(items[0]) = RfCapability; }
};

enum UERadioAccessCapabilityv880extIEssupportForPriorityReselectionInUTRANValues {
	true_UERadioAccessCapabilityv880extIEssupportForPriorityReselectionInUTRAN = 0,
};
typedef Enumerated<CONSTRAINED, 0> UERadioAccessCapabilityv880extIEssupportForPriorityReselectionInUTRAN;

class UERadioAccessCapabilityv880extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv880extIEs(): Sequence(&theInfo) {}

	void setUERadioAccessCapabilityv880extIEssupportForPriorityReselectionInUTRAN(const UERadioAccessCapabilityv880extIEssupportForPriorityReselectionInUTRAN& UERadioAccessCapabilityv880extIEssupportForPriorityReselectionInUTRAN) { *static_cast<UERadioAccessCapabilityv880extIEssupportForPriorityReselectionInUTRAN*>(items[0]) = UERadioAccessCapabilityv880extIEssupportForPriorityReselectionInUTRAN; }
};

enum UERadioAccessCapabilityv890extIEssupportCellSpecificTxDiversityinDC_OperationValues {
	true_UERadioAccessCapabilityv890extIEssupportCellSpecificTxDiversityinDC_Operation = 0,
};
typedef Enumerated<CONSTRAINED, 0> UERadioAccessCapabilityv890extIEssupportCellSpecificTxDiversityinDC_Operation;

class UERadioAccessCapabilityv890extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv890extIEs(): Sequence(&theInfo) {}

	void setUERadioAccessCapabilityv890extIEssupportCellSpecificTxDiversityinDC_Operation(const UERadioAccessCapabilityv890extIEssupportCellSpecificTxDiversityinDC_Operation& UERadioAccessCapabilityv890extIEssupportCellSpecificTxDiversityinDC_Operation) { *static_cast<UERadioAccessCapabilityv890extIEssupportCellSpecificTxDiversityinDC_Operation*>(items[0]) = UERadioAccessCapabilityv890extIEssupportCellSpecificTxDiversityinDC_Operation; }
};

typedef SequenceOf<BandComb, CONSTRAINED, 1, 16> UERadioAccessCapabBandCombList;

class UERadioAccessCapabilityv920extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv920extIEs(): Sequence(&theInfo) {}

	void setUeRadioAccessCapabBandCombList(const UERadioAccessCapabBandCombList& UeRadioAccessCapabBandCombList) { *static_cast<UERadioAccessCapabBandCombList*>(items[0]) = UeRadioAccessCapabBandCombList; }
};

enum UERadioAccessCapabilityv970extIEsue_ExtendedMeasurementSupportValues {
	true_UERadioAccessCapabilityv970extIEsue_ExtendedMeasurementSupport = 0,
};
typedef Enumerated<CONSTRAINED, 0> UERadioAccessCapabilityv970extIEsue_ExtendedMeasurementSupport;

class UERadioAccessCapabilityv970extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv970extIEs(): Sequence(&theInfo) {}

	void setUERadioAccessCapabilityv970extIEsue_ExtendedMeasurementSupport(const UERadioAccessCapabilityv970extIEsue_ExtendedMeasurementSupport& UERadioAccessCapabilityv970extIEsue_ExtendedMeasurementSupport) { *static_cast<UERadioAccessCapabilityv970extIEsue_ExtendedMeasurementSupport*>(items[0]) = UERadioAccessCapabilityv970extIEsue_ExtendedMeasurementSupport; }
};

class UEConnTimersAndConstants : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEConnTimersAndConstants(): Sequence(&theInfo) {}

	void setT301(const T301& T301) { *static_cast<T301*>(items[0]) = T301; }
};

class UEConnTimersAndConstantsv3a0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEConnTimersAndConstantsv3a0ext(): Sequence(&theInfo) {}

	void setN312(const N312ext& N312) { *static_cast<N312ext*>(items[0]) = N312; }
};

class UEConnTimersAndConstantsr5 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEConnTimersAndConstantsr5(): Sequence(&theInfo) {}

	void setT301(const T301& T301) { *static_cast<T301*>(items[0]) = T301; }
};

class UEConnTimersAndConstantsv860ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEConnTimersAndConstantsv860ext(): Sequence(&theInfo) {}

	void setT323(const T323& T323) { *static_cast<T323*>(items[0]) = T323; }
};

class UEGANSSPositioningCapability : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEGANSSPositioningCapability(): Sequence(&theInfo) {}

	void setNetworkAssistedGANSSsupportedList(const NetworkAssistedGANSSSupportedList& NetworkAssistedGANSSsupportedList) { *static_cast<NetworkAssistedGANSSSupportedList*>(items[0]) = NetworkAssistedGANSSsupportedList; }
};

class UEGANSSPositioningCapabilityv860extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEGANSSPositioningCapabilityv860extIEs(): Sequence(&theInfo) {}

	void setNetworkAssistedGANSSsupportedList(const NetworkAssistedGANSSSupportedListv860ext& NetworkAssistedGANSSsupportedList) { *static_cast<NetworkAssistedGANSSSupportedListv860ext*>(items[0]) = NetworkAssistedGANSSsupportedList; }
};

class UEIdleTimersAndConstants : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEIdleTimersAndConstants(): Sequence(&theInfo) {}

	void setT300(const T300& T300) { *static_cast<T300*>(items[0]) = T300; }
};

class UEHSPAIdentitiesr6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEHSPAIdentitiesr6(): Sequence(&theInfo) {}

	void setNewHRNTI(const HRNTI& NewHRNTI) { *static_cast<HRNTI*>(items[0]) = NewHRNTI; }
};

class UEIdleTimersAndConstantsv3a0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEIdleTimersAndConstantsv3a0ext(): Sequence(&theInfo) {}

	void setN312(const N312ext& N312) { *static_cast<N312ext*>(items[0]) = N312; }
};

class UEMultiModeRATCapability : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEMultiModeRATCapability(): Sequence(&theInfo) {}

	void setMultiRATCapabilityList(const MultiRATCapability& MultiRATCapabilityList) { *static_cast<MultiRATCapability*>(items[0]) = MultiRATCapabilityList; }
};

enum UEPowerClassExtValues {
	Class1,_UEPowerClassExt = 0,
};
typedef Enumerated<CONSTRAINED, 0> UEPowerClassExt;

class UERadioAccessCapability : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapability(): Sequence(&theInfo) {}

	void setPdcpCapability(const PDCPCapability& PdcpCapability) { *static_cast<PDCPCapability*>(items[0]) = PdcpCapability; }
};

class UERadioAccessCapabilityInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityInfo(): Sequence(&theInfo) {}

	void setUeRadioAccessCapability(const UERadioAccessCapability& UeRadioAccessCapability) { *static_cast<UERadioAccessCapability*>(items[0]) = UeRadioAccessCapability; }
};

class UERadioAccessCapabBandFDD : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabBandFDD(): Sequence(&theInfo) {}

	void setRadioFrequencyBandFDD(const RadioFrequencyBandFDD& RadioFrequencyBandFDD) { *static_cast<RadioFrequencyBandFDD*>(items[0]) = RadioFrequencyBandFDD; }
};

typedef SequenceOf<UERadioAccessCapabBandFDD, CONSTRAINED, 1, maxFreqBandsFDD> UERadioAccessCapabBandFDDList;

class UERadioAccessCapabilityv370ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv370ext(): Sequence(&theInfo) {}

	void setUeRadioAccessCapabBandFDDList(const UERadioAccessCapabBandFDDList& UeRadioAccessCapabBandFDDList) { *static_cast<UERadioAccessCapabBandFDDList*>(items[0]) = UeRadioAccessCapabBandFDDList; }
};

typedef Boolean UEPositioningCapabilityExtv380RxtxTimeDifferenceType2Capable;

class UEPositioningCapabilityExtv380 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningCapabilityExtv380(): Sequence(&theInfo) {}

	void setUEPositioningCapabilityExtv380RxtxTimeDifferenceType2Capable(const UEPositioningCapabilityExtv380RxtxTimeDifferenceType2Capable& UEPositioningCapabilityExtv380RxtxTimeDifferenceType2Capable) { *static_cast<UEPositioningCapabilityExtv380RxtxTimeDifferenceType2Capable*>(items[0]) = UEPositioningCapabilityExtv380RxtxTimeDifferenceType2Capable; }
};

class UERadioAccessCapabilityv380ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv380ext(): Sequence(&theInfo) {}

	void setUePositioningCapabilityExtv380(const UEPositioningCapabilityExtv380& UePositioningCapabilityExtv380) { *static_cast<UEPositioningCapabilityExtv380*>(items[0]) = UePositioningCapabilityExtv380; }
};

enum UEPositioningCapabilityExtv3a0validity_CellPCH_UraPCHValues {
	true_UEPositioningCapabilityExtv3a0validity_CellPCH_UraPCH = 0,
};
typedef Enumerated<CONSTRAINED, 0> UEPositioningCapabilityExtv3a0validity_CellPCH_UraPCH;

class UEPositioningCapabilityExtv3a0 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningCapabilityExtv3a0(): Sequence(&theInfo) {}

	void setUEPositioningCapabilityExtv3a0validity_CellPCH_UraPCH(const UEPositioningCapabilityExtv3a0validity_CellPCH_UraPCH& UEPositioningCapabilityExtv3a0validity_CellPCH_UraPCH) { *static_cast<UEPositioningCapabilityExtv3a0validity_CellPCH_UraPCH*>(items[0]) = UEPositioningCapabilityExtv3a0validity_CellPCH_UraPCH; }
};

class UERadioAccessCapabilityv3a0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv3a0ext(): Sequence(&theInfo) {}

	void setUePositioningCapabilityExtv3a0(const UEPositioningCapabilityExtv3a0& UePositioningCapabilityExtv3a0) { *static_cast<UEPositioningCapabilityExtv3a0*>(items[0]) = UePositioningCapabilityExtv3a0; }
};

enum UEPositioningCapabilityExtv3g0sfn_sfnType2CapabilityValues {
	true_UEPositioningCapabilityExtv3g0sfn_sfnType2Capability = 0,
};
typedef Enumerated<CONSTRAINED, 0> UEPositioningCapabilityExtv3g0sfn_sfnType2Capability;

class UEPositioningCapabilityExtv3g0 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningCapabilityExtv3g0(): Sequence(&theInfo) {}

	void setUEPositioningCapabilityExtv3g0sfn_sfnType2Capability(const UEPositioningCapabilityExtv3g0sfn_sfnType2Capability& UEPositioningCapabilityExtv3g0sfn_sfnType2Capability) { *static_cast<UEPositioningCapabilityExtv3g0sfn_sfnType2Capability*>(items[0]) = UEPositioningCapabilityExtv3g0sfn_sfnType2Capability; }
};

class UERadioAccessCapabilityv3g0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv3g0ext(): Sequence(&theInfo) {}

	void setUePositioningCapabilityExtv3g0(const UEPositioningCapabilityExtv3g0& UePositioningCapabilityExtv3g0) { *static_cast<UEPositioningCapabilityExtv3g0*>(items[0]) = UePositioningCapabilityExtv3g0; }
};

class UERadioAccessCapabBandFDD2 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabBandFDD2(): Sequence(&theInfo) {}

	void setRadioFrequencyBandFDD2(const RadioFrequencyBandFDD2& RadioFrequencyBandFDD2) { *static_cast<RadioFrequencyBandFDD2*>(items[0]) = RadioFrequencyBandFDD2; }
};

typedef SequenceOf<UERadioAccessCapabBandFDD2, CONSTRAINED, 1, maxFreqBandsFDD> UERadioAccessCapabBandFDDList2;

class UERadioAccessCapabilityv650ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv650ext(): Sequence(&theInfo) {}

	void setUeRadioAccessCapabBandFDDList2(const UERadioAccessCapabBandFDDList2& UeRadioAccessCapabBandFDDList2) { *static_cast<UERadioAccessCapabBandFDDList2*>(items[0]) = UeRadioAccessCapabBandFDDList2; }
};

enum UERadioAccessCapabilityv7e0extsupportForTwoDRXSchemesInPCHValues {
	True_UERadioAccessCapabilityv7e0extsupportForTwoDRXSchemesInPCH = 0,
};
typedef Enumerated<CONSTRAINED, 0> UERadioAccessCapabilityv7e0extsupportForTwoDRXSchemesInPCH;

class UERadioAccessCapabilityv7e0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv7e0ext(): Sequence(&theInfo) {}

	void setUERadioAccessCapabilityv7e0extsupportForTwoDRXSchemesInPCH(const UERadioAccessCapabilityv7e0extsupportForTwoDRXSchemesInPCH& UERadioAccessCapabilityv7e0extsupportForTwoDRXSchemesInPCH) { *static_cast<UERadioAccessCapabilityv7e0extsupportForTwoDRXSchemesInPCH*>(items[0]) = UERadioAccessCapabilityv7e0extsupportForTwoDRXSchemesInPCH; }
};

enum UERadioAccessCapabilityv7f0extsupportofTxDivOnNonMIMOChannelValues {
	true_UERadioAccessCapabilityv7f0extsupportofTxDivOnNonMIMOChannel = 0,
};
typedef Enumerated<CONSTRAINED, 0> UERadioAccessCapabilityv7f0extsupportofTxDivOnNonMIMOChannel;

class UERadioAccessCapabilityv7f0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv7f0ext(): Sequence(&theInfo) {}

	void setUERadioAccessCapabilityv7f0extsupportofTxDivOnNonMIMOChannel(const UERadioAccessCapabilityv7f0extsupportofTxDivOnNonMIMOChannel& UERadioAccessCapabilityv7f0extsupportofTxDivOnNonMIMOChannel) { *static_cast<UERadioAccessCapabilityv7f0extsupportofTxDivOnNonMIMOChannel*>(items[0]) = UERadioAccessCapabilityv7f0extsupportofTxDivOnNonMIMOChannel; }
};

class UERadioAccessCapabilityInfov770ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityInfov770ext(): Sequence(&theInfo) {}

	void setRfCapability(const RFCapabilityv770ext& RfCapability) { *static_cast<RFCapabilityv770ext*>(items[0]) = RfCapability; }
};

class UERadioAccessCapabilityInfoTDD128v8b0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityInfoTDD128v8b0ext(): Sequence(&theInfo) {}

	void setMeasurementCapabilityTDD(const MeasurementCapabilityTDD& MeasurementCapabilityTDD) { *static_cast<MeasurementCapabilityTDD*>(items[0]) = MeasurementCapabilityTDD; }
};

typedef SequenceOf<UERadioAccessCapabBandFDD3, CONSTRAINED, 1, maxFreqBandsFDD> UERadioAccessCapabBandFDDList3;

class UERadioAccessCapabilityv860ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv860ext(): Sequence(&theInfo) {}

	void setUeRadioAccessCapabBandFDDList3(const UERadioAccessCapabBandFDDList3& UeRadioAccessCapabBandFDDList3) { *static_cast<UERadioAccessCapabBandFDDList3*>(items[0]) = UeRadioAccessCapabBandFDDList3; }
};

enum UERadioAccessCapabilityv880extsupportForPriorityReselectionInUTRANValues {
	true_UERadioAccessCapabilityv880extsupportForPriorityReselectionInUTRAN = 0,
};
typedef Enumerated<CONSTRAINED, 0> UERadioAccessCapabilityv880extsupportForPriorityReselectionInUTRAN;

class UERadioAccessCapabilityv880ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv880ext(): Sequence(&theInfo) {}

	void setUERadioAccessCapabilityv880extsupportForPriorityReselectionInUTRAN(const UERadioAccessCapabilityv880extsupportForPriorityReselectionInUTRAN& UERadioAccessCapabilityv880extsupportForPriorityReselectionInUTRAN) { *static_cast<UERadioAccessCapabilityv880extsupportForPriorityReselectionInUTRAN*>(items[0]) = UERadioAccessCapabilityv880extsupportForPriorityReselectionInUTRAN; }
};

enum UERadioAccessCapabilityv890extsupportCellSpecificTxDiversityinDC_OperationValues {
	true_UERadioAccessCapabilityv890extsupportCellSpecificTxDiversityinDC_Operation = 0,
};
typedef Enumerated<CONSTRAINED, 0> UERadioAccessCapabilityv890extsupportCellSpecificTxDiversityinDC_Operation;

class UERadioAccessCapabilityv890ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv890ext(): Sequence(&theInfo) {}

	void setUERadioAccessCapabilityv890extsupportCellSpecificTxDiversityinDC_Operation(const UERadioAccessCapabilityv890extsupportCellSpecificTxDiversityinDC_Operation& UERadioAccessCapabilityv890extsupportCellSpecificTxDiversityinDC_Operation) { *static_cast<UERadioAccessCapabilityv890extsupportCellSpecificTxDiversityinDC_Operation*>(items[0]) = UERadioAccessCapabilityv890extsupportCellSpecificTxDiversityinDC_Operation; }
};

enum UERadioAccessCapabilityv920extsupportOfenhancedTS0Values {
	true_UERadioAccessCapabilityv920extsupportOfenhancedTS0 = 0,
};
typedef Enumerated<CONSTRAINED, 0> UERadioAccessCapabilityv920extsupportOfenhancedTS0;

class UERadioAccessCapabilityv920ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv920ext(): Sequence(&theInfo) {}

	void setUERadioAccessCapabilityv920extsupportOfenhancedTS0(const UERadioAccessCapabilityv920extsupportOfenhancedTS0& UERadioAccessCapabilityv920extsupportOfenhancedTS0) { *static_cast<UERadioAccessCapabilityv920extsupportOfenhancedTS0*>(items[0]) = UERadioAccessCapabilityv920extsupportOfenhancedTS0; }
};


class UEPositioningCapabilityv770ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningCapabilityv770ext(): Sequence(&theInfo) {}

	void setUeGANSSPositioningCapability(const UEGANSSPositioningCapability& UeGANSSPositioningCapability) { *static_cast<UEGANSSPositioningCapability*>(items[0]) = UeGANSSPositioningCapability; }
};

class UEPositioningCapabilityv860ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningCapabilityv860ext(): Sequence(&theInfo) {}

	void setUeGANSSPositioningCapabilityv860ext(const UEGANSSPositioningCapabilityv860extIEs& UeGANSSPositioningCapabilityv860ext) { *static_cast<UEGANSSPositioningCapabilityv860extIEs*>(items[0]) = UeGANSSPositioningCapabilityv860ext; }
};

class UERadioAccessCapabBandFDDext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabBandFDDext(): Sequence(&theInfo) {}

	void setRadioFrequencyBandFDD(const RadioFrequencyBandFDD& RadioFrequencyBandFDD) { *static_cast<RadioFrequencyBandFDD*>(items[0]) = RadioFrequencyBandFDD; }
};

typedef SequenceOf<UERadioAccessCapabBandFDDext, CONSTRAINED, 1, maxFreqBandsFDD> UERadioAccessCapabBandFDDListext;

class UERadioAccessCapabilityv4b0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv4b0ext(): Sequence(&theInfo) {}

	void setPdcpCapabilityr4ext(const PDCPCapabilityr4ext& PdcpCapabilityr4ext) { *static_cast<PDCPCapabilityr4ext*>(items[0]) = PdcpCapabilityr4ext; }
};

typedef Boolean UERadioAccessCapabilityCompTotalAMRLCMemoryExceeds10kB;

class UERadioAccessCapabilityComp : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityComp(): Sequence(&theInfo) {}

	void setUERadioAccessCapabilityCompTotalAMRLCMemoryExceeds10kB(const UERadioAccessCapabilityCompTotalAMRLCMemoryExceeds10kB& UERadioAccessCapabilityCompTotalAMRLCMemoryExceeds10kB) { *static_cast<UERadioAccessCapabilityCompTotalAMRLCMemoryExceeds10kB*>(items[0]) = UERadioAccessCapabilityCompTotalAMRLCMemoryExceeds10kB; }
};

enum RFCapabBandFDDCompValues {
	NotSupported,_RFCapabBandFDDComp = 0,
};
typedef Enumerated<CONSTRAINED, 0> RFCapabBandFDDComp;

typedef SequenceOf<RFCapabBandFDDComp, CONSTRAINED, 1, maxFreqBandsFDD_ext> RFCapabBandListFDDCompext;

class UERadioAccessCapabilityCompext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityCompext(): Sequence(&theInfo) {}

	void setRfCapabilityFDDComp(const RFCapabBandListFDDCompext& RfCapabilityFDDComp) { *static_cast<RFCapabBandListFDDCompext*>(items[0]) = RfCapabilityFDDComp; }
};

class UERadioAccessCapabilityCompTDD128v7f0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityCompTDD128v7f0ext(): Sequence(&theInfo) {}

	void setHSDSCHphysicallayercategory(const HSDSCHphysicallayercategory& HSDSCHphysicallayercategory) { *static_cast<HSDSCHphysicallayercategory*>(items[0]) = HSDSCHphysicallayercategory; }
};

class RFCapabilityCompv770ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RFCapabilityCompv770ext(): Sequence(&theInfo) {}

	void setTdd384RFCapability(const RadioFrequencyBandTDDListr7& Tdd384RFCapability) { *static_cast<RadioFrequencyBandTDDListr7*>(items[0]) = Tdd384RFCapability; }
};

class UERadioAccessCapabilityCompv770ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityCompv770ext(): Sequence(&theInfo) {}

	void setRfCapabilityComp(const RFCapabilityCompv770ext& RfCapabilityComp) { *static_cast<RFCapabilityCompv770ext*>(items[0]) = RfCapabilityComp; }
};

class UERadioAccessCapabilityComp2 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityComp2(): Sequence(&theInfo) {}

	void setUERadioAccessCapabilityComp2FddPhysicalChannelCapabhspdschedch(const UERadioAccessCapabilityComp2FddPhysicalChannelCapabhspdschedch& UERadioAccessCapabilityComp2FddPhysicalChannelCapabhspdschedch) { *static_cast<UERadioAccessCapabilityComp2FddPhysicalChannelCapabhspdschedch*>(items[0]) = UERadioAccessCapabilityComp2FddPhysicalChannelCapabhspdschedch; }
};

class UERadioAccessCapabilityComp2v770ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityComp2v770ext(): Sequence(&theInfo) {}

	void setHsdschphysicallayercategoryext(const HSDSCHphysicallayercategoryext& Hsdschphysicallayercategoryext) { *static_cast<HSDSCHphysicallayercategoryext*>(items[0]) = Hsdschphysicallayercategoryext; }
};

enum UERadioAccessCapabilityComp2v7f0extsupportofTxDivOnNonMIMOChannelValues {
	true_UERadioAccessCapabilityComp2v7f0extsupportofTxDivOnNonMIMOChannel = 0,
};
typedef Enumerated<CONSTRAINED, 0> UERadioAccessCapabilityComp2v7f0extsupportofTxDivOnNonMIMOChannel;

class UERadioAccessCapabilityComp2v7f0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityComp2v7f0ext(): Sequence(&theInfo) {}

	void setUERadioAccessCapabilityComp2v7f0extsupportofTxDivOnNonMIMOChannel(const UERadioAccessCapabilityComp2v7f0extsupportofTxDivOnNonMIMOChannel& UERadioAccessCapabilityComp2v7f0extsupportofTxDivOnNonMIMOChannel) { *static_cast<UERadioAccessCapabilityComp2v7f0extsupportofTxDivOnNonMIMOChannel*>(items[0]) = UERadioAccessCapabilityComp2v7f0extsupportofTxDivOnNonMIMOChannel; }
};

class UERadioAccessCapabilityComp2v860ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityComp2v860ext(): Sequence(&theInfo) {}

	void setHsdschphysicallayercategoryext2(const HSDSCHphysicallayercategoryext2& Hsdschphysicallayercategoryext2) { *static_cast<HSDSCHphysicallayercategoryext2*>(items[0]) = Hsdschphysicallayercategoryext2; }
};

class UERadioAccessCapabilityComp2v920ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityComp2v920ext(): Sequence(&theInfo) {}

	void setHsdschphysicallayercategoryext3(const HSDSCHphysicallayercategoryext3& Hsdschphysicallayercategoryext3) { *static_cast<HSDSCHphysicallayercategoryext3*>(items[0]) = Hsdschphysicallayercategoryext3; }
};

class UERadioAccessCapabilityCompTDD128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityCompTDD128(): Sequence(&theInfo) {}

	void setTdd128RFCapability(const RadioFrequencyBandTDDextList& Tdd128RFCapability) { *static_cast<RadioFrequencyBandTDDextList*>(items[0]) = Tdd128RFCapability; }
};

typedef Null RFCapabilityCompFddNotSupported;

class RFCapabilityCompFdd : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	RFCapabilityCompFdd(): Choice(&theInfo) {}
};

class RFCapabilityComp : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RFCapabilityComp(): Sequence(&theInfo) {}

	void setRFCapabilityCompFdd(const RFCapabilityCompFdd& RFCapabilityCompFdd) { *static_cast<RFCapabilityCompFdd*>(items[0]) = RFCapabilityCompFdd; }
};

typedef SequenceOf<RFCapabBandFDDComp, CONSTRAINED, 1, maxFreqBandsFDD> RFCapabBandListFDDComp;

class UERadioAccessCapabilityv5c0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv5c0ext(): Sequence(&theInfo) {}

	void setPdcpCapabilityr5ext2(const PDCPCapabilityr5ext2& PdcpCapabilityr5ext2) { *static_cast<PDCPCapabilityr5ext2*>(items[0]) = PdcpCapabilityr5ext2; }
};

class UERadioAccessCapabilityv680ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv680ext(): Sequence(&theInfo) {}

	void setMultiModeRATCapabilityv680ext(const MultiModeRATCapabilityv680ext& MultiModeRATCapabilityv680ext) { *static_cast<MultiModeRATCapabilityv680ext*>(items[0]) = MultiModeRATCapabilityv680ext; }
};

class ULPhysChCapabilityFDD : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULPhysChCapabilityFDD(): Sequence(&theInfo) {}

	void setMaxNoDPDCHBitsTransmitted(const MaxNoDPDCHBitsTransmitted& MaxNoDPDCHBitsTransmitted) { *static_cast<MaxNoDPDCHBitsTransmitted*>(items[0]) = MaxNoDPDCHBitsTransmitted; }
};

class ULPhysChCapabilityFDDr6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULPhysChCapabilityFDDr6(): Sequence(&theInfo) {}

	void setMaxNoDPDCHBitsTransmitted(const MaxNoDPDCHBitsTransmitted& MaxNoDPDCHBitsTransmitted) { *static_cast<MaxNoDPDCHBitsTransmitted*>(items[0]) = MaxNoDPDCHBitsTransmitted; }
};

typedef Integer<EXTCONSTRAINED, 7, 7> ULPhysChCapabilityFDDv770extEdchPhysicalLayerCategoryextension;

class ULPhysChCapabilityFDDv770ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULPhysChCapabilityFDDv770ext(): Sequence(&theInfo) {}

	void setULPhysChCapabilityFDDv770extEdchPhysicalLayerCategoryextension(const ULPhysChCapabilityFDDv770extEdchPhysicalLayerCategoryextension& ULPhysChCapabilityFDDv770extEdchPhysicalLayerCategoryextension) { *static_cast<ULPhysChCapabilityFDDv770extEdchPhysicalLayerCategoryextension*>(items[0]) = ULPhysChCapabilityFDDv770extEdchPhysicalLayerCategoryextension; }
};

typedef Integer<CONSTRAINED, 8, 9> ULPhysChCapabilityFDDv920extEdchPhysicalLayerCategoryextension2;

class ULPhysChCapabilityFDDv920ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULPhysChCapabilityFDDv920ext(): Sequence(&theInfo) {}

	void setULPhysChCapabilityFDDv920extEdchPhysicalLayerCategoryextension2(const ULPhysChCapabilityFDDv920extEdchPhysicalLayerCategoryextension2& ULPhysChCapabilityFDDv920extEdchPhysicalLayerCategoryextension2) { *static_cast<ULPhysChCapabilityFDDv920extEdchPhysicalLayerCategoryextension2*>(items[0]) = ULPhysChCapabilityFDDv920extEdchPhysicalLayerCategoryextension2; }
};

class ULPhysChCapabilityTDD : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULPhysChCapabilityTDD(): Sequence(&theInfo) {}

	void setMaxTSPerFrame(const MaxTSPerFrame& MaxTSPerFrame) { *static_cast<MaxTSPerFrame*>(items[0]) = MaxTSPerFrame; }
};

typedef Integer<CONSTRAINED, 1, 16> ULPhysChCapabilityTDD384v770extTdd384edchSupportedTddedchPhysicalLayerCategory;

class ULPhysChCapabilityTDD384v770extTdd384edchSupported : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULPhysChCapabilityTDD384v770extTdd384edchSupported(): Sequence(&theInfo) {}

	void setULPhysChCapabilityTDD384v770extTdd384edchSupportedTddedchPhysicalLayerCategory(const ULPhysChCapabilityTDD384v770extTdd384edchSupportedTddedchPhysicalLayerCategory& ULPhysChCapabilityTDD384v770extTdd384edchSupportedTddedchPhysicalLayerCategory) { *static_cast<ULPhysChCapabilityTDD384v770extTdd384edchSupportedTddedchPhysicalLayerCategory*>(items[0]) = ULPhysChCapabilityTDD384v770extTdd384edchSupportedTddedchPhysicalLayerCategory; }
};

class ULPhysChCapabilityTDD384v770extTdd384edch : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	ULPhysChCapabilityTDD384v770extTdd384edch(): Choice(&theInfo) {}
};

class ULPhysChCapabilityTDD384v770ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULPhysChCapabilityTDD384v770ext(): Sequence(&theInfo) {}

	void setULPhysChCapabilityTDD384v770extTdd384edch(const ULPhysChCapabilityTDD384v770extTdd384edch& ULPhysChCapabilityTDD384v770extTdd384edch) { *static_cast<ULPhysChCapabilityTDD384v770extTdd384edch*>(items[0]) = ULPhysChCapabilityTDD384v770extTdd384edch; }
};

class ULPhysChCapabilityTDDLCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULPhysChCapabilityTDDLCRr4(): Sequence(&theInfo) {}

	void setMaxTSPerSubFrame(const MaxTSPerSubFramer4& MaxTSPerSubFrame) { *static_cast<MaxTSPerSubFramer4*>(items[0]) = MaxTSPerSubFrame; }
};

class ULPhysChCapabilityTDD128v770ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULPhysChCapabilityTDD128v770ext(): Sequence(&theInfo) {}

	void setMaxPhysChPerTimeslot(const MaxPhysChPerTimeslotLCRr7& MaxPhysChPerTimeslot) { *static_cast<MaxPhysChPerTimeslotLCRr7*>(items[0]) = MaxPhysChPerTimeslot; }
};

class ULPhysChCapabilityInfoTDD128v770ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULPhysChCapabilityInfoTDD128v770ext(): Sequence(&theInfo) {}

	void setMaxPhysChPerTimeslot(const MaxPhysChPerTimeslotLCRr7& MaxPhysChPerTimeslot) { *static_cast<MaxPhysChPerTimeslotLCRr7*>(items[0]) = MaxPhysChPerTimeslot; }
};

class ULPhysChCapabilityTDD768 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULPhysChCapabilityTDD768(): Sequence(&theInfo) {}

	void setMaxTSPerFrame(const MaxTSPerFrame& MaxTSPerFrame) { *static_cast<MaxTSPerFrame*>(items[0]) = MaxTSPerFrame; }
};

typedef Null ULSecondaryCellInfoFDDContinue;

class ULSecondaryCellInfoFDD : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	ULSecondaryCellInfoFDD(): Choice(&theInfo) {}
};

class ULTransChCapability : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULTransChCapability(): Sequence(&theInfo) {}

	void setMaxNoBitsTransmitted(const MaxNoBits& MaxNoBitsTransmitted) { *static_cast<MaxNoBits*>(items[0]) = MaxNoBitsTransmitted; }
};

typedef Boolean UEPositioningCapabilityStandaloneLocMethodsSupported;

class UEPositioningCapability : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningCapability(): Sequence(&theInfo) {}

	void setUEPositioningCapabilityStandaloneLocMethodsSupported(const UEPositioningCapabilityStandaloneLocMethodsSupported& UEPositioningCapabilityStandaloneLocMethodsSupported) { *static_cast<UEPositioningCapabilityStandaloneLocMethodsSupported*>(items[0]) = UEPositioningCapabilityStandaloneLocMethodsSupported; }
};

class UESecurityInformation : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UESecurityInformation(): Sequence(&theInfo) {}

	void setStartCS(const STARTValue& StartCS) { *static_cast<STARTValue*>(items[0]) = StartCS; }
};

class UESecurityInformation2 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UESecurityInformation2(): Sequence(&theInfo) {}

	void setStartPS(const STARTValue& StartPS) { *static_cast<STARTValue*>(items[0]) = StartPS; }
};

enum UESpecificCapabilityInformationLCRTDDValues {
	NF,_UESpecificCapabilityInformationLCRTDD = 0,
};
typedef Enumerated<CONSTRAINED, 0> UESpecificCapabilityInformationLCRTDD;

enum URAUpdateCauseValues {
	ChangeOfURA,_URAUpdateCause = 0,
};
typedef Enumerated<CONSTRAINED, 0> URAUpdateCause;

typedef Integer<CONSTRAINED, 3, 9> UTRANDRXCycleLengthCoefficient;

typedef Integer<EXTCONSTRAINED, 3, 9> UTRANDRXCycleLengthCoefficientr7DrxCycleLengthCoefficient;

class UTRANDRXCycleLengthCoefficientr7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UTRANDRXCycleLengthCoefficientr7(): Sequence(&theInfo) {}

	void setUTRANDRXCycleLengthCoefficientr7DrxCycleLengthCoefficient(const UTRANDRXCycleLengthCoefficientr7DrxCycleLengthCoefficient& UTRANDRXCycleLengthCoefficientr7DrxCycleLengthCoefficient) { *static_cast<UTRANDRXCycleLengthCoefficientr7DrxCycleLengthCoefficient*>(items[0]) = UTRANDRXCycleLengthCoefficientr7DrxCycleLengthCoefficient; }
};

typedef Integer<CONSTRAINED, 0, 15> WaitTime;

typedef Integer<EXTCONSTRAINED, 1, 65535> RFC2507InfoFMAXPERIOD;

class RFC2507Info : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RFC2507Info(): Sequence(&theInfo) {}

	void setRFC2507InfoFMAXPERIOD(const RFC2507InfoFMAXPERIOD& RFC2507InfoFMAXPERIOD) { *static_cast<RFC2507InfoFMAXPERIOD*>(items[0]) = RFC2507InfoFMAXPERIOD; }
};

class AlgorithmSpecificInfo : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	AlgorithmSpecificInfo(): Choice(&theInfo) {}
};

class AlgorithmSpecificInfor4 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	AlgorithmSpecificInfor4(): Choice(&theInfo) {}
};

enum CIDInclusionInfor4Values {
	PdcpHeader,_CIDInclusionInfor4 = 0,
};
typedef Enumerated<CONSTRAINED, 0> CIDInclusionInfor4;

typedef Integer<CONSTRAINED, 1, 15> LogicalChannelIdentity;

class CommonRBMappingInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CommonRBMappingInfo(): Sequence(&theInfo) {}

	void setLogicalChannelIdentity(const LogicalChannelIdentity& LogicalChannelIdentity) { *static_cast<LogicalChannelIdentity*>(items[0]) = LogicalChannelIdentity; }
};

typedef Integer<CONSTRAINED, 0, 4294967295> COUNTC;

typedef Integer<CONSTRAINED, 0, 33554431> COUNTCMSB;

enum DefaultConfigModeValues {
	Fdd,_DefaultConfigMode = 0,
};
typedef Enumerated<CONSTRAINED, 0> DefaultConfigMode;

class DefaultConfigForCellFACH : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DefaultConfigForCellFACH(): Sequence(&theInfo) {}

	void setDefaultConfigMode(const DefaultConfigMode& DefaultConfigMode) { *static_cast<DefaultConfigMode*>(items[0]) = DefaultConfigMode; }
};

typedef Integer<CONSTRAINED, 0, 10> DefaultConfigIdentity;

typedef Integer<CONSTRAINED, 0, 12> DefaultConfigIdentityr4;

typedef Integer<CONSTRAINED, 0, 13> DefaultConfigIdentityr5;

typedef Integer<CONSTRAINED, 0, 31> DefaultConfigIdentityr6;

typedef Integer<CONSTRAINED, 0, 15> DefaultConfigIdForCellFACH;

typedef Integer<CONSTRAINED, 0, 62> DDI;

typedef Boolean DLAMRLCModeInSequenceDelivery;

class DLAMRLCMode : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLAMRLCMode(): Sequence(&theInfo) {}

	void setDLAMRLCModeInSequenceDelivery(const DLAMRLCModeInSequenceDelivery& DLAMRLCModeInSequenceDelivery) { *static_cast<DLAMRLCModeInSequenceDelivery*>(items[0]) = DLAMRLCModeInSequenceDelivery; }
};

typedef Integer<EXTCONSTRAINED, 0, 31> OctetModeRLCSizeInfoType1SizeType1;

class OctetModeRLCSizeInfoType1 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	OctetModeRLCSizeInfoType1(): Choice(&theInfo) {}
};

class DLAMRLCModer5 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLAMRLCModer5(): Sequence(&theInfo) {}

	void setDlRLCPDUsize(const OctetModeRLCSizeInfoType1& DlRLCPDUsize) { *static_cast<OctetModeRLCSizeInfoType1*>(items[0]) = DlRLCPDUsize; }
};

class DLAMRLCModer7DlRLCPDUsize : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	DLAMRLCModer7DlRLCPDUsize(): Choice(&theInfo) {}
};

class DLAMRLCModer7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLAMRLCModer7(): Sequence(&theInfo) {}

	void setDLAMRLCModer7DlRLCPDUsize(const DLAMRLCModer7DlRLCPDUsize& DLAMRLCModer7DlRLCPDUsize) { *static_cast<DLAMRLCModer7DlRLCPDUsize*>(items[0]) = DLAMRLCModer7DlRLCPDUsize; }
};

typedef Integer<CONSTRAINED, 1, 32> RBIdentity;

class RBWithPDCPInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RBWithPDCPInfo(): Sequence(&theInfo) {}

	void setRbIdentity(const RBIdentity& RbIdentity) { *static_cast<RBIdentity*>(items[0]) = RbIdentity; }
};

typedef SequenceOf<RBWithPDCPInfo, CONSTRAINED, 1, maxRBallRABs> RBWithPDCPInfoList;

class DLCounterSynchronisationInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLCounterSynchronisationInfo(): Sequence(&theInfo) {}

	void setRBWithPDCPInfoList(const RBWithPDCPInfoList& RBWithPDCPInfoList) { *static_cast<RBWithPDCPInfoList*>(items[0]) = RBWithPDCPInfoList; }
};

class DLCounterSynchronisationInfor5 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLCounterSynchronisationInfor5(): Sequence(&theInfo) {}

	void setRbWithPDCPInfoList(const RBWithPDCPInfoList& RbWithPDCPInfoList) { *static_cast<RBWithPDCPInfoList*>(items[0]) = RbWithPDCPInfoList; }
};

typedef Integer<CONSTRAINED, 1, 32> TransportChannelIdentity;

class DLTransportChannelType : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	DLTransportChannelType(): Choice(&theInfo) {}
};

class DLLogicalChannelMapping : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLLogicalChannelMapping(): Sequence(&theInfo) {}

	void setDlTransportChannelType(const DLTransportChannelType& DlTransportChannelType) { *static_cast<DLTransportChannelType*>(items[0]) = DlTransportChannelType; }
};

class DLTransportChannelTyper5 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	DLTransportChannelTyper5(): Choice(&theInfo) {}
};

class DLLogicalChannelMappingr5 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLLogicalChannelMappingr5(): Sequence(&theInfo) {}

	void setDlTransportChannelType(const DLTransportChannelTyper5& DlTransportChannelType) { *static_cast<DLTransportChannelTyper5*>(items[0]) = DlTransportChannelType; }
};

class DLTransportChannelTyper7 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	DLTransportChannelTyper7(): Choice(&theInfo) {}
};

class DLLogicalChannelMappingr7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLLogicalChannelMappingr7(): Sequence(&theInfo) {}

	void setDlTransportChannelType(const DLTransportChannelTyper7& DlTransportChannelType) { *static_cast<DLTransportChannelTyper7*>(items[0]) = DlTransportChannelType; }
};

typedef SequenceOf<DLLogicalChannelMapping, CONSTRAINED, 1, maxLoCHperRLC> DLLogicalChannelMappingList;

typedef SequenceOf<DLLogicalChannelMappingr5, CONSTRAINED, 1, maxLoCHperRLC> DLLogicalChannelMappingListr5;

typedef SequenceOf<DLLogicalChannelMappingr7, CONSTRAINED, 1, maxLoCHperRLC> DLLogicalChannelMappingListr7;

enum DLReceptionWindowSizer6Values {
	Size32,_DLReceptionWindowSizer6 = 0,
};
typedef Enumerated<CONSTRAINED, 0> DLReceptionWindowSizer6;

class DLRFC3095r4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLRFC3095r4(): Sequence(&theInfo) {}

	void setDummy(const CIDInclusionInfor4& Dummy) { *static_cast<CIDInclusionInfor4*>(items[0]) = Dummy; }
};

class DLRLCMode : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	DLRLCMode(): Choice(&theInfo) {}
};

class DLRLCModer5 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	DLRLCModer5(): Choice(&theInfo) {}
};

class DLRLCModer6 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	DLRLCModer6(): Choice(&theInfo) {}
};

class DLRLCModer7 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	DLRLCModer7(): Choice(&theInfo) {}
};

enum TimerStatusProhibitValues {
	Tsp10,tsp20,tsp30,tsp40,tsp50,_TimerStatusProhibit = 0,
};
typedef Enumerated<CONSTRAINED, 0> TimerStatusProhibit;

class DLRLCStatusInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLRLCStatusInfo(): Sequence(&theInfo) {}

	void setTimerStatusProhibit(const TimerStatusProhibit& TimerStatusProhibit) { *static_cast<TimerStatusProhibit*>(items[0]) = TimerStatusProhibit; }
};

typedef Boolean DLTMRLCModeSegmentationIndication;

class DLTMRLCMode : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLTMRLCMode(): Sequence(&theInfo) {}

	void setDLTMRLCModeSegmentationIndication(const DLTMRLCModeSegmentationIndication& DLTMRLCModeSegmentationIndication) { *static_cast<DLTMRLCModeSegmentationIndication*>(items[0]) = DLTMRLCModeSegmentationIndication; }
};

enum DLUMRLCLIsizeValues {
	Size7,_DLUMRLCLIsize = 0,
};
typedef Enumerated<CONSTRAINED, 0> DLUMRLCLIsize;

class DLUMRLCModer5 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLUMRLCModer5(): Sequence(&theInfo) {}

	void setDlUMRLCLIsize(const DLUMRLCLIsize& DlUMRLCLIsize) { *static_cast<DLUMRLCLIsize*>(items[0]) = DlUMRLCLIsize; }
};

class DLUMRLCModer6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLUMRLCModer6(): Sequence(&theInfo) {}

	void setDlUMRLCLIsize(const DLUMRLCLIsize& DlUMRLCLIsize) { *static_cast<DLUMRLCLIsize*>(items[0]) = DlUMRLCLIsize; }
};

enum ExpectReorderingValues {
	ReorderingNotExpected,_ExpectReordering = 0,
};
typedef Enumerated<CONSTRAINED, 0> ExpectReordering;

enum TimerMRWValues {
	Te50,_TimerMRW = 0,
};
typedef Enumerated<CONSTRAINED, 0> TimerMRW;

class ExplicitDiscard : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ExplicitDiscard(): Sequence(&theInfo) {}

	void setTimerMRW(const TimerMRW& TimerMRW) { *static_cast<TimerMRW*>(items[0]) = TimerMRW; }
};

class HeaderCompressionInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HeaderCompressionInfo(): Sequence(&theInfo) {}

	void setAlgorithmSpecificInfo(const AlgorithmSpecificInfo& AlgorithmSpecificInfo) { *static_cast<AlgorithmSpecificInfo*>(items[0]) = AlgorithmSpecificInfo; }
};

typedef SequenceOf<HeaderCompressionInfo, CONSTRAINED, 1, maxPDCPAlgoType> HeaderCompressionInfoList;

class HeaderCompressionInfor4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HeaderCompressionInfor4(): Sequence(&theInfo) {}

	void setAlgorithmSpecificInfo(const AlgorithmSpecificInfor4& AlgorithmSpecificInfo) { *static_cast<AlgorithmSpecificInfor4*>(items[0]) = AlgorithmSpecificInfo; }
};

typedef SequenceOf<HeaderCompressionInfor4, CONSTRAINED, 1, maxPDCPAlgoType> HeaderCompressionInfoListr4;

enum MaxPDCPSNWindowSizeValues {
	Sn255,_MaxPDCPSNWindowSize = 0,
};
typedef Enumerated<CONSTRAINED, 0> MaxPDCPSNWindowSize;

class LosslessSRNSRelocSupport : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	LosslessSRNSRelocSupport(): Choice(&theInfo) {}
};

typedef BitString<CONSTRAINED, 24, 24> MACdHFNinitialvalue;

typedef Integer<CONSTRAINED, 1, 8> MACLogicalChannelPriority;

typedef Integer<CONSTRAINED, 0, 18> MaxCSDelay;

enum MaxDATValues {
	Dat1,_MaxDAT = 0,
};
typedef Enumerated<CONSTRAINED, 0> MaxDAT;

class MaxDATRetransmissions : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MaxDATRetransmissions(): Sequence(&theInfo) {}

	void setMaxDAT(const MaxDAT& MaxDAT) { *static_cast<MaxDAT*>(items[0]) = MaxDAT; }
};

enum MaxMRWValues {
	Mm1,_MaxMRW = 0,
};
typedef Enumerated<CONSTRAINED, 0> MaxMRW;

enum MaxRSTValues {
	Rst1,_MaxRST = 0,
};
typedef Enumerated<CONSTRAINED, 0> MaxRST;

enum NoExplicitDiscardValues {
	Dt10,_NoExplicitDiscard = 0,
};
typedef Enumerated<CONSTRAINED, 0> NoExplicitDiscard;

class PDCPInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PDCPInfo(): Sequence(&theInfo) {}

	void setLosslessSRNSRelocSupport(const LosslessSRNSRelocSupport& LosslessSRNSRelocSupport) { *static_cast<LosslessSRNSRelocSupport*>(items[0]) = LosslessSRNSRelocSupport; }
};

class PDCPInfor4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PDCPInfor4(): Sequence(&theInfo) {}

	void setLosslessSRNSRelocSupport(const LosslessSRNSRelocSupport& LosslessSRNSRelocSupport) { *static_cast<LosslessSRNSRelocSupport*>(items[0]) = LosslessSRNSRelocSupport; }
};

class PDCPInfoReconfig : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PDCPInfoReconfig(): Sequence(&theInfo) {}

	void setPdcpInfo(const PDCPInfo& PdcpInfo) { *static_cast<PDCPInfo*>(items[0]) = PdcpInfo; }
};

class PDCPInfoReconfigr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PDCPInfoReconfigr4(): Sequence(&theInfo) {}

	void setPdcpInfo(const PDCPInfor4& PdcpInfo) { *static_cast<PDCPInfor4*>(items[0]) = PdcpInfo; }
};

enum PDCPPDUHeaderValues {
	Present,_PDCPPDUHeader = 0,
};
typedef Enumerated<CONSTRAINED, 0> PDCPPDUHeader;

enum PDCPROHCTargetModeValues {
	OMode,_PDCPROHCTargetMode = 0,
};
typedef Enumerated<CONSTRAINED, 0> PDCPROHCTargetMode;

typedef Integer<CONSTRAINED, 0, 65535> PDCPSNInfo;

enum PollPDUValues {
	Pdu1,_PollPDU = 0,
};
typedef Enumerated<CONSTRAINED, 0> PollPDU;

enum PollSDUValues {
	Sdu1,_PollSDU = 0,
};
typedef Enumerated<CONSTRAINED, 0> PollSDU;

enum TimerPollProhibitValues {
	Tpp10,_TimerPollProhibit = 0,
};
typedef Enumerated<CONSTRAINED, 0> TimerPollProhibit;

class PollingInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PollingInfo(): Sequence(&theInfo) {}

	void setTimerPollProhibit(const TimerPollProhibit& TimerPollProhibit) { *static_cast<TimerPollProhibit*>(items[0]) = TimerPollProhibit; }
};

enum PollWindowValues {
	Pw50,_PollWindow = 0,
};
typedef Enumerated<CONSTRAINED, 0> PollWindow;

typedef Integer<CONSTRAINED, 0, 15> PredefinedConfigIdentity;

typedef Integer<CONSTRAINED, 0, 15> PredefinedConfigValueTag;

class PredefinedRBConfiguration : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PredefinedRBConfiguration(): Sequence(&theInfo) {}

	void setReEstablishmentTimer(const ReEstablishmentTimer& ReEstablishmentTimer) { *static_cast<ReEstablishmentTimer*>(items[0]) = ReEstablishmentTimer; }
};

class PreDefRadioConfiguration : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PreDefRadioConfiguration(): Sequence(&theInfo) {}

	void setPredefinedRBConfiguration(const PredefinedRBConfiguration& PredefinedRBConfiguration) { *static_cast<PredefinedRBConfiguration*>(items[0]) = PredefinedRBConfiguration; }
};

enum NumberOfTPCBitsValues {
	tpc4_NumberOfTPCBits = 0,
};
typedef Enumerated<CONSTRAINED, 0> NumberOfTPCBits;

class ULDPCHInfoPredefv770extModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULDPCHInfoPredefv770extModeSpecificInfoFdd(): Sequence(&theInfo) {}

	void setNumberOfTPCBits(const NumberOfTPCBits& NumberOfTPCBits) { *static_cast<NumberOfTPCBits*>(items[0]) = NumberOfTPCBits; }
};

class ULDPCHInfoPredefv770extModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	ULDPCHInfoPredefv770extModeSpecificInfo(): Choice(&theInfo) {}
};

class ULDPCHInfoPredefv770ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULDPCHInfoPredefv770ext(): Sequence(&theInfo) {}

	void setULDPCHInfoPredefv770extModeSpecificInfo(const ULDPCHInfoPredefv770extModeSpecificInfo& ULDPCHInfoPredefv770extModeSpecificInfo) { *static_cast<ULDPCHInfoPredefv770extModeSpecificInfo*>(items[0]) = ULDPCHInfoPredefv770extModeSpecificInfo; }
};

class PreDefPhyChConfigurationv770ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PreDefPhyChConfigurationv770ext(): Sequence(&theInfo) {}

	void setUlDPCHInfoPredef(const ULDPCHInfoPredefv770ext& UlDPCHInfoPredef) { *static_cast<ULDPCHInfoPredefv770ext*>(items[0]) = UlDPCHInfoPredef; }
};

class PreDefRadioConfigurationv770ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PreDefRadioConfigurationv770ext(): Sequence(&theInfo) {}

	void setPreDefPhyChConfiguration(const PreDefPhyChConfigurationv770ext& PreDefPhyChConfiguration) { *static_cast<PreDefPhyChConfigurationv770ext*>(items[0]) = PreDefPhyChConfiguration; }
};

enum MAChsWindowSizer9Values {
	Mws4,_MAChsWindowSizer9 = 0,
};
typedef Enumerated<CONSTRAINED, 0> MAChsWindowSizer9;

class PreDefRadioConfigurationv920ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PreDefRadioConfigurationv920ext(): Sequence(&theInfo) {}

	void setMacehsWindowSize(const MAChsWindowSizer9& MacehsWindowSize) { *static_cast<MAChsWindowSizer9*>(items[0]) = MacehsWindowSize; }
};

typedef Null PredefinedConfigStatusInfoStoredWithValueTagSameAsPrevius;

class PredefinedConfigStatusInfo : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	PredefinedConfigStatusInfo(): Choice(&theInfo) {}
};

typedef SequenceOf<PredefinedConfigStatusInfo, CONSTRAINED, maxPredefConfig, maxPredefConfig> PredefinedConfigStatusList;

typedef Integer<EXTCONSTRAINED, 0, 10> PredefinedConfigSetWithDifferentValueTagStartPosition;

class PredefinedConfigSetWithDifferentValueTag : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PredefinedConfigSetWithDifferentValueTag(): Sequence(&theInfo) {}

	void setPredefinedConfigSetWithDifferentValueTagStartPosition(const PredefinedConfigSetWithDifferentValueTagStartPosition& PredefinedConfigSetWithDifferentValueTagStartPosition) { *static_cast<PredefinedConfigSetWithDifferentValueTagStartPosition*>(items[0]) = PredefinedConfigSetWithDifferentValueTagStartPosition; }
};

typedef SequenceOf<PredefinedConfigSetWithDifferentValueTag, CONSTRAINED, 1, 2> PredefinedConfigSetsWithDifferentValueTag;

class PredefinedConfigStatusListComp : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PredefinedConfigStatusListComp(): Sequence(&theInfo) {}

	void setSetsWithDifferentValueTag(const PredefinedConfigSetsWithDifferentValueTag& SetsWithDifferentValueTag) { *static_cast<PredefinedConfigSetsWithDifferentValueTag*>(items[0]) = SetsWithDifferentValueTag; }
};

typedef SequenceOf<PredefinedConfigValueTag, CONSTRAINED, 1, maxPredefConfig> PredefinedConfigValueTagList;

typedef SequenceOf<PredefinedConfigStatusInfo, CONSTRAINED, 1, maxPredefConfig> PredefinedConfigStatusListVarSz;

class RABInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RABInfo(): Sequence(&theInfo) {}

	void setRabIdentity(const RABIdentity& RabIdentity) { *static_cast<RABIdentity*>(items[0]) = RabIdentity; }
};

typedef OctetString<CONSTRAINED, 1, 1> MBMSSessionIdentity;

class RABInfor6ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RABInfor6ext(): Sequence(&theInfo) {}

	void setMbmsSessionIdentity(const MBMSSessionIdentity& MbmsSessionIdentity) { *static_cast<MBMSSessionIdentity*>(items[0]) = MbmsSessionIdentity; }
};

typedef OctetString<CONSTRAINED, 3, 3> RABInfov6b0extMbmsServiceIdentity;

class RABInfov6b0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RABInfov6b0ext(): Sequence(&theInfo) {}

	void setRABInfov6b0extMbmsServiceIdentity(const RABInfov6b0extMbmsServiceIdentity& RABInfov6b0extMbmsServiceIdentity) { *static_cast<RABInfov6b0extMbmsServiceIdentity*>(items[0]) = RABInfov6b0extMbmsServiceIdentity; }
};

class RABInfor6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RABInfor6(): Sequence(&theInfo) {}

	void setRabIdentity(const RABIdentity& RabIdentity) { *static_cast<RABIdentity*>(items[0]) = RabIdentity; }
};

class RABInfor7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RABInfor7(): Sequence(&theInfo) {}

	void setRabIdentity(const RABIdentity& RabIdentity) { *static_cast<RABIdentity*>(items[0]) = RabIdentity; }
};

class RABInfoReplace : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RABInfoReplace(): Sequence(&theInfo) {}

	void setRabIdentity(const RABIdentity& RabIdentity) { *static_cast<RABIdentity*>(items[0]) = RabIdentity; }
};

typedef SequenceOf<RABInfo, CONSTRAINED, 1, maxRABsetup> RABInformationList;

typedef SequenceOf<RABInfor6, CONSTRAINED, 1, maxRABsetup> RABInformationListr6;

class RABInformationReconfig : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RABInformationReconfig(): Sequence(&theInfo) {}

	void setRabIdentity(const RABIdentity& RabIdentity) { *static_cast<RABIdentity*>(items[0]) = RabIdentity; }
};

typedef SequenceOf<RABInformationReconfig, CONSTRAINED, 1,  maxRABsetup> RABInformationReconfigList;

class RABInformationReconfigr8 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RABInformationReconfigr8(): Sequence(&theInfo) {}

	void setRabIdentity(const RABIdentity& RabIdentity) { *static_cast<RABIdentity*>(items[0]) = RabIdentity; }
};

typedef SequenceOf<RABInformationReconfigr8, CONSTRAINED, 1, maxRABsetup> RABInformationReconfigListr8;

class RABInfoPost : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RABInfoPost(): Sequence(&theInfo) {}

	void setRabIdentity(const RABIdentity& RabIdentity) { *static_cast<RABIdentity*>(items[0]) = RabIdentity; }
};

class RABInformationMBMSPtp : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RABInformationMBMSPtp(): Sequence(&theInfo) {}

	void setRbIdentity(const RBIdentity& RbIdentity) { *static_cast<RBIdentity*>(items[0]) = RbIdentity; }
};

typedef SequenceOf<RABInformationMBMSPtp, CONSTRAINED, 1, maxMBMSservSelect> RABInformationMBMSPtpList;

class RABInformationSetup : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RABInformationSetup(): Sequence(&theInfo) {}

	void setRabInfo(const RABInfo& RabInfo) { *static_cast<RABInfo*>(items[0]) = RabInfo; }
};

class RABInformationSetupr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RABInformationSetupr4(): Sequence(&theInfo) {}

	void setRabInfo(const RABInfo& RabInfo) { *static_cast<RABInfo*>(items[0]) = RabInfo; }
};

class RABInformationSetupr5 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RABInformationSetupr5(): Sequence(&theInfo) {}

	void setRabInfo(const RABInfo& RabInfo) { *static_cast<RABInfo*>(items[0]) = RabInfo; }
};

class RABInformationSetupr6ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RABInformationSetupr6ext(): Sequence(&theInfo) {}

	void setRabInfor6ext(const RABInfor6ext& RabInfor6ext) { *static_cast<RABInfor6ext*>(items[0]) = RabInfor6ext; }
};

class RABInformationSetupr6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RABInformationSetupr6(): Sequence(&theInfo) {}

	void setRabInfo(const RABInfor6& RabInfo) { *static_cast<RABInfor6*>(items[0]) = RabInfo; }
};

class RABInformationSetupv6b0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RABInformationSetupv6b0ext(): Sequence(&theInfo) {}

	void setRabInfov6b0ext(const RABInfov6b0ext& RabInfov6b0ext) { *static_cast<RABInfov6b0ext*>(items[0]) = RabInfov6b0ext; }
};

class RABInformationSetupr7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RABInformationSetupr7(): Sequence(&theInfo) {}

	void setRabInfo(const RABInfor7& RabInfo) { *static_cast<RABInfor7*>(items[0]) = RabInfo; }
};

class RABInformationSetupr8 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RABInformationSetupr8(): Sequence(&theInfo) {}

	void setRabInfo(const RABInfor7& RabInfo) { *static_cast<RABInfor7*>(items[0]) = RabInfo; }
};


class RABInformationSetupv820ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RABInformationSetupv820ext(): Sequence(&theInfo) {}

	void setCsHSPAInformation(const CSHSPAInformation& CsHSPAInformation) { *static_cast<CSHSPAInformation*>(items[0]) = CsHSPAInformation; }
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

class RBActivationTimeInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RBActivationTimeInfo(): Sequence(&theInfo) {}

	void setRbIdentity(const RBIdentity& RbIdentity) { *static_cast<RBIdentity*>(items[0]) = RbIdentity; }
};

typedef SequenceOf<RBActivationTimeInfo, CONSTRAINED, 1, maxRB> RBActivationTimeInfoList;

class RBCOUNTCInformation : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RBCOUNTCInformation(): Sequence(&theInfo) {}

	void setRbIdentity(const RBIdentity& RbIdentity) { *static_cast<RBIdentity*>(items[0]) = RbIdentity; }
};

typedef SequenceOf<RBCOUNTCInformation, CONSTRAINED, 1, maxRBallRABs> RBCOUNTCInformationList;

class RBCOUNTCMSBInformation : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RBCOUNTCMSBInformation(): Sequence(&theInfo) {}

	void setRbIdentity(const RBIdentity& RbIdentity) { *static_cast<RBIdentity*>(items[0]) = RbIdentity; }
};

typedef SequenceOf<RBCOUNTCMSBInformation, CONSTRAINED, 1, maxRBallRABs> RBCOUNTCMSBInformationList;

typedef SequenceOf<RBIdentity, CONSTRAINED, 1, maxRB> RBIdentityList;

class RBInformationAffected : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RBInformationAffected(): Sequence(&theInfo) {}

	void setRbIdentity(const RBIdentity& RbIdentity) { *static_cast<RBIdentity*>(items[0]) = RbIdentity; }
};

class RBInformationAffectedr5 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RBInformationAffectedr5(): Sequence(&theInfo) {}

	void setRbIdentity(const RBIdentity& RbIdentity) { *static_cast<RBIdentity*>(items[0]) = RbIdentity; }
};

class RBInformationAffectedr6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RBInformationAffectedr6(): Sequence(&theInfo) {}

	void setRbIdentity(const RBIdentity& RbIdentity) { *static_cast<RBIdentity*>(items[0]) = RbIdentity; }
};

class RBInformationAffectedr7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RBInformationAffectedr7(): Sequence(&theInfo) {}

	void setRbIdentity(const RBIdentity& RbIdentity) { *static_cast<RBIdentity*>(items[0]) = RbIdentity; }
};

class RBInformationAffectedr8 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RBInformationAffectedr8(): Sequence(&theInfo) {}

	void setRbIdentity(const RBIdentity& RbIdentity) { *static_cast<RBIdentity*>(items[0]) = RbIdentity; }
};

typedef SequenceOf<RBInformationAffected, CONSTRAINED, 1, maxRB> RBInformationAffectedList;

typedef SequenceOf<RBInformationAffectedr5, CONSTRAINED, 1, maxRB> RBInformationAffectedListr5;

typedef SequenceOf<RBInformationAffectedr6, CONSTRAINED, 1, maxRB> RBInformationAffectedListr6;

typedef SequenceOf<RBInformationAffectedr7, CONSTRAINED, 1, maxRB> RBInformationAffectedListr7;

typedef SequenceOf<RBInformationAffectedr8, CONSTRAINED, 1, maxRB> RBInformationAffectedListr8;

class RBInformationChangedr6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RBInformationChangedr6(): Sequence(&theInfo) {}

	void setRbIdentity(const RBIdentity& RbIdentity) { *static_cast<RBIdentity*>(items[0]) = RbIdentity; }
};

typedef SequenceOf<RBInformationChangedr6, CONSTRAINED, 1, maxRB> RBInformationChangedListr6;

class RBInformationReconfig : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RBInformationReconfig(): Sequence(&theInfo) {}

	void setRbIdentity(const RBIdentity& RbIdentity) { *static_cast<RBIdentity*>(items[0]) = RbIdentity; }
};

class RBInformationReconfigr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RBInformationReconfigr4(): Sequence(&theInfo) {}

	void setRbIdentity(const RBIdentity& RbIdentity) { *static_cast<RBIdentity*>(items[0]) = RbIdentity; }
};

class RBInformationReconfigr5 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RBInformationReconfigr5(): Sequence(&theInfo) {}

	void setRbIdentity(const RBIdentity& RbIdentity) { *static_cast<RBIdentity*>(items[0]) = RbIdentity; }
};

class RBInformationReconfigr6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RBInformationReconfigr6(): Sequence(&theInfo) {}

	void setRbIdentity(const RBIdentity& RbIdentity) { *static_cast<RBIdentity*>(items[0]) = RbIdentity; }
};

class RBInformationReconfigr7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RBInformationReconfigr7(): Sequence(&theInfo) {}

	void setRbIdentity(const RBIdentity& RbIdentity) { *static_cast<RBIdentity*>(items[0]) = RbIdentity; }
};

class RBInformationReconfigr8 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RBInformationReconfigr8(): Sequence(&theInfo) {}

	void setRbIdentity(const RBIdentity& RbIdentity) { *static_cast<RBIdentity*>(items[0]) = RbIdentity; }
};

typedef SequenceOf<RBInformationReconfig, CONSTRAINED, 1, maxRB> RBInformationReconfigList;

typedef SequenceOf<RBInformationReconfigr4, CONSTRAINED, 1, maxRB> RBInformationReconfigListr4;

typedef SequenceOf<RBInformationReconfigr5, CONSTRAINED, 1, maxRB> RBInformationReconfigListr5;

typedef SequenceOf<RBInformationReconfigr6, CONSTRAINED, 1, maxRB> RBInformationReconfigListr6;

typedef SequenceOf<RBInformationReconfigr7, CONSTRAINED, 1, maxRB> RBInformationReconfigListr7;

typedef SequenceOf<RBInformationReconfigr8, CONSTRAINED, 1, maxRB> RBInformationReconfigListr8;

typedef SequenceOf<RBIdentity, CONSTRAINED, 1, maxRB> RBInformationReleaseList;

class RBInformationSetup : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RBInformationSetup(): Sequence(&theInfo) {}

	void setRbIdentity(const RBIdentity& RbIdentity) { *static_cast<RBIdentity*>(items[0]) = RbIdentity; }
};

class RBInformationSetupr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RBInformationSetupr4(): Sequence(&theInfo) {}

	void setRbIdentity(const RBIdentity& RbIdentity) { *static_cast<RBIdentity*>(items[0]) = RbIdentity; }
};

class RBInformationSetupr5 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RBInformationSetupr5(): Sequence(&theInfo) {}

	void setRbIdentity(const RBIdentity& RbIdentity) { *static_cast<RBIdentity*>(items[0]) = RbIdentity; }
};

class RBInformationSetupr6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RBInformationSetupr6(): Sequence(&theInfo) {}

	void setRbIdentity(const RBIdentity& RbIdentity) { *static_cast<RBIdentity*>(items[0]) = RbIdentity; }
};

class RBInformationSetupr7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RBInformationSetupr7(): Sequence(&theInfo) {}

	void setRbIdentity(const RBIdentity& RbIdentity) { *static_cast<RBIdentity*>(items[0]) = RbIdentity; }
};

class RBInformationSetupr8 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RBInformationSetupr8(): Sequence(&theInfo) {}

	void setRbIdentity(const RBIdentity& RbIdentity) { *static_cast<RBIdentity*>(items[0]) = RbIdentity; }
};

typedef SequenceOf<RBInformationSetup, CONSTRAINED, 1, maxRBperRAB> RBInformationSetupList;

typedef SequenceOf<RBInformationSetupr4, CONSTRAINED, 1, maxRBperRAB> RBInformationSetupListr4;

typedef SequenceOf<RBInformationSetupr5, CONSTRAINED, 1, maxRBperRAB> RBInformationSetupListr5;

typedef SequenceOf<RBInformationSetupr6, CONSTRAINED, 1, maxRBperRAB> RBInformationSetupListr6;

typedef SequenceOf<RBInformationSetupr7, CONSTRAINED, 1, maxRBperRAB> RBInformationSetupListr7;

typedef SequenceOf<RBInformationSetupr8, CONSTRAINED, 1, maxRBperRAB> RBInformationSetupListr8;

class ULTransportChannelType : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	ULTransportChannelType(): Choice(&theInfo) {}
};

class ULLogicalChannelMapping : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULLogicalChannelMapping(): Sequence(&theInfo) {}

	void setUlTransportChannelType(const ULTransportChannelType& UlTransportChannelType) { *static_cast<ULTransportChannelType*>(items[0]) = UlTransportChannelType; }
};

class ULLogicalChannelMappings : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	ULLogicalChannelMappings(): Choice(&theInfo) {}
};

class RBMappingOption : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RBMappingOption(): Sequence(&theInfo) {}

	void setUlLogicalChannelMappings(const ULLogicalChannelMappings& UlLogicalChannelMappings) { *static_cast<ULLogicalChannelMappings*>(items[0]) = UlLogicalChannelMappings; }
};

typedef SequenceOf<RBMappingOption, CONSTRAINED, 1, maxRBMuxOptions> RBMappingInfo;

class RBMappingOptionr5 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RBMappingOptionr5(): Sequence(&theInfo) {}

	void setUlLogicalChannelMappings(const ULLogicalChannelMappings& UlLogicalChannelMappings) { *static_cast<ULLogicalChannelMappings*>(items[0]) = UlLogicalChannelMappings; }
};

typedef SequenceOf<RBMappingOptionr5, CONSTRAINED, 1, maxRBMuxOptions> RBMappingInfor5;

class ULLogicalChannelMappingr6UlTrCHTypeDchrachusch : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULLogicalChannelMappingr6UlTrCHTypeDchrachusch(): Sequence(&theInfo) {}

	void setUlTransportChannelType(const ULTransportChannelType& UlTransportChannelType) { *static_cast<ULTransportChannelType*>(items[0]) = UlTransportChannelType; }
};

class ULLogicalChannelMappingr6UlTrCHType : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	ULLogicalChannelMappingr6UlTrCHType(): Choice(&theInfo) {}
};

class ULLogicalChannelMappingr6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULLogicalChannelMappingr6(): Sequence(&theInfo) {}

	void setULLogicalChannelMappingr6UlTrCHType(const ULLogicalChannelMappingr6UlTrCHType& ULLogicalChannelMappingr6UlTrCHType) { *static_cast<ULLogicalChannelMappingr6UlTrCHType*>(items[0]) = ULLogicalChannelMappingr6UlTrCHType; }
};

class ULLogicalChannelMappingsr6 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	ULLogicalChannelMappingsr6(): Choice(&theInfo) {}
};

class RBMappingOptionr6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RBMappingOptionr6(): Sequence(&theInfo) {}

	void setUlLogicalChannelMappings(const ULLogicalChannelMappingsr6& UlLogicalChannelMappings) { *static_cast<ULLogicalChannelMappingsr6*>(items[0]) = UlLogicalChannelMappings; }
};

typedef SequenceOf<RBMappingOptionr6, CONSTRAINED, 1, maxRBMuxOptions> RBMappingInfor6;

class RBMappingOptionr7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RBMappingOptionr7(): Sequence(&theInfo) {}

	void setUlLogicalChannelMappings(const ULLogicalChannelMappingsr6& UlLogicalChannelMappings) { *static_cast<ULLogicalChannelMappingsr6*>(items[0]) = UlLogicalChannelMappings; }
};

typedef SequenceOf<RBMappingOptionr7, CONSTRAINED, 1, maxRBMuxOptions> RBMappingInfor7;

class ULLogicalChannelMappingr8UlTrCHTypeDchrachusch : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULLogicalChannelMappingr8UlTrCHTypeDchrachusch(): Sequence(&theInfo) {}

	void setUlTransportChannelType(const ULTransportChannelType& UlTransportChannelType) { *static_cast<ULTransportChannelType*>(items[0]) = UlTransportChannelType; }
};

class ULLogicalChannelMappingr8UlTrCHType : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	ULLogicalChannelMappingr8UlTrCHType(): Choice(&theInfo) {}
};

class ULLogicalChannelMappingr8 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULLogicalChannelMappingr8(): Sequence(&theInfo) {}

	void setULLogicalChannelMappingr8UlTrCHType(const ULLogicalChannelMappingr8UlTrCHType& ULLogicalChannelMappingr8UlTrCHType) { *static_cast<ULLogicalChannelMappingr8UlTrCHType*>(items[0]) = ULLogicalChannelMappingr8UlTrCHType; }
};

class ULLogicalChannelMappingsr8 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	ULLogicalChannelMappingsr8(): Choice(&theInfo) {}
};

class RBMappingOptionr8 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RBMappingOptionr8(): Sequence(&theInfo) {}

	void setUlLogicalChannelMappings(const ULLogicalChannelMappingsr8& UlLogicalChannelMappings) { *static_cast<ULLogicalChannelMappingsr8*>(items[0]) = UlLogicalChannelMappings; }
};

typedef SequenceOf<RBMappingOptionr8, CONSTRAINED, 1, maxRBMuxOptions> RBMappingInfor8;

class RBPDCPContextRelocation : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RBPDCPContextRelocation(): Sequence(&theInfo) {}

	void setRbIdentity(const RBIdentity& RbIdentity) { *static_cast<RBIdentity*>(items[0]) = RbIdentity; }
};

typedef SequenceOf<RBPDCPContextRelocation, CONSTRAINED, 1, maxRBallRABs> RBPDCPContextRelocationList;

enum RBStopContinueValues {
	StopRB,_RBStopContinue = 0,
};
typedef Enumerated<CONSTRAINED, 0> RBStopContinue;

enum ReceivingWindowSizeValues {
	Rw1,_ReceivingWindowSize = 0,
};
typedef Enumerated<CONSTRAINED, 0> ReceivingWindowSize;

typedef Integer<CONSTRAINED, 1, 3> ROHCProfiler4;

typedef SequenceOf<ROHCProfiler4, CONSTRAINED, 1, maxROHC_Profile_r4> ROHCProfileListr4;

class RFC3095Infor4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RFC3095Infor4(): Sequence(&theInfo) {}

	void setRohcProfileList(const ROHCProfileListr4& RohcProfileList) { *static_cast<ROHCProfileListr4*>(items[0]) = RohcProfileList; }
};

class TransmissionRLCDiscard : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	TransmissionRLCDiscard(): Choice(&theInfo) {}
};

class ULAMRLCMode : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULAMRLCMode(): Sequence(&theInfo) {}

	void setTransmissionRLCDiscard(const TransmissionRLCDiscard& TransmissionRLCDiscard) { *static_cast<TransmissionRLCDiscard*>(items[0]) = TransmissionRLCDiscard; }
};

class ULRLCMode : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	ULRLCMode(): Choice(&theInfo) {}
};

class RLCInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RLCInfo(): Sequence(&theInfo) {}

	void setUlRLCMode(const ULRLCMode& UlRLCMode) { *static_cast<ULRLCMode*>(items[0]) = UlRLCMode; }
};

class RLCInfor6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RLCInfor6(): Sequence(&theInfo) {}

	void setUlRLCMode(const ULRLCMode& UlRLCMode) { *static_cast<ULRLCMode*>(items[0]) = UlRLCMode; }
};

class RLCInfor7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RLCInfor7(): Sequence(&theInfo) {}

	void setUlRLCMode(const ULRLCMode& UlRLCMode) { *static_cast<ULRLCMode*>(items[0]) = UlRLCMode; }
};

class RLCInfoMCCHr6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RLCInfoMCCHr6(): Sequence(&theInfo) {}

	void setDlUMRLCLIsize(const DLUMRLCLIsize& DlUMRLCLIsize) { *static_cast<DLUMRLCLIsize*>(items[0]) = DlUMRLCLIsize; }
};

class RLCInfoMSCHr6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RLCInfoMSCHr6(): Sequence(&theInfo) {}

	void setDlUMRLCLIsize(const DLUMRLCLIsize& DlUMRLCLIsize) { *static_cast<DLUMRLCLIsize*>(items[0]) = DlUMRLCLIsize; }
};

class RLCInfoMTCHr6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RLCInfoMTCHr6(): Sequence(&theInfo) {}

	void setDlUMRLCLIsize(const DLUMRLCLIsize& DlUMRLCLIsize) { *static_cast<DLUMRLCLIsize*>(items[0]) = DlUMRLCLIsize; }
};

class RLCInfoChoice : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	RLCInfoChoice(): Choice(&theInfo) {}
};


class RLCInfoChoicer5 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	RLCInfoChoicer5(): Choice(&theInfo) {}
};

class RLCInfoChoicer6 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	RLCInfoChoicer6(): Choice(&theInfo) {}
};

class RLCInfoChoicer7 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	RLCInfoChoicer7(): Choice(&theInfo) {}
};


enum RLCPDUSizeConstraintlengthIndicatorSizeValues {
	Size7,_RLCPDUSizeConstraintlengthIndicatorSize = 0,
};
typedef Enumerated<CONSTRAINED, 0> RLCPDUSizeConstraintlengthIndicatorSize;

class RLCPDUSizeConstraint : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RLCPDUSizeConstraint(): Sequence(&theInfo) {}

	void setRLCPDUSizeConstraintlengthIndicatorSize(const RLCPDUSizeConstraintlengthIndicatorSize& RLCPDUSizeConstraintlengthIndicatorSize) { *static_cast<RLCPDUSizeConstraintlengthIndicatorSize*>(items[0]) = RLCPDUSizeConstraintlengthIndicatorSize; }
};

typedef SequenceOf<RLCPDUSize, CONSTRAINED, 1, maxRLCPDUsizePerLogChan> RLCPDUSizeList;

typedef Integer<CONSTRAINED, 0, 4095> RLCSequenceNumber;

typedef Integer<CONSTRAINED, 1, maxTF> RLCSizeInfoRlcSizeIndex;

class RLCSizeInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RLCSizeInfo(): Sequence(&theInfo) {}

	void setRLCSizeInfoRlcSizeIndex(const RLCSizeInfoRlcSizeIndex& RLCSizeInfoRlcSizeIndex) { *static_cast<RLCSizeInfoRlcSizeIndex*>(items[0]) = RLCSizeInfoRlcSizeIndex; }
};

typedef SequenceOf<RLCSizeInfo, CONSTRAINED, 1, maxTF> RLCSizeExplicitList;

typedef Integer<CONSTRAINED, 2, 1500> ROHCPacketSizer4;

typedef SequenceOf<ROHCPacketSizer4, CONSTRAINED, 1, maxROHC_PacketSizes_r4> ROHCPacketSizeListr4;


typedef SequenceOf<SRBInformationSetup, CONSTRAINED, 1, maxSRBsetup> SRBInformationSetupList;


typedef SequenceOf<SRBInformationSetupr5, CONSTRAINED, 1, maxSRBsetup> SRBInformationSetupListr5;


typedef SequenceOf<SRBInformationSetupr6, CONSTRAINED, 1, maxSRBsetup> SRBInformationSetupListr6;


typedef SequenceOf<SRBInformationSetupr7, CONSTRAINED, 1, maxSRBsetup> SRBInformationSetupListr7;


typedef SequenceOf<SRBInformationSetupr8, CONSTRAINED, 1, maxSRBsetup> SRBInformationSetupListr8;

typedef SequenceOf<SRBInformationSetup, CONSTRAINED, 3, 4> SRBInformationSetupList2;

typedef SequenceOf<SRBInformationSetupr6, CONSTRAINED, 3, 4> SRBInformationSetupList2r6;

typedef SequenceOf<SRBInformationSetupr7, CONSTRAINED, 3, 4> SRBInformationSetupList2r7;

typedef SequenceOf<SRBInformationSetupr8, CONSTRAINED, 3, 4> SRBInformationSetupList2r8;

enum TimerDARr6Values {
	Ms40,_TimerDARr6 = 0,
};
typedef Enumerated<CONSTRAINED, 0> TimerDARr6;

enum TimerDiscardValues {
	Td01,_TimerDiscard = 0,
};
typedef Enumerated<CONSTRAINED, 0> TimerDiscard;

enum TimerEPCValues {
	Te50,_TimerEPC = 0,
};
typedef Enumerated<CONSTRAINED, 0> TimerEPC;

enum TimerOSDr6Values {
	Ms40,_TimerOSDr6 = 0,
};
typedef Enumerated<CONSTRAINED, 0> TimerOSDr6;

enum TimerPollValues {
	Tp10,_TimerPoll = 0,
};
typedef Enumerated<CONSTRAINED, 0> TimerPoll;

enum TimerPollPeriodicValues {
	Tper100,_TimerPollPeriodic = 0,
};
typedef Enumerated<CONSTRAINED, 0> TimerPollPeriodic;

enum TimerRSTValues {
	Tr50,_TimerRST = 0,
};
typedef Enumerated<CONSTRAINED, 0> TimerRST;

enum TimerStatusPeriodicValues {
	Tsp100,_TimerStatusPeriodic = 0,
};
typedef Enumerated<CONSTRAINED, 0> TimerStatusPeriodic;

enum TransmissionWindowSizeValues {
	Tw1,_TransmissionWindowSize = 0,
};
typedef Enumerated<CONSTRAINED, 0> TransmissionWindowSize;

enum ULAMRRateValues {
	T0,_ULAMRRate = 0,
};
typedef Enumerated<CONSTRAINED, 0> ULAMRRate;

typedef Boolean ULLogicalChannelMappingListRlcLogicalChannelMappingIndicator;

class ULLogicalChannelMappingList : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULLogicalChannelMappingList(): Sequence(&theInfo) {}

	void setULLogicalChannelMappingListRlcLogicalChannelMappingIndicator(const ULLogicalChannelMappingListRlcLogicalChannelMappingIndicator& ULLogicalChannelMappingListRlcLogicalChannelMappingIndicator) { *static_cast<ULLogicalChannelMappingListRlcLogicalChannelMappingIndicator*>(items[0]) = ULLogicalChannelMappingListRlcLogicalChannelMappingIndicator; }
};

typedef Boolean ULLogicalChannelMappingListr6RlcLogicalChannelMappingIndicator;

class ULLogicalChannelMappingListr6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULLogicalChannelMappingListr6(): Sequence(&theInfo) {}

	void setULLogicalChannelMappingListr6RlcLogicalChannelMappingIndicator(const ULLogicalChannelMappingListr6RlcLogicalChannelMappingIndicator& ULLogicalChannelMappingListr6RlcLogicalChannelMappingIndicator) { *static_cast<ULLogicalChannelMappingListr6RlcLogicalChannelMappingIndicator*>(items[0]) = ULLogicalChannelMappingListr6RlcLogicalChannelMappingIndicator; }
};

typedef Boolean ULLogicalChannelMappingListr8RlcLogicalChannelMappingIndicator;

class ULLogicalChannelMappingListr8 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULLogicalChannelMappingListr8(): Sequence(&theInfo) {}

	void setULLogicalChannelMappingListr8RlcLogicalChannelMappingIndicator(const ULLogicalChannelMappingListr8RlcLogicalChannelMappingIndicator& ULLogicalChannelMappingListr8RlcLogicalChannelMappingIndicator) { *static_cast<ULLogicalChannelMappingListr8RlcLogicalChannelMappingIndicator*>(items[0]) = ULLogicalChannelMappingListr8RlcLogicalChannelMappingIndicator; }
};

class ULRFC3095r4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULRFC3095r4(): Sequence(&theInfo) {}

	void setDummy1(const CIDInclusionInfor4& Dummy1) { *static_cast<CIDInclusionInfor4*>(items[0]) = Dummy1; }
};

class ULUMRLCMode : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULUMRLCMode(): Sequence(&theInfo) {}

	void setTransmissionRLCDiscard(const TransmissionRLCDiscard& TransmissionRLCDiscard) { *static_cast<TransmissionRLCDiscard*>(items[0]) = TransmissionRLCDiscard; }
};

class UMRLCDuplAvoidReordInfor6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UMRLCDuplAvoidReordInfor6(): Sequence(&theInfo) {}

	void setTimerDAR(const TimerDARr6& TimerDAR) { *static_cast<TimerDARr6*>(items[0]) = TimerDAR; }
};

enum WindowSizeDARr6Values {
	Ws4,_WindowSizeDARr6 = 0,
};
typedef Enumerated<CONSTRAINED, 0> WindowSizeDARr6;

enum WindowSizeOSDr6Values {
	Ws8,_WindowSizeOSDr6 = 0,
};
typedef Enumerated<CONSTRAINED, 0> WindowSizeOSDr6;

typedef Integer<EXTCONSTRAINED, 0, 7> MAChsAddReconfQueueMachsQueueId;

class MAChsAddReconfQueue : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MAChsAddReconfQueue(): Sequence(&theInfo) {}

	void setMAChsAddReconfQueueMachsQueueId(const MAChsAddReconfQueueMachsQueueId& MAChsAddReconfQueueMachsQueueId) { *static_cast<MAChsAddReconfQueueMachsQueueId*>(items[0]) = MAChsAddReconfQueueMachsQueueId; }
};

typedef SequenceOf<MAChsAddReconfQueue, CONSTRAINED, 1, maxQueueIDs> MAChsAddReconfQueueList;

class AddOrReconfMACdFlow : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	AddOrReconfMACdFlow(): Sequence(&theInfo) {}

	void setMachsAddReconfQueueList(const MAChsAddReconfQueueList& MachsAddReconfQueueList) { *static_cast<MAChsAddReconfQueueList*>(items[0]) = MachsAddReconfQueueList; }
};

typedef Integer<CONSTRAINED, 0, 7> MACehsQueueId;

class MACehsAddReconfReordQ : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MACehsAddReconfReordQ(): Sequence(&theInfo) {}

	void setMacehsQueueId(const MACehsQueueId& MacehsQueueId) { *static_cast<MACehsQueueId*>(items[0]) = MacehsQueueId; }
};

typedef SequenceOf<MACehsAddReconfReordQ, CONSTRAINED, 1, maxQueueIDs> MACehsAddReconfReordQList;

class AddOrReconfMACehsReordQ : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	AddOrReconfMACehsReordQ(): Sequence(&theInfo) {}

	void setMacehsAddReconfQueueList(const MACehsAddReconfReordQList& MacehsAddReconfQueueList) { *static_cast<MACehsAddReconfReordQList*>(items[0]) = MacehsAddReconfQueueList; }
};

class MACehsAddReconfReordQr9 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MACehsAddReconfReordQr9(): Sequence(&theInfo) {}

	void setMacehsQueueId(const MACehsQueueId& MacehsQueueId) { *static_cast<MACehsQueueId*>(items[0]) = MacehsQueueId; }
};

typedef SequenceOf<MACehsAddReconfReordQr9, CONSTRAINED, 1, maxQueueIDs> MACehsAddReconfReordQListr9;

class AddOrReconfMACehsReordQr9 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	AddOrReconfMACehsReordQr9(): Sequence(&theInfo) {}

	void setMacehsAddReconfQueueList(const MACehsAddReconfReordQListr9& MacehsAddReconfQueueList) { *static_cast<MACehsAddReconfReordQListr9*>(items[0]) = MacehsAddReconfQueueList; }
};

typedef Integer<CONSTRAINED, 0, 1023> TFCValue;

typedef SequenceOf<TFCValue, CONSTRAINED, 1, maxTFC> AllowedTFCList;

typedef Integer<CONSTRAINED, 0, 31> AllowedTFIListItem;

typedef SequenceOf<AllowedTFIListItem, CONSTRAINED, 1, maxTF> AllowedTFIList;

typedef Integer<EXTCONSTRAINED, 0, 127> BitModeRLCSizeInfoSizeType1;

class BitModeRLCSizeInfo : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	BitModeRLCSizeInfo(): Choice(&theInfo) {}
};

typedef Integer<CONSTRAINED, -63, 0> BLERQualityValue;

typedef Null ChannelCodingTypeNoCoding;

class ChannelCodingType : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	ChannelCodingType(): Choice(&theInfo) {}
};

enum CodingRateValues {
	Half,_CodingRate = 0,
};
typedef Enumerated<CONSTRAINED, 0> CodingRate;

typedef Integer<CONSTRAINED, 0, maxE_DCHMACdFlow_1> EDCHMACdFlowIdentity;

class CommonEDCHMACdFlow : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CommonEDCHMACdFlow(): Sequence(&theInfo) {}

	void setMacdFlowIdentity(const EDCHMACdFlowIdentity& MacdFlowIdentity) { *static_cast<EDCHMACdFlowIdentity*>(items[0]) = MacdFlowIdentity; }
};

typedef SequenceOf<CommonEDCHMACdFlow, CONSTRAINED, 1, maxE_DCHMACdFlow> CommonEDCHMACdFlowList;

class CommonDynamicTFInfoRlcSize : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	CommonDynamicTFInfoRlcSize(): Choice(&theInfo) {}
};

class CommonDynamicTFInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CommonDynamicTFInfo(): Sequence(&theInfo) {}

	void setCommonDynamicTFInfoRlcSize(const CommonDynamicTFInfoRlcSize& CommonDynamicTFInfoRlcSize) { *static_cast<CommonDynamicTFInfoRlcSize*>(items[0]) = CommonDynamicTFInfoRlcSize; }
};

class CommonDynamicTFInfoDynamicTTICommonTDDChoice : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	CommonDynamicTFInfoDynamicTTICommonTDDChoice(): Choice(&theInfo) {}
};

class CommonDynamicTFInfoDynamicTTI : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CommonDynamicTFInfoDynamicTTI(): Sequence(&theInfo) {}

	void setCommonDynamicTFInfoDynamicTTICommonTDDChoice(const CommonDynamicTFInfoDynamicTTICommonTDDChoice& CommonDynamicTFInfoDynamicTTICommonTDDChoice) { *static_cast<CommonDynamicTFInfoDynamicTTICommonTDDChoice*>(items[0]) = CommonDynamicTFInfoDynamicTTICommonTDDChoice; }
};

typedef SequenceOf<CommonDynamicTFInfo, CONSTRAINED, 1, maxTF> CommonDynamicTFInfoList;

typedef SequenceOf<CommonDynamicTFInfoDynamicTTI, CONSTRAINED, 1, maxTF> CommonDynamicTFInfoListDynamicTTI;

class CommonTransChTFSTti : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	CommonTransChTFSTti(): Choice(&theInfo) {}
};

class CommonTransChTFS : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CommonTransChTFS(): Sequence(&theInfo) {}

	void setCommonTransChTFSTti(const CommonTransChTFSTti& CommonTransChTFSTti) { *static_cast<CommonTransChTFSTti*>(items[0]) = CommonTransChTFSTti; }
};

class CommonTransChTFSLCRTti : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	CommonTransChTFSLCRTti(): Choice(&theInfo) {}
};

class CommonTransChTFSLCR : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CommonTransChTFSLCR(): Sequence(&theInfo) {}

	void setCommonTransChTFSLCRTti(const CommonTransChTFSLCRTti& CommonTransChTFSLCRTti) { *static_cast<CommonTransChTFSLCRTti*>(items[0]) = CommonTransChTFSLCRTti; }
};

class CommonMACehsReorderingQueue : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CommonMACehsReorderingQueue(): Sequence(&theInfo) {}

	void setMacehsQueueId(const MACehsQueueId& MacehsQueueId) { *static_cast<MACehsQueueId*>(items[0]) = MacehsQueueId; }
};

typedef SequenceOf<CommonMACehsReorderingQueue, CONSTRAINED, 1,  maxCommonQueueID> CommonMACehsReorderingQueueList;

typedef Integer<CONSTRAINED, 1, maxCPCHsets> CPCHSetID;

enum CRCSizeValues {
	Crc0,_CRCSize = 0,
};
typedef Enumerated<CONSTRAINED, 0> CRCSize;

class DedicatedDynamicTFInfoRlcSize : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	DedicatedDynamicTFInfoRlcSize(): Choice(&theInfo) {}
};

class DedicatedDynamicTFInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DedicatedDynamicTFInfo(): Sequence(&theInfo) {}

	void setDedicatedDynamicTFInfoRlcSize(const DedicatedDynamicTFInfoRlcSize& DedicatedDynamicTFInfoRlcSize) { *static_cast<DedicatedDynamicTFInfoRlcSize*>(items[0]) = DedicatedDynamicTFInfoRlcSize; }
};

class DedicatedDynamicTFInfoDynamicTTIRlcSize : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	DedicatedDynamicTFInfoDynamicTTIRlcSize(): Choice(&theInfo) {}
};

class DedicatedDynamicTFInfoDynamicTTI : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DedicatedDynamicTFInfoDynamicTTI(): Sequence(&theInfo) {}

	void setDedicatedDynamicTFInfoDynamicTTIRlcSize(const DedicatedDynamicTFInfoDynamicTTIRlcSize& DedicatedDynamicTFInfoDynamicTTIRlcSize) { *static_cast<DedicatedDynamicTFInfoDynamicTTIRlcSize*>(items[0]) = DedicatedDynamicTFInfoDynamicTTIRlcSize; }
};

typedef SequenceOf<DedicatedDynamicTFInfo, CONSTRAINED, 1, maxTF> DedicatedDynamicTFInfoList;

typedef SequenceOf<DedicatedDynamicTFInfoDynamicTTI, CONSTRAINED, 1, maxTF> DedicatedDynamicTFInfoListDynamicTTI;

class DedicatedTransChTFSTti : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	DedicatedTransChTFSTti(): Choice(&theInfo) {}
};

class DedicatedTransChTFS : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DedicatedTransChTFS(): Sequence(&theInfo) {}

	void setDedicatedTransChTFSTti(const DedicatedTransChTFSTti& DedicatedTransChTFSTti) { *static_cast<DedicatedTransChTFSTti*>(items[0]) = DedicatedTransChTFSTti; }
};

enum DLTrCHTypeValues {
	Dch,_DLTrCHType = 0,
};
typedef Enumerated<CONSTRAINED, 0> DLTrCHType;

class DLAddReconfTransChInformation2 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLAddReconfTransChInformation2(): Sequence(&theInfo) {}

	void setDlTransportChannelType(const DLTrCHType& DlTransportChannelType) { *static_cast<DLTrCHType*>(items[0]) = DlTransportChannelType; }
};

typedef SequenceOf<DLAddReconfTransChInformation2, CONSTRAINED, 1, maxTrCHpreconf> DLAddReconfTransChInfo2List;

class DLAddReconfTransChInformation : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLAddReconfTransChInformation(): Sequence(&theInfo) {}

	void setDlTransportChannelType(const DLTrCHType& DlTransportChannelType) { *static_cast<DLTrCHType*>(items[0]) = DlTransportChannelType; }
};

typedef SequenceOf<DLAddReconfTransChInformation, CONSTRAINED, 1, maxTrCHpreconf> DLAddReconfTransChInfoList;

class DLAddReconfTransChInformationr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLAddReconfTransChInformationr4(): Sequence(&theInfo) {}

	void setDlTransportChannelType(const DLTrCHType& DlTransportChannelType) { *static_cast<DLTrCHType*>(items[0]) = DlTransportChannelType; }
};

typedef SequenceOf<DLAddReconfTransChInformationr4, CONSTRAINED, 1, maxTrCHpreconf> DLAddReconfTransChInfoListr4;

class DLTrCHTypeId1r5 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	DLTrCHTypeId1r5(): Choice(&theInfo) {}
};

class DLAddReconfTransChInformationr5 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLAddReconfTransChInformationr5(): Sequence(&theInfo) {}

	void setDlTransportChannelType(const DLTrCHTypeId1r5& DlTransportChannelType) { *static_cast<DLTrCHTypeId1r5*>(items[0]) = DlTransportChannelType; }
};

typedef SequenceOf<DLAddReconfTransChInformationr5, CONSTRAINED, 1, maxTrCHpreconf> DLAddReconfTransChInfoListr5;

class DLAddReconfTransChInformationr7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLAddReconfTransChInformationr7(): Sequence(&theInfo) {}

	void setDlTransportChannelType(const DLTrCHTypeId1r5& DlTransportChannelType) { *static_cast<DLTrCHTypeId1r5*>(items[0]) = DlTransportChannelType; }
};

typedef SequenceOf<DLAddReconfTransChInformationr7, CONSTRAINED, 1, maxTrCHpreconf> DLAddReconfTransChInfoListr7;

class DLAddReconfTransChInformationr9 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLAddReconfTransChInformationr9(): Sequence(&theInfo) {}

	void setDlTransportChannelType(const DLTrCHTypeId1r5& DlTransportChannelType) { *static_cast<DLTrCHTypeId1r5*>(items[0]) = DlTransportChannelType; }
};

typedef SequenceOf<DLAddReconfTransChInformationr9, CONSTRAINED, 1, maxTrCHpreconf> DLAddReconfTransChInfoListr9;

class TFCSReconfAddCtfcSizeCtfc2Bit : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	TFCSReconfAddCtfcSizeCtfc2Bit(): Sequence(&theInfo) {}

};

class TFCSReconfAddCtfcSize : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	TFCSReconfAddCtfcSize(): Choice(&theInfo) {}
};

class TFCSReconfAdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	TFCSReconfAdd(): Sequence(&theInfo) {}

	void setTFCSReconfAddCtfcSize(const TFCSReconfAddCtfcSize& TFCSReconfAddCtfcSize) { *static_cast<TFCSReconfAddCtfcSize*>(items[0]) = TFCSReconfAddCtfcSize; }
};

class ExplicitTFCSConfiguration : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	ExplicitTFCSConfiguration(): Choice(&theInfo) {}
};

class TFCS : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	TFCS(): Choice(&theInfo) {}
};

class DLCommonTransChInfor4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLCommonTransChInfor4(): Sequence(&theInfo) {}

	void setSccpchTFCS(const TFCS& SccpchTFCS) { *static_cast<TFCS*>(items[0]) = SccpchTFCS; }
};

class DLTransportChannelIdentity : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLTransportChannelIdentity(): Sequence(&theInfo) {}

	void setDlTransportChannelType(const DLTrCHType& DlTransportChannelType) { *static_cast<DLTrCHType*>(items[0]) = DlTransportChannelType; }
};

typedef SequenceOf<DLTransportChannelIdentity, CONSTRAINED, 1, maxTrCH> DLDeletedTransChInfoList;

class DLTrCHTypeId2r5 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	DLTrCHTypeId2r5(): Choice(&theInfo) {}
};

class DLTransportChannelIdentityr5 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLTransportChannelIdentityr5(): Sequence(&theInfo) {}

	void setDlTransportChannelType(const DLTrCHTypeId2r5& DlTransportChannelType) { *static_cast<DLTrCHTypeId2r5*>(items[0]) = DlTransportChannelType; }
};

typedef SequenceOf<DLTransportChannelIdentityr5, CONSTRAINED, 1, maxTrCH> DLDeletedTransChInfoListr5;

class DLTrCHTypeId2r7 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	DLTrCHTypeId2r7(): Choice(&theInfo) {}
};

class DLTransportChannelIdentityr7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLTransportChannelIdentityr7(): Sequence(&theInfo) {}

	void setDlTransportChannelType(const DLTrCHTypeId2r7& DlTransportChannelType) { *static_cast<DLTrCHTypeId2r7*>(items[0]) = DlTransportChannelType; }
};

typedef SequenceOf<DLTransportChannelIdentityr7, CONSTRAINED, 1, maxTrCH> DLDeletedTransChInfoListr7;

typedef Integer<CONSTRAINED, 1, maxDRACclasses> DRACClassIdentity;

typedef Integer<CONSTRAINED, 1, 256> TransmissionTimeValidity;

class DRACStaticInformation : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DRACStaticInformation(): Sequence(&theInfo) {}

	void setTransmissionTimeValidity(const TransmissionTimeValidity& TransmissionTimeValidity) { *static_cast<TransmissionTimeValidity*>(items[0]) = TransmissionTimeValidity; }
};

typedef SequenceOf<DRACStaticInformation, CONSTRAINED, 1, maxTrCH> DRACStaticInformationList;

class EDCHAddReconfMACdFlow : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EDCHAddReconfMACdFlow(): Sequence(&theInfo) {}

	void setMacdFlowIdentity(const EDCHMACdFlowIdentity& MacdFlowIdentity) { *static_cast<EDCHMACdFlowIdentity*>(items[0]) = MacdFlowIdentity; }
};

class EDCHAddReconfMACdFlowr7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EDCHAddReconfMACdFlowr7(): Sequence(&theInfo) {}

	void setMacdFlowIdentity(const EDCHMACdFlowIdentity& MacdFlowIdentity) { *static_cast<EDCHMACdFlowIdentity*>(items[0]) = MacdFlowIdentity; }
};

typedef SequenceOf<EDCHAddReconfMACdFlow, CONSTRAINED, 1, maxE_DCHMACdFlow> EDCHAddReconfMACdFlowList;

typedef SequenceOf<EDCHAddReconfMACdFlowr7, CONSTRAINED, 1, maxE_DCHMACdFlow> EDCHAddReconfMACdFlowListr7;

typedef Integer<CONSTRAINED, 0, 15> EDCHMACdFlowMaxRetrans;

typedef BitString<CONSTRAINED, maxE_DCHMACdFlow, maxE_DCHMACdFlow> EDCHMACdFlowMultiplexingList;

typedef Integer<CONSTRAINED, 0, 6> EDCHMACdFlowPowerOffset;

enum EDCHMACdFlowRetransTimerValues {
	Ms10,_EDCHMACdFlowRetransTimer = 0,
};
typedef Enumerated<CONSTRAINED, 0> EDCHMACdFlowRetransTimer;

enum EDCHTTIValues {
	Tti2,_EDCHTTI = 0,
};
typedef Enumerated<CONSTRAINED, 0> EDCHTTI;

typedef Integer<CONSTRAINED, 0, 15> GainFactor;

class SignalledGainFactorsModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SignalledGainFactorsModeSpecificInfoFdd(): Sequence(&theInfo) {}

	void setGainFactorBetaC(const GainFactor& GainFactorBetaC) { *static_cast<GainFactor*>(items[0]) = GainFactorBetaC; }
};

class SignalledGainFactorsModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	SignalledGainFactorsModeSpecificInfo(): Choice(&theInfo) {}
};

class SignalledGainFactors : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SignalledGainFactors(): Sequence(&theInfo) {}

	void setSignalledGainFactorsModeSpecificInfo(const SignalledGainFactorsModeSpecificInfo& SignalledGainFactorsModeSpecificInfo) { *static_cast<SignalledGainFactorsModeSpecificInfo*>(items[0]) = SignalledGainFactorsModeSpecificInfo; }
};

class GainFactorInformation : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	GainFactorInformation(): Choice(&theInfo) {}
};

typedef Integer<EXTCONSTRAINED, SIZE (1, maxHProcesses> HARQInfoNumberOfProcesses;

class HARQInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HARQInfo(): Sequence(&theInfo) {}

	void setHARQInfoNumberOfProcesses(const HARQInfoNumberOfProcesses& HARQInfoNumberOfProcesses) { *static_cast<HARQInfoNumberOfProcesses*>(items[0]) = HARQInfoNumberOfProcesses; }
};

class HSDSCHInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HSDSCHInfo(): Sequence(&theInfo) {}

	void setHarqInfo(const HARQInfo& HarqInfo) { *static_cast<HARQInfo*>(items[0]) = HarqInfo; }
};

enum HARQInfor7numberOfProcessesValues {
	N1,_HARQInfor7numberOfProcesses = 0,
};
typedef Enumerated<CONSTRAINED, 0> HARQInfor7numberOfProcesses;

class HARQInfor7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HARQInfor7(): Sequence(&theInfo) {}

	void setHARQInfor7numberOfProcesses(const HARQInfor7numberOfProcesses& HARQInfor7numberOfProcesses) { *static_cast<HARQInfor7numberOfProcesses*>(items[0]) = HARQInfor7numberOfProcesses; }
};

class HSDSCHInfor7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HSDSCHInfor7(): Sequence(&theInfo) {}

	void setHarqInfo(const HARQInfor7& HarqInfo) { *static_cast<HARQInfor7*>(items[0]) = HarqInfo; }
};

class HSDSCHInfor9 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HSDSCHInfor9(): Sequence(&theInfo) {}

	void setHarqInfo(const HARQInfor7& HarqInfo) { *static_cast<HARQInfor7*>(items[0]) = HarqInfo; }
};

enum HARQMemorySizeValues {
	Hms800,_HARQMemorySize = 0,
};
typedef Enumerated<CONSTRAINED, 0> HARQMemorySize;

typedef Integer<CONSTRAINED, 1, 8> TFCSIdentityPlain;

class TFCSIdentity : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	TFCSIdentity(): Sequence(&theInfo) {}

	void setTfcsID(const TFCSIdentityPlain& TfcsID) { *static_cast<TFCSIdentityPlain*>(items[0]) = TfcsID; }
};

class IndividualDLCCTrCHInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IndividualDLCCTrCHInfo(): Sequence(&theInfo) {}

	void setDlTFCSIdentity(const TFCSIdentity& DlTFCSIdentity) { *static_cast<TFCSIdentity*>(items[0]) = DlTFCSIdentity; }
};

typedef SequenceOf<IndividualDLCCTrCHInfo, CONSTRAINED, 1, maxCCTrCH> IndividualDLCCTrCHInfoList;

class IndividualULCCTrCHInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IndividualULCCTrCHInfo(): Sequence(&theInfo) {}

	void setUlTFCSIdentity(const TFCSIdentity& UlTFCSIdentity) { *static_cast<TFCSIdentity*>(items[0]) = UlTFCSIdentity; }
};

typedef SequenceOf<IndividualULCCTrCHInfo, CONSTRAINED, 1, maxCCTrCH> IndividualULCCTrCHInfoList;

class LogicalChannelByRB : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	LogicalChannelByRB(): Sequence(&theInfo) {}

	void setRbIdentity(const RBIdentity& RbIdentity) { *static_cast<RBIdentity*>(items[0]) = RbIdentity; }
};

typedef Null LogicalChannelListAllSizes;

class LogicalChannelList : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	LogicalChannelList(): Choice(&theInfo) {}
};

class MACdFlowIdentityDCHandHSDSCH : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MACdFlowIdentityDCHandHSDSCH(): Sequence(&theInfo) {}

	void setDchtransportchid(const TransportChannelIdentity& Dchtransportchid) { *static_cast<TransportChannelIdentity*>(items[0]) = Dchtransportchid; }
};

typedef Integer<CONSTRAINED, 0, 7> MACdFlowIdentity;

typedef Integer<EXTCONSTRAINED, 1, 5000> MACdPDUsizeInfoMacdPDUSize;

class MACdPDUsizeInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MACdPDUsizeInfo(): Sequence(&theInfo) {}

	void setMACdPDUsizeInfoMacdPDUSize(const MACdPDUsizeInfoMacdPDUSize& MACdPDUsizeInfoMacdPDUSize) { *static_cast<MACdPDUsizeInfoMacdPDUSize*>(items[0]) = MACdPDUsizeInfoMacdPDUSize; }
};

typedef SequenceOf<MACdPDUsizeInfo, CONSTRAINED, 1,  maxMAC_d_PDUsizes> MACdPDUSizeInfoList;

typedef Integer<CONSTRAINED, 0, 7> MAChsDelQueueMachsQueueId;

class MAChsDelQueue : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MAChsDelQueue(): Sequence(&theInfo) {}

	void setMAChsDelQueueMachsQueueId(const MAChsDelQueueMachsQueueId& MAChsDelQueueMachsQueueId) { *static_cast<MAChsDelQueueMachsQueueId*>(items[0]) = MAChsDelQueueMachsQueueId; }
};

typedef SequenceOf<MAChsDelQueue, CONSTRAINED, 1, maxQueueIDs> MAChsDelQueueList;

class MACehsDelReordQ : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MACehsDelReordQ(): Sequence(&theInfo) {}

	void setMacehsQueueId(const MACehsQueueId& MacehsQueueId) { *static_cast<MACehsQueueId*>(items[0]) = MacehsQueueId; }
};

typedef SequenceOf<MACehsDelReordQ, CONSTRAINED, 1, maxQueueIDs> MACehsDelReordQList;

class MACehsQueueIdDCHandHSDSCH : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MACehsQueueIdDCHandHSDSCH(): Sequence(&theInfo) {}

	void setDchtransportchid(const TransportChannelIdentity& Dchtransportchid) { *static_cast<TransportChannelIdentity*>(items[0]) = Dchtransportchid; }
};

enum MAChsWindowSizeValues {
	Mws4,_MAChsWindowSize = 0,
};
typedef Enumerated<CONSTRAINED, 0> MAChsWindowSize;

class NumberOfTbSizeAndTTIList : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	NumberOfTbSizeAndTTIList(): Sequence(&theInfo) {}

};

enum MessTypeValues {
	transportFormatCombinationControl_MessType = 0,
};
typedef Enumerated<CONSTRAINED, 0> MessType;

typedef SequenceOf<TFCValue, CONSTRAINED, 1, maxTFC> NonallowedTFCList;

typedef Null NumberOfTransportBlocksZero;

class NumberOfTransportBlocks : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	NumberOfTransportBlocks(): Choice(&theInfo) {}
};

typedef Integer<EXTCONSTRAINED, 0, 31> OctetModeRLCSizeInfoType2SizeType1;

class OctetModeRLCSizeInfoType2 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	OctetModeRLCSizeInfoType2(): Choice(&theInfo) {}
};

class PowerOffsetInfoShort : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PowerOffsetInfoShort(): Sequence(&theInfo) {}

	void setReferenceTFC(const TFCValue& ReferenceTFC) { *static_cast<TFCValue*>(items[0]) = ReferenceTFC; }
};

class PowerOffsetInformation : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PowerOffsetInformation(): Sequence(&theInfo) {}

	void setGainFactorInformation(const GainFactorInformation& GainFactorInformation) { *static_cast<GainFactorInformation*>(items[0]) = GainFactorInformation; }
};

typedef Integer<CONSTRAINED, -5, 10> PowerOffsetPpm;

class TFCSubset : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	TFCSubset(): Choice(&theInfo) {}
};

class ULCommonTransChInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULCommonTransChInfo(): Sequence(&theInfo) {}

	void setTfcSubset(const TFCSubset& TfcSubset) { *static_cast<TFCSubset*>(items[0]) = TfcSubset; }
};

class PreDefTransChConfiguration : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PreDefTransChConfiguration(): Sequence(&theInfo) {}

	void setUlCommonTransChInfo(const ULCommonTransChInfo& UlCommonTransChInfo) { *static_cast<ULCommonTransChInfo*>(items[0]) = UlCommonTransChInfo; }
};

class QualityTarget : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	QualityTarget(): Sequence(&theInfo) {}

	void setBlerQualityValue(const BLERQualityValue& BlerQualityValue) { *static_cast<BLERQualityValue*>(items[0]) = BlerQualityValue; }
};

typedef Integer<CONSTRAINED, 1, hiRM> RateMatchingAttribute;

typedef Integer<CONSTRAINED, 0, 3> ReferenceTFCID;

enum ULTrCHTypeValues {
	Dch,_ULTrCHType = 0,
};
typedef Enumerated<CONSTRAINED, 0> ULTrCHType;

class RestrictedTrChInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RestrictedTrChInfo(): Sequence(&theInfo) {}

	void setUlTransportChannelType(const ULTrCHType& UlTransportChannelType) { *static_cast<ULTrCHType*>(items[0]) = UlTransportChannelType; }
};

typedef SequenceOf<RestrictedTrChInfo, CONSTRAINED, 1, maxTrCH> RestrictedTrChInfoList;

class SemistaticTFInformation : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SemistaticTFInformation(): Sequence(&theInfo) {}

	void setChannelCodingType(const ChannelCodingType& ChannelCodingType) { *static_cast<ChannelCodingType*>(items[0]) = ChannelCodingType; }
};

enum SplitTypeValues {
	HardSplit,_SplitType = 0,
};
typedef Enumerated<CONSTRAINED, 0> SplitType;

class SplitTFCISignalling : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SplitTFCISignalling(): Sequence(&theInfo) {}

	void setSplitType(const SplitType& SplitType) { *static_cast<SplitType*>(items[0]) = SplitType; }
};

enum T1ReleaseTimerValues {
	Rt10,_T1ReleaseTimer = 0,
};
typedef Enumerated<CONSTRAINED, 0> T1ReleaseTimer;

class TFCSubsetList : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	TFCSubsetList(): Sequence(&theInfo) {}

};

typedef Integer<EXTCONSTRAINED, 1, 1023> TFCIRangeMaxTFCIField2Value;

class TFCIRange : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	TFCIRange(): Sequence(&theInfo) {}

	void setTFCIRangeMaxTFCIField2Value(const TFCIRangeMaxTFCIField2Value& TFCIRangeMaxTFCIField2Value) { *static_cast<TFCIRangeMaxTFCIField2Value*>(items[0]) = TFCIRangeMaxTFCIField2Value; }
};

typedef SequenceOf<TFCIRange, CONSTRAINED, 1, maxPDSCH_TFCIgroups> TFCIRangeList;

class TFCIField2Information : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	TFCIField2Information(): Choice(&theInfo) {}
};

typedef Integer<EXTCONSTRAINED, 0, 3> TFCSInfoForDSCHCtfc2bit;

class TFCSInfoForDSCH : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	TFCSInfoForDSCH(): Choice(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 1023> TFCSRemovalTfci;

class TFCSRemoval : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	TFCSRemoval(): Sequence(&theInfo) {}

	void setTFCSRemovalTfci(const TFCSRemovalTfci& TFCSRemovalTfci) { *static_cast<TFCSRemovalTfci*>(items[0]) = TFCSRemovalTfci; }
};

typedef SequenceOf<TFCSRemoval, CONSTRAINED, 1, maxTFC> TFCSRemovalList;

typedef Integer<CONSTRAINED, 1, 256> TimeDurationBeforeRetry;

class TMSignallingInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	TMSignallingInfo(): Sequence(&theInfo) {}

	void setMessType(const MessType& MessType) { *static_cast<MessType*>(items[0]) = MessType; }
};

enum TransmissionTimeIntervalValues {
	Tti10,_TransmissionTimeInterval = 0,
};
typedef Enumerated<CONSTRAINED, 0> TransmissionTimeInterval;

class TransportChannelIdentityDCHandDSCH : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	TransportChannelIdentityDCHandDSCH(): Sequence(&theInfo) {}

	void setDchtransportchid(const TransportChannelIdentity& Dchtransportchid) { *static_cast<TransportChannelIdentity*>(items[0]) = Dchtransportchid; }
};

class TransportFormatSet : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	TransportFormatSet(): Choice(&theInfo) {}
};

class TransportFormatSetLCR : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	TransportFormatSetLCR(): Choice(&theInfo) {}
};

enum TresetResetTimerValues {
	Rt1,_TresetResetTimer = 0,
};
typedef Enumerated<CONSTRAINED, 0> TresetResetTimer;

class ULAddReconfTransChInformation : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULAddReconfTransChInformation(): Sequence(&theInfo) {}

	void setUlTransportChannelType(const ULTrCHType& UlTransportChannelType) { *static_cast<ULTrCHType*>(items[0]) = UlTransportChannelType; }
};

typedef SequenceOf<ULAddReconfTransChInformation, CONSTRAINED, 1, maxTrCHpreconf> ULAddReconfTransChInfoList;

class ULAddReconfTransChInformationr6Dchusch : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULAddReconfTransChInformationr6Dchusch(): Sequence(&theInfo) {}

	void setUlTransportChannelType(const ULTrCHType& UlTransportChannelType) { *static_cast<ULTrCHType*>(items[0]) = UlTransportChannelType; }
};

class ULAddReconfTransChInformationr6 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	ULAddReconfTransChInformationr6(): Choice(&theInfo) {}
};

typedef SequenceOf<ULAddReconfTransChInformationr6, CONSTRAINED, 1, maxTrCH> ULAddReconfTransChInfoListr6;

class ULAddReconfTransChInformationr7Dchusch : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULAddReconfTransChInformationr7Dchusch(): Sequence(&theInfo) {}

	void setUlTransportChannelType(const ULTrCHType& UlTransportChannelType) { *static_cast<ULTrCHType*>(items[0]) = UlTransportChannelType; }
};

class ULAddReconfTransChInformationr7 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	ULAddReconfTransChInformationr7(): Choice(&theInfo) {}
};

typedef SequenceOf<ULAddReconfTransChInformationr7, CONSTRAINED, 1, maxTrCH> ULAddReconfTransChInfoListr7;

class ULAddReconfTransChInformationr8Dchusch : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULAddReconfTransChInformationr8Dchusch(): Sequence(&theInfo) {}

	void setUlTransportChannelType(const ULTrCHType& UlTransportChannelType) { *static_cast<ULTrCHType*>(items[0]) = UlTransportChannelType; }
};

class ULAddReconfTransChInformationr8 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	ULAddReconfTransChInformationr8(): Choice(&theInfo) {}
};

typedef SequenceOf<ULAddReconfTransChInformationr8, CONSTRAINED, 1, maxTrCH> ULAddReconfTransChInfoListr8;

class ULCommonTransChInfor4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULCommonTransChInfor4(): Sequence(&theInfo) {}

	void setTfcSubset(const TFCSubset& TfcSubset) { *static_cast<TFCSubset*>(items[0]) = TfcSubset; }
};

typedef SequenceOf<TransportChannelIdentity, CONSTRAINED, 1, maxTrCH> ULControlledTrChList;

class ULTransportChannelIdentity : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULTransportChannelIdentity(): Sequence(&theInfo) {}

	void setUlTransportChannelType(const ULTrCHType& UlTransportChannelType) { *static_cast<ULTrCHType*>(items[0]) = UlTransportChannelType; }
};

typedef SequenceOf<ULTransportChannelIdentity, CONSTRAINED, 1, maxTrCH> ULDeletedTransChInfoList;

class ULTransportChannelIdentityr6Dchusch : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULTransportChannelIdentityr6Dchusch(): Sequence(&theInfo) {}

	void setUlTransportChannelType(const ULTrCHType& UlTransportChannelType) { *static_cast<ULTrCHType*>(items[0]) = UlTransportChannelType; }
};

class ULTransportChannelIdentityr6 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	ULTransportChannelIdentityr6(): Choice(&theInfo) {}
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

typedef Integer<EXTCONSTRAINED, 0, 15> AccessServiceClassFDDAvailableSignatureStartIndex;

class AccessServiceClassFDD : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	AccessServiceClassFDD(): Sequence(&theInfo) {}

	void setAccessServiceClassFDDAvailableSignatureStartIndex(const AccessServiceClassFDDAvailableSignatureStartIndex& AccessServiceClassFDDAvailableSignatureStartIndex) { *static_cast<AccessServiceClassFDDAvailableSignatureStartIndex*>(items[0]) = AccessServiceClassFDDAvailableSignatureStartIndex; }
};

typedef BitString<EXTCONSTRAINED, 8, 8> AccessServiceClassTDDChannelisationCodeIndices;

class AccessServiceClassTDD : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	AccessServiceClassTDD(): Sequence(&theInfo) {}

	void setAccessServiceClassTDDChannelisationCodeIndices(const AccessServiceClassTDDChannelisationCodeIndices& AccessServiceClassTDDChannelisationCodeIndices) { *static_cast<AccessServiceClassTDDChannelisationCodeIndices*>(items[0]) = AccessServiceClassTDDChannelisationCodeIndices; }
};

typedef BitString<EXTCONSTRAINED, 16, 16> AccessServiceClassTDDr7ChannelisationCodeIndices;

class AccessServiceClassTDDr7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	AccessServiceClassTDDr7(): Sequence(&theInfo) {}

	void setAccessServiceClassTDDr7ChannelisationCodeIndices(const AccessServiceClassTDDr7ChannelisationCodeIndices& AccessServiceClassTDDr7ChannelisationCodeIndices) { *static_cast<AccessServiceClassTDDr7ChannelisationCodeIndices*>(items[0]) = AccessServiceClassTDDr7ChannelisationCodeIndices; }
};

typedef BitString<EXTCONSTRAINED, 8, 8> AccessServiceClassTDDLCRr4AvailableSYNCUlCodesIndics;

class AccessServiceClassTDDLCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	AccessServiceClassTDDLCRr4(): Sequence(&theInfo) {}

	void setAccessServiceClassTDDLCRr4AvailableSYNCUlCodesIndics(const AccessServiceClassTDDLCRr4AvailableSYNCUlCodesIndics& AccessServiceClassTDDLCRr4AvailableSYNCUlCodesIndics) { *static_cast<AccessServiceClassTDDLCRr4AvailableSYNCUlCodesIndics*>(items[0]) = AccessServiceClassTDDLCRr4AvailableSYNCUlCodesIndics; }
};

typedef Integer<CONSTRAINED, 0 ,  255> ActivationTimeOffset;

class AdditionalPRACHTFandTFCSCCCHIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	AdditionalPRACHTFandTFCSCCCHIEs(): Sequence(&theInfo) {}

	void setPowerOffsetInformation(const PowerOffsetInformation& PowerOffsetInformation) { *static_cast<PowerOffsetInformation*>(items[0]) = PowerOffsetInformation; }
};

class AdditionalPRACHTFandTFCSCCCH : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	AdditionalPRACHTFandTFCSCCCH(): Sequence(&theInfo) {}

	void setAdditionalPRACHTFandTFCSCCCHIEs(const AdditionalPRACHTFandTFCSCCCHIEs& AdditionalPRACHTFandTFCSCCCHIEs) { *static_cast<AdditionalPRACHTFandTFCSCCCHIEs*>(items[0]) = AdditionalPRACHTFandTFCSCCCHIEs; }
};

typedef SequenceOf<AdditionalPRACHTFandTFCSCCCH, CONSTRAINED, 1, maxPRACH> AdditionalPRACHTFandTFCSCCCHList;

typedef Integer<CONSTRAINED, 0, 255> ChannelisationCode256;

class AICHInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	AICHInfo(): Sequence(&theInfo) {}

	void setChannelisationCode256(const ChannelisationCode256& ChannelisationCode256) { *static_cast<ChannelisationCode256*>(items[0]) = ChannelisationCode256; }
};

typedef Integer<CONSTRAINED, -22, 5> AICHPowerOffset;

enum AICHTransmissionTimingValues {
	E0,_AICHTransmissionTiming = 0,
};
typedef Enumerated<CONSTRAINED, 0> AICHTransmissionTiming;

typedef Integer<EXTCONSTRAINED, 0, 255> AllocationPeriodInfoAllocationActivationTime;

class AllocationPeriodInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	AllocationPeriodInfo(): Sequence(&theInfo) {}

	void setAllocationPeriodInfoAllocationActivationTime(const AllocationPeriodInfoAllocationActivationTime& AllocationPeriodInfoAllocationActivationTime) { *static_cast<AllocationPeriodInfoAllocationActivationTime*>(items[0]) = AllocationPeriodInfoAllocationActivationTime; }
};

typedef Integer<CONSTRAINED, 0, 8> Alpha;

typedef Integer<CONSTRAINED, 0, 255> APAICHChannelisationCode;

typedef Integer<CONSTRAINED, 0, 79> APPreambleScramblingCode;

typedef Integer<CONSTRAINED, 0, 15> APSignature;

class APSignatureVCAM : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	APSignatureVCAM(): Sequence(&theInfo) {}

	void setApSignature(const APSignature& ApSignature) { *static_cast<APSignature*>(items[0]) = ApSignature; }
};

typedef Integer<CONSTRAINED, 0, 11> APSubchannel;

class ASCSettingFDD : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ASCSettingFDD(): Sequence(&theInfo) {}

	void setAccessServiceClassFDD(const AccessServiceClassFDD& AccessServiceClassFDD) { *static_cast<AccessServiceClassFDD*>(items[0]) = AccessServiceClassFDD; }
};

class ASCSettingTDD : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ASCSettingTDD(): Sequence(&theInfo) {}

	void setAccessServiceClassTDD(const AccessServiceClassTDD& AccessServiceClassTDD) { *static_cast<AccessServiceClassTDD*>(items[0]) = AccessServiceClassTDD; }
};

class ASCSettingTDDr7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ASCSettingTDDr7(): Sequence(&theInfo) {}

	void setAccessServiceClassTDD(const AccessServiceClassTDDr7& AccessServiceClassTDD) { *static_cast<AccessServiceClassTDDr7*>(items[0]) = AccessServiceClassTDD; }
};

class ASCSettingTDDLCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ASCSettingTDDLCRr4(): Sequence(&theInfo) {}

	void setAccessServiceClassTDDLCR(const AccessServiceClassTDDLCRr4& AccessServiceClassTDDLCR) { *static_cast<AccessServiceClassTDDLCRr4*>(items[0]) = AccessServiceClassTDDLCR; }
};

typedef SequenceOf<APSignatureVCAM, CONSTRAINED, 1, maxPCPCH_APsig> AvailableAPSignatureVCAMList;

typedef SequenceOf<APSignature, CONSTRAINED, 1, maxPCPCH_APsig> AvailableAPSignatureList;

typedef SequenceOf<APSubchannel, CONSTRAINED, 1, maxPCPCH_APsubCh> AvailableAPSubchannelList;

enum MinimumSpreadingFactorValues {
	Sf4,_MinimumSpreadingFactor = 0,
};
typedef Enumerated<CONSTRAINED, 0> MinimumSpreadingFactor;

class AvailableMinimumSFVCAM : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	AvailableMinimumSFVCAM(): Sequence(&theInfo) {}

	void setMinimumSpreadingFactor(const MinimumSpreadingFactor& MinimumSpreadingFactor) { *static_cast<MinimumSpreadingFactor*>(items[0]) = MinimumSpreadingFactor; }
};

typedef SequenceOf<AvailableMinimumSFVCAM, CONSTRAINED, 1, maxPCPCH_SF> AvailableMinimumSFListVCAM;

typedef BitString<CONSTRAINED, 16, 16> AvailableSignatures;

typedef BitString<CONSTRAINED, 12, 12> AvailableSubChannelNumbers;

enum BEACONPLEstValues {
	true_BEACONPLEst = 0,
};
typedef Enumerated<CONSTRAINED, 0> BEACONPLEst;

enum BurstTypeValues {
	Type1,_BurstType = 0,
};
typedef Enumerated<CONSTRAINED, 0> BurstType;

typedef Integer<CONSTRAINED, -63, 0> BlerTarget;

typedef Integer<CONSTRAINED, 0, 11> CDAccessSlotSubchannel;

typedef SequenceOf<CDAccessSlotSubchannel, CONSTRAINED, 1, maxPCPCH_CDsubCh> CDAccessSlotSubchannelList;

typedef Integer<CONSTRAINED, 0, 255> CDCAICHChannelisationCode;

typedef Integer<CONSTRAINED, 0, 79> CDPreambleScramblingCode;

typedef Integer<CONSTRAINED, 0, 15> CDSignatureCode;

typedef SequenceOf<CDSignatureCode, CONSTRAINED, 1, maxPCPCH_CDsig> CDSignatureCodeList;

class CellAndChannelIdentity : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellAndChannelIdentity(): Sequence(&theInfo) {}

	void setBurstType(const BurstType& BurstType) { *static_cast<BurstType*>(items[0]) = BurstType; }
};

typedef Integer<CONSTRAINED, 0, 127> CellParametersID;

typedef Integer<CONSTRAINED, 0, 255> Cfntargetsfnframeoffset;

typedef Null ChannelAssignmentActiveNotActive;

class ChannelAssignmentActive : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	ChannelAssignmentActive(): Choice(&theInfo) {}
};

class ChannelReqParamsForUCSM : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ChannelReqParamsForUCSM(): Sequence(&theInfo) {}

	void setAvailableAPSignatureList(const AvailableAPSignatureList& AvailableAPSignatureList) { *static_cast<AvailableAPSignatureList*>(items[0]) = AvailableAPSignatureList; }
};

enum ClosedLoopTimingAdjModeValues {
	Slot1,_ClosedLoopTimingAdjMode = 0,
};
typedef Enumerated<CONSTRAINED, 0> ClosedLoopTimingAdjMode;

typedef Integer<CONSTRAINED, 0, 255> CodeNumberDSCH;

enum SFPDSCHValues {
	Sfp4,_SFPDSCH = 0,
};
typedef Enumerated<CONSTRAINED, 0> SFPDSCH;

class PDSCHCodeMap : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PDSCHCodeMap(): Sequence(&theInfo) {}

	void setSpreadingFactor(const SFPDSCH& SpreadingFactor) { *static_cast<SFPDSCH*>(items[0]) = SpreadingFactor; }
};

typedef SequenceOf<PDSCHCodeMap, CONSTRAINED, 1, maxPDSCH_TFCIgroups> PDSCHCodeMapList;

class CodeRange : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CodeRange(): Sequence(&theInfo) {}

	void setPdschCodeMapList(const PDSCHCodeMapList& PdschCodeMapList) { *static_cast<PDSCHCodeMapList*>(items[0]) = PdschCodeMapList; }
};

enum HSChannelisationCodeLCRValues {
	Cc161,_HSChannelisationCodeLCR = 0,
};
typedef Enumerated<CONSTRAINED, 0> HSChannelisationCodeLCR;

class CodeResourceInformationTDD128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CodeResourceInformationTDD128(): Sequence(&theInfo) {}

	void setStartcode(const HSChannelisationCodeLCR& Startcode) { *static_cast<HSChannelisationCodeLCR*>(items[0]) = Startcode; }
};

enum CodeWordSetValues {
	LongCWS,_CodeWordSet = 0,
};
typedef Enumerated<CONSTRAINED, 0> CodeWordSet;

typedef Integer<EXTCONSTRAINED, 0, 9> CommonEDCHResourceInfoListSoffset;

class CommonEDCHResourceInfoList : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CommonEDCHResourceInfoList(): Sequence(&theInfo) {}

	void setCommonEDCHResourceInfoListSoffset(const CommonEDCHResourceInfoListSoffset& CommonEDCHResourceInfoListSoffset) { *static_cast<CommonEDCHResourceInfoListSoffset*>(items[0]) = CommonEDCHResourceInfoListSoffset; }
};

class CommonERNTIInfo : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	CommonERNTIInfo(): Sequence(&theInfo) {}

};

enum SecondInterleavingModeValues {
	FrameRelated,_SecondInterleavingMode = 0,
};
typedef Enumerated<CONSTRAINED, 0> SecondInterleavingMode;

class CommonTimeslotInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CommonTimeslotInfo(): Sequence(&theInfo) {}

	void setSecondInterleavingMode(const SecondInterleavingMode& SecondInterleavingMode) { *static_cast<SecondInterleavingMode*>(items[0]) = SecondInterleavingMode; }
};

class CommonTimeslotInfoMBMS : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CommonTimeslotInfoMBMS(): Sequence(&theInfo) {}

	void setSecondInterleavingMode(const SecondInterleavingMode& SecondInterleavingMode) { *static_cast<SecondInterleavingMode*>(items[0]) = SecondInterleavingMode; }
};

class CommonTimeslotInfoSCCPCH : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CommonTimeslotInfoSCCPCH(): Sequence(&theInfo) {}

	void setSecondInterleavingMode(const SecondInterleavingMode& SecondInterleavingMode) { *static_cast<SecondInterleavingMode*>(items[0]) = SecondInterleavingMode; }
};

typedef Integer<CONSTRAINED, -35, -10> ConstantValue;

typedef Integer<CONSTRAINED, -35, 10> ConstantValueTdd;

enum ControlChannelDRXCycleTDD128Values {
	Subframes1,_ControlChannelDRXCycleTDD128 = 0,
};
typedef Enumerated<CONSTRAINED, 0> ControlChannelDRXCycleTDD128;

class ControlChannelDRXInfoTDD128r8ControlChannelDrxOperation : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	ControlChannelDRXInfoTDD128r8ControlChannelDrxOperation(): Choice(&theInfo) {}
};

class ControlChannelDRXInfoTDD128r8 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ControlChannelDRXInfoTDD128r8(): Sequence(&theInfo) {}

	void setControlChannelDRXInfoTDD128r8ControlChannelDrxOperation(const ControlChannelDRXInfoTDD128r8ControlChannelDrxOperation& ControlChannelDRXInfoTDD128r8ControlChannelDrxOperation) { *static_cast<ControlChannelDRXInfoTDD128r8ControlChannelDrxOperation*>(items[0]) = ControlChannelDRXInfoTDD128r8ControlChannelDrxOperation; }
};

class CPCHPersistenceLevels : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CPCHPersistenceLevels(): Sequence(&theInfo) {}

	void setCpchSetID(const CPCHSetID& CpchSetID) { *static_cast<CPCHSetID*>(items[0]) = CpchSetID; }
};

typedef SequenceOf<CPCHPersistenceLevels, CONSTRAINED, 1, maxCPCHsets> CPCHPersistenceLevelsList;

class CPCHSetInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CPCHSetInfo(): Sequence(&theInfo) {}

	void setCpchSetID(const CPCHSetID& CpchSetID) { *static_cast<CPCHSetID*>(items[0]) = CpchSetID; }
};

typedef SequenceOf<CPCHSetInfo, CONSTRAINED, 1, maxCPCHsets> CPCHSetInfoList;

enum CPCHStatusIndicationModeValues {
	Pamode,_CPCHStatusIndicationMode = 0,
};
typedef Enumerated<CONSTRAINED, 0> CPCHStatusIndicationMode;

enum CQIDTXTimerValues {
	Subframes0,_CQIDTXTimer = 0,
};
typedef Enumerated<CONSTRAINED, 0> CQIDTXTimer;

typedef Integer<CONSTRAINED, 1, 4> CQIRepetitionFactor;

typedef Integer<CONSTRAINED, -10, 5> CSICHPowerOffset;

typedef Integer<CONSTRAINED, 0, 599> DefaultDPCHOffsetValueFDD;

typedef Integer<CONSTRAINED, 0, 7> DefaultDPCHOffsetValueTDD;

typedef Integer<CONSTRAINED, -10, 10> DeltaPpm;

typedef Integer<CONSTRAINED, 0, 8> DeltaCQI;

typedef Integer<CONSTRAINED, 0, 8> DeltaNACK;

typedef Integer<CONSTRAINED, 0, 30> DeltaSIR;

typedef Integer<CONSTRAINED, -20, 10> DHSSync;

class DLCCTrCh : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLCCTrCh(): Sequence(&theInfo) {}

	void setTfcsID(const TFCSIdentityPlain& TfcsID) { *static_cast<TFCSIdentityPlain*>(items[0]) = TfcsID; }
};

class DLCCTrChr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLCCTrChr4(): Sequence(&theInfo) {}

	void setTfcsID(const TFCSIdentityPlain& TfcsID) { *static_cast<TFCSIdentityPlain*>(items[0]) = TfcsID; }
};

class DLCCTrChr7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLCCTrChr7(): Sequence(&theInfo) {}

	void setTfcsID(const TFCSIdentityPlain& TfcsID) { *static_cast<TFCSIdentityPlain*>(items[0]) = TfcsID; }
};

typedef SequenceOf<DLCCTrCh, CONSTRAINED, 1, maxCCTrCH> DLCCTrChList;

typedef SequenceOf<DLCCTrChr7, CONSTRAINED, 1, maxCCTrCH> DLCCTrChListr7;

typedef SequenceOf<DLCCTrChr4, CONSTRAINED, 1, maxCCTrCH> DLCCTrChListr4;

typedef SequenceOf<TFCSIdentityPlain, CONSTRAINED, 1, maxCCTrCH> DLCCTrChListToRemove;

typedef Integer<CONSTRAINED, 1, 15> SecondaryScramblingCode;

class DLChannelisationCode : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLChannelisationCode(): Sequence(&theInfo) {}

	void setSecondaryScramblingCode(const SecondaryScramblingCode& SecondaryScramblingCode) { *static_cast<SecondaryScramblingCode*>(items[0]) = SecondaryScramblingCode; }
};

typedef SequenceOf<DLChannelisationCode, CONSTRAINED, 1, maxDPCH_DLchan> DLChannelisationCodeList;

typedef Null DLDPCHInfoCommonr4CfnHandlingMaintain;

class DLDPCHInfoCommonr4CfnHandling : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	DLDPCHInfoCommonr4CfnHandling(): Choice(&theInfo) {}
};

class DLDPCHInfoCommonr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLDPCHInfoCommonr4(): Sequence(&theInfo) {}

	void setDLDPCHInfoCommonr4CfnHandling(const DLDPCHInfoCommonr4CfnHandling& DLDPCHInfoCommonr4CfnHandling) { *static_cast<DLDPCHInfoCommonr4CfnHandling*>(items[0]) = DLDPCHInfoCommonr4CfnHandling; }
};

class DLCommonInformationr5 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLCommonInformationr5(): Sequence(&theInfo) {}

	void setDlDPCHInfoCommon(const DLDPCHInfoCommonr4& DlDPCHInfoCommon) { *static_cast<DLDPCHInfoCommonr4*>(items[0]) = DlDPCHInfoCommon; }
};

enum TimingMaintainedSynchIndValues {
	false_TimingMaintainedSynchInd = 0,
};
typedef Enumerated<CONSTRAINED, 0> TimingMaintainedSynchInd;

class DLDPCHInfoCommonr6CfnHandlingMaintain : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLDPCHInfoCommonr6CfnHandlingMaintain(): Sequence(&theInfo) {}

	void setTimingmaintainedsynchind(const TimingMaintainedSynchInd& Timingmaintainedsynchind) { *static_cast<TimingMaintainedSynchInd*>(items[0]) = Timingmaintainedsynchind; }
};

class DLDPCHInfoCommonr6CfnHandling : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	DLDPCHInfoCommonr6CfnHandling(): Choice(&theInfo) {}
};

class DLDPCHInfoCommonr6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLDPCHInfoCommonr6(): Sequence(&theInfo) {}

	void setDLDPCHInfoCommonr6CfnHandling(const DLDPCHInfoCommonr6CfnHandling& DLDPCHInfoCommonr6CfnHandling) { *static_cast<DLDPCHInfoCommonr6CfnHandling*>(items[0]) = DLDPCHInfoCommonr6CfnHandling; }
};

class DLCommonInformationr6DldpchInfoCommon : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	DLCommonInformationr6DldpchInfoCommon(): Choice(&theInfo) {}
};

class DLCommonInformationr6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLCommonInformationr6(): Sequence(&theInfo) {}

	void setDLCommonInformationr6DldpchInfoCommon(const DLCommonInformationr6DldpchInfoCommon& DLCommonInformationr6DldpchInfoCommon) { *static_cast<DLCommonInformationr6DldpchInfoCommon*>(items[0]) = DLCommonInformationr6DldpchInfoCommon; }
};

class DLCommonInformationr7DldpchInfoCommon : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	DLCommonInformationr7DldpchInfoCommon(): Choice(&theInfo) {}
};

class DLCommonInformationr7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLCommonInformationr7(): Sequence(&theInfo) {}

	void setDLCommonInformationr7DldpchInfoCommon(const DLCommonInformationr7DldpchInfoCommon& DLCommonInformationr7DldpchInfoCommon) { *static_cast<DLCommonInformationr7DldpchInfoCommon*>(items[0]) = DLCommonInformationr7DldpchInfoCommon; }
};

class DLCommonInformationr8DldpchInfoCommon : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	DLCommonInformationr8DldpchInfoCommon(): Choice(&theInfo) {}
};

class DLCommonInformationr8 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLCommonInformationr8(): Sequence(&theInfo) {}

	void setDLCommonInformationr8DldpchInfoCommon(const DLCommonInformationr8DldpchInfoCommon& DLCommonInformationr8DldpchInfoCommon) { *static_cast<DLCommonInformationr8DldpchInfoCommon*>(items[0]) = DLCommonInformationr8DldpchInfoCommon; }
};

class DLDPCHPowerControlInfoModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	DLDPCHPowerControlInfoModeSpecificInfo(): Choice(&theInfo) {}
};

class DLDPCHPowerControlInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLDPCHPowerControlInfo(): Sequence(&theInfo) {}

	void setDLDPCHPowerControlInfoModeSpecificInfo(const DLDPCHPowerControlInfoModeSpecificInfo& DLDPCHPowerControlInfoModeSpecificInfo) { *static_cast<DLDPCHPowerControlInfoModeSpecificInfo*>(items[0]) = DLDPCHPowerControlInfoModeSpecificInfo; }
};

class DLDPCHInfoCommonPost : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLDPCHInfoCommonPost(): Sequence(&theInfo) {}

	void setDlDPCHPowerControlInfo(const DLDPCHPowerControlInfo& DlDPCHPowerControlInfo) { *static_cast<DLDPCHPowerControlInfo*>(items[0]) = DlDPCHPowerControlInfo; }
};

class DLCommonInformationPost : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLCommonInformationPost(): Sequence(&theInfo) {}

	void setDlDPCHInfoCommon(const DLDPCHInfoCommonPost& DlDPCHInfoCommon) { *static_cast<DLDPCHInfoCommonPost*>(items[0]) = DlDPCHInfoCommon; }
};

typedef Null SF512AndPilotSfd4;

class SF512AndPilot : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	SF512AndPilot(): Choice(&theInfo) {}
};

class DLDPCHInfoCommonPredefModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLDPCHInfoCommonPredefModeSpecificInfoFdd(): Sequence(&theInfo) {}

	void setSpreadingFactorAndPilot(const SF512AndPilot& SpreadingFactorAndPilot) { *static_cast<SF512AndPilot*>(items[0]) = SpreadingFactorAndPilot; }
};

class DLDPCHInfoCommonPredefModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	DLDPCHInfoCommonPredefModeSpecificInfo(): Choice(&theInfo) {}
};

class DLDPCHInfoCommonPredef : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLDPCHInfoCommonPredef(): Sequence(&theInfo) {}

	void setDLDPCHInfoCommonPredefModeSpecificInfo(const DLDPCHInfoCommonPredefModeSpecificInfo& DLDPCHInfoCommonPredefModeSpecificInfo) { *static_cast<DLDPCHInfoCommonPredefModeSpecificInfo*>(items[0]) = DLDPCHInfoCommonPredefModeSpecificInfo; }
};

class DLCommonInformationPredef : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLCommonInformationPredef(): Sequence(&theInfo) {}

	void setDlDPCHInfoCommon(const DLDPCHInfoCommonPredef& DlDPCHInfoCommon) { *static_cast<DLDPCHInfoCommonPredef*>(items[0]) = DlDPCHInfoCommon; }
};

enum DLCompressedModeMethodValues {
	Dummy,_DLCompressedModeMethod = 0,
};
typedef Enumerated<CONSTRAINED, 0> DLCompressedModeMethod;

typedef Null DLDPCHInfoCommonCfnHandlingMaintain;

class DLDPCHInfoCommonCfnHandling : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	DLDPCHInfoCommonCfnHandling(): Choice(&theInfo) {}
};

class DLDPCHInfoCommon : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLDPCHInfoCommon(): Sequence(&theInfo) {}

	void setDLDPCHInfoCommonCfnHandling(const DLDPCHInfoCommonCfnHandling& DLDPCHInfoCommonCfnHandling) { *static_cast<DLDPCHInfoCommonCfnHandling*>(items[0]) = DLDPCHInfoCommonCfnHandling; }
};

enum PCPICHUsageForChannelEstValues {
	MayBeUsed,_PCPICHUsageForChannelEst = 0,
};
typedef Enumerated<CONSTRAINED, 0> PCPICHUsageForChannelEst;

class DLDPCHInfoPerRLFdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLDPCHInfoPerRLFdd(): Sequence(&theInfo) {}

	void setPCPICHUsageForChannelEst(const PCPICHUsageForChannelEst& PCPICHUsageForChannelEst) { *static_cast<PCPICHUsageForChannelEst*>(items[0]) = PCPICHUsageForChannelEst; }
};

class DLDPCHInfoPerRL : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	DLDPCHInfoPerRL(): Choice(&theInfo) {}
};

class DLDPCHInfoPerRLr4Fdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLDPCHInfoPerRLr4Fdd(): Sequence(&theInfo) {}

	void setPCPICHUsageForChannelEst(const PCPICHUsageForChannelEst& PCPICHUsageForChannelEst) { *static_cast<PCPICHUsageForChannelEst*>(items[0]) = PCPICHUsageForChannelEst; }
};

class DLDPCHInfoPerRLr4 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	DLDPCHInfoPerRLr4(): Choice(&theInfo) {}
};

class DLDPCHInfoPerRLr5Fdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLDPCHInfoPerRLr5Fdd(): Sequence(&theInfo) {}

	void setPCPICHUsageForChannelEst(const PCPICHUsageForChannelEst& PCPICHUsageForChannelEst) { *static_cast<PCPICHUsageForChannelEst*>(items[0]) = PCPICHUsageForChannelEst; }
};

class DLDPCHInfoPerRLr5 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	DLDPCHInfoPerRLr5(): Choice(&theInfo) {}
};

class DLDPCHInfoPerRLr6Fdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLDPCHInfoPerRLr6Fdd(): Sequence(&theInfo) {}

	void setPCPICHUsageForChannelEst(const PCPICHUsageForChannelEst& PCPICHUsageForChannelEst) { *static_cast<PCPICHUsageForChannelEst*>(items[0]) = PCPICHUsageForChannelEst; }
};

class DLDPCHInfoPerRLr6 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	DLDPCHInfoPerRLr6(): Choice(&theInfo) {}
};

class DLDPCHInfoPerRLr7Fdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLDPCHInfoPerRLr7Fdd(): Sequence(&theInfo) {}

	void setPCPICHUsageForChannelEst(const PCPICHUsageForChannelEst& PCPICHUsageForChannelEst) { *static_cast<PCPICHUsageForChannelEst*>(items[0]) = PCPICHUsageForChannelEst; }
};

class DLDPCHInfoPerRLr7 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	DLDPCHInfoPerRLr7(): Choice(&theInfo) {}
};

class DLFDPCHInfoPerRLr6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLFDPCHInfoPerRLr6(): Sequence(&theInfo) {}

	void setPCPICHUsageForChannelEst(const PCPICHUsageForChannelEst& PCPICHUsageForChannelEst) { *static_cast<PCPICHUsageForChannelEst*>(items[0]) = PCPICHUsageForChannelEst; }
};

class DLFDPCHInfoPerRLr7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLFDPCHInfoPerRLr7(): Sequence(&theInfo) {}

	void setPCPICHUsageForChannelEst(const PCPICHUsageForChannelEst& PCPICHUsageForChannelEst) { *static_cast<PCPICHUsageForChannelEst*>(items[0]) = PCPICHUsageForChannelEst; }
};

class DLDPCHInfoPerRLPostFDD : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLDPCHInfoPerRLPostFDD(): Sequence(&theInfo) {}

	void setPCPICHUsageForChannelEst(const PCPICHUsageForChannelEst& PCPICHUsageForChannelEst) { *static_cast<PCPICHUsageForChannelEst*>(items[0]) = PCPICHUsageForChannelEst; }
};

typedef Integer<CONSTRAINED, 0, 14> TimeslotNumber;

class IndividualTimeslotInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IndividualTimeslotInfo(): Sequence(&theInfo) {}

	void setTimeslotNumber(const TimeslotNumber& TimeslotNumber) { *static_cast<TimeslotNumber*>(items[0]) = TimeslotNumber; }
};

class DownlinkTimeslotsCodes : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DownlinkTimeslotsCodes(): Sequence(&theInfo) {}

	void setFirstIndividualTimeslotInfo(const IndividualTimeslotInfo& FirstIndividualTimeslotInfo) { *static_cast<IndividualTimeslotInfo*>(items[0]) = FirstIndividualTimeslotInfo; }
};

class DLDPCHInfoPerRLPostTDD : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLDPCHInfoPerRLPostTDD(): Sequence(&theInfo) {}

	void setDlDPCHTimeslotsCodes(const DownlinkTimeslotsCodes& DlDPCHTimeslotsCodes) { *static_cast<DownlinkTimeslotsCodes*>(items[0]) = DlDPCHTimeslotsCodes; }
};

typedef Integer<CONSTRAINED, 0, 6> TimeslotNumberLCRr4;

class IndividualTimeslotInfoLCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IndividualTimeslotInfoLCRr4(): Sequence(&theInfo) {}

	void setTimeslotNumber(const TimeslotNumberLCRr4& TimeslotNumber) { *static_cast<TimeslotNumberLCRr4*>(items[0]) = TimeslotNumber; }
};

class DownlinkTimeslotsCodesLCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DownlinkTimeslotsCodesLCRr4(): Sequence(&theInfo) {}

	void setFirstIndividualTimeslotInfo(const IndividualTimeslotInfoLCRr4& FirstIndividualTimeslotInfo) { *static_cast<IndividualTimeslotInfoLCRr4*>(items[0]) = FirstIndividualTimeslotInfo; }
};

class DLDPCHInfoPerRLPostTDDLCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLDPCHInfoPerRLPostTDDLCRr4(): Sequence(&theInfo) {}

	void setDlCCTrCHTimeslotsCodes(const DownlinkTimeslotsCodesLCRr4& DlCCTrCHTimeslotsCodes) { *static_cast<DownlinkTimeslotsCodesLCRr4*>(items[0]) = DlCCTrCHTimeslotsCodes; }
};

class DLFDPCHInfoCommonr6CfnHandlingMaintain : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLFDPCHInfoCommonr6CfnHandlingMaintain(): Sequence(&theInfo) {}

	void setTimingmaintainedsynchind(const TimingMaintainedSynchInd& Timingmaintainedsynchind) { *static_cast<TimingMaintainedSynchInd*>(items[0]) = Timingmaintainedsynchind; }
};

class DLFDPCHInfoCommonr6CfnHandling : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	DLFDPCHInfoCommonr6CfnHandling(): Choice(&theInfo) {}
};

class DLFDPCHInfoCommonr6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLFDPCHInfoCommonr6(): Sequence(&theInfo) {}

	void setDLFDPCHInfoCommonr6CfnHandling(const DLFDPCHInfoCommonr6CfnHandling& DLFDPCHInfoCommonr6CfnHandling) { *static_cast<DLFDPCHInfoCommonr6CfnHandling*>(items[0]) = DLFDPCHInfoCommonr6CfnHandling; }
};

enum DLFrameTypeValues {
	DlFrameTypeA,_DLFrameType = 0,
};
typedef Enumerated<CONSTRAINED, 0> DLFrameType;

typedef Null DLHSPDSCHInformationr8extModeSpecificInfoTddTdd384;

class DLHSPDSCHInformationr8extModeSpecificInfoTdd : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	DLHSPDSCHInformationr8extModeSpecificInfoTdd(): Choice(&theInfo) {}
};

class DLHSPDSCHInformationr8extModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	DLHSPDSCHInformationr8extModeSpecificInfo(): Choice(&theInfo) {}
};

class DLHSPDSCHInformationr8ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLHSPDSCHInformationr8ext(): Sequence(&theInfo) {}

	void setDLHSPDSCHInformationr8extModeSpecificInfo(const DLHSPDSCHInformationr8extModeSpecificInfo& DLHSPDSCHInformationr8extModeSpecificInfo) { *static_cast<DLHSPDSCHInformationr8extModeSpecificInfo*>(items[0]) = DLHSPDSCHInformationr8extModeSpecificInfo; }
};

typedef Null HSSCCHInfor8extModeSpecificInfoFdd;

class HSSCCHInfor8extModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	HSSCCHInfor8extModeSpecificInfo(): Choice(&theInfo) {}
};

class HSSCCHInfor8ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HSSCCHInfor8ext(): Sequence(&theInfo) {}

	void setHSSCCHInfor8extModeSpecificInfo(const HSSCCHInfor8extModeSpecificInfo& HSSCCHInfor8extModeSpecificInfo) { *static_cast<HSSCCHInfor8extModeSpecificInfo*>(items[0]) = HSSCCHInfor8extModeSpecificInfo; }
};

class DLHSPDSCHInformationr8ext2 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLHSPDSCHInformationr8ext2(): Sequence(&theInfo) {}

	void setHsscchInfo(const HSSCCHInfor8ext& HsscchInfo) { *static_cast<HSSCCHInfor8ext*>(items[0]) = HsscchInfo; }
};

enum OutofSyncWindowValues {
	Ms40,_OutofSyncWindow = 0,
};
typedef Enumerated<CONSTRAINED, 0> OutofSyncWindow;

class DLHSPDSCHMultiCarrierInformation : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	DLHSPDSCHMultiCarrierInformation(): Sequence(&theInfo) {}

};

class DLHSPDSCHTSConfiguration : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	DLHSPDSCHTSConfiguration(): Sequence(&theInfo) {}

};

class DLHSPDSCHTSConfigurationVHCR : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	DLHSPDSCHTSConfigurationVHCR(): Sequence(&theInfo) {}

};

class DLInformationPerRLModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLInformationPerRLModeSpecificInfoFdd(): Sequence(&theInfo) {}

	void setPrimaryCPICHInfo(const PrimaryCPICHInfo& PrimaryCPICHInfo) { *static_cast<PrimaryCPICHInfo*>(items[0]) = PrimaryCPICHInfo; }
};

class DLInformationPerRLModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	DLInformationPerRLModeSpecificInfo(): Choice(&theInfo) {}
};

class DLInformationPerRL : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLInformationPerRL(): Sequence(&theInfo) {}

	void setDLInformationPerRLModeSpecificInfo(const DLInformationPerRLModeSpecificInfo& DLInformationPerRLModeSpecificInfo) { *static_cast<DLInformationPerRLModeSpecificInfo*>(items[0]) = DLInformationPerRLModeSpecificInfo; }
};

class DLInformationPerRLr4ModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLInformationPerRLr4ModeSpecificInfoFdd(): Sequence(&theInfo) {}

	void setPrimaryCPICHInfo(const PrimaryCPICHInfo& PrimaryCPICHInfo) { *static_cast<PrimaryCPICHInfo*>(items[0]) = PrimaryCPICHInfo; }
};

class DLInformationPerRLr4ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	DLInformationPerRLr4ModeSpecificInfo(): Choice(&theInfo) {}
};

class DLInformationPerRLr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLInformationPerRLr4(): Sequence(&theInfo) {}

	void setDLInformationPerRLr4ModeSpecificInfo(const DLInformationPerRLr4ModeSpecificInfo& DLInformationPerRLr4ModeSpecificInfo) { *static_cast<DLInformationPerRLr4ModeSpecificInfo*>(items[0]) = DLInformationPerRLr4ModeSpecificInfo; }
};

class DLInformationPerRLr5ModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLInformationPerRLr5ModeSpecificInfoFdd(): Sequence(&theInfo) {}

	void setPrimaryCPICHInfo(const PrimaryCPICHInfo& PrimaryCPICHInfo) { *static_cast<PrimaryCPICHInfo*>(items[0]) = PrimaryCPICHInfo; }
};

class DLInformationPerRLr5ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	DLInformationPerRLr5ModeSpecificInfo(): Choice(&theInfo) {}
};

class DLInformationPerRLr5 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLInformationPerRLr5(): Sequence(&theInfo) {}

	void setDLInformationPerRLr5ModeSpecificInfo(const DLInformationPerRLr5ModeSpecificInfo& DLInformationPerRLr5ModeSpecificInfo) { *static_cast<DLInformationPerRLr5ModeSpecificInfo*>(items[0]) = DLInformationPerRLr5ModeSpecificInfo; }
};

class DLInformationPerRLr5bisModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLInformationPerRLr5bisModeSpecificInfoFdd(): Sequence(&theInfo) {}

	void setPrimaryCPICHInfo(const PrimaryCPICHInfo& PrimaryCPICHInfo) { *static_cast<PrimaryCPICHInfo*>(items[0]) = PrimaryCPICHInfo; }
};

class DLInformationPerRLr5bisModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	DLInformationPerRLr5bisModeSpecificInfo(): Choice(&theInfo) {}
};

class DLInformationPerRLr5bis : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLInformationPerRLr5bis(): Sequence(&theInfo) {}

	void setDLInformationPerRLr5bisModeSpecificInfo(const DLInformationPerRLr5bisModeSpecificInfo& DLInformationPerRLr5bisModeSpecificInfo) { *static_cast<DLInformationPerRLr5bisModeSpecificInfo*>(items[0]) = DLInformationPerRLr5bisModeSpecificInfo; }
};

class DLInformationPerRLr6ModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLInformationPerRLr6ModeSpecificInfoFdd(): Sequence(&theInfo) {}

	void setPrimaryCPICHInfo(const PrimaryCPICHInfo& PrimaryCPICHInfo) { *static_cast<PrimaryCPICHInfo*>(items[0]) = PrimaryCPICHInfo; }
};

class DLInformationPerRLr6ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	DLInformationPerRLr6ModeSpecificInfo(): Choice(&theInfo) {}
};

class DLInformationPerRLr6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLInformationPerRLr6(): Sequence(&theInfo) {}

	void setDLInformationPerRLr6ModeSpecificInfo(const DLInformationPerRLr6ModeSpecificInfo& DLInformationPerRLr6ModeSpecificInfo) { *static_cast<DLInformationPerRLr6ModeSpecificInfo*>(items[0]) = DLInformationPerRLr6ModeSpecificInfo; }
};

enum STTDIndicationValues {
	true_STTDIndication = 0,
};
typedef Enumerated<CONSTRAINED, 0> STTDIndication;

class DLInformationPerRLv6b0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLInformationPerRLv6b0ext(): Sequence(&theInfo) {}

	void setSttdIndication(const STTDIndication& SttdIndication) { *static_cast<STTDIndication*>(items[0]) = SttdIndication; }
};

class DLInformationPerRLr7ModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLInformationPerRLr7ModeSpecificInfoFdd(): Sequence(&theInfo) {}

	void setPrimaryCPICHInfo(const PrimaryCPICHInfo& PrimaryCPICHInfo) { *static_cast<PrimaryCPICHInfo*>(items[0]) = PrimaryCPICHInfo; }
};

class DLInformationPerRLr7ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	DLInformationPerRLr7ModeSpecificInfo(): Choice(&theInfo) {}
};

class DLInformationPerRLr7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLInformationPerRLr7(): Sequence(&theInfo) {}

	void setDLInformationPerRLr7ModeSpecificInfo(const DLInformationPerRLr7ModeSpecificInfo& DLInformationPerRLr7ModeSpecificInfo) { *static_cast<DLInformationPerRLr7ModeSpecificInfo*>(items[0]) = DLInformationPerRLr7ModeSpecificInfo; }
};

class DLInformationPerRLr8ModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLInformationPerRLr8ModeSpecificInfoFdd(): Sequence(&theInfo) {}

	void setPrimaryCPICHInfo(const PrimaryCPICHInfo& PrimaryCPICHInfo) { *static_cast<PrimaryCPICHInfo*>(items[0]) = PrimaryCPICHInfo; }
};

class DLInformationPerRLr8ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	DLInformationPerRLr8ModeSpecificInfo(): Choice(&theInfo) {}
};

class DLInformationPerRLr8 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLInformationPerRLr8(): Sequence(&theInfo) {}

	void setDLInformationPerRLr8ModeSpecificInfo(const DLInformationPerRLr8ModeSpecificInfo& DLInformationPerRLr8ModeSpecificInfo) { *static_cast<DLInformationPerRLr8ModeSpecificInfo*>(items[0]) = DLInformationPerRLr8ModeSpecificInfo; }
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
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLInformationPerRLPostFDD(): Sequence(&theInfo) {}

	void setPrimaryCPICHInfo(const PrimaryCPICHInfo& PrimaryCPICHInfo) { *static_cast<PrimaryCPICHInfo*>(items[0]) = PrimaryCPICHInfo; }
};

typedef SequenceOf<DLInformationPerRLPostFDD, CONSTRAINED, 1, maxRL> DLInformationPerRLListPostFDD;

class PrimaryCCPCHInfoPostSyncCase : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	PrimaryCCPCHInfoPostSyncCase(): Choice(&theInfo) {}
};

class PrimaryCCPCHInfoPost : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PrimaryCCPCHInfoPost(): Sequence(&theInfo) {}

	void setPrimaryCCPCHInfoPostSyncCase(const PrimaryCCPCHInfoPostSyncCase& PrimaryCCPCHInfoPostSyncCase) { *static_cast<PrimaryCCPCHInfoPostSyncCase*>(items[0]) = PrimaryCCPCHInfoPostSyncCase; }
};

class DLInformationPerRLPostTDD : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLInformationPerRLPostTDD(): Sequence(&theInfo) {}

	void setPrimaryCCPCHInfo(const PrimaryCCPCHInfoPost& PrimaryCCPCHInfo) { *static_cast<PrimaryCCPCHInfoPost*>(items[0]) = PrimaryCCPCHInfo; }
};

typedef Boolean PrimaryCCPCHInfoPostTDDLCRr4TstdIndicator;

class PrimaryCCPCHInfoPostTDDLCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PrimaryCCPCHInfoPostTDDLCRr4(): Sequence(&theInfo) {}

	void setPrimaryCCPCHInfoPostTDDLCRr4TstdIndicator(const PrimaryCCPCHInfoPostTDDLCRr4TstdIndicator& PrimaryCCPCHInfoPostTDDLCRr4TstdIndicator) { *static_cast<PrimaryCCPCHInfoPostTDDLCRr4TstdIndicator*>(items[0]) = PrimaryCCPCHInfoPostTDDLCRr4TstdIndicator; }
};

class DLInformationPerRLPostTDDLCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLInformationPerRLPostTDDLCRr4(): Sequence(&theInfo) {}

	void setPrimaryCCPCHInfo(const PrimaryCCPCHInfoPostTDDLCRr4& PrimaryCCPCHInfo) { *static_cast<PrimaryCCPCHInfoPostTDDLCRr4*>(items[0]) = PrimaryCCPCHInfo; }
};

enum DLMultiCarrierInformationtsn_LengthValues {
	Tsn6bits,_DLMultiCarrierInformationtsn_Length = 0,
};
typedef Enumerated<CONSTRAINED, 0> DLMultiCarrierInformationtsn_Length;

class DLMultiCarrierInformation : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLMultiCarrierInformation(): Sequence(&theInfo) {}

	void setDLMultiCarrierInformationtsn_Length(const DLMultiCarrierInformationtsn_Length& DLMultiCarrierInformationtsn_Length) { *static_cast<DLMultiCarrierInformationtsn_Length*>(items[0]) = DLMultiCarrierInformationtsn_Length; }
};

typedef Integer<CONSTRAINED, 0, 511> DSCHRadioLinkIdentifier;

class PDSCHSHODCHInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PDSCHSHODCHInfo(): Sequence(&theInfo) {}

	void setDschRadioLinkIdentifier(const DSCHRadioLinkIdentifier& DschRadioLinkIdentifier) { *static_cast<DSCHRadioLinkIdentifier*>(items[0]) = DschRadioLinkIdentifier; }
};

class DLPDSCHInformation : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLPDSCHInformation(): Sequence(&theInfo) {}

	void setDummy1(const PDSCHSHODCHInfo& Dummy1) { *static_cast<PDSCHSHODCHInfo*>(items[0]) = Dummy1; }
};

class RestrictedTrCH : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RestrictedTrCH(): Sequence(&theInfo) {}

	void setDlrestrictedTrChType(const DLTrCHType& DlrestrictedTrChType) { *static_cast<DLTrCHType*>(items[0]) = DlrestrictedTrChType; }
};

typedef SequenceOf<RestrictedTrCH, CONSTRAINED, 1, maxTrCH> RestrictedTrCHInfoList;

class Dlratematchingrestriction : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Dlratematchingrestriction(): Sequence(&theInfo) {}

	void setRestrictedTrCHInfoList(const RestrictedTrCHInfoList& RestrictedTrCHInfoList) { *static_cast<RestrictedTrCHInfoList*>(items[0]) = RestrictedTrCHInfoList; }
};

typedef Null DLSecondaryCellInfoFDDContinue;

class DLSecondaryCellInfoFDD : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	DLSecondaryCellInfoFDD(): Choice(&theInfo) {}
};

enum DLSecondaryCellInfoFDDv890extdifferentTxModeFromServingHS_DSCHCellValues {
	different_DLSecondaryCellInfoFDDv890extdifferentTxModeFromServingHS_DSCHCell = 0,
};
typedef Enumerated<CONSTRAINED, 0> DLSecondaryCellInfoFDDv890extdifferentTxModeFromServingHS_DSCHCell;

class DLSecondaryCellInfoFDDv890ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLSecondaryCellInfoFDDv890ext(): Sequence(&theInfo) {}

	void setDLSecondaryCellInfoFDDv890extdifferentTxModeFromServingHS_DSCHCell(const DLSecondaryCellInfoFDDv890extdifferentTxModeFromServingHS_DSCHCell& DLSecondaryCellInfoFDDv890extdifferentTxModeFromServingHS_DSCHCell) { *static_cast<DLSecondaryCellInfoFDDv890extdifferentTxModeFromServingHS_DSCHCell*>(items[0]) = DLSecondaryCellInfoFDDv890extdifferentTxModeFromServingHS_DSCHCell; }
};

typedef Null DLSecondaryCellInfoFDDr9ConfigurationInfoContinue;

class DLSecondaryCellInfoFDDr9ConfigurationInfo : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	DLSecondaryCellInfoFDDr9ConfigurationInfo(): Choice(&theInfo) {}
};

class DLSecondaryCellInfoFDDr9 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLSecondaryCellInfoFDDr9(): Sequence(&theInfo) {}

	void setDLSecondaryCellInfoFDDr9ConfigurationInfo(const DLSecondaryCellInfoFDDr9ConfigurationInfo& DLSecondaryCellInfoFDDr9ConfigurationInfo) { *static_cast<DLSecondaryCellInfoFDDr9ConfigurationInfo*>(items[0]) = DLSecondaryCellInfoFDDr9ConfigurationInfo; }
};

typedef Integer<CONSTRAINED, 0, 24> PowerOffsetTPCpdpdch;

class DLTPCPowerOffsetPerRL : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLTPCPowerOffsetPerRL(): Sequence(&theInfo) {}

	void setPowerOffsetTPCpdpdch(const PowerOffsetTPCpdpdch& PowerOffsetTPCpdpdch) { *static_cast<PowerOffsetTPCpdpdch*>(items[0]) = PowerOffsetTPCpdpdch; }
};

typedef SequenceOf<DLTPCPowerOffsetPerRL, CONSTRAINED, 1, maxRL> DLTPCPowerOffsetPerRLList;

enum DLTSChannelisationCodeValues {
	Cc161,_DLTSChannelisationCode = 0,
};
typedef Enumerated<CONSTRAINED, 0> DLTSChannelisationCode;

enum DLTSChannelisationCodeVHCRValues {
	Cc321,_DLTSChannelisationCodeVHCR = 0,
};
typedef Enumerated<CONSTRAINED, 0> DLTSChannelisationCodeVHCR;

class DLTSChannelisationCodesShortCodesRepresentationConsecutive : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLTSChannelisationCodesShortCodesRepresentationConsecutive(): Sequence(&theInfo) {}

	void setFirstChannelisationCode(const DLTSChannelisationCode& FirstChannelisationCode) { *static_cast<DLTSChannelisationCode*>(items[0]) = FirstChannelisationCode; }
};

class DLTSChannelisationCodesShortCodesRepresentation : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	DLTSChannelisationCodesShortCodesRepresentation(): Choice(&theInfo) {}
};

class DLTSChannelisationCodesShort : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLTSChannelisationCodesShort(): Sequence(&theInfo) {}

	void setDLTSChannelisationCodesShortCodesRepresentation(const DLTSChannelisationCodesShortCodesRepresentation& DLTSChannelisationCodesShortCodesRepresentation) { *static_cast<DLTSChannelisationCodesShortCodesRepresentation*>(items[0]) = DLTSChannelisationCodesShortCodesRepresentation; }
};

class DLTSChannelisationCodesShortVHCRCodesRepresentationConsecutive : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLTSChannelisationCodesShortVHCRCodesRepresentationConsecutive(): Sequence(&theInfo) {}

	void setFirstChannelisationCode(const DLTSChannelisationCodeVHCR& FirstChannelisationCode) { *static_cast<DLTSChannelisationCodeVHCR*>(items[0]) = FirstChannelisationCode; }
};

class DLTSChannelisationCodesShortVHCRCodesRepresentation : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	DLTSChannelisationCodesShortVHCRCodesRepresentation(): Choice(&theInfo) {}
};

class DLTSChannelisationCodesShortVHCR : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLTSChannelisationCodesShortVHCR(): Sequence(&theInfo) {}

	void setDLTSChannelisationCodesShortVHCRCodesRepresentation(const DLTSChannelisationCodesShortVHCRCodesRepresentation& DLTSChannelisationCodesShortVHCRCodesRepresentation) { *static_cast<DLTSChannelisationCodesShortVHCRCodesRepresentation*>(items[0]) = DLTSChannelisationCodesShortVHCRCodesRepresentation; }
};

typedef Integer<EXTCONSTRAINED, 1, 15> DLChannelCodesMBSFNIMB384FirstChannelisationCode;

class DLChannelCodesMBSFNIMB384 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLChannelCodesMBSFNIMB384(): Sequence(&theInfo) {}

	void setDLChannelCodesMBSFNIMB384FirstChannelisationCode(const DLChannelCodesMBSFNIMB384FirstChannelisationCode& DLChannelCodesMBSFNIMB384FirstChannelisationCode) { *static_cast<DLChannelCodesMBSFNIMB384FirstChannelisationCode*>(items[0]) = DLChannelCodesMBSFNIMB384FirstChannelisationCode; }
};

enum ULEDCHInformationr8mac_es_e_resetIndicatorValues {
	True_ULEDCHInformationr8mac_es_e_resetIndicator = 0,
};
typedef Enumerated<CONSTRAINED, 0> ULEDCHInformationr8mac_es_e_resetIndicator;

class ULEDCHInformationr8 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULEDCHInformationr8(): Sequence(&theInfo) {}

	void setULEDCHInformationr8mac_es_e_resetIndicator(const ULEDCHInformationr8mac_es_e_resetIndicator& ULEDCHInformationr8mac_es_e_resetIndicator) { *static_cast<ULEDCHInformationr8mac_es_e_resetIndicator*>(items[0]) = ULEDCHInformationr8mac_es_e_resetIndicator; }
};

class DLULHSPAInformationr8 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLULHSPAInformationr8(): Sequence(&theInfo) {}

	void setUlEDCHInformation(const ULEDCHInformationr8& UlEDCHInformation) { *static_cast<ULEDCHInformationr8*>(items[0]) = UlEDCHInformation; }
};

enum ULEDCHInformationr9mac_es_e_resetIndicatorValues {
	True_ULEDCHInformationr9mac_es_e_resetIndicator = 0,
};
typedef Enumerated<CONSTRAINED, 0> ULEDCHInformationr9mac_es_e_resetIndicator;

class ULEDCHInformationr9 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULEDCHInformationr9(): Sequence(&theInfo) {}

	void setULEDCHInformationr9mac_es_e_resetIndicator(const ULEDCHInformationr9mac_es_e_resetIndicator& ULEDCHInformationr9mac_es_e_resetIndicator) { *static_cast<ULEDCHInformationr9mac_es_e_resetIndicator*>(items[0]) = ULEDCHInformationr9mac_es_e_resetIndicator; }
};

class DLULHSPAInformationr9 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLULHSPAInformationr9(): Sequence(&theInfo) {}

	void setUlEDCHInformation(const ULEDCHInformationr9& UlEDCHInformation) { *static_cast<ULEDCHInformationr9*>(items[0]) = UlEDCHInformation; }
};

class DownlinkAdditionalTimeslotsParameters : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	DownlinkAdditionalTimeslotsParameters(): Choice(&theInfo) {}
};

class DownlinkAdditionalTimeslots : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DownlinkAdditionalTimeslots(): Sequence(&theInfo) {}

	void setDownlinkAdditionalTimeslotsParameters(const DownlinkAdditionalTimeslotsParameters& DownlinkAdditionalTimeslotsParameters) { *static_cast<DownlinkAdditionalTimeslotsParameters*>(items[0]) = DownlinkAdditionalTimeslotsParameters; }
};

class DownlinkAdditionalTimeslotsVHCRParameters : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	DownlinkAdditionalTimeslotsVHCRParameters(): Choice(&theInfo) {}
};

class DownlinkAdditionalTimeslotsVHCR : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DownlinkAdditionalTimeslotsVHCR(): Sequence(&theInfo) {}

	void setDownlinkAdditionalTimeslotsVHCRParameters(const DownlinkAdditionalTimeslotsVHCRParameters& DownlinkAdditionalTimeslotsVHCRParameters) { *static_cast<DownlinkAdditionalTimeslotsVHCRParameters*>(items[0]) = DownlinkAdditionalTimeslotsVHCRParameters; }
};

class DownlinkAdditionalTimeslotsLCRr4Parameters : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	DownlinkAdditionalTimeslotsLCRr4Parameters(): Choice(&theInfo) {}
};

class DownlinkAdditionalTimeslotsLCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DownlinkAdditionalTimeslotsLCRr4(): Sequence(&theInfo) {}

	void setDownlinkAdditionalTimeslotsLCRr4Parameters(const DownlinkAdditionalTimeslotsLCRr4Parameters& DownlinkAdditionalTimeslotsLCRr4Parameters) { *static_cast<DownlinkAdditionalTimeslotsLCRr4Parameters*>(items[0]) = DownlinkAdditionalTimeslotsLCRr4Parameters; }
};

class DownlinkAdditionalTimeslotsr7Parameters : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	DownlinkAdditionalTimeslotsr7Parameters(): Choice(&theInfo) {}
};

class DownlinkAdditionalTimeslotsr7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DownlinkAdditionalTimeslotsr7(): Sequence(&theInfo) {}

	void setDownlinkAdditionalTimeslotsr7Parameters(const DownlinkAdditionalTimeslotsr7Parameters& DownlinkAdditionalTimeslotsr7Parameters) { *static_cast<DownlinkAdditionalTimeslotsr7Parameters*>(items[0]) = DownlinkAdditionalTimeslotsr7Parameters; }
};

class IndividualTimeslotInfoVHCR : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IndividualTimeslotInfoVHCR(): Sequence(&theInfo) {}

	void setTimeslotNumber(const TimeslotNumber& TimeslotNumber) { *static_cast<TimeslotNumber*>(items[0]) = TimeslotNumber; }
};

class DownlinkTimeslotsCodesVHCR : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DownlinkTimeslotsCodesVHCR(): Sequence(&theInfo) {}

	void setFirstIndividualTimeslotInfo(const IndividualTimeslotInfoVHCR& FirstIndividualTimeslotInfo) { *static_cast<IndividualTimeslotInfoVHCR*>(items[0]) = FirstIndividualTimeslotInfo; }
};

class IndividualTimeslotInfor7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IndividualTimeslotInfor7(): Sequence(&theInfo) {}

	void setTimeslotNumber(const TimeslotNumber& TimeslotNumber) { *static_cast<TimeslotNumber*>(items[0]) = TimeslotNumber; }
};

class DownlinkTimeslotsCodesr7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DownlinkTimeslotsCodesr7(): Sequence(&theInfo) {}

	void setFirstIndividualTimeslotInfo(const IndividualTimeslotInfor7& FirstIndividualTimeslotInfo) { *static_cast<IndividualTimeslotInfor7*>(items[0]) = FirstIndividualTimeslotInfo; }
};

enum DPCModeValues {
	SingleTPC,_DPCMode = 0,
};
typedef Enumerated<CONSTRAINED, 0> DPCMode;

typedef Integer<CONSTRAINED, -82, -3> DPCCHPowerOffset;

typedef Integer<CONSTRAINED, -28, -13> DPCCHPowerOffset2;

typedef Integer<CONSTRAINED, 1, maxTGPS> TGPSI;

class TGPSequence : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	TGPSequence(): Sequence(&theInfo) {}

	void setTgpsi(const TGPSI& Tgpsi) { *static_cast<TGPSI*>(items[0]) = Tgpsi; }
};

typedef SequenceOf<TGPSequence, CONSTRAINED, 1, maxTGPS> TGPSequenceList;

class DPCHCompressedModeInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DPCHCompressedModeInfo(): Sequence(&theInfo) {}

	void setTgpSequenceList(const TGPSequenceList& TgpSequenceList) { *static_cast<TGPSequenceList*>(items[0]) = TgpSequenceList; }
};

class TGPSequencer8 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	TGPSequencer8(): Sequence(&theInfo) {}

	void setTgpsi(const TGPSI& Tgpsi) { *static_cast<TGPSI*>(items[0]) = Tgpsi; }
};

typedef SequenceOf<TGPSequencer8, CONSTRAINED, 1, maxTGPS> TGPSequenceListr8;

class DPCHCompressedModeInfor8 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DPCHCompressedModeInfor8(): Sequence(&theInfo) {}

	void setTgpSequenceList(const TGPSequenceListr8& TgpSequenceList) { *static_cast<TGPSequenceListr8*>(items[0]) = TgpSequenceList; }
};

typedef Integer<CONSTRAINED, 0, 255> TGPSReconfigurationCFN;

class DPCHCompressedModeStatusInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DPCHCompressedModeStatusInfo(): Sequence(&theInfo) {}

	void setTgpsReconfigurationCFN(const TGPSReconfigurationCFN& TgpsReconfigurationCFN) { *static_cast<TGPSReconfigurationCFN*>(items[0]) = TgpsReconfigurationCFN; }
};

typedef Integer<CONSTRAINED, 0, 149> DPCHFrameOffset;

typedef Integer<CONSTRAINED, 0, 9> FDPCHSlotFormat;

enum UEDRXCycleInactivityThresholdValues {
	Subframes0,_UEDRXCycleInactivityThreshold = 0,
};
typedef Enumerated<CONSTRAINED, 0> UEDRXCycleInactivityThreshold;

enum UEDRXCycleValues {
	Subframes4,_UEDRXCycle = 0,
};
typedef Enumerated<CONSTRAINED, 0> UEDRXCycle;

class DRXInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DRXInfo(): Sequence(&theInfo) {}

	void setUedrxCycle(const UEDRXCycle& UedrxCycle) { *static_cast<UEDRXCycle*>(items[0]) = UedrxCycle; }
};

typedef Integer<CONSTRAINED, 1, 1023> MaxTFCIField2Value;

class DSCHMapping : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DSCHMapping(): Sequence(&theInfo) {}

	void setMaxTFCIField2Value(const MaxTFCIField2Value& MaxTFCIField2Value) { *static_cast<MaxTFCIField2Value*>(items[0]) = MaxTFCIField2Value; }
};

typedef SequenceOf<DSCHMapping, CONSTRAINED, 1, maxPDSCH_TFCIgroups> DSCHMappingList;

class DSCHTransportChannelsInfo : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	DSCHTransportChannelsInfo(): Sequence(&theInfo) {}

};

enum UEDTXCycle110msValues {
	Subframes1,_UEDTXCycle110ms = 0,
};
typedef Enumerated<CONSTRAINED, 0> UEDTXCycle110ms;

class DTXEDCHTTI10ms : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DTXEDCHTTI10ms(): Sequence(&theInfo) {}

	void setUedtxCycle110ms(const UEDTXCycle110ms& UedtxCycle110ms) { *static_cast<UEDTXCycle110ms*>(items[0]) = UedtxCycle110ms; }
};

enum UEDTXCycle12msValues {
	Subframes1,_UEDTXCycle12ms = 0,
};
typedef Enumerated<CONSTRAINED, 0> UEDTXCycle12ms;

class DTXEDCHTTI2ms : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DTXEDCHTTI2ms(): Sequence(&theInfo) {}

	void setUedtxCycle12ms(const UEDTXCycle12ms& UedtxCycle12ms) { *static_cast<UEDTXCycle12ms*>(items[0]) = UedtxCycle12ms; }
};

class DTXInfoEdchTTILength : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	DTXInfoEdchTTILength(): Choice(&theInfo) {}
};

class DTXInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DTXInfo(): Sequence(&theInfo) {}

	void setDTXInfoEdchTTILength(const DTXInfoEdchTTILength& DTXInfoEdchTTILength) { *static_cast<DTXInfoEdchTTILength*>(items[0]) = DTXInfoEdchTTILength; }
};

typedef Integer<CONSTRAINED, 1, 4096> DurationTimeInfo;

typedef Integer<CONSTRAINED, 1, 8> DynamicPersistenceLevel;

typedef SequenceOf<DynamicPersistenceLevel, CONSTRAINED, 1, maxPRACH> DynamicPersistenceLevelList;

typedef SequenceOf<DynamicPersistenceLevel, CONSTRAINED, 1, maxTF_CPCH> DynamicPersistenceLevelTFList;

class DynamicTFInformationCCCH : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DynamicTFInformationCCCH(): Sequence(&theInfo) {}

	void setOctetModeRLCSizeInfoType2(const OctetModeRLCSizeInfoType2& OctetModeRLCSizeInfoType2) { *static_cast<OctetModeRLCSizeInfoType2*>(items[0]) = OctetModeRLCSizeInfoType2; }
};

typedef Integer<CONSTRAINED, 0, 255> EAGCHChannelisationCode;

typedef Null EAGCHDRXInfoTDD128EAGCHDRXInfoTypeSameAsHSSCCH;

class EAGCHDRXInfoTDD128EAGCHDRXInfoType : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	EAGCHDRXInfoTDD128EAGCHDRXInfoType(): Choice(&theInfo) {}
};

class EAGCHDRXInfoTDD128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EAGCHDRXInfoTDD128(): Sequence(&theInfo) {}

	void setEAGCHDRXInfoTDD128EAGCHDRXInfoType(const EAGCHDRXInfoTDD128EAGCHDRXInfoType& EAGCHDRXInfoTDD128EAGCHDRXInfoType) { *static_cast<EAGCHDRXInfoTDD128EAGCHDRXInfoType*>(items[0]) = EAGCHDRXInfoTDD128EAGCHDRXInfoType; }
};

enum EAGCHInactivityMonitorThresholdTDD128Values {
	Radioframes0,_EAGCHInactivityMonitorThresholdTDD128 = 0,
};
typedef Enumerated<CONSTRAINED, 0> EAGCHInactivityMonitorThresholdTDD128;

typedef Integer<EXTCONSTRAINED, 0, 14> EAGCHIndividualTSnumber;

class EAGCHIndividual : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EAGCHIndividual(): Sequence(&theInfo) {}

	void setEAGCHIndividualTSnumber(const EAGCHIndividualTSnumber& EAGCHIndividualTSnumber) { *static_cast<EAGCHIndividualTSnumber*>(items[0]) = EAGCHIndividualTSnumber; }
};

typedef Integer<EXTCONSTRAINED, 0, 14> EAGCHIndividualVHCRTSnumber;

class EAGCHIndividualVHCR : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EAGCHIndividualVHCR(): Sequence(&theInfo) {}

	void setEAGCHIndividualVHCRTSnumber(const EAGCHIndividualVHCRTSnumber& EAGCHIndividualVHCRTSnumber) { *static_cast<EAGCHIndividualVHCRTSnumber*>(items[0]) = EAGCHIndividualVHCRTSnumber; }
};

class EAGCHIndividualLCR : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EAGCHIndividualLCR(): Sequence(&theInfo) {}

	void setTimeslotNumber(const TimeslotNumberLCRr4& TimeslotNumber) { *static_cast<TimeslotNumberLCRr4*>(items[0]) = TimeslotNumber; }
};

class EAGCHInformation : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EAGCHInformation(): Sequence(&theInfo) {}

	void setEAGCHChannelisationCode(const EAGCHChannelisationCode& EAGCHChannelisationCode) { *static_cast<EAGCHChannelisationCode*>(items[0]) = EAGCHChannelisationCode; }
};

class EAGCHInformationr7ModeSpecific : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	EAGCHInformationr7ModeSpecific(): Choice(&theInfo) {}
};

class EAGCHInformationr7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EAGCHInformationr7(): Sequence(&theInfo) {}

	void setEAGCHInformationr7ModeSpecific(const EAGCHInformationr7ModeSpecific& EAGCHInformationr7ModeSpecific) { *static_cast<EAGCHInformationr7ModeSpecific*>(items[0]) = EAGCHInformationr7ModeSpecific; }
};

class EAGCHInformationr8ModeSpecific : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	EAGCHInformationr8ModeSpecific(): Choice(&theInfo) {}
};

class EAGCHInformationr8 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EAGCHInformationr8(): Sequence(&theInfo) {}

	void setEAGCHInformationr8ModeSpecific(const EAGCHInformationr8ModeSpecific& EAGCHInformationr8ModeSpecific) { *static_cast<EAGCHInformationr8ModeSpecific*>(items[0]) = EAGCHInformationr8ModeSpecific; }
};

typedef Boolean EAGCHInformationTDD128RdiIndicator;

class EAGCHInformationTDD128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EAGCHInformationTDD128(): Sequence(&theInfo) {}

	void setEAGCHInformationTDD128RdiIndicator(const EAGCHInformationTDD128RdiIndicator& EAGCHInformationTDD128RdiIndicator) { *static_cast<EAGCHInformationTDD128RdiIndicator*>(items[0]) = EAGCHInformationTDD128RdiIndicator; }
};

typedef SequenceOf<EAGCHIndividual, CONSTRAINED, 1, maxNumE_AGCH> EAGCHSetConfig;

typedef SequenceOf<EAGCHIndividualVHCR, CONSTRAINED, 1, maxNumE_AGCH> EAGCHSetConfigVHCR;

typedef SequenceOf<EAGCHIndividualLCR, CONSTRAINED, 1, maxNumE_AGCH> EAGCHSetConfigLCR;

typedef Integer<CONSTRAINED, 0, 127> EDCHMinimumSetETFCI;

class EDCHRLInfoNewServingCell : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EDCHRLInfoNewServingCell(): Sequence(&theInfo) {}

	void setPrimaryCPICHInfo(const PrimaryCPICHInfo& PrimaryCPICHInfo) { *static_cast<PrimaryCPICHInfo*>(items[0]) = PrimaryCPICHInfo; }
};

class EDCHReconfigurationInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EDCHReconfigurationInfo(): Sequence(&theInfo) {}

	void setEDCHRLInfoNewServingCell(const EDCHRLInfoNewServingCell& EDCHRLInfoNewServingCell) { *static_cast<EDCHRLInfoNewServingCell*>(items[0]) = EDCHRLInfoNewServingCell; }
};

class EDCHRLInfoNewServingCellr7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EDCHRLInfoNewServingCellr7(): Sequence(&theInfo) {}

	void setPrimaryCPICHInfo(const PrimaryCPICHInfo& PrimaryCPICHInfo) { *static_cast<PrimaryCPICHInfo*>(items[0]) = PrimaryCPICHInfo; }
};

class EDCHReconfigurationInfor7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EDCHReconfigurationInfor7(): Sequence(&theInfo) {}

	void setEDCHRLInfoNewServingCell(const EDCHRLInfoNewServingCellr7& EDCHRLInfoNewServingCell) { *static_cast<EDCHRLInfoNewServingCellr7*>(items[0]) = EDCHRLInfoNewServingCell; }
};

class EDCHRLInfoNewSecServingCell : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EDCHRLInfoNewSecServingCell(): Sequence(&theInfo) {}

	void setEAGCHInformation(const EAGCHInformation& EAGCHInformation) { *static_cast<EAGCHInformation*>(items[0]) = EAGCHInformation; }
};

class EDCHReconfigurationInfoSecULFrequency : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EDCHReconfigurationInfoSecULFrequency(): Sequence(&theInfo) {}

	void setEDCHRLInfoNewSecServingCell(const EDCHRLInfoNewSecServingCell& EDCHRLInfoNewSecServingCell) { *static_cast<EDCHRLInfoNewSecServingCell*>(items[0]) = EDCHRLInfoNewSecServingCell; }
};

class EDCHRLInfoOtherCell : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EDCHRLInfoOtherCell(): Sequence(&theInfo) {}

	void setPrimaryCPICHInfo(const PrimaryCPICHInfo& PrimaryCPICHInfo) { *static_cast<PrimaryCPICHInfo*>(items[0]) = PrimaryCPICHInfo; }
};

class EDCHRLInfoOtherCellSecULFreq : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EDCHRLInfoOtherCellSecULFreq(): Sequence(&theInfo) {}

	void setPrimaryCPICHInfo(const PrimaryCPICHInfo& PrimaryCPICHInfo) { *static_cast<PrimaryCPICHInfo*>(items[0]) = PrimaryCPICHInfo; }
};

typedef Integer<CONSTRAINED, 0, 8> EDPCCHDPCCHPowerOffset;

class EDCHRLInfoSameServingCell : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EDCHRLInfoSameServingCell(): Sequence(&theInfo) {}

	void setEDPCCHDPCCHPowerOffset(const EDPCCHDPCCHPowerOffset& EDPCCHDPCCHPowerOffset) { *static_cast<EDPCCHDPCCHPowerOffset*>(items[0]) = EDPCCHDPCCHPowerOffset; }
};

typedef Null EDCHSPSInformationTDD128EdchSPSOperationContinue;

class EDCHSPSInformationTDD128EdchSPSOperation : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	EDCHSPSInformationTDD128EdchSPSOperation(): Choice(&theInfo) {}
};

class EDCHSPSInformationTDD128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EDCHSPSInformationTDD128(): Sequence(&theInfo) {}

	void setEDCHSPSInformationTDD128EdchSPSOperation(const EDCHSPSInformationTDD128EdchSPSOperation& EDCHSPSInformationTDD128EdchSPSOperation) { *static_cast<EDCHSPSInformationTDD128EdchSPSOperation*>(items[0]) = EDCHSPSInformationTDD128EdchSPSOperation; }
};

typedef Integer<EXTCONSTRAINED, 0, 3> EHICHInformationForSPSTDD128ConfigurationmodeImplicitEi;

class EHICHInformationForSPSTDD128ConfigurationmodeImplicit : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EHICHInformationForSPSTDD128ConfigurationmodeImplicit(): Sequence(&theInfo) {}

	void setEHICHInformationForSPSTDD128ConfigurationmodeImplicitEi(const EHICHInformationForSPSTDD128ConfigurationmodeImplicitEi& EHICHInformationForSPSTDD128ConfigurationmodeImplicitEi) { *static_cast<EHICHInformationForSPSTDD128ConfigurationmodeImplicitEi*>(items[0]) = EHICHInformationForSPSTDD128ConfigurationmodeImplicitEi; }
};

class EHICHInformationForSPSTDD128Configurationmode : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	EHICHInformationForSPSTDD128Configurationmode(): Choice(&theInfo) {}
};

class EHICHInformationForSPSTDD128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EHICHInformationForSPSTDD128(): Sequence(&theInfo) {}

	void setEHICHInformationForSPSTDD128Configurationmode(const EHICHInformationForSPSTDD128Configurationmode& EHICHInformationForSPSTDD128Configurationmode) { *static_cast<EHICHInformationForSPSTDD128Configurationmode*>(items[0]) = EHICHInformationForSPSTDD128Configurationmode; }
};

class EDCHSPSNewOperationTDD128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EDCHSPSNewOperationTDD128(): Sequence(&theInfo) {}

	void setEhichInfo(const EHICHInformationForSPSTDD128& EhichInfo) { *static_cast<EHICHInformationForSPSTDD128*>(items[0]) = EhichInfo; }
};

class EDCHTxPatternListTDD128 : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	EDCHTxPatternListTDD128(): Sequence(&theInfo) {}

};

class EDPCCHInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EDPCCHInfo(): Sequence(&theInfo) {}

	void setEDPCCHDPCCHPowerOffset(const EDPCCHDPCCHPowerOffset& EDPCCHDPCCHPowerOffset) { *static_cast<EDPCCHDPCCHPowerOffset*>(items[0]) = EDPCCHDPCCHPowerOffset; }
};

class EDPCCHInfor7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EDPCCHInfor7(): Sequence(&theInfo) {}

	void setEDPCCHDPCCHPowerOffset(const EDPCCHDPCCHPowerOffset& EDPCCHDPCCHPowerOffset) { *static_cast<EDPCCHDPCCHPowerOffset*>(items[0]) = EDPCCHDPCCHPowerOffset; }
};

typedef Integer<CONSTRAINED, 0, 1> ETFCITableIndex;

class EDPDCHInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EDPDCHInfo(): Sequence(&theInfo) {}

	void setETFCITableIndex(const ETFCITableIndex& ETFCITableIndex) { *static_cast<ETFCITableIndex*>(items[0]) = ETFCITableIndex; }
};

class EDPDCHInfor7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EDPDCHInfor7(): Sequence(&theInfo) {}

	void setETFCITableIndex(const ETFCITableIndex& ETFCITableIndex) { *static_cast<ETFCITableIndex*>(items[0]) = ETFCITableIndex; }
};

class EDPDCHInfor8 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EDPDCHInfor8(): Sequence(&theInfo) {}

	void setETFCITableIndex(const ETFCITableIndex& ETFCITableIndex) { *static_cast<ETFCITableIndex*>(items[0]) = ETFCITableIndex; }
};

enum EDPDCHPeriodicyOfSchedInfoValues {
	EveryEDCHTTI,_EDPDCHPeriodicyOfSchedInfo = 0,
};
typedef Enumerated<CONSTRAINED, 0> EDPDCHPeriodicyOfSchedInfo;

typedef Integer<CONSTRAINED, 11, 25> EDPDCHPLNonMax;

typedef Boolean EDPDCHPowerInterpolation;

typedef Integer<EXTCONSTRAINED, 0, 127> EDPDCHReferenceETFCIReferenceETFCI;

class EDPDCHReferenceETFCI : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EDPDCHReferenceETFCI(): Sequence(&theInfo) {}

	void setEDPDCHReferenceETFCIReferenceETFCI(const EDPDCHReferenceETFCIReferenceETFCI& EDPDCHReferenceETFCIReferenceETFCI) { *static_cast<EDPDCHReferenceETFCIReferenceETFCI*>(items[0]) = EDPDCHReferenceETFCIReferenceETFCI; }
};

typedef Integer<EXTCONSTRAINED, 0, 127> EDPDCHReferenceETFCIr7ReferenceETFCI;

class EDPDCHReferenceETFCIr7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EDPDCHReferenceETFCIr7(): Sequence(&theInfo) {}

	void setEDPDCHReferenceETFCIr7ReferenceETFCI(const EDPDCHReferenceETFCIr7ReferenceETFCI& EDPDCHReferenceETFCIr7ReferenceETFCI) { *static_cast<EDPDCHReferenceETFCIr7ReferenceETFCI*>(items[0]) = EDPDCHReferenceETFCIr7ReferenceETFCI; }
};

typedef SequenceOf<EDPDCHReferenceETFCI, CONSTRAINED, 1, 8> EDPDCHReferenceETFCIList;

typedef SequenceOf<EDPDCHReferenceETFCIr7, CONSTRAINED, 1, 8> EDPDCHReferenceETFCIListr7;

typedef BitString<EXTCONSTRAINED, 8, 8> EDPDCHSchedulingTransmConfigurationMs2SchedTransmGrantHARQAlloc;

class EDPDCHSchedulingTransmConfiguration : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EDPDCHSchedulingTransmConfiguration(): Sequence(&theInfo) {}

	void setEDPDCHSchedulingTransmConfigurationMs2SchedTransmGrantHARQAlloc(const EDPDCHSchedulingTransmConfigurationMs2SchedTransmGrantHARQAlloc& EDPDCHSchedulingTransmConfigurationMs2SchedTransmGrantHARQAlloc) { *static_cast<EDPDCHSchedulingTransmConfigurationMs2SchedTransmGrantHARQAlloc*>(items[0]) = EDPDCHSchedulingTransmConfigurationMs2SchedTransmGrantHARQAlloc; }
};

enum EDPDCHMaxChannelisationCodesValues {
	Sf256,_EDPDCHMaxChannelisationCodes = 0,
};
typedef Enumerated<CONSTRAINED, 0> EDPDCHMaxChannelisationCodes;

typedef Integer<CONSTRAINED, 0, 127> EHICHChannelisationCode;

class EHICHInformation : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EHICHInformation(): Sequence(&theInfo) {}

	void setChannelisationCode(const EHICHChannelisationCode& ChannelisationCode) { *static_cast<EHICHChannelisationCode*>(items[0]) = ChannelisationCode; }
};

class EHICHInformationCommonEdch : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EHICHInformationCommonEdch(): Sequence(&theInfo) {}

	void setChannelisationCode(const EHICHChannelisationCode& ChannelisationCode) { *static_cast<EHICHChannelisationCode*>(items[0]) = ChannelisationCode; }
};

typedef Integer<EXTCONSTRAINED, 4, 44> EHICHInformationTDD384768NEHICH;

class EHICHInformationTDD384768 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EHICHInformationTDD384768(): Sequence(&theInfo) {}

	void setEHICHInformationTDD384768NEHICH(const EHICHInformationTDD384768NEHICH& EHICHInformationTDD384768NEHICH) { *static_cast<EHICHInformationTDD384768NEHICH*>(items[0]) = EHICHInformationTDD384768NEHICH; }
};

typedef Integer<EXTCONSTRAINED, 0, 3> EHICHInformationLCREi;

class EHICHInformationLCR : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EHICHInformationLCR(): Sequence(&theInfo) {}

	void setEHICHInformationLCREi(const EHICHInformationLCREi& EHICHInformationLCREi) { *static_cast<EHICHInformationLCREi*>(items[0]) = EHICHInformationLCREi; }
};

typedef Integer<EXTCONSTRAINED, 4, 15> EHICHInformationTDD128NEHICH;

class EHICHInformationTDD128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EHICHInformationTDD128(): Sequence(&theInfo) {}

	void setEHICHInformationTDD128NEHICH(const EHICHInformationTDD128NEHICH& EHICHInformationTDD128NEHICH) { *static_cast<EHICHInformationTDD128NEHICH*>(items[0]) = EHICHInformationTDD128NEHICH; }
};

typedef SequenceOf<EHICHInformationLCR, CONSTRAINED, 1, maxNumE_HICH> EHICHInformationLCRList;

typedef Integer<CONSTRAINED, 0, 39> EHICHRGCHSignatureSequence;

typedef Integer<EXTCONSTRAINED, 0, 10> ReferenceBetaQPSKReferenceCodeRate;

class ReferenceBetaQPSK : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ReferenceBetaQPSK(): Sequence(&theInfo) {}

	void setReferenceBetaQPSKReferenceCodeRate(const ReferenceBetaQPSKReferenceCodeRate& ReferenceBetaQPSKReferenceCodeRate) { *static_cast<ReferenceBetaQPSKReferenceCodeRate*>(items[0]) = ReferenceBetaQPSKReferenceCodeRate; }
};

typedef SequenceOf<ReferenceBetaQPSK, EXTCONSTRAINED, 1, 8> ETFCSInfoReferenceBetaQPSKList;

class ETFCSInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ETFCSInfo(): Sequence(&theInfo) {}

	void setETFCSInfoReferenceBetaQPSKList(const ETFCSInfoReferenceBetaQPSKList& ETFCSInfoReferenceBetaQPSKList) { *static_cast<ETFCSInfoReferenceBetaQPSKList*>(items[0]) = ETFCSInfoReferenceBetaQPSKList; }
};

class EPUCHInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EPUCHInfo(): Sequence(&theInfo) {}

	void setETFCSInfo(const ETFCSInfo& ETFCSInfo) { *static_cast<ETFCSInfo*>(items[0]) = ETFCSInfo; }
};

class EPUCHInfoTDD128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EPUCHInfoTDD128(): Sequence(&theInfo) {}

	void setETFCSInfo(const ETFCSInfo& ETFCSInfo) { *static_cast<ETFCSInfo*>(items[0]) = ETFCSInfo; }
};

typedef Integer<EXTCONSTRAINED, 0, 14> EPUCHTSSlotsTsNumber;

class EPUCHTSSlots : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EPUCHTSSlots(): Sequence(&theInfo) {}

	void setEPUCHTSSlotsTsNumber(const EPUCHTSSlotsTsNumber& EPUCHTSSlotsTsNumber) { *static_cast<EPUCHTSSlotsTsNumber*>(items[0]) = EPUCHTSSlotsTsNumber; }
};

class EPUCHTSSlotsLCR : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EPUCHTSSlotsLCR(): Sequence(&theInfo) {}

	void setTimeslotNumber(const TimeslotNumberLCRr4& TimeslotNumber) { *static_cast<TimeslotNumberLCRr4*>(items[0]) = TimeslotNumber; }
};

typedef Integer<CONSTRAINED, 0, 5> ERGCHCombinationIndex;

class ERGCHInformation : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ERGCHInformation(): Sequence(&theInfo) {}

	void setSignatureSequence(const EHICHRGCHSignatureSequence& SignatureSequence) { *static_cast<EHICHRGCHSignatureSequence*>(items[0]) = SignatureSequence; }
};

class ERGCHInformationCommonEdch : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ERGCHInformationCommonEdch(): Sequence(&theInfo) {}

	void setSignatureSequence(const EHICHRGCHSignatureSequence& SignatureSequence) { *static_cast<EHICHRGCHSignatureSequence*>(items[0]) = SignatureSequence; }
};


typedef Integer<EXTCONSTRAINED, 0, 14> ERUCCHInfoModeSpecificInfoTdd384tdd768ERUCCHConstantValue;

class ERUCCHInfoModeSpecificInfoTdd384tdd768 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ERUCCHInfoModeSpecificInfoTdd384tdd768(): Sequence(&theInfo) {}

	void setERUCCHInfoModeSpecificInfoTdd384tdd768ERUCCHConstantValue(const ERUCCHInfoModeSpecificInfoTdd384tdd768ERUCCHConstantValue& ERUCCHInfoModeSpecificInfoTdd384tdd768ERUCCHConstantValue) { *static_cast<ERUCCHInfoModeSpecificInfoTdd384tdd768ERUCCHConstantValue*>(items[0]) = ERUCCHInfoModeSpecificInfoTdd384tdd768ERUCCHConstantValue; }
};

class ERUCCHInfoModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	ERUCCHInfoModeSpecificInfo(): Choice(&theInfo) {}
};

class ERUCCHInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ERUCCHInfo(): Sequence(&theInfo) {}

	void setERUCCHInfoModeSpecificInfo(const ERUCCHInfoModeSpecificInfo& ERUCCHInfoModeSpecificInfo) { *static_cast<ERUCCHInfoModeSpecificInfo*>(items[0]) = ERUCCHInfoModeSpecificInfo; }
};

enum ERUCCHInfoTDD128t_RUCCHValues {
	Ms20,_ERUCCHInfoTDD128t_RUCCH = 0,
};
typedef Enumerated<CONSTRAINED, 0> ERUCCHInfoTDD128t_RUCCH;

class ERUCCHInfoTDD128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ERUCCHInfoTDD128(): Sequence(&theInfo) {}

	void setERUCCHInfoTDD128t_RUCCH(const ERUCCHInfoTDD128t_RUCCH& ERUCCHInfoTDD128t_RUCCH) { *static_cast<ERUCCHInfoTDD128t_RUCCH*>(items[0]) = ERUCCHInfoTDD128t_RUCCH; }
};

typedef Integer<EXTCONSTRAINED, 0, 127> ETFCBoostInfor7ETFCIBoost;

class ETFCBoostInfor7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ETFCBoostInfor7(): Sequence(&theInfo) {}

	void setETFCBoostInfor7ETFCIBoost(const ETFCBoostInfor7ETFCIBoost& ETFCBoostInfor7ETFCIBoost) { *static_cast<ETFCBoostInfor7ETFCIBoost*>(items[0]) = ETFCBoostInfor7ETFCIBoost; }
};

typedef Integer<CONSTRAINED, 0, 65535> EARFCN;

enum EnablingDelayValues {
	Radioframes0,_EnablingDelay = 0,
};
typedef Enumerated<CONSTRAINED, 0> EnablingDelay;

enum EnablingDelayTDD128Values {
	Radioframes0,_EnablingDelayTDD128 = 0,
};
typedef Enumerated<CONSTRAINED, 0> EnablingDelayTDD128;

typedef Integer<EXTCONSTRAINED, 0, 255> EXTULTimingAdvanceModeSpecificInfoTdd384ExulTimingAdvance;

class EXTULTimingAdvanceModeSpecificInfoTdd384 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EXTULTimingAdvanceModeSpecificInfoTdd384(): Sequence(&theInfo) {}

	void setEXTULTimingAdvanceModeSpecificInfoTdd384ExulTimingAdvance(const EXTULTimingAdvanceModeSpecificInfoTdd384ExulTimingAdvance& EXTULTimingAdvanceModeSpecificInfoTdd384ExulTimingAdvance) { *static_cast<EXTULTimingAdvanceModeSpecificInfoTdd384ExulTimingAdvance*>(items[0]) = EXTULTimingAdvanceModeSpecificInfoTdd384ExulTimingAdvance; }
};

class EXTULTimingAdvanceModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	EXTULTimingAdvanceModeSpecificInfo(): Choice(&theInfo) {}
};

class EXTULTimingAdvance : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EXTULTimingAdvance(): Sequence(&theInfo) {}

	void setEXTULTimingAdvanceModeSpecificInfo(const EXTULTimingAdvanceModeSpecificInfo& EXTULTimingAdvanceModeSpecificInfo) { *static_cast<EXTULTimingAdvanceModeSpecificInfo*>(items[0]) = EXTULTimingAdvanceModeSpecificInfo; }
};

class FACHPCHInformation : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	FACHPCHInformation(): Sequence(&theInfo) {}

	void setTransportFormatSet(const TransportFormatSet& TransportFormatSet) { *static_cast<TransportFormatSet*>(items[0]) = TransportFormatSet; }
};

typedef SequenceOf<FACHPCHInformation, CONSTRAINED, 1, maxFACHPCH> FACHPCHInformationList;

enum FeedbackcycleValues {
	Fc0,_Feedbackcycle = 0,
};
typedef Enumerated<CONSTRAINED, 0> Feedbackcycle;

enum Feedbackcycler7Values {
	Fc0,_Feedbackcycler7 = 0,
};
typedef Enumerated<CONSTRAINED, 0> Feedbackcycler7;

class FPACHInfor4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	FPACHInfor4(): Sequence(&theInfo) {}

	void setTimeslot(const TimeslotNumberLCRr4& Timeslot) { *static_cast<TimeslotNumberLCRr4*>(items[0]) = Timeslot; }
};


typedef Integer<CONSTRAINED, 0, 16383> UARFCN;

class FrequencyInfoTDD : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	FrequencyInfoTDD(): Sequence(&theInfo) {}

	void setUarfcnNt(const UARFCN& UarfcnNt) { *static_cast<UARFCN*>(items[0]) = UarfcnNt; }
};

enum HappyBitDelayConditionValues {
	Ms2,_HappyBitDelayCondition = 0,
};
typedef Enumerated<CONSTRAINED, 0> HappyBitDelayCondition;

typedef Integer<CONSTRAINED, 0, 1> HARQPreambleMode;

class HSChannelisationCodeSetInfoLCR : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HSChannelisationCodeSetInfoLCR(): Sequence(&theInfo) {}

	void setStartCode(const HSChannelisationCodeLCR& StartCode) { *static_cast<HSChannelisationCodeLCR*>(items[0]) = StartCode; }
};

class HSDSCHCommonSystemInformation : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HSDSCHCommonSystemInformation(): Sequence(&theInfo) {}

	void setCcchMappingInfo(const CommonRBMappingInfo& CcchMappingInfo) { *static_cast<CommonRBMappingInfo*>(items[0]) = CcchMappingInfo; }
};

class HSDSCHCommonSystemInformationTDD128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HSDSCHCommonSystemInformationTDD128(): Sequence(&theInfo) {}

	void setCcchMappingInfo(const CommonRBMappingInfo& CcchMappingInfo) { *static_cast<CommonRBMappingInfo*>(items[0]) = CcchMappingInfo; }
};

enum HSDSCHDrxBurstFachValues {
	F1,_HSDSCHDrxBurstFach = 0,
};
typedef Enumerated<CONSTRAINED, 0> HSDSCHDrxBurstFach;

class HSDSCHDrxCellfachinfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HSDSCHDrxCellfachinfo(): Sequence(&theInfo) {}

	void setT321(const T321& T321) { *static_cast<T321*>(items[0]) = T321; }
};

class HSDSCHDrxCellfachinfoTDD128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HSDSCHDrxCellfachinfoTDD128(): Sequence(&theInfo) {}

	void setT321(const T321& T321) { *static_cast<T321*>(items[0]) = T321; }
};

enum HSDSCHDrxCycleFachValues {
	F4,_HSDSCHDrxCycleFach = 0,
};
typedef Enumerated<CONSTRAINED, 0> HSDSCHDrxCycleFach;

class PICHForHSDPASupportedPagingTDD128Implicit : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PICHForHSDPASupportedPagingTDD128Implicit(): Sequence(&theInfo) {}

	void setOccurrenceSequenceNumberOfPICH(const OccurrenceSequenceNumberOfPICH& OccurrenceSequenceNumberOfPICH) { *static_cast<OccurrenceSequenceNumberOfPICH*>(items[0]) = OccurrenceSequenceNumberOfPICH; }
};

class PICHForHSDPASupportedPagingTDD128 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	PICHForHSDPASupportedPagingTDD128(): Choice(&theInfo) {}
};

typedef SequenceOf<PICHForHSDPASupportedPagingTDD128, EXTCONSTRAINED, 1, maxSCCPCH> HSDSCHPagingSystemInformationTDD128PichForHsdschList;

class HSDSCHPagingSystemInformationTDD128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HSDSCHPagingSystemInformationTDD128(): Sequence(&theInfo) {}

	void setHSDSCHPagingSystemInformationTDD128PichForHsdschList(const HSDSCHPagingSystemInformationTDD128PichForHsdschList& HSDSCHPagingSystemInformationTDD128PichForHsdschList) { *static_cast<HSDSCHPagingSystemInformationTDD128PichForHsdschList*>(items[0]) = HSDSCHPagingSystemInformationTDD128PichForHsdschList; }
};

class HSDSCHRxPatternListTDD128 : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	HSDSCHRxPatternListTDD128(): Sequence(&theInfo) {}

};

enum HSDSCHTBSizeTableValues {
	octetAligned_HSDSCHTBSizeTable = 0,
};
typedef Enumerated<CONSTRAINED, 0> HSDSCHTBSizeTable;

class HSDSCHTbsListTDD128 : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	HSDSCHTbsListTDD128(): Sequence(&theInfo) {}

};

typedef Null HSDSCHSPSInformationTDD128HsdschSPSOperationContinue;

class HSDSCHSPSInformationTDD128HsdschSPSOperation : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	HSDSCHSPSInformationTDD128HsdschSPSOperation(): Choice(&theInfo) {}
};

class HSDSCHSPSInformationTDD128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HSDSCHSPSInformationTDD128(): Sequence(&theInfo) {}

	void setHSDSCHSPSInformationTDD128HsdschSPSOperation(const HSDSCHSPSInformationTDD128HsdschSPSOperation& HSDSCHSPSInformationTDD128HsdschSPSOperation) { *static_cast<HSDSCHSPSInformationTDD128HsdschSPSOperation*>(items[0]) = HSDSCHSPSInformationTDD128HsdschSPSOperation; }
};

class HSDSCHSPSNewOperationTDD128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HSDSCHSPSNewOperationTDD128(): Sequence(&theInfo) {}

	void setHsdschTbsList(const HSDSCHTbsListTDD128& HsdschTbsList) { *static_cast<HSDSCHTbsListTDD128*>(items[0]) = HsdschTbsList; }
};

typedef Null HSPDSCHMidambleConfigurationTDD128MidambleAllocationModeDefaultMidamble;

class HSPDSCHMidambleConfigurationTDD128MidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	HSPDSCHMidambleConfigurationTDD128MidambleAllocationMode(): Choice(&theInfo) {}
};

class HSPDSCHMidambleConfigurationTDD128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HSPDSCHMidambleConfigurationTDD128(): Sequence(&theInfo) {}

	void setHSPDSCHMidambleConfigurationTDD128MidambleAllocationMode(const HSPDSCHMidambleConfigurationTDD128MidambleAllocationMode& HSPDSCHMidambleConfigurationTDD128MidambleAllocationMode) { *static_cast<HSPDSCHMidambleConfigurationTDD128MidambleAllocationMode*>(items[0]) = HSPDSCHMidambleConfigurationTDD128MidambleAllocationMode; }
};

class HSSCCHInfoModeSpecificInfoFddHSSCCHChannelisationCodeInfo : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	HSSCCHInfoModeSpecificInfoFddHSSCCHChannelisationCodeInfo(): Sequence(&theInfo) {}

};

class HSSCCHInfoModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HSSCCHInfoModeSpecificInfoFdd(): Sequence(&theInfo) {}

	void setHSSCCHInfoModeSpecificInfoFddHSSCCHChannelisationCodeInfo(const HSSCCHInfoModeSpecificInfoFddHSSCCHChannelisationCodeInfo& HSSCCHInfoModeSpecificInfoFddHSSCCHChannelisationCodeInfo) { *static_cast<HSSCCHInfoModeSpecificInfoFddHSSCCHChannelisationCodeInfo*>(items[0]) = HSSCCHInfoModeSpecificInfoFddHSSCCHChannelisationCodeInfo; }
};

class HSSCCHInfoModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	HSSCCHInfoModeSpecificInfo(): Choice(&theInfo) {}
};

class HSSCCHInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HSSCCHInfo(): Sequence(&theInfo) {}

	void setHSSCCHInfoModeSpecificInfo(const HSSCCHInfoModeSpecificInfo& HSSCCHInfoModeSpecificInfo) { *static_cast<HSSCCHInfoModeSpecificInfo*>(items[0]) = HSSCCHInfoModeSpecificInfo; }
};

class HSSCCHInfor6ModeSpecificInfoFddHSSCCHChannelisationCodeInfo : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	HSSCCHInfor6ModeSpecificInfoFddHSSCCHChannelisationCodeInfo(): Sequence(&theInfo) {}

};

class HSSCCHInfor6ModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HSSCCHInfor6ModeSpecificInfoFdd(): Sequence(&theInfo) {}

	void setHSSCCHInfor6ModeSpecificInfoFddHSSCCHChannelisationCodeInfo(const HSSCCHInfor6ModeSpecificInfoFddHSSCCHChannelisationCodeInfo& HSSCCHInfor6ModeSpecificInfoFddHSSCCHChannelisationCodeInfo) { *static_cast<HSSCCHInfor6ModeSpecificInfoFddHSSCCHChannelisationCodeInfo*>(items[0]) = HSSCCHInfor6ModeSpecificInfoFddHSSCCHChannelisationCodeInfo; }
};

class HSSCCHInfor6ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	HSSCCHInfor6ModeSpecificInfo(): Choice(&theInfo) {}
};

class HSSCCHInfor6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HSSCCHInfor6(): Sequence(&theInfo) {}

	void setHSSCCHInfor6ModeSpecificInfo(const HSSCCHInfor6ModeSpecificInfo& HSSCCHInfor6ModeSpecificInfo) { *static_cast<HSSCCHInfor6ModeSpecificInfo*>(items[0]) = HSSCCHInfor6ModeSpecificInfo; }
};

class HSSCCHInfor7ModeSpecificInfoFddHSSCCHChannelisationCodeInfo : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	HSSCCHInfor7ModeSpecificInfoFddHSSCCHChannelisationCodeInfo(): Sequence(&theInfo) {}

};

class HSSCCHInfor7ModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HSSCCHInfor7ModeSpecificInfoFdd(): Sequence(&theInfo) {}

	void setHSSCCHInfor7ModeSpecificInfoFddHSSCCHChannelisationCodeInfo(const HSSCCHInfor7ModeSpecificInfoFddHSSCCHChannelisationCodeInfo& HSSCCHInfor7ModeSpecificInfoFddHSSCCHChannelisationCodeInfo) { *static_cast<HSSCCHInfor7ModeSpecificInfoFddHSSCCHChannelisationCodeInfo*>(items[0]) = HSSCCHInfor7ModeSpecificInfoFddHSSCCHChannelisationCodeInfo; }
};

class HSSCCHInfor7ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	HSSCCHInfor7ModeSpecificInfo(): Choice(&theInfo) {}
};

class HSSCCHInfor7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HSSCCHInfor7(): Sequence(&theInfo) {}

	void setHSSCCHInfor7ModeSpecificInfo(const HSSCCHInfor7ModeSpecificInfo& HSSCCHInfor7ModeSpecificInfo) { *static_cast<HSSCCHInfor7ModeSpecificInfo*>(items[0]) = HSSCCHInfor7ModeSpecificInfo; }
};

class HSSCCHInfor9ModeSpecificInfoFddHSSCCHChannelisationCodeInfo : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	HSSCCHInfor9ModeSpecificInfoFddHSSCCHChannelisationCodeInfo(): Sequence(&theInfo) {}

};

class HSSCCHInfor9ModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HSSCCHInfor9ModeSpecificInfoFdd(): Sequence(&theInfo) {}

	void setHSSCCHInfor9ModeSpecificInfoFddHSSCCHChannelisationCodeInfo(const HSSCCHInfor9ModeSpecificInfoFddHSSCCHChannelisationCodeInfo& HSSCCHInfor9ModeSpecificInfoFddHSSCCHChannelisationCodeInfo) { *static_cast<HSSCCHInfor9ModeSpecificInfoFddHSSCCHChannelisationCodeInfo*>(items[0]) = HSSCCHInfor9ModeSpecificInfoFddHSSCCHChannelisationCodeInfo; }
};

class HSSCCHInfor9ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	HSSCCHInfor9ModeSpecificInfo(): Choice(&theInfo) {}
};

class HSSCCHInfor9 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HSSCCHInfor9(): Sequence(&theInfo) {}

	void setHSSCCHInfor9ModeSpecificInfo(const HSSCCHInfor9ModeSpecificInfo& HSSCCHInfor9ModeSpecificInfo) { *static_cast<HSSCCHInfor9ModeSpecificInfo*>(items[0]) = HSSCCHInfor9ModeSpecificInfo; }
};

enum HSSCCHDRXInactivityThresholdTDD128Values {
	Subframes1,_HSSCCHDRXInactivityThresholdTDD128 = 0,
};
typedef Enumerated<CONSTRAINED, 0> HSSCCHDRXInactivityThresholdTDD128;

class HSSCCHDRXInfoTDD128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HSSCCHDRXInfoTDD128(): Sequence(&theInfo) {}

	void setHSSCCHDRXCycle(const ControlChannelDRXCycleTDD128& HSSCCHDRXCycle) { *static_cast<ControlChannelDRXCycleTDD128*>(items[0]) = HSSCCHDRXCycle; }
};

typedef Integer<CONSTRAINED, 0, 127> HSSCCHCodes;

typedef Integer<EXTCONSTRAINED, 1, 15> HSSCCHLessNewOperationHspdschCodeIndex;

class HSSCCHLessNewOperation : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HSSCCHLessNewOperation(): Sequence(&theInfo) {}

	void setHSSCCHLessNewOperationHspdschCodeIndex(const HSSCCHLessNewOperationHspdschCodeIndex& HSSCCHLessNewOperationHspdschCodeIndex) { *static_cast<HSSCCHLessNewOperationHspdschCodeIndex*>(items[0]) = HSSCCHLessNewOperationHspdschCodeIndex; }
};

typedef Null HSSCCHLessInfor7HsscchLessOperationContinue;

class HSSCCHLessInfor7HsscchLessOperation : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	HSSCCHLessInfor7HsscchLessOperation(): Choice(&theInfo) {}
};

class HSSCCHLessInfor7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HSSCCHLessInfor7(): Sequence(&theInfo) {}

	void setHSSCCHLessInfor7HsscchLessOperation(const HSSCCHLessInfor7HsscchLessOperation& HSSCCHLessInfor7HsscchLessOperation) { *static_cast<HSSCCHLessInfor7HsscchLessOperation*>(items[0]) = HSSCCHLessInfor7HsscchLessOperation; }
};

class HSSCCHLessTFSList : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	HSSCCHLessTFSList(): Sequence(&theInfo) {}

};

class HSSCCHSystemInfoTDD128HsSCCHSetConfiguration : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	HSSCCHSystemInfoTDD128HsSCCHSetConfiguration(): Sequence(&theInfo) {}

};

class HSSCCHSystemInfoTDD128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HSSCCHSystemInfoTDD128(): Sequence(&theInfo) {}

	void setHSSCCHSystemInfoTDD128HsSCCHSetConfiguration(const HSSCCHSystemInfoTDD128HsSCCHSetConfiguration& HSSCCHSystemInfoTDD128HsSCCHSetConfiguration) { *static_cast<HSSCCHSystemInfoTDD128HsSCCHSetConfiguration*>(items[0]) = HSSCCHSystemInfoTDD128HsSCCHSetConfiguration; }
};

class HSSCCHTDD128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HSSCCHTDD128(): Sequence(&theInfo) {}

	void setTimeslotNumber(const TimeslotNumberLCRr4& TimeslotNumber) { *static_cast<TimeslotNumberLCRr4*>(items[0]) = TimeslotNumber; }
};

class HSSCCHTDD128r6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HSSCCHTDD128r6(): Sequence(&theInfo) {}

	void setTimeslotNumber(const TimeslotNumberLCRr4& TimeslotNumber) { *static_cast<TimeslotNumberLCRr4*>(items[0]) = TimeslotNumber; }
};

class HSSCCHTDD128MultiCarrier : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HSSCCHTDD128MultiCarrier(): Sequence(&theInfo) {}

	void setUarfcnHSSCCHRx(const UARFCN& UarfcnHSSCCHRx) { *static_cast<UARFCN*>(items[0]) = UarfcnHSSCCHRx; }
};

class HSSICHConfigurationTDD128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HSSICHConfigurationTDD128(): Sequence(&theInfo) {}

	void setTimeslotNumber(const TimeslotNumberLCRr4& TimeslotNumber) { *static_cast<TimeslotNumberLCRr4*>(items[0]) = TimeslotNumber; }
};

class HSSICHConfigurationTDD128r6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HSSICHConfigurationTDD128r6(): Sequence(&theInfo) {}

	void setTimeslotNumber(const TimeslotNumberLCRr4& TimeslotNumber) { *static_cast<TimeslotNumberLCRr4*>(items[0]) = TimeslotNumber; }
};

class HSSICHListTDD128 : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	HSSICHListTDD128(): Sequence(&theInfo) {}

};

class HSSICHReferenceSignalInfoList : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	HSSICHReferenceSignalInfoList(): Sequence(&theInfo) {}

};

class HSSCCHTDD384 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HSSCCHTDD384(): Sequence(&theInfo) {}

	void setTimeslotNumber(const TimeslotNumber& TimeslotNumber) { *static_cast<TimeslotNumber*>(items[0]) = TimeslotNumber; }
};

class HSSCCHTDD384r6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HSSCCHTDD384r6(): Sequence(&theInfo) {}

	void setTimeslotNumber(const TimeslotNumber& TimeslotNumber) { *static_cast<TimeslotNumber*>(items[0]) = TimeslotNumber; }
};

class HSSCCHTDD768 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HSSCCHTDD768(): Sequence(&theInfo) {}

	void setTimeslotNumber(const TimeslotNumber& TimeslotNumber) { *static_cast<TimeslotNumber*>(items[0]) = TimeslotNumber; }
};

class HSSICHConfigurationTDD384 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HSSICHConfigurationTDD384(): Sequence(&theInfo) {}

	void setTimeslotNumber(const TimeslotNumber& TimeslotNumber) { *static_cast<TimeslotNumber*>(items[0]) = TimeslotNumber; }
};

class HSSICHConfigurationTDD768 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HSSICHConfigurationTDD768(): Sequence(&theInfo) {}

	void setTimeslotNumber(const TimeslotNumber& TimeslotNumber) { *static_cast<TimeslotNumber*>(items[0]) = TimeslotNumber; }
};

typedef Integer<EXTCONSTRAINED, -22, 40> HSSICHPowerControlInfoTDD384UltargetSIR;

class HSSICHPowerControlInfoTDD384 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HSSICHPowerControlInfoTDD384(): Sequence(&theInfo) {}

	void setHSSICHPowerControlInfoTDD384UltargetSIR(const HSSICHPowerControlInfoTDD384UltargetSIR& HSSICHPowerControlInfoTDD384UltargetSIR) { *static_cast<HSSICHPowerControlInfoTDD384UltargetSIR*>(items[0]) = HSSICHPowerControlInfoTDD384UltargetSIR; }
};

typedef Integer<EXTCONSTRAINED, -22, 40> HSSICHPowerControlInfoTDD768UltargetSIR;

class HSSICHPowerControlInfoTDD768 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HSSICHPowerControlInfoTDD768(): Sequence(&theInfo) {}

	void setHSSICHPowerControlInfoTDD768UltargetSIR(const HSSICHPowerControlInfoTDD768UltargetSIR& HSSICHPowerControlInfoTDD768UltargetSIR) { *static_cast<HSSICHPowerControlInfoTDD768UltargetSIR*>(items[0]) = HSSICHPowerControlInfoTDD768UltargetSIR; }
};

typedef Null MidambleShiftAndBurstTypeLCRr4MidambleAllocationModeDefaultMidamble;

class MidambleShiftAndBurstTypeLCRr4MidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeLCRr4MidambleAllocationMode(): Choice(&theInfo) {}
};

class MidambleShiftAndBurstTypeLCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeLCRr4(): Sequence(&theInfo) {}

	void setMidambleShiftAndBurstTypeLCRr4MidambleAllocationMode(const MidambleShiftAndBurstTypeLCRr4MidambleAllocationMode& MidambleShiftAndBurstTypeLCRr4MidambleAllocationMode) { *static_cast<MidambleShiftAndBurstTypeLCRr4MidambleAllocationMode*>(items[0]) = MidambleShiftAndBurstTypeLCRr4MidambleAllocationMode; }
};

class IndividualTimeslotInfoLCRr4ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IndividualTimeslotInfoLCRr4ext(): Sequence(&theInfo) {}

	void setMidambleShiftAndBurstType(const MidambleShiftAndBurstTypeLCRr4& MidambleShiftAndBurstType) { *static_cast<MidambleShiftAndBurstTypeLCRr4*>(items[0]) = MidambleShiftAndBurstType; }
};

class IndividualTSInterference : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IndividualTSInterference(): Sequence(&theInfo) {}

	void setTimeslot(const TimeslotNumber& Timeslot) { *static_cast<TimeslotNumber*>(items[0]) = Timeslot; }
};

typedef SequenceOf<IndividualTSInterference, CONSTRAINED, 1, maxTS> IndividualTSInterferenceList;

enum ITPValues {
	Mode0,_ITP = 0,
};
typedef Enumerated<CONSTRAINED, 0> ITP;

typedef Integer<CONSTRAINED, 1, 128> NidentifyAbort;

enum MACDTXCycle10msValues {
	Subframes5,_MACDTXCycle10ms = 0,
};
typedef Enumerated<CONSTRAINED, 0> MACDTXCycle10ms;

enum MACDTXCycle2msValues {
	Subframes1,_MACDTXCycle2ms = 0,
};
typedef Enumerated<CONSTRAINED, 0> MACDTXCycle2ms;

enum MACInactivityThresholdValues {
	Edchtti1,_MACInactivityThreshold = 0,
};
typedef Enumerated<CONSTRAINED, 0> MACInactivityThreshold;

typedef Integer<CONSTRAINED, -50, 33> MaxAllowedULTXPower;

typedef Integer<CONSTRAINED, 1, 64> MaxAvailablePCPCHNumber;

typedef Integer<CONSTRAINED, 0, 3> MaxPowerIncreaser4;

typedef Integer<CONSTRAINED, -12, 26> MeasurementPowerOffset;

class MeasurementFeedbackInfoModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasurementFeedbackInfoModeSpecificInfoFdd(): Sequence(&theInfo) {}

	void setMeasurementPowerOffset(const MeasurementPowerOffset& MeasurementPowerOffset) { *static_cast<MeasurementPowerOffset*>(items[0]) = MeasurementPowerOffset; }
};

class MeasurementFeedbackInfoModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	MeasurementFeedbackInfoModeSpecificInfo(): Choice(&theInfo) {}
};

class MeasurementFeedbackInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasurementFeedbackInfo(): Sequence(&theInfo) {}

	void setMeasurementFeedbackInfoModeSpecificInfo(const MeasurementFeedbackInfoModeSpecificInfo& MeasurementFeedbackInfoModeSpecificInfo) { *static_cast<MeasurementFeedbackInfoModeSpecificInfo*>(items[0]) = MeasurementFeedbackInfoModeSpecificInfo; }
};

class MeasurementFeedbackInfor7ModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasurementFeedbackInfor7ModeSpecificInfoFdd(): Sequence(&theInfo) {}

	void setMeasurementPowerOffset(const MeasurementPowerOffset& MeasurementPowerOffset) { *static_cast<MeasurementPowerOffset*>(items[0]) = MeasurementPowerOffset; }
};

class MeasurementFeedbackInfor7ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	MeasurementFeedbackInfor7ModeSpecificInfo(): Choice(&theInfo) {}
};

class MeasurementFeedbackInfor7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasurementFeedbackInfor7(): Sequence(&theInfo) {}

	void setMeasurementFeedbackInfor7ModeSpecificInfo(const MeasurementFeedbackInfor7ModeSpecificInfo& MeasurementFeedbackInfor7ModeSpecificInfo) { *static_cast<MeasurementFeedbackInfor7ModeSpecificInfo*>(items[0]) = MeasurementFeedbackInfor7ModeSpecificInfo; }
};

enum MidambleConfigurationBurstType1and3Values {
	Ms4,_MidambleConfigurationBurstType1and3 = 0,
};
typedef Enumerated<CONSTRAINED, 0> MidambleConfigurationBurstType1and3;

enum MidambleConfigurationBurstType1Values {
	Ms4,_MidambleConfigurationBurstType1 = 0,
};
typedef Enumerated<CONSTRAINED, 0> MidambleConfigurationBurstType1;

enum MidambleConfigurationBurstType2Values {
	Ms3,_MidambleConfigurationBurstType2 = 0,
};
typedef Enumerated<CONSTRAINED, 0> MidambleConfigurationBurstType2;

enum MidambleConfigurationBurstType2VHCRValues {
	Ms4,_MidambleConfigurationBurstType2VHCR = 0,
};
typedef Enumerated<CONSTRAINED, 0> MidambleConfigurationBurstType2VHCR;

class MidambleShiftAndBurstTypeBurstTypeType1 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeBurstTypeType1(): Sequence(&theInfo) {}

	void setMidambleConfigurationBurstType1and3(const MidambleConfigurationBurstType1and3& MidambleConfigurationBurstType1and3) { *static_cast<MidambleConfigurationBurstType1and3*>(items[0]) = MidambleConfigurationBurstType1and3; }
};

class MidambleShiftAndBurstTypeBurstType : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeBurstType(): Choice(&theInfo) {}
};

class MidambleShiftAndBurstType : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MidambleShiftAndBurstType(): Sequence(&theInfo) {}

	void setMidambleShiftAndBurstTypeBurstType(const MidambleShiftAndBurstTypeBurstType& MidambleShiftAndBurstTypeBurstType) { *static_cast<MidambleShiftAndBurstTypeBurstType*>(items[0]) = MidambleShiftAndBurstTypeBurstType; }
};

class MidambleShiftAndBurstTypeVHCRBurstTypeType1 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeVHCRBurstTypeType1(): Sequence(&theInfo) {}

	void setMidambleConfigurationBurstType1and3(const MidambleConfigurationBurstType1and3& MidambleConfigurationBurstType1and3) { *static_cast<MidambleConfigurationBurstType1and3*>(items[0]) = MidambleConfigurationBurstType1and3; }
};

class MidambleShiftAndBurstTypeVHCRBurstType : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeVHCRBurstType(): Choice(&theInfo) {}
};

class MidambleShiftAndBurstTypeVHCR : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeVHCR(): Sequence(&theInfo) {}

	void setMidambleShiftAndBurstTypeVHCRBurstType(const MidambleShiftAndBurstTypeVHCRBurstType& MidambleShiftAndBurstTypeVHCRBurstType) { *static_cast<MidambleShiftAndBurstTypeVHCRBurstType*>(items[0]) = MidambleShiftAndBurstTypeVHCRBurstType; }
};

class MidambleShiftAndBurstTyper7BurstTypeType1 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTyper7BurstTypeType1(): Sequence(&theInfo) {}

	void setMidambleConfigurationBurstType1and3(const MidambleConfigurationBurstType1and3& MidambleConfigurationBurstType1and3) { *static_cast<MidambleConfigurationBurstType1and3*>(items[0]) = MidambleConfigurationBurstType1and3; }
};

class MidambleShiftAndBurstTyper7BurstType : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTyper7BurstType(): Choice(&theInfo) {}
};

class MidambleShiftAndBurstTyper7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTyper7(): Sequence(&theInfo) {}

	void setMidambleShiftAndBurstTyper7BurstType(const MidambleShiftAndBurstTyper7BurstType& MidambleShiftAndBurstTyper7BurstType) { *static_cast<MidambleShiftAndBurstTyper7BurstType*>(items[0]) = MidambleShiftAndBurstTyper7BurstType; }
};

class MidambleShiftAndBurstTypeDLBurstTypeType1 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeDLBurstTypeType1(): Sequence(&theInfo) {}

	void setMidambleConfigurationBurstType1and3(const MidambleConfigurationBurstType1and3& MidambleConfigurationBurstType1and3) { *static_cast<MidambleConfigurationBurstType1and3*>(items[0]) = MidambleConfigurationBurstType1and3; }
};

class MidambleShiftAndBurstTypeDLBurstType : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeDLBurstType(): Choice(&theInfo) {}
};

class MidambleShiftAndBurstTypeDL : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeDL(): Sequence(&theInfo) {}

	void setMidambleShiftAndBurstTypeDLBurstType(const MidambleShiftAndBurstTypeDLBurstType& MidambleShiftAndBurstTypeDLBurstType) { *static_cast<MidambleShiftAndBurstTypeDLBurstType*>(items[0]) = MidambleShiftAndBurstTypeDLBurstType; }
};

class MidambleShiftAndBurstTypeDLVHCRBurstTypeType1 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeDLVHCRBurstTypeType1(): Sequence(&theInfo) {}

	void setMidambleConfigurationBurstType1and3(const MidambleConfigurationBurstType1and3& MidambleConfigurationBurstType1and3) { *static_cast<MidambleConfigurationBurstType1and3*>(items[0]) = MidambleConfigurationBurstType1and3; }
};

class MidambleShiftAndBurstTypeDLVHCRBurstType : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeDLVHCRBurstType(): Choice(&theInfo) {}
};

class MidambleShiftAndBurstTypeDLVHCR : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeDLVHCR(): Sequence(&theInfo) {}

	void setMidambleShiftAndBurstTypeDLVHCRBurstType(const MidambleShiftAndBurstTypeDLVHCRBurstType& MidambleShiftAndBurstTypeDLVHCRBurstType) { *static_cast<MidambleShiftAndBurstTypeDLVHCRBurstType*>(items[0]) = MidambleShiftAndBurstTypeDLVHCRBurstType; }
};

class MidambleShiftAndBurstTypeEDCHBurstTypeType1 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeEDCHBurstTypeType1(): Sequence(&theInfo) {}

	void setMidambleConfigurationBurstType1(const MidambleConfigurationBurstType1& MidambleConfigurationBurstType1) { *static_cast<MidambleConfigurationBurstType1*>(items[0]) = MidambleConfigurationBurstType1; }
};

class MidambleShiftAndBurstTypeEDCHBurstType : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeEDCHBurstType(): Choice(&theInfo) {}
};

class MidambleShiftAndBurstTypeEDCH : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeEDCH(): Sequence(&theInfo) {}

	void setMidambleShiftAndBurstTypeEDCHBurstType(const MidambleShiftAndBurstTypeEDCHBurstType& MidambleShiftAndBurstTypeEDCHBurstType) { *static_cast<MidambleShiftAndBurstTypeEDCHBurstType*>(items[0]) = MidambleShiftAndBurstTypeEDCHBurstType; }
};

typedef Integer<CONSTRAINED, 0, 15> MidambleShiftLong;

typedef Integer<CONSTRAINED, 0, 5> MidambleShiftShort;

typedef Integer<CONSTRAINED, 0, 7> MidambleShiftShortVHCR;

enum MIMONMRatioValues {
	Mnm12,_MIMONMRatio = 0,
};
typedef Enumerated<CONSTRAINED, 0> MIMONMRatio;

enum MIMOOperationValues {
	Start,_MIMOOperation = 0,
};
typedef Enumerated<CONSTRAINED, 0> MIMOOperation;

class MIMOParametersr7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MIMOParametersr7(): Sequence(&theInfo) {}

	void setMimoOperation(const MIMOOperation& MimoOperation) { *static_cast<MIMOOperation*>(items[0]) = MimoOperation; }
};


enum MIMOParametersv7g0extprecodingWeightSetRestrictionValues {
	true_MIMOParametersv7g0extprecodingWeightSetRestriction = 0,
};
typedef Enumerated<CONSTRAINED, 0> MIMOParametersv7g0extprecodingWeightSetRestriction;

class MIMOParametersv7g0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MIMOParametersv7g0ext(): Sequence(&theInfo) {}

	void setMIMOParametersv7g0extprecodingWeightSetRestriction(const MIMOParametersv7g0extprecodingWeightSetRestriction& MIMOParametersv7g0extprecodingWeightSetRestriction) { *static_cast<MIMOParametersv7g0extprecodingWeightSetRestriction*>(items[0]) = MIMOParametersv7g0extprecodingWeightSetRestriction; }
};

class MIMOParametersr8 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MIMOParametersr8(): Sequence(&theInfo) {}

	void setMimoOperation(const MIMOOperation& MimoOperation) { *static_cast<MIMOOperation*>(items[0]) = MimoOperation; }
};

class MIMOParametersr9 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MIMOParametersr9(): Sequence(&theInfo) {}

	void setMimoOperation(const MIMOOperation& MimoOperation) { *static_cast<MIMOOperation*>(items[0]) = MimoOperation; }
};

typedef Null MIMOPilotConfigurationSecondCPICHPatternNormalPattern;

class MIMOPilotConfigurationSecondCPICHPattern : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	MIMOPilotConfigurationSecondCPICHPattern(): Choice(&theInfo) {}
};

class MIMOPilotConfiguration : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MIMOPilotConfiguration(): Sequence(&theInfo) {}

	void setMIMOPilotConfigurationSecondCPICHPattern(const MIMOPilotConfigurationSecondCPICHPattern& MIMOPilotConfigurationSecondCPICHPattern) { *static_cast<MIMOPilotConfigurationSecondCPICHPattern*>(items[0]) = MIMOPilotConfigurationSecondCPICHPattern; }
};

typedef Integer<CONSTRAINED, -6, 0> SCPICHPowerOffsetMIMO;

class MIMOPilotConfigurationv7f0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MIMOPilotConfigurationv7f0ext(): Sequence(&theInfo) {}

	void setScpichPowerOffsetMimo(const SCPICHPowerOffsetMIMO& ScpichPowerOffsetMimo) { *static_cast<SCPICHPowerOffsetMIMO*>(items[0]) = ScpichPowerOffsetMimo; }
};

typedef Null MIMOPilotConfigurationr9SecondCPICHPatternNormalPattern;

class MIMOPilotConfigurationr9SecondCPICHPattern : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	MIMOPilotConfigurationr9SecondCPICHPattern(): Choice(&theInfo) {}
};

class MIMOPilotConfigurationr9 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MIMOPilotConfigurationr9(): Sequence(&theInfo) {}

	void setMIMOPilotConfigurationr9SecondCPICHPattern(const MIMOPilotConfigurationr9SecondCPICHPattern& MIMOPilotConfigurationr9SecondCPICHPattern) { *static_cast<MIMOPilotConfigurationr9SecondCPICHPattern*>(items[0]) = MIMOPilotConfigurationr9SecondCPICHPattern; }
};

enum MinReducedEDPDCHGainFactorValues {
	M815,_MinReducedEDPDCHGainFactor = 0,
};
typedef Enumerated<CONSTRAINED, 0> MinReducedEDPDCHGainFactor;

typedef Integer<CONSTRAINED, 1, 16> MultiCodeInfo;

class MultifrequencyInfoLCRr7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MultifrequencyInfoLCRr7(): Sequence(&theInfo) {}

	void setSecondFrequencyInfo(const FrequencyInfoTDD& SecondFrequencyInfo) { *static_cast<FrequencyInfoTDD*>(items[0]) = SecondFrequencyInfo; }
};

typedef Integer<CONSTRAINED, 0, 7> NEOT;

enum NGAPValues {
	F2,_NGAP = 0,
};
typedef Enumerated<CONSTRAINED, 0> NGAP;

typedef Integer<CONSTRAINED, 1, 8> NPCH;

typedef Integer<CONSTRAINED, 1, 8> NStartMessage;

typedef Integer<CONSTRAINED, 0, 50> NB01;

class NewTiming : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	NewTiming(): Sequence(&theInfo) {}

	void setEnablingDelay(const EnablingDelay& EnablingDelay) { *static_cast<EnablingDelay*>(items[0]) = EnablingDelay; }
};

typedef Integer<CONSTRAINED, 1, 64> NFMax;

typedef BitString<EXTCONSTRAINED, 13, 13> NonScheduledTransGrantInfoTDDTdd384768TimeslotResourceRelatedInfo;

class NonScheduledTransGrantInfoTDDTdd384768 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	NonScheduledTransGrantInfoTDDTdd384768(): Sequence(&theInfo) {}

	void setNonScheduledTransGrantInfoTDDTdd384768TimeslotResourceRelatedInfo(const NonScheduledTransGrantInfoTDDTdd384768TimeslotResourceRelatedInfo& NonScheduledTransGrantInfoTDDTdd384768TimeslotResourceRelatedInfo) { *static_cast<NonScheduledTransGrantInfoTDDTdd384768TimeslotResourceRelatedInfo*>(items[0]) = NonScheduledTransGrantInfoTDDTdd384768TimeslotResourceRelatedInfo; }
};

class NonScheduledTransGrantInfoTDD : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	NonScheduledTransGrantInfoTDD(): Choice(&theInfo) {}
};

typedef Null NonScheduledTransGrantInfoTDDextTdd384768;

class NonScheduledTransGrantInfoTDDext : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	NonScheduledTransGrantInfoTDDext(): Choice(&theInfo) {}
};

typedef BitString<EXTCONSTRAINED, 13, 13> NonScheduledTransGrantInfoTDDr9Tdd384768TimeslotResourceRelatedInfo;

class NonScheduledTransGrantInfoTDDr9Tdd384768 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	NonScheduledTransGrantInfoTDDr9Tdd384768(): Sequence(&theInfo) {}

	void setNonScheduledTransGrantInfoTDDr9Tdd384768TimeslotResourceRelatedInfo(const NonScheduledTransGrantInfoTDDr9Tdd384768TimeslotResourceRelatedInfo& NonScheduledTransGrantInfoTDDr9Tdd384768TimeslotResourceRelatedInfo) { *static_cast<NonScheduledTransGrantInfoTDDr9Tdd384768TimeslotResourceRelatedInfo*>(items[0]) = NonScheduledTransGrantInfoTDDr9Tdd384768TimeslotResourceRelatedInfo; }
};

class NonScheduledTransGrantInfoTDDr9 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	NonScheduledTransGrantInfoTDDr9(): Choice(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, maxDPDCH_UL> NumberOfDPDCH;

typedef Integer<CONSTRAINED, 1, 2> NumberOfFBIBits;

typedef Integer<CONSTRAINED, 6, 43> PrimaryCCPCHTXPower;

class OpenLoopPowerControlTDD : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	OpenLoopPowerControlTDD(): Sequence(&theInfo) {}

	void setPrimaryCCPCHTXPower(const PrimaryCCPCHTXPower& PrimaryCCPCHTXPower) { *static_cast<PrimaryCCPCHTXPower*>(items[0]) = PrimaryCCPCHTXPower; }
};

class OpenLoopPowerControlIPDLTDDr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	OpenLoopPowerControlIPDLTDDr4(): Sequence(&theInfo) {}

	void setIpdlalpha(const Alpha& Ipdlalpha) { *static_cast<Alpha*>(items[0]) = Ipdlalpha; }
};

enum PagingIndicatorLengthValues {
	Pi4,_PagingIndicatorLength = 0,
};
typedef Enumerated<CONSTRAINED, 0> PagingIndicatorLength;

typedef Integer<CONSTRAINED, 0, 7> PCPreamble;

class PCCHInformationListPagingassociatedHspdschInfo : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	PCCHInformationListPagingassociatedHspdschInfo(): Sequence(&theInfo) {}

};

class PCCHInformationList : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PCCHInformationList(): Sequence(&theInfo) {}

	void setPCCHInformationListPagingassociatedHspdschInfo(const PCCHInformationListPagingassociatedHspdschInfo& PCCHInformationListPagingassociatedHspdschInfo) { *static_cast<PCCHInformationListPagingassociatedHspdschInfo*>(items[0]) = PCCHInformationListPagingassociatedHspdschInfo; }
};

enum PCPLengthValues {
	As0,_PCPLength = 0,
};
typedef Enumerated<CONSTRAINED, 0> PCPLength;

typedef Integer<EXTCONSTRAINED, 0, 79> PCPCHChannelInfoPcpchULScramblingCode;

class PCPCHChannelInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PCPCHChannelInfo(): Sequence(&theInfo) {}

	void setPCPCHChannelInfoPcpchULScramblingCode(const PCPCHChannelInfoPcpchULScramblingCode& PCPCHChannelInfoPcpchULScramblingCode) { *static_cast<PCPCHChannelInfoPcpchULScramblingCode*>(items[0]) = PCPCHChannelInfoPcpchULScramblingCode; }
};

typedef SequenceOf<PCPCHChannelInfo, CONSTRAINED, 1, maxPCPCHs> PCPCHChannelInfoList;

class PDSCHCapacityAllocationInfor4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PDSCHCapacityAllocationInfor4(): Sequence(&theInfo) {}

	void setPdschAllocationPeriodInfo(const AllocationPeriodInfo& PdschAllocationPeriodInfo) { *static_cast<AllocationPeriodInfo*>(items[0]) = PdschAllocationPeriodInfo; }
};

class PDSCHCapacityAllocationInfor7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PDSCHCapacityAllocationInfor7(): Sequence(&theInfo) {}

	void setPdschAllocationPeriodInfo(const AllocationPeriodInfo& PdschAllocationPeriodInfo) { *static_cast<AllocationPeriodInfo*>(items[0]) = PdschAllocationPeriodInfo; }
};

class PDSCHCodeInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PDSCHCodeInfo(): Sequence(&theInfo) {}

	void setSpreadingFactor(const SFPDSCH& SpreadingFactor) { *static_cast<SFPDSCH*>(items[0]) = SpreadingFactor; }
};

typedef SequenceOf<PDSCHCodeInfo, CONSTRAINED, 1, maxTFCI_2_Combs> PDSCHCodeInfoList;

typedef Integer<CONSTRAINED, 1, hiPDSCHidentities> PDSCHIdentity;

class PDSCHInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PDSCHInfo(): Sequence(&theInfo) {}

	void setTfcsID(const TFCSIdentityPlain& TfcsID) { *static_cast<TFCSIdentityPlain*>(items[0]) = TfcsID; }
};

class PDSCHInfor4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PDSCHInfor4(): Sequence(&theInfo) {}

	void setTfcsID(const TFCSIdentityPlain& TfcsID) { *static_cast<TFCSIdentityPlain*>(items[0]) = TfcsID; }
};

class PDSCHInfor7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PDSCHInfor7(): Sequence(&theInfo) {}

	void setTfcsID(const TFCSIdentityPlain& TfcsID) { *static_cast<TFCSIdentityPlain*>(items[0]) = TfcsID; }
};

class PDSCHInfoLCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PDSCHInfoLCRr4(): Sequence(&theInfo) {}

	void setTfcsID(const TFCSIdentityPlain& TfcsID) { *static_cast<TFCSIdentityPlain*>(items[0]) = TfcsID; }
};

typedef Integer<CONSTRAINED, 1, 3> TPCStepSizeTDD;

class PDSCHPowerControlInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PDSCHPowerControlInfo(): Sequence(&theInfo) {}

	void setTpcStepSizeTDD(const TPCStepSizeTDD& TpcStepSizeTDD) { *static_cast<TPCStepSizeTDD*>(items[0]) = TpcStepSizeTDD; }
};

class PDSCHSysInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PDSCHSysInfo(): Sequence(&theInfo) {}

	void setPdschIdentity(const PDSCHIdentity& PdschIdentity) { *static_cast<PDSCHIdentity*>(items[0]) = PdschIdentity; }
};

class PDSCHSysInfoVHCRr7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PDSCHSysInfoVHCRr7(): Sequence(&theInfo) {}

	void setPdschIdentity(const PDSCHIdentity& PdschIdentity) { *static_cast<PDSCHIdentity*>(items[0]) = PdschIdentity; }
};

class PDSCHSysInfoHCRr5 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PDSCHSysInfoHCRr5(): Sequence(&theInfo) {}

	void setPdschIdentity(const PDSCHIdentity& PdschIdentity) { *static_cast<PDSCHIdentity*>(items[0]) = PdschIdentity; }
};

class PDSCHSysInfoLCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PDSCHSysInfoLCRr4(): Sequence(&theInfo) {}

	void setPdschIdentity(const PDSCHIdentity& PdschIdentity) { *static_cast<PDSCHIdentity*>(items[0]) = PdschIdentity; }
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

enum PersistenceScalingFactorValues {
	Psf09,_PersistenceScalingFactor = 0,
};
typedef Enumerated<CONSTRAINED, 0> PersistenceScalingFactor;

typedef SequenceOf<PersistenceScalingFactor, CONSTRAINED, 1, maxASCpersist> PersistenceScalingFactorList;

enum PICountPerFrameValues {
	E18,_PICountPerFrame = 0,
};
typedef Enumerated<CONSTRAINED, 0> PICountPerFrame;

typedef SequenceOf<DLTSChannelisationCode, CONSTRAINED, 1, 2> PichChannelisationCodeListLCRr4;

class PICHInfoFdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PICHInfoFdd(): Sequence(&theInfo) {}

	void setChannelisationCode256(const ChannelisationCode256& ChannelisationCode256) { *static_cast<ChannelisationCode256*>(items[0]) = ChannelisationCode256; }
};

class PICHInfo : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	PICHInfo(): Choice(&theInfo) {}
};

class PICHForHSDPASupportedPaging : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PICHForHSDPASupportedPaging(): Sequence(&theInfo) {}

	void setHsdpaAssociatedPichInfo(const PICHInfo& HsdpaAssociatedPichInfo) { *static_cast<PICHInfo*>(items[0]) = HsdpaAssociatedPichInfo; }
};

enum TDDPICHCCodeValues {
	Cc161,_TDDPICHCCode = 0,
};
typedef Enumerated<CONSTRAINED, 0> TDDPICHCCode;

class PICHInfoHCRVHCRr7ChannelisationCode : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	PICHInfoHCRVHCRr7ChannelisationCode(): Choice(&theInfo) {}
};

class PICHInfoHCRVHCRr7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PICHInfoHCRVHCRr7(): Sequence(&theInfo) {}

	void setPICHInfoHCRVHCRr7ChannelisationCode(const PICHInfoHCRVHCRr7ChannelisationCode& PICHInfoHCRVHCRr7ChannelisationCode) { *static_cast<PICHInfoHCRVHCRr7ChannelisationCode*>(items[0]) = PICHInfoHCRVHCRr7ChannelisationCode; }
};

typedef Integer<CONSTRAINED, -10, 5> PICHPowerOffset;

enum PilotBits128Values {
	Pb4,_PilotBits128 = 0,
};
typedef Enumerated<CONSTRAINED, 0> PilotBits128;

enum PilotBits256Values {
	Pb2,_PilotBits256 = 0,
};
typedef Enumerated<CONSTRAINED, 0> PilotBits256;

typedef Integer<EXTCONSTRAINED, 1, 14> PLCCHInfoPlcchSequenceNumber;

class PLCCHInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PLCCHInfo(): Sequence(&theInfo) {}

	void setPLCCHInfoPlcchSequenceNumber(const PLCCHInfoPlcchSequenceNumber& PLCCHInfoPlcchSequenceNumber) { *static_cast<PLCCHInfoPlcchSequenceNumber*>(items[0]) = PLCCHInfoPlcchSequenceNumber; }
};

enum PositionFixedOrFlexibleValues {
	Fixed,_PositionFixedOrFlexible = 0,
};
typedef Enumerated<CONSTRAINED, 0> PositionFixedOrFlexible;

typedef Integer<CONSTRAINED, 0, 1> TPCStepSizeFDD;

class PowerControlAlgorithm : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	PowerControlAlgorithm(): Choice(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 255> PowerControlGAP;

typedef Integer<CONSTRAINED, 0, 24> PowerOffsetPilotpdpdch;

typedef Integer<CONSTRAINED, 1, 8> PowerRampStep;

enum TDDPRACHCCodeLCRr4Values {
	Cc41,_TDDPRACHCCodeLCRr4 = 0,
};
typedef Enumerated<CONSTRAINED, 0> TDDPRACHCCodeLCRr4;

typedef SequenceOf<TDDPRACHCCodeLCRr4, CONSTRAINED, 1, 4> PRACHChanCodesLCRr4;

typedef SequenceOf<TDDPRACHCCodeLCRr4, CONSTRAINED, 1, 2> PRACHChanCodesListLCR;

typedef Integer<CONSTRAINED, 1, 6> TimeslotNumberPRACHLCRr4;

class PRACHDefinitionLCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PRACHDefinitionLCRr4(): Sequence(&theInfo) {}

	void setTimeslot(const TimeslotNumberPRACHLCRr4& Timeslot) { *static_cast<TimeslotNumberPRACHLCRr4*>(items[0]) = Timeslot; }
};

class PRACHInformationLCR : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PRACHInformationLCR(): Sequence(&theInfo) {}

	void setTimeslot(const TimeslotNumberPRACHLCRr4& Timeslot) { *static_cast<TimeslotNumberPRACHLCRr4*>(items[0]) = Timeslot; }
};

typedef SequenceOf<PRACHInformationLCR, CONSTRAINED, 1, maxPRACH_FPACH> PRACHInformationLCRList;

enum PRACHMidambleValues {
	Direct,_PRACHMidamble = 0,
};
typedef Enumerated<CONSTRAINED, 0> PRACHMidamble;

typedef SequenceOf<ASCSettingFDD, EXTCONSTRAINED, 1, maxASC> PRACHPartitioningFdd;

class PRACHPartitioning : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	PRACHPartitioning(): Choice(&theInfo) {}
};

typedef SequenceOf<ASCSettingFDD, EXTCONSTRAINED, 1, maxASC> PRACHPartitioningr7Fdd;

class PRACHPartitioningr7 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	PRACHPartitioningr7(): Choice(&theInfo) {}
};

typedef SequenceOf<ASCSettingTDDLCRr4, CONSTRAINED, 1, maxASC> PRACHPartitioningLCRr4;

class PRACHPowerOffset : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PRACHPowerOffset(): Sequence(&theInfo) {}

	void setPowerRampStep(const PowerRampStep& PowerRampStep) { *static_cast<PowerRampStep*>(items[0]) = PowerRampStep; }
};

class PRACHRACHInfoModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PRACHRACHInfoModeSpecificInfoFdd(): Sequence(&theInfo) {}

	void setAvailableSignatures(const AvailableSignatures& AvailableSignatures) { *static_cast<AvailableSignatures*>(items[0]) = AvailableSignatures; }
};

class PRACHRACHInfoModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	PRACHRACHInfoModeSpecificInfo(): Choice(&theInfo) {}
};

class PRACHRACHInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PRACHRACHInfo(): Sequence(&theInfo) {}

	void setPRACHRACHInfoModeSpecificInfo(const PRACHRACHInfoModeSpecificInfo& PRACHRACHInfoModeSpecificInfo) { *static_cast<PRACHRACHInfoModeSpecificInfo*>(items[0]) = PRACHRACHInfoModeSpecificInfo; }
};

class PRACHRACHInfoVHCRr7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PRACHRACHInfoVHCRr7(): Sequence(&theInfo) {}

	void setTimeslot(const TimeslotNumber& Timeslot) { *static_cast<TimeslotNumber*>(items[0]) = Timeslot; }
};

typedef BitString<CONSTRAINED, 8, 8> SyncULCodesBitmap;

class PRACHRACHInfoLCRv770ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PRACHRACHInfoLCRv770ext(): Sequence(&theInfo) {}

	void setERUCCHSyncULCodesBitmap(const SyncULCodesBitmap& ERUCCHSyncULCodesBitmap) { *static_cast<SyncULCodesBitmap*>(items[0]) = ERUCCHSyncULCodesBitmap; }
};

class SYNCULInfor4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SYNCULInfor4(): Sequence(&theInfo) {}

	void setSyncULCodesBitmap(const SyncULCodesBitmap& SyncULCodesBitmap) { *static_cast<SyncULCodesBitmap*>(items[0]) = SyncULCodesBitmap; }
};

class PRACHRACHInfoLCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PRACHRACHInfoLCRr4(): Sequence(&theInfo) {}

	void setSyncULInfo(const SYNCULInfor4& SyncULInfo) { *static_cast<SYNCULInfor4*>(items[0]) = SyncULInfo; }
};

class PRACHSystemInformation : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PRACHSystemInformation(): Sequence(&theInfo) {}

	void setPrachRACHInfo(const PRACHRACHInfo& PrachRACHInfo) { *static_cast<PRACHRACHInfo*>(items[0]) = PrachRACHInfo; }
};

class PRACHSystemInformationVHCRr7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PRACHSystemInformationVHCRr7(): Sequence(&theInfo) {}

	void setPrachRACHInfo(const PRACHRACHInfoVHCRr7& PrachRACHInfo) { *static_cast<PRACHRACHInfoVHCRr7*>(items[0]) = PrachRACHInfo; }
};

class PRACHSystemInformationLCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PRACHSystemInformationLCRr4(): Sequence(&theInfo) {}

	void setPrachRACHInfoLCR(const PRACHRACHInfoLCRr4& PrachRACHInfoLCR) { *static_cast<PRACHRACHInfoLCRr4*>(items[0]) = PrachRACHInfoLCR; }
};

class PRACHSystemInformationLCRv770ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PRACHSystemInformationLCRv770ext(): Sequence(&theInfo) {}

	void setPrachRACHInfoLCR(const PRACHRACHInfoLCRv770ext& PrachRACHInfoLCR) { *static_cast<PRACHRACHInfoLCRv770ext*>(items[0]) = PrachRACHInfoLCR; }
};

typedef SequenceOf<PRACHSystemInformation, CONSTRAINED, 1, maxPRACH> PRACHSystemInformationList;

typedef SequenceOf<PRACHSystemInformationVHCRr7, CONSTRAINED, 1, maxPRACH> PRACHSystemInformationListVHCRr7;

typedef SequenceOf<PRACHSystemInformationLCRr4, CONSTRAINED, 1, maxPRACH> PRACHSystemInformationListLCRr4;

typedef SequenceOf<PRACHSystemInformationLCRv770ext, CONSTRAINED, 1, maxPRACH> PRACHSystemInformationListLCRv770ext;

typedef Integer<CONSTRAINED, 1, 64> PreambleRetransMax;

typedef Integer<CONSTRAINED, 0, 15> PreambleScramblingCodeWordNumber;

class ULDPCHPowerControlInfoPredef : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	ULDPCHPowerControlInfoPredef(): Choice(&theInfo) {}
};

class ULDPCHInfoPredef : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULDPCHInfoPredef(): Sequence(&theInfo) {}

	void setUlDPCHPowerControlInfo(const ULDPCHPowerControlInfoPredef& UlDPCHPowerControlInfo) { *static_cast<ULDPCHPowerControlInfoPredef*>(items[0]) = UlDPCHPowerControlInfo; }
};

class PreDefPhyChConfiguration : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PreDefPhyChConfiguration(): Sequence(&theInfo) {}

	void setUlDPCHInfoPredef(const ULDPCHInfoPredef& UlDPCHInfoPredef) { *static_cast<ULDPCHInfoPredef*>(items[0]) = UlDPCHInfoPredef; }
};

class PrimaryCCPCHInfo : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	PrimaryCCPCHInfo(): Choice(&theInfo) {}
};

class PrimaryCCPCHInfor4 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	PrimaryCCPCHInfor4(): Choice(&theInfo) {}
};

typedef Boolean PrimaryCCPCHInfoLCRr4TstdIndicator;

class PrimaryCCPCHInfoLCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PrimaryCCPCHInfoLCRr4(): Sequence(&theInfo) {}

	void setPrimaryCCPCHInfoLCRr4TstdIndicator(const PrimaryCCPCHInfoLCRr4TstdIndicator& PrimaryCCPCHInfoLCRr4TstdIndicator) { *static_cast<PrimaryCCPCHInfoLCRr4TstdIndicator*>(items[0]) = PrimaryCCPCHInfoLCRr4TstdIndicator; }
};

typedef Boolean PrimaryCCPCHInfoLCRr4extTstdIndicator;

class PrimaryCCPCHInfoLCRr4ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PrimaryCCPCHInfoLCRr4ext(): Sequence(&theInfo) {}

	void setPrimaryCCPCHInfoLCRr4extTstdIndicator(const PrimaryCCPCHInfoLCRr4extTstdIndicator& PrimaryCCPCHInfoLCRr4extTstdIndicator) { *static_cast<PrimaryCCPCHInfoLCRr4extTstdIndicator*>(items[0]) = PrimaryCCPCHInfoLCRr4extTstdIndicator; }
};

typedef Integer<CONSTRAINED, -10, 50> PrimaryCPICHTXPower;

enum PuncturingLimitValues {
	Pl040,_PuncturingLimit = 0,
};
typedef Enumerated<CONSTRAINED, 0> PuncturingLimit;

typedef Null PUSCHCapacityAllocationInfoPuschAllocationPuschAllocationPending;

class PUSCHCapacityAllocationInfoPuschAllocation : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	PUSCHCapacityAllocationInfoPuschAllocation(): Choice(&theInfo) {}
};

class PUSCHCapacityAllocationInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PUSCHCapacityAllocationInfo(): Sequence(&theInfo) {}

	void setPUSCHCapacityAllocationInfoPuschAllocation(const PUSCHCapacityAllocationInfoPuschAllocation& PUSCHCapacityAllocationInfoPuschAllocation) { *static_cast<PUSCHCapacityAllocationInfoPuschAllocation*>(items[0]) = PUSCHCapacityAllocationInfoPuschAllocation; }
};

typedef Null PUSCHCapacityAllocationInfor4PuschAllocationPuschAllocationPending;

class PUSCHCapacityAllocationInfor4PuschAllocation : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	PUSCHCapacityAllocationInfor4PuschAllocation(): Choice(&theInfo) {}
};

class PUSCHCapacityAllocationInfor4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PUSCHCapacityAllocationInfor4(): Sequence(&theInfo) {}

	void setPUSCHCapacityAllocationInfor4PuschAllocation(const PUSCHCapacityAllocationInfor4PuschAllocation& PUSCHCapacityAllocationInfor4PuschAllocation) { *static_cast<PUSCHCapacityAllocationInfor4PuschAllocation*>(items[0]) = PUSCHCapacityAllocationInfor4PuschAllocation; }
};

typedef Null PUSCHCapacityAllocationInfor7PuschAllocationPuschAllocationPending;

class PUSCHCapacityAllocationInfor7PuschAllocation : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	PUSCHCapacityAllocationInfor7PuschAllocation(): Choice(&theInfo) {}
};

class PUSCHCapacityAllocationInfor7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PUSCHCapacityAllocationInfor7(): Sequence(&theInfo) {}

	void setPUSCHCapacityAllocationInfor7PuschAllocation(const PUSCHCapacityAllocationInfor7PuschAllocation& PUSCHCapacityAllocationInfor7PuschAllocation) { *static_cast<PUSCHCapacityAllocationInfor7PuschAllocation*>(items[0]) = PUSCHCapacityAllocationInfor7PuschAllocation; }
};

typedef Integer<CONSTRAINED, 1, hiPUSCHidentities> PUSCHIdentity;

class PUSCHInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PUSCHInfo(): Sequence(&theInfo) {}

	void setTfcsID(const TFCSIdentityPlain& TfcsID) { *static_cast<TFCSIdentityPlain*>(items[0]) = TfcsID; }
};

class PUSCHInfor4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PUSCHInfor4(): Sequence(&theInfo) {}

	void setTfcsID(const TFCSIdentityPlain& TfcsID) { *static_cast<TFCSIdentityPlain*>(items[0]) = TfcsID; }
};

class PUSCHInfoVHCR : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PUSCHInfoVHCR(): Sequence(&theInfo) {}

	void setTfcsID(const TFCSIdentityPlain& TfcsID) { *static_cast<TFCSIdentityPlain*>(items[0]) = TfcsID; }
};

class PUSCHInfoLCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PUSCHInfoLCRr4(): Sequence(&theInfo) {}

	void setTfcsID(const TFCSIdentityPlain& TfcsID) { *static_cast<TFCSIdentityPlain*>(items[0]) = TfcsID; }
};

typedef Integer<CONSTRAINED, 0, 62> ULTargetSIR;

class PUSCHPowerControlInfor4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PUSCHPowerControlInfor4(): Sequence(&theInfo) {}

	void setUlTargetSIR(const ULTargetSIR& UlTargetSIR) { *static_cast<ULTargetSIR*>(items[0]) = UlTargetSIR; }
};

class PUSCHPowerControlInfor7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PUSCHPowerControlInfor7(): Sequence(&theInfo) {}

	void setUlTargetSIR(const ULTargetSIR& UlTargetSIR) { *static_cast<ULTargetSIR*>(items[0]) = UlTargetSIR; }
};

class PUSCHSysInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PUSCHSysInfo(): Sequence(&theInfo) {}

	void setPuschIdentity(const PUSCHIdentity& PuschIdentity) { *static_cast<PUSCHIdentity*>(items[0]) = PuschIdentity; }
};

class PUSCHSysInfoVHCR : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PUSCHSysInfoVHCR(): Sequence(&theInfo) {}

	void setPuschIdentity(const PUSCHIdentity& PuschIdentity) { *static_cast<PUSCHIdentity*>(items[0]) = PuschIdentity; }
};

class PUSCHSysInfoHCRr5 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PUSCHSysInfoHCRr5(): Sequence(&theInfo) {}

	void setPuschIdentity(const PUSCHIdentity& PuschIdentity) { *static_cast<PUSCHIdentity*>(items[0]) = PuschIdentity; }
};

class PUSCHSysInfoLCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PUSCHSysInfoLCRr4(): Sequence(&theInfo) {}

	void setPuschIdentity(const PUSCHIdentity& PuschIdentity) { *static_cast<PUSCHIdentity*>(items[0]) = PuschIdentity; }
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

typedef Integer<EXTCONSTRAINED, 1, 32> RACHTransmissionParametersMmax;

class RACHTransmissionParameters : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RACHTransmissionParameters(): Sequence(&theInfo) {}

	void setRACHTransmissionParametersMmax(const RACHTransmissionParametersMmax& RACHTransmissionParametersMmax) { *static_cast<RACHTransmissionParametersMmax*>(items[0]) = RACHTransmissionParametersMmax; }
};

typedef Integer<CONSTRAINED, 0, 8191> ReducedScramblingCodeNumber;

typedef Integer<EXTCONSTRAINED, 0, 10> ReferenceBeta16QAMReferenceCodeRate;

class ReferenceBeta16QAM : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ReferenceBeta16QAM(): Sequence(&theInfo) {}

	void setReferenceBeta16QAMReferenceCodeRate(const ReferenceBeta16QAMReferenceCodeRate& ReferenceBeta16QAMReferenceCodeRate) { *static_cast<ReferenceBeta16QAMReferenceCodeRate*>(items[0]) = ReferenceBeta16QAMReferenceCodeRate; }
};

typedef Null RepetitionPeriodAndLengthRepetitionPeriod1;

class RepetitionPeriodAndLength : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	RepetitionPeriodAndLength(): Choice(&theInfo) {}
};

typedef Null RepetitionPeriodLengthAndOffsetRepetitionPeriod1;

class RepetitionPeriodLengthAndOffset : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	RepetitionPeriodLengthAndOffset(): Choice(&theInfo) {}
};

typedef Null RepetitionPeriodAndLengthForSPSRepetitionPeriod1;

class RepetitionPeriodAndLengthForSPS : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	RepetitionPeriodAndLengthForSPS(): Choice(&theInfo) {}
};

class ReplacedPDSCHCodeInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ReplacedPDSCHCodeInfo(): Sequence(&theInfo) {}

	void setTfciField2(const MaxTFCIField2Value& TfciField2) { *static_cast<MaxTFCIField2Value*>(items[0]) = TfciField2; }
};

typedef SequenceOf<ReplacedPDSCHCodeInfo, CONSTRAINED, 1, maxTFCI_2_Combs> ReplacedPDSCHCodeInfoList;

typedef Integer<EXTCONSTRAINED, 0, 3> RepPerLengthOffsetPICHRpp42;

class RepPerLengthOffsetPICH : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	RepPerLengthOffsetPICH(): Choice(&theInfo) {}
};

typedef Integer<EXTCONSTRAINED, 0, 3> RepPerLengthOffsetMICHRpp42;

class RepPerLengthOffsetMICH : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	RepPerLengthOffsetMICH(): Choice(&theInfo) {}
};

class RLAdditionInformation : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RLAdditionInformation(): Sequence(&theInfo) {}

	void setPrimaryCPICHInfo(const PrimaryCPICHInfo& PrimaryCPICHInfo) { *static_cast<PrimaryCPICHInfo*>(items[0]) = PrimaryCPICHInfo; }
};

class RLAdditionInformationr6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RLAdditionInformationr6(): Sequence(&theInfo) {}

	void setPrimaryCPICHInfo(const PrimaryCPICHInfo& PrimaryCPICHInfo) { *static_cast<PrimaryCPICHInfo*>(items[0]) = PrimaryCPICHInfo; }
};

class RLAdditionInformationr7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RLAdditionInformationr7(): Sequence(&theInfo) {}

	void setPrimaryCPICHInfo(const PrimaryCPICHInfo& PrimaryCPICHInfo) { *static_cast<PrimaryCPICHInfo*>(items[0]) = PrimaryCPICHInfo; }
};

class RLAdditionInformationr8 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RLAdditionInformationr8(): Sequence(&theInfo) {}

	void setPrimaryCPICHInfo(const PrimaryCPICHInfo& PrimaryCPICHInfo) { *static_cast<PrimaryCPICHInfo*>(items[0]) = PrimaryCPICHInfo; }
};

class RLAdditionInformationr9 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RLAdditionInformationr9(): Sequence(&theInfo) {}

	void setPrimaryCPICHInfo(const PrimaryCPICHInfo& PrimaryCPICHInfo) { *static_cast<PrimaryCPICHInfo*>(items[0]) = PrimaryCPICHInfo; }
};

class RLAdditionInformationv6b0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RLAdditionInformationv6b0ext(): Sequence(&theInfo) {}

	void setSttdIndication(const STTDIndication& SttdIndication) { *static_cast<STTDIndication*>(items[0]) = SttdIndication; }
};


class RLAdditionInformationv890ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RLAdditionInformationv890ext(): Sequence(&theInfo) {}

	void setTargetCellPreconfigInfo(const TargetCellPreconfigInfov890ext& TargetCellPreconfigInfo) { *static_cast<TargetCellPreconfigInfov890ext*>(items[0]) = TargetCellPreconfigInfo; }
};


class RLAdditionInformationv950ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RLAdditionInformationv950ext(): Sequence(&theInfo) {}

	void setTargetCellPreconfigInfo(const TargetCellPreconfigInfov950ext& TargetCellPreconfigInfo) { *static_cast<TargetCellPreconfigInfov950ext*>(items[0]) = TargetCellPreconfigInfo; }
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
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RLAdditionInformationSecULFreq(): Sequence(&theInfo) {}

	void setPrimaryCPICHInfo(const PrimaryCPICHInfo& PrimaryCPICHInfo) { *static_cast<PrimaryCPICHInfo*>(items[0]) = PrimaryCPICHInfo; }
};

typedef SequenceOf<RLAdditionInformationSecULFreq, CONSTRAINED, 1, maxEDCHRL_1> RLAdditionInformationListSecULFreq;

typedef SequenceOf<PrimaryCPICHInfo, CONSTRAINED, 1, maxRL> RLIdentifierList;

typedef SequenceOf<PrimaryCPICHInfo, CONSTRAINED, 1, maxRL> RLRemovalInformationList;

typedef SequenceOf<PrimaryCPICHInfo, CONSTRAINED, 1, maxEDCHRL> RLRemovalInformationListSecULFreq;

enum RPPValues {
	Mode0,_RPP = 0,
};
typedef Enumerated<CONSTRAINED, 0> RPP;

enum SFieldValues {
	E1bit,_SField = 0,
};
typedef Enumerated<CONSTRAINED, 0> SField;

enum SCCPCHChannelisationCodeValues {
	Cc161,_SCCPCHChannelisationCode = 0,
};
typedef Enumerated<CONSTRAINED, 0> SCCPCHChannelisationCode;

enum SCCPCHChannelisationCodeVHCRValues {
	Cc321,_SCCPCHChannelisationCodeVHCR = 0,
};
typedef Enumerated<CONSTRAINED, 0> SCCPCHChannelisationCodeVHCR;

typedef SequenceOf<SCCPCHChannelisationCode, CONSTRAINED, 1, 16> SCCPCHChannelisationCodeList;

typedef SequenceOf<SCCPCHChannelisationCodeVHCR, CONSTRAINED, 1, 32> SCCPCHChannelisationCodeListVHCR;

class SecondaryCCPCHInfoModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SecondaryCCPCHInfoModeSpecificInfoFdd(): Sequence(&theInfo) {}

	void setDummy1(const PCPICHUsageForChannelEst& Dummy1) { *static_cast<PCPICHUsageForChannelEst*>(items[0]) = Dummy1; }
};

class SecondaryCCPCHInfoModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	SecondaryCCPCHInfoModeSpecificInfo(): Choice(&theInfo) {}
};

class SecondaryCCPCHInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SecondaryCCPCHInfo(): Sequence(&theInfo) {}

	void setSecondaryCCPCHInfoModeSpecificInfo(const SecondaryCCPCHInfoModeSpecificInfo& SecondaryCCPCHInfoModeSpecificInfo) { *static_cast<SecondaryCCPCHInfoModeSpecificInfo*>(items[0]) = SecondaryCCPCHInfoModeSpecificInfo; }
};

class SCCPCHInfoForFACH : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SCCPCHInfoForFACH(): Sequence(&theInfo) {}

	void setSecondaryCCPCHInfo(const SecondaryCCPCHInfo& SecondaryCCPCHInfo) { *static_cast<SecondaryCCPCHInfo*>(items[0]) = SecondaryCCPCHInfo; }
};

class SecondaryCCPCHInfor4ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	SecondaryCCPCHInfor4ModeSpecificInfo(): Choice(&theInfo) {}
};

class SecondaryCCPCHInfor4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SecondaryCCPCHInfor4(): Sequence(&theInfo) {}

	void setSecondaryCCPCHInfor4ModeSpecificInfo(const SecondaryCCPCHInfor4ModeSpecificInfo& SecondaryCCPCHInfor4ModeSpecificInfo) { *static_cast<SecondaryCCPCHInfor4ModeSpecificInfo*>(items[0]) = SecondaryCCPCHInfor4ModeSpecificInfo; }
};

class SCCPCHInfoForFACHr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SCCPCHInfoForFACHr4(): Sequence(&theInfo) {}

	void setSecondaryCCPCHInfo(const SecondaryCCPCHInfor4& SecondaryCCPCHInfo) { *static_cast<SecondaryCCPCHInfor4*>(items[0]) = SecondaryCCPCHInfo; }
};

class SCCPCHSystemInformation : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SCCPCHSystemInformation(): Sequence(&theInfo) {}

	void setSecondaryCCPCHInfo(const SecondaryCCPCHInfo& SecondaryCCPCHInfo) { *static_cast<SecondaryCCPCHInfo*>(items[0]) = SecondaryCCPCHInfo; }
};

class SecondaryCCPCHInfoLCRr4ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SecondaryCCPCHInfoLCRr4ext(): Sequence(&theInfo) {}

	void setIndividualTimeslotLCRExt(const IndividualTimeslotInfoLCRr4ext& IndividualTimeslotLCRExt) { *static_cast<IndividualTimeslotInfoLCRr4ext*>(items[0]) = IndividualTimeslotLCRExt; }
};

class SCCPCHSystemInformationLCRr4ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SCCPCHSystemInformationLCRr4ext(): Sequence(&theInfo) {}

	void setSecondaryCCPCHLCRExtensions(const SecondaryCCPCHInfoLCRr4ext& SecondaryCCPCHLCRExtensions) { *static_cast<SecondaryCCPCHInfoLCRr4ext*>(items[0]) = SecondaryCCPCHLCRExtensions; }
};

class SecondaryCCPCHInfoHCRVHCRr7ModeSpecificInfoTdd384 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SecondaryCCPCHInfoHCRVHCRr7ModeSpecificInfoTdd384(): Sequence(&theInfo) {}

	void setIndividualTimeslotInfo(const IndividualTimeslotInfor7& IndividualTimeslotInfo) { *static_cast<IndividualTimeslotInfor7*>(items[0]) = IndividualTimeslotInfo; }
};

class SecondaryCCPCHInfoHCRVHCRr7ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	SecondaryCCPCHInfoHCRVHCRr7ModeSpecificInfo(): Choice(&theInfo) {}
};

class SecondaryCCPCHInfoHCRVHCRr7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SecondaryCCPCHInfoHCRVHCRr7(): Sequence(&theInfo) {}

	void setSecondaryCCPCHInfoHCRVHCRr7ModeSpecificInfo(const SecondaryCCPCHInfoHCRVHCRr7ModeSpecificInfo& SecondaryCCPCHInfoHCRVHCRr7ModeSpecificInfo) { *static_cast<SecondaryCCPCHInfoHCRVHCRr7ModeSpecificInfo*>(items[0]) = SecondaryCCPCHInfoHCRVHCRr7ModeSpecificInfo; }
};

class SCCPCHSystemInformationHCRVHCRr7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SCCPCHSystemInformationHCRVHCRr7(): Sequence(&theInfo) {}

	void setSecondaryCCPCHInfo(const SecondaryCCPCHInfoHCRVHCRr7& SecondaryCCPCHInfo) { *static_cast<SecondaryCCPCHInfoHCRVHCRr7*>(items[0]) = SecondaryCCPCHInfo; }
};

typedef SequenceOf<SCCPCHSystemInformation, CONSTRAINED, 1, maxSCCPCH> SCCPCHSystemInformationList;

typedef SequenceOf<SCCPCHSystemInformationHCRVHCRr7, CONSTRAINED, 1, maxSCCPCH> SCCPCHSystemInformationListHCRVHCRr7;

typedef SequenceOf<SCCPCHSystemInformationLCRr4ext, CONSTRAINED, 1, maxSCCPCH> SCCPCHSystemInformationListLCRr4ext;

class SecondaryCCPCHInfoMBMSr6ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	SecondaryCCPCHInfoMBMSr6ModeSpecificInfo(): Choice(&theInfo) {}
};

class SecondaryCCPCHInfoMBMSr6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SecondaryCCPCHInfoMBMSr6(): Sequence(&theInfo) {}

	void setSecondaryCCPCHInfoMBMSr6ModeSpecificInfo(const SecondaryCCPCHInfoMBMSr6ModeSpecificInfo& SecondaryCCPCHInfoMBMSr6ModeSpecificInfo) { *static_cast<SecondaryCCPCHInfoMBMSr6ModeSpecificInfo*>(items[0]) = SecondaryCCPCHInfoMBMSr6ModeSpecificInfo; }
};

class SCCPCHSystemInformationMBMSr6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SCCPCHSystemInformationMBMSr6(): Sequence(&theInfo) {}

	void setSecondaryCCPCHInfoMBMS(const SecondaryCCPCHInfoMBMSr6& SecondaryCCPCHInfoMBMS) { *static_cast<SecondaryCCPCHInfoMBMSr6*>(items[0]) = SecondaryCCPCHInfoMBMS; }
};

class SecondaryCCPCHInfoMBMSr7ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	SecondaryCCPCHInfoMBMSr7ModeSpecificInfo(): Choice(&theInfo) {}
};

class SecondaryCCPCHInfoMBMSr7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SecondaryCCPCHInfoMBMSr7(): Sequence(&theInfo) {}

	void setSecondaryCCPCHInfoMBMSr7ModeSpecificInfo(const SecondaryCCPCHInfoMBMSr7ModeSpecificInfo& SecondaryCCPCHInfoMBMSr7ModeSpecificInfo) { *static_cast<SecondaryCCPCHInfoMBMSr7ModeSpecificInfo*>(items[0]) = SecondaryCCPCHInfoMBMSr7ModeSpecificInfo; }
};

class SCCPCHSystemInformationMBMSr7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SCCPCHSystemInformationMBMSr7(): Sequence(&theInfo) {}

	void setSecondaryCCPCHInfoMBMS(const SecondaryCCPCHInfoMBMSr7& SecondaryCCPCHInfoMBMS) { *static_cast<SecondaryCCPCHInfoMBMSr7*>(items[0]) = SecondaryCCPCHInfoMBMS; }
};

enum ScramblingCodeChangeValues {
	CodeChange,_ScramblingCodeChange = 0,
};
typedef Enumerated<CONSTRAINED, 0> ScramblingCodeChange;

enum ScramblingCodeTypeValues {
	ShortSC,_ScramblingCodeType = 0,
};
typedef Enumerated<CONSTRAINED, 0> ScramblingCodeType;

typedef Integer<EXTCONSTRAINED, 0, 4> SecondaryCCPCHFrameType2InfoSubFrameNumber;

class SecondaryCCPCHFrameType2Info : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SecondaryCCPCHFrameType2Info(): Sequence(&theInfo) {}

	void setSecondaryCCPCHFrameType2InfoSubFrameNumber(const SecondaryCCPCHFrameType2InfoSubFrameNumber& SecondaryCCPCHFrameType2InfoSubFrameNumber) { *static_cast<SecondaryCCPCHFrameType2InfoSubFrameNumber*>(items[0]) = SecondaryCCPCHFrameType2InfoSubFrameNumber; }
};

class SecondaryCCPCHInfoDiffMBMS : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SecondaryCCPCHInfoDiffMBMS(): Sequence(&theInfo) {}

	void setSecondaryScramblingCode(const SecondaryScramblingCode& SecondaryScramblingCode) { *static_cast<SecondaryScramblingCode*>(items[0]) = SecondaryScramblingCode; }
};

typedef Null SecondaryCellMIMOparametersFDDContinue;

class SecondaryCellMIMOparametersFDD : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	SecondaryCellMIMOparametersFDD(): Choice(&theInfo) {}
};

enum SecondaryCellMIMOparametersFDDv950extprecodingWeightSetRestrictionValues {
	true_SecondaryCellMIMOparametersFDDv950extprecodingWeightSetRestriction = 0,
};
typedef Enumerated<CONSTRAINED, 0> SecondaryCellMIMOparametersFDDv950extprecodingWeightSetRestriction;

class SecondaryCellMIMOparametersFDDv950ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SecondaryCellMIMOparametersFDDv950ext(): Sequence(&theInfo) {}

	void setSecondaryCellMIMOparametersFDDv950extprecodingWeightSetRestriction(const SecondaryCellMIMOparametersFDDv950extprecodingWeightSetRestriction& SecondaryCellMIMOparametersFDDv950extprecodingWeightSetRestriction) { *static_cast<SecondaryCellMIMOparametersFDDv950extprecodingWeightSetRestriction*>(items[0]) = SecondaryCellMIMOparametersFDDv950extprecodingWeightSetRestriction; }
};

typedef Boolean ServingCellChangeMACreset;

enum ServingCellChangeMsgTypeValues {
	RadioBearerSetup,_ServingCellChangeMsgType = 0,
};
typedef Enumerated<CONSTRAINED, 0> ServingCellChangeMsgType;

class ServingCellChangeParameters : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ServingCellChangeParameters(): Sequence(&theInfo) {}

	void setServingCellChangeMACreset(const ServingCellChangeMACreset& ServingCellChangeMACreset) { *static_cast<ServingCellChangeMACreset*>(items[0]) = ServingCellChangeMACreset; }
};

typedef Integer<CONSTRAINED, 0, 3> ServingCellChangeTrId;

enum SF8CodesValues {
	Cc81,_SF8Codes = 0,
};
typedef Enumerated<CONSTRAINED, 0> SF8Codes;

enum SF16CodesValues {
	Cc161,_SF16Codes = 0,
};
typedef Enumerated<CONSTRAINED, 0> SF16Codes;

enum SF16Codes2Values {
	Cc161,_SF16Codes2 = 0,
};
typedef Enumerated<CONSTRAINED, 0> SF16Codes2;

enum SF32CodesValues {
	Cc321,_SF32Codes = 0,
};
typedef Enumerated<CONSTRAINED, 0> SF32Codes;

typedef Integer<EXTCONSTRAINED, 0, 3> SF256AndCodeNumberSf4;

class SF256AndCodeNumber : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	SF256AndCodeNumber(): Choice(&theInfo) {}
};

typedef Integer<EXTCONSTRAINED, 0, 3> SF512AndCodeNumberSf4;

class SF512AndCodeNumber : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	SF512AndCodeNumber(): Choice(&theInfo) {}
};

enum SFPRACHValues {
	Sfpr32,_SFPRACH = 0,
};
typedef Enumerated<CONSTRAINED, 0> SFPRACH;

typedef Integer<EXTCONSTRAINED, 0, 4095> SFNTimeInfoActivationTimeSFN;

class SFNTimeInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SFNTimeInfo(): Sequence(&theInfo) {}

	void setSFNTimeInfoActivationTimeSFN(const SFNTimeInfoActivationTimeSFN& SFNTimeInfoActivationTimeSFN) { *static_cast<SFNTimeInfoActivationTimeSFN*>(items[0]) = SFNTimeInfoActivationTimeSFN; }
};

typedef Integer<CONSTRAINED, 0, 7> SpecialBurstScheduling;

enum SpreadingFactorValues {
	Sf4,_SpreadingFactor = 0,
};
typedef Enumerated<CONSTRAINED, 0> SpreadingFactor;

class SPSInformationTDD128r8 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SPSInformationTDD128r8(): Sequence(&theInfo) {}

	void setEdchSPSInfo(const EDCHSPSInformationTDD128& EdchSPSInfo) { *static_cast<EDCHSPSInformationTDD128*>(items[0]) = EdchSPSInfo; }
};

typedef Integer<CONSTRAINED, 0, 7> SRBdelay;

enum SSDTCellIdentityValues {
	Ssdtida,_SSDTCellIdentity = 0,
};
typedef Enumerated<CONSTRAINED, 0> SSDTCellIdentity;

class SSDTInformation : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SSDTInformation(): Sequence(&theInfo) {}

	void setSField(const SField& SField) { *static_cast<SField*>(items[0]) = SField; }
};

class SSDTInformationr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SSDTInformationr4(): Sequence(&theInfo) {}

	void setSField(const SField& SField) { *static_cast<SField*>(items[0]) = SField; }
};

enum SSDTULValues {
	Ul,_SSDTUL = 0,
};
typedef Enumerated<CONSTRAINED, 0> SSDTUL;

typedef BitString<EXTCONSTRAINED, 8, 8> SynchronisationParametersr4SyncULCodesBitmap;

class SynchronisationParametersr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SynchronisationParametersr4(): Sequence(&theInfo) {}

	void setSynchronisationParametersr4SyncULCodesBitmap(const SynchronisationParametersr4SyncULCodesBitmap& SynchronisationParametersr4SyncULCodesBitmap) { *static_cast<SynchronisationParametersr4SyncULCodesBitmap*>(items[0]) = SynchronisationParametersr4SyncULCodesBitmap; }
};

enum SYNCULProcedurer4max_SYNC_UL_TransmissionsValues {
	Tr1,_SYNCULProcedurer4max_SYNC_UL_Transmissions = 0,
};
typedef Enumerated<CONSTRAINED, 0> SYNCULProcedurer4max_SYNC_UL_Transmissions;

class SYNCULProcedurer4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SYNCULProcedurer4(): Sequence(&theInfo) {}

	void setSYNCULProcedurer4max_SYNC_UL_Transmissions(const SYNCULProcedurer4max_SYNC_UL_Transmissions& SYNCULProcedurer4max_SYNC_UL_Transmissions) { *static_cast<SYNCULProcedurer4max_SYNC_UL_Transmissions*>(items[0]) = SYNCULProcedurer4max_SYNC_UL_Transmissions; }
};

typedef Integer<EXTCONSTRAINED, 0, 62> SYNCULInfoForERUCCHPrxUpPCHdes;

class SYNCULInfoForERUCCH : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SYNCULInfoForERUCCH(): Sequence(&theInfo) {}

	void setSYNCULInfoForERUCCHPrxUpPCHdes(const SYNCULInfoForERUCCHPrxUpPCHdes& SYNCULInfoForERUCCHPrxUpPCHdes) { *static_cast<SYNCULInfoForERUCCHPrxUpPCHdes*>(items[0]) = SYNCULInfoForERUCCHPrxUpPCHdes; }
};

class TargetCellPreconfigInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	TargetCellPreconfigInfo(): Sequence(&theInfo) {}

	void setActivationTimeOffset(const ActivationTimeOffset& ActivationTimeOffset) { *static_cast<ActivationTimeOffset*>(items[0]) = ActivationTimeOffset; }
};

class TargetCellPreconfigInfor9 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	TargetCellPreconfigInfor9(): Sequence(&theInfo) {}

	void setActivationTimeOffset(const ActivationTimeOffset& ActivationTimeOffset) { *static_cast<ActivationTimeOffset*>(items[0]) = ActivationTimeOffset; }
};

enum TDDFPACHCCode16r4Values {
	Cc161,_TDDFPACHCCode16r4 = 0,
};
typedef Enumerated<CONSTRAINED, 0> TDDFPACHCCode16r4;

typedef Integer<CONSTRAINED, -110, -52> TDDULInterference;

enum TDD768PICHCCodeValues {
	Cc321,_TDD768PICHCCode = 0,
};
typedef Enumerated<CONSTRAINED, 0> TDD768PICHCCode;

class TDDMBSFNTSlotInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	TDDMBSFNTSlotInfo(): Sequence(&theInfo) {}

	void setTimeSlotNumber(const TimeslotNumber& TimeSlotNumber) { *static_cast<TimeslotNumber*>(items[0]) = TimeSlotNumber; }
};

typedef SequenceOf<TDDMBSFNTSlotInfo, CONSTRAINED, 1, maxTS> TDDMBSFNInformation;

enum TDDPRACHCCode8Values {
	Cc81,_TDDPRACHCCode8 = 0,
};
typedef Enumerated<CONSTRAINED, 0> TDDPRACHCCode8;

enum TDDPRACHCCode16Values {
	Cc161,_TDDPRACHCCode16 = 0,
};
typedef Enumerated<CONSTRAINED, 0> TDDPRACHCCode16;

typedef SequenceOf<TDDPRACHCCode8, EXTCONSTRAINED, 1, 8> TDDPRACHCCodeListSf8;

class TDDPRACHCCodeList : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	TDDPRACHCCodeList(): Choice(&theInfo) {}
};

enum TDD768PRACHCCode16Values {
	Cc161,_TDD768PRACHCCode16 = 0,
};
typedef Enumerated<CONSTRAINED, 0> TDD768PRACHCCode16;

enum TDD768PRACHCCode32Values {
	Cc321,_TDD768PRACHCCode32 = 0,
};
typedef Enumerated<CONSTRAINED, 0> TDD768PRACHCCode32;

typedef SequenceOf<TDD768PRACHCCode32, EXTCONSTRAINED, 1, 16> TDD768PRACHCCodeListSf32;

class TDD768PRACHCCodeList : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	TDD768PRACHCCodeList(): Choice(&theInfo) {}
};

enum TFCControlDurationValues {
	Tfccd1,_TFCControlDuration = 0,
};
typedef Enumerated<CONSTRAINED, 0> TFCControlDuration;

enum TFCICodingValues {
	Tfcibits4,_TFCICoding = 0,
};
typedef Enumerated<CONSTRAINED, 0> TFCICoding;

typedef Integer<CONSTRAINED, 0, 255> TGCFN;

typedef Integer<CONSTRAINED, 15, 270> TGD;

typedef Integer<CONSTRAINED, 1, 14> TGL;

enum TGMPValues {
	TddMeasurement,_TGMP = 0,
};
typedef Enumerated<CONSTRAINED, 0> TGMP;

enum TGMPr8Values {
	TddMeasurement,_TGMPr8 = 0,
};
typedef Enumerated<CONSTRAINED, 0> TGMPr8;

class TGPSequenceShort : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	TGPSequenceShort(): Sequence(&theInfo) {}

	void setTgpsi(const TGPSI& Tgpsi) { *static_cast<TGPSI*>(items[0]) = Tgpsi; }
};

typedef Integer<CONSTRAINED, 1, 144> TGPL;

typedef Integer<CONSTRAINED, 0, 511> TGPRC;

class TGPSConfigurationParams : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	TGPSConfigurationParams(): Sequence(&theInfo) {}

	void setTgmp(const TGMP& Tgmp) { *static_cast<TGMP*>(items[0]) = Tgmp; }
};

class TGPSConfigurationParamsr8 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	TGPSConfigurationParamsr8(): Sequence(&theInfo) {}

	void setTgmp(const TGMPr8& Tgmp) { *static_cast<TGMPr8*>(items[0]) = Tgmp; }
};

typedef Integer<CONSTRAINED, 0, 14> TGSN;

class TimeInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	TimeInfo(): Sequence(&theInfo) {}

	void setActivationTime(const ActivationTime& ActivationTime) { *static_cast<ActivationTime*>(items[0]) = ActivationTime; }
};

enum TimeSlotLCRextValues {
	Ts7,_TimeSlotLCRext = 0,
};
typedef Enumerated<CONSTRAINED, 0> TimeSlotLCRext;

typedef SequenceOf<TimeslotNumber, CONSTRAINED, 1, maxTS> TimeslotList;

typedef SequenceOf<TimeslotNumber, EXTCONSTRAINED, 1, maxTS> TimeslotListr4Tdd384;

class TimeslotListr4 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	TimeslotListr4(): Choice(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 6> TimeslotSync2;

typedef Null DTXDRXTimingInfor7TimingContinue;

class DTXDRXTimingInfor7Timing : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	DTXDRXTimingInfor7Timing(): Choice(&theInfo) {}
};

class DTXDRXTimingInfor7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DTXDRXTimingInfor7(): Sequence(&theInfo) {}

	void setDTXDRXTimingInfor7Timing(const DTXDRXTimingInfor7Timing& DTXDRXTimingInfor7Timing) { *static_cast<DTXDRXTimingInfor7Timing*>(items[0]) = DTXDRXTimingInfor7Timing; }
};

typedef Integer<CONSTRAINED, 0, 149> TimingOffset;

typedef Integer<CONSTRAINED, 0, 5> TPCCombinationIndex;

typedef Integer<CONSTRAINED, 0, 10> TPCCommandTargetRate;

typedef Integer<CONSTRAINED, 1, 32> TransportBlockSizeIndex;

typedef Integer<CONSTRAINED, 1, 20> TreconfirmAbort;

enum TXDiversityModeValues {
	NoDiversity,_TXDiversityMode = 0,
};
typedef Enumerated<CONSTRAINED, 0> TXDiversityMode;

class UCSMInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UCSMInfo(): Sequence(&theInfo) {}

	void setMinimumSpreadingFactor(const MinimumSpreadingFactor& MinimumSpreadingFactor) { *static_cast<MinimumSpreadingFactor*>(items[0]) = MinimumSpreadingFactor; }
};

enum UEDPCCHBurstValues {
	Subframes1,_UEDPCCHBurst = 0,
};
typedef Enumerated<CONSTRAINED, 0> UEDPCCHBurst;

enum UEDTXCycle210msValues {
	Subframes5,_UEDTXCycle210ms = 0,
};
typedef Enumerated<CONSTRAINED, 0> UEDTXCycle210ms;

enum UEDTXCycle22msValues {
	Subframes4,_UEDTXCycle22ms = 0,
};
typedef Enumerated<CONSTRAINED, 0> UEDTXCycle22ms;

enum UEDTXCycle2InactivityThresholdValues {
	Edchtti1,_UEDTXCycle2InactivityThreshold = 0,
};
typedef Enumerated<CONSTRAINED, 0> UEDTXCycle2InactivityThreshold;

enum UEDTXlongpreamblelengthValues {
	Slots4,_UEDTXlongpreamblelength = 0,
};
typedef Enumerated<CONSTRAINED, 0> UEDTXlongpreamblelength;

typedef Integer<CONSTRAINED, 0, 159> UEDTXDRXOffset;

enum UEGrantMonitoringInactivityThresholdValues {
	Edchtti0,_UEGrantMonitoringInactivityThreshold = 0,
};
typedef Enumerated<CONSTRAINED, 0> UEGrantMonitoringInactivityThreshold;

typedef Integer<CONSTRAINED, 0, 1> UL16QAMSettingsBetaEdGainEAGCHTableSelection;

class UL16QAMSettings : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UL16QAMSettings(): Sequence(&theInfo) {}

	void setUL16QAMSettingsBetaEdGainEAGCHTableSelection(const UL16QAMSettingsBetaEdGainEAGCHTableSelection& UL16QAMSettingsBetaEdGainEAGCHTableSelection) { *static_cast<UL16QAMSettingsBetaEdGainEAGCHTableSelection*>(items[0]) = UL16QAMSettingsBetaEdGainEAGCHTableSelection; }
};

class UL16QAMConfig : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UL16QAMConfig(): Sequence(&theInfo) {}

	void setUl16QAMSettings(const UL16QAMSettings& Ul16QAMSettings) { *static_cast<UL16QAMSettings*>(items[0]) = Ul16QAMSettings; }
};

class ULCCTrCH : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULCCTrCH(): Sequence(&theInfo) {}

	void setTfcsID(const TFCSIdentityPlain& TfcsID) { *static_cast<TFCSIdentityPlain*>(items[0]) = TfcsID; }
};

class ULCCTrCHr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULCCTrCHr4(): Sequence(&theInfo) {}

	void setTfcsID(const TFCSIdentityPlain& TfcsID) { *static_cast<TFCSIdentityPlain*>(items[0]) = TfcsID; }
};

class ULCCTrCHr7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULCCTrCHr7(): Sequence(&theInfo) {}

	void setTfcsID(const TFCSIdentityPlain& TfcsID) { *static_cast<TFCSIdentityPlain*>(items[0]) = TfcsID; }
};

typedef SequenceOf<ULCCTrCH, CONSTRAINED, 1, maxCCTrCH> ULCCTrCHList;

typedef SequenceOf<ULCCTrCHr4, CONSTRAINED, 1, maxCCTrCH> ULCCTrCHListr4;

typedef SequenceOf<ULCCTrCHr7, CONSTRAINED, 1, maxCCTrCH> ULCCTrCHListr7;

typedef SequenceOf<TFCSIdentityPlain, CONSTRAINED, 1, maxCCTrCH> ULCCTrCHListToRemove;

typedef SequenceOf<TFCSIdentity, CONSTRAINED, 0, maxCCTrCH> ULCCTrChTPCList;

class ULChannelRequirement : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	ULChannelRequirement(): Choice(&theInfo) {}
};

class ULChannelRequirementr4 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	ULChannelRequirementr4(): Choice(&theInfo) {}
};

class ULChannelRequirementr5 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	ULChannelRequirementr5(): Choice(&theInfo) {}
};


class ULChannelRequirementWithCPCHSetID : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	ULChannelRequirementWithCPCHSetID(): Choice(&theInfo) {}
};


class ULChannelRequirementWithCPCHSetIDr4 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	ULChannelRequirementWithCPCHSetIDr4(): Choice(&theInfo) {}
};


class ULChannelRequirementWithCPCHSetIDr5 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	ULChannelRequirementWithCPCHSetIDr5(): Choice(&theInfo) {}
};

enum ULCompressedModeMethodValues {
	Sf2,_ULCompressedModeMethod = 0,
};
typedef Enumerated<CONSTRAINED, 0> ULCompressedModeMethod;

class ULDLMode : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	ULDLMode(): Choice(&theInfo) {}
};

enum ULDPCCHSlotFormatValues {
	Slf0,_ULDPCCHSlotFormat = 0,
};
typedef Enumerated<CONSTRAINED, 0> ULDPCCHSlotFormat;

class ULDPCHCodeInfoForCommonEDCH : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULDPCHCodeInfoForCommonEDCH(): Sequence(&theInfo) {}

	void setUlDPCCHscramblingCodeType(const ScramblingCodeType& UlDPCCHscramblingCodeType) { *static_cast<ScramblingCodeType*>(items[0]) = UlDPCCHscramblingCodeType; }
};

class ULDPCHPowerControlInfoPostFDD : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULDPCHPowerControlInfoPostFDD(): Sequence(&theInfo) {}

	void setDpcchPowerOffset(const DPCCHPowerOffset2& DpcchPowerOffset) { *static_cast<DPCCHPowerOffset2*>(items[0]) = DpcchPowerOffset; }
};

class ULDPCHInfoPostFDD : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULDPCHInfoPostFDD(): Sequence(&theInfo) {}

	void setUlDPCHPowerControlInfo(const ULDPCHPowerControlInfoPostFDD& UlDPCHPowerControlInfo) { *static_cast<ULDPCHPowerControlInfoPostFDD*>(items[0]) = UlDPCHPowerControlInfo; }
};

class ULDPCHPowerControlInfoPostTDD : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULDPCHPowerControlInfoPostTDD(): Sequence(&theInfo) {}

	void setUlTargetSIR(const ULTargetSIR& UlTargetSIR) { *static_cast<ULTargetSIR*>(items[0]) = UlTargetSIR; }
};

class ULDPCHInfoPostTDD : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULDPCHInfoPostTDD(): Sequence(&theInfo) {}

	void setUlDPCHPowerControlInfo(const ULDPCHPowerControlInfoPostTDD& UlDPCHPowerControlInfo) { *static_cast<ULDPCHPowerControlInfoPostTDD*>(items[0]) = UlDPCHPowerControlInfo; }
};

class ULDPCHPowerControlInfoPostTDDLCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULDPCHPowerControlInfoPostTDDLCRr4(): Sequence(&theInfo) {}

	void setUlTargetSIR(const ULTargetSIR& UlTargetSIR) { *static_cast<ULTargetSIR*>(items[0]) = UlTargetSIR; }
};

class ULDPCHInfoPostTDDLCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULDPCHInfoPostTDDLCRr4(): Sequence(&theInfo) {}

	void setUlDPCHPowerControlInfo(const ULDPCHPowerControlInfoPostTDDLCRr4& UlDPCHPowerControlInfo) { *static_cast<ULDPCHPowerControlInfoPostTDDLCRr4*>(items[0]) = UlDPCHPowerControlInfo; }
};

class ULDPCHPowerControlInfoFdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULDPCHPowerControlInfoFdd(): Sequence(&theInfo) {}

	void setDpcchPowerOffset(const DPCCHPowerOffset& DpcchPowerOffset) { *static_cast<DPCCHPowerOffset*>(items[0]) = DpcchPowerOffset; }
};

class ULDPCHPowerControlInfo : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	ULDPCHPowerControlInfo(): Choice(&theInfo) {}
};

class ULDPCHPowerControlInfor4Fdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULDPCHPowerControlInfor4Fdd(): Sequence(&theInfo) {}

	void setDpcchPowerOffset(const DPCCHPowerOffset& DpcchPowerOffset) { *static_cast<DPCCHPowerOffset*>(items[0]) = DpcchPowerOffset; }
};

class ULDPCHPowerControlInfor4 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	ULDPCHPowerControlInfor4(): Choice(&theInfo) {}
};

class ULDPCHPowerControlInfor5Fdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULDPCHPowerControlInfor5Fdd(): Sequence(&theInfo) {}

	void setDpcchPowerOffset(const DPCCHPowerOffset& DpcchPowerOffset) { *static_cast<DPCCHPowerOffset*>(items[0]) = DpcchPowerOffset; }
};

class ULDPCHPowerControlInfor5 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	ULDPCHPowerControlInfor5(): Choice(&theInfo) {}
};

class ULDPCHPowerControlInfor6Fdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULDPCHPowerControlInfor6Fdd(): Sequence(&theInfo) {}

	void setDpcchPowerOffset(const DPCCHPowerOffset& DpcchPowerOffset) { *static_cast<DPCCHPowerOffset*>(items[0]) = DpcchPowerOffset; }
};

class ULDPCHPowerControlInfor6 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	ULDPCHPowerControlInfor6(): Choice(&theInfo) {}
};

class ULDPCHPowerControlInfor7Fdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULDPCHPowerControlInfor7Fdd(): Sequence(&theInfo) {}

	void setDpcchPowerOffset(const DPCCHPowerOffset& DpcchPowerOffset) { *static_cast<DPCCHPowerOffset*>(items[0]) = DpcchPowerOffset; }
};

class ULDPCHPowerControlInfor7 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	ULDPCHPowerControlInfor7(): Choice(&theInfo) {}
};

class ULDPCHpowerControlInfoForCommonEDCH : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULDPCHpowerControlInfoForCommonEDCH(): Sequence(&theInfo) {}

	void setPowerControlAlgorithm(const PowerControlAlgorithm& PowerControlAlgorithm) { *static_cast<PowerControlAlgorithm*>(items[0]) = PowerControlAlgorithm; }
};

typedef Null ULEDCHInformationextFdd;

class ULEDCHInformationext : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	ULEDCHInformationext(): Choice(&theInfo) {}
};

enum ULEDCHInformationr6mac_es_e_resetIndicatorValues {
	true_ULEDCHInformationr6mac_es_e_resetIndicator = 0,
};
typedef Enumerated<CONSTRAINED, 0> ULEDCHInformationr6mac_es_e_resetIndicator;

class ULEDCHInformationr6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULEDCHInformationr6(): Sequence(&theInfo) {}

	void setULEDCHInformationr6mac_es_e_resetIndicator(const ULEDCHInformationr6mac_es_e_resetIndicator& ULEDCHInformationr6mac_es_e_resetIndicator) { *static_cast<ULEDCHInformationr6mac_es_e_resetIndicator*>(items[0]) = ULEDCHInformationr6mac_es_e_resetIndicator; }
};

enum ULEDCHInformationr7mac_es_e_resetIndicatorValues {
	True_ULEDCHInformationr7mac_es_e_resetIndicator = 0,
};
typedef Enumerated<CONSTRAINED, 0> ULEDCHInformationr7mac_es_e_resetIndicator;

class ULEDCHInformationr7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULEDCHInformationr7(): Sequence(&theInfo) {}

	void setULEDCHInformationr7mac_es_e_resetIndicator(const ULEDCHInformationr7mac_es_e_resetIndicator& ULEDCHInformationr7mac_es_e_resetIndicator) { *static_cast<ULEDCHInformationr7mac_es_e_resetIndicator*>(items[0]) = ULEDCHInformationr7mac_es_e_resetIndicator; }
};

typedef Integer<CONSTRAINED, -110, -70> ULInterference;

typedef Integer<CONSTRAINED, 0, 16777215> ULScramblingCode;

typedef Integer<EXTCONSTRAINED, 1, 8> ULSynchronisationParametersr4StepSize;

class ULSynchronisationParametersr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULSynchronisationParametersr4(): Sequence(&theInfo) {}

	void setULSynchronisationParametersr4StepSize(const ULSynchronisationParametersr4StepSize& ULSynchronisationParametersr4StepSize) { *static_cast<ULSynchronisationParametersr4StepSize*>(items[0]) = ULSynchronisationParametersr4StepSize; }
};

typedef Integer<CONSTRAINED, 0, 63> ULTimingAdvance;

typedef Null ULTimingAdvanceControlDisabled;

class ULTimingAdvanceControl : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	ULTimingAdvanceControl(): Choice(&theInfo) {}
};

typedef Null ULTimingAdvanceControlr4Disabled;

class ULTimingAdvanceControlr4 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	ULTimingAdvanceControlr4(): Choice(&theInfo) {}
};

typedef Null ULTimingAdvanceControlr7Disabled;

class ULTimingAdvanceControlr7 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	ULTimingAdvanceControlr7(): Choice(&theInfo) {}
};

typedef Null ULTimingAdvanceControlLCRr4Disabled;

class ULTimingAdvanceControlLCRr4 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	ULTimingAdvanceControlLCRr4(): Choice(&theInfo) {}
};

enum ULTSChannelisationCodeValues {
	Cc11,_ULTSChannelisationCode = 0,
};
typedef Enumerated<CONSTRAINED, 0> ULTSChannelisationCode;

typedef SequenceOf<ULTSChannelisationCode, CONSTRAINED, 1, 2> ULTSChannelisationCodeList;

class ULTSChannelisationCodeListr7 : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	ULTSChannelisationCodeListr7(): Sequence(&theInfo) {}

};

enum ULTSChannelisationCodeVHCRValues {
	Cc11,_ULTSChannelisationCodeVHCR = 0,
};
typedef Enumerated<CONSTRAINED, 0> ULTSChannelisationCodeVHCR;

typedef SequenceOf<ULTSChannelisationCodeVHCR, CONSTRAINED, 1, 2> ULTSChannelisationCodeListVHCR;

enum UplinkDPCCHSlotFormatInformationValues {
	Slotformat1,_UplinkDPCCHSlotFormatInformation = 0,
};
typedef Enumerated<CONSTRAINED, 0> UplinkDPCCHSlotFormatInformation;

class UplinkAdditionalTimeslotsParameters : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	UplinkAdditionalTimeslotsParameters(): Choice(&theInfo) {}
};

class UplinkAdditionalTimeslots : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UplinkAdditionalTimeslots(): Sequence(&theInfo) {}

	void setUplinkAdditionalTimeslotsParameters(const UplinkAdditionalTimeslotsParameters& UplinkAdditionalTimeslotsParameters) { *static_cast<UplinkAdditionalTimeslotsParameters*>(items[0]) = UplinkAdditionalTimeslotsParameters; }
};

class UplinkAdditionalTimeslotsLCRr4Parameters : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	UplinkAdditionalTimeslotsLCRr4Parameters(): Choice(&theInfo) {}
};

class UplinkAdditionalTimeslotsLCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UplinkAdditionalTimeslotsLCRr4(): Sequence(&theInfo) {}

	void setUplinkAdditionalTimeslotsLCRr4Parameters(const UplinkAdditionalTimeslotsLCRr4Parameters& UplinkAdditionalTimeslotsLCRr4Parameters) { *static_cast<UplinkAdditionalTimeslotsLCRr4Parameters*>(items[0]) = UplinkAdditionalTimeslotsLCRr4Parameters; }
};

class UplinkAdditionalTimeslotsLCRr7Parameters : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	UplinkAdditionalTimeslotsLCRr7Parameters(): Choice(&theInfo) {}
};

class UplinkAdditionalTimeslotsLCRr7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UplinkAdditionalTimeslotsLCRr7(): Sequence(&theInfo) {}

	void setUplinkAdditionalTimeslotsLCRr7Parameters(const UplinkAdditionalTimeslotsLCRr7Parameters& UplinkAdditionalTimeslotsLCRr7Parameters) { *static_cast<UplinkAdditionalTimeslotsLCRr7Parameters*>(items[0]) = UplinkAdditionalTimeslotsLCRr7Parameters; }
};

class UplinkAdditionalTimeslotsVHCRParameters : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	UplinkAdditionalTimeslotsVHCRParameters(): Choice(&theInfo) {}
};

class UplinkAdditionalTimeslotsVHCR : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UplinkAdditionalTimeslotsVHCR(): Sequence(&theInfo) {}

	void setUplinkAdditionalTimeslotsVHCRParameters(const UplinkAdditionalTimeslotsVHCRParameters& UplinkAdditionalTimeslotsVHCRParameters) { *static_cast<UplinkAdditionalTimeslotsVHCRParameters*>(items[0]) = UplinkAdditionalTimeslotsVHCRParameters; }
};

typedef Boolean UplinkTimeslotsCodesDynamicSFusage;

class UplinkTimeslotsCodes : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UplinkTimeslotsCodes(): Sequence(&theInfo) {}

	void setUplinkTimeslotsCodesDynamicSFusage(const UplinkTimeslotsCodesDynamicSFusage& UplinkTimeslotsCodesDynamicSFusage) { *static_cast<UplinkTimeslotsCodesDynamicSFusage*>(items[0]) = UplinkTimeslotsCodesDynamicSFusage; }
};

typedef Boolean UplinkTimeslotsCodesVHCRDynamicSFusage;

class UplinkTimeslotsCodesVHCR : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UplinkTimeslotsCodesVHCR(): Sequence(&theInfo) {}

	void setUplinkTimeslotsCodesVHCRDynamicSFusage(const UplinkTimeslotsCodesVHCRDynamicSFusage& UplinkTimeslotsCodesVHCRDynamicSFusage) { *static_cast<UplinkTimeslotsCodesVHCRDynamicSFusage*>(items[0]) = UplinkTimeslotsCodesVHCRDynamicSFusage; }
};

typedef Boolean UplinkTimeslotsCodesLCRr4DynamicSFusage;

class UplinkTimeslotsCodesLCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UplinkTimeslotsCodesLCRr4(): Sequence(&theInfo) {}

	void setUplinkTimeslotsCodesLCRr4DynamicSFusage(const UplinkTimeslotsCodesLCRr4DynamicSFusage& UplinkTimeslotsCodesLCRr4DynamicSFusage) { *static_cast<UplinkTimeslotsCodesLCRr4DynamicSFusage*>(items[0]) = UplinkTimeslotsCodesLCRr4DynamicSFusage; }
};

typedef Boolean UplinkTimeslotsCodesLCRr7DynamicSFusage;

class UplinkTimeslotsCodesLCRr7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UplinkTimeslotsCodesLCRr7(): Sequence(&theInfo) {}

	void setUplinkTimeslotsCodesLCRr7DynamicSFusage(const UplinkTimeslotsCodesLCRr7DynamicSFusage& UplinkTimeslotsCodesLCRr7DynamicSFusage) { *static_cast<UplinkTimeslotsCodesLCRr7DynamicSFusage*>(items[0]) = UplinkTimeslotsCodesLCRr7DynamicSFusage; }
};

typedef Integer<CONSTRAINED, 0, 127> UpPCHpositionLCR;

typedef Integer<CONSTRAINED, 1, 4> WiLCR;

typedef Integer<CONSTRAINED, 0, 63> SatID;

class AcquisitionSatInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	AcquisitionSatInfo(): Sequence(&theInfo) {}

	void setSatID(const SatID& SatID) { *static_cast<SatID*>(items[0]) = SatID; }
};

typedef SequenceOf<AcquisitionSatInfo, CONSTRAINED, 1, maxSat> AcquisitionSatInfoList;

typedef Integer<CONSTRAINED, 1, 16> MeasurementIdentity;

typedef SequenceOf<MeasurementIdentity, CONSTRAINED, 1, maxAdditionalMeas> AdditionalMeasurementIDList;

typedef Integer<CONSTRAINED, 1, 32> MeasurementIdentityr9;

typedef SequenceOf<MeasurementIdentityr9, CONSTRAINED, 1, maxAdditionalMeas> AdditionalMeasurementIDListr9;

typedef Integer<EXTCONSTRAINED, SIZE (16, SIZE (16> AlmanacSatInfoDataID;

class AlmanacSatInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	AlmanacSatInfo(): Sequence(&theInfo) {}

	void setAlmanacSatInfoDataID(const AlmanacSatInfoDataID& AlmanacSatInfoDataID) { *static_cast<AlmanacSatInfoDataID*>(items[0]) = AlmanacSatInfoDataID; }
};

typedef SequenceOf<AlmanacSatInfo, CONSTRAINED, 1, maxSat> AlmanacSatInfoList;

typedef BitString<EXTCONSTRAINED, 2, 2> GANSSSATInfoAlmanacSBASecefSbasAlmDataID;

class GANSSSATInfoAlmanacSBASecef : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	GANSSSATInfoAlmanacSBASecef(): Sequence(&theInfo) {}

	void setGANSSSATInfoAlmanacSBASecefSbasAlmDataID(const GANSSSATInfoAlmanacSBASecefSbasAlmDataID& GANSSSATInfoAlmanacSBASecefSbasAlmDataID) { *static_cast<GANSSSATInfoAlmanacSBASecefSbasAlmDataID*>(items[0]) = GANSSSATInfoAlmanacSBASecefSbasAlmDataID; }
};

typedef SequenceOf<GANSSSATInfoAlmanacSBASecef, CONSTRAINED, 1, maxGANSSSat> GANSSSATInfoAlmanacSBASecefList;

class ALMECEFsbasAlmanacSet : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ALMECEFsbasAlmanacSet(): Sequence(&theInfo) {}

	void setSatinfoSBASecefList(const GANSSSATInfoAlmanacSBASecefList& SatinfoSBASecefList) { *static_cast<GANSSSATInfoAlmanacSBASecefList*>(items[0]) = SatinfoSBASecefList; }
};

typedef BitString<EXTCONSTRAINED, 11, 11> GANSSSATInfoAlmanacGLOkpGloAlmNA;

class GANSSSATInfoAlmanacGLOkp : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	GANSSSATInfoAlmanacGLOkp(): Sequence(&theInfo) {}

	void setGANSSSATInfoAlmanacGLOkpGloAlmNA(const GANSSSATInfoAlmanacGLOkpGloAlmNA& GANSSSATInfoAlmanacGLOkpGloAlmNA) { *static_cast<GANSSSATInfoAlmanacGLOkpGloAlmNA*>(items[0]) = GANSSSATInfoAlmanacGLOkpGloAlmNA; }
};

typedef SequenceOf<GANSSSATInfoAlmanacGLOkp, CONSTRAINED, 1, maxGANSSSat> GANSSSATInfoAlmanacGLOkpList;

class ALMGlonassAlmanacSet : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ALMGlonassAlmanacSet(): Sequence(&theInfo) {}

	void setSatinfoGLOkpList(const GANSSSATInfoAlmanacGLOkpList& SatinfoGLOkpList) { *static_cast<GANSSSATInfoAlmanacGLOkpList*>(items[0]) = SatinfoGLOkpList; }
};

typedef Integer<EXTCONSTRAINED, 0, 147> ALMkeplerianParametersToa;

class ALMkeplerianParameters : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ALMkeplerianParameters(): Sequence(&theInfo) {}

	void setALMkeplerianParametersToa(const ALMkeplerianParametersToa& ALMkeplerianParametersToa) { *static_cast<ALMkeplerianParametersToa*>(items[0]) = ALMkeplerianParametersToa; }
};

typedef Integer<EXTCONSTRAINED, 0, 147> ALMMidiAlmanacSetToa;

class ALMMidiAlmanacSet : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ALMMidiAlmanacSet(): Sequence(&theInfo) {}

	void setALMMidiAlmanacSetToa(const ALMMidiAlmanacSetToa& ALMMidiAlmanacSetToa) { *static_cast<ALMMidiAlmanacSetToa*>(items[0]) = ALMMidiAlmanacSetToa; }
};

typedef Integer<EXTCONSTRAINED, 0, 147> ALMNAVKeplerianSetToa;

class ALMNAVKeplerianSet : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ALMNAVKeplerianSet(): Sequence(&theInfo) {}

	void setALMNAVKeplerianSetToa(const ALMNAVKeplerianSetToa& ALMNAVKeplerianSetToa) { *static_cast<ALMNAVKeplerianSetToa*>(items[0]) = ALMNAVKeplerianSetToa; }
};

typedef Integer<EXTCONSTRAINED, 0, 147> ALMReducedKeplerianSetToa;

class ALMReducedKeplerianSet : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ALMReducedKeplerianSet(): Sequence(&theInfo) {}

	void setALMReducedKeplerianSetToa(const ALMReducedKeplerianSetToa& ALMReducedKeplerianSetToa) { *static_cast<ALMReducedKeplerianSetToa*>(items[0]) = ALMReducedKeplerianSetToa; }
};

typedef Integer<EXTCONSTRAINED, SIZE(8, SIZE(8> AuxInfoGANSSID1elementSvID;

class AuxInfoGANSSID1element : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	AuxInfoGANSSID1element(): Sequence(&theInfo) {}

	void setAuxInfoGANSSID1elementSvID(const AuxInfoGANSSID1elementSvID& AuxInfoGANSSID1elementSvID) { *static_cast<AuxInfoGANSSID1elementSvID*>(items[0]) = AuxInfoGANSSID1elementSvID; }
};

typedef SequenceOf<AuxInfoGANSSID1element, CONSTRAINED, 1, maxGANSSSat> AuxInfoGANSSID1;

typedef Integer<EXTCONSTRAINED, SIZE (8, SIZE (8> AuxInfoGANSSID3elementSvID;

class AuxInfoGANSSID3element : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	AuxInfoGANSSID3element(): Sequence(&theInfo) {}

	void setAuxInfoGANSSID3elementSvID(const AuxInfoGANSSID3elementSvID& AuxInfoGANSSID3elementSvID) { *static_cast<AuxInfoGANSSID3elementSvID*>(items[0]) = AuxInfoGANSSID3elementSvID; }
};

typedef SequenceOf<AuxInfoGANSSID3element, CONSTRAINED, 1,  maxGANSSSat> AuxInfoGANSSID3;

enum AverageRLCBufferPayloadValues {
	Pla0,_AverageRLCBufferPayload = 0,
};
typedef Enumerated<CONSTRAINED, 0> AverageRLCBufferPayload;

typedef Integer<EXTCONSTRAINED, 0, 31> AzimuthAndElevationAzimuth;

class AzimuthAndElevation : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	AzimuthAndElevation(): Sequence(&theInfo) {}

	void setAzimuthAndElevationAzimuth(const AzimuthAndElevationAzimuth& AzimuthAndElevationAzimuth) { *static_cast<AzimuthAndElevationAzimuth*>(items[0]) = AzimuthAndElevationAzimuth; }
};

typedef Integer<CONSTRAINED, 0, 63> BadSatListItem;

typedef SequenceOf<BadSatListItem, CONSTRAINED, 1, maxSat> BadSatList;

enum FrequencyBandValues {
	Dcs1800BandUsed,_FrequencyBand = 0,
};
typedef Enumerated<CONSTRAINED, 0> FrequencyBand;

typedef Integer<CONSTRAINED, 0, 1023> BCCHARFCN;

class BLERMeasurementResults : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	BLERMeasurementResults(): Sequence(&theInfo) {}

	void setTransportChannelIdentity(const TransportChannelIdentity& TransportChannelIdentity) { *static_cast<TransportChannelIdentity*>(items[0]) = TransportChannelIdentity; }
};

typedef SequenceOf<BLERMeasurementResults, CONSTRAINED, 1, maxTrCH> BLERMeasurementResultsList;

typedef SequenceOf<TransportChannelIdentity, CONSTRAINED, 1, maxTrCH> BLERTransChIdList;

enum BSICVerificationRequiredValues {
	Required,_BSICVerificationRequired = 0,
};
typedef Enumerated<CONSTRAINED, 0> BSICVerificationRequired;

typedef Integer<EXTCONSTRAINED, 0, maxCellMeas> BSICReportedVerifiedBSIC;

class BSICReported : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	BSICReported(): Choice(&theInfo) {}
};

typedef Integer<EXTCONSTRAINED, 0, 15> BurstModeParametersBurstStart;

class BurstModeParameters : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	BurstModeParameters(): Sequence(&theInfo) {}

	void setBurstModeParametersBurstStart(const BurstModeParametersBurstStart& BurstModeParametersBurstStart) { *static_cast<BurstModeParametersBurstStart*>(items[0]) = BurstModeParametersBurstStart; }
};

enum TriggeringCondition2Values {
	ActiveSetCellsOnly,_TriggeringCondition2 = 0,
};
typedef Enumerated<CONSTRAINED, 0> TriggeringCondition2;

class Event1a : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Event1a(): Sequence(&theInfo) {}

	void setTriggeringCondition(const TriggeringCondition2& TriggeringCondition) { *static_cast<TriggeringCondition2*>(items[0]) = TriggeringCondition; }
};

class IntraFreqEvent : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	IntraFreqEvent(): Choice(&theInfo) {}
};

class IntraFreqEventCriteria : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IntraFreqEventCriteria(): Sequence(&theInfo) {}

	void setEvent(const IntraFreqEvent& Event) { *static_cast<IntraFreqEvent*>(items[0]) = Event; }
};

typedef SequenceOf<IntraFreqEventCriteria, CONSTRAINED, 1, maxMeasEvent> IntraFreqEventCriteriaList;

class IntraFreqReportingCriteria : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IntraFreqReportingCriteria(): Sequence(&theInfo) {}

	void setEventCriteriaList(const IntraFreqEventCriteriaList& EventCriteriaList) { *static_cast<IntraFreqEventCriteriaList*>(items[0]) = EventCriteriaList; }
};

class CellDCHReportCriteria : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	CellDCHReportCriteria(): Choice(&theInfo) {}
};

class Event1aLCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Event1aLCRr4(): Sequence(&theInfo) {}

	void setTriggeringCondition(const TriggeringCondition2& TriggeringCondition) { *static_cast<TriggeringCondition2*>(items[0]) = TriggeringCondition; }
};

class IntraFreqEventLCRr4 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	IntraFreqEventLCRr4(): Choice(&theInfo) {}
};

class IntraFreqEventCriteriaLCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IntraFreqEventCriteriaLCRr4(): Sequence(&theInfo) {}

	void setEvent(const IntraFreqEventLCRr4& Event) { *static_cast<IntraFreqEventLCRr4*>(items[0]) = Event; }
};

typedef SequenceOf<IntraFreqEventCriteriaLCRr4, CONSTRAINED, 1, maxMeasEvent> IntraFreqEventCriteriaListLCRr4;

class IntraFreqReportingCriteriaLCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IntraFreqReportingCriteriaLCRr4(): Sequence(&theInfo) {}

	void setEventCriteriaList(const IntraFreqEventCriteriaListLCRr4& EventCriteriaList) { *static_cast<IntraFreqEventCriteriaListLCRr4*>(items[0]) = EventCriteriaList; }
};

class CellDCHReportCriteriaLCRr4 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	CellDCHReportCriteriaLCRr4(): Choice(&theInfo) {}
};

typedef Integer<EXTCONSTRAINED, SIZE (5, SIZE (5> CellDCHMeasOccasionPatternLCRPatternIdentifier;

class CellDCHMeasOccasionPatternLCR : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellDCHMeasOccasionPatternLCR(): Sequence(&theInfo) {}

	void setCellDCHMeasOccasionPatternLCRPatternIdentifier(const CellDCHMeasOccasionPatternLCRPatternIdentifier& CellDCHMeasOccasionPatternLCRPatternIdentifier) { *static_cast<CellDCHMeasOccasionPatternLCRPatternIdentifier*>(items[0]) = CellDCHMeasOccasionPatternLCRPatternIdentifier; }
};

typedef SequenceOf<CellDCHMeasOccasionPatternLCR, CONSTRAINED, 1, maxMeasOccasionPattern> CellDCHMeasOccasionInfoTDD128r9CellDCHMeasOccasionSequenceList;

class CellDCHMeasOccasionInfoTDD128r9 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellDCHMeasOccasionInfoTDD128r9(): Sequence(&theInfo) {}

	void setCellDCHMeasOccasionInfoTDD128r9CellDCHMeasOccasionSequenceList(const CellDCHMeasOccasionInfoTDD128r9CellDCHMeasOccasionSequenceList& CellDCHMeasOccasionInfoTDD128r9CellDCHMeasOccasionSequenceList) { *static_cast<CellDCHMeasOccasionInfoTDD128r9CellDCHMeasOccasionSequenceList*>(items[0]) = CellDCHMeasOccasionInfoTDD128r9CellDCHMeasOccasionSequenceList; }
};

typedef Integer<CONSTRAINED, -20, 20> CellIndividualOffset;

class CellInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellInfo(): Sequence(&theInfo) {}

	void setCellIndividualOffset(const CellIndividualOffset& CellIndividualOffset) { *static_cast<CellIndividualOffset*>(items[0]) = CellIndividualOffset; }
};

class CellInfor4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellInfor4(): Sequence(&theInfo) {}

	void setCellIndividualOffset(const CellIndividualOffset& CellIndividualOffset) { *static_cast<CellIndividualOffset*>(items[0]) = CellIndividualOffset; }
};

typedef Integer<CONSTRAINED, -50, 50> QOffsetSN;

class CellSelectReselectInfoMCRSCP : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellSelectReselectInfoMCRSCP(): Sequence(&theInfo) {}

	void setQOffsetSN(const QOffsetSN& QOffsetSN) { *static_cast<QOffsetSN*>(items[0]) = QOffsetSN; }
};

class CellInfoLCRr8ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellInfoLCRr8ext(): Sequence(&theInfo) {}

	void setCellSelectionReselectionInfo(const CellSelectReselectInfoMCRSCP& CellSelectionReselectionInfo) { *static_cast<CellSelectReselectInfoMCRSCP*>(items[0]) = CellSelectionReselectionInfo; }
};

class CellInfor9 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellInfor9(): Sequence(&theInfo) {}

	void setCellIndividualOffset(const CellIndividualOffset& CellIndividualOffset) { *static_cast<CellIndividualOffset*>(items[0]) = CellIndividualOffset; }
};

class CellInfoSIRSCP : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellInfoSIRSCP(): Sequence(&theInfo) {}

	void setCellIndividualOffset(const CellIndividualOffset& CellIndividualOffset) { *static_cast<CellIndividualOffset*>(items[0]) = CellIndividualOffset; }
};

class CellInfoSIRSCPLCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellInfoSIRSCPLCRr4(): Sequence(&theInfo) {}

	void setCellIndividualOffset(const CellIndividualOffset& CellIndividualOffset) { *static_cast<CellIndividualOffset*>(items[0]) = CellIndividualOffset; }
};

class CellInfoSIECN0 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellInfoSIECN0(): Sequence(&theInfo) {}

	void setCellIndividualOffset(const CellIndividualOffset& CellIndividualOffset) { *static_cast<CellIndividualOffset*>(items[0]) = CellIndividualOffset; }
};

class CellInfoSIECN0LCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellInfoSIECN0LCRr4(): Sequence(&theInfo) {}

	void setCellIndividualOffset(const CellIndividualOffset& CellIndividualOffset) { *static_cast<CellIndividualOffset*>(items[0]) = CellIndividualOffset; }
};

class CellInfoSIHCSRSCP : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellInfoSIHCSRSCP(): Sequence(&theInfo) {}

	void setCellIndividualOffset(const CellIndividualOffset& CellIndividualOffset) { *static_cast<CellIndividualOffset*>(items[0]) = CellIndividualOffset; }
};

class CellInfoSIHCSRSCPLCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellInfoSIHCSRSCPLCRr4(): Sequence(&theInfo) {}

	void setCellIndividualOffset(const CellIndividualOffset& CellIndividualOffset) { *static_cast<CellIndividualOffset*>(items[0]) = CellIndividualOffset; }
};

class CellInfoSIHCSECN0 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellInfoSIHCSECN0(): Sequence(&theInfo) {}

	void setCellIndividualOffset(const CellIndividualOffset& CellIndividualOffset) { *static_cast<CellIndividualOffset*>(items[0]) = CellIndividualOffset; }
};

class CellInfoSIHCSECN0LCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellInfoSIHCSECN0LCRr4(): Sequence(&theInfo) {}

	void setCellIndividualOffset(const CellIndividualOffset& CellIndividualOffset) { *static_cast<CellIndividualOffset*>(items[0]) = CellIndividualOffset; }
};

class CellMeasuredResultsv920ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellMeasuredResultsv920ext(): Sequence(&theInfo) {}

	void setCsgIdentity(const CSGIdentity& CsgIdentity) { *static_cast<CSGIdentity*>(items[0]) = CsgIdentity; }
};

typedef SequenceOf<PrimaryCPICHInfo, EXTCONSTRAINED, 1, maxCellMeas> CellMeasurementEventResultsFdd;

class CellMeasurementEventResults : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	CellMeasurementEventResults(): Choice(&theInfo) {}
};

typedef SequenceOf<PrimaryCPICHInfo, EXTCONSTRAINED, 1,  maxCellMeasOnSecULFreq> CellMeasurementEventResultsOnSecUlFreqFdd;

class CellMeasurementEventResultsOnSecUlFreq : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	CellMeasurementEventResultsOnSecUlFreq(): Choice(&theInfo) {}
};

typedef SequenceOf<PrimaryCCPCHInfoLCRr4, CONSTRAINED, 1, maxCellMeas> CellMeasurementEventResultsLCRr4;

enum SFNSFNOTDTypeValues {
	NoReport,_SFNSFNOTDType = 0,
};
typedef Enumerated<CONSTRAINED, 0> SFNSFNOTDType;

class CellReportingQuantities : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellReportingQuantities(): Sequence(&theInfo) {}

	void setDummy(const SFNSFNOTDType& Dummy) { *static_cast<SFNSFNOTDType*>(items[0]) = Dummy; }
};

class CellSelectReselectInfoSIB1112 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellSelectReselectInfoSIB1112(): Sequence(&theInfo) {}

	void setQOffset1SN(const QOffsetSN& QOffset1SN) { *static_cast<QOffsetSN*>(items[0]) = QOffset1SN; }
};

class CellSelectReselectInfoSIB1112RSCP : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellSelectReselectInfoSIB1112RSCP(): Sequence(&theInfo) {}

	void setQOffsetSN(const QOffsetSN& QOffsetSN) { *static_cast<QOffsetSN*>(items[0]) = QOffsetSN; }
};

class CellSelectReselectInfoSIB1112ECN0 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellSelectReselectInfoSIB1112ECN0(): Sequence(&theInfo) {}

	void setQOffset1SN(const QOffsetSN& QOffset1SN) { *static_cast<QOffsetSN*>(items[0]) = QOffset1SN; }
};

class CellSelectReselectInfoSIB1112HCSRSCP : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellSelectReselectInfoSIB1112HCSRSCP(): Sequence(&theInfo) {}

	void setQOffsetSN(const QOffsetSN& QOffsetSN) { *static_cast<QOffsetSN*>(items[0]) = QOffsetSN; }
};

class CellSelectReselectInfoSIB1112HCSECN0 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellSelectReselectInfoSIB1112HCSECN0(): Sequence(&theInfo) {}

	void setQOffset1SN(const QOffsetSN& QOffset1SN) { *static_cast<QOffsetSN*>(items[0]) = QOffset1SN; }
};

typedef Integer<CONSTRAINED, -2, -1> DeltaQrxlevmin;

class CellSelectReselectInfov590ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellSelectReselectInfov590ext(): Sequence(&theInfo) {}

	void setDeltaQrxlevmin(const DeltaQrxlevmin& DeltaQrxlevmin) { *static_cast<DeltaQrxlevmin*>(items[0]) = DeltaQrxlevmin; }
};

class CellSelectReselectInfoPCHFACHv5b0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellSelectReselectInfoPCHFACHv5b0ext(): Sequence(&theInfo) {}

	void setQHystlSPCH(const QHystSFine& QHystlSPCH) { *static_cast<QHystSFine*>(items[0]) = QHystlSPCH; }
};

typedef Null TCRMaxNotUsed;

class TCRMax : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	TCRMax(): Choice(&theInfo) {}
};

class CellSelectReselectInfoTreselectionScalingv5c0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellSelectReselectInfoTreselectionScalingv5c0ext(): Sequence(&theInfo) {}

	void setNonHCStCRMax(const TCRMax& NonHCStCRMax) { *static_cast<TCRMax*>(items[0]) = NonHCStCRMax; }
};

typedef Integer<CONSTRAINED, 0, maxCellMeas_1> InterFreqCellID;

typedef SequenceOf<InterFreqCellID, CONSTRAINED, 1, maxCellMeas> CellsForInterFreqMeasList;

typedef Integer<CONSTRAINED, 0, maxCellMeas_1> InterRATCellID;

typedef SequenceOf<InterRATCellID, CONSTRAINED, 1, maxCellMeas> CellsForInterRATMeasList;

typedef Integer<CONSTRAINED, 0, maxCellMeas_1> IntraFreqCellID;

typedef SequenceOf<IntraFreqCellID, CONSTRAINED, 1, maxCellMeas> CellsForIntraFreqMeasList;

typedef Integer<CONSTRAINED, 0, maxCellMeasOnSecULFreq_1> IntraFreqCellIDOnSecULFreq;

typedef SequenceOf<IntraFreqCellIDOnSecULFreq, CONSTRAINED, 1, maxCellMeasOnSecULFreq> CellsForIntraFreqMeasListOnSecULFreq;

typedef Integer<EXTCONSTRAINED, 0, 15> CountCSFNFramedifferenceCountCSFNHigh;

class CountCSFNFramedifference : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CountCSFNFramedifference(): Sequence(&theInfo) {}

	void setCountCSFNFramedifferenceCountCSFNHigh(const CountCSFNFramedifferenceCountCSFNHigh& CountCSFNFramedifferenceCountCSFNHigh) { *static_cast<CountCSFNFramedifferenceCountCSFNHigh*>(items[0]) = CountCSFNFramedifferenceCountCSFNHigh; }
};

class CellSynchronisationInfoModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellSynchronisationInfoModeSpecificInfoFdd(): Sequence(&theInfo) {}

	void setCountCSFNFramedifference(const CountCSFNFramedifference& CountCSFNFramedifference) { *static_cast<CountCSFNFramedifference*>(items[0]) = CountCSFNFramedifference; }
};

class CellSynchronisationInfoModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	CellSynchronisationInfoModeSpecificInfo(): Choice(&theInfo) {}
};

class CellSynchronisationInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellSynchronisationInfo(): Sequence(&theInfo) {}

	void setCellSynchronisationInfoModeSpecificInfo(const CellSynchronisationInfoModeSpecificInfo& CellSynchronisationInfoModeSpecificInfo) { *static_cast<CellSynchronisationInfoModeSpecificInfo*>(items[0]) = CellSynchronisationInfoModeSpecificInfo; }
};

class CellToReport : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellToReport(): Sequence(&theInfo) {}

	void setBsicReported(const BSICReported& BsicReported) { *static_cast<BSICReported*>(items[0]) = BsicReported; }
};

typedef SequenceOf<CellToReport, CONSTRAINED, 1, maxCellMeas> CellToReportList;

typedef BitString<EXTCONSTRAINED, 11, 11> CNAVclockModelCnavToc;

class CNAVclockModel : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CNAVclockModel(): Sequence(&theInfo) {}

	void setCNAVclockModelCnavToc(const CNAVclockModelCnavToc& CNAVclockModelCnavToc) { *static_cast<CNAVclockModelCnavToc*>(items[0]) = CNAVclockModelCnavToc; }
};

enum CodePhaseSearchWindowValues {
	W1023,_CodePhaseSearchWindow = 0,
};
typedef Enumerated<CONSTRAINED, 0> CodePhaseSearchWindow;

typedef Integer<CONSTRAINED, 0, 63> CPICHEcN0;

typedef Integer<CONSTRAINED, 0, 127> CPICHRSCP;

class CSGCellInfoModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CSGCellInfoModeSpecificInfoFdd(): Sequence(&theInfo) {}

	void setStartPSC(const PrimaryCPICHInfo& StartPSC) { *static_cast<PrimaryCPICHInfo*>(items[0]) = StartPSC; }
};

class CSGCellInfoModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	CSGCellInfoModeSpecificInfo(): Choice(&theInfo) {}
};

class CSGCellInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CSGCellInfo(): Sequence(&theInfo) {}

	void setCSGCellInfoModeSpecificInfo(const CSGCellInfoModeSpecificInfo& CSGCellInfoModeSpecificInfo) { *static_cast<CSGCellInfoModeSpecificInfo*>(items[0]) = CSGCellInfoModeSpecificInfo; }
};

typedef SequenceOf<CSGCellInfo, CONSTRAINED, 1, maxMeasCSGRange> CSGCellInfoList;

class CSGInterFreqCellInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CSGInterFreqCellInfo(): Sequence(&theInfo) {}

	void setFrequencyInfo(const FrequencyInfo& FrequencyInfo) { *static_cast<FrequencyInfo*>(items[0]) = FrequencyInfo; }
};

typedef SequenceOf<CSGInterFreqCellInfo, CONSTRAINED, 1, maxFreq> CSGInterFreqCellInfoList;


enum CSGProximityDetectionuTRACSGProximityDetecValues {
	Enable_CSGProximityDetectionuTRACSGProximityDetec = 0,
};
typedef Enumerated<CONSTRAINED, 0> CSGProximityDetectionuTRACSGProximityDetec;

class CSGProximityDetection : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CSGProximityDetection(): Sequence(&theInfo) {}

	void setCSGProximityDetectionuTRACSGProximityDetec(const CSGProximityDetectionuTRACSGProximityDetec& CSGProximityDetectionuTRACSGProximityDetec) { *static_cast<CSGProximityDetectionuTRACSGProximityDetec*>(items[0]) = CSGProximityDetectionuTRACSGProximityDetec; }
};

enum CSGProximityIndicationcSGproximityIndValues {
	Entering,_CSGProximityIndicationcSGproximityInd = 0,
};
typedef Enumerated<CONSTRAINED, 0> CSGProximityIndicationcSGproximityInd;

class CSGProximityIndication : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CSGProximityIndication(): Sequence(&theInfo) {}

	void setCSGProximityIndicationcSGproximityInd(const CSGProximityIndicationcSGproximityInd& CSGProximityIndicationcSGproximityInd) { *static_cast<CSGProximityIndicationcSGproximityInd*>(items[0]) = CSGProximityIndicationcSGproximityInd; }
};

typedef Integer<CONSTRAINED, 0, 7> GANSSSignalId;

class DataBitAssistance : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DataBitAssistance(): Sequence(&theInfo) {}

	void setGansssignalid(const GANSSSignalId& Gansssignalid) { *static_cast<GANSSSignalId*>(items[0]) = Gansssignalid; }
};

typedef Integer<EXTCONSTRAINED, 0, 63> DataBitAssistanceSatSatID;

class DataBitAssistanceSat : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DataBitAssistanceSat(): Sequence(&theInfo) {}

	void setDataBitAssistanceSatSatID(const DataBitAssistanceSatSatID& DataBitAssistanceSatSatID) { *static_cast<DataBitAssistanceSatSatID*>(items[0]) = DataBitAssistanceSatSatID; }
};

typedef SequenceOf<DataBitAssistanceSat, CONSTRAINED, 1, maxGANSSSat> DataBitAssistanceList;

typedef SequenceOf<DataBitAssistance, CONSTRAINED, 1, maxSgnType> DataBitAssistanceSgnList;

typedef Integer<CONSTRAINED, -127, 127> DeltaPRC;

typedef Integer<CONSTRAINED, -5, -1> DeltaRSCP;

class DeltaRSCPPerCell : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DeltaRSCPPerCell(): Sequence(&theInfo) {}

	void setDeltaRSCP(const DeltaRSCP& DeltaRSCP) { *static_cast<DeltaRSCP*>(items[0]) = DeltaRSCP; }
};

typedef Integer<CONSTRAINED, -7, 7> DeltaRRC;

typedef BitString<EXTCONSTRAINED, 11, 11> DeltaUT1B1;

class DeltaUT1 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DeltaUT1(): Sequence(&theInfo) {}

	void setDeltaUT1B1(const DeltaUT1B1& DeltaUT1B1) { *static_cast<DeltaUT1B1*>(items[0]) = DeltaUT1B1; }
};

class DGANSSInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DGANSSInfo(): Sequence(&theInfo) {}

	void setGanssSignalId(const GANSSSignalId& GanssSignalId) { *static_cast<GANSSSignalId*>(items[0]) = GanssSignalId; }
};

class DGANSSInfor9 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DGANSSInfor9(): Sequence(&theInfo) {}

	void setGanssSignalId(const GANSSSignalId& GanssSignalId) { *static_cast<GANSSSignalId*>(items[0]) = GanssSignalId; }
};

enum UDREGrowthRateValues {
	Growth15,_UDREGrowthRate = 0,
};
typedef Enumerated<CONSTRAINED, 0> UDREGrowthRate;

class DGANSSSignalInformationv920ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DGANSSSignalInformationv920ext(): Sequence(&theInfo) {}

	void setUdreGrowthRate(const UDREGrowthRate& UdreGrowthRate) { *static_cast<UDREGrowthRate*>(items[0]) = UdreGrowthRate; }
};

typedef SequenceOf<DGANSSSignalInformationv920ext, CONSTRAINED, 1, maxGANSSSat> DGANSSSignalInformationListv920ext;

class DGANSSInfov920ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DGANSSInfov920ext(): Sequence(&theInfo) {}

	void setDgansssignalInformationList(const DGANSSSignalInformationListv920ext& DgansssignalInformationList) { *static_cast<DGANSSSignalInformationListv920ext*>(items[0]) = DgansssignalInformationList; }
};

typedef SequenceOf<DGANSSInfo, CONSTRAINED, 1, maxSgnType> DGANSSInfoList;

typedef SequenceOf<DGANSSInfor9, CONSTRAINED, 1, maxSgnType> DGANSSInfoListr9;

typedef SequenceOf<DGANSSInfov920ext, CONSTRAINED, 1, maxSgnType> DGANSSInfoListv920ext;

typedef Integer<EXTCONSTRAINED, SIZE (10, SIZE (10> DGANSSSignalInformationSatId;

class DGANSSSignalInformation : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DGANSSSignalInformation(): Sequence(&theInfo) {}

	void setDGANSSSignalInformationSatId(const DGANSSSignalInformationSatId& DGANSSSignalInformationSatId) { *static_cast<DGANSSSignalInformationSatId*>(items[0]) = DGANSSSignalInformationSatId; }
};

typedef Integer<EXTCONSTRAINED, SIZE (10, SIZE (10> DGANSSSignalInformationr9SatId;

class DGANSSSignalInformationr9 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DGANSSSignalInformationr9(): Sequence(&theInfo) {}

	void setDGANSSSignalInformationr9SatId(const DGANSSSignalInformationr9SatId& DGANSSSignalInformationr9SatId) { *static_cast<DGANSSSignalInformationr9SatId*>(items[0]) = DGANSSSignalInformationr9SatId; }
};

typedef SequenceOf<DGANSSSignalInformation, CONSTRAINED, 1, maxGANSSSat> DGANSSSignalInformationList;

typedef SequenceOf<DGANSSSignalInformationr9, CONSTRAINED, 1, maxGANSSSat> DGANSSSignalInformationListr9;

typedef BitString<CONSTRAINED, 8, 8> DGANSSSigIdReq;

class DGPSCorrectionSatInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DGPSCorrectionSatInfo(): Sequence(&theInfo) {}

	void setSatID(const SatID& SatID) { *static_cast<SatID*>(items[0]) = SatID; }
};

class DGPSCorrectionSatInfor9 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DGPSCorrectionSatInfor9(): Sequence(&theInfo) {}

	void setSatID(const SatID& SatID) { *static_cast<SatID*>(items[0]) = SatID; }
};

class DGPSCorrectionSatInfov920ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DGPSCorrectionSatInfov920ext(): Sequence(&theInfo) {}

	void setUdreGrowthRate(const UDREGrowthRate& UdreGrowthRate) { *static_cast<UDREGrowthRate*>(items[0]) = UdreGrowthRate; }
};

typedef SequenceOf<DGPSCorrectionSatInfo, CONSTRAINED, 1, maxSat> DGPSCorrectionSatInfoList;

typedef SequenceOf<DGPSCorrectionSatInfor9, CONSTRAINED, 1, maxSat> DGPSCorrectionSatInfoListr9;

typedef SequenceOf<DGPSCorrectionSatInfov920ext, CONSTRAINED, 1, maxSat> DGPSCorrectionSatInfoListv920ext;

enum DiffCorrectionStatusValues {
	Udre10,_DiffCorrectionStatus = 0,
};
typedef Enumerated<CONSTRAINED, 0> DiffCorrectionStatus;

typedef Integer<CONSTRAINED, 0, 63> DLTransportChannelBLER;

enum DopplerUncertaintyValues {
	Hz125,_DopplerUncertainty = 0,
};
typedef Enumerated<CONSTRAINED, 0> DopplerUncertainty;

enum EllipsoidPointlatitudeSignValues {
	North,_EllipsoidPointlatitudeSign = 0,
};
typedef Enumerated<CONSTRAINED, 0> EllipsoidPointlatitudeSign;

class EllipsoidPoint : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EllipsoidPoint(): Sequence(&theInfo) {}

	void setEllipsoidPointlatitudeSign(const EllipsoidPointlatitudeSign& EllipsoidPointlatitudeSign) { *static_cast<EllipsoidPointlatitudeSign*>(items[0]) = EllipsoidPointlatitudeSign; }
};

enum EllipsoidPointAltitudelatitudeSignValues {
	North,_EllipsoidPointAltitudelatitudeSign = 0,
};
typedef Enumerated<CONSTRAINED, 0> EllipsoidPointAltitudelatitudeSign;

class EllipsoidPointAltitude : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EllipsoidPointAltitude(): Sequence(&theInfo) {}

	void setEllipsoidPointAltitudelatitudeSign(const EllipsoidPointAltitudelatitudeSign& EllipsoidPointAltitudelatitudeSign) { *static_cast<EllipsoidPointAltitudelatitudeSign*>(items[0]) = EllipsoidPointAltitudelatitudeSign; }
};

enum EllipsoidPointAltitudeEllipsoidelatitudeSignValues {
	North,_EllipsoidPointAltitudeEllipsoidelatitudeSign = 0,
};
typedef Enumerated<CONSTRAINED, 0> EllipsoidPointAltitudeEllipsoidelatitudeSign;

class EllipsoidPointAltitudeEllipsoide : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EllipsoidPointAltitudeEllipsoide(): Sequence(&theInfo) {}

	void setEllipsoidPointAltitudeEllipsoidelatitudeSign(const EllipsoidPointAltitudeEllipsoidelatitudeSign& EllipsoidPointAltitudeEllipsoidelatitudeSign) { *static_cast<EllipsoidPointAltitudeEllipsoidelatitudeSign*>(items[0]) = EllipsoidPointAltitudeEllipsoidelatitudeSign; }
};

enum EllipsoidPointUncertCirclelatitudeSignValues {
	North,_EllipsoidPointUncertCirclelatitudeSign = 0,
};
typedef Enumerated<CONSTRAINED, 0> EllipsoidPointUncertCirclelatitudeSign;

class EllipsoidPointUncertCircle : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EllipsoidPointUncertCircle(): Sequence(&theInfo) {}

	void setEllipsoidPointUncertCirclelatitudeSign(const EllipsoidPointUncertCirclelatitudeSign& EllipsoidPointUncertCirclelatitudeSign) { *static_cast<EllipsoidPointUncertCirclelatitudeSign*>(items[0]) = EllipsoidPointUncertCirclelatitudeSign; }
};

enum EllipsoidPointUncertEllipselatitudeSignValues {
	North,_EllipsoidPointUncertEllipselatitudeSign = 0,
};
typedef Enumerated<CONSTRAINED, 0> EllipsoidPointUncertEllipselatitudeSign;

class EllipsoidPointUncertEllipse : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EllipsoidPointUncertEllipse(): Sequence(&theInfo) {}

	void setEllipsoidPointUncertEllipselatitudeSign(const EllipsoidPointUncertEllipselatitudeSign& EllipsoidPointUncertEllipselatitudeSign) { *static_cast<EllipsoidPointUncertEllipselatitudeSign*>(items[0]) = EllipsoidPointUncertEllipselatitudeSign; }
};

enum EnvironmentCharacterisationValues {
	PossibleHeavyMultipathNLOS,_EnvironmentCharacterisation = 0,
};
typedef Enumerated<CONSTRAINED, 0> EnvironmentCharacterisation;

class EutraEventResult : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EutraEventResult(): Sequence(&theInfo) {}

	void setEarfcn(const EARFCN& Earfcn) { *static_cast<EARFCN*>(items[0]) = Earfcn; }
};

typedef SequenceOf<EutraEventResult, CONSTRAINED, 1, maxReportedEUTRAFreqs> EutraEventResultList;

enum EventIDInterRATValues {
	E3a,_EventIDInterRAT = 0,
};
typedef Enumerated<CONSTRAINED, 0> EventIDInterRAT;

class EUTRAEventResults : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EUTRAEventResults(): Sequence(&theInfo) {}

	void setEventID(const EventIDInterRAT& EventID) { *static_cast<EventIDInterRAT*>(items[0]) = EventID; }
};

class EUTRAFrequencyAndPriorityInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EUTRAFrequencyAndPriorityInfo(): Sequence(&theInfo) {}

	void setEarfcn(const EARFCN& Earfcn) { *static_cast<EARFCN*>(items[0]) = Earfcn; }
};

typedef Integer<EXTCONSTRAINED, -34, -3> EUTRAFrequencyAndPriorityInfov920extQqualMinEUTRA;

class EUTRAFrequencyAndPriorityInfov920ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EUTRAFrequencyAndPriorityInfov920ext(): Sequence(&theInfo) {}

	void setEUTRAFrequencyAndPriorityInfov920extQqualMinEUTRA(const EUTRAFrequencyAndPriorityInfov920extQqualMinEUTRA& EUTRAFrequencyAndPriorityInfov920extQqualMinEUTRA) { *static_cast<EUTRAFrequencyAndPriorityInfov920extQqualMinEUTRA*>(items[0]) = EUTRAFrequencyAndPriorityInfov920extQqualMinEUTRA; }
};

typedef SequenceOf<EUTRAFrequencyAndPriorityInfo, CONSTRAINED, 1, maxNumEUTRAFreqs> EUTRAFrequencyAndPriorityInfoList;

typedef SequenceOf<EUTRAFrequencyAndPriorityInfov920ext, CONSTRAINED, 1, maxNumEUTRAFreqs> EUTRAFrequencyAndPriorityInfoListv920ext;

typedef Null EUTRAFrequencyRemovalRemoveAllFrequencies;

class EUTRAFrequencyRemoval : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	EUTRAFrequencyRemoval(): Choice(&theInfo) {}
};

class EUTRAFrequencyList : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EUTRAFrequencyList(): Sequence(&theInfo) {}

	void setEutraFrequencyRemoval(const EUTRAFrequencyRemoval& EutraFrequencyRemoval) { *static_cast<EUTRAFrequencyRemoval*>(items[0]) = EutraFrequencyRemoval; }
};

class EUTRAFrequencyListr9 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EUTRAFrequencyListr9(): Sequence(&theInfo) {}

	void setEutraFrequencyRemoval(const EUTRAFrequencyRemoval& EutraFrequencyRemoval) { *static_cast<EUTRAFrequencyRemoval*>(items[0]) = EutraFrequencyRemoval; }
};

class EUTRASIAcquisition : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EUTRASIAcquisition(): Sequence(&theInfo) {}

	void setEarfcn(const EARFCN& Earfcn) { *static_cast<EARFCN*>(items[0]) = Earfcn; }
};

typedef Integer<CONSTRAINED, 0, 503> EUTRAPhysicalCellIdentity;

class EUTRAMeasuredCells : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EUTRAMeasuredCells(): Sequence(&theInfo) {}

	void setPhysicalCellIdentity(const EUTRAPhysicalCellIdentity& PhysicalCellIdentity) { *static_cast<EUTRAPhysicalCellIdentity*>(items[0]) = PhysicalCellIdentity; }
};

class EutraMeasuredResult : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EutraMeasuredResult(): Sequence(&theInfo) {}

	void setEarfcn(const EARFCN& Earfcn) { *static_cast<EARFCN*>(items[0]) = Earfcn; }
};

typedef SequenceOf<EutraMeasuredResult, CONSTRAINED, 1, maxReportedEUTRAFreqs> EutraMeasuredResultList;

class EUTRAMeasuredResults : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EUTRAMeasuredResults(): Sequence(&theInfo) {}

	void setEutraMeasuredResultList(const EutraMeasuredResultList& EutraMeasuredResultList) { *static_cast<EutraMeasuredResultList*>(items[0]) = EutraMeasuredResultList; }
};

class EUTRASIacquisitionResultsCgiInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EUTRASIacquisitionResultsCgiInfo(): Sequence(&theInfo) {}

	void setPlmnIdentity(const PLMNIdentity& PlmnIdentity) { *static_cast<PLMNIdentity*>(items[0]) = PlmnIdentity; }
};

class EUTRASIacquisitionResults : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EUTRASIacquisitionResults(): Sequence(&theInfo) {}

	void setEUTRASIacquisitionResultsCgiInfo(const EUTRASIacquisitionResultsCgiInfo& EUTRASIacquisitionResultsCgiInfo) { *static_cast<EUTRASIacquisitionResultsCgiInfo*>(items[0]) = EUTRASIacquisitionResultsCgiInfo; }
};

class EUTRAMeasuredCellsv920ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EUTRAMeasuredCellsv920ext(): Sequence(&theInfo) {}

	void setEutraSIacquisitionResults(const EUTRASIacquisitionResults& EutraSIacquisitionResults) { *static_cast<EUTRASIacquisitionResults*>(items[0]) = EutraSIacquisitionResults; }
};

typedef SequenceOf<EUTRAMeasuredCellsv920ext, CONSTRAINED, 1, maxReportedEUTRACellPerFreq> EutraMeasuredResultv920extMeasuredEUTRACellsv920ext;

class EutraMeasuredResultv920ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EutraMeasuredResultv920ext(): Sequence(&theInfo) {}

	void setEutraMeasuredResultv920extMeasuredEUTRACellsv920ext(const EutraMeasuredResultv920extMeasuredEUTRACellsv920ext& EutraMeasuredResultv920extMeasuredEUTRACellsv920ext) { *static_cast<EutraMeasuredResultv920extMeasuredEUTRACellsv920ext*>(items[0]) = EutraMeasuredResultv920extMeasuredEUTRACellsv920ext; }
};

typedef SequenceOf<EutraMeasuredResultv920ext, CONSTRAINED, 1, maxReportedEUTRAFreqs> EutraMeasuredResultListv920ext;

class EUTRAMeasuredResultsv920ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EUTRAMeasuredResultsv920ext(): Sequence(&theInfo) {}

	void setEutraMeasuredResultListv920ext(const EutraMeasuredResultListv920ext& EutraMeasuredResultListv920ext) { *static_cast<EutraMeasuredResultListv920ext*>(items[0]) = EutraMeasuredResultListv920ext; }
};

class EUTRAFrequencyInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EUTRAFrequencyInfo(): Sequence(&theInfo) {}

	void setEarfcn(const EARFCN& Earfcn) { *static_cast<EARFCN*>(items[0]) = Earfcn; }
};

typedef SequenceOf<EUTRAFrequencyInfo, CONSTRAINED, 1, maxNumEUTRAFreqs> EUTRAFrequencyInfoList;

enum EUTRAMeasurementBandwidthValues {
	Mbw6,_EUTRAMeasurementBandwidth = 0,
};
typedef Enumerated<CONSTRAINED, 0> EUTRAMeasurementBandwidth;

class Event1ar4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Event1ar4(): Sequence(&theInfo) {}

	void setTriggeringCondition(const TriggeringCondition2& TriggeringCondition) { *static_cast<TriggeringCondition2*>(items[0]) = TriggeringCondition; }
};

class Event1aOnSecUlFreqr9 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Event1aOnSecUlFreqr9(): Sequence(&theInfo) {}

	void setTriggeringCondition(const TriggeringCondition2& TriggeringCondition) { *static_cast<TriggeringCondition2*>(items[0]) = TriggeringCondition; }
};

enum TriggeringCondition1Values {
	ActiveSetCellsOnly,_TriggeringCondition1 = 0,
};
typedef Enumerated<CONSTRAINED, 0> TriggeringCondition1;

class Event1b : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Event1b(): Sequence(&theInfo) {}

	void setTriggeringCondition(const TriggeringCondition1& TriggeringCondition) { *static_cast<TriggeringCondition1*>(items[0]) = TriggeringCondition; }
};

class Event1br4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Event1br4(): Sequence(&theInfo) {}

	void setTriggeringCondition(const TriggeringCondition1& TriggeringCondition) { *static_cast<TriggeringCondition1*>(items[0]) = TriggeringCondition; }
};

class Event1br7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Event1br7(): Sequence(&theInfo) {}

	void setTriggeringCondition(const TriggeringCondition1& TriggeringCondition) { *static_cast<TriggeringCondition1*>(items[0]) = TriggeringCondition; }
};

class Event1bOnSecUlFreqr9 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Event1bOnSecUlFreqr9(): Sequence(&theInfo) {}

	void setTriggeringCondition(const TriggeringCondition1& TriggeringCondition) { *static_cast<TriggeringCondition1*>(items[0]) = TriggeringCondition; }
};

class Event1bLCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Event1bLCRr4(): Sequence(&theInfo) {}

	void setTriggeringCondition(const TriggeringCondition1& TriggeringCondition) { *static_cast<TriggeringCondition1*>(items[0]) = TriggeringCondition; }
};

enum ReplacementActivationThresholdValues {
	NotApplicable,_ReplacementActivationThreshold = 0,
};
typedef Enumerated<CONSTRAINED, 0> ReplacementActivationThreshold;

class Event1c : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Event1c(): Sequence(&theInfo) {}

	void setReplacementActivationThreshold(const ReplacementActivationThreshold& ReplacementActivationThreshold) { *static_cast<ReplacementActivationThreshold*>(items[0]) = ReplacementActivationThreshold; }
};

class Event1d : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Event1d(): Sequence(&theInfo) {}

	void setTriggeringCondition(const TriggeringCondition2& TriggeringCondition) { *static_cast<TriggeringCondition2*>(items[0]) = TriggeringCondition; }
};

class Event1e : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Event1e(): Sequence(&theInfo) {}

	void setTriggeringCondition(const TriggeringCondition2& TriggeringCondition) { *static_cast<TriggeringCondition2*>(items[0]) = TriggeringCondition; }
};

class Event1er6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Event1er6(): Sequence(&theInfo) {}

	void setTriggeringCondition(const TriggeringCondition2& TriggeringCondition) { *static_cast<TriggeringCondition2*>(items[0]) = TriggeringCondition; }
};

class Event1f : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Event1f(): Sequence(&theInfo) {}

	void setTriggeringCondition(const TriggeringCondition1& TriggeringCondition) { *static_cast<TriggeringCondition1*>(items[0]) = TriggeringCondition; }
};

class Event1fr6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Event1fr6(): Sequence(&theInfo) {}

	void setTriggeringCondition(const TriggeringCondition1& TriggeringCondition) { *static_cast<TriggeringCondition1*>(items[0]) = TriggeringCondition; }
};

class Event1jr6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Event1jr6(): Sequence(&theInfo) {}

	void setReplacementActivationThreshold(const ReplacementActivationThreshold& ReplacementActivationThreshold) { *static_cast<ReplacementActivationThreshold*>(items[0]) = ReplacementActivationThreshold; }
};

typedef Integer<CONSTRAINED, -115, 0> Threshold;

class Event2a : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Event2a(): Sequence(&theInfo) {}

	void setDummy(const Threshold& Dummy) { *static_cast<Threshold*>(items[0]) = Dummy; }
};

typedef Integer<CONSTRAINED, 0, 20> W;

class Event2ar6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Event2ar6(): Sequence(&theInfo) {}

	void setUsedFreqW(const W& UsedFreqW) { *static_cast<W*>(items[0]) = UsedFreqW; }
};

class Event2b : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Event2b(): Sequence(&theInfo) {}

	void setUsedFreqThreshold(const Threshold& UsedFreqThreshold) { *static_cast<Threshold*>(items[0]) = UsedFreqThreshold; }
};

typedef Integer<CONSTRAINED, -120, 0> Thresholdr6;

class Event2br6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Event2br6(): Sequence(&theInfo) {}

	void setUsedFreqThreshold(const Thresholdr6& UsedFreqThreshold) { *static_cast<Thresholdr6*>(items[0]) = UsedFreqThreshold; }
};

typedef Integer<CONSTRAINED, 0, 29> HysteresisInterFreq;

class Event2c : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Event2c(): Sequence(&theInfo) {}

	void setHysteresis(const HysteresisInterFreq& Hysteresis) { *static_cast<HysteresisInterFreq*>(items[0]) = Hysteresis; }
};

class Event2cr6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Event2cr6(): Sequence(&theInfo) {}

	void setHysteresis(const HysteresisInterFreq& Hysteresis) { *static_cast<HysteresisInterFreq*>(items[0]) = Hysteresis; }
};

class Event2d : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Event2d(): Sequence(&theInfo) {}

	void setUsedFreqThreshold(const Threshold& UsedFreqThreshold) { *static_cast<Threshold*>(items[0]) = UsedFreqThreshold; }
};

class Event2dr6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Event2dr6(): Sequence(&theInfo) {}

	void setUsedFreqThreshold(const Thresholdr6& UsedFreqThreshold) { *static_cast<Thresholdr6*>(items[0]) = UsedFreqThreshold; }
};

class Event2e : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Event2e(): Sequence(&theInfo) {}

	void setHysteresis(const HysteresisInterFreq& Hysteresis) { *static_cast<HysteresisInterFreq*>(items[0]) = Hysteresis; }
};

class Event2er6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Event2er6(): Sequence(&theInfo) {}

	void setHysteresis(const HysteresisInterFreq& Hysteresis) { *static_cast<HysteresisInterFreq*>(items[0]) = Hysteresis; }
};

class Event2f : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Event2f(): Sequence(&theInfo) {}

	void setUsedFreqThreshold(const Threshold& UsedFreqThreshold) { *static_cast<Threshold*>(items[0]) = UsedFreqThreshold; }
};

class Event2fr6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Event2fr6(): Sequence(&theInfo) {}

	void setUsedFreqThreshold(const Thresholdr6& UsedFreqThreshold) { *static_cast<Thresholdr6*>(items[0]) = UsedFreqThreshold; }
};

class Event3a : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Event3a(): Sequence(&theInfo) {}

	void setThresholdOwnSystem(const Threshold& ThresholdOwnSystem) { *static_cast<Threshold*>(items[0]) = ThresholdOwnSystem; }
};

class Event3b : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Event3b(): Sequence(&theInfo) {}

	void setThresholdOtherSystem(const Threshold& ThresholdOtherSystem) { *static_cast<Threshold*>(items[0]) = ThresholdOtherSystem; }
};

class Event3c : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Event3c(): Sequence(&theInfo) {}

	void setThresholdOtherSystem(const Threshold& ThresholdOtherSystem) { *static_cast<Threshold*>(items[0]) = ThresholdOtherSystem; }
};

typedef Integer<CONSTRAINED, 0, 15> Hysteresis;

class Event3d : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Event3d(): Sequence(&theInfo) {}

	void setHysteresis(const Hysteresis& Hysteresis) { *static_cast<Hysteresis*>(items[0]) = Hysteresis; }
};

enum EventIDInterFreqValues {
	E2a,_EventIDInterFreq = 0,
};
typedef Enumerated<CONSTRAINED, 0> EventIDInterFreq;

enum EventIDIntraFreqValues {
	E1a,_EventIDIntraFreq = 0,
};
typedef Enumerated<CONSTRAINED, 0> EventIDIntraFreq;

class IntraFreqEventResults : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IntraFreqEventResults(): Sequence(&theInfo) {}

	void setEventID(const EventIDIntraFreq& EventID) { *static_cast<EventIDIntraFreq*>(items[0]) = EventID; }
};

class EventResults : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	EventResults(): Choice(&theInfo) {}
};

typedef Null UEPositioningPositionEstimateInfov770extReferenceTimeOptionsEarlierthanr7;

class UEPositioningPositionEstimateInfov770extReferenceTimeOptions : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	UEPositioningPositionEstimateInfov770extReferenceTimeOptions(): Choice(&theInfo) {}
};

class UEPositioningPositionEstimateInfov770ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningPositionEstimateInfov770ext(): Sequence(&theInfo) {}

	void setUEPositioningPositionEstimateInfov770extReferenceTimeOptions(const UEPositioningPositionEstimateInfov770extReferenceTimeOptions& UEPositioningPositionEstimateInfov770extReferenceTimeOptions) { *static_cast<UEPositioningPositionEstimateInfov770extReferenceTimeOptions*>(items[0]) = UEPositioningPositionEstimateInfov770extReferenceTimeOptions; }
};

class UEPositioningMeasurementEventResultsv770ext : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	UEPositioningMeasurementEventResultsv770ext(): Choice(&theInfo) {}
};

class EventResultsv770ext : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	EventResultsv770ext(): Choice(&theInfo) {}
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

	void setGanssGenericMeasurementInfo(const GANSSGenericMeasurementInfov860ext& GanssGenericMeasurementInfo) { *static_cast<GANSSGenericMeasurementInfov860ext*>(items[0]) = GanssGenericMeasurementInfo; }
};

class UEPositioningMeasurementEventResultsv860ext : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	UEPositioningMeasurementEventResultsv860ext(): Choice(&theInfo) {}
};

class EventResultsv860ext : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	EventResultsv860ext(): Choice(&theInfo) {}
};

class IntraFreqEventResultsOnSecUlFreq : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IntraFreqEventResultsOnSecUlFreq(): Sequence(&theInfo) {}

	void setEventID(const EventIDIntraFreq& EventID) { *static_cast<EventIDIntraFreq*>(items[0]) = EventID; }
};

class EventResultsOnSecUlFreq : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EventResultsOnSecUlFreq(): Sequence(&theInfo) {}

	void setIntraFreqEventResults(const IntraFreqEventResultsOnSecUlFreq& IntraFreqEventResults) { *static_cast<IntraFreqEventResultsOnSecUlFreq*>(items[0]) = IntraFreqEventResults; }
};

typedef Integer<EXTCONSTRAINED, -42,  21> ExtraDopplerDopplerFirstOrder;

class ExtraDoppler : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ExtraDoppler(): Sequence(&theInfo) {}

	void setExtraDopplerDopplerFirstOrder(const ExtraDopplerDopplerFirstOrder& ExtraDopplerDopplerFirstOrder) { *static_cast<ExtraDopplerDopplerFirstOrder*>(items[0]) = ExtraDopplerDopplerFirstOrder; }
};

typedef Integer<EXTCONSTRAINED, -42, 21> ExtraDopplerInfoDoppler1stOrder;

class ExtraDopplerInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ExtraDopplerInfo(): Sequence(&theInfo) {}

	void setExtraDopplerInfoDoppler1stOrder(const ExtraDopplerInfoDoppler1stOrder& ExtraDopplerInfoDoppler1stOrder) { *static_cast<ExtraDopplerInfoDoppler1stOrder*>(items[0]) = ExtraDopplerInfoDoppler1stOrder; }
};

typedef Integer<EXTCONSTRAINED, SIZE (1, maxOtherRAT> FACHMeasurementOccasionInfoFACHmeasoccasioncoeff;

class FACHMeasurementOccasionInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	FACHMeasurementOccasionInfo(): Sequence(&theInfo) {}

	void setFACHMeasurementOccasionInfoFACHmeasoccasioncoeff(const FACHMeasurementOccasionInfoFACHmeasoccasioncoeff& FACHMeasurementOccasionInfoFACHmeasoccasioncoeff) { *static_cast<FACHMeasurementOccasionInfoFACHmeasoccasioncoeff*>(items[0]) = FACHMeasurementOccasionInfoFACHmeasoccasioncoeff; }
};

typedef Boolean FACHMeasurementOccasionInfoLCRr4extInterfreqTDD128measind;

class FACHMeasurementOccasionInfoLCRr4ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	FACHMeasurementOccasionInfoLCRr4ext(): Sequence(&theInfo) {}

	void setFACHMeasurementOccasionInfoLCRr4extInterfreqTDD128measind(const FACHMeasurementOccasionInfoLCRr4extInterfreqTDD128measind& FACHMeasurementOccasionInfoLCRr4extInterfreqTDD128measind) { *static_cast<FACHMeasurementOccasionInfoLCRr4extInterfreqTDD128measind*>(items[0]) = FACHMeasurementOccasionInfoLCRr4extInterfreqTDD128measind; }
};

enum FilterCoefficientValues {
	Fc0,_FilterCoefficient = 0,
};
typedef Enumerated<CONSTRAINED, 0> FilterCoefficient;

typedef Integer<CONSTRAINED, 0, 15> FineSFNSFN;

class ForbiddenAffectCell : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	ForbiddenAffectCell(): Choice(&theInfo) {}
};

class ForbiddenAffectCellr4 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	ForbiddenAffectCellr4(): Choice(&theInfo) {}
};

class ForbiddenAffectCellLCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ForbiddenAffectCellLCRr4(): Sequence(&theInfo) {}

	void setTdd(const PrimaryCCPCHInfoLCRr4& Tdd) { *static_cast<PrimaryCCPCHInfoLCRr4*>(items[0]) = Tdd; }
};

typedef SequenceOf<ForbiddenAffectCell, CONSTRAINED, 1, maxCellMeas> ForbiddenAffectCellList;

typedef SequenceOf<ForbiddenAffectCellr4, CONSTRAINED, 1, maxCellMeas> ForbiddenAffectCellListr4;

typedef SequenceOf<ForbiddenAffectCellLCRr4, CONSTRAINED, 1, maxCellMeas> ForbiddenAffectCellListLCRr4;

class ForbiddenAffectCellOnSecULFreq : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ForbiddenAffectCellOnSecULFreq(): Sequence(&theInfo) {}

	void setPrimaryCPICH(const PrimaryCPICHInfo& PrimaryCPICH) { *static_cast<PrimaryCPICHInfo*>(items[0]) = PrimaryCPICH; }
};

typedef SequenceOf<ForbiddenAffectCellOnSecULFreq, CONSTRAINED, 1,  maxCellMeasOnSecULFreq> ForbiddenAffectCellListOnSecULFreq;

enum FreqQualityEstimateQuantityFDDValues {
	CpichEcN0,_FreqQualityEstimateQuantityFDD = 0,
};
typedef Enumerated<CONSTRAINED, 0> FreqQualityEstimateQuantityFDD;

enum FreqQualityEstimateQuantityTDDValues {
	primaryCCPCH_RSCP_FreqQualityEstimateQuantityTDD = 0,
};
typedef Enumerated<CONSTRAINED, 0> FreqQualityEstimateQuantityTDD;

typedef Integer<EXTCONSTRAINED, 0, 86399> GanssDataBitsGanssTod;

class GanssDataBits : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	GanssDataBits(): Sequence(&theInfo) {}

	void setGanssDataBitsGanssTod(const GanssDataBitsGanssTod& GanssDataBitsGanssTod) { *static_cast<GanssDataBitsGanssTod*>(items[0]) = GanssDataBitsGanssTod; }
};

typedef BitString<EXTCONSTRAINED, 56, 56> GANSSDecipheringKeysCurrentDecipheringKey;

class GANSSDecipheringKeys : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	GANSSDecipheringKeys(): Sequence(&theInfo) {}

	void setGANSSDecipheringKeysCurrentDecipheringKey(const GANSSDecipheringKeysCurrentDecipheringKey& GANSSDecipheringKeysCurrentDecipheringKey) { *static_cast<GANSSDecipheringKeysCurrentDecipheringKey*>(items[0]) = GANSSDecipheringKeysCurrentDecipheringKey; }
};

typedef Integer<EXTCONSTRAINED, 0, 7> GANSSGenericDataGanssId;

class GANSSGenericData : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	GANSSGenericData(): Sequence(&theInfo) {}

	void setGANSSGenericDataGanssId(const GANSSGenericDataGanssId& GANSSGenericDataGanssId) { *static_cast<GANSSGenericDataGanssId*>(items[0]) = GANSSGenericDataGanssId; }
};

enum UEPositioningGANSSSBASIDValues {
	Waas,_UEPositioningGANSSSBASID = 0,
};
typedef Enumerated<CONSTRAINED, 0> UEPositioningGANSSSBASID;

class GANSSGenericDatav860ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	GANSSGenericDatav860ext(): Sequence(&theInfo) {}

	void setUePositiningGANSSsbasID(const UEPositioningGANSSSBASID& UePositiningGANSSsbasID) { *static_cast<UEPositioningGANSSSBASID*>(items[0]) = UePositiningGANSSsbasID; }
};

typedef Integer<EXTCONSTRAINED, 0, 7> GANSSGenericDatar8GanssId;

class GANSSGenericDatar8 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	GANSSGenericDatar8(): Sequence(&theInfo) {}

	void setGANSSGenericDatar8GanssId(const GANSSGenericDatar8GanssId& GANSSGenericDatar8GanssId) { *static_cast<GANSSGenericDatar8GanssId*>(items[0]) = GANSSGenericDatar8GanssId; }
};

typedef Integer<EXTCONSTRAINED, 0, 7> GANSSGenericDatar9GanssId;

class GANSSGenericDatar9 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	GANSSGenericDatar9(): Sequence(&theInfo) {}

	void setGANSSGenericDatar9GanssId(const GANSSGenericDatar9GanssId& GANSSGenericDatar9GanssId) { *static_cast<GANSSGenericDatar9GanssId*>(items[0]) = GANSSGenericDatar9GanssId; }
};

class UEPositioningDGANSSCorrectionsv920ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningDGANSSCorrectionsv920ext(): Sequence(&theInfo) {}

	void setDganssInfoList(const DGANSSInfoListv920ext& DganssInfoList) { *static_cast<DGANSSInfoListv920ext*>(items[0]) = DganssInfoList; }
};

class GANSSGenericDatav920ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	GANSSGenericDatav920ext(): Sequence(&theInfo) {}

	void setUePositioningDGANSSCorrections(const UEPositioningDGANSSCorrectionsv920ext& UePositioningDGANSSCorrections) { *static_cast<UEPositioningDGANSSCorrectionsv920ext*>(items[0]) = UePositioningDGANSSCorrections; }
};

typedef SequenceOf<GANSSGenericData, CONSTRAINED, 1, maxGANSS> GANSSGenericDataList;

typedef SequenceOf<GANSSGenericDatav860ext, CONSTRAINED, 1, maxGANSS> GANSSGenericDataListv860ext;

typedef SequenceOf<GANSSGenericDatar8, CONSTRAINED, 1, maxGANSS> GANSSGenericDataListr8;

typedef SequenceOf<GANSSGenericDatar9, CONSTRAINED, 1, maxGANSS> GANSSGenericDataListr9;

typedef SequenceOf<GANSSGenericDatav920ext, CONSTRAINED, 1, maxGANSS> GANSSGenericDataListv920ext;

class GANSSGenericMeasurementInfo : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	GANSSGenericMeasurementInfo(): Sequence(&theInfo) {}

};

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

typedef Integer<EXTCONSTRAINED, 0, 4095> GanssNavigationModelAdditionalDataGanssWeek;

class GanssNavigationModelAdditionalData : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	GanssNavigationModelAdditionalData(): Sequence(&theInfo) {}

	void setGanssNavigationModelAdditionalDataGanssWeek(const GanssNavigationModelAdditionalDataGanssWeek& GanssNavigationModelAdditionalDataGanssWeek) { *static_cast<GanssNavigationModelAdditionalDataGanssWeek*>(items[0]) = GanssNavigationModelAdditionalDataGanssWeek; }
};

typedef Integer<EXTCONSTRAINED, 0, 3599999> GANSSReferenceTimeOnlyGANSStod;

class GANSSReferenceTimeOnly : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	GANSSReferenceTimeOnly(): Sequence(&theInfo) {}

	void setGANSSReferenceTimeOnlyGANSStod(const GANSSReferenceTimeOnlyGANSStod& GANSSReferenceTimeOnlyGANSStod) { *static_cast<GANSSReferenceTimeOnlyGANSStod*>(items[0]) = GANSSReferenceTimeOnlyGANSStod; }
};

typedef Integer<EXTCONSTRAINED, SIZE (8, SIZE (8> GanssReqGenericDataGanssId;

class GanssReqGenericData : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	GanssReqGenericData(): Sequence(&theInfo) {}

	void setGanssReqGenericDataGanssId(const GanssReqGenericDataGanssId& GanssReqGenericDataGanssId) { *static_cast<GanssReqGenericDataGanssId*>(items[0]) = GanssReqGenericDataGanssId; }
};

class GanssReqGenericDatav860ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	GanssReqGenericDatav860ext(): Sequence(&theInfo) {}

	void setSbasId(const UEPositioningGANSSSBASID& SbasId) { *static_cast<UEPositioningGANSSSBASID*>(items[0]) = SbasId; }
};

typedef SequenceOf<GanssReqGenericData, CONSTRAINED, 1, maxGANSS> GanssRequestedGenericAssistanceDataList;

typedef SequenceOf<GanssReqGenericDatav860ext, CONSTRAINED, 1, maxGANSS> GanssRequestedGenericAssistanceDataListv860ext;

typedef Integer<EXTCONSTRAINED, 0, 1023> GANSSSatelliteInformationGanssSatId;

class GANSSSatelliteInformation : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	GANSSSatelliteInformation(): Sequence(&theInfo) {}

	void setGANSSSatelliteInformationGanssSatId(const GANSSSatelliteInformationGanssSatId& GANSSSatelliteInformationGanssSatId) { *static_cast<GANSSSatelliteInformationGanssSatId*>(items[0]) = GANSSSatelliteInformationGanssSatId; }
};

typedef SequenceOf<GANSSSatelliteInformation, CONSTRAINED, 1, maxGANSSSat> GANSSSatelliteInformationList;

typedef Integer<EXTCONSTRAINED, -8388608, 8388607> UEPositioningGANSSTimeModelGanssta1;

class UEPositioningGANSSTimeModel : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningGANSSTimeModel(): Sequence(&theInfo) {}

	void setUEPositioningGANSSTimeModelGanssta1(const UEPositioningGANSSTimeModelGanssta1& UEPositioningGANSSTimeModelGanssta1) { *static_cast<UEPositioningGANSSTimeModelGanssta1*>(items[0]) = UEPositioningGANSSTimeModelGanssta1; }
};

typedef SequenceOf<UEPositioningGANSSTimeModel, CONSTRAINED, 1, maxGANSS_1> GANSSTimeModelsList;

typedef Integer<EXTCONSTRAINED, SIZE (11, SIZE (11> GANSSSATInfoAlmanacKpSvId;

class GANSSSATInfoAlmanacKp : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	GANSSSATInfoAlmanacKp(): Sequence(&theInfo) {}

	void setGANSSSATInfoAlmanacKpSvId(const GANSSSATInfoAlmanacKpSvId& GANSSSATInfoAlmanacKpSvId) { *static_cast<GANSSSATInfoAlmanacKpSvId*>(items[0]) = GANSSSATInfoAlmanacKpSvId; }
};

typedef Integer<EXTCONSTRAINED, SIZE (11, SIZE (11> GANSSSATInfoAlmanacMIDIkpSvID;

class GANSSSATInfoAlmanacMIDIkp : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	GANSSSATInfoAlmanacMIDIkp(): Sequence(&theInfo) {}

	void setGANSSSATInfoAlmanacMIDIkpSvID(const GANSSSATInfoAlmanacMIDIkpSvID& GANSSSATInfoAlmanacMIDIkpSvID) { *static_cast<GANSSSATInfoAlmanacMIDIkpSvID*>(items[0]) = GANSSSATInfoAlmanacMIDIkpSvID; }
};

typedef Integer<EXTCONSTRAINED, SIZE (16, SIZE (16> GANSSSATInfoAlmanacNAVkpSvID;

class GANSSSATInfoAlmanacNAVkp : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	GANSSSATInfoAlmanacNAVkp(): Sequence(&theInfo) {}

	void setGANSSSATInfoAlmanacNAVkpSvID(const GANSSSATInfoAlmanacNAVkpSvID& GANSSSATInfoAlmanacNAVkpSvID) { *static_cast<GANSSSATInfoAlmanacNAVkpSvID*>(items[0]) = GANSSSATInfoAlmanacNAVkpSvID; }
};

typedef Integer<EXTCONSTRAINED, SIZE (8, SIZE (8> GANSSSATInfoAlmanacREDkpSvID;

class GANSSSATInfoAlmanacREDkp : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	GANSSSATInfoAlmanacREDkp(): Sequence(&theInfo) {}

	void setGANSSSATInfoAlmanacREDkpSvID(const GANSSSATInfoAlmanacREDkpSvID& GANSSSATInfoAlmanacREDkpSvID) { *static_cast<GANSSSATInfoAlmanacREDkpSvID*>(items[0]) = GANSSSATInfoAlmanacREDkpSvID; }
};

typedef SequenceOf<GANSSSATInfoAlmanacKp, CONSTRAINED, 1, maxGANSSSat> GANSSSATInfoAlmanacKpList;

typedef SequenceOf<GANSSSATInfoAlmanacMIDIkp, CONSTRAINED, 1, maxGANSSSat> GANSSSATInfoAlmanacMIDIkpList;

typedef SequenceOf<GANSSSATInfoAlmanacNAVkp, CONSTRAINED, 1, maxGANSSSat> GANSSSATInfoAlmanacNAVkpList;

typedef SequenceOf<GANSSSATInfoAlmanacREDkp, CONSTRAINED, 1, maxGANSSSat> GANSSSATInfoAlmanacREDkpList;

typedef Integer<EXTCONSTRAINED, SIZE (6, SIZE (6> GanssSatInfoAddNavSatId;

class GanssSatInfoAddNav : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	GanssSatInfoAddNav(): Sequence(&theInfo) {}

	void setGanssSatInfoAddNavSatId(const GanssSatInfoAddNavSatId& GanssSatInfoAddNavSatId) { *static_cast<GanssSatInfoAddNavSatId*>(items[0]) = GanssSatInfoAddNavSatId; }
};

typedef Integer<EXTCONSTRAINED, SIZE (5, SIZE (5> GanssSatInfoNavSatId;

class GanssSatInfoNav : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	GanssSatInfoNav(): Sequence(&theInfo) {}

	void setGanssSatInfoNavSatId(const GanssSatInfoNavSatId& GanssSatInfoNavSatId) { *static_cast<GanssSatInfoNavSatId*>(items[0]) = GanssSatInfoNavSatId; }
};

typedef SequenceOf<GanssSatInfoAddNav, CONSTRAINED, 1, maxGANSSSat> GanssSatInfoAddNavList;

typedef SequenceOf<GanssSatInfoNav, CONSTRAINED, 1, maxGANSSSat> GanssSatInfoNavList;

enum GANSSStatusHealthValues {
	Udrescale1dot0,_GANSSStatusHealth = 0,
};
typedef Enumerated<CONSTRAINED, 0> GANSSStatusHealth;

typedef Boolean GANSSStormFlagStormflagone;

class GANSSStormFlag : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	GANSSStormFlag(): Sequence(&theInfo) {}

	void setGANSSStormFlagStormflagone(const GANSSStormFlagStormflagone& GANSSStormFlagStormflagone) { *static_cast<GANSSStormFlagStormflagone*>(items[0]) = GANSSStormFlagStormflagone; }
};

typedef BitString<EXTCONSTRAINED, 22, 22> GLONASSclockModelGloTau;

class GLONASSclockModel : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	GLONASSclockModel(): Sequence(&theInfo) {}

	void setGLONASSclockModelGloTau(const GLONASSclockModelGloTau& GLONASSclockModelGloTau) { *static_cast<GLONASSclockModelGloTau*>(items[0]) = GLONASSclockModelGloTau; }
};

typedef Integer<EXTCONSTRAINED, 0, 63> GPSMeasurementParamSatelliteID;

class GPSMeasurementParam : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	GPSMeasurementParam(): Sequence(&theInfo) {}

	void setGPSMeasurementParamSatelliteID(const GPSMeasurementParamSatelliteID& GPSMeasurementParamSatelliteID) { *static_cast<GPSMeasurementParamSatelliteID*>(items[0]) = GPSMeasurementParamSatelliteID; }
};

typedef SequenceOf<GPSMeasurementParam, CONSTRAINED, 1, maxSat> GPSMeasurementParamList;

typedef BitString<CONSTRAINED, 6, 6> GSMCarrierRSSI;

class GSMCellGroup : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	GSMCellGroup(): Sequence(&theInfo) {}

	void setStartingARFCN(const BCCHARFCN& StartingARFCN) { *static_cast<BCCHARFCN*>(items[0]) = StartingARFCN; }
};

class GSMMeasuredResults : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	GSMMeasuredResults(): Sequence(&theInfo) {}

	void setGsmCarrierRSSI(const GSMCarrierRSSI& GsmCarrierRSSI) { *static_cast<GSMCarrierRSSI*>(items[0]) = GsmCarrierRSSI; }
};

typedef SequenceOf<GSMMeasuredResults, CONSTRAINED, 1, maxReportedGSMCells> GSMMeasuredResultsList;

typedef Integer<CONSTRAINED, 0, 604799999> GPSTOW1msec;

typedef Integer<CONSTRAINED, 0, 604799> GPSTOW1sec;

class GPSTOWAssist : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	GPSTOWAssist(): Sequence(&theInfo) {}

	void setSatID(const SatID& SatID) { *static_cast<SatID*>(items[0]) = SatID; }
};

typedef SequenceOf<GPSTOWAssist, CONSTRAINED, 1, maxSat> GPSTOWAssistList;

typedef Integer<CONSTRAINED, 0, maxCellMeas_1> GSMCellIDGsmCellID;

class GSMCellID : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	GSMCellID(): Sequence(&theInfo) {}

	void setGSMCellIDGsmCellID(const GSMCellIDGsmCellID& GSMCellIDGsmCellID) { *static_cast<GSMCellIDGsmCellID*>(items[0]) = GSMCellIDGsmCellID; }
};

class GSMPriorityInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	GSMPriorityInfo(): Sequence(&theInfo) {}

	void setGsmCellGroup(const GSMCellGroup& GsmCellGroup) { *static_cast<GSMCellGroup*>(items[0]) = GsmCellGroup; }
};

typedef SequenceOf<GSMPriorityInfo, CONSTRAINED, 1, maxNumGSMCellGroup> GSMPriorityInfoList;

typedef SequenceOf<GSMCellID, CONSTRAINED, 1, maxCellMeas> GSMCellGroupingList;

typedef Null PenaltyTimeRSCPNotUsed;

class PenaltyTimeRSCP : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	PenaltyTimeRSCP(): Choice(&theInfo) {}
};

class HCSCellReselectInformationRSCP : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HCSCellReselectInformationRSCP(): Sequence(&theInfo) {}

	void setPenaltyTime(const PenaltyTimeRSCP& PenaltyTime) { *static_cast<PenaltyTimeRSCP*>(items[0]) = PenaltyTime; }
};

typedef Null PenaltyTimeECN0NotUsed;

class PenaltyTimeECN0 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	PenaltyTimeECN0(): Choice(&theInfo) {}
};

class HCSCellReselectInformationECN0 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HCSCellReselectInformationECN0(): Sequence(&theInfo) {}

	void setPenaltyTime(const PenaltyTimeECN0& PenaltyTime) { *static_cast<PenaltyTimeECN0*>(items[0]) = PenaltyTime; }
};

typedef Integer<CONSTRAINED, 0, 7> HCSPRIO;

class HCSNeighbouringCellInformationRSCP : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HCSNeighbouringCellInformationRSCP(): Sequence(&theInfo) {}

	void setHcsPRIO(const HCSPRIO& HcsPRIO) { *static_cast<HCSPRIO*>(items[0]) = HcsPRIO; }
};

class HCSNeighbouringCellInformationECN0 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HCSNeighbouringCellInformationECN0(): Sequence(&theInfo) {}

	void setHcsPRIO(const HCSPRIO& HcsPRIO) { *static_cast<HCSPRIO*>(items[0]) = HcsPRIO; }
};

class HCSServingCellInformation : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HCSServingCellInformation(): Sequence(&theInfo) {}

	void setHcsPRIO(const HCSPRIO& HcsPRIO) { *static_cast<HCSPRIO*>(items[0]) = HcsPRIO; }
};

typedef Integer<EXTCONSTRAINED, 0, 359> HorizontalVelocityBearing;

class HorizontalVelocity : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HorizontalVelocity(): Sequence(&theInfo) {}

	void setHorizontalVelocityBearing(const HorizontalVelocityBearing& HorizontalVelocityBearing) { *static_cast<HorizontalVelocityBearing*>(items[0]) = HorizontalVelocityBearing; }
};

enum HorizontalWithVerticalVelocityverticalSpeedDirectionValues {
	Upward,_HorizontalWithVerticalVelocityverticalSpeedDirection = 0,
};
typedef Enumerated<CONSTRAINED, 0> HorizontalWithVerticalVelocityverticalSpeedDirection;

class HorizontalWithVerticalVelocity : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HorizontalWithVerticalVelocity(): Sequence(&theInfo) {}

	void setHorizontalWithVerticalVelocityverticalSpeedDirection(const HorizontalWithVerticalVelocityverticalSpeedDirection& HorizontalWithVerticalVelocityverticalSpeedDirection) { *static_cast<HorizontalWithVerticalVelocityverticalSpeedDirection*>(items[0]) = HorizontalWithVerticalVelocityverticalSpeedDirection; }
};

typedef Integer<EXTCONSTRAINED, 0, 359> HorizontalVelocityWithUncertaintyBearing;

class HorizontalVelocityWithUncertainty : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HorizontalVelocityWithUncertainty(): Sequence(&theInfo) {}

	void setHorizontalVelocityWithUncertaintyBearing(const HorizontalVelocityWithUncertaintyBearing& HorizontalVelocityWithUncertaintyBearing) { *static_cast<HorizontalVelocityWithUncertaintyBearing*>(items[0]) = HorizontalVelocityWithUncertaintyBearing; }
};

enum HorizontalWithVerticalVelocityAndUncertaintyverticalSpeedDirectionValues {
	Upward,_HorizontalWithVerticalVelocityAndUncertaintyverticalSpeedDirection = 0,
};
typedef Enumerated<CONSTRAINED, 0> HorizontalWithVerticalVelocityAndUncertaintyverticalSpeedDirection;

class HorizontalWithVerticalVelocityAndUncertainty : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HorizontalWithVerticalVelocityAndUncertainty(): Sequence(&theInfo) {}

	void setHorizontalWithVerticalVelocityAndUncertaintyverticalSpeedDirection(const HorizontalWithVerticalVelocityAndUncertaintyverticalSpeedDirection& HorizontalWithVerticalVelocityAndUncertaintyverticalSpeedDirection) { *static_cast<HorizontalWithVerticalVelocityAndUncertaintyverticalSpeedDirection*>(items[0]) = HorizontalWithVerticalVelocityAndUncertaintyverticalSpeedDirection; }
};

typedef Integer<EXTCONSTRAINED, 2, 3> IdleIntervalInfoK;

class IdleIntervalInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IdleIntervalInfo(): Sequence(&theInfo) {}

	void setIdleIntervalInfoK(const IdleIntervalInfoK& IdleIntervalInfoK) { *static_cast<IdleIntervalInfoK*>(items[0]) = IdleIntervalInfoK; }
};

class InterFreqCell : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterFreqCell(): Sequence(&theInfo) {}

	void setFrequencyInfo(const FrequencyInfo& FrequencyInfo) { *static_cast<FrequencyInfo*>(items[0]) = FrequencyInfo; }
};

class InterFreqCellLCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterFreqCellLCRr4(): Sequence(&theInfo) {}

	void setFrequencyInfo(const FrequencyInfo& FrequencyInfo) { *static_cast<FrequencyInfo*>(items[0]) = FrequencyInfo; }
};

typedef Null RemovedInterFreqCellListRemoveAllInterFreqCells;

class RemovedInterFreqCellList : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	RemovedInterFreqCellList(): Choice(&theInfo) {}
};

class InterFreqCellInfoList : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterFreqCellInfoList(): Sequence(&theInfo) {}

	void setRemovedInterFreqCellList(const RemovedInterFreqCellList& RemovedInterFreqCellList) { *static_cast<RemovedInterFreqCellList*>(items[0]) = RemovedInterFreqCellList; }
};

class InterFreqCellInfoListr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterFreqCellInfoListr4(): Sequence(&theInfo) {}

	void setRemovedInterFreqCellList(const RemovedInterFreqCellList& RemovedInterFreqCellList) { *static_cast<RemovedInterFreqCellList*>(items[0]) = RemovedInterFreqCellList; }
};

class InterFreqCellInfoListr8 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterFreqCellInfoListr8(): Sequence(&theInfo) {}

	void setRemovedInterFreqCellList(const RemovedInterFreqCellList& RemovedInterFreqCellList) { *static_cast<RemovedInterFreqCellList*>(items[0]) = RemovedInterFreqCellList; }
};

class InterFreqCellInfoListr9 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterFreqCellInfoListr9(): Sequence(&theInfo) {}

	void setRemovedInterFreqCellList(const RemovedInterFreqCellList& RemovedInterFreqCellList) { *static_cast<RemovedInterFreqCellList*>(items[0]) = RemovedInterFreqCellList; }
};

class InterFreqSIAcquisition : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterFreqSIAcquisition(): Sequence(&theInfo) {}

	void setFrequencyInfo(const FrequencyInfo& FrequencyInfo) { *static_cast<FrequencyInfo*>(items[0]) = FrequencyInfo; }
};

class InterFreqCellInfoSIListRSCP : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterFreqCellInfoSIListRSCP(): Sequence(&theInfo) {}

	void setRemovedInterFreqCellList(const RemovedInterFreqCellList& RemovedInterFreqCellList) { *static_cast<RemovedInterFreqCellList*>(items[0]) = RemovedInterFreqCellList; }
};

class InterFreqCellInfoSIListECN0 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterFreqCellInfoSIListECN0(): Sequence(&theInfo) {}

	void setRemovedInterFreqCellList(const RemovedInterFreqCellList& RemovedInterFreqCellList) { *static_cast<RemovedInterFreqCellList*>(items[0]) = RemovedInterFreqCellList; }
};

class InterFreqCellInfoSIListHCSRSCP : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterFreqCellInfoSIListHCSRSCP(): Sequence(&theInfo) {}

	void setRemovedInterFreqCellList(const RemovedInterFreqCellList& RemovedInterFreqCellList) { *static_cast<RemovedInterFreqCellList*>(items[0]) = RemovedInterFreqCellList; }
};

class InterFreqCellInfoSIListHCSECN0 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterFreqCellInfoSIListHCSECN0(): Sequence(&theInfo) {}

	void setRemovedInterFreqCellList(const RemovedInterFreqCellList& RemovedInterFreqCellList) { *static_cast<RemovedInterFreqCellList*>(items[0]) = RemovedInterFreqCellList; }
};

class InterFreqCellInfoSIListRSCPLCR : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterFreqCellInfoSIListRSCPLCR(): Sequence(&theInfo) {}

	void setRemovedInterFreqCellList(const RemovedInterFreqCellList& RemovedInterFreqCellList) { *static_cast<RemovedInterFreqCellList*>(items[0]) = RemovedInterFreqCellList; }
};

class InterFreqCellInfoSIListECN0LCR : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterFreqCellInfoSIListECN0LCR(): Sequence(&theInfo) {}

	void setRemovedInterFreqCellList(const RemovedInterFreqCellList& RemovedInterFreqCellList) { *static_cast<RemovedInterFreqCellList*>(items[0]) = RemovedInterFreqCellList; }
};

class InterFreqCellInfoSIListHCSRSCPLCR : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterFreqCellInfoSIListHCSRSCPLCR(): Sequence(&theInfo) {}

	void setRemovedInterFreqCellList(const RemovedInterFreqCellList& RemovedInterFreqCellList) { *static_cast<RemovedInterFreqCellList*>(items[0]) = RemovedInterFreqCellList; }
};

class InterFreqCellInfoSIListHCSECN0LCR : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterFreqCellInfoSIListHCSECN0LCR(): Sequence(&theInfo) {}

	void setRemovedInterFreqCellList(const RemovedInterFreqCellList& RemovedInterFreqCellList) { *static_cast<RemovedInterFreqCellList*>(items[0]) = RemovedInterFreqCellList; }
};

typedef SequenceOf<InterFreqCell, CONSTRAINED, 1, maxFreq> InterFreqCellList;

typedef SequenceOf<InterFreqCellLCRr4, CONSTRAINED, 1, maxFreq> InterFreqCellListLCRr4ext;


typedef SequenceOf<CellMeasuredResults, CONSTRAINED, 1, maxCellMeas> InterFreqCellMeasuredResultsList;

typedef SequenceOf<CellMeasuredResultsv920ext, CONSTRAINED, 1, maxCellMeas> InterFreqCellMeasuredResultsListv920ext;

class InterFreqEvent : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	InterFreqEvent(): Choice(&theInfo) {}
};

class InterFreqEventr6 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	InterFreqEventr6(): Choice(&theInfo) {}
};

typedef SequenceOf<InterFreqEvent, CONSTRAINED, 1, maxMeasEvent> InterFreqEventList;

typedef SequenceOf<InterFreqEventr6, CONSTRAINED, 1, maxMeasEvent> InterFreqEventListr6;

typedef SequenceOf<DeltaRSCPPerCell, CONSTRAINED, 1, maxCellMeas> InterFrequencyMeasuredResultsListv590ext;

class InterFreqEventCriteriav590ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterFreqEventCriteriav590ext(): Sequence(&theInfo) {}

	void setThreholdUsedFrequencydelta(const DeltaRSCP& ThreholdUsedFrequencydelta) { *static_cast<DeltaRSCP*>(items[0]) = ThreholdUsedFrequencydelta; }
};

typedef SequenceOf<InterFreqEventCriteriav590ext, CONSTRAINED, 1, maxMeasEvent> InterFreqEventCriteriaListv590ext;

typedef SequenceOf<DeltaRSCP, CONSTRAINED, 1, maxMeasEvent> IntraFreqEventCriteriaListv590ext;

typedef SequenceOf<DeltaRSCPPerCell, CONSTRAINED, 1, maxCellMeas> IntraFrequencyMeasuredResultsListv590ext;

class InterFreqEventResults : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterFreqEventResults(): Sequence(&theInfo) {}

	void setEventID(const EventIDInterFreq& EventID) { *static_cast<EventIDInterFreq*>(items[0]) = EventID; }
};

class InterFreqEventResultsLCRr4ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterFreqEventResultsLCRr4ext(): Sequence(&theInfo) {}

	void setEventID(const EventIDInterFreq& EventID) { *static_cast<EventIDInterFreq*>(items[0]) = EventID; }
};

class InterFreqMeasQuantityReportingCriteria : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	InterFreqMeasQuantityReportingCriteria(): Choice(&theInfo) {}
};

class InterFreqMeasQuantity : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterFreqMeasQuantity(): Sequence(&theInfo) {}

	void setInterFreqMeasQuantityReportingCriteria(const InterFreqMeasQuantityReportingCriteria& InterFreqMeasQuantityReportingCriteria) { *static_cast<InterFreqMeasQuantityReportingCriteria*>(items[0]) = InterFreqMeasQuantityReportingCriteria; }
};

class InterFreqMeasuredResults : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterFreqMeasuredResults(): Sequence(&theInfo) {}

	void setFrequencyInfo(const FrequencyInfo& FrequencyInfo) { *static_cast<FrequencyInfo*>(items[0]) = FrequencyInfo; }
};

class InterFreqMeasuredResultsv920ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterFreqMeasuredResultsv920ext(): Sequence(&theInfo) {}

	void setInterFreqCellMeasuredResultsList(const InterFreqCellMeasuredResultsListv920ext& InterFreqCellMeasuredResultsList) { *static_cast<InterFreqCellMeasuredResultsListv920ext*>(items[0]) = InterFreqCellMeasuredResultsList; }
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

	void setInterFreqCellInfoSIList(const InterFreqCellInfoSIListRSCP& InterFreqCellInfoSIList) { *static_cast<InterFreqCellInfoSIListRSCP*>(items[0]) = InterFreqCellInfoSIList; }
};

class InterFreqMeasurementSysInfoECN0 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterFreqMeasurementSysInfoECN0(): Sequence(&theInfo) {}

	void setInterFreqCellInfoSIList(const InterFreqCellInfoSIListECN0& InterFreqCellInfoSIList) { *static_cast<InterFreqCellInfoSIListECN0*>(items[0]) = InterFreqCellInfoSIList; }
};

class InterFreqMeasurementSysInfoHCSRSCP : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterFreqMeasurementSysInfoHCSRSCP(): Sequence(&theInfo) {}

	void setInterFreqCellInfoSIList(const InterFreqCellInfoSIListHCSRSCP& InterFreqCellInfoSIList) { *static_cast<InterFreqCellInfoSIListHCSRSCP*>(items[0]) = InterFreqCellInfoSIList; }
};

class InterFreqMeasurementSysInfoHCSECN0 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterFreqMeasurementSysInfoHCSECN0(): Sequence(&theInfo) {}

	void setInterFreqCellInfoSIList(const InterFreqCellInfoSIListHCSECN0& InterFreqCellInfoSIList) { *static_cast<InterFreqCellInfoSIListHCSECN0*>(items[0]) = InterFreqCellInfoSIList; }
};

class InterFreqMeasurementSysInfoRSCPLCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterFreqMeasurementSysInfoRSCPLCRr4(): Sequence(&theInfo) {}

	void setInterFreqCellInfoSIList(const InterFreqCellInfoSIListRSCPLCR& InterFreqCellInfoSIList) { *static_cast<InterFreqCellInfoSIListRSCPLCR*>(items[0]) = InterFreqCellInfoSIList; }
};

class InterFreqMeasurementSysInfoECN0LCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterFreqMeasurementSysInfoECN0LCRr4(): Sequence(&theInfo) {}

	void setInterFreqCellInfoSIList(const InterFreqCellInfoSIListECN0LCR& InterFreqCellInfoSIList) { *static_cast<InterFreqCellInfoSIListECN0LCR*>(items[0]) = InterFreqCellInfoSIList; }
};

class InterFreqMeasurementSysInfoHCSRSCPLCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterFreqMeasurementSysInfoHCSRSCPLCRr4(): Sequence(&theInfo) {}

	void setInterFreqCellInfoSIList(const InterFreqCellInfoSIListHCSRSCPLCR& InterFreqCellInfoSIList) { *static_cast<InterFreqCellInfoSIListHCSRSCPLCR*>(items[0]) = InterFreqCellInfoSIList; }
};

class InterFreqMeasurementSysInfoHCSECN0LCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterFreqMeasurementSysInfoHCSECN0LCRr4(): Sequence(&theInfo) {}

	void setInterFreqCellInfoSIList(const InterFreqCellInfoSIListHCSECN0LCR& InterFreqCellInfoSIList) { *static_cast<InterFreqCellInfoSIListHCSECN0LCR*>(items[0]) = InterFreqCellInfoSIList; }
};

typedef SequenceOf<InterFreqCellID, CONSTRAINED, 1, maxFreq> InterFreqRACHRepCellsList;

class DummyInterFreqRACHReportingInfoModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	DummyInterFreqRACHReportingInfoModeSpecificInfo(): Choice(&theInfo) {}
};

class DummyInterFreqRACHReportingInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DummyInterFreqRACHReportingInfo(): Sequence(&theInfo) {}

	void setDummyInterFreqRACHReportingInfoModeSpecificInfo(const DummyInterFreqRACHReportingInfoModeSpecificInfo& DummyInterFreqRACHReportingInfoModeSpecificInfo) { *static_cast<DummyInterFreqRACHReportingInfoModeSpecificInfo*>(items[0]) = DummyInterFreqRACHReportingInfoModeSpecificInfo; }
};

class InterFreqRACHReportingInfoModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	InterFreqRACHReportingInfoModeSpecificInfo(): Choice(&theInfo) {}
};

class InterFreqRACHReportingInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterFreqRACHReportingInfo(): Sequence(&theInfo) {}

	void setInterFreqRACHReportingInfoModeSpecificInfo(const InterFreqRACHReportingInfoModeSpecificInfo& InterFreqRACHReportingInfoModeSpecificInfo) { *static_cast<InterFreqRACHReportingInfoModeSpecificInfo*>(items[0]) = InterFreqRACHReportingInfoModeSpecificInfo; }
};

class InterFreqReportCriteria : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	InterFreqReportCriteria(): Choice(&theInfo) {}
};

class IntraFreqEventr4 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	IntraFreqEventr4(): Choice(&theInfo) {}
};

class IntraFreqEventCriteriar4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IntraFreqEventCriteriar4(): Sequence(&theInfo) {}

	void setEvent(const IntraFreqEventr4& Event) { *static_cast<IntraFreqEventr4*>(items[0]) = Event; }
};

typedef SequenceOf<IntraFreqEventCriteriar4, CONSTRAINED, 1, maxMeasEvent> IntraFreqEventCriteriaListr4;

class IntraFreqReportingCriteriar4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IntraFreqReportingCriteriar4(): Sequence(&theInfo) {}

	void setEventCriteriaList(const IntraFreqEventCriteriaListr4& EventCriteriaList) { *static_cast<IntraFreqEventCriteriaListr4*>(items[0]) = EventCriteriaList; }
};

class InterFreqReportCriteriar4 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	InterFreqReportCriteriar4(): Choice(&theInfo) {}
};

class IntraFreqEventr6 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	IntraFreqEventr6(): Choice(&theInfo) {}
};

class IntraFreqEventCriteriar6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IntraFreqEventCriteriar6(): Sequence(&theInfo) {}

	void setEvent(const IntraFreqEventr6& Event) { *static_cast<IntraFreqEventr6*>(items[0]) = Event; }
};

typedef SequenceOf<IntraFreqEventCriteriar6, CONSTRAINED, 1, maxMeasEvent> IntraFreqEventCriteriaListr6;

class IntraFreqReportingCriteriar6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IntraFreqReportingCriteriar6(): Sequence(&theInfo) {}

	void setEventCriteriaList(const IntraFreqEventCriteriaListr6& EventCriteriaList) { *static_cast<IntraFreqEventCriteriaListr6*>(items[0]) = EventCriteriaList; }
};

class InterFreqReportCriteriar6 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	InterFreqReportCriteriar6(): Choice(&theInfo) {}
};

class IntraFreqEventr7 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	IntraFreqEventr7(): Choice(&theInfo) {}
};

class IntraFreqEventCriteriar7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IntraFreqEventCriteriar7(): Sequence(&theInfo) {}

	void setEvent(const IntraFreqEventr7& Event) { *static_cast<IntraFreqEventr7*>(items[0]) = Event; }
};

typedef SequenceOf<IntraFreqEventCriteriar7, CONSTRAINED, 1, maxMeasEvent> IntraFreqEventCriteriaListr7;

class IntraFreqReportingCriteriar7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IntraFreqReportingCriteriar7(): Sequence(&theInfo) {}

	void setEventCriteriaList(const IntraFreqEventCriteriaListr7& EventCriteriaList) { *static_cast<IntraFreqEventCriteriaListr7*>(items[0]) = EventCriteriaList; }
};

class InterFreqReportCriteriar7 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	InterFreqReportCriteriar7(): Choice(&theInfo) {}
};

class IntraFreqReportingCriteriar9 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IntraFreqReportingCriteriar9(): Sequence(&theInfo) {}

	void setEventCriteriaList(const IntraFreqEventCriteriaListr7& EventCriteriaList) { *static_cast<IntraFreqEventCriteriaListr7*>(items[0]) = EventCriteriaList; }
};

class InterFreqReportCriteriar9 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	InterFreqReportCriteriar9(): Choice(&theInfo) {}
};

class InterFreqReportingCriteria : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterFreqReportingCriteria(): Sequence(&theInfo) {}

	void setInterFreqEventList(const InterFreqEventList& InterFreqEventList) { *static_cast<InterFreqEventList*>(items[0]) = InterFreqEventList; }
};

class InterFreqReportingCriteriar6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterFreqReportingCriteriar6(): Sequence(&theInfo) {}

	void setInterFreqEventList(const InterFreqEventListr6& InterFreqEventList) { *static_cast<InterFreqEventListr6*>(items[0]) = InterFreqEventList; }
};

typedef Boolean InterFreqReportingQuantityUtraCarrierRSSI;

class InterFreqReportingQuantity : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterFreqReportingQuantity(): Sequence(&theInfo) {}

	void setInterFreqReportingQuantityUtraCarrierRSSI(const InterFreqReportingQuantityUtraCarrierRSSI& InterFreqReportingQuantityUtraCarrierRSSI) { *static_cast<InterFreqReportingQuantityUtraCarrierRSSI*>(items[0]) = InterFreqReportingQuantityUtraCarrierRSSI; }
};

enum InterFreqRepQuantityRACHFDDValues {
	CpichEcN0,_InterFreqRepQuantityRACHFDD = 0,
};
typedef Enumerated<CONSTRAINED, 0> InterFreqRepQuantityRACHFDD;

enum InterFreqRepQuantityRACHTDDValues {
	Dummy,_InterFreqRepQuantityRACHTDD = 0,
};
typedef Enumerated<CONSTRAINED, 0> InterFreqRepQuantityRACHTDD;

typedef SequenceOf<InterFreqRepQuantityRACHTDD, CONSTRAINED, 1, 2> InterFreqRepQuantityRACHTDDList;

class InterFrequencyMeasurement : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterFrequencyMeasurement(): Sequence(&theInfo) {}

	void setInterFreqCellInfoList(const InterFreqCellInfoList& InterFreqCellInfoList) { *static_cast<InterFreqCellInfoList*>(items[0]) = InterFreqCellInfoList; }
};

class InterFrequencyMeasurementr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterFrequencyMeasurementr4(): Sequence(&theInfo) {}

	void setInterFreqCellInfoList(const InterFreqCellInfoListr4& InterFreqCellInfoList) { *static_cast<InterFreqCellInfoListr4*>(items[0]) = InterFreqCellInfoList; }
};

class InterFrequencyMeasurementr6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterFrequencyMeasurementr6(): Sequence(&theInfo) {}

	void setInterFreqCellInfoList(const InterFreqCellInfoListr4& InterFreqCellInfoList) { *static_cast<InterFreqCellInfoListr4*>(items[0]) = InterFreqCellInfoList; }
};

class InterFrequencyMeasurementr7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterFrequencyMeasurementr7(): Sequence(&theInfo) {}

	void setInterFreqCellInfoList(const InterFreqCellInfoListr4& InterFreqCellInfoList) { *static_cast<InterFreqCellInfoListr4*>(items[0]) = InterFreqCellInfoList; }
};

class InterFrequencyMeasurementr8 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterFrequencyMeasurementr8(): Sequence(&theInfo) {}

	void setInterFreqCellInfoList(const InterFreqCellInfoListr8& InterFreqCellInfoList) { *static_cast<InterFreqCellInfoListr8*>(items[0]) = InterFreqCellInfoList; }
};

class InterFrequencyMeasurementr9 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterFrequencyMeasurementr9(): Sequence(&theInfo) {}

	void setInterFreqCellInfoList(const InterFreqCellInfoListr9& InterFreqCellInfoList) { *static_cast<InterFreqCellInfoListr9*>(items[0]) = InterFreqCellInfoList; }
};

typedef Integer<CONSTRAINED, 0, 7> NCC;

class BSIC : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	BSIC(): Sequence(&theInfo) {}

	void setNcc(const NCC& Ncc) { *static_cast<NCC*>(items[0]) = Ncc; }
};

class InterRATTargetCellDescriptionTechnologySpecificInfoGsm : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterRATTargetCellDescriptionTechnologySpecificInfoGsm(): Sequence(&theInfo) {}

	void setBsic(const BSIC& Bsic) { *static_cast<BSIC*>(items[0]) = Bsic; }
};

class InterRATTargetCellDescriptionTechnologySpecificInfo : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	InterRATTargetCellDescriptionTechnologySpecificInfo(): Choice(&theInfo) {}
};

class InterRATTargetCellDescription : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterRATTargetCellDescription(): Sequence(&theInfo) {}

	void setInterRATTargetCellDescriptionTechnologySpecificInfo(const InterRATTargetCellDescriptionTechnologySpecificInfo& InterRATTargetCellDescriptionTechnologySpecificInfo) { *static_cast<InterRATTargetCellDescriptionTechnologySpecificInfo*>(items[0]) = InterRATTargetCellDescriptionTechnologySpecificInfo; }
};

typedef Integer<CONSTRAINED, 0, 3> InterRATCellInfoIndication;

typedef Null RemovedInterRATCellListRemoveAllInterRATCells;

class RemovedInterRATCellList : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	RemovedInterRATCellList(): Choice(&theInfo) {}
};

class InterRATCellInfoList : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterRATCellInfoList(): Sequence(&theInfo) {}

	void setRemovedInterRATCellList(const RemovedInterRATCellList& RemovedInterRATCellList) { *static_cast<RemovedInterRATCellList*>(items[0]) = RemovedInterRATCellList; }
};

class InterRATCellInfoListB : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterRATCellInfoListB(): Sequence(&theInfo) {}

	void setRemovedInterRATCellList(const RemovedInterRATCellList& RemovedInterRATCellList) { *static_cast<RemovedInterRATCellList*>(items[0]) = RemovedInterRATCellList; }
};

class InterRATCellInfoListr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterRATCellInfoListr4(): Sequence(&theInfo) {}

	void setRemovedInterRATCellList(const RemovedInterRATCellList& RemovedInterRATCellList) { *static_cast<RemovedInterRATCellList*>(items[0]) = RemovedInterRATCellList; }
};

class InterRATCellInfoListr6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterRATCellInfoListr6(): Sequence(&theInfo) {}

	void setRemovedInterRATCellList(const RemovedInterRATCellList& RemovedInterRATCellList) { *static_cast<RemovedInterRATCellList*>(items[0]) = RemovedInterRATCellList; }
};

typedef Integer<CONSTRAINED, -50, 50> InterRATCellIndividualOffset;

class InterRATEvent : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	InterRATEvent(): Choice(&theInfo) {}
};

typedef SequenceOf<InterRATEvent, CONSTRAINED, 1, maxMeasEvent> InterRATEventList;

class InterRATEventResults : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterRATEventResults(): Sequence(&theInfo) {}

	void setEventID(const EventIDInterRAT& EventID) { *static_cast<EventIDInterRAT*>(items[0]) = EventID; }
};

enum InterRATInfoValues {
	gsm_InterRATInfo = 0,
};
typedef Enumerated<CONSTRAINED, 0> InterRATInfo;

class InterRATInfor6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterRATInfor6(): Sequence(&theInfo) {}

	void setRat(const InterRATInfo& Rat) { *static_cast<InterRATInfo*>(items[0]) = Rat; }
};

typedef Null InterRATInfov860extGsm;

class InterRATInfov860ext : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	InterRATInfov860ext(): Choice(&theInfo) {}
};

class InterRATMeasuredResults : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	InterRATMeasuredResults(): Choice(&theInfo) {}
};

typedef SequenceOf<InterRATMeasuredResults, CONSTRAINED, 1, maxOtherRAT_16> InterRATMeasuredResultsList;

class InterRATMeasurementr8InterRATMeasurementObjects : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	InterRATMeasurementr8InterRATMeasurementObjects(): Choice(&theInfo) {}
};

class InterRATMeasurementr8 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterRATMeasurementr8(): Sequence(&theInfo) {}

	void setInterRATMeasurementr8InterRATMeasurementObjects(const InterRATMeasurementr8InterRATMeasurementObjects& InterRATMeasurementr8InterRATMeasurementObjects) { *static_cast<InterRATMeasurementr8InterRATMeasurementObjects*>(items[0]) = InterRATMeasurementr8InterRATMeasurementObjects; }
};

class InterRATMeasurementr9InterRATMeasurementObjects : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	InterRATMeasurementr9InterRATMeasurementObjects(): Choice(&theInfo) {}
};

class InterRATMeasurementr9 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterRATMeasurementr9(): Sequence(&theInfo) {}

	void setInterRATMeasurementr9InterRATMeasurementObjects(const InterRATMeasurementr9InterRATMeasurementObjects& InterRATMeasurementr9InterRATMeasurementObjects) { *static_cast<InterRATMeasurementr9InterRATMeasurementObjects*>(items[0]) = InterRATMeasurementr9InterRATMeasurementObjects; }
};

class InterRATMeasurementSysInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterRATMeasurementSysInfo(): Sequence(&theInfo) {}

	void setInterRATCellInfoList(const InterRATCellInfoList& InterRATCellInfoList) { *static_cast<InterRATCellInfoList*>(items[0]) = InterRATCellInfoList; }
};

class InterRATMeasurementSysInfoB : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterRATMeasurementSysInfoB(): Sequence(&theInfo) {}

	void setInterRATCellInfoList(const InterRATCellInfoListB& InterRATCellInfoList) { *static_cast<InterRATCellInfoListB*>(items[0]) = InterRATCellInfoList; }
};

class InterRATReportingCriteria : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterRATReportingCriteria(): Sequence(&theInfo) {}

	void setInterRATEventList(const InterRATEventList& InterRATEventList) { *static_cast<InterRATEventList*>(items[0]) = InterRATEventList; }
};

class InterRATReportCriteria : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	InterRATReportCriteria(): Choice(&theInfo) {}
};

typedef Boolean InterRATReportingQuantityUtranEstimatedQuality;

class InterRATReportingQuantity : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterRATReportingQuantity(): Sequence(&theInfo) {}

	void setInterRATReportingQuantityUtranEstimatedQuality(const InterRATReportingQuantityUtranEstimatedQuality& InterRATReportingQuantityUtranEstimatedQuality) { *static_cast<InterRATReportingQuantityUtranEstimatedQuality*>(items[0]) = InterRATReportingQuantityUtranEstimatedQuality; }
};

typedef Boolean InterRATReportingQuantityr8UtranEstimatedQuality;

class InterRATReportingQuantityr8 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterRATReportingQuantityr8(): Sequence(&theInfo) {}

	void setInterRATReportingQuantityr8UtranEstimatedQuality(const InterRATReportingQuantityr8UtranEstimatedQuality& InterRATReportingQuantityr8UtranEstimatedQuality) { *static_cast<InterRATReportingQuantityr8UtranEstimatedQuality*>(items[0]) = InterRATReportingQuantityr8UtranEstimatedQuality; }
};

typedef Null RemovedIntraFreqCellListRemoveAllIntraFreqCells;

class RemovedIntraFreqCellList : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	RemovedIntraFreqCellList(): Choice(&theInfo) {}
};

class IntraFreqCellInfoList : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IntraFreqCellInfoList(): Sequence(&theInfo) {}

	void setRemovedIntraFreqCellList(const RemovedIntraFreqCellList& RemovedIntraFreqCellList) { *static_cast<RemovedIntraFreqCellList*>(items[0]) = RemovedIntraFreqCellList; }
};

class IntraFreqCellInfoListr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IntraFreqCellInfoListr4(): Sequence(&theInfo) {}

	void setRemovedIntraFreqCellList(const RemovedIntraFreqCellList& RemovedIntraFreqCellList) { *static_cast<RemovedIntraFreqCellList*>(items[0]) = RemovedIntraFreqCellList; }
};

typedef Null RemovedIntraFreqCellListOnSecULFreqRemoveAllIntraFreqCells;

class RemovedIntraFreqCellListOnSecULFreq : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	RemovedIntraFreqCellListOnSecULFreq(): Choice(&theInfo) {}
};

class IntraFreqCellInfoListInfoOnSecULFreq : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IntraFreqCellInfoListInfoOnSecULFreq(): Sequence(&theInfo) {}

	void setRemovedIntraFreqCellList(const RemovedIntraFreqCellListOnSecULFreq& RemovedIntraFreqCellList) { *static_cast<RemovedIntraFreqCellListOnSecULFreq*>(items[0]) = RemovedIntraFreqCellList; }
};

class IntraFreqCellInfoListOnSecULFreq : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IntraFreqCellInfoListOnSecULFreq(): Sequence(&theInfo) {}

	void setIntraFreqCellInfoListOnSecULFreq(const IntraFreqCellInfoListInfoOnSecULFreq& IntraFreqCellInfoListOnSecULFreq) { *static_cast<IntraFreqCellInfoListInfoOnSecULFreq*>(items[0]) = IntraFreqCellInfoListOnSecULFreq; }
};

class IntraFreqCellInfoListr9 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IntraFreqCellInfoListr9(): Sequence(&theInfo) {}

	void setRemovedIntraFreqCellList(const RemovedIntraFreqCellList& RemovedIntraFreqCellList) { *static_cast<RemovedIntraFreqCellList*>(items[0]) = RemovedIntraFreqCellList; }
};

typedef SequenceOf<PrimaryCPICHInfo, CONSTRAINED, 1, maxSIrequest> IntraFreqSIAcquisitionInfo;

class IntraFreqSIAcquisitionModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IntraFreqSIAcquisitionModeSpecificInfoFdd(): Sequence(&theInfo) {}

	void setIntraFreqSIAcquisitionInfo(const IntraFreqSIAcquisitionInfo& IntraFreqSIAcquisitionInfo) { *static_cast<IntraFreqSIAcquisitionInfo*>(items[0]) = IntraFreqSIAcquisitionInfo; }
};

class IntraFreqSIAcquisitionModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	IntraFreqSIAcquisitionModeSpecificInfo(): Choice(&theInfo) {}
};

class IntraFreqSIAcquisition : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IntraFreqSIAcquisition(): Sequence(&theInfo) {}

	void setIntraFreqSIAcquisitionModeSpecificInfo(const IntraFreqSIAcquisitionModeSpecificInfo& IntraFreqSIAcquisitionModeSpecificInfo) { *static_cast<IntraFreqSIAcquisitionModeSpecificInfo*>(items[0]) = IntraFreqSIAcquisitionModeSpecificInfo; }
};

class IntraFreqEventOnSecULFreq : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	IntraFreqEventOnSecULFreq(): Choice(&theInfo) {}
};

class IntraFreqEvent1dr5 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IntraFreqEvent1dr5(): Sequence(&theInfo) {}

	void setTriggeringCondition(const TriggeringCondition2& TriggeringCondition) { *static_cast<TriggeringCondition2*>(items[0]) = TriggeringCondition; }
};

class IntraFreqEventCriteriaOnSecULFreq : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IntraFreqEventCriteriaOnSecULFreq(): Sequence(&theInfo) {}

	void setEvent(const IntraFreqEventOnSecULFreq& Event) { *static_cast<IntraFreqEventOnSecULFreq*>(items[0]) = Event; }
};

class IntraFreqEventCriteriaListOnSecULFreq : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IntraFreqEventCriteriaListOnSecULFreq(): Sequence(&theInfo) {}

	void setFrequencyInfo(const FrequencyInfo& FrequencyInfo) { *static_cast<FrequencyInfo*>(items[0]) = FrequencyInfo; }
};

class IntraFreqMeasQuantity : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IntraFreqMeasQuantity(): Sequence(&theInfo) {}

	void setFilterCoefficient(const FilterCoefficient& FilterCoefficient) { *static_cast<FilterCoefficient*>(items[0]) = FilterCoefficient; }
};

enum IntraFreqMeasQuantityFDDValues {
	CpichEcN0,_IntraFreqMeasQuantityFDD = 0,
};
typedef Enumerated<CONSTRAINED, 0> IntraFreqMeasQuantityFDD;

enum IntraFreqMeasQuantityFDDsib3Values {
	CpichEcN0,_IntraFreqMeasQuantityFDDsib3 = 0,
};
typedef Enumerated<CONSTRAINED, 0> IntraFreqMeasQuantityFDDsib3;

enum IntraFreqMeasQuantityTDDValues {
	PrimaryCCPCHRSCP,_IntraFreqMeasQuantityTDD = 0,
};
typedef Enumerated<CONSTRAINED, 0> IntraFreqMeasQuantityTDD;

typedef SequenceOf<IntraFreqMeasQuantityTDD, CONSTRAINED, 1, 4> IntraFreqMeasQuantityTDDList;

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

class IntraFreqMeasurementSysInfoRSCP : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IntraFreqMeasurementSysInfoRSCP(): Sequence(&theInfo) {}

	void setIntraFreqMeasurementID(const MeasurementIdentity& IntraFreqMeasurementID) { *static_cast<MeasurementIdentity*>(items[0]) = IntraFreqMeasurementID; }
};

class IntraFreqMeasurementSysInfoECN0 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IntraFreqMeasurementSysInfoECN0(): Sequence(&theInfo) {}

	void setIntraFreqMeasurementID(const MeasurementIdentity& IntraFreqMeasurementID) { *static_cast<MeasurementIdentity*>(items[0]) = IntraFreqMeasurementID; }
};

class IntraFreqMeasurementSysInfoHCSRSCP : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IntraFreqMeasurementSysInfoHCSRSCP(): Sequence(&theInfo) {}

	void setIntraFreqMeasurementID(const MeasurementIdentity& IntraFreqMeasurementID) { *static_cast<MeasurementIdentity*>(items[0]) = IntraFreqMeasurementID; }
};

class IntraFreqMeasurementSysInfoHCSECN0 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IntraFreqMeasurementSysInfoHCSECN0(): Sequence(&theInfo) {}

	void setIntraFreqMeasurementID(const MeasurementIdentity& IntraFreqMeasurementID) { *static_cast<MeasurementIdentity*>(items[0]) = IntraFreqMeasurementID; }
};

class IntraFreqMeasurementSysInfoRSCPLCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IntraFreqMeasurementSysInfoRSCPLCRr4(): Sequence(&theInfo) {}

	void setIntraFreqMeasurementID(const MeasurementIdentity& IntraFreqMeasurementID) { *static_cast<MeasurementIdentity*>(items[0]) = IntraFreqMeasurementID; }
};

class IntraFreqMeasurementSysInfoECN0LCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IntraFreqMeasurementSysInfoECN0LCRr4(): Sequence(&theInfo) {}

	void setIntraFreqMeasurementID(const MeasurementIdentity& IntraFreqMeasurementID) { *static_cast<MeasurementIdentity*>(items[0]) = IntraFreqMeasurementID; }
};

class IntraFreqMeasurementSysInfoHCSRSCPLCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IntraFreqMeasurementSysInfoHCSRSCPLCRr4(): Sequence(&theInfo) {}

	void setIntraFreqMeasurementID(const MeasurementIdentity& IntraFreqMeasurementID) { *static_cast<MeasurementIdentity*>(items[0]) = IntraFreqMeasurementID; }
};

class IntraFreqMeasurementSysInfoHCSECN0LCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IntraFreqMeasurementSysInfoHCSECN0LCRr4(): Sequence(&theInfo) {}

	void setIntraFreqMeasurementID(const MeasurementIdentity& IntraFreqMeasurementID) { *static_cast<MeasurementIdentity*>(items[0]) = IntraFreqMeasurementID; }
};

class IntraFreqReportCriteria : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	IntraFreqReportCriteria(): Choice(&theInfo) {}
};

class IntraFreqReportCriteriar4 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	IntraFreqReportCriteriar4(): Choice(&theInfo) {}
};

class IntraFreqReportCriteriar6 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	IntraFreqReportCriteriar6(): Choice(&theInfo) {}
};

class IntraFreqReportCriteriar7 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	IntraFreqReportCriteriar7(): Choice(&theInfo) {}
};

class IntraFreqReportCriteriar9 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	IntraFreqReportCriteriar9(): Choice(&theInfo) {}
};

enum ReportingAmountValues {
	Ra1,_ReportingAmount = 0,
};
typedef Enumerated<CONSTRAINED, 0> ReportingAmount;

class PeriodicReportingInfo1b : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PeriodicReportingInfo1b(): Sequence(&theInfo) {}

	void setReportingAmount(const ReportingAmount& ReportingAmount) { *static_cast<ReportingAmount*>(items[0]) = ReportingAmount; }
};

class IntraFreqReportingCriteria1br5 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IntraFreqReportingCriteria1br5(): Sequence(&theInfo) {}

	void setPeriodicReportingInfo1b(const PeriodicReportingInfo1b& PeriodicReportingInfo1b) { *static_cast<PeriodicReportingInfo1b*>(items[0]) = PeriodicReportingInfo1b; }
};

class IntraFreqReportingQuantity : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IntraFreqReportingQuantity(): Sequence(&theInfo) {}

	void setActiveSetReportingQuantities(const CellReportingQuantities& ActiveSetReportingQuantities) { *static_cast<CellReportingQuantities*>(items[0]) = ActiveSetReportingQuantities; }
};

class IntraFreqReportingQuantityForRACH : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IntraFreqReportingQuantityForRACH(): Sequence(&theInfo) {}

	void setSfnSFNOTDType(const SFNSFNOTDType& SfnSFNOTDType) { *static_cast<SFNSFNOTDType*>(items[0]) = SfnSFNOTDType; }
};

enum IntraFreqRepQuantityRACHFDDValues {
	CpichEcN0,_IntraFreqRepQuantityRACHFDD = 0,
};
typedef Enumerated<CONSTRAINED, 0> IntraFreqRepQuantityRACHFDD;

enum IntraFreqRepQuantityRACHTDDValues {
	TimeslotISCP,_IntraFreqRepQuantityRACHTDD = 0,
};
typedef Enumerated<CONSTRAINED, 0> IntraFreqRepQuantityRACHTDD;

typedef SequenceOf<IntraFreqRepQuantityRACHTDD, CONSTRAINED, 1, 2> IntraFreqRepQuantityRACHTDDList;

class IntraFrequencyMeasurement : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IntraFrequencyMeasurement(): Sequence(&theInfo) {}

	void setIntraFreqCellInfoList(const IntraFreqCellInfoList& IntraFreqCellInfoList) { *static_cast<IntraFreqCellInfoList*>(items[0]) = IntraFreqCellInfoList; }
};

class IntraFrequencyMeasurementr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IntraFrequencyMeasurementr4(): Sequence(&theInfo) {}

	void setIntraFreqCellInfoList(const IntraFreqCellInfoListr4& IntraFreqCellInfoList) { *static_cast<IntraFreqCellInfoListr4*>(items[0]) = IntraFreqCellInfoList; }
};

class IntraFrequencyMeasurementr7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IntraFrequencyMeasurementr7(): Sequence(&theInfo) {}

	void setIntraFreqCellInfoList(const IntraFreqCellInfoListr4& IntraFreqCellInfoList) { *static_cast<IntraFreqCellInfoListr4*>(items[0]) = IntraFreqCellInfoList; }
};

class IntraFrequencyMeasurementr9 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IntraFrequencyMeasurementr9(): Sequence(&theInfo) {}

	void setIntraFreqCellInfoList(const IntraFreqCellInfoListr9& IntraFreqCellInfoList) { *static_cast<IntraFreqCellInfoListr9*>(items[0]) = IntraFreqCellInfoList; }
};


typedef SequenceOf<CellMeasuredResultsr9, CONSTRAINED, 1, maxCellMeasOnSecULFreq> IntraFrequencyMeasuredResultsListOnSecULFreq;

typedef Integer<CONSTRAINED, 0, 255> IODE;

enum IPLengthValues {
	Ipl5,_IPLength = 0,
};
typedef Enumerated<CONSTRAINED, 0> IPLength;

typedef Boolean IPPCCPCHr4;

enum IPSpacingValues {
	E5,_IPSpacing = 0,
};
typedef Enumerated<CONSTRAINED, 0> IPSpacing;

enum IPSpacingTDDValues {
	E30,_IPSpacingTDD = 0,
};
typedef Enumerated<CONSTRAINED, 0> IPSpacingTDD;

enum IS2000SpecificMeasInfoValues {
	Frequency,_IS2000SpecificMeasInfo = 0,
};
typedef Enumerated<CONSTRAINED, 0> IS2000SpecificMeasInfo;

typedef BitString<EXTCONSTRAINED, 14, 14> KeplerianParametersToenav;

class KeplerianParameters : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	KeplerianParameters(): Sequence(&theInfo) {}

	void setKeplerianParametersToenav(const KeplerianParametersToenav& KeplerianParametersToenav) { *static_cast<KeplerianParametersToenav*>(items[0]) = KeplerianParametersToenav; }
};

enum MaxNumberOfReportingCellsType1Values {
	E1,_MaxNumberOfReportingCellsType1 = 0,
};
typedef Enumerated<CONSTRAINED, 0> MaxNumberOfReportingCellsType1;

enum MaxNumberOfReportingCellsType2Values {
	E1,_MaxNumberOfReportingCellsType2 = 0,
};
typedef Enumerated<CONSTRAINED, 0> MaxNumberOfReportingCellsType2;

enum MaxNumberOfReportingCellsType3Values {
	ViactCellsPlus1,_MaxNumberOfReportingCellsType3 = 0,
};
typedef Enumerated<CONSTRAINED, 0> MaxNumberOfReportingCellsType3;

enum MaxReportedCellsOnRACHValues {
	NoReport,_MaxReportedCellsOnRACH = 0,
};
typedef Enumerated<CONSTRAINED, 0> MaxReportedCellsOnRACH;

typedef Integer<CONSTRAINED, 1, 8> MaxReportedCellsOnRACHinterFreq;

class MeasuredResults : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	MeasuredResults(): Choice(&theInfo) {}
};

class MeasuredResultsOnSecUlFreq : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasuredResultsOnSecUlFreq(): Sequence(&theInfo) {}

	void setIntraFreqMeasuredResultsList(const IntraFrequencyMeasuredResultsListOnSecULFreq& IntraFreqMeasuredResultsList) { *static_cast<IntraFrequencyMeasuredResultsListOnSecULFreq*>(items[0]) = IntraFreqMeasuredResultsList; }
};

class Neighbourv390extModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Neighbourv390extModeSpecificInfoFdd(): Sequence(&theInfo) {}

	void setFrequencyInfo(const FrequencyInfo& FrequencyInfo) { *static_cast<FrequencyInfo*>(items[0]) = FrequencyInfo; }
};

class Neighbourv390extModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	Neighbourv390extModeSpecificInfo(): Choice(&theInfo) {}
};

class Neighbourv390ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Neighbourv390ext(): Sequence(&theInfo) {}

	void setNeighbourv390extModeSpecificInfo(const Neighbourv390extModeSpecificInfo& Neighbourv390extModeSpecificInfo) { *static_cast<Neighbourv390extModeSpecificInfo*>(items[0]) = Neighbourv390extModeSpecificInfo; }
};

typedef SequenceOf<Neighbourv390ext, CONSTRAINED, 1, maxCellMeas> NeighbourListv390ext;

class UEPositioningOTDOAMeasurementv390ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningOTDOAMeasurementv390ext(): Sequence(&theInfo) {}

	void setNeighbourListv390ext(const NeighbourListv390ext& NeighbourListv390ext) { *static_cast<NeighbourListv390ext*>(items[0]) = NeighbourListv390ext; }
};

class UEPositioningMeasuredResultsv390ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningMeasuredResultsv390ext(): Sequence(&theInfo) {}

	void setUePositioningOTDOAMeasurementv390ext(const UEPositioningOTDOAMeasurementv390ext& UePositioningOTDOAMeasurementv390ext) { *static_cast<UEPositioningOTDOAMeasurementv390ext*>(items[0]) = UePositioningOTDOAMeasurementv390ext; }
};

class MeasuredResultsv390ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasuredResultsv390ext(): Sequence(&theInfo) {}

	void setUepositioningMeasuredResultsv390ext(const UEPositioningMeasuredResultsv390ext& UepositioningMeasuredResultsv390ext) { *static_cast<UEPositioningMeasuredResultsv390ext*>(items[0]) = UepositioningMeasuredResultsv390ext; }
};

class MeasuredResultsv590ext : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	MeasuredResultsv590ext(): Choice(&theInfo) {}
};

class UEInternalMeasuredResultsv770extModeSpecificInfoTdd384768 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEInternalMeasuredResultsv770extModeSpecificInfoTdd384768(): Sequence(&theInfo) {}

	void setAppliedTA(const EXTULTimingAdvance& AppliedTA) { *static_cast<EXTULTimingAdvance*>(items[0]) = AppliedTA; }
};

class UEInternalMeasuredResultsv770extModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	UEInternalMeasuredResultsv770extModeSpecificInfo(): Choice(&theInfo) {}
};

class UEInternalMeasuredResultsv770ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEInternalMeasuredResultsv770ext(): Sequence(&theInfo) {}

	void setUEInternalMeasuredResultsv770extModeSpecificInfo(const UEInternalMeasuredResultsv770extModeSpecificInfo& UEInternalMeasuredResultsv770extModeSpecificInfo) { *static_cast<UEInternalMeasuredResultsv770extModeSpecificInfo*>(items[0]) = UEInternalMeasuredResultsv770extModeSpecificInfo; }
};

class MeasuredResultsv770ext : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	MeasuredResultsv770ext(): Choice(&theInfo) {}
};

typedef BitString<EXTCONSTRAINED, 2, 2> UEPositioningGANSSAdditionalAssistanceDataRequestv860extGanssAddIonoModelReq;

class UEPositioningGANSSAdditionalAssistanceDataRequestv860ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningGANSSAdditionalAssistanceDataRequestv860ext(): Sequence(&theInfo) {}

	void setUEPositioningGANSSAdditionalAssistanceDataRequestv860extGanssAddIonoModelReq(const UEPositioningGANSSAdditionalAssistanceDataRequestv860extGanssAddIonoModelReq& UEPositioningGANSSAdditionalAssistanceDataRequestv860extGanssAddIonoModelReq) { *static_cast<UEPositioningGANSSAdditionalAssistanceDataRequestv860extGanssAddIonoModelReq*>(items[0]) = UEPositioningGANSSAdditionalAssistanceDataRequestv860extGanssAddIonoModelReq; }
};

class UEPositioningErrorv860ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningErrorv860ext(): Sequence(&theInfo) {}

	void setUepositioningGANSSadditionalAssistanceDataRequest(const UEPositioningGANSSAdditionalAssistanceDataRequestv860ext& UepositioningGANSSadditionalAssistanceDataRequest) { *static_cast<UEPositioningGANSSAdditionalAssistanceDataRequestv860ext*>(items[0]) = UepositioningGANSSadditionalAssistanceDataRequest; }
};

class UEPositioningMeasuredResultsv860ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningMeasuredResultsv860ext(): Sequence(&theInfo) {}

	void setUepositioningError(const UEPositioningErrorv860ext& UepositioningError) { *static_cast<UEPositioningErrorv860ext*>(items[0]) = UepositioningError; }
};

class MeasuredResultsv860ext : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	MeasuredResultsv860ext(): Choice(&theInfo) {}
};

class MeasuredResultsv920ext : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	MeasuredResultsv920ext(): Choice(&theInfo) {}
};

typedef SequenceOf<MeasuredResultsv920ext, CONSTRAINED, 1, maxAdditionalMeas> MeasuredResultsListv920ext;

typedef SequenceOf<MeasuredResultsOnSecUlFreq, CONSTRAINED, 1, maxAdditionalMeas> MeasuredResultsListOnSecUlFreq;

class MeasuredResultsLCRr4 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	MeasuredResultsLCRr4(): Choice(&theInfo) {}
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

class MeasuredResultsOnRACHCurrentCellModeSpecificInfoFddMeasurementQuantity : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	MeasuredResultsOnRACHCurrentCellModeSpecificInfoFddMeasurementQuantity(): Choice(&theInfo) {}
};

class MeasuredResultsOnRACHCurrentCellModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasuredResultsOnRACHCurrentCellModeSpecificInfoFdd(): Sequence(&theInfo) {}

	void setMeasuredResultsOnRACHCurrentCellModeSpecificInfoFddMeasurementQuantity(const MeasuredResultsOnRACHCurrentCellModeSpecificInfoFddMeasurementQuantity& MeasuredResultsOnRACHCurrentCellModeSpecificInfoFddMeasurementQuantity) { *static_cast<MeasuredResultsOnRACHCurrentCellModeSpecificInfoFddMeasurementQuantity*>(items[0]) = MeasuredResultsOnRACHCurrentCellModeSpecificInfoFddMeasurementQuantity; }
};

class MeasuredResultsOnRACHCurrentCellModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	MeasuredResultsOnRACHCurrentCellModeSpecificInfo(): Choice(&theInfo) {}
};

class MeasuredResultsOnRACHCurrentCell : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasuredResultsOnRACHCurrentCell(): Sequence(&theInfo) {}

	void setMeasuredResultsOnRACHCurrentCellModeSpecificInfo(const MeasuredResultsOnRACHCurrentCellModeSpecificInfo& MeasuredResultsOnRACHCurrentCellModeSpecificInfo) { *static_cast<MeasuredResultsOnRACHCurrentCellModeSpecificInfo*>(items[0]) = MeasuredResultsOnRACHCurrentCellModeSpecificInfo; }
};

class MeasuredResultsOnRACH : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasuredResultsOnRACH(): Sequence(&theInfo) {}

	void setMeasuredResultsOnRACHCurrentCell(const MeasuredResultsOnRACHCurrentCell& MeasuredResultsOnRACHCurrentCell) { *static_cast<MeasuredResultsOnRACHCurrentCell*>(items[0]) = MeasuredResultsOnRACHCurrentCell; }
};

class MeasuredResultsOnRACHv7g0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasuredResultsOnRACHv7g0ext(): Sequence(&theInfo) {}

	void setCurrentCellDeltaRSCP(const DeltaRSCPPerCell& CurrentCellDeltaRSCP) { *static_cast<DeltaRSCPPerCell*>(items[0]) = CurrentCellDeltaRSCP; }
};

typedef SequenceOf<DeltaRSCPPerCell, CONSTRAINED, 1, 8> MonitoredCellRACHListv7g0ext;

typedef Integer<EXTCONSTRAINED, 0, 1> MeasuredResultsOnRACHinterFreqInterFreqCellIndicationSIB11;

class MeasuredResultsOnRACHinterFreq : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasuredResultsOnRACHinterFreq(): Sequence(&theInfo) {}

	void setMeasuredResultsOnRACHinterFreqInterFreqCellIndicationSIB11(const MeasuredResultsOnRACHinterFreqInterFreqCellIndicationSIB11& MeasuredResultsOnRACHinterFreqInterFreqCellIndicationSIB11) { *static_cast<MeasuredResultsOnRACHinterFreqInterFreqCellIndicationSIB11*>(items[0]) = MeasuredResultsOnRACHinterFreqInterFreqCellIndicationSIB11; }
};

class MeasurementType : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	MeasurementType(): Choice(&theInfo) {}
};

class MeasurementCommand : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	MeasurementCommand(): Choice(&theInfo) {}
};

class MeasurementTyper4 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	MeasurementTyper4(): Choice(&theInfo) {}
};

class MeasurementCommandr4 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	MeasurementCommandr4(): Choice(&theInfo) {}
};


class MeasurementTyper6 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	MeasurementTyper6(): Choice(&theInfo) {}
};

class MeasurementCommandr6 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	MeasurementCommandr6(): Choice(&theInfo) {}
};

class MeasurementTyper7 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	MeasurementTyper7(): Choice(&theInfo) {}
};

class MeasurementCommandr7 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	MeasurementCommandr7(): Choice(&theInfo) {}
};

class MeasurementTyper8 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	MeasurementTyper8(): Choice(&theInfo) {}
};

class MeasurementCommandr8 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	MeasurementCommandr8(): Choice(&theInfo) {}
};

class MeasurementTyper9 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	MeasurementTyper9(): Choice(&theInfo) {}
};

class MeasurementCommandr9 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	MeasurementCommandr9(): Choice(&theInfo) {}
};

class MeasurementControlSysInfoUseofHCSHcsnotusedCellSelectQualityMeasureCpichRSCP : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasurementControlSysInfoUseofHCSHcsnotusedCellSelectQualityMeasureCpichRSCP(): Sequence(&theInfo) {}

	void setIntraFreqMeasurementSysInfo(const IntraFreqMeasurementSysInfoRSCP& IntraFreqMeasurementSysInfo) { *static_cast<IntraFreqMeasurementSysInfoRSCP*>(items[0]) = IntraFreqMeasurementSysInfo; }
};

class MeasurementControlSysInfoUseofHCSHcsnotusedCellSelectQualityMeasure : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	MeasurementControlSysInfoUseofHCSHcsnotusedCellSelectQualityMeasure(): Choice(&theInfo) {}
};

class MeasurementControlSysInfoUseofHCSHcsnotused : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasurementControlSysInfoUseofHCSHcsnotused(): Sequence(&theInfo) {}

	void setMeasurementControlSysInfoUseofHCSHcsnotusedCellSelectQualityMeasure(const MeasurementControlSysInfoUseofHCSHcsnotusedCellSelectQualityMeasure& MeasurementControlSysInfoUseofHCSHcsnotusedCellSelectQualityMeasure) { *static_cast<MeasurementControlSysInfoUseofHCSHcsnotusedCellSelectQualityMeasure*>(items[0]) = MeasurementControlSysInfoUseofHCSHcsnotusedCellSelectQualityMeasure; }
};

class MeasurementControlSysInfoUseofHCS : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	MeasurementControlSysInfoUseofHCS(): Choice(&theInfo) {}
};

class MeasurementControlSysInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasurementControlSysInfo(): Sequence(&theInfo) {}

	void setMeasurementControlSysInfoUseofHCS(const MeasurementControlSysInfoUseofHCS& MeasurementControlSysInfoUseofHCS) { *static_cast<MeasurementControlSysInfoUseofHCS*>(items[0]) = MeasurementControlSysInfoUseofHCS; }
};

typedef SequenceOf<NewIntraFreqCellSIRSCP, CONSTRAINED, 1, maxCellMeas> NewIntraFreqCellSIListRSCP;

class MeasurementControlSysInfoExtensionUseofHCSHcsnotusedCellSelectQualityMeasureCpichRSCP : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasurementControlSysInfoExtensionUseofHCSHcsnotusedCellSelectQualityMeasureCpichRSCP(): Sequence(&theInfo) {}

	void setNewIntraFreqCellList(const NewIntraFreqCellSIListRSCP& NewIntraFreqCellList) { *static_cast<NewIntraFreqCellSIListRSCP*>(items[0]) = NewIntraFreqCellList; }
};

class MeasurementControlSysInfoExtensionUseofHCSHcsnotusedCellSelectQualityMeasure : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	MeasurementControlSysInfoExtensionUseofHCSHcsnotusedCellSelectQualityMeasure(): Choice(&theInfo) {}
};

class MeasurementControlSysInfoExtensionUseofHCSHcsnotused : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasurementControlSysInfoExtensionUseofHCSHcsnotused(): Sequence(&theInfo) {}

	void setMeasurementControlSysInfoExtensionUseofHCSHcsnotusedCellSelectQualityMeasure(const MeasurementControlSysInfoExtensionUseofHCSHcsnotusedCellSelectQualityMeasure& MeasurementControlSysInfoExtensionUseofHCSHcsnotusedCellSelectQualityMeasure) { *static_cast<MeasurementControlSysInfoExtensionUseofHCSHcsnotusedCellSelectQualityMeasure*>(items[0]) = MeasurementControlSysInfoExtensionUseofHCSHcsnotusedCellSelectQualityMeasure; }
};

class MeasurementControlSysInfoExtensionUseofHCS : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	MeasurementControlSysInfoExtensionUseofHCS(): Choice(&theInfo) {}
};

class MeasurementControlSysInfoExtension : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasurementControlSysInfoExtension(): Sequence(&theInfo) {}

	void setMeasurementControlSysInfoExtensionUseofHCS(const MeasurementControlSysInfoExtensionUseofHCS& MeasurementControlSysInfoExtensionUseofHCS) { *static_cast<MeasurementControlSysInfoExtensionUseofHCS*>(items[0]) = MeasurementControlSysInfoExtensionUseofHCS; }
};

class MeasurementControlSysInfoExtensionAddonr5 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasurementControlSysInfoExtensionAddonr5(): Sequence(&theInfo) {}

	void setMeasurementControlSysInfoExtensionAddonr5NewIntraFrequencyCellInfoListAddonr5(const MeasurementControlSysInfoExtensionAddonr5NewIntraFrequencyCellInfoListAddonr5& MeasurementControlSysInfoExtensionAddonr5NewIntraFrequencyCellInfoListAddonr5) { *static_cast<MeasurementControlSysInfoExtensionAddonr5NewIntraFrequencyCellInfoListAddonr5*>(items[0]) = MeasurementControlSysInfoExtensionAddonr5NewIntraFrequencyCellInfoListAddonr5; }
};

typedef SequenceOf<NewIntraFreqCellSIRSCPLCRr4, CONSTRAINED, 1, maxCellMeas> NewIntraFreqCellSIListRSCPLCRr4;

class MeasurementControlSysInfoExtensionLCRr4UseofHCSHcsnotusedCellSelectQualityMeasureCpichRSCP : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasurementControlSysInfoExtensionLCRr4UseofHCSHcsnotusedCellSelectQualityMeasureCpichRSCP(): Sequence(&theInfo) {}

	void setNewIntraFreqCellList(const NewIntraFreqCellSIListRSCPLCRr4& NewIntraFreqCellList) { *static_cast<NewIntraFreqCellSIListRSCPLCRr4*>(items[0]) = NewIntraFreqCellList; }
};

class MeasurementControlSysInfoExtensionLCRr4UseofHCSHcsnotusedCellSelectQualityMeasure : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	MeasurementControlSysInfoExtensionLCRr4UseofHCSHcsnotusedCellSelectQualityMeasure(): Choice(&theInfo) {}
};

class MeasurementControlSysInfoExtensionLCRr4UseofHCSHcsnotused : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasurementControlSysInfoExtensionLCRr4UseofHCSHcsnotused(): Sequence(&theInfo) {}

	void setMeasurementControlSysInfoExtensionLCRr4UseofHCSHcsnotusedCellSelectQualityMeasure(const MeasurementControlSysInfoExtensionLCRr4UseofHCSHcsnotusedCellSelectQualityMeasure& MeasurementControlSysInfoExtensionLCRr4UseofHCSHcsnotusedCellSelectQualityMeasure) { *static_cast<MeasurementControlSysInfoExtensionLCRr4UseofHCSHcsnotusedCellSelectQualityMeasure*>(items[0]) = MeasurementControlSysInfoExtensionLCRr4UseofHCSHcsnotusedCellSelectQualityMeasure; }
};

class MeasurementControlSysInfoExtensionLCRr4UseofHCS : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	MeasurementControlSysInfoExtensionLCRr4UseofHCS(): Choice(&theInfo) {}
};

class MeasurementControlSysInfoExtensionLCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasurementControlSysInfoExtensionLCRr4(): Sequence(&theInfo) {}

	void setMeasurementControlSysInfoExtensionLCRr4UseofHCS(const MeasurementControlSysInfoExtensionLCRr4UseofHCS& MeasurementControlSysInfoExtensionLCRr4UseofHCS) { *static_cast<MeasurementControlSysInfoExtensionLCRr4UseofHCS*>(items[0]) = MeasurementControlSysInfoExtensionLCRr4UseofHCS; }
};

class MeasurementControlSysInfoLCRr4extUseofHCSHcsnotusedCellSelectQualityMeasureCpichRSCP : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasurementControlSysInfoLCRr4extUseofHCSHcsnotusedCellSelectQualityMeasureCpichRSCP(): Sequence(&theInfo) {}

	void setIntraFreqMeasurementSysInfo(const IntraFreqMeasurementSysInfoRSCPLCRr4& IntraFreqMeasurementSysInfo) { *static_cast<IntraFreqMeasurementSysInfoRSCPLCRr4*>(items[0]) = IntraFreqMeasurementSysInfo; }
};

class MeasurementControlSysInfoLCRr4extUseofHCSHcsnotusedCellSelectQualityMeasure : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	MeasurementControlSysInfoLCRr4extUseofHCSHcsnotusedCellSelectQualityMeasure(): Choice(&theInfo) {}
};

class MeasurementControlSysInfoLCRr4extUseofHCSHcsnotused : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasurementControlSysInfoLCRr4extUseofHCSHcsnotused(): Sequence(&theInfo) {}

	void setMeasurementControlSysInfoLCRr4extUseofHCSHcsnotusedCellSelectQualityMeasure(const MeasurementControlSysInfoLCRr4extUseofHCSHcsnotusedCellSelectQualityMeasure& MeasurementControlSysInfoLCRr4extUseofHCSHcsnotusedCellSelectQualityMeasure) { *static_cast<MeasurementControlSysInfoLCRr4extUseofHCSHcsnotusedCellSelectQualityMeasure*>(items[0]) = MeasurementControlSysInfoLCRr4extUseofHCSHcsnotusedCellSelectQualityMeasure; }
};

class MeasurementControlSysInfoLCRr4extUseofHCS : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	MeasurementControlSysInfoLCRr4extUseofHCS(): Choice(&theInfo) {}
};

class MeasurementControlSysInfoLCRr4ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasurementControlSysInfoLCRr4ext(): Sequence(&theInfo) {}

	void setMeasurementControlSysInfoLCRr4extUseofHCS(const MeasurementControlSysInfoLCRr4extUseofHCS& MeasurementControlSysInfoLCRr4extUseofHCS) { *static_cast<MeasurementControlSysInfoLCRr4extUseofHCS*>(items[0]) = MeasurementControlSysInfoLCRr4extUseofHCS; }
};

typedef Integer<CONSTRAINED, 17, 32> MeasurementIdentityExt;

typedef Integer<EXTCONSTRAINED, 0, 511> MeasurementOccasionPatternParameterMeasurementOccasionCoeff;

class MeasurementOccasionPatternParameter : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasurementOccasionPatternParameter(): Sequence(&theInfo) {}

	void setMeasurementOccasionPatternParameterMeasurementOccasionCoeff(const MeasurementOccasionPatternParameterMeasurementOccasionCoeff& MeasurementOccasionPatternParameterMeasurementOccasionCoeff) { *static_cast<MeasurementOccasionPatternParameterMeasurementOccasionCoeff*>(items[0]) = MeasurementOccasionPatternParameterMeasurementOccasionCoeff; }
};

enum MeasurementQuantityGSMValues {
	GsmCarrierRSSI,_MeasurementQuantityGSM = 0,
};
typedef Enumerated<CONSTRAINED, 0> MeasurementQuantityGSM;

enum MeasurementQuantityEUTRAValues {
	Rrsp,_MeasurementQuantityEUTRA = 0,
};
typedef Enumerated<CONSTRAINED, 0> MeasurementQuantityEUTRA;

enum TransferModeValues {
	AcknowledgedModeRLC,_TransferMode = 0,
};
typedef Enumerated<CONSTRAINED, 0> TransferMode;

class MeasurementReportingMode : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasurementReportingMode(): Sequence(&theInfo) {}

	void setMeasurementReportTransferMode(const TransferMode& MeasurementReportTransferMode) { *static_cast<TransferMode*>(items[0]) = MeasurementReportTransferMode; }
};

enum MeasurementValidityue_StateValues {
	CellDCH,_MeasurementValidityue_State = 0,
};
typedef Enumerated<CONSTRAINED, 0> MeasurementValidityue_State;

class MeasurementValidity : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasurementValidity(): Sequence(&theInfo) {}

	void setMeasurementValidityue_State(const MeasurementValidityue_State& MeasurementValidityue_State) { *static_cast<MeasurementValidityue_State*>(items[0]) = MeasurementValidityue_State; }
};

typedef SequenceOf<MonitoredCellRACHResult, CONSTRAINED, 1, 8> MonitoredCellRACHList;


enum MultipathIndicatorValues {
	Nm,_MultipathIndicator = 0,
};
typedef Enumerated<CONSTRAINED, 0> MultipathIndicator;

typedef Integer<EXTCONSTRAINED, 1, 16> NCRTCRMaxHystNCR;

class NCRTCRMaxHyst : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	NCRTCRMaxHyst(): Sequence(&theInfo) {}

	void setNCRTCRMaxHystNCR(const NCRTCRMaxHystNCR& NCRTCRMaxHystNCR) { *static_cast<NCRTCRMaxHystNCR*>(items[0]) = NCRTCRMaxHystNCR; }
};

typedef BitString<EXTCONSTRAINED, 16, 16> NAVclockModelNavToc;

class NAVclockModel : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	NAVclockModel(): Sequence(&theInfo) {}

	void setNAVclockModelNavToc(const NAVclockModelNavToc& NAVclockModelNavToc) { *static_cast<NAVclockModelNavToc*>(items[0]) = NAVclockModelNavToc; }
};

class NavigationModelSatInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	NavigationModelSatInfo(): Sequence(&theInfo) {}

	void setSatID(const SatID& SatID) { *static_cast<SatID*>(items[0]) = SatID; }
};

typedef SequenceOf<NavigationModelSatInfo, CONSTRAINED, 1, maxSat> NavigationModelSatInfoList;

typedef BitString<EXTCONSTRAINED, 11, 11> NavModelCNAVKeplerianSetCnavTop;

class NavModelCNAVKeplerianSet : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	NavModelCNAVKeplerianSet(): Sequence(&theInfo) {}

	void setNavModelCNAVKeplerianSetCnavTop(const NavModelCNAVKeplerianSetCnavTop& NavModelCNAVKeplerianSetCnavTop) { *static_cast<NavModelCNAVKeplerianSetCnavTop*>(items[0]) = NavModelCNAVKeplerianSetCnavTop; }
};

typedef BitString<EXTCONSTRAINED, 5, 5> NavModelGLONASSecefGloEn;

class NavModelGLONASSecef : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	NavModelGLONASSecef(): Sequence(&theInfo) {}

	void setNavModelGLONASSecefGloEn(const NavModelGLONASSecefGloEn& NavModelGLONASSecefGloEn) { *static_cast<NavModelGLONASSecefGloEn*>(items[0]) = NavModelGLONASSecefGloEn; }
};

typedef BitString<EXTCONSTRAINED, 4, 4> NavModelNAVKeplerianSetNavURA;

class NavModelNAVKeplerianSet : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	NavModelNAVKeplerianSet(): Sequence(&theInfo) {}

	void setNavModelNAVKeplerianSetNavURA(const NavModelNAVKeplerianSetNavURA& NavModelNAVKeplerianSetNavURA) { *static_cast<NavModelNAVKeplerianSetNavURA*>(items[0]) = NavModelNAVKeplerianSetNavURA; }
};

typedef BitString<EXTCONSTRAINED, 13, 13> NavModelSBASecefSbasTo;

class NavModelSBASecef : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	NavModelSBASecef(): Sequence(&theInfo) {}

	void setNavModelSBASecefSbasTo(const NavModelSBASecefSbasTo& NavModelSBASecefSbasTo) { *static_cast<NavModelSBASecefSbasTo*>(items[0]) = NavModelSBASecefSbasTo; }
};

typedef BitString<EXTCONSTRAINED, 2, 2> EphemerisParameterCodeOnL2;

class EphemerisParameter : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EphemerisParameter(): Sequence(&theInfo) {}

	void setEphemerisParameterCodeOnL2(const EphemerisParameterCodeOnL2& EphemerisParameterCodeOnL2) { *static_cast<EphemerisParameterCodeOnL2*>(items[0]) = EphemerisParameterCodeOnL2; }
};

typedef BitString<CONSTRAINED, 3, 3> NCMode;

class NeighbourModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	NeighbourModeSpecificInfoFdd(): Sequence(&theInfo) {}

	void setNeighbourIdentity(const PrimaryCPICHInfo& NeighbourIdentity) { *static_cast<PrimaryCPICHInfo*>(items[0]) = NeighbourIdentity; }
};

class NeighbourModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	NeighbourModeSpecificInfo(): Choice(&theInfo) {}
};

class Neighbour : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Neighbour(): Sequence(&theInfo) {}

	void setNeighbourModeSpecificInfo(const NeighbourModeSpecificInfo& NeighbourModeSpecificInfo) { *static_cast<NeighbourModeSpecificInfo*>(items[0]) = NeighbourModeSpecificInfo; }
};

typedef SequenceOf<Neighbour, CONSTRAINED, 1, maxCellMeas> NeighbourList;

class NeighbourTDDr7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	NeighbourTDDr7(): Sequence(&theInfo) {}

	void setUarfcn(const UARFCN& Uarfcn) { *static_cast<UARFCN*>(items[0]) = Uarfcn; }
};

typedef SequenceOf<NeighbourTDDr7, CONSTRAINED, 1, maxCellMeas> NeighbourListTDDr7;

typedef BitString<EXTCONSTRAINED, 2, 2> UEPositioningOTDOAQualityStdResolution;

class UEPositioningOTDOAQuality : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningOTDOAQuality(): Sequence(&theInfo) {}

	void setUEPositioningOTDOAQualityStdResolution(const UEPositioningOTDOAQualityStdResolution& UEPositioningOTDOAQualityStdResolution) { *static_cast<UEPositioningOTDOAQualityStdResolution*>(items[0]) = UEPositioningOTDOAQualityStdResolution; }
};

class NeighbourQuality : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	NeighbourQuality(): Sequence(&theInfo) {}

	void setUePositioningOTDOAQuality(const UEPositioningOTDOAQuality& UePositioningOTDOAQuality) { *static_cast<UEPositioningOTDOAQuality*>(items[0]) = UePositioningOTDOAQuality; }
};

typedef Boolean NewInterFreqCellv7b0extIntraSecondaryFreqIndicator;

class NewInterFreqCellv7b0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	NewInterFreqCellv7b0ext(): Sequence(&theInfo) {}

	void setNewInterFreqCellv7b0extIntraSecondaryFreqIndicator(const NewInterFreqCellv7b0extIntraSecondaryFreqIndicator& NewInterFreqCellv7b0extIntraSecondaryFreqIndicator) { *static_cast<NewInterFreqCellv7b0extIntraSecondaryFreqIndicator*>(items[0]) = NewInterFreqCellv7b0extIntraSecondaryFreqIndicator; }
};

class NewInterFreqCellLCRv8a0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	NewInterFreqCellLCRv8a0ext(): Sequence(&theInfo) {}

	void setCellInfoLCRr8(const CellInfoLCRr8ext& CellInfoLCRr8) { *static_cast<CellInfoLCRr8ext*>(items[0]) = CellInfoLCRr8; }
};


typedef SequenceOf<NewInterFreqCell, CONSTRAINED, 1, maxCellMeas> NewInterFreqCellList;


typedef SequenceOf<NewInterFreqCellr4, CONSTRAINED, 1, maxCellMeas> NewInterFreqCellListr4;

typedef SequenceOf<NewInterFreqCellv7b0ext, CONSTRAINED, 1, maxCellMeas> NewInterFreqCellListv7b0ext;

typedef SequenceOf<NewInterFreqCellLCRv8a0ext, CONSTRAINED, 1, maxCellMeas> NewInterFreqCellListLCRv8a0ext;


typedef SequenceOf<NewInterFreqCellr8, CONSTRAINED, 1, maxCellMeas> NewInterFreqCellListr8;


typedef SequenceOf<NewInterFreqCellr9, CONSTRAINED, 1, maxCellMeas> NewInterFreqCellListr9;


typedef SequenceOf<NewInterFreqCellSIECN0, CONSTRAINED, 1, maxCellMeas> NewInterFreqCellSIListECN0;


typedef SequenceOf<NewInterFreqCellSIHCSRSCP, CONSTRAINED, 1, maxCellMeas> NewInterFreqCellSIListHCSRSCP;


typedef SequenceOf<NewInterFreqCellSIHCSECN0, CONSTRAINED, 1, maxCellMeas> NewInterFreqCellSIListHCSECN0;


typedef SequenceOf<NewInterFreqCellSIRSCP, CONSTRAINED, 1, maxCellMeas> NewInterFreqCellSIListRSCP;


typedef SequenceOf<NewInterFreqCellSIECN0LCRr4, CONSTRAINED, 1, maxCellMeas> NewInterFreqCellSIListECN0LCRr4;


typedef SequenceOf<NewInterFreqCellSIHCSRSCPLCRr4, CONSTRAINED, 1, maxCellMeas> NewInterFreqCellSIListHCSRSCPLCRr4;


typedef SequenceOf<NewInterFreqCellSIHCSECN0LCRr4, CONSTRAINED, 1, maxCellMeas> NewInterFreqCellSIListHCSECN0LCRr4;


typedef SequenceOf<NewInterFreqCellSIRSCPLCRr4, CONSTRAINED, 1, maxCellMeas> NewInterFreqCellSIListRSCPLCRr4;


typedef SequenceOf<NewInterRATCell, CONSTRAINED, 1, maxCellMeas> NewInterRATCellList;


typedef SequenceOf<NewInterRATCellB, CONSTRAINED, 1, maxCellMeas> NewInterRATCellListB;


typedef SequenceOf<NewIntraFreqCell, CONSTRAINED, 1, maxCellMeas> NewIntraFreqCellList;


typedef SequenceOf<NewIntraFreqCellr4, CONSTRAINED, 1, maxCellMeas> NewIntraFreqCellListr4;


typedef SequenceOf<NewIntraFreqCellr9, CONSTRAINED, 1, maxCellMeas> NewIntraFreqCellListr9;

class NewIntraFreqCellLCRv8a0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	NewIntraFreqCellLCRv8a0ext(): Sequence(&theInfo) {}

	void setCellInfoLCRr8(const CellInfoLCRr8ext& CellInfoLCRr8) { *static_cast<CellInfoLCRr8ext*>(items[0]) = CellInfoLCRr8; }
};

typedef SequenceOf<NewIntraFreqCellLCRv8a0ext, CONSTRAINED, 1, maxCellMeas> NewIntraFreqCellListLCRv8a0ext;


typedef SequenceOf<NewIntraFreqCellOnSecULFreq, CONSTRAINED, 1, maxCellMeasOnSecULFreq> NewIntraFreqCellListOnSecULFreq;




typedef SequenceOf<NewIntraFreqCellSIECN0, CONSTRAINED, 1, maxCellMeas> NewIntraFreqCellSIListECN0;


typedef SequenceOf<NewIntraFreqCellSIHCSRSCP, CONSTRAINED, 1, maxCellMeas> NewIntraFreqCellSIListHCSRSCP;


typedef SequenceOf<NewIntraFreqCellSIHCSECN0, CONSTRAINED, 1, maxCellMeas> NewIntraFreqCellSIListHCSECN0;


typedef SequenceOf<NewIntraFreqCellSIECN0LCRr4, CONSTRAINED, 1, maxCellMeas> NewIntraFreqCellSIListECN0LCRr4;


typedef SequenceOf<NewIntraFreqCellSIHCSRSCPLCRr4, CONSTRAINED, 1, maxCellMeas> NewIntraFreqCellSIListHCSRSCPLCRr4;


typedef SequenceOf<NewIntraFreqCellSIHCSECN0LCRr4, CONSTRAINED, 1, maxCellMeas> NewIntraFreqCellSIListHCSECN0LCRr4;

class NonUsedFreqParameter : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	NonUsedFreqParameter(): Sequence(&theInfo) {}

	void setNonUsedFreqThreshold(const Threshold& NonUsedFreqThreshold) { *static_cast<Threshold*>(items[0]) = NonUsedFreqThreshold; }
};

class NonUsedFreqParameterr6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	NonUsedFreqParameterr6(): Sequence(&theInfo) {}

	void setNonUsedFreqThreshold(const Thresholdr6& NonUsedFreqThreshold) { *static_cast<Thresholdr6*>(items[0]) = NonUsedFreqThreshold; }
};

typedef SequenceOf<NonUsedFreqParameter, CONSTRAINED, 1, maxFreq> NonUsedFreqParameterList;

typedef SequenceOf<NonUsedFreqParameterr6, CONSTRAINED, 1, maxFreq> NonUsedFreqParameterListr6;

typedef SequenceOf<W, CONSTRAINED, 1, maxFreq> NonUsedFreqWListr6;

typedef Integer<CONSTRAINED, 0, 4095> ObservedTimeDifferenceToGSM;

enum OTDOASearchWindowSizeValues {
	C20,_OTDOASearchWindowSize = 0,
};
typedef Enumerated<CONSTRAINED, 0> OTDOASearchWindowSize;

typedef Integer<CONSTRAINED, 46, 173> Pathloss;

enum PendingTimeAfterTriggerValues {
	Ptat025,_PendingTimeAfterTrigger = 0,
};
typedef Enumerated<CONSTRAINED, 0> PendingTimeAfterTrigger;

enum PeriodicalOrEventTriggerValues {
	Periodical,_PeriodicalOrEventTrigger = 0,
};
typedef Enumerated<CONSTRAINED, 0> PeriodicalOrEventTrigger;

class PeriodicalReportingCriteria : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PeriodicalReportingCriteria(): Sequence(&theInfo) {}

	void setReportingAmount(const ReportingAmount& ReportingAmount) { *static_cast<ReportingAmount*>(items[0]) = ReportingAmount; }
};

class PeriodicalWithReportingCellStatus : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PeriodicalWithReportingCellStatus(): Sequence(&theInfo) {}

	void setPeriodicalReportingCriteria(const PeriodicalReportingCriteria& PeriodicalReportingCriteria) { *static_cast<PeriodicalReportingCriteria*>(items[0]) = PeriodicalReportingCriteria; }
};

class PLMNsOfIntraFreqCellsList : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	PLMNsOfIntraFreqCellsList(): Sequence(&theInfo) {}

};

class PLMNIdentitiesOfNeighbourCells : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PLMNIdentitiesOfNeighbourCells(): Sequence(&theInfo) {}

	void setPlmnsOfIntraFreqCellsList(const PLMNsOfIntraFreqCellsList& PlmnsOfIntraFreqCellsList) { *static_cast<PLMNsOfIntraFreqCellsList*>(items[0]) = PlmnsOfIntraFreqCellsList; }
};

class MultiplePLMNsOfIntraFreqCellsList : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	MultiplePLMNsOfIntraFreqCellsList(): Sequence(&theInfo) {}

};

class PLMNIdentitiesOfNeighbourCellsv860ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PLMNIdentitiesOfNeighbourCellsv860ext(): Sequence(&theInfo) {}

	void setMultipleplmnsOfIntraFreqCellsList(const MultiplePLMNsOfIntraFreqCellsList& MultipleplmnsOfIntraFreqCellsList) { *static_cast<MultiplePLMNsOfIntraFreqCellsList*>(items[0]) = MultipleplmnsOfIntraFreqCellsList; }
};

class PLMNsOfInterFreqCellsList : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	PLMNsOfInterFreqCellsList(): Sequence(&theInfo) {}

};

class MultiplePLMNsOfInterFreqCellsList : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	MultiplePLMNsOfInterFreqCellsList(): Sequence(&theInfo) {}

};

class PLMNsOfInterRATCellsList : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	PLMNsOfInterRATCellsList(): Sequence(&theInfo) {}

};

class PositionEstimate : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	PositionEstimate(): Choice(&theInfo) {}
};

enum PositioningMethodValues {
	Otdoa,_PositioningMethod = 0,
};
typedef Enumerated<CONSTRAINED, 0> PositioningMethod;

typedef Integer<CONSTRAINED, -2047, 2047> PRC;

typedef Integer<CONSTRAINED, 0, 127> PrimaryCCPCHRSCP;

typedef Integer<CONSTRAINED, 0, 99> QHCS;

typedef Integer<CONSTRAINED, -24, 0> QQualMin;

typedef Integer<CONSTRAINED, 1, 16> QQualMinOffset;

typedef Integer<CONSTRAINED, -58, -13> QRxlevMin;

typedef Integer<CONSTRAINED, 1, 8> QRxlevMinOffset;

typedef SequenceOf<TransportChannelIdentity, CONSTRAINED, 1, maxTrCH> QualityEventResults;

class QualityReportingCriteriaSingle : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	QualityReportingCriteriaSingle(): Sequence(&theInfo) {}

	void setTransportChannelIdentity(const TransportChannelIdentity& TransportChannelIdentity) { *static_cast<TransportChannelIdentity*>(items[0]) = TransportChannelIdentity; }
};

typedef SequenceOf<QualityReportingCriteriaSingle, CONSTRAINED, 1, maxTrCH> QualityReportingCriteria;

class QualityReportCriteria : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	QualityReportCriteria(): Choice(&theInfo) {}
};

typedef Boolean QualityReportingQuantityDlTransChBLER;

class QualityReportingQuantity : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	QualityReportingQuantity(): Sequence(&theInfo) {}

	void setQualityReportingQuantityDlTransChBLER(const QualityReportingQuantityDlTransChBLER& QualityReportingQuantityDlTransChBLER) { *static_cast<QualityReportingQuantityDlTransChBLER*>(items[0]) = QualityReportingQuantityDlTransChBLER; }
};

enum RATTypeValues {
	Gsm,_RATType = 0,
};
typedef Enumerated<CONSTRAINED, 0> RATType;

class ReferenceCellPosition : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	ReferenceCellPosition(): Choice(&theInfo) {}
};

class ReferenceLocation : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ReferenceLocation(): Sequence(&theInfo) {}

	void setEllipsoidPointAltitudeEllipsoide(const EllipsoidPointAltitudeEllipsoide& EllipsoidPointAltitudeEllipsoide) { *static_cast<EllipsoidPointAltitudeEllipsoide*>(items[0]) = EllipsoidPointAltitudeEllipsoide; }
};

class ReferenceLocationGANSS : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ReferenceLocationGANSS(): Sequence(&theInfo) {}

	void setEllipsoidPointAltitudeEllipsoide(const EllipsoidPointAltitudeEllipsoide& EllipsoidPointAltitudeEllipsoide) { *static_cast<EllipsoidPointAltitudeEllipsoide*>(items[0]) = EllipsoidPointAltitudeEllipsoide; }
};

typedef Integer<EXTCONSTRAINED, 0, 960> ReferenceTimeDifferenceToCellAccuracy40;

class ReferenceTimeDifferenceToCell : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	ReferenceTimeDifferenceToCell(): Choice(&theInfo) {}
};

enum ReportDeactivationThresholdValues {
	NotApplicable,_ReportDeactivationThreshold = 0,
};
typedef Enumerated<CONSTRAINED, 0> ReportDeactivationThreshold;

class ReportingCellStatus : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	ReportingCellStatus(): Choice(&theInfo) {}
};

class ReportingCellStatusOpt : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ReportingCellStatusOpt(): Sequence(&theInfo) {}

	void setReportingCellStatus(const ReportingCellStatus& ReportingCellStatus) { *static_cast<ReportingCellStatus*>(items[0]) = ReportingCellStatus; }
};

class ReportingInfoForCellDCH : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ReportingInfoForCellDCH(): Sequence(&theInfo) {}

	void setIntraFreqReportingQuantity(const IntraFreqReportingQuantity& IntraFreqReportingQuantity) { *static_cast<IntraFreqReportingQuantity*>(items[0]) = IntraFreqReportingQuantity; }
};

class ReportingInfoForCellDCHLCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ReportingInfoForCellDCHLCRr4(): Sequence(&theInfo) {}

	void setIntraFreqReportingQuantity(const IntraFreqReportingQuantity& IntraFreqReportingQuantity) { *static_cast<IntraFreqReportingQuantity*>(items[0]) = IntraFreqReportingQuantity; }
};

enum ReportingIntervalValues {
	NoPeriodicalreporting,_ReportingInterval = 0,
};
typedef Enumerated<CONSTRAINED, 0> ReportingInterval;

enum ReportingIntervalLongValues {
	Ril0,_ReportingIntervalLong = 0,
};
typedef Enumerated<CONSTRAINED, 0> ReportingIntervalLong;

typedef Integer<CONSTRAINED, 0, 29> ReportingRange;

class ReqDataBitAssistance : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ReqDataBitAssistance(): Sequence(&theInfo) {}

	void setGanssSignalID(const DGANSSSigIdReq& GanssSignalID) { *static_cast<DGANSSSigIdReq*>(items[0]) = GanssSignalID; }
};

typedef SequenceOf<PrimaryCPICHInfo, CONSTRAINED, 1, maxRL> RLAdditionInfoList;

class RLInformationLists : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RLInformationLists(): Sequence(&theInfo) {}

	void setRlAdditionInfoList(const RLAdditionInfoList& RlAdditionInfoList) { *static_cast<RLAdditionInfoList*>(items[0]) = RlAdditionInfoList; }
};

enum RLCBuffersPayloadValues {
	Pl0,_RLCBuffersPayload = 0,
};
typedef Enumerated<CONSTRAINED, 0> RLCBuffersPayload;

typedef Integer<CONSTRAINED, -127, 127> RRC;

class SatData : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SatData(): Sequence(&theInfo) {}

	void setSatID(const SatID& SatID) { *static_cast<SatID*>(items[0]) = SatID; }
};

typedef SequenceOf<SatData, CONSTRAINED, 0, maxSat> SatDataList;

typedef Integer<EXTCONSTRAINED, 0, 63> SatellitesListRelatedDataSatId;

class SatellitesListRelatedData : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SatellitesListRelatedData(): Sequence(&theInfo) {}

	void setSatellitesListRelatedDataSatId(const SatellitesListRelatedDataSatId& SatellitesListRelatedDataSatId) { *static_cast<SatellitesListRelatedDataSatId*>(items[0]) = SatellitesListRelatedDataSatId; }
};

typedef SequenceOf<SatellitesListRelatedData, CONSTRAINED, 1, maxGANSSSat> SatellitesListRelatedDataList;

enum SatelliteStatusValues {
	NsNNU,_SatelliteStatus = 0,
};
typedef Enumerated<CONSTRAINED, 0> SatelliteStatus;

typedef BitString<EXTCONSTRAINED, 14, 14> SatelliteclockmodelToc;

class Satelliteclockmodel : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Satelliteclockmodel(): Sequence(&theInfo) {}

	void setSatelliteclockmodelToc(const SatelliteclockmodelToc& SatelliteclockmodelToc) { *static_cast<SatelliteclockmodelToc*>(items[0]) = SatelliteclockmodelToc; }
};

typedef SequenceOf<Satelliteclockmodel, CONSTRAINED, 1, maxSatClockModels> SatelliteclockmodelList;

typedef BitString<EXTCONSTRAINED, 13, 13> SBASclockModelSbasTo;

class SBASclockModel : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SBASclockModel(): Sequence(&theInfo) {}

	void setSBASclockModelSbasTo(const SBASclockModelSbasTo& SBASclockModelSbasTo) { *static_cast<SBASclockModelSbasTo*>(items[0]) = SBASclockModelSbasTo; }
};

enum SFNOffsetValidityValues {
	false_SFNOffsetValidity = 0,
};
typedef Enumerated<CONSTRAINED, 0> SFNOffsetValidity;

enum SFNSFNDriftValues {
	Sfnsfndrift0,_SFNSFNDrift = 0,
};
typedef Enumerated<CONSTRAINED, 0> SFNSFNDrift;

typedef Integer<CONSTRAINED, 0, 16777215> SFNSFNObsTimeDifference1;

class SFNSFNObsTimeDifference : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	SFNSFNObsTimeDifference(): Choice(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 65535> SFNSFNObsTimeDifference2;

typedef Integer<EXTCONSTRAINED, 0 ,  4095> SFNSFNRelTimeDifference1SfnOffset;

class SFNSFNRelTimeDifference1 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SFNSFNRelTimeDifference1(): Sequence(&theInfo) {}

	void setSFNSFNRelTimeDifference1SfnOffset(const SFNSFNRelTimeDifference1SfnOffset& SFNSFNRelTimeDifference1SfnOffset) { *static_cast<SFNSFNRelTimeDifference1SfnOffset*>(items[0]) = SFNSFNRelTimeDifference1SfnOffset; }
};

enum SFNTOWUncertaintyValues {
	LessThan10,_SFNTOWUncertainty = 0,
};
typedef Enumerated<CONSTRAINED, 0> SFNTOWUncertainty;

typedef Integer<CONSTRAINED, 0, 63> SIR;

class SIRMeasurementResults : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SIRMeasurementResults(): Sequence(&theInfo) {}

	void setTfcsID(const TFCSIdentityPlain& TfcsID) { *static_cast<TFCSIdentityPlain*>(items[0]) = TfcsID; }
};

typedef SequenceOf<SIRMeasurementResults, CONSTRAINED, 1, maxCCTrCH> SIRMeasurementList;


typedef SequenceOf<SIRTFCS, CONSTRAINED, 1, maxCCTrCH> SIRTFCSList;

typedef SequenceOf<SIR, CONSTRAINED, 1, maxTS> SIRTimeslotList;

typedef BitString<EXTCONSTRAINED, 23, 23> SubFrame1ReservedReserved1;

class SubFrame1Reserved : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SubFrame1Reserved(): Sequence(&theInfo) {}

	void setSubFrame1ReservedReserved1(const SubFrame1ReservedReserved1& SubFrame1ReservedReserved1) { *static_cast<SubFrame1ReservedReserved1*>(items[0]) = SubFrame1ReservedReserved1; }
};

typedef Integer<EXTCONSTRAINED, 0, 2047> TADVinfoTADV;

class TADVinfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	TADVinfo(): Sequence(&theInfo) {}

	void setTADVinfoTADV(const TADVinfoTADV& TADVinfoTADV) { *static_cast<TADVinfoTADV*>(items[0]) = TADVinfoTADV; }
};

typedef Integer<EXTCONSTRAINED, 0, 8191> TADVinfoextTADV;

class TADVinfoext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	TADVinfoext(): Sequence(&theInfo) {}

	void setTADVinfoextTADV(const TADVinfoextTADV& TADVinfoextTADV) { *static_cast<TADVinfoextTADV*>(items[0]) = TADVinfoextTADV; }
};

enum TCRMaxHystValues {
	NotUsed,_TCRMaxHyst = 0,
};
typedef Enumerated<CONSTRAINED, 0> TCRMaxHyst;

enum TemporaryOffset1Values {
	To3,_TemporaryOffset1 = 0,
};
typedef Enumerated<CONSTRAINED, 0> TemporaryOffset1;

enum TemporaryOffset2Values {
	To2,_TemporaryOffset2 = 0,
};
typedef Enumerated<CONSTRAINED, 0> TemporaryOffset2;

class TemporaryOffsetList : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	TemporaryOffsetList(): Sequence(&theInfo) {}

	void setTemporaryOffset1(const TemporaryOffset1& TemporaryOffset1) { *static_cast<TemporaryOffset1*>(items[0]) = TemporaryOffset1; }
};

typedef SequenceOf<DeltaRSCPPerCell, CONSTRAINED, 1, maxFreq> ThreholdNonUsedFrequencydeltaList;

enum ThresholdPositionChangeValues {
	Pc10,_ThresholdPositionChange = 0,
};
typedef Enumerated<CONSTRAINED, 0> ThresholdPositionChange;

enum ThresholdSFNGANSSTOWValues {
	Us1,_ThresholdSFNGANSSTOW = 0,
};
typedef Enumerated<CONSTRAINED, 0> ThresholdSFNGANSSTOW;

enum ThresholdSFNGPSTOWValues {
	Ms1,_ThresholdSFNGPSTOW = 0,
};
typedef Enumerated<CONSTRAINED, 0> ThresholdSFNGPSTOW;

enum ThresholdSFNGPSTOWusValues {
	Us1,_ThresholdSFNGPSTOWus = 0,
};
typedef Enumerated<CONSTRAINED, 0> ThresholdSFNGPSTOWus;

enum ThresholdSFNSFNChangeValues {
	C025,_ThresholdSFNSFNChange = 0,
};
typedef Enumerated<CONSTRAINED, 0> ThresholdSFNSFNChange;

typedef Integer<CONSTRAINED, -115, 165> ThresholdUsedFrequency;

typedef Integer<CONSTRAINED, -120, 165> ThresholdUsedFrequencyr6;

typedef Integer<CONSTRAINED, 1, 13> TimeInterval;

class TimeslotInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	TimeslotInfo(): Sequence(&theInfo) {}

	void setTimeslotNumber(const TimeslotNumber& TimeslotNumber) { *static_cast<TimeslotNumber*>(items[0]) = TimeslotNumber; }
};

class TimeslotInfoLCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	TimeslotInfoLCRr4(): Sequence(&theInfo) {}

	void setTimeslotNumber(const TimeslotNumberLCRr4& TimeslotNumber) { *static_cast<TimeslotNumberLCRr4*>(items[0]) = TimeslotNumber; }
};

typedef SequenceOf<TimeslotInfo, CONSTRAINED, 1, maxTS> TimeslotInfoList;

typedef SequenceOf<TimeslotInfoLCRr4, CONSTRAINED, 1, maxTS_LCR> TimeslotInfoListLCRr4;

typedef SequenceOf<TimeslotInfo, EXTCONSTRAINED, 1, maxTS> TimeslotInfoListr4Tdd384;

class TimeslotInfoListr4 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	TimeslotInfoListr4(): Choice(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 127> TimeslotISCP;

typedef SequenceOf<TimeslotISCP, CONSTRAINED, 1, maxTS> TimeslotISCPList;

class TimeslotWithISCP : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	TimeslotWithISCP(): Sequence(&theInfo) {}

	void setTimeslot(const TimeslotNumber& Timeslot) { *static_cast<TimeslotNumber*>(items[0]) = Timeslot; }
};

typedef SequenceOf<TimeslotWithISCP, CONSTRAINED, 1, maxTS> TimeslotListWithISCP;

enum TimeToTriggerValues {
	Ttt0,_TimeToTrigger = 0,
};
typedef Enumerated<CONSTRAINED, 0> TimeToTrigger;

enum TrafficVolumeEventTypeValues {
	E4a,_TrafficVolumeEventType = 0,
};
typedef Enumerated<CONSTRAINED, 0> TrafficVolumeEventType;

class TrafficVolumeEventParam : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	TrafficVolumeEventParam(): Sequence(&theInfo) {}

	void setEventID(const TrafficVolumeEventType& EventID) { *static_cast<TrafficVolumeEventType*>(items[0]) = EventID; }
};

class ULTrCHIdentity : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	ULTrCHIdentity(): Choice(&theInfo) {}
};

class TrafficVolumeEventResults : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	TrafficVolumeEventResults(): Sequence(&theInfo) {}

	void setUltransportChannelCausingEvent(const ULTrCHIdentity& UltransportChannelCausingEvent) { *static_cast<ULTrCHIdentity*>(items[0]) = UltransportChannelCausingEvent; }
};

typedef Null TrafficVolumeMeasQuantityRlcBufferPayload;

class TrafficVolumeMeasQuantity : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	TrafficVolumeMeasQuantity(): Choice(&theInfo) {}
};

class TrafficVolumeMeasSysInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	TrafficVolumeMeasSysInfo(): Sequence(&theInfo) {}

	void setTrafficVolumeMeasurementID(const MeasurementIdentity& TrafficVolumeMeasurementID) { *static_cast<MeasurementIdentity*>(items[0]) = TrafficVolumeMeasurementID; }
};

class TrafficVolumeMeasuredResults : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	TrafficVolumeMeasuredResults(): Sequence(&theInfo) {}

	void setRbIdentity(const RBIdentity& RbIdentity) { *static_cast<RBIdentity*>(items[0]) = RbIdentity; }
};

typedef SequenceOf<TrafficVolumeMeasuredResults, CONSTRAINED, 1, maxRB> TrafficVolumeMeasuredResultsList;

typedef SequenceOf<ULTrCHIdentity, CONSTRAINED, 1, maxTrCH> TrafficVolumeMeasurementObjectList;

class TransChCriteria : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	TransChCriteria(): Sequence(&theInfo) {}

	void setUltransportChannelID(const ULTrCHIdentity& UltransportChannelID) { *static_cast<ULTrCHIdentity*>(items[0]) = UltransportChannelID; }
};

typedef SequenceOf<TransChCriteria, CONSTRAINED, 1, maxTrCH> TransChCriteriaList;

class TrafficVolumeReportingCriteria : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	TrafficVolumeReportingCriteria(): Sequence(&theInfo) {}

	void setTransChCriteriaList(const TransChCriteriaList& TransChCriteriaList) { *static_cast<TransChCriteriaList*>(items[0]) = TransChCriteriaList; }
};

class TrafficVolumeReportCriteria : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	TrafficVolumeReportCriteria(): Choice(&theInfo) {}
};

class TrafficVolumeReportCriteriaSysInfo : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	TrafficVolumeReportCriteriaSysInfo(): Choice(&theInfo) {}
};

typedef Boolean TrafficVolumeReportingQuantityRlcRBBufferPayload;

class TrafficVolumeReportingQuantity : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	TrafficVolumeReportingQuantity(): Sequence(&theInfo) {}

	void setTrafficVolumeReportingQuantityRlcRBBufferPayload(const TrafficVolumeReportingQuantityRlcRBBufferPayload& TrafficVolumeReportingQuantityRlcRBBufferPayload) { *static_cast<TrafficVolumeReportingQuantityRlcRBBufferPayload*>(items[0]) = TrafficVolumeReportingQuantityRlcRBBufferPayload; }
};

enum TrafficVolumeThresholdValues {
	Th8,_TrafficVolumeThreshold = 0,
};
typedef Enumerated<CONSTRAINED, 0> TrafficVolumeThreshold;

typedef Integer<CONSTRAINED, -50, 33> TransmittedPowerThreshold;

enum TutranGanssDriftRateValues {
	Ugdr0,_TutranGanssDriftRate = 0,
};
typedef Enumerated<CONSTRAINED, 0> TutranGanssDriftRate;

enum TXInterruptionAfterTriggerValues {
	Txiat025,_TXInterruptionAfterTrigger = 0,
};
typedef Enumerated<CONSTRAINED, 0> TXInterruptionAfterTrigger;

enum UDREValues {
	LessThan1,_UDRE = 0,
};
typedef Enumerated<CONSTRAINED, 0> UDRE;

enum UDREValidityTimeValues {
	Val20sec,_UDREValidityTime = 0,
};
typedef Enumerated<CONSTRAINED, 0> UDREValidityTime;

class UE6ABEvent : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UE6ABEvent(): Sequence(&theInfo) {}

	void setTimeToTrigger(const TimeToTrigger& TimeToTrigger) { *static_cast<TimeToTrigger*>(items[0]) = TimeToTrigger; }
};

class UE6FGEvent : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UE6FGEvent(): Sequence(&theInfo) {}

	void setTimeToTrigger(const TimeToTrigger& TimeToTrigger) { *static_cast<TimeToTrigger*>(items[0]) = TimeToTrigger; }
};

typedef Null UEAutonomousUpdateModeDummy;

class UEAutonomousUpdateMode : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	UEAutonomousUpdateMode(): Choice(&theInfo) {}
};

class UEInternalEventParam : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	UEInternalEventParam(): Choice(&theInfo) {}
};

typedef SequenceOf<UEInternalEventParam, CONSTRAINED, 1, maxMeasEvent> UEInternalEventParamList;

typedef Null UEInternalEventResultsEvent6a;

class UEInternalEventResults : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	UEInternalEventResults(): Choice(&theInfo) {}
};

enum UEMeasurementQuantityValues {
	UeTransmittedPower,_UEMeasurementQuantity = 0,
};
typedef Enumerated<CONSTRAINED, 0> UEMeasurementQuantity;

class UEInternalMeasQuantity : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEInternalMeasQuantity(): Sequence(&theInfo) {}

	void setMeasurementQuantity(const UEMeasurementQuantity& MeasurementQuantity) { *static_cast<UEMeasurementQuantity*>(items[0]) = MeasurementQuantity; }
};

typedef Integer<CONSTRAINED, 0, 104> UETransmittedPower;

class UEInternalMeasuredResultsModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEInternalMeasuredResultsModeSpecificInfoFdd(): Sequence(&theInfo) {}

	void setUeTransmittedPowerFDD(const UETransmittedPower& UeTransmittedPowerFDD) { *static_cast<UETransmittedPower*>(items[0]) = UeTransmittedPowerFDD; }
};

class UEInternalMeasuredResultsModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	UEInternalMeasuredResultsModeSpecificInfo(): Choice(&theInfo) {}
};

class UEInternalMeasuredResults : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEInternalMeasuredResults(): Sequence(&theInfo) {}

	void setUEInternalMeasuredResultsModeSpecificInfo(const UEInternalMeasuredResultsModeSpecificInfo& UEInternalMeasuredResultsModeSpecificInfo) { *static_cast<UEInternalMeasuredResultsModeSpecificInfo*>(items[0]) = UEInternalMeasuredResultsModeSpecificInfo; }
};

typedef SequenceOf<UETransmittedPower, CONSTRAINED, 1, maxTS> UETransmittedPowerTDDList;

class UEInternalMeasuredResultsLCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEInternalMeasuredResultsLCRr4(): Sequence(&theInfo) {}

	void setUeTransmittedPowerTDDList(const UETransmittedPowerTDDList& UeTransmittedPowerTDDList) { *static_cast<UETransmittedPowerTDDList*>(items[0]) = UeTransmittedPowerTDDList; }
};

class UEInternalMeasurementSysInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEInternalMeasurementSysInfo(): Sequence(&theInfo) {}

	void setUeInternalMeasurementID(const MeasurementIdentity& UeInternalMeasurementID) { *static_cast<MeasurementIdentity*>(items[0]) = UeInternalMeasurementID; }
};

class UEInternalReportingCriteria : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEInternalReportingCriteria(): Sequence(&theInfo) {}

	void setUeInternalEventParamList(const UEInternalEventParamList& UeInternalEventParamList) { *static_cast<UEInternalEventParamList*>(items[0]) = UeInternalEventParamList; }
};

class UEInternalReportCriteria : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	UEInternalReportCriteria(): Choice(&theInfo) {}
};

typedef Boolean UEInternalReportingQuantityUeTransmittedPower;

class UEInternalReportingQuantity : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEInternalReportingQuantity(): Sequence(&theInfo) {}

	void setUEInternalReportingQuantityUeTransmittedPower(const UEInternalReportingQuantityUeTransmittedPower& UEInternalReportingQuantityUeTransmittedPower) { *static_cast<UEInternalReportingQuantityUeTransmittedPower*>(items[0]) = UEInternalReportingQuantityUeTransmittedPower; }
};

typedef Boolean UEInternalReportingQuantityr4UeTransmittedPower;

class UEInternalReportingQuantityr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEInternalReportingQuantityr4(): Sequence(&theInfo) {}

	void setUEInternalReportingQuantityr4UeTransmittedPower(const UEInternalReportingQuantityr4UeTransmittedPower& UEInternalReportingQuantityr4UeTransmittedPower) { *static_cast<UEInternalReportingQuantityr4UeTransmittedPower*>(items[0]) = UEInternalReportingQuantityr4UeTransmittedPower; }
};

class UERXTXReportEntry : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERXTXReportEntry(): Sequence(&theInfo) {}

	void setPrimaryCPICHInfo(const PrimaryCPICHInfo& PrimaryCPICHInfo) { *static_cast<PrimaryCPICHInfo*>(items[0]) = PrimaryCPICHInfo; }
};

typedef SequenceOf<UERXTXReportEntry, CONSTRAINED, 1, maxRL> UERXTXReportEntryList;

typedef Integer<CONSTRAINED, 768, 1791> UERXTXTimeDifferenceType1;

typedef Integer<CONSTRAINED, 0, 8191> UERXTXTimeDifferenceType2;

class UERXTXTimeDifferenceType2Info : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERXTXTimeDifferenceType2Info(): Sequence(&theInfo) {}

	void setUeRXTXTimeDifferenceType2(const UERXTXTimeDifferenceType2& UeRXTXTimeDifferenceType2) { *static_cast<UERXTXTimeDifferenceType2*>(items[0]) = UeRXTXTimeDifferenceType2; }
};

typedef Integer<CONSTRAINED, 768, 1280> UERXTXTimeDifferenceThreshold;

typedef BitString<CONSTRAINED, 7, 7> UEPositioningAccuracy;

typedef BitString<EXTCONSTRAINED, 1, 1> UEPositioningCipherParametersCipheringKeyFlag;

class UEPositioningCipherParameters : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningCipherParameters(): Sequence(&theInfo) {}

	void setUEPositioningCipherParametersCipheringKeyFlag(const UEPositioningCipherParametersCipheringKeyFlag& UEPositioningCipherParametersCipheringKeyFlag) { *static_cast<UEPositioningCipherParametersCipheringKeyFlag*>(items[0]) = UEPositioningCipherParametersCipheringKeyFlag; }
};

class UEPositioningDGANSSCorrections : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningDGANSSCorrections(): Sequence(&theInfo) {}

	void setDganssInfoList(const DGANSSInfoList& DganssInfoList) { *static_cast<DGANSSInfoList*>(items[0]) = DganssInfoList; }
};

class UEPositioningDGANSSCorrectionsr9 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningDGANSSCorrectionsr9(): Sequence(&theInfo) {}

	void setDganssInfoList(const DGANSSInfoListr9& DganssInfoList) { *static_cast<DGANSSInfoListr9*>(items[0]) = DganssInfoList; }
};

enum UEPositioningErrorCauseValues {
	NotEnoughOTDOACells,_UEPositioningErrorCause = 0,
};
typedef Enumerated<CONSTRAINED, 0> UEPositioningErrorCause;

class UEPositioningError : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningError(): Sequence(&theInfo) {}

	void setErrorReason(const UEPositioningErrorCause& ErrorReason) { *static_cast<UEPositioningErrorCause*>(items[0]) = ErrorReason; }
};

enum UEPositioningErrorCauser7Values {
	NotEnoughOTDOACells,_UEPositioningErrorCauser7 = 0,
};
typedef Enumerated<CONSTRAINED, 0> UEPositioningErrorCauser7;

class UEPositioningErrorr7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningErrorr7(): Sequence(&theInfo) {}

	void setErrorReason(const UEPositioningErrorCauser7& ErrorReason) { *static_cast<UEPositioningErrorCauser7*>(items[0]) = ErrorReason; }
};

class UEPositioningEventParam : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningEventParam(): Sequence(&theInfo) {}

	void setReportingAmount(const ReportingAmount& ReportingAmount) { *static_cast<ReportingAmount*>(items[0]) = ReportingAmount; }
};

class UEPositioningEventParamr7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningEventParamr7(): Sequence(&theInfo) {}

	void setReportingAmount(const ReportingAmount& ReportingAmount) { *static_cast<ReportingAmount*>(items[0]) = ReportingAmount; }
};

typedef SequenceOf<UEPositioningEventParam, CONSTRAINED, 1, maxMeasEvent> UEPositioningEventParamList;

typedef SequenceOf<UEPositioningEventParamr7, CONSTRAINED, 1, maxMeasEvent> UEPositioningEventParamListr7;

class UEPositioningEventSpecificInfo : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	UEPositioningEventSpecificInfo(): Choice(&theInfo) {}
};

class UEPositioningEventSpecificInfor7 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	UEPositioningEventSpecificInfor7(): Choice(&theInfo) {}
};

typedef BitString<EXTCONSTRAINED, 16, 16> UTCmodelSet1UtcA0;

class UTCmodelSet1 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UTCmodelSet1(): Sequence(&theInfo) {}

	void setUTCmodelSet1UtcA0(const UTCmodelSet1UtcA0& UTCmodelSet1UtcA0) { *static_cast<UTCmodelSet1UtcA0*>(items[0]) = UTCmodelSet1UtcA0; }
};

class UEPositioningGANSSAddUTCModels : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningGANSSAddUTCModels(): Sequence(&theInfo) {}

	void setUtcModel1(const UTCmodelSet1& UtcModel1) { *static_cast<UTCmodelSet1*>(items[0]) = UtcModel1; }
};

typedef Integer<EXTCONSTRAINED, 0, 255> UEPositioningGANSSAlmanacGansswknumber;

class UEPositioningGANSSAlmanac : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningGANSSAlmanac(): Sequence(&theInfo) {}

	void setUEPositioningGANSSAlmanacGansswknumber(const UEPositioningGANSSAlmanacGansswknumber& UEPositioningGANSSAlmanacGansswknumber) { *static_cast<UEPositioningGANSSAlmanacGansswknumber*>(items[0]) = UEPositioningGANSSAlmanacGansswknumber; }
};

class UEPositioningGANSSAlmanacv860ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningGANSSAlmanacv860ext(): Sequence(&theInfo) {}

	void setAlmkeplerianNAVAlmanac(const ALMNAVKeplerianSet& AlmkeplerianNAVAlmanac) { *static_cast<ALMNAVKeplerianSet*>(items[0]) = AlmkeplerianNAVAlmanac; }
};

typedef Integer<EXTCONSTRAINED, 0, 255> UEPositioningGANSSAlmanacr8Gansswknumber;

class UEPositioningGANSSAlmanacr8 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningGANSSAlmanacr8(): Sequence(&theInfo) {}

	void setUEPositioningGANSSAlmanacr8Gansswknumber(const UEPositioningGANSSAlmanacr8Gansswknumber& UEPositioningGANSSAlmanacr8Gansswknumber) { *static_cast<UEPositioningGANSSAlmanacr8Gansswknumber*>(items[0]) = UEPositioningGANSSAlmanacr8Gansswknumber; }
};

typedef Boolean UEPositioningGANSSAdditionalAssistanceDataRequestGanssReferenceTime;

class UEPositioningGANSSAdditionalAssistanceDataRequest : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningGANSSAdditionalAssistanceDataRequest(): Sequence(&theInfo) {}

	void setUEPositioningGANSSAdditionalAssistanceDataRequestGanssReferenceTime(const UEPositioningGANSSAdditionalAssistanceDataRequestGanssReferenceTime& UEPositioningGANSSAdditionalAssistanceDataRequestGanssReferenceTime) { *static_cast<UEPositioningGANSSAdditionalAssistanceDataRequestGanssReferenceTime*>(items[0]) = UEPositioningGANSSAdditionalAssistanceDataRequestGanssReferenceTime; }
};

typedef BitString<EXTCONSTRAINED, 2, 2> UEPositioningGANSSAddIonoModelDataID;

class UEPositioningGANSSAddIonoModel : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningGANSSAddIonoModel(): Sequence(&theInfo) {}

	void setUEPositioningGANSSAddIonoModelDataID(const UEPositioningGANSSAddIonoModelDataID& UEPositioningGANSSAddIonoModelDataID) { *static_cast<UEPositioningGANSSAddIonoModelDataID*>(items[0]) = UEPositioningGANSSAddIonoModelDataID; }
};

enum UEPositioningGANSSAddNavigationModelsnon_broadcastIndicationValues {
	true_UEPositioningGANSSAddNavigationModelsnon_broadcastIndication = 0,
};
typedef Enumerated<CONSTRAINED, 0> UEPositioningGANSSAddNavigationModelsnon_broadcastIndication;

class UEPositioningGANSSAddNavigationModels : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningGANSSAddNavigationModels(): Sequence(&theInfo) {}

	void setUEPositioningGANSSAddNavigationModelsnon_broadcastIndication(const UEPositioningGANSSAddNavigationModelsnon_broadcastIndication& UEPositioningGANSSAddNavigationModelsnon_broadcastIndication) { *static_cast<UEPositioningGANSSAddNavigationModelsnon_broadcastIndication*>(items[0]) = UEPositioningGANSSAddNavigationModelsnon_broadcastIndication; }
};

typedef Integer<EXTCONSTRAINED, 0, 8191> UEPositioningGANSSReferenceTimeGanssDay;

class UEPositioningGANSSReferenceTime : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningGANSSReferenceTime(): Sequence(&theInfo) {}

	void setUEPositioningGANSSReferenceTimeGanssDay(const UEPositioningGANSSReferenceTimeGanssDay& UEPositioningGANSSReferenceTimeGanssDay) { *static_cast<UEPositioningGANSSReferenceTimeGanssDay*>(items[0]) = UEPositioningGANSSReferenceTimeGanssDay; }
};

class UEPositioningGANSSAssistanceData : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningGANSSAssistanceData(): Sequence(&theInfo) {}

	void setUepositioningGANSSReferenceTime(const UEPositioningGANSSReferenceTime& UepositioningGANSSReferenceTime) { *static_cast<UEPositioningGANSSReferenceTime*>(items[0]) = UepositioningGANSSReferenceTime; }
};

class UEPositioningGANSSAssistanceDatav860ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningGANSSAssistanceDatav860ext(): Sequence(&theInfo) {}

	void setUePositioningGanssAddIonoModel(const UEPositioningGANSSAddIonoModel& UePositioningGanssAddIonoModel) { *static_cast<UEPositioningGANSSAddIonoModel*>(items[0]) = UePositioningGanssAddIonoModel; }
};

class UEPositioningGANSSAssistanceDatar8 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningGANSSAssistanceDatar8(): Sequence(&theInfo) {}

	void setUepositioningGANSSReferenceTime(const UEPositioningGANSSReferenceTime& UepositioningGANSSReferenceTime) { *static_cast<UEPositioningGANSSReferenceTime*>(items[0]) = UepositioningGANSSReferenceTime; }
};

class UEPositioningGANSSAssistanceDatar9 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningGANSSAssistanceDatar9(): Sequence(&theInfo) {}

	void setUepositioningGANSSReferenceTime(const UEPositioningGANSSReferenceTime& UepositioningGANSSReferenceTime) { *static_cast<UEPositioningGANSSReferenceTime*>(items[0]) = UepositioningGANSSReferenceTime; }
};

class UEPositioningGANSSAssistanceDatav920ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningGANSSAssistanceDatav920ext(): Sequence(&theInfo) {}

	void setGanssGenericDataList(const GANSSGenericDataListv920ext& GanssGenericDataList) { *static_cast<GANSSGenericDataListv920ext*>(items[0]) = GanssGenericDataList; }
};

class UEPositioningGANSSAuxiliaryInfo : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	UEPositioningGANSSAuxiliaryInfo(): Choice(&theInfo) {}
};

class UEPositioningGANSSClockModel : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningGANSSClockModel(): Sequence(&theInfo) {}

	void setSatelliteclockmodelList(const SatelliteclockmodelList& SatelliteclockmodelList) { *static_cast<SatelliteclockmodelList*>(items[0]) = SatelliteclockmodelList; }
};

class UEPositioningGANSSAddClockModels : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningGANSSAddClockModels(): Sequence(&theInfo) {}

	void setNavClockModel(const NAVclockModel& NavClockModel) { *static_cast<NAVclockModel*>(items[0]) = NavClockModel; }
};

class UEPositioningGANSSAddOrbitModels : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningGANSSAddOrbitModels(): Sequence(&theInfo) {}

	void setNavKeplerianSet(const NavModelNAVKeplerianSet& NavKeplerianSet) { *static_cast<NavModelNAVKeplerianSet*>(items[0]) = NavKeplerianSet; }
};

class UEPositioningGANSSData : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningGANSSData(): Sequence(&theInfo) {}

	void setGanssDataCipheringInfo(const UEPositioningCipherParameters& GanssDataCipheringInfo) { *static_cast<UEPositioningCipherParameters*>(items[0]) = GanssDataCipheringInfo; }
};

typedef Integer<EXTCONSTRAINED, 0, 59> UEPositioningGANSSDataBitAssistanceGansstod;

class UEPositioningGANSSDataBitAssistance : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningGANSSDataBitAssistance(): Sequence(&theInfo) {}

	void setUEPositioningGANSSDataBitAssistanceGansstod(const UEPositioningGANSSDataBitAssistanceGansstod& UEPositioningGANSSDataBitAssistanceGansstod) { *static_cast<UEPositioningGANSSDataBitAssistanceGansstod*>(items[0]) = UEPositioningGANSSDataBitAssistanceGansstod; }
};

typedef BitString<EXTCONSTRAINED, 16, 16> UEPositioningGANSSEarthOrientParaTeop;

class UEPositioningGANSSEarthOrientPara : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningGANSSEarthOrientPara(): Sequence(&theInfo) {}

	void setUEPositioningGANSSEarthOrientParaTeop(const UEPositioningGANSSEarthOrientParaTeop& UEPositioningGANSSEarthOrientParaTeop) { *static_cast<UEPositioningGANSSEarthOrientParaTeop*>(items[0]) = UEPositioningGANSSEarthOrientParaTeop; }
};

typedef BitString<EXTCONSTRAINED, 12, 12> UEPositioningGANSSIonosphericModelAlphazeroionos;

class UEPositioningGANSSIonosphericModel : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningGANSSIonosphericModel(): Sequence(&theInfo) {}

	void setUEPositioningGANSSIonosphericModelAlphazeroionos(const UEPositioningGANSSIonosphericModelAlphazeroionos& UEPositioningGANSSIonosphericModelAlphazeroionos) { *static_cast<UEPositioningGANSSIonosphericModelAlphazeroionos*>(items[0]) = UEPositioningGANSSIonosphericModelAlphazeroionos; }
};

typedef Integer<EXTCONSTRAINED, 0, 80> UTRANGANSSReferenceTimeUeGANSSTimingOfCellFramesMsPart;

class UTRANGANSSReferenceTimeUeGANSSTimingOfCellFrames : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UTRANGANSSReferenceTimeUeGANSSTimingOfCellFrames(): Sequence(&theInfo) {}

	void setUTRANGANSSReferenceTimeUeGANSSTimingOfCellFramesMsPart(const UTRANGANSSReferenceTimeUeGANSSTimingOfCellFramesMsPart& UTRANGANSSReferenceTimeUeGANSSTimingOfCellFramesMsPart) { *static_cast<UTRANGANSSReferenceTimeUeGANSSTimingOfCellFramesMsPart*>(items[0]) = UTRANGANSSReferenceTimeUeGANSSTimingOfCellFramesMsPart; }
};

class UTRANGANSSReferenceTime : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UTRANGANSSReferenceTime(): Sequence(&theInfo) {}

	void setUTRANGANSSReferenceTimeUeGANSSTimingOfCellFrames(const UTRANGANSSReferenceTimeUeGANSSTimingOfCellFrames& UTRANGANSSReferenceTimeUeGANSSTimingOfCellFrames) { *static_cast<UTRANGANSSReferenceTimeUeGANSSTimingOfCellFrames*>(items[0]) = UTRANGANSSReferenceTimeUeGANSSTimingOfCellFrames; }
};

class UEPositioningGANSSMeasuredResultsReferenceTime : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	UEPositioningGANSSMeasuredResultsReferenceTime(): Choice(&theInfo) {}
};

class UEPositioningGANSSMeasuredResults : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningGANSSMeasuredResults(): Sequence(&theInfo) {}

	void setUEPositioningGANSSMeasuredResultsReferenceTime(const UEPositioningGANSSMeasuredResultsReferenceTime& UEPositioningGANSSMeasuredResultsReferenceTime) { *static_cast<UEPositioningGANSSMeasuredResultsReferenceTime*>(items[0]) = UEPositioningGANSSMeasuredResultsReferenceTime; }
};

enum UEPositioningGANSSNavigationModelnon_broadcastIndicationValues {
	true_UEPositioningGANSSNavigationModelnon_broadcastIndication = 0,
};
typedef Enumerated<CONSTRAINED, 0> UEPositioningGANSSNavigationModelnon_broadcastIndication;

class UEPositioningGANSSNavigationModel : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningGANSSNavigationModel(): Sequence(&theInfo) {}

	void setUEPositioningGANSSNavigationModelnon_broadcastIndication(const UEPositioningGANSSNavigationModelnon_broadcastIndication& UEPositioningGANSSNavigationModelnon_broadcastIndication) { *static_cast<UEPositioningGANSSNavigationModelnon_broadcastIndication*>(items[0]) = UEPositioningGANSSNavigationModelnon_broadcastIndication; }
};

class UEPositioningGANSSOrbitModel : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningGANSSOrbitModel(): Sequence(&theInfo) {}

	void setKeplerianParameters(const KeplerianParameters& KeplerianParameters) { *static_cast<KeplerianParameters*>(items[0]) = KeplerianParameters; }
};

class UEPositioningGANSSRealTimeIntegrity : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	UEPositioningGANSSRealTimeIntegrity(): Sequence(&theInfo) {}

};

typedef SequenceOf<UEPositioningGANSSTimeModel, CONSTRAINED, 1, maxGANSS_1> UEPositioningGANSSTimeModels;

typedef BitString<EXTCONSTRAINED, 24, 24> UEPositioningGANSSUTCModelAoneutc;

class UEPositioningGANSSUTCModel : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningGANSSUTCModel(): Sequence(&theInfo) {}

	void setUEPositioningGANSSUTCModelAoneutc(const UEPositioningGANSSUTCModelAoneutc& UEPositioningGANSSUTCModelAoneutc) { *static_cast<UEPositioningGANSSUTCModelAoneutc*>(items[0]) = UEPositioningGANSSUTCModelAoneutc; }
};

class UEPositioningGPSAcquisitionAssistance : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningGPSAcquisitionAssistance(): Sequence(&theInfo) {}

	void setGpsReferenceTime(const GPSTOW1msec& GpsReferenceTime) { *static_cast<GPSTOW1msec*>(items[0]) = GpsReferenceTime; }
};

typedef Integer<CONSTRAINED, 0, 127> UEPositioningGPSReferenceTimeUncertainty;

class UEPositioningGPSAcquisitionAssistancev770ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningGPSAcquisitionAssistancev770ext(): Sequence(&theInfo) {}

	void setUePositioningGPSReferenceTimeUncertainty(const UEPositioningGPSReferenceTimeUncertainty& UePositioningGPSReferenceTimeUncertainty) { *static_cast<UEPositioningGPSReferenceTimeUncertainty*>(items[0]) = UePositioningGPSReferenceTimeUncertainty; }
};

class UEPositioningGPSAcquisitionAssistancer7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningGPSAcquisitionAssistancer7(): Sequence(&theInfo) {}

	void setGpsReferenceTime(const GPSTOW1msec& GpsReferenceTime) { *static_cast<GPSTOW1msec*>(items[0]) = GpsReferenceTime; }
};

typedef Boolean UEPositioningGPSAdditionalAssistanceDataRequestAlmanacRequest;

class UEPositioningGPSAdditionalAssistanceDataRequest : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningGPSAdditionalAssistanceDataRequest(): Sequence(&theInfo) {}

	void setUEPositioningGPSAdditionalAssistanceDataRequestAlmanacRequest(const UEPositioningGPSAdditionalAssistanceDataRequestAlmanacRequest& UEPositioningGPSAdditionalAssistanceDataRequestAlmanacRequest) { *static_cast<UEPositioningGPSAdditionalAssistanceDataRequestAlmanacRequest*>(items[0]) = UEPositioningGPSAdditionalAssistanceDataRequestAlmanacRequest; }
};

typedef BitString<EXTCONSTRAINED, 8, 8> UEPositioningGPSAlmanacWna;

class UEPositioningGPSAlmanac : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningGPSAlmanac(): Sequence(&theInfo) {}

	void setUEPositioningGPSAlmanacWna(const UEPositioningGPSAlmanacWna& UEPositioningGPSAlmanacWna) { *static_cast<UEPositioningGPSAlmanacWna*>(items[0]) = UEPositioningGPSAlmanacWna; }
};

typedef Integer<EXTCONSTRAINED, 0, 1023> UEPositioningGPSReferenceTimeGpsWeek;

class UEPositioningGPSReferenceTime : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningGPSReferenceTime(): Sequence(&theInfo) {}

	void setUEPositioningGPSReferenceTimeGpsWeek(const UEPositioningGPSReferenceTimeGpsWeek& UEPositioningGPSReferenceTimeGpsWeek) { *static_cast<UEPositioningGPSReferenceTimeGpsWeek*>(items[0]) = UEPositioningGPSReferenceTimeGpsWeek; }
};

class UEPositioningGPSAssistanceData : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningGPSAssistanceData(): Sequence(&theInfo) {}

	void setUepositioningGPSReferenceTime(const UEPositioningGPSReferenceTime& UepositioningGPSReferenceTime) { *static_cast<UEPositioningGPSReferenceTime*>(items[0]) = UepositioningGPSReferenceTime; }
};

class UEPositioningGPSReferenceTimev770ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningGPSReferenceTimev770ext(): Sequence(&theInfo) {}

	void setUePositioningGPSReferenceTimeUncertainty(const UEPositioningGPSReferenceTimeUncertainty& UePositioningGPSReferenceTimeUncertainty) { *static_cast<UEPositioningGPSReferenceTimeUncertainty*>(items[0]) = UePositioningGPSReferenceTimeUncertainty; }
};

class UEPositioningGPSAssistanceDatav770ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningGPSAssistanceDatav770ext(): Sequence(&theInfo) {}

	void setUepositioningGPSReferenceTime(const UEPositioningGPSReferenceTimev770ext& UepositioningGPSReferenceTime) { *static_cast<UEPositioningGPSReferenceTimev770ext*>(items[0]) = UepositioningGPSReferenceTime; }
};

typedef Integer<EXTCONSTRAINED, 0, 1023> UEPositioningGPSReferenceTimer7GpsWeek;

class UEPositioningGPSReferenceTimer7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningGPSReferenceTimer7(): Sequence(&theInfo) {}

	void setUEPositioningGPSReferenceTimer7GpsWeek(const UEPositioningGPSReferenceTimer7GpsWeek& UEPositioningGPSReferenceTimer7GpsWeek) { *static_cast<UEPositioningGPSReferenceTimer7GpsWeek*>(items[0]) = UEPositioningGPSReferenceTimer7GpsWeek; }
};

class UEPositioningGPSAssistanceDatar7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningGPSAssistanceDatar7(): Sequence(&theInfo) {}

	void setUepositioningGPSReferenceTime(const UEPositioningGPSReferenceTimer7& UepositioningGPSReferenceTime) { *static_cast<UEPositioningGPSReferenceTimer7*>(items[0]) = UepositioningGPSReferenceTime; }
};

class UEPositioningGPSAssistanceDatar9 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningGPSAssistanceDatar9(): Sequence(&theInfo) {}

	void setUepositioningGPSReferenceTime(const UEPositioningGPSReferenceTimer7& UepositioningGPSReferenceTime) { *static_cast<UEPositioningGPSReferenceTimer7*>(items[0]) = UepositioningGPSReferenceTime; }
};

class UEPositioningGPSDGPSCorrectionsv920ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningGPSDGPSCorrectionsv920ext(): Sequence(&theInfo) {}

	void setDgpsCorrectionSatInfoList(const DGPSCorrectionSatInfoListv920ext& DgpsCorrectionSatInfoList) { *static_cast<DGPSCorrectionSatInfoListv920ext*>(items[0]) = DgpsCorrectionSatInfoList; }
};

class UEPositioningGPSAssistanceDatav920ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningGPSAssistanceDatav920ext(): Sequence(&theInfo) {}

	void setUepositioningGPSDGPSCorrections(const UEPositioningGPSDGPSCorrectionsv920ext& UepositioningGPSDGPSCorrections) { *static_cast<UEPositioningGPSDGPSCorrectionsv920ext*>(items[0]) = UepositioningGPSDGPSCorrections; }
};

class UEPositioningGPSDGPSCorrections : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningGPSDGPSCorrections(): Sequence(&theInfo) {}

	void setGpsTOW(const GPSTOW1sec& GpsTOW) { *static_cast<GPSTOW1sec*>(items[0]) = GpsTOW; }
};

class UEPositioningGPSDGPSCorrectionsr9 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningGPSDGPSCorrectionsr9(): Sequence(&theInfo) {}

	void setGpsTOW(const GPSTOW1sec& GpsTOW) { *static_cast<GPSTOW1sec*>(items[0]) = GpsTOW; }
};

typedef BitString<EXTCONSTRAINED, 8, 8> UEPositioningGPSIonosphericModelAlpha0;

class UEPositioningGPSIonosphericModel : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningGPSIonosphericModel(): Sequence(&theInfo) {}

	void setUEPositioningGPSIonosphericModelAlpha0(const UEPositioningGPSIonosphericModelAlpha0& UEPositioningGPSIonosphericModelAlpha0) { *static_cast<UEPositioningGPSIonosphericModelAlpha0*>(items[0]) = UEPositioningGPSIonosphericModelAlpha0; }
};

typedef Integer<EXTCONSTRAINED, 0,  16383> UTRANGPSReferenceTimeResultUeGPSTimingOfCellMspart;

class UTRANGPSReferenceTimeResultUeGPSTimingOfCell : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UTRANGPSReferenceTimeResultUeGPSTimingOfCell(): Sequence(&theInfo) {}

	void setUTRANGPSReferenceTimeResultUeGPSTimingOfCellMspart(const UTRANGPSReferenceTimeResultUeGPSTimingOfCellMspart& UTRANGPSReferenceTimeResultUeGPSTimingOfCellMspart) { *static_cast<UTRANGPSReferenceTimeResultUeGPSTimingOfCellMspart*>(items[0]) = UTRANGPSReferenceTimeResultUeGPSTimingOfCellMspart; }
};

class UTRANGPSReferenceTimeResult : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UTRANGPSReferenceTimeResult(): Sequence(&theInfo) {}

	void setUTRANGPSReferenceTimeResultUeGPSTimingOfCell(const UTRANGPSReferenceTimeResultUeGPSTimingOfCell& UTRANGPSReferenceTimeResultUeGPSTimingOfCell) { *static_cast<UTRANGPSReferenceTimeResultUeGPSTimingOfCell*>(items[0]) = UTRANGPSReferenceTimeResultUeGPSTimingOfCell; }
};

class UEPositioningGPSMeasurementResultsReferenceTime : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	UEPositioningGPSMeasurementResultsReferenceTime(): Choice(&theInfo) {}
};

class UEPositioningGPSMeasurementResults : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningGPSMeasurementResults(): Sequence(&theInfo) {}

	void setUEPositioningGPSMeasurementResultsReferenceTime(const UEPositioningGPSMeasurementResultsReferenceTime& UEPositioningGPSMeasurementResultsReferenceTime) { *static_cast<UEPositioningGPSMeasurementResultsReferenceTime*>(items[0]) = UEPositioningGPSMeasurementResultsReferenceTime; }
};

class UEPositioningGPSMeasurementResultsv770ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningGPSMeasurementResultsv770ext(): Sequence(&theInfo) {}

	void setUePositioningGPSReferenceTimeUncertainty(const UEPositioningGPSReferenceTimeUncertainty& UePositioningGPSReferenceTimeUncertainty) { *static_cast<UEPositioningGPSReferenceTimeUncertainty*>(items[0]) = UePositioningGPSReferenceTimeUncertainty; }
};

class UEPositioningGPSNavigationModel : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningGPSNavigationModel(): Sequence(&theInfo) {}

	void setNavigationModelSatInfoList(const NavigationModelSatInfoList& NavigationModelSatInfoList) { *static_cast<NavigationModelSatInfoList*>(items[0]) = NavigationModelSatInfoList; }
};

typedef Integer<EXTCONSTRAINED, 0, 1023> UEPositioningGPSNavModelAddDataReqGpsWeek;

class UEPositioningGPSNavModelAddDataReq : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningGPSNavModelAddDataReq(): Sequence(&theInfo) {}

	void setUEPositioningGPSNavModelAddDataReqGpsWeek(const UEPositioningGPSNavModelAddDataReqGpsWeek& UEPositioningGPSNavModelAddDataReqGpsWeek) { *static_cast<UEPositioningGPSNavModelAddDataReqGpsWeek*>(items[0]) = UEPositioningGPSNavModelAddDataReqGpsWeek; }
};

class UEPositioningGPSReferenceCellInfoModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	UEPositioningGPSReferenceCellInfoModeSpecificInfo(): Choice(&theInfo) {}
};

class UEPositioningGPSReferenceCellInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningGPSReferenceCellInfo(): Sequence(&theInfo) {}

	void setUEPositioningGPSReferenceCellInfoModeSpecificInfo(const UEPositioningGPSReferenceCellInfoModeSpecificInfo& UEPositioningGPSReferenceCellInfoModeSpecificInfo) { *static_cast<UEPositioningGPSReferenceCellInfoModeSpecificInfo*>(items[0]) = UEPositioningGPSReferenceCellInfoModeSpecificInfo; }
};

typedef BitString<EXTCONSTRAINED, 24, 24> UEPositioningGPSUTCModelA1;

class UEPositioningGPSUTCModel : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningGPSUTCModel(): Sequence(&theInfo) {}

	void setUEPositioningGPSUTCModelA1(const UEPositioningGPSUTCModelA1& UEPositioningGPSUTCModelA1) { *static_cast<UEPositioningGPSUTCModelA1*>(items[0]) = UEPositioningGPSUTCModelA1; }
};

class UEPositioningIPDLParameters : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningIPDLParameters(): Sequence(&theInfo) {}

	void setIpSpacing(const IPSpacing& IpSpacing) { *static_cast<IPSpacing*>(items[0]) = IpSpacing; }
};

class UEPositioningIPDLParametersr4ModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningIPDLParametersr4ModeSpecificInfoFdd(): Sequence(&theInfo) {}

	void setIpSpacing(const IPSpacing& IpSpacing) { *static_cast<IPSpacing*>(items[0]) = IpSpacing; }
};

class UEPositioningIPDLParametersr4ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	UEPositioningIPDLParametersr4ModeSpecificInfo(): Choice(&theInfo) {}
};

class UEPositioningIPDLParametersr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningIPDLParametersr4(): Sequence(&theInfo) {}

	void setUEPositioningIPDLParametersr4ModeSpecificInfo(const UEPositioningIPDLParametersr4ModeSpecificInfo& UEPositioningIPDLParametersr4ModeSpecificInfo) { *static_cast<UEPositioningIPDLParametersr4ModeSpecificInfo*>(items[0]) = UEPositioningIPDLParametersr4ModeSpecificInfo; }
};

class UEPositioningIPDLParametersTDDr4ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningIPDLParametersTDDr4ext(): Sequence(&theInfo) {}

	void setIpSpacing(const IPSpacingTDD& IpSpacing) { *static_cast<IPSpacingTDD*>(items[0]) = IpSpacing; }
};

typedef Integer<EXTCONSTRAINED, 0, 4095> UEPositioningOTDOAMeasurementSfn;

class UEPositioningOTDOAMeasurement : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningOTDOAMeasurement(): Sequence(&theInfo) {}

	void setUEPositioningOTDOAMeasurementSfn(const UEPositioningOTDOAMeasurementSfn& UEPositioningOTDOAMeasurementSfn) { *static_cast<UEPositioningOTDOAMeasurementSfn*>(items[0]) = UEPositioningOTDOAMeasurementSfn; }
};

class UEPositioningMeasuredResults : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningMeasuredResults(): Sequence(&theInfo) {}

	void setUepositioningOTDOAMeasurement(const UEPositioningOTDOAMeasurement& UepositioningOTDOAMeasurement) { *static_cast<UEPositioningOTDOAMeasurement*>(items[0]) = UepositioningOTDOAMeasurement; }
};

class UEPositioningMeasuredResultsv770ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningMeasuredResultsv770ext(): Sequence(&theInfo) {}

	void setUepositioningPositionEstimateInfo(const UEPositioningPositionEstimateInfov770ext& UepositioningPositionEstimateInfo) { *static_cast<UEPositioningPositionEstimateInfov770ext*>(items[0]) = UepositioningPositionEstimateInfo; }
};

enum UEPositioningMethodTypeValues {
	UeAssisted,_UEPositioningMethodType = 0,
};
typedef Enumerated<CONSTRAINED, 0> UEPositioningMethodType;

class UEPositioningReportingQuantity : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningReportingQuantity(): Sequence(&theInfo) {}

	void setMethodType(const UEPositioningMethodType& MethodType) { *static_cast<UEPositioningMethodType*>(items[0]) = MethodType; }
};

class UEPositioningMeasurement : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningMeasurement(): Sequence(&theInfo) {}

	void setUepositioningReportingQuantity(const UEPositioningReportingQuantity& UepositioningReportingQuantity) { *static_cast<UEPositioningReportingQuantity*>(items[0]) = UepositioningReportingQuantity; }
};

class UEPositioningReportingQuantityv390ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningReportingQuantityv390ext(): Sequence(&theInfo) {}

	void setVerticalAccuracy(const UEPositioningAccuracy& VerticalAccuracy) { *static_cast<UEPositioningAccuracy*>(items[0]) = VerticalAccuracy; }
};

class UEPositioningMeasurementv390ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningMeasurementv390ext(): Sequence(&theInfo) {}

	void setUepositioningReportingQuantityv390ext(const UEPositioningReportingQuantityv390ext& UepositioningReportingQuantityv390ext) { *static_cast<UEPositioningReportingQuantityv390ext*>(items[0]) = UepositioningReportingQuantityv390ext; }
};

class UEPositioningReportingQuantityr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningReportingQuantityr4(): Sequence(&theInfo) {}

	void setMethodType(const UEPositioningMethodType& MethodType) { *static_cast<UEPositioningMethodType*>(items[0]) = MethodType; }
};

class UEPositioningMeasurementr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningMeasurementr4(): Sequence(&theInfo) {}

	void setUepositioningReportingQuantity(const UEPositioningReportingQuantityr4& UepositioningReportingQuantity) { *static_cast<UEPositioningReportingQuantityr4*>(items[0]) = UepositioningReportingQuantity; }
};

class UEPositioningReportingQuantityr7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningReportingQuantityr7(): Sequence(&theInfo) {}

	void setMethodType(const UEPositioningMethodType& MethodType) { *static_cast<UEPositioningMethodType*>(items[0]) = MethodType; }
};

class UEPositioningMeasurementr7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningMeasurementr7(): Sequence(&theInfo) {}

	void setUepositioningReportingQuantity(const UEPositioningReportingQuantityr7& UepositioningReportingQuantity) { *static_cast<UEPositioningReportingQuantityr7*>(items[0]) = UepositioningReportingQuantity; }
};

class UEPositioningReportingQuantityr8 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningReportingQuantityr8(): Sequence(&theInfo) {}

	void setMethodType(const UEPositioningMethodType& MethodType) { *static_cast<UEPositioningMethodType*>(items[0]) = MethodType; }
};

class UEPositioningMeasurementr8 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningMeasurementr8(): Sequence(&theInfo) {}

	void setUepositioningReportingQuantity(const UEPositioningReportingQuantityr8& UepositioningReportingQuantity) { *static_cast<UEPositioningReportingQuantityr8*>(items[0]) = UepositioningReportingQuantity; }
};

class UEPositioningMeasurementr9 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningMeasurementr9(): Sequence(&theInfo) {}

	void setUepositioningReportingQuantity(const UEPositioningReportingQuantityr8& UepositioningReportingQuantity) { *static_cast<UEPositioningReportingQuantityr8*>(items[0]) = UepositioningReportingQuantity; }
};

class UEPositioningMeasurementv920ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningMeasurementv920ext(): Sequence(&theInfo) {}

	void setUepositioningGPSAssistanceData(const UEPositioningGPSAssistanceDatav920ext& UepositioningGPSAssistanceData) { *static_cast<UEPositioningGPSAssistanceDatav920ext*>(items[0]) = UepositioningGPSAssistanceData; }
};

class UEPositioningPositionEstimateInfoReferenceTime : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	UEPositioningPositionEstimateInfoReferenceTime(): Choice(&theInfo) {}
};

class UEPositioningPositionEstimateInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningPositionEstimateInfo(): Sequence(&theInfo) {}

	void setUEPositioningPositionEstimateInfoReferenceTime(const UEPositioningPositionEstimateInfoReferenceTime& UEPositioningPositionEstimateInfoReferenceTime) { *static_cast<UEPositioningPositionEstimateInfoReferenceTime*>(items[0]) = UEPositioningPositionEstimateInfoReferenceTime; }
};

class UEPositioningMeasurementEventResults : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	UEPositioningMeasurementEventResults(): Choice(&theInfo) {}
};

enum UEPositioningMeasurementIntervalValues {
	E5,_UEPositioningMeasurementInterval = 0,
};
typedef Enumerated<CONSTRAINED, 0> UEPositioningMeasurementInterval;

typedef Integer<EXTCONSTRAINED, 0, 4095> UEPositioningOTDOAReferenceCellInfoSfn;

class UEPositioningOTDOAReferenceCellInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningOTDOAReferenceCellInfo(): Sequence(&theInfo) {}

	void setUEPositioningOTDOAReferenceCellInfoSfn(const UEPositioningOTDOAReferenceCellInfoSfn& UEPositioningOTDOAReferenceCellInfoSfn) { *static_cast<UEPositioningOTDOAReferenceCellInfoSfn*>(items[0]) = UEPositioningOTDOAReferenceCellInfoSfn; }
};

class UEPositioningOTDOAAssistanceData : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningOTDOAAssistanceData(): Sequence(&theInfo) {}

	void setUepositioningOTDOAReferenceCellInfo(const UEPositioningOTDOAReferenceCellInfo& UepositioningOTDOAReferenceCellInfo) { *static_cast<UEPositioningOTDOAReferenceCellInfo*>(items[0]) = UepositioningOTDOAReferenceCellInfo; }
};

typedef Integer<EXTCONSTRAINED, 0, 4095> UEPositioningOTDOAReferenceCellInfor4Sfn;

class UEPositioningOTDOAReferenceCellInfor4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningOTDOAReferenceCellInfor4(): Sequence(&theInfo) {}

	void setUEPositioningOTDOAReferenceCellInfor4Sfn(const UEPositioningOTDOAReferenceCellInfor4Sfn& UEPositioningOTDOAReferenceCellInfor4Sfn) { *static_cast<UEPositioningOTDOAReferenceCellInfor4Sfn*>(items[0]) = UEPositioningOTDOAReferenceCellInfor4Sfn; }
};

class UEPositioningOTDOAAssistanceDatar4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningOTDOAAssistanceDatar4(): Sequence(&theInfo) {}

	void setUepositioningOTDOAReferenceCellInfo(const UEPositioningOTDOAReferenceCellInfor4& UepositioningOTDOAReferenceCellInfo) { *static_cast<UEPositioningOTDOAReferenceCellInfor4*>(items[0]) = UepositioningOTDOAReferenceCellInfo; }
};

class UEPositioningOTDOAAssistanceDatar4ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningOTDOAAssistanceDatar4ext(): Sequence(&theInfo) {}

	void setUePositioningIPDLParametersTDDr4ext(const UEPositioningIPDLParametersTDDr4ext& UePositioningIPDLParametersTDDr4ext) { *static_cast<UEPositioningIPDLParametersTDDr4ext*>(items[0]) = UePositioningIPDLParametersTDDr4ext; }
};

typedef Integer<EXTCONSTRAINED, 0, 4095> UEPositioningOTDOAReferenceCellInfoUEBSfn;

class UEPositioningOTDOAReferenceCellInfoUEB : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningOTDOAReferenceCellInfoUEB(): Sequence(&theInfo) {}

	void setUEPositioningOTDOAReferenceCellInfoUEBSfn(const UEPositioningOTDOAReferenceCellInfoUEBSfn& UEPositioningOTDOAReferenceCellInfoUEBSfn) { *static_cast<UEPositioningOTDOAReferenceCellInfoUEBSfn*>(items[0]) = UEPositioningOTDOAReferenceCellInfoUEBSfn; }
};

class UEPositioningOTDOAAssistanceDataUEB : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningOTDOAAssistanceDataUEB(): Sequence(&theInfo) {}

	void setUepositioningOTDOAReferenceCellInfoUEB(const UEPositioningOTDOAReferenceCellInfoUEB& UepositioningOTDOAReferenceCellInfoUEB) { *static_cast<UEPositioningOTDOAReferenceCellInfoUEB*>(items[0]) = UepositioningOTDOAReferenceCellInfoUEB; }
};

typedef Integer<CONSTRAINED, 0, 70274> UEPositioningOTDOAReferenceCellInfoUEBextRoundTripTimeExtension;

class UEPositioningOTDOAReferenceCellInfoUEBext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningOTDOAReferenceCellInfoUEBext(): Sequence(&theInfo) {}

	void setUEPositioningOTDOAReferenceCellInfoUEBextRoundTripTimeExtension(const UEPositioningOTDOAReferenceCellInfoUEBextRoundTripTimeExtension& UEPositioningOTDOAReferenceCellInfoUEBextRoundTripTimeExtension) { *static_cast<UEPositioningOTDOAReferenceCellInfoUEBextRoundTripTimeExtension*>(items[0]) = UEPositioningOTDOAReferenceCellInfoUEBextRoundTripTimeExtension; }
};

class UEPositioningOTDOAAssistanceDataUEBext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningOTDOAAssistanceDataUEBext(): Sequence(&theInfo) {}

	void setUepositioningOTDOAReferenceCellInfoUEBext(const UEPositioningOTDOAReferenceCellInfoUEBext& UepositioningOTDOAReferenceCellInfoUEBext) { *static_cast<UEPositioningOTDOAReferenceCellInfoUEBext*>(items[0]) = UepositioningOTDOAReferenceCellInfoUEBext; }
};

typedef Integer<EXTCONSTRAINED, 0, 4095> UEPositioningOTDOAReferenceCellInfor7Sfn;

class UEPositioningOTDOAReferenceCellInfor7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningOTDOAReferenceCellInfor7(): Sequence(&theInfo) {}

	void setUEPositioningOTDOAReferenceCellInfor7Sfn(const UEPositioningOTDOAReferenceCellInfor7Sfn& UEPositioningOTDOAReferenceCellInfor7Sfn) { *static_cast<UEPositioningOTDOAReferenceCellInfor7Sfn*>(items[0]) = UEPositioningOTDOAReferenceCellInfor7Sfn; }
};

class UEPositioningOTDOAAssistanceDatar7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningOTDOAAssistanceDatar7(): Sequence(&theInfo) {}

	void setUepositioningOTDOAReferenceCellInfo(const UEPositioningOTDOAReferenceCellInfor7& UepositioningOTDOAReferenceCellInfo) { *static_cast<UEPositioningOTDOAReferenceCellInfor7*>(items[0]) = UepositioningOTDOAReferenceCellInfo; }
};

typedef SequenceOf<UEPositioningIPDLParametersTDDr4ext, CONSTRAINED, 1, maxCellMeas> UEPositioningIPDLParametersTDDListr4ext;

class UEPositioningOTDOAMeasuredResultsTDDext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningOTDOAMeasuredResultsTDDext(): Sequence(&theInfo) {}

	void setNeighbourList(const NeighbourListTDDr7& NeighbourList) { *static_cast<NeighbourListTDDr7*>(items[0]) = NeighbourList; }
};

class UEPositioningOTDOANeighbourCellInfoModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	UEPositioningOTDOANeighbourCellInfoModeSpecificInfo(): Choice(&theInfo) {}
};

class UEPositioningOTDOANeighbourCellInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningOTDOANeighbourCellInfo(): Sequence(&theInfo) {}

	void setUEPositioningOTDOANeighbourCellInfoModeSpecificInfo(const UEPositioningOTDOANeighbourCellInfoModeSpecificInfo& UEPositioningOTDOANeighbourCellInfoModeSpecificInfo) { *static_cast<UEPositioningOTDOANeighbourCellInfoModeSpecificInfo*>(items[0]) = UEPositioningOTDOANeighbourCellInfoModeSpecificInfo; }
};

class UEPositioningOTDOANeighbourCellInfor4ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	UEPositioningOTDOANeighbourCellInfor4ModeSpecificInfo(): Choice(&theInfo) {}
};

class UEPositioningOTDOANeighbourCellInfor4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningOTDOANeighbourCellInfor4(): Sequence(&theInfo) {}

	void setUEPositioningOTDOANeighbourCellInfor4ModeSpecificInfo(const UEPositioningOTDOANeighbourCellInfor4ModeSpecificInfo& UEPositioningOTDOANeighbourCellInfor4ModeSpecificInfo) { *static_cast<UEPositioningOTDOANeighbourCellInfor4ModeSpecificInfo*>(items[0]) = UEPositioningOTDOANeighbourCellInfor4ModeSpecificInfo; }
};

class UEPositioningOTDOANeighbourCellInfoUEBModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	UEPositioningOTDOANeighbourCellInfoUEBModeSpecificInfo(): Choice(&theInfo) {}
};

class UEPositioningOTDOANeighbourCellInfoUEB : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningOTDOANeighbourCellInfoUEB(): Sequence(&theInfo) {}

	void setUEPositioningOTDOANeighbourCellInfoUEBModeSpecificInfo(const UEPositioningOTDOANeighbourCellInfoUEBModeSpecificInfo& UEPositioningOTDOANeighbourCellInfoUEBModeSpecificInfo) { *static_cast<UEPositioningOTDOANeighbourCellInfoUEBModeSpecificInfo*>(items[0]) = UEPositioningOTDOANeighbourCellInfoUEBModeSpecificInfo; }
};

typedef Integer<CONSTRAINED, 0, 70274> UEPositioningOTDOANeighbourCellInfoUEBextRoundTripTimeExtension;

class UEPositioningOTDOANeighbourCellInfoUEBext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningOTDOANeighbourCellInfoUEBext(): Sequence(&theInfo) {}

	void setUEPositioningOTDOANeighbourCellInfoUEBextRoundTripTimeExtension(const UEPositioningOTDOANeighbourCellInfoUEBextRoundTripTimeExtension& UEPositioningOTDOANeighbourCellInfoUEBextRoundTripTimeExtension) { *static_cast<UEPositioningOTDOANeighbourCellInfoUEBextRoundTripTimeExtension*>(items[0]) = UEPositioningOTDOANeighbourCellInfoUEBextRoundTripTimeExtension; }
};

class UEPositioningOTDOANeighbourCellInfor7ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	UEPositioningOTDOANeighbourCellInfor7ModeSpecificInfo(): Choice(&theInfo) {}
};

class UEPositioningOTDOANeighbourCellInfor7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningOTDOANeighbourCellInfor7(): Sequence(&theInfo) {}

	void setUEPositioningOTDOANeighbourCellInfor7ModeSpecificInfo(const UEPositioningOTDOANeighbourCellInfor7ModeSpecificInfo& UEPositioningOTDOANeighbourCellInfor7ModeSpecificInfo) { *static_cast<UEPositioningOTDOANeighbourCellInfor7ModeSpecificInfo*>(items[0]) = UEPositioningOTDOANeighbourCellInfor7ModeSpecificInfo; }
};

typedef SequenceOf<UEPositioningOTDOANeighbourCellInfo, CONSTRAINED, 1, maxCellMeas> UEPositioningOTDOANeighbourCellList;

typedef SequenceOf<UEPositioningOTDOANeighbourCellInfor4, CONSTRAINED, 1, maxCellMeas> UEPositioningOTDOANeighbourCellListr4;

typedef SequenceOf<UEPositioningOTDOANeighbourCellInfoUEB, CONSTRAINED, 1, maxCellMeas> UEPositioningOTDOANeighbourCellListUEB;

typedef SequenceOf<UEPositioningOTDOANeighbourCellInfoUEBext, CONSTRAINED, 1, maxCellMeas> UEPositioningOTDOANeighbourCellListUEBext;

typedef SequenceOf<UEPositioningOTDOANeighbourCellInfor7, CONSTRAINED, 1, maxCellMeas> UEPositioningOTDOANeighbourCellListr7;

class UEPositioningReportCriteria : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	UEPositioningReportCriteria(): Choice(&theInfo) {}
};

class UEPositioningReportCriteriar7 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	UEPositioningReportCriteriar7(): Choice(&theInfo) {}
};

enum UEPositioningResponseTimeValues {
	S1,_UEPositioningResponseTime = 0,
};
typedef Enumerated<CONSTRAINED, 0> UEPositioningResponseTime;

typedef BitString<EXTCONSTRAINED, 11, 11> UTCmodelSet2NA;

class UTCmodelSet2 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UTCmodelSet2(): Sequence(&theInfo) {}

	void setUTCmodelSet2NA(const UTCmodelSet2NA& UTCmodelSet2NA) { *static_cast<UTCmodelSet2NA*>(items[0]) = UTCmodelSet2NA; }
};

typedef BitString<EXTCONSTRAINED, 24, 24> UTCmodelSet3UtcA1wnt;

class UTCmodelSet3 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UTCmodelSet3(): Sequence(&theInfo) {}

	void setUTCmodelSet3UtcA1wnt(const UTCmodelSet3UtcA1wnt& UTCmodelSet3UtcA1wnt) { *static_cast<UTCmodelSet3UtcA1wnt*>(items[0]) = UTCmodelSet3UtcA1wnt; }
};

typedef Integer<CONSTRAINED, 0, 127> UTRACarrierRSSI;

class UTRANFDDFrequency : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UTRANFDDFrequency(): Sequence(&theInfo) {}

	void setUarfcn(const UARFCN& Uarfcn) { *static_cast<UARFCN*>(items[0]) = Uarfcn; }
};

typedef SequenceOf<UTRANFDDFrequency, CONSTRAINED, 1, maxNumFDDFreqs> UTRANFDDFrequencyList;

class UTRANTDDFrequency : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UTRANTDDFrequency(): Sequence(&theInfo) {}

	void setUarfcn(const UARFCN& Uarfcn) { *static_cast<UARFCN*>(items[0]) = Uarfcn; }
};

typedef SequenceOf<UTRANTDDFrequency, CONSTRAINED, 1, maxNumTDDFreqs> UTRANTDDFrequencyList;

enum UTRANGPSDriftRateValues {
	UtranGPSDrift0,_UTRANGPSDriftRate = 0,
};
typedef Enumerated<CONSTRAINED, 0> UTRANGPSDriftRate;

typedef Integer<EXTCONSTRAINED, 0, 1023> UTRANGPSReferenceTimeUtranGPSTimingOfCellMspart;

class UTRANGPSReferenceTimeUtranGPSTimingOfCell : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UTRANGPSReferenceTimeUtranGPSTimingOfCell(): Sequence(&theInfo) {}

	void setUTRANGPSReferenceTimeUtranGPSTimingOfCellMspart(const UTRANGPSReferenceTimeUtranGPSTimingOfCellMspart& UTRANGPSReferenceTimeUtranGPSTimingOfCellMspart) { *static_cast<UTRANGPSReferenceTimeUtranGPSTimingOfCellMspart*>(items[0]) = UTRANGPSReferenceTimeUtranGPSTimingOfCellMspart; }
};

class UTRANGPSReferenceTime : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UTRANGPSReferenceTime(): Sequence(&theInfo) {}

	void setUTRANGPSReferenceTimeUtranGPSTimingOfCell(const UTRANGPSReferenceTimeUtranGPSTimingOfCell& UTRANGPSReferenceTimeUtranGPSTimingOfCell) { *static_cast<UTRANGPSReferenceTimeUtranGPSTimingOfCell*>(items[0]) = UTRANGPSReferenceTimeUtranGPSTimingOfCell; }
};

typedef Integer<EXTCONSTRAINED, 0, maxPrio_1> UTRAPriorityInfoListUtraServingCellPriority;

class UTRAPriorityInfoListUtraServingCell : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UTRAPriorityInfoListUtraServingCell(): Sequence(&theInfo) {}

	void setUTRAPriorityInfoListUtraServingCellPriority(const UTRAPriorityInfoListUtraServingCellPriority& UTRAPriorityInfoListUtraServingCellPriority) { *static_cast<UTRAPriorityInfoListUtraServingCellPriority*>(items[0]) = UTRAPriorityInfoListUtraServingCellPriority; }
};

class UTRAPriorityInfoList : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UTRAPriorityInfoList(): Sequence(&theInfo) {}

	void setUTRAPriorityInfoListUtraServingCell(const UTRAPriorityInfoListUtraServingCell& UTRAPriorityInfoListUtraServingCell) { *static_cast<UTRAPriorityInfoListUtraServingCell*>(items[0]) = UTRAPriorityInfoListUtraServingCell; }
};

typedef Integer<CONSTRAINED, 0, 31> UTRAPriorityInfoListv920extThreshServingLow2;

class UTRAPriorityInfoListv920ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UTRAPriorityInfoListv920ext(): Sequence(&theInfo) {}

	void setUTRAPriorityInfoListv920extThreshServingLow2(const UTRAPriorityInfoListv920extThreshServingLow2& UTRAPriorityInfoListv920extThreshServingLow2) { *static_cast<UTRAPriorityInfoListv920extThreshServingLow2*>(items[0]) = UTRAPriorityInfoListv920extThreshServingLow2; }
};

enum VarianceOfRLCBufferPayloadValues {
	Plv0,_VarianceOfRLCBufferPayload = 0,
};
typedef Enumerated<CONSTRAINED, 0> VarianceOfRLCBufferPayload;

class VelocityEstimate : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	VelocityEstimate(): Choice(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 7> BCC;

typedef Integer<CONSTRAINED, 1, 8> MIBValueTag;

class BCCHModificationInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	BCCHModificationInfo(): Sequence(&theInfo) {}

	void setMibValueTag(const MIBValueTag& MibValueTag) { *static_cast<MIBValueTag*>(items[0]) = MibValueTag; }
};

typedef Integer<CONSTRAINED, 0, 511> BCCHModificationTime;

typedef Integer<EXTCONSTRAINED, 1, 256> CBSDRXLevel1InformationCtchAllocationPeriod;

class CBSDRXLevel1Information : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CBSDRXLevel1Information(): Sequence(&theInfo) {}

	void setCBSDRXLevel1InformationCtchAllocationPeriod(const CBSDRXLevel1InformationCtchAllocationPeriod& CBSDRXLevel1InformationCtchAllocationPeriod) { *static_cast<CBSDRXLevel1InformationCtchAllocationPeriod*>(items[0]) = CBSDRXLevel1InformationCtchAllocationPeriod; }
};

enum CBSDRXLevel1Informationextensionr6Values {
	P8,_CBSDRXLevel1Informationextensionr6 = 0,
};
typedef Enumerated<CONSTRAINED, 0> CBSDRXLevel1Informationextensionr6;

typedef BitString<EXTCONSTRAINED, 8, 8> CDMA2000MessageMsgType;

class CDMA2000Message : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CDMA2000Message(): Sequence(&theInfo) {}

	void setCDMA2000MessageMsgType(const CDMA2000MessageMsgType& CDMA2000MessageMsgType) { *static_cast<CDMA2000MessageMsgType*>(items[0]) = CDMA2000MessageMsgType; }
};

typedef SequenceOf<CDMA2000Message, CONSTRAINED, 1, maxInterSysMessages> CDMA2000MessageList;

typedef BitString<EXTCONSTRAINED, 5, 5> FrequencyInfoCDMA2000BandClass;

class FrequencyInfoCDMA2000 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	FrequencyInfoCDMA2000(): Sequence(&theInfo) {}

	void setFrequencyInfoCDMA2000BandClass(const FrequencyInfoCDMA2000BandClass& FrequencyInfoCDMA2000BandClass) { *static_cast<FrequencyInfoCDMA2000BandClass*>(items[0]) = FrequencyInfoCDMA2000BandClass; }
};

typedef SequenceOf<FrequencyInfoCDMA2000, CONSTRAINED, 1, maxNumCDMA2000Freqs> CDMA2000UMTSFrequencyList;

typedef Integer<CONSTRAINED, 1, 4> CellValueTag;

enum DataTransmFrequencydataTransmFreqGranularityValues {
	Ms100,_DataTransmFrequencydataTransmFreqGranularity = 0,
};
typedef Enumerated<CONSTRAINED, 0> DataTransmFrequencydataTransmFreqGranularity;

class DataTransmFrequency : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DataTransmFrequency(): Sequence(&theInfo) {}

	void setDataTransmFrequencydataTransmFreqGranularity(const DataTransmFrequencydataTransmFreqGranularity& DataTransmFrequencydataTransmFreqGranularity) { *static_cast<DataTransmFrequencydataTransmFreqGranularity*>(items[0]) = DataTransmFrequencydataTransmFreqGranularity; }
};

typedef Integer<EXTCONSTRAINED, 1, 120> DataVolumeHistoryDataVolumeMontoringWindow;

class DataVolumeHistory : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DataVolumeHistory(): Sequence(&theInfo) {}

	void setDataVolumeHistoryDataVolumeMontoringWindow(const DataVolumeHistoryDataVolumeMontoringWindow& DataVolumeHistoryDataVolumeMontoringWindow) { *static_cast<DataVolumeHistoryDataVolumeMontoringWindow*>(items[0]) = DataVolumeHistoryDataVolumeMontoringWindow; }
};

class DataVolumePerRB : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DataVolumePerRB(): Sequence(&theInfo) {}

	void setRbIdentity(const RBIdentity& RbIdentity) { *static_cast<RBIdentity*>(items[0]) = RbIdentity; }
};

typedef SequenceOf<DataVolumePerRB, CONSTRAINED, 1, maxRB> DataVolumePerRBList;

class DeferredMeasurementControlReadingSupportModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	DeferredMeasurementControlReadingSupportModeSpecificInfo(): Choice(&theInfo) {}
};

class DeferredMeasurementControlReadingSupport : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DeferredMeasurementControlReadingSupport(): Sequence(&theInfo) {}

	void setDeferredMeasurementControlReadingSupportModeSpecificInfo(const DeferredMeasurementControlReadingSupportModeSpecificInfo& DeferredMeasurementControlReadingSupportModeSpecificInfo) { *static_cast<DeferredMeasurementControlReadingSupportModeSpecificInfo*>(items[0]) = DeferredMeasurementControlReadingSupportModeSpecificInfo; }
};

typedef OctetString<EXTCONSTRAINED, 1, 2> ETWSInformationWarningType;

class ETWSInformation : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ETWSInformation(): Sequence(&theInfo) {}

	void setETWSInformationWarningType(const ETWSInformationWarningType& ETWSInformationWarningType) { *static_cast<ETWSInformationWarningType*>(items[0]) = ETWSInformationWarningType; }
};

typedef OctetStringBase ETWSWarningSecurityInfo;

class EUTRABlacklistedCell : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EUTRABlacklistedCell(): Sequence(&theInfo) {}

	void setPhysicalCellIdentity(const EUTRAPhysicalCellIdentity& PhysicalCellIdentity) { *static_cast<EUTRAPhysicalCellIdentity*>(items[0]) = PhysicalCellIdentity; }
};

typedef SequenceOf<EUTRABlacklistedCell, CONSTRAINED, 1, maxEUTRACellPerFreq> EUTRABlacklistedCellPerFreqList;

typedef OctetStringBase EUTRARadioAccessCapabilityUeEUTRACapability;

class EUTRARadioAccessCapability : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EUTRARadioAccessCapability(): Sequence(&theInfo) {}

	void setEUTRARadioAccessCapabilityUeEUTRACapability(const OctetStringBase& EUTRARadioAccessCapabilityUeEUTRACapability) { *static_cast<OctetStringBase*>(items[0]) = EUTRARadioAccessCapabilityUeEUTRACapability; }
};

class EUTRATargetFreqInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EUTRATargetFreqInfo(): Sequence(&theInfo) {}

	void setDlEUTRACarrierFreq(const EARFCN& DlEUTRACarrierFreq) { *static_cast<EARFCN*>(items[0]) = DlEUTRACarrierFreq; }
};

typedef SequenceOf<EUTRATargetFreqInfo, CONSTRAINED, 1, maxEUTRATargetFreqs> EUTRATargetFreqInfoList;

typedef Integer<CONSTRAINED, 1, 8> ExpirationTimeFactor;

typedef Null SIBTypeExtGANSSSystemInfoType151bis;

class SIBTypeExtGANSS : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	SIBTypeExtGANSS(): Choice(&theInfo) {}
};

class ExtGANSSSchedulingInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ExtGANSSSchedulingInfo(): Sequence(&theInfo) {}

	void setExtensionGANSSSIBType(const SIBTypeExtGANSS& ExtensionGANSSSIBType) { *static_cast<SIBTypeExtGANSS*>(items[0]) = ExtensionGANSSSIBType; }
};

typedef Integer<EXTCONSTRAINED, SIZE (1, maxSIB> ExtGANSSSIBTypeInfoSchedulingInfoGanssID;

class ExtGANSSSIBTypeInfoSchedulingInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ExtGANSSSIBTypeInfoSchedulingInfo(): Sequence(&theInfo) {}

	void setExtGANSSSIBTypeInfoSchedulingInfoGanssID(const ExtGANSSSIBTypeInfoSchedulingInfoGanssID& ExtGANSSSIBTypeInfoSchedulingInfoGanssID) { *static_cast<ExtGANSSSIBTypeInfoSchedulingInfoGanssID*>(items[0]) = ExtGANSSSIBTypeInfoSchedulingInfoGanssID; }
};

typedef SequenceOf<ExtGANSSSIBTypeInfoSchedulingInfo, CONSTRAINED, 1, maxGANSS> ExtGANSSSIBTypeInfoSchedulingInfoList;

typedef Null SIBTypeExtSystemInfoType11bis;

class SIBTypeExt : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	SIBTypeExt(): Choice(&theInfo) {}
};

class ExtSIBTypeInfoSchedulingInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ExtSIBTypeInfoSchedulingInfo(): Sequence(&theInfo) {}

	void setExtensionSIBType(const SIBTypeExt& ExtensionSIBType) { *static_cast<SIBTypeExt*>(items[0]) = ExtensionSIBType; }
};

typedef SequenceOf<ExtSIBTypeInfoSchedulingInfo, CONSTRAINED, 1, maxSIB> ExtSIBTypeInfoSchedulingInfoList;

typedef Null SIBTypeExt2SystemInfoType19;

class SIBTypeExt2 : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	SIBTypeExt2(): Choice(&theInfo) {}
};

class ExtSIBTypeInfoSchedulingInfo2 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ExtSIBTypeInfoSchedulingInfo2(): Sequence(&theInfo) {}

	void setExtensionSIBType2(const SIBTypeExt2& ExtensionSIBType2) { *static_cast<SIBTypeExt2*>(items[0]) = ExtensionSIBType2; }
};

typedef SequenceOf<ExtSIBTypeInfoSchedulingInfo2, CONSTRAINED, 1, maxSIB> ExtSIBTypeInfoSchedulingInfoList2;

typedef SequenceOf<FrequencyInfoFDD, CONSTRAINED, 1, maxNumFDDFreqs> FDDUMTSFrequencyList;

typedef OctetString<CONSTRAINED, 1, 23> GERANSystemInfoBlock;

typedef SequenceOf<GERANSystemInfoBlock, CONSTRAINED, 1, maxGERAN_SI> GERANSystemInformation;

class GSMBARange : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	GSMBARange(): Sequence(&theInfo) {}

	void setGsmLowRangeUARFCN(const UARFCN& GsmLowRangeUARFCN) { *static_cast<UARFCN*>(items[0]) = GsmLowRangeUARFCN; }
};

typedef SequenceOf<GSMBARange, CONSTRAINED, 1, maxNumGSMFreqRanges> GSMBARangeList;

typedef OctetString<CONSTRAINED, 5, 5> GSMClassmark2;

typedef OctetString<CONSTRAINED, 1, 32> GSMClassmark3;

typedef BitString<CONSTRAINED, 1, 512> GSMMessageListItem;

typedef SequenceOf<GSMMessageListItem, CONSTRAINED, 1, maxInterSysMessages> GSMMessageList;

typedef OctetString<CONSTRAINED, 1, 64> GSMMSRadioAccessCapability;

typedef BitString<CONSTRAINED, 7, 7> GsmSecurityCapability;

class GSMTargetCellInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	GSMTargetCellInfo(): Sequence(&theInfo) {}

	void setBcchARFCN(const BCCHARFCN& BcchARFCN) { *static_cast<BCCHARFCN*>(items[0]) = BcchARFCN; }
};

typedef SequenceOf<GSMTargetCellInfo, CONSTRAINED, 1, maxGSMTargetCells> GSMTargetCellInfoList;

typedef OctetString<CONSTRAINED, 1, maxHNBNameSize> HNBName;

class IdentificationOfReceivedMessage : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IdentificationOfReceivedMessage(): Sequence(&theInfo) {}

	void setRrcTransactionIdentifier(const RRCTransactionIdentifier& RrcTransactionIdentifier) { *static_cast<RRCTransactionIdentifier*>(items[0]) = RrcTransactionIdentifier; }
};

typedef Null InterRATChangeFailureCauseConfigurationUnacceptable;

class InterRATChangeFailureCause : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	InterRATChangeFailureCause(): Choice(&theInfo) {}
};

typedef BitString<CONSTRAINED, 1, 32768> GERANIuMessageListItem;

typedef SequenceOf<GERANIuMessageListItem, CONSTRAINED, 1, maxInterSysMessages> GERANIuMessageList;

typedef BitString<CONSTRAINED, 1, 170> GERANIuRadioAccessCapability;

class InterRATUERadioAccessCapabilityGsm : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterRATUERadioAccessCapabilityGsm(): Sequence(&theInfo) {}

	void setGsmClassmark2(const GSMClassmark2& GsmClassmark2) { *static_cast<GSMClassmark2*>(items[0]) = GsmClassmark2; }
};

class InterRATUERadioAccessCapability : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	InterRATUERadioAccessCapability(): Choice(&theInfo) {}
};

typedef SequenceOf<InterRATUERadioAccessCapability, CONSTRAINED, 1, maxInterSysMessages> InterRATUERadioAccessCapabilityList;

class InterRATUERadioAccessCapabilityv590ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterRATUERadioAccessCapabilityv590ext(): Sequence(&theInfo) {}

	void setGeranIuRadioAccessCapability(const GERANIuRadioAccessCapability& GeranIuRadioAccessCapability) { *static_cast<GERANIuRadioAccessCapability*>(items[0]) = GeranIuRadioAccessCapability; }
};

enum InterRATUERadioAccessCapabilityv690extsupportOfInter_RAT_PS_HandoverValues {
	doesSupporInter_RAT_PS_Handover_InterRATUERadioAccessCapabilityv690extsupportOfInter_RAT_PS_Handover = 0,
};
typedef Enumerated<CONSTRAINED, 0> InterRATUERadioAccessCapabilityv690extsupportOfInter_RAT_PS_Handover;

class InterRATUERadioAccessCapabilityv690ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterRATUERadioAccessCapabilityv690ext(): Sequence(&theInfo) {}

	void setInterRATUERadioAccessCapabilityv690extsupportOfInter_RAT_PS_Handover(const InterRATUERadioAccessCapabilityv690extsupportOfInter_RAT_PS_Handover& InterRATUERadioAccessCapabilityv690extsupportOfInter_RAT_PS_Handover) { *static_cast<InterRATUERadioAccessCapabilityv690extsupportOfInter_RAT_PS_Handover*>(items[0]) = InterRATUERadioAccessCapabilityv690extsupportOfInter_RAT_PS_Handover; }
};

class InterRATUERadioAccessCapabilityv860ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterRATUERadioAccessCapabilityv860ext(): Sequence(&theInfo) {}

	void setEutraRadioAccessCapability(const EUTRARadioAccessCapability& EutraRadioAccessCapability) { *static_cast<EUTRARadioAccessCapability*>(items[0]) = EutraRadioAccessCapability; }
};

class InterRATUESecurityCapabilityGsm : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterRATUESecurityCapabilityGsm(): Sequence(&theInfo) {}

	void setGsmSecurityCapability(const GsmSecurityCapability& GsmSecurityCapability) { *static_cast<GsmSecurityCapability*>(items[0]) = GsmSecurityCapability; }
};

class InterRATUESecurityCapability : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	InterRATUESecurityCapability(): Choice(&theInfo) {}
};

typedef SequenceOf<InterRATUESecurityCapability, CONSTRAINED, 1, maxInterSysMessages> InterRATUESecurityCapList;

typedef Null InterRATHOFailureCauseConfigurationUnacceptable;

class InterRATHOFailureCause : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	InterRATHOFailureCause(): Choice(&theInfo) {}
};

class MasterInformationBlock : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MasterInformationBlock(): Sequence(&theInfo) {}

	void setMibValueTag(const MIBValueTag& MibValueTag) { *static_cast<MIBValueTag*>(items[0]) = MibValueTag; }
};

class MasterInformationBlockv690ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MasterInformationBlockv690ext(): Sequence(&theInfo) {}

	void setMultiplePLMNList(const MultiplePLMNListr6& MultiplePLMNList) { *static_cast<MultiplePLMNListr6*>(items[0]) = MultiplePLMNList; }
};

class MasterInformationBlockv6b0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MasterInformationBlockv6b0extIEs(): Sequence(&theInfo) {}

	void setExtSIBTypeInfoSchedulingInfoList(const ExtSIBTypeInfoSchedulingInfoList& ExtSIBTypeInfoSchedulingInfoList) { *static_cast<ExtSIBTypeInfoSchedulingInfoList*>(items[0]) = ExtSIBTypeInfoSchedulingInfoList; }
};

class MasterInformationBlockv860extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MasterInformationBlockv860extIEs(): Sequence(&theInfo) {}

	void setExtSIBTypeInfoSchedulingInfoList(const ExtSIBTypeInfoSchedulingInfoList2& ExtSIBTypeInfoSchedulingInfoList) { *static_cast<ExtSIBTypeInfoSchedulingInfoList2*>(items[0]) = ExtSIBTypeInfoSchedulingInfoList; }
};

typedef Integer<CONSTRAINED, 1, 256> PLMNValueTag;

class PredefinedConfigIdentityAndValueTag : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PredefinedConfigIdentityAndValueTag(): Sequence(&theInfo) {}

	void setPredefinedConfigIdentity(const PredefinedConfigIdentity& PredefinedConfigIdentity) { *static_cast<PredefinedConfigIdentity*>(items[0]) = PredefinedConfigIdentity; }
};

class ProtocolErrorInformationDiagnosticsTypeType1 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ProtocolErrorInformationDiagnosticsTypeType1(): Sequence(&theInfo) {}

	void setProtocolErrorCause(const ProtocolErrorCause& ProtocolErrorCause) { *static_cast<ProtocolErrorCause*>(items[0]) = ProtocolErrorCause; }
};

class ProtocolErrorInformationDiagnosticsType : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	ProtocolErrorInformationDiagnosticsType(): Choice(&theInfo) {}
};

class ProtocolErrorInformation : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ProtocolErrorInformation(): Sequence(&theInfo) {}

	void setProtocolErrorInformationDiagnosticsType(const ProtocolErrorInformationDiagnosticsType& ProtocolErrorInformationDiagnosticsType) { *static_cast<ProtocolErrorInformationDiagnosticsType*>(items[0]) = ProtocolErrorInformationDiagnosticsType; }
};

enum ReceivedMessageTypeValues {
	ActiveSetUpdate,_ReceivedMessageType = 0,
};
typedef Enumerated<CONSTRAINED, 0> ReceivedMessageType;

class RplmnInformation : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RplmnInformation(): Sequence(&theInfo) {}

	void setGsmBARangeList(const GSMBARangeList& GsmBARangeList) { *static_cast<GSMBARangeList*>(items[0]) = GsmBARangeList; }
};

class RplmnInformationr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RplmnInformationr4(): Sequence(&theInfo) {}

	void setGsmBARangeList(const GSMBARangeList& GsmBARangeList) { *static_cast<GSMBARangeList*>(items[0]) = GsmBARangeList; }
};

typedef Integer<CONSTRAINED, 1, 16> SegCount;

class SchedulingInformationScheduling : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SchedulingInformationScheduling(): Sequence(&theInfo) {}

	void setSegCount(const SegCount& SegCount) { *static_cast<SegCount*>(items[0]) = SegCount; }
};

class SchedulingInformation : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SchedulingInformation(): Sequence(&theInfo) {}

	void setSchedulingInformationScheduling(const SchedulingInformationScheduling& SchedulingInformationScheduling) { *static_cast<SchedulingInformationScheduling*>(items[0]) = SchedulingInformationScheduling; }
};

class SIBTypeAndTag : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	SIBTypeAndTag(): Choice(&theInfo) {}
};

class SchedulingInformationSIB : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SchedulingInformationSIB(): Sequence(&theInfo) {}

	void setSibType(const SIBTypeAndTag& SibType) { *static_cast<SIBTypeAndTag*>(items[0]) = SibType; }
};

class SIBSbTypeAndTag : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	SIBSbTypeAndTag(): Choice(&theInfo) {}
};

class SchedulingInformationSIBSb : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SchedulingInformationSIBSb(): Sequence(&theInfo) {}

	void setSibSbType(const SIBSbTypeAndTag& SibSbType) { *static_cast<SIBSbTypeAndTag*>(items[0]) = SibSbType; }
};

typedef Integer<CONSTRAINED, 1, 15> SegmentIndex;

typedef Integer<CONSTRAINED, 0, 2047> SFNPrime;

typedef BitString<CONSTRAINED, 222, 222> SIBDatafixed;

typedef BitString<CONSTRAINED, 1, 214> SIBDatavariable;

typedef Integer<CONSTRAINED, 0, 15> SIBOccurIdentity;

class SIBOccurrenceIdentityAndValueTag : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SIBOccurrenceIdentityAndValueTag(): Sequence(&theInfo) {}

	void setSibOccurIdentity(const SIBOccurIdentity& SibOccurIdentity) { *static_cast<SIBOccurIdentity*>(items[0]) = SibOccurIdentity; }
};

typedef Integer<CONSTRAINED, 0, 15> SIBOccurValueTag;

typedef SequenceOf<SchedulingInformationSIB, CONSTRAINED, 1, maxSIB> SIBReferenceList;

typedef SequenceOf<SchedulingInformationSIBSb, CONSTRAINED, 1, maxSIB> SIBSbReferenceList;

typedef SequenceOf<SchedulingInformationSIB, CONSTRAINED, 1, maxSIB_FACH> SIBReferenceListFACH;

enum SIBTypeValues {
	MasterInformationBlock,_SIBType = 0,
};
typedef Enumerated<CONSTRAINED, 0> SIBType;

enum SibOFFValues {
	So2,_SibOFF = 0,
};
typedef Enumerated<CONSTRAINED, 0> SibOFF;

class SysInfoType1 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType1(): Sequence(&theInfo) {}

	void setCnCommonGSMMAPNASSysInfo(const NASSystemInformationGSMMAP& CnCommonGSMMAPNASSysInfo) { *static_cast<NASSystemInformationGSMMAP*>(items[0]) = CnCommonGSMMAPNASSysInfo; }
};

class SysInfoType1v3a0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType1v3a0extIEs(): Sequence(&theInfo) {}

	void setUeConnTimersAndConstantsv3a0ext(const UEConnTimersAndConstantsv3a0ext& UeConnTimersAndConstantsv3a0ext) { *static_cast<UEConnTimersAndConstantsv3a0ext*>(items[0]) = UeConnTimersAndConstantsv3a0ext; }
};

class SysInfoType1v860extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType1v860extIEs(): Sequence(&theInfo) {}

	void setUeConnTimersAndConstants(const UEConnTimersAndConstantsv860ext& UeConnTimersAndConstants) { *static_cast<UEConnTimersAndConstantsv860ext*>(items[0]) = UeConnTimersAndConstants; }
};

class SysInfoType2 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType2(): Sequence(&theInfo) {}

	void setUraIdentityList(const URAIdentityList& UraIdentityList) { *static_cast<URAIdentityList*>(items[0]) = UraIdentityList; }
};

typedef Boolean SysInfoType3Sib4indicator;

class SysInfoType3 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType3(): Sequence(&theInfo) {}

	void setSysInfoType3Sib4indicator(const SysInfoType3Sib4indicator& SysInfoType3Sib4indicator) { *static_cast<SysInfoType3Sib4indicator*>(items[0]) = SysInfoType3Sib4indicator; }
};

class SysInfoType3v4b0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType3v4b0extIEs(): Sequence(&theInfo) {}

	void setMappingLCR(const MappingLCRr4& MappingLCR) { *static_cast<MappingLCRr4*>(items[0]) = MappingLCR; }
};

class SysInfoType3v590ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType3v590ext(): Sequence(&theInfo) {}

	void setCellSelectReselectInfov590ext(const CellSelectReselectInfov590ext& CellSelectReselectInfov590ext) { *static_cast<CellSelectReselectInfov590ext*>(items[0]) = CellSelectReselectInfov590ext; }
};

class SysInfoType3v5c0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType3v5c0extIEs(): Sequence(&theInfo) {}

	void setCellSelectReselectInfoTreselectionScalingv5c0ext(const CellSelectReselectInfoTreselectionScalingv5c0ext& CellSelectReselectInfoTreselectionScalingv5c0ext) { *static_cast<CellSelectReselectInfoTreselectionScalingv5c0ext*>(items[0]) = CellSelectReselectInfoTreselectionScalingv5c0ext; }
};

class SysInfoType3v670ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType3v670ext(): Sequence(&theInfo) {}

	void setDomainSpecificAccessRestrictionParametersForPLMNOfMIB(const DomainSpecificAccessRestrictionParamv670ext& DomainSpecificAccessRestrictionParametersForPLMNOfMIB) { *static_cast<DomainSpecificAccessRestrictionParamv670ext*>(items[0]) = DomainSpecificAccessRestrictionParametersForPLMNOfMIB; }
};

class SysInfoType3v770extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType3v770extIEs(): Sequence(&theInfo) {}

	void setDeferredMeasurementControlReadingSupport(const DeferredMeasurementControlReadingSupport& DeferredMeasurementControlReadingSupport) { *static_cast<DeferredMeasurementControlReadingSupport*>(items[0]) = DeferredMeasurementControlReadingSupport; }
};

class SysInfoType3v830extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType3v830extIEs(): Sequence(&theInfo) {}

	void setPagingPermissionWithAccessControlParametersForPLMNOfMIB(const PagingPermissionWithAccessControlParameters& PagingPermissionWithAccessControlParametersForPLMNOfMIB) { *static_cast<PagingPermissionWithAccessControlParameters*>(items[0]) = PagingPermissionWithAccessControlParametersForPLMNOfMIB; }
};

class SysInfoType3v860extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType3v860extIEs(): Sequence(&theInfo) {}

	void setCsgIdentity(const CSGIdentity& CsgIdentity) { *static_cast<CSGIdentity*>(items[0]) = CsgIdentity; }
};

class SysInfoType3v870extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType3v870extIEs(): Sequence(&theInfo) {}

	void setCellAccessRestriction(const CellAccessRestrictionv870ext& CellAccessRestriction) { *static_cast<CellAccessRestrictionv870ext*>(items[0]) = CellAccessRestriction; }
};

enum SysInfoType3v920extIEsimsEmergencySupportIndicatorValues {
	supported_SysInfoType3v920extIEsimsEmergencySupportIndicator = 0,
};
typedef Enumerated<CONSTRAINED, 0> SysInfoType3v920extIEsimsEmergencySupportIndicator;

class SysInfoType3v920extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType3v920extIEs(): Sequence(&theInfo) {}

	void setSysInfoType3v920extIEsimsEmergencySupportIndicator(const SysInfoType3v920extIEsimsEmergencySupportIndicator& SysInfoType3v920extIEsimsEmergencySupportIndicator) { *static_cast<SysInfoType3v920extIEsimsEmergencySupportIndicator*>(items[0]) = SysInfoType3v920extIEsimsEmergencySupportIndicator; }
};

class SysInfoType4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType4(): Sequence(&theInfo) {}

	void setCellIdentity(const CellIdentity& CellIdentity) { *static_cast<CellIdentity*>(items[0]) = CellIdentity; }
};

class SysInfoType4v4b0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType4v4b0extIEs(): Sequence(&theInfo) {}

	void setMappingLCR(const MappingLCRr4& MappingLCR) { *static_cast<MappingLCRr4*>(items[0]) = MappingLCR; }
};

class SysInfoType4v590ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType4v590ext(): Sequence(&theInfo) {}

	void setCellSelectReselectInfov590ext(const CellSelectReselectInfov590ext& CellSelectReselectInfov590ext) { *static_cast<CellSelectReselectInfov590ext*>(items[0]) = CellSelectReselectInfov590ext; }
};

class SysInfoType4v5b0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType4v5b0extIEs(): Sequence(&theInfo) {}

	void setCellSelectReselectInfoPCHFACHv5b0ext(const CellSelectReselectInfoPCHFACHv5b0ext& CellSelectReselectInfoPCHFACHv5b0ext) { *static_cast<CellSelectReselectInfoPCHFACHv5b0ext*>(items[0]) = CellSelectReselectInfoPCHFACHv5b0ext; }
};

class SysInfoType4v5c0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType4v5c0extIEs(): Sequence(&theInfo) {}

	void setCellSelectReselectInfoTreselectionScalingv5c0ext(const CellSelectReselectInfoTreselectionScalingv5c0ext& CellSelectReselectInfoTreselectionScalingv5c0ext) { *static_cast<CellSelectReselectInfoTreselectionScalingv5c0ext*>(items[0]) = CellSelectReselectInfoTreselectionScalingv5c0ext; }
};

typedef Boolean SysInfoType5Sib6indicator;

class SysInfoType5 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType5(): Sequence(&theInfo) {}

	void setSysInfoType5Sib6indicator(const SysInfoType5Sib6indicator& SysInfoType5Sib6indicator) { *static_cast<SysInfoType5Sib6indicator*>(items[0]) = SysInfoType5Sib6indicator; }
};

class SysInfoType5v4b0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType5v4b0extIEs(): Sequence(&theInfo) {}

	void setPNBSCHAllocationr4(const PNBSCHAllocationr4& PNBSCHAllocationr4) { *static_cast<PNBSCHAllocationr4*>(items[0]) = PNBSCHAllocationr4; }
};

class SysInfoType5v590extIEsHcrr5SpecificInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType5v590extIEsHcrr5SpecificInfo(): Sequence(&theInfo) {}

	void setPuschSysInfoListSFN(const PUSCHSysInfoListSFNHCRr5& PuschSysInfoListSFN) { *static_cast<PUSCHSysInfoListSFNHCRr5*>(items[0]) = PuschSysInfoListSFN; }
};

class SysInfoType5v590extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType5v590extIEs(): Sequence(&theInfo) {}

	void setSysInfoType5v590extIEsHcrr5SpecificInfo(const SysInfoType5v590extIEsHcrr5SpecificInfo& SysInfoType5v590extIEsHcrr5SpecificInfo) { *static_cast<SysInfoType5v590extIEsHcrr5SpecificInfo*>(items[0]) = SysInfoType5v590extIEsHcrr5SpecificInfo; }
};

class SysInfoType5v650extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType5v650extIEs(): Sequence(&theInfo) {}

	void setFrequencyBandIndicator2(const RadioFrequencyBandFDD2& FrequencyBandIndicator2) { *static_cast<RadioFrequencyBandFDD2*>(items[0]) = FrequencyBandIndicator2; }
};

enum SysInfoType5v680extIEshsdpa_CellIndicatorValues {
	hsdpa_CapableCell_SysInfoType5v680extIEshsdpa_CellIndicator = 0,
};
typedef Enumerated<CONSTRAINED, 0> SysInfoType5v680extIEshsdpa_CellIndicator;

class SysInfoType5v680extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType5v680extIEs(): Sequence(&theInfo) {}

	void setSysInfoType5v680extIEshsdpa_CellIndicator(const SysInfoType5v680extIEshsdpa_CellIndicator& SysInfoType5v680extIEshsdpa_CellIndicator) { *static_cast<SysInfoType5v680extIEshsdpa_CellIndicator*>(items[0]) = SysInfoType5v680extIEshsdpa_CellIndicator; }
};

enum SysInfoType5v690extIEsedch_CellIndicatorValues {
	EdchCapableCell_SysInfoType5v690extIEsedch_CellIndicator = 0,
};
typedef Enumerated<CONSTRAINED, 0> SysInfoType5v690extIEsedch_CellIndicator;

class SysInfoType5v690extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType5v690extIEs(): Sequence(&theInfo) {}

	void setSysInfoType5v690extIEsedch_CellIndicator(const SysInfoType5v690extIEsedch_CellIndicator& SysInfoType5v690extIEsedch_CellIndicator) { *static_cast<SysInfoType5v690extIEsedch_CellIndicator*>(items[0]) = SysInfoType5v690extIEsedch_CellIndicator; }
};

class SysInfoType5v770extIEsModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType5v770extIEsModeSpecificInfoFdd(): Sequence(&theInfo) {}

	void setHsdschCommonSystemInformation(const HSDSCHCommonSystemInformation& HsdschCommonSystemInformation) { *static_cast<HSDSCHCommonSystemInformation*>(items[0]) = HsdschCommonSystemInformation; }
};

class SysInfoType5v770extIEsModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	SysInfoType5v770extIEsModeSpecificInfo(): Choice(&theInfo) {}
};

class SysInfoType5v770extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType5v770extIEs(): Sequence(&theInfo) {}

	void setSysInfoType5v770extIEsModeSpecificInfo(const SysInfoType5v770extIEsModeSpecificInfo& SysInfoType5v770extIEsModeSpecificInfo) { *static_cast<SysInfoType5v770extIEsModeSpecificInfo*>(items[0]) = SysInfoType5v770extIEsModeSpecificInfo; }
};

class SysInfoType5v860extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType5v860extIEs(): Sequence(&theInfo) {}

	void setSysInfoType5v860extIEsDummy(const SysInfoType5v860extIEsDummy& SysInfoType5v860extIEsDummy) { *static_cast<SysInfoType5v860extIEsDummy*>(items[0]) = SysInfoType5v860extIEsDummy; }
};

class SysInfoType5v890extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType5v890extIEs(): Sequence(&theInfo) {}

	void setSecondFrequencyInfo(const FrequencyInfoTDD& SecondFrequencyInfo) { *static_cast<FrequencyInfoTDD*>(items[0]) = SecondFrequencyInfo; }
};

enum SysInfoType5v8b0extIEstresetUsageIndicatorValues {
	true_SysInfoType5v8b0extIEstresetUsageIndicator = 0,
};
typedef Enumerated<CONSTRAINED, 0> SysInfoType5v8b0extIEstresetUsageIndicator;

class SysInfoType5v8b0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType5v8b0extIEs(): Sequence(&theInfo) {}

	void setSysInfoType5v8b0extIEstresetUsageIndicator(const SysInfoType5v8b0extIEstresetUsageIndicator& SysInfoType5v8b0extIEstresetUsageIndicator) { *static_cast<SysInfoType5v8b0extIEstresetUsageIndicator*>(items[0]) = SysInfoType5v8b0extIEstresetUsageIndicator; }
};


class SysInfoType5v8d0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType5v8d0extIEs(): Sequence(&theInfo) {}

	void setCommonEDCHSystemInfoFDD(const CommonEDCHSystemInfoFDD& CommonEDCHSystemInfoFDD) { *static_cast<CommonEDCHSystemInfoFDD*>(items[0]) = CommonEDCHSystemInfoFDD; }
};


class SysInfoType6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType6(): Sequence(&theInfo) {}

	void setPichPowerOffset(const PICHPowerOffset& PichPowerOffset) { *static_cast<PICHPowerOffset*>(items[0]) = PichPowerOffset; }
};

class SysInfoType6v4b0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType6v4b0extIEs(): Sequence(&theInfo) {}

	void setOpenLoopPowerControlIPDLTDD(const OpenLoopPowerControlIPDLTDDr4& OpenLoopPowerControlIPDLTDD) { *static_cast<OpenLoopPowerControlIPDLTDDr4*>(items[0]) = OpenLoopPowerControlIPDLTDD; }
};

class SysInfoType6v590extIEsHcrr5SpecificInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType6v590extIEsHcrr5SpecificInfo(): Sequence(&theInfo) {}

	void setPuschSysInfoListSFN(const PUSCHSysInfoListSFNHCRr5& PuschSysInfoListSFN) { *static_cast<PUSCHSysInfoListSFNHCRr5*>(items[0]) = PuschSysInfoListSFN; }
};

class SysInfoType6v590extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType6v590extIEs(): Sequence(&theInfo) {}

	void setSysInfoType6v590extIEsHcrr5SpecificInfo(const SysInfoType6v590extIEsHcrr5SpecificInfo& SysInfoType6v590extIEsHcrr5SpecificInfo) { *static_cast<SysInfoType6v590extIEsHcrr5SpecificInfo*>(items[0]) = SysInfoType6v590extIEsHcrr5SpecificInfo; }
};

class SysInfoType6v650extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType6v650extIEs(): Sequence(&theInfo) {}

	void setFrequencyBandIndicator2(const RadioFrequencyBandFDD2& FrequencyBandIndicator2) { *static_cast<RadioFrequencyBandFDD2*>(items[0]) = FrequencyBandIndicator2; }
};

class SysInfoType6v690extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType6v690extIEs(): Sequence(&theInfo) {}

	void setAdditionalPRACHTFandTFCSCCCHList(const AdditionalPRACHTFandTFCSCCCHList& AdditionalPRACHTFandTFCSCCCHList) { *static_cast<AdditionalPRACHTFandTFCSCCCHList*>(items[0]) = AdditionalPRACHTFandTFCSCCCHList; }
};

class SysInfoType6v770extIEsTdd768SpecificInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType6v770extIEsTdd768SpecificInfo(): Sequence(&theInfo) {}

	void setPuschSysInfoListSFN(const PUSCHSysInfoListSFNVHCR& PuschSysInfoListSFN) { *static_cast<PUSCHSysInfoListSFNVHCR*>(items[0]) = PuschSysInfoListSFN; }
};

class SysInfoType6v770extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType6v770extIEs(): Sequence(&theInfo) {}

	void setSysInfoType6v770extIEsTdd768SpecificInfo(const SysInfoType6v770extIEsTdd768SpecificInfo& SysInfoType6v770extIEsTdd768SpecificInfo) { *static_cast<SysInfoType6v770extIEsTdd768SpecificInfo*>(items[0]) = SysInfoType6v770extIEsTdd768SpecificInfo; }
};

class SysInfoType7ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	SysInfoType7ModeSpecificInfo(): Choice(&theInfo) {}
};

class SysInfoType7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType7(): Sequence(&theInfo) {}

	void setSysInfoType7ModeSpecificInfo(const SysInfoType7ModeSpecificInfo& SysInfoType7ModeSpecificInfo) { *static_cast<SysInfoType7ModeSpecificInfo*>(items[0]) = SysInfoType7ModeSpecificInfo; }
};


class SysInfoType8 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType8(): Sequence(&theInfo) {}

	void setDummy1(const CPCHParameters& Dummy1) { *static_cast<CPCHParameters*>(items[0]) = Dummy1; }
};

class SysInfoType9 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType9(): Sequence(&theInfo) {}

	void setDummy(const CPCHPersistenceLevelsList& Dummy) { *static_cast<CPCHPersistenceLevelsList*>(items[0]) = Dummy; }
};

class SysInfoType10 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType10(): Sequence(&theInfo) {}

	void setDummy(const DRACSysInfoList& Dummy) { *static_cast<DRACSysInfoList*>(items[0]) = Dummy; }
};

typedef Boolean SysInfoType11Sib12indicator;

class SysInfoType11 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType11(): Sequence(&theInfo) {}

	void setSysInfoType11Sib12indicator(const SysInfoType11Sib12indicator& SysInfoType11Sib12indicator) { *static_cast<SysInfoType11Sib12indicator*>(items[0]) = SysInfoType11Sib12indicator; }
};

class SysInfoType11v590extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType11v590extIEs(): Sequence(&theInfo) {}

	void setSysInfoType11v590extIEsNewIntraFrequencyCellInfoListv590ext(const SysInfoType11v590extIEsNewIntraFrequencyCellInfoListv590ext& SysInfoType11v590extIEsNewIntraFrequencyCellInfoListv590ext) { *static_cast<SysInfoType11v590extIEsNewIntraFrequencyCellInfoListv590ext*>(items[0]) = SysInfoType11v590extIEsNewIntraFrequencyCellInfoListv590ext; }
};

class SysInfoType11v690extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType11v690extIEs(): Sequence(&theInfo) {}

	void setDummy(const DummyInterFreqRACHReportingInfo& Dummy) { *static_cast<DummyInterFreqRACHReportingInfo*>(items[0]) = Dummy; }
};

class SysInfoType11v6b0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType11v6b0extIEs(): Sequence(&theInfo) {}

	void setInterFreqRACHReportingInfo(const InterFreqRACHReportingInfo& InterFreqRACHReportingInfo) { *static_cast<InterFreqRACHReportingInfo*>(items[0]) = InterFreqRACHReportingInfo; }
};

class MBSFNFrequency : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBSFNFrequency(): Sequence(&theInfo) {}

	void setFrequencyInfo(const FrequencyInfo& FrequencyInfo) { *static_cast<FrequencyInfo*>(items[0]) = FrequencyInfo; }
};

typedef SequenceOf<MBSFNFrequency, CONSTRAINED, 0, maxMBSFNClusters> MBSFNFrequencyList;

class SysInfoType11v770extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType11v770extIEs(): Sequence(&theInfo) {}

	void setMbsfnFrequencyList(const MBSFNFrequencyList& MbsfnFrequencyList) { *static_cast<MBSFNFrequencyList*>(items[0]) = MbsfnFrequencyList; }
};

class SysInfoType11v7b0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType11v7b0extIEs(): Sequence(&theInfo) {}

	void setNewInterFreqCellList(const NewInterFreqCellListv7b0ext& NewInterFreqCellList) { *static_cast<NewInterFreqCellListv7b0ext*>(items[0]) = NewInterFreqCellList; }
};

enum MBSFNFrequencyv860extimb_IndicationValues {
	true_MBSFNFrequencyv860extimb_Indication = 0,
};
typedef Enumerated<CONSTRAINED, 0> MBSFNFrequencyv860extimb_Indication;

class MBSFNFrequencyv860ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBSFNFrequencyv860ext(): Sequence(&theInfo) {}

	void setMBSFNFrequencyv860extimb_Indication(const MBSFNFrequencyv860extimb_Indication& MBSFNFrequencyv860extimb_Indication) { *static_cast<MBSFNFrequencyv860extimb_Indication*>(items[0]) = MBSFNFrequencyv860extimb_Indication; }
};

typedef SequenceOf<MBSFNFrequencyv860ext, CONSTRAINED, 0, maxMBSFNClusters> MBSFNFrequencyListv860ext;

class SysInfoType11v860extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType11v860extIEs(): Sequence(&theInfo) {}

	void setMbsfnFrequencyList(const MBSFNFrequencyListv860ext& MbsfnFrequencyList) { *static_cast<MBSFNFrequencyListv860ext*>(items[0]) = MbsfnFrequencyList; }
};

class SysInfoType11bis : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType11bis(): Sequence(&theInfo) {}

	void setMeasurementControlSysInfo(const MeasurementControlSysInfoExtension& MeasurementControlSysInfo) { *static_cast<MeasurementControlSysInfoExtension*>(items[0]) = MeasurementControlSysInfo; }
};

class SysInfoType11bisv7b0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType11bisv7b0extIEs(): Sequence(&theInfo) {}

	void setNewInterFreqCellList(const NewInterFreqCellListv7b0ext& NewInterFreqCellList) { *static_cast<NewInterFreqCellListv7b0ext*>(items[0]) = NewInterFreqCellList; }
};

class SysInfoType11bisv860extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType11bisv860extIEs(): Sequence(&theInfo) {}

	void setCsgPSCSplitInfo(const CSGPSCSplitInfo& CsgPSCSplitInfo) { *static_cast<CSGPSCSplitInfo*>(items[0]) = CsgPSCSplitInfo; }
};

class SysInfoType12 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType12(): Sequence(&theInfo) {}

	void setFachMeasurementOccasionInfo(const FACHMeasurementOccasionInfo& FachMeasurementOccasionInfo) { *static_cast<FACHMeasurementOccasionInfo*>(items[0]) = FachMeasurementOccasionInfo; }
};

class SysInfoType12v590extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType12v590extIEs(): Sequence(&theInfo) {}

	void setSysInfoType12v590extIEsNewIntraFrequencyCellInfoListv590ext(const SysInfoType12v590extIEsNewIntraFrequencyCellInfoListv590ext& SysInfoType12v590extIEsNewIntraFrequencyCellInfoListv590ext) { *static_cast<SysInfoType12v590extIEsNewIntraFrequencyCellInfoListv590ext*>(items[0]) = SysInfoType12v590extIEsNewIntraFrequencyCellInfoListv590ext; }
};

class SysInfoType12v690extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType12v690extIEs(): Sequence(&theInfo) {}

	void setDummy(const DummyInterFreqRACHReportingInfo& Dummy) { *static_cast<DummyInterFreqRACHReportingInfo*>(items[0]) = Dummy; }
};

class SysInfoType12v6b0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType12v6b0extIEs(): Sequence(&theInfo) {}

	void setInterFreqRACHReportingInfo(const InterFreqRACHReportingInfo& InterFreqRACHReportingInfo) { *static_cast<InterFreqRACHReportingInfo*>(items[0]) = InterFreqRACHReportingInfo; }
};

class SysInfoType12v7b0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType12v7b0extIEs(): Sequence(&theInfo) {}

	void setNewInterFreqCellList(const NewInterFreqCellListv7b0ext& NewInterFreqCellList) { *static_cast<NewInterFreqCellListv7b0ext*>(items[0]) = NewInterFreqCellList; }
};

class SysInfoType13 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType13(): Sequence(&theInfo) {}

	void setCnDomainSysInfoList(const CNDomainSysInfoList& CnDomainSysInfoList) { *static_cast<CNDomainSysInfoList*>(items[0]) = CnDomainSysInfoList; }
};

class SysInfoType13v3a0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType13v3a0extIEs(): Sequence(&theInfo) {}

	void setUeIdleTimersAndConstantsv3a0ext(const UEIdleTimersAndConstantsv3a0ext& UeIdleTimersAndConstantsv3a0ext) { *static_cast<UEIdleTimersAndConstantsv3a0ext*>(items[0]) = UeIdleTimersAndConstantsv3a0ext; }
};

class SysInfoType13v4b0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType13v4b0extIEs(): Sequence(&theInfo) {}

	void setCapabilityUpdateRequirementr4Ext(const CapabilityUpdateRequirementr4ext& CapabilityUpdateRequirementr4Ext) { *static_cast<CapabilityUpdateRequirementr4ext*>(items[0]) = CapabilityUpdateRequirementr4Ext; }
};

class SysInfoType13v770extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType13v770extIEs(): Sequence(&theInfo) {}

	void setCapabilityUpdateRequirement(const CapabilityUpdateRequirementv770ext& CapabilityUpdateRequirement) { *static_cast<CapabilityUpdateRequirementv770ext*>(items[0]) = CapabilityUpdateRequirement; }
};


class SysInfoType131 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType131(): Sequence(&theInfo) {}

	void setAnsi41RANDInformation(const ANSI41RANDInformation& Ansi41RANDInformation) { *static_cast<ANSI41RANDInformation*>(items[0]) = Ansi41RANDInformation; }
};


class SysInfoType132 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType132(): Sequence(&theInfo) {}

	void setAnsi41UserZoneIDInformation(const ANSI41UserZoneIDInformation& Ansi41UserZoneIDInformation) { *static_cast<ANSI41UserZoneIDInformation*>(items[0]) = Ansi41UserZoneIDInformation; }
};


class SysInfoType133 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType133(): Sequence(&theInfo) {}

	void setAnsi41PrivateNeighbourListInfo(const ANSI41PrivateNeighbourListInfo& Ansi41PrivateNeighbourListInfo) { *static_cast<ANSI41PrivateNeighbourListInfo*>(items[0]) = Ansi41PrivateNeighbourListInfo; }
};


class SysInfoType134 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType134(): Sequence(&theInfo) {}

	void setAnsi41GlobalServiceRedirectInfo(const ANSI41GlobalServiceRedirectInfo& Ansi41GlobalServiceRedirectInfo) { *static_cast<ANSI41GlobalServiceRedirectInfo*>(items[0]) = Ansi41GlobalServiceRedirectInfo; }
};

class SysInfoType14 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType14(): Sequence(&theInfo) {}

	void setIndividualTSInterferenceList(const IndividualTSInterferenceList& IndividualTSInterferenceList) { *static_cast<IndividualTSInterferenceList*>(items[0]) = IndividualTSInterferenceList; }
};

class SysInfoType15 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType15(): Sequence(&theInfo) {}

	void setUepositioningGPSCipherParameters(const UEPositioningCipherParameters& UepositioningGPSCipherParameters) { *static_cast<UEPositioningCipherParameters*>(items[0]) = UepositioningGPSCipherParameters; }
};

class SysInfoType15v4b0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType15v4b0extIEs(): Sequence(&theInfo) {}

	void setUpIpdlParametersTDD(const UEPositioningIPDLParametersTDDr4ext& UpIpdlParametersTDD) { *static_cast<UEPositioningIPDLParametersTDDr4ext*>(items[0]) = UpIpdlParametersTDD; }
};

class SysInfoType15v770extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType15v770extIEs(): Sequence(&theInfo) {}

	void setUePositioningGPSReferenceTime(const UEPositioningGPSReferenceTimev770ext& UePositioningGPSReferenceTime) { *static_cast<UEPositioningGPSReferenceTimev770ext*>(items[0]) = UePositioningGPSReferenceTime; }
};

class SysInfoType15bis : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType15bis(): Sequence(&theInfo) {}

	void setUepositioningGANSSReferencePosition(const ReferenceLocationGANSS& UepositioningGANSSReferencePosition) { *static_cast<ReferenceLocationGANSS*>(items[0]) = UepositioningGANSSReferencePosition; }
};

class SysInfoType15bisv860extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType15bisv860extIEs(): Sequence(&theInfo) {}

	void setUePositioningGANSSAddIonoModel(const UEPositioningGANSSAddIonoModel& UePositioningGANSSAddIonoModel) { *static_cast<UEPositioningGANSSAddIonoModel*>(items[0]) = UePositioningGANSSAddIonoModel; }
};

class SysInfoType151 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType151(): Sequence(&theInfo) {}

	void setUepositioningGPSDGPSCorrections(const UEPositioningGPSDGPSCorrections& UepositioningGPSDGPSCorrections) { *static_cast<UEPositioningGPSDGPSCorrections*>(items[0]) = UepositioningGPSDGPSCorrections; }
};

class SysInfoType151v920extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType151v920extIEs(): Sequence(&theInfo) {}

	void setUepositioningGPSDGPSCorrections(const UEPositioningGPSDGPSCorrectionsv920ext& UepositioningGPSDGPSCorrections) { *static_cast<UEPositioningGPSDGPSCorrectionsv920ext*>(items[0]) = UepositioningGPSDGPSCorrections; }
};

class SysInfoType151bis : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType151bis(): Sequence(&theInfo) {}

	void setUepositioningGANSSDGANSSCorrections(const UEPositioningDGANSSCorrections& UepositioningGANSSDGANSSCorrections) { *static_cast<UEPositioningDGANSSCorrections*>(items[0]) = UepositioningGANSSDGANSSCorrections; }
};

class SysInfoType151bisv920extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType151bisv920extIEs(): Sequence(&theInfo) {}

	void setUepositioningGANSSDGANSSCorrections(const UEPositioningDGANSSCorrectionsv920ext& UepositioningGANSSDGANSSCorrections) { *static_cast<UEPositioningDGANSSCorrectionsv920ext*>(items[0]) = UepositioningGANSSDGANSSCorrections; }
};

class SysInfoType152 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType152(): Sequence(&theInfo) {}

	void setTransmissionTOW(const GPSTOW1sec& TransmissionTOW) { *static_cast<GPSTOW1sec*>(items[0]) = TransmissionTOW; }
};

class SysInfoType152bis : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType152bis(): Sequence(&theInfo) {}

	void setUepositioningGANSSnavigationModel(const UEPositioningGANSSNavigationModel& UepositioningGANSSnavigationModel) { *static_cast<UEPositioningGANSSNavigationModel*>(items[0]) = UepositioningGANSSnavigationModel; }
};

class SysInfoType152ter : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType152ter(): Sequence(&theInfo) {}

	void setUepositioningGANSSAddNavigationModels(const UEPositioningGANSSAddNavigationModels& UepositioningGANSSAddNavigationModels) { *static_cast<UEPositioningGANSSAddNavigationModels*>(items[0]) = UepositioningGANSSAddNavigationModels; }
};

class SysInfoType153 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType153(): Sequence(&theInfo) {}

	void setTransmissionTOW(const GPSTOW1sec& TransmissionTOW) { *static_cast<GPSTOW1sec*>(items[0]) = TransmissionTOW; }
};

class SysInfoType153bis : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType153bis(): Sequence(&theInfo) {}

	void setUepositioningGANSSAlmanac(const UEPositioningGANSSAlmanac& UepositioningGANSSAlmanac) { *static_cast<UEPositioningGANSSAlmanac*>(items[0]) = UepositioningGANSSAlmanac; }
};

class SysInfoType153bisv860extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType153bisv860extIEs(): Sequence(&theInfo) {}

	void setUePositioningGANSSAlmanac(const UEPositioningGANSSAlmanacv860ext& UePositioningGANSSAlmanac) { *static_cast<UEPositioningGANSSAlmanacv860ext*>(items[0]) = UePositioningGANSSAlmanac; }
};

class SysInfoType154 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType154(): Sequence(&theInfo) {}

	void setUepositioningOTDOACipherParameters(const UEPositioningCipherParameters& UepositioningOTDOACipherParameters) { *static_cast<UEPositioningCipherParameters*>(items[0]) = UepositioningOTDOACipherParameters; }
};

class SysInfoType154v3a0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType154v3a0ext(): Sequence(&theInfo) {}

	void setSfnOffsetValidity(const SFNOffsetValidity& SfnOffsetValidity) { *static_cast<SFNOffsetValidity*>(items[0]) = SfnOffsetValidity; }
};

class SysInfoType154v4b0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType154v4b0ext(): Sequence(&theInfo) {}

	void setUePositioningOTDOAAssistanceDatar4ext(const UEPositioningOTDOAAssistanceDatar4ext& UePositioningOTDOAAssistanceDatar4ext) { *static_cast<UEPositioningOTDOAAssistanceDatar4ext*>(items[0]) = UePositioningOTDOAAssistanceDatar4ext; }
};

class SysInfoType155 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType155(): Sequence(&theInfo) {}

	void setUepositioningOTDOAAssistanceDataUEB(const UEPositioningOTDOAAssistanceDataUEB& UepositioningOTDOAAssistanceDataUEB) { *static_cast<UEPositioningOTDOAAssistanceDataUEB*>(items[0]) = UepositioningOTDOAAssistanceDataUEB; }
};

class SysInfoType155v3a0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType155v3a0ext(): Sequence(&theInfo) {}

	void setSfnOffsetValidity(const SFNOffsetValidity& SfnOffsetValidity) { *static_cast<SFNOffsetValidity*>(items[0]) = SfnOffsetValidity; }
};

class SysInfoType155v770extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType155v770extIEs(): Sequence(&theInfo) {}

	void setUePositioningOTDOAAssistanceDataUEBext(const UEPositioningOTDOAAssistanceDataUEBext& UePositioningOTDOAAssistanceDataUEBext) { *static_cast<UEPositioningOTDOAAssistanceDataUEBext*>(items[0]) = UePositioningOTDOAAssistanceDataUEBext; }
};

typedef Integer<EXTCONSTRAINED, 0, 86399> SysInfoType156UepositioningGANSSTOD;

class SysInfoType156 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType156(): Sequence(&theInfo) {}

	void setSysInfoType156UepositioningGANSSTOD(const SysInfoType156UepositioningGANSSTOD& SysInfoType156UepositioningGANSSTOD) { *static_cast<SysInfoType156UepositioningGANSSTOD*>(items[0]) = SysInfoType156UepositioningGANSSTOD; }
};

class SysInfoType157 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType157(): Sequence(&theInfo) {}

	void setUepositioningGANSSDataBitAssistance(const UEPositioningGANSSDataBitAssistance& UepositioningGANSSDataBitAssistance) { *static_cast<UEPositioningGANSSDataBitAssistance*>(items[0]) = UepositioningGANSSDataBitAssistance; }
};

class SysInfoType158 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType158(): Sequence(&theInfo) {}

	void setUepositioningGANSSDataCipheringInfo(const UEPositioningCipherParameters& UepositioningGANSSDataCipheringInfo) { *static_cast<UEPositioningCipherParameters*>(items[0]) = UepositioningGANSSDataCipheringInfo; }
};

class SysInfoType16 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType16(): Sequence(&theInfo) {}

	void setPreDefinedRadioConfiguration(const PreDefRadioConfiguration& PreDefinedRadioConfiguration) { *static_cast<PreDefRadioConfiguration*>(items[0]) = PreDefinedRadioConfiguration; }
};

class SysInfoType16v770extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType16v770extIEs(): Sequence(&theInfo) {}

	void setPreDefinedRadioConfiguration(const PreDefRadioConfigurationv770ext& PreDefinedRadioConfiguration) { *static_cast<PreDefRadioConfigurationv770ext*>(items[0]) = PreDefinedRadioConfiguration; }
};

class SysInfoType16v920extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType16v920extIEs(): Sequence(&theInfo) {}

	void setPreDefinedRadioConfiguration(const PreDefRadioConfigurationv920ext& PreDefinedRadioConfiguration) { *static_cast<PreDefRadioConfigurationv920ext*>(items[0]) = PreDefinedRadioConfiguration; }
};

class SysInfoType17 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType17(): Sequence(&theInfo) {}

	void setPuschSysInfoList(const PUSCHSysInfoList& PuschSysInfoList) { *static_cast<PUSCHSysInfoList*>(items[0]) = PuschSysInfoList; }
};

class SysInfoType17v4b0extIEsTdd128SpecificInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType17v4b0extIEsTdd128SpecificInfo(): Sequence(&theInfo) {}

	void setPuschSysInfoList(const PUSCHSysInfoListLCRr4& PuschSysInfoList) { *static_cast<PUSCHSysInfoListLCRr4*>(items[0]) = PuschSysInfoList; }
};

class SysInfoType17v4b0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType17v4b0extIEs(): Sequence(&theInfo) {}

	void setSysInfoType17v4b0extIEsTdd128SpecificInfo(const SysInfoType17v4b0extIEsTdd128SpecificInfo& SysInfoType17v4b0extIEsTdd128SpecificInfo) { *static_cast<SysInfoType17v4b0extIEsTdd128SpecificInfo*>(items[0]) = SysInfoType17v4b0extIEsTdd128SpecificInfo; }
};

class SysInfoType17v590extIEsHcrr5SpecificInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType17v590extIEsHcrr5SpecificInfo(): Sequence(&theInfo) {}

	void setPuschSysInfoList(const PUSCHSysInfoListHCRr5& PuschSysInfoList) { *static_cast<PUSCHSysInfoListHCRr5*>(items[0]) = PuschSysInfoList; }
};

class SysInfoType17v590extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType17v590extIEs(): Sequence(&theInfo) {}

	void setSysInfoType17v590extIEsHcrr5SpecificInfo(const SysInfoType17v590extIEsHcrr5SpecificInfo& SysInfoType17v590extIEsHcrr5SpecificInfo) { *static_cast<SysInfoType17v590extIEsHcrr5SpecificInfo*>(items[0]) = SysInfoType17v590extIEsHcrr5SpecificInfo; }
};

class SysInfoType17v770extIEsTdd768SpecificInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType17v770extIEsTdd768SpecificInfo(): Sequence(&theInfo) {}

	void setPuschSysInfoListSFN(const PUSCHSysInfoListSFNVHCR& PuschSysInfoListSFN) { *static_cast<PUSCHSysInfoListSFNVHCR*>(items[0]) = PuschSysInfoListSFN; }
};

class SysInfoType17v770extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType17v770extIEs(): Sequence(&theInfo) {}

	void setSysInfoType17v770extIEsTdd768SpecificInfo(const SysInfoType17v770extIEsTdd768SpecificInfo& SysInfoType17v770extIEsTdd768SpecificInfo) { *static_cast<SysInfoType17v770extIEsTdd768SpecificInfo*>(items[0]) = SysInfoType17v770extIEsTdd768SpecificInfo; }
};

class SysInfoType18 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType18(): Sequence(&theInfo) {}

	void setIdleModePLMNIdentities(const PLMNIdentitiesOfNeighbourCells& IdleModePLMNIdentities) { *static_cast<PLMNIdentitiesOfNeighbourCells*>(items[0]) = IdleModePLMNIdentities; }
};

class SysInfoType18v6b0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType18v6b0ext(): Sequence(&theInfo) {}

	void setIdleModePLMNIdentitiesSIB11bis(const PLMNIdentitiesOfNeighbourCells& IdleModePLMNIdentitiesSIB11bis) { *static_cast<PLMNIdentitiesOfNeighbourCells*>(items[0]) = IdleModePLMNIdentitiesSIB11bis; }
};

class SysInfoType18v860ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType18v860ext(): Sequence(&theInfo) {}

	void setIdleModePLMNIdentities(const PLMNIdentitiesOfNeighbourCellsv860ext& IdleModePLMNIdentities) { *static_cast<PLMNIdentitiesOfNeighbourCellsv860ext*>(items[0]) = IdleModePLMNIdentities; }
};

class SysInfoType19 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType19(): Sequence(&theInfo) {}

	void setUtraPriorityInfoList(const UTRAPriorityInfoList& UtraPriorityInfoList) { *static_cast<UTRAPriorityInfoList*>(items[0]) = UtraPriorityInfoList; }
};

class SysInfoType19v920ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType19v920ext(): Sequence(&theInfo) {}

	void setUtraPriorityInfoListv920ext(const UTRAPriorityInfoListv920ext& UtraPriorityInfoListv920ext) { *static_cast<UTRAPriorityInfoListv920ext*>(items[0]) = UtraPriorityInfoListv920ext; }
};

class SysInfoType20 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoType20(): Sequence(&theInfo) {}

	void setHNBName(const HNBName& HNBName) { *static_cast<HNBName*>(items[0]) = HNBName; }
};

class SysInfoTypeSB1 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoTypeSB1(): Sequence(&theInfo) {}

	void setSibReferenceList(const SIBReferenceList& SibReferenceList) { *static_cast<SIBReferenceList*>(items[0]) = SibReferenceList; }
};

class SysInfoTypeSB1v6b0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoTypeSB1v6b0ext(): Sequence(&theInfo) {}

	void setExtSIBTypeInfoSchedulingInfoList(const ExtSIBTypeInfoSchedulingInfoList& ExtSIBTypeInfoSchedulingInfoList) { *static_cast<ExtSIBTypeInfoSchedulingInfoList*>(items[0]) = ExtSIBTypeInfoSchedulingInfoList; }
};

class SysInfoTypeSB1v860ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoTypeSB1v860ext(): Sequence(&theInfo) {}

	void setExtSIBTypeInfoSchedulingInfoList(const ExtSIBTypeInfoSchedulingInfoList2& ExtSIBTypeInfoSchedulingInfoList) { *static_cast<ExtSIBTypeInfoSchedulingInfoList2*>(items[0]) = ExtSIBTypeInfoSchedulingInfoList; }
};

class SysInfoTypeSB2 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoTypeSB2(): Sequence(&theInfo) {}

	void setSibReferenceList(const SIBReferenceList& SibReferenceList) { *static_cast<SIBReferenceList*>(items[0]) = SibReferenceList; }
};

class SysInfoTypeSB2v6b0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoTypeSB2v6b0ext(): Sequence(&theInfo) {}

	void setExtSIBTypeInfoSchedulingInfoList(const ExtSIBTypeInfoSchedulingInfoList& ExtSIBTypeInfoSchedulingInfoList) { *static_cast<ExtSIBTypeInfoSchedulingInfoList*>(items[0]) = ExtSIBTypeInfoSchedulingInfoList; }
};

class SysInfoTypeSB2v860ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SysInfoTypeSB2v860ext(): Sequence(&theInfo) {}

	void setExtSIBTypeInfoSchedulingInfoList(const ExtSIBTypeInfoSchedulingInfoList2& ExtSIBTypeInfoSchedulingInfoList) { *static_cast<ExtSIBTypeInfoSchedulingInfoList2*>(items[0]) = ExtSIBTypeInfoSchedulingInfoList; }
};

typedef SequenceOf<FrequencyInfoTDD, CONSTRAINED, 1, maxNumTDDFreqs> TDDUMTSFrequencyList;

typedef Integer<EXTCONSTRAINED, 1, 120> UEHistoryInformationUeInactivityPeriod;

class UEHistoryInformation : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEHistoryInformation(): Sequence(&theInfo) {}

	void setUEHistoryInformationUeInactivityPeriod(const UEHistoryInformationUeInactivityPeriod& UEHistoryInformationUeInactivityPeriod) { *static_cast<UEHistoryInformationUeInactivityPeriod*>(items[0]) = UEHistoryInformationUeInactivityPeriod; }
};

typedef Null ValueTagInfoNone;

class ValueTagInfo : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	ValueTagInfo(): Choice(&theInfo) {}
};

typedef BitString<CONSTRAINED, 1, 2048> ANSI41NASParameter;

typedef BitString<CONSTRAINED, 8, 8> MinPREV;


typedef BitString<CONSTRAINED, 16, 16> NID;

typedef BitString<CONSTRAINED, 8, 8> PREV;

typedef BitString<CONSTRAINED, 15, 15> SID;

enum MBMSAccessProbabilityFactorValues {
	Apf0,_MBMSAccessProbabilityFactor = 0,
};
typedef Enumerated<CONSTRAINED, 0> MBMSAccessProbabilityFactor;

typedef BitString<CONSTRAINED, 12, 12> MBMSCellGroupIdentityr6;

typedef Integer<CONSTRAINED, 1, 32> MBMSCommonCCTrChIdentity;

typedef Integer<CONSTRAINED, 1, 32> MBMSCommonPhyChIdentity;

typedef Integer<CONSTRAINED, 1, 32> MBMSCommonRBIdentity;

class MBMSCommonRBInformationr6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBMSCommonRBInformationr6(): Sequence(&theInfo) {}

	void setCommonRBIdentity(const MBMSCommonRBIdentity& CommonRBIdentity) { *static_cast<MBMSCommonRBIdentity*>(items[0]) = CommonRBIdentity; }
};

typedef SequenceOf<MBMSCommonRBInformationr6, CONSTRAINED, 1, maxMBMS_CommonRB> MBMSCommonRBInformationListr6;

typedef Integer<CONSTRAINED, 1, 32> MBMSCommonTrChIdentity;

typedef Boolean MBMSConnectedModeCountingScopeCountingForUraPCH;

class MBMSConnectedModeCountingScope : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBMSConnectedModeCountingScope(): Sequence(&theInfo) {}

	void setMBMSConnectedModeCountingScopeCountingForUraPCH(const MBMSConnectedModeCountingScopeCountingForUraPCH& MBMSConnectedModeCountingScopeCountingForUraPCH) { *static_cast<MBMSConnectedModeCountingScopeCountingForUraPCH*>(items[0]) = MBMSConnectedModeCountingScopeCountingForUraPCH; }
};


typedef SequenceOf<MBMSCurrentCellSCCPCHr6, CONSTRAINED, 1, maxSCCPCH> MBMSCurrentCellSCCPCHListr6;

typedef SequenceOf<TransportFormatSet, CONSTRAINED, 1, maxFACHPCH> MBMSFACHCarryingMTCHList;

class MBMSJoinedInformationr6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBMSJoinedInformationr6(): Sequence(&theInfo) {}

	void setPTMSI(const PTMSIGSMMAP& PTMSI) { *static_cast<PTMSIGSMMAP*>(items[0]) = PTMSI; }
};

typedef Integer<EXTCONSTRAINED, SIZE (1, maxMBMS_L1CP> MBMSL1CombiningSchedule32CycleOffset;

class MBMSL1CombiningSchedule32 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBMSL1CombiningSchedule32(): Sequence(&theInfo) {}

	void setMBMSL1CombiningSchedule32CycleOffset(const MBMSL1CombiningSchedule32CycleOffset& MBMSL1CombiningSchedule32CycleOffset) { *static_cast<MBMSL1CombiningSchedule32CycleOffset*>(items[0]) = MBMSL1CombiningSchedule32CycleOffset; }
};

typedef Integer<EXTCONSTRAINED, SIZE (1, maxMBMS_L1CP> MBMSL1CombiningSchedule64CycleOffset;

class MBMSL1CombiningSchedule64 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBMSL1CombiningSchedule64(): Sequence(&theInfo) {}

	void setMBMSL1CombiningSchedule64CycleOffset(const MBMSL1CombiningSchedule64CycleOffset& MBMSL1CombiningSchedule64CycleOffset) { *static_cast<MBMSL1CombiningSchedule64CycleOffset*>(items[0]) = MBMSL1CombiningSchedule64CycleOffset; }
};

typedef Integer<EXTCONSTRAINED, SIZE (1, maxMBMS_L1CP> MBMSL1CombiningSchedule128CycleOffset;

class MBMSL1CombiningSchedule128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBMSL1CombiningSchedule128(): Sequence(&theInfo) {}

	void setMBMSL1CombiningSchedule128CycleOffset(const MBMSL1CombiningSchedule128CycleOffset& MBMSL1CombiningSchedule128CycleOffset) { *static_cast<MBMSL1CombiningSchedule128CycleOffset*>(items[0]) = MBMSL1CombiningSchedule128CycleOffset; }
};

typedef Integer<EXTCONSTRAINED, SIZE (1, maxMBMS_L1CP> MBMSL1CombiningSchedule256CycleOffset;

class MBMSL1CombiningSchedule256 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBMSL1CombiningSchedule256(): Sequence(&theInfo) {}

	void setMBMSL1CombiningSchedule256CycleOffset(const MBMSL1CombiningSchedule256CycleOffset& MBMSL1CombiningSchedule256CycleOffset) { *static_cast<MBMSL1CombiningSchedule256CycleOffset*>(items[0]) = MBMSL1CombiningSchedule256CycleOffset; }
};

typedef Integer<EXTCONSTRAINED, SIZE (1, maxMBMS_L1CP> MBMSL1CombiningSchedule512CycleOffset;

class MBMSL1CombiningSchedule512 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBMSL1CombiningSchedule512(): Sequence(&theInfo) {}

	void setMBMSL1CombiningSchedule512CycleOffset(const MBMSL1CombiningSchedule512CycleOffset& MBMSL1CombiningSchedule512CycleOffset) { *static_cast<MBMSL1CombiningSchedule512CycleOffset*>(items[0]) = MBMSL1CombiningSchedule512CycleOffset; }
};

typedef Integer<EXTCONSTRAINED, SIZE (1, maxMBMS_L1CP> MBMSL1CombiningSchedule1024CycleOffset;

class MBMSL1CombiningSchedule1024 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBMSL1CombiningSchedule1024(): Sequence(&theInfo) {}

	void setMBMSL1CombiningSchedule1024CycleOffset(const MBMSL1CombiningSchedule1024CycleOffset& MBMSL1CombiningSchedule1024CycleOffset) { *static_cast<MBMSL1CombiningSchedule1024CycleOffset*>(items[0]) = MBMSL1CombiningSchedule1024CycleOffset; }
};

class MBMSL1CombiningSchedule : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	MBMSL1CombiningSchedule(): Choice(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 3> MBMSL1CombiningTransmTimeDiff;

typedef Integer<CONSTRAINED, 1, maxSCCPCH> MBMSSCCPCHIdentity;

class MBMSL23ConfigurationSameAsCurrent : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBMSL23ConfigurationSameAsCurrent(): Sequence(&theInfo) {}

	void setCurrentCellSCCPCH(const MBMSSCCPCHIdentity& CurrentCellSCCPCH) { *static_cast<MBMSSCCPCHIdentity*>(items[0]) = CurrentCellSCCPCH; }
};

class MBMSL23Configuration : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	MBMSL23Configuration(): Choice(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 15> MBMSLogicalChIdentity;

typedef Integer<EXTCONSTRAINED, 0, 3> MBMSMCCHConfigurationInfor6AccessInfoPeriodCoefficient;

class MBMSMCCHConfigurationInfor6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBMSMCCHConfigurationInfor6(): Sequence(&theInfo) {}

	void setMBMSMCCHConfigurationInfor6AccessInfoPeriodCoefficient(const MBMSMCCHConfigurationInfor6AccessInfoPeriodCoefficient& MBMSMCCHConfigurationInfor6AccessInfoPeriodCoefficient) { *static_cast<MBMSMCCHConfigurationInfor6AccessInfoPeriodCoefficient*>(items[0]) = MBMSMCCHConfigurationInfor6AccessInfoPeriodCoefficient; }
};

typedef Integer<CONSTRAINED, -10, 5> MBMSMICHPowerOffset;

class MBMSMICHConfigurationInfor6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBMSMICHConfigurationInfor6(): Sequence(&theInfo) {}

	void setMichPowerOffset(const MBMSMICHPowerOffset& MichPowerOffset) { *static_cast<MBMSMICHPowerOffset*>(items[0]) = MichPowerOffset; }
};

class MBMSMICHConfigurationInfov770extMode : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	MBMSMICHConfigurationInfov770extMode(): Choice(&theInfo) {}
};

class MBMSMICHConfigurationInfov770ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBMSMICHConfigurationInfov770ext(): Sequence(&theInfo) {}

	void setMBMSMICHConfigurationInfov770extMode(const MBMSMICHConfigurationInfov770extMode& MBMSMICHConfigurationInfov770extMode) { *static_cast<MBMSMICHConfigurationInfov770extMode*>(items[0]) = MBMSMICHConfigurationInfov770extMode; }
};

class MBMSMICHConfigurationInfov890extModeImb384 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBMSMICHConfigurationInfov890extModeImb384(): Sequence(&theInfo) {}

	void setChannelisationCode256(const ChannelisationCode256& ChannelisationCode256) { *static_cast<ChannelisationCode256*>(items[0]) = ChannelisationCode256; }
};

class MBMSMICHConfigurationInfov890extMode : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	MBMSMICHConfigurationInfov890extMode(): Choice(&theInfo) {}
};

class MBMSMICHConfigurationInfov890ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBMSMICHConfigurationInfov890ext(): Sequence(&theInfo) {}

	void setMBMSMICHConfigurationInfov890extMode(const MBMSMICHConfigurationInfov890extMode& MBMSMICHConfigurationInfov890extMode) { *static_cast<MBMSMICHConfigurationInfov890extMode*>(items[0]) = MBMSMICHConfigurationInfov890extMode; }
};

enum MBMSMICHNotificationIndLengthValues {
	Mn4,_MBMSMICHNotificationIndLength = 0,
};
typedef Enumerated<CONSTRAINED, 0> MBMSMICHNotificationIndLength;

typedef OctetString<EXTCONSTRAINED, 3, 3> MBMSServiceIdentityr6ServiceIdentity;

class MBMSServiceIdentityr6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBMSServiceIdentityr6(): Sequence(&theInfo) {}

	void setMBMSServiceIdentityr6ServiceIdentity(const MBMSServiceIdentityr6ServiceIdentity& MBMSServiceIdentityr6ServiceIdentity) { *static_cast<MBMSServiceIdentityr6ServiceIdentity*>(items[0]) = MBMSServiceIdentityr6ServiceIdentity; }
};

class MBMSTransmissionIdentity : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBMSTransmissionIdentity(): Sequence(&theInfo) {}

	void setMbmsServiceIdentity(const MBMSServiceIdentityr6& MbmsServiceIdentity) { *static_cast<MBMSServiceIdentityr6*>(items[0]) = MbmsServiceIdentity; }
};

class MBMSModifedServicer6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBMSModifedServicer6(): Sequence(&theInfo) {}

	void setMbmsTransmissionIdentity(const MBMSTransmissionIdentity& MbmsTransmissionIdentity) { *static_cast<MBMSTransmissionIdentity*>(items[0]) = MbmsTransmissionIdentity; }
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

	void setMbsfnClusterFrequency(const MBSFNClusterFrequencyr7& MbsfnClusterFrequency) { *static_cast<MBSFNClusterFrequencyr7*>(items[0]) = MbsfnClusterFrequency; }
};

enum MBMSPTMRBReleaseCauseLCRr7Values {
	NormalRelease,_MBMSPTMRBReleaseCauseLCRr7 = 0,
};
typedef Enumerated<CONSTRAINED, 0> MBMSPTMRBReleaseCauseLCRr7;

class MBMSModifiedServiceLCRv7c0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBMSModifiedServiceLCRv7c0ext(): Sequence(&theInfo) {}

	void setRbReleaseCause(const MBMSPTMRBReleaseCauseLCRr7& RbReleaseCause) { *static_cast<MBMSPTMRBReleaseCauseLCRr7*>(items[0]) = RbReleaseCause; }
};

typedef SequenceOf<MBMSModifiedServicev770ext, CONSTRAINED, 1, maxMBMSservModif> MBMSModifiedServiceListv770ext;

typedef SequenceOf<MBMSModifiedServiceLCRv7c0ext, CONSTRAINED, 1, maxMBMSservModif> MBMSModifiedServiceListLCRv7c0ext;

typedef Integer<EXTCONSTRAINED, 0, 31> MBMSMSCHSchedulingInfoSchedulingPeriod32Offset;

class MBMSMSCHSchedulingInfo : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	MBMSMSCHSchedulingInfo(): Choice(&theInfo) {}
};

class MBMSMSCHConfigurationInfor6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBMSMSCHConfigurationInfor6(): Sequence(&theInfo) {}

	void setMschShedulingInfo(const MBMSMSCHSchedulingInfo& MschShedulingInfo) { *static_cast<MBMSMSCHSchedulingInfo*>(items[0]) = MschShedulingInfo; }
};

class MBMSNeighbouringCellSCCPCHr6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBMSNeighbouringCellSCCPCHr6(): Sequence(&theInfo) {}

	void setSecondaryCCPCHInfo(const MBMSCommonPhyChIdentity& SecondaryCCPCHInfo) { *static_cast<MBMSCommonPhyChIdentity*>(items[0]) = SecondaryCCPCHInfo; }
};

typedef SequenceOf<MBMSNeighbouringCellSCCPCHr6, CONSTRAINED, 1, maxSCCPCH> MBMSNeighbouringCellSCCPCHListr6;


typedef SequenceOf<MBMSNeighbouringCellSCCPCHv770ext, CONSTRAINED, 1, maxSCCPCH> MBMSNeighbouringCellSCCPCHListv770ext;

typedef BitString<EXTCONSTRAINED, 40, 40> MBMSNetworkStandardTimeInformationLCRv890extNetworkStandardTime;

class MBMSNetworkStandardTimeInformationLCRv890ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBMSNetworkStandardTimeInformationLCRv890ext(): Sequence(&theInfo) {}

	void setMBMSNetworkStandardTimeInformationLCRv890extNetworkStandardTime(const MBMSNetworkStandardTimeInformationLCRv890extNetworkStandardTime& MBMSNetworkStandardTimeInformationLCRv890extNetworkStandardTime) { *static_cast<MBMSNetworkStandardTimeInformationLCRv890extNetworkStandardTime*>(items[0]) = MBMSNetworkStandardTimeInformationLCRv890extNetworkStandardTime; }
};

enum MBMSNICountPerFrameValues {
	Ni18,_MBMSNICountPerFrame = 0,
};
typedef Enumerated<CONSTRAINED, 0> MBMSNICountPerFrame;

enum MBMSNICountPerFrameIMB384Values {
	Ni16,_MBMSNICountPerFrameIMB384 = 0,
};
typedef Enumerated<CONSTRAINED, 0> MBMSNICountPerFrameIMB384;

typedef Integer<CONSTRAINED, 0, 32> MBMSNumberOfNeighbourCellsr6;

typedef Integer<CONSTRAINED, 1, maxMBMS_Freq> MBMSPFLIndex;


class MBMSPhyChInformationIMB384 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBMSPhyChInformationIMB384(): Sequence(&theInfo) {}

	void setMbmsCommonPhyChIdentity(const MBMSCommonPhyChIdentity& MbmsCommonPhyChIdentity) { *static_cast<MBMSCommonPhyChIdentity*>(items[0]) = MbmsCommonPhyChIdentity; }
};

typedef SequenceOf<MBMSPhyChInformationIMB384, CONSTRAINED, 1, maxMBMS_CommonPhyCh> MBMSPhyChInformationListIMB384;

class MBMSPhyChInformationr6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBMSPhyChInformationr6(): Sequence(&theInfo) {}

	void setMbmsCommonPhyChIdentity(const MBMSCommonPhyChIdentity& MbmsCommonPhyChIdentity) { *static_cast<MBMSCommonPhyChIdentity*>(items[0]) = MbmsCommonPhyChIdentity; }
};

class MBMSPhyChInformationr7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBMSPhyChInformationr7(): Sequence(&theInfo) {}

	void setMbmsCommonPhyChIdentity(const MBMSCommonPhyChIdentity& MbmsCommonPhyChIdentity) { *static_cast<MBMSCommonPhyChIdentity*>(items[0]) = MbmsCommonPhyChIdentity; }
};

typedef SequenceOf<MBMSPhyChInformationr6, CONSTRAINED, 1, maxMBMS_CommonPhyCh> MBMSPhyChInformationListr6;

typedef SequenceOf<MBMSPhyChInformationr7, CONSTRAINED, 1, maxMBMS_CommonPhyCh> MBMSPhyChInformationListr7;

enum MBMSPLServiceRestrictInfor6Values {
	true_MBMSPLServiceRestrictInfor6 = 0,
};
typedef Enumerated<CONSTRAINED, 0> MBMSPLServiceRestrictInfor6;

typedef Integer<EXTCONSTRAINED, 1, maxMBMS_Freq> MBMSPreferredFrequencyInfor6MbmsPreferredFrequency;

class MBMSPreferredFrequencyInfor6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBMSPreferredFrequencyInfor6(): Sequence(&theInfo) {}

	void setMBMSPreferredFrequencyInfor6MbmsPreferredFrequency(const MBMSPreferredFrequencyInfor6MbmsPreferredFrequency& MBMSPreferredFrequencyInfor6MbmsPreferredFrequency) { *static_cast<MBMSPreferredFrequencyInfor6MbmsPreferredFrequency*>(items[0]) = MBMSPreferredFrequencyInfor6MbmsPreferredFrequency; }
};

typedef SequenceOf<MBMSPreferredFrequencyInfor6, CONSTRAINED, 1, maxMBMS_Freq> MBMSPreferredFrequencyListr6;

typedef Integer<CONSTRAINED, 0, 2047> MBMSPTMActivationTimer6;

class MBMSPTMRBInformationC : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBMSPTMRBInformationC(): Sequence(&theInfo) {}

	void setRbInformation(const MBMSCommonRBIdentity& RbInformation) { *static_cast<MBMSCommonRBIdentity*>(items[0]) = RbInformation; }
};

typedef SequenceOf<MBMSPTMRBInformationC, CONSTRAINED, 1, maxRBperTrCh> MBMSPTMRBInformationCList;

typedef Integer<CONSTRAINED, 1, maxMBMSservUnmodif> MBMSShortTransmissionID;

class MBMSPTMRBInformationN : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBMSPTMRBInformationN(): Sequence(&theInfo) {}

	void setShortTransmissionID(const MBMSShortTransmissionID& ShortTransmissionID) { *static_cast<MBMSShortTransmissionID*>(items[0]) = ShortTransmissionID; }
};

typedef SequenceOf<MBMSPTMRBInformationN, CONSTRAINED, 1, maxRBperTrCh> MBMSPTMRBInformationNList;

enum MBMSQoffsetValues {
	Q4,_MBMSQoffset = 0,
};
typedef Enumerated<CONSTRAINED, 0> MBMSQoffset;

enum MBMSRequiredUEActionModValues {
	None,_MBMSRequiredUEActionMod = 0,
};
typedef Enumerated<CONSTRAINED, 0> MBMSRequiredUEActionMod;

enum MBMSRequiredUEActionUModValues {
	None,_MBMSRequiredUEActionUMod = 0,
};
typedef Enumerated<CONSTRAINED, 0> MBMSRequiredUEActionUMod;

enum MBMSSCCPCHPwrOffsetDiffValues {
	Mcpominus6,_MBMSSCCPCHPwrOffsetDiff = 0,
};
typedef Enumerated<CONSTRAINED, 0> MBMSSCCPCHPwrOffsetDiff;

typedef Null MBMSSelectedServiceInfoStatusNone;

class MBMSSelectedServiceInfoStatus : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	MBMSSelectedServiceInfoStatus(): Choice(&theInfo) {}
};

class MBMSSelectedServiceInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBMSSelectedServiceInfo(): Sequence(&theInfo) {}

	void setMBMSSelectedServiceInfoStatus(const MBMSSelectedServiceInfoStatus& MBMSSelectedServiceInfoStatus) { *static_cast<MBMSSelectedServiceInfoStatus*>(items[0]) = MBMSSelectedServiceInfoStatus; }
};

typedef SequenceOf<MBMSServiceIdentityr6, CONSTRAINED, 1, maxMBMSservSelect> MBMSSelectedServicesListFull;

typedef SequenceOf<MBMSShortTransmissionID, CONSTRAINED, 1, maxMBMSservSelect> MBMSSelectedServicesListShort;

class MBMSSelectedServicesShort : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBMSSelectedServicesShort(): Sequence(&theInfo) {}

	void setMbmsSelectedServicesList(const MBMSSelectedServicesListShort& MbmsSelectedServicesList) { *static_cast<MBMSSelectedServicesListShort*>(items[0]) = MbmsSelectedServicesList; }
};

class MBMSServiceAccessInfor6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBMSServiceAccessInfor6(): Sequence(&theInfo) {}

	void setShortTransmissionID(const MBMSShortTransmissionID& ShortTransmissionID) { *static_cast<MBMSShortTransmissionID*>(items[0]) = ShortTransmissionID; }
};

typedef SequenceOf<MBMSServiceAccessInfor6, CONSTRAINED, 1, maxMBMSservCount> MBMSServiceAccessInfoListr6;

class MBMSServiceSchedulingInfor6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBMSServiceSchedulingInfor6(): Sequence(&theInfo) {}

	void setMbmsTransmissionIdentity(const MBMSTransmissionIdentity& MbmsTransmissionIdentity) { *static_cast<MBMSTransmissionIdentity*>(items[0]) = MbmsTransmissionIdentity; }
};

typedef SequenceOf<MBMSServiceSchedulingInfor6, CONSTRAINED, 1, maxMBMSservSched> MBMSServiceSchedulingInfoListr6;

typedef Integer<EXTCONSTRAINED, 0, 255> MBMSServiceTransmInfoStart;

class MBMSServiceTransmInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBMSServiceTransmInfo(): Sequence(&theInfo) {}

	void setMBMSServiceTransmInfoStart(const MBMSServiceTransmInfoStart& MBMSServiceTransmInfoStart) { *static_cast<MBMSServiceTransmInfoStart*>(items[0]) = MBMSServiceTransmInfoStart; }
};

typedef SequenceOf<MBMSServiceTransmInfo, CONSTRAINED, 1, maxMBMSTransmis> MBMSServiceTransmInfoList;

class MBMSSIBType5SCCPCHr6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBMSSIBType5SCCPCHr6(): Sequence(&theInfo) {}

	void setSccpchIdentity(const MBMSSCCPCHIdentity& SccpchIdentity) { *static_cast<MBMSSCCPCHIdentity*>(items[0]) = SccpchIdentity; }
};

typedef SequenceOf<MBMSSIBType5SCCPCHr6, CONSTRAINED, 1, maxSCCPCH> MBMSSIBType5SCCPCHListr6;

enum MBMSSoftCombTimingOffsetValues {
	Ms0,_MBMSSoftCombTimingOffset = 0,
};
typedef Enumerated<CONSTRAINED, 0> MBMSSoftCombTimingOffset;

enum MBMSTCTFPresenceValues {
	false_MBMSTCTFPresence = 0,
};
typedef Enumerated<CONSTRAINED, 0> MBMSTCTFPresence;

class MBMSTimersAndCountersr6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBMSTimersAndCountersr6(): Sequence(&theInfo) {}

	void setT318(const T318& T318) { *static_cast<T318*>(items[0]) = T318; }
};

class MBMSTranspChInfoForCCTrChr6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBMSTranspChInfoForCCTrChr6(): Sequence(&theInfo) {}

	void setCommonCCTrChIdentity(const MBMSCommonCCTrChIdentity& CommonCCTrChIdentity) { *static_cast<MBMSCommonCCTrChIdentity*>(items[0]) = CommonCCTrChIdentity; }
};

typedef SequenceOf<MBMSTranspChInfoForCCTrChr6, CONSTRAINED, 1, maxMBMS_CommonCCTrCh> MBMSTranspChInfoForEachCCTrChr6;

class MBMSTranspChInfoForTrChr6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBMSTranspChInfoForTrChr6(): Sequence(&theInfo) {}

	void setCommonTrChIdentity(const MBMSCommonTrChIdentity& CommonTrChIdentity) { *static_cast<MBMSCommonTrChIdentity*>(items[0]) = CommonTrChIdentity; }
};

typedef SequenceOf<MBMSTranspChInfoForTrChr6, CONSTRAINED, 1, maxMBMS_CommonTrCh> MBMSTranspChInfoForEachTrChr6;

class MBMSTrCHInformationCurr : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBMSTrCHInformationCurr(): Sequence(&theInfo) {}

	void setTranspChInfo(const MBMSCommonTrChIdentity& TranspChInfo) { *static_cast<MBMSCommonTrChIdentity*>(items[0]) = TranspChInfo; }
};

typedef SequenceOf<MBMSTrCHInformationCurr, CONSTRAINED, 1, maxFACHPCH> MBMSTrCHInformationCurrList;

class MBMSTrCHInformationNeighb : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBMSTrCHInformationNeighb(): Sequence(&theInfo) {}

	void setTranspChInfo(const MBMSCommonTrChIdentity& TranspChInfo) { *static_cast<MBMSCommonTrChIdentity*>(items[0]) = TranspChInfo; }
};

typedef SequenceOf<MBMSTrCHInformationNeighb, CONSTRAINED, 1, maxFACHPCH> MBMSTrCHInformationNeighbList;

typedef Integer<EXTCONSTRAINED, 1, maxFACHPCH> MBMSTrCHInformationSIB5TranspChIdentity;

class MBMSTrCHInformationSIB5 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBMSTrCHInformationSIB5(): Sequence(&theInfo) {}

	void setMBMSTrCHInformationSIB5TranspChIdentity(const MBMSTrCHInformationSIB5TranspChIdentity& MBMSTrCHInformationSIB5TranspChIdentity) { *static_cast<MBMSTrCHInformationSIB5TranspChIdentity*>(items[0]) = MBMSTrCHInformationSIB5TranspChIdentity; }
};

typedef SequenceOf<MBMSTrCHInformationSIB5, CONSTRAINED, 1, maxFACHPCH> MBMSTrCHInformationSIB5List;

class MBMSUnmodifiedServicer6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBMSUnmodifiedServicer6(): Sequence(&theInfo) {}

	void setMbmsTransmissionIdentity(const MBMSTransmissionIdentity& MbmsTransmissionIdentity) { *static_cast<MBMSTransmissionIdentity*>(items[0]) = MbmsTransmissionIdentity; }
};

typedef SequenceOf<MBMSUnmodifiedServicer6, CONSTRAINED, 1, maxMBMSservUnmodif> MBMSUnmodifiedServiceListr6;

class MBMSUnmodifiedServicev770ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBMSUnmodifiedServicev770ext(): Sequence(&theInfo) {}

	void setMbsfnClusterFrequency(const MBSFNClusterFrequencyr7& MbsfnClusterFrequency) { *static_cast<MBSFNClusterFrequencyr7*>(items[0]) = MbsfnClusterFrequency; }
};

typedef SequenceOf<MBMSUnmodifiedServicev770ext, CONSTRAINED, 1, maxMBMSservUnmodif> MBMSUnmodifiedServiceListv770ext;

enum MBSFNOnlyServiceValues {
	true_MBSFNOnlyService = 0,
};
typedef Enumerated<CONSTRAINED, 0> MBSFNOnlyService;

enum MBSFNservicesNotNotifiedr7notificationOfAllMBSFNServicesInTheBandValues {
	true_MBSFNservicesNotNotifiedr7notificationOfAllMBSFNServicesInTheBand = 0,
};
typedef Enumerated<CONSTRAINED, 0> MBSFNservicesNotNotifiedr7notificationOfAllMBSFNServicesInTheBand;

class MBSFNservicesNotNotifiedr7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBSFNservicesNotNotifiedr7(): Sequence(&theInfo) {}

	void setMBSFNservicesNotNotifiedr7notificationOfAllMBSFNServicesInTheBand(const MBSFNservicesNotNotifiedr7notificationOfAllMBSFNServicesInTheBand& MBSFNservicesNotNotifiedr7notificationOfAllMBSFNServicesInTheBand) { *static_cast<MBSFNservicesNotNotifiedr7notificationOfAllMBSFNServicesInTheBand*>(items[0]) = MBSFNservicesNotNotifiedr7notificationOfAllMBSFNServicesInTheBand; }
};

class MBSFNInterFrequencyNeighbourr7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBSFNInterFrequencyNeighbourr7(): Sequence(&theInfo) {}

	void setMbsfnFrequency(const FrequencyInfo& MbsfnFrequency) { *static_cast<FrequencyInfo*>(items[0]) = MbsfnFrequency; }
};

enum MBSFNInterFrequencyNeighbourv860extimb_IndicationValues {
	true_MBSFNInterFrequencyNeighbourv860extimb_Indication = 0,
};
typedef Enumerated<CONSTRAINED, 0> MBSFNInterFrequencyNeighbourv860extimb_Indication;

class MBSFNInterFrequencyNeighbourv860ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBSFNInterFrequencyNeighbourv860ext(): Sequence(&theInfo) {}

	void setMBSFNInterFrequencyNeighbourv860extimb_Indication(const MBSFNInterFrequencyNeighbourv860extimb_Indication& MBSFNInterFrequencyNeighbourv860extimb_Indication) { *static_cast<MBSFNInterFrequencyNeighbourv860extimb_Indication*>(items[0]) = MBSFNInterFrequencyNeighbourv860extimb_Indication; }
};

typedef SequenceOf<MBSFNInterFrequencyNeighbourr7, CONSTRAINED, 1, maxMBSFNClusters> MBSFNInterFrequencyNeighbourListr7;

typedef SequenceOf<MBSFNInterFrequencyNeighbourv860ext, CONSTRAINED, 1, maxMBSFNClusters> MBSFNInterFrequencyNeighbourListv860ext;

class MBSFNTDDTimeSlotInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBSFNTDDTimeSlotInfo(): Sequence(&theInfo) {}

	void setTimeSlotNumber(const TimeslotNumberLCRr4& TimeSlotNumber) { *static_cast<TimeslotNumberLCRr4*>(items[0]) = TimeSlotNumber; }
};

typedef SequenceOf<MBSFNTDDTimeSlotInfo, CONSTRAINED, 1, maxTS> MBSFNTDDInformation;

typedef Integer<EXTCONSTRAINED, 1, maxMBSFNClusters> MBSFNTDDTimeSlotInfoLCRFrequencyIndex;

class MBSFNTDDTimeSlotInfoLCR : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBSFNTDDTimeSlotInfoLCR(): Sequence(&theInfo) {}

	void setMBSFNTDDTimeSlotInfoLCRFrequencyIndex(const MBSFNTDDTimeSlotInfoLCRFrequencyIndex& MBSFNTDDTimeSlotInfoLCRFrequencyIndex) { *static_cast<MBSFNTDDTimeSlotInfoLCRFrequencyIndex*>(items[0]) = MBSFNTDDTimeSlotInfoLCRFrequencyIndex; }
};

typedef SequenceOf<MBSFNTDDTimeSlotInfoLCR, CONSTRAINED, 1, maxMBSFNClusters> MBSFNTDDInformationLCR;

class MBSFNTDMInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBSFNTDMInfo(): Sequence(&theInfo) {}

	void setShortTransmissionID(const MBMSShortTransmissionID& ShortTransmissionID) { *static_cast<MBMSShortTransmissionID*>(items[0]) = ShortTransmissionID; }
};

typedef SequenceOf<MBSFNTDMInfo, CONSTRAINED, 1, maxMBMSservUnmodif> MBSFNTDMInfoList;

}

#endif /* RRCINFORMATIONELEMENTS_H_ */
