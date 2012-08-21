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

const void *CNDomainInformation::itemsInfo[2] = {
	&CNDomainIdentity::theInfo,
	&NASSystemInformationGSMMAP::theInfo,
};
bool CNDomainInformation::itemsPres[2] = {
	1,
	1,
};
const CNDomainInformation::Info CNDomainInformation::theInfo = {
	CNDomainInformation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *CNDomainInformationFull::itemsInfo[3] = {
	&CNDomainIdentity::theInfo,
	&NASSystemInformationGSMMAP::theInfo,
	&CNDRXCycleLengthCoefficient::theInfo,
};
bool CNDomainInformationFull::itemsPres[3] = {
	1,
	1,
	1,
};
const CNDomainInformationFull::Info CNDomainInformationFull::theInfo = {
	CNDomainInformationFull::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *CNDomainSysInfoCnType::choicesInfo[2] = {
	&NASSystemInformationGSMMAP::theInfo,
	&NASSystemInformationANSI41::theInfo,
};
const CNDomainSysInfoCnType::Info CNDomainSysInfoCnType::theInfo = {
	CNDomainSysInfoCnType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *CNDomainSysInfo::itemsInfo[3] = {
	&CNDomainIdentity::theInfo,
	&CNDomainSysInfoCnType::theInfo,
	&CNDRXCycleLengthCoefficient::theInfo,
};
bool CNDomainSysInfo::itemsPres[3] = {
	1,
	1,
	1,
};
const CNDomainSysInfo::Info CNDomainSysInfo::theInfo = {
	CNDomainSysInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *PLMNIdentity::itemsInfo[2] = {
	&MCC::theInfo,
	&MNC::theInfo,
};
bool PLMNIdentity::itemsPres[2] = {
	1,
	1,
};
const PLMNIdentity::Info PLMNIdentity::theInfo = {
	PLMNIdentity::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *CNInformationInfo::itemsInfo[3] = {
	&PLMNIdentity::theInfo,
	&NASSystemInformationGSMMAP::theInfo,
	&CNDomainInformationList::theInfo,
};
bool CNInformationInfo::itemsPres[3] = {
	0,
	0,
	0,
};
const CNInformationInfo::Info CNInformationInfo::theInfo = {
	CNInformationInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *CNInformationInfor6::itemsInfo[4] = {
	&PLMNIdentity::theInfo,
	&NASSystemInformationGSMMAP::theInfo,
	&CNDomainInformationList::theInfo,
	&PLMNIdentity::theInfo,
};
bool CNInformationInfor6::itemsPres[4] = {
	0,
	0,
	0,
	0,
};
const CNInformationInfor6::Info CNInformationInfor6::theInfo = {
	CNInformationInfor6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 4, 0
};

const void *CNInformationInfoFull::itemsInfo[3] = {
	&PLMNIdentity::theInfo,
	&NASSystemInformationGSMMAP::theInfo,
	&CNDomainInformationListFull::theInfo,
};
bool CNInformationInfoFull::itemsPres[3] = {
	0,
	0,
	0,
};
const CNInformationInfoFull::Info CNInformationInfoFull::theInfo = {
	CNInformationInfoFull::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *GsmmapIDNNSRoutingbasisLocalPTMSI::itemsInfo[1] = {
	&RoutingParameter::theInfo,
};
bool GsmmapIDNNSRoutingbasisLocalPTMSI::itemsPres[1] = {
	1,
};
const GsmmapIDNNSRoutingbasisLocalPTMSI::Info GsmmapIDNNSRoutingbasisLocalPTMSI::theInfo = {
	GsmmapIDNNSRoutingbasisLocalPTMSI::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *GsmmapIDNNSRoutingbasisTMSIofsamePLMN::itemsInfo[1] = {
	&RoutingParameter::theInfo,
};
bool GsmmapIDNNSRoutingbasisTMSIofsamePLMN::itemsPres[1] = {
	1,
};
const GsmmapIDNNSRoutingbasisTMSIofsamePLMN::Info GsmmapIDNNSRoutingbasisTMSIofsamePLMN::theInfo = {
	GsmmapIDNNSRoutingbasisTMSIofsamePLMN::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *GsmmapIDNNSRoutingbasisTMSIofdifferentPLMN::itemsInfo[1] = {
	&RoutingParameter::theInfo,
};
bool GsmmapIDNNSRoutingbasisTMSIofdifferentPLMN::itemsPres[1] = {
	1,
};
const GsmmapIDNNSRoutingbasisTMSIofdifferentPLMN::Info GsmmapIDNNSRoutingbasisTMSIofdifferentPLMN::theInfo = {
	GsmmapIDNNSRoutingbasisTMSIofdifferentPLMN::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *GsmmapIDNNSRoutingbasisIMSIresponsetopaging::itemsInfo[1] = {
	&RoutingParameter::theInfo,
};
bool GsmmapIDNNSRoutingbasisIMSIresponsetopaging::itemsPres[1] = {
	1,
};
const GsmmapIDNNSRoutingbasisIMSIresponsetopaging::Info GsmmapIDNNSRoutingbasisIMSIresponsetopaging::theInfo = {
	GsmmapIDNNSRoutingbasisIMSIresponsetopaging::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *GsmmapIDNNSRoutingbasisIMSIcauseUEinitiatedEvent::itemsInfo[1] = {
	&RoutingParameter::theInfo,
};
bool GsmmapIDNNSRoutingbasisIMSIcauseUEinitiatedEvent::itemsPres[1] = {
	1,
};
const GsmmapIDNNSRoutingbasisIMSIcauseUEinitiatedEvent::Info GsmmapIDNNSRoutingbasisIMSIcauseUEinitiatedEvent::theInfo = {
	GsmmapIDNNSRoutingbasisIMSIcauseUEinitiatedEvent::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *GsmmapIDNNSRoutingbasisIMEI::itemsInfo[1] = {
	&RoutingParameter::theInfo,
};
bool GsmmapIDNNSRoutingbasisIMEI::itemsPres[1] = {
	1,
};
const GsmmapIDNNSRoutingbasisIMEI::Info GsmmapIDNNSRoutingbasisIMEI::theInfo = {
	GsmmapIDNNSRoutingbasisIMEI::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *GsmmapIDNNSRoutingbasisSpare2::itemsInfo[1] = {
	&RoutingParameter::theInfo,
};
bool GsmmapIDNNSRoutingbasisSpare2::itemsPres[1] = {
	1,
};
const GsmmapIDNNSRoutingbasisSpare2::Info GsmmapIDNNSRoutingbasisSpare2::theInfo = {
	GsmmapIDNNSRoutingbasisSpare2::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *GsmmapIDNNSRoutingbasisSpare1::itemsInfo[1] = {
	&RoutingParameter::theInfo,
};
bool GsmmapIDNNSRoutingbasisSpare1::itemsPres[1] = {
	1,
};
const GsmmapIDNNSRoutingbasisSpare1::Info GsmmapIDNNSRoutingbasisSpare1::theInfo = {
	GsmmapIDNNSRoutingbasisSpare1::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *GsmmapIDNNSRoutingbasis::choicesInfo[8] = {
	&GsmmapIDNNSRoutingbasisLocalPTMSI::theInfo,
	&GsmmapIDNNSRoutingbasisTMSIofsamePLMN::theInfo,
	&GsmmapIDNNSRoutingbasisTMSIofdifferentPLMN::theInfo,
	&GsmmapIDNNSRoutingbasisIMSIresponsetopaging::theInfo,
	&GsmmapIDNNSRoutingbasisIMSIcauseUEinitiatedEvent::theInfo,
	&GsmmapIDNNSRoutingbasisIMEI::theInfo,
	&GsmmapIDNNSRoutingbasisSpare2::theInfo,
	&GsmmapIDNNSRoutingbasisSpare1::theInfo,
};
const GsmmapIDNNSRoutingbasis::Info GsmmapIDNNSRoutingbasis::theInfo = {
	GsmmapIDNNSRoutingbasis::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	7
};

const void *GsmmapIDNNS::itemsInfo[2] = {
	&GsmmapIDNNSRoutingbasis::theInfo,
	&GsmmapIDNNSDummy::theInfo,
};
bool GsmmapIDNNS::itemsPres[2] = {
	1,
	1,
};
const GsmmapIDNNS::Info GsmmapIDNNS::theInfo = {
	GsmmapIDNNS::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *IntraDomainNasNodeSelectorVersionRelease99CnType::choicesInfo[2] = {
	&GsmmapIDNNS::theInfo,
	&Ansi41IDNNS::theInfo,
};
const IntraDomainNasNodeSelectorVersionRelease99CnType::Info IntraDomainNasNodeSelectorVersionRelease99CnType::theInfo = {
	IntraDomainNasNodeSelectorVersionRelease99CnType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
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

const void *IntraDomainNasNodeSelectorVersionLater::itemsInfo[1] = {
	&IntraDomainNasNodeSelectorVersionLaterFuturecoding::theInfo,
};
bool IntraDomainNasNodeSelectorVersionLater::itemsPres[1] = {
	1,
};
const IntraDomainNasNodeSelectorVersionLater::Info IntraDomainNasNodeSelectorVersionLater::theInfo = {
	IntraDomainNasNodeSelectorVersionLater::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *IntraDomainNasNodeSelectorVersion::choicesInfo[2] = {
	&IntraDomainNasNodeSelectorVersionRelease99::theInfo,
	&IntraDomainNasNodeSelectorVersionLater::theInfo,
};
const IntraDomainNasNodeSelectorVersion::Info IntraDomainNasNodeSelectorVersion::theInfo = {
	IntraDomainNasNodeSelectorVersion::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
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

const void *LAI::itemsInfo[2] = {
	&PLMNIdentity::theInfo,
	&LAILac::theInfo,
};
bool LAI::itemsPres[2] = {
	1,
	1,
};
const LAI::Info LAI::theInfo = {
	LAI::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *LocationRegistrationParameters::choicesInfo[2] = {
	&LocationRegistrationParametersNoRestriction::theInfo,
	&LocationRegistrationAccessClassBarredList::theInfo,
};
const LocationRegistrationParameters::Info LocationRegistrationParameters::theInfo = {
	LocationRegistrationParameters::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *PLMNIdentityWithOptionalMCCr6::itemsInfo[2] = {
	&MCC::theInfo,
	&MNC::theInfo,
};
bool PLMNIdentityWithOptionalMCCr6::itemsPres[2] = {
	0,
	1,
};
const PLMNIdentityWithOptionalMCCr6::Info PLMNIdentityWithOptionalMCCr6::theInfo = {
	PLMNIdentityWithOptionalMCCr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *MultiplePLMNListr6::itemsInfo[2] = {
	&MultiplePLMNListr6MibPLMNIdentity::theInfo,
	&MultiplePLMNListr6MultiplePLMNs::theInfo,
};
bool MultiplePLMNListr6::itemsPres[2] = {
	1,
	1,
};
const MultiplePLMNListr6::Info MultiplePLMNListr6::theInfo = {
	MultiplePLMNListr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *PagingPermissionWithAccessControlParameters::itemsInfo[3] = {
	&PagingPermissionWithAccessControlParameterspagingResponseRestrictionIndicator::theInfo,
	&PagingPermissionWithAccessControlParameterslocationRegistrationRestrictionIndicator::theInfo,
	&LocationRegistrationParameters::theInfo,
};
bool PagingPermissionWithAccessControlParameters::itemsPres[3] = {
	1,
	1,
	1,
};
const PagingPermissionWithAccessControlParameters::Info PagingPermissionWithAccessControlParameters::theInfo = {
	PagingPermissionWithAccessControlParameters::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *PagingPermissionWithAccessControlList::itemsInfo[5] = {
	&PagingPermissionWithAccessControlParameters::theInfo,
	&PagingPermissionWithAccessControlParameters::theInfo,
	&PagingPermissionWithAccessControlParameters::theInfo,
	&PagingPermissionWithAccessControlParameters::theInfo,
	&PagingPermissionWithAccessControlParameters::theInfo,
};
bool PagingPermissionWithAccessControlList::itemsPres[5] = {
	0,
	0,
	0,
	0,
	0,
};
const PagingPermissionWithAccessControlList::Info PagingPermissionWithAccessControlList::theInfo = {
	PagingPermissionWithAccessControlList::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 5, 0
};

const void *PagingPermissionWithAccessControlForSharedNetwork::choicesInfo[2] = {
	&PagingPermissionWithAccessControlList::theInfo,
	&PagingPermissionWithAccessControlParameters::theInfo,
};
const PagingPermissionWithAccessControlForSharedNetwork::Info PagingPermissionWithAccessControlForSharedNetwork::theInfo = {
	PagingPermissionWithAccessControlForSharedNetwork::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *PLMNTypeGsmMAP::itemsInfo[1] = {
	&PLMNIdentity::theInfo,
};
bool PLMNTypeGsmMAP::itemsPres[1] = {
	1,
};
const PLMNTypeGsmMAP::Info PLMNTypeGsmMAP::theInfo = {
	PLMNTypeGsmMAP::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PLMNTypeAnsi41::itemsInfo[4] = {
	&PREV::theInfo,
	&MinPREV::theInfo,
	&SID::theInfo,
	&NID::theInfo,
};
bool PLMNTypeAnsi41::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const PLMNTypeAnsi41::Info PLMNTypeAnsi41::theInfo = {
	PLMNTypeAnsi41::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 0, 0
};

const void *PLMNTypeGsmMAPandANSI41::itemsInfo[5] = {
	&PLMNIdentity::theInfo,
	&PREV::theInfo,
	&MinPREV::theInfo,
	&SID::theInfo,
	&NID::theInfo,
};
bool PLMNTypeGsmMAPandANSI41::itemsPres[5] = {
	1,
	1,
	1,
	1,
	1,
};
const PLMNTypeGsmMAPandANSI41::Info PLMNTypeGsmMAPandANSI41::theInfo = {
	PLMNTypeGsmMAPandANSI41::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 0, 0
};

const void *PLMNType::choicesInfo[4] = {
	&PLMNTypeGsmMAP::theInfo,
	&PLMNTypeAnsi41::theInfo,
	&PLMNTypeGsmMAPandANSI41::theInfo,
	&PLMNTypeSpare::theInfo,
};
const PLMNType::Info PLMNType::theInfo = {
	PLMNType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	3
};

const void *RABIdentity::choicesInfo[2] = {
	&RABIdentityGsmMAPRABIdentity::theInfo,
	&RABIdentityAnsi41RABIdentity::theInfo,
};
const RABIdentity::Info RABIdentity::theInfo = {
	RABIdentity::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *RAI::itemsInfo[2] = {
	&LAI::theInfo,
	&RoutingAreaCode::theInfo,
};
bool RAI::itemsPres[2] = {
	1,
	1,
};
const RAI::Info RAI::theInfo = {
	RAI::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *CellBarredBarred::itemsInfo[2] = {
	&AllowedIndicator::theInfo,
	&TBarred::theInfo,
};
bool CellBarredBarred::itemsPres[2] = {
	1,
	1,
};
const CellBarredBarred::Info CellBarredBarred::theInfo = {
	CellBarredBarred::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *CellBarred::choicesInfo[2] = {
	&CellBarredBarred::theInfo,
	&CellBarredNotBarred::theInfo,
};
const CellBarred::Info CellBarred::theInfo = {
	CellBarred::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *CellAccessRestriction::itemsInfo[4] = {
	&CellBarred::theInfo,
	&ReservedIndicator::theInfo,
	&ReservedIndicator::theInfo,
	&AccessClassBarredList::theInfo,
};
bool CellAccessRestriction::itemsPres[4] = {
	1,
	1,
	1,
	0,
};
const CellAccessRestriction::Info CellAccessRestriction::theInfo = {
	CellAccessRestriction::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 1, 0
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

const void *MappingFunctionParameter::itemsInfo[4] = {
	&MappingFunctionType::theInfo,
	&MapParameter::theInfo,
	&MapParameter::theInfo,
	&UpperLimit::theInfo,
};
bool MappingFunctionParameter::itemsPres[4] = {
	1,
	0,
	1,
	0,
};
const MappingFunctionParameter::Info MappingFunctionParameter::theInfo = {
	MappingFunctionParameter::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
};

const void *Mapping::itemsInfo[2] = {
	&RAT::theInfo,
	&MappingFunctionParameterList::theInfo,
};
bool Mapping::itemsPres[2] = {
	1,
	1,
};
const Mapping::Info Mapping::theInfo = {
	Mapping::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *CellSelectReselectInfoSIB34CellSelectQualityMeasureCpichEcN0::itemsInfo[1] = {
	&QHystS::theInfo,
};
bool CellSelectReselectInfoSIB34CellSelectQualityMeasureCpichEcN0::itemsPres[1] = {
	0,
};
const CellSelectReselectInfoSIB34CellSelectQualityMeasureCpichEcN0::Info CellSelectReselectInfoSIB34CellSelectQualityMeasureCpichEcN0::theInfo = {
	CellSelectReselectInfoSIB34CellSelectQualityMeasureCpichEcN0::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *CellSelectReselectInfoSIB34CellSelectQualityMeasure::choicesInfo[2] = {
	&CellSelectReselectInfoSIB34CellSelectQualityMeasureCpichEcN0::theInfo,
	&CellSelectReselectInfoSIB34CellSelectQualityMeasureCpichRSCP::theInfo,
};
const CellSelectReselectInfoSIB34CellSelectQualityMeasure::Info CellSelectReselectInfoSIB34CellSelectQualityMeasure::theInfo = {
	CellSelectReselectInfoSIB34CellSelectQualityMeasure::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *RATFDDInfo::itemsInfo[4] = {
	&RATIdentifier::theInfo,
	&SSearchQual::theInfo,
	&SSearchRXLEV::theInfo,
	&SSearchQual::theInfo,
};
bool RATFDDInfo::itemsPres[4] = {
	1,
	1,
	0,
	1,
};
const RATFDDInfo::Info RATFDDInfo::theInfo = {
	RATFDDInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 1, 0
};

const void *CellSelectReselectInfoSIB34ModeSpecificInfoFdd::itemsInfo[6] = {
	&SSearchQual::theInfo,
	&SSearchQual::theInfo,
	&SSearchRXLEV::theInfo,
	&RATFDDInfoList::theInfo,
	&QQualMin::theInfo,
	&QRxlevMin::theInfo,
};
bool CellSelectReselectInfoSIB34ModeSpecificInfoFdd::itemsPres[6] = {
	0,
	0,
	0,
	0,
	1,
	1,
};
const CellSelectReselectInfoSIB34ModeSpecificInfoFdd::Info CellSelectReselectInfoSIB34ModeSpecificInfoFdd::theInfo = {
	CellSelectReselectInfoSIB34ModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 4, 0
};

const void *RATTDDInfo::itemsInfo[4] = {
	&RATIdentifier::theInfo,
	&SSearchRXLEV::theInfo,
	&SSearchRXLEV::theInfo,
	&SSearchRXLEV::theInfo,
};
bool RATTDDInfo::itemsPres[4] = {
	1,
	1,
	0,
	1,
};
const RATTDDInfo::Info RATTDDInfo::theInfo = {
	RATTDDInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 1, 0
};

const void *CellSelectReselectInfoSIB34ModeSpecificInfoTdd::itemsInfo[5] = {
	&SSearchRXLEV::theInfo,
	&SSearchRXLEV::theInfo,
	&SSearchRXLEV::theInfo,
	&RATTDDInfoList::theInfo,
	&QRxlevMin::theInfo,
};
bool CellSelectReselectInfoSIB34ModeSpecificInfoTdd::itemsPres[5] = {
	0,
	0,
	0,
	0,
	1,
};
const CellSelectReselectInfoSIB34ModeSpecificInfoTdd::Info CellSelectReselectInfoSIB34ModeSpecificInfoTdd::theInfo = {
	CellSelectReselectInfoSIB34ModeSpecificInfoTdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 4, 0
};

const void *CellSelectReselectInfoSIB34ModeSpecificInfo::choicesInfo[2] = {
	&CellSelectReselectInfoSIB34ModeSpecificInfoFdd::theInfo,
	&CellSelectReselectInfoSIB34ModeSpecificInfoTdd::theInfo,
};
const CellSelectReselectInfoSIB34ModeSpecificInfo::Info CellSelectReselectInfoSIB34ModeSpecificInfo::theInfo = {
	CellSelectReselectInfoSIB34ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *NCRTCRMaxHyst::itemsInfo[2] = {
	&NCRTCRMaxHystNCR::theInfo,
	&TCRMaxHyst::theInfo,
};
bool NCRTCRMaxHyst::itemsPres[2] = {
	0,
	1,
};
const NCRTCRMaxHyst::Info NCRTCRMaxHyst::theInfo = {
	NCRTCRMaxHyst::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *TCRMax::choicesInfo[6] = {
	&TCRMaxNotUsed::theInfo,
	&NCRTCRMaxHyst::theInfo,
	&NCRTCRMaxHyst::theInfo,
	&NCRTCRMaxHyst::theInfo,
	&NCRTCRMaxHyst::theInfo,
	&NCRTCRMaxHyst::theInfo,
};
const TCRMax::Info TCRMax::theInfo = {
	TCRMax::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	5
};

const void *HCSServingCellInformation::itemsInfo[3] = {
	&HCSPRIO::theInfo,
	&QHCS::theInfo,
	&TCRMax::theInfo,
};
bool HCSServingCellInformation::itemsPres[3] = {
	0,
	0,
	0,
};
const HCSServingCellInformation::Info HCSServingCellInformation::theInfo = {
	HCSServingCellInformation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *CellSelectReselectInfoSIB34::itemsInfo[7] = {
	&MappingInfo::theInfo,
	&CellSelectReselectInfoSIB34CellSelectQualityMeasure::theInfo,
	&CellSelectReselectInfoSIB34ModeSpecificInfo::theInfo,
	&QHystS::theInfo,
	&TReselectionS::theInfo,
	&HCSServingCellInformation::theInfo,
	&MaxAllowedULTXPower::theInfo,
};
bool CellSelectReselectInfoSIB34::itemsPres[7] = {
	0,
	1,
	1,
	1,
	1,
	0,
	1,
};
const CellSelectReselectInfoSIB34::Info CellSelectReselectInfoSIB34::theInfo = {
	CellSelectReselectInfoSIB34::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	7, 2, 0
};

const void *FrequencyInfoFDD::itemsInfo[2] = {
	&UARFCN::theInfo,
	&UARFCN::theInfo,
};
bool FrequencyInfoFDD::itemsPres[2] = {
	0,
	1,
};
const FrequencyInfoFDD::Info FrequencyInfoFDD::theInfo = {
	FrequencyInfoFDD::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
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

const void *FrequencyInfoModeSpecificInfo::choicesInfo[2] = {
	&FrequencyInfoFDD::theInfo,
	&FrequencyInfoTDD::theInfo,
};
const FrequencyInfoModeSpecificInfo::Info FrequencyInfoModeSpecificInfo::theInfo = {
	FrequencyInfoModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
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

const void *CSGPSCSplitInfo::itemsInfo[3] = {
	&CSGPSCSplitInfoStartPSC::theInfo,
	&CSGPSCSplitInfonumberOfPSCs::theInfo,
	&CSGPSCSplitInfoPscRange2Offset::theInfo,
};
bool CSGPSCSplitInfo::itemsPres[3] = {
	1,
	1,
	0,
};
const CSGPSCSplitInfo::Info CSGPSCSplitInfo::theInfo = {
	CSGPSCSplitInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};

const void *DomainSpecificAccessRestrictionv670extRestriction::itemsInfo[1] = {
	&AccessClassBarredList::theInfo,
};
bool DomainSpecificAccessRestrictionv670extRestriction::itemsPres[1] = {
	0,
};
const DomainSpecificAccessRestrictionv670extRestriction::Info DomainSpecificAccessRestrictionv670extRestriction::theInfo = {
	DomainSpecificAccessRestrictionv670extRestriction::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DomainSpecificAccessRestrictionv670ext::choicesInfo[2] = {
	&DomainSpecificAccessRestrictionv670extNoRestriction::theInfo,
	&DomainSpecificAccessRestrictionv670extRestriction::theInfo,
};
const DomainSpecificAccessRestrictionv670ext::Info DomainSpecificAccessRestrictionv670ext::theInfo = {
	DomainSpecificAccessRestrictionv670ext::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DomainSpecificAccessRestrictionParamv670ext::itemsInfo[2] = {
	&DomainSpecificAccessRestrictionv670ext::theInfo,
	&DomainSpecificAccessRestrictionv670ext::theInfo,
};
bool DomainSpecificAccessRestrictionParamv670ext::itemsPres[2] = {
	1,
	1,
};
const DomainSpecificAccessRestrictionParamv670ext::Info DomainSpecificAccessRestrictionParamv670ext::theInfo = {
	DomainSpecificAccessRestrictionParamv670ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *DomainSpecificAccessRestrictionListv670ext::itemsInfo[5] = {
	&DomainSpecificAccessRestrictionParamv670ext::theInfo,
	&DomainSpecificAccessRestrictionParamv670ext::theInfo,
	&DomainSpecificAccessRestrictionParamv670ext::theInfo,
	&DomainSpecificAccessRestrictionParamv670ext::theInfo,
	&DomainSpecificAccessRestrictionParamv670ext::theInfo,
};
bool DomainSpecificAccessRestrictionListv670ext::itemsPres[5] = {
	0,
	0,
	0,
	0,
	0,
};
const DomainSpecificAccessRestrictionListv670ext::Info DomainSpecificAccessRestrictionListv670ext::theInfo = {
	DomainSpecificAccessRestrictionListv670ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 5, 0
};

const void *DomainSpecificAccessRestrictionForSharedNetworkv670ext::choicesInfo[2] = {
	&DomainSpecificAccessRestrictionListv670ext::theInfo,
	&DomainSpecificAccessRestrictionParamv670ext::theInfo,
};
const DomainSpecificAccessRestrictionForSharedNetworkv670ext::Info DomainSpecificAccessRestrictionForSharedNetworkv670ext::theInfo = {
	DomainSpecificAccessRestrictionForSharedNetworkv670ext::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
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

const void *PriorityLevelRadioAccessTechnologyUtraFDD::itemsInfo[0] = {
};
bool PriorityLevelRadioAccessTechnologyUtraFDD::itemsPres[0] = {
};
const PriorityLevelRadioAccessTechnologyUtraFDD::Info PriorityLevelRadioAccessTechnologyUtraFDD::theInfo = {
	PriorityLevelRadioAccessTechnologyUtraFDD::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *PriorityLevelRadioAccessTechnologyUtraTDD::itemsInfo[0] = {
};
bool PriorityLevelRadioAccessTechnologyUtraTDD::itemsPres[0] = {
};
const PriorityLevelRadioAccessTechnologyUtraTDD::Info PriorityLevelRadioAccessTechnologyUtraTDD::theInfo = {
	PriorityLevelRadioAccessTechnologyUtraTDD::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *PriorityLevelRadioAccessTechnologyEutra::itemsInfo[0] = {
};
bool PriorityLevelRadioAccessTechnologyEutra::itemsPres[0] = {
};
const PriorityLevelRadioAccessTechnologyEutra::Info PriorityLevelRadioAccessTechnologyEutra::theInfo = {
	PriorityLevelRadioAccessTechnologyEutra::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *GSMCellGroupFollowingARFCNsEquallySpacedARFCNs::itemsInfo[2] = {
	&GSMCellGroupFollowingARFCNsEquallySpacedARFCNsArfcnSpacing::theInfo,
	&GSMCellGroupFollowingARFCNsEquallySpacedARFCNsNumberOfFollowingARFCNs::theInfo,
};
bool GSMCellGroupFollowingARFCNsEquallySpacedARFCNs::itemsPres[2] = {
	1,
	1,
};
const GSMCellGroupFollowingARFCNsEquallySpacedARFCNs::Info GSMCellGroupFollowingARFCNsEquallySpacedARFCNs::theInfo = {
	GSMCellGroupFollowingARFCNsEquallySpacedARFCNs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *GSMCellGroupFollowingARFCNsContinuousRangeOfARFCNs::itemsInfo[1] = {
	&BCCHARFCN::theInfo,
};
bool GSMCellGroupFollowingARFCNsContinuousRangeOfARFCNs::itemsPres[1] = {
	1,
};
const GSMCellGroupFollowingARFCNsContinuousRangeOfARFCNs::Info GSMCellGroupFollowingARFCNsContinuousRangeOfARFCNs::theInfo = {
	GSMCellGroupFollowingARFCNsContinuousRangeOfARFCNs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *GSMCellGroupFollowingARFCNs::choicesInfo[4] = {
	&GSMCellGroupFollowingARFCNsExplicitListOfARFCNs::theInfo,
	&GSMCellGroupFollowingARFCNsEquallySpacedARFCNs::theInfo,
	&GSMCellGroupFollowingARFCNsVariableBitMapOfARFCNs::theInfo,
	&GSMCellGroupFollowingARFCNsContinuousRangeOfARFCNs::theInfo,
};
const GSMCellGroupFollowingARFCNs::Info GSMCellGroupFollowingARFCNs::theInfo = {
	GSMCellGroupFollowingARFCNs::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	3
};

const void *GSMCellGroup::itemsInfo[3] = {
	&BCCHARFCN::theInfo,
	&GSMCellGroupbandIndicator::theInfo,
	&GSMCellGroupFollowingARFCNs::theInfo,
};
bool GSMCellGroup::itemsPres[3] = {
	1,
	1,
	1,
};
const GSMCellGroup::Info GSMCellGroup::theInfo = {
	GSMCellGroup::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *PriorityLevelRadioAccessTechnologyGsm::itemsInfo[1] = {
	&GSMCellGroup::theInfo,
};
bool PriorityLevelRadioAccessTechnologyGsm::itemsPres[1] = {
	1,
};
const PriorityLevelRadioAccessTechnologyGsm::Info PriorityLevelRadioAccessTechnologyGsm::theInfo = {
	PriorityLevelRadioAccessTechnologyGsm::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PriorityLevelRadioAccessTechnology::choicesInfo[4] = {
	&PriorityLevelRadioAccessTechnologyUtraFDD::theInfo,
	&PriorityLevelRadioAccessTechnologyUtraTDD::theInfo,
	&PriorityLevelRadioAccessTechnologyEutra::theInfo,
	&PriorityLevelRadioAccessTechnologyGsm::theInfo,
};
const PriorityLevelRadioAccessTechnology::Info PriorityLevelRadioAccessTechnology::theInfo = {
	PriorityLevelRadioAccessTechnology::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	3
};

const void *PriorityLevel::itemsInfo[2] = {
	&PriorityLevelPriority::theInfo,
	&PriorityLevelRadioAccessTechnology::theInfo,
};
bool PriorityLevel::itemsPres[2] = {
	0,
	1,
};
const PriorityLevel::Info PriorityLevel::theInfo = {
	PriorityLevel::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *DedicatedPriorityInformationActionConfigureDedicatedPriorities::itemsInfo[3] = {
	&T322::theInfo,
	&PriorityLevelList::theInfo,
	&DedicatedPriorityInformationActionConfigureDedicatedPrioritiesEutraDetection::theInfo,
};
bool DedicatedPriorityInformationActionConfigureDedicatedPriorities::itemsPres[3] = {
	0,
	0,
	1,
};
const DedicatedPriorityInformationActionConfigureDedicatedPriorities::Info DedicatedPriorityInformationActionConfigureDedicatedPriorities::theInfo = {
	DedicatedPriorityInformationActionConfigureDedicatedPriorities::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *DedicatedPriorityInformationAction::choicesInfo[2] = {
	&DedicatedPriorityInformationActionClearDedicatedPriorities::theInfo,
	&DedicatedPriorityInformationActionConfigureDedicatedPriorities::theInfo,
};
const DedicatedPriorityInformationAction::Info DedicatedPriorityInformationAction::theInfo = {
	DedicatedPriorityInformationAction::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
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

const void *BackoffControlParams::itemsInfo[7] = {
	&NAPRetransMax::theInfo,
	&NAccessFails::theInfo,
	&NFBONoAICH::theInfo,
	&NSBOBusy::theInfo,
	&NFBOAllBusy::theInfo,
	&NFBOMismatch::theInfo,
	&TCPCH::theInfo,
};
bool BackoffControlParams::itemsPres[7] = {
	1,
	1,
	1,
	1,
	1,
	1,
	1,
};
const BackoffControlParams::Info BackoffControlParams::theInfo = {
	BackoffControlParams::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	7, 0, 0
};

const void *CapabilityUpdateRequirement::itemsInfo[3] = {
	&CapabilityUpdateRequirementUeRadioCapabilityFDDUpdateRequirement::theInfo,
	&CapabilityUpdateRequirementUeRadioCapabilityTDDUpdateRequirement::theInfo,
	&SystemSpecificCapUpdateReqList::theInfo,
};
bool CapabilityUpdateRequirement::itemsPres[3] = {
	1,
	1,
	0,
};
const CapabilityUpdateRequirement::Info CapabilityUpdateRequirement::theInfo = {
	CapabilityUpdateRequirement::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
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

const void *CapabilityUpdateRequirementr4::itemsInfo[4] = {
	&CapabilityUpdateRequirementr4UeRadioCapabilityFDDUpdateRequirementFDD::theInfo,
	&CapabilityUpdateRequirementr4UeRadioCapabilityTDDUpdateRequirementTDD384::theInfo,
	&CapabilityUpdateRequirementr4UeRadioCapabilityTDDUpdateRequirementTDD128::theInfo,
	&SystemSpecificCapUpdateReqList::theInfo,
};
bool CapabilityUpdateRequirementr4::itemsPres[4] = {
	1,
	1,
	1,
	0,
};
const CapabilityUpdateRequirementr4::Info CapabilityUpdateRequirementr4::theInfo = {
	CapabilityUpdateRequirementr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 1, 0
};

const void *CapabilityUpdateRequirementr5::itemsInfo[4] = {
	&CapabilityUpdateRequirementr5UeRadioCapabilityFDDUpdateRequirementFDD::theInfo,
	&CapabilityUpdateRequirementr5UeRadioCapabilityTDDUpdateRequirementTDD384::theInfo,
	&CapabilityUpdateRequirementr5UeRadioCapabilityTDDUpdateRequirementTDD128::theInfo,
	&SystemSpecificCapUpdateReqListr5::theInfo,
};
bool CapabilityUpdateRequirementr5::itemsPres[4] = {
	1,
	1,
	1,
	0,
};
const CapabilityUpdateRequirementr5::Info CapabilityUpdateRequirementr5::theInfo = {
	CapabilityUpdateRequirementr5::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 1, 0
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

const void *CapabilityUpdateRequirementr7::itemsInfo[5] = {
	&CapabilityUpdateRequirementr7UeRadioCapabilityFDDUpdateRequirementFDD::theInfo,
	&CapabilityUpdateRequirementr7UeRadioCapabilityTDDUpdateRequirementTDD384::theInfo,
	&CapabilityUpdateRequirementr7UeRadioCapabilityTDDUpdateRequirementTDD768::theInfo,
	&CapabilityUpdateRequirementr7UeRadioCapabilityTDDUpdateRequirementTDD128::theInfo,
	&SystemSpecificCapUpdateReqListr5::theInfo,
};
bool CapabilityUpdateRequirementr7::itemsPres[5] = {
	1,
	1,
	1,
	1,
	0,
};
const CapabilityUpdateRequirementr7::Info CapabilityUpdateRequirementr7::theInfo = {
	CapabilityUpdateRequirementr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 1, 0
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

const void *CapabilityUpdateRequirementr8::itemsInfo[5] = {
	&CapabilityUpdateRequirementr8UeRadioCapabilityFDDUpdateRequirementFDD::theInfo,
	&CapabilityUpdateRequirementr8UeRadioCapabilityTDDUpdateRequirementTDD384::theInfo,
	&CapabilityUpdateRequirementr8UeRadioCapabilityTDDUpdateRequirementTDD768::theInfo,
	&CapabilityUpdateRequirementr8UeRadioCapabilityTDDUpdateRequirementTDD128::theInfo,
	&SystemSpecificCapUpdateReqListr8::theInfo,
};
bool CapabilityUpdateRequirementr8::itemsPres[5] = {
	1,
	1,
	1,
	1,
	0,
};
const CapabilityUpdateRequirementr8::Info CapabilityUpdateRequirementr8::theInfo = {
	CapabilityUpdateRequirementr8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 1, 0
};

const void *CipheringModeCommand::choicesInfo[2] = {
	&CipheringAlgorithm::theInfo,
	&CipheringModeCommandDummy::theInfo,
};
const CipheringModeCommand::Info CipheringModeCommand::theInfo = {
	CipheringModeCommand::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
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

const void *RBActivationTimeInfo::itemsInfo[2] = {
	&RBIdentity::theInfo,
	&RLCSequenceNumber::theInfo,
};
bool RBActivationTimeInfo::itemsPres[2] = {
	1,
	1,
};
const RBActivationTimeInfo::Info RBActivationTimeInfo::theInfo = {
	RBActivationTimeInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *CipheringModeInfo::itemsInfo[3] = {
	&CipheringModeCommand::theInfo,
	&ActivationTime::theInfo,
	&RBActivationTimeInfoList::theInfo,
};
bool CipheringModeInfo::itemsPres[3] = {
	1,
	0,
	0,
};
const CipheringModeInfo::Info CipheringModeInfo::theInfo = {
	CipheringModeInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *CipheringModeInfor7::itemsInfo[3] = {
	&CipheringModeCommandr7::theInfo,
	&ActivationTime::theInfo,
	&RBActivationTimeInfoList::theInfo,
};
bool CipheringModeInfor7::itemsPres[3] = {
	1,
	0,
	0,
};
const CipheringModeInfor7::Info CipheringModeInfor7::theInfo = {
	CipheringModeInfor7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *CNPagedUEIdentity::choicesInfo[8] = {
	&IMSIGSMMAP::theInfo,
	&TMSIGSMMAP::theInfo,
	&PTMSIGSMMAP::theInfo,
	&IMSIDS41::theInfo,
	&TMSIDS41::theInfo,
	&CNPagedUEIdentitySpare3::theInfo,
	&CNPagedUEIdentitySpare2::theInfo,
	&CNPagedUEIdentitySpare1::theInfo,
};
const CNPagedUEIdentity::Info CNPagedUEIdentity::theInfo = {
	CNPagedUEIdentity::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	7
};

const void *GSMMeasurements::itemsInfo[3] = {
	&GSMMeasurementsGsm900::theInfo,
	&GSMMeasurementsDcs1800::theInfo,
	&GSMMeasurementsGsm1900::theInfo,
};
bool GSMMeasurements::itemsPres[3] = {
	1,
	1,
	1,
};
const GSMMeasurements::Info GSMMeasurements::theInfo = {
	GSMMeasurements::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *CompressedModeMeasCapability::itemsInfo[4] = {
	&CompressedModeMeasCapabilityFddMeasurements::theInfo,
	&CompressedModeMeasCapabilityTddMeasurements::theInfo,
	&GSMMeasurements::theInfo,
	&CompressedModeMeasCapabilityMultiCarrierMeasurements::theInfo,
};
bool CompressedModeMeasCapability::itemsPres[4] = {
	1,
	0,
	0,
	0,
};
const CompressedModeMeasCapability::Info CompressedModeMeasCapability::theInfo = {
	CompressedModeMeasCapability::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 3, 0
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

const void *CompressedModeMeasCapabEUTRA::itemsInfo[2] = {
	&RadioFrequencyBandEUTRA::theInfo,
	&CompressedModeMeasCapabEUTRACompressedMode::theInfo,
};
bool CompressedModeMeasCapabEUTRA::itemsPres[2] = {
	1,
	1,
};
const CompressedModeMeasCapabEUTRA::Info CompressedModeMeasCapabEUTRA::theInfo = {
	CompressedModeMeasCapabEUTRA::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *CompressedModeMeasCapabFDD::itemsInfo[3] = {
	&RadioFrequencyBandFDD::theInfo,
	&CompressedModeMeasCapabFDDDlMeasurementsFDD::theInfo,
	&CompressedModeMeasCapabFDDUlMeasurementsFDD::theInfo,
};
bool CompressedModeMeasCapabFDD::itemsPres[3] = {
	0,
	1,
	1,
};
const CompressedModeMeasCapabFDD::Info CompressedModeMeasCapabFDD::theInfo = {
	CompressedModeMeasCapabFDD::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};

const void *CompressedModeMeasCapabFDD2::itemsInfo[4] = {
	&RadioFrequencyBandFDD::theInfo,
	&RadioFrequencyBandFDD2::theInfo,
	&CompressedModeMeasCapabFDD2DlMeasurementsFDD::theInfo,
	&CompressedModeMeasCapabFDD2UlMeasurementsFDD::theInfo,
};
bool CompressedModeMeasCapabFDD2::itemsPres[4] = {
	0,
	0,
	1,
	1,
};
const CompressedModeMeasCapabFDD2::Info CompressedModeMeasCapabFDD2::theInfo = {
	CompressedModeMeasCapabFDD2::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
};

const void *CompressedModeMeasCapabFDDext::itemsInfo[3] = {
	&RadioFrequencyBandFDD2::theInfo,
	&CompressedModeMeasCapabFDDextDlMeasurementsFDD::theInfo,
	&CompressedModeMeasCapabFDDextUlMeasurementsFDD::theInfo,
};
bool CompressedModeMeasCapabFDDext::itemsPres[3] = {
	1,
	1,
	1,
};
const CompressedModeMeasCapabFDDext::Info CompressedModeMeasCapabFDDext::theInfo = {
	CompressedModeMeasCapabFDDext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *CompressedModeMeasCapabTDD::itemsInfo[3] = {
	&RadioFrequencyBandTDD::theInfo,
	&CompressedModeMeasCapabTDDDlMeasurementsTDD::theInfo,
	&CompressedModeMeasCapabTDDUlMeasurementsTDD::theInfo,
};
bool CompressedModeMeasCapabTDD::itemsPres[3] = {
	1,
	1,
	1,
};
const CompressedModeMeasCapabTDD::Info CompressedModeMeasCapabTDD::theInfo = {
	CompressedModeMeasCapabTDD::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *CompressedModeMeasCapabGSM::itemsInfo[3] = {
	&RadioFrequencyBandGSM::theInfo,
	&CompressedModeMeasCapabGSMDlMeasurementsGSM::theInfo,
	&CompressedModeMeasCapabGSMUlMeasurementsGSM::theInfo,
};
bool CompressedModeMeasCapabGSM::itemsPres[3] = {
	1,
	1,
	1,
};
const CompressedModeMeasCapabGSM::Info CompressedModeMeasCapabGSM::theInfo = {
	CompressedModeMeasCapabGSM::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *CompressedModeMeasCapabMC::itemsInfo[2] = {
	&CompressedModeMeasCapabMCDlMeasurementsMC::theInfo,
	&CompressedModeMeasCapabMCUlMeasurementsMC::theInfo,
};
bool CompressedModeMeasCapabMC::itemsPres[2] = {
	1,
	1,
};
const CompressedModeMeasCapabMC::Info CompressedModeMeasCapabMC::theInfo = {
	CompressedModeMeasCapabMC::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *PowerControlAlgorithm::choicesInfo[2] = {
	&TPCStepSizeFDD::theInfo,
	&PowerControlAlgorithmAlgorithm2::theInfo,
};
const PowerControlAlgorithm::Info PowerControlAlgorithm::theInfo = {
	PowerControlAlgorithm::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *CPCHParameters::itemsInfo[4] = {
	&InitialPriorityDelayList::theInfo,
	&BackoffControlParams::theInfo,
	&PowerControlAlgorithm::theInfo,
	&DLDPCCHBER::theInfo,
};
bool CPCHParameters::itemsPres[4] = {
	0,
	1,
	1,
	1,
};
const CPCHParameters::Info CPCHParameters::theInfo = {
	CPCHParameters::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 1, 0
};

const void *CSGProximityIndicationCapability::itemsInfo[3] = {
	&CSGProximityIndicationCapabilitysupportOfIntraFreqProximityIndication::theInfo,
	&CSGProximityIndicationCapabilitysupportOfInterFreqProximityIndication::theInfo,
	&CSGProximityIndicationCapabilitysupportOfE_UtraProximityIndication::theInfo,
};
bool CSGProximityIndicationCapability::itemsPres[3] = {
	0,
	0,
	0,
};
const CSGProximityIndicationCapability::Info CSGProximityIndicationCapability::theInfo = {
	CSGProximityIndicationCapability::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
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

const void *SecondaryCPICHInfo::itemsInfo[2] = {
	&SecondaryScramblingCode::theInfo,
	&ChannelisationCode256::theInfo,
};
bool SecondaryCPICHInfo::itemsPres[2] = {
	0,
	1,
};
const SecondaryCPICHInfo::Info SecondaryCPICHInfo::theInfo = {
	SecondaryCPICHInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *DLFDPCHInfoPerRLr7::itemsInfo[8] = {
	&PCPICHUsageForChannelEst::theInfo,
	&DPCHFrameOffset::theInfo,
	&FDPCHSlotFormat::theInfo,
	&SecondaryCPICHInfo::theInfo,
	&SecondaryScramblingCode::theInfo,
	&DLFDPCHInfoPerRLr7DlChannelisationCode::theInfo,
	&TPCCombinationIndex::theInfo,
	&STTDIndication::theInfo,
};
bool DLFDPCHInfoPerRLr7::itemsPres[8] = {
	1,
	1,
	0,
	0,
	0,
	1,
	1,
	0,
};
const DLFDPCHInfoPerRLr7::Info DLFDPCHInfoPerRLr7::theInfo = {
	DLFDPCHInfoPerRLr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	8, 4, 0
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

const void *EHICHInformation::itemsInfo[2] = {
	&EHICHChannelisationCode::theInfo,
	&EHICHRGCHSignatureSequence::theInfo,
};
bool EHICHInformation::itemsPres[2] = {
	1,
	1,
};
const EHICHInformation::Info EHICHInformation::theInfo = {
	EHICHInformation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *ERGCHInformation::itemsInfo[2] = {
	&EHICHRGCHSignatureSequence::theInfo,
	&ERGCHCombinationIndex::theInfo,
};
bool ERGCHInformation::itemsPres[2] = {
	1,
	1,
};
const ERGCHInformation::Info ERGCHInformation::theInfo = {
	ERGCHInformation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *DLInformationPerSecondaryRLERGCHInfo::choicesInfo[2] = {
	&ERGCHInformation::theInfo,
	&DLInformationPerSecondaryRLERGCHInfoReleaseIndicator::theInfo,
};
const DLInformationPerSecondaryRLERGCHInfo::Info DLInformationPerSecondaryRLERGCHInfo::theInfo = {
	DLInformationPerSecondaryRLERGCHInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLInformationPerSecondaryRL::itemsInfo[6] = {
	&PrimaryCPICHInfo::theInfo,
	&CellIdentity::theInfo,
	&DLFDPCHInfoPerRLr7::theInfo,
	&EAGCHInformation::theInfo,
	&EHICHInformation::theInfo,
	&DLInformationPerSecondaryRLERGCHInfo::theInfo,
};
bool DLInformationPerSecondaryRL::itemsPres[6] = {
	1,
	0,
	1,
	0,
	0,
	0,
};
const DLInformationPerSecondaryRL::Info DLInformationPerSecondaryRL::theInfo = {
	DLInformationPerSecondaryRL::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 4, 0
};

const void *SimultaneousSCCPCHDPCHReceptionSupported::itemsInfo[2] = {
	&MaxNoSCCPCHRL::theInfo,
	&SimultaneousSCCPCHDPCHReceptionSupportedSimultaneousSCCPCHDPCHDPDCHReception::theInfo,
};
bool SimultaneousSCCPCHDPCHReceptionSupported::itemsPres[2] = {
	1,
	1,
};
const SimultaneousSCCPCHDPCHReceptionSupported::Info SimultaneousSCCPCHDPCHReceptionSupported::theInfo = {
	SimultaneousSCCPCHDPCHReceptionSupported::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *SimultaneousSCCPCHDPCHReception::choicesInfo[2] = {
	&SimultaneousSCCPCHDPCHReceptionNotSupported::theInfo,
	&SimultaneousSCCPCHDPCHReceptionSupported::theInfo,
};
const SimultaneousSCCPCHDPCHReception::Info SimultaneousSCCPCHDPCHReception::theInfo = {
	SimultaneousSCCPCHDPCHReception::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLPhysChCapabilityFDD::itemsInfo[5] = {
	&DLPhysChCapabilityFDDMaxNoDPCHPDSCHCodes::theInfo,
	&MaxNoPhysChBitsReceived::theInfo,
	&DLPhysChCapabilityFDDSupportForSF512::theInfo,
	&DLPhysChCapabilityFDDDummy::theInfo,
	&SimultaneousSCCPCHDPCHReception::theInfo,
};
bool DLPhysChCapabilityFDD::itemsPres[5] = {
	1,
	1,
	1,
	1,
	1,
};
const DLPhysChCapabilityFDD::Info DLPhysChCapabilityFDD::theInfo = {
	DLPhysChCapabilityFDD::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 0, 0
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

const void *DLPhysChCapabilityFDDv770ext::itemsInfo[5] = {
	&HSDSCHphysicallayercategoryext::theInfo,
	&DLPhysChCapabilityFDDv770exthsscchlessHsdschOperation::theInfo,
	&DLPhysChCapabilityFDDv770extenhancedFdpch::theInfo,
	&DLPhysChCapabilityFDDv770exthsdschReception_CellFach::theInfo,
	&DLPhysChCapabilityFDDv770exthsdschReception_CellUraPch::theInfo,
};
bool DLPhysChCapabilityFDDv770ext::itemsPres[5] = {
	0,
	0,
	0,
	0,
	0,
};
const DLPhysChCapabilityFDDv770ext::Info DLPhysChCapabilityFDDv770ext::theInfo = {
	DLPhysChCapabilityFDDv770ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 5, 0
};

const void *DLPhysChCapabilityFDDv860ext::itemsInfo[3] = {
	&HSDSCHphysicallayercategoryext2::theInfo,
	&DLPhysChCapabilityFDDv860extsupportOfTargetCellPreConfig::theInfo,
	&DLPhysChCapabilityFDDv860extsupportOfHsdschDrxOperation::theInfo,
};
bool DLPhysChCapabilityFDDv860ext::itemsPres[3] = {
	0,
	0,
	0,
};
const DLPhysChCapabilityFDDv860ext::Info DLPhysChCapabilityFDDv860ext::theInfo = {
	DLPhysChCapabilityFDDv860ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *DLPhysChCapabilityFDDv920ext::itemsInfo[2] = {
	&HSDSCHphysicallayercategoryext3::theInfo,
	&DLPhysChCapabilityFDDv920extsupportOfMimoOnlySingleStream::theInfo,
};
bool DLPhysChCapabilityFDDv920ext::itemsPres[2] = {
	0,
	0,
};
const DLPhysChCapabilityFDDv920ext::Info DLPhysChCapabilityFDDv920ext::theInfo = {
	DLPhysChCapabilityFDDv920ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *DLPhysChCapabilityTDD::itemsInfo[5] = {
	&MaxTSPerFrame::theInfo,
	&MaxPhysChPerFrame::theInfo,
	&MinimumSFDL::theInfo,
	&DLPhysChCapabilityTDDSupportOfPDSCH::theInfo,
	&MaxPhysChPerTS::theInfo,
};
bool DLPhysChCapabilityTDD::itemsPres[5] = {
	1,
	1,
	1,
	1,
	1,
};
const DLPhysChCapabilityTDD::Info DLPhysChCapabilityTDD::theInfo = {
	DLPhysChCapabilityTDD::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 0, 0
};

const void *DLPhysChCapabilityTDDLCRr4::itemsInfo[6] = {
	&MaxTSPerSubFramer4::theInfo,
	&MaxPhysChPerSubFramer4::theInfo,
	&MinimumSFDL::theInfo,
	&DLPhysChCapabilityTDDLCRr4SupportOfPDSCH::theInfo,
	&MaxPhysChPerTS::theInfo,
	&DLPhysChCapabilityTDDLCRr4SupportOf8PSK::theInfo,
};
bool DLPhysChCapabilityTDDLCRr4::itemsPres[6] = {
	1,
	1,
	1,
	1,
	1,
	1,
};
const DLPhysChCapabilityTDDLCRr4::Info DLPhysChCapabilityTDDLCRr4::theInfo = {
	DLPhysChCapabilityTDDLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 0, 0
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

const void *DLPhysChCapabilityTDD128v860ext::itemsInfo[3] = {
	&HSDSCHphysicallayercategoryextension::theInfo,
	&MultiCarrierHSDSCHphysicallayercategoryextension::theInfo,
	&DLPhysChCapabilityTDD128v860extsupportOfSFModeForHSPDSCHDualStream::theInfo,
};
bool DLPhysChCapabilityTDD128v860ext::itemsPres[3] = {
	0,
	0,
	0,
};
const DLPhysChCapabilityTDD128v860ext::Info DLPhysChCapabilityTDD128v860ext::theInfo = {
	DLPhysChCapabilityTDD128v860ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *DLPhysChCapabilityTDD768Tdd768hspdsch::choicesInfo[2] = {
	&HSDSCHphysicallayercategory::theInfo,
	&DLPhysChCapabilityTDD768Tdd768hspdschUnsupported::theInfo,
};
const DLPhysChCapabilityTDD768Tdd768hspdsch::Info DLPhysChCapabilityTDD768Tdd768hspdsch::theInfo = {
	DLPhysChCapabilityTDD768Tdd768hspdsch::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLPhysChCapabilityTDD768::itemsInfo[6] = {
	&MaxTSPerFrame::theInfo,
	&MaxPhysChPerFrame768::theInfo,
	&MinimumSFDL768::theInfo,
	&DLPhysChCapabilityTDD768SupportOfPDSCH::theInfo,
	&DLPhysChCapabilityTDD768Tdd768hspdsch::theInfo,
	&MaxPhysChPerTS768::theInfo,
};
bool DLPhysChCapabilityTDD768::itemsPres[6] = {
	1,
	1,
	1,
	1,
	1,
	1,
};
const DLPhysChCapabilityTDD768::Info DLPhysChCapabilityTDD768::theInfo = {
	DLPhysChCapabilityTDD768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 0, 0
};

const void *DLPhysChCapabilityInfoTDD768::itemsInfo[5] = {
	&MaxTSPerFrame::theInfo,
	&MaxPhysChPerFrame768::theInfo,
	&MinimumSFDL768::theInfo,
	&DLPhysChCapabilityInfoTDD768SupportOfPDSCH::theInfo,
	&MaxPhysChPerTS768::theInfo,
};
bool DLPhysChCapabilityInfoTDD768::itemsPres[5] = {
	1,
	1,
	1,
	1,
	1,
};
const DLPhysChCapabilityInfoTDD768::Info DLPhysChCapabilityInfoTDD768::theInfo = {
	DLPhysChCapabilityInfoTDD768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 0, 0
};

const void *TurboSupport::choicesInfo[2] = {
	&TurboSupportNotSupported::theInfo,
	&MaxNoBits::theInfo,
};
const TurboSupport::Info TurboSupport::theInfo = {
	TurboSupport::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLTransChCapability::itemsInfo[8] = {
	&MaxNoBits::theInfo,
	&MaxNoBits::theInfo,
	&TurboSupport::theInfo,
	&MaxSimultaneousTransChsDL::theInfo,
	&MaxSimultaneousCCTrCHCount::theInfo,
	&MaxTransportBlocksDL::theInfo,
	&MaxNumberOfTFCDL::theInfo,
	&MaxNumberOfTF::theInfo,
};
bool DLTransChCapability::itemsPres[8] = {
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
};
const DLTransChCapability::Info DLTransChCapability::theInfo = {
	DLTransChCapability::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	8, 0, 0
};

const void *DRACSysInfo::itemsInfo[2] = {
	&TransmissionProbability::theInfo,
	&MaximumBitRate::theInfo,
};
bool DRACSysInfo::itemsPres[2] = {
	1,
	1,
};
const DRACSysInfo::Info DRACSysInfo::theInfo = {
	DRACSysInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
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

const void *ProtocolErrorInformationDiagnosticsType::choicesInfo[2] = {
	&ProtocolErrorInformationDiagnosticsTypeType1::theInfo,
	&ProtocolErrorInformationDiagnosticsTypeSpare::theInfo,
};
const ProtocolErrorInformationDiagnosticsType::Info ProtocolErrorInformationDiagnosticsType::theInfo = {
	ProtocolErrorInformationDiagnosticsType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
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

const void *FailureCauseWithProtErr::choicesInfo[16] = {
	&FailureCauseWithProtErrConfigurationUnsupported::theInfo,
	&FailureCauseWithProtErrPhysicalChannelFailure::theInfo,
	&FailureCauseWithProtErrIncompatibleSimultaneousReconfiguration::theInfo,
	&TGPSI::theInfo,
	&ProtocolErrorInformation::theInfo,
	&FailureCauseWithProtErrCellUpdateOccurred::theInfo,
	&FailureCauseWithProtErrInvalidConfiguration::theInfo,
	&FailureCauseWithProtErrConfigurationIncomplete::theInfo,
	&FailureCauseWithProtErrUnsupportedMeasurement::theInfo,
	&FailureCauseWithProtErrMbmsSessionAlreadyReceivedCorrectly::theInfo,
	&FailureCauseWithProtErrLowerPriorityMBMSService::theInfo,
	&FailureCauseWithProtErrSpare5::theInfo,
	&FailureCauseWithProtErrSpare4::theInfo,
	&FailureCauseWithProtErrSpare3::theInfo,
	&FailureCauseWithProtErrSpare2::theInfo,
	&FailureCauseWithProtErrSpare1::theInfo,
};
const FailureCauseWithProtErr::Info FailureCauseWithProtErr::theInfo = {
	FailureCauseWithProtErr::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	15
};

const void *FailureCauseWithProtErrTrId::itemsInfo[2] = {
	&RRCTransactionIdentifier::theInfo,
	&FailureCauseWithProtErr::theInfo,
};
bool FailureCauseWithProtErrTrId::itemsPres[2] = {
	1,
	1,
};
const FailureCauseWithProtErrTrId::Info FailureCauseWithProtErrTrId::theInfo = {
	FailureCauseWithProtErrTrId::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *RRCConnectionReleaseInformationRelease::itemsInfo[1] = {
	&ReleaseCause::theInfo,
};
bool RRCConnectionReleaseInformationRelease::itemsPres[1] = {
	1,
};
const RRCConnectionReleaseInformationRelease::Info RRCConnectionReleaseInformationRelease::theInfo = {
	RRCConnectionReleaseInformationRelease::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *RRCConnectionReleaseInformation::choicesInfo[2] = {
	&RRCConnectionReleaseInformationNoRelease::theInfo,
	&RRCConnectionReleaseInformationRelease::theInfo,
};
const RRCConnectionReleaseInformation::Info RRCConnectionReleaseInformation::theInfo = {
	RRCConnectionReleaseInformation::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *URNTIGroup::choicesInfo[32] = {
	&URNTIGroupAll::theInfo,
	&URNTIGroupURNTIBitMaskIndexb1::theInfo,
	&URNTIGroupURNTIBitMaskIndexb2::theInfo,
	&URNTIGroupURNTIBitMaskIndexb3::theInfo,
	&URNTIGroupURNTIBitMaskIndexb4::theInfo,
	&URNTIGroupURNTIBitMaskIndexb5::theInfo,
	&URNTIGroupURNTIBitMaskIndexb6::theInfo,
	&URNTIGroupURNTIBitMaskIndexb7::theInfo,
	&URNTIGroupURNTIBitMaskIndexb8::theInfo,
	&URNTIGroupURNTIBitMaskIndexb9::theInfo,
	&URNTIGroupURNTIBitMaskIndexb10::theInfo,
	&URNTIGroupURNTIBitMaskIndexb11::theInfo,
	&URNTIGroupURNTIBitMaskIndexb12::theInfo,
	&URNTIGroupURNTIBitMaskIndexb13::theInfo,
	&URNTIGroupURNTIBitMaskIndexb14::theInfo,
	&URNTIGroupURNTIBitMaskIndexb15::theInfo,
	&URNTIGroupURNTIBitMaskIndexb16::theInfo,
	&URNTIGroupURNTIBitMaskIndexb17::theInfo,
	&URNTIGroupURNTIBitMaskIndexb18::theInfo,
	&URNTIGroupURNTIBitMaskIndexb19::theInfo,
	&URNTIGroupURNTIBitMaskIndexb20::theInfo,
	&URNTIGroupURNTIBitMaskIndexb21::theInfo,
	&URNTIGroupURNTIBitMaskIndexb22::theInfo,
	&URNTIGroupURNTIBitMaskIndexb23::theInfo,
	&URNTIGroupURNTIBitMaskIndexb24::theInfo,
	&URNTIGroupURNTIBitMaskIndexb25::theInfo,
	&URNTIGroupURNTIBitMaskIndexb26::theInfo,
	&URNTIGroupURNTIBitMaskIndexb27::theInfo,
	&URNTIGroupURNTIBitMaskIndexb28::theInfo,
	&URNTIGroupURNTIBitMaskIndexb29::theInfo,
	&URNTIGroupURNTIBitMaskIndexb30::theInfo,
	&URNTIGroupURNTIBitMaskIndexb31::theInfo,
};
const URNTIGroup::Info URNTIGroup::theInfo = {
	URNTIGroup::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	31
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

const void *GroupIdentityWithReleaseInformation::itemsInfo[2] = {
	&RRCConnectionReleaseInformation::theInfo,
	&GroupReleaseInformation::theInfo,
};
bool GroupIdentityWithReleaseInformation::itemsPres[2] = {
	1,
	1,
};
const GroupIdentityWithReleaseInformation::Info GroupIdentityWithReleaseInformation::theInfo = {
	GroupIdentityWithReleaseInformation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *IdleIntervalMeasCapabEUTRA::itemsInfo[2] = {
	&RadioFrequencyBandEUTRA::theInfo,
	&IdleIntervalMeasCapabEUTRAIdleInterval::theInfo,
};
bool IdleIntervalMeasCapabEUTRA::itemsPres[2] = {
	1,
	1,
};
const IdleIntervalMeasCapabEUTRA::Info IdleIntervalMeasCapabEUTRA::theInfo = {
	IdleIntervalMeasCapabEUTRA::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *IMSIandESNDS41::itemsInfo[2] = {
	&IMSIDS41::theInfo,
	&ESNDS41::theInfo,
};
bool IMSIandESNDS41::itemsPres[2] = {
	1,
	1,
};
const IMSIandESNDS41::Info IMSIandESNDS41::theInfo = {
	IMSIandESNDS41::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *TMSIandLAIGSMMAP::itemsInfo[2] = {
	&TMSIGSMMAP::theInfo,
	&LAI::theInfo,
};
bool TMSIandLAIGSMMAP::itemsPres[2] = {
	1,
	1,
};
const TMSIandLAIGSMMAP::Info TMSIandLAIGSMMAP::theInfo = {
	TMSIandLAIGSMMAP::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *PTMSIandRAIGSMMAP::itemsInfo[2] = {
	&PTMSIGSMMAP::theInfo,
	&RAI::theInfo,
};
bool PTMSIandRAIGSMMAP::itemsPres[2] = {
	1,
	1,
};
const PTMSIandRAIGSMMAP::Info PTMSIandRAIGSMMAP::theInfo = {
	PTMSIandRAIGSMMAP::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *InitialUEIdentity::choicesInfo[8] = {
	&IMSIGSMMAP::theInfo,
	&TMSIandLAIGSMMAP::theInfo,
	&PTMSIandRAIGSMMAP::theInfo,
	&IMEI::theInfo,
	&ESNDS41::theInfo,
	&IMSIDS41::theInfo,
	&IMSIandESNDS41::theInfo,
	&TMSIDS41::theInfo,
};
const InitialUEIdentity::Info InitialUEIdentity::theInfo = {
	InitialUEIdentity::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	7
};

const void *IntegrityCheckInfo::itemsInfo[2] = {
	&MessageAuthenticationCode::theInfo,
	&RRCMessageSequenceNumber::theInfo,
};
bool IntegrityCheckInfo::itemsPres[2] = {
	1,
	1,
};
const IntegrityCheckInfo::Info IntegrityCheckInfo::theInfo = {
	IntegrityCheckInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
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

const void *IntegrityProtectionModeCommandStartIntegrityProtection::itemsInfo[1] = {
	&IntegrityProtInitNumber::theInfo,
};
bool IntegrityProtectionModeCommandStartIntegrityProtection::itemsPres[1] = {
	1,
};
const IntegrityProtectionModeCommandStartIntegrityProtection::Info IntegrityProtectionModeCommandStartIntegrityProtection::theInfo = {
	IntegrityProtectionModeCommandStartIntegrityProtection::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *IntegrityProtectionModeCommandModify::itemsInfo[1] = {
	&IntegrityProtActivationInfo::theInfo,
};
bool IntegrityProtectionModeCommandModify::itemsPres[1] = {
	1,
};
const IntegrityProtectionModeCommandModify::Info IntegrityProtectionModeCommandModify::theInfo = {
	IntegrityProtectionModeCommandModify::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *IntegrityProtectionModeCommand::choicesInfo[2] = {
	&IntegrityProtectionModeCommandStartIntegrityProtection::theInfo,
	&IntegrityProtectionModeCommandModify::theInfo,
};
const IntegrityProtectionModeCommand::Info IntegrityProtectionModeCommand::theInfo = {
	IntegrityProtectionModeCommand::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *IntegrityProtectionModeInfo::itemsInfo[2] = {
	&IntegrityProtectionModeCommand::theInfo,
	&IntegrityProtectionAlgorithm::theInfo,
};
bool IntegrityProtectionModeInfo::itemsPres[2] = {
	1,
	0,
};
const IntegrityProtectionModeInfo::Info IntegrityProtectionModeInfo::theInfo = {
	IntegrityProtectionModeInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *IntegrityProtectionModeInfor7::itemsInfo[2] = {
	&IntegrityProtectionModeCommand::theInfo,
	&IntegrityProtectionAlgorithmr7::theInfo,
};
bool IntegrityProtectionModeInfor7::itemsPres[2] = {
	1,
	0,
};
const IntegrityProtectionModeInfor7::Info IntegrityProtectionModeInfor7::theInfo = {
	IntegrityProtectionModeInfor7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *MeasurementCapability::itemsInfo[2] = {
	&CompressedModeMeasCapability::theInfo,
	&CompressedModeMeasCapability::theInfo,
};
bool MeasurementCapability::itemsPres[2] = {
	1,
	1,
};
const MeasurementCapability::Info MeasurementCapability::theInfo = {
	MeasurementCapability::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *MeasurementCapabilityExt::itemsInfo[4] = {
	&CompressedModeMeasCapabFDDList::theInfo,
	&CompressedModeMeasCapabTDDList::theInfo,
	&CompressedModeMeasCapabGSMList::theInfo,
	&CompressedModeMeasCapabMC::theInfo,
};
bool MeasurementCapabilityExt::itemsPres[4] = {
	1,
	0,
	0,
	0,
};
const MeasurementCapabilityExt::Info MeasurementCapabilityExt::theInfo = {
	MeasurementCapabilityExt::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 3, 0
};

const void *MeasurementCapabilityExt2::itemsInfo[4] = {
	&CompressedModeMeasCapabFDDList2::theInfo,
	&CompressedModeMeasCapabTDDList::theInfo,
	&CompressedModeMeasCapabGSMList::theInfo,
	&CompressedModeMeasCapabMC::theInfo,
};
bool MeasurementCapabilityExt2::itemsPres[4] = {
	1,
	0,
	0,
	0,
};
const MeasurementCapabilityExt2::Info MeasurementCapabilityExt2::theInfo = {
	MeasurementCapabilityExt2::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 3, 0
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

const void *MeasurementCapabilityr4ext::itemsInfo[2] = {
	&CompressedModeMeasCapabilityLCRr4::theInfo,
	&CompressedModeMeasCapabilityLCRr4::theInfo,
};
bool MeasurementCapabilityr4ext::itemsPres[2] = {
	1,
	1,
};
const MeasurementCapabilityr4ext::Info MeasurementCapabilityr4ext::theInfo = {
	MeasurementCapabilityr4ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
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

const void *MultiRATCapability::itemsInfo[2] = {
	&MultiRATCapabilitySupportOfGSM::theInfo,
	&MultiRATCapabilitySupportOfMulticarrier::theInfo,
};
bool MultiRATCapability::itemsPres[2] = {
	1,
	1,
};
const MultiRATCapability::Info MultiRATCapability::theInfo = {
	MultiRATCapability::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
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

const void *MultiModeRATCapabilityv860ext::itemsInfo[5] = {
	&MultiModeRATCapabilityv860extsupportOfEUTRAFDD::theInfo,
	&MultiModeRATCapabilityv860extsupportOfInterRATHOToEUTRAFDD::theInfo,
	&MultiModeRATCapabilityv860extsupportOfEUTRATDD::theInfo,
	&MultiModeRATCapabilityv860extsupportOfInterRATHOToEUTRATDD::theInfo,
	&MultiModeRATCapabilityv860extEutraFeatureGroupIndicators::theInfo,
};
bool MultiModeRATCapabilityv860ext::itemsPres[5] = {
	0,
	0,
	0,
	0,
	0,
};
const MultiModeRATCapabilityv860ext::Info MultiModeRATCapabilityv860ext::theInfo = {
	MultiModeRATCapabilityv860ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 5, 0
};

const void *NeighCellSIAcquisitionCapability::itemsInfo[3] = {
	&NeighCellSIAcquisitionCapabilitysupportOfIntraFreqSIAcquisitionForHO::theInfo,
	&NeighCellSIAcquisitionCapabilitysupportOfInterFreqSIAcquisitionForHO::theInfo,
	&NeighCellSIAcquisitionCapabilitysupportOfE_UtraSIAcquisitionForHO::theInfo,
};
bool NeighCellSIAcquisitionCapability::itemsPres[3] = {
	0,
	0,
	0,
};
const NeighCellSIAcquisitionCapability::Info NeighCellSIAcquisitionCapability::theInfo = {
	NeighCellSIAcquisitionCapability::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
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

const void *PagingRecordCnIdentity::itemsInfo[3] = {
	&PagingCause::theInfo,
	&CNDomainIdentity::theInfo,
	&CNPagedUEIdentity::theInfo,
};
bool PagingRecordCnIdentity::itemsPres[3] = {
	1,
	1,
	1,
};
const PagingRecordCnIdentity::Info PagingRecordCnIdentity::theInfo = {
	PagingRecordCnIdentity::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *URNTI::itemsInfo[2] = {
	&SRNCIdentity::theInfo,
	&SRNTI::theInfo,
};
bool URNTI::itemsPres[2] = {
	1,
	1,
};
const URNTI::Info URNTI::theInfo = {
	URNTI::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *PagingRecordUtranIdentityCnOriginatedPageconnectedModeUE::itemsInfo[3] = {
	&PagingCause::theInfo,
	&CNDomainIdentity::theInfo,
	&PagingRecordTypeID::theInfo,
};
bool PagingRecordUtranIdentityCnOriginatedPageconnectedModeUE::itemsPres[3] = {
	1,
	1,
	1,
};
const PagingRecordUtranIdentityCnOriginatedPageconnectedModeUE::Info PagingRecordUtranIdentityCnOriginatedPageconnectedModeUE::theInfo = {
	PagingRecordUtranIdentityCnOriginatedPageconnectedModeUE::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *PagingRecordUtranIdentity::itemsInfo[2] = {
	&URNTI::theInfo,
	&PagingRecordUtranIdentityCnOriginatedPageconnectedModeUE::theInfo,
};
bool PagingRecordUtranIdentity::itemsPres[2] = {
	1,
	0,
};
const PagingRecordUtranIdentity::Info PagingRecordUtranIdentity::theInfo = {
	PagingRecordUtranIdentity::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *PagingRecord::choicesInfo[2] = {
	&PagingRecordCnIdentity::theInfo,
	&PagingRecordUtranIdentity::theInfo,
};
const PagingRecord::Info PagingRecord::theInfo = {
	PagingRecord::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *PagingRecord2r5UtranSingleUEIdentityCnOriginatedPageconnectedModeUE::itemsInfo[3] = {
	&PagingCause::theInfo,
	&CNDomainIdentity::theInfo,
	&PagingRecordTypeID::theInfo,
};
bool PagingRecord2r5UtranSingleUEIdentityCnOriginatedPageconnectedModeUE::itemsPres[3] = {
	1,
	1,
	1,
};
const PagingRecord2r5UtranSingleUEIdentityCnOriginatedPageconnectedModeUE::Info PagingRecord2r5UtranSingleUEIdentityCnOriginatedPageconnectedModeUE::theInfo = {
	PagingRecord2r5UtranSingleUEIdentityCnOriginatedPageconnectedModeUE::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *PagingRecord2r5UtranSingleUEIdentity::itemsInfo[3] = {
	&URNTI::theInfo,
	&PagingRecord2r5UtranSingleUEIdentityCnOriginatedPageconnectedModeUE::theInfo,
	&RRCConnectionReleaseInformation::theInfo,
};
bool PagingRecord2r5UtranSingleUEIdentity::itemsPres[3] = {
	1,
	0,
	1,
};
const PagingRecord2r5UtranSingleUEIdentity::Info PagingRecord2r5UtranSingleUEIdentity::theInfo = {
	PagingRecord2r5UtranSingleUEIdentity::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};

const void *PagingRecord2r5::choicesInfo[2] = {
	&PagingRecord2r5UtranSingleUEIdentity::theInfo,
	&PagingRecord2r5UtranGroupIdentity::theInfo,
};
const PagingRecord2r5::Info PagingRecord2r5::theInfo = {
	PagingRecord2r5::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *PDCPCapabilitySupportForRfc2507::choicesInfo[2] = {
	&PDCPCapabilitySupportForRfc2507NotSupported::theInfo,
	&MaxHcContextSpace::theInfo,
};
const PDCPCapabilitySupportForRfc2507::Info PDCPCapabilitySupportForRfc2507::theInfo = {
	PDCPCapabilitySupportForRfc2507::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *PDCPCapability::itemsInfo[2] = {
	&PDCPCapabilityLosslessSRNSRelocationSupport::theInfo,
	&PDCPCapabilitySupportForRfc2507::theInfo,
};
bool PDCPCapability::itemsPres[2] = {
	1,
	1,
};
const PDCPCapability::Info PDCPCapability::theInfo = {
	PDCPCapability::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *PDCPCapabilityr4extSupportForRfc3095Supported::itemsInfo[2] = {
	&MaxROHCContextSessionsr4::theInfo,
	&PDCPCapabilityr4extSupportForRfc3095SupportedReverseCompressionDepth::theInfo,
};
bool PDCPCapabilityr4extSupportForRfc3095Supported::itemsPres[2] = {
	0,
	0,
};
const PDCPCapabilityr4extSupportForRfc3095Supported::Info PDCPCapabilityr4extSupportForRfc3095Supported::theInfo = {
	PDCPCapabilityr4extSupportForRfc3095Supported::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *PDCPCapabilityr4extSupportForRfc3095::choicesInfo[2] = {
	&PDCPCapabilityr4extSupportForRfc3095NotSupported::theInfo,
	&PDCPCapabilityr4extSupportForRfc3095Supported::theInfo,
};
const PDCPCapabilityr4extSupportForRfc3095::Info PDCPCapabilityr4extSupportForRfc3095::theInfo = {
	PDCPCapabilityr4extSupportForRfc3095::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
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

const void *PDCPCapabilityr5ext::itemsInfo[2] = {
	&PDCPCapabilityr5extSupportForRfc3095ContextRelocation::theInfo,
	&MaxHcContextSpacer5ext::theInfo,
};
bool PDCPCapabilityr5ext::itemsPres[2] = {
	1,
	0,
};
const PDCPCapabilityr5ext::Info PDCPCapabilityr5ext::theInfo = {
	PDCPCapabilityr5ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
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

const void *ULPhysChCapabilityFDD::itemsInfo[2] = {
	&MaxNoDPDCHBitsTransmitted::theInfo,
	&ULPhysChCapabilityFDDDummy::theInfo,
};
bool ULPhysChCapabilityFDD::itemsPres[2] = {
	1,
	1,
};
const ULPhysChCapabilityFDD::Info ULPhysChCapabilityFDD::theInfo = {
	ULPhysChCapabilityFDD::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *PhysicalChannelCapabilityFddPhysChCapability::itemsInfo[2] = {
	&DLPhysChCapabilityFDD::theInfo,
	&ULPhysChCapabilityFDD::theInfo,
};
bool PhysicalChannelCapabilityFddPhysChCapability::itemsPres[2] = {
	1,
	1,
};
const PhysicalChannelCapabilityFddPhysChCapability::Info PhysicalChannelCapabilityFddPhysChCapability::theInfo = {
	PhysicalChannelCapabilityFddPhysChCapability::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *ULPhysChCapabilityTDD::itemsInfo[4] = {
	&MaxTSPerFrame::theInfo,
	&MaxPhysChPerTimeslot::theInfo,
	&MinimumSFUL::theInfo,
	&ULPhysChCapabilityTDDSupportOfPUSCH::theInfo,
};
bool ULPhysChCapabilityTDD::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const ULPhysChCapabilityTDD::Info ULPhysChCapabilityTDD::theInfo = {
	ULPhysChCapabilityTDD::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 0, 0
};

const void *PhysicalChannelCapabilityTddPhysChCapability::itemsInfo[2] = {
	&DLPhysChCapabilityTDD::theInfo,
	&ULPhysChCapabilityTDD::theInfo,
};
bool PhysicalChannelCapabilityTddPhysChCapability::itemsPres[2] = {
	1,
	1,
};
const PhysicalChannelCapabilityTddPhysChCapability::Info PhysicalChannelCapabilityTddPhysChCapability::theInfo = {
	PhysicalChannelCapabilityTddPhysChCapability::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *PhysicalChannelCapability::itemsInfo[2] = {
	&PhysicalChannelCapabilityFddPhysChCapability::theInfo,
	&PhysicalChannelCapabilityTddPhysChCapability::theInfo,
};
bool PhysicalChannelCapability::itemsPres[2] = {
	0,
	0,
};
const PhysicalChannelCapability::Info PhysicalChannelCapability::theInfo = {
	PhysicalChannelCapability::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *ULPhysChCapabilityFDDv770ext::itemsInfo[3] = {
	&ULPhysChCapabilityFDDv770extEdchPhysicalLayerCategoryextension::theInfo,
	&ULPhysChCapabilityFDDv770extdiscontinuousDpcchTransmission::theInfo,
	&ULPhysChCapabilityFDDv770extslotFormat4::theInfo,
};
bool ULPhysChCapabilityFDDv770ext::itemsPres[3] = {
	0,
	0,
	0,
};
const ULPhysChCapabilityFDDv770ext::Info ULPhysChCapabilityFDDv770ext::theInfo = {
	ULPhysChCapabilityFDDv770ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *PhysicalChannelCapabilityv770extFddPhysChCapability::itemsInfo[2] = {
	&DLPhysChCapabilityFDDv770ext::theInfo,
	&ULPhysChCapabilityFDDv770ext::theInfo,
};
bool PhysicalChannelCapabilityv770extFddPhysChCapability::itemsPres[2] = {
	1,
	1,
};
const PhysicalChannelCapabilityv770extFddPhysChCapability::Info PhysicalChannelCapabilityv770extFddPhysChCapability::theInfo = {
	PhysicalChannelCapabilityv770extFddPhysChCapability::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
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

const void *ULPhysChCapabilityTDD384v770extTdd384edch::choicesInfo[2] = {
	&ULPhysChCapabilityTDD384v770extTdd384edchSupported::theInfo,
	&ULPhysChCapabilityTDD384v770extTdd384edchUnsupported::theInfo,
};
const ULPhysChCapabilityTDD384v770extTdd384edch::Info ULPhysChCapabilityTDD384v770extTdd384edch::theInfo = {
	ULPhysChCapabilityTDD384v770extTdd384edch::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
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

const void *PhysicalChannelCapabilityv770extTddPhysChCapability384::itemsInfo[1] = {
	&ULPhysChCapabilityTDD384v770ext::theInfo,
};
bool PhysicalChannelCapabilityv770extTddPhysChCapability384::itemsPres[1] = {
	1,
};
const PhysicalChannelCapabilityv770extTddPhysChCapability384::Info PhysicalChannelCapabilityv770extTddPhysChCapability384::theInfo = {
	PhysicalChannelCapabilityv770extTddPhysChCapability384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ULPhysChCapabilityTDD768Tdd384edchSupported::itemsInfo[1] = {
	&ULPhysChCapabilityTDD768Tdd384edchSupportedTddedchPhysicalLayerCategory::theInfo,
};
bool ULPhysChCapabilityTDD768Tdd384edchSupported::itemsPres[1] = {
	1,
};
const ULPhysChCapabilityTDD768Tdd384edchSupported::Info ULPhysChCapabilityTDD768Tdd384edchSupported::theInfo = {
	ULPhysChCapabilityTDD768Tdd384edchSupported::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ULPhysChCapabilityTDD768Tdd384edch::choicesInfo[2] = {
	&ULPhysChCapabilityTDD768Tdd384edchSupported::theInfo,
	&ULPhysChCapabilityTDD768Tdd384edchUnsupported::theInfo,
};
const ULPhysChCapabilityTDD768Tdd384edch::Info ULPhysChCapabilityTDD768Tdd384edch::theInfo = {
	ULPhysChCapabilityTDD768Tdd384edch::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULPhysChCapabilityTDD768::itemsInfo[5] = {
	&MaxTSPerFrame::theInfo,
	&MaxPhysChPerTimeslot::theInfo,
	&MinimumSFUL::theInfo,
	&ULPhysChCapabilityTDD768SupportOfPUSCH::theInfo,
	&ULPhysChCapabilityTDD768Tdd384edch::theInfo,
};
bool ULPhysChCapabilityTDD768::itemsPres[5] = {
	1,
	1,
	1,
	1,
	1,
};
const ULPhysChCapabilityTDD768::Info ULPhysChCapabilityTDD768::theInfo = {
	ULPhysChCapabilityTDD768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 0, 0
};

const void *PhysicalChannelCapabilityv770extTddPhysChCapability768::itemsInfo[2] = {
	&DLPhysChCapabilityTDD768::theInfo,
	&ULPhysChCapabilityTDD768::theInfo,
};
bool PhysicalChannelCapabilityv770extTddPhysChCapability768::itemsPres[2] = {
	1,
	1,
};
const PhysicalChannelCapabilityv770extTddPhysChCapability768::Info PhysicalChannelCapabilityv770extTddPhysChCapability768::theInfo = {
	PhysicalChannelCapabilityv770extTddPhysChCapability768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *ULPhysChCapabilityTDD128v770extTdd128edchSupported::itemsInfo[1] = {
	&ULPhysChCapabilityTDD128v770extTdd128edchSupportedTddedchPhysicalLayerCategory::theInfo,
};
bool ULPhysChCapabilityTDD128v770extTdd128edchSupported::itemsPres[1] = {
	1,
};
const ULPhysChCapabilityTDD128v770extTdd128edchSupported::Info ULPhysChCapabilityTDD128v770extTdd128edchSupported::theInfo = {
	ULPhysChCapabilityTDD128v770extTdd128edchSupported::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ULPhysChCapabilityTDD128v770extTdd128edch::choicesInfo[2] = {
	&ULPhysChCapabilityTDD128v770extTdd128edchSupported::theInfo,
	&ULPhysChCapabilityTDD128v770extTdd128edchUnsupported::theInfo,
};
const ULPhysChCapabilityTDD128v770extTdd128edch::Info ULPhysChCapabilityTDD128v770extTdd128edch::theInfo = {
	ULPhysChCapabilityTDD128v770extTdd128edch::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULPhysChCapabilityTDD128v770ext::itemsInfo[2] = {
	&MaxPhysChPerTimeslotLCRr7::theInfo,
	&ULPhysChCapabilityTDD128v770extTdd128edch::theInfo,
};
bool ULPhysChCapabilityTDD128v770ext::itemsPres[2] = {
	1,
	1,
};
const ULPhysChCapabilityTDD128v770ext::Info ULPhysChCapabilityTDD128v770ext::theInfo = {
	ULPhysChCapabilityTDD128v770ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *PhysicalChannelCapabilityv770extTddPhysChCapability128::itemsInfo[2] = {
	&DLPhysChCapabilityTDD128v770ext::theInfo,
	&ULPhysChCapabilityTDD128v770ext::theInfo,
};
bool PhysicalChannelCapabilityv770extTddPhysChCapability128::itemsPres[2] = {
	1,
	1,
};
const PhysicalChannelCapabilityv770extTddPhysChCapability128::Info PhysicalChannelCapabilityv770extTddPhysChCapability128::theInfo = {
	PhysicalChannelCapabilityv770extTddPhysChCapability128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *PhysicalChannelCapabilityv770ext::itemsInfo[4] = {
	&PhysicalChannelCapabilityv770extFddPhysChCapability::theInfo,
	&PhysicalChannelCapabilityv770extTddPhysChCapability384::theInfo,
	&PhysicalChannelCapabilityv770extTddPhysChCapability768::theInfo,
	&PhysicalChannelCapabilityv770extTddPhysChCapability128::theInfo,
};
bool PhysicalChannelCapabilityv770ext::itemsPres[4] = {
	0,
	0,
	0,
	0,
};
const PhysicalChannelCapabilityv770ext::Info PhysicalChannelCapabilityv770ext::theInfo = {
	PhysicalChannelCapabilityv770ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 4, 0
};

const void *PhysicalChannelCapabilityv860extFddPhysChCapability::itemsInfo[1] = {
	&DLPhysChCapabilityFDDv860ext::theInfo,
};
bool PhysicalChannelCapabilityv860extFddPhysChCapability::itemsPres[1] = {
	1,
};
const PhysicalChannelCapabilityv860extFddPhysChCapability::Info PhysicalChannelCapabilityv860extFddPhysChCapability::theInfo = {
	PhysicalChannelCapabilityv860extFddPhysChCapability::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PhysicalChannelCapabilityv860extTddPhysChCapability128::itemsInfo[1] = {
	&DLPhysChCapabilityTDD128v860ext::theInfo,
};
bool PhysicalChannelCapabilityv860extTddPhysChCapability128::itemsPres[1] = {
	1,
};
const PhysicalChannelCapabilityv860extTddPhysChCapability128::Info PhysicalChannelCapabilityv860extTddPhysChCapability128::theInfo = {
	PhysicalChannelCapabilityv860extTddPhysChCapability128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PhysicalChannelCapabilityv860ext::itemsInfo[2] = {
	&PhysicalChannelCapabilityv860extFddPhysChCapability::theInfo,
	&PhysicalChannelCapabilityv860extTddPhysChCapability128::theInfo,
};
bool PhysicalChannelCapabilityv860ext::itemsPres[2] = {
	0,
	0,
};
const PhysicalChannelCapabilityv860ext::Info PhysicalChannelCapabilityv860ext::theInfo = {
	PhysicalChannelCapabilityv860ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
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

const void *PhysicalChannelCapabilityv920extFddPhysChCapability::itemsInfo[2] = {
	&DLPhysChCapabilityFDDv920ext::theInfo,
	&ULPhysChCapabilityFDDv920ext::theInfo,
};
bool PhysicalChannelCapabilityv920extFddPhysChCapability::itemsPres[2] = {
	1,
	1,
};
const PhysicalChannelCapabilityv920extFddPhysChCapability::Info PhysicalChannelCapabilityv920extFddPhysChCapability::theInfo = {
	PhysicalChannelCapabilityv920extFddPhysChCapability::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
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

const void *PhysicalChannelCapabilityInfov770extTddPhysChCapability768::itemsInfo[2] = {
	&DLPhysChCapabilityInfoTDD768::theInfo,
	&ULPhysChCapabilityTDD::theInfo,
};
bool PhysicalChannelCapabilityInfov770extTddPhysChCapability768::itemsPres[2] = {
	1,
	1,
};
const PhysicalChannelCapabilityInfov770extTddPhysChCapability768::Info PhysicalChannelCapabilityInfov770extTddPhysChCapability768::theInfo = {
	PhysicalChannelCapabilityInfov770extTddPhysChCapability768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
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

const void *PhysicalChannelCapabilityInfov770extTddPhysChCapability128::itemsInfo[1] = {
	&ULPhysChCapabilityInfoTDD128v770ext::theInfo,
};
bool PhysicalChannelCapabilityInfov770extTddPhysChCapability128::itemsPres[1] = {
	1,
};
const PhysicalChannelCapabilityInfov770extTddPhysChCapability128::Info PhysicalChannelCapabilityInfov770extTddPhysChCapability128::theInfo = {
	PhysicalChannelCapabilityInfov770extTddPhysChCapability128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PhysicalChannelCapabilityInfov770ext::itemsInfo[2] = {
	&PhysicalChannelCapabilityInfov770extTddPhysChCapability768::theInfo,
	&PhysicalChannelCapabilityInfov770extTddPhysChCapability128::theInfo,
};
bool PhysicalChannelCapabilityInfov770ext::itemsPres[2] = {
	0,
	0,
};
const PhysicalChannelCapabilityInfov770ext::Info PhysicalChannelCapabilityInfov770ext::theInfo = {
	PhysicalChannelCapabilityInfov770ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *ULPhysChCapabilityTDDLCRr4::itemsInfo[5] = {
	&MaxTSPerSubFramer4::theInfo,
	&MaxPhysChPerTimeslot::theInfo,
	&MinimumSFUL::theInfo,
	&ULPhysChCapabilityTDDLCRr4SupportOfPUSCH::theInfo,
	&ULPhysChCapabilityTDDLCRr4SupportOf8PSK::theInfo,
};
bool ULPhysChCapabilityTDDLCRr4::itemsPres[5] = {
	1,
	1,
	1,
	1,
	1,
};
const ULPhysChCapabilityTDDLCRr4::Info ULPhysChCapabilityTDDLCRr4::theInfo = {
	ULPhysChCapabilityTDDLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 0, 0
};

const void *PhysicalChannelCapabilityLCRr4Tdd128PhysChCapability::itemsInfo[2] = {
	&DLPhysChCapabilityTDDLCRr4::theInfo,
	&ULPhysChCapabilityTDDLCRr4::theInfo,
};
bool PhysicalChannelCapabilityLCRr4Tdd128PhysChCapability::itemsPres[2] = {
	1,
	1,
};
const PhysicalChannelCapabilityLCRr4Tdd128PhysChCapability::Info PhysicalChannelCapabilityLCRr4Tdd128PhysChCapability::theInfo = {
	PhysicalChannelCapabilityLCRr4Tdd128PhysChCapability::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
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

const void *PhysicalChannelCapabilityhspdschr5FddhspdschSupported::itemsInfo[3] = {
	&HSDSCHphysicallayercategory::theInfo,
	&PhysicalChannelCapabilityhspdschr5FddhspdschSupportedDummy::theInfo,
	&PhysicalChannelCapabilityhspdschr5FddhspdschSupportedDummy2::theInfo,
};
bool PhysicalChannelCapabilityhspdschr5FddhspdschSupported::itemsPres[3] = {
	1,
	1,
	1,
};
const PhysicalChannelCapabilityhspdschr5FddhspdschSupported::Info PhysicalChannelCapabilityhspdschr5FddhspdschSupported::theInfo = {
	PhysicalChannelCapabilityhspdschr5FddhspdschSupported::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *PhysicalChannelCapabilityhspdschr5Fddhspdsch::choicesInfo[2] = {
	&PhysicalChannelCapabilityhspdschr5FddhspdschSupported::theInfo,
	&PhysicalChannelCapabilityhspdschr5FddhspdschUnsupported::theInfo,
};
const PhysicalChannelCapabilityhspdschr5Fddhspdsch::Info PhysicalChannelCapabilityhspdschr5Fddhspdsch::theInfo = {
	PhysicalChannelCapabilityhspdschr5Fddhspdsch::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *PhysicalChannelCapabilityhspdschr5Tdd384hspdsch::choicesInfo[2] = {
	&HSDSCHphysicallayercategory::theInfo,
	&PhysicalChannelCapabilityhspdschr5Tdd384hspdschUnsupported::theInfo,
};
const PhysicalChannelCapabilityhspdschr5Tdd384hspdsch::Info PhysicalChannelCapabilityhspdschr5Tdd384hspdsch::theInfo = {
	PhysicalChannelCapabilityhspdschr5Tdd384hspdsch::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *PhysicalChannelCapabilityhspdschr5Tdd128hspdsch::choicesInfo[2] = {
	&HSDSCHphysicallayercategory::theInfo,
	&PhysicalChannelCapabilityhspdschr5Tdd128hspdschUnsupported::theInfo,
};
const PhysicalChannelCapabilityhspdschr5Tdd128hspdsch::Info PhysicalChannelCapabilityhspdschr5Tdd128hspdsch::theInfo = {
	PhysicalChannelCapabilityhspdschr5Tdd128hspdsch::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *PhysicalChannelCapabilityhspdschr5::itemsInfo[3] = {
	&PhysicalChannelCapabilityhspdschr5Fddhspdsch::theInfo,
	&PhysicalChannelCapabilityhspdschr5Tdd384hspdsch::theInfo,
	&PhysicalChannelCapabilityhspdschr5Tdd128hspdsch::theInfo,
};
bool PhysicalChannelCapabilityhspdschr5::itemsPres[3] = {
	1,
	1,
	1,
};
const PhysicalChannelCapabilityhspdschr5::Info PhysicalChannelCapabilityhspdschr5::theInfo = {
	PhysicalChannelCapabilityhspdschr5::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
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

const void *PreRedirectionInfo::itemsInfo[2] = {
	&PreRedirectionInfoSupportEUTRAFDD::theInfo,
	&PreRedirectionInfoSupportEUTRATDD::theInfo,
};
bool PreRedirectionInfo::itemsPres[2] = {
	1,
	1,
};
const PreRedirectionInfo::Info PreRedirectionInfo::theInfo = {
	PreRedirectionInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *ProtocolErrorIndicatorWithMoreInfoErrorOccurred::itemsInfo[2] = {
	&RRCTransactionIdentifier::theInfo,
	&ProtocolErrorInformation::theInfo,
};
bool ProtocolErrorIndicatorWithMoreInfoErrorOccurred::itemsPres[2] = {
	1,
	1,
};
const ProtocolErrorIndicatorWithMoreInfoErrorOccurred::Info ProtocolErrorIndicatorWithMoreInfoErrorOccurred::theInfo = {
	ProtocolErrorIndicatorWithMoreInfoErrorOccurred::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *ProtocolErrorIndicatorWithMoreInfo::choicesInfo[2] = {
	&ProtocolErrorIndicatorWithMoreInfoNoError::theInfo,
	&ProtocolErrorIndicatorWithMoreInfoErrorOccurred::theInfo,
};
const ProtocolErrorIndicatorWithMoreInfo::Info ProtocolErrorIndicatorWithMoreInfo::theInfo = {
	ProtocolErrorIndicatorWithMoreInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *IdentificationOfReceivedMessage::itemsInfo[2] = {
	&RRCTransactionIdentifier::theInfo,
	&ReceivedMessageType::theInfo,
};
bool IdentificationOfReceivedMessage::itemsPres[2] = {
	1,
	1,
};
const IdentificationOfReceivedMessage::Info IdentificationOfReceivedMessage::theInfo = {
	IdentificationOfReceivedMessage::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *ProtocolErrorMoreInformationDiagnosticsTypeType1::choicesInfo[8] = {
	&ProtocolErrorMoreInformationDiagnosticsTypeType1Asn1ViolationOrEncodingError::theInfo,
	&ProtocolErrorMoreInformationDiagnosticsTypeType1MessageTypeNonexistent::theInfo,
	&IdentificationOfReceivedMessage::theInfo,
	&IdentificationOfReceivedMessage::theInfo,
	&IdentificationOfReceivedMessage::theInfo,
	&IdentificationOfReceivedMessage::theInfo,
	&ProtocolErrorMoreInformationDiagnosticsTypeType1Spare1::theInfo,
	&ProtocolErrorMoreInformationDiagnosticsTypeType1Spare2::theInfo,
};
const ProtocolErrorMoreInformationDiagnosticsTypeType1::Info ProtocolErrorMoreInformationDiagnosticsTypeType1::theInfo = {
	ProtocolErrorMoreInformationDiagnosticsTypeType1::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	7
};

const void *ProtocolErrorMoreInformationDiagnosticsType::choicesInfo[2] = {
	&ProtocolErrorMoreInformationDiagnosticsTypeType1::theInfo,
	&ProtocolErrorMoreInformationDiagnosticsTypeSpare::theInfo,
};
const ProtocolErrorMoreInformationDiagnosticsType::Info ProtocolErrorMoreInformationDiagnosticsType::theInfo = {
	ProtocolErrorMoreInformationDiagnosticsType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
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

const void *Rbtimerindicator::itemsInfo[2] = {
	&RbtimerindicatorT314expired::theInfo,
	&RbtimerindicatorT315expired::theInfo,
};
bool Rbtimerindicator::itemsPres[2] = {
	1,
	1,
};
const Rbtimerindicator::Info Rbtimerindicator::theInfo = {
	Rbtimerindicator::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *RedirectionInfo::choicesInfo[2] = {
	&FrequencyInfo::theInfo,
	&InterRATInfo::theInfo,
};
const RedirectionInfo::Info RedirectionInfo::theInfo = {
	RedirectionInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *BSIC::itemsInfo[2] = {
	&NCC::theInfo,
	&BCC::theInfo,
};
bool BSIC::itemsPres[2] = {
	1,
	1,
};
const BSIC::Info BSIC::theInfo = {
	BSIC::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *GSMTargetCellInfo::itemsInfo[3] = {
	&BCCHARFCN::theInfo,
	&FrequencyBand::theInfo,
	&BSIC::theInfo,
};
bool GSMTargetCellInfo::itemsPres[3] = {
	1,
	1,
	0,
};
const GSMTargetCellInfo::Info GSMTargetCellInfo::theInfo = {
	GSMTargetCellInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};

const void *InterRATInfor6::itemsInfo[2] = {
	&InterRATInfo::theInfo,
	&GSMTargetCellInfoList::theInfo,
};
bool InterRATInfor6::itemsPres[2] = {
	1,
	0,
};
const InterRATInfor6::Info InterRATInfor6::theInfo = {
	InterRATInfor6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *RedirectionInfor6::choicesInfo[2] = {
	&FrequencyInfo::theInfo,
	&InterRATInfor6::theInfo,
};
const RedirectionInfor6::Info RedirectionInfor6::theInfo = {
	RedirectionInfor6::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
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

const void *EUTRATargetFreqInfo::itemsInfo[2] = {
	&EARFCN::theInfo,
	&EUTRABlacklistedCellPerFreqList::theInfo,
};
bool EUTRATargetFreqInfo::itemsPres[2] = {
	1,
	0,
};
const EUTRATargetFreqInfo::Info EUTRATargetFreqInfo::theInfo = {
	EUTRATargetFreqInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *InterRATInfov860extEutra::itemsInfo[1] = {
	&EUTRATargetFreqInfoList::theInfo,
};
bool InterRATInfov860extEutra::itemsPres[1] = {
	1,
};
const InterRATInfov860extEutra::Info InterRATInfov860extEutra::theInfo = {
	InterRATInfov860extEutra::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *InterRATInfov860ext::choicesInfo[2] = {
	&InterRATInfov860extGsm::theInfo,
	&InterRATInfov860extEutra::theInfo,
};
const InterRATInfov860ext::Info InterRATInfov860ext::theInfo = {
	InterRATInfov860ext::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *RedirectionInfov860ext::choicesInfo[2] = {
	&RedirectionInfov860extFrequencyInfo::theInfo,
	&InterRATInfov860ext::theInfo,
};
const RedirectionInfov860ext::Info RedirectionInfov860ext::theInfo = {
	RedirectionInfov860ext::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *RFCapabilityFddRFCapability::itemsInfo[2] = {
	&UEPowerClass::theInfo,
	&TxRxFrequencySeparation::theInfo,
};
bool RFCapabilityFddRFCapability::itemsPres[2] = {
	1,
	1,
};
const RFCapabilityFddRFCapability::Info RFCapabilityFddRFCapability::theInfo = {
	RFCapabilityFddRFCapability::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *RFCapabilityTddRFCapability::itemsInfo[3] = {
	&UEPowerClass::theInfo,
	&RadioFrequencyBandTDDList::theInfo,
	&ChipRateCapability::theInfo,
};
bool RFCapabilityTddRFCapability::itemsPres[3] = {
	1,
	1,
	1,
};
const RFCapabilityTddRFCapability::Info RFCapabilityTddRFCapability::theInfo = {
	RFCapabilityTddRFCapability::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *RFCapability::itemsInfo[2] = {
	&RFCapabilityFddRFCapability::theInfo,
	&RFCapabilityTddRFCapability::theInfo,
};
bool RFCapability::itemsPres[2] = {
	0,
	0,
};
const RFCapability::Info RFCapability::theInfo = {
	RFCapability::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *RFCapabilityr4extTddRFCapability::itemsInfo[3] = {
	&UEPowerClass::theInfo,
	&RadioFrequencyBandTDDList::theInfo,
	&ChipRateCapability::theInfo,
};
bool RFCapabilityr4extTddRFCapability::itemsPres[3] = {
	1,
	1,
	1,
};
const RFCapabilityr4extTddRFCapability::Info RFCapabilityr4extTddRFCapability::theInfo = {
	RFCapabilityr4extTddRFCapability::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
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

const void *RFCapabilityv770extTdd768RFCapability::itemsInfo[2] = {
	&UEPowerClass::theInfo,
	&RadioFrequencyBandTDDListr7::theInfo,
};
bool RFCapabilityv770extTdd768RFCapability::itemsPres[2] = {
	1,
	1,
};
const RFCapabilityv770extTdd768RFCapability::Info RFCapabilityv770extTdd768RFCapability::theInfo = {
	RFCapabilityv770extTdd768RFCapability::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *RFCapabilityv770ext::itemsInfo[3] = {
	&RadioFrequencyBandTDDListr7::theInfo,
	&RFCapabilityv770extTdd768RFCapability::theInfo,
	&RadioFrequencyBandTDDListr7::theInfo,
};
bool RFCapabilityv770ext::itemsPres[3] = {
	0,
	0,
	0,
};
const RFCapabilityv770ext::Info RFCapabilityv770ext::theInfo = {
	RFCapabilityv770ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *RFCapabilityv860ext::itemsInfo[3] = {
	&RadioFrequencyBandTDDextList::theInfo,
	&RadioFrequencyBandTDDextList::theInfo,
	&RadioFrequencyBandTDDextList::theInfo,
};
bool RFCapabilityv860ext::itemsPres[3] = {
	0,
	0,
	0,
};
const RFCapabilityv860ext::Info RFCapabilityv860ext::theInfo = {
	RFCapabilityv860ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *RLCCapability::itemsInfo[3] = {
	&TotalRLCAMBufferSize::theInfo,
	&MaximumRLCWindowSize::theInfo,
	&MaximumAMEntityNumberRLCCap::theInfo,
};
bool RLCCapability::itemsPres[3] = {
	1,
	1,
	1,
};
const RLCCapability::Info RLCCapability::theInfo = {
	RLCCapability::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
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

const void *SecurityCapability::itemsInfo[2] = {
	&SecurityCapabilityCipheringAlgorithmCap::theInfo,
	&SecurityCapabilityIntegrityProtectionAlgorithmCap::theInfo,
};
bool SecurityCapability::itemsPres[2] = {
	1,
	1,
};
const SecurityCapability::Info SecurityCapability::theInfo = {
	SecurityCapability::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *SecondaryServingEDCHCellInfo::itemsInfo[2] = {
	&ERNTI::theInfo,
	&ERNTI::theInfo,
};
bool SecondaryServingEDCHCellInfo::itemsPres[2] = {
	0,
	0,
};
const SecondaryServingEDCHCellInfo::Info SecondaryServingEDCHCellInfo::theInfo = {
	SecondaryServingEDCHCellInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *SecondaryEDCHInfoCommonServingGrant::itemsInfo[1] = {
	&SecondaryEDCHInfoCommonServingGrantprimary_Secondary_GrantSelector::theInfo,
};
bool SecondaryEDCHInfoCommonServingGrant::itemsPres[1] = {
	1,
};
const SecondaryEDCHInfoCommonServingGrant::Info SecondaryEDCHInfoCommonServingGrant::theInfo = {
	SecondaryEDCHInfoCommonServingGrant::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *SecondaryEDCHInfoCommon::itemsInfo[9] = {
	&FrequencyInfo::theInfo,
	&ScramblingCodeType::theInfo,
	&ULScramblingCode::theInfo,
	&SecondaryEDCHInfoCommonMs2SchedTransmGrantHARQAlloc::theInfo,
	&SecondaryEDCHInfoCommonServingGrant::theInfo,
	&MinReducedEDPDCHGainFactor::theInfo,
	&EDCHMinimumSetETFCI::theInfo,
	&SecondaryEDCHInfoCommonDpcchPowerOffsetSecondaryULFrequency::theInfo,
	&PCPreamble::theInfo,
};
bool SecondaryEDCHInfoCommon::itemsPres[9] = {
	1,
	1,
	1,
	0,
	0,
	0,
	0,
	1,
	1,
};
const SecondaryEDCHInfoCommon::Info SecondaryEDCHInfoCommon::theInfo = {
	SecondaryEDCHInfoCommon::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	9, 4, 0
};

const void *HSSCCHInfoModeSpecificInfoFdd::itemsInfo[2] = {
	&HSSCCHInfoModeSpecificInfoFddHSSCCHChannelisationCodeInfo::theInfo,
	&SecondaryScramblingCode::theInfo,
};
bool HSSCCHInfoModeSpecificInfoFdd::itemsPres[2] = {
	1,
	0,
};
const HSSCCHInfoModeSpecificInfoFdd::Info HSSCCHInfoModeSpecificInfoFdd::theInfo = {
	HSSCCHInfoModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *HSSICHPowerControlInfoTDD384::itemsInfo[2] = {
	&HSSICHPowerControlInfoTDD384UltargetSIR::theInfo,
	&ConstantValue::theInfo,
};
bool HSSICHPowerControlInfoTDD384::itemsPres[2] = {
	1,
	1,
};
const HSSICHPowerControlInfoTDD384::Info HSSICHPowerControlInfoTDD384::theInfo = {
	HSSICHPowerControlInfoTDD384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *HSSCCHTDD384MidambleAllocationModeUeSpecificMidamble::itemsInfo[1] = {
	&MidambleShiftLong::theInfo,
};
bool HSSCCHTDD384MidambleAllocationModeUeSpecificMidamble::itemsPres[1] = {
	1,
};
const HSSCCHTDD384MidambleAllocationModeUeSpecificMidamble::Info HSSCCHTDD384MidambleAllocationModeUeSpecificMidamble::theInfo = {
	HSSCCHTDD384MidambleAllocationModeUeSpecificMidamble::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *HSSCCHTDD384MidambleAllocationMode::choicesInfo[3] = {
	&HSSCCHTDD384MidambleAllocationModeDefaultMidamble::theInfo,
	&HSSCCHTDD384MidambleAllocationModeCommonMidamble::theInfo,
	&HSSCCHTDD384MidambleAllocationModeUeSpecificMidamble::theInfo,
};
const HSSCCHTDD384MidambleAllocationMode::Info HSSCCHTDD384MidambleAllocationMode::theInfo = {
	HSSCCHTDD384MidambleAllocationMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *HSSICHConfigurationTDD384MidambleAllocationModeUeSpecificMidamble::itemsInfo[1] = {
	&MidambleShiftLong::theInfo,
};
bool HSSICHConfigurationTDD384MidambleAllocationModeUeSpecificMidamble::itemsPres[1] = {
	1,
};
const HSSICHConfigurationTDD384MidambleAllocationModeUeSpecificMidamble::Info HSSICHConfigurationTDD384MidambleAllocationModeUeSpecificMidamble::theInfo = {
	HSSICHConfigurationTDD384MidambleAllocationModeUeSpecificMidamble::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *HSSICHConfigurationTDD384MidambleAllocationMode::choicesInfo[2] = {
	&HSSICHConfigurationTDD384MidambleAllocationModeDefaultMidamble::theInfo,
	&HSSICHConfigurationTDD384MidambleAllocationModeUeSpecificMidamble::theInfo,
};
const HSSICHConfigurationTDD384MidambleAllocationMode::Info HSSICHConfigurationTDD384MidambleAllocationMode::theInfo = {
	HSSICHConfigurationTDD384MidambleAllocationMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *HSSICHConfigurationTDD384::itemsInfo[4] = {
	&TimeslotNumber::theInfo,
	&DLTSChannelisationCode::theInfo,
	&HSSICHConfigurationTDD384MidambleAllocationMode::theInfo,
	&MidambleConfigurationBurstType1and3::theInfo,
};
bool HSSICHConfigurationTDD384::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const HSSICHConfigurationTDD384::Info HSSICHConfigurationTDD384::theInfo = {
	HSSICHConfigurationTDD384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 0, 0
};

const void *HSSCCHTDD384::itemsInfo[6] = {
	&TimeslotNumber::theInfo,
	&DLTSChannelisationCode::theInfo,
	&HSSCCHTDD384MidambleAllocationMode::theInfo,
	&MidambleConfigurationBurstType1and3::theInfo,
	&BlerTarget::theInfo,
	&HSSICHConfigurationTDD384::theInfo,
};
bool HSSCCHTDD384::itemsPres[6] = {
	1,
	1,
	1,
	1,
	1,
	1,
};
const HSSCCHTDD384::Info HSSCCHTDD384::theInfo = {
	HSSCCHTDD384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 0, 0
};

const void *HSSCCHInfoModeSpecificInfoTddTdd384::itemsInfo[3] = {
	&HSSCCHInfoModeSpecificInfoTddTdd384Nackackpoweroffset::theInfo,
	&HSSICHPowerControlInfoTDD384::theInfo,
	&HSSCCHInfoModeSpecificInfoTddTdd384HSSCCHSetConfiguration::theInfo,
};
bool HSSCCHInfoModeSpecificInfoTddTdd384::itemsPres[3] = {
	1,
	1,
	1,
};
const HSSCCHInfoModeSpecificInfoTddTdd384::Info HSSCCHInfoModeSpecificInfoTddTdd384::theInfo = {
	HSSCCHInfoModeSpecificInfoTddTdd384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *HSSCCHTDD128MidambleAllocationMode::choicesInfo[3] = {
	&HSSCCHTDD128MidambleAllocationModeDefaultMidamble::theInfo,
	&HSSCCHTDD128MidambleAllocationModeCommonMidamble::theInfo,
	&HSSCCHTDD128MidambleAllocationModeUeSpecificMidamble::theInfo,
};
const HSSCCHTDD128MidambleAllocationMode::Info HSSCCHTDD128MidambleAllocationMode::theInfo = {
	HSSCCHTDD128MidambleAllocationMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *HSSICHConfigurationTDD128MidambleAllocationModeUeSpecificMidamble::itemsInfo[1] = {
	&MidambleShiftLong::theInfo,
};
bool HSSICHConfigurationTDD128MidambleAllocationModeUeSpecificMidamble::itemsPres[1] = {
	1,
};
const HSSICHConfigurationTDD128MidambleAllocationModeUeSpecificMidamble::Info HSSICHConfigurationTDD128MidambleAllocationModeUeSpecificMidamble::theInfo = {
	HSSICHConfigurationTDD128MidambleAllocationModeUeSpecificMidamble::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *HSSICHConfigurationTDD128MidambleAllocationMode::choicesInfo[2] = {
	&HSSICHConfigurationTDD128MidambleAllocationModeDefaultMidamble::theInfo,
	&HSSICHConfigurationTDD128MidambleAllocationModeUeSpecificMidamble::theInfo,
};
const HSSICHConfigurationTDD128MidambleAllocationMode::Info HSSICHConfigurationTDD128MidambleAllocationMode::theInfo = {
	HSSICHConfigurationTDD128MidambleAllocationMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *HSSICHConfigurationTDD128::itemsInfo[7] = {
	&TimeslotNumberLCRr4::theInfo,
	&HSChannelisationCodeLCR::theInfo,
	&HSSICHConfigurationTDD128MidambleAllocationMode::theInfo,
	&HSSICHConfigurationTDD128MidambleConfiguration::theInfo,
	&HSSICHConfigurationTDD128Nackackpoweroffset::theInfo,
	&HSSICHConfigurationTDD128PowerlevelHSSICH::theInfo,
	&HSSICHConfigurationTDD128tpc_step_size::theInfo,
};
bool HSSICHConfigurationTDD128::itemsPres[7] = {
	1,
	1,
	1,
	1,
	1,
	1,
	1,
};
const HSSICHConfigurationTDD128::Info HSSICHConfigurationTDD128::theInfo = {
	HSSICHConfigurationTDD128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	7, 0, 0
};

const void *HSSCCHTDD128::itemsInfo[7] = {
	&TimeslotNumberLCRr4::theInfo,
	&HSChannelisationCodeLCR::theInfo,
	&HSChannelisationCodeLCR::theInfo,
	&HSSCCHTDD128MidambleAllocationMode::theInfo,
	&HSSCCHTDD128MidambleConfiguration::theInfo,
	&BlerTarget::theInfo,
	&HSSICHConfigurationTDD128::theInfo,
};
bool HSSCCHTDD128::itemsPres[7] = {
	1,
	1,
	1,
	1,
	1,
	1,
	1,
};
const HSSCCHTDD128::Info HSSCCHTDD128::theInfo = {
	HSSCCHTDD128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	7, 0, 0
};

const void *HSSCCHInfoModeSpecificInfoTdd::choicesInfo[2] = {
	&HSSCCHInfoModeSpecificInfoTddTdd384::theInfo,
	&HSSCCHInfoModeSpecificInfoTddTdd128::theInfo,
};
const HSSCCHInfoModeSpecificInfoTdd::Info HSSCCHInfoModeSpecificInfoTdd::theInfo = {
	HSSCCHInfoModeSpecificInfoTdd::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *HSSCCHInfoModeSpecificInfo::choicesInfo[2] = {
	&HSSCCHInfoModeSpecificInfoFdd::theInfo,
	&HSSCCHInfoModeSpecificInfoTdd::theInfo,
};
const HSSCCHInfoModeSpecificInfo::Info HSSCCHInfoModeSpecificInfo::theInfo = {
	HSSCCHInfoModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
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

const void *MeasurementFeedbackInfoModeSpecificInfoFdd::itemsInfo[4] = {
	&MeasurementPowerOffset::theInfo,
	&Feedbackcycle::theInfo,
	&CQIRepetitionFactor::theInfo,
	&DeltaCQI::theInfo,
};
bool MeasurementFeedbackInfoModeSpecificInfoFdd::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const MeasurementFeedbackInfoModeSpecificInfoFdd::Info MeasurementFeedbackInfoModeSpecificInfoFdd::theInfo = {
	MeasurementFeedbackInfoModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 0, 0
};

const void *MeasurementFeedbackInfoModeSpecificInfo::choicesInfo[2] = {
	&MeasurementFeedbackInfoModeSpecificInfoFdd::theInfo,
	&MeasurementFeedbackInfoModeSpecificInfoTdd::theInfo,
};
const MeasurementFeedbackInfoModeSpecificInfo::Info MeasurementFeedbackInfoModeSpecificInfo::theInfo = {
	MeasurementFeedbackInfoModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
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

const void *DLHSPDSCHInformationModeSpecificInfoTddTdd384::itemsInfo[1] = {
	&DLHSPDSCHTSConfiguration::theInfo,
};
bool DLHSPDSCHInformationModeSpecificInfoTddTdd384::itemsPres[1] = {
	0,
};
const DLHSPDSCHInformationModeSpecificInfoTddTdd384::Info DLHSPDSCHInformationModeSpecificInfoTddTdd384::theInfo = {
	DLHSPDSCHInformationModeSpecificInfoTddTdd384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *HSPDSCHMidambleConfigurationTDD128MidambleAllocationMode::choicesInfo[3] = {
	&HSPDSCHMidambleConfigurationTDD128MidambleAllocationModeDefaultMidamble::theInfo,
	&HSPDSCHMidambleConfigurationTDD128MidambleAllocationModeCommonMidamble::theInfo,
	&HSPDSCHMidambleConfigurationTDD128MidambleAllocationModeUeSpecificMidamble::theInfo,
};
const HSPDSCHMidambleConfigurationTDD128MidambleAllocationMode::Info HSPDSCHMidambleConfigurationTDD128MidambleAllocationMode::theInfo = {
	HSPDSCHMidambleConfigurationTDD128MidambleAllocationMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *HSPDSCHMidambleConfigurationTDD128::itemsInfo[2] = {
	&HSPDSCHMidambleConfigurationTDD128MidambleAllocationMode::theInfo,
	&HSPDSCHMidambleConfigurationTDD128MidambleConfiguration::theInfo,
};
bool HSPDSCHMidambleConfigurationTDD128::itemsPres[2] = {
	1,
	1,
};
const HSPDSCHMidambleConfigurationTDD128::Info HSPDSCHMidambleConfigurationTDD128::theInfo = {
	HSPDSCHMidambleConfigurationTDD128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *DLHSPDSCHInformationModeSpecificInfoTddTdd128::itemsInfo[1] = {
	&HSPDSCHMidambleConfigurationTDD128::theInfo,
};
bool DLHSPDSCHInformationModeSpecificInfoTddTdd128::itemsPres[1] = {
	0,
};
const DLHSPDSCHInformationModeSpecificInfoTddTdd128::Info DLHSPDSCHInformationModeSpecificInfoTddTdd128::theInfo = {
	DLHSPDSCHInformationModeSpecificInfoTddTdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLHSPDSCHInformationModeSpecificInfoTdd::choicesInfo[2] = {
	&DLHSPDSCHInformationModeSpecificInfoTddTdd384::theInfo,
	&DLHSPDSCHInformationModeSpecificInfoTddTdd128::theInfo,
};
const DLHSPDSCHInformationModeSpecificInfoTdd::Info DLHSPDSCHInformationModeSpecificInfoTdd::theInfo = {
	DLHSPDSCHInformationModeSpecificInfoTdd::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLHSPDSCHInformationModeSpecificInfo::choicesInfo[2] = {
	&DLHSPDSCHInformationModeSpecificInfoTdd::theInfo,
	&DLHSPDSCHInformationModeSpecificInfoFdd::theInfo,
};
const DLHSPDSCHInformationModeSpecificInfo::Info DLHSPDSCHInformationModeSpecificInfo::theInfo = {
	DLHSPDSCHInformationModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLHSPDSCHInformation::itemsInfo[3] = {
	&HSSCCHInfo::theInfo,
	&MeasurementFeedbackInfo::theInfo,
	&DLHSPDSCHInformationModeSpecificInfo::theInfo,
};
bool DLHSPDSCHInformation::itemsPres[3] = {
	0,
	0,
	1,
};
const DLHSPDSCHInformation::Info DLHSPDSCHInformation::theInfo = {
	DLHSPDSCHInformation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *HARQInfoMemoryPartitioning::choicesInfo[2] = {
	&HARQInfoMemoryPartitioningImplicit::theInfo,
	&HARQInfoMemoryPartitioningExplicit::theInfo,
};
const HARQInfoMemoryPartitioning::Info HARQInfoMemoryPartitioning::theInfo = {
	HARQInfoMemoryPartitioning::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *HARQInfo::itemsInfo[2] = {
	&HARQInfoNumberOfProcesses::theInfo,
	&HARQInfoMemoryPartitioning::theInfo,
};
bool HARQInfo::itemsPres[2] = {
	1,
	1,
};
const HARQInfo::Info HARQInfo::theInfo = {
	HARQInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *ServingHSDSCHCellInformation::itemsInfo[7] = {
	&DeltaACK::theInfo,
	&DeltaNACK::theInfo,
	&HARQPreambleMode::theInfo,
	&PrimaryCPICHInfo::theInfo,
	&DLHSPDSCHInformation::theInfo,
	&HARQInfo::theInfo,
	&ServingHSDSCHCellInformationmac_hsResetIndicator::theInfo,
};
bool ServingHSDSCHCellInformation::itemsPres[7] = {
	0,
	0,
	1,
	0,
	0,
	0,
	0,
};
const ServingHSDSCHCellInformation::Info ServingHSDSCHCellInformation::theInfo = {
	ServingHSDSCHCellInformation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	7, 6, 0
};

const void *HSSCCHInfor7ModeSpecificInfoFdd::itemsInfo[2] = {
	&HSSCCHInfor7ModeSpecificInfoFddHSSCCHChannelisationCodeInfo::theInfo,
	&SecondaryScramblingCode::theInfo,
};
bool HSSCCHInfor7ModeSpecificInfoFdd::itemsPres[2] = {
	1,
	0,
};
const HSSCCHInfor7ModeSpecificInfoFdd::Info HSSCCHInfor7ModeSpecificInfoFdd::theInfo = {
	HSSCCHInfor7ModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *HSSCCHTDD384r6MidambleAllocationModeUeSpecificMidamble::itemsInfo[1] = {
	&MidambleShiftLong::theInfo,
};
bool HSSCCHTDD384r6MidambleAllocationModeUeSpecificMidamble::itemsPres[1] = {
	1,
};
const HSSCCHTDD384r6MidambleAllocationModeUeSpecificMidamble::Info HSSCCHTDD384r6MidambleAllocationModeUeSpecificMidamble::theInfo = {
	HSSCCHTDD384r6MidambleAllocationModeUeSpecificMidamble::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *HSSCCHTDD384r6MidambleAllocationMode::choicesInfo[3] = {
	&HSSCCHTDD384r6MidambleAllocationModeDefaultMidamble::theInfo,
	&HSSCCHTDD384r6MidambleAllocationModeCommonMidamble::theInfo,
	&HSSCCHTDD384r6MidambleAllocationModeUeSpecificMidamble::theInfo,
};
const HSSCCHTDD384r6MidambleAllocationMode::Info HSSCCHTDD384r6MidambleAllocationMode::theInfo = {
	HSSCCHTDD384r6MidambleAllocationMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *HSSCCHTDD384r6::itemsInfo[5] = {
	&TimeslotNumber::theInfo,
	&DLTSChannelisationCode::theInfo,
	&HSSCCHTDD384r6MidambleAllocationMode::theInfo,
	&MidambleConfigurationBurstType1and3::theInfo,
	&HSSICHConfigurationTDD384::theInfo,
};
bool HSSCCHTDD384r6::itemsPres[5] = {
	1,
	1,
	1,
	1,
	1,
};
const HSSCCHTDD384r6::Info HSSCCHTDD384r6::theInfo = {
	HSSCCHTDD384r6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 0, 0
};

const void *HSSCCHInfor7ModeSpecificInfoTddTdd384::itemsInfo[5] = {
	&HSSCCHInfor7ModeSpecificInfoTddTdd384Nackackpoweroffset::theInfo,
	&HSSICHPowerControlInfoTDD384::theInfo,
	&DHSSync::theInfo,
	&BlerTarget::theInfo,
	&HSSCCHInfor7ModeSpecificInfoTddTdd384HSSCCHSetConfiguration::theInfo,
};
bool HSSCCHInfor7ModeSpecificInfoTddTdd384::itemsPres[5] = {
	1,
	1,
	0,
	1,
	1,
};
const HSSCCHInfor7ModeSpecificInfoTddTdd384::Info HSSCCHInfor7ModeSpecificInfoTddTdd384::theInfo = {
	HSSCCHInfor7ModeSpecificInfoTddTdd384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 1, 0
};

const void *HSSICHPowerControlInfoTDD768::itemsInfo[2] = {
	&HSSICHPowerControlInfoTDD768UltargetSIR::theInfo,
	&ConstantValue::theInfo,
};
bool HSSICHPowerControlInfoTDD768::itemsPres[2] = {
	1,
	1,
};
const HSSICHPowerControlInfoTDD768::Info HSSICHPowerControlInfoTDD768::theInfo = {
	HSSICHPowerControlInfoTDD768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *HSSCCHTDD768MidambleAllocationModeUeSpecificMidamble::itemsInfo[1] = {
	&MidambleShiftLong::theInfo,
};
bool HSSCCHTDD768MidambleAllocationModeUeSpecificMidamble::itemsPres[1] = {
	1,
};
const HSSCCHTDD768MidambleAllocationModeUeSpecificMidamble::Info HSSCCHTDD768MidambleAllocationModeUeSpecificMidamble::theInfo = {
	HSSCCHTDD768MidambleAllocationModeUeSpecificMidamble::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *HSSCCHTDD768MidambleAllocationMode::choicesInfo[3] = {
	&HSSCCHTDD768MidambleAllocationModeDefaultMidamble::theInfo,
	&HSSCCHTDD768MidambleAllocationModeCommonMidamble::theInfo,
	&HSSCCHTDD768MidambleAllocationModeUeSpecificMidamble::theInfo,
};
const HSSCCHTDD768MidambleAllocationMode::Info HSSCCHTDD768MidambleAllocationMode::theInfo = {
	HSSCCHTDD768MidambleAllocationMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *HSSICHConfigurationTDD768MidambleAllocationModeUeSpecificMidamble::itemsInfo[1] = {
	&MidambleShiftLong::theInfo,
};
bool HSSICHConfigurationTDD768MidambleAllocationModeUeSpecificMidamble::itemsPres[1] = {
	1,
};
const HSSICHConfigurationTDD768MidambleAllocationModeUeSpecificMidamble::Info HSSICHConfigurationTDD768MidambleAllocationModeUeSpecificMidamble::theInfo = {
	HSSICHConfigurationTDD768MidambleAllocationModeUeSpecificMidamble::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *HSSICHConfigurationTDD768MidambleAllocationMode::choicesInfo[2] = {
	&HSSICHConfigurationTDD768MidambleAllocationModeDefaultMidamble::theInfo,
	&HSSICHConfigurationTDD768MidambleAllocationModeUeSpecificMidamble::theInfo,
};
const HSSICHConfigurationTDD768MidambleAllocationMode::Info HSSICHConfigurationTDD768MidambleAllocationMode::theInfo = {
	HSSICHConfigurationTDD768MidambleAllocationMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *HSSICHConfigurationTDD768::itemsInfo[4] = {
	&TimeslotNumber::theInfo,
	&DLTSChannelisationCodeVHCR::theInfo,
	&HSSICHConfigurationTDD768MidambleAllocationMode::theInfo,
	&MidambleConfigurationBurstType1and3::theInfo,
};
bool HSSICHConfigurationTDD768::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const HSSICHConfigurationTDD768::Info HSSICHConfigurationTDD768::theInfo = {
	HSSICHConfigurationTDD768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 0, 0
};

const void *HSSCCHTDD768::itemsInfo[5] = {
	&TimeslotNumber::theInfo,
	&DLTSChannelisationCodeVHCR::theInfo,
	&HSSCCHTDD768MidambleAllocationMode::theInfo,
	&MidambleConfigurationBurstType1and3::theInfo,
	&HSSICHConfigurationTDD768::theInfo,
};
bool HSSCCHTDD768::itemsPres[5] = {
	1,
	1,
	1,
	1,
	1,
};
const HSSCCHTDD768::Info HSSCCHTDD768::theInfo = {
	HSSCCHTDD768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 0, 0
};

const void *HSSCCHInfor7ModeSpecificInfoTddTdd768::itemsInfo[5] = {
	&HSSCCHInfor7ModeSpecificInfoTddTdd768Nackackpoweroffset::theInfo,
	&HSSICHPowerControlInfoTDD768::theInfo,
	&DHSSync::theInfo,
	&BlerTarget::theInfo,
	&HSSCCHInfor7ModeSpecificInfoTddTdd768HSSCCHSetConfiguration::theInfo,
};
bool HSSCCHInfor7ModeSpecificInfoTddTdd768::itemsPres[5] = {
	1,
	1,
	0,
	1,
	1,
};
const HSSCCHInfor7ModeSpecificInfoTddTdd768::Info HSSCCHInfor7ModeSpecificInfoTddTdd768::theInfo = {
	HSSCCHInfor7ModeSpecificInfoTddTdd768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 1, 0
};

const void *HSSCCHTDD128r6MidambleAllocationMode::choicesInfo[3] = {
	&HSSCCHTDD128r6MidambleAllocationModeDefaultMidamble::theInfo,
	&HSSCCHTDD128r6MidambleAllocationModeCommonMidamble::theInfo,
	&HSSCCHTDD128r6MidambleAllocationModeUeSpecificMidamble::theInfo,
};
const HSSCCHTDD128r6MidambleAllocationMode::Info HSSCCHTDD128r6MidambleAllocationMode::theInfo = {
	HSSCCHTDD128r6MidambleAllocationMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *HSSICHConfigurationTDD128r6MidambleAllocationModeUeSpecificMidamble::itemsInfo[1] = {
	&MidambleShiftLong::theInfo,
};
bool HSSICHConfigurationTDD128r6MidambleAllocationModeUeSpecificMidamble::itemsPres[1] = {
	1,
};
const HSSICHConfigurationTDD128r6MidambleAllocationModeUeSpecificMidamble::Info HSSICHConfigurationTDD128r6MidambleAllocationModeUeSpecificMidamble::theInfo = {
	HSSICHConfigurationTDD128r6MidambleAllocationModeUeSpecificMidamble::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *HSSICHConfigurationTDD128r6MidambleAllocationMode::choicesInfo[2] = {
	&HSSICHConfigurationTDD128r6MidambleAllocationModeDefaultMidamble::theInfo,
	&HSSICHConfigurationTDD128r6MidambleAllocationModeUeSpecificMidamble::theInfo,
};
const HSSICHConfigurationTDD128r6MidambleAllocationMode::Info HSSICHConfigurationTDD128r6MidambleAllocationMode::theInfo = {
	HSSICHConfigurationTDD128r6MidambleAllocationMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *HSSICHConfigurationTDD128r6::itemsInfo[4] = {
	&TimeslotNumberLCRr4::theInfo,
	&HSChannelisationCodeLCR::theInfo,
	&HSSICHConfigurationTDD128r6MidambleAllocationMode::theInfo,
	&HSSICHConfigurationTDD128r6MidambleConfiguration::theInfo,
};
bool HSSICHConfigurationTDD128r6::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const HSSICHConfigurationTDD128r6::Info HSSICHConfigurationTDD128r6::theInfo = {
	HSSICHConfigurationTDD128r6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 0, 0
};

const void *HSSCCHTDD128r6::itemsInfo[6] = {
	&TimeslotNumberLCRr4::theInfo,
	&HSChannelisationCodeLCR::theInfo,
	&HSChannelisationCodeLCR::theInfo,
	&HSSCCHTDD128r6MidambleAllocationMode::theInfo,
	&HSSCCHTDD128r6MidambleConfiguration::theInfo,
	&HSSICHConfigurationTDD128r6::theInfo,
};
bool HSSCCHTDD128r6::itemsPres[6] = {
	1,
	1,
	1,
	1,
	1,
	1,
};
const HSSCCHTDD128r6::Info HSSCCHTDD128r6::theInfo = {
	HSSCCHTDD128r6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 0, 0
};

const void *HSSCCHInfor7ModeSpecificInfoTddTdd128::itemsInfo[7] = {
	&HSSCCHInfor7ModeSpecificInfoTddTdd128Nackackpoweroffset::theInfo,
	&HSSCCHInfor7ModeSpecificInfoTddTdd128PowerlevelHSSICH::theInfo,
	&HSSCCHInfor7ModeSpecificInfoTddTdd128tpc_step_size::theInfo,
	&BlerTarget::theInfo,
	&PowerControlGAP::theInfo,
	&HSSCCHInfor7ModeSpecificInfoTddTdd128PathlossCompensationSwitch::theInfo,
	&HSSCCHInfor7ModeSpecificInfoTddTdd128HSSCCHSetConfiguration::theInfo,
};
bool HSSCCHInfor7ModeSpecificInfoTddTdd128::itemsPres[7] = {
	1,
	1,
	1,
	1,
	0,
	0,
	1,
};
const HSSCCHInfor7ModeSpecificInfoTddTdd128::Info HSSCCHInfor7ModeSpecificInfoTddTdd128::theInfo = {
	HSSCCHInfor7ModeSpecificInfoTddTdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	7, 2, 0
};

const void *HSSCCHInfor7ModeSpecificInfoTdd::choicesInfo[3] = {
	&HSSCCHInfor7ModeSpecificInfoTddTdd384::theInfo,
	&HSSCCHInfor7ModeSpecificInfoTddTdd768::theInfo,
	&HSSCCHInfor7ModeSpecificInfoTddTdd128::theInfo,
};
const HSSCCHInfor7ModeSpecificInfoTdd::Info HSSCCHInfor7ModeSpecificInfoTdd::theInfo = {
	HSSCCHInfor7ModeSpecificInfoTdd::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *HSSCCHInfor7ModeSpecificInfo::choicesInfo[2] = {
	&HSSCCHInfor7ModeSpecificInfoFdd::theInfo,
	&HSSCCHInfor7ModeSpecificInfoTdd::theInfo,
};
const HSSCCHInfor7ModeSpecificInfo::Info HSSCCHInfor7ModeSpecificInfo::theInfo = {
	HSSCCHInfor7ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
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

const void *MeasurementFeedbackInfor7ModeSpecificInfoFdd::itemsInfo[4] = {
	&MeasurementPowerOffset::theInfo,
	&Feedbackcycler7::theInfo,
	&CQIRepetitionFactor::theInfo,
	&DeltaCQI::theInfo,
};
bool MeasurementFeedbackInfor7ModeSpecificInfoFdd::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const MeasurementFeedbackInfor7ModeSpecificInfoFdd::Info MeasurementFeedbackInfor7ModeSpecificInfoFdd::theInfo = {
	MeasurementFeedbackInfor7ModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 0, 0
};

const void *MeasurementFeedbackInfor7ModeSpecificInfo::choicesInfo[2] = {
	&MeasurementFeedbackInfor7ModeSpecificInfoFdd::theInfo,
	&MeasurementFeedbackInfor7ModeSpecificInfoTdd::theInfo,
};
const MeasurementFeedbackInfor7ModeSpecificInfo::Info MeasurementFeedbackInfor7ModeSpecificInfo::theInfo = {
	MeasurementFeedbackInfor7ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
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

const void *DLHSPDSCHInformationr7ModeSpecificInfoTddTdd384::itemsInfo[1] = {
	&DLHSPDSCHTSConfiguration::theInfo,
};
bool DLHSPDSCHInformationr7ModeSpecificInfoTddTdd384::itemsPres[1] = {
	0,
};
const DLHSPDSCHInformationr7ModeSpecificInfoTddTdd384::Info DLHSPDSCHInformationr7ModeSpecificInfoTddTdd384::theInfo = {
	DLHSPDSCHInformationr7ModeSpecificInfoTddTdd384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
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

const void *DLHSPDSCHInformationr7ModeSpecificInfoTddTdd768::itemsInfo[1] = {
	&DLHSPDSCHTSConfigurationVHCR::theInfo,
};
bool DLHSPDSCHInformationr7ModeSpecificInfoTddTdd768::itemsPres[1] = {
	0,
};
const DLHSPDSCHInformationr7ModeSpecificInfoTddTdd768::Info DLHSPDSCHInformationr7ModeSpecificInfoTddTdd768::theInfo = {
	DLHSPDSCHInformationr7ModeSpecificInfoTddTdd768::create,
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

const void *DLMultiCarrierInformation::itemsInfo[3] = {
	&DLMultiCarrierInformationtsn_Length::theInfo,
	&DLMultiCarrierInformationMultiCarrierNumber::theInfo,
	&DLHSPDSCHMultiCarrierInformation::theInfo,
};
bool DLMultiCarrierInformation::itemsPres[3] = {
	0,
	0,
	0,
};
const DLMultiCarrierInformation::Info DLMultiCarrierInformation::theInfo = {
	DLMultiCarrierInformation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *DLHSPDSCHInformationr7ModeSpecificInfoTddTdd128::itemsInfo[2] = {
	&HSPDSCHMidambleConfigurationTDD128::theInfo,
	&DLMultiCarrierInformation::theInfo,
};
bool DLHSPDSCHInformationr7ModeSpecificInfoTddTdd128::itemsPres[2] = {
	0,
	0,
};
const DLHSPDSCHInformationr7ModeSpecificInfoTddTdd128::Info DLHSPDSCHInformationr7ModeSpecificInfoTddTdd128::theInfo = {
	DLHSPDSCHInformationr7ModeSpecificInfoTddTdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *DLHSPDSCHInformationr7ModeSpecificInfoTdd::choicesInfo[3] = {
	&DLHSPDSCHInformationr7ModeSpecificInfoTddTdd384::theInfo,
	&DLHSPDSCHInformationr7ModeSpecificInfoTddTdd768::theInfo,
	&DLHSPDSCHInformationr7ModeSpecificInfoTddTdd128::theInfo,
};
const DLHSPDSCHInformationr7ModeSpecificInfoTdd::Info DLHSPDSCHInformationr7ModeSpecificInfoTdd::theInfo = {
	DLHSPDSCHInformationr7ModeSpecificInfoTdd::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *DLHSPDSCHInformationr7ModeSpecificInfoFdd::itemsInfo[1] = {
	&DLHSPDSCHInformationr7ModeSpecificInfoFdddl_64QAM_Configured::theInfo,
};
bool DLHSPDSCHInformationr7ModeSpecificInfoFdd::itemsPres[1] = {
	0,
};
const DLHSPDSCHInformationr7ModeSpecificInfoFdd::Info DLHSPDSCHInformationr7ModeSpecificInfoFdd::theInfo = {
	DLHSPDSCHInformationr7ModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLHSPDSCHInformationr7ModeSpecificInfo::choicesInfo[2] = {
	&DLHSPDSCHInformationr7ModeSpecificInfoTdd::theInfo,
	&DLHSPDSCHInformationr7ModeSpecificInfoFdd::theInfo,
};
const DLHSPDSCHInformationr7ModeSpecificInfo::Info DLHSPDSCHInformationr7ModeSpecificInfo::theInfo = {
	DLHSPDSCHInformationr7ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLHSPDSCHInformationr7::itemsInfo[3] = {
	&HSSCCHInfor7::theInfo,
	&MeasurementFeedbackInfor7::theInfo,
	&DLHSPDSCHInformationr7ModeSpecificInfo::theInfo,
};
bool DLHSPDSCHInformationr7::itemsPres[3] = {
	0,
	0,
	1,
};
const DLHSPDSCHInformationr7::Info DLHSPDSCHInformationr7::theInfo = {
	DLHSPDSCHInformationr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *HARQInfor7MemoryPartitioningExplicit::itemsInfo[2] = {
	&HARQInfor7MemoryPartitioningExplicitMemorySize::theInfo,
	&HARQInfor7MemoryPartitioningExplicitAdditionalMemorySizesForMIMO::theInfo,
};
bool HARQInfor7MemoryPartitioningExplicit::itemsPres[2] = {
	1,
	0,
};
const HARQInfor7MemoryPartitioningExplicit::Info HARQInfor7MemoryPartitioningExplicit::theInfo = {
	HARQInfor7MemoryPartitioningExplicit::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *HARQInfor7MemoryPartitioning::choicesInfo[2] = {
	&HARQInfor7MemoryPartitioningImplicit::theInfo,
	&HARQInfor7MemoryPartitioningExplicit::theInfo,
};
const HARQInfor7MemoryPartitioning::Info HARQInfor7MemoryPartitioning::theInfo = {
	HARQInfor7MemoryPartitioning::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *HARQInfor7::itemsInfo[2] = {
	&HARQInfor7numberOfProcesses::theInfo,
	&HARQInfor7MemoryPartitioning::theInfo,
};
bool HARQInfor7::itemsPres[2] = {
	1,
	1,
};
const HARQInfor7::Info HARQInfor7::theInfo = {
	HARQInfor7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *ServingHSDSCHCellInformationr7::itemsInfo[7] = {
	&DeltaACK::theInfo,
	&DeltaNACK::theInfo,
	&HARQPreambleMode::theInfo,
	&PrimaryCPICHInfo::theInfo,
	&DLHSPDSCHInformationr7::theInfo,
	&HARQInfor7::theInfo,
	&ServingHSDSCHCellInformationr7mac_hsResetIndicator::theInfo,
};
bool ServingHSDSCHCellInformationr7::itemsPres[7] = {
	0,
	0,
	1,
	0,
	0,
	0,
	0,
};
const ServingHSDSCHCellInformationr7::Info ServingHSDSCHCellInformationr7::theInfo = {
	ServingHSDSCHCellInformationr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	7, 6, 0
};

const void *DLHSPDSCHInformationr8ModeSpecificInfoTddTdd384::itemsInfo[1] = {
	&DLHSPDSCHTSConfiguration::theInfo,
};
bool DLHSPDSCHInformationr8ModeSpecificInfoTddTdd384::itemsPres[1] = {
	0,
};
const DLHSPDSCHInformationr8ModeSpecificInfoTddTdd384::Info DLHSPDSCHInformationr8ModeSpecificInfoTddTdd384::theInfo = {
	DLHSPDSCHInformationr8ModeSpecificInfoTddTdd384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLHSPDSCHInformationr8ModeSpecificInfoTddTdd768::itemsInfo[1] = {
	&DLHSPDSCHTSConfigurationVHCR::theInfo,
};
bool DLHSPDSCHInformationr8ModeSpecificInfoTddTdd768::itemsPres[1] = {
	0,
};
const DLHSPDSCHInformationr8ModeSpecificInfoTddTdd768::Info DLHSPDSCHInformationr8ModeSpecificInfoTddTdd768::theInfo = {
	DLHSPDSCHInformationr8ModeSpecificInfoTddTdd768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLHSPDSCHInformationr8ModeSpecificInfoTddTdd128::itemsInfo[2] = {
	&HSPDSCHMidambleConfigurationTDD128::theInfo,
	&DLMultiCarrierInformation::theInfo,
};
bool DLHSPDSCHInformationr8ModeSpecificInfoTddTdd128::itemsPres[2] = {
	0,
	0,
};
const DLHSPDSCHInformationr8ModeSpecificInfoTddTdd128::Info DLHSPDSCHInformationr8ModeSpecificInfoTddTdd128::theInfo = {
	DLHSPDSCHInformationr8ModeSpecificInfoTddTdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *DLHSPDSCHInformationr8ModeSpecificInfoTdd::choicesInfo[3] = {
	&DLHSPDSCHInformationr8ModeSpecificInfoTddTdd384::theInfo,
	&DLHSPDSCHInformationr8ModeSpecificInfoTddTdd768::theInfo,
	&DLHSPDSCHInformationr8ModeSpecificInfoTddTdd128::theInfo,
};
const DLHSPDSCHInformationr8ModeSpecificInfoTdd::Info DLHSPDSCHInformationr8ModeSpecificInfoTdd::theInfo = {
	DLHSPDSCHInformationr8ModeSpecificInfoTdd::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *DLHSPDSCHInformationr8ModeSpecificInfoFdd::itemsInfo[2] = {
	&DLHSPDSCHInformationr8ModeSpecificInfoFdddl_64QAM_Configured::theInfo,
	&HSDSCHTBSizeTable::theInfo,
};
bool DLHSPDSCHInformationr8ModeSpecificInfoFdd::itemsPres[2] = {
	0,
	0,
};
const DLHSPDSCHInformationr8ModeSpecificInfoFdd::Info DLHSPDSCHInformationr8ModeSpecificInfoFdd::theInfo = {
	DLHSPDSCHInformationr8ModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *DLHSPDSCHInformationr8ModeSpecificInfo::choicesInfo[2] = {
	&DLHSPDSCHInformationr8ModeSpecificInfoTdd::theInfo,
	&DLHSPDSCHInformationr8ModeSpecificInfoFdd::theInfo,
};
const DLHSPDSCHInformationr8ModeSpecificInfo::Info DLHSPDSCHInformationr8ModeSpecificInfo::theInfo = {
	DLHSPDSCHInformationr8ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLHSPDSCHInformationr8::itemsInfo[3] = {
	&HSSCCHInfor7::theInfo,
	&MeasurementFeedbackInfor7::theInfo,
	&DLHSPDSCHInformationr8ModeSpecificInfo::theInfo,
};
bool DLHSPDSCHInformationr8::itemsPres[3] = {
	0,
	0,
	1,
};
const DLHSPDSCHInformationr8::Info DLHSPDSCHInformationr8::theInfo = {
	DLHSPDSCHInformationr8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *ServingHSDSCHCellInformationr8::itemsInfo[7] = {
	&DeltaACK::theInfo,
	&DeltaNACK::theInfo,
	&HARQPreambleMode::theInfo,
	&PrimaryCPICHInfo::theInfo,
	&DLHSPDSCHInformationr8::theInfo,
	&HARQInfor7::theInfo,
	&ServingHSDSCHCellInformationr8mac_hsResetIndicator::theInfo,
};
bool ServingHSDSCHCellInformationr8::itemsPres[7] = {
	0,
	0,
	1,
	0,
	0,
	0,
	0,
};
const ServingHSDSCHCellInformationr8::Info ServingHSDSCHCellInformationr8::theInfo = {
	ServingHSDSCHCellInformationr8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	7, 6, 0
};

const void *HSSCCHInfor9ModeSpecificInfoFdd::itemsInfo[2] = {
	&HSSCCHInfor9ModeSpecificInfoFddHSSCCHChannelisationCodeInfo::theInfo,
	&SecondaryScramblingCode::theInfo,
};
bool HSSCCHInfor9ModeSpecificInfoFdd::itemsPres[2] = {
	1,
	0,
};
const HSSCCHInfor9ModeSpecificInfoFdd::Info HSSCCHInfor9ModeSpecificInfoFdd::theInfo = {
	HSSCCHInfor9ModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *HSSCCHInfor9ModeSpecificInfoTddTdd384::itemsInfo[5] = {
	&HSSCCHInfor9ModeSpecificInfoTddTdd384Nackackpoweroffset::theInfo,
	&HSSICHPowerControlInfoTDD384::theInfo,
	&DHSSync::theInfo,
	&BlerTarget::theInfo,
	&HSSCCHInfor9ModeSpecificInfoTddTdd384HSSCCHSetConfiguration::theInfo,
};
bool HSSCCHInfor9ModeSpecificInfoTddTdd384::itemsPres[5] = {
	1,
	1,
	0,
	1,
	1,
};
const HSSCCHInfor9ModeSpecificInfoTddTdd384::Info HSSCCHInfor9ModeSpecificInfoTddTdd384::theInfo = {
	HSSCCHInfor9ModeSpecificInfoTddTdd384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 1, 0
};

const void *HSSCCHInfor9ModeSpecificInfoTddTdd768::itemsInfo[5] = {
	&HSSCCHInfor9ModeSpecificInfoTddTdd768Nackackpoweroffset::theInfo,
	&HSSICHPowerControlInfoTDD768::theInfo,
	&DHSSync::theInfo,
	&BlerTarget::theInfo,
	&HSSCCHInfor9ModeSpecificInfoTddTdd768HSSCCHSetConfiguration::theInfo,
};
bool HSSCCHInfor9ModeSpecificInfoTddTdd768::itemsPres[5] = {
	1,
	1,
	0,
	1,
	1,
};
const HSSCCHInfor9ModeSpecificInfoTddTdd768::Info HSSCCHInfor9ModeSpecificInfoTddTdd768::theInfo = {
	HSSCCHInfor9ModeSpecificInfoTddTdd768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 1, 0
};

const void *HSSCCHInfor9ModeSpecificInfoTddTdd128::itemsInfo[8] = {
	&HSSCCHInfor9ModeSpecificInfoTddTdd128Nackackpoweroffset::theInfo,
	&HSSCCHInfor9ModeSpecificInfoTddTdd128PowerlevelHSSICH::theInfo,
	&HSSCCHInfor9ModeSpecificInfoTddTdd128tpc_step_size::theInfo,
	&BlerTarget::theInfo,
	&HSSCCHInfor9ModeSpecificInfoTddTdd128hS_SCCH_tpc_step_size::theInfo,
	&PowerControlGAP::theInfo,
	&HSSCCHInfor9ModeSpecificInfoTddTdd128PathlossCompensationSwitch::theInfo,
	&HSSCCHInfor9ModeSpecificInfoTddTdd128HSSCCHSetConfiguration::theInfo,
};
bool HSSCCHInfor9ModeSpecificInfoTddTdd128::itemsPres[8] = {
	1,
	1,
	1,
	1,
	0,
	0,
	0,
	1,
};
const HSSCCHInfor9ModeSpecificInfoTddTdd128::Info HSSCCHInfor9ModeSpecificInfoTddTdd128::theInfo = {
	HSSCCHInfor9ModeSpecificInfoTddTdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	8, 3, 0
};

const void *HSSCCHInfor9ModeSpecificInfoTdd::choicesInfo[3] = {
	&HSSCCHInfor9ModeSpecificInfoTddTdd384::theInfo,
	&HSSCCHInfor9ModeSpecificInfoTddTdd768::theInfo,
	&HSSCCHInfor9ModeSpecificInfoTddTdd128::theInfo,
};
const HSSCCHInfor9ModeSpecificInfoTdd::Info HSSCCHInfor9ModeSpecificInfoTdd::theInfo = {
	HSSCCHInfor9ModeSpecificInfoTdd::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *HSSCCHInfor9ModeSpecificInfo::choicesInfo[2] = {
	&HSSCCHInfor9ModeSpecificInfoFdd::theInfo,
	&HSSCCHInfor9ModeSpecificInfoTdd::theInfo,
};
const HSSCCHInfor9ModeSpecificInfo::Info HSSCCHInfor9ModeSpecificInfo::theInfo = {
	HSSCCHInfor9ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
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

const void *DLHSPDSCHInformationr9ModeSpecificInfoTddTdd384::itemsInfo[1] = {
	&DLHSPDSCHTSConfiguration::theInfo,
};
bool DLHSPDSCHInformationr9ModeSpecificInfoTddTdd384::itemsPres[1] = {
	0,
};
const DLHSPDSCHInformationr9ModeSpecificInfoTddTdd384::Info DLHSPDSCHInformationr9ModeSpecificInfoTddTdd384::theInfo = {
	DLHSPDSCHInformationr9ModeSpecificInfoTddTdd384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLHSPDSCHInformationr9ModeSpecificInfoTddTdd768::itemsInfo[1] = {
	&DLHSPDSCHTSConfigurationVHCR::theInfo,
};
bool DLHSPDSCHInformationr9ModeSpecificInfoTddTdd768::itemsPres[1] = {
	0,
};
const DLHSPDSCHInformationr9ModeSpecificInfoTddTdd768::Info DLHSPDSCHInformationr9ModeSpecificInfoTddTdd768::theInfo = {
	DLHSPDSCHInformationr9ModeSpecificInfoTddTdd768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLHSPDSCHInformationr9ModeSpecificInfoTddTdd128::itemsInfo[4] = {
	&HSPDSCHMidambleConfigurationTDD128::theInfo,
	&DLMultiCarrierInformation::theInfo,
	&DLHSPDSCHInformationr9ModeSpecificInfoTddTdd128tS0_Indicator::theInfo,
	&OutofSyncWindow::theInfo,
};
bool DLHSPDSCHInformationr9ModeSpecificInfoTddTdd128::itemsPres[4] = {
	0,
	0,
	0,
	0,
};
const DLHSPDSCHInformationr9ModeSpecificInfoTddTdd128::Info DLHSPDSCHInformationr9ModeSpecificInfoTddTdd128::theInfo = {
	DLHSPDSCHInformationr9ModeSpecificInfoTddTdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 4, 0
};

const void *DLHSPDSCHInformationr9ModeSpecificInfoTdd::choicesInfo[3] = {
	&DLHSPDSCHInformationr9ModeSpecificInfoTddTdd384::theInfo,
	&DLHSPDSCHInformationr9ModeSpecificInfoTddTdd768::theInfo,
	&DLHSPDSCHInformationr9ModeSpecificInfoTddTdd128::theInfo,
};
const DLHSPDSCHInformationr9ModeSpecificInfoTdd::Info DLHSPDSCHInformationr9ModeSpecificInfoTdd::theInfo = {
	DLHSPDSCHInformationr9ModeSpecificInfoTdd::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *DLHSPDSCHInformationr9ModeSpecificInfoFdd::itemsInfo[2] = {
	&DLHSPDSCHInformationr9ModeSpecificInfoFdddl_64QAM_Configured::theInfo,
	&HSDSCHTBSizeTable::theInfo,
};
bool DLHSPDSCHInformationr9ModeSpecificInfoFdd::itemsPres[2] = {
	0,
	0,
};
const DLHSPDSCHInformationr9ModeSpecificInfoFdd::Info DLHSPDSCHInformationr9ModeSpecificInfoFdd::theInfo = {
	DLHSPDSCHInformationr9ModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *DLHSPDSCHInformationr9ModeSpecificInfo::choicesInfo[2] = {
	&DLHSPDSCHInformationr9ModeSpecificInfoTdd::theInfo,
	&DLHSPDSCHInformationr9ModeSpecificInfoFdd::theInfo,
};
const DLHSPDSCHInformationr9ModeSpecificInfo::Info DLHSPDSCHInformationr9ModeSpecificInfo::theInfo = {
	DLHSPDSCHInformationr9ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLHSPDSCHInformationr9::itemsInfo[3] = {
	&HSSCCHInfor9::theInfo,
	&MeasurementFeedbackInfor7::theInfo,
	&DLHSPDSCHInformationr9ModeSpecificInfo::theInfo,
};
bool DLHSPDSCHInformationr9::itemsPres[3] = {
	0,
	0,
	1,
};
const DLHSPDSCHInformationr9::Info DLHSPDSCHInformationr9::theInfo = {
	DLHSPDSCHInformationr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *ServingHSDSCHCellInformationr9::itemsInfo[7] = {
	&DeltaACK::theInfo,
	&DeltaNACK::theInfo,
	&HARQPreambleMode::theInfo,
	&PrimaryCPICHInfo::theInfo,
	&DLHSPDSCHInformationr9::theInfo,
	&HARQInfor7::theInfo,
	&ServingHSDSCHCellInformationr9mac_hsResetIndicator::theInfo,
};
bool ServingHSDSCHCellInformationr9::itemsPres[7] = {
	0,
	0,
	1,
	0,
	0,
	0,
	0,
};
const ServingHSDSCHCellInformationr9::Info ServingHSDSCHCellInformationr9::theInfo = {
	ServingHSDSCHCellInformationr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	7, 6, 0
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

const void *RABInfoReplace::itemsInfo[2] = {
	&RABIdentity::theInfo,
	&CNDomainIdentity::theInfo,
};
bool RABInfoReplace::itemsPres[2] = {
	1,
	1,
};
const RABInfoReplace::Info RABInfoReplace::theInfo = {
	RABInfoReplace::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *SRVCCSecurityRABInfov860ext::itemsInfo[2] = {
	&SRVCCInfo::theInfo,
	&RABInfoReplace::theInfo,
};
bool SRVCCSecurityRABInfov860ext::itemsPres[2] = {
	1,
	1,
};
const SRVCCSecurityRABInfov860ext::Info SRVCCSecurityRABInfov860ext::theInfo = {
	SRVCCSecurityRABInfov860ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *STARTSingle::itemsInfo[2] = {
	&CNDomainIdentity::theInfo,
	&STARTValue::theInfo,
};
bool STARTSingle::itemsPres[2] = {
	1,
	1,
};
const STARTSingle::Info STARTSingle::theInfo = {
	STARTSingle::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *ULTransChCapabilityModeSpecificInfoTdd::itemsInfo[1] = {
	&MaxSimultaneousCCTrCHCount::theInfo,
};
bool ULTransChCapabilityModeSpecificInfoTdd::itemsPres[1] = {
	1,
};
const ULTransChCapabilityModeSpecificInfoTdd::Info ULTransChCapabilityModeSpecificInfoTdd::theInfo = {
	ULTransChCapabilityModeSpecificInfoTdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ULTransChCapabilityModeSpecificInfo::choicesInfo[2] = {
	&ULTransChCapabilityModeSpecificInfoFdd::theInfo,
	&ULTransChCapabilityModeSpecificInfoTdd::theInfo,
};
const ULTransChCapabilityModeSpecificInfo::Info ULTransChCapabilityModeSpecificInfo::theInfo = {
	ULTransChCapabilityModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULTransChCapability::itemsInfo[8] = {
	&MaxNoBits::theInfo,
	&MaxNoBits::theInfo,
	&TurboSupport::theInfo,
	&MaxSimultaneousTransChsUL::theInfo,
	&ULTransChCapabilityModeSpecificInfo::theInfo,
	&MaxTransportBlocksUL::theInfo,
	&MaxNumberOfTFCUL::theInfo,
	&MaxNumberOfTF::theInfo,
};
bool ULTransChCapability::itemsPres[8] = {
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
};
const ULTransChCapability::Info ULTransChCapability::theInfo = {
	ULTransChCapability::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	8, 0, 0
};

const void *TransportChannelCapability::itemsInfo[2] = {
	&DLTransChCapability::theInfo,
	&ULTransChCapability::theInfo,
};
bool TransportChannelCapability::itemsPres[2] = {
	1,
	1,
};
const TransportChannelCapability::Info TransportChannelCapability::theInfo = {
	TransportChannelCapability::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *URNTIShort::itemsInfo[2] = {
	&SRNCIdentity::theInfo,
	&SRNTI2::theInfo,
};
bool URNTIShort::itemsPres[2] = {
	1,
	1,
};
const URNTIShort::Info URNTIShort::theInfo = {
	URNTIShort::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
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

const void *PhysicalChannelCapabilityedchr6Fddedch::choicesInfo[2] = {
	&PhysicalChannelCapabilityedchr6FddedchSupported::theInfo,
	&PhysicalChannelCapabilityedchr6FddedchUnsupported::theInfo,
};
const PhysicalChannelCapabilityedchr6Fddedch::Info PhysicalChannelCapabilityedchr6Fddedch::theInfo = {
	PhysicalChannelCapabilityedchr6Fddedch::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
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

const void *UERadioAccessCapabilityv690ext::itemsInfo[2] = {
	&PhysicalChannelCapabilityedchr6::theInfo,
	&UERadioAccessCapabilityv690extdeviceType::theInfo,
};
bool UERadioAccessCapabilityv690ext::itemsPres[2] = {
	1,
	0,
};
const UERadioAccessCapabilityv690ext::Info UERadioAccessCapabilityv690ext::theInfo = {
	UERadioAccessCapabilityv690ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *InterRATUERadioAccessCapabilityv690ext::itemsInfo[2] = {
	&InterRATUERadioAccessCapabilityv690extsupportOfInter_RAT_PS_Handover::theInfo,
	&GSMMSRadioAccessCapability::theInfo,
};
bool InterRATUERadioAccessCapabilityv690ext::itemsPres[2] = {
	0,
	1,
};
const InterRATUERadioAccessCapabilityv690ext::Info InterRATUERadioAccessCapabilityv690ext::theInfo = {
	InterRATUERadioAccessCapabilityv690ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
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

const void *UERadioAccessCapabilityv770extIEs::itemsInfo[8] = {
	&PDCPCapabilityv770ext::theInfo,
	&RLCCapabilityv770ext::theInfo,
	&RFCapabilityv770ext::theInfo,
	&PhysicalChannelCapabilityv770ext::theInfo,
	&MultiModeRATCapabilityv770ext::theInfo,
	&UEPositioningCapabilityv770ext::theInfo,
	&UERadioAccessCapabilityv770extIEsmac_ehsSupport::theInfo,
	&UESpecificCapabilityInformationLCRTDD::theInfo,
};
bool UERadioAccessCapabilityv770extIEs::itemsPres[8] = {
	0,
	1,
	0,
	1,
	1,
	1,
	0,
	0,
};
const UERadioAccessCapabilityv770extIEs::Info UERadioAccessCapabilityv770extIEs::theInfo = {
	UERadioAccessCapabilityv770extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	8, 4, 0
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

const void *UERadioAccessCapabBandFDD3::itemsInfo[3] = {
	&RadioFrequencyBandFDD::theInfo,
	&RadioFrequencyBandFDD2::theInfo,
	&MeasurementCapabilityExt3::theInfo,
};
bool UERadioAccessCapabBandFDD3::itemsPres[3] = {
	0,
	0,
	1,
};
const UERadioAccessCapabBandFDD3::Info UERadioAccessCapabBandFDD3::theInfo = {
	UERadioAccessCapabBandFDD3::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *UERadioAccessCapabilityv860extIEs::itemsInfo[12] = {
	&RFCapabilityv860ext::theInfo,
	&PhysicalChannelCapabilityv860ext::theInfo,
	&MultiModeRATCapabilityv860ext::theInfo,
	&UEPositioningCapabilityv860ext::theInfo,
	&MeasurementCapabilityv860ext::theInfo,
	&MeasurementCapabilityTDD::theInfo,
	&UERadioAccessCapabilityv860extIEssupportOfCommonEDCH::theInfo,
	&UERadioAccessCapabilityv860extIEssupportOfMACiis::theInfo,
	&UERadioAccessCapabilityv860extIEssupportOfSPSOperation::theInfo,
	&UERadioAccessCapabilityv860extIEssupportOfControlChannelDRXOperation::theInfo,
	&UERadioAccessCapabilityv860extIEssupportOfCSG::theInfo,
	&UERadioAccessCapabBandFDDList3::theInfo,
};
bool UERadioAccessCapabilityv860extIEs::itemsPres[12] = {
	0,
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
const UERadioAccessCapabilityv860extIEs::Info UERadioAccessCapabilityv860extIEs::theInfo = {
	UERadioAccessCapabilityv860extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	12, 9, 0
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

const void *UERadioAccessCapabilityv920extIEs::itemsInfo[7] = {
	&UERadioAccessCapabBandCombList::theInfo,
	&PhysicalChannelCapabilityv920ext::theInfo,
	&RLCCapabilityv920ext::theInfo,
	&UERadioAccessCapabilityv920extIEssupportOfenhancedTS0::theInfo,
	&MeasurementCapabilityv920ext::theInfo,
	&CSGProximityIndicationCapability::theInfo,
	&NeighCellSIAcquisitionCapability::theInfo,
};
bool UERadioAccessCapabilityv920extIEs::itemsPres[7] = {
	0,
	1,
	1,
	0,
	0,
	0,
	0,
};
const UERadioAccessCapabilityv920extIEs::Info UERadioAccessCapabilityv920extIEs::theInfo = {
	UERadioAccessCapabilityv920extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	7, 5, 0
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

const void *UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790NonCriticalExtensionsV860NonCriticalExtensionsV880NonCriticalExtensionsV890NonCriticalExtensionsV920NonCriticalExtensionsV970NonCriticalExtensionsNonCriticalExtensions::itemsInfo[0] = {
};
bool UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790NonCriticalExtensionsV860NonCriticalExtensionsV880NonCriticalExtensionsV890NonCriticalExtensionsV920NonCriticalExtensionsV970NonCriticalExtensionsNonCriticalExtensions::itemsPres[0] = {
};
const UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790NonCriticalExtensionsV860NonCriticalExtensionsV880NonCriticalExtensionsV890NonCriticalExtensionsV920NonCriticalExtensionsV970NonCriticalExtensionsNonCriticalExtensions::Info UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790NonCriticalExtensionsV860NonCriticalExtensionsV880NonCriticalExtensionsV890NonCriticalExtensionsV920NonCriticalExtensionsV970NonCriticalExtensionsNonCriticalExtensions::theInfo = {
	UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790NonCriticalExtensionsV860NonCriticalExtensionsV880NonCriticalExtensionsV890NonCriticalExtensionsV920NonCriticalExtensionsV970NonCriticalExtensionsNonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790NonCriticalExtensionsV860NonCriticalExtensionsV880NonCriticalExtensionsV890NonCriticalExtensionsV920NonCriticalExtensionsV970NonCriticalExtensions::itemsInfo[2] = {
	&UERadioAccessCapabilityv970extIEs::theInfo,
	&UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790NonCriticalExtensionsV860NonCriticalExtensionsV880NonCriticalExtensionsV890NonCriticalExtensionsV920NonCriticalExtensionsV970NonCriticalExtensionsNonCriticalExtensions::theInfo,
};
bool UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790NonCriticalExtensionsV860NonCriticalExtensionsV880NonCriticalExtensionsV890NonCriticalExtensionsV920NonCriticalExtensionsV970NonCriticalExtensions::itemsPres[2] = {
	1,
	0,
};
const UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790NonCriticalExtensionsV860NonCriticalExtensionsV880NonCriticalExtensionsV890NonCriticalExtensionsV920NonCriticalExtensionsV970NonCriticalExtensions::Info UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790NonCriticalExtensionsV860NonCriticalExtensionsV880NonCriticalExtensionsV890NonCriticalExtensionsV920NonCriticalExtensionsV970NonCriticalExtensions::theInfo = {
	UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790NonCriticalExtensionsV860NonCriticalExtensionsV880NonCriticalExtensionsV890NonCriticalExtensionsV920NonCriticalExtensionsV970NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790NonCriticalExtensionsV860NonCriticalExtensionsV880NonCriticalExtensionsV890NonCriticalExtensionsV920NonCriticalExtensions::itemsInfo[2] = {
	&UERadioAccessCapabilityv920extIEs::theInfo,
	&UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790NonCriticalExtensionsV860NonCriticalExtensionsV880NonCriticalExtensionsV890NonCriticalExtensionsV920NonCriticalExtensionsV970NonCriticalExtensions::theInfo,
};
bool UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790NonCriticalExtensionsV860NonCriticalExtensionsV880NonCriticalExtensionsV890NonCriticalExtensionsV920NonCriticalExtensions::itemsPres[2] = {
	1,
	0,
};
const UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790NonCriticalExtensionsV860NonCriticalExtensionsV880NonCriticalExtensionsV890NonCriticalExtensionsV920NonCriticalExtensions::Info UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790NonCriticalExtensionsV860NonCriticalExtensionsV880NonCriticalExtensionsV890NonCriticalExtensionsV920NonCriticalExtensions::theInfo = {
	UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790NonCriticalExtensionsV860NonCriticalExtensionsV880NonCriticalExtensionsV890NonCriticalExtensionsV920NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790NonCriticalExtensionsV860NonCriticalExtensionsV880NonCriticalExtensionsV890NonCriticalExtensions::itemsInfo[2] = {
	&UERadioAccessCapabilityv890extIEs::theInfo,
	&UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790NonCriticalExtensionsV860NonCriticalExtensionsV880NonCriticalExtensionsV890NonCriticalExtensionsV920NonCriticalExtensions::theInfo,
};
bool UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790NonCriticalExtensionsV860NonCriticalExtensionsV880NonCriticalExtensionsV890NonCriticalExtensions::itemsPres[2] = {
	1,
	0,
};
const UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790NonCriticalExtensionsV860NonCriticalExtensionsV880NonCriticalExtensionsV890NonCriticalExtensions::Info UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790NonCriticalExtensionsV860NonCriticalExtensionsV880NonCriticalExtensionsV890NonCriticalExtensions::theInfo = {
	UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790NonCriticalExtensionsV860NonCriticalExtensionsV880NonCriticalExtensionsV890NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790NonCriticalExtensionsV860NonCriticalExtensionsV880NonCriticalExtensions::itemsInfo[2] = {
	&UERadioAccessCapabilityv880extIEs::theInfo,
	&UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790NonCriticalExtensionsV860NonCriticalExtensionsV880NonCriticalExtensionsV890NonCriticalExtensions::theInfo,
};
bool UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790NonCriticalExtensionsV860NonCriticalExtensionsV880NonCriticalExtensions::itemsPres[2] = {
	1,
	0,
};
const UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790NonCriticalExtensionsV860NonCriticalExtensionsV880NonCriticalExtensions::Info UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790NonCriticalExtensionsV860NonCriticalExtensionsV880NonCriticalExtensions::theInfo = {
	UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790NonCriticalExtensionsV860NonCriticalExtensionsV880NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790NonCriticalExtensionsV860NonCriticalExtensions::itemsInfo[3] = {
	&UERadioAccessCapabilityv860extIEs::theInfo,
	&InterRATUERadioAccessCapabilityv860ext::theInfo,
	&UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790NonCriticalExtensionsV860NonCriticalExtensionsV880NonCriticalExtensions::theInfo,
};
bool UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790NonCriticalExtensionsV860NonCriticalExtensions::itemsPres[3] = {
	1,
	0,
	0,
};
const UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790NonCriticalExtensionsV860NonCriticalExtensions::Info UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790NonCriticalExtensionsV860NonCriticalExtensions::theInfo = {
	UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790NonCriticalExtensionsV860NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790NonCriticalExtensions::itemsInfo[2] = {
	&UERadioAccessCapabilityv790extIEs::theInfo,
	&UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790NonCriticalExtensionsV860NonCriticalExtensions::theInfo,
};
bool UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790NonCriticalExtensions::itemsPres[2] = {
	1,
	0,
};
const UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790NonCriticalExtensions::Info UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790NonCriticalExtensions::theInfo = {
	UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensions::itemsInfo[2] = {
	&UERadioAccessCapabilityv770extIEs::theInfo,
	&UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790NonCriticalExtensions::theInfo,
};
bool UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensions::itemsPres[2] = {
	1,
	0,
};
const UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensions::Info UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensions::theInfo = {
	UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensions::itemsInfo[2] = {
	&UERadioAccessCapabilityv6e0extIEs::theInfo,
	&UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensions::theInfo,
};
bool UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensions::itemsPres[2] = {
	1,
	0,
};
const UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensions::Info UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensions::theInfo = {
	UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *UECapabilityContainerIEsV6b0NonCriticalExtensions::itemsInfo[2] = {
	&UERadioAccessCapabilityv6b0extIEs::theInfo,
	&UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensions::theInfo,
};
bool UECapabilityContainerIEsV6b0NonCriticalExtensions::itemsPres[2] = {
	1,
	0,
};
const UECapabilityContainerIEsV6b0NonCriticalExtensions::Info UECapabilityContainerIEsV6b0NonCriticalExtensions::theInfo = {
	UECapabilityContainerIEsV6b0NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *UECapabilityContainerIEs::itemsInfo[3] = {
	&UERadioAccessCapabilityv690ext::theInfo,
	&InterRATUERadioAccessCapabilityv690ext::theInfo,
	&UECapabilityContainerIEsV6b0NonCriticalExtensions::theInfo,
};
bool UECapabilityContainerIEs::itemsPres[3] = {
	1,
	0,
	0,
};
const UECapabilityContainerIEs::Info UECapabilityContainerIEs::theInfo = {
	UECapabilityContainerIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *UEConnTimersAndConstants::itemsInfo[22] = {
	&T301::theInfo,
	&N301::theInfo,
	&T302::theInfo,
	&N302::theInfo,
	&T304::theInfo,
	&N304::theInfo,
	&T305::theInfo,
	&T307::theInfo,
	&T308::theInfo,
	&T309::theInfo,
	&T310::theInfo,
	&N310::theInfo,
	&T311::theInfo,
	&T312::theInfo,
	&N312::theInfo,
	&T313::theInfo,
	&N313::theInfo,
	&T314::theInfo,
	&T315::theInfo,
	&N315::theInfo,
	&T316::theInfo,
	&T317::theInfo,
};
bool UEConnTimersAndConstants::itemsPres[22] = {
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
const UEConnTimersAndConstants::Info UEConnTimersAndConstants::theInfo = {
	UEConnTimersAndConstants::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	22, 22, 0
};

const void *UEConnTimersAndConstantsv3a0ext::itemsInfo[2] = {
	&N312ext::theInfo,
	&N315ext::theInfo,
};
bool UEConnTimersAndConstantsv3a0ext::itemsPres[2] = {
	0,
	0,
};
const UEConnTimersAndConstantsv3a0ext::Info UEConnTimersAndConstantsv3a0ext::theInfo = {
	UEConnTimersAndConstantsv3a0ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *UEConnTimersAndConstantsr5::itemsInfo[22] = {
	&T301::theInfo,
	&N301::theInfo,
	&T302::theInfo,
	&N302::theInfo,
	&T304::theInfo,
	&N304::theInfo,
	&T305::theInfo,
	&T307::theInfo,
	&T308::theInfo,
	&T309::theInfo,
	&T310::theInfo,
	&N310::theInfo,
	&T311::theInfo,
	&T312::theInfo,
	&N312r5::theInfo,
	&T313::theInfo,
	&N313::theInfo,
	&T314::theInfo,
	&T315::theInfo,
	&N315r5::theInfo,
	&T316::theInfo,
	&T317::theInfo,
};
bool UEConnTimersAndConstantsr5::itemsPres[22] = {
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
const UEConnTimersAndConstantsr5::Info UEConnTimersAndConstantsr5::theInfo = {
	UEConnTimersAndConstantsr5::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	22, 22, 0
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

const void *UEIdleTimersAndConstants::itemsInfo[4] = {
	&T300::theInfo,
	&N300::theInfo,
	&T312::theInfo,
	&N312::theInfo,
};
bool UEIdleTimersAndConstants::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const UEIdleTimersAndConstants::Info UEIdleTimersAndConstants::theInfo = {
	UEIdleTimersAndConstants::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 0, 0
};

const void *UEHSPAIdentitiesr6::itemsInfo[3] = {
	&HRNTI::theInfo,
	&ERNTI::theInfo,
	&ERNTI::theInfo,
};
bool UEHSPAIdentitiesr6::itemsPres[3] = {
	0,
	0,
	0,
};
const UEHSPAIdentitiesr6::Info UEHSPAIdentitiesr6::theInfo = {
	UEHSPAIdentitiesr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
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

const void *UEMultiModeRATCapability::itemsInfo[2] = {
	&MultiRATCapability::theInfo,
	&MultiModeCapability::theInfo,
};
bool UEMultiModeRATCapability::itemsPres[2] = {
	1,
	1,
};
const UEMultiModeRATCapability::Info UEMultiModeRATCapability::theInfo = {
	UEMultiModeRATCapability::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *UEPositioningCapability::itemsInfo[5] = {
	&UEPositioningCapabilityStandaloneLocMethodsSupported::theInfo,
	&UEPositioningCapabilityUeBasedOTDOASupported::theInfo,
	&NetworkAssistedGPSSupported::theInfo,
	&UEPositioningCapabilitySupportForUEGPSTimingOfCellFrames::theInfo,
	&UEPositioningCapabilitySupportForIPDL::theInfo,
};
bool UEPositioningCapability::itemsPres[5] = {
	1,
	1,
	1,
	1,
	1,
};
const UEPositioningCapability::Info UEPositioningCapability::theInfo = {
	UEPositioningCapability::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 0, 0
};

const void *UERadioAccessCapability::itemsInfo[9] = {
	&PDCPCapability::theInfo,
	&RLCCapability::theInfo,
	&TransportChannelCapability::theInfo,
	&RFCapability::theInfo,
	&PhysicalChannelCapability::theInfo,
	&UEMultiModeRATCapability::theInfo,
	&SecurityCapability::theInfo,
	&UEPositioningCapability::theInfo,
	&MeasurementCapability::theInfo,
};
bool UERadioAccessCapability::itemsPres[9] = {
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
const UERadioAccessCapability::Info UERadioAccessCapability::theInfo = {
	UERadioAccessCapability::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	9, 1, 0
};

const void *UERadioAccessCapabBandFDDFddRFCapability::itemsInfo[2] = {
	&UEPowerClassExt::theInfo,
	&TxRxFrequencySeparation::theInfo,
};
bool UERadioAccessCapabBandFDDFddRFCapability::itemsPres[2] = {
	1,
	1,
};
const UERadioAccessCapabBandFDDFddRFCapability::Info UERadioAccessCapabBandFDDFddRFCapability::theInfo = {
	UERadioAccessCapabBandFDDFddRFCapability::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *UERadioAccessCapabBandFDD::itemsInfo[3] = {
	&RadioFrequencyBandFDD::theInfo,
	&UERadioAccessCapabBandFDDFddRFCapability::theInfo,
	&MeasurementCapabilityExt::theInfo,
};
bool UERadioAccessCapabBandFDD::itemsPres[3] = {
	1,
	0,
	1,
};
const UERadioAccessCapabBandFDD::Info UERadioAccessCapabBandFDD::theInfo = {
	UERadioAccessCapabBandFDD::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
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

const void *UERadioAccessCapabilityInfo::itemsInfo[2] = {
	&UERadioAccessCapability::theInfo,
	&UERadioAccessCapabilityv370ext::theInfo,
};
bool UERadioAccessCapabilityInfo::itemsPres[2] = {
	1,
	1,
};
const UERadioAccessCapabilityInfo::Info UERadioAccessCapabilityInfo::theInfo = {
	UERadioAccessCapabilityInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
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

const void *UERadioAccessCapabBandFDD2FddRFCapability::itemsInfo[2] = {
	&UEPowerClassExt::theInfo,
	&TxRxFrequencySeparation::theInfo,
};
bool UERadioAccessCapabBandFDD2FddRFCapability::itemsPres[2] = {
	1,
	1,
};
const UERadioAccessCapabBandFDD2FddRFCapability::Info UERadioAccessCapabBandFDD2FddRFCapability::theInfo = {
	UERadioAccessCapabBandFDD2FddRFCapability::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *UERadioAccessCapabBandFDD2::itemsInfo[3] = {
	&RadioFrequencyBandFDD2::theInfo,
	&UERadioAccessCapabBandFDD2FddRFCapability::theInfo,
	&MeasurementCapabilityExt2::theInfo,
};
bool UERadioAccessCapabBandFDD2::itemsPres[3] = {
	1,
	0,
	1,
};
const UERadioAccessCapabBandFDD2::Info UERadioAccessCapabBandFDD2::theInfo = {
	UERadioAccessCapabBandFDD2::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};

const void *UERadioAccessCapabBandFDDext::itemsInfo[2] = {
	&RadioFrequencyBandFDD::theInfo,
	&CompressedModeMeasCapabFDDListext::theInfo,
};
bool UERadioAccessCapabBandFDDext::itemsPres[2] = {
	1,
	1,
};
const UERadioAccessCapabBandFDDext::Info UERadioAccessCapabBandFDDext::theInfo = {
	UERadioAccessCapabBandFDDext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *UERadioAccessCapabilityv650ext::itemsInfo[2] = {
	&UERadioAccessCapabBandFDDList2::theInfo,
	&UERadioAccessCapabBandFDDListext::theInfo,
};
bool UERadioAccessCapabilityv650ext::itemsPres[2] = {
	1,
	0,
};
const UERadioAccessCapabilityv650ext::Info UERadioAccessCapabilityv650ext::theInfo = {
	UERadioAccessCapabilityv650ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *UERadioAccessCapabilityv7e0ext::itemsInfo[2] = {
	&UERadioAccessCapabilityv7e0extsupportForTwoDRXSchemesInPCH::theInfo,
	&UERadioAccessCapabilityv7e0extsupportEDPDCHPowerInterpolation::theInfo,
};
bool UERadioAccessCapabilityv7e0ext::itemsPres[2] = {
	0,
	0,
};
const UERadioAccessCapabilityv7e0ext::Info UERadioAccessCapabilityv7e0ext::theInfo = {
	UERadioAccessCapabilityv7e0ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *UERadioAccessCapabilityCompTDD128v7f0ext::itemsInfo[6] = {
	&HSDSCHphysicallayercategory::theInfo,
	&MultiCarrierHSDSCHphysicallayercategory::theInfo,
	&UERadioAccessCapabilityCompTDD128v7f0extTddedchPhysicalLayerCategory::theInfo,
	&DLCapabilityWithSimultaneousHSDSCHConfig::theInfo,
	&UERadioAccessCapabilityCompTDD128v7f0extsupportForCSVoiceoverHSPA::theInfo,
	&TotalRLCAMBufferSizer5ext::theInfo,
};
bool UERadioAccessCapabilityCompTDD128v7f0ext::itemsPres[6] = {
	0,
	0,
	0,
	0,
	0,
	0,
};
const UERadioAccessCapabilityCompTDD128v7f0ext::Info UERadioAccessCapabilityCompTDD128v7f0ext::theInfo = {
	UERadioAccessCapabilityCompTDD128v7f0ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 6, 0
};

const void *UERadioAccessCapabilityv7f0ext::itemsInfo[3] = {
	&UERadioAccessCapabilityv7f0extsupportofTxDivOnNonMIMOChannel::theInfo,
	&PhysicalChannelCapabilityLCRr4::theInfo,
	&UERadioAccessCapabilityCompTDD128v7f0ext::theInfo,
};
bool UERadioAccessCapabilityv7f0ext::itemsPres[3] = {
	0,
	0,
	0,
};
const UERadioAccessCapabilityv7f0ext::Info UERadioAccessCapabilityv7f0ext::theInfo = {
	UERadioAccessCapabilityv7f0ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *UERadioAccessCapabilityInfov770ext::itemsInfo[5] = {
	&RFCapabilityv770ext::theInfo,
	&PhysicalChannelCapabilityInfov770ext::theInfo,
	&UERadioAccessCapabilityInfov770extganssSupportIndication::theInfo,
	&UERadioAccessCapabilityInfov770extmac_ehsSupport::theInfo,
	&UESpecificCapabilityInformationLCRTDD::theInfo,
};
bool UERadioAccessCapabilityInfov770ext::itemsPres[5] = {
	0,
	1,
	0,
	0,
	0,
};
const UERadioAccessCapabilityInfov770ext::Info UERadioAccessCapabilityInfov770ext::theInfo = {
	UERadioAccessCapabilityInfov770ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 4, 0
};

const void *UERadioAccessCapabilityInfoTDD128v8b0ext::itemsInfo[2] = {
	&MeasurementCapabilityTDD::theInfo,
	&HSDSCHphysicallayercategoryextension::theInfo,
};
bool UERadioAccessCapabilityInfoTDD128v8b0ext::itemsPres[2] = {
	0,
	0,
};
const UERadioAccessCapabilityInfoTDD128v8b0ext::Info UERadioAccessCapabilityInfoTDD128v8b0ext::theInfo = {
	UERadioAccessCapabilityInfoTDD128v8b0ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
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

const void *UERadioAccessCapabilityv4b0extTddCapabilityExt::itemsInfo[3] = {
	&RFCapabilityr4ext::theInfo,
	&PhysicalChannelCapabilityLCRr4::theInfo,
	&MeasurementCapabilityr4ext::theInfo,
};
bool UERadioAccessCapabilityv4b0extTddCapabilityExt::itemsPres[3] = {
	1,
	1,
	1,
};
const UERadioAccessCapabilityv4b0extTddCapabilityExt::Info UERadioAccessCapabilityv4b0extTddCapabilityExt::theInfo = {
	UERadioAccessCapabilityv4b0extTddCapabilityExt::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *UERadioAccessCapabilityv4b0ext::itemsInfo[3] = {
	&PDCPCapabilityr4ext::theInfo,
	&UERadioAccessCapabilityv4b0extTddCapabilityExt::theInfo,
	&AccessStratumReleaseIndicator::theInfo,
};
bool UERadioAccessCapabilityv4b0ext::itemsPres[3] = {
	1,
	0,
	0,
};
const UERadioAccessCapabilityv4b0ext::Info UERadioAccessCapabilityv4b0ext::theInfo = {
	UERadioAccessCapabilityv4b0ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *RFCapabilityCompFdd::choicesInfo[2] = {
	&RFCapabilityCompFddNotSupported::theInfo,
	&RFCapabBandListFDDComp::theInfo,
};
const RFCapabilityCompFdd::Info RFCapabilityCompFdd::theInfo = {
	RFCapabilityCompFdd::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *RFCapabilityCompTdd384RFCapability::choicesInfo[2] = {
	&RFCapabilityCompTdd384RFCapabilityNotSupported::theInfo,
	&RadioFrequencyBandTDDList::theInfo,
};
const RFCapabilityCompTdd384RFCapability::Info RFCapabilityCompTdd384RFCapability::theInfo = {
	RFCapabilityCompTdd384RFCapability::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *RFCapabilityCompTdd128RFCapability::choicesInfo[2] = {
	&RFCapabilityCompTdd128RFCapabilityNotSupported::theInfo,
	&RadioFrequencyBandTDDList::theInfo,
};
const RFCapabilityCompTdd128RFCapability::Info RFCapabilityCompTdd128RFCapability::theInfo = {
	RFCapabilityCompTdd128RFCapability::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *RFCapabilityComp::itemsInfo[3] = {
	&RFCapabilityCompFdd::theInfo,
	&RFCapabilityCompTdd384RFCapability::theInfo,
	&RFCapabilityCompTdd128RFCapability::theInfo,
};
bool RFCapabilityComp::itemsPres[3] = {
	1,
	1,
	1,
};
const RFCapabilityComp::Info RFCapabilityComp::theInfo = {
	RFCapabilityComp::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *UERadioAccessCapabilityComp::itemsInfo[2] = {
	&UERadioAccessCapabilityCompTotalAMRLCMemoryExceeds10kB::theInfo,
	&RFCapabilityComp::theInfo,
};
bool UERadioAccessCapabilityComp::itemsPres[2] = {
	1,
	1,
};
const UERadioAccessCapabilityComp::Info UERadioAccessCapabilityComp::theInfo = {
	UERadioAccessCapabilityComp::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
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

const void *RFCapabilityCompv770extTdd768RFCapability::choicesInfo[2] = {
	&RFCapabilityCompv770extTdd768RFCapabilityNotSupported::theInfo,
	&RadioFrequencyBandTDDListr7::theInfo,
};
const RFCapabilityCompv770extTdd768RFCapability::Info RFCapabilityCompv770extTdd768RFCapability::theInfo = {
	RFCapabilityCompv770extTdd768RFCapability::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *RFCapabilityCompv770ext::itemsInfo[3] = {
	&RadioFrequencyBandTDDListr7::theInfo,
	&RFCapabilityCompv770extTdd768RFCapability::theInfo,
	&RadioFrequencyBandTDDListr7::theInfo,
};
bool RFCapabilityCompv770ext::itemsPres[3] = {
	0,
	1,
	0,
};
const RFCapabilityCompv770ext::Info RFCapabilityCompv770ext::theInfo = {
	RFCapabilityCompv770ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *UERadioAccessCapabilityCompv770ext::itemsInfo[4] = {
	&RFCapabilityCompv770ext::theInfo,
	&UERadioAccessCapabilityCompv770extsecurityCapabilityIndication::theInfo,
	&UERadioAccessCapabilityCompv770extganssSupportIndication::theInfo,
	&UERadioAccessCapabilityCompv770extmac_ehsSupport::theInfo,
};
bool UERadioAccessCapabilityCompv770ext::itemsPres[4] = {
	1,
	0,
	0,
	0,
};
const UERadioAccessCapabilityCompv770ext::Info UERadioAccessCapabilityCompv770ext::theInfo = {
	UERadioAccessCapabilityCompv770ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 3, 0
};

const void *UERadioAccessCapabilityComp2FddPhysicalChannelCapabhspdschedch::itemsInfo[3] = {
	&DLCapabilityWithSimultaneousHSDSCHConfig::theInfo,
	&HSDSCHphysicallayercategory::theInfo,
	&PhysicalChannelCapabilityedchr6::theInfo,
};
bool UERadioAccessCapabilityComp2FddPhysicalChannelCapabhspdschedch::itemsPres[3] = {
	0,
	1,
	1,
};
const UERadioAccessCapabilityComp2FddPhysicalChannelCapabhspdschedch::Info UERadioAccessCapabilityComp2FddPhysicalChannelCapabhspdschedch::theInfo = {
	UERadioAccessCapabilityComp2FddPhysicalChannelCapabhspdschedch::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
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

const void *UERadioAccessCapabilityComp2v770ext::itemsInfo[9] = {
	&HSDSCHphysicallayercategoryext::theInfo,
	&UERadioAccessCapabilityComp2v770extEdchPhysicalLayerCategoryextension::theInfo,
	&UERadioAccessCapabilityComp2v770exthsscchlessHsdschOperation::theInfo,
	&UERadioAccessCapabilityComp2v770extenhancedFdpch::theInfo,
	&UERadioAccessCapabilityComp2v770exthsdschReception_CellFach::theInfo,
	&UERadioAccessCapabilityComp2v770exthsdschReception_CellUraPch::theInfo,
	&UERadioAccessCapabilityComp2v770extdiscontinuousDpcchTransmission::theInfo,
	&UERadioAccessCapabilityComp2v770extslotFormat4::theInfo,
	&PDCPCapabilityv770ext::theInfo,
};
bool UERadioAccessCapabilityComp2v770ext::itemsPres[9] = {
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
const UERadioAccessCapabilityComp2v770ext::Info UERadioAccessCapabilityComp2v770ext::theInfo = {
	UERadioAccessCapabilityComp2v770ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	9, 9, 0
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

const void *UERadioAccessCapabilityComp2v860ext::itemsInfo[2] = {
	&HSDSCHphysicallayercategoryext2::theInfo,
	&UERadioAccessCapabilityComp2v860extsupportOfMACiis::theInfo,
};
bool UERadioAccessCapabilityComp2v860ext::itemsPres[2] = {
	0,
	0,
};
const UERadioAccessCapabilityComp2v860ext::Info UERadioAccessCapabilityComp2v860ext::theInfo = {
	UERadioAccessCapabilityComp2v860ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *UERadioAccessCapabilityComp2v920ext::itemsInfo[2] = {
	&HSDSCHphysicallayercategoryext3::theInfo,
	&UERadioAccessCapabilityComp2v920extEdchPhysicalLayerCategoryextension2::theInfo,
};
bool UERadioAccessCapabilityComp2v920ext::itemsPres[2] = {
	0,
	0,
};
const UERadioAccessCapabilityComp2v920ext::Info UERadioAccessCapabilityComp2v920ext::theInfo = {
	UERadioAccessCapabilityComp2v920ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *UERadioAccessCapabilityCompTDD128::itemsInfo[6] = {
	&RadioFrequencyBandTDDextList::theInfo,
	&UERadioAccessCapabilityCompTDD128supportOfSFModeForHSPDSCHDualStream::theInfo,
	&UERadioAccessCapabilityCompTDD128supportOfCommonEDCH::theInfo,
	&UERadioAccessCapabilityCompTDD128supportOfMACiis::theInfo,
	&UERadioAccessCapabilityCompTDD128supportOfSPSOperation::theInfo,
	&UERadioAccessCapabilityCompTDD128supportOfControlChannelDRXOperation::theInfo,
};
bool UERadioAccessCapabilityCompTDD128::itemsPres[6] = {
	0,
	0,
	0,
	0,
	0,
	0,
};
const UERadioAccessCapabilityCompTDD128::Info UERadioAccessCapabilityCompTDD128::theInfo = {
	UERadioAccessCapabilityCompTDD128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 6, 0
};

const void *UERadioAccessCapabilityv590ext::itemsInfo[5] = {
	&DLCapabilityWithSimultaneousHSDSCHConfig::theInfo,
	&PDCPCapabilityr5ext::theInfo,
	&RLCCapabilityr5ext::theInfo,
	&PhysicalChannelCapabilityhspdschr5::theInfo,
	&MultiModeRATCapabilityv590ext::theInfo,
};
bool UERadioAccessCapabilityv590ext::itemsPres[5] = {
	0,
	1,
	1,
	1,
	1,
};
const UERadioAccessCapabilityv590ext::Info UERadioAccessCapabilityv590ext::theInfo = {
	UERadioAccessCapabilityv590ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 1, 0
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

const void *ULPhysChCapabilityFDDr6::itemsInfo[2] = {
	&MaxNoDPDCHBitsTransmitted::theInfo,
	&PhysicalChannelCapabilityedchr6::theInfo,
};
bool ULPhysChCapabilityFDDr6::itemsPres[2] = {
	1,
	1,
};
const ULPhysChCapabilityFDDr6::Info ULPhysChCapabilityFDDr6::theInfo = {
	ULPhysChCapabilityFDDr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *ULSecondaryCellInfoFDDNewConfiguration::itemsInfo[3] = {
	&SecondaryServingEDCHCellInfo::theInfo,
	&SecondaryEDCHInfoCommon::theInfo,
	&DLInformationPerSecondaryRLList::theInfo,
};
bool ULSecondaryCellInfoFDDNewConfiguration::itemsPres[3] = {
	0,
	0,
	0,
};
const ULSecondaryCellInfoFDDNewConfiguration::Info ULSecondaryCellInfoFDDNewConfiguration::theInfo = {
	ULSecondaryCellInfoFDDNewConfiguration::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *ULSecondaryCellInfoFDD::choicesInfo[2] = {
	&ULSecondaryCellInfoFDDContinue::theInfo,
	&ULSecondaryCellInfoFDDNewConfiguration::theInfo,
};
const ULSecondaryCellInfoFDD::Info ULSecondaryCellInfoFDD::theInfo = {
	ULSecondaryCellInfoFDD::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
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

const void *UTRANDRXCycleLengthCoefficientr7::itemsInfo[3] = {
	&UTRANDRXCycleLengthCoefficientr7DrxCycleLengthCoefficient::theInfo,
	&UTRANDRXCycleLengthCoefficientr7DrxCycleLengthCoefficient2::theInfo,
	&T319::theInfo,
};
bool UTRANDRXCycleLengthCoefficientr7::itemsPres[3] = {
	1,
	0,
	0,
};
const UTRANDRXCycleLengthCoefficientr7::Info UTRANDRXCycleLengthCoefficientr7::theInfo = {
	UTRANDRXCycleLengthCoefficientr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *RFC2507Info::itemsInfo[6] = {
	&RFC2507InfoFMAXPERIOD::theInfo,
	&RFC2507InfoFMAXTIME::theInfo,
	&RFC2507InfoMaxHEADER::theInfo,
	&RFC2507InfoTcpSPACE::theInfo,
	&RFC2507InfoNonTCPSPACE::theInfo,
	&ExpectReordering::theInfo,
};
bool RFC2507Info::itemsPres[6] = {
	0,
	0,
	0,
	0,
	0,
	1,
};
const RFC2507Info::Info RFC2507Info::theInfo = {
	RFC2507Info::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 5, 0
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

const void *ULRFC3095r4::itemsInfo[3] = {
	&CIDInclusionInfor4::theInfo,
	&ULRFC3095r4MaxCID::theInfo,
	&ROHCPacketSizeListr4::theInfo,
};
bool ULRFC3095r4::itemsPres[3] = {
	1,
	0,
	1,
};
const ULRFC3095r4::Info ULRFC3095r4::theInfo = {
	ULRFC3095r4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};

const void *DLRFC3095r4::itemsInfo[3] = {
	&CIDInclusionInfor4::theInfo,
	&DLRFC3095r4MaxCID::theInfo,
	&DLRFC3095r4ReverseDecompressionDepth::theInfo,
};
bool DLRFC3095r4::itemsPres[3] = {
	1,
	0,
	0,
};
const DLRFC3095r4::Info DLRFC3095r4::theInfo = {
	DLRFC3095r4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *RFC3095Infor4::itemsInfo[3] = {
	&ROHCProfileListr4::theInfo,
	&ULRFC3095r4::theInfo,
	&DLRFC3095r4::theInfo,
};
bool RFC3095Infor4::itemsPres[3] = {
	1,
	0,
	0,
};
const RFC3095Infor4::Info RFC3095Infor4::theInfo = {
	RFC3095Infor4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *AlgorithmSpecificInfor4::choicesInfo[2] = {
	&RFC2507Info::theInfo,
	&RFC3095Infor4::theInfo,
};
const AlgorithmSpecificInfor4::Info AlgorithmSpecificInfor4::theInfo = {
	AlgorithmSpecificInfor4::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *CommonRBMappingInfo::itemsInfo[2] = {
	&LogicalChannelIdentity::theInfo,
	&MACehsQueueId::theInfo,
};
bool CommonRBMappingInfo::itemsPres[2] = {
	1,
	1,
};
const CommonRBMappingInfo::Info CommonRBMappingInfo::theInfo = {
	CommonRBMappingInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *CSHSPAInformation::itemsInfo[2] = {
	&ULAMRRate::theInfo,
	&MaxCSDelay::theInfo,
};
bool CSHSPAInformation::itemsPres[2] = {
	0,
	1,
};
const CSHSPAInformation::Info CSHSPAInformation::theInfo = {
	CSHSPAInformation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *DefaultConfigForCellFACH::itemsInfo[2] = {
	&DefaultConfigMode::theInfo,
	&DefaultConfigIdForCellFACH::theInfo,
};
bool DefaultConfigForCellFACH::itemsPres[2] = {
	1,
	1,
};
const DefaultConfigForCellFACH::Info DefaultConfigForCellFACH::theInfo = {
	DefaultConfigForCellFACH::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *DLRLCStatusInfo::itemsInfo[4] = {
	&TimerStatusProhibit::theInfo,
	&TimerEPC::theInfo,
	&DLRLCStatusInfoMissingPDUIndicator::theInfo,
	&TimerStatusPeriodic::theInfo,
};
bool DLRLCStatusInfo::itemsPres[4] = {
	0,
	0,
	1,
	0,
};
const DLRLCStatusInfo::Info DLRLCStatusInfo::theInfo = {
	DLRLCStatusInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 3, 0
};

const void *DLAMRLCMode::itemsInfo[3] = {
	&DLAMRLCModeInSequenceDelivery::theInfo,
	&ReceivingWindowSize::theInfo,
	&DLRLCStatusInfo::theInfo,
};
bool DLAMRLCMode::itemsPres[3] = {
	1,
	1,
	1,
};
const DLAMRLCMode::Info DLAMRLCMode::theInfo = {
	DLAMRLCMode::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *OctetModeRLCSizeInfoType1SizeType2::itemsInfo[2] = {
	&OctetModeRLCSizeInfoType1SizeType2Part1::theInfo,
	&OctetModeRLCSizeInfoType1SizeType2Part2::theInfo,
};
bool OctetModeRLCSizeInfoType1SizeType2::itemsPres[2] = {
	1,
	0,
};
const OctetModeRLCSizeInfoType1SizeType2::Info OctetModeRLCSizeInfoType1SizeType2::theInfo = {
	OctetModeRLCSizeInfoType1SizeType2::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *OctetModeRLCSizeInfoType1SizeType3::itemsInfo[2] = {
	&OctetModeRLCSizeInfoType1SizeType3Part1::theInfo,
	&OctetModeRLCSizeInfoType1SizeType3Part2::theInfo,
};
bool OctetModeRLCSizeInfoType1SizeType3::itemsPres[2] = {
	1,
	0,
};
const OctetModeRLCSizeInfoType1SizeType3::Info OctetModeRLCSizeInfoType1SizeType3::theInfo = {
	OctetModeRLCSizeInfoType1SizeType3::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *OctetModeRLCSizeInfoType1::choicesInfo[3] = {
	&OctetModeRLCSizeInfoType1SizeType1::theInfo,
	&OctetModeRLCSizeInfoType1SizeType2::theInfo,
	&OctetModeRLCSizeInfoType1SizeType3::theInfo,
};
const OctetModeRLCSizeInfoType1::Info OctetModeRLCSizeInfoType1::theInfo = {
	OctetModeRLCSizeInfoType1::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *DLAMRLCModer5::itemsInfo[4] = {
	&OctetModeRLCSizeInfoType1::theInfo,
	&DLAMRLCModer5InSequenceDelivery::theInfo,
	&ReceivingWindowSize::theInfo,
	&DLRLCStatusInfo::theInfo,
};
bool DLAMRLCModer5::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const DLAMRLCModer5::Info DLAMRLCModer5::theInfo = {
	DLAMRLCModer5::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 0, 0
};

const void *DLAMRLCModer7DlRLCPDUsize::choicesInfo[2] = {
	&OctetModeRLCSizeInfoType1::theInfo,
	&DLAMRLCModer7DlRLCPDUsizeflexibleSize::theInfo,
};
const DLAMRLCModer7DlRLCPDUsize::Info DLAMRLCModer7DlRLCPDUsize::theInfo = {
	DLAMRLCModer7DlRLCPDUsize::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLAMRLCModer7::itemsInfo[4] = {
	&DLAMRLCModer7DlRLCPDUsize::theInfo,
	&DLAMRLCModer7InSequenceDelivery::theInfo,
	&ReceivingWindowSize::theInfo,
	&DLRLCStatusInfo::theInfo,
};
bool DLAMRLCModer7::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const DLAMRLCModer7::Info DLAMRLCModer7::theInfo = {
	DLAMRLCModer7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 0, 0
};

const void *RBWithPDCPInfo::itemsInfo[2] = {
	&RBIdentity::theInfo,
	&PDCPSNInfo::theInfo,
};
bool RBWithPDCPInfo::itemsPres[2] = {
	1,
	1,
};
const RBWithPDCPInfo::Info RBWithPDCPInfo::theInfo = {
	RBWithPDCPInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
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

const void *RBPDCPContextRelocation::itemsInfo[3] = {
	&RBIdentity::theInfo,
	&RBPDCPContextRelocationDlRFC3095ContextRelocation::theInfo,
	&RBPDCPContextRelocationUlRFC3095ContextRelocation::theInfo,
};
bool RBPDCPContextRelocation::itemsPres[3] = {
	1,
	1,
	1,
};
const RBPDCPContextRelocation::Info RBPDCPContextRelocation::theInfo = {
	RBPDCPContextRelocation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *DLCounterSynchronisationInfor5::itemsInfo[2] = {
	&RBWithPDCPInfoList::theInfo,
	&RBPDCPContextRelocationList::theInfo,
};
bool DLCounterSynchronisationInfor5::itemsPres[2] = {
	0,
	0,
};
const DLCounterSynchronisationInfor5::Info DLCounterSynchronisationInfor5::theInfo = {
	DLCounterSynchronisationInfor5::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *TransportChannelIdentityDCHandDSCH::itemsInfo[2] = {
	&TransportChannelIdentity::theInfo,
	&TransportChannelIdentity::theInfo,
};
bool TransportChannelIdentityDCHandDSCH::itemsPres[2] = {
	1,
	1,
};
const TransportChannelIdentityDCHandDSCH::Info TransportChannelIdentityDCHandDSCH::theInfo = {
	TransportChannelIdentityDCHandDSCH::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *DLTransportChannelType::choicesInfo[4] = {
	&TransportChannelIdentity::theInfo,
	&DLTransportChannelTypeFach::theInfo,
	&TransportChannelIdentity::theInfo,
	&TransportChannelIdentityDCHandDSCH::theInfo,
};
const DLTransportChannelType::Info DLTransportChannelType::theInfo = {
	DLTransportChannelType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	3
};

const void *DLLogicalChannelMapping::itemsInfo[2] = {
	&DLTransportChannelType::theInfo,
	&LogicalChannelIdentity::theInfo,
};
bool DLLogicalChannelMapping::itemsPres[2] = {
	1,
	0,
};
const DLLogicalChannelMapping::Info DLLogicalChannelMapping::theInfo = {
	DLLogicalChannelMapping::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *MACdFlowIdentityDCHandHSDSCH::itemsInfo[2] = {
	&TransportChannelIdentity::theInfo,
	&MACdFlowIdentity::theInfo,
};
bool MACdFlowIdentityDCHandHSDSCH::itemsPres[2] = {
	1,
	1,
};
const MACdFlowIdentityDCHandHSDSCH::Info MACdFlowIdentityDCHandHSDSCH::theInfo = {
	MACdFlowIdentityDCHandHSDSCH::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *DLTransportChannelTyper5::choicesInfo[6] = {
	&TransportChannelIdentity::theInfo,
	&DLTransportChannelTyper5Fach::theInfo,
	&TransportChannelIdentity::theInfo,
	&TransportChannelIdentityDCHandDSCH::theInfo,
	&MACdFlowIdentity::theInfo,
	&MACdFlowIdentityDCHandHSDSCH::theInfo,
};
const DLTransportChannelTyper5::Info DLTransportChannelTyper5::theInfo = {
	DLTransportChannelTyper5::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	5
};

const void *DLLogicalChannelMappingr5::itemsInfo[2] = {
	&DLTransportChannelTyper5::theInfo,
	&LogicalChannelIdentity::theInfo,
};
bool DLLogicalChannelMappingr5::itemsPres[2] = {
	1,
	0,
};
const DLLogicalChannelMappingr5::Info DLLogicalChannelMappingr5::theInfo = {
	DLLogicalChannelMappingr5::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *DLTransportChannelTyper7Hsdsch::choicesInfo[2] = {
	&MACdFlowIdentity::theInfo,
	&MACehsQueueId::theInfo,
};
const DLTransportChannelTyper7Hsdsch::Info DLTransportChannelTyper7Hsdsch::theInfo = {
	DLTransportChannelTyper7Hsdsch::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *MACehsQueueIdDCHandHSDSCH::itemsInfo[2] = {
	&TransportChannelIdentity::theInfo,
	&MACehsQueueId::theInfo,
};
bool MACehsQueueIdDCHandHSDSCH::itemsPres[2] = {
	1,
	1,
};
const MACehsQueueIdDCHandHSDSCH::Info MACehsQueueIdDCHandHSDSCH::theInfo = {
	MACehsQueueIdDCHandHSDSCH::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *DLTransportChannelTyper7Dchandhsdsch::choicesInfo[2] = {
	&MACdFlowIdentityDCHandHSDSCH::theInfo,
	&MACehsQueueIdDCHandHSDSCH::theInfo,
};
const DLTransportChannelTyper7Dchandhsdsch::Info DLTransportChannelTyper7Dchandhsdsch::theInfo = {
	DLTransportChannelTyper7Dchandhsdsch::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLTransportChannelTyper7::choicesInfo[6] = {
	&TransportChannelIdentity::theInfo,
	&DLTransportChannelTyper7Fach::theInfo,
	&TransportChannelIdentity::theInfo,
	&TransportChannelIdentityDCHandDSCH::theInfo,
	&DLTransportChannelTyper7Hsdsch::theInfo,
	&DLTransportChannelTyper7Dchandhsdsch::theInfo,
};
const DLTransportChannelTyper7::Info DLTransportChannelTyper7::theInfo = {
	DLTransportChannelTyper7::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	5
};

const void *DLLogicalChannelMappingr7::itemsInfo[2] = {
	&DLTransportChannelTyper7::theInfo,
	&LogicalChannelIdentity::theInfo,
};
bool DLLogicalChannelMappingr7::itemsPres[2] = {
	1,
	0,
};
const DLLogicalChannelMappingr7::Info DLLogicalChannelMappingr7::theInfo = {
	DLLogicalChannelMappingr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
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

const void *DLRLCMode::choicesInfo[3] = {
	&DLAMRLCMode::theInfo,
	&DLRLCModeDlUMRLCMode::theInfo,
	&DLTMRLCMode::theInfo,
};
const DLRLCMode::Info DLRLCMode::theInfo = {
	DLRLCMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
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

const void *DLRLCModer5::choicesInfo[3] = {
	&DLAMRLCModer5::theInfo,
	&DLUMRLCModer5::theInfo,
	&DLTMRLCMode::theInfo,
};
const DLRLCModer5::Info DLRLCModer5::theInfo = {
	DLRLCModer5::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *DLUMRLCModer6::itemsInfo[2] = {
	&DLUMRLCLIsize::theInfo,
	&DLReceptionWindowSizer6::theInfo,
};
bool DLUMRLCModer6::itemsPres[2] = {
	1,
	0,
};
const DLUMRLCModer6::Info DLUMRLCModer6::theInfo = {
	DLUMRLCModer6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *DLRLCModer6::choicesInfo[3] = {
	&DLAMRLCModer5::theInfo,
	&DLUMRLCModer6::theInfo,
	&DLTMRLCMode::theInfo,
};
const DLRLCModer6::Info DLRLCModer6::theInfo = {
	DLRLCModer6::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *DLRLCModer7::choicesInfo[3] = {
	&DLAMRLCModer7::theInfo,
	&DLUMRLCModer6::theInfo,
	&DLTMRLCMode::theInfo,
};
const DLRLCModer7::Info DLRLCModer7::theInfo = {
	DLRLCModer7::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *ExplicitDiscard::itemsInfo[3] = {
	&TimerMRW::theInfo,
	&TimerDiscard::theInfo,
	&MaxMRW::theInfo,
};
bool ExplicitDiscard::itemsPres[3] = {
	1,
	1,
	1,
};
const ExplicitDiscard::Info ExplicitDiscard::theInfo = {
	ExplicitDiscard::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
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

const void *LosslessSRNSRelocSupport::choicesInfo[2] = {
	&MaxPDCPSNWindowSize::theInfo,
	&LosslessSRNSRelocSupportNotSupported::theInfo,
};
const LosslessSRNSRelocSupport::Info LosslessSRNSRelocSupport::theInfo = {
	LosslessSRNSRelocSupport::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *MaxDATRetransmissions::itemsInfo[3] = {
	&MaxDAT::theInfo,
	&TimerMRW::theInfo,
	&MaxMRW::theInfo,
};
bool MaxDATRetransmissions::itemsPres[3] = {
	1,
	1,
	1,
};
const MaxDATRetransmissions::Info MaxDATRetransmissions::theInfo = {
	MaxDATRetransmissions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *PDCPInfo::itemsInfo[3] = {
	&LosslessSRNSRelocSupport::theInfo,
	&PDCPPDUHeader::theInfo,
	&HeaderCompressionInfoList::theInfo,
};
bool PDCPInfo::itemsPres[3] = {
	0,
	1,
	0,
};
const PDCPInfo::Info PDCPInfo::theInfo = {
	PDCPInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *PDCPInfor4::itemsInfo[3] = {
	&LosslessSRNSRelocSupport::theInfo,
	&PDCPPDUHeader::theInfo,
	&HeaderCompressionInfoListr4::theInfo,
};
bool PDCPInfor4::itemsPres[3] = {
	0,
	1,
	0,
};
const PDCPInfor4::Info PDCPInfor4::theInfo = {
	PDCPInfor4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *PDCPInfoReconfig::itemsInfo[2] = {
	&PDCPInfo::theInfo,
	&PDCPInfoReconfigDummy::theInfo,
};
bool PDCPInfoReconfig::itemsPres[2] = {
	1,
	1,
};
const PDCPInfoReconfig::Info PDCPInfoReconfig::theInfo = {
	PDCPInfoReconfig::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
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

const void *PollingInfo::itemsInfo[8] = {
	&TimerPollProhibit::theInfo,
	&TimerPoll::theInfo,
	&PollPDU::theInfo,
	&PollSDU::theInfo,
	&PollingInfoLastTransmissionPDUPoll::theInfo,
	&PollingInfoLastRetransmissionPDUPoll::theInfo,
	&PollWindow::theInfo,
	&TimerPollPeriodic::theInfo,
};
bool PollingInfo::itemsPres[8] = {
	0,
	0,
	0,
	0,
	1,
	1,
	0,
	0,
};
const PollingInfo::Info PollingInfo::theInfo = {
	PollingInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	8, 6, 0
};

const void *TransmissionRLCDiscard::choicesInfo[4] = {
	&ExplicitDiscard::theInfo,
	&NoExplicitDiscard::theInfo,
	&MaxDATRetransmissions::theInfo,
	&MaxDAT::theInfo,
};
const TransmissionRLCDiscard::Info TransmissionRLCDiscard::theInfo = {
	TransmissionRLCDiscard::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	3
};

const void *ULAMRLCMode::itemsInfo[5] = {
	&TransmissionRLCDiscard::theInfo,
	&TransmissionWindowSize::theInfo,
	&TimerRST::theInfo,
	&MaxRST::theInfo,
	&PollingInfo::theInfo,
};
bool ULAMRLCMode::itemsPres[5] = {
	1,
	1,
	1,
	1,
	0,
};
const ULAMRLCMode::Info ULAMRLCMode::theInfo = {
	ULAMRLCMode::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 1, 0
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

const void *ULTMRLCMode::itemsInfo[2] = {
	&TransmissionRLCDiscard::theInfo,
	&ULTMRLCModeSegmentationIndication::theInfo,
};
bool ULTMRLCMode::itemsPres[2] = {
	0,
	1,
};
const ULTMRLCMode::Info ULTMRLCMode::theInfo = {
	ULTMRLCMode::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *ULRLCMode::choicesInfo[4] = {
	&ULAMRLCMode::theInfo,
	&ULUMRLCMode::theInfo,
	&ULTMRLCMode::theInfo,
	&ULRLCModeSpare::theInfo,
};
const ULRLCMode::Info ULRLCMode::theInfo = {
	ULRLCMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	3
};

const void *RLCInfo::itemsInfo[2] = {
	&ULRLCMode::theInfo,
	&DLRLCMode::theInfo,
};
bool RLCInfo::itemsPres[2] = {
	0,
	0,
};
const RLCInfo::Info RLCInfo::theInfo = {
	RLCInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *RLCInfoChoice::choicesInfo[2] = {
	&RLCInfo::theInfo,
	&RBIdentity::theInfo,
};
const RLCInfoChoice::Info RLCInfoChoice::theInfo = {
	RLCInfoChoice::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULTransportChannelType::choicesInfo[4] = {
	&TransportChannelIdentity::theInfo,
	&ULTransportChannelTypeRach::theInfo,
	&ULTransportChannelTypeDummy::theInfo,
	&TransportChannelIdentity::theInfo,
};
const ULTransportChannelType::Info ULTransportChannelType::theInfo = {
	ULTransportChannelType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	3
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

const void *ULLogicalChannelMappingRlcSizeList::choicesInfo[3] = {
	&ULLogicalChannelMappingRlcSizeListAllSizes::theInfo,
	&ULLogicalChannelMappingRlcSizeListConfigured::theInfo,
	&RLCSizeExplicitList::theInfo,
};
const ULLogicalChannelMappingRlcSizeList::Info ULLogicalChannelMappingRlcSizeList::theInfo = {
	ULLogicalChannelMappingRlcSizeList::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *ULLogicalChannelMapping::itemsInfo[4] = {
	&ULTransportChannelType::theInfo,
	&LogicalChannelIdentity::theInfo,
	&ULLogicalChannelMappingRlcSizeList::theInfo,
	&MACLogicalChannelPriority::theInfo,
};
bool ULLogicalChannelMapping::itemsPres[4] = {
	1,
	0,
	1,
	1,
};
const ULLogicalChannelMapping::Info ULLogicalChannelMapping::theInfo = {
	ULLogicalChannelMapping::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 1, 0
};

const void *ULLogicalChannelMappingList::itemsInfo[2] = {
	&ULLogicalChannelMappingListRlcLogicalChannelMappingIndicator::theInfo,
	&ULLogicalChannelMappingListUlLogicalChannelMapping::theInfo,
};
bool ULLogicalChannelMappingList::itemsPres[2] = {
	1,
	1,
};
const ULLogicalChannelMappingList::Info ULLogicalChannelMappingList::theInfo = {
	ULLogicalChannelMappingList::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *ULLogicalChannelMappings::choicesInfo[2] = {
	&ULLogicalChannelMapping::theInfo,
	&ULLogicalChannelMappingList::theInfo,
};
const ULLogicalChannelMappings::Info ULLogicalChannelMappings::theInfo = {
	ULLogicalChannelMappings::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *RBMappingOption::itemsInfo[2] = {
	&ULLogicalChannelMappings::theInfo,
	&DLLogicalChannelMappingList::theInfo,
};
bool RBMappingOption::itemsPres[2] = {
	0,
	0,
};
const RBMappingOption::Info RBMappingOption::theInfo = {
	RBMappingOption::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *SRBInformationSetup::itemsInfo[3] = {
	&RBIdentity::theInfo,
	&RLCInfoChoice::theInfo,
	&RBMappingInfo::theInfo,
};
bool SRBInformationSetup::itemsPres[3] = {
	0,
	1,
	1,
};
const SRBInformationSetup::Info SRBInformationSetup::theInfo = {
	SRBInformationSetup::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};

const void *RBInformationSetup::itemsInfo[4] = {
	&RBIdentity::theInfo,
	&PDCPInfo::theInfo,
	&RLCInfoChoice::theInfo,
	&RBMappingInfo::theInfo,
};
bool RBInformationSetup::itemsPres[4] = {
	1,
	0,
	1,
	1,
};
const RBInformationSetup::Info RBInformationSetup::theInfo = {
	RBInformationSetup::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 1, 0
};

const void *PredefinedRBConfiguration::itemsInfo[3] = {
	&ReEstablishmentTimer::theInfo,
	&SRBInformationSetupList::theInfo,
	&RBInformationSetupList::theInfo,
};
bool PredefinedRBConfiguration::itemsPres[3] = {
	1,
	1,
	1,
};
const PredefinedRBConfiguration::Info PredefinedRBConfiguration::theInfo = {
	PredefinedRBConfiguration::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *RestrictedTrChInfo::itemsInfo[3] = {
	&ULTrCHType::theInfo,
	&TransportChannelIdentity::theInfo,
	&AllowedTFIList::theInfo,
};
bool RestrictedTrChInfo::itemsPres[3] = {
	1,
	1,
	0,
};
const RestrictedTrChInfo::Info RestrictedTrChInfo::theInfo = {
	RestrictedTrChInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};

const void *TFCSubset::choicesInfo[5] = {
	&TFCValue::theInfo,
	&AllowedTFCList::theInfo,
	&NonallowedTFCList::theInfo,
	&RestrictedTrChInfoList::theInfo,
	&TFCSubsetFullTFCS::theInfo,
};
const TFCSubset::Info TFCSubset::theInfo = {
	TFCSubset::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	4
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

const void *TFCSReconfAddCtfcSizeCtfc4Bit::itemsInfo[0] = {
};
bool TFCSReconfAddCtfcSizeCtfc4Bit::itemsPres[0] = {
};
const TFCSReconfAddCtfcSizeCtfc4Bit::Info TFCSReconfAddCtfcSizeCtfc4Bit::theInfo = {
	TFCSReconfAddCtfcSizeCtfc4Bit::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *TFCSReconfAddCtfcSizeCtfc6Bit::itemsInfo[0] = {
};
bool TFCSReconfAddCtfcSizeCtfc6Bit::itemsPres[0] = {
};
const TFCSReconfAddCtfcSizeCtfc6Bit::Info TFCSReconfAddCtfcSizeCtfc6Bit::theInfo = {
	TFCSReconfAddCtfcSizeCtfc6Bit::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *TFCSReconfAddCtfcSizeCtfc8Bit::itemsInfo[0] = {
};
bool TFCSReconfAddCtfcSizeCtfc8Bit::itemsPres[0] = {
};
const TFCSReconfAddCtfcSizeCtfc8Bit::Info TFCSReconfAddCtfcSizeCtfc8Bit::theInfo = {
	TFCSReconfAddCtfcSizeCtfc8Bit::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *TFCSReconfAddCtfcSizeCtfc12Bit::itemsInfo[0] = {
};
bool TFCSReconfAddCtfcSizeCtfc12Bit::itemsPres[0] = {
};
const TFCSReconfAddCtfcSizeCtfc12Bit::Info TFCSReconfAddCtfcSizeCtfc12Bit::theInfo = {
	TFCSReconfAddCtfcSizeCtfc12Bit::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *TFCSReconfAddCtfcSizeCtfc16Bit::itemsInfo[0] = {
};
bool TFCSReconfAddCtfcSizeCtfc16Bit::itemsPres[0] = {
};
const TFCSReconfAddCtfcSizeCtfc16Bit::Info TFCSReconfAddCtfcSizeCtfc16Bit::theInfo = {
	TFCSReconfAddCtfcSizeCtfc16Bit::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *TFCSReconfAddCtfcSizeCtfc24Bit::itemsInfo[0] = {
};
bool TFCSReconfAddCtfcSizeCtfc24Bit::itemsPres[0] = {
};
const TFCSReconfAddCtfcSizeCtfc24Bit::Info TFCSReconfAddCtfcSizeCtfc24Bit::theInfo = {
	TFCSReconfAddCtfcSizeCtfc24Bit::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *TFCSReconfAddCtfcSize::choicesInfo[7] = {
	&TFCSReconfAddCtfcSizeCtfc2Bit::theInfo,
	&TFCSReconfAddCtfcSizeCtfc4Bit::theInfo,
	&TFCSReconfAddCtfcSizeCtfc6Bit::theInfo,
	&TFCSReconfAddCtfcSizeCtfc8Bit::theInfo,
	&TFCSReconfAddCtfcSizeCtfc12Bit::theInfo,
	&TFCSReconfAddCtfcSizeCtfc16Bit::theInfo,
	&TFCSReconfAddCtfcSizeCtfc24Bit::theInfo,
};
const TFCSReconfAddCtfcSize::Info TFCSReconfAddCtfcSize::theInfo = {
	TFCSReconfAddCtfcSize::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	6
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

const void *ExplicitTFCSConfigurationReplacement::itemsInfo[2] = {
	&TFCSRemovalList::theInfo,
	&TFCSReconfAdd::theInfo,
};
bool ExplicitTFCSConfigurationReplacement::itemsPres[2] = {
	1,
	1,
};
const ExplicitTFCSConfigurationReplacement::Info ExplicitTFCSConfigurationReplacement::theInfo = {
	ExplicitTFCSConfigurationReplacement::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *ExplicitTFCSConfiguration::choicesInfo[4] = {
	&TFCSReconfAdd::theInfo,
	&TFCSReconfAdd::theInfo,
	&TFCSRemovalList::theInfo,
	&ExplicitTFCSConfigurationReplacement::theInfo,
};
const ExplicitTFCSConfiguration::Info ExplicitTFCSConfiguration::theInfo = {
	ExplicitTFCSConfiguration::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	3
};

const void *TFCSInfoForDSCH::choicesInfo[7] = {
	&TFCSInfoForDSCHCtfc2bit::theInfo,
	&TFCSInfoForDSCHCtfc4bit::theInfo,
	&TFCSInfoForDSCHCtfc6bit::theInfo,
	&TFCSInfoForDSCHCtfc8bit::theInfo,
	&TFCSInfoForDSCHCtfc12bit::theInfo,
	&TFCSInfoForDSCHCtfc16bit::theInfo,
	&TFCSInfoForDSCHCtfc24bit::theInfo,
};
const TFCSInfoForDSCH::Info TFCSInfoForDSCH::theInfo = {
	TFCSInfoForDSCH::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	6
};

const void *TFCIRange::itemsInfo[2] = {
	&TFCIRangeMaxTFCIField2Value::theInfo,
	&TFCSInfoForDSCH::theInfo,
};
bool TFCIRange::itemsPres[2] = {
	1,
	1,
};
const TFCIRange::Info TFCIRange::theInfo = {
	TFCIRange::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *TFCIField2Information::choicesInfo[2] = {
	&TFCIRangeList::theInfo,
	&ExplicitTFCSConfiguration::theInfo,
};
const TFCIField2Information::Info TFCIField2Information::theInfo = {
	TFCIField2Information::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *SplitTFCISignalling::itemsInfo[4] = {
	&SplitType::theInfo,
	&SplitTFCISignallingTfciField2Length::theInfo,
	&ExplicitTFCSConfiguration::theInfo,
	&TFCIField2Information::theInfo,
};
bool SplitTFCISignalling::itemsPres[4] = {
	0,
	0,
	0,
	0,
};
const SplitTFCISignalling::Info SplitTFCISignalling::theInfo = {
	SplitTFCISignalling::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 4, 0
};

const void *TFCS::choicesInfo[2] = {
	&ExplicitTFCSConfiguration::theInfo,
	&SplitTFCISignalling::theInfo,
};
const TFCS::Info TFCS::theInfo = {
	TFCS::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULCommonTransChInfoModeSpecificInfoFdd::itemsInfo[1] = {
	&TFCS::theInfo,
};
bool ULCommonTransChInfoModeSpecificInfoFdd::itemsPres[1] = {
	1,
};
const ULCommonTransChInfoModeSpecificInfoFdd::Info ULCommonTransChInfoModeSpecificInfoFdd::theInfo = {
	ULCommonTransChInfoModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *TFCSIdentity::itemsInfo[2] = {
	&TFCSIdentityPlain::theInfo,
	&TFCSIdentitySharedChannelIndicator::theInfo,
};
bool TFCSIdentity::itemsPres[2] = {
	0,
	1,
};
const TFCSIdentity::Info TFCSIdentity::theInfo = {
	TFCSIdentity::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *IndividualULCCTrCHInfo::itemsInfo[3] = {
	&TFCSIdentity::theInfo,
	&TFCS::theInfo,
	&TFCSubset::theInfo,
};
bool IndividualULCCTrCHInfo::itemsPres[3] = {
	1,
	1,
	1,
};
const IndividualULCCTrCHInfo::Info IndividualULCCTrCHInfo::theInfo = {
	IndividualULCCTrCHInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *ULCommonTransChInfoModeSpecificInfoTdd::itemsInfo[1] = {
	&IndividualULCCTrCHInfoList::theInfo,
};
bool ULCommonTransChInfoModeSpecificInfoTdd::itemsPres[1] = {
	0,
};
const ULCommonTransChInfoModeSpecificInfoTdd::Info ULCommonTransChInfoModeSpecificInfoTdd::theInfo = {
	ULCommonTransChInfoModeSpecificInfoTdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ULCommonTransChInfoModeSpecificInfo::choicesInfo[2] = {
	&ULCommonTransChInfoModeSpecificInfoFdd::theInfo,
	&ULCommonTransChInfoModeSpecificInfoTdd::theInfo,
};
const ULCommonTransChInfoModeSpecificInfo::Info ULCommonTransChInfoModeSpecificInfo::theInfo = {
	ULCommonTransChInfoModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULCommonTransChInfo::itemsInfo[3] = {
	&TFCSubset::theInfo,
	&TFCS::theInfo,
	&ULCommonTransChInfoModeSpecificInfo::theInfo,
};
bool ULCommonTransChInfo::itemsPres[3] = {
	0,
	0,
	0,
};
const ULCommonTransChInfo::Info ULCommonTransChInfo::theInfo = {
	ULCommonTransChInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *BitModeRLCSizeInfoSizeType2::itemsInfo[2] = {
	&BitModeRLCSizeInfoSizeType2Part1::theInfo,
	&BitModeRLCSizeInfoSizeType2Part2::theInfo,
};
bool BitModeRLCSizeInfoSizeType2::itemsPres[2] = {
	1,
	0,
};
const BitModeRLCSizeInfoSizeType2::Info BitModeRLCSizeInfoSizeType2::theInfo = {
	BitModeRLCSizeInfoSizeType2::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *BitModeRLCSizeInfoSizeType3::itemsInfo[2] = {
	&BitModeRLCSizeInfoSizeType3Part1::theInfo,
	&BitModeRLCSizeInfoSizeType3Part2::theInfo,
};
bool BitModeRLCSizeInfoSizeType3::itemsPres[2] = {
	1,
	0,
};
const BitModeRLCSizeInfoSizeType3::Info BitModeRLCSizeInfoSizeType3::theInfo = {
	BitModeRLCSizeInfoSizeType3::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *BitModeRLCSizeInfoSizeType4::itemsInfo[2] = {
	&BitModeRLCSizeInfoSizeType4Part1::theInfo,
	&BitModeRLCSizeInfoSizeType4Part2::theInfo,
};
bool BitModeRLCSizeInfoSizeType4::itemsPres[2] = {
	1,
	0,
};
const BitModeRLCSizeInfoSizeType4::Info BitModeRLCSizeInfoSizeType4::theInfo = {
	BitModeRLCSizeInfoSizeType4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *BitModeRLCSizeInfo::choicesInfo[4] = {
	&BitModeRLCSizeInfoSizeType1::theInfo,
	&BitModeRLCSizeInfoSizeType2::theInfo,
	&BitModeRLCSizeInfoSizeType3::theInfo,
	&BitModeRLCSizeInfoSizeType4::theInfo,
};
const BitModeRLCSizeInfo::Info BitModeRLCSizeInfo::theInfo = {
	BitModeRLCSizeInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	3
};

const void *DedicatedDynamicTFInfoRlcSize::choicesInfo[2] = {
	&BitModeRLCSizeInfo::theInfo,
	&OctetModeRLCSizeInfoType1::theInfo,
};
const DedicatedDynamicTFInfoRlcSize::Info DedicatedDynamicTFInfoRlcSize::theInfo = {
	DedicatedDynamicTFInfoRlcSize::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *NumberOfTransportBlocks::choicesInfo[4] = {
	&NumberOfTransportBlocksZero::theInfo,
	&NumberOfTransportBlocksOne::theInfo,
	&NumberOfTransportBlocksSmall::theInfo,
	&NumberOfTransportBlocksLarge::theInfo,
};
const NumberOfTransportBlocks::Info NumberOfTransportBlocks::theInfo = {
	NumberOfTransportBlocks::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	3
};

const void *LogicalChannelByRB::itemsInfo[2] = {
	&RBIdentity::theInfo,
	&LogicalChannelByRBLogChOfRb::theInfo,
};
bool LogicalChannelByRB::itemsPres[2] = {
	1,
	0,
};
const LogicalChannelByRB::Info LogicalChannelByRB::theInfo = {
	LogicalChannelByRB::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *LogicalChannelList::choicesInfo[3] = {
	&LogicalChannelListAllSizes::theInfo,
	&LogicalChannelListConfigured::theInfo,
	&LogicalChannelListExplicitList::theInfo,
};
const LogicalChannelList::Info LogicalChannelList::theInfo = {
	LogicalChannelList::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *DedicatedDynamicTFInfo::itemsInfo[3] = {
	&DedicatedDynamicTFInfoRlcSize::theInfo,
	&DedicatedDynamicTFInfoNumberOfTbSizeList::theInfo,
	&LogicalChannelList::theInfo,
};
bool DedicatedDynamicTFInfo::itemsPres[3] = {
	1,
	1,
	1,
};
const DedicatedDynamicTFInfo::Info DedicatedDynamicTFInfo::theInfo = {
	DedicatedDynamicTFInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *DedicatedDynamicTFInfoDynamicTTIRlcSize::choicesInfo[2] = {
	&BitModeRLCSizeInfo::theInfo,
	&OctetModeRLCSizeInfoType1::theInfo,
};
const DedicatedDynamicTFInfoDynamicTTIRlcSize::Info DedicatedDynamicTFInfoDynamicTTIRlcSize::theInfo = {
	DedicatedDynamicTFInfoDynamicTTIRlcSize::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
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

const void *DedicatedDynamicTFInfoDynamicTTI::itemsInfo[3] = {
	&DedicatedDynamicTFInfoDynamicTTIRlcSize::theInfo,
	&NumberOfTbSizeAndTTIList::theInfo,
	&LogicalChannelList::theInfo,
};
bool DedicatedDynamicTFInfoDynamicTTI::itemsPres[3] = {
	1,
	1,
	1,
};
const DedicatedDynamicTFInfoDynamicTTI::Info DedicatedDynamicTFInfoDynamicTTI::theInfo = {
	DedicatedDynamicTFInfoDynamicTTI::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *DedicatedTransChTFSTti::choicesInfo[5] = {
	&DedicatedDynamicTFInfoList::theInfo,
	&DedicatedDynamicTFInfoList::theInfo,
	&DedicatedDynamicTFInfoList::theInfo,
	&DedicatedDynamicTFInfoList::theInfo,
	&DedicatedDynamicTFInfoListDynamicTTI::theInfo,
};
const DedicatedTransChTFSTti::Info DedicatedTransChTFSTti::theInfo = {
	DedicatedTransChTFSTti::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	4
};

const void *ChannelCodingType::choicesInfo[3] = {
	&ChannelCodingTypeNoCoding::theInfo,
	&CodingRate::theInfo,
	&ChannelCodingTypeTurbo::theInfo,
};
const ChannelCodingType::Info ChannelCodingType::theInfo = {
	ChannelCodingType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *SemistaticTFInformation::itemsInfo[3] = {
	&ChannelCodingType::theInfo,
	&RateMatchingAttribute::theInfo,
	&CRCSize::theInfo,
};
bool SemistaticTFInformation::itemsPres[3] = {
	1,
	1,
	1,
};
const SemistaticTFInformation::Info SemistaticTFInformation::theInfo = {
	SemistaticTFInformation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *DedicatedTransChTFS::itemsInfo[2] = {
	&DedicatedTransChTFSTti::theInfo,
	&SemistaticTFInformation::theInfo,
};
bool DedicatedTransChTFS::itemsPres[2] = {
	1,
	1,
};
const DedicatedTransChTFS::Info DedicatedTransChTFS::theInfo = {
	DedicatedTransChTFS::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *OctetModeRLCSizeInfoType2::choicesInfo[3] = {
	&OctetModeRLCSizeInfoType2SizeType1::theInfo,
	&OctetModeRLCSizeInfoType2SizeType2::theInfo,
	&OctetModeRLCSizeInfoType2SizeType3::theInfo,
};
const OctetModeRLCSizeInfoType2::Info OctetModeRLCSizeInfoType2::theInfo = {
	OctetModeRLCSizeInfoType2::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *CommonDynamicTFInfoRlcSizeFdd::itemsInfo[1] = {
	&OctetModeRLCSizeInfoType2::theInfo,
};
bool CommonDynamicTFInfoRlcSizeFdd::itemsPres[1] = {
	1,
};
const CommonDynamicTFInfoRlcSizeFdd::Info CommonDynamicTFInfoRlcSizeFdd::theInfo = {
	CommonDynamicTFInfoRlcSizeFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *CommonDynamicTFInfoRlcSizeTddCommonTDDChoice::choicesInfo[2] = {
	&BitModeRLCSizeInfo::theInfo,
	&OctetModeRLCSizeInfoType1::theInfo,
};
const CommonDynamicTFInfoRlcSizeTddCommonTDDChoice::Info CommonDynamicTFInfoRlcSizeTddCommonTDDChoice::theInfo = {
	CommonDynamicTFInfoRlcSizeTddCommonTDDChoice::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *CommonDynamicTFInfoRlcSizeTdd::itemsInfo[1] = {
	&CommonDynamicTFInfoRlcSizeTddCommonTDDChoice::theInfo,
};
bool CommonDynamicTFInfoRlcSizeTdd::itemsPres[1] = {
	1,
};
const CommonDynamicTFInfoRlcSizeTdd::Info CommonDynamicTFInfoRlcSizeTdd::theInfo = {
	CommonDynamicTFInfoRlcSizeTdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *CommonDynamicTFInfoRlcSize::choicesInfo[2] = {
	&CommonDynamicTFInfoRlcSizeFdd::theInfo,
	&CommonDynamicTFInfoRlcSizeTdd::theInfo,
};
const CommonDynamicTFInfoRlcSize::Info CommonDynamicTFInfoRlcSize::theInfo = {
	CommonDynamicTFInfoRlcSize::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *CommonDynamicTFInfo::itemsInfo[3] = {
	&CommonDynamicTFInfoRlcSize::theInfo,
	&CommonDynamicTFInfoNumberOfTbSizeList::theInfo,
	&LogicalChannelList::theInfo,
};
bool CommonDynamicTFInfo::itemsPres[3] = {
	1,
	1,
	1,
};
const CommonDynamicTFInfo::Info CommonDynamicTFInfo::theInfo = {
	CommonDynamicTFInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *CommonDynamicTFInfoDynamicTTICommonTDDChoice::choicesInfo[2] = {
	&BitModeRLCSizeInfo::theInfo,
	&OctetModeRLCSizeInfoType1::theInfo,
};
const CommonDynamicTFInfoDynamicTTICommonTDDChoice::Info CommonDynamicTFInfoDynamicTTICommonTDDChoice::theInfo = {
	CommonDynamicTFInfoDynamicTTICommonTDDChoice::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *CommonDynamicTFInfoDynamicTTI::itemsInfo[3] = {
	&CommonDynamicTFInfoDynamicTTICommonTDDChoice::theInfo,
	&NumberOfTbSizeAndTTIList::theInfo,
	&LogicalChannelList::theInfo,
};
bool CommonDynamicTFInfoDynamicTTI::itemsPres[3] = {
	1,
	1,
	1,
};
const CommonDynamicTFInfoDynamicTTI::Info CommonDynamicTFInfoDynamicTTI::theInfo = {
	CommonDynamicTFInfoDynamicTTI::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *CommonTransChTFSTti::choicesInfo[5] = {
	&CommonDynamicTFInfoList::theInfo,
	&CommonDynamicTFInfoList::theInfo,
	&CommonDynamicTFInfoList::theInfo,
	&CommonDynamicTFInfoList::theInfo,
	&CommonDynamicTFInfoListDynamicTTI::theInfo,
};
const CommonTransChTFSTti::Info CommonTransChTFSTti::theInfo = {
	CommonTransChTFSTti::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	4
};

const void *CommonTransChTFS::itemsInfo[2] = {
	&CommonTransChTFSTti::theInfo,
	&SemistaticTFInformation::theInfo,
};
bool CommonTransChTFS::itemsPres[2] = {
	1,
	1,
};
const CommonTransChTFS::Info CommonTransChTFS::theInfo = {
	CommonTransChTFS::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *TransportFormatSet::choicesInfo[2] = {
	&DedicatedTransChTFS::theInfo,
	&CommonTransChTFS::theInfo,
};
const TransportFormatSet::Info TransportFormatSet::theInfo = {
	TransportFormatSet::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULAddReconfTransChInformation::itemsInfo[3] = {
	&ULTrCHType::theInfo,
	&TransportChannelIdentity::theInfo,
	&TransportFormatSet::theInfo,
};
bool ULAddReconfTransChInformation::itemsPres[3] = {
	1,
	1,
	1,
};
const ULAddReconfTransChInformation::Info ULAddReconfTransChInformation::theInfo = {
	ULAddReconfTransChInformation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *DLCommonTransChInfoModeSpecificInfoFddDlParameters::choicesInfo[2] = {
	&TFCS::theInfo,
	&DLCommonTransChInfoModeSpecificInfoFddDlParametersSameAsUL::theInfo,
};
const DLCommonTransChInfoModeSpecificInfoFddDlParameters::Info DLCommonTransChInfoModeSpecificInfoFddDlParameters::theInfo = {
	DLCommonTransChInfoModeSpecificInfoFddDlParameters::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLCommonTransChInfoModeSpecificInfoFdd::itemsInfo[1] = {
	&DLCommonTransChInfoModeSpecificInfoFddDlParameters::theInfo,
};
bool DLCommonTransChInfoModeSpecificInfoFdd::itemsPres[1] = {
	0,
};
const DLCommonTransChInfoModeSpecificInfoFdd::Info DLCommonTransChInfoModeSpecificInfoFdd::theInfo = {
	DLCommonTransChInfoModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *IndividualDLCCTrCHInfoTfcsSignallingMode::choicesInfo[2] = {
	&TFCS::theInfo,
	&TFCSIdentity::theInfo,
};
const IndividualDLCCTrCHInfoTfcsSignallingMode::Info IndividualDLCCTrCHInfoTfcsSignallingMode::theInfo = {
	IndividualDLCCTrCHInfoTfcsSignallingMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *IndividualDLCCTrCHInfo::itemsInfo[2] = {
	&TFCSIdentity::theInfo,
	&IndividualDLCCTrCHInfoTfcsSignallingMode::theInfo,
};
bool IndividualDLCCTrCHInfo::itemsPres[2] = {
	1,
	1,
};
const IndividualDLCCTrCHInfo::Info IndividualDLCCTrCHInfo::theInfo = {
	IndividualDLCCTrCHInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *DLCommonTransChInfoModeSpecificInfoTdd::itemsInfo[1] = {
	&IndividualDLCCTrCHInfoList::theInfo,
};
bool DLCommonTransChInfoModeSpecificInfoTdd::itemsPres[1] = {
	0,
};
const DLCommonTransChInfoModeSpecificInfoTdd::Info DLCommonTransChInfoModeSpecificInfoTdd::theInfo = {
	DLCommonTransChInfoModeSpecificInfoTdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLCommonTransChInfoModeSpecificInfo::choicesInfo[2] = {
	&DLCommonTransChInfoModeSpecificInfoFdd::theInfo,
	&DLCommonTransChInfoModeSpecificInfoTdd::theInfo,
};
const DLCommonTransChInfoModeSpecificInfo::Info DLCommonTransChInfoModeSpecificInfo::theInfo = {
	DLCommonTransChInfoModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLCommonTransChInfo::itemsInfo[2] = {
	&TFCS::theInfo,
	&DLCommonTransChInfoModeSpecificInfo::theInfo,
};
bool DLCommonTransChInfo::itemsPres[2] = {
	0,
	1,
};
const DLCommonTransChInfo::Info DLCommonTransChInfo::theInfo = {
	DLCommonTransChInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *ULTransportChannelIdentity::itemsInfo[2] = {
	&ULTrCHType::theInfo,
	&TransportChannelIdentity::theInfo,
};
bool ULTransportChannelIdentity::itemsPres[2] = {
	1,
	1,
};
const ULTransportChannelIdentity::Info ULTransportChannelIdentity::theInfo = {
	ULTransportChannelIdentity::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *DLAddReconfTransChInformationTfsSignallingMode::choicesInfo[2] = {
	&TransportFormatSet::theInfo,
	&ULTransportChannelIdentity::theInfo,
};
const DLAddReconfTransChInformationTfsSignallingMode::Info DLAddReconfTransChInformationTfsSignallingMode::theInfo = {
	DLAddReconfTransChInformationTfsSignallingMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
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

const void *TMSignallingInfoTmSignallingModeMode2::itemsInfo[1] = {
	&ULControlledTrChList::theInfo,
};
bool TMSignallingInfoTmSignallingModeMode2::itemsPres[1] = {
	1,
};
const TMSignallingInfoTmSignallingModeMode2::Info TMSignallingInfoTmSignallingModeMode2::theInfo = {
	TMSignallingInfoTmSignallingModeMode2::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *TMSignallingInfoTmSignallingMode::choicesInfo[2] = {
	&TMSignallingInfoTmSignallingModeMode1::theInfo,
	&TMSignallingInfoTmSignallingModeMode2::theInfo,
};
const TMSignallingInfoTmSignallingMode::Info TMSignallingInfoTmSignallingMode::theInfo = {
	TMSignallingInfoTmSignallingMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *TMSignallingInfo::itemsInfo[2] = {
	&MessType::theInfo,
	&TMSignallingInfoTmSignallingMode::theInfo,
};
bool TMSignallingInfo::itemsPres[2] = {
	1,
	1,
};
const TMSignallingInfo::Info TMSignallingInfo::theInfo = {
	TMSignallingInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *DLAddReconfTransChInformation::itemsInfo[5] = {
	&DLTrCHType::theInfo,
	&TransportChannelIdentity::theInfo,
	&DLAddReconfTransChInformationTfsSignallingMode::theInfo,
	&QualityTarget::theInfo,
	&TMSignallingInfo::theInfo,
};
bool DLAddReconfTransChInformation::itemsPres[5] = {
	1,
	1,
	1,
	0,
	0,
};
const DLAddReconfTransChInformation::Info DLAddReconfTransChInformation::theInfo = {
	DLAddReconfTransChInformation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 2, 0
};

const void *PreDefTransChConfiguration::itemsInfo[4] = {
	&ULCommonTransChInfo::theInfo,
	&ULAddReconfTransChInfoList::theInfo,
	&DLCommonTransChInfo::theInfo,
	&DLAddReconfTransChInfoList::theInfo,
};
bool PreDefTransChConfiguration::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const PreDefTransChConfiguration::Info PreDefTransChConfiguration::theInfo = {
	PreDefTransChConfiguration::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 0, 0
};

const void *ULDPCHPowerControlInfoPredefFdd::itemsInfo[1] = {
	&PowerControlAlgorithm::theInfo,
};
bool ULDPCHPowerControlInfoPredefFdd::itemsPres[1] = {
	1,
};
const ULDPCHPowerControlInfoPredefFdd::Info ULDPCHPowerControlInfoPredefFdd::theInfo = {
	ULDPCHPowerControlInfoPredefFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ULDPCHPowerControlInfoPredefTdd::itemsInfo[1] = {
	&ConstantValueTdd::theInfo,
};
bool ULDPCHPowerControlInfoPredefTdd::itemsPres[1] = {
	1,
};
const ULDPCHPowerControlInfoPredefTdd::Info ULDPCHPowerControlInfoPredefTdd::theInfo = {
	ULDPCHPowerControlInfoPredefTdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ULDPCHPowerControlInfoPredef::choicesInfo[2] = {
	&ULDPCHPowerControlInfoPredefFdd::theInfo,
	&ULDPCHPowerControlInfoPredefTdd::theInfo,
};
const ULDPCHPowerControlInfoPredef::Info ULDPCHPowerControlInfoPredef::theInfo = {
	ULDPCHPowerControlInfoPredef::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULDPCHInfoPredefModeSpecificInfoFdd::itemsInfo[2] = {
	&ULDPCHInfoPredefModeSpecificInfoFddTfciExistence::theInfo,
	&PuncturingLimit::theInfo,
};
bool ULDPCHInfoPredefModeSpecificInfoFdd::itemsPres[2] = {
	1,
	1,
};
const ULDPCHInfoPredefModeSpecificInfoFdd::Info ULDPCHInfoPredefModeSpecificInfoFdd::theInfo = {
	ULDPCHInfoPredefModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *RepetitionPeriodAndLength::choicesInfo[7] = {
	&RepetitionPeriodAndLengthRepetitionPeriod1::theInfo,
	&RepetitionPeriodAndLengthRepetitionPeriod2::theInfo,
	&RepetitionPeriodAndLengthRepetitionPeriod4::theInfo,
	&RepetitionPeriodAndLengthRepetitionPeriod8::theInfo,
	&RepetitionPeriodAndLengthRepetitionPeriod16::theInfo,
	&RepetitionPeriodAndLengthRepetitionPeriod32::theInfo,
	&RepetitionPeriodAndLengthRepetitionPeriod64::theInfo,
};
const RepetitionPeriodAndLength::Info RepetitionPeriodAndLength::theInfo = {
	RepetitionPeriodAndLength::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	6
};

const void *CommonTimeslotInfo::itemsInfo[4] = {
	&SecondInterleavingMode::theInfo,
	&TFCICoding::theInfo,
	&PuncturingLimit::theInfo,
	&RepetitionPeriodAndLength::theInfo,
};
bool CommonTimeslotInfo::itemsPres[4] = {
	1,
	0,
	1,
	0,
};
const CommonTimeslotInfo::Info CommonTimeslotInfo::theInfo = {
	CommonTimeslotInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
};

const void *ULDPCHInfoPredefModeSpecificInfoTdd::itemsInfo[1] = {
	&CommonTimeslotInfo::theInfo,
};
bool ULDPCHInfoPredefModeSpecificInfoTdd::itemsPres[1] = {
	1,
};
const ULDPCHInfoPredefModeSpecificInfoTdd::Info ULDPCHInfoPredefModeSpecificInfoTdd::theInfo = {
	ULDPCHInfoPredefModeSpecificInfoTdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ULDPCHInfoPredefModeSpecificInfo::choicesInfo[2] = {
	&ULDPCHInfoPredefModeSpecificInfoFdd::theInfo,
	&ULDPCHInfoPredefModeSpecificInfoTdd::theInfo,
};
const ULDPCHInfoPredefModeSpecificInfo::Info ULDPCHInfoPredefModeSpecificInfo::theInfo = {
	ULDPCHInfoPredefModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULDPCHInfoPredef::itemsInfo[2] = {
	&ULDPCHPowerControlInfoPredef::theInfo,
	&ULDPCHInfoPredefModeSpecificInfo::theInfo,
};
bool ULDPCHInfoPredef::itemsPres[2] = {
	1,
	1,
};
const ULDPCHInfoPredef::Info ULDPCHInfoPredef::theInfo = {
	ULDPCHInfoPredef::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *SF512AndPilot::choicesInfo[8] = {
	&SF512AndPilotSfd4::theInfo,
	&SF512AndPilotSfd8::theInfo,
	&SF512AndPilotSfd16::theInfo,
	&SF512AndPilotSfd32::theInfo,
	&SF512AndPilotSfd64::theInfo,
	&PilotBits128::theInfo,
	&PilotBits256::theInfo,
	&SF512AndPilotSfd512::theInfo,
};
const SF512AndPilot::Info SF512AndPilot::theInfo = {
	SF512AndPilot::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	7
};

const void *DLDPCHInfoCommonPredefModeSpecificInfoFdd::itemsInfo[3] = {
	&SF512AndPilot::theInfo,
	&PositionFixedOrFlexible::theInfo,
	&DLDPCHInfoCommonPredefModeSpecificInfoFddTfciExistence::theInfo,
};
bool DLDPCHInfoCommonPredefModeSpecificInfoFdd::itemsPres[3] = {
	1,
	1,
	1,
};
const DLDPCHInfoCommonPredefModeSpecificInfoFdd::Info DLDPCHInfoCommonPredefModeSpecificInfoFdd::theInfo = {
	DLDPCHInfoCommonPredefModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *DLDPCHInfoCommonPredefModeSpecificInfoTdd::itemsInfo[1] = {
	&CommonTimeslotInfo::theInfo,
};
bool DLDPCHInfoCommonPredefModeSpecificInfoTdd::itemsPres[1] = {
	1,
};
const DLDPCHInfoCommonPredefModeSpecificInfoTdd::Info DLDPCHInfoCommonPredefModeSpecificInfoTdd::theInfo = {
	DLDPCHInfoCommonPredefModeSpecificInfoTdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DLDPCHInfoCommonPredefModeSpecificInfo::choicesInfo[2] = {
	&DLDPCHInfoCommonPredefModeSpecificInfoFdd::theInfo,
	&DLDPCHInfoCommonPredefModeSpecificInfoTdd::theInfo,
};
const DLDPCHInfoCommonPredefModeSpecificInfo::Info DLDPCHInfoCommonPredefModeSpecificInfo::theInfo = {
	DLDPCHInfoCommonPredefModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
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

const void *PreDefPhyChConfiguration::itemsInfo[2] = {
	&ULDPCHInfoPredef::theInfo,
	&DLCommonInformationPredef::theInfo,
};
bool PreDefPhyChConfiguration::itemsPres[2] = {
	1,
	0,
};
const PreDefPhyChConfiguration::Info PreDefPhyChConfiguration::theInfo = {
	PreDefPhyChConfiguration::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *PreDefRadioConfiguration::itemsInfo[3] = {
	&PredefinedRBConfiguration::theInfo,
	&PreDefTransChConfiguration::theInfo,
	&PreDefPhyChConfiguration::theInfo,
};
bool PreDefRadioConfiguration::itemsPres[3] = {
	1,
	1,
	1,
};
const PreDefRadioConfiguration::Info PreDefRadioConfiguration::theInfo = {
	PreDefRadioConfiguration::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
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

const void *ULDPCHInfoPredefv770extModeSpecificInfo::choicesInfo[2] = {
	&ULDPCHInfoPredefv770extModeSpecificInfoFdd::theInfo,
	&ULDPCHInfoPredefv770extModeSpecificInfoTdd::theInfo,
};
const ULDPCHInfoPredefv770extModeSpecificInfo::Info ULDPCHInfoPredefv770extModeSpecificInfo::theInfo = {
	ULDPCHInfoPredefv770extModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
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

const void *PredefinedConfigStatusInfoOther::choicesInfo[2] = {
	&PredefinedConfigStatusInfoOtherNotStored::theInfo,
	&PredefinedConfigValueTag::theInfo,
};
const PredefinedConfigStatusInfoOther::Info PredefinedConfigStatusInfoOther::theInfo = {
	PredefinedConfigStatusInfoOther::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *PredefinedConfigStatusInfo::choicesInfo[2] = {
	&PredefinedConfigStatusInfoStoredWithValueTagSameAsPrevius::theInfo,
	&PredefinedConfigStatusInfoOther::theInfo,
};
const PredefinedConfigStatusInfo::Info PredefinedConfigStatusInfo::theInfo = {
	PredefinedConfigStatusInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *PredefinedConfigSetWithDifferentValueTag::itemsInfo[2] = {
	&PredefinedConfigSetWithDifferentValueTagStartPosition::theInfo,
	&PredefinedConfigValueTagList::theInfo,
};
bool PredefinedConfigSetWithDifferentValueTag::itemsPres[2] = {
	0,
	1,
};
const PredefinedConfigSetWithDifferentValueTag::Info PredefinedConfigSetWithDifferentValueTag::theInfo = {
	PredefinedConfigSetWithDifferentValueTag::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *PredefinedConfigStatusListComp::itemsInfo[2] = {
	&PredefinedConfigSetsWithDifferentValueTag::theInfo,
	&PredefinedConfigStatusListVarSz::theInfo,
};
bool PredefinedConfigStatusListComp::itemsPres[2] = {
	1,
	0,
};
const PredefinedConfigStatusListComp::Info PredefinedConfigStatusListComp::theInfo = {
	PredefinedConfigStatusListComp::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *RABInfo::itemsInfo[4] = {
	&RABIdentity::theInfo,
	&CNDomainIdentity::theInfo,
	&NASSynchronisationIndicator::theInfo,
	&ReEstablishmentTimer::theInfo,
};
bool RABInfo::itemsPres[4] = {
	1,
	1,
	0,
	1,
};
const RABInfo::Info RABInfo::theInfo = {
	RABInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 1, 0
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

const void *RABInfor6::itemsInfo[5] = {
	&RABIdentity::theInfo,
	&MBMSSessionIdentity::theInfo,
	&CNDomainIdentity::theInfo,
	&NASSynchronisationIndicator::theInfo,
	&ReEstablishmentTimer::theInfo,
};
bool RABInfor6::itemsPres[5] = {
	1,
	0,
	1,
	0,
	1,
};
const RABInfor6::Info RABInfor6::theInfo = {
	RABInfor6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 2, 0
};

const void *RABInfor7::itemsInfo[6] = {
	&RABIdentity::theInfo,
	&MBMSSessionIdentity::theInfo,
	&RABInfor7MbmsServiceIdentity::theInfo,
	&CNDomainIdentity::theInfo,
	&NASSynchronisationIndicator::theInfo,
	&ReEstablishmentTimer::theInfo,
};
bool RABInfor7::itemsPres[6] = {
	1,
	0,
	0,
	1,
	0,
	1,
};
const RABInfor7::Info RABInfor7::theInfo = {
	RABInfor7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 3, 0
};

const void *RABInformationReconfig::itemsInfo[3] = {
	&RABIdentity::theInfo,
	&CNDomainIdentity::theInfo,
	&NASSynchronisationIndicator::theInfo,
};
bool RABInformationReconfig::itemsPres[3] = {
	1,
	1,
	1,
};
const RABInformationReconfig::Info RABInformationReconfig::theInfo = {
	RABInformationReconfig::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *RABInformationReconfigr8::itemsInfo[4] = {
	&RABIdentity::theInfo,
	&CNDomainIdentity::theInfo,
	&NASSynchronisationIndicator::theInfo,
	&CSHSPAInformation::theInfo,
};
bool RABInformationReconfigr8::itemsPres[4] = {
	1,
	1,
	1,
	0,
};
const RABInformationReconfigr8::Info RABInformationReconfigr8::theInfo = {
	RABInformationReconfigr8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 1, 0
};

const void *RABInfoPost::itemsInfo[3] = {
	&RABIdentity::theInfo,
	&CNDomainIdentity::theInfo,
	&NASSynchronisationIndicator::theInfo,
};
bool RABInfoPost::itemsPres[3] = {
	1,
	1,
	0,
};
const RABInfoPost::Info RABInfoPost::theInfo = {
	RABInfoPost::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};

const void *RABInformationMBMSPtp::itemsInfo[3] = {
	&RBIdentity::theInfo,
	&RABInformationMBMSPtpMbmsServiceIdentity::theInfo,
	&MBMSSessionIdentity::theInfo,
};
bool RABInformationMBMSPtp::itemsPres[3] = {
	1,
	1,
	0,
};
const RABInformationMBMSPtp::Info RABInformationMBMSPtp::theInfo = {
	RABInformationMBMSPtp::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};

const void *RABInformationSetup::itemsInfo[2] = {
	&RABInfo::theInfo,
	&RBInformationSetupList::theInfo,
};
bool RABInformationSetup::itemsPres[2] = {
	1,
	1,
};
const RABInformationSetup::Info RABInformationSetup::theInfo = {
	RABInformationSetup::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *RBInformationSetupr4::itemsInfo[4] = {
	&RBIdentity::theInfo,
	&PDCPInfor4::theInfo,
	&RLCInfoChoice::theInfo,
	&RBMappingInfo::theInfo,
};
bool RBInformationSetupr4::itemsPres[4] = {
	1,
	0,
	1,
	1,
};
const RBInformationSetupr4::Info RBInformationSetupr4::theInfo = {
	RBInformationSetupr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 1, 0
};

const void *RABInformationSetupr4::itemsInfo[2] = {
	&RABInfo::theInfo,
	&RBInformationSetupListr4::theInfo,
};
bool RABInformationSetupr4::itemsPres[2] = {
	1,
	1,
};
const RABInformationSetupr4::Info RABInformationSetupr4::theInfo = {
	RABInformationSetupr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *RLCInfor5::itemsInfo[3] = {
	&ULRLCMode::theInfo,
	&DLRLCModer5::theInfo,
	&RLCInfor5RlcOneSidedReEst::theInfo,
};
bool RLCInfor5::itemsPres[3] = {
	0,
	0,
	1,
};
const RLCInfor5::Info RLCInfor5::theInfo = {
	RLCInfor5::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *RLCInfoChoicer5::choicesInfo[2] = {
	&RLCInfor5::theInfo,
	&RBIdentity::theInfo,
};
const RLCInfoChoicer5::Info RLCInfoChoicer5::theInfo = {
	RLCInfoChoicer5::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *RBMappingOptionr5::itemsInfo[2] = {
	&ULLogicalChannelMappings::theInfo,
	&DLLogicalChannelMappingListr5::theInfo,
};
bool RBMappingOptionr5::itemsPres[2] = {
	0,
	0,
};
const RBMappingOptionr5::Info RBMappingOptionr5::theInfo = {
	RBMappingOptionr5::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *RBInformationSetupr5::itemsInfo[4] = {
	&RBIdentity::theInfo,
	&PDCPInfor4::theInfo,
	&RLCInfoChoicer5::theInfo,
	&RBMappingInfor5::theInfo,
};
bool RBInformationSetupr5::itemsPres[4] = {
	1,
	0,
	1,
	1,
};
const RBInformationSetupr5::Info RBInformationSetupr5::theInfo = {
	RBInformationSetupr5::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 1, 0
};

const void *RABInformationSetupr5::itemsInfo[2] = {
	&RABInfo::theInfo,
	&RBInformationSetupListr5::theInfo,
};
bool RABInformationSetupr5::itemsPres[2] = {
	1,
	1,
};
const RABInformationSetupr5::Info RABInformationSetupr5::theInfo = {
	RABInformationSetupr5::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
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

const void *RLCInfor6::itemsInfo[4] = {
	&ULRLCMode::theInfo,
	&DLRLCModer6::theInfo,
	&RLCInfor6RlcOneSidedReEst::theInfo,
	&RLCInfor6altE_bitInterpretation::theInfo,
};
bool RLCInfor6::itemsPres[4] = {
	0,
	0,
	1,
	0,
};
const RLCInfor6::Info RLCInfor6::theInfo = {
	RLCInfor6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 3, 0
};

const void *RLCInfoChoicer6::choicesInfo[2] = {
	&RLCInfor6::theInfo,
	&RBIdentity::theInfo,
};
const RLCInfoChoicer6::Info RLCInfoChoicer6::theInfo = {
	RLCInfoChoicer6::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULLogicalChannelMappingr6UlTrCHTypeDchrachuschRlcSizeList::choicesInfo[3] = {
	&ULLogicalChannelMappingr6UlTrCHTypeDchrachuschRlcSizeListAllSizes::theInfo,
	&ULLogicalChannelMappingr6UlTrCHTypeDchrachuschRlcSizeListConfigured::theInfo,
	&RLCSizeExplicitList::theInfo,
};
const ULLogicalChannelMappingr6UlTrCHTypeDchrachuschRlcSizeList::Info ULLogicalChannelMappingr6UlTrCHTypeDchrachuschRlcSizeList::theInfo = {
	ULLogicalChannelMappingr6UlTrCHTypeDchrachuschRlcSizeList::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *ULLogicalChannelMappingr6UlTrCHTypeDchrachusch::itemsInfo[3] = {
	&ULTransportChannelType::theInfo,
	&LogicalChannelIdentity::theInfo,
	&ULLogicalChannelMappingr6UlTrCHTypeDchrachuschRlcSizeList::theInfo,
};
bool ULLogicalChannelMappingr6UlTrCHTypeDchrachusch::itemsPres[3] = {
	1,
	0,
	1,
};
const ULLogicalChannelMappingr6UlTrCHTypeDchrachusch::Info ULLogicalChannelMappingr6UlTrCHTypeDchrachusch::theInfo = {
	ULLogicalChannelMappingr6UlTrCHTypeDchrachusch::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};

const void *ULLogicalChannelMappingr6UlTrCHTypeEdch::itemsInfo[5] = {
	&LogicalChannelIdentity::theInfo,
	&EDCHMACdFlowIdentity::theInfo,
	&DDI::theInfo,
	&RLCPDUSizeList::theInfo,
	&ULLogicalChannelMappingr6UlTrCHTypeEdchIncludeInSchedulingInfo::theInfo,
};
bool ULLogicalChannelMappingr6UlTrCHTypeEdch::itemsPres[5] = {
	1,
	1,
	1,
	1,
	1,
};
const ULLogicalChannelMappingr6UlTrCHTypeEdch::Info ULLogicalChannelMappingr6UlTrCHTypeEdch::theInfo = {
	ULLogicalChannelMappingr6UlTrCHTypeEdch::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 0, 0
};

const void *ULLogicalChannelMappingr6UlTrCHType::choicesInfo[2] = {
	&ULLogicalChannelMappingr6UlTrCHTypeDchrachusch::theInfo,
	&ULLogicalChannelMappingr6UlTrCHTypeEdch::theInfo,
};
const ULLogicalChannelMappingr6UlTrCHType::Info ULLogicalChannelMappingr6UlTrCHType::theInfo = {
	ULLogicalChannelMappingr6UlTrCHType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULLogicalChannelMappingr6::itemsInfo[2] = {
	&ULLogicalChannelMappingr6UlTrCHType::theInfo,
	&MACLogicalChannelPriority::theInfo,
};
bool ULLogicalChannelMappingr6::itemsPres[2] = {
	1,
	1,
};
const ULLogicalChannelMappingr6::Info ULLogicalChannelMappingr6::theInfo = {
	ULLogicalChannelMappingr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *ULLogicalChannelMappingListr6::itemsInfo[2] = {
	&ULLogicalChannelMappingListr6RlcLogicalChannelMappingIndicator::theInfo,
	&ULLogicalChannelMappingListr6UlLogicalChannelMapping::theInfo,
};
bool ULLogicalChannelMappingListr6::itemsPres[2] = {
	1,
	1,
};
const ULLogicalChannelMappingListr6::Info ULLogicalChannelMappingListr6::theInfo = {
	ULLogicalChannelMappingListr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *ULLogicalChannelMappingsr6::choicesInfo[2] = {
	&ULLogicalChannelMappingr6::theInfo,
	&ULLogicalChannelMappingListr6::theInfo,
};
const ULLogicalChannelMappingsr6::Info ULLogicalChannelMappingsr6::theInfo = {
	ULLogicalChannelMappingsr6::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *RBMappingOptionr6::itemsInfo[2] = {
	&ULLogicalChannelMappingsr6::theInfo,
	&DLLogicalChannelMappingListr5::theInfo,
};
bool RBMappingOptionr6::itemsPres[2] = {
	0,
	0,
};
const RBMappingOptionr6::Info RBMappingOptionr6::theInfo = {
	RBMappingOptionr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *RBInformationSetupr6::itemsInfo[4] = {
	&RBIdentity::theInfo,
	&PDCPInfor4::theInfo,
	&RLCInfoChoicer6::theInfo,
	&RBMappingInfor6::theInfo,
};
bool RBInformationSetupr6::itemsPres[4] = {
	1,
	0,
	1,
	1,
};
const RBInformationSetupr6::Info RBInformationSetupr6::theInfo = {
	RBInformationSetupr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 1, 0
};

const void *RABInformationSetupr6::itemsInfo[2] = {
	&RABInfor6::theInfo,
	&RBInformationSetupListr6::theInfo,
};
bool RABInformationSetupr6::itemsPres[2] = {
	1,
	1,
};
const RABInformationSetupr6::Info RABInformationSetupr6::theInfo = {
	RABInformationSetupr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
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

const void *RLCInfor7::itemsInfo[5] = {
	&ULRLCMode::theInfo,
	&DLRLCModer7::theInfo,
	&RLCInfor7RlcOneSidedReEst::theInfo,
	&RLCInfor7altE_bitInterpretation::theInfo,
	&RLCInfor7useSpecialValueOfHEField::theInfo,
};
bool RLCInfor7::itemsPres[5] = {
	0,
	0,
	1,
	0,
	0,
};
const RLCInfor7::Info RLCInfor7::theInfo = {
	RLCInfor7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 4, 0
};

const void *RLCInfoChoicer7::choicesInfo[2] = {
	&RLCInfor7::theInfo,
	&RBIdentity::theInfo,
};
const RLCInfoChoicer7::Info RLCInfoChoicer7::theInfo = {
	RLCInfoChoicer7::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *RBMappingOptionr7::itemsInfo[2] = {
	&ULLogicalChannelMappingsr6::theInfo,
	&DLLogicalChannelMappingListr7::theInfo,
};
bool RBMappingOptionr7::itemsPres[2] = {
	0,
	0,
};
const RBMappingOptionr7::Info RBMappingOptionr7::theInfo = {
	RBMappingOptionr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *RBInformationSetupr7::itemsInfo[4] = {
	&RBIdentity::theInfo,
	&PDCPInfor4::theInfo,
	&RLCInfoChoicer7::theInfo,
	&RBMappingInfor7::theInfo,
};
bool RBInformationSetupr7::itemsPres[4] = {
	1,
	0,
	1,
	1,
};
const RBInformationSetupr7::Info RBInformationSetupr7::theInfo = {
	RBInformationSetupr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 1, 0
};

const void *RABInformationSetupr7::itemsInfo[2] = {
	&RABInfor7::theInfo,
	&RBInformationSetupListr7::theInfo,
};
bool RABInformationSetupr7::itemsPres[2] = {
	1,
	1,
};
const RABInformationSetupr7::Info RABInformationSetupr7::theInfo = {
	RABInformationSetupr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *ULLogicalChannelMappingr8UlTrCHTypeDchrachuschRlcSizeList::choicesInfo[3] = {
	&ULLogicalChannelMappingr8UlTrCHTypeDchrachuschRlcSizeListAllSizes::theInfo,
	&ULLogicalChannelMappingr8UlTrCHTypeDchrachuschRlcSizeListConfigured::theInfo,
	&RLCSizeExplicitList::theInfo,
};
const ULLogicalChannelMappingr8UlTrCHTypeDchrachuschRlcSizeList::Info ULLogicalChannelMappingr8UlTrCHTypeDchrachuschRlcSizeList::theInfo = {
	ULLogicalChannelMappingr8UlTrCHTypeDchrachuschRlcSizeList::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *ULLogicalChannelMappingr8UlTrCHTypeDchrachusch::itemsInfo[3] = {
	&ULTransportChannelType::theInfo,
	&LogicalChannelIdentity::theInfo,
	&ULLogicalChannelMappingr8UlTrCHTypeDchrachuschRlcSizeList::theInfo,
};
bool ULLogicalChannelMappingr8UlTrCHTypeDchrachusch::itemsPres[3] = {
	1,
	0,
	1,
};
const ULLogicalChannelMappingr8UlTrCHTypeDchrachusch::Info ULLogicalChannelMappingr8UlTrCHTypeDchrachusch::theInfo = {
	ULLogicalChannelMappingr8UlTrCHTypeDchrachusch::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};

const void *ULLogicalChannelMappingr8UlTrCHTypeEdchRlcPDUSizeFixedSize::itemsInfo[2] = {
	&DDI::theInfo,
	&RLCPDUSizeList::theInfo,
};
bool ULLogicalChannelMappingr8UlTrCHTypeEdchRlcPDUSizeFixedSize::itemsPres[2] = {
	1,
	1,
};
const ULLogicalChannelMappingr8UlTrCHTypeEdchRlcPDUSizeFixedSize::Info ULLogicalChannelMappingr8UlTrCHTypeEdchRlcPDUSizeFixedSize::theInfo = {
	ULLogicalChannelMappingr8UlTrCHTypeEdchRlcPDUSizeFixedSize::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *RLCPDUSizeConstraint::itemsInfo[3] = {
	&RLCPDUSizeConstraintlengthIndicatorSize::theInfo,
	&RLCPDUSizeConstraintMinRLCPDUSize::theInfo,
	&RLCPDUSizeConstraintLargestRLCPDUSize::theInfo,
};
bool RLCPDUSizeConstraint::itemsPres[3] = {
	0,
	1,
	1,
};
const RLCPDUSizeConstraint::Info RLCPDUSizeConstraint::theInfo = {
	RLCPDUSizeConstraint::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};

const void *ULLogicalChannelMappingr8UlTrCHTypeEdchRlcPDUSize::choicesInfo[2] = {
	&ULLogicalChannelMappingr8UlTrCHTypeEdchRlcPDUSizeFixedSize::theInfo,
	&RLCPDUSizeConstraint::theInfo,
};
const ULLogicalChannelMappingr8UlTrCHTypeEdchRlcPDUSize::Info ULLogicalChannelMappingr8UlTrCHTypeEdchRlcPDUSize::theInfo = {
	ULLogicalChannelMappingr8UlTrCHTypeEdchRlcPDUSize::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULLogicalChannelMappingr8UlTrCHTypeEdch::itemsInfo[4] = {
	&LogicalChannelIdentity::theInfo,
	&EDCHMACdFlowIdentity::theInfo,
	&ULLogicalChannelMappingr8UlTrCHTypeEdchRlcPDUSize::theInfo,
	&ULLogicalChannelMappingr8UlTrCHTypeEdchIncludeInSchedulingInfo::theInfo,
};
bool ULLogicalChannelMappingr8UlTrCHTypeEdch::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const ULLogicalChannelMappingr8UlTrCHTypeEdch::Info ULLogicalChannelMappingr8UlTrCHTypeEdch::theInfo = {
	ULLogicalChannelMappingr8UlTrCHTypeEdch::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 0, 0
};

const void *ULLogicalChannelMappingr8UlTrCHType::choicesInfo[2] = {
	&ULLogicalChannelMappingr8UlTrCHTypeDchrachusch::theInfo,
	&ULLogicalChannelMappingr8UlTrCHTypeEdch::theInfo,
};
const ULLogicalChannelMappingr8UlTrCHType::Info ULLogicalChannelMappingr8UlTrCHType::theInfo = {
	ULLogicalChannelMappingr8UlTrCHType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULLogicalChannelMappingr8::itemsInfo[2] = {
	&ULLogicalChannelMappingr8UlTrCHType::theInfo,
	&MACLogicalChannelPriority::theInfo,
};
bool ULLogicalChannelMappingr8::itemsPres[2] = {
	1,
	1,
};
const ULLogicalChannelMappingr8::Info ULLogicalChannelMappingr8::theInfo = {
	ULLogicalChannelMappingr8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *ULLogicalChannelMappingListr8::itemsInfo[2] = {
	&ULLogicalChannelMappingListr8RlcLogicalChannelMappingIndicator::theInfo,
	&ULLogicalChannelMappingListr8UlLogicalChannelMapping::theInfo,
};
bool ULLogicalChannelMappingListr8::itemsPres[2] = {
	1,
	1,
};
const ULLogicalChannelMappingListr8::Info ULLogicalChannelMappingListr8::theInfo = {
	ULLogicalChannelMappingListr8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *ULLogicalChannelMappingsr8::choicesInfo[2] = {
	&ULLogicalChannelMappingr8::theInfo,
	&ULLogicalChannelMappingListr8::theInfo,
};
const ULLogicalChannelMappingsr8::Info ULLogicalChannelMappingsr8::theInfo = {
	ULLogicalChannelMappingsr8::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *RBMappingOptionr8::itemsInfo[2] = {
	&ULLogicalChannelMappingsr8::theInfo,
	&DLLogicalChannelMappingListr7::theInfo,
};
bool RBMappingOptionr8::itemsPres[2] = {
	0,
	0,
};
const RBMappingOptionr8::Info RBMappingOptionr8::theInfo = {
	RBMappingOptionr8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *RBInformationSetupr8::itemsInfo[4] = {
	&RBIdentity::theInfo,
	&PDCPInfor4::theInfo,
	&RLCInfoChoicer7::theInfo,
	&RBMappingInfor8::theInfo,
};
bool RBInformationSetupr8::itemsPres[4] = {
	1,
	0,
	1,
	1,
};
const RBInformationSetupr8::Info RBInformationSetupr8::theInfo = {
	RBInformationSetupr8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 1, 0
};

const void *RABInformationSetupr8::itemsInfo[4] = {
	&RABInfor7::theInfo,
	&CSHSPAInformation::theInfo,
	&RABInfoReplace::theInfo,
	&RBInformationSetupListr8::theInfo,
};
bool RABInformationSetupr8::itemsPres[4] = {
	1,
	0,
	0,
	1,
};
const RABInformationSetupr8::Info RABInformationSetupr8::theInfo = {
	RABInformationSetupr8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
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

const void *RBCOUNTCInformation::itemsInfo[3] = {
	&RBIdentity::theInfo,
	&COUNTC::theInfo,
	&COUNTC::theInfo,
};
bool RBCOUNTCInformation::itemsPres[3] = {
	1,
	1,
	1,
};
const RBCOUNTCInformation::Info RBCOUNTCInformation::theInfo = {
	RBCOUNTCInformation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *RBCOUNTCMSBInformation::itemsInfo[3] = {
	&RBIdentity::theInfo,
	&COUNTCMSB::theInfo,
	&COUNTCMSB::theInfo,
};
bool RBCOUNTCMSBInformation::itemsPres[3] = {
	1,
	1,
	1,
};
const RBCOUNTCMSBInformation::Info RBCOUNTCMSBInformation::theInfo = {
	RBCOUNTCMSBInformation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *RBInformationAffected::itemsInfo[2] = {
	&RBIdentity::theInfo,
	&RBMappingInfo::theInfo,
};
bool RBInformationAffected::itemsPres[2] = {
	1,
	1,
};
const RBInformationAffected::Info RBInformationAffected::theInfo = {
	RBInformationAffected::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *RBInformationAffectedr5::itemsInfo[2] = {
	&RBIdentity::theInfo,
	&RBMappingInfor5::theInfo,
};
bool RBInformationAffectedr5::itemsPres[2] = {
	1,
	1,
};
const RBInformationAffectedr5::Info RBInformationAffectedr5::theInfo = {
	RBInformationAffectedr5::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *RBInformationAffectedr6::itemsInfo[2] = {
	&RBIdentity::theInfo,
	&RBMappingInfor6::theInfo,
};
bool RBInformationAffectedr6::itemsPres[2] = {
	1,
	1,
};
const RBInformationAffectedr6::Info RBInformationAffectedr6::theInfo = {
	RBInformationAffectedr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *RBInformationAffectedr7::itemsInfo[2] = {
	&RBIdentity::theInfo,
	&RBMappingInfor7::theInfo,
};
bool RBInformationAffectedr7::itemsPres[2] = {
	1,
	1,
};
const RBInformationAffectedr7::Info RBInformationAffectedr7::theInfo = {
	RBInformationAffectedr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *RBInformationAffectedr8::itemsInfo[2] = {
	&RBIdentity::theInfo,
	&RBMappingInfor8::theInfo,
};
bool RBInformationAffectedr8::itemsPres[2] = {
	1,
	1,
};
const RBInformationAffectedr8::Info RBInformationAffectedr8::theInfo = {
	RBInformationAffectedr8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *RBInformationChangedr6RbChange::choicesInfo[2] = {
	&RBInformationChangedr6RbChangeRelease::theInfo,
	&RBIdentity::theInfo,
};
const RBInformationChangedr6RbChange::Info RBInformationChangedr6RbChange::theInfo = {
	RBInformationChangedr6RbChange::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *RBInformationChangedr6::itemsInfo[2] = {
	&RBIdentity::theInfo,
	&RBInformationChangedr6RbChange::theInfo,
};
bool RBInformationChangedr6::itemsPres[2] = {
	1,
	1,
};
const RBInformationChangedr6::Info RBInformationChangedr6::theInfo = {
	RBInformationChangedr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *RBInformationReconfig::itemsInfo[6] = {
	&RBIdentity::theInfo,
	&PDCPInfoReconfig::theInfo,
	&PDCPSNInfo::theInfo,
	&RLCInfo::theInfo,
	&RBMappingInfo::theInfo,
	&RBStopContinue::theInfo,
};
bool RBInformationReconfig::itemsPres[6] = {
	1,
	0,
	0,
	0,
	0,
	0,
};
const RBInformationReconfig::Info RBInformationReconfig::theInfo = {
	RBInformationReconfig::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 5, 0
};

const void *RBInformationReconfigr4::itemsInfo[6] = {
	&RBIdentity::theInfo,
	&PDCPInfoReconfigr4::theInfo,
	&PDCPSNInfo::theInfo,
	&RLCInfo::theInfo,
	&RBMappingInfo::theInfo,
	&RBStopContinue::theInfo,
};
bool RBInformationReconfigr4::itemsPres[6] = {
	1,
	0,
	0,
	0,
	0,
	0,
};
const RBInformationReconfigr4::Info RBInformationReconfigr4::theInfo = {
	RBInformationReconfigr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 5, 0
};

const void *RBInformationReconfigr5::itemsInfo[6] = {
	&RBIdentity::theInfo,
	&PDCPInfoReconfigr4::theInfo,
	&PDCPSNInfo::theInfo,
	&RLCInfor5::theInfo,
	&RBMappingInfor5::theInfo,
	&RBStopContinue::theInfo,
};
bool RBInformationReconfigr5::itemsPres[6] = {
	1,
	0,
	0,
	0,
	0,
	0,
};
const RBInformationReconfigr5::Info RBInformationReconfigr5::theInfo = {
	RBInformationReconfigr5::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 5, 0
};

const void *RBInformationReconfigr6::itemsInfo[6] = {
	&RBIdentity::theInfo,
	&PDCPInfoReconfigr4::theInfo,
	&PDCPSNInfo::theInfo,
	&RLCInfor6::theInfo,
	&RBMappingInfor6::theInfo,
	&RBStopContinue::theInfo,
};
bool RBInformationReconfigr6::itemsPres[6] = {
	1,
	0,
	0,
	0,
	0,
	0,
};
const RBInformationReconfigr6::Info RBInformationReconfigr6::theInfo = {
	RBInformationReconfigr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 5, 0
};

const void *RBInformationReconfigr7::itemsInfo[6] = {
	&RBIdentity::theInfo,
	&PDCPInfoReconfigr4::theInfo,
	&PDCPSNInfo::theInfo,
	&RLCInfor7::theInfo,
	&RBMappingInfor7::theInfo,
	&RBStopContinue::theInfo,
};
bool RBInformationReconfigr7::itemsPres[6] = {
	1,
	0,
	0,
	0,
	0,
	0,
};
const RBInformationReconfigr7::Info RBInformationReconfigr7::theInfo = {
	RBInformationReconfigr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 5, 0
};

const void *RBInformationReconfigr8::itemsInfo[6] = {
	&RBIdentity::theInfo,
	&PDCPInfoReconfigr4::theInfo,
	&PDCPSNInfo::theInfo,
	&RLCInfor7::theInfo,
	&RBMappingInfor8::theInfo,
	&RBStopContinue::theInfo,
};
bool RBInformationReconfigr8::itemsPres[6] = {
	1,
	0,
	0,
	0,
	0,
	0,
};
const RBInformationReconfigr8::Info RBInformationReconfigr8::theInfo = {
	RBInformationReconfigr8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 5, 0
};

const void *UMRLCOutOSeqDeliveryInfor6::itemsInfo[2] = {
	&TimerOSDr6::theInfo,
	&WindowSizeOSDr6::theInfo,
};
bool UMRLCOutOSeqDeliveryInfor6::itemsPres[2] = {
	0,
	1,
};
const UMRLCOutOSeqDeliveryInfor6::Info UMRLCOutOSeqDeliveryInfor6::theInfo = {
	UMRLCOutOSeqDeliveryInfor6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *RLCInfoMCCHr6::itemsInfo[2] = {
	&DLUMRLCLIsize::theInfo,
	&UMRLCOutOSeqDeliveryInfor6::theInfo,
};
bool RLCInfoMCCHr6::itemsPres[2] = {
	1,
	0,
};
const RLCInfoMCCHr6::Info RLCInfoMCCHr6::theInfo = {
	RLCInfoMCCHr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
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

const void *UMRLCDuplAvoidReordInfor6::itemsInfo[2] = {
	&TimerDARr6::theInfo,
	&WindowSizeDARr6::theInfo,
};
bool UMRLCDuplAvoidReordInfor6::itemsPres[2] = {
	1,
	1,
};
const UMRLCDuplAvoidReordInfor6::Info UMRLCDuplAvoidReordInfor6::theInfo = {
	UMRLCDuplAvoidReordInfor6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *RLCInfoMTCHr6::itemsInfo[2] = {
	&DLUMRLCLIsize::theInfo,
	&UMRLCDuplAvoidReordInfor6::theInfo,
};
bool RLCInfoMTCHr6::itemsPres[2] = {
	1,
	0,
};
const RLCInfoMTCHr6::Info RLCInfoMTCHr6::theInfo = {
	RLCInfoMTCHr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *SRBInformationSetupr5::itemsInfo[3] = {
	&RBIdentity::theInfo,
	&RLCInfoChoicer5::theInfo,
	&RBMappingInfor5::theInfo,
};
bool SRBInformationSetupr5::itemsPres[3] = {
	0,
	1,
	1,
};
const SRBInformationSetupr5::Info SRBInformationSetupr5::theInfo = {
	SRBInformationSetupr5::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};

const void *SRBInformationSetupr6::itemsInfo[3] = {
	&RBIdentity::theInfo,
	&RLCInfoChoicer6::theInfo,
	&RBMappingInfor6::theInfo,
};
bool SRBInformationSetupr6::itemsPres[3] = {
	0,
	1,
	1,
};
const SRBInformationSetupr6::Info SRBInformationSetupr6::theInfo = {
	SRBInformationSetupr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};

const void *SRBInformationSetupr7::itemsInfo[3] = {
	&RBIdentity::theInfo,
	&RLCInfoChoicer7::theInfo,
	&RBMappingInfor7::theInfo,
};
bool SRBInformationSetupr7::itemsPres[3] = {
	0,
	1,
	1,
};
const SRBInformationSetupr7::Info SRBInformationSetupr7::theInfo = {
	SRBInformationSetupr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};

const void *SRBInformationSetupr8::itemsInfo[3] = {
	&RBIdentity::theInfo,
	&RLCInfoChoicer7::theInfo,
	&RBMappingInfor8::theInfo,
};
bool SRBInformationSetupr8::itemsPres[3] = {
	0,
	1,
	1,
};
const SRBInformationSetupr8::Info SRBInformationSetupr8::theInfo = {
	SRBInformationSetupr8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};

const void *ULCounterSynchronisationInfo::itemsInfo[2] = {
	&RBWithPDCPInfoList::theInfo,
	&STARTList::theInfo,
};
bool ULCounterSynchronisationInfo::itemsPres[2] = {
	0,
	1,
};
const ULCounterSynchronisationInfo::Info ULCounterSynchronisationInfo::theInfo = {
	ULCounterSynchronisationInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *MACdPDUsizeInfo::itemsInfo[2] = {
	&MACdPDUsizeInfoMacdPDUSize::theInfo,
	&MACdPDUsizeInfoMacdPDUIndex::theInfo,
};
bool MACdPDUsizeInfo::itemsPres[2] = {
	1,
	1,
};
const MACdPDUsizeInfo::Info MACdPDUsizeInfo::theInfo = {
	MACdPDUsizeInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *MAChsAddReconfQueue::itemsInfo[5] = {
	&MAChsAddReconfQueueMachsQueueId::theInfo,
	&MACdFlowIdentity::theInfo,
	&T1ReleaseTimer::theInfo,
	&MAChsWindowSize::theInfo,
	&MACdPDUSizeInfoList::theInfo,
};
bool MAChsAddReconfQueue::itemsPres[5] = {
	1,
	1,
	1,
	1,
	0,
};
const MAChsAddReconfQueue::Info MAChsAddReconfQueue::theInfo = {
	MAChsAddReconfQueue::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 1, 0
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

const void *AddOrReconfMACdFlow::itemsInfo[2] = {
	&MAChsAddReconfQueueList::theInfo,
	&MAChsDelQueueList::theInfo,
};
bool AddOrReconfMACdFlow::itemsPres[2] = {
	0,
	0,
};
const AddOrReconfMACdFlow::Info AddOrReconfMACdFlow::theInfo = {
	AddOrReconfMACdFlow::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *MACehsAddReconfReordQ::itemsInfo[4] = {
	&MACehsQueueId::theInfo,
	&T1ReleaseTimer::theInfo,
	&TresetResetTimer::theInfo,
	&MAChsWindowSize::theInfo,
};
bool MACehsAddReconfReordQ::itemsPres[4] = {
	1,
	1,
	0,
	1,
};
const MACehsAddReconfReordQ::Info MACehsAddReconfReordQ::theInfo = {
	MACehsAddReconfReordQ::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 1, 0
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

const void *AddOrReconfMACehsReordQ::itemsInfo[2] = {
	&MACehsAddReconfReordQList::theInfo,
	&MACehsDelReordQList::theInfo,
};
bool AddOrReconfMACehsReordQ::itemsPres[2] = {
	0,
	0,
};
const AddOrReconfMACehsReordQ::Info AddOrReconfMACehsReordQ::theInfo = {
	AddOrReconfMACehsReordQ::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *MACehsAddReconfReordQr9::itemsInfo[4] = {
	&MACehsQueueId::theInfo,
	&T1ReleaseTimer::theInfo,
	&TresetResetTimer::theInfo,
	&MAChsWindowSizer9::theInfo,
};
bool MACehsAddReconfReordQr9::itemsPres[4] = {
	1,
	1,
	0,
	1,
};
const MACehsAddReconfReordQr9::Info MACehsAddReconfReordQr9::theInfo = {
	MACehsAddReconfReordQr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 1, 0
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

const void *CommonEDCHMACdFlow::itemsInfo[5] = {
	&EDCHMACdFlowIdentity::theInfo,
	&EDCHMACdFlowPowerOffset::theInfo,
	&EDCHMACdFlowMaxRetrans::theInfo,
	&EDCHMACdFlowMultiplexingList::theInfo,
	&EDCHMACdFlowRetransTimer::theInfo,
};
bool CommonEDCHMACdFlow::itemsPres[5] = {
	1,
	1,
	1,
	0,
	0,
};
const CommonEDCHMACdFlow::Info CommonEDCHMACdFlow::theInfo = {
	CommonEDCHMACdFlow::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 2, 0
};

const void *CommonTransChTFSLCRTti::choicesInfo[6] = {
	&CommonDynamicTFInfoList::theInfo,
	&CommonDynamicTFInfoList::theInfo,
	&CommonDynamicTFInfoList::theInfo,
	&CommonDynamicTFInfoList::theInfo,
	&CommonDynamicTFInfoList::theInfo,
	&CommonDynamicTFInfoListDynamicTTI::theInfo,
};
const CommonTransChTFSLCRTti::Info CommonTransChTFSLCRTti::theInfo = {
	CommonTransChTFSLCRTti::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	5
};

const void *CommonTransChTFSLCR::itemsInfo[2] = {
	&CommonTransChTFSLCRTti::theInfo,
	&SemistaticTFInformation::theInfo,
};
bool CommonTransChTFSLCR::itemsPres[2] = {
	1,
	1,
};
const CommonTransChTFSLCR::Info CommonTransChTFSLCR::theInfo = {
	CommonTransChTFSLCR::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *CommonMACehsReorderingQueue::itemsInfo[4] = {
	&MACehsQueueId::theInfo,
	&T1ReleaseTimer::theInfo,
	&TresetResetTimer::theInfo,
	&MAChsWindowSize::theInfo,
};
bool CommonMACehsReorderingQueue::itemsPres[4] = {
	1,
	1,
	0,
	1,
};
const CommonMACehsReorderingQueue::Info CommonMACehsReorderingQueue::theInfo = {
	CommonMACehsReorderingQueue::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 1, 0
};

const void *DLAddReconfTransChInformation2TfsSignallingMode::choicesInfo[2] = {
	&TransportFormatSet::theInfo,
	&ULTransportChannelIdentity::theInfo,
};
const DLAddReconfTransChInformation2TfsSignallingMode::Info DLAddReconfTransChInformation2TfsSignallingMode::theInfo = {
	DLAddReconfTransChInformation2TfsSignallingMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLAddReconfTransChInformation2::itemsInfo[4] = {
	&DLTrCHType::theInfo,
	&TransportChannelIdentity::theInfo,
	&DLAddReconfTransChInformation2TfsSignallingMode::theInfo,
	&QualityTarget::theInfo,
};
bool DLAddReconfTransChInformation2::itemsPres[4] = {
	1,
	1,
	1,
	0,
};
const DLAddReconfTransChInformation2::Info DLAddReconfTransChInformation2::theInfo = {
	DLAddReconfTransChInformation2::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 1, 0
};

const void *DLAddReconfTransChInformationr4TfsSignallingMode::choicesInfo[2] = {
	&TransportFormatSet::theInfo,
	&ULTransportChannelIdentity::theInfo,
};
const DLAddReconfTransChInformationr4TfsSignallingMode::Info DLAddReconfTransChInformationr4TfsSignallingMode::theInfo = {
	DLAddReconfTransChInformationr4TfsSignallingMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLAddReconfTransChInformationr4::itemsInfo[4] = {
	&DLTrCHType::theInfo,
	&TransportChannelIdentity::theInfo,
	&DLAddReconfTransChInformationr4TfsSignallingMode::theInfo,
	&QualityTarget::theInfo,
};
bool DLAddReconfTransChInformationr4::itemsPres[4] = {
	1,
	1,
	1,
	0,
};
const DLAddReconfTransChInformationr4::Info DLAddReconfTransChInformationr4::theInfo = {
	DLAddReconfTransChInformationr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 1, 0
};

const void *DLTrCHTypeId1r5::choicesInfo[3] = {
	&TransportChannelIdentity::theInfo,
	&TransportChannelIdentity::theInfo,
	&DLTrCHTypeId1r5Hsdsch::theInfo,
};
const DLTrCHTypeId1r5::Info DLTrCHTypeId1r5::theInfo = {
	DLTrCHTypeId1r5::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *HSDSCHInfo::itemsInfo[2] = {
	&HARQInfo::theInfo,
	&AddOrReconfMACdFlow::theInfo,
};
bool HSDSCHInfo::itemsPres[2] = {
	0,
	0,
};
const HSDSCHInfo::Info HSDSCHInfo::theInfo = {
	HSDSCHInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *DLAddReconfTransChInformationr5TfsSignallingMode::choicesInfo[3] = {
	&TransportFormatSet::theInfo,
	&ULTransportChannelIdentity::theInfo,
	&HSDSCHInfo::theInfo,
};
const DLAddReconfTransChInformationr5TfsSignallingMode::Info DLAddReconfTransChInformationr5TfsSignallingMode::theInfo = {
	DLAddReconfTransChInformationr5TfsSignallingMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *DLAddReconfTransChInformationr5::itemsInfo[3] = {
	&DLTrCHTypeId1r5::theInfo,
	&DLAddReconfTransChInformationr5TfsSignallingMode::theInfo,
	&QualityTarget::theInfo,
};
bool DLAddReconfTransChInformationr5::itemsPres[3] = {
	1,
	1,
	0,
};
const DLAddReconfTransChInformationr5::Info DLAddReconfTransChInformationr5::theInfo = {
	DLAddReconfTransChInformationr5::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};

const void *HSDSCHInfor7DlMACHeaderType::choicesInfo[2] = {
	&AddOrReconfMACdFlow::theInfo,
	&AddOrReconfMACehsReordQ::theInfo,
};
const HSDSCHInfor7DlMACHeaderType::Info HSDSCHInfor7DlMACHeaderType::theInfo = {
	HSDSCHInfor7DlMACHeaderType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *HSDSCHInfor7::itemsInfo[2] = {
	&HARQInfor7::theInfo,
	&HSDSCHInfor7DlMACHeaderType::theInfo,
};
bool HSDSCHInfor7::itemsPres[2] = {
	0,
	0,
};
const HSDSCHInfor7::Info HSDSCHInfor7::theInfo = {
	HSDSCHInfor7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *DLAddReconfTransChInformationr7TfsSignallingMode::choicesInfo[3] = {
	&TransportFormatSet::theInfo,
	&ULTransportChannelIdentity::theInfo,
	&HSDSCHInfor7::theInfo,
};
const DLAddReconfTransChInformationr7TfsSignallingMode::Info DLAddReconfTransChInformationr7TfsSignallingMode::theInfo = {
	DLAddReconfTransChInformationr7TfsSignallingMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *DLAddReconfTransChInformationr7::itemsInfo[3] = {
	&DLTrCHTypeId1r5::theInfo,
	&DLAddReconfTransChInformationr7TfsSignallingMode::theInfo,
	&QualityTarget::theInfo,
};
bool DLAddReconfTransChInformationr7::itemsPres[3] = {
	1,
	1,
	0,
};
const DLAddReconfTransChInformationr7::Info DLAddReconfTransChInformationr7::theInfo = {
	DLAddReconfTransChInformationr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};

const void *HSDSCHInfor9DlMACHeaderType::choicesInfo[2] = {
	&AddOrReconfMACdFlow::theInfo,
	&AddOrReconfMACehsReordQr9::theInfo,
};
const HSDSCHInfor9DlMACHeaderType::Info HSDSCHInfor9DlMACHeaderType::theInfo = {
	HSDSCHInfor9DlMACHeaderType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *HSDSCHInfor9::itemsInfo[2] = {
	&HARQInfor7::theInfo,
	&HSDSCHInfor9DlMACHeaderType::theInfo,
};
bool HSDSCHInfor9::itemsPres[2] = {
	0,
	0,
};
const HSDSCHInfor9::Info HSDSCHInfor9::theInfo = {
	HSDSCHInfor9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *DLAddReconfTransChInformationr9TfsSignallingMode::choicesInfo[3] = {
	&TransportFormatSet::theInfo,
	&ULTransportChannelIdentity::theInfo,
	&HSDSCHInfor9::theInfo,
};
const DLAddReconfTransChInformationr9TfsSignallingMode::Info DLAddReconfTransChInformationr9TfsSignallingMode::theInfo = {
	DLAddReconfTransChInformationr9TfsSignallingMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *DLAddReconfTransChInformationr9::itemsInfo[3] = {
	&DLTrCHTypeId1r5::theInfo,
	&DLAddReconfTransChInformationr9TfsSignallingMode::theInfo,
	&QualityTarget::theInfo,
};
bool DLAddReconfTransChInformationr9::itemsPres[3] = {
	1,
	1,
	0,
};
const DLAddReconfTransChInformationr9::Info DLAddReconfTransChInformationr9::theInfo = {
	DLAddReconfTransChInformationr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};

const void *DLCommonTransChInfor4ModeSpecificInfoFddDlParametersDlDCHTFCS::itemsInfo[1] = {
	&TFCS::theInfo,
};
bool DLCommonTransChInfor4ModeSpecificInfoFddDlParametersDlDCHTFCS::itemsPres[1] = {
	0,
};
const DLCommonTransChInfor4ModeSpecificInfoFddDlParametersDlDCHTFCS::Info DLCommonTransChInfor4ModeSpecificInfoFddDlParametersDlDCHTFCS::theInfo = {
	DLCommonTransChInfor4ModeSpecificInfoFddDlParametersDlDCHTFCS::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLCommonTransChInfor4ModeSpecificInfoFddDlParameters::choicesInfo[2] = {
	&DLCommonTransChInfor4ModeSpecificInfoFddDlParametersDlDCHTFCS::theInfo,
	&DLCommonTransChInfor4ModeSpecificInfoFddDlParametersSameAsUL::theInfo,
};
const DLCommonTransChInfor4ModeSpecificInfoFddDlParameters::Info DLCommonTransChInfor4ModeSpecificInfoFddDlParameters::theInfo = {
	DLCommonTransChInfor4ModeSpecificInfoFddDlParameters::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLCommonTransChInfor4ModeSpecificInfoFdd::itemsInfo[1] = {
	&DLCommonTransChInfor4ModeSpecificInfoFddDlParameters::theInfo,
};
bool DLCommonTransChInfor4ModeSpecificInfoFdd::itemsPres[1] = {
	0,
};
const DLCommonTransChInfor4ModeSpecificInfoFdd::Info DLCommonTransChInfor4ModeSpecificInfoFdd::theInfo = {
	DLCommonTransChInfor4ModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLCommonTransChInfor4ModeSpecificInfoTdd::itemsInfo[1] = {
	&IndividualDLCCTrCHInfoList::theInfo,
};
bool DLCommonTransChInfor4ModeSpecificInfoTdd::itemsPres[1] = {
	0,
};
const DLCommonTransChInfor4ModeSpecificInfoTdd::Info DLCommonTransChInfor4ModeSpecificInfoTdd::theInfo = {
	DLCommonTransChInfor4ModeSpecificInfoTdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLCommonTransChInfor4ModeSpecificInfo::choicesInfo[2] = {
	&DLCommonTransChInfor4ModeSpecificInfoFdd::theInfo,
	&DLCommonTransChInfor4ModeSpecificInfoTdd::theInfo,
};
const DLCommonTransChInfor4ModeSpecificInfo::Info DLCommonTransChInfor4ModeSpecificInfo::theInfo = {
	DLCommonTransChInfor4ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLCommonTransChInfor4::itemsInfo[2] = {
	&TFCS::theInfo,
	&DLCommonTransChInfor4ModeSpecificInfo::theInfo,
};
bool DLCommonTransChInfor4::itemsPres[2] = {
	0,
	0,
};
const DLCommonTransChInfor4::Info DLCommonTransChInfor4::theInfo = {
	DLCommonTransChInfor4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *DLTransportChannelIdentity::itemsInfo[2] = {
	&DLTrCHType::theInfo,
	&TransportChannelIdentity::theInfo,
};
bool DLTransportChannelIdentity::itemsPres[2] = {
	1,
	1,
};
const DLTransportChannelIdentity::Info DLTransportChannelIdentity::theInfo = {
	DLTransportChannelIdentity::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *DLTrCHTypeId2r5::choicesInfo[3] = {
	&TransportChannelIdentity::theInfo,
	&TransportChannelIdentity::theInfo,
	&MACdFlowIdentity::theInfo,
};
const DLTrCHTypeId2r5::Info DLTrCHTypeId2r5::theInfo = {
	DLTrCHTypeId2r5::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
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

const void *DLTrCHTypeId2r7Hsdsch::choicesInfo[2] = {
	&MACdFlowIdentity::theInfo,
	&MACehsQueueId::theInfo,
};
const DLTrCHTypeId2r7Hsdsch::Info DLTrCHTypeId2r7Hsdsch::theInfo = {
	DLTrCHTypeId2r7Hsdsch::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLTrCHTypeId2r7::choicesInfo[3] = {
	&TransportChannelIdentity::theInfo,
	&TransportChannelIdentity::theInfo,
	&DLTrCHTypeId2r7Hsdsch::theInfo,
};
const DLTrCHTypeId2r7::Info DLTrCHTypeId2r7::theInfo = {
	DLTrCHTypeId2r7::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
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

const void *DRACStaticInformation::itemsInfo[3] = {
	&TransmissionTimeValidity::theInfo,
	&TimeDurationBeforeRetry::theInfo,
	&DRACClassIdentity::theInfo,
};
bool DRACStaticInformation::itemsPres[3] = {
	1,
	1,
	1,
};
const DRACStaticInformation::Info DRACStaticInformation::theInfo = {
	DRACStaticInformation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *EDCHAddReconfMACdFlowTransmissionGrantTypeNonScheduledTransGrantInfo::itemsInfo[2] = {
	&EDCHAddReconfMACdFlowTransmissionGrantTypeNonScheduledTransGrantInfoMaxMACePDUContents::theInfo,
	&EDCHAddReconfMACdFlowTransmissionGrantTypeNonScheduledTransGrantInfoMs2NonSchedTransmGrantHARQAlloc::theInfo,
};
bool EDCHAddReconfMACdFlowTransmissionGrantTypeNonScheduledTransGrantInfo::itemsPres[2] = {
	1,
	0,
};
const EDCHAddReconfMACdFlowTransmissionGrantTypeNonScheduledTransGrantInfo::Info EDCHAddReconfMACdFlowTransmissionGrantTypeNonScheduledTransGrantInfo::theInfo = {
	EDCHAddReconfMACdFlowTransmissionGrantTypeNonScheduledTransGrantInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *EDCHAddReconfMACdFlowTransmissionGrantType::choicesInfo[2] = {
	&EDCHAddReconfMACdFlowTransmissionGrantTypeNonScheduledTransGrantInfo::theInfo,
	&EDCHAddReconfMACdFlowTransmissionGrantTypeScheduledTransmissionGrantInfo::theInfo,
};
const EDCHAddReconfMACdFlowTransmissionGrantType::Info EDCHAddReconfMACdFlowTransmissionGrantType::theInfo = {
	EDCHAddReconfMACdFlowTransmissionGrantType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *EDCHAddReconfMACdFlow::itemsInfo[5] = {
	&EDCHMACdFlowIdentity::theInfo,
	&EDCHMACdFlowPowerOffset::theInfo,
	&EDCHMACdFlowMaxRetrans::theInfo,
	&EDCHMACdFlowMultiplexingList::theInfo,
	&EDCHAddReconfMACdFlowTransmissionGrantType::theInfo,
};
bool EDCHAddReconfMACdFlow::itemsPres[5] = {
	1,
	0,
	0,
	0,
	0,
};
const EDCHAddReconfMACdFlow::Info EDCHAddReconfMACdFlow::theInfo = {
	EDCHAddReconfMACdFlow::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 4, 0
};

const void *EDCHAddReconfMACdFlowr7TransmissionGrantTypeNonScheduledTransGrantInfoModeSpecificInfoFdd::itemsInfo[2] = {
	&EDCHAddReconfMACdFlowr7TransmissionGrantTypeNonScheduledTransGrantInfoModeSpecificInfoFddMaxMACePDUContents::theInfo,
	&EDCHAddReconfMACdFlowr7TransmissionGrantTypeNonScheduledTransGrantInfoModeSpecificInfoFddMs2NonSchedTransmGrantHARQAlloc::theInfo,
};
bool EDCHAddReconfMACdFlowr7TransmissionGrantTypeNonScheduledTransGrantInfoModeSpecificInfoFdd::itemsPres[2] = {
	1,
	0,
};
const EDCHAddReconfMACdFlowr7TransmissionGrantTypeNonScheduledTransGrantInfoModeSpecificInfoFdd::Info EDCHAddReconfMACdFlowr7TransmissionGrantTypeNonScheduledTransGrantInfoModeSpecificInfoFdd::theInfo = {
	EDCHAddReconfMACdFlowr7TransmissionGrantTypeNonScheduledTransGrantInfoModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *EDCHAddReconfMACdFlowr7TransmissionGrantTypeNonScheduledTransGrantInfoModeSpecificInfo::choicesInfo[2] = {
	&EDCHAddReconfMACdFlowr7TransmissionGrantTypeNonScheduledTransGrantInfoModeSpecificInfoFdd::theInfo,
	&EDCHAddReconfMACdFlowr7TransmissionGrantTypeNonScheduledTransGrantInfoModeSpecificInfoTdd::theInfo,
};
const EDCHAddReconfMACdFlowr7TransmissionGrantTypeNonScheduledTransGrantInfoModeSpecificInfo::Info EDCHAddReconfMACdFlowr7TransmissionGrantTypeNonScheduledTransGrantInfoModeSpecificInfo::theInfo = {
	EDCHAddReconfMACdFlowr7TransmissionGrantTypeNonScheduledTransGrantInfoModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *EDCHAddReconfMACdFlowr7TransmissionGrantTypeNonScheduledTransGrantInfo::itemsInfo[1] = {
	&EDCHAddReconfMACdFlowr7TransmissionGrantTypeNonScheduledTransGrantInfoModeSpecificInfo::theInfo,
};
bool EDCHAddReconfMACdFlowr7TransmissionGrantTypeNonScheduledTransGrantInfo::itemsPres[1] = {
	1,
};
const EDCHAddReconfMACdFlowr7TransmissionGrantTypeNonScheduledTransGrantInfo::Info EDCHAddReconfMACdFlowr7TransmissionGrantTypeNonScheduledTransGrantInfo::theInfo = {
	EDCHAddReconfMACdFlowr7TransmissionGrantTypeNonScheduledTransGrantInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *EDCHAddReconfMACdFlowr7TransmissionGrantType::choicesInfo[2] = {
	&EDCHAddReconfMACdFlowr7TransmissionGrantTypeNonScheduledTransGrantInfo::theInfo,
	&EDCHAddReconfMACdFlowr7TransmissionGrantTypeScheduledTransmissionGrantInfo::theInfo,
};
const EDCHAddReconfMACdFlowr7TransmissionGrantType::Info EDCHAddReconfMACdFlowr7TransmissionGrantType::theInfo = {
	EDCHAddReconfMACdFlowr7TransmissionGrantType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *EDCHAddReconfMACdFlowr7::itemsInfo[6] = {
	&EDCHMACdFlowIdentity::theInfo,
	&EDCHMACdFlowPowerOffset::theInfo,
	&EDCHMACdFlowMaxRetrans::theInfo,
	&EDCHMACdFlowRetransTimer::theInfo,
	&EDCHMACdFlowMultiplexingList::theInfo,
	&EDCHAddReconfMACdFlowr7TransmissionGrantType::theInfo,
};
bool EDCHAddReconfMACdFlowr7::itemsPres[6] = {
	1,
	0,
	0,
	0,
	0,
	0,
};
const EDCHAddReconfMACdFlowr7::Info EDCHAddReconfMACdFlowr7::theInfo = {
	EDCHAddReconfMACdFlowr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 5, 0
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

const void *SignalledGainFactorsModeSpecificInfo::choicesInfo[2] = {
	&SignalledGainFactorsModeSpecificInfoFdd::theInfo,
	&SignalledGainFactorsModeSpecificInfoTdd::theInfo,
};
const SignalledGainFactorsModeSpecificInfo::Info SignalledGainFactorsModeSpecificInfo::theInfo = {
	SignalledGainFactorsModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *SignalledGainFactors::itemsInfo[3] = {
	&SignalledGainFactorsModeSpecificInfo::theInfo,
	&GainFactor::theInfo,
	&ReferenceTFCID::theInfo,
};
bool SignalledGainFactors::itemsPres[3] = {
	1,
	1,
	0,
};
const SignalledGainFactors::Info SignalledGainFactors::theInfo = {
	SignalledGainFactors::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};

const void *GainFactorInformation::choicesInfo[2] = {
	&SignalledGainFactors::theInfo,
	&ReferenceTFCID::theInfo,
};
const GainFactorInformation::Info GainFactorInformation::theInfo = {
	GainFactorInformation::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *PowerOffsetInfoShortModeSpecificInfoFdd::itemsInfo[1] = {
	&GainFactor::theInfo,
};
bool PowerOffsetInfoShortModeSpecificInfoFdd::itemsPres[1] = {
	1,
};
const PowerOffsetInfoShortModeSpecificInfoFdd::Info PowerOffsetInfoShortModeSpecificInfoFdd::theInfo = {
	PowerOffsetInfoShortModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PowerOffsetInfoShortModeSpecificInfo::choicesInfo[2] = {
	&PowerOffsetInfoShortModeSpecificInfoFdd::theInfo,
	&PowerOffsetInfoShortModeSpecificInfoTdd::theInfo,
};
const PowerOffsetInfoShortModeSpecificInfo::Info PowerOffsetInfoShortModeSpecificInfo::theInfo = {
	PowerOffsetInfoShortModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *PowerOffsetInfoShort::itemsInfo[3] = {
	&TFCValue::theInfo,
	&PowerOffsetInfoShortModeSpecificInfo::theInfo,
	&GainFactor::theInfo,
};
bool PowerOffsetInfoShort::itemsPres[3] = {
	1,
	1,
	1,
};
const PowerOffsetInfoShort::Info PowerOffsetInfoShort::theInfo = {
	PowerOffsetInfoShort::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *PowerOffsetInformation::itemsInfo[2] = {
	&GainFactorInformation::theInfo,
	&PowerOffsetPpm::theInfo,
};
bool PowerOffsetInformation::itemsPres[2] = {
	1,
	0,
};
const PowerOffsetInformation::Info PowerOffsetInformation::theInfo = {
	PowerOffsetInformation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
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

const void *TransportFormatSetLCR::choicesInfo[2] = {
	&DedicatedTransChTFS::theInfo,
	&CommonTransChTFSLCR::theInfo,
};
const TransportFormatSetLCR::Info TransportFormatSetLCR::theInfo = {
	TransportFormatSetLCR::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULAddReconfTransChInformationr6Dchusch::itemsInfo[3] = {
	&ULTrCHType::theInfo,
	&TransportChannelIdentity::theInfo,
	&TransportFormatSet::theInfo,
};
bool ULAddReconfTransChInformationr6Dchusch::itemsPres[3] = {
	1,
	1,
	1,
};
const ULAddReconfTransChInformationr6Dchusch::Info ULAddReconfTransChInformationr6Dchusch::theInfo = {
	ULAddReconfTransChInformationr6Dchusch::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *ULAddReconfTransChInformationr6Edch::itemsInfo[3] = {
	&EDCHTTI::theInfo,
	&ULAddReconfTransChInformationr6Edchharq_Info::theInfo,
	&EDCHAddReconfMACdFlowList::theInfo,
};
bool ULAddReconfTransChInformationr6Edch::itemsPres[3] = {
	1,
	1,
	0,
};
const ULAddReconfTransChInformationr6Edch::Info ULAddReconfTransChInformationr6Edch::theInfo = {
	ULAddReconfTransChInformationr6Edch::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};

const void *ULAddReconfTransChInformationr6::choicesInfo[2] = {
	&ULAddReconfTransChInformationr6Dchusch::theInfo,
	&ULAddReconfTransChInformationr6Edch::theInfo,
};
const ULAddReconfTransChInformationr6::Info ULAddReconfTransChInformationr6::theInfo = {
	ULAddReconfTransChInformationr6::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULAddReconfTransChInformationr7Dchusch::itemsInfo[3] = {
	&ULTrCHType::theInfo,
	&TransportChannelIdentity::theInfo,
	&TransportFormatSet::theInfo,
};
bool ULAddReconfTransChInformationr7Dchusch::itemsPres[3] = {
	1,
	1,
	1,
};
const ULAddReconfTransChInformationr7Dchusch::Info ULAddReconfTransChInformationr7Dchusch::theInfo = {
	ULAddReconfTransChInformationr7Dchusch::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *ULAddReconfTransChInformationr7EdchModeSpecificFdd::itemsInfo[1] = {
	&EDCHTTI::theInfo,
};
bool ULAddReconfTransChInformationr7EdchModeSpecificFdd::itemsPres[1] = {
	1,
};
const ULAddReconfTransChInformationr7EdchModeSpecificFdd::Info ULAddReconfTransChInformationr7EdchModeSpecificFdd::theInfo = {
	ULAddReconfTransChInformationr7EdchModeSpecificFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ULAddReconfTransChInformationr7EdchModeSpecific::choicesInfo[2] = {
	&ULAddReconfTransChInformationr7EdchModeSpecificFdd::theInfo,
	&ULAddReconfTransChInformationr7EdchModeSpecificTdd::theInfo,
};
const ULAddReconfTransChInformationr7EdchModeSpecific::Info ULAddReconfTransChInformationr7EdchModeSpecific::theInfo = {
	ULAddReconfTransChInformationr7EdchModeSpecific::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULAddReconfTransChInformationr7Edch::itemsInfo[3] = {
	&ULAddReconfTransChInformationr7EdchModeSpecific::theInfo,
	&ULAddReconfTransChInformationr7Edchharq_Info::theInfo,
	&EDCHAddReconfMACdFlowListr7::theInfo,
};
bool ULAddReconfTransChInformationr7Edch::itemsPres[3] = {
	1,
	1,
	0,
};
const ULAddReconfTransChInformationr7Edch::Info ULAddReconfTransChInformationr7Edch::theInfo = {
	ULAddReconfTransChInformationr7Edch::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};

const void *ULAddReconfTransChInformationr7::choicesInfo[2] = {
	&ULAddReconfTransChInformationr7Dchusch::theInfo,
	&ULAddReconfTransChInformationr7Edch::theInfo,
};
const ULAddReconfTransChInformationr7::Info ULAddReconfTransChInformationr7::theInfo = {
	ULAddReconfTransChInformationr7::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULAddReconfTransChInformationr8Dchusch::itemsInfo[3] = {
	&ULTrCHType::theInfo,
	&TransportChannelIdentity::theInfo,
	&TransportFormatSet::theInfo,
};
bool ULAddReconfTransChInformationr8Dchusch::itemsPres[3] = {
	1,
	1,
	1,
};
const ULAddReconfTransChInformationr8Dchusch::Info ULAddReconfTransChInformationr8Dchusch::theInfo = {
	ULAddReconfTransChInformationr8Dchusch::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *ULAddReconfTransChInformationr8EdchModeSpecificFdd::itemsInfo[1] = {
	&EDCHTTI::theInfo,
};
bool ULAddReconfTransChInformationr8EdchModeSpecificFdd::itemsPres[1] = {
	1,
};
const ULAddReconfTransChInformationr8EdchModeSpecificFdd::Info ULAddReconfTransChInformationr8EdchModeSpecificFdd::theInfo = {
	ULAddReconfTransChInformationr8EdchModeSpecificFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ULAddReconfTransChInformationr8EdchModeSpecific::choicesInfo[2] = {
	&ULAddReconfTransChInformationr8EdchModeSpecificFdd::theInfo,
	&ULAddReconfTransChInformationr8EdchModeSpecificTdd::theInfo,
};
const ULAddReconfTransChInformationr8EdchModeSpecific::Info ULAddReconfTransChInformationr8EdchModeSpecific::theInfo = {
	ULAddReconfTransChInformationr8EdchModeSpecific::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULAddReconfTransChInformationr8Edch::itemsInfo[4] = {
	&ULAddReconfTransChInformationr8Edchul_MAC_HeaderType::theInfo,
	&ULAddReconfTransChInformationr8EdchModeSpecific::theInfo,
	&ULAddReconfTransChInformationr8Edchharq_Info::theInfo,
	&EDCHAddReconfMACdFlowListr7::theInfo,
};
bool ULAddReconfTransChInformationr8Edch::itemsPres[4] = {
	0,
	1,
	1,
	0,
};
const ULAddReconfTransChInformationr8Edch::Info ULAddReconfTransChInformationr8Edch::theInfo = {
	ULAddReconfTransChInformationr8Edch::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
};

const void *ULAddReconfTransChInformationr8::choicesInfo[2] = {
	&ULAddReconfTransChInformationr8Dchusch::theInfo,
	&ULAddReconfTransChInformationr8Edch::theInfo,
};
const ULAddReconfTransChInformationr8::Info ULAddReconfTransChInformationr8::theInfo = {
	ULAddReconfTransChInformationr8::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULCommonTransChInfor4ModeSpecificInfoFdd::itemsInfo[1] = {
	&TFCS::theInfo,
};
bool ULCommonTransChInfor4ModeSpecificInfoFdd::itemsPres[1] = {
	1,
};
const ULCommonTransChInfor4ModeSpecificInfoFdd::Info ULCommonTransChInfor4ModeSpecificInfoFdd::theInfo = {
	ULCommonTransChInfor4ModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ULCommonTransChInfor4ModeSpecificInfoTdd::itemsInfo[1] = {
	&IndividualULCCTrCHInfoList::theInfo,
};
bool ULCommonTransChInfor4ModeSpecificInfoTdd::itemsPres[1] = {
	0,
};
const ULCommonTransChInfor4ModeSpecificInfoTdd::Info ULCommonTransChInfor4ModeSpecificInfoTdd::theInfo = {
	ULCommonTransChInfor4ModeSpecificInfoTdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ULCommonTransChInfor4ModeSpecificInfo::choicesInfo[2] = {
	&ULCommonTransChInfor4ModeSpecificInfoFdd::theInfo,
	&ULCommonTransChInfor4ModeSpecificInfoTdd::theInfo,
};
const ULCommonTransChInfor4ModeSpecificInfo::Info ULCommonTransChInfor4ModeSpecificInfo::theInfo = {
	ULCommonTransChInfor4ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULCommonTransChInfor4::itemsInfo[4] = {
	&TFCSubset::theInfo,
	&TFCS::theInfo,
	&ULCommonTransChInfor4ModeSpecificInfo::theInfo,
	&TFCSubsetList::theInfo,
};
bool ULCommonTransChInfor4::itemsPres[4] = {
	0,
	0,
	0,
	0,
};
const ULCommonTransChInfor4::Info ULCommonTransChInfor4::theInfo = {
	ULCommonTransChInfor4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 4, 0
};

const void *ULTransportChannelIdentityr6Dchusch::itemsInfo[2] = {
	&ULTrCHType::theInfo,
	&TransportChannelIdentity::theInfo,
};
bool ULTransportChannelIdentityr6Dchusch::itemsPres[2] = {
	1,
	1,
};
const ULTransportChannelIdentityr6Dchusch::Info ULTransportChannelIdentityr6Dchusch::theInfo = {
	ULTransportChannelIdentityr6Dchusch::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *ULTransportChannelIdentityr6::choicesInfo[2] = {
	&ULTransportChannelIdentityr6Dchusch::theInfo,
	&EDCHMACdFlowIdentity::theInfo,
};
const ULTransportChannelIdentityr6::Info ULTransportChannelIdentityr6::theInfo = {
	ULTransportChannelIdentityr6::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
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

const void *AccessServiceClassFDD::itemsInfo[3] = {
	&AccessServiceClassFDDAvailableSignatureStartIndex::theInfo,
	&AccessServiceClassFDDAvailableSignatureEndIndex::theInfo,
	&AccessServiceClassFDDAssignedSubChannelNumber::theInfo,
};
bool AccessServiceClassFDD::itemsPres[3] = {
	1,
	1,
	1,
};
const AccessServiceClassFDD::Info AccessServiceClassFDD::theInfo = {
	AccessServiceClassFDD::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *AccessServiceClassTDDSubchannelSizeSize2::itemsInfo[1] = {
	&AccessServiceClassTDDSubchannelSizeSize2subchannels::theInfo,
};
bool AccessServiceClassTDDSubchannelSizeSize2::itemsPres[1] = {
	0,
};
const AccessServiceClassTDDSubchannelSizeSize2::Info AccessServiceClassTDDSubchannelSizeSize2::theInfo = {
	AccessServiceClassTDDSubchannelSizeSize2::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *AccessServiceClassTDDSubchannelSizeSize4::itemsInfo[1] = {
	&AccessServiceClassTDDSubchannelSizeSize4Subchannels::theInfo,
};
bool AccessServiceClassTDDSubchannelSizeSize4::itemsPres[1] = {
	0,
};
const AccessServiceClassTDDSubchannelSizeSize4::Info AccessServiceClassTDDSubchannelSizeSize4::theInfo = {
	AccessServiceClassTDDSubchannelSizeSize4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *AccessServiceClassTDDSubchannelSizeSize8::itemsInfo[1] = {
	&AccessServiceClassTDDSubchannelSizeSize8Subchannels::theInfo,
};
bool AccessServiceClassTDDSubchannelSizeSize8::itemsPres[1] = {
	0,
};
const AccessServiceClassTDDSubchannelSizeSize8::Info AccessServiceClassTDDSubchannelSizeSize8::theInfo = {
	AccessServiceClassTDDSubchannelSizeSize8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *AccessServiceClassTDDSubchannelSize::choicesInfo[4] = {
	&AccessServiceClassTDDSubchannelSizeSize1::theInfo,
	&AccessServiceClassTDDSubchannelSizeSize2::theInfo,
	&AccessServiceClassTDDSubchannelSizeSize4::theInfo,
	&AccessServiceClassTDDSubchannelSizeSize8::theInfo,
};
const AccessServiceClassTDDSubchannelSize::Info AccessServiceClassTDDSubchannelSize::theInfo = {
	AccessServiceClassTDDSubchannelSize::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	3
};

const void *AccessServiceClassTDD::itemsInfo[2] = {
	&AccessServiceClassTDDChannelisationCodeIndices::theInfo,
	&AccessServiceClassTDDSubchannelSize::theInfo,
};
bool AccessServiceClassTDD::itemsPres[2] = {
	0,
	1,
};
const AccessServiceClassTDD::Info AccessServiceClassTDD::theInfo = {
	AccessServiceClassTDD::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *AccessServiceClassTDDr7SubchannelSizeSize2::itemsInfo[1] = {
	&AccessServiceClassTDDr7SubchannelSizeSize2subchannels::theInfo,
};
bool AccessServiceClassTDDr7SubchannelSizeSize2::itemsPres[1] = {
	0,
};
const AccessServiceClassTDDr7SubchannelSizeSize2::Info AccessServiceClassTDDr7SubchannelSizeSize2::theInfo = {
	AccessServiceClassTDDr7SubchannelSizeSize2::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *AccessServiceClassTDDr7SubchannelSizeSize4::itemsInfo[1] = {
	&AccessServiceClassTDDr7SubchannelSizeSize4Subchannels::theInfo,
};
bool AccessServiceClassTDDr7SubchannelSizeSize4::itemsPres[1] = {
	0,
};
const AccessServiceClassTDDr7SubchannelSizeSize4::Info AccessServiceClassTDDr7SubchannelSizeSize4::theInfo = {
	AccessServiceClassTDDr7SubchannelSizeSize4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *AccessServiceClassTDDr7SubchannelSizeSize8::itemsInfo[1] = {
	&AccessServiceClassTDDr7SubchannelSizeSize8Subchannels::theInfo,
};
bool AccessServiceClassTDDr7SubchannelSizeSize8::itemsPres[1] = {
	0,
};
const AccessServiceClassTDDr7SubchannelSizeSize8::Info AccessServiceClassTDDr7SubchannelSizeSize8::theInfo = {
	AccessServiceClassTDDr7SubchannelSizeSize8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *AccessServiceClassTDDr7SubchannelSizeSize16::itemsInfo[1] = {
	&AccessServiceClassTDDr7SubchannelSizeSize16Subchannels::theInfo,
};
bool AccessServiceClassTDDr7SubchannelSizeSize16::itemsPres[1] = {
	0,
};
const AccessServiceClassTDDr7SubchannelSizeSize16::Info AccessServiceClassTDDr7SubchannelSizeSize16::theInfo = {
	AccessServiceClassTDDr7SubchannelSizeSize16::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *AccessServiceClassTDDr7SubchannelSize::choicesInfo[5] = {
	&AccessServiceClassTDDr7SubchannelSizeSize1::theInfo,
	&AccessServiceClassTDDr7SubchannelSizeSize2::theInfo,
	&AccessServiceClassTDDr7SubchannelSizeSize4::theInfo,
	&AccessServiceClassTDDr7SubchannelSizeSize8::theInfo,
	&AccessServiceClassTDDr7SubchannelSizeSize16::theInfo,
};
const AccessServiceClassTDDr7SubchannelSize::Info AccessServiceClassTDDr7SubchannelSize::theInfo = {
	AccessServiceClassTDDr7SubchannelSize::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	4
};

const void *AccessServiceClassTDDr7::itemsInfo[2] = {
	&AccessServiceClassTDDr7ChannelisationCodeIndices::theInfo,
	&AccessServiceClassTDDr7SubchannelSize::theInfo,
};
bool AccessServiceClassTDDr7::itemsPres[2] = {
	0,
	1,
};
const AccessServiceClassTDDr7::Info AccessServiceClassTDDr7::theInfo = {
	AccessServiceClassTDDr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *AccessServiceClassTDDLCRr4SubchannelSizeSize2::itemsInfo[1] = {
	&AccessServiceClassTDDLCRr4SubchannelSizeSize2subchannels::theInfo,
};
bool AccessServiceClassTDDLCRr4SubchannelSizeSize2::itemsPres[1] = {
	0,
};
const AccessServiceClassTDDLCRr4SubchannelSizeSize2::Info AccessServiceClassTDDLCRr4SubchannelSizeSize2::theInfo = {
	AccessServiceClassTDDLCRr4SubchannelSizeSize2::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *AccessServiceClassTDDLCRr4SubchannelSizeSize4::itemsInfo[1] = {
	&AccessServiceClassTDDLCRr4SubchannelSizeSize4Subchannels::theInfo,
};
bool AccessServiceClassTDDLCRr4SubchannelSizeSize4::itemsPres[1] = {
	0,
};
const AccessServiceClassTDDLCRr4SubchannelSizeSize4::Info AccessServiceClassTDDLCRr4SubchannelSizeSize4::theInfo = {
	AccessServiceClassTDDLCRr4SubchannelSizeSize4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *AccessServiceClassTDDLCRr4SubchannelSizeSize8::itemsInfo[1] = {
	&AccessServiceClassTDDLCRr4SubchannelSizeSize8Subchannels::theInfo,
};
bool AccessServiceClassTDDLCRr4SubchannelSizeSize8::itemsPres[1] = {
	0,
};
const AccessServiceClassTDDLCRr4SubchannelSizeSize8::Info AccessServiceClassTDDLCRr4SubchannelSizeSize8::theInfo = {
	AccessServiceClassTDDLCRr4SubchannelSizeSize8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *AccessServiceClassTDDLCRr4SubchannelSize::choicesInfo[4] = {
	&AccessServiceClassTDDLCRr4SubchannelSizeSize1::theInfo,
	&AccessServiceClassTDDLCRr4SubchannelSizeSize2::theInfo,
	&AccessServiceClassTDDLCRr4SubchannelSizeSize4::theInfo,
	&AccessServiceClassTDDLCRr4SubchannelSizeSize8::theInfo,
};
const AccessServiceClassTDDLCRr4SubchannelSize::Info AccessServiceClassTDDLCRr4SubchannelSize::theInfo = {
	AccessServiceClassTDDLCRr4SubchannelSize::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	3
};

const void *AccessServiceClassTDDLCRr4::itemsInfo[2] = {
	&AccessServiceClassTDDLCRr4AvailableSYNCUlCodesIndics::theInfo,
	&AccessServiceClassTDDLCRr4SubchannelSize::theInfo,
};
bool AccessServiceClassTDDLCRr4::itemsPres[2] = {
	0,
	1,
};
const AccessServiceClassTDDLCRr4::Info AccessServiceClassTDDLCRr4::theInfo = {
	AccessServiceClassTDDLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
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

const void *AdditionalPRACHTFandTFCSCCCHIEs::itemsInfo[2] = {
	&PowerOffsetInformation::theInfo,
	&DynamicTFInformationCCCH::theInfo,
};
bool AdditionalPRACHTFandTFCSCCCHIEs::itemsPres[2] = {
	1,
	1,
};
const AdditionalPRACHTFandTFCSCCCHIEs::Info AdditionalPRACHTFandTFCSCCCHIEs::theInfo = {
	AdditionalPRACHTFandTFCSCCCHIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
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

const void *AICHInfo::itemsInfo[3] = {
	&ChannelisationCode256::theInfo,
	&AICHInfoSttdIndicator::theInfo,
	&AICHTransmissionTiming::theInfo,
};
bool AICHInfo::itemsPres[3] = {
	1,
	1,
	1,
};
const AICHInfo::Info AICHInfo::theInfo = {
	AICHInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *AllocationPeriodInfo::itemsInfo[2] = {
	&AllocationPeriodInfoAllocationActivationTime::theInfo,
	&AllocationPeriodInfoAllocationDuration::theInfo,
};
bool AllocationPeriodInfo::itemsPres[2] = {
	1,
	1,
};
const AllocationPeriodInfo::Info AllocationPeriodInfo::theInfo = {
	AllocationPeriodInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *APSignatureVCAM::itemsInfo[2] = {
	&APSignature::theInfo,
	&AvailableAPSubchannelList::theInfo,
};
bool APSignatureVCAM::itemsPres[2] = {
	1,
	0,
};
const APSignatureVCAM::Info APSignatureVCAM::theInfo = {
	APSignatureVCAM::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
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

const void *AvailableMinimumSFVCAM::itemsInfo[4] = {
	&MinimumSpreadingFactor::theInfo,
	&NFMax::theInfo,
	&MaxAvailablePCPCHNumber::theInfo,
	&AvailableAPSignatureVCAMList::theInfo,
};
bool AvailableMinimumSFVCAM::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const AvailableMinimumSFVCAM::Info AvailableMinimumSFVCAM::theInfo = {
	AvailableMinimumSFVCAM::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 0, 0
};

const void *ULDPCHPowerControlInfoFdd::itemsInfo[4] = {
	&DPCCHPowerOffset::theInfo,
	&PCPreamble::theInfo,
	&SRBdelay::theInfo,
	&PowerControlAlgorithm::theInfo,
};
bool ULDPCHPowerControlInfoFdd::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const ULDPCHPowerControlInfoFdd::Info ULDPCHPowerControlInfoFdd::theInfo = {
	ULDPCHPowerControlInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 0, 0
};

const void *IndividualTSInterference::itemsInfo[2] = {
	&TimeslotNumber::theInfo,
	&TDDULInterference::theInfo,
};
bool IndividualTSInterference::itemsPres[2] = {
	1,
	1,
};
const IndividualTSInterference::Info IndividualTSInterference::theInfo = {
	IndividualTSInterference::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *ULDPCHPowerControlInfoTddUlOLPCSignallingIndividuallySignalled::itemsInfo[3] = {
	&IndividualTSInterferenceList::theInfo,
	&ConstantValueTdd::theInfo,
	&PrimaryCCPCHTXPower::theInfo,
};
bool ULDPCHPowerControlInfoTddUlOLPCSignallingIndividuallySignalled::itemsPres[3] = {
	1,
	1,
	1,
};
const ULDPCHPowerControlInfoTddUlOLPCSignallingIndividuallySignalled::Info ULDPCHPowerControlInfoTddUlOLPCSignallingIndividuallySignalled::theInfo = {
	ULDPCHPowerControlInfoTddUlOLPCSignallingIndividuallySignalled::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *ULDPCHPowerControlInfoTddUlOLPCSignalling::choicesInfo[2] = {
	&ULDPCHPowerControlInfoTddUlOLPCSignallingBroadcastULOLPCinfo::theInfo,
	&ULDPCHPowerControlInfoTddUlOLPCSignallingIndividuallySignalled::theInfo,
};
const ULDPCHPowerControlInfoTddUlOLPCSignalling::Info ULDPCHPowerControlInfoTddUlOLPCSignalling::theInfo = {
	ULDPCHPowerControlInfoTddUlOLPCSignalling::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULDPCHPowerControlInfoTdd::itemsInfo[2] = {
	&ULTargetSIR::theInfo,
	&ULDPCHPowerControlInfoTddUlOLPCSignalling::theInfo,
};
bool ULDPCHPowerControlInfoTdd::itemsPres[2] = {
	0,
	0,
};
const ULDPCHPowerControlInfoTdd::Info ULDPCHPowerControlInfoTdd::theInfo = {
	ULDPCHPowerControlInfoTdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *ULDPCHPowerControlInfo::choicesInfo[2] = {
	&ULDPCHPowerControlInfoFdd::theInfo,
	&ULDPCHPowerControlInfoTdd::theInfo,
};
const ULDPCHPowerControlInfo::Info ULDPCHPowerControlInfo::theInfo = {
	ULDPCHPowerControlInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *CCTrCHPowerControlInfo::itemsInfo[2] = {
	&TFCSIdentity::theInfo,
	&ULDPCHPowerControlInfo::theInfo,
};
bool CCTrCHPowerControlInfo::itemsPres[2] = {
	0,
	1,
};
const CCTrCHPowerControlInfo::Info CCTrCHPowerControlInfo::theInfo = {
	CCTrCHPowerControlInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *ULDPCHPowerControlInfor4Fdd::itemsInfo[4] = {
	&DPCCHPowerOffset::theInfo,
	&PCPreamble::theInfo,
	&SRBdelay::theInfo,
	&PowerControlAlgorithm::theInfo,
};
bool ULDPCHPowerControlInfor4Fdd::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const ULDPCHPowerControlInfor4Fdd::Info ULDPCHPowerControlInfor4Fdd::theInfo = {
	ULDPCHPowerControlInfor4Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 0, 0
};

const void *ULDPCHPowerControlInfor4TddUlOLPCSignallingIndividuallySignalledTddOptionTdd384::itemsInfo[2] = {
	&IndividualTSInterferenceList::theInfo,
	&ConstantValue::theInfo,
};
bool ULDPCHPowerControlInfor4TddUlOLPCSignallingIndividuallySignalledTddOptionTdd384::itemsPres[2] = {
	1,
	1,
};
const ULDPCHPowerControlInfor4TddUlOLPCSignallingIndividuallySignalledTddOptionTdd384::Info ULDPCHPowerControlInfor4TddUlOLPCSignallingIndividuallySignalledTddOptionTdd384::theInfo = {
	ULDPCHPowerControlInfor4TddUlOLPCSignallingIndividuallySignalledTddOptionTdd384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *ULDPCHPowerControlInfor4TddUlOLPCSignallingIndividuallySignalledTddOptionTdd128::itemsInfo[1] = {
	&TPCStepSizeTDD::theInfo,
};
bool ULDPCHPowerControlInfor4TddUlOLPCSignallingIndividuallySignalledTddOptionTdd128::itemsPres[1] = {
	1,
};
const ULDPCHPowerControlInfor4TddUlOLPCSignallingIndividuallySignalledTddOptionTdd128::Info ULDPCHPowerControlInfor4TddUlOLPCSignallingIndividuallySignalledTddOptionTdd128::theInfo = {
	ULDPCHPowerControlInfor4TddUlOLPCSignallingIndividuallySignalledTddOptionTdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ULDPCHPowerControlInfor4TddUlOLPCSignallingIndividuallySignalledTddOption::choicesInfo[2] = {
	&ULDPCHPowerControlInfor4TddUlOLPCSignallingIndividuallySignalledTddOptionTdd384::theInfo,
	&ULDPCHPowerControlInfor4TddUlOLPCSignallingIndividuallySignalledTddOptionTdd128::theInfo,
};
const ULDPCHPowerControlInfor4TddUlOLPCSignallingIndividuallySignalledTddOption::Info ULDPCHPowerControlInfor4TddUlOLPCSignallingIndividuallySignalledTddOption::theInfo = {
	ULDPCHPowerControlInfor4TddUlOLPCSignallingIndividuallySignalledTddOption::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULDPCHPowerControlInfor4TddUlOLPCSignallingIndividuallySignalled::itemsInfo[2] = {
	&ULDPCHPowerControlInfor4TddUlOLPCSignallingIndividuallySignalledTddOption::theInfo,
	&PrimaryCCPCHTXPower::theInfo,
};
bool ULDPCHPowerControlInfor4TddUlOLPCSignallingIndividuallySignalled::itemsPres[2] = {
	1,
	1,
};
const ULDPCHPowerControlInfor4TddUlOLPCSignallingIndividuallySignalled::Info ULDPCHPowerControlInfor4TddUlOLPCSignallingIndividuallySignalled::theInfo = {
	ULDPCHPowerControlInfor4TddUlOLPCSignallingIndividuallySignalled::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *ULDPCHPowerControlInfor4TddUlOLPCSignalling::choicesInfo[2] = {
	&ULDPCHPowerControlInfor4TddUlOLPCSignallingBroadcastULOLPCinfo::theInfo,
	&ULDPCHPowerControlInfor4TddUlOLPCSignallingIndividuallySignalled::theInfo,
};
const ULDPCHPowerControlInfor4TddUlOLPCSignalling::Info ULDPCHPowerControlInfor4TddUlOLPCSignalling::theInfo = {
	ULDPCHPowerControlInfor4TddUlOLPCSignalling::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULDPCHPowerControlInfor4Tdd::itemsInfo[2] = {
	&ULTargetSIR::theInfo,
	&ULDPCHPowerControlInfor4TddUlOLPCSignalling::theInfo,
};
bool ULDPCHPowerControlInfor4Tdd::itemsPres[2] = {
	0,
	1,
};
const ULDPCHPowerControlInfor4Tdd::Info ULDPCHPowerControlInfor4Tdd::theInfo = {
	ULDPCHPowerControlInfor4Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *ULDPCHPowerControlInfor4::choicesInfo[2] = {
	&ULDPCHPowerControlInfor4Fdd::theInfo,
	&ULDPCHPowerControlInfor4Tdd::theInfo,
};
const ULDPCHPowerControlInfor4::Info ULDPCHPowerControlInfor4::theInfo = {
	ULDPCHPowerControlInfor4::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *CCTrCHPowerControlInfor4::itemsInfo[2] = {
	&TFCSIdentity::theInfo,
	&ULDPCHPowerControlInfor4::theInfo,
};
bool CCTrCHPowerControlInfor4::itemsPres[2] = {
	0,
	1,
};
const CCTrCHPowerControlInfor4::Info CCTrCHPowerControlInfor4::theInfo = {
	CCTrCHPowerControlInfor4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *ULDPCHPowerControlInfor5Fdd::itemsInfo[7] = {
	&DPCCHPowerOffset::theInfo,
	&PCPreamble::theInfo,
	&SRBdelay::theInfo,
	&PowerControlAlgorithm::theInfo,
	&DeltaACK::theInfo,
	&DeltaNACK::theInfo,
	&ACKNACKrepetitionFactor::theInfo,
};
bool ULDPCHPowerControlInfor5Fdd::itemsPres[7] = {
	1,
	1,
	1,
	1,
	0,
	0,
	0,
};
const ULDPCHPowerControlInfor5Fdd::Info ULDPCHPowerControlInfor5Fdd::theInfo = {
	ULDPCHPowerControlInfor5Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	7, 3, 0
};

const void *ULDPCHPowerControlInfor5TddUlOLPCSignallingIndividuallySignalledTddOptionTdd384::itemsInfo[2] = {
	&IndividualTSInterferenceList::theInfo,
	&ConstantValue::theInfo,
};
bool ULDPCHPowerControlInfor5TddUlOLPCSignallingIndividuallySignalledTddOptionTdd384::itemsPres[2] = {
	1,
	1,
};
const ULDPCHPowerControlInfor5TddUlOLPCSignallingIndividuallySignalledTddOptionTdd384::Info ULDPCHPowerControlInfor5TddUlOLPCSignallingIndividuallySignalledTddOptionTdd384::theInfo = {
	ULDPCHPowerControlInfor5TddUlOLPCSignallingIndividuallySignalledTddOptionTdd384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *ULDPCHPowerControlInfor5TddUlOLPCSignallingIndividuallySignalledTddOptionTdd128::itemsInfo[1] = {
	&TPCStepSizeTDD::theInfo,
};
bool ULDPCHPowerControlInfor5TddUlOLPCSignallingIndividuallySignalledTddOptionTdd128::itemsPres[1] = {
	1,
};
const ULDPCHPowerControlInfor5TddUlOLPCSignallingIndividuallySignalledTddOptionTdd128::Info ULDPCHPowerControlInfor5TddUlOLPCSignallingIndividuallySignalledTddOptionTdd128::theInfo = {
	ULDPCHPowerControlInfor5TddUlOLPCSignallingIndividuallySignalledTddOptionTdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ULDPCHPowerControlInfor5TddUlOLPCSignallingIndividuallySignalledTddOption::choicesInfo[2] = {
	&ULDPCHPowerControlInfor5TddUlOLPCSignallingIndividuallySignalledTddOptionTdd384::theInfo,
	&ULDPCHPowerControlInfor5TddUlOLPCSignallingIndividuallySignalledTddOptionTdd128::theInfo,
};
const ULDPCHPowerControlInfor5TddUlOLPCSignallingIndividuallySignalledTddOption::Info ULDPCHPowerControlInfor5TddUlOLPCSignallingIndividuallySignalledTddOption::theInfo = {
	ULDPCHPowerControlInfor5TddUlOLPCSignallingIndividuallySignalledTddOption::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULDPCHPowerControlInfor5TddUlOLPCSignallingIndividuallySignalled::itemsInfo[2] = {
	&ULDPCHPowerControlInfor5TddUlOLPCSignallingIndividuallySignalledTddOption::theInfo,
	&PrimaryCCPCHTXPower::theInfo,
};
bool ULDPCHPowerControlInfor5TddUlOLPCSignallingIndividuallySignalled::itemsPres[2] = {
	1,
	1,
};
const ULDPCHPowerControlInfor5TddUlOLPCSignallingIndividuallySignalled::Info ULDPCHPowerControlInfor5TddUlOLPCSignallingIndividuallySignalled::theInfo = {
	ULDPCHPowerControlInfor5TddUlOLPCSignallingIndividuallySignalled::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *ULDPCHPowerControlInfor5TddUlOLPCSignalling::choicesInfo[2] = {
	&ULDPCHPowerControlInfor5TddUlOLPCSignallingBroadcastULOLPCinfo::theInfo,
	&ULDPCHPowerControlInfor5TddUlOLPCSignallingIndividuallySignalled::theInfo,
};
const ULDPCHPowerControlInfor5TddUlOLPCSignalling::Info ULDPCHPowerControlInfor5TddUlOLPCSignalling::theInfo = {
	ULDPCHPowerControlInfor5TddUlOLPCSignalling::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULDPCHPowerControlInfor5Tdd::itemsInfo[2] = {
	&ULTargetSIR::theInfo,
	&ULDPCHPowerControlInfor5TddUlOLPCSignalling::theInfo,
};
bool ULDPCHPowerControlInfor5Tdd::itemsPres[2] = {
	0,
	1,
};
const ULDPCHPowerControlInfor5Tdd::Info ULDPCHPowerControlInfor5Tdd::theInfo = {
	ULDPCHPowerControlInfor5Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *ULDPCHPowerControlInfor5::choicesInfo[2] = {
	&ULDPCHPowerControlInfor5Fdd::theInfo,
	&ULDPCHPowerControlInfor5Tdd::theInfo,
};
const ULDPCHPowerControlInfor5::Info ULDPCHPowerControlInfor5::theInfo = {
	ULDPCHPowerControlInfor5::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *CCTrCHPowerControlInfor5::itemsInfo[2] = {
	&TFCSIdentity::theInfo,
	&ULDPCHPowerControlInfor5::theInfo,
};
bool CCTrCHPowerControlInfor5::itemsPres[2] = {
	0,
	1,
};
const CCTrCHPowerControlInfor5::Info CCTrCHPowerControlInfor5::theInfo = {
	CCTrCHPowerControlInfor5::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *ULDPCHPowerControlInfor7Fdd::itemsInfo[8] = {
	&DPCCHPowerOffset::theInfo,
	&PCPreamble::theInfo,
	&SRBdelay::theInfo,
	&PowerControlAlgorithm::theInfo,
	&DeltaACK::theInfo,
	&DeltaNACK::theInfo,
	&ACKNACKrepetitionFactor::theInfo,
	&HARQPreambleMode::theInfo,
};
bool ULDPCHPowerControlInfor7Fdd::itemsPres[8] = {
	1,
	1,
	1,
	1,
	0,
	0,
	0,
	1,
};
const ULDPCHPowerControlInfor7Fdd::Info ULDPCHPowerControlInfor7Fdd::theInfo = {
	ULDPCHPowerControlInfor7Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	8, 3, 0
};

const void *ULDPCHPowerControlInfor7TddUlOLPCSignallingIndividuallySignalledTddOptionTdd384::itemsInfo[2] = {
	&IndividualTSInterferenceList::theInfo,
	&ConstantValue::theInfo,
};
bool ULDPCHPowerControlInfor7TddUlOLPCSignallingIndividuallySignalledTddOptionTdd384::itemsPres[2] = {
	1,
	1,
};
const ULDPCHPowerControlInfor7TddUlOLPCSignallingIndividuallySignalledTddOptionTdd384::Info ULDPCHPowerControlInfor7TddUlOLPCSignallingIndividuallySignalledTddOptionTdd384::theInfo = {
	ULDPCHPowerControlInfor7TddUlOLPCSignallingIndividuallySignalledTddOptionTdd384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *ULDPCHPowerControlInfor7TddUlOLPCSignallingIndividuallySignalledTddOptionTdd768::itemsInfo[2] = {
	&IndividualTSInterferenceList::theInfo,
	&ConstantValue::theInfo,
};
bool ULDPCHPowerControlInfor7TddUlOLPCSignallingIndividuallySignalledTddOptionTdd768::itemsPres[2] = {
	1,
	1,
};
const ULDPCHPowerControlInfor7TddUlOLPCSignallingIndividuallySignalledTddOptionTdd768::Info ULDPCHPowerControlInfor7TddUlOLPCSignallingIndividuallySignalledTddOptionTdd768::theInfo = {
	ULDPCHPowerControlInfor7TddUlOLPCSignallingIndividuallySignalledTddOptionTdd768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *ULDPCHPowerControlInfor7TddUlOLPCSignallingIndividuallySignalledTddOptionTdd128::itemsInfo[2] = {
	&BEACONPLEst::theInfo,
	&TPCStepSizeTDD::theInfo,
};
bool ULDPCHPowerControlInfor7TddUlOLPCSignallingIndividuallySignalledTddOptionTdd128::itemsPres[2] = {
	0,
	1,
};
const ULDPCHPowerControlInfor7TddUlOLPCSignallingIndividuallySignalledTddOptionTdd128::Info ULDPCHPowerControlInfor7TddUlOLPCSignallingIndividuallySignalledTddOptionTdd128::theInfo = {
	ULDPCHPowerControlInfor7TddUlOLPCSignallingIndividuallySignalledTddOptionTdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *ULDPCHPowerControlInfor7TddUlOLPCSignallingIndividuallySignalledTddOption::choicesInfo[3] = {
	&ULDPCHPowerControlInfor7TddUlOLPCSignallingIndividuallySignalledTddOptionTdd384::theInfo,
	&ULDPCHPowerControlInfor7TddUlOLPCSignallingIndividuallySignalledTddOptionTdd768::theInfo,
	&ULDPCHPowerControlInfor7TddUlOLPCSignallingIndividuallySignalledTddOptionTdd128::theInfo,
};
const ULDPCHPowerControlInfor7TddUlOLPCSignallingIndividuallySignalledTddOption::Info ULDPCHPowerControlInfor7TddUlOLPCSignallingIndividuallySignalledTddOption::theInfo = {
	ULDPCHPowerControlInfor7TddUlOLPCSignallingIndividuallySignalledTddOption::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *ULDPCHPowerControlInfor7TddUlOLPCSignallingIndividuallySignalled::itemsInfo[2] = {
	&ULDPCHPowerControlInfor7TddUlOLPCSignallingIndividuallySignalledTddOption::theInfo,
	&PrimaryCCPCHTXPower::theInfo,
};
bool ULDPCHPowerControlInfor7TddUlOLPCSignallingIndividuallySignalled::itemsPres[2] = {
	1,
	1,
};
const ULDPCHPowerControlInfor7TddUlOLPCSignallingIndividuallySignalled::Info ULDPCHPowerControlInfor7TddUlOLPCSignallingIndividuallySignalled::theInfo = {
	ULDPCHPowerControlInfor7TddUlOLPCSignallingIndividuallySignalled::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *ULDPCHPowerControlInfor7TddUlOLPCSignalling::choicesInfo[2] = {
	&ULDPCHPowerControlInfor7TddUlOLPCSignallingBroadcastULOLPCinfo::theInfo,
	&ULDPCHPowerControlInfor7TddUlOLPCSignallingIndividuallySignalled::theInfo,
};
const ULDPCHPowerControlInfor7TddUlOLPCSignalling::Info ULDPCHPowerControlInfor7TddUlOLPCSignalling::theInfo = {
	ULDPCHPowerControlInfor7TddUlOLPCSignalling::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULDPCHPowerControlInfor7Tdd::itemsInfo[2] = {
	&ULTargetSIR::theInfo,
	&ULDPCHPowerControlInfor7TddUlOLPCSignalling::theInfo,
};
bool ULDPCHPowerControlInfor7Tdd::itemsPres[2] = {
	0,
	1,
};
const ULDPCHPowerControlInfor7Tdd::Info ULDPCHPowerControlInfor7Tdd::theInfo = {
	ULDPCHPowerControlInfor7Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *ULDPCHPowerControlInfor7::choicesInfo[2] = {
	&ULDPCHPowerControlInfor7Fdd::theInfo,
	&ULDPCHPowerControlInfor7Tdd::theInfo,
};
const ULDPCHPowerControlInfor7::Info ULDPCHPowerControlInfor7::theInfo = {
	ULDPCHPowerControlInfor7::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *CCTrCHPowerControlInfor7::itemsInfo[2] = {
	&TFCSIdentity::theInfo,
	&ULDPCHPowerControlInfor7::theInfo,
};
bool CCTrCHPowerControlInfor7::itemsPres[2] = {
	0,
	1,
};
const CCTrCHPowerControlInfor7::Info CCTrCHPowerControlInfor7::theInfo = {
	CCTrCHPowerControlInfor7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *CellAndChannelIdentity::itemsInfo[4] = {
	&BurstType::theInfo,
	&MidambleShiftLong::theInfo,
	&TimeslotNumber::theInfo,
	&CellParametersID::theInfo,
};
bool CellAndChannelIdentity::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const CellAndChannelIdentity::Info CellAndChannelIdentity::theInfo = {
	CellAndChannelIdentity::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 0, 0
};

const void *ChannelAssignmentActive::choicesInfo[2] = {
	&ChannelAssignmentActiveNotActive::theInfo,
	&AvailableMinimumSFListVCAM::theInfo,
};
const ChannelAssignmentActive::Info ChannelAssignmentActive::theInfo = {
	ChannelAssignmentActive::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ChannelReqParamsForUCSM::itemsInfo[2] = {
	&AvailableAPSignatureList::theInfo,
	&AvailableAPSubchannelList::theInfo,
};
bool ChannelReqParamsForUCSM::itemsPres[2] = {
	1,
	0,
};
const ChannelReqParamsForUCSM::Info ChannelReqParamsForUCSM::theInfo = {
	ChannelReqParamsForUCSM::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *PDSCHCodeMap::itemsInfo[4] = {
	&SFPDSCH::theInfo,
	&MultiCodeInfo::theInfo,
	&CodeNumberDSCH::theInfo,
	&CodeNumberDSCH::theInfo,
};
bool PDSCHCodeMap::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const PDSCHCodeMap::Info PDSCHCodeMap::theInfo = {
	PDSCHCodeMap::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 0, 0
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

const void *CodeResourceInformationTDD128::itemsInfo[2] = {
	&HSChannelisationCodeLCR::theInfo,
	&HSChannelisationCodeLCR::theInfo,
};
bool CodeResourceInformationTDD128::itemsPres[2] = {
	1,
	1,
};
const CodeResourceInformationTDD128::Info CodeResourceInformationTDD128::theInfo = {
	CodeResourceInformationTDD128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
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

const void *EHICHInformationCommonEdch::itemsInfo[2] = {
	&EHICHChannelisationCode::theInfo,
	&EHICHRGCHSignatureSequence::theInfo,
};
bool EHICHInformationCommonEdch::itemsPres[2] = {
	0,
	0,
};
const EHICHInformationCommonEdch::Info EHICHInformationCommonEdch::theInfo = {
	EHICHInformationCommonEdch::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *ULDPCHCodeInfoForCommonEDCH::itemsInfo[2] = {
	&ScramblingCodeType::theInfo,
	&ULScramblingCode::theInfo,
};
bool ULDPCHCodeInfoForCommonEDCH::itemsPres[2] = {
	1,
	0,
};
const ULDPCHCodeInfoForCommonEDCH::Info ULDPCHCodeInfoForCommonEDCH::theInfo = {
	ULDPCHCodeInfoForCommonEDCH::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *CommonEDCHResourceInfoList::itemsInfo[5] = {
	&CommonEDCHResourceInfoListSoffset::theInfo,
	&CommonEDCHResourceInfoListFdpchChannelisationCodeNumber::theInfo,
	&ERGCHInformationCommonEdch::theInfo,
	&EHICHInformationCommonEdch::theInfo,
	&ULDPCHCodeInfoForCommonEDCH::theInfo,
};
bool CommonEDCHResourceInfoList::itemsPres[5] = {
	0,
	0,
	0,
	1,
	1,
};
const CommonEDCHResourceInfoList::Info CommonEDCHResourceInfoList::theInfo = {
	CommonEDCHResourceInfoList::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 3, 0
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

const void *CommonEDCHSystemInfoModeSpecificInfoDummy::itemsInfo[0] = {
};
bool CommonEDCHSystemInfoModeSpecificInfoDummy::itemsPres[0] = {
};
const CommonEDCHSystemInfoModeSpecificInfoDummy::Info CommonEDCHSystemInfoModeSpecificInfoDummy::theInfo = {
	CommonEDCHSystemInfoModeSpecificInfoDummy::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *SYNCULInfoForERUCCH::itemsInfo[5] = {
	&SYNCULInfoForERUCCHPrxUpPCHdes::theInfo,
	&SYNCULInfoForERUCCHPowerRampStep::theInfo,
	&SYNCULInfoForERUCCHmax_SYNC_UL_Transmissions::theInfo,
	&SyncULCodesBitmap::theInfo,
	&SYNCULInfoForERUCCHMmax::theInfo,
};
bool SYNCULInfoForERUCCH::itemsPres[5] = {
	0,
	0,
	0,
	1,
	1,
};
const SYNCULInfoForERUCCH::Info SYNCULInfoForERUCCH::theInfo = {
	SYNCULInfoForERUCCH::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 3, 0
};

const void *MidambleShiftAndBurstTypeLCRr4MidambleAllocationModeUeSpecificMidamble::itemsInfo[1] = {
	&MidambleShiftAndBurstTypeLCRr4MidambleAllocationModeUeSpecificMidambleMidambleShift::theInfo,
};
bool MidambleShiftAndBurstTypeLCRr4MidambleAllocationModeUeSpecificMidamble::itemsPres[1] = {
	1,
};
const MidambleShiftAndBurstTypeLCRr4MidambleAllocationModeUeSpecificMidamble::Info MidambleShiftAndBurstTypeLCRr4MidambleAllocationModeUeSpecificMidamble::theInfo = {
	MidambleShiftAndBurstTypeLCRr4MidambleAllocationModeUeSpecificMidamble::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MidambleShiftAndBurstTypeLCRr4MidambleAllocationMode::choicesInfo[3] = {
	&MidambleShiftAndBurstTypeLCRr4MidambleAllocationModeDefaultMidamble::theInfo,
	&MidambleShiftAndBurstTypeLCRr4MidambleAllocationModeCommonMidamble::theInfo,
	&MidambleShiftAndBurstTypeLCRr4MidambleAllocationModeUeSpecificMidamble::theInfo,
};
const MidambleShiftAndBurstTypeLCRr4MidambleAllocationMode::Info MidambleShiftAndBurstTypeLCRr4MidambleAllocationMode::theInfo = {
	MidambleShiftAndBurstTypeLCRr4MidambleAllocationMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *MidambleShiftAndBurstTypeLCRr4::itemsInfo[2] = {
	&MidambleShiftAndBurstTypeLCRr4MidambleAllocationMode::theInfo,
	&MidambleShiftAndBurstTypeLCRr4MidambleConfiguration::theInfo,
};
bool MidambleShiftAndBurstTypeLCRr4::itemsPres[2] = {
	1,
	1,
};
const MidambleShiftAndBurstTypeLCRr4::Info MidambleShiftAndBurstTypeLCRr4::theInfo = {
	MidambleShiftAndBurstTypeLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *FPACHInfor4::itemsInfo[4] = {
	&TimeslotNumberLCRr4::theInfo,
	&TDDFPACHCCode16r4::theInfo,
	&MidambleShiftAndBurstTypeLCRr4::theInfo,
	&WiLCR::theInfo,
};
bool FPACHInfor4::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const FPACHInfor4::Info FPACHInfor4::theInfo = {
	FPACHInfor4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 0, 0
};

const void *PRACHInformationLCR::itemsInfo[4] = {
	&TimeslotNumberPRACHLCRr4::theInfo,
	&PRACHChanCodesListLCR::theInfo,
	&MidambleShiftAndBurstTypeLCRr4::theInfo,
	&FPACHInfor4::theInfo,
};
bool PRACHInformationLCR::itemsPres[4] = {
	1,
	1,
	1,
	0,
};
const PRACHInformationLCR::Info PRACHInformationLCR::theInfo = {
	PRACHInformationLCR::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 1, 0
};

const void *ERUCCHInfoTDD128::itemsInfo[9] = {
	&ERUCCHInfoTDD128t_RUCCH::theInfo,
	&ERUCCHInfoTDD128NRUCCH::theInfo,
	&ERUCCHInfoTDD128t_WAIT::theInfo,
	&ERUCCHInfoTDD128t_SI::theInfo,
	&ERUCCHInfoTDD128ExtendedEstimationWindow::theInfo,
	&ERUCCHAccessServiceClass::theInfo,
	&PersistenceScalingFactorList::theInfo,
	&SYNCULInfoForERUCCH::theInfo,
	&PRACHInformationLCRList::theInfo,
};
bool ERUCCHInfoTDD128::itemsPres[9] = {
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
const ERUCCHInfoTDD128::Info ERUCCHInfoTDD128::theInfo = {
	ERUCCHInfoTDD128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	9, 9, 0
};

const void *ReferenceBetaQPSK::itemsInfo[2] = {
	&ReferenceBetaQPSKReferenceCodeRate::theInfo,
	&ReferenceBetaQPSKReferenceBeta::theInfo,
};
bool ReferenceBetaQPSK::itemsPres[2] = {
	1,
	1,
};
const ReferenceBetaQPSK::Info ReferenceBetaQPSK::theInfo = {
	ReferenceBetaQPSK::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *ReferenceBeta16QAM::itemsInfo[2] = {
	&ReferenceBeta16QAMReferenceCodeRate::theInfo,
	&ReferenceBeta16QAMReferenceBeta::theInfo,
};
bool ReferenceBeta16QAM::itemsPres[2] = {
	1,
	1,
};
const ReferenceBeta16QAM::Info ReferenceBeta16QAM::theInfo = {
	ReferenceBeta16QAM::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *ETFCSInfo::itemsInfo[2] = {
	&ETFCSInfoReferenceBetaQPSKList::theInfo,
	&ETFCSInfoReferenceBeta16QAMList::theInfo,
};
bool ETFCSInfo::itemsPres[2] = {
	1,
	1,
};
const ETFCSInfo::Info ETFCSInfo::theInfo = {
	ETFCSInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *ULSynchronisationParametersr4::itemsInfo[2] = {
	&ULSynchronisationParametersr4StepSize::theInfo,
	&ULSynchronisationParametersr4Frequency::theInfo,
};
bool ULSynchronisationParametersr4::itemsPres[2] = {
	1,
	1,
};
const ULSynchronisationParametersr4::Info ULSynchronisationParametersr4::theInfo = {
	ULSynchronisationParametersr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *EPUCHTSSlotsLCRMidambleAllocationMode::choicesInfo[2] = {
	&EPUCHTSSlotsLCRMidambleAllocationModeDefaultMidamble::theInfo,
	&EPUCHTSSlotsLCRMidambleAllocationModeUeSpecificMidamble::theInfo,
};
const EPUCHTSSlotsLCRMidambleAllocationMode::Info EPUCHTSSlotsLCRMidambleAllocationMode::theInfo = {
	EPUCHTSSlotsLCRMidambleAllocationMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *EPUCHTSSlotsLCR::itemsInfo[3] = {
	&TimeslotNumberLCRr4::theInfo,
	&EPUCHTSSlotsLCRMidambleAllocationMode::theInfo,
	&EPUCHTSSlotsLCRMidambleConfiguration::theInfo,
};
bool EPUCHTSSlotsLCR::itemsPres[3] = {
	1,
	1,
	1,
};
const EPUCHTSSlotsLCR::Info EPUCHTSSlotsLCR::theInfo = {
	EPUCHTSSlotsLCR::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *EPUCHInfoTDD128::itemsInfo[13] = {
	&ETFCSInfo::theInfo,
	&EPUCHInfoTDD128snpl_ReportType::theInfo,
	&EPUCHInfoTDD128PrxBASEdes::theInfo,
	&EPUCHInfoTDD128BeaconPLEst::theInfo,
	&TPCStepSizeTDD::theInfo,
	&EPUCHInfoTDD128PebasePowerControlGAP::theInfo,
	&ULSynchronisationParametersr4::theInfo,
	&EPUCHInfoTDD128EPUCHTSConfigurationList::theInfo,
	&EPUCHInfoTDD128MinimumAllowedCodeRate::theInfo,
	&EPUCHInfoTDD128MaximumAllowedCodeRate::theInfo,
	&EPUCHInfoTDD128MaximumNumOfRetransSchedInfo::theInfo,
	&EPUCHInfoTDD128retransTimerForSchedInfo::theInfo,
	&EPUCHInfoTDD128Dummy::theInfo,
};
bool EPUCHInfoTDD128::itemsPres[13] = {
	1,
	0,
	1,
	0,
	1,
	0,
	0,
	1,
	1,
	1,
	1,
	1,
	0,
};
const EPUCHInfoTDD128::Info EPUCHInfoTDD128::theInfo = {
	EPUCHInfoTDD128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	13, 5, 0
};

const void *EHICHInformationLCRMidambleAllocationMode::choicesInfo[2] = {
	&EHICHInformationLCRMidambleAllocationModeDefaultMidamble::theInfo,
	&EHICHInformationLCRMidambleAllocationModeUeSpecificMidamble::theInfo,
};
const EHICHInformationLCRMidambleAllocationMode::Info EHICHInformationLCRMidambleAllocationMode::theInfo = {
	EHICHInformationLCRMidambleAllocationMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *EHICHInformationLCR::itemsInfo[5] = {
	&EHICHInformationLCREi::theInfo,
	&TimeslotNumberLCRr4::theInfo,
	&HSChannelisationCodeLCR::theInfo,
	&EHICHInformationLCRMidambleAllocationMode::theInfo,
	&EHICHInformationLCRMidambleConfiguration::theInfo,
};
bool EHICHInformationLCR::itemsPres[5] = {
	1,
	1,
	1,
	1,
	1,
};
const EHICHInformationLCR::Info EHICHInformationLCR::theInfo = {
	EHICHInformationLCR::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 0, 0
};

const void *EHICHInformationTDD128::itemsInfo[2] = {
	&EHICHInformationTDD128NEHICH::theInfo,
	&EHICHInformationLCRList::theInfo,
};
bool EHICHInformationTDD128::itemsPres[2] = {
	1,
	1,
};
const EHICHInformationTDD128::Info EHICHInformationTDD128::theInfo = {
	EHICHInformationTDD128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *EAGCHIndividualLCRMidambleAllocationMode::choicesInfo[3] = {
	&EAGCHIndividualLCRMidambleAllocationModeDefaultMidamble::theInfo,
	&EAGCHIndividualLCRMidambleAllocationModeCommonMidamble::theInfo,
	&EAGCHIndividualLCRMidambleAllocationModeUeSpecificMidamble::theInfo,
};
const EAGCHIndividualLCRMidambleAllocationMode::Info EAGCHIndividualLCRMidambleAllocationMode::theInfo = {
	EAGCHIndividualLCRMidambleAllocationMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *EAGCHIndividualLCR::itemsInfo[5] = {
	&TimeslotNumberLCRr4::theInfo,
	&HSChannelisationCodeLCR::theInfo,
	&HSChannelisationCodeLCR::theInfo,
	&EAGCHIndividualLCRMidambleAllocationMode::theInfo,
	&EAGCHIndividualLCRMidambleConfiguration::theInfo,
};
bool EAGCHIndividualLCR::itemsPres[5] = {
	1,
	1,
	1,
	1,
	1,
};
const EAGCHIndividualLCR::Info EAGCHIndividualLCR::theInfo = {
	EAGCHIndividualLCR::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 0, 0
};

const void *EAGCHInformationTDD128::itemsInfo[4] = {
	&EAGCHInformationTDD128RdiIndicator::theInfo,
	&TPCStepSizeTDD::theInfo,
	&EAGCHSetConfigLCR::theInfo,
	&BlerTarget::theInfo,
};
bool EAGCHInformationTDD128::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const EAGCHInformationTDD128::Info EAGCHInformationTDD128::theInfo = {
	EAGCHInformationTDD128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 0, 0
};

const void *CommonEDCHSystemInfoModeSpecificInfoTddTdd128CcchtransmissionInfo::itemsInfo[4] = {
	&CommonERNTIInfo::theInfo,
	&CommonEDCHSystemInfoModeSpecificInfoTddTdd128CcchtransmissionInfoHarqMaximumNumberOfRetransmissions::theInfo,
	&CommonEDCHSystemInfoModeSpecificInfoTddTdd128CcchtransmissionInfoharq_retransmission_timer::theInfo,
	&CommonEDCHSystemInfoModeSpecificInfoTddTdd128CcchtransmissionInfoHarqpoweroffset::theInfo,
};
bool CommonEDCHSystemInfoModeSpecificInfoTddTdd128CcchtransmissionInfo::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const CommonEDCHSystemInfoModeSpecificInfoTddTdd128CcchtransmissionInfo::Info CommonEDCHSystemInfoModeSpecificInfoTddTdd128CcchtransmissionInfo::theInfo = {
	CommonEDCHSystemInfoModeSpecificInfoTddTdd128CcchtransmissionInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 0, 0
};

const void *CommonEDCHSystemInfoModeSpecificInfoTddTdd128::itemsInfo[6] = {
	&ERUCCHInfoTDD128::theInfo,
	&EPUCHInfoTDD128::theInfo,
	&EHICHInformationTDD128::theInfo,
	&EAGCHInformationTDD128::theInfo,
	&CommonEDCHSystemInfoModeSpecificInfoTddTdd128harq_Info::theInfo,
	&CommonEDCHSystemInfoModeSpecificInfoTddTdd128CcchtransmissionInfo::theInfo,
};
bool CommonEDCHSystemInfoModeSpecificInfoTddTdd128::itemsPres[6] = {
	1,
	1,
	1,
	1,
	1,
	1,
};
const CommonEDCHSystemInfoModeSpecificInfoTddTdd128::Info CommonEDCHSystemInfoModeSpecificInfoTddTdd128::theInfo = {
	CommonEDCHSystemInfoModeSpecificInfoTddTdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 0, 0
};

const void *CommonEDCHSystemInfoModeSpecificInfoTdd::choicesInfo[3] = {
	&CommonEDCHSystemInfoModeSpecificInfoTddTdd768::theInfo,
	&CommonEDCHSystemInfoModeSpecificInfoTddTdd384::theInfo,
	&CommonEDCHSystemInfoModeSpecificInfoTddTdd128::theInfo,
};
const CommonEDCHSystemInfoModeSpecificInfoTdd::Info CommonEDCHSystemInfoModeSpecificInfoTdd::theInfo = {
	CommonEDCHSystemInfoModeSpecificInfoTdd::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *CommonEDCHSystemInfoModeSpecificInfo::choicesInfo[2] = {
	&CommonEDCHSystemInfoModeSpecificInfoDummy::theInfo,
	&CommonEDCHSystemInfoModeSpecificInfoTdd::theInfo,
};
const CommonEDCHSystemInfoModeSpecificInfo::Info CommonEDCHSystemInfoModeSpecificInfo::theInfo = {
	CommonEDCHSystemInfoModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *CommonEDCHSystemInfo::itemsInfo[3] = {
	&ULInterference::theInfo,
	&CommonEDCHMACdFlowList::theInfo,
	&CommonEDCHSystemInfoModeSpecificInfo::theInfo,
};
bool CommonEDCHSystemInfo::itemsPres[3] = {
	0,
	1,
	1,
};
const CommonEDCHSystemInfo::Info CommonEDCHSystemInfo::theInfo = {
	CommonEDCHSystemInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};

const void *PRACHPartitioningr7::choicesInfo[2] = {
	&PRACHPartitioningr7Fdd::theInfo,
	&PRACHPartitioningr7Tdd::theInfo,
};
const PRACHPartitioningr7::Info PRACHPartitioningr7::theInfo = {
	PRACHPartitioningr7::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *PRACHPowerOffset::itemsInfo[2] = {
	&PowerRampStep::theInfo,
	&PreambleRetransMax::theInfo,
};
bool PRACHPowerOffset::itemsPres[2] = {
	1,
	1,
};
const PRACHPowerOffset::Info PRACHPowerOffset::theInfo = {
	PRACHPowerOffset::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *RACHTransmissionParameters::itemsInfo[3] = {
	&RACHTransmissionParametersMmax::theInfo,
	&NB01::theInfo,
	&NB01::theInfo,
};
bool RACHTransmissionParameters::itemsPres[3] = {
	1,
	1,
	1,
};
const RACHTransmissionParameters::Info RACHTransmissionParameters::theInfo = {
	RACHTransmissionParameters::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *PRACHPreambleForEnhancedUplink::itemsInfo[13] = {
	&AvailableSignatures::theInfo,
	&PRACHPreambleForEnhancedUplinkEaiIndication::theInfo,
	&PreambleScramblingCodeWordNumber::theInfo,
	&AvailableSubChannelNumbers::theInfo,
	&PRACHPartitioningr7::theInfo,
	&PersistenceScalingFactorList::theInfo,
	&ACToASCMappingTable::theInfo,
	&PrimaryCPICHTXPower::theInfo,
	&ConstantValue::theInfo,
	&PRACHPowerOffset::theInfo,
	&RACHTransmissionParameters::theInfo,
	&AICHInfo::theInfo,
	&PRACHPreambleForEnhancedUplinkPowerOffsetPpe::theInfo,
};
bool PRACHPreambleForEnhancedUplink::itemsPres[13] = {
	0,
	1,
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
	1,
};
const PRACHPreambleForEnhancedUplink::Info PRACHPreambleForEnhancedUplink::theInfo = {
	PRACHPreambleForEnhancedUplink::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	13, 11, 0
};

const void *ULDPCHpowerControlInfoForCommonEDCH::itemsInfo[4] = {
	&PowerControlAlgorithm::theInfo,
	&DeltaACK::theInfo,
	&DeltaNACK::theInfo,
	&ACKNACKrepetitionFactor::theInfo,
};
bool ULDPCHpowerControlInfoForCommonEDCH::itemsPres[4] = {
	1,
	0,
	0,
	0,
};
const ULDPCHpowerControlInfoForCommonEDCH::Info ULDPCHpowerControlInfoForCommonEDCH::theInfo = {
	ULDPCHpowerControlInfoForCommonEDCH::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 3, 0
};

const void *ETFCBoostInfor7::itemsInfo[2] = {
	&ETFCBoostInfor7ETFCIBoost::theInfo,
	&ETFCBoostInfor7DeltaT2TP::theInfo,
};
bool ETFCBoostInfor7::itemsPres[2] = {
	1,
	0,
};
const ETFCBoostInfor7::Info ETFCBoostInfor7::theInfo = {
	ETFCBoostInfor7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *EDPCCHInfor7::itemsInfo[4] = {
	&EDPCCHDPCCHPowerOffset::theInfo,
	&HappyBitDelayCondition::theInfo,
	&ETFCBoostInfor7::theInfo,
	&EDPDCHPowerInterpolation::theInfo,
};
bool EDPCCHInfor7::itemsPres[4] = {
	1,
	1,
	0,
	0,
};
const EDPCCHInfor7::Info EDPCCHInfor7::theInfo = {
	EDPCCHInfor7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
};

const void *EDPDCHReferenceETFCIr7::itemsInfo[2] = {
	&EDPDCHReferenceETFCIr7ReferenceETFCI::theInfo,
	&EDPDCHReferenceETFCIr7ReferenceETFCIPOr7::theInfo,
};
bool EDPDCHReferenceETFCIr7::itemsPres[2] = {
	1,
	1,
};
const EDPDCHReferenceETFCIr7::Info EDPDCHReferenceETFCIr7::theInfo = {
	EDPDCHReferenceETFCIr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *EDPDCHSchedulingInfoConfiguration::itemsInfo[3] = {
	&EDPDCHPeriodicyOfSchedInfo::theInfo,
	&EDPDCHPeriodicyOfSchedInfo::theInfo,
	&EDPDCHSchedulingInfoConfigurationPowerOffsetForSchedInfo::theInfo,
};
bool EDPDCHSchedulingInfoConfiguration::itemsPres[3] = {
	0,
	0,
	1,
};
const EDPDCHSchedulingInfoConfiguration::Info EDPDCHSchedulingInfoConfiguration::theInfo = {
	EDPDCHSchedulingInfoConfiguration::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *EDPDCHInfor8::itemsInfo[9] = {
	&ETFCITableIndex::theInfo,
	&EDCHMinimumSetETFCI::theInfo,
	&EDPDCHReferenceETFCIListr7::theInfo,
	&MinReducedEDPDCHGainFactor::theInfo,
	&EDPDCHMaxChannelisationCodes::theInfo,
	&EDPDCHPLNonMax::theInfo,
	&EDPDCHSchedulingInfoConfiguration::theInfo,
	&EDPDCHInfor8ThreeIndexStepThreshold::theInfo,
	&EDPDCHInfor8TwoIndexStepThreshold::theInfo,
};
bool EDPDCHInfor8::itemsPres[9] = {
	1,
	0,
	1,
	0,
	1,
	1,
	1,
	0,
	0,
};
const EDPDCHInfor8::Info EDPDCHInfor8::theInfo = {
	EDPDCHInfor8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	9, 4, 0
};

const void *CommonEDCHSystemInfoFDD::itemsInfo[18] = {
	&ULInterference::theInfo,
	&CommonEDCHMACdFlowList::theInfo,
	&PRACHPreambleForEnhancedUplink::theInfo,
	&CommonEDCHSystemInfoFDDInitialServingGrantValue::theInfo,
	&EDCHTTI::theInfo,
	&EAGCHInformation::theInfo,
	&CommonEDCHSystemInfoFDDharq_Info::theInfo,
	&ULDPCHpowerControlInfoForCommonEDCH::theInfo,
	&EDPCCHInfor7::theInfo,
	&EDPDCHInfor8::theInfo,
	&CommonEDCHSystemInfoFDDDlFDPCHTPCcommandErrorRate::theInfo,
	&CommonEDCHSystemInfoFDDAdditionalEDCHTransmitBackoff::theInfo,
	&CommonEDCHSystemInfoFDDmax_CCCH_ResourceAllocation::theInfo,
	&CommonEDCHSystemInfoFDDMaxPeriodForCollisionResolution::theInfo,
	&CommonEDCHSystemInfoFDDe_dch_TransmitContinuationOffset::theInfo,
	&CommonEDCHSystemInfoFDDAcknacksupportonHSDPCCH::theInfo,
	&MeasurementFeedbackInfor7::theInfo,
	&CommonEDCHSystemInfoFDDCommonEDCHResourceInfoList::theInfo,
};
bool CommonEDCHSystemInfoFDD::itemsPres[18] = {
	0,
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
	1,
	1,
	0,
	1,
};
const CommonEDCHSystemInfoFDD::Info CommonEDCHSystemInfoFDD::theInfo = {
	CommonEDCHSystemInfoFDD::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	18, 2, 0
};

const void *CommonTimeslotInfoMBMS::itemsInfo[3] = {
	&SecondInterleavingMode::theInfo,
	&TFCICoding::theInfo,
	&PuncturingLimit::theInfo,
};
bool CommonTimeslotInfoMBMS::itemsPres[3] = {
	1,
	0,
	1,
};
const CommonTimeslotInfoMBMS::Info CommonTimeslotInfoMBMS::theInfo = {
	CommonTimeslotInfoMBMS::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};

const void *RepetitionPeriodLengthAndOffsetRepetitionPeriod2::itemsInfo[2] = {
	&RepetitionPeriodLengthAndOffsetRepetitionPeriod2Length::theInfo,
	&RepetitionPeriodLengthAndOffsetRepetitionPeriod2Offset::theInfo,
};
bool RepetitionPeriodLengthAndOffsetRepetitionPeriod2::itemsPres[2] = {
	1,
	1,
};
const RepetitionPeriodLengthAndOffsetRepetitionPeriod2::Info RepetitionPeriodLengthAndOffsetRepetitionPeriod2::theInfo = {
	RepetitionPeriodLengthAndOffsetRepetitionPeriod2::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *RepetitionPeriodLengthAndOffsetRepetitionPeriod4::itemsInfo[2] = {
	&RepetitionPeriodLengthAndOffsetRepetitionPeriod4Length::theInfo,
	&RepetitionPeriodLengthAndOffsetRepetitionPeriod4Offset::theInfo,
};
bool RepetitionPeriodLengthAndOffsetRepetitionPeriod4::itemsPres[2] = {
	1,
	1,
};
const RepetitionPeriodLengthAndOffsetRepetitionPeriod4::Info RepetitionPeriodLengthAndOffsetRepetitionPeriod4::theInfo = {
	RepetitionPeriodLengthAndOffsetRepetitionPeriod4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *RepetitionPeriodLengthAndOffsetRepetitionPeriod8::itemsInfo[2] = {
	&RepetitionPeriodLengthAndOffsetRepetitionPeriod8Length::theInfo,
	&RepetitionPeriodLengthAndOffsetRepetitionPeriod8Offset::theInfo,
};
bool RepetitionPeriodLengthAndOffsetRepetitionPeriod8::itemsPres[2] = {
	1,
	1,
};
const RepetitionPeriodLengthAndOffsetRepetitionPeriod8::Info RepetitionPeriodLengthAndOffsetRepetitionPeriod8::theInfo = {
	RepetitionPeriodLengthAndOffsetRepetitionPeriod8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *RepetitionPeriodLengthAndOffsetRepetitionPeriod16::itemsInfo[2] = {
	&RepetitionPeriodLengthAndOffsetRepetitionPeriod16Length::theInfo,
	&RepetitionPeriodLengthAndOffsetRepetitionPeriod16Offset::theInfo,
};
bool RepetitionPeriodLengthAndOffsetRepetitionPeriod16::itemsPres[2] = {
	1,
	1,
};
const RepetitionPeriodLengthAndOffsetRepetitionPeriod16::Info RepetitionPeriodLengthAndOffsetRepetitionPeriod16::theInfo = {
	RepetitionPeriodLengthAndOffsetRepetitionPeriod16::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *RepetitionPeriodLengthAndOffsetRepetitionPeriod32::itemsInfo[2] = {
	&RepetitionPeriodLengthAndOffsetRepetitionPeriod32Length::theInfo,
	&RepetitionPeriodLengthAndOffsetRepetitionPeriod32Offset::theInfo,
};
bool RepetitionPeriodLengthAndOffsetRepetitionPeriod32::itemsPres[2] = {
	1,
	1,
};
const RepetitionPeriodLengthAndOffsetRepetitionPeriod32::Info RepetitionPeriodLengthAndOffsetRepetitionPeriod32::theInfo = {
	RepetitionPeriodLengthAndOffsetRepetitionPeriod32::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *RepetitionPeriodLengthAndOffsetRepetitionPeriod64::itemsInfo[2] = {
	&RepetitionPeriodLengthAndOffsetRepetitionPeriod64Length::theInfo,
	&RepetitionPeriodLengthAndOffsetRepetitionPeriod64Offset::theInfo,
};
bool RepetitionPeriodLengthAndOffsetRepetitionPeriod64::itemsPres[2] = {
	1,
	1,
};
const RepetitionPeriodLengthAndOffsetRepetitionPeriod64::Info RepetitionPeriodLengthAndOffsetRepetitionPeriod64::theInfo = {
	RepetitionPeriodLengthAndOffsetRepetitionPeriod64::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *RepetitionPeriodLengthAndOffset::choicesInfo[7] = {
	&RepetitionPeriodLengthAndOffsetRepetitionPeriod1::theInfo,
	&RepetitionPeriodLengthAndOffsetRepetitionPeriod2::theInfo,
	&RepetitionPeriodLengthAndOffsetRepetitionPeriod4::theInfo,
	&RepetitionPeriodLengthAndOffsetRepetitionPeriod8::theInfo,
	&RepetitionPeriodLengthAndOffsetRepetitionPeriod16::theInfo,
	&RepetitionPeriodLengthAndOffsetRepetitionPeriod32::theInfo,
	&RepetitionPeriodLengthAndOffsetRepetitionPeriod64::theInfo,
};
const RepetitionPeriodLengthAndOffset::Info RepetitionPeriodLengthAndOffset::theInfo = {
	RepetitionPeriodLengthAndOffset::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	6
};

const void *CommonTimeslotInfoSCCPCH::itemsInfo[4] = {
	&SecondInterleavingMode::theInfo,
	&TFCICoding::theInfo,
	&PuncturingLimit::theInfo,
	&RepetitionPeriodLengthAndOffset::theInfo,
};
bool CommonTimeslotInfoSCCPCH::itemsPres[4] = {
	1,
	0,
	1,
	0,
};
const CommonTimeslotInfoSCCPCH::Info CommonTimeslotInfoSCCPCH::theInfo = {
	CommonTimeslotInfoSCCPCH::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
};

const void *ControlChannelDRXInfoTDD128r8ControlChannelDrxOperationContinue::itemsInfo[1] = {
	&EnablingDelayTDD128::theInfo,
};
bool ControlChannelDRXInfoTDD128r8ControlChannelDrxOperationContinue::itemsPres[1] = {
	0,
};
const ControlChannelDRXInfoTDD128r8ControlChannelDrxOperationContinue::Info ControlChannelDRXInfoTDD128r8ControlChannelDrxOperationContinue::theInfo = {
	ControlChannelDRXInfoTDD128r8ControlChannelDrxOperationContinue::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *HSSCCHDRXInfoTDD128::itemsInfo[3] = {
	&ControlChannelDRXCycleTDD128::theInfo,
	&HSSCCHDRXInactivityThresholdTDD128::theInfo,
	&HSSCCHDRXInfoTDD128HSSCCHDRXOffset::theInfo,
};
bool HSSCCHDRXInfoTDD128::itemsPres[3] = {
	1,
	0,
	1,
};
const HSSCCHDRXInfoTDD128::Info HSSCCHDRXInfoTDD128::theInfo = {
	HSSCCHDRXInfoTDD128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};

const void *EAGCHDRXInfoTDD128EAGCHDRXInfoTypeEAGCHDRXParameters::itemsInfo[3] = {
	&ControlChannelDRXCycleTDD128::theInfo,
	&EAGCHInactivityMonitorThresholdTDD128::theInfo,
	&EAGCHDRXInfoTDD128EAGCHDRXInfoTypeEAGCHDRXParametersEAGCHDRXOffset::theInfo,
};
bool EAGCHDRXInfoTDD128EAGCHDRXInfoTypeEAGCHDRXParameters::itemsPres[3] = {
	1,
	0,
	1,
};
const EAGCHDRXInfoTDD128EAGCHDRXInfoTypeEAGCHDRXParameters::Info EAGCHDRXInfoTDD128EAGCHDRXInfoTypeEAGCHDRXParameters::theInfo = {
	EAGCHDRXInfoTDD128EAGCHDRXInfoTypeEAGCHDRXParameters::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};

const void *EAGCHDRXInfoTDD128EAGCHDRXInfoType::choicesInfo[2] = {
	&EAGCHDRXInfoTDD128EAGCHDRXInfoTypeSameAsHSSCCH::theInfo,
	&EAGCHDRXInfoTDD128EAGCHDRXInfoTypeEAGCHDRXParameters::theInfo,
};
const EAGCHDRXInfoTDD128EAGCHDRXInfoType::Info EAGCHDRXInfoTDD128EAGCHDRXInfoType::theInfo = {
	EAGCHDRXInfoTDD128EAGCHDRXInfoType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
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

const void *ControlChannelDRXInfoTDD128r8ControlChannelDrxOperationNewOperation::itemsInfo[3] = {
	&HSSCCHDRXInfoTDD128::theInfo,
	&EAGCHDRXInfoTDD128::theInfo,
	&EnablingDelayTDD128::theInfo,
};
bool ControlChannelDRXInfoTDD128r8ControlChannelDrxOperationNewOperation::itemsPres[3] = {
	1,
	0,
	1,
};
const ControlChannelDRXInfoTDD128r8ControlChannelDrxOperationNewOperation::Info ControlChannelDRXInfoTDD128r8ControlChannelDrxOperationNewOperation::theInfo = {
	ControlChannelDRXInfoTDD128r8ControlChannelDrxOperationNewOperation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};

const void *ControlChannelDRXInfoTDD128r8ControlChannelDrxOperation::choicesInfo[2] = {
	&ControlChannelDRXInfoTDD128r8ControlChannelDrxOperationContinue::theInfo,
	&ControlChannelDRXInfoTDD128r8ControlChannelDrxOperationNewOperation::theInfo,
};
const ControlChannelDRXInfoTDD128r8ControlChannelDrxOperation::Info ControlChannelDRXInfoTDD128r8ControlChannelDrxOperation::theInfo = {
	ControlChannelDRXInfoTDD128r8ControlChannelDrxOperation::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
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

const void *CPCHPersistenceLevels::itemsInfo[2] = {
	&CPCHSetID::theInfo,
	&DynamicPersistenceLevelTFList::theInfo,
};
bool CPCHPersistenceLevels::itemsPres[2] = {
	1,
	1,
};
const CPCHPersistenceLevels::Info CPCHPersistenceLevels::theInfo = {
	CPCHPersistenceLevels::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *UCSMInfo::itemsInfo[3] = {
	&MinimumSpreadingFactor::theInfo,
	&NFMax::theInfo,
	&ChannelReqParamsForUCSM::theInfo,
};
bool UCSMInfo::itemsPres[3] = {
	1,
	1,
	1,
};
const UCSMInfo::Info UCSMInfo::theInfo = {
	UCSMInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *PCPCHChannelInfo::itemsInfo[5] = {
	&PCPCHChannelInfoPcpchULScramblingCode::theInfo,
	&PCPCHChannelInfoPcpchDLChannelisationCode::theInfo,
	&SecondaryScramblingCode::theInfo,
	&PCPLength::theInfo,
	&UCSMInfo::theInfo,
};
bool PCPCHChannelInfo::itemsPres[5] = {
	1,
	1,
	0,
	1,
	0,
};
const PCPCHChannelInfo::Info PCPCHChannelInfo::theInfo = {
	PCPCHChannelInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 2, 0
};

const void *CPCHSetInfo::itemsInfo[16] = {
	&CPCHSetID::theInfo,
	&TransportFormatSet::theInfo,
	&TFCS::theInfo,
	&APPreambleScramblingCode::theInfo,
	&APAICHChannelisationCode::theInfo,
	&CDPreambleScramblingCode::theInfo,
	&CDCAICHChannelisationCode::theInfo,
	&CDAccessSlotSubchannelList::theInfo,
	&CDSignatureCodeList::theInfo,
	&DeltaPpm::theInfo,
	&ULDPCCHSlotFormat::theInfo,
	&NStartMessage::theInfo,
	&NEOT::theInfo,
	&ChannelAssignmentActive::theInfo,
	&CPCHStatusIndicationMode::theInfo,
	&PCPCHChannelInfoList::theInfo,
};
bool CPCHSetInfo::itemsPres[16] = {
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	0,
	0,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
};
const CPCHSetInfo::Info CPCHSetInfo::theInfo = {
	CPCHSetInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	16, 2, 0
};

const void *TimeInfo::itemsInfo[2] = {
	&ActivationTime::theInfo,
	&DurationTimeInfo::theInfo,
};
bool TimeInfo::itemsPres[2] = {
	0,
	0,
};
const TimeInfo::Info TimeInfo::theInfo = {
	TimeInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *MidambleShiftAndBurstTypeBurstTypeType1MidambleAllocationModeUeSpecificMidamble::itemsInfo[1] = {
	&MidambleShiftLong::theInfo,
};
bool MidambleShiftAndBurstTypeBurstTypeType1MidambleAllocationModeUeSpecificMidamble::itemsPres[1] = {
	1,
};
const MidambleShiftAndBurstTypeBurstTypeType1MidambleAllocationModeUeSpecificMidamble::Info MidambleShiftAndBurstTypeBurstTypeType1MidambleAllocationModeUeSpecificMidamble::theInfo = {
	MidambleShiftAndBurstTypeBurstTypeType1MidambleAllocationModeUeSpecificMidamble::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MidambleShiftAndBurstTypeBurstTypeType1MidambleAllocationMode::choicesInfo[3] = {
	&MidambleShiftAndBurstTypeBurstTypeType1MidambleAllocationModeDefaultMidamble::theInfo,
	&MidambleShiftAndBurstTypeBurstTypeType1MidambleAllocationModeCommonMidamble::theInfo,
	&MidambleShiftAndBurstTypeBurstTypeType1MidambleAllocationModeUeSpecificMidamble::theInfo,
};
const MidambleShiftAndBurstTypeBurstTypeType1MidambleAllocationMode::Info MidambleShiftAndBurstTypeBurstTypeType1MidambleAllocationMode::theInfo = {
	MidambleShiftAndBurstTypeBurstTypeType1MidambleAllocationMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *MidambleShiftAndBurstTypeBurstTypeType1::itemsInfo[2] = {
	&MidambleConfigurationBurstType1and3::theInfo,
	&MidambleShiftAndBurstTypeBurstTypeType1MidambleAllocationMode::theInfo,
};
bool MidambleShiftAndBurstTypeBurstTypeType1::itemsPres[2] = {
	1,
	1,
};
const MidambleShiftAndBurstTypeBurstTypeType1::Info MidambleShiftAndBurstTypeBurstTypeType1::theInfo = {
	MidambleShiftAndBurstTypeBurstTypeType1::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *MidambleShiftAndBurstTypeBurstTypeType2MidambleAllocationModeUeSpecificMidamble::itemsInfo[1] = {
	&MidambleShiftShort::theInfo,
};
bool MidambleShiftAndBurstTypeBurstTypeType2MidambleAllocationModeUeSpecificMidamble::itemsPres[1] = {
	1,
};
const MidambleShiftAndBurstTypeBurstTypeType2MidambleAllocationModeUeSpecificMidamble::Info MidambleShiftAndBurstTypeBurstTypeType2MidambleAllocationModeUeSpecificMidamble::theInfo = {
	MidambleShiftAndBurstTypeBurstTypeType2MidambleAllocationModeUeSpecificMidamble::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MidambleShiftAndBurstTypeBurstTypeType2MidambleAllocationMode::choicesInfo[3] = {
	&MidambleShiftAndBurstTypeBurstTypeType2MidambleAllocationModeDefaultMidamble::theInfo,
	&MidambleShiftAndBurstTypeBurstTypeType2MidambleAllocationModeCommonMidamble::theInfo,
	&MidambleShiftAndBurstTypeBurstTypeType2MidambleAllocationModeUeSpecificMidamble::theInfo,
};
const MidambleShiftAndBurstTypeBurstTypeType2MidambleAllocationMode::Info MidambleShiftAndBurstTypeBurstTypeType2MidambleAllocationMode::theInfo = {
	MidambleShiftAndBurstTypeBurstTypeType2MidambleAllocationMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *MidambleShiftAndBurstTypeBurstTypeType2::itemsInfo[2] = {
	&MidambleConfigurationBurstType2::theInfo,
	&MidambleShiftAndBurstTypeBurstTypeType2MidambleAllocationMode::theInfo,
};
bool MidambleShiftAndBurstTypeBurstTypeType2::itemsPres[2] = {
	1,
	1,
};
const MidambleShiftAndBurstTypeBurstTypeType2::Info MidambleShiftAndBurstTypeBurstTypeType2::theInfo = {
	MidambleShiftAndBurstTypeBurstTypeType2::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *MidambleShiftAndBurstTypeBurstTypeType3MidambleAllocationModeUeSpecificMidamble::itemsInfo[1] = {
	&MidambleShiftLong::theInfo,
};
bool MidambleShiftAndBurstTypeBurstTypeType3MidambleAllocationModeUeSpecificMidamble::itemsPres[1] = {
	1,
};
const MidambleShiftAndBurstTypeBurstTypeType3MidambleAllocationModeUeSpecificMidamble::Info MidambleShiftAndBurstTypeBurstTypeType3MidambleAllocationModeUeSpecificMidamble::theInfo = {
	MidambleShiftAndBurstTypeBurstTypeType3MidambleAllocationModeUeSpecificMidamble::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MidambleShiftAndBurstTypeBurstTypeType3MidambleAllocationMode::choicesInfo[2] = {
	&MidambleShiftAndBurstTypeBurstTypeType3MidambleAllocationModeDefaultMidamble::theInfo,
	&MidambleShiftAndBurstTypeBurstTypeType3MidambleAllocationModeUeSpecificMidamble::theInfo,
};
const MidambleShiftAndBurstTypeBurstTypeType3MidambleAllocationMode::Info MidambleShiftAndBurstTypeBurstTypeType3MidambleAllocationMode::theInfo = {
	MidambleShiftAndBurstTypeBurstTypeType3MidambleAllocationMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *MidambleShiftAndBurstTypeBurstTypeType3::itemsInfo[2] = {
	&MidambleConfigurationBurstType1and3::theInfo,
	&MidambleShiftAndBurstTypeBurstTypeType3MidambleAllocationMode::theInfo,
};
bool MidambleShiftAndBurstTypeBurstTypeType3::itemsPres[2] = {
	1,
	1,
};
const MidambleShiftAndBurstTypeBurstTypeType3::Info MidambleShiftAndBurstTypeBurstTypeType3::theInfo = {
	MidambleShiftAndBurstTypeBurstTypeType3::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *MidambleShiftAndBurstTypeBurstType::choicesInfo[3] = {
	&MidambleShiftAndBurstTypeBurstTypeType1::theInfo,
	&MidambleShiftAndBurstTypeBurstTypeType2::theInfo,
	&MidambleShiftAndBurstTypeBurstTypeType3::theInfo,
};
const MidambleShiftAndBurstTypeBurstType::Info MidambleShiftAndBurstTypeBurstType::theInfo = {
	MidambleShiftAndBurstTypeBurstType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
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

const void *IndividualTimeslotInfo::itemsInfo[3] = {
	&TimeslotNumber::theInfo,
	&IndividualTimeslotInfoTfciExistence::theInfo,
	&MidambleShiftAndBurstType::theInfo,
};
bool IndividualTimeslotInfo::itemsPres[3] = {
	1,
	1,
	1,
};
const IndividualTimeslotInfo::Info IndividualTimeslotInfo::theInfo = {
	IndividualTimeslotInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *DLTSChannelisationCodesShortCodesRepresentationConsecutive::itemsInfo[2] = {
	&DLTSChannelisationCode::theInfo,
	&DLTSChannelisationCode::theInfo,
};
bool DLTSChannelisationCodesShortCodesRepresentationConsecutive::itemsPres[2] = {
	1,
	1,
};
const DLTSChannelisationCodesShortCodesRepresentationConsecutive::Info DLTSChannelisationCodesShortCodesRepresentationConsecutive::theInfo = {
	DLTSChannelisationCodesShortCodesRepresentationConsecutive::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *DLTSChannelisationCodesShortCodesRepresentation::choicesInfo[2] = {
	&DLTSChannelisationCodesShortCodesRepresentationConsecutive::theInfo,
	&DLTSChannelisationCodesShortCodesRepresentationBitmap::theInfo,
};
const DLTSChannelisationCodesShortCodesRepresentation::Info DLTSChannelisationCodesShortCodesRepresentation::theInfo = {
	DLTSChannelisationCodesShortCodesRepresentation::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
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

const void *DownlinkAdditionalTimeslotsParametersSameAsLast::itemsInfo[1] = {
	&TimeslotNumber::theInfo,
};
bool DownlinkAdditionalTimeslotsParametersSameAsLast::itemsPres[1] = {
	1,
};
const DownlinkAdditionalTimeslotsParametersSameAsLast::Info DownlinkAdditionalTimeslotsParametersSameAsLast::theInfo = {
	DownlinkAdditionalTimeslotsParametersSameAsLast::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DownlinkAdditionalTimeslotsParametersNewParameters::itemsInfo[2] = {
	&IndividualTimeslotInfo::theInfo,
	&DLTSChannelisationCodesShort::theInfo,
};
bool DownlinkAdditionalTimeslotsParametersNewParameters::itemsPres[2] = {
	1,
	1,
};
const DownlinkAdditionalTimeslotsParametersNewParameters::Info DownlinkAdditionalTimeslotsParametersNewParameters::theInfo = {
	DownlinkAdditionalTimeslotsParametersNewParameters::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *DownlinkAdditionalTimeslotsParameters::choicesInfo[2] = {
	&DownlinkAdditionalTimeslotsParametersSameAsLast::theInfo,
	&DownlinkAdditionalTimeslotsParametersNewParameters::theInfo,
};
const DownlinkAdditionalTimeslotsParameters::Info DownlinkAdditionalTimeslotsParameters::theInfo = {
	DownlinkAdditionalTimeslotsParameters::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
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

const void *DownlinkTimeslotsCodesMoreTimeslotsAdditionalTimeslots::choicesInfo[2] = {
	&DownlinkTimeslotsCodesMoreTimeslotsAdditionalTimeslotsConsecutive::theInfo,
	&DownlinkTimeslotsCodesMoreTimeslotsAdditionalTimeslotsTimeslotList::theInfo,
};
const DownlinkTimeslotsCodesMoreTimeslotsAdditionalTimeslots::Info DownlinkTimeslotsCodesMoreTimeslotsAdditionalTimeslots::theInfo = {
	DownlinkTimeslotsCodesMoreTimeslotsAdditionalTimeslots::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DownlinkTimeslotsCodesMoreTimeslots::choicesInfo[2] = {
	&DownlinkTimeslotsCodesMoreTimeslotsNoMore::theInfo,
	&DownlinkTimeslotsCodesMoreTimeslotsAdditionalTimeslots::theInfo,
};
const DownlinkTimeslotsCodesMoreTimeslots::Info DownlinkTimeslotsCodesMoreTimeslots::theInfo = {
	DownlinkTimeslotsCodesMoreTimeslots::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DownlinkTimeslotsCodes::itemsInfo[3] = {
	&IndividualTimeslotInfo::theInfo,
	&DLTSChannelisationCodesShort::theInfo,
	&DownlinkTimeslotsCodesMoreTimeslots::theInfo,
};
bool DownlinkTimeslotsCodes::itemsPres[3] = {
	1,
	1,
	1,
};
const DownlinkTimeslotsCodes::Info DownlinkTimeslotsCodes::theInfo = {
	DownlinkTimeslotsCodes::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *DLCCTrCh::itemsInfo[5] = {
	&TFCSIdentityPlain::theInfo,
	&TimeInfo::theInfo,
	&CommonTimeslotInfo::theInfo,
	&DownlinkTimeslotsCodes::theInfo,
	&ULCCTrChTPCList::theInfo,
};
bool DLCCTrCh::itemsPres[5] = {
	0,
	1,
	0,
	0,
	0,
};
const DLCCTrCh::Info DLCCTrCh::theInfo = {
	DLCCTrCh::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 4, 0
};

const void *DLCCTrChr4TddOptionTdd384::itemsInfo[1] = {
	&DownlinkTimeslotsCodes::theInfo,
};
bool DLCCTrChr4TddOptionTdd384::itemsPres[1] = {
	0,
};
const DLCCTrChr4TddOptionTdd384::Info DLCCTrChr4TddOptionTdd384::theInfo = {
	DLCCTrChr4TddOptionTdd384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *IndividualTimeslotInfoLCRr4::itemsInfo[6] = {
	&TimeslotNumberLCRr4::theInfo,
	&IndividualTimeslotInfoLCRr4TfciExistence::theInfo,
	&MidambleShiftAndBurstTypeLCRr4::theInfo,
	&IndividualTimeslotInfoLCRr4modulation::theInfo,
	&IndividualTimeslotInfoLCRr4ss_TPC_Symbols::theInfo,
	&IndividualTimeslotInfoLCRr4AdditionalSSTPCSymbols::theInfo,
};
bool IndividualTimeslotInfoLCRr4::itemsPres[6] = {
	1,
	1,
	1,
	1,
	1,
	0,
};
const IndividualTimeslotInfoLCRr4::Info IndividualTimeslotInfoLCRr4::theInfo = {
	IndividualTimeslotInfoLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 1, 0
};

const void *DownlinkAdditionalTimeslotsLCRr4ParametersSameAsLast::itemsInfo[1] = {
	&TimeslotNumberLCRr4::theInfo,
};
bool DownlinkAdditionalTimeslotsLCRr4ParametersSameAsLast::itemsPres[1] = {
	1,
};
const DownlinkAdditionalTimeslotsLCRr4ParametersSameAsLast::Info DownlinkAdditionalTimeslotsLCRr4ParametersSameAsLast::theInfo = {
	DownlinkAdditionalTimeslotsLCRr4ParametersSameAsLast::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DownlinkAdditionalTimeslotsLCRr4ParametersNewParameters::itemsInfo[2] = {
	&IndividualTimeslotInfoLCRr4::theInfo,
	&DLTSChannelisationCodesShort::theInfo,
};
bool DownlinkAdditionalTimeslotsLCRr4ParametersNewParameters::itemsPres[2] = {
	1,
	1,
};
const DownlinkAdditionalTimeslotsLCRr4ParametersNewParameters::Info DownlinkAdditionalTimeslotsLCRr4ParametersNewParameters::theInfo = {
	DownlinkAdditionalTimeslotsLCRr4ParametersNewParameters::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *DownlinkAdditionalTimeslotsLCRr4Parameters::choicesInfo[2] = {
	&DownlinkAdditionalTimeslotsLCRr4ParametersSameAsLast::theInfo,
	&DownlinkAdditionalTimeslotsLCRr4ParametersNewParameters::theInfo,
};
const DownlinkAdditionalTimeslotsLCRr4Parameters::Info DownlinkAdditionalTimeslotsLCRr4Parameters::theInfo = {
	DownlinkAdditionalTimeslotsLCRr4Parameters::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
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

const void *DownlinkTimeslotsCodesLCRr4MoreTimeslotsAdditionalTimeslots::choicesInfo[2] = {
	&DownlinkTimeslotsCodesLCRr4MoreTimeslotsAdditionalTimeslotsConsecutive::theInfo,
	&DownlinkTimeslotsCodesLCRr4MoreTimeslotsAdditionalTimeslotsTimeslotList::theInfo,
};
const DownlinkTimeslotsCodesLCRr4MoreTimeslotsAdditionalTimeslots::Info DownlinkTimeslotsCodesLCRr4MoreTimeslotsAdditionalTimeslots::theInfo = {
	DownlinkTimeslotsCodesLCRr4MoreTimeslotsAdditionalTimeslots::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DownlinkTimeslotsCodesLCRr4MoreTimeslots::choicesInfo[2] = {
	&DownlinkTimeslotsCodesLCRr4MoreTimeslotsNoMore::theInfo,
	&DownlinkTimeslotsCodesLCRr4MoreTimeslotsAdditionalTimeslots::theInfo,
};
const DownlinkTimeslotsCodesLCRr4MoreTimeslots::Info DownlinkTimeslotsCodesLCRr4MoreTimeslots::theInfo = {
	DownlinkTimeslotsCodesLCRr4MoreTimeslots::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DownlinkTimeslotsCodesLCRr4::itemsInfo[3] = {
	&IndividualTimeslotInfoLCRr4::theInfo,
	&DLTSChannelisationCodesShort::theInfo,
	&DownlinkTimeslotsCodesLCRr4MoreTimeslots::theInfo,
};
bool DownlinkTimeslotsCodesLCRr4::itemsPres[3] = {
	1,
	1,
	1,
};
const DownlinkTimeslotsCodesLCRr4::Info DownlinkTimeslotsCodesLCRr4::theInfo = {
	DownlinkTimeslotsCodesLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *DLCCTrChr4TddOptionTdd128::itemsInfo[1] = {
	&DownlinkTimeslotsCodesLCRr4::theInfo,
};
bool DLCCTrChr4TddOptionTdd128::itemsPres[1] = {
	0,
};
const DLCCTrChr4TddOptionTdd128::Info DLCCTrChr4TddOptionTdd128::theInfo = {
	DLCCTrChr4TddOptionTdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLCCTrChr4TddOption::choicesInfo[2] = {
	&DLCCTrChr4TddOptionTdd384::theInfo,
	&DLCCTrChr4TddOptionTdd128::theInfo,
};
const DLCCTrChr4TddOption::Info DLCCTrChr4TddOption::theInfo = {
	DLCCTrChr4TddOption::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLCCTrChr4::itemsInfo[5] = {
	&TFCSIdentityPlain::theInfo,
	&TimeInfo::theInfo,
	&CommonTimeslotInfo::theInfo,
	&DLCCTrChr4TddOption::theInfo,
	&ULCCTrChTPCList::theInfo,
};
bool DLCCTrChr4::itemsPres[5] = {
	0,
	1,
	0,
	1,
	0,
};
const DLCCTrChr4::Info DLCCTrChr4::theInfo = {
	DLCCTrChr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 3, 0
};

const void *MidambleShiftAndBurstTyper7BurstTypeType1MidambleAllocationModeUeSpecificMidamble::itemsInfo[1] = {
	&MidambleShiftLong::theInfo,
};
bool MidambleShiftAndBurstTyper7BurstTypeType1MidambleAllocationModeUeSpecificMidamble::itemsPres[1] = {
	1,
};
const MidambleShiftAndBurstTyper7BurstTypeType1MidambleAllocationModeUeSpecificMidamble::Info MidambleShiftAndBurstTyper7BurstTypeType1MidambleAllocationModeUeSpecificMidamble::theInfo = {
	MidambleShiftAndBurstTyper7BurstTypeType1MidambleAllocationModeUeSpecificMidamble::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MidambleShiftAndBurstTyper7BurstTypeType1MidambleAllocationMode::choicesInfo[3] = {
	&MidambleShiftAndBurstTyper7BurstTypeType1MidambleAllocationModeDefaultMidamble::theInfo,
	&MidambleShiftAndBurstTyper7BurstTypeType1MidambleAllocationModeCommonMidamble::theInfo,
	&MidambleShiftAndBurstTyper7BurstTypeType1MidambleAllocationModeUeSpecificMidamble::theInfo,
};
const MidambleShiftAndBurstTyper7BurstTypeType1MidambleAllocationMode::Info MidambleShiftAndBurstTyper7BurstTypeType1MidambleAllocationMode::theInfo = {
	MidambleShiftAndBurstTyper7BurstTypeType1MidambleAllocationMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *MidambleShiftAndBurstTyper7BurstTypeType1::itemsInfo[2] = {
	&MidambleConfigurationBurstType1and3::theInfo,
	&MidambleShiftAndBurstTyper7BurstTypeType1MidambleAllocationMode::theInfo,
};
bool MidambleShiftAndBurstTyper7BurstTypeType1::itemsPres[2] = {
	1,
	1,
};
const MidambleShiftAndBurstTyper7BurstTypeType1::Info MidambleShiftAndBurstTyper7BurstTypeType1::theInfo = {
	MidambleShiftAndBurstTyper7BurstTypeType1::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *MidambleShiftAndBurstTyper7BurstTypeType2MidambleAllocationModeUeSpecificMidamble::itemsInfo[1] = {
	&MidambleShiftShort::theInfo,
};
bool MidambleShiftAndBurstTyper7BurstTypeType2MidambleAllocationModeUeSpecificMidamble::itemsPres[1] = {
	1,
};
const MidambleShiftAndBurstTyper7BurstTypeType2MidambleAllocationModeUeSpecificMidamble::Info MidambleShiftAndBurstTyper7BurstTypeType2MidambleAllocationModeUeSpecificMidamble::theInfo = {
	MidambleShiftAndBurstTyper7BurstTypeType2MidambleAllocationModeUeSpecificMidamble::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MidambleShiftAndBurstTyper7BurstTypeType2MidambleAllocationMode::choicesInfo[3] = {
	&MidambleShiftAndBurstTyper7BurstTypeType2MidambleAllocationModeDefaultMidamble::theInfo,
	&MidambleShiftAndBurstTyper7BurstTypeType2MidambleAllocationModeCommonMidamble::theInfo,
	&MidambleShiftAndBurstTyper7BurstTypeType2MidambleAllocationModeUeSpecificMidamble::theInfo,
};
const MidambleShiftAndBurstTyper7BurstTypeType2MidambleAllocationMode::Info MidambleShiftAndBurstTyper7BurstTypeType2MidambleAllocationMode::theInfo = {
	MidambleShiftAndBurstTyper7BurstTypeType2MidambleAllocationMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *MidambleShiftAndBurstTyper7BurstTypeType2::itemsInfo[2] = {
	&MidambleConfigurationBurstType2::theInfo,
	&MidambleShiftAndBurstTyper7BurstTypeType2MidambleAllocationMode::theInfo,
};
bool MidambleShiftAndBurstTyper7BurstTypeType2::itemsPres[2] = {
	1,
	1,
};
const MidambleShiftAndBurstTyper7BurstTypeType2::Info MidambleShiftAndBurstTyper7BurstTypeType2::theInfo = {
	MidambleShiftAndBurstTyper7BurstTypeType2::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *MidambleShiftAndBurstTyper7BurstTypeType3MidambleAllocationModeUeSpecificMidamble::itemsInfo[1] = {
	&MidambleShiftLong::theInfo,
};
bool MidambleShiftAndBurstTyper7BurstTypeType3MidambleAllocationModeUeSpecificMidamble::itemsPres[1] = {
	1,
};
const MidambleShiftAndBurstTyper7BurstTypeType3MidambleAllocationModeUeSpecificMidamble::Info MidambleShiftAndBurstTyper7BurstTypeType3MidambleAllocationModeUeSpecificMidamble::theInfo = {
	MidambleShiftAndBurstTyper7BurstTypeType3MidambleAllocationModeUeSpecificMidamble::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MidambleShiftAndBurstTyper7BurstTypeType3MidambleAllocationMode::choicesInfo[2] = {
	&MidambleShiftAndBurstTyper7BurstTypeType3MidambleAllocationModeDefaultMidamble::theInfo,
	&MidambleShiftAndBurstTyper7BurstTypeType3MidambleAllocationModeUeSpecificMidamble::theInfo,
};
const MidambleShiftAndBurstTyper7BurstTypeType3MidambleAllocationMode::Info MidambleShiftAndBurstTyper7BurstTypeType3MidambleAllocationMode::theInfo = {
	MidambleShiftAndBurstTyper7BurstTypeType3MidambleAllocationMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *MidambleShiftAndBurstTyper7BurstTypeType3::itemsInfo[2] = {
	&MidambleConfigurationBurstType1and3::theInfo,
	&MidambleShiftAndBurstTyper7BurstTypeType3MidambleAllocationMode::theInfo,
};
bool MidambleShiftAndBurstTyper7BurstTypeType3::itemsPres[2] = {
	1,
	1,
};
const MidambleShiftAndBurstTyper7BurstTypeType3::Info MidambleShiftAndBurstTyper7BurstTypeType3::theInfo = {
	MidambleShiftAndBurstTyper7BurstTypeType3::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *MidambleShiftAndBurstTyper7BurstType::choicesInfo[4] = {
	&MidambleShiftAndBurstTyper7BurstTypeType1::theInfo,
	&MidambleShiftAndBurstTyper7BurstTypeType2::theInfo,
	&MidambleShiftAndBurstTyper7BurstTypeType3::theInfo,
	&MidambleShiftAndBurstTyper7BurstTypeMbsfnBurstType4::theInfo,
};
const MidambleShiftAndBurstTyper7BurstType::Info MidambleShiftAndBurstTyper7BurstType::theInfo = {
	MidambleShiftAndBurstTyper7BurstType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	3
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

const void *IndividualTimeslotInfor7::itemsInfo[3] = {
	&TimeslotNumber::theInfo,
	&IndividualTimeslotInfor7TfciExistence::theInfo,
	&MidambleShiftAndBurstTyper7::theInfo,
};
bool IndividualTimeslotInfor7::itemsPres[3] = {
	1,
	1,
	1,
};
const IndividualTimeslotInfor7::Info IndividualTimeslotInfor7::theInfo = {
	IndividualTimeslotInfor7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *DownlinkAdditionalTimeslotsr7ParametersSameAsLast::itemsInfo[1] = {
	&TimeslotNumber::theInfo,
};
bool DownlinkAdditionalTimeslotsr7ParametersSameAsLast::itemsPres[1] = {
	1,
};
const DownlinkAdditionalTimeslotsr7ParametersSameAsLast::Info DownlinkAdditionalTimeslotsr7ParametersSameAsLast::theInfo = {
	DownlinkAdditionalTimeslotsr7ParametersSameAsLast::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DownlinkAdditionalTimeslotsr7ParametersNewParameters::itemsInfo[2] = {
	&IndividualTimeslotInfor7::theInfo,
	&DLTSChannelisationCodesShort::theInfo,
};
bool DownlinkAdditionalTimeslotsr7ParametersNewParameters::itemsPres[2] = {
	1,
	1,
};
const DownlinkAdditionalTimeslotsr7ParametersNewParameters::Info DownlinkAdditionalTimeslotsr7ParametersNewParameters::theInfo = {
	DownlinkAdditionalTimeslotsr7ParametersNewParameters::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *DownlinkAdditionalTimeslotsr7Parameters::choicesInfo[2] = {
	&DownlinkAdditionalTimeslotsr7ParametersSameAsLast::theInfo,
	&DownlinkAdditionalTimeslotsr7ParametersNewParameters::theInfo,
};
const DownlinkAdditionalTimeslotsr7Parameters::Info DownlinkAdditionalTimeslotsr7Parameters::theInfo = {
	DownlinkAdditionalTimeslotsr7Parameters::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
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

const void *DownlinkTimeslotsCodesr7MoreTimeslotsAdditionalTimeslots::choicesInfo[2] = {
	&DownlinkTimeslotsCodesr7MoreTimeslotsAdditionalTimeslotsConsecutive::theInfo,
	&DownlinkTimeslotsCodesr7MoreTimeslotsAdditionalTimeslotsTimeslotList::theInfo,
};
const DownlinkTimeslotsCodesr7MoreTimeslotsAdditionalTimeslots::Info DownlinkTimeslotsCodesr7MoreTimeslotsAdditionalTimeslots::theInfo = {
	DownlinkTimeslotsCodesr7MoreTimeslotsAdditionalTimeslots::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DownlinkTimeslotsCodesr7MoreTimeslots::choicesInfo[2] = {
	&DownlinkTimeslotsCodesr7MoreTimeslotsNoMore::theInfo,
	&DownlinkTimeslotsCodesr7MoreTimeslotsAdditionalTimeslots::theInfo,
};
const DownlinkTimeslotsCodesr7MoreTimeslots::Info DownlinkTimeslotsCodesr7MoreTimeslots::theInfo = {
	DownlinkTimeslotsCodesr7MoreTimeslots::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DownlinkTimeslotsCodesr7::itemsInfo[3] = {
	&IndividualTimeslotInfor7::theInfo,
	&DLTSChannelisationCodesShort::theInfo,
	&DownlinkTimeslotsCodesr7MoreTimeslots::theInfo,
};
bool DownlinkTimeslotsCodesr7::itemsPres[3] = {
	1,
	1,
	1,
};
const DownlinkTimeslotsCodesr7::Info DownlinkTimeslotsCodesr7::theInfo = {
	DownlinkTimeslotsCodesr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *DLCCTrChr7TddOptionTdd384::itemsInfo[1] = {
	&DownlinkTimeslotsCodesr7::theInfo,
};
bool DLCCTrChr7TddOptionTdd384::itemsPres[1] = {
	0,
};
const DLCCTrChr7TddOptionTdd384::Info DLCCTrChr7TddOptionTdd384::theInfo = {
	DLCCTrChr7TddOptionTdd384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *MidambleShiftAndBurstTypeVHCRBurstTypeType1MidambleAllocationModeUeSpecificMidamble::itemsInfo[1] = {
	&MidambleShiftLong::theInfo,
};
bool MidambleShiftAndBurstTypeVHCRBurstTypeType1MidambleAllocationModeUeSpecificMidamble::itemsPres[1] = {
	1,
};
const MidambleShiftAndBurstTypeVHCRBurstTypeType1MidambleAllocationModeUeSpecificMidamble::Info MidambleShiftAndBurstTypeVHCRBurstTypeType1MidambleAllocationModeUeSpecificMidamble::theInfo = {
	MidambleShiftAndBurstTypeVHCRBurstTypeType1MidambleAllocationModeUeSpecificMidamble::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MidambleShiftAndBurstTypeVHCRBurstTypeType1MidambleAllocationMode::choicesInfo[3] = {
	&MidambleShiftAndBurstTypeVHCRBurstTypeType1MidambleAllocationModeDefaultMidamble::theInfo,
	&MidambleShiftAndBurstTypeVHCRBurstTypeType1MidambleAllocationModeCommonMidamble::theInfo,
	&MidambleShiftAndBurstTypeVHCRBurstTypeType1MidambleAllocationModeUeSpecificMidamble::theInfo,
};
const MidambleShiftAndBurstTypeVHCRBurstTypeType1MidambleAllocationMode::Info MidambleShiftAndBurstTypeVHCRBurstTypeType1MidambleAllocationMode::theInfo = {
	MidambleShiftAndBurstTypeVHCRBurstTypeType1MidambleAllocationMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *MidambleShiftAndBurstTypeVHCRBurstTypeType1::itemsInfo[2] = {
	&MidambleConfigurationBurstType1and3::theInfo,
	&MidambleShiftAndBurstTypeVHCRBurstTypeType1MidambleAllocationMode::theInfo,
};
bool MidambleShiftAndBurstTypeVHCRBurstTypeType1::itemsPres[2] = {
	1,
	1,
};
const MidambleShiftAndBurstTypeVHCRBurstTypeType1::Info MidambleShiftAndBurstTypeVHCRBurstTypeType1::theInfo = {
	MidambleShiftAndBurstTypeVHCRBurstTypeType1::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *MidambleShiftAndBurstTypeVHCRBurstTypeType2MidambleAllocationModeUeSpecificMidamble::itemsInfo[1] = {
	&MidambleShiftShortVHCR::theInfo,
};
bool MidambleShiftAndBurstTypeVHCRBurstTypeType2MidambleAllocationModeUeSpecificMidamble::itemsPres[1] = {
	1,
};
const MidambleShiftAndBurstTypeVHCRBurstTypeType2MidambleAllocationModeUeSpecificMidamble::Info MidambleShiftAndBurstTypeVHCRBurstTypeType2MidambleAllocationModeUeSpecificMidamble::theInfo = {
	MidambleShiftAndBurstTypeVHCRBurstTypeType2MidambleAllocationModeUeSpecificMidamble::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MidambleShiftAndBurstTypeVHCRBurstTypeType2MidambleAllocationMode::choicesInfo[3] = {
	&MidambleShiftAndBurstTypeVHCRBurstTypeType2MidambleAllocationModeDefaultMidamble::theInfo,
	&MidambleShiftAndBurstTypeVHCRBurstTypeType2MidambleAllocationModeCommonMidamble::theInfo,
	&MidambleShiftAndBurstTypeVHCRBurstTypeType2MidambleAllocationModeUeSpecificMidamble::theInfo,
};
const MidambleShiftAndBurstTypeVHCRBurstTypeType2MidambleAllocationMode::Info MidambleShiftAndBurstTypeVHCRBurstTypeType2MidambleAllocationMode::theInfo = {
	MidambleShiftAndBurstTypeVHCRBurstTypeType2MidambleAllocationMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *MidambleShiftAndBurstTypeVHCRBurstTypeType2::itemsInfo[2] = {
	&MidambleConfigurationBurstType2VHCR::theInfo,
	&MidambleShiftAndBurstTypeVHCRBurstTypeType2MidambleAllocationMode::theInfo,
};
bool MidambleShiftAndBurstTypeVHCRBurstTypeType2::itemsPres[2] = {
	1,
	1,
};
const MidambleShiftAndBurstTypeVHCRBurstTypeType2::Info MidambleShiftAndBurstTypeVHCRBurstTypeType2::theInfo = {
	MidambleShiftAndBurstTypeVHCRBurstTypeType2::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *MidambleShiftAndBurstTypeVHCRBurstTypeType3MidambleAllocationModeUeSpecificMidamble::itemsInfo[1] = {
	&MidambleShiftLong::theInfo,
};
bool MidambleShiftAndBurstTypeVHCRBurstTypeType3MidambleAllocationModeUeSpecificMidamble::itemsPres[1] = {
	1,
};
const MidambleShiftAndBurstTypeVHCRBurstTypeType3MidambleAllocationModeUeSpecificMidamble::Info MidambleShiftAndBurstTypeVHCRBurstTypeType3MidambleAllocationModeUeSpecificMidamble::theInfo = {
	MidambleShiftAndBurstTypeVHCRBurstTypeType3MidambleAllocationModeUeSpecificMidamble::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MidambleShiftAndBurstTypeVHCRBurstTypeType3MidambleAllocationMode::choicesInfo[2] = {
	&MidambleShiftAndBurstTypeVHCRBurstTypeType3MidambleAllocationModeDefaultMidamble::theInfo,
	&MidambleShiftAndBurstTypeVHCRBurstTypeType3MidambleAllocationModeUeSpecificMidamble::theInfo,
};
const MidambleShiftAndBurstTypeVHCRBurstTypeType3MidambleAllocationMode::Info MidambleShiftAndBurstTypeVHCRBurstTypeType3MidambleAllocationMode::theInfo = {
	MidambleShiftAndBurstTypeVHCRBurstTypeType3MidambleAllocationMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *MidambleShiftAndBurstTypeVHCRBurstTypeType3::itemsInfo[2] = {
	&MidambleConfigurationBurstType1and3::theInfo,
	&MidambleShiftAndBurstTypeVHCRBurstTypeType3MidambleAllocationMode::theInfo,
};
bool MidambleShiftAndBurstTypeVHCRBurstTypeType3::itemsPres[2] = {
	1,
	1,
};
const MidambleShiftAndBurstTypeVHCRBurstTypeType3::Info MidambleShiftAndBurstTypeVHCRBurstTypeType3::theInfo = {
	MidambleShiftAndBurstTypeVHCRBurstTypeType3::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *MidambleShiftAndBurstTypeVHCRBurstType::choicesInfo[4] = {
	&MidambleShiftAndBurstTypeVHCRBurstTypeType1::theInfo,
	&MidambleShiftAndBurstTypeVHCRBurstTypeType2::theInfo,
	&MidambleShiftAndBurstTypeVHCRBurstTypeType3::theInfo,
	&MidambleShiftAndBurstTypeVHCRBurstTypeMbsfnBurstType4::theInfo,
};
const MidambleShiftAndBurstTypeVHCRBurstType::Info MidambleShiftAndBurstTypeVHCRBurstType::theInfo = {
	MidambleShiftAndBurstTypeVHCRBurstType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	3
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

const void *IndividualTimeslotInfoVHCR::itemsInfo[3] = {
	&TimeslotNumber::theInfo,
	&IndividualTimeslotInfoVHCRTfciExistence::theInfo,
	&MidambleShiftAndBurstTypeVHCR::theInfo,
};
bool IndividualTimeslotInfoVHCR::itemsPres[3] = {
	1,
	1,
	1,
};
const IndividualTimeslotInfoVHCR::Info IndividualTimeslotInfoVHCR::theInfo = {
	IndividualTimeslotInfoVHCR::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *DLTSChannelisationCodesShortVHCRCodesRepresentationConsecutive::itemsInfo[2] = {
	&DLTSChannelisationCodeVHCR::theInfo,
	&DLTSChannelisationCodeVHCR::theInfo,
};
bool DLTSChannelisationCodesShortVHCRCodesRepresentationConsecutive::itemsPres[2] = {
	1,
	1,
};
const DLTSChannelisationCodesShortVHCRCodesRepresentationConsecutive::Info DLTSChannelisationCodesShortVHCRCodesRepresentationConsecutive::theInfo = {
	DLTSChannelisationCodesShortVHCRCodesRepresentationConsecutive::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *DLTSChannelisationCodesShortVHCRCodesRepresentation::choicesInfo[2] = {
	&DLTSChannelisationCodesShortVHCRCodesRepresentationConsecutive::theInfo,
	&DLTSChannelisationCodesShortVHCRCodesRepresentationBitmap::theInfo,
};
const DLTSChannelisationCodesShortVHCRCodesRepresentation::Info DLTSChannelisationCodesShortVHCRCodesRepresentation::theInfo = {
	DLTSChannelisationCodesShortVHCRCodesRepresentation::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
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

const void *DownlinkAdditionalTimeslotsVHCRParametersSameAsLast::itemsInfo[1] = {
	&TimeslotNumber::theInfo,
};
bool DownlinkAdditionalTimeslotsVHCRParametersSameAsLast::itemsPres[1] = {
	1,
};
const DownlinkAdditionalTimeslotsVHCRParametersSameAsLast::Info DownlinkAdditionalTimeslotsVHCRParametersSameAsLast::theInfo = {
	DownlinkAdditionalTimeslotsVHCRParametersSameAsLast::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DownlinkAdditionalTimeslotsVHCRParametersNewParameters::itemsInfo[2] = {
	&IndividualTimeslotInfoVHCR::theInfo,
	&DLTSChannelisationCodesShortVHCR::theInfo,
};
bool DownlinkAdditionalTimeslotsVHCRParametersNewParameters::itemsPres[2] = {
	1,
	1,
};
const DownlinkAdditionalTimeslotsVHCRParametersNewParameters::Info DownlinkAdditionalTimeslotsVHCRParametersNewParameters::theInfo = {
	DownlinkAdditionalTimeslotsVHCRParametersNewParameters::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *DownlinkAdditionalTimeslotsVHCRParameters::choicesInfo[2] = {
	&DownlinkAdditionalTimeslotsVHCRParametersSameAsLast::theInfo,
	&DownlinkAdditionalTimeslotsVHCRParametersNewParameters::theInfo,
};
const DownlinkAdditionalTimeslotsVHCRParameters::Info DownlinkAdditionalTimeslotsVHCRParameters::theInfo = {
	DownlinkAdditionalTimeslotsVHCRParameters::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
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

const void *DownlinkTimeslotsCodesVHCRMoreTimeslotsAdditionalTimeslots::choicesInfo[2] = {
	&DownlinkTimeslotsCodesVHCRMoreTimeslotsAdditionalTimeslotsConsecutive::theInfo,
	&DownlinkTimeslotsCodesVHCRMoreTimeslotsAdditionalTimeslotsTimeslotList::theInfo,
};
const DownlinkTimeslotsCodesVHCRMoreTimeslotsAdditionalTimeslots::Info DownlinkTimeslotsCodesVHCRMoreTimeslotsAdditionalTimeslots::theInfo = {
	DownlinkTimeslotsCodesVHCRMoreTimeslotsAdditionalTimeslots::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DownlinkTimeslotsCodesVHCRMoreTimeslots::choicesInfo[2] = {
	&DownlinkTimeslotsCodesVHCRMoreTimeslotsNoMore::theInfo,
	&DownlinkTimeslotsCodesVHCRMoreTimeslotsAdditionalTimeslots::theInfo,
};
const DownlinkTimeslotsCodesVHCRMoreTimeslots::Info DownlinkTimeslotsCodesVHCRMoreTimeslots::theInfo = {
	DownlinkTimeslotsCodesVHCRMoreTimeslots::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DownlinkTimeslotsCodesVHCR::itemsInfo[3] = {
	&IndividualTimeslotInfoVHCR::theInfo,
	&DLTSChannelisationCodesShortVHCR::theInfo,
	&DownlinkTimeslotsCodesVHCRMoreTimeslots::theInfo,
};
bool DownlinkTimeslotsCodesVHCR::itemsPres[3] = {
	1,
	1,
	1,
};
const DownlinkTimeslotsCodesVHCR::Info DownlinkTimeslotsCodesVHCR::theInfo = {
	DownlinkTimeslotsCodesVHCR::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *DLCCTrChr7TddOptionTdd768::itemsInfo[1] = {
	&DownlinkTimeslotsCodesVHCR::theInfo,
};
bool DLCCTrChr7TddOptionTdd768::itemsPres[1] = {
	0,
};
const DLCCTrChr7TddOptionTdd768::Info DLCCTrChr7TddOptionTdd768::theInfo = {
	DLCCTrChr7TddOptionTdd768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLCCTrChr7TddOptionTdd128::itemsInfo[1] = {
	&DownlinkTimeslotsCodesLCRr4::theInfo,
};
bool DLCCTrChr7TddOptionTdd128::itemsPres[1] = {
	0,
};
const DLCCTrChr7TddOptionTdd128::Info DLCCTrChr7TddOptionTdd128::theInfo = {
	DLCCTrChr7TddOptionTdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLCCTrChr7TddOption::choicesInfo[3] = {
	&DLCCTrChr7TddOptionTdd384::theInfo,
	&DLCCTrChr7TddOptionTdd768::theInfo,
	&DLCCTrChr7TddOptionTdd128::theInfo,
};
const DLCCTrChr7TddOption::Info DLCCTrChr7TddOption::theInfo = {
	DLCCTrChr7TddOption::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *DLCCTrChr7::itemsInfo[5] = {
	&TFCSIdentityPlain::theInfo,
	&TimeInfo::theInfo,
	&CommonTimeslotInfo::theInfo,
	&DLCCTrChr7TddOption::theInfo,
	&ULCCTrChTPCList::theInfo,
};
bool DLCCTrChr7::itemsPres[5] = {
	0,
	1,
	0,
	1,
	0,
};
const DLCCTrChr7::Info DLCCTrChr7::theInfo = {
	DLCCTrChr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 3, 0
};

const void *SF512AndCodeNumber::choicesInfo[8] = {
	&SF512AndCodeNumberSf4::theInfo,
	&SF512AndCodeNumberSf8::theInfo,
	&SF512AndCodeNumberSf16::theInfo,
	&SF512AndCodeNumberSf32::theInfo,
	&SF512AndCodeNumberSf64::theInfo,
	&SF512AndCodeNumberSf128::theInfo,
	&SF512AndCodeNumberSf256::theInfo,
	&SF512AndCodeNumberSf512::theInfo,
};
const SF512AndCodeNumber::Info SF512AndCodeNumber::theInfo = {
	SF512AndCodeNumber::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	7
};

const void *DLChannelisationCode::itemsInfo[3] = {
	&SecondaryScramblingCode::theInfo,
	&SF512AndCodeNumber::theInfo,
	&ScramblingCodeChange::theInfo,
};
bool DLChannelisationCode::itemsPres[3] = {
	0,
	1,
	0,
};
const DLChannelisationCode::Info DLChannelisationCode::theInfo = {
	DLChannelisationCode::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *DLDPCHInfoCommonCfnHandlingInitialise::itemsInfo[1] = {
	&Cfntargetsfnframeoffset::theInfo,
};
bool DLDPCHInfoCommonCfnHandlingInitialise::itemsPres[1] = {
	0,
};
const DLDPCHInfoCommonCfnHandlingInitialise::Info DLDPCHInfoCommonCfnHandlingInitialise::theInfo = {
	DLDPCHInfoCommonCfnHandlingInitialise::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLDPCHInfoCommonCfnHandling::choicesInfo[2] = {
	&DLDPCHInfoCommonCfnHandlingMaintain::theInfo,
	&DLDPCHInfoCommonCfnHandlingInitialise::theInfo,
};
const DLDPCHInfoCommonCfnHandling::Info DLDPCHInfoCommonCfnHandling::theInfo = {
	DLDPCHInfoCommonCfnHandling::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLDPCHPowerControlInfoModeSpecificInfoFdd::itemsInfo[1] = {
	&DPCMode::theInfo,
};
bool DLDPCHPowerControlInfoModeSpecificInfoFdd::itemsPres[1] = {
	1,
};
const DLDPCHPowerControlInfoModeSpecificInfoFdd::Info DLDPCHPowerControlInfoModeSpecificInfoFdd::theInfo = {
	DLDPCHPowerControlInfoModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DLDPCHPowerControlInfoModeSpecificInfoTdd::itemsInfo[1] = {
	&TPCStepSizeTDD::theInfo,
};
bool DLDPCHPowerControlInfoModeSpecificInfoTdd::itemsPres[1] = {
	0,
};
const DLDPCHPowerControlInfoModeSpecificInfoTdd::Info DLDPCHPowerControlInfoModeSpecificInfoTdd::theInfo = {
	DLDPCHPowerControlInfoModeSpecificInfoTdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLDPCHPowerControlInfoModeSpecificInfo::choicesInfo[2] = {
	&DLDPCHPowerControlInfoModeSpecificInfoFdd::theInfo,
	&DLDPCHPowerControlInfoModeSpecificInfoTdd::theInfo,
};
const DLDPCHPowerControlInfoModeSpecificInfo::Info DLDPCHPowerControlInfoModeSpecificInfo::theInfo = {
	DLDPCHPowerControlInfoModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
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

const void *RestrictedTrCH::itemsInfo[3] = {
	&DLTrCHType::theInfo,
	&TransportChannelIdentity::theInfo,
	&AllowedTFIList::theInfo,
};
bool RestrictedTrCH::itemsPres[3] = {
	1,
	1,
	1,
};
const RestrictedTrCH::Info RestrictedTrCH::theInfo = {
	RestrictedTrCH::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
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

const void *DLDPCHInfoCommonModeSpecificInfoFdd::itemsInfo[6] = {
	&DLDPCHPowerControlInfo::theInfo,
	&PowerOffsetPilotpdpdch::theInfo,
	&Dlratematchingrestriction::theInfo,
	&SF512AndPilot::theInfo,
	&PositionFixedOrFlexible::theInfo,
	&DLDPCHInfoCommonModeSpecificInfoFddTfciExistence::theInfo,
};
bool DLDPCHInfoCommonModeSpecificInfoFdd::itemsPres[6] = {
	0,
	1,
	0,
	1,
	1,
	1,
};
const DLDPCHInfoCommonModeSpecificInfoFdd::Info DLDPCHInfoCommonModeSpecificInfoFdd::theInfo = {
	DLDPCHInfoCommonModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 2, 0
};

const void *DLDPCHInfoCommonModeSpecificInfoTdd::itemsInfo[1] = {
	&DLDPCHPowerControlInfo::theInfo,
};
bool DLDPCHInfoCommonModeSpecificInfoTdd::itemsPres[1] = {
	0,
};
const DLDPCHInfoCommonModeSpecificInfoTdd::Info DLDPCHInfoCommonModeSpecificInfoTdd::theInfo = {
	DLDPCHInfoCommonModeSpecificInfoTdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLDPCHInfoCommonModeSpecificInfo::choicesInfo[2] = {
	&DLDPCHInfoCommonModeSpecificInfoFdd::theInfo,
	&DLDPCHInfoCommonModeSpecificInfoTdd::theInfo,
};
const DLDPCHInfoCommonModeSpecificInfo::Info DLDPCHInfoCommonModeSpecificInfo::theInfo = {
	DLDPCHInfoCommonModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLDPCHInfoCommon::itemsInfo[2] = {
	&DLDPCHInfoCommonCfnHandling::theInfo,
	&DLDPCHInfoCommonModeSpecificInfo::theInfo,
};
bool DLDPCHInfoCommon::itemsPres[2] = {
	1,
	1,
};
const DLDPCHInfoCommon::Info DLDPCHInfoCommon::theInfo = {
	DLDPCHInfoCommon::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *TGPSequenceTgpsStatusActivate::itemsInfo[1] = {
	&TGCFN::theInfo,
};
bool TGPSequenceTgpsStatusActivate::itemsPres[1] = {
	1,
};
const TGPSequenceTgpsStatusActivate::Info TGPSequenceTgpsStatusActivate::theInfo = {
	TGPSequenceTgpsStatusActivate::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *TGPSequenceTgpsStatus::choicesInfo[2] = {
	&TGPSequenceTgpsStatusActivate::theInfo,
	&TGPSequenceTgpsStatusDeactivate::theInfo,
};
const TGPSequenceTgpsStatus::Info TGPSequenceTgpsStatus::theInfo = {
	TGPSequenceTgpsStatus::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULDLModeUlanddl::itemsInfo[2] = {
	&ULCompressedModeMethod::theInfo,
	&DLCompressedModeMethod::theInfo,
};
bool ULDLModeUlanddl::itemsPres[2] = {
	1,
	1,
};
const ULDLModeUlanddl::Info ULDLModeUlanddl::theInfo = {
	ULDLModeUlanddl::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *ULDLMode::choicesInfo[3] = {
	&ULCompressedModeMethod::theInfo,
	&DLCompressedModeMethod::theInfo,
	&ULDLModeUlanddl::theInfo,
};
const ULDLMode::Info ULDLMode::theInfo = {
	ULDLMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *TGPSConfigurationParams::itemsInfo[18] = {
	&TGMP::theInfo,
	&TGPRC::theInfo,
	&TGSN::theInfo,
	&TGL::theInfo,
	&TGL::theInfo,
	&TGD::theInfo,
	&TGPL::theInfo,
	&TGPL::theInfo,
	&RPP::theInfo,
	&ITP::theInfo,
	&ULDLMode::theInfo,
	&DLFrameType::theInfo,
	&DeltaSIR::theInfo,
	&DeltaSIR::theInfo,
	&DeltaSIR::theInfo,
	&DeltaSIR::theInfo,
	&NidentifyAbort::theInfo,
	&TreconfirmAbort::theInfo,
};
bool TGPSConfigurationParams::itemsPres[18] = {
	1,
	1,
	1,
	1,
	0,
	1,
	1,
	0,
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
const TGPSConfigurationParams::Info TGPSConfigurationParams::theInfo = {
	TGPSConfigurationParams::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	18, 6, 0
};

const void *TGPSequence::itemsInfo[3] = {
	&TGPSI::theInfo,
	&TGPSequenceTgpsStatus::theInfo,
	&TGPSConfigurationParams::theInfo,
};
bool TGPSequence::itemsPres[3] = {
	1,
	1,
	0,
};
const TGPSequence::Info TGPSequence::theInfo = {
	TGPSequence::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
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

const void *SSDTInformation::itemsInfo[2] = {
	&SField::theInfo,
	&CodeWordSet::theInfo,
};
bool SSDTInformation::itemsPres[2] = {
	1,
	1,
};
const SSDTInformation::Info SSDTInformation::theInfo = {
	SSDTInformation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *DLCommonInformationModeSpecificInfoFdd::itemsInfo[4] = {
	&DefaultDPCHOffsetValueFDD::theInfo,
	&DPCHCompressedModeInfo::theInfo,
	&TXDiversityMode::theInfo,
	&SSDTInformation::theInfo,
};
bool DLCommonInformationModeSpecificInfoFdd::itemsPres[4] = {
	0,
	0,
	0,
	0,
};
const DLCommonInformationModeSpecificInfoFdd::Info DLCommonInformationModeSpecificInfoFdd::theInfo = {
	DLCommonInformationModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 4, 0
};

const void *DLCommonInformationModeSpecificInfoTdd::itemsInfo[1] = {
	&DefaultDPCHOffsetValueTDD::theInfo,
};
bool DLCommonInformationModeSpecificInfoTdd::itemsPres[1] = {
	0,
};
const DLCommonInformationModeSpecificInfoTdd::Info DLCommonInformationModeSpecificInfoTdd::theInfo = {
	DLCommonInformationModeSpecificInfoTdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLCommonInformationModeSpecificInfo::choicesInfo[2] = {
	&DLCommonInformationModeSpecificInfoFdd::theInfo,
	&DLCommonInformationModeSpecificInfoTdd::theInfo,
};
const DLCommonInformationModeSpecificInfo::Info DLCommonInformationModeSpecificInfo::theInfo = {
	DLCommonInformationModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLCommonInformation::itemsInfo[2] = {
	&DLDPCHInfoCommon::theInfo,
	&DLCommonInformationModeSpecificInfo::theInfo,
};
bool DLCommonInformation::itemsPres[2] = {
	0,
	1,
};
const DLCommonInformation::Info DLCommonInformation::theInfo = {
	DLCommonInformation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *DLDPCHInfoCommonr4CfnHandlingInitialise::itemsInfo[1] = {
	&Cfntargetsfnframeoffset::theInfo,
};
bool DLDPCHInfoCommonr4CfnHandlingInitialise::itemsPres[1] = {
	0,
};
const DLDPCHInfoCommonr4CfnHandlingInitialise::Info DLDPCHInfoCommonr4CfnHandlingInitialise::theInfo = {
	DLDPCHInfoCommonr4CfnHandlingInitialise::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLDPCHInfoCommonr4CfnHandling::choicesInfo[2] = {
	&DLDPCHInfoCommonr4CfnHandlingMaintain::theInfo,
	&DLDPCHInfoCommonr4CfnHandlingInitialise::theInfo,
};
const DLDPCHInfoCommonr4CfnHandling::Info DLDPCHInfoCommonr4CfnHandling::theInfo = {
	DLDPCHInfoCommonr4CfnHandling::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLDPCHInfoCommonr4ModeSpecificInfoFdd::itemsInfo[6] = {
	&DLDPCHPowerControlInfo::theInfo,
	&PowerOffsetPilotpdpdch::theInfo,
	&Dlratematchingrestriction::theInfo,
	&SF512AndPilot::theInfo,
	&PositionFixedOrFlexible::theInfo,
	&DLDPCHInfoCommonr4ModeSpecificInfoFddTfciExistence::theInfo,
};
bool DLDPCHInfoCommonr4ModeSpecificInfoFdd::itemsPres[6] = {
	0,
	1,
	0,
	1,
	1,
	1,
};
const DLDPCHInfoCommonr4ModeSpecificInfoFdd::Info DLDPCHInfoCommonr4ModeSpecificInfoFdd::theInfo = {
	DLDPCHInfoCommonr4ModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 2, 0
};

const void *DLDPCHInfoCommonr4ModeSpecificInfoTdd::itemsInfo[1] = {
	&DLDPCHPowerControlInfo::theInfo,
};
bool DLDPCHInfoCommonr4ModeSpecificInfoTdd::itemsPres[1] = {
	0,
};
const DLDPCHInfoCommonr4ModeSpecificInfoTdd::Info DLDPCHInfoCommonr4ModeSpecificInfoTdd::theInfo = {
	DLDPCHInfoCommonr4ModeSpecificInfoTdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLDPCHInfoCommonr4ModeSpecificInfo::choicesInfo[2] = {
	&DLDPCHInfoCommonr4ModeSpecificInfoFdd::theInfo,
	&DLDPCHInfoCommonr4ModeSpecificInfoTdd::theInfo,
};
const DLDPCHInfoCommonr4ModeSpecificInfo::Info DLDPCHInfoCommonr4ModeSpecificInfo::theInfo = {
	DLDPCHInfoCommonr4ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLDPCHInfoCommonr4::itemsInfo[3] = {
	&DLDPCHInfoCommonr4CfnHandling::theInfo,
	&DLDPCHInfoCommonr4ModeSpecificInfo::theInfo,
	&MACdHFNinitialvalue::theInfo,
};
bool DLDPCHInfoCommonr4::itemsPres[3] = {
	1,
	1,
	0,
};
const DLDPCHInfoCommonr4::Info DLDPCHInfoCommonr4::theInfo = {
	DLDPCHInfoCommonr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};

const void *SSDTInformationr4::itemsInfo[3] = {
	&SField::theInfo,
	&CodeWordSet::theInfo,
	&SSDTUL::theInfo,
};
bool SSDTInformationr4::itemsPres[3] = {
	1,
	1,
	0,
};
const SSDTInformationr4::Info SSDTInformationr4::theInfo = {
	SSDTInformationr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};

const void *DLCommonInformationr4ModeSpecificInfoFdd::itemsInfo[4] = {
	&DefaultDPCHOffsetValueFDD::theInfo,
	&DPCHCompressedModeInfo::theInfo,
	&TXDiversityMode::theInfo,
	&SSDTInformationr4::theInfo,
};
bool DLCommonInformationr4ModeSpecificInfoFdd::itemsPres[4] = {
	0,
	0,
	0,
	0,
};
const DLCommonInformationr4ModeSpecificInfoFdd::Info DLCommonInformationr4ModeSpecificInfoFdd::theInfo = {
	DLCommonInformationr4ModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 4, 0
};

const void *DLCommonInformationr4ModeSpecificInfoTddTddOptionTdd128::itemsInfo[1] = {
	&DLCommonInformationr4ModeSpecificInfoTddTddOptionTdd128TstdIndicator::theInfo,
};
bool DLCommonInformationr4ModeSpecificInfoTddTddOptionTdd128::itemsPres[1] = {
	1,
};
const DLCommonInformationr4ModeSpecificInfoTddTddOptionTdd128::Info DLCommonInformationr4ModeSpecificInfoTddTddOptionTdd128::theInfo = {
	DLCommonInformationr4ModeSpecificInfoTddTddOptionTdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DLCommonInformationr4ModeSpecificInfoTddTddOption::choicesInfo[2] = {
	&DLCommonInformationr4ModeSpecificInfoTddTddOptionTdd384::theInfo,
	&DLCommonInformationr4ModeSpecificInfoTddTddOptionTdd128::theInfo,
};
const DLCommonInformationr4ModeSpecificInfoTddTddOption::Info DLCommonInformationr4ModeSpecificInfoTddTddOption::theInfo = {
	DLCommonInformationr4ModeSpecificInfoTddTddOption::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLCommonInformationr4ModeSpecificInfoTdd::itemsInfo[2] = {
	&DLCommonInformationr4ModeSpecificInfoTddTddOption::theInfo,
	&DefaultDPCHOffsetValueTDD::theInfo,
};
bool DLCommonInformationr4ModeSpecificInfoTdd::itemsPres[2] = {
	1,
	0,
};
const DLCommonInformationr4ModeSpecificInfoTdd::Info DLCommonInformationr4ModeSpecificInfoTdd::theInfo = {
	DLCommonInformationr4ModeSpecificInfoTdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *DLCommonInformationr4ModeSpecificInfo::choicesInfo[2] = {
	&DLCommonInformationr4ModeSpecificInfoFdd::theInfo,
	&DLCommonInformationr4ModeSpecificInfoTdd::theInfo,
};
const DLCommonInformationr4ModeSpecificInfo::Info DLCommonInformationr4ModeSpecificInfo::theInfo = {
	DLCommonInformationr4ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLCommonInformationr4::itemsInfo[2] = {
	&DLDPCHInfoCommonr4::theInfo,
	&DLCommonInformationr4ModeSpecificInfo::theInfo,
};
bool DLCommonInformationr4::itemsPres[2] = {
	0,
	1,
};
const DLCommonInformationr4::Info DLCommonInformationr4::theInfo = {
	DLCommonInformationr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *DLCommonInformationr5ModeSpecificInfoFdd::itemsInfo[4] = {
	&DefaultDPCHOffsetValueFDD::theInfo,
	&DPCHCompressedModeInfo::theInfo,
	&TXDiversityMode::theInfo,
	&SSDTInformationr4::theInfo,
};
bool DLCommonInformationr5ModeSpecificInfoFdd::itemsPres[4] = {
	0,
	0,
	0,
	0,
};
const DLCommonInformationr5ModeSpecificInfoFdd::Info DLCommonInformationr5ModeSpecificInfoFdd::theInfo = {
	DLCommonInformationr5ModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 4, 0
};

const void *DLCommonInformationr5ModeSpecificInfoTddTddOptionTdd128::itemsInfo[1] = {
	&DLCommonInformationr5ModeSpecificInfoTddTddOptionTdd128TstdIndicator::theInfo,
};
bool DLCommonInformationr5ModeSpecificInfoTddTddOptionTdd128::itemsPres[1] = {
	1,
};
const DLCommonInformationr5ModeSpecificInfoTddTddOptionTdd128::Info DLCommonInformationr5ModeSpecificInfoTddTddOptionTdd128::theInfo = {
	DLCommonInformationr5ModeSpecificInfoTddTddOptionTdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DLCommonInformationr5ModeSpecificInfoTddTddOption::choicesInfo[2] = {
	&DLCommonInformationr5ModeSpecificInfoTddTddOptionTdd384::theInfo,
	&DLCommonInformationr5ModeSpecificInfoTddTddOptionTdd128::theInfo,
};
const DLCommonInformationr5ModeSpecificInfoTddTddOption::Info DLCommonInformationr5ModeSpecificInfoTddTddOption::theInfo = {
	DLCommonInformationr5ModeSpecificInfoTddTddOption::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLCommonInformationr5ModeSpecificInfoTdd::itemsInfo[2] = {
	&DLCommonInformationr5ModeSpecificInfoTddTddOption::theInfo,
	&DefaultDPCHOffsetValueTDD::theInfo,
};
bool DLCommonInformationr5ModeSpecificInfoTdd::itemsPres[2] = {
	1,
	0,
};
const DLCommonInformationr5ModeSpecificInfoTdd::Info DLCommonInformationr5ModeSpecificInfoTdd::theInfo = {
	DLCommonInformationr5ModeSpecificInfoTdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *DLCommonInformationr5ModeSpecificInfo::choicesInfo[2] = {
	&DLCommonInformationr5ModeSpecificInfoFdd::theInfo,
	&DLCommonInformationr5ModeSpecificInfoTdd::theInfo,
};
const DLCommonInformationr5ModeSpecificInfo::Info DLCommonInformationr5ModeSpecificInfo::theInfo = {
	DLCommonInformationr5ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLCommonInformationr5::itemsInfo[3] = {
	&DLDPCHInfoCommonr4::theInfo,
	&DLCommonInformationr5ModeSpecificInfo::theInfo,
	&DLCommonInformationr5mac_hsResetIndicator::theInfo,
};
bool DLCommonInformationr5::itemsPres[3] = {
	0,
	1,
	0,
};
const DLCommonInformationr5::Info DLCommonInformationr5::theInfo = {
	DLCommonInformationr5::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
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

const void *DLDPCHInfoCommonr6CfnHandling::choicesInfo[2] = {
	&DLDPCHInfoCommonr6CfnHandlingMaintain::theInfo,
	&DLDPCHInfoCommonr6CfnHandlingInitialise::theInfo,
};
const DLDPCHInfoCommonr6CfnHandling::Info DLDPCHInfoCommonr6CfnHandling::theInfo = {
	DLDPCHInfoCommonr6CfnHandling::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLDPCHInfoCommonr6ModeSpecificInfoFdd::itemsInfo[6] = {
	&DLDPCHPowerControlInfo::theInfo,
	&PowerOffsetPilotpdpdch::theInfo,
	&Dlratematchingrestriction::theInfo,
	&SF512AndPilot::theInfo,
	&PositionFixedOrFlexible::theInfo,
	&DLDPCHInfoCommonr6ModeSpecificInfoFddTfciExistence::theInfo,
};
bool DLDPCHInfoCommonr6ModeSpecificInfoFdd::itemsPres[6] = {
	0,
	1,
	0,
	1,
	1,
	1,
};
const DLDPCHInfoCommonr6ModeSpecificInfoFdd::Info DLDPCHInfoCommonr6ModeSpecificInfoFdd::theInfo = {
	DLDPCHInfoCommonr6ModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 2, 0
};

const void *DLDPCHInfoCommonr6ModeSpecificInfoTdd::itemsInfo[1] = {
	&DLDPCHPowerControlInfo::theInfo,
};
bool DLDPCHInfoCommonr6ModeSpecificInfoTdd::itemsPres[1] = {
	0,
};
const DLDPCHInfoCommonr6ModeSpecificInfoTdd::Info DLDPCHInfoCommonr6ModeSpecificInfoTdd::theInfo = {
	DLDPCHInfoCommonr6ModeSpecificInfoTdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLDPCHInfoCommonr6ModeSpecificInfo::choicesInfo[2] = {
	&DLDPCHInfoCommonr6ModeSpecificInfoFdd::theInfo,
	&DLDPCHInfoCommonr6ModeSpecificInfoTdd::theInfo,
};
const DLDPCHInfoCommonr6ModeSpecificInfo::Info DLDPCHInfoCommonr6ModeSpecificInfo::theInfo = {
	DLDPCHInfoCommonr6ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLDPCHInfoCommonr6::itemsInfo[3] = {
	&DLDPCHInfoCommonr6CfnHandling::theInfo,
	&DLDPCHInfoCommonr6ModeSpecificInfo::theInfo,
	&MACdHFNinitialvalue::theInfo,
};
bool DLDPCHInfoCommonr6::itemsPres[3] = {
	1,
	1,
	0,
};
const DLDPCHInfoCommonr6::Info DLDPCHInfoCommonr6::theInfo = {
	DLDPCHInfoCommonr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
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

const void *DLFDPCHInfoCommonr6CfnHandling::choicesInfo[2] = {
	&DLFDPCHInfoCommonr6CfnHandlingMaintain::theInfo,
	&DLFDPCHInfoCommonr6CfnHandlingInitialise::theInfo,
};
const DLFDPCHInfoCommonr6CfnHandling::Info DLFDPCHInfoCommonr6CfnHandling::theInfo = {
	DLFDPCHInfoCommonr6CfnHandling::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLFDPCHInfoCommonr6::itemsInfo[3] = {
	&DLFDPCHInfoCommonr6CfnHandling::theInfo,
	&DLDPCHPowerControlInfo::theInfo,
	&DLFDPCHInfoCommonr6DlFDPCHTPCcommandErrorRate::theInfo,
};
bool DLFDPCHInfoCommonr6::itemsPres[3] = {
	1,
	0,
	0,
};
const DLFDPCHInfoCommonr6::Info DLFDPCHInfoCommonr6::theInfo = {
	DLFDPCHInfoCommonr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *DLCommonInformationr6DldpchInfoCommon::choicesInfo[2] = {
	&DLDPCHInfoCommonr6::theInfo,
	&DLFDPCHInfoCommonr6::theInfo,
};
const DLCommonInformationr6DldpchInfoCommon::Info DLCommonInformationr6DldpchInfoCommon::theInfo = {
	DLCommonInformationr6DldpchInfoCommon::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLCommonInformationr6ModeSpecificInfoFdd::itemsInfo[3] = {
	&DefaultDPCHOffsetValueFDD::theInfo,
	&DPCHCompressedModeInfo::theInfo,
	&TXDiversityMode::theInfo,
};
bool DLCommonInformationr6ModeSpecificInfoFdd::itemsPres[3] = {
	0,
	0,
	0,
};
const DLCommonInformationr6ModeSpecificInfoFdd::Info DLCommonInformationr6ModeSpecificInfoFdd::theInfo = {
	DLCommonInformationr6ModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *DLCommonInformationr6ModeSpecificInfoTddTddOptionTdd128::itemsInfo[1] = {
	&DLCommonInformationr6ModeSpecificInfoTddTddOptionTdd128TstdIndicator::theInfo,
};
bool DLCommonInformationr6ModeSpecificInfoTddTddOptionTdd128::itemsPres[1] = {
	1,
};
const DLCommonInformationr6ModeSpecificInfoTddTddOptionTdd128::Info DLCommonInformationr6ModeSpecificInfoTddTddOptionTdd128::theInfo = {
	DLCommonInformationr6ModeSpecificInfoTddTddOptionTdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DLCommonInformationr6ModeSpecificInfoTddTddOption::choicesInfo[2] = {
	&DLCommonInformationr6ModeSpecificInfoTddTddOptionTdd384::theInfo,
	&DLCommonInformationr6ModeSpecificInfoTddTddOptionTdd128::theInfo,
};
const DLCommonInformationr6ModeSpecificInfoTddTddOption::Info DLCommonInformationr6ModeSpecificInfoTddTddOption::theInfo = {
	DLCommonInformationr6ModeSpecificInfoTddTddOption::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLCommonInformationr6ModeSpecificInfoTdd::itemsInfo[2] = {
	&DLCommonInformationr6ModeSpecificInfoTddTddOption::theInfo,
	&DefaultDPCHOffsetValueTDD::theInfo,
};
bool DLCommonInformationr6ModeSpecificInfoTdd::itemsPres[2] = {
	1,
	0,
};
const DLCommonInformationr6ModeSpecificInfoTdd::Info DLCommonInformationr6ModeSpecificInfoTdd::theInfo = {
	DLCommonInformationr6ModeSpecificInfoTdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *DLCommonInformationr6ModeSpecificInfo::choicesInfo[2] = {
	&DLCommonInformationr6ModeSpecificInfoFdd::theInfo,
	&DLCommonInformationr6ModeSpecificInfoTdd::theInfo,
};
const DLCommonInformationr6ModeSpecificInfo::Info DLCommonInformationr6ModeSpecificInfo::theInfo = {
	DLCommonInformationr6ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLCommonInformationr6::itemsInfo[4] = {
	&DLCommonInformationr6DldpchInfoCommon::theInfo,
	&DLCommonInformationr6ModeSpecificInfo::theInfo,
	&DLCommonInformationr6mac_hsResetIndicator::theInfo,
	&DLCommonInformationr6postVerificationPeriod::theInfo,
};
bool DLCommonInformationr6::itemsPres[4] = {
	0,
	1,
	0,
	0,
};
const DLCommonInformationr6::Info DLCommonInformationr6::theInfo = {
	DLCommonInformationr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 3, 0
};

const void *DLCommonInformationr7DldpchInfoCommon::choicesInfo[2] = {
	&DLDPCHInfoCommonr6::theInfo,
	&DLFDPCHInfoCommonr6::theInfo,
};
const DLCommonInformationr7DldpchInfoCommon::Info DLCommonInformationr7DldpchInfoCommon::theInfo = {
	DLCommonInformationr7DldpchInfoCommon::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLCommonInformationr7ModeSpecificInfoFdd::itemsInfo[3] = {
	&DefaultDPCHOffsetValueFDD::theInfo,
	&DPCHCompressedModeInfo::theInfo,
	&TXDiversityMode::theInfo,
};
bool DLCommonInformationr7ModeSpecificInfoFdd::itemsPres[3] = {
	0,
	0,
	0,
};
const DLCommonInformationr7ModeSpecificInfoFdd::Info DLCommonInformationr7ModeSpecificInfoFdd::theInfo = {
	DLCommonInformationr7ModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *DLCommonInformationr7ModeSpecificInfoTddTddOptionTdd128::itemsInfo[1] = {
	&DLCommonInformationr7ModeSpecificInfoTddTddOptionTdd128TstdIndicator::theInfo,
};
bool DLCommonInformationr7ModeSpecificInfoTddTddOptionTdd128::itemsPres[1] = {
	1,
};
const DLCommonInformationr7ModeSpecificInfoTddTddOptionTdd128::Info DLCommonInformationr7ModeSpecificInfoTddTddOptionTdd128::theInfo = {
	DLCommonInformationr7ModeSpecificInfoTddTddOptionTdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DLCommonInformationr7ModeSpecificInfoTddTddOption::choicesInfo[3] = {
	&DLCommonInformationr7ModeSpecificInfoTddTddOptionTdd384::theInfo,
	&DLCommonInformationr7ModeSpecificInfoTddTddOptionTdd768::theInfo,
	&DLCommonInformationr7ModeSpecificInfoTddTddOptionTdd128::theInfo,
};
const DLCommonInformationr7ModeSpecificInfoTddTddOption::Info DLCommonInformationr7ModeSpecificInfoTddTddOption::theInfo = {
	DLCommonInformationr7ModeSpecificInfoTddTddOption::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *DLCommonInformationr7ModeSpecificInfoTdd::itemsInfo[2] = {
	&DLCommonInformationr7ModeSpecificInfoTddTddOption::theInfo,
	&DefaultDPCHOffsetValueTDD::theInfo,
};
bool DLCommonInformationr7ModeSpecificInfoTdd::itemsPres[2] = {
	1,
	0,
};
const DLCommonInformationr7ModeSpecificInfoTdd::Info DLCommonInformationr7ModeSpecificInfoTdd::theInfo = {
	DLCommonInformationr7ModeSpecificInfoTdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *DLCommonInformationr7ModeSpecificInfo::choicesInfo[2] = {
	&DLCommonInformationr7ModeSpecificInfoFdd::theInfo,
	&DLCommonInformationr7ModeSpecificInfoTdd::theInfo,
};
const DLCommonInformationr7ModeSpecificInfo::Info DLCommonInformationr7ModeSpecificInfo::theInfo = {
	DLCommonInformationr7ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLCommonInformationr7::itemsInfo[4] = {
	&DLCommonInformationr7DldpchInfoCommon::theInfo,
	&DLCommonInformationr7ModeSpecificInfo::theInfo,
	&DLCommonInformationr7mac_hsResetIndicator::theInfo,
	&DLCommonInformationr7postVerificationPeriod::theInfo,
};
bool DLCommonInformationr7::itemsPres[4] = {
	0,
	1,
	0,
	0,
};
const DLCommonInformationr7::Info DLCommonInformationr7::theInfo = {
	DLCommonInformationr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 3, 0
};

const void *DLCommonInformationr8DldpchInfoCommon::choicesInfo[2] = {
	&DLDPCHInfoCommonr6::theInfo,
	&DLFDPCHInfoCommonr6::theInfo,
};
const DLCommonInformationr8DldpchInfoCommon::Info DLCommonInformationr8DldpchInfoCommon::theInfo = {
	DLCommonInformationr8DldpchInfoCommon::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *TGPSequencer8TgpsStatusActivate::itemsInfo[1] = {
	&TGCFN::theInfo,
};
bool TGPSequencer8TgpsStatusActivate::itemsPres[1] = {
	1,
};
const TGPSequencer8TgpsStatusActivate::Info TGPSequencer8TgpsStatusActivate::theInfo = {
	TGPSequencer8TgpsStatusActivate::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *TGPSequencer8TgpsStatus::choicesInfo[2] = {
	&TGPSequencer8TgpsStatusActivate::theInfo,
	&TGPSequencer8TgpsStatusDeactivate::theInfo,
};
const TGPSequencer8TgpsStatus::Info TGPSequencer8TgpsStatus::theInfo = {
	TGPSequencer8TgpsStatus::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *TGPSConfigurationParamsr8::itemsInfo[17] = {
	&TGMPr8::theInfo,
	&TGPRC::theInfo,
	&TGSN::theInfo,
	&TGL::theInfo,
	&TGL::theInfo,
	&TGD::theInfo,
	&TGPL::theInfo,
	&RPP::theInfo,
	&ITP::theInfo,
	&ULDLMode::theInfo,
	&DLFrameType::theInfo,
	&DeltaSIR::theInfo,
	&DeltaSIR::theInfo,
	&DeltaSIR::theInfo,
	&DeltaSIR::theInfo,
	&NidentifyAbort::theInfo,
	&TreconfirmAbort::theInfo,
};
bool TGPSConfigurationParamsr8::itemsPres[17] = {
	1,
	1,
	1,
	1,
	0,
	1,
	1,
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
const TGPSConfigurationParamsr8::Info TGPSConfigurationParamsr8::theInfo = {
	TGPSConfigurationParamsr8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	17, 5, 0
};

const void *TGPSequencer8::itemsInfo[3] = {
	&TGPSI::theInfo,
	&TGPSequencer8TgpsStatus::theInfo,
	&TGPSConfigurationParamsr8::theInfo,
};
bool TGPSequencer8::itemsPres[3] = {
	1,
	1,
	0,
};
const TGPSequencer8::Info TGPSequencer8::theInfo = {
	TGPSequencer8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
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

const void *DLCommonInformationr8ModeSpecificInfoFdd::itemsInfo[3] = {
	&DefaultDPCHOffsetValueFDD::theInfo,
	&DPCHCompressedModeInfor8::theInfo,
	&TXDiversityMode::theInfo,
};
bool DLCommonInformationr8ModeSpecificInfoFdd::itemsPres[3] = {
	0,
	0,
	0,
};
const DLCommonInformationr8ModeSpecificInfoFdd::Info DLCommonInformationr8ModeSpecificInfoFdd::theInfo = {
	DLCommonInformationr8ModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *DLCommonInformationr8ModeSpecificInfoTddTddOptionTdd128::itemsInfo[1] = {
	&DLCommonInformationr8ModeSpecificInfoTddTddOptionTdd128TstdIndicator::theInfo,
};
bool DLCommonInformationr8ModeSpecificInfoTddTddOptionTdd128::itemsPres[1] = {
	1,
};
const DLCommonInformationr8ModeSpecificInfoTddTddOptionTdd128::Info DLCommonInformationr8ModeSpecificInfoTddTddOptionTdd128::theInfo = {
	DLCommonInformationr8ModeSpecificInfoTddTddOptionTdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DLCommonInformationr8ModeSpecificInfoTddTddOption::choicesInfo[3] = {
	&DLCommonInformationr8ModeSpecificInfoTddTddOptionTdd384::theInfo,
	&DLCommonInformationr8ModeSpecificInfoTddTddOptionTdd768::theInfo,
	&DLCommonInformationr8ModeSpecificInfoTddTddOptionTdd128::theInfo,
};
const DLCommonInformationr8ModeSpecificInfoTddTddOption::Info DLCommonInformationr8ModeSpecificInfoTddTddOption::theInfo = {
	DLCommonInformationr8ModeSpecificInfoTddTddOption::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *DLCommonInformationr8ModeSpecificInfoTdd::itemsInfo[2] = {
	&DLCommonInformationr8ModeSpecificInfoTddTddOption::theInfo,
	&DefaultDPCHOffsetValueTDD::theInfo,
};
bool DLCommonInformationr8ModeSpecificInfoTdd::itemsPres[2] = {
	1,
	0,
};
const DLCommonInformationr8ModeSpecificInfoTdd::Info DLCommonInformationr8ModeSpecificInfoTdd::theInfo = {
	DLCommonInformationr8ModeSpecificInfoTdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *DLCommonInformationr8ModeSpecificInfo::choicesInfo[2] = {
	&DLCommonInformationr8ModeSpecificInfoFdd::theInfo,
	&DLCommonInformationr8ModeSpecificInfoTdd::theInfo,
};
const DLCommonInformationr8ModeSpecificInfo::Info DLCommonInformationr8ModeSpecificInfo::theInfo = {
	DLCommonInformationr8ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLCommonInformationr8::itemsInfo[4] = {
	&DLCommonInformationr8DldpchInfoCommon::theInfo,
	&DLCommonInformationr8ModeSpecificInfo::theInfo,
	&DLCommonInformationr8mac_hsResetIndicator::theInfo,
	&DLCommonInformationr8postVerificationPeriod::theInfo,
};
bool DLCommonInformationr8::itemsPres[4] = {
	0,
	1,
	0,
	0,
};
const DLCommonInformationr8::Info DLCommonInformationr8::theInfo = {
	DLCommonInformationr8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 3, 0
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

const void *DLDPCHInfoPerRLFdd::itemsInfo[7] = {
	&PCPICHUsageForChannelEst::theInfo,
	&DPCHFrameOffset::theInfo,
	&SecondaryCPICHInfo::theInfo,
	&DLChannelisationCodeList::theInfo,
	&TPCCombinationIndex::theInfo,
	&SSDTCellIdentity::theInfo,
	&ClosedLoopTimingAdjMode::theInfo,
};
bool DLDPCHInfoPerRLFdd::itemsPres[7] = {
	1,
	1,
	0,
	1,
	1,
	0,
	0,
};
const DLDPCHInfoPerRLFdd::Info DLDPCHInfoPerRLFdd::theInfo = {
	DLDPCHInfoPerRLFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	7, 3, 0
};

const void *DLDPCHInfoPerRLTdd::itemsInfo[2] = {
	&DLCCTrChList::theInfo,
	&DLCCTrChListToRemove::theInfo,
};
bool DLDPCHInfoPerRLTdd::itemsPres[2] = {
	0,
	0,
};
const DLDPCHInfoPerRLTdd::Info DLDPCHInfoPerRLTdd::theInfo = {
	DLDPCHInfoPerRLTdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *DLDPCHInfoPerRL::choicesInfo[2] = {
	&DLDPCHInfoPerRLFdd::theInfo,
	&DLDPCHInfoPerRLTdd::theInfo,
};
const DLDPCHInfoPerRL::Info DLDPCHInfoPerRL::theInfo = {
	DLDPCHInfoPerRL::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLDPCHInfoPerRLr4Fdd::itemsInfo[7] = {
	&PCPICHUsageForChannelEst::theInfo,
	&DPCHFrameOffset::theInfo,
	&SecondaryCPICHInfo::theInfo,
	&DLChannelisationCodeList::theInfo,
	&TPCCombinationIndex::theInfo,
	&SSDTCellIdentity::theInfo,
	&ClosedLoopTimingAdjMode::theInfo,
};
bool DLDPCHInfoPerRLr4Fdd::itemsPres[7] = {
	1,
	1,
	0,
	1,
	1,
	0,
	0,
};
const DLDPCHInfoPerRLr4Fdd::Info DLDPCHInfoPerRLr4Fdd::theInfo = {
	DLDPCHInfoPerRLr4Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	7, 3, 0
};

const void *DLDPCHInfoPerRLr4Tdd::itemsInfo[2] = {
	&DLCCTrChListr4::theInfo,
	&DLCCTrChListToRemove::theInfo,
};
bool DLDPCHInfoPerRLr4Tdd::itemsPres[2] = {
	0,
	0,
};
const DLDPCHInfoPerRLr4Tdd::Info DLDPCHInfoPerRLr4Tdd::theInfo = {
	DLDPCHInfoPerRLr4Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *DLDPCHInfoPerRLr4::choicesInfo[2] = {
	&DLDPCHInfoPerRLr4Fdd::theInfo,
	&DLDPCHInfoPerRLr4Tdd::theInfo,
};
const DLDPCHInfoPerRLr4::Info DLDPCHInfoPerRLr4::theInfo = {
	DLDPCHInfoPerRLr4::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLDPCHInfoPerRLr5Fdd::itemsInfo[8] = {
	&PCPICHUsageForChannelEst::theInfo,
	&DPCHFrameOffset::theInfo,
	&SecondaryCPICHInfo::theInfo,
	&DLChannelisationCodeList::theInfo,
	&TPCCombinationIndex::theInfo,
	&PowerOffsetTPCpdpdch::theInfo,
	&SSDTCellIdentity::theInfo,
	&ClosedLoopTimingAdjMode::theInfo,
};
bool DLDPCHInfoPerRLr5Fdd::itemsPres[8] = {
	1,
	1,
	0,
	1,
	1,
	0,
	0,
	0,
};
const DLDPCHInfoPerRLr5Fdd::Info DLDPCHInfoPerRLr5Fdd::theInfo = {
	DLDPCHInfoPerRLr5Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	8, 4, 0
};

const void *DLDPCHInfoPerRLr5Tdd::itemsInfo[2] = {
	&DLCCTrChListr4::theInfo,
	&DLCCTrChListToRemove::theInfo,
};
bool DLDPCHInfoPerRLr5Tdd::itemsPres[2] = {
	0,
	0,
};
const DLDPCHInfoPerRLr5Tdd::Info DLDPCHInfoPerRLr5Tdd::theInfo = {
	DLDPCHInfoPerRLr5Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *DLDPCHInfoPerRLr5::choicesInfo[2] = {
	&DLDPCHInfoPerRLr5Fdd::theInfo,
	&DLDPCHInfoPerRLr5Tdd::theInfo,
};
const DLDPCHInfoPerRLr5::Info DLDPCHInfoPerRLr5::theInfo = {
	DLDPCHInfoPerRLr5::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLDPCHInfoPerRLr6Fdd::itemsInfo[7] = {
	&PCPICHUsageForChannelEst::theInfo,
	&DPCHFrameOffset::theInfo,
	&SecondaryCPICHInfo::theInfo,
	&DLChannelisationCodeList::theInfo,
	&TPCCombinationIndex::theInfo,
	&PowerOffsetTPCpdpdch::theInfo,
	&ClosedLoopTimingAdjMode::theInfo,
};
bool DLDPCHInfoPerRLr6Fdd::itemsPres[7] = {
	1,
	1,
	0,
	1,
	1,
	0,
	0,
};
const DLDPCHInfoPerRLr6Fdd::Info DLDPCHInfoPerRLr6Fdd::theInfo = {
	DLDPCHInfoPerRLr6Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	7, 3, 0
};

const void *DLDPCHInfoPerRLr6Tdd::itemsInfo[2] = {
	&DLCCTrChListr4::theInfo,
	&DLCCTrChListToRemove::theInfo,
};
bool DLDPCHInfoPerRLr6Tdd::itemsPres[2] = {
	0,
	0,
};
const DLDPCHInfoPerRLr6Tdd::Info DLDPCHInfoPerRLr6Tdd::theInfo = {
	DLDPCHInfoPerRLr6Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *DLDPCHInfoPerRLr6::choicesInfo[2] = {
	&DLDPCHInfoPerRLr6Fdd::theInfo,
	&DLDPCHInfoPerRLr6Tdd::theInfo,
};
const DLDPCHInfoPerRLr6::Info DLDPCHInfoPerRLr6::theInfo = {
	DLDPCHInfoPerRLr6::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLDPCHInfoPerRLr7Fdd::itemsInfo[7] = {
	&PCPICHUsageForChannelEst::theInfo,
	&DPCHFrameOffset::theInfo,
	&SecondaryCPICHInfo::theInfo,
	&DLChannelisationCodeList::theInfo,
	&TPCCombinationIndex::theInfo,
	&PowerOffsetTPCpdpdch::theInfo,
	&ClosedLoopTimingAdjMode::theInfo,
};
bool DLDPCHInfoPerRLr7Fdd::itemsPres[7] = {
	1,
	1,
	0,
	1,
	1,
	0,
	0,
};
const DLDPCHInfoPerRLr7Fdd::Info DLDPCHInfoPerRLr7Fdd::theInfo = {
	DLDPCHInfoPerRLr7Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	7, 3, 0
};

const void *DLDPCHInfoPerRLr7Tdd::itemsInfo[2] = {
	&DLCCTrChListr7::theInfo,
	&DLCCTrChListToRemove::theInfo,
};
bool DLDPCHInfoPerRLr7Tdd::itemsPres[2] = {
	0,
	0,
};
const DLDPCHInfoPerRLr7Tdd::Info DLDPCHInfoPerRLr7Tdd::theInfo = {
	DLDPCHInfoPerRLr7Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *DLDPCHInfoPerRLr7::choicesInfo[2] = {
	&DLDPCHInfoPerRLr7Fdd::theInfo,
	&DLDPCHInfoPerRLr7Tdd::theInfo,
};
const DLDPCHInfoPerRLr7::Info DLDPCHInfoPerRLr7::theInfo = {
	DLDPCHInfoPerRLr7::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLFDPCHInfoPerRLr6::itemsInfo[6] = {
	&PCPICHUsageForChannelEst::theInfo,
	&DPCHFrameOffset::theInfo,
	&SecondaryCPICHInfo::theInfo,
	&SecondaryScramblingCode::theInfo,
	&DLFDPCHInfoPerRLr6DlChannelisationCode::theInfo,
	&TPCCombinationIndex::theInfo,
};
bool DLFDPCHInfoPerRLr6::itemsPres[6] = {
	1,
	1,
	0,
	0,
	1,
	1,
};
const DLFDPCHInfoPerRLr6::Info DLFDPCHInfoPerRLr6::theInfo = {
	DLFDPCHInfoPerRLr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 2, 0
};

const void *DLDPCHInfoPerRLPostFDD::itemsInfo[3] = {
	&PCPICHUsageForChannelEst::theInfo,
	&DLChannelisationCode::theInfo,
	&TPCCombinationIndex::theInfo,
};
bool DLDPCHInfoPerRLPostFDD::itemsPres[3] = {
	1,
	1,
	1,
};
const DLDPCHInfoPerRLPostFDD::Info DLDPCHInfoPerRLPostFDD::theInfo = {
	DLDPCHInfoPerRLPostFDD::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
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

const void *HSSCCHInfor6ModeSpecificInfoFdd::itemsInfo[2] = {
	&HSSCCHInfor6ModeSpecificInfoFddHSSCCHChannelisationCodeInfo::theInfo,
	&SecondaryScramblingCode::theInfo,
};
bool HSSCCHInfor6ModeSpecificInfoFdd::itemsPres[2] = {
	1,
	0,
};
const HSSCCHInfor6ModeSpecificInfoFdd::Info HSSCCHInfor6ModeSpecificInfoFdd::theInfo = {
	HSSCCHInfor6ModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *HSSCCHInfor6ModeSpecificInfoTddTdd384::itemsInfo[5] = {
	&HSSCCHInfor6ModeSpecificInfoTddTdd384Nackackpoweroffset::theInfo,
	&HSSICHPowerControlInfoTDD384::theInfo,
	&DHSSync::theInfo,
	&BlerTarget::theInfo,
	&HSSCCHInfor6ModeSpecificInfoTddTdd384HSSCCHSetConfiguration::theInfo,
};
bool HSSCCHInfor6ModeSpecificInfoTddTdd384::itemsPres[5] = {
	1,
	1,
	0,
	1,
	1,
};
const HSSCCHInfor6ModeSpecificInfoTddTdd384::Info HSSCCHInfor6ModeSpecificInfoTddTdd384::theInfo = {
	HSSCCHInfor6ModeSpecificInfoTddTdd384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 1, 0
};

const void *HSSCCHInfor6ModeSpecificInfoTddTdd128::itemsInfo[5] = {
	&HSSCCHInfor6ModeSpecificInfoTddTdd128Nackackpoweroffset::theInfo,
	&HSSCCHInfor6ModeSpecificInfoTddTdd128PowerlevelHSSICH::theInfo,
	&HSSCCHInfor6ModeSpecificInfoTddTdd128tpc_step_size::theInfo,
	&BlerTarget::theInfo,
	&HSSCCHInfor6ModeSpecificInfoTddTdd128HSSCCHSetConfiguration::theInfo,
};
bool HSSCCHInfor6ModeSpecificInfoTddTdd128::itemsPres[5] = {
	1,
	1,
	1,
	1,
	1,
};
const HSSCCHInfor6ModeSpecificInfoTddTdd128::Info HSSCCHInfor6ModeSpecificInfoTddTdd128::theInfo = {
	HSSCCHInfor6ModeSpecificInfoTddTdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 0, 0
};

const void *HSSCCHInfor6ModeSpecificInfoTdd::choicesInfo[2] = {
	&HSSCCHInfor6ModeSpecificInfoTddTdd384::theInfo,
	&HSSCCHInfor6ModeSpecificInfoTddTdd128::theInfo,
};
const HSSCCHInfor6ModeSpecificInfoTdd::Info HSSCCHInfor6ModeSpecificInfoTdd::theInfo = {
	HSSCCHInfor6ModeSpecificInfoTdd::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *HSSCCHInfor6ModeSpecificInfo::choicesInfo[2] = {
	&HSSCCHInfor6ModeSpecificInfoFdd::theInfo,
	&HSSCCHInfor6ModeSpecificInfoTdd::theInfo,
};
const HSSCCHInfor6ModeSpecificInfo::Info HSSCCHInfor6ModeSpecificInfo::theInfo = {
	HSSCCHInfor6ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
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

const void *DLHSPDSCHInformationr6ModeSpecificInfoTddTdd384::itemsInfo[1] = {
	&DLHSPDSCHTSConfiguration::theInfo,
};
bool DLHSPDSCHInformationr6ModeSpecificInfoTddTdd384::itemsPres[1] = {
	0,
};
const DLHSPDSCHInformationr6ModeSpecificInfoTddTdd384::Info DLHSPDSCHInformationr6ModeSpecificInfoTddTdd384::theInfo = {
	DLHSPDSCHInformationr6ModeSpecificInfoTddTdd384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLHSPDSCHInformationr6ModeSpecificInfoTddTdd128::itemsInfo[1] = {
	&HSPDSCHMidambleConfigurationTDD128::theInfo,
};
bool DLHSPDSCHInformationr6ModeSpecificInfoTddTdd128::itemsPres[1] = {
	0,
};
const DLHSPDSCHInformationr6ModeSpecificInfoTddTdd128::Info DLHSPDSCHInformationr6ModeSpecificInfoTddTdd128::theInfo = {
	DLHSPDSCHInformationr6ModeSpecificInfoTddTdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLHSPDSCHInformationr6ModeSpecificInfoTdd::choicesInfo[2] = {
	&DLHSPDSCHInformationr6ModeSpecificInfoTddTdd384::theInfo,
	&DLHSPDSCHInformationr6ModeSpecificInfoTddTdd128::theInfo,
};
const DLHSPDSCHInformationr6ModeSpecificInfoTdd::Info DLHSPDSCHInformationr6ModeSpecificInfoTdd::theInfo = {
	DLHSPDSCHInformationr6ModeSpecificInfoTdd::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLHSPDSCHInformationr6ModeSpecificInfo::choicesInfo[2] = {
	&DLHSPDSCHInformationr6ModeSpecificInfoTdd::theInfo,
	&DLHSPDSCHInformationr6ModeSpecificInfoFdd::theInfo,
};
const DLHSPDSCHInformationr6ModeSpecificInfo::Info DLHSPDSCHInformationr6ModeSpecificInfo::theInfo = {
	DLHSPDSCHInformationr6ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLHSPDSCHInformationr6::itemsInfo[3] = {
	&HSSCCHInfor6::theInfo,
	&MeasurementFeedbackInfo::theInfo,
	&DLHSPDSCHInformationr6ModeSpecificInfo::theInfo,
};
bool DLHSPDSCHInformationr6::itemsPres[3] = {
	0,
	0,
	1,
};
const DLHSPDSCHInformationr6::Info DLHSPDSCHInformationr6::theInfo = {
	DLHSPDSCHInformationr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *DLHSPDSCHInformationr8extModeSpecificInfoTddTdd128::itemsInfo[1] = {
	&OutofSyncWindow::theInfo,
};
bool DLHSPDSCHInformationr8extModeSpecificInfoTddTdd128::itemsPres[1] = {
	0,
};
const DLHSPDSCHInformationr8extModeSpecificInfoTddTdd128::Info DLHSPDSCHInformationr8extModeSpecificInfoTddTdd128::theInfo = {
	DLHSPDSCHInformationr8extModeSpecificInfoTddTdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLHSPDSCHInformationr8extModeSpecificInfoTdd::choicesInfo[3] = {
	&DLHSPDSCHInformationr8extModeSpecificInfoTddTdd384::theInfo,
	&DLHSPDSCHInformationr8extModeSpecificInfoTddTdd768::theInfo,
	&DLHSPDSCHInformationr8extModeSpecificInfoTddTdd128::theInfo,
};
const DLHSPDSCHInformationr8extModeSpecificInfoTdd::Info DLHSPDSCHInformationr8extModeSpecificInfoTdd::theInfo = {
	DLHSPDSCHInformationr8extModeSpecificInfoTdd::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *DLHSPDSCHInformationr8extModeSpecificInfo::choicesInfo[2] = {
	&DLHSPDSCHInformationr8extModeSpecificInfoTdd::theInfo,
	&DLHSPDSCHInformationr8extModeSpecificInfoFdd::theInfo,
};
const DLHSPDSCHInformationr8extModeSpecificInfo::Info DLHSPDSCHInformationr8extModeSpecificInfo::theInfo = {
	DLHSPDSCHInformationr8extModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
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

const void *HSSCCHInfor8extModeSpecificInfoTddTdd128::itemsInfo[1] = {
	&HSSCCHInfor8extModeSpecificInfoTddTdd128hS_SCCH_tpc_step_size::theInfo,
};
bool HSSCCHInfor8extModeSpecificInfoTddTdd128::itemsPres[1] = {
	0,
};
const HSSCCHInfor8extModeSpecificInfoTddTdd128::Info HSSCCHInfor8extModeSpecificInfoTddTdd128::theInfo = {
	HSSCCHInfor8extModeSpecificInfoTddTdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *HSSCCHInfor8extModeSpecificInfoTdd::choicesInfo[3] = {
	&HSSCCHInfor8extModeSpecificInfoTddTdd384::theInfo,
	&HSSCCHInfor8extModeSpecificInfoTddTdd768::theInfo,
	&HSSCCHInfor8extModeSpecificInfoTddTdd128::theInfo,
};
const HSSCCHInfor8extModeSpecificInfoTdd::Info HSSCCHInfor8extModeSpecificInfoTdd::theInfo = {
	HSSCCHInfor8extModeSpecificInfoTdd::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *HSSCCHInfor8extModeSpecificInfo::choicesInfo[2] = {
	&HSSCCHInfor8extModeSpecificInfoFdd::theInfo,
	&HSSCCHInfor8extModeSpecificInfoTdd::theInfo,
};
const HSSCCHInfor8extModeSpecificInfo::Info HSSCCHInfor8extModeSpecificInfo::theInfo = {
	HSSCCHInfor8extModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
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

const void *PDSCHSHODCHInfo::itemsInfo[2] = {
	&DSCHRadioLinkIdentifier::theInfo,
	&RLIdentifierList::theInfo,
};
bool PDSCHSHODCHInfo::itemsPres[2] = {
	1,
	0,
};
const PDSCHSHODCHInfo::Info PDSCHSHODCHInfo::theInfo = {
	PDSCHSHODCHInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *DSCHMapping::itemsInfo[4] = {
	&MaxTFCIField2Value::theInfo,
	&SFPDSCH::theInfo,
	&CodeNumberDSCH::theInfo,
	&MultiCodeInfo::theInfo,
};
bool DSCHMapping::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const DSCHMapping::Info DSCHMapping::theInfo = {
	DSCHMapping::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 0, 0
};

const void *PDSCHCodeInfo::itemsInfo[3] = {
	&SFPDSCH::theInfo,
	&CodeNumberDSCH::theInfo,
	&MultiCodeInfo::theInfo,
};
bool PDSCHCodeInfo::itemsPres[3] = {
	1,
	1,
	1,
};
const PDSCHCodeInfo::Info PDSCHCodeInfo::theInfo = {
	PDSCHCodeInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *ReplacedPDSCHCodeInfo::itemsInfo[4] = {
	&MaxTFCIField2Value::theInfo,
	&SFPDSCH::theInfo,
	&CodeNumberDSCH::theInfo,
	&MultiCodeInfo::theInfo,
};
bool ReplacedPDSCHCodeInfo::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const ReplacedPDSCHCodeInfo::Info ReplacedPDSCHCodeInfo::theInfo = {
	ReplacedPDSCHCodeInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 0, 0
};

const void *PDSCHCodeMappingSignallingMethod::choicesInfo[4] = {
	&CodeRange::theInfo,
	&DSCHMappingList::theInfo,
	&PDSCHCodeInfoList::theInfo,
	&ReplacedPDSCHCodeInfoList::theInfo,
};
const PDSCHCodeMappingSignallingMethod::Info PDSCHCodeMappingSignallingMethod::theInfo = {
	PDSCHCodeMappingSignallingMethod::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	3
};

const void *PDSCHCodeMapping::itemsInfo[2] = {
	&SecondaryScramblingCode::theInfo,
	&PDSCHCodeMappingSignallingMethod::theInfo,
};
bool PDSCHCodeMapping::itemsPres[2] = {
	0,
	1,
};
const PDSCHCodeMapping::Info PDSCHCodeMapping::theInfo = {
	PDSCHCodeMapping::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *DLInformationPerRLModeSpecificInfoFdd::itemsInfo[3] = {
	&PrimaryCPICHInfo::theInfo,
	&PDSCHSHODCHInfo::theInfo,
	&PDSCHCodeMapping::theInfo,
};
bool DLInformationPerRLModeSpecificInfoFdd::itemsPres[3] = {
	1,
	0,
	0,
};
const DLInformationPerRLModeSpecificInfoFdd::Info DLInformationPerRLModeSpecificInfoFdd::theInfo = {
	DLInformationPerRLModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *PrimaryCCPCHInfoFdd::itemsInfo[1] = {
	&PrimaryCCPCHInfoFddTxDiversityIndicator::theInfo,
};
bool PrimaryCCPCHInfoFdd::itemsPres[1] = {
	1,
};
const PrimaryCCPCHInfoFdd::Info PrimaryCCPCHInfoFdd::theInfo = {
	PrimaryCCPCHInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PrimaryCCPCHInfoTddSyncCaseSyncCase1::itemsInfo[1] = {
	&TimeslotNumber::theInfo,
};
bool PrimaryCCPCHInfoTddSyncCaseSyncCase1::itemsPres[1] = {
	1,
};
const PrimaryCCPCHInfoTddSyncCaseSyncCase1::Info PrimaryCCPCHInfoTddSyncCaseSyncCase1::theInfo = {
	PrimaryCCPCHInfoTddSyncCaseSyncCase1::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PrimaryCCPCHInfoTddSyncCaseSyncCase2::itemsInfo[1] = {
	&TimeslotSync2::theInfo,
};
bool PrimaryCCPCHInfoTddSyncCaseSyncCase2::itemsPres[1] = {
	1,
};
const PrimaryCCPCHInfoTddSyncCaseSyncCase2::Info PrimaryCCPCHInfoTddSyncCaseSyncCase2::theInfo = {
	PrimaryCCPCHInfoTddSyncCaseSyncCase2::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PrimaryCCPCHInfoTddSyncCase::choicesInfo[2] = {
	&PrimaryCCPCHInfoTddSyncCaseSyncCase1::theInfo,
	&PrimaryCCPCHInfoTddSyncCaseSyncCase2::theInfo,
};
const PrimaryCCPCHInfoTddSyncCase::Info PrimaryCCPCHInfoTddSyncCase::theInfo = {
	PrimaryCCPCHInfoTddSyncCase::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *PrimaryCCPCHInfoTdd::itemsInfo[3] = {
	&PrimaryCCPCHInfoTddSyncCase::theInfo,
	&CellParametersID::theInfo,
	&PrimaryCCPCHInfoTddSctdIndicator::theInfo,
};
bool PrimaryCCPCHInfoTdd::itemsPres[3] = {
	0,
	0,
	1,
};
const PrimaryCCPCHInfoTdd::Info PrimaryCCPCHInfoTdd::theInfo = {
	PrimaryCCPCHInfoTdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *PrimaryCCPCHInfo::choicesInfo[2] = {
	&PrimaryCCPCHInfoFdd::theInfo,
	&PrimaryCCPCHInfoTdd::theInfo,
};
const PrimaryCCPCHInfo::Info PrimaryCCPCHInfo::theInfo = {
	PrimaryCCPCHInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLInformationPerRLModeSpecificInfo::choicesInfo[2] = {
	&DLInformationPerRLModeSpecificInfoFdd::theInfo,
	&PrimaryCCPCHInfo::theInfo,
};
const DLInformationPerRLModeSpecificInfo::Info DLInformationPerRLModeSpecificInfo::theInfo = {
	DLInformationPerRLModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *SF256AndCodeNumber::choicesInfo[7] = {
	&SF256AndCodeNumberSf4::theInfo,
	&SF256AndCodeNumberSf8::theInfo,
	&SF256AndCodeNumberSf16::theInfo,
	&SF256AndCodeNumberSf32::theInfo,
	&SF256AndCodeNumberSf64::theInfo,
	&SF256AndCodeNumberSf128::theInfo,
	&SF256AndCodeNumberSf256::theInfo,
};
const SF256AndCodeNumber::Info SF256AndCodeNumber::theInfo = {
	SF256AndCodeNumber::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	6
};

const void *SecondaryCCPCHInfoModeSpecificInfoFdd::itemsInfo[9] = {
	&PCPICHUsageForChannelEst::theInfo,
	&SecondaryCPICHInfo::theInfo,
	&SecondaryScramblingCode::theInfo,
	&SecondaryCCPCHInfoModeSpecificInfoFddSttdIndicator::theInfo,
	&SF256AndCodeNumber::theInfo,
	&SecondaryCCPCHInfoModeSpecificInfoFddPilotSymbolExistence::theInfo,
	&SecondaryCCPCHInfoModeSpecificInfoFddTfciExistence::theInfo,
	&PositionFixedOrFlexible::theInfo,
	&TimingOffset::theInfo,
};
bool SecondaryCCPCHInfoModeSpecificInfoFdd::itemsPres[9] = {
	1,
	0,
	0,
	1,
	1,
	1,
	1,
	1,
	0,
};
const SecondaryCCPCHInfoModeSpecificInfoFdd::Info SecondaryCCPCHInfoModeSpecificInfoFdd::theInfo = {
	SecondaryCCPCHInfoModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	9, 3, 0
};

const void *SecondaryCCPCHInfoModeSpecificInfoTdd::itemsInfo[3] = {
	&CommonTimeslotInfoSCCPCH::theInfo,
	&IndividualTimeslotInfo::theInfo,
	&SCCPCHChannelisationCodeList::theInfo,
};
bool SecondaryCCPCHInfoModeSpecificInfoTdd::itemsPres[3] = {
	1,
	1,
	1,
};
const SecondaryCCPCHInfoModeSpecificInfoTdd::Info SecondaryCCPCHInfoModeSpecificInfoTdd::theInfo = {
	SecondaryCCPCHInfoModeSpecificInfoTdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *SecondaryCCPCHInfoModeSpecificInfo::choicesInfo[2] = {
	&SecondaryCCPCHInfoModeSpecificInfoFdd::theInfo,
	&SecondaryCCPCHInfoModeSpecificInfoTdd::theInfo,
};
const SecondaryCCPCHInfoModeSpecificInfo::Info SecondaryCCPCHInfoModeSpecificInfo::theInfo = {
	SecondaryCCPCHInfoModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
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

const void *FACHPCHInformation::itemsInfo[3] = {
	&TransportFormatSet::theInfo,
	&TransportChannelIdentity::theInfo,
	&FACHPCHInformationCtchIndicator::theInfo,
};
bool FACHPCHInformation::itemsPres[3] = {
	1,
	1,
	1,
};
const FACHPCHInformation::Info FACHPCHInformation::theInfo = {
	FACHPCHInformation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *PredefinedConfigIdentityAndValueTag::itemsInfo[2] = {
	&PredefinedConfigIdentity::theInfo,
	&PredefinedConfigValueTag::theInfo,
};
bool PredefinedConfigIdentityAndValueTag::itemsPres[2] = {
	1,
	1,
};
const PredefinedConfigIdentityAndValueTag::Info PredefinedConfigIdentityAndValueTag::theInfo = {
	PredefinedConfigIdentityAndValueTag::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *SIBOccurrenceIdentityAndValueTag::itemsInfo[2] = {
	&SIBOccurIdentity::theInfo,
	&SIBOccurValueTag::theInfo,
};
bool SIBOccurrenceIdentityAndValueTag::itemsPres[2] = {
	1,
	1,
};
const SIBOccurrenceIdentityAndValueTag::Info SIBOccurrenceIdentityAndValueTag::theInfo = {
	SIBOccurrenceIdentityAndValueTag::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *SIBTypeAndTag::choicesInfo[32] = {
	&PLMNValueTag::theInfo,
	&CellValueTag::theInfo,
	&CellValueTag::theInfo,
	&CellValueTag::theInfo,
	&CellValueTag::theInfo,
	&CellValueTag::theInfo,
	&SIBTypeAndTagSysInfoType7::theInfo,
	&CellValueTag::theInfo,
	&SIBTypeAndTagDummy2::theInfo,
	&SIBTypeAndTagDummy3::theInfo,
	&CellValueTag::theInfo,
	&CellValueTag::theInfo,
	&CellValueTag::theInfo,
	&CellValueTag::theInfo,
	&CellValueTag::theInfo,
	&CellValueTag::theInfo,
	&CellValueTag::theInfo,
	&SIBTypeAndTagSysInfoType14::theInfo,
	&CellValueTag::theInfo,
	&PredefinedConfigIdentityAndValueTag::theInfo,
	&SIBTypeAndTagSysInfoType17::theInfo,
	&CellValueTag::theInfo,
	&SIBOccurrenceIdentityAndValueTag::theInfo,
	&SIBOccurrenceIdentityAndValueTag::theInfo,
	&CellValueTag::theInfo,
	&CellValueTag::theInfo,
	&CellValueTag::theInfo,
	&CellValueTag::theInfo,
	&SIBTypeAndTagSpare4::theInfo,
	&SIBTypeAndTagSpare3::theInfo,
	&SIBTypeAndTagSpare2::theInfo,
	&SIBTypeAndTagSpare1::theInfo,
};
const SIBTypeAndTag::Info SIBTypeAndTag::theInfo = {
	SIBTypeAndTag::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	31
};

const void *SchedulingInformationSchedulingSibPos::choicesInfo[11] = {
	&SchedulingInformationSchedulingSibPosRep4::theInfo,
	&SchedulingInformationSchedulingSibPosRep8::theInfo,
	&SchedulingInformationSchedulingSibPosRep16::theInfo,
	&SchedulingInformationSchedulingSibPosRep32::theInfo,
	&SchedulingInformationSchedulingSibPosRep64::theInfo,
	&SchedulingInformationSchedulingSibPosRep128::theInfo,
	&SchedulingInformationSchedulingSibPosRep256::theInfo,
	&SchedulingInformationSchedulingSibPosRep512::theInfo,
	&SchedulingInformationSchedulingSibPosRep1024::theInfo,
	&SchedulingInformationSchedulingSibPosRep2048::theInfo,
	&SchedulingInformationSchedulingSibPosRep4096::theInfo,
};
const SchedulingInformationSchedulingSibPos::Info SchedulingInformationSchedulingSibPos::theInfo = {
	SchedulingInformationSchedulingSibPos::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	10
};

const void *SchedulingInformationScheduling::itemsInfo[3] = {
	&SegCount::theInfo,
	&SchedulingInformationSchedulingSibPos::theInfo,
	&SibOFFList::theInfo,
};
bool SchedulingInformationScheduling::itemsPres[3] = {
	0,
	1,
	0,
};
const SchedulingInformationScheduling::Info SchedulingInformationScheduling::theInfo = {
	SchedulingInformationScheduling::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
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

const void *SchedulingInformationSIB::itemsInfo[2] = {
	&SIBTypeAndTag::theInfo,
	&SchedulingInformation::theInfo,
};
bool SchedulingInformationSIB::itemsPres[2] = {
	1,
	1,
};
const SchedulingInformationSIB::Info SchedulingInformationSIB::theInfo = {
	SchedulingInformationSIB::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *SCCPCHInfoForFACHModeSpecificInfoFdd::itemsInfo[2] = {
	&FACHPCHInformationList::theInfo,
	&SIBReferenceListFACH::theInfo,
};
bool SCCPCHInfoForFACHModeSpecificInfoFdd::itemsPres[2] = {
	1,
	1,
};
const SCCPCHInfoForFACHModeSpecificInfoFdd::Info SCCPCHInfoForFACHModeSpecificInfoFdd::theInfo = {
	SCCPCHInfoForFACHModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *SCCPCHInfoForFACHModeSpecificInfoTdd::itemsInfo[1] = {
	&FACHPCHInformationList::theInfo,
};
bool SCCPCHInfoForFACHModeSpecificInfoTdd::itemsPres[1] = {
	1,
};
const SCCPCHInfoForFACHModeSpecificInfoTdd::Info SCCPCHInfoForFACHModeSpecificInfoTdd::theInfo = {
	SCCPCHInfoForFACHModeSpecificInfoTdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *SCCPCHInfoForFACHModeSpecificInfo::choicesInfo[2] = {
	&SCCPCHInfoForFACHModeSpecificInfoFdd::theInfo,
	&SCCPCHInfoForFACHModeSpecificInfoTdd::theInfo,
};
const SCCPCHInfoForFACHModeSpecificInfo::Info SCCPCHInfoForFACHModeSpecificInfo::theInfo = {
	SCCPCHInfoForFACHModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *SCCPCHInfoForFACH::itemsInfo[3] = {
	&SecondaryCCPCHInfo::theInfo,
	&TFCS::theInfo,
	&SCCPCHInfoForFACHModeSpecificInfo::theInfo,
};
bool SCCPCHInfoForFACH::itemsPres[3] = {
	1,
	1,
	1,
};
const SCCPCHInfoForFACH::Info SCCPCHInfoForFACH::theInfo = {
	SCCPCHInfoForFACH::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *DLInformationPerRL::itemsInfo[3] = {
	&DLInformationPerRLModeSpecificInfo::theInfo,
	&DLDPCHInfoPerRL::theInfo,
	&SCCPCHInfoForFACH::theInfo,
};
bool DLInformationPerRL::itemsPres[3] = {
	1,
	0,
	0,
};
const DLInformationPerRL::Info DLInformationPerRL::theInfo = {
	DLInformationPerRL::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *DLInformationPerRLr4ModeSpecificInfoFdd::itemsInfo[3] = {
	&PrimaryCPICHInfo::theInfo,
	&PDSCHSHODCHInfo::theInfo,
	&PDSCHCodeMapping::theInfo,
};
bool DLInformationPerRLr4ModeSpecificInfoFdd::itemsPres[3] = {
	1,
	0,
	0,
};
const DLInformationPerRLr4ModeSpecificInfoFdd::Info DLInformationPerRLr4ModeSpecificInfoFdd::theInfo = {
	DLInformationPerRLr4ModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *PrimaryCCPCHInfor4Fdd::itemsInfo[1] = {
	&PrimaryCCPCHInfor4FddTxDiversityIndicator::theInfo,
};
bool PrimaryCCPCHInfor4Fdd::itemsPres[1] = {
	1,
};
const PrimaryCCPCHInfor4Fdd::Info PrimaryCCPCHInfor4Fdd::theInfo = {
	PrimaryCCPCHInfor4Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PrimaryCCPCHInfor4TddTddOptionTdd384tdd768SyncCaseSyncCase1::itemsInfo[1] = {
	&TimeslotNumber::theInfo,
};
bool PrimaryCCPCHInfor4TddTddOptionTdd384tdd768SyncCaseSyncCase1::itemsPres[1] = {
	1,
};
const PrimaryCCPCHInfor4TddTddOptionTdd384tdd768SyncCaseSyncCase1::Info PrimaryCCPCHInfor4TddTddOptionTdd384tdd768SyncCaseSyncCase1::theInfo = {
	PrimaryCCPCHInfor4TddTddOptionTdd384tdd768SyncCaseSyncCase1::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PrimaryCCPCHInfor4TddTddOptionTdd384tdd768SyncCaseSyncCase2::itemsInfo[1] = {
	&TimeslotSync2::theInfo,
};
bool PrimaryCCPCHInfor4TddTddOptionTdd384tdd768SyncCaseSyncCase2::itemsPres[1] = {
	1,
};
const PrimaryCCPCHInfor4TddTddOptionTdd384tdd768SyncCaseSyncCase2::Info PrimaryCCPCHInfor4TddTddOptionTdd384tdd768SyncCaseSyncCase2::theInfo = {
	PrimaryCCPCHInfor4TddTddOptionTdd384tdd768SyncCaseSyncCase2::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PrimaryCCPCHInfor4TddTddOptionTdd384tdd768SyncCase::choicesInfo[2] = {
	&PrimaryCCPCHInfor4TddTddOptionTdd384tdd768SyncCaseSyncCase1::theInfo,
	&PrimaryCCPCHInfor4TddTddOptionTdd384tdd768SyncCaseSyncCase2::theInfo,
};
const PrimaryCCPCHInfor4TddTddOptionTdd384tdd768SyncCase::Info PrimaryCCPCHInfor4TddTddOptionTdd384tdd768SyncCase::theInfo = {
	PrimaryCCPCHInfor4TddTddOptionTdd384tdd768SyncCase::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *PrimaryCCPCHInfor4TddTddOptionTdd384tdd768::itemsInfo[1] = {
	&PrimaryCCPCHInfor4TddTddOptionTdd384tdd768SyncCase::theInfo,
};
bool PrimaryCCPCHInfor4TddTddOptionTdd384tdd768::itemsPres[1] = {
	0,
};
const PrimaryCCPCHInfor4TddTddOptionTdd384tdd768::Info PrimaryCCPCHInfor4TddTddOptionTdd384tdd768::theInfo = {
	PrimaryCCPCHInfor4TddTddOptionTdd384tdd768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *PrimaryCCPCHInfor4TddTddOptionTdd128::itemsInfo[1] = {
	&PrimaryCCPCHInfor4TddTddOptionTdd128TstdIndicator::theInfo,
};
bool PrimaryCCPCHInfor4TddTddOptionTdd128::itemsPres[1] = {
	1,
};
const PrimaryCCPCHInfor4TddTddOptionTdd128::Info PrimaryCCPCHInfor4TddTddOptionTdd128::theInfo = {
	PrimaryCCPCHInfor4TddTddOptionTdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PrimaryCCPCHInfor4TddTddOption::choicesInfo[2] = {
	&PrimaryCCPCHInfor4TddTddOptionTdd384tdd768::theInfo,
	&PrimaryCCPCHInfor4TddTddOptionTdd128::theInfo,
};
const PrimaryCCPCHInfor4TddTddOption::Info PrimaryCCPCHInfor4TddTddOption::theInfo = {
	PrimaryCCPCHInfor4TddTddOption::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *PrimaryCCPCHInfor4Tdd::itemsInfo[3] = {
	&PrimaryCCPCHInfor4TddTddOption::theInfo,
	&CellParametersID::theInfo,
	&PrimaryCCPCHInfor4TddSctdIndicator::theInfo,
};
bool PrimaryCCPCHInfor4Tdd::itemsPres[3] = {
	1,
	0,
	1,
};
const PrimaryCCPCHInfor4Tdd::Info PrimaryCCPCHInfor4Tdd::theInfo = {
	PrimaryCCPCHInfor4Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};

const void *PrimaryCCPCHInfor4::choicesInfo[2] = {
	&PrimaryCCPCHInfor4Fdd::theInfo,
	&PrimaryCCPCHInfor4Tdd::theInfo,
};
const PrimaryCCPCHInfor4::Info PrimaryCCPCHInfor4::theInfo = {
	PrimaryCCPCHInfor4::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLInformationPerRLr4ModeSpecificInfo::choicesInfo[2] = {
	&DLInformationPerRLr4ModeSpecificInfoFdd::theInfo,
	&PrimaryCCPCHInfor4::theInfo,
};
const DLInformationPerRLr4ModeSpecificInfo::Info DLInformationPerRLr4ModeSpecificInfo::theInfo = {
	DLInformationPerRLr4ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *SecondaryCCPCHInfor4ModeSpecificInfoFdd::itemsInfo[7] = {
	&SecondaryScramblingCode::theInfo,
	&SecondaryCCPCHInfor4ModeSpecificInfoFddSttdIndicator::theInfo,
	&SF256AndCodeNumber::theInfo,
	&SecondaryCCPCHInfor4ModeSpecificInfoFddPilotSymbolExistence::theInfo,
	&SecondaryCCPCHInfor4ModeSpecificInfoFddTfciExistence::theInfo,
	&PositionFixedOrFlexible::theInfo,
	&TimingOffset::theInfo,
};
bool SecondaryCCPCHInfor4ModeSpecificInfoFdd::itemsPres[7] = {
	0,
	1,
	1,
	1,
	1,
	1,
	0,
};
const SecondaryCCPCHInfor4ModeSpecificInfoFdd::Info SecondaryCCPCHInfor4ModeSpecificInfoFdd::theInfo = {
	SecondaryCCPCHInfor4ModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	7, 2, 0
};

const void *SecondaryCCPCHInfor4ModeSpecificInfoTddTddOptionTdd384::itemsInfo[1] = {
	&IndividualTimeslotInfo::theInfo,
};
bool SecondaryCCPCHInfor4ModeSpecificInfoTddTddOptionTdd384::itemsPres[1] = {
	1,
};
const SecondaryCCPCHInfor4ModeSpecificInfoTddTddOptionTdd384::Info SecondaryCCPCHInfor4ModeSpecificInfoTddTddOptionTdd384::theInfo = {
	SecondaryCCPCHInfor4ModeSpecificInfoTddTddOptionTdd384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *SecondaryCCPCHInfor4ModeSpecificInfoTddTddOptionTdd128::itemsInfo[1] = {
	&IndividualTimeslotInfoLCRr4::theInfo,
};
bool SecondaryCCPCHInfor4ModeSpecificInfoTddTddOptionTdd128::itemsPres[1] = {
	1,
};
const SecondaryCCPCHInfor4ModeSpecificInfoTddTddOptionTdd128::Info SecondaryCCPCHInfor4ModeSpecificInfoTddTddOptionTdd128::theInfo = {
	SecondaryCCPCHInfor4ModeSpecificInfoTddTddOptionTdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *SecondaryCCPCHInfor4ModeSpecificInfoTddTddOption::choicesInfo[2] = {
	&SecondaryCCPCHInfor4ModeSpecificInfoTddTddOptionTdd384::theInfo,
	&SecondaryCCPCHInfor4ModeSpecificInfoTddTddOptionTdd128::theInfo,
};
const SecondaryCCPCHInfor4ModeSpecificInfoTddTddOption::Info SecondaryCCPCHInfor4ModeSpecificInfoTddTddOption::theInfo = {
	SecondaryCCPCHInfor4ModeSpecificInfoTddTddOption::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *SecondaryCCPCHInfor4ModeSpecificInfoTdd::itemsInfo[3] = {
	&CommonTimeslotInfoSCCPCH::theInfo,
	&SecondaryCCPCHInfor4ModeSpecificInfoTddTddOption::theInfo,
	&SCCPCHChannelisationCodeList::theInfo,
};
bool SecondaryCCPCHInfor4ModeSpecificInfoTdd::itemsPres[3] = {
	1,
	1,
	1,
};
const SecondaryCCPCHInfor4ModeSpecificInfoTdd::Info SecondaryCCPCHInfor4ModeSpecificInfoTdd::theInfo = {
	SecondaryCCPCHInfor4ModeSpecificInfoTdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *SecondaryCCPCHInfor4ModeSpecificInfo::choicesInfo[2] = {
	&SecondaryCCPCHInfor4ModeSpecificInfoFdd::theInfo,
	&SecondaryCCPCHInfor4ModeSpecificInfoTdd::theInfo,
};
const SecondaryCCPCHInfor4ModeSpecificInfo::Info SecondaryCCPCHInfor4ModeSpecificInfo::theInfo = {
	SecondaryCCPCHInfor4ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
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

const void *SCCPCHInfoForFACHr4ModeSpecificInfoFdd::itemsInfo[1] = {
	&SIBReferenceListFACH::theInfo,
};
bool SCCPCHInfoForFACHr4ModeSpecificInfoFdd::itemsPres[1] = {
	1,
};
const SCCPCHInfoForFACHr4ModeSpecificInfoFdd::Info SCCPCHInfoForFACHr4ModeSpecificInfoFdd::theInfo = {
	SCCPCHInfoForFACHr4ModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *SCCPCHInfoForFACHr4ModeSpecificInfo::choicesInfo[2] = {
	&SCCPCHInfoForFACHr4ModeSpecificInfoFdd::theInfo,
	&SCCPCHInfoForFACHr4ModeSpecificInfoTdd::theInfo,
};
const SCCPCHInfoForFACHr4ModeSpecificInfo::Info SCCPCHInfoForFACHr4ModeSpecificInfo::theInfo = {
	SCCPCHInfoForFACHr4ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *SCCPCHInfoForFACHr4::itemsInfo[4] = {
	&SecondaryCCPCHInfor4::theInfo,
	&TFCS::theInfo,
	&FACHPCHInformationList::theInfo,
	&SCCPCHInfoForFACHr4ModeSpecificInfo::theInfo,
};
bool SCCPCHInfoForFACHr4::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const SCCPCHInfoForFACHr4::Info SCCPCHInfoForFACHr4::theInfo = {
	SCCPCHInfoForFACHr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 0, 0
};

const void *DLInformationPerRLr4::itemsInfo[4] = {
	&DLInformationPerRLr4ModeSpecificInfo::theInfo,
	&DLDPCHInfoPerRLr4::theInfo,
	&SCCPCHInfoForFACHr4::theInfo,
	&CellIdentity::theInfo,
};
bool DLInformationPerRLr4::itemsPres[4] = {
	1,
	0,
	0,
	0,
};
const DLInformationPerRLr4::Info DLInformationPerRLr4::theInfo = {
	DLInformationPerRLr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 3, 0
};

const void *DLInformationPerRLr5ModeSpecificInfoFdd::itemsInfo[4] = {
	&PrimaryCPICHInfo::theInfo,
	&PDSCHSHODCHInfo::theInfo,
	&PDSCHCodeMapping::theInfo,
	&DLInformationPerRLr5ModeSpecificInfoFddServingHSDSCHRLindicator::theInfo,
};
bool DLInformationPerRLr5ModeSpecificInfoFdd::itemsPres[4] = {
	1,
	0,
	0,
	1,
};
const DLInformationPerRLr5ModeSpecificInfoFdd::Info DLInformationPerRLr5ModeSpecificInfoFdd::theInfo = {
	DLInformationPerRLr5ModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
};

const void *DLInformationPerRLr5ModeSpecificInfo::choicesInfo[2] = {
	&DLInformationPerRLr5ModeSpecificInfoFdd::theInfo,
	&PrimaryCCPCHInfor4::theInfo,
};
const DLInformationPerRLr5ModeSpecificInfo::Info DLInformationPerRLr5ModeSpecificInfo::theInfo = {
	DLInformationPerRLr5ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLInformationPerRLr5::itemsInfo[4] = {
	&DLInformationPerRLr5ModeSpecificInfo::theInfo,
	&DLDPCHInfoPerRLr5::theInfo,
	&SCCPCHInfoForFACHr4::theInfo,
	&CellIdentity::theInfo,
};
bool DLInformationPerRLr5::itemsPres[4] = {
	1,
	0,
	0,
	0,
};
const DLInformationPerRLr5::Info DLInformationPerRLr5::theInfo = {
	DLInformationPerRLr5::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 3, 0
};

const void *DLInformationPerRLr5bisModeSpecificInfoFdd::itemsInfo[3] = {
	&PrimaryCPICHInfo::theInfo,
	&PDSCHSHODCHInfo::theInfo,
	&PDSCHCodeMapping::theInfo,
};
bool DLInformationPerRLr5bisModeSpecificInfoFdd::itemsPres[3] = {
	1,
	0,
	0,
};
const DLInformationPerRLr5bisModeSpecificInfoFdd::Info DLInformationPerRLr5bisModeSpecificInfoFdd::theInfo = {
	DLInformationPerRLr5bisModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *DLInformationPerRLr5bisModeSpecificInfo::choicesInfo[2] = {
	&DLInformationPerRLr5bisModeSpecificInfoFdd::theInfo,
	&PrimaryCCPCHInfor4::theInfo,
};
const DLInformationPerRLr5bisModeSpecificInfo::Info DLInformationPerRLr5bisModeSpecificInfo::theInfo = {
	DLInformationPerRLr5bisModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLInformationPerRLr5bis::itemsInfo[4] = {
	&DLInformationPerRLr5bisModeSpecificInfo::theInfo,
	&DLDPCHInfoPerRLr5::theInfo,
	&SCCPCHInfoForFACHr4::theInfo,
	&CellIdentity::theInfo,
};
bool DLInformationPerRLr5bis::itemsPres[4] = {
	1,
	0,
	0,
	0,
};
const DLInformationPerRLr5bis::Info DLInformationPerRLr5bis::theInfo = {
	DLInformationPerRLr5bis::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 3, 0
};

const void *DLInformationPerRLr6ModeSpecificInfoFdd::itemsInfo[3] = {
	&PrimaryCPICHInfo::theInfo,
	&DLInformationPerRLr6ModeSpecificInfoFddServingHSDSCHRLindicator::theInfo,
	&DLInformationPerRLr6ModeSpecificInfoFddServingEDCHRLindicator::theInfo,
};
bool DLInformationPerRLr6ModeSpecificInfoFdd::itemsPres[3] = {
	1,
	1,
	1,
};
const DLInformationPerRLr6ModeSpecificInfoFdd::Info DLInformationPerRLr6ModeSpecificInfoFdd::theInfo = {
	DLInformationPerRLr6ModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *DLInformationPerRLr6ModeSpecificInfo::choicesInfo[2] = {
	&DLInformationPerRLr6ModeSpecificInfoFdd::theInfo,
	&PrimaryCCPCHInfor4::theInfo,
};
const DLInformationPerRLr6ModeSpecificInfo::Info DLInformationPerRLr6ModeSpecificInfo::theInfo = {
	DLInformationPerRLr6ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLInformationPerRLr6DldpchInfo::choicesInfo[2] = {
	&DLDPCHInfoPerRLr6::theInfo,
	&DLFDPCHInfoPerRLr6::theInfo,
};
const DLInformationPerRLr6DldpchInfo::Info DLInformationPerRLr6DldpchInfo::theInfo = {
	DLInformationPerRLr6DldpchInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLInformationPerRLr6EHICHInfo::choicesInfo[2] = {
	&EHICHInformation::theInfo,
	&DLInformationPerRLr6EHICHInfoReleaseIndicator::theInfo,
};
const DLInformationPerRLr6EHICHInfo::Info DLInformationPerRLr6EHICHInfo::theInfo = {
	DLInformationPerRLr6EHICHInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLInformationPerRLr6ERGCHInfo::choicesInfo[2] = {
	&ERGCHInformation::theInfo,
	&DLInformationPerRLr6ERGCHInfoReleaseIndicator::theInfo,
};
const DLInformationPerRLr6ERGCHInfo::Info DLInformationPerRLr6ERGCHInfo::theInfo = {
	DLInformationPerRLr6ERGCHInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLInformationPerRLr6::itemsInfo[6] = {
	&DLInformationPerRLr6ModeSpecificInfo::theInfo,
	&DLInformationPerRLr6DldpchInfo::theInfo,
	&EAGCHInformation::theInfo,
	&DLInformationPerRLr6EHICHInfo::theInfo,
	&DLInformationPerRLr6ERGCHInfo::theInfo,
	&CellIdentity::theInfo,
};
bool DLInformationPerRLr6::itemsPres[6] = {
	1,
	0,
	0,
	0,
	0,
	0,
};
const DLInformationPerRLr6::Info DLInformationPerRLr6::theInfo = {
	DLInformationPerRLr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 5, 0
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

const void *DLInformationPerRLr7ModeSpecificInfoFdd::itemsInfo[3] = {
	&PrimaryCPICHInfo::theInfo,
	&DLInformationPerRLr7ModeSpecificInfoFddServingHSDSCHRLindicator::theInfo,
	&DLInformationPerRLr7ModeSpecificInfoFddServingEDCHRLindicator::theInfo,
};
bool DLInformationPerRLr7ModeSpecificInfoFdd::itemsPres[3] = {
	1,
	1,
	1,
};
const DLInformationPerRLr7ModeSpecificInfoFdd::Info DLInformationPerRLr7ModeSpecificInfoFdd::theInfo = {
	DLInformationPerRLr7ModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *DLInformationPerRLr7ModeSpecificInfo::choicesInfo[2] = {
	&DLInformationPerRLr7ModeSpecificInfoFdd::theInfo,
	&PrimaryCCPCHInfor4::theInfo,
};
const DLInformationPerRLr7ModeSpecificInfo::Info DLInformationPerRLr7ModeSpecificInfo::theInfo = {
	DLInformationPerRLr7ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLInformationPerRLr7DldpchInfo::choicesInfo[2] = {
	&DLDPCHInfoPerRLr7::theInfo,
	&DLFDPCHInfoPerRLr7::theInfo,
};
const DLInformationPerRLr7DldpchInfo::Info DLInformationPerRLr7DldpchInfo::theInfo = {
	DLInformationPerRLr7DldpchInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *EAGCHInformationr7ModeSpecificFdd::itemsInfo[1] = {
	&EAGCHChannelisationCode::theInfo,
};
bool EAGCHInformationr7ModeSpecificFdd::itemsPres[1] = {
	1,
};
const EAGCHInformationr7ModeSpecificFdd::Info EAGCHInformationr7ModeSpecificFdd::theInfo = {
	EAGCHInformationr7ModeSpecificFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MidambleShiftAndBurstTypeEDCHBurstTypeType1MidambleAllocationModeUeSpecificMidamble::itemsInfo[1] = {
	&MidambleShiftLong::theInfo,
};
bool MidambleShiftAndBurstTypeEDCHBurstTypeType1MidambleAllocationModeUeSpecificMidamble::itemsPres[1] = {
	1,
};
const MidambleShiftAndBurstTypeEDCHBurstTypeType1MidambleAllocationModeUeSpecificMidamble::Info MidambleShiftAndBurstTypeEDCHBurstTypeType1MidambleAllocationModeUeSpecificMidamble::theInfo = {
	MidambleShiftAndBurstTypeEDCHBurstTypeType1MidambleAllocationModeUeSpecificMidamble::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MidambleShiftAndBurstTypeEDCHBurstTypeType1MidambleAllocationMode::choicesInfo[3] = {
	&MidambleShiftAndBurstTypeEDCHBurstTypeType1MidambleAllocationModeDefaultMidamble::theInfo,
	&MidambleShiftAndBurstTypeEDCHBurstTypeType1MidambleAllocationModeCommonMidamble::theInfo,
	&MidambleShiftAndBurstTypeEDCHBurstTypeType1MidambleAllocationModeUeSpecificMidamble::theInfo,
};
const MidambleShiftAndBurstTypeEDCHBurstTypeType1MidambleAllocationMode::Info MidambleShiftAndBurstTypeEDCHBurstTypeType1MidambleAllocationMode::theInfo = {
	MidambleShiftAndBurstTypeEDCHBurstTypeType1MidambleAllocationMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *MidambleShiftAndBurstTypeEDCHBurstTypeType1::itemsInfo[2] = {
	&MidambleConfigurationBurstType1::theInfo,
	&MidambleShiftAndBurstTypeEDCHBurstTypeType1MidambleAllocationMode::theInfo,
};
bool MidambleShiftAndBurstTypeEDCHBurstTypeType1::itemsPres[2] = {
	1,
	1,
};
const MidambleShiftAndBurstTypeEDCHBurstTypeType1::Info MidambleShiftAndBurstTypeEDCHBurstTypeType1::theInfo = {
	MidambleShiftAndBurstTypeEDCHBurstTypeType1::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *MidambleShiftAndBurstTypeEDCHBurstTypeType2MidambleAllocationModeUeSpecificMidamble::itemsInfo[1] = {
	&MidambleShiftShort::theInfo,
};
bool MidambleShiftAndBurstTypeEDCHBurstTypeType2MidambleAllocationModeUeSpecificMidamble::itemsPres[1] = {
	1,
};
const MidambleShiftAndBurstTypeEDCHBurstTypeType2MidambleAllocationModeUeSpecificMidamble::Info MidambleShiftAndBurstTypeEDCHBurstTypeType2MidambleAllocationModeUeSpecificMidamble::theInfo = {
	MidambleShiftAndBurstTypeEDCHBurstTypeType2MidambleAllocationModeUeSpecificMidamble::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MidambleShiftAndBurstTypeEDCHBurstTypeType2MidambleAllocationMode::choicesInfo[3] = {
	&MidambleShiftAndBurstTypeEDCHBurstTypeType2MidambleAllocationModeDefaultMidamble::theInfo,
	&MidambleShiftAndBurstTypeEDCHBurstTypeType2MidambleAllocationModeCommonMidamble::theInfo,
	&MidambleShiftAndBurstTypeEDCHBurstTypeType2MidambleAllocationModeUeSpecificMidamble::theInfo,
};
const MidambleShiftAndBurstTypeEDCHBurstTypeType2MidambleAllocationMode::Info MidambleShiftAndBurstTypeEDCHBurstTypeType2MidambleAllocationMode::theInfo = {
	MidambleShiftAndBurstTypeEDCHBurstTypeType2MidambleAllocationMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *MidambleShiftAndBurstTypeEDCHBurstTypeType2::itemsInfo[2] = {
	&MidambleConfigurationBurstType2::theInfo,
	&MidambleShiftAndBurstTypeEDCHBurstTypeType2MidambleAllocationMode::theInfo,
};
bool MidambleShiftAndBurstTypeEDCHBurstTypeType2::itemsPres[2] = {
	1,
	1,
};
const MidambleShiftAndBurstTypeEDCHBurstTypeType2::Info MidambleShiftAndBurstTypeEDCHBurstTypeType2::theInfo = {
	MidambleShiftAndBurstTypeEDCHBurstTypeType2::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *MidambleShiftAndBurstTypeEDCHBurstType::choicesInfo[2] = {
	&MidambleShiftAndBurstTypeEDCHBurstTypeType1::theInfo,
	&MidambleShiftAndBurstTypeEDCHBurstTypeType2::theInfo,
};
const MidambleShiftAndBurstTypeEDCHBurstType::Info MidambleShiftAndBurstTypeEDCHBurstType::theInfo = {
	MidambleShiftAndBurstTypeEDCHBurstType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
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

const void *EAGCHIndividual::itemsInfo[3] = {
	&EAGCHIndividualTSnumber::theInfo,
	&DLTSChannelisationCode::theInfo,
	&MidambleShiftAndBurstTypeEDCH::theInfo,
};
bool EAGCHIndividual::itemsPres[3] = {
	1,
	1,
	1,
};
const EAGCHIndividual::Info EAGCHIndividual::theInfo = {
	EAGCHIndividual::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *EAGCHInformationr7ModeSpecificTddTdd384::itemsInfo[4] = {
	&EAGCHInformationr7ModeSpecificTddTdd384LongTermGrantIndicator::theInfo,
	&EAGCHInformationr7ModeSpecificTddTdd384LengthofTTRIfield::theInfo,
	&EAGCHSetConfig::theInfo,
	&BlerTarget::theInfo,
};
bool EAGCHInformationr7ModeSpecificTddTdd384::itemsPres[4] = {
	0,
	1,
	1,
	1,
};
const EAGCHInformationr7ModeSpecificTddTdd384::Info EAGCHInformationr7ModeSpecificTddTdd384::theInfo = {
	EAGCHInformationr7ModeSpecificTddTdd384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 1, 0
};

const void *EAGCHIndividualVHCR::itemsInfo[3] = {
	&EAGCHIndividualVHCRTSnumber::theInfo,
	&DLTSChannelisationCodeVHCR::theInfo,
	&MidambleShiftAndBurstTypeEDCH::theInfo,
};
bool EAGCHIndividualVHCR::itemsPres[3] = {
	1,
	1,
	1,
};
const EAGCHIndividualVHCR::Info EAGCHIndividualVHCR::theInfo = {
	EAGCHIndividualVHCR::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *EAGCHInformationr7ModeSpecificTddTdd768::itemsInfo[4] = {
	&EAGCHInformationr7ModeSpecificTddTdd768LongTermGrantIndicator::theInfo,
	&EAGCHInformationr7ModeSpecificTddTdd768LengthofTTRIfield::theInfo,
	&EAGCHSetConfigVHCR::theInfo,
	&BlerTarget::theInfo,
};
bool EAGCHInformationr7ModeSpecificTddTdd768::itemsPres[4] = {
	0,
	1,
	1,
	1,
};
const EAGCHInformationr7ModeSpecificTddTdd768::Info EAGCHInformationr7ModeSpecificTddTdd768::theInfo = {
	EAGCHInformationr7ModeSpecificTddTdd768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 1, 0
};

const void *EAGCHInformationr7ModeSpecificTddTdd128::itemsInfo[4] = {
	&EAGCHInformationr7ModeSpecificTddTdd128RdiIndicator::theInfo,
	&TPCStepSizeTDD::theInfo,
	&EAGCHSetConfigLCR::theInfo,
	&BlerTarget::theInfo,
};
bool EAGCHInformationr7ModeSpecificTddTdd128::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const EAGCHInformationr7ModeSpecificTddTdd128::Info EAGCHInformationr7ModeSpecificTddTdd128::theInfo = {
	EAGCHInformationr7ModeSpecificTddTdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 0, 0
};

const void *EAGCHInformationr7ModeSpecificTdd::choicesInfo[3] = {
	&EAGCHInformationr7ModeSpecificTddTdd384::theInfo,
	&EAGCHInformationr7ModeSpecificTddTdd768::theInfo,
	&EAGCHInformationr7ModeSpecificTddTdd128::theInfo,
};
const EAGCHInformationr7ModeSpecificTdd::Info EAGCHInformationr7ModeSpecificTdd::theInfo = {
	EAGCHInformationr7ModeSpecificTdd::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *EAGCHInformationr7ModeSpecific::choicesInfo[2] = {
	&EAGCHInformationr7ModeSpecificFdd::theInfo,
	&EAGCHInformationr7ModeSpecificTdd::theInfo,
};
const EAGCHInformationr7ModeSpecific::Info EAGCHInformationr7ModeSpecific::theInfo = {
	EAGCHInformationr7ModeSpecific::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
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

const void *DLInformationPerRLr7ModeSpecificInfo2FddEHICHInfo::choicesInfo[2] = {
	&EHICHInformation::theInfo,
	&DLInformationPerRLr7ModeSpecificInfo2FddEHICHInfoReleaseIndicator::theInfo,
};
const DLInformationPerRLr7ModeSpecificInfo2FddEHICHInfo::Info DLInformationPerRLr7ModeSpecificInfo2FddEHICHInfo::theInfo = {
	DLInformationPerRLr7ModeSpecificInfo2FddEHICHInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLInformationPerRLr7ModeSpecificInfo2FddERGCHInfo::choicesInfo[2] = {
	&ERGCHInformation::theInfo,
	&DLInformationPerRLr7ModeSpecificInfo2FddERGCHInfoReleaseIndicator::theInfo,
};
const DLInformationPerRLr7ModeSpecificInfo2FddERGCHInfo::Info DLInformationPerRLr7ModeSpecificInfo2FddERGCHInfo::theInfo = {
	DLInformationPerRLr7ModeSpecificInfo2FddERGCHInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLInformationPerRLr7ModeSpecificInfo2Fdd::itemsInfo[2] = {
	&DLInformationPerRLr7ModeSpecificInfo2FddEHICHInfo::theInfo,
	&DLInformationPerRLr7ModeSpecificInfo2FddERGCHInfo::theInfo,
};
bool DLInformationPerRLr7ModeSpecificInfo2Fdd::itemsPres[2] = {
	0,
	0,
};
const DLInformationPerRLr7ModeSpecificInfo2Fdd::Info DLInformationPerRLr7ModeSpecificInfo2Fdd::theInfo = {
	DLInformationPerRLr7ModeSpecificInfo2Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *EHICHInformationTDD384768ModeSpecificInfo::choicesInfo[2] = {
	&DLTSChannelisationCode::theInfo,
	&DLTSChannelisationCodeVHCR::theInfo,
};
const EHICHInformationTDD384768ModeSpecificInfo::Info EHICHInformationTDD384768ModeSpecificInfo::theInfo = {
	EHICHInformationTDD384768ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *EHICHInformationTDD384768::itemsInfo[5] = {
	&EHICHInformationTDD384768NEHICH::theInfo,
	&EHICHInformationTDD384768TSNumber::theInfo,
	&EHICHInformationTDD384768ModeSpecificInfo::theInfo,
	&EHICHInformationTDD384768burst_Type::theInfo,
	&EHICHInformationTDD384768midamble_Allocation_Mode::theInfo,
};
bool EHICHInformationTDD384768::itemsPres[5] = {
	1,
	1,
	1,
	1,
	1,
};
const EHICHInformationTDD384768::Info EHICHInformationTDD384768::theInfo = {
	EHICHInformationTDD384768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 0, 0
};

const void *DLInformationPerRLr7ModeSpecificInfo2TddTdd384tdd768::itemsInfo[1] = {
	&EHICHInformationTDD384768::theInfo,
};
bool DLInformationPerRLr7ModeSpecificInfo2TddTdd384tdd768::itemsPres[1] = {
	0,
};
const DLInformationPerRLr7ModeSpecificInfo2TddTdd384tdd768::Info DLInformationPerRLr7ModeSpecificInfo2TddTdd384tdd768::theInfo = {
	DLInformationPerRLr7ModeSpecificInfo2TddTdd384tdd768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLInformationPerRLr7ModeSpecificInfo2TddTdd128::itemsInfo[1] = {
	&EHICHInformationTDD128::theInfo,
};
bool DLInformationPerRLr7ModeSpecificInfo2TddTdd128::itemsPres[1] = {
	0,
};
const DLInformationPerRLr7ModeSpecificInfo2TddTdd128::Info DLInformationPerRLr7ModeSpecificInfo2TddTdd128::theInfo = {
	DLInformationPerRLr7ModeSpecificInfo2TddTdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLInformationPerRLr7ModeSpecificInfo2Tdd::choicesInfo[2] = {
	&DLInformationPerRLr7ModeSpecificInfo2TddTdd384tdd768::theInfo,
	&DLInformationPerRLr7ModeSpecificInfo2TddTdd128::theInfo,
};
const DLInformationPerRLr7ModeSpecificInfo2Tdd::Info DLInformationPerRLr7ModeSpecificInfo2Tdd::theInfo = {
	DLInformationPerRLr7ModeSpecificInfo2Tdd::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLInformationPerRLr7ModeSpecificInfo2::choicesInfo[2] = {
	&DLInformationPerRLr7ModeSpecificInfo2Fdd::theInfo,
	&DLInformationPerRLr7ModeSpecificInfo2Tdd::theInfo,
};
const DLInformationPerRLr7ModeSpecificInfo2::Info DLInformationPerRLr7ModeSpecificInfo2::theInfo = {
	DLInformationPerRLr7ModeSpecificInfo2::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLInformationPerRLr7::itemsInfo[5] = {
	&DLInformationPerRLr7ModeSpecificInfo::theInfo,
	&DLInformationPerRLr7DldpchInfo::theInfo,
	&EAGCHInformationr7::theInfo,
	&DLInformationPerRLr7ModeSpecificInfo2::theInfo,
	&CellIdentity::theInfo,
};
bool DLInformationPerRLr7::itemsPres[5] = {
	1,
	0,
	0,
	1,
	0,
};
const DLInformationPerRLr7::Info DLInformationPerRLr7::theInfo = {
	DLInformationPerRLr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 3, 0
};

const void *DLInformationPerRLr8ModeSpecificInfoFdd::itemsInfo[3] = {
	&PrimaryCPICHInfo::theInfo,
	&DLInformationPerRLr8ModeSpecificInfoFddServingHSDSCHRLindicator::theInfo,
	&DLInformationPerRLr8ModeSpecificInfoFddServingEDCHRLindicator::theInfo,
};
bool DLInformationPerRLr8ModeSpecificInfoFdd::itemsPres[3] = {
	1,
	1,
	1,
};
const DLInformationPerRLr8ModeSpecificInfoFdd::Info DLInformationPerRLr8ModeSpecificInfoFdd::theInfo = {
	DLInformationPerRLr8ModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *DLInformationPerRLr8ModeSpecificInfo::choicesInfo[2] = {
	&DLInformationPerRLr8ModeSpecificInfoFdd::theInfo,
	&PrimaryCCPCHInfor4::theInfo,
};
const DLInformationPerRLr8ModeSpecificInfo::Info DLInformationPerRLr8ModeSpecificInfo::theInfo = {
	DLInformationPerRLr8ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLInformationPerRLr8DldpchInfo::choicesInfo[2] = {
	&DLDPCHInfoPerRLr7::theInfo,
	&DLFDPCHInfoPerRLr7::theInfo,
};
const DLInformationPerRLr8DldpchInfo::Info DLInformationPerRLr8DldpchInfo::theInfo = {
	DLInformationPerRLr8DldpchInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *EAGCHInformationr8ModeSpecificFdd::itemsInfo[1] = {
	&EAGCHChannelisationCode::theInfo,
};
bool EAGCHInformationr8ModeSpecificFdd::itemsPres[1] = {
	1,
};
const EAGCHInformationr8ModeSpecificFdd::Info EAGCHInformationr8ModeSpecificFdd::theInfo = {
	EAGCHInformationr8ModeSpecificFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *EAGCHInformationr8ModeSpecificTddTdd384::itemsInfo[4] = {
	&EAGCHInformationr8ModeSpecificTddTdd384LongTermGrantIndicator::theInfo,
	&EAGCHInformationr8ModeSpecificTddTdd384LengthofTTRIfield::theInfo,
	&EAGCHSetConfig::theInfo,
	&BlerTarget::theInfo,
};
bool EAGCHInformationr8ModeSpecificTddTdd384::itemsPres[4] = {
	0,
	1,
	1,
	1,
};
const EAGCHInformationr8ModeSpecificTddTdd384::Info EAGCHInformationr8ModeSpecificTddTdd384::theInfo = {
	EAGCHInformationr8ModeSpecificTddTdd384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 1, 0
};

const void *EAGCHInformationr8ModeSpecificTddTdd768::itemsInfo[4] = {
	&EAGCHInformationr8ModeSpecificTddTdd768LongTermGrantIndicator::theInfo,
	&EAGCHInformationr8ModeSpecificTddTdd768LengthofTTRIfield::theInfo,
	&EAGCHSetConfigVHCR::theInfo,
	&BlerTarget::theInfo,
};
bool EAGCHInformationr8ModeSpecificTddTdd768::itemsPres[4] = {
	0,
	1,
	1,
	1,
};
const EAGCHInformationr8ModeSpecificTddTdd768::Info EAGCHInformationr8ModeSpecificTddTdd768::theInfo = {
	EAGCHInformationr8ModeSpecificTddTdd768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 1, 0
};

const void *EAGCHInformationr8ModeSpecificTddTdd128::itemsInfo[5] = {
	&EAGCHInformationr8ModeSpecificTddTdd128RdiIndicator::theInfo,
	&TPCStepSizeTDD::theInfo,
	&EAGCHSetConfigLCR::theInfo,
	&BlerTarget::theInfo,
	&EAGCHInactivityMonitorThresholdTDD128::theInfo,
};
bool EAGCHInformationr8ModeSpecificTddTdd128::itemsPres[5] = {
	1,
	1,
	1,
	1,
	0,
};
const EAGCHInformationr8ModeSpecificTddTdd128::Info EAGCHInformationr8ModeSpecificTddTdd128::theInfo = {
	EAGCHInformationr8ModeSpecificTddTdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 1, 0
};

const void *EAGCHInformationr8ModeSpecificTdd::choicesInfo[3] = {
	&EAGCHInformationr8ModeSpecificTddTdd384::theInfo,
	&EAGCHInformationr8ModeSpecificTddTdd768::theInfo,
	&EAGCHInformationr8ModeSpecificTddTdd128::theInfo,
};
const EAGCHInformationr8ModeSpecificTdd::Info EAGCHInformationr8ModeSpecificTdd::theInfo = {
	EAGCHInformationr8ModeSpecificTdd::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *EAGCHInformationr8ModeSpecific::choicesInfo[2] = {
	&EAGCHInformationr8ModeSpecificFdd::theInfo,
	&EAGCHInformationr8ModeSpecificTdd::theInfo,
};
const EAGCHInformationr8ModeSpecific::Info EAGCHInformationr8ModeSpecific::theInfo = {
	EAGCHInformationr8ModeSpecific::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
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

const void *DLInformationPerRLr8ModeSpecificInfo2FddEHICHInfo::choicesInfo[2] = {
	&EHICHInformation::theInfo,
	&DLInformationPerRLr8ModeSpecificInfo2FddEHICHInfoReleaseIndicator::theInfo,
};
const DLInformationPerRLr8ModeSpecificInfo2FddEHICHInfo::Info DLInformationPerRLr8ModeSpecificInfo2FddEHICHInfo::theInfo = {
	DLInformationPerRLr8ModeSpecificInfo2FddEHICHInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLInformationPerRLr8ModeSpecificInfo2FddERGCHInfo::choicesInfo[2] = {
	&ERGCHInformation::theInfo,
	&DLInformationPerRLr8ModeSpecificInfo2FddERGCHInfoReleaseIndicator::theInfo,
};
const DLInformationPerRLr8ModeSpecificInfo2FddERGCHInfo::Info DLInformationPerRLr8ModeSpecificInfo2FddERGCHInfo::theInfo = {
	DLInformationPerRLr8ModeSpecificInfo2FddERGCHInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLInformationPerRLr8ModeSpecificInfo2Fdd::itemsInfo[2] = {
	&DLInformationPerRLr8ModeSpecificInfo2FddEHICHInfo::theInfo,
	&DLInformationPerRLr8ModeSpecificInfo2FddERGCHInfo::theInfo,
};
bool DLInformationPerRLr8ModeSpecificInfo2Fdd::itemsPres[2] = {
	0,
	0,
};
const DLInformationPerRLr8ModeSpecificInfo2Fdd::Info DLInformationPerRLr8ModeSpecificInfo2Fdd::theInfo = {
	DLInformationPerRLr8ModeSpecificInfo2Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *DLInformationPerRLr8ModeSpecificInfo2TddTdd384tdd768::itemsInfo[1] = {
	&EHICHInformationTDD384768::theInfo,
};
bool DLInformationPerRLr8ModeSpecificInfo2TddTdd384tdd768::itemsPres[1] = {
	0,
};
const DLInformationPerRLr8ModeSpecificInfo2TddTdd384tdd768::Info DLInformationPerRLr8ModeSpecificInfo2TddTdd384tdd768::theInfo = {
	DLInformationPerRLr8ModeSpecificInfo2TddTdd384tdd768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLInformationPerRLr8ModeSpecificInfo2TddTdd128::itemsInfo[1] = {
	&EHICHInformationTDD128::theInfo,
};
bool DLInformationPerRLr8ModeSpecificInfo2TddTdd128::itemsPres[1] = {
	0,
};
const DLInformationPerRLr8ModeSpecificInfo2TddTdd128::Info DLInformationPerRLr8ModeSpecificInfo2TddTdd128::theInfo = {
	DLInformationPerRLr8ModeSpecificInfo2TddTdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLInformationPerRLr8ModeSpecificInfo2Tdd::choicesInfo[2] = {
	&DLInformationPerRLr8ModeSpecificInfo2TddTdd384tdd768::theInfo,
	&DLInformationPerRLr8ModeSpecificInfo2TddTdd128::theInfo,
};
const DLInformationPerRLr8ModeSpecificInfo2Tdd::Info DLInformationPerRLr8ModeSpecificInfo2Tdd::theInfo = {
	DLInformationPerRLr8ModeSpecificInfo2Tdd::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLInformationPerRLr8ModeSpecificInfo2::choicesInfo[2] = {
	&DLInformationPerRLr8ModeSpecificInfo2Fdd::theInfo,
	&DLInformationPerRLr8ModeSpecificInfo2Tdd::theInfo,
};
const DLInformationPerRLr8ModeSpecificInfo2::Info DLInformationPerRLr8ModeSpecificInfo2::theInfo = {
	DLInformationPerRLr8ModeSpecificInfo2::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLInformationPerRLr8::itemsInfo[5] = {
	&DLInformationPerRLr8ModeSpecificInfo::theInfo,
	&DLInformationPerRLr8DldpchInfo::theInfo,
	&EAGCHInformationr8::theInfo,
	&DLInformationPerRLr8ModeSpecificInfo2::theInfo,
	&CellIdentity::theInfo,
};
bool DLInformationPerRLr8::itemsPres[5] = {
	1,
	0,
	0,
	1,
	0,
};
const DLInformationPerRLr8::Info DLInformationPerRLr8::theInfo = {
	DLInformationPerRLr8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 3, 0
};

const void *DLInformationPerRLPostFDD::itemsInfo[2] = {
	&PrimaryCPICHInfo::theInfo,
	&DLDPCHInfoPerRLPostFDD::theInfo,
};
bool DLInformationPerRLPostFDD::itemsPres[2] = {
	1,
	1,
};
const DLInformationPerRLPostFDD::Info DLInformationPerRLPostFDD::theInfo = {
	DLInformationPerRLPostFDD::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *PrimaryCCPCHInfoPostSyncCaseSyncCase1::itemsInfo[1] = {
	&TimeslotNumber::theInfo,
};
bool PrimaryCCPCHInfoPostSyncCaseSyncCase1::itemsPres[1] = {
	1,
};
const PrimaryCCPCHInfoPostSyncCaseSyncCase1::Info PrimaryCCPCHInfoPostSyncCaseSyncCase1::theInfo = {
	PrimaryCCPCHInfoPostSyncCaseSyncCase1::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PrimaryCCPCHInfoPostSyncCaseSyncCase2::itemsInfo[1] = {
	&TimeslotSync2::theInfo,
};
bool PrimaryCCPCHInfoPostSyncCaseSyncCase2::itemsPres[1] = {
	1,
};
const PrimaryCCPCHInfoPostSyncCaseSyncCase2::Info PrimaryCCPCHInfoPostSyncCaseSyncCase2::theInfo = {
	PrimaryCCPCHInfoPostSyncCaseSyncCase2::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PrimaryCCPCHInfoPostSyncCase::choicesInfo[2] = {
	&PrimaryCCPCHInfoPostSyncCaseSyncCase1::theInfo,
	&PrimaryCCPCHInfoPostSyncCaseSyncCase2::theInfo,
};
const PrimaryCCPCHInfoPostSyncCase::Info PrimaryCCPCHInfoPostSyncCase::theInfo = {
	PrimaryCCPCHInfoPostSyncCase::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *PrimaryCCPCHInfoPost::itemsInfo[3] = {
	&PrimaryCCPCHInfoPostSyncCase::theInfo,
	&CellParametersID::theInfo,
	&PrimaryCCPCHInfoPostSctdIndicator::theInfo,
};
bool PrimaryCCPCHInfoPost::itemsPres[3] = {
	1,
	1,
	1,
};
const PrimaryCCPCHInfoPost::Info PrimaryCCPCHInfoPost::theInfo = {
	PrimaryCCPCHInfoPost::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *DLInformationPerRLPostTDD::itemsInfo[2] = {
	&PrimaryCCPCHInfoPost::theInfo,
	&DLDPCHInfoPerRLPostTDD::theInfo,
};
bool DLInformationPerRLPostTDD::itemsPres[2] = {
	1,
	1,
};
const DLInformationPerRLPostTDD::Info DLInformationPerRLPostTDD::theInfo = {
	DLInformationPerRLPostTDD::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *PrimaryCCPCHInfoPostTDDLCRr4::itemsInfo[3] = {
	&PrimaryCCPCHInfoPostTDDLCRr4TstdIndicator::theInfo,
	&CellParametersID::theInfo,
	&PrimaryCCPCHInfoPostTDDLCRr4SctdIndicator::theInfo,
};
bool PrimaryCCPCHInfoPostTDDLCRr4::itemsPres[3] = {
	1,
	1,
	1,
};
const PrimaryCCPCHInfoPostTDDLCRr4::Info PrimaryCCPCHInfoPostTDDLCRr4::theInfo = {
	PrimaryCCPCHInfoPostTDDLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *DLInformationPerRLPostTDDLCRr4::itemsInfo[2] = {
	&PrimaryCCPCHInfoPostTDDLCRr4::theInfo,
	&DLDPCHInfoPerRLPostTDDLCRr4::theInfo,
};
bool DLInformationPerRLPostTDDLCRr4::itemsPres[2] = {
	1,
	1,
};
const DLInformationPerRLPostTDDLCRr4::Info DLInformationPerRLPostTDDLCRr4::theInfo = {
	DLInformationPerRLPostTDDLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *DLPDSCHInformation::itemsInfo[2] = {
	&PDSCHSHODCHInfo::theInfo,
	&PDSCHCodeMapping::theInfo,
};
bool DLPDSCHInformation::itemsPres[2] = {
	0,
	0,
};
const DLPDSCHInformation::Info DLPDSCHInformation::theInfo = {
	DLPDSCHInformation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *DLSecondaryCellInfoFDDNewConfiguration::itemsInfo[8] = {
	&HRNTI::theInfo,
	&DLSecondaryCellInfoFDDNewConfigurationdl_64QAM_Configured::theInfo,
	&HSDSCHTBSizeTable::theInfo,
	&PrimaryCPICHInfo::theInfo,
	&SecondaryScramblingCode::theInfo,
	&DLSecondaryCellInfoFDDNewConfigurationHSSCCHChannelisationCodeInfo::theInfo,
	&MeasurementPowerOffset::theInfo,
	&UARFCN::theInfo,
};
bool DLSecondaryCellInfoFDDNewConfiguration::itemsPres[8] = {
	1,
	0,
	0,
	1,
	0,
	1,
	1,
	1,
};
const DLSecondaryCellInfoFDDNewConfiguration::Info DLSecondaryCellInfoFDDNewConfiguration::theInfo = {
	DLSecondaryCellInfoFDDNewConfiguration::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	8, 3, 0
};

const void *DLSecondaryCellInfoFDD::choicesInfo[2] = {
	&DLSecondaryCellInfoFDDContinue::theInfo,
	&DLSecondaryCellInfoFDDNewConfiguration::theInfo,
};
const DLSecondaryCellInfoFDD::Info DLSecondaryCellInfoFDD::theInfo = {
	DLSecondaryCellInfoFDD::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
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

const void *DLSecondaryCellInfoFDDr9ConfigurationInfoNewConfiguration::itemsInfo[9] = {
	&HRNTI::theInfo,
	&DLSecondaryCellInfoFDDr9ConfigurationInfoNewConfigurationdl_64QAM_Configured::theInfo,
	&HSDSCHTBSizeTable::theInfo,
	&PrimaryCPICHInfo::theInfo,
	&SecondaryScramblingCode::theInfo,
	&DLSecondaryCellInfoFDDr9ConfigurationInfoNewConfigurationHSSCCHChannelisationCodeInfo::theInfo,
	&MeasurementPowerOffset::theInfo,
	&UARFCN::theInfo,
	&DLSecondaryCellInfoFDDr9ConfigurationInfoNewConfigurationdifferentTxModeFromServingHS_DSCHCell::theInfo,
};
bool DLSecondaryCellInfoFDDr9ConfigurationInfoNewConfiguration::itemsPres[9] = {
	1,
	0,
	0,
	1,
	0,
	1,
	1,
	1,
	0,
};
const DLSecondaryCellInfoFDDr9ConfigurationInfoNewConfiguration::Info DLSecondaryCellInfoFDDr9ConfigurationInfoNewConfiguration::theInfo = {
	DLSecondaryCellInfoFDDr9ConfigurationInfoNewConfiguration::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	9, 4, 0
};

const void *DLSecondaryCellInfoFDDr9ConfigurationInfo::choicesInfo[2] = {
	&DLSecondaryCellInfoFDDr9ConfigurationInfoContinue::theInfo,
	&DLSecondaryCellInfoFDDr9ConfigurationInfoNewConfiguration::theInfo,
};
const DLSecondaryCellInfoFDDr9ConfigurationInfo::Info DLSecondaryCellInfoFDDr9ConfigurationInfo::theInfo = {
	DLSecondaryCellInfoFDDr9ConfigurationInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *MIMOPilotConfigurationr9SecondCPICHPatternDiversityPattern::itemsInfo[2] = {
	&ChannelisationCode256::theInfo,
	&SCPICHPowerOffsetMIMO::theInfo,
};
bool MIMOPilotConfigurationr9SecondCPICHPatternDiversityPattern::itemsPres[2] = {
	1,
	0,
};
const MIMOPilotConfigurationr9SecondCPICHPatternDiversityPattern::Info MIMOPilotConfigurationr9SecondCPICHPatternDiversityPattern::theInfo = {
	MIMOPilotConfigurationr9SecondCPICHPatternDiversityPattern::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *MIMOPilotConfigurationr9SecondCPICHPattern::choicesInfo[2] = {
	&MIMOPilotConfigurationr9SecondCPICHPatternNormalPattern::theInfo,
	&MIMOPilotConfigurationr9SecondCPICHPatternDiversityPattern::theInfo,
};
const MIMOPilotConfigurationr9SecondCPICHPattern::Info MIMOPilotConfigurationr9SecondCPICHPattern::theInfo = {
	MIMOPilotConfigurationr9SecondCPICHPattern::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
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

const void *SecondaryCellMIMOparametersFDDNewConfiguration::itemsInfo[2] = {
	&MIMONMRatio::theInfo,
	&MIMOPilotConfigurationr9::theInfo,
};
bool SecondaryCellMIMOparametersFDDNewConfiguration::itemsPres[2] = {
	0,
	0,
};
const SecondaryCellMIMOparametersFDDNewConfiguration::Info SecondaryCellMIMOparametersFDDNewConfiguration::theInfo = {
	SecondaryCellMIMOparametersFDDNewConfiguration::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *SecondaryCellMIMOparametersFDD::choicesInfo[2] = {
	&SecondaryCellMIMOparametersFDDContinue::theInfo,
	&SecondaryCellMIMOparametersFDDNewConfiguration::theInfo,
};
const SecondaryCellMIMOparametersFDD::Info SecondaryCellMIMOparametersFDD::theInfo = {
	SecondaryCellMIMOparametersFDD::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLSecondaryCellInfoFDDr9::itemsInfo[2] = {
	&DLSecondaryCellInfoFDDr9ConfigurationInfo::theInfo,
	&SecondaryCellMIMOparametersFDD::theInfo,
};
bool DLSecondaryCellInfoFDDr9::itemsPres[2] = {
	1,
	0,
};
const DLSecondaryCellInfoFDDr9::Info DLSecondaryCellInfoFDDr9::theInfo = {
	DLSecondaryCellInfoFDDr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
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

const void *DLChannelCodesMBSFNIMB384::itemsInfo[2] = {
	&DLChannelCodesMBSFNIMB384FirstChannelisationCode::theInfo,
	&DLChannelCodesMBSFNIMB384LastChannelisationCode::theInfo,
};
bool DLChannelCodesMBSFNIMB384::itemsPres[2] = {
	1,
	0,
};
const DLChannelCodesMBSFNIMB384::Info DLChannelCodesMBSFNIMB384::theInfo = {
	DLChannelCodesMBSFNIMB384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *EDPDCHSchedulingTransmConfigurationServingGrant::itemsInfo[2] = {
	&EDPDCHSchedulingTransmConfigurationServingGrantValue::theInfo,
	&EDPDCHSchedulingTransmConfigurationServingGrantprimary_Secondary_GrantSelector::theInfo,
};
bool EDPDCHSchedulingTransmConfigurationServingGrant::itemsPres[2] = {
	1,
	1,
};
const EDPDCHSchedulingTransmConfigurationServingGrant::Info EDPDCHSchedulingTransmConfigurationServingGrant::theInfo = {
	EDPDCHSchedulingTransmConfigurationServingGrant::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *EDPDCHSchedulingTransmConfiguration::itemsInfo[2] = {
	&EDPDCHSchedulingTransmConfigurationMs2SchedTransmGrantHARQAlloc::theInfo,
	&EDPDCHSchedulingTransmConfigurationServingGrant::theInfo,
};
bool EDPDCHSchedulingTransmConfiguration::itemsPres[2] = {
	0,
	0,
};
const EDPDCHSchedulingTransmConfiguration::Info EDPDCHSchedulingTransmConfiguration::theInfo = {
	EDPDCHSchedulingTransmConfiguration::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
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

const void *ULEDCHInformationr8ModeSpecificInfoFdd::itemsInfo[4] = {
	&EDPCCHInfor7::theInfo,
	&EDPDCHInfor8::theInfo,
	&EDPDCHSchedulingTransmConfiguration::theInfo,
	&UL16QAMSettings::theInfo,
};
bool ULEDCHInformationr8ModeSpecificInfoFdd::itemsPres[4] = {
	0,
	0,
	0,
	0,
};
const ULEDCHInformationr8ModeSpecificInfoFdd::Info ULEDCHInformationr8ModeSpecificInfoFdd::theInfo = {
	ULEDCHInformationr8ModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 4, 0
};

const void *ERUCCHInfoModeSpecificInfoTdd384tdd768ModeSpecificInfoTdd384::choicesInfo[2] = {
	&ERUCCHInfoModeSpecificInfoTdd384tdd768ModeSpecificInfoTdd384SF16::theInfo,
	&ERUCCHInfoModeSpecificInfoTdd384tdd768ModeSpecificInfoTdd384SF8::theInfo,
};
const ERUCCHInfoModeSpecificInfoTdd384tdd768ModeSpecificInfoTdd384::Info ERUCCHInfoModeSpecificInfoTdd384tdd768ModeSpecificInfoTdd384::theInfo = {
	ERUCCHInfoModeSpecificInfoTdd384tdd768ModeSpecificInfoTdd384::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ERUCCHInfoModeSpecificInfoTdd384tdd768ModeSpecificInfoTdd768::choicesInfo[2] = {
	&ERUCCHInfoModeSpecificInfoTdd384tdd768ModeSpecificInfoTdd768SF32::theInfo,
	&ERUCCHInfoModeSpecificInfoTdd384tdd768ModeSpecificInfoTdd768SF816::theInfo,
};
const ERUCCHInfoModeSpecificInfoTdd384tdd768ModeSpecificInfoTdd768::Info ERUCCHInfoModeSpecificInfoTdd384tdd768ModeSpecificInfoTdd768::theInfo = {
	ERUCCHInfoModeSpecificInfoTdd384tdd768ModeSpecificInfoTdd768::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ERUCCHInfoModeSpecificInfoTdd384tdd768ModeSpecificInfo::choicesInfo[2] = {
	&ERUCCHInfoModeSpecificInfoTdd384tdd768ModeSpecificInfoTdd384::theInfo,
	&ERUCCHInfoModeSpecificInfoTdd384tdd768ModeSpecificInfoTdd768::theInfo,
};
const ERUCCHInfoModeSpecificInfoTdd384tdd768ModeSpecificInfo::Info ERUCCHInfoModeSpecificInfoTdd384tdd768ModeSpecificInfo::theInfo = {
	ERUCCHInfoModeSpecificInfoTdd384tdd768ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ERUCCHInfoModeSpecificInfoTdd384tdd768::itemsInfo[8] = {
	&ERUCCHInfoModeSpecificInfoTdd384tdd768ERUCCHConstantValue::theInfo,
	&PersistenceScalingFactor::theInfo,
	&ERUCCHInfoModeSpecificInfoTdd384tdd768t_RUCCH::theInfo,
	&ERUCCHInfoModeSpecificInfoTdd384tdd768ERUCCHTSNumber::theInfo,
	&ERUCCHInfoModeSpecificInfoTdd384tdd768e_RUCCH_Midamble::theInfo,
	&ERUCCHInfoModeSpecificInfoTdd384tdd768t_adv::theInfo,
	&ERUCCHInfoModeSpecificInfoTdd384tdd768t_SCHED::theInfo,
	&ERUCCHInfoModeSpecificInfoTdd384tdd768ModeSpecificInfo::theInfo,
};
bool ERUCCHInfoModeSpecificInfoTdd384tdd768::itemsPres[8] = {
	1,
	1,
	0,
	0,
	0,
	0,
	0,
	1,
};
const ERUCCHInfoModeSpecificInfoTdd384tdd768::Info ERUCCHInfoModeSpecificInfoTdd384tdd768::theInfo = {
	ERUCCHInfoModeSpecificInfoTdd384tdd768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	8, 5, 0
};

const void *ERUCCHInfoModeSpecificInfoTdd128::itemsInfo[9] = {
	&ERUCCHInfoModeSpecificInfoTdd128t_RUCCH::theInfo,
	&ERUCCHInfoModeSpecificInfoTdd128NRUCCH::theInfo,
	&ERUCCHInfoModeSpecificInfoTdd128t_WAIT::theInfo,
	&ERUCCHInfoModeSpecificInfoTdd128t_SI::theInfo,
	&ERUCCHInfoModeSpecificInfoTdd128ExtendedEstimationWindow::theInfo,
	&ERUCCHAccessServiceClass::theInfo,
	&PersistenceScalingFactorList::theInfo,
	&SYNCULInfoForERUCCH::theInfo,
	&PRACHInformationLCRList::theInfo,
};
bool ERUCCHInfoModeSpecificInfoTdd128::itemsPres[9] = {
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
const ERUCCHInfoModeSpecificInfoTdd128::Info ERUCCHInfoModeSpecificInfoTdd128::theInfo = {
	ERUCCHInfoModeSpecificInfoTdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	9, 9, 0
};

const void *ERUCCHInfoModeSpecificInfo::choicesInfo[2] = {
	&ERUCCHInfoModeSpecificInfoTdd384tdd768::theInfo,
	&ERUCCHInfoModeSpecificInfoTdd128::theInfo,
};
const ERUCCHInfoModeSpecificInfo::Info ERUCCHInfoModeSpecificInfo::theInfo = {
	ERUCCHInfoModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
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

const void *EPUCHTSSlots::itemsInfo[2] = {
	&EPUCHTSSlotsTsNumber::theInfo,
	&MidambleShiftAndBurstTypeEDCH::theInfo,
};
bool EPUCHTSSlots::itemsPres[2] = {
	1,
	1,
};
const EPUCHTSSlots::Info EPUCHTSSlots::theInfo = {
	EPUCHTSSlots::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *EPUCHInfoModeSpecificInfoTdd348tdd768::itemsInfo[7] = {
	&EPUCHInfoModeSpecificInfoTdd348tdd768NoSlotsForTFCIandTPC::theInfo,
	&EPUCHInfoModeSpecificInfoTdd348tdd768EPUCHContantValue::theInfo,
	&EPUCHInfoModeSpecificInfoTdd348tdd768EPUCHTSConfigurationList::theInfo,
	&EPUCHInfoModeSpecificInfoTdd348tdd768EPUCHCodeHopping::theInfo,
	&EPUCHInfoModeSpecificInfoTdd348tdd768EPUCHTPCStepSize::theInfo,
	&EPUCHInfoModeSpecificInfoTdd348tdd768MinimumAllowedCodeRate::theInfo,
	&EPUCHInfoModeSpecificInfoTdd348tdd768MaximumAllowedCodeRate::theInfo,
};
bool EPUCHInfoModeSpecificInfoTdd348tdd768::itemsPres[7] = {
	1,
	1,
	1,
	1,
	1,
	1,
	1,
};
const EPUCHInfoModeSpecificInfoTdd348tdd768::Info EPUCHInfoModeSpecificInfoTdd348tdd768::theInfo = {
	EPUCHInfoModeSpecificInfoTdd348tdd768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	7, 0, 0
};

const void *EPUCHInfoModeSpecificInfoTdd128::itemsInfo[11] = {
	&EPUCHInfoModeSpecificInfoTdd128snpl_ReportType::theInfo,
	&EPUCHInfoModeSpecificInfoTdd128PrxBASEdes::theInfo,
	&EPUCHInfoModeSpecificInfoTdd128BeaconPLEst::theInfo,
	&TPCStepSizeTDD::theInfo,
	&PowerControlGAP::theInfo,
	&ULSynchronisationParametersr4::theInfo,
	&EPUCHInfoModeSpecificInfoTdd128EPUCHTSConfigurationList::theInfo,
	&EPUCHInfoModeSpecificInfoTdd128MinimumAllowedCodeRate::theInfo,
	&EPUCHInfoModeSpecificInfoTdd128MaximumAllowedCodeRate::theInfo,
	&EPUCHInfoModeSpecificInfoTdd128MaximumNumOfRetransSchedInfo::theInfo,
	&EPUCHInfoModeSpecificInfoTdd128retransTimerForSchedInfo::theInfo,
};
bool EPUCHInfoModeSpecificInfoTdd128::itemsPres[11] = {
	0,
	1,
	0,
	1,
	0,
	0,
	1,
	1,
	1,
	1,
	1,
};
const EPUCHInfoModeSpecificInfoTdd128::Info EPUCHInfoModeSpecificInfoTdd128::theInfo = {
	EPUCHInfoModeSpecificInfoTdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	11, 4, 0
};

const void *EPUCHInfoModeSpecificInfo::choicesInfo[2] = {
	&EPUCHInfoModeSpecificInfoTdd348tdd768::theInfo,
	&EPUCHInfoModeSpecificInfoTdd128::theInfo,
};
const EPUCHInfoModeSpecificInfo::Info EPUCHInfoModeSpecificInfo::theInfo = {
	EPUCHInfoModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *EPUCHInfo::itemsInfo[3] = {
	&ETFCSInfo::theInfo,
	&EPUCHInfoModeSpecificInfo::theInfo,
	&EPUCHInfoPowerOffsetForSchedInfo::theInfo,
};
bool EPUCHInfo::itemsPres[3] = {
	1,
	1,
	0,
};
const EPUCHInfo::Info EPUCHInfo::theInfo = {
	EPUCHInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};

const void *NonScheduledTransGrantInfoTDDTdd384768::itemsInfo[5] = {
	&NonScheduledTransGrantInfoTDDTdd384768TimeslotResourceRelatedInfo::theInfo,
	&NonScheduledTransGrantInfoTDDTdd384768PowerResourceRelatedInfo::theInfo,
	&ActivationTime::theInfo,
	&RepetitionPeriodAndLength::theInfo,
	&ULTSChannelisationCode::theInfo,
};
bool NonScheduledTransGrantInfoTDDTdd384768::itemsPres[5] = {
	1,
	1,
	1,
	0,
	1,
};
const NonScheduledTransGrantInfoTDDTdd384768::Info NonScheduledTransGrantInfoTDDTdd384768::theInfo = {
	NonScheduledTransGrantInfoTDDTdd384768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 1, 0
};

const void *NonScheduledTransGrantInfoTDDTdd128EHICHInfoMidambleAllocationMode::choicesInfo[2] = {
	&NonScheduledTransGrantInfoTDDTdd128EHICHInfoMidambleAllocationModeDefaultMidamble::theInfo,
	&NonScheduledTransGrantInfoTDDTdd128EHICHInfoMidambleAllocationModeUeSpecificMidamble::theInfo,
};
const NonScheduledTransGrantInfoTDDTdd128EHICHInfoMidambleAllocationMode::Info NonScheduledTransGrantInfoTDDTdd128EHICHInfoMidambleAllocationMode::theInfo = {
	NonScheduledTransGrantInfoTDDTdd128EHICHInfoMidambleAllocationMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *NonScheduledTransGrantInfoTDDTdd128EHICHInfo::itemsInfo[5] = {
	&TimeslotNumberLCRr4::theInfo,
	&HSChannelisationCodeLCR::theInfo,
	&NonScheduledTransGrantInfoTDDTdd128EHICHInfoMidambleAllocationMode::theInfo,
	&NonScheduledTransGrantInfoTDDTdd128EHICHInfoMidambleConfiguration::theInfo,
	&NonScheduledTransGrantInfoTDDTdd128EHICHInfoSignatureSequenceGroupIndex::theInfo,
};
bool NonScheduledTransGrantInfoTDDTdd128EHICHInfo::itemsPres[5] = {
	1,
	1,
	1,
	1,
	1,
};
const NonScheduledTransGrantInfoTDDTdd128EHICHInfo::Info NonScheduledTransGrantInfoTDDTdd128EHICHInfo::theInfo = {
	NonScheduledTransGrantInfoTDDTdd128EHICHInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 0, 0
};

const void *NonScheduledTransGrantInfoTDDTdd128::itemsInfo[9] = {
	&NonScheduledTransGrantInfoTDDTdd128NEUCCH::theInfo,
	&NonScheduledTransGrantInfoTDDTdd128NEHICH::theInfo,
	&NonScheduledTransGrantInfoTDDTdd128TimeslotResourceRelatedInfo::theInfo,
	&NonScheduledTransGrantInfoTDDTdd128PowerResourceRelatedInfo::theInfo,
	&ActivationTime::theInfo,
	&NonScheduledTransGrantInfoTDDTdd128SfnNum::theInfo,
	&RepetitionPeriodAndLength::theInfo,
	&ULTSChannelisationCode::theInfo,
	&NonScheduledTransGrantInfoTDDTdd128EHICHInfo::theInfo,
};
bool NonScheduledTransGrantInfoTDDTdd128::itemsPres[9] = {
	0,
	0,
	1,
	1,
	1,
	1,
	0,
	1,
	1,
};
const NonScheduledTransGrantInfoTDDTdd128::Info NonScheduledTransGrantInfoTDDTdd128::theInfo = {
	NonScheduledTransGrantInfoTDDTdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	9, 3, 0
};

const void *NonScheduledTransGrantInfoTDD::choicesInfo[2] = {
	&NonScheduledTransGrantInfoTDDTdd384768::theInfo,
	&NonScheduledTransGrantInfoTDDTdd128::theInfo,
};
const NonScheduledTransGrantInfoTDD::Info NonScheduledTransGrantInfoTDD::theInfo = {
	NonScheduledTransGrantInfoTDD::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULEDCHInformationr8ModeSpecificInfoTdd::itemsInfo[3] = {
	&ERUCCHInfo::theInfo,
	&EPUCHInfo::theInfo,
	&NonScheduledTransGrantInfoTDD::theInfo,
};
bool ULEDCHInformationr8ModeSpecificInfoTdd::itemsPres[3] = {
	0,
	0,
	0,
};
const ULEDCHInformationr8ModeSpecificInfoTdd::Info ULEDCHInformationr8ModeSpecificInfoTdd::theInfo = {
	ULEDCHInformationr8ModeSpecificInfoTdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *ULEDCHInformationr8ModeSpecificInfo::choicesInfo[2] = {
	&ULEDCHInformationr8ModeSpecificInfoFdd::theInfo,
	&ULEDCHInformationr8ModeSpecificInfoTdd::theInfo,
};
const ULEDCHInformationr8ModeSpecificInfo::Info ULEDCHInformationr8ModeSpecificInfo::theInfo = {
	ULEDCHInformationr8ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULEDCHInformationr8::itemsInfo[2] = {
	&ULEDCHInformationr8mac_es_e_resetIndicator::theInfo,
	&ULEDCHInformationr8ModeSpecificInfo::theInfo,
};
bool ULEDCHInformationr8::itemsPres[2] = {
	0,
	1,
};
const ULEDCHInformationr8::Info ULEDCHInformationr8::theInfo = {
	ULEDCHInformationr8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *DLULHSPAInformationr8::itemsInfo[4] = {
	&ULEDCHInformationr8::theInfo,
	&DLCommonInformationr8::theInfo,
	&DLInformationPerRLListr7::theInfo,
	&DLHSPDSCHInformationr8::theInfo,
};
bool DLULHSPAInformationr8::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const DLULHSPAInformationr8::Info DLULHSPAInformationr8::theInfo = {
	DLULHSPAInformationr8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 0, 0
};

const void *ULEDCHInformationr9ModeSpecificInfoFdd::itemsInfo[4] = {
	&EDPCCHInfor7::theInfo,
	&EDPDCHInfor8::theInfo,
	&EDPDCHSchedulingTransmConfiguration::theInfo,
	&UL16QAMSettings::theInfo,
};
bool ULEDCHInformationr9ModeSpecificInfoFdd::itemsPres[4] = {
	0,
	0,
	0,
	0,
};
const ULEDCHInformationr9ModeSpecificInfoFdd::Info ULEDCHInformationr9ModeSpecificInfoFdd::theInfo = {
	ULEDCHInformationr9ModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 4, 0
};

const void *NonScheduledTransGrantInfoTDDr9Tdd384768::itemsInfo[5] = {
	&NonScheduledTransGrantInfoTDDr9Tdd384768TimeslotResourceRelatedInfo::theInfo,
	&NonScheduledTransGrantInfoTDDr9Tdd384768PowerResourceRelatedInfo::theInfo,
	&ActivationTime::theInfo,
	&RepetitionPeriodAndLength::theInfo,
	&ULTSChannelisationCode::theInfo,
};
bool NonScheduledTransGrantInfoTDDr9Tdd384768::itemsPres[5] = {
	1,
	1,
	1,
	0,
	1,
};
const NonScheduledTransGrantInfoTDDr9Tdd384768::Info NonScheduledTransGrantInfoTDDr9Tdd384768::theInfo = {
	NonScheduledTransGrantInfoTDDr9Tdd384768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 1, 0
};

const void *NonScheduledTransGrantInfoTDDr9Tdd128EHICHInfoMidambleAllocationMode::choicesInfo[2] = {
	&NonScheduledTransGrantInfoTDDr9Tdd128EHICHInfoMidambleAllocationModeDefaultMidamble::theInfo,
	&NonScheduledTransGrantInfoTDDr9Tdd128EHICHInfoMidambleAllocationModeUeSpecificMidamble::theInfo,
};
const NonScheduledTransGrantInfoTDDr9Tdd128EHICHInfoMidambleAllocationMode::Info NonScheduledTransGrantInfoTDDr9Tdd128EHICHInfoMidambleAllocationMode::theInfo = {
	NonScheduledTransGrantInfoTDDr9Tdd128EHICHInfoMidambleAllocationMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *NonScheduledTransGrantInfoTDDr9Tdd128EHICHInfo::itemsInfo[5] = {
	&TimeslotNumberLCRr4::theInfo,
	&HSChannelisationCodeLCR::theInfo,
	&NonScheduledTransGrantInfoTDDr9Tdd128EHICHInfoMidambleAllocationMode::theInfo,
	&NonScheduledTransGrantInfoTDDr9Tdd128EHICHInfoMidambleConfiguration::theInfo,
	&NonScheduledTransGrantInfoTDDr9Tdd128EHICHInfoSignatureSequenceGroupIndex::theInfo,
};
bool NonScheduledTransGrantInfoTDDr9Tdd128EHICHInfo::itemsPres[5] = {
	1,
	1,
	1,
	1,
	1,
};
const NonScheduledTransGrantInfoTDDr9Tdd128EHICHInfo::Info NonScheduledTransGrantInfoTDDr9Tdd128EHICHInfo::theInfo = {
	NonScheduledTransGrantInfoTDDr9Tdd128EHICHInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 0, 0
};

const void *NonScheduledTransGrantInfoTDDr9Tdd128::itemsInfo[10] = {
	&NonScheduledTransGrantInfoTDDr9Tdd128NEUCCH::theInfo,
	&NonScheduledTransGrantInfoTDDr9Tdd128NEHICH::theInfo,
	&NonScheduledTransGrantInfoTDDr9Tdd128TimeslotResourceRelatedInfo::theInfo,
	&NonScheduledTransGrantInfoTDDr9Tdd128PowerResourceRelatedInfo::theInfo,
	&ActivationTime::theInfo,
	&NonScheduledTransGrantInfoTDDr9Tdd128SfnNum::theInfo,
	&RepetitionPeriodAndLength::theInfo,
	&ULTSChannelisationCode::theInfo,
	&NonScheduledTransGrantInfoTDDr9Tdd128EHICHInfo::theInfo,
	&NonScheduledTransGrantInfoTDDr9Tdd128t_SI_nst::theInfo,
};
bool NonScheduledTransGrantInfoTDDr9Tdd128::itemsPres[10] = {
	0,
	0,
	1,
	1,
	1,
	1,
	0,
	1,
	1,
	0,
};
const NonScheduledTransGrantInfoTDDr9Tdd128::Info NonScheduledTransGrantInfoTDDr9Tdd128::theInfo = {
	NonScheduledTransGrantInfoTDDr9Tdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	10, 4, 0
};

const void *NonScheduledTransGrantInfoTDDr9::choicesInfo[2] = {
	&NonScheduledTransGrantInfoTDDr9Tdd384768::theInfo,
	&NonScheduledTransGrantInfoTDDr9Tdd128::theInfo,
};
const NonScheduledTransGrantInfoTDDr9::Info NonScheduledTransGrantInfoTDDr9::theInfo = {
	NonScheduledTransGrantInfoTDDr9::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULEDCHInformationr9ModeSpecificInfoTdd::itemsInfo[3] = {
	&ERUCCHInfo::theInfo,
	&EPUCHInfo::theInfo,
	&NonScheduledTransGrantInfoTDDr9::theInfo,
};
bool ULEDCHInformationr9ModeSpecificInfoTdd::itemsPres[3] = {
	0,
	0,
	0,
};
const ULEDCHInformationr9ModeSpecificInfoTdd::Info ULEDCHInformationr9ModeSpecificInfoTdd::theInfo = {
	ULEDCHInformationr9ModeSpecificInfoTdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *ULEDCHInformationr9ModeSpecificInfo::choicesInfo[2] = {
	&ULEDCHInformationr9ModeSpecificInfoFdd::theInfo,
	&ULEDCHInformationr9ModeSpecificInfoTdd::theInfo,
};
const ULEDCHInformationr9ModeSpecificInfo::Info ULEDCHInformationr9ModeSpecificInfo::theInfo = {
	ULEDCHInformationr9ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULEDCHInformationr9::itemsInfo[2] = {
	&ULEDCHInformationr9mac_es_e_resetIndicator::theInfo,
	&ULEDCHInformationr9ModeSpecificInfo::theInfo,
};
bool ULEDCHInformationr9::itemsPres[2] = {
	0,
	1,
};
const ULEDCHInformationr9::Info ULEDCHInformationr9::theInfo = {
	ULEDCHInformationr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *DLULHSPAInformationr9::itemsInfo[4] = {
	&ULEDCHInformationr9::theInfo,
	&DLCommonInformationr8::theInfo,
	&DLInformationPerRLListr7::theInfo,
	&DLHSPDSCHInformationr9::theInfo,
};
bool DLULHSPAInformationr9::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const DLULHSPAInformationr9::Info DLULHSPAInformationr9::theInfo = {
	DLULHSPAInformationr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 0, 0
};

const void *TGPSequenceShortTgpsStatusActivate::itemsInfo[1] = {
	&TGCFN::theInfo,
};
bool TGPSequenceShortTgpsStatusActivate::itemsPres[1] = {
	1,
};
const TGPSequenceShortTgpsStatusActivate::Info TGPSequenceShortTgpsStatusActivate::theInfo = {
	TGPSequenceShortTgpsStatusActivate::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *TGPSequenceShortTgpsStatus::choicesInfo[2] = {
	&TGPSequenceShortTgpsStatusActivate::theInfo,
	&TGPSequenceShortTgpsStatusDeactivate::theInfo,
};
const TGPSequenceShortTgpsStatus::Info TGPSequenceShortTgpsStatus::theInfo = {
	TGPSequenceShortTgpsStatus::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *TGPSequenceShort::itemsInfo[2] = {
	&TGPSI::theInfo,
	&TGPSequenceShortTgpsStatus::theInfo,
};
bool TGPSequenceShort::itemsPres[2] = {
	1,
	1,
};
const TGPSequenceShort::Info TGPSequenceShort::theInfo = {
	TGPSequenceShort::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *DPCHCompressedModeStatusInfo::itemsInfo[2] = {
	&TGPSReconfigurationCFN::theInfo,
	&DPCHCompressedModeStatusInfoTgpSequenceShortList::theInfo,
};
bool DPCHCompressedModeStatusInfo::itemsPres[2] = {
	1,
	1,
};
const DPCHCompressedModeStatusInfo::Info DPCHCompressedModeStatusInfo::theInfo = {
	DPCHCompressedModeStatusInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *DRXInfo::itemsInfo[4] = {
	&UEDRXCycle::theInfo,
	&UEDRXCycleInactivityThreshold::theInfo,
	&UEGrantMonitoringInactivityThreshold::theInfo,
	&DRXInfoUedrxGrantMonitoring::theInfo,
};
bool DRXInfo::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const DRXInfo::Info DRXInfo::theInfo = {
	DRXInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 0, 0
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

const void *DTXEDCHTTI10ms::itemsInfo[3] = {
	&UEDTXCycle110ms::theInfo,
	&UEDTXCycle210ms::theInfo,
	&MACDTXCycle10ms::theInfo,
};
bool DTXEDCHTTI10ms::itemsPres[3] = {
	1,
	1,
	1,
};
const DTXEDCHTTI10ms::Info DTXEDCHTTI10ms::theInfo = {
	DTXEDCHTTI10ms::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *DTXEDCHTTI2ms::itemsInfo[3] = {
	&UEDTXCycle12ms::theInfo,
	&UEDTXCycle22ms::theInfo,
	&MACDTXCycle2ms::theInfo,
};
bool DTXEDCHTTI2ms::itemsPres[3] = {
	1,
	1,
	1,
};
const DTXEDCHTTI2ms::Info DTXEDCHTTI2ms::theInfo = {
	DTXEDCHTTI2ms::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *DTXInfoEdchTTILength::choicesInfo[2] = {
	&DTXEDCHTTI10ms::theInfo,
	&DTXEDCHTTI2ms::theInfo,
};
const DTXInfoEdchTTILength::Info DTXInfoEdchTTILength::theInfo = {
	DTXInfoEdchTTILength::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DTXInfo::itemsInfo[8] = {
	&DTXInfoEdchTTILength::theInfo,
	&UEDTXCycle2InactivityThreshold::theInfo,
	&DTXInfoUedtxcycle2DefaultSG::theInfo,
	&UEDTXlongpreamblelength::theInfo,
	&MACInactivityThreshold::theInfo,
	&CQIDTXTimer::theInfo,
	&UEDPCCHBurst::theInfo,
	&UEDPCCHBurst::theInfo,
};
bool DTXInfo::itemsPres[8] = {
	1,
	1,
	0,
	0,
	1,
	1,
	1,
	1,
};
const DTXInfo::Info DTXInfo::theInfo = {
	DTXInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	8, 2, 0
};

const void *DTXDRXInfor7::itemsInfo[3] = {
	&DTXInfo::theInfo,
	&DRXInfo::theInfo,
	&UplinkDPCCHSlotFormatInformation::theInfo,
};
bool DTXDRXInfor7::itemsPres[3] = {
	0,
	0,
	1,
};
const DTXDRXInfor7::Info DTXDRXInfor7::theInfo = {
	DTXDRXInfor7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *EDCHRLInfoNewServingCellServingGrant::itemsInfo[2] = {
	&EDCHRLInfoNewServingCellServingGrantValue::theInfo,
	&EDCHRLInfoNewServingCellServingGrantprimary_Secondary_GrantSelector::theInfo,
};
bool EDCHRLInfoNewServingCellServingGrant::itemsPres[2] = {
	0,
	1,
};
const EDCHRLInfoNewServingCellServingGrant::Info EDCHRLInfoNewServingCellServingGrant::theInfo = {
	EDCHRLInfoNewServingCellServingGrant::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *EDPDCHReferenceETFCI::itemsInfo[2] = {
	&EDPDCHReferenceETFCIReferenceETFCI::theInfo,
	&EDPDCHReferenceETFCIReferenceETFCIPO::theInfo,
};
bool EDPDCHReferenceETFCI::itemsPres[2] = {
	1,
	1,
};
const EDPDCHReferenceETFCI::Info EDPDCHReferenceETFCI::theInfo = {
	EDPDCHReferenceETFCI::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *EDCHRLInfoNewServingCellERGCHInfo::choicesInfo[2] = {
	&ERGCHInformation::theInfo,
	&EDCHRLInfoNewServingCellERGCHInfoReleaseIndicator::theInfo,
};
const EDCHRLInfoNewServingCellERGCHInfo::Info EDCHRLInfoNewServingCellERGCHInfo::theInfo = {
	EDCHRLInfoNewServingCellERGCHInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *EDCHRLInfoNewServingCell::itemsInfo[10] = {
	&PrimaryCPICHInfo::theInfo,
	&EAGCHInformation::theInfo,
	&EDCHRLInfoNewServingCellServingGrant::theInfo,
	&EDPCCHDPCCHPowerOffset::theInfo,
	&EDPDCHReferenceETFCIList::theInfo,
	&EDCHRLInfoNewServingCellPowerOffsetForSchedInfo::theInfo,
	&EDCHRLInfoNewServingCellThreeIndexStepThreshold::theInfo,
	&EDCHRLInfoNewServingCellTwoIndexStepThreshold::theInfo,
	&EHICHInformation::theInfo,
	&EDCHRLInfoNewServingCellERGCHInfo::theInfo,
};
bool EDCHRLInfoNewServingCell::itemsPres[10] = {
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
const EDCHRLInfoNewServingCell::Info EDCHRLInfoNewServingCell::theInfo = {
	EDCHRLInfoNewServingCell::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	10, 8, 0
};

const void *EDCHRLInfoOtherCellEHICHInfo::choicesInfo[2] = {
	&EHICHInformation::theInfo,
	&EDCHRLInfoOtherCellEHICHInfoReleaseIndicator::theInfo,
};
const EDCHRLInfoOtherCellEHICHInfo::Info EDCHRLInfoOtherCellEHICHInfo::theInfo = {
	EDCHRLInfoOtherCellEHICHInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *EDCHRLInfoOtherCellERGCHInfo::choicesInfo[2] = {
	&ERGCHInformation::theInfo,
	&EDCHRLInfoOtherCellERGCHInfoReleaseIndicator::theInfo,
};
const EDCHRLInfoOtherCellERGCHInfo::Info EDCHRLInfoOtherCellERGCHInfo::theInfo = {
	EDCHRLInfoOtherCellERGCHInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *EDCHRLInfoOtherCell::itemsInfo[3] = {
	&PrimaryCPICHInfo::theInfo,
	&EDCHRLInfoOtherCellEHICHInfo::theInfo,
	&EDCHRLInfoOtherCellERGCHInfo::theInfo,
};
bool EDCHRLInfoOtherCell::itemsPres[3] = {
	1,
	0,
	0,
};
const EDCHRLInfoOtherCell::Info EDCHRLInfoOtherCell::theInfo = {
	EDCHRLInfoOtherCell::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *EDCHReconfigurationInfo::itemsInfo[2] = {
	&EDCHRLInfoNewServingCell::theInfo,
	&EDCHReconfigurationInfoEDCHRLInfoOtherCellList::theInfo,
};
bool EDCHReconfigurationInfo::itemsPres[2] = {
	0,
	0,
};
const EDCHReconfigurationInfo::Info EDCHReconfigurationInfo::theInfo = {
	EDCHReconfigurationInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *EDCHRLInfoNewServingCellr7ServingGrant::itemsInfo[2] = {
	&EDCHRLInfoNewServingCellr7ServingGrantValue::theInfo,
	&EDCHRLInfoNewServingCellr7ServingGrantprimary_Secondary_GrantSelector::theInfo,
};
bool EDCHRLInfoNewServingCellr7ServingGrant::itemsPres[2] = {
	0,
	1,
};
const EDCHRLInfoNewServingCellr7ServingGrant::Info EDCHRLInfoNewServingCellr7ServingGrant::theInfo = {
	EDCHRLInfoNewServingCellr7ServingGrant::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *EDCHRLInfoNewServingCellr7ERGCHInfo::choicesInfo[2] = {
	&ERGCHInformation::theInfo,
	&EDCHRLInfoNewServingCellr7ERGCHInfoReleaseIndicator::theInfo,
};
const EDCHRLInfoNewServingCellr7ERGCHInfo::Info EDCHRLInfoNewServingCellr7ERGCHInfo::theInfo = {
	EDCHRLInfoNewServingCellr7ERGCHInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *EDCHRLInfoNewServingCellr7::itemsInfo[10] = {
	&PrimaryCPICHInfo::theInfo,
	&EAGCHInformation::theInfo,
	&EDCHRLInfoNewServingCellr7ServingGrant::theInfo,
	&EDPCCHDPCCHPowerOffset::theInfo,
	&EDPDCHReferenceETFCIListr7::theInfo,
	&EDCHRLInfoNewServingCellr7PowerOffsetForSchedInfo::theInfo,
	&EDCHRLInfoNewServingCellr7ThreeIndexStepThreshold::theInfo,
	&EDCHRLInfoNewServingCellr7TwoIndexStepThreshold::theInfo,
	&EHICHInformation::theInfo,
	&EDCHRLInfoNewServingCellr7ERGCHInfo::theInfo,
};
bool EDCHRLInfoNewServingCellr7::itemsPres[10] = {
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
const EDCHRLInfoNewServingCellr7::Info EDCHRLInfoNewServingCellr7::theInfo = {
	EDCHRLInfoNewServingCellr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	10, 8, 0
};

const void *EDCHReconfigurationInfor7::itemsInfo[2] = {
	&EDCHRLInfoNewServingCellr7::theInfo,
	&EDCHReconfigurationInfor7EDCHRLInfoOtherCellList::theInfo,
};
bool EDCHReconfigurationInfor7::itemsPres[2] = {
	0,
	0,
};
const EDCHReconfigurationInfor7::Info EDCHReconfigurationInfor7::theInfo = {
	EDCHReconfigurationInfor7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *EDCHRLInfoNewSecServingCellERGCHInfo::choicesInfo[2] = {
	&ERGCHInformation::theInfo,
	&EDCHRLInfoNewSecServingCellERGCHInfoReleaseIndicator::theInfo,
};
const EDCHRLInfoNewSecServingCellERGCHInfo::Info EDCHRLInfoNewSecServingCellERGCHInfo::theInfo = {
	EDCHRLInfoNewSecServingCellERGCHInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *EDCHRLInfoNewSecServingCell::itemsInfo[3] = {
	&EAGCHInformation::theInfo,
	&EHICHInformation::theInfo,
	&EDCHRLInfoNewSecServingCellERGCHInfo::theInfo,
};
bool EDCHRLInfoNewSecServingCell::itemsPres[3] = {
	1,
	0,
	0,
};
const EDCHRLInfoNewSecServingCell::Info EDCHRLInfoNewSecServingCell::theInfo = {
	EDCHRLInfoNewSecServingCell::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *EDCHRLInfoOtherCellSecULFreqERGCHInfo::choicesInfo[2] = {
	&ERGCHInformation::theInfo,
	&EDCHRLInfoOtherCellSecULFreqERGCHInfoReleaseIndicator::theInfo,
};
const EDCHRLInfoOtherCellSecULFreqERGCHInfo::Info EDCHRLInfoOtherCellSecULFreqERGCHInfo::theInfo = {
	EDCHRLInfoOtherCellSecULFreqERGCHInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *EDCHRLInfoOtherCellSecULFreq::itemsInfo[3] = {
	&PrimaryCPICHInfo::theInfo,
	&EHICHInformation::theInfo,
	&EDCHRLInfoOtherCellSecULFreqERGCHInfo::theInfo,
};
bool EDCHRLInfoOtherCellSecULFreq::itemsPres[3] = {
	1,
	0,
	0,
};
const EDCHRLInfoOtherCellSecULFreq::Info EDCHRLInfoOtherCellSecULFreq::theInfo = {
	EDCHRLInfoOtherCellSecULFreq::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *EDCHReconfigurationInfoSecULFrequency::itemsInfo[2] = {
	&EDCHRLInfoNewSecServingCell::theInfo,
	&EDCHReconfigurationInfoSecULFrequencyEDCHRLInfoOtherCellListSecULFreq::theInfo,
};
bool EDCHReconfigurationInfoSecULFrequency::itemsPres[2] = {
	0,
	0,
};
const EDCHReconfigurationInfoSecULFrequency::Info EDCHReconfigurationInfoSecULFrequency::theInfo = {
	EDCHReconfigurationInfoSecULFrequency::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *EDCHRLInfoSameServingCell::itemsInfo[2] = {
	&EDPCCHDPCCHPowerOffset::theInfo,
	&EDPDCHReferenceETFCIListr7::theInfo,
};
bool EDCHRLInfoSameServingCell::itemsPres[2] = {
	0,
	0,
};
const EDCHRLInfoSameServingCell::Info EDCHRLInfoSameServingCell::theInfo = {
	EDCHRLInfoSameServingCell::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *EHICHInformationForSPSTDD128ConfigurationmodeImplicit::itemsInfo[1] = {
	&EHICHInformationForSPSTDD128ConfigurationmodeImplicitEi::theInfo,
};
bool EHICHInformationForSPSTDD128ConfigurationmodeImplicit::itemsPres[1] = {
	0,
};
const EHICHInformationForSPSTDD128ConfigurationmodeImplicit::Info EHICHInformationForSPSTDD128ConfigurationmodeImplicit::theInfo = {
	EHICHInformationForSPSTDD128ConfigurationmodeImplicit::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *EHICHInformationForSPSTDD128ConfigurationmodeExplicitMidambleAllocationMode::choicesInfo[2] = {
	&EHICHInformationForSPSTDD128ConfigurationmodeExplicitMidambleAllocationModeDefaultMidamble::theInfo,
	&EHICHInformationForSPSTDD128ConfigurationmodeExplicitMidambleAllocationModeUeSpecificMidamble::theInfo,
};
const EHICHInformationForSPSTDD128ConfigurationmodeExplicitMidambleAllocationMode::Info EHICHInformationForSPSTDD128ConfigurationmodeExplicitMidambleAllocationMode::theInfo = {
	EHICHInformationForSPSTDD128ConfigurationmodeExplicitMidambleAllocationMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *EHICHInformationForSPSTDD128ConfigurationmodeExplicit::itemsInfo[4] = {
	&TimeslotNumberLCRr4::theInfo,
	&HSChannelisationCodeLCR::theInfo,
	&EHICHInformationForSPSTDD128ConfigurationmodeExplicitMidambleAllocationMode::theInfo,
	&EHICHInformationForSPSTDD128ConfigurationmodeExplicitMidambleConfiguration::theInfo,
};
bool EHICHInformationForSPSTDD128ConfigurationmodeExplicit::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const EHICHInformationForSPSTDD128ConfigurationmodeExplicit::Info EHICHInformationForSPSTDD128ConfigurationmodeExplicit::theInfo = {
	EHICHInformationForSPSTDD128ConfigurationmodeExplicit::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 0, 0
};

const void *EHICHInformationForSPSTDD128Configurationmode::choicesInfo[2] = {
	&EHICHInformationForSPSTDD128ConfigurationmodeImplicit::theInfo,
	&EHICHInformationForSPSTDD128ConfigurationmodeExplicit::theInfo,
};
const EHICHInformationForSPSTDD128Configurationmode::Info EHICHInformationForSPSTDD128Configurationmode::theInfo = {
	EHICHInformationForSPSTDD128Configurationmode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *EHICHInformationForSPSTDD128::itemsInfo[2] = {
	&EHICHInformationForSPSTDD128Configurationmode::theInfo,
	&EHICHInformationForSPSTDD128SignatureSequenceGroupIndex::theInfo,
};
bool EHICHInformationForSPSTDD128::itemsPres[2] = {
	1,
	1,
};
const EHICHInformationForSPSTDD128::Info EHICHInformationForSPSTDD128::theInfo = {
	EHICHInformationForSPSTDD128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
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

const void *EDCHSPSNewOperationTDD128InitialSPSInfoForEDCH::itemsInfo[7] = {
	&EDCHSPSNewOperationTDD128InitialSPSInfoForEDCHNEUCCH::theInfo,
	&ULTSChannelisationCode::theInfo,
	&EDCHSPSNewOperationTDD128InitialSPSInfoForEDCHTimeslotResourceRelatedInfo::theInfo,
	&EDCHSPSNewOperationTDD128InitialSPSInfoForEDCHPowerResourceRelatedInfo::theInfo,
	&ActivationTime::theInfo,
	&EDCHSPSNewOperationTDD128InitialSPSInfoForEDCHSubframeNum::theInfo,
	&EDCHSPSNewOperationTDD128InitialSPSInfoForEDCHInitialTxPatternIndex::theInfo,
};
bool EDCHSPSNewOperationTDD128InitialSPSInfoForEDCH::itemsPres[7] = {
	1,
	1,
	1,
	1,
	1,
	1,
	1,
};
const EDCHSPSNewOperationTDD128InitialSPSInfoForEDCH::Info EDCHSPSNewOperationTDD128InitialSPSInfoForEDCH::theInfo = {
	EDCHSPSNewOperationTDD128InitialSPSInfoForEDCH::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	7, 0, 0
};

const void *EDCHSPSNewOperationTDD128::itemsInfo[3] = {
	&EHICHInformationForSPSTDD128::theInfo,
	&EDCHTxPatternListTDD128::theInfo,
	&EDCHSPSNewOperationTDD128InitialSPSInfoForEDCH::theInfo,
};
bool EDCHSPSNewOperationTDD128::itemsPres[3] = {
	1,
	0,
	0,
};
const EDCHSPSNewOperationTDD128::Info EDCHSPSNewOperationTDD128::theInfo = {
	EDCHSPSNewOperationTDD128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *EDCHSPSInformationTDD128EdchSPSOperation::choicesInfo[2] = {
	&EDCHSPSInformationTDD128EdchSPSOperationContinue::theInfo,
	&EDCHSPSNewOperationTDD128::theInfo,
};
const EDCHSPSInformationTDD128EdchSPSOperation::Info EDCHSPSInformationTDD128EdchSPSOperation::theInfo = {
	EDCHSPSInformationTDD128EdchSPSOperation::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
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

const void *EDPCCHInfo::itemsInfo[2] = {
	&EDPCCHDPCCHPowerOffset::theInfo,
	&HappyBitDelayCondition::theInfo,
};
bool EDPCCHInfo::itemsPres[2] = {
	1,
	1,
};
const EDPCCHInfo::Info EDPCCHInfo::theInfo = {
	EDPCCHInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *EDPDCHInfo::itemsInfo[8] = {
	&ETFCITableIndex::theInfo,
	&EDCHMinimumSetETFCI::theInfo,
	&EDPDCHReferenceETFCIList::theInfo,
	&EDPDCHMaxChannelisationCodes::theInfo,
	&EDPDCHPLNonMax::theInfo,
	&EDPDCHSchedulingInfoConfiguration::theInfo,
	&EDPDCHInfoThreeIndexStepThreshold::theInfo,
	&EDPDCHInfoTwoIndexStepThreshold::theInfo,
};
bool EDPDCHInfo::itemsPres[8] = {
	1,
	0,
	1,
	1,
	1,
	1,
	0,
	0,
};
const EDPDCHInfo::Info EDPDCHInfo::theInfo = {
	EDPDCHInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	8, 3, 0
};

const void *EDPDCHInfor7::itemsInfo[8] = {
	&ETFCITableIndex::theInfo,
	&EDCHMinimumSetETFCI::theInfo,
	&EDPDCHReferenceETFCIListr7::theInfo,
	&EDPDCHMaxChannelisationCodes::theInfo,
	&EDPDCHPLNonMax::theInfo,
	&EDPDCHSchedulingInfoConfiguration::theInfo,
	&EDPDCHInfor7ThreeIndexStepThreshold::theInfo,
	&EDPDCHInfor7TwoIndexStepThreshold::theInfo,
};
bool EDPDCHInfor7::itemsPres[8] = {
	1,
	0,
	1,
	1,
	1,
	1,
	0,
	0,
};
const EDPDCHInfor7::Info EDPDCHInfor7::theInfo = {
	EDPDCHInfor7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	8, 3, 0
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

const void *EXTULTimingAdvanceModeSpecificInfoTdd768::itemsInfo[1] = {
	&EXTULTimingAdvanceModeSpecificInfoTdd768ExulTimingAdvance::theInfo,
};
bool EXTULTimingAdvanceModeSpecificInfoTdd768::itemsPres[1] = {
	1,
};
const EXTULTimingAdvanceModeSpecificInfoTdd768::Info EXTULTimingAdvanceModeSpecificInfoTdd768::theInfo = {
	EXTULTimingAdvanceModeSpecificInfoTdd768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *EXTULTimingAdvanceModeSpecificInfo::choicesInfo[2] = {
	&EXTULTimingAdvanceModeSpecificInfoTdd384::theInfo,
	&EXTULTimingAdvanceModeSpecificInfoTdd768::theInfo,
};
const EXTULTimingAdvanceModeSpecificInfo::Info EXTULTimingAdvanceModeSpecificInfo::theInfo = {
	EXTULTimingAdvanceModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
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

const void *HSChannelisationCodeSetInfoLCR::itemsInfo[2] = {
	&HSChannelisationCodeLCR::theInfo,
	&HSChannelisationCodeLCR::theInfo,
};
bool HSChannelisationCodeSetInfoLCR::itemsPres[2] = {
	1,
	1,
};
const HSChannelisationCodeSetInfoLCR::Info HSChannelisationCodeSetInfoLCR::theInfo = {
	HSChannelisationCodeSetInfoLCR::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *HSSCCHSystemInfo::itemsInfo[2] = {
	&SecondaryScramblingCode::theInfo,
	&HSSCCHSystemInfoHSSCCHChannelisationCodeInfo::theInfo,
};
bool HSSCCHSystemInfo::itemsPres[2] = {
	0,
	1,
};
const HSSCCHSystemInfo::Info HSSCCHSystemInfo::theInfo = {
	HSSCCHSystemInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *HSDSCHCommonSystemInformation::itemsInfo[7] = {
	&CommonRBMappingInfo::theInfo,
	&CommonRBMappingInfo::theInfo,
	&CommonMACehsReorderingQueueList::theInfo,
	&HSSCCHSystemInfo::theInfo,
	&HARQInfo::theInfo,
	&HSDSCHCommonSystemInformationCommonHRNTIinformation::theInfo,
	&HRNTI::theInfo,
};
bool HSDSCHCommonSystemInformation::itemsPres[7] = {
	1,
	0,
	1,
	1,
	1,
	1,
	1,
};
const HSDSCHCommonSystemInformation::Info HSDSCHCommonSystemInformation::theInfo = {
	HSDSCHCommonSystemInformation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	7, 1, 0
};

const void *HSSCCHSystemInfoTDD128::itemsInfo[7] = {
	&HSSCCHSystemInfoTDD128HsSCCHSetConfiguration::theInfo,
	&HSSCCHSystemInfoTDD128PowerlevelHSSICH::theInfo,
	&HSSCCHSystemInfoTDD128Nackackpoweroffset::theInfo,
	&HSSCCHSystemInfoTDD128tpc_step_size::theInfo,
	&BlerTarget::theInfo,
	&HSSCCHSystemInfoTDD128Powercontrolgap::theInfo,
	&HSSCCHSystemInfoTDD128Pathlosscompensationswitch::theInfo,
};
bool HSSCCHSystemInfoTDD128::itemsPres[7] = {
	1,
	1,
	1,
	1,
	1,
	0,
	0,
};
const HSSCCHSystemInfoTDD128::Info HSSCCHSystemInfoTDD128::theInfo = {
	HSSCCHSystemInfoTDD128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	7, 2, 0
};

const void *HSDSCHCommonSystemInformationTDD128::itemsInfo[8] = {
	&CommonRBMappingInfo::theInfo,
	&CommonRBMappingInfo::theInfo,
	&CommonMACehsReorderingQueueList::theInfo,
	&HSSCCHSystemInfoTDD128::theInfo,
	&HARQInfo::theInfo,
	&HSPDSCHMidambleConfigurationTDD128::theInfo,
	&HSDSCHCommonSystemInformationTDD128CommonHRNTIinformation::theInfo,
	&HRNTI::theInfo,
};
bool HSDSCHCommonSystemInformationTDD128::itemsPres[8] = {
	1,
	0,
	1,
	1,
	1,
	1,
	1,
	1,
};
const HSDSCHCommonSystemInformationTDD128::Info HSDSCHCommonSystemInformationTDD128::theInfo = {
	HSDSCHCommonSystemInformationTDD128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	8, 1, 0
};

const void *HSDSCHDrxCellfachinfo::itemsInfo[4] = {
	&T321::theInfo,
	&HSDSCHDrxCycleFach::theInfo,
	&HSDSCHDrxBurstFach::theInfo,
	&HSDSCHDrxCellfachinfoDrxInterruptionhsdsch::theInfo,
};
bool HSDSCHDrxCellfachinfo::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const HSDSCHDrxCellfachinfo::Info HSDSCHDrxCellfachinfo::theInfo = {
	HSDSCHDrxCellfachinfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 0, 0
};

const void *HSDSCHDrxCellfachinfoTDD128::itemsInfo[3] = {
	&T321::theInfo,
	&HSDSCHDrxCycleFach::theInfo,
	&HSDSCHDrxBurstFach::theInfo,
};
bool HSDSCHDrxCellfachinfoTDD128::itemsPres[3] = {
	1,
	1,
	1,
};
const HSDSCHDrxCellfachinfoTDD128::Info HSDSCHDrxCellfachinfoTDD128::theInfo = {
	HSDSCHDrxCellfachinfoTDD128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *PICHInfoFdd::itemsInfo[3] = {
	&ChannelisationCode256::theInfo,
	&PICountPerFrame::theInfo,
	&PICHInfoFddSttdIndicator::theInfo,
};
bool PICHInfoFdd::itemsPres[3] = {
	1,
	1,
	1,
};
const PICHInfoFdd::Info PICHInfoFdd::theInfo = {
	PICHInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *RepPerLengthOffsetPICH::choicesInfo[9] = {
	&RepPerLengthOffsetPICHRpp42::theInfo,
	&RepPerLengthOffsetPICHRpp82::theInfo,
	&RepPerLengthOffsetPICHRpp84::theInfo,
	&RepPerLengthOffsetPICHRpp162::theInfo,
	&RepPerLengthOffsetPICHRpp164::theInfo,
	&RepPerLengthOffsetPICHRpp322::theInfo,
	&RepPerLengthOffsetPICHRpp324::theInfo,
	&RepPerLengthOffsetPICHRpp642::theInfo,
	&RepPerLengthOffsetPICHRpp644::theInfo,
};
const RepPerLengthOffsetPICH::Info RepPerLengthOffsetPICH::theInfo = {
	RepPerLengthOffsetPICH::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	8
};

const void *PICHInfoTdd::itemsInfo[7] = {
	&TDDPICHCCode::theInfo,
	&TimeslotNumber::theInfo,
	&MidambleShiftAndBurstType::theInfo,
	&RepPerLengthOffsetPICH::theInfo,
	&PagingIndicatorLength::theInfo,
	&NGAP::theInfo,
	&NPCH::theInfo,
};
bool PICHInfoTdd::itemsPres[7] = {
	0,
	0,
	1,
	0,
	0,
	0,
	0,
};
const PICHInfoTdd::Info PICHInfoTdd::theInfo = {
	PICHInfoTdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	7, 6, 0
};

const void *PICHInfo::choicesInfo[2] = {
	&PICHInfoFdd::theInfo,
	&PICHInfoTdd::theInfo,
};
const PICHInfo::Info PICHInfo::theInfo = {
	PICHInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *PICHForHSDPASupportedPaging::itemsInfo[2] = {
	&PICHInfo::theInfo,
	&PICHForHSDPASupportedPagingHspdschChannelisationCode::theInfo,
};
bool PICHForHSDPASupportedPaging::itemsPres[2] = {
	1,
	1,
};
const PICHForHSDPASupportedPaging::Info PICHForHSDPASupportedPaging::theInfo = {
	PICHForHSDPASupportedPaging::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *HSDSCHPagingSystemInformation::itemsInfo[4] = {
	&SecondaryScramblingCode::theInfo,
	&HSDSCHPagingSystemInformationPichForHSDPASupportedPagingList::theInfo,
	&HSDSCHPagingSystemInformationNumberOfPcchTransmissions::theInfo,
	&HSDSCHPagingSystemInformationTransportBlockSizeList::theInfo,
};
bool HSDSCHPagingSystemInformation::itemsPres[4] = {
	0,
	1,
	1,
	1,
};
const HSDSCHPagingSystemInformation::Info HSDSCHPagingSystemInformation::theInfo = {
	HSDSCHPagingSystemInformation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 1, 0
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

const void *PICHInfoLCRr4::itemsInfo[7] = {
	&TimeslotNumberLCRr4::theInfo,
	&PichChannelisationCodeListLCRr4::theInfo,
	&MidambleShiftAndBurstTypeLCRr4::theInfo,
	&RepPerLengthOffsetPICH::theInfo,
	&PagingIndicatorLength::theInfo,
	&NGAP::theInfo,
	&NPCH::theInfo,
};
bool PICHInfoLCRr4::itemsPres[7] = {
	0,
	1,
	1,
	0,
	0,
	0,
	0,
};
const PICHInfoLCRr4::Info PICHInfoLCRr4::theInfo = {
	PICHInfoLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	7, 5, 0
};

const void *PICHForHSDPASupportedPagingTDD128::choicesInfo[2] = {
	&PICHForHSDPASupportedPagingTDD128Implicit::theInfo,
	&PICHInfoLCRr4::theInfo,
};
const PICHForHSDPASupportedPagingTDD128::Info PICHForHSDPASupportedPagingTDD128::theInfo = {
	PICHForHSDPASupportedPagingTDD128::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
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

const void *PCCHInformationList::itemsInfo[3] = {
	&PCCHInformationListPagingassociatedHspdschInfo::theInfo,
	&PCCHInformationListPagingsubChannelsize::theInfo,
	&PCCHInformationListTransportBlockSizeList::theInfo,
};
bool PCCHInformationList::itemsPres[3] = {
	1,
	1,
	1,
};
const PCCHInformationList::Info PCCHInformationList::theInfo = {
	PCCHInformationList::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *HSDSCHPagingSystemInformationTDD128::itemsInfo[3] = {
	&HSDSCHPagingSystemInformationTDD128PichForHsdschList::theInfo,
	&HSDSCHPagingSystemInformationTDD128DtchDCCHreceptionwindowsize::theInfo,
	&PCCHInformationList::theInfo,
};
bool HSDSCHPagingSystemInformationTDD128::itemsPres[3] = {
	1,
	1,
	0,
};
const HSDSCHPagingSystemInformationTDD128::Info HSDSCHPagingSystemInformationTDD128::theInfo = {
	HSDSCHPagingSystemInformationTDD128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
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

const void *HSDSCHSPSNewOperationTDD128HARQInfoForSPS::itemsInfo[2] = {
	&HSDSCHSPSNewOperationTDD128HARQInfoForSPSNumberOfProcesses::theInfo,
	&HARQMemorySize::theInfo,
};
bool HSDSCHSPSNewOperationTDD128HARQInfoForSPS::itemsPres[2] = {
	1,
	1,
};
const HSDSCHSPSNewOperationTDD128HARQInfoForSPS::Info HSDSCHSPSNewOperationTDD128HARQInfoForSPS::theInfo = {
	HSDSCHSPSNewOperationTDD128HARQInfoForSPS::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
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

const void *HSDSCHSPSNewOperationTDD128InitialSPSInfoForHSDSCH::itemsInfo[8] = {
	&HSDSCHSPSNewOperationTDD128InitialSPSInfoForHSDSCHTimeslotInfo::theInfo,
	&HSChannelisationCodeSetInfoLCR::theInfo,
	&ActivationTime::theInfo,
	&HSDSCHSPSNewOperationTDD128InitialSPSInfoForHSDSCHSfnNum::theInfo,
	&HSDSCHSPSNewOperationTDD128InitialSPSInfoForHSDSCHInitialRxPatternIndex::theInfo,
	&HSDSCHSPSNewOperationTDD128InitialSPSInfoForHSDSCHInitialTfsIndex::theInfo,
	&HSDSCHSPSNewOperationTDD128InitialSPSInfoForHSDSCHmodulation::theInfo,
	&HSDSCHSPSNewOperationTDD128InitialSPSInfoForHSDSCHHssichIndex::theInfo,
};
bool HSDSCHSPSNewOperationTDD128InitialSPSInfoForHSDSCH::itemsPres[8] = {
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
};
const HSDSCHSPSNewOperationTDD128InitialSPSInfoForHSDSCH::Info HSDSCHSPSNewOperationTDD128InitialSPSInfoForHSDSCH::theInfo = {
	HSDSCHSPSNewOperationTDD128InitialSPSInfoForHSDSCH::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	8, 0, 0
};

const void *HSDSCHSPSNewOperationTDD128::itemsInfo[5] = {
	&HSDSCHTbsListTDD128::theInfo,
	&HSDSCHRxPatternListTDD128::theInfo,
	&HSDSCHSPSNewOperationTDD128HARQInfoForSPS::theInfo,
	&HSSICHListTDD128::theInfo,
	&HSDSCHSPSNewOperationTDD128InitialSPSInfoForHSDSCH::theInfo,
};
bool HSDSCHSPSNewOperationTDD128::itemsPres[5] = {
	0,
	0,
	0,
	1,
	0,
};
const HSDSCHSPSNewOperationTDD128::Info HSDSCHSPSNewOperationTDD128::theInfo = {
	HSDSCHSPSNewOperationTDD128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 4, 0
};

const void *HSDSCHSPSInformationTDD128HsdschSPSOperation::choicesInfo[2] = {
	&HSDSCHSPSInformationTDD128HsdschSPSOperationContinue::theInfo,
	&HSDSCHSPSNewOperationTDD128::theInfo,
};
const HSDSCHSPSInformationTDD128HsdschSPSOperation::Info HSDSCHSPSInformationTDD128HsdschSPSOperation::theInfo = {
	HSDSCHSPSInformationTDD128HsdschSPSOperation::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
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

const void *HSSCCHLessNewOperation::itemsInfo[2] = {
	&HSSCCHLessNewOperationHspdschCodeIndex::theInfo,
	&HSSCCHLessTFSList::theInfo,
};
bool HSSCCHLessNewOperation::itemsPres[2] = {
	1,
	1,
};
const HSSCCHLessNewOperation::Info HSSCCHLessNewOperation::theInfo = {
	HSSCCHLessNewOperation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *HSSCCHLessInfor7HsscchLessOperation::choicesInfo[2] = {
	&HSSCCHLessInfor7HsscchLessOperationContinue::theInfo,
	&HSSCCHLessNewOperation::theInfo,
};
const HSSCCHLessInfor7HsscchLessOperation::Info HSSCCHLessInfor7HsscchLessOperation::theInfo = {
	HSSCCHLessInfor7HsscchLessOperation::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
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

const void *HSSCCHTDD128MultiCarrierMidambleAllocationMode::choicesInfo[3] = {
	&HSSCCHTDD128MultiCarrierMidambleAllocationModeDefaultMidamble::theInfo,
	&HSSCCHTDD128MultiCarrierMidambleAllocationModeCommonMidamble::theInfo,
	&HSSCCHTDD128MultiCarrierMidambleAllocationModeUeSpecificMidamble::theInfo,
};
const HSSCCHTDD128MultiCarrierMidambleAllocationMode::Info HSSCCHTDD128MultiCarrierMidambleAllocationMode::theInfo = {
	HSSCCHTDD128MultiCarrierMidambleAllocationMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *HSSCCHTDD128MultiCarrier::itemsInfo[8] = {
	&UARFCN::theInfo,
	&TimeslotNumberLCRr4::theInfo,
	&HSChannelisationCodeLCR::theInfo,
	&HSChannelisationCodeLCR::theInfo,
	&HSSCCHTDD128MultiCarrierMidambleAllocationMode::theInfo,
	&HSSCCHTDD128MultiCarrierMidambleConfiguration::theInfo,
	&BlerTarget::theInfo,
	&HSSICHConfigurationTDD128::theInfo,
};
bool HSSCCHTDD128MultiCarrier::itemsPres[8] = {
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
};
const HSSCCHTDD128MultiCarrier::Info HSSCCHTDD128MultiCarrier::theInfo = {
	HSSCCHTDD128MultiCarrier::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	8, 0, 0
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

const void *IndividualTimeslotInfoLCRr4ext::itemsInfo[3] = {
	&MidambleShiftAndBurstTypeLCRr4::theInfo,
	&IndividualTimeslotInfoLCRr4extmodulation::theInfo,
	&IndividualTimeslotInfoLCRr4extss_TPC_Symbols::theInfo,
};
bool IndividualTimeslotInfoLCRr4ext::itemsPres[3] = {
	1,
	1,
	1,
};
const IndividualTimeslotInfoLCRr4ext::Info IndividualTimeslotInfoLCRr4ext::theInfo = {
	IndividualTimeslotInfoLCRr4ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *MidambleShiftAndBurstTypeDLBurstTypeType1MidambleAllocationModeUeSpecificMidamble::itemsInfo[1] = {
	&MidambleShiftLong::theInfo,
};
bool MidambleShiftAndBurstTypeDLBurstTypeType1MidambleAllocationModeUeSpecificMidamble::itemsPres[1] = {
	1,
};
const MidambleShiftAndBurstTypeDLBurstTypeType1MidambleAllocationModeUeSpecificMidamble::Info MidambleShiftAndBurstTypeDLBurstTypeType1MidambleAllocationModeUeSpecificMidamble::theInfo = {
	MidambleShiftAndBurstTypeDLBurstTypeType1MidambleAllocationModeUeSpecificMidamble::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MidambleShiftAndBurstTypeDLBurstTypeType1MidambleAllocationMode::choicesInfo[3] = {
	&MidambleShiftAndBurstTypeDLBurstTypeType1MidambleAllocationModeDefaultMidamble::theInfo,
	&MidambleShiftAndBurstTypeDLBurstTypeType1MidambleAllocationModeCommonMidamble::theInfo,
	&MidambleShiftAndBurstTypeDLBurstTypeType1MidambleAllocationModeUeSpecificMidamble::theInfo,
};
const MidambleShiftAndBurstTypeDLBurstTypeType1MidambleAllocationMode::Info MidambleShiftAndBurstTypeDLBurstTypeType1MidambleAllocationMode::theInfo = {
	MidambleShiftAndBurstTypeDLBurstTypeType1MidambleAllocationMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *MidambleShiftAndBurstTypeDLBurstTypeType1::itemsInfo[2] = {
	&MidambleConfigurationBurstType1and3::theInfo,
	&MidambleShiftAndBurstTypeDLBurstTypeType1MidambleAllocationMode::theInfo,
};
bool MidambleShiftAndBurstTypeDLBurstTypeType1::itemsPres[2] = {
	1,
	1,
};
const MidambleShiftAndBurstTypeDLBurstTypeType1::Info MidambleShiftAndBurstTypeDLBurstTypeType1::theInfo = {
	MidambleShiftAndBurstTypeDLBurstTypeType1::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *MidambleShiftAndBurstTypeDLBurstTypeType2MidambleAllocationModeUeSpecificMidamble::itemsInfo[1] = {
	&MidambleShiftShort::theInfo,
};
bool MidambleShiftAndBurstTypeDLBurstTypeType2MidambleAllocationModeUeSpecificMidamble::itemsPres[1] = {
	1,
};
const MidambleShiftAndBurstTypeDLBurstTypeType2MidambleAllocationModeUeSpecificMidamble::Info MidambleShiftAndBurstTypeDLBurstTypeType2MidambleAllocationModeUeSpecificMidamble::theInfo = {
	MidambleShiftAndBurstTypeDLBurstTypeType2MidambleAllocationModeUeSpecificMidamble::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MidambleShiftAndBurstTypeDLBurstTypeType2MidambleAllocationMode::choicesInfo[3] = {
	&MidambleShiftAndBurstTypeDLBurstTypeType2MidambleAllocationModeDefaultMidamble::theInfo,
	&MidambleShiftAndBurstTypeDLBurstTypeType2MidambleAllocationModeCommonMidamble::theInfo,
	&MidambleShiftAndBurstTypeDLBurstTypeType2MidambleAllocationModeUeSpecificMidamble::theInfo,
};
const MidambleShiftAndBurstTypeDLBurstTypeType2MidambleAllocationMode::Info MidambleShiftAndBurstTypeDLBurstTypeType2MidambleAllocationMode::theInfo = {
	MidambleShiftAndBurstTypeDLBurstTypeType2MidambleAllocationMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *MidambleShiftAndBurstTypeDLBurstTypeType2::itemsInfo[2] = {
	&MidambleConfigurationBurstType2::theInfo,
	&MidambleShiftAndBurstTypeDLBurstTypeType2MidambleAllocationMode::theInfo,
};
bool MidambleShiftAndBurstTypeDLBurstTypeType2::itemsPres[2] = {
	1,
	1,
};
const MidambleShiftAndBurstTypeDLBurstTypeType2::Info MidambleShiftAndBurstTypeDLBurstTypeType2::theInfo = {
	MidambleShiftAndBurstTypeDLBurstTypeType2::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *MidambleShiftAndBurstTypeDLBurstType::choicesInfo[2] = {
	&MidambleShiftAndBurstTypeDLBurstTypeType1::theInfo,
	&MidambleShiftAndBurstTypeDLBurstTypeType2::theInfo,
};
const MidambleShiftAndBurstTypeDLBurstType::Info MidambleShiftAndBurstTypeDLBurstType::theInfo = {
	MidambleShiftAndBurstTypeDLBurstType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
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

const void *MidambleShiftAndBurstTypeDLVHCRBurstTypeType1MidambleAllocationModeUeSpecificMidamble::itemsInfo[1] = {
	&MidambleShiftLong::theInfo,
};
bool MidambleShiftAndBurstTypeDLVHCRBurstTypeType1MidambleAllocationModeUeSpecificMidamble::itemsPres[1] = {
	1,
};
const MidambleShiftAndBurstTypeDLVHCRBurstTypeType1MidambleAllocationModeUeSpecificMidamble::Info MidambleShiftAndBurstTypeDLVHCRBurstTypeType1MidambleAllocationModeUeSpecificMidamble::theInfo = {
	MidambleShiftAndBurstTypeDLVHCRBurstTypeType1MidambleAllocationModeUeSpecificMidamble::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MidambleShiftAndBurstTypeDLVHCRBurstTypeType1MidambleAllocationMode::choicesInfo[3] = {
	&MidambleShiftAndBurstTypeDLVHCRBurstTypeType1MidambleAllocationModeDefaultMidamble::theInfo,
	&MidambleShiftAndBurstTypeDLVHCRBurstTypeType1MidambleAllocationModeCommonMidamble::theInfo,
	&MidambleShiftAndBurstTypeDLVHCRBurstTypeType1MidambleAllocationModeUeSpecificMidamble::theInfo,
};
const MidambleShiftAndBurstTypeDLVHCRBurstTypeType1MidambleAllocationMode::Info MidambleShiftAndBurstTypeDLVHCRBurstTypeType1MidambleAllocationMode::theInfo = {
	MidambleShiftAndBurstTypeDLVHCRBurstTypeType1MidambleAllocationMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *MidambleShiftAndBurstTypeDLVHCRBurstTypeType1::itemsInfo[2] = {
	&MidambleConfigurationBurstType1and3::theInfo,
	&MidambleShiftAndBurstTypeDLVHCRBurstTypeType1MidambleAllocationMode::theInfo,
};
bool MidambleShiftAndBurstTypeDLVHCRBurstTypeType1::itemsPres[2] = {
	1,
	1,
};
const MidambleShiftAndBurstTypeDLVHCRBurstTypeType1::Info MidambleShiftAndBurstTypeDLVHCRBurstTypeType1::theInfo = {
	MidambleShiftAndBurstTypeDLVHCRBurstTypeType1::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *MidambleShiftAndBurstTypeDLVHCRBurstTypeType2MidambleAllocationModeUeSpecificMidamble::itemsInfo[1] = {
	&MidambleShiftShortVHCR::theInfo,
};
bool MidambleShiftAndBurstTypeDLVHCRBurstTypeType2MidambleAllocationModeUeSpecificMidamble::itemsPres[1] = {
	1,
};
const MidambleShiftAndBurstTypeDLVHCRBurstTypeType2MidambleAllocationModeUeSpecificMidamble::Info MidambleShiftAndBurstTypeDLVHCRBurstTypeType2MidambleAllocationModeUeSpecificMidamble::theInfo = {
	MidambleShiftAndBurstTypeDLVHCRBurstTypeType2MidambleAllocationModeUeSpecificMidamble::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MidambleShiftAndBurstTypeDLVHCRBurstTypeType2MidambleAllocationMode::choicesInfo[3] = {
	&MidambleShiftAndBurstTypeDLVHCRBurstTypeType2MidambleAllocationModeDefaultMidamble::theInfo,
	&MidambleShiftAndBurstTypeDLVHCRBurstTypeType2MidambleAllocationModeCommonMidamble::theInfo,
	&MidambleShiftAndBurstTypeDLVHCRBurstTypeType2MidambleAllocationModeUeSpecificMidamble::theInfo,
};
const MidambleShiftAndBurstTypeDLVHCRBurstTypeType2MidambleAllocationMode::Info MidambleShiftAndBurstTypeDLVHCRBurstTypeType2MidambleAllocationMode::theInfo = {
	MidambleShiftAndBurstTypeDLVHCRBurstTypeType2MidambleAllocationMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *MidambleShiftAndBurstTypeDLVHCRBurstTypeType2::itemsInfo[2] = {
	&MidambleConfigurationBurstType2VHCR::theInfo,
	&MidambleShiftAndBurstTypeDLVHCRBurstTypeType2MidambleAllocationMode::theInfo,
};
bool MidambleShiftAndBurstTypeDLVHCRBurstTypeType2::itemsPres[2] = {
	1,
	1,
};
const MidambleShiftAndBurstTypeDLVHCRBurstTypeType2::Info MidambleShiftAndBurstTypeDLVHCRBurstTypeType2::theInfo = {
	MidambleShiftAndBurstTypeDLVHCRBurstTypeType2::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *MidambleShiftAndBurstTypeDLVHCRBurstType::choicesInfo[2] = {
	&MidambleShiftAndBurstTypeDLVHCRBurstTypeType1::theInfo,
	&MidambleShiftAndBurstTypeDLVHCRBurstTypeType2::theInfo,
};
const MidambleShiftAndBurstTypeDLVHCRBurstType::Info MidambleShiftAndBurstTypeDLVHCRBurstType::theInfo = {
	MidambleShiftAndBurstTypeDLVHCRBurstType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
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

const void *MIMOPilotConfigurationSecondCPICHPatternDiversityPattern::itemsInfo[1] = {
	&ChannelisationCode256::theInfo,
};
bool MIMOPilotConfigurationSecondCPICHPatternDiversityPattern::itemsPres[1] = {
	1,
};
const MIMOPilotConfigurationSecondCPICHPatternDiversityPattern::Info MIMOPilotConfigurationSecondCPICHPatternDiversityPattern::theInfo = {
	MIMOPilotConfigurationSecondCPICHPatternDiversityPattern::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MIMOPilotConfigurationSecondCPICHPattern::choicesInfo[2] = {
	&MIMOPilotConfigurationSecondCPICHPatternNormalPattern::theInfo,
	&MIMOPilotConfigurationSecondCPICHPatternDiversityPattern::theInfo,
};
const MIMOPilotConfigurationSecondCPICHPattern::Info MIMOPilotConfigurationSecondCPICHPattern::theInfo = {
	MIMOPilotConfigurationSecondCPICHPattern::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
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

const void *MIMOParametersr7::itemsInfo[3] = {
	&MIMOOperation::theInfo,
	&MIMONMRatio::theInfo,
	&MIMOPilotConfiguration::theInfo,
};
bool MIMOParametersr7::itemsPres[3] = {
	1,
	0,
	0,
};
const MIMOParametersr7::Info MIMOParametersr7::theInfo = {
	MIMOParametersr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
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

const void *MIMOParametersr8ModeSpecificInfoFdd::itemsInfo[2] = {
	&MIMONMRatio::theInfo,
	&MIMOPilotConfiguration::theInfo,
};
bool MIMOParametersr8ModeSpecificInfoFdd::itemsPres[2] = {
	0,
	0,
};
const MIMOParametersr8ModeSpecificInfoFdd::Info MIMOParametersr8ModeSpecificInfoFdd::theInfo = {
	MIMOParametersr8ModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *MIMOParametersr8ModeSpecificInfoTddTdd128::itemsInfo[2] = {
	&MIMOParametersr8ModeSpecificInfoTddTdd128mimoSFModeForHSPDSCHDualStream::theInfo,
	&HSSICHReferenceSignalInfoList::theInfo,
};
bool MIMOParametersr8ModeSpecificInfoTddTdd128::itemsPres[2] = {
	1,
	0,
};
const MIMOParametersr8ModeSpecificInfoTddTdd128::Info MIMOParametersr8ModeSpecificInfoTddTdd128::theInfo = {
	MIMOParametersr8ModeSpecificInfoTddTdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *MIMOParametersr8ModeSpecificInfoTdd::choicesInfo[2] = {
	&MIMOParametersr8ModeSpecificInfoTddTdd128::theInfo,
	&MIMOParametersr8ModeSpecificInfoTddTdd384tdd768::theInfo,
};
const MIMOParametersr8ModeSpecificInfoTdd::Info MIMOParametersr8ModeSpecificInfoTdd::theInfo = {
	MIMOParametersr8ModeSpecificInfoTdd::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *MIMOParametersr8ModeSpecificInfo::choicesInfo[2] = {
	&MIMOParametersr8ModeSpecificInfoFdd::theInfo,
	&MIMOParametersr8ModeSpecificInfoTdd::theInfo,
};
const MIMOParametersr8ModeSpecificInfo::Info MIMOParametersr8ModeSpecificInfo::theInfo = {
	MIMOParametersr8ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *MIMOParametersr8::itemsInfo[2] = {
	&MIMOOperation::theInfo,
	&MIMOParametersr8ModeSpecificInfo::theInfo,
};
bool MIMOParametersr8::itemsPres[2] = {
	1,
	1,
};
const MIMOParametersr8::Info MIMOParametersr8::theInfo = {
	MIMOParametersr8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *MIMOParametersr9ModeSpecificInfoFdd::itemsInfo[3] = {
	&MIMONMRatio::theInfo,
	&MIMOPilotConfigurationr9::theInfo,
	&MIMOParametersr9ModeSpecificInfoFddprecodingWeightSetRestriction::theInfo,
};
bool MIMOParametersr9ModeSpecificInfoFdd::itemsPres[3] = {
	0,
	0,
	0,
};
const MIMOParametersr9ModeSpecificInfoFdd::Info MIMOParametersr9ModeSpecificInfoFdd::theInfo = {
	MIMOParametersr9ModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *MIMOParametersr9ModeSpecificInfoTddTdd128::itemsInfo[2] = {
	&MIMOParametersr9ModeSpecificInfoTddTdd128mimoSFModeForHSPDSCHDualStream::theInfo,
	&HSSICHReferenceSignalInfoList::theInfo,
};
bool MIMOParametersr9ModeSpecificInfoTddTdd128::itemsPres[2] = {
	1,
	0,
};
const MIMOParametersr9ModeSpecificInfoTddTdd128::Info MIMOParametersr9ModeSpecificInfoTddTdd128::theInfo = {
	MIMOParametersr9ModeSpecificInfoTddTdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *MIMOParametersr9ModeSpecificInfoTdd::choicesInfo[2] = {
	&MIMOParametersr9ModeSpecificInfoTddTdd128::theInfo,
	&MIMOParametersr9ModeSpecificInfoTddTdd384tdd768::theInfo,
};
const MIMOParametersr9ModeSpecificInfoTdd::Info MIMOParametersr9ModeSpecificInfoTdd::theInfo = {
	MIMOParametersr9ModeSpecificInfoTdd::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *MIMOParametersr9ModeSpecificInfo::choicesInfo[2] = {
	&MIMOParametersr9ModeSpecificInfoFdd::theInfo,
	&MIMOParametersr9ModeSpecificInfoTdd::theInfo,
};
const MIMOParametersr9ModeSpecificInfo::Info MIMOParametersr9ModeSpecificInfo::theInfo = {
	MIMOParametersr9ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *MIMOParametersr9::itemsInfo[2] = {
	&MIMOOperation::theInfo,
	&MIMOParametersr9ModeSpecificInfo::theInfo,
};
bool MIMOParametersr9::itemsPres[2] = {
	1,
	1,
};
const MIMOParametersr9::Info MIMOParametersr9::theInfo = {
	MIMOParametersr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *MultifrequencyInfoLCRr7::itemsInfo[3] = {
	&FrequencyInfoTDD::theInfo,
	&FrequencyInfoTDD::theInfo,
	&UpPCHpositionLCR::theInfo,
};
bool MultifrequencyInfoLCRr7::itemsPres[3] = {
	0,
	0,
	0,
};
const MultifrequencyInfoLCRr7::Info MultifrequencyInfoLCRr7::theInfo = {
	MultifrequencyInfoLCRr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *NewTiming::itemsInfo[2] = {
	&EnablingDelay::theInfo,
	&UEDTXDRXOffset::theInfo,
};
bool NewTiming::itemsPres[2] = {
	1,
	1,
};
const NewTiming::Info NewTiming::theInfo = {
	NewTiming::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *NonScheduledTransGrantInfoTDDextTdd128::itemsInfo[1] = {
	&NonScheduledTransGrantInfoTDDextTdd128t_SI_nst::theInfo,
};
bool NonScheduledTransGrantInfoTDDextTdd128::itemsPres[1] = {
	0,
};
const NonScheduledTransGrantInfoTDDextTdd128::Info NonScheduledTransGrantInfoTDDextTdd128::theInfo = {
	NonScheduledTransGrantInfoTDDextTdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *NonScheduledTransGrantInfoTDDext::choicesInfo[2] = {
	&NonScheduledTransGrantInfoTDDextTdd384768::theInfo,
	&NonScheduledTransGrantInfoTDDextTdd128::theInfo,
};
const NonScheduledTransGrantInfoTDDext::Info NonScheduledTransGrantInfoTDDext::theInfo = {
	NonScheduledTransGrantInfoTDDext::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *OpenLoopPowerControlTDD::itemsInfo[5] = {
	&PrimaryCCPCHTXPower::theInfo,
	&Alpha::theInfo,
	&ConstantValueTdd::theInfo,
	&ConstantValueTdd::theInfo,
	&ConstantValueTdd::theInfo,
};
bool OpenLoopPowerControlTDD::itemsPres[5] = {
	1,
	0,
	1,
	1,
	0,
};
const OpenLoopPowerControlTDD::Info OpenLoopPowerControlTDD::theInfo = {
	OpenLoopPowerControlTDD::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 2, 0
};

const void *OpenLoopPowerControlIPDLTDDr4::itemsInfo[2] = {
	&Alpha::theInfo,
	&MaxPowerIncreaser4::theInfo,
};
bool OpenLoopPowerControlIPDLTDDr4::itemsPres[2] = {
	1,
	1,
};
const OpenLoopPowerControlIPDLTDDr4::Info OpenLoopPowerControlIPDLTDDr4::theInfo = {
	OpenLoopPowerControlIPDLTDDr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *PDSCHPowerControlInfo::itemsInfo[2] = {
	&TPCStepSizeTDD::theInfo,
	&ULCCTrChTPCList::theInfo,
};
bool PDSCHPowerControlInfo::itemsPres[2] = {
	0,
	0,
};
const PDSCHPowerControlInfo::Info PDSCHPowerControlInfo::theInfo = {
	PDSCHPowerControlInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *PDSCHCapacityAllocationInfoConfigurationOldConfiguration::itemsInfo[2] = {
	&TFCSIdentityPlain::theInfo,
	&PDSCHIdentity::theInfo,
};
bool PDSCHCapacityAllocationInfoConfigurationOldConfiguration::itemsPres[2] = {
	0,
	1,
};
const PDSCHCapacityAllocationInfoConfigurationOldConfiguration::Info PDSCHCapacityAllocationInfoConfigurationOldConfiguration::theInfo = {
	PDSCHCapacityAllocationInfoConfigurationOldConfiguration::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *PDSCHInfo::itemsInfo[3] = {
	&TFCSIdentityPlain::theInfo,
	&CommonTimeslotInfo::theInfo,
	&DownlinkTimeslotsCodes::theInfo,
};
bool PDSCHInfo::itemsPres[3] = {
	0,
	0,
	0,
};
const PDSCHInfo::Info PDSCHInfo::theInfo = {
	PDSCHInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *PDSCHCapacityAllocationInfoConfigurationNewConfiguration::itemsInfo[2] = {
	&PDSCHInfo::theInfo,
	&PDSCHIdentity::theInfo,
};
bool PDSCHCapacityAllocationInfoConfigurationNewConfiguration::itemsPres[2] = {
	1,
	0,
};
const PDSCHCapacityAllocationInfoConfigurationNewConfiguration::Info PDSCHCapacityAllocationInfoConfigurationNewConfiguration::theInfo = {
	PDSCHCapacityAllocationInfoConfigurationNewConfiguration::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *PDSCHCapacityAllocationInfoConfiguration::choicesInfo[2] = {
	&PDSCHCapacityAllocationInfoConfigurationOldConfiguration::theInfo,
	&PDSCHCapacityAllocationInfoConfigurationNewConfiguration::theInfo,
};
const PDSCHCapacityAllocationInfoConfiguration::Info PDSCHCapacityAllocationInfoConfiguration::theInfo = {
	PDSCHCapacityAllocationInfoConfiguration::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *PDSCHCapacityAllocationInfo::itemsInfo[3] = {
	&PDSCHPowerControlInfo::theInfo,
	&AllocationPeriodInfo::theInfo,
	&PDSCHCapacityAllocationInfoConfiguration::theInfo,
};
bool PDSCHCapacityAllocationInfo::itemsPres[3] = {
	0,
	1,
	0,
};
const PDSCHCapacityAllocationInfo::Info PDSCHCapacityAllocationInfo::theInfo = {
	PDSCHCapacityAllocationInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *PDSCHCapacityAllocationInfor4ConfigurationOldConfiguration::itemsInfo[2] = {
	&TFCSIdentityPlain::theInfo,
	&PDSCHIdentity::theInfo,
};
bool PDSCHCapacityAllocationInfor4ConfigurationOldConfiguration::itemsPres[2] = {
	0,
	1,
};
const PDSCHCapacityAllocationInfor4ConfigurationOldConfiguration::Info PDSCHCapacityAllocationInfor4ConfigurationOldConfiguration::theInfo = {
	PDSCHCapacityAllocationInfor4ConfigurationOldConfiguration::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *PDSCHInfor4TddOptionTdd384::itemsInfo[1] = {
	&DownlinkTimeslotsCodes::theInfo,
};
bool PDSCHInfor4TddOptionTdd384::itemsPres[1] = {
	0,
};
const PDSCHInfor4TddOptionTdd384::Info PDSCHInfor4TddOptionTdd384::theInfo = {
	PDSCHInfor4TddOptionTdd384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *PDSCHInfor4TddOptionTdd128::itemsInfo[1] = {
	&DownlinkTimeslotsCodesLCRr4::theInfo,
};
bool PDSCHInfor4TddOptionTdd128::itemsPres[1] = {
	0,
};
const PDSCHInfor4TddOptionTdd128::Info PDSCHInfor4TddOptionTdd128::theInfo = {
	PDSCHInfor4TddOptionTdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *PDSCHInfor4TddOption::choicesInfo[2] = {
	&PDSCHInfor4TddOptionTdd384::theInfo,
	&PDSCHInfor4TddOptionTdd128::theInfo,
};
const PDSCHInfor4TddOption::Info PDSCHInfor4TddOption::theInfo = {
	PDSCHInfor4TddOption::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *PDSCHInfor4::itemsInfo[3] = {
	&TFCSIdentityPlain::theInfo,
	&CommonTimeslotInfo::theInfo,
	&PDSCHInfor4TddOption::theInfo,
};
bool PDSCHInfor4::itemsPres[3] = {
	0,
	0,
	1,
};
const PDSCHInfor4::Info PDSCHInfor4::theInfo = {
	PDSCHInfor4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *PDSCHCapacityAllocationInfor4ConfigurationNewConfiguration::itemsInfo[3] = {
	&PDSCHInfor4::theInfo,
	&PDSCHIdentity::theInfo,
	&PDSCHPowerControlInfo::theInfo,
};
bool PDSCHCapacityAllocationInfor4ConfigurationNewConfiguration::itemsPres[3] = {
	1,
	0,
	0,
};
const PDSCHCapacityAllocationInfor4ConfigurationNewConfiguration::Info PDSCHCapacityAllocationInfor4ConfigurationNewConfiguration::theInfo = {
	PDSCHCapacityAllocationInfor4ConfigurationNewConfiguration::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *PDSCHCapacityAllocationInfor4Configuration::choicesInfo[2] = {
	&PDSCHCapacityAllocationInfor4ConfigurationOldConfiguration::theInfo,
	&PDSCHCapacityAllocationInfor4ConfigurationNewConfiguration::theInfo,
};
const PDSCHCapacityAllocationInfor4Configuration::Info PDSCHCapacityAllocationInfor4Configuration::theInfo = {
	PDSCHCapacityAllocationInfor4Configuration::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *PDSCHCapacityAllocationInfor4::itemsInfo[2] = {
	&AllocationPeriodInfo::theInfo,
	&PDSCHCapacityAllocationInfor4Configuration::theInfo,
};
bool PDSCHCapacityAllocationInfor4::itemsPres[2] = {
	1,
	0,
};
const PDSCHCapacityAllocationInfor4::Info PDSCHCapacityAllocationInfor4::theInfo = {
	PDSCHCapacityAllocationInfor4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *PDSCHCapacityAllocationInfor7ConfigurationOldConfiguration::itemsInfo[2] = {
	&TFCSIdentityPlain::theInfo,
	&PDSCHIdentity::theInfo,
};
bool PDSCHCapacityAllocationInfor7ConfigurationOldConfiguration::itemsPres[2] = {
	0,
	1,
};
const PDSCHCapacityAllocationInfor7ConfigurationOldConfiguration::Info PDSCHCapacityAllocationInfor7ConfigurationOldConfiguration::theInfo = {
	PDSCHCapacityAllocationInfor7ConfigurationOldConfiguration::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *PDSCHInfor7TddOptionTdd384::itemsInfo[1] = {
	&DownlinkTimeslotsCodes::theInfo,
};
bool PDSCHInfor7TddOptionTdd384::itemsPres[1] = {
	0,
};
const PDSCHInfor7TddOptionTdd384::Info PDSCHInfor7TddOptionTdd384::theInfo = {
	PDSCHInfor7TddOptionTdd384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *PDSCHInfor7TddOptionTdd768::itemsInfo[1] = {
	&DownlinkTimeslotsCodesVHCR::theInfo,
};
bool PDSCHInfor7TddOptionTdd768::itemsPres[1] = {
	0,
};
const PDSCHInfor7TddOptionTdd768::Info PDSCHInfor7TddOptionTdd768::theInfo = {
	PDSCHInfor7TddOptionTdd768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *PDSCHInfor7TddOptionTdd128::itemsInfo[1] = {
	&DownlinkTimeslotsCodesLCRr4::theInfo,
};
bool PDSCHInfor7TddOptionTdd128::itemsPres[1] = {
	0,
};
const PDSCHInfor7TddOptionTdd128::Info PDSCHInfor7TddOptionTdd128::theInfo = {
	PDSCHInfor7TddOptionTdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *PDSCHInfor7TddOption::choicesInfo[3] = {
	&PDSCHInfor7TddOptionTdd384::theInfo,
	&PDSCHInfor7TddOptionTdd768::theInfo,
	&PDSCHInfor7TddOptionTdd128::theInfo,
};
const PDSCHInfor7TddOption::Info PDSCHInfor7TddOption::theInfo = {
	PDSCHInfor7TddOption::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *PDSCHInfor7::itemsInfo[3] = {
	&TFCSIdentityPlain::theInfo,
	&CommonTimeslotInfo::theInfo,
	&PDSCHInfor7TddOption::theInfo,
};
bool PDSCHInfor7::itemsPres[3] = {
	0,
	0,
	1,
};
const PDSCHInfor7::Info PDSCHInfor7::theInfo = {
	PDSCHInfor7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *PDSCHCapacityAllocationInfor7ConfigurationNewConfiguration::itemsInfo[3] = {
	&PDSCHInfor7::theInfo,
	&PDSCHIdentity::theInfo,
	&PDSCHPowerControlInfo::theInfo,
};
bool PDSCHCapacityAllocationInfor7ConfigurationNewConfiguration::itemsPres[3] = {
	1,
	0,
	0,
};
const PDSCHCapacityAllocationInfor7ConfigurationNewConfiguration::Info PDSCHCapacityAllocationInfor7ConfigurationNewConfiguration::theInfo = {
	PDSCHCapacityAllocationInfor7ConfigurationNewConfiguration::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *PDSCHCapacityAllocationInfor7Configuration::choicesInfo[2] = {
	&PDSCHCapacityAllocationInfor7ConfigurationOldConfiguration::theInfo,
	&PDSCHCapacityAllocationInfor7ConfigurationNewConfiguration::theInfo,
};
const PDSCHCapacityAllocationInfor7Configuration::Info PDSCHCapacityAllocationInfor7Configuration::theInfo = {
	PDSCHCapacityAllocationInfor7Configuration::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *PDSCHCapacityAllocationInfor7::itemsInfo[2] = {
	&AllocationPeriodInfo::theInfo,
	&PDSCHCapacityAllocationInfor7Configuration::theInfo,
};
bool PDSCHCapacityAllocationInfor7::itemsPres[2] = {
	1,
	0,
};
const PDSCHCapacityAllocationInfor7::Info PDSCHCapacityAllocationInfor7::theInfo = {
	PDSCHCapacityAllocationInfor7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *PDSCHInfoLCRr4::itemsInfo[3] = {
	&TFCSIdentityPlain::theInfo,
	&CommonTimeslotInfo::theInfo,
	&DownlinkTimeslotsCodesLCRr4::theInfo,
};
bool PDSCHInfoLCRr4::itemsPres[3] = {
	0,
	0,
	0,
};
const PDSCHInfoLCRr4::Info PDSCHInfoLCRr4::theInfo = {
	PDSCHInfoLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *PDSCHSysInfo::itemsInfo[4] = {
	&PDSCHIdentity::theInfo,
	&PDSCHInfo::theInfo,
	&TransportFormatSet::theInfo,
	&TFCS::theInfo,
};
bool PDSCHSysInfo::itemsPres[4] = {
	1,
	1,
	0,
	0,
};
const PDSCHSysInfo::Info PDSCHSysInfo::theInfo = {
	PDSCHSysInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
};

const void *PDSCHSysInfoVHCRr7::itemsInfo[4] = {
	&PDSCHIdentity::theInfo,
	&PDSCHInfor7::theInfo,
	&DSCHTransportChannelsInfo::theInfo,
	&TFCS::theInfo,
};
bool PDSCHSysInfoVHCRr7::itemsPres[4] = {
	1,
	1,
	0,
	0,
};
const PDSCHSysInfoVHCRr7::Info PDSCHSysInfoVHCRr7::theInfo = {
	PDSCHSysInfoVHCRr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
};

const void *PDSCHSysInfoHCRr5::itemsInfo[4] = {
	&PDSCHIdentity::theInfo,
	&PDSCHInfo::theInfo,
	&DSCHTransportChannelsInfo::theInfo,
	&TFCS::theInfo,
};
bool PDSCHSysInfoHCRr5::itemsPres[4] = {
	1,
	1,
	0,
	0,
};
const PDSCHSysInfoHCRr5::Info PDSCHSysInfoHCRr5::theInfo = {
	PDSCHSysInfoHCRr5::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
};

const void *PDSCHSysInfoLCRr4::itemsInfo[4] = {
	&PDSCHIdentity::theInfo,
	&PDSCHInfoLCRr4::theInfo,
	&TransportFormatSet::theInfo,
	&TFCS::theInfo,
};
bool PDSCHSysInfoLCRr4::itemsPres[4] = {
	1,
	1,
	0,
	0,
};
const PDSCHSysInfoLCRr4::Info PDSCHSysInfoLCRr4::theInfo = {
	PDSCHSysInfoLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
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

const void *PICHInfoHCRVHCRr7ChannelisationCode::choicesInfo[2] = {
	&TDDPICHCCode::theInfo,
	&TDD768PICHCCode::theInfo,
};
const PICHInfoHCRVHCRr7ChannelisationCode::Info PICHInfoHCRVHCRr7ChannelisationCode::theInfo = {
	PICHInfoHCRVHCRr7ChannelisationCode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *PICHInfoHCRVHCRr7::itemsInfo[7] = {
	&PICHInfoHCRVHCRr7ChannelisationCode::theInfo,
	&TimeslotNumber::theInfo,
	&MidambleShiftAndBurstType::theInfo,
	&RepPerLengthOffsetPICH::theInfo,
	&PagingIndicatorLength::theInfo,
	&NGAP::theInfo,
	&NPCH::theInfo,
};
bool PICHInfoHCRVHCRr7::itemsPres[7] = {
	0,
	0,
	1,
	0,
	0,
	0,
	0,
};
const PICHInfoHCRVHCRr7::Info PICHInfoHCRVHCRr7::theInfo = {
	PICHInfoHCRVHCRr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	7, 6, 0
};

const void *PLCCHInfo::itemsInfo[4] = {
	&PLCCHInfoPlcchSequenceNumber::theInfo,
	&TimeslotNumberLCRr4::theInfo,
	&DLTSChannelisationCode::theInfo,
	&TPCCommandTargetRate::theInfo,
};
bool PLCCHInfo::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const PLCCHInfo::Info PLCCHInfo::theInfo = {
	PLCCHInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 0, 0
};

const void *PRACHDefinitionLCRr4::itemsInfo[4] = {
	&TimeslotNumberPRACHLCRr4::theInfo,
	&PRACHChanCodesLCRr4::theInfo,
	&MidambleShiftAndBurstTypeLCRr4::theInfo,
	&FPACHInfor4::theInfo,
};
bool PRACHDefinitionLCRr4::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const PRACHDefinitionLCRr4::Info PRACHDefinitionLCRr4::theInfo = {
	PRACHDefinitionLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 0, 0
};

const void *PRACHPartitioning::choicesInfo[2] = {
	&PRACHPartitioningFdd::theInfo,
	&PRACHPartitioningTdd::theInfo,
};
const PRACHPartitioning::Info PRACHPartitioning::theInfo = {
	PRACHPartitioning::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *PRACHRACHInfoModeSpecificInfoFdd::itemsInfo[5] = {
	&AvailableSignatures::theInfo,
	&SFPRACH::theInfo,
	&PreambleScramblingCodeWordNumber::theInfo,
	&PuncturingLimit::theInfo,
	&AvailableSubChannelNumbers::theInfo,
};
bool PRACHRACHInfoModeSpecificInfoFdd::itemsPres[5] = {
	1,
	1,
	1,
	1,
	1,
};
const PRACHRACHInfoModeSpecificInfoFdd::Info PRACHRACHInfoModeSpecificInfoFdd::theInfo = {
	PRACHRACHInfoModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 0, 0
};

const void *TDDPRACHCCodeList::choicesInfo[2] = {
	&TDDPRACHCCodeListSf8::theInfo,
	&TDDPRACHCCodeListSf16::theInfo,
};
const TDDPRACHCCodeList::Info TDDPRACHCCodeList::theInfo = {
	TDDPRACHCCodeList::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *PRACHRACHInfoModeSpecificInfoTdd::itemsInfo[3] = {
	&TimeslotNumber::theInfo,
	&TDDPRACHCCodeList::theInfo,
	&PRACHMidamble::theInfo,
};
bool PRACHRACHInfoModeSpecificInfoTdd::itemsPres[3] = {
	1,
	1,
	1,
};
const PRACHRACHInfoModeSpecificInfoTdd::Info PRACHRACHInfoModeSpecificInfoTdd::theInfo = {
	PRACHRACHInfoModeSpecificInfoTdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *PRACHRACHInfoModeSpecificInfo::choicesInfo[2] = {
	&PRACHRACHInfoModeSpecificInfoFdd::theInfo,
	&PRACHRACHInfoModeSpecificInfoTdd::theInfo,
};
const PRACHRACHInfoModeSpecificInfo::Info PRACHRACHInfoModeSpecificInfo::theInfo = {
	PRACHRACHInfoModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
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

const void *TDD768PRACHCCodeList::choicesInfo[2] = {
	&TDD768PRACHCCodeListSf32::theInfo,
	&TDD768PRACHCCodeListSf16::theInfo,
};
const TDD768PRACHCCodeList::Info TDD768PRACHCCodeList::theInfo = {
	TDD768PRACHCCodeList::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *PRACHRACHInfoVHCRr7::itemsInfo[3] = {
	&TimeslotNumber::theInfo,
	&TDD768PRACHCCodeList::theInfo,
	&PRACHMidamble::theInfo,
};
bool PRACHRACHInfoVHCRr7::itemsPres[3] = {
	1,
	1,
	1,
};
const PRACHRACHInfoVHCRr7::Info PRACHRACHInfoVHCRr7::theInfo = {
	PRACHRACHInfoVHCRr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
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

const void *SYNCULInfor4::itemsInfo[5] = {
	&SyncULCodesBitmap::theInfo,
	&SYNCULInfor4PrxUpPCHdes::theInfo,
	&SYNCULInfor4PowerRampStep::theInfo,
	&SYNCULInfor4max_SYNC_UL_Transmissions::theInfo,
	&SYNCULInfor4Mmax::theInfo,
};
bool SYNCULInfor4::itemsPres[5] = {
	1,
	1,
	1,
	1,
	1,
};
const SYNCULInfor4::Info SYNCULInfor4::theInfo = {
	SYNCULInfor4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 0, 0
};

const void *PRACHRACHInfoLCRr4::itemsInfo[2] = {
	&SYNCULInfor4::theInfo,
	&PRACHRACHInfoLCRr4PrachDefinitionList::theInfo,
};
bool PRACHRACHInfoLCRr4::itemsPres[2] = {
	1,
	1,
};
const PRACHRACHInfoLCRr4::Info PRACHRACHInfoLCRr4::theInfo = {
	PRACHRACHInfoLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *PRACHSystemInformationModeSpecificInfoFdd::itemsInfo[5] = {
	&PrimaryCPICHTXPower::theInfo,
	&ConstantValue::theInfo,
	&PRACHPowerOffset::theInfo,
	&RACHTransmissionParameters::theInfo,
	&AICHInfo::theInfo,
};
bool PRACHSystemInformationModeSpecificInfoFdd::itemsPres[5] = {
	0,
	0,
	0,
	0,
	0,
};
const PRACHSystemInformationModeSpecificInfoFdd::Info PRACHSystemInformationModeSpecificInfoFdd::theInfo = {
	PRACHSystemInformationModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 5, 0
};

const void *PRACHSystemInformationModeSpecificInfo::choicesInfo[2] = {
	&PRACHSystemInformationModeSpecificInfoFdd::theInfo,
	&PRACHSystemInformationModeSpecificInfoTdd::theInfo,
};
const PRACHSystemInformationModeSpecificInfo::Info PRACHSystemInformationModeSpecificInfo::theInfo = {
	PRACHSystemInformationModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *PRACHSystemInformation::itemsInfo[8] = {
	&PRACHRACHInfo::theInfo,
	&TransportChannelIdentity::theInfo,
	&TransportFormatSet::theInfo,
	&TFCS::theInfo,
	&PRACHPartitioning::theInfo,
	&PersistenceScalingFactorList::theInfo,
	&ACToASCMappingTable::theInfo,
	&PRACHSystemInformationModeSpecificInfo::theInfo,
};
bool PRACHSystemInformation::itemsPres[8] = {
	1,
	1,
	0,
	0,
	0,
	0,
	0,
	1,
};
const PRACHSystemInformation::Info PRACHSystemInformation::theInfo = {
	PRACHSystemInformation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	8, 5, 0
};

const void *PRACHSystemInformationVHCRr7::itemsInfo[2] = {
	&PRACHRACHInfoVHCRr7::theInfo,
	&PRACHPartitioningr7::theInfo,
};
bool PRACHSystemInformationVHCRr7::itemsPres[2] = {
	1,
	0,
};
const PRACHSystemInformationVHCRr7::Info PRACHSystemInformationVHCRr7::theInfo = {
	PRACHSystemInformationVHCRr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *PRACHSystemInformationLCRr4::itemsInfo[3] = {
	&PRACHRACHInfoLCRr4::theInfo,
	&TransportFormatSetLCR::theInfo,
	&PRACHPartitioningLCRr4::theInfo,
};
bool PRACHSystemInformationLCRr4::itemsPres[3] = {
	1,
	0,
	0,
};
const PRACHSystemInformationLCRr4::Info PRACHSystemInformationLCRr4::theInfo = {
	PRACHSystemInformationLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
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

const void *PrimaryCCPCHInfoLCRr4::itemsInfo[3] = {
	&PrimaryCCPCHInfoLCRr4TstdIndicator::theInfo,
	&CellParametersID::theInfo,
	&PrimaryCCPCHInfoLCRr4SctdIndicator::theInfo,
};
bool PrimaryCCPCHInfoLCRr4::itemsPres[3] = {
	1,
	0,
	1,
};
const PrimaryCCPCHInfoLCRr4::Info PrimaryCCPCHInfoLCRr4::theInfo = {
	PrimaryCCPCHInfoLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
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

const void *PUSCHCapacityAllocationInfoPuschAllocationPuschAllocationAssignmentConfigurationOldConfiguration::itemsInfo[2] = {
	&TFCSIdentityPlain::theInfo,
	&PUSCHIdentity::theInfo,
};
bool PUSCHCapacityAllocationInfoPuschAllocationPuschAllocationAssignmentConfigurationOldConfiguration::itemsPres[2] = {
	0,
	1,
};
const PUSCHCapacityAllocationInfoPuschAllocationPuschAllocationAssignmentConfigurationOldConfiguration::Info PUSCHCapacityAllocationInfoPuschAllocationPuschAllocationAssignmentConfigurationOldConfiguration::theInfo = {
	PUSCHCapacityAllocationInfoPuschAllocationPuschAllocationAssignmentConfigurationOldConfiguration::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *UplinkTimeslotsCodesMoreTimeslotsAdditionalTimeslotsConsecutive::itemsInfo[1] = {
	&UplinkTimeslotsCodesMoreTimeslotsAdditionalTimeslotsConsecutiveNumAdditionalTimeslots::theInfo,
};
bool UplinkTimeslotsCodesMoreTimeslotsAdditionalTimeslotsConsecutive::itemsPres[1] = {
	1,
};
const UplinkTimeslotsCodesMoreTimeslotsAdditionalTimeslotsConsecutive::Info UplinkTimeslotsCodesMoreTimeslotsAdditionalTimeslotsConsecutive::theInfo = {
	UplinkTimeslotsCodesMoreTimeslotsAdditionalTimeslotsConsecutive::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UplinkAdditionalTimeslotsParametersSameAsLast::itemsInfo[1] = {
	&TimeslotNumber::theInfo,
};
bool UplinkAdditionalTimeslotsParametersSameAsLast::itemsPres[1] = {
	1,
};
const UplinkAdditionalTimeslotsParametersSameAsLast::Info UplinkAdditionalTimeslotsParametersSameAsLast::theInfo = {
	UplinkAdditionalTimeslotsParametersSameAsLast::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UplinkAdditionalTimeslotsParametersNewParameters::itemsInfo[2] = {
	&IndividualTimeslotInfo::theInfo,
	&ULTSChannelisationCodeList::theInfo,
};
bool UplinkAdditionalTimeslotsParametersNewParameters::itemsPres[2] = {
	1,
	1,
};
const UplinkAdditionalTimeslotsParametersNewParameters::Info UplinkAdditionalTimeslotsParametersNewParameters::theInfo = {
	UplinkAdditionalTimeslotsParametersNewParameters::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *UplinkAdditionalTimeslotsParameters::choicesInfo[2] = {
	&UplinkAdditionalTimeslotsParametersSameAsLast::theInfo,
	&UplinkAdditionalTimeslotsParametersNewParameters::theInfo,
};
const UplinkAdditionalTimeslotsParameters::Info UplinkAdditionalTimeslotsParameters::theInfo = {
	UplinkAdditionalTimeslotsParameters::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
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

const void *UplinkTimeslotsCodesMoreTimeslotsAdditionalTimeslots::choicesInfo[2] = {
	&UplinkTimeslotsCodesMoreTimeslotsAdditionalTimeslotsConsecutive::theInfo,
	&UplinkTimeslotsCodesMoreTimeslotsAdditionalTimeslotsTimeslotList::theInfo,
};
const UplinkTimeslotsCodesMoreTimeslotsAdditionalTimeslots::Info UplinkTimeslotsCodesMoreTimeslotsAdditionalTimeslots::theInfo = {
	UplinkTimeslotsCodesMoreTimeslotsAdditionalTimeslots::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *UplinkTimeslotsCodesMoreTimeslots::choicesInfo[2] = {
	&UplinkTimeslotsCodesMoreTimeslotsNoMore::theInfo,
	&UplinkTimeslotsCodesMoreTimeslotsAdditionalTimeslots::theInfo,
};
const UplinkTimeslotsCodesMoreTimeslots::Info UplinkTimeslotsCodesMoreTimeslots::theInfo = {
	UplinkTimeslotsCodesMoreTimeslots::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *UplinkTimeslotsCodes::itemsInfo[4] = {
	&UplinkTimeslotsCodesDynamicSFusage::theInfo,
	&IndividualTimeslotInfo::theInfo,
	&ULTSChannelisationCodeList::theInfo,
	&UplinkTimeslotsCodesMoreTimeslots::theInfo,
};
bool UplinkTimeslotsCodes::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const UplinkTimeslotsCodes::Info UplinkTimeslotsCodes::theInfo = {
	UplinkTimeslotsCodes::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 0, 0
};

const void *PUSCHInfo::itemsInfo[3] = {
	&TFCSIdentityPlain::theInfo,
	&CommonTimeslotInfo::theInfo,
	&UplinkTimeslotsCodes::theInfo,
};
bool PUSCHInfo::itemsPres[3] = {
	0,
	0,
	0,
};
const PUSCHInfo::Info PUSCHInfo::theInfo = {
	PUSCHInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *PUSCHCapacityAllocationInfoPuschAllocationPuschAllocationAssignmentConfigurationNewConfiguration::itemsInfo[2] = {
	&PUSCHInfo::theInfo,
	&PUSCHIdentity::theInfo,
};
bool PUSCHCapacityAllocationInfoPuschAllocationPuschAllocationAssignmentConfigurationNewConfiguration::itemsPres[2] = {
	1,
	0,
};
const PUSCHCapacityAllocationInfoPuschAllocationPuschAllocationAssignmentConfigurationNewConfiguration::Info PUSCHCapacityAllocationInfoPuschAllocationPuschAllocationAssignmentConfigurationNewConfiguration::theInfo = {
	PUSCHCapacityAllocationInfoPuschAllocationPuschAllocationAssignmentConfigurationNewConfiguration::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *PUSCHCapacityAllocationInfoPuschAllocationPuschAllocationAssignmentConfiguration::choicesInfo[2] = {
	&PUSCHCapacityAllocationInfoPuschAllocationPuschAllocationAssignmentConfigurationOldConfiguration::theInfo,
	&PUSCHCapacityAllocationInfoPuschAllocationPuschAllocationAssignmentConfigurationNewConfiguration::theInfo,
};
const PUSCHCapacityAllocationInfoPuschAllocationPuschAllocationAssignmentConfiguration::Info PUSCHCapacityAllocationInfoPuschAllocationPuschAllocationAssignmentConfiguration::theInfo = {
	PUSCHCapacityAllocationInfoPuschAllocationPuschAllocationAssignmentConfiguration::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *PUSCHCapacityAllocationInfoPuschAllocationPuschAllocationAssignment::itemsInfo[3] = {
	&AllocationPeriodInfo::theInfo,
	&ULTargetSIR::theInfo,
	&PUSCHCapacityAllocationInfoPuschAllocationPuschAllocationAssignmentConfiguration::theInfo,
};
bool PUSCHCapacityAllocationInfoPuschAllocationPuschAllocationAssignment::itemsPres[3] = {
	1,
	0,
	0,
};
const PUSCHCapacityAllocationInfoPuschAllocationPuschAllocationAssignment::Info PUSCHCapacityAllocationInfoPuschAllocationPuschAllocationAssignment::theInfo = {
	PUSCHCapacityAllocationInfoPuschAllocationPuschAllocationAssignment::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *PUSCHCapacityAllocationInfoPuschAllocation::choicesInfo[2] = {
	&PUSCHCapacityAllocationInfoPuschAllocationPuschAllocationPending::theInfo,
	&PUSCHCapacityAllocationInfoPuschAllocationPuschAllocationAssignment::theInfo,
};
const PUSCHCapacityAllocationInfoPuschAllocation::Info PUSCHCapacityAllocationInfoPuschAllocation::theInfo = {
	PUSCHCapacityAllocationInfoPuschAllocation::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
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

const void *PUSCHPowerControlInfor4TddOptionTdd128::itemsInfo[1] = {
	&TPCStepSizeTDD::theInfo,
};
bool PUSCHPowerControlInfor4TddOptionTdd128::itemsPres[1] = {
	0,
};
const PUSCHPowerControlInfor4TddOptionTdd128::Info PUSCHPowerControlInfor4TddOptionTdd128::theInfo = {
	PUSCHPowerControlInfor4TddOptionTdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *PUSCHPowerControlInfor4TddOption::choicesInfo[2] = {
	&PUSCHPowerControlInfor4TddOptionTdd384::theInfo,
	&PUSCHPowerControlInfor4TddOptionTdd128::theInfo,
};
const PUSCHPowerControlInfor4TddOption::Info PUSCHPowerControlInfor4TddOption::theInfo = {
	PUSCHPowerControlInfor4TddOption::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *PUSCHPowerControlInfor4::itemsInfo[2] = {
	&ULTargetSIR::theInfo,
	&PUSCHPowerControlInfor4TddOption::theInfo,
};
bool PUSCHPowerControlInfor4::itemsPres[2] = {
	1,
	1,
};
const PUSCHPowerControlInfor4::Info PUSCHPowerControlInfor4::theInfo = {
	PUSCHPowerControlInfor4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *PUSCHCapacityAllocationInfor4PuschAllocationPuschAllocationAssignmentConfigurationOldConfiguration::itemsInfo[2] = {
	&TFCSIdentityPlain::theInfo,
	&PUSCHIdentity::theInfo,
};
bool PUSCHCapacityAllocationInfor4PuschAllocationPuschAllocationAssignmentConfigurationOldConfiguration::itemsPres[2] = {
	0,
	1,
};
const PUSCHCapacityAllocationInfor4PuschAllocationPuschAllocationAssignmentConfigurationOldConfiguration::Info PUSCHCapacityAllocationInfor4PuschAllocationPuschAllocationAssignmentConfigurationOldConfiguration::theInfo = {
	PUSCHCapacityAllocationInfor4PuschAllocationPuschAllocationAssignmentConfigurationOldConfiguration::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *PUSCHInfor4TddOptionTdd384::itemsInfo[1] = {
	&UplinkTimeslotsCodes::theInfo,
};
bool PUSCHInfor4TddOptionTdd384::itemsPres[1] = {
	0,
};
const PUSCHInfor4TddOptionTdd384::Info PUSCHInfor4TddOptionTdd384::theInfo = {
	PUSCHInfor4TddOptionTdd384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *UplinkTimeslotsCodesLCRr4MoreTimeslotsAdditionalTimeslotsConsecutive::itemsInfo[1] = {
	&UplinkTimeslotsCodesLCRr4MoreTimeslotsAdditionalTimeslotsConsecutiveNumAdditionalTimeslots::theInfo,
};
bool UplinkTimeslotsCodesLCRr4MoreTimeslotsAdditionalTimeslotsConsecutive::itemsPres[1] = {
	1,
};
const UplinkTimeslotsCodesLCRr4MoreTimeslotsAdditionalTimeslotsConsecutive::Info UplinkTimeslotsCodesLCRr4MoreTimeslotsAdditionalTimeslotsConsecutive::theInfo = {
	UplinkTimeslotsCodesLCRr4MoreTimeslotsAdditionalTimeslotsConsecutive::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UplinkAdditionalTimeslotsLCRr4ParametersSameAsLast::itemsInfo[1] = {
	&TimeslotNumber::theInfo,
};
bool UplinkAdditionalTimeslotsLCRr4ParametersSameAsLast::itemsPres[1] = {
	1,
};
const UplinkAdditionalTimeslotsLCRr4ParametersSameAsLast::Info UplinkAdditionalTimeslotsLCRr4ParametersSameAsLast::theInfo = {
	UplinkAdditionalTimeslotsLCRr4ParametersSameAsLast::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UplinkAdditionalTimeslotsLCRr4ParametersNewParameters::itemsInfo[2] = {
	&IndividualTimeslotInfoLCRr4::theInfo,
	&ULTSChannelisationCodeList::theInfo,
};
bool UplinkAdditionalTimeslotsLCRr4ParametersNewParameters::itemsPres[2] = {
	1,
	1,
};
const UplinkAdditionalTimeslotsLCRr4ParametersNewParameters::Info UplinkAdditionalTimeslotsLCRr4ParametersNewParameters::theInfo = {
	UplinkAdditionalTimeslotsLCRr4ParametersNewParameters::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *UplinkAdditionalTimeslotsLCRr4Parameters::choicesInfo[2] = {
	&UplinkAdditionalTimeslotsLCRr4ParametersSameAsLast::theInfo,
	&UplinkAdditionalTimeslotsLCRr4ParametersNewParameters::theInfo,
};
const UplinkAdditionalTimeslotsLCRr4Parameters::Info UplinkAdditionalTimeslotsLCRr4Parameters::theInfo = {
	UplinkAdditionalTimeslotsLCRr4Parameters::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
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

const void *UplinkTimeslotsCodesLCRr4MoreTimeslotsAdditionalTimeslots::choicesInfo[2] = {
	&UplinkTimeslotsCodesLCRr4MoreTimeslotsAdditionalTimeslotsConsecutive::theInfo,
	&UplinkTimeslotsCodesLCRr4MoreTimeslotsAdditionalTimeslotsTimeslotList::theInfo,
};
const UplinkTimeslotsCodesLCRr4MoreTimeslotsAdditionalTimeslots::Info UplinkTimeslotsCodesLCRr4MoreTimeslotsAdditionalTimeslots::theInfo = {
	UplinkTimeslotsCodesLCRr4MoreTimeslotsAdditionalTimeslots::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *UplinkTimeslotsCodesLCRr4MoreTimeslots::choicesInfo[2] = {
	&UplinkTimeslotsCodesLCRr4MoreTimeslotsNoMore::theInfo,
	&UplinkTimeslotsCodesLCRr4MoreTimeslotsAdditionalTimeslots::theInfo,
};
const UplinkTimeslotsCodesLCRr4MoreTimeslots::Info UplinkTimeslotsCodesLCRr4MoreTimeslots::theInfo = {
	UplinkTimeslotsCodesLCRr4MoreTimeslots::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *UplinkTimeslotsCodesLCRr4::itemsInfo[4] = {
	&UplinkTimeslotsCodesLCRr4DynamicSFusage::theInfo,
	&IndividualTimeslotInfoLCRr4::theInfo,
	&ULTSChannelisationCodeList::theInfo,
	&UplinkTimeslotsCodesLCRr4MoreTimeslots::theInfo,
};
bool UplinkTimeslotsCodesLCRr4::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const UplinkTimeslotsCodesLCRr4::Info UplinkTimeslotsCodesLCRr4::theInfo = {
	UplinkTimeslotsCodesLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 0, 0
};

const void *PUSCHInfor4TddOptionTdd128::itemsInfo[1] = {
	&UplinkTimeslotsCodesLCRr4::theInfo,
};
bool PUSCHInfor4TddOptionTdd128::itemsPres[1] = {
	0,
};
const PUSCHInfor4TddOptionTdd128::Info PUSCHInfor4TddOptionTdd128::theInfo = {
	PUSCHInfor4TddOptionTdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *PUSCHInfor4TddOption::choicesInfo[2] = {
	&PUSCHInfor4TddOptionTdd384::theInfo,
	&PUSCHInfor4TddOptionTdd128::theInfo,
};
const PUSCHInfor4TddOption::Info PUSCHInfor4TddOption::theInfo = {
	PUSCHInfor4TddOption::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *PUSCHInfor4::itemsInfo[3] = {
	&TFCSIdentityPlain::theInfo,
	&CommonTimeslotInfo::theInfo,
	&PUSCHInfor4TddOption::theInfo,
};
bool PUSCHInfor4::itemsPres[3] = {
	0,
	0,
	1,
};
const PUSCHInfor4::Info PUSCHInfor4::theInfo = {
	PUSCHInfor4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *PUSCHCapacityAllocationInfor4PuschAllocationPuschAllocationAssignmentConfigurationNewConfiguration::itemsInfo[2] = {
	&PUSCHInfor4::theInfo,
	&PUSCHIdentity::theInfo,
};
bool PUSCHCapacityAllocationInfor4PuschAllocationPuschAllocationAssignmentConfigurationNewConfiguration::itemsPres[2] = {
	1,
	0,
};
const PUSCHCapacityAllocationInfor4PuschAllocationPuschAllocationAssignmentConfigurationNewConfiguration::Info PUSCHCapacityAllocationInfor4PuschAllocationPuschAllocationAssignmentConfigurationNewConfiguration::theInfo = {
	PUSCHCapacityAllocationInfor4PuschAllocationPuschAllocationAssignmentConfigurationNewConfiguration::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *PUSCHCapacityAllocationInfor4PuschAllocationPuschAllocationAssignmentConfiguration::choicesInfo[2] = {
	&PUSCHCapacityAllocationInfor4PuschAllocationPuschAllocationAssignmentConfigurationOldConfiguration::theInfo,
	&PUSCHCapacityAllocationInfor4PuschAllocationPuschAllocationAssignmentConfigurationNewConfiguration::theInfo,
};
const PUSCHCapacityAllocationInfor4PuschAllocationPuschAllocationAssignmentConfiguration::Info PUSCHCapacityAllocationInfor4PuschAllocationPuschAllocationAssignmentConfiguration::theInfo = {
	PUSCHCapacityAllocationInfor4PuschAllocationPuschAllocationAssignmentConfiguration::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *PUSCHCapacityAllocationInfor4PuschAllocationPuschAllocationAssignment::itemsInfo[3] = {
	&AllocationPeriodInfo::theInfo,
	&PUSCHPowerControlInfor4::theInfo,
	&PUSCHCapacityAllocationInfor4PuschAllocationPuschAllocationAssignmentConfiguration::theInfo,
};
bool PUSCHCapacityAllocationInfor4PuschAllocationPuschAllocationAssignment::itemsPres[3] = {
	1,
	0,
	0,
};
const PUSCHCapacityAllocationInfor4PuschAllocationPuschAllocationAssignment::Info PUSCHCapacityAllocationInfor4PuschAllocationPuschAllocationAssignment::theInfo = {
	PUSCHCapacityAllocationInfor4PuschAllocationPuschAllocationAssignment::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *PUSCHCapacityAllocationInfor4PuschAllocation::choicesInfo[2] = {
	&PUSCHCapacityAllocationInfor4PuschAllocationPuschAllocationPending::theInfo,
	&PUSCHCapacityAllocationInfor4PuschAllocationPuschAllocationAssignment::theInfo,
};
const PUSCHCapacityAllocationInfor4PuschAllocation::Info PUSCHCapacityAllocationInfor4PuschAllocation::theInfo = {
	PUSCHCapacityAllocationInfor4PuschAllocation::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
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

const void *PUSCHPowerControlInfor7TddOptionTdd128::itemsInfo[1] = {
	&TPCStepSizeTDD::theInfo,
};
bool PUSCHPowerControlInfor7TddOptionTdd128::itemsPres[1] = {
	0,
};
const PUSCHPowerControlInfor7TddOptionTdd128::Info PUSCHPowerControlInfor7TddOptionTdd128::theInfo = {
	PUSCHPowerControlInfor7TddOptionTdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *PUSCHPowerControlInfor7TddOption::choicesInfo[3] = {
	&PUSCHPowerControlInfor7TddOptionTdd384::theInfo,
	&PUSCHPowerControlInfor7TddOptionTdd768::theInfo,
	&PUSCHPowerControlInfor7TddOptionTdd128::theInfo,
};
const PUSCHPowerControlInfor7TddOption::Info PUSCHPowerControlInfor7TddOption::theInfo = {
	PUSCHPowerControlInfor7TddOption::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *PUSCHPowerControlInfor7::itemsInfo[2] = {
	&ULTargetSIR::theInfo,
	&PUSCHPowerControlInfor7TddOption::theInfo,
};
bool PUSCHPowerControlInfor7::itemsPres[2] = {
	1,
	1,
};
const PUSCHPowerControlInfor7::Info PUSCHPowerControlInfor7::theInfo = {
	PUSCHPowerControlInfor7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *PUSCHCapacityAllocationInfor7PuschAllocationPuschAllocationAssignmentConfigurationOldConfiguration::itemsInfo[2] = {
	&TFCSIdentityPlain::theInfo,
	&PUSCHIdentity::theInfo,
};
bool PUSCHCapacityAllocationInfor7PuschAllocationPuschAllocationAssignmentConfigurationOldConfiguration::itemsPres[2] = {
	0,
	1,
};
const PUSCHCapacityAllocationInfor7PuschAllocationPuschAllocationAssignmentConfigurationOldConfiguration::Info PUSCHCapacityAllocationInfor7PuschAllocationPuschAllocationAssignmentConfigurationOldConfiguration::theInfo = {
	PUSCHCapacityAllocationInfor7PuschAllocationPuschAllocationAssignmentConfigurationOldConfiguration::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *UplinkTimeslotsCodesVHCRMoreTimeslotsAdditionalTimeslotsConsecutive::itemsInfo[1] = {
	&UplinkTimeslotsCodesVHCRMoreTimeslotsAdditionalTimeslotsConsecutiveNumAdditionalTimeslots::theInfo,
};
bool UplinkTimeslotsCodesVHCRMoreTimeslotsAdditionalTimeslotsConsecutive::itemsPres[1] = {
	1,
};
const UplinkTimeslotsCodesVHCRMoreTimeslotsAdditionalTimeslotsConsecutive::Info UplinkTimeslotsCodesVHCRMoreTimeslotsAdditionalTimeslotsConsecutive::theInfo = {
	UplinkTimeslotsCodesVHCRMoreTimeslotsAdditionalTimeslotsConsecutive::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UplinkAdditionalTimeslotsVHCRParametersSameAsLast::itemsInfo[1] = {
	&TimeslotNumber::theInfo,
};
bool UplinkAdditionalTimeslotsVHCRParametersSameAsLast::itemsPres[1] = {
	1,
};
const UplinkAdditionalTimeslotsVHCRParametersSameAsLast::Info UplinkAdditionalTimeslotsVHCRParametersSameAsLast::theInfo = {
	UplinkAdditionalTimeslotsVHCRParametersSameAsLast::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UplinkAdditionalTimeslotsVHCRParametersNewParameters::itemsInfo[2] = {
	&IndividualTimeslotInfoVHCR::theInfo,
	&ULTSChannelisationCodeList::theInfo,
};
bool UplinkAdditionalTimeslotsVHCRParametersNewParameters::itemsPres[2] = {
	1,
	1,
};
const UplinkAdditionalTimeslotsVHCRParametersNewParameters::Info UplinkAdditionalTimeslotsVHCRParametersNewParameters::theInfo = {
	UplinkAdditionalTimeslotsVHCRParametersNewParameters::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *UplinkAdditionalTimeslotsVHCRParameters::choicesInfo[2] = {
	&UplinkAdditionalTimeslotsVHCRParametersSameAsLast::theInfo,
	&UplinkAdditionalTimeslotsVHCRParametersNewParameters::theInfo,
};
const UplinkAdditionalTimeslotsVHCRParameters::Info UplinkAdditionalTimeslotsVHCRParameters::theInfo = {
	UplinkAdditionalTimeslotsVHCRParameters::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
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

const void *UplinkTimeslotsCodesVHCRMoreTimeslotsAdditionalTimeslots::choicesInfo[2] = {
	&UplinkTimeslotsCodesVHCRMoreTimeslotsAdditionalTimeslotsConsecutive::theInfo,
	&UplinkTimeslotsCodesVHCRMoreTimeslotsAdditionalTimeslotsTimeslotList::theInfo,
};
const UplinkTimeslotsCodesVHCRMoreTimeslotsAdditionalTimeslots::Info UplinkTimeslotsCodesVHCRMoreTimeslotsAdditionalTimeslots::theInfo = {
	UplinkTimeslotsCodesVHCRMoreTimeslotsAdditionalTimeslots::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *UplinkTimeslotsCodesVHCRMoreTimeslots::choicesInfo[2] = {
	&UplinkTimeslotsCodesVHCRMoreTimeslotsNoMore::theInfo,
	&UplinkTimeslotsCodesVHCRMoreTimeslotsAdditionalTimeslots::theInfo,
};
const UplinkTimeslotsCodesVHCRMoreTimeslots::Info UplinkTimeslotsCodesVHCRMoreTimeslots::theInfo = {
	UplinkTimeslotsCodesVHCRMoreTimeslots::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *UplinkTimeslotsCodesVHCR::itemsInfo[4] = {
	&UplinkTimeslotsCodesVHCRDynamicSFusage::theInfo,
	&IndividualTimeslotInfoVHCR::theInfo,
	&ULTSChannelisationCodeListVHCR::theInfo,
	&UplinkTimeslotsCodesVHCRMoreTimeslots::theInfo,
};
bool UplinkTimeslotsCodesVHCR::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const UplinkTimeslotsCodesVHCR::Info UplinkTimeslotsCodesVHCR::theInfo = {
	UplinkTimeslotsCodesVHCR::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 0, 0
};

const void *PUSCHInfoVHCR::itemsInfo[3] = {
	&TFCSIdentityPlain::theInfo,
	&CommonTimeslotInfo::theInfo,
	&UplinkTimeslotsCodesVHCR::theInfo,
};
bool PUSCHInfoVHCR::itemsPres[3] = {
	0,
	0,
	0,
};
const PUSCHInfoVHCR::Info PUSCHInfoVHCR::theInfo = {
	PUSCHInfoVHCR::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *PUSCHCapacityAllocationInfor7PuschAllocationPuschAllocationAssignmentConfigurationNewConfiguration::itemsInfo[2] = {
	&PUSCHInfoVHCR::theInfo,
	&PUSCHIdentity::theInfo,
};
bool PUSCHCapacityAllocationInfor7PuschAllocationPuschAllocationAssignmentConfigurationNewConfiguration::itemsPres[2] = {
	1,
	0,
};
const PUSCHCapacityAllocationInfor7PuschAllocationPuschAllocationAssignmentConfigurationNewConfiguration::Info PUSCHCapacityAllocationInfor7PuschAllocationPuschAllocationAssignmentConfigurationNewConfiguration::theInfo = {
	PUSCHCapacityAllocationInfor7PuschAllocationPuschAllocationAssignmentConfigurationNewConfiguration::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *PUSCHCapacityAllocationInfor7PuschAllocationPuschAllocationAssignmentConfiguration::choicesInfo[2] = {
	&PUSCHCapacityAllocationInfor7PuschAllocationPuschAllocationAssignmentConfigurationOldConfiguration::theInfo,
	&PUSCHCapacityAllocationInfor7PuschAllocationPuschAllocationAssignmentConfigurationNewConfiguration::theInfo,
};
const PUSCHCapacityAllocationInfor7PuschAllocationPuschAllocationAssignmentConfiguration::Info PUSCHCapacityAllocationInfor7PuschAllocationPuschAllocationAssignmentConfiguration::theInfo = {
	PUSCHCapacityAllocationInfor7PuschAllocationPuschAllocationAssignmentConfiguration::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *PUSCHCapacityAllocationInfor7PuschAllocationPuschAllocationAssignment::itemsInfo[3] = {
	&AllocationPeriodInfo::theInfo,
	&PUSCHPowerControlInfor7::theInfo,
	&PUSCHCapacityAllocationInfor7PuschAllocationPuschAllocationAssignmentConfiguration::theInfo,
};
bool PUSCHCapacityAllocationInfor7PuschAllocationPuschAllocationAssignment::itemsPres[3] = {
	1,
	0,
	0,
};
const PUSCHCapacityAllocationInfor7PuschAllocationPuschAllocationAssignment::Info PUSCHCapacityAllocationInfor7PuschAllocationPuschAllocationAssignment::theInfo = {
	PUSCHCapacityAllocationInfor7PuschAllocationPuschAllocationAssignment::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *PUSCHCapacityAllocationInfor7PuschAllocation::choicesInfo[2] = {
	&PUSCHCapacityAllocationInfor7PuschAllocationPuschAllocationPending::theInfo,
	&PUSCHCapacityAllocationInfor7PuschAllocationPuschAllocationAssignment::theInfo,
};
const PUSCHCapacityAllocationInfor7PuschAllocation::Info PUSCHCapacityAllocationInfor7PuschAllocation::theInfo = {
	PUSCHCapacityAllocationInfor7PuschAllocation::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
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

const void *PUSCHInfoLCRr4::itemsInfo[3] = {
	&TFCSIdentityPlain::theInfo,
	&CommonTimeslotInfo::theInfo,
	&UplinkTimeslotsCodesLCRr4::theInfo,
};
bool PUSCHInfoLCRr4::itemsPres[3] = {
	0,
	0,
	0,
};
const PUSCHInfoLCRr4::Info PUSCHInfoLCRr4::theInfo = {
	PUSCHInfoLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *PUSCHSysInfo::itemsInfo[4] = {
	&PUSCHIdentity::theInfo,
	&PUSCHInfo::theInfo,
	&TransportFormatSet::theInfo,
	&TFCS::theInfo,
};
bool PUSCHSysInfo::itemsPres[4] = {
	1,
	1,
	0,
	0,
};
const PUSCHSysInfo::Info PUSCHSysInfo::theInfo = {
	PUSCHSysInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
};

const void *PUSCHSysInfoVHCR::itemsInfo[4] = {
	&PUSCHIdentity::theInfo,
	&PUSCHInfoVHCR::theInfo,
	&USCHTransportChannelsInfo::theInfo,
	&TFCS::theInfo,
};
bool PUSCHSysInfoVHCR::itemsPres[4] = {
	1,
	1,
	0,
	0,
};
const PUSCHSysInfoVHCR::Info PUSCHSysInfoVHCR::theInfo = {
	PUSCHSysInfoVHCR::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
};

const void *PUSCHSysInfoHCRr5::itemsInfo[4] = {
	&PUSCHIdentity::theInfo,
	&PUSCHInfo::theInfo,
	&USCHTransportChannelsInfo::theInfo,
	&TFCS::theInfo,
};
bool PUSCHSysInfoHCRr5::itemsPres[4] = {
	1,
	1,
	0,
	0,
};
const PUSCHSysInfoHCRr5::Info PUSCHSysInfoHCRr5::theInfo = {
	PUSCHSysInfoHCRr5::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
};

const void *PUSCHSysInfoLCRr4::itemsInfo[4] = {
	&PUSCHIdentity::theInfo,
	&PUSCHInfoLCRr4::theInfo,
	&TransportFormatSet::theInfo,
	&TFCS::theInfo,
};
bool PUSCHSysInfoLCRr4::itemsPres[4] = {
	1,
	1,
	0,
	0,
};
const PUSCHSysInfoLCRr4::Info PUSCHSysInfoLCRr4::theInfo = {
	PUSCHSysInfoLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
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

const void *RepetitionPeriodAndLengthForSPS::choicesInfo[6] = {
	&RepetitionPeriodAndLengthForSPSRepetitionPeriod1::theInfo,
	&RepetitionPeriodAndLengthForSPSRepetitionPeriod2::theInfo,
	&RepetitionPeriodAndLengthForSPSRepetitionPeriod4::theInfo,
	&RepetitionPeriodAndLengthForSPSRepetitionPeriod8::theInfo,
	&RepetitionPeriodAndLengthForSPSRepetitionPeriod16::theInfo,
	&RepetitionPeriodAndLengthForSPSRepetitionPeriod32::theInfo,
};
const RepetitionPeriodAndLengthForSPS::Info RepetitionPeriodAndLengthForSPS::theInfo = {
	RepetitionPeriodAndLengthForSPS::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	5
};

const void *RepPerLengthOffsetMICH::choicesInfo[9] = {
	&RepPerLengthOffsetMICHRpp42::theInfo,
	&RepPerLengthOffsetMICHRpp82::theInfo,
	&RepPerLengthOffsetMICHRpp84::theInfo,
	&RepPerLengthOffsetMICHRpp162::theInfo,
	&RepPerLengthOffsetMICHRpp164::theInfo,
	&RepPerLengthOffsetMICHRpp322::theInfo,
	&RepPerLengthOffsetMICHRpp324::theInfo,
	&RepPerLengthOffsetMICHRpp642::theInfo,
	&RepPerLengthOffsetMICHRpp644::theInfo,
};
const RepPerLengthOffsetMICH::Info RepPerLengthOffsetMICH::theInfo = {
	RepPerLengthOffsetMICH::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	8
};

const void *RLAdditionInformation::itemsInfo[4] = {
	&PrimaryCPICHInfo::theInfo,
	&DLDPCHInfoPerRL::theInfo,
	&RLAdditionInformationDummy::theInfo,
	&SCCPCHInfoForFACH::theInfo,
};
bool RLAdditionInformation::itemsPres[4] = {
	1,
	1,
	1,
	0,
};
const RLAdditionInformation::Info RLAdditionInformation::theInfo = {
	RLAdditionInformation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 1, 0
};

const void *RLAdditionInformationr6DldpchInfo::choicesInfo[2] = {
	&DLDPCHInfoPerRLr5::theInfo,
	&DLFDPCHInfoPerRLr6::theInfo,
};
const RLAdditionInformationr6DldpchInfo::Info RLAdditionInformationr6DldpchInfo::theInfo = {
	RLAdditionInformationr6DldpchInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *RLAdditionInformationr6::itemsInfo[5] = {
	&PrimaryCPICHInfo::theInfo,
	&CellIdentity::theInfo,
	&RLAdditionInformationr6DldpchInfo::theInfo,
	&EHICHInformation::theInfo,
	&ERGCHInformation::theInfo,
};
bool RLAdditionInformationr6::itemsPres[5] = {
	1,
	0,
	1,
	0,
	0,
};
const RLAdditionInformationr6::Info RLAdditionInformationr6::theInfo = {
	RLAdditionInformationr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 3, 0
};

const void *RLAdditionInformationr7DldpchInfo::choicesInfo[2] = {
	&DLDPCHInfoPerRLr5::theInfo,
	&DLFDPCHInfoPerRLr7::theInfo,
};
const RLAdditionInformationr7DldpchInfo::Info RLAdditionInformationr7DldpchInfo::theInfo = {
	RLAdditionInformationr7DldpchInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *RLAdditionInformationr7::itemsInfo[5] = {
	&PrimaryCPICHInfo::theInfo,
	&CellIdentity::theInfo,
	&RLAdditionInformationr7DldpchInfo::theInfo,
	&EHICHInformation::theInfo,
	&ERGCHInformation::theInfo,
};
bool RLAdditionInformationr7::itemsPres[5] = {
	1,
	0,
	1,
	0,
	0,
};
const RLAdditionInformationr7::Info RLAdditionInformationr7::theInfo = {
	RLAdditionInformationr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 3, 0
};

const void *RLAdditionInformationr8DldpchInfo::choicesInfo[2] = {
	&DLDPCHInfoPerRLr5::theInfo,
	&DLFDPCHInfoPerRLr7::theInfo,
};
const RLAdditionInformationr8DldpchInfo::Info RLAdditionInformationr8DldpchInfo::theInfo = {
	RLAdditionInformationr8DldpchInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DTXDRXTimingInfor7Timing::choicesInfo[2] = {
	&DTXDRXTimingInfor7TimingContinue::theInfo,
	&NewTiming::theInfo,
};
const DTXDRXTimingInfor7Timing::Info DTXDRXTimingInfor7Timing::theInfo = {
	DTXDRXTimingInfor7Timing::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
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

const void *TargetCellPreconfigInfo::itemsInfo[11] = {
	&ActivationTimeOffset::theInfo,
	&HRNTI::theInfo,
	&ERNTI::theInfo,
	&ERNTI::theInfo,
	&ServingHSDSCHCellInformationr8::theInfo,
	&EDCHReconfigurationInfor7::theInfo,
	&DTXDRXTimingInfor7::theInfo,
	&DTXDRXInfor7::theInfo,
	&HSSCCHLessInfor7::theInfo,
	&MIMOParametersr8::theInfo,
	&DLSecondaryCellInfoFDD::theInfo,
};
bool TargetCellPreconfigInfo::itemsPres[11] = {
	0,
	1,
	0,
	0,
	1,
	1,
	0,
	0,
	0,
	0,
	0,
};
const TargetCellPreconfigInfo::Info TargetCellPreconfigInfo::theInfo = {
	TargetCellPreconfigInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	11, 8, 0
};

const void *RLAdditionInformationr8::itemsInfo[6] = {
	&PrimaryCPICHInfo::theInfo,
	&CellIdentity::theInfo,
	&RLAdditionInformationr8DldpchInfo::theInfo,
	&EHICHInformation::theInfo,
	&ERGCHInformation::theInfo,
	&TargetCellPreconfigInfo::theInfo,
};
bool RLAdditionInformationr8::itemsPres[6] = {
	1,
	0,
	1,
	0,
	0,
	0,
};
const RLAdditionInformationr8::Info RLAdditionInformationr8::theInfo = {
	RLAdditionInformationr8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 4, 0
};

const void *RLAdditionInformationr9DldpchInfo::choicesInfo[2] = {
	&DLDPCHInfoPerRLr5::theInfo,
	&DLFDPCHInfoPerRLr7::theInfo,
};
const RLAdditionInformationr9DldpchInfo::Info RLAdditionInformationr9DldpchInfo::theInfo = {
	RLAdditionInformationr9DldpchInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *TargetCellPreconfigInfor9::itemsInfo[13] = {
	&ActivationTimeOffset::theInfo,
	&HRNTI::theInfo,
	&ERNTI::theInfo,
	&ERNTI::theInfo,
	&ServingHSDSCHCellInformationr9::theInfo,
	&EDCHReconfigurationInfor7::theInfo,
	&DTXDRXTimingInfor7::theInfo,
	&DTXDRXInfor7::theInfo,
	&HSSCCHLessInfor7::theInfo,
	&MIMOParametersr9::theInfo,
	&DLSecondaryCellInfoFDDr9::theInfo,
	&ULSecondaryCellInfoFDD::theInfo,
	&EDCHReconfigurationInfoSecULFrequency::theInfo,
};
bool TargetCellPreconfigInfor9::itemsPres[13] = {
	0,
	1,
	0,
	0,
	1,
	1,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
const TargetCellPreconfigInfor9::Info TargetCellPreconfigInfor9::theInfo = {
	TargetCellPreconfigInfor9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	13, 10, 0
};

const void *RLAdditionInformationr9::itemsInfo[6] = {
	&PrimaryCPICHInfo::theInfo,
	&CellIdentity::theInfo,
	&RLAdditionInformationr9DldpchInfo::theInfo,
	&EHICHInformation::theInfo,
	&ERGCHInformation::theInfo,
	&TargetCellPreconfigInfor9::theInfo,
};
bool RLAdditionInformationr9::itemsPres[6] = {
	1,
	0,
	1,
	0,
	0,
	0,
};
const RLAdditionInformationr9::Info RLAdditionInformationr9::theInfo = {
	RLAdditionInformationr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 4, 0
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

const void *RLAdditionInformationSecULFreq::itemsInfo[5] = {
	&PrimaryCPICHInfo::theInfo,
	&CellIdentity::theInfo,
	&DLFDPCHInfoPerRLr7::theInfo,
	&EHICHInformation::theInfo,
	&ERGCHInformation::theInfo,
};
bool RLAdditionInformationSecULFreq::itemsPres[5] = {
	1,
	0,
	1,
	1,
	0,
};
const RLAdditionInformationSecULFreq::Info RLAdditionInformationSecULFreq::theInfo = {
	RLAdditionInformationSecULFreq::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 2, 0
};

const void *SCCPCHSystemInformation::itemsInfo[4] = {
	&SecondaryCCPCHInfo::theInfo,
	&TFCS::theInfo,
	&FACHPCHInformationList::theInfo,
	&PICHInfo::theInfo,
};
bool SCCPCHSystemInformation::itemsPres[4] = {
	1,
	0,
	0,
	0,
};
const SCCPCHSystemInformation::Info SCCPCHSystemInformation::theInfo = {
	SCCPCHSystemInformation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 3, 0
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

const void *SCCPCHSystemInformationLCRr4ext::itemsInfo[2] = {
	&SecondaryCCPCHInfoLCRr4ext::theInfo,
	&PICHInfoLCRr4::theInfo,
};
bool SCCPCHSystemInformationLCRr4ext::itemsPres[2] = {
	1,
	0,
};
const SCCPCHSystemInformationLCRr4ext::Info SCCPCHSystemInformationLCRr4ext::theInfo = {
	SCCPCHSystemInformationLCRr4ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *SecondaryCCPCHInfoHCRVHCRr7ModeSpecificInfoTdd384::itemsInfo[2] = {
	&IndividualTimeslotInfor7::theInfo,
	&SCCPCHChannelisationCodeList::theInfo,
};
bool SecondaryCCPCHInfoHCRVHCRr7ModeSpecificInfoTdd384::itemsPres[2] = {
	1,
	1,
};
const SecondaryCCPCHInfoHCRVHCRr7ModeSpecificInfoTdd384::Info SecondaryCCPCHInfoHCRVHCRr7ModeSpecificInfoTdd384::theInfo = {
	SecondaryCCPCHInfoHCRVHCRr7ModeSpecificInfoTdd384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *SecondaryCCPCHInfoHCRVHCRr7ModeSpecificInfoTdd768::itemsInfo[2] = {
	&IndividualTimeslotInfoVHCR::theInfo,
	&SCCPCHChannelisationCodeListVHCR::theInfo,
};
bool SecondaryCCPCHInfoHCRVHCRr7ModeSpecificInfoTdd768::itemsPres[2] = {
	1,
	1,
};
const SecondaryCCPCHInfoHCRVHCRr7ModeSpecificInfoTdd768::Info SecondaryCCPCHInfoHCRVHCRr7ModeSpecificInfoTdd768::theInfo = {
	SecondaryCCPCHInfoHCRVHCRr7ModeSpecificInfoTdd768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *SecondaryCCPCHInfoHCRVHCRr7ModeSpecificInfo::choicesInfo[2] = {
	&SecondaryCCPCHInfoHCRVHCRr7ModeSpecificInfoTdd384::theInfo,
	&SecondaryCCPCHInfoHCRVHCRr7ModeSpecificInfoTdd768::theInfo,
};
const SecondaryCCPCHInfoHCRVHCRr7ModeSpecificInfo::Info SecondaryCCPCHInfoHCRVHCRr7ModeSpecificInfo::theInfo = {
	SecondaryCCPCHInfoHCRVHCRr7ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
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

const void *SCCPCHSystemInformationHCRVHCRr7::itemsInfo[4] = {
	&SecondaryCCPCHInfoHCRVHCRr7::theInfo,
	&TFCS::theInfo,
	&FACHPCHInformationList::theInfo,
	&PICHInfoHCRVHCRr7::theInfo,
};
bool SCCPCHSystemInformationHCRVHCRr7::itemsPres[4] = {
	1,
	0,
	0,
	0,
};
const SCCPCHSystemInformationHCRVHCRr7::Info SCCPCHSystemInformationHCRVHCRr7::theInfo = {
	SCCPCHSystemInformationHCRVHCRr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 3, 0
};

const void *SecondaryCCPCHInfoMBMSr6ModeSpecificInfoFdd::itemsInfo[4] = {
	&SecondaryScramblingCode::theInfo,
	&SecondaryCCPCHInfoMBMSr6ModeSpecificInfoFddSttdIndicator::theInfo,
	&SF256AndCodeNumber::theInfo,
	&TimingOffset::theInfo,
};
bool SecondaryCCPCHInfoMBMSr6ModeSpecificInfoFdd::itemsPres[4] = {
	0,
	1,
	1,
	0,
};
const SecondaryCCPCHInfoMBMSr6ModeSpecificInfoFdd::Info SecondaryCCPCHInfoMBMSr6ModeSpecificInfoFdd::theInfo = {
	SecondaryCCPCHInfoMBMSr6ModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
};

const void *SecondaryCCPCHInfoMBMSr6ModeSpecificInfoTdd384::itemsInfo[2] = {
	&CommonTimeslotInfoMBMS::theInfo,
	&DownlinkTimeslotsCodes::theInfo,
};
bool SecondaryCCPCHInfoMBMSr6ModeSpecificInfoTdd384::itemsPres[2] = {
	1,
	1,
};
const SecondaryCCPCHInfoMBMSr6ModeSpecificInfoTdd384::Info SecondaryCCPCHInfoMBMSr6ModeSpecificInfoTdd384::theInfo = {
	SecondaryCCPCHInfoMBMSr6ModeSpecificInfoTdd384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *SecondaryCCPCHInfoMBMSr6ModeSpecificInfoTdd128::itemsInfo[2] = {
	&CommonTimeslotInfoMBMS::theInfo,
	&DownlinkTimeslotsCodesLCRr4::theInfo,
};
bool SecondaryCCPCHInfoMBMSr6ModeSpecificInfoTdd128::itemsPres[2] = {
	1,
	1,
};
const SecondaryCCPCHInfoMBMSr6ModeSpecificInfoTdd128::Info SecondaryCCPCHInfoMBMSr6ModeSpecificInfoTdd128::theInfo = {
	SecondaryCCPCHInfoMBMSr6ModeSpecificInfoTdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *SecondaryCCPCHInfoMBMSr6ModeSpecificInfo::choicesInfo[3] = {
	&SecondaryCCPCHInfoMBMSr6ModeSpecificInfoFdd::theInfo,
	&SecondaryCCPCHInfoMBMSr6ModeSpecificInfoTdd384::theInfo,
	&SecondaryCCPCHInfoMBMSr6ModeSpecificInfoTdd128::theInfo,
};
const SecondaryCCPCHInfoMBMSr6ModeSpecificInfo::Info SecondaryCCPCHInfoMBMSr6ModeSpecificInfo::theInfo = {
	SecondaryCCPCHInfoMBMSr6ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
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

const void *MBMSMCCHConfigurationInfor6::itemsInfo[5] = {
	&MBMSMCCHConfigurationInfor6AccessInfoPeriodCoefficient::theInfo,
	&MBMSMCCHConfigurationInfor6RepetitionPeriodCoefficient::theInfo,
	&MBMSMCCHConfigurationInfor6ModificationPeriodCoefficient::theInfo,
	&RLCInfoMCCHr6::theInfo,
	&MBMSTCTFPresence::theInfo,
};
bool MBMSMCCHConfigurationInfor6::itemsPres[5] = {
	1,
	1,
	1,
	1,
	0,
};
const MBMSMCCHConfigurationInfor6::Info MBMSMCCHConfigurationInfor6::theInfo = {
	MBMSMCCHConfigurationInfor6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 1, 0
};

const void *SCCPCHSystemInformationMBMSr6FachCarryingMCCH::itemsInfo[2] = {
	&TransportFormatSet::theInfo,
	&MBMSMCCHConfigurationInfor6::theInfo,
};
bool SCCPCHSystemInformationMBMSr6FachCarryingMCCH::itemsPres[2] = {
	1,
	1,
};
const SCCPCHSystemInformationMBMSr6FachCarryingMCCH::Info SCCPCHSystemInformationMBMSr6FachCarryingMCCH::theInfo = {
	SCCPCHSystemInformationMBMSr6FachCarryingMCCH::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *MBMSMSCHSchedulingInfo::choicesInfo[6] = {
	&MBMSMSCHSchedulingInfoSchedulingPeriod32Offset::theInfo,
	&MBMSMSCHSchedulingInfoSchedulingPeriod64Offset::theInfo,
	&MBMSMSCHSchedulingInfoSchedulingPeriod128Offset::theInfo,
	&MBMSMSCHSchedulingInfoSchedulingPeriod256Offset::theInfo,
	&MBMSMSCHSchedulingInfoSchedulingPeriod512Offset::theInfo,
	&MBMSMSCHSchedulingInfoSchedulingPeriod1024Offset::theInfo,
};
const MBMSMSCHSchedulingInfo::Info MBMSMSCHSchedulingInfo::theInfo = {
	MBMSMSCHSchedulingInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	5
};

const void *MBMSMSCHConfigurationInfor6::itemsInfo[3] = {
	&MBMSMSCHSchedulingInfo::theInfo,
	&RLCInfoMSCHr6::theInfo,
	&MBMSTCTFPresence::theInfo,
};
bool MBMSMSCHConfigurationInfor6::itemsPres[3] = {
	0,
	0,
	0,
};
const MBMSMSCHConfigurationInfor6::Info MBMSMSCHConfigurationInfor6::theInfo = {
	MBMSMSCHConfigurationInfor6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *SCCPCHSystemInformationMBMSr6FachCarryingMSCH::itemsInfo[2] = {
	&TransportFormatSet::theInfo,
	&MBMSMSCHConfigurationInfor6::theInfo,
};
bool SCCPCHSystemInformationMBMSr6FachCarryingMSCH::itemsPres[2] = {
	1,
	1,
};
const SCCPCHSystemInformationMBMSr6FachCarryingMSCH::Info SCCPCHSystemInformationMBMSr6FachCarryingMSCH::theInfo = {
	SCCPCHSystemInformationMBMSr6FachCarryingMSCH::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *SCCPCHSystemInformationMBMSr6::itemsInfo[5] = {
	&SecondaryCCPCHInfoMBMSr6::theInfo,
	&TFCS::theInfo,
	&SCCPCHSystemInformationMBMSr6FachCarryingMCCH::theInfo,
	&MBMSFACHCarryingMTCHList::theInfo,
	&SCCPCHSystemInformationMBMSr6FachCarryingMSCH::theInfo,
};
bool SCCPCHSystemInformationMBMSr6::itemsPres[5] = {
	1,
	1,
	1,
	0,
	0,
};
const SCCPCHSystemInformationMBMSr6::Info SCCPCHSystemInformationMBMSr6::theInfo = {
	SCCPCHSystemInformationMBMSr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 2, 0
};

const void *SecondaryCCPCHInfoMBMSr7ModeSpecificInfoFddModulation::choicesInfo[2] = {
	&SecondaryCCPCHInfoMBMSr7ModeSpecificInfoFddModulationModQPSK::theInfo,
	&SecondaryCCPCHInfoMBMSr7ModeSpecificInfoFddModulationMod16QAM::theInfo,
};
const SecondaryCCPCHInfoMBMSr7ModeSpecificInfoFddModulation::Info SecondaryCCPCHInfoMBMSr7ModeSpecificInfoFddModulation::theInfo = {
	SecondaryCCPCHInfoMBMSr7ModeSpecificInfoFddModulation::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *SecondaryCCPCHInfoMBMSr7ModeSpecificInfoFdd::itemsInfo[5] = {
	&SecondaryScramblingCode::theInfo,
	&SecondaryCCPCHInfoMBMSr7ModeSpecificInfoFddSttdIndicator::theInfo,
	&SF256AndCodeNumber::theInfo,
	&TimingOffset::theInfo,
	&SecondaryCCPCHInfoMBMSr7ModeSpecificInfoFddModulation::theInfo,
};
bool SecondaryCCPCHInfoMBMSr7ModeSpecificInfoFdd::itemsPres[5] = {
	0,
	1,
	1,
	0,
	0,
};
const SecondaryCCPCHInfoMBMSr7ModeSpecificInfoFdd::Info SecondaryCCPCHInfoMBMSr7ModeSpecificInfoFdd::theInfo = {
	SecondaryCCPCHInfoMBMSr7ModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 3, 0
};

const void *SecondaryCCPCHInfoMBMSr7ModeSpecificInfoTdd384::itemsInfo[3] = {
	&CommonTimeslotInfoMBMS::theInfo,
	&DownlinkTimeslotsCodesr7::theInfo,
	&SecondaryCCPCHInfoMBMSr7ModeSpecificInfoTdd384modulation::theInfo,
};
bool SecondaryCCPCHInfoMBMSr7ModeSpecificInfoTdd384::itemsPres[3] = {
	1,
	1,
	1,
};
const SecondaryCCPCHInfoMBMSr7ModeSpecificInfoTdd384::Info SecondaryCCPCHInfoMBMSr7ModeSpecificInfoTdd384::theInfo = {
	SecondaryCCPCHInfoMBMSr7ModeSpecificInfoTdd384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *SecondaryCCPCHInfoMBMSr7ModeSpecificInfoTdd768::itemsInfo[3] = {
	&CommonTimeslotInfoMBMS::theInfo,
	&DownlinkTimeslotsCodesVHCR::theInfo,
	&SecondaryCCPCHInfoMBMSr7ModeSpecificInfoTdd768modulation::theInfo,
};
bool SecondaryCCPCHInfoMBMSr7ModeSpecificInfoTdd768::itemsPres[3] = {
	1,
	1,
	1,
};
const SecondaryCCPCHInfoMBMSr7ModeSpecificInfoTdd768::Info SecondaryCCPCHInfoMBMSr7ModeSpecificInfoTdd768::theInfo = {
	SecondaryCCPCHInfoMBMSr7ModeSpecificInfoTdd768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *SecondaryCCPCHInfoMBMSr7ModeSpecificInfoTdd128::itemsInfo[4] = {
	&CommonTimeslotInfoMBMS::theInfo,
	&DownlinkTimeslotsCodesLCRr4::theInfo,
	&TimeSlotLCRext::theInfo,
	&SecondaryCCPCHInfoMBMSr7ModeSpecificInfoTdd128modulation::theInfo,
};
bool SecondaryCCPCHInfoMBMSr7ModeSpecificInfoTdd128::itemsPres[4] = {
	1,
	1,
	0,
	1,
};
const SecondaryCCPCHInfoMBMSr7ModeSpecificInfoTdd128::Info SecondaryCCPCHInfoMBMSr7ModeSpecificInfoTdd128::theInfo = {
	SecondaryCCPCHInfoMBMSr7ModeSpecificInfoTdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 1, 0
};

const void *SecondaryCCPCHInfoMBMSr7ModeSpecificInfo::choicesInfo[4] = {
	&SecondaryCCPCHInfoMBMSr7ModeSpecificInfoFdd::theInfo,
	&SecondaryCCPCHInfoMBMSr7ModeSpecificInfoTdd384::theInfo,
	&SecondaryCCPCHInfoMBMSr7ModeSpecificInfoTdd768::theInfo,
	&SecondaryCCPCHInfoMBMSr7ModeSpecificInfoTdd128::theInfo,
};
const SecondaryCCPCHInfoMBMSr7ModeSpecificInfo::Info SecondaryCCPCHInfoMBMSr7ModeSpecificInfo::theInfo = {
	SecondaryCCPCHInfoMBMSr7ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	3
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

const void *SCCPCHSystemInformationMBMSr7FachCarryingMCCH::itemsInfo[2] = {
	&TransportFormatSet::theInfo,
	&MBMSMCCHConfigurationInfor6::theInfo,
};
bool SCCPCHSystemInformationMBMSr7FachCarryingMCCH::itemsPres[2] = {
	1,
	1,
};
const SCCPCHSystemInformationMBMSr7FachCarryingMCCH::Info SCCPCHSystemInformationMBMSr7FachCarryingMCCH::theInfo = {
	SCCPCHSystemInformationMBMSr7FachCarryingMCCH::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *SCCPCHSystemInformationMBMSr7FachCarryingMSCH::itemsInfo[1] = {
	&TransportFormatSet::theInfo,
};
bool SCCPCHSystemInformationMBMSr7FachCarryingMSCH::itemsPres[1] = {
	1,
};
const SCCPCHSystemInformationMBMSr7FachCarryingMSCH::Info SCCPCHSystemInformationMBMSr7FachCarryingMSCH::theInfo = {
	SCCPCHSystemInformationMBMSr7FachCarryingMSCH::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *SCCPCHSystemInformationMBMSr7::itemsInfo[5] = {
	&SecondaryCCPCHInfoMBMSr7::theInfo,
	&TFCS::theInfo,
	&SCCPCHSystemInformationMBMSr7FachCarryingMCCH::theInfo,
	&MBMSFACHCarryingMTCHList::theInfo,
	&SCCPCHSystemInformationMBMSr7FachCarryingMSCH::theInfo,
};
bool SCCPCHSystemInformationMBMSr7::itemsPres[5] = {
	1,
	1,
	1,
	0,
	0,
};
const SCCPCHSystemInformationMBMSr7::Info SCCPCHSystemInformationMBMSr7::theInfo = {
	SCCPCHSystemInformationMBMSr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 2, 0
};

const void *SecondaryCCPCHFrameType2InfoModulationMod16QAM::itemsInfo[1] = {
	&SecondaryCCPCHFrameType2InfoModulationMod16QAMCpichSecCCPCHPowerOffset::theInfo,
};
bool SecondaryCCPCHFrameType2InfoModulationMod16QAM::itemsPres[1] = {
	1,
};
const SecondaryCCPCHFrameType2InfoModulationMod16QAM::Info SecondaryCCPCHFrameType2InfoModulationMod16QAM::theInfo = {
	SecondaryCCPCHFrameType2InfoModulationMod16QAM::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *SecondaryCCPCHFrameType2InfoModulation::choicesInfo[2] = {
	&SecondaryCCPCHFrameType2InfoModulationModQPSK::theInfo,
	&SecondaryCCPCHFrameType2InfoModulationMod16QAM::theInfo,
};
const SecondaryCCPCHFrameType2InfoModulation::Info SecondaryCCPCHFrameType2InfoModulation::theInfo = {
	SecondaryCCPCHFrameType2InfoModulation::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *SecondaryCCPCHFrameType2Info::itemsInfo[3] = {
	&SecondaryCCPCHFrameType2InfoSubFrameNumber::theInfo,
	&DLChannelCodesMBSFNIMB384::theInfo,
	&SecondaryCCPCHFrameType2InfoModulation::theInfo,
};
bool SecondaryCCPCHFrameType2Info::itemsPres[3] = {
	1,
	1,
	1,
};
const SecondaryCCPCHFrameType2Info::Info SecondaryCCPCHFrameType2Info::theInfo = {
	SecondaryCCPCHFrameType2Info::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *SecondaryCCPCHInfoDiffMBMS::itemsInfo[4] = {
	&SecondaryScramblingCode::theInfo,
	&SecondaryCCPCHInfoDiffMBMSSttdIndicator::theInfo,
	&SF256AndCodeNumber::theInfo,
	&TimingOffset::theInfo,
};
bool SecondaryCCPCHInfoDiffMBMS::itemsPres[4] = {
	0,
	1,
	0,
	0,
};
const SecondaryCCPCHInfoDiffMBMS::Info SecondaryCCPCHInfoDiffMBMS::theInfo = {
	SecondaryCCPCHInfoDiffMBMS::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 3, 0
};

const void *ServingCellChangeParameters::itemsInfo[3] = {
	&ServingCellChangeMACreset::theInfo,
	&ServingCellChangeMsgType::theInfo,
	&ServingCellChangeTrId::theInfo,
};
bool ServingCellChangeParameters::itemsPres[3] = {
	1,
	1,
	1,
};
const ServingCellChangeParameters::Info ServingCellChangeParameters::theInfo = {
	ServingCellChangeParameters::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *SFNTimeInfo::itemsInfo[2] = {
	&SFNTimeInfoActivationTimeSFN::theInfo,
	&DurationTimeInfo::theInfo,
};
bool SFNTimeInfo::itemsPres[2] = {
	1,
	1,
};
const SFNTimeInfo::Info SFNTimeInfo::theInfo = {
	SFNTimeInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *SPSInformationTDD128r8::itemsInfo[2] = {
	&EDCHSPSInformationTDD128::theInfo,
	&HSDSCHSPSInformationTDD128::theInfo,
};
bool SPSInformationTDD128r8::itemsPres[2] = {
	0,
	0,
};
const SPSInformationTDD128r8::Info SPSInformationTDD128r8::theInfo = {
	SPSInformationTDD128r8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *SYNCULProcedurer4::itemsInfo[2] = {
	&SYNCULProcedurer4max_SYNC_UL_Transmissions::theInfo,
	&SYNCULProcedurer4PowerRampStep::theInfo,
};
bool SYNCULProcedurer4::itemsPres[2] = {
	1,
	1,
};
const SYNCULProcedurer4::Info SYNCULProcedurer4::theInfo = {
	SYNCULProcedurer4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *SynchronisationParametersr4::itemsInfo[4] = {
	&SynchronisationParametersr4SyncULCodesBitmap::theInfo,
	&FPACHInfor4::theInfo,
	&SynchronisationParametersr4PrxUpPCHdes::theInfo,
	&SYNCULProcedurer4::theInfo,
};
bool SynchronisationParametersr4::itemsPres[4] = {
	1,
	1,
	1,
	0,
};
const SynchronisationParametersr4::Info SynchronisationParametersr4::theInfo = {
	SynchronisationParametersr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 1, 0
};

const void *TDDMBSFNTSlotInfo::itemsInfo[2] = {
	&TimeslotNumber::theInfo,
	&CellParametersID::theInfo,
};
bool TDDMBSFNTSlotInfo::itemsPres[2] = {
	1,
	1,
};
const TDDMBSFNTSlotInfo::Info TDDMBSFNTSlotInfo::theInfo = {
	TDDMBSFNTSlotInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *TimeslotListr4::choicesInfo[2] = {
	&TimeslotListr4Tdd384::theInfo,
	&TimeslotListr4Tdd128::theInfo,
};
const TimeslotListr4::Info TimeslotListr4::theInfo = {
	TimeslotListr4::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *UL16QAMConfig::itemsInfo[3] = {
	&UL16QAMSettings::theInfo,
	&ETFCITableIndex::theInfo,
	&UL16QAMConfigmac_es_e_resetIndicator::theInfo,
};
bool UL16QAMConfig::itemsPres[3] = {
	0,
	0,
	0,
};
const UL16QAMConfig::Info UL16QAMConfig::theInfo = {
	UL16QAMConfig::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *ULCCTrCH::itemsInfo[5] = {
	&TFCSIdentityPlain::theInfo,
	&ULTargetSIR::theInfo,
	&TimeInfo::theInfo,
	&CommonTimeslotInfo::theInfo,
	&UplinkTimeslotsCodes::theInfo,
};
bool ULCCTrCH::itemsPres[5] = {
	0,
	1,
	1,
	0,
	0,
};
const ULCCTrCH::Info ULCCTrCH::theInfo = {
	ULCCTrCH::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 3, 0
};

const void *ULCCTrCHr4TddOptionTdd384::itemsInfo[1] = {
	&UplinkTimeslotsCodes::theInfo,
};
bool ULCCTrCHr4TddOptionTdd384::itemsPres[1] = {
	0,
};
const ULCCTrCHr4TddOptionTdd384::Info ULCCTrCHr4TddOptionTdd384::theInfo = {
	ULCCTrCHr4TddOptionTdd384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ULCCTrCHr4TddOptionTdd128::itemsInfo[1] = {
	&UplinkTimeslotsCodesLCRr4::theInfo,
};
bool ULCCTrCHr4TddOptionTdd128::itemsPres[1] = {
	0,
};
const ULCCTrCHr4TddOptionTdd128::Info ULCCTrCHr4TddOptionTdd128::theInfo = {
	ULCCTrCHr4TddOptionTdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ULCCTrCHr4TddOption::choicesInfo[2] = {
	&ULCCTrCHr4TddOptionTdd384::theInfo,
	&ULCCTrCHr4TddOptionTdd128::theInfo,
};
const ULCCTrCHr4TddOption::Info ULCCTrCHr4TddOption::theInfo = {
	ULCCTrCHr4TddOption::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULCCTrCHr4::itemsInfo[5] = {
	&TFCSIdentityPlain::theInfo,
	&ULTargetSIR::theInfo,
	&TimeInfo::theInfo,
	&CommonTimeslotInfo::theInfo,
	&ULCCTrCHr4TddOption::theInfo,
};
bool ULCCTrCHr4::itemsPres[5] = {
	0,
	1,
	1,
	0,
	1,
};
const ULCCTrCHr4::Info ULCCTrCHr4::theInfo = {
	ULCCTrCHr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 2, 0
};

const void *ULCCTrCHr7TddOptionTdd384::itemsInfo[1] = {
	&UplinkTimeslotsCodes::theInfo,
};
bool ULCCTrCHr7TddOptionTdd384::itemsPres[1] = {
	0,
};
const ULCCTrCHr7TddOptionTdd384::Info ULCCTrCHr7TddOptionTdd384::theInfo = {
	ULCCTrCHr7TddOptionTdd384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ULCCTrCHr7TddOptionTdd768::itemsInfo[1] = {
	&UplinkTimeslotsCodesVHCR::theInfo,
};
bool ULCCTrCHr7TddOptionTdd768::itemsPres[1] = {
	0,
};
const ULCCTrCHr7TddOptionTdd768::Info ULCCTrCHr7TddOptionTdd768::theInfo = {
	ULCCTrCHr7TddOptionTdd768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
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

const void *UplinkTimeslotsCodesLCRr7MoreTimeslotsAdditionalTimeslotsConsecutive::itemsInfo[1] = {
	&UplinkTimeslotsCodesLCRr7MoreTimeslotsAdditionalTimeslotsConsecutiveNumAdditionalTimeslots::theInfo,
};
bool UplinkTimeslotsCodesLCRr7MoreTimeslotsAdditionalTimeslotsConsecutive::itemsPres[1] = {
	1,
};
const UplinkTimeslotsCodesLCRr7MoreTimeslotsAdditionalTimeslotsConsecutive::Info UplinkTimeslotsCodesLCRr7MoreTimeslotsAdditionalTimeslotsConsecutive::theInfo = {
	UplinkTimeslotsCodesLCRr7MoreTimeslotsAdditionalTimeslotsConsecutive::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UplinkAdditionalTimeslotsLCRr7ParametersSameAsLast::itemsInfo[1] = {
	&TimeslotNumber::theInfo,
};
bool UplinkAdditionalTimeslotsLCRr7ParametersSameAsLast::itemsPres[1] = {
	1,
};
const UplinkAdditionalTimeslotsLCRr7ParametersSameAsLast::Info UplinkAdditionalTimeslotsLCRr7ParametersSameAsLast::theInfo = {
	UplinkAdditionalTimeslotsLCRr7ParametersSameAsLast::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *UplinkAdditionalTimeslotsLCRr7ParametersNewParameters::itemsInfo[2] = {
	&IndividualTimeslotInfoLCRr4::theInfo,
	&ULTSChannelisationCodeListr7::theInfo,
};
bool UplinkAdditionalTimeslotsLCRr7ParametersNewParameters::itemsPres[2] = {
	1,
	1,
};
const UplinkAdditionalTimeslotsLCRr7ParametersNewParameters::Info UplinkAdditionalTimeslotsLCRr7ParametersNewParameters::theInfo = {
	UplinkAdditionalTimeslotsLCRr7ParametersNewParameters::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *UplinkAdditionalTimeslotsLCRr7Parameters::choicesInfo[2] = {
	&UplinkAdditionalTimeslotsLCRr7ParametersSameAsLast::theInfo,
	&UplinkAdditionalTimeslotsLCRr7ParametersNewParameters::theInfo,
};
const UplinkAdditionalTimeslotsLCRr7Parameters::Info UplinkAdditionalTimeslotsLCRr7Parameters::theInfo = {
	UplinkAdditionalTimeslotsLCRr7Parameters::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
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

const void *UplinkTimeslotsCodesLCRr7MoreTimeslotsAdditionalTimeslots::choicesInfo[2] = {
	&UplinkTimeslotsCodesLCRr7MoreTimeslotsAdditionalTimeslotsConsecutive::theInfo,
	&UplinkTimeslotsCodesLCRr7MoreTimeslotsAdditionalTimeslotsTimeslotList::theInfo,
};
const UplinkTimeslotsCodesLCRr7MoreTimeslotsAdditionalTimeslots::Info UplinkTimeslotsCodesLCRr7MoreTimeslotsAdditionalTimeslots::theInfo = {
	UplinkTimeslotsCodesLCRr7MoreTimeslotsAdditionalTimeslots::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *UplinkTimeslotsCodesLCRr7MoreTimeslots::choicesInfo[2] = {
	&UplinkTimeslotsCodesLCRr7MoreTimeslotsNoMore::theInfo,
	&UplinkTimeslotsCodesLCRr7MoreTimeslotsAdditionalTimeslots::theInfo,
};
const UplinkTimeslotsCodesLCRr7MoreTimeslots::Info UplinkTimeslotsCodesLCRr7MoreTimeslots::theInfo = {
	UplinkTimeslotsCodesLCRr7MoreTimeslots::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *UplinkTimeslotsCodesLCRr7::itemsInfo[4] = {
	&UplinkTimeslotsCodesLCRr7DynamicSFusage::theInfo,
	&IndividualTimeslotInfoLCRr4::theInfo,
	&ULTSChannelisationCodeListr7::theInfo,
	&UplinkTimeslotsCodesLCRr7MoreTimeslots::theInfo,
};
bool UplinkTimeslotsCodesLCRr7::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const UplinkTimeslotsCodesLCRr7::Info UplinkTimeslotsCodesLCRr7::theInfo = {
	UplinkTimeslotsCodesLCRr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 0, 0
};

const void *ULCCTrCHr7TddOptionTdd128::itemsInfo[1] = {
	&UplinkTimeslotsCodesLCRr7::theInfo,
};
bool ULCCTrCHr7TddOptionTdd128::itemsPres[1] = {
	0,
};
const ULCCTrCHr7TddOptionTdd128::Info ULCCTrCHr7TddOptionTdd128::theInfo = {
	ULCCTrCHr7TddOptionTdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ULCCTrCHr7TddOption::choicesInfo[3] = {
	&ULCCTrCHr7TddOptionTdd384::theInfo,
	&ULCCTrCHr7TddOptionTdd768::theInfo,
	&ULCCTrCHr7TddOptionTdd128::theInfo,
};
const ULCCTrCHr7TddOption::Info ULCCTrCHr7TddOption::theInfo = {
	ULCCTrCHr7TddOption::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *ULCCTrCHr7::itemsInfo[5] = {
	&TFCSIdentityPlain::theInfo,
	&ULTargetSIR::theInfo,
	&TimeInfo::theInfo,
	&CommonTimeslotInfo::theInfo,
	&ULCCTrCHr7TddOption::theInfo,
};
bool ULCCTrCHr7::itemsPres[5] = {
	0,
	1,
	1,
	0,
	1,
};
const ULCCTrCHr7::Info ULCCTrCHr7::theInfo = {
	ULCCTrCHr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 2, 0
};

const void *ULDPCHInfoModeSpecificInfoFdd::itemsInfo[7] = {
	&ScramblingCodeType::theInfo,
	&ULScramblingCode::theInfo,
	&NumberOfDPDCH::theInfo,
	&SpreadingFactor::theInfo,
	&ULDPCHInfoModeSpecificInfoFddTfciExistence::theInfo,
	&NumberOfFBIBits::theInfo,
	&PuncturingLimit::theInfo,
};
bool ULDPCHInfoModeSpecificInfoFdd::itemsPres[7] = {
	1,
	1,
	0,
	1,
	1,
	0,
	1,
};
const ULDPCHInfoModeSpecificInfoFdd::Info ULDPCHInfoModeSpecificInfoFdd::theInfo = {
	ULDPCHInfoModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	7, 2, 0
};

const void *ULTimingAdvanceControlEnabled::itemsInfo[2] = {
	&ULTimingAdvance::theInfo,
	&ActivationTime::theInfo,
};
bool ULTimingAdvanceControlEnabled::itemsPres[2] = {
	0,
	0,
};
const ULTimingAdvanceControlEnabled::Info ULTimingAdvanceControlEnabled::theInfo = {
	ULTimingAdvanceControlEnabled::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *ULTimingAdvanceControl::choicesInfo[2] = {
	&ULTimingAdvanceControlDisabled::theInfo,
	&ULTimingAdvanceControlEnabled::theInfo,
};
const ULTimingAdvanceControl::Info ULTimingAdvanceControl::theInfo = {
	ULTimingAdvanceControl::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULDPCHInfoModeSpecificInfoTdd::itemsInfo[3] = {
	&ULTimingAdvanceControl::theInfo,
	&ULCCTrCHList::theInfo,
	&ULCCTrCHListToRemove::theInfo,
};
bool ULDPCHInfoModeSpecificInfoTdd::itemsPres[3] = {
	0,
	0,
	0,
};
const ULDPCHInfoModeSpecificInfoTdd::Info ULDPCHInfoModeSpecificInfoTdd::theInfo = {
	ULDPCHInfoModeSpecificInfoTdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *ULDPCHInfoModeSpecificInfo::choicesInfo[2] = {
	&ULDPCHInfoModeSpecificInfoFdd::theInfo,
	&ULDPCHInfoModeSpecificInfoTdd::theInfo,
};
const ULDPCHInfoModeSpecificInfo::Info ULDPCHInfoModeSpecificInfo::theInfo = {
	ULDPCHInfoModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULDPCHInfo::itemsInfo[2] = {
	&ULDPCHPowerControlInfo::theInfo,
	&ULDPCHInfoModeSpecificInfo::theInfo,
};
bool ULDPCHInfo::itemsPres[2] = {
	0,
	0,
};
const ULDPCHInfo::Info ULDPCHInfo::theInfo = {
	ULDPCHInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *ULChannelRequirement::choicesInfo[2] = {
	&ULDPCHInfo::theInfo,
	&CPCHSetInfo::theInfo,
};
const ULChannelRequirement::Info ULChannelRequirement::theInfo = {
	ULChannelRequirement::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULDPCHInfor4ModeSpecificInfoFdd::itemsInfo[7] = {
	&ScramblingCodeType::theInfo,
	&ULScramblingCode::theInfo,
	&NumberOfDPDCH::theInfo,
	&SpreadingFactor::theInfo,
	&ULDPCHInfor4ModeSpecificInfoFddTfciExistence::theInfo,
	&NumberOfFBIBits::theInfo,
	&PuncturingLimit::theInfo,
};
bool ULDPCHInfor4ModeSpecificInfoFdd::itemsPres[7] = {
	1,
	1,
	0,
	1,
	1,
	0,
	1,
};
const ULDPCHInfor4ModeSpecificInfoFdd::Info ULDPCHInfor4ModeSpecificInfoFdd::theInfo = {
	ULDPCHInfor4ModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	7, 2, 0
};

const void *ULTimingAdvanceControlr4EnabledTddOptionTdd384::itemsInfo[2] = {
	&ULTimingAdvance::theInfo,
	&ActivationTime::theInfo,
};
bool ULTimingAdvanceControlr4EnabledTddOptionTdd384::itemsPres[2] = {
	0,
	0,
};
const ULTimingAdvanceControlr4EnabledTddOptionTdd384::Info ULTimingAdvanceControlr4EnabledTddOptionTdd384::theInfo = {
	ULTimingAdvanceControlr4EnabledTddOptionTdd384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *ULTimingAdvanceControlr4EnabledTddOptionTdd128::itemsInfo[2] = {
	&ULSynchronisationParametersr4::theInfo,
	&SynchronisationParametersr4::theInfo,
};
bool ULTimingAdvanceControlr4EnabledTddOptionTdd128::itemsPres[2] = {
	0,
	0,
};
const ULTimingAdvanceControlr4EnabledTddOptionTdd128::Info ULTimingAdvanceControlr4EnabledTddOptionTdd128::theInfo = {
	ULTimingAdvanceControlr4EnabledTddOptionTdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *ULTimingAdvanceControlr4EnabledTddOption::choicesInfo[2] = {
	&ULTimingAdvanceControlr4EnabledTddOptionTdd384::theInfo,
	&ULTimingAdvanceControlr4EnabledTddOptionTdd128::theInfo,
};
const ULTimingAdvanceControlr4EnabledTddOption::Info ULTimingAdvanceControlr4EnabledTddOption::theInfo = {
	ULTimingAdvanceControlr4EnabledTddOption::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULTimingAdvanceControlr4Enabled::itemsInfo[1] = {
	&ULTimingAdvanceControlr4EnabledTddOption::theInfo,
};
bool ULTimingAdvanceControlr4Enabled::itemsPres[1] = {
	1,
};
const ULTimingAdvanceControlr4Enabled::Info ULTimingAdvanceControlr4Enabled::theInfo = {
	ULTimingAdvanceControlr4Enabled::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ULTimingAdvanceControlr4::choicesInfo[2] = {
	&ULTimingAdvanceControlr4Disabled::theInfo,
	&ULTimingAdvanceControlr4Enabled::theInfo,
};
const ULTimingAdvanceControlr4::Info ULTimingAdvanceControlr4::theInfo = {
	ULTimingAdvanceControlr4::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULDPCHInfor4ModeSpecificInfoTdd::itemsInfo[3] = {
	&ULTimingAdvanceControlr4::theInfo,
	&ULCCTrCHListr4::theInfo,
	&ULCCTrCHListToRemove::theInfo,
};
bool ULDPCHInfor4ModeSpecificInfoTdd::itemsPres[3] = {
	0,
	0,
	0,
};
const ULDPCHInfor4ModeSpecificInfoTdd::Info ULDPCHInfor4ModeSpecificInfoTdd::theInfo = {
	ULDPCHInfor4ModeSpecificInfoTdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *ULDPCHInfor4ModeSpecificInfo::choicesInfo[2] = {
	&ULDPCHInfor4ModeSpecificInfoFdd::theInfo,
	&ULDPCHInfor4ModeSpecificInfoTdd::theInfo,
};
const ULDPCHInfor4ModeSpecificInfo::Info ULDPCHInfor4ModeSpecificInfo::theInfo = {
	ULDPCHInfor4ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULDPCHInfor4::itemsInfo[2] = {
	&ULDPCHPowerControlInfor4::theInfo,
	&ULDPCHInfor4ModeSpecificInfo::theInfo,
};
bool ULDPCHInfor4::itemsPres[2] = {
	0,
	0,
};
const ULDPCHInfor4::Info ULDPCHInfor4::theInfo = {
	ULDPCHInfor4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *ULChannelRequirementr4::choicesInfo[2] = {
	&ULDPCHInfor4::theInfo,
	&CPCHSetInfo::theInfo,
};
const ULChannelRequirementr4::Info ULChannelRequirementr4::theInfo = {
	ULChannelRequirementr4::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULDPCHInfor5ModeSpecificInfoFdd::itemsInfo[7] = {
	&ScramblingCodeType::theInfo,
	&ULScramblingCode::theInfo,
	&NumberOfDPDCH::theInfo,
	&SpreadingFactor::theInfo,
	&ULDPCHInfor5ModeSpecificInfoFddTfciExistence::theInfo,
	&NumberOfFBIBits::theInfo,
	&PuncturingLimit::theInfo,
};
bool ULDPCHInfor5ModeSpecificInfoFdd::itemsPres[7] = {
	1,
	1,
	0,
	1,
	1,
	0,
	1,
};
const ULDPCHInfor5ModeSpecificInfoFdd::Info ULDPCHInfor5ModeSpecificInfoFdd::theInfo = {
	ULDPCHInfor5ModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	7, 2, 0
};

const void *ULDPCHInfor5ModeSpecificInfoTdd::itemsInfo[3] = {
	&ULTimingAdvanceControlr4::theInfo,
	&ULCCTrCHListr4::theInfo,
	&ULCCTrCHListToRemove::theInfo,
};
bool ULDPCHInfor5ModeSpecificInfoTdd::itemsPres[3] = {
	0,
	0,
	0,
};
const ULDPCHInfor5ModeSpecificInfoTdd::Info ULDPCHInfor5ModeSpecificInfoTdd::theInfo = {
	ULDPCHInfor5ModeSpecificInfoTdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *ULDPCHInfor5ModeSpecificInfo::choicesInfo[2] = {
	&ULDPCHInfor5ModeSpecificInfoFdd::theInfo,
	&ULDPCHInfor5ModeSpecificInfoTdd::theInfo,
};
const ULDPCHInfor5ModeSpecificInfo::Info ULDPCHInfor5ModeSpecificInfo::theInfo = {
	ULDPCHInfor5ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULDPCHInfor5::itemsInfo[2] = {
	&ULDPCHPowerControlInfor5::theInfo,
	&ULDPCHInfor5ModeSpecificInfo::theInfo,
};
bool ULDPCHInfor5::itemsPres[2] = {
	0,
	0,
};
const ULDPCHInfor5::Info ULDPCHInfor5::theInfo = {
	ULDPCHInfor5::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *ULChannelRequirementr5::choicesInfo[2] = {
	&ULDPCHInfor5::theInfo,
	&CPCHSetInfo::theInfo,
};
const ULChannelRequirementr5::Info ULChannelRequirementr5::theInfo = {
	ULChannelRequirementr5::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULChannelRequirementWithCPCHSetID::choicesInfo[3] = {
	&ULDPCHInfo::theInfo,
	&CPCHSetInfo::theInfo,
	&CPCHSetID::theInfo,
};
const ULChannelRequirementWithCPCHSetID::Info ULChannelRequirementWithCPCHSetID::theInfo = {
	ULChannelRequirementWithCPCHSetID::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *ULChannelRequirementWithCPCHSetIDr4::choicesInfo[3] = {
	&ULDPCHInfor4::theInfo,
	&CPCHSetInfo::theInfo,
	&CPCHSetID::theInfo,
};
const ULChannelRequirementWithCPCHSetIDr4::Info ULChannelRequirementWithCPCHSetIDr4::theInfo = {
	ULChannelRequirementWithCPCHSetIDr4::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *ULChannelRequirementWithCPCHSetIDr5::choicesInfo[3] = {
	&ULDPCHInfor5::theInfo,
	&CPCHSetInfo::theInfo,
	&CPCHSetID::theInfo,
};
const ULChannelRequirementWithCPCHSetIDr5::Info ULChannelRequirementWithCPCHSetIDr5::theInfo = {
	ULChannelRequirementWithCPCHSetIDr5::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *ULDPCHPowerControlInfor6Fdd::itemsInfo[8] = {
	&DPCCHPowerOffset::theInfo,
	&PCPreamble::theInfo,
	&SRBdelay::theInfo,
	&PowerControlAlgorithm::theInfo,
	&DeltaACK::theInfo,
	&DeltaNACK::theInfo,
	&ACKNACKrepetitionFactor::theInfo,
	&HARQPreambleMode::theInfo,
};
bool ULDPCHPowerControlInfor6Fdd::itemsPres[8] = {
	1,
	1,
	1,
	1,
	0,
	0,
	0,
	1,
};
const ULDPCHPowerControlInfor6Fdd::Info ULDPCHPowerControlInfor6Fdd::theInfo = {
	ULDPCHPowerControlInfor6Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	8, 3, 0
};

const void *ULDPCHPowerControlInfor6TddUlOLPCSignallingIndividuallySignalledTddOptionTdd384::itemsInfo[2] = {
	&IndividualTSInterferenceList::theInfo,
	&ConstantValue::theInfo,
};
bool ULDPCHPowerControlInfor6TddUlOLPCSignallingIndividuallySignalledTddOptionTdd384::itemsPres[2] = {
	1,
	1,
};
const ULDPCHPowerControlInfor6TddUlOLPCSignallingIndividuallySignalledTddOptionTdd384::Info ULDPCHPowerControlInfor6TddUlOLPCSignallingIndividuallySignalledTddOptionTdd384::theInfo = {
	ULDPCHPowerControlInfor6TddUlOLPCSignallingIndividuallySignalledTddOptionTdd384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *ULDPCHPowerControlInfor6TddUlOLPCSignallingIndividuallySignalledTddOptionTdd128::itemsInfo[2] = {
	&BEACONPLEst::theInfo,
	&TPCStepSizeTDD::theInfo,
};
bool ULDPCHPowerControlInfor6TddUlOLPCSignallingIndividuallySignalledTddOptionTdd128::itemsPres[2] = {
	0,
	1,
};
const ULDPCHPowerControlInfor6TddUlOLPCSignallingIndividuallySignalledTddOptionTdd128::Info ULDPCHPowerControlInfor6TddUlOLPCSignallingIndividuallySignalledTddOptionTdd128::theInfo = {
	ULDPCHPowerControlInfor6TddUlOLPCSignallingIndividuallySignalledTddOptionTdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *ULDPCHPowerControlInfor6TddUlOLPCSignallingIndividuallySignalledTddOption::choicesInfo[2] = {
	&ULDPCHPowerControlInfor6TddUlOLPCSignallingIndividuallySignalledTddOptionTdd384::theInfo,
	&ULDPCHPowerControlInfor6TddUlOLPCSignallingIndividuallySignalledTddOptionTdd128::theInfo,
};
const ULDPCHPowerControlInfor6TddUlOLPCSignallingIndividuallySignalledTddOption::Info ULDPCHPowerControlInfor6TddUlOLPCSignallingIndividuallySignalledTddOption::theInfo = {
	ULDPCHPowerControlInfor6TddUlOLPCSignallingIndividuallySignalledTddOption::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULDPCHPowerControlInfor6TddUlOLPCSignallingIndividuallySignalled::itemsInfo[2] = {
	&ULDPCHPowerControlInfor6TddUlOLPCSignallingIndividuallySignalledTddOption::theInfo,
	&PrimaryCCPCHTXPower::theInfo,
};
bool ULDPCHPowerControlInfor6TddUlOLPCSignallingIndividuallySignalled::itemsPres[2] = {
	1,
	1,
};
const ULDPCHPowerControlInfor6TddUlOLPCSignallingIndividuallySignalled::Info ULDPCHPowerControlInfor6TddUlOLPCSignallingIndividuallySignalled::theInfo = {
	ULDPCHPowerControlInfor6TddUlOLPCSignallingIndividuallySignalled::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *ULDPCHPowerControlInfor6TddUlOLPCSignalling::choicesInfo[2] = {
	&ULDPCHPowerControlInfor6TddUlOLPCSignallingBroadcastULOLPCinfo::theInfo,
	&ULDPCHPowerControlInfor6TddUlOLPCSignallingIndividuallySignalled::theInfo,
};
const ULDPCHPowerControlInfor6TddUlOLPCSignalling::Info ULDPCHPowerControlInfor6TddUlOLPCSignalling::theInfo = {
	ULDPCHPowerControlInfor6TddUlOLPCSignalling::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULDPCHPowerControlInfor6Tdd::itemsInfo[2] = {
	&ULTargetSIR::theInfo,
	&ULDPCHPowerControlInfor6TddUlOLPCSignalling::theInfo,
};
bool ULDPCHPowerControlInfor6Tdd::itemsPres[2] = {
	0,
	1,
};
const ULDPCHPowerControlInfor6Tdd::Info ULDPCHPowerControlInfor6Tdd::theInfo = {
	ULDPCHPowerControlInfor6Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *ULDPCHPowerControlInfor6::choicesInfo[2] = {
	&ULDPCHPowerControlInfor6Fdd::theInfo,
	&ULDPCHPowerControlInfor6Tdd::theInfo,
};
const ULDPCHPowerControlInfor6::Info ULDPCHPowerControlInfor6::theInfo = {
	ULDPCHPowerControlInfor6::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULDPCHInfor6ModeSpecificInfoFddDpdchPresencePresent::itemsInfo[5] = {
	&NumberOfDPDCH::theInfo,
	&SpreadingFactor::theInfo,
	&ULDPCHInfor6ModeSpecificInfoFddDpdchPresencePresentTfciExistence::theInfo,
	&NumberOfFBIBits::theInfo,
	&PuncturingLimit::theInfo,
};
bool ULDPCHInfor6ModeSpecificInfoFddDpdchPresencePresent::itemsPres[5] = {
	0,
	1,
	1,
	0,
	1,
};
const ULDPCHInfor6ModeSpecificInfoFddDpdchPresencePresent::Info ULDPCHInfor6ModeSpecificInfoFddDpdchPresencePresent::theInfo = {
	ULDPCHInfor6ModeSpecificInfoFddDpdchPresencePresent::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 2, 0
};

const void *ULDPCHInfor6ModeSpecificInfoFddDpdchPresenceNotPresent::itemsInfo[2] = {
	&ULDPCHInfor6ModeSpecificInfoFddDpdchPresenceNotPresentTfciExistence::theInfo,
	&NumberOfFBIBits::theInfo,
};
bool ULDPCHInfor6ModeSpecificInfoFddDpdchPresenceNotPresent::itemsPres[2] = {
	1,
	0,
};
const ULDPCHInfor6ModeSpecificInfoFddDpdchPresenceNotPresent::Info ULDPCHInfor6ModeSpecificInfoFddDpdchPresenceNotPresent::theInfo = {
	ULDPCHInfor6ModeSpecificInfoFddDpdchPresenceNotPresent::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *ULDPCHInfor6ModeSpecificInfoFddDpdchPresence::choicesInfo[2] = {
	&ULDPCHInfor6ModeSpecificInfoFddDpdchPresencePresent::theInfo,
	&ULDPCHInfor6ModeSpecificInfoFddDpdchPresenceNotPresent::theInfo,
};
const ULDPCHInfor6ModeSpecificInfoFddDpdchPresence::Info ULDPCHInfor6ModeSpecificInfoFddDpdchPresence::theInfo = {
	ULDPCHInfor6ModeSpecificInfoFddDpdchPresence::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULDPCHInfor6ModeSpecificInfoFdd::itemsInfo[3] = {
	&ScramblingCodeType::theInfo,
	&ULScramblingCode::theInfo,
	&ULDPCHInfor6ModeSpecificInfoFddDpdchPresence::theInfo,
};
bool ULDPCHInfor6ModeSpecificInfoFdd::itemsPres[3] = {
	1,
	1,
	0,
};
const ULDPCHInfor6ModeSpecificInfoFdd::Info ULDPCHInfor6ModeSpecificInfoFdd::theInfo = {
	ULDPCHInfor6ModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};

const void *ULDPCHInfor6ModeSpecificInfoTdd::itemsInfo[3] = {
	&ULTimingAdvanceControlr4::theInfo,
	&ULCCTrCHListr4::theInfo,
	&ULCCTrCHListToRemove::theInfo,
};
bool ULDPCHInfor6ModeSpecificInfoTdd::itemsPres[3] = {
	0,
	0,
	0,
};
const ULDPCHInfor6ModeSpecificInfoTdd::Info ULDPCHInfor6ModeSpecificInfoTdd::theInfo = {
	ULDPCHInfor6ModeSpecificInfoTdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *ULDPCHInfor6ModeSpecificInfo::choicesInfo[2] = {
	&ULDPCHInfor6ModeSpecificInfoFdd::theInfo,
	&ULDPCHInfor6ModeSpecificInfoTdd::theInfo,
};
const ULDPCHInfor6ModeSpecificInfo::Info ULDPCHInfor6ModeSpecificInfo::theInfo = {
	ULDPCHInfor6ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULDPCHInfor6::itemsInfo[2] = {
	&ULDPCHPowerControlInfor6::theInfo,
	&ULDPCHInfor6ModeSpecificInfo::theInfo,
};
bool ULDPCHInfor6::itemsPres[2] = {
	0,
	0,
};
const ULDPCHInfor6::Info ULDPCHInfor6::theInfo = {
	ULDPCHInfor6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *ULDPCHInfor7ModeSpecificInfoFddDpdchPresencePresent::itemsInfo[6] = {
	&NumberOfDPDCH::theInfo,
	&SpreadingFactor::theInfo,
	&ULDPCHInfor7ModeSpecificInfoFddDpdchPresencePresentTfciExistence::theInfo,
	&NumberOfFBIBits::theInfo,
	&NumberOfTPCBits::theInfo,
	&PuncturingLimit::theInfo,
};
bool ULDPCHInfor7ModeSpecificInfoFddDpdchPresencePresent::itemsPres[6] = {
	0,
	1,
	1,
	0,
	0,
	1,
};
const ULDPCHInfor7ModeSpecificInfoFddDpdchPresencePresent::Info ULDPCHInfor7ModeSpecificInfoFddDpdchPresencePresent::theInfo = {
	ULDPCHInfor7ModeSpecificInfoFddDpdchPresencePresent::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 3, 0
};

const void *ULDPCHInfor7ModeSpecificInfoFddDpdchPresenceNotPresent::itemsInfo[3] = {
	&ULDPCHInfor7ModeSpecificInfoFddDpdchPresenceNotPresentTfciExistence::theInfo,
	&NumberOfFBIBits::theInfo,
	&NumberOfTPCBits::theInfo,
};
bool ULDPCHInfor7ModeSpecificInfoFddDpdchPresenceNotPresent::itemsPres[3] = {
	1,
	0,
	0,
};
const ULDPCHInfor7ModeSpecificInfoFddDpdchPresenceNotPresent::Info ULDPCHInfor7ModeSpecificInfoFddDpdchPresenceNotPresent::theInfo = {
	ULDPCHInfor7ModeSpecificInfoFddDpdchPresenceNotPresent::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *ULDPCHInfor7ModeSpecificInfoFddDpdchPresence::choicesInfo[2] = {
	&ULDPCHInfor7ModeSpecificInfoFddDpdchPresencePresent::theInfo,
	&ULDPCHInfor7ModeSpecificInfoFddDpdchPresenceNotPresent::theInfo,
};
const ULDPCHInfor7ModeSpecificInfoFddDpdchPresence::Info ULDPCHInfor7ModeSpecificInfoFddDpdchPresence::theInfo = {
	ULDPCHInfor7ModeSpecificInfoFddDpdchPresence::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULDPCHInfor7ModeSpecificInfoFdd::itemsInfo[3] = {
	&ScramblingCodeType::theInfo,
	&ULScramblingCode::theInfo,
	&ULDPCHInfor7ModeSpecificInfoFddDpdchPresence::theInfo,
};
bool ULDPCHInfor7ModeSpecificInfoFdd::itemsPres[3] = {
	1,
	1,
	0,
};
const ULDPCHInfor7ModeSpecificInfoFdd::Info ULDPCHInfor7ModeSpecificInfoFdd::theInfo = {
	ULDPCHInfor7ModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};

const void *ULTimingAdvanceControlr7EnabledTddOptionTdd384::itemsInfo[3] = {
	&ULTimingAdvance::theInfo,
	&EXTULTimingAdvance::theInfo,
	&ActivationTime::theInfo,
};
bool ULTimingAdvanceControlr7EnabledTddOptionTdd384::itemsPres[3] = {
	0,
	0,
	0,
};
const ULTimingAdvanceControlr7EnabledTddOptionTdd384::Info ULTimingAdvanceControlr7EnabledTddOptionTdd384::theInfo = {
	ULTimingAdvanceControlr7EnabledTddOptionTdd384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *ULTimingAdvanceControlr7EnabledTddOptionTdd768::itemsInfo[2] = {
	&EXTULTimingAdvance::theInfo,
	&ActivationTime::theInfo,
};
bool ULTimingAdvanceControlr7EnabledTddOptionTdd768::itemsPres[2] = {
	0,
	0,
};
const ULTimingAdvanceControlr7EnabledTddOptionTdd768::Info ULTimingAdvanceControlr7EnabledTddOptionTdd768::theInfo = {
	ULTimingAdvanceControlr7EnabledTddOptionTdd768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *ULTimingAdvanceControlr7EnabledTddOptionTdd128::itemsInfo[2] = {
	&ULSynchronisationParametersr4::theInfo,
	&SynchronisationParametersr4::theInfo,
};
bool ULTimingAdvanceControlr7EnabledTddOptionTdd128::itemsPres[2] = {
	0,
	0,
};
const ULTimingAdvanceControlr7EnabledTddOptionTdd128::Info ULTimingAdvanceControlr7EnabledTddOptionTdd128::theInfo = {
	ULTimingAdvanceControlr7EnabledTddOptionTdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *ULTimingAdvanceControlr7EnabledTddOption::choicesInfo[3] = {
	&ULTimingAdvanceControlr7EnabledTddOptionTdd384::theInfo,
	&ULTimingAdvanceControlr7EnabledTddOptionTdd768::theInfo,
	&ULTimingAdvanceControlr7EnabledTddOptionTdd128::theInfo,
};
const ULTimingAdvanceControlr7EnabledTddOption::Info ULTimingAdvanceControlr7EnabledTddOption::theInfo = {
	ULTimingAdvanceControlr7EnabledTddOption::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *ULTimingAdvanceControlr7Enabled::itemsInfo[1] = {
	&ULTimingAdvanceControlr7EnabledTddOption::theInfo,
};
bool ULTimingAdvanceControlr7Enabled::itemsPres[1] = {
	1,
};
const ULTimingAdvanceControlr7Enabled::Info ULTimingAdvanceControlr7Enabled::theInfo = {
	ULTimingAdvanceControlr7Enabled::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ULTimingAdvanceControlr7::choicesInfo[2] = {
	&ULTimingAdvanceControlr7Disabled::theInfo,
	&ULTimingAdvanceControlr7Enabled::theInfo,
};
const ULTimingAdvanceControlr7::Info ULTimingAdvanceControlr7::theInfo = {
	ULTimingAdvanceControlr7::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULDPCHInfor7ModeSpecificInfoTdd::itemsInfo[3] = {
	&ULTimingAdvanceControlr7::theInfo,
	&ULCCTrCHListr7::theInfo,
	&ULCCTrCHListToRemove::theInfo,
};
bool ULDPCHInfor7ModeSpecificInfoTdd::itemsPres[3] = {
	0,
	0,
	0,
};
const ULDPCHInfor7ModeSpecificInfoTdd::Info ULDPCHInfor7ModeSpecificInfoTdd::theInfo = {
	ULDPCHInfor7ModeSpecificInfoTdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *ULDPCHInfor7ModeSpecificInfo::choicesInfo[2] = {
	&ULDPCHInfor7ModeSpecificInfoFdd::theInfo,
	&ULDPCHInfor7ModeSpecificInfoTdd::theInfo,
};
const ULDPCHInfor7ModeSpecificInfo::Info ULDPCHInfor7ModeSpecificInfo::theInfo = {
	ULDPCHInfor7ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULDPCHInfor7::itemsInfo[2] = {
	&ULDPCHPowerControlInfor7::theInfo,
	&ULDPCHInfor7ModeSpecificInfo::theInfo,
};
bool ULDPCHInfor7::itemsPres[2] = {
	0,
	0,
};
const ULDPCHInfor7::Info ULDPCHInfor7::theInfo = {
	ULDPCHInfor7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *ULDPCHPowerControlInfoPostFDD::itemsInfo[3] = {
	&DPCCHPowerOffset2::theInfo,
	&PCPreamble::theInfo,
	&SRBdelay::theInfo,
};
bool ULDPCHPowerControlInfoPostFDD::itemsPres[3] = {
	1,
	1,
	1,
};
const ULDPCHPowerControlInfoPostFDD::Info ULDPCHPowerControlInfoPostFDD::theInfo = {
	ULDPCHPowerControlInfoPostFDD::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *ULDPCHInfoPostFDD::itemsInfo[4] = {
	&ULDPCHPowerControlInfoPostFDD::theInfo,
	&ScramblingCodeType::theInfo,
	&ReducedScramblingCodeNumber::theInfo,
	&SpreadingFactor::theInfo,
};
bool ULDPCHInfoPostFDD::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const ULDPCHInfoPostFDD::Info ULDPCHInfoPostFDD::theInfo = {
	ULDPCHInfoPostFDD::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 0, 0
};

const void *ULDPCHPowerControlInfoPostTDD::itemsInfo[2] = {
	&ULTargetSIR::theInfo,
	&TDDULInterference::theInfo,
};
bool ULDPCHPowerControlInfoPostTDD::itemsPres[2] = {
	1,
	1,
};
const ULDPCHPowerControlInfoPostTDD::Info ULDPCHPowerControlInfoPostTDD::theInfo = {
	ULDPCHPowerControlInfoPostTDD::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *ULDPCHInfoPostTDD::itemsInfo[3] = {
	&ULDPCHPowerControlInfoPostTDD::theInfo,
	&ULTimingAdvanceControl::theInfo,
	&UplinkTimeslotsCodes::theInfo,
};
bool ULDPCHInfoPostTDD::itemsPres[3] = {
	1,
	0,
	1,
};
const ULDPCHInfoPostTDD::Info ULDPCHInfoPostTDD::theInfo = {
	ULDPCHInfoPostTDD::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
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

const void *ULTimingAdvanceControlLCRr4Enabled::itemsInfo[2] = {
	&ULSynchronisationParametersr4::theInfo,
	&SynchronisationParametersr4::theInfo,
};
bool ULTimingAdvanceControlLCRr4Enabled::itemsPres[2] = {
	0,
	0,
};
const ULTimingAdvanceControlLCRr4Enabled::Info ULTimingAdvanceControlLCRr4Enabled::theInfo = {
	ULTimingAdvanceControlLCRr4Enabled::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *ULTimingAdvanceControlLCRr4::choicesInfo[2] = {
	&ULTimingAdvanceControlLCRr4Disabled::theInfo,
	&ULTimingAdvanceControlLCRr4Enabled::theInfo,
};
const ULTimingAdvanceControlLCRr4::Info ULTimingAdvanceControlLCRr4::theInfo = {
	ULTimingAdvanceControlLCRr4::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULDPCHInfoPostTDDLCRr4::itemsInfo[3] = {
	&ULDPCHPowerControlInfoPostTDDLCRr4::theInfo,
	&ULTimingAdvanceControlLCRr4::theInfo,
	&UplinkTimeslotsCodesLCRr4::theInfo,
};
bool ULDPCHInfoPostTDDLCRr4::itemsPres[3] = {
	1,
	0,
	1,
};
const ULDPCHInfoPostTDDLCRr4::Info ULDPCHInfoPostTDDLCRr4::theInfo = {
	ULDPCHInfoPostTDDLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};

const void *ULEDCHInformationextTdd::itemsInfo[1] = {
	&NonScheduledTransGrantInfoTDDext::theInfo,
};
bool ULEDCHInformationextTdd::itemsPres[1] = {
	0,
};
const ULEDCHInformationextTdd::Info ULEDCHInformationextTdd::theInfo = {
	ULEDCHInformationextTdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ULEDCHInformationext::choicesInfo[2] = {
	&ULEDCHInformationextFdd::theInfo,
	&ULEDCHInformationextTdd::theInfo,
};
const ULEDCHInformationext::Info ULEDCHInformationext::theInfo = {
	ULEDCHInformationext::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULEDCHInformationr6::itemsInfo[4] = {
	&ULEDCHInformationr6mac_es_e_resetIndicator::theInfo,
	&EDPCCHInfo::theInfo,
	&EDPDCHInfo::theInfo,
	&EDPDCHSchedulingTransmConfiguration::theInfo,
};
bool ULEDCHInformationr6::itemsPres[4] = {
	0,
	0,
	0,
	0,
};
const ULEDCHInformationr6::Info ULEDCHInformationr6::theInfo = {
	ULEDCHInformationr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 4, 0
};

const void *ULEDCHInformationr7ModeSpecificInfoFdd::itemsInfo[4] = {
	&EDPCCHInfor7::theInfo,
	&EDPDCHInfor7::theInfo,
	&EDPDCHSchedulingTransmConfiguration::theInfo,
	&UL16QAMSettings::theInfo,
};
bool ULEDCHInformationr7ModeSpecificInfoFdd::itemsPres[4] = {
	0,
	0,
	0,
	0,
};
const ULEDCHInformationr7ModeSpecificInfoFdd::Info ULEDCHInformationr7ModeSpecificInfoFdd::theInfo = {
	ULEDCHInformationr7ModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 4, 0
};

const void *ULEDCHInformationr7ModeSpecificInfoTdd::itemsInfo[3] = {
	&ERUCCHInfo::theInfo,
	&EPUCHInfo::theInfo,
	&NonScheduledTransGrantInfoTDD::theInfo,
};
bool ULEDCHInformationr7ModeSpecificInfoTdd::itemsPres[3] = {
	0,
	0,
	0,
};
const ULEDCHInformationr7ModeSpecificInfoTdd::Info ULEDCHInformationr7ModeSpecificInfoTdd::theInfo = {
	ULEDCHInformationr7ModeSpecificInfoTdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *ULEDCHInformationr7ModeSpecificInfo::choicesInfo[2] = {
	&ULEDCHInformationr7ModeSpecificInfoFdd::theInfo,
	&ULEDCHInformationr7ModeSpecificInfoTdd::theInfo,
};
const ULEDCHInformationr7ModeSpecificInfo::Info ULEDCHInformationr7ModeSpecificInfo::theInfo = {
	ULEDCHInformationr7ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULEDCHInformationr7::itemsInfo[2] = {
	&ULEDCHInformationr7mac_es_e_resetIndicator::theInfo,
	&ULEDCHInformationr7ModeSpecificInfo::theInfo,
};
bool ULEDCHInformationr7::itemsPres[2] = {
	0,
	1,
};
const ULEDCHInformationr7::Info ULEDCHInformationr7::theInfo = {
	ULEDCHInformationr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *ExtraDopplerInfo::itemsInfo[2] = {
	&ExtraDopplerInfoDoppler1stOrder::theInfo,
	&DopplerUncertainty::theInfo,
};
bool ExtraDopplerInfo::itemsPres[2] = {
	1,
	1,
};
const ExtraDopplerInfo::Info ExtraDopplerInfo::theInfo = {
	ExtraDopplerInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *AzimuthAndElevation::itemsInfo[2] = {
	&AzimuthAndElevationAzimuth::theInfo,
	&AzimuthAndElevationElevation::theInfo,
};
bool AzimuthAndElevation::itemsPres[2] = {
	1,
	1,
};
const AzimuthAndElevation::Info AzimuthAndElevation::theInfo = {
	AzimuthAndElevation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *AcquisitionSatInfo::itemsInfo[8] = {
	&SatID::theInfo,
	&AcquisitionSatInfoDoppler0thOrder::theInfo,
	&ExtraDopplerInfo::theInfo,
	&AcquisitionSatInfoCodePhase::theInfo,
	&AcquisitionSatInfoIntegerCodePhase::theInfo,
	&AcquisitionSatInfoGpsBitNumber::theInfo,
	&CodePhaseSearchWindow::theInfo,
	&AzimuthAndElevation::theInfo,
};
bool AcquisitionSatInfo::itemsPres[8] = {
	1,
	1,
	0,
	1,
	1,
	1,
	1,
	0,
};
const AcquisitionSatInfo::Info AcquisitionSatInfo::theInfo = {
	AcquisitionSatInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	8, 2, 0
};

const void *AlmanacSatInfo::itemsInfo[13] = {
	&AlmanacSatInfoDataID::theInfo,
	&SatID::theInfo,
	&AlmanacSatInfoE::theInfo,
	&AlmanacSatInfoToa::theInfo,
	&AlmanacSatInfoDeltaI::theInfo,
	&AlmanacSatInfoOmegaDot::theInfo,
	&AlmanacSatInfoSatHealth::theInfo,
	&AlmanacSatInfoASqrt::theInfo,
	&AlmanacSatInfoOmega0::theInfo,
	&AlmanacSatInfoM0::theInfo,
	&AlmanacSatInfoOmega::theInfo,
	&AlmanacSatInfoAf0::theInfo,
	&AlmanacSatInfoAf1::theInfo,
};
bool AlmanacSatInfo::itemsPres[13] = {
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
const AlmanacSatInfo::Info AlmanacSatInfo::theInfo = {
	AlmanacSatInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	13, 0, 0
};

const void *GANSSSATInfoAlmanacSBASecef::itemsInfo[10] = {
	&GANSSSATInfoAlmanacSBASecefSbasAlmDataID::theInfo,
	&GANSSSATInfoAlmanacSBASecefSvID::theInfo,
	&GANSSSATInfoAlmanacSBASecefSbasAlmHealth::theInfo,
	&GANSSSATInfoAlmanacSBASecefSbasAlmXg::theInfo,
	&GANSSSATInfoAlmanacSBASecefSbasAlmYg::theInfo,
	&GANSSSATInfoAlmanacSBASecefSbasAlmZg::theInfo,
	&GANSSSATInfoAlmanacSBASecefSbasAlmXgdot::theInfo,
	&GANSSSATInfoAlmanacSBASecefSbasAlmYgDot::theInfo,
	&GANSSSATInfoAlmanacSBASecefSbasAlmZgDot::theInfo,
	&GANSSSATInfoAlmanacSBASecefSbasAlmTo::theInfo,
};
bool GANSSSATInfoAlmanacSBASecef::itemsPres[10] = {
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
const GANSSSATInfoAlmanacSBASecef::Info GANSSSATInfoAlmanacSBASecef::theInfo = {
	GANSSSATInfoAlmanacSBASecef::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	10, 0, 0
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

const void *GANSSSATInfoAlmanacGLOkp::itemsInfo[13] = {
	&GANSSSATInfoAlmanacGLOkpGloAlmNA::theInfo,
	&GANSSSATInfoAlmanacGLOkpGloAlmnA::theInfo,
	&GANSSSATInfoAlmanacGLOkpGloAlmHA::theInfo,
	&GANSSSATInfoAlmanacGLOkpGloAlmLambdaA::theInfo,
	&GANSSSATInfoAlmanacGLOkpGloAlmTlambdaA::theInfo,
	&GANSSSATInfoAlmanacGLOkpGloAlmDeltaIA::theInfo,
	&GANSSSATInfoAlmanacGLOkpGloAkmDeltaTA::theInfo,
	&GANSSSATInfoAlmanacGLOkpGloAlmDeltaTdotA::theInfo,
	&GANSSSATInfoAlmanacGLOkpGloAlmEpsilonA::theInfo,
	&GANSSSATInfoAlmanacGLOkpGloAlmOmegaA::theInfo,
	&GANSSSATInfoAlmanacGLOkpGloAlmTauA::theInfo,
	&GANSSSATInfoAlmanacGLOkpGloAlmCA::theInfo,
	&GANSSSATInfoAlmanacGLOkpGloAlmMA::theInfo,
};
bool GANSSSATInfoAlmanacGLOkp::itemsPres[13] = {
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
	0,
};
const GANSSSATInfoAlmanacGLOkp::Info GANSSSATInfoAlmanacGLOkp::theInfo = {
	GANSSSATInfoAlmanacGLOkp::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	13, 1, 0
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

const void *GANSSSATInfoAlmanacKp::itemsInfo[11] = {
	&GANSSSATInfoAlmanacKpSvId::theInfo,
	&GANSSSATInfoAlmanacKpGanssalme::theInfo,
	&GANSSSATInfoAlmanacKpGanssdeltaIalm::theInfo,
	&GANSSSATInfoAlmanacKpGanssomegadotalm::theInfo,
	&GANSSSATInfoAlmanacKpGansssvhealthalm::theInfo,
	&GANSSSATInfoAlmanacKpGanssdeltaasqrtalm::theInfo,
	&GANSSSATInfoAlmanacKpGanssomegazeroalm::theInfo,
	&GANSSSATInfoAlmanacKpGanssmzeroalm::theInfo,
	&GANSSSATInfoAlmanacKpGanssomegaalm::theInfo,
	&GANSSSATInfoAlmanacKpGanssafzeroalm::theInfo,
	&GANSSSATInfoAlmanacKpGanssafonealm::theInfo,
};
bool GANSSSATInfoAlmanacKp::itemsPres[11] = {
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
const GANSSSATInfoAlmanacKp::Info GANSSSATInfoAlmanacKp::theInfo = {
	GANSSSATInfoAlmanacKp::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	11, 0, 0
};

const void *ALMkeplerianParameters::itemsInfo[3] = {
	&ALMkeplerianParametersToa::theInfo,
	&ALMkeplerianParametersIoda::theInfo,
	&GANSSSATInfoAlmanacKpList::theInfo,
};
bool ALMkeplerianParameters::itemsPres[3] = {
	1,
	1,
	1,
};
const ALMkeplerianParameters::Info ALMkeplerianParameters::theInfo = {
	ALMkeplerianParameters::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *GANSSSATInfoAlmanacMIDIkp::itemsInfo[13] = {
	&GANSSSATInfoAlmanacMIDIkpSvID::theInfo,
	&GANSSSATInfoAlmanacMIDIkpMidiAlmE::theInfo,
	&GANSSSATInfoAlmanacMIDIkpMidiAlmDeltaI::theInfo,
	&GANSSSATInfoAlmanacMIDIkpMidiAlmOmegaDot::theInfo,
	&GANSSSATInfoAlmanacMIDIkpMidiAlmSqrtA::theInfo,
	&GANSSSATInfoAlmanacMIDIkpMidiAlmOmega0::theInfo,
	&GANSSSATInfoAlmanacMIDIkpMidiAlmOmega::theInfo,
	&GANSSSATInfoAlmanacMIDIkpMidiAlmMo::theInfo,
	&GANSSSATInfoAlmanacMIDIkpMidiAlmaf0::theInfo,
	&GANSSSATInfoAlmanacMIDIkpMidiAlmaf1::theInfo,
	&GANSSSATInfoAlmanacMIDIkpMidiAlmL1Health::theInfo,
	&GANSSSATInfoAlmanacMIDIkpMidiAlmL2Health::theInfo,
	&GANSSSATInfoAlmanacMIDIkpMidiAlmL5Health::theInfo,
};
bool GANSSSATInfoAlmanacMIDIkp::itemsPres[13] = {
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
const GANSSSATInfoAlmanacMIDIkp::Info GANSSSATInfoAlmanacMIDIkp::theInfo = {
	GANSSSATInfoAlmanacMIDIkp::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	13, 0, 0
};

const void *ALMMidiAlmanacSet::itemsInfo[2] = {
	&ALMMidiAlmanacSetToa::theInfo,
	&GANSSSATInfoAlmanacMIDIkpList::theInfo,
};
bool ALMMidiAlmanacSet::itemsPres[2] = {
	1,
	1,
};
const ALMMidiAlmanacSet::Info ALMMidiAlmanacSet::theInfo = {
	ALMMidiAlmanacSet::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *GANSSSATInfoAlmanacNAVkp::itemsInfo[11] = {
	&GANSSSATInfoAlmanacNAVkpSvID::theInfo,
	&GANSSSATInfoAlmanacNAVkpNavAlmE::theInfo,
	&GANSSSATInfoAlmanacNAVkpNavAlmDeltaI::theInfo,
	&GANSSSATInfoAlmanacNAVkpNavAlmOMEGADOT::theInfo,
	&GANSSSATInfoAlmanacNAVkpNavAlmSVHealth::theInfo,
	&GANSSSATInfoAlmanacNAVkpNavAlmSqrtA::theInfo,
	&GANSSSATInfoAlmanacNAVkpNavAlmOMEGAo::theInfo,
	&GANSSSATInfoAlmanacNAVkpNavAlmOmega::theInfo,
	&GANSSSATInfoAlmanacNAVkpNavAlmMo::theInfo,
	&GANSSSATInfoAlmanacNAVkpNavAlmaf0::theInfo,
	&GANSSSATInfoAlmanacNAVkpNavAlmaf1::theInfo,
};
bool GANSSSATInfoAlmanacNAVkp::itemsPres[11] = {
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
const GANSSSATInfoAlmanacNAVkp::Info GANSSSATInfoAlmanacNAVkp::theInfo = {
	GANSSSATInfoAlmanacNAVkp::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	11, 0, 0
};

const void *ALMNAVKeplerianSet::itemsInfo[2] = {
	&ALMNAVKeplerianSetToa::theInfo,
	&GANSSSATInfoAlmanacNAVkpList::theInfo,
};
bool ALMNAVKeplerianSet::itemsPres[2] = {
	1,
	1,
};
const ALMNAVKeplerianSet::Info ALMNAVKeplerianSet::theInfo = {
	ALMNAVKeplerianSet::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *GANSSSATInfoAlmanacREDkp::itemsInfo[7] = {
	&GANSSSATInfoAlmanacREDkpSvID::theInfo,
	&GANSSSATInfoAlmanacREDkpRedAlmDeltaA::theInfo,
	&GANSSSATInfoAlmanacREDkpRedAlmOmega0::theInfo,
	&GANSSSATInfoAlmanacREDkpRedAlmPhi0::theInfo,
	&GANSSSATInfoAlmanacREDkpRedAlmL1Health::theInfo,
	&GANSSSATInfoAlmanacREDkpRedAlmL2Health::theInfo,
	&GANSSSATInfoAlmanacREDkpRedAlmL5Health::theInfo,
};
bool GANSSSATInfoAlmanacREDkp::itemsPres[7] = {
	1,
	1,
	1,
	1,
	1,
	1,
	1,
};
const GANSSSATInfoAlmanacREDkp::Info GANSSSATInfoAlmanacREDkp::theInfo = {
	GANSSSATInfoAlmanacREDkp::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	7, 0, 0
};

const void *ALMReducedKeplerianSet::itemsInfo[2] = {
	&ALMReducedKeplerianSetToa::theInfo,
	&GANSSSATInfoAlmanacREDkpList::theInfo,
};
bool ALMReducedKeplerianSet::itemsPres[2] = {
	1,
	1,
};
const ALMReducedKeplerianSet::Info ALMReducedKeplerianSet::theInfo = {
	ALMReducedKeplerianSet::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *AuxInfoGANSSID1element::itemsInfo[2] = {
	&AuxInfoGANSSID1elementSvID::theInfo,
	&AuxInfoGANSSID1elementSignalsAvailable::theInfo,
};
bool AuxInfoGANSSID1element::itemsPres[2] = {
	1,
	1,
};
const AuxInfoGANSSID1element::Info AuxInfoGANSSID1element::theInfo = {
	AuxInfoGANSSID1element::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *AuxInfoGANSSID3element::itemsInfo[3] = {
	&AuxInfoGANSSID3elementSvID::theInfo,
	&AuxInfoGANSSID3elementSignalsAvailable::theInfo,
	&AuxInfoGANSSID3elementChannelNumber::theInfo,
};
bool AuxInfoGANSSID3element::itemsPres[3] = {
	1,
	1,
	1,
};
const AuxInfoGANSSID3element::Info AuxInfoGANSSID3element::theInfo = {
	AuxInfoGANSSID3element::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *BLERMeasurementResults::itemsInfo[2] = {
	&TransportChannelIdentity::theInfo,
	&DLTransportChannelBLER::theInfo,
};
bool BLERMeasurementResults::itemsPres[2] = {
	1,
	0,
};
const BLERMeasurementResults::Info BLERMeasurementResults::theInfo = {
	BLERMeasurementResults::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *BSICReported::choicesInfo[2] = {
	&BSICReportedVerifiedBSIC::theInfo,
	&BCCHARFCN::theInfo,
};
const BSICReported::Info BSICReported::theInfo = {
	BSICReported::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *BurstModeParameters::itemsInfo[3] = {
	&BurstModeParametersBurstStart::theInfo,
	&BurstModeParametersBurstLength::theInfo,
	&BurstModeParametersBurstFreq::theInfo,
};
bool BurstModeParameters::itemsPres[3] = {
	1,
	1,
	1,
};
const BurstModeParameters::Info BurstModeParameters::theInfo = {
	BurstModeParameters::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *ForbiddenAffectCell::choicesInfo[2] = {
	&PrimaryCPICHInfo::theInfo,
	&PrimaryCCPCHInfo::theInfo,
};
const ForbiddenAffectCell::Info ForbiddenAffectCell::theInfo = {
	ForbiddenAffectCell::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Event1a::itemsInfo[7] = {
	&TriggeringCondition2::theInfo,
	&ReportingRange::theInfo,
	&ForbiddenAffectCellList::theInfo,
	&W::theInfo,
	&ReportDeactivationThreshold::theInfo,
	&ReportingAmount::theInfo,
	&ReportingInterval::theInfo,
};
bool Event1a::itemsPres[7] = {
	1,
	1,
	0,
	1,
	1,
	1,
	1,
};
const Event1a::Info Event1a::theInfo = {
	Event1a::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	7, 1, 0
};

const void *Event1b::itemsInfo[4] = {
	&TriggeringCondition1::theInfo,
	&ReportingRange::theInfo,
	&ForbiddenAffectCellList::theInfo,
	&W::theInfo,
};
bool Event1b::itemsPres[4] = {
	1,
	1,
	0,
	1,
};
const Event1b::Info Event1b::theInfo = {
	Event1b::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 1, 0
};

const void *Event1c::itemsInfo[3] = {
	&ReplacementActivationThreshold::theInfo,
	&ReportingAmount::theInfo,
	&ReportingInterval::theInfo,
};
bool Event1c::itemsPres[3] = {
	1,
	1,
	1,
};
const Event1c::Info Event1c::theInfo = {
	Event1c::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *Event1e::itemsInfo[2] = {
	&TriggeringCondition2::theInfo,
	&ThresholdUsedFrequency::theInfo,
};
bool Event1e::itemsPres[2] = {
	1,
	1,
};
const Event1e::Info Event1e::theInfo = {
	Event1e::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *Event1f::itemsInfo[2] = {
	&TriggeringCondition1::theInfo,
	&ThresholdUsedFrequency::theInfo,
};
bool Event1f::itemsPres[2] = {
	1,
	1,
};
const Event1f::Info Event1f::theInfo = {
	Event1f::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *IntraFreqEvent::choicesInfo[9] = {
	&Event1a::theInfo,
	&Event1b::theInfo,
	&Event1c::theInfo,
	&IntraFreqEventE1d::theInfo,
	&Event1e::theInfo,
	&Event1f::theInfo,
	&IntraFreqEventE1g::theInfo,
	&ThresholdUsedFrequency::theInfo,
	&ThresholdUsedFrequency::theInfo,
};
const IntraFreqEvent::Info IntraFreqEvent::theInfo = {
	IntraFreqEvent::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	8
};

const void *ReportingCellStatus::choicesInfo[14] = {
	&MaxNumberOfReportingCellsType1::theInfo,
	&MaxNumberOfReportingCellsType1::theInfo,
	&MaxNumberOfReportingCellsType1::theInfo,
	&MaxNumberOfReportingCellsType1::theInfo,
	&MaxNumberOfReportingCellsType1::theInfo,
	&MaxNumberOfReportingCellsType3::theInfo,
	&MaxNumberOfReportingCellsType3::theInfo,
	&MaxNumberOfReportingCellsType3::theInfo,
	&MaxNumberOfReportingCellsType1::theInfo,
	&MaxNumberOfReportingCellsType1::theInfo,
	&MaxNumberOfReportingCellsType1::theInfo,
	&MaxNumberOfReportingCellsType3::theInfo,
	&MaxNumberOfReportingCellsType2::theInfo,
	&MaxNumberOfReportingCellsType2::theInfo,
};
const ReportingCellStatus::Info ReportingCellStatus::theInfo = {
	ReportingCellStatus::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	13
};

const void *IntraFreqEventCriteria::itemsInfo[4] = {
	&IntraFreqEvent::theInfo,
	&Hysteresis::theInfo,
	&TimeToTrigger::theInfo,
	&ReportingCellStatus::theInfo,
};
bool IntraFreqEventCriteria::itemsPres[4] = {
	1,
	1,
	1,
	0,
};
const IntraFreqEventCriteria::Info IntraFreqEventCriteria::theInfo = {
	IntraFreqEventCriteria::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 1, 0
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

const void *PeriodicalReportingCriteria::itemsInfo[2] = {
	&ReportingAmount::theInfo,
	&ReportingIntervalLong::theInfo,
};
bool PeriodicalReportingCriteria::itemsPres[2] = {
	0,
	1,
};
const PeriodicalReportingCriteria::Info PeriodicalReportingCriteria::theInfo = {
	PeriodicalReportingCriteria::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *CellDCHReportCriteria::choicesInfo[2] = {
	&IntraFreqReportingCriteria::theInfo,
	&PeriodicalReportingCriteria::theInfo,
};
const CellDCHReportCriteria::Info CellDCHReportCriteria::theInfo = {
	CellDCHReportCriteria::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
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

const void *Event1aLCRr4::itemsInfo[7] = {
	&TriggeringCondition2::theInfo,
	&ReportingRange::theInfo,
	&ForbiddenAffectCellListLCRr4::theInfo,
	&W::theInfo,
	&ReportDeactivationThreshold::theInfo,
	&ReportingAmount::theInfo,
	&ReportingInterval::theInfo,
};
bool Event1aLCRr4::itemsPres[7] = {
	1,
	1,
	0,
	1,
	1,
	1,
	1,
};
const Event1aLCRr4::Info Event1aLCRr4::theInfo = {
	Event1aLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	7, 1, 0
};

const void *Event1bLCRr4::itemsInfo[4] = {
	&TriggeringCondition1::theInfo,
	&ReportingRange::theInfo,
	&ForbiddenAffectCellListLCRr4::theInfo,
	&W::theInfo,
};
bool Event1bLCRr4::itemsPres[4] = {
	1,
	1,
	0,
	1,
};
const Event1bLCRr4::Info Event1bLCRr4::theInfo = {
	Event1bLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 1, 0
};

const void *IntraFreqEventLCRr4::choicesInfo[9] = {
	&Event1aLCRr4::theInfo,
	&Event1bLCRr4::theInfo,
	&Event1c::theInfo,
	&IntraFreqEventLCRr4E1d::theInfo,
	&Event1e::theInfo,
	&Event1f::theInfo,
	&IntraFreqEventLCRr4E1g::theInfo,
	&ThresholdUsedFrequency::theInfo,
	&ThresholdUsedFrequency::theInfo,
};
const IntraFreqEventLCRr4::Info IntraFreqEventLCRr4::theInfo = {
	IntraFreqEventLCRr4::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	8
};

const void *IntraFreqEventCriteriaLCRr4::itemsInfo[4] = {
	&IntraFreqEventLCRr4::theInfo,
	&Hysteresis::theInfo,
	&TimeToTrigger::theInfo,
	&ReportingCellStatus::theInfo,
};
bool IntraFreqEventCriteriaLCRr4::itemsPres[4] = {
	1,
	1,
	1,
	0,
};
const IntraFreqEventCriteriaLCRr4::Info IntraFreqEventCriteriaLCRr4::theInfo = {
	IntraFreqEventCriteriaLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 1, 0
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

const void *CellDCHReportCriteriaLCRr4::choicesInfo[2] = {
	&IntraFreqReportingCriteriaLCRr4::theInfo,
	&PeriodicalReportingCriteria::theInfo,
};
const CellDCHReportCriteriaLCRr4::Info CellDCHReportCriteriaLCRr4::theInfo = {
	CellDCHReportCriteriaLCRr4::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *MeasurementOccasionPatternParameter::itemsInfo[4] = {
	&MeasurementOccasionPatternParameterMeasurementOccasionCoeff::theInfo,
	&MeasurementOccasionPatternParameterMeasurementOccasionOffset::theInfo,
	&MeasurementOccasionPatternParameterMeasurementOccasionLength::theInfo,
	&MeasurementOccasionPatternParameterTimeslotBitmap::theInfo,
};
bool MeasurementOccasionPatternParameter::itemsPres[4] = {
	1,
	1,
	1,
	0,
};
const MeasurementOccasionPatternParameter::Info MeasurementOccasionPatternParameter::theInfo = {
	MeasurementOccasionPatternParameter::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 1, 0
};

const void *CellDCHMeasOccasionPatternLCR::itemsInfo[4] = {
	&CellDCHMeasOccasionPatternLCRPatternIdentifier::theInfo,
	&CellDCHMeasOccasionPatternLCRstatusFlag::theInfo,
	&CellDCHMeasOccasionPatternLCRMeasurementPurpose::theInfo,
	&MeasurementOccasionPatternParameter::theInfo,
};
bool CellDCHMeasOccasionPatternLCR::itemsPres[4] = {
	1,
	1,
	0,
	0,
};
const CellDCHMeasOccasionPatternLCR::Info CellDCHMeasOccasionPatternLCR::theInfo = {
	CellDCHMeasOccasionPatternLCR::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
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

const void *ReferenceTimeDifferenceToCell::choicesInfo[3] = {
	&ReferenceTimeDifferenceToCellAccuracy40::theInfo,
	&ReferenceTimeDifferenceToCellAccuracy256::theInfo,
	&ReferenceTimeDifferenceToCellAccuracy2560::theInfo,
};
const ReferenceTimeDifferenceToCell::Info ReferenceTimeDifferenceToCell::theInfo = {
	ReferenceTimeDifferenceToCell::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *CellInfoModeSpecificInfoFdd::itemsInfo[4] = {
	&PrimaryCPICHInfo::theInfo,
	&PrimaryCPICHTXPower::theInfo,
	&CellInfoModeSpecificInfoFddReadSFNIndicator::theInfo,
	&CellInfoModeSpecificInfoFddTxDiversityIndicator::theInfo,
};
bool CellInfoModeSpecificInfoFdd::itemsPres[4] = {
	0,
	0,
	1,
	1,
};
const CellInfoModeSpecificInfoFdd::Info CellInfoModeSpecificInfoFdd::theInfo = {
	CellInfoModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
};

const void *TimeslotInfo::itemsInfo[2] = {
	&TimeslotNumber::theInfo,
	&BurstType::theInfo,
};
bool TimeslotInfo::itemsPres[2] = {
	1,
	1,
};
const TimeslotInfo::Info TimeslotInfo::theInfo = {
	TimeslotInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *CellInfoModeSpecificInfoTdd::itemsInfo[4] = {
	&PrimaryCCPCHInfo::theInfo,
	&PrimaryCCPCHTXPower::theInfo,
	&TimeslotInfoList::theInfo,
	&CellInfoModeSpecificInfoTddReadSFNIndicator::theInfo,
};
bool CellInfoModeSpecificInfoTdd::itemsPres[4] = {
	1,
	0,
	0,
	1,
};
const CellInfoModeSpecificInfoTdd::Info CellInfoModeSpecificInfoTdd::theInfo = {
	CellInfoModeSpecificInfoTdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
};

const void *CellInfoModeSpecificInfo::choicesInfo[2] = {
	&CellInfoModeSpecificInfoFdd::theInfo,
	&CellInfoModeSpecificInfoTdd::theInfo,
};
const CellInfoModeSpecificInfo::Info CellInfoModeSpecificInfo::theInfo = {
	CellInfoModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *CellInfo::itemsInfo[3] = {
	&CellIndividualOffset::theInfo,
	&ReferenceTimeDifferenceToCell::theInfo,
	&CellInfoModeSpecificInfo::theInfo,
};
bool CellInfo::itemsPres[3] = {
	0,
	0,
	1,
};
const CellInfo::Info CellInfo::theInfo = {
	CellInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *CellInfor4ModeSpecificInfoFdd::itemsInfo[4] = {
	&PrimaryCPICHInfo::theInfo,
	&PrimaryCPICHTXPower::theInfo,
	&CellInfor4ModeSpecificInfoFddReadSFNIndicator::theInfo,
	&CellInfor4ModeSpecificInfoFddTxDiversityIndicator::theInfo,
};
bool CellInfor4ModeSpecificInfoFdd::itemsPres[4] = {
	0,
	0,
	1,
	1,
};
const CellInfor4ModeSpecificInfoFdd::Info CellInfor4ModeSpecificInfoFdd::theInfo = {
	CellInfor4ModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
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

const void *TimeslotInfoListr4::choicesInfo[2] = {
	&TimeslotInfoListr4Tdd384::theInfo,
	&TimeslotInfoListr4Tdd128::theInfo,
};
const TimeslotInfoListr4::Info TimeslotInfoListr4::theInfo = {
	TimeslotInfoListr4::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *CellInfor4ModeSpecificInfoTdd::itemsInfo[4] = {
	&PrimaryCCPCHInfor4::theInfo,
	&PrimaryCCPCHTXPower::theInfo,
	&TimeslotInfoListr4::theInfo,
	&CellInfor4ModeSpecificInfoTddReadSFNIndicator::theInfo,
};
bool CellInfor4ModeSpecificInfoTdd::itemsPres[4] = {
	1,
	0,
	0,
	1,
};
const CellInfor4ModeSpecificInfoTdd::Info CellInfor4ModeSpecificInfoTdd::theInfo = {
	CellInfor4ModeSpecificInfoTdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
};

const void *CellInfor4ModeSpecificInfo::choicesInfo[2] = {
	&CellInfor4ModeSpecificInfoFdd::theInfo,
	&CellInfor4ModeSpecificInfoTdd::theInfo,
};
const CellInfor4ModeSpecificInfo::Info CellInfor4ModeSpecificInfo::theInfo = {
	CellInfor4ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *CellInfor4::itemsInfo[3] = {
	&CellIndividualOffset::theInfo,
	&ReferenceTimeDifferenceToCell::theInfo,
	&CellInfor4ModeSpecificInfo::theInfo,
};
bool CellInfor4::itemsPres[3] = {
	0,
	0,
	1,
};
const CellInfor4::Info CellInfor4::theInfo = {
	CellInfor4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *PenaltyTimeRSCP::choicesInfo[7] = {
	&PenaltyTimeRSCPNotUsed::theInfo,
	&TemporaryOffset1::theInfo,
	&TemporaryOffset1::theInfo,
	&TemporaryOffset1::theInfo,
	&TemporaryOffset1::theInfo,
	&TemporaryOffset1::theInfo,
	&TemporaryOffset1::theInfo,
};
const PenaltyTimeRSCP::Info PenaltyTimeRSCP::theInfo = {
	PenaltyTimeRSCP::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	6
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

const void *HCSNeighbouringCellInformationRSCP::itemsInfo[3] = {
	&HCSPRIO::theInfo,
	&QHCS::theInfo,
	&HCSCellReselectInformationRSCP::theInfo,
};
bool HCSNeighbouringCellInformationRSCP::itemsPres[3] = {
	0,
	0,
	1,
};
const HCSNeighbouringCellInformationRSCP::Info HCSNeighbouringCellInformationRSCP::theInfo = {
	HCSNeighbouringCellInformationRSCP::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *CellSelectReselectInfoMCRSCPModeSpecificInfoFdd::itemsInfo[2] = {
	&QQualMin::theInfo,
	&QRxlevMin::theInfo,
};
bool CellSelectReselectInfoMCRSCPModeSpecificInfoFdd::itemsPres[2] = {
	0,
	0,
};
const CellSelectReselectInfoMCRSCPModeSpecificInfoFdd::Info CellSelectReselectInfoMCRSCPModeSpecificInfoFdd::theInfo = {
	CellSelectReselectInfoMCRSCPModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *CellSelectReselectInfoMCRSCPModeSpecificInfoTdd::itemsInfo[1] = {
	&QRxlevMin::theInfo,
};
bool CellSelectReselectInfoMCRSCPModeSpecificInfoTdd::itemsPres[1] = {
	0,
};
const CellSelectReselectInfoMCRSCPModeSpecificInfoTdd::Info CellSelectReselectInfoMCRSCPModeSpecificInfoTdd::theInfo = {
	CellSelectReselectInfoMCRSCPModeSpecificInfoTdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *CellSelectReselectInfoMCRSCPModeSpecificInfoGsm::itemsInfo[1] = {
	&QRxlevMin::theInfo,
};
bool CellSelectReselectInfoMCRSCPModeSpecificInfoGsm::itemsPres[1] = {
	0,
};
const CellSelectReselectInfoMCRSCPModeSpecificInfoGsm::Info CellSelectReselectInfoMCRSCPModeSpecificInfoGsm::theInfo = {
	CellSelectReselectInfoMCRSCPModeSpecificInfoGsm::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *CellSelectReselectInfoMCRSCPModeSpecificInfo::choicesInfo[3] = {
	&CellSelectReselectInfoMCRSCPModeSpecificInfoFdd::theInfo,
	&CellSelectReselectInfoMCRSCPModeSpecificInfoTdd::theInfo,
	&CellSelectReselectInfoMCRSCPModeSpecificInfoGsm::theInfo,
};
const CellSelectReselectInfoMCRSCPModeSpecificInfo::Info CellSelectReselectInfoMCRSCPModeSpecificInfo::theInfo = {
	CellSelectReselectInfoMCRSCPModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *CellSelectReselectInfoMCRSCP::itemsInfo[4] = {
	&QOffsetSN::theInfo,
	&MaxAllowedULTXPower::theInfo,
	&HCSNeighbouringCellInformationRSCP::theInfo,
	&CellSelectReselectInfoMCRSCPModeSpecificInfo::theInfo,
};
bool CellSelectReselectInfoMCRSCP::itemsPres[4] = {
	0,
	0,
	0,
	1,
};
const CellSelectReselectInfoMCRSCP::Info CellSelectReselectInfoMCRSCP::theInfo = {
	CellSelectReselectInfoMCRSCP::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 3, 0
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

const void *CellInfor9ModeSpecificInfoFdd::itemsInfo[4] = {
	&PrimaryCPICHInfo::theInfo,
	&PrimaryCPICHTXPower::theInfo,
	&CellInfor9ModeSpecificInfoFddReadSFNIndicator::theInfo,
	&CellInfor9ModeSpecificInfoFddTxDiversityIndicator::theInfo,
};
bool CellInfor9ModeSpecificInfoFdd::itemsPres[4] = {
	0,
	0,
	1,
	1,
};
const CellInfor9ModeSpecificInfoFdd::Info CellInfor9ModeSpecificInfoFdd::theInfo = {
	CellInfor9ModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
};

const void *CellInfor9ModeSpecificInfoTdd::itemsInfo[4] = {
	&PrimaryCCPCHInfor4::theInfo,
	&PrimaryCCPCHTXPower::theInfo,
	&TimeslotInfoListr4::theInfo,
	&CellInfor9ModeSpecificInfoTddReadSFNIndicator::theInfo,
};
bool CellInfor9ModeSpecificInfoTdd::itemsPres[4] = {
	1,
	0,
	0,
	1,
};
const CellInfor9ModeSpecificInfoTdd::Info CellInfor9ModeSpecificInfoTdd::theInfo = {
	CellInfor9ModeSpecificInfoTdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
};

const void *CellInfor9ModeSpecificInfo::choicesInfo[2] = {
	&CellInfor9ModeSpecificInfoFdd::theInfo,
	&CellInfor9ModeSpecificInfoTdd::theInfo,
};
const CellInfor9ModeSpecificInfo::Info CellInfor9ModeSpecificInfo::theInfo = {
	CellInfor9ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *CellInfor9::itemsInfo[4] = {
	&CellIndividualOffset::theInfo,
	&ReferenceTimeDifferenceToCell::theInfo,
	&CellInfor9ModeSpecificInfo::theInfo,
	&CellSelectReselectInfoMCRSCP::theInfo,
};
bool CellInfor9::itemsPres[4] = {
	0,
	0,
	1,
	0,
};
const CellInfor9::Info CellInfor9::theInfo = {
	CellInfor9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 3, 0
};

const void *CellInfoSIRSCPModeSpecificInfoFdd::itemsInfo[4] = {
	&PrimaryCPICHInfo::theInfo,
	&PrimaryCPICHTXPower::theInfo,
	&CellInfoSIRSCPModeSpecificInfoFddReadSFNIndicator::theInfo,
	&CellInfoSIRSCPModeSpecificInfoFddTxDiversityIndicator::theInfo,
};
bool CellInfoSIRSCPModeSpecificInfoFdd::itemsPres[4] = {
	0,
	0,
	1,
	1,
};
const CellInfoSIRSCPModeSpecificInfoFdd::Info CellInfoSIRSCPModeSpecificInfoFdd::theInfo = {
	CellInfoSIRSCPModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
};

const void *CellInfoSIRSCPModeSpecificInfoTdd::itemsInfo[4] = {
	&PrimaryCCPCHInfo::theInfo,
	&PrimaryCCPCHTXPower::theInfo,
	&TimeslotInfoList::theInfo,
	&CellInfoSIRSCPModeSpecificInfoTddReadSFNIndicator::theInfo,
};
bool CellInfoSIRSCPModeSpecificInfoTdd::itemsPres[4] = {
	1,
	0,
	0,
	1,
};
const CellInfoSIRSCPModeSpecificInfoTdd::Info CellInfoSIRSCPModeSpecificInfoTdd::theInfo = {
	CellInfoSIRSCPModeSpecificInfoTdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
};

const void *CellInfoSIRSCPModeSpecificInfo::choicesInfo[2] = {
	&CellInfoSIRSCPModeSpecificInfoFdd::theInfo,
	&CellInfoSIRSCPModeSpecificInfoTdd::theInfo,
};
const CellInfoSIRSCPModeSpecificInfo::Info CellInfoSIRSCPModeSpecificInfo::theInfo = {
	CellInfoSIRSCPModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *CellSelectReselectInfoSIB1112RSCPModeSpecificInfoFdd::itemsInfo[2] = {
	&QQualMin::theInfo,
	&QRxlevMin::theInfo,
};
bool CellSelectReselectInfoSIB1112RSCPModeSpecificInfoFdd::itemsPres[2] = {
	0,
	0,
};
const CellSelectReselectInfoSIB1112RSCPModeSpecificInfoFdd::Info CellSelectReselectInfoSIB1112RSCPModeSpecificInfoFdd::theInfo = {
	CellSelectReselectInfoSIB1112RSCPModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *CellSelectReselectInfoSIB1112RSCPModeSpecificInfoTdd::itemsInfo[1] = {
	&QRxlevMin::theInfo,
};
bool CellSelectReselectInfoSIB1112RSCPModeSpecificInfoTdd::itemsPres[1] = {
	0,
};
const CellSelectReselectInfoSIB1112RSCPModeSpecificInfoTdd::Info CellSelectReselectInfoSIB1112RSCPModeSpecificInfoTdd::theInfo = {
	CellSelectReselectInfoSIB1112RSCPModeSpecificInfoTdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *CellSelectReselectInfoSIB1112RSCPModeSpecificInfoGsm::itemsInfo[1] = {
	&QRxlevMin::theInfo,
};
bool CellSelectReselectInfoSIB1112RSCPModeSpecificInfoGsm::itemsPres[1] = {
	0,
};
const CellSelectReselectInfoSIB1112RSCPModeSpecificInfoGsm::Info CellSelectReselectInfoSIB1112RSCPModeSpecificInfoGsm::theInfo = {
	CellSelectReselectInfoSIB1112RSCPModeSpecificInfoGsm::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *CellSelectReselectInfoSIB1112RSCPModeSpecificInfo::choicesInfo[3] = {
	&CellSelectReselectInfoSIB1112RSCPModeSpecificInfoFdd::theInfo,
	&CellSelectReselectInfoSIB1112RSCPModeSpecificInfoTdd::theInfo,
	&CellSelectReselectInfoSIB1112RSCPModeSpecificInfoGsm::theInfo,
};
const CellSelectReselectInfoSIB1112RSCPModeSpecificInfo::Info CellSelectReselectInfoSIB1112RSCPModeSpecificInfo::theInfo = {
	CellSelectReselectInfoSIB1112RSCPModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *CellSelectReselectInfoSIB1112RSCP::itemsInfo[3] = {
	&QOffsetSN::theInfo,
	&MaxAllowedULTXPower::theInfo,
	&CellSelectReselectInfoSIB1112RSCPModeSpecificInfo::theInfo,
};
bool CellSelectReselectInfoSIB1112RSCP::itemsPres[3] = {
	0,
	0,
	1,
};
const CellSelectReselectInfoSIB1112RSCP::Info CellSelectReselectInfoSIB1112RSCP::theInfo = {
	CellSelectReselectInfoSIB1112RSCP::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *CellInfoSIRSCP::itemsInfo[4] = {
	&CellIndividualOffset::theInfo,
	&ReferenceTimeDifferenceToCell::theInfo,
	&CellInfoSIRSCPModeSpecificInfo::theInfo,
	&CellSelectReselectInfoSIB1112RSCP::theInfo,
};
bool CellInfoSIRSCP::itemsPres[4] = {
	0,
	0,
	1,
	0,
};
const CellInfoSIRSCP::Info CellInfoSIRSCP::theInfo = {
	CellInfoSIRSCP::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 3, 0
};

const void *CellInfoSIRSCPLCRr4::itemsInfo[7] = {
	&CellIndividualOffset::theInfo,
	&ReferenceTimeDifferenceToCell::theInfo,
	&PrimaryCCPCHInfoLCRr4::theInfo,
	&PrimaryCCPCHTXPower::theInfo,
	&TimeslotInfoListLCRr4::theInfo,
	&CellInfoSIRSCPLCRr4ReadSFNIndicator::theInfo,
	&CellSelectReselectInfoSIB1112RSCP::theInfo,
};
bool CellInfoSIRSCPLCRr4::itemsPres[7] = {
	0,
	0,
	1,
	0,
	0,
	1,
	0,
};
const CellInfoSIRSCPLCRr4::Info CellInfoSIRSCPLCRr4::theInfo = {
	CellInfoSIRSCPLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	7, 5, 0
};

const void *CellInfoSIECN0ModeSpecificInfoFdd::itemsInfo[4] = {
	&PrimaryCPICHInfo::theInfo,
	&PrimaryCPICHTXPower::theInfo,
	&CellInfoSIECN0ModeSpecificInfoFddReadSFNIndicator::theInfo,
	&CellInfoSIECN0ModeSpecificInfoFddTxDiversityIndicator::theInfo,
};
bool CellInfoSIECN0ModeSpecificInfoFdd::itemsPres[4] = {
	0,
	0,
	1,
	1,
};
const CellInfoSIECN0ModeSpecificInfoFdd::Info CellInfoSIECN0ModeSpecificInfoFdd::theInfo = {
	CellInfoSIECN0ModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
};

const void *CellInfoSIECN0ModeSpecificInfoTdd::itemsInfo[4] = {
	&PrimaryCCPCHInfo::theInfo,
	&PrimaryCCPCHTXPower::theInfo,
	&TimeslotInfoList::theInfo,
	&CellInfoSIECN0ModeSpecificInfoTddReadSFNIndicator::theInfo,
};
bool CellInfoSIECN0ModeSpecificInfoTdd::itemsPres[4] = {
	1,
	0,
	0,
	1,
};
const CellInfoSIECN0ModeSpecificInfoTdd::Info CellInfoSIECN0ModeSpecificInfoTdd::theInfo = {
	CellInfoSIECN0ModeSpecificInfoTdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
};

const void *CellInfoSIECN0ModeSpecificInfo::choicesInfo[2] = {
	&CellInfoSIECN0ModeSpecificInfoFdd::theInfo,
	&CellInfoSIECN0ModeSpecificInfoTdd::theInfo,
};
const CellInfoSIECN0ModeSpecificInfo::Info CellInfoSIECN0ModeSpecificInfo::theInfo = {
	CellInfoSIECN0ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *CellSelectReselectInfoSIB1112ECN0ModeSpecificInfoFdd::itemsInfo[2] = {
	&QQualMin::theInfo,
	&QRxlevMin::theInfo,
};
bool CellSelectReselectInfoSIB1112ECN0ModeSpecificInfoFdd::itemsPres[2] = {
	0,
	0,
};
const CellSelectReselectInfoSIB1112ECN0ModeSpecificInfoFdd::Info CellSelectReselectInfoSIB1112ECN0ModeSpecificInfoFdd::theInfo = {
	CellSelectReselectInfoSIB1112ECN0ModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *CellSelectReselectInfoSIB1112ECN0ModeSpecificInfoTdd::itemsInfo[1] = {
	&QRxlevMin::theInfo,
};
bool CellSelectReselectInfoSIB1112ECN0ModeSpecificInfoTdd::itemsPres[1] = {
	0,
};
const CellSelectReselectInfoSIB1112ECN0ModeSpecificInfoTdd::Info CellSelectReselectInfoSIB1112ECN0ModeSpecificInfoTdd::theInfo = {
	CellSelectReselectInfoSIB1112ECN0ModeSpecificInfoTdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *CellSelectReselectInfoSIB1112ECN0ModeSpecificInfoGsm::itemsInfo[1] = {
	&QRxlevMin::theInfo,
};
bool CellSelectReselectInfoSIB1112ECN0ModeSpecificInfoGsm::itemsPres[1] = {
	0,
};
const CellSelectReselectInfoSIB1112ECN0ModeSpecificInfoGsm::Info CellSelectReselectInfoSIB1112ECN0ModeSpecificInfoGsm::theInfo = {
	CellSelectReselectInfoSIB1112ECN0ModeSpecificInfoGsm::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *CellSelectReselectInfoSIB1112ECN0ModeSpecificInfo::choicesInfo[3] = {
	&CellSelectReselectInfoSIB1112ECN0ModeSpecificInfoFdd::theInfo,
	&CellSelectReselectInfoSIB1112ECN0ModeSpecificInfoTdd::theInfo,
	&CellSelectReselectInfoSIB1112ECN0ModeSpecificInfoGsm::theInfo,
};
const CellSelectReselectInfoSIB1112ECN0ModeSpecificInfo::Info CellSelectReselectInfoSIB1112ECN0ModeSpecificInfo::theInfo = {
	CellSelectReselectInfoSIB1112ECN0ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *CellSelectReselectInfoSIB1112ECN0::itemsInfo[4] = {
	&QOffsetSN::theInfo,
	&QOffsetSN::theInfo,
	&MaxAllowedULTXPower::theInfo,
	&CellSelectReselectInfoSIB1112ECN0ModeSpecificInfo::theInfo,
};
bool CellSelectReselectInfoSIB1112ECN0::itemsPres[4] = {
	0,
	0,
	0,
	1,
};
const CellSelectReselectInfoSIB1112ECN0::Info CellSelectReselectInfoSIB1112ECN0::theInfo = {
	CellSelectReselectInfoSIB1112ECN0::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 3, 0
};

const void *CellInfoSIECN0::itemsInfo[4] = {
	&CellIndividualOffset::theInfo,
	&ReferenceTimeDifferenceToCell::theInfo,
	&CellInfoSIECN0ModeSpecificInfo::theInfo,
	&CellSelectReselectInfoSIB1112ECN0::theInfo,
};
bool CellInfoSIECN0::itemsPres[4] = {
	0,
	0,
	1,
	0,
};
const CellInfoSIECN0::Info CellInfoSIECN0::theInfo = {
	CellInfoSIECN0::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 3, 0
};

const void *CellInfoSIECN0LCRr4::itemsInfo[7] = {
	&CellIndividualOffset::theInfo,
	&ReferenceTimeDifferenceToCell::theInfo,
	&PrimaryCCPCHInfoLCRr4::theInfo,
	&PrimaryCCPCHTXPower::theInfo,
	&TimeslotInfoListLCRr4::theInfo,
	&CellInfoSIECN0LCRr4ReadSFNIndicator::theInfo,
	&CellSelectReselectInfoSIB1112ECN0::theInfo,
};
bool CellInfoSIECN0LCRr4::itemsPres[7] = {
	0,
	0,
	1,
	0,
	0,
	1,
	0,
};
const CellInfoSIECN0LCRr4::Info CellInfoSIECN0LCRr4::theInfo = {
	CellInfoSIECN0LCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	7, 5, 0
};

const void *CellInfoSIHCSRSCPModeSpecificInfoFdd::itemsInfo[4] = {
	&PrimaryCPICHInfo::theInfo,
	&PrimaryCPICHTXPower::theInfo,
	&CellInfoSIHCSRSCPModeSpecificInfoFddReadSFNIndicator::theInfo,
	&CellInfoSIHCSRSCPModeSpecificInfoFddTxDiversityIndicator::theInfo,
};
bool CellInfoSIHCSRSCPModeSpecificInfoFdd::itemsPres[4] = {
	0,
	0,
	1,
	1,
};
const CellInfoSIHCSRSCPModeSpecificInfoFdd::Info CellInfoSIHCSRSCPModeSpecificInfoFdd::theInfo = {
	CellInfoSIHCSRSCPModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
};

const void *CellInfoSIHCSRSCPModeSpecificInfoTdd::itemsInfo[4] = {
	&PrimaryCCPCHInfo::theInfo,
	&PrimaryCCPCHTXPower::theInfo,
	&TimeslotInfoList::theInfo,
	&CellInfoSIHCSRSCPModeSpecificInfoTddReadSFNIndicator::theInfo,
};
bool CellInfoSIHCSRSCPModeSpecificInfoTdd::itemsPres[4] = {
	1,
	0,
	0,
	1,
};
const CellInfoSIHCSRSCPModeSpecificInfoTdd::Info CellInfoSIHCSRSCPModeSpecificInfoTdd::theInfo = {
	CellInfoSIHCSRSCPModeSpecificInfoTdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
};

const void *CellInfoSIHCSRSCPModeSpecificInfo::choicesInfo[2] = {
	&CellInfoSIHCSRSCPModeSpecificInfoFdd::theInfo,
	&CellInfoSIHCSRSCPModeSpecificInfoTdd::theInfo,
};
const CellInfoSIHCSRSCPModeSpecificInfo::Info CellInfoSIHCSRSCPModeSpecificInfo::theInfo = {
	CellInfoSIHCSRSCPModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *CellSelectReselectInfoSIB1112HCSRSCPModeSpecificInfoFdd::itemsInfo[2] = {
	&QQualMin::theInfo,
	&QRxlevMin::theInfo,
};
bool CellSelectReselectInfoSIB1112HCSRSCPModeSpecificInfoFdd::itemsPres[2] = {
	0,
	0,
};
const CellSelectReselectInfoSIB1112HCSRSCPModeSpecificInfoFdd::Info CellSelectReselectInfoSIB1112HCSRSCPModeSpecificInfoFdd::theInfo = {
	CellSelectReselectInfoSIB1112HCSRSCPModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *CellSelectReselectInfoSIB1112HCSRSCPModeSpecificInfoTdd::itemsInfo[1] = {
	&QRxlevMin::theInfo,
};
bool CellSelectReselectInfoSIB1112HCSRSCPModeSpecificInfoTdd::itemsPres[1] = {
	0,
};
const CellSelectReselectInfoSIB1112HCSRSCPModeSpecificInfoTdd::Info CellSelectReselectInfoSIB1112HCSRSCPModeSpecificInfoTdd::theInfo = {
	CellSelectReselectInfoSIB1112HCSRSCPModeSpecificInfoTdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *CellSelectReselectInfoSIB1112HCSRSCPModeSpecificInfoGsm::itemsInfo[1] = {
	&QRxlevMin::theInfo,
};
bool CellSelectReselectInfoSIB1112HCSRSCPModeSpecificInfoGsm::itemsPres[1] = {
	0,
};
const CellSelectReselectInfoSIB1112HCSRSCPModeSpecificInfoGsm::Info CellSelectReselectInfoSIB1112HCSRSCPModeSpecificInfoGsm::theInfo = {
	CellSelectReselectInfoSIB1112HCSRSCPModeSpecificInfoGsm::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *CellSelectReselectInfoSIB1112HCSRSCPModeSpecificInfo::choicesInfo[3] = {
	&CellSelectReselectInfoSIB1112HCSRSCPModeSpecificInfoFdd::theInfo,
	&CellSelectReselectInfoSIB1112HCSRSCPModeSpecificInfoTdd::theInfo,
	&CellSelectReselectInfoSIB1112HCSRSCPModeSpecificInfoGsm::theInfo,
};
const CellSelectReselectInfoSIB1112HCSRSCPModeSpecificInfo::Info CellSelectReselectInfoSIB1112HCSRSCPModeSpecificInfo::theInfo = {
	CellSelectReselectInfoSIB1112HCSRSCPModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *CellSelectReselectInfoSIB1112HCSRSCP::itemsInfo[4] = {
	&QOffsetSN::theInfo,
	&MaxAllowedULTXPower::theInfo,
	&HCSNeighbouringCellInformationRSCP::theInfo,
	&CellSelectReselectInfoSIB1112HCSRSCPModeSpecificInfo::theInfo,
};
bool CellSelectReselectInfoSIB1112HCSRSCP::itemsPres[4] = {
	0,
	0,
	0,
	1,
};
const CellSelectReselectInfoSIB1112HCSRSCP::Info CellSelectReselectInfoSIB1112HCSRSCP::theInfo = {
	CellSelectReselectInfoSIB1112HCSRSCP::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 3, 0
};

const void *CellInfoSIHCSRSCP::itemsInfo[4] = {
	&CellIndividualOffset::theInfo,
	&ReferenceTimeDifferenceToCell::theInfo,
	&CellInfoSIHCSRSCPModeSpecificInfo::theInfo,
	&CellSelectReselectInfoSIB1112HCSRSCP::theInfo,
};
bool CellInfoSIHCSRSCP::itemsPres[4] = {
	0,
	0,
	1,
	0,
};
const CellInfoSIHCSRSCP::Info CellInfoSIHCSRSCP::theInfo = {
	CellInfoSIHCSRSCP::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 3, 0
};

const void *CellInfoSIHCSRSCPLCRr4::itemsInfo[7] = {
	&CellIndividualOffset::theInfo,
	&ReferenceTimeDifferenceToCell::theInfo,
	&PrimaryCCPCHInfoLCRr4::theInfo,
	&PrimaryCCPCHTXPower::theInfo,
	&TimeslotInfoListLCRr4::theInfo,
	&CellInfoSIHCSRSCPLCRr4ReadSFNIndicator::theInfo,
	&CellSelectReselectInfoSIB1112HCSRSCP::theInfo,
};
bool CellInfoSIHCSRSCPLCRr4::itemsPres[7] = {
	0,
	0,
	1,
	0,
	0,
	1,
	0,
};
const CellInfoSIHCSRSCPLCRr4::Info CellInfoSIHCSRSCPLCRr4::theInfo = {
	CellInfoSIHCSRSCPLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	7, 5, 0
};

const void *CellInfoSIHCSECN0ModeSpecificInfoFdd::itemsInfo[4] = {
	&PrimaryCPICHInfo::theInfo,
	&PrimaryCPICHTXPower::theInfo,
	&CellInfoSIHCSECN0ModeSpecificInfoFddReadSFNIndicator::theInfo,
	&CellInfoSIHCSECN0ModeSpecificInfoFddTxDiversityIndicator::theInfo,
};
bool CellInfoSIHCSECN0ModeSpecificInfoFdd::itemsPres[4] = {
	0,
	0,
	1,
	1,
};
const CellInfoSIHCSECN0ModeSpecificInfoFdd::Info CellInfoSIHCSECN0ModeSpecificInfoFdd::theInfo = {
	CellInfoSIHCSECN0ModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
};

const void *CellInfoSIHCSECN0ModeSpecificInfoTdd::itemsInfo[4] = {
	&PrimaryCCPCHInfo::theInfo,
	&PrimaryCCPCHTXPower::theInfo,
	&TimeslotInfoList::theInfo,
	&CellInfoSIHCSECN0ModeSpecificInfoTddReadSFNIndicator::theInfo,
};
bool CellInfoSIHCSECN0ModeSpecificInfoTdd::itemsPres[4] = {
	1,
	0,
	0,
	1,
};
const CellInfoSIHCSECN0ModeSpecificInfoTdd::Info CellInfoSIHCSECN0ModeSpecificInfoTdd::theInfo = {
	CellInfoSIHCSECN0ModeSpecificInfoTdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
};

const void *CellInfoSIHCSECN0ModeSpecificInfo::choicesInfo[2] = {
	&CellInfoSIHCSECN0ModeSpecificInfoFdd::theInfo,
	&CellInfoSIHCSECN0ModeSpecificInfoTdd::theInfo,
};
const CellInfoSIHCSECN0ModeSpecificInfo::Info CellInfoSIHCSECN0ModeSpecificInfo::theInfo = {
	CellInfoSIHCSECN0ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *TemporaryOffsetList::itemsInfo[2] = {
	&TemporaryOffset1::theInfo,
	&TemporaryOffset2::theInfo,
};
bool TemporaryOffsetList::itemsPres[2] = {
	1,
	1,
};
const TemporaryOffsetList::Info TemporaryOffsetList::theInfo = {
	TemporaryOffsetList::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *PenaltyTimeECN0::choicesInfo[7] = {
	&PenaltyTimeECN0NotUsed::theInfo,
	&TemporaryOffsetList::theInfo,
	&TemporaryOffsetList::theInfo,
	&TemporaryOffsetList::theInfo,
	&TemporaryOffsetList::theInfo,
	&TemporaryOffsetList::theInfo,
	&TemporaryOffsetList::theInfo,
};
const PenaltyTimeECN0::Info PenaltyTimeECN0::theInfo = {
	PenaltyTimeECN0::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	6
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

const void *HCSNeighbouringCellInformationECN0::itemsInfo[3] = {
	&HCSPRIO::theInfo,
	&QHCS::theInfo,
	&HCSCellReselectInformationECN0::theInfo,
};
bool HCSNeighbouringCellInformationECN0::itemsPres[3] = {
	0,
	0,
	1,
};
const HCSNeighbouringCellInformationECN0::Info HCSNeighbouringCellInformationECN0::theInfo = {
	HCSNeighbouringCellInformationECN0::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *CellSelectReselectInfoSIB1112HCSECN0ModeSpecificInfoFdd::itemsInfo[2] = {
	&QQualMin::theInfo,
	&QRxlevMin::theInfo,
};
bool CellSelectReselectInfoSIB1112HCSECN0ModeSpecificInfoFdd::itemsPres[2] = {
	0,
	0,
};
const CellSelectReselectInfoSIB1112HCSECN0ModeSpecificInfoFdd::Info CellSelectReselectInfoSIB1112HCSECN0ModeSpecificInfoFdd::theInfo = {
	CellSelectReselectInfoSIB1112HCSECN0ModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *CellSelectReselectInfoSIB1112HCSECN0ModeSpecificInfoTdd::itemsInfo[1] = {
	&QRxlevMin::theInfo,
};
bool CellSelectReselectInfoSIB1112HCSECN0ModeSpecificInfoTdd::itemsPres[1] = {
	0,
};
const CellSelectReselectInfoSIB1112HCSECN0ModeSpecificInfoTdd::Info CellSelectReselectInfoSIB1112HCSECN0ModeSpecificInfoTdd::theInfo = {
	CellSelectReselectInfoSIB1112HCSECN0ModeSpecificInfoTdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *CellSelectReselectInfoSIB1112HCSECN0ModeSpecificInfoGsm::itemsInfo[1] = {
	&QRxlevMin::theInfo,
};
bool CellSelectReselectInfoSIB1112HCSECN0ModeSpecificInfoGsm::itemsPres[1] = {
	0,
};
const CellSelectReselectInfoSIB1112HCSECN0ModeSpecificInfoGsm::Info CellSelectReselectInfoSIB1112HCSECN0ModeSpecificInfoGsm::theInfo = {
	CellSelectReselectInfoSIB1112HCSECN0ModeSpecificInfoGsm::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *CellSelectReselectInfoSIB1112HCSECN0ModeSpecificInfo::choicesInfo[3] = {
	&CellSelectReselectInfoSIB1112HCSECN0ModeSpecificInfoFdd::theInfo,
	&CellSelectReselectInfoSIB1112HCSECN0ModeSpecificInfoTdd::theInfo,
	&CellSelectReselectInfoSIB1112HCSECN0ModeSpecificInfoGsm::theInfo,
};
const CellSelectReselectInfoSIB1112HCSECN0ModeSpecificInfo::Info CellSelectReselectInfoSIB1112HCSECN0ModeSpecificInfo::theInfo = {
	CellSelectReselectInfoSIB1112HCSECN0ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *CellSelectReselectInfoSIB1112HCSECN0::itemsInfo[5] = {
	&QOffsetSN::theInfo,
	&QOffsetSN::theInfo,
	&MaxAllowedULTXPower::theInfo,
	&HCSNeighbouringCellInformationECN0::theInfo,
	&CellSelectReselectInfoSIB1112HCSECN0ModeSpecificInfo::theInfo,
};
bool CellSelectReselectInfoSIB1112HCSECN0::itemsPres[5] = {
	0,
	0,
	0,
	0,
	1,
};
const CellSelectReselectInfoSIB1112HCSECN0::Info CellSelectReselectInfoSIB1112HCSECN0::theInfo = {
	CellSelectReselectInfoSIB1112HCSECN0::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 4, 0
};

const void *CellInfoSIHCSECN0::itemsInfo[4] = {
	&CellIndividualOffset::theInfo,
	&ReferenceTimeDifferenceToCell::theInfo,
	&CellInfoSIHCSECN0ModeSpecificInfo::theInfo,
	&CellSelectReselectInfoSIB1112HCSECN0::theInfo,
};
bool CellInfoSIHCSECN0::itemsPres[4] = {
	0,
	0,
	1,
	0,
};
const CellInfoSIHCSECN0::Info CellInfoSIHCSECN0::theInfo = {
	CellInfoSIHCSECN0::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 3, 0
};

const void *CellInfoSIHCSECN0LCRr4::itemsInfo[7] = {
	&CellIndividualOffset::theInfo,
	&ReferenceTimeDifferenceToCell::theInfo,
	&PrimaryCCPCHInfoLCRr4::theInfo,
	&PrimaryCCPCHTXPower::theInfo,
	&TimeslotInfoListLCRr4::theInfo,
	&CellInfoSIHCSECN0LCRr4ReadSFNIndicator::theInfo,
	&CellSelectReselectInfoSIB1112HCSECN0::theInfo,
};
bool CellInfoSIHCSECN0LCRr4::itemsPres[7] = {
	0,
	0,
	1,
	0,
	0,
	1,
	0,
};
const CellInfoSIHCSECN0LCRr4::Info CellInfoSIHCSECN0LCRr4::theInfo = {
	CellInfoSIHCSECN0LCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	7, 5, 0
};

const void *SFNSFNObsTimeDifference::choicesInfo[2] = {
	&SFNSFNObsTimeDifference1::theInfo,
	&SFNSFNObsTimeDifference2::theInfo,
};
const SFNSFNObsTimeDifference::Info SFNSFNObsTimeDifference::theInfo = {
	SFNSFNObsTimeDifference::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *CountCSFNFramedifference::itemsInfo[2] = {
	&CountCSFNFramedifferenceCountCSFNHigh::theInfo,
	&CountCSFNFramedifferenceOff::theInfo,
};
bool CountCSFNFramedifference::itemsPres[2] = {
	1,
	1,
};
const CountCSFNFramedifference::Info CountCSFNFramedifference::theInfo = {
	CountCSFNFramedifference::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *CellSynchronisationInfoModeSpecificInfoFdd::itemsInfo[2] = {
	&CountCSFNFramedifference::theInfo,
	&CellSynchronisationInfoModeSpecificInfoFddTm::theInfo,
};
bool CellSynchronisationInfoModeSpecificInfoFdd::itemsPres[2] = {
	0,
	1,
};
const CellSynchronisationInfoModeSpecificInfoFdd::Info CellSynchronisationInfoModeSpecificInfoFdd::theInfo = {
	CellSynchronisationInfoModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *CellSynchronisationInfoModeSpecificInfoTdd::itemsInfo[1] = {
	&CountCSFNFramedifference::theInfo,
};
bool CellSynchronisationInfoModeSpecificInfoTdd::itemsPres[1] = {
	0,
};
const CellSynchronisationInfoModeSpecificInfoTdd::Info CellSynchronisationInfoModeSpecificInfoTdd::theInfo = {
	CellSynchronisationInfoModeSpecificInfoTdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *CellSynchronisationInfoModeSpecificInfo::choicesInfo[2] = {
	&CellSynchronisationInfoModeSpecificInfoFdd::theInfo,
	&CellSynchronisationInfoModeSpecificInfoTdd::theInfo,
};
const CellSynchronisationInfoModeSpecificInfo::Info CellSynchronisationInfoModeSpecificInfo::theInfo = {
	CellSynchronisationInfoModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
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

const void *CellMeasuredResultsModeSpecificInfoFdd::itemsInfo[4] = {
	&PrimaryCPICHInfo::theInfo,
	&CPICHEcN0::theInfo,
	&CPICHRSCP::theInfo,
	&Pathloss::theInfo,
};
bool CellMeasuredResultsModeSpecificInfoFdd::itemsPres[4] = {
	1,
	0,
	0,
	0,
};
const CellMeasuredResultsModeSpecificInfoFdd::Info CellMeasuredResultsModeSpecificInfoFdd::theInfo = {
	CellMeasuredResultsModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 3, 0
};

const void *CellMeasuredResultsModeSpecificInfoTdd::itemsInfo[5] = {
	&CellParametersID::theInfo,
	&TGSN::theInfo,
	&PrimaryCCPCHRSCP::theInfo,
	&Pathloss::theInfo,
	&TimeslotISCPList::theInfo,
};
bool CellMeasuredResultsModeSpecificInfoTdd::itemsPres[5] = {
	1,
	0,
	0,
	0,
	0,
};
const CellMeasuredResultsModeSpecificInfoTdd::Info CellMeasuredResultsModeSpecificInfoTdd::theInfo = {
	CellMeasuredResultsModeSpecificInfoTdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 4, 0
};

const void *CellMeasuredResultsModeSpecificInfo::choicesInfo[2] = {
	&CellMeasuredResultsModeSpecificInfoFdd::theInfo,
	&CellMeasuredResultsModeSpecificInfoTdd::theInfo,
};
const CellMeasuredResultsModeSpecificInfo::Info CellMeasuredResultsModeSpecificInfo::theInfo = {
	CellMeasuredResultsModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *CellMeasuredResults::itemsInfo[4] = {
	&CellIdentity::theInfo,
	&SFNSFNObsTimeDifference::theInfo,
	&CellSynchronisationInfo::theInfo,
	&CellMeasuredResultsModeSpecificInfo::theInfo,
};
bool CellMeasuredResults::itemsPres[4] = {
	0,
	0,
	0,
	1,
};
const CellMeasuredResults::Info CellMeasuredResults::theInfo = {
	CellMeasuredResults::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 3, 0
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

const void *CellMeasuredResultsr9ModeSpecificInfoFdd::itemsInfo[5] = {
	&PrimaryCPICHInfo::theInfo,
	&CPICHEcN0::theInfo,
	&CPICHRSCP::theInfo,
	&DeltaRSCPPerCell::theInfo,
	&Pathloss::theInfo,
};
bool CellMeasuredResultsr9ModeSpecificInfoFdd::itemsPres[5] = {
	1,
	0,
	0,
	0,
	0,
};
const CellMeasuredResultsr9ModeSpecificInfoFdd::Info CellMeasuredResultsr9ModeSpecificInfoFdd::theInfo = {
	CellMeasuredResultsr9ModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 4, 0
};

const void *CellMeasuredResultsr9ModeSpecificInfoTdd::itemsInfo[5] = {
	&CellParametersID::theInfo,
	&TGSN::theInfo,
	&PrimaryCCPCHRSCP::theInfo,
	&Pathloss::theInfo,
	&TimeslotISCPList::theInfo,
};
bool CellMeasuredResultsr9ModeSpecificInfoTdd::itemsPres[5] = {
	1,
	0,
	0,
	0,
	0,
};
const CellMeasuredResultsr9ModeSpecificInfoTdd::Info CellMeasuredResultsr9ModeSpecificInfoTdd::theInfo = {
	CellMeasuredResultsr9ModeSpecificInfoTdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 4, 0
};

const void *CellMeasuredResultsr9ModeSpecificInfo::choicesInfo[2] = {
	&CellMeasuredResultsr9ModeSpecificInfoFdd::theInfo,
	&CellMeasuredResultsr9ModeSpecificInfoTdd::theInfo,
};
const CellMeasuredResultsr9ModeSpecificInfo::Info CellMeasuredResultsr9ModeSpecificInfo::theInfo = {
	CellMeasuredResultsr9ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *CellMeasuredResultsr9::itemsInfo[3] = {
	&CellIdentity::theInfo,
	&CellSynchronisationInfo::theInfo,
	&CellMeasuredResultsr9ModeSpecificInfo::theInfo,
};
bool CellMeasuredResultsr9::itemsPres[3] = {
	0,
	0,
	1,
};
const CellMeasuredResultsr9::Info CellMeasuredResultsr9::theInfo = {
	CellMeasuredResultsr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *CellMeasuredResultsv920ext::itemsInfo[2] = {
	&CSGIdentity::theInfo,
	&CellMeasuredResultsv920extcsgMemberIndication::theInfo,
};
bool CellMeasuredResultsv920ext::itemsPres[2] = {
	0,
	0,
};
const CellMeasuredResultsv920ext::Info CellMeasuredResultsv920ext::theInfo = {
	CellMeasuredResultsv920ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *CellMeasurementEventResults::choicesInfo[2] = {
	&CellMeasurementEventResultsFdd::theInfo,
	&CellMeasurementEventResultsTdd::theInfo,
};
const CellMeasurementEventResults::Info CellMeasurementEventResults::theInfo = {
	CellMeasurementEventResults::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *CellMeasurementEventResultsOnSecUlFreq::choicesInfo[2] = {
	&CellMeasurementEventResultsOnSecUlFreqFdd::theInfo,
	&CellMeasurementEventResultsOnSecUlFreqSpare::theInfo,
};
const CellMeasurementEventResultsOnSecUlFreq::Info CellMeasurementEventResultsOnSecUlFreq::theInfo = {
	CellMeasurementEventResultsOnSecUlFreq::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *CellReportingQuantitiesModeSpecificInfoFdd::itemsInfo[3] = {
	&CellReportingQuantitiesModeSpecificInfoFddCpichEcN0reportingIndicator::theInfo,
	&CellReportingQuantitiesModeSpecificInfoFddCpichRSCPreportingIndicator::theInfo,
	&CellReportingQuantitiesModeSpecificInfoFddPathlossreportingIndicator::theInfo,
};
bool CellReportingQuantitiesModeSpecificInfoFdd::itemsPres[3] = {
	1,
	1,
	1,
};
const CellReportingQuantitiesModeSpecificInfoFdd::Info CellReportingQuantitiesModeSpecificInfoFdd::theInfo = {
	CellReportingQuantitiesModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *CellReportingQuantitiesModeSpecificInfoTdd::itemsInfo[4] = {
	&CellReportingQuantitiesModeSpecificInfoTddTimeslotISCPreportingIndicator::theInfo,
	&CellReportingQuantitiesModeSpecificInfoTddProposedTGSNReportingRequired::theInfo,
	&CellReportingQuantitiesModeSpecificInfoTddPrimaryCCPCHRSCPreportingIndicator::theInfo,
	&CellReportingQuantitiesModeSpecificInfoTddPathlossreportingIndicator::theInfo,
};
bool CellReportingQuantitiesModeSpecificInfoTdd::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const CellReportingQuantitiesModeSpecificInfoTdd::Info CellReportingQuantitiesModeSpecificInfoTdd::theInfo = {
	CellReportingQuantitiesModeSpecificInfoTdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 0, 0
};

const void *CellReportingQuantitiesModeSpecificInfo::choicesInfo[2] = {
	&CellReportingQuantitiesModeSpecificInfoFdd::theInfo,
	&CellReportingQuantitiesModeSpecificInfoTdd::theInfo,
};
const CellReportingQuantitiesModeSpecificInfo::Info CellReportingQuantitiesModeSpecificInfo::theInfo = {
	CellReportingQuantitiesModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *CellReportingQuantities::itemsInfo[4] = {
	&SFNSFNOTDType::theInfo,
	&CellReportingQuantitiesCellIdentityreportingIndicator::theInfo,
	&CellReportingQuantitiesCellSynchronisationInfoReportingIndicator::theInfo,
	&CellReportingQuantitiesModeSpecificInfo::theInfo,
};
bool CellReportingQuantities::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const CellReportingQuantities::Info CellReportingQuantities::theInfo = {
	CellReportingQuantities::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 0, 0
};

const void *CellSelectReselectInfoSIB1112ModeSpecificInfoFdd::itemsInfo[2] = {
	&QQualMin::theInfo,
	&QRxlevMin::theInfo,
};
bool CellSelectReselectInfoSIB1112ModeSpecificInfoFdd::itemsPres[2] = {
	0,
	0,
};
const CellSelectReselectInfoSIB1112ModeSpecificInfoFdd::Info CellSelectReselectInfoSIB1112ModeSpecificInfoFdd::theInfo = {
	CellSelectReselectInfoSIB1112ModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *CellSelectReselectInfoSIB1112ModeSpecificInfoTdd::itemsInfo[1] = {
	&QRxlevMin::theInfo,
};
bool CellSelectReselectInfoSIB1112ModeSpecificInfoTdd::itemsPres[1] = {
	0,
};
const CellSelectReselectInfoSIB1112ModeSpecificInfoTdd::Info CellSelectReselectInfoSIB1112ModeSpecificInfoTdd::theInfo = {
	CellSelectReselectInfoSIB1112ModeSpecificInfoTdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *CellSelectReselectInfoSIB1112ModeSpecificInfoGsm::itemsInfo[1] = {
	&QRxlevMin::theInfo,
};
bool CellSelectReselectInfoSIB1112ModeSpecificInfoGsm::itemsPres[1] = {
	0,
};
const CellSelectReselectInfoSIB1112ModeSpecificInfoGsm::Info CellSelectReselectInfoSIB1112ModeSpecificInfoGsm::theInfo = {
	CellSelectReselectInfoSIB1112ModeSpecificInfoGsm::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *CellSelectReselectInfoSIB1112ModeSpecificInfo::choicesInfo[3] = {
	&CellSelectReselectInfoSIB1112ModeSpecificInfoFdd::theInfo,
	&CellSelectReselectInfoSIB1112ModeSpecificInfoTdd::theInfo,
	&CellSelectReselectInfoSIB1112ModeSpecificInfoGsm::theInfo,
};
const CellSelectReselectInfoSIB1112ModeSpecificInfo::Info CellSelectReselectInfoSIB1112ModeSpecificInfo::theInfo = {
	CellSelectReselectInfoSIB1112ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *CellSelectReselectInfoSIB1112::itemsInfo[5] = {
	&QOffsetSN::theInfo,
	&QOffsetSN::theInfo,
	&MaxAllowedULTXPower::theInfo,
	&HCSNeighbouringCellInformationRSCP::theInfo,
	&CellSelectReselectInfoSIB1112ModeSpecificInfo::theInfo,
};
bool CellSelectReselectInfoSIB1112::itemsPres[5] = {
	0,
	0,
	0,
	0,
	1,
};
const CellSelectReselectInfoSIB1112::Info CellSelectReselectInfoSIB1112::theInfo = {
	CellSelectReselectInfoSIB1112::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 4, 0
};

const void *CellSelectReselectInfov590ext::itemsInfo[2] = {
	&DeltaQrxlevmin::theInfo,
	&DeltaRSCP::theInfo,
};
bool CellSelectReselectInfov590ext::itemsPres[2] = {
	0,
	0,
};
const CellSelectReselectInfov590ext::Info CellSelectReselectInfov590ext::theInfo = {
	CellSelectReselectInfov590ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *CellSelectReselectInfoPCHFACHv5b0ext::itemsInfo[6] = {
	&QHystSFine::theInfo,
	&QHystSFine::theInfo,
	&QHystSFine::theInfo,
	&QHystSFine::theInfo,
	&TReselectionS::theInfo,
	&TReselectionSFine::theInfo,
};
bool CellSelectReselectInfoPCHFACHv5b0ext::itemsPres[6] = {
	0,
	0,
	0,
	0,
	0,
	0,
};
const CellSelectReselectInfoPCHFACHv5b0ext::Info CellSelectReselectInfoPCHFACHv5b0ext::theInfo = {
	CellSelectReselectInfoPCHFACHv5b0ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 6, 0
};

const void *CellSelectReselectInfoTreselectionScalingv5c0ext::itemsInfo[4] = {
	&TCRMax::theInfo,
	&SpeedDependentScalingFactor::theInfo,
	&TreselectionScalingFactor::theInfo,
	&TreselectionScalingFactor::theInfo,
};
bool CellSelectReselectInfoTreselectionScalingv5c0ext::itemsPres[4] = {
	0,
	0,
	0,
	0,
};
const CellSelectReselectInfoTreselectionScalingv5c0ext::Info CellSelectReselectInfoTreselectionScalingv5c0ext::theInfo = {
	CellSelectReselectInfoTreselectionScalingv5c0ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 4, 0
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

const void *CNAVclockModel::itemsInfo[15] = {
	&CNAVclockModelCnavToc::theInfo,
	&CNAVclockModelCnavTop::theInfo,
	&CNAVclockModelCnavURA0::theInfo,
	&CNAVclockModelCnavURA1::theInfo,
	&CNAVclockModelCnavURA2::theInfo,
	&CNAVclockModelCnavAf2::theInfo,
	&CNAVclockModelCnavAf1::theInfo,
	&CNAVclockModelCnavAf0::theInfo,
	&CNAVclockModelCnavTgd::theInfo,
	&CNAVclockModelCnavISCl1cp::theInfo,
	&CNAVclockModelCnavISCl1cd::theInfo,
	&CNAVclockModelCnavISCl1ca::theInfo,
	&CNAVclockModelCnavISCl2c::theInfo,
	&CNAVclockModelCnavISCl5i5::theInfo,
	&CNAVclockModelCnavISCl5q5::theInfo,
};
bool CNAVclockModel::itemsPres[15] = {
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
	0,
	0,
	0,
	0,
	0,
};
const CNAVclockModel::Info CNAVclockModel::theInfo = {
	CNAVclockModel::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	15, 6, 0
};

const void *CSGCellInfoModeSpecificInfoFdd::itemsInfo[2] = {
	&PrimaryCPICHInfo::theInfo,
	&CSGCellInfoModeSpecificInfoFddNumberOfPSCs::theInfo,
};
bool CSGCellInfoModeSpecificInfoFdd::itemsPres[2] = {
	1,
	1,
};
const CSGCellInfoModeSpecificInfoFdd::Info CSGCellInfoModeSpecificInfoFdd::theInfo = {
	CSGCellInfoModeSpecificInfoFdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *CSGCellInfoModeSpecificInfo::choicesInfo[2] = {
	&CSGCellInfoModeSpecificInfoFdd::theInfo,
	&CSGCellInfoModeSpecificInfoTdd::theInfo,
};
const CSGCellInfoModeSpecificInfo::Info CSGCellInfoModeSpecificInfo::theInfo = {
	CSGCellInfoModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
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

const void *CSGInterFreqCellInfo::itemsInfo[2] = {
	&FrequencyInfo::theInfo,
	&CSGCellInfoList::theInfo,
};
bool CSGInterFreqCellInfo::itemsPres[2] = {
	1,
	1,
};
const CSGInterFreqCellInfo::Info CSGInterFreqCellInfo::theInfo = {
	CSGInterFreqCellInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *CSGProximityDetection::itemsInfo[2] = {
	&CSGProximityDetectionuTRACSGProximityDetec::theInfo,
	&CSGProximityDetectione_UTRACSGProximityDetec::theInfo,
};
bool CSGProximityDetection::itemsPres[2] = {
	0,
	0,
};
const CSGProximityDetection::Info CSGProximityDetection::theInfo = {
	CSGProximityDetection::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *CSGProximityIndicationRadioAccessTechnologyUTRA::itemsInfo[1] = {
	&FrequencyInfo::theInfo,
};
bool CSGProximityIndicationRadioAccessTechnologyUTRA::itemsPres[1] = {
	1,
};
const CSGProximityIndicationRadioAccessTechnologyUTRA::Info CSGProximityIndicationRadioAccessTechnologyUTRA::theInfo = {
	CSGProximityIndicationRadioAccessTechnologyUTRA::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *CSGProximityIndicationRadioAccessTechnologyEUTRA::itemsInfo[1] = {
	&EARFCN::theInfo,
};
bool CSGProximityIndicationRadioAccessTechnologyEUTRA::itemsPres[1] = {
	1,
};
const CSGProximityIndicationRadioAccessTechnologyEUTRA::Info CSGProximityIndicationRadioAccessTechnologyEUTRA::theInfo = {
	CSGProximityIndicationRadioAccessTechnologyEUTRA::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *CSGProximityIndicationRadioAccessTechnology::choicesInfo[2] = {
	&CSGProximityIndicationRadioAccessTechnologyUTRA::theInfo,
	&CSGProximityIndicationRadioAccessTechnologyEUTRA::theInfo,
};
const CSGProximityIndicationRadioAccessTechnology::Info CSGProximityIndicationRadioAccessTechnology::theInfo = {
	CSGProximityIndicationRadioAccessTechnology::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *CSGProximityIndication::itemsInfo[2] = {
	&CSGProximityIndicationcSGproximityInd::theInfo,
	&CSGProximityIndicationRadioAccessTechnology::theInfo,
};
bool CSGProximityIndication::itemsPres[2] = {
	1,
	1,
};
const CSGProximityIndication::Info CSGProximityIndication::theInfo = {
	CSGProximityIndication::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *DataBitAssistance::itemsInfo[2] = {
	&GANSSSignalId::theInfo,
	&DataBitAssistanceDatabits::theInfo,
};
bool DataBitAssistance::itemsPres[2] = {
	1,
	1,
};
const DataBitAssistance::Info DataBitAssistance::theInfo = {
	DataBitAssistance::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *DataBitAssistanceSat::itemsInfo[2] = {
	&DataBitAssistanceSatSatID::theInfo,
	&DataBitAssistanceSgnList::theInfo,
};
bool DataBitAssistanceSat::itemsPres[2] = {
	1,
	1,
};
const DataBitAssistanceSat::Info DataBitAssistanceSat::theInfo = {
	DataBitAssistanceSat::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *DeltaUT1::itemsInfo[2] = {
	&DeltaUT1B1::theInfo,
	&DeltaUT1B2::theInfo,
};
bool DeltaUT1::itemsPres[2] = {
	1,
	1,
};
const DeltaUT1::Info DeltaUT1::theInfo = {
	DeltaUT1::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *DGANSSSignalInformation::itemsInfo[3] = {
	&DGANSSSignalInformationSatId::theInfo,
	&DGANSSSignalInformationIodedganss::theInfo,
	&UDRE::theInfo,
};
bool DGANSSSignalInformation::itemsPres[3] = {
	1,
	1,
	1,
};
const DGANSSSignalInformation::Info DGANSSSignalInformation::theInfo = {
	DGANSSSignalInformation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *DGANSSInfo::itemsInfo[3] = {
	&GANSSSignalId::theInfo,
	&GANSSStatusHealth::theInfo,
	&DGANSSSignalInformationList::theInfo,
};
bool DGANSSInfo::itemsPres[3] = {
	0,
	1,
	0,
};
const DGANSSInfo::Info DGANSSInfo::theInfo = {
	DGANSSInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *DGANSSSignalInformationr9::itemsInfo[5] = {
	&DGANSSSignalInformationr9SatId::theInfo,
	&DGANSSSignalInformationr9Iodedganss::theInfo,
	&UDRE::theInfo,
	&UDREGrowthRate::theInfo,
	&UDREValidityTime::theInfo,
};
bool DGANSSSignalInformationr9::itemsPres[5] = {
	1,
	1,
	1,
	0,
	0,
};
const DGANSSSignalInformationr9::Info DGANSSSignalInformationr9::theInfo = {
	DGANSSSignalInformationr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 2, 0
};

const void *DGANSSInfor9::itemsInfo[3] = {
	&GANSSSignalId::theInfo,
	&GANSSStatusHealth::theInfo,
	&DGANSSSignalInformationListr9::theInfo,
};
bool DGANSSInfor9::itemsPres[3] = {
	0,
	1,
	0,
};
const DGANSSInfor9::Info DGANSSInfor9::theInfo = {
	DGANSSInfor9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *DGANSSSignalInformationv920ext::itemsInfo[2] = {
	&UDREGrowthRate::theInfo,
	&UDREValidityTime::theInfo,
};
bool DGANSSSignalInformationv920ext::itemsPres[2] = {
	0,
	0,
};
const DGANSSSignalInformationv920ext::Info DGANSSSignalInformationv920ext::theInfo = {
	DGANSSSignalInformationv920ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
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

const void *DGPSCorrectionSatInfo::itemsInfo[9] = {
	&SatID::theInfo,
	&IODE::theInfo,
	&UDRE::theInfo,
	&PRC::theInfo,
	&RRC::theInfo,
	&DeltaPRC::theInfo,
	&DeltaRRC::theInfo,
	&DeltaPRC::theInfo,
	&DeltaRRC::theInfo,
};
bool DGPSCorrectionSatInfo::itemsPres[9] = {
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	0,
	0,
};
const DGPSCorrectionSatInfo::Info DGPSCorrectionSatInfo::theInfo = {
	DGPSCorrectionSatInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	9, 2, 0
};

const void *DGPSCorrectionSatInfov920ext::itemsInfo[2] = {
	&UDREGrowthRate::theInfo,
	&UDREValidityTime::theInfo,
};
bool DGPSCorrectionSatInfov920ext::itemsPres[2] = {
	0,
	0,
};
const DGPSCorrectionSatInfov920ext::Info DGPSCorrectionSatInfov920ext::theInfo = {
	DGPSCorrectionSatInfov920ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

