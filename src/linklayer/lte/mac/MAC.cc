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
#include "RRCMessage.h"

Define_Module(MAC);

MAC::MAC() {
    // TODO Auto-generated constructor stub
//    ttiId = 0;
    ueId = 0;
//    bcchMsg = NULL;
}

MAC::~MAC() {
    // TODO Auto-generated destructor stub
}

void MAC::initialize(int stage) {
    if (stage == 4) {
        nb = NotificationBoardAccess().get();
        nb->subscribe(this, NF_PHY_PER_CB);

        lteCfg = LTEConfigAccess().get();

        if (!strncmp(this->getParentModule()->getComponentType()->getName(), "UE", 2)) {
//            rnti = uniform(RA_RNTI_MIN_VALUE, RA_RNTI_MAX_VALUE);
//            rntiType = RaRnti;
//            ueId = this->getParentModule()->getId();
//            sendDown(new cPacket("RandomAccessRequest"), RACH, 1);
        }

//        ttiTimer = new cMessage("TTI-TIMER");
//        this->scheduleAt(simTime(), ttiTimer);
//        ttiTimer->setContextPointer(this);
        entity = new HARQEntity();
        entity->init(this);

        scheduler = new MACScheduler();
        scheduler->configure(lteCfg->getDlBandwith(), lteCfg->getBlockSize());
    }
}

void MAC::handleMessage(cMessage *msg) {
    if (msg->isSelfMessage()) {
//        LTEPhyControlInfo *ctrl = check_and_cast<LTEPhyControlInfo*>(msg->getControlInfo());
//        EV << "LTE-MAC: Sending message on " << channelName(ctrl->getChannel()) << " channel.\n";
//        this->send(msg, gate("lowerLayerOut"));
    } else {
        if (msg->arrivedOn("lowerLayerIn")) {
            handleLowerMessage(msg);
        } else {
            handleUpperMessage(msg);
        }
    }
}

void MAC::handleLowerMessage(cMessage *msg) {
    TransportBlock *tb = check_and_cast<TransportBlock*>(msg);
//    LTEPhyControlInfo *ctrl = check_and_cast<LTEPhyControlInfo*>(msg->getControlInfo());
    switch(tb->getChannel()) {
        case BCH: {
            MACProtocolDataUnit *pdu = check_and_cast<MACProtocolDataUnit*>(tb->decapsulate());
            cMessage *msg = pdu->decapsulate();
            delete pdu;
            sendUp(msg, BCCH0);
            break;
        }
//    case RACH: {
//        MACSubHeaderRar *header = MACUtils().createHeaderRar(true, ctrl->getRapid());
//        MACServiceDataUnit *sdu = MACUtils().createRAR(0, 0, uniform(0, 65535));  /* TODO UL grant split into bits */
//        MACProtocolDataUnit *pdu = new MACProtocolDataUnit("RandomAccessResponse");
//        pdu->pushSubHdr(header);
//        pdu->pushSdu(sdu);
//        rnti = ctrl->getRnti();
//        rntiType = ctrl->getRntiType();
//        ueId = ctrl->getUeId();
////        schTtid += TTI_VALUE;
//        sendDown(pdu, DLSCH);
//        break;
//    }
//    case DLSCH: {
//        if (ueId == ctrl->getUeId()) {
//            MACProtocolDataUnit *pdu = check_and_cast<MACProtocolDataUnit*>(msg);
//            if (ctrl->getRntiType() == RaRnti) {
//                rntiType = CRnti;
//                MACRandomAccessResponse *rar = check_and_cast<MACRandomAccessResponse*>(pdu->getSdus(0));
//                rnti = rar->getTmpCRnti();
//                entity->processUplinkGrant(rar->getUlGrant(), (unsigned)simTime().dbl());
//            }
//        } else {
//            EV << "LTE-MAC: Message received for incorrect UeId = " << ctrl->getUeId() << ". Discarding message.\n";
//        }
////        nb->fireChangeNotification(NF_RAND_ACCESS_COMPL, NULL);
//        break;
//    }
//    case ULSCH: {
//        MACProtocolDataUnit *pdu = check_and_cast<MACProtocolDataUnit*>(msg);
//        MACSubHeaderUlDl *header = check_and_cast<MACSubHeaderUlDl*>(pdu->getSubHdrs(0));
//        MACServiceDataUnit *sdu = pdu->getSdus(0);
//        cMessage *msg = sdu->decapsulate();
//        if (header->getLcid() == 0) {
////            lastTtid = (unsigned)simTime().dbl() + HARQ_FEEDBACK_DELAY + TTI_VALUE;
//            sendUp(msg, ULCCCH);
//        }
//        break;
//    }
        default:
            EV << "LTE-MAC: Unknown LTEPhyControlInfo type. Discarding message.\n";
            break;
    }
    delete tb;
}

void MAC::handleUpperMessage(cMessage *msg) {
//    unsigned char lcid;
    LTEControlInfo *ctrl = check_and_cast<LTEControlInfo*>(msg->removeControlInfo());

    MACProtocolDataUnit *pdu = new MACProtocolDataUnit(msg->getName());
    switch(ctrl->getChannel()) {
        case BCCH0: {
            pdu->encapsulate(PK(msg));
            scheduler->setMIB(pdu);
            break;
        }
        case BCCH1: {
            break;
        }
        default:
            break;
    }


//
//    if (ctrl->getChannel() == ULCCCH || ctrl->getChannel() == DLCCCH)
//        lcid = 0;
//
//    MACSubHeaderUlDl *header = MACUtils().createHeaderUlDl(lcid);
//    MACServiceDataUnit *sdu = new MACServiceDataUnit();
//    sdu->encapsulate(PK(msg));
//    MACProtocolDataUnit *pdu = new MACProtocolDataUnit(msg->getName());
//    pdu->pushSubHdr(header);
//    pdu->pushSdu(sdu);
//
//    entity->pushMsg3(pdu);
}

//void MAC::sendDown(cMessage *msg, int channelNumber, unsigned rntiType, unsigned short rnti) {
//    TransportBlock *tb = new TransportBlock();
//    tb->setName(msg->getName());
//    tb->encapsulate(PK(msg));
//    tb->setChannel(channelNumber);
//    tb->setRntiType(rntiType);
//    tb->setRnti(rnti);

//    this->send(tb, gate("lowerLayerOut"));
//    LTEPhyControlInfo *ctrl = new LTEPhyControlInfo();
//    ctrl->setChannel(channelNumber);
//    ctrl->setType(ctrlType);
//    ctrl->setRntiType(rntiType);
//    ctrl->setRnti(rnti);
//    ctrl->setRapid(rapid);
//    ctrl->setUeId(ueId);

//    msg->setControlInfo(ctrl);
//    EV << "LTE-MAC: Scheduling message on " << channelName(channelNumber) << " channel for " << time << " seconds.\n";
//    this->scheduleAt(simTime() + time, msg);
//}

const char *MAC::channelName(int channelNumber) {
#define CASE(x) case x: s=#x; break
    const char *s = "unknown";
    switch (channelNumber) {
        CASE(ULSCH);
        CASE(RACH);
        CASE(DLSCH0);
    }
    return s;
#undef CASE
}

void MAC::sendUp(cMessage *msg, int channelNumber) {
    LTEControlInfo *ctrl = new LTEControlInfo();
    ctrl->setChannel(channelNumber);
    msg->setControlInfo(ctrl);
    this->send(msg, gate("upperLayerOut"));
}

void MAC::receiveChangeNotification(int category, const cPolymorphic *details) {
    Enter_Method_Silent();
    if (category == NF_PHY_PER_CB) {
//        unsigned prbs[lteCfg->getDlBandwith()];
//        memset(prbs, 0, lteCfg->getDlBandwith());
//        if (!strncmp(this->getParentModule()->getComponentType()->getName(), "ENB", 3)) {
//            if (!(ttiId % 10)) { // MIB time
//                unsigned k = (lteCfg->getDlBandwith() * lteCfg->getBlockSize() / 2 - 36) / 12;
//                unsigned limit = k + 6;
//                for (; k < limit; k++) {
//                    prbs[k] = PBCH;
//                }
//                sendDown(bcchMsg, BCH, NoRnti, 0);
//            }
//        }
        // continue scheduling
        TransportBlock *tb = scheduler->getMessageToBeSent();
        if (tb)
            this->send(tb, gate("lowerLayerOut"));
//        ttiId++;
    }
}

