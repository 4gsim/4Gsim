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

#include "MAC.h"
#include "LTEPhyControlInfo_m.h"
#include "LTERadio.h"
#include "MACUtils.h"
#include "MACSerializer.h"

Define_Module(MAC);

MAC::MAC() {
    // TODO Auto-generated constructor stub

}

MAC::~MAC() {
    // TODO Auto-generated destructor stub
}

void MAC::initialize(int stage) {
    raRnti = uniform(1, 71);

    if (stage == 4) {
        startRandomAccess();
    }
}

void MAC::startRandomAccess() {
    cMessage *msg = new cMessage("RandomAccessRequest");

    LTEPhyControlInfo *ctrl = new LTEPhyControlInfo();
    ctrl->setChannelNumber(PRACH);
    ctrl->setRRnti(raRnti);
    ctrl->setType(RandomAccessRequest);

    msg->setControlInfo(ctrl);

    send(msg, gate("lowerLayerOut"));
}

void MAC::handleMessage(cMessage *msg) {
    if (msg->arrivedOn("lowerLayerIn")) {
        handleLowerMessage(msg);
    }
}

void MAC::handleLowerMessage(cMessage *msg) {
    LTEPhyControlInfo *ctrl = check_and_cast<LTEPhyControlInfo*>(msg->getControlInfo());
    switch(ctrl->getType()) {
    case RandomAccessRequest: {
        uint8 buf[255];
        int32 buf_len = 0;
        MACSubHeaderRar *header = MACUtils().createHeaderRar(false, true, 1);
        MACServiceDataUnit *sdu = MACUtils().createRAR(1111, 11111111, 1111);
        MACProtocolDataUnit *pdu = new MACProtocolDataUnit();
        pdu->pushSubHdr(header);
        pdu->pushSdu(sdu);
        buf_len = MACSerializer().serialize(pdu, buf, sizeof(buf));
        break;
    }
    default:
        EV << "LTE-MAC: Unknown LTEPhyControlInfo type. Discarding message.\n";
        break;
    }
}

