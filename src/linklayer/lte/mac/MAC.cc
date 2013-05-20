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
#include "HARQControlInfo_m.h"
#include "MACControlInfo_m.h"
#include "RRCControlInfo_m.h"

Define_Module(MAC);

MAC::MAC() {
    // TODO Auto-generated constructor stub
//    ttiId = 0;
//    ueId = 0;
//    bcchMsg = NULL;
    rarLimit = 0;

    raFSM = cFSM("fsm-RA");
    raFSM.setState(PROC_NULL);
}

MAC::~MAC() {
    // TODO Auto-generated destructor stub
}

void MAC::initialize(int stage) {
    if (stage == 4) {
        nb = NotificationBoardAccess().get();
        nb->subscribe(this, NF_PHY_PER_CB);
        nb->subscribe(this, NF_MAC_BEGIN_RA);

        lteCfg = LTEConfigAccess().get();
        lteSched = LTESchedulerAccess().get();

        if (!strncmp(this->getParentModule()->getComponentType()->getName(), "UE", 2)) {
//            rnti = uniform(RA_RNTI_MIN_VALUE, RA_RNTI_MAX_VALUE);
//            rntiType = RaRnti;
//            ueId = this->getParentModule()->getId();
//            sendDown(new cPacket("RandomAccessRequest"), RACH, 1);
        }

//        ttiTimer = new cMessage("TTI-TIMER");
//        this->scheduleAt(simTime(), ttiTimer);
//        ttiTimer->setContextPointer(this);
        // TODO number of HARQ processes
        dlEntity = new HARQEntity();
        dlEntity->init(this, 4);

        scheduler = new MACScheduler();
        scheduler->setLTEConfig(lteCfg);
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
        case RACH: {
            RandomAccessPreamble *rap = check_and_cast<RandomAccessPreamble*>(msg);

            int msgId = lteSched->scheduleMessage(DL_SCHEDULING, lteSched->getSFN() + 3, lteSched->getSFN() + 3 + lteCfg->getRaRespWdwSize());
            if (msgId != -1) {
                MACProtocolDataUnit *pdu = new MACProtocolDataUnit("RandomAccessResponse");
//                MACControlInfo *ctrl = new MACControlInfo();

                MACSubHeaderRar *header = MACUtils().createHeaderRar(true, rap->getRapid());
                MACRandomAccessResponse *rar = MACUtils().createRAR(0, 0, uniform(0, 65535));  /* TODO UL grant split into bits */
                pdu->pushSubHdr(header);
                pdu->pushSdu(rar);
                pdu->setKind(msgId);

//                ctrl->setChannel(DLSCH1);
//                ctrl->setRnti(rap->getRnti());
//                ctrl->setRntiType(rap->getRntiType());
//                ctrl->setUeId(rap->getUeId());

                sendDown(DLSCH1, rap->getRntiType(), rap->getRnti(), rap->getUeId(), pdu);

//                pdu->setControlInfo(ctrl);
//                queue[pdu->getKind()] = pdu;
            }
            break;
        }
        case DLSCH0: {
            if (tb->getRntiType() == SiRnti) {
                // TODO redundancy version
                addHarqInformation(tb, HARQ_BCAST_PROC_ID);
                dlEntity->indicateDownlinkAssignment(tb);
            }
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
//        nb->fireChangeNotification(NF_RAND_ACCESS_COMPL, NULL);
            break;
        }
        case DLSCH1: {
            MACProtocolDataUnit *pdu = check_and_cast<MACProtocolDataUnit*>(tb->decapsulate());
            DCIFormat1A *dci = check_and_cast<DCIFormat1A*>(tb->removeControlInfo());
            pdu->setControlInfo(dci);

            if (tb->getRntiType() == RaRnti) {
                queueUp.push_back(pdu);
                performRAStateTransition(ReceiveResp);

            }
            break;
        }
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
            EV << "LTE-MAC: Unknown transport channel. Discarding message.\n";
            break;
    }
    delete tb;
}

void MAC::handleUpperMessage(cMessage *msg) {
//    unsigned char lcid;
    LTEControlInfo *lteCtrl = check_and_cast<LTEControlInfo*>(msg->removeControlInfo());

    MACProtocolDataUnit *pdu = new MACProtocolDataUnit(msg->getName());
    pdu->setKind(msg->getKind());
    pdu->encapsulate(PK(msg));
    LTEControlInfo *ctrl = new LTEControlInfo();

    switch(lteCtrl->getChannel()) {
        case BCCH0: {
//            pdu->encapsulate(PK(msg));
//            ctrl->setRnti(NoRnti);
//            ctrl->setChannel(BCH);
//            MACControlInfo *ctrl = check_and_cast<MACControlInfo*>(pdu->getControlInfo());
            sendDown(BCH, NoRnti, 0, this->getParentModule()->getId(), pdu);
            break;
        }
        case BCCH1: {
//            pdu->encapsulate(PK(msg));
//            ctrl->setRntiType(SiRnti);
//            ctrl->setRnti(65535);
//            ctrl->setChannel(DLSCH0);
            sendDown(DLSCH0, SiRnti, 65535, this->getParentModule()->getId(), pdu);
            break;
        }
        case ULCCCH: {
//            pdu->encapsulate(PK(msg));
//            ctrl->setRntiType(CRnti);
            ctrl->setChannel(SCH_CCCH);
            pdu->setControlInfo(ctrl);
            queueUp.push_back(pdu);
            if (raFSM.getState() == PROC_NULL)
                performRAStateTransition(InitializeProc);
            break;
        }
        default:
            break;
    }
//    pdu->setKind(msg->getKind());
//    pdu->setControlInfo(ctrl);
//
//    if (pdu->getKind() != -1) { // already scheduled messages
//        queue[pdu->getKind()] = pdu;
//    } else {
//        if (ctrl->getChannel() == ULSCH_CCCH) { // check if
//
//        }
//    }
//    scheduler->addMACProtocolDataUnit(pdu);


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

void MAC::sendDown(int channel, unsigned rntiType, unsigned rnti, unsigned ueId, MACProtocolDataUnit *pdu) {
//    TransportBlock *tb = new TransportBlock();
//    tb->setChannel(channel);
//    tb->setRntiType(rntiType);
//    tb->setRnti(rnti);
//    tb->setUeId(ueId);
//    tb->setName(pdu->getName());
//    tb->encapsulate(pdu);
//    tb->setKind(pdu->getKind());
//    queueDown[tb->getKind()] = tb;
    MACControlInfo *ctrl = new MACControlInfo();
    ctrl->setChannel(channel);
    ctrl->setRnti(rnti);
    ctrl->setRntiType(rntiType);
    ctrl->setUeId(ueId);
    pdu->setControlInfo(ctrl);
    this->send(pdu, gate("lowerLayerOut"));
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
//#define CASE(x) case x: s=#x; break
//    const char *s = "unknown";
//    switch (channelNumber) {
//        CASE(ULSCH);
//        CASE(RACH);
//        CASE(DLSCH0);
//    }
//    return s;
//#undef CASE
}

void MAC::sendUp(cMessage *msg, int channel) {
    LTEControlInfo *ctrl = new LTEControlInfo();
    ctrl->setChannel(channel);
    msg->setControlInfo(ctrl);
    this->send(msg, gate("upperLayerOut"));
}

void MAC::performRAStateTransition(RAEvent event) {
    int oldState = raFSM.getState();

    switch(oldState) {
        case PROC_NULL:
            switch(event) {
                case InitializeProc: {
                    FSM_Goto(raFSM, PROC_INITIALIZATION);
                    break;
                }
                default:
                    EV << "LTE-MAC: Received unexpected RA event.\n";
                    break;
            }
            break;
        case PROC_INITIALIZATION:
            switch(event) {
                case SelectRes: {
                    FSM_Goto(raFSM, RES_SELECTION);
                    break;
                }
                default:
                    EV << "LTE-MAC: Received unexpected RA event.\n";
                    break;
            }
            break;
        case RES_SELECTION:
            switch(event) {
                case TransmitPrbl: {
                    FSM_Goto(raFSM, PRBL_TRANSMISSION);
                    break;
                }
                default:
                    EV << "LTE-MAC: Received unexpected RA event.\n";
                    break;
            }
            break;
        case PRBL_TRANSMISSION:
            switch(event) {
                case ReceiveResp: {
                    FSM_Goto(raFSM, RESP_RECEPTION);
                    break;
                }
                default:
                    EV << "LTE-MAC: Received unexpected RA event.\n";
                    break;
            }
            break;
        case RESP_RECEPTION:
            switch(event) {
                case CorrectResp: {
                    FSM_Goto(raFSM, RESP_CORRECT);
                    break;
                }
                default:
                    EV << "LTE-MAC: Received unexpected RA event.\n";
                    break;
            }
            break;
        case RESP_CORRECT:
            switch(event) {
                case CorrectProc: {
                    FSM_Goto(raFSM, PROC_DONE);
                    break;
                }
                case IncorrectProc: {
                    FSM_Goto(raFSM, PROC_ERROR);
                    break;
            }
            default:
                EV << "LTE-MAC: Received unexpected RA event.\n";
                break;
            }
            break;
        default:
            EV << "LTE-MAC: Unknown RA state.\n";
            break;
    }

    raStateEntered();
}

void MAC::raStateEntered() {
    switch(raFSM.getState()) {
        case PROC_INITIALIZATION: {
            EV << "LTE-MAC: Random Access Procedure initialization.\n";
            msg3Buffer.clear();
            preambleTransCount = 1;
            backoffParam = 0;

            // TODO rest of the table 3GPP TS 36211 Table 5.7.1-2 pag. 32
            switch (lteCfg->getPRACHCfgIndex() % 16) {
                case 0:
                    lteSched->scheduleMessage(UL_SCHEDULING, RAP_MSG_ID, 0, 2, UINT32_MAX, prachCfgIndex0TTIs, 1, lteCfg->getPRACHFreqOffset(), 6);
                    break;
                default:
                    break;
            }

            performRAStateTransition(SelectRes);
            break;
        }
        case RES_SELECTION: {
            EV << "LTE-MAC: Random Access Resource selection.\n";
            unsigned prachMaskIndex;

            if (lteCfg->getPreambleIndex() != 0 && lteCfg->getPRACHMaskIndex() != -1) {
                preambleIndex = lteCfg->getPreambleIndex();
    //            prachMaskIndex = lteCfg->getPRACHMaskIndex();
            } else {
                if (msg3Buffer.size() == 0) {   // msg3 has not been transmitted
                    if (lteCfg->getNrOfRAPreambles() != lteCfg->getSizeOfRAPreamblesGroupA()) { // TODO select group B

                    } else {    // select group A
                        preambleIndex = uniform(0, lteCfg->getSizeOfRAPreamblesGroupA());
                        prachMaskIndex = 0;
                        // TODO not sure if this is how PRACH selection is done
                        if (lteCfg->getTransmissionMode() == TDD_MODE && prachMaskIndex == 0) {
                            if (lteCfg->getPreambleIndex() != 0) {
                                // randomly select PRACH from determined subframe
                                prachIndex = uniform(lteCfg->getPRACHFreqOffset(), lteCfg->getPRACHFreqOffset() + 5);
                            } else {
                                // TODO randomly select PRACH from determined subframe and next 2 subframes
                                prachIndex = uniform(lteCfg->getPRACHFreqOffset(), lteCfg->getPRACHFreqOffset() + 5);
                            }
                        } else {
                            // determine PRACH with PRACH Mask Index
                            if (prachMaskIndex == 0) {
                                prachIndex = uniform(lteCfg->getPRACHFreqOffset(), lteCfg->getPRACHFreqOffset() + 5);
                            } else {
                                // TODO
                            }
                        }
                    }
                } else {    // TODO select the same group of Random Access Preambles as for previous transmission

                }
            }
            performRAStateTransition(TransmitPrbl);
            break;
        }
        case PRBL_TRANSMISSION: {
            EV << "LTE-MAC: Random Access Preamble transmission.\n";
            // TODO preambleInitialReceivedTargetPower = ...
            //                RAPControlInfo *ctrl = check_and_cast<RAPControlInfo*>(pdu->getControlInfo());
//            MACProtocolDataUnit *pdu = new MACProtocolDataUnit();
//            pdu->setName("RandomAccessPreamble");
//            pdu->setKind(RAP_MSG_ID);
//            RandomAccessPreamble *rap = new RandomAccessPreamble("RandomAccessPreamble");
//            rap->setChannel(RACH);
//            rap->setName(pdu->getName());
//            rap->setKind(RAP_MSG_ID);
//            rap->setRnti(prachIndex);
//            rap->setRntiType(RaRnti);
//            rap->setRapid(preambleIndex);
//            rap->setAttempt(preambleTransCount);
//            rap->setUeId(this->getParentModule()->getId());
//            RAPControlInfo *ctrl = new RAPControlInfo();
//            ctrl->setRapid(preambleIndex);
//            ctrl->setAttempt(preambleTransCount);
//            ctrl->setRnti(prachIndex);
//            ctrl->setUeId(this->getParentModule()->getId());

//            msg->setControlInfo(ctrl);
//            queueDown[rap->getKind()] = rap;

            cMessage *msg = new cMessage("RAPTransmissionCommand");
            RAPControlInfo *rap = new RAPControlInfo();
            rap->setChannel(RACH);
            rap->setRnti(prachIndex);
            rap->setRntiType(RaRnti);
            rap->setRapid(preambleIndex);
            rap->setAttempt(preambleTransCount);
            rap->setUeId(this->getParentModule()->getId());
            msg->setControlInfo(rap);
            this->send(msg, gate("lowerLayerOut"));

            break;
        }
        case RESP_RECEPTION: {
            EV << "LTE-MAC: Random Access Response reception.\n";
            MACProtocolDataUnit *pdu = queueUp.back();
            MACSubHeaderRar *rar = check_and_cast<MACSubHeaderRar*>(pdu->getSubHdrs(0));
            DCIFormat1A *dci = check_and_cast<DCIFormat1A*>(pdu->getControlInfo());

            if (dci->getAllocation() == lteSched->getTTI()) {
                if (rar->getT() == false) { // is backoff indicator present
                    backoffParam = rar->getRapidOrBi();
                } else
                    backoffParam = 0;

                if (preambleIndex == rar->getRapidOrBi()) {
                    performRAStateTransition(CorrectResp);
                }
            }
            break;
        }
        case RESP_CORRECT: {
            EV << "LTE-MAC: Random Access Response received successfully.\n";
            MACProtocolDataUnit *pdu = queueUp.back();
            MACRandomAccessResponse *rar = check_and_cast<MACRandomAccessResponse*>(pdu->getSdus(0));
            MACSubHeaderRar *header = check_and_cast<MACSubHeaderRar*>(pdu->getSubHdrs(0));
//            rars.push_back(rar);

            // TODO process Timing Advance Command

            // TODO indicate preambleInitialReceivedTargetPower ... to lower layers

            // TODO process UL grant and indicate to lower layers

            if (lteCfg->getPreambleIndex() != 0) {
                performRAStateTransition(CorrectProc);
            } else {
                unsigned ulGrant = rar->getUlGrant();
                unsigned rarNr = 0;
                for (unsigned i = 0; i < queueUp.size(); i++) {
                    MACProtocolDataUnit *pdu = queueUp[i];
                    MACRandomAccessResponse *queueRar = dynamic_cast<MACRandomAccessResponse*>(pdu->getSdus(0));
                    if (queueRar) {
                        rarNr++;
                        if (ulGrant == queueRar->getUlGrant()) {
                            // set tempcrnti
                        }
                    }
                }

                if (rarNr == 1) { // first successfully received Random Access Response
                    bool isCCCHTrans = false;
                    for (QueueUp::iterator i = queueUp.begin(); i != queueUp.end();) {
                        LTEControlInfo *ctrl = dynamic_cast<LTEControlInfo*>((*i)->getControlInfo());
                        if (ctrl && ctrl->getChannel() == SCH_CCCH) {
                            isCCCHTrans = true;
                            msg3Buffer[ulGrant] = (*i);
                            i = queueUp.erase(i);
                        } else
                            ++i;
                    }

                    if (!isCCCHTrans) {
                        // TODO indicate multiplex and assembly entity to include a C-RNTI MAC control element for
                        // subsequent transmission
                    }
                }
            }

            if (lteSched->getSFN() > rarLimit || preambleIndex != header->getRapidOrBi())
                performRAStateTransition(IncorrectProc);
            else
                performRAStateTransition(CorrectProc);

            break;
        }
        case PROC_DONE: {
            break;
        }
        case PROC_ERROR: {
            preambleTransCount++;
            if (preambleTransCount == lteCfg->getPreambleTransMax() + 1) {
                // TODO indicate a random access problem to upper layers
            }

            // TODO if random access preamble was selected by MAC ...

            performRAStateTransition(SelectRes);
            break;
        }
        default:
            break;
    }
}

void MAC::ulschDataTransfer(int channel, unsigned rnti, unsigned rntiType) {
    if (channel == SCH_CCCH || (channel == PDCCH && (rntiType == CRnti || rntiType == TempCRnti))) {

    }
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
//        int msgId = -1;
//        if (!strncmp(this->getParentModule()->getComponentType()->getName(), "ENB", 3)) {
//            msgId = lteSched->getMessageId(DL_SCHEDULING);
//        } else {
//            msgId = lteSched->getMessageId(UL_SCHEDULING);
//        }
//
//        if (msgId != -1) {
//            EV << "LTE-MAC: Sending scheduled message with id " << msgId << ".\n";
//            MACProtocolDataUnit *pdu = queue[msgId];
//            TransportBlock *tb = queueDown[msgId];
//            if (msgId == RAP_MSG_ID) {
//                RAPControlInfo *ctrl = check_and_cast<RAPControlInfo*>(pdu->getControlInfo());
//                RandomAccessPreamble *rap = new RandomAccessPreamble();
//                rap->setChannel(RACH);
//                tb->setRnti(1 + lteSched->getTTI() + 10 * tb->getRnti());
//                rap->setRntiType(RaRnti);
//                rap->setRapid(ctrl->getRapid());
//                rap->setAttempt(ctrl->getAttempt());
//                rap->setUeId(ctrl->getUeId());
//                tb = rap;
//                rarLimit = lteSched->getSFN() + 3 + lteCfg->getRaRespWdwSize();
//            }
//            else {
//                MACControlInfo *ctrl = check_and_cast<MACControlInfo*>(pdu->getControlInfo());
//                tb->setChannel(ctrl->getChannel());
//                tb->setRntiType(ctrl->getRntiType());
//                tb->setRnti(ctrl->getRnti());
//                tb->setUeId(ctrl->getUeId());
//
//            }
//            tb->setName(pdu->getName());
//            tb->encapsulate(pdu->dup());
//            this->send(tb->dup(), gate("lowerLayerOut"));
//        }

//        TransportBlock *tb = scheduler->getMessageToBeSent();
//        if (tb)
//            this->send(tb, gate("lowerLayerOut"));
//        ttiId++;
    } else if (category == NF_MAC_BEGIN_RA) {
//        EV << "LTE-MAC: Random Access Procedure intialization.\n";
//        msg3Buffer.clear();
//        preambleTransCount = 1;
//        backoffParam = 0;
//
//        EV << "LTE-MAC: Random Access Resource selection.\n";
//        unsigned prachMaskIndex;
//        unsigned prachIndex;
//
//        if (lteCfg->getPreambleIndex() != 0 && lteCfg->getPRACHMaskIndex() != -1) {
//            preambleIndex = lteCfg->getPreambleIndex();
////            prachMaskIndex = lteCfg->getPRACHMaskIndex();
//        } else {
//            if (msg3Buffer.size() == 0) {   // msg3 has not been transmitted
//                if (lteCfg->getNrOfRAPreambles() != lteCfg->getSizeOfRAPreamblesGroupA()) { // TODO select group B
//
//                } else {    // select group A
//                    preambleIndex = uniform(0, lteCfg->getSizeOfRAPreamblesGroupA());
//                    prachMaskIndex = 0;
//                    // TODO not sure if this is how PRACH selection is done
//                    if (lteCfg->getTransmissionMode() == TDD_MODE && prachMaskIndex == 0) {
//                        if (lteCfg->getPreambleIndex() != 0) {
//                            // randomly select PRACH from determined subframe
//                            prachIndex = uniform(lteCfg->getPRACHFreqOffset(), lteCfg->getPRACHFreqOffset() + 5);
//                        } else {
//                            // TODO randomly select PRACH from determined subframe and next 2 subframes
//                            prachIndex = uniform(lteCfg->getPRACHFreqOffset(), lteCfg->getPRACHFreqOffset() + 5);
//                        }
//                    } else {
//                        // determine PRACH with PRACH Mask Index
//                        if (prachMaskIndex == 0) {
//                            prachIndex = uniform(lteCfg->getPRACHFreqOffset(), lteCfg->getPRACHFreqOffset() + 5);
//                        } else {
//                            // TODO
//                        }
//                    }
//                }
//            } else {    // TODO select the same group of Random Access Preambles as for previous transmission
//
//            }
//        }
//
//        EV << "LTE-MAC: Random Access Preamble transmission.\n";
//        // TODO preambleInitialReceivedTargetPower = ...
//        RAPControlInfo *ctrl = new RAPControlInfo();
//        ctrl->setRapid(preambleIndex);
//        ctrl->setAttempt(preambleTransCount);
//        ctrl->setRnti(prachIndex);
//        ctrl->setUeId(this->getParentModule()->getId());
//        MACProtocolDataUnit *msg = new MACProtocolDataUnit();
//        msg->setName("RandomAccessPreamble");
//        msg->setKind(RAP_MSG_ID);
//        msg->setControlInfo(ctrl);
//        queue[msg->getKind()] = msg;
    }
}

void MAC::addHarqInformation(TransportBlock *tb, int harqProcId) {
    HARQControlInfo *ctrl = new HARQControlInfo();
    ctrl->setHarqProcId(harqProcId);
    tb->setControlInfo(ctrl);
}
