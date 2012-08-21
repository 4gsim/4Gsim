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

#include "RRC.h"
//#include "RRCMessage.h"
#include "PerEncoder.h"
#include "LTEUtils.h"

Define_Module(RRC);

RRC::RRC() {
	// TODO Auto-generated constructor stub

}

RRC::~RRC() {
	// TODO Auto-generated destructor stub
}

void RRC::initialize(int stage) {

//	char lac[2] = {0x5b, 0x10};
//	char tmsi[4] = {0x19, 0x02, 0x2c, 0xba};
//	std::vector<unsigned char> mcc;
//	std::vector<unsigned char> mnc;
//	mcc.push_back(2);
//	mcc.push_back(6);
//	mcc.push_back(0);
//	mnc.push_back(0);
//	mnc.push_back(2);
//	PlmnIdentity plmnId = PlmnIdentity(mcc, mnc);
//	Lai lai = Lai(plmnId, lac);
//	TmsiAndLaiGsmMap *tmsiAndLaiGsmMap = new TmsiAndLaiGsmMap(tmsi, lai);
//	InitialUeIdentity initUeId = InitialUeIdentity();
//	initUeId.setValue(tmsiAndLaiGsmMap, tmsiAndLai);
//	RRCConnectionRequest *rrcConnReq = new RRCConnectionRequest(initUeId, interRATCellReselection, noError);
//	UlCcchMessageType ulCchMessageType = UlCcchMessageType();
//	ulCchMessageType.setValue(rrcConnReq, rrcConnectionRequest);
//	UlCcchMessage ulCchMessage = UlCcchMessage(ulCchMessageType);
//	PerEncoder perEnc = PerEncoder(UNALIGNED);
//	perEnc.encodeSequence(ulCchMessage);
//	LTEUtils().printBytes(perEnc.getBuffer(), perEnc.getLength());
}

