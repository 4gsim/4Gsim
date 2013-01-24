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
    ttiId = 0;
}

MAC::~MAC() {
    // TODO Auto-generated destructor stub
}

void MAC::initialize(int stage) {
    if (stage == 4) {
        nb = NotificationBoardAccess().get();

        if (!strncmp(this->getParentModule()->getComponentType()->getName(), "UE", 2)) {
            rnti = uniform(RA_RNTI_MIN_VALUE, RA_RNTI_MAX_VALUE);
            sendDown(new cPacket("RandomAccessRequest"), RACH, RaRnti, rnti, 1);
        }

        ttiTimer = new cMessage("TTI-TIMER");
        this->scheduleAt(simTime() + TTI_TIMER_TIMEOUT, ttiTimer);
        ttiTimer->setContextPointer(this);

        entity = new HARQEntity();
        entity->init();
    }
}

void MAC::handleMessage(cMessage *msg) {
    if (msg->isSelfMessage()) {
        this->cancelEvent(ttiTimer);
        ttiId++;
        this->scheduleAt(simTime() + TTI_TIMER_TIMEOUT, ttiTimer);
    } else {
        if (msg->arrivedOn("lowerLayerIn")) {
            handleLowerMessage(msg);
        } else {
            handleUpperMessage(msg);
        }
    }
}

void MAC::handleLowerMessage(cMessage *msg) {
    LTEPhyControlInfo *ctrl = check_and_cast<LTEPhyControlInfo*>(msg->getControlInfo());
    switch(ctrl->getChannel()) {
    case RACH: {
        MACSubHeaderRar *header = MACUtils().createHeaderRar(true, ctrl->getRapid());
        MACServiceDataUnit *sdu = MACUtils().createRAR(0, 0, uniform(0, 65535));  /* TODO UL grant split into bits */
        MACProtocolDataUnit *pdu = new MACProtocolDataUnit();
        pdu->pushSubHdr(header);
        pdu->pushSdu(sdu);
        sendDown(pdu, PDCCH, RaRnti, ctrl->getRnti());
        break;
    }
//    case RandomAccessGrant: {
//
////        nb->fireChangeNotification(NF_RAND_ACCESS_COMPL, NULL);
//        break;
//    }
    default:
        EV << "LTE-MAC: Unknown LTEPhyControlInfo type. Discarding message.\n";
        break;
    }
}

void MAC::handleUpperMessage(cMessage *msg) {

}

void MAC::sendDown(cMessage *msg, int channelNumber, unsigned rntiType, unsigned rnti, unsigned rapid) {
    LTEPhyControlInfo *ctrl = new LTEPhyControlInfo();
    ctrl->setChannel(channelNumber);
//    ctrl->setType(ctrlType);
    ctrl->setRntiType(rntiType);
    ctrl->setRnti(rnti);
    ctrl->setRapid(rapid);

    msg->setControlInfo(ctrl);
    send(msg, gate("lowerLayerOut"));
}

