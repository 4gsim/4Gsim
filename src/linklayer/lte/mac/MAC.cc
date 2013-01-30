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
    ueId = 0;
}

MAC::~MAC() {
    // TODO Auto-generated destructor stub
}

void MAC::initialize(int stage) {
    if (stage == 4) {
        nb = NotificationBoardAccess().get();

        if (!strncmp(this->getParentModule()->getComponentType()->getName(), "UE", 2)) {
            rnti = uniform(RA_RNTI_MIN_VALUE, RA_RNTI_MAX_VALUE);
            rntiType = RaRnti;
            ueId = this->getParentModule()->getId();
            sendDown(new cPacket("RandomAccessRequest"), RACH, 1);
        }

        ttiTimer = new cMessage("TTI-TIMER");
        this->scheduleAt(simTime() + TTI_TIMER_TIMEOUT, ttiTimer);
        ttiTimer->setContextPointer(this);

        entity = new HARQEntity();
        entity->init(this);
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
        MACProtocolDataUnit *pdu = new MACProtocolDataUnit("RandomAccessResponse");
        pdu->pushSubHdr(header);
        pdu->pushSdu(sdu);
        rnti = ctrl->getRnti();
        rntiType = ctrl->getRntiType();
        ueId = ctrl->getUeId();
        sendDown(pdu, DLSCH);
        break;
    }
    case DLSCH: {
        if (ueId == ctrl->getUeId()) {
            MACProtocolDataUnit *pdu = check_and_cast<MACProtocolDataUnit*>(msg);
            if (ctrl->getRntiType() == RaRnti) {
                rntiType = CRnti;
                MACRandomAccessResponse *rar = check_and_cast<MACRandomAccessResponse*>(pdu->getSdus(0));
                rnti = rar->getTmpCRnti();
                entity->processUplinkGrant(rar->getUlGrant(), ttiId);
            }
        } else {
            EV << "LTE-MAC: Message received for incorrect UeId = " << ctrl->getUeId() << ". Discarding message.\n";
        }
//        nb->fireChangeNotification(NF_RAND_ACCESS_COMPL, NULL);
        break;
    }
    case ULSCH: {
        MACProtocolDataUnit *pdu = check_and_cast<MACProtocolDataUnit*>(msg);
        MACSubHeaderUlDl *header = check_and_cast<MACSubHeaderUlDl*>(pdu->getSubHdrs(0));
        MACServiceDataUnit *sdu = pdu->getSdus(0);
        cMessage *msg = sdu->decapsulate();
        if (header->getLcid() == 0)
            sendUp(msg, ULCCCH);
        break;
    }
    default:
        EV << "LTE-MAC: Unknown LTEPhyControlInfo type. Discarding message.\n";
        break;
    }
}

void MAC::handleUpperMessage(cMessage *msg) {
    unsigned char lcid;
    LTEControlInfo *ctrl = check_and_cast<LTEControlInfo*>(msg->removeControlInfo());

    if (ctrl->getChannel() == ULCCCH || ctrl->getChannel() == DLCCCH)
        lcid = 0;

    MACSubHeaderUlDl *header = MACUtils().createHeaderUlDl(lcid);
    MACServiceDataUnit *sdu = new MACServiceDataUnit();
    sdu->encapsulate(PK(msg));
    MACProtocolDataUnit *pdu = new MACProtocolDataUnit(msg->getName());
    pdu->pushSubHdr(header);
    pdu->pushSdu(sdu);

    entity->pushMsg3(pdu);
}

void MAC::sendDown(cMessage *msg, int channelNumber, unsigned rapid) {
    LTEPhyControlInfo *ctrl = new LTEPhyControlInfo();
    ctrl->setChannel(channelNumber);
//    ctrl->setType(ctrlType);
    ctrl->setRntiType(rntiType);
    ctrl->setRnti(rnti);
    ctrl->setRapid(rapid);
    ctrl->setUeId(ueId);

    msg->setControlInfo(ctrl);
    send(msg, gate("lowerLayerOut"));
}

void MAC::sendUp(cMessage *msg, int channelNumber) {
    LTEControlInfo *ctrl = new LTEControlInfo();
    ctrl->setChannel(channelNumber);
    msg->setControlInfo(ctrl);
    this->send(msg, gate("upperLayerOut"));
}

