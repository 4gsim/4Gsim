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

const void *CNDomainInformation::itemsInfo[1] = {
	&CNDomainIdentity::theInfo,
};
bool CNDomainInformation::itemsPres[1] = {
	1,
};
const CNDomainInformation::Info CNDomainInformation::theInfo = {
	CNDomainInformation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *CNDomainInformationFull::itemsInfo[1] = {
	&CNDomainIdentity::theInfo,
};
bool CNDomainInformationFull::itemsPres[1] = {
	1,
};
const CNDomainInformationFull::Info CNDomainInformationFull::theInfo = {
	CNDomainInformationFull::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *CNDomainSysInfo::itemsInfo[1] = {
	&CNDomainIdentity::theInfo,
};
bool CNDomainSysInfo::itemsPres[1] = {
	1,
};
const CNDomainSysInfo::Info CNDomainSysInfo::theInfo = {
	CNDomainSysInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PLMNIdentity::itemsInfo[1] = {
	&MCC::theInfo,
};
bool PLMNIdentity::itemsPres[1] = {
	1,
};
const PLMNIdentity::Info PLMNIdentity::theInfo = {
	PLMNIdentity::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *CNInformationInfo::itemsInfo[1] = {
	&PLMNIdentity::theInfo,
};
bool CNInformationInfo::itemsPres[1] = {
	0,
};
const CNInformationInfo::Info CNInformationInfo::theInfo = {
	CNInformationInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *CNInformationInfor6::itemsInfo[1] = {
	&PLMNIdentity::theInfo,
};
bool CNInformationInfor6::itemsPres[1] = {
	0,
};
const CNInformationInfor6::Info CNInformationInfor6::theInfo = {
	CNInformationInfor6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *CNInformationInfoFull::itemsInfo[1] = {
	&PLMNIdentity::theInfo,
};
bool CNInformationInfoFull::itemsPres[1] = {
	0,
};
const CNInformationInfoFull::Info CNInformationInfoFull::theInfo = {
	CNInformationInfoFull::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *GsmmapIDNNSRoutingbasis::choicesInfo[1] = {
	&GsmmapIDNNSRoutingbasisLocalPTMSI::theInfo,
};
const GsmmapIDNNSRoutingbasis::Info GsmmapIDNNSRoutingbasis::theInfo = {
	GsmmapIDNNSRoutingbasis::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *GsmmapIDNNS::itemsInfo[1] = {
	&GsmmapIDNNSRoutingbasis::theInfo,
};
bool GsmmapIDNNS::itemsPres[1] = {
	1,
};
const GsmmapIDNNS::Info GsmmapIDNNS::theInfo = {
	GsmmapIDNNS::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *IntraDomainNasNodeSelectorVersionRelease99CnType::choicesInfo[1] = {
	&GsmmapIDNNS::theInfo,
};
const IntraDomainNasNodeSelectorVersionRelease99CnType::Info IntraDomainNasNodeSelectorVersionRelease99CnType::theInfo = {
	IntraDomainNasNodeSelectorVersionRelease99CnType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *IntraDomainNasNodeSelectorVersionRelease99::itemsInfo[1] = {
	&IntraDomainNasNodeSelectorVersionRelease99CnType::theInfo,
};
bool IntraDomainNasNodeSelectorVersionRelease99::itemsPres[1] = {
	1,
};
const IntraDomainNasNodeSelectorVersionRelease99::Info IntraDomainNasNodeSelectorVersionRelease99::theInfo = {
	IntraDomainNasNodeSelectorVersionRelease99::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *IntraDomainNasNodeSelectorVersion::choicesInfo[1] = {
	&IntraDomainNasNodeSelectorVersionRelease99::theInfo,
};
const IntraDomainNasNodeSelectorVersion::Info IntraDomainNasNodeSelectorVersion::theInfo = {
	IntraDomainNasNodeSelectorVersion::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *IntraDomainNasNodeSelector::itemsInfo[1] = {
	&IntraDomainNasNodeSelectorVersion::theInfo,
};
bool IntraDomainNasNodeSelector::itemsPres[1] = {
	1,
};
const IntraDomainNasNodeSelector::Info IntraDomainNasNodeSelector::theInfo = {
	IntraDomainNasNodeSelector::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *LAI::itemsInfo[1] = {
	&PLMNIdentity::theInfo,
};
bool LAI::itemsPres[1] = {
	1,
};
const LAI::Info LAI::theInfo = {
	LAI::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *LocationRegistrationParameters::choicesInfo[1] = {
	&LocationRegistrationParametersNoRestriction::theInfo,
};
const LocationRegistrationParameters::Info LocationRegistrationParameters::theInfo = {
	LocationRegistrationParameters::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *MultiplePLMNListr6::itemsInfo[1] = {
	&MultiplePLMNListr6MibPLMNIdentity::theInfo,
};
bool MultiplePLMNListr6::itemsPres[1] = {
	1,
};
const MultiplePLMNListr6::Info MultiplePLMNListr6::theInfo = {
	MultiplePLMNListr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PagingPermissionWithAccessControlParameters::itemsInfo[1] = {
	&PagingPermissionWithAccessControlParameterspagingResponseRestrictionIndicator::theInfo,
};
bool PagingPermissionWithAccessControlParameters::itemsPres[1] = {
	1,
};
const PagingPermissionWithAccessControlParameters::Info PagingPermissionWithAccessControlParameters::theInfo = {
	PagingPermissionWithAccessControlParameters::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PagingPermissionWithAccessControlList::itemsInfo[1] = {
	&PagingPermissionWithAccessControlParameters::theInfo,
};
bool PagingPermissionWithAccessControlList::itemsPres[1] = {
	0,
};
const PagingPermissionWithAccessControlList::Info PagingPermissionWithAccessControlList::theInfo = {
	PagingPermissionWithAccessControlList::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *PagingPermissionWithAccessControlForSharedNetwork::choicesInfo[1] = {
	&PagingPermissionWithAccessControlList::theInfo,
};
const PagingPermissionWithAccessControlForSharedNetwork::Info PagingPermissionWithAccessControlForSharedNetwork::theInfo = {
	PagingPermissionWithAccessControlForSharedNetwork::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *PLMNType::choicesInfo[1] = {
	&PLMNTypeGsmMAP::theInfo,
};
const PLMNType::Info PLMNType::theInfo = {
	PLMNType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *RABIdentity::choicesInfo[1] = {
	&RABIdentityGsmMAPRABIdentity::theInfo,
};
const RABIdentity::Info RABIdentity::theInfo = {
	RABIdentity::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *RAI::itemsInfo[1] = {
	&LAI::theInfo,
};
bool RAI::itemsPres[1] = {
	1,
};
const RAI::Info RAI::theInfo = {
	RAI::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *CellBarredBarred::itemsInfo[1] = {
	&AllowedIndicator::theInfo,
};
bool CellBarredBarred::itemsPres[1] = {
	1,
};
const CellBarredBarred::Info CellBarredBarred::theInfo = {
	CellBarredBarred::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *CellBarred::choicesInfo[1] = {
	&CellBarredBarred::theInfo,
};
const CellBarred::Info CellBarred::theInfo = {
	CellBarred::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *CellAccessRestriction::itemsInfo[1] = {
	&CellBarred::theInfo,
};
bool CellAccessRestriction::itemsPres[1] = {
	0,
};
const CellAccessRestriction::Info CellAccessRestriction::theInfo = {
	CellAccessRestriction::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *CellAccessRestrictionv870ext::itemsInfo[1] = {
	&CellAccessRestrictionv870extcellReservedForCSG::theInfo,
};
bool CellAccessRestrictionv870ext::itemsPres[1] = {
	0,
};
const CellAccessRestrictionv870ext::Info CellAccessRestrictionv870ext::theInfo = {
	CellAccessRestrictionv870ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *FrequencyInfoModeSpecificInfo::choicesInfo[1] = {
	&FrequencyInfoFDD::theInfo,
};
const FrequencyInfoModeSpecificInfo::Info FrequencyInfoModeSpecificInfo::theInfo = {
	FrequencyInfoModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *FrequencyInfo::itemsInfo[1] = {
	&FrequencyInfoModeSpecificInfo::theInfo,
};
bool FrequencyInfo::itemsPres[1] = {
	1,
};
const FrequencyInfo::Info FrequencyInfo::theInfo = {
	FrequencyInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *CSGPSCSplitInfo::itemsInfo[1] = {
	&CSGPSCSplitInfoStartPSC::theInfo,
};
bool CSGPSCSplitInfo::itemsPres[1] = {
	0,
};
const CSGPSCSplitInfo::Info CSGPSCSplitInfo::theInfo = {
	CSGPSCSplitInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DomainSpecificAccessRestrictionv670ext::choicesInfo[1] = {
	&DomainSpecificAccessRestrictionv670extNoRestriction::theInfo,
};
const DomainSpecificAccessRestrictionv670ext::Info DomainSpecificAccessRestrictionv670ext::theInfo = {
	DomainSpecificAccessRestrictionv670ext::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *DomainSpecificAccessRestrictionParamv670ext::itemsInfo[1] = {
	&DomainSpecificAccessRestrictionv670ext::theInfo,
};
bool DomainSpecificAccessRestrictionParamv670ext::itemsPres[1] = {
	1,
};
const DomainSpecificAccessRestrictionParamv670ext::Info DomainSpecificAccessRestrictionParamv670ext::theInfo = {
	DomainSpecificAccessRestrictionParamv670ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DomainSpecificAccessRestrictionListv670ext::itemsInfo[1] = {
	&DomainSpecificAccessRestrictionParamv670ext::theInfo,
};
bool DomainSpecificAccessRestrictionListv670ext::itemsPres[1] = {
	0,
};
const DomainSpecificAccessRestrictionListv670ext::Info DomainSpecificAccessRestrictionListv670ext::theInfo = {
	DomainSpecificAccessRestrictionListv670ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DomainSpecificAccessRestrictionForSharedNetworkv670ext::choicesInfo[1] = {
	&DomainSpecificAccessRestrictionListv670ext::theInfo,
};
const DomainSpecificAccessRestrictionForSharedNetworkv670ext::Info DomainSpecificAccessRestrictionForSharedNetworkv670ext::theInfo = {
	DomainSpecificAccessRestrictionForSharedNetworkv670ext::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *Mapping::itemsInfo[1] = {
	&RAT::theInfo,
};
bool Mapping::itemsPres[1] = {
	1,
};
const Mapping::Info Mapping::theInfo = {
	Mapping::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MappingFunctionParameter::itemsInfo[1] = {
	&MappingFunctionType::theInfo,
};
bool MappingFunctionParameter::itemsPres[1] = {
	0,
};
const MappingFunctionParameter::Info MappingFunctionParameter::theInfo = {
	MappingFunctionParameter::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *MappingLCRr4::itemsInfo[1] = {
	&MappingFunctionParameterList::theInfo,
};
bool MappingLCRr4::itemsPres[1] = {
	1,
};
const MappingLCRr4::Info MappingLCRr4::theInfo = {
	MappingLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DedicatedPriorityInformationAction::choicesInfo[1] = {
	&DedicatedPriorityInformationActionClearDedicatedPriorities::theInfo,
};
const DedicatedPriorityInformationAction::Info DedicatedPriorityInformationAction::theInfo = {
	DedicatedPriorityInformationAction::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *DedicatedPriorityInformation::itemsInfo[1] = {
	&DedicatedPriorityInformationAction::theInfo,
};
bool DedicatedPriorityInformation::itemsPres[1] = {
	1,
};
const DedicatedPriorityInformation::Info DedicatedPriorityInformation::theInfo = {
	DedicatedPriorityInformation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PriorityLevel::itemsInfo[1] = {
	&PriorityLevelPriority::theInfo,
};
bool PriorityLevel::itemsPres[1] = {
	1,
};
const PriorityLevel::Info PriorityLevel::theInfo = {
	PriorityLevel::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *RATFDDInfo::itemsInfo[1] = {
	&RATIdentifier::theInfo,
};
bool RATFDDInfo::itemsPres[1] = {
	1,
};
const RATFDDInfo::Info RATFDDInfo::theInfo = {
	RATFDDInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *RATTDDInfo::itemsInfo[1] = {
	&RATIdentifier::theInfo,
};
bool RATTDDInfo::itemsPres[1] = {
	1,
};
const RATTDDInfo::Info RATTDDInfo::theInfo = {
	RATTDDInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *BackoffControlParams::itemsInfo[1] = {
	&NAPRetransMax::theInfo,
};
bool BackoffControlParams::itemsPres[1] = {
	1,
};
const BackoffControlParams::Info BackoffControlParams::theInfo = {
	BackoffControlParams::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *CapabilityUpdateRequirement::itemsInfo[1] = {
	&CapabilityUpdateRequirementUeRadioCapabilityFDDUpdateRequirement::theInfo,
};
bool CapabilityUpdateRequirement::itemsPres[1] = {
	0,
};
const CapabilityUpdateRequirement::Info CapabilityUpdateRequirement::theInfo = {
	CapabilityUpdateRequirement::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *CapabilityUpdateRequirementr4ext::itemsInfo[1] = {
	&CapabilityUpdateRequirementr4extUeRadioCapabilityUpdateRequirementTDD128::theInfo,
};
bool CapabilityUpdateRequirementr4ext::itemsPres[1] = {
	1,
};
const CapabilityUpdateRequirementr4ext::Info CapabilityUpdateRequirementr4ext::theInfo = {
	CapabilityUpdateRequirementr4ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *CapabilityUpdateRequirementr4::itemsInfo[1] = {
	&CapabilityUpdateRequirementr4UeRadioCapabilityFDDUpdateRequirementFDD::theInfo,
};
bool CapabilityUpdateRequirementr4::itemsPres[1] = {
	0,
};
const CapabilityUpdateRequirementr4::Info CapabilityUpdateRequirementr4::theInfo = {
	CapabilityUpdateRequirementr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *CapabilityUpdateRequirementr5::itemsInfo[1] = {
	&CapabilityUpdateRequirementr5UeRadioCapabilityFDDUpdateRequirementFDD::theInfo,
};
bool CapabilityUpdateRequirementr5::itemsPres[1] = {
	0,
};
const CapabilityUpdateRequirementr5::Info CapabilityUpdateRequirementr5::theInfo = {
	CapabilityUpdateRequirementr5::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *CapabilityUpdateRequirementv770ext::itemsInfo[1] = {
	&CapabilityUpdateRequirementv770extUeRadioCapabilityTDDUpdateRequirementTDD768::theInfo,
};
bool CapabilityUpdateRequirementv770ext::itemsPres[1] = {
	1,
};
const CapabilityUpdateRequirementv770ext::Info CapabilityUpdateRequirementv770ext::theInfo = {
	CapabilityUpdateRequirementv770ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *CapabilityUpdateRequirementr7::itemsInfo[1] = {
	&CapabilityUpdateRequirementr7UeRadioCapabilityFDDUpdateRequirementFDD::theInfo,
};
bool CapabilityUpdateRequirementr7::itemsPres[1] = {
	0,
};
const CapabilityUpdateRequirementr7::Info CapabilityUpdateRequirementr7::theInfo = {
	CapabilityUpdateRequirementr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *CapabilityUpdateRequirementv860ext::itemsInfo[1] = {
	&SystemSpecificCapUpdateReqListr8::theInfo,
};
bool CapabilityUpdateRequirementv860ext::itemsPres[1] = {
	0,
};
const CapabilityUpdateRequirementv860ext::Info CapabilityUpdateRequirementv860ext::theInfo = {
	CapabilityUpdateRequirementv860ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *CapabilityUpdateRequirementr8::itemsInfo[1] = {
	&CapabilityUpdateRequirementr8UeRadioCapabilityFDDUpdateRequirementFDD::theInfo,
};
bool CapabilityUpdateRequirementr8::itemsPres[1] = {
	0,
};
const CapabilityUpdateRequirementr8::Info CapabilityUpdateRequirementr8::theInfo = {
	CapabilityUpdateRequirementr8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *CipheringModeCommand::choicesInfo[1] = {
	&CipheringAlgorithm::theInfo,
};
const CipheringModeCommand::Info CipheringModeCommand::theInfo = {
	CipheringModeCommand::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *CipheringModeCommandr7::itemsInfo[1] = {
	&CipheringAlgorithmr7::theInfo,
};
bool CipheringModeCommandr7::itemsPres[1] = {
	1,
};
const CipheringModeCommandr7::Info CipheringModeCommandr7::theInfo = {
	CipheringModeCommandr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *CipheringModeInfo::itemsInfo[1] = {
	&CipheringModeCommand::theInfo,
};
bool CipheringModeInfo::itemsPres[1] = {
	0,
};
const CipheringModeInfo::Info CipheringModeInfo::theInfo = {
	CipheringModeInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *CipheringModeInfor7::itemsInfo[1] = {
	&CipheringModeCommandr7::theInfo,
};
bool CipheringModeInfor7::itemsPres[1] = {
	0,
};
const CipheringModeInfor7::Info CipheringModeInfor7::theInfo = {
	CipheringModeInfor7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *CNPagedUEIdentity::choicesInfo[1] = {
	&IMSIGSMMAP::theInfo,
};
const CNPagedUEIdentity::Info CNPagedUEIdentity::theInfo = {
	CNPagedUEIdentity::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *CompressedModeMeasCapability::itemsInfo[1] = {
	&CompressedModeMeasCapabilityFddMeasurements::theInfo,
};
bool CompressedModeMeasCapability::itemsPres[1] = {
	0,
};
const CompressedModeMeasCapability::Info CompressedModeMeasCapability::theInfo = {
	CompressedModeMeasCapability::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *CompressedModeMeasCapabilityLCRr4::itemsInfo[1] = {
	&CompressedModeMeasCapabilityLCRr4Tdd128Measurements::theInfo,
};
bool CompressedModeMeasCapabilityLCRr4::itemsPres[1] = {
	0,
};
const CompressedModeMeasCapabilityLCRr4::Info CompressedModeMeasCapabilityLCRr4::theInfo = {
	CompressedModeMeasCapabilityLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *CompressedModeMeasCapabilityv860ext::itemsInfo[1] = {
	&CompressedModeMeasCapabilityv860extadjacentFrequencyMeasurements::theInfo,
};
bool CompressedModeMeasCapabilityv860ext::itemsPres[1] = {
	0,
};
const CompressedModeMeasCapabilityv860ext::Info CompressedModeMeasCapabilityv860ext::theInfo = {
	CompressedModeMeasCapabilityv860ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *CompressedModeMeasCapabilityv920ext::itemsInfo[1] = {
	&CompressedModeMeasCapabilityv920extinterBandMeasurements::theInfo,
};
bool CompressedModeMeasCapabilityv920ext::itemsPres[1] = {
	0,
};
const CompressedModeMeasCapabilityv920ext::Info CompressedModeMeasCapabilityv920ext::theInfo = {
	CompressedModeMeasCapabilityv920ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *CompressedModeMeasCapabEUTRA::itemsInfo[1] = {
	&RadioFrequencyBandEUTRA::theInfo,
};
bool CompressedModeMeasCapabEUTRA::itemsPres[1] = {
	1,
};
const CompressedModeMeasCapabEUTRA::Info CompressedModeMeasCapabEUTRA::theInfo = {
	CompressedModeMeasCapabEUTRA::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *CompressedModeMeasCapabFDDext::itemsInfo[1] = {
	&RadioFrequencyBandFDD2::theInfo,
};
bool CompressedModeMeasCapabFDDext::itemsPres[1] = {
	1,
};
const CompressedModeMeasCapabFDDext::Info CompressedModeMeasCapabFDDext::theInfo = {
	CompressedModeMeasCapabFDDext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *CompressedModeMeasCapabTDD::itemsInfo[1] = {
	&RadioFrequencyBandTDD::theInfo,
};
bool CompressedModeMeasCapabTDD::itemsPres[1] = {
	1,
};
const CompressedModeMeasCapabTDD::Info CompressedModeMeasCapabTDD::theInfo = {
	CompressedModeMeasCapabTDD::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *CompressedModeMeasCapabGSM::itemsInfo[1] = {
	&RadioFrequencyBandGSM::theInfo,
};
bool CompressedModeMeasCapabGSM::itemsPres[1] = {
	1,
};
const CompressedModeMeasCapabGSM::Info CompressedModeMeasCapabGSM::theInfo = {
	CompressedModeMeasCapabGSM::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *CompressedModeMeasCapabMC::itemsInfo[1] = {
	&CompressedModeMeasCapabMCDlMeasurementsMC::theInfo,
};
bool CompressedModeMeasCapabMC::itemsPres[1] = {
	1,
};
const CompressedModeMeasCapabMC::Info CompressedModeMeasCapabMC::theInfo = {
	CompressedModeMeasCapabMC::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *CSGProximityIndicationCapability::itemsInfo[1] = {
	&CSGProximityIndicationCapabilitysupportOfIntraFreqProximityIndication::theInfo,
};
bool CSGProximityIndicationCapability::itemsPres[1] = {
	0,
};
const CSGProximityIndicationCapability::Info CSGProximityIndicationCapability::theInfo = {
	CSGProximityIndicationCapability::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *PrimaryCPICHInfo::itemsInfo[1] = {
	&PrimaryScramblingCode::theInfo,
};
bool PrimaryCPICHInfo::itemsPres[1] = {
	1,
};
const PrimaryCPICHInfo::Info PrimaryCPICHInfo::theInfo = {
	PrimaryCPICHInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DLInformationPerSecondaryRL::itemsInfo[1] = {
	&PrimaryCPICHInfo::theInfo,
};
bool DLInformationPerSecondaryRL::itemsPres[1] = {
	0,
};
const DLInformationPerSecondaryRL::Info DLInformationPerSecondaryRL::theInfo = {
	DLInformationPerSecondaryRL::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLPhysChCapabilityFDD::itemsInfo[1] = {
	&DLPhysChCapabilityFDDMaxNoDPCHPDSCHCodes::theInfo,
};
bool DLPhysChCapabilityFDD::itemsPres[1] = {
	1,
};
const DLPhysChCapabilityFDD::Info DLPhysChCapabilityFDD::theInfo = {
	DLPhysChCapabilityFDD::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DLPhysChCapabilityFDDv380ext::itemsInfo[1] = {
	&SupportOfDedicatedPilotsForChEstimation::theInfo,
};
bool DLPhysChCapabilityFDDv380ext::itemsPres[1] = {
	0,
};
const DLPhysChCapabilityFDDv380ext::Info DLPhysChCapabilityFDDv380ext::theInfo = {
	DLPhysChCapabilityFDDv380ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLPhysChCapabilityFDDv770ext::itemsInfo[1] = {
	&HSDSCHphysicallayercategoryext::theInfo,
};
bool DLPhysChCapabilityFDDv770ext::itemsPres[1] = {
	0,
};
const DLPhysChCapabilityFDDv770ext::Info DLPhysChCapabilityFDDv770ext::theInfo = {
	DLPhysChCapabilityFDDv770ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLPhysChCapabilityFDDv860ext::itemsInfo[1] = {
	&HSDSCHphysicallayercategoryext2::theInfo,
};
bool DLPhysChCapabilityFDDv860ext::itemsPres[1] = {
	0,
};
const DLPhysChCapabilityFDDv860ext::Info DLPhysChCapabilityFDDv860ext::theInfo = {
	DLPhysChCapabilityFDDv860ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLPhysChCapabilityFDDv920ext::itemsInfo[1] = {
	&HSDSCHphysicallayercategoryext3::theInfo,
};
bool DLPhysChCapabilityFDDv920ext::itemsPres[1] = {
	0,
};
const DLPhysChCapabilityFDDv920ext::Info DLPhysChCapabilityFDDv920ext::theInfo = {
	DLPhysChCapabilityFDDv920ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLPhysChCapabilityTDD::itemsInfo[1] = {
	&MaxTSPerFrame::theInfo,
};
bool DLPhysChCapabilityTDD::itemsPres[1] = {
	1,
};
const DLPhysChCapabilityTDD::Info DLPhysChCapabilityTDD::theInfo = {
	DLPhysChCapabilityTDD::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DLPhysChCapabilityTDDLCRr4::itemsInfo[1] = {
	&MaxTSPerSubFramer4::theInfo,
};
bool DLPhysChCapabilityTDDLCRr4::itemsPres[1] = {
	1,
};
const DLPhysChCapabilityTDDLCRr4::Info DLPhysChCapabilityTDDLCRr4::theInfo = {
	DLPhysChCapabilityTDDLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DLPhysChCapabilityTDD128v770ext::itemsInfo[1] = {
	&MultiCarrierHSDSCHphysicallayercategory::theInfo,
};
bool DLPhysChCapabilityTDD128v770ext::itemsPres[1] = {
	0,
};
const DLPhysChCapabilityTDD128v770ext::Info DLPhysChCapabilityTDD128v770ext::theInfo = {
	DLPhysChCapabilityTDD128v770ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLPhysChCapabilityTDD128v860ext::itemsInfo[1] = {
	&HSDSCHphysicallayercategoryextension::theInfo,
};
bool DLPhysChCapabilityTDD128v860ext::itemsPres[1] = {
	0,
};
const DLPhysChCapabilityTDD128v860ext::Info DLPhysChCapabilityTDD128v860ext::theInfo = {
	DLPhysChCapabilityTDD128v860ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLPhysChCapabilityTDD768::itemsInfo[1] = {
	&MaxTSPerFrame::theInfo,
};
bool DLPhysChCapabilityTDD768::itemsPres[1] = {
	1,
};
const DLPhysChCapabilityTDD768::Info DLPhysChCapabilityTDD768::theInfo = {
	DLPhysChCapabilityTDD768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DLPhysChCapabilityInfoTDD768::itemsInfo[1] = {
	&MaxTSPerFrame::theInfo,
};
bool DLPhysChCapabilityInfoTDD768::itemsPres[1] = {
	1,
};
const DLPhysChCapabilityInfoTDD768::Info DLPhysChCapabilityInfoTDD768::theInfo = {
	DLPhysChCapabilityInfoTDD768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DLTransChCapability::itemsInfo[1] = {
	&MaxNoBits::theInfo,
};
bool DLTransChCapability::itemsPres[1] = {
	1,
};
const DLTransChCapability::Info DLTransChCapability::theInfo = {
	DLTransChCapability::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DRACSysInfo::itemsInfo[1] = {
	&TransmissionProbability::theInfo,
};
bool DRACSysInfo::itemsPres[1] = {
	1,
};
const DRACSysInfo::Info DRACSysInfo::theInfo = {
	DRACSysInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *FailureCauseWithProtErr::choicesInfo[1] = {
	&FailureCauseWithProtErrConfigurationUnsupported::theInfo,
};
const FailureCauseWithProtErr::Info FailureCauseWithProtErr::theInfo = {
	FailureCauseWithProtErr::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *FailureCauseWithProtErrTrId::itemsInfo[1] = {
	&RRCTransactionIdentifier::theInfo,
};
bool FailureCauseWithProtErrTrId::itemsPres[1] = {
	1,
};
const FailureCauseWithProtErrTrId::Info FailureCauseWithProtErrTrId::theInfo = {
	FailureCauseWithProtErrTrId::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *RRCConnectionReleaseInformation::choicesInfo[1] = {
	&RRCConnectionReleaseInformationNoRelease::theInfo,
};
const RRCConnectionReleaseInformation::Info RRCConnectionReleaseInformation::theInfo = {
	RRCConnectionReleaseInformation::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *GroupIdentityWithReleaseInformation::itemsInfo[1] = {
	&RRCConnectionReleaseInformation::theInfo,
};
bool GroupIdentityWithReleaseInformation::itemsPres[1] = {
	1,
};
const GroupIdentityWithReleaseInformation::Info GroupIdentityWithReleaseInformation::theInfo = {
	GroupIdentityWithReleaseInformation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *URNTIGroup::choicesInfo[1] = {
	&URNTIGroupAll::theInfo,
};
const URNTIGroup::Info URNTIGroup::theInfo = {
	URNTIGroup::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *GroupReleaseInformation::itemsInfo[1] = {
	&URNTIGroup::theInfo,
};
bool GroupReleaseInformation::itemsPres[1] = {
	1,
};
const GroupReleaseInformation::Info GroupReleaseInformation::theInfo = {
	GroupReleaseInformation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *GSMMeasurements::itemsInfo[1] = {
	&GSMMeasurementsGsm900::theInfo,
};
bool GSMMeasurements::itemsPres[1] = {
	1,
};
const GSMMeasurements::Info GSMMeasurements::theInfo = {
	GSMMeasurements::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *IdleIntervalMeasCapabEUTRA::itemsInfo[1] = {
	&RadioFrequencyBandEUTRA::theInfo,
};
bool IdleIntervalMeasCapabEUTRA::itemsPres[1] = {
	1,
};
const IdleIntervalMeasCapabEUTRA::Info IdleIntervalMeasCapabEUTRA::theInfo = {
	IdleIntervalMeasCapabEUTRA::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *IMSIandESNDS41::itemsInfo[1] = {
	&IMSIDS41::theInfo,
};
bool IMSIandESNDS41::itemsPres[1] = {
	1,
};
const IMSIandESNDS41::Info IMSIandESNDS41::theInfo = {
	IMSIandESNDS41::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *InitialUEIdentity::choicesInfo[1] = {
	&IMSIGSMMAP::theInfo,
};
const InitialUEIdentity::Info InitialUEIdentity::theInfo = {
	InitialUEIdentity::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *IntegrityCheckInfo::itemsInfo[1] = {
	&MessageAuthenticationCode::theInfo,
};
bool IntegrityCheckInfo::itemsPres[1] = {
	1,
};
const IntegrityCheckInfo::Info IntegrityCheckInfo::theInfo = {
	IntegrityCheckInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *IntegrityProtActivationInfo::itemsInfo[1] = {
	&RRCMessageSequenceNumberList::theInfo,
};
bool IntegrityProtActivationInfo::itemsPres[1] = {
	1,
};
const IntegrityProtActivationInfo::Info IntegrityProtActivationInfo::theInfo = {
	IntegrityProtActivationInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *IntegrityProtectionModeCommand::choicesInfo[1] = {
	&IntegrityProtectionModeCommandStartIntegrityProtection::theInfo,
};
const IntegrityProtectionModeCommand::Info IntegrityProtectionModeCommand::theInfo = {
	IntegrityProtectionModeCommand::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *IntegrityProtectionModeInfo::itemsInfo[1] = {
	&IntegrityProtectionModeCommand::theInfo,
};
bool IntegrityProtectionModeInfo::itemsPres[1] = {
	0,
};
const IntegrityProtectionModeInfo::Info IntegrityProtectionModeInfo::theInfo = {
	IntegrityProtectionModeInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *IntegrityProtectionModeInfor7::itemsInfo[1] = {
	&IntegrityProtectionModeCommand::theInfo,
};
bool IntegrityProtectionModeInfor7::itemsPres[1] = {
	0,
};
const IntegrityProtectionModeInfor7::Info IntegrityProtectionModeInfor7::theInfo = {
	IntegrityProtectionModeInfor7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *MeasurementCapability::itemsInfo[1] = {
	&CompressedModeMeasCapability::theInfo,
};
bool MeasurementCapability::itemsPres[1] = {
	1,
};
const MeasurementCapability::Info MeasurementCapability::theInfo = {
	MeasurementCapability::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MeasurementCapabilityExt::itemsInfo[1] = {
	&CompressedModeMeasCapabFDDList::theInfo,
};
bool MeasurementCapabilityExt::itemsPres[1] = {
	0,
};
const MeasurementCapabilityExt::Info MeasurementCapabilityExt::theInfo = {
	MeasurementCapabilityExt::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *MeasurementCapabilityExt2::itemsInfo[1] = {
	&CompressedModeMeasCapabFDDList2::theInfo,
};
bool MeasurementCapabilityExt2::itemsPres[1] = {
	0,
};
const MeasurementCapabilityExt2::Info MeasurementCapabilityExt2::theInfo = {
	MeasurementCapabilityExt2::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *MeasurementCapabilityExt3::itemsInfo[1] = {
	&CompressedModeMeasCapabEUTRAList::theInfo,
};
bool MeasurementCapabilityExt3::itemsPres[1] = {
	0,
};
const MeasurementCapabilityExt3::Info MeasurementCapabilityExt3::theInfo = {
	MeasurementCapabilityExt3::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *MeasurementCapabilityr4ext::itemsInfo[1] = {
	&CompressedModeMeasCapabilityLCRr4::theInfo,
};
bool MeasurementCapabilityr4ext::itemsPres[1] = {
	1,
};
const MeasurementCapabilityr4ext::Info MeasurementCapabilityr4ext::theInfo = {
	MeasurementCapabilityr4ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MeasurementCapabilityv860ext::itemsInfo[1] = {
	&CompressedModeMeasCapabilityv860ext::theInfo,
};
bool MeasurementCapabilityv860ext::itemsPres[1] = {
	1,
};
const MeasurementCapabilityv860ext::Info MeasurementCapabilityv860ext::theInfo = {
	MeasurementCapabilityv860ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MeasurementCapabilityv920ext::itemsInfo[1] = {
	&CompressedModeMeasCapabilityv920ext::theInfo,
};
bool MeasurementCapabilityv920ext::itemsPres[1] = {
	1,
};
const MeasurementCapabilityv920ext::Info MeasurementCapabilityv920ext::theInfo = {
	MeasurementCapabilityv920ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MeasurementCapabilityTDD::itemsInfo[1] = {
	&IdleIntervalMeasCapabEUTRAList::theInfo,
};
bool MeasurementCapabilityTDD::itemsPres[1] = {
	0,
};
const MeasurementCapabilityTDD::Info MeasurementCapabilityTDD::theInfo = {
	MeasurementCapabilityTDD::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *MultiRATCapability::itemsInfo[1] = {
	&MultiRATCapabilitySupportOfGSM::theInfo,
};
bool MultiRATCapability::itemsPres[1] = {
	1,
};
const MultiRATCapability::Info MultiRATCapability::theInfo = {
	MultiRATCapability::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MultiModeRATCapabilityv590ext::itemsInfo[1] = {
	&MultiModeRATCapabilityv590extSupportOfUTRANToGERANNACC::theInfo,
};
bool MultiModeRATCapabilityv590ext::itemsPres[1] = {
	1,
};
const MultiModeRATCapabilityv590ext::Info MultiModeRATCapabilityv590ext::theInfo = {
	MultiModeRATCapabilityv590ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MultiModeRATCapabilityv680ext::itemsInfo[1] = {
	&MultiModeRATCapabilityv680extsupportOfHandoverToGAN::theInfo,
};
bool MultiModeRATCapabilityv680ext::itemsPres[1] = {
	0,
};
const MultiModeRATCapabilityv680ext::Info MultiModeRATCapabilityv680ext::theInfo = {
	MultiModeRATCapabilityv680ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *MultiModeRATCapabilityv770ext::itemsInfo[1] = {
	&MultiModeRATCapabilityv770extsupportOfPSHandoverToGAN::theInfo,
};
bool MultiModeRATCapabilityv770ext::itemsPres[1] = {
	0,
};
const MultiModeRATCapabilityv770ext::Info MultiModeRATCapabilityv770ext::theInfo = {
	MultiModeRATCapabilityv770ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *MultiModeRATCapabilityv860ext::itemsInfo[1] = {
	&MultiModeRATCapabilityv860extsupportOfEUTRAFDD::theInfo,
};
bool MultiModeRATCapabilityv860ext::itemsPres[1] = {
	0,
};
const MultiModeRATCapabilityv860ext::Info MultiModeRATCapabilityv860ext::theInfo = {
	MultiModeRATCapabilityv860ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *NeighCellSIAcquisitionCapability::itemsInfo[1] = {
	&NeighCellSIAcquisitionCapabilitysupportOfIntraFreqSIAcquisitionForHO::theInfo,
};
bool NeighCellSIAcquisitionCapability::itemsPres[1] = {
	0,
};
const NeighCellSIAcquisitionCapability::Info NeighCellSIAcquisitionCapability::theInfo = {
	NeighCellSIAcquisitionCapability::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *NetworkAssistedGANSSSupportedList::itemsInfo[0] = {
};
bool NetworkAssistedGANSSSupportedList::itemsPres[0] = {
};
const NetworkAssistedGANSSSupportedList::Info NetworkAssistedGANSSSupportedList::theInfo = {
	NetworkAssistedGANSSSupportedList::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *NetworkAssistedGANSSSupportedListv860ext::itemsInfo[0] = {
};
bool NetworkAssistedGANSSSupportedListv860ext::itemsPres[0] = {
};
const NetworkAssistedGANSSSupportedListv860ext::Info NetworkAssistedGANSSSupportedListv860ext::theInfo = {
	NetworkAssistedGANSSSupportedListv860ext::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *PTMSIandRAIGSMMAP::itemsInfo[1] = {
	&PTMSIGSMMAP::theInfo,
};
bool PTMSIandRAIGSMMAP::itemsPres[1] = {
	1,
};
const PTMSIandRAIGSMMAP::Info PTMSIandRAIGSMMAP::theInfo = {
	PTMSIandRAIGSMMAP::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PagingRecordCnIdentity::itemsInfo[1] = {
	&PagingCause::theInfo,
};
bool PagingRecordCnIdentity::itemsPres[1] = {
	0,
};
const PagingRecordCnIdentity::Info PagingRecordCnIdentity::theInfo = {
	PagingRecordCnIdentity::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *PagingRecord::choicesInfo[1] = {
	&PagingRecordCnIdentity::theInfo,
};
const PagingRecord::Info PagingRecord::theInfo = {
	PagingRecord::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *URNTI::itemsInfo[1] = {
	&SRNCIdentity::theInfo,
};
bool URNTI::itemsPres[1] = {
	1,
};
const URNTI::Info URNTI::theInfo = {
	URNTI::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PagingRecord2r5UtranSingleUEIdentity::itemsInfo[1] = {
	&URNTI::theInfo,
};
bool PagingRecord2r5UtranSingleUEIdentity::itemsPres[1] = {
	1,
};
const PagingRecord2r5UtranSingleUEIdentity::Info PagingRecord2r5UtranSingleUEIdentity::theInfo = {
	PagingRecord2r5UtranSingleUEIdentity::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PagingRecord2r5::choicesInfo[1] = {
	&PagingRecord2r5UtranSingleUEIdentity::theInfo,
};
const PagingRecord2r5::Info PagingRecord2r5::theInfo = {
	PagingRecord2r5::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *PDCPCapability::itemsInfo[1] = {
	&PDCPCapabilityLosslessSRNSRelocationSupport::theInfo,
};
bool PDCPCapability::itemsPres[1] = {
	1,
};
const PDCPCapability::Info PDCPCapability::theInfo = {
	PDCPCapability::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PDCPCapabilityr4extSupportForRfc3095::choicesInfo[1] = {
	&PDCPCapabilityr4extSupportForRfc3095NotSupported::theInfo,
};
const PDCPCapabilityr4extSupportForRfc3095::Info PDCPCapabilityr4extSupportForRfc3095::theInfo = {
	PDCPCapabilityr4extSupportForRfc3095::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *PDCPCapabilityr4ext::itemsInfo[1] = {
	&PDCPCapabilityr4extSupportForRfc3095::theInfo,
};
bool PDCPCapabilityr4ext::itemsPres[1] = {
	0,
};
const PDCPCapabilityr4ext::Info PDCPCapabilityr4ext::theInfo = {
	PDCPCapabilityr4ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *PDCPCapabilityr5ext::itemsInfo[1] = {
	&PDCPCapabilityr5extSupportForRfc3095ContextRelocation::theInfo,
};
bool PDCPCapabilityr5ext::itemsPres[1] = {
	0,
};
const PDCPCapabilityr5ext::Info PDCPCapabilityr5ext::theInfo = {
	PDCPCapabilityr5ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *PDCPCapabilityr5ext2::itemsInfo[1] = {
	&PDCPCapabilityr5ext2losslessDLRLC_PDUSizeChange::theInfo,
};
bool PDCPCapabilityr5ext2::itemsPres[1] = {
	0,
};
const PDCPCapabilityr5ext2::Info PDCPCapabilityr5ext2::theInfo = {
	PDCPCapabilityr5ext2::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *PDCPCapabilityv770ext::itemsInfo[1] = {
	&PDCPCapabilityv770extsupportForCSVoiceoverHSPA::theInfo,
};
bool PDCPCapabilityv770ext::itemsPres[1] = {
	0,
};
const PDCPCapabilityv770ext::Info PDCPCapabilityv770ext::theInfo = {
	PDCPCapabilityv770ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *PhysicalChannelCapabilityFddPhysChCapability::itemsInfo[1] = {
	&DLPhysChCapabilityFDD::theInfo,
};
bool PhysicalChannelCapabilityFddPhysChCapability::itemsPres[1] = {
	1,
};
const PhysicalChannelCapabilityFddPhysChCapability::Info PhysicalChannelCapabilityFddPhysChCapability::theInfo = {
	PhysicalChannelCapabilityFddPhysChCapability::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PhysicalChannelCapability::itemsInfo[1] = {
	&PhysicalChannelCapabilityFddPhysChCapability::theInfo,
};
bool PhysicalChannelCapability::itemsPres[1] = {
	0,
};
const PhysicalChannelCapability::Info PhysicalChannelCapability::theInfo = {
	PhysicalChannelCapability::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *PhysicalChannelCapabilityv770extFddPhysChCapability::itemsInfo[1] = {
	&DLPhysChCapabilityFDDv770ext::theInfo,
};
bool PhysicalChannelCapabilityv770extFddPhysChCapability::itemsPres[1] = {
	1,
};
const PhysicalChannelCapabilityv770extFddPhysChCapability::Info PhysicalChannelCapabilityv770extFddPhysChCapability::theInfo = {
	PhysicalChannelCapabilityv770extFddPhysChCapability::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PhysicalChannelCapabilityv770ext::itemsInfo[1] = {
	&PhysicalChannelCapabilityv770extFddPhysChCapability::theInfo,
};
bool PhysicalChannelCapabilityv770ext::itemsPres[1] = {
	0,
};
const PhysicalChannelCapabilityv770ext::Info PhysicalChannelCapabilityv770ext::theInfo = {
	PhysicalChannelCapabilityv770ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *PhysicalChannelCapabilityv860ext::itemsInfo[1] = {
	&PhysicalChannelCapabilityv860extFddPhysChCapability::theInfo,
};
bool PhysicalChannelCapabilityv860ext::itemsPres[1] = {
	0,
};
const PhysicalChannelCapabilityv860ext::Info PhysicalChannelCapabilityv860ext::theInfo = {
	PhysicalChannelCapabilityv860ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *PhysicalChannelCapabilityv920extFddPhysChCapability::itemsInfo[1] = {
	&DLPhysChCapabilityFDDv920ext::theInfo,
};
bool PhysicalChannelCapabilityv920extFddPhysChCapability::itemsPres[1] = {
	1,
};
const PhysicalChannelCapabilityv920extFddPhysChCapability::Info PhysicalChannelCapabilityv920extFddPhysChCapability::theInfo = {
	PhysicalChannelCapabilityv920extFddPhysChCapability::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PhysicalChannelCapabilityv920ext::itemsInfo[1] = {
	&PhysicalChannelCapabilityv920extFddPhysChCapability::theInfo,
};
bool PhysicalChannelCapabilityv920ext::itemsPres[1] = {
	0,
};
const PhysicalChannelCapabilityv920ext::Info PhysicalChannelCapabilityv920ext::theInfo = {
	PhysicalChannelCapabilityv920ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *PhysicalChannelCapabilityInfov770extTddPhysChCapability768::itemsInfo[1] = {
	&DLPhysChCapabilityInfoTDD768::theInfo,
};
bool PhysicalChannelCapabilityInfov770extTddPhysChCapability768::itemsPres[1] = {
	1,
};
const PhysicalChannelCapabilityInfov770extTddPhysChCapability768::Info PhysicalChannelCapabilityInfov770extTddPhysChCapability768::theInfo = {
	PhysicalChannelCapabilityInfov770extTddPhysChCapability768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PhysicalChannelCapabilityInfov770ext::itemsInfo[1] = {
	&PhysicalChannelCapabilityInfov770extTddPhysChCapability768::theInfo,
};
bool PhysicalChannelCapabilityInfov770ext::itemsPres[1] = {
	0,
};
const PhysicalChannelCapabilityInfov770ext::Info PhysicalChannelCapabilityInfov770ext::theInfo = {
	PhysicalChannelCapabilityInfov770ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *PhysicalChannelCapabilityLCRr4Tdd128PhysChCapability::itemsInfo[1] = {
	&DLPhysChCapabilityTDDLCRr4::theInfo,
};
bool PhysicalChannelCapabilityLCRr4Tdd128PhysChCapability::itemsPres[1] = {
	1,
};
const PhysicalChannelCapabilityLCRr4Tdd128PhysChCapability::Info PhysicalChannelCapabilityLCRr4Tdd128PhysChCapability::theInfo = {
	PhysicalChannelCapabilityLCRr4Tdd128PhysChCapability::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PhysicalChannelCapabilityLCRr4::itemsInfo[1] = {
	&PhysicalChannelCapabilityLCRr4Tdd128PhysChCapability::theInfo,
};
bool PhysicalChannelCapabilityLCRr4::itemsPres[1] = {
	0,
};
const PhysicalChannelCapabilityLCRr4::Info PhysicalChannelCapabilityLCRr4::theInfo = {
	PhysicalChannelCapabilityLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *PhysicalChannelCapabilityhspdschr5FddhspdschSupported::itemsInfo[1] = {
	&HSDSCHphysicallayercategory::theInfo,
};
bool PhysicalChannelCapabilityhspdschr5FddhspdschSupported::itemsPres[1] = {
	1,
};
const PhysicalChannelCapabilityhspdschr5FddhspdschSupported::Info PhysicalChannelCapabilityhspdschr5FddhspdschSupported::theInfo = {
	PhysicalChannelCapabilityhspdschr5FddhspdschSupported::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PhysicalChannelCapabilityhspdschr5Fddhspdsch::choicesInfo[1] = {
	&PhysicalChannelCapabilityhspdschr5FddhspdschSupported::theInfo,
};
const PhysicalChannelCapabilityhspdschr5Fddhspdsch::Info PhysicalChannelCapabilityhspdschr5Fddhspdsch::theInfo = {
	PhysicalChannelCapabilityhspdschr5Fddhspdsch::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *PhysicalChannelCapabilityhspdschr5::itemsInfo[1] = {
	&PhysicalChannelCapabilityhspdschr5Fddhspdsch::theInfo,
};
bool PhysicalChannelCapabilityhspdschr5::itemsPres[1] = {
	1,
};
const PhysicalChannelCapabilityhspdschr5::Info PhysicalChannelCapabilityhspdschr5::theInfo = {
	PhysicalChannelCapabilityhspdschr5::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PNBSCHAllocationr4::itemsInfo[1] = {
	&PNBSCHAllocationr4numberOfRepetitionsPerSFNPeriod::theInfo,
};
bool PNBSCHAllocationr4::itemsPres[1] = {
	1,
};
const PNBSCHAllocationr4::Info PNBSCHAllocationr4::theInfo = {
	PNBSCHAllocationr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PreRedirectionInfo::itemsInfo[1] = {
	&PreRedirectionInfoSupportEUTRAFDD::theInfo,
};
bool PreRedirectionInfo::itemsPres[1] = {
	1,
};
const PreRedirectionInfo::Info PreRedirectionInfo::theInfo = {
	PreRedirectionInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ProtocolErrorIndicatorWithMoreInfo::choicesInfo[1] = {
	&ProtocolErrorIndicatorWithMoreInfoNoError::theInfo,
};
const ProtocolErrorIndicatorWithMoreInfo::Info ProtocolErrorIndicatorWithMoreInfo::theInfo = {
	ProtocolErrorIndicatorWithMoreInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *ProtocolErrorMoreInformationDiagnosticsTypeType1::choicesInfo[1] = {
	&ProtocolErrorMoreInformationDiagnosticsTypeType1Asn1ViolationOrEncodingError::theInfo,
};
const ProtocolErrorMoreInformationDiagnosticsTypeType1::Info ProtocolErrorMoreInformationDiagnosticsTypeType1::theInfo = {
	ProtocolErrorMoreInformationDiagnosticsTypeType1::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *ProtocolErrorMoreInformationDiagnosticsType::choicesInfo[1] = {
	&ProtocolErrorMoreInformationDiagnosticsTypeType1::theInfo,
};
const ProtocolErrorMoreInformationDiagnosticsType::Info ProtocolErrorMoreInformationDiagnosticsType::theInfo = {
	ProtocolErrorMoreInformationDiagnosticsType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *ProtocolErrorMoreInformation::itemsInfo[1] = {
	&ProtocolErrorMoreInformationDiagnosticsType::theInfo,
};
bool ProtocolErrorMoreInformation::itemsPres[1] = {
	1,
};
const ProtocolErrorMoreInformation::Info ProtocolErrorMoreInformation::theInfo = {
	ProtocolErrorMoreInformation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *Rbtimerindicator::itemsInfo[1] = {
	&RbtimerindicatorT314expired::theInfo,
};
bool Rbtimerindicator::itemsPres[1] = {
	1,
};
const Rbtimerindicator::Info Rbtimerindicator::theInfo = {
	Rbtimerindicator::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *RedirectionInfo::choicesInfo[1] = {
	&FrequencyInfo::theInfo,
};
const RedirectionInfo::Info RedirectionInfo::theInfo = {
	RedirectionInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *RedirectionInfor6::choicesInfo[1] = {
	&FrequencyInfo::theInfo,
};
const RedirectionInfor6::Info RedirectionInfor6::theInfo = {
	RedirectionInfor6::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *RedirectionInfov860ext::choicesInfo[1] = {
	&RedirectionInfov860extFrequencyInfo::theInfo,
};
const RedirectionInfov860ext::Info RedirectionInfov860ext::theInfo = {
	RedirectionInfov860ext::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *RFCapabilityFddRFCapability::itemsInfo[1] = {
	&UEPowerClass::theInfo,
};
bool RFCapabilityFddRFCapability::itemsPres[1] = {
	1,
};
const RFCapabilityFddRFCapability::Info RFCapabilityFddRFCapability::theInfo = {
	RFCapabilityFddRFCapability::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *RFCapability::itemsInfo[1] = {
	&RFCapabilityFddRFCapability::theInfo,
};
bool RFCapability::itemsPres[1] = {
	0,
};
const RFCapability::Info RFCapability::theInfo = {
	RFCapability::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *RFCapabilityr4extTddRFCapability::itemsInfo[1] = {
	&UEPowerClass::theInfo,
};
bool RFCapabilityr4extTddRFCapability::itemsPres[1] = {
	1,
};
const RFCapabilityr4extTddRFCapability::Info RFCapabilityr4extTddRFCapability::theInfo = {
	RFCapabilityr4extTddRFCapability::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *RFCapabilityr4ext::itemsInfo[1] = {
	&RFCapabilityr4extTddRFCapability::theInfo,
};
bool RFCapabilityr4ext::itemsPres[1] = {
	0,
};
const RFCapabilityr4ext::Info RFCapabilityr4ext::theInfo = {
	RFCapabilityr4ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *RFCapabilityv770ext::itemsInfo[1] = {
	&RadioFrequencyBandTDDListr7::theInfo,
};
bool RFCapabilityv770ext::itemsPres[1] = {
	0,
};
const RFCapabilityv770ext::Info RFCapabilityv770ext::theInfo = {
	RFCapabilityv770ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *RFCapabilityv860ext::itemsInfo[1] = {
	&RadioFrequencyBandTDDextList::theInfo,
};
bool RFCapabilityv860ext::itemsPres[1] = {
	0,
};
const RFCapabilityv860ext::Info RFCapabilityv860ext::theInfo = {
	RFCapabilityv860ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *RLCCapability::itemsInfo[1] = {
	&TotalRLCAMBufferSize::theInfo,
};
bool RLCCapability::itemsPres[1] = {
	1,
};
const RLCCapability::Info RLCCapability::theInfo = {
	RLCCapability::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *RLCCapabilityr5ext::itemsInfo[1] = {
	&TotalRLCAMBufferSizer5ext::theInfo,
};
bool RLCCapabilityr5ext::itemsPres[1] = {
	0,
};
const RLCCapabilityr5ext::Info RLCCapabilityr5ext::theInfo = {
	RLCCapabilityr5ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *RLCCapabilityv770ext::itemsInfo[1] = {
	&RLCCapabilityv770extSupportOfTwoLogicalChannel::theInfo,
};
bool RLCCapabilityv770ext::itemsPres[1] = {
	1,
};
const RLCCapabilityv770ext::Info RLCCapabilityv770ext::theInfo = {
	RLCCapabilityv770ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *RLCCapabilityv920ext::itemsInfo[1] = {
	&TotalRLCAMBufferSizev920ext::theInfo,
};
bool RLCCapabilityv920ext::itemsPres[1] = {
	0,
};
const RLCCapabilityv920ext::Info RLCCapabilityv920ext::theInfo = {
	RLCCapabilityv920ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SecurityCapability::itemsInfo[1] = {
	&SecurityCapabilityCipheringAlgorithmCap::theInfo,
};
bool SecurityCapability::itemsPres[1] = {
	1,
};
const SecurityCapability::Info SecurityCapability::theInfo = {
	SecurityCapability::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *SecondaryServingEDCHCellInfo::itemsInfo[1] = {
	&ERNTI::theInfo,
};
bool SecondaryServingEDCHCellInfo::itemsPres[1] = {
	0,
};
const SecondaryServingEDCHCellInfo::Info SecondaryServingEDCHCellInfo::theInfo = {
	SecondaryServingEDCHCellInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SecondaryEDCHInfoCommon::itemsInfo[1] = {
	&FrequencyInfo::theInfo,
};
bool SecondaryEDCHInfoCommon::itemsPres[1] = {
	1,
};
const SecondaryEDCHInfoCommon::Info SecondaryEDCHInfoCommon::theInfo = {
	SecondaryEDCHInfoCommon::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ServingHSDSCHCellInformation::itemsInfo[1] = {
	&DeltaACK::theInfo,
};
bool ServingHSDSCHCellInformation::itemsPres[1] = {
	0,
};
const ServingHSDSCHCellInformation::Info ServingHSDSCHCellInformation::theInfo = {
	ServingHSDSCHCellInformation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ServingHSDSCHCellInformationr7::itemsInfo[1] = {
	&DeltaACK::theInfo,
};
bool ServingHSDSCHCellInformationr7::itemsPres[1] = {
	0,
};
const ServingHSDSCHCellInformationr7::Info ServingHSDSCHCellInformationr7::theInfo = {
	ServingHSDSCHCellInformationr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ServingHSDSCHCellInformationr8::itemsInfo[1] = {
	&DeltaACK::theInfo,
};
bool ServingHSDSCHCellInformationr8::itemsPres[1] = {
	0,
};
const ServingHSDSCHCellInformationr8::Info ServingHSDSCHCellInformationr8::theInfo = {
	ServingHSDSCHCellInformationr8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ServingHSDSCHCellInformationr9::itemsInfo[1] = {
	&DeltaACK::theInfo,
};
bool ServingHSDSCHCellInformationr9::itemsPres[1] = {
	0,
};
const ServingHSDSCHCellInformationr9::Info ServingHSDSCHCellInformationr9::theInfo = {
	ServingHSDSCHCellInformationr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SimultaneousSCCPCHDPCHReception::choicesInfo[1] = {
	&SimultaneousSCCPCHDPCHReceptionNotSupported::theInfo,
};
const SimultaneousSCCPCHDPCHReception::Info SimultaneousSCCPCHDPCHReception::theInfo = {
	SimultaneousSCCPCHDPCHReception::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *SRVCCInfo::itemsInfo[1] = {
	&SRVCCInfoNonce::theInfo,
};
bool SRVCCInfo::itemsPres[1] = {
	0,
};
const SRVCCInfo::Info SRVCCInfo::theInfo = {
	SRVCCInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SRVCCSecurityRABInfov860ext::itemsInfo[1] = {
	&SRVCCInfo::theInfo,
};
bool SRVCCSecurityRABInfov860ext::itemsPres[1] = {
	1,
};
const SRVCCSecurityRABInfov860ext::Info SRVCCSecurityRABInfov860ext::theInfo = {
	SRVCCSecurityRABInfov860ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *STARTSingle::itemsInfo[1] = {
	&CNDomainIdentity::theInfo,
};
bool STARTSingle::itemsPres[1] = {
	1,
};
const STARTSingle::Info STARTSingle::theInfo = {
	STARTSingle::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *TMSIandLAIGSMMAP::itemsInfo[1] = {
	&TMSIGSMMAP::theInfo,
};
bool TMSIandLAIGSMMAP::itemsPres[1] = {
	1,
};
const TMSIandLAIGSMMAP::Info TMSIandLAIGSMMAP::theInfo = {
	TMSIandLAIGSMMAP::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *TransportChannelCapability::itemsInfo[1] = {
	&DLTransChCapability::theInfo,
};
bool TransportChannelCapability::itemsPres[1] = {
	1,
};
const TransportChannelCapability::Info TransportChannelCapability::theInfo = {
	TransportChannelCapability::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *TurboSupport::choicesInfo[1] = {
	&TurboSupportNotSupported::theInfo,
};
const TurboSupport::Info TurboSupport::theInfo = {
	TurboSupport::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *URNTIShort::itemsInfo[1] = {
	&SRNCIdentity::theInfo,
};
bool URNTIShort::itemsPres[1] = {
	1,
};
const URNTIShort::Info URNTIShort::theInfo = {
	URNTIShort::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PhysicalChannelCapabilityedchr6FddedchSupported::itemsInfo[1] = {
	&PhysicalChannelCapabilityedchr6FddedchSupportedEdchPhysicalLayerCategory::theInfo,
};
bool PhysicalChannelCapabilityedchr6FddedchSupported::itemsPres[1] = {
	1,
};
const PhysicalChannelCapabilityedchr6FddedchSupported::Info PhysicalChannelCapabilityedchr6FddedchSupported::theInfo = {
	PhysicalChannelCapabilityedchr6FddedchSupported::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PhysicalChannelCapabilityedchr6Fddedch::choicesInfo[1] = {
	&PhysicalChannelCapabilityedchr6FddedchSupported::theInfo,
};
const PhysicalChannelCapabilityedchr6Fddedch::Info PhysicalChannelCapabilityedchr6Fddedch::theInfo = {
	PhysicalChannelCapabilityedchr6Fddedch::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *PhysicalChannelCapabilityedchr6::itemsInfo[1] = {
	&PhysicalChannelCapabilityedchr6Fddedch::theInfo,
};
bool PhysicalChannelCapabilityedchr6::itemsPres[1] = {
	1,
};
const PhysicalChannelCapabilityedchr6::Info PhysicalChannelCapabilityedchr6::theInfo = {
	PhysicalChannelCapabilityedchr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UERadioAccessCapabilityv690ext::itemsInfo[1] = {
	&PhysicalChannelCapabilityedchr6::theInfo,
};
bool UERadioAccessCapabilityv690ext::itemsPres[1] = {
	0,
};
const UERadioAccessCapabilityv690ext::Info UERadioAccessCapabilityv690ext::theInfo = {
	UERadioAccessCapabilityv690ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UECapabilityContainerIEs::itemsInfo[1] = {
	&UERadioAccessCapabilityv690ext::theInfo,
};
bool UECapabilityContainerIEs::itemsPres[1] = {
	0,
};
const UECapabilityContainerIEs::Info UECapabilityContainerIEs::theInfo = {
	UECapabilityContainerIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UERadioAccessCapabilityv6b0extIEs::itemsInfo[1] = {
	&UERadioAccessCapabilityv6b0extIEssupportForSIB11bis::theInfo,
};
bool UERadioAccessCapabilityv6b0extIEs::itemsPres[1] = {
	0,
};
const UERadioAccessCapabilityv6b0extIEs::Info UERadioAccessCapabilityv6b0extIEs::theInfo = {
	UERadioAccessCapabilityv6b0extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UERadioAccessCapabilityv6e0extIEs::itemsInfo[1] = {
	&UERadioAccessCapabilityv6e0extIEssupportForFDPCH::theInfo,
};
bool UERadioAccessCapabilityv6e0extIEs::itemsPres[1] = {
	0,
};
const UERadioAccessCapabilityv6e0extIEs::Info UERadioAccessCapabilityv6e0extIEs::theInfo = {
	UERadioAccessCapabilityv6e0extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UERadioAccessCapabilityv770extIEs::itemsInfo[1] = {
	&PDCPCapabilityv770ext::theInfo,
};
bool UERadioAccessCapabilityv770extIEs::itemsPres[1] = {
	0,
};
const UERadioAccessCapabilityv770extIEs::Info UERadioAccessCapabilityv770extIEs::theInfo = {
	UERadioAccessCapabilityv770extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UERadioAccessCapabilityv790extIEs::itemsInfo[1] = {
	&UERadioAccessCapabilityv790extIEssupportForEDPCCHPowerBoosting::theInfo,
};
bool UERadioAccessCapabilityv790extIEs::itemsPres[1] = {
	0,
};
const UERadioAccessCapabilityv790extIEs::Info UERadioAccessCapabilityv790extIEs::theInfo = {
	UERadioAccessCapabilityv790extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UERadioAccessCapabilityv860extIEs::itemsInfo[1] = {
	&RFCapabilityv860ext::theInfo,
};
bool UERadioAccessCapabilityv860extIEs::itemsPres[1] = {
	0,
};
const UERadioAccessCapabilityv860extIEs::Info UERadioAccessCapabilityv860extIEs::theInfo = {
	UERadioAccessCapabilityv860extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UERadioAccessCapabilityv880extIEs::itemsInfo[1] = {
	&UERadioAccessCapabilityv880extIEssupportForPriorityReselectionInUTRAN::theInfo,
};
bool UERadioAccessCapabilityv880extIEs::itemsPres[1] = {
	0,
};
const UERadioAccessCapabilityv880extIEs::Info UERadioAccessCapabilityv880extIEs::theInfo = {
	UERadioAccessCapabilityv880extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UERadioAccessCapabilityv890extIEs::itemsInfo[1] = {
	&UERadioAccessCapabilityv890extIEssupportCellSpecificTxDiversityinDC_Operation::theInfo,
};
bool UERadioAccessCapabilityv890extIEs::itemsPres[1] = {
	0,
};
const UERadioAccessCapabilityv890extIEs::Info UERadioAccessCapabilityv890extIEs::theInfo = {
	UERadioAccessCapabilityv890extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UERadioAccessCapabilityv920extIEs::itemsInfo[1] = {
	&UERadioAccessCapabBandCombList::theInfo,
};
bool UERadioAccessCapabilityv920extIEs::itemsPres[1] = {
	0,
};
const UERadioAccessCapabilityv920extIEs::Info UERadioAccessCapabilityv920extIEs::theInfo = {
	UERadioAccessCapabilityv920extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UERadioAccessCapabilityv970extIEs::itemsInfo[1] = {
	&UERadioAccessCapabilityv970extIEsue_ExtendedMeasurementSupport::theInfo,
};
bool UERadioAccessCapabilityv970extIEs::itemsPres[1] = {
	0,
};
const UERadioAccessCapabilityv970extIEs::Info UERadioAccessCapabilityv970extIEs::theInfo = {
	UERadioAccessCapabilityv970extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEConnTimersAndConstants::itemsInfo[1] = {
	&T301::theInfo,
};
bool UEConnTimersAndConstants::itemsPres[1] = {
	0,
};
const UEConnTimersAndConstants::Info UEConnTimersAndConstants::theInfo = {
	UEConnTimersAndConstants::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEConnTimersAndConstantsv3a0ext::itemsInfo[1] = {
	&N312ext::theInfo,
};
bool UEConnTimersAndConstantsv3a0ext::itemsPres[1] = {
	0,
};
const UEConnTimersAndConstantsv3a0ext::Info UEConnTimersAndConstantsv3a0ext::theInfo = {
	UEConnTimersAndConstantsv3a0ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEConnTimersAndConstantsr5::itemsInfo[1] = {
	&T301::theInfo,
};
bool UEConnTimersAndConstantsr5::itemsPres[1] = {
	0,
};
const UEConnTimersAndConstantsr5::Info UEConnTimersAndConstantsr5::theInfo = {
	UEConnTimersAndConstantsr5::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEConnTimersAndConstantsv860ext::itemsInfo[1] = {
	&T323::theInfo,
};
bool UEConnTimersAndConstantsv860ext::itemsPres[1] = {
	0,
};
const UEConnTimersAndConstantsv860ext::Info UEConnTimersAndConstantsv860ext::theInfo = {
	UEConnTimersAndConstantsv860ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEGANSSPositioningCapability::itemsInfo[1] = {
	&NetworkAssistedGANSSSupportedList::theInfo,
};
bool UEGANSSPositioningCapability::itemsPres[1] = {
	0,
};
const UEGANSSPositioningCapability::Info UEGANSSPositioningCapability::theInfo = {
	UEGANSSPositioningCapability::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEGANSSPositioningCapabilityv860extIEs::itemsInfo[1] = {
	&NetworkAssistedGANSSSupportedListv860ext::theInfo,
};
bool UEGANSSPositioningCapabilityv860extIEs::itemsPres[1] = {
	0,
};
const UEGANSSPositioningCapabilityv860extIEs::Info UEGANSSPositioningCapabilityv860extIEs::theInfo = {
	UEGANSSPositioningCapabilityv860extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEIdleTimersAndConstants::itemsInfo[1] = {
	&T300::theInfo,
};
bool UEIdleTimersAndConstants::itemsPres[1] = {
	1,
};
const UEIdleTimersAndConstants::Info UEIdleTimersAndConstants::theInfo = {
	UEIdleTimersAndConstants::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UEHSPAIdentitiesr6::itemsInfo[1] = {
	&HRNTI::theInfo,
};
bool UEHSPAIdentitiesr6::itemsPres[1] = {
	0,
};
const UEHSPAIdentitiesr6::Info UEHSPAIdentitiesr6::theInfo = {
	UEHSPAIdentitiesr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEIdleTimersAndConstantsv3a0ext::itemsInfo[1] = {
	&N312ext::theInfo,
};
bool UEIdleTimersAndConstantsv3a0ext::itemsPres[1] = {
	0,
};
const UEIdleTimersAndConstantsv3a0ext::Info UEIdleTimersAndConstantsv3a0ext::theInfo = {
	UEIdleTimersAndConstantsv3a0ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEMultiModeRATCapability::itemsInfo[1] = {
	&MultiRATCapability::theInfo,
};
bool UEMultiModeRATCapability::itemsPres[1] = {
	1,
};
const UEMultiModeRATCapability::Info UEMultiModeRATCapability::theInfo = {
	UEMultiModeRATCapability::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UERadioAccessCapability::itemsInfo[1] = {
	&PDCPCapability::theInfo,
};
bool UERadioAccessCapability::itemsPres[1] = {
	0,
};
const UERadioAccessCapability::Info UERadioAccessCapability::theInfo = {
	UERadioAccessCapability::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UERadioAccessCapabilityInfo::itemsInfo[1] = {
	&UERadioAccessCapability::theInfo,
};
bool UERadioAccessCapabilityInfo::itemsPres[1] = {
	1,
};
const UERadioAccessCapabilityInfo::Info UERadioAccessCapabilityInfo::theInfo = {
	UERadioAccessCapabilityInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UERadioAccessCapabBandFDD::itemsInfo[1] = {
	&RadioFrequencyBandFDD::theInfo,
};
bool UERadioAccessCapabBandFDD::itemsPres[1] = {
	1,
};
const UERadioAccessCapabBandFDD::Info UERadioAccessCapabBandFDD::theInfo = {
	UERadioAccessCapabBandFDD::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UERadioAccessCapabilityv370ext::itemsInfo[1] = {
	&UERadioAccessCapabBandFDDList::theInfo,
};
bool UERadioAccessCapabilityv370ext::itemsPres[1] = {
	1,
};
const UERadioAccessCapabilityv370ext::Info UERadioAccessCapabilityv370ext::theInfo = {
	UERadioAccessCapabilityv370ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UEPositioningCapabilityExtv380::itemsInfo[1] = {
	&UEPositioningCapabilityExtv380RxtxTimeDifferenceType2Capable::theInfo,
};
bool UEPositioningCapabilityExtv380::itemsPres[1] = {
	1,
};
const UEPositioningCapabilityExtv380::Info UEPositioningCapabilityExtv380::theInfo = {
	UEPositioningCapabilityExtv380::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UERadioAccessCapabilityv380ext::itemsInfo[1] = {
	&UEPositioningCapabilityExtv380::theInfo,
};
bool UERadioAccessCapabilityv380ext::itemsPres[1] = {
	1,
};
const UERadioAccessCapabilityv380ext::Info UERadioAccessCapabilityv380ext::theInfo = {
	UERadioAccessCapabilityv380ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UEPositioningCapabilityExtv3a0::itemsInfo[1] = {
	&UEPositioningCapabilityExtv3a0validity_CellPCH_UraPCH::theInfo,
};
bool UEPositioningCapabilityExtv3a0::itemsPres[1] = {
	1,
};
const UEPositioningCapabilityExtv3a0::Info UEPositioningCapabilityExtv3a0::theInfo = {
	UEPositioningCapabilityExtv3a0::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UERadioAccessCapabilityv3a0ext::itemsInfo[1] = {
	&UEPositioningCapabilityExtv3a0::theInfo,
};
bool UERadioAccessCapabilityv3a0ext::itemsPres[1] = {
	1,
};
const UERadioAccessCapabilityv3a0ext::Info UERadioAccessCapabilityv3a0ext::theInfo = {
	UERadioAccessCapabilityv3a0ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UEPositioningCapabilityExtv3g0::itemsInfo[1] = {
	&UEPositioningCapabilityExtv3g0sfn_sfnType2Capability::theInfo,
};
bool UEPositioningCapabilityExtv3g0::itemsPres[1] = {
	1,
};
const UEPositioningCapabilityExtv3g0::Info UEPositioningCapabilityExtv3g0::theInfo = {
	UEPositioningCapabilityExtv3g0::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UERadioAccessCapabilityv3g0ext::itemsInfo[1] = {
	&UEPositioningCapabilityExtv3g0::theInfo,
};
bool UERadioAccessCapabilityv3g0ext::itemsPres[1] = {
	1,
};
const UERadioAccessCapabilityv3g0ext::Info UERadioAccessCapabilityv3g0ext::theInfo = {
	UERadioAccessCapabilityv3g0ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UERadioAccessCapabBandFDD2::itemsInfo[1] = {
	&RadioFrequencyBandFDD2::theInfo,
};
bool UERadioAccessCapabBandFDD2::itemsPres[1] = {
	1,
};
const UERadioAccessCapabBandFDD2::Info UERadioAccessCapabBandFDD2::theInfo = {
	UERadioAccessCapabBandFDD2::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UERadioAccessCapabilityv650ext::itemsInfo[1] = {
	&UERadioAccessCapabBandFDDList2::theInfo,
};
bool UERadioAccessCapabilityv650ext::itemsPres[1] = {
	0,
};
const UERadioAccessCapabilityv650ext::Info UERadioAccessCapabilityv650ext::theInfo = {
	UERadioAccessCapabilityv650ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UERadioAccessCapabilityv7e0ext::itemsInfo[1] = {
	&UERadioAccessCapabilityv7e0extsupportForTwoDRXSchemesInPCH::theInfo,
};
bool UERadioAccessCapabilityv7e0ext::itemsPres[1] = {
	0,
};
const UERadioAccessCapabilityv7e0ext::Info UERadioAccessCapabilityv7e0ext::theInfo = {
	UERadioAccessCapabilityv7e0ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UERadioAccessCapabilityv7f0ext::itemsInfo[1] = {
	&UERadioAccessCapabilityv7f0extsupportofTxDivOnNonMIMOChannel::theInfo,
};
bool UERadioAccessCapabilityv7f0ext::itemsPres[1] = {
	0,
};
const UERadioAccessCapabilityv7f0ext::Info UERadioAccessCapabilityv7f0ext::theInfo = {
	UERadioAccessCapabilityv7f0ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UERadioAccessCapabilityInfov770ext::itemsInfo[1] = {
	&RFCapabilityv770ext::theInfo,
};
bool UERadioAccessCapabilityInfov770ext::itemsPres[1] = {
	0,
};
const UERadioAccessCapabilityInfov770ext::Info UERadioAccessCapabilityInfov770ext::theInfo = {
	UERadioAccessCapabilityInfov770ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UERadioAccessCapabilityInfoTDD128v8b0ext::itemsInfo[1] = {
	&MeasurementCapabilityTDD::theInfo,
};
bool UERadioAccessCapabilityInfoTDD128v8b0ext::itemsPres[1] = {
	0,
};
const UERadioAccessCapabilityInfoTDD128v8b0ext::Info UERadioAccessCapabilityInfoTDD128v8b0ext::theInfo = {
	UERadioAccessCapabilityInfoTDD128v8b0ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UERadioAccessCapabilityv860ext::itemsInfo[1] = {
	&UERadioAccessCapabBandFDDList3::theInfo,
};
bool UERadioAccessCapabilityv860ext::itemsPres[1] = {
	1,
};
const UERadioAccessCapabilityv860ext::Info UERadioAccessCapabilityv860ext::theInfo = {
	UERadioAccessCapabilityv860ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UERadioAccessCapabilityv880ext::itemsInfo[1] = {
	&UERadioAccessCapabilityv880extsupportForPriorityReselectionInUTRAN::theInfo,
};
bool UERadioAccessCapabilityv880ext::itemsPres[1] = {
	0,
};
const UERadioAccessCapabilityv880ext::Info UERadioAccessCapabilityv880ext::theInfo = {
	UERadioAccessCapabilityv880ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UERadioAccessCapabilityv890ext::itemsInfo[1] = {
	&UERadioAccessCapabilityv890extsupportCellSpecificTxDiversityinDC_Operation::theInfo,
};
bool UERadioAccessCapabilityv890ext::itemsPres[1] = {
	0,
};
const UERadioAccessCapabilityv890ext::Info UERadioAccessCapabilityv890ext::theInfo = {
	UERadioAccessCapabilityv890ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UERadioAccessCapabilityv920ext::itemsInfo[1] = {
	&UERadioAccessCapabilityv920extsupportOfenhancedTS0::theInfo,
};
bool UERadioAccessCapabilityv920ext::itemsPres[1] = {
	0,
};
const UERadioAccessCapabilityv920ext::Info UERadioAccessCapabilityv920ext::theInfo = {
	UERadioAccessCapabilityv920ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEPositioningCapabilityv770ext::itemsInfo[1] = {
	&UEGANSSPositioningCapability::theInfo,
};
bool UEPositioningCapabilityv770ext::itemsPres[1] = {
	0,
};
const UEPositioningCapabilityv770ext::Info UEPositioningCapabilityv770ext::theInfo = {
	UEPositioningCapabilityv770ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEPositioningCapabilityv860ext::itemsInfo[1] = {
	&UEGANSSPositioningCapabilityv860extIEs::theInfo,
};
bool UEPositioningCapabilityv860ext::itemsPres[1] = {
	0,
};
const UEPositioningCapabilityv860ext::Info UEPositioningCapabilityv860ext::theInfo = {
	UEPositioningCapabilityv860ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UERadioAccessCapabBandFDDext::itemsInfo[1] = {
	&RadioFrequencyBandFDD::theInfo,
};
bool UERadioAccessCapabBandFDDext::itemsPres[1] = {
	1,
};
const UERadioAccessCapabBandFDDext::Info UERadioAccessCapabBandFDDext::theInfo = {
	UERadioAccessCapabBandFDDext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UERadioAccessCapabilityv4b0ext::itemsInfo[1] = {
	&PDCPCapabilityr4ext::theInfo,
};
bool UERadioAccessCapabilityv4b0ext::itemsPres[1] = {
	0,
};
const UERadioAccessCapabilityv4b0ext::Info UERadioAccessCapabilityv4b0ext::theInfo = {
	UERadioAccessCapabilityv4b0ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UERadioAccessCapabilityComp::itemsInfo[1] = {
	&UERadioAccessCapabilityCompTotalAMRLCMemoryExceeds10kB::theInfo,
};
bool UERadioAccessCapabilityComp::itemsPres[1] = {
	1,
};
const UERadioAccessCapabilityComp::Info UERadioAccessCapabilityComp::theInfo = {
	UERadioAccessCapabilityComp::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UERadioAccessCapabilityCompext::itemsInfo[1] = {
	&RFCapabBandListFDDCompext::theInfo,
};
bool UERadioAccessCapabilityCompext::itemsPres[1] = {
	1,
};
const UERadioAccessCapabilityCompext::Info UERadioAccessCapabilityCompext::theInfo = {
	UERadioAccessCapabilityCompext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UERadioAccessCapabilityCompTDD128v7f0ext::itemsInfo[1] = {
	&HSDSCHphysicallayercategory::theInfo,
};
bool UERadioAccessCapabilityCompTDD128v7f0ext::itemsPres[1] = {
	0,
};
const UERadioAccessCapabilityCompTDD128v7f0ext::Info UERadioAccessCapabilityCompTDD128v7f0ext::theInfo = {
	UERadioAccessCapabilityCompTDD128v7f0ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *RFCapabilityCompv770ext::itemsInfo[1] = {
	&RadioFrequencyBandTDDListr7::theInfo,
};
bool RFCapabilityCompv770ext::itemsPres[1] = {
	0,
};
const RFCapabilityCompv770ext::Info RFCapabilityCompv770ext::theInfo = {
	RFCapabilityCompv770ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UERadioAccessCapabilityCompv770ext::itemsInfo[1] = {
	&RFCapabilityCompv770ext::theInfo,
};
bool UERadioAccessCapabilityCompv770ext::itemsPres[1] = {
	0,
};
const UERadioAccessCapabilityCompv770ext::Info UERadioAccessCapabilityCompv770ext::theInfo = {
	UERadioAccessCapabilityCompv770ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UERadioAccessCapabilityComp2::itemsInfo[1] = {
	&UERadioAccessCapabilityComp2FddPhysicalChannelCapabhspdschedch::theInfo,
};
bool UERadioAccessCapabilityComp2::itemsPres[1] = {
	0,
};
const UERadioAccessCapabilityComp2::Info UERadioAccessCapabilityComp2::theInfo = {
	UERadioAccessCapabilityComp2::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UERadioAccessCapabilityComp2v770ext::itemsInfo[1] = {
	&HSDSCHphysicallayercategoryext::theInfo,
};
bool UERadioAccessCapabilityComp2v770ext::itemsPres[1] = {
	0,
};
const UERadioAccessCapabilityComp2v770ext::Info UERadioAccessCapabilityComp2v770ext::theInfo = {
	UERadioAccessCapabilityComp2v770ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UERadioAccessCapabilityComp2v7f0ext::itemsInfo[1] = {
	&UERadioAccessCapabilityComp2v7f0extsupportofTxDivOnNonMIMOChannel::theInfo,
};
bool UERadioAccessCapabilityComp2v7f0ext::itemsPres[1] = {
	0,
};
const UERadioAccessCapabilityComp2v7f0ext::Info UERadioAccessCapabilityComp2v7f0ext::theInfo = {
	UERadioAccessCapabilityComp2v7f0ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UERadioAccessCapabilityComp2v860ext::itemsInfo[1] = {
	&HSDSCHphysicallayercategoryext2::theInfo,
};
bool UERadioAccessCapabilityComp2v860ext::itemsPres[1] = {
	0,
};
const UERadioAccessCapabilityComp2v860ext::Info UERadioAccessCapabilityComp2v860ext::theInfo = {
	UERadioAccessCapabilityComp2v860ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UERadioAccessCapabilityComp2v920ext::itemsInfo[1] = {
	&HSDSCHphysicallayercategoryext3::theInfo,
};
bool UERadioAccessCapabilityComp2v920ext::itemsPres[1] = {
	0,
};
const UERadioAccessCapabilityComp2v920ext::Info UERadioAccessCapabilityComp2v920ext::theInfo = {
	UERadioAccessCapabilityComp2v920ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UERadioAccessCapabilityCompTDD128::itemsInfo[1] = {
	&RadioFrequencyBandTDDextList::theInfo,
};
bool UERadioAccessCapabilityCompTDD128::itemsPres[1] = {
	0,
};
const UERadioAccessCapabilityCompTDD128::Info UERadioAccessCapabilityCompTDD128::theInfo = {
	UERadioAccessCapabilityCompTDD128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *RFCapabilityCompFdd::choicesInfo[1] = {
	&RFCapabilityCompFddNotSupported::theInfo,
};
const RFCapabilityCompFdd::Info RFCapabilityCompFdd::theInfo = {
	RFCapabilityCompFdd::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *RFCapabilityComp::itemsInfo[1] = {
	&RFCapabilityCompFdd::theInfo,
};
bool RFCapabilityComp::itemsPres[1] = {
	1,
};
const RFCapabilityComp::Info RFCapabilityComp::theInfo = {
	RFCapabilityComp::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UERadioAccessCapabilityv5c0ext::itemsInfo[1] = {
	&PDCPCapabilityr5ext2::theInfo,
};
bool UERadioAccessCapabilityv5c0ext::itemsPres[1] = {
	1,
};
const UERadioAccessCapabilityv5c0ext::Info UERadioAccessCapabilityv5c0ext::theInfo = {
	UERadioAccessCapabilityv5c0ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UERadioAccessCapabilityv680ext::itemsInfo[1] = {
	&MultiModeRATCapabilityv680ext::theInfo,
};
bool UERadioAccessCapabilityv680ext::itemsPres[1] = {
	1,
};
const UERadioAccessCapabilityv680ext::Info UERadioAccessCapabilityv680ext::theInfo = {
	UERadioAccessCapabilityv680ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ULPhysChCapabilityFDD::itemsInfo[1] = {
	&MaxNoDPDCHBitsTransmitted::theInfo,
};
bool ULPhysChCapabilityFDD::itemsPres[1] = {
	1,
};
const ULPhysChCapabilityFDD::Info ULPhysChCapabilityFDD::theInfo = {
	ULPhysChCapabilityFDD::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ULPhysChCapabilityFDDr6::itemsInfo[1] = {
	&MaxNoDPDCHBitsTransmitted::theInfo,
};
bool ULPhysChCapabilityFDDr6::itemsPres[1] = {
	1,
};
const ULPhysChCapabilityFDDr6::Info ULPhysChCapabilityFDDr6::theInfo = {
	ULPhysChCapabilityFDDr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ULPhysChCapabilityFDDv770ext::itemsInfo[1] = {
	&ULPhysChCapabilityFDDv770extEdchPhysicalLayerCategoryextension::theInfo,
};
bool ULPhysChCapabilityFDDv770ext::itemsPres[1] = {
	0,
};
const ULPhysChCapabilityFDDv770ext::Info ULPhysChCapabilityFDDv770ext::theInfo = {
	ULPhysChCapabilityFDDv770ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ULPhysChCapabilityFDDv920ext::itemsInfo[1] = {
	&ULPhysChCapabilityFDDv920extEdchPhysicalLayerCategoryextension2::theInfo,
};
bool ULPhysChCapabilityFDDv920ext::itemsPres[1] = {
	0,
};
const ULPhysChCapabilityFDDv920ext::Info ULPhysChCapabilityFDDv920ext::theInfo = {
	ULPhysChCapabilityFDDv920ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ULPhysChCapabilityTDD::itemsInfo[1] = {
	&MaxTSPerFrame::theInfo,
};
bool ULPhysChCapabilityTDD::itemsPres[1] = {
	1,
};
const ULPhysChCapabilityTDD::Info ULPhysChCapabilityTDD::theInfo = {
	ULPhysChCapabilityTDD::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ULPhysChCapabilityTDD384v770extTdd384edchSupported::itemsInfo[1] = {
	&ULPhysChCapabilityTDD384v770extTdd384edchSupportedTddedchPhysicalLayerCategory::theInfo,
};
bool ULPhysChCapabilityTDD384v770extTdd384edchSupported::itemsPres[1] = {
	1,
};
const ULPhysChCapabilityTDD384v770extTdd384edchSupported::Info ULPhysChCapabilityTDD384v770extTdd384edchSupported::theInfo = {
	ULPhysChCapabilityTDD384v770extTdd384edchSupported::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ULPhysChCapabilityTDD384v770extTdd384edch::choicesInfo[1] = {
	&ULPhysChCapabilityTDD384v770extTdd384edchSupported::theInfo,
};
const ULPhysChCapabilityTDD384v770extTdd384edch::Info ULPhysChCapabilityTDD384v770extTdd384edch::theInfo = {
	ULPhysChCapabilityTDD384v770extTdd384edch::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *ULPhysChCapabilityTDD384v770ext::itemsInfo[1] = {
	&ULPhysChCapabilityTDD384v770extTdd384edch::theInfo,
};
bool ULPhysChCapabilityTDD384v770ext::itemsPres[1] = {
	1,
};
const ULPhysChCapabilityTDD384v770ext::Info ULPhysChCapabilityTDD384v770ext::theInfo = {
	ULPhysChCapabilityTDD384v770ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ULPhysChCapabilityTDDLCRr4::itemsInfo[1] = {
	&MaxTSPerSubFramer4::theInfo,
};
bool ULPhysChCapabilityTDDLCRr4::itemsPres[1] = {
	1,
};
const ULPhysChCapabilityTDDLCRr4::Info ULPhysChCapabilityTDDLCRr4::theInfo = {
	ULPhysChCapabilityTDDLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ULPhysChCapabilityTDD128v770ext::itemsInfo[1] = {
	&MaxPhysChPerTimeslotLCRr7::theInfo,
};
bool ULPhysChCapabilityTDD128v770ext::itemsPres[1] = {
	1,
};
const ULPhysChCapabilityTDD128v770ext::Info ULPhysChCapabilityTDD128v770ext::theInfo = {
	ULPhysChCapabilityTDD128v770ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ULPhysChCapabilityInfoTDD128v770ext::itemsInfo[1] = {
	&MaxPhysChPerTimeslotLCRr7::theInfo,
};
bool ULPhysChCapabilityInfoTDD128v770ext::itemsPres[1] = {
	1,
};
const ULPhysChCapabilityInfoTDD128v770ext::Info ULPhysChCapabilityInfoTDD128v770ext::theInfo = {
	ULPhysChCapabilityInfoTDD128v770ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ULPhysChCapabilityTDD768::itemsInfo[1] = {
	&MaxTSPerFrame::theInfo,
};
bool ULPhysChCapabilityTDD768::itemsPres[1] = {
	1,
};
const ULPhysChCapabilityTDD768::Info ULPhysChCapabilityTDD768::theInfo = {
	ULPhysChCapabilityTDD768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ULSecondaryCellInfoFDD::choicesInfo[1] = {
	&ULSecondaryCellInfoFDDContinue::theInfo,
};
const ULSecondaryCellInfoFDD::Info ULSecondaryCellInfoFDD::theInfo = {
	ULSecondaryCellInfoFDD::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *ULTransChCapability::itemsInfo[1] = {
	&MaxNoBits::theInfo,
};
bool ULTransChCapability::itemsPres[1] = {
	1,
};
const ULTransChCapability::Info ULTransChCapability::theInfo = {
	ULTransChCapability::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UEPositioningCapability::itemsInfo[1] = {
	&UEPositioningCapabilityStandaloneLocMethodsSupported::theInfo,
};
bool UEPositioningCapability::itemsPres[1] = {
	1,
};
const UEPositioningCapability::Info UEPositioningCapability::theInfo = {
	UEPositioningCapability::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UESecurityInformation::itemsInfo[1] = {
	&STARTValue::theInfo,
};
bool UESecurityInformation::itemsPres[1] = {
	1,
};
const UESecurityInformation::Info UESecurityInformation::theInfo = {
	UESecurityInformation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UESecurityInformation2::itemsInfo[1] = {
	&STARTValue::theInfo,
};
bool UESecurityInformation2::itemsPres[1] = {
	1,
};
const UESecurityInformation2::Info UESecurityInformation2::theInfo = {
	UESecurityInformation2::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UTRANDRXCycleLengthCoefficientr7::itemsInfo[1] = {
	&UTRANDRXCycleLengthCoefficientr7DrxCycleLengthCoefficient::theInfo,
};
bool UTRANDRXCycleLengthCoefficientr7::itemsPres[1] = {
	0,
};
const UTRANDRXCycleLengthCoefficientr7::Info UTRANDRXCycleLengthCoefficientr7::theInfo = {
	UTRANDRXCycleLengthCoefficientr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *RFC2507Info::itemsInfo[1] = {
	&RFC2507InfoFMAXPERIOD::theInfo,
};
bool RFC2507Info::itemsPres[1] = {
	0,
};
const RFC2507Info::Info RFC2507Info::theInfo = {
	RFC2507Info::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *AlgorithmSpecificInfo::choicesInfo[1] = {
	&RFC2507Info::theInfo,
};
const AlgorithmSpecificInfo::Info AlgorithmSpecificInfo::theInfo = {
	AlgorithmSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *AlgorithmSpecificInfor4::choicesInfo[1] = {
	&RFC2507Info::theInfo,
};
const AlgorithmSpecificInfor4::Info AlgorithmSpecificInfor4::theInfo = {
	AlgorithmSpecificInfor4::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *CommonRBMappingInfo::itemsInfo[1] = {
	&LogicalChannelIdentity::theInfo,
};
bool CommonRBMappingInfo::itemsPres[1] = {
	1,
};
const CommonRBMappingInfo::Info CommonRBMappingInfo::theInfo = {
	CommonRBMappingInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DefaultConfigForCellFACH::itemsInfo[1] = {
	&DefaultConfigMode::theInfo,
};
bool DefaultConfigForCellFACH::itemsPres[1] = {
	1,
};
const DefaultConfigForCellFACH::Info DefaultConfigForCellFACH::theInfo = {
	DefaultConfigForCellFACH::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DLAMRLCMode::itemsInfo[1] = {
	&DLAMRLCModeInSequenceDelivery::theInfo,
};
bool DLAMRLCMode::itemsPres[1] = {
	1,
};
const DLAMRLCMode::Info DLAMRLCMode::theInfo = {
	DLAMRLCMode::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *OctetModeRLCSizeInfoType1::choicesInfo[1] = {
	&OctetModeRLCSizeInfoType1SizeType1::theInfo,
};
const OctetModeRLCSizeInfoType1::Info OctetModeRLCSizeInfoType1::theInfo = {
	OctetModeRLCSizeInfoType1::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *DLAMRLCModer5::itemsInfo[1] = {
	&OctetModeRLCSizeInfoType1::theInfo,
};
bool DLAMRLCModer5::itemsPres[1] = {
	1,
};
const DLAMRLCModer5::Info DLAMRLCModer5::theInfo = {
	DLAMRLCModer5::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DLAMRLCModer7DlRLCPDUsize::choicesInfo[1] = {
	&OctetModeRLCSizeInfoType1::theInfo,
};
const DLAMRLCModer7DlRLCPDUsize::Info DLAMRLCModer7DlRLCPDUsize::theInfo = {
	DLAMRLCModer7DlRLCPDUsize::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *DLAMRLCModer7::itemsInfo[1] = {
	&DLAMRLCModer7DlRLCPDUsize::theInfo,
};
bool DLAMRLCModer7::itemsPres[1] = {
	1,
};
const DLAMRLCModer7::Info DLAMRLCModer7::theInfo = {
	DLAMRLCModer7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *RBWithPDCPInfo::itemsInfo[1] = {
	&RBIdentity::theInfo,
};
bool RBWithPDCPInfo::itemsPres[1] = {
	1,
};
const RBWithPDCPInfo::Info RBWithPDCPInfo::theInfo = {
	RBWithPDCPInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DLCounterSynchronisationInfo::itemsInfo[1] = {
	&RBWithPDCPInfoList::theInfo,
};
bool DLCounterSynchronisationInfo::itemsPres[1] = {
	0,
};
const DLCounterSynchronisationInfo::Info DLCounterSynchronisationInfo::theInfo = {
	DLCounterSynchronisationInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLCounterSynchronisationInfor5::itemsInfo[1] = {
	&RBWithPDCPInfoList::theInfo,
};
bool DLCounterSynchronisationInfor5::itemsPres[1] = {
	0,
};
const DLCounterSynchronisationInfor5::Info DLCounterSynchronisationInfor5::theInfo = {
	DLCounterSynchronisationInfor5::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLTransportChannelType::choicesInfo[1] = {
	&TransportChannelIdentity::theInfo,
};
const DLTransportChannelType::Info DLTransportChannelType::theInfo = {
	DLTransportChannelType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *DLLogicalChannelMapping::itemsInfo[1] = {
	&DLTransportChannelType::theInfo,
};
bool DLLogicalChannelMapping::itemsPres[1] = {
	0,
};
const DLLogicalChannelMapping::Info DLLogicalChannelMapping::theInfo = {
	DLLogicalChannelMapping::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLTransportChannelTyper5::choicesInfo[1] = {
	&TransportChannelIdentity::theInfo,
};
const DLTransportChannelTyper5::Info DLTransportChannelTyper5::theInfo = {
	DLTransportChannelTyper5::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *DLLogicalChannelMappingr5::itemsInfo[1] = {
	&DLTransportChannelTyper5::theInfo,
};
bool DLLogicalChannelMappingr5::itemsPres[1] = {
	0,
};
const DLLogicalChannelMappingr5::Info DLLogicalChannelMappingr5::theInfo = {
	DLLogicalChannelMappingr5::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLTransportChannelTyper7::choicesInfo[1] = {
	&TransportChannelIdentity::theInfo,
};
const DLTransportChannelTyper7::Info DLTransportChannelTyper7::theInfo = {
	DLTransportChannelTyper7::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *DLLogicalChannelMappingr7::itemsInfo[1] = {
	&DLTransportChannelTyper7::theInfo,
};
bool DLLogicalChannelMappingr7::itemsPres[1] = {
	0,
};
const DLLogicalChannelMappingr7::Info DLLogicalChannelMappingr7::theInfo = {
	DLLogicalChannelMappingr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLRFC3095r4::itemsInfo[1] = {
	&CIDInclusionInfor4::theInfo,
};
bool DLRFC3095r4::itemsPres[1] = {
	0,
};
const DLRFC3095r4::Info DLRFC3095r4::theInfo = {
	DLRFC3095r4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLRLCMode::choicesInfo[1] = {
	&DLAMRLCMode::theInfo,
};
const DLRLCMode::Info DLRLCMode::theInfo = {
	DLRLCMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *DLRLCModer5::choicesInfo[1] = {
	&DLAMRLCModer5::theInfo,
};
const DLRLCModer5::Info DLRLCModer5::theInfo = {
	DLRLCModer5::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *DLRLCModer6::choicesInfo[1] = {
	&DLAMRLCModer5::theInfo,
};
const DLRLCModer6::Info DLRLCModer6::theInfo = {
	DLRLCModer6::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *DLRLCModer7::choicesInfo[1] = {
	&DLAMRLCModer7::theInfo,
};
const DLRLCModer7::Info DLRLCModer7::theInfo = {
	DLRLCModer7::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *DLRLCStatusInfo::itemsInfo[1] = {
	&TimerStatusProhibit::theInfo,
};
bool DLRLCStatusInfo::itemsPres[1] = {
	0,
};
const DLRLCStatusInfo::Info DLRLCStatusInfo::theInfo = {
	DLRLCStatusInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLTMRLCMode::itemsInfo[1] = {
	&DLTMRLCModeSegmentationIndication::theInfo,
};
bool DLTMRLCMode::itemsPres[1] = {
	1,
};
const DLTMRLCMode::Info DLTMRLCMode::theInfo = {
	DLTMRLCMode::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DLUMRLCModer5::itemsInfo[1] = {
	&DLUMRLCLIsize::theInfo,
};
bool DLUMRLCModer5::itemsPres[1] = {
	1,
};
const DLUMRLCModer5::Info DLUMRLCModer5::theInfo = {
	DLUMRLCModer5::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DLUMRLCModer6::itemsInfo[1] = {
	&DLUMRLCLIsize::theInfo,
};
bool DLUMRLCModer6::itemsPres[1] = {
	0,
};
const DLUMRLCModer6::Info DLUMRLCModer6::theInfo = {
	DLUMRLCModer6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ExplicitDiscard::itemsInfo[1] = {
	&TimerMRW::theInfo,
};
bool ExplicitDiscard::itemsPres[1] = {
	1,
};
const ExplicitDiscard::Info ExplicitDiscard::theInfo = {
	ExplicitDiscard::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *HeaderCompressionInfo::itemsInfo[1] = {
	&AlgorithmSpecificInfo::theInfo,
};
bool HeaderCompressionInfo::itemsPres[1] = {
	1,
};
const HeaderCompressionInfo::Info HeaderCompressionInfo::theInfo = {
	HeaderCompressionInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *HeaderCompressionInfor4::itemsInfo[1] = {
	&AlgorithmSpecificInfor4::theInfo,
};
bool HeaderCompressionInfor4::itemsPres[1] = {
	1,
};
const HeaderCompressionInfor4::Info HeaderCompressionInfor4::theInfo = {
	HeaderCompressionInfor4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *LosslessSRNSRelocSupport::choicesInfo[1] = {
	&MaxPDCPSNWindowSize::theInfo,
};
const LosslessSRNSRelocSupport::Info LosslessSRNSRelocSupport::theInfo = {
	LosslessSRNSRelocSupport::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *MaxDATRetransmissions::itemsInfo[1] = {
	&MaxDAT::theInfo,
};
bool MaxDATRetransmissions::itemsPres[1] = {
	1,
};
const MaxDATRetransmissions::Info MaxDATRetransmissions::theInfo = {
	MaxDATRetransmissions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PDCPInfo::itemsInfo[1] = {
	&LosslessSRNSRelocSupport::theInfo,
};
bool PDCPInfo::itemsPres[1] = {
	0,
};
const PDCPInfo::Info PDCPInfo::theInfo = {
	PDCPInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *PDCPInfor4::itemsInfo[1] = {
	&LosslessSRNSRelocSupport::theInfo,
};
bool PDCPInfor4::itemsPres[1] = {
	0,
};
const PDCPInfor4::Info PDCPInfor4::theInfo = {
	PDCPInfor4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *PDCPInfoReconfig::itemsInfo[1] = {
	&PDCPInfo::theInfo,
};
bool PDCPInfoReconfig::itemsPres[1] = {
	1,
};
const PDCPInfoReconfig::Info PDCPInfoReconfig::theInfo = {
	PDCPInfoReconfig::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PDCPInfoReconfigr4::itemsInfo[1] = {
	&PDCPInfor4::theInfo,
};
bool PDCPInfoReconfigr4::itemsPres[1] = {
	1,
};
const PDCPInfoReconfigr4::Info PDCPInfoReconfigr4::theInfo = {
	PDCPInfoReconfigr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PollingInfo::itemsInfo[1] = {
	&TimerPollProhibit::theInfo,
};
bool PollingInfo::itemsPres[1] = {
	0,
};
const PollingInfo::Info PollingInfo::theInfo = {
	PollingInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *PredefinedRBConfiguration::itemsInfo[1] = {
	&ReEstablishmentTimer::theInfo,
};
bool PredefinedRBConfiguration::itemsPres[1] = {
	1,
};
const PredefinedRBConfiguration::Info PredefinedRBConfiguration::theInfo = {
	PredefinedRBConfiguration::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PreDefRadioConfiguration::itemsInfo[1] = {
	&PredefinedRBConfiguration::theInfo,
};
bool PreDefRadioConfiguration::itemsPres[1] = {
	1,
};
const PreDefRadioConfiguration::Info PreDefRadioConfiguration::theInfo = {
	PreDefRadioConfiguration::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ULDPCHInfoPredefv770extModeSpecificInfoFdd::itemsInfo[1] = {
	&NumberOfTPCBits::theInfo,
};
bool ULDPCHInfoPredefv770extModeSpecificInfoFdd::itemsPres[1] = {
	0,
};
const ULDPCHInfoPredefv770extModeSpecificInfoFdd::Info ULDPCHInfoPredefv770extModeSpecificInfoFdd::theInfo = {
	ULDPCHInfoPredefv770extModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ULDPCHInfoPredefv770extModeSpecificInfo::choicesInfo[1] = {
	&ULDPCHInfoPredefv770extModeSpecificInfoFdd::theInfo,
};
const ULDPCHInfoPredefv770extModeSpecificInfo::Info ULDPCHInfoPredefv770extModeSpecificInfo::theInfo = {
	ULDPCHInfoPredefv770extModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *ULDPCHInfoPredefv770ext::itemsInfo[1] = {
	&ULDPCHInfoPredefv770extModeSpecificInfo::theInfo,
};
bool ULDPCHInfoPredefv770ext::itemsPres[1] = {
	1,
};
const ULDPCHInfoPredefv770ext::Info ULDPCHInfoPredefv770ext::theInfo = {
	ULDPCHInfoPredefv770ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PreDefPhyChConfigurationv770ext::itemsInfo[1] = {
	&ULDPCHInfoPredefv770ext::theInfo,
};
bool PreDefPhyChConfigurationv770ext::itemsPres[1] = {
	1,
};
const PreDefPhyChConfigurationv770ext::Info PreDefPhyChConfigurationv770ext::theInfo = {
	PreDefPhyChConfigurationv770ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PreDefRadioConfigurationv770ext::itemsInfo[1] = {
	&PreDefPhyChConfigurationv770ext::theInfo,
};
bool PreDefRadioConfigurationv770ext::itemsPres[1] = {
	1,
};
const PreDefRadioConfigurationv770ext::Info PreDefRadioConfigurationv770ext::theInfo = {
	PreDefRadioConfigurationv770ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PreDefRadioConfigurationv920ext::itemsInfo[1] = {
	&MAChsWindowSizer9::theInfo,
};
bool PreDefRadioConfigurationv920ext::itemsPres[1] = {
	1,
};
const PreDefRadioConfigurationv920ext::Info PreDefRadioConfigurationv920ext::theInfo = {
	PreDefRadioConfigurationv920ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PredefinedConfigStatusInfo::choicesInfo[1] = {
	&PredefinedConfigStatusInfoStoredWithValueTagSameAsPrevius::theInfo,
};
const PredefinedConfigStatusInfo::Info PredefinedConfigStatusInfo::theInfo = {
	PredefinedConfigStatusInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *PredefinedConfigSetWithDifferentValueTag::itemsInfo[1] = {
	&PredefinedConfigSetWithDifferentValueTagStartPosition::theInfo,
};
bool PredefinedConfigSetWithDifferentValueTag::itemsPres[1] = {
	0,
};
const PredefinedConfigSetWithDifferentValueTag::Info PredefinedConfigSetWithDifferentValueTag::theInfo = {
	PredefinedConfigSetWithDifferentValueTag::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *PredefinedConfigStatusListComp::itemsInfo[1] = {
	&PredefinedConfigSetsWithDifferentValueTag::theInfo,
};
bool PredefinedConfigStatusListComp::itemsPres[1] = {
	0,
};
const PredefinedConfigStatusListComp::Info PredefinedConfigStatusListComp::theInfo = {
	PredefinedConfigStatusListComp::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *RABInfo::itemsInfo[1] = {
	&RABIdentity::theInfo,
};
bool RABInfo::itemsPres[1] = {
	1,
};
const RABInfo::Info RABInfo::theInfo = {
	RABInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *RABInfor6ext::itemsInfo[1] = {
	&MBMSSessionIdentity::theInfo,
};
bool RABInfor6ext::itemsPres[1] = {
	0,
};
const RABInfor6ext::Info RABInfor6ext::theInfo = {
	RABInfor6ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *RABInfov6b0ext::itemsInfo[1] = {
	&RABInfov6b0extMbmsServiceIdentity::theInfo,
};
bool RABInfov6b0ext::itemsPres[1] = {
	1,
};
const RABInfov6b0ext::Info RABInfov6b0ext::theInfo = {
	RABInfov6b0ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *RABInfor6::itemsInfo[1] = {
	&RABIdentity::theInfo,
};
bool RABInfor6::itemsPres[1] = {
	1,
};
const RABInfor6::Info RABInfor6::theInfo = {
	RABInfor6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *RABInfor7::itemsInfo[1] = {
	&RABIdentity::theInfo,
};
bool RABInfor7::itemsPres[1] = {
	1,
};
const RABInfor7::Info RABInfor7::theInfo = {
	RABInfor7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *RABInfoReplace::itemsInfo[1] = {
	&RABIdentity::theInfo,
};
bool RABInfoReplace::itemsPres[1] = {
	1,
};
const RABInfoReplace::Info RABInfoReplace::theInfo = {
	RABInfoReplace::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *RABInformationReconfig::itemsInfo[1] = {
	&RABIdentity::theInfo,
};
bool RABInformationReconfig::itemsPres[1] = {
	1,
};
const RABInformationReconfig::Info RABInformationReconfig::theInfo = {
	RABInformationReconfig::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *RABInformationReconfigr8::itemsInfo[1] = {
	&RABIdentity::theInfo,
};
bool RABInformationReconfigr8::itemsPres[1] = {
	0,
};
const RABInformationReconfigr8::Info RABInformationReconfigr8::theInfo = {
	RABInformationReconfigr8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *RABInfoPost::itemsInfo[1] = {
	&RABIdentity::theInfo,
};
bool RABInfoPost::itemsPres[1] = {
	0,
};
const RABInfoPost::Info RABInfoPost::theInfo = {
	RABInfoPost::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *RABInformationMBMSPtp::itemsInfo[1] = {
	&RBIdentity::theInfo,
};
bool RABInformationMBMSPtp::itemsPres[1] = {
	0,
};
const RABInformationMBMSPtp::Info RABInformationMBMSPtp::theInfo = {
	RABInformationMBMSPtp::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *RABInformationSetup::itemsInfo[1] = {
	&RABInfo::theInfo,
};
bool RABInformationSetup::itemsPres[1] = {
	1,
};
const RABInformationSetup::Info RABInformationSetup::theInfo = {
	RABInformationSetup::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *RABInformationSetupr4::itemsInfo[1] = {
	&RABInfo::theInfo,
};
bool RABInformationSetupr4::itemsPres[1] = {
	1,
};
const RABInformationSetupr4::Info RABInformationSetupr4::theInfo = {
	RABInformationSetupr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *RABInformationSetupr5::itemsInfo[1] = {
	&RABInfo::theInfo,
};
bool RABInformationSetupr5::itemsPres[1] = {
	1,
};
const RABInformationSetupr5::Info RABInformationSetupr5::theInfo = {
	RABInformationSetupr5::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *RABInformationSetupr6ext::itemsInfo[1] = {
	&RABInfor6ext::theInfo,
};
bool RABInformationSetupr6ext::itemsPres[1] = {
	1,
};
const RABInformationSetupr6ext::Info RABInformationSetupr6ext::theInfo = {
	RABInformationSetupr6ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *RABInformationSetupr6::itemsInfo[1] = {
	&RABInfor6::theInfo,
};
bool RABInformationSetupr6::itemsPres[1] = {
	1,
};
const RABInformationSetupr6::Info RABInformationSetupr6::theInfo = {
	RABInformationSetupr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *RABInformationSetupv6b0ext::itemsInfo[1] = {
	&RABInfov6b0ext::theInfo,
};
bool RABInformationSetupv6b0ext::itemsPres[1] = {
	0,
};
const RABInformationSetupv6b0ext::Info RABInformationSetupv6b0ext::theInfo = {
	RABInformationSetupv6b0ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *RABInformationSetupr7::itemsInfo[1] = {
	&RABInfor7::theInfo,
};
bool RABInformationSetupr7::itemsPres[1] = {
	1,
};
const RABInformationSetupr7::Info RABInformationSetupr7::theInfo = {
	RABInformationSetupr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *RABInformationSetupr8::itemsInfo[1] = {
	&RABInfor7::theInfo,
};
bool RABInformationSetupr8::itemsPres[1] = {
	1,
};
const RABInformationSetupr8::Info RABInformationSetupr8::theInfo = {
	RABInformationSetupr8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *RABInformationSetupv820ext::itemsInfo[1] = {
	&CSHSPAInformation::theInfo,
};
bool RABInformationSetupv820ext::itemsPres[1] = {
	0,
};
const RABInformationSetupv820ext::Info RABInformationSetupv820ext::theInfo = {
	RABInformationSetupv820ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *RBActivationTimeInfo::itemsInfo[1] = {
	&RBIdentity::theInfo,
};
bool RBActivationTimeInfo::itemsPres[1] = {
	1,
};
const RBActivationTimeInfo::Info RBActivationTimeInfo::theInfo = {
	RBActivationTimeInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *RBCOUNTCInformation::itemsInfo[1] = {
	&RBIdentity::theInfo,
};
bool RBCOUNTCInformation::itemsPres[1] = {
	1,
};
const RBCOUNTCInformation::Info RBCOUNTCInformation::theInfo = {
	RBCOUNTCInformation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *RBCOUNTCMSBInformation::itemsInfo[1] = {
	&RBIdentity::theInfo,
};
bool RBCOUNTCMSBInformation::itemsPres[1] = {
	1,
};
const RBCOUNTCMSBInformation::Info RBCOUNTCMSBInformation::theInfo = {
	RBCOUNTCMSBInformation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *RBInformationAffected::itemsInfo[1] = {
	&RBIdentity::theInfo,
};
bool RBInformationAffected::itemsPres[1] = {
	1,
};
const RBInformationAffected::Info RBInformationAffected::theInfo = {
	RBInformationAffected::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *RBInformationAffectedr5::itemsInfo[1] = {
	&RBIdentity::theInfo,
};
bool RBInformationAffectedr5::itemsPres[1] = {
	1,
};
const RBInformationAffectedr5::Info RBInformationAffectedr5::theInfo = {
	RBInformationAffectedr5::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *RBInformationAffectedr6::itemsInfo[1] = {
	&RBIdentity::theInfo,
};
bool RBInformationAffectedr6::itemsPres[1] = {
	1,
};
const RBInformationAffectedr6::Info RBInformationAffectedr6::theInfo = {
	RBInformationAffectedr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *RBInformationAffectedr7::itemsInfo[1] = {
	&RBIdentity::theInfo,
};
bool RBInformationAffectedr7::itemsPres[1] = {
	1,
};
const RBInformationAffectedr7::Info RBInformationAffectedr7::theInfo = {
	RBInformationAffectedr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *RBInformationAffectedr8::itemsInfo[1] = {
	&RBIdentity::theInfo,
};
bool RBInformationAffectedr8::itemsPres[1] = {
	1,
};
const RBInformationAffectedr8::Info RBInformationAffectedr8::theInfo = {
	RBInformationAffectedr8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *RBInformationChangedr6::itemsInfo[1] = {
	&RBIdentity::theInfo,
};
bool RBInformationChangedr6::itemsPres[1] = {
	1,
};
const RBInformationChangedr6::Info RBInformationChangedr6::theInfo = {
	RBInformationChangedr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *RBInformationReconfig::itemsInfo[1] = {
	&RBIdentity::theInfo,
};
bool RBInformationReconfig::itemsPres[1] = {
	0,
};
const RBInformationReconfig::Info RBInformationReconfig::theInfo = {
	RBInformationReconfig::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *RBInformationReconfigr4::itemsInfo[1] = {
	&RBIdentity::theInfo,
};
bool RBInformationReconfigr4::itemsPres[1] = {
	0,
};
const RBInformationReconfigr4::Info RBInformationReconfigr4::theInfo = {
	RBInformationReconfigr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *RBInformationReconfigr5::itemsInfo[1] = {
	&RBIdentity::theInfo,
};
bool RBInformationReconfigr5::itemsPres[1] = {
	0,
};
const RBInformationReconfigr5::Info RBInformationReconfigr5::theInfo = {
	RBInformationReconfigr5::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *RBInformationReconfigr6::itemsInfo[1] = {
	&RBIdentity::theInfo,
};
bool RBInformationReconfigr6::itemsPres[1] = {
	0,
};
const RBInformationReconfigr6::Info RBInformationReconfigr6::theInfo = {
	RBInformationReconfigr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *RBInformationReconfigr7::itemsInfo[1] = {
	&RBIdentity::theInfo,
};
bool RBInformationReconfigr7::itemsPres[1] = {
	0,
};
const RBInformationReconfigr7::Info RBInformationReconfigr7::theInfo = {
	RBInformationReconfigr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *RBInformationReconfigr8::itemsInfo[1] = {
	&RBIdentity::theInfo,
};
bool RBInformationReconfigr8::itemsPres[1] = {
	0,
};
const RBInformationReconfigr8::Info RBInformationReconfigr8::theInfo = {
	RBInformationReconfigr8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *RBInformationSetup::itemsInfo[1] = {
	&RBIdentity::theInfo,
};
bool RBInformationSetup::itemsPres[1] = {
	1,
};
const RBInformationSetup::Info RBInformationSetup::theInfo = {
	RBInformationSetup::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *RBInformationSetupr4::itemsInfo[1] = {
	&RBIdentity::theInfo,
};
bool RBInformationSetupr4::itemsPres[1] = {
	1,
};
const RBInformationSetupr4::Info RBInformationSetupr4::theInfo = {
	RBInformationSetupr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *RBInformationSetupr5::itemsInfo[1] = {
	&RBIdentity::theInfo,
};
bool RBInformationSetupr5::itemsPres[1] = {
	1,
};
const RBInformationSetupr5::Info RBInformationSetupr5::theInfo = {
	RBInformationSetupr5::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *RBInformationSetupr6::itemsInfo[1] = {
	&RBIdentity::theInfo,
};
bool RBInformationSetupr6::itemsPres[1] = {
	1,
};
const RBInformationSetupr6::Info RBInformationSetupr6::theInfo = {
	RBInformationSetupr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *RBInformationSetupr7::itemsInfo[1] = {
	&RBIdentity::theInfo,
};
bool RBInformationSetupr7::itemsPres[1] = {
	1,
};
const RBInformationSetupr7::Info RBInformationSetupr7::theInfo = {
	RBInformationSetupr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *RBInformationSetupr8::itemsInfo[1] = {
	&RBIdentity::theInfo,
};
bool RBInformationSetupr8::itemsPres[1] = {
	1,
};
const RBInformationSetupr8::Info RBInformationSetupr8::theInfo = {
	RBInformationSetupr8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ULTransportChannelType::choicesInfo[1] = {
	&TransportChannelIdentity::theInfo,
};
const ULTransportChannelType::Info ULTransportChannelType::theInfo = {
	ULTransportChannelType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *ULLogicalChannelMapping::itemsInfo[1] = {
	&ULTransportChannelType::theInfo,
};
bool ULLogicalChannelMapping::itemsPres[1] = {
	1,
};
const ULLogicalChannelMapping::Info ULLogicalChannelMapping::theInfo = {
	ULLogicalChannelMapping::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ULLogicalChannelMappings::choicesInfo[1] = {
	&ULLogicalChannelMapping::theInfo,
};
const ULLogicalChannelMappings::Info ULLogicalChannelMappings::theInfo = {
	ULLogicalChannelMappings::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *RBMappingOption::itemsInfo[1] = {
	&ULLogicalChannelMappings::theInfo,
};
bool RBMappingOption::itemsPres[1] = {
	0,
};
const RBMappingOption::Info RBMappingOption::theInfo = {
	RBMappingOption::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *RBMappingOptionr5::itemsInfo[1] = {
	&ULLogicalChannelMappings::theInfo,
};
bool RBMappingOptionr5::itemsPres[1] = {
	0,
};
const RBMappingOptionr5::Info RBMappingOptionr5::theInfo = {
	RBMappingOptionr5::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ULLogicalChannelMappingr6UlTrCHTypeDchrachusch::itemsInfo[1] = {
	&ULTransportChannelType::theInfo,
};
bool ULLogicalChannelMappingr6UlTrCHTypeDchrachusch::itemsPres[1] = {
	1,
};
const ULLogicalChannelMappingr6UlTrCHTypeDchrachusch::Info ULLogicalChannelMappingr6UlTrCHTypeDchrachusch::theInfo = {
	ULLogicalChannelMappingr6UlTrCHTypeDchrachusch::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ULLogicalChannelMappingr6UlTrCHType::choicesInfo[1] = {
	&ULLogicalChannelMappingr6UlTrCHTypeDchrachusch::theInfo,
};
const ULLogicalChannelMappingr6UlTrCHType::Info ULLogicalChannelMappingr6UlTrCHType::theInfo = {
	ULLogicalChannelMappingr6UlTrCHType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *ULLogicalChannelMappingr6::itemsInfo[1] = {
	&ULLogicalChannelMappingr6UlTrCHType::theInfo,
};
bool ULLogicalChannelMappingr6::itemsPres[1] = {
	1,
};
const ULLogicalChannelMappingr6::Info ULLogicalChannelMappingr6::theInfo = {
	ULLogicalChannelMappingr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ULLogicalChannelMappingsr6::choicesInfo[1] = {
	&ULLogicalChannelMappingr6::theInfo,
};
const ULLogicalChannelMappingsr6::Info ULLogicalChannelMappingsr6::theInfo = {
	ULLogicalChannelMappingsr6::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *RBMappingOptionr6::itemsInfo[1] = {
	&ULLogicalChannelMappingsr6::theInfo,
};
bool RBMappingOptionr6::itemsPres[1] = {
	0,
};
const RBMappingOptionr6::Info RBMappingOptionr6::theInfo = {
	RBMappingOptionr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *RBMappingOptionr7::itemsInfo[1] = {
	&ULLogicalChannelMappingsr6::theInfo,
};
bool RBMappingOptionr7::itemsPres[1] = {
	0,
};
const RBMappingOptionr7::Info RBMappingOptionr7::theInfo = {
	RBMappingOptionr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ULLogicalChannelMappingr8UlTrCHTypeDchrachusch::itemsInfo[1] = {
	&ULTransportChannelType::theInfo,
};
bool ULLogicalChannelMappingr8UlTrCHTypeDchrachusch::itemsPres[1] = {
	1,
};
const ULLogicalChannelMappingr8UlTrCHTypeDchrachusch::Info ULLogicalChannelMappingr8UlTrCHTypeDchrachusch::theInfo = {
	ULLogicalChannelMappingr8UlTrCHTypeDchrachusch::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ULLogicalChannelMappingr8UlTrCHType::choicesInfo[1] = {
	&ULLogicalChannelMappingr8UlTrCHTypeDchrachusch::theInfo,
};
const ULLogicalChannelMappingr8UlTrCHType::Info ULLogicalChannelMappingr8UlTrCHType::theInfo = {
	ULLogicalChannelMappingr8UlTrCHType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *ULLogicalChannelMappingr8::itemsInfo[1] = {
	&ULLogicalChannelMappingr8UlTrCHType::theInfo,
};
bool ULLogicalChannelMappingr8::itemsPres[1] = {
	1,
};
const ULLogicalChannelMappingr8::Info ULLogicalChannelMappingr8::theInfo = {
	ULLogicalChannelMappingr8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ULLogicalChannelMappingsr8::choicesInfo[1] = {
	&ULLogicalChannelMappingr8::theInfo,
};
const ULLogicalChannelMappingsr8::Info ULLogicalChannelMappingsr8::theInfo = {
	ULLogicalChannelMappingsr8::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *RBMappingOptionr8::itemsInfo[1] = {
	&ULLogicalChannelMappingsr8::theInfo,
};
bool RBMappingOptionr8::itemsPres[1] = {
	0,
};
const RBMappingOptionr8::Info RBMappingOptionr8::theInfo = {
	RBMappingOptionr8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *RBPDCPContextRelocation::itemsInfo[1] = {
	&RBIdentity::theInfo,
};
bool RBPDCPContextRelocation::itemsPres[1] = {
	1,
};
const RBPDCPContextRelocation::Info RBPDCPContextRelocation::theInfo = {
	RBPDCPContextRelocation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *RFC3095Infor4::itemsInfo[1] = {
	&ROHCProfileListr4::theInfo,
};
bool RFC3095Infor4::itemsPres[1] = {
	0,
};
const RFC3095Infor4::Info RFC3095Infor4::theInfo = {
	RFC3095Infor4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *TransmissionRLCDiscard::choicesInfo[1] = {
	&ExplicitDiscard::theInfo,
};
const TransmissionRLCDiscard::Info TransmissionRLCDiscard::theInfo = {
	TransmissionRLCDiscard::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *ULAMRLCMode::itemsInfo[1] = {
	&TransmissionRLCDiscard::theInfo,
};
bool ULAMRLCMode::itemsPres[1] = {
	0,
};
const ULAMRLCMode::Info ULAMRLCMode::theInfo = {
	ULAMRLCMode::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ULRLCMode::choicesInfo[1] = {
	&ULAMRLCMode::theInfo,
};
const ULRLCMode::Info ULRLCMode::theInfo = {
	ULRLCMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *RLCInfo::itemsInfo[1] = {
	&ULRLCMode::theInfo,
};
bool RLCInfo::itemsPres[1] = {
	0,
};
const RLCInfo::Info RLCInfo::theInfo = {
	RLCInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *RLCInfor6::itemsInfo[1] = {
	&ULRLCMode::theInfo,
};
bool RLCInfor6::itemsPres[1] = {
	0,
};
const RLCInfor6::Info RLCInfor6::theInfo = {
	RLCInfor6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *RLCInfor7::itemsInfo[1] = {
	&ULRLCMode::theInfo,
};
bool RLCInfor7::itemsPres[1] = {
	0,
};
const RLCInfor7::Info RLCInfor7::theInfo = {
	RLCInfor7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *RLCInfoMCCHr6::itemsInfo[1] = {
	&DLUMRLCLIsize::theInfo,
};
bool RLCInfoMCCHr6::itemsPres[1] = {
	0,
};
const RLCInfoMCCHr6::Info RLCInfoMCCHr6::theInfo = {
	RLCInfoMCCHr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *RLCInfoMSCHr6::itemsInfo[1] = {
	&DLUMRLCLIsize::theInfo,
};
bool RLCInfoMSCHr6::itemsPres[1] = {
	1,
};
const RLCInfoMSCHr6::Info RLCInfoMSCHr6::theInfo = {
	RLCInfoMSCHr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *RLCInfoMTCHr6::itemsInfo[1] = {
	&DLUMRLCLIsize::theInfo,
};
bool RLCInfoMTCHr6::itemsPres[1] = {
	0,
};
const RLCInfoMTCHr6::Info RLCInfoMTCHr6::theInfo = {
	RLCInfoMTCHr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *RLCInfoChoice::choicesInfo[1] = {
	&RLCInfo::theInfo,
};
const RLCInfoChoice::Info RLCInfoChoice::theInfo = {
	RLCInfoChoice::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *RLCInfoChoicer5::choicesInfo[1] = {
	&RLCInfor5::theInfo,
};
const RLCInfoChoicer5::Info RLCInfoChoicer5::theInfo = {
	RLCInfoChoicer5::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *RLCInfoChoicer6::choicesInfo[1] = {
	&RLCInfor6::theInfo,
};
const RLCInfoChoicer6::Info RLCInfoChoicer6::theInfo = {
	RLCInfoChoicer6::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *RLCInfoChoicer7::choicesInfo[1] = {
	&RLCInfor7::theInfo,
};
const RLCInfoChoicer7::Info RLCInfoChoicer7::theInfo = {
	RLCInfoChoicer7::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *RLCPDUSizeConstraint::itemsInfo[1] = {
	&RLCPDUSizeConstraintlengthIndicatorSize::theInfo,
};
bool RLCPDUSizeConstraint::itemsPres[1] = {
	1,
};
const RLCPDUSizeConstraint::Info RLCPDUSizeConstraint::theInfo = {
	RLCPDUSizeConstraint::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *RLCSizeInfo::itemsInfo[1] = {
	&RLCSizeInfoRlcSizeIndex::theInfo,
};
bool RLCSizeInfo::itemsPres[1] = {
	1,
};
const RLCSizeInfo::Info RLCSizeInfo::theInfo = {
	RLCSizeInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ULLogicalChannelMappingList::itemsInfo[1] = {
	&ULLogicalChannelMappingListRlcLogicalChannelMappingIndicator::theInfo,
};
bool ULLogicalChannelMappingList::itemsPres[1] = {
	1,
};
const ULLogicalChannelMappingList::Info ULLogicalChannelMappingList::theInfo = {
	ULLogicalChannelMappingList::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ULLogicalChannelMappingListr6::itemsInfo[1] = {
	&ULLogicalChannelMappingListr6RlcLogicalChannelMappingIndicator::theInfo,
};
bool ULLogicalChannelMappingListr6::itemsPres[1] = {
	1,
};
const ULLogicalChannelMappingListr6::Info ULLogicalChannelMappingListr6::theInfo = {
	ULLogicalChannelMappingListr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ULLogicalChannelMappingListr8::itemsInfo[1] = {
	&ULLogicalChannelMappingListr8RlcLogicalChannelMappingIndicator::theInfo,
};
bool ULLogicalChannelMappingListr8::itemsPres[1] = {
	1,
};
const ULLogicalChannelMappingListr8::Info ULLogicalChannelMappingListr8::theInfo = {
	ULLogicalChannelMappingListr8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ULRFC3095r4::itemsInfo[1] = {
	&CIDInclusionInfor4::theInfo,
};
bool ULRFC3095r4::itemsPres[1] = {
	0,
};
const ULRFC3095r4::Info ULRFC3095r4::theInfo = {
	ULRFC3095r4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ULUMRLCMode::itemsInfo[1] = {
	&TransmissionRLCDiscard::theInfo,
};
bool ULUMRLCMode::itemsPres[1] = {
	0,
};
const ULUMRLCMode::Info ULUMRLCMode::theInfo = {
	ULUMRLCMode::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UMRLCDuplAvoidReordInfor6::itemsInfo[1] = {
	&TimerDARr6::theInfo,
};
bool UMRLCDuplAvoidReordInfor6::itemsPres[1] = {
	1,
};
const UMRLCDuplAvoidReordInfor6::Info UMRLCDuplAvoidReordInfor6::theInfo = {
	UMRLCDuplAvoidReordInfor6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MAChsAddReconfQueue::itemsInfo[1] = {
	&MAChsAddReconfQueueMachsQueueId::theInfo,
};
bool MAChsAddReconfQueue::itemsPres[1] = {
	0,
};
const MAChsAddReconfQueue::Info MAChsAddReconfQueue::theInfo = {
	MAChsAddReconfQueue::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *AddOrReconfMACdFlow::itemsInfo[1] = {
	&MAChsAddReconfQueueList::theInfo,
};
bool AddOrReconfMACdFlow::itemsPres[1] = {
	0,
};
const AddOrReconfMACdFlow::Info AddOrReconfMACdFlow::theInfo = {
	AddOrReconfMACdFlow::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *MACehsAddReconfReordQ::itemsInfo[1] = {
	&MACehsQueueId::theInfo,
};
bool MACehsAddReconfReordQ::itemsPres[1] = {
	1,
};
const MACehsAddReconfReordQ::Info MACehsAddReconfReordQ::theInfo = {
	MACehsAddReconfReordQ::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *AddOrReconfMACehsReordQ::itemsInfo[1] = {
	&MACehsAddReconfReordQList::theInfo,
};
bool AddOrReconfMACehsReordQ::itemsPres[1] = {
	0,
};
const AddOrReconfMACehsReordQ::Info AddOrReconfMACehsReordQ::theInfo = {
	AddOrReconfMACehsReordQ::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *MACehsAddReconfReordQr9::itemsInfo[1] = {
	&MACehsQueueId::theInfo,
};
bool MACehsAddReconfReordQr9::itemsPres[1] = {
	1,
};
const MACehsAddReconfReordQr9::Info MACehsAddReconfReordQr9::theInfo = {
	MACehsAddReconfReordQr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *AddOrReconfMACehsReordQr9::itemsInfo[1] = {
	&MACehsAddReconfReordQListr9::theInfo,
};
bool AddOrReconfMACehsReordQr9::itemsPres[1] = {
	0,
};
const AddOrReconfMACehsReordQr9::Info AddOrReconfMACehsReordQr9::theInfo = {
	AddOrReconfMACehsReordQr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *BitModeRLCSizeInfo::choicesInfo[1] = {
	&BitModeRLCSizeInfoSizeType1::theInfo,
};
const BitModeRLCSizeInfo::Info BitModeRLCSizeInfo::theInfo = {
	BitModeRLCSizeInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *ChannelCodingType::choicesInfo[1] = {
	&ChannelCodingTypeNoCoding::theInfo,
};
const ChannelCodingType::Info ChannelCodingType::theInfo = {
	ChannelCodingType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *CommonEDCHMACdFlow::itemsInfo[1] = {
	&EDCHMACdFlowIdentity::theInfo,
};
bool CommonEDCHMACdFlow::itemsPres[1] = {
	0,
};
const CommonEDCHMACdFlow::Info CommonEDCHMACdFlow::theInfo = {
	CommonEDCHMACdFlow::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *CommonDynamicTFInfoRlcSize::choicesInfo[1] = {
	&CommonDynamicTFInfoRlcSizeFdd::theInfo,
};
const CommonDynamicTFInfoRlcSize::Info CommonDynamicTFInfoRlcSize::theInfo = {
	CommonDynamicTFInfoRlcSize::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *CommonDynamicTFInfo::itemsInfo[1] = {
	&CommonDynamicTFInfoRlcSize::theInfo,
};
bool CommonDynamicTFInfo::itemsPres[1] = {
	1,
};
const CommonDynamicTFInfo::Info CommonDynamicTFInfo::theInfo = {
	CommonDynamicTFInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *CommonDynamicTFInfoDynamicTTICommonTDDChoice::choicesInfo[1] = {
	&BitModeRLCSizeInfo::theInfo,
};
const CommonDynamicTFInfoDynamicTTICommonTDDChoice::Info CommonDynamicTFInfoDynamicTTICommonTDDChoice::theInfo = {
	CommonDynamicTFInfoDynamicTTICommonTDDChoice::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *CommonDynamicTFInfoDynamicTTI::itemsInfo[1] = {
	&CommonDynamicTFInfoDynamicTTICommonTDDChoice::theInfo,
};
bool CommonDynamicTFInfoDynamicTTI::itemsPres[1] = {
	1,
};
const CommonDynamicTFInfoDynamicTTI::Info CommonDynamicTFInfoDynamicTTI::theInfo = {
	CommonDynamicTFInfoDynamicTTI::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *CommonTransChTFSTti::choicesInfo[1] = {
	&CommonDynamicTFInfoList::theInfo,
};
const CommonTransChTFSTti::Info CommonTransChTFSTti::theInfo = {
	CommonTransChTFSTti::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *CommonTransChTFS::itemsInfo[1] = {
	&CommonTransChTFSTti::theInfo,
};
bool CommonTransChTFS::itemsPres[1] = {
	1,
};
const CommonTransChTFS::Info CommonTransChTFS::theInfo = {
	CommonTransChTFS::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *CommonTransChTFSLCRTti::choicesInfo[1] = {
	&CommonDynamicTFInfoList::theInfo,
};
const CommonTransChTFSLCRTti::Info CommonTransChTFSLCRTti::theInfo = {
	CommonTransChTFSLCRTti::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *CommonTransChTFSLCR::itemsInfo[1] = {
	&CommonTransChTFSLCRTti::theInfo,
};
bool CommonTransChTFSLCR::itemsPres[1] = {
	1,
};
const CommonTransChTFSLCR::Info CommonTransChTFSLCR::theInfo = {
	CommonTransChTFSLCR::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *CommonMACehsReorderingQueue::itemsInfo[1] = {
	&MACehsQueueId::theInfo,
};
bool CommonMACehsReorderingQueue::itemsPres[1] = {
	1,
};
const CommonMACehsReorderingQueue::Info CommonMACehsReorderingQueue::theInfo = {
	CommonMACehsReorderingQueue::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DedicatedDynamicTFInfoRlcSize::choicesInfo[1] = {
	&BitModeRLCSizeInfo::theInfo,
};
const DedicatedDynamicTFInfoRlcSize::Info DedicatedDynamicTFInfoRlcSize::theInfo = {
	DedicatedDynamicTFInfoRlcSize::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *DedicatedDynamicTFInfo::itemsInfo[1] = {
	&DedicatedDynamicTFInfoRlcSize::theInfo,
};
bool DedicatedDynamicTFInfo::itemsPres[1] = {
	1,
};
const DedicatedDynamicTFInfo::Info DedicatedDynamicTFInfo::theInfo = {
	DedicatedDynamicTFInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DedicatedDynamicTFInfoDynamicTTIRlcSize::choicesInfo[1] = {
	&BitModeRLCSizeInfo::theInfo,
};
const DedicatedDynamicTFInfoDynamicTTIRlcSize::Info DedicatedDynamicTFInfoDynamicTTIRlcSize::theInfo = {
	DedicatedDynamicTFInfoDynamicTTIRlcSize::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *DedicatedDynamicTFInfoDynamicTTI::itemsInfo[1] = {
	&DedicatedDynamicTFInfoDynamicTTIRlcSize::theInfo,
};
bool DedicatedDynamicTFInfoDynamicTTI::itemsPres[1] = {
	1,
};
const DedicatedDynamicTFInfoDynamicTTI::Info DedicatedDynamicTFInfoDynamicTTI::theInfo = {
	DedicatedDynamicTFInfoDynamicTTI::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DedicatedTransChTFSTti::choicesInfo[1] = {
	&DedicatedDynamicTFInfoList::theInfo,
};
const DedicatedTransChTFSTti::Info DedicatedTransChTFSTti::theInfo = {
	DedicatedTransChTFSTti::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *DedicatedTransChTFS::itemsInfo[1] = {
	&DedicatedTransChTFSTti::theInfo,
};
bool DedicatedTransChTFS::itemsPres[1] = {
	1,
};
const DedicatedTransChTFS::Info DedicatedTransChTFS::theInfo = {
	DedicatedTransChTFS::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DLAddReconfTransChInformation2::itemsInfo[1] = {
	&DLTrCHType::theInfo,
};
bool DLAddReconfTransChInformation2::itemsPres[1] = {
	0,
};
const DLAddReconfTransChInformation2::Info DLAddReconfTransChInformation2::theInfo = {
	DLAddReconfTransChInformation2::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLAddReconfTransChInformation::itemsInfo[1] = {
	&DLTrCHType::theInfo,
};
bool DLAddReconfTransChInformation::itemsPres[1] = {
	0,
};
const DLAddReconfTransChInformation::Info DLAddReconfTransChInformation::theInfo = {
	DLAddReconfTransChInformation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLAddReconfTransChInformationr4::itemsInfo[1] = {
	&DLTrCHType::theInfo,
};
bool DLAddReconfTransChInformationr4::itemsPres[1] = {
	0,
};
const DLAddReconfTransChInformationr4::Info DLAddReconfTransChInformationr4::theInfo = {
	DLAddReconfTransChInformationr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLTrCHTypeId1r5::choicesInfo[1] = {
	&TransportChannelIdentity::theInfo,
};
const DLTrCHTypeId1r5::Info DLTrCHTypeId1r5::theInfo = {
	DLTrCHTypeId1r5::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *DLAddReconfTransChInformationr5::itemsInfo[1] = {
	&DLTrCHTypeId1r5::theInfo,
};
bool DLAddReconfTransChInformationr5::itemsPres[1] = {
	0,
};
const DLAddReconfTransChInformationr5::Info DLAddReconfTransChInformationr5::theInfo = {
	DLAddReconfTransChInformationr5::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLAddReconfTransChInformationr7::itemsInfo[1] = {
	&DLTrCHTypeId1r5::theInfo,
};
bool DLAddReconfTransChInformationr7::itemsPres[1] = {
	0,
};
const DLAddReconfTransChInformationr7::Info DLAddReconfTransChInformationr7::theInfo = {
	DLAddReconfTransChInformationr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLAddReconfTransChInformationr9::itemsInfo[1] = {
	&DLTrCHTypeId1r5::theInfo,
};
bool DLAddReconfTransChInformationr9::itemsPres[1] = {
	0,
};
const DLAddReconfTransChInformationr9::Info DLAddReconfTransChInformationr9::theInfo = {
	DLAddReconfTransChInformationr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *TFCSReconfAddCtfcSizeCtfc2Bit::itemsInfo[0] = {
};
bool TFCSReconfAddCtfcSizeCtfc2Bit::itemsPres[0] = {
};
const TFCSReconfAddCtfcSizeCtfc2Bit::Info TFCSReconfAddCtfcSizeCtfc2Bit::theInfo = {
	TFCSReconfAddCtfcSizeCtfc2Bit::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *TFCSReconfAddCtfcSize::choicesInfo[1] = {
	&TFCSReconfAddCtfcSizeCtfc2Bit::theInfo,
};
const TFCSReconfAddCtfcSize::Info TFCSReconfAddCtfcSize::theInfo = {
	TFCSReconfAddCtfcSize::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *TFCSReconfAdd::itemsInfo[1] = {
	&TFCSReconfAddCtfcSize::theInfo,
};
bool TFCSReconfAdd::itemsPres[1] = {
	1,
};
const TFCSReconfAdd::Info TFCSReconfAdd::theInfo = {
	TFCSReconfAdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ExplicitTFCSConfiguration::choicesInfo[1] = {
	&TFCSReconfAdd::theInfo,
};
const ExplicitTFCSConfiguration::Info ExplicitTFCSConfiguration::theInfo = {
	ExplicitTFCSConfiguration::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *TFCS::choicesInfo[1] = {
	&ExplicitTFCSConfiguration::theInfo,
};
const TFCS::Info TFCS::theInfo = {
	TFCS::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *DLCommonTransChInfor4::itemsInfo[1] = {
	&TFCS::theInfo,
};
bool DLCommonTransChInfor4::itemsPres[1] = {
	0,
};
const DLCommonTransChInfor4::Info DLCommonTransChInfor4::theInfo = {
	DLCommonTransChInfor4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLTransportChannelIdentity::itemsInfo[1] = {
	&DLTrCHType::theInfo,
};
bool DLTransportChannelIdentity::itemsPres[1] = {
	1,
};
const DLTransportChannelIdentity::Info DLTransportChannelIdentity::theInfo = {
	DLTransportChannelIdentity::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DLTrCHTypeId2r5::choicesInfo[1] = {
	&TransportChannelIdentity::theInfo,
};
const DLTrCHTypeId2r5::Info DLTrCHTypeId2r5::theInfo = {
	DLTrCHTypeId2r5::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *DLTransportChannelIdentityr5::itemsInfo[1] = {
	&DLTrCHTypeId2r5::theInfo,
};
bool DLTransportChannelIdentityr5::itemsPres[1] = {
	1,
};
const DLTransportChannelIdentityr5::Info DLTransportChannelIdentityr5::theInfo = {
	DLTransportChannelIdentityr5::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DLTrCHTypeId2r7::choicesInfo[1] = {
	&TransportChannelIdentity::theInfo,
};
const DLTrCHTypeId2r7::Info DLTrCHTypeId2r7::theInfo = {
	DLTrCHTypeId2r7::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *DLTransportChannelIdentityr7::itemsInfo[1] = {
	&DLTrCHTypeId2r7::theInfo,
};
bool DLTransportChannelIdentityr7::itemsPres[1] = {
	1,
};
const DLTransportChannelIdentityr7::Info DLTransportChannelIdentityr7::theInfo = {
	DLTransportChannelIdentityr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DRACStaticInformation::itemsInfo[1] = {
	&TransmissionTimeValidity::theInfo,
};
bool DRACStaticInformation::itemsPres[1] = {
	1,
};
const DRACStaticInformation::Info DRACStaticInformation::theInfo = {
	DRACStaticInformation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *EDCHAddReconfMACdFlow::itemsInfo[1] = {
	&EDCHMACdFlowIdentity::theInfo,
};
bool EDCHAddReconfMACdFlow::itemsPres[1] = {
	0,
};
const EDCHAddReconfMACdFlow::Info EDCHAddReconfMACdFlow::theInfo = {
	EDCHAddReconfMACdFlow::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *EDCHAddReconfMACdFlowr7::itemsInfo[1] = {
	&EDCHMACdFlowIdentity::theInfo,
};
bool EDCHAddReconfMACdFlowr7::itemsPres[1] = {
	0,
};
const EDCHAddReconfMACdFlowr7::Info EDCHAddReconfMACdFlowr7::theInfo = {
	EDCHAddReconfMACdFlowr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SignalledGainFactorsModeSpecificInfoFdd::itemsInfo[1] = {
	&GainFactor::theInfo,
};
bool SignalledGainFactorsModeSpecificInfoFdd::itemsPres[1] = {
	1,
};
const SignalledGainFactorsModeSpecificInfoFdd::Info SignalledGainFactorsModeSpecificInfoFdd::theInfo = {
	SignalledGainFactorsModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *SignalledGainFactorsModeSpecificInfo::choicesInfo[1] = {
	&SignalledGainFactorsModeSpecificInfoFdd::theInfo,
};
const SignalledGainFactorsModeSpecificInfo::Info SignalledGainFactorsModeSpecificInfo::theInfo = {
	SignalledGainFactorsModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *SignalledGainFactors::itemsInfo[1] = {
	&SignalledGainFactorsModeSpecificInfo::theInfo,
};
bool SignalledGainFactors::itemsPres[1] = {
	0,
};
const SignalledGainFactors::Info SignalledGainFactors::theInfo = {
	SignalledGainFactors::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *GainFactorInformation::choicesInfo[1] = {
	&SignalledGainFactors::theInfo,
};
const GainFactorInformation::Info GainFactorInformation::theInfo = {
	GainFactorInformation::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *HARQInfo::itemsInfo[1] = {
	&HARQInfoNumberOfProcesses::theInfo,
};
bool HARQInfo::itemsPres[1] = {
	1,
};
const HARQInfo::Info HARQInfo::theInfo = {
	HARQInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *HSDSCHInfo::itemsInfo[1] = {
	&HARQInfo::theInfo,
};
bool HSDSCHInfo::itemsPres[1] = {
	0,
};
const HSDSCHInfo::Info HSDSCHInfo::theInfo = {
	HSDSCHInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *HARQInfor7::itemsInfo[1] = {
	&HARQInfor7numberOfProcesses::theInfo,
};
bool HARQInfor7::itemsPres[1] = {
	1,
};
const HARQInfor7::Info HARQInfor7::theInfo = {
	HARQInfor7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *HSDSCHInfor7::itemsInfo[1] = {
	&HARQInfor7::theInfo,
};
bool HSDSCHInfor7::itemsPres[1] = {
	0,
};
const HSDSCHInfor7::Info HSDSCHInfor7::theInfo = {
	HSDSCHInfor7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *HSDSCHInfor9::itemsInfo[1] = {
	&HARQInfor7::theInfo,
};
bool HSDSCHInfor9::itemsPres[1] = {
	0,
};
const HSDSCHInfor9::Info HSDSCHInfor9::theInfo = {
	HSDSCHInfor9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *TFCSIdentity::itemsInfo[1] = {
	&TFCSIdentityPlain::theInfo,
};
bool TFCSIdentity::itemsPres[1] = {
	0,
};
const TFCSIdentity::Info TFCSIdentity::theInfo = {
	TFCSIdentity::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *IndividualDLCCTrCHInfo::itemsInfo[1] = {
	&TFCSIdentity::theInfo,
};
bool IndividualDLCCTrCHInfo::itemsPres[1] = {
	1,
};
const IndividualDLCCTrCHInfo::Info IndividualDLCCTrCHInfo::theInfo = {
	IndividualDLCCTrCHInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *IndividualULCCTrCHInfo::itemsInfo[1] = {
	&TFCSIdentity::theInfo,
};
bool IndividualULCCTrCHInfo::itemsPres[1] = {
	1,
};
const IndividualULCCTrCHInfo::Info IndividualULCCTrCHInfo::theInfo = {
	IndividualULCCTrCHInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *LogicalChannelByRB::itemsInfo[1] = {
	&RBIdentity::theInfo,
};
bool LogicalChannelByRB::itemsPres[1] = {
	0,
};
const LogicalChannelByRB::Info LogicalChannelByRB::theInfo = {
	LogicalChannelByRB::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *LogicalChannelList::choicesInfo[1] = {
	&LogicalChannelListAllSizes::theInfo,
};
const LogicalChannelList::Info LogicalChannelList::theInfo = {
	LogicalChannelList::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *MACdFlowIdentityDCHandHSDSCH::itemsInfo[1] = {
	&TransportChannelIdentity::theInfo,
};
bool MACdFlowIdentityDCHandHSDSCH::itemsPres[1] = {
	1,
};
const MACdFlowIdentityDCHandHSDSCH::Info MACdFlowIdentityDCHandHSDSCH::theInfo = {
	MACdFlowIdentityDCHandHSDSCH::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MACdPDUsizeInfo::itemsInfo[1] = {
	&MACdPDUsizeInfoMacdPDUSize::theInfo,
};
bool MACdPDUsizeInfo::itemsPres[1] = {
	1,
};
const MACdPDUsizeInfo::Info MACdPDUsizeInfo::theInfo = {
	MACdPDUsizeInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MAChsDelQueue::itemsInfo[1] = {
	&MAChsDelQueueMachsQueueId::theInfo,
};
bool MAChsDelQueue::itemsPres[1] = {
	1,
};
const MAChsDelQueue::Info MAChsDelQueue::theInfo = {
	MAChsDelQueue::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MACehsDelReordQ::itemsInfo[1] = {
	&MACehsQueueId::theInfo,
};
bool MACehsDelReordQ::itemsPres[1] = {
	1,
};
const MACehsDelReordQ::Info MACehsDelReordQ::theInfo = {
	MACehsDelReordQ::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MACehsQueueIdDCHandHSDSCH::itemsInfo[1] = {
	&TransportChannelIdentity::theInfo,
};
bool MACehsQueueIdDCHandHSDSCH::itemsPres[1] = {
	1,
};
const MACehsQueueIdDCHandHSDSCH::Info MACehsQueueIdDCHandHSDSCH::theInfo = {
	MACehsQueueIdDCHandHSDSCH::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *NumberOfTbSizeAndTTIList::itemsInfo[0] = {
};
bool NumberOfTbSizeAndTTIList::itemsPres[0] = {
};
const NumberOfTbSizeAndTTIList::Info NumberOfTbSizeAndTTIList::theInfo = {
	NumberOfTbSizeAndTTIList::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *NumberOfTransportBlocks::choicesInfo[1] = {
	&NumberOfTransportBlocksZero::theInfo,
};
const NumberOfTransportBlocks::Info NumberOfTransportBlocks::theInfo = {
	NumberOfTransportBlocks::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *OctetModeRLCSizeInfoType2::choicesInfo[1] = {
	&OctetModeRLCSizeInfoType2SizeType1::theInfo,
};
const OctetModeRLCSizeInfoType2::Info OctetModeRLCSizeInfoType2::theInfo = {
	OctetModeRLCSizeInfoType2::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *PowerOffsetInfoShort::itemsInfo[1] = {
	&TFCValue::theInfo,
};
bool PowerOffsetInfoShort::itemsPres[1] = {
	1,
};
const PowerOffsetInfoShort::Info PowerOffsetInfoShort::theInfo = {
	PowerOffsetInfoShort::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PowerOffsetInformation::itemsInfo[1] = {
	&GainFactorInformation::theInfo,
};
bool PowerOffsetInformation::itemsPres[1] = {
	0,
};
const PowerOffsetInformation::Info PowerOffsetInformation::theInfo = {
	PowerOffsetInformation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *TFCSubset::choicesInfo[1] = {
	&TFCValue::theInfo,
};
const TFCSubset::Info TFCSubset::theInfo = {
	TFCSubset::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *ULCommonTransChInfo::itemsInfo[1] = {
	&TFCSubset::theInfo,
};
bool ULCommonTransChInfo::itemsPres[1] = {
	0,
};
const ULCommonTransChInfo::Info ULCommonTransChInfo::theInfo = {
	ULCommonTransChInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *PreDefTransChConfiguration::itemsInfo[1] = {
	&ULCommonTransChInfo::theInfo,
};
bool PreDefTransChConfiguration::itemsPres[1] = {
	1,
};
const PreDefTransChConfiguration::Info PreDefTransChConfiguration::theInfo = {
	PreDefTransChConfiguration::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *QualityTarget::itemsInfo[1] = {
	&BLERQualityValue::theInfo,
};
bool QualityTarget::itemsPres[1] = {
	1,
};
const QualityTarget::Info QualityTarget::theInfo = {
	QualityTarget::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *RestrictedTrChInfo::itemsInfo[1] = {
	&ULTrCHType::theInfo,
};
bool RestrictedTrChInfo::itemsPres[1] = {
	0,
};
const RestrictedTrChInfo::Info RestrictedTrChInfo::theInfo = {
	RestrictedTrChInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SemistaticTFInformation::itemsInfo[1] = {
	&ChannelCodingType::theInfo,
};
bool SemistaticTFInformation::itemsPres[1] = {
	1,
};
const SemistaticTFInformation::Info SemistaticTFInformation::theInfo = {
	SemistaticTFInformation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *SplitTFCISignalling::itemsInfo[1] = {
	&SplitType::theInfo,
};
bool SplitTFCISignalling::itemsPres[1] = {
	0,
};
const SplitTFCISignalling::Info SplitTFCISignalling::theInfo = {
	SplitTFCISignalling::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *TFCSubsetList::itemsInfo[0] = {
};
bool TFCSubsetList::itemsPres[0] = {
};
const TFCSubsetList::Info TFCSubsetList::theInfo = {
	TFCSubsetList::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *TFCIRange::itemsInfo[1] = {
	&TFCIRangeMaxTFCIField2Value::theInfo,
};
bool TFCIRange::itemsPres[1] = {
	1,
};
const TFCIRange::Info TFCIRange::theInfo = {
	TFCIRange::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *TFCIField2Information::choicesInfo[1] = {
	&TFCIRangeList::theInfo,
};
const TFCIField2Information::Info TFCIField2Information::theInfo = {
	TFCIField2Information::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *TFCSInfoForDSCH::choicesInfo[1] = {
	&TFCSInfoForDSCHCtfc2bit::theInfo,
};
const TFCSInfoForDSCH::Info TFCSInfoForDSCH::theInfo = {
	TFCSInfoForDSCH::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *TFCSRemoval::itemsInfo[1] = {
	&TFCSRemovalTfci::theInfo,
};
bool TFCSRemoval::itemsPres[1] = {
	1,
};
const TFCSRemoval::Info TFCSRemoval::theInfo = {
	TFCSRemoval::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *TMSignallingInfo::itemsInfo[1] = {
	&MessType::theInfo,
};
bool TMSignallingInfo::itemsPres[1] = {
	1,
};
const TMSignallingInfo::Info TMSignallingInfo::theInfo = {
	TMSignallingInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *TransportChannelIdentityDCHandDSCH::itemsInfo[1] = {
	&TransportChannelIdentity::theInfo,
};
bool TransportChannelIdentityDCHandDSCH::itemsPres[1] = {
	1,
};
const TransportChannelIdentityDCHandDSCH::Info TransportChannelIdentityDCHandDSCH::theInfo = {
	TransportChannelIdentityDCHandDSCH::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *TransportFormatSet::choicesInfo[1] = {
	&DedicatedTransChTFS::theInfo,
};
const TransportFormatSet::Info TransportFormatSet::theInfo = {
	TransportFormatSet::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *TransportFormatSetLCR::choicesInfo[1] = {
	&DedicatedTransChTFS::theInfo,
};
const TransportFormatSetLCR::Info TransportFormatSetLCR::theInfo = {
	TransportFormatSetLCR::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *ULAddReconfTransChInformation::itemsInfo[1] = {
	&ULTrCHType::theInfo,
};
bool ULAddReconfTransChInformation::itemsPres[1] = {
	1,
};
const ULAddReconfTransChInformation::Info ULAddReconfTransChInformation::theInfo = {
	ULAddReconfTransChInformation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ULAddReconfTransChInformationr6Dchusch::itemsInfo[1] = {
	&ULTrCHType::theInfo,
};
bool ULAddReconfTransChInformationr6Dchusch::itemsPres[1] = {
	0,
};
const ULAddReconfTransChInformationr6Dchusch::Info ULAddReconfTransChInformationr6Dchusch::theInfo = {
	ULAddReconfTransChInformationr6Dchusch::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ULAddReconfTransChInformationr6::choicesInfo[1] = {
	&ULAddReconfTransChInformationr6Dchusch::theInfo,
};
const ULAddReconfTransChInformationr6::Info ULAddReconfTransChInformationr6::theInfo = {
	ULAddReconfTransChInformationr6::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *ULAddReconfTransChInformationr7Dchusch::itemsInfo[1] = {
	&ULTrCHType::theInfo,
};
bool ULAddReconfTransChInformationr7Dchusch::itemsPres[1] = {
	0,
};
const ULAddReconfTransChInformationr7Dchusch::Info ULAddReconfTransChInformationr7Dchusch::theInfo = {
	ULAddReconfTransChInformationr7Dchusch::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ULAddReconfTransChInformationr7::choicesInfo[1] = {
	&ULAddReconfTransChInformationr7Dchusch::theInfo,
};
const ULAddReconfTransChInformationr7::Info ULAddReconfTransChInformationr7::theInfo = {
	ULAddReconfTransChInformationr7::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *ULAddReconfTransChInformationr8Dchusch::itemsInfo[1] = {
	&ULTrCHType::theInfo,
};
bool ULAddReconfTransChInformationr8Dchusch::itemsPres[1] = {
	0,
};
const ULAddReconfTransChInformationr8Dchusch::Info ULAddReconfTransChInformationr8Dchusch::theInfo = {
	ULAddReconfTransChInformationr8Dchusch::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ULAddReconfTransChInformationr8::choicesInfo[1] = {
	&ULAddReconfTransChInformationr8Dchusch::theInfo,
};
const ULAddReconfTransChInformationr8::Info ULAddReconfTransChInformationr8::theInfo = {
	ULAddReconfTransChInformationr8::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *ULCommonTransChInfor4::itemsInfo[1] = {
	&TFCSubset::theInfo,
};
bool ULCommonTransChInfor4::itemsPres[1] = {
	0,
};
const ULCommonTransChInfor4::Info ULCommonTransChInfor4::theInfo = {
	ULCommonTransChInfor4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ULTransportChannelIdentity::itemsInfo[1] = {
	&ULTrCHType::theInfo,
};
bool ULTransportChannelIdentity::itemsPres[1] = {
	1,
};
const ULTransportChannelIdentity::Info ULTransportChannelIdentity::theInfo = {
	ULTransportChannelIdentity::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ULTransportChannelIdentityr6Dchusch::itemsInfo[1] = {
	&ULTrCHType::theInfo,
};
bool ULTransportChannelIdentityr6Dchusch::itemsPres[1] = {
	1,
};
const ULTransportChannelIdentityr6Dchusch::Info ULTransportChannelIdentityr6Dchusch::theInfo = {
	ULTransportChannelIdentityr6Dchusch::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ULTransportChannelIdentityr6::choicesInfo[1] = {
	&ULTransportChannelIdentityr6Dchusch::theInfo,
};
const ULTransportChannelIdentityr6::Info ULTransportChannelIdentityr6::theInfo = {
	ULTransportChannelIdentityr6::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *USCHTransportChannelsInfo::itemsInfo[0] = {
};
bool USCHTransportChannelsInfo::itemsPres[0] = {
};
const USCHTransportChannelsInfo::Info USCHTransportChannelsInfo::theInfo = {
	USCHTransportChannelsInfo::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *AccessServiceClassFDD::itemsInfo[1] = {
	&AccessServiceClassFDDAvailableSignatureStartIndex::theInfo,
};
bool AccessServiceClassFDD::itemsPres[1] = {
	1,
};
const AccessServiceClassFDD::Info AccessServiceClassFDD::theInfo = {
	AccessServiceClassFDD::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *AccessServiceClassTDD::itemsInfo[1] = {
	&AccessServiceClassTDDChannelisationCodeIndices::theInfo,
};
bool AccessServiceClassTDD::itemsPres[1] = {
	1,
};
const AccessServiceClassTDD::Info AccessServiceClassTDD::theInfo = {
	AccessServiceClassTDD::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *AccessServiceClassTDDr7::itemsInfo[1] = {
	&AccessServiceClassTDDr7ChannelisationCodeIndices::theInfo,
};
bool AccessServiceClassTDDr7::itemsPres[1] = {
	1,
};
const AccessServiceClassTDDr7::Info AccessServiceClassTDDr7::theInfo = {
	AccessServiceClassTDDr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *AccessServiceClassTDDLCRr4::itemsInfo[1] = {
	&AccessServiceClassTDDLCRr4AvailableSYNCUlCodesIndics::theInfo,
};
bool AccessServiceClassTDDLCRr4::itemsPres[1] = {
	1,
};
const AccessServiceClassTDDLCRr4::Info AccessServiceClassTDDLCRr4::theInfo = {
	AccessServiceClassTDDLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *AdditionalPRACHTFandTFCSCCCHIEs::itemsInfo[1] = {
	&PowerOffsetInformation::theInfo,
};
bool AdditionalPRACHTFandTFCSCCCHIEs::itemsPres[1] = {
	1,
};
const AdditionalPRACHTFandTFCSCCCHIEs::Info AdditionalPRACHTFandTFCSCCCHIEs::theInfo = {
	AdditionalPRACHTFandTFCSCCCHIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *AdditionalPRACHTFandTFCSCCCH::itemsInfo[1] = {
	&AdditionalPRACHTFandTFCSCCCHIEs::theInfo,
};
bool AdditionalPRACHTFandTFCSCCCH::itemsPres[1] = {
	0,
};
const AdditionalPRACHTFandTFCSCCCH::Info AdditionalPRACHTFandTFCSCCCH::theInfo = {
	AdditionalPRACHTFandTFCSCCCH::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *AICHInfo::itemsInfo[1] = {
	&ChannelisationCode256::theInfo,
};
bool AICHInfo::itemsPres[1] = {
	1,
};
const AICHInfo::Info AICHInfo::theInfo = {
	AICHInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *AllocationPeriodInfo::itemsInfo[1] = {
	&AllocationPeriodInfoAllocationActivationTime::theInfo,
};
bool AllocationPeriodInfo::itemsPres[1] = {
	1,
};
const AllocationPeriodInfo::Info AllocationPeriodInfo::theInfo = {
	AllocationPeriodInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *APSignatureVCAM::itemsInfo[1] = {
	&APSignature::theInfo,
};
bool APSignatureVCAM::itemsPres[1] = {
	0,
};
const APSignatureVCAM::Info APSignatureVCAM::theInfo = {
	APSignatureVCAM::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ASCSettingFDD::itemsInfo[1] = {
	&AccessServiceClassFDD::theInfo,
};
bool ASCSettingFDD::itemsPres[1] = {
	0,
};
const ASCSettingFDD::Info ASCSettingFDD::theInfo = {
	ASCSettingFDD::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ASCSettingTDD::itemsInfo[1] = {
	&AccessServiceClassTDD::theInfo,
};
bool ASCSettingTDD::itemsPres[1] = {
	0,
};
const ASCSettingTDD::Info ASCSettingTDD::theInfo = {
	ASCSettingTDD::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ASCSettingTDDr7::itemsInfo[1] = {
	&AccessServiceClassTDDr7::theInfo,
};
bool ASCSettingTDDr7::itemsPres[1] = {
	0,
};
const ASCSettingTDDr7::Info ASCSettingTDDr7::theInfo = {
	ASCSettingTDDr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ASCSettingTDDLCRr4::itemsInfo[1] = {
	&AccessServiceClassTDDLCRr4::theInfo,
};
bool ASCSettingTDDLCRr4::itemsPres[1] = {
	0,
};
const ASCSettingTDDLCRr4::Info ASCSettingTDDLCRr4::theInfo = {
	ASCSettingTDDLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *AvailableMinimumSFVCAM::itemsInfo[1] = {
	&MinimumSpreadingFactor::theInfo,
};
bool AvailableMinimumSFVCAM::itemsPres[1] = {
	1,
};
const AvailableMinimumSFVCAM::Info AvailableMinimumSFVCAM::theInfo = {
	AvailableMinimumSFVCAM::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *CellAndChannelIdentity::itemsInfo[1] = {
	&BurstType::theInfo,
};
bool CellAndChannelIdentity::itemsPres[1] = {
	1,
};
const CellAndChannelIdentity::Info CellAndChannelIdentity::theInfo = {
	CellAndChannelIdentity::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ChannelAssignmentActive::choicesInfo[1] = {
	&ChannelAssignmentActiveNotActive::theInfo,
};
const ChannelAssignmentActive::Info ChannelAssignmentActive::theInfo = {
	ChannelAssignmentActive::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *ChannelReqParamsForUCSM::itemsInfo[1] = {
	&AvailableAPSignatureList::theInfo,
};
bool ChannelReqParamsForUCSM::itemsPres[1] = {
	0,
};
const ChannelReqParamsForUCSM::Info ChannelReqParamsForUCSM::theInfo = {
	ChannelReqParamsForUCSM::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *PDSCHCodeMap::itemsInfo[1] = {
	&SFPDSCH::theInfo,
};
bool PDSCHCodeMap::itemsPres[1] = {
	1,
};
const PDSCHCodeMap::Info PDSCHCodeMap::theInfo = {
	PDSCHCodeMap::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *CodeRange::itemsInfo[1] = {
	&PDSCHCodeMapList::theInfo,
};
bool CodeRange::itemsPres[1] = {
	1,
};
const CodeRange::Info CodeRange::theInfo = {
	CodeRange::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *CodeResourceInformationTDD128::itemsInfo[1] = {
	&HSChannelisationCodeLCR::theInfo,
};
bool CodeResourceInformationTDD128::itemsPres[1] = {
	1,
};
const CodeResourceInformationTDD128::Info CodeResourceInformationTDD128::theInfo = {
	CodeResourceInformationTDD128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *CommonEDCHResourceInfoList::itemsInfo[1] = {
	&CommonEDCHResourceInfoListSoffset::theInfo,
};
bool CommonEDCHResourceInfoList::itemsPres[1] = {
	1,
};
const CommonEDCHResourceInfoList::Info CommonEDCHResourceInfoList::theInfo = {
	CommonEDCHResourceInfoList::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *CommonERNTIInfo::itemsInfo[0] = {
};
bool CommonERNTIInfo::itemsPres[0] = {
};
const CommonERNTIInfo::Info CommonERNTIInfo::theInfo = {
	CommonERNTIInfo::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *CommonTimeslotInfo::itemsInfo[1] = {
	&SecondInterleavingMode::theInfo,
};
bool CommonTimeslotInfo::itemsPres[1] = {
	0,
};
const CommonTimeslotInfo::Info CommonTimeslotInfo::theInfo = {
	CommonTimeslotInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *CommonTimeslotInfoMBMS::itemsInfo[1] = {
	&SecondInterleavingMode::theInfo,
};
bool CommonTimeslotInfoMBMS::itemsPres[1] = {
	1,
};
const CommonTimeslotInfoMBMS::Info CommonTimeslotInfoMBMS::theInfo = {
	CommonTimeslotInfoMBMS::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *CommonTimeslotInfoSCCPCH::itemsInfo[1] = {
	&SecondInterleavingMode::theInfo,
};
bool CommonTimeslotInfoSCCPCH::itemsPres[1] = {
	0,
};
const CommonTimeslotInfoSCCPCH::Info CommonTimeslotInfoSCCPCH::theInfo = {
	CommonTimeslotInfoSCCPCH::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ControlChannelDRXInfoTDD128r8ControlChannelDrxOperation::choicesInfo[1] = {
	&ControlChannelDRXInfoTDD128r8ControlChannelDrxOperationContinue::theInfo,
};
const ControlChannelDRXInfoTDD128r8ControlChannelDrxOperation::Info ControlChannelDRXInfoTDD128r8ControlChannelDrxOperation::theInfo = {
	ControlChannelDRXInfoTDD128r8ControlChannelDrxOperation::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *ControlChannelDRXInfoTDD128r8::itemsInfo[1] = {
	&ControlChannelDRXInfoTDD128r8ControlChannelDrxOperation::theInfo,
};
bool ControlChannelDRXInfoTDD128r8::itemsPres[1] = {
	1,
};
const ControlChannelDRXInfoTDD128r8::Info ControlChannelDRXInfoTDD128r8::theInfo = {
	ControlChannelDRXInfoTDD128r8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *CPCHPersistenceLevels::itemsInfo[1] = {
	&CPCHSetID::theInfo,
};
bool CPCHPersistenceLevels::itemsPres[1] = {
	1,
};
const CPCHPersistenceLevels::Info CPCHPersistenceLevels::theInfo = {
	CPCHPersistenceLevels::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *CPCHSetInfo::itemsInfo[1] = {
	&CPCHSetID::theInfo,
};
bool CPCHSetInfo::itemsPres[1] = {
	1,
};
const CPCHSetInfo::Info CPCHSetInfo::theInfo = {
	CPCHSetInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DLCCTrCh::itemsInfo[1] = {
	&TFCSIdentityPlain::theInfo,
};
bool DLCCTrCh::itemsPres[1] = {
	0,
};
const DLCCTrCh::Info DLCCTrCh::theInfo = {
	DLCCTrCh::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLCCTrChr4::itemsInfo[1] = {
	&TFCSIdentityPlain::theInfo,
};
bool DLCCTrChr4::itemsPres[1] = {
	0,
};
const DLCCTrChr4::Info DLCCTrChr4::theInfo = {
	DLCCTrChr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLCCTrChr7::itemsInfo[1] = {
	&TFCSIdentityPlain::theInfo,
};
bool DLCCTrChr7::itemsPres[1] = {
	0,
};
const DLCCTrChr7::Info DLCCTrChr7::theInfo = {
	DLCCTrChr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLChannelisationCode::itemsInfo[1] = {
	&SecondaryScramblingCode::theInfo,
};
bool DLChannelisationCode::itemsPres[1] = {
	0,
};
const DLChannelisationCode::Info DLChannelisationCode::theInfo = {
	DLChannelisationCode::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLDPCHInfoCommonr4CfnHandling::choicesInfo[1] = {
	&DLDPCHInfoCommonr4CfnHandlingMaintain::theInfo,
};
const DLDPCHInfoCommonr4CfnHandling::Info DLDPCHInfoCommonr4CfnHandling::theInfo = {
	DLDPCHInfoCommonr4CfnHandling::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *DLDPCHInfoCommonr4::itemsInfo[1] = {
	&DLDPCHInfoCommonr4CfnHandling::theInfo,
};
bool DLDPCHInfoCommonr4::itemsPres[1] = {
	0,
};
const DLDPCHInfoCommonr4::Info DLDPCHInfoCommonr4::theInfo = {
	DLDPCHInfoCommonr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLCommonInformationr5::itemsInfo[1] = {
	&DLDPCHInfoCommonr4::theInfo,
};
bool DLCommonInformationr5::itemsPres[1] = {
	0,
};
const DLCommonInformationr5::Info DLCommonInformationr5::theInfo = {
	DLCommonInformationr5::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLDPCHInfoCommonr6CfnHandlingMaintain::itemsInfo[1] = {
	&TimingMaintainedSynchInd::theInfo,
};
bool DLDPCHInfoCommonr6CfnHandlingMaintain::itemsPres[1] = {
	0,
};
const DLDPCHInfoCommonr6CfnHandlingMaintain::Info DLDPCHInfoCommonr6CfnHandlingMaintain::theInfo = {
	DLDPCHInfoCommonr6CfnHandlingMaintain::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLDPCHInfoCommonr6CfnHandling::choicesInfo[1] = {
	&DLDPCHInfoCommonr6CfnHandlingMaintain::theInfo,
};
const DLDPCHInfoCommonr6CfnHandling::Info DLDPCHInfoCommonr6CfnHandling::theInfo = {
	DLDPCHInfoCommonr6CfnHandling::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *DLDPCHInfoCommonr6::itemsInfo[1] = {
	&DLDPCHInfoCommonr6CfnHandling::theInfo,
};
bool DLDPCHInfoCommonr6::itemsPres[1] = {
	0,
};
const DLDPCHInfoCommonr6::Info DLDPCHInfoCommonr6::theInfo = {
	DLDPCHInfoCommonr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLCommonInformationr6DldpchInfoCommon::choicesInfo[1] = {
	&DLDPCHInfoCommonr6::theInfo,
};
const DLCommonInformationr6DldpchInfoCommon::Info DLCommonInformationr6DldpchInfoCommon::theInfo = {
	DLCommonInformationr6DldpchInfoCommon::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *DLCommonInformationr6::itemsInfo[1] = {
	&DLCommonInformationr6DldpchInfoCommon::theInfo,
};
bool DLCommonInformationr6::itemsPres[1] = {
	0,
};
const DLCommonInformationr6::Info DLCommonInformationr6::theInfo = {
	DLCommonInformationr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLCommonInformationr7DldpchInfoCommon::choicesInfo[1] = {
	&DLDPCHInfoCommonr6::theInfo,
};
const DLCommonInformationr7DldpchInfoCommon::Info DLCommonInformationr7DldpchInfoCommon::theInfo = {
	DLCommonInformationr7DldpchInfoCommon::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *DLCommonInformationr7::itemsInfo[1] = {
	&DLCommonInformationr7DldpchInfoCommon::theInfo,
};
bool DLCommonInformationr7::itemsPres[1] = {
	0,
};
const DLCommonInformationr7::Info DLCommonInformationr7::theInfo = {
	DLCommonInformationr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLCommonInformationr8DldpchInfoCommon::choicesInfo[1] = {
	&DLDPCHInfoCommonr6::theInfo,
};
const DLCommonInformationr8DldpchInfoCommon::Info DLCommonInformationr8DldpchInfoCommon::theInfo = {
	DLCommonInformationr8DldpchInfoCommon::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *DLCommonInformationr8::itemsInfo[1] = {
	&DLCommonInformationr8DldpchInfoCommon::theInfo,
};
bool DLCommonInformationr8::itemsPres[1] = {
	0,
};
const DLCommonInformationr8::Info DLCommonInformationr8::theInfo = {
	DLCommonInformationr8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLDPCHPowerControlInfoModeSpecificInfo::choicesInfo[1] = {
	&DLDPCHPowerControlInfoModeSpecificInfoFdd::theInfo,
};
const DLDPCHPowerControlInfoModeSpecificInfo::Info DLDPCHPowerControlInfoModeSpecificInfo::theInfo = {
	DLDPCHPowerControlInfoModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *DLDPCHPowerControlInfo::itemsInfo[1] = {
	&DLDPCHPowerControlInfoModeSpecificInfo::theInfo,
};
bool DLDPCHPowerControlInfo::itemsPres[1] = {
	1,
};
const DLDPCHPowerControlInfo::Info DLDPCHPowerControlInfo::theInfo = {
	DLDPCHPowerControlInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DLDPCHInfoCommonPost::itemsInfo[1] = {
	&DLDPCHPowerControlInfo::theInfo,
};
bool DLDPCHInfoCommonPost::itemsPres[1] = {
	0,
};
const DLDPCHInfoCommonPost::Info DLDPCHInfoCommonPost::theInfo = {
	DLDPCHInfoCommonPost::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLCommonInformationPost::itemsInfo[1] = {
	&DLDPCHInfoCommonPost::theInfo,
};
bool DLCommonInformationPost::itemsPres[1] = {
	1,
};
const DLCommonInformationPost::Info DLCommonInformationPost::theInfo = {
	DLCommonInformationPost::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *SF512AndPilot::choicesInfo[1] = {
	&SF512AndPilotSfd4::theInfo,
};
const SF512AndPilot::Info SF512AndPilot::theInfo = {
	SF512AndPilot::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *DLDPCHInfoCommonPredefModeSpecificInfoFdd::itemsInfo[1] = {
	&SF512AndPilot::theInfo,
};
bool DLDPCHInfoCommonPredefModeSpecificInfoFdd::itemsPres[1] = {
	1,
};
const DLDPCHInfoCommonPredefModeSpecificInfoFdd::Info DLDPCHInfoCommonPredefModeSpecificInfoFdd::theInfo = {
	DLDPCHInfoCommonPredefModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DLDPCHInfoCommonPredefModeSpecificInfo::choicesInfo[1] = {
	&DLDPCHInfoCommonPredefModeSpecificInfoFdd::theInfo,
};
const DLDPCHInfoCommonPredefModeSpecificInfo::Info DLDPCHInfoCommonPredefModeSpecificInfo::theInfo = {
	DLDPCHInfoCommonPredefModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *DLDPCHInfoCommonPredef::itemsInfo[1] = {
	&DLDPCHInfoCommonPredefModeSpecificInfo::theInfo,
};
bool DLDPCHInfoCommonPredef::itemsPres[1] = {
	1,
};
const DLDPCHInfoCommonPredef::Info DLDPCHInfoCommonPredef::theInfo = {
	DLDPCHInfoCommonPredef::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DLCommonInformationPredef::itemsInfo[1] = {
	&DLDPCHInfoCommonPredef::theInfo,
};
bool DLCommonInformationPredef::itemsPres[1] = {
	0,
};
const DLCommonInformationPredef::Info DLCommonInformationPredef::theInfo = {
	DLCommonInformationPredef::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLDPCHInfoCommonCfnHandling::choicesInfo[1] = {
	&DLDPCHInfoCommonCfnHandlingMaintain::theInfo,
};
const DLDPCHInfoCommonCfnHandling::Info DLDPCHInfoCommonCfnHandling::theInfo = {
	DLDPCHInfoCommonCfnHandling::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *DLDPCHInfoCommon::itemsInfo[1] = {
	&DLDPCHInfoCommonCfnHandling::theInfo,
};
bool DLDPCHInfoCommon::itemsPres[1] = {
	1,
};
const DLDPCHInfoCommon::Info DLDPCHInfoCommon::theInfo = {
	DLDPCHInfoCommon::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DLDPCHInfoPerRLFdd::itemsInfo[1] = {
	&PCPICHUsageForChannelEst::theInfo,
};
bool DLDPCHInfoPerRLFdd::itemsPres[1] = {
	0,
};
const DLDPCHInfoPerRLFdd::Info DLDPCHInfoPerRLFdd::theInfo = {
	DLDPCHInfoPerRLFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLDPCHInfoPerRL::choicesInfo[1] = {
	&DLDPCHInfoPerRLFdd::theInfo,
};
const DLDPCHInfoPerRL::Info DLDPCHInfoPerRL::theInfo = {
	DLDPCHInfoPerRL::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *DLDPCHInfoPerRLr4Fdd::itemsInfo[1] = {
	&PCPICHUsageForChannelEst::theInfo,
};
bool DLDPCHInfoPerRLr4Fdd::itemsPres[1] = {
	0,
};
const DLDPCHInfoPerRLr4Fdd::Info DLDPCHInfoPerRLr4Fdd::theInfo = {
	DLDPCHInfoPerRLr4Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLDPCHInfoPerRLr4::choicesInfo[1] = {
	&DLDPCHInfoPerRLr4Fdd::theInfo,
};
const DLDPCHInfoPerRLr4::Info DLDPCHInfoPerRLr4::theInfo = {
	DLDPCHInfoPerRLr4::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *DLDPCHInfoPerRLr5Fdd::itemsInfo[1] = {
	&PCPICHUsageForChannelEst::theInfo,
};
bool DLDPCHInfoPerRLr5Fdd::itemsPres[1] = {
	0,
};
const DLDPCHInfoPerRLr5Fdd::Info DLDPCHInfoPerRLr5Fdd::theInfo = {
	DLDPCHInfoPerRLr5Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLDPCHInfoPerRLr5::choicesInfo[1] = {
	&DLDPCHInfoPerRLr5Fdd::theInfo,
};
const DLDPCHInfoPerRLr5::Info DLDPCHInfoPerRLr5::theInfo = {
	DLDPCHInfoPerRLr5::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *DLDPCHInfoPerRLr6Fdd::itemsInfo[1] = {
	&PCPICHUsageForChannelEst::theInfo,
};
bool DLDPCHInfoPerRLr6Fdd::itemsPres[1] = {
	0,
};
const DLDPCHInfoPerRLr6Fdd::Info DLDPCHInfoPerRLr6Fdd::theInfo = {
	DLDPCHInfoPerRLr6Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLDPCHInfoPerRLr6::choicesInfo[1] = {
	&DLDPCHInfoPerRLr6Fdd::theInfo,
};
const DLDPCHInfoPerRLr6::Info DLDPCHInfoPerRLr6::theInfo = {
	DLDPCHInfoPerRLr6::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *DLDPCHInfoPerRLr7Fdd::itemsInfo[1] = {
	&PCPICHUsageForChannelEst::theInfo,
};
bool DLDPCHInfoPerRLr7Fdd::itemsPres[1] = {
	0,
};
const DLDPCHInfoPerRLr7Fdd::Info DLDPCHInfoPerRLr7Fdd::theInfo = {
	DLDPCHInfoPerRLr7Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLDPCHInfoPerRLr7::choicesInfo[1] = {
	&DLDPCHInfoPerRLr7Fdd::theInfo,
};
const DLDPCHInfoPerRLr7::Info DLDPCHInfoPerRLr7::theInfo = {
	DLDPCHInfoPerRLr7::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *DLFDPCHInfoPerRLr6::itemsInfo[1] = {
	&PCPICHUsageForChannelEst::theInfo,
};
bool DLFDPCHInfoPerRLr6::itemsPres[1] = {
	1,
};
const DLFDPCHInfoPerRLr6::Info DLFDPCHInfoPerRLr6::theInfo = {
	DLFDPCHInfoPerRLr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DLFDPCHInfoPerRLr7::itemsInfo[1] = {
	&PCPICHUsageForChannelEst::theInfo,
};
bool DLFDPCHInfoPerRLr7::itemsPres[1] = {
	0,
};
const DLFDPCHInfoPerRLr7::Info DLFDPCHInfoPerRLr7::theInfo = {
	DLFDPCHInfoPerRLr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLDPCHInfoPerRLPostFDD::itemsInfo[1] = {
	&PCPICHUsageForChannelEst::theInfo,
};
bool DLDPCHInfoPerRLPostFDD::itemsPres[1] = {
	1,
};
const DLDPCHInfoPerRLPostFDD::Info DLDPCHInfoPerRLPostFDD::theInfo = {
	DLDPCHInfoPerRLPostFDD::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *IndividualTimeslotInfo::itemsInfo[1] = {
	&TimeslotNumber::theInfo,
};
bool IndividualTimeslotInfo::itemsPres[1] = {
	1,
};
const IndividualTimeslotInfo::Info IndividualTimeslotInfo::theInfo = {
	IndividualTimeslotInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DownlinkTimeslotsCodes::itemsInfo[1] = {
	&IndividualTimeslotInfo::theInfo,
};
bool DownlinkTimeslotsCodes::itemsPres[1] = {
	1,
};
const DownlinkTimeslotsCodes::Info DownlinkTimeslotsCodes::theInfo = {
	DownlinkTimeslotsCodes::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DLDPCHInfoPerRLPostTDD::itemsInfo[1] = {
	&DownlinkTimeslotsCodes::theInfo,
};
bool DLDPCHInfoPerRLPostTDD::itemsPres[1] = {
	1,
};
const DLDPCHInfoPerRLPostTDD::Info DLDPCHInfoPerRLPostTDD::theInfo = {
	DLDPCHInfoPerRLPostTDD::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *IndividualTimeslotInfoLCRr4::itemsInfo[1] = {
	&TimeslotNumberLCRr4::theInfo,
};
bool IndividualTimeslotInfoLCRr4::itemsPres[1] = {
	0,
};
const IndividualTimeslotInfoLCRr4::Info IndividualTimeslotInfoLCRr4::theInfo = {
	IndividualTimeslotInfoLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DownlinkTimeslotsCodesLCRr4::itemsInfo[1] = {
	&IndividualTimeslotInfoLCRr4::theInfo,
};
bool DownlinkTimeslotsCodesLCRr4::itemsPres[1] = {
	1,
};
const DownlinkTimeslotsCodesLCRr4::Info DownlinkTimeslotsCodesLCRr4::theInfo = {
	DownlinkTimeslotsCodesLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DLDPCHInfoPerRLPostTDDLCRr4::itemsInfo[1] = {
	&DownlinkTimeslotsCodesLCRr4::theInfo,
};
bool DLDPCHInfoPerRLPostTDDLCRr4::itemsPres[1] = {
	1,
};
const DLDPCHInfoPerRLPostTDDLCRr4::Info DLDPCHInfoPerRLPostTDDLCRr4::theInfo = {
	DLDPCHInfoPerRLPostTDDLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DLFDPCHInfoCommonr6CfnHandlingMaintain::itemsInfo[1] = {
	&TimingMaintainedSynchInd::theInfo,
};
bool DLFDPCHInfoCommonr6CfnHandlingMaintain::itemsPres[1] = {
	0,
};
const DLFDPCHInfoCommonr6CfnHandlingMaintain::Info DLFDPCHInfoCommonr6CfnHandlingMaintain::theInfo = {
	DLFDPCHInfoCommonr6CfnHandlingMaintain::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLFDPCHInfoCommonr6CfnHandling::choicesInfo[1] = {
	&DLFDPCHInfoCommonr6CfnHandlingMaintain::theInfo,
};
const DLFDPCHInfoCommonr6CfnHandling::Info DLFDPCHInfoCommonr6CfnHandling::theInfo = {
	DLFDPCHInfoCommonr6CfnHandling::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *DLFDPCHInfoCommonr6::itemsInfo[1] = {
	&DLFDPCHInfoCommonr6CfnHandling::theInfo,
};
bool DLFDPCHInfoCommonr6::itemsPres[1] = {
	0,
};
const DLFDPCHInfoCommonr6::Info DLFDPCHInfoCommonr6::theInfo = {
	DLFDPCHInfoCommonr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLHSPDSCHInformationr8extModeSpecificInfoTdd::choicesInfo[1] = {
	&DLHSPDSCHInformationr8extModeSpecificInfoTddTdd384::theInfo,
};
const DLHSPDSCHInformationr8extModeSpecificInfoTdd::Info DLHSPDSCHInformationr8extModeSpecificInfoTdd::theInfo = {
	DLHSPDSCHInformationr8extModeSpecificInfoTdd::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *DLHSPDSCHInformationr8extModeSpecificInfo::choicesInfo[1] = {
	&DLHSPDSCHInformationr8extModeSpecificInfoTdd::theInfo,
};
const DLHSPDSCHInformationr8extModeSpecificInfo::Info DLHSPDSCHInformationr8extModeSpecificInfo::theInfo = {
	DLHSPDSCHInformationr8extModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *DLHSPDSCHInformationr8ext::itemsInfo[1] = {
	&DLHSPDSCHInformationr8extModeSpecificInfo::theInfo,
};
bool DLHSPDSCHInformationr8ext::itemsPres[1] = {
	1,
};
const DLHSPDSCHInformationr8ext::Info DLHSPDSCHInformationr8ext::theInfo = {
	DLHSPDSCHInformationr8ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *HSSCCHInfor8extModeSpecificInfo::choicesInfo[1] = {
	&HSSCCHInfor8extModeSpecificInfoFdd::theInfo,
};
const HSSCCHInfor8extModeSpecificInfo::Info HSSCCHInfor8extModeSpecificInfo::theInfo = {
	HSSCCHInfor8extModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *HSSCCHInfor8ext::itemsInfo[1] = {
	&HSSCCHInfor8extModeSpecificInfo::theInfo,
};
bool HSSCCHInfor8ext::itemsPres[1] = {
	1,
};
const HSSCCHInfor8ext::Info HSSCCHInfor8ext::theInfo = {
	HSSCCHInfor8ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DLHSPDSCHInformationr8ext2::itemsInfo[1] = {
	&HSSCCHInfor8ext::theInfo,
};
bool DLHSPDSCHInformationr8ext2::itemsPres[1] = {
	0,
};
const DLHSPDSCHInformationr8ext2::Info DLHSPDSCHInformationr8ext2::theInfo = {
	DLHSPDSCHInformationr8ext2::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLHSPDSCHMultiCarrierInformation::itemsInfo[0] = {
};
bool DLHSPDSCHMultiCarrierInformation::itemsPres[0] = {
};
const DLHSPDSCHMultiCarrierInformation::Info DLHSPDSCHMultiCarrierInformation::theInfo = {
	DLHSPDSCHMultiCarrierInformation::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *DLHSPDSCHTSConfiguration::itemsInfo[0] = {
};
bool DLHSPDSCHTSConfiguration::itemsPres[0] = {
};
const DLHSPDSCHTSConfiguration::Info DLHSPDSCHTSConfiguration::theInfo = {
	DLHSPDSCHTSConfiguration::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *DLHSPDSCHTSConfigurationVHCR::itemsInfo[0] = {
};
bool DLHSPDSCHTSConfigurationVHCR::itemsPres[0] = {
};
const DLHSPDSCHTSConfigurationVHCR::Info DLHSPDSCHTSConfigurationVHCR::theInfo = {
	DLHSPDSCHTSConfigurationVHCR::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *DLInformationPerRLModeSpecificInfoFdd::itemsInfo[1] = {
	&PrimaryCPICHInfo::theInfo,
};
bool DLInformationPerRLModeSpecificInfoFdd::itemsPres[1] = {
	0,
};
const DLInformationPerRLModeSpecificInfoFdd::Info DLInformationPerRLModeSpecificInfoFdd::theInfo = {
	DLInformationPerRLModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLInformationPerRLModeSpecificInfo::choicesInfo[1] = {
	&DLInformationPerRLModeSpecificInfoFdd::theInfo,
};
const DLInformationPerRLModeSpecificInfo::Info DLInformationPerRLModeSpecificInfo::theInfo = {
	DLInformationPerRLModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *DLInformationPerRL::itemsInfo[1] = {
	&DLInformationPerRLModeSpecificInfo::theInfo,
};
bool DLInformationPerRL::itemsPres[1] = {
	0,
};
const DLInformationPerRL::Info DLInformationPerRL::theInfo = {
	DLInformationPerRL::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLInformationPerRLr4ModeSpecificInfoFdd::itemsInfo[1] = {
	&PrimaryCPICHInfo::theInfo,
};
bool DLInformationPerRLr4ModeSpecificInfoFdd::itemsPres[1] = {
	0,
};
const DLInformationPerRLr4ModeSpecificInfoFdd::Info DLInformationPerRLr4ModeSpecificInfoFdd::theInfo = {
	DLInformationPerRLr4ModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLInformationPerRLr4ModeSpecificInfo::choicesInfo[1] = {
	&DLInformationPerRLr4ModeSpecificInfoFdd::theInfo,
};
const DLInformationPerRLr4ModeSpecificInfo::Info DLInformationPerRLr4ModeSpecificInfo::theInfo = {
	DLInformationPerRLr4ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *DLInformationPerRLr4::itemsInfo[1] = {
	&DLInformationPerRLr4ModeSpecificInfo::theInfo,
};
bool DLInformationPerRLr4::itemsPres[1] = {
	0,
};
const DLInformationPerRLr4::Info DLInformationPerRLr4::theInfo = {
	DLInformationPerRLr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLInformationPerRLr5ModeSpecificInfoFdd::itemsInfo[1] = {
	&PrimaryCPICHInfo::theInfo,
};
bool DLInformationPerRLr5ModeSpecificInfoFdd::itemsPres[1] = {
	1,
};
const DLInformationPerRLr5ModeSpecificInfoFdd::Info DLInformationPerRLr5ModeSpecificInfoFdd::theInfo = {
	DLInformationPerRLr5ModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DLInformationPerRLr5ModeSpecificInfo::choicesInfo[1] = {
	&DLInformationPerRLr5ModeSpecificInfoFdd::theInfo,
};
const DLInformationPerRLr5ModeSpecificInfo::Info DLInformationPerRLr5ModeSpecificInfo::theInfo = {
	DLInformationPerRLr5ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *DLInformationPerRLr5::itemsInfo[1] = {
	&DLInformationPerRLr5ModeSpecificInfo::theInfo,
};
bool DLInformationPerRLr5::itemsPres[1] = {
	0,
};
const DLInformationPerRLr5::Info DLInformationPerRLr5::theInfo = {
	DLInformationPerRLr5::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLInformationPerRLr5bisModeSpecificInfoFdd::itemsInfo[1] = {
	&PrimaryCPICHInfo::theInfo,
};
bool DLInformationPerRLr5bisModeSpecificInfoFdd::itemsPres[1] = {
	0,
};
const DLInformationPerRLr5bisModeSpecificInfoFdd::Info DLInformationPerRLr5bisModeSpecificInfoFdd::theInfo = {
	DLInformationPerRLr5bisModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLInformationPerRLr5bisModeSpecificInfo::choicesInfo[1] = {
	&DLInformationPerRLr5bisModeSpecificInfoFdd::theInfo,
};
const DLInformationPerRLr5bisModeSpecificInfo::Info DLInformationPerRLr5bisModeSpecificInfo::theInfo = {
	DLInformationPerRLr5bisModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *DLInformationPerRLr5bis::itemsInfo[1] = {
	&DLInformationPerRLr5bisModeSpecificInfo::theInfo,
};
bool DLInformationPerRLr5bis::itemsPres[1] = {
	0,
};
const DLInformationPerRLr5bis::Info DLInformationPerRLr5bis::theInfo = {
	DLInformationPerRLr5bis::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLInformationPerRLr6ModeSpecificInfoFdd::itemsInfo[1] = {
	&PrimaryCPICHInfo::theInfo,
};
bool DLInformationPerRLr6ModeSpecificInfoFdd::itemsPres[1] = {
	1,
};
const DLInformationPerRLr6ModeSpecificInfoFdd::Info DLInformationPerRLr6ModeSpecificInfoFdd::theInfo = {
	DLInformationPerRLr6ModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DLInformationPerRLr6ModeSpecificInfo::choicesInfo[1] = {
	&DLInformationPerRLr6ModeSpecificInfoFdd::theInfo,
};
const DLInformationPerRLr6ModeSpecificInfo::Info DLInformationPerRLr6ModeSpecificInfo::theInfo = {
	DLInformationPerRLr6ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *DLInformationPerRLr6::itemsInfo[1] = {
	&DLInformationPerRLr6ModeSpecificInfo::theInfo,
};
bool DLInformationPerRLr6::itemsPres[1] = {
	0,
};
const DLInformationPerRLr6::Info DLInformationPerRLr6::theInfo = {
	DLInformationPerRLr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLInformationPerRLv6b0ext::itemsInfo[1] = {
	&STTDIndication::theInfo,
};
bool DLInformationPerRLv6b0ext::itemsPres[1] = {
	0,
};
const DLInformationPerRLv6b0ext::Info DLInformationPerRLv6b0ext::theInfo = {
	DLInformationPerRLv6b0ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLInformationPerRLr7ModeSpecificInfoFdd::itemsInfo[1] = {
	&PrimaryCPICHInfo::theInfo,
};
bool DLInformationPerRLr7ModeSpecificInfoFdd::itemsPres[1] = {
	1,
};
const DLInformationPerRLr7ModeSpecificInfoFdd::Info DLInformationPerRLr7ModeSpecificInfoFdd::theInfo = {
	DLInformationPerRLr7ModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DLInformationPerRLr7ModeSpecificInfo::choicesInfo[1] = {
	&DLInformationPerRLr7ModeSpecificInfoFdd::theInfo,
};
const DLInformationPerRLr7ModeSpecificInfo::Info DLInformationPerRLr7ModeSpecificInfo::theInfo = {
	DLInformationPerRLr7ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *DLInformationPerRLr7::itemsInfo[1] = {
	&DLInformationPerRLr7ModeSpecificInfo::theInfo,
};
bool DLInformationPerRLr7::itemsPres[1] = {
	0,
};
const DLInformationPerRLr7::Info DLInformationPerRLr7::theInfo = {
	DLInformationPerRLr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLInformationPerRLr8ModeSpecificInfoFdd::itemsInfo[1] = {
	&PrimaryCPICHInfo::theInfo,
};
bool DLInformationPerRLr8ModeSpecificInfoFdd::itemsPres[1] = {
	1,
};
const DLInformationPerRLr8ModeSpecificInfoFdd::Info DLInformationPerRLr8ModeSpecificInfoFdd::theInfo = {
	DLInformationPerRLr8ModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DLInformationPerRLr8ModeSpecificInfo::choicesInfo[1] = {
	&DLInformationPerRLr8ModeSpecificInfoFdd::theInfo,
};
const DLInformationPerRLr8ModeSpecificInfo::Info DLInformationPerRLr8ModeSpecificInfo::theInfo = {
	DLInformationPerRLr8ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *DLInformationPerRLr8::itemsInfo[1] = {
	&DLInformationPerRLr8ModeSpecificInfo::theInfo,
};
bool DLInformationPerRLr8::itemsPres[1] = {
	0,
};
const DLInformationPerRLr8::Info DLInformationPerRLr8::theInfo = {
	DLInformationPerRLr8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLInformationPerRLPostFDD::itemsInfo[1] = {
	&PrimaryCPICHInfo::theInfo,
};
bool DLInformationPerRLPostFDD::itemsPres[1] = {
	1,
};
const DLInformationPerRLPostFDD::Info DLInformationPerRLPostFDD::theInfo = {
	DLInformationPerRLPostFDD::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PrimaryCCPCHInfoPostSyncCase::choicesInfo[1] = {
	&PrimaryCCPCHInfoPostSyncCaseSyncCase1::theInfo,
};
const PrimaryCCPCHInfoPostSyncCase::Info PrimaryCCPCHInfoPostSyncCase::theInfo = {
	PrimaryCCPCHInfoPostSyncCase::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *PrimaryCCPCHInfoPost::itemsInfo[1] = {
	&PrimaryCCPCHInfoPostSyncCase::theInfo,
};
bool PrimaryCCPCHInfoPost::itemsPres[1] = {
	1,
};
const PrimaryCCPCHInfoPost::Info PrimaryCCPCHInfoPost::theInfo = {
	PrimaryCCPCHInfoPost::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DLInformationPerRLPostTDD::itemsInfo[1] = {
	&PrimaryCCPCHInfoPost::theInfo,
};
bool DLInformationPerRLPostTDD::itemsPres[1] = {
	1,
};
const DLInformationPerRLPostTDD::Info DLInformationPerRLPostTDD::theInfo = {
	DLInformationPerRLPostTDD::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PrimaryCCPCHInfoPostTDDLCRr4::itemsInfo[1] = {
	&PrimaryCCPCHInfoPostTDDLCRr4TstdIndicator::theInfo,
};
bool PrimaryCCPCHInfoPostTDDLCRr4::itemsPres[1] = {
	1,
};
const PrimaryCCPCHInfoPostTDDLCRr4::Info PrimaryCCPCHInfoPostTDDLCRr4::theInfo = {
	PrimaryCCPCHInfoPostTDDLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DLInformationPerRLPostTDDLCRr4::itemsInfo[1] = {
	&PrimaryCCPCHInfoPostTDDLCRr4::theInfo,
};
bool DLInformationPerRLPostTDDLCRr4::itemsPres[1] = {
	1,
};
const DLInformationPerRLPostTDDLCRr4::Info DLInformationPerRLPostTDDLCRr4::theInfo = {
	DLInformationPerRLPostTDDLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DLMultiCarrierInformation::itemsInfo[1] = {
	&DLMultiCarrierInformationtsn_Length::theInfo,
};
bool DLMultiCarrierInformation::itemsPres[1] = {
	0,
};
const DLMultiCarrierInformation::Info DLMultiCarrierInformation::theInfo = {
	DLMultiCarrierInformation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *PDSCHSHODCHInfo::itemsInfo[1] = {
	&DSCHRadioLinkIdentifier::theInfo,
};
bool PDSCHSHODCHInfo::itemsPres[1] = {
	0,
};
const PDSCHSHODCHInfo::Info PDSCHSHODCHInfo::theInfo = {
	PDSCHSHODCHInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLPDSCHInformation::itemsInfo[1] = {
	&PDSCHSHODCHInfo::theInfo,
};
bool DLPDSCHInformation::itemsPres[1] = {
	0,
};
const DLPDSCHInformation::Info DLPDSCHInformation::theInfo = {
	DLPDSCHInformation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *RestrictedTrCH::itemsInfo[1] = {
	&DLTrCHType::theInfo,
};
bool RestrictedTrCH::itemsPres[1] = {
	1,
};
const RestrictedTrCH::Info RestrictedTrCH::theInfo = {
	RestrictedTrCH::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *Dlratematchingrestriction::itemsInfo[1] = {
	&RestrictedTrCHInfoList::theInfo,
};
bool Dlratematchingrestriction::itemsPres[1] = {
	0,
};
const Dlratematchingrestriction::Info Dlratematchingrestriction::theInfo = {
	Dlratematchingrestriction::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLSecondaryCellInfoFDD::choicesInfo[1] = {
	&DLSecondaryCellInfoFDDContinue::theInfo,
};
const DLSecondaryCellInfoFDD::Info DLSecondaryCellInfoFDD::theInfo = {
	DLSecondaryCellInfoFDD::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *DLSecondaryCellInfoFDDv890ext::itemsInfo[1] = {
	&DLSecondaryCellInfoFDDv890extdifferentTxModeFromServingHS_DSCHCell::theInfo,
};
bool DLSecondaryCellInfoFDDv890ext::itemsPres[1] = {
	0,
};
const DLSecondaryCellInfoFDDv890ext::Info DLSecondaryCellInfoFDDv890ext::theInfo = {
	DLSecondaryCellInfoFDDv890ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLSecondaryCellInfoFDDr9ConfigurationInfo::choicesInfo[1] = {
	&DLSecondaryCellInfoFDDr9ConfigurationInfoContinue::theInfo,
};
const DLSecondaryCellInfoFDDr9ConfigurationInfo::Info DLSecondaryCellInfoFDDr9ConfigurationInfo::theInfo = {
	DLSecondaryCellInfoFDDr9ConfigurationInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *DLSecondaryCellInfoFDDr9::itemsInfo[1] = {
	&DLSecondaryCellInfoFDDr9ConfigurationInfo::theInfo,
};
bool DLSecondaryCellInfoFDDr9::itemsPres[1] = {
	0,
};
const DLSecondaryCellInfoFDDr9::Info DLSecondaryCellInfoFDDr9::theInfo = {
	DLSecondaryCellInfoFDDr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLTPCPowerOffsetPerRL::itemsInfo[1] = {
	&PowerOffsetTPCpdpdch::theInfo,
};
bool DLTPCPowerOffsetPerRL::itemsPres[1] = {
	0,
};
const DLTPCPowerOffsetPerRL::Info DLTPCPowerOffsetPerRL::theInfo = {
	DLTPCPowerOffsetPerRL::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLTSChannelisationCodesShortCodesRepresentationConsecutive::itemsInfo[1] = {
	&DLTSChannelisationCode::theInfo,
};
bool DLTSChannelisationCodesShortCodesRepresentationConsecutive::itemsPres[1] = {
	1,
};
const DLTSChannelisationCodesShortCodesRepresentationConsecutive::Info DLTSChannelisationCodesShortCodesRepresentationConsecutive::theInfo = {
	DLTSChannelisationCodesShortCodesRepresentationConsecutive::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DLTSChannelisationCodesShortCodesRepresentation::choicesInfo[1] = {
	&DLTSChannelisationCodesShortCodesRepresentationConsecutive::theInfo,
};
const DLTSChannelisationCodesShortCodesRepresentation::Info DLTSChannelisationCodesShortCodesRepresentation::theInfo = {
	DLTSChannelisationCodesShortCodesRepresentation::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *DLTSChannelisationCodesShort::itemsInfo[1] = {
	&DLTSChannelisationCodesShortCodesRepresentation::theInfo,
};
bool DLTSChannelisationCodesShort::itemsPres[1] = {
	1,
};
const DLTSChannelisationCodesShort::Info DLTSChannelisationCodesShort::theInfo = {
	DLTSChannelisationCodesShort::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DLTSChannelisationCodesShortVHCRCodesRepresentationConsecutive::itemsInfo[1] = {
	&DLTSChannelisationCodeVHCR::theInfo,
};
bool DLTSChannelisationCodesShortVHCRCodesRepresentationConsecutive::itemsPres[1] = {
	1,
};
const DLTSChannelisationCodesShortVHCRCodesRepresentationConsecutive::Info DLTSChannelisationCodesShortVHCRCodesRepresentationConsecutive::theInfo = {
	DLTSChannelisationCodesShortVHCRCodesRepresentationConsecutive::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DLTSChannelisationCodesShortVHCRCodesRepresentation::choicesInfo[1] = {
	&DLTSChannelisationCodesShortVHCRCodesRepresentationConsecutive::theInfo,
};
const DLTSChannelisationCodesShortVHCRCodesRepresentation::Info DLTSChannelisationCodesShortVHCRCodesRepresentation::theInfo = {
	DLTSChannelisationCodesShortVHCRCodesRepresentation::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *DLTSChannelisationCodesShortVHCR::itemsInfo[1] = {
	&DLTSChannelisationCodesShortVHCRCodesRepresentation::theInfo,
};
bool DLTSChannelisationCodesShortVHCR::itemsPres[1] = {
	1,
};
const DLTSChannelisationCodesShortVHCR::Info DLTSChannelisationCodesShortVHCR::theInfo = {
	DLTSChannelisationCodesShortVHCR::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DLChannelCodesMBSFNIMB384::itemsInfo[1] = {
	&DLChannelCodesMBSFNIMB384FirstChannelisationCode::theInfo,
};
bool DLChannelCodesMBSFNIMB384::itemsPres[1] = {
	0,
};
const DLChannelCodesMBSFNIMB384::Info DLChannelCodesMBSFNIMB384::theInfo = {
	DLChannelCodesMBSFNIMB384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ULEDCHInformationr8::itemsInfo[1] = {
	&ULEDCHInformationr8mac_es_e_resetIndicator::theInfo,
};
bool ULEDCHInformationr8::itemsPres[1] = {
	1,
};
const ULEDCHInformationr8::Info ULEDCHInformationr8::theInfo = {
	ULEDCHInformationr8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DLULHSPAInformationr8::itemsInfo[1] = {
	&ULEDCHInformationr8::theInfo,
};
bool DLULHSPAInformationr8::itemsPres[1] = {
	1,
};
const DLULHSPAInformationr8::Info DLULHSPAInformationr8::theInfo = {
	DLULHSPAInformationr8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ULEDCHInformationr9::itemsInfo[1] = {
	&ULEDCHInformationr9mac_es_e_resetIndicator::theInfo,
};
bool ULEDCHInformationr9::itemsPres[1] = {
	1,
};
const ULEDCHInformationr9::Info ULEDCHInformationr9::theInfo = {
	ULEDCHInformationr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DLULHSPAInformationr9::itemsInfo[1] = {
	&ULEDCHInformationr9::theInfo,
};
bool DLULHSPAInformationr9::itemsPres[1] = {
	1,
};
const DLULHSPAInformationr9::Info DLULHSPAInformationr9::theInfo = {
	DLULHSPAInformationr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DownlinkAdditionalTimeslotsParameters::choicesInfo[1] = {
	&DownlinkAdditionalTimeslotsParametersSameAsLast::theInfo,
};
const DownlinkAdditionalTimeslotsParameters::Info DownlinkAdditionalTimeslotsParameters::theInfo = {
	DownlinkAdditionalTimeslotsParameters::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *DownlinkAdditionalTimeslots::itemsInfo[1] = {
	&DownlinkAdditionalTimeslotsParameters::theInfo,
};
bool DownlinkAdditionalTimeslots::itemsPres[1] = {
	1,
};
const DownlinkAdditionalTimeslots::Info DownlinkAdditionalTimeslots::theInfo = {
	DownlinkAdditionalTimeslots::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DownlinkAdditionalTimeslotsVHCRParameters::choicesInfo[1] = {
	&DownlinkAdditionalTimeslotsVHCRParametersSameAsLast::theInfo,
};
const DownlinkAdditionalTimeslotsVHCRParameters::Info DownlinkAdditionalTimeslotsVHCRParameters::theInfo = {
	DownlinkAdditionalTimeslotsVHCRParameters::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *DownlinkAdditionalTimeslotsVHCR::itemsInfo[1] = {
	&DownlinkAdditionalTimeslotsVHCRParameters::theInfo,
};
bool DownlinkAdditionalTimeslotsVHCR::itemsPres[1] = {
	1,
};
const DownlinkAdditionalTimeslotsVHCR::Info DownlinkAdditionalTimeslotsVHCR::theInfo = {
	DownlinkAdditionalTimeslotsVHCR::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DownlinkAdditionalTimeslotsLCRr4Parameters::choicesInfo[1] = {
	&DownlinkAdditionalTimeslotsLCRr4ParametersSameAsLast::theInfo,
};
const DownlinkAdditionalTimeslotsLCRr4Parameters::Info DownlinkAdditionalTimeslotsLCRr4Parameters::theInfo = {
	DownlinkAdditionalTimeslotsLCRr4Parameters::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *DownlinkAdditionalTimeslotsLCRr4::itemsInfo[1] = {
	&DownlinkAdditionalTimeslotsLCRr4Parameters::theInfo,
};
bool DownlinkAdditionalTimeslotsLCRr4::itemsPres[1] = {
	1,
};
const DownlinkAdditionalTimeslotsLCRr4::Info DownlinkAdditionalTimeslotsLCRr4::theInfo = {
	DownlinkAdditionalTimeslotsLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DownlinkAdditionalTimeslotsr7Parameters::choicesInfo[1] = {
	&DownlinkAdditionalTimeslotsr7ParametersSameAsLast::theInfo,
};
const DownlinkAdditionalTimeslotsr7Parameters::Info DownlinkAdditionalTimeslotsr7Parameters::theInfo = {
	DownlinkAdditionalTimeslotsr7Parameters::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *DownlinkAdditionalTimeslotsr7::itemsInfo[1] = {
	&DownlinkAdditionalTimeslotsr7Parameters::theInfo,
};
bool DownlinkAdditionalTimeslotsr7::itemsPres[1] = {
	1,
};
const DownlinkAdditionalTimeslotsr7::Info DownlinkAdditionalTimeslotsr7::theInfo = {
	DownlinkAdditionalTimeslotsr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *IndividualTimeslotInfoVHCR::itemsInfo[1] = {
	&TimeslotNumber::theInfo,
};
bool IndividualTimeslotInfoVHCR::itemsPres[1] = {
	1,
};
const IndividualTimeslotInfoVHCR::Info IndividualTimeslotInfoVHCR::theInfo = {
	IndividualTimeslotInfoVHCR::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DownlinkTimeslotsCodesVHCR::itemsInfo[1] = {
	&IndividualTimeslotInfoVHCR::theInfo,
};
bool DownlinkTimeslotsCodesVHCR::itemsPres[1] = {
	1,
};
const DownlinkTimeslotsCodesVHCR::Info DownlinkTimeslotsCodesVHCR::theInfo = {
	DownlinkTimeslotsCodesVHCR::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *IndividualTimeslotInfor7::itemsInfo[1] = {
	&TimeslotNumber::theInfo,
};
bool IndividualTimeslotInfor7::itemsPres[1] = {
	1,
};
const IndividualTimeslotInfor7::Info IndividualTimeslotInfor7::theInfo = {
	IndividualTimeslotInfor7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DownlinkTimeslotsCodesr7::itemsInfo[1] = {
	&IndividualTimeslotInfor7::theInfo,
};
bool DownlinkTimeslotsCodesr7::itemsPres[1] = {
	1,
};
const DownlinkTimeslotsCodesr7::Info DownlinkTimeslotsCodesr7::theInfo = {
	DownlinkTimeslotsCodesr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *TGPSequence::itemsInfo[1] = {
	&TGPSI::theInfo,
};
bool TGPSequence::itemsPres[1] = {
	0,
};
const TGPSequence::Info TGPSequence::theInfo = {
	TGPSequence::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DPCHCompressedModeInfo::itemsInfo[1] = {
	&TGPSequenceList::theInfo,
};
bool DPCHCompressedModeInfo::itemsPres[1] = {
	1,
};
const DPCHCompressedModeInfo::Info DPCHCompressedModeInfo::theInfo = {
	DPCHCompressedModeInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *TGPSequencer8::itemsInfo[1] = {
	&TGPSI::theInfo,
};
bool TGPSequencer8::itemsPres[1] = {
	0,
};
const TGPSequencer8::Info TGPSequencer8::theInfo = {
	TGPSequencer8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DPCHCompressedModeInfor8::itemsInfo[1] = {
	&TGPSequenceListr8::theInfo,
};
bool DPCHCompressedModeInfor8::itemsPres[1] = {
	1,
};
const DPCHCompressedModeInfor8::Info DPCHCompressedModeInfor8::theInfo = {
	DPCHCompressedModeInfor8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DPCHCompressedModeStatusInfo::itemsInfo[1] = {
	&TGPSReconfigurationCFN::theInfo,
};
bool DPCHCompressedModeStatusInfo::itemsPres[1] = {
	1,
};
const DPCHCompressedModeStatusInfo::Info DPCHCompressedModeStatusInfo::theInfo = {
	DPCHCompressedModeStatusInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DRXInfo::itemsInfo[1] = {
	&UEDRXCycle::theInfo,
};
bool DRXInfo::itemsPres[1] = {
	1,
};
const DRXInfo::Info DRXInfo::theInfo = {
	DRXInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DSCHMapping::itemsInfo[1] = {
	&MaxTFCIField2Value::theInfo,
};
bool DSCHMapping::itemsPres[1] = {
	1,
};
const DSCHMapping::Info DSCHMapping::theInfo = {
	DSCHMapping::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DSCHTransportChannelsInfo::itemsInfo[0] = {
};
bool DSCHTransportChannelsInfo::itemsPres[0] = {
};
const DSCHTransportChannelsInfo::Info DSCHTransportChannelsInfo::theInfo = {
	DSCHTransportChannelsInfo::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *DTXEDCHTTI10ms::itemsInfo[1] = {
	&UEDTXCycle110ms::theInfo,
};
bool DTXEDCHTTI10ms::itemsPres[1] = {
	1,
};
const DTXEDCHTTI10ms::Info DTXEDCHTTI10ms::theInfo = {
	DTXEDCHTTI10ms::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DTXEDCHTTI2ms::itemsInfo[1] = {
	&UEDTXCycle12ms::theInfo,
};
bool DTXEDCHTTI2ms::itemsPres[1] = {
	1,
};
const DTXEDCHTTI2ms::Info DTXEDCHTTI2ms::theInfo = {
	DTXEDCHTTI2ms::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DTXInfoEdchTTILength::choicesInfo[1] = {
	&DTXEDCHTTI10ms::theInfo,
};
const DTXInfoEdchTTILength::Info DTXInfoEdchTTILength::theInfo = {
	DTXInfoEdchTTILength::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *DTXInfo::itemsInfo[1] = {
	&DTXInfoEdchTTILength::theInfo,
};
bool DTXInfo::itemsPres[1] = {
	1,
};
const DTXInfo::Info DTXInfo::theInfo = {
	DTXInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DynamicTFInformationCCCH::itemsInfo[1] = {
	&OctetModeRLCSizeInfoType2::theInfo,
};
bool DynamicTFInformationCCCH::itemsPres[1] = {
	1,
};
const DynamicTFInformationCCCH::Info DynamicTFInformationCCCH::theInfo = {
	DynamicTFInformationCCCH::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *EAGCHDRXInfoTDD128EAGCHDRXInfoType::choicesInfo[1] = {
	&EAGCHDRXInfoTDD128EAGCHDRXInfoTypeSameAsHSSCCH::theInfo,
};
const EAGCHDRXInfoTDD128EAGCHDRXInfoType::Info EAGCHDRXInfoTDD128EAGCHDRXInfoType::theInfo = {
	EAGCHDRXInfoTDD128EAGCHDRXInfoType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *EAGCHDRXInfoTDD128::itemsInfo[1] = {
	&EAGCHDRXInfoTDD128EAGCHDRXInfoType::theInfo,
};
bool EAGCHDRXInfoTDD128::itemsPres[1] = {
	1,
};
const EAGCHDRXInfoTDD128::Info EAGCHDRXInfoTDD128::theInfo = {
	EAGCHDRXInfoTDD128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *EAGCHIndividual::itemsInfo[1] = {
	&EAGCHIndividualTSnumber::theInfo,
};
bool EAGCHIndividual::itemsPres[1] = {
	1,
};
const EAGCHIndividual::Info EAGCHIndividual::theInfo = {
	EAGCHIndividual::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *EAGCHIndividualVHCR::itemsInfo[1] = {
	&EAGCHIndividualVHCRTSnumber::theInfo,
};
bool EAGCHIndividualVHCR::itemsPres[1] = {
	1,
};
const EAGCHIndividualVHCR::Info EAGCHIndividualVHCR::theInfo = {
	EAGCHIndividualVHCR::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *EAGCHIndividualLCR::itemsInfo[1] = {
	&TimeslotNumberLCRr4::theInfo,
};
bool EAGCHIndividualLCR::itemsPres[1] = {
	1,
};
const EAGCHIndividualLCR::Info EAGCHIndividualLCR::theInfo = {
	EAGCHIndividualLCR::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *EAGCHInformation::itemsInfo[1] = {
	&EAGCHChannelisationCode::theInfo,
};
bool EAGCHInformation::itemsPres[1] = {
	1,
};
const EAGCHInformation::Info EAGCHInformation::theInfo = {
	EAGCHInformation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *EAGCHInformationr7ModeSpecific::choicesInfo[1] = {
	&EAGCHInformationr7ModeSpecificFdd::theInfo,
};
const EAGCHInformationr7ModeSpecific::Info EAGCHInformationr7ModeSpecific::theInfo = {
	EAGCHInformationr7ModeSpecific::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *EAGCHInformationr7::itemsInfo[1] = {
	&EAGCHInformationr7ModeSpecific::theInfo,
};
bool EAGCHInformationr7::itemsPres[1] = {
	1,
};
const EAGCHInformationr7::Info EAGCHInformationr7::theInfo = {
	EAGCHInformationr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *EAGCHInformationr8ModeSpecific::choicesInfo[1] = {
	&EAGCHInformationr8ModeSpecificFdd::theInfo,
};
const EAGCHInformationr8ModeSpecific::Info EAGCHInformationr8ModeSpecific::theInfo = {
	EAGCHInformationr8ModeSpecific::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *EAGCHInformationr8::itemsInfo[1] = {
	&EAGCHInformationr8ModeSpecific::theInfo,
};
bool EAGCHInformationr8::itemsPres[1] = {
	1,
};
const EAGCHInformationr8::Info EAGCHInformationr8::theInfo = {
	EAGCHInformationr8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *EAGCHInformationTDD128::itemsInfo[1] = {
	&EAGCHInformationTDD128RdiIndicator::theInfo,
};
bool EAGCHInformationTDD128::itemsPres[1] = {
	1,
};
const EAGCHInformationTDD128::Info EAGCHInformationTDD128::theInfo = {
	EAGCHInformationTDD128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *EDCHRLInfoNewServingCell::itemsInfo[1] = {
	&PrimaryCPICHInfo::theInfo,
};
bool EDCHRLInfoNewServingCell::itemsPres[1] = {
	0,
};
const EDCHRLInfoNewServingCell::Info EDCHRLInfoNewServingCell::theInfo = {
	EDCHRLInfoNewServingCell::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *EDCHReconfigurationInfo::itemsInfo[1] = {
	&EDCHRLInfoNewServingCell::theInfo,
};
bool EDCHReconfigurationInfo::itemsPres[1] = {
	0,
};
const EDCHReconfigurationInfo::Info EDCHReconfigurationInfo::theInfo = {
	EDCHReconfigurationInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *EDCHRLInfoNewServingCellr7::itemsInfo[1] = {
	&PrimaryCPICHInfo::theInfo,
};
bool EDCHRLInfoNewServingCellr7::itemsPres[1] = {
	0,
};
const EDCHRLInfoNewServingCellr7::Info EDCHRLInfoNewServingCellr7::theInfo = {
	EDCHRLInfoNewServingCellr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *EDCHReconfigurationInfor7::itemsInfo[1] = {
	&EDCHRLInfoNewServingCellr7::theInfo,
};
bool EDCHReconfigurationInfor7::itemsPres[1] = {
	0,
};
const EDCHReconfigurationInfor7::Info EDCHReconfigurationInfor7::theInfo = {
	EDCHReconfigurationInfor7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *EDCHRLInfoNewSecServingCell::itemsInfo[1] = {
	&EAGCHInformation::theInfo,
};
bool EDCHRLInfoNewSecServingCell::itemsPres[1] = {
	0,
};
const EDCHRLInfoNewSecServingCell::Info EDCHRLInfoNewSecServingCell::theInfo = {
	EDCHRLInfoNewSecServingCell::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *EDCHReconfigurationInfoSecULFrequency::itemsInfo[1] = {
	&EDCHRLInfoNewSecServingCell::theInfo,
};
bool EDCHReconfigurationInfoSecULFrequency::itemsPres[1] = {
	0,
};
const EDCHReconfigurationInfoSecULFrequency::Info EDCHReconfigurationInfoSecULFrequency::theInfo = {
	EDCHReconfigurationInfoSecULFrequency::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *EDCHRLInfoOtherCell::itemsInfo[1] = {
	&PrimaryCPICHInfo::theInfo,
};
bool EDCHRLInfoOtherCell::itemsPres[1] = {
	0,
};
const EDCHRLInfoOtherCell::Info EDCHRLInfoOtherCell::theInfo = {
	EDCHRLInfoOtherCell::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *EDCHRLInfoOtherCellSecULFreq::itemsInfo[1] = {
	&PrimaryCPICHInfo::theInfo,
};
bool EDCHRLInfoOtherCellSecULFreq::itemsPres[1] = {
	0,
};
const EDCHRLInfoOtherCellSecULFreq::Info EDCHRLInfoOtherCellSecULFreq::theInfo = {
	EDCHRLInfoOtherCellSecULFreq::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *EDCHRLInfoSameServingCell::itemsInfo[1] = {
	&EDPCCHDPCCHPowerOffset::theInfo,
};
bool EDCHRLInfoSameServingCell::itemsPres[1] = {
	0,
};
const EDCHRLInfoSameServingCell::Info EDCHRLInfoSameServingCell::theInfo = {
	EDCHRLInfoSameServingCell::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *EDCHSPSInformationTDD128EdchSPSOperation::choicesInfo[1] = {
	&EDCHSPSInformationTDD128EdchSPSOperationContinue::theInfo,
};
const EDCHSPSInformationTDD128EdchSPSOperation::Info EDCHSPSInformationTDD128EdchSPSOperation::theInfo = {
	EDCHSPSInformationTDD128EdchSPSOperation::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *EDCHSPSInformationTDD128::itemsInfo[1] = {
	&EDCHSPSInformationTDD128EdchSPSOperation::theInfo,
};
bool EDCHSPSInformationTDD128::itemsPres[1] = {
	1,
};
const EDCHSPSInformationTDD128::Info EDCHSPSInformationTDD128::theInfo = {
	EDCHSPSInformationTDD128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *EHICHInformationForSPSTDD128ConfigurationmodeImplicit::itemsInfo[1] = {
	&EHICHInformationForSPSTDD128ConfigurationmodeImplicitEi::theInfo,
};
bool EHICHInformationForSPSTDD128ConfigurationmodeImplicit::itemsPres[1] = {
	1,
};
const EHICHInformationForSPSTDD128ConfigurationmodeImplicit::Info EHICHInformationForSPSTDD128ConfigurationmodeImplicit::theInfo = {
	EHICHInformationForSPSTDD128ConfigurationmodeImplicit::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *EHICHInformationForSPSTDD128Configurationmode::choicesInfo[1] = {
	&EHICHInformationForSPSTDD128ConfigurationmodeImplicit::theInfo,
};
const EHICHInformationForSPSTDD128Configurationmode::Info EHICHInformationForSPSTDD128Configurationmode::theInfo = {
	EHICHInformationForSPSTDD128Configurationmode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *EHICHInformationForSPSTDD128::itemsInfo[1] = {
	&EHICHInformationForSPSTDD128Configurationmode::theInfo,
};
bool EHICHInformationForSPSTDD128::itemsPres[1] = {
	1,
};
const EHICHInformationForSPSTDD128::Info EHICHInformationForSPSTDD128::theInfo = {
	EHICHInformationForSPSTDD128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *EDCHSPSNewOperationTDD128::itemsInfo[1] = {
	&EHICHInformationForSPSTDD128::theInfo,
};
bool EDCHSPSNewOperationTDD128::itemsPres[1] = {
	0,
};
const EDCHSPSNewOperationTDD128::Info EDCHSPSNewOperationTDD128::theInfo = {
	EDCHSPSNewOperationTDD128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *EDCHTxPatternListTDD128::itemsInfo[0] = {
};
bool EDCHTxPatternListTDD128::itemsPres[0] = {
};
const EDCHTxPatternListTDD128::Info EDCHTxPatternListTDD128::theInfo = {
	EDCHTxPatternListTDD128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *EDPCCHInfo::itemsInfo[1] = {
	&EDPCCHDPCCHPowerOffset::theInfo,
};
bool EDPCCHInfo::itemsPres[1] = {
	1,
};
const EDPCCHInfo::Info EDPCCHInfo::theInfo = {
	EDPCCHInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *EDPCCHInfor7::itemsInfo[1] = {
	&EDPCCHDPCCHPowerOffset::theInfo,
};
bool EDPCCHInfor7::itemsPres[1] = {
	0,
};
const EDPCCHInfor7::Info EDPCCHInfor7::theInfo = {
	EDPCCHInfor7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *EDPDCHInfo::itemsInfo[1] = {
	&ETFCITableIndex::theInfo,
};
bool EDPDCHInfo::itemsPres[1] = {
	0,
};
const EDPDCHInfo::Info EDPDCHInfo::theInfo = {
	EDPDCHInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *EDPDCHInfor7::itemsInfo[1] = {
	&ETFCITableIndex::theInfo,
};
bool EDPDCHInfor7::itemsPres[1] = {
	0,
};
const EDPDCHInfor7::Info EDPDCHInfor7::theInfo = {
	EDPDCHInfor7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *EDPDCHInfor8::itemsInfo[1] = {
	&ETFCITableIndex::theInfo,
};
bool EDPDCHInfor8::itemsPres[1] = {
	0,
};
const EDPDCHInfor8::Info EDPDCHInfor8::theInfo = {
	EDPDCHInfor8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *EDPDCHReferenceETFCI::itemsInfo[1] = {
	&EDPDCHReferenceETFCIReferenceETFCI::theInfo,
};
bool EDPDCHReferenceETFCI::itemsPres[1] = {
	1,
};
const EDPDCHReferenceETFCI::Info EDPDCHReferenceETFCI::theInfo = {
	EDPDCHReferenceETFCI::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *EDPDCHReferenceETFCIr7::itemsInfo[1] = {
	&EDPDCHReferenceETFCIr7ReferenceETFCI::theInfo,
};
bool EDPDCHReferenceETFCIr7::itemsPres[1] = {
	1,
};
const EDPDCHReferenceETFCIr7::Info EDPDCHReferenceETFCIr7::theInfo = {
	EDPDCHReferenceETFCIr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *EDPDCHSchedulingTransmConfiguration::itemsInfo[1] = {
	&EDPDCHSchedulingTransmConfigurationMs2SchedTransmGrantHARQAlloc::theInfo,
};
bool EDPDCHSchedulingTransmConfiguration::itemsPres[1] = {
	0,
};
const EDPDCHSchedulingTransmConfiguration::Info EDPDCHSchedulingTransmConfiguration::theInfo = {
	EDPDCHSchedulingTransmConfiguration::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *EHICHInformation::itemsInfo[1] = {
	&EHICHChannelisationCode::theInfo,
};
bool EHICHInformation::itemsPres[1] = {
	1,
};
const EHICHInformation::Info EHICHInformation::theInfo = {
	EHICHInformation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *EHICHInformationCommonEdch::itemsInfo[1] = {
	&EHICHChannelisationCode::theInfo,
};
bool EHICHInformationCommonEdch::itemsPres[1] = {
	0,
};
const EHICHInformationCommonEdch::Info EHICHInformationCommonEdch::theInfo = {
	EHICHInformationCommonEdch::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *EHICHInformationTDD384768::itemsInfo[1] = {
	&EHICHInformationTDD384768NEHICH::theInfo,
};
bool EHICHInformationTDD384768::itemsPres[1] = {
	1,
};
const EHICHInformationTDD384768::Info EHICHInformationTDD384768::theInfo = {
	EHICHInformationTDD384768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *EHICHInformationLCR::itemsInfo[1] = {
	&EHICHInformationLCREi::theInfo,
};
bool EHICHInformationLCR::itemsPres[1] = {
	1,
};
const EHICHInformationLCR::Info EHICHInformationLCR::theInfo = {
	EHICHInformationLCR::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *EHICHInformationTDD128::itemsInfo[1] = {
	&EHICHInformationTDD128NEHICH::theInfo,
};
bool EHICHInformationTDD128::itemsPres[1] = {
	1,
};
const EHICHInformationTDD128::Info EHICHInformationTDD128::theInfo = {
	EHICHInformationTDD128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ReferenceBetaQPSK::itemsInfo[1] = {
	&ReferenceBetaQPSKReferenceCodeRate::theInfo,
};
bool ReferenceBetaQPSK::itemsPres[1] = {
	1,
};
const ReferenceBetaQPSK::Info ReferenceBetaQPSK::theInfo = {
	ReferenceBetaQPSK::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ETFCSInfo::itemsInfo[1] = {
	&ETFCSInfoReferenceBetaQPSKList::theInfo,
};
bool ETFCSInfo::itemsPres[1] = {
	1,
};
const ETFCSInfo::Info ETFCSInfo::theInfo = {
	ETFCSInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *EPUCHInfo::itemsInfo[1] = {
	&ETFCSInfo::theInfo,
};
bool EPUCHInfo::itemsPres[1] = {
	0,
};
const EPUCHInfo::Info EPUCHInfo::theInfo = {
	EPUCHInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *EPUCHInfoTDD128::itemsInfo[1] = {
	&ETFCSInfo::theInfo,
};
bool EPUCHInfoTDD128::itemsPres[1] = {
	0,
};
const EPUCHInfoTDD128::Info EPUCHInfoTDD128::theInfo = {
	EPUCHInfoTDD128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *EPUCHTSSlots::itemsInfo[1] = {
	&EPUCHTSSlotsTsNumber::theInfo,
};
bool EPUCHTSSlots::itemsPres[1] = {
	1,
};
const EPUCHTSSlots::Info EPUCHTSSlots::theInfo = {
	EPUCHTSSlots::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *EPUCHTSSlotsLCR::itemsInfo[1] = {
	&TimeslotNumberLCRr4::theInfo,
};
bool EPUCHTSSlotsLCR::itemsPres[1] = {
	1,
};
const EPUCHTSSlotsLCR::Info EPUCHTSSlotsLCR::theInfo = {
	EPUCHTSSlotsLCR::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ERGCHInformation::itemsInfo[1] = {
	&EHICHRGCHSignatureSequence::theInfo,
};
bool ERGCHInformation::itemsPres[1] = {
	1,
};
const ERGCHInformation::Info ERGCHInformation::theInfo = {
	ERGCHInformation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ERGCHInformationCommonEdch::itemsInfo[1] = {
	&EHICHRGCHSignatureSequence::theInfo,
};
bool ERGCHInformationCommonEdch::itemsPres[1] = {
	0,
};
const ERGCHInformationCommonEdch::Info ERGCHInformationCommonEdch::theInfo = {
	ERGCHInformationCommonEdch::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ERUCCHInfoModeSpecificInfoTdd384tdd768::itemsInfo[1] = {
	&ERUCCHInfoModeSpecificInfoTdd384tdd768ERUCCHConstantValue::theInfo,
};
bool ERUCCHInfoModeSpecificInfoTdd384tdd768::itemsPres[1] = {
	0,
};
const ERUCCHInfoModeSpecificInfoTdd384tdd768::Info ERUCCHInfoModeSpecificInfoTdd384tdd768::theInfo = {
	ERUCCHInfoModeSpecificInfoTdd384tdd768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ERUCCHInfoModeSpecificInfo::choicesInfo[1] = {
	&ERUCCHInfoModeSpecificInfoTdd384tdd768::theInfo,
};
const ERUCCHInfoModeSpecificInfo::Info ERUCCHInfoModeSpecificInfo::theInfo = {
	ERUCCHInfoModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *ERUCCHInfo::itemsInfo[1] = {
	&ERUCCHInfoModeSpecificInfo::theInfo,
};
bool ERUCCHInfo::itemsPres[1] = {
	1,
};
const ERUCCHInfo::Info ERUCCHInfo::theInfo = {
	ERUCCHInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ERUCCHInfoTDD128::itemsInfo[1] = {
	&ERUCCHInfoTDD128t_RUCCH::theInfo,
};
bool ERUCCHInfoTDD128::itemsPres[1] = {
	0,
};
const ERUCCHInfoTDD128::Info ERUCCHInfoTDD128::theInfo = {
	ERUCCHInfoTDD128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ETFCBoostInfor7::itemsInfo[1] = {
	&ETFCBoostInfor7ETFCIBoost::theInfo,
};
bool ETFCBoostInfor7::itemsPres[1] = {
	0,
};
const ETFCBoostInfor7::Info ETFCBoostInfor7::theInfo = {
	ETFCBoostInfor7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *EXTULTimingAdvanceModeSpecificInfoTdd384::itemsInfo[1] = {
	&EXTULTimingAdvanceModeSpecificInfoTdd384ExulTimingAdvance::theInfo,
};
bool EXTULTimingAdvanceModeSpecificInfoTdd384::itemsPres[1] = {
	1,
};
const EXTULTimingAdvanceModeSpecificInfoTdd384::Info EXTULTimingAdvanceModeSpecificInfoTdd384::theInfo = {
	EXTULTimingAdvanceModeSpecificInfoTdd384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *EXTULTimingAdvanceModeSpecificInfo::choicesInfo[1] = {
	&EXTULTimingAdvanceModeSpecificInfoTdd384::theInfo,
};
const EXTULTimingAdvanceModeSpecificInfo::Info EXTULTimingAdvanceModeSpecificInfo::theInfo = {
	EXTULTimingAdvanceModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *EXTULTimingAdvance::itemsInfo[1] = {
	&EXTULTimingAdvanceModeSpecificInfo::theInfo,
};
bool EXTULTimingAdvance::itemsPres[1] = {
	1,
};
const EXTULTimingAdvance::Info EXTULTimingAdvance::theInfo = {
	EXTULTimingAdvance::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *FACHPCHInformation::itemsInfo[1] = {
	&TransportFormatSet::theInfo,
};
bool FACHPCHInformation::itemsPres[1] = {
	1,
};
const FACHPCHInformation::Info FACHPCHInformation::theInfo = {
	FACHPCHInformation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *FPACHInfor4::itemsInfo[1] = {
	&TimeslotNumberLCRr4::theInfo,
};
bool FPACHInfor4::itemsPres[1] = {
	1,
};
const FPACHInfor4::Info FPACHInfor4::theInfo = {
	FPACHInfor4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *FrequencyInfoTDD::itemsInfo[1] = {
	&UARFCN::theInfo,
};
bool FrequencyInfoTDD::itemsPres[1] = {
	1,
};
const FrequencyInfoTDD::Info FrequencyInfoTDD::theInfo = {
	FrequencyInfoTDD::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *HSChannelisationCodeSetInfoLCR::itemsInfo[1] = {
	&HSChannelisationCodeLCR::theInfo,
};
bool HSChannelisationCodeSetInfoLCR::itemsPres[1] = {
	1,
};
const HSChannelisationCodeSetInfoLCR::Info HSChannelisationCodeSetInfoLCR::theInfo = {
	HSChannelisationCodeSetInfoLCR::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *HSDSCHCommonSystemInformation::itemsInfo[1] = {
	&CommonRBMappingInfo::theInfo,
};
bool HSDSCHCommonSystemInformation::itemsPres[1] = {
	1,
};
const HSDSCHCommonSystemInformation::Info HSDSCHCommonSystemInformation::theInfo = {
	HSDSCHCommonSystemInformation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *HSDSCHCommonSystemInformationTDD128::itemsInfo[1] = {
	&CommonRBMappingInfo::theInfo,
};
bool HSDSCHCommonSystemInformationTDD128::itemsPres[1] = {
	1,
};
const HSDSCHCommonSystemInformationTDD128::Info HSDSCHCommonSystemInformationTDD128::theInfo = {
	HSDSCHCommonSystemInformationTDD128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *HSDSCHDrxCellfachinfo::itemsInfo[1] = {
	&T321::theInfo,
};
bool HSDSCHDrxCellfachinfo::itemsPres[1] = {
	1,
};
const HSDSCHDrxCellfachinfo::Info HSDSCHDrxCellfachinfo::theInfo = {
	HSDSCHDrxCellfachinfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *HSDSCHDrxCellfachinfoTDD128::itemsInfo[1] = {
	&T321::theInfo,
};
bool HSDSCHDrxCellfachinfoTDD128::itemsPres[1] = {
	1,
};
const HSDSCHDrxCellfachinfoTDD128::Info HSDSCHDrxCellfachinfoTDD128::theInfo = {
	HSDSCHDrxCellfachinfoTDD128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PICHForHSDPASupportedPagingTDD128Implicit::itemsInfo[1] = {
	&OccurrenceSequenceNumberOfPICH::theInfo,
};
bool PICHForHSDPASupportedPagingTDD128Implicit::itemsPres[1] = {
	0,
};
const PICHForHSDPASupportedPagingTDD128Implicit::Info PICHForHSDPASupportedPagingTDD128Implicit::theInfo = {
	PICHForHSDPASupportedPagingTDD128Implicit::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *PICHForHSDPASupportedPagingTDD128::choicesInfo[1] = {
	&PICHForHSDPASupportedPagingTDD128Implicit::theInfo,
};
const PICHForHSDPASupportedPagingTDD128::Info PICHForHSDPASupportedPagingTDD128::theInfo = {
	PICHForHSDPASupportedPagingTDD128::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *HSDSCHPagingSystemInformationTDD128::itemsInfo[1] = {
	&HSDSCHPagingSystemInformationTDD128PichForHsdschList::theInfo,
};
bool HSDSCHPagingSystemInformationTDD128::itemsPres[1] = {
	0,
};
const HSDSCHPagingSystemInformationTDD128::Info HSDSCHPagingSystemInformationTDD128::theInfo = {
	HSDSCHPagingSystemInformationTDD128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *HSDSCHRxPatternListTDD128::itemsInfo[0] = {
};
bool HSDSCHRxPatternListTDD128::itemsPres[0] = {
};
const HSDSCHRxPatternListTDD128::Info HSDSCHRxPatternListTDD128::theInfo = {
	HSDSCHRxPatternListTDD128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *HSDSCHTbsListTDD128::itemsInfo[0] = {
};
bool HSDSCHTbsListTDD128::itemsPres[0] = {
};
const HSDSCHTbsListTDD128::Info HSDSCHTbsListTDD128::theInfo = {
	HSDSCHTbsListTDD128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *HSDSCHSPSInformationTDD128HsdschSPSOperation::choicesInfo[1] = {
	&HSDSCHSPSInformationTDD128HsdschSPSOperationContinue::theInfo,
};
const HSDSCHSPSInformationTDD128HsdschSPSOperation::Info HSDSCHSPSInformationTDD128HsdschSPSOperation::theInfo = {
	HSDSCHSPSInformationTDD128HsdschSPSOperation::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *HSDSCHSPSInformationTDD128::itemsInfo[1] = {
	&HSDSCHSPSInformationTDD128HsdschSPSOperation::theInfo,
};
bool HSDSCHSPSInformationTDD128::itemsPres[1] = {
	1,
};
const HSDSCHSPSInformationTDD128::Info HSDSCHSPSInformationTDD128::theInfo = {
	HSDSCHSPSInformationTDD128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *HSDSCHSPSNewOperationTDD128::itemsInfo[1] = {
	&HSDSCHTbsListTDD128::theInfo,
};
bool HSDSCHSPSNewOperationTDD128::itemsPres[1] = {
	0,
};
const HSDSCHSPSNewOperationTDD128::Info HSDSCHSPSNewOperationTDD128::theInfo = {
	HSDSCHSPSNewOperationTDD128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *HSPDSCHMidambleConfigurationTDD128MidambleAllocationMode::choicesInfo[1] = {
	&HSPDSCHMidambleConfigurationTDD128MidambleAllocationModeDefaultMidamble::theInfo,
};
const HSPDSCHMidambleConfigurationTDD128MidambleAllocationMode::Info HSPDSCHMidambleConfigurationTDD128MidambleAllocationMode::theInfo = {
	HSPDSCHMidambleConfigurationTDD128MidambleAllocationMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *HSPDSCHMidambleConfigurationTDD128::itemsInfo[1] = {
	&HSPDSCHMidambleConfigurationTDD128MidambleAllocationMode::theInfo,
};
bool HSPDSCHMidambleConfigurationTDD128::itemsPres[1] = {
	1,
};
const HSPDSCHMidambleConfigurationTDD128::Info HSPDSCHMidambleConfigurationTDD128::theInfo = {
	HSPDSCHMidambleConfigurationTDD128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *HSSCCHInfoModeSpecificInfoFddHSSCCHChannelisationCodeInfo::itemsInfo[0] = {
};
bool HSSCCHInfoModeSpecificInfoFddHSSCCHChannelisationCodeInfo::itemsPres[0] = {
};
const HSSCCHInfoModeSpecificInfoFddHSSCCHChannelisationCodeInfo::Info HSSCCHInfoModeSpecificInfoFddHSSCCHChannelisationCodeInfo::theInfo = {
	HSSCCHInfoModeSpecificInfoFddHSSCCHChannelisationCodeInfo::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *HSSCCHInfoModeSpecificInfoFdd::itemsInfo[1] = {
	&HSSCCHInfoModeSpecificInfoFddHSSCCHChannelisationCodeInfo::theInfo,
};
bool HSSCCHInfoModeSpecificInfoFdd::itemsPres[1] = {
	1,
};
const HSSCCHInfoModeSpecificInfoFdd::Info HSSCCHInfoModeSpecificInfoFdd::theInfo = {
	HSSCCHInfoModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *HSSCCHInfoModeSpecificInfo::choicesInfo[1] = {
	&HSSCCHInfoModeSpecificInfoFdd::theInfo,
};
const HSSCCHInfoModeSpecificInfo::Info HSSCCHInfoModeSpecificInfo::theInfo = {
	HSSCCHInfoModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *HSSCCHInfo::itemsInfo[1] = {
	&HSSCCHInfoModeSpecificInfo::theInfo,
};
bool HSSCCHInfo::itemsPres[1] = {
	1,
};
const HSSCCHInfo::Info HSSCCHInfo::theInfo = {
	HSSCCHInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *HSSCCHInfor6ModeSpecificInfoFddHSSCCHChannelisationCodeInfo::itemsInfo[0] = {
};
bool HSSCCHInfor6ModeSpecificInfoFddHSSCCHChannelisationCodeInfo::itemsPres[0] = {
};
const HSSCCHInfor6ModeSpecificInfoFddHSSCCHChannelisationCodeInfo::Info HSSCCHInfor6ModeSpecificInfoFddHSSCCHChannelisationCodeInfo::theInfo = {
	HSSCCHInfor6ModeSpecificInfoFddHSSCCHChannelisationCodeInfo::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *HSSCCHInfor6ModeSpecificInfoFdd::itemsInfo[1] = {
	&HSSCCHInfor6ModeSpecificInfoFddHSSCCHChannelisationCodeInfo::theInfo,
};
bool HSSCCHInfor6ModeSpecificInfoFdd::itemsPres[1] = {
	1,
};
const HSSCCHInfor6ModeSpecificInfoFdd::Info HSSCCHInfor6ModeSpecificInfoFdd::theInfo = {
	HSSCCHInfor6ModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *HSSCCHInfor6ModeSpecificInfo::choicesInfo[1] = {
	&HSSCCHInfor6ModeSpecificInfoFdd::theInfo,
};
const HSSCCHInfor6ModeSpecificInfo::Info HSSCCHInfor6ModeSpecificInfo::theInfo = {
	HSSCCHInfor6ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *HSSCCHInfor6::itemsInfo[1] = {
	&HSSCCHInfor6ModeSpecificInfo::theInfo,
};
bool HSSCCHInfor6::itemsPres[1] = {
	1,
};
const HSSCCHInfor6::Info HSSCCHInfor6::theInfo = {
	HSSCCHInfor6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *HSSCCHInfor7ModeSpecificInfoFddHSSCCHChannelisationCodeInfo::itemsInfo[0] = {
};
bool HSSCCHInfor7ModeSpecificInfoFddHSSCCHChannelisationCodeInfo::itemsPres[0] = {
};
const HSSCCHInfor7ModeSpecificInfoFddHSSCCHChannelisationCodeInfo::Info HSSCCHInfor7ModeSpecificInfoFddHSSCCHChannelisationCodeInfo::theInfo = {
	HSSCCHInfor7ModeSpecificInfoFddHSSCCHChannelisationCodeInfo::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *HSSCCHInfor7ModeSpecificInfoFdd::itemsInfo[1] = {
	&HSSCCHInfor7ModeSpecificInfoFddHSSCCHChannelisationCodeInfo::theInfo,
};
bool HSSCCHInfor7ModeSpecificInfoFdd::itemsPres[1] = {
	1,
};
const HSSCCHInfor7ModeSpecificInfoFdd::Info HSSCCHInfor7ModeSpecificInfoFdd::theInfo = {
	HSSCCHInfor7ModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *HSSCCHInfor7ModeSpecificInfo::choicesInfo[1] = {
	&HSSCCHInfor7ModeSpecificInfoFdd::theInfo,
};
const HSSCCHInfor7ModeSpecificInfo::Info HSSCCHInfor7ModeSpecificInfo::theInfo = {
	HSSCCHInfor7ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *HSSCCHInfor7::itemsInfo[1] = {
	&HSSCCHInfor7ModeSpecificInfo::theInfo,
};
bool HSSCCHInfor7::itemsPres[1] = {
	1,
};
const HSSCCHInfor7::Info HSSCCHInfor7::theInfo = {
	HSSCCHInfor7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *HSSCCHInfor9ModeSpecificInfoFddHSSCCHChannelisationCodeInfo::itemsInfo[0] = {
};
bool HSSCCHInfor9ModeSpecificInfoFddHSSCCHChannelisationCodeInfo::itemsPres[0] = {
};
const HSSCCHInfor9ModeSpecificInfoFddHSSCCHChannelisationCodeInfo::Info HSSCCHInfor9ModeSpecificInfoFddHSSCCHChannelisationCodeInfo::theInfo = {
	HSSCCHInfor9ModeSpecificInfoFddHSSCCHChannelisationCodeInfo::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *HSSCCHInfor9ModeSpecificInfoFdd::itemsInfo[1] = {
	&HSSCCHInfor9ModeSpecificInfoFddHSSCCHChannelisationCodeInfo::theInfo,
};
bool HSSCCHInfor9ModeSpecificInfoFdd::itemsPres[1] = {
	1,
};
const HSSCCHInfor9ModeSpecificInfoFdd::Info HSSCCHInfor9ModeSpecificInfoFdd::theInfo = {
	HSSCCHInfor9ModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *HSSCCHInfor9ModeSpecificInfo::choicesInfo[1] = {
	&HSSCCHInfor9ModeSpecificInfoFdd::theInfo,
};
const HSSCCHInfor9ModeSpecificInfo::Info HSSCCHInfor9ModeSpecificInfo::theInfo = {
	HSSCCHInfor9ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *HSSCCHInfor9::itemsInfo[1] = {
	&HSSCCHInfor9ModeSpecificInfo::theInfo,
};
bool HSSCCHInfor9::itemsPres[1] = {
	1,
};
const HSSCCHInfor9::Info HSSCCHInfor9::theInfo = {
	HSSCCHInfor9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *HSSCCHDRXInfoTDD128::itemsInfo[1] = {
	&ControlChannelDRXCycleTDD128::theInfo,
};
bool HSSCCHDRXInfoTDD128::itemsPres[1] = {
	1,
};
const HSSCCHDRXInfoTDD128::Info HSSCCHDRXInfoTDD128::theInfo = {
	HSSCCHDRXInfoTDD128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *HSSCCHLessNewOperation::itemsInfo[1] = {
	&HSSCCHLessNewOperationHspdschCodeIndex::theInfo,
};
bool HSSCCHLessNewOperation::itemsPres[1] = {
	1,
};
const HSSCCHLessNewOperation::Info HSSCCHLessNewOperation::theInfo = {
	HSSCCHLessNewOperation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *HSSCCHLessInfor7HsscchLessOperation::choicesInfo[1] = {
	&HSSCCHLessInfor7HsscchLessOperationContinue::theInfo,
};
const HSSCCHLessInfor7HsscchLessOperation::Info HSSCCHLessInfor7HsscchLessOperation::theInfo = {
	HSSCCHLessInfor7HsscchLessOperation::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *HSSCCHLessInfor7::itemsInfo[1] = {
	&HSSCCHLessInfor7HsscchLessOperation::theInfo,
};
bool HSSCCHLessInfor7::itemsPres[1] = {
	1,
};
const HSSCCHLessInfor7::Info HSSCCHLessInfor7::theInfo = {
	HSSCCHLessInfor7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *HSSCCHLessTFSList::itemsInfo[0] = {
};
bool HSSCCHLessTFSList::itemsPres[0] = {
};
const HSSCCHLessTFSList::Info HSSCCHLessTFSList::theInfo = {
	HSSCCHLessTFSList::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *HSSCCHSystemInfoTDD128HsSCCHSetConfiguration::itemsInfo[0] = {
};
bool HSSCCHSystemInfoTDD128HsSCCHSetConfiguration::itemsPres[0] = {
};
const HSSCCHSystemInfoTDD128HsSCCHSetConfiguration::Info HSSCCHSystemInfoTDD128HsSCCHSetConfiguration::theInfo = {
	HSSCCHSystemInfoTDD128HsSCCHSetConfiguration::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *HSSCCHSystemInfoTDD128::itemsInfo[1] = {
	&HSSCCHSystemInfoTDD128HsSCCHSetConfiguration::theInfo,
};
bool HSSCCHSystemInfoTDD128::itemsPres[1] = {
	0,
};
const HSSCCHSystemInfoTDD128::Info HSSCCHSystemInfoTDD128::theInfo = {
	HSSCCHSystemInfoTDD128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *HSSCCHTDD128::itemsInfo[1] = {
	&TimeslotNumberLCRr4::theInfo,
};
bool HSSCCHTDD128::itemsPres[1] = {
	1,
};
const HSSCCHTDD128::Info HSSCCHTDD128::theInfo = {
	HSSCCHTDD128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *HSSCCHTDD128r6::itemsInfo[1] = {
	&TimeslotNumberLCRr4::theInfo,
};
bool HSSCCHTDD128r6::itemsPres[1] = {
	1,
};
const HSSCCHTDD128r6::Info HSSCCHTDD128r6::theInfo = {
	HSSCCHTDD128r6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *HSSCCHTDD128MultiCarrier::itemsInfo[1] = {
	&UARFCN::theInfo,
};
bool HSSCCHTDD128MultiCarrier::itemsPres[1] = {
	1,
};
const HSSCCHTDD128MultiCarrier::Info HSSCCHTDD128MultiCarrier::theInfo = {
	HSSCCHTDD128MultiCarrier::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *HSSICHConfigurationTDD128::itemsInfo[1] = {
	&TimeslotNumberLCRr4::theInfo,
};
bool HSSICHConfigurationTDD128::itemsPres[1] = {
	1,
};
const HSSICHConfigurationTDD128::Info HSSICHConfigurationTDD128::theInfo = {
	HSSICHConfigurationTDD128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *HSSICHConfigurationTDD128r6::itemsInfo[1] = {
	&TimeslotNumberLCRr4::theInfo,
};
bool HSSICHConfigurationTDD128r6::itemsPres[1] = {
	1,
};
const HSSICHConfigurationTDD128r6::Info HSSICHConfigurationTDD128r6::theInfo = {
	HSSICHConfigurationTDD128r6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *HSSICHListTDD128::itemsInfo[0] = {
};
bool HSSICHListTDD128::itemsPres[0] = {
};
const HSSICHListTDD128::Info HSSICHListTDD128::theInfo = {
	HSSICHListTDD128::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *HSSICHReferenceSignalInfoList::itemsInfo[0] = {
};
bool HSSICHReferenceSignalInfoList::itemsPres[0] = {
};
const HSSICHReferenceSignalInfoList::Info HSSICHReferenceSignalInfoList::theInfo = {
	HSSICHReferenceSignalInfoList::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *HSSCCHTDD384::itemsInfo[1] = {
	&TimeslotNumber::theInfo,
};
bool HSSCCHTDD384::itemsPres[1] = {
	1,
};
const HSSCCHTDD384::Info HSSCCHTDD384::theInfo = {
	HSSCCHTDD384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *HSSCCHTDD384r6::itemsInfo[1] = {
	&TimeslotNumber::theInfo,
};
bool HSSCCHTDD384r6::itemsPres[1] = {
	1,
};
const HSSCCHTDD384r6::Info HSSCCHTDD384r6::theInfo = {
	HSSCCHTDD384r6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *HSSCCHTDD768::itemsInfo[1] = {
	&TimeslotNumber::theInfo,
};
bool HSSCCHTDD768::itemsPres[1] = {
	1,
};
const HSSCCHTDD768::Info HSSCCHTDD768::theInfo = {
	HSSCCHTDD768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *HSSICHConfigurationTDD384::itemsInfo[1] = {
	&TimeslotNumber::theInfo,
};
bool HSSICHConfigurationTDD384::itemsPres[1] = {
	1,
};
const HSSICHConfigurationTDD384::Info HSSICHConfigurationTDD384::theInfo = {
	HSSICHConfigurationTDD384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *HSSICHConfigurationTDD768::itemsInfo[1] = {
	&TimeslotNumber::theInfo,
};
bool HSSICHConfigurationTDD768::itemsPres[1] = {
	1,
};
const HSSICHConfigurationTDD768::Info HSSICHConfigurationTDD768::theInfo = {
	HSSICHConfigurationTDD768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *HSSICHPowerControlInfoTDD384::itemsInfo[1] = {
	&HSSICHPowerControlInfoTDD384UltargetSIR::theInfo,
};
bool HSSICHPowerControlInfoTDD384::itemsPres[1] = {
	1,
};
const HSSICHPowerControlInfoTDD384::Info HSSICHPowerControlInfoTDD384::theInfo = {
	HSSICHPowerControlInfoTDD384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *HSSICHPowerControlInfoTDD768::itemsInfo[1] = {
	&HSSICHPowerControlInfoTDD768UltargetSIR::theInfo,
};
bool HSSICHPowerControlInfoTDD768::itemsPres[1] = {
	1,
};
const HSSICHPowerControlInfoTDD768::Info HSSICHPowerControlInfoTDD768::theInfo = {
	HSSICHPowerControlInfoTDD768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MidambleShiftAndBurstTypeLCRr4MidambleAllocationMode::choicesInfo[1] = {
	&MidambleShiftAndBurstTypeLCRr4MidambleAllocationModeDefaultMidamble::theInfo,
};
const MidambleShiftAndBurstTypeLCRr4MidambleAllocationMode::Info MidambleShiftAndBurstTypeLCRr4MidambleAllocationMode::theInfo = {
	MidambleShiftAndBurstTypeLCRr4MidambleAllocationMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *MidambleShiftAndBurstTypeLCRr4::itemsInfo[1] = {
	&MidambleShiftAndBurstTypeLCRr4MidambleAllocationMode::theInfo,
};
bool MidambleShiftAndBurstTypeLCRr4::itemsPres[1] = {
	1,
};
const MidambleShiftAndBurstTypeLCRr4::Info MidambleShiftAndBurstTypeLCRr4::theInfo = {
	MidambleShiftAndBurstTypeLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *IndividualTimeslotInfoLCRr4ext::itemsInfo[1] = {
	&MidambleShiftAndBurstTypeLCRr4::theInfo,
};
bool IndividualTimeslotInfoLCRr4ext::itemsPres[1] = {
	1,
};
const IndividualTimeslotInfoLCRr4ext::Info IndividualTimeslotInfoLCRr4ext::theInfo = {
	IndividualTimeslotInfoLCRr4ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *IndividualTSInterference::itemsInfo[1] = {
	&TimeslotNumber::theInfo,
};
bool IndividualTSInterference::itemsPres[1] = {
	1,
};
const IndividualTSInterference::Info IndividualTSInterference::theInfo = {
	IndividualTSInterference::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MeasurementFeedbackInfoModeSpecificInfoFdd::itemsInfo[1] = {
	&MeasurementPowerOffset::theInfo,
};
bool MeasurementFeedbackInfoModeSpecificInfoFdd::itemsPres[1] = {
	1,
};
const MeasurementFeedbackInfoModeSpecificInfoFdd::Info MeasurementFeedbackInfoModeSpecificInfoFdd::theInfo = {
	MeasurementFeedbackInfoModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MeasurementFeedbackInfoModeSpecificInfo::choicesInfo[1] = {
	&MeasurementFeedbackInfoModeSpecificInfoFdd::theInfo,
};
const MeasurementFeedbackInfoModeSpecificInfo::Info MeasurementFeedbackInfoModeSpecificInfo::theInfo = {
	MeasurementFeedbackInfoModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *MeasurementFeedbackInfo::itemsInfo[1] = {
	&MeasurementFeedbackInfoModeSpecificInfo::theInfo,
};
bool MeasurementFeedbackInfo::itemsPres[1] = {
	1,
};
const MeasurementFeedbackInfo::Info MeasurementFeedbackInfo::theInfo = {
	MeasurementFeedbackInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MeasurementFeedbackInfor7ModeSpecificInfoFdd::itemsInfo[1] = {
	&MeasurementPowerOffset::theInfo,
};
bool MeasurementFeedbackInfor7ModeSpecificInfoFdd::itemsPres[1] = {
	1,
};
const MeasurementFeedbackInfor7ModeSpecificInfoFdd::Info MeasurementFeedbackInfor7ModeSpecificInfoFdd::theInfo = {
	MeasurementFeedbackInfor7ModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MeasurementFeedbackInfor7ModeSpecificInfo::choicesInfo[1] = {
	&MeasurementFeedbackInfor7ModeSpecificInfoFdd::theInfo,
};
const MeasurementFeedbackInfor7ModeSpecificInfo::Info MeasurementFeedbackInfor7ModeSpecificInfo::theInfo = {
	MeasurementFeedbackInfor7ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *MeasurementFeedbackInfor7::itemsInfo[1] = {
	&MeasurementFeedbackInfor7ModeSpecificInfo::theInfo,
};
bool MeasurementFeedbackInfor7::itemsPres[1] = {
	1,
};
const MeasurementFeedbackInfor7::Info MeasurementFeedbackInfor7::theInfo = {
	MeasurementFeedbackInfor7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MidambleShiftAndBurstTypeBurstTypeType1::itemsInfo[1] = {
	&MidambleConfigurationBurstType1and3::theInfo,
};
bool MidambleShiftAndBurstTypeBurstTypeType1::itemsPres[1] = {
	1,
};
const MidambleShiftAndBurstTypeBurstTypeType1::Info MidambleShiftAndBurstTypeBurstTypeType1::theInfo = {
	MidambleShiftAndBurstTypeBurstTypeType1::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MidambleShiftAndBurstTypeBurstType::choicesInfo[1] = {
	&MidambleShiftAndBurstTypeBurstTypeType1::theInfo,
};
const MidambleShiftAndBurstTypeBurstType::Info MidambleShiftAndBurstTypeBurstType::theInfo = {
	MidambleShiftAndBurstTypeBurstType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *MidambleShiftAndBurstType::itemsInfo[1] = {
	&MidambleShiftAndBurstTypeBurstType::theInfo,
};
bool MidambleShiftAndBurstType::itemsPres[1] = {
	1,
};
const MidambleShiftAndBurstType::Info MidambleShiftAndBurstType::theInfo = {
	MidambleShiftAndBurstType::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MidambleShiftAndBurstTypeVHCRBurstTypeType1::itemsInfo[1] = {
	&MidambleConfigurationBurstType1and3::theInfo,
};
bool MidambleShiftAndBurstTypeVHCRBurstTypeType1::itemsPres[1] = {
	1,
};
const MidambleShiftAndBurstTypeVHCRBurstTypeType1::Info MidambleShiftAndBurstTypeVHCRBurstTypeType1::theInfo = {
	MidambleShiftAndBurstTypeVHCRBurstTypeType1::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MidambleShiftAndBurstTypeVHCRBurstType::choicesInfo[1] = {
	&MidambleShiftAndBurstTypeVHCRBurstTypeType1::theInfo,
};
const MidambleShiftAndBurstTypeVHCRBurstType::Info MidambleShiftAndBurstTypeVHCRBurstType::theInfo = {
	MidambleShiftAndBurstTypeVHCRBurstType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *MidambleShiftAndBurstTypeVHCR::itemsInfo[1] = {
	&MidambleShiftAndBurstTypeVHCRBurstType::theInfo,
};
bool MidambleShiftAndBurstTypeVHCR::itemsPres[1] = {
	1,
};
const MidambleShiftAndBurstTypeVHCR::Info MidambleShiftAndBurstTypeVHCR::theInfo = {
	MidambleShiftAndBurstTypeVHCR::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MidambleShiftAndBurstTyper7BurstTypeType1::itemsInfo[1] = {
	&MidambleConfigurationBurstType1and3::theInfo,
};
bool MidambleShiftAndBurstTyper7BurstTypeType1::itemsPres[1] = {
	1,
};
const MidambleShiftAndBurstTyper7BurstTypeType1::Info MidambleShiftAndBurstTyper7BurstTypeType1::theInfo = {
	MidambleShiftAndBurstTyper7BurstTypeType1::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MidambleShiftAndBurstTyper7BurstType::choicesInfo[1] = {
	&MidambleShiftAndBurstTyper7BurstTypeType1::theInfo,
};
const MidambleShiftAndBurstTyper7BurstType::Info MidambleShiftAndBurstTyper7BurstType::theInfo = {
	MidambleShiftAndBurstTyper7BurstType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *MidambleShiftAndBurstTyper7::itemsInfo[1] = {
	&MidambleShiftAndBurstTyper7BurstType::theInfo,
};
bool MidambleShiftAndBurstTyper7::itemsPres[1] = {
	1,
};
const MidambleShiftAndBurstTyper7::Info MidambleShiftAndBurstTyper7::theInfo = {
	MidambleShiftAndBurstTyper7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MidambleShiftAndBurstTypeDLBurstTypeType1::itemsInfo[1] = {
	&MidambleConfigurationBurstType1and3::theInfo,
};
bool MidambleShiftAndBurstTypeDLBurstTypeType1::itemsPres[1] = {
	1,
};
const MidambleShiftAndBurstTypeDLBurstTypeType1::Info MidambleShiftAndBurstTypeDLBurstTypeType1::theInfo = {
	MidambleShiftAndBurstTypeDLBurstTypeType1::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MidambleShiftAndBurstTypeDLBurstType::choicesInfo[1] = {
	&MidambleShiftAndBurstTypeDLBurstTypeType1::theInfo,
};
const MidambleShiftAndBurstTypeDLBurstType::Info MidambleShiftAndBurstTypeDLBurstType::theInfo = {
	MidambleShiftAndBurstTypeDLBurstType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *MidambleShiftAndBurstTypeDL::itemsInfo[1] = {
	&MidambleShiftAndBurstTypeDLBurstType::theInfo,
};
bool MidambleShiftAndBurstTypeDL::itemsPres[1] = {
	1,
};
const MidambleShiftAndBurstTypeDL::Info MidambleShiftAndBurstTypeDL::theInfo = {
	MidambleShiftAndBurstTypeDL::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MidambleShiftAndBurstTypeDLVHCRBurstTypeType1::itemsInfo[1] = {
	&MidambleConfigurationBurstType1and3::theInfo,
};
bool MidambleShiftAndBurstTypeDLVHCRBurstTypeType1::itemsPres[1] = {
	1,
};
const MidambleShiftAndBurstTypeDLVHCRBurstTypeType1::Info MidambleShiftAndBurstTypeDLVHCRBurstTypeType1::theInfo = {
	MidambleShiftAndBurstTypeDLVHCRBurstTypeType1::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MidambleShiftAndBurstTypeDLVHCRBurstType::choicesInfo[1] = {
	&MidambleShiftAndBurstTypeDLVHCRBurstTypeType1::theInfo,
};
const MidambleShiftAndBurstTypeDLVHCRBurstType::Info MidambleShiftAndBurstTypeDLVHCRBurstType::theInfo = {
	MidambleShiftAndBurstTypeDLVHCRBurstType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *MidambleShiftAndBurstTypeDLVHCR::itemsInfo[1] = {
	&MidambleShiftAndBurstTypeDLVHCRBurstType::theInfo,
};
bool MidambleShiftAndBurstTypeDLVHCR::itemsPres[1] = {
	1,
};
const MidambleShiftAndBurstTypeDLVHCR::Info MidambleShiftAndBurstTypeDLVHCR::theInfo = {
	MidambleShiftAndBurstTypeDLVHCR::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MidambleShiftAndBurstTypeEDCHBurstTypeType1::itemsInfo[1] = {
	&MidambleConfigurationBurstType1::theInfo,
};
bool MidambleShiftAndBurstTypeEDCHBurstTypeType1::itemsPres[1] = {
	1,
};
const MidambleShiftAndBurstTypeEDCHBurstTypeType1::Info MidambleShiftAndBurstTypeEDCHBurstTypeType1::theInfo = {
	MidambleShiftAndBurstTypeEDCHBurstTypeType1::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MidambleShiftAndBurstTypeEDCHBurstType::choicesInfo[1] = {
	&MidambleShiftAndBurstTypeEDCHBurstTypeType1::theInfo,
};
const MidambleShiftAndBurstTypeEDCHBurstType::Info MidambleShiftAndBurstTypeEDCHBurstType::theInfo = {
	MidambleShiftAndBurstTypeEDCHBurstType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *MidambleShiftAndBurstTypeEDCH::itemsInfo[1] = {
	&MidambleShiftAndBurstTypeEDCHBurstType::theInfo,
};
bool MidambleShiftAndBurstTypeEDCH::itemsPres[1] = {
	1,
};
const MidambleShiftAndBurstTypeEDCH::Info MidambleShiftAndBurstTypeEDCH::theInfo = {
	MidambleShiftAndBurstTypeEDCH::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MIMOParametersr7::itemsInfo[1] = {
	&MIMOOperation::theInfo,
};
bool MIMOParametersr7::itemsPres[1] = {
	0,
};
const MIMOParametersr7::Info MIMOParametersr7::theInfo = {
	MIMOParametersr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *MIMOParametersv7g0ext::itemsInfo[1] = {
	&MIMOParametersv7g0extprecodingWeightSetRestriction::theInfo,
};
bool MIMOParametersv7g0ext::itemsPres[1] = {
	0,
};
const MIMOParametersv7g0ext::Info MIMOParametersv7g0ext::theInfo = {
	MIMOParametersv7g0ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *MIMOParametersr8::itemsInfo[1] = {
	&MIMOOperation::theInfo,
};
bool MIMOParametersr8::itemsPres[1] = {
	1,
};
const MIMOParametersr8::Info MIMOParametersr8::theInfo = {
	MIMOParametersr8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MIMOParametersr9::itemsInfo[1] = {
	&MIMOOperation::theInfo,
};
bool MIMOParametersr9::itemsPres[1] = {
	1,
};
const MIMOParametersr9::Info MIMOParametersr9::theInfo = {
	MIMOParametersr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MIMOPilotConfigurationSecondCPICHPattern::choicesInfo[1] = {
	&MIMOPilotConfigurationSecondCPICHPatternNormalPattern::theInfo,
};
const MIMOPilotConfigurationSecondCPICHPattern::Info MIMOPilotConfigurationSecondCPICHPattern::theInfo = {
	MIMOPilotConfigurationSecondCPICHPattern::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *MIMOPilotConfiguration::itemsInfo[1] = {
	&MIMOPilotConfigurationSecondCPICHPattern::theInfo,
};
bool MIMOPilotConfiguration::itemsPres[1] = {
	1,
};
const MIMOPilotConfiguration::Info MIMOPilotConfiguration::theInfo = {
	MIMOPilotConfiguration::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MIMOPilotConfigurationv7f0ext::itemsInfo[1] = {
	&SCPICHPowerOffsetMIMO::theInfo,
};
bool MIMOPilotConfigurationv7f0ext::itemsPres[1] = {
	0,
};
const MIMOPilotConfigurationv7f0ext::Info MIMOPilotConfigurationv7f0ext::theInfo = {
	MIMOPilotConfigurationv7f0ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *MIMOPilotConfigurationr9SecondCPICHPattern::choicesInfo[1] = {
	&MIMOPilotConfigurationr9SecondCPICHPatternNormalPattern::theInfo,
};
const MIMOPilotConfigurationr9SecondCPICHPattern::Info MIMOPilotConfigurationr9SecondCPICHPattern::theInfo = {
	MIMOPilotConfigurationr9SecondCPICHPattern::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *MIMOPilotConfigurationr9::itemsInfo[1] = {
	&MIMOPilotConfigurationr9SecondCPICHPattern::theInfo,
};
bool MIMOPilotConfigurationr9::itemsPres[1] = {
	1,
};
const MIMOPilotConfigurationr9::Info MIMOPilotConfigurationr9::theInfo = {
	MIMOPilotConfigurationr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MultifrequencyInfoLCRr7::itemsInfo[1] = {
	&FrequencyInfoTDD::theInfo,
};
bool MultifrequencyInfoLCRr7::itemsPres[1] = {
	0,
};
const MultifrequencyInfoLCRr7::Info MultifrequencyInfoLCRr7::theInfo = {
	MultifrequencyInfoLCRr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *NewTiming::itemsInfo[1] = {
	&EnablingDelay::theInfo,
};
bool NewTiming::itemsPres[1] = {
	1,
};
const NewTiming::Info NewTiming::theInfo = {
	NewTiming::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *NonScheduledTransGrantInfoTDDTdd384768::itemsInfo[1] = {
	&NonScheduledTransGrantInfoTDDTdd384768TimeslotResourceRelatedInfo::theInfo,
};
bool NonScheduledTransGrantInfoTDDTdd384768::itemsPres[1] = {
	1,
};
const NonScheduledTransGrantInfoTDDTdd384768::Info NonScheduledTransGrantInfoTDDTdd384768::theInfo = {
	NonScheduledTransGrantInfoTDDTdd384768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *NonScheduledTransGrantInfoTDD::choicesInfo[1] = {
	&NonScheduledTransGrantInfoTDDTdd384768::theInfo,
};
const NonScheduledTransGrantInfoTDD::Info NonScheduledTransGrantInfoTDD::theInfo = {
	NonScheduledTransGrantInfoTDD::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *NonScheduledTransGrantInfoTDDext::choicesInfo[1] = {
	&NonScheduledTransGrantInfoTDDextTdd384768::theInfo,
};
const NonScheduledTransGrantInfoTDDext::Info NonScheduledTransGrantInfoTDDext::theInfo = {
	NonScheduledTransGrantInfoTDDext::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *NonScheduledTransGrantInfoTDDr9Tdd384768::itemsInfo[1] = {
	&NonScheduledTransGrantInfoTDDr9Tdd384768TimeslotResourceRelatedInfo::theInfo,
};
bool NonScheduledTransGrantInfoTDDr9Tdd384768::itemsPres[1] = {
	0,
};
const NonScheduledTransGrantInfoTDDr9Tdd384768::Info NonScheduledTransGrantInfoTDDr9Tdd384768::theInfo = {
	NonScheduledTransGrantInfoTDDr9Tdd384768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *NonScheduledTransGrantInfoTDDr9::choicesInfo[1] = {
	&NonScheduledTransGrantInfoTDDr9Tdd384768::theInfo,
};
const NonScheduledTransGrantInfoTDDr9::Info NonScheduledTransGrantInfoTDDr9::theInfo = {
	NonScheduledTransGrantInfoTDDr9::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *OpenLoopPowerControlTDD::itemsInfo[1] = {
	&PrimaryCCPCHTXPower::theInfo,
};
bool OpenLoopPowerControlTDD::itemsPres[1] = {
	0,
};
const OpenLoopPowerControlTDD::Info OpenLoopPowerControlTDD::theInfo = {
	OpenLoopPowerControlTDD::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *OpenLoopPowerControlIPDLTDDr4::itemsInfo[1] = {
	&Alpha::theInfo,
};
bool OpenLoopPowerControlIPDLTDDr4::itemsPres[1] = {
	1,
};
const OpenLoopPowerControlIPDLTDDr4::Info OpenLoopPowerControlIPDLTDDr4::theInfo = {
	OpenLoopPowerControlIPDLTDDr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PCCHInformationListPagingassociatedHspdschInfo::itemsInfo[0] = {
};
bool PCCHInformationListPagingassociatedHspdschInfo::itemsPres[0] = {
};
const PCCHInformationListPagingassociatedHspdschInfo::Info PCCHInformationListPagingassociatedHspdschInfo::theInfo = {
	PCCHInformationListPagingassociatedHspdschInfo::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *PCCHInformationList::itemsInfo[1] = {
	&PCCHInformationListPagingassociatedHspdschInfo::theInfo,
};
bool PCCHInformationList::itemsPres[1] = {
	1,
};
const PCCHInformationList::Info PCCHInformationList::theInfo = {
	PCCHInformationList::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PCPCHChannelInfo::itemsInfo[1] = {
	&PCPCHChannelInfoPcpchULScramblingCode::theInfo,
};
bool PCPCHChannelInfo::itemsPres[1] = {
	0,
};
const PCPCHChannelInfo::Info PCPCHChannelInfo::theInfo = {
	PCPCHChannelInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *PDSCHCapacityAllocationInfor4::itemsInfo[1] = {
	&AllocationPeriodInfo::theInfo,
};
bool PDSCHCapacityAllocationInfor4::itemsPres[1] = {
	0,
};
const PDSCHCapacityAllocationInfor4::Info PDSCHCapacityAllocationInfor4::theInfo = {
	PDSCHCapacityAllocationInfor4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *PDSCHCapacityAllocationInfor7::itemsInfo[1] = {
	&AllocationPeriodInfo::theInfo,
};
bool PDSCHCapacityAllocationInfor7::itemsPres[1] = {
	0,
};
const PDSCHCapacityAllocationInfor7::Info PDSCHCapacityAllocationInfor7::theInfo = {
	PDSCHCapacityAllocationInfor7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *PDSCHCodeInfo::itemsInfo[1] = {
	&SFPDSCH::theInfo,
};
bool PDSCHCodeInfo::itemsPres[1] = {
	1,
};
const PDSCHCodeInfo::Info PDSCHCodeInfo::theInfo = {
	PDSCHCodeInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PDSCHInfo::itemsInfo[1] = {
	&TFCSIdentityPlain::theInfo,
};
bool PDSCHInfo::itemsPres[1] = {
	0,
};
const PDSCHInfo::Info PDSCHInfo::theInfo = {
	PDSCHInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *PDSCHInfor4::itemsInfo[1] = {
	&TFCSIdentityPlain::theInfo,
};
bool PDSCHInfor4::itemsPres[1] = {
	0,
};
const PDSCHInfor4::Info PDSCHInfor4::theInfo = {
	PDSCHInfor4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *PDSCHInfor7::itemsInfo[1] = {
	&TFCSIdentityPlain::theInfo,
};
bool PDSCHInfor7::itemsPres[1] = {
	0,
};
const PDSCHInfor7::Info PDSCHInfor7::theInfo = {
	PDSCHInfor7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *PDSCHInfoLCRr4::itemsInfo[1] = {
	&TFCSIdentityPlain::theInfo,
};
bool PDSCHInfoLCRr4::itemsPres[1] = {
	0,
};
const PDSCHInfoLCRr4::Info PDSCHInfoLCRr4::theInfo = {
	PDSCHInfoLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *PDSCHPowerControlInfo::itemsInfo[1] = {
	&TPCStepSizeTDD::theInfo,
};
bool PDSCHPowerControlInfo::itemsPres[1] = {
	0,
};
const PDSCHPowerControlInfo::Info PDSCHPowerControlInfo::theInfo = {
	PDSCHPowerControlInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *PDSCHSysInfo::itemsInfo[1] = {
	&PDSCHIdentity::theInfo,
};
bool PDSCHSysInfo::itemsPres[1] = {
	0,
};
const PDSCHSysInfo::Info PDSCHSysInfo::theInfo = {
	PDSCHSysInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *PDSCHSysInfoVHCRr7::itemsInfo[1] = {
	&PDSCHIdentity::theInfo,
};
bool PDSCHSysInfoVHCRr7::itemsPres[1] = {
	0,
};
const PDSCHSysInfoVHCRr7::Info PDSCHSysInfoVHCRr7::theInfo = {
	PDSCHSysInfoVHCRr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *PDSCHSysInfoHCRr5::itemsInfo[1] = {
	&PDSCHIdentity::theInfo,
};
bool PDSCHSysInfoHCRr5::itemsPres[1] = {
	0,
};
const PDSCHSysInfoHCRr5::Info PDSCHSysInfoHCRr5::theInfo = {
	PDSCHSysInfoHCRr5::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *PDSCHSysInfoLCRr4::itemsInfo[1] = {
	&PDSCHIdentity::theInfo,
};
bool PDSCHSysInfoLCRr4::itemsPres[1] = {
	0,
};
const PDSCHSysInfoLCRr4::Info PDSCHSysInfoLCRr4::theInfo = {
	PDSCHSysInfoLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *PDSCHSysInfoListSFN::itemsInfo[0] = {
};
bool PDSCHSysInfoListSFN::itemsPres[0] = {
};
const PDSCHSysInfoListSFN::Info PDSCHSysInfoListSFN::theInfo = {
	PDSCHSysInfoListSFN::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *PDSCHSysInfoListSFNHCRr5::itemsInfo[0] = {
};
bool PDSCHSysInfoListSFNHCRr5::itemsPres[0] = {
};
const PDSCHSysInfoListSFNHCRr5::Info PDSCHSysInfoListSFNHCRr5::theInfo = {
	PDSCHSysInfoListSFNHCRr5::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *PDSCHSysInfoListSFNLCRr4::itemsInfo[0] = {
};
bool PDSCHSysInfoListSFNLCRr4::itemsPres[0] = {
};
const PDSCHSysInfoListSFNLCRr4::Info PDSCHSysInfoListSFNLCRr4::theInfo = {
	PDSCHSysInfoListSFNLCRr4::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *PICHInfoFdd::itemsInfo[1] = {
	&ChannelisationCode256::theInfo,
};
bool PICHInfoFdd::itemsPres[1] = {
	0,
};
const PICHInfoFdd::Info PICHInfoFdd::theInfo = {
	PICHInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *PICHInfo::choicesInfo[1] = {
	&PICHInfoFdd::theInfo,
};
const PICHInfo::Info PICHInfo::theInfo = {
	PICHInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *PICHForHSDPASupportedPaging::itemsInfo[1] = {
	&PICHInfo::theInfo,
};
bool PICHForHSDPASupportedPaging::itemsPres[1] = {
	1,
};
const PICHForHSDPASupportedPaging::Info PICHForHSDPASupportedPaging::theInfo = {
	PICHForHSDPASupportedPaging::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PICHInfoHCRVHCRr7ChannelisationCode::choicesInfo[1] = {
	&TDDPICHCCode::theInfo,
};
const PICHInfoHCRVHCRr7ChannelisationCode::Info PICHInfoHCRVHCRr7ChannelisationCode::theInfo = {
	PICHInfoHCRVHCRr7ChannelisationCode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *PICHInfoHCRVHCRr7::itemsInfo[1] = {
	&PICHInfoHCRVHCRr7ChannelisationCode::theInfo,
};
bool PICHInfoHCRVHCRr7::itemsPres[1] = {
	0,
};
const PICHInfoHCRVHCRr7::Info PICHInfoHCRVHCRr7::theInfo = {
	PICHInfoHCRVHCRr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *PLCCHInfo::itemsInfo[1] = {
	&PLCCHInfoPlcchSequenceNumber::theInfo,
};
bool PLCCHInfo::itemsPres[1] = {
	1,
};
const PLCCHInfo::Info PLCCHInfo::theInfo = {
	PLCCHInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PowerControlAlgorithm::choicesInfo[1] = {
	&TPCStepSizeFDD::theInfo,
};
const PowerControlAlgorithm::Info PowerControlAlgorithm::theInfo = {
	PowerControlAlgorithm::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *PRACHDefinitionLCRr4::itemsInfo[1] = {
	&TimeslotNumberPRACHLCRr4::theInfo,
};
bool PRACHDefinitionLCRr4::itemsPres[1] = {
	1,
};
const PRACHDefinitionLCRr4::Info PRACHDefinitionLCRr4::theInfo = {
	PRACHDefinitionLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PRACHInformationLCR::itemsInfo[1] = {
	&TimeslotNumberPRACHLCRr4::theInfo,
};
bool PRACHInformationLCR::itemsPres[1] = {
	0,
};
const PRACHInformationLCR::Info PRACHInformationLCR::theInfo = {
	PRACHInformationLCR::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *PRACHPartitioning::choicesInfo[1] = {
	&PRACHPartitioningFdd::theInfo,
};
const PRACHPartitioning::Info PRACHPartitioning::theInfo = {
	PRACHPartitioning::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *PRACHPartitioningr7::choicesInfo[1] = {
	&PRACHPartitioningr7Fdd::theInfo,
};
const PRACHPartitioningr7::Info PRACHPartitioningr7::theInfo = {
	PRACHPartitioningr7::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *PRACHPowerOffset::itemsInfo[1] = {
	&PowerRampStep::theInfo,
};
bool PRACHPowerOffset::itemsPres[1] = {
	1,
};
const PRACHPowerOffset::Info PRACHPowerOffset::theInfo = {
	PRACHPowerOffset::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PRACHRACHInfoModeSpecificInfoFdd::itemsInfo[1] = {
	&AvailableSignatures::theInfo,
};
bool PRACHRACHInfoModeSpecificInfoFdd::itemsPres[1] = {
	1,
};
const PRACHRACHInfoModeSpecificInfoFdd::Info PRACHRACHInfoModeSpecificInfoFdd::theInfo = {
	PRACHRACHInfoModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PRACHRACHInfoModeSpecificInfo::choicesInfo[1] = {
	&PRACHRACHInfoModeSpecificInfoFdd::theInfo,
};
const PRACHRACHInfoModeSpecificInfo::Info PRACHRACHInfoModeSpecificInfo::theInfo = {
	PRACHRACHInfoModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *PRACHRACHInfo::itemsInfo[1] = {
	&PRACHRACHInfoModeSpecificInfo::theInfo,
};
bool PRACHRACHInfo::itemsPres[1] = {
	1,
};
const PRACHRACHInfo::Info PRACHRACHInfo::theInfo = {
	PRACHRACHInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PRACHRACHInfoVHCRr7::itemsInfo[1] = {
	&TimeslotNumber::theInfo,
};
bool PRACHRACHInfoVHCRr7::itemsPres[1] = {
	1,
};
const PRACHRACHInfoVHCRr7::Info PRACHRACHInfoVHCRr7::theInfo = {
	PRACHRACHInfoVHCRr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PRACHRACHInfoLCRv770ext::itemsInfo[1] = {
	&SyncULCodesBitmap::theInfo,
};
bool PRACHRACHInfoLCRv770ext::itemsPres[1] = {
	1,
};
const PRACHRACHInfoLCRv770ext::Info PRACHRACHInfoLCRv770ext::theInfo = {
	PRACHRACHInfoLCRv770ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *SYNCULInfor4::itemsInfo[1] = {
	&SyncULCodesBitmap::theInfo,
};
bool SYNCULInfor4::itemsPres[1] = {
	1,
};
const SYNCULInfor4::Info SYNCULInfor4::theInfo = {
	SYNCULInfor4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PRACHRACHInfoLCRr4::itemsInfo[1] = {
	&SYNCULInfor4::theInfo,
};
bool PRACHRACHInfoLCRr4::itemsPres[1] = {
	1,
};
const PRACHRACHInfoLCRr4::Info PRACHRACHInfoLCRr4::theInfo = {
	PRACHRACHInfoLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PRACHSystemInformation::itemsInfo[1] = {
	&PRACHRACHInfo::theInfo,
};
bool PRACHSystemInformation::itemsPres[1] = {
	1,
};
const PRACHSystemInformation::Info PRACHSystemInformation::theInfo = {
	PRACHSystemInformation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PRACHSystemInformationVHCRr7::itemsInfo[1] = {
	&PRACHRACHInfoVHCRr7::theInfo,
};
bool PRACHSystemInformationVHCRr7::itemsPres[1] = {
	0,
};
const PRACHSystemInformationVHCRr7::Info PRACHSystemInformationVHCRr7::theInfo = {
	PRACHSystemInformationVHCRr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *PRACHSystemInformationLCRr4::itemsInfo[1] = {
	&PRACHRACHInfoLCRr4::theInfo,
};
bool PRACHSystemInformationLCRr4::itemsPres[1] = {
	0,
};
const PRACHSystemInformationLCRr4::Info PRACHSystemInformationLCRr4::theInfo = {
	PRACHSystemInformationLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *PRACHSystemInformationLCRv770ext::itemsInfo[1] = {
	&PRACHRACHInfoLCRv770ext::theInfo,
};
bool PRACHSystemInformationLCRv770ext::itemsPres[1] = {
	1,
};
const PRACHSystemInformationLCRv770ext::Info PRACHSystemInformationLCRv770ext::theInfo = {
	PRACHSystemInformationLCRv770ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ULDPCHPowerControlInfoPredef::choicesInfo[1] = {
	&ULDPCHPowerControlInfoPredefFdd::theInfo,
};
const ULDPCHPowerControlInfoPredef::Info ULDPCHPowerControlInfoPredef::theInfo = {
	ULDPCHPowerControlInfoPredef::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *ULDPCHInfoPredef::itemsInfo[1] = {
	&ULDPCHPowerControlInfoPredef::theInfo,
};
bool ULDPCHInfoPredef::itemsPres[1] = {
	1,
};
const ULDPCHInfoPredef::Info ULDPCHInfoPredef::theInfo = {
	ULDPCHInfoPredef::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PreDefPhyChConfiguration::itemsInfo[1] = {
	&ULDPCHInfoPredef::theInfo,
};
bool PreDefPhyChConfiguration::itemsPres[1] = {
	0,
};
const PreDefPhyChConfiguration::Info PreDefPhyChConfiguration::theInfo = {
	PreDefPhyChConfiguration::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *PrimaryCCPCHInfo::choicesInfo[1] = {
	&PrimaryCCPCHInfoFdd::theInfo,
};
const PrimaryCCPCHInfo::Info PrimaryCCPCHInfo::theInfo = {
	PrimaryCCPCHInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *PrimaryCCPCHInfor4::choicesInfo[1] = {
	&PrimaryCCPCHInfor4Fdd::theInfo,
};
const PrimaryCCPCHInfor4::Info PrimaryCCPCHInfor4::theInfo = {
	PrimaryCCPCHInfor4::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *PrimaryCCPCHInfoLCRr4::itemsInfo[1] = {
	&PrimaryCCPCHInfoLCRr4TstdIndicator::theInfo,
};
bool PrimaryCCPCHInfoLCRr4::itemsPres[1] = {
	1,
};
const PrimaryCCPCHInfoLCRr4::Info PrimaryCCPCHInfoLCRr4::theInfo = {
	PrimaryCCPCHInfoLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PrimaryCCPCHInfoLCRr4ext::itemsInfo[1] = {
	&PrimaryCCPCHInfoLCRr4extTstdIndicator::theInfo,
};
bool PrimaryCCPCHInfoLCRr4ext::itemsPres[1] = {
	1,
};
const PrimaryCCPCHInfoLCRr4ext::Info PrimaryCCPCHInfoLCRr4ext::theInfo = {
	PrimaryCCPCHInfoLCRr4ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PUSCHCapacityAllocationInfoPuschAllocation::choicesInfo[1] = {
	&PUSCHCapacityAllocationInfoPuschAllocationPuschAllocationPending::theInfo,
};
const PUSCHCapacityAllocationInfoPuschAllocation::Info PUSCHCapacityAllocationInfoPuschAllocation::theInfo = {
	PUSCHCapacityAllocationInfoPuschAllocation::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *PUSCHCapacityAllocationInfo::itemsInfo[1] = {
	&PUSCHCapacityAllocationInfoPuschAllocation::theInfo,
};
bool PUSCHCapacityAllocationInfo::itemsPres[1] = {
	0,
};
const PUSCHCapacityAllocationInfo::Info PUSCHCapacityAllocationInfo::theInfo = {
	PUSCHCapacityAllocationInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *PUSCHCapacityAllocationInfor4PuschAllocation::choicesInfo[1] = {
	&PUSCHCapacityAllocationInfor4PuschAllocationPuschAllocationPending::theInfo,
};
const PUSCHCapacityAllocationInfor4PuschAllocation::Info PUSCHCapacityAllocationInfor4PuschAllocation::theInfo = {
	PUSCHCapacityAllocationInfor4PuschAllocation::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *PUSCHCapacityAllocationInfor4::itemsInfo[1] = {
	&PUSCHCapacityAllocationInfor4PuschAllocation::theInfo,
};
bool PUSCHCapacityAllocationInfor4::itemsPres[1] = {
	0,
};
const PUSCHCapacityAllocationInfor4::Info PUSCHCapacityAllocationInfor4::theInfo = {
	PUSCHCapacityAllocationInfor4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *PUSCHCapacityAllocationInfor7PuschAllocation::choicesInfo[1] = {
	&PUSCHCapacityAllocationInfor7PuschAllocationPuschAllocationPending::theInfo,
};
const PUSCHCapacityAllocationInfor7PuschAllocation::Info PUSCHCapacityAllocationInfor7PuschAllocation::theInfo = {
	PUSCHCapacityAllocationInfor7PuschAllocation::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *PUSCHCapacityAllocationInfor7::itemsInfo[1] = {
	&PUSCHCapacityAllocationInfor7PuschAllocation::theInfo,
};
bool PUSCHCapacityAllocationInfor7::itemsPres[1] = {
	0,
};
const PUSCHCapacityAllocationInfor7::Info PUSCHCapacityAllocationInfor7::theInfo = {
	PUSCHCapacityAllocationInfor7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *PUSCHInfo::itemsInfo[1] = {
	&TFCSIdentityPlain::theInfo,
};
bool PUSCHInfo::itemsPres[1] = {
	0,
};
const PUSCHInfo::Info PUSCHInfo::theInfo = {
	PUSCHInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *PUSCHInfor4::itemsInfo[1] = {
	&TFCSIdentityPlain::theInfo,
};
bool PUSCHInfor4::itemsPres[1] = {
	0,
};
const PUSCHInfor4::Info PUSCHInfor4::theInfo = {
	PUSCHInfor4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *PUSCHInfoVHCR::itemsInfo[1] = {
	&TFCSIdentityPlain::theInfo,
};
bool PUSCHInfoVHCR::itemsPres[1] = {
	0,
};
const PUSCHInfoVHCR::Info PUSCHInfoVHCR::theInfo = {
	PUSCHInfoVHCR::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *PUSCHInfoLCRr4::itemsInfo[1] = {
	&TFCSIdentityPlain::theInfo,
};
bool PUSCHInfoLCRr4::itemsPres[1] = {
	0,
};
const PUSCHInfoLCRr4::Info PUSCHInfoLCRr4::theInfo = {
	PUSCHInfoLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *PUSCHPowerControlInfor4::itemsInfo[1] = {
	&ULTargetSIR::theInfo,
};
bool PUSCHPowerControlInfor4::itemsPres[1] = {
	1,
};
const PUSCHPowerControlInfor4::Info PUSCHPowerControlInfor4::theInfo = {
	PUSCHPowerControlInfor4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PUSCHPowerControlInfor7::itemsInfo[1] = {
	&ULTargetSIR::theInfo,
};
bool PUSCHPowerControlInfor7::itemsPres[1] = {
	1,
};
const PUSCHPowerControlInfor7::Info PUSCHPowerControlInfor7::theInfo = {
	PUSCHPowerControlInfor7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PUSCHSysInfo::itemsInfo[1] = {
	&PUSCHIdentity::theInfo,
};
bool PUSCHSysInfo::itemsPres[1] = {
	0,
};
const PUSCHSysInfo::Info PUSCHSysInfo::theInfo = {
	PUSCHSysInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *PUSCHSysInfoVHCR::itemsInfo[1] = {
	&PUSCHIdentity::theInfo,
};
bool PUSCHSysInfoVHCR::itemsPres[1] = {
	0,
};
const PUSCHSysInfoVHCR::Info PUSCHSysInfoVHCR::theInfo = {
	PUSCHSysInfoVHCR::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *PUSCHSysInfoHCRr5::itemsInfo[1] = {
	&PUSCHIdentity::theInfo,
};
bool PUSCHSysInfoHCRr5::itemsPres[1] = {
	0,
};
const PUSCHSysInfoHCRr5::Info PUSCHSysInfoHCRr5::theInfo = {
	PUSCHSysInfoHCRr5::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *PUSCHSysInfoLCRr4::itemsInfo[1] = {
	&PUSCHIdentity::theInfo,
};
bool PUSCHSysInfoLCRr4::itemsPres[1] = {
	0,
};
const PUSCHSysInfoLCRr4::Info PUSCHSysInfoLCRr4::theInfo = {
	PUSCHSysInfoLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *PUSCHSysInfoListSFN::itemsInfo[0] = {
};
bool PUSCHSysInfoListSFN::itemsPres[0] = {
};
const PUSCHSysInfoListSFN::Info PUSCHSysInfoListSFN::theInfo = {
	PUSCHSysInfoListSFN::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *PUSCHSysInfoListSFNHCRr5::itemsInfo[0] = {
};
bool PUSCHSysInfoListSFNHCRr5::itemsPres[0] = {
};
const PUSCHSysInfoListSFNHCRr5::Info PUSCHSysInfoListSFNHCRr5::theInfo = {
	PUSCHSysInfoListSFNHCRr5::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *PUSCHSysInfoListSFNLCRr4::itemsInfo[0] = {
};
bool PUSCHSysInfoListSFNLCRr4::itemsPres[0] = {
};
const PUSCHSysInfoListSFNLCRr4::Info PUSCHSysInfoListSFNLCRr4::theInfo = {
	PUSCHSysInfoListSFNLCRr4::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *PUSCHSysInfoListSFNVHCR::itemsInfo[0] = {
};
bool PUSCHSysInfoListSFNVHCR::itemsPres[0] = {
};
const PUSCHSysInfoListSFNVHCR::Info PUSCHSysInfoListSFNVHCR::theInfo = {
	PUSCHSysInfoListSFNVHCR::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *RACHTransmissionParameters::itemsInfo[1] = {
	&RACHTransmissionParametersMmax::theInfo,
};
bool RACHTransmissionParameters::itemsPres[1] = {
	1,
};
const RACHTransmissionParameters::Info RACHTransmissionParameters::theInfo = {
	RACHTransmissionParameters::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ReferenceBeta16QAM::itemsInfo[1] = {
	&ReferenceBeta16QAMReferenceCodeRate::theInfo,
};
bool ReferenceBeta16QAM::itemsPres[1] = {
	1,
};
const ReferenceBeta16QAM::Info ReferenceBeta16QAM::theInfo = {
	ReferenceBeta16QAM::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *RepetitionPeriodAndLength::choicesInfo[1] = {
	&RepetitionPeriodAndLengthRepetitionPeriod1::theInfo,
};
const RepetitionPeriodAndLength::Info RepetitionPeriodAndLength::theInfo = {
	RepetitionPeriodAndLength::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *RepetitionPeriodLengthAndOffset::choicesInfo[1] = {
	&RepetitionPeriodLengthAndOffsetRepetitionPeriod1::theInfo,
};
const RepetitionPeriodLengthAndOffset::Info RepetitionPeriodLengthAndOffset::theInfo = {
	RepetitionPeriodLengthAndOffset::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *RepetitionPeriodAndLengthForSPS::choicesInfo[1] = {
	&RepetitionPeriodAndLengthForSPSRepetitionPeriod1::theInfo,
};
const RepetitionPeriodAndLengthForSPS::Info RepetitionPeriodAndLengthForSPS::theInfo = {
	RepetitionPeriodAndLengthForSPS::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *ReplacedPDSCHCodeInfo::itemsInfo[1] = {
	&MaxTFCIField2Value::theInfo,
};
bool ReplacedPDSCHCodeInfo::itemsPres[1] = {
	1,
};
const ReplacedPDSCHCodeInfo::Info ReplacedPDSCHCodeInfo::theInfo = {
	ReplacedPDSCHCodeInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *RepPerLengthOffsetPICH::choicesInfo[1] = {
	&RepPerLengthOffsetPICHRpp42::theInfo,
};
const RepPerLengthOffsetPICH::Info RepPerLengthOffsetPICH::theInfo = {
	RepPerLengthOffsetPICH::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *RepPerLengthOffsetMICH::choicesInfo[1] = {
	&RepPerLengthOffsetMICHRpp42::theInfo,
};
const RepPerLengthOffsetMICH::Info RepPerLengthOffsetMICH::theInfo = {
	RepPerLengthOffsetMICH::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *RLAdditionInformation::itemsInfo[1] = {
	&PrimaryCPICHInfo::theInfo,
};
bool RLAdditionInformation::itemsPres[1] = {
	0,
};
const RLAdditionInformation::Info RLAdditionInformation::theInfo = {
	RLAdditionInformation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *RLAdditionInformationr6::itemsInfo[1] = {
	&PrimaryCPICHInfo::theInfo,
};
bool RLAdditionInformationr6::itemsPres[1] = {
	0,
};
const RLAdditionInformationr6::Info RLAdditionInformationr6::theInfo = {
	RLAdditionInformationr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *RLAdditionInformationr7::itemsInfo[1] = {
	&PrimaryCPICHInfo::theInfo,
};
bool RLAdditionInformationr7::itemsPres[1] = {
	0,
};
const RLAdditionInformationr7::Info RLAdditionInformationr7::theInfo = {
	RLAdditionInformationr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *RLAdditionInformationr8::itemsInfo[1] = {
	&PrimaryCPICHInfo::theInfo,
};
bool RLAdditionInformationr8::itemsPres[1] = {
	0,
};
const RLAdditionInformationr8::Info RLAdditionInformationr8::theInfo = {
	RLAdditionInformationr8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *RLAdditionInformationr9::itemsInfo[1] = {
	&PrimaryCPICHInfo::theInfo,
};
bool RLAdditionInformationr9::itemsPres[1] = {
	0,
};
const RLAdditionInformationr9::Info RLAdditionInformationr9::theInfo = {
	RLAdditionInformationr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *RLAdditionInformationv6b0ext::itemsInfo[1] = {
	&STTDIndication::theInfo,
};
bool RLAdditionInformationv6b0ext::itemsPres[1] = {
	0,
};
const RLAdditionInformationv6b0ext::Info RLAdditionInformationv6b0ext::theInfo = {
	RLAdditionInformationv6b0ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *RLAdditionInformationv890ext::itemsInfo[1] = {
	&TargetCellPreconfigInfov890ext::theInfo,
};
bool RLAdditionInformationv890ext::itemsPres[1] = {
	0,
};
const RLAdditionInformationv890ext::Info RLAdditionInformationv890ext::theInfo = {
	RLAdditionInformationv890ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *RLAdditionInformationv950ext::itemsInfo[1] = {
	&TargetCellPreconfigInfov950ext::theInfo,
};
bool RLAdditionInformationv950ext::itemsPres[1] = {
	0,
};
const RLAdditionInformationv950ext::Info RLAdditionInformationv950ext::theInfo = {
	RLAdditionInformationv950ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *RLAdditionInformationSecULFreq::itemsInfo[1] = {
	&PrimaryCPICHInfo::theInfo,
};
bool RLAdditionInformationSecULFreq::itemsPres[1] = {
	0,
};
const RLAdditionInformationSecULFreq::Info RLAdditionInformationSecULFreq::theInfo = {
	RLAdditionInformationSecULFreq::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SecondaryCCPCHInfoModeSpecificInfoFdd::itemsInfo[1] = {
	&PCPICHUsageForChannelEst::theInfo,
};
bool SecondaryCCPCHInfoModeSpecificInfoFdd::itemsPres[1] = {
	0,
};
const SecondaryCCPCHInfoModeSpecificInfoFdd::Info SecondaryCCPCHInfoModeSpecificInfoFdd::theInfo = {
	SecondaryCCPCHInfoModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SecondaryCCPCHInfoModeSpecificInfo::choicesInfo[1] = {
	&SecondaryCCPCHInfoModeSpecificInfoFdd::theInfo,
};
const SecondaryCCPCHInfoModeSpecificInfo::Info SecondaryCCPCHInfoModeSpecificInfo::theInfo = {
	SecondaryCCPCHInfoModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *SecondaryCCPCHInfo::itemsInfo[1] = {
	&SecondaryCCPCHInfoModeSpecificInfo::theInfo,
};
bool SecondaryCCPCHInfo::itemsPres[1] = {
	0,
};
const SecondaryCCPCHInfo::Info SecondaryCCPCHInfo::theInfo = {
	SecondaryCCPCHInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SCCPCHInfoForFACH::itemsInfo[1] = {
	&SecondaryCCPCHInfo::theInfo,
};
bool SCCPCHInfoForFACH::itemsPres[1] = {
	1,
};
const SCCPCHInfoForFACH::Info SCCPCHInfoForFACH::theInfo = {
	SCCPCHInfoForFACH::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *SecondaryCCPCHInfor4ModeSpecificInfo::choicesInfo[1] = {
	&SecondaryCCPCHInfor4ModeSpecificInfoFdd::theInfo,
};
const SecondaryCCPCHInfor4ModeSpecificInfo::Info SecondaryCCPCHInfor4ModeSpecificInfo::theInfo = {
	SecondaryCCPCHInfor4ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *SecondaryCCPCHInfor4::itemsInfo[1] = {
	&SecondaryCCPCHInfor4ModeSpecificInfo::theInfo,
};
bool SecondaryCCPCHInfor4::itemsPres[1] = {
	0,
};
const SecondaryCCPCHInfor4::Info SecondaryCCPCHInfor4::theInfo = {
	SecondaryCCPCHInfor4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SCCPCHInfoForFACHr4::itemsInfo[1] = {
	&SecondaryCCPCHInfor4::theInfo,
};
bool SCCPCHInfoForFACHr4::itemsPres[1] = {
	1,
};
const SCCPCHInfoForFACHr4::Info SCCPCHInfoForFACHr4::theInfo = {
	SCCPCHInfoForFACHr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *SCCPCHSystemInformation::itemsInfo[1] = {
	&SecondaryCCPCHInfo::theInfo,
};
bool SCCPCHSystemInformation::itemsPres[1] = {
	0,
};
const SCCPCHSystemInformation::Info SCCPCHSystemInformation::theInfo = {
	SCCPCHSystemInformation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SecondaryCCPCHInfoLCRr4ext::itemsInfo[1] = {
	&IndividualTimeslotInfoLCRr4ext::theInfo,
};
bool SecondaryCCPCHInfoLCRr4ext::itemsPres[1] = {
	1,
};
const SecondaryCCPCHInfoLCRr4ext::Info SecondaryCCPCHInfoLCRr4ext::theInfo = {
	SecondaryCCPCHInfoLCRr4ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *SCCPCHSystemInformationLCRr4ext::itemsInfo[1] = {
	&SecondaryCCPCHInfoLCRr4ext::theInfo,
};
bool SCCPCHSystemInformationLCRr4ext::itemsPres[1] = {
	0,
};
const SCCPCHSystemInformationLCRr4ext::Info SCCPCHSystemInformationLCRr4ext::theInfo = {
	SCCPCHSystemInformationLCRr4ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SecondaryCCPCHInfoHCRVHCRr7ModeSpecificInfoTdd384::itemsInfo[1] = {
	&IndividualTimeslotInfor7::theInfo,
};
bool SecondaryCCPCHInfoHCRVHCRr7ModeSpecificInfoTdd384::itemsPres[1] = {
	1,
};
const SecondaryCCPCHInfoHCRVHCRr7ModeSpecificInfoTdd384::Info SecondaryCCPCHInfoHCRVHCRr7ModeSpecificInfoTdd384::theInfo = {
	SecondaryCCPCHInfoHCRVHCRr7ModeSpecificInfoTdd384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *SecondaryCCPCHInfoHCRVHCRr7ModeSpecificInfo::choicesInfo[1] = {
	&SecondaryCCPCHInfoHCRVHCRr7ModeSpecificInfoTdd384::theInfo,
};
const SecondaryCCPCHInfoHCRVHCRr7ModeSpecificInfo::Info SecondaryCCPCHInfoHCRVHCRr7ModeSpecificInfo::theInfo = {
	SecondaryCCPCHInfoHCRVHCRr7ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *SecondaryCCPCHInfoHCRVHCRr7::itemsInfo[1] = {
	&SecondaryCCPCHInfoHCRVHCRr7ModeSpecificInfo::theInfo,
};
bool SecondaryCCPCHInfoHCRVHCRr7::itemsPres[1] = {
	1,
};
const SecondaryCCPCHInfoHCRVHCRr7::Info SecondaryCCPCHInfoHCRVHCRr7::theInfo = {
	SecondaryCCPCHInfoHCRVHCRr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *SCCPCHSystemInformationHCRVHCRr7::itemsInfo[1] = {
	&SecondaryCCPCHInfoHCRVHCRr7::theInfo,
};
bool SCCPCHSystemInformationHCRVHCRr7::itemsPres[1] = {
	0,
};
const SCCPCHSystemInformationHCRVHCRr7::Info SCCPCHSystemInformationHCRVHCRr7::theInfo = {
	SCCPCHSystemInformationHCRVHCRr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SecondaryCCPCHInfoMBMSr6ModeSpecificInfo::choicesInfo[1] = {
	&SecondaryCCPCHInfoMBMSr6ModeSpecificInfoFdd::theInfo,
};
const SecondaryCCPCHInfoMBMSr6ModeSpecificInfo::Info SecondaryCCPCHInfoMBMSr6ModeSpecificInfo::theInfo = {
	SecondaryCCPCHInfoMBMSr6ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *SecondaryCCPCHInfoMBMSr6::itemsInfo[1] = {
	&SecondaryCCPCHInfoMBMSr6ModeSpecificInfo::theInfo,
};
bool SecondaryCCPCHInfoMBMSr6::itemsPres[1] = {
	0,
};
const SecondaryCCPCHInfoMBMSr6::Info SecondaryCCPCHInfoMBMSr6::theInfo = {
	SecondaryCCPCHInfoMBMSr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SCCPCHSystemInformationMBMSr6::itemsInfo[1] = {
	&SecondaryCCPCHInfoMBMSr6::theInfo,
};
bool SCCPCHSystemInformationMBMSr6::itemsPres[1] = {
	0,
};
const SCCPCHSystemInformationMBMSr6::Info SCCPCHSystemInformationMBMSr6::theInfo = {
	SCCPCHSystemInformationMBMSr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SecondaryCCPCHInfoMBMSr7ModeSpecificInfo::choicesInfo[1] = {
	&SecondaryCCPCHInfoMBMSr7ModeSpecificInfoFdd::theInfo,
};
const SecondaryCCPCHInfoMBMSr7ModeSpecificInfo::Info SecondaryCCPCHInfoMBMSr7ModeSpecificInfo::theInfo = {
	SecondaryCCPCHInfoMBMSr7ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *SecondaryCCPCHInfoMBMSr7::itemsInfo[1] = {
	&SecondaryCCPCHInfoMBMSr7ModeSpecificInfo::theInfo,
};
bool SecondaryCCPCHInfoMBMSr7::itemsPres[1] = {
	0,
};
const SecondaryCCPCHInfoMBMSr7::Info SecondaryCCPCHInfoMBMSr7::theInfo = {
	SecondaryCCPCHInfoMBMSr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SCCPCHSystemInformationMBMSr7::itemsInfo[1] = {
	&SecondaryCCPCHInfoMBMSr7::theInfo,
};
bool SCCPCHSystemInformationMBMSr7::itemsPres[1] = {
	0,
};
const SCCPCHSystemInformationMBMSr7::Info SCCPCHSystemInformationMBMSr7::theInfo = {
	SCCPCHSystemInformationMBMSr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SecondaryCCPCHFrameType2Info::itemsInfo[1] = {
	&SecondaryCCPCHFrameType2InfoSubFrameNumber::theInfo,
};
bool SecondaryCCPCHFrameType2Info::itemsPres[1] = {
	1,
};
const SecondaryCCPCHFrameType2Info::Info SecondaryCCPCHFrameType2Info::theInfo = {
	SecondaryCCPCHFrameType2Info::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *SecondaryCCPCHInfoDiffMBMS::itemsInfo[1] = {
	&SecondaryScramblingCode::theInfo,
};
bool SecondaryCCPCHInfoDiffMBMS::itemsPres[1] = {
	0,
};
const SecondaryCCPCHInfoDiffMBMS::Info SecondaryCCPCHInfoDiffMBMS::theInfo = {
	SecondaryCCPCHInfoDiffMBMS::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SecondaryCellMIMOparametersFDD::choicesInfo[1] = {
	&SecondaryCellMIMOparametersFDDContinue::theInfo,
};
const SecondaryCellMIMOparametersFDD::Info SecondaryCellMIMOparametersFDD::theInfo = {
	SecondaryCellMIMOparametersFDD::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *SecondaryCellMIMOparametersFDDv950ext::itemsInfo[1] = {
	&SecondaryCellMIMOparametersFDDv950extprecodingWeightSetRestriction::theInfo,
};
bool SecondaryCellMIMOparametersFDDv950ext::itemsPres[1] = {
	0,
};
const SecondaryCellMIMOparametersFDDv950ext::Info SecondaryCellMIMOparametersFDDv950ext::theInfo = {
	SecondaryCellMIMOparametersFDDv950ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ServingCellChangeParameters::itemsInfo[1] = {
	&ServingCellChangeMACreset::theInfo,
};
bool ServingCellChangeParameters::itemsPres[1] = {
	1,
};
const ServingCellChangeParameters::Info ServingCellChangeParameters::theInfo = {
	ServingCellChangeParameters::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *SF256AndCodeNumber::choicesInfo[1] = {
	&SF256AndCodeNumberSf4::theInfo,
};
const SF256AndCodeNumber::Info SF256AndCodeNumber::theInfo = {
	SF256AndCodeNumber::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *SF512AndCodeNumber::choicesInfo[1] = {
	&SF512AndCodeNumberSf4::theInfo,
};
const SF512AndCodeNumber::Info SF512AndCodeNumber::theInfo = {
	SF512AndCodeNumber::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *SFNTimeInfo::itemsInfo[1] = {
	&SFNTimeInfoActivationTimeSFN::theInfo,
};
bool SFNTimeInfo::itemsPres[1] = {
	1,
};
const SFNTimeInfo::Info SFNTimeInfo::theInfo = {
	SFNTimeInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *SPSInformationTDD128r8::itemsInfo[1] = {
	&EDCHSPSInformationTDD128::theInfo,
};
bool SPSInformationTDD128r8::itemsPres[1] = {
	0,
};
const SPSInformationTDD128r8::Info SPSInformationTDD128r8::theInfo = {
	SPSInformationTDD128r8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SSDTInformation::itemsInfo[1] = {
	&SField::theInfo,
};
bool SSDTInformation::itemsPres[1] = {
	1,
};
const SSDTInformation::Info SSDTInformation::theInfo = {
	SSDTInformation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *SSDTInformationr4::itemsInfo[1] = {
	&SField::theInfo,
};
bool SSDTInformationr4::itemsPres[1] = {
	0,
};
const SSDTInformationr4::Info SSDTInformationr4::theInfo = {
	SSDTInformationr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SynchronisationParametersr4::itemsInfo[1] = {
	&SynchronisationParametersr4SyncULCodesBitmap::theInfo,
};
bool SynchronisationParametersr4::itemsPres[1] = {
	0,
};
const SynchronisationParametersr4::Info SynchronisationParametersr4::theInfo = {
	SynchronisationParametersr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SYNCULProcedurer4::itemsInfo[1] = {
	&SYNCULProcedurer4max_SYNC_UL_Transmissions::theInfo,
};
bool SYNCULProcedurer4::itemsPres[1] = {
	1,
};
const SYNCULProcedurer4::Info SYNCULProcedurer4::theInfo = {
	SYNCULProcedurer4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *SYNCULInfoForERUCCH::itemsInfo[1] = {
	&SYNCULInfoForERUCCHPrxUpPCHdes::theInfo,
};
bool SYNCULInfoForERUCCH::itemsPres[1] = {
	1,
};
const SYNCULInfoForERUCCH::Info SYNCULInfoForERUCCH::theInfo = {
	SYNCULInfoForERUCCH::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *TargetCellPreconfigInfo::itemsInfo[1] = {
	&ActivationTimeOffset::theInfo,
};
bool TargetCellPreconfigInfo::itemsPres[1] = {
	0,
};
const TargetCellPreconfigInfo::Info TargetCellPreconfigInfo::theInfo = {
	TargetCellPreconfigInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *TargetCellPreconfigInfor9::itemsInfo[1] = {
	&ActivationTimeOffset::theInfo,
};
bool TargetCellPreconfigInfor9::itemsPres[1] = {
	0,
};
const TargetCellPreconfigInfor9::Info TargetCellPreconfigInfor9::theInfo = {
	TargetCellPreconfigInfor9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *TDDMBSFNTSlotInfo::itemsInfo[1] = {
	&TimeslotNumber::theInfo,
};
bool TDDMBSFNTSlotInfo::itemsPres[1] = {
	1,
};
const TDDMBSFNTSlotInfo::Info TDDMBSFNTSlotInfo::theInfo = {
	TDDMBSFNTSlotInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *TDDPRACHCCodeList::choicesInfo[1] = {
	&TDDPRACHCCodeListSf8::theInfo,
};
const TDDPRACHCCodeList::Info TDDPRACHCCodeList::theInfo = {
	TDDPRACHCCodeList::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *TDD768PRACHCCodeList::choicesInfo[1] = {
	&TDD768PRACHCCodeListSf32::theInfo,
};
const TDD768PRACHCCodeList::Info TDD768PRACHCCodeList::theInfo = {
	TDD768PRACHCCodeList::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *TGPSequenceShort::itemsInfo[1] = {
	&TGPSI::theInfo,
};
bool TGPSequenceShort::itemsPres[1] = {
	1,
};
const TGPSequenceShort::Info TGPSequenceShort::theInfo = {
	TGPSequenceShort::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *TGPSConfigurationParams::itemsInfo[1] = {
	&TGMP::theInfo,
};
bool TGPSConfigurationParams::itemsPres[1] = {
	0,
};
const TGPSConfigurationParams::Info TGPSConfigurationParams::theInfo = {
	TGPSConfigurationParams::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *TGPSConfigurationParamsr8::itemsInfo[1] = {
	&TGMPr8::theInfo,
};
bool TGPSConfigurationParamsr8::itemsPres[1] = {
	0,
};
const TGPSConfigurationParamsr8::Info TGPSConfigurationParamsr8::theInfo = {
	TGPSConfigurationParamsr8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *TimeInfo::itemsInfo[1] = {
	&ActivationTime::theInfo,
};
bool TimeInfo::itemsPres[1] = {
	0,
};
const TimeInfo::Info TimeInfo::theInfo = {
	TimeInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *TimeslotListr4::choicesInfo[1] = {
	&TimeslotListr4Tdd384::theInfo,
};
const TimeslotListr4::Info TimeslotListr4::theInfo = {
	TimeslotListr4::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *DTXDRXTimingInfor7Timing::choicesInfo[1] = {
	&DTXDRXTimingInfor7TimingContinue::theInfo,
};
const DTXDRXTimingInfor7Timing::Info DTXDRXTimingInfor7Timing::theInfo = {
	DTXDRXTimingInfor7Timing::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *DTXDRXTimingInfor7::itemsInfo[1] = {
	&DTXDRXTimingInfor7Timing::theInfo,
};
bool DTXDRXTimingInfor7::itemsPres[1] = {
	1,
};
const DTXDRXTimingInfor7::Info DTXDRXTimingInfor7::theInfo = {
	DTXDRXTimingInfor7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UCSMInfo::itemsInfo[1] = {
	&MinimumSpreadingFactor::theInfo,
};
bool UCSMInfo::itemsPres[1] = {
	1,
};
const UCSMInfo::Info UCSMInfo::theInfo = {
	UCSMInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UL16QAMSettings::itemsInfo[1] = {
	&UL16QAMSettingsBetaEdGainEAGCHTableSelection::theInfo,
};
bool UL16QAMSettings::itemsPres[1] = {
	1,
};
const UL16QAMSettings::Info UL16QAMSettings::theInfo = {
	UL16QAMSettings::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UL16QAMConfig::itemsInfo[1] = {
	&UL16QAMSettings::theInfo,
};
bool UL16QAMConfig::itemsPres[1] = {
	0,
};
const UL16QAMConfig::Info UL16QAMConfig::theInfo = {
	UL16QAMConfig::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ULCCTrCH::itemsInfo[1] = {
	&TFCSIdentityPlain::theInfo,
};
bool ULCCTrCH::itemsPres[1] = {
	0,
};
const ULCCTrCH::Info ULCCTrCH::theInfo = {
	ULCCTrCH::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ULCCTrCHr4::itemsInfo[1] = {
	&TFCSIdentityPlain::theInfo,
};
bool ULCCTrCHr4::itemsPres[1] = {
	0,
};
const ULCCTrCHr4::Info ULCCTrCHr4::theInfo = {
	ULCCTrCHr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ULCCTrCHr7::itemsInfo[1] = {
	&TFCSIdentityPlain::theInfo,
};
bool ULCCTrCHr7::itemsPres[1] = {
	0,
};
const ULCCTrCHr7::Info ULCCTrCHr7::theInfo = {
	ULCCTrCHr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ULChannelRequirement::choicesInfo[1] = {
	&ULDPCHInfo::theInfo,
};
const ULChannelRequirement::Info ULChannelRequirement::theInfo = {
	ULChannelRequirement::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *ULChannelRequirementr4::choicesInfo[1] = {
	&ULDPCHInfor4::theInfo,
};
const ULChannelRequirementr4::Info ULChannelRequirementr4::theInfo = {
	ULChannelRequirementr4::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *ULChannelRequirementr5::choicesInfo[1] = {
	&ULDPCHInfor5::theInfo,
};
const ULChannelRequirementr5::Info ULChannelRequirementr5::theInfo = {
	ULChannelRequirementr5::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *ULChannelRequirementWithCPCHSetID::choicesInfo[1] = {
	&ULDPCHInfo::theInfo,
};
const ULChannelRequirementWithCPCHSetID::Info ULChannelRequirementWithCPCHSetID::theInfo = {
	ULChannelRequirementWithCPCHSetID::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *ULChannelRequirementWithCPCHSetIDr4::choicesInfo[1] = {
	&ULDPCHInfor4::theInfo,
};
const ULChannelRequirementWithCPCHSetIDr4::Info ULChannelRequirementWithCPCHSetIDr4::theInfo = {
	ULChannelRequirementWithCPCHSetIDr4::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *ULChannelRequirementWithCPCHSetIDr5::choicesInfo[1] = {
	&ULDPCHInfor5::theInfo,
};
const ULChannelRequirementWithCPCHSetIDr5::Info ULChannelRequirementWithCPCHSetIDr5::theInfo = {
	ULChannelRequirementWithCPCHSetIDr5::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *ULDLMode::choicesInfo[1] = {
	&ULCompressedModeMethod::theInfo,
};
const ULDLMode::Info ULDLMode::theInfo = {
	ULDLMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *ULDPCHCodeInfoForCommonEDCH::itemsInfo[1] = {
	&ScramblingCodeType::theInfo,
};
bool ULDPCHCodeInfoForCommonEDCH::itemsPres[1] = {
	0,
};
const ULDPCHCodeInfoForCommonEDCH::Info ULDPCHCodeInfoForCommonEDCH::theInfo = {
	ULDPCHCodeInfoForCommonEDCH::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ULDPCHPowerControlInfoPostFDD::itemsInfo[1] = {
	&DPCCHPowerOffset2::theInfo,
};
bool ULDPCHPowerControlInfoPostFDD::itemsPres[1] = {
	1,
};
const ULDPCHPowerControlInfoPostFDD::Info ULDPCHPowerControlInfoPostFDD::theInfo = {
	ULDPCHPowerControlInfoPostFDD::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ULDPCHInfoPostFDD::itemsInfo[1] = {
	&ULDPCHPowerControlInfoPostFDD::theInfo,
};
bool ULDPCHInfoPostFDD::itemsPres[1] = {
	1,
};
const ULDPCHInfoPostFDD::Info ULDPCHInfoPostFDD::theInfo = {
	ULDPCHInfoPostFDD::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ULDPCHPowerControlInfoPostTDD::itemsInfo[1] = {
	&ULTargetSIR::theInfo,
};
bool ULDPCHPowerControlInfoPostTDD::itemsPres[1] = {
	1,
};
const ULDPCHPowerControlInfoPostTDD::Info ULDPCHPowerControlInfoPostTDD::theInfo = {
	ULDPCHPowerControlInfoPostTDD::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ULDPCHInfoPostTDD::itemsInfo[1] = {
	&ULDPCHPowerControlInfoPostTDD::theInfo,
};
bool ULDPCHInfoPostTDD::itemsPres[1] = {
	1,
};
const ULDPCHInfoPostTDD::Info ULDPCHInfoPostTDD::theInfo = {
	ULDPCHInfoPostTDD::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ULDPCHPowerControlInfoPostTDDLCRr4::itemsInfo[1] = {
	&ULTargetSIR::theInfo,
};
bool ULDPCHPowerControlInfoPostTDDLCRr4::itemsPres[1] = {
	1,
};
const ULDPCHPowerControlInfoPostTDDLCRr4::Info ULDPCHPowerControlInfoPostTDDLCRr4::theInfo = {
	ULDPCHPowerControlInfoPostTDDLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ULDPCHInfoPostTDDLCRr4::itemsInfo[1] = {
	&ULDPCHPowerControlInfoPostTDDLCRr4::theInfo,
};
bool ULDPCHInfoPostTDDLCRr4::itemsPres[1] = {
	1,
};
const ULDPCHInfoPostTDDLCRr4::Info ULDPCHInfoPostTDDLCRr4::theInfo = {
	ULDPCHInfoPostTDDLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ULDPCHPowerControlInfoFdd::itemsInfo[1] = {
	&DPCCHPowerOffset::theInfo,
};
bool ULDPCHPowerControlInfoFdd::itemsPres[1] = {
	0,
};
const ULDPCHPowerControlInfoFdd::Info ULDPCHPowerControlInfoFdd::theInfo = {
	ULDPCHPowerControlInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ULDPCHPowerControlInfo::choicesInfo[1] = {
	&ULDPCHPowerControlInfoFdd::theInfo,
};
const ULDPCHPowerControlInfo::Info ULDPCHPowerControlInfo::theInfo = {
	ULDPCHPowerControlInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *ULDPCHPowerControlInfor4Fdd::itemsInfo[1] = {
	&DPCCHPowerOffset::theInfo,
};
bool ULDPCHPowerControlInfor4Fdd::itemsPres[1] = {
	1,
};
const ULDPCHPowerControlInfor4Fdd::Info ULDPCHPowerControlInfor4Fdd::theInfo = {
	ULDPCHPowerControlInfor4Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ULDPCHPowerControlInfor4::choicesInfo[1] = {
	&ULDPCHPowerControlInfor4Fdd::theInfo,
};
const ULDPCHPowerControlInfor4::Info ULDPCHPowerControlInfor4::theInfo = {
	ULDPCHPowerControlInfor4::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *ULDPCHPowerControlInfor5Fdd::itemsInfo[1] = {
	&DPCCHPowerOffset::theInfo,
};
bool ULDPCHPowerControlInfor5Fdd::itemsPres[1] = {
	1,
};
const ULDPCHPowerControlInfor5Fdd::Info ULDPCHPowerControlInfor5Fdd::theInfo = {
	ULDPCHPowerControlInfor5Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ULDPCHPowerControlInfor5::choicesInfo[1] = {
	&ULDPCHPowerControlInfor5Fdd::theInfo,
};
const ULDPCHPowerControlInfor5::Info ULDPCHPowerControlInfor5::theInfo = {
	ULDPCHPowerControlInfor5::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *ULDPCHPowerControlInfor6Fdd::itemsInfo[1] = {
	&DPCCHPowerOffset::theInfo,
};
bool ULDPCHPowerControlInfor6Fdd::itemsPres[1] = {
	1,
};
const ULDPCHPowerControlInfor6Fdd::Info ULDPCHPowerControlInfor6Fdd::theInfo = {
	ULDPCHPowerControlInfor6Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ULDPCHPowerControlInfor6::choicesInfo[1] = {
	&ULDPCHPowerControlInfor6Fdd::theInfo,
};
const ULDPCHPowerControlInfor6::Info ULDPCHPowerControlInfor6::theInfo = {
	ULDPCHPowerControlInfor6::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *ULDPCHPowerControlInfor7Fdd::itemsInfo[1] = {
	&DPCCHPowerOffset::theInfo,
};
bool ULDPCHPowerControlInfor7Fdd::itemsPres[1] = {
	1,
};
const ULDPCHPowerControlInfor7Fdd::Info ULDPCHPowerControlInfor7Fdd::theInfo = {
	ULDPCHPowerControlInfor7Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ULDPCHPowerControlInfor7::choicesInfo[1] = {
	&ULDPCHPowerControlInfor7Fdd::theInfo,
};
const ULDPCHPowerControlInfor7::Info ULDPCHPowerControlInfor7::theInfo = {
	ULDPCHPowerControlInfor7::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *ULDPCHpowerControlInfoForCommonEDCH::itemsInfo[1] = {
	&PowerControlAlgorithm::theInfo,
};
bool ULDPCHpowerControlInfoForCommonEDCH::itemsPres[1] = {
	0,
};
const ULDPCHpowerControlInfoForCommonEDCH::Info ULDPCHpowerControlInfoForCommonEDCH::theInfo = {
	ULDPCHpowerControlInfoForCommonEDCH::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ULEDCHInformationext::choicesInfo[1] = {
	&ULEDCHInformationextFdd::theInfo,
};
const ULEDCHInformationext::Info ULEDCHInformationext::theInfo = {
	ULEDCHInformationext::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *ULEDCHInformationr6::itemsInfo[1] = {
	&ULEDCHInformationr6mac_es_e_resetIndicator::theInfo,
};
bool ULEDCHInformationr6::itemsPres[1] = {
	0,
};
const ULEDCHInformationr6::Info ULEDCHInformationr6::theInfo = {
	ULEDCHInformationr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ULEDCHInformationr7::itemsInfo[1] = {
	&ULEDCHInformationr7mac_es_e_resetIndicator::theInfo,
};
bool ULEDCHInformationr7::itemsPres[1] = {
	1,
};
const ULEDCHInformationr7::Info ULEDCHInformationr7::theInfo = {
	ULEDCHInformationr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ULSynchronisationParametersr4::itemsInfo[1] = {
	&ULSynchronisationParametersr4StepSize::theInfo,
};
bool ULSynchronisationParametersr4::itemsPres[1] = {
	1,
};
const ULSynchronisationParametersr4::Info ULSynchronisationParametersr4::theInfo = {
	ULSynchronisationParametersr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ULTimingAdvanceControl::choicesInfo[1] = {
	&ULTimingAdvanceControlDisabled::theInfo,
};
const ULTimingAdvanceControl::Info ULTimingAdvanceControl::theInfo = {
	ULTimingAdvanceControl::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *ULTimingAdvanceControlr4::choicesInfo[1] = {
	&ULTimingAdvanceControlr4Disabled::theInfo,
};
const ULTimingAdvanceControlr4::Info ULTimingAdvanceControlr4::theInfo = {
	ULTimingAdvanceControlr4::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *ULTimingAdvanceControlr7::choicesInfo[1] = {
	&ULTimingAdvanceControlr7Disabled::theInfo,
};
const ULTimingAdvanceControlr7::Info ULTimingAdvanceControlr7::theInfo = {
	ULTimingAdvanceControlr7::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *ULTimingAdvanceControlLCRr4::choicesInfo[1] = {
	&ULTimingAdvanceControlLCRr4Disabled::theInfo,
};
const ULTimingAdvanceControlLCRr4::Info ULTimingAdvanceControlLCRr4::theInfo = {
	ULTimingAdvanceControlLCRr4::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *ULTSChannelisationCodeListr7::itemsInfo[0] = {
};
bool ULTSChannelisationCodeListr7::itemsPres[0] = {
};
const ULTSChannelisationCodeListr7::Info ULTSChannelisationCodeListr7::theInfo = {
	ULTSChannelisationCodeListr7::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *UplinkAdditionalTimeslotsParameters::choicesInfo[1] = {
	&UplinkAdditionalTimeslotsParametersSameAsLast::theInfo,
};
const UplinkAdditionalTimeslotsParameters::Info UplinkAdditionalTimeslotsParameters::theInfo = {
	UplinkAdditionalTimeslotsParameters::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *UplinkAdditionalTimeslots::itemsInfo[1] = {
	&UplinkAdditionalTimeslotsParameters::theInfo,
};
bool UplinkAdditionalTimeslots::itemsPres[1] = {
	1,
};
const UplinkAdditionalTimeslots::Info UplinkAdditionalTimeslots::theInfo = {
	UplinkAdditionalTimeslots::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UplinkAdditionalTimeslotsLCRr4Parameters::choicesInfo[1] = {
	&UplinkAdditionalTimeslotsLCRr4ParametersSameAsLast::theInfo,
};
const UplinkAdditionalTimeslotsLCRr4Parameters::Info UplinkAdditionalTimeslotsLCRr4Parameters::theInfo = {
	UplinkAdditionalTimeslotsLCRr4Parameters::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *UplinkAdditionalTimeslotsLCRr4::itemsInfo[1] = {
	&UplinkAdditionalTimeslotsLCRr4Parameters::theInfo,
};
bool UplinkAdditionalTimeslotsLCRr4::itemsPres[1] = {
	1,
};
const UplinkAdditionalTimeslotsLCRr4::Info UplinkAdditionalTimeslotsLCRr4::theInfo = {
	UplinkAdditionalTimeslotsLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UplinkAdditionalTimeslotsLCRr7Parameters::choicesInfo[1] = {
	&UplinkAdditionalTimeslotsLCRr7ParametersSameAsLast::theInfo,
};
const UplinkAdditionalTimeslotsLCRr7Parameters::Info UplinkAdditionalTimeslotsLCRr7Parameters::theInfo = {
	UplinkAdditionalTimeslotsLCRr7Parameters::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *UplinkAdditionalTimeslotsLCRr7::itemsInfo[1] = {
	&UplinkAdditionalTimeslotsLCRr7Parameters::theInfo,
};
bool UplinkAdditionalTimeslotsLCRr7::itemsPres[1] = {
	1,
};
const UplinkAdditionalTimeslotsLCRr7::Info UplinkAdditionalTimeslotsLCRr7::theInfo = {
	UplinkAdditionalTimeslotsLCRr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UplinkAdditionalTimeslotsVHCRParameters::choicesInfo[1] = {
	&UplinkAdditionalTimeslotsVHCRParametersSameAsLast::theInfo,
};
const UplinkAdditionalTimeslotsVHCRParameters::Info UplinkAdditionalTimeslotsVHCRParameters::theInfo = {
	UplinkAdditionalTimeslotsVHCRParameters::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *UplinkAdditionalTimeslotsVHCR::itemsInfo[1] = {
	&UplinkAdditionalTimeslotsVHCRParameters::theInfo,
};
bool UplinkAdditionalTimeslotsVHCR::itemsPres[1] = {
	1,
};
const UplinkAdditionalTimeslotsVHCR::Info UplinkAdditionalTimeslotsVHCR::theInfo = {
	UplinkAdditionalTimeslotsVHCR::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UplinkTimeslotsCodes::itemsInfo[1] = {
	&UplinkTimeslotsCodesDynamicSFusage::theInfo,
};
bool UplinkTimeslotsCodes::itemsPres[1] = {
	1,
};
const UplinkTimeslotsCodes::Info UplinkTimeslotsCodes::theInfo = {
	UplinkTimeslotsCodes::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UplinkTimeslotsCodesVHCR::itemsInfo[1] = {
	&UplinkTimeslotsCodesVHCRDynamicSFusage::theInfo,
};
bool UplinkTimeslotsCodesVHCR::itemsPres[1] = {
	1,
};
const UplinkTimeslotsCodesVHCR::Info UplinkTimeslotsCodesVHCR::theInfo = {
	UplinkTimeslotsCodesVHCR::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UplinkTimeslotsCodesLCRr4::itemsInfo[1] = {
	&UplinkTimeslotsCodesLCRr4DynamicSFusage::theInfo,
};
bool UplinkTimeslotsCodesLCRr4::itemsPres[1] = {
	1,
};
const UplinkTimeslotsCodesLCRr4::Info UplinkTimeslotsCodesLCRr4::theInfo = {
	UplinkTimeslotsCodesLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UplinkTimeslotsCodesLCRr7::itemsInfo[1] = {
	&UplinkTimeslotsCodesLCRr7DynamicSFusage::theInfo,
};
bool UplinkTimeslotsCodesLCRr7::itemsPres[1] = {
	1,
};
const UplinkTimeslotsCodesLCRr7::Info UplinkTimeslotsCodesLCRr7::theInfo = {
	UplinkTimeslotsCodesLCRr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *AcquisitionSatInfo::itemsInfo[1] = {
	&SatID::theInfo,
};
bool AcquisitionSatInfo::itemsPres[1] = {
	0,
};
const AcquisitionSatInfo::Info AcquisitionSatInfo::theInfo = {
	AcquisitionSatInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *AlmanacSatInfo::itemsInfo[1] = {
	&AlmanacSatInfoDataID::theInfo,
};
bool AlmanacSatInfo::itemsPres[1] = {
	1,
};
const AlmanacSatInfo::Info AlmanacSatInfo::theInfo = {
	AlmanacSatInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *GANSSSATInfoAlmanacSBASecef::itemsInfo[1] = {
	&GANSSSATInfoAlmanacSBASecefSbasAlmDataID::theInfo,
};
bool GANSSSATInfoAlmanacSBASecef::itemsPres[1] = {
	1,
};
const GANSSSATInfoAlmanacSBASecef::Info GANSSSATInfoAlmanacSBASecef::theInfo = {
	GANSSSATInfoAlmanacSBASecef::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ALMECEFsbasAlmanacSet::itemsInfo[1] = {
	&GANSSSATInfoAlmanacSBASecefList::theInfo,
};
bool ALMECEFsbasAlmanacSet::itemsPres[1] = {
	1,
};
const ALMECEFsbasAlmanacSet::Info ALMECEFsbasAlmanacSet::theInfo = {
	ALMECEFsbasAlmanacSet::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *GANSSSATInfoAlmanacGLOkp::itemsInfo[1] = {
	&GANSSSATInfoAlmanacGLOkpGloAlmNA::theInfo,
};
bool GANSSSATInfoAlmanacGLOkp::itemsPres[1] = {
	0,
};
const GANSSSATInfoAlmanacGLOkp::Info GANSSSATInfoAlmanacGLOkp::theInfo = {
	GANSSSATInfoAlmanacGLOkp::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ALMGlonassAlmanacSet::itemsInfo[1] = {
	&GANSSSATInfoAlmanacGLOkpList::theInfo,
};
bool ALMGlonassAlmanacSet::itemsPres[1] = {
	1,
};
const ALMGlonassAlmanacSet::Info ALMGlonassAlmanacSet::theInfo = {
	ALMGlonassAlmanacSet::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ALMkeplerianParameters::itemsInfo[1] = {
	&ALMkeplerianParametersToa::theInfo,
};
bool ALMkeplerianParameters::itemsPres[1] = {
	1,
};
const ALMkeplerianParameters::Info ALMkeplerianParameters::theInfo = {
	ALMkeplerianParameters::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ALMMidiAlmanacSet::itemsInfo[1] = {
	&ALMMidiAlmanacSetToa::theInfo,
};
bool ALMMidiAlmanacSet::itemsPres[1] = {
	1,
};
const ALMMidiAlmanacSet::Info ALMMidiAlmanacSet::theInfo = {
	ALMMidiAlmanacSet::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ALMNAVKeplerianSet::itemsInfo[1] = {
	&ALMNAVKeplerianSetToa::theInfo,
};
bool ALMNAVKeplerianSet::itemsPres[1] = {
	1,
};
const ALMNAVKeplerianSet::Info ALMNAVKeplerianSet::theInfo = {
	ALMNAVKeplerianSet::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ALMReducedKeplerianSet::itemsInfo[1] = {
	&ALMReducedKeplerianSetToa::theInfo,
};
bool ALMReducedKeplerianSet::itemsPres[1] = {
	1,
};
const ALMReducedKeplerianSet::Info ALMReducedKeplerianSet::theInfo = {
	ALMReducedKeplerianSet::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *AuxInfoGANSSID1element::itemsInfo[1] = {
	&AuxInfoGANSSID1elementSvID::theInfo,
};
bool AuxInfoGANSSID1element::itemsPres[1] = {
	1,
};
const AuxInfoGANSSID1element::Info AuxInfoGANSSID1element::theInfo = {
	AuxInfoGANSSID1element::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *AuxInfoGANSSID3element::itemsInfo[1] = {
	&AuxInfoGANSSID3elementSvID::theInfo,
};
bool AuxInfoGANSSID3element::itemsPres[1] = {
	1,
};
const AuxInfoGANSSID3element::Info AuxInfoGANSSID3element::theInfo = {
	AuxInfoGANSSID3element::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *AzimuthAndElevation::itemsInfo[1] = {
	&AzimuthAndElevationAzimuth::theInfo,
};
bool AzimuthAndElevation::itemsPres[1] = {
	1,
};
const AzimuthAndElevation::Info AzimuthAndElevation::theInfo = {
	AzimuthAndElevation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *BLERMeasurementResults::itemsInfo[1] = {
	&TransportChannelIdentity::theInfo,
};
bool BLERMeasurementResults::itemsPres[1] = {
	0,
};
const BLERMeasurementResults::Info BLERMeasurementResults::theInfo = {
	BLERMeasurementResults::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *BSICReported::choicesInfo[1] = {
	&BSICReportedVerifiedBSIC::theInfo,
};
const BSICReported::Info BSICReported::theInfo = {
	BSICReported::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *BurstModeParameters::itemsInfo[1] = {
	&BurstModeParametersBurstStart::theInfo,
};
bool BurstModeParameters::itemsPres[1] = {
	1,
};
const BurstModeParameters::Info BurstModeParameters::theInfo = {
	BurstModeParameters::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *Event1a::itemsInfo[1] = {
	&TriggeringCondition2::theInfo,
};
bool Event1a::itemsPres[1] = {
	1,
};
const Event1a::Info Event1a::theInfo = {
	Event1a::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *IntraFreqEvent::choicesInfo[1] = {
	&Event1a::theInfo,
};
const IntraFreqEvent::Info IntraFreqEvent::theInfo = {
	IntraFreqEvent::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *IntraFreqEventCriteria::itemsInfo[1] = {
	&IntraFreqEvent::theInfo,
};
bool IntraFreqEventCriteria::itemsPres[1] = {
	0,
};
const IntraFreqEventCriteria::Info IntraFreqEventCriteria::theInfo = {
	IntraFreqEventCriteria::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *IntraFreqReportingCriteria::itemsInfo[1] = {
	&IntraFreqEventCriteriaList::theInfo,
};
bool IntraFreqReportingCriteria::itemsPres[1] = {
	0,
};
const IntraFreqReportingCriteria::Info IntraFreqReportingCriteria::theInfo = {
	IntraFreqReportingCriteria::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *CellDCHReportCriteria::choicesInfo[1] = {
	&IntraFreqReportingCriteria::theInfo,
};
const CellDCHReportCriteria::Info CellDCHReportCriteria::theInfo = {
	CellDCHReportCriteria::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *Event1aLCRr4::itemsInfo[1] = {
	&TriggeringCondition2::theInfo,
};
bool Event1aLCRr4::itemsPres[1] = {
	1,
};
const Event1aLCRr4::Info Event1aLCRr4::theInfo = {
	Event1aLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *IntraFreqEventLCRr4::choicesInfo[1] = {
	&Event1aLCRr4::theInfo,
};
const IntraFreqEventLCRr4::Info IntraFreqEventLCRr4::theInfo = {
	IntraFreqEventLCRr4::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *IntraFreqEventCriteriaLCRr4::itemsInfo[1] = {
	&IntraFreqEventLCRr4::theInfo,
};
bool IntraFreqEventCriteriaLCRr4::itemsPres[1] = {
	0,
};
const IntraFreqEventCriteriaLCRr4::Info IntraFreqEventCriteriaLCRr4::theInfo = {
	IntraFreqEventCriteriaLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *IntraFreqReportingCriteriaLCRr4::itemsInfo[1] = {
	&IntraFreqEventCriteriaListLCRr4::theInfo,
};
bool IntraFreqReportingCriteriaLCRr4::itemsPres[1] = {
	0,
};
const IntraFreqReportingCriteriaLCRr4::Info IntraFreqReportingCriteriaLCRr4::theInfo = {
	IntraFreqReportingCriteriaLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *CellDCHReportCriteriaLCRr4::choicesInfo[1] = {
	&IntraFreqReportingCriteriaLCRr4::theInfo,
};
const CellDCHReportCriteriaLCRr4::Info CellDCHReportCriteriaLCRr4::theInfo = {
	CellDCHReportCriteriaLCRr4::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *CellDCHMeasOccasionPatternLCR::itemsInfo[1] = {
	&CellDCHMeasOccasionPatternLCRPatternIdentifier::theInfo,
};
bool CellDCHMeasOccasionPatternLCR::itemsPres[1] = {
	0,
};
const CellDCHMeasOccasionPatternLCR::Info CellDCHMeasOccasionPatternLCR::theInfo = {
	CellDCHMeasOccasionPatternLCR::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *CellDCHMeasOccasionInfoTDD128r9::itemsInfo[1] = {
	&CellDCHMeasOccasionInfoTDD128r9CellDCHMeasOccasionSequenceList::theInfo,
};
bool CellDCHMeasOccasionInfoTDD128r9::itemsPres[1] = {
	1,
};
const CellDCHMeasOccasionInfoTDD128r9::Info CellDCHMeasOccasionInfoTDD128r9::theInfo = {
	CellDCHMeasOccasionInfoTDD128r9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *CellInfo::itemsInfo[1] = {
	&CellIndividualOffset::theInfo,
};
bool CellInfo::itemsPres[1] = {
	0,
};
const CellInfo::Info CellInfo::theInfo = {
	CellInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *CellInfor4::itemsInfo[1] = {
	&CellIndividualOffset::theInfo,
};
bool CellInfor4::itemsPres[1] = {
	0,
};
const CellInfor4::Info CellInfor4::theInfo = {
	CellInfor4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *CellSelectReselectInfoMCRSCP::itemsInfo[1] = {
	&QOffsetSN::theInfo,
};
bool CellSelectReselectInfoMCRSCP::itemsPres[1] = {
	0,
};
const CellSelectReselectInfoMCRSCP::Info CellSelectReselectInfoMCRSCP::theInfo = {
	CellSelectReselectInfoMCRSCP::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *CellInfoLCRr8ext::itemsInfo[1] = {
	&CellSelectReselectInfoMCRSCP::theInfo,
};
bool CellInfoLCRr8ext::itemsPres[1] = {
	0,
};
const CellInfoLCRr8ext::Info CellInfoLCRr8ext::theInfo = {
	CellInfoLCRr8ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *CellInfor9::itemsInfo[1] = {
	&CellIndividualOffset::theInfo,
};
bool CellInfor9::itemsPres[1] = {
	0,
};
const CellInfor9::Info CellInfor9::theInfo = {
	CellInfor9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *CellInfoSIRSCP::itemsInfo[1] = {
	&CellIndividualOffset::theInfo,
};
bool CellInfoSIRSCP::itemsPres[1] = {
	0,
};
const CellInfoSIRSCP::Info CellInfoSIRSCP::theInfo = {
	CellInfoSIRSCP::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *CellInfoSIRSCPLCRr4::itemsInfo[1] = {
	&CellIndividualOffset::theInfo,
};
bool CellInfoSIRSCPLCRr4::itemsPres[1] = {
	0,
};
const CellInfoSIRSCPLCRr4::Info CellInfoSIRSCPLCRr4::theInfo = {
	CellInfoSIRSCPLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *CellInfoSIECN0::itemsInfo[1] = {
	&CellIndividualOffset::theInfo,
};
bool CellInfoSIECN0::itemsPres[1] = {
	0,
};
const CellInfoSIECN0::Info CellInfoSIECN0::theInfo = {
	CellInfoSIECN0::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *CellInfoSIECN0LCRr4::itemsInfo[1] = {
	&CellIndividualOffset::theInfo,
};
bool CellInfoSIECN0LCRr4::itemsPres[1] = {
	0,
};
const CellInfoSIECN0LCRr4::Info CellInfoSIECN0LCRr4::theInfo = {
	CellInfoSIECN0LCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *CellInfoSIHCSRSCP::itemsInfo[1] = {
	&CellIndividualOffset::theInfo,
};
bool CellInfoSIHCSRSCP::itemsPres[1] = {
	0,
};
const CellInfoSIHCSRSCP::Info CellInfoSIHCSRSCP::theInfo = {
	CellInfoSIHCSRSCP::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *CellInfoSIHCSRSCPLCRr4::itemsInfo[1] = {
	&CellIndividualOffset::theInfo,
};
bool CellInfoSIHCSRSCPLCRr4::itemsPres[1] = {
	0,
};
const CellInfoSIHCSRSCPLCRr4::Info CellInfoSIHCSRSCPLCRr4::theInfo = {
	CellInfoSIHCSRSCPLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *CellInfoSIHCSECN0::itemsInfo[1] = {
	&CellIndividualOffset::theInfo,
};
bool CellInfoSIHCSECN0::itemsPres[1] = {
	0,
};
const CellInfoSIHCSECN0::Info CellInfoSIHCSECN0::theInfo = {
	CellInfoSIHCSECN0::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *CellInfoSIHCSECN0LCRr4::itemsInfo[1] = {
	&CellIndividualOffset::theInfo,
};
bool CellInfoSIHCSECN0LCRr4::itemsPres[1] = {
	0,
};
const CellInfoSIHCSECN0LCRr4::Info CellInfoSIHCSECN0LCRr4::theInfo = {
	CellInfoSIHCSECN0LCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *CellMeasuredResultsv920ext::itemsInfo[1] = {
	&CSGIdentity::theInfo,
};
bool CellMeasuredResultsv920ext::itemsPres[1] = {
	0,
};
const CellMeasuredResultsv920ext::Info CellMeasuredResultsv920ext::theInfo = {
	CellMeasuredResultsv920ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *CellMeasurementEventResults::choicesInfo[1] = {
	&CellMeasurementEventResultsFdd::theInfo,
};
const CellMeasurementEventResults::Info CellMeasurementEventResults::theInfo = {
	CellMeasurementEventResults::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *CellMeasurementEventResultsOnSecUlFreq::choicesInfo[1] = {
	&CellMeasurementEventResultsOnSecUlFreqFdd::theInfo,
};
const CellMeasurementEventResultsOnSecUlFreq::Info CellMeasurementEventResultsOnSecUlFreq::theInfo = {
	CellMeasurementEventResultsOnSecUlFreq::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *CellReportingQuantities::itemsInfo[1] = {
	&SFNSFNOTDType::theInfo,
};
bool CellReportingQuantities::itemsPres[1] = {
	1,
};
const CellReportingQuantities::Info CellReportingQuantities::theInfo = {
	CellReportingQuantities::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *CellSelectReselectInfoSIB1112::itemsInfo[1] = {
	&QOffsetSN::theInfo,
};
bool CellSelectReselectInfoSIB1112::itemsPres[1] = {
	0,
};
const CellSelectReselectInfoSIB1112::Info CellSelectReselectInfoSIB1112::theInfo = {
	CellSelectReselectInfoSIB1112::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *CellSelectReselectInfoSIB1112RSCP::itemsInfo[1] = {
	&QOffsetSN::theInfo,
};
bool CellSelectReselectInfoSIB1112RSCP::itemsPres[1] = {
	0,
};
const CellSelectReselectInfoSIB1112RSCP::Info CellSelectReselectInfoSIB1112RSCP::theInfo = {
	CellSelectReselectInfoSIB1112RSCP::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *CellSelectReselectInfoSIB1112ECN0::itemsInfo[1] = {
	&QOffsetSN::theInfo,
};
bool CellSelectReselectInfoSIB1112ECN0::itemsPres[1] = {
	0,
};
const CellSelectReselectInfoSIB1112ECN0::Info CellSelectReselectInfoSIB1112ECN0::theInfo = {
	CellSelectReselectInfoSIB1112ECN0::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *CellSelectReselectInfoSIB1112HCSRSCP::itemsInfo[1] = {
	&QOffsetSN::theInfo,
};
bool CellSelectReselectInfoSIB1112HCSRSCP::itemsPres[1] = {
	0,
};
const CellSelectReselectInfoSIB1112HCSRSCP::Info CellSelectReselectInfoSIB1112HCSRSCP::theInfo = {
	CellSelectReselectInfoSIB1112HCSRSCP::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *CellSelectReselectInfoSIB1112HCSECN0::itemsInfo[1] = {
	&QOffsetSN::theInfo,
};
bool CellSelectReselectInfoSIB1112HCSECN0::itemsPres[1] = {
	0,
};
const CellSelectReselectInfoSIB1112HCSECN0::Info CellSelectReselectInfoSIB1112HCSECN0::theInfo = {
	CellSelectReselectInfoSIB1112HCSECN0::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *CellSelectReselectInfov590ext::itemsInfo[1] = {
	&DeltaQrxlevmin::theInfo,
};
bool CellSelectReselectInfov590ext::itemsPres[1] = {
	0,
};
const CellSelectReselectInfov590ext::Info CellSelectReselectInfov590ext::theInfo = {
	CellSelectReselectInfov590ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *CellSelectReselectInfoPCHFACHv5b0ext::itemsInfo[1] = {
	&QHystSFine::theInfo,
};
bool CellSelectReselectInfoPCHFACHv5b0ext::itemsPres[1] = {
	0,
};
const CellSelectReselectInfoPCHFACHv5b0ext::Info CellSelectReselectInfoPCHFACHv5b0ext::theInfo = {
	CellSelectReselectInfoPCHFACHv5b0ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *TCRMax::choicesInfo[1] = {
	&TCRMaxNotUsed::theInfo,
};
const TCRMax::Info TCRMax::theInfo = {
	TCRMax::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *CellSelectReselectInfoTreselectionScalingv5c0ext::itemsInfo[1] = {
	&TCRMax::theInfo,
};
bool CellSelectReselectInfoTreselectionScalingv5c0ext::itemsPres[1] = {
	0,
};
const CellSelectReselectInfoTreselectionScalingv5c0ext::Info CellSelectReselectInfoTreselectionScalingv5c0ext::theInfo = {
	CellSelectReselectInfoTreselectionScalingv5c0ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *CountCSFNFramedifference::itemsInfo[1] = {
	&CountCSFNFramedifferenceCountCSFNHigh::theInfo,
};
bool CountCSFNFramedifference::itemsPres[1] = {
	1,
};
const CountCSFNFramedifference::Info CountCSFNFramedifference::theInfo = {
	CountCSFNFramedifference::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *CellSynchronisationInfoModeSpecificInfoFdd::itemsInfo[1] = {
	&CountCSFNFramedifference::theInfo,
};
bool CellSynchronisationInfoModeSpecificInfoFdd::itemsPres[1] = {
	0,
};
const CellSynchronisationInfoModeSpecificInfoFdd::Info CellSynchronisationInfoModeSpecificInfoFdd::theInfo = {
	CellSynchronisationInfoModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *CellSynchronisationInfoModeSpecificInfo::choicesInfo[1] = {
	&CellSynchronisationInfoModeSpecificInfoFdd::theInfo,
};
const CellSynchronisationInfoModeSpecificInfo::Info CellSynchronisationInfoModeSpecificInfo::theInfo = {
	CellSynchronisationInfoModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *CellSynchronisationInfo::itemsInfo[1] = {
	&CellSynchronisationInfoModeSpecificInfo::theInfo,
};
bool CellSynchronisationInfo::itemsPres[1] = {
	1,
};
const CellSynchronisationInfo::Info CellSynchronisationInfo::theInfo = {
	CellSynchronisationInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *CellToReport::itemsInfo[1] = {
	&BSICReported::theInfo,
};
bool CellToReport::itemsPres[1] = {
	1,
};
const CellToReport::Info CellToReport::theInfo = {
	CellToReport::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *CNAVclockModel::itemsInfo[1] = {
	&CNAVclockModelCnavToc::theInfo,
};
bool CNAVclockModel::itemsPres[1] = {
	0,
};
const CNAVclockModel::Info CNAVclockModel::theInfo = {
	CNAVclockModel::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *CSGCellInfoModeSpecificInfoFdd::itemsInfo[1] = {
	&PrimaryCPICHInfo::theInfo,
};
bool CSGCellInfoModeSpecificInfoFdd::itemsPres[1] = {
	1,
};
const CSGCellInfoModeSpecificInfoFdd::Info CSGCellInfoModeSpecificInfoFdd::theInfo = {
	CSGCellInfoModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *CSGCellInfoModeSpecificInfo::choicesInfo[1] = {
	&CSGCellInfoModeSpecificInfoFdd::theInfo,
};
const CSGCellInfoModeSpecificInfo::Info CSGCellInfoModeSpecificInfo::theInfo = {
	CSGCellInfoModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *CSGCellInfo::itemsInfo[1] = {
	&CSGCellInfoModeSpecificInfo::theInfo,
};
bool CSGCellInfo::itemsPres[1] = {
	1,
};
const CSGCellInfo::Info CSGCellInfo::theInfo = {
	CSGCellInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *CSGInterFreqCellInfo::itemsInfo[1] = {
	&FrequencyInfo::theInfo,
};
bool CSGInterFreqCellInfo::itemsPres[1] = {
	1,
};
const CSGInterFreqCellInfo::Info CSGInterFreqCellInfo::theInfo = {
	CSGInterFreqCellInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *CSGProximityDetection::itemsInfo[1] = {
	&CSGProximityDetectionuTRACSGProximityDetec::theInfo,
};
bool CSGProximityDetection::itemsPres[1] = {
	0,
};
const CSGProximityDetection::Info CSGProximityDetection::theInfo = {
	CSGProximityDetection::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *CSGProximityIndication::itemsInfo[1] = {
	&CSGProximityIndicationcSGproximityInd::theInfo,
};
bool CSGProximityIndication::itemsPres[1] = {
	1,
};
const CSGProximityIndication::Info CSGProximityIndication::theInfo = {
	CSGProximityIndication::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DataBitAssistance::itemsInfo[1] = {
	&GANSSSignalId::theInfo,
};
bool DataBitAssistance::itemsPres[1] = {
	1,
};
const DataBitAssistance::Info DataBitAssistance::theInfo = {
	DataBitAssistance::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DataBitAssistanceSat::itemsInfo[1] = {
	&DataBitAssistanceSatSatID::theInfo,
};
bool DataBitAssistanceSat::itemsPres[1] = {
	1,
};
const DataBitAssistanceSat::Info DataBitAssistanceSat::theInfo = {
	DataBitAssistanceSat::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DeltaRSCPPerCell::itemsInfo[1] = {
	&DeltaRSCP::theInfo,
};
bool DeltaRSCPPerCell::itemsPres[1] = {
	0,
};
const DeltaRSCPPerCell::Info DeltaRSCPPerCell::theInfo = {
	DeltaRSCPPerCell::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DeltaUT1::itemsInfo[1] = {
	&DeltaUT1B1::theInfo,
};
bool DeltaUT1::itemsPres[1] = {
	1,
};
const DeltaUT1::Info DeltaUT1::theInfo = {
	DeltaUT1::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DGANSSInfo::itemsInfo[1] = {
	&GANSSSignalId::theInfo,
};
bool DGANSSInfo::itemsPres[1] = {
	0,
};
const DGANSSInfo::Info DGANSSInfo::theInfo = {
	DGANSSInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DGANSSInfor9::itemsInfo[1] = {
	&GANSSSignalId::theInfo,
};
bool DGANSSInfor9::itemsPres[1] = {
	0,
};
const DGANSSInfor9::Info DGANSSInfor9::theInfo = {
	DGANSSInfor9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DGANSSSignalInformationv920ext::itemsInfo[1] = {
	&UDREGrowthRate::theInfo,
};
bool DGANSSSignalInformationv920ext::itemsPres[1] = {
	0,
};
const DGANSSSignalInformationv920ext::Info DGANSSSignalInformationv920ext::theInfo = {
	DGANSSSignalInformationv920ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DGANSSInfov920ext::itemsInfo[1] = {
	&DGANSSSignalInformationListv920ext::theInfo,
};
bool DGANSSInfov920ext::itemsPres[1] = {
	0,
};
const DGANSSInfov920ext::Info DGANSSInfov920ext::theInfo = {
	DGANSSInfov920ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DGANSSSignalInformation::itemsInfo[1] = {
	&DGANSSSignalInformationSatId::theInfo,
};
bool DGANSSSignalInformation::itemsPres[1] = {
	1,
};
const DGANSSSignalInformation::Info DGANSSSignalInformation::theInfo = {
	DGANSSSignalInformation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DGANSSSignalInformationr9::itemsInfo[1] = {
	&DGANSSSignalInformationr9SatId::theInfo,
};
bool DGANSSSignalInformationr9::itemsPres[1] = {
	0,
};
const DGANSSSignalInformationr9::Info DGANSSSignalInformationr9::theInfo = {
	DGANSSSignalInformationr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DGPSCorrectionSatInfo::itemsInfo[1] = {
	&SatID::theInfo,
};
bool DGPSCorrectionSatInfo::itemsPres[1] = {
	0,
};
const DGPSCorrectionSatInfo::Info DGPSCorrectionSatInfo::theInfo = {
	DGPSCorrectionSatInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DGPSCorrectionSatInfor9::itemsInfo[1] = {
	&SatID::theInfo,
};
bool DGPSCorrectionSatInfor9::itemsPres[1] = {
	0,
};
const DGPSCorrectionSatInfor9::Info DGPSCorrectionSatInfor9::theInfo = {
	DGPSCorrectionSatInfor9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DGPSCorrectionSatInfov920ext::itemsInfo[1] = {
	&UDREGrowthRate::theInfo,
};
bool DGPSCorrectionSatInfov920ext::itemsPres[1] = {
	0,
};
const DGPSCorrectionSatInfov920ext::Info DGPSCorrectionSatInfov920ext::theInfo = {
	DGPSCorrectionSatInfov920ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *EllipsoidPoint::itemsInfo[1] = {
	&EllipsoidPointlatitudeSign::theInfo,
};
bool EllipsoidPoint::itemsPres[1] = {
	1,
};
const EllipsoidPoint::Info EllipsoidPoint::theInfo = {
	EllipsoidPoint::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *EllipsoidPointAltitude::itemsInfo[1] = {
	&EllipsoidPointAltitudelatitudeSign::theInfo,
};
bool EllipsoidPointAltitude::itemsPres[1] = {
	1,
};
const EllipsoidPointAltitude::Info EllipsoidPointAltitude::theInfo = {
	EllipsoidPointAltitude::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *EllipsoidPointAltitudeEllipsoide::itemsInfo[1] = {
	&EllipsoidPointAltitudeEllipsoidelatitudeSign::theInfo,
};
bool EllipsoidPointAltitudeEllipsoide::itemsPres[1] = {
	1,
};
const EllipsoidPointAltitudeEllipsoide::Info EllipsoidPointAltitudeEllipsoide::theInfo = {
	EllipsoidPointAltitudeEllipsoide::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *EllipsoidPointUncertCircle::itemsInfo[1] = {
	&EllipsoidPointUncertCirclelatitudeSign::theInfo,
};
bool EllipsoidPointUncertCircle::itemsPres[1] = {
	1,
};
const EllipsoidPointUncertCircle::Info EllipsoidPointUncertCircle::theInfo = {
	EllipsoidPointUncertCircle::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *EllipsoidPointUncertEllipse::itemsInfo[1] = {
	&EllipsoidPointUncertEllipselatitudeSign::theInfo,
};
bool EllipsoidPointUncertEllipse::itemsPres[1] = {
	1,
};
const EllipsoidPointUncertEllipse::Info EllipsoidPointUncertEllipse::theInfo = {
	EllipsoidPointUncertEllipse::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *EutraEventResult::itemsInfo[1] = {
	&EARFCN::theInfo,
};
bool EutraEventResult::itemsPres[1] = {
	1,
};
const EutraEventResult::Info EutraEventResult::theInfo = {
	EutraEventResult::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *EUTRAEventResults::itemsInfo[1] = {
	&EventIDInterRAT::theInfo,
};
bool EUTRAEventResults::itemsPres[1] = {
	1,
};
const EUTRAEventResults::Info EUTRAEventResults::theInfo = {
	EUTRAEventResults::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *EUTRAFrequencyAndPriorityInfo::itemsInfo[1] = {
	&EARFCN::theInfo,
};
bool EUTRAFrequencyAndPriorityInfo::itemsPres[1] = {
	1,
};
const EUTRAFrequencyAndPriorityInfo::Info EUTRAFrequencyAndPriorityInfo::theInfo = {
	EUTRAFrequencyAndPriorityInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *EUTRAFrequencyAndPriorityInfov920ext::itemsInfo[1] = {
	&EUTRAFrequencyAndPriorityInfov920extQqualMinEUTRA::theInfo,
};
bool EUTRAFrequencyAndPriorityInfov920ext::itemsPres[1] = {
	0,
};
const EUTRAFrequencyAndPriorityInfov920ext::Info EUTRAFrequencyAndPriorityInfov920ext::theInfo = {
	EUTRAFrequencyAndPriorityInfov920ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *EUTRAFrequencyRemoval::choicesInfo[1] = {
	&EUTRAFrequencyRemovalRemoveAllFrequencies::theInfo,
};
const EUTRAFrequencyRemoval::Info EUTRAFrequencyRemoval::theInfo = {
	EUTRAFrequencyRemoval::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *EUTRAFrequencyList::itemsInfo[1] = {
	&EUTRAFrequencyRemoval::theInfo,
};
bool EUTRAFrequencyList::itemsPres[1] = {
	0,
};
const EUTRAFrequencyList::Info EUTRAFrequencyList::theInfo = {
	EUTRAFrequencyList::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *EUTRAFrequencyListr9::itemsInfo[1] = {
	&EUTRAFrequencyRemoval::theInfo,
};
bool EUTRAFrequencyListr9::itemsPres[1] = {
	0,
};
const EUTRAFrequencyListr9::Info EUTRAFrequencyListr9::theInfo = {
	EUTRAFrequencyListr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *EUTRASIAcquisition::itemsInfo[1] = {
	&EARFCN::theInfo,
};
bool EUTRASIAcquisition::itemsPres[1] = {
	1,
};
const EUTRASIAcquisition::Info EUTRASIAcquisition::theInfo = {
	EUTRASIAcquisition::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *EUTRAMeasuredCells::itemsInfo[1] = {
	&EUTRAPhysicalCellIdentity::theInfo,
};
bool EUTRAMeasuredCells::itemsPres[1] = {
	0,
};
const EUTRAMeasuredCells::Info EUTRAMeasuredCells::theInfo = {
	EUTRAMeasuredCells::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *EutraMeasuredResult::itemsInfo[1] = {
	&EARFCN::theInfo,
};
bool EutraMeasuredResult::itemsPres[1] = {
	1,
};
const EutraMeasuredResult::Info EutraMeasuredResult::theInfo = {
	EutraMeasuredResult::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *EUTRAMeasuredResults::itemsInfo[1] = {
	&EutraMeasuredResultList::theInfo,
};
bool EUTRAMeasuredResults::itemsPres[1] = {
	1,
};
const EUTRAMeasuredResults::Info EUTRAMeasuredResults::theInfo = {
	EUTRAMeasuredResults::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *EUTRASIacquisitionResultsCgiInfo::itemsInfo[1] = {
	&PLMNIdentity::theInfo,
};
bool EUTRASIacquisitionResultsCgiInfo::itemsPres[1] = {
	1,
};
const EUTRASIacquisitionResultsCgiInfo::Info EUTRASIacquisitionResultsCgiInfo::theInfo = {
	EUTRASIacquisitionResultsCgiInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *EUTRASIacquisitionResults::itemsInfo[1] = {
	&EUTRASIacquisitionResultsCgiInfo::theInfo,
};
bool EUTRASIacquisitionResults::itemsPres[1] = {
	0,
};
const EUTRASIacquisitionResults::Info EUTRASIacquisitionResults::theInfo = {
	EUTRASIacquisitionResults::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *EUTRAMeasuredCellsv920ext::itemsInfo[1] = {
	&EUTRASIacquisitionResults::theInfo,
};
bool EUTRAMeasuredCellsv920ext::itemsPres[1] = {
	1,
};
const EUTRAMeasuredCellsv920ext::Info EUTRAMeasuredCellsv920ext::theInfo = {
	EUTRAMeasuredCellsv920ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *EutraMeasuredResultv920ext::itemsInfo[1] = {
	&EutraMeasuredResultv920extMeasuredEUTRACellsv920ext::theInfo,
};
bool EutraMeasuredResultv920ext::itemsPres[1] = {
	1,
};
const EutraMeasuredResultv920ext::Info EutraMeasuredResultv920ext::theInfo = {
	EutraMeasuredResultv920ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *EUTRAMeasuredResultsv920ext::itemsInfo[1] = {
	&EutraMeasuredResultListv920ext::theInfo,
};
bool EUTRAMeasuredResultsv920ext::itemsPres[1] = {
	1,
};
const EUTRAMeasuredResultsv920ext::Info EUTRAMeasuredResultsv920ext::theInfo = {
	EUTRAMeasuredResultsv920ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *EUTRAFrequencyInfo::itemsInfo[1] = {
	&EARFCN::theInfo,
};
bool EUTRAFrequencyInfo::itemsPres[1] = {
	0,
};
const EUTRAFrequencyInfo::Info EUTRAFrequencyInfo::theInfo = {
	EUTRAFrequencyInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *Event1ar4::itemsInfo[1] = {
	&TriggeringCondition2::theInfo,
};
bool Event1ar4::itemsPres[1] = {
	1,
};
const Event1ar4::Info Event1ar4::theInfo = {
	Event1ar4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *Event1aOnSecUlFreqr9::itemsInfo[1] = {
	&TriggeringCondition2::theInfo,
};
bool Event1aOnSecUlFreqr9::itemsPres[1] = {
	1,
};
const Event1aOnSecUlFreqr9::Info Event1aOnSecUlFreqr9::theInfo = {
	Event1aOnSecUlFreqr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *Event1b::itemsInfo[1] = {
	&TriggeringCondition1::theInfo,
};
bool Event1b::itemsPres[1] = {
	1,
};
const Event1b::Info Event1b::theInfo = {
	Event1b::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *Event1br4::itemsInfo[1] = {
	&TriggeringCondition1::theInfo,
};
bool Event1br4::itemsPres[1] = {
	1,
};
const Event1br4::Info Event1br4::theInfo = {
	Event1br4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *Event1br7::itemsInfo[1] = {
	&TriggeringCondition1::theInfo,
};
bool Event1br7::itemsPres[1] = {
	0,
};
const Event1br7::Info Event1br7::theInfo = {
	Event1br7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *Event1bOnSecUlFreqr9::itemsInfo[1] = {
	&TriggeringCondition1::theInfo,
};
bool Event1bOnSecUlFreqr9::itemsPres[1] = {
	0,
};
const Event1bOnSecUlFreqr9::Info Event1bOnSecUlFreqr9::theInfo = {
	Event1bOnSecUlFreqr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *Event1bLCRr4::itemsInfo[1] = {
	&TriggeringCondition1::theInfo,
};
bool Event1bLCRr4::itemsPres[1] = {
	1,
};
const Event1bLCRr4::Info Event1bLCRr4::theInfo = {
	Event1bLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *Event1c::itemsInfo[1] = {
	&ReplacementActivationThreshold::theInfo,
};
bool Event1c::itemsPres[1] = {
	1,
};
const Event1c::Info Event1c::theInfo = {
	Event1c::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *Event1d::itemsInfo[1] = {
	&TriggeringCondition2::theInfo,
};
bool Event1d::itemsPres[1] = {
	0,
};
const Event1d::Info Event1d::theInfo = {
	Event1d::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *Event1e::itemsInfo[1] = {
	&TriggeringCondition2::theInfo,
};
bool Event1e::itemsPres[1] = {
	1,
};
const Event1e::Info Event1e::theInfo = {
	Event1e::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *Event1er6::itemsInfo[1] = {
	&TriggeringCondition2::theInfo,
};
bool Event1er6::itemsPres[1] = {
	1,
};
const Event1er6::Info Event1er6::theInfo = {
	Event1er6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *Event1f::itemsInfo[1] = {
	&TriggeringCondition1::theInfo,
};
bool Event1f::itemsPres[1] = {
	1,
};
const Event1f::Info Event1f::theInfo = {
	Event1f::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *Event1fr6::itemsInfo[1] = {
	&TriggeringCondition1::theInfo,
};
bool Event1fr6::itemsPres[1] = {
	1,
};
const Event1fr6::Info Event1fr6::theInfo = {
	Event1fr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *Event1jr6::itemsInfo[1] = {
	&ReplacementActivationThreshold::theInfo,
};
bool Event1jr6::itemsPres[1] = {
	1,
};
const Event1jr6::Info Event1jr6::theInfo = {
	Event1jr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *Event2a::itemsInfo[1] = {
	&Threshold::theInfo,
};
bool Event2a::itemsPres[1] = {
	0,
};
const Event2a::Info Event2a::theInfo = {
	Event2a::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *Event2ar6::itemsInfo[1] = {
	&W::theInfo,
};
bool Event2ar6::itemsPres[1] = {
	0,
};
const Event2ar6::Info Event2ar6::theInfo = {
	Event2ar6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *Event2b::itemsInfo[1] = {
	&Threshold::theInfo,
};
bool Event2b::itemsPres[1] = {
	0,
};
const Event2b::Info Event2b::theInfo = {
	Event2b::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *Event2br6::itemsInfo[1] = {
	&Thresholdr6::theInfo,
};
bool Event2br6::itemsPres[1] = {
	0,
};
const Event2br6::Info Event2br6::theInfo = {
	Event2br6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *Event2c::itemsInfo[1] = {
	&HysteresisInterFreq::theInfo,
};
bool Event2c::itemsPres[1] = {
	0,
};
const Event2c::Info Event2c::theInfo = {
	Event2c::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *Event2cr6::itemsInfo[1] = {
	&HysteresisInterFreq::theInfo,
};
bool Event2cr6::itemsPres[1] = {
	0,
};
const Event2cr6::Info Event2cr6::theInfo = {
	Event2cr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *Event2d::itemsInfo[1] = {
	&Threshold::theInfo,
};
bool Event2d::itemsPres[1] = {
	0,
};
const Event2d::Info Event2d::theInfo = {
	Event2d::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *Event2dr6::itemsInfo[1] = {
	&Thresholdr6::theInfo,
};
bool Event2dr6::itemsPres[1] = {
	0,
};
const Event2dr6::Info Event2dr6::theInfo = {
	Event2dr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *Event2e::itemsInfo[1] = {
	&HysteresisInterFreq::theInfo,
};
bool Event2e::itemsPres[1] = {
	0,
};
const Event2e::Info Event2e::theInfo = {
	Event2e::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *Event2er6::itemsInfo[1] = {
	&HysteresisInterFreq::theInfo,
};
bool Event2er6::itemsPres[1] = {
	0,
};
const Event2er6::Info Event2er6::theInfo = {
	Event2er6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *Event2f::itemsInfo[1] = {
	&Threshold::theInfo,
};
bool Event2f::itemsPres[1] = {
	0,
};
const Event2f::Info Event2f::theInfo = {
	Event2f::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *Event2fr6::itemsInfo[1] = {
	&Thresholdr6::theInfo,
};
bool Event2fr6::itemsPres[1] = {
	0,
};
const Event2fr6::Info Event2fr6::theInfo = {
	Event2fr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *Event3a::itemsInfo[1] = {
	&Threshold::theInfo,
};
bool Event3a::itemsPres[1] = {
	0,
};
const Event3a::Info Event3a::theInfo = {
	Event3a::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *Event3b::itemsInfo[1] = {
	&Threshold::theInfo,
};
bool Event3b::itemsPres[1] = {
	0,
};
const Event3b::Info Event3b::theInfo = {
	Event3b::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *Event3c::itemsInfo[1] = {
	&Threshold::theInfo,
};
bool Event3c::itemsPres[1] = {
	0,
};
const Event3c::Info Event3c::theInfo = {
	Event3c::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *Event3d::itemsInfo[1] = {
	&Hysteresis::theInfo,
};
bool Event3d::itemsPres[1] = {
	0,
};
const Event3d::Info Event3d::theInfo = {
	Event3d::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *IntraFreqEventResults::itemsInfo[1] = {
	&EventIDIntraFreq::theInfo,
};
bool IntraFreqEventResults::itemsPres[1] = {
	1,
};
const IntraFreqEventResults::Info IntraFreqEventResults::theInfo = {
	IntraFreqEventResults::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *EventResults::choicesInfo[1] = {
	&IntraFreqEventResults::theInfo,
};
const EventResults::Info EventResults::theInfo = {
	EventResults::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *UEPositioningPositionEstimateInfov770extReferenceTimeOptions::choicesInfo[1] = {
	&UEPositioningPositionEstimateInfov770extReferenceTimeOptionsEarlierthanr7::theInfo,
};
const UEPositioningPositionEstimateInfov770extReferenceTimeOptions::Info UEPositioningPositionEstimateInfov770extReferenceTimeOptions::theInfo = {
	UEPositioningPositionEstimateInfov770extReferenceTimeOptions::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *UEPositioningPositionEstimateInfov770ext::itemsInfo[1] = {
	&UEPositioningPositionEstimateInfov770extReferenceTimeOptions::theInfo,
};
bool UEPositioningPositionEstimateInfov770ext::itemsPres[1] = {
	0,
};
const UEPositioningPositionEstimateInfov770ext::Info UEPositioningPositionEstimateInfov770ext::theInfo = {
	UEPositioningPositionEstimateInfov770ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEPositioningMeasurementEventResultsv770ext::choicesInfo[1] = {
	&UEPositioningPositionEstimateInfov770ext::theInfo,
};
const UEPositioningMeasurementEventResultsv770ext::Info UEPositioningMeasurementEventResultsv770ext::theInfo = {
	UEPositioningMeasurementEventResultsv770ext::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *EventResultsv770ext::choicesInfo[1] = {
	&UEPositioningMeasurementEventResultsv770ext::theInfo,
};
const EventResultsv770ext::Info EventResultsv770ext::theInfo = {
	EventResultsv770ext::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *GANSSGenericMeasurementInfov860ext::itemsInfo[0] = {
};
bool GANSSGenericMeasurementInfov860ext::itemsPres[0] = {
};
const GANSSGenericMeasurementInfov860ext::Info GANSSGenericMeasurementInfov860ext::theInfo = {
	GANSSGenericMeasurementInfov860ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *UEPositioningGANSSMeasuredResultsv860ext::itemsInfo[1] = {
	&GANSSGenericMeasurementInfov860ext::theInfo,
};
bool UEPositioningGANSSMeasuredResultsv860ext::itemsPres[1] = {
	1,
};
const UEPositioningGANSSMeasuredResultsv860ext::Info UEPositioningGANSSMeasuredResultsv860ext::theInfo = {
	UEPositioningGANSSMeasuredResultsv860ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UEPositioningMeasurementEventResultsv860ext::choicesInfo[1] = {
	&UEPositioningGANSSMeasuredResultsv860ext::theInfo,
};
const UEPositioningMeasurementEventResultsv860ext::Info UEPositioningMeasurementEventResultsv860ext::theInfo = {
	UEPositioningMeasurementEventResultsv860ext::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *EventResultsv860ext::choicesInfo[1] = {
	&UEPositioningMeasurementEventResultsv860ext::theInfo,
};
const EventResultsv860ext::Info EventResultsv860ext::theInfo = {
	EventResultsv860ext::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *IntraFreqEventResultsOnSecUlFreq::itemsInfo[1] = {
	&EventIDIntraFreq::theInfo,
};
bool IntraFreqEventResultsOnSecUlFreq::itemsPres[1] = {
	1,
};
const IntraFreqEventResultsOnSecUlFreq::Info IntraFreqEventResultsOnSecUlFreq::theInfo = {
	IntraFreqEventResultsOnSecUlFreq::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *EventResultsOnSecUlFreq::itemsInfo[1] = {
	&IntraFreqEventResultsOnSecUlFreq::theInfo,
};
bool EventResultsOnSecUlFreq::itemsPres[1] = {
	1,
};
const EventResultsOnSecUlFreq::Info EventResultsOnSecUlFreq::theInfo = {
	EventResultsOnSecUlFreq::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ExtraDoppler::itemsInfo[1] = {
	&ExtraDopplerDopplerFirstOrder::theInfo,
};
bool ExtraDoppler::itemsPres[1] = {
	1,
};
const ExtraDoppler::Info ExtraDoppler::theInfo = {
	ExtraDoppler::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ExtraDopplerInfo::itemsInfo[1] = {
	&ExtraDopplerInfoDoppler1stOrder::theInfo,
};
bool ExtraDopplerInfo::itemsPres[1] = {
	1,
};
const ExtraDopplerInfo::Info ExtraDopplerInfo::theInfo = {
	ExtraDopplerInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *FACHMeasurementOccasionInfo::itemsInfo[1] = {
	&FACHMeasurementOccasionInfoFACHmeasoccasioncoeff::theInfo,
};
bool FACHMeasurementOccasionInfo::itemsPres[1] = {
	0,
};
const FACHMeasurementOccasionInfo::Info FACHMeasurementOccasionInfo::theInfo = {
	FACHMeasurementOccasionInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *FACHMeasurementOccasionInfoLCRr4ext::itemsInfo[1] = {
	&FACHMeasurementOccasionInfoLCRr4extInterfreqTDD128measind::theInfo,
};
bool FACHMeasurementOccasionInfoLCRr4ext::itemsPres[1] = {
	1,
};
const FACHMeasurementOccasionInfoLCRr4ext::Info FACHMeasurementOccasionInfoLCRr4ext::theInfo = {
	FACHMeasurementOccasionInfoLCRr4ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ForbiddenAffectCell::choicesInfo[1] = {
	&PrimaryCPICHInfo::theInfo,
};
const ForbiddenAffectCell::Info ForbiddenAffectCell::theInfo = {
	ForbiddenAffectCell::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *ForbiddenAffectCellr4::choicesInfo[1] = {
	&PrimaryCPICHInfo::theInfo,
};
const ForbiddenAffectCellr4::Info ForbiddenAffectCellr4::theInfo = {
	ForbiddenAffectCellr4::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *ForbiddenAffectCellLCRr4::itemsInfo[1] = {
	&PrimaryCCPCHInfoLCRr4::theInfo,
};
bool ForbiddenAffectCellLCRr4::itemsPres[1] = {
	1,
};
const ForbiddenAffectCellLCRr4::Info ForbiddenAffectCellLCRr4::theInfo = {
	ForbiddenAffectCellLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ForbiddenAffectCellOnSecULFreq::itemsInfo[1] = {
	&PrimaryCPICHInfo::theInfo,
};
bool ForbiddenAffectCellOnSecULFreq::itemsPres[1] = {
	1,
};
const ForbiddenAffectCellOnSecULFreq::Info ForbiddenAffectCellOnSecULFreq::theInfo = {
	ForbiddenAffectCellOnSecULFreq::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *GanssDataBits::itemsInfo[1] = {
	&GanssDataBitsGanssTod::theInfo,
};
bool GanssDataBits::itemsPres[1] = {
	1,
};
const GanssDataBits::Info GanssDataBits::theInfo = {
	GanssDataBits::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *GANSSDecipheringKeys::itemsInfo[1] = {
	&GANSSDecipheringKeysCurrentDecipheringKey::theInfo,
};
bool GANSSDecipheringKeys::itemsPres[1] = {
	1,
};
const GANSSDecipheringKeys::Info GANSSDecipheringKeys::theInfo = {
	GANSSDecipheringKeys::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *GANSSGenericData::itemsInfo[1] = {
	&GANSSGenericDataGanssId::theInfo,
};
bool GANSSGenericData::itemsPres[1] = {
	0,
};
const GANSSGenericData::Info GANSSGenericData::theInfo = {
	GANSSGenericData::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *GANSSGenericDatav860ext::itemsInfo[1] = {
	&UEPositioningGANSSSBASID::theInfo,
};
bool GANSSGenericDatav860ext::itemsPres[1] = {
	0,
};
const GANSSGenericDatav860ext::Info GANSSGenericDatav860ext::theInfo = {
	GANSSGenericDatav860ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *GANSSGenericDatar8::itemsInfo[1] = {
	&GANSSGenericDatar8GanssId::theInfo,
};
bool GANSSGenericDatar8::itemsPres[1] = {
	0,
};
const GANSSGenericDatar8::Info GANSSGenericDatar8::theInfo = {
	GANSSGenericDatar8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *GANSSGenericDatar9::itemsInfo[1] = {
	&GANSSGenericDatar9GanssId::theInfo,
};
bool GANSSGenericDatar9::itemsPres[1] = {
	0,
};
const GANSSGenericDatar9::Info GANSSGenericDatar9::theInfo = {
	GANSSGenericDatar9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEPositioningDGANSSCorrectionsv920ext::itemsInfo[1] = {
	&DGANSSInfoListv920ext::theInfo,
};
bool UEPositioningDGANSSCorrectionsv920ext::itemsPres[1] = {
	1,
};
const UEPositioningDGANSSCorrectionsv920ext::Info UEPositioningDGANSSCorrectionsv920ext::theInfo = {
	UEPositioningDGANSSCorrectionsv920ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *GANSSGenericDatav920ext::itemsInfo[1] = {
	&UEPositioningDGANSSCorrectionsv920ext::theInfo,
};
bool GANSSGenericDatav920ext::itemsPres[1] = {
	0,
};
const GANSSGenericDatav920ext::Info GANSSGenericDatav920ext::theInfo = {
	GANSSGenericDatav920ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *GANSSGenericMeasurementInfo::itemsInfo[0] = {
};
bool GANSSGenericMeasurementInfo::itemsPres[0] = {
};
const GANSSGenericMeasurementInfo::Info GANSSGenericMeasurementInfo::theInfo = {
	GANSSGenericMeasurementInfo::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *GANSSMeasurementParameters::itemsInfo[0] = {
};
bool GANSSMeasurementParameters::itemsPres[0] = {
};
const GANSSMeasurementParameters::Info GANSSMeasurementParameters::theInfo = {
	GANSSMeasurementParameters::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *GANSSMeasurementParametersv860ext::itemsInfo[0] = {
};
bool GANSSMeasurementParametersv860ext::itemsPres[0] = {
};
const GANSSMeasurementParametersv860ext::Info GANSSMeasurementParametersv860ext::theInfo = {
	GANSSMeasurementParametersv860ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *GANSSMeasurementSignalList::itemsInfo[0] = {
};
bool GANSSMeasurementSignalList::itemsPres[0] = {
};
const GANSSMeasurementSignalList::Info GANSSMeasurementSignalList::theInfo = {
	GANSSMeasurementSignalList::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *GANSSMeasurementSignalListv860ext::itemsInfo[0] = {
};
bool GANSSMeasurementSignalListv860ext::itemsPres[0] = {
};
const GANSSMeasurementSignalListv860ext::Info GANSSMeasurementSignalListv860ext::theInfo = {
	GANSSMeasurementSignalListv860ext::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *GanssNavigationModelAdditionalData::itemsInfo[1] = {
	&GanssNavigationModelAdditionalDataGanssWeek::theInfo,
};
bool GanssNavigationModelAdditionalData::itemsPres[1] = {
	0,
};
const GanssNavigationModelAdditionalData::Info GanssNavigationModelAdditionalData::theInfo = {
	GanssNavigationModelAdditionalData::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *GANSSReferenceTimeOnly::itemsInfo[1] = {
	&GANSSReferenceTimeOnlyGANSStod::theInfo,
};
bool GANSSReferenceTimeOnly::itemsPres[1] = {
	0,
};
const GANSSReferenceTimeOnly::Info GANSSReferenceTimeOnly::theInfo = {
	GANSSReferenceTimeOnly::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *GanssReqGenericData::itemsInfo[1] = {
	&GanssReqGenericDataGanssId::theInfo,
};
bool GanssReqGenericData::itemsPres[1] = {
	0,
};
const GanssReqGenericData::Info GanssReqGenericData::theInfo = {
	GanssReqGenericData::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *GanssReqGenericDatav860ext::itemsInfo[1] = {
	&UEPositioningGANSSSBASID::theInfo,
};
bool GanssReqGenericDatav860ext::itemsPres[1] = {
	0,
};
const GanssReqGenericDatav860ext::Info GanssReqGenericDatav860ext::theInfo = {
	GanssReqGenericDatav860ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *GANSSSatelliteInformation::itemsInfo[1] = {
	&GANSSSatelliteInformationGanssSatId::theInfo,
};
bool GANSSSatelliteInformation::itemsPres[1] = {
	0,
};
const GANSSSatelliteInformation::Info GANSSSatelliteInformation::theInfo = {
	GANSSSatelliteInformation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEPositioningGANSSTimeModel::itemsInfo[1] = {
	&UEPositioningGANSSTimeModelGanssta1::theInfo,
};
bool UEPositioningGANSSTimeModel::itemsPres[1] = {
	0,
};
const UEPositioningGANSSTimeModel::Info UEPositioningGANSSTimeModel::theInfo = {
	UEPositioningGANSSTimeModel::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *GANSSSATInfoAlmanacKp::itemsInfo[1] = {
	&GANSSSATInfoAlmanacKpSvId::theInfo,
};
bool GANSSSATInfoAlmanacKp::itemsPres[1] = {
	1,
};
const GANSSSATInfoAlmanacKp::Info GANSSSATInfoAlmanacKp::theInfo = {
	GANSSSATInfoAlmanacKp::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *GANSSSATInfoAlmanacMIDIkp::itemsInfo[1] = {
	&GANSSSATInfoAlmanacMIDIkpSvID::theInfo,
};
bool GANSSSATInfoAlmanacMIDIkp::itemsPres[1] = {
	1,
};
const GANSSSATInfoAlmanacMIDIkp::Info GANSSSATInfoAlmanacMIDIkp::theInfo = {
	GANSSSATInfoAlmanacMIDIkp::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *GANSSSATInfoAlmanacNAVkp::itemsInfo[1] = {
	&GANSSSATInfoAlmanacNAVkpSvID::theInfo,
};
bool GANSSSATInfoAlmanacNAVkp::itemsPres[1] = {
	1,
};
const GANSSSATInfoAlmanacNAVkp::Info GANSSSATInfoAlmanacNAVkp::theInfo = {
	GANSSSATInfoAlmanacNAVkp::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *GANSSSATInfoAlmanacREDkp::itemsInfo[1] = {
	&GANSSSATInfoAlmanacREDkpSvID::theInfo,
};
bool GANSSSATInfoAlmanacREDkp::itemsPres[1] = {
	1,
};
const GANSSSATInfoAlmanacREDkp::Info GANSSSATInfoAlmanacREDkp::theInfo = {
	GANSSSATInfoAlmanacREDkp::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *GanssSatInfoAddNav::itemsInfo[1] = {
	&GanssSatInfoAddNavSatId::theInfo,
};
bool GanssSatInfoAddNav::itemsPres[1] = {
	1,
};
const GanssSatInfoAddNav::Info GanssSatInfoAddNav::theInfo = {
	GanssSatInfoAddNav::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *GanssSatInfoNav::itemsInfo[1] = {
	&GanssSatInfoNavSatId::theInfo,
};
bool GanssSatInfoNav::itemsPres[1] = {
	1,
};
const GanssSatInfoNav::Info GanssSatInfoNav::theInfo = {
	GanssSatInfoNav::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *GANSSStormFlag::itemsInfo[1] = {
	&GANSSStormFlagStormflagone::theInfo,
};
bool GANSSStormFlag::itemsPres[1] = {
	1,
};
const GANSSStormFlag::Info GANSSStormFlag::theInfo = {
	GANSSStormFlag::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *GLONASSclockModel::itemsInfo[1] = {
	&GLONASSclockModelGloTau::theInfo,
};
bool GLONASSclockModel::itemsPres[1] = {
	0,
};
const GLONASSclockModel::Info GLONASSclockModel::theInfo = {
	GLONASSclockModel::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *GPSMeasurementParam::itemsInfo[1] = {
	&GPSMeasurementParamSatelliteID::theInfo,
};
bool GPSMeasurementParam::itemsPres[1] = {
	1,
};
const GPSMeasurementParam::Info GPSMeasurementParam::theInfo = {
	GPSMeasurementParam::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *GSMCellGroup::itemsInfo[1] = {
	&BCCHARFCN::theInfo,
};
bool GSMCellGroup::itemsPres[1] = {
	1,
};
const GSMCellGroup::Info GSMCellGroup::theInfo = {
	GSMCellGroup::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *GSMMeasuredResults::itemsInfo[1] = {
	&GSMCarrierRSSI::theInfo,
};
bool GSMMeasuredResults::itemsPres[1] = {
	0,
};
const GSMMeasuredResults::Info GSMMeasuredResults::theInfo = {
	GSMMeasuredResults::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *GPSTOWAssist::itemsInfo[1] = {
	&SatID::theInfo,
};
bool GPSTOWAssist::itemsPres[1] = {
	1,
};
const GPSTOWAssist::Info GPSTOWAssist::theInfo = {
	GPSTOWAssist::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *GSMCellID::itemsInfo[1] = {
	&GSMCellIDGsmCellID::theInfo,
};
bool GSMCellID::itemsPres[1] = {
	1,
};
const GSMCellID::Info GSMCellID::theInfo = {
	GSMCellID::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *GSMPriorityInfo::itemsInfo[1] = {
	&GSMCellGroup::theInfo,
};
bool GSMPriorityInfo::itemsPres[1] = {
	1,
};
const GSMPriorityInfo::Info GSMPriorityInfo::theInfo = {
	GSMPriorityInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PenaltyTimeRSCP::choicesInfo[1] = {
	&PenaltyTimeRSCPNotUsed::theInfo,
};
const PenaltyTimeRSCP::Info PenaltyTimeRSCP::theInfo = {
	PenaltyTimeRSCP::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *HCSCellReselectInformationRSCP::itemsInfo[1] = {
	&PenaltyTimeRSCP::theInfo,
};
bool HCSCellReselectInformationRSCP::itemsPres[1] = {
	1,
};
const HCSCellReselectInformationRSCP::Info HCSCellReselectInformationRSCP::theInfo = {
	HCSCellReselectInformationRSCP::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PenaltyTimeECN0::choicesInfo[1] = {
	&PenaltyTimeECN0NotUsed::theInfo,
};
const PenaltyTimeECN0::Info PenaltyTimeECN0::theInfo = {
	PenaltyTimeECN0::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *HCSCellReselectInformationECN0::itemsInfo[1] = {
	&PenaltyTimeECN0::theInfo,
};
bool HCSCellReselectInformationECN0::itemsPres[1] = {
	1,
};
const HCSCellReselectInformationECN0::Info HCSCellReselectInformationECN0::theInfo = {
	HCSCellReselectInformationECN0::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *HCSNeighbouringCellInformationRSCP::itemsInfo[1] = {
	&HCSPRIO::theInfo,
};
bool HCSNeighbouringCellInformationRSCP::itemsPres[1] = {
	0,
};
const HCSNeighbouringCellInformationRSCP::Info HCSNeighbouringCellInformationRSCP::theInfo = {
	HCSNeighbouringCellInformationRSCP::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *HCSNeighbouringCellInformationECN0::itemsInfo[1] = {
	&HCSPRIO::theInfo,
};
bool HCSNeighbouringCellInformationECN0::itemsPres[1] = {
	0,
};
const HCSNeighbouringCellInformationECN0::Info HCSNeighbouringCellInformationECN0::theInfo = {
	HCSNeighbouringCellInformationECN0::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *HCSServingCellInformation::itemsInfo[1] = {
	&HCSPRIO::theInfo,
};
bool HCSServingCellInformation::itemsPres[1] = {
	0,
};
const HCSServingCellInformation::Info HCSServingCellInformation::theInfo = {
	HCSServingCellInformation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *HorizontalVelocity::itemsInfo[1] = {
	&HorizontalVelocityBearing::theInfo,
};
bool HorizontalVelocity::itemsPres[1] = {
	1,
};
const HorizontalVelocity::Info HorizontalVelocity::theInfo = {
	HorizontalVelocity::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *HorizontalWithVerticalVelocity::itemsInfo[1] = {
	&HorizontalWithVerticalVelocityverticalSpeedDirection::theInfo,
};
bool HorizontalWithVerticalVelocity::itemsPres[1] = {
	1,
};
const HorizontalWithVerticalVelocity::Info HorizontalWithVerticalVelocity::theInfo = {
	HorizontalWithVerticalVelocity::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *HorizontalVelocityWithUncertainty::itemsInfo[1] = {
	&HorizontalVelocityWithUncertaintyBearing::theInfo,
};
bool HorizontalVelocityWithUncertainty::itemsPres[1] = {
	1,
};
const HorizontalVelocityWithUncertainty::Info HorizontalVelocityWithUncertainty::theInfo = {
	HorizontalVelocityWithUncertainty::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *HorizontalWithVerticalVelocityAndUncertainty::itemsInfo[1] = {
	&HorizontalWithVerticalVelocityAndUncertaintyverticalSpeedDirection::theInfo,
};
bool HorizontalWithVerticalVelocityAndUncertainty::itemsPres[1] = {
	1,
};
const HorizontalWithVerticalVelocityAndUncertainty::Info HorizontalWithVerticalVelocityAndUncertainty::theInfo = {
	HorizontalWithVerticalVelocityAndUncertainty::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *IdleIntervalInfo::itemsInfo[1] = {
	&IdleIntervalInfoK::theInfo,
};
bool IdleIntervalInfo::itemsPres[1] = {
	0,
};
const IdleIntervalInfo::Info IdleIntervalInfo::theInfo = {
	IdleIntervalInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *InterFreqCell::itemsInfo[1] = {
	&FrequencyInfo::theInfo,
};
bool InterFreqCell::itemsPres[1] = {
	1,
};
const InterFreqCell::Info InterFreqCell::theInfo = {
	InterFreqCell::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *InterFreqCellLCRr4::itemsInfo[1] = {
	&FrequencyInfo::theInfo,
};
bool InterFreqCellLCRr4::itemsPres[1] = {
	1,
};
const InterFreqCellLCRr4::Info InterFreqCellLCRr4::theInfo = {
	InterFreqCellLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *RemovedInterFreqCellList::choicesInfo[1] = {
	&RemovedInterFreqCellListRemoveAllInterFreqCells::theInfo,
};
const RemovedInterFreqCellList::Info RemovedInterFreqCellList::theInfo = {
	RemovedInterFreqCellList::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *InterFreqCellInfoList::itemsInfo[1] = {
	&RemovedInterFreqCellList::theInfo,
};
bool InterFreqCellInfoList::itemsPres[1] = {
	0,
};
const InterFreqCellInfoList::Info InterFreqCellInfoList::theInfo = {
	InterFreqCellInfoList::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *InterFreqCellInfoListr4::itemsInfo[1] = {
	&RemovedInterFreqCellList::theInfo,
};
bool InterFreqCellInfoListr4::itemsPres[1] = {
	0,
};
const InterFreqCellInfoListr4::Info InterFreqCellInfoListr4::theInfo = {
	InterFreqCellInfoListr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *InterFreqCellInfoListr8::itemsInfo[1] = {
	&RemovedInterFreqCellList::theInfo,
};
bool InterFreqCellInfoListr8::itemsPres[1] = {
	0,
};
const InterFreqCellInfoListr8::Info InterFreqCellInfoListr8::theInfo = {
	InterFreqCellInfoListr8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *InterFreqCellInfoListr9::itemsInfo[1] = {
	&RemovedInterFreqCellList::theInfo,
};
bool InterFreqCellInfoListr9::itemsPres[1] = {
	0,
};
const InterFreqCellInfoListr9::Info InterFreqCellInfoListr9::theInfo = {
	InterFreqCellInfoListr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *InterFreqSIAcquisition::itemsInfo[1] = {
	&FrequencyInfo::theInfo,
};
bool InterFreqSIAcquisition::itemsPres[1] = {
	1,
};
const InterFreqSIAcquisition::Info InterFreqSIAcquisition::theInfo = {
	InterFreqSIAcquisition::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *InterFreqCellInfoSIListRSCP::itemsInfo[1] = {
	&RemovedInterFreqCellList::theInfo,
};
bool InterFreqCellInfoSIListRSCP::itemsPres[1] = {
	0,
};
const InterFreqCellInfoSIListRSCP::Info InterFreqCellInfoSIListRSCP::theInfo = {
	InterFreqCellInfoSIListRSCP::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *InterFreqCellInfoSIListECN0::itemsInfo[1] = {
	&RemovedInterFreqCellList::theInfo,
};
bool InterFreqCellInfoSIListECN0::itemsPres[1] = {
	0,
};
const InterFreqCellInfoSIListECN0::Info InterFreqCellInfoSIListECN0::theInfo = {
	InterFreqCellInfoSIListECN0::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *InterFreqCellInfoSIListHCSRSCP::itemsInfo[1] = {
	&RemovedInterFreqCellList::theInfo,
};
bool InterFreqCellInfoSIListHCSRSCP::itemsPres[1] = {
	0,
};
const InterFreqCellInfoSIListHCSRSCP::Info InterFreqCellInfoSIListHCSRSCP::theInfo = {
	InterFreqCellInfoSIListHCSRSCP::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *InterFreqCellInfoSIListHCSECN0::itemsInfo[1] = {
	&RemovedInterFreqCellList::theInfo,
};
bool InterFreqCellInfoSIListHCSECN0::itemsPres[1] = {
	0,
};
const InterFreqCellInfoSIListHCSECN0::Info InterFreqCellInfoSIListHCSECN0::theInfo = {
	InterFreqCellInfoSIListHCSECN0::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *InterFreqCellInfoSIListRSCPLCR::itemsInfo[1] = {
	&RemovedInterFreqCellList::theInfo,
};
bool InterFreqCellInfoSIListRSCPLCR::itemsPres[1] = {
	0,
};
const InterFreqCellInfoSIListRSCPLCR::Info InterFreqCellInfoSIListRSCPLCR::theInfo = {
	InterFreqCellInfoSIListRSCPLCR::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *InterFreqCellInfoSIListECN0LCR::itemsInfo[1] = {
	&RemovedInterFreqCellList::theInfo,
};
bool InterFreqCellInfoSIListECN0LCR::itemsPres[1] = {
	0,
};
const InterFreqCellInfoSIListECN0LCR::Info InterFreqCellInfoSIListECN0LCR::theInfo = {
	InterFreqCellInfoSIListECN0LCR::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *InterFreqCellInfoSIListHCSRSCPLCR::itemsInfo[1] = {
	&RemovedInterFreqCellList::theInfo,
};
bool InterFreqCellInfoSIListHCSRSCPLCR::itemsPres[1] = {
	0,
};
const InterFreqCellInfoSIListHCSRSCPLCR::Info InterFreqCellInfoSIListHCSRSCPLCR::theInfo = {
	InterFreqCellInfoSIListHCSRSCPLCR::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *InterFreqCellInfoSIListHCSECN0LCR::itemsInfo[1] = {
	&RemovedInterFreqCellList::theInfo,
};
bool InterFreqCellInfoSIListHCSECN0LCR::itemsPres[1] = {
	0,
};
const InterFreqCellInfoSIListHCSECN0LCR::Info InterFreqCellInfoSIListHCSECN0LCR::theInfo = {
	InterFreqCellInfoSIListHCSECN0LCR::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *InterFreqEvent::choicesInfo[1] = {
	&Event2a::theInfo,
};
const InterFreqEvent::Info InterFreqEvent::theInfo = {
	InterFreqEvent::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *InterFreqEventr6::choicesInfo[1] = {
	&Event2ar6::theInfo,
};
const InterFreqEventr6::Info InterFreqEventr6::theInfo = {
	InterFreqEventr6::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *InterFreqEventCriteriav590ext::itemsInfo[1] = {
	&DeltaRSCP::theInfo,
};
bool InterFreqEventCriteriav590ext::itemsPres[1] = {
	0,
};
const InterFreqEventCriteriav590ext::Info InterFreqEventCriteriav590ext::theInfo = {
	InterFreqEventCriteriav590ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *InterFreqEventResults::itemsInfo[1] = {
	&EventIDInterFreq::theInfo,
};
bool InterFreqEventResults::itemsPres[1] = {
	0,
};
const InterFreqEventResults::Info InterFreqEventResults::theInfo = {
	InterFreqEventResults::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *InterFreqEventResultsLCRr4ext::itemsInfo[1] = {
	&EventIDInterFreq::theInfo,
};
bool InterFreqEventResultsLCRr4ext::itemsPres[1] = {
	0,
};
const InterFreqEventResultsLCRr4ext::Info InterFreqEventResultsLCRr4ext::theInfo = {
	InterFreqEventResultsLCRr4ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *InterFreqMeasQuantityReportingCriteria::choicesInfo[1] = {
	&InterFreqMeasQuantityReportingCriteriaIntraFreqReportingCriteria::theInfo,
};
const InterFreqMeasQuantityReportingCriteria::Info InterFreqMeasQuantityReportingCriteria::theInfo = {
	InterFreqMeasQuantityReportingCriteria::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *InterFreqMeasQuantity::itemsInfo[1] = {
	&InterFreqMeasQuantityReportingCriteria::theInfo,
};
bool InterFreqMeasQuantity::itemsPres[1] = {
	0,
};
const InterFreqMeasQuantity::Info InterFreqMeasQuantity::theInfo = {
	InterFreqMeasQuantity::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *InterFreqMeasuredResults::itemsInfo[1] = {
	&FrequencyInfo::theInfo,
};
bool InterFreqMeasuredResults::itemsPres[1] = {
	0,
};
const InterFreqMeasuredResults::Info InterFreqMeasuredResults::theInfo = {
	InterFreqMeasuredResults::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *InterFreqMeasuredResultsv920ext::itemsInfo[1] = {
	&InterFreqCellMeasuredResultsListv920ext::theInfo,
};
bool InterFreqMeasuredResultsv920ext::itemsPres[1] = {
	0,
};
const InterFreqMeasuredResultsv920ext::Info InterFreqMeasuredResultsv920ext::theInfo = {
	InterFreqMeasuredResultsv920ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *InterFreqMeasurementSysInfoRSCP::itemsInfo[1] = {
	&InterFreqCellInfoSIListRSCP::theInfo,
};
bool InterFreqMeasurementSysInfoRSCP::itemsPres[1] = {
	0,
};
const InterFreqMeasurementSysInfoRSCP::Info InterFreqMeasurementSysInfoRSCP::theInfo = {
	InterFreqMeasurementSysInfoRSCP::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *InterFreqMeasurementSysInfoECN0::itemsInfo[1] = {
	&InterFreqCellInfoSIListECN0::theInfo,
};
bool InterFreqMeasurementSysInfoECN0::itemsPres[1] = {
	0,
};
const InterFreqMeasurementSysInfoECN0::Info InterFreqMeasurementSysInfoECN0::theInfo = {
	InterFreqMeasurementSysInfoECN0::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *InterFreqMeasurementSysInfoHCSRSCP::itemsInfo[1] = {
	&InterFreqCellInfoSIListHCSRSCP::theInfo,
};
bool InterFreqMeasurementSysInfoHCSRSCP::itemsPres[1] = {
	0,
};
const InterFreqMeasurementSysInfoHCSRSCP::Info InterFreqMeasurementSysInfoHCSRSCP::theInfo = {
	InterFreqMeasurementSysInfoHCSRSCP::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *InterFreqMeasurementSysInfoHCSECN0::itemsInfo[1] = {
	&InterFreqCellInfoSIListHCSECN0::theInfo,
};
bool InterFreqMeasurementSysInfoHCSECN0::itemsPres[1] = {
	0,
};
const InterFreqMeasurementSysInfoHCSECN0::Info InterFreqMeasurementSysInfoHCSECN0::theInfo = {
	InterFreqMeasurementSysInfoHCSECN0::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *InterFreqMeasurementSysInfoRSCPLCRr4::itemsInfo[1] = {
	&InterFreqCellInfoSIListRSCPLCR::theInfo,
};
bool InterFreqMeasurementSysInfoRSCPLCRr4::itemsPres[1] = {
	0,
};
const InterFreqMeasurementSysInfoRSCPLCRr4::Info InterFreqMeasurementSysInfoRSCPLCRr4::theInfo = {
	InterFreqMeasurementSysInfoRSCPLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *InterFreqMeasurementSysInfoECN0LCRr4::itemsInfo[1] = {
	&InterFreqCellInfoSIListECN0LCR::theInfo,
};
bool InterFreqMeasurementSysInfoECN0LCRr4::itemsPres[1] = {
	0,
};
const InterFreqMeasurementSysInfoECN0LCRr4::Info InterFreqMeasurementSysInfoECN0LCRr4::theInfo = {
	InterFreqMeasurementSysInfoECN0LCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *InterFreqMeasurementSysInfoHCSRSCPLCRr4::itemsInfo[1] = {
	&InterFreqCellInfoSIListHCSRSCPLCR::theInfo,
};
bool InterFreqMeasurementSysInfoHCSRSCPLCRr4::itemsPres[1] = {
	0,
};
const InterFreqMeasurementSysInfoHCSRSCPLCRr4::Info InterFreqMeasurementSysInfoHCSRSCPLCRr4::theInfo = {
	InterFreqMeasurementSysInfoHCSRSCPLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *InterFreqMeasurementSysInfoHCSECN0LCRr4::itemsInfo[1] = {
	&InterFreqCellInfoSIListHCSECN0LCR::theInfo,
};
bool InterFreqMeasurementSysInfoHCSECN0LCRr4::itemsPres[1] = {
	0,
};
const InterFreqMeasurementSysInfoHCSECN0LCRr4::Info InterFreqMeasurementSysInfoHCSECN0LCRr4::theInfo = {
	InterFreqMeasurementSysInfoHCSECN0LCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DummyInterFreqRACHReportingInfoModeSpecificInfo::choicesInfo[1] = {
	&DummyInterFreqRACHReportingInfoModeSpecificInfoFdd::theInfo,
};
const DummyInterFreqRACHReportingInfoModeSpecificInfo::Info DummyInterFreqRACHReportingInfoModeSpecificInfo::theInfo = {
	DummyInterFreqRACHReportingInfoModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *DummyInterFreqRACHReportingInfo::itemsInfo[1] = {
	&DummyInterFreqRACHReportingInfoModeSpecificInfo::theInfo,
};
bool DummyInterFreqRACHReportingInfo::itemsPres[1] = {
	1,
};
const DummyInterFreqRACHReportingInfo::Info DummyInterFreqRACHReportingInfo::theInfo = {
	DummyInterFreqRACHReportingInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *InterFreqRACHReportingInfoModeSpecificInfo::choicesInfo[1] = {
	&InterFreqRACHReportingInfoModeSpecificInfoFdd::theInfo,
};
const InterFreqRACHReportingInfoModeSpecificInfo::Info InterFreqRACHReportingInfoModeSpecificInfo::theInfo = {
	InterFreqRACHReportingInfoModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *InterFreqRACHReportingInfo::itemsInfo[1] = {
	&InterFreqRACHReportingInfoModeSpecificInfo::theInfo,
};
bool InterFreqRACHReportingInfo::itemsPres[1] = {
	1,
};
const InterFreqRACHReportingInfo::Info InterFreqRACHReportingInfo::theInfo = {
	InterFreqRACHReportingInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *InterFreqReportCriteria::choicesInfo[1] = {
	&IntraFreqReportingCriteria::theInfo,
};
const InterFreqReportCriteria::Info InterFreqReportCriteria::theInfo = {
	InterFreqReportCriteria::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *IntraFreqEventr4::choicesInfo[1] = {
	&Event1ar4::theInfo,
};
const IntraFreqEventr4::Info IntraFreqEventr4::theInfo = {
	IntraFreqEventr4::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *IntraFreqEventCriteriar4::itemsInfo[1] = {
	&IntraFreqEventr4::theInfo,
};
bool IntraFreqEventCriteriar4::itemsPres[1] = {
	0,
};
const IntraFreqEventCriteriar4::Info IntraFreqEventCriteriar4::theInfo = {
	IntraFreqEventCriteriar4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *IntraFreqReportingCriteriar4::itemsInfo[1] = {
	&IntraFreqEventCriteriaListr4::theInfo,
};
bool IntraFreqReportingCriteriar4::itemsPres[1] = {
	0,
};
const IntraFreqReportingCriteriar4::Info IntraFreqReportingCriteriar4::theInfo = {
	IntraFreqReportingCriteriar4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *InterFreqReportCriteriar4::choicesInfo[1] = {
	&IntraFreqReportingCriteriar4::theInfo,
};
const InterFreqReportCriteriar4::Info InterFreqReportCriteriar4::theInfo = {
	InterFreqReportCriteriar4::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *IntraFreqEventr6::choicesInfo[1] = {
	&Event1ar4::theInfo,
};
const IntraFreqEventr6::Info IntraFreqEventr6::theInfo = {
	IntraFreqEventr6::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *IntraFreqEventCriteriar6::itemsInfo[1] = {
	&IntraFreqEventr6::theInfo,
};
bool IntraFreqEventCriteriar6::itemsPres[1] = {
	0,
};
const IntraFreqEventCriteriar6::Info IntraFreqEventCriteriar6::theInfo = {
	IntraFreqEventCriteriar6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *IntraFreqReportingCriteriar6::itemsInfo[1] = {
	&IntraFreqEventCriteriaListr6::theInfo,
};
bool IntraFreqReportingCriteriar6::itemsPres[1] = {
	0,
};
const IntraFreqReportingCriteriar6::Info IntraFreqReportingCriteriar6::theInfo = {
	IntraFreqReportingCriteriar6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *InterFreqReportCriteriar6::choicesInfo[1] = {
	&IntraFreqReportingCriteriar6::theInfo,
};
const InterFreqReportCriteriar6::Info InterFreqReportCriteriar6::theInfo = {
	InterFreqReportCriteriar6::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *IntraFreqEventr7::choicesInfo[1] = {
	&Event1ar4::theInfo,
};
const IntraFreqEventr7::Info IntraFreqEventr7::theInfo = {
	IntraFreqEventr7::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *IntraFreqEventCriteriar7::itemsInfo[1] = {
	&IntraFreqEventr7::theInfo,
};
bool IntraFreqEventCriteriar7::itemsPres[1] = {
	0,
};
const IntraFreqEventCriteriar7::Info IntraFreqEventCriteriar7::theInfo = {
	IntraFreqEventCriteriar7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *IntraFreqReportingCriteriar7::itemsInfo[1] = {
	&IntraFreqEventCriteriaListr7::theInfo,
};
bool IntraFreqReportingCriteriar7::itemsPres[1] = {
	0,
};
const IntraFreqReportingCriteriar7::Info IntraFreqReportingCriteriar7::theInfo = {
	IntraFreqReportingCriteriar7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *InterFreqReportCriteriar7::choicesInfo[1] = {
	&IntraFreqReportingCriteriar7::theInfo,
};
const InterFreqReportCriteriar7::Info InterFreqReportCriteriar7::theInfo = {
	InterFreqReportCriteriar7::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *IntraFreqReportingCriteriar9::itemsInfo[1] = {
	&IntraFreqEventCriteriaListr7::theInfo,
};
bool IntraFreqReportingCriteriar9::itemsPres[1] = {
	0,
};
const IntraFreqReportingCriteriar9::Info IntraFreqReportingCriteriar9::theInfo = {
	IntraFreqReportingCriteriar9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *InterFreqReportCriteriar9::choicesInfo[1] = {
	&IntraFreqReportingCriteriar9::theInfo,
};
const InterFreqReportCriteriar9::Info InterFreqReportCriteriar9::theInfo = {
	InterFreqReportCriteriar9::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *InterFreqReportingCriteria::itemsInfo[1] = {
	&InterFreqEventList::theInfo,
};
bool InterFreqReportingCriteria::itemsPres[1] = {
	0,
};
const InterFreqReportingCriteria::Info InterFreqReportingCriteria::theInfo = {
	InterFreqReportingCriteria::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *InterFreqReportingCriteriar6::itemsInfo[1] = {
	&InterFreqEventListr6::theInfo,
};
bool InterFreqReportingCriteriar6::itemsPres[1] = {
	0,
};
const InterFreqReportingCriteriar6::Info InterFreqReportingCriteriar6::theInfo = {
	InterFreqReportingCriteriar6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *InterFreqReportingQuantity::itemsInfo[1] = {
	&InterFreqReportingQuantityUtraCarrierRSSI::theInfo,
};
bool InterFreqReportingQuantity::itemsPres[1] = {
	1,
};
const InterFreqReportingQuantity::Info InterFreqReportingQuantity::theInfo = {
	InterFreqReportingQuantity::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *InterFrequencyMeasurement::itemsInfo[1] = {
	&InterFreqCellInfoList::theInfo,
};
bool InterFrequencyMeasurement::itemsPres[1] = {
	1,
};
const InterFrequencyMeasurement::Info InterFrequencyMeasurement::theInfo = {
	InterFrequencyMeasurement::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *InterFrequencyMeasurementr4::itemsInfo[1] = {
	&InterFreqCellInfoListr4::theInfo,
};
bool InterFrequencyMeasurementr4::itemsPres[1] = {
	1,
};
const InterFrequencyMeasurementr4::Info InterFrequencyMeasurementr4::theInfo = {
	InterFrequencyMeasurementr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *InterFrequencyMeasurementr6::itemsInfo[1] = {
	&InterFreqCellInfoListr4::theInfo,
};
bool InterFrequencyMeasurementr6::itemsPres[1] = {
	1,
};
const InterFrequencyMeasurementr6::Info InterFrequencyMeasurementr6::theInfo = {
	InterFrequencyMeasurementr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *InterFrequencyMeasurementr7::itemsInfo[1] = {
	&InterFreqCellInfoListr4::theInfo,
};
bool InterFrequencyMeasurementr7::itemsPres[1] = {
	1,
};
const InterFrequencyMeasurementr7::Info InterFrequencyMeasurementr7::theInfo = {
	InterFrequencyMeasurementr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *InterFrequencyMeasurementr8::itemsInfo[1] = {
	&InterFreqCellInfoListr8::theInfo,
};
bool InterFrequencyMeasurementr8::itemsPres[1] = {
	1,
};
const InterFrequencyMeasurementr8::Info InterFrequencyMeasurementr8::theInfo = {
	InterFrequencyMeasurementr8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *InterFrequencyMeasurementr9::itemsInfo[1] = {
	&InterFreqCellInfoListr9::theInfo,
};
bool InterFrequencyMeasurementr9::itemsPres[1] = {
	1,
};
const InterFrequencyMeasurementr9::Info InterFrequencyMeasurementr9::theInfo = {
	InterFrequencyMeasurementr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *BSIC::itemsInfo[1] = {
	&NCC::theInfo,
};
bool BSIC::itemsPres[1] = {
	1,
};
const BSIC::Info BSIC::theInfo = {
	BSIC::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *InterRATTargetCellDescriptionTechnologySpecificInfoGsm::itemsInfo[1] = {
	&BSIC::theInfo,
};
bool InterRATTargetCellDescriptionTechnologySpecificInfoGsm::itemsPres[1] = {
	0,
};
const InterRATTargetCellDescriptionTechnologySpecificInfoGsm::Info InterRATTargetCellDescriptionTechnologySpecificInfoGsm::theInfo = {
	InterRATTargetCellDescriptionTechnologySpecificInfoGsm::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *InterRATTargetCellDescriptionTechnologySpecificInfo::choicesInfo[1] = {
	&InterRATTargetCellDescriptionTechnologySpecificInfoGsm::theInfo,
};
const InterRATTargetCellDescriptionTechnologySpecificInfo::Info InterRATTargetCellDescriptionTechnologySpecificInfo::theInfo = {
	InterRATTargetCellDescriptionTechnologySpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *InterRATTargetCellDescription::itemsInfo[1] = {
	&InterRATTargetCellDescriptionTechnologySpecificInfo::theInfo,
};
bool InterRATTargetCellDescription::itemsPres[1] = {
	1,
};
const InterRATTargetCellDescription::Info InterRATTargetCellDescription::theInfo = {
	InterRATTargetCellDescription::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *RemovedInterRATCellList::choicesInfo[1] = {
	&RemovedInterRATCellListRemoveAllInterRATCells::theInfo,
};
const RemovedInterRATCellList::Info RemovedInterRATCellList::theInfo = {
	RemovedInterRATCellList::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *InterRATCellInfoList::itemsInfo[1] = {
	&RemovedInterRATCellList::theInfo,
};
bool InterRATCellInfoList::itemsPres[1] = {
	0,
};
const InterRATCellInfoList::Info InterRATCellInfoList::theInfo = {
	InterRATCellInfoList::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *InterRATCellInfoListB::itemsInfo[1] = {
	&RemovedInterRATCellList::theInfo,
};
bool InterRATCellInfoListB::itemsPres[1] = {
	1,
};
const InterRATCellInfoListB::Info InterRATCellInfoListB::theInfo = {
	InterRATCellInfoListB::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *InterRATCellInfoListr4::itemsInfo[1] = {
	&RemovedInterRATCellList::theInfo,
};
bool InterRATCellInfoListr4::itemsPres[1] = {
	0,
};
const InterRATCellInfoListr4::Info InterRATCellInfoListr4::theInfo = {
	InterRATCellInfoListr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *InterRATCellInfoListr6::itemsInfo[1] = {
	&RemovedInterRATCellList::theInfo,
};
bool InterRATCellInfoListr6::itemsPres[1] = {
	0,
};
const InterRATCellInfoListr6::Info InterRATCellInfoListr6::theInfo = {
	InterRATCellInfoListr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *InterRATEvent::choicesInfo[1] = {
	&Event3a::theInfo,
};
const InterRATEvent::Info InterRATEvent::theInfo = {
	InterRATEvent::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *InterRATEventResults::itemsInfo[1] = {
	&EventIDInterRAT::theInfo,
};
bool InterRATEventResults::itemsPres[1] = {
	1,
};
const InterRATEventResults::Info InterRATEventResults::theInfo = {
	InterRATEventResults::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *InterRATInfor6::itemsInfo[1] = {
	&InterRATInfo::theInfo,
};
bool InterRATInfor6::itemsPres[1] = {
	0,
};
const InterRATInfor6::Info InterRATInfor6::theInfo = {
	InterRATInfor6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *InterRATInfov860ext::choicesInfo[1] = {
	&InterRATInfov860extGsm::theInfo,
};
const InterRATInfov860ext::Info InterRATInfov860ext::theInfo = {
	InterRATInfov860ext::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *InterRATMeasuredResults::choicesInfo[1] = {
	&GSMMeasuredResultsList::theInfo,
};
const InterRATMeasuredResults::Info InterRATMeasuredResults::theInfo = {
	InterRATMeasuredResults::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *InterRATMeasurementr8InterRATMeasurementObjects::choicesInfo[1] = {
	&InterRATCellInfoListr6::theInfo,
};
const InterRATMeasurementr8InterRATMeasurementObjects::Info InterRATMeasurementr8InterRATMeasurementObjects::theInfo = {
	InterRATMeasurementr8InterRATMeasurementObjects::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *InterRATMeasurementr8::itemsInfo[1] = {
	&InterRATMeasurementr8InterRATMeasurementObjects::theInfo,
};
bool InterRATMeasurementr8::itemsPres[1] = {
	0,
};
const InterRATMeasurementr8::Info InterRATMeasurementr8::theInfo = {
	InterRATMeasurementr8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *InterRATMeasurementr9InterRATMeasurementObjects::choicesInfo[1] = {
	&InterRATCellInfoListr6::theInfo,
};
const InterRATMeasurementr9InterRATMeasurementObjects::Info InterRATMeasurementr9InterRATMeasurementObjects::theInfo = {
	InterRATMeasurementr9InterRATMeasurementObjects::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *InterRATMeasurementr9::itemsInfo[1] = {
	&InterRATMeasurementr9InterRATMeasurementObjects::theInfo,
};
bool InterRATMeasurementr9::itemsPres[1] = {
	0,
};
const InterRATMeasurementr9::Info InterRATMeasurementr9::theInfo = {
	InterRATMeasurementr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *InterRATMeasurementSysInfo::itemsInfo[1] = {
	&InterRATCellInfoList::theInfo,
};
bool InterRATMeasurementSysInfo::itemsPres[1] = {
	0,
};
const InterRATMeasurementSysInfo::Info InterRATMeasurementSysInfo::theInfo = {
	InterRATMeasurementSysInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *InterRATMeasurementSysInfoB::itemsInfo[1] = {
	&InterRATCellInfoListB::theInfo,
};
bool InterRATMeasurementSysInfoB::itemsPres[1] = {
	0,
};
const InterRATMeasurementSysInfoB::Info InterRATMeasurementSysInfoB::theInfo = {
	InterRATMeasurementSysInfoB::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *InterRATReportingCriteria::itemsInfo[1] = {
	&InterRATEventList::theInfo,
};
bool InterRATReportingCriteria::itemsPres[1] = {
	0,
};
const InterRATReportingCriteria::Info InterRATReportingCriteria::theInfo = {
	InterRATReportingCriteria::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *InterRATReportCriteria::choicesInfo[1] = {
	&InterRATReportingCriteria::theInfo,
};
const InterRATReportCriteria::Info InterRATReportCriteria::theInfo = {
	InterRATReportCriteria::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *InterRATReportingQuantity::itemsInfo[1] = {
	&InterRATReportingQuantityUtranEstimatedQuality::theInfo,
};
bool InterRATReportingQuantity::itemsPres[1] = {
	1,
};
const InterRATReportingQuantity::Info InterRATReportingQuantity::theInfo = {
	InterRATReportingQuantity::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *InterRATReportingQuantityr8::itemsInfo[1] = {
	&InterRATReportingQuantityr8UtranEstimatedQuality::theInfo,
};
bool InterRATReportingQuantityr8::itemsPres[1] = {
	1,
};
const InterRATReportingQuantityr8::Info InterRATReportingQuantityr8::theInfo = {
	InterRATReportingQuantityr8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *RemovedIntraFreqCellList::choicesInfo[1] = {
	&RemovedIntraFreqCellListRemoveAllIntraFreqCells::theInfo,
};
const RemovedIntraFreqCellList::Info RemovedIntraFreqCellList::theInfo = {
	RemovedIntraFreqCellList::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *IntraFreqCellInfoList::itemsInfo[1] = {
	&RemovedIntraFreqCellList::theInfo,
};
bool IntraFreqCellInfoList::itemsPres[1] = {
	0,
};
const IntraFreqCellInfoList::Info IntraFreqCellInfoList::theInfo = {
	IntraFreqCellInfoList::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *IntraFreqCellInfoListr4::itemsInfo[1] = {
	&RemovedIntraFreqCellList::theInfo,
};
bool IntraFreqCellInfoListr4::itemsPres[1] = {
	0,
};
const IntraFreqCellInfoListr4::Info IntraFreqCellInfoListr4::theInfo = {
	IntraFreqCellInfoListr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *RemovedIntraFreqCellListOnSecULFreq::choicesInfo[1] = {
	&RemovedIntraFreqCellListOnSecULFreqRemoveAllIntraFreqCells::theInfo,
};
const RemovedIntraFreqCellListOnSecULFreq::Info RemovedIntraFreqCellListOnSecULFreq::theInfo = {
	RemovedIntraFreqCellListOnSecULFreq::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *IntraFreqCellInfoListInfoOnSecULFreq::itemsInfo[1] = {
	&RemovedIntraFreqCellListOnSecULFreq::theInfo,
};
bool IntraFreqCellInfoListInfoOnSecULFreq::itemsPres[1] = {
	0,
};
const IntraFreqCellInfoListInfoOnSecULFreq::Info IntraFreqCellInfoListInfoOnSecULFreq::theInfo = {
	IntraFreqCellInfoListInfoOnSecULFreq::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *IntraFreqCellInfoListOnSecULFreq::itemsInfo[1] = {
	&IntraFreqCellInfoListInfoOnSecULFreq::theInfo,
};
bool IntraFreqCellInfoListOnSecULFreq::itemsPres[1] = {
	1,
};
const IntraFreqCellInfoListOnSecULFreq::Info IntraFreqCellInfoListOnSecULFreq::theInfo = {
	IntraFreqCellInfoListOnSecULFreq::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *IntraFreqCellInfoListr9::itemsInfo[1] = {
	&RemovedIntraFreqCellList::theInfo,
};
bool IntraFreqCellInfoListr9::itemsPres[1] = {
	0,
};
const IntraFreqCellInfoListr9::Info IntraFreqCellInfoListr9::theInfo = {
	IntraFreqCellInfoListr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *IntraFreqSIAcquisitionModeSpecificInfoFdd::itemsInfo[1] = {
	&IntraFreqSIAcquisitionInfo::theInfo,
};
bool IntraFreqSIAcquisitionModeSpecificInfoFdd::itemsPres[1] = {
	0,
};
const IntraFreqSIAcquisitionModeSpecificInfoFdd::Info IntraFreqSIAcquisitionModeSpecificInfoFdd::theInfo = {
	IntraFreqSIAcquisitionModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *IntraFreqSIAcquisitionModeSpecificInfo::choicesInfo[1] = {
	&IntraFreqSIAcquisitionModeSpecificInfoFdd::theInfo,
};
const IntraFreqSIAcquisitionModeSpecificInfo::Info IntraFreqSIAcquisitionModeSpecificInfo::theInfo = {
	IntraFreqSIAcquisitionModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *IntraFreqSIAcquisition::itemsInfo[1] = {
	&IntraFreqSIAcquisitionModeSpecificInfo::theInfo,
};
bool IntraFreqSIAcquisition::itemsPres[1] = {
	1,
};
const IntraFreqSIAcquisition::Info IntraFreqSIAcquisition::theInfo = {
	IntraFreqSIAcquisition::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *IntraFreqEventOnSecULFreq::choicesInfo[1] = {
	&Event1aOnSecUlFreqr9::theInfo,
};
const IntraFreqEventOnSecULFreq::Info IntraFreqEventOnSecULFreq::theInfo = {
	IntraFreqEventOnSecULFreq::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *IntraFreqEvent1dr5::itemsInfo[1] = {
	&TriggeringCondition2::theInfo,
};
bool IntraFreqEvent1dr5::itemsPres[1] = {
	0,
};
const IntraFreqEvent1dr5::Info IntraFreqEvent1dr5::theInfo = {
	IntraFreqEvent1dr5::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *IntraFreqEventCriteriaOnSecULFreq::itemsInfo[1] = {
	&IntraFreqEventOnSecULFreq::theInfo,
};
bool IntraFreqEventCriteriaOnSecULFreq::itemsPres[1] = {
	0,
};
const IntraFreqEventCriteriaOnSecULFreq::Info IntraFreqEventCriteriaOnSecULFreq::theInfo = {
	IntraFreqEventCriteriaOnSecULFreq::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *IntraFreqEventCriteriaListOnSecULFreq::itemsInfo[1] = {
	&FrequencyInfo::theInfo,
};
bool IntraFreqEventCriteriaListOnSecULFreq::itemsPres[1] = {
	1,
};
const IntraFreqEventCriteriaListOnSecULFreq::Info IntraFreqEventCriteriaListOnSecULFreq::theInfo = {
	IntraFreqEventCriteriaListOnSecULFreq::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *IntraFreqMeasQuantity::itemsInfo[1] = {
	&FilterCoefficient::theInfo,
};
bool IntraFreqMeasQuantity::itemsPres[1] = {
	0,
};
const IntraFreqMeasQuantity::Info IntraFreqMeasQuantity::theInfo = {
	IntraFreqMeasQuantity::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *IntraFreqMeasQuantityTDDsib3List::itemsInfo[0] = {
};
bool IntraFreqMeasQuantityTDDsib3List::itemsPres[0] = {
};
const IntraFreqMeasQuantityTDDsib3List::Info IntraFreqMeasQuantityTDDsib3List::theInfo = {
	IntraFreqMeasQuantityTDDsib3List::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *IntraFreqMeasurementSysInfoRSCP::itemsInfo[1] = {
	&MeasurementIdentity::theInfo,
};
bool IntraFreqMeasurementSysInfoRSCP::itemsPres[1] = {
	0,
};
const IntraFreqMeasurementSysInfoRSCP::Info IntraFreqMeasurementSysInfoRSCP::theInfo = {
	IntraFreqMeasurementSysInfoRSCP::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *IntraFreqMeasurementSysInfoECN0::itemsInfo[1] = {
	&MeasurementIdentity::theInfo,
};
bool IntraFreqMeasurementSysInfoECN0::itemsPres[1] = {
	0,
};
const IntraFreqMeasurementSysInfoECN0::Info IntraFreqMeasurementSysInfoECN0::theInfo = {
	IntraFreqMeasurementSysInfoECN0::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *IntraFreqMeasurementSysInfoHCSRSCP::itemsInfo[1] = {
	&MeasurementIdentity::theInfo,
};
bool IntraFreqMeasurementSysInfoHCSRSCP::itemsPres[1] = {
	0,
};
const IntraFreqMeasurementSysInfoHCSRSCP::Info IntraFreqMeasurementSysInfoHCSRSCP::theInfo = {
	IntraFreqMeasurementSysInfoHCSRSCP::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *IntraFreqMeasurementSysInfoHCSECN0::itemsInfo[1] = {
	&MeasurementIdentity::theInfo,
};
bool IntraFreqMeasurementSysInfoHCSECN0::itemsPres[1] = {
	0,
};
const IntraFreqMeasurementSysInfoHCSECN0::Info IntraFreqMeasurementSysInfoHCSECN0::theInfo = {
	IntraFreqMeasurementSysInfoHCSECN0::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *IntraFreqMeasurementSysInfoRSCPLCRr4::itemsInfo[1] = {
	&MeasurementIdentity::theInfo,
};
bool IntraFreqMeasurementSysInfoRSCPLCRr4::itemsPres[1] = {
	0,
};
const IntraFreqMeasurementSysInfoRSCPLCRr4::Info IntraFreqMeasurementSysInfoRSCPLCRr4::theInfo = {
	IntraFreqMeasurementSysInfoRSCPLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *IntraFreqMeasurementSysInfoECN0LCRr4::itemsInfo[1] = {
	&MeasurementIdentity::theInfo,
};
bool IntraFreqMeasurementSysInfoECN0LCRr4::itemsPres[1] = {
	0,
};
const IntraFreqMeasurementSysInfoECN0LCRr4::Info IntraFreqMeasurementSysInfoECN0LCRr4::theInfo = {
	IntraFreqMeasurementSysInfoECN0LCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *IntraFreqMeasurementSysInfoHCSRSCPLCRr4::itemsInfo[1] = {
	&MeasurementIdentity::theInfo,
};
bool IntraFreqMeasurementSysInfoHCSRSCPLCRr4::itemsPres[1] = {
	0,
};
const IntraFreqMeasurementSysInfoHCSRSCPLCRr4::Info IntraFreqMeasurementSysInfoHCSRSCPLCRr4::theInfo = {
	IntraFreqMeasurementSysInfoHCSRSCPLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *IntraFreqMeasurementSysInfoHCSECN0LCRr4::itemsInfo[1] = {
	&MeasurementIdentity::theInfo,
};
bool IntraFreqMeasurementSysInfoHCSECN0LCRr4::itemsPres[1] = {
	0,
};
const IntraFreqMeasurementSysInfoHCSECN0LCRr4::Info IntraFreqMeasurementSysInfoHCSECN0LCRr4::theInfo = {
	IntraFreqMeasurementSysInfoHCSECN0LCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *IntraFreqReportCriteria::choicesInfo[1] = {
	&IntraFreqReportingCriteria::theInfo,
};
const IntraFreqReportCriteria::Info IntraFreqReportCriteria::theInfo = {
	IntraFreqReportCriteria::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *IntraFreqReportCriteriar4::choicesInfo[1] = {
	&IntraFreqReportingCriteriar4::theInfo,
};
const IntraFreqReportCriteriar4::Info IntraFreqReportCriteriar4::theInfo = {
	IntraFreqReportCriteriar4::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *IntraFreqReportCriteriar6::choicesInfo[1] = {
	&IntraFreqReportingCriteriar6::theInfo,
};
const IntraFreqReportCriteriar6::Info IntraFreqReportCriteriar6::theInfo = {
	IntraFreqReportCriteriar6::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *IntraFreqReportCriteriar7::choicesInfo[1] = {
	&IntraFreqReportingCriteriar7::theInfo,
};
const IntraFreqReportCriteriar7::Info IntraFreqReportCriteriar7::theInfo = {
	IntraFreqReportCriteriar7::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *IntraFreqReportCriteriar9::choicesInfo[1] = {
	&IntraFreqReportingCriteriar9::theInfo,
};
const IntraFreqReportCriteriar9::Info IntraFreqReportCriteriar9::theInfo = {
	IntraFreqReportCriteriar9::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *PeriodicReportingInfo1b::itemsInfo[1] = {
	&ReportingAmount::theInfo,
};
bool PeriodicReportingInfo1b::itemsPres[1] = {
	1,
};
const PeriodicReportingInfo1b::Info PeriodicReportingInfo1b::theInfo = {
	PeriodicReportingInfo1b::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *IntraFreqReportingCriteria1br5::itemsInfo[1] = {
	&PeriodicReportingInfo1b::theInfo,
};
bool IntraFreqReportingCriteria1br5::itemsPres[1] = {
	1,
};
const IntraFreqReportingCriteria1br5::Info IntraFreqReportingCriteria1br5::theInfo = {
	IntraFreqReportingCriteria1br5::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *IntraFreqReportingQuantity::itemsInfo[1] = {
	&CellReportingQuantities::theInfo,
};
bool IntraFreqReportingQuantity::itemsPres[1] = {
	0,
};
const IntraFreqReportingQuantity::Info IntraFreqReportingQuantity::theInfo = {
	IntraFreqReportingQuantity::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *IntraFreqReportingQuantityForRACH::itemsInfo[1] = {
	&SFNSFNOTDType::theInfo,
};
bool IntraFreqReportingQuantityForRACH::itemsPres[1] = {
	1,
};
const IntraFreqReportingQuantityForRACH::Info IntraFreqReportingQuantityForRACH::theInfo = {
	IntraFreqReportingQuantityForRACH::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *IntraFrequencyMeasurement::itemsInfo[1] = {
	&IntraFreqCellInfoList::theInfo,
};
bool IntraFrequencyMeasurement::itemsPres[1] = {
	0,
};
const IntraFrequencyMeasurement::Info IntraFrequencyMeasurement::theInfo = {
	IntraFrequencyMeasurement::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *IntraFrequencyMeasurementr4::itemsInfo[1] = {
	&IntraFreqCellInfoListr4::theInfo,
};
bool IntraFrequencyMeasurementr4::itemsPres[1] = {
	0,
};
const IntraFrequencyMeasurementr4::Info IntraFrequencyMeasurementr4::theInfo = {
	IntraFrequencyMeasurementr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *IntraFrequencyMeasurementr7::itemsInfo[1] = {
	&IntraFreqCellInfoListr4::theInfo,
};
bool IntraFrequencyMeasurementr7::itemsPres[1] = {
	0,
};
const IntraFrequencyMeasurementr7::Info IntraFrequencyMeasurementr7::theInfo = {
	IntraFrequencyMeasurementr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *IntraFrequencyMeasurementr9::itemsInfo[1] = {
	&IntraFreqCellInfoListr9::theInfo,
};
bool IntraFrequencyMeasurementr9::itemsPres[1] = {
	0,
};
const IntraFrequencyMeasurementr9::Info IntraFrequencyMeasurementr9::theInfo = {
	IntraFrequencyMeasurementr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *KeplerianParameters::itemsInfo[1] = {
	&KeplerianParametersToenav::theInfo,
};
bool KeplerianParameters::itemsPres[1] = {
	1,
};
const KeplerianParameters::Info KeplerianParameters::theInfo = {
	KeplerianParameters::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MeasuredResults::choicesInfo[1] = {
	&IntraFreqMeasuredResultsList::theInfo,
};
const MeasuredResults::Info MeasuredResults::theInfo = {
	MeasuredResults::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *MeasuredResultsOnSecUlFreq::itemsInfo[1] = {
	&IntraFrequencyMeasuredResultsListOnSecULFreq::theInfo,
};
bool MeasuredResultsOnSecUlFreq::itemsPres[1] = {
	1,
};
const MeasuredResultsOnSecUlFreq::Info MeasuredResultsOnSecUlFreq::theInfo = {
	MeasuredResultsOnSecUlFreq::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *Neighbourv390extModeSpecificInfoFdd::itemsInfo[1] = {
	&FrequencyInfo::theInfo,
};
bool Neighbourv390extModeSpecificInfoFdd::itemsPres[1] = {
	1,
};
const Neighbourv390extModeSpecificInfoFdd::Info Neighbourv390extModeSpecificInfoFdd::theInfo = {
	Neighbourv390extModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *Neighbourv390extModeSpecificInfo::choicesInfo[1] = {
	&Neighbourv390extModeSpecificInfoFdd::theInfo,
};
const Neighbourv390extModeSpecificInfo::Info Neighbourv390extModeSpecificInfo::theInfo = {
	Neighbourv390extModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *Neighbourv390ext::itemsInfo[1] = {
	&Neighbourv390extModeSpecificInfo::theInfo,
};
bool Neighbourv390ext::itemsPres[1] = {
	1,
};
const Neighbourv390ext::Info Neighbourv390ext::theInfo = {
	Neighbourv390ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UEPositioningOTDOAMeasurementv390ext::itemsInfo[1] = {
	&NeighbourListv390ext::theInfo,
};
bool UEPositioningOTDOAMeasurementv390ext::itemsPres[1] = {
	1,
};
const UEPositioningOTDOAMeasurementv390ext::Info UEPositioningOTDOAMeasurementv390ext::theInfo = {
	UEPositioningOTDOAMeasurementv390ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UEPositioningMeasuredResultsv390ext::itemsInfo[1] = {
	&UEPositioningOTDOAMeasurementv390ext::theInfo,
};
bool UEPositioningMeasuredResultsv390ext::itemsPres[1] = {
	1,
};
const UEPositioningMeasuredResultsv390ext::Info UEPositioningMeasuredResultsv390ext::theInfo = {
	UEPositioningMeasuredResultsv390ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MeasuredResultsv390ext::itemsInfo[1] = {
	&UEPositioningMeasuredResultsv390ext::theInfo,
};
bool MeasuredResultsv390ext::itemsPres[1] = {
	1,
};
const MeasuredResultsv390ext::Info MeasuredResultsv390ext::theInfo = {
	MeasuredResultsv390ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MeasuredResultsv590ext::choicesInfo[1] = {
	&IntraFrequencyMeasuredResultsListv590ext::theInfo,
};
const MeasuredResultsv590ext::Info MeasuredResultsv590ext::theInfo = {
	MeasuredResultsv590ext::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *UEInternalMeasuredResultsv770extModeSpecificInfoTdd384768::itemsInfo[1] = {
	&EXTULTimingAdvance::theInfo,
};
bool UEInternalMeasuredResultsv770extModeSpecificInfoTdd384768::itemsPres[1] = {
	0,
};
const UEInternalMeasuredResultsv770extModeSpecificInfoTdd384768::Info UEInternalMeasuredResultsv770extModeSpecificInfoTdd384768::theInfo = {
	UEInternalMeasuredResultsv770extModeSpecificInfoTdd384768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEInternalMeasuredResultsv770extModeSpecificInfo::choicesInfo[1] = {
	&UEInternalMeasuredResultsv770extModeSpecificInfoTdd384768::theInfo,
};
const UEInternalMeasuredResultsv770extModeSpecificInfo::Info UEInternalMeasuredResultsv770extModeSpecificInfo::theInfo = {
	UEInternalMeasuredResultsv770extModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *UEInternalMeasuredResultsv770ext::itemsInfo[1] = {
	&UEInternalMeasuredResultsv770extModeSpecificInfo::theInfo,
};
bool UEInternalMeasuredResultsv770ext::itemsPres[1] = {
	1,
};
const UEInternalMeasuredResultsv770ext::Info UEInternalMeasuredResultsv770ext::theInfo = {
	UEInternalMeasuredResultsv770ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MeasuredResultsv770ext::choicesInfo[1] = {
	&UEInternalMeasuredResultsv770ext::theInfo,
};
const MeasuredResultsv770ext::Info MeasuredResultsv770ext::theInfo = {
	MeasuredResultsv770ext::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *UEPositioningGANSSAdditionalAssistanceDataRequestv860ext::itemsInfo[1] = {
	&UEPositioningGANSSAdditionalAssistanceDataRequestv860extGanssAddIonoModelReq::theInfo,
};
bool UEPositioningGANSSAdditionalAssistanceDataRequestv860ext::itemsPres[1] = {
	1,
};
const UEPositioningGANSSAdditionalAssistanceDataRequestv860ext::Info UEPositioningGANSSAdditionalAssistanceDataRequestv860ext::theInfo = {
	UEPositioningGANSSAdditionalAssistanceDataRequestv860ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UEPositioningErrorv860ext::itemsInfo[1] = {
	&UEPositioningGANSSAdditionalAssistanceDataRequestv860ext::theInfo,
};
bool UEPositioningErrorv860ext::itemsPres[1] = {
	0,
};
const UEPositioningErrorv860ext::Info UEPositioningErrorv860ext::theInfo = {
	UEPositioningErrorv860ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEPositioningMeasuredResultsv860ext::itemsInfo[1] = {
	&UEPositioningErrorv860ext::theInfo,
};
bool UEPositioningMeasuredResultsv860ext::itemsPres[1] = {
	0,
};
const UEPositioningMeasuredResultsv860ext::Info UEPositioningMeasuredResultsv860ext::theInfo = {
	UEPositioningMeasuredResultsv860ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *MeasuredResultsv860ext::choicesInfo[1] = {
	&UEPositioningMeasuredResultsv860ext::theInfo,
};
const MeasuredResultsv860ext::Info MeasuredResultsv860ext::theInfo = {
	MeasuredResultsv860ext::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *MeasuredResultsv920ext::choicesInfo[1] = {
	&IntraFreqMeasuredResultsListv920ext::theInfo,
};
const MeasuredResultsv920ext::Info MeasuredResultsv920ext::theInfo = {
	MeasuredResultsv920ext::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *MeasuredResultsLCRr4::choicesInfo[1] = {
	&IntraFreqMeasuredResultsList::theInfo,
};
const MeasuredResultsLCRr4::Info MeasuredResultsLCRr4::theInfo = {
	MeasuredResultsLCRr4::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *MeasuredResultsListv770xet::itemsInfo[0] = {
};
bool MeasuredResultsListv770xet::itemsPres[0] = {
};
const MeasuredResultsListv770xet::Info MeasuredResultsListv770xet::theInfo = {
	MeasuredResultsListv770xet::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *MeasuredResultsListv860ext::itemsInfo[0] = {
};
bool MeasuredResultsListv860ext::itemsPres[0] = {
};
const MeasuredResultsListv860ext::Info MeasuredResultsListv860ext::theInfo = {
	MeasuredResultsListv860ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *MeasuredResultsOnRACHCurrentCellModeSpecificInfoFddMeasurementQuantity::choicesInfo[1] = {
	&CPICHEcN0::theInfo,
};
const MeasuredResultsOnRACHCurrentCellModeSpecificInfoFddMeasurementQuantity::Info MeasuredResultsOnRACHCurrentCellModeSpecificInfoFddMeasurementQuantity::theInfo = {
	MeasuredResultsOnRACHCurrentCellModeSpecificInfoFddMeasurementQuantity::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *MeasuredResultsOnRACHCurrentCellModeSpecificInfoFdd::itemsInfo[1] = {
	&MeasuredResultsOnRACHCurrentCellModeSpecificInfoFddMeasurementQuantity::theInfo,
};
bool MeasuredResultsOnRACHCurrentCellModeSpecificInfoFdd::itemsPres[1] = {
	0,
};
const MeasuredResultsOnRACHCurrentCellModeSpecificInfoFdd::Info MeasuredResultsOnRACHCurrentCellModeSpecificInfoFdd::theInfo = {
	MeasuredResultsOnRACHCurrentCellModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *MeasuredResultsOnRACHCurrentCellModeSpecificInfo::choicesInfo[1] = {
	&MeasuredResultsOnRACHCurrentCellModeSpecificInfoFdd::theInfo,
};
const MeasuredResultsOnRACHCurrentCellModeSpecificInfo::Info MeasuredResultsOnRACHCurrentCellModeSpecificInfo::theInfo = {
	MeasuredResultsOnRACHCurrentCellModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *MeasuredResultsOnRACHCurrentCell::itemsInfo[1] = {
	&MeasuredResultsOnRACHCurrentCellModeSpecificInfo::theInfo,
};
bool MeasuredResultsOnRACHCurrentCell::itemsPres[1] = {
	1,
};
const MeasuredResultsOnRACHCurrentCell::Info MeasuredResultsOnRACHCurrentCell::theInfo = {
	MeasuredResultsOnRACHCurrentCell::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MeasuredResultsOnRACH::itemsInfo[1] = {
	&MeasuredResultsOnRACHCurrentCell::theInfo,
};
bool MeasuredResultsOnRACH::itemsPres[1] = {
	0,
};
const MeasuredResultsOnRACH::Info MeasuredResultsOnRACH::theInfo = {
	MeasuredResultsOnRACH::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *MeasuredResultsOnRACHv7g0ext::itemsInfo[1] = {
	&DeltaRSCPPerCell::theInfo,
};
bool MeasuredResultsOnRACHv7g0ext::itemsPres[1] = {
	0,
};
const MeasuredResultsOnRACHv7g0ext::Info MeasuredResultsOnRACHv7g0ext::theInfo = {
	MeasuredResultsOnRACHv7g0ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *MeasuredResultsOnRACHinterFreq::itemsInfo[1] = {
	&MeasuredResultsOnRACHinterFreqInterFreqCellIndicationSIB11::theInfo,
};
bool MeasuredResultsOnRACHinterFreq::itemsPres[1] = {
	1,
};
const MeasuredResultsOnRACHinterFreq::Info MeasuredResultsOnRACHinterFreq::theInfo = {
	MeasuredResultsOnRACHinterFreq::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MeasurementType::choicesInfo[1] = {
	&IntraFrequencyMeasurement::theInfo,
};
const MeasurementType::Info MeasurementType::theInfo = {
	MeasurementType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *MeasurementCommand::choicesInfo[1] = {
	&MeasurementType::theInfo,
};
const MeasurementCommand::Info MeasurementCommand::theInfo = {
	MeasurementCommand::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *MeasurementTyper4::choicesInfo[1] = {
	&IntraFrequencyMeasurementr4::theInfo,
};
const MeasurementTyper4::Info MeasurementTyper4::theInfo = {
	MeasurementTyper4::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *MeasurementCommandr4::choicesInfo[1] = {
	&MeasurementTyper4::theInfo,
};
const MeasurementCommandr4::Info MeasurementCommandr4::theInfo = {
	MeasurementCommandr4::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *MeasurementTyper6::choicesInfo[1] = {
	&IntraFrequencyMeasurementr6::theInfo,
};
const MeasurementTyper6::Info MeasurementTyper6::theInfo = {
	MeasurementTyper6::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *MeasurementCommandr6::choicesInfo[1] = {
	&MeasurementTyper6::theInfo,
};
const MeasurementCommandr6::Info MeasurementCommandr6::theInfo = {
	MeasurementCommandr6::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *MeasurementTyper7::choicesInfo[1] = {
	&IntraFrequencyMeasurementr7::theInfo,
};
const MeasurementTyper7::Info MeasurementTyper7::theInfo = {
	MeasurementTyper7::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *MeasurementCommandr7::choicesInfo[1] = {
	&MeasurementTyper7::theInfo,
};
const MeasurementCommandr7::Info MeasurementCommandr7::theInfo = {
	MeasurementCommandr7::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *MeasurementTyper8::choicesInfo[1] = {
	&IntraFrequencyMeasurementr7::theInfo,
};
const MeasurementTyper8::Info MeasurementTyper8::theInfo = {
	MeasurementTyper8::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *MeasurementCommandr8::choicesInfo[1] = {
	&MeasurementTyper8::theInfo,
};
const MeasurementCommandr8::Info MeasurementCommandr8::theInfo = {
	MeasurementCommandr8::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *MeasurementTyper9::choicesInfo[1] = {
	&IntraFrequencyMeasurementr9::theInfo,
};
const MeasurementTyper9::Info MeasurementTyper9::theInfo = {
	MeasurementTyper9::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *MeasurementCommandr9::choicesInfo[1] = {
	&MeasurementTyper9::theInfo,
};
const MeasurementCommandr9::Info MeasurementCommandr9::theInfo = {
	MeasurementCommandr9::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *MeasurementControlSysInfoUseofHCSHcsnotusedCellSelectQualityMeasureCpichRSCP::itemsInfo[1] = {
	&IntraFreqMeasurementSysInfoRSCP::theInfo,
};
bool MeasurementControlSysInfoUseofHCSHcsnotusedCellSelectQualityMeasureCpichRSCP::itemsPres[1] = {
	0,
};
const MeasurementControlSysInfoUseofHCSHcsnotusedCellSelectQualityMeasureCpichRSCP::Info MeasurementControlSysInfoUseofHCSHcsnotusedCellSelectQualityMeasureCpichRSCP::theInfo = {
	MeasurementControlSysInfoUseofHCSHcsnotusedCellSelectQualityMeasureCpichRSCP::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *MeasurementControlSysInfoUseofHCSHcsnotusedCellSelectQualityMeasure::choicesInfo[1] = {
	&MeasurementControlSysInfoUseofHCSHcsnotusedCellSelectQualityMeasureCpichRSCP::theInfo,
};
const MeasurementControlSysInfoUseofHCSHcsnotusedCellSelectQualityMeasure::Info MeasurementControlSysInfoUseofHCSHcsnotusedCellSelectQualityMeasure::theInfo = {
	MeasurementControlSysInfoUseofHCSHcsnotusedCellSelectQualityMeasure::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *MeasurementControlSysInfoUseofHCSHcsnotused::itemsInfo[1] = {
	&MeasurementControlSysInfoUseofHCSHcsnotusedCellSelectQualityMeasure::theInfo,
};
bool MeasurementControlSysInfoUseofHCSHcsnotused::itemsPres[1] = {
	0,
};
const MeasurementControlSysInfoUseofHCSHcsnotused::Info MeasurementControlSysInfoUseofHCSHcsnotused::theInfo = {
	MeasurementControlSysInfoUseofHCSHcsnotused::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *MeasurementControlSysInfoUseofHCS::choicesInfo[1] = {
	&MeasurementControlSysInfoUseofHCSHcsnotused::theInfo,
};
const MeasurementControlSysInfoUseofHCS::Info MeasurementControlSysInfoUseofHCS::theInfo = {
	MeasurementControlSysInfoUseofHCS::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *MeasurementControlSysInfo::itemsInfo[1] = {
	&MeasurementControlSysInfoUseofHCS::theInfo,
};
bool MeasurementControlSysInfo::itemsPres[1] = {
	0,
};
const MeasurementControlSysInfo::Info MeasurementControlSysInfo::theInfo = {
	MeasurementControlSysInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *MeasurementControlSysInfoExtensionUseofHCSHcsnotusedCellSelectQualityMeasureCpichRSCP::itemsInfo[1] = {
	&NewIntraFreqCellSIListRSCP::theInfo,
};
bool MeasurementControlSysInfoExtensionUseofHCSHcsnotusedCellSelectQualityMeasureCpichRSCP::itemsPres[1] = {
	0,
};
const MeasurementControlSysInfoExtensionUseofHCSHcsnotusedCellSelectQualityMeasureCpichRSCP::Info MeasurementControlSysInfoExtensionUseofHCSHcsnotusedCellSelectQualityMeasureCpichRSCP::theInfo = {
	MeasurementControlSysInfoExtensionUseofHCSHcsnotusedCellSelectQualityMeasureCpichRSCP::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *MeasurementControlSysInfoExtensionUseofHCSHcsnotusedCellSelectQualityMeasure::choicesInfo[1] = {
	&MeasurementControlSysInfoExtensionUseofHCSHcsnotusedCellSelectQualityMeasureCpichRSCP::theInfo,
};
const MeasurementControlSysInfoExtensionUseofHCSHcsnotusedCellSelectQualityMeasure::Info MeasurementControlSysInfoExtensionUseofHCSHcsnotusedCellSelectQualityMeasure::theInfo = {
	MeasurementControlSysInfoExtensionUseofHCSHcsnotusedCellSelectQualityMeasure::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *MeasurementControlSysInfoExtensionUseofHCSHcsnotused::itemsInfo[1] = {
	&MeasurementControlSysInfoExtensionUseofHCSHcsnotusedCellSelectQualityMeasure::theInfo,
};
bool MeasurementControlSysInfoExtensionUseofHCSHcsnotused::itemsPres[1] = {
	0,
};
const MeasurementControlSysInfoExtensionUseofHCSHcsnotused::Info MeasurementControlSysInfoExtensionUseofHCSHcsnotused::theInfo = {
	MeasurementControlSysInfoExtensionUseofHCSHcsnotused::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *MeasurementControlSysInfoExtensionUseofHCS::choicesInfo[1] = {
	&MeasurementControlSysInfoExtensionUseofHCSHcsnotused::theInfo,
};
const MeasurementControlSysInfoExtensionUseofHCS::Info MeasurementControlSysInfoExtensionUseofHCS::theInfo = {
	MeasurementControlSysInfoExtensionUseofHCS::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *MeasurementControlSysInfoExtension::itemsInfo[1] = {
	&MeasurementControlSysInfoExtensionUseofHCS::theInfo,
};
bool MeasurementControlSysInfoExtension::itemsPres[1] = {
	1,
};
const MeasurementControlSysInfoExtension::Info MeasurementControlSysInfoExtension::theInfo = {
	MeasurementControlSysInfoExtension::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MeasurementControlSysInfoExtensionAddonr5::itemsInfo[1] = {
	&MeasurementControlSysInfoExtensionAddonr5NewIntraFrequencyCellInfoListAddonr5::theInfo,
};
bool MeasurementControlSysInfoExtensionAddonr5::itemsPres[1] = {
	0,
};
const MeasurementControlSysInfoExtensionAddonr5::Info MeasurementControlSysInfoExtensionAddonr5::theInfo = {
	MeasurementControlSysInfoExtensionAddonr5::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *MeasurementControlSysInfoExtensionLCRr4UseofHCSHcsnotusedCellSelectQualityMeasureCpichRSCP::itemsInfo[1] = {
	&NewIntraFreqCellSIListRSCPLCRr4::theInfo,
};
bool MeasurementControlSysInfoExtensionLCRr4UseofHCSHcsnotusedCellSelectQualityMeasureCpichRSCP::itemsPres[1] = {
	0,
};
const MeasurementControlSysInfoExtensionLCRr4UseofHCSHcsnotusedCellSelectQualityMeasureCpichRSCP::Info MeasurementControlSysInfoExtensionLCRr4UseofHCSHcsnotusedCellSelectQualityMeasureCpichRSCP::theInfo = {
	MeasurementControlSysInfoExtensionLCRr4UseofHCSHcsnotusedCellSelectQualityMeasureCpichRSCP::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *MeasurementControlSysInfoExtensionLCRr4UseofHCSHcsnotusedCellSelectQualityMeasure::choicesInfo[1] = {
	&MeasurementControlSysInfoExtensionLCRr4UseofHCSHcsnotusedCellSelectQualityMeasureCpichRSCP::theInfo,
};
const MeasurementControlSysInfoExtensionLCRr4UseofHCSHcsnotusedCellSelectQualityMeasure::Info MeasurementControlSysInfoExtensionLCRr4UseofHCSHcsnotusedCellSelectQualityMeasure::theInfo = {
	MeasurementControlSysInfoExtensionLCRr4UseofHCSHcsnotusedCellSelectQualityMeasure::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *MeasurementControlSysInfoExtensionLCRr4UseofHCSHcsnotused::itemsInfo[1] = {
	&MeasurementControlSysInfoExtensionLCRr4UseofHCSHcsnotusedCellSelectQualityMeasure::theInfo,
};
bool MeasurementControlSysInfoExtensionLCRr4UseofHCSHcsnotused::itemsPres[1] = {
	0,
};
const MeasurementControlSysInfoExtensionLCRr4UseofHCSHcsnotused::Info MeasurementControlSysInfoExtensionLCRr4UseofHCSHcsnotused::theInfo = {
	MeasurementControlSysInfoExtensionLCRr4UseofHCSHcsnotused::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *MeasurementControlSysInfoExtensionLCRr4UseofHCS::choicesInfo[1] = {
	&MeasurementControlSysInfoExtensionLCRr4UseofHCSHcsnotused::theInfo,
};
const MeasurementControlSysInfoExtensionLCRr4UseofHCS::Info MeasurementControlSysInfoExtensionLCRr4UseofHCS::theInfo = {
	MeasurementControlSysInfoExtensionLCRr4UseofHCS::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *MeasurementControlSysInfoExtensionLCRr4::itemsInfo[1] = {
	&MeasurementControlSysInfoExtensionLCRr4UseofHCS::theInfo,
};
bool MeasurementControlSysInfoExtensionLCRr4::itemsPres[1] = {
	1,
};
const MeasurementControlSysInfoExtensionLCRr4::Info MeasurementControlSysInfoExtensionLCRr4::theInfo = {
	MeasurementControlSysInfoExtensionLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MeasurementControlSysInfoLCRr4extUseofHCSHcsnotusedCellSelectQualityMeasureCpichRSCP::itemsInfo[1] = {
	&IntraFreqMeasurementSysInfoRSCPLCRr4::theInfo,
};
bool MeasurementControlSysInfoLCRr4extUseofHCSHcsnotusedCellSelectQualityMeasureCpichRSCP::itemsPres[1] = {
	0,
};
const MeasurementControlSysInfoLCRr4extUseofHCSHcsnotusedCellSelectQualityMeasureCpichRSCP::Info MeasurementControlSysInfoLCRr4extUseofHCSHcsnotusedCellSelectQualityMeasureCpichRSCP::theInfo = {
	MeasurementControlSysInfoLCRr4extUseofHCSHcsnotusedCellSelectQualityMeasureCpichRSCP::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *MeasurementControlSysInfoLCRr4extUseofHCSHcsnotusedCellSelectQualityMeasure::choicesInfo[1] = {
	&MeasurementControlSysInfoLCRr4extUseofHCSHcsnotusedCellSelectQualityMeasureCpichRSCP::theInfo,
};
const MeasurementControlSysInfoLCRr4extUseofHCSHcsnotusedCellSelectQualityMeasure::Info MeasurementControlSysInfoLCRr4extUseofHCSHcsnotusedCellSelectQualityMeasure::theInfo = {
	MeasurementControlSysInfoLCRr4extUseofHCSHcsnotusedCellSelectQualityMeasure::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *MeasurementControlSysInfoLCRr4extUseofHCSHcsnotused::itemsInfo[1] = {
	&MeasurementControlSysInfoLCRr4extUseofHCSHcsnotusedCellSelectQualityMeasure::theInfo,
};
bool MeasurementControlSysInfoLCRr4extUseofHCSHcsnotused::itemsPres[1] = {
	1,
};
const MeasurementControlSysInfoLCRr4extUseofHCSHcsnotused::Info MeasurementControlSysInfoLCRr4extUseofHCSHcsnotused::theInfo = {
	MeasurementControlSysInfoLCRr4extUseofHCSHcsnotused::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MeasurementControlSysInfoLCRr4extUseofHCS::choicesInfo[1] = {
	&MeasurementControlSysInfoLCRr4extUseofHCSHcsnotused::theInfo,
};
const MeasurementControlSysInfoLCRr4extUseofHCS::Info MeasurementControlSysInfoLCRr4extUseofHCS::theInfo = {
	MeasurementControlSysInfoLCRr4extUseofHCS::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *MeasurementControlSysInfoLCRr4ext::itemsInfo[1] = {
	&MeasurementControlSysInfoLCRr4extUseofHCS::theInfo,
};
bool MeasurementControlSysInfoLCRr4ext::itemsPres[1] = {
	1,
};
const MeasurementControlSysInfoLCRr4ext::Info MeasurementControlSysInfoLCRr4ext::theInfo = {
	MeasurementControlSysInfoLCRr4ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MeasurementOccasionPatternParameter::itemsInfo[1] = {
	&MeasurementOccasionPatternParameterMeasurementOccasionCoeff::theInfo,
};
bool MeasurementOccasionPatternParameter::itemsPres[1] = {
	0,
};
const MeasurementOccasionPatternParameter::Info MeasurementOccasionPatternParameter::theInfo = {
	MeasurementOccasionPatternParameter::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *MeasurementReportingMode::itemsInfo[1] = {
	&TransferMode::theInfo,
};
bool MeasurementReportingMode::itemsPres[1] = {
	1,
};
const MeasurementReportingMode::Info MeasurementReportingMode::theInfo = {
	MeasurementReportingMode::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MeasurementValidity::itemsInfo[1] = {
	&MeasurementValidityue_State::theInfo,
};
bool MeasurementValidity::itemsPres[1] = {
	1,
};
const MeasurementValidity::Info MeasurementValidity::theInfo = {
	MeasurementValidity::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *NCRTCRMaxHyst::itemsInfo[1] = {
	&NCRTCRMaxHystNCR::theInfo,
};
bool NCRTCRMaxHyst::itemsPres[1] = {
	0,
};
const NCRTCRMaxHyst::Info NCRTCRMaxHyst::theInfo = {
	NCRTCRMaxHyst::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *NAVclockModel::itemsInfo[1] = {
	&NAVclockModelNavToc::theInfo,
};
bool NAVclockModel::itemsPres[1] = {
	1,
};
const NAVclockModel::Info NAVclockModel::theInfo = {
	NAVclockModel::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *NavigationModelSatInfo::itemsInfo[1] = {
	&SatID::theInfo,
};
bool NavigationModelSatInfo::itemsPres[1] = {
	0,
};
const NavigationModelSatInfo::Info NavigationModelSatInfo::theInfo = {
	NavigationModelSatInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *NavModelCNAVKeplerianSet::itemsInfo[1] = {
	&NavModelCNAVKeplerianSetCnavTop::theInfo,
};
bool NavModelCNAVKeplerianSet::itemsPres[1] = {
	1,
};
const NavModelCNAVKeplerianSet::Info NavModelCNAVKeplerianSet::theInfo = {
	NavModelCNAVKeplerianSet::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *NavModelGLONASSecef::itemsInfo[1] = {
	&NavModelGLONASSecefGloEn::theInfo,
};
bool NavModelGLONASSecef::itemsPres[1] = {
	1,
};
const NavModelGLONASSecef::Info NavModelGLONASSecef::theInfo = {
	NavModelGLONASSecef::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *NavModelNAVKeplerianSet::itemsInfo[1] = {
	&NavModelNAVKeplerianSetNavURA::theInfo,
};
bool NavModelNAVKeplerianSet::itemsPres[1] = {
	1,
};
const NavModelNAVKeplerianSet::Info NavModelNAVKeplerianSet::theInfo = {
	NavModelNAVKeplerianSet::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *NavModelSBASecef::itemsInfo[1] = {
	&NavModelSBASecefSbasTo::theInfo,
};
bool NavModelSBASecef::itemsPres[1] = {
	1,
};
const NavModelSBASecef::Info NavModelSBASecef::theInfo = {
	NavModelSBASecef::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *EphemerisParameter::itemsInfo[1] = {
	&EphemerisParameterCodeOnL2::theInfo,
};
bool EphemerisParameter::itemsPres[1] = {
	1,
};
const EphemerisParameter::Info EphemerisParameter::theInfo = {
	EphemerisParameter::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *NeighbourModeSpecificInfoFdd::itemsInfo[1] = {
	&PrimaryCPICHInfo::theInfo,
};
bool NeighbourModeSpecificInfoFdd::itemsPres[1] = {
	0,
};
const NeighbourModeSpecificInfoFdd::Info NeighbourModeSpecificInfoFdd::theInfo = {
	NeighbourModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *NeighbourModeSpecificInfo::choicesInfo[1] = {
	&NeighbourModeSpecificInfoFdd::theInfo,
};
const NeighbourModeSpecificInfo::Info NeighbourModeSpecificInfo::theInfo = {
	NeighbourModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *Neighbour::itemsInfo[1] = {
	&NeighbourModeSpecificInfo::theInfo,
};
bool Neighbour::itemsPres[1] = {
	1,
};
const Neighbour::Info Neighbour::theInfo = {
	Neighbour::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *NeighbourTDDr7::itemsInfo[1] = {
	&UARFCN::theInfo,
};
bool NeighbourTDDr7::itemsPres[1] = {
	0,
};
const NeighbourTDDr7::Info NeighbourTDDr7::theInfo = {
	NeighbourTDDr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEPositioningOTDOAQuality::itemsInfo[1] = {
	&UEPositioningOTDOAQualityStdResolution::theInfo,
};
bool UEPositioningOTDOAQuality::itemsPres[1] = {
	1,
};
const UEPositioningOTDOAQuality::Info UEPositioningOTDOAQuality::theInfo = {
	UEPositioningOTDOAQuality::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *NeighbourQuality::itemsInfo[1] = {
	&UEPositioningOTDOAQuality::theInfo,
};
bool NeighbourQuality::itemsPres[1] = {
	1,
};
const NeighbourQuality::Info NeighbourQuality::theInfo = {
	NeighbourQuality::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *NewInterFreqCellv7b0ext::itemsInfo[1] = {
	&NewInterFreqCellv7b0extIntraSecondaryFreqIndicator::theInfo,
};
bool NewInterFreqCellv7b0ext::itemsPres[1] = {
	1,
};
const NewInterFreqCellv7b0ext::Info NewInterFreqCellv7b0ext::theInfo = {
	NewInterFreqCellv7b0ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *NewInterFreqCellLCRv8a0ext::itemsInfo[1] = {
	&CellInfoLCRr8ext::theInfo,
};
bool NewInterFreqCellLCRv8a0ext::itemsPres[1] = {
	0,
};
const NewInterFreqCellLCRv8a0ext::Info NewInterFreqCellLCRv8a0ext::theInfo = {
	NewInterFreqCellLCRv8a0ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *NewIntraFreqCellLCRv8a0ext::itemsInfo[1] = {
	&CellInfoLCRr8ext::theInfo,
};
bool NewIntraFreqCellLCRv8a0ext::itemsPres[1] = {
	0,
};
const NewIntraFreqCellLCRv8a0ext::Info NewIntraFreqCellLCRv8a0ext::theInfo = {
	NewIntraFreqCellLCRv8a0ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *NonUsedFreqParameter::itemsInfo[1] = {
	&Threshold::theInfo,
};
bool NonUsedFreqParameter::itemsPres[1] = {
	1,
};
const NonUsedFreqParameter::Info NonUsedFreqParameter::theInfo = {
	NonUsedFreqParameter::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *NonUsedFreqParameterr6::itemsInfo[1] = {
	&Thresholdr6::theInfo,
};
bool NonUsedFreqParameterr6::itemsPres[1] = {
	1,
};
const NonUsedFreqParameterr6::Info NonUsedFreqParameterr6::theInfo = {
	NonUsedFreqParameterr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PeriodicalReportingCriteria::itemsInfo[1] = {
	&ReportingAmount::theInfo,
};
bool PeriodicalReportingCriteria::itemsPres[1] = {
	0,
};
const PeriodicalReportingCriteria::Info PeriodicalReportingCriteria::theInfo = {
	PeriodicalReportingCriteria::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *PeriodicalWithReportingCellStatus::itemsInfo[1] = {
	&PeriodicalReportingCriteria::theInfo,
};
bool PeriodicalWithReportingCellStatus::itemsPres[1] = {
	0,
};
const PeriodicalWithReportingCellStatus::Info PeriodicalWithReportingCellStatus::theInfo = {
	PeriodicalWithReportingCellStatus::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *PLMNsOfIntraFreqCellsList::itemsInfo[0] = {
};
bool PLMNsOfIntraFreqCellsList::itemsPres[0] = {
};
const PLMNsOfIntraFreqCellsList::Info PLMNsOfIntraFreqCellsList::theInfo = {
	PLMNsOfIntraFreqCellsList::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *PLMNIdentitiesOfNeighbourCells::itemsInfo[1] = {
	&PLMNsOfIntraFreqCellsList::theInfo,
};
bool PLMNIdentitiesOfNeighbourCells::itemsPres[1] = {
	0,
};
const PLMNIdentitiesOfNeighbourCells::Info PLMNIdentitiesOfNeighbourCells::theInfo = {
	PLMNIdentitiesOfNeighbourCells::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *MultiplePLMNsOfIntraFreqCellsList::itemsInfo[0] = {
};
bool MultiplePLMNsOfIntraFreqCellsList::itemsPres[0] = {
};
const MultiplePLMNsOfIntraFreqCellsList::Info MultiplePLMNsOfIntraFreqCellsList::theInfo = {
	MultiplePLMNsOfIntraFreqCellsList::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *PLMNIdentitiesOfNeighbourCellsv860ext::itemsInfo[1] = {
	&MultiplePLMNsOfIntraFreqCellsList::theInfo,
};
bool PLMNIdentitiesOfNeighbourCellsv860ext::itemsPres[1] = {
	0,
};
const PLMNIdentitiesOfNeighbourCellsv860ext::Info PLMNIdentitiesOfNeighbourCellsv860ext::theInfo = {
	PLMNIdentitiesOfNeighbourCellsv860ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *PLMNsOfInterFreqCellsList::itemsInfo[0] = {
};
bool PLMNsOfInterFreqCellsList::itemsPres[0] = {
};
const PLMNsOfInterFreqCellsList::Info PLMNsOfInterFreqCellsList::theInfo = {
	PLMNsOfInterFreqCellsList::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *MultiplePLMNsOfInterFreqCellsList::itemsInfo[0] = {
};
bool MultiplePLMNsOfInterFreqCellsList::itemsPres[0] = {
};
const MultiplePLMNsOfInterFreqCellsList::Info MultiplePLMNsOfInterFreqCellsList::theInfo = {
	MultiplePLMNsOfInterFreqCellsList::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *PLMNsOfInterRATCellsList::itemsInfo[0] = {
};
bool PLMNsOfInterRATCellsList::itemsPres[0] = {
};
const PLMNsOfInterRATCellsList::Info PLMNsOfInterRATCellsList::theInfo = {
	PLMNsOfInterRATCellsList::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *PositionEstimate::choicesInfo[1] = {
	&EllipsoidPoint::theInfo,
};
const PositionEstimate::Info PositionEstimate::theInfo = {
	PositionEstimate::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *QualityReportingCriteriaSingle::itemsInfo[1] = {
	&TransportChannelIdentity::theInfo,
};
bool QualityReportingCriteriaSingle::itemsPres[1] = {
	1,
};
const QualityReportingCriteriaSingle::Info QualityReportingCriteriaSingle::theInfo = {
	QualityReportingCriteriaSingle::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *QualityReportCriteria::choicesInfo[1] = {
	&QualityReportingCriteria::theInfo,
};
const QualityReportCriteria::Info QualityReportCriteria::theInfo = {
	QualityReportCriteria::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *QualityReportingQuantity::itemsInfo[1] = {
	&QualityReportingQuantityDlTransChBLER::theInfo,
};
bool QualityReportingQuantity::itemsPres[1] = {
	1,
};
const QualityReportingQuantity::Info QualityReportingQuantity::theInfo = {
	QualityReportingQuantity::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ReferenceCellPosition::choicesInfo[1] = {
	&EllipsoidPoint::theInfo,
};
const ReferenceCellPosition::Info ReferenceCellPosition::theInfo = {
	ReferenceCellPosition::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *ReferenceLocation::itemsInfo[1] = {
	&EllipsoidPointAltitudeEllipsoide::theInfo,
};
bool ReferenceLocation::itemsPres[1] = {
	1,
};
const ReferenceLocation::Info ReferenceLocation::theInfo = {
	ReferenceLocation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ReferenceLocationGANSS::itemsInfo[1] = {
	&EllipsoidPointAltitudeEllipsoide::theInfo,
};
bool ReferenceLocationGANSS::itemsPres[1] = {
	1,
};
const ReferenceLocationGANSS::Info ReferenceLocationGANSS::theInfo = {
	ReferenceLocationGANSS::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ReferenceTimeDifferenceToCell::choicesInfo[1] = {
	&ReferenceTimeDifferenceToCellAccuracy40::theInfo,
};
const ReferenceTimeDifferenceToCell::Info ReferenceTimeDifferenceToCell::theInfo = {
	ReferenceTimeDifferenceToCell::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *ReportingCellStatus::choicesInfo[1] = {
	&MaxNumberOfReportingCellsType1::theInfo,
};
const ReportingCellStatus::Info ReportingCellStatus::theInfo = {
	ReportingCellStatus::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *ReportingCellStatusOpt::itemsInfo[1] = {
	&ReportingCellStatus::theInfo,
};
bool ReportingCellStatusOpt::itemsPres[1] = {
	0,
};
const ReportingCellStatusOpt::Info ReportingCellStatusOpt::theInfo = {
	ReportingCellStatusOpt::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ReportingInfoForCellDCH::itemsInfo[1] = {
	&IntraFreqReportingQuantity::theInfo,
};
bool ReportingInfoForCellDCH::itemsPres[1] = {
	1,
};
const ReportingInfoForCellDCH::Info ReportingInfoForCellDCH::theInfo = {
	ReportingInfoForCellDCH::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ReportingInfoForCellDCHLCRr4::itemsInfo[1] = {
	&IntraFreqReportingQuantity::theInfo,
};
bool ReportingInfoForCellDCHLCRr4::itemsPres[1] = {
	1,
};
const ReportingInfoForCellDCHLCRr4::Info ReportingInfoForCellDCHLCRr4::theInfo = {
	ReportingInfoForCellDCHLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ReqDataBitAssistance::itemsInfo[1] = {
	&DGANSSSigIdReq::theInfo,
};
bool ReqDataBitAssistance::itemsPres[1] = {
	0,
};
const ReqDataBitAssistance::Info ReqDataBitAssistance::theInfo = {
	ReqDataBitAssistance::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *RLInformationLists::itemsInfo[1] = {
	&RLAdditionInfoList::theInfo,
};
bool RLInformationLists::itemsPres[1] = {
	0,
};
const RLInformationLists::Info RLInformationLists::theInfo = {
	RLInformationLists::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SatData::itemsInfo[1] = {
	&SatID::theInfo,
};
bool SatData::itemsPres[1] = {
	1,
};
const SatData::Info SatData::theInfo = {
	SatData::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *SatellitesListRelatedData::itemsInfo[1] = {
	&SatellitesListRelatedDataSatId::theInfo,
};
bool SatellitesListRelatedData::itemsPres[1] = {
	1,
};
const SatellitesListRelatedData::Info SatellitesListRelatedData::theInfo = {
	SatellitesListRelatedData::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *Satelliteclockmodel::itemsInfo[1] = {
	&SatelliteclockmodelToc::theInfo,
};
bool Satelliteclockmodel::itemsPres[1] = {
	0,
};
const Satelliteclockmodel::Info Satelliteclockmodel::theInfo = {
	Satelliteclockmodel::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SBASclockModel::itemsInfo[1] = {
	&SBASclockModelSbasTo::theInfo,
};
bool SBASclockModel::itemsPres[1] = {
	1,
};
const SBASclockModel::Info SBASclockModel::theInfo = {
	SBASclockModel::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *SFNSFNObsTimeDifference::choicesInfo[1] = {
	&SFNSFNObsTimeDifference1::theInfo,
};
const SFNSFNObsTimeDifference::Info SFNSFNObsTimeDifference::theInfo = {
	SFNSFNObsTimeDifference::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *SFNSFNRelTimeDifference1::itemsInfo[1] = {
	&SFNSFNRelTimeDifference1SfnOffset::theInfo,
};
bool SFNSFNRelTimeDifference1::itemsPres[1] = {
	1,
};
const SFNSFNRelTimeDifference1::Info SFNSFNRelTimeDifference1::theInfo = {
	SFNSFNRelTimeDifference1::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *SIRMeasurementResults::itemsInfo[1] = {
	&TFCSIdentityPlain::theInfo,
};
bool SIRMeasurementResults::itemsPres[1] = {
	1,
};
const SIRMeasurementResults::Info SIRMeasurementResults::theInfo = {
	SIRMeasurementResults::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *SubFrame1Reserved::itemsInfo[1] = {
	&SubFrame1ReservedReserved1::theInfo,
};
bool SubFrame1Reserved::itemsPres[1] = {
	1,
};
const SubFrame1Reserved::Info SubFrame1Reserved::theInfo = {
	SubFrame1Reserved::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *TADVinfo::itemsInfo[1] = {
	&TADVinfoTADV::theInfo,
};
bool TADVinfo::itemsPres[1] = {
	1,
};
const TADVinfo::Info TADVinfo::theInfo = {
	TADVinfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *TADVinfoext::itemsInfo[1] = {
	&TADVinfoextTADV::theInfo,
};
bool TADVinfoext::itemsPres[1] = {
	1,
};
const TADVinfoext::Info TADVinfoext::theInfo = {
	TADVinfoext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *TemporaryOffsetList::itemsInfo[1] = {
	&TemporaryOffset1::theInfo,
};
bool TemporaryOffsetList::itemsPres[1] = {
	1,
};
const TemporaryOffsetList::Info TemporaryOffsetList::theInfo = {
	TemporaryOffsetList::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *TimeslotInfo::itemsInfo[1] = {
	&TimeslotNumber::theInfo,
};
bool TimeslotInfo::itemsPres[1] = {
	1,
};
const TimeslotInfo::Info TimeslotInfo::theInfo = {
	TimeslotInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *TimeslotInfoLCRr4::itemsInfo[1] = {
	&TimeslotNumberLCRr4::theInfo,
};
bool TimeslotInfoLCRr4::itemsPres[1] = {
	1,
};
const TimeslotInfoLCRr4::Info TimeslotInfoLCRr4::theInfo = {
	TimeslotInfoLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *TimeslotInfoListr4::choicesInfo[1] = {
	&TimeslotInfoListr4Tdd384::theInfo,
};
const TimeslotInfoListr4::Info TimeslotInfoListr4::theInfo = {
	TimeslotInfoListr4::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *TimeslotWithISCP::itemsInfo[1] = {
	&TimeslotNumber::theInfo,
};
bool TimeslotWithISCP::itemsPres[1] = {
	1,
};
const TimeslotWithISCP::Info TimeslotWithISCP::theInfo = {
	TimeslotWithISCP::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *TrafficVolumeEventParam::itemsInfo[1] = {
	&TrafficVolumeEventType::theInfo,
};
bool TrafficVolumeEventParam::itemsPres[1] = {
	0,
};
const TrafficVolumeEventParam::Info TrafficVolumeEventParam::theInfo = {
	TrafficVolumeEventParam::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ULTrCHIdentity::choicesInfo[1] = {
	&TransportChannelIdentity::theInfo,
};
const ULTrCHIdentity::Info ULTrCHIdentity::theInfo = {
	ULTrCHIdentity::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *TrafficVolumeEventResults::itemsInfo[1] = {
	&ULTrCHIdentity::theInfo,
};
bool TrafficVolumeEventResults::itemsPres[1] = {
	1,
};
const TrafficVolumeEventResults::Info TrafficVolumeEventResults::theInfo = {
	TrafficVolumeEventResults::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *TrafficVolumeMeasQuantity::choicesInfo[1] = {
	&TrafficVolumeMeasQuantityRlcBufferPayload::theInfo,
};
const TrafficVolumeMeasQuantity::Info TrafficVolumeMeasQuantity::theInfo = {
	TrafficVolumeMeasQuantity::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *TrafficVolumeMeasSysInfo::itemsInfo[1] = {
	&MeasurementIdentity::theInfo,
};
bool TrafficVolumeMeasSysInfo::itemsPres[1] = {
	0,
};
const TrafficVolumeMeasSysInfo::Info TrafficVolumeMeasSysInfo::theInfo = {
	TrafficVolumeMeasSysInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *TrafficVolumeMeasuredResults::itemsInfo[1] = {
	&RBIdentity::theInfo,
};
bool TrafficVolumeMeasuredResults::itemsPres[1] = {
	0,
};
const TrafficVolumeMeasuredResults::Info TrafficVolumeMeasuredResults::theInfo = {
	TrafficVolumeMeasuredResults::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *TransChCriteria::itemsInfo[1] = {
	&ULTrCHIdentity::theInfo,
};
bool TransChCriteria::itemsPres[1] = {
	0,
};
const TransChCriteria::Info TransChCriteria::theInfo = {
	TransChCriteria::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *TrafficVolumeReportingCriteria::itemsInfo[1] = {
	&TransChCriteriaList::theInfo,
};
bool TrafficVolumeReportingCriteria::itemsPres[1] = {
	0,
};
const TrafficVolumeReportingCriteria::Info TrafficVolumeReportingCriteria::theInfo = {
	TrafficVolumeReportingCriteria::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *TrafficVolumeReportCriteria::choicesInfo[1] = {
	&TrafficVolumeReportingCriteria::theInfo,
};
const TrafficVolumeReportCriteria::Info TrafficVolumeReportCriteria::theInfo = {
	TrafficVolumeReportCriteria::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *TrafficVolumeReportCriteriaSysInfo::choicesInfo[1] = {
	&TrafficVolumeReportingCriteria::theInfo,
};
const TrafficVolumeReportCriteriaSysInfo::Info TrafficVolumeReportCriteriaSysInfo::theInfo = {
	TrafficVolumeReportCriteriaSysInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *TrafficVolumeReportingQuantity::itemsInfo[1] = {
	&TrafficVolumeReportingQuantityRlcRBBufferPayload::theInfo,
};
bool TrafficVolumeReportingQuantity::itemsPres[1] = {
	1,
};
const TrafficVolumeReportingQuantity::Info TrafficVolumeReportingQuantity::theInfo = {
	TrafficVolumeReportingQuantity::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UE6ABEvent::itemsInfo[1] = {
	&TimeToTrigger::theInfo,
};
bool UE6ABEvent::itemsPres[1] = {
	1,
};
const UE6ABEvent::Info UE6ABEvent::theInfo = {
	UE6ABEvent::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UE6FGEvent::itemsInfo[1] = {
	&TimeToTrigger::theInfo,
};
bool UE6FGEvent::itemsPres[1] = {
	1,
};
const UE6FGEvent::Info UE6FGEvent::theInfo = {
	UE6FGEvent::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UEAutonomousUpdateMode::choicesInfo[1] = {
	&UEAutonomousUpdateModeDummy::theInfo,
};
const UEAutonomousUpdateMode::Info UEAutonomousUpdateMode::theInfo = {
	UEAutonomousUpdateMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *UEInternalEventParam::choicesInfo[1] = {
	&UE6ABEvent::theInfo,
};
const UEInternalEventParam::Info UEInternalEventParam::theInfo = {
	UEInternalEventParam::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *UEInternalEventResults::choicesInfo[1] = {
	&UEInternalEventResultsEvent6a::theInfo,
};
const UEInternalEventResults::Info UEInternalEventResults::theInfo = {
	UEInternalEventResults::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *UEInternalMeasQuantity::itemsInfo[1] = {
	&UEMeasurementQuantity::theInfo,
};
bool UEInternalMeasQuantity::itemsPres[1] = {
	0,
};
const UEInternalMeasQuantity::Info UEInternalMeasQuantity::theInfo = {
	UEInternalMeasQuantity::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEInternalMeasuredResultsModeSpecificInfoFdd::itemsInfo[1] = {
	&UETransmittedPower::theInfo,
};
bool UEInternalMeasuredResultsModeSpecificInfoFdd::itemsPres[1] = {
	0,
};
const UEInternalMeasuredResultsModeSpecificInfoFdd::Info UEInternalMeasuredResultsModeSpecificInfoFdd::theInfo = {
	UEInternalMeasuredResultsModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEInternalMeasuredResultsModeSpecificInfo::choicesInfo[1] = {
	&UEInternalMeasuredResultsModeSpecificInfoFdd::theInfo,
};
const UEInternalMeasuredResultsModeSpecificInfo::Info UEInternalMeasuredResultsModeSpecificInfo::theInfo = {
	UEInternalMeasuredResultsModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *UEInternalMeasuredResults::itemsInfo[1] = {
	&UEInternalMeasuredResultsModeSpecificInfo::theInfo,
};
bool UEInternalMeasuredResults::itemsPres[1] = {
	1,
};
const UEInternalMeasuredResults::Info UEInternalMeasuredResults::theInfo = {
	UEInternalMeasuredResults::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UEInternalMeasuredResultsLCRr4::itemsInfo[1] = {
	&UETransmittedPowerTDDList::theInfo,
};
bool UEInternalMeasuredResultsLCRr4::itemsPres[1] = {
	0,
};
const UEInternalMeasuredResultsLCRr4::Info UEInternalMeasuredResultsLCRr4::theInfo = {
	UEInternalMeasuredResultsLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEInternalMeasurementSysInfo::itemsInfo[1] = {
	&MeasurementIdentity::theInfo,
};
bool UEInternalMeasurementSysInfo::itemsPres[1] = {
	0,
};
const UEInternalMeasurementSysInfo::Info UEInternalMeasurementSysInfo::theInfo = {
	UEInternalMeasurementSysInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEInternalReportingCriteria::itemsInfo[1] = {
	&UEInternalEventParamList::theInfo,
};
bool UEInternalReportingCriteria::itemsPres[1] = {
	0,
};
const UEInternalReportingCriteria::Info UEInternalReportingCriteria::theInfo = {
	UEInternalReportingCriteria::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEInternalReportCriteria::choicesInfo[1] = {
	&UEInternalReportingCriteria::theInfo,
};
const UEInternalReportCriteria::Info UEInternalReportCriteria::theInfo = {
	UEInternalReportCriteria::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *UEInternalReportingQuantity::itemsInfo[1] = {
	&UEInternalReportingQuantityUeTransmittedPower::theInfo,
};
bool UEInternalReportingQuantity::itemsPres[1] = {
	1,
};
const UEInternalReportingQuantity::Info UEInternalReportingQuantity::theInfo = {
	UEInternalReportingQuantity::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UEInternalReportingQuantityr4::itemsInfo[1] = {
	&UEInternalReportingQuantityr4UeTransmittedPower::theInfo,
};
bool UEInternalReportingQuantityr4::itemsPres[1] = {
	1,
};
const UEInternalReportingQuantityr4::Info UEInternalReportingQuantityr4::theInfo = {
	UEInternalReportingQuantityr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UERXTXReportEntry::itemsInfo[1] = {
	&PrimaryCPICHInfo::theInfo,
};
bool UERXTXReportEntry::itemsPres[1] = {
	1,
};
const UERXTXReportEntry::Info UERXTXReportEntry::theInfo = {
	UERXTXReportEntry::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UERXTXTimeDifferenceType2Info::itemsInfo[1] = {
	&UERXTXTimeDifferenceType2::theInfo,
};
bool UERXTXTimeDifferenceType2Info::itemsPres[1] = {
	1,
};
const UERXTXTimeDifferenceType2Info::Info UERXTXTimeDifferenceType2Info::theInfo = {
	UERXTXTimeDifferenceType2Info::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UEPositioningCipherParameters::itemsInfo[1] = {
	&UEPositioningCipherParametersCipheringKeyFlag::theInfo,
};
bool UEPositioningCipherParameters::itemsPres[1] = {
	1,
};
const UEPositioningCipherParameters::Info UEPositioningCipherParameters::theInfo = {
	UEPositioningCipherParameters::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UEPositioningDGANSSCorrections::itemsInfo[1] = {
	&DGANSSInfoList::theInfo,
};
bool UEPositioningDGANSSCorrections::itemsPres[1] = {
	1,
};
const UEPositioningDGANSSCorrections::Info UEPositioningDGANSSCorrections::theInfo = {
	UEPositioningDGANSSCorrections::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UEPositioningDGANSSCorrectionsr9::itemsInfo[1] = {
	&DGANSSInfoListr9::theInfo,
};
bool UEPositioningDGANSSCorrectionsr9::itemsPres[1] = {
	1,
};
const UEPositioningDGANSSCorrectionsr9::Info UEPositioningDGANSSCorrectionsr9::theInfo = {
	UEPositioningDGANSSCorrectionsr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UEPositioningError::itemsInfo[1] = {
	&UEPositioningErrorCause::theInfo,
};
bool UEPositioningError::itemsPres[1] = {
	0,
};
const UEPositioningError::Info UEPositioningError::theInfo = {
	UEPositioningError::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEPositioningErrorr7::itemsInfo[1] = {
	&UEPositioningErrorCauser7::theInfo,
};
bool UEPositioningErrorr7::itemsPres[1] = {
	0,
};
const UEPositioningErrorr7::Info UEPositioningErrorr7::theInfo = {
	UEPositioningErrorr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEPositioningEventParam::itemsInfo[1] = {
	&ReportingAmount::theInfo,
};
bool UEPositioningEventParam::itemsPres[1] = {
	1,
};
const UEPositioningEventParam::Info UEPositioningEventParam::theInfo = {
	UEPositioningEventParam::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UEPositioningEventParamr7::itemsInfo[1] = {
	&ReportingAmount::theInfo,
};
bool UEPositioningEventParamr7::itemsPres[1] = {
	1,
};
const UEPositioningEventParamr7::Info UEPositioningEventParamr7::theInfo = {
	UEPositioningEventParamr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UEPositioningEventSpecificInfo::choicesInfo[1] = {
	&ThresholdPositionChange::theInfo,
};
const UEPositioningEventSpecificInfo::Info UEPositioningEventSpecificInfo::theInfo = {
	UEPositioningEventSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *UEPositioningEventSpecificInfor7::choicesInfo[1] = {
	&ThresholdPositionChange::theInfo,
};
const UEPositioningEventSpecificInfor7::Info UEPositioningEventSpecificInfor7::theInfo = {
	UEPositioningEventSpecificInfor7::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *UTCmodelSet1::itemsInfo[1] = {
	&UTCmodelSet1UtcA0::theInfo,
};
bool UTCmodelSet1::itemsPres[1] = {
	1,
};
const UTCmodelSet1::Info UTCmodelSet1::theInfo = {
	UTCmodelSet1::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UEPositioningGANSSAddUTCModels::itemsInfo[1] = {
	&UTCmodelSet1::theInfo,
};
bool UEPositioningGANSSAddUTCModels::itemsPres[1] = {
	0,
};
const UEPositioningGANSSAddUTCModels::Info UEPositioningGANSSAddUTCModels::theInfo = {
	UEPositioningGANSSAddUTCModels::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEPositioningGANSSAlmanac::itemsInfo[1] = {
	&UEPositioningGANSSAlmanacGansswknumber::theInfo,
};
bool UEPositioningGANSSAlmanac::itemsPres[1] = {
	0,
};
const UEPositioningGANSSAlmanac::Info UEPositioningGANSSAlmanac::theInfo = {
	UEPositioningGANSSAlmanac::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEPositioningGANSSAlmanacv860ext::itemsInfo[1] = {
	&ALMNAVKeplerianSet::theInfo,
};
bool UEPositioningGANSSAlmanacv860ext::itemsPres[1] = {
	0,
};
const UEPositioningGANSSAlmanacv860ext::Info UEPositioningGANSSAlmanacv860ext::theInfo = {
	UEPositioningGANSSAlmanacv860ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEPositioningGANSSAlmanacr8::itemsInfo[1] = {
	&UEPositioningGANSSAlmanacr8Gansswknumber::theInfo,
};
bool UEPositioningGANSSAlmanacr8::itemsPres[1] = {
	0,
};
const UEPositioningGANSSAlmanacr8::Info UEPositioningGANSSAlmanacr8::theInfo = {
	UEPositioningGANSSAlmanacr8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEPositioningGANSSAdditionalAssistanceDataRequest::itemsInfo[1] = {
	&UEPositioningGANSSAdditionalAssistanceDataRequestGanssReferenceTime::theInfo,
};
bool UEPositioningGANSSAdditionalAssistanceDataRequest::itemsPres[1] = {
	1,
};
const UEPositioningGANSSAdditionalAssistanceDataRequest::Info UEPositioningGANSSAdditionalAssistanceDataRequest::theInfo = {
	UEPositioningGANSSAdditionalAssistanceDataRequest::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UEPositioningGANSSAddIonoModel::itemsInfo[1] = {
	&UEPositioningGANSSAddIonoModelDataID::theInfo,
};
bool UEPositioningGANSSAddIonoModel::itemsPres[1] = {
	1,
};
const UEPositioningGANSSAddIonoModel::Info UEPositioningGANSSAddIonoModel::theInfo = {
	UEPositioningGANSSAddIonoModel::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UEPositioningGANSSAddNavigationModels::itemsInfo[1] = {
	&UEPositioningGANSSAddNavigationModelsnon_broadcastIndication::theInfo,
};
bool UEPositioningGANSSAddNavigationModels::itemsPres[1] = {
	1,
};
const UEPositioningGANSSAddNavigationModels::Info UEPositioningGANSSAddNavigationModels::theInfo = {
	UEPositioningGANSSAddNavigationModels::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UEPositioningGANSSReferenceTime::itemsInfo[1] = {
	&UEPositioningGANSSReferenceTimeGanssDay::theInfo,
};
bool UEPositioningGANSSReferenceTime::itemsPres[1] = {
	0,
};
const UEPositioningGANSSReferenceTime::Info UEPositioningGANSSReferenceTime::theInfo = {
	UEPositioningGANSSReferenceTime::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEPositioningGANSSAssistanceData::itemsInfo[1] = {
	&UEPositioningGANSSReferenceTime::theInfo,
};
bool UEPositioningGANSSAssistanceData::itemsPres[1] = {
	0,
};
const UEPositioningGANSSAssistanceData::Info UEPositioningGANSSAssistanceData::theInfo = {
	UEPositioningGANSSAssistanceData::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEPositioningGANSSAssistanceDatav860ext::itemsInfo[1] = {
	&UEPositioningGANSSAddIonoModel::theInfo,
};
bool UEPositioningGANSSAssistanceDatav860ext::itemsPres[1] = {
	0,
};
const UEPositioningGANSSAssistanceDatav860ext::Info UEPositioningGANSSAssistanceDatav860ext::theInfo = {
	UEPositioningGANSSAssistanceDatav860ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEPositioningGANSSAssistanceDatar8::itemsInfo[1] = {
	&UEPositioningGANSSReferenceTime::theInfo,
};
bool UEPositioningGANSSAssistanceDatar8::itemsPres[1] = {
	0,
};
const UEPositioningGANSSAssistanceDatar8::Info UEPositioningGANSSAssistanceDatar8::theInfo = {
	UEPositioningGANSSAssistanceDatar8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEPositioningGANSSAssistanceDatar9::itemsInfo[1] = {
	&UEPositioningGANSSReferenceTime::theInfo,
};
bool UEPositioningGANSSAssistanceDatar9::itemsPres[1] = {
	0,
};
const UEPositioningGANSSAssistanceDatar9::Info UEPositioningGANSSAssistanceDatar9::theInfo = {
	UEPositioningGANSSAssistanceDatar9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEPositioningGANSSAssistanceDatav920ext::itemsInfo[1] = {
	&GANSSGenericDataListv920ext::theInfo,
};
bool UEPositioningGANSSAssistanceDatav920ext::itemsPres[1] = {
	0,
};
const UEPositioningGANSSAssistanceDatav920ext::Info UEPositioningGANSSAssistanceDatav920ext::theInfo = {
	UEPositioningGANSSAssistanceDatav920ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEPositioningGANSSAuxiliaryInfo::choicesInfo[1] = {
	&AuxInfoGANSSID1::theInfo,
};
const UEPositioningGANSSAuxiliaryInfo::Info UEPositioningGANSSAuxiliaryInfo::theInfo = {
	UEPositioningGANSSAuxiliaryInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *UEPositioningGANSSClockModel::itemsInfo[1] = {
	&SatelliteclockmodelList::theInfo,
};
bool UEPositioningGANSSClockModel::itemsPres[1] = {
	1,
};
const UEPositioningGANSSClockModel::Info UEPositioningGANSSClockModel::theInfo = {
	UEPositioningGANSSClockModel::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UEPositioningGANSSAddClockModels::itemsInfo[1] = {
	&NAVclockModel::theInfo,
};
bool UEPositioningGANSSAddClockModels::itemsPres[1] = {
	0,
};
const UEPositioningGANSSAddClockModels::Info UEPositioningGANSSAddClockModels::theInfo = {
	UEPositioningGANSSAddClockModels::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEPositioningGANSSAddOrbitModels::itemsInfo[1] = {
	&NavModelNAVKeplerianSet::theInfo,
};
bool UEPositioningGANSSAddOrbitModels::itemsPres[1] = {
	0,
};
const UEPositioningGANSSAddOrbitModels::Info UEPositioningGANSSAddOrbitModels::theInfo = {
	UEPositioningGANSSAddOrbitModels::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEPositioningGANSSData::itemsInfo[1] = {
	&UEPositioningCipherParameters::theInfo,
};
bool UEPositioningGANSSData::itemsPres[1] = {
	0,
};
const UEPositioningGANSSData::Info UEPositioningGANSSData::theInfo = {
	UEPositioningGANSSData::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEPositioningGANSSDataBitAssistance::itemsInfo[1] = {
	&UEPositioningGANSSDataBitAssistanceGansstod::theInfo,
};
bool UEPositioningGANSSDataBitAssistance::itemsPres[1] = {
	1,
};
const UEPositioningGANSSDataBitAssistance::Info UEPositioningGANSSDataBitAssistance::theInfo = {
	UEPositioningGANSSDataBitAssistance::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UEPositioningGANSSEarthOrientPara::itemsInfo[1] = {
	&UEPositioningGANSSEarthOrientParaTeop::theInfo,
};
bool UEPositioningGANSSEarthOrientPara::itemsPres[1] = {
	1,
};
const UEPositioningGANSSEarthOrientPara::Info UEPositioningGANSSEarthOrientPara::theInfo = {
	UEPositioningGANSSEarthOrientPara::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UEPositioningGANSSIonosphericModel::itemsInfo[1] = {
	&UEPositioningGANSSIonosphericModelAlphazeroionos::theInfo,
};
bool UEPositioningGANSSIonosphericModel::itemsPres[1] = {
	0,
};
const UEPositioningGANSSIonosphericModel::Info UEPositioningGANSSIonosphericModel::theInfo = {
	UEPositioningGANSSIonosphericModel::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UTRANGANSSReferenceTimeUeGANSSTimingOfCellFrames::itemsInfo[1] = {
	&UTRANGANSSReferenceTimeUeGANSSTimingOfCellFramesMsPart::theInfo,
};
bool UTRANGANSSReferenceTimeUeGANSSTimingOfCellFrames::itemsPres[1] = {
	1,
};
const UTRANGANSSReferenceTimeUeGANSSTimingOfCellFrames::Info UTRANGANSSReferenceTimeUeGANSSTimingOfCellFrames::theInfo = {
	UTRANGANSSReferenceTimeUeGANSSTimingOfCellFrames::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UTRANGANSSReferenceTime::itemsInfo[1] = {
	&UTRANGANSSReferenceTimeUeGANSSTimingOfCellFrames::theInfo,
};
bool UTRANGANSSReferenceTime::itemsPres[1] = {
	1,
};
const UTRANGANSSReferenceTime::Info UTRANGANSSReferenceTime::theInfo = {
	UTRANGANSSReferenceTime::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UEPositioningGANSSMeasuredResultsReferenceTime::choicesInfo[1] = {
	&UTRANGANSSReferenceTime::theInfo,
};
const UEPositioningGANSSMeasuredResultsReferenceTime::Info UEPositioningGANSSMeasuredResultsReferenceTime::theInfo = {
	UEPositioningGANSSMeasuredResultsReferenceTime::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *UEPositioningGANSSMeasuredResults::itemsInfo[1] = {
	&UEPositioningGANSSMeasuredResultsReferenceTime::theInfo,
};
bool UEPositioningGANSSMeasuredResults::itemsPres[1] = {
	1,
};
const UEPositioningGANSSMeasuredResults::Info UEPositioningGANSSMeasuredResults::theInfo = {
	UEPositioningGANSSMeasuredResults::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UEPositioningGANSSNavigationModel::itemsInfo[1] = {
	&UEPositioningGANSSNavigationModelnon_broadcastIndication::theInfo,
};
bool UEPositioningGANSSNavigationModel::itemsPres[1] = {
	1,
};
const UEPositioningGANSSNavigationModel::Info UEPositioningGANSSNavigationModel::theInfo = {
	UEPositioningGANSSNavigationModel::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UEPositioningGANSSOrbitModel::itemsInfo[1] = {
	&KeplerianParameters::theInfo,
};
bool UEPositioningGANSSOrbitModel::itemsPres[1] = {
	0,
};
const UEPositioningGANSSOrbitModel::Info UEPositioningGANSSOrbitModel::theInfo = {
	UEPositioningGANSSOrbitModel::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEPositioningGANSSRealTimeIntegrity::itemsInfo[0] = {
};
bool UEPositioningGANSSRealTimeIntegrity::itemsPres[0] = {
};
const UEPositioningGANSSRealTimeIntegrity::Info UEPositioningGANSSRealTimeIntegrity::theInfo = {
	UEPositioningGANSSRealTimeIntegrity::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *UEPositioningGANSSUTCModel::itemsInfo[1] = {
	&UEPositioningGANSSUTCModelAoneutc::theInfo,
};
bool UEPositioningGANSSUTCModel::itemsPres[1] = {
	1,
};
const UEPositioningGANSSUTCModel::Info UEPositioningGANSSUTCModel::theInfo = {
	UEPositioningGANSSUTCModel::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UEPositioningGPSAcquisitionAssistance::itemsInfo[1] = {
	&GPSTOW1msec::theInfo,
};
bool UEPositioningGPSAcquisitionAssistance::itemsPres[1] = {
	1,
};
const UEPositioningGPSAcquisitionAssistance::Info UEPositioningGPSAcquisitionAssistance::theInfo = {
	UEPositioningGPSAcquisitionAssistance::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UEPositioningGPSAcquisitionAssistancev770ext::itemsInfo[1] = {
	&UEPositioningGPSReferenceTimeUncertainty::theInfo,
};
bool UEPositioningGPSAcquisitionAssistancev770ext::itemsPres[1] = {
	0,
};
const UEPositioningGPSAcquisitionAssistancev770ext::Info UEPositioningGPSAcquisitionAssistancev770ext::theInfo = {
	UEPositioningGPSAcquisitionAssistancev770ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEPositioningGPSAcquisitionAssistancer7::itemsInfo[1] = {
	&GPSTOW1msec::theInfo,
};
bool UEPositioningGPSAcquisitionAssistancer7::itemsPres[1] = {
	1,
};
const UEPositioningGPSAcquisitionAssistancer7::Info UEPositioningGPSAcquisitionAssistancer7::theInfo = {
	UEPositioningGPSAcquisitionAssistancer7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UEPositioningGPSAdditionalAssistanceDataRequest::itemsInfo[1] = {
	&UEPositioningGPSAdditionalAssistanceDataRequestAlmanacRequest::theInfo,
};
bool UEPositioningGPSAdditionalAssistanceDataRequest::itemsPres[1] = {
	0,
};
const UEPositioningGPSAdditionalAssistanceDataRequest::Info UEPositioningGPSAdditionalAssistanceDataRequest::theInfo = {
	UEPositioningGPSAdditionalAssistanceDataRequest::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEPositioningGPSAlmanac::itemsInfo[1] = {
	&UEPositioningGPSAlmanacWna::theInfo,
};
bool UEPositioningGPSAlmanac::itemsPres[1] = {
	0,
};
const UEPositioningGPSAlmanac::Info UEPositioningGPSAlmanac::theInfo = {
	UEPositioningGPSAlmanac::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEPositioningGPSReferenceTime::itemsInfo[1] = {
	&UEPositioningGPSReferenceTimeGpsWeek::theInfo,
};
bool UEPositioningGPSReferenceTime::itemsPres[1] = {
	0,
};
const UEPositioningGPSReferenceTime::Info UEPositioningGPSReferenceTime::theInfo = {
	UEPositioningGPSReferenceTime::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEPositioningGPSAssistanceData::itemsInfo[1] = {
	&UEPositioningGPSReferenceTime::theInfo,
};
bool UEPositioningGPSAssistanceData::itemsPres[1] = {
	0,
};
const UEPositioningGPSAssistanceData::Info UEPositioningGPSAssistanceData::theInfo = {
	UEPositioningGPSAssistanceData::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEPositioningGPSReferenceTimev770ext::itemsInfo[1] = {
	&UEPositioningGPSReferenceTimeUncertainty::theInfo,
};
bool UEPositioningGPSReferenceTimev770ext::itemsPres[1] = {
	0,
};
const UEPositioningGPSReferenceTimev770ext::Info UEPositioningGPSReferenceTimev770ext::theInfo = {
	UEPositioningGPSReferenceTimev770ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEPositioningGPSAssistanceDatav770ext::itemsInfo[1] = {
	&UEPositioningGPSReferenceTimev770ext::theInfo,
};
bool UEPositioningGPSAssistanceDatav770ext::itemsPres[1] = {
	0,
};
const UEPositioningGPSAssistanceDatav770ext::Info UEPositioningGPSAssistanceDatav770ext::theInfo = {
	UEPositioningGPSAssistanceDatav770ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEPositioningGPSReferenceTimer7::itemsInfo[1] = {
	&UEPositioningGPSReferenceTimer7GpsWeek::theInfo,
};
bool UEPositioningGPSReferenceTimer7::itemsPres[1] = {
	0,
};
const UEPositioningGPSReferenceTimer7::Info UEPositioningGPSReferenceTimer7::theInfo = {
	UEPositioningGPSReferenceTimer7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEPositioningGPSAssistanceDatar7::itemsInfo[1] = {
	&UEPositioningGPSReferenceTimer7::theInfo,
};
bool UEPositioningGPSAssistanceDatar7::itemsPres[1] = {
	0,
};
const UEPositioningGPSAssistanceDatar7::Info UEPositioningGPSAssistanceDatar7::theInfo = {
	UEPositioningGPSAssistanceDatar7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEPositioningGPSAssistanceDatar9::itemsInfo[1] = {
	&UEPositioningGPSReferenceTimer7::theInfo,
};
bool UEPositioningGPSAssistanceDatar9::itemsPres[1] = {
	0,
};
const UEPositioningGPSAssistanceDatar9::Info UEPositioningGPSAssistanceDatar9::theInfo = {
	UEPositioningGPSAssistanceDatar9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEPositioningGPSDGPSCorrectionsv920ext::itemsInfo[1] = {
	&DGPSCorrectionSatInfoListv920ext::theInfo,
};
bool UEPositioningGPSDGPSCorrectionsv920ext::itemsPres[1] = {
	1,
};
const UEPositioningGPSDGPSCorrectionsv920ext::Info UEPositioningGPSDGPSCorrectionsv920ext::theInfo = {
	UEPositioningGPSDGPSCorrectionsv920ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UEPositioningGPSAssistanceDatav920ext::itemsInfo[1] = {
	&UEPositioningGPSDGPSCorrectionsv920ext::theInfo,
};
bool UEPositioningGPSAssistanceDatav920ext::itemsPres[1] = {
	0,
};
const UEPositioningGPSAssistanceDatav920ext::Info UEPositioningGPSAssistanceDatav920ext::theInfo = {
	UEPositioningGPSAssistanceDatav920ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEPositioningGPSDGPSCorrections::itemsInfo[1] = {
	&GPSTOW1sec::theInfo,
};
bool UEPositioningGPSDGPSCorrections::itemsPres[1] = {
	1,
};
const UEPositioningGPSDGPSCorrections::Info UEPositioningGPSDGPSCorrections::theInfo = {
	UEPositioningGPSDGPSCorrections::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UEPositioningGPSDGPSCorrectionsr9::itemsInfo[1] = {
	&GPSTOW1sec::theInfo,
};
bool UEPositioningGPSDGPSCorrectionsr9::itemsPres[1] = {
	1,
};
const UEPositioningGPSDGPSCorrectionsr9::Info UEPositioningGPSDGPSCorrectionsr9::theInfo = {
	UEPositioningGPSDGPSCorrectionsr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UEPositioningGPSIonosphericModel::itemsInfo[1] = {
	&UEPositioningGPSIonosphericModelAlpha0::theInfo,
};
bool UEPositioningGPSIonosphericModel::itemsPres[1] = {
	1,
};
const UEPositioningGPSIonosphericModel::Info UEPositioningGPSIonosphericModel::theInfo = {
	UEPositioningGPSIonosphericModel::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UTRANGPSReferenceTimeResultUeGPSTimingOfCell::itemsInfo[1] = {
	&UTRANGPSReferenceTimeResultUeGPSTimingOfCellMspart::theInfo,
};
bool UTRANGPSReferenceTimeResultUeGPSTimingOfCell::itemsPres[1] = {
	1,
};
const UTRANGPSReferenceTimeResultUeGPSTimingOfCell::Info UTRANGPSReferenceTimeResultUeGPSTimingOfCell::theInfo = {
	UTRANGPSReferenceTimeResultUeGPSTimingOfCell::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UTRANGPSReferenceTimeResult::itemsInfo[1] = {
	&UTRANGPSReferenceTimeResultUeGPSTimingOfCell::theInfo,
};
bool UTRANGPSReferenceTimeResult::itemsPres[1] = {
	1,
};
const UTRANGPSReferenceTimeResult::Info UTRANGPSReferenceTimeResult::theInfo = {
	UTRANGPSReferenceTimeResult::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UEPositioningGPSMeasurementResultsReferenceTime::choicesInfo[1] = {
	&UTRANGPSReferenceTimeResult::theInfo,
};
const UEPositioningGPSMeasurementResultsReferenceTime::Info UEPositioningGPSMeasurementResultsReferenceTime::theInfo = {
	UEPositioningGPSMeasurementResultsReferenceTime::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *UEPositioningGPSMeasurementResults::itemsInfo[1] = {
	&UEPositioningGPSMeasurementResultsReferenceTime::theInfo,
};
bool UEPositioningGPSMeasurementResults::itemsPres[1] = {
	1,
};
const UEPositioningGPSMeasurementResults::Info UEPositioningGPSMeasurementResults::theInfo = {
	UEPositioningGPSMeasurementResults::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UEPositioningGPSMeasurementResultsv770ext::itemsInfo[1] = {
	&UEPositioningGPSReferenceTimeUncertainty::theInfo,
};
bool UEPositioningGPSMeasurementResultsv770ext::itemsPres[1] = {
	0,
};
const UEPositioningGPSMeasurementResultsv770ext::Info UEPositioningGPSMeasurementResultsv770ext::theInfo = {
	UEPositioningGPSMeasurementResultsv770ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEPositioningGPSNavigationModel::itemsInfo[1] = {
	&NavigationModelSatInfoList::theInfo,
};
bool UEPositioningGPSNavigationModel::itemsPres[1] = {
	1,
};
const UEPositioningGPSNavigationModel::Info UEPositioningGPSNavigationModel::theInfo = {
	UEPositioningGPSNavigationModel::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UEPositioningGPSNavModelAddDataReq::itemsInfo[1] = {
	&UEPositioningGPSNavModelAddDataReqGpsWeek::theInfo,
};
bool UEPositioningGPSNavModelAddDataReq::itemsPres[1] = {
	1,
};
const UEPositioningGPSNavModelAddDataReq::Info UEPositioningGPSNavModelAddDataReq::theInfo = {
	UEPositioningGPSNavModelAddDataReq::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UEPositioningGPSReferenceCellInfoModeSpecificInfo::choicesInfo[1] = {
	&UEPositioningGPSReferenceCellInfoModeSpecificInfoFdd::theInfo,
};
const UEPositioningGPSReferenceCellInfoModeSpecificInfo::Info UEPositioningGPSReferenceCellInfoModeSpecificInfo::theInfo = {
	UEPositioningGPSReferenceCellInfoModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *UEPositioningGPSReferenceCellInfo::itemsInfo[1] = {
	&UEPositioningGPSReferenceCellInfoModeSpecificInfo::theInfo,
};
bool UEPositioningGPSReferenceCellInfo::itemsPres[1] = {
	1,
};
const UEPositioningGPSReferenceCellInfo::Info UEPositioningGPSReferenceCellInfo::theInfo = {
	UEPositioningGPSReferenceCellInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UEPositioningGPSUTCModel::itemsInfo[1] = {
	&UEPositioningGPSUTCModelA1::theInfo,
};
bool UEPositioningGPSUTCModel::itemsPres[1] = {
	1,
};
const UEPositioningGPSUTCModel::Info UEPositioningGPSUTCModel::theInfo = {
	UEPositioningGPSUTCModel::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UEPositioningIPDLParameters::itemsInfo[1] = {
	&IPSpacing::theInfo,
};
bool UEPositioningIPDLParameters::itemsPres[1] = {
	0,
};
const UEPositioningIPDLParameters::Info UEPositioningIPDLParameters::theInfo = {
	UEPositioningIPDLParameters::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEPositioningIPDLParametersr4ModeSpecificInfoFdd::itemsInfo[1] = {
	&IPSpacing::theInfo,
};
bool UEPositioningIPDLParametersr4ModeSpecificInfoFdd::itemsPres[1] = {
	0,
};
const UEPositioningIPDLParametersr4ModeSpecificInfoFdd::Info UEPositioningIPDLParametersr4ModeSpecificInfoFdd::theInfo = {
	UEPositioningIPDLParametersr4ModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEPositioningIPDLParametersr4ModeSpecificInfo::choicesInfo[1] = {
	&UEPositioningIPDLParametersr4ModeSpecificInfoFdd::theInfo,
};
const UEPositioningIPDLParametersr4ModeSpecificInfo::Info UEPositioningIPDLParametersr4ModeSpecificInfo::theInfo = {
	UEPositioningIPDLParametersr4ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *UEPositioningIPDLParametersr4::itemsInfo[1] = {
	&UEPositioningIPDLParametersr4ModeSpecificInfo::theInfo,
};
bool UEPositioningIPDLParametersr4::itemsPres[1] = {
	0,
};
const UEPositioningIPDLParametersr4::Info UEPositioningIPDLParametersr4::theInfo = {
	UEPositioningIPDLParametersr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEPositioningIPDLParametersTDDr4ext::itemsInfo[1] = {
	&IPSpacingTDD::theInfo,
};
bool UEPositioningIPDLParametersTDDr4ext::itemsPres[1] = {
	1,
};
const UEPositioningIPDLParametersTDDr4ext::Info UEPositioningIPDLParametersTDDr4ext::theInfo = {
	UEPositioningIPDLParametersTDDr4ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UEPositioningOTDOAMeasurement::itemsInfo[1] = {
	&UEPositioningOTDOAMeasurementSfn::theInfo,
};
bool UEPositioningOTDOAMeasurement::itemsPres[1] = {
	0,
};
const UEPositioningOTDOAMeasurement::Info UEPositioningOTDOAMeasurement::theInfo = {
	UEPositioningOTDOAMeasurement::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEPositioningMeasuredResults::itemsInfo[1] = {
	&UEPositioningOTDOAMeasurement::theInfo,
};
bool UEPositioningMeasuredResults::itemsPres[1] = {
	0,
};
const UEPositioningMeasuredResults::Info UEPositioningMeasuredResults::theInfo = {
	UEPositioningMeasuredResults::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEPositioningMeasuredResultsv770ext::itemsInfo[1] = {
	&UEPositioningPositionEstimateInfov770ext::theInfo,
};
bool UEPositioningMeasuredResultsv770ext::itemsPres[1] = {
	0,
};
const UEPositioningMeasuredResultsv770ext::Info UEPositioningMeasuredResultsv770ext::theInfo = {
	UEPositioningMeasuredResultsv770ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEPositioningReportingQuantity::itemsInfo[1] = {
	&UEPositioningMethodType::theInfo,
};
bool UEPositioningReportingQuantity::itemsPres[1] = {
	0,
};
const UEPositioningReportingQuantity::Info UEPositioningReportingQuantity::theInfo = {
	UEPositioningReportingQuantity::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEPositioningMeasurement::itemsInfo[1] = {
	&UEPositioningReportingQuantity::theInfo,
};
bool UEPositioningMeasurement::itemsPres[1] = {
	0,
};
const UEPositioningMeasurement::Info UEPositioningMeasurement::theInfo = {
	UEPositioningMeasurement::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEPositioningReportingQuantityv390ext::itemsInfo[1] = {
	&UEPositioningAccuracy::theInfo,
};
bool UEPositioningReportingQuantityv390ext::itemsPres[1] = {
	1,
};
const UEPositioningReportingQuantityv390ext::Info UEPositioningReportingQuantityv390ext::theInfo = {
	UEPositioningReportingQuantityv390ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UEPositioningMeasurementv390ext::itemsInfo[1] = {
	&UEPositioningReportingQuantityv390ext::theInfo,
};
bool UEPositioningMeasurementv390ext::itemsPres[1] = {
	0,
};
const UEPositioningMeasurementv390ext::Info UEPositioningMeasurementv390ext::theInfo = {
	UEPositioningMeasurementv390ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEPositioningReportingQuantityr4::itemsInfo[1] = {
	&UEPositioningMethodType::theInfo,
};
bool UEPositioningReportingQuantityr4::itemsPres[1] = {
	0,
};
const UEPositioningReportingQuantityr4::Info UEPositioningReportingQuantityr4::theInfo = {
	UEPositioningReportingQuantityr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEPositioningMeasurementr4::itemsInfo[1] = {
	&UEPositioningReportingQuantityr4::theInfo,
};
bool UEPositioningMeasurementr4::itemsPres[1] = {
	0,
};
const UEPositioningMeasurementr4::Info UEPositioningMeasurementr4::theInfo = {
	UEPositioningMeasurementr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEPositioningReportingQuantityr7::itemsInfo[1] = {
	&UEPositioningMethodType::theInfo,
};
bool UEPositioningReportingQuantityr7::itemsPres[1] = {
	0,
};
const UEPositioningReportingQuantityr7::Info UEPositioningReportingQuantityr7::theInfo = {
	UEPositioningReportingQuantityr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEPositioningMeasurementr7::itemsInfo[1] = {
	&UEPositioningReportingQuantityr7::theInfo,
};
bool UEPositioningMeasurementr7::itemsPres[1] = {
	0,
};
const UEPositioningMeasurementr7::Info UEPositioningMeasurementr7::theInfo = {
	UEPositioningMeasurementr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEPositioningReportingQuantityr8::itemsInfo[1] = {
	&UEPositioningMethodType::theInfo,
};
bool UEPositioningReportingQuantityr8::itemsPres[1] = {
	0,
};
const UEPositioningReportingQuantityr8::Info UEPositioningReportingQuantityr8::theInfo = {
	UEPositioningReportingQuantityr8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEPositioningMeasurementr8::itemsInfo[1] = {
	&UEPositioningReportingQuantityr8::theInfo,
};
bool UEPositioningMeasurementr8::itemsPres[1] = {
	0,
};
const UEPositioningMeasurementr8::Info UEPositioningMeasurementr8::theInfo = {
	UEPositioningMeasurementr8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEPositioningMeasurementr9::itemsInfo[1] = {
	&UEPositioningReportingQuantityr8::theInfo,
};
bool UEPositioningMeasurementr9::itemsPres[1] = {
	0,
};
const UEPositioningMeasurementr9::Info UEPositioningMeasurementr9::theInfo = {
	UEPositioningMeasurementr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEPositioningMeasurementv920ext::itemsInfo[1] = {
	&UEPositioningGPSAssistanceDatav920ext::theInfo,
};
bool UEPositioningMeasurementv920ext::itemsPres[1] = {
	0,
};
const UEPositioningMeasurementv920ext::Info UEPositioningMeasurementv920ext::theInfo = {
	UEPositioningMeasurementv920ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEPositioningPositionEstimateInfoReferenceTime::choicesInfo[1] = {
	&UTRANGPSReferenceTimeResult::theInfo,
};
const UEPositioningPositionEstimateInfoReferenceTime::Info UEPositioningPositionEstimateInfoReferenceTime::theInfo = {
	UEPositioningPositionEstimateInfoReferenceTime::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *UEPositioningPositionEstimateInfo::itemsInfo[1] = {
	&UEPositioningPositionEstimateInfoReferenceTime::theInfo,
};
bool UEPositioningPositionEstimateInfo::itemsPres[1] = {
	1,
};
const UEPositioningPositionEstimateInfo::Info UEPositioningPositionEstimateInfo::theInfo = {
	UEPositioningPositionEstimateInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UEPositioningMeasurementEventResults::choicesInfo[1] = {
	&UEPositioningPositionEstimateInfo::theInfo,
};
const UEPositioningMeasurementEventResults::Info UEPositioningMeasurementEventResults::theInfo = {
	UEPositioningMeasurementEventResults::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *UEPositioningOTDOAReferenceCellInfo::itemsInfo[1] = {
	&UEPositioningOTDOAReferenceCellInfoSfn::theInfo,
};
bool UEPositioningOTDOAReferenceCellInfo::itemsPres[1] = {
	0,
};
const UEPositioningOTDOAReferenceCellInfo::Info UEPositioningOTDOAReferenceCellInfo::theInfo = {
	UEPositioningOTDOAReferenceCellInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEPositioningOTDOAAssistanceData::itemsInfo[1] = {
	&UEPositioningOTDOAReferenceCellInfo::theInfo,
};
bool UEPositioningOTDOAAssistanceData::itemsPres[1] = {
	0,
};
const UEPositioningOTDOAAssistanceData::Info UEPositioningOTDOAAssistanceData::theInfo = {
	UEPositioningOTDOAAssistanceData::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEPositioningOTDOAReferenceCellInfor4::itemsInfo[1] = {
	&UEPositioningOTDOAReferenceCellInfor4Sfn::theInfo,
};
bool UEPositioningOTDOAReferenceCellInfor4::itemsPres[1] = {
	0,
};
const UEPositioningOTDOAReferenceCellInfor4::Info UEPositioningOTDOAReferenceCellInfor4::theInfo = {
	UEPositioningOTDOAReferenceCellInfor4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEPositioningOTDOAAssistanceDatar4::itemsInfo[1] = {
	&UEPositioningOTDOAReferenceCellInfor4::theInfo,
};
bool UEPositioningOTDOAAssistanceDatar4::itemsPres[1] = {
	0,
};
const UEPositioningOTDOAAssistanceDatar4::Info UEPositioningOTDOAAssistanceDatar4::theInfo = {
	UEPositioningOTDOAAssistanceDatar4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEPositioningOTDOAAssistanceDatar4ext::itemsInfo[1] = {
	&UEPositioningIPDLParametersTDDr4ext::theInfo,
};
bool UEPositioningOTDOAAssistanceDatar4ext::itemsPres[1] = {
	0,
};
const UEPositioningOTDOAAssistanceDatar4ext::Info UEPositioningOTDOAAssistanceDatar4ext::theInfo = {
	UEPositioningOTDOAAssistanceDatar4ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEPositioningOTDOAReferenceCellInfoUEB::itemsInfo[1] = {
	&UEPositioningOTDOAReferenceCellInfoUEBSfn::theInfo,
};
bool UEPositioningOTDOAReferenceCellInfoUEB::itemsPres[1] = {
	0,
};
const UEPositioningOTDOAReferenceCellInfoUEB::Info UEPositioningOTDOAReferenceCellInfoUEB::theInfo = {
	UEPositioningOTDOAReferenceCellInfoUEB::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEPositioningOTDOAAssistanceDataUEB::itemsInfo[1] = {
	&UEPositioningOTDOAReferenceCellInfoUEB::theInfo,
};
bool UEPositioningOTDOAAssistanceDataUEB::itemsPres[1] = {
	0,
};
const UEPositioningOTDOAAssistanceDataUEB::Info UEPositioningOTDOAAssistanceDataUEB::theInfo = {
	UEPositioningOTDOAAssistanceDataUEB::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEPositioningOTDOAReferenceCellInfoUEBext::itemsInfo[1] = {
	&UEPositioningOTDOAReferenceCellInfoUEBextRoundTripTimeExtension::theInfo,
};
bool UEPositioningOTDOAReferenceCellInfoUEBext::itemsPres[1] = {
	0,
};
const UEPositioningOTDOAReferenceCellInfoUEBext::Info UEPositioningOTDOAReferenceCellInfoUEBext::theInfo = {
	UEPositioningOTDOAReferenceCellInfoUEBext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEPositioningOTDOAAssistanceDataUEBext::itemsInfo[1] = {
	&UEPositioningOTDOAReferenceCellInfoUEBext::theInfo,
};
bool UEPositioningOTDOAAssistanceDataUEBext::itemsPres[1] = {
	0,
};
const UEPositioningOTDOAAssistanceDataUEBext::Info UEPositioningOTDOAAssistanceDataUEBext::theInfo = {
	UEPositioningOTDOAAssistanceDataUEBext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEPositioningOTDOAReferenceCellInfor7::itemsInfo[1] = {
	&UEPositioningOTDOAReferenceCellInfor7Sfn::theInfo,
};
bool UEPositioningOTDOAReferenceCellInfor7::itemsPres[1] = {
	0,
};
const UEPositioningOTDOAReferenceCellInfor7::Info UEPositioningOTDOAReferenceCellInfor7::theInfo = {
	UEPositioningOTDOAReferenceCellInfor7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEPositioningOTDOAAssistanceDatar7::itemsInfo[1] = {
	&UEPositioningOTDOAReferenceCellInfor7::theInfo,
};
bool UEPositioningOTDOAAssistanceDatar7::itemsPres[1] = {
	0,
};
const UEPositioningOTDOAAssistanceDatar7::Info UEPositioningOTDOAAssistanceDatar7::theInfo = {
	UEPositioningOTDOAAssistanceDatar7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEPositioningOTDOAMeasuredResultsTDDext::itemsInfo[1] = {
	&NeighbourListTDDr7::theInfo,
};
bool UEPositioningOTDOAMeasuredResultsTDDext::itemsPres[1] = {
	0,
};
const UEPositioningOTDOAMeasuredResultsTDDext::Info UEPositioningOTDOAMeasuredResultsTDDext::theInfo = {
	UEPositioningOTDOAMeasuredResultsTDDext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEPositioningOTDOANeighbourCellInfoModeSpecificInfo::choicesInfo[1] = {
	&UEPositioningOTDOANeighbourCellInfoModeSpecificInfoFdd::theInfo,
};
const UEPositioningOTDOANeighbourCellInfoModeSpecificInfo::Info UEPositioningOTDOANeighbourCellInfoModeSpecificInfo::theInfo = {
	UEPositioningOTDOANeighbourCellInfoModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *UEPositioningOTDOANeighbourCellInfo::itemsInfo[1] = {
	&UEPositioningOTDOANeighbourCellInfoModeSpecificInfo::theInfo,
};
bool UEPositioningOTDOANeighbourCellInfo::itemsPres[1] = {
	1,
};
const UEPositioningOTDOANeighbourCellInfo::Info UEPositioningOTDOANeighbourCellInfo::theInfo = {
	UEPositioningOTDOANeighbourCellInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UEPositioningOTDOANeighbourCellInfor4ModeSpecificInfo::choicesInfo[1] = {
	&UEPositioningOTDOANeighbourCellInfor4ModeSpecificInfoFdd::theInfo,
};
const UEPositioningOTDOANeighbourCellInfor4ModeSpecificInfo::Info UEPositioningOTDOANeighbourCellInfor4ModeSpecificInfo::theInfo = {
	UEPositioningOTDOANeighbourCellInfor4ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *UEPositioningOTDOANeighbourCellInfor4::itemsInfo[1] = {
	&UEPositioningOTDOANeighbourCellInfor4ModeSpecificInfo::theInfo,
};
bool UEPositioningOTDOANeighbourCellInfor4::itemsPres[1] = {
	1,
};
const UEPositioningOTDOANeighbourCellInfor4::Info UEPositioningOTDOANeighbourCellInfor4::theInfo = {
	UEPositioningOTDOANeighbourCellInfor4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UEPositioningOTDOANeighbourCellInfoUEBModeSpecificInfo::choicesInfo[1] = {
	&UEPositioningOTDOANeighbourCellInfoUEBModeSpecificInfoFdd::theInfo,
};
const UEPositioningOTDOANeighbourCellInfoUEBModeSpecificInfo::Info UEPositioningOTDOANeighbourCellInfoUEBModeSpecificInfo::theInfo = {
	UEPositioningOTDOANeighbourCellInfoUEBModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *UEPositioningOTDOANeighbourCellInfoUEB::itemsInfo[1] = {
	&UEPositioningOTDOANeighbourCellInfoUEBModeSpecificInfo::theInfo,
};
bool UEPositioningOTDOANeighbourCellInfoUEB::itemsPres[1] = {
	0,
};
const UEPositioningOTDOANeighbourCellInfoUEB::Info UEPositioningOTDOANeighbourCellInfoUEB::theInfo = {
	UEPositioningOTDOANeighbourCellInfoUEB::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEPositioningOTDOANeighbourCellInfoUEBext::itemsInfo[1] = {
	&UEPositioningOTDOANeighbourCellInfoUEBextRoundTripTimeExtension::theInfo,
};
bool UEPositioningOTDOANeighbourCellInfoUEBext::itemsPres[1] = {
	0,
};
const UEPositioningOTDOANeighbourCellInfoUEBext::Info UEPositioningOTDOANeighbourCellInfoUEBext::theInfo = {
	UEPositioningOTDOANeighbourCellInfoUEBext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEPositioningOTDOANeighbourCellInfor7ModeSpecificInfo::choicesInfo[1] = {
	&UEPositioningOTDOANeighbourCellInfor7ModeSpecificInfoFdd::theInfo,
};
const UEPositioningOTDOANeighbourCellInfor7ModeSpecificInfo::Info UEPositioningOTDOANeighbourCellInfor7ModeSpecificInfo::theInfo = {
	UEPositioningOTDOANeighbourCellInfor7ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *UEPositioningOTDOANeighbourCellInfor7::itemsInfo[1] = {
	&UEPositioningOTDOANeighbourCellInfor7ModeSpecificInfo::theInfo,
};
bool UEPositioningOTDOANeighbourCellInfor7::itemsPres[1] = {
	1,
};
const UEPositioningOTDOANeighbourCellInfor7::Info UEPositioningOTDOANeighbourCellInfor7::theInfo = {
	UEPositioningOTDOANeighbourCellInfor7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UEPositioningReportCriteria::choicesInfo[1] = {
	&UEPositioningEventParamList::theInfo,
};
const UEPositioningReportCriteria::Info UEPositioningReportCriteria::theInfo = {
	UEPositioningReportCriteria::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *UEPositioningReportCriteriar7::choicesInfo[1] = {
	&UEPositioningEventParamListr7::theInfo,
};
const UEPositioningReportCriteriar7::Info UEPositioningReportCriteriar7::theInfo = {
	UEPositioningReportCriteriar7::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *UTCmodelSet2::itemsInfo[1] = {
	&UTCmodelSet2NA::theInfo,
};
bool UTCmodelSet2::itemsPres[1] = {
	0,
};
const UTCmodelSet2::Info UTCmodelSet2::theInfo = {
	UTCmodelSet2::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UTCmodelSet3::itemsInfo[1] = {
	&UTCmodelSet3UtcA1wnt::theInfo,
};
bool UTCmodelSet3::itemsPres[1] = {
	1,
};
const UTCmodelSet3::Info UTCmodelSet3::theInfo = {
	UTCmodelSet3::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UTRANFDDFrequency::itemsInfo[1] = {
	&UARFCN::theInfo,
};
bool UTRANFDDFrequency::itemsPres[1] = {
	0,
};
const UTRANFDDFrequency::Info UTRANFDDFrequency::theInfo = {
	UTRANFDDFrequency::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UTRANTDDFrequency::itemsInfo[1] = {
	&UARFCN::theInfo,
};
bool UTRANTDDFrequency::itemsPres[1] = {
	0,
};
const UTRANTDDFrequency::Info UTRANTDDFrequency::theInfo = {
	UTRANTDDFrequency::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UTRANGPSReferenceTimeUtranGPSTimingOfCell::itemsInfo[1] = {
	&UTRANGPSReferenceTimeUtranGPSTimingOfCellMspart::theInfo,
};
bool UTRANGPSReferenceTimeUtranGPSTimingOfCell::itemsPres[1] = {
	1,
};
const UTRANGPSReferenceTimeUtranGPSTimingOfCell::Info UTRANGPSReferenceTimeUtranGPSTimingOfCell::theInfo = {
	UTRANGPSReferenceTimeUtranGPSTimingOfCell::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UTRANGPSReferenceTime::itemsInfo[1] = {
	&UTRANGPSReferenceTimeUtranGPSTimingOfCell::theInfo,
};
bool UTRANGPSReferenceTime::itemsPres[1] = {
	1,
};
const UTRANGPSReferenceTime::Info UTRANGPSReferenceTime::theInfo = {
	UTRANGPSReferenceTime::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UTRAPriorityInfoListUtraServingCell::itemsInfo[1] = {
	&UTRAPriorityInfoListUtraServingCellPriority::theInfo,
};
bool UTRAPriorityInfoListUtraServingCell::itemsPres[1] = {
	1,
};
const UTRAPriorityInfoListUtraServingCell::Info UTRAPriorityInfoListUtraServingCell::theInfo = {
	UTRAPriorityInfoListUtraServingCell::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UTRAPriorityInfoList::itemsInfo[1] = {
	&UTRAPriorityInfoListUtraServingCell::theInfo,
};
bool UTRAPriorityInfoList::itemsPres[1] = {
	0,
};
const UTRAPriorityInfoList::Info UTRAPriorityInfoList::theInfo = {
	UTRAPriorityInfoList::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UTRAPriorityInfoListv920ext::itemsInfo[1] = {
	&UTRAPriorityInfoListv920extThreshServingLow2::theInfo,
};
bool UTRAPriorityInfoListv920ext::itemsPres[1] = {
	0,
};
const UTRAPriorityInfoListv920ext::Info UTRAPriorityInfoListv920ext::theInfo = {
	UTRAPriorityInfoListv920ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *VelocityEstimate::choicesInfo[1] = {
	&HorizontalVelocity::theInfo,
};
const VelocityEstimate::Info VelocityEstimate::theInfo = {
	VelocityEstimate::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *BCCHModificationInfo::itemsInfo[1] = {
	&MIBValueTag::theInfo,
};
bool BCCHModificationInfo::itemsPres[1] = {
	0,
};
const BCCHModificationInfo::Info BCCHModificationInfo::theInfo = {
	BCCHModificationInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *CBSDRXLevel1Information::itemsInfo[1] = {
	&CBSDRXLevel1InformationCtchAllocationPeriod::theInfo,
};
bool CBSDRXLevel1Information::itemsPres[1] = {
	1,
};
const CBSDRXLevel1Information::Info CBSDRXLevel1Information::theInfo = {
	CBSDRXLevel1Information::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *CDMA2000Message::itemsInfo[1] = {
	&CDMA2000MessageMsgType::theInfo,
};
bool CDMA2000Message::itemsPres[1] = {
	1,
};
const CDMA2000Message::Info CDMA2000Message::theInfo = {
	CDMA2000Message::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *FrequencyInfoCDMA2000::itemsInfo[1] = {
	&FrequencyInfoCDMA2000BandClass::theInfo,
};
bool FrequencyInfoCDMA2000::itemsPres[1] = {
	1,
};
const FrequencyInfoCDMA2000::Info FrequencyInfoCDMA2000::theInfo = {
	FrequencyInfoCDMA2000::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DataTransmFrequency::itemsInfo[1] = {
	&DataTransmFrequencydataTransmFreqGranularity::theInfo,
};
bool DataTransmFrequency::itemsPres[1] = {
	1,
};
const DataTransmFrequency::Info DataTransmFrequency::theInfo = {
	DataTransmFrequency::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DataVolumeHistory::itemsInfo[1] = {
	&DataVolumeHistoryDataVolumeMontoringWindow::theInfo,
};
bool DataVolumeHistory::itemsPres[1] = {
	0,
};
const DataVolumeHistory::Info DataVolumeHistory::theInfo = {
	DataVolumeHistory::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DataVolumePerRB::itemsInfo[1] = {
	&RBIdentity::theInfo,
};
bool DataVolumePerRB::itemsPres[1] = {
	1,
};
const DataVolumePerRB::Info DataVolumePerRB::theInfo = {
	DataVolumePerRB::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DeferredMeasurementControlReadingSupportModeSpecificInfo::choicesInfo[1] = {
	&DeferredMeasurementControlReadingSupportModeSpecificInfoFdd::theInfo,
};
const DeferredMeasurementControlReadingSupportModeSpecificInfo::Info DeferredMeasurementControlReadingSupportModeSpecificInfo::theInfo = {
	DeferredMeasurementControlReadingSupportModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *DeferredMeasurementControlReadingSupport::itemsInfo[1] = {
	&DeferredMeasurementControlReadingSupportModeSpecificInfo::theInfo,
};
bool DeferredMeasurementControlReadingSupport::itemsPres[1] = {
	0,
};
const DeferredMeasurementControlReadingSupport::Info DeferredMeasurementControlReadingSupport::theInfo = {
	DeferredMeasurementControlReadingSupport::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ETWSInformation::itemsInfo[1] = {
	&ETWSInformationWarningType::theInfo,
};
bool ETWSInformation::itemsPres[1] = {
	1,
};
const ETWSInformation::Info ETWSInformation::theInfo = {
	ETWSInformation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *EUTRABlacklistedCell::itemsInfo[1] = {
	&EUTRAPhysicalCellIdentity::theInfo,
};
bool EUTRABlacklistedCell::itemsPres[1] = {
	1,
};
const EUTRABlacklistedCell::Info EUTRABlacklistedCell::theInfo = {
	EUTRABlacklistedCell::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *EUTRARadioAccessCapability::itemsInfo[1] = {
	&OctetStringBase::theInfo,
};
bool EUTRARadioAccessCapability::itemsPres[1] = {
	1,
};
const EUTRARadioAccessCapability::Info EUTRARadioAccessCapability::theInfo = {
	EUTRARadioAccessCapability::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *EUTRATargetFreqInfo::itemsInfo[1] = {
	&EARFCN::theInfo,
};
bool EUTRATargetFreqInfo::itemsPres[1] = {
	0,
};
const EUTRATargetFreqInfo::Info EUTRATargetFreqInfo::theInfo = {
	EUTRATargetFreqInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SIBTypeExtGANSS::choicesInfo[1] = {
	&SIBTypeExtGANSSSystemInfoType151bis::theInfo,
};
const SIBTypeExtGANSS::Info SIBTypeExtGANSS::theInfo = {
	SIBTypeExtGANSS::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *ExtGANSSSchedulingInfo::itemsInfo[1] = {
	&SIBTypeExtGANSS::theInfo,
};
bool ExtGANSSSchedulingInfo::itemsPres[1] = {
	1,
};
const ExtGANSSSchedulingInfo::Info ExtGANSSSchedulingInfo::theInfo = {
	ExtGANSSSchedulingInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ExtGANSSSIBTypeInfoSchedulingInfo::itemsInfo[1] = {
	&ExtGANSSSIBTypeInfoSchedulingInfoGanssID::theInfo,
};
bool ExtGANSSSIBTypeInfoSchedulingInfo::itemsPres[1] = {
	1,
};
const ExtGANSSSIBTypeInfoSchedulingInfo::Info ExtGANSSSIBTypeInfoSchedulingInfo::theInfo = {
	ExtGANSSSIBTypeInfoSchedulingInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *SIBTypeExt::choicesInfo[1] = {
	&SIBTypeExtSystemInfoType11bis::theInfo,
};
const SIBTypeExt::Info SIBTypeExt::theInfo = {
	SIBTypeExt::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *ExtSIBTypeInfoSchedulingInfo::itemsInfo[1] = {
	&SIBTypeExt::theInfo,
};
bool ExtSIBTypeInfoSchedulingInfo::itemsPres[1] = {
	1,
};
const ExtSIBTypeInfoSchedulingInfo::Info ExtSIBTypeInfoSchedulingInfo::theInfo = {
	ExtSIBTypeInfoSchedulingInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *SIBTypeExt2::choicesInfo[1] = {
	&SIBTypeExt2SystemInfoType19::theInfo,
};
const SIBTypeExt2::Info SIBTypeExt2::theInfo = {
	SIBTypeExt2::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *ExtSIBTypeInfoSchedulingInfo2::itemsInfo[1] = {
	&SIBTypeExt2::theInfo,
};
bool ExtSIBTypeInfoSchedulingInfo2::itemsPres[1] = {
	1,
};
const ExtSIBTypeInfoSchedulingInfo2::Info ExtSIBTypeInfoSchedulingInfo2::theInfo = {
	ExtSIBTypeInfoSchedulingInfo2::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *GSMBARange::itemsInfo[1] = {
	&UARFCN::theInfo,
};
bool GSMBARange::itemsPres[1] = {
	1,
};
const GSMBARange::Info GSMBARange::theInfo = {
	GSMBARange::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *GSMTargetCellInfo::itemsInfo[1] = {
	&BCCHARFCN::theInfo,
};
bool GSMTargetCellInfo::itemsPres[1] = {
	0,
};
const GSMTargetCellInfo::Info GSMTargetCellInfo::theInfo = {
	GSMTargetCellInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *IdentificationOfReceivedMessage::itemsInfo[1] = {
	&RRCTransactionIdentifier::theInfo,
};
bool IdentificationOfReceivedMessage::itemsPres[1] = {
	1,
};
const IdentificationOfReceivedMessage::Info IdentificationOfReceivedMessage::theInfo = {
	IdentificationOfReceivedMessage::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *InterRATChangeFailureCause::choicesInfo[1] = {
	&InterRATChangeFailureCauseConfigurationUnacceptable::theInfo,
};
const InterRATChangeFailureCause::Info InterRATChangeFailureCause::theInfo = {
	InterRATChangeFailureCause::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *InterRATUERadioAccessCapabilityGsm::itemsInfo[1] = {
	&GSMClassmark2::theInfo,
};
bool InterRATUERadioAccessCapabilityGsm::itemsPres[1] = {
	1,
};
const InterRATUERadioAccessCapabilityGsm::Info InterRATUERadioAccessCapabilityGsm::theInfo = {
	InterRATUERadioAccessCapabilityGsm::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *InterRATUERadioAccessCapability::choicesInfo[1] = {
	&InterRATUERadioAccessCapabilityGsm::theInfo,
};
const InterRATUERadioAccessCapability::Info InterRATUERadioAccessCapability::theInfo = {
	InterRATUERadioAccessCapability::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *InterRATUERadioAccessCapabilityv590ext::itemsInfo[1] = {
	&GERANIuRadioAccessCapability::theInfo,
};
bool InterRATUERadioAccessCapabilityv590ext::itemsPres[1] = {
	1,
};
const InterRATUERadioAccessCapabilityv590ext::Info InterRATUERadioAccessCapabilityv590ext::theInfo = {
	InterRATUERadioAccessCapabilityv590ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *InterRATUERadioAccessCapabilityv690ext::itemsInfo[1] = {
	&InterRATUERadioAccessCapabilityv690extsupportOfInter_RAT_PS_Handover::theInfo,
};
bool InterRATUERadioAccessCapabilityv690ext::itemsPres[1] = {
	1,
};
const InterRATUERadioAccessCapabilityv690ext::Info InterRATUERadioAccessCapabilityv690ext::theInfo = {
	InterRATUERadioAccessCapabilityv690ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *InterRATUERadioAccessCapabilityv860ext::itemsInfo[1] = {
	&EUTRARadioAccessCapability::theInfo,
};
bool InterRATUERadioAccessCapabilityv860ext::itemsPres[1] = {
	0,
};
const InterRATUERadioAccessCapabilityv860ext::Info InterRATUERadioAccessCapabilityv860ext::theInfo = {
	InterRATUERadioAccessCapabilityv860ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *InterRATUESecurityCapabilityGsm::itemsInfo[1] = {
	&GsmSecurityCapability::theInfo,
};
bool InterRATUESecurityCapabilityGsm::itemsPres[1] = {
	1,
};
const InterRATUESecurityCapabilityGsm::Info InterRATUESecurityCapabilityGsm::theInfo = {
	InterRATUESecurityCapabilityGsm::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *InterRATUESecurityCapability::choicesInfo[1] = {
	&InterRATUESecurityCapabilityGsm::theInfo,
};
const InterRATUESecurityCapability::Info InterRATUESecurityCapability::theInfo = {
	InterRATUESecurityCapability::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *InterRATHOFailureCause::choicesInfo[1] = {
	&InterRATHOFailureCauseConfigurationUnacceptable::theInfo,
};
const InterRATHOFailureCause::Info InterRATHOFailureCause::theInfo = {
	InterRATHOFailureCause::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *MasterInformationBlock::itemsInfo[1] = {
	&MIBValueTag::theInfo,
};
bool MasterInformationBlock::itemsPres[1] = {
	0,
};
const MasterInformationBlock::Info MasterInformationBlock::theInfo = {
	MasterInformationBlock::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *MasterInformationBlockv690ext::itemsInfo[1] = {
	&MultiplePLMNListr6::theInfo,
};
bool MasterInformationBlockv690ext::itemsPres[1] = {
	0,
};
const MasterInformationBlockv690ext::Info MasterInformationBlockv690ext::theInfo = {
	MasterInformationBlockv690ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *MasterInformationBlockv6b0extIEs::itemsInfo[1] = {
	&ExtSIBTypeInfoSchedulingInfoList::theInfo,
};
bool MasterInformationBlockv6b0extIEs::itemsPres[1] = {
	0,
};
const MasterInformationBlockv6b0extIEs::Info MasterInformationBlockv6b0extIEs::theInfo = {
	MasterInformationBlockv6b0extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *MasterInformationBlockv860extIEs::itemsInfo[1] = {
	&ExtSIBTypeInfoSchedulingInfoList2::theInfo,
};
bool MasterInformationBlockv860extIEs::itemsPres[1] = {
	0,
};
const MasterInformationBlockv860extIEs::Info MasterInformationBlockv860extIEs::theInfo = {
	MasterInformationBlockv860extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *PredefinedConfigIdentityAndValueTag::itemsInfo[1] = {
	&PredefinedConfigIdentity::theInfo,
};
bool PredefinedConfigIdentityAndValueTag::itemsPres[1] = {
	1,
};
const PredefinedConfigIdentityAndValueTag::Info PredefinedConfigIdentityAndValueTag::theInfo = {
	PredefinedConfigIdentityAndValueTag::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ProtocolErrorInformationDiagnosticsTypeType1::itemsInfo[1] = {
	&ProtocolErrorCause::theInfo,
};
bool ProtocolErrorInformationDiagnosticsTypeType1::itemsPres[1] = {
	1,
};
const ProtocolErrorInformationDiagnosticsTypeType1::Info ProtocolErrorInformationDiagnosticsTypeType1::theInfo = {
	ProtocolErrorInformationDiagnosticsTypeType1::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ProtocolErrorInformationDiagnosticsType::choicesInfo[1] = {
	&ProtocolErrorInformationDiagnosticsTypeType1::theInfo,
};
const ProtocolErrorInformationDiagnosticsType::Info ProtocolErrorInformationDiagnosticsType::theInfo = {
	ProtocolErrorInformationDiagnosticsType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *ProtocolErrorInformation::itemsInfo[1] = {
	&ProtocolErrorInformationDiagnosticsType::theInfo,
};
bool ProtocolErrorInformation::itemsPres[1] = {
	1,
};
const ProtocolErrorInformation::Info ProtocolErrorInformation::theInfo = {
	ProtocolErrorInformation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *RplmnInformation::itemsInfo[1] = {
	&GSMBARangeList::theInfo,
};
bool RplmnInformation::itemsPres[1] = {
	0,
};
const RplmnInformation::Info RplmnInformation::theInfo = {
	RplmnInformation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *RplmnInformationr4::itemsInfo[1] = {
	&GSMBARangeList::theInfo,
};
bool RplmnInformationr4::itemsPres[1] = {
	0,
};
const RplmnInformationr4::Info RplmnInformationr4::theInfo = {
	RplmnInformationr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SchedulingInformationScheduling::itemsInfo[1] = {
	&SegCount::theInfo,
};
bool SchedulingInformationScheduling::itemsPres[1] = {
	0,
};
const SchedulingInformationScheduling::Info SchedulingInformationScheduling::theInfo = {
	SchedulingInformationScheduling::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SchedulingInformation::itemsInfo[1] = {
	&SchedulingInformationScheduling::theInfo,
};
bool SchedulingInformation::itemsPres[1] = {
	0,
};
const SchedulingInformation::Info SchedulingInformation::theInfo = {
	SchedulingInformation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SIBTypeAndTag::choicesInfo[1] = {
	&PLMNValueTag::theInfo,
};
const SIBTypeAndTag::Info SIBTypeAndTag::theInfo = {
	SIBTypeAndTag::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *SchedulingInformationSIB::itemsInfo[1] = {
	&SIBTypeAndTag::theInfo,
};
bool SchedulingInformationSIB::itemsPres[1] = {
	1,
};
const SchedulingInformationSIB::Info SchedulingInformationSIB::theInfo = {
	SchedulingInformationSIB::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *SIBSbTypeAndTag::choicesInfo[1] = {
	&PLMNValueTag::theInfo,
};
const SIBSbTypeAndTag::Info SIBSbTypeAndTag::theInfo = {
	SIBSbTypeAndTag::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *SchedulingInformationSIBSb::itemsInfo[1] = {
	&SIBSbTypeAndTag::theInfo,
};
bool SchedulingInformationSIBSb::itemsPres[1] = {
	1,
};
const SchedulingInformationSIBSb::Info SchedulingInformationSIBSb::theInfo = {
	SchedulingInformationSIBSb::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *SIBOccurrenceIdentityAndValueTag::itemsInfo[1] = {
	&SIBOccurIdentity::theInfo,
};
bool SIBOccurrenceIdentityAndValueTag::itemsPres[1] = {
	1,
};
const SIBOccurrenceIdentityAndValueTag::Info SIBOccurrenceIdentityAndValueTag::theInfo = {
	SIBOccurrenceIdentityAndValueTag::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *SysInfoType1::itemsInfo[1] = {
	&NASSystemInformationGSMMAP::theInfo,
};
bool SysInfoType1::itemsPres[1] = {
	0,
};
const SysInfoType1::Info SysInfoType1::theInfo = {
	SysInfoType1::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType1v3a0extIEs::itemsInfo[1] = {
	&UEConnTimersAndConstantsv3a0ext::theInfo,
};
bool SysInfoType1v3a0extIEs::itemsPres[1] = {
	1,
};
const SysInfoType1v3a0extIEs::Info SysInfoType1v3a0extIEs::theInfo = {
	SysInfoType1v3a0extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *SysInfoType1v860extIEs::itemsInfo[1] = {
	&UEConnTimersAndConstantsv860ext::theInfo,
};
bool SysInfoType1v860extIEs::itemsPres[1] = {
	1,
};
const SysInfoType1v860extIEs::Info SysInfoType1v860extIEs::theInfo = {
	SysInfoType1v860extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *SysInfoType2::itemsInfo[1] = {
	&URAIdentityList::theInfo,
};
bool SysInfoType2::itemsPres[1] = {
	0,
};
const SysInfoType2::Info SysInfoType2::theInfo = {
	SysInfoType2::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType3::itemsInfo[1] = {
	&SysInfoType3Sib4indicator::theInfo,
};
bool SysInfoType3::itemsPres[1] = {
	0,
};
const SysInfoType3::Info SysInfoType3::theInfo = {
	SysInfoType3::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType3v4b0extIEs::itemsInfo[1] = {
	&MappingLCRr4::theInfo,
};
bool SysInfoType3v4b0extIEs::itemsPres[1] = {
	0,
};
const SysInfoType3v4b0extIEs::Info SysInfoType3v4b0extIEs::theInfo = {
	SysInfoType3v4b0extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType3v590ext::itemsInfo[1] = {
	&CellSelectReselectInfov590ext::theInfo,
};
bool SysInfoType3v590ext::itemsPres[1] = {
	0,
};
const SysInfoType3v590ext::Info SysInfoType3v590ext::theInfo = {
	SysInfoType3v590ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType3v5c0extIEs::itemsInfo[1] = {
	&CellSelectReselectInfoTreselectionScalingv5c0ext::theInfo,
};
bool SysInfoType3v5c0extIEs::itemsPres[1] = {
	0,
};
const SysInfoType3v5c0extIEs::Info SysInfoType3v5c0extIEs::theInfo = {
	SysInfoType3v5c0extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType3v670ext::itemsInfo[1] = {
	&DomainSpecificAccessRestrictionParamv670ext::theInfo,
};
bool SysInfoType3v670ext::itemsPres[1] = {
	0,
};
const SysInfoType3v670ext::Info SysInfoType3v670ext::theInfo = {
	SysInfoType3v670ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType3v770extIEs::itemsInfo[1] = {
	&DeferredMeasurementControlReadingSupport::theInfo,
};
bool SysInfoType3v770extIEs::itemsPres[1] = {
	0,
};
const SysInfoType3v770extIEs::Info SysInfoType3v770extIEs::theInfo = {
	SysInfoType3v770extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType3v830extIEs::itemsInfo[1] = {
	&PagingPermissionWithAccessControlParameters::theInfo,
};
bool SysInfoType3v830extIEs::itemsPres[1] = {
	0,
};
const SysInfoType3v830extIEs::Info SysInfoType3v830extIEs::theInfo = {
	SysInfoType3v830extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType3v860extIEs::itemsInfo[1] = {
	&CSGIdentity::theInfo,
};
bool SysInfoType3v860extIEs::itemsPres[1] = {
	0,
};
const SysInfoType3v860extIEs::Info SysInfoType3v860extIEs::theInfo = {
	SysInfoType3v860extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType3v870extIEs::itemsInfo[1] = {
	&CellAccessRestrictionv870ext::theInfo,
};
bool SysInfoType3v870extIEs::itemsPres[1] = {
	0,
};
const SysInfoType3v870extIEs::Info SysInfoType3v870extIEs::theInfo = {
	SysInfoType3v870extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType3v920extIEs::itemsInfo[1] = {
	&SysInfoType3v920extIEsimsEmergencySupportIndicator::theInfo,
};
bool SysInfoType3v920extIEs::itemsPres[1] = {
	0,
};
const SysInfoType3v920extIEs::Info SysInfoType3v920extIEs::theInfo = {
	SysInfoType3v920extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType4::itemsInfo[1] = {
	&CellIdentity::theInfo,
};
bool SysInfoType4::itemsPres[1] = {
	0,
};
const SysInfoType4::Info SysInfoType4::theInfo = {
	SysInfoType4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType4v4b0extIEs::itemsInfo[1] = {
	&MappingLCRr4::theInfo,
};
bool SysInfoType4v4b0extIEs::itemsPres[1] = {
	0,
};
const SysInfoType4v4b0extIEs::Info SysInfoType4v4b0extIEs::theInfo = {
	SysInfoType4v4b0extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType4v590ext::itemsInfo[1] = {
	&CellSelectReselectInfov590ext::theInfo,
};
bool SysInfoType4v590ext::itemsPres[1] = {
	0,
};
const SysInfoType4v590ext::Info SysInfoType4v590ext::theInfo = {
	SysInfoType4v590ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType4v5b0extIEs::itemsInfo[1] = {
	&CellSelectReselectInfoPCHFACHv5b0ext::theInfo,
};
bool SysInfoType4v5b0extIEs::itemsPres[1] = {
	0,
};
const SysInfoType4v5b0extIEs::Info SysInfoType4v5b0extIEs::theInfo = {
	SysInfoType4v5b0extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType4v5c0extIEs::itemsInfo[1] = {
	&CellSelectReselectInfoTreselectionScalingv5c0ext::theInfo,
};
bool SysInfoType4v5c0extIEs::itemsPres[1] = {
	0,
};
const SysInfoType4v5c0extIEs::Info SysInfoType4v5c0extIEs::theInfo = {
	SysInfoType4v5c0extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType5::itemsInfo[1] = {
	&SysInfoType5Sib6indicator::theInfo,
};
bool SysInfoType5::itemsPres[1] = {
	0,
};
const SysInfoType5::Info SysInfoType5::theInfo = {
	SysInfoType5::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType5v4b0extIEs::itemsInfo[1] = {
	&PNBSCHAllocationr4::theInfo,
};
bool SysInfoType5v4b0extIEs::itemsPres[1] = {
	0,
};
const SysInfoType5v4b0extIEs::Info SysInfoType5v4b0extIEs::theInfo = {
	SysInfoType5v4b0extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType5v590extIEsHcrr5SpecificInfo::itemsInfo[1] = {
	&PUSCHSysInfoListSFNHCRr5::theInfo,
};
bool SysInfoType5v590extIEsHcrr5SpecificInfo::itemsPres[1] = {
	0,
};
const SysInfoType5v590extIEsHcrr5SpecificInfo::Info SysInfoType5v590extIEsHcrr5SpecificInfo::theInfo = {
	SysInfoType5v590extIEsHcrr5SpecificInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType5v590extIEs::itemsInfo[1] = {
	&SysInfoType5v590extIEsHcrr5SpecificInfo::theInfo,
};
bool SysInfoType5v590extIEs::itemsPres[1] = {
	0,
};
const SysInfoType5v590extIEs::Info SysInfoType5v590extIEs::theInfo = {
	SysInfoType5v590extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType5v650extIEs::itemsInfo[1] = {
	&RadioFrequencyBandFDD2::theInfo,
};
bool SysInfoType5v650extIEs::itemsPres[1] = {
	1,
};
const SysInfoType5v650extIEs::Info SysInfoType5v650extIEs::theInfo = {
	SysInfoType5v650extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *SysInfoType5v680extIEs::itemsInfo[1] = {
	&SysInfoType5v680extIEshsdpa_CellIndicator::theInfo,
};
bool SysInfoType5v680extIEs::itemsPres[1] = {
	0,
};
const SysInfoType5v680extIEs::Info SysInfoType5v680extIEs::theInfo = {
	SysInfoType5v680extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType5v690extIEs::itemsInfo[1] = {
	&SysInfoType5v690extIEsedch_CellIndicator::theInfo,
};
bool SysInfoType5v690extIEs::itemsPres[1] = {
	0,
};
const SysInfoType5v690extIEs::Info SysInfoType5v690extIEs::theInfo = {
	SysInfoType5v690extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType5v770extIEsModeSpecificInfoFdd::itemsInfo[1] = {
	&HSDSCHCommonSystemInformation::theInfo,
};
bool SysInfoType5v770extIEsModeSpecificInfoFdd::itemsPres[1] = {
	1,
};
const SysInfoType5v770extIEsModeSpecificInfoFdd::Info SysInfoType5v770extIEsModeSpecificInfoFdd::theInfo = {
	SysInfoType5v770extIEsModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *SysInfoType5v770extIEsModeSpecificInfo::choicesInfo[1] = {
	&SysInfoType5v770extIEsModeSpecificInfoFdd::theInfo,
};
const SysInfoType5v770extIEsModeSpecificInfo::Info SysInfoType5v770extIEsModeSpecificInfo::theInfo = {
	SysInfoType5v770extIEsModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *SysInfoType5v770extIEs::itemsInfo[1] = {
	&SysInfoType5v770extIEsModeSpecificInfo::theInfo,
};
bool SysInfoType5v770extIEs::itemsPres[1] = {
	0,
};
const SysInfoType5v770extIEs::Info SysInfoType5v770extIEs::theInfo = {
	SysInfoType5v770extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType5v860extIEs::itemsInfo[1] = {
	&SysInfoType5v860extIEsDummy::theInfo,
};
bool SysInfoType5v860extIEs::itemsPres[1] = {
	1,
};
const SysInfoType5v860extIEs::Info SysInfoType5v860extIEs::theInfo = {
	SysInfoType5v860extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *SysInfoType5v890extIEs::itemsInfo[1] = {
	&FrequencyInfoTDD::theInfo,
};
bool SysInfoType5v890extIEs::itemsPres[1] = {
	0,
};
const SysInfoType5v890extIEs::Info SysInfoType5v890extIEs::theInfo = {
	SysInfoType5v890extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType5v8b0extIEs::itemsInfo[1] = {
	&SysInfoType5v8b0extIEstresetUsageIndicator::theInfo,
};
bool SysInfoType5v8b0extIEs::itemsPres[1] = {
	0,
};
const SysInfoType5v8b0extIEs::Info SysInfoType5v8b0extIEs::theInfo = {
	SysInfoType5v8b0extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType5v8d0extIEs::itemsInfo[1] = {
	&CommonEDCHSystemInfoFDD::theInfo,
};
bool SysInfoType5v8d0extIEs::itemsPres[1] = {
	0,
};
const SysInfoType5v8d0extIEs::Info SysInfoType5v8d0extIEs::theInfo = {
	SysInfoType5v8d0extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType6::itemsInfo[1] = {
	&PICHPowerOffset::theInfo,
};
bool SysInfoType6::itemsPres[1] = {
	0,
};
const SysInfoType6::Info SysInfoType6::theInfo = {
	SysInfoType6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType6v4b0extIEs::itemsInfo[1] = {
	&OpenLoopPowerControlIPDLTDDr4::theInfo,
};
bool SysInfoType6v4b0extIEs::itemsPres[1] = {
	0,
};
const SysInfoType6v4b0extIEs::Info SysInfoType6v4b0extIEs::theInfo = {
	SysInfoType6v4b0extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType6v590extIEsHcrr5SpecificInfo::itemsInfo[1] = {
	&PUSCHSysInfoListSFNHCRr5::theInfo,
};
bool SysInfoType6v590extIEsHcrr5SpecificInfo::itemsPres[1] = {
	0,
};
const SysInfoType6v590extIEsHcrr5SpecificInfo::Info SysInfoType6v590extIEsHcrr5SpecificInfo::theInfo = {
	SysInfoType6v590extIEsHcrr5SpecificInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType6v590extIEs::itemsInfo[1] = {
	&SysInfoType6v590extIEsHcrr5SpecificInfo::theInfo,
};
bool SysInfoType6v590extIEs::itemsPres[1] = {
	0,
};
const SysInfoType6v590extIEs::Info SysInfoType6v590extIEs::theInfo = {
	SysInfoType6v590extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType6v650extIEs::itemsInfo[1] = {
	&RadioFrequencyBandFDD2::theInfo,
};
bool SysInfoType6v650extIEs::itemsPres[1] = {
	1,
};
const SysInfoType6v650extIEs::Info SysInfoType6v650extIEs::theInfo = {
	SysInfoType6v650extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *SysInfoType6v690extIEs::itemsInfo[1] = {
	&AdditionalPRACHTFandTFCSCCCHList::theInfo,
};
bool SysInfoType6v690extIEs::itemsPres[1] = {
	0,
};
const SysInfoType6v690extIEs::Info SysInfoType6v690extIEs::theInfo = {
	SysInfoType6v690extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType6v770extIEsTdd768SpecificInfo::itemsInfo[1] = {
	&PUSCHSysInfoListSFNVHCR::theInfo,
};
bool SysInfoType6v770extIEsTdd768SpecificInfo::itemsPres[1] = {
	0,
};
const SysInfoType6v770extIEsTdd768SpecificInfo::Info SysInfoType6v770extIEsTdd768SpecificInfo::theInfo = {
	SysInfoType6v770extIEsTdd768SpecificInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType6v770extIEs::itemsInfo[1] = {
	&SysInfoType6v770extIEsTdd768SpecificInfo::theInfo,
};
bool SysInfoType6v770extIEs::itemsPres[1] = {
	0,
};
const SysInfoType6v770extIEs::Info SysInfoType6v770extIEs::theInfo = {
	SysInfoType6v770extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType7ModeSpecificInfo::choicesInfo[1] = {
	&SysInfoType7ModeSpecificInfoFdd::theInfo,
};
const SysInfoType7ModeSpecificInfo::Info SysInfoType7ModeSpecificInfo::theInfo = {
	SysInfoType7ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *SysInfoType7::itemsInfo[1] = {
	&SysInfoType7ModeSpecificInfo::theInfo,
};
bool SysInfoType7::itemsPres[1] = {
	0,
};
const SysInfoType7::Info SysInfoType7::theInfo = {
	SysInfoType7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType8::itemsInfo[1] = {
	&CPCHParameters::theInfo,
};
bool SysInfoType8::itemsPres[1] = {
	0,
};
const SysInfoType8::Info SysInfoType8::theInfo = {
	SysInfoType8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType9::itemsInfo[1] = {
	&CPCHPersistenceLevelsList::theInfo,
};
bool SysInfoType9::itemsPres[1] = {
	0,
};
const SysInfoType9::Info SysInfoType9::theInfo = {
	SysInfoType9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType10::itemsInfo[1] = {
	&DRACSysInfoList::theInfo,
};
bool SysInfoType10::itemsPres[1] = {
	0,
};
const SysInfoType10::Info SysInfoType10::theInfo = {
	SysInfoType10::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType11::itemsInfo[1] = {
	&SysInfoType11Sib12indicator::theInfo,
};
bool SysInfoType11::itemsPres[1] = {
	0,
};
const SysInfoType11::Info SysInfoType11::theInfo = {
	SysInfoType11::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType11v590extIEs::itemsInfo[1] = {
	&SysInfoType11v590extIEsNewIntraFrequencyCellInfoListv590ext::theInfo,
};
bool SysInfoType11v590extIEs::itemsPres[1] = {
	0,
};
const SysInfoType11v590extIEs::Info SysInfoType11v590extIEs::theInfo = {
	SysInfoType11v590extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType11v690extIEs::itemsInfo[1] = {
	&DummyInterFreqRACHReportingInfo::theInfo,
};
bool SysInfoType11v690extIEs::itemsPres[1] = {
	0,
};
const SysInfoType11v690extIEs::Info SysInfoType11v690extIEs::theInfo = {
	SysInfoType11v690extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType11v6b0extIEs::itemsInfo[1] = {
	&InterFreqRACHReportingInfo::theInfo,
};
bool SysInfoType11v6b0extIEs::itemsPres[1] = {
	0,
};
const SysInfoType11v6b0extIEs::Info SysInfoType11v6b0extIEs::theInfo = {
	SysInfoType11v6b0extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *MBSFNFrequency::itemsInfo[1] = {
	&FrequencyInfo::theInfo,
};
bool MBSFNFrequency::itemsPres[1] = {
	0,
};
const MBSFNFrequency::Info MBSFNFrequency::theInfo = {
	MBSFNFrequency::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType11v770extIEs::itemsInfo[1] = {
	&MBSFNFrequencyList::theInfo,
};
bool SysInfoType11v770extIEs::itemsPres[1] = {
	0,
};
const SysInfoType11v770extIEs::Info SysInfoType11v770extIEs::theInfo = {
	SysInfoType11v770extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType11v7b0extIEs::itemsInfo[1] = {
	&NewInterFreqCellListv7b0ext::theInfo,
};
bool SysInfoType11v7b0extIEs::itemsPres[1] = {
	0,
};
const SysInfoType11v7b0extIEs::Info SysInfoType11v7b0extIEs::theInfo = {
	SysInfoType11v7b0extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *MBSFNFrequencyv860ext::itemsInfo[1] = {
	&MBSFNFrequencyv860extimb_Indication::theInfo,
};
bool MBSFNFrequencyv860ext::itemsPres[1] = {
	0,
};
const MBSFNFrequencyv860ext::Info MBSFNFrequencyv860ext::theInfo = {
	MBSFNFrequencyv860ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType11v860extIEs::itemsInfo[1] = {
	&MBSFNFrequencyListv860ext::theInfo,
};
bool SysInfoType11v860extIEs::itemsPres[1] = {
	0,
};
const SysInfoType11v860extIEs::Info SysInfoType11v860extIEs::theInfo = {
	SysInfoType11v860extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType11bis::itemsInfo[1] = {
	&MeasurementControlSysInfoExtension::theInfo,
};
bool SysInfoType11bis::itemsPres[1] = {
	0,
};
const SysInfoType11bis::Info SysInfoType11bis::theInfo = {
	SysInfoType11bis::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType11bisv7b0extIEs::itemsInfo[1] = {
	&NewInterFreqCellListv7b0ext::theInfo,
};
bool SysInfoType11bisv7b0extIEs::itemsPres[1] = {
	0,
};
const SysInfoType11bisv7b0extIEs::Info SysInfoType11bisv7b0extIEs::theInfo = {
	SysInfoType11bisv7b0extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType11bisv860extIEs::itemsInfo[1] = {
	&CSGPSCSplitInfo::theInfo,
};
bool SysInfoType11bisv860extIEs::itemsPres[1] = {
	0,
};
const SysInfoType11bisv860extIEs::Info SysInfoType11bisv860extIEs::theInfo = {
	SysInfoType11bisv860extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType12::itemsInfo[1] = {
	&FACHMeasurementOccasionInfo::theInfo,
};
bool SysInfoType12::itemsPres[1] = {
	0,
};
const SysInfoType12::Info SysInfoType12::theInfo = {
	SysInfoType12::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType12v590extIEs::itemsInfo[1] = {
	&SysInfoType12v590extIEsNewIntraFrequencyCellInfoListv590ext::theInfo,
};
bool SysInfoType12v590extIEs::itemsPres[1] = {
	0,
};
const SysInfoType12v590extIEs::Info SysInfoType12v590extIEs::theInfo = {
	SysInfoType12v590extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType12v690extIEs::itemsInfo[1] = {
	&DummyInterFreqRACHReportingInfo::theInfo,
};
bool SysInfoType12v690extIEs::itemsPres[1] = {
	0,
};
const SysInfoType12v690extIEs::Info SysInfoType12v690extIEs::theInfo = {
	SysInfoType12v690extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType12v6b0extIEs::itemsInfo[1] = {
	&InterFreqRACHReportingInfo::theInfo,
};
bool SysInfoType12v6b0extIEs::itemsPres[1] = {
	0,
};
const SysInfoType12v6b0extIEs::Info SysInfoType12v6b0extIEs::theInfo = {
	SysInfoType12v6b0extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType12v7b0extIEs::itemsInfo[1] = {
	&NewInterFreqCellListv7b0ext::theInfo,
};
bool SysInfoType12v7b0extIEs::itemsPres[1] = {
	0,
};
const SysInfoType12v7b0extIEs::Info SysInfoType12v7b0extIEs::theInfo = {
	SysInfoType12v7b0extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType13::itemsInfo[1] = {
	&CNDomainSysInfoList::theInfo,
};
bool SysInfoType13::itemsPres[1] = {
	0,
};
const SysInfoType13::Info SysInfoType13::theInfo = {
	SysInfoType13::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType13v3a0extIEs::itemsInfo[1] = {
	&UEIdleTimersAndConstantsv3a0ext::theInfo,
};
bool SysInfoType13v3a0extIEs::itemsPres[1] = {
	1,
};
const SysInfoType13v3a0extIEs::Info SysInfoType13v3a0extIEs::theInfo = {
	SysInfoType13v3a0extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *SysInfoType13v4b0extIEs::itemsInfo[1] = {
	&CapabilityUpdateRequirementr4ext::theInfo,
};
bool SysInfoType13v4b0extIEs::itemsPres[1] = {
	0,
};
const SysInfoType13v4b0extIEs::Info SysInfoType13v4b0extIEs::theInfo = {
	SysInfoType13v4b0extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType13v770extIEs::itemsInfo[1] = {
	&CapabilityUpdateRequirementv770ext::theInfo,
};
bool SysInfoType13v770extIEs::itemsPres[1] = {
	0,
};
const SysInfoType13v770extIEs::Info SysInfoType13v770extIEs::theInfo = {
	SysInfoType13v770extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType131::itemsInfo[1] = {
	&ANSI41RANDInformation::theInfo,
};
bool SysInfoType131::itemsPres[1] = {
	0,
};
const SysInfoType131::Info SysInfoType131::theInfo = {
	SysInfoType131::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType132::itemsInfo[1] = {
	&ANSI41UserZoneIDInformation::theInfo,
};
bool SysInfoType132::itemsPres[1] = {
	0,
};
const SysInfoType132::Info SysInfoType132::theInfo = {
	SysInfoType132::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType133::itemsInfo[1] = {
	&ANSI41PrivateNeighbourListInfo::theInfo,
};
bool SysInfoType133::itemsPres[1] = {
	0,
};
const SysInfoType133::Info SysInfoType133::theInfo = {
	SysInfoType133::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType134::itemsInfo[1] = {
	&ANSI41GlobalServiceRedirectInfo::theInfo,
};
bool SysInfoType134::itemsPres[1] = {
	0,
};
const SysInfoType134::Info SysInfoType134::theInfo = {
	SysInfoType134::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType14::itemsInfo[1] = {
	&IndividualTSInterferenceList::theInfo,
};
bool SysInfoType14::itemsPres[1] = {
	0,
};
const SysInfoType14::Info SysInfoType14::theInfo = {
	SysInfoType14::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType15::itemsInfo[1] = {
	&UEPositioningCipherParameters::theInfo,
};
bool SysInfoType15::itemsPres[1] = {
	0,
};
const SysInfoType15::Info SysInfoType15::theInfo = {
	SysInfoType15::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType15v4b0extIEs::itemsInfo[1] = {
	&UEPositioningIPDLParametersTDDr4ext::theInfo,
};
bool SysInfoType15v4b0extIEs::itemsPres[1] = {
	0,
};
const SysInfoType15v4b0extIEs::Info SysInfoType15v4b0extIEs::theInfo = {
	SysInfoType15v4b0extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType15v770extIEs::itemsInfo[1] = {
	&UEPositioningGPSReferenceTimev770ext::theInfo,
};
bool SysInfoType15v770extIEs::itemsPres[1] = {
	1,
};
const SysInfoType15v770extIEs::Info SysInfoType15v770extIEs::theInfo = {
	SysInfoType15v770extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *SysInfoType15bis::itemsInfo[1] = {
	&ReferenceLocationGANSS::theInfo,
};
bool SysInfoType15bis::itemsPres[1] = {
	0,
};
const SysInfoType15bis::Info SysInfoType15bis::theInfo = {
	SysInfoType15bis::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType15bisv860extIEs::itemsInfo[1] = {
	&UEPositioningGANSSAddIonoModel::theInfo,
};
bool SysInfoType15bisv860extIEs::itemsPres[1] = {
	0,
};
const SysInfoType15bisv860extIEs::Info SysInfoType15bisv860extIEs::theInfo = {
	SysInfoType15bisv860extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType151::itemsInfo[1] = {
	&UEPositioningGPSDGPSCorrections::theInfo,
};
bool SysInfoType151::itemsPres[1] = {
	0,
};
const SysInfoType151::Info SysInfoType151::theInfo = {
	SysInfoType151::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType151v920extIEs::itemsInfo[1] = {
	&UEPositioningGPSDGPSCorrectionsv920ext::theInfo,
};
bool SysInfoType151v920extIEs::itemsPres[1] = {
	1,
};
const SysInfoType151v920extIEs::Info SysInfoType151v920extIEs::theInfo = {
	SysInfoType151v920extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *SysInfoType151bis::itemsInfo[1] = {
	&UEPositioningDGANSSCorrections::theInfo,
};
bool SysInfoType151bis::itemsPres[1] = {
	0,
};
const SysInfoType151bis::Info SysInfoType151bis::theInfo = {
	SysInfoType151bis::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType151bisv920extIEs::itemsInfo[1] = {
	&UEPositioningDGANSSCorrectionsv920ext::theInfo,
};
bool SysInfoType151bisv920extIEs::itemsPres[1] = {
	1,
};
const SysInfoType151bisv920extIEs::Info SysInfoType151bisv920extIEs::theInfo = {
	SysInfoType151bisv920extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *SysInfoType152::itemsInfo[1] = {
	&GPSTOW1sec::theInfo,
};
bool SysInfoType152::itemsPres[1] = {
	0,
};
const SysInfoType152::Info SysInfoType152::theInfo = {
	SysInfoType152::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType152bis::itemsInfo[1] = {
	&UEPositioningGANSSNavigationModel::theInfo,
};
bool SysInfoType152bis::itemsPres[1] = {
	0,
};
const SysInfoType152bis::Info SysInfoType152bis::theInfo = {
	SysInfoType152bis::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType152ter::itemsInfo[1] = {
	&UEPositioningGANSSAddNavigationModels::theInfo,
};
bool SysInfoType152ter::itemsPres[1] = {
	0,
};
const SysInfoType152ter::Info SysInfoType152ter::theInfo = {
	SysInfoType152ter::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType153::itemsInfo[1] = {
	&GPSTOW1sec::theInfo,
};
bool SysInfoType153::itemsPres[1] = {
	0,
};
const SysInfoType153::Info SysInfoType153::theInfo = {
	SysInfoType153::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType153bis::itemsInfo[1] = {
	&UEPositioningGANSSAlmanac::theInfo,
};
bool SysInfoType153bis::itemsPres[1] = {
	0,
};
const SysInfoType153bis::Info SysInfoType153bis::theInfo = {
	SysInfoType153bis::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType153bisv860extIEs::itemsInfo[1] = {
	&UEPositioningGANSSAlmanacv860ext::theInfo,
};
bool SysInfoType153bisv860extIEs::itemsPres[1] = {
	0,
};
const SysInfoType153bisv860extIEs::Info SysInfoType153bisv860extIEs::theInfo = {
	SysInfoType153bisv860extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType154::itemsInfo[1] = {
	&UEPositioningCipherParameters::theInfo,
};
bool SysInfoType154::itemsPres[1] = {
	0,
};
const SysInfoType154::Info SysInfoType154::theInfo = {
	SysInfoType154::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType154v3a0ext::itemsInfo[1] = {
	&SFNOffsetValidity::theInfo,
};
bool SysInfoType154v3a0ext::itemsPres[1] = {
	0,
};
const SysInfoType154v3a0ext::Info SysInfoType154v3a0ext::theInfo = {
	SysInfoType154v3a0ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType154v4b0ext::itemsInfo[1] = {
	&UEPositioningOTDOAAssistanceDatar4ext::theInfo,
};
bool SysInfoType154v4b0ext::itemsPres[1] = {
	0,
};
const SysInfoType154v4b0ext::Info SysInfoType154v4b0ext::theInfo = {
	SysInfoType154v4b0ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType155::itemsInfo[1] = {
	&UEPositioningOTDOAAssistanceDataUEB::theInfo,
};
bool SysInfoType155::itemsPres[1] = {
	0,
};
const SysInfoType155::Info SysInfoType155::theInfo = {
	SysInfoType155::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType155v3a0ext::itemsInfo[1] = {
	&SFNOffsetValidity::theInfo,
};
bool SysInfoType155v3a0ext::itemsPres[1] = {
	0,
};
const SysInfoType155v3a0ext::Info SysInfoType155v3a0ext::theInfo = {
	SysInfoType155v3a0ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType155v770extIEs::itemsInfo[1] = {
	&UEPositioningOTDOAAssistanceDataUEBext::theInfo,
};
bool SysInfoType155v770extIEs::itemsPres[1] = {
	0,
};
const SysInfoType155v770extIEs::Info SysInfoType155v770extIEs::theInfo = {
	SysInfoType155v770extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType156::itemsInfo[1] = {
	&SysInfoType156UepositioningGANSSTOD::theInfo,
};
bool SysInfoType156::itemsPres[1] = {
	0,
};
const SysInfoType156::Info SysInfoType156::theInfo = {
	SysInfoType156::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType157::itemsInfo[1] = {
	&UEPositioningGANSSDataBitAssistance::theInfo,
};
bool SysInfoType157::itemsPres[1] = {
	0,
};
const SysInfoType157::Info SysInfoType157::theInfo = {
	SysInfoType157::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType158::itemsInfo[1] = {
	&UEPositioningCipherParameters::theInfo,
};
bool SysInfoType158::itemsPres[1] = {
	0,
};
const SysInfoType158::Info SysInfoType158::theInfo = {
	SysInfoType158::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType16::itemsInfo[1] = {
	&PreDefRadioConfiguration::theInfo,
};
bool SysInfoType16::itemsPres[1] = {
	0,
};
const SysInfoType16::Info SysInfoType16::theInfo = {
	SysInfoType16::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType16v770extIEs::itemsInfo[1] = {
	&PreDefRadioConfigurationv770ext::theInfo,
};
bool SysInfoType16v770extIEs::itemsPres[1] = {
	1,
};
const SysInfoType16v770extIEs::Info SysInfoType16v770extIEs::theInfo = {
	SysInfoType16v770extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *SysInfoType16v920extIEs::itemsInfo[1] = {
	&PreDefRadioConfigurationv920ext::theInfo,
};
bool SysInfoType16v920extIEs::itemsPres[1] = {
	1,
};
const SysInfoType16v920extIEs::Info SysInfoType16v920extIEs::theInfo = {
	SysInfoType16v920extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *SysInfoType17::itemsInfo[1] = {
	&PUSCHSysInfoList::theInfo,
};
bool SysInfoType17::itemsPres[1] = {
	0,
};
const SysInfoType17::Info SysInfoType17::theInfo = {
	SysInfoType17::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType17v4b0extIEsTdd128SpecificInfo::itemsInfo[1] = {
	&PUSCHSysInfoListLCRr4::theInfo,
};
bool SysInfoType17v4b0extIEsTdd128SpecificInfo::itemsPres[1] = {
	0,
};
const SysInfoType17v4b0extIEsTdd128SpecificInfo::Info SysInfoType17v4b0extIEsTdd128SpecificInfo::theInfo = {
	SysInfoType17v4b0extIEsTdd128SpecificInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType17v4b0extIEs::itemsInfo[1] = {
	&SysInfoType17v4b0extIEsTdd128SpecificInfo::theInfo,
};
bool SysInfoType17v4b0extIEs::itemsPres[1] = {
	0,
};
const SysInfoType17v4b0extIEs::Info SysInfoType17v4b0extIEs::theInfo = {
	SysInfoType17v4b0extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType17v590extIEsHcrr5SpecificInfo::itemsInfo[1] = {
	&PUSCHSysInfoListHCRr5::theInfo,
};
bool SysInfoType17v590extIEsHcrr5SpecificInfo::itemsPres[1] = {
	0,
};
const SysInfoType17v590extIEsHcrr5SpecificInfo::Info SysInfoType17v590extIEsHcrr5SpecificInfo::theInfo = {
	SysInfoType17v590extIEsHcrr5SpecificInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType17v590extIEs::itemsInfo[1] = {
	&SysInfoType17v590extIEsHcrr5SpecificInfo::theInfo,
};
bool SysInfoType17v590extIEs::itemsPres[1] = {
	0,
};
const SysInfoType17v590extIEs::Info SysInfoType17v590extIEs::theInfo = {
	SysInfoType17v590extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType17v770extIEsTdd768SpecificInfo::itemsInfo[1] = {
	&PUSCHSysInfoListSFNVHCR::theInfo,
};
bool SysInfoType17v770extIEsTdd768SpecificInfo::itemsPres[1] = {
	0,
};
const SysInfoType17v770extIEsTdd768SpecificInfo::Info SysInfoType17v770extIEsTdd768SpecificInfo::theInfo = {
	SysInfoType17v770extIEsTdd768SpecificInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType17v770extIEs::itemsInfo[1] = {
	&SysInfoType17v770extIEsTdd768SpecificInfo::theInfo,
};
bool SysInfoType17v770extIEs::itemsPres[1] = {
	0,
};
const SysInfoType17v770extIEs::Info SysInfoType17v770extIEs::theInfo = {
	SysInfoType17v770extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType18::itemsInfo[1] = {
	&PLMNIdentitiesOfNeighbourCells::theInfo,
};
bool SysInfoType18::itemsPres[1] = {
	0,
};
const SysInfoType18::Info SysInfoType18::theInfo = {
	SysInfoType18::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType18v6b0ext::itemsInfo[1] = {
	&PLMNIdentitiesOfNeighbourCells::theInfo,
};
bool SysInfoType18v6b0ext::itemsPres[1] = {
	0,
};
const SysInfoType18v6b0ext::Info SysInfoType18v6b0ext::theInfo = {
	SysInfoType18v6b0ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType18v860ext::itemsInfo[1] = {
	&PLMNIdentitiesOfNeighbourCellsv860ext::theInfo,
};
bool SysInfoType18v860ext::itemsPres[1] = {
	0,
};
const SysInfoType18v860ext::Info SysInfoType18v860ext::theInfo = {
	SysInfoType18v860ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType19::itemsInfo[1] = {
	&UTRAPriorityInfoList::theInfo,
};
bool SysInfoType19::itemsPres[1] = {
	0,
};
const SysInfoType19::Info SysInfoType19::theInfo = {
	SysInfoType19::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoType19v920ext::itemsInfo[1] = {
	&UTRAPriorityInfoListv920ext::theInfo,
};
bool SysInfoType19v920ext::itemsPres[1] = {
	1,
};
const SysInfoType19v920ext::Info SysInfoType19v920ext::theInfo = {
	SysInfoType19v920ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *SysInfoType20::itemsInfo[1] = {
	&HNBName::theInfo,
};
bool SysInfoType20::itemsPres[1] = {
	0,
};
const SysInfoType20::Info SysInfoType20::theInfo = {
	SysInfoType20::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoTypeSB1::itemsInfo[1] = {
	&SIBReferenceList::theInfo,
};
bool SysInfoTypeSB1::itemsPres[1] = {
	0,
};
const SysInfoTypeSB1::Info SysInfoTypeSB1::theInfo = {
	SysInfoTypeSB1::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoTypeSB1v6b0ext::itemsInfo[1] = {
	&ExtSIBTypeInfoSchedulingInfoList::theInfo,
};
bool SysInfoTypeSB1v6b0ext::itemsPres[1] = {
	0,
};
const SysInfoTypeSB1v6b0ext::Info SysInfoTypeSB1v6b0ext::theInfo = {
	SysInfoTypeSB1v6b0ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoTypeSB1v860ext::itemsInfo[1] = {
	&ExtSIBTypeInfoSchedulingInfoList2::theInfo,
};
bool SysInfoTypeSB1v860ext::itemsPres[1] = {
	0,
};
const SysInfoTypeSB1v860ext::Info SysInfoTypeSB1v860ext::theInfo = {
	SysInfoTypeSB1v860ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoTypeSB2::itemsInfo[1] = {
	&SIBReferenceList::theInfo,
};
bool SysInfoTypeSB2::itemsPres[1] = {
	0,
};
const SysInfoTypeSB2::Info SysInfoTypeSB2::theInfo = {
	SysInfoTypeSB2::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoTypeSB2v6b0ext::itemsInfo[1] = {
	&ExtSIBTypeInfoSchedulingInfoList::theInfo,
};
bool SysInfoTypeSB2v6b0ext::itemsPres[1] = {
	0,
};
const SysInfoTypeSB2v6b0ext::Info SysInfoTypeSB2v6b0ext::theInfo = {
	SysInfoTypeSB2v6b0ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SysInfoTypeSB2v860ext::itemsInfo[1] = {
	&ExtSIBTypeInfoSchedulingInfoList2::theInfo,
};
bool SysInfoTypeSB2v860ext::itemsPres[1] = {
	0,
};
const SysInfoTypeSB2v860ext::Info SysInfoTypeSB2v860ext::theInfo = {
	SysInfoTypeSB2v860ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UEHistoryInformation::itemsInfo[1] = {
	&UEHistoryInformationUeInactivityPeriod::theInfo,
};
bool UEHistoryInformation::itemsPres[1] = {
	0,
};
const UEHistoryInformation::Info UEHistoryInformation::theInfo = {
	UEHistoryInformation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ValueTagInfo::choicesInfo[1] = {
	&ValueTagInfoNone::theInfo,
};
const ValueTagInfo::Info ValueTagInfo::theInfo = {
	ValueTagInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *MBMSCommonRBInformationr6::itemsInfo[1] = {
	&MBMSCommonRBIdentity::theInfo,
};
bool MBMSCommonRBInformationr6::itemsPres[1] = {
	1,
};
const MBMSCommonRBInformationr6::Info MBMSCommonRBInformationr6::theInfo = {
	MBMSCommonRBInformationr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MBMSConnectedModeCountingScope::itemsInfo[1] = {
	&MBMSConnectedModeCountingScopeCountingForUraPCH::theInfo,
};
bool MBMSConnectedModeCountingScope::itemsPres[1] = {
	1,
};
const MBMSConnectedModeCountingScope::Info MBMSConnectedModeCountingScope::theInfo = {
	MBMSConnectedModeCountingScope::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MBMSJoinedInformationr6::itemsInfo[1] = {
	&PTMSIGSMMAP::theInfo,
};
bool MBMSJoinedInformationr6::itemsPres[1] = {
	0,
};
const MBMSJoinedInformationr6::Info MBMSJoinedInformationr6::theInfo = {
	MBMSJoinedInformationr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *MBMSL1CombiningSchedule32::itemsInfo[1] = {
	&MBMSL1CombiningSchedule32CycleOffset::theInfo,
};
bool MBMSL1CombiningSchedule32::itemsPres[1] = {
	1,
};
const MBMSL1CombiningSchedule32::Info MBMSL1CombiningSchedule32::theInfo = {
	MBMSL1CombiningSchedule32::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MBMSL1CombiningSchedule64::itemsInfo[1] = {
	&MBMSL1CombiningSchedule64CycleOffset::theInfo,
};
bool MBMSL1CombiningSchedule64::itemsPres[1] = {
	1,
};
const MBMSL1CombiningSchedule64::Info MBMSL1CombiningSchedule64::theInfo = {
	MBMSL1CombiningSchedule64::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MBMSL1CombiningSchedule128::itemsInfo[1] = {
	&MBMSL1CombiningSchedule128CycleOffset::theInfo,
};
bool MBMSL1CombiningSchedule128::itemsPres[1] = {
	1,
};
const MBMSL1CombiningSchedule128::Info MBMSL1CombiningSchedule128::theInfo = {
	MBMSL1CombiningSchedule128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MBMSL1CombiningSchedule256::itemsInfo[1] = {
	&MBMSL1CombiningSchedule256CycleOffset::theInfo,
};
bool MBMSL1CombiningSchedule256::itemsPres[1] = {
	1,
};
const MBMSL1CombiningSchedule256::Info MBMSL1CombiningSchedule256::theInfo = {
	MBMSL1CombiningSchedule256::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MBMSL1CombiningSchedule512::itemsInfo[1] = {
	&MBMSL1CombiningSchedule512CycleOffset::theInfo,
};
bool MBMSL1CombiningSchedule512::itemsPres[1] = {
	1,
};
const MBMSL1CombiningSchedule512::Info MBMSL1CombiningSchedule512::theInfo = {
	MBMSL1CombiningSchedule512::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MBMSL1CombiningSchedule1024::itemsInfo[1] = {
	&MBMSL1CombiningSchedule1024CycleOffset::theInfo,
};
bool MBMSL1CombiningSchedule1024::itemsPres[1] = {
	1,
};
const MBMSL1CombiningSchedule1024::Info MBMSL1CombiningSchedule1024::theInfo = {
	MBMSL1CombiningSchedule1024::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MBMSL1CombiningSchedule::choicesInfo[1] = {
	&MBMSL1CombiningSchedule32::theInfo,
};
const MBMSL1CombiningSchedule::Info MBMSL1CombiningSchedule::theInfo = {
	MBMSL1CombiningSchedule::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *MBMSL23ConfigurationSameAsCurrent::itemsInfo[1] = {
	&MBMSSCCPCHIdentity::theInfo,
};
bool MBMSL23ConfigurationSameAsCurrent::itemsPres[1] = {
	1,
};
const MBMSL23ConfigurationSameAsCurrent::Info MBMSL23ConfigurationSameAsCurrent::theInfo = {
	MBMSL23ConfigurationSameAsCurrent::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MBMSL23Configuration::choicesInfo[1] = {
	&MBMSL23ConfigurationSameAsCurrent::theInfo,
};
const MBMSL23Configuration::Info MBMSL23Configuration::theInfo = {
	MBMSL23Configuration::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *MBMSMCCHConfigurationInfor6::itemsInfo[1] = {
	&MBMSMCCHConfigurationInfor6AccessInfoPeriodCoefficient::theInfo,
};
bool MBMSMCCHConfigurationInfor6::itemsPres[1] = {
	0,
};
const MBMSMCCHConfigurationInfor6::Info MBMSMCCHConfigurationInfor6::theInfo = {
	MBMSMCCHConfigurationInfor6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *MBMSMICHConfigurationInfor6::itemsInfo[1] = {
	&MBMSMICHPowerOffset::theInfo,
};
bool MBMSMICHConfigurationInfor6::itemsPres[1] = {
	0,
};
const MBMSMICHConfigurationInfor6::Info MBMSMICHConfigurationInfor6::theInfo = {
	MBMSMICHConfigurationInfor6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *MBMSMICHConfigurationInfov770extMode::choicesInfo[1] = {
	&MBMSMICHConfigurationInfov770extModeTdd384::theInfo,
};
const MBMSMICHConfigurationInfov770extMode::Info MBMSMICHConfigurationInfov770extMode::theInfo = {
	MBMSMICHConfigurationInfov770extMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *MBMSMICHConfigurationInfov770ext::itemsInfo[1] = {
	&MBMSMICHConfigurationInfov770extMode::theInfo,
};
bool MBMSMICHConfigurationInfov770ext::itemsPres[1] = {
	1,
};
const MBMSMICHConfigurationInfov770ext::Info MBMSMICHConfigurationInfov770ext::theInfo = {
	MBMSMICHConfigurationInfov770ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MBMSMICHConfigurationInfov890extModeImb384::itemsInfo[1] = {
	&ChannelisationCode256::theInfo,
};
bool MBMSMICHConfigurationInfov890extModeImb384::itemsPres[1] = {
	1,
};
const MBMSMICHConfigurationInfov890extModeImb384::Info MBMSMICHConfigurationInfov890extModeImb384::theInfo = {
	MBMSMICHConfigurationInfov890extModeImb384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MBMSMICHConfigurationInfov890extMode::choicesInfo[1] = {
	&MBMSMICHConfigurationInfov890extModeImb384::theInfo,
};
const MBMSMICHConfigurationInfov890extMode::Info MBMSMICHConfigurationInfov890extMode::theInfo = {
	MBMSMICHConfigurationInfov890extMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *MBMSMICHConfigurationInfov890ext::itemsInfo[1] = {
	&MBMSMICHConfigurationInfov890extMode::theInfo,
};
bool MBMSMICHConfigurationInfov890ext::itemsPres[1] = {
	1,
};
const MBMSMICHConfigurationInfov890ext::Info MBMSMICHConfigurationInfov890ext::theInfo = {
	MBMSMICHConfigurationInfov890ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MBMSServiceIdentityr6::itemsInfo[1] = {
	&MBMSServiceIdentityr6ServiceIdentity::theInfo,
};
bool MBMSServiceIdentityr6::itemsPres[1] = {
	1,
};
const MBMSServiceIdentityr6::Info MBMSServiceIdentityr6::theInfo = {
	MBMSServiceIdentityr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MBMSTransmissionIdentity::itemsInfo[1] = {
	&MBMSServiceIdentityr6::theInfo,
};
bool MBMSTransmissionIdentity::itemsPres[1] = {
	0,
};
const MBMSTransmissionIdentity::Info MBMSTransmissionIdentity::theInfo = {
	MBMSTransmissionIdentity::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *MBMSModifedServicer6::itemsInfo[1] = {
	&MBMSTransmissionIdentity::theInfo,
};
bool MBMSModifedServicer6::itemsPres[1] = {
	1,
};
const MBMSModifedServicer6::Info MBMSModifedServicer6::theInfo = {
	MBMSModifedServicer6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MBMSModifiedServicev770ext::itemsInfo[1] = {
	&MBSFNClusterFrequencyr7::theInfo,
};
bool MBMSModifiedServicev770ext::itemsPres[1] = {
	0,
};
const MBMSModifiedServicev770ext::Info MBMSModifiedServicev770ext::theInfo = {
	MBMSModifiedServicev770ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *MBMSModifiedServiceLCRv7c0ext::itemsInfo[1] = {
	&MBMSPTMRBReleaseCauseLCRr7::theInfo,
};
bool MBMSModifiedServiceLCRv7c0ext::itemsPres[1] = {
	0,
};
const MBMSModifiedServiceLCRv7c0ext::Info MBMSModifiedServiceLCRv7c0ext::theInfo = {
	MBMSModifiedServiceLCRv7c0ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *MBMSMSCHSchedulingInfo::choicesInfo[1] = {
	&MBMSMSCHSchedulingInfoSchedulingPeriod32Offset::theInfo,
};
const MBMSMSCHSchedulingInfo::Info MBMSMSCHSchedulingInfo::theInfo = {
	MBMSMSCHSchedulingInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *MBMSMSCHConfigurationInfor6::itemsInfo[1] = {
	&MBMSMSCHSchedulingInfo::theInfo,
};
bool MBMSMSCHConfigurationInfor6::itemsPres[1] = {
	0,
};
const MBMSMSCHConfigurationInfor6::Info MBMSMSCHConfigurationInfor6::theInfo = {
	MBMSMSCHConfigurationInfor6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *MBMSNeighbouringCellSCCPCHr6::itemsInfo[1] = {
	&MBMSCommonPhyChIdentity::theInfo,
};
bool MBMSNeighbouringCellSCCPCHr6::itemsPres[1] = {
	1,
};
const MBMSNeighbouringCellSCCPCHr6::Info MBMSNeighbouringCellSCCPCHr6::theInfo = {
	MBMSNeighbouringCellSCCPCHr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MBMSNetworkStandardTimeInformationLCRv890ext::itemsInfo[1] = {
	&MBMSNetworkStandardTimeInformationLCRv890extNetworkStandardTime::theInfo,
};
bool MBMSNetworkStandardTimeInformationLCRv890ext::itemsPres[1] = {
	0,
};
const MBMSNetworkStandardTimeInformationLCRv890ext::Info MBMSNetworkStandardTimeInformationLCRv890ext::theInfo = {
	MBMSNetworkStandardTimeInformationLCRv890ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *MBMSPhyChInformationIMB384::itemsInfo[1] = {
	&MBMSCommonPhyChIdentity::theInfo,
};
bool MBMSPhyChInformationIMB384::itemsPres[1] = {
	1,
};
const MBMSPhyChInformationIMB384::Info MBMSPhyChInformationIMB384::theInfo = {
	MBMSPhyChInformationIMB384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MBMSPhyChInformationr6::itemsInfo[1] = {
	&MBMSCommonPhyChIdentity::theInfo,
};
bool MBMSPhyChInformationr6::itemsPres[1] = {
	1,
};
const MBMSPhyChInformationr6::Info MBMSPhyChInformationr6::theInfo = {
	MBMSPhyChInformationr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MBMSPhyChInformationr7::itemsInfo[1] = {
	&MBMSCommonPhyChIdentity::theInfo,
};
bool MBMSPhyChInformationr7::itemsPres[1] = {
	1,
};
const MBMSPhyChInformationr7::Info MBMSPhyChInformationr7::theInfo = {
	MBMSPhyChInformationr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MBMSPreferredFrequencyInfor6::itemsInfo[1] = {
	&MBMSPreferredFrequencyInfor6MbmsPreferredFrequency::theInfo,
};
bool MBMSPreferredFrequencyInfor6::itemsPres[1] = {
	0,
};
const MBMSPreferredFrequencyInfor6::Info MBMSPreferredFrequencyInfor6::theInfo = {
	MBMSPreferredFrequencyInfor6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *MBMSPTMRBInformationC::itemsInfo[1] = {
	&MBMSCommonRBIdentity::theInfo,
};
bool MBMSPTMRBInformationC::itemsPres[1] = {
	1,
};
const MBMSPTMRBInformationC::Info MBMSPTMRBInformationC::theInfo = {
	MBMSPTMRBInformationC::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MBMSPTMRBInformationN::itemsInfo[1] = {
	&MBMSShortTransmissionID::theInfo,
};
bool MBMSPTMRBInformationN::itemsPres[1] = {
	1,
};
const MBMSPTMRBInformationN::Info MBMSPTMRBInformationN::theInfo = {
	MBMSPTMRBInformationN::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MBMSSelectedServiceInfoStatus::choicesInfo[1] = {
	&MBMSSelectedServiceInfoStatusNone::theInfo,
};
const MBMSSelectedServiceInfoStatus::Info MBMSSelectedServiceInfoStatus::theInfo = {
	MBMSSelectedServiceInfoStatus::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *MBMSSelectedServiceInfo::itemsInfo[1] = {
	&MBMSSelectedServiceInfoStatus::theInfo,
};
bool MBMSSelectedServiceInfo::itemsPres[1] = {
	1,
};
const MBMSSelectedServiceInfo::Info MBMSSelectedServiceInfo::theInfo = {
	MBMSSelectedServiceInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MBMSSelectedServicesShort::itemsInfo[1] = {
	&MBMSSelectedServicesListShort::theInfo,
};
bool MBMSSelectedServicesShort::itemsPres[1] = {
	1,
};
const MBMSSelectedServicesShort::Info MBMSSelectedServicesShort::theInfo = {
	MBMSSelectedServicesShort::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MBMSServiceAccessInfor6::itemsInfo[1] = {
	&MBMSShortTransmissionID::theInfo,
};
bool MBMSServiceAccessInfor6::itemsPres[1] = {
	1,
};
const MBMSServiceAccessInfor6::Info MBMSServiceAccessInfor6::theInfo = {
	MBMSServiceAccessInfor6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MBMSServiceSchedulingInfor6::itemsInfo[1] = {
	&MBMSTransmissionIdentity::theInfo,
};
bool MBMSServiceSchedulingInfor6::itemsPres[1] = {
	1,
};
const MBMSServiceSchedulingInfor6::Info MBMSServiceSchedulingInfor6::theInfo = {
	MBMSServiceSchedulingInfor6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MBMSServiceTransmInfo::itemsInfo[1] = {
	&MBMSServiceTransmInfoStart::theInfo,
};
bool MBMSServiceTransmInfo::itemsPres[1] = {
	1,
};
const MBMSServiceTransmInfo::Info MBMSServiceTransmInfo::theInfo = {
	MBMSServiceTransmInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MBMSSIBType5SCCPCHr6::itemsInfo[1] = {
	&MBMSSCCPCHIdentity::theInfo,
};
bool MBMSSIBType5SCCPCHr6::itemsPres[1] = {
	1,
};
const MBMSSIBType5SCCPCHr6::Info MBMSSIBType5SCCPCHr6::theInfo = {
	MBMSSIBType5SCCPCHr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MBMSTimersAndCountersr6::itemsInfo[1] = {
	&T318::theInfo,
};
bool MBMSTimersAndCountersr6::itemsPres[1] = {
	0,
};
const MBMSTimersAndCountersr6::Info MBMSTimersAndCountersr6::theInfo = {
	MBMSTimersAndCountersr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *MBMSTranspChInfoForCCTrChr6::itemsInfo[1] = {
	&MBMSCommonCCTrChIdentity::theInfo,
};
bool MBMSTranspChInfoForCCTrChr6::itemsPres[1] = {
	1,
};
const MBMSTranspChInfoForCCTrChr6::Info MBMSTranspChInfoForCCTrChr6::theInfo = {
	MBMSTranspChInfoForCCTrChr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MBMSTranspChInfoForTrChr6::itemsInfo[1] = {
	&MBMSCommonTrChIdentity::theInfo,
};
bool MBMSTranspChInfoForTrChr6::itemsPres[1] = {
	1,
};
const MBMSTranspChInfoForTrChr6::Info MBMSTranspChInfoForTrChr6::theInfo = {
	MBMSTranspChInfoForTrChr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MBMSTrCHInformationCurr::itemsInfo[1] = {
	&MBMSCommonTrChIdentity::theInfo,
};
bool MBMSTrCHInformationCurr::itemsPres[1] = {
	0,
};
const MBMSTrCHInformationCurr::Info MBMSTrCHInformationCurr::theInfo = {
	MBMSTrCHInformationCurr::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *MBMSTrCHInformationNeighb::itemsInfo[1] = {
	&MBMSCommonTrChIdentity::theInfo,
};
bool MBMSTrCHInformationNeighb::itemsPres[1] = {
	0,
};
const MBMSTrCHInformationNeighb::Info MBMSTrCHInformationNeighb::theInfo = {
	MBMSTrCHInformationNeighb::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *MBMSTrCHInformationSIB5::itemsInfo[1] = {
	&MBMSTrCHInformationSIB5TranspChIdentity::theInfo,
};
bool MBMSTrCHInformationSIB5::itemsPres[1] = {
	0,
};
const MBMSTrCHInformationSIB5::Info MBMSTrCHInformationSIB5::theInfo = {
	MBMSTrCHInformationSIB5::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *MBMSUnmodifiedServicer6::itemsInfo[1] = {
	&MBMSTransmissionIdentity::theInfo,
};
bool MBMSUnmodifiedServicer6::itemsPres[1] = {
	0,
};
const MBMSUnmodifiedServicer6::Info MBMSUnmodifiedServicer6::theInfo = {
	MBMSUnmodifiedServicer6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *MBMSUnmodifiedServicev770ext::itemsInfo[1] = {
	&MBSFNClusterFrequencyr7::theInfo,
};
bool MBMSUnmodifiedServicev770ext::itemsPres[1] = {
	0,
};
const MBMSUnmodifiedServicev770ext::Info MBMSUnmodifiedServicev770ext::theInfo = {
	MBMSUnmodifiedServicev770ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *MBSFNservicesNotNotifiedr7::itemsInfo[1] = {
	&MBSFNservicesNotNotifiedr7notificationOfAllMBSFNServicesInTheBand::theInfo,
};
bool MBSFNservicesNotNotifiedr7::itemsPres[1] = {
	0,
};
const MBSFNservicesNotNotifiedr7::Info MBSFNservicesNotNotifiedr7::theInfo = {
	MBSFNservicesNotNotifiedr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *MBSFNInterFrequencyNeighbourr7::itemsInfo[1] = {
	&FrequencyInfo::theInfo,
};
bool MBSFNInterFrequencyNeighbourr7::itemsPres[1] = {
	1,
};
const MBSFNInterFrequencyNeighbourr7::Info MBSFNInterFrequencyNeighbourr7::theInfo = {
	MBSFNInterFrequencyNeighbourr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MBSFNInterFrequencyNeighbourv860ext::itemsInfo[1] = {
	&MBSFNInterFrequencyNeighbourv860extimb_Indication::theInfo,
};
bool MBSFNInterFrequencyNeighbourv860ext::itemsPres[1] = {
	0,
};
const MBSFNInterFrequencyNeighbourv860ext::Info MBSFNInterFrequencyNeighbourv860ext::theInfo = {
	MBSFNInterFrequencyNeighbourv860ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *MBSFNTDDTimeSlotInfo::itemsInfo[1] = {
	&TimeslotNumberLCRr4::theInfo,
};
bool MBSFNTDDTimeSlotInfo::itemsPres[1] = {
	1,
};
const MBSFNTDDTimeSlotInfo::Info MBSFNTDDTimeSlotInfo::theInfo = {
	MBSFNTDDTimeSlotInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MBSFNTDDTimeSlotInfoLCR::itemsInfo[1] = {
	&MBSFNTDDTimeSlotInfoLCRFrequencyIndex::theInfo,
};
bool MBSFNTDDTimeSlotInfoLCR::itemsPres[1] = {
	1,
};
const MBSFNTDDTimeSlotInfoLCR::Info MBSFNTDDTimeSlotInfoLCR::theInfo = {
	MBSFNTDDTimeSlotInfoLCR::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MBSFNTDMInfo::itemsInfo[1] = {
	&MBMSShortTransmissionID::theInfo,
};
bool MBSFNTDMInfo::itemsPres[1] = {
	1,
};
const MBSFNTDMInfo::Info MBSFNTDMInfo::theInfo = {
	MBSFNTDMInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

}
