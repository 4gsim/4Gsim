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

#include "RRCIe.h"





const void *CNDomainInformation::itemsInfo[2] = {
	&CNDomainIdentity::theInfo,
	&NASSystemInformationGSMMAP::theInfo,
};
const void *CNDomainInformation::itemsPres[2] = {
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
const void *CNDomainInformationFull::itemsPres[3] = {
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




const void *Cn_Type::choicesInfo[2] = {
	&NASSystemInformationGSMMAP::theInfo,
	&NASSystemInformationANSI41::theInfo,
};
const Cn_Type::Info Cn_Type::theInfo = {
	Cn_Type::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *CNDomainSysInfo::itemsInfo[3] = {
	&CNDomainIdentity::theInfo,
	&Cn_Type::theInfo,
	&CNDRXCycleLengthCoefficient::theInfo,
};
const void *CNDomainSysInfo::itemsPres[3] = {
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
const void *PLMNIdentity::itemsPres[2] = {
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
const void *CNInformationInfo::itemsPres[3] = {
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
const void *CNInformationInfor6::itemsPres[4] = {
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
const void *CNInformationInfoFull::itemsPres[3] = {
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


const void *LocalPTMSI::itemsInfo[1] = {
	&RoutingParameter::theInfo,
};
const void *LocalPTMSI::itemsPres[1] = {
	1,
};
const LocalPTMSI::Info LocalPTMSI::theInfo = {
	LocalPTMSI::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *TMSIofsamePLMN::itemsInfo[1] = {
	&RoutingParameter::theInfo,
};
const void *TMSIofsamePLMN::itemsPres[1] = {
	1,
};
const TMSIofsamePLMN::Info TMSIofsamePLMN::theInfo = {
	TMSIofsamePLMN::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *TMSIofdifferentPLMN::itemsInfo[1] = {
	&RoutingParameter::theInfo,
};
const void *TMSIofdifferentPLMN::itemsPres[1] = {
	1,
};
const TMSIofdifferentPLMN::Info TMSIofdifferentPLMN::theInfo = {
	TMSIofdifferentPLMN::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *IMSIresponsetopaging::itemsInfo[1] = {
	&RoutingParameter::theInfo,
};
const void *IMSIresponsetopaging::itemsPres[1] = {
	1,
};
const IMSIresponsetopaging::Info IMSIresponsetopaging::theInfo = {
	IMSIresponsetopaging::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *IMSIcauseUEinitiatedEvent::itemsInfo[1] = {
	&RoutingParameter::theInfo,
};
const void *IMSIcauseUEinitiatedEvent::itemsPres[1] = {
	1,
};
const IMSIcauseUEinitiatedEvent::Info IMSIcauseUEinitiatedEvent::theInfo = {
	IMSIcauseUEinitiatedEvent::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *IMEI::itemsInfo[1] = {
	&RoutingParameter::theInfo,
};
const void *IMEI::itemsPres[1] = {
	1,
};
const IMEI::Info IMEI::theInfo = {
	IMEI::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *Spare2::itemsInfo[1] = {
	&RoutingParameter::theInfo,
};
const void *Spare2::itemsPres[1] = {
	1,
};
const Spare2::Info Spare2::theInfo = {
	Spare2::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *Spare1::itemsInfo[1] = {
	&RoutingParameter::theInfo,
};
const void *Spare1::itemsPres[1] = {
	1,
};
const Spare1::Info Spare1::theInfo = {
	Spare1::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *Routingbasis::choicesInfo[8] = {
	&LocalPTMSI::theInfo,
	&TMSIofsamePLMN::theInfo,
	&TMSIofdifferentPLMN::theInfo,
	&IMSIresponsetopaging::theInfo,
	&IMSIcauseUEinitiatedEvent::theInfo,
	&IMEI::theInfo,
	&Spare2::theInfo,
	&Spare1::theInfo,
};
const Routingbasis::Info Routingbasis::theInfo = {
	Routingbasis::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	7
};


const void *GsmmapIDNNS::itemsInfo[2] = {
	&Routingbasis::theInfo,
	&Dummy::theInfo,
};
const void *GsmmapIDNNS::itemsPres[2] = {
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




const void *Cn_Type::choicesInfo[2] = {
	&GsmmapIDNNS::theInfo,
	&Ansi41IDNNS::theInfo,
};
const Cn_Type::Info Cn_Type::theInfo = {
	Cn_Type::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Release99::itemsInfo[1] = {
	&Cn_Type::theInfo,
};
const void *Release99::itemsPres[1] = {
	1,
};
const Release99::Info Release99::theInfo = {
	Release99::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};


const void *Later::itemsInfo[1] = {
	&Futurecoding::theInfo,
};
const void *Later::itemsPres[1] = {
	1,
};
const Later::Info Later::theInfo = {
	Later::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *Version::choicesInfo[2] = {
	&Release99::theInfo,
	&Later::theInfo,
};
const Version::Info Version::theInfo = {
	Version::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *IntraDomainNasNodeSelector::itemsInfo[1] = {
	&Version::theInfo,
};
const void *IntraDomainNasNodeSelector::itemsPres[1] = {
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
	&Lac::theInfo,
};
const void *LAI::itemsPres[2] = {
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
	&NoRestriction::theInfo,
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
const void *PLMNIdentityWithOptionalMCCr6::itemsPres[2] = {
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
	&MibPLMN_Identity::theInfo,
	&MultiplePLMNs::theInfo,
};
const void *MultiplePLMNListr6::itemsPres[2] = {
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
	&pagingResponseRestrictionIndicator::theInfo,
	&locationRegistrationRestrictionIndicator::theInfo,
	&LocationRegistrationParameters::theInfo,
};
const void *PagingPermissionWithAccessControlParameters::itemsPres[3] = {
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
const void *PagingPermissionWithAccessControlList::itemsPres[5] = {
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


const void *Gsm_MAP::itemsInfo[1] = {
	&PLMNIdentity::theInfo,
};
const void *Gsm_MAP::itemsPres[1] = {
	1,
};
const Gsm_MAP::Info Gsm_MAP::theInfo = {
	Gsm_MAP::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};





const void *Ansi_41::itemsInfo[4] = {
	&PREV::theInfo,
	&MinPREV::theInfo,
	&SID::theInfo,
	&NID::theInfo,
};
const void *Ansi_41::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const Ansi_41::Info Ansi_41::theInfo = {
	Ansi_41::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 0, 0
};

const void *Gsm_MAP_and_ANSI_41::itemsInfo[5] = {
	&PLMNIdentity::theInfo,
	&PREV::theInfo,
	&MinPREV::theInfo,
	&SID::theInfo,
	&NID::theInfo,
};
const void *Gsm_MAP_and_ANSI_41::itemsPres[5] = {
	1,
	1,
	1,
	1,
	1,
};
const Gsm_MAP_and_ANSI_41::Info Gsm_MAP_and_ANSI_41::theInfo = {
	Gsm_MAP_and_ANSI_41::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 0, 0
};


const void *PLMNType::choicesInfo[4] = {
	&Gsm_MAP::theInfo,
	&Ansi_41::theInfo,
	&Gsm_MAP_and_ANSI_41::theInfo,
	&Spare::theInfo,
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
	&Gsm_MAP_RAB_Identity::theInfo,
	&Ansi_41_RAB_Identity::theInfo,
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
const void *RAI::itemsPres[2] = {
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





const void *Barred::itemsInfo[2] = {
	&AllowedIndicator::theInfo,
	&TBarred::theInfo,
};
const void *Barred::itemsPres[2] = {
	1,
	1,
};
const Barred::Info Barred::theInfo = {
	Barred::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};


const void *CellBarred::choicesInfo[2] = {
	&Barred::theInfo,
	&NotBarred::theInfo,
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
const void *CellAccessRestriction::itemsPres[4] = {
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
	&cellReservedForCSG::theInfo,
};
const void *CellAccessRestrictionv870ext::itemsPres[1] = {
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
const void *MappingFunctionParameter::itemsPres[4] = {
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
const void *Mapping::itemsPres[2] = {
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



const void *Cpich_Ec_N0::itemsInfo[1] = {
	&QHystS::theInfo,
};
const void *Cpich_Ec_N0::itemsPres[1] = {
	0,
};
const Cpich_Ec_N0::Info Cpich_Ec_N0::theInfo = {
	Cpich_Ec_N0::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};


const void *CellSelectQualityMeasure::choicesInfo[2] = {
	&Cpich_Ec_N0::theInfo,
	&Cpich_RSCP::theInfo,
};
const CellSelectQualityMeasure::Info CellSelectQualityMeasure::theInfo = {
	CellSelectQualityMeasure::create,
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
const void *RATFDDInfo::itemsPres[4] = {
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




const void *Fdd::itemsInfo[6] = {
	&SSearchQual::theInfo,
	&SSearchQual::theInfo,
	&SSearchRXLEV::theInfo,
	&RATFDDInfoList::theInfo,
	&QQualMin::theInfo,
	&QRxlevMin::theInfo,
};
const void *Fdd::itemsPres[6] = {
	0,
	0,
	0,
	0,
	1,
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
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
const void *RATTDDInfo::itemsPres[4] = {
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


const void *Tdd::itemsInfo[5] = {
	&SSearchRXLEV::theInfo,
	&SSearchRXLEV::theInfo,
	&SSearchRXLEV::theInfo,
	&RATTDDInfoList::theInfo,
	&QRxlevMin::theInfo,
};
const void *Tdd::itemsPres[5] = {
	0,
	0,
	0,
	0,
	1,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 4, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};







const void *NCRTCRMaxHyst::itemsInfo[2] = {
	&N_CR::theInfo,
	&TCRMaxHyst::theInfo,
};
const void *NCRTCRMaxHyst::itemsPres[2] = {
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
	&NotUsed::theInfo,
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
const void *HCSServingCellInformation::itemsPres[3] = {
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
	&CellSelectQualityMeasure::theInfo,
	&ModeSpecificInfo::theInfo,
	&QHystS::theInfo,
	&TReselectionS::theInfo,
	&HCSServingCellInformation::theInfo,
	&MaxAllowedULTXPower::theInfo,
};
const void *CellSelectReselectInfoSIB34::itemsPres[7] = {
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
const void *FrequencyInfoFDD::itemsPres[2] = {
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
const void *FrequencyInfoTDD::itemsPres[1] = {
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

const void *ModeSpecificInfo::choicesInfo[2] = {
	&FrequencyInfoFDD::theInfo,
	&FrequencyInfoTDD::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *FrequencyInfo::itemsInfo[1] = {
	&ModeSpecificInfo::theInfo,
};
const void *FrequencyInfo::itemsPres[1] = {
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
	&StartPSC::theInfo,
	&numberOfPSCs::theInfo,
	&PscRange2Offset::theInfo,
};
const void *CSGPSCSplitInfo::itemsPres[3] = {
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


const void *Restriction::itemsInfo[1] = {
	&AccessClassBarredList::theInfo,
};
const void *Restriction::itemsPres[1] = {
	0,
};
const Restriction::Info Restriction::theInfo = {
	Restriction::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DomainSpecificAccessRestrictionv670ext::choicesInfo[2] = {
	&NoRestriction::theInfo,
	&Restriction::theInfo,
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
const void *DomainSpecificAccessRestrictionParamv670ext::itemsPres[2] = {
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
const void *DomainSpecificAccessRestrictionListv670ext::itemsPres[5] = {
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
const void *MappingLCRr4::itemsPres[1] = {
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





const void *UtraFDD::itemsInfo[0] = {
};
const void *UtraFDD::itemsPres[0] = {
};
const UtraFDD::Info UtraFDD::theInfo = {
	UtraFDD::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *UtraTDD::itemsInfo[0] = {
};
const void *UtraTDD::itemsPres[0] = {
};
const UtraTDD::Info UtraTDD::theInfo = {
	UtraTDD::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *Eutra::itemsInfo[0] = {
};
const void *Eutra::itemsPres[0] = {
};
const Eutra::Info Eutra::theInfo = {
	Eutra::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};






const void *EquallySpacedARFCNs::itemsInfo[2] = {
	&Arfcn_Spacing::theInfo,
	&NumberOfFollowingARFCNs::theInfo,
};
const void *EquallySpacedARFCNs::itemsPres[2] = {
	1,
	1,
};
const EquallySpacedARFCNs::Info EquallySpacedARFCNs::theInfo = {
	EquallySpacedARFCNs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};


const void *ContinuousRangeOfARFCNs::itemsInfo[1] = {
	&BCCHARFCN::theInfo,
};
const void *ContinuousRangeOfARFCNs::itemsPres[1] = {
	1,
};
const ContinuousRangeOfARFCNs::Info ContinuousRangeOfARFCNs::theInfo = {
	ContinuousRangeOfARFCNs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *FollowingARFCNs::choicesInfo[4] = {
	&ExplicitListOfARFCNs::theInfo,
	&EquallySpacedARFCNs::theInfo,
	&VariableBitMapOfARFCNs::theInfo,
	&ContinuousRangeOfARFCNs::theInfo,
};
const FollowingARFCNs::Info FollowingARFCNs::theInfo = {
	FollowingARFCNs::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	3
};

const void *GSMCellGroup::itemsInfo[3] = {
	&BCCHARFCN::theInfo,
	&bandIndicator::theInfo,
	&FollowingARFCNs::theInfo,
};
const void *GSMCellGroup::itemsPres[3] = {
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

const void *Gsm::itemsInfo[1] = {
	&GSMCellGroup::theInfo,
};
const void *Gsm::itemsPres[1] = {
	1,
};
const Gsm::Info Gsm::theInfo = {
	Gsm::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *RadioAccessTechnology::choicesInfo[4] = {
	&UtraFDD::theInfo,
	&UtraTDD::theInfo,
	&Eutra::theInfo,
	&Gsm::theInfo,
};
const RadioAccessTechnology::Info RadioAccessTechnology::theInfo = {
	RadioAccessTechnology::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	3
};

const void *PriorityLevel::itemsInfo[2] = {
	&Priority::theInfo,
	&RadioAccessTechnology::theInfo,
};
const void *PriorityLevel::itemsPres[2] = {
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



const void *ConfigureDedicatedPriorities::itemsInfo[3] = {
	&T322::theInfo,
	&PriorityLevelList::theInfo,
	&EutraDetection::theInfo,
};
const void *ConfigureDedicatedPriorities::itemsPres[3] = {
	0,
	0,
	1,
};
const ConfigureDedicatedPriorities::Info ConfigureDedicatedPriorities::theInfo = {
	ConfigureDedicatedPriorities::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *Action::choicesInfo[2] = {
	&ClearDedicatedPriorities::theInfo,
	&ConfigureDedicatedPriorities::theInfo,
};
const Action::Info Action::theInfo = {
	Action::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DedicatedPriorityInformation::itemsInfo[1] = {
	&Action::theInfo,
};
const void *DedicatedPriorityInformation::itemsPres[1] = {
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
const void *BackoffControlParams::itemsPres[7] = {
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
	&Ue_RadioCapabilityFDDUpdateRequirement::theInfo,
	&Ue_RadioCapabilityTDDUpdateRequirement::theInfo,
	&SystemSpecificCapUpdateReqList::theInfo,
};
const void *CapabilityUpdateRequirement::itemsPres[3] = {
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
	&Ue_RadioCapabilityUpdateRequirement_TDD128::theInfo,
};
const void *CapabilityUpdateRequirementr4ext::itemsPres[1] = {
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
	&Ue_RadioCapabilityFDDUpdateRequirement_FDD::theInfo,
	&Ue_RadioCapabilityTDDUpdateRequirement_TDD384::theInfo,
	&Ue_RadioCapabilityTDDUpdateRequirement_TDD128::theInfo,
	&SystemSpecificCapUpdateReqList::theInfo,
};
const void *CapabilityUpdateRequirementr4::itemsPres[4] = {
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
	&Ue_RadioCapabilityFDDUpdateRequirement_FDD::theInfo,
	&Ue_RadioCapabilityTDDUpdateRequirement_TDD384::theInfo,
	&Ue_RadioCapabilityTDDUpdateRequirement_TDD128::theInfo,
	&SystemSpecificCapUpdateReqListr5::theInfo,
};
const void *CapabilityUpdateRequirementr5::itemsPres[4] = {
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
	&Ue_RadioCapabilityTDDUpdateRequirement_TDD768::theInfo,
};
const void *CapabilityUpdateRequirementv770ext::itemsPres[1] = {
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
	&Ue_RadioCapabilityFDDUpdateRequirement_FDD::theInfo,
	&Ue_RadioCapabilityTDDUpdateRequirement_TDD384::theInfo,
	&Ue_RadioCapabilityTDDUpdateRequirement_TDD768::theInfo,
	&Ue_RadioCapabilityTDDUpdateRequirement_TDD128::theInfo,
	&SystemSpecificCapUpdateReqListr5::theInfo,
};
const void *CapabilityUpdateRequirementr7::itemsPres[5] = {
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
const void *CapabilityUpdateRequirementv860ext::itemsPres[1] = {
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
	&Ue_RadioCapabilityFDDUpdateRequirement_FDD::theInfo,
	&Ue_RadioCapabilityTDDUpdateRequirement_TDD384::theInfo,
	&Ue_RadioCapabilityTDDUpdateRequirement_TDD768::theInfo,
	&Ue_RadioCapabilityTDDUpdateRequirement_TDD128::theInfo,
	&SystemSpecificCapUpdateReqListr8::theInfo,
};
const void *CapabilityUpdateRequirementr8::itemsPres[5] = {
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
	&Dummy::theInfo,
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
const void *CipheringModeCommandr7::itemsPres[1] = {
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
const void *RBActivationTimeInfo::itemsPres[2] = {
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
const void *CipheringModeInfo::itemsPres[3] = {
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
const void *CipheringModeInfor7::itemsPres[3] = {
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
	&Spare3::theInfo,
	&Spare2::theInfo,
	&Spare1::theInfo,
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
	&Gsm900::theInfo,
	&Dcs1800::theInfo,
	&Gsm1900::theInfo,
};
const void *GSMMeasurements::itemsPres[3] = {
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
	&Fdd_Measurements::theInfo,
	&Tdd_Measurements::theInfo,
	&GSMMeasurements::theInfo,
	&MultiCarrierMeasurements::theInfo,
};
const void *CompressedModeMeasCapability::itemsPres[4] = {
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
	&Tdd128_Measurements::theInfo,
};
const void *CompressedModeMeasCapabilityLCRr4::itemsPres[1] = {
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
	&adjacentFrequencyMeasurements::theInfo,
};
const void *CompressedModeMeasCapabilityv860ext::itemsPres[1] = {
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
	&interBandMeasurements::theInfo,
};
const void *CompressedModeMeasCapabilityv920ext::itemsPres[1] = {
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
	&CompressedMode::theInfo,
};
const void *CompressedModeMeasCapabEUTRA::itemsPres[2] = {
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
	&Dl_MeasurementsFDD::theInfo,
	&Ul_MeasurementsFDD::theInfo,
};
const void *CompressedModeMeasCapabFDD::itemsPres[3] = {
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
	&Dl_MeasurementsFDD::theInfo,
	&Ul_MeasurementsFDD::theInfo,
};
const void *CompressedModeMeasCapabFDD2::itemsPres[4] = {
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
	&Dl_MeasurementsFDD::theInfo,
	&Ul_MeasurementsFDD::theInfo,
};
const void *CompressedModeMeasCapabFDDext::itemsPres[3] = {
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
	&Dl_MeasurementsTDD::theInfo,
	&Ul_MeasurementsTDD::theInfo,
};
const void *CompressedModeMeasCapabTDD::itemsPres[3] = {
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
	&Dl_MeasurementsGSM::theInfo,
	&Ul_MeasurementsGSM::theInfo,
};
const void *CompressedModeMeasCapabGSM::itemsPres[3] = {
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
	&Dl_MeasurementsMC::theInfo,
	&Ul_MeasurementsMC::theInfo,
};
const void *CompressedModeMeasCapabMC::itemsPres[2] = {
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
	&Algorithm2::theInfo,
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
const void *CPCHParameters::itemsPres[4] = {
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
	&supportOfIntraFreqProximityIndication::theInfo,
	&supportOfInterFreqProximityIndication::theInfo,
	&supportOfE_UtraProximityIndication::theInfo,
};
const void *CSGProximityIndicationCapability::itemsPres[3] = {
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
const void *PrimaryCPICHInfo::itemsPres[1] = {
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
const void *SecondaryCPICHInfo::itemsPres[2] = {
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
	&Dl_ChannelisationCode::theInfo,
	&TPCCombinationIndex::theInfo,
	&STTDIndication::theInfo,
};
const void *DLFDPCHInfoPerRLr7::itemsPres[8] = {
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
const void *EAGCHInformation::itemsPres[1] = {
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
const void *EHICHInformation::itemsPres[2] = {
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
const void *ERGCHInformation::itemsPres[2] = {
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


const void *E_RGCH_Info::choicesInfo[2] = {
	&ERGCHInformation::theInfo,
	&ReleaseIndicator::theInfo,
};
const E_RGCH_Info::Info E_RGCH_Info::theInfo = {
	E_RGCH_Info::create,
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
	&E_RGCH_Info::theInfo,
};
const void *DLInformationPerSecondaryRL::itemsPres[6] = {
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









const void *Supported::itemsInfo[2] = {
	&MaxNoSCCPCHRL::theInfo,
	&SimultaneousSCCPCH_DPCH_DPDCH_Reception::theInfo,
};
const void *Supported::itemsPres[2] = {
	1,
	1,
};
const Supported::Info Supported::theInfo = {
	Supported::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *SimultaneousSCCPCHDPCHReception::choicesInfo[2] = {
	&NotSupported::theInfo,
	&Supported::theInfo,
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
	&MaxNoDPCH_PDSCH_Codes::theInfo,
	&MaxNoPhysChBitsReceived::theInfo,
	&SupportForSF_512::theInfo,
	&Dummy::theInfo,
	&SimultaneousSCCPCHDPCHReception::theInfo,
};
const void *DLPhysChCapabilityFDD::itemsPres[5] = {
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
const void *DLPhysChCapabilityFDDv380ext::itemsPres[1] = {
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
	&hsscchlessHsdschOperation::theInfo,
	&enhancedFdpch::theInfo,
	&hsdschReception_CellFach::theInfo,
	&hsdschReception_CellUraPch::theInfo,
};
const void *DLPhysChCapabilityFDDv770ext::itemsPres[5] = {
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
	&supportOfTargetCellPreConfig::theInfo,
	&supportOfHsdschDrxOperation::theInfo,
};
const void *DLPhysChCapabilityFDDv860ext::itemsPres[3] = {
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
	&supportOfMimoOnlySingleStream::theInfo,
};
const void *DLPhysChCapabilityFDDv920ext::itemsPres[2] = {
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
	&SupportOfPDSCH::theInfo,
	&MaxPhysChPerTS::theInfo,
};
const void *DLPhysChCapabilityTDD::itemsPres[5] = {
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
	&SupportOfPDSCH::theInfo,
	&MaxPhysChPerTS::theInfo,
	&SupportOf8PSK::theInfo,
};
const void *DLPhysChCapabilityTDDLCRr4::itemsPres[6] = {
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
const void *DLPhysChCapabilityTDD128v770ext::itemsPres[1] = {
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
	&supportOfSFModeForHSPDSCHDualStream::theInfo,
};
const void *DLPhysChCapabilityTDD128v860ext::itemsPres[3] = {
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






const void *Tdd768_hspdsch::choicesInfo[2] = {
	&HSDSCHphysicallayercategory::theInfo,
	&Unsupported::theInfo,
};
const Tdd768_hspdsch::Info Tdd768_hspdsch::theInfo = {
	Tdd768_hspdsch::create,
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
	&SupportOfPDSCH::theInfo,
	&Tdd768_hspdsch::theInfo,
	&MaxPhysChPerTS768::theInfo,
};
const void *DLPhysChCapabilityTDD768::itemsPres[6] = {
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
	&SupportOfPDSCH::theInfo,
	&MaxPhysChPerTS768::theInfo,
};
const void *DLPhysChCapabilityInfoTDD768::itemsPres[5] = {
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
	&NotSupported::theInfo,
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
const void *DLTransChCapability::itemsPres[8] = {
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
const void *DRACSysInfo::itemsPres[2] = {
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












const void *Type1::itemsInfo[1] = {
	&ProtocolErrorCause::theInfo,
};
const void *Type1::itemsPres[1] = {
	1,
};
const Type1::Info Type1::theInfo = {
	Type1::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};


const void *DiagnosticsType::choicesInfo[2] = {
	&Type1::theInfo,
	&Spare::theInfo,
};
const DiagnosticsType::Info DiagnosticsType::theInfo = {
	DiagnosticsType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ProtocolErrorInformation::itemsInfo[1] = {
	&DiagnosticsType::theInfo,
};
const void *ProtocolErrorInformation::itemsPres[1] = {
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
	&ConfigurationUnsupported::theInfo,
	&PhysicalChannelFailure::theInfo,
	&IncompatibleSimultaneousReconfiguration::theInfo,
	&TGPSI::theInfo,
	&ProtocolErrorInformation::theInfo,
	&CellUpdateOccurred::theInfo,
	&InvalidConfiguration::theInfo,
	&ConfigurationIncomplete::theInfo,
	&UnsupportedMeasurement::theInfo,
	&MbmsSessionAlreadyReceivedCorrectly::theInfo,
	&LowerPriorityMBMSService::theInfo,
	&Spare5::theInfo,
	&Spare4::theInfo,
	&Spare3::theInfo,
	&Spare2::theInfo,
	&Spare1::theInfo,
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
const void *FailureCauseWithProtErrTrId::itemsPres[2] = {
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




const void *Release::itemsInfo[1] = {
	&ReleaseCause::theInfo,
};
const void *Release::itemsPres[1] = {
	1,
};
const Release::Info Release::theInfo = {
	Release::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *RRCConnectionReleaseInformation::choicesInfo[2] = {
	&NoRelease::theInfo,
	&Release::theInfo,
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
	&All::theInfo,
	&U_RNTI_BitMaskIndex_b1::theInfo,
	&U_RNTI_BitMaskIndex_b2::theInfo,
	&U_RNTI_BitMaskIndex_b3::theInfo,
	&U_RNTI_BitMaskIndex_b4::theInfo,
	&U_RNTI_BitMaskIndex_b5::theInfo,
	&U_RNTI_BitMaskIndex_b6::theInfo,
	&U_RNTI_BitMaskIndex_b7::theInfo,
	&U_RNTI_BitMaskIndex_b8::theInfo,
	&U_RNTI_BitMaskIndex_b9::theInfo,
	&U_RNTI_BitMaskIndex_b10::theInfo,
	&U_RNTI_BitMaskIndex_b11::theInfo,
	&U_RNTI_BitMaskIndex_b12::theInfo,
	&U_RNTI_BitMaskIndex_b13::theInfo,
	&U_RNTI_BitMaskIndex_b14::theInfo,
	&U_RNTI_BitMaskIndex_b15::theInfo,
	&U_RNTI_BitMaskIndex_b16::theInfo,
	&U_RNTI_BitMaskIndex_b17::theInfo,
	&U_RNTI_BitMaskIndex_b18::theInfo,
	&U_RNTI_BitMaskIndex_b19::theInfo,
	&U_RNTI_BitMaskIndex_b20::theInfo,
	&U_RNTI_BitMaskIndex_b21::theInfo,
	&U_RNTI_BitMaskIndex_b22::theInfo,
	&U_RNTI_BitMaskIndex_b23::theInfo,
	&U_RNTI_BitMaskIndex_b24::theInfo,
	&U_RNTI_BitMaskIndex_b25::theInfo,
	&U_RNTI_BitMaskIndex_b26::theInfo,
	&U_RNTI_BitMaskIndex_b27::theInfo,
	&U_RNTI_BitMaskIndex_b28::theInfo,
	&U_RNTI_BitMaskIndex_b29::theInfo,
	&U_RNTI_BitMaskIndex_b30::theInfo,
	&U_RNTI_BitMaskIndex_b31::theInfo,
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
const void *GroupReleaseInformation::itemsPres[1] = {
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
const void *GroupIdentityWithReleaseInformation::itemsPres[2] = {
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
	&IdleInterval::theInfo,
};
const void *IdleIntervalMeasCapabEUTRA::itemsPres[2] = {
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
const void *IMSIandESNDS41::itemsPres[2] = {
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
const void *TMSIandLAIGSMMAP::itemsPres[2] = {
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
const void *PTMSIandRAIGSMMAP::itemsPres[2] = {
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
const void *IntegrityCheckInfo::itemsPres[2] = {
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
const void *IntegrityProtActivationInfo::itemsPres[1] = {
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




const void *StartIntegrityProtection::itemsInfo[1] = {
	&IntegrityProtInitNumber::theInfo,
};
const void *StartIntegrityProtection::itemsPres[1] = {
	1,
};
const StartIntegrityProtection::Info StartIntegrityProtection::theInfo = {
	StartIntegrityProtection::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *Modify::itemsInfo[1] = {
	&IntegrityProtActivationInfo::theInfo,
};
const void *Modify::itemsPres[1] = {
	1,
};
const Modify::Info Modify::theInfo = {
	Modify::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *IntegrityProtectionModeCommand::choicesInfo[2] = {
	&StartIntegrityProtection::theInfo,
	&Modify::theInfo,
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
const void *IntegrityProtectionModeInfo::itemsPres[2] = {
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
const void *IntegrityProtectionModeInfor7::itemsPres[2] = {
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
const void *MeasurementCapability::itemsPres[2] = {
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
const void *MeasurementCapabilityExt::itemsPres[4] = {
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
const void *MeasurementCapabilityExt2::itemsPres[4] = {
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
const void *MeasurementCapabilityExt3::itemsPres[1] = {
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
const void *MeasurementCapabilityr4ext::itemsPres[2] = {
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
const void *MeasurementCapabilityv860ext::itemsPres[1] = {
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
const void *MeasurementCapabilityv920ext::itemsPres[1] = {
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
const void *MeasurementCapabilityTDD::itemsPres[1] = {
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
	&SupportOfGSM::theInfo,
	&SupportOfMulticarrier::theInfo,
};
const void *MultiRATCapability::itemsPres[2] = {
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
	&SupportOfUTRAN_ToGERAN_NACC::theInfo,
};
const void *MultiModeRATCapabilityv590ext::itemsPres[1] = {
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
	&supportOfHandoverToGAN::theInfo,
};
const void *MultiModeRATCapabilityv680ext::itemsPres[1] = {
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
	&supportOfPSHandoverToGAN::theInfo,
};
const void *MultiModeRATCapabilityv770ext::itemsPres[1] = {
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
	&supportOfEUTRAFDD::theInfo,
	&supportOfInterRATHOToEUTRAFDD::theInfo,
	&supportOfEUTRATDD::theInfo,
	&supportOfInterRATHOToEUTRATDD::theInfo,
	&EutraFeatureGroupIndicators::theInfo,
};
const void *MultiModeRATCapabilityv860ext::itemsPres[5] = {
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
	&supportOfIntraFreqSIAcquisitionForHO::theInfo,
	&supportOfInterFreqSIAcquisitionForHO::theInfo,
	&supportOfE_UtraSIAcquisitionForHO::theInfo,
};
const void *NeighCellSIAcquisitionCapability::itemsPres[3] = {
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
const void *NetworkAssistedGANSSSupportedList::itemsPres[0] = {
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
const void *NetworkAssistedGANSSSupportedListv860ext::itemsPres[0] = {
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



const void *Cn_Identity::itemsInfo[3] = {
	&PagingCause::theInfo,
	&CNDomainIdentity::theInfo,
	&CNPagedUEIdentity::theInfo,
};
const void *Cn_Identity::itemsPres[3] = {
	1,
	1,
	1,
};
const Cn_Identity::Info Cn_Identity::theInfo = {
	Cn_Identity::create,
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
const void *URNTI::itemsPres[2] = {
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

const void *Cn_OriginatedPage_connectedMode_UE::itemsInfo[3] = {
	&PagingCause::theInfo,
	&CNDomainIdentity::theInfo,
	&PagingRecordTypeID::theInfo,
};
const void *Cn_OriginatedPage_connectedMode_UE::itemsPres[3] = {
	1,
	1,
	1,
};
const Cn_OriginatedPage_connectedMode_UE::Info Cn_OriginatedPage_connectedMode_UE::theInfo = {
	Cn_OriginatedPage_connectedMode_UE::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *Utran_Identity::itemsInfo[2] = {
	&URNTI::theInfo,
	&Cn_OriginatedPage_connectedMode_UE::theInfo,
};
const void *Utran_Identity::itemsPres[2] = {
	1,
	0,
};
const Utran_Identity::Info Utran_Identity::theInfo = {
	Utran_Identity::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *PagingRecord::choicesInfo[2] = {
	&Cn_Identity::theInfo,
	&Utran_Identity::theInfo,
};
const PagingRecord::Info PagingRecord::theInfo = {
	PagingRecord::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Cn_OriginatedPage_connectedMode_UE::itemsInfo[3] = {
	&PagingCause::theInfo,
	&CNDomainIdentity::theInfo,
	&PagingRecordTypeID::theInfo,
};
const void *Cn_OriginatedPage_connectedMode_UE::itemsPres[3] = {
	1,
	1,
	1,
};
const Cn_OriginatedPage_connectedMode_UE::Info Cn_OriginatedPage_connectedMode_UE::theInfo = {
	Cn_OriginatedPage_connectedMode_UE::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *Utran_SingleUE_Identity::itemsInfo[3] = {
	&URNTI::theInfo,
	&Cn_OriginatedPage_connectedMode_UE::theInfo,
	&RRCConnectionReleaseInformation::theInfo,
};
const void *Utran_SingleUE_Identity::itemsPres[3] = {
	1,
	0,
	1,
};
const Utran_SingleUE_Identity::Info Utran_SingleUE_Identity::theInfo = {
	Utran_SingleUE_Identity::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};


const void *PagingRecord2r5::choicesInfo[2] = {
	&Utran_SingleUE_Identity::theInfo,
	&Utran_GroupIdentity::theInfo,
};
const PagingRecord2r5::Info PagingRecord2r5::theInfo = {
	PagingRecord2r5::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};





const void *SupportForRfc2507::choicesInfo[2] = {
	&NotSupported::theInfo,
	&MaxHcContextSpace::theInfo,
};
const SupportForRfc2507::Info SupportForRfc2507::theInfo = {
	SupportForRfc2507::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *PDCPCapability::itemsInfo[2] = {
	&LosslessSRNS_RelocationSupport::theInfo,
	&SupportForRfc2507::theInfo,
};
const void *PDCPCapability::itemsPres[2] = {
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



const void *Supported::itemsInfo[2] = {
	&MaxROHCContextSessionsr4::theInfo,
	&ReverseCompressionDepth::theInfo,
};
const void *Supported::itemsPres[2] = {
	0,
	0,
};
const Supported::Info Supported::theInfo = {
	Supported::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *SupportForRfc3095::choicesInfo[2] = {
	&NotSupported::theInfo,
	&Supported::theInfo,
};
const SupportForRfc3095::Info SupportForRfc3095::theInfo = {
	SupportForRfc3095::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *PDCPCapabilityr4ext::itemsInfo[1] = {
	&SupportForRfc3095::theInfo,
};
const void *PDCPCapabilityr4ext::itemsPres[1] = {
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
	&SupportForRfc3095ContextRelocation::theInfo,
	&MaxHcContextSpacer5ext::theInfo,
};
const void *PDCPCapabilityr5ext::itemsPres[2] = {
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
	&losslessDLRLC_PDUSizeChange::theInfo,
};
const void *PDCPCapabilityr5ext2::itemsPres[1] = {
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
	&supportForCSVoiceoverHSPA::theInfo,
};
const void *PDCPCapabilityv770ext::itemsPres[1] = {
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
	&Dummy::theInfo,
};
const void *ULPhysChCapabilityFDD::itemsPres[2] = {
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

const void *FddPhysChCapability::itemsInfo[2] = {
	&DLPhysChCapabilityFDD::theInfo,
	&ULPhysChCapabilityFDD::theInfo,
};
const void *FddPhysChCapability::itemsPres[2] = {
	1,
	1,
};
const FddPhysChCapability::Info FddPhysChCapability::theInfo = {
	FddPhysChCapability::create,
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
	&SupportOfPUSCH::theInfo,
};
const void *ULPhysChCapabilityTDD::itemsPres[4] = {
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

const void *TddPhysChCapability::itemsInfo[2] = {
	&DLPhysChCapabilityTDD::theInfo,
	&ULPhysChCapabilityTDD::theInfo,
};
const void *TddPhysChCapability::itemsPres[2] = {
	1,
	1,
};
const TddPhysChCapability::Info TddPhysChCapability::theInfo = {
	TddPhysChCapability::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *PhysicalChannelCapability::itemsInfo[2] = {
	&FddPhysChCapability::theInfo,
	&TddPhysChCapability::theInfo,
};
const void *PhysicalChannelCapability::itemsPres[2] = {
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
	&Edch_PhysicalLayerCategory_extension::theInfo,
	&discontinuousDpcchTransmission::theInfo,
	&slotFormat4::theInfo,
};
const void *ULPhysChCapabilityFDDv770ext::itemsPres[3] = {
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

const void *FddPhysChCapability::itemsInfo[2] = {
	&DLPhysChCapabilityFDDv770ext::theInfo,
	&ULPhysChCapabilityFDDv770ext::theInfo,
};
const void *FddPhysChCapability::itemsPres[2] = {
	1,
	1,
};
const FddPhysChCapability::Info FddPhysChCapability::theInfo = {
	FddPhysChCapability::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};


const void *Supported::itemsInfo[1] = {
	&Tdd_edch_PhysicalLayerCategory::theInfo,
};
const void *Supported::itemsPres[1] = {
	1,
};
const Supported::Info Supported::theInfo = {
	Supported::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};


const void *Tdd384_edch::choicesInfo[2] = {
	&Supported::theInfo,
	&Unsupported::theInfo,
};
const Tdd384_edch::Info Tdd384_edch::theInfo = {
	Tdd384_edch::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULPhysChCapabilityTDD384v770ext::itemsInfo[1] = {
	&Tdd384_edch::theInfo,
};
const void *ULPhysChCapabilityTDD384v770ext::itemsPres[1] = {
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

const void *TddPhysChCapability_384::itemsInfo[1] = {
	&ULPhysChCapabilityTDD384v770ext::theInfo,
};
const void *TddPhysChCapability_384::itemsPres[1] = {
	1,
};
const TddPhysChCapability_384::Info TddPhysChCapability_384::theInfo = {
	TddPhysChCapability_384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};



const void *Supported::itemsInfo[1] = {
	&Tdd_edch_PhysicalLayerCategory::theInfo,
};
const void *Supported::itemsPres[1] = {
	1,
};
const Supported::Info Supported::theInfo = {
	Supported::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};


const void *Tdd384_edch::choicesInfo[2] = {
	&Supported::theInfo,
	&Unsupported::theInfo,
};
const Tdd384_edch::Info Tdd384_edch::theInfo = {
	Tdd384_edch::create,
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
	&SupportOfPUSCH::theInfo,
	&Tdd384_edch::theInfo,
};
const void *ULPhysChCapabilityTDD768::itemsPres[5] = {
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

const void *TddPhysChCapability_768::itemsInfo[2] = {
	&DLPhysChCapabilityTDD768::theInfo,
	&ULPhysChCapabilityTDD768::theInfo,
};
const void *TddPhysChCapability_768::itemsPres[2] = {
	1,
	1,
};
const TddPhysChCapability_768::Info TddPhysChCapability_768::theInfo = {
	TddPhysChCapability_768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};


const void *Supported::itemsInfo[1] = {
	&Tdd_edch_PhysicalLayerCategory::theInfo,
};
const void *Supported::itemsPres[1] = {
	1,
};
const Supported::Info Supported::theInfo = {
	Supported::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};


const void *Tdd128_edch::choicesInfo[2] = {
	&Supported::theInfo,
	&Unsupported::theInfo,
};
const Tdd128_edch::Info Tdd128_edch::theInfo = {
	Tdd128_edch::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULPhysChCapabilityTDD128v770ext::itemsInfo[2] = {
	&MaxPhysChPerTimeslotLCRr7::theInfo,
	&Tdd128_edch::theInfo,
};
const void *ULPhysChCapabilityTDD128v770ext::itemsPres[2] = {
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

const void *TddPhysChCapability_128::itemsInfo[2] = {
	&DLPhysChCapabilityTDD128v770ext::theInfo,
	&ULPhysChCapabilityTDD128v770ext::theInfo,
};
const void *TddPhysChCapability_128::itemsPres[2] = {
	1,
	1,
};
const TddPhysChCapability_128::Info TddPhysChCapability_128::theInfo = {
	TddPhysChCapability_128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *PhysicalChannelCapabilityv770ext::itemsInfo[4] = {
	&FddPhysChCapability::theInfo,
	&TddPhysChCapability_384::theInfo,
	&TddPhysChCapability_768::theInfo,
	&TddPhysChCapability_128::theInfo,
};
const void *PhysicalChannelCapabilityv770ext::itemsPres[4] = {
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

const void *FddPhysChCapability::itemsInfo[1] = {
	&DLPhysChCapabilityFDDv860ext::theInfo,
};
const void *FddPhysChCapability::itemsPres[1] = {
	1,
};
const FddPhysChCapability::Info FddPhysChCapability::theInfo = {
	FddPhysChCapability::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *TddPhysChCapability_128::itemsInfo[1] = {
	&DLPhysChCapabilityTDD128v860ext::theInfo,
};
const void *TddPhysChCapability_128::itemsPres[1] = {
	1,
};
const TddPhysChCapability_128::Info TddPhysChCapability_128::theInfo = {
	TddPhysChCapability_128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PhysicalChannelCapabilityv860ext::itemsInfo[2] = {
	&FddPhysChCapability::theInfo,
	&TddPhysChCapability_128::theInfo,
};
const void *PhysicalChannelCapabilityv860ext::itemsPres[2] = {
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
	&Edch_PhysicalLayerCategory_extension2::theInfo,
};
const void *ULPhysChCapabilityFDDv920ext::itemsPres[1] = {
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

const void *FddPhysChCapability::itemsInfo[2] = {
	&DLPhysChCapabilityFDDv920ext::theInfo,
	&ULPhysChCapabilityFDDv920ext::theInfo,
};
const void *FddPhysChCapability::itemsPres[2] = {
	1,
	1,
};
const FddPhysChCapability::Info FddPhysChCapability::theInfo = {
	FddPhysChCapability::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *PhysicalChannelCapabilityv920ext::itemsInfo[1] = {
	&FddPhysChCapability::theInfo,
};
const void *PhysicalChannelCapabilityv920ext::itemsPres[1] = {
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

const void *TddPhysChCapability_768::itemsInfo[2] = {
	&DLPhysChCapabilityInfoTDD768::theInfo,
	&ULPhysChCapabilityTDD::theInfo,
};
const void *TddPhysChCapability_768::itemsPres[2] = {
	1,
	1,
};
const TddPhysChCapability_768::Info TddPhysChCapability_768::theInfo = {
	TddPhysChCapability_768::create,
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
const void *ULPhysChCapabilityInfoTDD128v770ext::itemsPres[1] = {
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

const void *TddPhysChCapability_128::itemsInfo[1] = {
	&ULPhysChCapabilityInfoTDD128v770ext::theInfo,
};
const void *TddPhysChCapability_128::itemsPres[1] = {
	1,
};
const TddPhysChCapability_128::Info TddPhysChCapability_128::theInfo = {
	TddPhysChCapability_128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *PhysicalChannelCapabilityInfov770ext::itemsInfo[2] = {
	&TddPhysChCapability_768::theInfo,
	&TddPhysChCapability_128::theInfo,
};
const void *PhysicalChannelCapabilityInfov770ext::itemsPres[2] = {
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
	&SupportOfPUSCH::theInfo,
	&SupportOf8PSK::theInfo,
};
const void *ULPhysChCapabilityTDDLCRr4::itemsPres[5] = {
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

const void *Tdd128_PhysChCapability::itemsInfo[2] = {
	&DLPhysChCapabilityTDDLCRr4::theInfo,
	&ULPhysChCapabilityTDDLCRr4::theInfo,
};
const void *Tdd128_PhysChCapability::itemsPres[2] = {
	1,
	1,
};
const Tdd128_PhysChCapability::Info Tdd128_PhysChCapability::theInfo = {
	Tdd128_PhysChCapability::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *PhysicalChannelCapabilityLCRr4::itemsInfo[1] = {
	&Tdd128_PhysChCapability::theInfo,
};
const void *PhysicalChannelCapabilityLCRr4::itemsPres[1] = {
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



const void *Supported::itemsInfo[3] = {
	&HSDSCHphysicallayercategory::theInfo,
	&Dummy::theInfo,
	&Dummy2::theInfo,
};
const void *Supported::itemsPres[3] = {
	1,
	1,
	1,
};
const Supported::Info Supported::theInfo = {
	Supported::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};


const void *Fdd_hspdsch::choicesInfo[2] = {
	&Supported::theInfo,
	&Unsupported::theInfo,
};
const Fdd_hspdsch::Info Fdd_hspdsch::theInfo = {
	Fdd_hspdsch::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};


const void *Tdd384_hspdsch::choicesInfo[2] = {
	&HSDSCHphysicallayercategory::theInfo,
	&Unsupported::theInfo,
};
const Tdd384_hspdsch::Info Tdd384_hspdsch::theInfo = {
	Tdd384_hspdsch::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};


const void *Tdd128_hspdsch::choicesInfo[2] = {
	&HSDSCHphysicallayercategory::theInfo,
	&Unsupported::theInfo,
};
const Tdd128_hspdsch::Info Tdd128_hspdsch::theInfo = {
	Tdd128_hspdsch::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *PhysicalChannelCapabilityhspdschr5::itemsInfo[3] = {
	&Fdd_hspdsch::theInfo,
	&Tdd384_hspdsch::theInfo,
	&Tdd128_hspdsch::theInfo,
};
const void *PhysicalChannelCapabilityhspdschr5::itemsPres[3] = {
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
	&numberOfRepetitionsPerSFNPeriod::theInfo,
};
const void *PNBSCHAllocationr4::itemsPres[1] = {
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
	&SupportEUTRA_FDD::theInfo,
	&SupportEUTRA_TDD::theInfo,
};
const void *PreRedirectionInfo::itemsPres[2] = {
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



const void *ErrorOccurred::itemsInfo[2] = {
	&RRCTransactionIdentifier::theInfo,
	&ProtocolErrorInformation::theInfo,
};
const void *ErrorOccurred::itemsPres[2] = {
	1,
	1,
};
const ErrorOccurred::Info ErrorOccurred::theInfo = {
	ErrorOccurred::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *ProtocolErrorIndicatorWithMoreInfo::choicesInfo[2] = {
	&NoError::theInfo,
	&ErrorOccurred::theInfo,
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
const void *IdentificationOfReceivedMessage::itemsPres[2] = {
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



const void *Type1::choicesInfo[8] = {
	&Asn1_ViolationOrEncodingError::theInfo,
	&MessageTypeNonexistent::theInfo,
	&IdentificationOfReceivedMessage::theInfo,
	&IdentificationOfReceivedMessage::theInfo,
	&IdentificationOfReceivedMessage::theInfo,
	&IdentificationOfReceivedMessage::theInfo,
	&Spare1::theInfo,
	&Spare2::theInfo,
};
const Type1::Info Type1::theInfo = {
	Type1::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	7
};


const void *DiagnosticsType::choicesInfo[2] = {
	&Type1::theInfo,
	&Spare::theInfo,
};
const DiagnosticsType::Info DiagnosticsType::theInfo = {
	DiagnosticsType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ProtocolErrorMoreInformation::itemsInfo[1] = {
	&DiagnosticsType::theInfo,
};
const void *ProtocolErrorMoreInformation::itemsPres[1] = {
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
	&T314_expired::theInfo,
	&T315_expired::theInfo,
};
const void *Rbtimerindicator::itemsPres[2] = {
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
const void *BSIC::itemsPres[2] = {
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
const void *GSMTargetCellInfo::itemsPres[3] = {
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
const void *InterRATInfor6::itemsPres[2] = {
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
const void *EUTRABlacklistedCell::itemsPres[1] = {
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
const void *EUTRATargetFreqInfo::itemsPres[2] = {
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


const void *Eutra::itemsInfo[1] = {
	&EUTRATargetFreqInfoList::theInfo,
};
const void *Eutra::itemsPres[1] = {
	1,
};
const Eutra::Info Eutra::theInfo = {
	Eutra::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *InterRATInfov860ext::choicesInfo[2] = {
	&Gsm::theInfo,
	&Eutra::theInfo,
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
	&FrequencyInfo::theInfo,
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




const void *FddRF_Capability::itemsInfo[2] = {
	&UEPowerClass::theInfo,
	&TxRxFrequencySeparation::theInfo,
};
const void *FddRF_Capability::itemsPres[2] = {
	1,
	1,
};
const FddRF_Capability::Info FddRF_Capability::theInfo = {
	FddRF_Capability::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *TddRF_Capability::itemsInfo[3] = {
	&UEPowerClass::theInfo,
	&RadioFrequencyBandTDDList::theInfo,
	&ChipRateCapability::theInfo,
};
const void *TddRF_Capability::itemsPres[3] = {
	1,
	1,
	1,
};
const TddRF_Capability::Info TddRF_Capability::theInfo = {
	TddRF_Capability::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *RFCapability::itemsInfo[2] = {
	&FddRF_Capability::theInfo,
	&TddRF_Capability::theInfo,
};
const void *RFCapability::itemsPres[2] = {
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

const void *TddRF_Capability::itemsInfo[3] = {
	&UEPowerClass::theInfo,
	&RadioFrequencyBandTDDList::theInfo,
	&ChipRateCapability::theInfo,
};
const void *TddRF_Capability::itemsPres[3] = {
	1,
	1,
	1,
};
const TddRF_Capability::Info TddRF_Capability::theInfo = {
	TddRF_Capability::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *RFCapabilityr4ext::itemsInfo[1] = {
	&TddRF_Capability::theInfo,
};
const void *RFCapabilityr4ext::itemsPres[1] = {
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

const void *Tdd768RF_Capability::itemsInfo[2] = {
	&UEPowerClass::theInfo,
	&RadioFrequencyBandTDDListr7::theInfo,
};
const void *Tdd768RF_Capability::itemsPres[2] = {
	1,
	1,
};
const Tdd768RF_Capability::Info Tdd768RF_Capability::theInfo = {
	Tdd768RF_Capability::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *RFCapabilityv770ext::itemsInfo[3] = {
	&RadioFrequencyBandTDDListr7::theInfo,
	&Tdd768RF_Capability::theInfo,
	&RadioFrequencyBandTDDListr7::theInfo,
};
const void *RFCapabilityv770ext::itemsPres[3] = {
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
const void *RFCapabilityv860ext::itemsPres[3] = {
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
const void *RLCCapability::itemsPres[3] = {
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
const void *RLCCapabilityr5ext::itemsPres[1] = {
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
	&SupportOfTwoLogicalChannel::theInfo,
};
const void *RLCCapabilityv770ext::itemsPres[1] = {
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
const void *RLCCapabilityv920ext::itemsPres[1] = {
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
	&CipheringAlgorithmCap::theInfo,
	&IntegrityProtectionAlgorithmCap::theInfo,
};
const void *SecurityCapability::itemsPres[2] = {
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
const void *SecondaryServingEDCHCellInfo::itemsPres[2] = {
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





const void *ServingGrant::itemsInfo[1] = {
	&primary_Secondary_GrantSelector::theInfo,
};
const void *ServingGrant::itemsPres[1] = {
	1,
};
const ServingGrant::Info ServingGrant::theInfo = {
	ServingGrant::create,
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
	&Ms2_SchedTransmGrantHARQAlloc::theInfo,
	&ServingGrant::theInfo,
	&MinReducedEDPDCHGainFactor::theInfo,
	&EDCHMinimumSetETFCI::theInfo,
	&DpcchPowerOffset_SecondaryULFrequency::theInfo,
	&PCPreamble::theInfo,
};
const void *SecondaryEDCHInfoCommon::itemsPres[9] = {
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






const void *Fdd::itemsInfo[2] = {
	&HS_SCCHChannelisationCodeInfo::theInfo,
	&SecondaryScramblingCode::theInfo,
};
const void *Fdd::itemsPres[2] = {
	1,
	0,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};




const void *HSSICHPowerControlInfoTDD384::itemsInfo[2] = {
	&Ul_target_SIR::theInfo,
	&ConstantValue::theInfo,
};
const void *HSSICHPowerControlInfoTDD384::itemsPres[2] = {
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






const void *UeSpecificMidamble::itemsInfo[1] = {
	&MidambleShiftLong::theInfo,
};
const void *UeSpecificMidamble::itemsPres[1] = {
	1,
};
const UeSpecificMidamble::Info UeSpecificMidamble::theInfo = {
	UeSpecificMidamble::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MidambleAllocationMode::choicesInfo[3] = {
	&DefaultMidamble::theInfo,
	&CommonMidamble::theInfo,
	&UeSpecificMidamble::theInfo,
};
const MidambleAllocationMode::Info MidambleAllocationMode::theInfo = {
	MidambleAllocationMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};




const void *UeSpecificMidamble::itemsInfo[1] = {
	&MidambleShiftLong::theInfo,
};
const void *UeSpecificMidamble::itemsPres[1] = {
	1,
};
const UeSpecificMidamble::Info UeSpecificMidamble::theInfo = {
	UeSpecificMidamble::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MidambleAllocationMode::choicesInfo[2] = {
	&DefaultMidamble::theInfo,
	&UeSpecificMidamble::theInfo,
};
const MidambleAllocationMode::Info MidambleAllocationMode::theInfo = {
	MidambleAllocationMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *HSSICHConfigurationTDD384::itemsInfo[4] = {
	&TimeslotNumber::theInfo,
	&DLTSChannelisationCode::theInfo,
	&MidambleAllocationMode::theInfo,
	&MidambleConfigurationBurstType1and3::theInfo,
};
const void *HSSICHConfigurationTDD384::itemsPres[4] = {
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
	&MidambleAllocationMode::theInfo,
	&MidambleConfigurationBurstType1and3::theInfo,
	&BlerTarget::theInfo,
	&HSSICHConfigurationTDD384::theInfo,
};
const void *HSSCCHTDD384::itemsPres[6] = {
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


const void *Tdd384::itemsInfo[3] = {
	&Nack_ack_power_offset::theInfo,
	&HSSICHPowerControlInfoTDD384::theInfo,
	&HS_SCCH_SetConfiguration::theInfo,
};
const void *Tdd384::itemsPres[3] = {
	1,
	1,
	1,
};
const Tdd384::Info Tdd384::theInfo = {
	Tdd384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};






const void *MidambleAllocationMode::choicesInfo[3] = {
	&DefaultMidamble::theInfo,
	&CommonMidamble::theInfo,
	&UeSpecificMidamble::theInfo,
};
const MidambleAllocationMode::Info MidambleAllocationMode::theInfo = {
	MidambleAllocationMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};



const void *UeSpecificMidamble::itemsInfo[1] = {
	&MidambleShiftLong::theInfo,
};
const void *UeSpecificMidamble::itemsPres[1] = {
	1,
};
const UeSpecificMidamble::Info UeSpecificMidamble::theInfo = {
	UeSpecificMidamble::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MidambleAllocationMode::choicesInfo[2] = {
	&DefaultMidamble::theInfo,
	&UeSpecificMidamble::theInfo,
};
const MidambleAllocationMode::Info MidambleAllocationMode::theInfo = {
	MidambleAllocationMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};





const void *HSSICHConfigurationTDD128::itemsInfo[7] = {
	&TimeslotNumberLCRr4::theInfo,
	&HSChannelisationCodeLCR::theInfo,
	&MidambleAllocationMode::theInfo,
	&MidambleConfiguration::theInfo,
	&Nack_ack_power_offset::theInfo,
	&Power_level_HSSICH::theInfo,
	&tpc_step_size::theInfo,
};
const void *HSSICHConfigurationTDD128::itemsPres[7] = {
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
	&MidambleAllocationMode::theInfo,
	&MidambleConfiguration::theInfo,
	&BlerTarget::theInfo,
	&HSSICHConfigurationTDD128::theInfo,
};
const void *HSSCCHTDD128::itemsPres[7] = {
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


const void *Tdd::choicesInfo[2] = {
	&Tdd384::theInfo,
	&Tdd128::theInfo,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *HSSCCHInfo::itemsInfo[1] = {
	&ModeSpecificInfo::theInfo,
};
const void *HSSCCHInfo::itemsPres[1] = {
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





const void *Fdd::itemsInfo[4] = {
	&MeasurementPowerOffset::theInfo,
	&Feedbackcycle::theInfo,
	&CQIRepetitionFactor::theInfo,
	&DeltaCQI::theInfo,
};
const void *Fdd::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 0, 0
};


const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *MeasurementFeedbackInfo::itemsInfo[1] = {
	&ModeSpecificInfo::theInfo,
};
const void *MeasurementFeedbackInfo::itemsPres[1] = {
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
const void *DLHSPDSCHTSConfiguration::itemsPres[0] = {
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

const void *Tdd384::itemsInfo[1] = {
	&DLHSPDSCHTSConfiguration::theInfo,
};
const void *Tdd384::itemsPres[1] = {
	0,
};
const Tdd384::Info Tdd384::theInfo = {
	Tdd384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};




const void *MidambleAllocationMode::choicesInfo[3] = {
	&DefaultMidamble::theInfo,
	&CommonMidamble::theInfo,
	&UeSpecificMidamble::theInfo,
};
const MidambleAllocationMode::Info MidambleAllocationMode::theInfo = {
	MidambleAllocationMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};


const void *HSPDSCHMidambleConfigurationTDD128::itemsInfo[2] = {
	&MidambleAllocationMode::theInfo,
	&MidambleConfiguration::theInfo,
};
const void *HSPDSCHMidambleConfigurationTDD128::itemsPres[2] = {
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

const void *Tdd128::itemsInfo[1] = {
	&HSPDSCHMidambleConfigurationTDD128::theInfo,
};
const void *Tdd128::itemsPres[1] = {
	0,
};
const Tdd128::Info Tdd128::theInfo = {
	Tdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *Tdd::choicesInfo[2] = {
	&Tdd384::theInfo,
	&Tdd128::theInfo,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};


const void *ModeSpecificInfo::choicesInfo[2] = {
	&Tdd::theInfo,
	&Fdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLHSPDSCHInformation::itemsInfo[3] = {
	&HSSCCHInfo::theInfo,
	&MeasurementFeedbackInfo::theInfo,
	&ModeSpecificInfo::theInfo,
};
const void *DLHSPDSCHInformation::itemsPres[3] = {
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





const void *MemoryPartitioning::choicesInfo[2] = {
	&Implicit::theInfo,
	&Explicit::theInfo,
};
const MemoryPartitioning::Info MemoryPartitioning::theInfo = {
	MemoryPartitioning::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *HARQInfo::itemsInfo[2] = {
	&NumberOfProcesses::theInfo,
	&MemoryPartitioning::theInfo,
};
const void *HARQInfo::itemsPres[2] = {
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
	&mac_hsResetIndicator::theInfo,
};
const void *ServingHSDSCHCellInformation::itemsPres[7] = {
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


const void *Fdd::itemsInfo[2] = {
	&HS_SCCHChannelisationCodeInfo::theInfo,
	&SecondaryScramblingCode::theInfo,
};
const void *Fdd::itemsPres[2] = {
	1,
	0,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};





const void *UeSpecificMidamble::itemsInfo[1] = {
	&MidambleShiftLong::theInfo,
};
const void *UeSpecificMidamble::itemsPres[1] = {
	1,
};
const UeSpecificMidamble::Info UeSpecificMidamble::theInfo = {
	UeSpecificMidamble::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MidambleAllocationMode::choicesInfo[3] = {
	&DefaultMidamble::theInfo,
	&CommonMidamble::theInfo,
	&UeSpecificMidamble::theInfo,
};
const MidambleAllocationMode::Info MidambleAllocationMode::theInfo = {
	MidambleAllocationMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *HSSCCHTDD384r6::itemsInfo[5] = {
	&TimeslotNumber::theInfo,
	&DLTSChannelisationCode::theInfo,
	&MidambleAllocationMode::theInfo,
	&MidambleConfigurationBurstType1and3::theInfo,
	&HSSICHConfigurationTDD384::theInfo,
};
const void *HSSCCHTDD384r6::itemsPres[5] = {
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


const void *Tdd384::itemsInfo[5] = {
	&Nack_ack_power_offset::theInfo,
	&HSSICHPowerControlInfoTDD384::theInfo,
	&DHSSync::theInfo,
	&BlerTarget::theInfo,
	&HS_SCCH_SetConfiguration::theInfo,
};
const void *Tdd384::itemsPres[5] = {
	1,
	1,
	0,
	1,
	1,
};
const Tdd384::Info Tdd384::theInfo = {
	Tdd384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 1, 0
};



const void *HSSICHPowerControlInfoTDD768::itemsInfo[2] = {
	&Ul_target_SIR::theInfo,
	&ConstantValue::theInfo,
};
const void *HSSICHPowerControlInfoTDD768::itemsPres[2] = {
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




const void *UeSpecificMidamble::itemsInfo[1] = {
	&MidambleShiftLong::theInfo,
};
const void *UeSpecificMidamble::itemsPres[1] = {
	1,
};
const UeSpecificMidamble::Info UeSpecificMidamble::theInfo = {
	UeSpecificMidamble::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MidambleAllocationMode::choicesInfo[3] = {
	&DefaultMidamble::theInfo,
	&CommonMidamble::theInfo,
	&UeSpecificMidamble::theInfo,
};
const MidambleAllocationMode::Info MidambleAllocationMode::theInfo = {
	MidambleAllocationMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};


const void *UeSpecificMidamble::itemsInfo[1] = {
	&MidambleShiftLong::theInfo,
};
const void *UeSpecificMidamble::itemsPres[1] = {
	1,
};
const UeSpecificMidamble::Info UeSpecificMidamble::theInfo = {
	UeSpecificMidamble::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MidambleAllocationMode::choicesInfo[2] = {
	&DefaultMidamble::theInfo,
	&UeSpecificMidamble::theInfo,
};
const MidambleAllocationMode::Info MidambleAllocationMode::theInfo = {
	MidambleAllocationMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *HSSICHConfigurationTDD768::itemsInfo[4] = {
	&TimeslotNumber::theInfo,
	&DLTSChannelisationCodeVHCR::theInfo,
	&MidambleAllocationMode::theInfo,
	&MidambleConfigurationBurstType1and3::theInfo,
};
const void *HSSICHConfigurationTDD768::itemsPres[4] = {
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
	&MidambleAllocationMode::theInfo,
	&MidambleConfigurationBurstType1and3::theInfo,
	&HSSICHConfigurationTDD768::theInfo,
};
const void *HSSCCHTDD768::itemsPres[5] = {
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


const void *Tdd768::itemsInfo[5] = {
	&Nack_ack_power_offset::theInfo,
	&HSSICHPowerControlInfoTDD768::theInfo,
	&DHSSync::theInfo,
	&BlerTarget::theInfo,
	&HS_SCCH_SetConfiguration::theInfo,
};
const void *Tdd768::itemsPres[5] = {
	1,
	1,
	0,
	1,
	1,
};
const Tdd768::Info Tdd768::theInfo = {
	Tdd768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 1, 0
};









const void *MidambleAllocationMode::choicesInfo[3] = {
	&DefaultMidamble::theInfo,
	&CommonMidamble::theInfo,
	&UeSpecificMidamble::theInfo,
};
const MidambleAllocationMode::Info MidambleAllocationMode::theInfo = {
	MidambleAllocationMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};



const void *UeSpecificMidamble::itemsInfo[1] = {
	&MidambleShiftLong::theInfo,
};
const void *UeSpecificMidamble::itemsPres[1] = {
	1,
};
const UeSpecificMidamble::Info UeSpecificMidamble::theInfo = {
	UeSpecificMidamble::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MidambleAllocationMode::choicesInfo[2] = {
	&DefaultMidamble::theInfo,
	&UeSpecificMidamble::theInfo,
};
const MidambleAllocationMode::Info MidambleAllocationMode::theInfo = {
	MidambleAllocationMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};


const void *HSSICHConfigurationTDD128r6::itemsInfo[4] = {
	&TimeslotNumberLCRr4::theInfo,
	&HSChannelisationCodeLCR::theInfo,
	&MidambleAllocationMode::theInfo,
	&MidambleConfiguration::theInfo,
};
const void *HSSICHConfigurationTDD128r6::itemsPres[4] = {
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
	&MidambleAllocationMode::theInfo,
	&MidambleConfiguration::theInfo,
	&HSSICHConfigurationTDD128r6::theInfo,
};
const void *HSSCCHTDD128r6::itemsPres[6] = {
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


const void *Tdd128::itemsInfo[7] = {
	&Nack_ack_power_offset::theInfo,
	&Power_level_HSSICH::theInfo,
	&tpc_step_size::theInfo,
	&BlerTarget::theInfo,
	&PowerControlGAP::theInfo,
	&PathlossCompensationSwitch::theInfo,
	&HS_SCCH_SetConfiguration::theInfo,
};
const void *Tdd128::itemsPres[7] = {
	1,
	1,
	1,
	1,
	0,
	0,
	1,
};
const Tdd128::Info Tdd128::theInfo = {
	Tdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	7, 2, 0
};

const void *Tdd::choicesInfo[3] = {
	&Tdd384::theInfo,
	&Tdd768::theInfo,
	&Tdd128::theInfo,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *HSSCCHInfor7::itemsInfo[1] = {
	&ModeSpecificInfo::theInfo,
};
const void *HSSCCHInfor7::itemsPres[1] = {
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


const void *Fdd::itemsInfo[4] = {
	&MeasurementPowerOffset::theInfo,
	&Feedbackcycler7::theInfo,
	&CQIRepetitionFactor::theInfo,
	&DeltaCQI::theInfo,
};
const void *Fdd::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 0, 0
};


const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *MeasurementFeedbackInfor7::itemsInfo[1] = {
	&ModeSpecificInfo::theInfo,
};
const void *MeasurementFeedbackInfor7::itemsPres[1] = {
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

const void *Tdd384::itemsInfo[1] = {
	&DLHSPDSCHTSConfiguration::theInfo,
};
const void *Tdd384::itemsPres[1] = {
	0,
};
const Tdd384::Info Tdd384::theInfo = {
	Tdd384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *DLHSPDSCHTSConfigurationVHCR::itemsInfo[0] = {
};
const void *DLHSPDSCHTSConfigurationVHCR::itemsPres[0] = {
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

const void *Tdd768::itemsInfo[1] = {
	&DLHSPDSCHTSConfigurationVHCR::theInfo,
};
const void *Tdd768::itemsPres[1] = {
	0,
};
const Tdd768::Info Tdd768::theInfo = {
	Tdd768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};



const void *DLHSPDSCHMultiCarrierInformation::itemsInfo[0] = {
};
const void *DLHSPDSCHMultiCarrierInformation::itemsPres[0] = {
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
	&tsn_Length::theInfo,
	&MultiCarrierNumber::theInfo,
	&DLHSPDSCHMultiCarrierInformation::theInfo,
};
const void *DLMultiCarrierInformation::itemsPres[3] = {
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

const void *Tdd128::itemsInfo[2] = {
	&HSPDSCHMidambleConfigurationTDD128::theInfo,
	&DLMultiCarrierInformation::theInfo,
};
const void *Tdd128::itemsPres[2] = {
	0,
	0,
};
const Tdd128::Info Tdd128::theInfo = {
	Tdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *Tdd::choicesInfo[3] = {
	&Tdd384::theInfo,
	&Tdd768::theInfo,
	&Tdd128::theInfo,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};


const void *Fdd::itemsInfo[1] = {
	&dl_64QAM_Configured::theInfo,
};
const void *Fdd::itemsPres[1] = {
	0,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Tdd::theInfo,
	&Fdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLHSPDSCHInformationr7::itemsInfo[3] = {
	&HSSCCHInfor7::theInfo,
	&MeasurementFeedbackInfor7::theInfo,
	&ModeSpecificInfo::theInfo,
};
const void *DLHSPDSCHInformationr7::itemsPres[3] = {
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





const void *Explicit::itemsInfo[2] = {
	&MemorySize::theInfo,
	&AdditionalMemorySizesForMIMO::theInfo,
};
const void *Explicit::itemsPres[2] = {
	1,
	0,
};
const Explicit::Info Explicit::theInfo = {
	Explicit::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *MemoryPartitioning::choicesInfo[2] = {
	&Implicit::theInfo,
	&Explicit::theInfo,
};
const MemoryPartitioning::Info MemoryPartitioning::theInfo = {
	MemoryPartitioning::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *HARQInfor7::itemsInfo[2] = {
	&numberOfProcesses::theInfo,
	&MemoryPartitioning::theInfo,
};
const void *HARQInfor7::itemsPres[2] = {
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
	&mac_hsResetIndicator::theInfo,
};
const void *ServingHSDSCHCellInformationr7::itemsPres[7] = {
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

const void *Tdd384::itemsInfo[1] = {
	&DLHSPDSCHTSConfiguration::theInfo,
};
const void *Tdd384::itemsPres[1] = {
	0,
};
const Tdd384::Info Tdd384::theInfo = {
	Tdd384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *Tdd768::itemsInfo[1] = {
	&DLHSPDSCHTSConfigurationVHCR::theInfo,
};
const void *Tdd768::itemsPres[1] = {
	0,
};
const Tdd768::Info Tdd768::theInfo = {
	Tdd768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *Tdd128::itemsInfo[2] = {
	&HSPDSCHMidambleConfigurationTDD128::theInfo,
	&DLMultiCarrierInformation::theInfo,
};
const void *Tdd128::itemsPres[2] = {
	0,
	0,
};
const Tdd128::Info Tdd128::theInfo = {
	Tdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *Tdd::choicesInfo[3] = {
	&Tdd384::theInfo,
	&Tdd768::theInfo,
	&Tdd128::theInfo,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};



const void *Fdd::itemsInfo[2] = {
	&dl_64QAM_Configured::theInfo,
	&HSDSCHTBSizeTable::theInfo,
};
const void *Fdd::itemsPres[2] = {
	0,
	0,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Tdd::theInfo,
	&Fdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLHSPDSCHInformationr8::itemsInfo[3] = {
	&HSSCCHInfor7::theInfo,
	&MeasurementFeedbackInfor7::theInfo,
	&ModeSpecificInfo::theInfo,
};
const void *DLHSPDSCHInformationr8::itemsPres[3] = {
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
	&mac_hsResetIndicator::theInfo,
};
const void *ServingHSDSCHCellInformationr8::itemsPres[7] = {
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


const void *Fdd::itemsInfo[2] = {
	&HS_SCCHChannelisationCodeInfo::theInfo,
	&SecondaryScramblingCode::theInfo,
};
const void *Fdd::itemsPres[2] = {
	1,
	0,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};



const void *Tdd384::itemsInfo[5] = {
	&Nack_ack_power_offset::theInfo,
	&HSSICHPowerControlInfoTDD384::theInfo,
	&DHSSync::theInfo,
	&BlerTarget::theInfo,
	&HS_SCCH_SetConfiguration::theInfo,
};
const void *Tdd384::itemsPres[5] = {
	1,
	1,
	0,
	1,
	1,
};
const Tdd384::Info Tdd384::theInfo = {
	Tdd384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 1, 0
};



const void *Tdd768::itemsInfo[5] = {
	&Nack_ack_power_offset::theInfo,
	&HSSICHPowerControlInfoTDD768::theInfo,
	&DHSSync::theInfo,
	&BlerTarget::theInfo,
	&HS_SCCH_SetConfiguration::theInfo,
};
const void *Tdd768::itemsPres[5] = {
	1,
	1,
	0,
	1,
	1,
};
const Tdd768::Info Tdd768::theInfo = {
	Tdd768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 1, 0
};







const void *Tdd128::itemsInfo[8] = {
	&Nack_ack_power_offset::theInfo,
	&Power_level_HSSICH::theInfo,
	&tpc_step_size::theInfo,
	&BlerTarget::theInfo,
	&hS_SCCH_tpc_step_size::theInfo,
	&PowerControlGAP::theInfo,
	&PathlossCompensationSwitch::theInfo,
	&HS_SCCH_SetConfiguration::theInfo,
};
const void *Tdd128::itemsPres[8] = {
	1,
	1,
	1,
	1,
	0,
	0,
	0,
	1,
};
const Tdd128::Info Tdd128::theInfo = {
	Tdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	8, 3, 0
};

const void *Tdd::choicesInfo[3] = {
	&Tdd384::theInfo,
	&Tdd768::theInfo,
	&Tdd128::theInfo,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *HSSCCHInfor9::itemsInfo[1] = {
	&ModeSpecificInfo::theInfo,
};
const void *HSSCCHInfor9::itemsPres[1] = {
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

const void *Tdd384::itemsInfo[1] = {
	&DLHSPDSCHTSConfiguration::theInfo,
};
const void *Tdd384::itemsPres[1] = {
	0,
};
const Tdd384::Info Tdd384::theInfo = {
	Tdd384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *Tdd768::itemsInfo[1] = {
	&DLHSPDSCHTSConfigurationVHCR::theInfo,
};
const void *Tdd768::itemsPres[1] = {
	0,
};
const Tdd768::Info Tdd768::theInfo = {
	Tdd768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};



const void *Tdd128::itemsInfo[4] = {
	&HSPDSCHMidambleConfigurationTDD128::theInfo,
	&DLMultiCarrierInformation::theInfo,
	&tS0_Indicator::theInfo,
	&OutofSyncWindow::theInfo,
};
const void *Tdd128::itemsPres[4] = {
	0,
	0,
	0,
	0,
};
const Tdd128::Info Tdd128::theInfo = {
	Tdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 4, 0
};

const void *Tdd::choicesInfo[3] = {
	&Tdd384::theInfo,
	&Tdd768::theInfo,
	&Tdd128::theInfo,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};


const void *Fdd::itemsInfo[2] = {
	&dl_64QAM_Configured::theInfo,
	&HSDSCHTBSizeTable::theInfo,
};
const void *Fdd::itemsPres[2] = {
	0,
	0,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Tdd::theInfo,
	&Fdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLHSPDSCHInformationr9::itemsInfo[3] = {
	&HSSCCHInfor9::theInfo,
	&MeasurementFeedbackInfor7::theInfo,
	&ModeSpecificInfo::theInfo,
};
const void *DLHSPDSCHInformationr9::itemsPres[3] = {
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
	&mac_hsResetIndicator::theInfo,
};
const void *ServingHSDSCHCellInformationr9::itemsPres[7] = {
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
	&Nonce::theInfo,
};
const void *SRVCCInfo::itemsPres[1] = {
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
const void *RABInfoReplace::itemsPres[2] = {
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
const void *SRVCCSecurityRABInfov860ext::itemsPres[2] = {
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
const void *STARTSingle::itemsPres[2] = {
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
























const void *Tdd::itemsInfo[1] = {
	&MaxSimultaneousCCTrCHCount::theInfo,
};
const void *Tdd::itemsPres[1] = {
	1,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
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
	&ModeSpecificInfo::theInfo,
	&MaxTransportBlocksUL::theInfo,
	&MaxNumberOfTFCUL::theInfo,
	&MaxNumberOfTF::theInfo,
};
const void *ULTransChCapability::itemsPres[8] = {
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
const void *TransportChannelCapability::itemsPres[2] = {
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
const void *URNTIShort::itemsPres[2] = {
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


const void *Supported::itemsInfo[1] = {
	&Edch_PhysicalLayerCategory::theInfo,
};
const void *Supported::itemsPres[1] = {
	1,
};
const Supported::Info Supported::theInfo = {
	Supported::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};


const void *Fdd_edch::choicesInfo[2] = {
	&Supported::theInfo,
	&Unsupported::theInfo,
};
const Fdd_edch::Info Fdd_edch::theInfo = {
	Fdd_edch::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *PhysicalChannelCapabilityedchr6::itemsInfo[1] = {
	&Fdd_edch::theInfo,
};
const void *PhysicalChannelCapabilityedchr6::itemsPres[1] = {
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
	&deviceType::theInfo,
};
const void *UERadioAccessCapabilityv690ext::itemsPres[2] = {
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
	&supportOfInter_RAT_PS_Handover::theInfo,
	&GSMMSRadioAccessCapability::theInfo,
};
const void *InterRATUERadioAccessCapabilityv690ext::itemsPres[2] = {
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
	&supportForSIB11bis::theInfo,
};
const void *UERadioAccessCapabilityv6b0extIEs::itemsPres[1] = {
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
	&supportForFDPCH::theInfo,
};
const void *UERadioAccessCapabilityv6e0extIEs::itemsPres[1] = {
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
const void *UEGANSSPositioningCapability::itemsPres[1] = {
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
const void *UEPositioningCapabilityv770ext::itemsPres[1] = {
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
	&mac_ehsSupport::theInfo,
	&UESpecificCapabilityInformationLCRTDD::theInfo,
};
const void *UERadioAccessCapabilityv770extIEs::itemsPres[8] = {
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
	&supportForEDPCCHPowerBoosting::theInfo,
};
const void *UERadioAccessCapabilityv790extIEs::itemsPres[1] = {
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
const void *UEGANSSPositioningCapabilityv860extIEs::itemsPres[1] = {
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
const void *UEPositioningCapabilityv860ext::itemsPres[1] = {
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
const void *UERadioAccessCapabBandFDD3::itemsPres[3] = {
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
	&supportOfCommonEDCH::theInfo,
	&supportOfMACiis::theInfo,
	&supportOfSPSOperation::theInfo,
	&supportOfControlChannelDRXOperation::theInfo,
	&supportOfCSG::theInfo,
	&UERadioAccessCapabBandFDDList3::theInfo,
};
const void *UERadioAccessCapabilityv860extIEs::itemsPres[12] = {
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
	&Ue_EUTRA_Capability::theInfo,
};
const void *EUTRARadioAccessCapability::itemsPres[1] = {
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
const void *InterRATUERadioAccessCapabilityv860ext::itemsPres[1] = {
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
	&supportForPriorityReselectionInUTRAN::theInfo,
};
const void *UERadioAccessCapabilityv880extIEs::itemsPres[1] = {
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
	&supportCellSpecificTxDiversityinDC_Operation::theInfo,
};
const void *UERadioAccessCapabilityv890extIEs::itemsPres[1] = {
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
	&supportOfenhancedTS0::theInfo,
	&MeasurementCapabilityv920ext::theInfo,
	&CSGProximityIndicationCapability::theInfo,
	&NeighCellSIAcquisitionCapability::theInfo,
};
const void *UERadioAccessCapabilityv920extIEs::itemsPres[7] = {
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
	&ue_ExtendedMeasurementSupport::theInfo,
};
const void *UERadioAccessCapabilityv970extIEs::itemsPres[1] = {
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

const void *NonCriticalExtensions::itemsInfo[0] = {
};
const void *NonCriticalExtensions::itemsPres[0] = {
};
const NonCriticalExtensions::Info NonCriticalExtensions::theInfo = {
	NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *V970NonCriticalExtensions::itemsInfo[2] = {
	&UERadioAccessCapabilityv970extIEs::theInfo,
	&NonCriticalExtensions::theInfo,
};
const void *V970NonCriticalExtensions::itemsPres[2] = {
	1,
	0,
};
const V970NonCriticalExtensions::Info V970NonCriticalExtensions::theInfo = {
	V970NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *V920NonCriticalExtensions::itemsInfo[2] = {
	&UERadioAccessCapabilityv920extIEs::theInfo,
	&V970NonCriticalExtensions::theInfo,
};
const void *V920NonCriticalExtensions::itemsPres[2] = {
	1,
	0,
};
const V920NonCriticalExtensions::Info V920NonCriticalExtensions::theInfo = {
	V920NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *V890NonCriticalExtensions::itemsInfo[2] = {
	&UERadioAccessCapabilityv890extIEs::theInfo,
	&V920NonCriticalExtensions::theInfo,
};
const void *V890NonCriticalExtensions::itemsPres[2] = {
	1,
	0,
};
const V890NonCriticalExtensions::Info V890NonCriticalExtensions::theInfo = {
	V890NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *V880NonCriticalExtensions::itemsInfo[2] = {
	&UERadioAccessCapabilityv880extIEs::theInfo,
	&V890NonCriticalExtensions::theInfo,
};
const void *V880NonCriticalExtensions::itemsPres[2] = {
	1,
	0,
};
const V880NonCriticalExtensions::Info V880NonCriticalExtensions::theInfo = {
	V880NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *V860NonCriticalExtensions::itemsInfo[3] = {
	&UERadioAccessCapabilityv860extIEs::theInfo,
	&InterRATUERadioAccessCapabilityv860ext::theInfo,
	&V880NonCriticalExtensions::theInfo,
};
const void *V860NonCriticalExtensions::itemsPres[3] = {
	1,
	0,
	0,
};
const V860NonCriticalExtensions::Info V860NonCriticalExtensions::theInfo = {
	V860NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *V790NonCriticalExtensions::itemsInfo[2] = {
	&UERadioAccessCapabilityv790extIEs::theInfo,
	&V860NonCriticalExtensions::theInfo,
};
const void *V790NonCriticalExtensions::itemsPres[2] = {
	1,
	0,
};
const V790NonCriticalExtensions::Info V790NonCriticalExtensions::theInfo = {
	V790NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *V770NonCriticalExtensions::itemsInfo[2] = {
	&UERadioAccessCapabilityv770extIEs::theInfo,
	&V790NonCriticalExtensions::theInfo,
};
const void *V770NonCriticalExtensions::itemsPres[2] = {
	1,
	0,
};
const V770NonCriticalExtensions::Info V770NonCriticalExtensions::theInfo = {
	V770NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *V6e0NonCriticalExtensions::itemsInfo[2] = {
	&UERadioAccessCapabilityv6e0extIEs::theInfo,
	&V770NonCriticalExtensions::theInfo,
};
const void *V6e0NonCriticalExtensions::itemsPres[2] = {
	1,
	0,
};
const V6e0NonCriticalExtensions::Info V6e0NonCriticalExtensions::theInfo = {
	V6e0NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *V6b0NonCriticalExtensions::itemsInfo[2] = {
	&UERadioAccessCapabilityv6b0extIEs::theInfo,
	&V6e0NonCriticalExtensions::theInfo,
};
const void *V6b0NonCriticalExtensions::itemsPres[2] = {
	1,
	0,
};
const V6b0NonCriticalExtensions::Info V6b0NonCriticalExtensions::theInfo = {
	V6b0NonCriticalExtensions::create,
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
	&V6b0NonCriticalExtensions::theInfo,
};
const void *UECapabilityContainerIEs::itemsPres[3] = {
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
const void *UEConnTimersAndConstants::itemsPres[22] = {
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
const void *UEConnTimersAndConstantsv3a0ext::itemsPres[2] = {
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
const void *UEConnTimersAndConstantsr5::itemsPres[22] = {
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
const void *UEConnTimersAndConstantsv860ext::itemsPres[1] = {
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
const void *UEIdleTimersAndConstants::itemsPres[4] = {
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
const void *UEHSPAIdentitiesr6::itemsPres[3] = {
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
const void *UEIdleTimersAndConstantsv3a0ext::itemsPres[1] = {
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
const void *UEMultiModeRATCapability::itemsPres[2] = {
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
	&StandaloneLocMethodsSupported::theInfo,
	&Ue_BasedOTDOA_Supported::theInfo,
	&NetworkAssistedGPSSupported::theInfo,
	&SupportForUE_GPS_TimingOfCellFrames::theInfo,
	&SupportForIPDL::theInfo,
};
const void *UEPositioningCapability::itemsPres[5] = {
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
const void *UERadioAccessCapability::itemsPres[9] = {
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

const void *FddRF_Capability::itemsInfo[2] = {
	&UEPowerClassExt::theInfo,
	&TxRxFrequencySeparation::theInfo,
};
const void *FddRF_Capability::itemsPres[2] = {
	1,
	1,
};
const FddRF_Capability::Info FddRF_Capability::theInfo = {
	FddRF_Capability::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *UERadioAccessCapabBandFDD::itemsInfo[3] = {
	&RadioFrequencyBandFDD::theInfo,
	&FddRF_Capability::theInfo,
	&MeasurementCapabilityExt::theInfo,
};
const void *UERadioAccessCapabBandFDD::itemsPres[3] = {
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
const void *UERadioAccessCapabilityv370ext::itemsPres[1] = {
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
const void *UERadioAccessCapabilityInfo::itemsPres[2] = {
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
	&Rx_tx_TimeDifferenceType2Capable::theInfo,
};
const void *UEPositioningCapabilityExtv380::itemsPres[1] = {
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
const void *UERadioAccessCapabilityv380ext::itemsPres[1] = {
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
	&validity_CellPCH_UraPCH::theInfo,
};
const void *UEPositioningCapabilityExtv3a0::itemsPres[1] = {
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
const void *UERadioAccessCapabilityv3a0ext::itemsPres[1] = {
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
	&sfn_sfnType2Capability::theInfo,
};
const void *UEPositioningCapabilityExtv3g0::itemsPres[1] = {
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
const void *UERadioAccessCapabilityv3g0ext::itemsPres[1] = {
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

const void *FddRF_Capability::itemsInfo[2] = {
	&UEPowerClassExt::theInfo,
	&TxRxFrequencySeparation::theInfo,
};
const void *FddRF_Capability::itemsPres[2] = {
	1,
	1,
};
const FddRF_Capability::Info FddRF_Capability::theInfo = {
	FddRF_Capability::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *UERadioAccessCapabBandFDD2::itemsInfo[3] = {
	&RadioFrequencyBandFDD2::theInfo,
	&FddRF_Capability::theInfo,
	&MeasurementCapabilityExt2::theInfo,
};
const void *UERadioAccessCapabBandFDD2::itemsPres[3] = {
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
const void *UERadioAccessCapabBandFDDext::itemsPres[2] = {
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
const void *UERadioAccessCapabilityv650ext::itemsPres[2] = {
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
	&supportForTwoDRXSchemesInPCH::theInfo,
	&supportEDPDCHPowerInterpolation::theInfo,
};
const void *UERadioAccessCapabilityv7e0ext::itemsPres[2] = {
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
	&Tdd_edch_PhysicalLayerCategory::theInfo,
	&DLCapabilityWithSimultaneousHSDSCHConfig::theInfo,
	&supportForCSVoiceoverHSPA::theInfo,
	&TotalRLCAMBufferSizer5ext::theInfo,
};
const void *UERadioAccessCapabilityCompTDD128v7f0ext::itemsPres[6] = {
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
	&supportofTxDivOnNonMIMOChannel::theInfo,
	&PhysicalChannelCapabilityLCRr4::theInfo,
	&UERadioAccessCapabilityCompTDD128v7f0ext::theInfo,
};
const void *UERadioAccessCapabilityv7f0ext::itemsPres[3] = {
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
	&ganssSupportIndication::theInfo,
	&mac_ehsSupport::theInfo,
	&UESpecificCapabilityInformationLCRTDD::theInfo,
};
const void *UERadioAccessCapabilityInfov770ext::itemsPres[5] = {
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
const void *UERadioAccessCapabilityInfoTDD128v8b0ext::itemsPres[2] = {
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
const void *UERadioAccessCapabilityv860ext::itemsPres[1] = {
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
	&supportForPriorityReselectionInUTRAN::theInfo,
};
const void *UERadioAccessCapabilityv880ext::itemsPres[1] = {
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
	&supportCellSpecificTxDiversityinDC_Operation::theInfo,
};
const void *UERadioAccessCapabilityv890ext::itemsPres[1] = {
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
	&supportOfenhancedTS0::theInfo,
};
const void *UERadioAccessCapabilityv920ext::itemsPres[1] = {
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

const void *Tdd_CapabilityExt::itemsInfo[3] = {
	&RFCapabilityr4ext::theInfo,
	&PhysicalChannelCapabilityLCRr4::theInfo,
	&MeasurementCapabilityr4ext::theInfo,
};
const void *Tdd_CapabilityExt::itemsPres[3] = {
	1,
	1,
	1,
};
const Tdd_CapabilityExt::Info Tdd_CapabilityExt::theInfo = {
	Tdd_CapabilityExt::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *UERadioAccessCapabilityv4b0ext::itemsInfo[3] = {
	&PDCPCapabilityr4ext::theInfo,
	&Tdd_CapabilityExt::theInfo,
	&AccessStratumReleaseIndicator::theInfo,
};
const void *UERadioAccessCapabilityv4b0ext::itemsPres[3] = {
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





const void *Fdd::choicesInfo[2] = {
	&NotSupported::theInfo,
	&RFCapabBandListFDDComp::theInfo,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};


const void *Tdd384_RF_Capability::choicesInfo[2] = {
	&NotSupported::theInfo,
	&RadioFrequencyBandTDDList::theInfo,
};
const Tdd384_RF_Capability::Info Tdd384_RF_Capability::theInfo = {
	Tdd384_RF_Capability::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};


const void *Tdd128_RF_Capability::choicesInfo[2] = {
	&NotSupported::theInfo,
	&RadioFrequencyBandTDDList::theInfo,
};
const Tdd128_RF_Capability::Info Tdd128_RF_Capability::theInfo = {
	Tdd128_RF_Capability::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *RFCapabilityComp::itemsInfo[3] = {
	&Fdd::theInfo,
	&Tdd384_RF_Capability::theInfo,
	&Tdd128_RF_Capability::theInfo,
};
const void *RFCapabilityComp::itemsPres[3] = {
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
	&TotalAM_RLCMemoryExceeds10kB::theInfo,
	&RFCapabilityComp::theInfo,
};
const void *UERadioAccessCapabilityComp::itemsPres[2] = {
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
const void *UERadioAccessCapabilityCompext::itemsPres[1] = {
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


const void *Tdd768_RF_Capability::choicesInfo[2] = {
	&NotSupported::theInfo,
	&RadioFrequencyBandTDDListr7::theInfo,
};
const Tdd768_RF_Capability::Info Tdd768_RF_Capability::theInfo = {
	Tdd768_RF_Capability::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *RFCapabilityCompv770ext::itemsInfo[3] = {
	&RadioFrequencyBandTDDListr7::theInfo,
	&Tdd768_RF_Capability::theInfo,
	&RadioFrequencyBandTDDListr7::theInfo,
};
const void *RFCapabilityCompv770ext::itemsPres[3] = {
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
	&securityCapabilityIndication::theInfo,
	&ganssSupportIndication::theInfo,
	&mac_ehsSupport::theInfo,
};
const void *UERadioAccessCapabilityCompv770ext::itemsPres[4] = {
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

const void *FddPhysicalChannelCapab_hspdsch_edch::itemsInfo[3] = {
	&DLCapabilityWithSimultaneousHSDSCHConfig::theInfo,
	&HSDSCHphysicallayercategory::theInfo,
	&PhysicalChannelCapabilityedchr6::theInfo,
};
const void *FddPhysicalChannelCapab_hspdsch_edch::itemsPres[3] = {
	0,
	1,
	1,
};
const FddPhysicalChannelCapab_hspdsch_edch::Info FddPhysicalChannelCapab_hspdsch_edch::theInfo = {
	FddPhysicalChannelCapab_hspdsch_edch::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};

const void *UERadioAccessCapabilityComp2::itemsInfo[1] = {
	&FddPhysicalChannelCapab_hspdsch_edch::theInfo,
};
const void *UERadioAccessCapabilityComp2::itemsPres[1] = {
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
	&Edch_PhysicalLayerCategory_extension::theInfo,
	&hsscchlessHsdschOperation::theInfo,
	&enhancedFdpch::theInfo,
	&hsdschReception_CellFach::theInfo,
	&hsdschReception_CellUraPch::theInfo,
	&discontinuousDpcchTransmission::theInfo,
	&slotFormat4::theInfo,
	&PDCPCapabilityv770ext::theInfo,
};
const void *UERadioAccessCapabilityComp2v770ext::itemsPres[9] = {
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
	&supportofTxDivOnNonMIMOChannel::theInfo,
};
const void *UERadioAccessCapabilityComp2v7f0ext::itemsPres[1] = {
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
	&supportOfMACiis::theInfo,
};
const void *UERadioAccessCapabilityComp2v860ext::itemsPres[2] = {
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
	&Edch_PhysicalLayerCategory_extension2::theInfo,
};
const void *UERadioAccessCapabilityComp2v920ext::itemsPres[2] = {
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
	&supportOfSFModeForHSPDSCHDualStream::theInfo,
	&supportOfCommonEDCH::theInfo,
	&supportOfMACiis::theInfo,
	&supportOfSPSOperation::theInfo,
	&supportOfControlChannelDRXOperation::theInfo,
};
const void *UERadioAccessCapabilityCompTDD128::itemsPres[6] = {
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
const void *UERadioAccessCapabilityv590ext::itemsPres[5] = {
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
const void *UERadioAccessCapabilityv5c0ext::itemsPres[1] = {
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
const void *UERadioAccessCapabilityv680ext::itemsPres[1] = {
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
const void *ULPhysChCapabilityFDDr6::itemsPres[2] = {
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


const void *NewConfiguration::itemsInfo[3] = {
	&SecondaryServingEDCHCellInfo::theInfo,
	&SecondaryEDCHInfoCommon::theInfo,
	&DLInformationPerSecondaryRLList::theInfo,
};
const void *NewConfiguration::itemsPres[3] = {
	0,
	0,
	0,
};
const NewConfiguration::Info NewConfiguration::theInfo = {
	NewConfiguration::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *ULSecondaryCellInfoFDD::choicesInfo[2] = {
	&Continue::theInfo,
	&NewConfiguration::theInfo,
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
const void *UESecurityInformation::itemsPres[1] = {
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
const void *UESecurityInformation2::itemsPres[1] = {
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
	&Drx_CycleLengthCoefficient::theInfo,
	&Drx_CycleLengthCoefficient2::theInfo,
	&T319::theInfo,
};
const void *UTRANDRXCycleLengthCoefficientr7::itemsPres[3] = {
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
	&F_MAX_PERIOD::theInfo,
	&F_MAX_TIME::theInfo,
	&Max_HEADER::theInfo,
	&Tcp_SPACE::theInfo,
	&Non_TCP_SPACE::theInfo,
	&ExpectReordering::theInfo,
};
const void *RFC2507Info::itemsPres[6] = {
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
	&Max_CID::theInfo,
	&ROHCPacketSizeListr4::theInfo,
};
const void *ULRFC3095r4::itemsPres[3] = {
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
	&Max_CID::theInfo,
	&ReverseDecompressionDepth::theInfo,
};
const void *DLRFC3095r4::itemsPres[3] = {
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
const void *RFC3095Infor4::itemsPres[3] = {
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
const void *CommonRBMappingInfo::itemsPres[2] = {
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
const void *CSHSPAInformation::itemsPres[2] = {
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
const void *DefaultConfigForCellFACH::itemsPres[2] = {
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
	&MissingPDU_Indicator::theInfo,
	&TimerStatusPeriodic::theInfo,
};
const void *DLRLCStatusInfo::itemsPres[4] = {
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
	&InSequenceDelivery::theInfo,
	&ReceivingWindowSize::theInfo,
	&DLRLCStatusInfo::theInfo,
};
const void *DLAMRLCMode::itemsPres[3] = {
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




const void *SizeType2::itemsInfo[2] = {
	&Part1::theInfo,
	&Part2::theInfo,
};
const void *SizeType2::itemsPres[2] = {
	1,
	0,
};
const SizeType2::Info SizeType2::theInfo = {
	SizeType2::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};



const void *SizeType3::itemsInfo[2] = {
	&Part1::theInfo,
	&Part2::theInfo,
};
const void *SizeType3::itemsPres[2] = {
	1,
	0,
};
const SizeType3::Info SizeType3::theInfo = {
	SizeType3::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *OctetModeRLCSizeInfoType1::choicesInfo[3] = {
	&SizeType1::theInfo,
	&SizeType2::theInfo,
	&SizeType3::theInfo,
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
	&InSequenceDelivery::theInfo,
	&ReceivingWindowSize::theInfo,
	&DLRLCStatusInfo::theInfo,
};
const void *DLAMRLCModer5::itemsPres[4] = {
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


const void *Dl_RLC_PDU_size::choicesInfo[2] = {
	&OctetModeRLCSizeInfoType1::theInfo,
	&flexibleSize::theInfo,
};
const Dl_RLC_PDU_size::Info Dl_RLC_PDU_size::theInfo = {
	Dl_RLC_PDU_size::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};


const void *DLAMRLCModer7::itemsInfo[4] = {
	&Dl_RLC_PDU_size::theInfo,
	&InSequenceDelivery::theInfo,
	&ReceivingWindowSize::theInfo,
	&DLRLCStatusInfo::theInfo,
};
const void *DLAMRLCModer7::itemsPres[4] = {
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
const void *RBWithPDCPInfo::itemsPres[2] = {
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
const void *DLCounterSynchronisationInfo::itemsPres[1] = {
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
	&Dl_RFC3095_Context_Relocation::theInfo,
	&Ul_RFC3095_Context_Relocation::theInfo,
};
const void *RBPDCPContextRelocation::itemsPres[3] = {
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
const void *DLCounterSynchronisationInfor5::itemsPres[2] = {
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
const void *TransportChannelIdentityDCHandDSCH::itemsPres[2] = {
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
	&Fach::theInfo,
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
const void *DLLogicalChannelMapping::itemsPres[2] = {
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
const void *MACdFlowIdentityDCHandHSDSCH::itemsPres[2] = {
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
	&Fach::theInfo,
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
const void *DLLogicalChannelMappingr5::itemsPres[2] = {
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


const void *Hsdsch::choicesInfo[2] = {
	&MACdFlowIdentity::theInfo,
	&MACehsQueueId::theInfo,
};
const Hsdsch::Info Hsdsch::theInfo = {
	Hsdsch::create,
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
const void *MACehsQueueIdDCHandHSDSCH::itemsPres[2] = {
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

const void *Dch_and_hsdsch::choicesInfo[2] = {
	&MACdFlowIdentityDCHandHSDSCH::theInfo,
	&MACehsQueueIdDCHandHSDSCH::theInfo,
};
const Dch_and_hsdsch::Info Dch_and_hsdsch::theInfo = {
	Dch_and_hsdsch::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLTransportChannelTyper7::choicesInfo[6] = {
	&TransportChannelIdentity::theInfo,
	&Fach::theInfo,
	&TransportChannelIdentity::theInfo,
	&TransportChannelIdentityDCHandDSCH::theInfo,
	&Hsdsch::theInfo,
	&Dch_and_hsdsch::theInfo,
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
const void *DLLogicalChannelMappingr7::itemsPres[2] = {
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
	&SegmentationIndication::theInfo,
};
const void *DLTMRLCMode::itemsPres[1] = {
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
	&Dl_UM_RLC_Mode::theInfo,
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
const void *DLUMRLCModer5::itemsPres[1] = {
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
const void *DLUMRLCModer6::itemsPres[2] = {
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
const void *ExplicitDiscard::itemsPres[3] = {
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
const void *HeaderCompressionInfo::itemsPres[1] = {
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
const void *HeaderCompressionInfor4::itemsPres[1] = {
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
	&NotSupported::theInfo,
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
const void *MaxDATRetransmissions::itemsPres[3] = {
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
const void *PDCPInfo::itemsPres[3] = {
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
const void *PDCPInfor4::itemsPres[3] = {
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
	&Dummy::theInfo,
};
const void *PDCPInfoReconfig::itemsPres[2] = {
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
const void *PDCPInfoReconfigr4::itemsPres[1] = {
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
	&LastTransmissionPDU_Poll::theInfo,
	&LastRetransmissionPDU_Poll::theInfo,
	&PollWindow::theInfo,
	&TimerPollPeriodic::theInfo,
};
const void *PollingInfo::itemsPres[8] = {
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
const void *ULAMRLCMode::itemsPres[5] = {
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
const void *ULUMRLCMode::itemsPres[1] = {
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
	&SegmentationIndication::theInfo,
};
const void *ULTMRLCMode::itemsPres[2] = {
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
	&Spare::theInfo,
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
const void *RLCInfo::itemsPres[2] = {
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
	&Rach::theInfo,
	&Dummy::theInfo,
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
	&Rlc_SizeIndex::theInfo,
};
const void *RLCSizeInfo::itemsPres[1] = {
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


const void *Rlc_SizeList::choicesInfo[3] = {
	&AllSizes::theInfo,
	&Configured::theInfo,
	&RLCSizeExplicitList::theInfo,
};
const Rlc_SizeList::Info Rlc_SizeList::theInfo = {
	Rlc_SizeList::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *ULLogicalChannelMapping::itemsInfo[4] = {
	&ULTransportChannelType::theInfo,
	&LogicalChannelIdentity::theInfo,
	&Rlc_SizeList::theInfo,
	&MACLogicalChannelPriority::theInfo,
};
const void *ULLogicalChannelMapping::itemsPres[4] = {
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
	&Rlc_LogicalChannelMappingIndicator::theInfo,
	&Ul_LogicalChannelMapping::theInfo,
};
const void *ULLogicalChannelMappingList::itemsPres[2] = {
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
const void *RBMappingOption::itemsPres[2] = {
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
const void *SRBInformationSetup::itemsPres[3] = {
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
const void *RBInformationSetup::itemsPres[4] = {
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
const void *PredefinedRBConfiguration::itemsPres[3] = {
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
const void *RestrictedTrChInfo::itemsPres[3] = {
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
	&FullTFCS::theInfo,
};
const TFCSubset::Info TFCSubset::theInfo = {
	TFCSubset::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	4
};

const void *Ctfc2Bit::itemsInfo[0] = {
};
const void *Ctfc2Bit::itemsPres[0] = {
};
const Ctfc2Bit::Info Ctfc2Bit::theInfo = {
	Ctfc2Bit::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *Ctfc4Bit::itemsInfo[0] = {
};
const void *Ctfc4Bit::itemsPres[0] = {
};
const Ctfc4Bit::Info Ctfc4Bit::theInfo = {
	Ctfc4Bit::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *Ctfc6Bit::itemsInfo[0] = {
};
const void *Ctfc6Bit::itemsPres[0] = {
};
const Ctfc6Bit::Info Ctfc6Bit::theInfo = {
	Ctfc6Bit::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *Ctfc8Bit::itemsInfo[0] = {
};
const void *Ctfc8Bit::itemsPres[0] = {
};
const Ctfc8Bit::Info Ctfc8Bit::theInfo = {
	Ctfc8Bit::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *Ctfc12Bit::itemsInfo[0] = {
};
const void *Ctfc12Bit::itemsPres[0] = {
};
const Ctfc12Bit::Info Ctfc12Bit::theInfo = {
	Ctfc12Bit::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *Ctfc16Bit::itemsInfo[0] = {
};
const void *Ctfc16Bit::itemsPres[0] = {
};
const Ctfc16Bit::Info Ctfc16Bit::theInfo = {
	Ctfc16Bit::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *Ctfc24Bit::itemsInfo[0] = {
};
const void *Ctfc24Bit::itemsPres[0] = {
};
const Ctfc24Bit::Info Ctfc24Bit::theInfo = {
	Ctfc24Bit::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *CtfcSize::choicesInfo[7] = {
	&Ctfc2Bit::theInfo,
	&Ctfc4Bit::theInfo,
	&Ctfc6Bit::theInfo,
	&Ctfc8Bit::theInfo,
	&Ctfc12Bit::theInfo,
	&Ctfc16Bit::theInfo,
	&Ctfc24Bit::theInfo,
};
const CtfcSize::Info CtfcSize::theInfo = {
	CtfcSize::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	6
};

const void *TFCSReconfAdd::itemsInfo[1] = {
	&CtfcSize::theInfo,
};
const void *TFCSReconfAdd::itemsPres[1] = {
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
	&Tfci::theInfo,
};
const void *TFCSRemoval::itemsPres[1] = {
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


const void *Replacement::itemsInfo[2] = {
	&TFCSRemovalList::theInfo,
	&TFCSReconfAdd::theInfo,
};
const void *Replacement::itemsPres[2] = {
	1,
	1,
};
const Replacement::Info Replacement::theInfo = {
	Replacement::create,
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
	&Replacement::theInfo,
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
	&Ctfc2bit::theInfo,
	&Ctfc4bit::theInfo,
	&Ctfc6bit::theInfo,
	&Ctfc8bit::theInfo,
	&Ctfc12bit::theInfo,
	&Ctfc16bit::theInfo,
	&Ctfc24bit::theInfo,
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
	&MaxTFCIField2Value::theInfo,
	&TFCSInfoForDSCH::theInfo,
};
const void *TFCIRange::itemsPres[2] = {
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
	&Tfci_Field2_Length::theInfo,
	&ExplicitTFCSConfiguration::theInfo,
	&TFCIField2Information::theInfo,
};
const void *SplitTFCISignalling::itemsPres[4] = {
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

const void *Fdd::itemsInfo[1] = {
	&TFCS::theInfo,
};
const void *Fdd::itemsPres[1] = {
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};



const void *TFCSIdentity::itemsInfo[2] = {
	&TFCSIdentityPlain::theInfo,
	&SharedChannelIndicator::theInfo,
};
const void *TFCSIdentity::itemsPres[2] = {
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
const void *IndividualULCCTrCHInfo::itemsPres[3] = {
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


const void *Tdd::itemsInfo[1] = {
	&IndividualULCCTrCHInfoList::theInfo,
};
const void *Tdd::itemsPres[1] = {
	0,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULCommonTransChInfo::itemsInfo[3] = {
	&TFCSubset::theInfo,
	&TFCS::theInfo,
	&ModeSpecificInfo::theInfo,
};
const void *ULCommonTransChInfo::itemsPres[3] = {
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




const void *SizeType2::itemsInfo[2] = {
	&Part1::theInfo,
	&Part2::theInfo,
};
const void *SizeType2::itemsPres[2] = {
	1,
	0,
};
const SizeType2::Info SizeType2::theInfo = {
	SizeType2::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};



const void *SizeType3::itemsInfo[2] = {
	&Part1::theInfo,
	&Part2::theInfo,
};
const void *SizeType3::itemsPres[2] = {
	1,
	0,
};
const SizeType3::Info SizeType3::theInfo = {
	SizeType3::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};



const void *SizeType4::itemsInfo[2] = {
	&Part1::theInfo,
	&Part2::theInfo,
};
const void *SizeType4::itemsPres[2] = {
	1,
	0,
};
const SizeType4::Info SizeType4::theInfo = {
	SizeType4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *BitModeRLCSizeInfo::choicesInfo[4] = {
	&SizeType1::theInfo,
	&SizeType2::theInfo,
	&SizeType3::theInfo,
	&SizeType4::theInfo,
};
const BitModeRLCSizeInfo::Info BitModeRLCSizeInfo::theInfo = {
	BitModeRLCSizeInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	3
};

const void *Rlc_Size::choicesInfo[2] = {
	&BitModeRLCSizeInfo::theInfo,
	&OctetModeRLCSizeInfoType1::theInfo,
};
const Rlc_Size::Info Rlc_Size::theInfo = {
	Rlc_Size::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};





const void *NumberOfTransportBlocks::choicesInfo[4] = {
	&Zero::theInfo,
	&One::theInfo,
	&Small::theInfo,
	&Large::theInfo,
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
	&LogChOfRb::theInfo,
};
const void *LogicalChannelByRB::itemsPres[2] = {
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
	&AllSizes::theInfo,
	&Configured::theInfo,
	&ExplicitList::theInfo,
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
	&Rlc_Size::theInfo,
	&NumberOfTbSizeList::theInfo,
	&LogicalChannelList::theInfo,
};
const void *DedicatedDynamicTFInfo::itemsPres[3] = {
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


const void *Rlc_Size::choicesInfo[2] = {
	&BitModeRLCSizeInfo::theInfo,
	&OctetModeRLCSizeInfoType1::theInfo,
};
const Rlc_Size::Info Rlc_Size::theInfo = {
	Rlc_Size::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *NumberOfTbSizeAndTTIList::itemsInfo[0] = {
};
const void *NumberOfTbSizeAndTTIList::itemsPres[0] = {
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
	&Rlc_Size::theInfo,
	&NumberOfTbSizeAndTTIList::theInfo,
	&LogicalChannelList::theInfo,
};
const void *DedicatedDynamicTFInfoDynamicTTI::itemsPres[3] = {
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


const void *Tti::choicesInfo[5] = {
	&DedicatedDynamicTFInfoList::theInfo,
	&DedicatedDynamicTFInfoList::theInfo,
	&DedicatedDynamicTFInfoList::theInfo,
	&DedicatedDynamicTFInfoList::theInfo,
	&DedicatedDynamicTFInfoListDynamicTTI::theInfo,
};
const Tti::Info Tti::theInfo = {
	Tti::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	4
};




const void *ChannelCodingType::choicesInfo[3] = {
	&NoCoding::theInfo,
	&CodingRate::theInfo,
	&Turbo::theInfo,
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
const void *SemistaticTFInformation::itemsPres[3] = {
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
	&Tti::theInfo,
	&SemistaticTFInformation::theInfo,
};
const void *DedicatedTransChTFS::itemsPres[2] = {
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
	&SizeType1::theInfo,
	&SizeType2::theInfo,
	&SizeType3::theInfo,
};
const OctetModeRLCSizeInfoType2::Info OctetModeRLCSizeInfoType2::theInfo = {
	OctetModeRLCSizeInfoType2::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *Fdd::itemsInfo[1] = {
	&OctetModeRLCSizeInfoType2::theInfo,
};
const void *Fdd::itemsPres[1] = {
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *CommonTDD_Choice::choicesInfo[2] = {
	&BitModeRLCSizeInfo::theInfo,
	&OctetModeRLCSizeInfoType1::theInfo,
};
const CommonTDD_Choice::Info CommonTDD_Choice::theInfo = {
	CommonTDD_Choice::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Tdd::itemsInfo[1] = {
	&CommonTDD_Choice::theInfo,
};
const void *Tdd::itemsPres[1] = {
	1,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *Rlc_Size::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const Rlc_Size::Info Rlc_Size::theInfo = {
	Rlc_Size::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};


const void *CommonDynamicTFInfo::itemsInfo[3] = {
	&Rlc_Size::theInfo,
	&NumberOfTbSizeList::theInfo,
	&LogicalChannelList::theInfo,
};
const void *CommonDynamicTFInfo::itemsPres[3] = {
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


const void *CommonTDD_Choice::choicesInfo[2] = {
	&BitModeRLCSizeInfo::theInfo,
	&OctetModeRLCSizeInfoType1::theInfo,
};
const CommonTDD_Choice::Info CommonTDD_Choice::theInfo = {
	CommonTDD_Choice::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *CommonDynamicTFInfoDynamicTTI::itemsInfo[3] = {
	&CommonTDD_Choice::theInfo,
	&NumberOfTbSizeAndTTIList::theInfo,
	&LogicalChannelList::theInfo,
};
const void *CommonDynamicTFInfoDynamicTTI::itemsPres[3] = {
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


const void *Tti::choicesInfo[5] = {
	&CommonDynamicTFInfoList::theInfo,
	&CommonDynamicTFInfoList::theInfo,
	&CommonDynamicTFInfoList::theInfo,
	&CommonDynamicTFInfoList::theInfo,
	&CommonDynamicTFInfoListDynamicTTI::theInfo,
};
const Tti::Info Tti::theInfo = {
	Tti::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	4
};

const void *CommonTransChTFS::itemsInfo[2] = {
	&Tti::theInfo,
	&SemistaticTFInformation::theInfo,
};
const void *CommonTransChTFS::itemsPres[2] = {
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
const void *ULAddReconfTransChInformation::itemsPres[3] = {
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



const void *Dl_Parameters::choicesInfo[2] = {
	&TFCS::theInfo,
	&SameAsUL::theInfo,
};
const Dl_Parameters::Info Dl_Parameters::theInfo = {
	Dl_Parameters::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Fdd::itemsInfo[1] = {
	&Dl_Parameters::theInfo,
};
const void *Fdd::itemsPres[1] = {
	0,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *Tfcs_SignallingMode::choicesInfo[2] = {
	&TFCS::theInfo,
	&TFCSIdentity::theInfo,
};
const Tfcs_SignallingMode::Info Tfcs_SignallingMode::theInfo = {
	Tfcs_SignallingMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *IndividualDLCCTrCHInfo::itemsInfo[2] = {
	&TFCSIdentity::theInfo,
	&Tfcs_SignallingMode::theInfo,
};
const void *IndividualDLCCTrCHInfo::itemsPres[2] = {
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


const void *Tdd::itemsInfo[1] = {
	&IndividualDLCCTrCHInfoList::theInfo,
};
const void *Tdd::itemsPres[1] = {
	0,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLCommonTransChInfo::itemsInfo[2] = {
	&TFCS::theInfo,
	&ModeSpecificInfo::theInfo,
};
const void *DLCommonTransChInfo::itemsPres[2] = {
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
const void *ULTransportChannelIdentity::itemsPres[2] = {
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

const void *Tfs_SignallingMode::choicesInfo[2] = {
	&TransportFormatSet::theInfo,
	&ULTransportChannelIdentity::theInfo,
};
const Tfs_SignallingMode::Info Tfs_SignallingMode::theInfo = {
	Tfs_SignallingMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};


const void *QualityTarget::itemsInfo[1] = {
	&BLERQualityValue::theInfo,
};
const void *QualityTarget::itemsPres[1] = {
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




const void *Mode2::itemsInfo[1] = {
	&ULControlledTrChList::theInfo,
};
const void *Mode2::itemsPres[1] = {
	1,
};
const Mode2::Info Mode2::theInfo = {
	Mode2::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *Tm_SignallingMode::choicesInfo[2] = {
	&Mode1::theInfo,
	&Mode2::theInfo,
};
const Tm_SignallingMode::Info Tm_SignallingMode::theInfo = {
	Tm_SignallingMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *TMSignallingInfo::itemsInfo[2] = {
	&MessType::theInfo,
	&Tm_SignallingMode::theInfo,
};
const void *TMSignallingInfo::itemsPres[2] = {
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
	&Tfs_SignallingMode::theInfo,
	&QualityTarget::theInfo,
	&TMSignallingInfo::theInfo,
};
const void *DLAddReconfTransChInformation::itemsPres[5] = {
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
const void *PreDefTransChConfiguration::itemsPres[4] = {
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

const void *Fdd::itemsInfo[1] = {
	&PowerControlAlgorithm::theInfo,
};
const void *Fdd::itemsPres[1] = {
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};


const void *Tdd::itemsInfo[1] = {
	&ConstantValueTdd::theInfo,
};
const void *Tdd::itemsPres[1] = {
	1,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ULDPCHPowerControlInfoPredef::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ULDPCHPowerControlInfoPredef::Info ULDPCHPowerControlInfoPredef::theInfo = {
	ULDPCHPowerControlInfoPredef::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};



const void *Fdd::itemsInfo[2] = {
	&Tfci_Existence::theInfo,
	&PuncturingLimit::theInfo,
};
const void *Fdd::itemsPres[2] = {
	1,
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};










const void *RepetitionPeriodAndLength::choicesInfo[7] = {
	&RepetitionPeriod1::theInfo,
	&RepetitionPeriod2::theInfo,
	&RepetitionPeriod4::theInfo,
	&RepetitionPeriod8::theInfo,
	&RepetitionPeriod16::theInfo,
	&RepetitionPeriod32::theInfo,
	&RepetitionPeriod64::theInfo,
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
const void *CommonTimeslotInfo::itemsPres[4] = {
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

const void *Tdd::itemsInfo[1] = {
	&CommonTimeslotInfo::theInfo,
};
const void *Tdd::itemsPres[1] = {
	1,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULDPCHInfoPredef::itemsInfo[2] = {
	&ULDPCHPowerControlInfoPredef::theInfo,
	&ModeSpecificInfo::theInfo,
};
const void *ULDPCHInfoPredef::itemsPres[2] = {
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
	&Sfd4::theInfo,
	&Sfd8::theInfo,
	&Sfd16::theInfo,
	&Sfd32::theInfo,
	&Sfd64::theInfo,
	&PilotBits128::theInfo,
	&PilotBits256::theInfo,
	&Sfd512::theInfo,
};
const SF512AndPilot::Info SF512AndPilot::theInfo = {
	SF512AndPilot::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	7
};



const void *Fdd::itemsInfo[3] = {
	&SF512AndPilot::theInfo,
	&PositionFixedOrFlexible::theInfo,
	&Tfci_Existence::theInfo,
};
const void *Fdd::itemsPres[3] = {
	1,
	1,
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *Tdd::itemsInfo[1] = {
	&CommonTimeslotInfo::theInfo,
};
const void *Tdd::itemsPres[1] = {
	1,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLDPCHInfoCommonPredef::itemsInfo[1] = {
	&ModeSpecificInfo::theInfo,
};
const void *DLDPCHInfoCommonPredef::itemsPres[1] = {
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
const void *DLCommonInformationPredef::itemsPres[1] = {
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
const void *PreDefPhyChConfiguration::itemsPres[2] = {
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
const void *PreDefRadioConfiguration::itemsPres[3] = {
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


const void *Fdd::itemsInfo[1] = {
	&NumberOfTPCBits::theInfo,
};
const void *Fdd::itemsPres[1] = {
	0,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};


const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULDPCHInfoPredefv770ext::itemsInfo[1] = {
	&ModeSpecificInfo::theInfo,
};
const void *ULDPCHInfoPredefv770ext::itemsPres[1] = {
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
const void *PreDefPhyChConfigurationv770ext::itemsPres[1] = {
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
const void *PreDefRadioConfigurationv770ext::itemsPres[1] = {
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
const void *PreDefRadioConfigurationv920ext::itemsPres[1] = {
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



const void *Other::choicesInfo[2] = {
	&NotStored::theInfo,
	&PredefinedConfigValueTag::theInfo,
};
const Other::Info Other::theInfo = {
	Other::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *PredefinedConfigStatusInfo::choicesInfo[2] = {
	&StoredWithValueTagSameAsPrevius::theInfo,
	&Other::theInfo,
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
	&StartPosition::theInfo,
	&PredefinedConfigValueTagList::theInfo,
};
const void *PredefinedConfigSetWithDifferentValueTag::itemsPres[2] = {
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
const void *PredefinedConfigStatusListComp::itemsPres[2] = {
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
const void *RABInfo::itemsPres[4] = {
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
const void *RABInfor6ext::itemsPres[1] = {
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
	&Mbms_ServiceIdentity::theInfo,
};
const void *RABInfov6b0ext::itemsPres[1] = {
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
const void *RABInfor6::itemsPres[5] = {
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
	&Mbms_ServiceIdentity::theInfo,
	&CNDomainIdentity::theInfo,
	&NASSynchronisationIndicator::theInfo,
	&ReEstablishmentTimer::theInfo,
};
const void *RABInfor7::itemsPres[6] = {
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
const void *RABInformationReconfig::itemsPres[3] = {
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
const void *RABInformationReconfigr8::itemsPres[4] = {
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
const void *RABInfoPost::itemsPres[3] = {
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
	&Mbms_ServiceIdentity::theInfo,
	&MBMSSessionIdentity::theInfo,
};
const void *RABInformationMBMSPtp::itemsPres[3] = {
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
const void *RABInformationSetup::itemsPres[2] = {
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
const void *RBInformationSetupr4::itemsPres[4] = {
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
const void *RABInformationSetupr4::itemsPres[2] = {
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
	&Rlc_OneSidedReEst::theInfo,
};
const void *RLCInfor5::itemsPres[3] = {
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
const void *RBMappingOptionr5::itemsPres[2] = {
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
const void *RBInformationSetupr5::itemsPres[4] = {
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
const void *RABInformationSetupr5::itemsPres[2] = {
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
const void *RABInformationSetupr6ext::itemsPres[1] = {
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
	&Rlc_OneSidedReEst::theInfo,
	&altE_bitInterpretation::theInfo,
};
const void *RLCInfor6::itemsPres[4] = {
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



const void *Rlc_SizeList::choicesInfo[3] = {
	&AllSizes::theInfo,
	&Configured::theInfo,
	&RLCSizeExplicitList::theInfo,
};
const Rlc_SizeList::Info Rlc_SizeList::theInfo = {
	Rlc_SizeList::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *Dch_rach_usch::itemsInfo[3] = {
	&ULTransportChannelType::theInfo,
	&LogicalChannelIdentity::theInfo,
	&Rlc_SizeList::theInfo,
};
const void *Dch_rach_usch::itemsPres[3] = {
	1,
	0,
	1,
};
const Dch_rach_usch::Info Dch_rach_usch::theInfo = {
	Dch_rach_usch::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};





const void *E_dch::itemsInfo[5] = {
	&LogicalChannelIdentity::theInfo,
	&EDCHMACdFlowIdentity::theInfo,
	&DDI::theInfo,
	&RLCPDUSizeList::theInfo,
	&IncludeInSchedulingInfo::theInfo,
};
const void *E_dch::itemsPres[5] = {
	1,
	1,
	1,
	1,
	1,
};
const E_dch::Info E_dch::theInfo = {
	E_dch::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 0, 0
};

const void *Ul_TrCH_Type::choicesInfo[2] = {
	&Dch_rach_usch::theInfo,
	&E_dch::theInfo,
};
const Ul_TrCH_Type::Info Ul_TrCH_Type::theInfo = {
	Ul_TrCH_Type::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULLogicalChannelMappingr6::itemsInfo[2] = {
	&Ul_TrCH_Type::theInfo,
	&MACLogicalChannelPriority::theInfo,
};
const void *ULLogicalChannelMappingr6::itemsPres[2] = {
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
	&Rlc_LogicalChannelMappingIndicator::theInfo,
	&Ul_LogicalChannelMapping::theInfo,
};
const void *ULLogicalChannelMappingListr6::itemsPres[2] = {
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
const void *RBMappingOptionr6::itemsPres[2] = {
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
const void *RBInformationSetupr6::itemsPres[4] = {
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
const void *RABInformationSetupr6::itemsPres[2] = {
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
const void *RABInformationSetupv6b0ext::itemsPres[1] = {
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
	&Rlc_OneSidedReEst::theInfo,
	&altE_bitInterpretation::theInfo,
	&useSpecialValueOfHEField::theInfo,
};
const void *RLCInfor7::itemsPres[5] = {
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
const void *RBMappingOptionr7::itemsPres[2] = {
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
const void *RBInformationSetupr7::itemsPres[4] = {
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
const void *RABInformationSetupr7::itemsPres[2] = {
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



const void *Rlc_SizeList::choicesInfo[3] = {
	&AllSizes::theInfo,
	&Configured::theInfo,
	&RLCSizeExplicitList::theInfo,
};
const Rlc_SizeList::Info Rlc_SizeList::theInfo = {
	Rlc_SizeList::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *Dch_rach_usch::itemsInfo[3] = {
	&ULTransportChannelType::theInfo,
	&LogicalChannelIdentity::theInfo,
	&Rlc_SizeList::theInfo,
};
const void *Dch_rach_usch::itemsPres[3] = {
	1,
	0,
	1,
};
const Dch_rach_usch::Info Dch_rach_usch::theInfo = {
	Dch_rach_usch::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};

const void *FixedSize::itemsInfo[2] = {
	&DDI::theInfo,
	&RLCPDUSizeList::theInfo,
};
const void *FixedSize::itemsPres[2] = {
	1,
	1,
};
const FixedSize::Info FixedSize::theInfo = {
	FixedSize::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};




const void *RLCPDUSizeConstraint::itemsInfo[3] = {
	&lengthIndicatorSize::theInfo,
	&MinRLC_PDU_Size::theInfo,
	&LargestRLC_PDU_Size::theInfo,
};
const void *RLCPDUSizeConstraint::itemsPres[3] = {
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

const void *Rlc_PDU_Size::choicesInfo[2] = {
	&FixedSize::theInfo,
	&RLCPDUSizeConstraint::theInfo,
};
const Rlc_PDU_Size::Info Rlc_PDU_Size::theInfo = {
	Rlc_PDU_Size::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};


const void *E_dch::itemsInfo[4] = {
	&LogicalChannelIdentity::theInfo,
	&EDCHMACdFlowIdentity::theInfo,
	&Rlc_PDU_Size::theInfo,
	&IncludeInSchedulingInfo::theInfo,
};
const void *E_dch::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const E_dch::Info E_dch::theInfo = {
	E_dch::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 0, 0
};

const void *Ul_TrCH_Type::choicesInfo[2] = {
	&Dch_rach_usch::theInfo,
	&E_dch::theInfo,
};
const Ul_TrCH_Type::Info Ul_TrCH_Type::theInfo = {
	Ul_TrCH_Type::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULLogicalChannelMappingr8::itemsInfo[2] = {
	&Ul_TrCH_Type::theInfo,
	&MACLogicalChannelPriority::theInfo,
};
const void *ULLogicalChannelMappingr8::itemsPres[2] = {
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
	&Rlc_LogicalChannelMappingIndicator::theInfo,
	&Ul_LogicalChannelMapping::theInfo,
};
const void *ULLogicalChannelMappingListr8::itemsPres[2] = {
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
const void *RBMappingOptionr8::itemsPres[2] = {
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
const void *RBInformationSetupr8::itemsPres[4] = {
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
const void *RABInformationSetupr8::itemsPres[4] = {
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
const void *RABInformationSetupv820ext::itemsPres[1] = {
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
const void *RBCOUNTCInformation::itemsPres[3] = {
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
const void *RBCOUNTCMSBInformation::itemsPres[3] = {
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
const void *RBInformationAffected::itemsPres[2] = {
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
const void *RBInformationAffectedr5::itemsPres[2] = {
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
const void *RBInformationAffectedr6::itemsPres[2] = {
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
const void *RBInformationAffectedr7::itemsPres[2] = {
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
const void *RBInformationAffectedr8::itemsPres[2] = {
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







const void *Rb_Change::choicesInfo[2] = {
	&Release::theInfo,
	&RBIdentity::theInfo,
};
const Rb_Change::Info Rb_Change::theInfo = {
	Rb_Change::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *RBInformationChangedr6::itemsInfo[2] = {
	&RBIdentity::theInfo,
	&Rb_Change::theInfo,
};
const void *RBInformationChangedr6::itemsPres[2] = {
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
const void *RBInformationReconfig::itemsPres[6] = {
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
const void *RBInformationReconfigr4::itemsPres[6] = {
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
const void *RBInformationReconfigr5::itemsPres[6] = {
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
const void *RBInformationReconfigr6::itemsPres[6] = {
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
const void *RBInformationReconfigr7::itemsPres[6] = {
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
const void *RBInformationReconfigr8::itemsPres[6] = {
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
const void *UMRLCOutOSeqDeliveryInfor6::itemsPres[2] = {
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
const void *RLCInfoMCCHr6::itemsPres[2] = {
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
const void *RLCInfoMSCHr6::itemsPres[1] = {
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
const void *UMRLCDuplAvoidReordInfor6::itemsPres[2] = {
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
const void *RLCInfoMTCHr6::itemsPres[2] = {
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
const void *SRBInformationSetupr5::itemsPres[3] = {
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
const void *SRBInformationSetupr6::itemsPres[3] = {
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
const void *SRBInformationSetupr7::itemsPres[3] = {
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
const void *SRBInformationSetupr8::itemsPres[3] = {
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
const void *ULCounterSynchronisationInfo::itemsPres[2] = {
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
	&Mac_d_PDU_Size::theInfo,
	&Mac_d_PDU_Index::theInfo,
};
const void *MACdPDUsizeInfo::itemsPres[2] = {
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
	&Mac_hsQueueId::theInfo,
	&MACdFlowIdentity::theInfo,
	&T1ReleaseTimer::theInfo,
	&MAChsWindowSize::theInfo,
	&MACdPDUSizeInfoList::theInfo,
};
const void *MAChsAddReconfQueue::itemsPres[5] = {
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
	&Mac_hsQueueId::theInfo,
};
const void *MAChsDelQueue::itemsPres[1] = {
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
const void *AddOrReconfMACdFlow::itemsPres[2] = {
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
const void *MACehsAddReconfReordQ::itemsPres[4] = {
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
const void *MACehsDelReordQ::itemsPres[1] = {
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
const void *AddOrReconfMACehsReordQ::itemsPres[2] = {
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
const void *MACehsAddReconfReordQr9::itemsPres[4] = {
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
const void *AddOrReconfMACehsReordQr9::itemsPres[1] = {
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
const void *CommonEDCHMACdFlow::itemsPres[5] = {
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


const void *Tti::choicesInfo[6] = {
	&CommonDynamicTFInfoList::theInfo,
	&CommonDynamicTFInfoList::theInfo,
	&CommonDynamicTFInfoList::theInfo,
	&CommonDynamicTFInfoList::theInfo,
	&CommonDynamicTFInfoList::theInfo,
	&CommonDynamicTFInfoListDynamicTTI::theInfo,
};
const Tti::Info Tti::theInfo = {
	Tti::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	5
};

const void *CommonTransChTFSLCR::itemsInfo[2] = {
	&Tti::theInfo,
	&SemistaticTFInformation::theInfo,
};
const void *CommonTransChTFSLCR::itemsPres[2] = {
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
const void *CommonMACehsReorderingQueue::itemsPres[4] = {
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



const void *Tfs_SignallingMode::choicesInfo[2] = {
	&TransportFormatSet::theInfo,
	&ULTransportChannelIdentity::theInfo,
};
const Tfs_SignallingMode::Info Tfs_SignallingMode::theInfo = {
	Tfs_SignallingMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLAddReconfTransChInformation2::itemsInfo[4] = {
	&DLTrCHType::theInfo,
	&TransportChannelIdentity::theInfo,
	&Tfs_SignallingMode::theInfo,
	&QualityTarget::theInfo,
};
const void *DLAddReconfTransChInformation2::itemsPres[4] = {
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


const void *Tfs_SignallingMode::choicesInfo[2] = {
	&TransportFormatSet::theInfo,
	&ULTransportChannelIdentity::theInfo,
};
const Tfs_SignallingMode::Info Tfs_SignallingMode::theInfo = {
	Tfs_SignallingMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLAddReconfTransChInformationr4::itemsInfo[4] = {
	&DLTrCHType::theInfo,
	&TransportChannelIdentity::theInfo,
	&Tfs_SignallingMode::theInfo,
	&QualityTarget::theInfo,
};
const void *DLAddReconfTransChInformationr4::itemsPres[4] = {
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
	&Hsdsch::theInfo,
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
const void *HSDSCHInfo::itemsPres[2] = {
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

const void *Tfs_SignallingMode::choicesInfo[3] = {
	&TransportFormatSet::theInfo,
	&ULTransportChannelIdentity::theInfo,
	&HSDSCHInfo::theInfo,
};
const Tfs_SignallingMode::Info Tfs_SignallingMode::theInfo = {
	Tfs_SignallingMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *DLAddReconfTransChInformationr5::itemsInfo[3] = {
	&DLTrCHTypeId1r5::theInfo,
	&Tfs_SignallingMode::theInfo,
	&QualityTarget::theInfo,
};
const void *DLAddReconfTransChInformationr5::itemsPres[3] = {
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


const void *Dl_MAC_HeaderType::choicesInfo[2] = {
	&AddOrReconfMACdFlow::theInfo,
	&AddOrReconfMACehsReordQ::theInfo,
};
const Dl_MAC_HeaderType::Info Dl_MAC_HeaderType::theInfo = {
	Dl_MAC_HeaderType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *HSDSCHInfor7::itemsInfo[2] = {
	&HARQInfor7::theInfo,
	&Dl_MAC_HeaderType::theInfo,
};
const void *HSDSCHInfor7::itemsPres[2] = {
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

const void *Tfs_SignallingMode::choicesInfo[3] = {
	&TransportFormatSet::theInfo,
	&ULTransportChannelIdentity::theInfo,
	&HSDSCHInfor7::theInfo,
};
const Tfs_SignallingMode::Info Tfs_SignallingMode::theInfo = {
	Tfs_SignallingMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *DLAddReconfTransChInformationr7::itemsInfo[3] = {
	&DLTrCHTypeId1r5::theInfo,
	&Tfs_SignallingMode::theInfo,
	&QualityTarget::theInfo,
};
const void *DLAddReconfTransChInformationr7::itemsPres[3] = {
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


const void *Dl_MAC_HeaderType::choicesInfo[2] = {
	&AddOrReconfMACdFlow::theInfo,
	&AddOrReconfMACehsReordQr9::theInfo,
};
const Dl_MAC_HeaderType::Info Dl_MAC_HeaderType::theInfo = {
	Dl_MAC_HeaderType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *HSDSCHInfor9::itemsInfo[2] = {
	&HARQInfor7::theInfo,
	&Dl_MAC_HeaderType::theInfo,
};
const void *HSDSCHInfor9::itemsPres[2] = {
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

const void *Tfs_SignallingMode::choicesInfo[3] = {
	&TransportFormatSet::theInfo,
	&ULTransportChannelIdentity::theInfo,
	&HSDSCHInfor9::theInfo,
};
const Tfs_SignallingMode::Info Tfs_SignallingMode::theInfo = {
	Tfs_SignallingMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *DLAddReconfTransChInformationr9::itemsInfo[3] = {
	&DLTrCHTypeId1r5::theInfo,
	&Tfs_SignallingMode::theInfo,
	&QualityTarget::theInfo,
};
const void *DLAddReconfTransChInformationr9::itemsPres[3] = {
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


const void *Dl_DCH_TFCS::itemsInfo[1] = {
	&TFCS::theInfo,
};
const void *Dl_DCH_TFCS::itemsPres[1] = {
	0,
};
const Dl_DCH_TFCS::Info Dl_DCH_TFCS::theInfo = {
	Dl_DCH_TFCS::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};


const void *Dl_Parameters::choicesInfo[2] = {
	&Dl_DCH_TFCS::theInfo,
	&SameAsUL::theInfo,
};
const Dl_Parameters::Info Dl_Parameters::theInfo = {
	Dl_Parameters::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Fdd::itemsInfo[1] = {
	&Dl_Parameters::theInfo,
};
const void *Fdd::itemsPres[1] = {
	0,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *Tdd::itemsInfo[1] = {
	&IndividualDLCCTrCHInfoList::theInfo,
};
const void *Tdd::itemsPres[1] = {
	0,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLCommonTransChInfor4::itemsInfo[2] = {
	&TFCS::theInfo,
	&ModeSpecificInfo::theInfo,
};
const void *DLCommonTransChInfor4::itemsPres[2] = {
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
const void *DLTransportChannelIdentity::itemsPres[2] = {
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
const void *DLTransportChannelIdentityr5::itemsPres[1] = {
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


const void *Hsdsch::choicesInfo[2] = {
	&MACdFlowIdentity::theInfo,
	&MACehsQueueId::theInfo,
};
const Hsdsch::Info Hsdsch::theInfo = {
	Hsdsch::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLTrCHTypeId2r7::choicesInfo[3] = {
	&TransportChannelIdentity::theInfo,
	&TransportChannelIdentity::theInfo,
	&Hsdsch::theInfo,
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
const void *DLTransportChannelIdentityr7::itemsPres[1] = {
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
const void *DRACStaticInformation::itemsPres[3] = {
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




const void *Non_ScheduledTransGrantInfo::itemsInfo[2] = {
	&MaxMAC_e_PDUContents::theInfo,
	&Ms2_NonSchedTransmGrantHARQAlloc::theInfo,
};
const void *Non_ScheduledTransGrantInfo::itemsPres[2] = {
	1,
	0,
};
const Non_ScheduledTransGrantInfo::Info Non_ScheduledTransGrantInfo::theInfo = {
	Non_ScheduledTransGrantInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};


const void *TransmissionGrantType::choicesInfo[2] = {
	&Non_ScheduledTransGrantInfo::theInfo,
	&ScheduledTransmissionGrantInfo::theInfo,
};
const TransmissionGrantType::Info TransmissionGrantType::theInfo = {
	TransmissionGrantType::create,
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
	&TransmissionGrantType::theInfo,
};
const void *EDCHAddReconfMACdFlow::itemsPres[5] = {
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



const void *Fdd::itemsInfo[2] = {
	&MaxMAC_e_PDUContents::theInfo,
	&Ms2_NonSchedTransmGrantHARQAlloc::theInfo,
};
const void *Fdd::itemsPres[2] = {
	1,
	0,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};


const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Non_ScheduledTransGrantInfo::itemsInfo[1] = {
	&ModeSpecificInfo::theInfo,
};
const void *Non_ScheduledTransGrantInfo::itemsPres[1] = {
	1,
};
const Non_ScheduledTransGrantInfo::Info Non_ScheduledTransGrantInfo::theInfo = {
	Non_ScheduledTransGrantInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};


const void *TransmissionGrantType::choicesInfo[2] = {
	&Non_ScheduledTransGrantInfo::theInfo,
	&ScheduledTransmissionGrantInfo::theInfo,
};
const TransmissionGrantType::Info TransmissionGrantType::theInfo = {
	TransmissionGrantType::create,
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
	&TransmissionGrantType::theInfo,
};
const void *EDCHAddReconfMACdFlowr7::itemsPres[6] = {
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





const void *Fdd::itemsInfo[1] = {
	&GainFactor::theInfo,
};
const void *Fdd::itemsPres[1] = {
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};


const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};


const void *SignalledGainFactors::itemsInfo[3] = {
	&ModeSpecificInfo::theInfo,
	&GainFactor::theInfo,
	&ReferenceTFCID::theInfo,
};
const void *SignalledGainFactors::itemsPres[3] = {
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

const void *Fdd::itemsInfo[1] = {
	&GainFactor::theInfo,
};
const void *Fdd::itemsPres[1] = {
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};


const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *PowerOffsetInfoShort::itemsInfo[3] = {
	&TFCValue::theInfo,
	&ModeSpecificInfo::theInfo,
	&GainFactor::theInfo,
};
const void *PowerOffsetInfoShort::itemsPres[3] = {
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
const void *PowerOffsetInformation::itemsPres[2] = {
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
const void *TFCSubsetList::itemsPres[0] = {
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

const void *Dch_usch::itemsInfo[3] = {
	&ULTrCHType::theInfo,
	&TransportChannelIdentity::theInfo,
	&TransportFormatSet::theInfo,
};
const void *Dch_usch::itemsPres[3] = {
	1,
	1,
	1,
};
const Dch_usch::Info Dch_usch::theInfo = {
	Dch_usch::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};


const void *E_dch::itemsInfo[3] = {
	&EDCHTTI::theInfo,
	&harq_Info::theInfo,
	&EDCHAddReconfMACdFlowList::theInfo,
};
const void *E_dch::itemsPres[3] = {
	1,
	1,
	0,
};
const E_dch::Info E_dch::theInfo = {
	E_dch::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};

const void *ULAddReconfTransChInformationr6::choicesInfo[2] = {
	&Dch_usch::theInfo,
	&E_dch::theInfo,
};
const ULAddReconfTransChInformationr6::Info ULAddReconfTransChInformationr6::theInfo = {
	ULAddReconfTransChInformationr6::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};


const void *Dch_usch::itemsInfo[3] = {
	&ULTrCHType::theInfo,
	&TransportChannelIdentity::theInfo,
	&TransportFormatSet::theInfo,
};
const void *Dch_usch::itemsPres[3] = {
	1,
	1,
	1,
};
const Dch_usch::Info Dch_usch::theInfo = {
	Dch_usch::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *Fdd::itemsInfo[1] = {
	&EDCHTTI::theInfo,
};
const void *Fdd::itemsPres[1] = {
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};


const void *ModeSpecific::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecific::Info ModeSpecific::theInfo = {
	ModeSpecific::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};


const void *E_dch::itemsInfo[3] = {
	&ModeSpecific::theInfo,
	&harq_Info::theInfo,
	&EDCHAddReconfMACdFlowListr7::theInfo,
};
const void *E_dch::itemsPres[3] = {
	1,
	1,
	0,
};
const E_dch::Info E_dch::theInfo = {
	E_dch::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};

const void *ULAddReconfTransChInformationr7::choicesInfo[2] = {
	&Dch_usch::theInfo,
	&E_dch::theInfo,
};
const ULAddReconfTransChInformationr7::Info ULAddReconfTransChInformationr7::theInfo = {
	ULAddReconfTransChInformationr7::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};


const void *Dch_usch::itemsInfo[3] = {
	&ULTrCHType::theInfo,
	&TransportChannelIdentity::theInfo,
	&TransportFormatSet::theInfo,
};
const void *Dch_usch::itemsPres[3] = {
	1,
	1,
	1,
};
const Dch_usch::Info Dch_usch::theInfo = {
	Dch_usch::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};


const void *Fdd::itemsInfo[1] = {
	&EDCHTTI::theInfo,
};
const void *Fdd::itemsPres[1] = {
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};


const void *ModeSpecific::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecific::Info ModeSpecific::theInfo = {
	ModeSpecific::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};


const void *E_dch::itemsInfo[4] = {
	&ul_MAC_HeaderType::theInfo,
	&ModeSpecific::theInfo,
	&harq_Info::theInfo,
	&EDCHAddReconfMACdFlowListr7::theInfo,
};
const void *E_dch::itemsPres[4] = {
	0,
	1,
	1,
	0,
};
const E_dch::Info E_dch::theInfo = {
	E_dch::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
};

const void *ULAddReconfTransChInformationr8::choicesInfo[2] = {
	&Dch_usch::theInfo,
	&E_dch::theInfo,
};
const ULAddReconfTransChInformationr8::Info ULAddReconfTransChInformationr8::theInfo = {
	ULAddReconfTransChInformationr8::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};


const void *Fdd::itemsInfo[1] = {
	&TFCS::theInfo,
};
const void *Fdd::itemsPres[1] = {
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *Tdd::itemsInfo[1] = {
	&IndividualULCCTrCHInfoList::theInfo,
};
const void *Tdd::itemsPres[1] = {
	0,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULCommonTransChInfor4::itemsInfo[4] = {
	&TFCSubset::theInfo,
	&TFCS::theInfo,
	&ModeSpecificInfo::theInfo,
	&TFCSubsetList::theInfo,
};
const void *ULCommonTransChInfor4::itemsPres[4] = {
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


const void *Dch_usch::itemsInfo[2] = {
	&ULTrCHType::theInfo,
	&TransportChannelIdentity::theInfo,
};
const void *Dch_usch::itemsPres[2] = {
	1,
	1,
};
const Dch_usch::Info Dch_usch::theInfo = {
	Dch_usch::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *ULTransportChannelIdentityr6::choicesInfo[2] = {
	&Dch_usch::theInfo,
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
const void *USCHTransportChannelsInfo::itemsPres[0] = {
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
	&AvailableSignatureStartIndex::theInfo,
	&AvailableSignatureEndIndex::theInfo,
	&AssignedSubChannelNumber::theInfo,
};
const void *AccessServiceClassFDD::itemsPres[3] = {
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




const void *Size2::itemsInfo[1] = {
	&subchannels::theInfo,
};
const void *Size2::itemsPres[1] = {
	0,
};
const Size2::Info Size2::theInfo = {
	Size2::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};


const void *Size4::itemsInfo[1] = {
	&Subchannels::theInfo,
};
const void *Size4::itemsPres[1] = {
	0,
};
const Size4::Info Size4::theInfo = {
	Size4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};


const void *Size8::itemsInfo[1] = {
	&Subchannels::theInfo,
};
const void *Size8::itemsPres[1] = {
	0,
};
const Size8::Info Size8::theInfo = {
	Size8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SubchannelSize::choicesInfo[4] = {
	&Size1::theInfo,
	&Size2::theInfo,
	&Size4::theInfo,
	&Size8::theInfo,
};
const SubchannelSize::Info SubchannelSize::theInfo = {
	SubchannelSize::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	3
};

const void *AccessServiceClassTDD::itemsInfo[2] = {
	&ChannelisationCodeIndices::theInfo,
	&SubchannelSize::theInfo,
};
const void *AccessServiceClassTDD::itemsPres[2] = {
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




const void *Size2::itemsInfo[1] = {
	&subchannels::theInfo,
};
const void *Size2::itemsPres[1] = {
	0,
};
const Size2::Info Size2::theInfo = {
	Size2::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};


const void *Size4::itemsInfo[1] = {
	&Subchannels::theInfo,
};
const void *Size4::itemsPres[1] = {
	0,
};
const Size4::Info Size4::theInfo = {
	Size4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};


const void *Size8::itemsInfo[1] = {
	&Subchannels::theInfo,
};
const void *Size8::itemsPres[1] = {
	0,
};
const Size8::Info Size8::theInfo = {
	Size8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};


const void *Size16::itemsInfo[1] = {
	&Subchannels::theInfo,
};
const void *Size16::itemsPres[1] = {
	0,
};
const Size16::Info Size16::theInfo = {
	Size16::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SubchannelSize::choicesInfo[5] = {
	&Size1::theInfo,
	&Size2::theInfo,
	&Size4::theInfo,
	&Size8::theInfo,
	&Size16::theInfo,
};
const SubchannelSize::Info SubchannelSize::theInfo = {
	SubchannelSize::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	4
};

const void *AccessServiceClassTDDr7::itemsInfo[2] = {
	&ChannelisationCodeIndices::theInfo,
	&SubchannelSize::theInfo,
};
const void *AccessServiceClassTDDr7::itemsPres[2] = {
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




const void *Size2::itemsInfo[1] = {
	&subchannels::theInfo,
};
const void *Size2::itemsPres[1] = {
	0,
};
const Size2::Info Size2::theInfo = {
	Size2::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};


const void *Size4::itemsInfo[1] = {
	&Subchannels::theInfo,
};
const void *Size4::itemsPres[1] = {
	0,
};
const Size4::Info Size4::theInfo = {
	Size4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};


const void *Size8::itemsInfo[1] = {
	&Subchannels::theInfo,
};
const void *Size8::itemsPres[1] = {
	0,
};
const Size8::Info Size8::theInfo = {
	Size8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *SubchannelSize::choicesInfo[4] = {
	&Size1::theInfo,
	&Size2::theInfo,
	&Size4::theInfo,
	&Size8::theInfo,
};
const SubchannelSize::Info SubchannelSize::theInfo = {
	SubchannelSize::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	3
};

const void *AccessServiceClassTDDLCRr4::itemsInfo[2] = {
	&AvailableSYNC_UlCodesIndics::theInfo,
	&SubchannelSize::theInfo,
};
const void *AccessServiceClassTDDLCRr4::itemsPres[2] = {
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
const void *DynamicTFInformationCCCH::itemsPres[1] = {
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
const void *AdditionalPRACHTFandTFCSCCCHIEs::itemsPres[2] = {
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
const void *AdditionalPRACHTFandTFCSCCCH::itemsPres[1] = {
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
	&Sttd_Indicator::theInfo,
	&AICHTransmissionTiming::theInfo,
};
const void *AICHInfo::itemsPres[3] = {
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
	&AllocationActivationTime::theInfo,
	&AllocationDuration::theInfo,
};
const void *AllocationPeriodInfo::itemsPres[2] = {
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
const void *APSignatureVCAM::itemsPres[2] = {
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
const void *ASCSettingFDD::itemsPres[1] = {
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
const void *ASCSettingTDD::itemsPres[1] = {
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
const void *ASCSettingTDDr7::itemsPres[1] = {
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
const void *ASCSettingTDDLCRr4::itemsPres[1] = {
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
const void *AvailableMinimumSFVCAM::itemsPres[4] = {
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








const void *Fdd::itemsInfo[4] = {
	&DPCCHPowerOffset::theInfo,
	&PCPreamble::theInfo,
	&SRBdelay::theInfo,
	&PowerControlAlgorithm::theInfo,
};
const void *Fdd::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
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
const void *IndividualTSInterference::itemsPres[2] = {
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



const void *IndividuallySignalled::itemsInfo[3] = {
	&IndividualTSInterferenceList::theInfo,
	&ConstantValueTdd::theInfo,
	&PrimaryCCPCHTXPower::theInfo,
};
const void *IndividuallySignalled::itemsPres[3] = {
	1,
	1,
	1,
};
const IndividuallySignalled::Info IndividuallySignalled::theInfo = {
	IndividuallySignalled::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *Ul_OL_PC_Signalling::choicesInfo[2] = {
	&Broadcast_UL_OL_PC_info::theInfo,
	&IndividuallySignalled::theInfo,
};
const Ul_OL_PC_Signalling::Info Ul_OL_PC_Signalling::theInfo = {
	Ul_OL_PC_Signalling::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Tdd::itemsInfo[2] = {
	&ULTargetSIR::theInfo,
	&Ul_OL_PC_Signalling::theInfo,
};
const void *Tdd::itemsPres[2] = {
	0,
	0,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *ULDPCHPowerControlInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
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
const void *CCTrCHPowerControlInfo::itemsPres[2] = {
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

const void *Fdd::itemsInfo[4] = {
	&DPCCHPowerOffset::theInfo,
	&PCPreamble::theInfo,
	&SRBdelay::theInfo,
	&PowerControlAlgorithm::theInfo,
};
const void *Fdd::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 0, 0
};


const void *Tdd384::itemsInfo[2] = {
	&IndividualTSInterferenceList::theInfo,
	&ConstantValue::theInfo,
};
const void *Tdd384::itemsPres[2] = {
	1,
	1,
};
const Tdd384::Info Tdd384::theInfo = {
	Tdd384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};


const void *Tdd128::itemsInfo[1] = {
	&TPCStepSizeTDD::theInfo,
};
const void *Tdd128::itemsPres[1] = {
	1,
};
const Tdd128::Info Tdd128::theInfo = {
	Tdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *TddOption::choicesInfo[2] = {
	&Tdd384::theInfo,
	&Tdd128::theInfo,
};
const TddOption::Info TddOption::theInfo = {
	TddOption::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *IndividuallySignalled::itemsInfo[2] = {
	&TddOption::theInfo,
	&PrimaryCCPCHTXPower::theInfo,
};
const void *IndividuallySignalled::itemsPres[2] = {
	1,
	1,
};
const IndividuallySignalled::Info IndividuallySignalled::theInfo = {
	IndividuallySignalled::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *Ul_OL_PC_Signalling::choicesInfo[2] = {
	&Broadcast_UL_OL_PC_info::theInfo,
	&IndividuallySignalled::theInfo,
};
const Ul_OL_PC_Signalling::Info Ul_OL_PC_Signalling::theInfo = {
	Ul_OL_PC_Signalling::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Tdd::itemsInfo[2] = {
	&ULTargetSIR::theInfo,
	&Ul_OL_PC_Signalling::theInfo,
};
const void *Tdd::itemsPres[2] = {
	0,
	1,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *ULDPCHPowerControlInfor4::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
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
const void *CCTrCHPowerControlInfor4::itemsPres[2] = {
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

const void *Fdd::itemsInfo[7] = {
	&DPCCHPowerOffset::theInfo,
	&PCPreamble::theInfo,
	&SRBdelay::theInfo,
	&PowerControlAlgorithm::theInfo,
	&DeltaACK::theInfo,
	&DeltaNACK::theInfo,
	&ACKNACKrepetitionFactor::theInfo,
};
const void *Fdd::itemsPres[7] = {
	1,
	1,
	1,
	1,
	0,
	0,
	0,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	7, 3, 0
};


const void *Tdd384::itemsInfo[2] = {
	&IndividualTSInterferenceList::theInfo,
	&ConstantValue::theInfo,
};
const void *Tdd384::itemsPres[2] = {
	1,
	1,
};
const Tdd384::Info Tdd384::theInfo = {
	Tdd384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *Tdd128::itemsInfo[1] = {
	&TPCStepSizeTDD::theInfo,
};
const void *Tdd128::itemsPres[1] = {
	1,
};
const Tdd128::Info Tdd128::theInfo = {
	Tdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *TddOption::choicesInfo[2] = {
	&Tdd384::theInfo,
	&Tdd128::theInfo,
};
const TddOption::Info TddOption::theInfo = {
	TddOption::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *IndividuallySignalled::itemsInfo[2] = {
	&TddOption::theInfo,
	&PrimaryCCPCHTXPower::theInfo,
};
const void *IndividuallySignalled::itemsPres[2] = {
	1,
	1,
};
const IndividuallySignalled::Info IndividuallySignalled::theInfo = {
	IndividuallySignalled::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *Ul_OL_PC_Signalling::choicesInfo[2] = {
	&Broadcast_UL_OL_PC_info::theInfo,
	&IndividuallySignalled::theInfo,
};
const Ul_OL_PC_Signalling::Info Ul_OL_PC_Signalling::theInfo = {
	Ul_OL_PC_Signalling::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Tdd::itemsInfo[2] = {
	&ULTargetSIR::theInfo,
	&Ul_OL_PC_Signalling::theInfo,
};
const void *Tdd::itemsPres[2] = {
	0,
	1,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *ULDPCHPowerControlInfor5::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
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
const void *CCTrCHPowerControlInfor5::itemsPres[2] = {
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

const void *Fdd::itemsInfo[8] = {
	&DPCCHPowerOffset::theInfo,
	&PCPreamble::theInfo,
	&SRBdelay::theInfo,
	&PowerControlAlgorithm::theInfo,
	&DeltaACK::theInfo,
	&DeltaNACK::theInfo,
	&ACKNACKrepetitionFactor::theInfo,
	&HARQPreambleMode::theInfo,
};
const void *Fdd::itemsPres[8] = {
	1,
	1,
	1,
	1,
	0,
	0,
	0,
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	8, 3, 0
};


const void *Tdd384::itemsInfo[2] = {
	&IndividualTSInterferenceList::theInfo,
	&ConstantValue::theInfo,
};
const void *Tdd384::itemsPres[2] = {
	1,
	1,
};
const Tdd384::Info Tdd384::theInfo = {
	Tdd384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *Tdd768::itemsInfo[2] = {
	&IndividualTSInterferenceList::theInfo,
	&ConstantValue::theInfo,
};
const void *Tdd768::itemsPres[2] = {
	1,
	1,
};
const Tdd768::Info Tdd768::theInfo = {
	Tdd768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *Tdd128::itemsInfo[2] = {
	&BEACONPLEst::theInfo,
	&TPCStepSizeTDD::theInfo,
};
const void *Tdd128::itemsPres[2] = {
	0,
	1,
};
const Tdd128::Info Tdd128::theInfo = {
	Tdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *TddOption::choicesInfo[3] = {
	&Tdd384::theInfo,
	&Tdd768::theInfo,
	&Tdd128::theInfo,
};
const TddOption::Info TddOption::theInfo = {
	TddOption::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *IndividuallySignalled::itemsInfo[2] = {
	&TddOption::theInfo,
	&PrimaryCCPCHTXPower::theInfo,
};
const void *IndividuallySignalled::itemsPres[2] = {
	1,
	1,
};
const IndividuallySignalled::Info IndividuallySignalled::theInfo = {
	IndividuallySignalled::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *Ul_OL_PC_Signalling::choicesInfo[2] = {
	&Broadcast_UL_OL_PC_info::theInfo,
	&IndividuallySignalled::theInfo,
};
const Ul_OL_PC_Signalling::Info Ul_OL_PC_Signalling::theInfo = {
	Ul_OL_PC_Signalling::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Tdd::itemsInfo[2] = {
	&ULTargetSIR::theInfo,
	&Ul_OL_PC_Signalling::theInfo,
};
const void *Tdd::itemsPres[2] = {
	0,
	1,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *ULDPCHPowerControlInfor7::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
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
const void *CCTrCHPowerControlInfor7::itemsPres[2] = {
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
const void *CellAndChannelIdentity::itemsPres[4] = {
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
	&NotActive::theInfo,
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
const void *ChannelReqParamsForUCSM::itemsPres[2] = {
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
const void *PDSCHCodeMap::itemsPres[4] = {
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
const void *CodeRange::itemsPres[1] = {
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
const void *CodeResourceInformationTDD128::itemsPres[2] = {
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
const void *ERGCHInformationCommonEdch::itemsPres[1] = {
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
const void *EHICHInformationCommonEdch::itemsPres[2] = {
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
const void *ULDPCHCodeInfoForCommonEDCH::itemsPres[2] = {
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
	&S_offset::theInfo,
	&F_dpch_ChannelisationCodeNumber::theInfo,
	&ERGCHInformationCommonEdch::theInfo,
	&EHICHInformationCommonEdch::theInfo,
	&ULDPCHCodeInfoForCommonEDCH::theInfo,
};
const void *CommonEDCHResourceInfoList::itemsPres[5] = {
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
const void *CommonERNTIInfo::itemsPres[0] = {
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


const void *Dummy::itemsInfo[0] = {
};
const void *Dummy::itemsPres[0] = {
};
const Dummy::Info Dummy::theInfo = {
	Dummy::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};
















const void *SYNCULInfoForERUCCH::itemsInfo[5] = {
	&PrxUpPCHdes::theInfo,
	&PowerRampStep::theInfo,
	&max_SYNC_UL_Transmissions::theInfo,
	&SyncULCodesBitmap::theInfo,
	&Mmax::theInfo,
};
const void *SYNCULInfoForERUCCH::itemsPres[5] = {
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







const void *UeSpecificMidamble::itemsInfo[1] = {
	&MidambleShift::theInfo,
};
const void *UeSpecificMidamble::itemsPres[1] = {
	1,
};
const UeSpecificMidamble::Info UeSpecificMidamble::theInfo = {
	UeSpecificMidamble::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MidambleAllocationMode::choicesInfo[3] = {
	&DefaultMidamble::theInfo,
	&CommonMidamble::theInfo,
	&UeSpecificMidamble::theInfo,
};
const MidambleAllocationMode::Info MidambleAllocationMode::theInfo = {
	MidambleAllocationMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};


const void *MidambleShiftAndBurstTypeLCRr4::itemsInfo[2] = {
	&MidambleAllocationMode::theInfo,
	&MidambleConfiguration::theInfo,
};
const void *MidambleShiftAndBurstTypeLCRr4::itemsPres[2] = {
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
const void *FPACHInfor4::itemsPres[4] = {
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
const void *PRACHInformationLCR::itemsPres[4] = {
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
	&t_RUCCH::theInfo,
	&N_RUCCH::theInfo,
	&t_WAIT::theInfo,
	&t_SI::theInfo,
	&ExtendedEstimationWindow::theInfo,
	&ERUCCHAccessServiceClass::theInfo,
	&PersistenceScalingFactorList::theInfo,
	&SYNCULInfoForERUCCH::theInfo,
	&PRACHInformationLCRList::theInfo,
};
const void *ERUCCHInfoTDD128::itemsPres[9] = {
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
	&Reference_Code_Rate::theInfo,
	&Reference_Beta::theInfo,
};
const void *ReferenceBetaQPSK::itemsPres[2] = {
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
	&Reference_Code_Rate::theInfo,
	&Reference_Beta::theInfo,
};
const void *ReferenceBeta16QAM::itemsPres[2] = {
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
	&Reference_Beta_QPSK_List::theInfo,
	&Reference_Beta_16QAM_List::theInfo,
};
const void *ETFCSInfo::itemsPres[2] = {
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
	&StepSize::theInfo,
	&Frequency::theInfo,
};
const void *ULSynchronisationParametersr4::itemsPres[2] = {
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



const void *MidambleAllocationMode::choicesInfo[2] = {
	&DefaultMidamble::theInfo,
	&UeSpecificMidamble::theInfo,
};
const MidambleAllocationMode::Info MidambleAllocationMode::theInfo = {
	MidambleAllocationMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};


const void *EPUCHTSSlotsLCR::itemsInfo[3] = {
	&TimeslotNumberLCRr4::theInfo,
	&MidambleAllocationMode::theInfo,
	&MidambleConfiguration::theInfo,
};
const void *EPUCHTSSlotsLCR::itemsPres[3] = {
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
	&snpl_ReportType::theInfo,
	&PrxBASEdes::theInfo,
	&BeaconPLEst::theInfo,
	&TPCStepSizeTDD::theInfo,
	&Pebase_PowerControlGAP::theInfo,
	&ULSynchronisationParametersr4::theInfo,
	&E_PUCH_TS_ConfigurationList::theInfo,
	&Minimum_Allowed_Code_Rate::theInfo,
	&Maximum_Allowed_Code_Rate::theInfo,
	&MaximumNumOfRetransSchedInfo::theInfo,
	&retransTimerForSchedInfo::theInfo,
	&Dummy::theInfo,
};
const void *EPUCHInfoTDD128::itemsPres[13] = {
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





const void *MidambleAllocationMode::choicesInfo[2] = {
	&DefaultMidamble::theInfo,
	&UeSpecificMidamble::theInfo,
};
const MidambleAllocationMode::Info MidambleAllocationMode::theInfo = {
	MidambleAllocationMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};


const void *EHICHInformationLCR::itemsInfo[5] = {
	&Ei::theInfo,
	&TimeslotNumberLCRr4::theInfo,
	&HSChannelisationCodeLCR::theInfo,
	&MidambleAllocationMode::theInfo,
	&MidambleConfiguration::theInfo,
};
const void *EHICHInformationLCR::itemsPres[5] = {
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
	&N_E_HICH::theInfo,
	&EHICHInformationLCRList::theInfo,
};
const void *EHICHInformationTDD128::itemsPres[2] = {
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





const void *MidambleAllocationMode::choicesInfo[3] = {
	&DefaultMidamble::theInfo,
	&CommonMidamble::theInfo,
	&UeSpecificMidamble::theInfo,
};
const MidambleAllocationMode::Info MidambleAllocationMode::theInfo = {
	MidambleAllocationMode::create,
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
	&MidambleAllocationMode::theInfo,
	&MidambleConfiguration::theInfo,
};
const void *EAGCHIndividualLCR::itemsPres[5] = {
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
	&Rdi_Indicator::theInfo,
	&TPCStepSizeTDD::theInfo,
	&EAGCHSetConfigLCR::theInfo,
	&BlerTarget::theInfo,
};
const void *EAGCHInformationTDD128::itemsPres[4] = {
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





const void *Ccch_transmission_Info::itemsInfo[4] = {
	&CommonERNTIInfo::theInfo,
	&Harq_MaximumNumberOfRetransmissions::theInfo,
	&harq_retransmission_timer::theInfo,
	&Harq_power_offset::theInfo,
};
const void *Ccch_transmission_Info::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const Ccch_transmission_Info::Info Ccch_transmission_Info::theInfo = {
	Ccch_transmission_Info::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 0, 0
};

const void *Tdd128::itemsInfo[6] = {
	&ERUCCHInfoTDD128::theInfo,
	&EPUCHInfoTDD128::theInfo,
	&EHICHInformationTDD128::theInfo,
	&EAGCHInformationTDD128::theInfo,
	&harq_Info::theInfo,
	&Ccch_transmission_Info::theInfo,
};
const void *Tdd128::itemsPres[6] = {
	1,
	1,
	1,
	1,
	1,
	1,
};
const Tdd128::Info Tdd128::theInfo = {
	Tdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 0, 0
};

const void *Tdd::choicesInfo[3] = {
	&Tdd768::theInfo,
	&Tdd384::theInfo,
	&Tdd128::theInfo,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Dummy::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *CommonEDCHSystemInfo::itemsInfo[3] = {
	&ULInterference::theInfo,
	&CommonEDCHMACdFlowList::theInfo,
	&ModeSpecificInfo::theInfo,
};
const void *CommonEDCHSystemInfo::itemsPres[3] = {
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
	&Fdd::theInfo,
	&Tdd::theInfo,
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
const void *PRACHPowerOffset::itemsPres[2] = {
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
	&Mmax::theInfo,
	&NB01::theInfo,
	&NB01::theInfo,
};
const void *RACHTransmissionParameters::itemsPres[3] = {
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
	&E_ai_Indication::theInfo,
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
	&PowerOffsetPp_e::theInfo,
};
const void *PRACHPreambleForEnhancedUplink::itemsPres[13] = {
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
const void *ULDPCHpowerControlInfoForCommonEDCH::itemsPres[4] = {
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
	&E_TFCI_Boost::theInfo,
	&Delta_T2TP::theInfo,
};
const void *ETFCBoostInfor7::itemsPres[2] = {
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
const void *EDPCCHInfor7::itemsPres[4] = {
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
	&Reference_E_TFCI::theInfo,
	&Reference_E_TFCI_PO_r7::theInfo,
};
const void *EDPDCHReferenceETFCIr7::itemsPres[2] = {
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
	&PowerOffsetForSchedInfo::theInfo,
};
const void *EDPDCHSchedulingInfoConfiguration::itemsPres[3] = {
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
	&ThreeIndexStepThreshold::theInfo,
	&TwoIndexStepThreshold::theInfo,
};
const void *EDPDCHInfor8::itemsPres[9] = {
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
	&InitialServingGrantValue::theInfo,
	&EDCHTTI::theInfo,
	&EAGCHInformation::theInfo,
	&harq_Info::theInfo,
	&ULDPCHpowerControlInfoForCommonEDCH::theInfo,
	&EDPCCHInfor7::theInfo,
	&EDPDCHInfor8::theInfo,
	&Dl_FDPCH_TPCcommandErrorRate::theInfo,
	&Additional_E_DCH_TransmitBackoff::theInfo,
	&max_CCCH_ResourceAllocation::theInfo,
	&Max_PeriodForCollisionResolution::theInfo,
	&e_dch_TransmitContinuationOffset::theInfo,
	&Ack_nack_support_on_HS_DPCCH::theInfo,
	&MeasurementFeedbackInfor7::theInfo,
	&Common_E_DCH_ResourceInfoList::theInfo,
};
const void *CommonEDCHSystemInfoFDD::itemsPres[18] = {
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
const void *CommonTimeslotInfoMBMS::itemsPres[3] = {
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




const void *RepetitionPeriod2::itemsInfo[2] = {
	&Length::theInfo,
	&Offset::theInfo,
};
const void *RepetitionPeriod2::itemsPres[2] = {
	1,
	1,
};
const RepetitionPeriod2::Info RepetitionPeriod2::theInfo = {
	RepetitionPeriod2::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};



const void *RepetitionPeriod4::itemsInfo[2] = {
	&Length::theInfo,
	&Offset::theInfo,
};
const void *RepetitionPeriod4::itemsPres[2] = {
	1,
	1,
};
const RepetitionPeriod4::Info RepetitionPeriod4::theInfo = {
	RepetitionPeriod4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};



const void *RepetitionPeriod8::itemsInfo[2] = {
	&Length::theInfo,
	&Offset::theInfo,
};
const void *RepetitionPeriod8::itemsPres[2] = {
	1,
	1,
};
const RepetitionPeriod8::Info RepetitionPeriod8::theInfo = {
	RepetitionPeriod8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};



const void *RepetitionPeriod16::itemsInfo[2] = {
	&Length::theInfo,
	&Offset::theInfo,
};
const void *RepetitionPeriod16::itemsPres[2] = {
	1,
	1,
};
const RepetitionPeriod16::Info RepetitionPeriod16::theInfo = {
	RepetitionPeriod16::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};



const void *RepetitionPeriod32::itemsInfo[2] = {
	&Length::theInfo,
	&Offset::theInfo,
};
const void *RepetitionPeriod32::itemsPres[2] = {
	1,
	1,
};
const RepetitionPeriod32::Info RepetitionPeriod32::theInfo = {
	RepetitionPeriod32::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};



const void *RepetitionPeriod64::itemsInfo[2] = {
	&Length::theInfo,
	&Offset::theInfo,
};
const void *RepetitionPeriod64::itemsPres[2] = {
	1,
	1,
};
const RepetitionPeriod64::Info RepetitionPeriod64::theInfo = {
	RepetitionPeriod64::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *RepetitionPeriodLengthAndOffset::choicesInfo[7] = {
	&RepetitionPeriod1::theInfo,
	&RepetitionPeriod2::theInfo,
	&RepetitionPeriod4::theInfo,
	&RepetitionPeriod8::theInfo,
	&RepetitionPeriod16::theInfo,
	&RepetitionPeriod32::theInfo,
	&RepetitionPeriod64::theInfo,
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
const void *CommonTimeslotInfoSCCPCH::itemsPres[4] = {
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



const void *Continue::itemsInfo[1] = {
	&EnablingDelayTDD128::theInfo,
};
const void *Continue::itemsPres[1] = {
	0,
};
const Continue::Info Continue::theInfo = {
	Continue::create,
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
	&HS_SCCH_DRX_Offset::theInfo,
};
const void *HSSCCHDRXInfoTDD128::itemsPres[3] = {
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




const void *E_AGCH_DRX_Parameters::itemsInfo[3] = {
	&ControlChannelDRXCycleTDD128::theInfo,
	&EAGCHInactivityMonitorThresholdTDD128::theInfo,
	&E_AGCH_DRX_Offset::theInfo,
};
const void *E_AGCH_DRX_Parameters::itemsPres[3] = {
	1,
	0,
	1,
};
const E_AGCH_DRX_Parameters::Info E_AGCH_DRX_Parameters::theInfo = {
	E_AGCH_DRX_Parameters::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};

const void *E_AGCH_DRX_InfoType::choicesInfo[2] = {
	&SameAsHS_SCCH::theInfo,
	&E_AGCH_DRX_Parameters::theInfo,
};
const E_AGCH_DRX_InfoType::Info E_AGCH_DRX_InfoType::theInfo = {
	E_AGCH_DRX_InfoType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *EAGCHDRXInfoTDD128::itemsInfo[1] = {
	&E_AGCH_DRX_InfoType::theInfo,
};
const void *EAGCHDRXInfoTDD128::itemsPres[1] = {
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

const void *NewOperation::itemsInfo[3] = {
	&HSSCCHDRXInfoTDD128::theInfo,
	&EAGCHDRXInfoTDD128::theInfo,
	&EnablingDelayTDD128::theInfo,
};
const void *NewOperation::itemsPres[3] = {
	1,
	0,
	1,
};
const NewOperation::Info NewOperation::theInfo = {
	NewOperation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};

const void *ControlChannelDrxOperation::choicesInfo[2] = {
	&Continue::theInfo,
	&NewOperation::theInfo,
};
const ControlChannelDrxOperation::Info ControlChannelDrxOperation::theInfo = {
	ControlChannelDrxOperation::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ControlChannelDRXInfoTDD128r8::itemsInfo[1] = {
	&ControlChannelDrxOperation::theInfo,
};
const void *ControlChannelDRXInfoTDD128r8::itemsPres[1] = {
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
const void *CPCHPersistenceLevels::itemsPres[2] = {
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
const void *UCSMInfo::itemsPres[3] = {
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
	&Pcpch_UL_ScramblingCode::theInfo,
	&Pcpch_DL_ChannelisationCode::theInfo,
	&SecondaryScramblingCode::theInfo,
	&PCPLength::theInfo,
	&UCSMInfo::theInfo,
};
const void *PCPCHChannelInfo::itemsPres[5] = {
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
const void *CPCHSetInfo::itemsPres[16] = {
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
const void *TimeInfo::itemsPres[2] = {
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




const void *UeSpecificMidamble::itemsInfo[1] = {
	&MidambleShiftLong::theInfo,
};
const void *UeSpecificMidamble::itemsPres[1] = {
	1,
};
const UeSpecificMidamble::Info UeSpecificMidamble::theInfo = {
	UeSpecificMidamble::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MidambleAllocationMode::choicesInfo[3] = {
	&DefaultMidamble::theInfo,
	&CommonMidamble::theInfo,
	&UeSpecificMidamble::theInfo,
};
const MidambleAllocationMode::Info MidambleAllocationMode::theInfo = {
	MidambleAllocationMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *Type1::itemsInfo[2] = {
	&MidambleConfigurationBurstType1and3::theInfo,
	&MidambleAllocationMode::theInfo,
};
const void *Type1::itemsPres[2] = {
	1,
	1,
};
const Type1::Info Type1::theInfo = {
	Type1::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};





const void *UeSpecificMidamble::itemsInfo[1] = {
	&MidambleShiftShort::theInfo,
};
const void *UeSpecificMidamble::itemsPres[1] = {
	1,
};
const UeSpecificMidamble::Info UeSpecificMidamble::theInfo = {
	UeSpecificMidamble::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MidambleAllocationMode::choicesInfo[3] = {
	&DefaultMidamble::theInfo,
	&CommonMidamble::theInfo,
	&UeSpecificMidamble::theInfo,
};
const MidambleAllocationMode::Info MidambleAllocationMode::theInfo = {
	MidambleAllocationMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *Type2::itemsInfo[2] = {
	&MidambleConfigurationBurstType2::theInfo,
	&MidambleAllocationMode::theInfo,
};
const void *Type2::itemsPres[2] = {
	1,
	1,
};
const Type2::Info Type2::theInfo = {
	Type2::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};


const void *UeSpecificMidamble::itemsInfo[1] = {
	&MidambleShiftLong::theInfo,
};
const void *UeSpecificMidamble::itemsPres[1] = {
	1,
};
const UeSpecificMidamble::Info UeSpecificMidamble::theInfo = {
	UeSpecificMidamble::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MidambleAllocationMode::choicesInfo[2] = {
	&DefaultMidamble::theInfo,
	&UeSpecificMidamble::theInfo,
};
const MidambleAllocationMode::Info MidambleAllocationMode::theInfo = {
	MidambleAllocationMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Type3::itemsInfo[2] = {
	&MidambleConfigurationBurstType1and3::theInfo,
	&MidambleAllocationMode::theInfo,
};
const void *Type3::itemsPres[2] = {
	1,
	1,
};
const Type3::Info Type3::theInfo = {
	Type3::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *BurstType::choicesInfo[3] = {
	&Type1::theInfo,
	&Type2::theInfo,
	&Type3::theInfo,
};
const BurstType::Info BurstType::theInfo = {
	BurstType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *MidambleShiftAndBurstType::itemsInfo[1] = {
	&BurstType::theInfo,
};
const void *MidambleShiftAndBurstType::itemsPres[1] = {
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
	&Tfci_Existence::theInfo,
	&MidambleShiftAndBurstType::theInfo,
};
const void *IndividualTimeslotInfo::itemsPres[3] = {
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

const void *Consecutive::itemsInfo[2] = {
	&DLTSChannelisationCode::theInfo,
	&DLTSChannelisationCode::theInfo,
};
const void *Consecutive::itemsPres[2] = {
	1,
	1,
};
const Consecutive::Info Consecutive::theInfo = {
	Consecutive::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};


const void *CodesRepresentation::choicesInfo[2] = {
	&Consecutive::theInfo,
	&Bitmap::theInfo,
};
const CodesRepresentation::Info CodesRepresentation::theInfo = {
	CodesRepresentation::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLTSChannelisationCodesShort::itemsInfo[1] = {
	&CodesRepresentation::theInfo,
};
const void *DLTSChannelisationCodesShort::itemsPres[1] = {
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



const void *SameAsLast::itemsInfo[1] = {
	&TimeslotNumber::theInfo,
};
const void *SameAsLast::itemsPres[1] = {
	1,
};
const SameAsLast::Info SameAsLast::theInfo = {
	SameAsLast::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *NewParameters::itemsInfo[2] = {
	&IndividualTimeslotInfo::theInfo,
	&DLTSChannelisationCodesShort::theInfo,
};
const void *NewParameters::itemsPres[2] = {
	1,
	1,
};
const NewParameters::Info NewParameters::theInfo = {
	NewParameters::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *Parameters::choicesInfo[2] = {
	&SameAsLast::theInfo,
	&NewParameters::theInfo,
};
const Parameters::Info Parameters::theInfo = {
	Parameters::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DownlinkAdditionalTimeslots::itemsInfo[1] = {
	&Parameters::theInfo,
};
const void *DownlinkAdditionalTimeslots::itemsPres[1] = {
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


const void *AdditionalTimeslots::choicesInfo[2] = {
	&Consecutive::theInfo,
	&TimeslotList::theInfo,
};
const AdditionalTimeslots::Info AdditionalTimeslots::theInfo = {
	AdditionalTimeslots::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *MoreTimeslots::choicesInfo[2] = {
	&NoMore::theInfo,
	&AdditionalTimeslots::theInfo,
};
const MoreTimeslots::Info MoreTimeslots::theInfo = {
	MoreTimeslots::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DownlinkTimeslotsCodes::itemsInfo[3] = {
	&IndividualTimeslotInfo::theInfo,
	&DLTSChannelisationCodesShort::theInfo,
	&MoreTimeslots::theInfo,
};
const void *DownlinkTimeslotsCodes::itemsPres[3] = {
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
const void *DLCCTrCh::itemsPres[5] = {
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

const void *Tdd384::itemsInfo[1] = {
	&DownlinkTimeslotsCodes::theInfo,
};
const void *Tdd384::itemsPres[1] = {
	0,
};
const Tdd384::Info Tdd384::theInfo = {
	Tdd384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};





const void *IndividualTimeslotInfoLCRr4::itemsInfo[6] = {
	&TimeslotNumberLCRr4::theInfo,
	&Tfci_Existence::theInfo,
	&MidambleShiftAndBurstTypeLCRr4::theInfo,
	&modulation::theInfo,
	&ss_TPC_Symbols::theInfo,
	&AdditionalSS_TPC_Symbols::theInfo,
};
const void *IndividualTimeslotInfoLCRr4::itemsPres[6] = {
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



const void *SameAsLast::itemsInfo[1] = {
	&TimeslotNumberLCRr4::theInfo,
};
const void *SameAsLast::itemsPres[1] = {
	1,
};
const SameAsLast::Info SameAsLast::theInfo = {
	SameAsLast::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *NewParameters::itemsInfo[2] = {
	&IndividualTimeslotInfoLCRr4::theInfo,
	&DLTSChannelisationCodesShort::theInfo,
};
const void *NewParameters::itemsPres[2] = {
	1,
	1,
};
const NewParameters::Info NewParameters::theInfo = {
	NewParameters::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *Parameters::choicesInfo[2] = {
	&SameAsLast::theInfo,
	&NewParameters::theInfo,
};
const Parameters::Info Parameters::theInfo = {
	Parameters::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DownlinkAdditionalTimeslotsLCRr4::itemsInfo[1] = {
	&Parameters::theInfo,
};
const void *DownlinkAdditionalTimeslotsLCRr4::itemsPres[1] = {
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


const void *AdditionalTimeslots::choicesInfo[2] = {
	&Consecutive::theInfo,
	&TimeslotList::theInfo,
};
const AdditionalTimeslots::Info AdditionalTimeslots::theInfo = {
	AdditionalTimeslots::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *MoreTimeslots::choicesInfo[2] = {
	&NoMore::theInfo,
	&AdditionalTimeslots::theInfo,
};
const MoreTimeslots::Info MoreTimeslots::theInfo = {
	MoreTimeslots::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DownlinkTimeslotsCodesLCRr4::itemsInfo[3] = {
	&IndividualTimeslotInfoLCRr4::theInfo,
	&DLTSChannelisationCodesShort::theInfo,
	&MoreTimeslots::theInfo,
};
const void *DownlinkTimeslotsCodesLCRr4::itemsPres[3] = {
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

const void *Tdd128::itemsInfo[1] = {
	&DownlinkTimeslotsCodesLCRr4::theInfo,
};
const void *Tdd128::itemsPres[1] = {
	0,
};
const Tdd128::Info Tdd128::theInfo = {
	Tdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *TddOption::choicesInfo[2] = {
	&Tdd384::theInfo,
	&Tdd128::theInfo,
};
const TddOption::Info TddOption::theInfo = {
	TddOption::create,
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
	&TddOption::theInfo,
	&ULCCTrChTPCList::theInfo,
};
const void *DLCCTrChr4::itemsPres[5] = {
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




const void *UeSpecificMidamble::itemsInfo[1] = {
	&MidambleShiftLong::theInfo,
};
const void *UeSpecificMidamble::itemsPres[1] = {
	1,
};
const UeSpecificMidamble::Info UeSpecificMidamble::theInfo = {
	UeSpecificMidamble::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MidambleAllocationMode::choicesInfo[3] = {
	&DefaultMidamble::theInfo,
	&CommonMidamble::theInfo,
	&UeSpecificMidamble::theInfo,
};
const MidambleAllocationMode::Info MidambleAllocationMode::theInfo = {
	MidambleAllocationMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *Type1::itemsInfo[2] = {
	&MidambleConfigurationBurstType1and3::theInfo,
	&MidambleAllocationMode::theInfo,
};
const void *Type1::itemsPres[2] = {
	1,
	1,
};
const Type1::Info Type1::theInfo = {
	Type1::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};



const void *UeSpecificMidamble::itemsInfo[1] = {
	&MidambleShiftShort::theInfo,
};
const void *UeSpecificMidamble::itemsPres[1] = {
	1,
};
const UeSpecificMidamble::Info UeSpecificMidamble::theInfo = {
	UeSpecificMidamble::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MidambleAllocationMode::choicesInfo[3] = {
	&DefaultMidamble::theInfo,
	&CommonMidamble::theInfo,
	&UeSpecificMidamble::theInfo,
};
const MidambleAllocationMode::Info MidambleAllocationMode::theInfo = {
	MidambleAllocationMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *Type2::itemsInfo[2] = {
	&MidambleConfigurationBurstType2::theInfo,
	&MidambleAllocationMode::theInfo,
};
const void *Type2::itemsPres[2] = {
	1,
	1,
};
const Type2::Info Type2::theInfo = {
	Type2::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};


const void *UeSpecificMidamble::itemsInfo[1] = {
	&MidambleShiftLong::theInfo,
};
const void *UeSpecificMidamble::itemsPres[1] = {
	1,
};
const UeSpecificMidamble::Info UeSpecificMidamble::theInfo = {
	UeSpecificMidamble::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MidambleAllocationMode::choicesInfo[2] = {
	&DefaultMidamble::theInfo,
	&UeSpecificMidamble::theInfo,
};
const MidambleAllocationMode::Info MidambleAllocationMode::theInfo = {
	MidambleAllocationMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Type3::itemsInfo[2] = {
	&MidambleConfigurationBurstType1and3::theInfo,
	&MidambleAllocationMode::theInfo,
};
const void *Type3::itemsPres[2] = {
	1,
	1,
};
const Type3::Info Type3::theInfo = {
	Type3::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};


const void *BurstType::choicesInfo[4] = {
	&Type1::theInfo,
	&Type2::theInfo,
	&Type3::theInfo,
	&MbsfnBurstType4::theInfo,
};
const BurstType::Info BurstType::theInfo = {
	BurstType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	3
};

const void *MidambleShiftAndBurstTyper7::itemsInfo[1] = {
	&BurstType::theInfo,
};
const void *MidambleShiftAndBurstTyper7::itemsPres[1] = {
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
	&Tfci_Existence::theInfo,
	&MidambleShiftAndBurstTyper7::theInfo,
};
const void *IndividualTimeslotInfor7::itemsPres[3] = {
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



const void *SameAsLast::itemsInfo[1] = {
	&TimeslotNumber::theInfo,
};
const void *SameAsLast::itemsPres[1] = {
	1,
};
const SameAsLast::Info SameAsLast::theInfo = {
	SameAsLast::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *NewParameters::itemsInfo[2] = {
	&IndividualTimeslotInfor7::theInfo,
	&DLTSChannelisationCodesShort::theInfo,
};
const void *NewParameters::itemsPres[2] = {
	1,
	1,
};
const NewParameters::Info NewParameters::theInfo = {
	NewParameters::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *Parameters::choicesInfo[2] = {
	&SameAsLast::theInfo,
	&NewParameters::theInfo,
};
const Parameters::Info Parameters::theInfo = {
	Parameters::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DownlinkAdditionalTimeslotsr7::itemsInfo[1] = {
	&Parameters::theInfo,
};
const void *DownlinkAdditionalTimeslotsr7::itemsPres[1] = {
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


const void *AdditionalTimeslots::choicesInfo[2] = {
	&Consecutive::theInfo,
	&TimeslotList::theInfo,
};
const AdditionalTimeslots::Info AdditionalTimeslots::theInfo = {
	AdditionalTimeslots::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *MoreTimeslots::choicesInfo[2] = {
	&NoMore::theInfo,
	&AdditionalTimeslots::theInfo,
};
const MoreTimeslots::Info MoreTimeslots::theInfo = {
	MoreTimeslots::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DownlinkTimeslotsCodesr7::itemsInfo[3] = {
	&IndividualTimeslotInfor7::theInfo,
	&DLTSChannelisationCodesShort::theInfo,
	&MoreTimeslots::theInfo,
};
const void *DownlinkTimeslotsCodesr7::itemsPres[3] = {
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

const void *Tdd384::itemsInfo[1] = {
	&DownlinkTimeslotsCodesr7::theInfo,
};
const void *Tdd384::itemsPres[1] = {
	0,
};
const Tdd384::Info Tdd384::theInfo = {
	Tdd384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};




const void *UeSpecificMidamble::itemsInfo[1] = {
	&MidambleShiftLong::theInfo,
};
const void *UeSpecificMidamble::itemsPres[1] = {
	1,
};
const UeSpecificMidamble::Info UeSpecificMidamble::theInfo = {
	UeSpecificMidamble::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MidambleAllocationMode::choicesInfo[3] = {
	&DefaultMidamble::theInfo,
	&CommonMidamble::theInfo,
	&UeSpecificMidamble::theInfo,
};
const MidambleAllocationMode::Info MidambleAllocationMode::theInfo = {
	MidambleAllocationMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *Type1::itemsInfo[2] = {
	&MidambleConfigurationBurstType1and3::theInfo,
	&MidambleAllocationMode::theInfo,
};
const void *Type1::itemsPres[2] = {
	1,
	1,
};
const Type1::Info Type1::theInfo = {
	Type1::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};





const void *UeSpecificMidamble::itemsInfo[1] = {
	&MidambleShiftShortVHCR::theInfo,
};
const void *UeSpecificMidamble::itemsPres[1] = {
	1,
};
const UeSpecificMidamble::Info UeSpecificMidamble::theInfo = {
	UeSpecificMidamble::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MidambleAllocationMode::choicesInfo[3] = {
	&DefaultMidamble::theInfo,
	&CommonMidamble::theInfo,
	&UeSpecificMidamble::theInfo,
};
const MidambleAllocationMode::Info MidambleAllocationMode::theInfo = {
	MidambleAllocationMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *Type2::itemsInfo[2] = {
	&MidambleConfigurationBurstType2VHCR::theInfo,
	&MidambleAllocationMode::theInfo,
};
const void *Type2::itemsPres[2] = {
	1,
	1,
};
const Type2::Info Type2::theInfo = {
	Type2::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};


const void *UeSpecificMidamble::itemsInfo[1] = {
	&MidambleShiftLong::theInfo,
};
const void *UeSpecificMidamble::itemsPres[1] = {
	1,
};
const UeSpecificMidamble::Info UeSpecificMidamble::theInfo = {
	UeSpecificMidamble::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MidambleAllocationMode::choicesInfo[2] = {
	&DefaultMidamble::theInfo,
	&UeSpecificMidamble::theInfo,
};
const MidambleAllocationMode::Info MidambleAllocationMode::theInfo = {
	MidambleAllocationMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Type3::itemsInfo[2] = {
	&MidambleConfigurationBurstType1and3::theInfo,
	&MidambleAllocationMode::theInfo,
};
const void *Type3::itemsPres[2] = {
	1,
	1,
};
const Type3::Info Type3::theInfo = {
	Type3::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};


const void *BurstType::choicesInfo[4] = {
	&Type1::theInfo,
	&Type2::theInfo,
	&Type3::theInfo,
	&MbsfnBurstType4::theInfo,
};
const BurstType::Info BurstType::theInfo = {
	BurstType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	3
};

const void *MidambleShiftAndBurstTypeVHCR::itemsInfo[1] = {
	&BurstType::theInfo,
};
const void *MidambleShiftAndBurstTypeVHCR::itemsPres[1] = {
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
	&Tfci_Existence::theInfo,
	&MidambleShiftAndBurstTypeVHCR::theInfo,
};
const void *IndividualTimeslotInfoVHCR::itemsPres[3] = {
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

const void *Consecutive::itemsInfo[2] = {
	&DLTSChannelisationCodeVHCR::theInfo,
	&DLTSChannelisationCodeVHCR::theInfo,
};
const void *Consecutive::itemsPres[2] = {
	1,
	1,
};
const Consecutive::Info Consecutive::theInfo = {
	Consecutive::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};


const void *CodesRepresentation::choicesInfo[2] = {
	&Consecutive::theInfo,
	&Bitmap::theInfo,
};
const CodesRepresentation::Info CodesRepresentation::theInfo = {
	CodesRepresentation::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLTSChannelisationCodesShortVHCR::itemsInfo[1] = {
	&CodesRepresentation::theInfo,
};
const void *DLTSChannelisationCodesShortVHCR::itemsPres[1] = {
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



const void *SameAsLast::itemsInfo[1] = {
	&TimeslotNumber::theInfo,
};
const void *SameAsLast::itemsPres[1] = {
	1,
};
const SameAsLast::Info SameAsLast::theInfo = {
	SameAsLast::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *NewParameters::itemsInfo[2] = {
	&IndividualTimeslotInfoVHCR::theInfo,
	&DLTSChannelisationCodesShortVHCR::theInfo,
};
const void *NewParameters::itemsPres[2] = {
	1,
	1,
};
const NewParameters::Info NewParameters::theInfo = {
	NewParameters::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *Parameters::choicesInfo[2] = {
	&SameAsLast::theInfo,
	&NewParameters::theInfo,
};
const Parameters::Info Parameters::theInfo = {
	Parameters::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DownlinkAdditionalTimeslotsVHCR::itemsInfo[1] = {
	&Parameters::theInfo,
};
const void *DownlinkAdditionalTimeslotsVHCR::itemsPres[1] = {
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


const void *AdditionalTimeslots::choicesInfo[2] = {
	&Consecutive::theInfo,
	&TimeslotList::theInfo,
};
const AdditionalTimeslots::Info AdditionalTimeslots::theInfo = {
	AdditionalTimeslots::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *MoreTimeslots::choicesInfo[2] = {
	&NoMore::theInfo,
	&AdditionalTimeslots::theInfo,
};
const MoreTimeslots::Info MoreTimeslots::theInfo = {
	MoreTimeslots::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DownlinkTimeslotsCodesVHCR::itemsInfo[3] = {
	&IndividualTimeslotInfoVHCR::theInfo,
	&DLTSChannelisationCodesShortVHCR::theInfo,
	&MoreTimeslots::theInfo,
};
const void *DownlinkTimeslotsCodesVHCR::itemsPres[3] = {
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

const void *Tdd768::itemsInfo[1] = {
	&DownlinkTimeslotsCodesVHCR::theInfo,
};
const void *Tdd768::itemsPres[1] = {
	0,
};
const Tdd768::Info Tdd768::theInfo = {
	Tdd768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *Tdd128::itemsInfo[1] = {
	&DownlinkTimeslotsCodesLCRr4::theInfo,
};
const void *Tdd128::itemsPres[1] = {
	0,
};
const Tdd128::Info Tdd128::theInfo = {
	Tdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *TddOption::choicesInfo[3] = {
	&Tdd384::theInfo,
	&Tdd768::theInfo,
	&Tdd128::theInfo,
};
const TddOption::Info TddOption::theInfo = {
	TddOption::create,
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
	&TddOption::theInfo,
	&ULCCTrChTPCList::theInfo,
};
const void *DLCCTrChr7::itemsPres[5] = {
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
	&Sf4::theInfo,
	&Sf8::theInfo,
	&Sf16::theInfo,
	&Sf32::theInfo,
	&Sf64::theInfo,
	&Sf128::theInfo,
	&Sf256::theInfo,
	&Sf512::theInfo,
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
const void *DLChannelisationCode::itemsPres[3] = {
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



const void *Initialise::itemsInfo[1] = {
	&Cfntargetsfnframeoffset::theInfo,
};
const void *Initialise::itemsPres[1] = {
	0,
};
const Initialise::Info Initialise::theInfo = {
	Initialise::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *CfnHandling::choicesInfo[2] = {
	&Maintain::theInfo,
	&Initialise::theInfo,
};
const CfnHandling::Info CfnHandling::theInfo = {
	CfnHandling::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};


const void *Fdd::itemsInfo[1] = {
	&DPCMode::theInfo,
};
const void *Fdd::itemsPres[1] = {
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *Tdd::itemsInfo[1] = {
	&TPCStepSizeTDD::theInfo,
};
const void *Tdd::itemsPres[1] = {
	0,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLDPCHPowerControlInfo::itemsInfo[1] = {
	&ModeSpecificInfo::theInfo,
};
const void *DLDPCHPowerControlInfo::itemsPres[1] = {
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
const void *RestrictedTrCH::itemsPres[3] = {
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
const void *Dlratematchingrestriction::itemsPres[1] = {
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


const void *Fdd::itemsInfo[6] = {
	&DLDPCHPowerControlInfo::theInfo,
	&PowerOffsetPilotpdpdch::theInfo,
	&Dlratematchingrestriction::theInfo,
	&SF512AndPilot::theInfo,
	&PositionFixedOrFlexible::theInfo,
	&Tfci_Existence::theInfo,
};
const void *Fdd::itemsPres[6] = {
	0,
	1,
	0,
	1,
	1,
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 2, 0
};

const void *Tdd::itemsInfo[1] = {
	&DLDPCHPowerControlInfo::theInfo,
};
const void *Tdd::itemsPres[1] = {
	0,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLDPCHInfoCommon::itemsInfo[2] = {
	&CfnHandling::theInfo,
	&ModeSpecificInfo::theInfo,
};
const void *DLDPCHInfoCommon::itemsPres[2] = {
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


const void *Activate::itemsInfo[1] = {
	&TGCFN::theInfo,
};
const void *Activate::itemsPres[1] = {
	1,
};
const Activate::Info Activate::theInfo = {
	Activate::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};


const void *Tgps_Status::choicesInfo[2] = {
	&Activate::theInfo,
	&Deactivate::theInfo,
};
const Tgps_Status::Info Tgps_Status::theInfo = {
	Tgps_Status::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};











const void *Ul_and_dl::itemsInfo[2] = {
	&ULCompressedModeMethod::theInfo,
	&DLCompressedModeMethod::theInfo,
};
const void *Ul_and_dl::itemsPres[2] = {
	1,
	1,
};
const Ul_and_dl::Info Ul_and_dl::theInfo = {
	Ul_and_dl::create,
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
	&Ul_and_dl::theInfo,
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
const void *TGPSConfigurationParams::itemsPres[18] = {
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
	&Tgps_Status::theInfo,
	&TGPSConfigurationParams::theInfo,
};
const void *TGPSequence::itemsPres[3] = {
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
const void *DPCHCompressedModeInfo::itemsPres[1] = {
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
const void *SSDTInformation::itemsPres[2] = {
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

const void *Fdd::itemsInfo[4] = {
	&DefaultDPCHOffsetValueFDD::theInfo,
	&DPCHCompressedModeInfo::theInfo,
	&TXDiversityMode::theInfo,
	&SSDTInformation::theInfo,
};
const void *Fdd::itemsPres[4] = {
	0,
	0,
	0,
	0,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 4, 0
};

const void *Tdd::itemsInfo[1] = {
	&DefaultDPCHOffsetValueTDD::theInfo,
};
const void *Tdd::itemsPres[1] = {
	0,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLCommonInformation::itemsInfo[2] = {
	&DLDPCHInfoCommon::theInfo,
	&ModeSpecificInfo::theInfo,
};
const void *DLCommonInformation::itemsPres[2] = {
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


const void *Initialise::itemsInfo[1] = {
	&Cfntargetsfnframeoffset::theInfo,
};
const void *Initialise::itemsPres[1] = {
	0,
};
const Initialise::Info Initialise::theInfo = {
	Initialise::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *CfnHandling::choicesInfo[2] = {
	&Maintain::theInfo,
	&Initialise::theInfo,
};
const CfnHandling::Info CfnHandling::theInfo = {
	CfnHandling::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};


const void *Fdd::itemsInfo[6] = {
	&DLDPCHPowerControlInfo::theInfo,
	&PowerOffsetPilotpdpdch::theInfo,
	&Dlratematchingrestriction::theInfo,
	&SF512AndPilot::theInfo,
	&PositionFixedOrFlexible::theInfo,
	&Tfci_Existence::theInfo,
};
const void *Fdd::itemsPres[6] = {
	0,
	1,
	0,
	1,
	1,
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 2, 0
};

const void *Tdd::itemsInfo[1] = {
	&DLDPCHPowerControlInfo::theInfo,
};
const void *Tdd::itemsPres[1] = {
	0,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLDPCHInfoCommonr4::itemsInfo[3] = {
	&CfnHandling::theInfo,
	&ModeSpecificInfo::theInfo,
	&MACdHFNinitialvalue::theInfo,
};
const void *DLDPCHInfoCommonr4::itemsPres[3] = {
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
const void *SSDTInformationr4::itemsPres[3] = {
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

const void *Fdd::itemsInfo[4] = {
	&DefaultDPCHOffsetValueFDD::theInfo,
	&DPCHCompressedModeInfo::theInfo,
	&TXDiversityMode::theInfo,
	&SSDTInformationr4::theInfo,
};
const void *Fdd::itemsPres[4] = {
	0,
	0,
	0,
	0,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 4, 0
};



const void *Tdd128::itemsInfo[1] = {
	&Tstd_Indicator::theInfo,
};
const void *Tdd128::itemsPres[1] = {
	1,
};
const Tdd128::Info Tdd128::theInfo = {
	Tdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *TddOption::choicesInfo[2] = {
	&Tdd384::theInfo,
	&Tdd128::theInfo,
};
const TddOption::Info TddOption::theInfo = {
	TddOption::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Tdd::itemsInfo[2] = {
	&TddOption::theInfo,
	&DefaultDPCHOffsetValueTDD::theInfo,
};
const void *Tdd::itemsPres[2] = {
	1,
	0,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLCommonInformationr4::itemsInfo[2] = {
	&DLDPCHInfoCommonr4::theInfo,
	&ModeSpecificInfo::theInfo,
};
const void *DLCommonInformationr4::itemsPres[2] = {
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

const void *Fdd::itemsInfo[4] = {
	&DefaultDPCHOffsetValueFDD::theInfo,
	&DPCHCompressedModeInfo::theInfo,
	&TXDiversityMode::theInfo,
	&SSDTInformationr4::theInfo,
};
const void *Fdd::itemsPres[4] = {
	0,
	0,
	0,
	0,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 4, 0
};



const void *Tdd128::itemsInfo[1] = {
	&Tstd_Indicator::theInfo,
};
const void *Tdd128::itemsPres[1] = {
	1,
};
const Tdd128::Info Tdd128::theInfo = {
	Tdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *TddOption::choicesInfo[2] = {
	&Tdd384::theInfo,
	&Tdd128::theInfo,
};
const TddOption::Info TddOption::theInfo = {
	TddOption::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Tdd::itemsInfo[2] = {
	&TddOption::theInfo,
	&DefaultDPCHOffsetValueTDD::theInfo,
};
const void *Tdd::itemsPres[2] = {
	1,
	0,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};


const void *DLCommonInformationr5::itemsInfo[3] = {
	&DLDPCHInfoCommonr4::theInfo,
	&ModeSpecificInfo::theInfo,
	&mac_hsResetIndicator::theInfo,
};
const void *DLCommonInformationr5::itemsPres[3] = {
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


const void *Maintain::itemsInfo[1] = {
	&TimingMaintainedSynchInd::theInfo,
};
const void *Maintain::itemsPres[1] = {
	0,
};
const Maintain::Info Maintain::theInfo = {
	Maintain::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};


const void *CfnHandling::choicesInfo[2] = {
	&Maintain::theInfo,
	&Initialise::theInfo,
};
const CfnHandling::Info CfnHandling::theInfo = {
	CfnHandling::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};


const void *Fdd::itemsInfo[6] = {
	&DLDPCHPowerControlInfo::theInfo,
	&PowerOffsetPilotpdpdch::theInfo,
	&Dlratematchingrestriction::theInfo,
	&SF512AndPilot::theInfo,
	&PositionFixedOrFlexible::theInfo,
	&Tfci_Existence::theInfo,
};
const void *Fdd::itemsPres[6] = {
	0,
	1,
	0,
	1,
	1,
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 2, 0
};

const void *Tdd::itemsInfo[1] = {
	&DLDPCHPowerControlInfo::theInfo,
};
const void *Tdd::itemsPres[1] = {
	0,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLDPCHInfoCommonr6::itemsInfo[3] = {
	&CfnHandling::theInfo,
	&ModeSpecificInfo::theInfo,
	&MACdHFNinitialvalue::theInfo,
};
const void *DLDPCHInfoCommonr6::itemsPres[3] = {
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

const void *Maintain::itemsInfo[1] = {
	&TimingMaintainedSynchInd::theInfo,
};
const void *Maintain::itemsPres[1] = {
	0,
};
const Maintain::Info Maintain::theInfo = {
	Maintain::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};


const void *CfnHandling::choicesInfo[2] = {
	&Maintain::theInfo,
	&Initialise::theInfo,
};
const CfnHandling::Info CfnHandling::theInfo = {
	CfnHandling::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};


const void *DLFDPCHInfoCommonr6::itemsInfo[3] = {
	&CfnHandling::theInfo,
	&DLDPCHPowerControlInfo::theInfo,
	&Dl_FDPCH_TPCcommandErrorRate::theInfo,
};
const void *DLFDPCHInfoCommonr6::itemsPres[3] = {
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

const void *Dl_dpchInfoCommon::choicesInfo[2] = {
	&DLDPCHInfoCommonr6::theInfo,
	&DLFDPCHInfoCommonr6::theInfo,
};
const Dl_dpchInfoCommon::Info Dl_dpchInfoCommon::theInfo = {
	Dl_dpchInfoCommon::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Fdd::itemsInfo[3] = {
	&DefaultDPCHOffsetValueFDD::theInfo,
	&DPCHCompressedModeInfo::theInfo,
	&TXDiversityMode::theInfo,
};
const void *Fdd::itemsPres[3] = {
	0,
	0,
	0,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};



const void *Tdd128::itemsInfo[1] = {
	&Tstd_Indicator::theInfo,
};
const void *Tdd128::itemsPres[1] = {
	1,
};
const Tdd128::Info Tdd128::theInfo = {
	Tdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *TddOption::choicesInfo[2] = {
	&Tdd384::theInfo,
	&Tdd128::theInfo,
};
const TddOption::Info TddOption::theInfo = {
	TddOption::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Tdd::itemsInfo[2] = {
	&TddOption::theInfo,
	&DefaultDPCHOffsetValueTDD::theInfo,
};
const void *Tdd::itemsPres[2] = {
	1,
	0,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};



const void *DLCommonInformationr6::itemsInfo[4] = {
	&Dl_dpchInfoCommon::theInfo,
	&ModeSpecificInfo::theInfo,
	&mac_hsResetIndicator::theInfo,
	&postVerificationPeriod::theInfo,
};
const void *DLCommonInformationr6::itemsPres[4] = {
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

const void *Dl_dpchInfoCommon::choicesInfo[2] = {
	&DLDPCHInfoCommonr6::theInfo,
	&DLFDPCHInfoCommonr6::theInfo,
};
const Dl_dpchInfoCommon::Info Dl_dpchInfoCommon::theInfo = {
	Dl_dpchInfoCommon::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Fdd::itemsInfo[3] = {
	&DefaultDPCHOffsetValueFDD::theInfo,
	&DPCHCompressedModeInfo::theInfo,
	&TXDiversityMode::theInfo,
};
const void *Fdd::itemsPres[3] = {
	0,
	0,
	0,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};




const void *Tdd128::itemsInfo[1] = {
	&Tstd_Indicator::theInfo,
};
const void *Tdd128::itemsPres[1] = {
	1,
};
const Tdd128::Info Tdd128::theInfo = {
	Tdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *TddOption::choicesInfo[3] = {
	&Tdd384::theInfo,
	&Tdd768::theInfo,
	&Tdd128::theInfo,
};
const TddOption::Info TddOption::theInfo = {
	TddOption::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *Tdd::itemsInfo[2] = {
	&TddOption::theInfo,
	&DefaultDPCHOffsetValueTDD::theInfo,
};
const void *Tdd::itemsPres[2] = {
	1,
	0,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};



const void *DLCommonInformationr7::itemsInfo[4] = {
	&Dl_dpchInfoCommon::theInfo,
	&ModeSpecificInfo::theInfo,
	&mac_hsResetIndicator::theInfo,
	&postVerificationPeriod::theInfo,
};
const void *DLCommonInformationr7::itemsPres[4] = {
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

const void *Dl_dpchInfoCommon::choicesInfo[2] = {
	&DLDPCHInfoCommonr6::theInfo,
	&DLFDPCHInfoCommonr6::theInfo,
};
const Dl_dpchInfoCommon::Info Dl_dpchInfoCommon::theInfo = {
	Dl_dpchInfoCommon::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Activate::itemsInfo[1] = {
	&TGCFN::theInfo,
};
const void *Activate::itemsPres[1] = {
	1,
};
const Activate::Info Activate::theInfo = {
	Activate::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};


const void *Tgps_Status::choicesInfo[2] = {
	&Activate::theInfo,
	&Deactivate::theInfo,
};
const Tgps_Status::Info Tgps_Status::theInfo = {
	Tgps_Status::create,
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
const void *TGPSConfigurationParamsr8::itemsPres[17] = {
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
	&Tgps_Status::theInfo,
	&TGPSConfigurationParamsr8::theInfo,
};
const void *TGPSequencer8::itemsPres[3] = {
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
const void *DPCHCompressedModeInfor8::itemsPres[1] = {
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

const void *Fdd::itemsInfo[3] = {
	&DefaultDPCHOffsetValueFDD::theInfo,
	&DPCHCompressedModeInfor8::theInfo,
	&TXDiversityMode::theInfo,
};
const void *Fdd::itemsPres[3] = {
	0,
	0,
	0,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};




const void *Tdd128::itemsInfo[1] = {
	&Tstd_Indicator::theInfo,
};
const void *Tdd128::itemsPres[1] = {
	1,
};
const Tdd128::Info Tdd128::theInfo = {
	Tdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *TddOption::choicesInfo[3] = {
	&Tdd384::theInfo,
	&Tdd768::theInfo,
	&Tdd128::theInfo,
};
const TddOption::Info TddOption::theInfo = {
	TddOption::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *Tdd::itemsInfo[2] = {
	&TddOption::theInfo,
	&DefaultDPCHOffsetValueTDD::theInfo,
};
const void *Tdd::itemsPres[2] = {
	1,
	0,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};



const void *DLCommonInformationr8::itemsInfo[4] = {
	&Dl_dpchInfoCommon::theInfo,
	&ModeSpecificInfo::theInfo,
	&mac_hsResetIndicator::theInfo,
	&postVerificationPeriod::theInfo,
};
const void *DLCommonInformationr8::itemsPres[4] = {
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
const void *DLDPCHInfoCommonPost::itemsPres[1] = {
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
const void *DLCommonInformationPost::itemsPres[1] = {
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


const void *Fdd::itemsInfo[7] = {
	&PCPICHUsageForChannelEst::theInfo,
	&DPCHFrameOffset::theInfo,
	&SecondaryCPICHInfo::theInfo,
	&DLChannelisationCodeList::theInfo,
	&TPCCombinationIndex::theInfo,
	&SSDTCellIdentity::theInfo,
	&ClosedLoopTimingAdjMode::theInfo,
};
const void *Fdd::itemsPres[7] = {
	1,
	1,
	0,
	1,
	1,
	0,
	0,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	7, 3, 0
};

const void *Tdd::itemsInfo[2] = {
	&DLCCTrChList::theInfo,
	&DLCCTrChListToRemove::theInfo,
};
const void *Tdd::itemsPres[2] = {
	0,
	0,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *DLDPCHInfoPerRL::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const DLDPCHInfoPerRL::Info DLDPCHInfoPerRL::theInfo = {
	DLDPCHInfoPerRL::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Fdd::itemsInfo[7] = {
	&PCPICHUsageForChannelEst::theInfo,
	&DPCHFrameOffset::theInfo,
	&SecondaryCPICHInfo::theInfo,
	&DLChannelisationCodeList::theInfo,
	&TPCCombinationIndex::theInfo,
	&SSDTCellIdentity::theInfo,
	&ClosedLoopTimingAdjMode::theInfo,
};
const void *Fdd::itemsPres[7] = {
	1,
	1,
	0,
	1,
	1,
	0,
	0,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	7, 3, 0
};

const void *Tdd::itemsInfo[2] = {
	&DLCCTrChListr4::theInfo,
	&DLCCTrChListToRemove::theInfo,
};
const void *Tdd::itemsPres[2] = {
	0,
	0,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *DLDPCHInfoPerRLr4::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const DLDPCHInfoPerRLr4::Info DLDPCHInfoPerRLr4::theInfo = {
	DLDPCHInfoPerRLr4::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};


const void *Fdd::itemsInfo[8] = {
	&PCPICHUsageForChannelEst::theInfo,
	&DPCHFrameOffset::theInfo,
	&SecondaryCPICHInfo::theInfo,
	&DLChannelisationCodeList::theInfo,
	&TPCCombinationIndex::theInfo,
	&PowerOffsetTPCpdpdch::theInfo,
	&SSDTCellIdentity::theInfo,
	&ClosedLoopTimingAdjMode::theInfo,
};
const void *Fdd::itemsPres[8] = {
	1,
	1,
	0,
	1,
	1,
	0,
	0,
	0,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	8, 4, 0
};

const void *Tdd::itemsInfo[2] = {
	&DLCCTrChListr4::theInfo,
	&DLCCTrChListToRemove::theInfo,
};
const void *Tdd::itemsPres[2] = {
	0,
	0,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *DLDPCHInfoPerRLr5::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const DLDPCHInfoPerRLr5::Info DLDPCHInfoPerRLr5::theInfo = {
	DLDPCHInfoPerRLr5::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Fdd::itemsInfo[7] = {
	&PCPICHUsageForChannelEst::theInfo,
	&DPCHFrameOffset::theInfo,
	&SecondaryCPICHInfo::theInfo,
	&DLChannelisationCodeList::theInfo,
	&TPCCombinationIndex::theInfo,
	&PowerOffsetTPCpdpdch::theInfo,
	&ClosedLoopTimingAdjMode::theInfo,
};
const void *Fdd::itemsPres[7] = {
	1,
	1,
	0,
	1,
	1,
	0,
	0,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	7, 3, 0
};

const void *Tdd::itemsInfo[2] = {
	&DLCCTrChListr4::theInfo,
	&DLCCTrChListToRemove::theInfo,
};
const void *Tdd::itemsPres[2] = {
	0,
	0,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *DLDPCHInfoPerRLr6::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const DLDPCHInfoPerRLr6::Info DLDPCHInfoPerRLr6::theInfo = {
	DLDPCHInfoPerRLr6::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Fdd::itemsInfo[7] = {
	&PCPICHUsageForChannelEst::theInfo,
	&DPCHFrameOffset::theInfo,
	&SecondaryCPICHInfo::theInfo,
	&DLChannelisationCodeList::theInfo,
	&TPCCombinationIndex::theInfo,
	&PowerOffsetTPCpdpdch::theInfo,
	&ClosedLoopTimingAdjMode::theInfo,
};
const void *Fdd::itemsPres[7] = {
	1,
	1,
	0,
	1,
	1,
	0,
	0,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	7, 3, 0
};

const void *Tdd::itemsInfo[2] = {
	&DLCCTrChListr7::theInfo,
	&DLCCTrChListToRemove::theInfo,
};
const void *Tdd::itemsPres[2] = {
	0,
	0,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *DLDPCHInfoPerRLr7::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
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
	&Dl_ChannelisationCode::theInfo,
	&TPCCombinationIndex::theInfo,
};
const void *DLFDPCHInfoPerRLr6::itemsPres[6] = {
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
const void *DLDPCHInfoPerRLPostFDD::itemsPres[3] = {
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
const void *DLDPCHInfoPerRLPostTDD::itemsPres[1] = {
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
const void *DLDPCHInfoPerRLPostTDDLCRr4::itemsPres[1] = {
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


const void *Fdd::itemsInfo[2] = {
	&HS_SCCHChannelisationCodeInfo::theInfo,
	&SecondaryScramblingCode::theInfo,
};
const void *Fdd::itemsPres[2] = {
	1,
	0,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};



const void *Tdd384::itemsInfo[5] = {
	&Nack_ack_power_offset::theInfo,
	&HSSICHPowerControlInfoTDD384::theInfo,
	&DHSSync::theInfo,
	&BlerTarget::theInfo,
	&HS_SCCH_SetConfiguration::theInfo,
};
const void *Tdd384::itemsPres[5] = {
	1,
	1,
	0,
	1,
	1,
};
const Tdd384::Info Tdd384::theInfo = {
	Tdd384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 1, 0
};





const void *Tdd128::itemsInfo[5] = {
	&Nack_ack_power_offset::theInfo,
	&Power_level_HSSICH::theInfo,
	&tpc_step_size::theInfo,
	&BlerTarget::theInfo,
	&HS_SCCH_SetConfiguration::theInfo,
};
const void *Tdd128::itemsPres[5] = {
	1,
	1,
	1,
	1,
	1,
};
const Tdd128::Info Tdd128::theInfo = {
	Tdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 0, 0
};

const void *Tdd::choicesInfo[2] = {
	&Tdd384::theInfo,
	&Tdd128::theInfo,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *HSSCCHInfor6::itemsInfo[1] = {
	&ModeSpecificInfo::theInfo,
};
const void *HSSCCHInfor6::itemsPres[1] = {
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

const void *Tdd384::itemsInfo[1] = {
	&DLHSPDSCHTSConfiguration::theInfo,
};
const void *Tdd384::itemsPres[1] = {
	0,
};
const Tdd384::Info Tdd384::theInfo = {
	Tdd384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *Tdd128::itemsInfo[1] = {
	&HSPDSCHMidambleConfigurationTDD128::theInfo,
};
const void *Tdd128::itemsPres[1] = {
	0,
};
const Tdd128::Info Tdd128::theInfo = {
	Tdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *Tdd::choicesInfo[2] = {
	&Tdd384::theInfo,
	&Tdd128::theInfo,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};


const void *ModeSpecificInfo::choicesInfo[2] = {
	&Tdd::theInfo,
	&Fdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLHSPDSCHInformationr6::itemsInfo[3] = {
	&HSSCCHInfor6::theInfo,
	&MeasurementFeedbackInfo::theInfo,
	&ModeSpecificInfo::theInfo,
};
const void *DLHSPDSCHInformationr6::itemsPres[3] = {
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



const void *Tdd128::itemsInfo[1] = {
	&OutofSyncWindow::theInfo,
};
const void *Tdd128::itemsPres[1] = {
	0,
};
const Tdd128::Info Tdd128::theInfo = {
	Tdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *Tdd::choicesInfo[3] = {
	&Tdd384::theInfo,
	&Tdd768::theInfo,
	&Tdd128::theInfo,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};


const void *ModeSpecificInfo::choicesInfo[2] = {
	&Tdd::theInfo,
	&Fdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLHSPDSCHInformationr8ext::itemsInfo[1] = {
	&ModeSpecificInfo::theInfo,
};
const void *DLHSPDSCHInformationr8ext::itemsPres[1] = {
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





const void *Tdd128::itemsInfo[1] = {
	&hS_SCCH_tpc_step_size::theInfo,
};
const void *Tdd128::itemsPres[1] = {
	0,
};
const Tdd128::Info Tdd128::theInfo = {
	Tdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *Tdd::choicesInfo[3] = {
	&Tdd384::theInfo,
	&Tdd768::theInfo,
	&Tdd128::theInfo,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *HSSCCHInfor8ext::itemsInfo[1] = {
	&ModeSpecificInfo::theInfo,
};
const void *HSSCCHInfor8ext::itemsPres[1] = {
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
const void *DLHSPDSCHInformationr8ext2::itemsPres[1] = {
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
const void *PDSCHSHODCHInfo::itemsPres[2] = {
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
const void *DSCHMapping::itemsPres[4] = {
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
const void *PDSCHCodeInfo::itemsPres[3] = {
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
const void *ReplacedPDSCHCodeInfo::itemsPres[4] = {
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


const void *SignallingMethod::choicesInfo[4] = {
	&CodeRange::theInfo,
	&DSCHMappingList::theInfo,
	&PDSCHCodeInfoList::theInfo,
	&ReplacedPDSCHCodeInfoList::theInfo,
};
const SignallingMethod::Info SignallingMethod::theInfo = {
	SignallingMethod::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	3
};

const void *PDSCHCodeMapping::itemsInfo[2] = {
	&SecondaryScramblingCode::theInfo,
	&SignallingMethod::theInfo,
};
const void *PDSCHCodeMapping::itemsPres[2] = {
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

const void *Fdd::itemsInfo[3] = {
	&PrimaryCPICHInfo::theInfo,
	&PDSCHSHODCHInfo::theInfo,
	&PDSCHCodeMapping::theInfo,
};
const void *Fdd::itemsPres[3] = {
	1,
	0,
	0,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};


const void *Fdd::itemsInfo[1] = {
	&Tx_DiversityIndicator::theInfo,
};
const void *Fdd::itemsPres[1] = {
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *SyncCase1::itemsInfo[1] = {
	&TimeslotNumber::theInfo,
};
const void *SyncCase1::itemsPres[1] = {
	1,
};
const SyncCase1::Info SyncCase1::theInfo = {
	SyncCase1::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};


const void *SyncCase2::itemsInfo[1] = {
	&TimeslotSync2::theInfo,
};
const void *SyncCase2::itemsPres[1] = {
	1,
};
const SyncCase2::Info SyncCase2::theInfo = {
	SyncCase2::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *SyncCase::choicesInfo[2] = {
	&SyncCase1::theInfo,
	&SyncCase2::theInfo,
};
const SyncCase::Info SyncCase::theInfo = {
	SyncCase::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};


const void *Tdd::itemsInfo[3] = {
	&SyncCase::theInfo,
	&CellParametersID::theInfo,
	&Sctd_Indicator::theInfo,
};
const void *Tdd::itemsPres[3] = {
	0,
	0,
	1,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *PrimaryCCPCHInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const PrimaryCCPCHInfo::Info PrimaryCCPCHInfo::theInfo = {
	PrimaryCCPCHInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&PrimaryCCPCHInfo::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};









const void *SF256AndCodeNumber::choicesInfo[7] = {
	&Sf4::theInfo,
	&Sf8::theInfo,
	&Sf16::theInfo,
	&Sf32::theInfo,
	&Sf64::theInfo,
	&Sf128::theInfo,
	&Sf256::theInfo,
};
const SF256AndCodeNumber::Info SF256AndCodeNumber::theInfo = {
	SF256AndCodeNumber::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	6
};




const void *Fdd::itemsInfo[9] = {
	&PCPICHUsageForChannelEst::theInfo,
	&SecondaryCPICHInfo::theInfo,
	&SecondaryScramblingCode::theInfo,
	&Sttd_Indicator::theInfo,
	&SF256AndCodeNumber::theInfo,
	&PilotSymbolExistence::theInfo,
	&Tfci_Existence::theInfo,
	&PositionFixedOrFlexible::theInfo,
	&TimingOffset::theInfo,
};
const void *Fdd::itemsPres[9] = {
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
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	9, 3, 0
};



const void *Tdd::itemsInfo[3] = {
	&CommonTimeslotInfoSCCPCH::theInfo,
	&IndividualTimeslotInfo::theInfo,
	&SCCPCHChannelisationCodeList::theInfo,
};
const void *Tdd::itemsPres[3] = {
	1,
	1,
	1,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *SecondaryCCPCHInfo::itemsInfo[1] = {
	&ModeSpecificInfo::theInfo,
};
const void *SecondaryCCPCHInfo::itemsPres[1] = {
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
	&Ctch_Indicator::theInfo,
};
const void *FACHPCHInformation::itemsPres[3] = {
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
const void *PredefinedConfigIdentityAndValueTag::itemsPres[2] = {
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
const void *SIBOccurrenceIdentityAndValueTag::itemsPres[2] = {
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
	&SysInfoType7::theInfo,
	&CellValueTag::theInfo,
	&Dummy2::theInfo,
	&Dummy3::theInfo,
	&CellValueTag::theInfo,
	&CellValueTag::theInfo,
	&CellValueTag::theInfo,
	&CellValueTag::theInfo,
	&CellValueTag::theInfo,
	&CellValueTag::theInfo,
	&CellValueTag::theInfo,
	&SysInfoType14::theInfo,
	&CellValueTag::theInfo,
	&PredefinedConfigIdentityAndValueTag::theInfo,
	&SysInfoType17::theInfo,
	&CellValueTag::theInfo,
	&SIBOccurrenceIdentityAndValueTag::theInfo,
	&SIBOccurrenceIdentityAndValueTag::theInfo,
	&CellValueTag::theInfo,
	&CellValueTag::theInfo,
	&CellValueTag::theInfo,
	&CellValueTag::theInfo,
	&Spare4::theInfo,
	&Spare3::theInfo,
	&Spare2::theInfo,
	&Spare1::theInfo,
};
const SIBTypeAndTag::Info SIBTypeAndTag::theInfo = {
	SIBTypeAndTag::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	31
};













const void *Sib_Pos::choicesInfo[11] = {
	&Rep4::theInfo,
	&Rep8::theInfo,
	&Rep16::theInfo,
	&Rep32::theInfo,
	&Rep64::theInfo,
	&Rep128::theInfo,
	&Rep256::theInfo,
	&Rep512::theInfo,
	&Rep1024::theInfo,
	&Rep2048::theInfo,
	&Rep4096::theInfo,
};
const Sib_Pos::Info Sib_Pos::theInfo = {
	Sib_Pos::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	10
};



const void *Scheduling::itemsInfo[3] = {
	&SegCount::theInfo,
	&Sib_Pos::theInfo,
	&SibOFFList::theInfo,
};
const void *Scheduling::itemsPres[3] = {
	0,
	1,
	0,
};
const Scheduling::Info Scheduling::theInfo = {
	Scheduling::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *SchedulingInformation::itemsInfo[1] = {
	&Scheduling::theInfo,
};
const void *SchedulingInformation::itemsPres[1] = {
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
const void *SchedulingInformationSIB::itemsPres[2] = {
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


const void *Fdd::itemsInfo[2] = {
	&FACHPCHInformationList::theInfo,
	&SIBReferenceListFACH::theInfo,
};
const void *Fdd::itemsPres[2] = {
	1,
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *Tdd::itemsInfo[1] = {
	&FACHPCHInformationList::theInfo,
};
const void *Tdd::itemsPres[1] = {
	1,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *SCCPCHInfoForFACH::itemsInfo[3] = {
	&SecondaryCCPCHInfo::theInfo,
	&TFCS::theInfo,
	&ModeSpecificInfo::theInfo,
};
const void *SCCPCHInfoForFACH::itemsPres[3] = {
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
	&ModeSpecificInfo::theInfo,
	&DLDPCHInfoPerRL::theInfo,
	&SCCPCHInfoForFACH::theInfo,
};
const void *DLInformationPerRL::itemsPres[3] = {
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

const void *Fdd::itemsInfo[3] = {
	&PrimaryCPICHInfo::theInfo,
	&PDSCHSHODCHInfo::theInfo,
	&PDSCHCodeMapping::theInfo,
};
const void *Fdd::itemsPres[3] = {
	1,
	0,
	0,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};


const void *Fdd::itemsInfo[1] = {
	&Tx_DiversityIndicator::theInfo,
};
const void *Fdd::itemsPres[1] = {
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *SyncCase1::itemsInfo[1] = {
	&TimeslotNumber::theInfo,
};
const void *SyncCase1::itemsPres[1] = {
	1,
};
const SyncCase1::Info SyncCase1::theInfo = {
	SyncCase1::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *SyncCase2::itemsInfo[1] = {
	&TimeslotSync2::theInfo,
};
const void *SyncCase2::itemsPres[1] = {
	1,
};
const SyncCase2::Info SyncCase2::theInfo = {
	SyncCase2::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *SyncCase::choicesInfo[2] = {
	&SyncCase1::theInfo,
	&SyncCase2::theInfo,
};
const SyncCase::Info SyncCase::theInfo = {
	SyncCase::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Tdd384_tdd768::itemsInfo[1] = {
	&SyncCase::theInfo,
};
const void *Tdd384_tdd768::itemsPres[1] = {
	0,
};
const Tdd384_tdd768::Info Tdd384_tdd768::theInfo = {
	Tdd384_tdd768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};


const void *Tdd128::itemsInfo[1] = {
	&Tstd_Indicator::theInfo,
};
const void *Tdd128::itemsPres[1] = {
	1,
};
const Tdd128::Info Tdd128::theInfo = {
	Tdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *TddOption::choicesInfo[2] = {
	&Tdd384_tdd768::theInfo,
	&Tdd128::theInfo,
};
const TddOption::Info TddOption::theInfo = {
	TddOption::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};


const void *Tdd::itemsInfo[3] = {
	&TddOption::theInfo,
	&CellParametersID::theInfo,
	&Sctd_Indicator::theInfo,
};
const void *Tdd::itemsPres[3] = {
	1,
	0,
	1,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};

const void *PrimaryCCPCHInfor4::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const PrimaryCCPCHInfor4::Info PrimaryCCPCHInfor4::theInfo = {
	PrimaryCCPCHInfor4::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&PrimaryCCPCHInfor4::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};




const void *Fdd::itemsInfo[7] = {
	&SecondaryScramblingCode::theInfo,
	&Sttd_Indicator::theInfo,
	&SF256AndCodeNumber::theInfo,
	&PilotSymbolExistence::theInfo,
	&Tfci_Existence::theInfo,
	&PositionFixedOrFlexible::theInfo,
	&TimingOffset::theInfo,
};
const void *Fdd::itemsPres[7] = {
	0,
	1,
	1,
	1,
	1,
	1,
	0,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	7, 2, 0
};

const void *Tdd384::itemsInfo[1] = {
	&IndividualTimeslotInfo::theInfo,
};
const void *Tdd384::itemsPres[1] = {
	1,
};
const Tdd384::Info Tdd384::theInfo = {
	Tdd384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *Tdd128::itemsInfo[1] = {
	&IndividualTimeslotInfoLCRr4::theInfo,
};
const void *Tdd128::itemsPres[1] = {
	1,
};
const Tdd128::Info Tdd128::theInfo = {
	Tdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *TddOption::choicesInfo[2] = {
	&Tdd384::theInfo,
	&Tdd128::theInfo,
};
const TddOption::Info TddOption::theInfo = {
	TddOption::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Tdd::itemsInfo[3] = {
	&CommonTimeslotInfoSCCPCH::theInfo,
	&TddOption::theInfo,
	&SCCPCHChannelisationCodeList::theInfo,
};
const void *Tdd::itemsPres[3] = {
	1,
	1,
	1,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *SecondaryCCPCHInfor4::itemsInfo[1] = {
	&ModeSpecificInfo::theInfo,
};
const void *SecondaryCCPCHInfor4::itemsPres[1] = {
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

const void *Fdd::itemsInfo[1] = {
	&SIBReferenceListFACH::theInfo,
};
const void *Fdd::itemsPres[1] = {
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};


const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
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
	&ModeSpecificInfo::theInfo,
};
const void *SCCPCHInfoForFACHr4::itemsPres[4] = {
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
	&ModeSpecificInfo::theInfo,
	&DLDPCHInfoPerRLr4::theInfo,
	&SCCPCHInfoForFACHr4::theInfo,
	&CellIdentity::theInfo,
};
const void *DLInformationPerRLr4::itemsPres[4] = {
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


const void *Fdd::itemsInfo[4] = {
	&PrimaryCPICHInfo::theInfo,
	&PDSCHSHODCHInfo::theInfo,
	&PDSCHCodeMapping::theInfo,
	&ServingHSDSCH_RL_indicator::theInfo,
};
const void *Fdd::itemsPres[4] = {
	1,
	0,
	0,
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&PrimaryCCPCHInfor4::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLInformationPerRLr5::itemsInfo[4] = {
	&ModeSpecificInfo::theInfo,
	&DLDPCHInfoPerRLr5::theInfo,
	&SCCPCHInfoForFACHr4::theInfo,
	&CellIdentity::theInfo,
};
const void *DLInformationPerRLr5::itemsPres[4] = {
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

const void *Fdd::itemsInfo[3] = {
	&PrimaryCPICHInfo::theInfo,
	&PDSCHSHODCHInfo::theInfo,
	&PDSCHCodeMapping::theInfo,
};
const void *Fdd::itemsPres[3] = {
	1,
	0,
	0,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&PrimaryCCPCHInfor4::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLInformationPerRLr5bis::itemsInfo[4] = {
	&ModeSpecificInfo::theInfo,
	&DLDPCHInfoPerRLr5::theInfo,
	&SCCPCHInfoForFACHr4::theInfo,
	&CellIdentity::theInfo,
};
const void *DLInformationPerRLr5bis::itemsPres[4] = {
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



const void *Fdd::itemsInfo[3] = {
	&PrimaryCPICHInfo::theInfo,
	&ServingHSDSCH_RL_indicator::theInfo,
	&ServingEDCH_RL_indicator::theInfo,
};
const void *Fdd::itemsPres[3] = {
	1,
	1,
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&PrimaryCCPCHInfor4::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Dl_dpchInfo::choicesInfo[2] = {
	&DLDPCHInfoPerRLr6::theInfo,
	&DLFDPCHInfoPerRLr6::theInfo,
};
const Dl_dpchInfo::Info Dl_dpchInfo::theInfo = {
	Dl_dpchInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};


const void *E_HICH_Info::choicesInfo[2] = {
	&EHICHInformation::theInfo,
	&ReleaseIndicator::theInfo,
};
const E_HICH_Info::Info E_HICH_Info::theInfo = {
	E_HICH_Info::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};


const void *E_RGCH_Info::choicesInfo[2] = {
	&ERGCHInformation::theInfo,
	&ReleaseIndicator::theInfo,
};
const E_RGCH_Info::Info E_RGCH_Info::theInfo = {
	E_RGCH_Info::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLInformationPerRLr6::itemsInfo[6] = {
	&ModeSpecificInfo::theInfo,
	&Dl_dpchInfo::theInfo,
	&EAGCHInformation::theInfo,
	&E_HICH_Info::theInfo,
	&E_RGCH_Info::theInfo,
	&CellIdentity::theInfo,
};
const void *DLInformationPerRLr6::itemsPres[6] = {
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
const void *DLInformationPerRLv6b0ext::itemsPres[1] = {
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



const void *Fdd::itemsInfo[3] = {
	&PrimaryCPICHInfo::theInfo,
	&ServingHSDSCH_RL_indicator::theInfo,
	&ServingEDCH_RL_indicator::theInfo,
};
const void *Fdd::itemsPres[3] = {
	1,
	1,
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&PrimaryCCPCHInfor4::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Dl_dpchInfo::choicesInfo[2] = {
	&DLDPCHInfoPerRLr7::theInfo,
	&DLFDPCHInfoPerRLr7::theInfo,
};
const Dl_dpchInfo::Info Dl_dpchInfo::theInfo = {
	Dl_dpchInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Fdd::itemsInfo[1] = {
	&EAGCHChannelisationCode::theInfo,
};
const void *Fdd::itemsPres[1] = {
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};







const void *UeSpecificMidamble::itemsInfo[1] = {
	&MidambleShiftLong::theInfo,
};
const void *UeSpecificMidamble::itemsPres[1] = {
	1,
};
const UeSpecificMidamble::Info UeSpecificMidamble::theInfo = {
	UeSpecificMidamble::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MidambleAllocationMode::choicesInfo[3] = {
	&DefaultMidamble::theInfo,
	&CommonMidamble::theInfo,
	&UeSpecificMidamble::theInfo,
};
const MidambleAllocationMode::Info MidambleAllocationMode::theInfo = {
	MidambleAllocationMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *Type1::itemsInfo[2] = {
	&MidambleConfigurationBurstType1::theInfo,
	&MidambleAllocationMode::theInfo,
};
const void *Type1::itemsPres[2] = {
	1,
	1,
};
const Type1::Info Type1::theInfo = {
	Type1::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};



const void *UeSpecificMidamble::itemsInfo[1] = {
	&MidambleShiftShort::theInfo,
};
const void *UeSpecificMidamble::itemsPres[1] = {
	1,
};
const UeSpecificMidamble::Info UeSpecificMidamble::theInfo = {
	UeSpecificMidamble::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MidambleAllocationMode::choicesInfo[3] = {
	&DefaultMidamble::theInfo,
	&CommonMidamble::theInfo,
	&UeSpecificMidamble::theInfo,
};
const MidambleAllocationMode::Info MidambleAllocationMode::theInfo = {
	MidambleAllocationMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *Type2::itemsInfo[2] = {
	&MidambleConfigurationBurstType2::theInfo,
	&MidambleAllocationMode::theInfo,
};
const void *Type2::itemsPres[2] = {
	1,
	1,
};
const Type2::Info Type2::theInfo = {
	Type2::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *BurstType::choicesInfo[2] = {
	&Type1::theInfo,
	&Type2::theInfo,
};
const BurstType::Info BurstType::theInfo = {
	BurstType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *MidambleShiftAndBurstTypeEDCH::itemsInfo[1] = {
	&BurstType::theInfo,
};
const void *MidambleShiftAndBurstTypeEDCH::itemsPres[1] = {
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
	&TS_number::theInfo,
	&DLTSChannelisationCode::theInfo,
	&MidambleShiftAndBurstTypeEDCH::theInfo,
};
const void *EAGCHIndividual::itemsPres[3] = {
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


const void *Tdd384::itemsInfo[4] = {
	&Long_Term_Grant_Indicator::theInfo,
	&Length_of_TTRI_field::theInfo,
	&EAGCHSetConfig::theInfo,
	&BlerTarget::theInfo,
};
const void *Tdd384::itemsPres[4] = {
	0,
	1,
	1,
	1,
};
const Tdd384::Info Tdd384::theInfo = {
	Tdd384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 1, 0
};




const void *EAGCHIndividualVHCR::itemsInfo[3] = {
	&TS_number::theInfo,
	&DLTSChannelisationCodeVHCR::theInfo,
	&MidambleShiftAndBurstTypeEDCH::theInfo,
};
const void *EAGCHIndividualVHCR::itemsPres[3] = {
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


const void *Tdd768::itemsInfo[4] = {
	&Long_Term_Grant_Indicator::theInfo,
	&Length_of_TTRI_field::theInfo,
	&EAGCHSetConfigVHCR::theInfo,
	&BlerTarget::theInfo,
};
const void *Tdd768::itemsPres[4] = {
	0,
	1,
	1,
	1,
};
const Tdd768::Info Tdd768::theInfo = {
	Tdd768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 1, 0
};


const void *Tdd128::itemsInfo[4] = {
	&Rdi_Indicator::theInfo,
	&TPCStepSizeTDD::theInfo,
	&EAGCHSetConfigLCR::theInfo,
	&BlerTarget::theInfo,
};
const void *Tdd128::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const Tdd128::Info Tdd128::theInfo = {
	Tdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 0, 0
};

const void *Tdd::choicesInfo[3] = {
	&Tdd384::theInfo,
	&Tdd768::theInfo,
	&Tdd128::theInfo,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *ModeSpecific::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecific::Info ModeSpecific::theInfo = {
	ModeSpecific::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *EAGCHInformationr7::itemsInfo[1] = {
	&ModeSpecific::theInfo,
};
const void *EAGCHInformationr7::itemsPres[1] = {
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


const void *E_HICH_Info::choicesInfo[2] = {
	&EHICHInformation::theInfo,
	&ReleaseIndicator::theInfo,
};
const E_HICH_Info::Info E_HICH_Info::theInfo = {
	E_HICH_Info::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};


const void *E_RGCH_Info::choicesInfo[2] = {
	&ERGCHInformation::theInfo,
	&ReleaseIndicator::theInfo,
};
const E_RGCH_Info::Info E_RGCH_Info::theInfo = {
	E_RGCH_Info::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Fdd::itemsInfo[2] = {
	&E_HICH_Info::theInfo,
	&E_RGCH_Info::theInfo,
};
const void *Fdd::itemsPres[2] = {
	0,
	0,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};



const void *ModeSpecificInfo::choicesInfo[2] = {
	&DLTSChannelisationCode::theInfo,
	&DLTSChannelisationCodeVHCR::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};



const void *EHICHInformationTDD384768::itemsInfo[5] = {
	&N_E_HICH::theInfo,
	&TS_Number::theInfo,
	&ModeSpecificInfo::theInfo,
	&burst_Type::theInfo,
	&midamble_Allocation_Mode::theInfo,
};
const void *EHICHInformationTDD384768::itemsPres[5] = {
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

const void *Tdd384_tdd768::itemsInfo[1] = {
	&EHICHInformationTDD384768::theInfo,
};
const void *Tdd384_tdd768::itemsPres[1] = {
	0,
};
const Tdd384_tdd768::Info Tdd384_tdd768::theInfo = {
	Tdd384_tdd768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *Tdd128::itemsInfo[1] = {
	&EHICHInformationTDD128::theInfo,
};
const void *Tdd128::itemsPres[1] = {
	0,
};
const Tdd128::Info Tdd128::theInfo = {
	Tdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *Tdd::choicesInfo[2] = {
	&Tdd384_tdd768::theInfo,
	&Tdd128::theInfo,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ModeSpecificInfo2::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo2::Info ModeSpecificInfo2::theInfo = {
	ModeSpecificInfo2::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLInformationPerRLr7::itemsInfo[5] = {
	&ModeSpecificInfo::theInfo,
	&Dl_dpchInfo::theInfo,
	&EAGCHInformationr7::theInfo,
	&ModeSpecificInfo2::theInfo,
	&CellIdentity::theInfo,
};
const void *DLInformationPerRLr7::itemsPres[5] = {
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



const void *Fdd::itemsInfo[3] = {
	&PrimaryCPICHInfo::theInfo,
	&ServingHSDSCH_RL_indicator::theInfo,
	&ServingEDCH_RL_indicator::theInfo,
};
const void *Fdd::itemsPres[3] = {
	1,
	1,
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&PrimaryCCPCHInfor4::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Dl_dpchInfo::choicesInfo[2] = {
	&DLDPCHInfoPerRLr7::theInfo,
	&DLFDPCHInfoPerRLr7::theInfo,
};
const Dl_dpchInfo::Info Dl_dpchInfo::theInfo = {
	Dl_dpchInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Fdd::itemsInfo[1] = {
	&EAGCHChannelisationCode::theInfo,
};
const void *Fdd::itemsPres[1] = {
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};



const void *Tdd384::itemsInfo[4] = {
	&Long_Term_Grant_Indicator::theInfo,
	&Length_of_TTRI_field::theInfo,
	&EAGCHSetConfig::theInfo,
	&BlerTarget::theInfo,
};
const void *Tdd384::itemsPres[4] = {
	0,
	1,
	1,
	1,
};
const Tdd384::Info Tdd384::theInfo = {
	Tdd384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 1, 0
};



const void *Tdd768::itemsInfo[4] = {
	&Long_Term_Grant_Indicator::theInfo,
	&Length_of_TTRI_field::theInfo,
	&EAGCHSetConfigVHCR::theInfo,
	&BlerTarget::theInfo,
};
const void *Tdd768::itemsPres[4] = {
	0,
	1,
	1,
	1,
};
const Tdd768::Info Tdd768::theInfo = {
	Tdd768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 1, 0
};


const void *Tdd128::itemsInfo[5] = {
	&Rdi_Indicator::theInfo,
	&TPCStepSizeTDD::theInfo,
	&EAGCHSetConfigLCR::theInfo,
	&BlerTarget::theInfo,
	&EAGCHInactivityMonitorThresholdTDD128::theInfo,
};
const void *Tdd128::itemsPres[5] = {
	1,
	1,
	1,
	1,
	0,
};
const Tdd128::Info Tdd128::theInfo = {
	Tdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 1, 0
};

const void *Tdd::choicesInfo[3] = {
	&Tdd384::theInfo,
	&Tdd768::theInfo,
	&Tdd128::theInfo,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *ModeSpecific::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecific::Info ModeSpecific::theInfo = {
	ModeSpecific::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *EAGCHInformationr8::itemsInfo[1] = {
	&ModeSpecific::theInfo,
};
const void *EAGCHInformationr8::itemsPres[1] = {
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


const void *E_HICH_Info::choicesInfo[2] = {
	&EHICHInformation::theInfo,
	&ReleaseIndicator::theInfo,
};
const E_HICH_Info::Info E_HICH_Info::theInfo = {
	E_HICH_Info::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};


const void *E_RGCH_Info::choicesInfo[2] = {
	&ERGCHInformation::theInfo,
	&ReleaseIndicator::theInfo,
};
const E_RGCH_Info::Info E_RGCH_Info::theInfo = {
	E_RGCH_Info::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Fdd::itemsInfo[2] = {
	&E_HICH_Info::theInfo,
	&E_RGCH_Info::theInfo,
};
const void *Fdd::itemsPres[2] = {
	0,
	0,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *Tdd384_tdd768::itemsInfo[1] = {
	&EHICHInformationTDD384768::theInfo,
};
const void *Tdd384_tdd768::itemsPres[1] = {
	0,
};
const Tdd384_tdd768::Info Tdd384_tdd768::theInfo = {
	Tdd384_tdd768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *Tdd128::itemsInfo[1] = {
	&EHICHInformationTDD128::theInfo,
};
const void *Tdd128::itemsPres[1] = {
	0,
};
const Tdd128::Info Tdd128::theInfo = {
	Tdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *Tdd::choicesInfo[2] = {
	&Tdd384_tdd768::theInfo,
	&Tdd128::theInfo,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ModeSpecificInfo2::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo2::Info ModeSpecificInfo2::theInfo = {
	ModeSpecificInfo2::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DLInformationPerRLr8::itemsInfo[5] = {
	&ModeSpecificInfo::theInfo,
	&Dl_dpchInfo::theInfo,
	&EAGCHInformationr8::theInfo,
	&ModeSpecificInfo2::theInfo,
	&CellIdentity::theInfo,
};
const void *DLInformationPerRLr8::itemsPres[5] = {
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
const void *DLInformationPerRLPostFDD::itemsPres[2] = {
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


const void *SyncCase1::itemsInfo[1] = {
	&TimeslotNumber::theInfo,
};
const void *SyncCase1::itemsPres[1] = {
	1,
};
const SyncCase1::Info SyncCase1::theInfo = {
	SyncCase1::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *SyncCase2::itemsInfo[1] = {
	&TimeslotSync2::theInfo,
};
const void *SyncCase2::itemsPres[1] = {
	1,
};
const SyncCase2::Info SyncCase2::theInfo = {
	SyncCase2::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *SyncCase::choicesInfo[2] = {
	&SyncCase1::theInfo,
	&SyncCase2::theInfo,
};
const SyncCase::Info SyncCase::theInfo = {
	SyncCase::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};


const void *PrimaryCCPCHInfoPost::itemsInfo[3] = {
	&SyncCase::theInfo,
	&CellParametersID::theInfo,
	&Sctd_Indicator::theInfo,
};
const void *PrimaryCCPCHInfoPost::itemsPres[3] = {
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
const void *DLInformationPerRLPostTDD::itemsPres[2] = {
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
	&Tstd_Indicator::theInfo,
	&CellParametersID::theInfo,
	&Sctd_Indicator::theInfo,
};
const void *PrimaryCCPCHInfoPostTDDLCRr4::itemsPres[3] = {
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
const void *DLInformationPerRLPostTDDLCRr4::itemsPres[2] = {
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
const void *DLPDSCHInformation::itemsPres[2] = {
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




const void *NewConfiguration::itemsInfo[8] = {
	&HRNTI::theInfo,
	&dl_64QAM_Configured::theInfo,
	&HSDSCHTBSizeTable::theInfo,
	&PrimaryCPICHInfo::theInfo,
	&SecondaryScramblingCode::theInfo,
	&HS_SCCHChannelisationCodeInfo::theInfo,
	&MeasurementPowerOffset::theInfo,
	&UARFCN::theInfo,
};
const void *NewConfiguration::itemsPres[8] = {
	1,
	0,
	0,
	1,
	0,
	1,
	1,
	1,
};
const NewConfiguration::Info NewConfiguration::theInfo = {
	NewConfiguration::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	8, 3, 0
};

const void *DLSecondaryCellInfoFDD::choicesInfo[2] = {
	&Continue::theInfo,
	&NewConfiguration::theInfo,
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
	&differentTxModeFromServingHS_DSCHCell::theInfo,
};
const void *DLSecondaryCellInfoFDDv890ext::itemsPres[1] = {
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





const void *NewConfiguration::itemsInfo[9] = {
	&HRNTI::theInfo,
	&dl_64QAM_Configured::theInfo,
	&HSDSCHTBSizeTable::theInfo,
	&PrimaryCPICHInfo::theInfo,
	&SecondaryScramblingCode::theInfo,
	&HS_SCCHChannelisationCodeInfo::theInfo,
	&MeasurementPowerOffset::theInfo,
	&UARFCN::theInfo,
	&differentTxModeFromServingHS_DSCHCell::theInfo,
};
const void *NewConfiguration::itemsPres[9] = {
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
const NewConfiguration::Info NewConfiguration::theInfo = {
	NewConfiguration::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	9, 4, 0
};

const void *ConfigurationInfo::choicesInfo[2] = {
	&Continue::theInfo,
	&NewConfiguration::theInfo,
};
const ConfigurationInfo::Info ConfigurationInfo::theInfo = {
	ConfigurationInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};





const void *DiversityPattern::itemsInfo[2] = {
	&ChannelisationCode256::theInfo,
	&SCPICHPowerOffsetMIMO::theInfo,
};
const void *DiversityPattern::itemsPres[2] = {
	1,
	0,
};
const DiversityPattern::Info DiversityPattern::theInfo = {
	DiversityPattern::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *SecondCPICH_Pattern::choicesInfo[2] = {
	&NormalPattern::theInfo,
	&DiversityPattern::theInfo,
};
const SecondCPICH_Pattern::Info SecondCPICH_Pattern::theInfo = {
	SecondCPICH_Pattern::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *MIMOPilotConfigurationr9::itemsInfo[1] = {
	&SecondCPICH_Pattern::theInfo,
};
const void *MIMOPilotConfigurationr9::itemsPres[1] = {
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

const void *NewConfiguration::itemsInfo[2] = {
	&MIMONMRatio::theInfo,
	&MIMOPilotConfigurationr9::theInfo,
};
const void *NewConfiguration::itemsPres[2] = {
	0,
	0,
};
const NewConfiguration::Info NewConfiguration::theInfo = {
	NewConfiguration::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *SecondaryCellMIMOparametersFDD::choicesInfo[2] = {
	&Continue::theInfo,
	&NewConfiguration::theInfo,
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
	&ConfigurationInfo::theInfo,
	&SecondaryCellMIMOparametersFDD::theInfo,
};
const void *DLSecondaryCellInfoFDDr9::itemsPres[2] = {
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
const void *DLTPCPowerOffsetPerRL::itemsPres[1] = {
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
	&FirstChannelisationCode::theInfo,
	&LastChannelisationCode::theInfo,
};
const void *DLChannelCodesMBSFNIMB384::itemsPres[2] = {
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





const void *ServingGrant::itemsInfo[2] = {
	&Value::theInfo,
	&primary_Secondary_GrantSelector::theInfo,
};
const void *ServingGrant::itemsPres[2] = {
	1,
	1,
};
const ServingGrant::Info ServingGrant::theInfo = {
	ServingGrant::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *EDPDCHSchedulingTransmConfiguration::itemsInfo[2] = {
	&Ms2_SchedTransmGrantHARQAlloc::theInfo,
	&ServingGrant::theInfo,
};
const void *EDPDCHSchedulingTransmConfiguration::itemsPres[2] = {
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
	&Beta_Ed_Gain_E_AGCH_Table_Selection::theInfo,
};
const void *UL16QAMSettings::itemsPres[1] = {
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

const void *Fdd::itemsInfo[4] = {
	&EDPCCHInfor7::theInfo,
	&EDPDCHInfor8::theInfo,
	&EDPDCHSchedulingTransmConfiguration::theInfo,
	&UL16QAMSettings::theInfo,
};
const void *Fdd::itemsPres[4] = {
	0,
	0,
	0,
	0,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 4, 0
};











const void *Tdd384::choicesInfo[2] = {
	&SF16::theInfo,
	&SF8::theInfo,
};
const Tdd384::Info Tdd384::theInfo = {
	Tdd384::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};





const void *Tdd768::choicesInfo[2] = {
	&SF32::theInfo,
	&SF816::theInfo,
};
const Tdd768::Info Tdd768::theInfo = {
	Tdd768::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Tdd384::theInfo,
	&Tdd768::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Tdd384_tdd768::itemsInfo[8] = {
	&E_RUCCH_ConstantValue::theInfo,
	&PersistenceScalingFactor::theInfo,
	&t_RUCCH::theInfo,
	&E_RUCCH_TS_Number::theInfo,
	&e_RUCCH_Midamble::theInfo,
	&t_adv::theInfo,
	&t_SCHED::theInfo,
	&ModeSpecificInfo::theInfo,
};
const void *Tdd384_tdd768::itemsPres[8] = {
	1,
	1,
	0,
	0,
	0,
	0,
	0,
	1,
};
const Tdd384_tdd768::Info Tdd384_tdd768::theInfo = {
	Tdd384_tdd768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	8, 5, 0
};






const void *Tdd128::itemsInfo[9] = {
	&t_RUCCH::theInfo,
	&N_RUCCH::theInfo,
	&t_WAIT::theInfo,
	&t_SI::theInfo,
	&ExtendedEstimationWindow::theInfo,
	&ERUCCHAccessServiceClass::theInfo,
	&PersistenceScalingFactorList::theInfo,
	&SYNCULInfoForERUCCH::theInfo,
	&PRACHInformationLCRList::theInfo,
};
const void *Tdd128::itemsPres[9] = {
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
const Tdd128::Info Tdd128::theInfo = {
	Tdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	9, 9, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Tdd384_tdd768::theInfo,
	&Tdd128::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ERUCCHInfo::itemsInfo[1] = {
	&ModeSpecificInfo::theInfo,
};
const void *ERUCCHInfo::itemsPres[1] = {
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
	&Ts_Number::theInfo,
	&MidambleShiftAndBurstTypeEDCH::theInfo,
};
const void *EPUCHTSSlots::itemsPres[2] = {
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






const void *Tdd348_tdd768::itemsInfo[7] = {
	&NoSlotsForTFCIandTPC::theInfo,
	&E_PUCH_ContantValue::theInfo,
	&E_PUCH_TS_ConfigurationList::theInfo,
	&E_PUCH_CodeHopping::theInfo,
	&E_PUCH_TPC_Step_Size::theInfo,
	&Minimum_Allowed_Code_Rate::theInfo,
	&Maximum_Allowed_Code_Rate::theInfo,
};
const void *Tdd348_tdd768::itemsPres[7] = {
	1,
	1,
	1,
	1,
	1,
	1,
	1,
};
const Tdd348_tdd768::Info Tdd348_tdd768::theInfo = {
	Tdd348_tdd768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	7, 0, 0
};









const void *Tdd128::itemsInfo[11] = {
	&snpl_ReportType::theInfo,
	&PrxBASEdes::theInfo,
	&BeaconPLEst::theInfo,
	&TPCStepSizeTDD::theInfo,
	&PowerControlGAP::theInfo,
	&ULSynchronisationParametersr4::theInfo,
	&E_PUCH_TS_ConfigurationList::theInfo,
	&Minimum_Allowed_Code_Rate::theInfo,
	&Maximum_Allowed_Code_Rate::theInfo,
	&MaximumNumOfRetransSchedInfo::theInfo,
	&retransTimerForSchedInfo::theInfo,
};
const void *Tdd128::itemsPres[11] = {
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
const Tdd128::Info Tdd128::theInfo = {
	Tdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	11, 4, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Tdd348_tdd768::theInfo,
	&Tdd128::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};


const void *EPUCHInfo::itemsInfo[3] = {
	&ETFCSInfo::theInfo,
	&ModeSpecificInfo::theInfo,
	&PowerOffsetForSchedInfo::theInfo,
};
const void *EPUCHInfo::itemsPres[3] = {
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




const void *Tdd384_768::itemsInfo[5] = {
	&TimeslotResourceRelatedInfo::theInfo,
	&PowerResourceRelatedInfo::theInfo,
	&ActivationTime::theInfo,
	&RepetitionPeriodAndLength::theInfo,
	&ULTSChannelisationCode::theInfo,
};
const void *Tdd384_768::itemsPres[5] = {
	1,
	1,
	1,
	0,
	1,
};
const Tdd384_768::Info Tdd384_768::theInfo = {
	Tdd384_768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 1, 0
};








const void *MidambleAllocationMode::choicesInfo[2] = {
	&DefaultMidamble::theInfo,
	&UeSpecificMidamble::theInfo,
};
const MidambleAllocationMode::Info MidambleAllocationMode::theInfo = {
	MidambleAllocationMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};



const void *E_HICH_Info::itemsInfo[5] = {
	&TimeslotNumberLCRr4::theInfo,
	&HSChannelisationCodeLCR::theInfo,
	&MidambleAllocationMode::theInfo,
	&MidambleConfiguration::theInfo,
	&SignatureSequenceGroupIndex::theInfo,
};
const void *E_HICH_Info::itemsPres[5] = {
	1,
	1,
	1,
	1,
	1,
};
const E_HICH_Info::Info E_HICH_Info::theInfo = {
	E_HICH_Info::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 0, 0
};

const void *Tdd128::itemsInfo[9] = {
	&N_E_UCCH::theInfo,
	&N_E_HICH::theInfo,
	&TimeslotResourceRelatedInfo::theInfo,
	&PowerResourceRelatedInfo::theInfo,
	&ActivationTime::theInfo,
	&SfnNum::theInfo,
	&RepetitionPeriodAndLength::theInfo,
	&ULTSChannelisationCode::theInfo,
	&E_HICH_Info::theInfo,
};
const void *Tdd128::itemsPres[9] = {
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
const Tdd128::Info Tdd128::theInfo = {
	Tdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	9, 3, 0
};

const void *NonScheduledTransGrantInfoTDD::choicesInfo[2] = {
	&Tdd384_768::theInfo,
	&Tdd128::theInfo,
};
const NonScheduledTransGrantInfoTDD::Info NonScheduledTransGrantInfoTDD::theInfo = {
	NonScheduledTransGrantInfoTDD::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Tdd::itemsInfo[3] = {
	&ERUCCHInfo::theInfo,
	&EPUCHInfo::theInfo,
	&NonScheduledTransGrantInfoTDD::theInfo,
};
const void *Tdd::itemsPres[3] = {
	0,
	0,
	0,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULEDCHInformationr8::itemsInfo[2] = {
	&mac_es_e_resetIndicator::theInfo,
	&ModeSpecificInfo::theInfo,
};
const void *ULEDCHInformationr8::itemsPres[2] = {
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
const void *DLULHSPAInformationr8::itemsPres[4] = {
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


const void *Fdd::itemsInfo[4] = {
	&EDPCCHInfor7::theInfo,
	&EDPDCHInfor8::theInfo,
	&EDPDCHSchedulingTransmConfiguration::theInfo,
	&UL16QAMSettings::theInfo,
};
const void *Fdd::itemsPres[4] = {
	0,
	0,
	0,
	0,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 4, 0
};



const void *Tdd384_768::itemsInfo[5] = {
	&TimeslotResourceRelatedInfo::theInfo,
	&PowerResourceRelatedInfo::theInfo,
	&ActivationTime::theInfo,
	&RepetitionPeriodAndLength::theInfo,
	&ULTSChannelisationCode::theInfo,
};
const void *Tdd384_768::itemsPres[5] = {
	1,
	1,
	1,
	0,
	1,
};
const Tdd384_768::Info Tdd384_768::theInfo = {
	Tdd384_768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 1, 0
};








const void *MidambleAllocationMode::choicesInfo[2] = {
	&DefaultMidamble::theInfo,
	&UeSpecificMidamble::theInfo,
};
const MidambleAllocationMode::Info MidambleAllocationMode::theInfo = {
	MidambleAllocationMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};



const void *E_HICH_Info::itemsInfo[5] = {
	&TimeslotNumberLCRr4::theInfo,
	&HSChannelisationCodeLCR::theInfo,
	&MidambleAllocationMode::theInfo,
	&MidambleConfiguration::theInfo,
	&SignatureSequenceGroupIndex::theInfo,
};
const void *E_HICH_Info::itemsPres[5] = {
	1,
	1,
	1,
	1,
	1,
};
const E_HICH_Info::Info E_HICH_Info::theInfo = {
	E_HICH_Info::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 0, 0
};


const void *Tdd128::itemsInfo[10] = {
	&N_E_UCCH::theInfo,
	&N_E_HICH::theInfo,
	&TimeslotResourceRelatedInfo::theInfo,
	&PowerResourceRelatedInfo::theInfo,
	&ActivationTime::theInfo,
	&SfnNum::theInfo,
	&RepetitionPeriodAndLength::theInfo,
	&ULTSChannelisationCode::theInfo,
	&E_HICH_Info::theInfo,
	&t_SI_nst::theInfo,
};
const void *Tdd128::itemsPres[10] = {
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
const Tdd128::Info Tdd128::theInfo = {
	Tdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	10, 4, 0
};

const void *NonScheduledTransGrantInfoTDDr9::choicesInfo[2] = {
	&Tdd384_768::theInfo,
	&Tdd128::theInfo,
};
const NonScheduledTransGrantInfoTDDr9::Info NonScheduledTransGrantInfoTDDr9::theInfo = {
	NonScheduledTransGrantInfoTDDr9::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Tdd::itemsInfo[3] = {
	&ERUCCHInfo::theInfo,
	&EPUCHInfo::theInfo,
	&NonScheduledTransGrantInfoTDDr9::theInfo,
};
const void *Tdd::itemsPres[3] = {
	0,
	0,
	0,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULEDCHInformationr9::itemsInfo[2] = {
	&mac_es_e_resetIndicator::theInfo,
	&ModeSpecificInfo::theInfo,
};
const void *ULEDCHInformationr9::itemsPres[2] = {
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
const void *DLULHSPAInformationr9::itemsPres[4] = {
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



const void *Activate::itemsInfo[1] = {
	&TGCFN::theInfo,
};
const void *Activate::itemsPres[1] = {
	1,
};
const Activate::Info Activate::theInfo = {
	Activate::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};


const void *Tgps_Status::choicesInfo[2] = {
	&Activate::theInfo,
	&Deactivate::theInfo,
};
const Tgps_Status::Info Tgps_Status::theInfo = {
	Tgps_Status::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *TGPSequenceShort::itemsInfo[2] = {
	&TGPSI::theInfo,
	&Tgps_Status::theInfo,
};
const void *TGPSequenceShort::itemsPres[2] = {
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
	&Tgp_SequenceShortList::theInfo,
};
const void *DPCHCompressedModeStatusInfo::itemsPres[2] = {
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
	&Ue_drx_GrantMonitoring::theInfo,
};
const void *DRXInfo::itemsPres[4] = {
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
const void *DSCHTransportChannelsInfo::itemsPres[0] = {
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
const void *DTXEDCHTTI10ms::itemsPres[3] = {
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
const void *DTXEDCHTTI2ms::itemsPres[3] = {
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

const void *E_dch_TTI_Length::choicesInfo[2] = {
	&DTXEDCHTTI10ms::theInfo,
	&DTXEDCHTTI2ms::theInfo,
};
const E_dch_TTI_Length::Info E_dch_TTI_Length::theInfo = {
	E_dch_TTI_Length::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};






const void *DTXInfo::itemsInfo[8] = {
	&E_dch_TTI_Length::theInfo,
	&UEDTXCycle2InactivityThreshold::theInfo,
	&Ue_dtx_cycle2DefaultSG::theInfo,
	&UEDTXlongpreamblelength::theInfo,
	&MACInactivityThreshold::theInfo,
	&CQIDTXTimer::theInfo,
	&UEDPCCHBurst::theInfo,
	&UEDPCCHBurst::theInfo,
};
const void *DTXInfo::itemsPres[8] = {
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
const void *DTXDRXInfor7::itemsPres[3] = {
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




const void *ServingGrant::itemsInfo[2] = {
	&Value::theInfo,
	&primary_Secondary_GrantSelector::theInfo,
};
const void *ServingGrant::itemsPres[2] = {
	0,
	1,
};
const ServingGrant::Info ServingGrant::theInfo = {
	ServingGrant::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};



const void *EDPDCHReferenceETFCI::itemsInfo[2] = {
	&Reference_E_TFCI::theInfo,
	&Reference_E_TFCI_PO::theInfo,
};
const void *EDPDCHReferenceETFCI::itemsPres[2] = {
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






const void *E_RGCH_Info::choicesInfo[2] = {
	&ERGCHInformation::theInfo,
	&ReleaseIndicator::theInfo,
};
const E_RGCH_Info::Info E_RGCH_Info::theInfo = {
	E_RGCH_Info::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *EDCHRLInfoNewServingCell::itemsInfo[10] = {
	&PrimaryCPICHInfo::theInfo,
	&EAGCHInformation::theInfo,
	&ServingGrant::theInfo,
	&EDPCCHDPCCHPowerOffset::theInfo,
	&EDPDCHReferenceETFCIList::theInfo,
	&PowerOffsetForSchedInfo::theInfo,
	&ThreeIndexStepThreshold::theInfo,
	&TwoIndexStepThreshold::theInfo,
	&EHICHInformation::theInfo,
	&E_RGCH_Info::theInfo,
};
const void *EDCHRLInfoNewServingCell::itemsPres[10] = {
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


const void *E_HICH_Info::choicesInfo[2] = {
	&EHICHInformation::theInfo,
	&ReleaseIndicator::theInfo,
};
const E_HICH_Info::Info E_HICH_Info::theInfo = {
	E_HICH_Info::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};


const void *E_RGCH_Info::choicesInfo[2] = {
	&ERGCHInformation::theInfo,
	&ReleaseIndicator::theInfo,
};
const E_RGCH_Info::Info E_RGCH_Info::theInfo = {
	E_RGCH_Info::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *EDCHRLInfoOtherCell::itemsInfo[3] = {
	&PrimaryCPICHInfo::theInfo,
	&E_HICH_Info::theInfo,
	&E_RGCH_Info::theInfo,
};
const void *EDCHRLInfoOtherCell::itemsPres[3] = {
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
	&E_DCH_RL_InfoOtherCellList::theInfo,
};
const void *EDCHReconfigurationInfo::itemsPres[2] = {
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



const void *ServingGrant::itemsInfo[2] = {
	&Value::theInfo,
	&primary_Secondary_GrantSelector::theInfo,
};
const void *ServingGrant::itemsPres[2] = {
	0,
	1,
};
const ServingGrant::Info ServingGrant::theInfo = {
	ServingGrant::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};





const void *E_RGCH_Info::choicesInfo[2] = {
	&ERGCHInformation::theInfo,
	&ReleaseIndicator::theInfo,
};
const E_RGCH_Info::Info E_RGCH_Info::theInfo = {
	E_RGCH_Info::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *EDCHRLInfoNewServingCellr7::itemsInfo[10] = {
	&PrimaryCPICHInfo::theInfo,
	&EAGCHInformation::theInfo,
	&ServingGrant::theInfo,
	&EDPCCHDPCCHPowerOffset::theInfo,
	&EDPDCHReferenceETFCIListr7::theInfo,
	&PowerOffsetForSchedInfo::theInfo,
	&ThreeIndexStepThreshold::theInfo,
	&TwoIndexStepThreshold::theInfo,
	&EHICHInformation::theInfo,
	&E_RGCH_Info::theInfo,
};
const void *EDCHRLInfoNewServingCellr7::itemsPres[10] = {
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
	&E_DCH_RL_InfoOtherCellList::theInfo,
};
const void *EDCHReconfigurationInfor7::itemsPres[2] = {
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


const void *E_RGCH_Info::choicesInfo[2] = {
	&ERGCHInformation::theInfo,
	&ReleaseIndicator::theInfo,
};
const E_RGCH_Info::Info E_RGCH_Info::theInfo = {
	E_RGCH_Info::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *EDCHRLInfoNewSecServingCell::itemsInfo[3] = {
	&EAGCHInformation::theInfo,
	&EHICHInformation::theInfo,
	&E_RGCH_Info::theInfo,
};
const void *EDCHRLInfoNewSecServingCell::itemsPres[3] = {
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


const void *E_RGCH_Info::choicesInfo[2] = {
	&ERGCHInformation::theInfo,
	&ReleaseIndicator::theInfo,
};
const E_RGCH_Info::Info E_RGCH_Info::theInfo = {
	E_RGCH_Info::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *EDCHRLInfoOtherCellSecULFreq::itemsInfo[3] = {
	&PrimaryCPICHInfo::theInfo,
	&EHICHInformation::theInfo,
	&E_RGCH_Info::theInfo,
};
const void *EDCHRLInfoOtherCellSecULFreq::itemsPres[3] = {
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
	&E_DCH_RL_InfoOtherCellList_SecULFreq::theInfo,
};
const void *EDCHReconfigurationInfoSecULFrequency::itemsPres[2] = {
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
const void *EDCHRLInfoSameServingCell::itemsPres[2] = {
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



const void *Implicit::itemsInfo[1] = {
	&Ei::theInfo,
};
const void *Implicit::itemsPres[1] = {
	0,
};
const Implicit::Info Implicit::theInfo = {
	Implicit::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};



const void *MidambleAllocationMode::choicesInfo[2] = {
	&DefaultMidamble::theInfo,
	&UeSpecificMidamble::theInfo,
};
const MidambleAllocationMode::Info MidambleAllocationMode::theInfo = {
	MidambleAllocationMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};


const void *Explicit::itemsInfo[4] = {
	&TimeslotNumberLCRr4::theInfo,
	&HSChannelisationCodeLCR::theInfo,
	&MidambleAllocationMode::theInfo,
	&MidambleConfiguration::theInfo,
};
const void *Explicit::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const Explicit::Info Explicit::theInfo = {
	Explicit::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 0, 0
};

const void *Configurationmode::choicesInfo[2] = {
	&Implicit::theInfo,
	&Explicit::theInfo,
};
const Configurationmode::Info Configurationmode::theInfo = {
	Configurationmode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};


const void *EHICHInformationForSPSTDD128::itemsInfo[2] = {
	&Configurationmode::theInfo,
	&SignatureSequenceGroupIndex::theInfo,
};
const void *EHICHInformationForSPSTDD128::itemsPres[2] = {
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
const void *EDCHTxPatternListTDD128::itemsPres[0] = {
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






const void *InitialSPSInfoForEDCH::itemsInfo[7] = {
	&N_E_UCCH::theInfo,
	&ULTSChannelisationCode::theInfo,
	&TimeslotResourceRelatedInfo::theInfo,
	&PowerResourceRelatedInfo::theInfo,
	&ActivationTime::theInfo,
	&SubframeNum::theInfo,
	&InitialTxPatternIndex::theInfo,
};
const void *InitialSPSInfoForEDCH::itemsPres[7] = {
	1,
	1,
	1,
	1,
	1,
	1,
	1,
};
const InitialSPSInfoForEDCH::Info InitialSPSInfoForEDCH::theInfo = {
	InitialSPSInfoForEDCH::create,
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
	&InitialSPSInfoForEDCH::theInfo,
};
const void *EDCHSPSNewOperationTDD128::itemsPres[3] = {
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

const void *E_dch_SPS_Operation::choicesInfo[2] = {
	&Continue::theInfo,
	&EDCHSPSNewOperationTDD128::theInfo,
};
const E_dch_SPS_Operation::Info E_dch_SPS_Operation::theInfo = {
	E_dch_SPS_Operation::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *EDCHSPSInformationTDD128::itemsInfo[1] = {
	&E_dch_SPS_Operation::theInfo,
};
const void *EDCHSPSInformationTDD128::itemsPres[1] = {
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
const void *EDPCCHInfo::itemsPres[2] = {
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
	&ThreeIndexStepThreshold::theInfo,
	&TwoIndexStepThreshold::theInfo,
};
const void *EDPDCHInfo::itemsPres[8] = {
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
	&ThreeIndexStepThreshold::theInfo,
	&TwoIndexStepThreshold::theInfo,
};
const void *EDPDCHInfor7::itemsPres[8] = {
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



const void *Tdd384::itemsInfo[1] = {
	&Ex_ul_TimingAdvance::theInfo,
};
const void *Tdd384::itemsPres[1] = {
	1,
};
const Tdd384::Info Tdd384::theInfo = {
	Tdd384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};


const void *Tdd768::itemsInfo[1] = {
	&Ex_ul_TimingAdvance::theInfo,
};
const void *Tdd768::itemsPres[1] = {
	1,
};
const Tdd768::Info Tdd768::theInfo = {
	Tdd768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Tdd384::theInfo,
	&Tdd768::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *EXTULTimingAdvance::itemsInfo[1] = {
	&ModeSpecificInfo::theInfo,
};
const void *EXTULTimingAdvance::itemsPres[1] = {
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
const void *HSChannelisationCodeSetInfoLCR::itemsPres[2] = {
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
	&HS_SCCHChannelisationCodeInfo::theInfo,
};
const void *HSSCCHSystemInfo::itemsPres[2] = {
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
	&Common_H_RNTI_information::theInfo,
	&HRNTI::theInfo,
};
const void *HSDSCHCommonSystemInformation::itemsPres[7] = {
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
	&Hs_SCCH_SetConfiguration::theInfo,
	&Power_level_HSSICH::theInfo,
	&Nack_ack_power_offset::theInfo,
	&tpc_step_size::theInfo,
	&BlerTarget::theInfo,
	&Power_control_gap::theInfo,
	&Pathloss_compensation_switch::theInfo,
};
const void *HSSCCHSystemInfoTDD128::itemsPres[7] = {
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
	&Common_H_RNTI_information::theInfo,
	&HRNTI::theInfo,
};
const void *HSDSCHCommonSystemInformationTDD128::itemsPres[8] = {
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
	&DrxInterruption_hs_dsch::theInfo,
};
const void *HSDSCHDrxCellfachinfo::itemsPres[4] = {
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
const void *HSDSCHDrxCellfachinfoTDD128::itemsPres[3] = {
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



const void *Fdd::itemsInfo[3] = {
	&ChannelisationCode256::theInfo,
	&PICountPerFrame::theInfo,
	&Sttd_Indicator::theInfo,
};
const void *Fdd::itemsPres[3] = {
	1,
	1,
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};











const void *RepPerLengthOffsetPICH::choicesInfo[9] = {
	&Rpp4_2::theInfo,
	&Rpp8_2::theInfo,
	&Rpp8_4::theInfo,
	&Rpp16_2::theInfo,
	&Rpp16_4::theInfo,
	&Rpp32_2::theInfo,
	&Rpp32_4::theInfo,
	&Rpp64_2::theInfo,
	&Rpp64_4::theInfo,
};
const RepPerLengthOffsetPICH::Info RepPerLengthOffsetPICH::theInfo = {
	RepPerLengthOffsetPICH::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	8
};




const void *Tdd::itemsInfo[7] = {
	&TDDPICHCCode::theInfo,
	&TimeslotNumber::theInfo,
	&MidambleShiftAndBurstType::theInfo,
	&RepPerLengthOffsetPICH::theInfo,
	&PagingIndicatorLength::theInfo,
	&NGAP::theInfo,
	&NPCH::theInfo,
};
const void *Tdd::itemsPres[7] = {
	0,
	0,
	1,
	0,
	0,
	0,
	0,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	7, 6, 0
};

const void *PICHInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
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
	&Hs_pdschChannelisationCode::theInfo,
};
const void *PICHForHSDPASupportedPaging::itemsPres[2] = {
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
	&Pich_ForHSDPASupportedPagingList::theInfo,
	&NumberOfPcchTransmissions::theInfo,
	&TransportBlockSizeList::theInfo,
};
const void *HSDSCHPagingSystemInformation::itemsPres[4] = {
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

const void *Implicit::itemsInfo[1] = {
	&OccurrenceSequenceNumberOfPICH::theInfo,
};
const void *Implicit::itemsPres[1] = {
	0,
};
const Implicit::Info Implicit::theInfo = {
	Implicit::create,
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
const void *PICHInfoLCRr4::itemsPres[7] = {
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
	&Implicit::theInfo,
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



const void *Paging_associatedHspdschInfo::itemsInfo[0] = {
};
const void *Paging_associatedHspdschInfo::itemsPres[0] = {
};
const Paging_associatedHspdschInfo::Info Paging_associatedHspdschInfo::theInfo = {
	Paging_associatedHspdschInfo::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	0, 0, 0
};



const void *PCCHInformationList::itemsInfo[3] = {
	&Paging_associatedHspdschInfo::theInfo,
	&Paging_sub_Channel_size::theInfo,
	&TransportBlockSizeList::theInfo,
};
const void *PCCHInformationList::itemsPres[3] = {
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
	&Pich_ForHsdschList::theInfo,
	&Dtch_DCCH_reception_window_size::theInfo,
	&PCCHInformationList::theInfo,
};
const void *HSDSCHPagingSystemInformationTDD128::itemsPres[3] = {
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
const void *HSDSCHRxPatternListTDD128::itemsPres[0] = {
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
const void *HSDSCHTbsListTDD128::itemsPres[0] = {
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



const void *HARQInfoForSPS::itemsInfo[2] = {
	&NumberOfProcesses::theInfo,
	&HARQMemorySize::theInfo,
};
const void *HARQInfoForSPS::itemsPres[2] = {
	1,
	1,
};
const HARQInfoForSPS::Info HARQInfoForSPS::theInfo = {
	HARQInfoForSPS::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *HSSICHListTDD128::itemsInfo[0] = {
};
const void *HSSICHListTDD128::itemsPres[0] = {
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







const void *InitialSPSInfoForHSDSCH::itemsInfo[8] = {
	&TimeslotInfo::theInfo,
	&HSChannelisationCodeSetInfoLCR::theInfo,
	&ActivationTime::theInfo,
	&SfnNum::theInfo,
	&InitialRxPatternIndex::theInfo,
	&InitialTfsIndex::theInfo,
	&modulation::theInfo,
	&Hs_sich_Index::theInfo,
};
const void *InitialSPSInfoForHSDSCH::itemsPres[8] = {
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
};
const InitialSPSInfoForHSDSCH::Info InitialSPSInfoForHSDSCH::theInfo = {
	InitialSPSInfoForHSDSCH::create,
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
	&HARQInfoForSPS::theInfo,
	&HSSICHListTDD128::theInfo,
	&InitialSPSInfoForHSDSCH::theInfo,
};
const void *HSDSCHSPSNewOperationTDD128::itemsPres[5] = {
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

const void *Hs_dsch_SPS_Operation::choicesInfo[2] = {
	&Continue::theInfo,
	&HSDSCHSPSNewOperationTDD128::theInfo,
};
const Hs_dsch_SPS_Operation::Info Hs_dsch_SPS_Operation::theInfo = {
	Hs_dsch_SPS_Operation::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *HSDSCHSPSInformationTDD128::itemsInfo[1] = {
	&Hs_dsch_SPS_Operation::theInfo,
};
const void *HSDSCHSPSInformationTDD128::itemsPres[1] = {
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
const void *HSSCCHLessTFSList::itemsPres[0] = {
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
	&Hs_pdsch_CodeIndex::theInfo,
	&HSSCCHLessTFSList::theInfo,
};
const void *HSSCCHLessNewOperation::itemsPres[2] = {
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


const void *Hs_scchLessOperation::choicesInfo[2] = {
	&Continue::theInfo,
	&HSSCCHLessNewOperation::theInfo,
};
const Hs_scchLessOperation::Info Hs_scchLessOperation::theInfo = {
	Hs_scchLessOperation::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *HSSCCHLessInfor7::itemsInfo[1] = {
	&Hs_scchLessOperation::theInfo,
};
const void *HSSCCHLessInfor7::itemsPres[1] = {
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




const void *MidambleAllocationMode::choicesInfo[3] = {
	&DefaultMidamble::theInfo,
	&CommonMidamble::theInfo,
	&UeSpecificMidamble::theInfo,
};
const MidambleAllocationMode::Info MidambleAllocationMode::theInfo = {
	MidambleAllocationMode::create,
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
	&MidambleAllocationMode::theInfo,
	&MidambleConfiguration::theInfo,
	&BlerTarget::theInfo,
	&HSSICHConfigurationTDD128::theInfo,
};
const void *HSSCCHTDD128MultiCarrier::itemsPres[8] = {
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
const void *HSSICHReferenceSignalInfoList::itemsPres[0] = {
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
	&modulation::theInfo,
	&ss_TPC_Symbols::theInfo,
};
const void *IndividualTimeslotInfoLCRr4ext::itemsPres[3] = {
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




const void *UeSpecificMidamble::itemsInfo[1] = {
	&MidambleShiftLong::theInfo,
};
const void *UeSpecificMidamble::itemsPres[1] = {
	1,
};
const UeSpecificMidamble::Info UeSpecificMidamble::theInfo = {
	UeSpecificMidamble::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MidambleAllocationMode::choicesInfo[3] = {
	&DefaultMidamble::theInfo,
	&CommonMidamble::theInfo,
	&UeSpecificMidamble::theInfo,
};
const MidambleAllocationMode::Info MidambleAllocationMode::theInfo = {
	MidambleAllocationMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *Type1::itemsInfo[2] = {
	&MidambleConfigurationBurstType1and3::theInfo,
	&MidambleAllocationMode::theInfo,
};
const void *Type1::itemsPres[2] = {
	1,
	1,
};
const Type1::Info Type1::theInfo = {
	Type1::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};



const void *UeSpecificMidamble::itemsInfo[1] = {
	&MidambleShiftShort::theInfo,
};
const void *UeSpecificMidamble::itemsPres[1] = {
	1,
};
const UeSpecificMidamble::Info UeSpecificMidamble::theInfo = {
	UeSpecificMidamble::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MidambleAllocationMode::choicesInfo[3] = {
	&DefaultMidamble::theInfo,
	&CommonMidamble::theInfo,
	&UeSpecificMidamble::theInfo,
};
const MidambleAllocationMode::Info MidambleAllocationMode::theInfo = {
	MidambleAllocationMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *Type2::itemsInfo[2] = {
	&MidambleConfigurationBurstType2::theInfo,
	&MidambleAllocationMode::theInfo,
};
const void *Type2::itemsPres[2] = {
	1,
	1,
};
const Type2::Info Type2::theInfo = {
	Type2::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *BurstType::choicesInfo[2] = {
	&Type1::theInfo,
	&Type2::theInfo,
};
const BurstType::Info BurstType::theInfo = {
	BurstType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *MidambleShiftAndBurstTypeDL::itemsInfo[1] = {
	&BurstType::theInfo,
};
const void *MidambleShiftAndBurstTypeDL::itemsPres[1] = {
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



const void *UeSpecificMidamble::itemsInfo[1] = {
	&MidambleShiftLong::theInfo,
};
const void *UeSpecificMidamble::itemsPres[1] = {
	1,
};
const UeSpecificMidamble::Info UeSpecificMidamble::theInfo = {
	UeSpecificMidamble::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MidambleAllocationMode::choicesInfo[3] = {
	&DefaultMidamble::theInfo,
	&CommonMidamble::theInfo,
	&UeSpecificMidamble::theInfo,
};
const MidambleAllocationMode::Info MidambleAllocationMode::theInfo = {
	MidambleAllocationMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *Type1::itemsInfo[2] = {
	&MidambleConfigurationBurstType1and3::theInfo,
	&MidambleAllocationMode::theInfo,
};
const void *Type1::itemsPres[2] = {
	1,
	1,
};
const Type1::Info Type1::theInfo = {
	Type1::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};



const void *UeSpecificMidamble::itemsInfo[1] = {
	&MidambleShiftShortVHCR::theInfo,
};
const void *UeSpecificMidamble::itemsPres[1] = {
	1,
};
const UeSpecificMidamble::Info UeSpecificMidamble::theInfo = {
	UeSpecificMidamble::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MidambleAllocationMode::choicesInfo[3] = {
	&DefaultMidamble::theInfo,
	&CommonMidamble::theInfo,
	&UeSpecificMidamble::theInfo,
};
const MidambleAllocationMode::Info MidambleAllocationMode::theInfo = {
	MidambleAllocationMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *Type2::itemsInfo[2] = {
	&MidambleConfigurationBurstType2VHCR::theInfo,
	&MidambleAllocationMode::theInfo,
};
const void *Type2::itemsPres[2] = {
	1,
	1,
};
const Type2::Info Type2::theInfo = {
	Type2::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *BurstType::choicesInfo[2] = {
	&Type1::theInfo,
	&Type2::theInfo,
};
const BurstType::Info BurstType::theInfo = {
	BurstType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *MidambleShiftAndBurstTypeDLVHCR::itemsInfo[1] = {
	&BurstType::theInfo,
};
const void *MidambleShiftAndBurstTypeDLVHCR::itemsPres[1] = {
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



const void *DiversityPattern::itemsInfo[1] = {
	&ChannelisationCode256::theInfo,
};
const void *DiversityPattern::itemsPres[1] = {
	1,
};
const DiversityPattern::Info DiversityPattern::theInfo = {
	DiversityPattern::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *SecondCPICH_Pattern::choicesInfo[2] = {
	&NormalPattern::theInfo,
	&DiversityPattern::theInfo,
};
const SecondCPICH_Pattern::Info SecondCPICH_Pattern::theInfo = {
	SecondCPICH_Pattern::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *MIMOPilotConfiguration::itemsInfo[1] = {
	&SecondCPICH_Pattern::theInfo,
};
const void *MIMOPilotConfiguration::itemsPres[1] = {
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
const void *MIMOParametersr7::itemsPres[3] = {
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



const void *MIMOParametersv7g0ext::itemsInfo[1] = {
	&precodingWeightSetRestriction::theInfo,
};
const void *MIMOParametersv7g0ext::itemsPres[1] = {
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

const void *Fdd::itemsInfo[2] = {
	&MIMONMRatio::theInfo,
	&MIMOPilotConfiguration::theInfo,
};
const void *Fdd::itemsPres[2] = {
	0,
	0,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};


const void *Tdd128::itemsInfo[2] = {
	&mimoSFModeForHSPDSCHDualStream::theInfo,
	&HSSICHReferenceSignalInfoList::theInfo,
};
const void *Tdd128::itemsPres[2] = {
	1,
	0,
};
const Tdd128::Info Tdd128::theInfo = {
	Tdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};


const void *Tdd::choicesInfo[2] = {
	&Tdd128::theInfo,
	&Tdd384_tdd768::theInfo,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *MIMOParametersr8::itemsInfo[2] = {
	&MIMOOperation::theInfo,
	&ModeSpecificInfo::theInfo,
};
const void *MIMOParametersr8::itemsPres[2] = {
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


const void *Fdd::itemsInfo[3] = {
	&MIMONMRatio::theInfo,
	&MIMOPilotConfigurationr9::theInfo,
	&precodingWeightSetRestriction::theInfo,
};
const void *Fdd::itemsPres[3] = {
	0,
	0,
	0,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};


const void *Tdd128::itemsInfo[2] = {
	&mimoSFModeForHSPDSCHDualStream::theInfo,
	&HSSICHReferenceSignalInfoList::theInfo,
};
const void *Tdd128::itemsPres[2] = {
	1,
	0,
};
const Tdd128::Info Tdd128::theInfo = {
	Tdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};


const void *Tdd::choicesInfo[2] = {
	&Tdd128::theInfo,
	&Tdd384_tdd768::theInfo,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *MIMOParametersr9::itemsInfo[2] = {
	&MIMOOperation::theInfo,
	&ModeSpecificInfo::theInfo,
};
const void *MIMOParametersr9::itemsPres[2] = {
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

const void *MIMOPilotConfigurationv7f0ext::itemsInfo[1] = {
	&SCPICHPowerOffsetMIMO::theInfo,
};
const void *MIMOPilotConfigurationv7f0ext::itemsPres[1] = {
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


const void *MultifrequencyInfoLCRr7::itemsInfo[3] = {
	&FrequencyInfoTDD::theInfo,
	&FrequencyInfoTDD::theInfo,
	&UpPCHpositionLCR::theInfo,
};
const void *MultifrequencyInfoLCRr7::itemsPres[3] = {
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
const void *NewTiming::itemsPres[2] = {
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



const void *Tdd128::itemsInfo[1] = {
	&t_SI_nst::theInfo,
};
const void *Tdd128::itemsPres[1] = {
	0,
};
const Tdd128::Info Tdd128::theInfo = {
	Tdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *NonScheduledTransGrantInfoTDDext::choicesInfo[2] = {
	&Tdd384_768::theInfo,
	&Tdd128::theInfo,
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
const void *OpenLoopPowerControlTDD::itemsPres[5] = {
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
const void *OpenLoopPowerControlIPDLTDDr4::itemsPres[2] = {
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
const void *PDSCHPowerControlInfo::itemsPres[2] = {
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


const void *Old_Configuration::itemsInfo[2] = {
	&TFCSIdentityPlain::theInfo,
	&PDSCHIdentity::theInfo,
};
const void *Old_Configuration::itemsPres[2] = {
	0,
	1,
};
const Old_Configuration::Info Old_Configuration::theInfo = {
	Old_Configuration::create,
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
const void *PDSCHInfo::itemsPres[3] = {
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

const void *New_Configuration::itemsInfo[2] = {
	&PDSCHInfo::theInfo,
	&PDSCHIdentity::theInfo,
};
const void *New_Configuration::itemsPres[2] = {
	1,
	0,
};
const New_Configuration::Info New_Configuration::theInfo = {
	New_Configuration::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *Configuration::choicesInfo[2] = {
	&Old_Configuration::theInfo,
	&New_Configuration::theInfo,
};
const Configuration::Info Configuration::theInfo = {
	Configuration::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *PDSCHCapacityAllocationInfo::itemsInfo[3] = {
	&PDSCHPowerControlInfo::theInfo,
	&AllocationPeriodInfo::theInfo,
	&Configuration::theInfo,
};
const void *PDSCHCapacityAllocationInfo::itemsPres[3] = {
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

const void *Old_Configuration::itemsInfo[2] = {
	&TFCSIdentityPlain::theInfo,
	&PDSCHIdentity::theInfo,
};
const void *Old_Configuration::itemsPres[2] = {
	0,
	1,
};
const Old_Configuration::Info Old_Configuration::theInfo = {
	Old_Configuration::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *Tdd384::itemsInfo[1] = {
	&DownlinkTimeslotsCodes::theInfo,
};
const void *Tdd384::itemsPres[1] = {
	0,
};
const Tdd384::Info Tdd384::theInfo = {
	Tdd384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *Tdd128::itemsInfo[1] = {
	&DownlinkTimeslotsCodesLCRr4::theInfo,
};
const void *Tdd128::itemsPres[1] = {
	0,
};
const Tdd128::Info Tdd128::theInfo = {
	Tdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *TddOption::choicesInfo[2] = {
	&Tdd384::theInfo,
	&Tdd128::theInfo,
};
const TddOption::Info TddOption::theInfo = {
	TddOption::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *PDSCHInfor4::itemsInfo[3] = {
	&TFCSIdentityPlain::theInfo,
	&CommonTimeslotInfo::theInfo,
	&TddOption::theInfo,
};
const void *PDSCHInfor4::itemsPres[3] = {
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

const void *New_Configuration::itemsInfo[3] = {
	&PDSCHInfor4::theInfo,
	&PDSCHIdentity::theInfo,
	&PDSCHPowerControlInfo::theInfo,
};
const void *New_Configuration::itemsPres[3] = {
	1,
	0,
	0,
};
const New_Configuration::Info New_Configuration::theInfo = {
	New_Configuration::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *Configuration::choicesInfo[2] = {
	&Old_Configuration::theInfo,
	&New_Configuration::theInfo,
};
const Configuration::Info Configuration::theInfo = {
	Configuration::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *PDSCHCapacityAllocationInfor4::itemsInfo[2] = {
	&AllocationPeriodInfo::theInfo,
	&Configuration::theInfo,
};
const void *PDSCHCapacityAllocationInfor4::itemsPres[2] = {
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

const void *Old_Configuration::itemsInfo[2] = {
	&TFCSIdentityPlain::theInfo,
	&PDSCHIdentity::theInfo,
};
const void *Old_Configuration::itemsPres[2] = {
	0,
	1,
};
const Old_Configuration::Info Old_Configuration::theInfo = {
	Old_Configuration::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *Tdd384::itemsInfo[1] = {
	&DownlinkTimeslotsCodes::theInfo,
};
const void *Tdd384::itemsPres[1] = {
	0,
};
const Tdd384::Info Tdd384::theInfo = {
	Tdd384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *Tdd768::itemsInfo[1] = {
	&DownlinkTimeslotsCodesVHCR::theInfo,
};
const void *Tdd768::itemsPres[1] = {
	0,
};
const Tdd768::Info Tdd768::theInfo = {
	Tdd768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *Tdd128::itemsInfo[1] = {
	&DownlinkTimeslotsCodesLCRr4::theInfo,
};
const void *Tdd128::itemsPres[1] = {
	0,
};
const Tdd128::Info Tdd128::theInfo = {
	Tdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *TddOption::choicesInfo[3] = {
	&Tdd384::theInfo,
	&Tdd768::theInfo,
	&Tdd128::theInfo,
};
const TddOption::Info TddOption::theInfo = {
	TddOption::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *PDSCHInfor7::itemsInfo[3] = {
	&TFCSIdentityPlain::theInfo,
	&CommonTimeslotInfo::theInfo,
	&TddOption::theInfo,
};
const void *PDSCHInfor7::itemsPres[3] = {
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

const void *New_Configuration::itemsInfo[3] = {
	&PDSCHInfor7::theInfo,
	&PDSCHIdentity::theInfo,
	&PDSCHPowerControlInfo::theInfo,
};
const void *New_Configuration::itemsPres[3] = {
	1,
	0,
	0,
};
const New_Configuration::Info New_Configuration::theInfo = {
	New_Configuration::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *Configuration::choicesInfo[2] = {
	&Old_Configuration::theInfo,
	&New_Configuration::theInfo,
};
const Configuration::Info Configuration::theInfo = {
	Configuration::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *PDSCHCapacityAllocationInfor7::itemsInfo[2] = {
	&AllocationPeriodInfo::theInfo,
	&Configuration::theInfo,
};
const void *PDSCHCapacityAllocationInfor7::itemsPres[2] = {
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
const void *PDSCHInfoLCRr4::itemsPres[3] = {
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
const void *PDSCHSysInfo::itemsPres[4] = {
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
const void *PDSCHSysInfoVHCRr7::itemsPres[4] = {
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
const void *PDSCHSysInfoHCRr5::itemsPres[4] = {
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
const void *PDSCHSysInfoLCRr4::itemsPres[4] = {
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
const void *PDSCHSysInfoListSFN::itemsPres[0] = {
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
const void *PDSCHSysInfoListSFNHCRr5::itemsPres[0] = {
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
const void *PDSCHSysInfoListSFNLCRr4::itemsPres[0] = {
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


const void *ChannelisationCode::choicesInfo[2] = {
	&TDDPICHCCode::theInfo,
	&TDD768PICHCCode::theInfo,
};
const ChannelisationCode::Info ChannelisationCode::theInfo = {
	ChannelisationCode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *PICHInfoHCRVHCRr7::itemsInfo[7] = {
	&ChannelisationCode::theInfo,
	&TimeslotNumber::theInfo,
	&MidambleShiftAndBurstType::theInfo,
	&RepPerLengthOffsetPICH::theInfo,
	&PagingIndicatorLength::theInfo,
	&NGAP::theInfo,
	&NPCH::theInfo,
};
const void *PICHInfoHCRVHCRr7::itemsPres[7] = {
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
	&PlcchSequenceNumber::theInfo,
	&TimeslotNumberLCRr4::theInfo,
	&DLTSChannelisationCode::theInfo,
	&TPCCommandTargetRate::theInfo,
};
const void *PLCCHInfo::itemsPres[4] = {
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
const void *PRACHDefinitionLCRr4::itemsPres[4] = {
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
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const PRACHPartitioning::Info PRACHPartitioning::theInfo = {
	PRACHPartitioning::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};



const void *Fdd::itemsInfo[5] = {
	&AvailableSignatures::theInfo,
	&SFPRACH::theInfo,
	&PreambleScramblingCodeWordNumber::theInfo,
	&PuncturingLimit::theInfo,
	&AvailableSubChannelNumbers::theInfo,
};
const void *Fdd::itemsPres[5] = {
	1,
	1,
	1,
	1,
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 0, 0
};





const void *TDDPRACHCCodeList::choicesInfo[2] = {
	&Sf8::theInfo,
	&Sf16::theInfo,
};
const TDDPRACHCCodeList::Info TDDPRACHCCodeList::theInfo = {
	TDDPRACHCCodeList::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Tdd::itemsInfo[3] = {
	&TimeslotNumber::theInfo,
	&TDDPRACHCCodeList::theInfo,
	&PRACHMidamble::theInfo,
};
const void *Tdd::itemsPres[3] = {
	1,
	1,
	1,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *PRACHRACHInfo::itemsInfo[1] = {
	&ModeSpecificInfo::theInfo,
};
const void *PRACHRACHInfo::itemsPres[1] = {
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
	&Sf32::theInfo,
	&Sf16::theInfo,
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
const void *PRACHRACHInfoVHCRr7::itemsPres[3] = {
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
const void *PRACHRACHInfoLCRv770ext::itemsPres[1] = {
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
	&PrxUpPCHdes::theInfo,
	&PowerRampStep::theInfo,
	&max_SYNC_UL_Transmissions::theInfo,
	&Mmax::theInfo,
};
const void *SYNCULInfor4::itemsPres[5] = {
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
	&Prach_DefinitionList::theInfo,
};
const void *PRACHRACHInfoLCRr4::itemsPres[2] = {
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

const void *Fdd::itemsInfo[5] = {
	&PrimaryCPICHTXPower::theInfo,
	&ConstantValue::theInfo,
	&PRACHPowerOffset::theInfo,
	&RACHTransmissionParameters::theInfo,
	&AICHInfo::theInfo,
};
const void *Fdd::itemsPres[5] = {
	0,
	0,
	0,
	0,
	0,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 5, 0
};


const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
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
	&ModeSpecificInfo::theInfo,
};
const void *PRACHSystemInformation::itemsPres[8] = {
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
const void *PRACHSystemInformationVHCRr7::itemsPres[2] = {
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
const void *PRACHSystemInformationLCRr4::itemsPres[3] = {
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
const void *PRACHSystemInformationLCRv770ext::itemsPres[1] = {
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
	&Tstd_Indicator::theInfo,
	&CellParametersID::theInfo,
	&Sctd_Indicator::theInfo,
};
const void *PrimaryCCPCHInfoLCRr4::itemsPres[3] = {
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
	&Tstd_Indicator::theInfo,
};
const void *PrimaryCCPCHInfoLCRr4ext::itemsPres[1] = {
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



const void *Old_Configuration::itemsInfo[2] = {
	&TFCSIdentityPlain::theInfo,
	&PUSCHIdentity::theInfo,
};
const void *Old_Configuration::itemsPres[2] = {
	0,
	1,
};
const Old_Configuration::Info Old_Configuration::theInfo = {
	Old_Configuration::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};





const void *Consecutive::itemsInfo[1] = {
	&NumAdditionalTimeslots::theInfo,
};
const void *Consecutive::itemsPres[1] = {
	1,
};
const Consecutive::Info Consecutive::theInfo = {
	Consecutive::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *SameAsLast::itemsInfo[1] = {
	&TimeslotNumber::theInfo,
};
const void *SameAsLast::itemsPres[1] = {
	1,
};
const SameAsLast::Info SameAsLast::theInfo = {
	SameAsLast::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *NewParameters::itemsInfo[2] = {
	&IndividualTimeslotInfo::theInfo,
	&ULTSChannelisationCodeList::theInfo,
};
const void *NewParameters::itemsPres[2] = {
	1,
	1,
};
const NewParameters::Info NewParameters::theInfo = {
	NewParameters::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *Parameters::choicesInfo[2] = {
	&SameAsLast::theInfo,
	&NewParameters::theInfo,
};
const Parameters::Info Parameters::theInfo = {
	Parameters::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *UplinkAdditionalTimeslots::itemsInfo[1] = {
	&Parameters::theInfo,
};
const void *UplinkAdditionalTimeslots::itemsPres[1] = {
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


const void *AdditionalTimeslots::choicesInfo[2] = {
	&Consecutive::theInfo,
	&TimeslotList::theInfo,
};
const AdditionalTimeslots::Info AdditionalTimeslots::theInfo = {
	AdditionalTimeslots::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *MoreTimeslots::choicesInfo[2] = {
	&NoMore::theInfo,
	&AdditionalTimeslots::theInfo,
};
const MoreTimeslots::Info MoreTimeslots::theInfo = {
	MoreTimeslots::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *UplinkTimeslotsCodes::itemsInfo[4] = {
	&DynamicSFusage::theInfo,
	&IndividualTimeslotInfo::theInfo,
	&ULTSChannelisationCodeList::theInfo,
	&MoreTimeslots::theInfo,
};
const void *UplinkTimeslotsCodes::itemsPres[4] = {
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
const void *PUSCHInfo::itemsPres[3] = {
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

const void *New_Configuration::itemsInfo[2] = {
	&PUSCHInfo::theInfo,
	&PUSCHIdentity::theInfo,
};
const void *New_Configuration::itemsPres[2] = {
	1,
	0,
};
const New_Configuration::Info New_Configuration::theInfo = {
	New_Configuration::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *Configuration::choicesInfo[2] = {
	&Old_Configuration::theInfo,
	&New_Configuration::theInfo,
};
const Configuration::Info Configuration::theInfo = {
	Configuration::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Pusch_AllocationAssignment::itemsInfo[3] = {
	&AllocationPeriodInfo::theInfo,
	&ULTargetSIR::theInfo,
	&Configuration::theInfo,
};
const void *Pusch_AllocationAssignment::itemsPres[3] = {
	1,
	0,
	0,
};
const Pusch_AllocationAssignment::Info Pusch_AllocationAssignment::theInfo = {
	Pusch_AllocationAssignment::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *Pusch_Allocation::choicesInfo[2] = {
	&Pusch_AllocationPending::theInfo,
	&Pusch_AllocationAssignment::theInfo,
};
const Pusch_Allocation::Info Pusch_Allocation::theInfo = {
	Pusch_Allocation::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *PUSCHCapacityAllocationInfo::itemsInfo[1] = {
	&Pusch_Allocation::theInfo,
};
const void *PUSCHCapacityAllocationInfo::itemsPres[1] = {
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



const void *Tdd128::itemsInfo[1] = {
	&TPCStepSizeTDD::theInfo,
};
const void *Tdd128::itemsPres[1] = {
	0,
};
const Tdd128::Info Tdd128::theInfo = {
	Tdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *TddOption::choicesInfo[2] = {
	&Tdd384::theInfo,
	&Tdd128::theInfo,
};
const TddOption::Info TddOption::theInfo = {
	TddOption::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *PUSCHPowerControlInfor4::itemsInfo[2] = {
	&ULTargetSIR::theInfo,
	&TddOption::theInfo,
};
const void *PUSCHPowerControlInfor4::itemsPres[2] = {
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

const void *Old_Configuration::itemsInfo[2] = {
	&TFCSIdentityPlain::theInfo,
	&PUSCHIdentity::theInfo,
};
const void *Old_Configuration::itemsPres[2] = {
	0,
	1,
};
const Old_Configuration::Info Old_Configuration::theInfo = {
	Old_Configuration::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *Tdd384::itemsInfo[1] = {
	&UplinkTimeslotsCodes::theInfo,
};
const void *Tdd384::itemsPres[1] = {
	0,
};
const Tdd384::Info Tdd384::theInfo = {
	Tdd384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};




const void *Consecutive::itemsInfo[1] = {
	&NumAdditionalTimeslots::theInfo,
};
const void *Consecutive::itemsPres[1] = {
	1,
};
const Consecutive::Info Consecutive::theInfo = {
	Consecutive::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *SameAsLast::itemsInfo[1] = {
	&TimeslotNumber::theInfo,
};
const void *SameAsLast::itemsPres[1] = {
	1,
};
const SameAsLast::Info SameAsLast::theInfo = {
	SameAsLast::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *NewParameters::itemsInfo[2] = {
	&IndividualTimeslotInfoLCRr4::theInfo,
	&ULTSChannelisationCodeList::theInfo,
};
const void *NewParameters::itemsPres[2] = {
	1,
	1,
};
const NewParameters::Info NewParameters::theInfo = {
	NewParameters::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *Parameters::choicesInfo[2] = {
	&SameAsLast::theInfo,
	&NewParameters::theInfo,
};
const Parameters::Info Parameters::theInfo = {
	Parameters::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *UplinkAdditionalTimeslotsLCRr4::itemsInfo[1] = {
	&Parameters::theInfo,
};
const void *UplinkAdditionalTimeslotsLCRr4::itemsPres[1] = {
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


const void *AdditionalTimeslots::choicesInfo[2] = {
	&Consecutive::theInfo,
	&TimeslotList::theInfo,
};
const AdditionalTimeslots::Info AdditionalTimeslots::theInfo = {
	AdditionalTimeslots::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *MoreTimeslots::choicesInfo[2] = {
	&NoMore::theInfo,
	&AdditionalTimeslots::theInfo,
};
const MoreTimeslots::Info MoreTimeslots::theInfo = {
	MoreTimeslots::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *UplinkTimeslotsCodesLCRr4::itemsInfo[4] = {
	&DynamicSFusage::theInfo,
	&IndividualTimeslotInfoLCRr4::theInfo,
	&ULTSChannelisationCodeList::theInfo,
	&MoreTimeslots::theInfo,
};
const void *UplinkTimeslotsCodesLCRr4::itemsPres[4] = {
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

const void *Tdd128::itemsInfo[1] = {
	&UplinkTimeslotsCodesLCRr4::theInfo,
};
const void *Tdd128::itemsPres[1] = {
	0,
};
const Tdd128::Info Tdd128::theInfo = {
	Tdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *TddOption::choicesInfo[2] = {
	&Tdd384::theInfo,
	&Tdd128::theInfo,
};
const TddOption::Info TddOption::theInfo = {
	TddOption::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *PUSCHInfor4::itemsInfo[3] = {
	&TFCSIdentityPlain::theInfo,
	&CommonTimeslotInfo::theInfo,
	&TddOption::theInfo,
};
const void *PUSCHInfor4::itemsPres[3] = {
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

const void *New_Configuration::itemsInfo[2] = {
	&PUSCHInfor4::theInfo,
	&PUSCHIdentity::theInfo,
};
const void *New_Configuration::itemsPres[2] = {
	1,
	0,
};
const New_Configuration::Info New_Configuration::theInfo = {
	New_Configuration::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *Configuration::choicesInfo[2] = {
	&Old_Configuration::theInfo,
	&New_Configuration::theInfo,
};
const Configuration::Info Configuration::theInfo = {
	Configuration::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Pusch_AllocationAssignment::itemsInfo[3] = {
	&AllocationPeriodInfo::theInfo,
	&PUSCHPowerControlInfor4::theInfo,
	&Configuration::theInfo,
};
const void *Pusch_AllocationAssignment::itemsPres[3] = {
	1,
	0,
	0,
};
const Pusch_AllocationAssignment::Info Pusch_AllocationAssignment::theInfo = {
	Pusch_AllocationAssignment::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *Pusch_Allocation::choicesInfo[2] = {
	&Pusch_AllocationPending::theInfo,
	&Pusch_AllocationAssignment::theInfo,
};
const Pusch_Allocation::Info Pusch_Allocation::theInfo = {
	Pusch_Allocation::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *PUSCHCapacityAllocationInfor4::itemsInfo[1] = {
	&Pusch_Allocation::theInfo,
};
const void *PUSCHCapacityAllocationInfor4::itemsPres[1] = {
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




const void *Tdd128::itemsInfo[1] = {
	&TPCStepSizeTDD::theInfo,
};
const void *Tdd128::itemsPres[1] = {
	0,
};
const Tdd128::Info Tdd128::theInfo = {
	Tdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *TddOption::choicesInfo[3] = {
	&Tdd384::theInfo,
	&Tdd768::theInfo,
	&Tdd128::theInfo,
};
const TddOption::Info TddOption::theInfo = {
	TddOption::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *PUSCHPowerControlInfor7::itemsInfo[2] = {
	&ULTargetSIR::theInfo,
	&TddOption::theInfo,
};
const void *PUSCHPowerControlInfor7::itemsPres[2] = {
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

const void *Old_Configuration::itemsInfo[2] = {
	&TFCSIdentityPlain::theInfo,
	&PUSCHIdentity::theInfo,
};
const void *Old_Configuration::itemsPres[2] = {
	0,
	1,
};
const Old_Configuration::Info Old_Configuration::theInfo = {
	Old_Configuration::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};






const void *Consecutive::itemsInfo[1] = {
	&NumAdditionalTimeslots::theInfo,
};
const void *Consecutive::itemsPres[1] = {
	1,
};
const Consecutive::Info Consecutive::theInfo = {
	Consecutive::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *SameAsLast::itemsInfo[1] = {
	&TimeslotNumber::theInfo,
};
const void *SameAsLast::itemsPres[1] = {
	1,
};
const SameAsLast::Info SameAsLast::theInfo = {
	SameAsLast::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *NewParameters::itemsInfo[2] = {
	&IndividualTimeslotInfoVHCR::theInfo,
	&ULTSChannelisationCodeList::theInfo,
};
const void *NewParameters::itemsPres[2] = {
	1,
	1,
};
const NewParameters::Info NewParameters::theInfo = {
	NewParameters::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *Parameters::choicesInfo[2] = {
	&SameAsLast::theInfo,
	&NewParameters::theInfo,
};
const Parameters::Info Parameters::theInfo = {
	Parameters::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *UplinkAdditionalTimeslotsVHCR::itemsInfo[1] = {
	&Parameters::theInfo,
};
const void *UplinkAdditionalTimeslotsVHCR::itemsPres[1] = {
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


const void *AdditionalTimeslots::choicesInfo[2] = {
	&Consecutive::theInfo,
	&TimeslotList::theInfo,
};
const AdditionalTimeslots::Info AdditionalTimeslots::theInfo = {
	AdditionalTimeslots::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *MoreTimeslots::choicesInfo[2] = {
	&NoMore::theInfo,
	&AdditionalTimeslots::theInfo,
};
const MoreTimeslots::Info MoreTimeslots::theInfo = {
	MoreTimeslots::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *UplinkTimeslotsCodesVHCR::itemsInfo[4] = {
	&DynamicSFusage::theInfo,
	&IndividualTimeslotInfoVHCR::theInfo,
	&ULTSChannelisationCodeListVHCR::theInfo,
	&MoreTimeslots::theInfo,
};
const void *UplinkTimeslotsCodesVHCR::itemsPres[4] = {
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
const void *PUSCHInfoVHCR::itemsPres[3] = {
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

const void *New_Configuration::itemsInfo[2] = {
	&PUSCHInfoVHCR::theInfo,
	&PUSCHIdentity::theInfo,
};
const void *New_Configuration::itemsPres[2] = {
	1,
	0,
};
const New_Configuration::Info New_Configuration::theInfo = {
	New_Configuration::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *Configuration::choicesInfo[2] = {
	&Old_Configuration::theInfo,
	&New_Configuration::theInfo,
};
const Configuration::Info Configuration::theInfo = {
	Configuration::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Pusch_AllocationAssignment::itemsInfo[3] = {
	&AllocationPeriodInfo::theInfo,
	&PUSCHPowerControlInfor7::theInfo,
	&Configuration::theInfo,
};
const void *Pusch_AllocationAssignment::itemsPres[3] = {
	1,
	0,
	0,
};
const Pusch_AllocationAssignment::Info Pusch_AllocationAssignment::theInfo = {
	Pusch_AllocationAssignment::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *Pusch_Allocation::choicesInfo[2] = {
	&Pusch_AllocationPending::theInfo,
	&Pusch_AllocationAssignment::theInfo,
};
const Pusch_Allocation::Info Pusch_Allocation::theInfo = {
	Pusch_Allocation::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *PUSCHCapacityAllocationInfor7::itemsInfo[1] = {
	&Pusch_Allocation::theInfo,
};
const void *PUSCHCapacityAllocationInfor7::itemsPres[1] = {
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
const void *PUSCHInfoLCRr4::itemsPres[3] = {
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
const void *PUSCHSysInfo::itemsPres[4] = {
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
const void *PUSCHSysInfoVHCR::itemsPres[4] = {
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
const void *PUSCHSysInfoHCRr5::itemsPres[4] = {
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
const void *PUSCHSysInfoLCRr4::itemsPres[4] = {
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
const void *PUSCHSysInfoListSFN::itemsPres[0] = {
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
const void *PUSCHSysInfoListSFNHCRr5::itemsPres[0] = {
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
const void *PUSCHSysInfoListSFNLCRr4::itemsPres[0] = {
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
const void *PUSCHSysInfoListSFNVHCR::itemsPres[0] = {
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
	&RepetitionPeriod1::theInfo,
	&RepetitionPeriod2::theInfo,
	&RepetitionPeriod4::theInfo,
	&RepetitionPeriod8::theInfo,
	&RepetitionPeriod16::theInfo,
	&RepetitionPeriod32::theInfo,
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
	&Rpp4_2::theInfo,
	&Rpp8_2::theInfo,
	&Rpp8_4::theInfo,
	&Rpp16_2::theInfo,
	&Rpp16_4::theInfo,
	&Rpp32_2::theInfo,
	&Rpp32_4::theInfo,
	&Rpp64_2::theInfo,
	&Rpp64_4::theInfo,
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
	&Dummy::theInfo,
	&SCCPCHInfoForFACH::theInfo,
};
const void *RLAdditionInformation::itemsPres[4] = {
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

const void *Dl_dpchInfo::choicesInfo[2] = {
	&DLDPCHInfoPerRLr5::theInfo,
	&DLFDPCHInfoPerRLr6::theInfo,
};
const Dl_dpchInfo::Info Dl_dpchInfo::theInfo = {
	Dl_dpchInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *RLAdditionInformationr6::itemsInfo[5] = {
	&PrimaryCPICHInfo::theInfo,
	&CellIdentity::theInfo,
	&Dl_dpchInfo::theInfo,
	&EHICHInformation::theInfo,
	&ERGCHInformation::theInfo,
};
const void *RLAdditionInformationr6::itemsPres[5] = {
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

const void *Dl_dpchInfo::choicesInfo[2] = {
	&DLDPCHInfoPerRLr5::theInfo,
	&DLFDPCHInfoPerRLr7::theInfo,
};
const Dl_dpchInfo::Info Dl_dpchInfo::theInfo = {
	Dl_dpchInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *RLAdditionInformationr7::itemsInfo[5] = {
	&PrimaryCPICHInfo::theInfo,
	&CellIdentity::theInfo,
	&Dl_dpchInfo::theInfo,
	&EHICHInformation::theInfo,
	&ERGCHInformation::theInfo,
};
const void *RLAdditionInformationr7::itemsPres[5] = {
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

const void *Dl_dpchInfo::choicesInfo[2] = {
	&DLDPCHInfoPerRLr5::theInfo,
	&DLFDPCHInfoPerRLr7::theInfo,
};
const Dl_dpchInfo::Info Dl_dpchInfo::theInfo = {
	Dl_dpchInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};


const void *Timing::choicesInfo[2] = {
	&Continue::theInfo,
	&NewTiming::theInfo,
};
const Timing::Info Timing::theInfo = {
	Timing::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DTXDRXTimingInfor7::itemsInfo[1] = {
	&Timing::theInfo,
};
const void *DTXDRXTimingInfor7::itemsPres[1] = {
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
const void *TargetCellPreconfigInfo::itemsPres[11] = {
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
	&Dl_dpchInfo::theInfo,
	&EHICHInformation::theInfo,
	&ERGCHInformation::theInfo,
	&TargetCellPreconfigInfo::theInfo,
};
const void *RLAdditionInformationr8::itemsPres[6] = {
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

const void *Dl_dpchInfo::choicesInfo[2] = {
	&DLDPCHInfoPerRLr5::theInfo,
	&DLFDPCHInfoPerRLr7::theInfo,
};
const Dl_dpchInfo::Info Dl_dpchInfo::theInfo = {
	Dl_dpchInfo::create,
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
const void *TargetCellPreconfigInfor9::itemsPres[13] = {
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
	&Dl_dpchInfo::theInfo,
	&EHICHInformation::theInfo,
	&ERGCHInformation::theInfo,
	&TargetCellPreconfigInfor9::theInfo,
};
const void *RLAdditionInformationr9::itemsPres[6] = {
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
const void *RLAdditionInformationv6b0ext::itemsPres[1] = {
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
const void *RLAdditionInformationv890ext::itemsPres[1] = {
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
const void *RLAdditionInformationv950ext::itemsPres[1] = {
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
const void *RLAdditionInformationSecULFreq::itemsPres[5] = {
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
const void *SCCPCHSystemInformation::itemsPres[4] = {
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
const void *SecondaryCCPCHInfoLCRr4ext::itemsPres[1] = {
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
const void *SCCPCHSystemInformationLCRr4ext::itemsPres[2] = {
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

const void *Tdd384::itemsInfo[2] = {
	&IndividualTimeslotInfor7::theInfo,
	&SCCPCHChannelisationCodeList::theInfo,
};
const void *Tdd384::itemsPres[2] = {
	1,
	1,
};
const Tdd384::Info Tdd384::theInfo = {
	Tdd384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *Tdd768::itemsInfo[2] = {
	&IndividualTimeslotInfoVHCR::theInfo,
	&SCCPCHChannelisationCodeListVHCR::theInfo,
};
const void *Tdd768::itemsPres[2] = {
	1,
	1,
};
const Tdd768::Info Tdd768::theInfo = {
	Tdd768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Tdd384::theInfo,
	&Tdd768::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *SecondaryCCPCHInfoHCRVHCRr7::itemsInfo[1] = {
	&ModeSpecificInfo::theInfo,
};
const void *SecondaryCCPCHInfoHCRVHCRr7::itemsPres[1] = {
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
const void *SCCPCHSystemInformationHCRVHCRr7::itemsPres[4] = {
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





const void *Fdd::itemsInfo[4] = {
	&SecondaryScramblingCode::theInfo,
	&Sttd_Indicator::theInfo,
	&SF256AndCodeNumber::theInfo,
	&TimingOffset::theInfo,
};
const void *Fdd::itemsPres[4] = {
	0,
	1,
	1,
	0,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
};

const void *Tdd384::itemsInfo[2] = {
	&CommonTimeslotInfoMBMS::theInfo,
	&DownlinkTimeslotsCodes::theInfo,
};
const void *Tdd384::itemsPres[2] = {
	1,
	1,
};
const Tdd384::Info Tdd384::theInfo = {
	Tdd384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *Tdd128::itemsInfo[2] = {
	&CommonTimeslotInfoMBMS::theInfo,
	&DownlinkTimeslotsCodesLCRr4::theInfo,
};
const void *Tdd128::itemsPres[2] = {
	1,
	1,
};
const Tdd128::Info Tdd128::theInfo = {
	Tdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *ModeSpecificInfo::choicesInfo[3] = {
	&Fdd::theInfo,
	&Tdd384::theInfo,
	&Tdd128::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *SecondaryCCPCHInfoMBMSr6::itemsInfo[1] = {
	&ModeSpecificInfo::theInfo,
};
const void *SecondaryCCPCHInfoMBMSr6::itemsPres[1] = {
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
	&AccessInfoPeriodCoefficient::theInfo,
	&RepetitionPeriodCoefficient::theInfo,
	&ModificationPeriodCoefficient::theInfo,
	&RLCInfoMCCHr6::theInfo,
	&MBMSTCTFPresence::theInfo,
};
const void *MBMSMCCHConfigurationInfor6::itemsPres[5] = {
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

const void *FachCarryingMCCH::itemsInfo[2] = {
	&TransportFormatSet::theInfo,
	&MBMSMCCHConfigurationInfor6::theInfo,
};
const void *FachCarryingMCCH::itemsPres[2] = {
	1,
	1,
};
const FachCarryingMCCH::Info FachCarryingMCCH::theInfo = {
	FachCarryingMCCH::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};








const void *MBMSMSCHSchedulingInfo::choicesInfo[6] = {
	&SchedulingPeriod_32_Offset::theInfo,
	&SchedulingPeriod_64_Offset::theInfo,
	&SchedulingPeriod_128_Offset::theInfo,
	&SchedulingPeriod_256_Offset::theInfo,
	&SchedulingPeriod_512_Offset::theInfo,
	&SchedulingPeriod_1024_Offset::theInfo,
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
const void *MBMSMSCHConfigurationInfor6::itemsPres[3] = {
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

const void *FachCarryingMSCH::itemsInfo[2] = {
	&TransportFormatSet::theInfo,
	&MBMSMSCHConfigurationInfor6::theInfo,
};
const void *FachCarryingMSCH::itemsPres[2] = {
	1,
	1,
};
const FachCarryingMSCH::Info FachCarryingMSCH::theInfo = {
	FachCarryingMSCH::create,
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
	&FachCarryingMCCH::theInfo,
	&MBMSFACHCarryingMTCHList::theInfo,
	&FachCarryingMSCH::theInfo,
};
const void *SCCPCHSystemInformationMBMSr6::itemsPres[5] = {
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




const void *Modulation::choicesInfo[2] = {
	&ModQPSK::theInfo,
	&Mod16QAM::theInfo,
};
const Modulation::Info Modulation::theInfo = {
	Modulation::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Fdd::itemsInfo[5] = {
	&SecondaryScramblingCode::theInfo,
	&Sttd_Indicator::theInfo,
	&SF256AndCodeNumber::theInfo,
	&TimingOffset::theInfo,
	&Modulation::theInfo,
};
const void *Fdd::itemsPres[5] = {
	0,
	1,
	1,
	0,
	0,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 3, 0
};


const void *Tdd384::itemsInfo[3] = {
	&CommonTimeslotInfoMBMS::theInfo,
	&DownlinkTimeslotsCodesr7::theInfo,
	&modulation::theInfo,
};
const void *Tdd384::itemsPres[3] = {
	1,
	1,
	1,
};
const Tdd384::Info Tdd384::theInfo = {
	Tdd384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};


const void *Tdd768::itemsInfo[3] = {
	&CommonTimeslotInfoMBMS::theInfo,
	&DownlinkTimeslotsCodesVHCR::theInfo,
	&modulation::theInfo,
};
const void *Tdd768::itemsPres[3] = {
	1,
	1,
	1,
};
const Tdd768::Info Tdd768::theInfo = {
	Tdd768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};



const void *Tdd128::itemsInfo[4] = {
	&CommonTimeslotInfoMBMS::theInfo,
	&DownlinkTimeslotsCodesLCRr4::theInfo,
	&TimeSlotLCRext::theInfo,
	&modulation::theInfo,
};
const void *Tdd128::itemsPres[4] = {
	1,
	1,
	0,
	1,
};
const Tdd128::Info Tdd128::theInfo = {
	Tdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 1, 0
};

const void *ModeSpecificInfo::choicesInfo[4] = {
	&Fdd::theInfo,
	&Tdd384::theInfo,
	&Tdd768::theInfo,
	&Tdd128::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	3
};

const void *SecondaryCCPCHInfoMBMSr7::itemsInfo[1] = {
	&ModeSpecificInfo::theInfo,
};
const void *SecondaryCCPCHInfoMBMSr7::itemsPres[1] = {
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

const void *FachCarryingMCCH::itemsInfo[2] = {
	&TransportFormatSet::theInfo,
	&MBMSMCCHConfigurationInfor6::theInfo,
};
const void *FachCarryingMCCH::itemsPres[2] = {
	1,
	1,
};
const FachCarryingMCCH::Info FachCarryingMCCH::theInfo = {
	FachCarryingMCCH::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *FachCarryingMSCH::itemsInfo[1] = {
	&TransportFormatSet::theInfo,
};
const void *FachCarryingMSCH::itemsPres[1] = {
	1,
};
const FachCarryingMSCH::Info FachCarryingMSCH::theInfo = {
	FachCarryingMSCH::create,
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
	&FachCarryingMCCH::theInfo,
	&MBMSFACHCarryingMTCHList::theInfo,
	&FachCarryingMSCH::theInfo,
};
const void *SCCPCHSystemInformationMBMSr7::itemsPres[5] = {
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




const void *Mod16QAM::itemsInfo[1] = {
	&Cpich_SecCCPCH_PowerOffset::theInfo,
};
const void *Mod16QAM::itemsPres[1] = {
	1,
};
const Mod16QAM::Info Mod16QAM::theInfo = {
	Mod16QAM::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *Modulation::choicesInfo[2] = {
	&ModQPSK::theInfo,
	&Mod16QAM::theInfo,
};
const Modulation::Info Modulation::theInfo = {
	Modulation::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *SecondaryCCPCHFrameType2Info::itemsInfo[3] = {
	&SubFrameNumber::theInfo,
	&DLChannelCodesMBSFNIMB384::theInfo,
	&Modulation::theInfo,
};
const void *SecondaryCCPCHFrameType2Info::itemsPres[3] = {
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
	&Sttd_Indicator::theInfo,
	&SF256AndCodeNumber::theInfo,
	&TimingOffset::theInfo,
};
const void *SecondaryCCPCHInfoDiffMBMS::itemsPres[4] = {
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


const void *SecondaryCellMIMOparametersFDDv950ext::itemsInfo[1] = {
	&precodingWeightSetRestriction::theInfo,
};
const void *SecondaryCellMIMOparametersFDDv950ext::itemsPres[1] = {
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




const void *ServingCellChangeParameters::itemsInfo[3] = {
	&ServingCellChangeMACreset::theInfo,
	&ServingCellChangeMsgType::theInfo,
	&ServingCellChangeTrId::theInfo,
};
const void *ServingCellChangeParameters::itemsPres[3] = {
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
	&ActivationTimeSFN::theInfo,
	&DurationTimeInfo::theInfo,
};
const void *SFNTimeInfo::itemsPres[2] = {
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
const void *SPSInformationTDD128r8::itemsPres[2] = {
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
	&max_SYNC_UL_Transmissions::theInfo,
	&PowerRampStep::theInfo,
};
const void *SYNCULProcedurer4::itemsPres[2] = {
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
	&Sync_UL_CodesBitmap::theInfo,
	&FPACHInfor4::theInfo,
	&PrxUpPCHdes::theInfo,
	&SYNCULProcedurer4::theInfo,
};
const void *SynchronisationParametersr4::itemsPres[4] = {
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
const void *TDDMBSFNTSlotInfo::itemsPres[2] = {
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
	&Tdd384::theInfo,
	&Tdd128::theInfo,
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
	&mac_es_e_resetIndicator::theInfo,
};
const void *UL16QAMConfig::itemsPres[3] = {
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
const void *ULCCTrCH::itemsPres[5] = {
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

const void *Tdd384::itemsInfo[1] = {
	&UplinkTimeslotsCodes::theInfo,
};
const void *Tdd384::itemsPres[1] = {
	0,
};
const Tdd384::Info Tdd384::theInfo = {
	Tdd384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *Tdd128::itemsInfo[1] = {
	&UplinkTimeslotsCodesLCRr4::theInfo,
};
const void *Tdd128::itemsPres[1] = {
	0,
};
const Tdd128::Info Tdd128::theInfo = {
	Tdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *TddOption::choicesInfo[2] = {
	&Tdd384::theInfo,
	&Tdd128::theInfo,
};
const TddOption::Info TddOption::theInfo = {
	TddOption::create,
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
	&TddOption::theInfo,
};
const void *ULCCTrCHr4::itemsPres[5] = {
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

const void *Tdd384::itemsInfo[1] = {
	&UplinkTimeslotsCodes::theInfo,
};
const void *Tdd384::itemsPres[1] = {
	0,
};
const Tdd384::Info Tdd384::theInfo = {
	Tdd384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *Tdd768::itemsInfo[1] = {
	&UplinkTimeslotsCodesVHCR::theInfo,
};
const void *Tdd768::itemsPres[1] = {
	0,
};
const Tdd768::Info Tdd768::theInfo = {
	Tdd768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};


const void *ULTSChannelisationCodeListr7::itemsInfo[0] = {
};
const void *ULTSChannelisationCodeListr7::itemsPres[0] = {
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



const void *Consecutive::itemsInfo[1] = {
	&NumAdditionalTimeslots::theInfo,
};
const void *Consecutive::itemsPres[1] = {
	1,
};
const Consecutive::Info Consecutive::theInfo = {
	Consecutive::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *SameAsLast::itemsInfo[1] = {
	&TimeslotNumber::theInfo,
};
const void *SameAsLast::itemsPres[1] = {
	1,
};
const SameAsLast::Info SameAsLast::theInfo = {
	SameAsLast::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *NewParameters::itemsInfo[2] = {
	&IndividualTimeslotInfoLCRr4::theInfo,
	&ULTSChannelisationCodeListr7::theInfo,
};
const void *NewParameters::itemsPres[2] = {
	1,
	1,
};
const NewParameters::Info NewParameters::theInfo = {
	NewParameters::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *Parameters::choicesInfo[2] = {
	&SameAsLast::theInfo,
	&NewParameters::theInfo,
};
const Parameters::Info Parameters::theInfo = {
	Parameters::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *UplinkAdditionalTimeslotsLCRr7::itemsInfo[1] = {
	&Parameters::theInfo,
};
const void *UplinkAdditionalTimeslotsLCRr7::itemsPres[1] = {
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


const void *AdditionalTimeslots::choicesInfo[2] = {
	&Consecutive::theInfo,
	&TimeslotList::theInfo,
};
const AdditionalTimeslots::Info AdditionalTimeslots::theInfo = {
	AdditionalTimeslots::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *MoreTimeslots::choicesInfo[2] = {
	&NoMore::theInfo,
	&AdditionalTimeslots::theInfo,
};
const MoreTimeslots::Info MoreTimeslots::theInfo = {
	MoreTimeslots::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *UplinkTimeslotsCodesLCRr7::itemsInfo[4] = {
	&DynamicSFusage::theInfo,
	&IndividualTimeslotInfoLCRr4::theInfo,
	&ULTSChannelisationCodeListr7::theInfo,
	&MoreTimeslots::theInfo,
};
const void *UplinkTimeslotsCodesLCRr7::itemsPres[4] = {
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

const void *Tdd128::itemsInfo[1] = {
	&UplinkTimeslotsCodesLCRr7::theInfo,
};
const void *Tdd128::itemsPres[1] = {
	0,
};
const Tdd128::Info Tdd128::theInfo = {
	Tdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *TddOption::choicesInfo[3] = {
	&Tdd384::theInfo,
	&Tdd768::theInfo,
	&Tdd128::theInfo,
};
const TddOption::Info TddOption::theInfo = {
	TddOption::create,
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
	&TddOption::theInfo,
};
const void *ULCCTrCHr7::itemsPres[5] = {
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






const void *Fdd::itemsInfo[7] = {
	&ScramblingCodeType::theInfo,
	&ULScramblingCode::theInfo,
	&NumberOfDPDCH::theInfo,
	&SpreadingFactor::theInfo,
	&Tfci_Existence::theInfo,
	&NumberOfFBIBits::theInfo,
	&PuncturingLimit::theInfo,
};
const void *Fdd::itemsPres[7] = {
	1,
	1,
	0,
	1,
	1,
	0,
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	7, 2, 0
};



const void *Enabled::itemsInfo[2] = {
	&ULTimingAdvance::theInfo,
	&ActivationTime::theInfo,
};
const void *Enabled::itemsPres[2] = {
	0,
	0,
};
const Enabled::Info Enabled::theInfo = {
	Enabled::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *ULTimingAdvanceControl::choicesInfo[2] = {
	&Disabled::theInfo,
	&Enabled::theInfo,
};
const ULTimingAdvanceControl::Info ULTimingAdvanceControl::theInfo = {
	ULTimingAdvanceControl::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Tdd::itemsInfo[3] = {
	&ULTimingAdvanceControl::theInfo,
	&ULCCTrCHList::theInfo,
	&ULCCTrCHListToRemove::theInfo,
};
const void *Tdd::itemsPres[3] = {
	0,
	0,
	0,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULDPCHInfo::itemsInfo[2] = {
	&ULDPCHPowerControlInfo::theInfo,
	&ModeSpecificInfo::theInfo,
};
const void *ULDPCHInfo::itemsPres[2] = {
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


const void *Fdd::itemsInfo[7] = {
	&ScramblingCodeType::theInfo,
	&ULScramblingCode::theInfo,
	&NumberOfDPDCH::theInfo,
	&SpreadingFactor::theInfo,
	&Tfci_Existence::theInfo,
	&NumberOfFBIBits::theInfo,
	&PuncturingLimit::theInfo,
};
const void *Fdd::itemsPres[7] = {
	1,
	1,
	0,
	1,
	1,
	0,
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	7, 2, 0
};


const void *Tdd384::itemsInfo[2] = {
	&ULTimingAdvance::theInfo,
	&ActivationTime::theInfo,
};
const void *Tdd384::itemsPres[2] = {
	0,
	0,
};
const Tdd384::Info Tdd384::theInfo = {
	Tdd384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *Tdd128::itemsInfo[2] = {
	&ULSynchronisationParametersr4::theInfo,
	&SynchronisationParametersr4::theInfo,
};
const void *Tdd128::itemsPres[2] = {
	0,
	0,
};
const Tdd128::Info Tdd128::theInfo = {
	Tdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *TddOption::choicesInfo[2] = {
	&Tdd384::theInfo,
	&Tdd128::theInfo,
};
const TddOption::Info TddOption::theInfo = {
	TddOption::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Enabled::itemsInfo[1] = {
	&TddOption::theInfo,
};
const void *Enabled::itemsPres[1] = {
	1,
};
const Enabled::Info Enabled::theInfo = {
	Enabled::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ULTimingAdvanceControlr4::choicesInfo[2] = {
	&Disabled::theInfo,
	&Enabled::theInfo,
};
const ULTimingAdvanceControlr4::Info ULTimingAdvanceControlr4::theInfo = {
	ULTimingAdvanceControlr4::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Tdd::itemsInfo[3] = {
	&ULTimingAdvanceControlr4::theInfo,
	&ULCCTrCHListr4::theInfo,
	&ULCCTrCHListToRemove::theInfo,
};
const void *Tdd::itemsPres[3] = {
	0,
	0,
	0,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULDPCHInfor4::itemsInfo[2] = {
	&ULDPCHPowerControlInfor4::theInfo,
	&ModeSpecificInfo::theInfo,
};
const void *ULDPCHInfor4::itemsPres[2] = {
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


const void *Fdd::itemsInfo[7] = {
	&ScramblingCodeType::theInfo,
	&ULScramblingCode::theInfo,
	&NumberOfDPDCH::theInfo,
	&SpreadingFactor::theInfo,
	&Tfci_Existence::theInfo,
	&NumberOfFBIBits::theInfo,
	&PuncturingLimit::theInfo,
};
const void *Fdd::itemsPres[7] = {
	1,
	1,
	0,
	1,
	1,
	0,
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	7, 2, 0
};

const void *Tdd::itemsInfo[3] = {
	&ULTimingAdvanceControlr4::theInfo,
	&ULCCTrCHListr4::theInfo,
	&ULCCTrCHListToRemove::theInfo,
};
const void *Tdd::itemsPres[3] = {
	0,
	0,
	0,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULDPCHInfor5::itemsInfo[2] = {
	&ULDPCHPowerControlInfor5::theInfo,
	&ModeSpecificInfo::theInfo,
};
const void *ULDPCHInfor5::itemsPres[2] = {
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

const void *Fdd::itemsInfo[8] = {
	&DPCCHPowerOffset::theInfo,
	&PCPreamble::theInfo,
	&SRBdelay::theInfo,
	&PowerControlAlgorithm::theInfo,
	&DeltaACK::theInfo,
	&DeltaNACK::theInfo,
	&ACKNACKrepetitionFactor::theInfo,
	&HARQPreambleMode::theInfo,
};
const void *Fdd::itemsPres[8] = {
	1,
	1,
	1,
	1,
	0,
	0,
	0,
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	8, 3, 0
};


const void *Tdd384::itemsInfo[2] = {
	&IndividualTSInterferenceList::theInfo,
	&ConstantValue::theInfo,
};
const void *Tdd384::itemsPres[2] = {
	1,
	1,
};
const Tdd384::Info Tdd384::theInfo = {
	Tdd384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *Tdd128::itemsInfo[2] = {
	&BEACONPLEst::theInfo,
	&TPCStepSizeTDD::theInfo,
};
const void *Tdd128::itemsPres[2] = {
	0,
	1,
};
const Tdd128::Info Tdd128::theInfo = {
	Tdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *TddOption::choicesInfo[2] = {
	&Tdd384::theInfo,
	&Tdd128::theInfo,
};
const TddOption::Info TddOption::theInfo = {
	TddOption::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *IndividuallySignalled::itemsInfo[2] = {
	&TddOption::theInfo,
	&PrimaryCCPCHTXPower::theInfo,
};
const void *IndividuallySignalled::itemsPres[2] = {
	1,
	1,
};
const IndividuallySignalled::Info IndividuallySignalled::theInfo = {
	IndividuallySignalled::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *Ul_OL_PC_Signalling::choicesInfo[2] = {
	&Broadcast_UL_OL_PC_info::theInfo,
	&IndividuallySignalled::theInfo,
};
const Ul_OL_PC_Signalling::Info Ul_OL_PC_Signalling::theInfo = {
	Ul_OL_PC_Signalling::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Tdd::itemsInfo[2] = {
	&ULTargetSIR::theInfo,
	&Ul_OL_PC_Signalling::theInfo,
};
const void *Tdd::itemsPres[2] = {
	0,
	1,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *ULDPCHPowerControlInfor6::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ULDPCHPowerControlInfor6::Info ULDPCHPowerControlInfor6::theInfo = {
	ULDPCHPowerControlInfor6::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};


const void *Present::itemsInfo[5] = {
	&NumberOfDPDCH::theInfo,
	&SpreadingFactor::theInfo,
	&Tfci_Existence::theInfo,
	&NumberOfFBIBits::theInfo,
	&PuncturingLimit::theInfo,
};
const void *Present::itemsPres[5] = {
	0,
	1,
	1,
	0,
	1,
};
const Present::Info Present::theInfo = {
	Present::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 2, 0
};


const void *NotPresent::itemsInfo[2] = {
	&Tfci_Existence::theInfo,
	&NumberOfFBIBits::theInfo,
};
const void *NotPresent::itemsPres[2] = {
	1,
	0,
};
const NotPresent::Info NotPresent::theInfo = {
	NotPresent::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *DpdchPresence::choicesInfo[2] = {
	&Present::theInfo,
	&NotPresent::theInfo,
};
const DpdchPresence::Info DpdchPresence::theInfo = {
	DpdchPresence::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Fdd::itemsInfo[3] = {
	&ScramblingCodeType::theInfo,
	&ULScramblingCode::theInfo,
	&DpdchPresence::theInfo,
};
const void *Fdd::itemsPres[3] = {
	1,
	1,
	0,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};

const void *Tdd::itemsInfo[3] = {
	&ULTimingAdvanceControlr4::theInfo,
	&ULCCTrCHListr4::theInfo,
	&ULCCTrCHListToRemove::theInfo,
};
const void *Tdd::itemsPres[3] = {
	0,
	0,
	0,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULDPCHInfor6::itemsInfo[2] = {
	&ULDPCHPowerControlInfor6::theInfo,
	&ModeSpecificInfo::theInfo,
};
const void *ULDPCHInfor6::itemsPres[2] = {
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


const void *Present::itemsInfo[6] = {
	&NumberOfDPDCH::theInfo,
	&SpreadingFactor::theInfo,
	&Tfci_Existence::theInfo,
	&NumberOfFBIBits::theInfo,
	&NumberOfTPCBits::theInfo,
	&PuncturingLimit::theInfo,
};
const void *Present::itemsPres[6] = {
	0,
	1,
	1,
	0,
	0,
	1,
};
const Present::Info Present::theInfo = {
	Present::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 3, 0
};


const void *NotPresent::itemsInfo[3] = {
	&Tfci_Existence::theInfo,
	&NumberOfFBIBits::theInfo,
	&NumberOfTPCBits::theInfo,
};
const void *NotPresent::itemsPres[3] = {
	1,
	0,
	0,
};
const NotPresent::Info NotPresent::theInfo = {
	NotPresent::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *DpdchPresence::choicesInfo[2] = {
	&Present::theInfo,
	&NotPresent::theInfo,
};
const DpdchPresence::Info DpdchPresence::theInfo = {
	DpdchPresence::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Fdd::itemsInfo[3] = {
	&ScramblingCodeType::theInfo,
	&ULScramblingCode::theInfo,
	&DpdchPresence::theInfo,
};
const void *Fdd::itemsPres[3] = {
	1,
	1,
	0,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};


const void *Tdd384::itemsInfo[3] = {
	&ULTimingAdvance::theInfo,
	&EXTULTimingAdvance::theInfo,
	&ActivationTime::theInfo,
};
const void *Tdd384::itemsPres[3] = {
	0,
	0,
	0,
};
const Tdd384::Info Tdd384::theInfo = {
	Tdd384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *Tdd768::itemsInfo[2] = {
	&EXTULTimingAdvance::theInfo,
	&ActivationTime::theInfo,
};
const void *Tdd768::itemsPres[2] = {
	0,
	0,
};
const Tdd768::Info Tdd768::theInfo = {
	Tdd768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *Tdd128::itemsInfo[2] = {
	&ULSynchronisationParametersr4::theInfo,
	&SynchronisationParametersr4::theInfo,
};
const void *Tdd128::itemsPres[2] = {
	0,
	0,
};
const Tdd128::Info Tdd128::theInfo = {
	Tdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *TddOption::choicesInfo[3] = {
	&Tdd384::theInfo,
	&Tdd768::theInfo,
	&Tdd128::theInfo,
};
const TddOption::Info TddOption::theInfo = {
	TddOption::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *Enabled::itemsInfo[1] = {
	&TddOption::theInfo,
};
const void *Enabled::itemsPres[1] = {
	1,
};
const Enabled::Info Enabled::theInfo = {
	Enabled::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ULTimingAdvanceControlr7::choicesInfo[2] = {
	&Disabled::theInfo,
	&Enabled::theInfo,
};
const ULTimingAdvanceControlr7::Info ULTimingAdvanceControlr7::theInfo = {
	ULTimingAdvanceControlr7::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Tdd::itemsInfo[3] = {
	&ULTimingAdvanceControlr7::theInfo,
	&ULCCTrCHListr7::theInfo,
	&ULCCTrCHListToRemove::theInfo,
};
const void *Tdd::itemsPres[3] = {
	0,
	0,
	0,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULDPCHInfor7::itemsInfo[2] = {
	&ULDPCHPowerControlInfor7::theInfo,
	&ModeSpecificInfo::theInfo,
};
const void *ULDPCHInfor7::itemsPres[2] = {
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
const void *ULDPCHPowerControlInfoPostFDD::itemsPres[3] = {
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
const void *ULDPCHInfoPostFDD::itemsPres[4] = {
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
const void *ULDPCHPowerControlInfoPostTDD::itemsPres[2] = {
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
const void *ULDPCHInfoPostTDD::itemsPres[3] = {
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
const void *ULDPCHPowerControlInfoPostTDDLCRr4::itemsPres[1] = {
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


const void *Enabled::itemsInfo[2] = {
	&ULSynchronisationParametersr4::theInfo,
	&SynchronisationParametersr4::theInfo,
};
const void *Enabled::itemsPres[2] = {
	0,
	0,
};
const Enabled::Info Enabled::theInfo = {
	Enabled::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *ULTimingAdvanceControlLCRr4::choicesInfo[2] = {
	&Disabled::theInfo,
	&Enabled::theInfo,
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
const void *ULDPCHInfoPostTDDLCRr4::itemsPres[3] = {
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


const void *Tdd::itemsInfo[1] = {
	&NonScheduledTransGrantInfoTDDext::theInfo,
};
const void *Tdd::itemsPres[1] = {
	0,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ULEDCHInformationext::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
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
	&mac_es_e_resetIndicator::theInfo,
	&EDPCCHInfo::theInfo,
	&EDPDCHInfo::theInfo,
	&EDPDCHSchedulingTransmConfiguration::theInfo,
};
const void *ULEDCHInformationr6::itemsPres[4] = {
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


const void *Fdd::itemsInfo[4] = {
	&EDPCCHInfor7::theInfo,
	&EDPDCHInfor7::theInfo,
	&EDPDCHSchedulingTransmConfiguration::theInfo,
	&UL16QAMSettings::theInfo,
};
const void *Fdd::itemsPres[4] = {
	0,
	0,
	0,
	0,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 4, 0
};

const void *Tdd::itemsInfo[3] = {
	&ERUCCHInfo::theInfo,
	&EPUCHInfo::theInfo,
	&NonScheduledTransGrantInfoTDD::theInfo,
};
const void *Tdd::itemsPres[3] = {
	0,
	0,
	0,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ULEDCHInformationr7::itemsInfo[2] = {
	&mac_es_e_resetIndicator::theInfo,
	&ModeSpecificInfo::theInfo,
};
const void *ULEDCHInformationr7::itemsPres[2] = {
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
	&Doppler1stOrder::theInfo,
	&DopplerUncertainty::theInfo,
};
const void *ExtraDopplerInfo::itemsPres[2] = {
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
	&Azimuth::theInfo,
	&Elevation::theInfo,
};
const void *AzimuthAndElevation::itemsPres[2] = {
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
	&Doppler0thOrder::theInfo,
	&ExtraDopplerInfo::theInfo,
	&CodePhase::theInfo,
	&IntegerCodePhase::theInfo,
	&Gps_BitNumber::theInfo,
	&CodePhaseSearchWindow::theInfo,
	&AzimuthAndElevation::theInfo,
};
const void *AcquisitionSatInfo::itemsPres[8] = {
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
	&DataID::theInfo,
	&SatID::theInfo,
	&E::theInfo,
	&T_oa::theInfo,
	&DeltaI::theInfo,
	&OmegaDot::theInfo,
	&SatHealth::theInfo,
	&A_Sqrt::theInfo,
	&Omega0::theInfo,
	&M0::theInfo,
	&Omega::theInfo,
	&Af0::theInfo,
	&Af1::theInfo,
};
const void *AlmanacSatInfo::itemsPres[13] = {
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
	&SbasAlmDataID::theInfo,
	&SvID::theInfo,
	&SbasAlmHealth::theInfo,
	&SbasAlmXg::theInfo,
	&SbasAlmYg::theInfo,
	&SbasAlmZg::theInfo,
	&SbasAlmXgdot::theInfo,
	&SbasAlmYgDot::theInfo,
	&SbasAlmZgDot::theInfo,
	&SbasAlmTo::theInfo,
};
const void *GANSSSATInfoAlmanacSBASecef::itemsPres[10] = {
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
const void *ALMECEFsbasAlmanacSet::itemsPres[1] = {
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
	&GloAlmNA::theInfo,
	&GloAlmnA::theInfo,
	&GloAlmHA::theInfo,
	&GloAlmLambdaA::theInfo,
	&GloAlmTlambdaA::theInfo,
	&GloAlmDeltaIA::theInfo,
	&GloAkmDeltaTA::theInfo,
	&GloAlmDeltaTdotA::theInfo,
	&GloAlmEpsilonA::theInfo,
	&GloAlmOmegaA::theInfo,
	&GloAlmTauA::theInfo,
	&GloAlmCA::theInfo,
	&GloAlmMA::theInfo,
};
const void *GANSSSATInfoAlmanacGLOkp::itemsPres[13] = {
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
const void *ALMGlonassAlmanacSet::itemsPres[1] = {
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
	&SvId::theInfo,
	&Ganss_alm_e::theInfo,
	&Ganss_delta_I_alm::theInfo,
	&Ganss_omegadot_alm::theInfo,
	&Ganss_svhealth_alm::theInfo,
	&Ganss_delta_a_sqrt_alm::theInfo,
	&Ganss_omegazero_alm::theInfo,
	&Ganss_m_zero_alm::theInfo,
	&Ganss_omega_alm::theInfo,
	&Ganss_af_zero_alm::theInfo,
	&Ganss_af_one_alm::theInfo,
};
const void *GANSSSATInfoAlmanacKp::itemsPres[11] = {
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
	&T_oa::theInfo,
	&Iod_a::theInfo,
	&GANSSSATInfoAlmanacKpList::theInfo,
};
const void *ALMkeplerianParameters::itemsPres[3] = {
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
	&SvID::theInfo,
	&MidiAlmE::theInfo,
	&MidiAlmDeltaI::theInfo,
	&MidiAlmOmegaDot::theInfo,
	&MidiAlmSqrtA::theInfo,
	&MidiAlmOmega0::theInfo,
	&MidiAlmOmega::theInfo,
	&MidiAlmMo::theInfo,
	&MidiAlmaf0::theInfo,
	&MidiAlmaf1::theInfo,
	&MidiAlmL1Health::theInfo,
	&MidiAlmL2Health::theInfo,
	&MidiAlmL5Health::theInfo,
};
const void *GANSSSATInfoAlmanacMIDIkp::itemsPres[13] = {
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
	&T_oa::theInfo,
	&GANSSSATInfoAlmanacMIDIkpList::theInfo,
};
const void *ALMMidiAlmanacSet::itemsPres[2] = {
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
	&SvID::theInfo,
	&NavAlmE::theInfo,
	&NavAlmDeltaI::theInfo,
	&NavAlmOMEGADOT::theInfo,
	&NavAlmSVHealth::theInfo,
	&NavAlmSqrtA::theInfo,
	&NavAlmOMEGAo::theInfo,
	&NavAlmOmega::theInfo,
	&NavAlmMo::theInfo,
	&NavAlmaf0::theInfo,
	&NavAlmaf1::theInfo,
};
const void *GANSSSATInfoAlmanacNAVkp::itemsPres[11] = {
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
	&T_oa::theInfo,
	&GANSSSATInfoAlmanacNAVkpList::theInfo,
};
const void *ALMNAVKeplerianSet::itemsPres[2] = {
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
	&SvID::theInfo,
	&RedAlmDeltaA::theInfo,
	&RedAlmOmega0::theInfo,
	&RedAlmPhi0::theInfo,
	&RedAlmL1Health::theInfo,
	&RedAlmL2Health::theInfo,
	&RedAlmL5Health::theInfo,
};
const void *GANSSSATInfoAlmanacREDkp::itemsPres[7] = {
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
	&T_oa::theInfo,
	&GANSSSATInfoAlmanacREDkpList::theInfo,
};
const void *ALMReducedKeplerianSet::itemsPres[2] = {
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
	&SvID::theInfo,
	&SignalsAvailable::theInfo,
};
const void *AuxInfoGANSSID1element::itemsPres[2] = {
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
	&SvID::theInfo,
	&SignalsAvailable::theInfo,
	&ChannelNumber::theInfo,
};
const void *AuxInfoGANSSID3element::itemsPres[3] = {
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
const void *BLERMeasurementResults::itemsPres[2] = {
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
	&VerifiedBSIC::theInfo,
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
	&BurstStart::theInfo,
	&BurstLength::theInfo,
	&BurstFreq::theInfo,
};
const void *BurstModeParameters::itemsPres[3] = {
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
const void *Event1a::itemsPres[7] = {
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
const void *Event1b::itemsPres[4] = {
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
const void *Event1c::itemsPres[3] = {
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
const void *Event1e::itemsPres[2] = {
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
const void *Event1f::itemsPres[2] = {
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
	&E1d::theInfo,
	&Event1e::theInfo,
	&Event1f::theInfo,
	&E1g::theInfo,
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
const void *IntraFreqEventCriteria::itemsPres[4] = {
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
const void *IntraFreqReportingCriteria::itemsPres[1] = {
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
const void *PeriodicalReportingCriteria::itemsPres[2] = {
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
const void *ForbiddenAffectCellLCRr4::itemsPres[1] = {
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
const void *Event1aLCRr4::itemsPres[7] = {
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
const void *Event1bLCRr4::itemsPres[4] = {
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
	&E1d::theInfo,
	&Event1e::theInfo,
	&Event1f::theInfo,
	&E1g::theInfo,
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
const void *IntraFreqEventCriteriaLCRr4::itemsPres[4] = {
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
const void *IntraFreqReportingCriteriaLCRr4::itemsPres[1] = {
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
	&Measurement_Occasion_Coeff::theInfo,
	&Measurement_Occasion_Offset::theInfo,
	&Measurement_Occasion_Length::theInfo,
	&TimeslotBitmap::theInfo,
};
const void *MeasurementOccasionPatternParameter::itemsPres[4] = {
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
	&PatternIdentifier::theInfo,
	&statusFlag::theInfo,
	&MeasurementPurpose::theInfo,
	&MeasurementOccasionPatternParameter::theInfo,
};
const void *CellDCHMeasOccasionPatternLCR::itemsPres[4] = {
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
	&CellDCHMeasOccasionSequenceList::theInfo,
};
const void *CellDCHMeasOccasionInfoTDD128r9::itemsPres[1] = {
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
	&Accuracy40::theInfo,
	&Accuracy256::theInfo,
	&Accuracy2560::theInfo,
};
const ReferenceTimeDifferenceToCell::Info ReferenceTimeDifferenceToCell::theInfo = {
	ReferenceTimeDifferenceToCell::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};



const void *Fdd::itemsInfo[4] = {
	&PrimaryCPICHInfo::theInfo,
	&PrimaryCPICHTXPower::theInfo,
	&ReadSFN_Indicator::theInfo,
	&Tx_DiversityIndicator::theInfo,
};
const void *Fdd::itemsPres[4] = {
	0,
	0,
	1,
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
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
const void *TimeslotInfo::itemsPres[2] = {
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



const void *Tdd::itemsInfo[4] = {
	&PrimaryCCPCHInfo::theInfo,
	&PrimaryCCPCHTXPower::theInfo,
	&TimeslotInfoList::theInfo,
	&ReadSFN_Indicator::theInfo,
};
const void *Tdd::itemsPres[4] = {
	1,
	0,
	0,
	1,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *CellInfo::itemsInfo[3] = {
	&CellIndividualOffset::theInfo,
	&ReferenceTimeDifferenceToCell::theInfo,
	&ModeSpecificInfo::theInfo,
};
const void *CellInfo::itemsPres[3] = {
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



const void *Fdd::itemsInfo[4] = {
	&PrimaryCPICHInfo::theInfo,
	&PrimaryCPICHTXPower::theInfo,
	&ReadSFN_Indicator::theInfo,
	&Tx_DiversityIndicator::theInfo,
};
const void *Fdd::itemsPres[4] = {
	0,
	0,
	1,
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
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
const void *TimeslotInfoLCRr4::itemsPres[1] = {
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
	&Tdd384::theInfo,
	&Tdd128::theInfo,
};
const TimeslotInfoListr4::Info TimeslotInfoListr4::theInfo = {
	TimeslotInfoListr4::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};


const void *Tdd::itemsInfo[4] = {
	&PrimaryCCPCHInfor4::theInfo,
	&PrimaryCCPCHTXPower::theInfo,
	&TimeslotInfoListr4::theInfo,
	&ReadSFN_Indicator::theInfo,
};
const void *Tdd::itemsPres[4] = {
	1,
	0,
	0,
	1,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *CellInfor4::itemsInfo[3] = {
	&CellIndividualOffset::theInfo,
	&ReferenceTimeDifferenceToCell::theInfo,
	&ModeSpecificInfo::theInfo,
};
const void *CellInfor4::itemsPres[3] = {
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
	&NotUsed::theInfo,
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
const void *HCSCellReselectInformationRSCP::itemsPres[1] = {
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
const void *HCSNeighbouringCellInformationRSCP::itemsPres[3] = {
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

const void *Fdd::itemsInfo[2] = {
	&QQualMin::theInfo,
	&QRxlevMin::theInfo,
};
const void *Fdd::itemsPres[2] = {
	0,
	0,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *Tdd::itemsInfo[1] = {
	&QRxlevMin::theInfo,
};
const void *Tdd::itemsPres[1] = {
	0,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *Gsm::itemsInfo[1] = {
	&QRxlevMin::theInfo,
};
const void *Gsm::itemsPres[1] = {
	0,
};
const Gsm::Info Gsm::theInfo = {
	Gsm::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ModeSpecificInfo::choicesInfo[3] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
	&Gsm::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
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
	&ModeSpecificInfo::theInfo,
};
const void *CellSelectReselectInfoMCRSCP::itemsPres[4] = {
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
const void *CellInfoLCRr8ext::itemsPres[1] = {
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



const void *Fdd::itemsInfo[4] = {
	&PrimaryCPICHInfo::theInfo,
	&PrimaryCPICHTXPower::theInfo,
	&ReadSFN_Indicator::theInfo,
	&Tx_DiversityIndicator::theInfo,
};
const void *Fdd::itemsPres[4] = {
	0,
	0,
	1,
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
};


const void *Tdd::itemsInfo[4] = {
	&PrimaryCCPCHInfor4::theInfo,
	&PrimaryCCPCHTXPower::theInfo,
	&TimeslotInfoListr4::theInfo,
	&ReadSFN_Indicator::theInfo,
};
const void *Tdd::itemsPres[4] = {
	1,
	0,
	0,
	1,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *CellInfor9::itemsInfo[4] = {
	&CellIndividualOffset::theInfo,
	&ReferenceTimeDifferenceToCell::theInfo,
	&ModeSpecificInfo::theInfo,
	&CellSelectReselectInfoMCRSCP::theInfo,
};
const void *CellInfor9::itemsPres[4] = {
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



const void *Fdd::itemsInfo[4] = {
	&PrimaryCPICHInfo::theInfo,
	&PrimaryCPICHTXPower::theInfo,
	&ReadSFN_Indicator::theInfo,
	&Tx_DiversityIndicator::theInfo,
};
const void *Fdd::itemsPres[4] = {
	0,
	0,
	1,
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
};


const void *Tdd::itemsInfo[4] = {
	&PrimaryCCPCHInfo::theInfo,
	&PrimaryCCPCHTXPower::theInfo,
	&TimeslotInfoList::theInfo,
	&ReadSFN_Indicator::theInfo,
};
const void *Tdd::itemsPres[4] = {
	1,
	0,
	0,
	1,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Fdd::itemsInfo[2] = {
	&QQualMin::theInfo,
	&QRxlevMin::theInfo,
};
const void *Fdd::itemsPres[2] = {
	0,
	0,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *Tdd::itemsInfo[1] = {
	&QRxlevMin::theInfo,
};
const void *Tdd::itemsPres[1] = {
	0,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *Gsm::itemsInfo[1] = {
	&QRxlevMin::theInfo,
};
const void *Gsm::itemsPres[1] = {
	0,
};
const Gsm::Info Gsm::theInfo = {
	Gsm::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ModeSpecificInfo::choicesInfo[3] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
	&Gsm::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *CellSelectReselectInfoSIB1112RSCP::itemsInfo[3] = {
	&QOffsetSN::theInfo,
	&MaxAllowedULTXPower::theInfo,
	&ModeSpecificInfo::theInfo,
};
const void *CellSelectReselectInfoSIB1112RSCP::itemsPres[3] = {
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
	&ModeSpecificInfo::theInfo,
	&CellSelectReselectInfoSIB1112RSCP::theInfo,
};
const void *CellInfoSIRSCP::itemsPres[4] = {
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
	&ReadSFN_Indicator::theInfo,
	&CellSelectReselectInfoSIB1112RSCP::theInfo,
};
const void *CellInfoSIRSCPLCRr4::itemsPres[7] = {
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



const void *Fdd::itemsInfo[4] = {
	&PrimaryCPICHInfo::theInfo,
	&PrimaryCPICHTXPower::theInfo,
	&ReadSFN_Indicator::theInfo,
	&Tx_DiversityIndicator::theInfo,
};
const void *Fdd::itemsPres[4] = {
	0,
	0,
	1,
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
};


const void *Tdd::itemsInfo[4] = {
	&PrimaryCCPCHInfo::theInfo,
	&PrimaryCCPCHTXPower::theInfo,
	&TimeslotInfoList::theInfo,
	&ReadSFN_Indicator::theInfo,
};
const void *Tdd::itemsPres[4] = {
	1,
	0,
	0,
	1,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Fdd::itemsInfo[2] = {
	&QQualMin::theInfo,
	&QRxlevMin::theInfo,
};
const void *Fdd::itemsPres[2] = {
	0,
	0,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *Tdd::itemsInfo[1] = {
	&QRxlevMin::theInfo,
};
const void *Tdd::itemsPres[1] = {
	0,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *Gsm::itemsInfo[1] = {
	&QRxlevMin::theInfo,
};
const void *Gsm::itemsPres[1] = {
	0,
};
const Gsm::Info Gsm::theInfo = {
	Gsm::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ModeSpecificInfo::choicesInfo[3] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
	&Gsm::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
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
	&ModeSpecificInfo::theInfo,
};
const void *CellSelectReselectInfoSIB1112ECN0::itemsPres[4] = {
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
	&ModeSpecificInfo::theInfo,
	&CellSelectReselectInfoSIB1112ECN0::theInfo,
};
const void *CellInfoSIECN0::itemsPres[4] = {
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
	&ReadSFN_Indicator::theInfo,
	&CellSelectReselectInfoSIB1112ECN0::theInfo,
};
const void *CellInfoSIECN0LCRr4::itemsPres[7] = {
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



const void *Fdd::itemsInfo[4] = {
	&PrimaryCPICHInfo::theInfo,
	&PrimaryCPICHTXPower::theInfo,
	&ReadSFN_Indicator::theInfo,
	&Tx_DiversityIndicator::theInfo,
};
const void *Fdd::itemsPres[4] = {
	0,
	0,
	1,
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
};


const void *Tdd::itemsInfo[4] = {
	&PrimaryCCPCHInfo::theInfo,
	&PrimaryCCPCHTXPower::theInfo,
	&TimeslotInfoList::theInfo,
	&ReadSFN_Indicator::theInfo,
};
const void *Tdd::itemsPres[4] = {
	1,
	0,
	0,
	1,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Fdd::itemsInfo[2] = {
	&QQualMin::theInfo,
	&QRxlevMin::theInfo,
};
const void *Fdd::itemsPres[2] = {
	0,
	0,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *Tdd::itemsInfo[1] = {
	&QRxlevMin::theInfo,
};
const void *Tdd::itemsPres[1] = {
	0,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *Gsm::itemsInfo[1] = {
	&QRxlevMin::theInfo,
};
const void *Gsm::itemsPres[1] = {
	0,
};
const Gsm::Info Gsm::theInfo = {
	Gsm::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ModeSpecificInfo::choicesInfo[3] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
	&Gsm::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
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
	&ModeSpecificInfo::theInfo,
};
const void *CellSelectReselectInfoSIB1112HCSRSCP::itemsPres[4] = {
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
	&ModeSpecificInfo::theInfo,
	&CellSelectReselectInfoSIB1112HCSRSCP::theInfo,
};
const void *CellInfoSIHCSRSCP::itemsPres[4] = {
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
	&ReadSFN_Indicator::theInfo,
	&CellSelectReselectInfoSIB1112HCSRSCP::theInfo,
};
const void *CellInfoSIHCSRSCPLCRr4::itemsPres[7] = {
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



const void *Fdd::itemsInfo[4] = {
	&PrimaryCPICHInfo::theInfo,
	&PrimaryCPICHTXPower::theInfo,
	&ReadSFN_Indicator::theInfo,
	&Tx_DiversityIndicator::theInfo,
};
const void *Fdd::itemsPres[4] = {
	0,
	0,
	1,
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
};


const void *Tdd::itemsInfo[4] = {
	&PrimaryCCPCHInfo::theInfo,
	&PrimaryCCPCHTXPower::theInfo,
	&TimeslotInfoList::theInfo,
	&ReadSFN_Indicator::theInfo,
};
const void *Tdd::itemsPres[4] = {
	1,
	0,
	0,
	1,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
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
const void *TemporaryOffsetList::itemsPres[2] = {
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
	&NotUsed::theInfo,
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
const void *HCSCellReselectInformationECN0::itemsPres[1] = {
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
const void *HCSNeighbouringCellInformationECN0::itemsPres[3] = {
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

const void *Fdd::itemsInfo[2] = {
	&QQualMin::theInfo,
	&QRxlevMin::theInfo,
};
const void *Fdd::itemsPres[2] = {
	0,
	0,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *Tdd::itemsInfo[1] = {
	&QRxlevMin::theInfo,
};
const void *Tdd::itemsPres[1] = {
	0,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *Gsm::itemsInfo[1] = {
	&QRxlevMin::theInfo,
};
const void *Gsm::itemsPres[1] = {
	0,
};
const Gsm::Info Gsm::theInfo = {
	Gsm::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ModeSpecificInfo::choicesInfo[3] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
	&Gsm::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
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
	&ModeSpecificInfo::theInfo,
};
const void *CellSelectReselectInfoSIB1112HCSECN0::itemsPres[5] = {
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
	&ModeSpecificInfo::theInfo,
	&CellSelectReselectInfoSIB1112HCSECN0::theInfo,
};
const void *CellInfoSIHCSECN0::itemsPres[4] = {
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
	&ReadSFN_Indicator::theInfo,
	&CellSelectReselectInfoSIB1112HCSECN0::theInfo,
};
const void *CellInfoSIHCSECN0LCRr4::itemsPres[7] = {
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
	&CountC_SFN_High::theInfo,
	&Off::theInfo,
};
const void *CountCSFNFramedifference::itemsPres[2] = {
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


const void *Fdd::itemsInfo[2] = {
	&CountCSFNFramedifference::theInfo,
	&Tm::theInfo,
};
const void *Fdd::itemsPres[2] = {
	0,
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *Tdd::itemsInfo[1] = {
	&CountCSFNFramedifference::theInfo,
};
const void *Tdd::itemsPres[1] = {
	0,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *CellSynchronisationInfo::itemsInfo[1] = {
	&ModeSpecificInfo::theInfo,
};
const void *CellSynchronisationInfo::itemsPres[1] = {
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




const void *Fdd::itemsInfo[4] = {
	&PrimaryCPICHInfo::theInfo,
	&CPICHEcN0::theInfo,
	&CPICHRSCP::theInfo,
	&Pathloss::theInfo,
};
const void *Fdd::itemsPres[4] = {
	1,
	0,
	0,
	0,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 3, 0
};




const void *Tdd::itemsInfo[5] = {
	&CellParametersID::theInfo,
	&TGSN::theInfo,
	&PrimaryCCPCHRSCP::theInfo,
	&Pathloss::theInfo,
	&TimeslotISCPList::theInfo,
};
const void *Tdd::itemsPres[5] = {
	1,
	0,
	0,
	0,
	0,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 4, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
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
	&ModeSpecificInfo::theInfo,
};
const void *CellMeasuredResults::itemsPres[4] = {
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
const void *DeltaRSCPPerCell::itemsPres[1] = {
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

const void *Fdd::itemsInfo[5] = {
	&PrimaryCPICHInfo::theInfo,
	&CPICHEcN0::theInfo,
	&CPICHRSCP::theInfo,
	&DeltaRSCPPerCell::theInfo,
	&Pathloss::theInfo,
};
const void *Fdd::itemsPres[5] = {
	1,
	0,
	0,
	0,
	0,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 4, 0
};

const void *Tdd::itemsInfo[5] = {
	&CellParametersID::theInfo,
	&TGSN::theInfo,
	&PrimaryCCPCHRSCP::theInfo,
	&Pathloss::theInfo,
	&TimeslotISCPList::theInfo,
};
const void *Tdd::itemsPres[5] = {
	1,
	0,
	0,
	0,
	0,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 4, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *CellMeasuredResultsr9::itemsInfo[3] = {
	&CellIdentity::theInfo,
	&CellSynchronisationInfo::theInfo,
	&ModeSpecificInfo::theInfo,
};
const void *CellMeasuredResultsr9::itemsPres[3] = {
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
	&csgMemberIndication::theInfo,
};
const void *CellMeasuredResultsv920ext::itemsPres[2] = {
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
	&Fdd::theInfo,
	&Tdd::theInfo,
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
	&Fdd::theInfo,
	&Spare::theInfo,
};
const CellMeasurementEventResultsOnSecUlFreq::Info CellMeasurementEventResultsOnSecUlFreq::theInfo = {
	CellMeasurementEventResultsOnSecUlFreq::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};








const void *Fdd::itemsInfo[3] = {
	&Cpich_Ec_N0_reportingIndicator::theInfo,
	&Cpich_RSCP_reportingIndicator::theInfo,
	&Pathloss_reportingIndicator::theInfo,
};
const void *Fdd::itemsPres[3] = {
	1,
	1,
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};





const void *Tdd::itemsInfo[4] = {
	&TimeslotISCP_reportingIndicator::theInfo,
	&ProposedTGSN_ReportingRequired::theInfo,
	&PrimaryCCPCH_RSCP_reportingIndicator::theInfo,
	&Pathloss_reportingIndicator::theInfo,
};
const void *Tdd::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 0, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *CellReportingQuantities::itemsInfo[4] = {
	&SFNSFNOTDType::theInfo,
	&CellIdentity_reportingIndicator::theInfo,
	&CellSynchronisationInfoReportingIndicator::theInfo,
	&ModeSpecificInfo::theInfo,
};
const void *CellReportingQuantities::itemsPres[4] = {
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

const void *Fdd::itemsInfo[2] = {
	&QQualMin::theInfo,
	&QRxlevMin::theInfo,
};
const void *Fdd::itemsPres[2] = {
	0,
	0,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *Tdd::itemsInfo[1] = {
	&QRxlevMin::theInfo,
};
const void *Tdd::itemsPres[1] = {
	0,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *Gsm::itemsInfo[1] = {
	&QRxlevMin::theInfo,
};
const void *Gsm::itemsPres[1] = {
	0,
};
const Gsm::Info Gsm::theInfo = {
	Gsm::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ModeSpecificInfo::choicesInfo[3] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
	&Gsm::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
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
	&ModeSpecificInfo::theInfo,
};
const void *CellSelectReselectInfoSIB1112::itemsPres[5] = {
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
const void *CellSelectReselectInfov590ext::itemsPres[2] = {
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
const void *CellSelectReselectInfoPCHFACHv5b0ext::itemsPres[6] = {
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
const void *CellSelectReselectInfoTreselectionScalingv5c0ext::itemsPres[4] = {
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
const void *CellToReport::itemsPres[1] = {
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
	&CnavToc::theInfo,
	&CnavTop::theInfo,
	&CnavURA0::theInfo,
	&CnavURA1::theInfo,
	&CnavURA2::theInfo,
	&CnavAf2::theInfo,
	&CnavAf1::theInfo,
	&CnavAf0::theInfo,
	&CnavTgd::theInfo,
	&CnavISCl1cp::theInfo,
	&CnavISCl1cd::theInfo,
	&CnavISCl1ca::theInfo,
	&CnavISCl2c::theInfo,
	&CnavISCl5i5::theInfo,
	&CnavISCl5q5::theInfo,
};
const void *CNAVclockModel::itemsPres[15] = {
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


const void *Fdd::itemsInfo[2] = {
	&PrimaryCPICHInfo::theInfo,
	&NumberOfPSCs::theInfo,
};
const void *Fdd::itemsPres[2] = {
	1,
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};


const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *CSGCellInfo::itemsInfo[1] = {
	&ModeSpecificInfo::theInfo,
};
const void *CSGCellInfo::itemsPres[1] = {
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
const void *CSGInterFreqCellInfo::itemsPres[2] = {
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
	&uTRACSGProximityDetec::theInfo,
	&e_UTRACSGProximityDetec::theInfo,
};
const void *CSGProximityDetection::itemsPres[2] = {
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


const void *UTRA::itemsInfo[1] = {
	&FrequencyInfo::theInfo,
};
const void *UTRA::itemsPres[1] = {
	1,
};
const UTRA::Info UTRA::theInfo = {
	UTRA::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *E_UTRA::itemsInfo[1] = {
	&EARFCN::theInfo,
};
const void *E_UTRA::itemsPres[1] = {
	1,
};
const E_UTRA::Info E_UTRA::theInfo = {
	E_UTRA::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *RadioAccessTechnology::choicesInfo[2] = {
	&UTRA::theInfo,
	&E_UTRA::theInfo,
};
const RadioAccessTechnology::Info RadioAccessTechnology::theInfo = {
	RadioAccessTechnology::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *CSGProximityIndication::itemsInfo[2] = {
	&cSGproximityInd::theInfo,
	&RadioAccessTechnology::theInfo,
};
const void *CSGProximityIndication::itemsPres[2] = {
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
	&Data_bits::theInfo,
};
const void *DataBitAssistance::itemsPres[2] = {
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
	&SatID::theInfo,
	&DataBitAssistanceSgnList::theInfo,
};
const void *DataBitAssistanceSat::itemsPres[2] = {
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
	&B1::theInfo,
	&B2::theInfo,
};
const void *DeltaUT1::itemsPres[2] = {
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
	&SatId::theInfo,
	&Iode_dganss::theInfo,
	&UDRE::theInfo,
};
const void *DGANSSSignalInformation::itemsPres[3] = {
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
const void *DGANSSInfo::itemsPres[3] = {
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
	&SatId::theInfo,
	&Iode_dganss::theInfo,
	&UDRE::theInfo,
	&UDREGrowthRate::theInfo,
	&UDREValidityTime::theInfo,
};
const void *DGANSSSignalInformationr9::itemsPres[5] = {
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
const void *DGANSSInfor9::itemsPres[3] = {
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
const void *DGANSSSignalInformationv920ext::itemsPres[2] = {
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
const void *DGANSSInfov920ext::itemsPres[1] = {
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
const void *DGPSCorrectionSatInfo::itemsPres[9] = {
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

const void *DGPSCorrectionSatInfor9::itemsInfo[7] = {
	&SatID::theInfo,
	&IODE::theInfo,
	&UDRE::theInfo,
	&PRC::theInfo,
	&RRC::theInfo,
	&UDREGrowthRate::theInfo,
	&UDREValidityTime::theInfo,
};
const void *DGPSCorrectionSatInfor9::itemsPres[7] = {
	1,
	1,
	1,
	1,
	1,
	0,
	0,
};
const DGPSCorrectionSatInfor9::Info DGPSCorrectionSatInfor9::theInfo = {
	DGPSCorrectionSatInfor9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	7, 2, 0
};

const void *DGPSCorrectionSatInfov920ext::itemsInfo[2] = {
	&UDREGrowthRate::theInfo,
	&UDREValidityTime::theInfo,
};
const void *DGPSCorrectionSatInfov920ext::itemsPres[2] = {
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








const void *EllipsoidPoint::itemsInfo[3] = {
	&latitudeSign::theInfo,
	&Latitude::theInfo,
	&Longitude::theInfo,
};
const void *EllipsoidPoint::itemsPres[3] = {
	1,
	1,
	1,
};
const EllipsoidPoint::Info EllipsoidPoint::theInfo = {
	EllipsoidPoint::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};






const void *EllipsoidPointAltitude::itemsInfo[5] = {
	&latitudeSign::theInfo,
	&Latitude::theInfo,
	&Longitude::theInfo,
	&altitudeDirection::theInfo,
	&Altitude::theInfo,
};
const void *EllipsoidPointAltitude::itemsPres[5] = {
	1,
	1,
	1,
	1,
	1,
};
const EllipsoidPointAltitude::Info EllipsoidPointAltitude::theInfo = {
	EllipsoidPointAltitude::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 0, 0
};











const void *EllipsoidPointAltitudeEllipsoide::itemsInfo[10] = {
	&latitudeSign::theInfo,
	&Latitude::theInfo,
	&Longitude::theInfo,
	&altitudeDirection::theInfo,
	&Altitude::theInfo,
	&UncertaintySemiMajor::theInfo,
	&UncertaintySemiMinor::theInfo,
	&OrientationMajorAxis::theInfo,
	&UncertaintyAltitude::theInfo,
	&Confidence::theInfo,
};
const void *EllipsoidPointAltitudeEllipsoide::itemsPres[10] = {
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
const EllipsoidPointAltitudeEllipsoide::Info EllipsoidPointAltitudeEllipsoide::theInfo = {
	EllipsoidPointAltitudeEllipsoide::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	10, 0, 0
};





const void *EllipsoidPointUncertCircle::itemsInfo[4] = {
	&latitudeSign::theInfo,
	&Latitude::theInfo,
	&Longitude::theInfo,
	&UncertaintyCode::theInfo,
};
const void *EllipsoidPointUncertCircle::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const EllipsoidPointUncertCircle::Info EllipsoidPointUncertCircle::theInfo = {
	EllipsoidPointUncertCircle::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 0, 0
};








const void *EllipsoidPointUncertEllipse::itemsInfo[7] = {
	&latitudeSign::theInfo,
	&Latitude::theInfo,
	&Longitude::theInfo,
	&UncertaintySemiMajor::theInfo,
	&UncertaintySemiMinor::theInfo,
	&OrientationMajorAxis::theInfo,
	&Confidence::theInfo,
};
const void *EllipsoidPointUncertEllipse::itemsPres[7] = {
	1,
	1,
	1,
	1,
	1,
	1,
	1,
};
const EllipsoidPointUncertEllipse::Info EllipsoidPointUncertEllipse::theInfo = {
	EllipsoidPointUncertEllipse::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	7, 0, 0
};



const void *EutraEventResult::itemsInfo[2] = {
	&EARFCN::theInfo,
	&ReportedCells::theInfo,
};
const void *EutraEventResult::itemsPres[2] = {
	1,
	1,
};
const EutraEventResult::Info EutraEventResult::theInfo = {
	EutraEventResult::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};



const void *EUTRAEventResults::itemsInfo[2] = {
	&EventIDInterRAT::theInfo,
	&EutraEventResultList::theInfo,
};
const void *EUTRAEventResults::itemsPres[2] = {
	1,
	1,
};
const EUTRAEventResults::Info EUTRAEventResults::theInfo = {
	EUTRAEventResults::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};







const void *EUTRAFrequencyAndPriorityInfo::itemsInfo[8] = {
	&EARFCN::theInfo,
	&EUTRAMeasurementBandwidth::theInfo,
	&Priority::theInfo,
	&QRxLevMinEUTRA::theInfo,
	&ThreshXhigh::theInfo,
	&ThreshXlow::theInfo,
	&EUTRABlacklistedCellPerFreqList::theInfo,
	&EutraDetection::theInfo,
};
const void *EUTRAFrequencyAndPriorityInfo::itemsPres[8] = {
	1,
	0,
	1,
	1,
	1,
	1,
	0,
	1,
};
const EUTRAFrequencyAndPriorityInfo::Info EUTRAFrequencyAndPriorityInfo::theInfo = {
	EUTRAFrequencyAndPriorityInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	8, 2, 0
};




const void *EUTRAFrequencyAndPriorityInfov920ext::itemsInfo[3] = {
	&QqualMinEUTRA::theInfo,
	&ThreshXhigh2::theInfo,
	&ThreshXlow2::theInfo,
};
const void *EUTRAFrequencyAndPriorityInfov920ext::itemsPres[3] = {
	0,
	0,
	0,
};
const EUTRAFrequencyAndPriorityInfov920ext::Info EUTRAFrequencyAndPriorityInfov920ext::theInfo = {
	EUTRAFrequencyAndPriorityInfov920ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};






const void *EUTRAFrequencyRemoval::choicesInfo[3] = {
	&RemoveAllFrequencies::theInfo,
	&RemoveSomeFrequencies::theInfo,
	&RemoveNoFrequencies::theInfo,
};
const EUTRAFrequencyRemoval::Info EUTRAFrequencyRemoval::theInfo = {
	EUTRAFrequencyRemoval::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *EUTRAFrequencyInfo::itemsInfo[3] = {
	&EARFCN::theInfo,
	&EUTRAMeasurementBandwidth::theInfo,
	&EUTRABlacklistedCellPerFreqList::theInfo,
};
const void *EUTRAFrequencyInfo::itemsPres[3] = {
	1,
	0,
	0,
};
const EUTRAFrequencyInfo::Info EUTRAFrequencyInfo::theInfo = {
	EUTRAFrequencyInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};


const void *EUTRAFrequencyList::itemsInfo[2] = {
	&EUTRAFrequencyRemoval::theInfo,
	&EUTRAFrequencyInfoList::theInfo,
};
const void *EUTRAFrequencyList::itemsPres[2] = {
	1,
	0,
};
const EUTRAFrequencyList::Info EUTRAFrequencyList::theInfo = {
	EUTRAFrequencyList::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *EUTRASIAcquisition::itemsInfo[2] = {
	&EARFCN::theInfo,
	&EUTRAPhysicalCellIdentity::theInfo,
};
const void *EUTRASIAcquisition::itemsPres[2] = {
	1,
	1,
};
const EUTRASIAcquisition::Info EUTRASIAcquisition::theInfo = {
	EUTRASIAcquisition::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *EUTRAFrequencyListr9::itemsInfo[3] = {
	&EUTRAFrequencyRemoval::theInfo,
	&EUTRAFrequencyInfoList::theInfo,
	&EUTRASIAcquisition::theInfo,
};
const void *EUTRAFrequencyListr9::itemsPres[3] = {
	1,
	0,
	0,
};
const EUTRAFrequencyListr9::Info EUTRAFrequencyListr9::theInfo = {
	EUTRAFrequencyListr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};



const void *EUTRAMeasuredCells::itemsInfo[3] = {
	&EUTRAPhysicalCellIdentity::theInfo,
	&RSRP::theInfo,
	&RSRQ::theInfo,
};
const void *EUTRAMeasuredCells::itemsPres[3] = {
	1,
	0,
	0,
};
const EUTRAMeasuredCells::Info EUTRAMeasuredCells::theInfo = {
	EUTRAMeasuredCells::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};


const void *EutraMeasuredResult::itemsInfo[2] = {
	&EARFCN::theInfo,
	&MeasuredEUTRACells::theInfo,
};
const void *EutraMeasuredResult::itemsPres[2] = {
	1,
	1,
};
const EutraMeasuredResult::Info EutraMeasuredResult::theInfo = {
	EutraMeasuredResult::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};


const void *EUTRAMeasuredResults::itemsInfo[1] = {
	&EutraMeasuredResultList::theInfo,
};
const void *EUTRAMeasuredResults::itemsPres[1] = {
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



const void *CgiInfo::itemsInfo[3] = {
	&PLMNIdentity::theInfo,
	&CellIdentity::theInfo,
	&TrackingAreaCode::theInfo,
};
const void *CgiInfo::itemsPres[3] = {
	1,
	1,
	1,
};
const CgiInfo::Info CgiInfo::theInfo = {
	CgiInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};


const void *EUTRASIacquisitionResults::itemsInfo[3] = {
	&CgiInfo::theInfo,
	&CSGIdentity::theInfo,
	&csgMemberIndication::theInfo,
};
const void *EUTRASIacquisitionResults::itemsPres[3] = {
	1,
	0,
	0,
};
const EUTRASIacquisitionResults::Info EUTRASIacquisitionResults::theInfo = {
	EUTRASIacquisitionResults::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *EUTRAMeasuredCellsv920ext::itemsInfo[1] = {
	&EUTRASIacquisitionResults::theInfo,
};
const void *EUTRAMeasuredCellsv920ext::itemsPres[1] = {
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
	&MeasuredEUTRACells_v920ext::theInfo,
};
const void *EutraMeasuredResultv920ext::itemsPres[1] = {
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
const void *EUTRAMeasuredResultsv920ext::itemsPres[1] = {
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

const void *ForbiddenAffectCellr4::choicesInfo[2] = {
	&PrimaryCPICHInfo::theInfo,
	&PrimaryCCPCHInfor4::theInfo,
};
const ForbiddenAffectCellr4::Info ForbiddenAffectCellr4::theInfo = {
	ForbiddenAffectCellr4::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};


const void *Event1ar4::itemsInfo[7] = {
	&TriggeringCondition2::theInfo,
	&ReportingRange::theInfo,
	&ForbiddenAffectCellListr4::theInfo,
	&W::theInfo,
	&ReportDeactivationThreshold::theInfo,
	&ReportingAmount::theInfo,
	&ReportingInterval::theInfo,
};
const void *Event1ar4::itemsPres[7] = {
	1,
	1,
	0,
	1,
	1,
	1,
	1,
};
const Event1ar4::Info Event1ar4::theInfo = {
	Event1ar4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	7, 1, 0
};

const void *ForbiddenAffectCellOnSecULFreq::itemsInfo[1] = {
	&PrimaryCPICHInfo::theInfo,
};
const void *ForbiddenAffectCellOnSecULFreq::itemsPres[1] = {
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


const void *Event1aOnSecUlFreqr9::itemsInfo[7] = {
	&TriggeringCondition2::theInfo,
	&ReportingRange::theInfo,
	&ForbiddenAffectCellListOnSecULFreq::theInfo,
	&W::theInfo,
	&ReportDeactivationThreshold::theInfo,
	&ReportingAmount::theInfo,
	&ReportingInterval::theInfo,
};
const void *Event1aOnSecUlFreqr9::itemsPres[7] = {
	1,
	1,
	0,
	1,
	1,
	1,
	1,
};
const Event1aOnSecUlFreqr9::Info Event1aOnSecUlFreqr9::theInfo = {
	Event1aOnSecUlFreqr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	7, 1, 0
};

const void *Event1br4::itemsInfo[4] = {
	&TriggeringCondition1::theInfo,
	&ReportingRange::theInfo,
	&ForbiddenAffectCellListr4::theInfo,
	&W::theInfo,
};
const void *Event1br4::itemsPres[4] = {
	1,
	1,
	0,
	1,
};
const Event1br4::Info Event1br4::theInfo = {
	Event1br4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 1, 0
};

const void *PeriodicReportingInfo1b::itemsInfo[2] = {
	&ReportingAmount::theInfo,
	&ReportingInterval::theInfo,
};
const void *PeriodicReportingInfo1b::itemsPres[2] = {
	1,
	1,
};
const PeriodicReportingInfo1b::Info PeriodicReportingInfo1b::theInfo = {
	PeriodicReportingInfo1b::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *Event1br7::itemsInfo[5] = {
	&TriggeringCondition1::theInfo,
	&ReportingRange::theInfo,
	&ForbiddenAffectCellListr4::theInfo,
	&W::theInfo,
	&PeriodicReportingInfo1b::theInfo,
};
const void *Event1br7::itemsPres[5] = {
	1,
	1,
	0,
	1,
	0,
};
const Event1br7::Info Event1br7::theInfo = {
	Event1br7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 2, 0
};

const void *Event1bOnSecUlFreqr9::itemsInfo[5] = {
	&TriggeringCondition1::theInfo,
	&ReportingRange::theInfo,
	&ForbiddenAffectCellListOnSecULFreq::theInfo,
	&W::theInfo,
	&PeriodicReportingInfo1b::theInfo,
};
const void *Event1bOnSecUlFreqr9::itemsPres[5] = {
	1,
	1,
	0,
	1,
	0,
};
const Event1bOnSecUlFreqr9::Info Event1bOnSecUlFreqr9::theInfo = {
	Event1bOnSecUlFreqr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 2, 0
};


const void *Event1d::itemsInfo[2] = {
	&TriggeringCondition2::theInfo,
	&UseCIO::theInfo,
};
const void *Event1d::itemsPres[2] = {
	0,
	0,
};
const Event1d::Info Event1d::theInfo = {
	Event1d::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};


const void *Event1er6::itemsInfo[2] = {
	&TriggeringCondition2::theInfo,
	&ThresholdUsedFrequencyr6::theInfo,
};
const void *Event1er6::itemsPres[2] = {
	1,
	1,
};
const Event1er6::Info Event1er6::theInfo = {
	Event1er6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *Event1fr6::itemsInfo[2] = {
	&TriggeringCondition1::theInfo,
	&ThresholdUsedFrequencyr6::theInfo,
};
const void *Event1fr6::itemsPres[2] = {
	1,
	1,
};
const Event1fr6::Info Event1fr6::theInfo = {
	Event1fr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *Event1jr6::itemsInfo[3] = {
	&ReplacementActivationThreshold::theInfo,
	&ReportingAmount::theInfo,
	&ReportingInterval::theInfo,
};
const void *Event1jr6::itemsPres[3] = {
	1,
	1,
	1,
};
const Event1jr6::Info Event1jr6::theInfo = {
	Event1jr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};



const void *NonUsedFreqParameter::itemsInfo[2] = {
	&Threshold::theInfo,
	&W::theInfo,
};
const void *NonUsedFreqParameter::itemsPres[2] = {
	1,
	1,
};
const NonUsedFreqParameter::Info NonUsedFreqParameter::theInfo = {
	NonUsedFreqParameter::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};


const void *Event2a::itemsInfo[6] = {
	&Threshold::theInfo,
	&W::theInfo,
	&HysteresisInterFreq::theInfo,
	&TimeToTrigger::theInfo,
	&ReportingCellStatus::theInfo,
	&NonUsedFreqParameterList::theInfo,
};
const void *Event2a::itemsPres[6] = {
	1,
	1,
	1,
	1,
	0,
	0,
};
const Event2a::Info Event2a::theInfo = {
	Event2a::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 2, 0
};


const void *Event2ar6::itemsInfo[5] = {
	&W::theInfo,
	&HysteresisInterFreq::theInfo,
	&TimeToTrigger::theInfo,
	&ReportingCellStatus::theInfo,
	&NonUsedFreqWListr6::theInfo,
};
const void *Event2ar6::itemsPres[5] = {
	1,
	1,
	1,
	0,
	0,
};
const Event2ar6::Info Event2ar6::theInfo = {
	Event2ar6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 2, 0
};

const void *Event2b::itemsInfo[6] = {
	&Threshold::theInfo,
	&W::theInfo,
	&HysteresisInterFreq::theInfo,
	&TimeToTrigger::theInfo,
	&ReportingCellStatus::theInfo,
	&NonUsedFreqParameterList::theInfo,
};
const void *Event2b::itemsPres[6] = {
	1,
	1,
	1,
	1,
	0,
	0,
};
const Event2b::Info Event2b::theInfo = {
	Event2b::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 2, 0
};


const void *NonUsedFreqParameterr6::itemsInfo[2] = {
	&Thresholdr6::theInfo,
	&W::theInfo,
};
const void *NonUsedFreqParameterr6::itemsPres[2] = {
	1,
	1,
};
const NonUsedFreqParameterr6::Info NonUsedFreqParameterr6::theInfo = {
	NonUsedFreqParameterr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};


const void *Event2br6::itemsInfo[6] = {
	&Thresholdr6::theInfo,
	&W::theInfo,
	&HysteresisInterFreq::theInfo,
	&TimeToTrigger::theInfo,
	&ReportingCellStatus::theInfo,
	&NonUsedFreqParameterListr6::theInfo,
};
const void *Event2br6::itemsPres[6] = {
	1,
	1,
	1,
	1,
	0,
	0,
};
const Event2br6::Info Event2br6::theInfo = {
	Event2br6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 2, 0
};

const void *Event2c::itemsInfo[4] = {
	&HysteresisInterFreq::theInfo,
	&TimeToTrigger::theInfo,
	&ReportingCellStatus::theInfo,
	&NonUsedFreqParameterList::theInfo,
};
const void *Event2c::itemsPres[4] = {
	1,
	1,
	0,
	0,
};
const Event2c::Info Event2c::theInfo = {
	Event2c::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
};

const void *Event2cr6::itemsInfo[4] = {
	&HysteresisInterFreq::theInfo,
	&TimeToTrigger::theInfo,
	&ReportingCellStatus::theInfo,
	&NonUsedFreqParameterListr6::theInfo,
};
const void *Event2cr6::itemsPres[4] = {
	1,
	1,
	0,
	0,
};
const Event2cr6::Info Event2cr6::theInfo = {
	Event2cr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
};

const void *Event2d::itemsInfo[5] = {
	&Threshold::theInfo,
	&W::theInfo,
	&HysteresisInterFreq::theInfo,
	&TimeToTrigger::theInfo,
	&ReportingCellStatus::theInfo,
};
const void *Event2d::itemsPres[5] = {
	1,
	1,
	1,
	1,
	0,
};
const Event2d::Info Event2d::theInfo = {
	Event2d::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 1, 0
};

const void *Event2dr6::itemsInfo[5] = {
	&Thresholdr6::theInfo,
	&W::theInfo,
	&HysteresisInterFreq::theInfo,
	&TimeToTrigger::theInfo,
	&ReportingCellStatus::theInfo,
};
const void *Event2dr6::itemsPres[5] = {
	1,
	1,
	1,
	1,
	0,
};
const Event2dr6::Info Event2dr6::theInfo = {
	Event2dr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 1, 0
};

const void *Event2e::itemsInfo[4] = {
	&HysteresisInterFreq::theInfo,
	&TimeToTrigger::theInfo,
	&ReportingCellStatus::theInfo,
	&NonUsedFreqParameterList::theInfo,
};
const void *Event2e::itemsPres[4] = {
	1,
	1,
	0,
	0,
};
const Event2e::Info Event2e::theInfo = {
	Event2e::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
};

const void *Event2er6::itemsInfo[4] = {
	&HysteresisInterFreq::theInfo,
	&TimeToTrigger::theInfo,
	&ReportingCellStatus::theInfo,
	&NonUsedFreqParameterListr6::theInfo,
};
const void *Event2er6::itemsPres[4] = {
	1,
	1,
	0,
	0,
};
const Event2er6::Info Event2er6::theInfo = {
	Event2er6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
};

const void *Event2f::itemsInfo[5] = {
	&Threshold::theInfo,
	&W::theInfo,
	&HysteresisInterFreq::theInfo,
	&TimeToTrigger::theInfo,
	&ReportingCellStatus::theInfo,
};
const void *Event2f::itemsPres[5] = {
	1,
	1,
	1,
	1,
	0,
};
const Event2f::Info Event2f::theInfo = {
	Event2f::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 1, 0
};

const void *Event2fr6::itemsInfo[5] = {
	&Thresholdr6::theInfo,
	&W::theInfo,
	&HysteresisInterFreq::theInfo,
	&TimeToTrigger::theInfo,
	&ReportingCellStatus::theInfo,
};
const void *Event2fr6::itemsPres[5] = {
	1,
	1,
	1,
	1,
	0,
};
const Event2fr6::Info Event2fr6::theInfo = {
	Event2fr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 1, 0
};

const void *Event3a::itemsInfo[6] = {
	&Threshold::theInfo,
	&W::theInfo,
	&Threshold::theInfo,
	&Hysteresis::theInfo,
	&TimeToTrigger::theInfo,
	&ReportingCellStatus::theInfo,
};
const void *Event3a::itemsPres[6] = {
	1,
	1,
	1,
	1,
	1,
	0,
};
const Event3a::Info Event3a::theInfo = {
	Event3a::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 1, 0
};

const void *Event3b::itemsInfo[4] = {
	&Threshold::theInfo,
	&Hysteresis::theInfo,
	&TimeToTrigger::theInfo,
	&ReportingCellStatus::theInfo,
};
const void *Event3b::itemsPres[4] = {
	1,
	1,
	1,
	0,
};
const Event3b::Info Event3b::theInfo = {
	Event3b::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 1, 0
};

const void *Event3c::itemsInfo[4] = {
	&Threshold::theInfo,
	&Hysteresis::theInfo,
	&TimeToTrigger::theInfo,
	&ReportingCellStatus::theInfo,
};
const void *Event3c::itemsPres[4] = {
	1,
	1,
	1,
	0,
};
const Event3c::Info Event3c::theInfo = {
	Event3c::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 1, 0
};

const void *Event3d::itemsInfo[3] = {
	&Hysteresis::theInfo,
	&TimeToTrigger::theInfo,
	&ReportingCellStatus::theInfo,
};
const void *Event3d::itemsPres[3] = {
	1,
	1,
	0,
};
const Event3d::Info Event3d::theInfo = {
	Event3d::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};



const void *IntraFreqEventResults::itemsInfo[2] = {
	&EventIDIntraFreq::theInfo,
	&CellMeasurementEventResults::theInfo,
};
const void *IntraFreqEventResults::itemsPres[2] = {
	1,
	1,
};
const IntraFreqEventResults::Info IntraFreqEventResults::theInfo = {
	IntraFreqEventResults::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *InterFreqCell::itemsInfo[2] = {
	&FrequencyInfo::theInfo,
	&CellMeasurementEventResults::theInfo,
};
const void *InterFreqCell::itemsPres[2] = {
	1,
	1,
};
const InterFreqCell::Info InterFreqCell::theInfo = {
	InterFreqCell::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};


const void *InterFreqEventResults::itemsInfo[2] = {
	&EventIDInterFreq::theInfo,
	&InterFreqCellList::theInfo,
};
const void *InterFreqEventResults::itemsPres[2] = {
	1,
	0,
};
const InterFreqEventResults::Info InterFreqEventResults::theInfo = {
	InterFreqEventResults::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *InterRATEventResults::itemsInfo[2] = {
	&EventIDInterRAT::theInfo,
	&CellToReportList::theInfo,
};
const void *InterRATEventResults::itemsPres[2] = {
	1,
	1,
};
const InterRATEventResults::Info InterRATEventResults::theInfo = {
	InterRATEventResults::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};


const void *ULTrCHIdentity::choicesInfo[3] = {
	&TransportChannelIdentity::theInfo,
	&Rachorcpch::theInfo,
	&TransportChannelIdentity::theInfo,
};
const ULTrCHIdentity::Info ULTrCHIdentity::theInfo = {
	ULTrCHIdentity::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};


const void *TrafficVolumeEventResults::itemsInfo[2] = {
	&ULTrCHIdentity::theInfo,
	&TrafficVolumeEventType::theInfo,
};
const void *TrafficVolumeEventResults::itemsPres[2] = {
	1,
	1,
};
const TrafficVolumeEventResults::Info TrafficVolumeEventResults::theInfo = {
	TrafficVolumeEventResults::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};








const void *UEInternalEventResults::choicesInfo[8] = {
	&Event6a::theInfo,
	&Event6b::theInfo,
	&Event6c::theInfo,
	&Event6d::theInfo,
	&Event6e::theInfo,
	&PrimaryCPICHInfo::theInfo,
	&PrimaryCPICHInfo::theInfo,
	&Spare::theInfo,
};
const UEInternalEventResults::Info UEInternalEventResults::theInfo = {
	UEInternalEventResults::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	7
};



const void *Ue_GPSTimingOfCell::itemsInfo[2] = {
	&Ms_part::theInfo,
	&Ls_part::theInfo,
};
const void *Ue_GPSTimingOfCell::itemsPres[2] = {
	1,
	1,
};
const Ue_GPSTimingOfCell::Info Ue_GPSTimingOfCell::theInfo = {
	Ue_GPSTimingOfCell::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *Fdd::itemsInfo[1] = {
	&PrimaryCPICHInfo::theInfo,
};
const void *Fdd::itemsPres[1] = {
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *Tdd::itemsInfo[1] = {
	&CellParametersID::theInfo,
};
const void *Tdd::itemsPres[1] = {
	1,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};


const void *UTRANGPSReferenceTimeResult::itemsInfo[3] = {
	&Ue_GPSTimingOfCell::theInfo,
	&ModeSpecificInfo::theInfo,
	&Sfn::theInfo,
};
const void *UTRANGPSReferenceTimeResult::itemsPres[3] = {
	1,
	1,
	1,
};
const UTRANGPSReferenceTimeResult::Info UTRANGPSReferenceTimeResult::theInfo = {
	UTRANGPSReferenceTimeResult::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};



const void *Fdd::itemsInfo[1] = {
	&PrimaryCPICHInfo::theInfo,
};
const void *Fdd::itemsPres[1] = {
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *Tdd::itemsInfo[1] = {
	&CellAndChannelIdentity::theInfo,
};
const void *Tdd::itemsPres[1] = {
	1,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Cell_Timing::itemsInfo[2] = {
	&Sfn::theInfo,
	&ModeSpecificInfo::theInfo,
};
const void *Cell_Timing::itemsPres[2] = {
	1,
	1,
};
const Cell_Timing::Info Cell_Timing::theInfo = {
	Cell_Timing::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *ReferenceTime::choicesInfo[3] = {
	&UTRANGPSReferenceTimeResult::theInfo,
	&GPSTOW1msec::theInfo,
	&Cell_Timing::theInfo,
};
const ReferenceTime::Info ReferenceTime::theInfo = {
	ReferenceTime::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *PositionEstimate::choicesInfo[5] = {
	&EllipsoidPoint::theInfo,
	&EllipsoidPointUncertCircle::theInfo,
	&EllipsoidPointUncertEllipse::theInfo,
	&EllipsoidPointAltitude::theInfo,
	&EllipsoidPointAltitudeEllipsoide::theInfo,
};
const PositionEstimate::Info PositionEstimate::theInfo = {
	PositionEstimate::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	4
};

const void *UEPositioningPositionEstimateInfo::itemsInfo[2] = {
	&ReferenceTime::theInfo,
	&PositionEstimate::theInfo,
};
const void *UEPositioningPositionEstimateInfo::itemsPres[2] = {
	1,
	1,
};
const UEPositioningPositionEstimateInfo::Info UEPositioningPositionEstimateInfo::theInfo = {
	UEPositioningPositionEstimateInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};






const void *UEPositioningOTDOAQuality::itemsInfo[3] = {
	&StdResolution::theInfo,
	&NumberOfOTDOA_Measurements::theInfo,
	&StdOfOTDOA_Measurements::theInfo,
};
const void *UEPositioningOTDOAQuality::itemsPres[3] = {
	1,
	1,
	1,
};
const UEPositioningOTDOAQuality::Info UEPositioningOTDOAQuality::theInfo = {
	UEPositioningOTDOAQuality::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *NeighbourQuality::itemsInfo[1] = {
	&UEPositioningOTDOAQuality::theInfo,
};
const void *NeighbourQuality::itemsPres[1] = {
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

const void *UERXTXTimeDifferenceType2Info::itemsInfo[2] = {
	&UERXTXTimeDifferenceType2::theInfo,
	&NeighbourQuality::theInfo,
};
const void *UERXTXTimeDifferenceType2Info::itemsPres[2] = {
	1,
	1,
};
const UERXTXTimeDifferenceType2Info::Info UERXTXTimeDifferenceType2Info::theInfo = {
	UERXTXTimeDifferenceType2Info::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *Fdd::itemsInfo[2] = {
	&PrimaryCPICHInfo::theInfo,
	&UERXTXTimeDifferenceType2Info::theInfo,
};
const void *Fdd::itemsPres[2] = {
	1,
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *Tdd::itemsInfo[1] = {
	&CellParametersID::theInfo,
};
const void *Tdd::itemsPres[1] = {
	1,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Fdd::itemsInfo[2] = {
	&PrimaryCPICHInfo::theInfo,
	&UERXTXTimeDifferenceType2Info::theInfo,
};
const void *Fdd::itemsPres[2] = {
	0,
	0,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *Tdd::itemsInfo[1] = {
	&CellAndChannelIdentity::theInfo,
};
const void *Tdd::itemsPres[1] = {
	0,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Neighbour::itemsInfo[3] = {
	&ModeSpecificInfo::theInfo,
	&NeighbourQuality::theInfo,
	&SFNSFNObsTimeDifference2::theInfo,
};
const void *Neighbour::itemsPres[3] = {
	1,
	1,
	1,
};
const Neighbour::Info Neighbour::theInfo = {
	Neighbour::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};


const void *UEPositioningOTDOAMeasurement::itemsInfo[3] = {
	&Sfn::theInfo,
	&ModeSpecificInfo::theInfo,
	&NeighbourList::theInfo,
};
const void *UEPositioningOTDOAMeasurement::itemsPres[3] = {
	1,
	1,
	0,
};
const UEPositioningOTDOAMeasurement::Info UEPositioningOTDOAMeasurement::theInfo = {
	UEPositioningOTDOAMeasurement::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};

const void *ReferenceTime::choicesInfo[2] = {
	&UTRANGPSReferenceTimeResult::theInfo,
	&GPSTOW1msec::theInfo,
};
const ReferenceTime::Info ReferenceTime::theInfo = {
	ReferenceTime::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};








const void *GPSMeasurementParam::itemsInfo[7] = {
	&SatelliteID::theInfo,
	&C_N0::theInfo,
	&Doppler::theInfo,
	&WholeGPS_Chips::theInfo,
	&FractionalGPS_Chips::theInfo,
	&MultipathIndicator::theInfo,
	&PseudorangeRMS_Error::theInfo,
};
const void *GPSMeasurementParam::itemsPres[7] = {
	1,
	1,
	1,
	1,
	1,
	1,
	1,
};
const GPSMeasurementParam::Info GPSMeasurementParam::theInfo = {
	GPSMeasurementParam::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	7, 0, 0
};


const void *UEPositioningGPSMeasurementResults::itemsInfo[2] = {
	&ReferenceTime::theInfo,
	&GPSMeasurementParamList::theInfo,
};
const void *UEPositioningGPSMeasurementResults::itemsPres[2] = {
	1,
	1,
};
const UEPositioningGPSMeasurementResults::Info UEPositioningGPSMeasurementResults::theInfo = {
	UEPositioningGPSMeasurementResults::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};


const void *UEPositioningMeasurementEventResults::choicesInfo[4] = {
	&UEPositioningPositionEstimateInfo::theInfo,
	&UEPositioningOTDOAMeasurement::theInfo,
	&UEPositioningGPSMeasurementResults::theInfo,
	&AdditionalOrReplacedPosMeasEvent::theInfo,
};
const UEPositioningMeasurementEventResults::Info UEPositioningMeasurementEventResults::theInfo = {
	UEPositioningMeasurementEventResults::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	3
};


const void *EventResults::choicesInfo[8] = {
	&IntraFreqEventResults::theInfo,
	&InterFreqEventResults::theInfo,
	&InterRATEventResults::theInfo,
	&TrafficVolumeEventResults::theInfo,
	&QualityEventResults::theInfo,
	&UEInternalEventResults::theInfo,
	&UEPositioningMeasurementEventResults::theInfo,
	&Spare::theInfo,
};
const EventResults::Info EventResults::theInfo = {
	EventResults::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	7
};




const void *Ue_GANSSTimingOfCellFrames::itemsInfo[2] = {
	&Ms_Part::theInfo,
	&Ls_Part::theInfo,
};
const void *Ue_GANSSTimingOfCellFrames::itemsPres[2] = {
	1,
	1,
};
const Ue_GANSSTimingOfCellFrames::Info Ue_GANSSTimingOfCellFrames::theInfo = {
	Ue_GANSSTimingOfCellFrames::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};



const void *Fdd::itemsInfo[1] = {
	&PrimaryCPICHInfo::theInfo,
};
const void *Fdd::itemsPres[1] = {
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *Tdd::itemsInfo[1] = {
	&CellParametersID::theInfo,
};
const void *Tdd::itemsPres[1] = {
	1,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *Mode::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const Mode::Info Mode::theInfo = {
	Mode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};


const void *UTRANGANSSReferenceTime::itemsInfo[5] = {
	&Ue_GANSSTimingOfCellFrames::theInfo,
	&GANSS_TimeId::theInfo,
	&GANSS_TimeUncertainty::theInfo,
	&Mode::theInfo,
	&ReferenceSfn::theInfo,
};
const void *UTRANGANSSReferenceTime::itemsPres[5] = {
	1,
	0,
	0,
	1,
	1,
};
const UTRANGANSSReferenceTime::Info UTRANGANSSReferenceTime::theInfo = {
	UTRANGANSSReferenceTime::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 2, 0
};




const void *GANSSReferenceTimeOnly::itemsInfo[3] = {
	&GANSS_tod::theInfo,
	&GANSS_timeId::theInfo,
	&GANSS_tod_uncertainty::theInfo,
};
const void *GANSSReferenceTimeOnly::itemsPres[3] = {
	1,
	0,
	0,
};
const GANSSReferenceTimeOnly::Info GANSSReferenceTimeOnly::theInfo = {
	GANSSReferenceTimeOnly::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *ReferenceTime::choicesInfo[2] = {
	&UTRANGANSSReferenceTime::theInfo,
	&GANSSReferenceTimeOnly::theInfo,
};
const ReferenceTime::Info ReferenceTime::theInfo = {
	ReferenceTime::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *R7::itemsInfo[2] = {
	&ReferenceTime::theInfo,
	&PositionEstimate::theInfo,
};
const void *R7::itemsPres[2] = {
	1,
	1,
};
const R7::Info R7::theInfo = {
	R7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *ReferenceTimeOptions::choicesInfo[2] = {
	&Earlier_than_r7::theInfo,
	&R7::theInfo,
};
const ReferenceTimeOptions::Info ReferenceTimeOptions::theInfo = {
	ReferenceTimeOptions::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};




const void *HorizontalVelocity::itemsInfo[2] = {
	&Bearing::theInfo,
	&HorizontalSpeed::theInfo,
};
const void *HorizontalVelocity::itemsPres[2] = {
	1,
	1,
};
const HorizontalVelocity::Info HorizontalVelocity::theInfo = {
	HorizontalVelocity::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};





const void *HorizontalWithVerticalVelocity::itemsInfo[4] = {
	&verticalSpeedDirection::theInfo,
	&Bearing::theInfo,
	&HorizontalSpeed::theInfo,
	&VerticalSpeed::theInfo,
};
const void *HorizontalWithVerticalVelocity::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const HorizontalWithVerticalVelocity::Info HorizontalWithVerticalVelocity::theInfo = {
	HorizontalWithVerticalVelocity::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 0, 0
};




const void *HorizontalVelocityWithUncertainty::itemsInfo[3] = {
	&Bearing::theInfo,
	&HorizontalSpeed::theInfo,
	&HorizontalSpeedUncertainty::theInfo,
};
const void *HorizontalVelocityWithUncertainty::itemsPres[3] = {
	1,
	1,
	1,
};
const HorizontalVelocityWithUncertainty::Info HorizontalVelocityWithUncertainty::theInfo = {
	HorizontalVelocityWithUncertainty::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};







const void *HorizontalWithVerticalVelocityAndUncertainty::itemsInfo[6] = {
	&verticalSpeedDirection::theInfo,
	&Bearing::theInfo,
	&HorizontalSpeed::theInfo,
	&VerticalSpeed::theInfo,
	&HorizontalUncertaintySpeed::theInfo,
	&VerticalUncertaintySpeed::theInfo,
};
const void *HorizontalWithVerticalVelocityAndUncertainty::itemsPres[6] = {
	1,
	1,
	1,
	1,
	1,
	1,
};
const HorizontalWithVerticalVelocityAndUncertainty::Info HorizontalWithVerticalVelocityAndUncertainty::theInfo = {
	HorizontalWithVerticalVelocityAndUncertainty::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 0, 0
};

const void *VelocityEstimate::choicesInfo[4] = {
	&HorizontalVelocity::theInfo,
	&HorizontalWithVerticalVelocity::theInfo,
	&HorizontalVelocityWithUncertainty::theInfo,
	&HorizontalWithVerticalVelocityAndUncertainty::theInfo,
};
const VelocityEstimate::Info VelocityEstimate::theInfo = {
	VelocityEstimate::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	3
};


const void *UEPositioningPositionEstimateInfov770ext::itemsInfo[4] = {
	&ReferenceTimeOptions::theInfo,
	&PositionData::theInfo,
	&VelocityEstimate::theInfo,
	&UEPositioningGPSReferenceTimeUncertainty::theInfo,
};
const void *UEPositioningPositionEstimateInfov770ext::itemsPres[4] = {
	1,
	1,
	0,
	0,
};
const UEPositioningPositionEstimateInfov770ext::Info UEPositioningPositionEstimateInfov770ext::theInfo = {
	UEPositioningPositionEstimateInfov770ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
};

const void *UEPositioningGPSMeasurementResultsv770ext::itemsInfo[1] = {
	&UEPositioningGPSReferenceTimeUncertainty::theInfo,
};
const void *UEPositioningGPSMeasurementResultsv770ext::itemsPres[1] = {
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

const void *ReferenceTime::choicesInfo[2] = {
	&UTRANGANSSReferenceTime::theInfo,
	&GANSSReferenceTimeOnly::theInfo,
};
const ReferenceTime::Info ReferenceTime::theInfo = {
	ReferenceTime::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *GANSSGenericMeasurementInfo::itemsInfo[0] = {
};
const void *GANSSGenericMeasurementInfo::itemsPres[0] = {
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

const void *UEPositioningGANSSMeasuredResults::itemsInfo[2] = {
	&ReferenceTime::theInfo,
	&GANSSGenericMeasurementInfo::theInfo,
};
const void *UEPositioningGANSSMeasuredResults::itemsPres[2] = {
	1,
	1,
};
const UEPositioningGANSSMeasuredResults::Info UEPositioningGANSSMeasuredResults::theInfo = {
	UEPositioningGANSSMeasuredResults::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};


const void *UEPositioningMeasurementEventResultsv770ext::choicesInfo[4] = {
	&UEPositioningPositionEstimateInfov770ext::theInfo,
	&UEPositioningGPSMeasurementResultsv770ext::theInfo,
	&UEPositioningGANSSMeasuredResults::theInfo,
	&Spare::theInfo,
};
const UEPositioningMeasurementEventResultsv770ext::Info UEPositioningMeasurementEventResultsv770ext::theInfo = {
	UEPositioningMeasurementEventResultsv770ext::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	3
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
const void *GANSSGenericMeasurementInfov860ext::itemsPres[0] = {
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
const void *UEPositioningGANSSMeasuredResultsv860ext::itemsPres[1] = {
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

const void *IntraFreqEventResultsOnSecUlFreq::itemsInfo[2] = {
	&EventIDIntraFreq::theInfo,
	&CellMeasurementEventResultsOnSecUlFreq::theInfo,
};
const void *IntraFreqEventResultsOnSecUlFreq::itemsPres[2] = {
	1,
	1,
};
const IntraFreqEventResultsOnSecUlFreq::Info IntraFreqEventResultsOnSecUlFreq::theInfo = {
	IntraFreqEventResultsOnSecUlFreq::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *EventResultsOnSecUlFreq::itemsInfo[1] = {
	&IntraFreqEventResultsOnSecUlFreq::theInfo,
};
const void *EventResultsOnSecUlFreq::itemsPres[1] = {
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



const void *ExtraDoppler::itemsInfo[2] = {
	&DopplerFirstOrder::theInfo,
	&dopplerUncertainty::theInfo,
};
const void *ExtraDoppler::itemsPres[2] = {
	1,
	1,
};
const ExtraDoppler::Info ExtraDoppler::theInfo = {
	ExtraDoppler::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};






const void *FACHMeasurementOccasionInfo::itemsInfo[4] = {
	&FACH_meas_occasion_coeff::theInfo,
	&Inter_freq_FDD_meas_ind::theInfo,
	&Inter_freq_TDD_meas_ind::theInfo,
	&Inter_RAT_meas_ind::theInfo,
};
const void *FACHMeasurementOccasionInfo::itemsPres[4] = {
	0,
	1,
	1,
	0,
};
const FACHMeasurementOccasionInfo::Info FACHMeasurementOccasionInfo::theInfo = {
	FACHMeasurementOccasionInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
};


const void *FACHMeasurementOccasionInfoLCRr4ext::itemsInfo[1] = {
	&Inter_freq_TDD128_meas_ind::theInfo,
};
const void *FACHMeasurementOccasionInfoLCRr4ext::itemsPres[1] = {
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









const void *ReqDataBitAssistance::itemsInfo[3] = {
	&DGANSSSigIdReq::theInfo,
	&GanssDataBitInterval::theInfo,
	&GanssSatelliteInfo::theInfo,
};
const void *ReqDataBitAssistance::itemsPres[3] = {
	1,
	1,
	0,
};
const ReqDataBitAssistance::Info ReqDataBitAssistance::theInfo = {
	ReqDataBitAssistance::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};

const void *GanssDataBits::itemsInfo[2] = {
	&GanssTod::theInfo,
	&ReqDataBitAssistance::theInfo,
};
const void *GanssDataBits::itemsPres[2] = {
	1,
	1,
};
const GanssDataBits::Info GanssDataBits::theInfo = {
	GanssDataBits::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};



const void *GANSSDecipheringKeys::itemsInfo[2] = {
	&CurrentDecipheringKey::theInfo,
	&NextDecipheringKey::theInfo,
};
const void *GANSSDecipheringKeys::itemsPres[2] = {
	1,
	1,
};
const GANSSDecipheringKeys::Info GANSSDecipheringKeys::theInfo = {
	GANSSDecipheringKeys::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};






const void *UEPositioningGANSSTimeModel::itemsInfo[4] = {
	&Ganss_t_a1::theInfo,
	&Ganss_t_a2::theInfo,
	&gnss_to_id::theInfo,
	&Ganss_wk_number::theInfo,
};
const void *UEPositioningGANSSTimeModel::itemsPres[4] = {
	0,
	0,
	1,
	0,
};
const UEPositioningGANSSTimeModel::Info UEPositioningGANSSTimeModel::theInfo = {
	UEPositioningGANSSTimeModel::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 3, 0
};


const void *UEPositioningDGANSSCorrections::itemsInfo[1] = {
	&DGANSSInfoList::theInfo,
};
const void *UEPositioningDGANSSCorrections::itemsPres[1] = {
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











const void *Satelliteclockmodel::itemsInfo[6] = {
	&T_oc::theInfo,
	&Af2::theInfo,
	&Af1::theInfo,
	&Af0::theInfo,
	&Tgd::theInfo,
	&Model_id::theInfo,
};
const void *Satelliteclockmodel::itemsPres[6] = {
	1,
	1,
	1,
	1,
	0,
	0,
};
const Satelliteclockmodel::Info Satelliteclockmodel::theInfo = {
	Satelliteclockmodel::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 2, 0
};


const void *UEPositioningGANSSClockModel::itemsInfo[1] = {
	&SatelliteclockmodelList::theInfo,
};
const void *UEPositioningGANSSClockModel::itemsPres[1] = {
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

















const void *KeplerianParameters::itemsInfo[16] = {
	&Toe_nav::theInfo,
	&Ganss_omega_nav::theInfo,
	&Delta_n_nav::theInfo,
	&M_zero_nav::theInfo,
	&Omegadot_nav::theInfo,
	&Ganss_e_nav::theInfo,
	&Idot_nav::theInfo,
	&A_sqrt_nav::theInfo,
	&I_zero_nav::theInfo,
	&Omega_zero_nav::theInfo,
	&C_rs_nav::theInfo,
	&C_is_nav::theInfo,
	&C_us_nav::theInfo,
	&C_rc_nav::theInfo,
	&C_ic_nav::theInfo,
	&C_uc_nav::theInfo,
};
const void *KeplerianParameters::itemsPres[16] = {
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
	1,
};
const KeplerianParameters::Info KeplerianParameters::theInfo = {
	KeplerianParameters::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	16, 0, 0
};

const void *UEPositioningGANSSOrbitModel::itemsInfo[1] = {
	&KeplerianParameters::theInfo,
};
const void *UEPositioningGANSSOrbitModel::itemsPres[1] = {
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

const void *GanssSatInfoNav::itemsInfo[5] = {
	&SatId::theInfo,
	&SvHealth::theInfo,
	&Iod::theInfo,
	&UEPositioningGANSSClockModel::theInfo,
	&UEPositioningGANSSOrbitModel::theInfo,
};
const void *GanssSatInfoNav::itemsPres[5] = {
	1,
	1,
	1,
	1,
	1,
};
const GanssSatInfoNav::Info GanssSatInfoNav::theInfo = {
	GanssSatInfoNav::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 0, 0
};


const void *UEPositioningGANSSNavigationModel::itemsInfo[2] = {
	&non_broadcastIndication::theInfo,
	&GanssSatInfoNavList::theInfo,
};
const void *UEPositioningGANSSNavigationModel::itemsPres[2] = {
	0,
	1,
};
const UEPositioningGANSSNavigationModel::Info UEPositioningGANSSNavigationModel::theInfo = {
	UEPositioningGANSSNavigationModel::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *UEPositioningGANSSRealTimeIntegrity::itemsInfo[0] = {
};
const void *UEPositioningGANSSRealTimeIntegrity::itemsPres[0] = {
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


const void *UEPositioningGANSSDataBitAssistance::itemsInfo[2] = {
	&Ganss_tod::theInfo,
	&DataBitAssistanceList::theInfo,
};
const void *UEPositioningGANSSDataBitAssistance::itemsPres[2] = {
	1,
	1,
};
const UEPositioningGANSSDataBitAssistance::Info UEPositioningGANSSDataBitAssistance::theInfo = {
	UEPositioningGANSSDataBitAssistance::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};





const void *GANSSSatelliteInformation::itemsInfo[6] = {
	&GanssSatId::theInfo,
	&ExtraDoppler::theInfo,
	&CodePhase::theInfo,
	&IntegerCodePhase::theInfo,
	&CodePhaseSearchWindow::theInfo,
	&AzimuthAndElevation::theInfo,
};
const void *GANSSSatelliteInformation::itemsPres[6] = {
	1,
	0,
	1,
	1,
	1,
	0,
};
const GANSSSatelliteInformation::Info GANSSSatelliteInformation::theInfo = {
	GANSSSatelliteInformation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 2, 0
};


const void *UEPositioningGANSSReferenceMeasurementInfo::itemsInfo[2] = {
	&GANSSSignalId::theInfo,
	&GANSSSatelliteInformationList::theInfo,
};
const void *UEPositioningGANSSReferenceMeasurementInfo::itemsPres[2] = {
	0,
	1,
};
const UEPositioningGANSSReferenceMeasurementInfo::Info UEPositioningGANSSReferenceMeasurementInfo::theInfo = {
	UEPositioningGANSSReferenceMeasurementInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};


const void *UEPositioningGANSSAlmanac::itemsInfo[2] = {
	&Ganss_wk_number::theInfo,
	&ALMkeplerianParameters::theInfo,
};
const void *UEPositioningGANSSAlmanac::itemsPres[2] = {
	1,
	0,
};
const UEPositioningGANSSAlmanac::Info UEPositioningGANSSAlmanac::theInfo = {
	UEPositioningGANSSAlmanac::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};









const void *UEPositioningGANSSUTCModel::itemsInfo[8] = {
	&A_one_utc::theInfo,
	&A_zero_utc::theInfo,
	&T_ot_utc::theInfo,
	&Delta_t_ls_utc::theInfo,
	&W_n_t_utc::theInfo,
	&W_n_lsf_utc::theInfo,
	&Dn_utc::theInfo,
	&Delta_t_lsf_utc::theInfo,
};
const void *UEPositioningGANSSUTCModel::itemsPres[8] = {
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
};
const UEPositioningGANSSUTCModel::Info UEPositioningGANSSUTCModel::theInfo = {
	UEPositioningGANSSUTCModel::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	8, 0, 0
};

const void *GANSSGenericData::itemsInfo[9] = {
	&GanssId::theInfo,
	&GANSSTimeModelsList::theInfo,
	&UEPositioningDGANSSCorrections::theInfo,
	&UEPositioningGANSSNavigationModel::theInfo,
	&UEPositioningGANSSRealTimeIntegrity::theInfo,
	&UEPositioningGANSSDataBitAssistance::theInfo,
	&UEPositioningGANSSReferenceMeasurementInfo::theInfo,
	&UEPositioningGANSSAlmanac::theInfo,
	&UEPositioningGANSSUTCModel::theInfo,
};
const void *GANSSGenericData::itemsPres[9] = {
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
const GANSSGenericData::Info GANSSGenericData::theInfo = {
	GANSSGenericData::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	9, 9, 0
};











const void *NAVclockModel::itemsInfo[5] = {
	&NavToc::theInfo,
	&Navaf2::theInfo,
	&Navaf1::theInfo,
	&Navaf0::theInfo,
	&NavTgd::theInfo,
};
const void *NAVclockModel::itemsPres[5] = {
	1,
	1,
	1,
	1,
	1,
};
const NAVclockModel::Info NAVclockModel::theInfo = {
	NAVclockModel::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 0, 0
};




const void *GLONASSclockModel::itemsInfo[3] = {
	&GloTau::theInfo,
	&GloGamma::theInfo,
	&GloDeltaTau::theInfo,
};
const void *GLONASSclockModel::itemsPres[3] = {
	1,
	1,
	0,
};
const GLONASSclockModel::Info GLONASSclockModel::theInfo = {
	GLONASSclockModel::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};




const void *SBASclockModel::itemsInfo[3] = {
	&SbasTo::theInfo,
	&SbasAgfo::theInfo,
	&SbasAgf1::theInfo,
};
const void *SBASclockModel::itemsPres[3] = {
	1,
	1,
	1,
};
const SBASclockModel::Info SBASclockModel::theInfo = {
	SBASclockModel::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *UEPositioningGANSSAddClockModels::itemsInfo[4] = {
	&NAVclockModel::theInfo,
	&CNAVclockModel::theInfo,
	&GLONASSclockModel::theInfo,
	&SBASclockModel::theInfo,
};
const void *UEPositioningGANSSAddClockModels::itemsPres[4] = {
	0,
	0,
	0,
	0,
};
const UEPositioningGANSSAddClockModels::Info UEPositioningGANSSAddClockModels::theInfo = {
	UEPositioningGANSSAddClockModels::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 4, 0
};



















const void *NavModelNAVKeplerianSet::itemsInfo[18] = {
	&NavURA::theInfo,
	&NavFitFlag::theInfo,
	&NavToe::theInfo,
	&NavOmega::theInfo,
	&NavDeltaN::theInfo,
	&NavM0::theInfo,
	&NavOmegaADot::theInfo,
	&NavE::theInfo,
	&NavIDot::theInfo,
	&NavAPowerHalf::theInfo,
	&NavI0::theInfo,
	&NavOmegaA0::theInfo,
	&NavCrs::theInfo,
	&NavCis::theInfo,
	&NavCus::theInfo,
	&NavCrc::theInfo,
	&NavCic::theInfo,
	&NavCuc::theInfo,
};
const void *NavModelNAVKeplerianSet::itemsPres[18] = {
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
	1,
	1,
	1,
};
const NavModelNAVKeplerianSet::Info NavModelNAVKeplerianSet::theInfo = {
	NavModelNAVKeplerianSet::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	18, 0, 0
};




















const void *NavModelCNAVKeplerianSet::itemsInfo[19] = {
	&CnavTop::theInfo,
	&CnavURAindex::theInfo,
	&CnavDeltaA::theInfo,
	&CnavAdot::theInfo,
	&CnavDeltaNo::theInfo,
	&CnavDeltaNoDot::theInfo,
	&CnavMo::theInfo,
	&CnavE::theInfo,
	&CnavOmega::theInfo,
	&CnavOMEGA0::theInfo,
	&CnavDeltaOmegaDot::theInfo,
	&CnavIo::theInfo,
	&CnavIoDot::theInfo,
	&CnavCis::theInfo,
	&CnavCic::theInfo,
	&CnavCrs::theInfo,
	&CnavCrc::theInfo,
	&CnavCus::theInfo,
	&CnavCuc::theInfo,
};
const void *NavModelCNAVKeplerianSet::itemsPres[19] = {
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
	1,
	1,
	1,
	1,
};
const NavModelCNAVKeplerianSet::Info NavModelCNAVKeplerianSet::theInfo = {
	NavModelCNAVKeplerianSet::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	19, 0, 0
};














const void *NavModelGLONASSecef::itemsInfo[13] = {
	&GloEn::theInfo,
	&GloP1::theInfo,
	&GloP2::theInfo,
	&GloM::theInfo,
	&GloX::theInfo,
	&GloXdot::theInfo,
	&GloXdotdot::theInfo,
	&GloY::theInfo,
	&GloYdot::theInfo,
	&GloYdotdot::theInfo,
	&GloZ::theInfo,
	&GloZdot::theInfo,
	&GloZdotdot::theInfo,
};
const void *NavModelGLONASSecef::itemsPres[13] = {
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
	1,
};
const NavModelGLONASSecef::Info NavModelGLONASSecef::theInfo = {
	NavModelGLONASSecef::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	13, 1, 0
};












const void *NavModelSBASecef::itemsInfo[11] = {
	&SbasTo::theInfo,
	&SbasAccuracy::theInfo,
	&SbasXg::theInfo,
	&SbasYg::theInfo,
	&SbasZg::theInfo,
	&SbasXgDot::theInfo,
	&SbasYgDot::theInfo,
	&SbasZgDot::theInfo,
	&SbasXgDotDot::theInfo,
	&SbagYgDotDot::theInfo,
	&SbasZgDotDot::theInfo,
};
const void *NavModelSBASecef::itemsPres[11] = {
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
};
const NavModelSBASecef::Info NavModelSBASecef::theInfo = {
	NavModelSBASecef::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	11, 1, 0
};

const void *UEPositioningGANSSAddOrbitModels::itemsInfo[4] = {
	&NavModelNAVKeplerianSet::theInfo,
	&NavModelCNAVKeplerianSet::theInfo,
	&NavModelGLONASSecef::theInfo,
	&NavModelSBASecef::theInfo,
};
const void *UEPositioningGANSSAddOrbitModels::itemsPres[4] = {
	0,
	0,
	0,
	0,
};
const UEPositioningGANSSAddOrbitModels::Info UEPositioningGANSSAddOrbitModels::theInfo = {
	UEPositioningGANSSAddOrbitModels::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 4, 0
};

const void *GanssSatInfoAddNav::itemsInfo[5] = {
	&SatId::theInfo,
	&SvHealth::theInfo,
	&Iod::theInfo,
	&UEPositioningGANSSAddClockModels::theInfo,
	&UEPositioningGANSSAddOrbitModels::theInfo,
};
const void *GanssSatInfoAddNav::itemsPres[5] = {
	1,
	1,
	1,
	1,
	1,
};
const GanssSatInfoAddNav::Info GanssSatInfoAddNav::theInfo = {
	GanssSatInfoAddNav::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 0, 0
};


const void *UEPositioningGANSSAddNavigationModels::itemsInfo[2] = {
	&non_broadcastIndication::theInfo,
	&GanssSatInfoAddNavList::theInfo,
};
const void *UEPositioningGANSSAddNavigationModels::itemsPres[2] = {
	0,
	1,
};
const UEPositioningGANSSAddNavigationModels::Info UEPositioningGANSSAddNavigationModels::theInfo = {
	UEPositioningGANSSAddNavigationModels::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *UEPositioningGANSSAlmanacv860ext::itemsInfo[5] = {
	&ALMNAVKeplerianSet::theInfo,
	&ALMReducedKeplerianSet::theInfo,
	&ALMMidiAlmanacSet::theInfo,
	&ALMGlonassAlmanacSet::theInfo,
	&ALMECEFsbasAlmanacSet::theInfo,
};
const void *UEPositioningGANSSAlmanacv860ext::itemsPres[5] = {
	0,
	0,
	0,
	0,
	0,
};
const UEPositioningGANSSAlmanacv860ext::Info UEPositioningGANSSAlmanacv860ext::theInfo = {
	UEPositioningGANSSAlmanacv860ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 5, 0
};










const void *UTCmodelSet1::itemsInfo[9] = {
	&UtcA0::theInfo,
	&UtcA1::theInfo,
	&UtcA2::theInfo,
	&UtcDeltaTls::theInfo,
	&UtcTot::theInfo,
	&UtcWNot::theInfo,
	&UtcWNlsf::theInfo,
	&UtcDN::theInfo,
	&UtcDeltaTlsf::theInfo,
};
const void *UTCmodelSet1::itemsPres[9] = {
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
const UTCmodelSet1::Info UTCmodelSet1::theInfo = {
	UTCmodelSet1::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	9, 0, 0
};




const void *UTCmodelSet2::itemsInfo[4] = {
	&NA::theInfo,
	&TauC::theInfo,
	&DeltaUT1::theInfo,
	&Kp::theInfo,
};
const void *UTCmodelSet2::itemsPres[4] = {
	1,
	1,
	0,
	0,
};
const UTCmodelSet2::Info UTCmodelSet2::theInfo = {
	UTCmodelSet2::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
};










const void *UTCmodelSet3::itemsInfo[9] = {
	&UtcA1wnt::theInfo,
	&UtcA0wnt::theInfo,
	&UtcTot::theInfo,
	&UtcWNt::theInfo,
	&UtcDeltaTls::theInfo,
	&UtcWNlsf::theInfo,
	&UtcDN::theInfo,
	&UtcDeltaTlsf::theInfo,
	&UtcStandardID::theInfo,
};
const void *UTCmodelSet3::itemsPres[9] = {
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
const UTCmodelSet3::Info UTCmodelSet3::theInfo = {
	UTCmodelSet3::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	9, 0, 0
};

const void *UEPositioningGANSSAddUTCModels::itemsInfo[3] = {
	&UTCmodelSet1::theInfo,
	&UTCmodelSet2::theInfo,
	&UTCmodelSet3::theInfo,
};
const void *UEPositioningGANSSAddUTCModels::itemsPres[3] = {
	0,
	0,
	0,
};
const UEPositioningGANSSAddUTCModels::Info UEPositioningGANSSAddUTCModels::theInfo = {
	UEPositioningGANSSAddUTCModels::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *UEPositioningGANSSAuxiliaryInfo::choicesInfo[2] = {
	&AuxInfoGANSSID1::theInfo,
	&AuxInfoGANSSID3::theInfo,
};
const UEPositioningGANSSAuxiliaryInfo::Info UEPositioningGANSSAuxiliaryInfo::theInfo = {
	UEPositioningGANSSAuxiliaryInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *GANSSGenericDatav860ext::itemsInfo[5] = {
	&UEPositioningGANSSSBASID::theInfo,
	&UEPositioningGANSSAddNavigationModels::theInfo,
	&UEPositioningGANSSAlmanacv860ext::theInfo,
	&UEPositioningGANSSAddUTCModels::theInfo,
	&UEPositioningGANSSAuxiliaryInfo::theInfo,
};
const void *GANSSGenericDatav860ext::itemsPres[5] = {
	0,
	0,
	0,
	0,
	0,
};
const GANSSGenericDatav860ext::Info GANSSGenericDatav860ext::theInfo = {
	GANSSGenericDatav860ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 5, 0
};



const void *UEPositioningGANSSAlmanacr8::itemsInfo[7] = {
	&Ganss_wk_number::theInfo,
	&ALMkeplerianParameters::theInfo,
	&ALMNAVKeplerianSet::theInfo,
	&ALMReducedKeplerianSet::theInfo,
	&ALMMidiAlmanacSet::theInfo,
	&ALMGlonassAlmanacSet::theInfo,
	&ALMECEFsbasAlmanacSet::theInfo,
};
const void *UEPositioningGANSSAlmanacr8::itemsPres[7] = {
	1,
	0,
	0,
	0,
	0,
	0,
	0,
};
const UEPositioningGANSSAlmanacr8::Info UEPositioningGANSSAlmanacr8::theInfo = {
	UEPositioningGANSSAlmanacr8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	7, 6, 0
};

const void *GANSSGenericDatar8::itemsInfo[13] = {
	&GanssId::theInfo,
	&UEPositioningGANSSSBASID::theInfo,
	&GANSSTimeModelsList::theInfo,
	&UEPositioningDGANSSCorrections::theInfo,
	&UEPositioningGANSSNavigationModel::theInfo,
	&UEPositioningGANSSAddNavigationModels::theInfo,
	&UEPositioningGANSSRealTimeIntegrity::theInfo,
	&UEPositioningGANSSDataBitAssistance::theInfo,
	&UEPositioningGANSSReferenceMeasurementInfo::theInfo,
	&UEPositioningGANSSAlmanacr8::theInfo,
	&UEPositioningGANSSUTCModel::theInfo,
	&UEPositioningGANSSAddUTCModels::theInfo,
	&UEPositioningGANSSAuxiliaryInfo::theInfo,
};
const void *GANSSGenericDatar8::itemsPres[13] = {
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
const GANSSGenericDatar8::Info GANSSGenericDatar8::theInfo = {
	GANSSGenericDatar8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	13, 13, 0
};


const void *UEPositioningDGANSSCorrectionsr9::itemsInfo[1] = {
	&DGANSSInfoListr9::theInfo,
};
const void *UEPositioningDGANSSCorrectionsr9::itemsPres[1] = {
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

const void *GANSSGenericDatar9::itemsInfo[13] = {
	&GanssId::theInfo,
	&UEPositioningGANSSSBASID::theInfo,
	&GANSSTimeModelsList::theInfo,
	&UEPositioningDGANSSCorrectionsr9::theInfo,
	&UEPositioningGANSSNavigationModel::theInfo,
	&UEPositioningGANSSAddNavigationModels::theInfo,
	&UEPositioningGANSSRealTimeIntegrity::theInfo,
	&UEPositioningGANSSDataBitAssistance::theInfo,
	&UEPositioningGANSSReferenceMeasurementInfo::theInfo,
	&UEPositioningGANSSAlmanacr8::theInfo,
	&UEPositioningGANSSUTCModel::theInfo,
	&UEPositioningGANSSAddUTCModels::theInfo,
	&UEPositioningGANSSAuxiliaryInfo::theInfo,
};
const void *GANSSGenericDatar9::itemsPres[13] = {
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
const GANSSGenericDatar9::Info GANSSGenericDatar9::theInfo = {
	GANSSGenericDatar9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	13, 13, 0
};

const void *UEPositioningDGANSSCorrectionsv920ext::itemsInfo[1] = {
	&DGANSSInfoListv920ext::theInfo,
};
const void *UEPositioningDGANSSCorrectionsv920ext::itemsPres[1] = {
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
const void *GANSSGenericDatav920ext::itemsPres[1] = {
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






const void *GANSSMeasurementParameters::itemsInfo[0] = {
};
const void *GANSSMeasurementParameters::itemsPres[0] = {
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
const void *GANSSMeasurementParametersv860ext::itemsPres[0] = {
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
const void *GANSSMeasurementSignalList::itemsPres[0] = {
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
const void *GANSSMeasurementSignalListv860ext::itemsPres[0] = {
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






const void *SatellitesListRelatedData::itemsInfo[2] = {
	&SatId::theInfo,
	&Iod::theInfo,
};
const void *SatellitesListRelatedData::itemsPres[2] = {
	1,
	1,
};
const SatellitesListRelatedData::Info SatellitesListRelatedData::theInfo = {
	SatellitesListRelatedData::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};


const void *GanssNavigationModelAdditionalData::itemsInfo[4] = {
	&GanssWeek::theInfo,
	&GanssToe::theInfo,
	&T_toeLimit::theInfo,
	&SatellitesListRelatedDataList::theInfo,
};
const void *GanssNavigationModelAdditionalData::itemsPres[4] = {
	1,
	1,
	1,
	0,
};
const GanssNavigationModelAdditionalData::Info GanssNavigationModelAdditionalData::theInfo = {
	GanssNavigationModelAdditionalData::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 1, 0
};








const void *GanssReqGenericData::itemsInfo[10] = {
	&GanssId::theInfo,
	&GanssRealTimeIntegrity::theInfo,
	&DGANSSSigIdReq::theInfo,
	&GanssAlmanac::theInfo,
	&GanssNavigationModel::theInfo,
	&GanssTimeModelGNSS_GNSS::theInfo,
	&GanssReferenceMeasurementInfo::theInfo,
	&GanssDataBits::theInfo,
	&GanssUTCModel::theInfo,
	&GanssNavigationModelAdditionalData::theInfo,
};
const void *GanssReqGenericData::itemsPres[10] = {
	0,
	1,
	0,
	1,
	1,
	0,
	1,
	0,
	1,
	0,
};
const GanssReqGenericData::Info GanssReqGenericData::theInfo = {
	GanssReqGenericData::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	10, 5, 0
};








const void *GanssAddADchoices::itemsInfo[4] = {
	&OrbitModelID::theInfo,
	&ClockModelID::theInfo,
	&UtcModelID::theInfo,
	&AlmanacModelID::theInfo,
};
const void *GanssAddADchoices::itemsPres[4] = {
	0,
	0,
	0,
	0,
};
const GanssAddADchoices::Info GanssAddADchoices::theInfo = {
	GanssAddADchoices::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 4, 0
};

const void *GanssReqGenericDatav860ext::itemsInfo[5] = {
	&UEPositioningGANSSSBASID::theInfo,
	&ganssAddNavigationModel::theInfo,
	&ganssAddUTCmodel::theInfo,
	&ganssAuxInfo::theInfo,
	&GanssAddADchoices::theInfo,
};
const void *GanssReqGenericDatav860ext::itemsPres[5] = {
	0,
	0,
	0,
	0,
	0,
};
const GanssReqGenericDatav860ext::Info GanssReqGenericDatav860ext::theInfo = {
	GanssReqGenericDatav860ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 5, 0
};








const void *GANSSStormFlag::itemsInfo[5] = {
	&Storm_flag_one::theInfo,
	&Storm_flag_two::theInfo,
	&Storm_flag_three::theInfo,
	&Storm_flag_four::theInfo,
	&Storm_flag_five::theInfo,
};
const void *GANSSStormFlag::itemsPres[5] = {
	1,
	1,
	1,
	1,
	1,
};
const GANSSStormFlag::Info GANSSStormFlag::theInfo = {
	GANSSStormFlag::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 0, 0
};




const void *GSMMeasuredResults::itemsInfo[4] = {
	&GSMCarrierRSSI::theInfo,
	&Dummy::theInfo,
	&BSICReported::theInfo,
	&ObservedTimeDifferenceToGSM::theInfo,
};
const void *GSMMeasuredResults::itemsPres[4] = {
	0,
	0,
	1,
	0,
};
const GSMMeasuredResults::Info GSMMeasuredResults::theInfo = {
	GSMMeasuredResults::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 3, 0
};







const void *GPSTOWAssist::itemsInfo[5] = {
	&SatID::theInfo,
	&Tlm_Message::theInfo,
	&Tlm_Reserved::theInfo,
	&Alert::theInfo,
	&AntiSpoof::theInfo,
};
const void *GPSTOWAssist::itemsPres[5] = {
	1,
	1,
	1,
	1,
	1,
};
const GPSTOWAssist::Info GPSTOWAssist::theInfo = {
	GPSTOWAssist::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 0, 0
};



const void *GSMCellID::itemsInfo[1] = {
	&Gsm_CellID::theInfo,
};
const void *GSMCellID::itemsPres[1] = {
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





const void *GSMPriorityInfo::itemsInfo[5] = {
	&GSMCellGroup::theInfo,
	&Priority::theInfo,
	&QRxLevMinGSM::theInfo,
	&ThreshXhigh::theInfo,
	&ThreshXlow::theInfo,
};
const void *GSMPriorityInfo::itemsPres[5] = {
	1,
	1,
	1,
	1,
	1,
};
const GSMPriorityInfo::Info GSMPriorityInfo::theInfo = {
	GSMPriorityInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 0, 0
};





const void *IdleIntervalInfo::itemsInfo[2] = {
	&K::theInfo,
	&Offset::theInfo,
};
const void *IdleIntervalInfo::itemsPres[2] = {
	0,
	0,
};
const IdleIntervalInfo::Info IdleIntervalInfo::theInfo = {
	IdleIntervalInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *InterFreqCellLCRr4::itemsInfo[2] = {
	&FrequencyInfo::theInfo,
	&CellMeasurementEventResultsLCRr4::theInfo,
};
const void *InterFreqCellLCRr4::itemsPres[2] = {
	1,
	1,
};
const InterFreqCellLCRr4::Info InterFreqCellLCRr4::theInfo = {
	InterFreqCellLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};




const void *RemovedInterFreqCellList::choicesInfo[3] = {
	&RemoveAllInterFreqCells::theInfo,
	&RemoveSomeInterFreqCells::theInfo,
	&RemoveNoInterFreqCells::theInfo,
};
const RemovedInterFreqCellList::Info RemovedInterFreqCellList::theInfo = {
	RemovedInterFreqCellList::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *NewInterFreqCell::itemsInfo[3] = {
	&InterFreqCellID::theInfo,
	&FrequencyInfo::theInfo,
	&CellInfo::theInfo,
};
const void *NewInterFreqCell::itemsPres[3] = {
	0,
	0,
	1,
};
const NewInterFreqCell::Info NewInterFreqCell::theInfo = {
	NewInterFreqCell::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};


const void *InterFreqCellInfoList::itemsInfo[3] = {
	&RemovedInterFreqCellList::theInfo,
	&NewInterFreqCellList::theInfo,
	&CellsForInterFreqMeasList::theInfo,
};
const void *InterFreqCellInfoList::itemsPres[3] = {
	0,
	0,
	0,
};
const InterFreqCellInfoList::Info InterFreqCellInfoList::theInfo = {
	InterFreqCellInfoList::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *NewInterFreqCellr4::itemsInfo[3] = {
	&InterFreqCellID::theInfo,
	&FrequencyInfo::theInfo,
	&CellInfor4::theInfo,
};
const void *NewInterFreqCellr4::itemsPres[3] = {
	0,
	0,
	1,
};
const NewInterFreqCellr4::Info NewInterFreqCellr4::theInfo = {
	NewInterFreqCellr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};


const void *InterFreqCellInfoListr4::itemsInfo[3] = {
	&RemovedInterFreqCellList::theInfo,
	&NewInterFreqCellListr4::theInfo,
	&CellsForInterFreqMeasList::theInfo,
};
const void *InterFreqCellInfoListr4::itemsPres[3] = {
	0,
	0,
	0,
};
const InterFreqCellInfoListr4::Info InterFreqCellInfoListr4::theInfo = {
	InterFreqCellInfoListr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};



const void *Tdd128::itemsInfo[1] = {
	&IntraSecondaryFreqIndicator::theInfo,
};
const void *Tdd128::itemsPres[1] = {
	1,
};
const Tdd128::Info Tdd128::theInfo = {
	Tdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&NoInfo::theInfo,
	&Tdd128::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *NewInterFreqCellr8::itemsInfo[4] = {
	&InterFreqCellID::theInfo,
	&FrequencyInfo::theInfo,
	&CellInfor4::theInfo,
	&ModeSpecificInfo::theInfo,
};
const void *NewInterFreqCellr8::itemsPres[4] = {
	0,
	0,
	1,
	1,
};
const NewInterFreqCellr8::Info NewInterFreqCellr8::theInfo = {
	NewInterFreqCellr8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
};


const void *InterFreqCellInfoListr8::itemsInfo[3] = {
	&RemovedInterFreqCellList::theInfo,
	&NewInterFreqCellListr8::theInfo,
	&CellsForInterFreqMeasList::theInfo,
};
const void *InterFreqCellInfoListr8::itemsPres[3] = {
	0,
	0,
	0,
};
const InterFreqCellInfoListr8::Info InterFreqCellInfoListr8::theInfo = {
	InterFreqCellInfoListr8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};



const void *Tdd128::itemsInfo[1] = {
	&IntraSecondaryFreqIndicator::theInfo,
};
const void *Tdd128::itemsPres[1] = {
	1,
};
const Tdd128::Info Tdd128::theInfo = {
	Tdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&NoInfo::theInfo,
	&Tdd128::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *NewInterFreqCellr9::itemsInfo[4] = {
	&InterFreqCellID::theInfo,
	&FrequencyInfo::theInfo,
	&CellInfor9::theInfo,
	&ModeSpecificInfo::theInfo,
};
const void *NewInterFreqCellr9::itemsPres[4] = {
	0,
	0,
	1,
	1,
};
const NewInterFreqCellr9::Info NewInterFreqCellr9::theInfo = {
	NewInterFreqCellr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
};


const void *Fdd::itemsInfo[1] = {
	&PrimaryCPICHInfo::theInfo,
};
const void *Fdd::itemsPres[1] = {
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};


const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *InterFreqSIAcquisition::itemsInfo[2] = {
	&FrequencyInfo::theInfo,
	&ModeSpecificInfo::theInfo,
};
const void *InterFreqSIAcquisition::itemsPres[2] = {
	1,
	1,
};
const InterFreqSIAcquisition::Info InterFreqSIAcquisition::theInfo = {
	InterFreqSIAcquisition::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *InterFreqCellInfoListr9::itemsInfo[5] = {
	&RemovedInterFreqCellList::theInfo,
	&NewInterFreqCellListr9::theInfo,
	&CellsForInterFreqMeasList::theInfo,
	&CSGInterFreqCellInfoList::theInfo,
	&InterFreqSIAcquisition::theInfo,
};
const void *InterFreqCellInfoListr9::itemsPres[5] = {
	0,
	0,
	0,
	0,
	0,
};
const InterFreqCellInfoListr9::Info InterFreqCellInfoListr9::theInfo = {
	InterFreqCellInfoListr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 5, 0
};

const void *NewInterFreqCellSIRSCP::itemsInfo[3] = {
	&InterFreqCellID::theInfo,
	&FrequencyInfo::theInfo,
	&CellInfoSIRSCP::theInfo,
};
const void *NewInterFreqCellSIRSCP::itemsPres[3] = {
	0,
	0,
	1,
};
const NewInterFreqCellSIRSCP::Info NewInterFreqCellSIRSCP::theInfo = {
	NewInterFreqCellSIRSCP::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};


const void *InterFreqCellInfoSIListRSCP::itemsInfo[2] = {
	&RemovedInterFreqCellList::theInfo,
	&NewInterFreqCellSIListRSCP::theInfo,
};
const void *InterFreqCellInfoSIListRSCP::itemsPres[2] = {
	0,
	0,
};
const InterFreqCellInfoSIListRSCP::Info InterFreqCellInfoSIListRSCP::theInfo = {
	InterFreqCellInfoSIListRSCP::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *NewInterFreqCellSIECN0::itemsInfo[3] = {
	&InterFreqCellID::theInfo,
	&FrequencyInfo::theInfo,
	&CellInfoSIECN0::theInfo,
};
const void *NewInterFreqCellSIECN0::itemsPres[3] = {
	0,
	0,
	1,
};
const NewInterFreqCellSIECN0::Info NewInterFreqCellSIECN0::theInfo = {
	NewInterFreqCellSIECN0::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};


const void *InterFreqCellInfoSIListECN0::itemsInfo[2] = {
	&RemovedInterFreqCellList::theInfo,
	&NewInterFreqCellSIListECN0::theInfo,
};
const void *InterFreqCellInfoSIListECN0::itemsPres[2] = {
	0,
	0,
};
const InterFreqCellInfoSIListECN0::Info InterFreqCellInfoSIListECN0::theInfo = {
	InterFreqCellInfoSIListECN0::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *NewInterFreqCellSIHCSRSCP::itemsInfo[3] = {
	&InterFreqCellID::theInfo,
	&FrequencyInfo::theInfo,
	&CellInfoSIHCSRSCP::theInfo,
};
const void *NewInterFreqCellSIHCSRSCP::itemsPres[3] = {
	0,
	0,
	1,
};
const NewInterFreqCellSIHCSRSCP::Info NewInterFreqCellSIHCSRSCP::theInfo = {
	NewInterFreqCellSIHCSRSCP::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};


const void *InterFreqCellInfoSIListHCSRSCP::itemsInfo[2] = {
	&RemovedInterFreqCellList::theInfo,
	&NewInterFreqCellSIListHCSRSCP::theInfo,
};
const void *InterFreqCellInfoSIListHCSRSCP::itemsPres[2] = {
	0,
	0,
};
const InterFreqCellInfoSIListHCSRSCP::Info InterFreqCellInfoSIListHCSRSCP::theInfo = {
	InterFreqCellInfoSIListHCSRSCP::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *NewInterFreqCellSIHCSECN0::itemsInfo[3] = {
	&InterFreqCellID::theInfo,
	&FrequencyInfo::theInfo,
	&CellInfoSIHCSECN0::theInfo,
};
const void *NewInterFreqCellSIHCSECN0::itemsPres[3] = {
	0,
	0,
	1,
};
const NewInterFreqCellSIHCSECN0::Info NewInterFreqCellSIHCSECN0::theInfo = {
	NewInterFreqCellSIHCSECN0::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};


const void *InterFreqCellInfoSIListHCSECN0::itemsInfo[2] = {
	&RemovedInterFreqCellList::theInfo,
	&NewInterFreqCellSIListHCSECN0::theInfo,
};
const void *InterFreqCellInfoSIListHCSECN0::itemsPres[2] = {
	0,
	0,
};
const InterFreqCellInfoSIListHCSECN0::Info InterFreqCellInfoSIListHCSECN0::theInfo = {
	InterFreqCellInfoSIListHCSECN0::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *NewInterFreqCellSIRSCPLCRr4::itemsInfo[3] = {
	&InterFreqCellID::theInfo,
	&FrequencyInfo::theInfo,
	&CellInfoSIRSCPLCRr4::theInfo,
};
const void *NewInterFreqCellSIRSCPLCRr4::itemsPres[3] = {
	0,
	0,
	1,
};
const NewInterFreqCellSIRSCPLCRr4::Info NewInterFreqCellSIRSCPLCRr4::theInfo = {
	NewInterFreqCellSIRSCPLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};


const void *InterFreqCellInfoSIListRSCPLCR::itemsInfo[2] = {
	&RemovedInterFreqCellList::theInfo,
	&NewInterFreqCellSIListRSCPLCRr4::theInfo,
};
const void *InterFreqCellInfoSIListRSCPLCR::itemsPres[2] = {
	0,
	0,
};
const InterFreqCellInfoSIListRSCPLCR::Info InterFreqCellInfoSIListRSCPLCR::theInfo = {
	InterFreqCellInfoSIListRSCPLCR::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *NewInterFreqCellSIECN0LCRr4::itemsInfo[3] = {
	&InterFreqCellID::theInfo,
	&FrequencyInfo::theInfo,
	&CellInfoSIECN0LCRr4::theInfo,
};
const void *NewInterFreqCellSIECN0LCRr4::itemsPres[3] = {
	0,
	0,
	1,
};
const NewInterFreqCellSIECN0LCRr4::Info NewInterFreqCellSIECN0LCRr4::theInfo = {
	NewInterFreqCellSIECN0LCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};


const void *InterFreqCellInfoSIListECN0LCR::itemsInfo[2] = {
	&RemovedInterFreqCellList::theInfo,
	&NewInterFreqCellSIListECN0LCRr4::theInfo,
};
const void *InterFreqCellInfoSIListECN0LCR::itemsPres[2] = {
	0,
	0,
};
const InterFreqCellInfoSIListECN0LCR::Info InterFreqCellInfoSIListECN0LCR::theInfo = {
	InterFreqCellInfoSIListECN0LCR::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *NewInterFreqCellSIHCSRSCPLCRr4::itemsInfo[3] = {
	&InterFreqCellID::theInfo,
	&FrequencyInfo::theInfo,
	&CellInfoSIHCSRSCPLCRr4::theInfo,
};
const void *NewInterFreqCellSIHCSRSCPLCRr4::itemsPres[3] = {
	0,
	0,
	1,
};
const NewInterFreqCellSIHCSRSCPLCRr4::Info NewInterFreqCellSIHCSRSCPLCRr4::theInfo = {
	NewInterFreqCellSIHCSRSCPLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};


const void *InterFreqCellInfoSIListHCSRSCPLCR::itemsInfo[2] = {
	&RemovedInterFreqCellList::theInfo,
	&NewInterFreqCellSIListHCSRSCPLCRr4::theInfo,
};
const void *InterFreqCellInfoSIListHCSRSCPLCR::itemsPres[2] = {
	0,
	0,
};
const InterFreqCellInfoSIListHCSRSCPLCR::Info InterFreqCellInfoSIListHCSRSCPLCR::theInfo = {
	InterFreqCellInfoSIListHCSRSCPLCR::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *NewInterFreqCellSIHCSECN0LCRr4::itemsInfo[3] = {
	&InterFreqCellID::theInfo,
	&FrequencyInfo::theInfo,
	&CellInfoSIHCSECN0LCRr4::theInfo,
};
const void *NewInterFreqCellSIHCSECN0LCRr4::itemsPres[3] = {
	0,
	0,
	1,
};
const NewInterFreqCellSIHCSECN0LCRr4::Info NewInterFreqCellSIHCSECN0LCRr4::theInfo = {
	NewInterFreqCellSIHCSECN0LCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};


const void *InterFreqCellInfoSIListHCSECN0LCR::itemsInfo[2] = {
	&RemovedInterFreqCellList::theInfo,
	&NewInterFreqCellSIListHCSECN0LCRr4::theInfo,
};
const void *InterFreqCellInfoSIListHCSECN0LCR::itemsPres[2] = {
	0,
	0,
};
const InterFreqCellInfoSIListHCSECN0LCR::Info InterFreqCellInfoSIListHCSECN0LCR::theInfo = {
	InterFreqCellInfoSIListHCSECN0LCR::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};




const void *InterFreqEvent::choicesInfo[6] = {
	&Event2a::theInfo,
	&Event2b::theInfo,
	&Event2c::theInfo,
	&Event2d::theInfo,
	&Event2e::theInfo,
	&Event2f::theInfo,
};
const InterFreqEvent::Info InterFreqEvent::theInfo = {
	InterFreqEvent::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	5
};

const void *InterFreqEventr6::choicesInfo[6] = {
	&Event2ar6::theInfo,
	&Event2br6::theInfo,
	&Event2cr6::theInfo,
	&Event2dr6::theInfo,
	&Event2er6::theInfo,
	&Event2fr6::theInfo,
};
const InterFreqEventr6::Info InterFreqEventr6::theInfo = {
	InterFreqEventr6::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	5
};





const void *InterFreqEventCriteriav590ext::itemsInfo[2] = {
	&DeltaRSCP::theInfo,
	&ThreholdNonUsedFrequencydeltaList::theInfo,
};
const void *InterFreqEventCriteriav590ext::itemsPres[2] = {
	1,
	0,
};
const InterFreqEventCriteriav590ext::Info InterFreqEventCriteriav590ext::theInfo = {
	InterFreqEventCriteriav590ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};




const void *InterFreqEventResultsLCRr4ext::itemsInfo[2] = {
	&EventIDInterFreq::theInfo,
	&InterFreqCellListLCRr4ext::theInfo,
};
const void *InterFreqEventResultsLCRr4ext::itemsPres[2] = {
	1,
	0,
};
const InterFreqEventResultsLCRr4ext::Info InterFreqEventResultsLCRr4ext::theInfo = {
	InterFreqEventResultsLCRr4ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};


const void *Fdd::itemsInfo[1] = {
	&IntraFreqMeasQuantityFDD::theInfo,
};
const void *Fdd::itemsPres[1] = {
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};



const void *Tdd::itemsInfo[1] = {
	&IntraFreqMeasQuantityTDDList::theInfo,
};
const void *Tdd::itemsPres[1] = {
	1,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *IntraFreqMeasQuantity::itemsInfo[2] = {
	&FilterCoefficient::theInfo,
	&ModeSpecificInfo::theInfo,
};
const void *IntraFreqMeasQuantity::itemsPres[2] = {
	0,
	1,
};
const IntraFreqMeasQuantity::Info IntraFreqMeasQuantity::theInfo = {
	IntraFreqMeasQuantity::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *IntraFreqReportingCriteria::itemsInfo[1] = {
	&IntraFreqMeasQuantity::theInfo,
};
const void *IntraFreqReportingCriteria::itemsPres[1] = {
	1,
};
const IntraFreqReportingCriteria::Info IntraFreqReportingCriteria::theInfo = {
	IntraFreqReportingCriteria::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *Fdd::itemsInfo[1] = {
	&FreqQualityEstimateQuantityFDD::theInfo,
};
const void *Fdd::itemsPres[1] = {
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *Tdd::itemsInfo[1] = {
	&FreqQualityEstimateQuantityTDD::theInfo,
};
const void *Tdd::itemsPres[1] = {
	1,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *InterFreqReportingCriteria::itemsInfo[2] = {
	&FilterCoefficient::theInfo,
	&ModeSpecificInfo::theInfo,
};
const void *InterFreqReportingCriteria::itemsPres[2] = {
	0,
	1,
};
const InterFreqReportingCriteria::Info InterFreqReportingCriteria::theInfo = {
	InterFreqReportingCriteria::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *ReportingCriteria::choicesInfo[2] = {
	&IntraFreqReportingCriteria::theInfo,
	&InterFreqReportingCriteria::theInfo,
};
const ReportingCriteria::Info ReportingCriteria::theInfo = {
	ReportingCriteria::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *InterFreqMeasQuantity::itemsInfo[1] = {
	&ReportingCriteria::theInfo,
};
const void *InterFreqMeasQuantity::itemsPres[1] = {
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


const void *InterFreqMeasuredResults::itemsInfo[3] = {
	&FrequencyInfo::theInfo,
	&UTRACarrierRSSI::theInfo,
	&InterFreqCellMeasuredResultsList::theInfo,
};
const void *InterFreqMeasuredResults::itemsPres[3] = {
	0,
	0,
	0,
};
const InterFreqMeasuredResults::Info InterFreqMeasuredResults::theInfo = {
	InterFreqMeasuredResults::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *InterFreqMeasuredResultsv920ext::itemsInfo[1] = {
	&InterFreqCellMeasuredResultsListv920ext::theInfo,
};
const void *InterFreqMeasuredResultsv920ext::itemsPres[1] = {
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
const void *InterFreqMeasurementSysInfoRSCP::itemsPres[1] = {
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
const void *InterFreqMeasurementSysInfoECN0::itemsPres[1] = {
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
const void *InterFreqMeasurementSysInfoHCSRSCP::itemsPres[1] = {
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
const void *InterFreqMeasurementSysInfoHCSECN0::itemsPres[1] = {
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
const void *InterFreqMeasurementSysInfoRSCPLCRr4::itemsPres[1] = {
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
const void *InterFreqMeasurementSysInfoECN0LCRr4::itemsPres[1] = {
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
const void *InterFreqMeasurementSysInfoHCSRSCPLCRr4::itemsPres[1] = {
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
const void *InterFreqMeasurementSysInfoHCSECN0LCRr4::itemsPres[1] = {
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

const void *InterFreqRACHRepCellsList::itemsInfo[0] = {
};
const void *InterFreqRACHRepCellsList::itemsPres[0] = {
};
const InterFreqRACHRepCellsList::Info InterFreqRACHRepCellsList::theInfo = {
	InterFreqRACHRepCellsList::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};


const void *Fdd::itemsInfo[1] = {
	&InterFreqRepQuantityRACHFDD::theInfo,
};
const void *Fdd::itemsPres[1] = {
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};



const void *Tdd::itemsInfo[1] = {
	&InterFreqRepQuantityRACHTDDList::theInfo,
};
const void *Tdd::itemsPres[1] = {
	1,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};


const void *ModeSpecificInfo::choicesInfo[4] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
	&Threshold::theInfo,
	&MaxReportedCellsOnRACHinterFreq::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	3
};

const void *DummyInterFreqRACHReportingInfo::itemsInfo[1] = {
	&ModeSpecificInfo::theInfo,
};
const void *DummyInterFreqRACHReportingInfo::itemsPres[1] = {
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

const void *Fdd::itemsInfo[1] = {
	&InterFreqRepQuantityRACHFDD::theInfo,
};
const void *Fdd::itemsPres[1] = {
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *Tdd::itemsInfo[1] = {
	&InterFreqRepQuantityRACHTDDList::theInfo,
};
const void *Tdd::itemsPres[1] = {
	1,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *InterFreqRACHReportingInfo::itemsInfo[3] = {
	&ModeSpecificInfo::theInfo,
	&Threshold::theInfo,
	&MaxReportedCellsOnRACHinterFreq::theInfo,
};
const void *InterFreqRACHReportingInfo::itemsPres[3] = {
	1,
	1,
	1,
};
const InterFreqRACHReportingInfo::Info InterFreqRACHReportingInfo::theInfo = {
	InterFreqRACHReportingInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *InterFreqReportingCriteria::itemsInfo[1] = {
	&InterFreqEventList::theInfo,
};
const void *InterFreqReportingCriteria::itemsPres[1] = {
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

const void *PeriodicalWithReportingCellStatus::itemsInfo[2] = {
	&PeriodicalReportingCriteria::theInfo,
	&ReportingCellStatus::theInfo,
};
const void *PeriodicalWithReportingCellStatus::itemsPres[2] = {
	1,
	0,
};
const PeriodicalWithReportingCellStatus::Info PeriodicalWithReportingCellStatus::theInfo = {
	PeriodicalWithReportingCellStatus::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *ReportingCellStatusOpt::itemsInfo[1] = {
	&ReportingCellStatus::theInfo,
};
const void *ReportingCellStatusOpt::itemsPres[1] = {
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

const void *InterFreqReportCriteria::choicesInfo[4] = {
	&IntraFreqReportingCriteria::theInfo,
	&InterFreqReportingCriteria::theInfo,
	&PeriodicalWithReportingCellStatus::theInfo,
	&ReportingCellStatusOpt::theInfo,
};
const InterFreqReportCriteria::Info InterFreqReportCriteria::theInfo = {
	InterFreqReportCriteria::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	3
};



const void *IntraFreqEventr4::choicesInfo[9] = {
	&Event1ar4::theInfo,
	&Event1br4::theInfo,
	&Event1c::theInfo,
	&E1d::theInfo,
	&Event1e::theInfo,
	&Event1f::theInfo,
	&E1g::theInfo,
	&ThresholdUsedFrequency::theInfo,
	&ThresholdUsedFrequency::theInfo,
};
const IntraFreqEventr4::Info IntraFreqEventr4::theInfo = {
	IntraFreqEventr4::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	8
};

const void *IntraFreqEventCriteriar4::itemsInfo[4] = {
	&IntraFreqEventr4::theInfo,
	&Hysteresis::theInfo,
	&TimeToTrigger::theInfo,
	&ReportingCellStatus::theInfo,
};
const void *IntraFreqEventCriteriar4::itemsPres[4] = {
	1,
	1,
	1,
	0,
};
const IntraFreqEventCriteriar4::Info IntraFreqEventCriteriar4::theInfo = {
	IntraFreqEventCriteriar4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 1, 0
};


const void *IntraFreqReportingCriteriar4::itemsInfo[1] = {
	&IntraFreqEventCriteriaListr4::theInfo,
};
const void *IntraFreqReportingCriteriar4::itemsPres[1] = {
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

const void *InterFreqReportCriteriar4::choicesInfo[4] = {
	&IntraFreqReportingCriteriar4::theInfo,
	&InterFreqReportingCriteria::theInfo,
	&PeriodicalWithReportingCellStatus::theInfo,
	&ReportingCellStatusOpt::theInfo,
};
const InterFreqReportCriteriar4::Info InterFreqReportCriteriar4::theInfo = {
	InterFreqReportCriteriar4::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	3
};


const void *IntraFreqEventr6::choicesInfo[10] = {
	&Event1ar4::theInfo,
	&Event1br4::theInfo,
	&Event1c::theInfo,
	&Event1d::theInfo,
	&Event1er6::theInfo,
	&Event1fr6::theInfo,
	&E1g::theInfo,
	&ThresholdUsedFrequencyr6::theInfo,
	&ThresholdUsedFrequencyr6::theInfo,
	&Event1jr6::theInfo,
};
const IntraFreqEventr6::Info IntraFreqEventr6::theInfo = {
	IntraFreqEventr6::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	9
};

const void *IntraFreqEventCriteriar6::itemsInfo[4] = {
	&IntraFreqEventr6::theInfo,
	&Hysteresis::theInfo,
	&TimeToTrigger::theInfo,
	&ReportingCellStatus::theInfo,
};
const void *IntraFreqEventCriteriar6::itemsPres[4] = {
	1,
	1,
	1,
	0,
};
const IntraFreqEventCriteriar6::Info IntraFreqEventCriteriar6::theInfo = {
	IntraFreqEventCriteriar6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 1, 0
};


const void *IntraFreqReportingCriteriar6::itemsInfo[1] = {
	&IntraFreqEventCriteriaListr6::theInfo,
};
const void *IntraFreqReportingCriteriar6::itemsPres[1] = {
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

const void *InterFreqReportingCriteriar6::itemsInfo[1] = {
	&InterFreqEventListr6::theInfo,
};
const void *InterFreqReportingCriteriar6::itemsPres[1] = {
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

const void *InterFreqReportCriteriar6::choicesInfo[4] = {
	&IntraFreqReportingCriteriar6::theInfo,
	&InterFreqReportingCriteriar6::theInfo,
	&PeriodicalWithReportingCellStatus::theInfo,
	&ReportingCellStatusOpt::theInfo,
};
const InterFreqReportCriteriar6::Info InterFreqReportCriteriar6::theInfo = {
	InterFreqReportCriteriar6::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	3
};


const void *IntraFreqEventr7::choicesInfo[10] = {
	&Event1ar4::theInfo,
	&Event1br7::theInfo,
	&Event1c::theInfo,
	&Event1d::theInfo,
	&Event1er6::theInfo,
	&Event1fr6::theInfo,
	&E1g::theInfo,
	&ThresholdUsedFrequencyr6::theInfo,
	&ThresholdUsedFrequencyr6::theInfo,
	&Event1jr6::theInfo,
};
const IntraFreqEventr7::Info IntraFreqEventr7::theInfo = {
	IntraFreqEventr7::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	9
};

const void *IntraFreqEventCriteriar7::itemsInfo[4] = {
	&IntraFreqEventr7::theInfo,
	&Hysteresis::theInfo,
	&TimeToTrigger::theInfo,
	&ReportingCellStatus::theInfo,
};
const void *IntraFreqEventCriteriar7::itemsPres[4] = {
	1,
	1,
	1,
	0,
};
const IntraFreqEventCriteriar7::Info IntraFreqEventCriteriar7::theInfo = {
	IntraFreqEventCriteriar7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 1, 0
};


const void *IntraFreqReportingCriteriar7::itemsInfo[1] = {
	&IntraFreqEventCriteriaListr7::theInfo,
};
const void *IntraFreqReportingCriteriar7::itemsPres[1] = {
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

const void *InterFreqReportCriteriar7::choicesInfo[4] = {
	&IntraFreqReportingCriteriar7::theInfo,
	&InterFreqReportingCriteriar6::theInfo,
	&PeriodicalWithReportingCellStatus::theInfo,
	&ReportingCellStatusOpt::theInfo,
};
const InterFreqReportCriteriar7::Info InterFreqReportCriteriar7::theInfo = {
	InterFreqReportCriteriar7::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	3
};

const void *IntraFreqEventOnSecULFreq::choicesInfo[5] = {
	&Event1aOnSecUlFreqr9::theInfo,
	&Event1bOnSecUlFreqr9::theInfo,
	&Event1c::theInfo,
	&Event1er6::theInfo,
	&Event1fr6::theInfo,
};
const IntraFreqEventOnSecULFreq::Info IntraFreqEventOnSecULFreq::theInfo = {
	IntraFreqEventOnSecULFreq::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	4
};

const void *IntraFreqEventCriteriaOnSecULFreq::itemsInfo[4] = {
	&IntraFreqEventOnSecULFreq::theInfo,
	&Hysteresis::theInfo,
	&TimeToTrigger::theInfo,
	&ReportingCellStatus::theInfo,
};
const void *IntraFreqEventCriteriaOnSecULFreq::itemsPres[4] = {
	1,
	1,
	1,
	0,
};
const IntraFreqEventCriteriaOnSecULFreq::Info IntraFreqEventCriteriaOnSecULFreq::theInfo = {
	IntraFreqEventCriteriaOnSecULFreq::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 1, 0
};


const void *IntraFreqEventCriteriaListOnSecULFreq::itemsInfo[2] = {
	&FrequencyInfo::theInfo,
	&IntraFreqEventCriteria::theInfo,
};
const void *IntraFreqEventCriteriaListOnSecULFreq::itemsPres[2] = {
	1,
	1,
};
const IntraFreqEventCriteriaListOnSecULFreq::Info IntraFreqEventCriteriaListOnSecULFreq::theInfo = {
	IntraFreqEventCriteriaListOnSecULFreq::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *IntraFreqReportingCriteriar9::itemsInfo[2] = {
	&IntraFreqEventCriteriaListr7::theInfo,
	&IntraFreqEventCriteriaListOnSecULFreq::theInfo,
};
const void *IntraFreqReportingCriteriar9::itemsPres[2] = {
	0,
	0,
};
const IntraFreqReportingCriteriar9::Info IntraFreqReportingCriteriar9::theInfo = {
	IntraFreqReportingCriteriar9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *InterFreqReportCriteriar9::choicesInfo[4] = {
	&IntraFreqReportingCriteriar9::theInfo,
	&InterFreqReportingCriteriar6::theInfo,
	&PeriodicalWithReportingCellStatus::theInfo,
	&ReportingCellStatusOpt::theInfo,
};
const InterFreqReportCriteriar9::Info InterFreqReportCriteriar9::theInfo = {
	InterFreqReportCriteriar9::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	3
};



const void *InterFreqReportingQuantity::itemsInfo[3] = {
	&Utra_Carrier_RSSI::theInfo,
	&FrequencyQualityEstimate::theInfo,
	&CellReportingQuantities::theInfo,
};
const void *InterFreqReportingQuantity::itemsPres[3] = {
	1,
	1,
	1,
};
const InterFreqReportingQuantity::Info InterFreqReportingQuantity::theInfo = {
	InterFreqReportingQuantity::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};


const void *MeasurementValidity::itemsInfo[1] = {
	&ue_State::theInfo,
};
const void *MeasurementValidity::itemsPres[1] = {
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




const void *RLInformationLists::itemsInfo[2] = {
	&RLAdditionInfoList::theInfo,
	&RLRemovalInformationList::theInfo,
};
const void *RLInformationLists::itemsPres[2] = {
	0,
	0,
};
const RLInformationLists::Info RLInformationLists::theInfo = {
	RLInformationLists::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *UEAutonomousUpdateMode::choicesInfo[3] = {
	&Dummy::theInfo,
	&OnWithNoReporting::theInfo,
	&RLInformationLists::theInfo,
};
const UEAutonomousUpdateMode::Info UEAutonomousUpdateMode::theInfo = {
	UEAutonomousUpdateMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *InterFrequencyMeasurement::itemsInfo[6] = {
	&InterFreqCellInfoList::theInfo,
	&InterFreqMeasQuantity::theInfo,
	&InterFreqReportingQuantity::theInfo,
	&MeasurementValidity::theInfo,
	&UEAutonomousUpdateMode::theInfo,
	&InterFreqReportCriteria::theInfo,
};
const void *InterFrequencyMeasurement::itemsPres[6] = {
	1,
	0,
	0,
	0,
	0,
	1,
};
const InterFrequencyMeasurement::Info InterFrequencyMeasurement::theInfo = {
	InterFrequencyMeasurement::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 4, 0
};

const void *InterFrequencyMeasurementr4::itemsInfo[6] = {
	&InterFreqCellInfoListr4::theInfo,
	&InterFreqMeasQuantity::theInfo,
	&InterFreqReportingQuantity::theInfo,
	&MeasurementValidity::theInfo,
	&UEAutonomousUpdateMode::theInfo,
	&InterFreqReportCriteriar4::theInfo,
};
const void *InterFrequencyMeasurementr4::itemsPres[6] = {
	1,
	0,
	0,
	0,
	0,
	1,
};
const InterFrequencyMeasurementr4::Info InterFrequencyMeasurementr4::theInfo = {
	InterFrequencyMeasurementr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 4, 0
};

const void *InterFrequencyMeasurementr6::itemsInfo[6] = {
	&InterFreqCellInfoListr4::theInfo,
	&InterFreqMeasQuantity::theInfo,
	&InterFreqReportingQuantity::theInfo,
	&MeasurementValidity::theInfo,
	&UEAutonomousUpdateMode::theInfo,
	&InterFreqReportCriteriar6::theInfo,
};
const void *InterFrequencyMeasurementr6::itemsPres[6] = {
	1,
	0,
	0,
	0,
	0,
	1,
};
const InterFrequencyMeasurementr6::Info InterFrequencyMeasurementr6::theInfo = {
	InterFrequencyMeasurementr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 4, 0
};

const void *InterFrequencyMeasurementr7::itemsInfo[6] = {
	&InterFreqCellInfoListr4::theInfo,
	&InterFreqMeasQuantity::theInfo,
	&InterFreqReportingQuantity::theInfo,
	&MeasurementValidity::theInfo,
	&UEAutonomousUpdateMode::theInfo,
	&InterFreqReportCriteriar7::theInfo,
};
const void *InterFrequencyMeasurementr7::itemsPres[6] = {
	1,
	0,
	0,
	0,
	0,
	1,
};
const InterFrequencyMeasurementr7::Info InterFrequencyMeasurementr7::theInfo = {
	InterFrequencyMeasurementr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 4, 0
};


const void *InterFrequencyMeasurementr8::itemsInfo[7] = {
	&InterFreqCellInfoListr8::theInfo,
	&InterFreqMeasQuantity::theInfo,
	&InterFreqReportingQuantity::theInfo,
	&MeasurementValidity::theInfo,
	&UEAutonomousUpdateMode::theInfo,
	&AdjacentFrequencyIndex::theInfo,
	&InterFreqReportCriteriar7::theInfo,
};
const void *InterFrequencyMeasurementr8::itemsPres[7] = {
	1,
	0,
	0,
	0,
	0,
	0,
	1,
};
const InterFrequencyMeasurementr8::Info InterFrequencyMeasurementr8::theInfo = {
	InterFrequencyMeasurementr8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	7, 5, 0
};



const void *InterFrequencyMeasurementr9::itemsInfo[8] = {
	&InterFreqCellInfoListr9::theInfo,
	&InterFreqMeasQuantity::theInfo,
	&InterFreqReportingQuantity::theInfo,
	&MeasurementValidity::theInfo,
	&UEAutonomousUpdateMode::theInfo,
	&AdjacentFrequencyIndex::theInfo,
	&InterBandFrequencyIndex::theInfo,
	&InterFreqReportCriteriar9::theInfo,
};
const void *InterFrequencyMeasurementr9::itemsPres[8] = {
	1,
	0,
	0,
	0,
	0,
	0,
	0,
	1,
};
const InterFrequencyMeasurementr9::Info InterFrequencyMeasurementr9::theInfo = {
	InterFrequencyMeasurementr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	8, 6, 0
};


const void *Gsm::itemsInfo[4] = {
	&BSIC::theInfo,
	&FrequencyBand::theInfo,
	&BCCHARFCN::theInfo,
	&NCMode::theInfo,
};
const void *Gsm::itemsPres[4] = {
	1,
	1,
	1,
	0,
};
const Gsm::Info Gsm::theInfo = {
	Gsm::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 1, 0
};




const void *TechnologySpecificInfo::choicesInfo[4] = {
	&Gsm::theInfo,
	&Is_2000::theInfo,
	&Spare2::theInfo,
	&Spare1::theInfo,
};
const TechnologySpecificInfo::Info TechnologySpecificInfo::theInfo = {
	TechnologySpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	3
};

const void *InterRATTargetCellDescription::itemsInfo[1] = {
	&TechnologySpecificInfo::theInfo,
};
const void *InterRATTargetCellDescription::itemsPres[1] = {
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





const void *RemovedInterRATCellList::choicesInfo[3] = {
	&RemoveAllInterRATCells::theInfo,
	&RemoveSomeInterRATCells::theInfo,
	&RemoveNoInterRATCells::theInfo,
};
const RemovedInterRATCellList::Info RemovedInterRATCellList::theInfo = {
	RemovedInterRATCellList::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};



const void *Gsm::itemsInfo[6] = {
	&CellSelectReselectInfoSIB1112::theInfo,
	&InterRATCellIndividualOffset::theInfo,
	&BSIC::theInfo,
	&FrequencyBand::theInfo,
	&BCCHARFCN::theInfo,
	&Dummy::theInfo,
};
const void *Gsm::itemsPres[6] = {
	0,
	1,
	1,
	1,
	1,
	0,
};
const Gsm::Info Gsm::theInfo = {
	Gsm::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 2, 0
};


const void *Is_2000::itemsInfo[1] = {
	&IS2000SpecificMeasInfo::theInfo,
};
const void *Is_2000::itemsPres[1] = {
	1,
};
const Is_2000::Info Is_2000::theInfo = {
	Is_2000::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};



const void *TechnologySpecificInfo::choicesInfo[4] = {
	&Gsm::theInfo,
	&Is_2000::theInfo,
	&Absent::theInfo,
	&Spare1::theInfo,
};
const TechnologySpecificInfo::Info TechnologySpecificInfo::theInfo = {
	TechnologySpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	3
};

const void *NewInterRATCell::itemsInfo[2] = {
	&InterRATCellID::theInfo,
	&TechnologySpecificInfo::theInfo,
};
const void *NewInterRATCell::itemsPres[2] = {
	0,
	1,
};
const NewInterRATCell::Info NewInterRATCell::theInfo = {
	NewInterRATCell::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};


const void *InterRATCellInfoList::itemsInfo[3] = {
	&RemovedInterRATCellList::theInfo,
	&NewInterRATCellList::theInfo,
	&CellsForInterRATMeasList::theInfo,
};
const void *InterRATCellInfoList::itemsPres[3] = {
	1,
	1,
	0,
};
const InterRATCellInfoList::Info InterRATCellInfoList::theInfo = {
	InterRATCellInfoList::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};


const void *Gsm::itemsInfo[6] = {
	&CellSelectReselectInfoSIB1112::theInfo,
	&InterRATCellIndividualOffset::theInfo,
	&BSIC::theInfo,
	&FrequencyBand::theInfo,
	&BCCHARFCN::theInfo,
	&Dummy::theInfo,
};
const void *Gsm::itemsPres[6] = {
	0,
	1,
	1,
	1,
	1,
	0,
};
const Gsm::Info Gsm::theInfo = {
	Gsm::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 2, 0
};

const void *Is_2000::itemsInfo[1] = {
	&IS2000SpecificMeasInfo::theInfo,
};
const void *Is_2000::itemsPres[1] = {
	1,
};
const Is_2000::Info Is_2000::theInfo = {
	Is_2000::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};



const void *TechnologySpecificInfo::choicesInfo[4] = {
	&Gsm::theInfo,
	&Is_2000::theInfo,
	&Absent::theInfo,
	&Spare1::theInfo,
};
const TechnologySpecificInfo::Info TechnologySpecificInfo::theInfo = {
	TechnologySpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	3
};

const void *NewInterRATCellB::itemsInfo[2] = {
	&InterRATCellID::theInfo,
	&TechnologySpecificInfo::theInfo,
};
const void *NewInterRATCellB::itemsPres[2] = {
	0,
	1,
};
const NewInterRATCellB::Info NewInterRATCellB::theInfo = {
	NewInterRATCellB::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};


const void *InterRATCellInfoListB::itemsInfo[2] = {
	&RemovedInterRATCellList::theInfo,
	&NewInterRATCellListB::theInfo,
};
const void *InterRATCellInfoListB::itemsPres[2] = {
	1,
	1,
};
const InterRATCellInfoListB::Info InterRATCellInfoListB::theInfo = {
	InterRATCellInfoListB::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *InterRATCellInfoListr4::itemsInfo[3] = {
	&RemovedInterRATCellList::theInfo,
	&NewInterRATCellList::theInfo,
	&CellsForInterRATMeasList::theInfo,
};
const void *InterRATCellInfoListr4::itemsPres[3] = {
	1,
	0,
	0,
};
const InterRATCellInfoListr4::Info InterRATCellInfoListr4::theInfo = {
	InterRATCellInfoListr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *InterRATCellInfoListr6::itemsInfo[4] = {
	&RemovedInterRATCellList::theInfo,
	&NewInterRATCellList::theInfo,
	&CellsForInterRATMeasList::theInfo,
	&InterRATCellInfoIndication::theInfo,
};
const void *InterRATCellInfoListr6::itemsPres[4] = {
	1,
	0,
	0,
	0,
};
const InterRATCellInfoListr6::Info InterRATCellInfoListr6::theInfo = {
	InterRATCellInfoListr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 3, 0
};

const void *InterRATEvent::choicesInfo[4] = {
	&Event3a::theInfo,
	&Event3b::theInfo,
	&Event3c::theInfo,
	&Event3d::theInfo,
};
const InterRATEvent::Info InterRATEvent::theInfo = {
	InterRATEvent::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	3
};



const void *Gsm::itemsInfo[3] = {
	&MeasurementQuantityGSM::theInfo,
	&FilterCoefficient::theInfo,
	&BSICVerificationRequired::theInfo,
};
const void *Gsm::itemsPres[3] = {
	1,
	0,
	1,
};
const Gsm::Info Gsm::theInfo = {
	Gsm::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};





const void *Is_2000::itemsInfo[4] = {
	&Tadd_EcIo::theInfo,
	&Tcomp_EcIo::theInfo,
	&SoftSlope::theInfo,
	&AddIntercept::theInfo,
};
const void *Is_2000::itemsPres[4] = {
	1,
	1,
	0,
	0,
};
const Is_2000::Info Is_2000::theInfo = {
	Is_2000::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
};

const void *RatSpecificInfo::choicesInfo[2] = {
	&Gsm::theInfo,
	&Is_2000::theInfo,
};
const RatSpecificInfo::Info RatSpecificInfo::theInfo = {
	RatSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *InterRATMeasQuantity::itemsInfo[2] = {
	&IntraFreqMeasQuantity::theInfo,
	&RatSpecificInfo::theInfo,
};
const void *InterRATMeasQuantity::itemsPres[2] = {
	0,
	0,
};
const InterRATMeasQuantity::Info InterRATMeasQuantity::theInfo = {
	InterRATMeasQuantity::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *Gsm::itemsInfo[3] = {
	&MeasurementQuantityGSM::theInfo,
	&FilterCoefficient::theInfo,
	&BSICVerificationRequired::theInfo,
};
const void *Gsm::itemsPres[3] = {
	1,
	0,
	1,
};
const Gsm::Info Gsm::theInfo = {
	Gsm::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};





const void *Is_2000::itemsInfo[4] = {
	&Tadd_EcIo::theInfo,
	&Tcomp_EcIo::theInfo,
	&SoftSlope::theInfo,
	&AddIntercept::theInfo,
};
const void *Is_2000::itemsPres[4] = {
	1,
	1,
	0,
	0,
};
const Is_2000::Info Is_2000::theInfo = {
	Is_2000::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
};


const void *E_UTRA::itemsInfo[2] = {
	&MeasurementQuantityEUTRA::theInfo,
	&FilterCoefficient::theInfo,
};
const void *E_UTRA::itemsPres[2] = {
	1,
	0,
};
const E_UTRA::Info E_UTRA::theInfo = {
	E_UTRA::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *RatSpecificInfo::choicesInfo[3] = {
	&Gsm::theInfo,
	&Is_2000::theInfo,
	&E_UTRA::theInfo,
};
const RatSpecificInfo::Info RatSpecificInfo::theInfo = {
	RatSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *InterRATMeasQuantityr8::itemsInfo[2] = {
	&IntraFreqMeasQuantity::theInfo,
	&RatSpecificInfo::theInfo,
};
const void *InterRATMeasQuantityr8::itemsPres[2] = {
	0,
	0,
};
const InterRATMeasQuantityr8::Info InterRATMeasQuantityr8::theInfo = {
	InterRATMeasQuantityr8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};


const void *InterRATMeasuredResults::choicesInfo[2] = {
	&GSMMeasuredResultsList::theInfo,
	&Spare::theInfo,
};
const InterRATMeasuredResults::Info InterRATMeasuredResults::theInfo = {
	InterRATMeasuredResults::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};






const void *Gsm::itemsInfo[3] = {
	&Dummy::theInfo,
	&Dummy2::theInfo,
	&Gsm_Carrier_RSSI::theInfo,
};
const void *Gsm::itemsPres[3] = {
	1,
	1,
	1,
};
const Gsm::Info Gsm::theInfo = {
	Gsm::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *RatSpecificInfo::choicesInfo[1] = {
	&Gsm::theInfo,
};
const RatSpecificInfo::Info RatSpecificInfo::theInfo = {
	RatSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *InterRATReportingQuantity::itemsInfo[2] = {
	&Utran_EstimatedQuality::theInfo,
	&RatSpecificInfo::theInfo,
};
const void *InterRATReportingQuantity::itemsPres[2] = {
	1,
	1,
};
const InterRATReportingQuantity::Info InterRATReportingQuantity::theInfo = {
	InterRATReportingQuantity::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *InterRATReportingCriteria::itemsInfo[1] = {
	&InterRATEventList::theInfo,
};
const void *InterRATReportingCriteria::itemsPres[1] = {
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

const void *InterRATReportCriteria::choicesInfo[3] = {
	&InterRATReportingCriteria::theInfo,
	&PeriodicalWithReportingCellStatus::theInfo,
	&ReportingCellStatusOpt::theInfo,
};
const InterRATReportCriteria::Info InterRATReportCriteria::theInfo = {
	InterRATReportCriteria::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *InterRATMeasurement::itemsInfo[4] = {
	&InterRATCellInfoList::theInfo,
	&InterRATMeasQuantity::theInfo,
	&InterRATReportingQuantity::theInfo,
	&InterRATReportCriteria::theInfo,
};
const void *InterRATMeasurement::itemsPres[4] = {
	0,
	0,
	0,
	1,
};
const InterRATMeasurement::Info InterRATMeasurement::theInfo = {
	InterRATMeasurement::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 3, 0
};

const void *InterRATMeasurementr4::itemsInfo[4] = {
	&InterRATCellInfoListr4::theInfo,
	&InterRATMeasQuantity::theInfo,
	&InterRATReportingQuantity::theInfo,
	&InterRATReportCriteria::theInfo,
};
const void *InterRATMeasurementr4::itemsPres[4] = {
	0,
	0,
	0,
	1,
};
const InterRATMeasurementr4::Info InterRATMeasurementr4::theInfo = {
	InterRATMeasurementr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 3, 0
};

const void *InterRATMeasurementr6::itemsInfo[4] = {
	&InterRATCellInfoListr6::theInfo,
	&InterRATMeasQuantity::theInfo,
	&InterRATReportingQuantity::theInfo,
	&InterRATReportCriteria::theInfo,
};
const void *InterRATMeasurementr6::itemsPres[4] = {
	0,
	0,
	0,
	1,
};
const InterRATMeasurementr6::Info InterRATMeasurementr6::theInfo = {
	InterRATMeasurementr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 3, 0
};

const void *InterRATMeasurementObjects::choicesInfo[2] = {
	&InterRATCellInfoListr6::theInfo,
	&EUTRAFrequencyList::theInfo,
};
const InterRATMeasurementObjects::Info InterRATMeasurementObjects::theInfo = {
	InterRATMeasurementObjects::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};



const void *Gsm::itemsInfo[1] = {
	&Gsm_Carrier_RSSI::theInfo,
};
const void *Gsm::itemsPres[1] = {
	1,
};
const Gsm::Info Gsm::theInfo = {
	Gsm::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};


const void *Eutra::itemsInfo[1] = {
	&reportingQuantity::theInfo,
};
const void *Eutra::itemsPres[1] = {
	1,
};
const Eutra::Info Eutra::theInfo = {
	Eutra::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *RatSpecificInfo::choicesInfo[2] = {
	&Gsm::theInfo,
	&Eutra::theInfo,
};
const RatSpecificInfo::Info RatSpecificInfo::theInfo = {
	RatSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *InterRATReportingQuantityr8::itemsInfo[2] = {
	&Utran_EstimatedQuality::theInfo,
	&RatSpecificInfo::theInfo,
};
const void *InterRATReportingQuantityr8::itemsPres[2] = {
	1,
	1,
};
const InterRATReportingQuantityr8::Info InterRATReportingQuantityr8::theInfo = {
	InterRATReportingQuantityr8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *InterRATMeasurementr8::itemsInfo[5] = {
	&InterRATMeasurementObjects::theInfo,
	&InterRATMeasQuantityr8::theInfo,
	&InterRATReportingQuantityr8::theInfo,
	&InterRATReportCriteria::theInfo,
	&IdleIntervalInfo::theInfo,
};
const void *InterRATMeasurementr8::itemsPres[5] = {
	0,
	0,
	0,
	1,
	0,
};
const InterRATMeasurementr8::Info InterRATMeasurementr8::theInfo = {
	InterRATMeasurementr8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 4, 0
};

const void *InterRATMeasurementObjects::choicesInfo[2] = {
	&InterRATCellInfoListr6::theInfo,
	&EUTRAFrequencyListr9::theInfo,
};
const InterRATMeasurementObjects::Info InterRATMeasurementObjects::theInfo = {
	InterRATMeasurementObjects::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *InterRATMeasurementr9::itemsInfo[5] = {
	&InterRATMeasurementObjects::theInfo,
	&InterRATMeasQuantityr8::theInfo,
	&InterRATReportingQuantityr8::theInfo,
	&InterRATReportCriteria::theInfo,
	&IdleIntervalInfo::theInfo,
};
const void *InterRATMeasurementr9::itemsPres[5] = {
	0,
	0,
	0,
	1,
	0,
};
const InterRATMeasurementr9::Info InterRATMeasurementr9::theInfo = {
	InterRATMeasurementr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 4, 0
};

const void *InterRATMeasurementSysInfo::itemsInfo[1] = {
	&InterRATCellInfoList::theInfo,
};
const void *InterRATMeasurementSysInfo::itemsPres[1] = {
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
const void *InterRATMeasurementSysInfoB::itemsPres[1] = {
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




const void *RemovedIntraFreqCellList::choicesInfo[3] = {
	&RemoveAllIntraFreqCells::theInfo,
	&RemoveSomeIntraFreqCells::theInfo,
	&RemoveNoIntraFreqCells::theInfo,
};
const RemovedIntraFreqCellList::Info RemovedIntraFreqCellList::theInfo = {
	RemovedIntraFreqCellList::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *NewIntraFreqCell::itemsInfo[2] = {
	&IntraFreqCellID::theInfo,
	&CellInfo::theInfo,
};
const void *NewIntraFreqCell::itemsPres[2] = {
	0,
	1,
};
const NewIntraFreqCell::Info NewIntraFreqCell::theInfo = {
	NewIntraFreqCell::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};


const void *IntraFreqCellInfoList::itemsInfo[3] = {
	&RemovedIntraFreqCellList::theInfo,
	&NewIntraFreqCellList::theInfo,
	&CellsForIntraFreqMeasList::theInfo,
};
const void *IntraFreqCellInfoList::itemsPres[3] = {
	0,
	0,
	0,
};
const IntraFreqCellInfoList::Info IntraFreqCellInfoList::theInfo = {
	IntraFreqCellInfoList::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *NewIntraFreqCellr4::itemsInfo[2] = {
	&IntraFreqCellID::theInfo,
	&CellInfor4::theInfo,
};
const void *NewIntraFreqCellr4::itemsPres[2] = {
	0,
	1,
};
const NewIntraFreqCellr4::Info NewIntraFreqCellr4::theInfo = {
	NewIntraFreqCellr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};


const void *IntraFreqCellInfoListr4::itemsInfo[3] = {
	&RemovedIntraFreqCellList::theInfo,
	&NewIntraFreqCellListr4::theInfo,
	&CellsForIntraFreqMeasList::theInfo,
};
const void *IntraFreqCellInfoListr4::itemsPres[3] = {
	0,
	0,
	0,
};
const IntraFreqCellInfoListr4::Info IntraFreqCellInfoListr4::theInfo = {
	IntraFreqCellInfoListr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};




const void *RemovedIntraFreqCellListOnSecULFreq::choicesInfo[3] = {
	&RemoveAllIntraFreqCells::theInfo,
	&RemoveSomeIntraFreqCells::theInfo,
	&RemoveNoIntraFreqCells::theInfo,
};
const RemovedIntraFreqCellListOnSecULFreq::Info RemovedIntraFreqCellListOnSecULFreq::theInfo = {
	RemovedIntraFreqCellListOnSecULFreq::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *NewIntraFreqCellOnSecULFreq::itemsInfo[2] = {
	&IntraFreqCellIDOnSecULFreq::theInfo,
	&CellInfor4::theInfo,
};
const void *NewIntraFreqCellOnSecULFreq::itemsPres[2] = {
	0,
	1,
};
const NewIntraFreqCellOnSecULFreq::Info NewIntraFreqCellOnSecULFreq::theInfo = {
	NewIntraFreqCellOnSecULFreq::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};


const void *IntraFreqCellInfoListInfoOnSecULFreq::itemsInfo[3] = {
	&RemovedIntraFreqCellListOnSecULFreq::theInfo,
	&NewIntraFreqCellListOnSecULFreq::theInfo,
	&CellsForIntraFreqMeasListOnSecULFreq::theInfo,
};
const void *IntraFreqCellInfoListInfoOnSecULFreq::itemsPres[3] = {
	0,
	0,
	0,
};
const IntraFreqCellInfoListInfoOnSecULFreq::Info IntraFreqCellInfoListInfoOnSecULFreq::theInfo = {
	IntraFreqCellInfoListInfoOnSecULFreq::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *IntraFreqCellInfoListOnSecULFreq::itemsInfo[1] = {
	&IntraFreqCellInfoListInfoOnSecULFreq::theInfo,
};
const void *IntraFreqCellInfoListOnSecULFreq::itemsPres[1] = {
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

const void *NewIntraFreqCellr9::itemsInfo[2] = {
	&IntraFreqCellID::theInfo,
	&CellInfor9::theInfo,
};
const void *NewIntraFreqCellr9::itemsPres[2] = {
	0,
	1,
};
const NewIntraFreqCellr9::Info NewIntraFreqCellr9::theInfo = {
	NewIntraFreqCellr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};



const void *Fdd::itemsInfo[1] = {
	&IntraFreqSIAcquisitionInfo::theInfo,
};
const void *Fdd::itemsPres[1] = {
	0,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};


const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *IntraFreqSIAcquisition::itemsInfo[1] = {
	&ModeSpecificInfo::theInfo,
};
const void *IntraFreqSIAcquisition::itemsPres[1] = {
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

const void *IntraFreqCellInfoListr9::itemsInfo[5] = {
	&RemovedIntraFreqCellList::theInfo,
	&NewIntraFreqCellListr9::theInfo,
	&CellsForIntraFreqMeasList::theInfo,
	&CSGIntraFreqCellInfoList::theInfo,
	&IntraFreqSIAcquisition::theInfo,
};
const void *IntraFreqCellInfoListr9::itemsPres[5] = {
	0,
	0,
	0,
	0,
	0,
};
const IntraFreqCellInfoListr9::Info IntraFreqCellInfoListr9::theInfo = {
	IntraFreqCellInfoListr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 5, 0
};

const void *NewIntraFreqCellSIRSCP::itemsInfo[2] = {
	&IntraFreqCellID::theInfo,
	&CellInfoSIRSCP::theInfo,
};
const void *NewIntraFreqCellSIRSCP::itemsPres[2] = {
	0,
	1,
};
const NewIntraFreqCellSIRSCP::Info NewIntraFreqCellSIRSCP::theInfo = {
	NewIntraFreqCellSIRSCP::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};


const void *IntraFreqCellInfoSIListRSCP::itemsInfo[2] = {
	&RemovedIntraFreqCellList::theInfo,
	&NewIntraFreqCellSIListRSCP::theInfo,
};
const void *IntraFreqCellInfoSIListRSCP::itemsPres[2] = {
	0,
	1,
};
const IntraFreqCellInfoSIListRSCP::Info IntraFreqCellInfoSIListRSCP::theInfo = {
	IntraFreqCellInfoSIListRSCP::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *NewIntraFreqCellSIECN0::itemsInfo[2] = {
	&IntraFreqCellID::theInfo,
	&CellInfoSIECN0::theInfo,
};
const void *NewIntraFreqCellSIECN0::itemsPres[2] = {
	0,
	1,
};
const NewIntraFreqCellSIECN0::Info NewIntraFreqCellSIECN0::theInfo = {
	NewIntraFreqCellSIECN0::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};


const void *IntraFreqCellInfoSIListECN0::itemsInfo[2] = {
	&RemovedIntraFreqCellList::theInfo,
	&NewIntraFreqCellSIListECN0::theInfo,
};
const void *IntraFreqCellInfoSIListECN0::itemsPres[2] = {
	0,
	1,
};
const IntraFreqCellInfoSIListECN0::Info IntraFreqCellInfoSIListECN0::theInfo = {
	IntraFreqCellInfoSIListECN0::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *NewIntraFreqCellSIHCSRSCP::itemsInfo[2] = {
	&IntraFreqCellID::theInfo,
	&CellInfoSIHCSRSCP::theInfo,
};
const void *NewIntraFreqCellSIHCSRSCP::itemsPres[2] = {
	0,
	1,
};
const NewIntraFreqCellSIHCSRSCP::Info NewIntraFreqCellSIHCSRSCP::theInfo = {
	NewIntraFreqCellSIHCSRSCP::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};


const void *IntraFreqCellInfoSIListHCSRSCP::itemsInfo[2] = {
	&RemovedIntraFreqCellList::theInfo,
	&NewIntraFreqCellSIListHCSRSCP::theInfo,
};
const void *IntraFreqCellInfoSIListHCSRSCP::itemsPres[2] = {
	0,
	1,
};
const IntraFreqCellInfoSIListHCSRSCP::Info IntraFreqCellInfoSIListHCSRSCP::theInfo = {
	IntraFreqCellInfoSIListHCSRSCP::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *NewIntraFreqCellSIHCSECN0::itemsInfo[2] = {
	&IntraFreqCellID::theInfo,
	&CellInfoSIHCSECN0::theInfo,
};
const void *NewIntraFreqCellSIHCSECN0::itemsPres[2] = {
	0,
	1,
};
const NewIntraFreqCellSIHCSECN0::Info NewIntraFreqCellSIHCSECN0::theInfo = {
	NewIntraFreqCellSIHCSECN0::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};


const void *IntraFreqCellInfoSIListHCSECN0::itemsInfo[2] = {
	&RemovedIntraFreqCellList::theInfo,
	&NewIntraFreqCellSIListHCSECN0::theInfo,
};
const void *IntraFreqCellInfoSIListHCSECN0::itemsPres[2] = {
	0,
	1,
};
const IntraFreqCellInfoSIListHCSECN0::Info IntraFreqCellInfoSIListHCSECN0::theInfo = {
	IntraFreqCellInfoSIListHCSECN0::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *NewIntraFreqCellSIRSCPLCRr4::itemsInfo[2] = {
	&IntraFreqCellID::theInfo,
	&CellInfoSIRSCPLCRr4::theInfo,
};
const void *NewIntraFreqCellSIRSCPLCRr4::itemsPres[2] = {
	0,
	1,
};
const NewIntraFreqCellSIRSCPLCRr4::Info NewIntraFreqCellSIRSCPLCRr4::theInfo = {
	NewIntraFreqCellSIRSCPLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};


const void *IntraFreqCellInfoSIListRSCPLCRr4::itemsInfo[2] = {
	&RemovedIntraFreqCellList::theInfo,
	&NewIntraFreqCellSIListRSCPLCRr4::theInfo,
};
const void *IntraFreqCellInfoSIListRSCPLCRr4::itemsPres[2] = {
	0,
	1,
};
const IntraFreqCellInfoSIListRSCPLCRr4::Info IntraFreqCellInfoSIListRSCPLCRr4::theInfo = {
	IntraFreqCellInfoSIListRSCPLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *NewIntraFreqCellSIECN0LCRr4::itemsInfo[2] = {
	&IntraFreqCellID::theInfo,
	&CellInfoSIECN0LCRr4::theInfo,
};
const void *NewIntraFreqCellSIECN0LCRr4::itemsPres[2] = {
	0,
	1,
};
const NewIntraFreqCellSIECN0LCRr4::Info NewIntraFreqCellSIECN0LCRr4::theInfo = {
	NewIntraFreqCellSIECN0LCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};


const void *IntraFreqCellInfoSIListECN0LCRr4::itemsInfo[2] = {
	&RemovedIntraFreqCellList::theInfo,
	&NewIntraFreqCellSIListECN0LCRr4::theInfo,
};
const void *IntraFreqCellInfoSIListECN0LCRr4::itemsPres[2] = {
	0,
	1,
};
const IntraFreqCellInfoSIListECN0LCRr4::Info IntraFreqCellInfoSIListECN0LCRr4::theInfo = {
	IntraFreqCellInfoSIListECN0LCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *NewIntraFreqCellSIHCSRSCPLCRr4::itemsInfo[2] = {
	&IntraFreqCellID::theInfo,
	&CellInfoSIHCSRSCPLCRr4::theInfo,
};
const void *NewIntraFreqCellSIHCSRSCPLCRr4::itemsPres[2] = {
	0,
	1,
};
const NewIntraFreqCellSIHCSRSCPLCRr4::Info NewIntraFreqCellSIHCSRSCPLCRr4::theInfo = {
	NewIntraFreqCellSIHCSRSCPLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};


const void *IntraFreqCellInfoSIListHCSRSCPLCRr4::itemsInfo[2] = {
	&RemovedIntraFreqCellList::theInfo,
	&NewIntraFreqCellSIListHCSRSCPLCRr4::theInfo,
};
const void *IntraFreqCellInfoSIListHCSRSCPLCRr4::itemsPres[2] = {
	0,
	1,
};
const IntraFreqCellInfoSIListHCSRSCPLCRr4::Info IntraFreqCellInfoSIListHCSRSCPLCRr4::theInfo = {
	IntraFreqCellInfoSIListHCSRSCPLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *NewIntraFreqCellSIHCSECN0LCRr4::itemsInfo[2] = {
	&IntraFreqCellID::theInfo,
	&CellInfoSIHCSECN0LCRr4::theInfo,
};
const void *NewIntraFreqCellSIHCSECN0LCRr4::itemsPres[2] = {
	0,
	1,
};
const NewIntraFreqCellSIHCSECN0LCRr4::Info NewIntraFreqCellSIHCSECN0LCRr4::theInfo = {
	NewIntraFreqCellSIHCSECN0LCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};


const void *IntraFreqCellInfoSIListHCSECN0LCRr4::itemsInfo[2] = {
	&RemovedIntraFreqCellList::theInfo,
	&NewIntraFreqCellSIListHCSECN0LCRr4::theInfo,
};
const void *IntraFreqCellInfoSIListHCSECN0LCRr4::itemsPres[2] = {
	0,
	1,
};
const IntraFreqCellInfoSIListHCSECN0LCRr4::Info IntraFreqCellInfoSIListHCSECN0LCRr4::theInfo = {
	IntraFreqCellInfoSIListHCSECN0LCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};


const void *IntraFreqEvent1dr5::itemsInfo[2] = {
	&TriggeringCondition2::theInfo,
	&UseCIO::theInfo,
};
const void *IntraFreqEvent1dr5::itemsPres[2] = {
	0,
	0,
};
const IntraFreqEvent1dr5::Info IntraFreqEvent1dr5::theInfo = {
	IntraFreqEvent1dr5::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};


const void *IntraFreqMeasQuantityTDDsib3List::itemsInfo[0] = {
};
const void *IntraFreqMeasQuantityTDDsib3List::itemsPres[0] = {
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




const void *Fdd::itemsInfo[1] = {
	&IntraFreqRepQuantityRACHFDD::theInfo,
};
const void *Fdd::itemsPres[1] = {
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};



const void *Tdd::itemsInfo[1] = {
	&IntraFreqRepQuantityRACHTDDList::theInfo,
};
const void *Tdd::itemsPres[1] = {
	1,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *IntraFreqReportingQuantityForRACH::itemsInfo[2] = {
	&SFNSFNOTDType::theInfo,
	&ModeSpecificInfo::theInfo,
};
const void *IntraFreqReportingQuantityForRACH::itemsPres[2] = {
	1,
	1,
};
const IntraFreqReportingQuantityForRACH::Info IntraFreqReportingQuantityForRACH::theInfo = {
	IntraFreqReportingQuantityForRACH::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};


const void *IntraFreqReportingQuantity::itemsInfo[3] = {
	&CellReportingQuantities::theInfo,
	&CellReportingQuantities::theInfo,
	&CellReportingQuantities::theInfo,
};
const void *IntraFreqReportingQuantity::itemsPres[3] = {
	1,
	1,
	0,
};
const IntraFreqReportingQuantity::Info IntraFreqReportingQuantity::theInfo = {
	IntraFreqReportingQuantity::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};



const void *MeasurementReportingMode::itemsInfo[2] = {
	&TransferMode::theInfo,
	&PeriodicalOrEventTrigger::theInfo,
};
const void *MeasurementReportingMode::itemsPres[2] = {
	1,
	1,
};
const MeasurementReportingMode::Info MeasurementReportingMode::theInfo = {
	MeasurementReportingMode::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *ReportingInfoForCellDCH::itemsInfo[3] = {
	&IntraFreqReportingQuantity::theInfo,
	&MeasurementReportingMode::theInfo,
	&CellDCHReportCriteria::theInfo,
};
const void *ReportingInfoForCellDCH::itemsPres[3] = {
	1,
	1,
	1,
};
const ReportingInfoForCellDCH::Info ReportingInfoForCellDCH::theInfo = {
	ReportingInfoForCellDCH::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *IntraFreqMeasurementSysInfoRSCP::itemsInfo[6] = {
	&MeasurementIdentity::theInfo,
	&IntraFreqCellInfoSIListRSCP::theInfo,
	&IntraFreqMeasQuantity::theInfo,
	&IntraFreqReportingQuantityForRACH::theInfo,
	&MaxReportedCellsOnRACH::theInfo,
	&ReportingInfoForCellDCH::theInfo,
};
const void *IntraFreqMeasurementSysInfoRSCP::itemsPres[6] = {
	0,
	0,
	0,
	0,
	0,
	0,
};
const IntraFreqMeasurementSysInfoRSCP::Info IntraFreqMeasurementSysInfoRSCP::theInfo = {
	IntraFreqMeasurementSysInfoRSCP::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 6, 0
};

const void *IntraFreqMeasurementSysInfoECN0::itemsInfo[6] = {
	&MeasurementIdentity::theInfo,
	&IntraFreqCellInfoSIListECN0::theInfo,
	&IntraFreqMeasQuantity::theInfo,
	&IntraFreqReportingQuantityForRACH::theInfo,
	&MaxReportedCellsOnRACH::theInfo,
	&ReportingInfoForCellDCH::theInfo,
};
const void *IntraFreqMeasurementSysInfoECN0::itemsPres[6] = {
	0,
	0,
	0,
	0,
	0,
	0,
};
const IntraFreqMeasurementSysInfoECN0::Info IntraFreqMeasurementSysInfoECN0::theInfo = {
	IntraFreqMeasurementSysInfoECN0::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 6, 0
};

const void *IntraFreqMeasurementSysInfoHCSRSCP::itemsInfo[6] = {
	&MeasurementIdentity::theInfo,
	&IntraFreqCellInfoSIListHCSRSCP::theInfo,
	&IntraFreqMeasQuantity::theInfo,
	&IntraFreqReportingQuantityForRACH::theInfo,
	&MaxReportedCellsOnRACH::theInfo,
	&ReportingInfoForCellDCH::theInfo,
};
const void *IntraFreqMeasurementSysInfoHCSRSCP::itemsPres[6] = {
	0,
	0,
	0,
	0,
	0,
	0,
};
const IntraFreqMeasurementSysInfoHCSRSCP::Info IntraFreqMeasurementSysInfoHCSRSCP::theInfo = {
	IntraFreqMeasurementSysInfoHCSRSCP::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 6, 0
};

const void *IntraFreqMeasurementSysInfoHCSECN0::itemsInfo[6] = {
	&MeasurementIdentity::theInfo,
	&IntraFreqCellInfoSIListHCSECN0::theInfo,
	&IntraFreqMeasQuantity::theInfo,
	&IntraFreqReportingQuantityForRACH::theInfo,
	&MaxReportedCellsOnRACH::theInfo,
	&ReportingInfoForCellDCH::theInfo,
};
const void *IntraFreqMeasurementSysInfoHCSECN0::itemsPres[6] = {
	0,
	0,
	0,
	0,
	0,
	0,
};
const IntraFreqMeasurementSysInfoHCSECN0::Info IntraFreqMeasurementSysInfoHCSECN0::theInfo = {
	IntraFreqMeasurementSysInfoHCSECN0::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 6, 0
};

const void *ReportingInfoForCellDCHLCRr4::itemsInfo[3] = {
	&IntraFreqReportingQuantity::theInfo,
	&MeasurementReportingMode::theInfo,
	&CellDCHReportCriteriaLCRr4::theInfo,
};
const void *ReportingInfoForCellDCHLCRr4::itemsPres[3] = {
	1,
	1,
	1,
};
const ReportingInfoForCellDCHLCRr4::Info ReportingInfoForCellDCHLCRr4::theInfo = {
	ReportingInfoForCellDCHLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *IntraFreqMeasurementSysInfoRSCPLCRr4::itemsInfo[6] = {
	&MeasurementIdentity::theInfo,
	&IntraFreqCellInfoSIListRSCPLCRr4::theInfo,
	&IntraFreqMeasQuantity::theInfo,
	&IntraFreqReportingQuantityForRACH::theInfo,
	&MaxReportedCellsOnRACH::theInfo,
	&ReportingInfoForCellDCHLCRr4::theInfo,
};
const void *IntraFreqMeasurementSysInfoRSCPLCRr4::itemsPres[6] = {
	0,
	0,
	0,
	0,
	0,
	0,
};
const IntraFreqMeasurementSysInfoRSCPLCRr4::Info IntraFreqMeasurementSysInfoRSCPLCRr4::theInfo = {
	IntraFreqMeasurementSysInfoRSCPLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 6, 0
};

const void *IntraFreqMeasurementSysInfoECN0LCRr4::itemsInfo[6] = {
	&MeasurementIdentity::theInfo,
	&IntraFreqCellInfoSIListECN0LCRr4::theInfo,
	&IntraFreqMeasQuantity::theInfo,
	&IntraFreqReportingQuantityForRACH::theInfo,
	&MaxReportedCellsOnRACH::theInfo,
	&ReportingInfoForCellDCHLCRr4::theInfo,
};
const void *IntraFreqMeasurementSysInfoECN0LCRr4::itemsPres[6] = {
	0,
	0,
	0,
	0,
	0,
	0,
};
const IntraFreqMeasurementSysInfoECN0LCRr4::Info IntraFreqMeasurementSysInfoECN0LCRr4::theInfo = {
	IntraFreqMeasurementSysInfoECN0LCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 6, 0
};

const void *IntraFreqMeasurementSysInfoHCSRSCPLCRr4::itemsInfo[6] = {
	&MeasurementIdentity::theInfo,
	&IntraFreqCellInfoSIListHCSRSCPLCRr4::theInfo,
	&IntraFreqMeasQuantity::theInfo,
	&IntraFreqReportingQuantityForRACH::theInfo,
	&MaxReportedCellsOnRACH::theInfo,
	&ReportingInfoForCellDCHLCRr4::theInfo,
};
const void *IntraFreqMeasurementSysInfoHCSRSCPLCRr4::itemsPres[6] = {
	0,
	0,
	0,
	0,
	0,
	0,
};
const IntraFreqMeasurementSysInfoHCSRSCPLCRr4::Info IntraFreqMeasurementSysInfoHCSRSCPLCRr4::theInfo = {
	IntraFreqMeasurementSysInfoHCSRSCPLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 6, 0
};

const void *IntraFreqMeasurementSysInfoHCSECN0LCRr4::itemsInfo[6] = {
	&MeasurementIdentity::theInfo,
	&IntraFreqCellInfoSIListHCSECN0LCRr4::theInfo,
	&IntraFreqMeasQuantity::theInfo,
	&IntraFreqReportingQuantityForRACH::theInfo,
	&MaxReportedCellsOnRACH::theInfo,
	&ReportingInfoForCellDCHLCRr4::theInfo,
};
const void *IntraFreqMeasurementSysInfoHCSECN0LCRr4::itemsPres[6] = {
	0,
	0,
	0,
	0,
	0,
	0,
};
const IntraFreqMeasurementSysInfoHCSECN0LCRr4::Info IntraFreqMeasurementSysInfoHCSECN0LCRr4::theInfo = {
	IntraFreqMeasurementSysInfoHCSECN0LCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 6, 0
};

const void *IntraFreqReportCriteria::choicesInfo[3] = {
	&IntraFreqReportingCriteria::theInfo,
	&PeriodicalWithReportingCellStatus::theInfo,
	&ReportingCellStatusOpt::theInfo,
};
const IntraFreqReportCriteria::Info IntraFreqReportCriteria::theInfo = {
	IntraFreqReportCriteria::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *IntraFreqReportCriteriar4::choicesInfo[3] = {
	&IntraFreqReportingCriteriar4::theInfo,
	&PeriodicalWithReportingCellStatus::theInfo,
	&ReportingCellStatusOpt::theInfo,
};
const IntraFreqReportCriteriar4::Info IntraFreqReportCriteriar4::theInfo = {
	IntraFreqReportCriteriar4::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *IntraFreqReportCriteriar6::choicesInfo[3] = {
	&IntraFreqReportingCriteriar6::theInfo,
	&PeriodicalWithReportingCellStatus::theInfo,
	&ReportingCellStatusOpt::theInfo,
};
const IntraFreqReportCriteriar6::Info IntraFreqReportCriteriar6::theInfo = {
	IntraFreqReportCriteriar6::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *IntraFreqReportCriteriar7::choicesInfo[3] = {
	&IntraFreqReportingCriteriar7::theInfo,
	&PeriodicalWithReportingCellStatus::theInfo,
	&ReportingCellStatusOpt::theInfo,
};
const IntraFreqReportCriteriar7::Info IntraFreqReportCriteriar7::theInfo = {
	IntraFreqReportCriteriar7::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *IntraFreqReportCriteriar9::choicesInfo[3] = {
	&IntraFreqReportingCriteriar9::theInfo,
	&PeriodicalWithReportingCellStatus::theInfo,
	&ReportingCellStatusOpt::theInfo,
};
const IntraFreqReportCriteriar9::Info IntraFreqReportCriteriar9::theInfo = {
	IntraFreqReportCriteriar9::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *IntraFreqReportingCriteria1br5::itemsInfo[1] = {
	&PeriodicReportingInfo1b::theInfo,
};
const void *IntraFreqReportingCriteria1br5::itemsPres[1] = {
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

const void *IntraFrequencyMeasurement::itemsInfo[5] = {
	&IntraFreqCellInfoList::theInfo,
	&IntraFreqMeasQuantity::theInfo,
	&IntraFreqReportingQuantity::theInfo,
	&MeasurementValidity::theInfo,
	&IntraFreqReportCriteria::theInfo,
};
const void *IntraFrequencyMeasurement::itemsPres[5] = {
	0,
	0,
	0,
	0,
	0,
};
const IntraFrequencyMeasurement::Info IntraFrequencyMeasurement::theInfo = {
	IntraFrequencyMeasurement::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 5, 0
};

const void *IntraFrequencyMeasurementr4::itemsInfo[5] = {
	&IntraFreqCellInfoListr4::theInfo,
	&IntraFreqMeasQuantity::theInfo,
	&IntraFreqReportingQuantity::theInfo,
	&MeasurementValidity::theInfo,
	&IntraFreqReportCriteriar4::theInfo,
};
const void *IntraFrequencyMeasurementr4::itemsPres[5] = {
	0,
	0,
	0,
	0,
	0,
};
const IntraFrequencyMeasurementr4::Info IntraFrequencyMeasurementr4::theInfo = {
	IntraFrequencyMeasurementr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 5, 0
};

const void *IntraFrequencyMeasurementr6::itemsInfo[5] = {
	&IntraFreqCellInfoListr4::theInfo,
	&IntraFreqMeasQuantity::theInfo,
	&IntraFreqReportingQuantity::theInfo,
	&MeasurementValidity::theInfo,
	&IntraFreqReportCriteriar6::theInfo,
};
const void *IntraFrequencyMeasurementr6::itemsPres[5] = {
	0,
	0,
	0,
	0,
	1,
};
const IntraFrequencyMeasurementr6::Info IntraFrequencyMeasurementr6::theInfo = {
	IntraFrequencyMeasurementr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 4, 0
};

const void *IntraFrequencyMeasurementr7::itemsInfo[5] = {
	&IntraFreqCellInfoListr4::theInfo,
	&IntraFreqMeasQuantity::theInfo,
	&IntraFreqReportingQuantity::theInfo,
	&MeasurementValidity::theInfo,
	&IntraFreqReportCriteriar7::theInfo,
};
const void *IntraFrequencyMeasurementr7::itemsPres[5] = {
	0,
	0,
	0,
	0,
	0,
};
const IntraFrequencyMeasurementr7::Info IntraFrequencyMeasurementr7::theInfo = {
	IntraFrequencyMeasurementr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 5, 0
};

const void *IntraFrequencyMeasurementr9::itemsInfo[6] = {
	&IntraFreqCellInfoListr9::theInfo,
	&IntraFreqCellInfoListOnSecULFreq::theInfo,
	&IntraFreqMeasQuantity::theInfo,
	&IntraFreqReportingQuantity::theInfo,
	&MeasurementValidity::theInfo,
	&IntraFreqReportCriteriar9::theInfo,
};
const void *IntraFrequencyMeasurementr9::itemsPres[6] = {
	0,
	0,
	0,
	0,
	0,
	0,
};
const IntraFrequencyMeasurementr9::Info IntraFrequencyMeasurementr9::theInfo = {
	IntraFrequencyMeasurementr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 6, 0
};








const void *TrafficVolumeMeasuredResults::itemsInfo[4] = {
	&RBIdentity::theInfo,
	&RLCBuffersPayload::theInfo,
	&AverageRLCBufferPayload::theInfo,
	&VarianceOfRLCBufferPayload::theInfo,
};
const void *TrafficVolumeMeasuredResults::itemsPres[4] = {
	1,
	0,
	0,
	0,
};
const TrafficVolumeMeasuredResults::Info TrafficVolumeMeasuredResults::theInfo = {
	TrafficVolumeMeasuredResults::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 3, 0
};





const void *SIRMeasurementResults::itemsInfo[2] = {
	&TFCSIdentityPlain::theInfo,
	&SIRTimeslotList::theInfo,
};
const void *SIRMeasurementResults::itemsPres[2] = {
	1,
	1,
};
const SIRMeasurementResults::Info SIRMeasurementResults::theInfo = {
	SIRMeasurementResults::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};


const void *Tdd::itemsInfo[1] = {
	&SIRMeasurementList::theInfo,
};
const void *Tdd::itemsPres[1] = {
	0,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *QualityMeasuredResults::itemsInfo[2] = {
	&BLERMeasurementResultsList::theInfo,
	&ModeSpecificInfo::theInfo,
};
const void *QualityMeasuredResults::itemsPres[2] = {
	0,
	1,
};
const QualityMeasuredResults::Info QualityMeasuredResults::theInfo = {
	QualityMeasuredResults::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};



const void *UERXTXReportEntry::itemsInfo[2] = {
	&PrimaryCPICHInfo::theInfo,
	&UERXTXTimeDifferenceType1::theInfo,
};
const void *UERXTXReportEntry::itemsPres[2] = {
	1,
	1,
};
const UERXTXReportEntry::Info UERXTXReportEntry::theInfo = {
	UERXTXReportEntry::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};


const void *Fdd::itemsInfo[2] = {
	&UETransmittedPower::theInfo,
	&UERXTXReportEntryList::theInfo,
};
const void *Fdd::itemsPres[2] = {
	0,
	0,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};


const void *Tdd::itemsInfo[2] = {
	&UETransmittedPowerTDDList::theInfo,
	&ULTimingAdvance::theInfo,
};
const void *Tdd::itemsPres[2] = {
	0,
	0,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *UEInternalMeasuredResults::itemsInfo[1] = {
	&ModeSpecificInfo::theInfo,
};
const void *UEInternalMeasuredResults::itemsPres[1] = {
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














const void *SatData::itemsInfo[2] = {
	&SatID::theInfo,
	&IODE::theInfo,
};
const void *SatData::itemsPres[2] = {
	1,
	1,
};
const SatData::Info SatData::theInfo = {
	SatData::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};


const void *UEPositioningGPSNavModelAddDataReq::itemsInfo[4] = {
	&Gps_Week::theInfo,
	&Gps_Toe::theInfo,
	&TToeLimit::theInfo,
	&SatDataList::theInfo,
};
const void *UEPositioningGPSNavModelAddDataReq::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const UEPositioningGPSNavModelAddDataReq::Info UEPositioningGPSNavModelAddDataReq::theInfo = {
	UEPositioningGPSNavModelAddDataReq::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 0, 0
};

const void *UEPositioningGPSAdditionalAssistanceDataRequest::itemsInfo[10] = {
	&AlmanacRequest::theInfo,
	&UtcModelRequest::theInfo,
	&IonosphericModelRequest::theInfo,
	&NavigationModelRequest::theInfo,
	&DgpsCorrectionsRequest::theInfo,
	&ReferenceLocationRequest::theInfo,
	&ReferenceTimeRequest::theInfo,
	&AquisitionAssistanceRequest::theInfo,
	&RealTimeIntegrityRequest::theInfo,
	&UEPositioningGPSNavModelAddDataReq::theInfo,
};
const void *UEPositioningGPSAdditionalAssistanceDataRequest::itemsPres[10] = {
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
const UEPositioningGPSAdditionalAssistanceDataRequest::Info UEPositioningGPSAdditionalAssistanceDataRequest::theInfo = {
	UEPositioningGPSAdditionalAssistanceDataRequest::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	10, 1, 0
};

const void *UEPositioningError::itemsInfo[2] = {
	&UEPositioningErrorCause::theInfo,
	&UEPositioningGPSAdditionalAssistanceDataRequest::theInfo,
};
const void *UEPositioningError::itemsPres[2] = {
	1,
	0,
};
const UEPositioningError::Info UEPositioningError::theInfo = {
	UEPositioningError::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *UEPositioningMeasuredResults::itemsInfo[4] = {
	&UEPositioningOTDOAMeasurement::theInfo,
	&UEPositioningPositionEstimateInfo::theInfo,
	&UEPositioningGPSMeasurementResults::theInfo,
	&UEPositioningError::theInfo,
};
const void *UEPositioningMeasuredResults::itemsPres[4] = {
	0,
	0,
	0,
	0,
};
const UEPositioningMeasuredResults::Info UEPositioningMeasuredResults::theInfo = {
	UEPositioningMeasuredResults::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 4, 0
};


const void *MeasuredResults::choicesInfo[8] = {
	&IntraFreqMeasuredResultsList::theInfo,
	&InterFreqMeasuredResultsList::theInfo,
	&InterRATMeasuredResultsList::theInfo,
	&TrafficVolumeMeasuredResultsList::theInfo,
	&QualityMeasuredResults::theInfo,
	&UEInternalMeasuredResults::theInfo,
	&UEPositioningMeasuredResults::theInfo,
	&Spare::theInfo,
};
const MeasuredResults::Info MeasuredResults::theInfo = {
	MeasuredResults::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	7
};

const void *MeasuredResultsOnSecUlFreq::itemsInfo[1] = {
	&IntraFrequencyMeasuredResultsListOnSecULFreq::theInfo,
};
const void *MeasuredResultsOnSecUlFreq::itemsPres[1] = {
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

const void *Fdd::itemsInfo[1] = {
	&FrequencyInfo::theInfo,
};
const void *Fdd::itemsPres[1] = {
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};


const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Neighbourv390ext::itemsInfo[1] = {
	&ModeSpecificInfo::theInfo,
};
const void *Neighbourv390ext::itemsPres[1] = {
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
const void *UEPositioningOTDOAMeasurementv390ext::itemsPres[1] = {
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
const void *UEPositioningMeasuredResultsv390ext::itemsPres[1] = {
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
const void *MeasuredResultsv390ext::itemsPres[1] = {
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

const void *MeasuredResultsv590ext::choicesInfo[2] = {
	&IntraFrequencyMeasuredResultsListv590ext::theInfo,
	&InterFrequencyMeasuredResultsListv590ext::theInfo,
};
const MeasuredResultsv590ext::Info MeasuredResultsv590ext::theInfo = {
	MeasuredResultsv590ext::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Tdd384_768::itemsInfo[1] = {
	&EXTULTimingAdvance::theInfo,
};
const void *Tdd384_768::itemsPres[1] = {
	0,
};
const Tdd384_768::Info Tdd384_768::theInfo = {
	Tdd384_768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};



const void *TADVinfoext::itemsInfo[2] = {
	&T_ADV::theInfo,
	&Sfn::theInfo,
};
const void *TADVinfoext::itemsPres[2] = {
	1,
	1,
};
const TADVinfoext::Info TADVinfoext::theInfo = {
	TADVinfoext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *Tdd128::itemsInfo[1] = {
	&TADVinfoext::theInfo,
};
const void *Tdd128::itemsPres[1] = {
	0,
};
const Tdd128::Info Tdd128::theInfo = {
	Tdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Tdd384_768::theInfo,
	&Tdd128::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *UEInternalMeasuredResultsv770ext::itemsInfo[1] = {
	&ModeSpecificInfo::theInfo,
};
const void *UEInternalMeasuredResultsv770ext::itemsPres[1] = {
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





const void *UEPositioningGANSSAdditionalAssistanceDataRequest::itemsInfo[4] = {
	&GanssReferenceTime::theInfo,
	&GanssreferenceLocation::theInfo,
	&GanssIonosphericModel::theInfo,
	&GanssRequestedGenericAssistanceDataList::theInfo,
};
const void *UEPositioningGANSSAdditionalAssistanceDataRequest::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const UEPositioningGANSSAdditionalAssistanceDataRequest::Info UEPositioningGANSSAdditionalAssistanceDataRequest::theInfo = {
	UEPositioningGANSSAdditionalAssistanceDataRequest::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 0, 0
};

const void *UEPositioningErrorr7::itemsInfo[3] = {
	&UEPositioningErrorCauser7::theInfo,
	&UEPositioningGPSAdditionalAssistanceDataRequest::theInfo,
	&UEPositioningGANSSAdditionalAssistanceDataRequest::theInfo,
};
const void *UEPositioningErrorr7::itemsPres[3] = {
	1,
	0,
	0,
};
const UEPositioningErrorr7::Info UEPositioningErrorr7::theInfo = {
	UEPositioningErrorr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *UEPositioningMeasuredResultsv770ext::itemsInfo[4] = {
	&UEPositioningPositionEstimateInfov770ext::theInfo,
	&UEPositioningGPSMeasurementResultsv770ext::theInfo,
	&UEPositioningErrorr7::theInfo,
	&UEPositioningGANSSMeasuredResults::theInfo,
};
const void *UEPositioningMeasuredResultsv770ext::itemsPres[4] = {
	0,
	0,
	0,
	0,
};
const UEPositioningMeasuredResultsv770ext::Info UEPositioningMeasuredResultsv770ext::theInfo = {
	UEPositioningMeasuredResultsv770ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 4, 0
};

const void *MeasuredResultsv770ext::choicesInfo[2] = {
	&UEInternalMeasuredResultsv770ext::theInfo,
	&UEPositioningMeasuredResultsv770ext::theInfo,
};
const MeasuredResultsv770ext::Info MeasuredResultsv770ext::theInfo = {
	MeasuredResultsv770ext::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};



const void *UEPositioningGANSSAdditionalAssistanceDataRequestv860ext::itemsInfo[3] = {
	&GanssAddIonoModelReq::theInfo,
	&ganssEOPreq::theInfo,
	&GanssRequestedGenericAssistanceDataListv860ext::theInfo,
};
const void *UEPositioningGANSSAdditionalAssistanceDataRequestv860ext::itemsPres[3] = {
	0,
	0,
	1,
};
const UEPositioningGANSSAdditionalAssistanceDataRequestv860ext::Info UEPositioningGANSSAdditionalAssistanceDataRequestv860ext::theInfo = {
	UEPositioningGANSSAdditionalAssistanceDataRequestv860ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *UEPositioningErrorv860ext::itemsInfo[1] = {
	&UEPositioningGANSSAdditionalAssistanceDataRequestv860ext::theInfo,
};
const void *UEPositioningErrorv860ext::itemsPres[1] = {
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

const void *UEPositioningMeasuredResultsv860ext::itemsInfo[2] = {
	&UEPositioningErrorv860ext::theInfo,
	&UEPositioningGANSSMeasuredResultsv860ext::theInfo,
};
const void *UEPositioningMeasuredResultsv860ext::itemsPres[2] = {
	0,
	0,
};
const UEPositioningMeasuredResultsv860ext::Info UEPositioningMeasuredResultsv860ext::theInfo = {
	UEPositioningMeasuredResultsv860ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
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

const void *MeasuredResultsv920ext::choicesInfo[2] = {
	&IntraFreqMeasuredResultsListv920ext::theInfo,
	&InterFreqMeasuredResultsListv920ext::theInfo,
};
const MeasuredResultsv920ext::Info MeasuredResultsv920ext::theInfo = {
	MeasuredResultsv920ext::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};





const void *TADVinfo::itemsInfo[2] = {
	&T_ADV::theInfo,
	&Sfn::theInfo,
};
const void *TADVinfo::itemsPres[2] = {
	1,
	1,
};
const TADVinfo::Info TADVinfo::theInfo = {
	TADVinfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *UEInternalMeasuredResultsLCRr4::itemsInfo[2] = {
	&UETransmittedPowerTDDList::theInfo,
	&TADVinfo::theInfo,
};
const void *UEInternalMeasuredResultsLCRr4::itemsPres[2] = {
	0,
	0,
};
const UEInternalMeasuredResultsLCRr4::Info UEInternalMeasuredResultsLCRr4::theInfo = {
	UEInternalMeasuredResultsLCRr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};


const void *MeasuredResultsLCRr4::choicesInfo[8] = {
	&IntraFreqMeasuredResultsList::theInfo,
	&InterFreqMeasuredResultsList::theInfo,
	&InterRATMeasuredResultsList::theInfo,
	&TrafficVolumeMeasuredResultsList::theInfo,
	&QualityMeasuredResults::theInfo,
	&UEInternalMeasuredResultsLCRr4::theInfo,
	&UEPositioningMeasuredResults::theInfo,
	&Spare::theInfo,
};
const MeasuredResultsLCRr4::Info MeasuredResultsLCRr4::theInfo = {
	MeasuredResultsLCRr4::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	7
};



const void *MeasuredResultsListv770xet::itemsInfo[0] = {
};
const void *MeasuredResultsListv770xet::itemsPres[0] = {
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
const void *MeasuredResultsListv860ext::itemsPres[0] = {
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


const void *MeasurementQuantity::choicesInfo[4] = {
	&CPICHEcN0::theInfo,
	&CPICHRSCP::theInfo,
	&Pathloss::theInfo,
	&Spare::theInfo,
};
const MeasurementQuantity::Info MeasurementQuantity::theInfo = {
	MeasurementQuantity::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	3
};

const void *Fdd::itemsInfo[1] = {
	&MeasurementQuantity::theInfo,
};
const void *Fdd::itemsPres[1] = {
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *Tdd::itemsInfo[2] = {
	&TimeslotISCPList::theInfo,
	&PrimaryCCPCHRSCP::theInfo,
};
const void *Tdd::itemsPres[2] = {
	0,
	0,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *CurrentCell::itemsInfo[1] = {
	&ModeSpecificInfo::theInfo,
};
const void *CurrentCell::itemsPres[1] = {
	1,
};
const CurrentCell::Info CurrentCell::theInfo = {
	CurrentCell::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};


const void *MeasurementQuantity::choicesInfo[4] = {
	&CPICHEcN0::theInfo,
	&CPICHRSCP::theInfo,
	&Pathloss::theInfo,
	&Spare::theInfo,
};
const MeasurementQuantity::Info MeasurementQuantity::theInfo = {
	MeasurementQuantity::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	3
};

const void *Fdd::itemsInfo[2] = {
	&PrimaryCPICHInfo::theInfo,
	&MeasurementQuantity::theInfo,
};
const void *Fdd::itemsPres[2] = {
	1,
	0,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *Tdd::itemsInfo[2] = {
	&CellParametersID::theInfo,
	&PrimaryCCPCHRSCP::theInfo,
};
const void *Tdd::itemsPres[2] = {
	1,
	1,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *MonitoredCellRACHResult::itemsInfo[2] = {
	&SFNSFNObsTimeDifference::theInfo,
	&ModeSpecificInfo::theInfo,
};
const void *MonitoredCellRACHResult::itemsPres[2] = {
	0,
	1,
};
const MonitoredCellRACHResult::Info MonitoredCellRACHResult::theInfo = {
	MonitoredCellRACHResult::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};


const void *MeasuredResultsOnRACH::itemsInfo[2] = {
	&CurrentCell::theInfo,
	&MonitoredCellRACHList::theInfo,
};
const void *MeasuredResultsOnRACH::itemsPres[2] = {
	1,
	0,
};
const MeasuredResultsOnRACH::Info MeasuredResultsOnRACH::theInfo = {
	MeasuredResultsOnRACH::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};


const void *MeasuredResultsOnRACHv7g0ext::itemsInfo[2] = {
	&DeltaRSCPPerCell::theInfo,
	&MonitoredCellRACHListv7g0ext::theInfo,
};
const void *MeasuredResultsOnRACHv7g0ext::itemsPres[2] = {
	0,
	0,
};
const MeasuredResultsOnRACHv7g0ext::Info MeasuredResultsOnRACHv7g0ext::theInfo = {
	MeasuredResultsOnRACHv7g0ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};



const void *MeasuredResultsOnRACHinterFreq::itemsInfo[3] = {
	&InterFreqCellIndication_SIB11::theInfo,
	&InterFreqCellIndication_SIB12::theInfo,
	&InterFreqRACHRepCellsList::theInfo,
};
const void *MeasuredResultsOnRACHinterFreq::itemsPres[3] = {
	1,
	1,
	1,
};
const MeasuredResultsOnRACHinterFreq::Info MeasuredResultsOnRACHinterFreq::theInfo = {
	MeasuredResultsOnRACHinterFreq::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};








const void *UEPositioningReportingQuantity::itemsInfo[8] = {
	&UEPositioningMethodType::theInfo,
	&PositioningMethod::theInfo,
	&UEPositioningResponseTime::theInfo,
	&UEPositioningAccuracy::theInfo,
	&Gps_TimingOfCellWanted::theInfo,
	&Dummy2::theInfo,
	&AdditionalAssistanceDataRequest::theInfo,
	&EnvironmentCharacterisation::theInfo,
};
const void *UEPositioningReportingQuantity::itemsPres[8] = {
	1,
	1,
	1,
	0,
	1,
	1,
	1,
	0,
};
const UEPositioningReportingQuantity::Info UEPositioningReportingQuantity::theInfo = {
	UEPositioningReportingQuantity::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	8, 2, 0
};






const void *UEPositioningEventSpecificInfo::choicesInfo[3] = {
	&ThresholdPositionChange::theInfo,
	&ThresholdSFNSFNChange::theInfo,
	&ThresholdSFNGPSTOW::theInfo,
};
const UEPositioningEventSpecificInfo::Info UEPositioningEventSpecificInfo::theInfo = {
	UEPositioningEventSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *UEPositioningEventParam::itemsInfo[4] = {
	&ReportingAmount::theInfo,
	&ReportFirstFix::theInfo,
	&UEPositioningMeasurementInterval::theInfo,
	&UEPositioningEventSpecificInfo::theInfo,
};
const void *UEPositioningEventParam::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const UEPositioningEventParam::Info UEPositioningEventParam::theInfo = {
	UEPositioningEventParam::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 0, 0
};



const void *UEPositioningReportCriteria::choicesInfo[3] = {
	&UEPositioningEventParamList::theInfo,
	&PeriodicalReportingCriteria::theInfo,
	&NoReporting::theInfo,
};
const UEPositioningReportCriteria::Info UEPositioningReportCriteria::theInfo = {
	UEPositioningReportCriteria::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};


const void *Fdd::itemsInfo[1] = {
	&PrimaryCPICHInfo::theInfo,
};
const void *Fdd::itemsPres[1] = {
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *Tdd::itemsInfo[1] = {
	&CellAndChannelIdentity::theInfo,
};
const void *Tdd::itemsPres[1] = {
	1,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *UeBased::itemsInfo[0] = {
};
const void *UeBased::itemsPres[0] = {
};
const UeBased::Info UeBased::theInfo = {
	UeBased::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *UeAssisted::itemsInfo[0] = {
};
const void *UeAssisted::itemsPres[0] = {
};
const UeAssisted::Info UeAssisted::theInfo = {
	UeAssisted::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *PositioningMode::choicesInfo[2] = {
	&UeBased::theInfo,
	&UeAssisted::theInfo,
};
const PositioningMode::Info PositioningMode::theInfo = {
	PositioningMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};



const void *UEPositioningIPDLParameters::itemsInfo[5] = {
	&IPSpacing::theInfo,
	&IPLength::theInfo,
	&Ip_Offset::theInfo,
	&Seed::theInfo,
	&BurstModeParameters::theInfo,
};
const void *UEPositioningIPDLParameters::itemsPres[5] = {
	1,
	1,
	1,
	1,
	0,
};
const UEPositioningIPDLParameters::Info UEPositioningIPDLParameters::theInfo = {
	UEPositioningIPDLParameters::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 1, 0
};

const void *UEPositioningOTDOAReferenceCellInfo::itemsInfo[5] = {
	&Sfn::theInfo,
	&ModeSpecificInfo::theInfo,
	&FrequencyInfo::theInfo,
	&PositioningMode::theInfo,
	&UEPositioningIPDLParameters::theInfo,
};
const void *UEPositioningOTDOAReferenceCellInfo::itemsPres[5] = {
	0,
	1,
	0,
	1,
	0,
};
const UEPositioningOTDOAReferenceCellInfo::Info UEPositioningOTDOAReferenceCellInfo::theInfo = {
	UEPositioningOTDOAReferenceCellInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 3, 0
};

const void *Fdd::itemsInfo[1] = {
	&PrimaryCPICHInfo::theInfo,
};
const void *Fdd::itemsPres[1] = {
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *Tdd::itemsInfo[1] = {
	&CellAndChannelIdentity::theInfo,
};
const void *Tdd::itemsPres[1] = {
	1,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};



const void *SFNSFNRelTimeDifference1::itemsInfo[2] = {
	&Sfn_Offset::theInfo,
	&Sfn_sfn_Reltimedifference::theInfo,
};
const void *SFNSFNRelTimeDifference1::itemsPres[2] = {
	1,
	1,
};
const SFNSFNRelTimeDifference1::Info SFNSFNRelTimeDifference1::theInfo = {
	SFNSFNRelTimeDifference1::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};



const void *UeBased::itemsInfo[0] = {
};
const void *UeBased::itemsPres[0] = {
};
const UeBased::Info UeBased::theInfo = {
	UeBased::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *UeAssisted::itemsInfo[0] = {
};
const void *UeAssisted::itemsPres[0] = {
};
const UeAssisted::Info UeAssisted::theInfo = {
	UeAssisted::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *PositioningMode::choicesInfo[2] = {
	&UeBased::theInfo,
	&UeAssisted::theInfo,
};
const PositioningMode::Info PositioningMode::theInfo = {
	PositioningMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *UEPositioningOTDOANeighbourCellInfo::itemsInfo[7] = {
	&ModeSpecificInfo::theInfo,
	&FrequencyInfo::theInfo,
	&UEPositioningIPDLParameters::theInfo,
	&SFNSFNRelTimeDifference1::theInfo,
	&SFNSFNDrift::theInfo,
	&OTDOASearchWindowSize::theInfo,
	&PositioningMode::theInfo,
};
const void *UEPositioningOTDOANeighbourCellInfo::itemsPres[7] = {
	1,
	0,
	0,
	1,
	0,
	1,
	1,
};
const UEPositioningOTDOANeighbourCellInfo::Info UEPositioningOTDOANeighbourCellInfo::theInfo = {
	UEPositioningOTDOANeighbourCellInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	7, 3, 0
};


const void *UEPositioningOTDOAAssistanceData::itemsInfo[2] = {
	&UEPositioningOTDOAReferenceCellInfo::theInfo,
	&UEPositioningOTDOANeighbourCellList::theInfo,
};
const void *UEPositioningOTDOAAssistanceData::itemsPres[2] = {
	0,
	0,
};
const UEPositioningOTDOAAssistanceData::Info UEPositioningOTDOAAssistanceData::theInfo = {
	UEPositioningOTDOAAssistanceData::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};




const void *Utran_GPSTimingOfCell::itemsInfo[2] = {
	&Ms_part::theInfo,
	&Ls_part::theInfo,
};
const void *Utran_GPSTimingOfCell::itemsPres[2] = {
	1,
	1,
};
const Utran_GPSTimingOfCell::Info Utran_GPSTimingOfCell::theInfo = {
	Utran_GPSTimingOfCell::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *Fdd::itemsInfo[1] = {
	&PrimaryCPICHInfo::theInfo,
};
const void *Fdd::itemsPres[1] = {
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *Tdd::itemsInfo[1] = {
	&CellParametersID::theInfo,
};
const void *Tdd::itemsPres[1] = {
	1,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};


const void *UTRANGPSReferenceTime::itemsInfo[3] = {
	&Utran_GPSTimingOfCell::theInfo,
	&ModeSpecificInfo::theInfo,
	&Sfn::theInfo,
};
const void *UTRANGPSReferenceTime::itemsPres[3] = {
	1,
	0,
	1,
};
const UTRANGPSReferenceTime::Info UTRANGPSReferenceTime::theInfo = {
	UTRANGPSReferenceTime::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};



const void *UEPositioningGPSReferenceTime::itemsInfo[6] = {
	&Gps_Week::theInfo,
	&GPSTOW1msec::theInfo,
	&UTRANGPSReferenceTime::theInfo,
	&SFNTOWUncertainty::theInfo,
	&UTRANGPSDriftRate::theInfo,
	&GPSTOWAssistList::theInfo,
};
const void *UEPositioningGPSReferenceTime::itemsPres[6] = {
	1,
	1,
	0,
	0,
	0,
	0,
};
const UEPositioningGPSReferenceTime::Info UEPositioningGPSReferenceTime::theInfo = {
	UEPositioningGPSReferenceTime::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 4, 0
};

const void *ReferenceLocation::itemsInfo[1] = {
	&EllipsoidPointAltitudeEllipsoide::theInfo,
};
const void *ReferenceLocation::itemsPres[1] = {
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

const void *UEPositioningGPSDGPSCorrections::itemsInfo[3] = {
	&GPSTOW1sec::theInfo,
	&DiffCorrectionStatus::theInfo,
	&DGPSCorrectionSatInfoList::theInfo,
};
const void *UEPositioningGPSDGPSCorrections::itemsPres[3] = {
	1,
	1,
	1,
};
const UEPositioningGPSDGPSCorrections::Info UEPositioningGPSDGPSCorrections::theInfo = {
	UEPositioningGPSDGPSCorrections::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};











const void *SubFrame1Reserved::itemsInfo[4] = {
	&Reserved1::theInfo,
	&Reserved2::theInfo,
	&Reserved3::theInfo,
	&Reserved4::theInfo,
};
const void *SubFrame1Reserved::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const SubFrame1Reserved::Info SubFrame1Reserved::theInfo = {
	SubFrame1Reserved::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 0, 0
};
























const void *EphemerisParameter::itemsInfo[29] = {
	&CodeOnL2::theInfo,
	&UraIndex::theInfo,
	&SatHealth::theInfo,
	&Iodc::theInfo,
	&L2Pflag::theInfo,
	&SubFrame1Reserved::theInfo,
	&T_GD::theInfo,
	&T_oc::theInfo,
	&Af2::theInfo,
	&Af1::theInfo,
	&Af0::theInfo,
	&C_rs::theInfo,
	&Delta_n::theInfo,
	&M0::theInfo,
	&C_uc::theInfo,
	&E::theInfo,
	&C_us::theInfo,
	&A_Sqrt::theInfo,
	&T_oe::theInfo,
	&FitInterval::theInfo,
	&Aodo::theInfo,
	&C_ic::theInfo,
	&Omega0::theInfo,
	&C_is::theInfo,
	&I0::theInfo,
	&C_rc::theInfo,
	&Omega::theInfo,
	&OmegaDot::theInfo,
	&IDot::theInfo,
};
const void *EphemerisParameter::itemsPres[29] = {
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
};
const EphemerisParameter::Info EphemerisParameter::theInfo = {
	EphemerisParameter::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	29, 0, 0
};

const void *NavigationModelSatInfo::itemsInfo[3] = {
	&SatID::theInfo,
	&SatelliteStatus::theInfo,
	&EphemerisParameter::theInfo,
};
const void *NavigationModelSatInfo::itemsPres[3] = {
	1,
	1,
	0,
};
const NavigationModelSatInfo::Info NavigationModelSatInfo::theInfo = {
	NavigationModelSatInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};


const void *UEPositioningGPSNavigationModel::itemsInfo[1] = {
	&NavigationModelSatInfoList::theInfo,
};
const void *UEPositioningGPSNavigationModel::itemsPres[1] = {
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









const void *UEPositioningGPSIonosphericModel::itemsInfo[8] = {
	&Alpha0::theInfo,
	&Alpha1::theInfo,
	&Alpha2::theInfo,
	&Alpha3::theInfo,
	&Beta0::theInfo,
	&Beta1::theInfo,
	&Beta2::theInfo,
	&Beta3::theInfo,
};
const void *UEPositioningGPSIonosphericModel::itemsPres[8] = {
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
};
const UEPositioningGPSIonosphericModel::Info UEPositioningGPSIonosphericModel::theInfo = {
	UEPositioningGPSIonosphericModel::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	8, 0, 0
};









const void *UEPositioningGPSUTCModel::itemsInfo[8] = {
	&A1::theInfo,
	&A0::theInfo,
	&T_ot::theInfo,
	&Wn_t::theInfo,
	&Delta_t_LS::theInfo,
	&Wn_lsf::theInfo,
	&Dn::theInfo,
	&Delta_t_LSF::theInfo,
};
const void *UEPositioningGPSUTCModel::itemsPres[8] = {
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
};
const UEPositioningGPSUTCModel::Info UEPositioningGPSUTCModel::theInfo = {
	UEPositioningGPSUTCModel::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	8, 0, 0
};



const void *UEPositioningGPSAlmanac::itemsInfo[3] = {
	&Wn_a::theInfo,
	&AlmanacSatInfoList::theInfo,
	&Sv_GlobalHealth::theInfo,
};
const void *UEPositioningGPSAlmanac::itemsPres[3] = {
	1,
	1,
	0,
};
const UEPositioningGPSAlmanac::Info UEPositioningGPSAlmanac::theInfo = {
	UEPositioningGPSAlmanac::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};

const void *UEPositioningGPSAcquisitionAssistance::itemsInfo[3] = {
	&GPSTOW1msec::theInfo,
	&UTRANGPSReferenceTime::theInfo,
	&AcquisitionSatInfoList::theInfo,
};
const void *UEPositioningGPSAcquisitionAssistance::itemsPres[3] = {
	1,
	0,
	1,
};
const UEPositioningGPSAcquisitionAssistance::Info UEPositioningGPSAcquisitionAssistance::theInfo = {
	UEPositioningGPSAcquisitionAssistance::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};

const void *Fdd::itemsInfo[1] = {
	&PrimaryCPICHInfo::theInfo,
};
const void *Fdd::itemsPres[1] = {
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *Tdd::itemsInfo[1] = {
	&CellParametersID::theInfo,
};
const void *Tdd::itemsPres[1] = {
	1,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *UEPositioningGPSReferenceCellInfo::itemsInfo[1] = {
	&ModeSpecificInfo::theInfo,
};
const void *UEPositioningGPSReferenceCellInfo::itemsPres[1] = {
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

const void *UEPositioningGPSAssistanceData::itemsInfo[10] = {
	&UEPositioningGPSReferenceTime::theInfo,
	&ReferenceLocation::theInfo,
	&UEPositioningGPSDGPSCorrections::theInfo,
	&UEPositioningGPSNavigationModel::theInfo,
	&UEPositioningGPSIonosphericModel::theInfo,
	&UEPositioningGPSUTCModel::theInfo,
	&UEPositioningGPSAlmanac::theInfo,
	&UEPositioningGPSAcquisitionAssistance::theInfo,
	&BadSatList::theInfo,
	&UEPositioningGPSReferenceCellInfo::theInfo,
};
const void *UEPositioningGPSAssistanceData::itemsPres[10] = {
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
const UEPositioningGPSAssistanceData::Info UEPositioningGPSAssistanceData::theInfo = {
	UEPositioningGPSAssistanceData::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	10, 10, 0
};

const void *UEPositioningMeasurement::itemsInfo[4] = {
	&UEPositioningReportingQuantity::theInfo,
	&UEPositioningReportCriteria::theInfo,
	&UEPositioningOTDOAAssistanceData::theInfo,
	&UEPositioningGPSAssistanceData::theInfo,
};
const void *UEPositioningMeasurement::itemsPres[4] = {
	1,
	1,
	0,
	0,
};
const UEPositioningMeasurement::Info UEPositioningMeasurement::theInfo = {
	UEPositioningMeasurement::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
};




const void *TrafficVolumeMeasQuantity::choicesInfo[3] = {
	&Rlc_BufferPayload::theInfo,
	&TimeInterval::theInfo,
	&TimeInterval::theInfo,
};
const TrafficVolumeMeasQuantity::Info TrafficVolumeMeasQuantity::theInfo = {
	TrafficVolumeMeasQuantity::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};




const void *TrafficVolumeReportingQuantity::itemsInfo[3] = {
	&Rlc_RB_BufferPayload::theInfo,
	&Rlc_RB_BufferPayloadAverage::theInfo,
	&Rlc_RB_BufferPayloadVariance::theInfo,
};
const void *TrafficVolumeReportingQuantity::itemsPres[3] = {
	1,
	1,
	1,
};
const TrafficVolumeReportingQuantity::Info TrafficVolumeReportingQuantity::theInfo = {
	TrafficVolumeReportingQuantity::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};




const void *TrafficVolumeEventParam::itemsInfo[5] = {
	&TrafficVolumeEventType::theInfo,
	&TrafficVolumeThreshold::theInfo,
	&TimeToTrigger::theInfo,
	&PendingTimeAfterTrigger::theInfo,
	&TXInterruptionAfterTrigger::theInfo,
};
const void *TrafficVolumeEventParam::itemsPres[5] = {
	1,
	1,
	0,
	0,
	0,
};
const TrafficVolumeEventParam::Info TrafficVolumeEventParam::theInfo = {
	TrafficVolumeEventParam::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 3, 0
};


const void *TransChCriteria::itemsInfo[2] = {
	&ULTrCHIdentity::theInfo,
	&EventSpecificParameters::theInfo,
};
const void *TransChCriteria::itemsPres[2] = {
	0,
	0,
};
const TransChCriteria::Info TransChCriteria::theInfo = {
	TransChCriteria::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};


const void *TrafficVolumeReportingCriteria::itemsInfo[1] = {
	&TransChCriteriaList::theInfo,
};
const void *TrafficVolumeReportingCriteria::itemsPres[1] = {
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


const void *TrafficVolumeReportCriteria::choicesInfo[3] = {
	&TrafficVolumeReportingCriteria::theInfo,
	&PeriodicalReportingCriteria::theInfo,
	&NoReporting::theInfo,
};
const TrafficVolumeReportCriteria::Info TrafficVolumeReportCriteria::theInfo = {
	TrafficVolumeReportCriteria::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *TrafficVolumeMeasurement::itemsInfo[5] = {
	&TrafficVolumeMeasurementObjectList::theInfo,
	&TrafficVolumeMeasQuantity::theInfo,
	&TrafficVolumeReportingQuantity::theInfo,
	&MeasurementValidity::theInfo,
	&TrafficVolumeReportCriteria::theInfo,
};
const void *TrafficVolumeMeasurement::itemsPres[5] = {
	0,
	0,
	0,
	0,
	1,
};
const TrafficVolumeMeasurement::Info TrafficVolumeMeasurement::theInfo = {
	TrafficVolumeMeasurement::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 4, 0
};





const void *Tdd::itemsInfo[1] = {
	&SIRTFCSList::theInfo,
};
const void *Tdd::itemsPres[1] = {
	0,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *QualityReportingQuantity::itemsInfo[3] = {
	&Dl_TransChBLER::theInfo,
	&BLERTransChIdList::theInfo,
	&ModeSpecificInfo::theInfo,
};
const void *QualityReportingQuantity::itemsPres[3] = {
	1,
	0,
	1,
};
const QualityReportingQuantity::Info QualityReportingQuantity::theInfo = {
	QualityReportingQuantity::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};




const void *QualityReportingCriteriaSingle::itemsInfo[4] = {
	&TransportChannelIdentity::theInfo,
	&TotalCRC::theInfo,
	&BadCRC::theInfo,
	&PendingAfterTrigger::theInfo,
};
const void *QualityReportingCriteriaSingle::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const QualityReportingCriteriaSingle::Info QualityReportingCriteriaSingle::theInfo = {
	QualityReportingCriteriaSingle::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 0, 0
};



const void *QualityReportCriteria::choicesInfo[3] = {
	&QualityReportingCriteria::theInfo,
	&PeriodicalReportingCriteria::theInfo,
	&NoReporting::theInfo,
};
const QualityReportCriteria::Info QualityReportCriteria::theInfo = {
	QualityReportCriteria::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *QualityMeasurement::itemsInfo[2] = {
	&QualityReportingQuantity::theInfo,
	&QualityReportCriteria::theInfo,
};
const void *QualityMeasurement::itemsPres[2] = {
	0,
	1,
};
const QualityMeasurement::Info QualityMeasurement::theInfo = {
	QualityMeasurement::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};


const void *UEInternalMeasQuantity::itemsInfo[2] = {
	&UEMeasurementQuantity::theInfo,
	&FilterCoefficient::theInfo,
};
const void *UEInternalMeasQuantity::itemsPres[2] = {
	1,
	0,
};
const UEInternalMeasQuantity::Info UEInternalMeasQuantity::theInfo = {
	UEInternalMeasQuantity::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};



const void *Fdd::itemsInfo[1] = {
	&Ue_RX_TX_TimeDifference::theInfo,
};
const void *Fdd::itemsPres[1] = {
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};


const void *Tdd::itemsInfo[1] = {
	&AppliedTA::theInfo,
};
const void *Tdd::itemsPres[1] = {
	1,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *UEInternalReportingQuantity::itemsInfo[2] = {
	&Ue_TransmittedPower::theInfo,
	&ModeSpecificInfo::theInfo,
};
const void *UEInternalReportingQuantity::itemsPres[2] = {
	1,
	1,
};
const UEInternalReportingQuantity::Info UEInternalReportingQuantity::theInfo = {
	UEInternalReportingQuantity::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};


const void *UE6ABEvent::itemsInfo[2] = {
	&TimeToTrigger::theInfo,
	&TransmittedPowerThreshold::theInfo,
};
const void *UE6ABEvent::itemsPres[2] = {
	1,
	1,
};
const UE6ABEvent::Info UE6ABEvent::theInfo = {
	UE6ABEvent::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};


const void *UE6FGEvent::itemsInfo[2] = {
	&TimeToTrigger::theInfo,
	&UERXTXTimeDifferenceThreshold::theInfo,
};
const void *UE6FGEvent::itemsPres[2] = {
	1,
	1,
};
const UE6FGEvent::Info UE6FGEvent::theInfo = {
	UE6FGEvent::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *UEInternalEventParam::choicesInfo[7] = {
	&UE6ABEvent::theInfo,
	&UE6ABEvent::theInfo,
	&TimeToTrigger::theInfo,
	&TimeToTrigger::theInfo,
	&TimeToTrigger::theInfo,
	&UE6FGEvent::theInfo,
	&UE6FGEvent::theInfo,
};
const UEInternalEventParam::Info UEInternalEventParam::theInfo = {
	UEInternalEventParam::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	6
};


const void *UEInternalReportingCriteria::itemsInfo[1] = {
	&UEInternalEventParamList::theInfo,
};
const void *UEInternalReportingCriteria::itemsPres[1] = {
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


const void *UEInternalReportCriteria::choicesInfo[3] = {
	&UEInternalReportingCriteria::theInfo,
	&PeriodicalReportingCriteria::theInfo,
	&NoReporting::theInfo,
};
const UEInternalReportCriteria::Info UEInternalReportCriteria::theInfo = {
	UEInternalReportCriteria::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *UEInternalMeasurement::itemsInfo[3] = {
	&UEInternalMeasQuantity::theInfo,
	&UEInternalReportingQuantity::theInfo,
	&UEInternalReportCriteria::theInfo,
};
const void *UEInternalMeasurement::itemsPres[3] = {
	0,
	0,
	1,
};
const UEInternalMeasurement::Info UEInternalMeasurement::theInfo = {
	UEInternalMeasurement::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *MeasurementType::choicesInfo[7] = {
	&IntraFrequencyMeasurement::theInfo,
	&InterFrequencyMeasurement::theInfo,
	&InterRATMeasurement::theInfo,
	&UEPositioningMeasurement::theInfo,
	&TrafficVolumeMeasurement::theInfo,
	&QualityMeasurement::theInfo,
	&UEInternalMeasurement::theInfo,
};
const MeasurementType::Info MeasurementType::theInfo = {
	MeasurementType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	6
};

const void *Modify::itemsInfo[1] = {
	&MeasurementType::theInfo,
};
const void *Modify::itemsPres[1] = {
	0,
};
const Modify::Info Modify::theInfo = {
	Modify::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};


const void *MeasurementCommand::choicesInfo[3] = {
	&MeasurementType::theInfo,
	&Modify::theInfo,
	&Release::theInfo,
};
const MeasurementCommand::Info MeasurementCommand::theInfo = {
	MeasurementCommand::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};



const void *UEPositioningReportingQuantityr4::itemsInfo[7] = {
	&UEPositioningMethodType::theInfo,
	&PositioningMethod::theInfo,
	&UEPositioningAccuracy::theInfo,
	&UEPositioningAccuracy::theInfo,
	&Gps_TimingOfCellWanted::theInfo,
	&AdditionalAssistanceDataReq::theInfo,
	&EnvironmentCharacterisation::theInfo,
};
const void *UEPositioningReportingQuantityr4::itemsPres[7] = {
	1,
	1,
	0,
	0,
	1,
	1,
	0,
};
const UEPositioningReportingQuantityr4::Info UEPositioningReportingQuantityr4::theInfo = {
	UEPositioningReportingQuantityr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	7, 3, 0
};


const void *Fdd::itemsInfo[1] = {
	&PrimaryCPICHInfo::theInfo,
};
const void *Fdd::itemsPres[1] = {
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *Tdd::itemsInfo[1] = {
	&CellAndChannelIdentity::theInfo,
};
const void *Tdd::itemsPres[1] = {
	1,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *ReferenceCellPosition::choicesInfo[2] = {
	&EllipsoidPoint::theInfo,
	&EllipsoidPointAltitude::theInfo,
};
const ReferenceCellPosition::Info ReferenceCellPosition::theInfo = {
	ReferenceCellPosition::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};


const void *UeBased::itemsInfo[2] = {
	&ReferenceCellPosition::theInfo,
	&RoundTripTime::theInfo,
};
const void *UeBased::itemsPres[2] = {
	0,
	0,
};
const UeBased::Info UeBased::theInfo = {
	UeBased::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *UeAssisted::itemsInfo[0] = {
};
const void *UeAssisted::itemsPres[0] = {
};
const UeAssisted::Info UeAssisted::theInfo = {
	UeAssisted::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *PositioningMode::choicesInfo[2] = {
	&UeBased::theInfo,
	&UeAssisted::theInfo,
};
const PositioningMode::Info PositioningMode::theInfo = {
	PositioningMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};



const void *Fdd::itemsInfo[4] = {
	&IPSpacing::theInfo,
	&IPLength::theInfo,
	&Ip_Offset::theInfo,
	&Seed::theInfo,
};
const void *Fdd::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 0, 0
};



const void *Tdd::itemsInfo[4] = {
	&IPSpacingTDD::theInfo,
	&Ip_slot::theInfo,
	&Ip_Start::theInfo,
	&IPPCCPCHr4::theInfo,
};
const void *Tdd::itemsPres[4] = {
	1,
	1,
	1,
	0,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 1, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *UEPositioningIPDLParametersr4::itemsInfo[2] = {
	&ModeSpecificInfo::theInfo,
	&BurstModeParameters::theInfo,
};
const void *UEPositioningIPDLParametersr4::itemsPres[2] = {
	1,
	0,
};
const UEPositioningIPDLParametersr4::Info UEPositioningIPDLParametersr4::theInfo = {
	UEPositioningIPDLParametersr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *UEPositioningOTDOAReferenceCellInfor4::itemsInfo[5] = {
	&Sfn::theInfo,
	&ModeSpecificInfo::theInfo,
	&FrequencyInfo::theInfo,
	&PositioningMode::theInfo,
	&UEPositioningIPDLParametersr4::theInfo,
};
const void *UEPositioningOTDOAReferenceCellInfor4::itemsPres[5] = {
	0,
	1,
	0,
	1,
	0,
};
const UEPositioningOTDOAReferenceCellInfor4::Info UEPositioningOTDOAReferenceCellInfor4::theInfo = {
	UEPositioningOTDOAReferenceCellInfor4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 3, 0
};

const void *Fdd::itemsInfo[1] = {
	&PrimaryCPICHInfo::theInfo,
};
const void *Fdd::itemsPres[1] = {
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *Tdd::itemsInfo[1] = {
	&CellAndChannelIdentity::theInfo,
};
const void *Tdd::itemsPres[1] = {
	1,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};






const void *UeBased::itemsInfo[5] = {
	&RelativeNorth::theInfo,
	&RelativeEast::theInfo,
	&RelativeAltitude::theInfo,
	&FineSFNSFN::theInfo,
	&RoundTripTime::theInfo,
};
const void *UeBased::itemsPres[5] = {
	0,
	0,
	0,
	0,
	0,
};
const UeBased::Info UeBased::theInfo = {
	UeBased::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 5, 0
};

const void *UeAssisted::itemsInfo[0] = {
};
const void *UeAssisted::itemsPres[0] = {
};
const UeAssisted::Info UeAssisted::theInfo = {
	UeAssisted::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *PositioningMode::choicesInfo[2] = {
	&UeBased::theInfo,
	&UeAssisted::theInfo,
};
const PositioningMode::Info PositioningMode::theInfo = {
	PositioningMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *UEPositioningOTDOANeighbourCellInfor4::itemsInfo[8] = {
	&ModeSpecificInfo::theInfo,
	&FrequencyInfo::theInfo,
	&UEPositioningIPDLParametersr4::theInfo,
	&SFNSFNRelTimeDifference1::theInfo,
	&SFNOffsetValidity::theInfo,
	&SFNSFNDrift::theInfo,
	&OTDOASearchWindowSize::theInfo,
	&PositioningMode::theInfo,
};
const void *UEPositioningOTDOANeighbourCellInfor4::itemsPres[8] = {
	1,
	0,
	0,
	1,
	0,
	0,
	1,
	1,
};
const UEPositioningOTDOANeighbourCellInfor4::Info UEPositioningOTDOANeighbourCellInfor4::theInfo = {
	UEPositioningOTDOANeighbourCellInfor4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	8, 4, 0
};


const void *UEPositioningOTDOAAssistanceDatar4::itemsInfo[2] = {
	&UEPositioningOTDOAReferenceCellInfor4::theInfo,
	&UEPositioningOTDOANeighbourCellListr4::theInfo,
};
const void *UEPositioningOTDOAAssistanceDatar4::itemsPres[2] = {
	0,
	0,
};
const UEPositioningOTDOAAssistanceDatar4::Info UEPositioningOTDOAAssistanceDatar4::theInfo = {
	UEPositioningOTDOAAssistanceDatar4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *UEPositioningMeasurementr4::itemsInfo[5] = {
	&UEPositioningReportingQuantityr4::theInfo,
	&MeasurementValidity::theInfo,
	&UEPositioningReportCriteria::theInfo,
	&UEPositioningOTDOAAssistanceDatar4::theInfo,
	&UEPositioningGPSAssistanceData::theInfo,
};
const void *UEPositioningMeasurementr4::itemsPres[5] = {
	1,
	0,
	1,
	0,
	0,
};
const UEPositioningMeasurementr4::Info UEPositioningMeasurementr4::theInfo = {
	UEPositioningMeasurementr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 3, 0
};



const void *Fdd::itemsInfo[1] = {
	&Ue_RX_TX_TimeDifference::theInfo,
};
const void *Fdd::itemsPres[1] = {
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};


const void *Tdd384::itemsInfo[1] = {
	&AppliedTA::theInfo,
};
const void *Tdd384::itemsPres[1] = {
	1,
};
const Tdd384::Info Tdd384::theInfo = {
	Tdd384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};


const void *Tdd128::itemsInfo[1] = {
	&T_ADVinfo::theInfo,
};
const void *Tdd128::itemsPres[1] = {
	1,
};
const Tdd128::Info Tdd128::theInfo = {
	Tdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *TddOption::choicesInfo[2] = {
	&Tdd384::theInfo,
	&Tdd128::theInfo,
};
const TddOption::Info TddOption::theInfo = {
	TddOption::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Tdd::itemsInfo[1] = {
	&TddOption::theInfo,
};
const void *Tdd::itemsPres[1] = {
	1,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *UEInternalReportingQuantityr4::itemsInfo[2] = {
	&Ue_TransmittedPower::theInfo,
	&ModeSpecificInfo::theInfo,
};
const void *UEInternalReportingQuantityr4::itemsPres[2] = {
	1,
	1,
};
const UEInternalReportingQuantityr4::Info UEInternalReportingQuantityr4::theInfo = {
	UEInternalReportingQuantityr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *UEInternalMeasurementr4::itemsInfo[3] = {
	&UEInternalMeasQuantity::theInfo,
	&UEInternalReportingQuantityr4::theInfo,
	&UEInternalReportCriteria::theInfo,
};
const void *UEInternalMeasurementr4::itemsPres[3] = {
	0,
	0,
	1,
};
const UEInternalMeasurementr4::Info UEInternalMeasurementr4::theInfo = {
	UEInternalMeasurementr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *MeasurementTyper4::choicesInfo[7] = {
	&IntraFrequencyMeasurementr4::theInfo,
	&InterFrequencyMeasurementr4::theInfo,
	&InterRATMeasurementr4::theInfo,
	&UEPositioningMeasurementr4::theInfo,
	&TrafficVolumeMeasurement::theInfo,
	&QualityMeasurement::theInfo,
	&UEInternalMeasurementr4::theInfo,
};
const MeasurementTyper4::Info MeasurementTyper4::theInfo = {
	MeasurementTyper4::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	6
};

const void *Modify::itemsInfo[1] = {
	&MeasurementTyper4::theInfo,
};
const void *Modify::itemsPres[1] = {
	0,
};
const Modify::Info Modify::theInfo = {
	Modify::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};


const void *MeasurementCommandr4::choicesInfo[3] = {
	&MeasurementTyper4::theInfo,
	&Modify::theInfo,
	&Release::theInfo,
};
const MeasurementCommandr4::Info MeasurementCommandr4::theInfo = {
	MeasurementCommandr4::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *MeasurementTyper6::choicesInfo[7] = {
	&IntraFrequencyMeasurementr6::theInfo,
	&InterFrequencyMeasurementr6::theInfo,
	&InterRATMeasurementr6::theInfo,
	&UEPositioningMeasurementr4::theInfo,
	&TrafficVolumeMeasurement::theInfo,
	&QualityMeasurement::theInfo,
	&UEInternalMeasurementr4::theInfo,
};
const MeasurementTyper6::Info MeasurementTyper6::theInfo = {
	MeasurementTyper6::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	6
};

const void *Modify::itemsInfo[1] = {
	&MeasurementTyper6::theInfo,
};
const void *Modify::itemsPres[1] = {
	0,
};
const Modify::Info Modify::theInfo = {
	Modify::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};


const void *MeasurementCommandr6::choicesInfo[3] = {
	&MeasurementTyper6::theInfo,
	&Modify::theInfo,
	&Release::theInfo,
};
const MeasurementCommandr6::Info MeasurementCommandr6::theInfo = {
	MeasurementCommandr6::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};







const void *UEPositioningReportingQuantityr7::itemsInfo[11] = {
	&UEPositioningMethodType::theInfo,
	&PositioningMethod::theInfo,
	&UEPositioningAccuracy::theInfo,
	&UEPositioningAccuracy::theInfo,
	&Gps_TimingOfCellWanted::theInfo,
	&AdditionalAssistanceDataReq::theInfo,
	&EnvironmentCharacterisation::theInfo,
	&velocityRequested::theInfo,
	&GANSSPositioningMethods::theInfo,
	&GANSSTimingOfCellWanted::theInfo,
	&GANSSCarrierPhaseMeasurementRequested::theInfo,
};
const void *UEPositioningReportingQuantityr7::itemsPres[11] = {
	1,
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
const UEPositioningReportingQuantityr7::Info UEPositioningReportingQuantityr7::theInfo = {
	UEPositioningReportingQuantityr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	11, 7, 0
};




const void *UEPositioningEventSpecificInfor7::choicesInfo[4] = {
	&ThresholdPositionChange::theInfo,
	&ThresholdSFNSFNChange::theInfo,
	&ThresholdSFNGPSTOWus::theInfo,
	&ThresholdSFNGANSSTOW::theInfo,
};
const UEPositioningEventSpecificInfor7::Info UEPositioningEventSpecificInfor7::theInfo = {
	UEPositioningEventSpecificInfor7::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	3
};

const void *UEPositioningEventParamr7::itemsInfo[4] = {
	&ReportingAmount::theInfo,
	&ReportFirstFix::theInfo,
	&UEPositioningMeasurementInterval::theInfo,
	&UEPositioningEventSpecificInfor7::theInfo,
};
const void *UEPositioningEventParamr7::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const UEPositioningEventParamr7::Info UEPositioningEventParamr7::theInfo = {
	UEPositioningEventParamr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 0, 0
};



const void *UEPositioningReportCriteriar7::choicesInfo[3] = {
	&UEPositioningEventParamListr7::theInfo,
	&PeriodicalReportingCriteria::theInfo,
	&NoReporting::theInfo,
};
const UEPositioningReportCriteriar7::Info UEPositioningReportCriteriar7::theInfo = {
	UEPositioningReportCriteriar7::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};


const void *Fdd::itemsInfo[1] = {
	&PrimaryCPICHInfo::theInfo,
};
const void *Fdd::itemsPres[1] = {
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *Tdd::itemsInfo[1] = {
	&CellAndChannelIdentity::theInfo,
};
const void *Tdd::itemsPres[1] = {
	1,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};



const void *UeBased::itemsInfo[3] = {
	&ReferenceCellPosition::theInfo,
	&RoundTripTime::theInfo,
	&RoundTripTimeExtension::theInfo,
};
const void *UeBased::itemsPres[3] = {
	0,
	0,
	0,
};
const UeBased::Info UeBased::theInfo = {
	UeBased::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *UeAssisted::itemsInfo[0] = {
};
const void *UeAssisted::itemsPres[0] = {
};
const UeAssisted::Info UeAssisted::theInfo = {
	UeAssisted::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *PositioningMode::choicesInfo[2] = {
	&UeBased::theInfo,
	&UeAssisted::theInfo,
};
const PositioningMode::Info PositioningMode::theInfo = {
	PositioningMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *UEPositioningOTDOAReferenceCellInfor7::itemsInfo[5] = {
	&Sfn::theInfo,
	&ModeSpecificInfo::theInfo,
	&FrequencyInfo::theInfo,
	&PositioningMode::theInfo,
	&UEPositioningIPDLParametersr4::theInfo,
};
const void *UEPositioningOTDOAReferenceCellInfor7::itemsPres[5] = {
	0,
	1,
	0,
	1,
	0,
};
const UEPositioningOTDOAReferenceCellInfor7::Info UEPositioningOTDOAReferenceCellInfor7::theInfo = {
	UEPositioningOTDOAReferenceCellInfor7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 3, 0
};

const void *Fdd::itemsInfo[1] = {
	&PrimaryCPICHInfo::theInfo,
};
const void *Fdd::itemsPres[1] = {
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *Tdd::itemsInfo[1] = {
	&CellAndChannelIdentity::theInfo,
};
const void *Tdd::itemsPres[1] = {
	1,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};






const void *UeBased::itemsInfo[6] = {
	&RelativeNorth::theInfo,
	&RelativeEast::theInfo,
	&RelativeAltitude::theInfo,
	&FineSFNSFN::theInfo,
	&RoundTripTime::theInfo,
	&RoundTripTimeExtension::theInfo,
};
const void *UeBased::itemsPres[6] = {
	0,
	0,
	0,
	0,
	0,
	0,
};
const UeBased::Info UeBased::theInfo = {
	UeBased::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 6, 0
};

const void *UeAssisted::itemsInfo[0] = {
};
const void *UeAssisted::itemsPres[0] = {
};
const UeAssisted::Info UeAssisted::theInfo = {
	UeAssisted::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *PositioningMode::choicesInfo[2] = {
	&UeBased::theInfo,
	&UeAssisted::theInfo,
};
const PositioningMode::Info PositioningMode::theInfo = {
	PositioningMode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *UEPositioningOTDOANeighbourCellInfor7::itemsInfo[8] = {
	&ModeSpecificInfo::theInfo,
	&FrequencyInfo::theInfo,
	&UEPositioningIPDLParametersr4::theInfo,
	&SFNSFNRelTimeDifference1::theInfo,
	&SFNOffsetValidity::theInfo,
	&SFNSFNDrift::theInfo,
	&OTDOASearchWindowSize::theInfo,
	&PositioningMode::theInfo,
};
const void *UEPositioningOTDOANeighbourCellInfor7::itemsPres[8] = {
	1,
	0,
	0,
	1,
	0,
	0,
	1,
	1,
};
const UEPositioningOTDOANeighbourCellInfor7::Info UEPositioningOTDOANeighbourCellInfor7::theInfo = {
	UEPositioningOTDOANeighbourCellInfor7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	8, 4, 0
};


const void *UEPositioningOTDOAAssistanceDatar7::itemsInfo[2] = {
	&UEPositioningOTDOAReferenceCellInfor7::theInfo,
	&UEPositioningOTDOANeighbourCellListr7::theInfo,
};
const void *UEPositioningOTDOAAssistanceDatar7::itemsPres[2] = {
	0,
	0,
};
const UEPositioningOTDOAAssistanceDatar7::Info UEPositioningOTDOAAssistanceDatar7::theInfo = {
	UEPositioningOTDOAAssistanceDatar7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};


const void *UEPositioningGPSReferenceTimer7::itemsInfo[7] = {
	&Gps_Week::theInfo,
	&GPSTOW1msec::theInfo,
	&UTRANGPSReferenceTime::theInfo,
	&UEPositioningGPSReferenceTimeUncertainty::theInfo,
	&SFNTOWUncertainty::theInfo,
	&UTRANGPSDriftRate::theInfo,
	&GPSTOWAssistList::theInfo,
};
const void *UEPositioningGPSReferenceTimer7::itemsPres[7] = {
	1,
	1,
	0,
	0,
	0,
	0,
	0,
};
const UEPositioningGPSReferenceTimer7::Info UEPositioningGPSReferenceTimer7::theInfo = {
	UEPositioningGPSReferenceTimer7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	7, 5, 0
};

const void *UEPositioningGPSAcquisitionAssistancer7::itemsInfo[4] = {
	&GPSTOW1msec::theInfo,
	&UTRANGPSReferenceTime::theInfo,
	&UEPositioningGPSReferenceTimeUncertainty::theInfo,
	&AcquisitionSatInfoList::theInfo,
};
const void *UEPositioningGPSAcquisitionAssistancer7::itemsPres[4] = {
	1,
	0,
	0,
	1,
};
const UEPositioningGPSAcquisitionAssistancer7::Info UEPositioningGPSAcquisitionAssistancer7::theInfo = {
	UEPositioningGPSAcquisitionAssistancer7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
};

const void *UEPositioningGPSAssistanceDatar7::itemsInfo[9] = {
	&UEPositioningGPSReferenceTimer7::theInfo,
	&ReferenceLocation::theInfo,
	&UEPositioningGPSDGPSCorrections::theInfo,
	&UEPositioningGPSNavigationModel::theInfo,
	&UEPositioningGPSIonosphericModel::theInfo,
	&UEPositioningGPSUTCModel::theInfo,
	&UEPositioningGPSAlmanac::theInfo,
	&UEPositioningGPSAcquisitionAssistancer7::theInfo,
	&BadSatList::theInfo,
};
const void *UEPositioningGPSAssistanceDatar7::itemsPres[9] = {
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
const UEPositioningGPSAssistanceDatar7::Info UEPositioningGPSAssistanceDatar7::theInfo = {
	UEPositioningGPSAssistanceDatar7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	9, 9, 0
};






const void *Fdd::itemsInfo[1] = {
	&PrimaryCPICHInfo::theInfo,
};
const void *Fdd::itemsPres[1] = {
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *Tdd::itemsInfo[1] = {
	&CellParametersID::theInfo,
};
const void *Tdd::itemsPres[1] = {
	1,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *Mode::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const Mode::Info Mode::theInfo = {
	Mode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};


const void *Utran_ganssreferenceTime::itemsInfo[3] = {
	&TimingOfCellFrames::theInfo,
	&Mode::theInfo,
	&ReferenceSfn::theInfo,
};
const void *Utran_ganssreferenceTime::itemsPres[3] = {
	1,
	1,
	1,
};
const Utran_ganssreferenceTime::Info Utran_ganssreferenceTime::theInfo = {
	Utran_ganssreferenceTime::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};


const void *UEPositioningGANSSReferenceTime::itemsInfo[6] = {
	&GanssDay::theInfo,
	&GanssTod::theInfo,
	&GanssTodUncertainty::theInfo,
	&GanssTimeId::theInfo,
	&Utran_ganssreferenceTime::theInfo,
	&TutranGanssDriftRate::theInfo,
};
const void *UEPositioningGANSSReferenceTime::itemsPres[6] = {
	0,
	1,
	0,
	0,
	0,
	0,
};
const UEPositioningGANSSReferenceTime::Info UEPositioningGANSSReferenceTime::theInfo = {
	UEPositioningGANSSReferenceTime::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 5, 0
};

const void *ReferenceLocationGANSS::itemsInfo[1] = {
	&EllipsoidPointAltitudeEllipsoide::theInfo,
};
const void *ReferenceLocationGANSS::itemsPres[1] = {
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




const void *UEPositioningGANSSIonosphericModel::itemsInfo[4] = {
	&Alpha_zero_ionos::theInfo,
	&Alpha_one_ionos::theInfo,
	&Alpha_two_ionos::theInfo,
	&GANSSStormFlag::theInfo,
};
const void *UEPositioningGANSSIonosphericModel::itemsPres[4] = {
	1,
	1,
	1,
	0,
};
const UEPositioningGANSSIonosphericModel::Info UEPositioningGANSSIonosphericModel::theInfo = {
	UEPositioningGANSSIonosphericModel::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 1, 0
};

const void *UEPositioningGANSSAssistanceData::itemsInfo[4] = {
	&UEPositioningGANSSReferenceTime::theInfo,
	&ReferenceLocationGANSS::theInfo,
	&UEPositioningGANSSIonosphericModel::theInfo,
	&GANSSGenericDataList::theInfo,
};
const void *UEPositioningGANSSAssistanceData::itemsPres[4] = {
	0,
	0,
	0,
	0,
};
const UEPositioningGANSSAssistanceData::Info UEPositioningGANSSAssistanceData::theInfo = {
	UEPositioningGANSSAssistanceData::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 4, 0
};

const void *UEPositioningMeasurementr7::itemsInfo[6] = {
	&UEPositioningReportingQuantityr7::theInfo,
	&MeasurementValidity::theInfo,
	&UEPositioningReportCriteriar7::theInfo,
	&UEPositioningOTDOAAssistanceDatar7::theInfo,
	&UEPositioningGPSAssistanceDatar7::theInfo,
	&UEPositioningGANSSAssistanceData::theInfo,
};
const void *UEPositioningMeasurementr7::itemsPres[6] = {
	1,
	0,
	1,
	0,
	0,
	0,
};
const UEPositioningMeasurementr7::Info UEPositioningMeasurementr7::theInfo = {
	UEPositioningMeasurementr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 4, 0
};

const void *MeasurementTyper7::choicesInfo[7] = {
	&IntraFrequencyMeasurementr7::theInfo,
	&InterFrequencyMeasurementr7::theInfo,
	&InterRATMeasurementr6::theInfo,
	&UEPositioningMeasurementr7::theInfo,
	&TrafficVolumeMeasurement::theInfo,
	&QualityMeasurement::theInfo,
	&UEInternalMeasurementr4::theInfo,
};
const MeasurementTyper7::Info MeasurementTyper7::theInfo = {
	MeasurementTyper7::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	6
};

const void *Modify::itemsInfo[1] = {
	&MeasurementTyper7::theInfo,
};
const void *Modify::itemsPres[1] = {
	0,
};
const Modify::Info Modify::theInfo = {
	Modify::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};


const void *MeasurementCommandr7::choicesInfo[3] = {
	&MeasurementTyper7::theInfo,
	&Modify::theInfo,
	&Release::theInfo,
};
const MeasurementCommandr7::Info MeasurementCommandr7::theInfo = {
	MeasurementCommandr7::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};








const void *UEPositioningReportingQuantityr8::itemsInfo[12] = {
	&UEPositioningMethodType::theInfo,
	&PositioningMethod::theInfo,
	&UEPositioningAccuracy::theInfo,
	&UEPositioningAccuracy::theInfo,
	&Gps_TimingOfCellWanted::theInfo,
	&AdditionalAssistanceDataReq::theInfo,
	&EnvironmentCharacterisation::theInfo,
	&velocityRequested::theInfo,
	&GANSSPositioningMethods::theInfo,
	&GANSSTimingOfCellWanted::theInfo,
	&GANSSCarrierPhaseMeasurementRequested::theInfo,
	&GANSSMultiFreqMeasurementRequested::theInfo,
};
const void *UEPositioningReportingQuantityr8::itemsPres[12] = {
	1,
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
};
const UEPositioningReportingQuantityr8::Info UEPositioningReportingQuantityr8::theInfo = {
	UEPositioningReportingQuantityr8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	12, 8, 0
};


const void *UEPositioningGANSSAddIonoModel::itemsInfo[2] = {
	&DataID::theInfo,
	&UEPositioningGPSIonosphericModel::theInfo,
};
const void *UEPositioningGANSSAddIonoModel::itemsPres[2] = {
	1,
	1,
};
const UEPositioningGANSSAddIonoModel::Info UEPositioningGANSSAddIonoModel::theInfo = {
	UEPositioningGANSSAddIonoModel::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};








const void *UEPositioningGANSSEarthOrientPara::itemsInfo[7] = {
	&Teop::theInfo,
	&PmX::theInfo,
	&PmXdot::theInfo,
	&PmY::theInfo,
	&PmYdot::theInfo,
	&DeltaUT1::theInfo,
	&DeltaUT1dot::theInfo,
};
const void *UEPositioningGANSSEarthOrientPara::itemsPres[7] = {
	1,
	1,
	1,
	1,
	1,
	1,
	1,
};
const UEPositioningGANSSEarthOrientPara::Info UEPositioningGANSSEarthOrientPara::theInfo = {
	UEPositioningGANSSEarthOrientPara::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	7, 0, 0
};

const void *UEPositioningGANSSAssistanceDatar8::itemsInfo[6] = {
	&UEPositioningGANSSReferenceTime::theInfo,
	&ReferenceLocationGANSS::theInfo,
	&UEPositioningGANSSIonosphericModel::theInfo,
	&UEPositioningGANSSAddIonoModel::theInfo,
	&UEPositioningGANSSEarthOrientPara::theInfo,
	&GANSSGenericDataListr8::theInfo,
};
const void *UEPositioningGANSSAssistanceDatar8::itemsPres[6] = {
	0,
	0,
	0,
	0,
	0,
	0,
};
const UEPositioningGANSSAssistanceDatar8::Info UEPositioningGANSSAssistanceDatar8::theInfo = {
	UEPositioningGANSSAssistanceDatar8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 6, 0
};

const void *UEPositioningMeasurementr8::itemsInfo[6] = {
	&UEPositioningReportingQuantityr8::theInfo,
	&MeasurementValidity::theInfo,
	&UEPositioningReportCriteriar7::theInfo,
	&UEPositioningOTDOAAssistanceDatar7::theInfo,
	&UEPositioningGPSAssistanceDatar7::theInfo,
	&UEPositioningGANSSAssistanceDatar8::theInfo,
};
const void *UEPositioningMeasurementr8::itemsPres[6] = {
	1,
	0,
	1,
	0,
	0,
	0,
};
const UEPositioningMeasurementr8::Info UEPositioningMeasurementr8::theInfo = {
	UEPositioningMeasurementr8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 4, 0
};

const void *MeasurementTyper8::choicesInfo[7] = {
	&IntraFrequencyMeasurementr7::theInfo,
	&InterFrequencyMeasurementr8::theInfo,
	&InterRATMeasurementr8::theInfo,
	&UEPositioningMeasurementr8::theInfo,
	&TrafficVolumeMeasurement::theInfo,
	&QualityMeasurement::theInfo,
	&UEInternalMeasurementr4::theInfo,
};
const MeasurementTyper8::Info MeasurementTyper8::theInfo = {
	MeasurementTyper8::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	6
};

const void *Modify::itemsInfo[1] = {
	&MeasurementTyper8::theInfo,
};
const void *Modify::itemsPres[1] = {
	0,
};
const Modify::Info Modify::theInfo = {
	Modify::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};


const void *MeasurementCommandr8::choicesInfo[3] = {
	&MeasurementTyper8::theInfo,
	&Modify::theInfo,
	&Release::theInfo,
};
const MeasurementCommandr8::Info MeasurementCommandr8::theInfo = {
	MeasurementCommandr8::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *UEPositioningGPSDGPSCorrectionsr9::itemsInfo[3] = {
	&GPSTOW1sec::theInfo,
	&DiffCorrectionStatus::theInfo,
	&DGPSCorrectionSatInfoListr9::theInfo,
};
const void *UEPositioningGPSDGPSCorrectionsr9::itemsPres[3] = {
	1,
	1,
	1,
};
const UEPositioningGPSDGPSCorrectionsr9::Info UEPositioningGPSDGPSCorrectionsr9::theInfo = {
	UEPositioningGPSDGPSCorrectionsr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};

const void *UEPositioningGPSAssistanceDatar9::itemsInfo[9] = {
	&UEPositioningGPSReferenceTimer7::theInfo,
	&ReferenceLocation::theInfo,
	&UEPositioningGPSDGPSCorrectionsr9::theInfo,
	&UEPositioningGPSNavigationModel::theInfo,
	&UEPositioningGPSIonosphericModel::theInfo,
	&UEPositioningGPSUTCModel::theInfo,
	&UEPositioningGPSAlmanac::theInfo,
	&UEPositioningGPSAcquisitionAssistancer7::theInfo,
	&BadSatList::theInfo,
};
const void *UEPositioningGPSAssistanceDatar9::itemsPres[9] = {
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
const UEPositioningGPSAssistanceDatar9::Info UEPositioningGPSAssistanceDatar9::theInfo = {
	UEPositioningGPSAssistanceDatar9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	9, 9, 0
};

const void *UEPositioningGANSSAssistanceDatar9::itemsInfo[6] = {
	&UEPositioningGANSSReferenceTime::theInfo,
	&ReferenceLocationGANSS::theInfo,
	&UEPositioningGANSSIonosphericModel::theInfo,
	&UEPositioningGANSSAddIonoModel::theInfo,
	&UEPositioningGANSSEarthOrientPara::theInfo,
	&GANSSGenericDataListr9::theInfo,
};
const void *UEPositioningGANSSAssistanceDatar9::itemsPres[6] = {
	0,
	0,
	0,
	0,
	0,
	0,
};
const UEPositioningGANSSAssistanceDatar9::Info UEPositioningGANSSAssistanceDatar9::theInfo = {
	UEPositioningGANSSAssistanceDatar9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 6, 0
};

const void *UEPositioningMeasurementr9::itemsInfo[6] = {
	&UEPositioningReportingQuantityr8::theInfo,
	&MeasurementValidity::theInfo,
	&UEPositioningReportCriteriar7::theInfo,
	&UEPositioningOTDOAAssistanceDatar7::theInfo,
	&UEPositioningGPSAssistanceDatar9::theInfo,
	&UEPositioningGANSSAssistanceDatar9::theInfo,
};
const void *UEPositioningMeasurementr9::itemsPres[6] = {
	1,
	0,
	1,
	0,
	0,
	0,
};
const UEPositioningMeasurementr9::Info UEPositioningMeasurementr9::theInfo = {
	UEPositioningMeasurementr9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 4, 0
};

const void *MeasurementTyper9::choicesInfo[8] = {
	&IntraFrequencyMeasurementr9::theInfo,
	&InterFrequencyMeasurementr9::theInfo,
	&InterRATMeasurementr9::theInfo,
	&UEPositioningMeasurementr9::theInfo,
	&TrafficVolumeMeasurement::theInfo,
	&QualityMeasurement::theInfo,
	&UEInternalMeasurementr4::theInfo,
	&CSGProximityDetection::theInfo,
};
const MeasurementTyper9::Info MeasurementTyper9::theInfo = {
	MeasurementTyper9::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	7
};

const void *Modify::itemsInfo[1] = {
	&MeasurementTyper9::theInfo,
};
const void *Modify::itemsPres[1] = {
	0,
};
const Modify::Info Modify::theInfo = {
	Modify::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};


const void *MeasurementCommandr9::choicesInfo[3] = {
	&MeasurementTyper9::theInfo,
	&Modify::theInfo,
	&Release::theInfo,
};
const MeasurementCommandr9::Info MeasurementCommandr9::theInfo = {
	MeasurementCommandr9::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *Cpich_RSCP::itemsInfo[2] = {
	&IntraFreqMeasurementSysInfoRSCP::theInfo,
	&InterFreqMeasurementSysInfoRSCP::theInfo,
};
const void *Cpich_RSCP::itemsPres[2] = {
	0,
	0,
};
const Cpich_RSCP::Info Cpich_RSCP::theInfo = {
	Cpich_RSCP::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *Cpich_Ec_N0::itemsInfo[2] = {
	&IntraFreqMeasurementSysInfoECN0::theInfo,
	&InterFreqMeasurementSysInfoECN0::theInfo,
};
const void *Cpich_Ec_N0::itemsPres[2] = {
	0,
	0,
};
const Cpich_Ec_N0::Info Cpich_Ec_N0::theInfo = {
	Cpich_Ec_N0::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *CellSelectQualityMeasure::choicesInfo[2] = {
	&Cpich_RSCP::theInfo,
	&Cpich_Ec_N0::theInfo,
};
const CellSelectQualityMeasure::Info CellSelectQualityMeasure::theInfo = {
	CellSelectQualityMeasure::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Hcs_not_used::itemsInfo[2] = {
	&CellSelectQualityMeasure::theInfo,
	&InterRATMeasurementSysInfoB::theInfo,
};
const void *Hcs_not_used::itemsPres[2] = {
	1,
	0,
};
const Hcs_not_used::Info Hcs_not_used::theInfo = {
	Hcs_not_used::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *Cpich_RSCP::itemsInfo[2] = {
	&IntraFreqMeasurementSysInfoHCSRSCP::theInfo,
	&InterFreqMeasurementSysInfoHCSRSCP::theInfo,
};
const void *Cpich_RSCP::itemsPres[2] = {
	0,
	0,
};
const Cpich_RSCP::Info Cpich_RSCP::theInfo = {
	Cpich_RSCP::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *Cpich_Ec_N0::itemsInfo[2] = {
	&IntraFreqMeasurementSysInfoHCSECN0::theInfo,
	&InterFreqMeasurementSysInfoHCSECN0::theInfo,
};
const void *Cpich_Ec_N0::itemsPres[2] = {
	0,
	0,
};
const Cpich_Ec_N0::Info Cpich_Ec_N0::theInfo = {
	Cpich_Ec_N0::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *CellSelectQualityMeasure::choicesInfo[2] = {
	&Cpich_RSCP::theInfo,
	&Cpich_Ec_N0::theInfo,
};
const CellSelectQualityMeasure::Info CellSelectQualityMeasure::theInfo = {
	CellSelectQualityMeasure::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Hcs_used::itemsInfo[2] = {
	&CellSelectQualityMeasure::theInfo,
	&InterRATMeasurementSysInfo::theInfo,
};
const void *Hcs_used::itemsPres[2] = {
	1,
	0,
};
const Hcs_used::Info Hcs_used::theInfo = {
	Hcs_used::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *Use_of_HCS::choicesInfo[2] = {
	&Hcs_not_used::theInfo,
	&Hcs_used::theInfo,
};
const Use_of_HCS::Info Use_of_HCS::theInfo = {
	Use_of_HCS::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *TrafficVolumeReportCriteriaSysInfo::choicesInfo[2] = {
	&TrafficVolumeReportingCriteria::theInfo,
	&PeriodicalReportingCriteria::theInfo,
};
const TrafficVolumeReportCriteriaSysInfo::Info TrafficVolumeReportCriteriaSysInfo::theInfo = {
	TrafficVolumeReportCriteriaSysInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *TrafficVolumeMeasSysInfo::itemsInfo[8] = {
	&MeasurementIdentity::theInfo,
	&TrafficVolumeMeasurementObjectList::theInfo,
	&TrafficVolumeMeasQuantity::theInfo,
	&TrafficVolumeReportingQuantity::theInfo,
	&TrafficVolumeReportingCriteria::theInfo,
	&MeasurementValidity::theInfo,
	&MeasurementReportingMode::theInfo,
	&TrafficVolumeReportCriteriaSysInfo::theInfo,
};
const void *TrafficVolumeMeasSysInfo::itemsPres[8] = {
	0,
	0,
	0,
	0,
	0,
	0,
	1,
	1,
};
const TrafficVolumeMeasSysInfo::Info TrafficVolumeMeasSysInfo::theInfo = {
	TrafficVolumeMeasSysInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	8, 6, 0
};

const void *UEInternalMeasurementSysInfo::itemsInfo[2] = {
	&MeasurementIdentity::theInfo,
	&UEInternalMeasQuantity::theInfo,
};
const void *UEInternalMeasurementSysInfo::itemsPres[2] = {
	0,
	1,
};
const UEInternalMeasurementSysInfo::Info UEInternalMeasurementSysInfo::theInfo = {
	UEInternalMeasurementSysInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *MeasurementControlSysInfo::itemsInfo[3] = {
	&Use_of_HCS::theInfo,
	&TrafficVolumeMeasSysInfo::theInfo,
	&UEInternalMeasurementSysInfo::theInfo,
};
const void *MeasurementControlSysInfo::itemsPres[3] = {
	1,
	0,
	0,
};
const MeasurementControlSysInfo::Info MeasurementControlSysInfo::theInfo = {
	MeasurementControlSysInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *Cpich_RSCP::itemsInfo[2] = {
	&NewIntraFreqCellSIListRSCP::theInfo,
	&NewInterFreqCellSIListRSCP::theInfo,
};
const void *Cpich_RSCP::itemsPres[2] = {
	0,
	0,
};
const Cpich_RSCP::Info Cpich_RSCP::theInfo = {
	Cpich_RSCP::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *Cpich_Ec_N0::itemsInfo[2] = {
	&NewIntraFreqCellSIListECN0::theInfo,
	&NewInterFreqCellSIListECN0::theInfo,
};
const void *Cpich_Ec_N0::itemsPres[2] = {
	0,
	0,
};
const Cpich_Ec_N0::Info Cpich_Ec_N0::theInfo = {
	Cpich_Ec_N0::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *CellSelectQualityMeasure::choicesInfo[2] = {
	&Cpich_RSCP::theInfo,
	&Cpich_Ec_N0::theInfo,
};
const CellSelectQualityMeasure::Info CellSelectQualityMeasure::theInfo = {
	CellSelectQualityMeasure::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Hcs_not_used::itemsInfo[2] = {
	&CellSelectQualityMeasure::theInfo,
	&NewInterRATCellList::theInfo,
};
const void *Hcs_not_used::itemsPres[2] = {
	1,
	0,
};
const Hcs_not_used::Info Hcs_not_used::theInfo = {
	Hcs_not_used::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *Cpich_RSCP::itemsInfo[2] = {
	&NewIntraFreqCellSIListHCSRSCP::theInfo,
	&NewInterFreqCellSIListHCSRSCP::theInfo,
};
const void *Cpich_RSCP::itemsPres[2] = {
	0,
	0,
};
const Cpich_RSCP::Info Cpich_RSCP::theInfo = {
	Cpich_RSCP::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *Cpich_Ec_N0::itemsInfo[2] = {
	&NewIntraFreqCellSIListHCSECN0::theInfo,
	&NewInterFreqCellSIListHCSECN0::theInfo,
};
const void *Cpich_Ec_N0::itemsPres[2] = {
	0,
	0,
};
const Cpich_Ec_N0::Info Cpich_Ec_N0::theInfo = {
	Cpich_Ec_N0::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *CellSelectQualityMeasure::choicesInfo[2] = {
	&Cpich_RSCP::theInfo,
	&Cpich_Ec_N0::theInfo,
};
const CellSelectQualityMeasure::Info CellSelectQualityMeasure::theInfo = {
	CellSelectQualityMeasure::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Hcs_used::itemsInfo[2] = {
	&CellSelectQualityMeasure::theInfo,
	&NewInterRATCellList::theInfo,
};
const void *Hcs_used::itemsPres[2] = {
	1,
	0,
};
const Hcs_used::Info Hcs_used::theInfo = {
	Hcs_used::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *Use_of_HCS::choicesInfo[2] = {
	&Hcs_not_used::theInfo,
	&Hcs_used::theInfo,
};
const Use_of_HCS::Info Use_of_HCS::theInfo = {
	Use_of_HCS::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *MeasurementControlSysInfoExtension::itemsInfo[1] = {
	&Use_of_HCS::theInfo,
};
const void *MeasurementControlSysInfoExtension::itemsPres[1] = {
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




const void *MeasurementControlSysInfoExtensionAddonr5::itemsInfo[3] = {
	&NewIntraFrequencyCellInfoListAddon_r5::theInfo,
	&NewInterFrequencyCellInfoListAddon_r5::theInfo,
	&NewInterRATCellInfoListAddon_r5::theInfo,
};
const void *MeasurementControlSysInfoExtensionAddonr5::itemsPres[3] = {
	0,
	0,
	0,
};
const MeasurementControlSysInfoExtensionAddonr5::Info MeasurementControlSysInfoExtensionAddonr5::theInfo = {
	MeasurementControlSysInfoExtensionAddonr5::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *Cpich_RSCP::itemsInfo[2] = {
	&NewIntraFreqCellSIListRSCPLCRr4::theInfo,
	&NewInterFreqCellSIListRSCPLCRr4::theInfo,
};
const void *Cpich_RSCP::itemsPres[2] = {
	0,
	0,
};
const Cpich_RSCP::Info Cpich_RSCP::theInfo = {
	Cpich_RSCP::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *Cpich_Ec_N0::itemsInfo[2] = {
	&NewIntraFreqCellSIListECN0LCRr4::theInfo,
	&NewInterFreqCellSIListECN0LCRr4::theInfo,
};
const void *Cpich_Ec_N0::itemsPres[2] = {
	0,
	0,
};
const Cpich_Ec_N0::Info Cpich_Ec_N0::theInfo = {
	Cpich_Ec_N0::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *CellSelectQualityMeasure::choicesInfo[2] = {
	&Cpich_RSCP::theInfo,
	&Cpich_Ec_N0::theInfo,
};
const CellSelectQualityMeasure::Info CellSelectQualityMeasure::theInfo = {
	CellSelectQualityMeasure::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Hcs_not_used::itemsInfo[2] = {
	&CellSelectQualityMeasure::theInfo,
	&NewInterRATCellList::theInfo,
};
const void *Hcs_not_used::itemsPres[2] = {
	1,
	0,
};
const Hcs_not_used::Info Hcs_not_used::theInfo = {
	Hcs_not_used::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *Cpich_RSCP::itemsInfo[2] = {
	&NewIntraFreqCellSIListHCSRSCPLCRr4::theInfo,
	&NewInterFreqCellSIListHCSRSCPLCRr4::theInfo,
};
const void *Cpich_RSCP::itemsPres[2] = {
	0,
	0,
};
const Cpich_RSCP::Info Cpich_RSCP::theInfo = {
	Cpich_RSCP::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *Cpich_Ec_N0::itemsInfo[2] = {
	&NewIntraFreqCellSIListHCSECN0LCRr4::theInfo,
	&NewInterFreqCellSIListHCSECN0LCRr4::theInfo,
};
const void *Cpich_Ec_N0::itemsPres[2] = {
	0,
	0,
};
const Cpich_Ec_N0::Info Cpich_Ec_N0::theInfo = {
	Cpich_Ec_N0::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *CellSelectQualityMeasure::choicesInfo[2] = {
	&Cpich_RSCP::theInfo,
	&Cpich_Ec_N0::theInfo,
};
const CellSelectQualityMeasure::Info CellSelectQualityMeasure::theInfo = {
	CellSelectQualityMeasure::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Hcs_used::itemsInfo[2] = {
	&CellSelectQualityMeasure::theInfo,
	&NewInterRATCellList::theInfo,
};
const void *Hcs_used::itemsPres[2] = {
	1,
	0,
};
const Hcs_used::Info Hcs_used::theInfo = {
	Hcs_used::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *Use_of_HCS::choicesInfo[2] = {
	&Hcs_not_used::theInfo,
	&Hcs_used::theInfo,
};
const Use_of_HCS::Info Use_of_HCS::theInfo = {
	Use_of_HCS::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *MeasurementControlSysInfoExtensionLCRr4::itemsInfo[1] = {
	&Use_of_HCS::theInfo,
};
const void *MeasurementControlSysInfoExtensionLCRr4::itemsPres[1] = {
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

const void *Cpich_RSCP::itemsInfo[2] = {
	&IntraFreqMeasurementSysInfoRSCPLCRr4::theInfo,
	&InterFreqMeasurementSysInfoRSCPLCRr4::theInfo,
};
const void *Cpich_RSCP::itemsPres[2] = {
	0,
	0,
};
const Cpich_RSCP::Info Cpich_RSCP::theInfo = {
	Cpich_RSCP::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *Cpich_Ec_N0::itemsInfo[2] = {
	&IntraFreqMeasurementSysInfoECN0LCRr4::theInfo,
	&InterFreqMeasurementSysInfoECN0LCRr4::theInfo,
};
const void *Cpich_Ec_N0::itemsPres[2] = {
	0,
	0,
};
const Cpich_Ec_N0::Info Cpich_Ec_N0::theInfo = {
	Cpich_Ec_N0::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *CellSelectQualityMeasure::choicesInfo[2] = {
	&Cpich_RSCP::theInfo,
	&Cpich_Ec_N0::theInfo,
};
const CellSelectQualityMeasure::Info CellSelectQualityMeasure::theInfo = {
	CellSelectQualityMeasure::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Hcs_not_used::itemsInfo[1] = {
	&CellSelectQualityMeasure::theInfo,
};
const void *Hcs_not_used::itemsPres[1] = {
	1,
};
const Hcs_not_used::Info Hcs_not_used::theInfo = {
	Hcs_not_used::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *Cpich_RSCP::itemsInfo[2] = {
	&IntraFreqMeasurementSysInfoHCSRSCPLCRr4::theInfo,
	&InterFreqMeasurementSysInfoHCSRSCPLCRr4::theInfo,
};
const void *Cpich_RSCP::itemsPres[2] = {
	0,
	0,
};
const Cpich_RSCP::Info Cpich_RSCP::theInfo = {
	Cpich_RSCP::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *Cpich_Ec_N0::itemsInfo[2] = {
	&IntraFreqMeasurementSysInfoHCSECN0LCRr4::theInfo,
	&InterFreqMeasurementSysInfoHCSECN0LCRr4::theInfo,
};
const void *Cpich_Ec_N0::itemsPres[2] = {
	0,
	0,
};
const Cpich_Ec_N0::Info Cpich_Ec_N0::theInfo = {
	Cpich_Ec_N0::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *CellSelectQualityMeasure::choicesInfo[2] = {
	&Cpich_RSCP::theInfo,
	&Cpich_Ec_N0::theInfo,
};
const CellSelectQualityMeasure::Info CellSelectQualityMeasure::theInfo = {
	CellSelectQualityMeasure::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Hcs_used::itemsInfo[1] = {
	&CellSelectQualityMeasure::theInfo,
};
const void *Hcs_used::itemsPres[1] = {
	1,
};
const Hcs_used::Info Hcs_used::theInfo = {
	Hcs_used::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *Use_of_HCS::choicesInfo[2] = {
	&Hcs_not_used::theInfo,
	&Hcs_used::theInfo,
};
const Use_of_HCS::Info Use_of_HCS::theInfo = {
	Use_of_HCS::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *MeasurementControlSysInfoLCRr4ext::itemsInfo[1] = {
	&Use_of_HCS::theInfo,
};
const void *MeasurementControlSysInfoLCRr4ext::itemsPres[1] = {
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


const void *NeighbourTDDr7::itemsInfo[1] = {
	&UARFCN::theInfo,
};
const void *NeighbourTDDr7::itemsPres[1] = {
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



const void *NewInterFreqCellv7b0ext::itemsInfo[1] = {
	&IntraSecondaryFreqIndicator::theInfo,
};
const void *NewInterFreqCellv7b0ext::itemsPres[1] = {
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
const void *NewInterFreqCellLCRv8a0ext::itemsPres[1] = {
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
const void *NewIntraFreqCellLCRv8a0ext::itemsPres[1] = {
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


const void *PLMNsOfIntraFreqCellsList::itemsInfo[0] = {
};
const void *PLMNsOfIntraFreqCellsList::itemsPres[0] = {
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

const void *PLMNsOfInterFreqCellsList::itemsInfo[0] = {
};
const void *PLMNsOfInterFreqCellsList::itemsPres[0] = {
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

const void *PLMNsOfInterRATCellsList::itemsInfo[0] = {
};
const void *PLMNsOfInterRATCellsList::itemsPres[0] = {
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

const void *PLMNIdentitiesOfNeighbourCells::itemsInfo[3] = {
	&PLMNsOfIntraFreqCellsList::theInfo,
	&PLMNsOfInterFreqCellsList::theInfo,
	&PLMNsOfInterRATCellsList::theInfo,
};
const void *PLMNIdentitiesOfNeighbourCells::itemsPres[3] = {
	0,
	0,
	0,
};
const PLMNIdentitiesOfNeighbourCells::Info PLMNIdentitiesOfNeighbourCells::theInfo = {
	PLMNIdentitiesOfNeighbourCells::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *MultiplePLMNsOfIntraFreqCellsList::itemsInfo[0] = {
};
const void *MultiplePLMNsOfIntraFreqCellsList::itemsPres[0] = {
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

const void *MultiplePLMNsOfInterFreqCellsList::itemsInfo[0] = {
};
const void *MultiplePLMNsOfInterFreqCellsList::itemsPres[0] = {
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

const void *PLMNIdentitiesOfNeighbourCellsv860ext::itemsInfo[2] = {
	&MultiplePLMNsOfIntraFreqCellsList::theInfo,
	&MultiplePLMNsOfInterFreqCellsList::theInfo,
};
const void *PLMNIdentitiesOfNeighbourCellsv860ext::itemsPres[2] = {
	0,
	0,
};
const PLMNIdentitiesOfNeighbourCellsv860ext::Info PLMNIdentitiesOfNeighbourCellsv860ext::theInfo = {
	PLMNIdentitiesOfNeighbourCellsv860ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};



const void *TimeslotWithISCP::itemsInfo[2] = {
	&TimeslotNumber::theInfo,
	&TimeslotISCP::theInfo,
};
const void *TimeslotWithISCP::itemsPres[2] = {
	1,
	1,
};
const TimeslotWithISCP::Info TimeslotWithISCP::theInfo = {
	TimeslotWithISCP::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};




const void *UEPositioningCipherParameters::itemsInfo[2] = {
	&CipheringKeyFlag::theInfo,
	&CipheringSerialNumber::theInfo,
};
const void *UEPositioningCipherParameters::itemsPres[2] = {
	1,
	1,
};
const UEPositioningCipherParameters::Info UEPositioningCipherParameters::theInfo = {
	UEPositioningCipherParameters::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *UEPositioningGANSSAssistanceDatav860ext::itemsInfo[3] = {
	&UEPositioningGANSSAddIonoModel::theInfo,
	&UEPositioningGANSSEarthOrientPara::theInfo,
	&GANSSGenericDataListv860ext::theInfo,
};
const void *UEPositioningGANSSAssistanceDatav860ext::itemsPres[3] = {
	0,
	0,
	0,
};
const UEPositioningGANSSAssistanceDatav860ext::Info UEPositioningGANSSAssistanceDatav860ext::theInfo = {
	UEPositioningGANSSAssistanceDatav860ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *UEPositioningGANSSAssistanceDatav920ext::itemsInfo[1] = {
	&GANSSGenericDataListv920ext::theInfo,
};
const void *UEPositioningGANSSAssistanceDatav920ext::itemsPres[1] = {
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

const void *UEPositioningGANSSData::itemsInfo[6] = {
	&UEPositioningCipherParameters::theInfo,
	&GANSSDecipheringKeys::theInfo,
	&UEPositioningGANSSReferenceTime::theInfo,
	&ReferenceLocationGANSS::theInfo,
	&UEPositioningGANSSIonosphericModel::theInfo,
	&GANSSGenericDataList::theInfo,
};
const void *UEPositioningGANSSData::itemsPres[6] = {
	0,
	0,
	0,
	0,
	0,
	0,
};
const UEPositioningGANSSData::Info UEPositioningGANSSData::theInfo = {
	UEPositioningGANSSData::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 6, 0
};


const void *UEPositioningGPSAcquisitionAssistancev770ext::itemsInfo[1] = {
	&UEPositioningGPSReferenceTimeUncertainty::theInfo,
};
const void *UEPositioningGPSAcquisitionAssistancev770ext::itemsPres[1] = {
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

const void *UEPositioningGPSReferenceTimev770ext::itemsInfo[1] = {
	&UEPositioningGPSReferenceTimeUncertainty::theInfo,
};
const void *UEPositioningGPSReferenceTimev770ext::itemsPres[1] = {
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

const void *UEPositioningGPSAssistanceDatav770ext::itemsInfo[2] = {
	&UEPositioningGPSReferenceTimev770ext::theInfo,
	&UEPositioningGPSAcquisitionAssistancev770ext::theInfo,
};
const void *UEPositioningGPSAssistanceDatav770ext::itemsPres[2] = {
	0,
	0,
};
const UEPositioningGPSAssistanceDatav770ext::Info UEPositioningGPSAssistanceDatav770ext::theInfo = {
	UEPositioningGPSAssistanceDatav770ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *UEPositioningGPSDGPSCorrectionsv920ext::itemsInfo[1] = {
	&DGPSCorrectionSatInfoListv920ext::theInfo,
};
const void *UEPositioningGPSDGPSCorrectionsv920ext::itemsPres[1] = {
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
const void *UEPositioningGPSAssistanceDatav920ext::itemsPres[1] = {
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



const void *UEPositioningIPDLParametersTDDr4ext::itemsInfo[5] = {
	&IPSpacingTDD::theInfo,
	&Ip_slot::theInfo,
	&Ip_Start::theInfo,
	&IPPCCPCHr4::theInfo,
	&BurstModeParameters::theInfo,
};
const void *UEPositioningIPDLParametersTDDr4ext::itemsPres[5] = {
	1,
	1,
	1,
	0,
	1,
};
const UEPositioningIPDLParametersTDDr4ext::Info UEPositioningIPDLParametersTDDr4ext::theInfo = {
	UEPositioningIPDLParametersTDDr4ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 1, 0
};

const void *UEPositioningReportingQuantityv390ext::itemsInfo[1] = {
	&UEPositioningAccuracy::theInfo,
};
const void *UEPositioningReportingQuantityv390ext::itemsPres[1] = {
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


const void *Fdd::itemsInfo[1] = {
	&PrimaryCPICHInfo::theInfo,
};
const void *Fdd::itemsPres[1] = {
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *Tdd::itemsInfo[1] = {
	&CellAndChannelIdentity::theInfo,
};
const void *Tdd::itemsPres[1] = {
	1,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};


const void *UEPositioningOTDOAReferenceCellInfoUEB::itemsInfo[6] = {
	&Sfn::theInfo,
	&ModeSpecificInfo::theInfo,
	&FrequencyInfo::theInfo,
	&ReferenceCellPosition::theInfo,
	&RoundTripTime::theInfo,
	&UEPositioningIPDLParameters::theInfo,
};
const void *UEPositioningOTDOAReferenceCellInfoUEB::itemsPres[6] = {
	0,
	1,
	0,
	0,
	0,
	0,
};
const UEPositioningOTDOAReferenceCellInfoUEB::Info UEPositioningOTDOAReferenceCellInfoUEB::theInfo = {
	UEPositioningOTDOAReferenceCellInfoUEB::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 5, 0
};

const void *Fdd::itemsInfo[1] = {
	&PrimaryCPICHInfo::theInfo,
};
const void *Fdd::itemsPres[1] = {
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *Tdd::itemsInfo[1] = {
	&CellAndChannelIdentity::theInfo,
};
const void *Tdd::itemsPres[1] = {
	1,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};





const void *UEPositioningOTDOANeighbourCellInfoUEB::itemsInfo[11] = {
	&ModeSpecificInfo::theInfo,
	&FrequencyInfo::theInfo,
	&UEPositioningIPDLParameters::theInfo,
	&SFNSFNRelTimeDifference1::theInfo,
	&SFNSFNDrift::theInfo,
	&OTDOASearchWindowSize::theInfo,
	&RelativeNorth::theInfo,
	&RelativeEast::theInfo,
	&RelativeAltitude::theInfo,
	&FineSFNSFN::theInfo,
	&RoundTripTime::theInfo,
};
const void *UEPositioningOTDOANeighbourCellInfoUEB::itemsPres[11] = {
	1,
	0,
	0,
	1,
	0,
	1,
	0,
	0,
	0,
	1,
	0,
};
const UEPositioningOTDOANeighbourCellInfoUEB::Info UEPositioningOTDOANeighbourCellInfoUEB::theInfo = {
	UEPositioningOTDOANeighbourCellInfoUEB::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	11, 7, 0
};


const void *UEPositioningOTDOAAssistanceDataUEB::itemsInfo[2] = {
	&UEPositioningOTDOAReferenceCellInfoUEB::theInfo,
	&UEPositioningOTDOANeighbourCellListUEB::theInfo,
};
const void *UEPositioningOTDOAAssistanceDataUEB::itemsPres[2] = {
	0,
	0,
};
const UEPositioningOTDOAAssistanceDataUEB::Info UEPositioningOTDOAAssistanceDataUEB::theInfo = {
	UEPositioningOTDOAAssistanceDataUEB::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *UEPositioningMeasurementv390ext::itemsInfo[3] = {
	&UEPositioningReportingQuantityv390ext::theInfo,
	&MeasurementValidity::theInfo,
	&UEPositioningOTDOAAssistanceDataUEB::theInfo,
};
const void *UEPositioningMeasurementv390ext::itemsPres[3] = {
	0,
	0,
	0,
};
const UEPositioningMeasurementv390ext::Info UEPositioningMeasurementv390ext::theInfo = {
	UEPositioningMeasurementv390ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *UEPositioningMeasurementv920ext::itemsInfo[2] = {
	&UEPositioningGPSAssistanceDatav920ext::theInfo,
	&UEPositioningGANSSAssistanceDatav920ext::theInfo,
};
const void *UEPositioningMeasurementv920ext::itemsPres[2] = {
	0,
	0,
};
const UEPositioningMeasurementv920ext::Info UEPositioningMeasurementv920ext::theInfo = {
	UEPositioningMeasurementv920ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};


const void *UEPositioningOTDOAAssistanceDatar4ext::itemsInfo[2] = {
	&UEPositioningIPDLParametersTDDr4ext::theInfo,
	&UEPositioningIPDLParametersTDDListr4ext::theInfo,
};
const void *UEPositioningOTDOAAssistanceDatar4ext::itemsPres[2] = {
	0,
	0,
};
const UEPositioningOTDOAAssistanceDatar4ext::Info UEPositioningOTDOAAssistanceDatar4ext::theInfo = {
	UEPositioningOTDOAAssistanceDatar4ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};


const void *UEPositioningOTDOAReferenceCellInfoUEBext::itemsInfo[1] = {
	&RoundTripTimeExtension::theInfo,
};
const void *UEPositioningOTDOAReferenceCellInfoUEBext::itemsPres[1] = {
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


const void *UEPositioningOTDOANeighbourCellInfoUEBext::itemsInfo[1] = {
	&RoundTripTimeExtension::theInfo,
};
const void *UEPositioningOTDOANeighbourCellInfoUEBext::itemsPres[1] = {
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


const void *UEPositioningOTDOAAssistanceDataUEBext::itemsInfo[2] = {
	&UEPositioningOTDOAReferenceCellInfoUEBext::theInfo,
	&UEPositioningOTDOANeighbourCellListUEBext::theInfo,
};
const void *UEPositioningOTDOAAssistanceDataUEBext::itemsPres[2] = {
	0,
	0,
};
const UEPositioningOTDOAAssistanceDataUEBext::Info UEPositioningOTDOAAssistanceDataUEBext::theInfo = {
	UEPositioningOTDOAAssistanceDataUEBext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *UEPositioningOTDOAMeasuredResultsTDDext::itemsInfo[1] = {
	&NeighbourListTDDr7::theInfo,
};
const void *UEPositioningOTDOAMeasuredResultsTDDext::itemsPres[1] = {
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






const void *UTRANFDDFrequency::itemsInfo[6] = {
	&UARFCN::theInfo,
	&Priority::theInfo,
	&ThreshXhigh::theInfo,
	&ThreshXlow::theInfo,
	&QQualMinFDD::theInfo,
	&QRxLevMinFDD::theInfo,
};
const void *UTRANFDDFrequency::itemsPres[6] = {
	1,
	1,
	1,
	1,
	0,
	0,
};
const UTRANFDDFrequency::Info UTRANFDDFrequency::theInfo = {
	UTRANFDDFrequency::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 2, 0
};






const void *UTRANTDDFrequency::itemsInfo[5] = {
	&UARFCN::theInfo,
	&Priority::theInfo,
	&ThreshXhigh::theInfo,
	&ThreshXlow::theInfo,
	&QRxLevMinTDD::theInfo,
};
const void *UTRANTDDFrequency::itemsPres[5] = {
	1,
	1,
	1,
	1,
	0,
};
const UTRANTDDFrequency::Info UTRANTDDFrequency::theInfo = {
	UTRANTDDFrequency::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 1, 0
};






const void *Utra_ServingCell::itemsInfo[4] = {
	&Priority::theInfo,
	&S_PrioritySearch1::theInfo,
	&S_PrioritySearch2::theInfo,
	&ThreshServingLow::theInfo,
};
const void *Utra_ServingCell::itemsPres[4] = {
	1,
	1,
	0,
	1,
};
const Utra_ServingCell::Info Utra_ServingCell::theInfo = {
	Utra_ServingCell::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 1, 0
};

const void *UTRAPriorityInfoList::itemsInfo[3] = {
	&Utra_ServingCell::theInfo,
	&UTRANFDDFrequencyList::theInfo,
	&UTRANTDDFrequencyList::theInfo,
};
const void *UTRAPriorityInfoList::itemsPres[3] = {
	1,
	0,
	0,
};
const UTRAPriorityInfoList::Info UTRAPriorityInfoList::theInfo = {
	UTRAPriorityInfoList::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};


const void *UTRAPriorityInfoListv920ext::itemsInfo[1] = {
	&ThreshServingLow2::theInfo,
};
const void *UTRAPriorityInfoListv920ext::itemsPres[1] = {
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



const void *BCCHModificationInfo::itemsInfo[2] = {
	&MIBValueTag::theInfo,
	&BCCHModificationTime::theInfo,
};
const void *BCCHModificationInfo::itemsPres[2] = {
	1,
	0,
};
const BCCHModificationInfo::Info BCCHModificationInfo::theInfo = {
	BCCHModificationInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};



const void *CBSDRXLevel1Information::itemsInfo[2] = {
	&Ctch_AllocationPeriod::theInfo,
	&Cbs_FrameOffset::theInfo,
};
const void *CBSDRXLevel1Information::itemsPres[2] = {
	1,
	1,
};
const CBSDRXLevel1Information::Info CBSDRXLevel1Information::theInfo = {
	CBSDRXLevel1Information::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};




const void *CDMA2000Message::itemsInfo[2] = {
	&Msg_Type::theInfo,
	&Payload::theInfo,
};
const void *CDMA2000Message::itemsPres[2] = {
	1,
	1,
};
const CDMA2000Message::Info CDMA2000Message::theInfo = {
	CDMA2000Message::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};




const void *FrequencyInfoCDMA2000::itemsInfo[2] = {
	&Band_Class::theInfo,
	&Cdma_Freq::theInfo,
};
const void *FrequencyInfoCDMA2000::itemsPres[2] = {
	1,
	1,
};
const FrequencyInfoCDMA2000::Info FrequencyInfoCDMA2000::theInfo = {
	FrequencyInfoCDMA2000::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};




const void *DataTransmFrequency::itemsInfo[2] = {
	&dataTransmFreqGranularity::theInfo,
	&NumberOfDataTransmOcc::theInfo,
};
const void *DataTransmFrequency::itemsPres[2] = {
	1,
	1,
};
const DataTransmFrequency::Info DataTransmFrequency::theInfo = {
	DataTransmFrequency::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};



const void *DataVolumePerRB::itemsInfo[2] = {
	&RBIdentity::theInfo,
	&DataVolume::theInfo,
};
const void *DataVolumePerRB::itemsPres[2] = {
	1,
	1,
};
const DataVolumePerRB::Info DataVolumePerRB::theInfo = {
	DataVolumePerRB::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};


const void *DataVolumeHistory::itemsInfo[3] = {
	&DataVolumeMontoringWindow::theInfo,
	&DataTransmFrequency::theInfo,
	&DataVolumePerRBList::theInfo,
};
const void *DataVolumeHistory::itemsPres[3] = {
	1,
	0,
	0,
};
const DataVolumeHistory::Info DataVolumeHistory::theInfo = {
	DataVolumeHistory::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *Fdd::itemsInfo[1] = {
	&IntraFreqMeasQuantityFDDsib3::theInfo,
};
const void *Fdd::itemsPres[1] = {
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *Tdd::itemsInfo[1] = {
	&IntraFreqMeasQuantityTDDsib3List::theInfo,
};
const void *Tdd::itemsPres[1] = {
	1,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *DeferredMeasurementControlReadingSupport::itemsInfo[1] = {
	&ModeSpecificInfo::theInfo,
};
const void *DeferredMeasurementControlReadingSupport::itemsPres[1] = {
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




const void *ETWSInformation::itemsInfo[3] = {
	&WarningType::theInfo,
	&MessageIdentifier::theInfo,
	&SerialNumber::theInfo,
};
const void *ETWSInformation::itemsPres[3] = {
	1,
	1,
	1,
};
const ETWSInformation::Info ETWSInformation::theInfo = {
	ETWSInformation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};



















const void *SIBTypeExtGANSS::choicesInfo[16] = {
	&SystemInfoType15_1bis::theInfo,
	&SystemInfoType15_2bis::theInfo,
	&SystemInfoType15_2ter::theInfo,
	&SystemInfoType15_3bis::theInfo,
	&SystemInfoType15_6::theInfo,
	&SystemInfoType15_7::theInfo,
	&SystemInfoType15_8::theInfo,
	&Spare9::theInfo,
	&Spare8::theInfo,
	&Spare7::theInfo,
	&Spare6::theInfo,
	&Spare5::theInfo,
	&Spare4::theInfo,
	&Spare3::theInfo,
	&Spare2::theInfo,
	&Spare1::theInfo,
};
const SIBTypeExtGANSS::Info SIBTypeExtGANSS::theInfo = {
	SIBTypeExtGANSS::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	15
};


const void *ValueTagInfo::choicesInfo[4] = {
	&None::theInfo,
	&CellValueTag::theInfo,
	&PLMNValueTag::theInfo,
	&SIBOccurrenceIdentityAndValueTag::theInfo,
};
const ValueTagInfo::Info ValueTagInfo::theInfo = {
	ValueTagInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	3
};

const void *ExtGANSSSchedulingInfo::itemsInfo[3] = {
	&SIBTypeExtGANSS::theInfo,
	&SchedulingInformation::theInfo,
	&ValueTagInfo::theInfo,
};
const void *ExtGANSSSchedulingInfo::itemsPres[3] = {
	1,
	1,
	1,
};
const ExtGANSSSchedulingInfo::Info ExtGANSSSchedulingInfo::theInfo = {
	ExtGANSSSchedulingInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};



const void *ExtGANSSSIBTypeInfoSchedulingInfo::itemsInfo[3] = {
	&GanssID::theInfo,
	&UEPositioningGANSSSBASID::theInfo,
	&GanssScheduling::theInfo,
};
const void *ExtGANSSSIBTypeInfoSchedulingInfo::itemsPres[3] = {
	0,
	0,
	1,
};
const ExtGANSSSIBTypeInfoSchedulingInfo::Info ExtGANSSSIBTypeInfoSchedulingInfo::theInfo = {
	ExtGANSSSIBTypeInfoSchedulingInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};










const void *SIBTypeExt::choicesInfo[8] = {
	&SystemInfoType11bis::theInfo,
	&SystemInfoType15bis::theInfo,
	&SystemInfoType15_1bis::theInfo,
	&SystemInfoType15_2bis::theInfo,
	&SystemInfoType15_3bis::theInfo,
	&SystemInfoType15_6::theInfo,
	&SystemInfoType15_7::theInfo,
	&SystemInfoType15_8::theInfo,
};
const SIBTypeExt::Info SIBTypeExt::theInfo = {
	SIBTypeExt::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	7
};

const void *ExtSIBTypeInfoSchedulingInfo::itemsInfo[3] = {
	&SIBTypeExt::theInfo,
	&SchedulingInformation::theInfo,
	&ValueTagInfo::theInfo,
};
const void *ExtSIBTypeInfoSchedulingInfo::itemsPres[3] = {
	1,
	1,
	1,
};
const ExtSIBTypeInfoSchedulingInfo::Info ExtSIBTypeInfoSchedulingInfo::theInfo = {
	ExtSIBTypeInfoSchedulingInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};










const void *SIBTypeExt2::choicesInfo[8] = {
	&SystemInfoType19::theInfo,
	&SystemInfoType15_2ter::theInfo,
	&SystemInfoType20::theInfo,
	&Spare5::theInfo,
	&Spare4::theInfo,
	&Spare3::theInfo,
	&Spare2::theInfo,
	&Spare1::theInfo,
};
const SIBTypeExt2::Info SIBTypeExt2::theInfo = {
	SIBTypeExt2::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	7
};

const void *ExtSIBTypeInfoSchedulingInfo2::itemsInfo[3] = {
	&SIBTypeExt2::theInfo,
	&SchedulingInformation::theInfo,
	&ValueTagInfo::theInfo,
};
const void *ExtSIBTypeInfoSchedulingInfo2::itemsPres[3] = {
	1,
	1,
	1,
};
const ExtSIBTypeInfoSchedulingInfo2::Info ExtSIBTypeInfoSchedulingInfo2::theInfo = {
	ExtSIBTypeInfoSchedulingInfo2::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};





const void *GSMBARange::itemsInfo[2] = {
	&UARFCN::theInfo,
	&UARFCN::theInfo,
};
const void *GSMBARange::itemsPres[2] = {
	1,
	1,
};
const GSMBARange::Info GSMBARange::theInfo = {
	GSMBARange::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};















const void *InterRATChangeFailureCause::choicesInfo[8] = {
	&ConfigurationUnacceptable::theInfo,
	&PhysicalChannelFailure::theInfo,
	&ProtocolErrorInformation::theInfo,
	&Unspecified::theInfo,
	&Spare4::theInfo,
	&Spare3::theInfo,
	&Spare2::theInfo,
	&Spare1::theInfo,
};
const InterRATChangeFailureCause::Info InterRATChangeFailureCause::theInfo = {
	InterRATChangeFailureCause::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	7
};




const void *Gsm::itemsInfo[2] = {
	&GSMClassmark2::theInfo,
	&GSMClassmark3::theInfo,
};
const void *Gsm::itemsPres[2] = {
	1,
	1,
};
const Gsm::Info Gsm::theInfo = {
	Gsm::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *Cdma2000::itemsInfo[1] = {
	&CDMA2000MessageList::theInfo,
};
const void *Cdma2000::itemsPres[1] = {
	1,
};
const Cdma2000::Info Cdma2000::theInfo = {
	Cdma2000::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *InterRATUERadioAccessCapability::choicesInfo[2] = {
	&Gsm::theInfo,
	&Cdma2000::theInfo,
};
const InterRATUERadioAccessCapability::Info InterRATUERadioAccessCapability::theInfo = {
	InterRATUERadioAccessCapability::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};


const void *InterRATUERadioAccessCapabilityv590ext::itemsInfo[1] = {
	&GERANIuRadioAccessCapability::theInfo,
};
const void *InterRATUERadioAccessCapabilityv590ext::itemsPres[1] = {
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

const void *Gsm::itemsInfo[1] = {
	&GsmSecurityCapability::theInfo,
};
const void *Gsm::itemsPres[1] = {
	1,
};
const Gsm::Info Gsm::theInfo = {
	Gsm::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *InterRATUESecurityCapability::choicesInfo[1] = {
	&Gsm::theInfo,
};
const InterRATUESecurityCapability::Info InterRATUESecurityCapability::theInfo = {
	InterRATUESecurityCapability::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

















const void *InterRATHOFailureCause::choicesInfo[16] = {
	&ConfigurationUnacceptable::theInfo,
	&PhysicalChannelFailure::theInfo,
	&ProtocolErrorInformation::theInfo,
	&InterRAT_ProtocolError::theInfo,
	&Unspecified::theInfo,
	&Spare11::theInfo,
	&Spare10::theInfo,
	&Spare9::theInfo,
	&Spare8::theInfo,
	&Spare7::theInfo,
	&Spare6::theInfo,
	&Spare5::theInfo,
	&Spare4::theInfo,
	&Spare3::theInfo,
	&Spare2::theInfo,
	&Spare1::theInfo,
};
const InterRATHOFailureCause::Info InterRATHOFailureCause::theInfo = {
	InterRATHOFailureCause::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	15
};








const void *SIBSbTypeAndTag::choicesInfo[32] = {
	&PLMNValueTag::theInfo,
	&CellValueTag::theInfo,
	&CellValueTag::theInfo,
	&CellValueTag::theInfo,
	&CellValueTag::theInfo,
	&CellValueTag::theInfo,
	&SysInfoType7::theInfo,
	&CellValueTag::theInfo,
	&Dummy2::theInfo,
	&Dummy3::theInfo,
	&CellValueTag::theInfo,
	&CellValueTag::theInfo,
	&CellValueTag::theInfo,
	&CellValueTag::theInfo,
	&CellValueTag::theInfo,
	&CellValueTag::theInfo,
	&CellValueTag::theInfo,
	&SysInfoType14::theInfo,
	&CellValueTag::theInfo,
	&PredefinedConfigIdentityAndValueTag::theInfo,
	&SysInfoType17::theInfo,
	&CellValueTag::theInfo,
	&CellValueTag::theInfo,
	&CellValueTag::theInfo,
	&SIBOccurrenceIdentityAndValueTag::theInfo,
	&SIBOccurrenceIdentityAndValueTag::theInfo,
	&CellValueTag::theInfo,
	&CellValueTag::theInfo,
	&CellValueTag::theInfo,
	&CellValueTag::theInfo,
	&Spare2::theInfo,
	&Spare1::theInfo,
};
const SIBSbTypeAndTag::Info SIBSbTypeAndTag::theInfo = {
	SIBSbTypeAndTag::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	31
};

const void *SchedulingInformationSIBSb::itemsInfo[2] = {
	&SIBSbTypeAndTag::theInfo,
	&SchedulingInformation::theInfo,
};
const void *SchedulingInformationSIBSb::itemsPres[2] = {
	1,
	1,
};
const SchedulingInformationSIBSb::Info SchedulingInformationSIBSb::theInfo = {
	SchedulingInformationSIBSb::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};


const void *MasterInformationBlockv690ext::itemsInfo[1] = {
	&MultiplePLMNListr6::theInfo,
};
const void *MasterInformationBlockv690ext::itemsPres[1] = {
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
const void *MasterInformationBlockv6b0extIEs::itemsPres[1] = {
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


const void *MasterInformationBlockv860extIEs::itemsInfo[3] = {
	&ExtSIBTypeInfoSchedulingInfoList2::theInfo,
	&ExtGANSSSIBTypeInfoSchedulingInfoList::theInfo,
	&csg_Indicator::theInfo,
};
const void *MasterInformationBlockv860extIEs::itemsPres[3] = {
	0,
	0,
	0,
};
const MasterInformationBlockv860extIEs::Info MasterInformationBlockv860extIEs::theInfo = {
	MasterInformationBlockv860extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *NonCriticalExtensions::itemsInfo[0] = {
};
const void *NonCriticalExtensions::itemsPres[0] = {
};
const NonCriticalExtensions::Info NonCriticalExtensions::theInfo = {
	NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *V860NonCriticalExtensions::itemsInfo[2] = {
	&MasterInformationBlockv860extIEs::theInfo,
	&NonCriticalExtensions::theInfo,
};
const void *V860NonCriticalExtensions::itemsPres[2] = {
	1,
	0,
};
const V860NonCriticalExtensions::Info V860NonCriticalExtensions::theInfo = {
	V860NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *V6b0NonCriticalExtensions::itemsInfo[2] = {
	&MasterInformationBlockv6b0extIEs::theInfo,
	&V860NonCriticalExtensions::theInfo,
};
const void *V6b0NonCriticalExtensions::itemsPres[2] = {
	1,
	0,
};
const V6b0NonCriticalExtensions::Info V6b0NonCriticalExtensions::theInfo = {
	V6b0NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *V690NonCriticalExtensions::itemsInfo[2] = {
	&MasterInformationBlockv690ext::theInfo,
	&V6b0NonCriticalExtensions::theInfo,
};
const void *V690NonCriticalExtensions::itemsPres[2] = {
	1,
	0,
};
const V690NonCriticalExtensions::Info V690NonCriticalExtensions::theInfo = {
	V690NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *MasterInformationBlock::itemsInfo[4] = {
	&MIBValueTag::theInfo,
	&PLMNType::theInfo,
	&SIBSbReferenceList::theInfo,
	&V690NonCriticalExtensions::theInfo,
};
const void *MasterInformationBlock::itemsPres[4] = {
	1,
	1,
	1,
	0,
};
const MasterInformationBlock::Info MasterInformationBlock::theInfo = {
	MasterInformationBlock::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 1, 0
};


const void *RplmnInformation::itemsInfo[4] = {
	&GSMBARangeList::theInfo,
	&FDDUMTSFrequencyList::theInfo,
	&TDDUMTSFrequencyList::theInfo,
	&CDMA2000UMTSFrequencyList::theInfo,
};
const void *RplmnInformation::itemsPres[4] = {
	0,
	0,
	0,
	0,
};
const RplmnInformation::Info RplmnInformation::theInfo = {
	RplmnInformation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 4, 0
};

const void *RplmnInformationr4::itemsInfo[5] = {
	&GSMBARangeList::theInfo,
	&FDDUMTSFrequencyList::theInfo,
	&TDDUMTSFrequencyList::theInfo,
	&TDDUMTSFrequencyList::theInfo,
	&CDMA2000UMTSFrequencyList::theInfo,
};
const void *RplmnInformationr4::itemsPres[5] = {
	0,
	0,
	0,
	0,
	0,
};
const RplmnInformationr4::Info RplmnInformationr4::theInfo = {
	RplmnInformationr4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 5, 0
};







const void *SysInfoType1v3a0extIEs::itemsInfo[2] = {
	&UEConnTimersAndConstantsv3a0ext::theInfo,
	&UEIdleTimersAndConstantsv3a0ext::theInfo,
};
const void *SysInfoType1v3a0extIEs::itemsPres[2] = {
	1,
	1,
};
const SysInfoType1v3a0extIEs::Info SysInfoType1v3a0extIEs::theInfo = {
	SysInfoType1v3a0extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *SysInfoType1v860extIEs::itemsInfo[1] = {
	&UEConnTimersAndConstantsv860ext::theInfo,
};
const void *SysInfoType1v860extIEs::itemsPres[1] = {
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

const void *NonCriticalExtensions::itemsInfo[0] = {
};
const void *NonCriticalExtensions::itemsPres[0] = {
};
const NonCriticalExtensions::Info NonCriticalExtensions::theInfo = {
	NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *V860NonCriticalExtentions::itemsInfo[2] = {
	&SysInfoType1v860extIEs::theInfo,
	&NonCriticalExtensions::theInfo,
};
const void *V860NonCriticalExtentions::itemsPres[2] = {
	1,
	0,
};
const V860NonCriticalExtentions::Info V860NonCriticalExtentions::theInfo = {
	V860NonCriticalExtentions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *V3a0NonCriticalExtensions::itemsInfo[2] = {
	&SysInfoType1v3a0extIEs::theInfo,
	&V860NonCriticalExtentions::theInfo,
};
const void *V3a0NonCriticalExtensions::itemsPres[2] = {
	1,
	0,
};
const V3a0NonCriticalExtensions::Info V3a0NonCriticalExtensions::theInfo = {
	V3a0NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *SysInfoType1::itemsInfo[5] = {
	&NASSystemInformationGSMMAP::theInfo,
	&CNDomainSysInfoList::theInfo,
	&UEConnTimersAndConstants::theInfo,
	&UEIdleTimersAndConstants::theInfo,
	&V3a0NonCriticalExtensions::theInfo,
};
const void *SysInfoType1::itemsPres[5] = {
	1,
	1,
	0,
	0,
	0,
};
const SysInfoType1::Info SysInfoType1::theInfo = {
	SysInfoType1::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 3, 0
};

const void *NonCriticalExtensions::itemsInfo[0] = {
};
const void *NonCriticalExtensions::itemsPres[0] = {
};
const NonCriticalExtensions::Info NonCriticalExtensions::theInfo = {
	NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *SysInfoType2::itemsInfo[2] = {
	&URAIdentityList::theInfo,
	&NonCriticalExtensions::theInfo,
};
const void *SysInfoType2::itemsPres[2] = {
	1,
	0,
};
const SysInfoType2::Info SysInfoType2::theInfo = {
	SysInfoType2::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};


const void *SysInfoType3v4b0extIEs::itemsInfo[1] = {
	&MappingLCRr4::theInfo,
};
const void *SysInfoType3v4b0extIEs::itemsPres[1] = {
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
const void *SysInfoType3v590ext::itemsPres[1] = {
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
const void *SysInfoType3v5c0extIEs::itemsPres[1] = {
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

const void *SysInfoType3v670ext::itemsInfo[2] = {
	&DomainSpecificAccessRestrictionParamv670ext::theInfo,
	&DomainSpecificAccessRestrictionForSharedNetworkv670ext::theInfo,
};
const void *SysInfoType3v670ext::itemsPres[2] = {
	0,
	0,
};
const SysInfoType3v670ext::Info SysInfoType3v670ext::theInfo = {
	SysInfoType3v670ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};


const void *SysInfoType3v770extIEs::itemsInfo[4] = {
	&DeferredMeasurementControlReadingSupport::theInfo,
	&QQualMinOffset::theInfo,
	&QRxlevMinOffset::theInfo,
	&MBSFNOnlyService::theInfo,
};
const void *SysInfoType3v770extIEs::itemsPres[4] = {
	0,
	0,
	0,
	0,
};
const SysInfoType3v770extIEs::Info SysInfoType3v770extIEs::theInfo = {
	SysInfoType3v770extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 4, 0
};

const void *SysInfoType3v830extIEs::itemsInfo[2] = {
	&PagingPermissionWithAccessControlParameters::theInfo,
	&PagingPermissionWithAccessControlForSharedNetwork::theInfo,
};
const void *SysInfoType3v830extIEs::itemsPres[2] = {
	0,
	0,
};
const SysInfoType3v830extIEs::Info SysInfoType3v830extIEs::theInfo = {
	SysInfoType3v830extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *SysInfoType3v860extIEs::itemsInfo[2] = {
	&CSGIdentity::theInfo,
	&CSGPSCSplitInfo::theInfo,
};
const void *SysInfoType3v860extIEs::itemsPres[2] = {
	0,
	0,
};
const SysInfoType3v860extIEs::Info SysInfoType3v860extIEs::theInfo = {
	SysInfoType3v860extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *SysInfoType3v870extIEs::itemsInfo[1] = {
	&CellAccessRestrictionv870ext::theInfo,
};
const void *SysInfoType3v870extIEs::itemsPres[1] = {
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
	&imsEmergencySupportIndicator::theInfo,
};
const void *SysInfoType3v920extIEs::itemsPres[1] = {
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

const void *NonCriticalExtensions::itemsInfo[0] = {
};
const void *NonCriticalExtensions::itemsPres[0] = {
};
const NonCriticalExtensions::Info NonCriticalExtensions::theInfo = {
	NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *V900NonCriticalExtension::itemsInfo[2] = {
	&SysInfoType3v920extIEs::theInfo,
	&NonCriticalExtensions::theInfo,
};
const void *V900NonCriticalExtension::itemsPres[2] = {
	1,
	0,
};
const V900NonCriticalExtension::Info V900NonCriticalExtension::theInfo = {
	V900NonCriticalExtension::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *V870NonCriticalExtension::itemsInfo[2] = {
	&SysInfoType3v870extIEs::theInfo,
	&V900NonCriticalExtension::theInfo,
};
const void *V870NonCriticalExtension::itemsPres[2] = {
	1,
	0,
};
const V870NonCriticalExtension::Info V870NonCriticalExtension::theInfo = {
	V870NonCriticalExtension::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *V860NonCriticalExtension::itemsInfo[2] = {
	&SysInfoType3v860extIEs::theInfo,
	&V870NonCriticalExtension::theInfo,
};
const void *V860NonCriticalExtension::itemsPres[2] = {
	1,
	0,
};
const V860NonCriticalExtension::Info V860NonCriticalExtension::theInfo = {
	V860NonCriticalExtension::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *V830NonCriticalExtension::itemsInfo[2] = {
	&SysInfoType3v830extIEs::theInfo,
	&V860NonCriticalExtension::theInfo,
};
const void *V830NonCriticalExtension::itemsPres[2] = {
	1,
	0,
};
const V830NonCriticalExtension::Info V830NonCriticalExtension::theInfo = {
	V830NonCriticalExtension::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *V770NonCriticalExtension::itemsInfo[2] = {
	&SysInfoType3v770extIEs::theInfo,
	&V830NonCriticalExtension::theInfo,
};
const void *V770NonCriticalExtension::itemsPres[2] = {
	1,
	0,
};
const V770NonCriticalExtension::Info V770NonCriticalExtension::theInfo = {
	V770NonCriticalExtension::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *V670NonCriticalExtension::itemsInfo[2] = {
	&SysInfoType3v670ext::theInfo,
	&V770NonCriticalExtension::theInfo,
};
const void *V670NonCriticalExtension::itemsPres[2] = {
	1,
	0,
};
const V670NonCriticalExtension::Info V670NonCriticalExtension::theInfo = {
	V670NonCriticalExtension::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *V5c0NoncriticalExtension::itemsInfo[2] = {
	&SysInfoType3v5c0extIEs::theInfo,
	&V670NonCriticalExtension::theInfo,
};
const void *V5c0NoncriticalExtension::itemsPres[2] = {
	1,
	0,
};
const V5c0NoncriticalExtension::Info V5c0NoncriticalExtension::theInfo = {
	V5c0NoncriticalExtension::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *V590NonCriticalExtension::itemsInfo[2] = {
	&SysInfoType3v590ext::theInfo,
	&V5c0NoncriticalExtension::theInfo,
};
const void *V590NonCriticalExtension::itemsPres[2] = {
	1,
	0,
};
const V590NonCriticalExtension::Info V590NonCriticalExtension::theInfo = {
	V590NonCriticalExtension::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *V4b0NonCriticalExtensions::itemsInfo[2] = {
	&SysInfoType3v4b0extIEs::theInfo,
	&V590NonCriticalExtension::theInfo,
};
const void *V4b0NonCriticalExtensions::itemsPres[2] = {
	1,
	0,
};
const V4b0NonCriticalExtensions::Info V4b0NonCriticalExtensions::theInfo = {
	V4b0NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *SysInfoType3::itemsInfo[5] = {
	&Sib4indicator::theInfo,
	&CellIdentity::theInfo,
	&CellSelectReselectInfoSIB34::theInfo,
	&CellAccessRestriction::theInfo,
	&V4b0NonCriticalExtensions::theInfo,
};
const void *SysInfoType3::itemsPres[5] = {
	1,
	1,
	1,
	1,
	0,
};
const SysInfoType3::Info SysInfoType3::theInfo = {
	SysInfoType3::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 1, 0
};

const void *SysInfoType4v4b0extIEs::itemsInfo[1] = {
	&MappingLCRr4::theInfo,
};
const void *SysInfoType4v4b0extIEs::itemsPres[1] = {
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
const void *SysInfoType4v590ext::itemsPres[1] = {
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
const void *SysInfoType4v5b0extIEs::itemsPres[1] = {
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
const void *SysInfoType4v5c0extIEs::itemsPres[1] = {
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

const void *NonCriticalExtensions::itemsInfo[0] = {
};
const void *NonCriticalExtensions::itemsPres[0] = {
};
const NonCriticalExtensions::Info NonCriticalExtensions::theInfo = {
	NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *V5c0NonCriticalExtension::itemsInfo[2] = {
	&SysInfoType4v5c0extIEs::theInfo,
	&NonCriticalExtensions::theInfo,
};
const void *V5c0NonCriticalExtension::itemsPres[2] = {
	1,
	0,
};
const V5c0NonCriticalExtension::Info V5c0NonCriticalExtension::theInfo = {
	V5c0NonCriticalExtension::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *V5b0NonCriticalExtension::itemsInfo[2] = {
	&SysInfoType4v5b0extIEs::theInfo,
	&V5c0NonCriticalExtension::theInfo,
};
const void *V5b0NonCriticalExtension::itemsPres[2] = {
	1,
	0,
};
const V5b0NonCriticalExtension::Info V5b0NonCriticalExtension::theInfo = {
	V5b0NonCriticalExtension::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *V590NonCriticalExtension::itemsInfo[2] = {
	&SysInfoType4v590ext::theInfo,
	&V5b0NonCriticalExtension::theInfo,
};
const void *V590NonCriticalExtension::itemsPres[2] = {
	1,
	0,
};
const V590NonCriticalExtension::Info V590NonCriticalExtension::theInfo = {
	V590NonCriticalExtension::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *V4b0NonCriticalExtensions::itemsInfo[2] = {
	&SysInfoType4v4b0extIEs::theInfo,
	&V590NonCriticalExtension::theInfo,
};
const void *V4b0NonCriticalExtensions::itemsPres[2] = {
	1,
	0,
};
const V4b0NonCriticalExtensions::Info V4b0NonCriticalExtensions::theInfo = {
	V4b0NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *SysInfoType4::itemsInfo[4] = {
	&CellIdentity::theInfo,
	&CellSelectReselectInfoSIB34::theInfo,
	&CellAccessRestriction::theInfo,
	&V4b0NonCriticalExtensions::theInfo,
};
const void *SysInfoType4::itemsPres[4] = {
	1,
	1,
	1,
	0,
};
const SysInfoType4::Info SysInfoType4::theInfo = {
	SysInfoType4::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 1, 0
};


const void *Fdd::itemsInfo[1] = {
	&AICHPowerOffset::theInfo,
};
const void *Fdd::itemsPres[1] = {
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *Tdd::itemsInfo[3] = {
	&PUSCHSysInfoListSFN::theInfo,
	&PDSCHSysInfoListSFN::theInfo,
	&OpenLoopPowerControlTDD::theInfo,
};
const void *Tdd::itemsPres[3] = {
	0,
	0,
	1,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Tdd128SpecificInfo::itemsInfo[4] = {
	&PUSCHSysInfoListSFNLCRr4::theInfo,
	&PDSCHSysInfoListSFNLCRr4::theInfo,
	&PrimaryCCPCHInfoLCRr4ext::theInfo,
	&SCCPCHSystemInformationListLCRr4ext::theInfo,
};
const void *Tdd128SpecificInfo::itemsPres[4] = {
	0,
	0,
	0,
	1,
};
const Tdd128SpecificInfo::Info Tdd128SpecificInfo::theInfo = {
	Tdd128SpecificInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 3, 0
};

const void *SysInfoType5v4b0extIEs::itemsInfo[5] = {
	&PNBSCHAllocationr4::theInfo,
	&OpenLoopPowerControlIPDLTDDr4::theInfo,
	&PRACHSystemInformationListLCRr4::theInfo,
	&Tdd128SpecificInfo::theInfo,
	&RadioFrequencyBandFDD::theInfo,
};
const void *SysInfoType5v4b0extIEs::itemsPres[5] = {
	0,
	0,
	0,
	0,
	0,
};
const SysInfoType5v4b0extIEs::Info SysInfoType5v4b0extIEs::theInfo = {
	SysInfoType5v4b0extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 5, 0
};

const void *Hcr_r5_SpecificInfo::itemsInfo[2] = {
	&PUSCHSysInfoListSFNHCRr5::theInfo,
	&PDSCHSysInfoListSFNHCRr5::theInfo,
};
const void *Hcr_r5_SpecificInfo::itemsPres[2] = {
	0,
	0,
};
const Hcr_r5_SpecificInfo::Info Hcr_r5_SpecificInfo::theInfo = {
	Hcr_r5_SpecificInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *SysInfoType5v590extIEs::itemsInfo[1] = {
	&Hcr_r5_SpecificInfo::theInfo,
};
const void *SysInfoType5v590extIEs::itemsPres[1] = {
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
const void *SysInfoType5v650extIEs::itemsPres[1] = {
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
	&hsdpa_CellIndicator::theInfo,
};
const void *SysInfoType5v680extIEs::itemsPres[1] = {
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


const void *Sccpch_SystemInformation_MBMS::choicesInfo[2] = {
	&MBMSMCCHConfigurationInfor6::theInfo,
	&SCCPCHSystemInformationMBMSr6::theInfo,
};
const Sccpch_SystemInformation_MBMS::Info Sccpch_SystemInformation_MBMS::theInfo = {
	Sccpch_SystemInformation_MBMS::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *SysInfoType5v690extIEs::itemsInfo[4] = {
	&edch_CellIndicator::theInfo,
	&Sccpch_SystemInformation_MBMS::theInfo,
	&AdditionalPRACHTFandTFCSCCCHList::theInfo,
	&CBSDRXLevel1Informationextensionr6::theInfo,
};
const void *SysInfoType5v690extIEs::itemsPres[4] = {
	0,
	0,
	0,
	0,
};
const SysInfoType5v690extIEs::Info SysInfoType5v690extIEs::theInfo = {
	SysInfoType5v690extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 4, 0
};

const void *Fdd::itemsInfo[2] = {
	&HSDSCHCommonSystemInformation::theInfo,
	&HSDSCHPagingSystemInformation::theInfo,
};
const void *Fdd::itemsPres[2] = {
	1,
	0,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *Tdd768::itemsInfo[3] = {
	&PUSCHSysInfoListSFNVHCR::theInfo,
	&PDSCHSysInfoListVHCRr7::theInfo,
	&PRACHSystemInformationListVHCRr7::theInfo,
};
const void *Tdd768::itemsPres[3] = {
	0,
	0,
	0,
};
const Tdd768::Info Tdd768::theInfo = {
	Tdd768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *Tdd128::itemsInfo[1] = {
	&PRACHSystemInformationListLCRv770ext::theInfo,
};
const void *Tdd128::itemsPres[1] = {
	0,
};
const Tdd128::Info Tdd128::theInfo = {
	Tdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *ModeSpecificInfo::choicesInfo[3] = {
	&Fdd::theInfo,
	&Tdd768::theInfo,
	&Tdd128::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *Sccpch_SystemInformation_MBMS::choicesInfo[1] = {
	&SCCPCHSystemInformationMBMSr7::theInfo,
};
const Sccpch_SystemInformation_MBMS::Info Sccpch_SystemInformation_MBMS::theInfo = {
	Sccpch_SystemInformation_MBMS::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *SysInfoType5v770extIEs::itemsInfo[4] = {
	&ModeSpecificInfo::theInfo,
	&SCCPCHSystemInformationListHCRVHCRr7::theInfo,
	&Sccpch_SystemInformation_MBMS::theInfo,
	&TDDMBSFNInformation::theInfo,
};
const void *SysInfoType5v770extIEs::itemsPres[4] = {
	0,
	0,
	0,
	0,
};
const SysInfoType5v770extIEs::Info SysInfoType5v770extIEs::theInfo = {
	SysInfoType5v770extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 4, 0
};

const void *Dummy::itemsInfo[0] = {
};
const void *Dummy::itemsPres[0] = {
};
const Dummy::Info Dummy::theInfo = {
	Dummy::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *Fdd::itemsInfo[1] = {
	&HSDSCHDrxCellfachinfo::theInfo,
};
const void *Fdd::itemsPres[1] = {
	0,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *Hs_dsch_CommonSysInfo::itemsInfo[2] = {
	&HSDSCHCommonSystemInformationTDD128::theInfo,
	&HSDSCHPagingSystemInformationTDD128::theInfo,
};
const void *Hs_dsch_CommonSysInfo::itemsPres[2] = {
	1,
	0,
};
const Hs_dsch_CommonSysInfo::Info Hs_dsch_CommonSysInfo::theInfo = {
	Hs_dsch_CommonSysInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *Tdd128::itemsInfo[2] = {
	&Hs_dsch_CommonSysInfo::theInfo,
	&HSDSCHDrxCellfachinfoTDD128::theInfo,
};
const void *Tdd128::itemsPres[2] = {
	0,
	0,
};
const Tdd128::Info Tdd128::theInfo = {
	Tdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd128::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *SysInfoType5v860extIEs::itemsInfo[2] = {
	&Dummy::theInfo,
	&ModeSpecificInfo::theInfo,
};
const void *SysInfoType5v860extIEs::itemsPres[2] = {
	0,
	1,
};
const SysInfoType5v860extIEs::Info SysInfoType5v860extIEs::theInfo = {
	SysInfoType5v860extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *SysInfoType5v890extIEs::itemsInfo[2] = {
	&FrequencyInfoTDD::theInfo,
	&CommonEDCHSystemInfo::theInfo,
};
const void *SysInfoType5v890extIEs::itemsPres[2] = {
	0,
	0,
};
const SysInfoType5v890extIEs::Info SysInfoType5v890extIEs::theInfo = {
	SysInfoType5v890extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};


const void *SysInfoType5v8b0extIEs::itemsInfo[2] = {
	&tresetUsageIndicator::theInfo,
	&UpPCHpositionLCR::theInfo,
};
const void *SysInfoType5v8b0extIEs::itemsPres[2] = {
	0,
	0,
};
const SysInfoType5v8b0extIEs::Info SysInfoType5v8b0extIEs::theInfo = {
	SysInfoType5v8b0extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *SysInfoType5v8d0extIEs::itemsInfo[1] = {
	&CommonEDCHSystemInfoFDD::theInfo,
};
const void *SysInfoType5v8d0extIEs::itemsPres[1] = {
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

const void *NonCriticalExtensions::itemsInfo[0] = {
};
const void *NonCriticalExtensions::itemsPres[0] = {
};
const NonCriticalExtensions::Info NonCriticalExtensions::theInfo = {
	NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *V8d0NonCriticalExtensions::itemsInfo[2] = {
	&SysInfoType5v8d0extIEs::theInfo,
	&NonCriticalExtensions::theInfo,
};
const void *V8d0NonCriticalExtensions::itemsPres[2] = {
	1,
	0,
};
const V8d0NonCriticalExtensions::Info V8d0NonCriticalExtensions::theInfo = {
	V8d0NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *V8b0NonCriticalExtensions::itemsInfo[2] = {
	&SysInfoType5v8b0extIEs::theInfo,
	&V8d0NonCriticalExtensions::theInfo,
};
const void *V8b0NonCriticalExtensions::itemsPres[2] = {
	1,
	0,
};
const V8b0NonCriticalExtensions::Info V8b0NonCriticalExtensions::theInfo = {
	V8b0NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *V890NonCriticalExtensions::itemsInfo[2] = {
	&SysInfoType5v890extIEs::theInfo,
	&V8b0NonCriticalExtensions::theInfo,
};
const void *V890NonCriticalExtensions::itemsPres[2] = {
	1,
	0,
};
const V890NonCriticalExtensions::Info V890NonCriticalExtensions::theInfo = {
	V890NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *V860NonCriticalExtensions::itemsInfo[2] = {
	&SysInfoType5v860extIEs::theInfo,
	&V890NonCriticalExtensions::theInfo,
};
const void *V860NonCriticalExtensions::itemsPres[2] = {
	1,
	0,
};
const V860NonCriticalExtensions::Info V860NonCriticalExtensions::theInfo = {
	V860NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *V770NonCriticalExtensions::itemsInfo[2] = {
	&SysInfoType5v770extIEs::theInfo,
	&V860NonCriticalExtensions::theInfo,
};
const void *V770NonCriticalExtensions::itemsPres[2] = {
	1,
	0,
};
const V770NonCriticalExtensions::Info V770NonCriticalExtensions::theInfo = {
	V770NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *V690NonCriticalExtensions::itemsInfo[2] = {
	&SysInfoType5v690extIEs::theInfo,
	&V770NonCriticalExtensions::theInfo,
};
const void *V690NonCriticalExtensions::itemsPres[2] = {
	1,
	0,
};
const V690NonCriticalExtensions::Info V690NonCriticalExtensions::theInfo = {
	V690NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *V680NonCriticalExtensions::itemsInfo[2] = {
	&SysInfoType5v680extIEs::theInfo,
	&V690NonCriticalExtensions::theInfo,
};
const void *V680NonCriticalExtensions::itemsPres[2] = {
	0,
	0,
};
const V680NonCriticalExtensions::Info V680NonCriticalExtensions::theInfo = {
	V680NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *V650NonCriticalExtensions::itemsInfo[2] = {
	&SysInfoType5v650extIEs::theInfo,
	&V680NonCriticalExtensions::theInfo,
};
const void *V650NonCriticalExtensions::itemsPres[2] = {
	0,
	0,
};
const V650NonCriticalExtensions::Info V650NonCriticalExtensions::theInfo = {
	V650NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *V590NonCriticalExtensions::itemsInfo[2] = {
	&SysInfoType5v590extIEs::theInfo,
	&V650NonCriticalExtensions::theInfo,
};
const void *V590NonCriticalExtensions::itemsPres[2] = {
	0,
	0,
};
const V590NonCriticalExtensions::Info V590NonCriticalExtensions::theInfo = {
	V590NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *V4b0NonCriticalExtensions::itemsInfo[2] = {
	&SysInfoType5v4b0extIEs::theInfo,
	&V590NonCriticalExtensions::theInfo,
};
const void *V4b0NonCriticalExtensions::itemsPres[2] = {
	0,
	0,
};
const V4b0NonCriticalExtensions::Info V4b0NonCriticalExtensions::theInfo = {
	V4b0NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *SysInfoType5::itemsInfo[8] = {
	&Sib6indicator::theInfo,
	&PICHPowerOffset::theInfo,
	&ModeSpecificInfo::theInfo,
	&PrimaryCCPCHInfo::theInfo,
	&PRACHSystemInformationList::theInfo,
	&SCCPCHSystemInformationList::theInfo,
	&CBSDRXLevel1Information::theInfo,
	&V4b0NonCriticalExtensions::theInfo,
};
const void *SysInfoType5::itemsPres[8] = {
	1,
	1,
	1,
	0,
	1,
	1,
	0,
	0,
};
const SysInfoType5::Info SysInfoType5::theInfo = {
	SysInfoType5::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	8, 3, 0
};


const void *Fdd::itemsInfo[2] = {
	&AICHPowerOffset::theInfo,
	&CSICHPowerOffset::theInfo,
};
const void *Fdd::itemsPres[2] = {
	1,
	0,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *Tdd::itemsInfo[3] = {
	&PUSCHSysInfoListSFN::theInfo,
	&PDSCHSysInfoListSFN::theInfo,
	&OpenLoopPowerControlTDD::theInfo,
};
const void *Tdd::itemsPres[3] = {
	0,
	0,
	1,
};
const Tdd::Info Tdd::theInfo = {
	Tdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Tdd128SpecificInfo::itemsInfo[4] = {
	&PUSCHSysInfoListSFNLCRr4::theInfo,
	&PDSCHSysInfoListSFNLCRr4::theInfo,
	&PrimaryCCPCHInfoLCRr4ext::theInfo,
	&SCCPCHSystemInformationListLCRr4ext::theInfo,
};
const void *Tdd128SpecificInfo::itemsPres[4] = {
	0,
	0,
	0,
	0,
};
const Tdd128SpecificInfo::Info Tdd128SpecificInfo::theInfo = {
	Tdd128SpecificInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 4, 0
};

const void *SysInfoType6v4b0extIEs::itemsInfo[4] = {
	&OpenLoopPowerControlIPDLTDDr4::theInfo,
	&PRACHSystemInformationListLCRr4::theInfo,
	&Tdd128SpecificInfo::theInfo,
	&RadioFrequencyBandFDD::theInfo,
};
const void *SysInfoType6v4b0extIEs::itemsPres[4] = {
	0,
	0,
	0,
	0,
};
const SysInfoType6v4b0extIEs::Info SysInfoType6v4b0extIEs::theInfo = {
	SysInfoType6v4b0extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 4, 0
};

const void *Hcr_r5_SpecificInfo::itemsInfo[2] = {
	&PUSCHSysInfoListSFNHCRr5::theInfo,
	&PDSCHSysInfoListSFNHCRr5::theInfo,
};
const void *Hcr_r5_SpecificInfo::itemsPres[2] = {
	0,
	0,
};
const Hcr_r5_SpecificInfo::Info Hcr_r5_SpecificInfo::theInfo = {
	Hcr_r5_SpecificInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *SysInfoType6v590extIEs::itemsInfo[1] = {
	&Hcr_r5_SpecificInfo::theInfo,
};
const void *SysInfoType6v590extIEs::itemsPres[1] = {
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
const void *SysInfoType6v650extIEs::itemsPres[1] = {
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
const void *SysInfoType6v690extIEs::itemsPres[1] = {
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

const void *Tdd768SpecificInfo::itemsInfo[3] = {
	&PUSCHSysInfoListSFNVHCR::theInfo,
	&PDSCHSysInfoListVHCRr7::theInfo,
	&PRACHSystemInformationListVHCRr7::theInfo,
};
const void *Tdd768SpecificInfo::itemsPres[3] = {
	0,
	0,
	0,
};
const Tdd768SpecificInfo::Info Tdd768SpecificInfo::theInfo = {
	Tdd768SpecificInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *SysInfoType6v770extIEs::itemsInfo[2] = {
	&Tdd768SpecificInfo::theInfo,
	&SCCPCHSystemInformationListHCRVHCRr7::theInfo,
};
const void *SysInfoType6v770extIEs::itemsPres[2] = {
	0,
	0,
};
const SysInfoType6v770extIEs::Info SysInfoType6v770extIEs::theInfo = {
	SysInfoType6v770extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *NonCriticalExtensions::itemsInfo[0] = {
};
const void *NonCriticalExtensions::itemsPres[0] = {
};
const NonCriticalExtensions::Info NonCriticalExtensions::theInfo = {
	NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *V770NonCriticalExtensions::itemsInfo[2] = {
	&SysInfoType6v770extIEs::theInfo,
	&NonCriticalExtensions::theInfo,
};
const void *V770NonCriticalExtensions::itemsPres[2] = {
	1,
	0,
};
const V770NonCriticalExtensions::Info V770NonCriticalExtensions::theInfo = {
	V770NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *V690nonCriticalExtensions::itemsInfo[2] = {
	&SysInfoType6v690extIEs::theInfo,
	&V770NonCriticalExtensions::theInfo,
};
const void *V690nonCriticalExtensions::itemsPres[2] = {
	1,
	0,
};
const V690nonCriticalExtensions::Info V690nonCriticalExtensions::theInfo = {
	V690nonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *V650nonCriticalExtensions::itemsInfo[2] = {
	&SysInfoType6v650extIEs::theInfo,
	&V690nonCriticalExtensions::theInfo,
};
const void *V650nonCriticalExtensions::itemsPres[2] = {
	0,
	0,
};
const V650nonCriticalExtensions::Info V650nonCriticalExtensions::theInfo = {
	V650nonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *V590NonCriticalExtensions::itemsInfo[2] = {
	&SysInfoType6v590extIEs::theInfo,
	&V650nonCriticalExtensions::theInfo,
};
const void *V590NonCriticalExtensions::itemsPres[2] = {
	0,
	0,
};
const V590NonCriticalExtensions::Info V590NonCriticalExtensions::theInfo = {
	V590NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *V4b0NonCriticalExtensions::itemsInfo[2] = {
	&SysInfoType6v4b0extIEs::theInfo,
	&V590NonCriticalExtensions::theInfo,
};
const void *V4b0NonCriticalExtensions::itemsPres[2] = {
	0,
	0,
};
const V4b0NonCriticalExtensions::Info V4b0NonCriticalExtensions::theInfo = {
	V4b0NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *SysInfoType6::itemsInfo[7] = {
	&PICHPowerOffset::theInfo,
	&ModeSpecificInfo::theInfo,
	&PrimaryCCPCHInfo::theInfo,
	&PRACHSystemInformationList::theInfo,
	&SCCPCHSystemInformationList::theInfo,
	&CBSDRXLevel1Information::theInfo,
	&V4b0NonCriticalExtensions::theInfo,
};
const void *SysInfoType6::itemsPres[7] = {
	1,
	1,
	0,
	0,
	0,
	0,
	0,
};
const SysInfoType6::Info SysInfoType6::theInfo = {
	SysInfoType6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	7, 5, 0
};

const void *Fdd::itemsInfo[1] = {
	&ULInterference::theInfo,
};
const void *Fdd::itemsPres[1] = {
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};


const void *ModeSpecificInfo::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const ModeSpecificInfo::Info ModeSpecificInfo::theInfo = {
	ModeSpecificInfo::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *NonCriticalExtensions::itemsInfo[0] = {
};
const void *NonCriticalExtensions::itemsPres[0] = {
};
const NonCriticalExtensions::Info NonCriticalExtensions::theInfo = {
	NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *SysInfoType7::itemsInfo[5] = {
	&ModeSpecificInfo::theInfo,
	&DynamicPersistenceLevelList::theInfo,
	&DynamicPersistenceLevelList::theInfo,
	&ExpirationTimeFactor::theInfo,
	&NonCriticalExtensions::theInfo,
};
const void *SysInfoType7::itemsPres[5] = {
	1,
	1,
	0,
	0,
	0,
};
const SysInfoType7::Info SysInfoType7::theInfo = {
	SysInfoType7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 3, 0
};

const void *NonCriticalExtensions::itemsInfo[0] = {
};
const void *NonCriticalExtensions::itemsPres[0] = {
};
const NonCriticalExtensions::Info NonCriticalExtensions::theInfo = {
	NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *SysInfoType8::itemsInfo[4] = {
	&CPCHParameters::theInfo,
	&CPCHSetInfoList::theInfo,
	&CSICHPowerOffset::theInfo,
	&NonCriticalExtensions::theInfo,
};
const void *SysInfoType8::itemsPres[4] = {
	1,
	1,
	1,
	0,
};
const SysInfoType8::Info SysInfoType8::theInfo = {
	SysInfoType8::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 1, 0
};

const void *NonCriticalExtensions::itemsInfo[0] = {
};
const void *NonCriticalExtensions::itemsPres[0] = {
};
const NonCriticalExtensions::Info NonCriticalExtensions::theInfo = {
	NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *SysInfoType9::itemsInfo[2] = {
	&CPCHPersistenceLevelsList::theInfo,
	&NonCriticalExtensions::theInfo,
};
const void *SysInfoType9::itemsPres[2] = {
	1,
	0,
};
const SysInfoType9::Info SysInfoType9::theInfo = {
	SysInfoType9::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *NonCriticalExtensions::itemsInfo[0] = {
};
const void *NonCriticalExtensions::itemsPres[0] = {
};
const NonCriticalExtensions::Info NonCriticalExtensions::theInfo = {
	NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *SysInfoType10::itemsInfo[2] = {
	&DRACSysInfoList::theInfo,
	&NonCriticalExtensions::theInfo,
};
const void *SysInfoType10::itemsPres[2] = {
	1,
	0,
};
const SysInfoType10::Info SysInfoType10::theInfo = {
	SysInfoType10::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};


const void *SysInfoType11v4b0extIEs::itemsInfo[2] = {
	&FACHMeasurementOccasionInfoLCRr4ext::theInfo,
	&MeasurementControlSysInfoLCRr4ext::theInfo,
};
const void *SysInfoType11v4b0extIEs::itemsPres[2] = {
	0,
	1,
};
const SysInfoType11v4b0extIEs::Info SysInfoType11v4b0extIEs::theInfo = {
	SysInfoType11v4b0extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};




const void *SysInfoType11v590extIEs::itemsInfo[6] = {
	&NewIntraFrequencyCellInfoList_v590ext::theInfo,
	&NewInterFrequencyCellInfoList_v590ext::theInfo,
	&NewInterRATCellInfoList_v590ext::theInfo,
	&IntraFreqEventCriteriaListv590ext::theInfo,
	&IntraFreqReportingCriteria1br5::theInfo,
	&IntraFreqEvent1dr5::theInfo,
};
const void *SysInfoType11v590extIEs::itemsPres[6] = {
	0,
	0,
	0,
	0,
	0,
	0,
};
const SysInfoType11v590extIEs::Info SysInfoType11v590extIEs::theInfo = {
	SysInfoType11v590extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 6, 0
};

const void *SysInfoType11v690extIEs::itemsInfo[1] = {
	&DummyInterFreqRACHReportingInfo::theInfo,
};
const void *SysInfoType11v690extIEs::itemsPres[1] = {
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
const void *SysInfoType11v6b0extIEs::itemsPres[1] = {
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

const void *MBSFNFrequency::itemsInfo[2] = {
	&FrequencyInfo::theInfo,
	&CellParametersID::theInfo,
};
const void *MBSFNFrequency::itemsPres[2] = {
	1,
	0,
};
const MBSFNFrequency::Info MBSFNFrequency::theInfo = {
	MBSFNFrequency::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};


const void *SysInfoType11v770extIEs::itemsInfo[1] = {
	&MBSFNFrequencyList::theInfo,
};
const void *SysInfoType11v770extIEs::itemsPres[1] = {
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
const void *SysInfoType11v7b0extIEs::itemsPres[1] = {
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
	&imb_Indication::theInfo,
};
const void *MBSFNFrequencyv860ext::itemsPres[1] = {
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
const void *SysInfoType11v860extIEs::itemsPres[1] = {
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

const void *NonCriticalExtensions::itemsInfo[0] = {
};
const void *NonCriticalExtensions::itemsPres[0] = {
};
const NonCriticalExtensions::Info NonCriticalExtensions::theInfo = {
	NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *V860NonCriticalExtensions::itemsInfo[2] = {
	&SysInfoType11v860extIEs::theInfo,
	&NonCriticalExtensions::theInfo,
};
const void *V860NonCriticalExtensions::itemsPres[2] = {
	1,
	0,
};
const V860NonCriticalExtensions::Info V860NonCriticalExtensions::theInfo = {
	V860NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *V7b0NonCriticalExtensions::itemsInfo[2] = {
	&SysInfoType11v7b0extIEs::theInfo,
	&V860NonCriticalExtensions::theInfo,
};
const void *V7b0NonCriticalExtensions::itemsPres[2] = {
	1,
	0,
};
const V7b0NonCriticalExtensions::Info V7b0NonCriticalExtensions::theInfo = {
	V7b0NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *V770NonCriticalExtensions::itemsInfo[2] = {
	&SysInfoType11v770extIEs::theInfo,
	&V7b0NonCriticalExtensions::theInfo,
};
const void *V770NonCriticalExtensions::itemsPres[2] = {
	1,
	0,
};
const V770NonCriticalExtensions::Info V770NonCriticalExtensions::theInfo = {
	V770NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *V6b0NonCriticalExtensions::itemsInfo[2] = {
	&SysInfoType11v6b0extIEs::theInfo,
	&V770NonCriticalExtensions::theInfo,
};
const void *V6b0NonCriticalExtensions::itemsPres[2] = {
	1,
	0,
};
const V6b0NonCriticalExtensions::Info V6b0NonCriticalExtensions::theInfo = {
	V6b0NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *V690NonCriticalExtensions::itemsInfo[2] = {
	&SysInfoType11v690extIEs::theInfo,
	&V6b0NonCriticalExtensions::theInfo,
};
const void *V690NonCriticalExtensions::itemsPres[2] = {
	1,
	0,
};
const V690NonCriticalExtensions::Info V690NonCriticalExtensions::theInfo = {
	V690NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *V590NonCriticalExtension::itemsInfo[2] = {
	&SysInfoType11v590extIEs::theInfo,
	&V690NonCriticalExtensions::theInfo,
};
const void *V590NonCriticalExtension::itemsPres[2] = {
	1,
	0,
};
const V590NonCriticalExtension::Info V590NonCriticalExtension::theInfo = {
	V590NonCriticalExtension::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *V4b0NonCriticalExtensions::itemsInfo[2] = {
	&SysInfoType11v4b0extIEs::theInfo,
	&V590NonCriticalExtension::theInfo,
};
const void *V4b0NonCriticalExtensions::itemsPres[2] = {
	0,
	0,
};
const V4b0NonCriticalExtensions::Info V4b0NonCriticalExtensions::theInfo = {
	V4b0NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *SysInfoType11::itemsInfo[4] = {
	&Sib12indicator::theInfo,
	&FACHMeasurementOccasionInfo::theInfo,
	&MeasurementControlSysInfo::theInfo,
	&V4b0NonCriticalExtensions::theInfo,
};
const void *SysInfoType11::itemsPres[4] = {
	1,
	0,
	1,
	0,
};
const SysInfoType11::Info SysInfoType11::theInfo = {
	SysInfoType11::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
};

const void *SysInfoType11bisv7b0extIEs::itemsInfo[1] = {
	&NewInterFreqCellListv7b0ext::theInfo,
};
const void *SysInfoType11bisv7b0extIEs::itemsPres[1] = {
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

const void *SysInfoType11bisv860extIEs::itemsInfo[2] = {
	&CSGPSCSplitInfo::theInfo,
	&CSGDedicatedFrequencyInfoList::theInfo,
};
const void *SysInfoType11bisv860extIEs::itemsPres[2] = {
	0,
	0,
};
const SysInfoType11bisv860extIEs::Info SysInfoType11bisv860extIEs::theInfo = {
	SysInfoType11bisv860extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *NonCriticalExtensions::itemsInfo[0] = {
};
const void *NonCriticalExtensions::itemsPres[0] = {
};
const NonCriticalExtensions::Info NonCriticalExtensions::theInfo = {
	NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *V860NonCriticalExtensions::itemsInfo[2] = {
	&SysInfoType11bisv860extIEs::theInfo,
	&NonCriticalExtensions::theInfo,
};
const void *V860NonCriticalExtensions::itemsPres[2] = {
	1,
	0,
};
const V860NonCriticalExtensions::Info V860NonCriticalExtensions::theInfo = {
	V860NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *V7b0NonCriticalExtensions::itemsInfo[2] = {
	&SysInfoType11bisv7b0extIEs::theInfo,
	&V860NonCriticalExtensions::theInfo,
};
const void *V7b0NonCriticalExtensions::itemsPres[2] = {
	1,
	0,
};
const V7b0NonCriticalExtensions::Info V7b0NonCriticalExtensions::theInfo = {
	V7b0NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *SysInfoType11bis::itemsInfo[4] = {
	&MeasurementControlSysInfoExtension::theInfo,
	&MeasurementControlSysInfoExtensionLCRr4::theInfo,
	&MeasurementControlSysInfoExtensionAddonr5::theInfo,
	&V7b0NonCriticalExtensions::theInfo,
};
const void *SysInfoType11bis::itemsPres[4] = {
	0,
	0,
	0,
	0,
};
const SysInfoType11bis::Info SysInfoType11bis::theInfo = {
	SysInfoType11bis::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 4, 0
};

const void *SysInfoType12v4b0extIEs::itemsInfo[2] = {
	&FACHMeasurementOccasionInfoLCRr4ext::theInfo,
	&MeasurementControlSysInfoLCRr4ext::theInfo,
};
const void *SysInfoType12v4b0extIEs::itemsPres[2] = {
	0,
	1,
};
const SysInfoType12v4b0extIEs::Info SysInfoType12v4b0extIEs::theInfo = {
	SysInfoType12v4b0extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};




const void *SysInfoType12v590extIEs::itemsInfo[6] = {
	&NewIntraFrequencyCellInfoList_v590ext::theInfo,
	&NewInterFrequencyCellInfoList_v590ext::theInfo,
	&NewInterRATCellInfoList_v590ext::theInfo,
	&IntraFreqEventCriteriaListv590ext::theInfo,
	&IntraFreqReportingCriteria1br5::theInfo,
	&IntraFreqEvent1dr5::theInfo,
};
const void *SysInfoType12v590extIEs::itemsPres[6] = {
	0,
	0,
	0,
	0,
	0,
	0,
};
const SysInfoType12v590extIEs::Info SysInfoType12v590extIEs::theInfo = {
	SysInfoType12v590extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	6, 6, 0
};

const void *SysInfoType12v690extIEs::itemsInfo[1] = {
	&DummyInterFreqRACHReportingInfo::theInfo,
};
const void *SysInfoType12v690extIEs::itemsPres[1] = {
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
const void *SysInfoType12v6b0extIEs::itemsPres[1] = {
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
const void *SysInfoType12v7b0extIEs::itemsPres[1] = {
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

const void *NonCriticalExtensions::itemsInfo[0] = {
};
const void *NonCriticalExtensions::itemsPres[0] = {
};
const NonCriticalExtensions::Info NonCriticalExtensions::theInfo = {
	NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *V7b0NonCriticalExtensions::itemsInfo[2] = {
	&SysInfoType12v7b0extIEs::theInfo,
	&NonCriticalExtensions::theInfo,
};
const void *V7b0NonCriticalExtensions::itemsPres[2] = {
	1,
	0,
};
const V7b0NonCriticalExtensions::Info V7b0NonCriticalExtensions::theInfo = {
	V7b0NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *V6b0NonCriticalExtensions::itemsInfo[2] = {
	&SysInfoType12v6b0extIEs::theInfo,
	&V7b0NonCriticalExtensions::theInfo,
};
const void *V6b0NonCriticalExtensions::itemsPres[2] = {
	1,
	0,
};
const V6b0NonCriticalExtensions::Info V6b0NonCriticalExtensions::theInfo = {
	V6b0NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *V690NonCriticalExtensions::itemsInfo[2] = {
	&SysInfoType12v690extIEs::theInfo,
	&V6b0NonCriticalExtensions::theInfo,
};
const void *V690NonCriticalExtensions::itemsPres[2] = {
	1,
	0,
};
const V690NonCriticalExtensions::Info V690NonCriticalExtensions::theInfo = {
	V690NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *V590NonCriticalExtension::itemsInfo[2] = {
	&SysInfoType12v590extIEs::theInfo,
	&V690NonCriticalExtensions::theInfo,
};
const void *V590NonCriticalExtension::itemsPres[2] = {
	1,
	0,
};
const V590NonCriticalExtension::Info V590NonCriticalExtension::theInfo = {
	V590NonCriticalExtension::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *V4b0NonCriticalExtensions::itemsInfo[2] = {
	&SysInfoType12v4b0extIEs::theInfo,
	&V590NonCriticalExtension::theInfo,
};
const void *V4b0NonCriticalExtensions::itemsPres[2] = {
	0,
	0,
};
const V4b0NonCriticalExtensions::Info V4b0NonCriticalExtensions::theInfo = {
	V4b0NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *SysInfoType12::itemsInfo[3] = {
	&FACHMeasurementOccasionInfo::theInfo,
	&MeasurementControlSysInfo::theInfo,
	&V4b0NonCriticalExtensions::theInfo,
};
const void *SysInfoType12::itemsPres[3] = {
	0,
	1,
	0,
};
const SysInfoType12::Info SysInfoType12::theInfo = {
	SysInfoType12::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *SysInfoType13v3a0extIEs::itemsInfo[1] = {
	&UEIdleTimersAndConstantsv3a0ext::theInfo,
};
const void *SysInfoType13v3a0extIEs::itemsPres[1] = {
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
const void *SysInfoType13v4b0extIEs::itemsPres[1] = {
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
const void *SysInfoType13v770extIEs::itemsPres[1] = {
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

const void *NonCriticalExtensions::itemsInfo[0] = {
};
const void *NonCriticalExtensions::itemsPres[0] = {
};
const NonCriticalExtensions::Info NonCriticalExtensions::theInfo = {
	NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *V770NonCriticalExtensions::itemsInfo[2] = {
	&SysInfoType13v770extIEs::theInfo,
	&NonCriticalExtensions::theInfo,
};
const void *V770NonCriticalExtensions::itemsPres[2] = {
	1,
	0,
};
const V770NonCriticalExtensions::Info V770NonCriticalExtensions::theInfo = {
	V770NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *V4b0NonCriticalExtensions::itemsInfo[2] = {
	&SysInfoType13v4b0extIEs::theInfo,
	&V770NonCriticalExtensions::theInfo,
};
const void *V4b0NonCriticalExtensions::itemsPres[2] = {
	1,
	0,
};
const V4b0NonCriticalExtensions::Info V4b0NonCriticalExtensions::theInfo = {
	V4b0NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *V3a0NonCriticalExtensions::itemsInfo[2] = {
	&SysInfoType13v3a0extIEs::theInfo,
	&V4b0NonCriticalExtensions::theInfo,
};
const void *V3a0NonCriticalExtensions::itemsPres[2] = {
	1,
	0,
};
const V3a0NonCriticalExtensions::Info V3a0NonCriticalExtensions::theInfo = {
	V3a0NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *SysInfoType13::itemsInfo[4] = {
	&CNDomainSysInfoList::theInfo,
	&UEIdleTimersAndConstants::theInfo,
	&CapabilityUpdateRequirement::theInfo,
	&V3a0NonCriticalExtensions::theInfo,
};
const void *SysInfoType13::itemsPres[4] = {
	1,
	0,
	0,
	0,
};
const SysInfoType13::Info SysInfoType13::theInfo = {
	SysInfoType13::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 3, 0
};


const void *NonCriticalExtensions::itemsInfo[0] = {
};
const void *NonCriticalExtensions::itemsPres[0] = {
};
const NonCriticalExtensions::Info NonCriticalExtensions::theInfo = {
	NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *SysInfoType131::itemsInfo[2] = {
	&ANSI41RANDInformation::theInfo,
	&NonCriticalExtensions::theInfo,
};
const void *SysInfoType131::itemsPres[2] = {
	1,
	0,
};
const SysInfoType131::Info SysInfoType131::theInfo = {
	SysInfoType131::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};


const void *NonCriticalExtensions::itemsInfo[0] = {
};
const void *NonCriticalExtensions::itemsPres[0] = {
};
const NonCriticalExtensions::Info NonCriticalExtensions::theInfo = {
	NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *SysInfoType132::itemsInfo[2] = {
	&ANSI41UserZoneIDInformation::theInfo,
	&NonCriticalExtensions::theInfo,
};
const void *SysInfoType132::itemsPres[2] = {
	1,
	0,
};
const SysInfoType132::Info SysInfoType132::theInfo = {
	SysInfoType132::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};


const void *NonCriticalExtensions::itemsInfo[0] = {
};
const void *NonCriticalExtensions::itemsPres[0] = {
};
const NonCriticalExtensions::Info NonCriticalExtensions::theInfo = {
	NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *SysInfoType133::itemsInfo[2] = {
	&ANSI41PrivateNeighbourListInfo::theInfo,
	&NonCriticalExtensions::theInfo,
};
const void *SysInfoType133::itemsPres[2] = {
	1,
	0,
};
const SysInfoType133::Info SysInfoType133::theInfo = {
	SysInfoType133::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};


const void *NonCriticalExtensions::itemsInfo[0] = {
};
const void *NonCriticalExtensions::itemsPres[0] = {
};
const NonCriticalExtensions::Info NonCriticalExtensions::theInfo = {
	NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *SysInfoType134::itemsInfo[2] = {
	&ANSI41GlobalServiceRedirectInfo::theInfo,
	&NonCriticalExtensions::theInfo,
};
const void *SysInfoType134::itemsPres[2] = {
	1,
	0,
};
const SysInfoType134::Info SysInfoType134::theInfo = {
	SysInfoType134::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *NonCriticalExtensions::itemsInfo[0] = {
};
const void *NonCriticalExtensions::itemsPres[0] = {
};
const NonCriticalExtensions::Info NonCriticalExtensions::theInfo = {
	NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *SysInfoType14::itemsInfo[3] = {
	&IndividualTSInterferenceList::theInfo,
	&ExpirationTimeFactor::theInfo,
	&NonCriticalExtensions::theInfo,
};
const void *SysInfoType14::itemsPres[3] = {
	1,
	0,
	0,
};
const SysInfoType14::Info SysInfoType14::theInfo = {
	SysInfoType14::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *SysInfoType15v4b0extIEs::itemsInfo[1] = {
	&UEPositioningIPDLParametersTDDr4ext::theInfo,
};
const void *SysInfoType15v4b0extIEs::itemsPres[1] = {
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
const void *SysInfoType15v770extIEs::itemsPres[1] = {
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

const void *NonCriticalExtensions::itemsInfo[0] = {
};
const void *NonCriticalExtensions::itemsPres[0] = {
};
const NonCriticalExtensions::Info NonCriticalExtensions::theInfo = {
	NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *V770NonCriticalExtensions::itemsInfo[2] = {
	&SysInfoType15v770extIEs::theInfo,
	&NonCriticalExtensions::theInfo,
};
const void *V770NonCriticalExtensions::itemsPres[2] = {
	1,
	0,
};
const V770NonCriticalExtensions::Info V770NonCriticalExtensions::theInfo = {
	V770NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *V4b0NonCriticalExtensions::itemsInfo[2] = {
	&SysInfoType15v4b0extIEs::theInfo,
	&V770NonCriticalExtensions::theInfo,
};
const void *V4b0NonCriticalExtensions::itemsPres[2] = {
	1,
	0,
};
const V4b0NonCriticalExtensions::Info V4b0NonCriticalExtensions::theInfo = {
	V4b0NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *SysInfoType15::itemsInfo[5] = {
	&UEPositioningCipherParameters::theInfo,
	&ReferenceLocation::theInfo,
	&UEPositioningGPSReferenceTime::theInfo,
	&BadSatList::theInfo,
	&V4b0NonCriticalExtensions::theInfo,
};
const void *SysInfoType15::itemsPres[5] = {
	0,
	1,
	1,
	0,
	0,
};
const SysInfoType15::Info SysInfoType15::theInfo = {
	SysInfoType15::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 3, 0
};

const void *SysInfoType15bisv860extIEs::itemsInfo[2] = {
	&UEPositioningGANSSAddIonoModel::theInfo,
	&UEPositioningGANSSEarthOrientPara::theInfo,
};
const void *SysInfoType15bisv860extIEs::itemsPres[2] = {
	0,
	0,
};
const SysInfoType15bisv860extIEs::Info SysInfoType15bisv860extIEs::theInfo = {
	SysInfoType15bisv860extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *NonCriticalExtensions::itemsInfo[0] = {
};
const void *NonCriticalExtensions::itemsPres[0] = {
};
const NonCriticalExtensions::Info NonCriticalExtensions::theInfo = {
	NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *V860NonCriticalExtensions::itemsInfo[2] = {
	&SysInfoType15bisv860extIEs::theInfo,
	&NonCriticalExtensions::theInfo,
};
const void *V860NonCriticalExtensions::itemsPres[2] = {
	1,
	0,
};
const V860NonCriticalExtensions::Info V860NonCriticalExtensions::theInfo = {
	V860NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *SysInfoType15bis::itemsInfo[4] = {
	&ReferenceLocationGANSS::theInfo,
	&UEPositioningGANSSReferenceTime::theInfo,
	&UEPositioningGANSSIonosphericModel::theInfo,
	&V860NonCriticalExtensions::theInfo,
};
const void *SysInfoType15bis::itemsPres[4] = {
	1,
	1,
	0,
	0,
};
const SysInfoType15bis::Info SysInfoType15bis::theInfo = {
	SysInfoType15bis::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
};

const void *SysInfoType151v920extIEs::itemsInfo[1] = {
	&UEPositioningGPSDGPSCorrectionsv920ext::theInfo,
};
const void *SysInfoType151v920extIEs::itemsPres[1] = {
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

const void *NonCriticalExtensions::itemsInfo[0] = {
};
const void *NonCriticalExtensions::itemsPres[0] = {
};
const NonCriticalExtensions::Info NonCriticalExtensions::theInfo = {
	NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *V920NonCriticalExtensions::itemsInfo[2] = {
	&SysInfoType151v920extIEs::theInfo,
	&NonCriticalExtensions::theInfo,
};
const void *V920NonCriticalExtensions::itemsPres[2] = {
	1,
	0,
};
const V920NonCriticalExtensions::Info V920NonCriticalExtensions::theInfo = {
	V920NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *SysInfoType151::itemsInfo[2] = {
	&UEPositioningGPSDGPSCorrections::theInfo,
	&V920NonCriticalExtensions::theInfo,
};
const void *SysInfoType151::itemsPres[2] = {
	1,
	0,
};
const SysInfoType151::Info SysInfoType151::theInfo = {
	SysInfoType151::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *SysInfoType151bisv920extIEs::itemsInfo[1] = {
	&UEPositioningDGANSSCorrectionsv920ext::theInfo,
};
const void *SysInfoType151bisv920extIEs::itemsPres[1] = {
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

const void *NonCriticalExtensions::itemsInfo[0] = {
};
const void *NonCriticalExtensions::itemsPres[0] = {
};
const NonCriticalExtensions::Info NonCriticalExtensions::theInfo = {
	NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *V920NonCriticalExtensions::itemsInfo[2] = {
	&SysInfoType151bisv920extIEs::theInfo,
	&NonCriticalExtensions::theInfo,
};
const void *V920NonCriticalExtensions::itemsPres[2] = {
	1,
	0,
};
const V920NonCriticalExtensions::Info V920NonCriticalExtensions::theInfo = {
	V920NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *SysInfoType151bis::itemsInfo[2] = {
	&UEPositioningDGANSSCorrections::theInfo,
	&V920NonCriticalExtensions::theInfo,
};
const void *SysInfoType151bis::itemsPres[2] = {
	1,
	0,
};
const SysInfoType151bis::Info SysInfoType151bis::theInfo = {
	SysInfoType151bis::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *NonCriticalExtensions::itemsInfo[0] = {
};
const void *NonCriticalExtensions::itemsPres[0] = {
};
const NonCriticalExtensions::Info NonCriticalExtensions::theInfo = {
	NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *SysInfoType152::itemsInfo[4] = {
	&GPSTOW1sec::theInfo,
	&SatID::theInfo,
	&EphemerisParameter::theInfo,
	&NonCriticalExtensions::theInfo,
};
const void *SysInfoType152::itemsPres[4] = {
	1,
	1,
	1,
	0,
};
const SysInfoType152::Info SysInfoType152::theInfo = {
	SysInfoType152::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 1, 0
};

const void *NonCriticalExtensions::itemsInfo[0] = {
};
const void *NonCriticalExtensions::itemsPres[0] = {
};
const NonCriticalExtensions::Info NonCriticalExtensions::theInfo = {
	NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *SysInfoType152bis::itemsInfo[2] = {
	&UEPositioningGANSSNavigationModel::theInfo,
	&NonCriticalExtensions::theInfo,
};
const void *SysInfoType152bis::itemsPres[2] = {
	1,
	0,
};
const SysInfoType152bis::Info SysInfoType152bis::theInfo = {
	SysInfoType152bis::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *NonCriticalExtensions::itemsInfo[0] = {
};
const void *NonCriticalExtensions::itemsPres[0] = {
};
const NonCriticalExtensions::Info NonCriticalExtensions::theInfo = {
	NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *SysInfoType152ter::itemsInfo[2] = {
	&UEPositioningGANSSAddNavigationModels::theInfo,
	&NonCriticalExtensions::theInfo,
};
const void *SysInfoType152ter::itemsPres[2] = {
	1,
	0,
};
const SysInfoType152ter::Info SysInfoType152ter::theInfo = {
	SysInfoType152ter::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};



const void *NonCriticalExtensions::itemsInfo[0] = {
};
const void *NonCriticalExtensions::itemsPres[0] = {
};
const NonCriticalExtensions::Info NonCriticalExtensions::theInfo = {
	NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *SysInfoType153::itemsInfo[7] = {
	&GPSTOW1sec::theInfo,
	&UEPositioningGPSAlmanac::theInfo,
	&UEPositioningGPSIonosphericModel::theInfo,
	&UEPositioningGPSUTCModel::theInfo,
	&SatMask::theInfo,
	&LsbTOW::theInfo,
	&NonCriticalExtensions::theInfo,
};
const void *SysInfoType153::itemsPres[7] = {
	1,
	0,
	0,
	0,
	0,
	0,
	0,
};
const SysInfoType153::Info SysInfoType153::theInfo = {
	SysInfoType153::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	7, 6, 0
};

const void *SysInfoType153bisv860extIEs::itemsInfo[3] = {
	&UEPositioningGANSSAlmanacv860ext::theInfo,
	&UEPositioningGANSSAddUTCModels::theInfo,
	&UEPositioningGANSSAuxiliaryInfo::theInfo,
};
const void *SysInfoType153bisv860extIEs::itemsPres[3] = {
	0,
	0,
	0,
};
const SysInfoType153bisv860extIEs::Info SysInfoType153bisv860extIEs::theInfo = {
	SysInfoType153bisv860extIEs::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *NonCriticalExtensions::itemsInfo[0] = {
};
const void *NonCriticalExtensions::itemsPres[0] = {
};
const NonCriticalExtensions::Info NonCriticalExtensions::theInfo = {
	NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *V860NonCriticalExtensions::itemsInfo[2] = {
	&SysInfoType153bisv860extIEs::theInfo,
	&NonCriticalExtensions::theInfo,
};
const void *V860NonCriticalExtensions::itemsPres[2] = {
	1,
	0,
};
const V860NonCriticalExtensions::Info V860NonCriticalExtensions::theInfo = {
	V860NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *SysInfoType153bis::itemsInfo[4] = {
	&UEPositioningGANSSAlmanac::theInfo,
	&UEPositioningGANSSTimeModels::theInfo,
	&UEPositioningGANSSUTCModel::theInfo,
	&V860NonCriticalExtensions::theInfo,
};
const void *SysInfoType153bis::itemsPres[4] = {
	0,
	0,
	0,
	0,
};
const SysInfoType153bis::Info SysInfoType153bis::theInfo = {
	SysInfoType153bis::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 4, 0
};

const void *SysInfoType154v3a0ext::itemsInfo[1] = {
	&SFNOffsetValidity::theInfo,
};
const void *SysInfoType154v3a0ext::itemsPres[1] = {
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
const void *SysInfoType154v4b0ext::itemsPres[1] = {
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

const void *NonCriticalExtensions::itemsInfo[0] = {
};
const void *NonCriticalExtensions::itemsPres[0] = {
};
const NonCriticalExtensions::Info NonCriticalExtensions::theInfo = {
	NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *V4b0NonCriticalExtensions::itemsInfo[2] = {
	&SysInfoType154v4b0ext::theInfo,
	&NonCriticalExtensions::theInfo,
};
const void *V4b0NonCriticalExtensions::itemsPres[2] = {
	1,
	0,
};
const V4b0NonCriticalExtensions::Info V4b0NonCriticalExtensions::theInfo = {
	V4b0NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *V3a0NonCriticalExtensions::itemsInfo[2] = {
	&SysInfoType154v3a0ext::theInfo,
	&V4b0NonCriticalExtensions::theInfo,
};
const void *V3a0NonCriticalExtensions::itemsPres[2] = {
	1,
	0,
};
const V3a0NonCriticalExtensions::Info V3a0NonCriticalExtensions::theInfo = {
	V3a0NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *SysInfoType154::itemsInfo[3] = {
	&UEPositioningCipherParameters::theInfo,
	&UEPositioningOTDOAAssistanceData::theInfo,
	&V3a0NonCriticalExtensions::theInfo,
};
const void *SysInfoType154::itemsPres[3] = {
	0,
	1,
	0,
};
const SysInfoType154::Info SysInfoType154::theInfo = {
	SysInfoType154::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};

const void *SysInfoType155v3a0ext::itemsInfo[1] = {
	&SFNOffsetValidity::theInfo,
};
const void *SysInfoType155v3a0ext::itemsPres[1] = {
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
const void *SysInfoType155v770extIEs::itemsPres[1] = {
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

const void *NonCriticalExtensions::itemsInfo[0] = {
};
const void *NonCriticalExtensions::itemsPres[0] = {
};
const NonCriticalExtensions::Info NonCriticalExtensions::theInfo = {
	NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *V770NonCriticalExtensions::itemsInfo[2] = {
	&SysInfoType155v770extIEs::theInfo,
	&NonCriticalExtensions::theInfo,
};
const void *V770NonCriticalExtensions::itemsPres[2] = {
	1,
	0,
};
const V770NonCriticalExtensions::Info V770NonCriticalExtensions::theInfo = {
	V770NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *V3a0NonCriticalExtensions::itemsInfo[2] = {
	&SysInfoType155v3a0ext::theInfo,
	&V770NonCriticalExtensions::theInfo,
};
const void *V3a0NonCriticalExtensions::itemsPres[2] = {
	1,
	0,
};
const V3a0NonCriticalExtensions::Info V3a0NonCriticalExtensions::theInfo = {
	V3a0NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *SysInfoType155::itemsInfo[2] = {
	&UEPositioningOTDOAAssistanceDataUEB::theInfo,
	&V3a0NonCriticalExtensions::theInfo,
};
const void *SysInfoType155::itemsPres[2] = {
	1,
	0,
};
const SysInfoType155::Info SysInfoType155::theInfo = {
	SysInfoType155::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};


const void *NonCriticalExtensions::itemsInfo[0] = {
};
const void *NonCriticalExtensions::itemsPres[0] = {
};
const NonCriticalExtensions::Info NonCriticalExtensions::theInfo = {
	NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *SysInfoType156::itemsInfo[3] = {
	&Ue_positioning_GANSS_TOD::theInfo,
	&UEPositioningGANSSReferenceMeasurementInfo::theInfo,
	&NonCriticalExtensions::theInfo,
};
const void *SysInfoType156::itemsPres[3] = {
	1,
	1,
	0,
};
const SysInfoType156::Info SysInfoType156::theInfo = {
	SysInfoType156::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};

const void *NonCriticalExtensions::itemsInfo[0] = {
};
const void *NonCriticalExtensions::itemsPres[0] = {
};
const NonCriticalExtensions::Info NonCriticalExtensions::theInfo = {
	NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *SysInfoType157::itemsInfo[2] = {
	&UEPositioningGANSSDataBitAssistance::theInfo,
	&NonCriticalExtensions::theInfo,
};
const void *SysInfoType157::itemsPres[2] = {
	1,
	0,
};
const SysInfoType157::Info SysInfoType157::theInfo = {
	SysInfoType157::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *NonCriticalExtensions::itemsInfo[0] = {
};
const void *NonCriticalExtensions::itemsPres[0] = {
};
const NonCriticalExtensions::Info NonCriticalExtensions::theInfo = {
	NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *SysInfoType158::itemsInfo[3] = {
	&UEPositioningCipherParameters::theInfo,
	&UEPositioningGANSSRealTimeIntegrity::theInfo,
	&NonCriticalExtensions::theInfo,
};
const void *SysInfoType158::itemsPres[3] = {
	0,
	0,
	0,
};
const SysInfoType158::Info SysInfoType158::theInfo = {
	SysInfoType158::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *SysInfoType16v770extIEs::itemsInfo[1] = {
	&PreDefRadioConfigurationv770ext::theInfo,
};
const void *SysInfoType16v770extIEs::itemsPres[1] = {
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
const void *SysInfoType16v920extIEs::itemsPres[1] = {
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

const void *NonCriticalExtensions::itemsInfo[0] = {
};
const void *NonCriticalExtensions::itemsPres[0] = {
};
const NonCriticalExtensions::Info NonCriticalExtensions::theInfo = {
	NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *V920NonCriticalExtensions::itemsInfo[2] = {
	&SysInfoType16v920extIEs::theInfo,
	&NonCriticalExtensions::theInfo,
};
const void *V920NonCriticalExtensions::itemsPres[2] = {
	1,
	0,
};
const V920NonCriticalExtensions::Info V920NonCriticalExtensions::theInfo = {
	V920NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *V770NonCriticalExtensions::itemsInfo[2] = {
	&SysInfoType16v770extIEs::theInfo,
	&V920NonCriticalExtensions::theInfo,
};
const void *V770NonCriticalExtensions::itemsPres[2] = {
	1,
	0,
};
const V770NonCriticalExtensions::Info V770NonCriticalExtensions::theInfo = {
	V770NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *SysInfoType16::itemsInfo[2] = {
	&PreDefRadioConfiguration::theInfo,
	&V770NonCriticalExtensions::theInfo,
};
const void *SysInfoType16::itemsPres[2] = {
	1,
	0,
};
const SysInfoType16::Info SysInfoType16::theInfo = {
	SysInfoType16::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *Tdd128SpecificInfo::itemsInfo[2] = {
	&PUSCHSysInfoListLCRr4::theInfo,
	&PDSCHSysInfoListLCRr4::theInfo,
};
const void *Tdd128SpecificInfo::itemsPres[2] = {
	0,
	0,
};
const Tdd128SpecificInfo::Info Tdd128SpecificInfo::theInfo = {
	Tdd128SpecificInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *SysInfoType17v4b0extIEs::itemsInfo[1] = {
	&Tdd128SpecificInfo::theInfo,
};
const void *SysInfoType17v4b0extIEs::itemsPres[1] = {
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

const void *Hcr_r5_SpecificInfo::itemsInfo[2] = {
	&PUSCHSysInfoListHCRr5::theInfo,
	&PDSCHSysInfoListHCRr5::theInfo,
};
const void *Hcr_r5_SpecificInfo::itemsPres[2] = {
	0,
	0,
};
const Hcr_r5_SpecificInfo::Info Hcr_r5_SpecificInfo::theInfo = {
	Hcr_r5_SpecificInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *SysInfoType17v590extIEs::itemsInfo[1] = {
	&Hcr_r5_SpecificInfo::theInfo,
};
const void *SysInfoType17v590extIEs::itemsPres[1] = {
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

const void *Tdd768SpecificInfo::itemsInfo[2] = {
	&PUSCHSysInfoListSFNVHCR::theInfo,
	&PDSCHSysInfoListVHCRr7::theInfo,
};
const void *Tdd768SpecificInfo::itemsPres[2] = {
	0,
	0,
};
const Tdd768SpecificInfo::Info Tdd768SpecificInfo::theInfo = {
	Tdd768SpecificInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *SysInfoType17v770extIEs::itemsInfo[1] = {
	&Tdd768SpecificInfo::theInfo,
};
const void *SysInfoType17v770extIEs::itemsPres[1] = {
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

const void *NonCriticalExtensions::itemsInfo[0] = {
};
const void *NonCriticalExtensions::itemsPres[0] = {
};
const NonCriticalExtensions::Info NonCriticalExtensions::theInfo = {
	NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *V770NonCriticalExtensions::itemsInfo[2] = {
	&SysInfoType17v770extIEs::theInfo,
	&NonCriticalExtensions::theInfo,
};
const void *V770NonCriticalExtensions::itemsPres[2] = {
	1,
	0,
};
const V770NonCriticalExtensions::Info V770NonCriticalExtensions::theInfo = {
	V770NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *V590NonCriticalExtensions::itemsInfo[2] = {
	&SysInfoType17v590extIEs::theInfo,
	&V770NonCriticalExtensions::theInfo,
};
const void *V590NonCriticalExtensions::itemsPres[2] = {
	0,
	0,
};
const V590NonCriticalExtensions::Info V590NonCriticalExtensions::theInfo = {
	V590NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *V4b0NonCriticalExtensions::itemsInfo[2] = {
	&SysInfoType17v4b0extIEs::theInfo,
	&V590NonCriticalExtensions::theInfo,
};
const void *V4b0NonCriticalExtensions::itemsPres[2] = {
	1,
	0,
};
const V4b0NonCriticalExtensions::Info V4b0NonCriticalExtensions::theInfo = {
	V4b0NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *SysInfoType17::itemsInfo[3] = {
	&PUSCHSysInfoList::theInfo,
	&PDSCHSysInfoList::theInfo,
	&V4b0NonCriticalExtensions::theInfo,
};
const void *SysInfoType17::itemsPres[3] = {
	0,
	0,
	0,
};
const SysInfoType17::Info SysInfoType17::theInfo = {
	SysInfoType17::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *SysInfoType18v6b0ext::itemsInfo[2] = {
	&PLMNIdentitiesOfNeighbourCells::theInfo,
	&PLMNIdentitiesOfNeighbourCells::theInfo,
};
const void *SysInfoType18v6b0ext::itemsPres[2] = {
	0,
	0,
};
const SysInfoType18v6b0ext::Info SysInfoType18v6b0ext::theInfo = {
	SysInfoType18v6b0ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *SysInfoType18v860ext::itemsInfo[2] = {
	&PLMNIdentitiesOfNeighbourCellsv860ext::theInfo,
	&PLMNIdentitiesOfNeighbourCellsv860ext::theInfo,
};
const void *SysInfoType18v860ext::itemsPres[2] = {
	0,
	0,
};
const SysInfoType18v860ext::Info SysInfoType18v860ext::theInfo = {
	SysInfoType18v860ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *NonCriticalExtensions::itemsInfo[0] = {
};
const void *NonCriticalExtensions::itemsPres[0] = {
};
const NonCriticalExtensions::Info NonCriticalExtensions::theInfo = {
	NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *V860NonCriticalExtensions::itemsInfo[2] = {
	&SysInfoType18v860ext::theInfo,
	&NonCriticalExtensions::theInfo,
};
const void *V860NonCriticalExtensions::itemsPres[2] = {
	1,
	0,
};
const V860NonCriticalExtensions::Info V860NonCriticalExtensions::theInfo = {
	V860NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *V6b0NonCriticalExtensions::itemsInfo[2] = {
	&SysInfoType18v6b0ext::theInfo,
	&V860NonCriticalExtensions::theInfo,
};
const void *V6b0NonCriticalExtensions::itemsPres[2] = {
	1,
	0,
};
const V6b0NonCriticalExtensions::Info V6b0NonCriticalExtensions::theInfo = {
	V6b0NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *SysInfoType18::itemsInfo[3] = {
	&PLMNIdentitiesOfNeighbourCells::theInfo,
	&PLMNIdentitiesOfNeighbourCells::theInfo,
	&V6b0NonCriticalExtensions::theInfo,
};
const void *SysInfoType18::itemsPres[3] = {
	0,
	0,
	0,
};
const SysInfoType18::Info SysInfoType18::theInfo = {
	SysInfoType18::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 3, 0
};

const void *SysInfoType19v920ext::itemsInfo[2] = {
	&UTRAPriorityInfoListv920ext::theInfo,
	&EUTRAFrequencyAndPriorityInfoListv920ext::theInfo,
};
const void *SysInfoType19v920ext::itemsPres[2] = {
	1,
	1,
};
const SysInfoType19v920ext::Info SysInfoType19v920ext::theInfo = {
	SysInfoType19v920ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *NonCriticalExtensions::itemsInfo[0] = {
};
const void *NonCriticalExtensions::itemsPres[0] = {
};
const NonCriticalExtensions::Info NonCriticalExtensions::theInfo = {
	NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *V920NonCriticalExtensions::itemsInfo[2] = {
	&SysInfoType19v920ext::theInfo,
	&NonCriticalExtensions::theInfo,
};
const void *V920NonCriticalExtensions::itemsPres[2] = {
	1,
	0,
};
const V920NonCriticalExtensions::Info V920NonCriticalExtensions::theInfo = {
	V920NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *SysInfoType19::itemsInfo[4] = {
	&UTRAPriorityInfoList::theInfo,
	&GSMPriorityInfoList::theInfo,
	&EUTRAFrequencyAndPriorityInfoList::theInfo,
	&V920NonCriticalExtensions::theInfo,
};
const void *SysInfoType19::itemsPres[4] = {
	1,
	0,
	0,
	0,
};
const SysInfoType19::Info SysInfoType19::theInfo = {
	SysInfoType19::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 3, 0
};

const void *NonCriticalExtensions::itemsInfo[0] = {
};
const void *NonCriticalExtensions::itemsPres[0] = {
};
const NonCriticalExtensions::Info NonCriticalExtensions::theInfo = {
	NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *SysInfoType20::itemsInfo[2] = {
	&HNBName::theInfo,
	&NonCriticalExtensions::theInfo,
};
const void *SysInfoType20::itemsPres[2] = {
	0,
	0,
};
const SysInfoType20::Info SysInfoType20::theInfo = {
	SysInfoType20::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *SysInfoTypeSB1v6b0ext::itemsInfo[1] = {
	&ExtSIBTypeInfoSchedulingInfoList::theInfo,
};
const void *SysInfoTypeSB1v6b0ext::itemsPres[1] = {
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

const void *SysInfoTypeSB1v860ext::itemsInfo[2] = {
	&ExtSIBTypeInfoSchedulingInfoList2::theInfo,
	&ExtGANSSSIBTypeInfoSchedulingInfoList::theInfo,
};
const void *SysInfoTypeSB1v860ext::itemsPres[2] = {
	0,
	0,
};
const SysInfoTypeSB1v860ext::Info SysInfoTypeSB1v860ext::theInfo = {
	SysInfoTypeSB1v860ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *NonCriticalExtensions::itemsInfo[0] = {
};
const void *NonCriticalExtensions::itemsPres[0] = {
};
const NonCriticalExtensions::Info NonCriticalExtensions::theInfo = {
	NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *V860NonCriticalExtensions::itemsInfo[2] = {
	&SysInfoTypeSB1v860ext::theInfo,
	&NonCriticalExtensions::theInfo,
};
const void *V860NonCriticalExtensions::itemsPres[2] = {
	1,
	0,
};
const V860NonCriticalExtensions::Info V860NonCriticalExtensions::theInfo = {
	V860NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *V6b0NonCriticalExtensions::itemsInfo[2] = {
	&SysInfoTypeSB1v6b0ext::theInfo,
	&V860NonCriticalExtensions::theInfo,
};
const void *V6b0NonCriticalExtensions::itemsPres[2] = {
	1,
	0,
};
const V6b0NonCriticalExtensions::Info V6b0NonCriticalExtensions::theInfo = {
	V6b0NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *SysInfoTypeSB1::itemsInfo[2] = {
	&SIBReferenceList::theInfo,
	&V6b0NonCriticalExtensions::theInfo,
};
const void *SysInfoTypeSB1::itemsPres[2] = {
	1,
	0,
};
const SysInfoTypeSB1::Info SysInfoTypeSB1::theInfo = {
	SysInfoTypeSB1::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *SysInfoTypeSB2v6b0ext::itemsInfo[1] = {
	&ExtSIBTypeInfoSchedulingInfoList::theInfo,
};
const void *SysInfoTypeSB2v6b0ext::itemsPres[1] = {
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

const void *SysInfoTypeSB2v860ext::itemsInfo[2] = {
	&ExtSIBTypeInfoSchedulingInfoList2::theInfo,
	&ExtGANSSSIBTypeInfoSchedulingInfoList::theInfo,
};
const void *SysInfoTypeSB2v860ext::itemsPres[2] = {
	0,
	0,
};
const SysInfoTypeSB2v860ext::Info SysInfoTypeSB2v860ext::theInfo = {
	SysInfoTypeSB2v860ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 2, 0
};

const void *NonCriticalExtensions::itemsInfo[0] = {
};
const void *NonCriticalExtensions::itemsPres[0] = {
};
const NonCriticalExtensions::Info NonCriticalExtensions::theInfo = {
	NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *V860NonCriticalExtensions::itemsInfo[2] = {
	&SysInfoTypeSB2v860ext::theInfo,
	&NonCriticalExtensions::theInfo,
};
const void *V860NonCriticalExtensions::itemsPres[2] = {
	1,
	0,
};
const V860NonCriticalExtensions::Info V860NonCriticalExtensions::theInfo = {
	V860NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *V6b0NonCriticalExtensions::itemsInfo[2] = {
	&SysInfoTypeSB2v6b0ext::theInfo,
	&V860NonCriticalExtensions::theInfo,
};
const void *V6b0NonCriticalExtensions::itemsPres[2] = {
	1,
	0,
};
const V6b0NonCriticalExtensions::Info V6b0NonCriticalExtensions::theInfo = {
	V6b0NonCriticalExtensions::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *SysInfoTypeSB2::itemsInfo[2] = {
	&SIBReferenceList::theInfo,
	&V6b0NonCriticalExtensions::theInfo,
};
const void *SysInfoTypeSB2::itemsPres[2] = {
	1,
	0,
};
const SysInfoTypeSB2::Info SysInfoTypeSB2::theInfo = {
	SysInfoTypeSB2::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};


const void *UEHistoryInformation::itemsInfo[4] = {
	&Ue_InactivityPeriod::theInfo,
	&HighMobilityDetected::theInfo,
	&DataVolumeHistory::theInfo,
	&DataVolumeHistory::theInfo,
};
const void *UEHistoryInformation::itemsPres[4] = {
	1,
	0,
	0,
	0,
};
const UEHistoryInformation::Info UEHistoryInformation::theInfo = {
	UEHistoryInformation::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 3, 0
};







const void *MBMSCommonRBInformationr6::itemsInfo[3] = {
	&MBMSCommonRBIdentity::theInfo,
	&PDCPInfor4::theInfo,
	&RLCInfoMTCHr6::theInfo,
};
const void *MBMSCommonRBInformationr6::itemsPres[3] = {
	1,
	1,
	1,
};
const MBMSCommonRBInformationr6::Info MBMSCommonRBInformationr6::theInfo = {
	MBMSCommonRBInformationr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};






const void *MBMSConnectedModeCountingScope::itemsInfo[3] = {
	&CountingForUraPCH::theInfo,
	&CountingForCellPCH::theInfo,
	&CountingForCellFACH::theInfo,
};
const void *MBMSConnectedModeCountingScope::itemsPres[3] = {
	1,
	1,
	1,
};
const MBMSConnectedModeCountingScope::Info MBMSConnectedModeCountingScope::theInfo = {
	MBMSConnectedModeCountingScope::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};





const void *MBMSPTMRBInformationC::itemsInfo[3] = {
	&MBMSCommonRBIdentity::theInfo,
	&MBMSShortTransmissionID::theInfo,
	&MBMSLogicalChIdentity::theInfo,
};
const void *MBMSPTMRBInformationC::itemsPres[3] = {
	1,
	1,
	1,
};
const MBMSPTMRBInformationC::Info MBMSPTMRBInformationC::theInfo = {
	MBMSPTMRBInformationC::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};


const void *MBMSTrCHInformationCurr::itemsInfo[3] = {
	&MBMSCommonTrChIdentity::theInfo,
	&MBMSPTMRBInformationCList::theInfo,
	&MBMSMSCHConfigurationInfor6::theInfo,
};
const void *MBMSTrCHInformationCurr::itemsPres[3] = {
	1,
	0,
	0,
};
const MBMSTrCHInformationCurr::Info MBMSTrCHInformationCurr::theInfo = {
	MBMSTrCHInformationCurr::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};


const void *MBMSCurrentCellSCCPCHr6::itemsInfo[5] = {
	&MBMSSCCPCHIdentity::theInfo,
	&MBMSCommonPhyChIdentity::theInfo,
	&MBMSSoftCombTimingOffset::theInfo,
	&MBMSCommonCCTrChIdentity::theInfo,
	&MBMSTrCHInformationCurrList::theInfo,
};
const void *MBMSCurrentCellSCCPCHr6::itemsPres[5] = {
	0,
	1,
	0,
	0,
	1,
};
const MBMSCurrentCellSCCPCHr6::Info MBMSCurrentCellSCCPCHr6::theInfo = {
	MBMSCurrentCellSCCPCHr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 3, 0
};


const void *MBMSJoinedInformationr6::itemsInfo[1] = {
	&PTMSIGSMMAP::theInfo,
};
const void *MBMSJoinedInformationr6::itemsPres[1] = {
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


const void *Mtch_L1CombiningPeriodList::itemsInfo[0] = {
};
const void *Mtch_L1CombiningPeriodList::itemsPres[0] = {
};
const Mtch_L1CombiningPeriodList::Info Mtch_L1CombiningPeriodList::theInfo = {
	Mtch_L1CombiningPeriodList::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *MBMSL1CombiningSchedule32::itemsInfo[2] = {
	&CycleOffset::theInfo,
	&Mtch_L1CombiningPeriodList::theInfo,
};
const void *MBMSL1CombiningSchedule32::itemsPres[2] = {
	0,
	1,
};
const MBMSL1CombiningSchedule32::Info MBMSL1CombiningSchedule32::theInfo = {
	MBMSL1CombiningSchedule32::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};


const void *Mtch_L1CombiningPeriodList::itemsInfo[0] = {
};
const void *Mtch_L1CombiningPeriodList::itemsPres[0] = {
};
const Mtch_L1CombiningPeriodList::Info Mtch_L1CombiningPeriodList::theInfo = {
	Mtch_L1CombiningPeriodList::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *MBMSL1CombiningSchedule64::itemsInfo[2] = {
	&CycleOffset::theInfo,
	&Mtch_L1CombiningPeriodList::theInfo,
};
const void *MBMSL1CombiningSchedule64::itemsPres[2] = {
	0,
	1,
};
const MBMSL1CombiningSchedule64::Info MBMSL1CombiningSchedule64::theInfo = {
	MBMSL1CombiningSchedule64::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};


const void *Mtch_L1CombiningPeriodList::itemsInfo[0] = {
};
const void *Mtch_L1CombiningPeriodList::itemsPres[0] = {
};
const Mtch_L1CombiningPeriodList::Info Mtch_L1CombiningPeriodList::theInfo = {
	Mtch_L1CombiningPeriodList::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *MBMSL1CombiningSchedule128::itemsInfo[2] = {
	&CycleOffset::theInfo,
	&Mtch_L1CombiningPeriodList::theInfo,
};
const void *MBMSL1CombiningSchedule128::itemsPres[2] = {
	0,
	1,
};
const MBMSL1CombiningSchedule128::Info MBMSL1CombiningSchedule128::theInfo = {
	MBMSL1CombiningSchedule128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};


const void *Mtch_L1CombiningPeriodList::itemsInfo[0] = {
};
const void *Mtch_L1CombiningPeriodList::itemsPres[0] = {
};
const Mtch_L1CombiningPeriodList::Info Mtch_L1CombiningPeriodList::theInfo = {
	Mtch_L1CombiningPeriodList::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *MBMSL1CombiningSchedule256::itemsInfo[2] = {
	&CycleOffset::theInfo,
	&Mtch_L1CombiningPeriodList::theInfo,
};
const void *MBMSL1CombiningSchedule256::itemsPres[2] = {
	0,
	1,
};
const MBMSL1CombiningSchedule256::Info MBMSL1CombiningSchedule256::theInfo = {
	MBMSL1CombiningSchedule256::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};


const void *Mtch_L1CombiningPeriodList::itemsInfo[0] = {
};
const void *Mtch_L1CombiningPeriodList::itemsPres[0] = {
};
const Mtch_L1CombiningPeriodList::Info Mtch_L1CombiningPeriodList::theInfo = {
	Mtch_L1CombiningPeriodList::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *MBMSL1CombiningSchedule512::itemsInfo[2] = {
	&CycleOffset::theInfo,
	&Mtch_L1CombiningPeriodList::theInfo,
};
const void *MBMSL1CombiningSchedule512::itemsPres[2] = {
	0,
	1,
};
const MBMSL1CombiningSchedule512::Info MBMSL1CombiningSchedule512::theInfo = {
	MBMSL1CombiningSchedule512::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};


const void *Mtch_L1CombiningPeriodList::itemsInfo[0] = {
};
const void *Mtch_L1CombiningPeriodList::itemsPres[0] = {
};
const Mtch_L1CombiningPeriodList::Info Mtch_L1CombiningPeriodList::theInfo = {
	Mtch_L1CombiningPeriodList::create,
	SEQUENCE,
	0,
	true,
	itemsInfo,
	itemsPres,
	0, 0, 0
};

const void *MBMSL1CombiningSchedule1024::itemsInfo[2] = {
	&CycleOffset::theInfo,
	&Mtch_L1CombiningPeriodList::theInfo,
};
const void *MBMSL1CombiningSchedule1024::itemsPres[2] = {
	0,
	1,
};
const MBMSL1CombiningSchedule1024::Info MBMSL1CombiningSchedule1024::theInfo = {
	MBMSL1CombiningSchedule1024::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *MBMSL1CombiningSchedule::choicesInfo[6] = {
	&MBMSL1CombiningSchedule32::theInfo,
	&MBMSL1CombiningSchedule64::theInfo,
	&MBMSL1CombiningSchedule128::theInfo,
	&MBMSL1CombiningSchedule256::theInfo,
	&MBMSL1CombiningSchedule512::theInfo,
	&MBMSL1CombiningSchedule1024::theInfo,
};
const MBMSL1CombiningSchedule::Info MBMSL1CombiningSchedule::theInfo = {
	MBMSL1CombiningSchedule::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	5
};


const void *SameAsCurrent::itemsInfo[2] = {
	&MBMSSCCPCHIdentity::theInfo,
	&MBMSMSCHConfigurationInfor6::theInfo,
};
const void *SameAsCurrent::itemsPres[2] = {
	1,
	0,
};
const SameAsCurrent::Info SameAsCurrent::theInfo = {
	SameAsCurrent::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};



const void *MBMSPTMRBInformationN::itemsInfo[3] = {
	&MBMSShortTransmissionID::theInfo,
	&MBMSLogicalChIdentity::theInfo,
	&Layer1_CombiningStatus::theInfo,
};
const void *MBMSPTMRBInformationN::itemsPres[3] = {
	1,
	1,
	1,
};
const MBMSPTMRBInformationN::Info MBMSPTMRBInformationN::theInfo = {
	MBMSPTMRBInformationN::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};


const void *MBMSTrCHInformationNeighb::itemsInfo[4] = {
	&MBMSCommonTrChIdentity::theInfo,
	&TranspCh_CombiningStatus::theInfo,
	&MBMSPTMRBInformationNList::theInfo,
	&MBMSMSCHConfigurationInfor6::theInfo,
};
const void *MBMSTrCHInformationNeighb::itemsPres[4] = {
	1,
	1,
	0,
	0,
};
const MBMSTrCHInformationNeighb::Info MBMSTrCHInformationNeighb::theInfo = {
	MBMSTrCHInformationNeighb::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
};


const void *Different::itemsInfo[2] = {
	&MBMSCommonCCTrChIdentity::theInfo,
	&MBMSTrCHInformationNeighbList::theInfo,
};
const void *Different::itemsPres[2] = {
	0,
	1,
};
const Different::Info Different::theInfo = {
	Different::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *MBMSL23Configuration::choicesInfo[2] = {
	&SameAsCurrent::theInfo,
	&Different::theInfo,
};
const MBMSL23Configuration::Info MBMSL23Configuration::theInfo = {
	MBMSL23Configuration::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};




const void *Fdd::itemsInfo[3] = {
	&ChannelisationCode256::theInfo,
	&MBMSNICountPerFrame::theInfo,
	&Sttd_Indicator::theInfo,
};
const void *Fdd::itemsPres[3] = {
	1,
	1,
	1,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 0, 0
};


const void *Tdd384::itemsInfo[5] = {
	&TimeslotNumber::theInfo,
	&MidambleShiftAndBurstType::theInfo,
	&DLTSChannelisationCode::theInfo,
	&RepPerLengthOffsetMICH::theInfo,
	&MBMSMICHNotificationIndLength::theInfo,
};
const void *Tdd384::itemsPres[5] = {
	1,
	1,
	1,
	0,
	0,
};
const Tdd384::Info Tdd384::theInfo = {
	Tdd384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 2, 0
};


const void *Tdd128::itemsInfo[5] = {
	&TimeslotNumberLCRr4::theInfo,
	&MidambleShiftAndBurstTypeLCRr4::theInfo,
	&ChannelisationCodeList::theInfo,
	&RepPerLengthOffsetMICH::theInfo,
	&MBMSMICHNotificationIndLength::theInfo,
};
const void *Tdd128::itemsPres[5] = {
	1,
	1,
	1,
	0,
	0,
};
const Tdd128::Info Tdd128::theInfo = {
	Tdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 2, 0
};

const void *Mode::choicesInfo[3] = {
	&Fdd::theInfo,
	&Tdd384::theInfo,
	&Tdd128::theInfo,
};
const Mode::Info Mode::theInfo = {
	Mode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *MBMSMICHConfigurationInfor6::itemsInfo[2] = {
	&MBMSMICHPowerOffset::theInfo,
	&Mode::theInfo,
};
const void *MBMSMICHConfigurationInfor6::itemsPres[2] = {
	1,
	0,
};
const MBMSMICHConfigurationInfor6::Info MBMSMICHConfigurationInfor6::theInfo = {
	MBMSMICHConfigurationInfor6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};

const void *Tdd384::itemsInfo[1] = {
	&MidambleShiftAndBurstTyper7::theInfo,
};
const void *Tdd384::itemsPres[1] = {
	1,
};
const Tdd384::Info Tdd384::theInfo = {
	Tdd384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *Tdd768::itemsInfo[1] = {
	&MidambleShiftAndBurstTypeVHCR::theInfo,
};
const void *Tdd768::itemsPres[1] = {
	1,
};
const Tdd768::Info Tdd768::theInfo = {
	Tdd768::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *Tdd128::itemsInfo[1] = {
	&TimeSlotLCRext::theInfo,
};
const void *Tdd128::itemsPres[1] = {
	0,
};
const Tdd128::Info Tdd128::theInfo = {
	Tdd128::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 1, 0
};

const void *Mode::choicesInfo[3] = {
	&Tdd384::theInfo,
	&Tdd768::theInfo,
	&Tdd128::theInfo,
};
const Mode::Info Mode::theInfo = {
	Mode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	2
};

const void *MBMSMICHConfigurationInfov770ext::itemsInfo[1] = {
	&Mode::theInfo,
};
const void *MBMSMICHConfigurationInfov770ext::itemsPres[1] = {
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


const void *Imb384::itemsInfo[2] = {
	&ChannelisationCode256::theInfo,
	&MBMSNICountPerFrameIMB384::theInfo,
};
const void *Imb384::itemsPres[2] = {
	1,
	1,
};
const Imb384::Info Imb384::theInfo = {
	Imb384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *Mode::choicesInfo[1] = {
	&Imb384::theInfo,
};
const Mode::Info Mode::theInfo = {
	Mode::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *MBMSMICHConfigurationInfov890ext::itemsInfo[1] = {
	&Mode::theInfo,
};
const void *MBMSMICHConfigurationInfov890ext::itemsPres[1] = {
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




const void *Other::choicesInfo[2] = {
	&SameAsMIB_MultiPLMN_Id::theInfo,
	&PLMNIdentity::theInfo,
};
const Other::Info Other::theInfo = {
	Other::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *Plmn_Identity::choicesInfo[2] = {
	&SameAsMIB_PLMN_Id::theInfo,
	&Other::theInfo,
};
const Plmn_Identity::Info Plmn_Identity::theInfo = {
	Plmn_Identity::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *MBMSServiceIdentityr6::itemsInfo[2] = {
	&ServiceIdentity::theInfo,
	&Plmn_Identity::theInfo,
};
const void *MBMSServiceIdentityr6::itemsPres[2] = {
	1,
	1,
};
const MBMSServiceIdentityr6::Info MBMSServiceIdentityr6::theInfo = {
	MBMSServiceIdentityr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *MBMSTransmissionIdentity::itemsInfo[2] = {
	&MBMSServiceIdentityr6::theInfo,
	&MBMSSessionIdentity::theInfo,
};
const void *MBMSTransmissionIdentity::itemsPres[2] = {
	1,
	0,
};
const MBMSTransmissionIdentity::Info MBMSTransmissionIdentity::theInfo = {
	MBMSTransmissionIdentity::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};




const void *Mbms_PreferredFrequency::choicesInfo[2] = {
	&MBMSPFLIndex::theInfo,
	&MBMSPFLInfo::theInfo,
};
const Mbms_PreferredFrequency::Info Mbms_PreferredFrequency::theInfo = {
	Mbms_PreferredFrequency::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};



const void *MBMSModifedServicer6::itemsInfo[5] = {
	&MBMSTransmissionIdentity::theInfo,
	&MBMSRequiredUEActionMod::theInfo,
	&Mbms_PreferredFrequency::theInfo,
	&dummy::theInfo,
	&ContinueMCCHReading::theInfo,
};
const void *MBMSModifedServicer6::itemsPres[5] = {
	1,
	1,
	0,
	0,
	1,
};
const MBMSModifedServicer6::Info MBMSModifedServicer6::theInfo = {
	MBMSModifedServicer6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 2, 0
};



const void *MBMSModifiedServicev770ext::itemsInfo[1] = {
	&MBSFNClusterFrequencyr7::theInfo,
};
const void *MBMSModifiedServicev770ext::itemsPres[1] = {
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
const void *MBMSModifiedServiceLCRv7c0ext::itemsPres[1] = {
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




const void *Fdd::itemsInfo[3] = {
	&MBMSSoftCombTimingOffset::theInfo,
	&MBMSL1CombiningTransmTimeDiff::theInfo,
	&MBMSL1CombiningSchedule::theInfo,
};
const void *Fdd::itemsPres[3] = {
	1,
	1,
	0,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};


const void *Layer1Combining::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const Layer1Combining::Info Layer1Combining::theInfo = {
	Layer1Combining::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *MBMSNeighbouringCellSCCPCHr6::itemsInfo[4] = {
	&MBMSCommonPhyChIdentity::theInfo,
	&MBMSSCCPCHPwrOffsetDiff::theInfo,
	&Layer1Combining::theInfo,
	&MBMSL23Configuration::theInfo,
};
const void *MBMSNeighbouringCellSCCPCHr6::itemsPres[4] = {
	1,
	0,
	0,
	1,
};
const MBMSNeighbouringCellSCCPCHr6::Info MBMSNeighbouringCellSCCPCHr6::theInfo = {
	MBMSNeighbouringCellSCCPCHr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 2, 0
};

const void *Fdd::itemsInfo[3] = {
	&MBMSSoftCombTimingOffset::theInfo,
	&MBMSL1CombiningTransmTimeDiff::theInfo,
	&MBMSL1CombiningSchedule::theInfo,
};
const void *Fdd::itemsPres[3] = {
	1,
	1,
	0,
};
const Fdd::Info Fdd::theInfo = {
	Fdd::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};


const void *Layer1Combining::choicesInfo[2] = {
	&Fdd::theInfo,
	&Tdd::theInfo,
};
const Layer1Combining::Info Layer1Combining::theInfo = {
	Layer1Combining::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *MBMSNeighbouringCellSCCPCHv770ext::itemsInfo[5] = {
	&MBMSCommonPhyChIdentity::theInfo,
	&SecondaryCCPCHInfoDiffMBMS::theInfo,
	&MBMSSCCPCHPwrOffsetDiff::theInfo,
	&Layer1Combining::theInfo,
	&MBMSL23Configuration::theInfo,
};
const void *MBMSNeighbouringCellSCCPCHv770ext::itemsPres[5] = {
	0,
	1,
	0,
	0,
	1,
};
const MBMSNeighbouringCellSCCPCHv770ext::Info MBMSNeighbouringCellSCCPCHv770ext::theInfo = {
	MBMSNeighbouringCellSCCPCHv770ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	5, 3, 0
};





const void *MBMSNetworkStandardTimeInformationLCRv890ext::itemsInfo[2] = {
	&NetworkStandardTime::theInfo,
	&CorrelativeSFN::theInfo,
};
const void *MBMSNetworkStandardTimeInformationLCRv890ext::itemsPres[2] = {
	1,
	0,
};
const MBMSNetworkStandardTimeInformationLCRv890ext::Info MBMSNetworkStandardTimeInformationLCRv890ext::theInfo = {
	MBMSNetworkStandardTimeInformationLCRv890ext::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 1, 0
};


const void *MBMSPhyChInformationIMB384::itemsInfo[2] = {
	&MBMSCommonPhyChIdentity::theInfo,
	&SecondaryCCPCHFrameType2Info::theInfo,
};
const void *MBMSPhyChInformationIMB384::itemsPres[2] = {
	1,
	1,
};
const MBMSPhyChInformationIMB384::Info MBMSPhyChInformationIMB384::theInfo = {
	MBMSPhyChInformationIMB384::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};


const void *MBMSPhyChInformationr6::itemsInfo[2] = {
	&MBMSCommonPhyChIdentity::theInfo,
	&SecondaryCCPCHInfoMBMSr6::theInfo,
};
const void *MBMSPhyChInformationr6::itemsPres[2] = {
	1,
	1,
};
const MBMSPhyChInformationr6::Info MBMSPhyChInformationr6::theInfo = {
	MBMSPhyChInformationr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *MBMSPhyChInformationr7::itemsInfo[2] = {
	&MBMSCommonPhyChIdentity::theInfo,
	&SecondaryCCPCHInfoMBMSr7::theInfo,
};
const void *MBMSPhyChInformationr7::itemsPres[2] = {
	1,
	1,
};
const MBMSPhyChInformationr7::Info MBMSPhyChInformationr7::theInfo = {
	MBMSPhyChInformationr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};







const void *LayerConvergenceInformation::choicesInfo[2] = {
	&MBMSQoffset::theInfo,
	&Mbms_HCSoffset::theInfo,
};
const LayerConvergenceInformation::Info LayerConvergenceInformation::theInfo = {
	LayerConvergenceInformation::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *MBMSPreferredFrequencyInfor6::itemsInfo[3] = {
	&MbmsPreferredFrequency::theInfo,
	&LayerConvergenceInformation::theInfo,
	&MBMSPLServiceRestrictInfor6::theInfo,
};
const void *MBMSPreferredFrequencyInfor6::itemsPres[3] = {
	0,
	1,
	0,
};
const MBMSPreferredFrequencyInfor6::Info MBMSPreferredFrequencyInfor6::theInfo = {
	MBMSPreferredFrequencyInfor6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};






const void *Status::choicesInfo[2] = {
	&None::theInfo,
	&MBMSSelectedServicesListFull::theInfo,
};
const Status::Info Status::theInfo = {
	Status::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *MBMSSelectedServiceInfo::itemsInfo[1] = {
	&Status::theInfo,
};
const void *MBMSSelectedServiceInfo::itemsPres[1] = {
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



const void *MBMSSelectedServicesShort::itemsInfo[2] = {
	&MBMSSelectedServicesListShort::theInfo,
	&ModificationPeriodIdentity::theInfo,
};
const void *MBMSSelectedServicesShort::itemsPres[2] = {
	1,
	1,
};
const MBMSSelectedServicesShort::Info MBMSSelectedServicesShort::theInfo = {
	MBMSSelectedServicesShort::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};

const void *MBMSServiceAccessInfor6::itemsInfo[4] = {
	&MBMSShortTransmissionID::theInfo,
	&MBMSAccessProbabilityFactor::theInfo,
	&MBMSAccessProbabilityFactor::theInfo,
	&MBMSConnectedModeCountingScope::theInfo,
};
const void *MBMSServiceAccessInfor6::itemsPres[4] = {
	1,
	1,
	0,
	1,
};
const MBMSServiceAccessInfor6::Info MBMSServiceAccessInfor6::theInfo = {
	MBMSServiceAccessInfor6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 1, 0
};




const void *MBMSServiceTransmInfo::itemsInfo[2] = {
	&Start::theInfo,
	&Duration::theInfo,
};
const void *MBMSServiceTransmInfo::itemsPres[2] = {
	1,
	1,
};
const MBMSServiceTransmInfo::Info MBMSServiceTransmInfo::theInfo = {
	MBMSServiceTransmInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};



const void *MBMSServiceSchedulingInfor6::itemsInfo[3] = {
	&MBMSTransmissionIdentity::theInfo,
	&MBMSServiceTransmInfoList::theInfo,
	&NextSchedulingperiod::theInfo,
};
const void *MBMSServiceSchedulingInfor6::itemsPres[3] = {
	1,
	0,
	1,
};
const MBMSServiceSchedulingInfor6::Info MBMSServiceSchedulingInfor6::theInfo = {
	MBMSServiceSchedulingInfor6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};



const void *MBMSTrCHInformationSIB5::itemsInfo[3] = {
	&TranspCh_Identity::theInfo,
	&MBMSPTMRBInformationCList::theInfo,
	&MBMSMSCHConfigurationInfor6::theInfo,
};
const void *MBMSTrCHInformationSIB5::itemsPres[3] = {
	1,
	0,
	0,
};
const MBMSTrCHInformationSIB5::Info MBMSTrCHInformationSIB5::theInfo = {
	MBMSTrCHInformationSIB5::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 2, 0
};


const void *MBMSSIBType5SCCPCHr6::itemsInfo[2] = {
	&MBMSSCCPCHIdentity::theInfo,
	&MBMSTrCHInformationSIB5List::theInfo,
};
const void *MBMSSIBType5SCCPCHr6::itemsPres[2] = {
	1,
	1,
};
const MBMSSIBType5SCCPCHr6::Info MBMSSIBType5SCCPCHr6::theInfo = {
	MBMSSIBType5SCCPCHr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};


const void *MBMSTimersAndCountersr6::itemsInfo[1] = {
	&T318::theInfo,
};
const void *MBMSTimersAndCountersr6::itemsPres[1] = {
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

const void *MBMSTranspChInfoForCCTrChr6::itemsInfo[2] = {
	&MBMSCommonCCTrChIdentity::theInfo,
	&TFCS::theInfo,
};
const void *MBMSTranspChInfoForCCTrChr6::itemsPres[2] = {
	1,
	1,
};
const MBMSTranspChInfoForCCTrChr6::Info MBMSTranspChInfoForCCTrChr6::theInfo = {
	MBMSTranspChInfoForCCTrChr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};


const void *MBMSTranspChInfoForTrChr6::itemsInfo[2] = {
	&MBMSCommonTrChIdentity::theInfo,
	&TransportFormatSet::theInfo,
};
const void *MBMSTranspChInfoForTrChr6::itemsPres[2] = {
	1,
	1,
};
const MBMSTranspChInfoForTrChr6::Info MBMSTranspChInfoForTrChr6::theInfo = {
	MBMSTranspChInfoForTrChr6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};


const void *MBMSUnmodifiedServicer6::itemsInfo[3] = {
	&MBMSTransmissionIdentity::theInfo,
	&MBMSRequiredUEActionUMod::theInfo,
	&MBMSPFLIndex::theInfo,
};
const void *MBMSUnmodifiedServicer6::itemsPres[3] = {
	1,
	1,
	0,
};
const MBMSUnmodifiedServicer6::Info MBMSUnmodifiedServicer6::theInfo = {
	MBMSUnmodifiedServicer6::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	3, 1, 0
};


const void *MBMSUnmodifiedServicev770ext::itemsInfo[1] = {
	&MBSFNClusterFrequencyr7::theInfo,
};
const void *MBMSUnmodifiedServicev770ext::itemsPres[1] = {
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
	&notificationOfAllMBSFNServicesInTheBand::theInfo,
};
const void *MBSFNservicesNotNotifiedr7::itemsPres[1] = {
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


const void *MbsfnServicesNotification::choicesInfo[2] = {
	&MbsfnServicesNotified::theInfo,
	&MBSFNservicesNotNotifiedr7::theInfo,
};
const MbsfnServicesNotification::Info MbsfnServicesNotification::theInfo = {
	MbsfnServicesNotification::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	1
};

const void *MBSFNInterFrequencyNeighbourr7::itemsInfo[2] = {
	&FrequencyInfo::theInfo,
	&MbsfnServicesNotification::theInfo,
};
const void *MBSFNInterFrequencyNeighbourr7::itemsPres[2] = {
	1,
	1,
};
const MBSFNInterFrequencyNeighbourr7::Info MBSFNInterFrequencyNeighbourr7::theInfo = {
	MBSFNInterFrequencyNeighbourr7::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};


const void *MBSFNInterFrequencyNeighbourv860ext::itemsInfo[1] = {
	&imb_Indication::theInfo,
};
const void *MBSFNInterFrequencyNeighbourv860ext::itemsPres[1] = {
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



const void *MBSFNTDDTimeSlotInfo::itemsInfo[2] = {
	&TimeslotNumberLCRr4::theInfo,
	&CellParametersID::theInfo,
};
const void *MBSFNTDDTimeSlotInfo::itemsPres[2] = {
	1,
	1,
};
const MBSFNTDDTimeSlotInfo::Info MBSFNTDDTimeSlotInfo::theInfo = {
	MBSFNTDDTimeSlotInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};



const void *MBSFNTDDTimeSlotInfoLCR::itemsInfo[2] = {
	&FrequencyIndex::theInfo,
	&MBSFNTDDInformation::theInfo,
};
const void *MBSFNTDDTimeSlotInfoLCR::itemsPres[2] = {
	1,
	1,
};
const MBSFNTDDTimeSlotInfoLCR::Info MBSFNTDDTimeSlotInfoLCR::theInfo = {
	MBSFNTDDTimeSlotInfoLCR::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	2, 0, 0
};





const void *MBSFNTDMInfo::itemsInfo[4] = {
	&MBMSShortTransmissionID::theInfo,
	&TDMPeriod::theInfo,
	&TDMOffset::theInfo,
	&TDMLength::theInfo,
};
const void *MBSFNTDMInfo::itemsPres[4] = {
	1,
	1,
	1,
	1,
};
const MBSFNTDMInfo::Info MBSFNTDMInfo::theInfo = {
	MBSFNTDMInfo::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	4, 0, 0
};


