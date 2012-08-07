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

const void *ImsiAndEsnDs41::itemsInfo[2] = {
	&ImsiDs41::theInfo,
	&EsnDs41::theInfo,
};

bool ImsiAndEsnDs41::itemsPres[2] = {
	1,
	1
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

const void *PlmnIdentity::itemsInfo[2] = {
	&Mcc::theInfo,
	&Mnc::theInfo,
};

bool PlmnIdentity::itemsPres[2] = {
	1,
	1
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

const void *PTmsiAndRaiGsmMap::itemsInfo[2] = {
	&PTmsiGsmMap::theInfo,
	&Rai::theInfo,
};

bool PTmsiAndRaiGsmMap::itemsPres[2] = {
	1,
	1
};

const void *TmsiAndLaiGsmMap::itemsInfo[2] = {
	&TmsiGsmMap::theInfo,
	&Lai::theInfo,
};

bool TmsiAndLaiGsmMap::itemsPres[2] = {
	1,
	1
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
	Choice::create,
	CHOICE,
	0,
	true,
	choicesInfo,
	7
};

