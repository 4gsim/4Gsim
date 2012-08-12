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

const void *Fdd::itemsInfo[1] = {
    &MeasurementQuantity::theInfo
};

bool Fdd::itemsPres[1] = {
    1
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

const void *ImsiAndEsnDs41::itemsInfo[2] = {
	&ImsiDs41::theInfo,
	&EsnDs41::theInfo,
};

bool ImsiAndEsnDs41::itemsPres[2] = {
	1,
	1
};

const ImsiAndEsnDs41::Info ImsiAndEsnDs41::theInfo = {
    ImsiAndEsnDs41::create,
    SEQUENCE,
    0,
    false,
    itemsInfo,
    itemsPres,
    2, 0, 0
};

const void *IntegrityCheckInfo::itemsInfo[2] = {
    &MessageAuthenticationCode::theInfo,
    &RrcMessageSequenceNumber::theInfo,
};

bool IntegrityCheckInfo::itemsPres[2] = {
    1,
    1
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

Mcc *toMcc(std::vector<unsigned char> mcc) {
	Mcc *ret = new Mcc();
	for (unsigned i = 0; i < mcc.size(); i++)
		ret->push_back(Digit(mcc.at(i)));
	return ret;
}

std::vector<unsigned char> fromMcc(Mcc *mcc) {
	std::vector<unsigned char> ret;
	for (unsigned i = 0; i < mcc->size(); i++)
		ret.push_back(static_cast<const Digit>(mcc->at(i)).getValue());
	return ret;
}

Mnc *toMnc(std::vector<unsigned char> mnc) {
	Mnc *ret = new Mnc();
	for (unsigned i = 0; i < mnc.size(); i++)
		ret->push_back(Digit(mnc.at(i)));
	return ret;
}

std::vector<unsigned char> fromMnc(Mcc *mnc) {
	std::vector<unsigned char> ret;
	for (unsigned i = 0; i < mnc->size(); i++)
		ret.push_back(static_cast<const Digit>(mnc->at(i)).getValue());
	return ret;
}

const void *MeasurementQuantity::choicesInfo[4] = {
    &CpichEcN0::theInfo,
    &CpichRscp::theInfo,
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

const void *MeasuredResultsOnRACH::itemsInfo[2] = {
    &DummyIe::theInfo,
    &DummyIe::theInfo,
};

bool MeasuredResultsOnRACH::itemsPres[2] = {
    1,
    0
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

const void *PlmnIdentity::itemsInfo[2] = {
	&Mcc::theInfo,
	&Mnc::theInfo,
};

bool PlmnIdentity::itemsPres[2] = {
	1,
	1
};

const PlmnIdentity::Info PlmnIdentity::theInfo = {
    PlmnIdentity::create,
    SEQUENCE,
    0,
    false,
    itemsInfo,
    itemsPres,
    2, 0, 0
};

PlmnIdentity::PlmnIdentity(std::vector<unsigned char>mcc, std::vector<unsigned char>mnc) : Sequence(&theInfo) {
	setMcc(mcc);
	setMnc(mnc);
}

const void *Lai::itemsInfo[2] = {
	&PlmnIdentity::theInfo,
	&Lac::theInfo,
};

bool Lai::itemsPres[2] = {
	1,
	1
};

const Lai::Info Lai::theInfo = {
    Lai::create,
    SEQUENCE,
    0,
    false,
    itemsInfo,
    itemsPres,
    2, 0, 0
};

Lai::Lai(PlmnIdentity& plmnId, char *lac) : Sequence(&theInfo) {
	setPlmnIdentity(plmnId);
	setLac(lac);
}

const void *Rai::itemsInfo[2] = {
	&Lai::theInfo,
	&RoutingAreaCode::theInfo,
};

bool Rai::itemsPres[2] = {
	1,
	1
};

const Rai::Info Rai::theInfo = {
    Rai::create,
    SEQUENCE,
    0,
    false,
    itemsInfo,
    itemsPres,
    2, 0, 0
};

const void *PTmsiAndRaiGsmMap::itemsInfo[2] = {
	&PTmsiGsmMap::theInfo,
	&Rai::theInfo,
};

bool PTmsiAndRaiGsmMap::itemsPres[2] = {
	1,
	1
};

const PTmsiAndRaiGsmMap::Info PTmsiAndRaiGsmMap::theInfo = {
    PTmsiAndRaiGsmMap::create,
    SEQUENCE,
    0,
    false,
    itemsInfo,
    itemsPres,
    2, 0, 0
};

const void *SfnSfnObsTimeDifference::choicesInfo[2] = {
    &SfnSfnObsTimeDifference1::theInfo,
    &SfnSfnObsTimeDifference2::theInfo,
};

const SfnSfnObsTimeDifference::Info SfnSfnObsTimeDifference::theInfo = {
    SfnSfnObsTimeDifference::create,
    CHOICE,
    0,
    false,
    choicesInfo,
    1
};

const void *Tdd::itemsInfo[2] = {
    &TimeslotIscp::theInfo,
    &PrimaryCcphRscp::theInfo
};

bool Tdd::itemsPres[2] = {
    0,
    0
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

const void *TmsiAndLaiGsmMap::itemsInfo[2] = {
	&TmsiGsmMap::theInfo,
	&Lai::theInfo,
};

bool TmsiAndLaiGsmMap::itemsPres[2] = {
	1,
	1
};

const TmsiAndLaiGsmMap::Info TmsiAndLaiGsmMap::theInfo = {
    TmsiAndLaiGsmMap::create,
    SEQUENCE,
    0,
    false,
    itemsInfo,
    itemsPres,
    2, 0, 0
};

TmsiAndLaiGsmMap::TmsiAndLaiGsmMap(char *tmsi, Lai& lai) : Sequence(&theInfo) {
	setTmsiGsmMap(tmsi);
	setLai(lai);
}

const void *InitialUeIdentity::choicesInfo[8] = {
	&ImsiGsmMap::theInfo,
	&TmsiAndLaiGsmMap::theInfo,
	&PTmsiAndRaiGsmMap::theInfo,
	&Imei::theInfo,
	&EsnDs41::theInfo,
	&ImsiDs41::theInfo,
	&ImsiAndEsnDs41::theInfo,
	&TmsiDs41::theInfo,
};

const InitialUeIdentity::Info InitialUeIdentity::theInfo = {
    InitialUeIdentity::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	7
};

const void *V3d0NonCriticalExtensions::itemsInfo[2] = {
    &DummyIe::theInfo,
    &DummyIe::theInfo,
};

bool V3d0NonCriticalExtensions::itemsPres[2] = {
    1,
    0
};

const V3d0NonCriticalExtensions::Info V3d0NonCriticalExtensions::theInfo = {
    V3d0NonCriticalExtensions::create,
    SEQUENCE,
    0,
    false,
    itemsInfo,
    itemsPres,
    2, 1, 0
};

