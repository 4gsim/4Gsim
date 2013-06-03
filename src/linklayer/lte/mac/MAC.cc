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
#include "MACUtils.h"
#include "MACControlInfo_m.h"

Define_Module(MAC);

MAC::MAC() {
    // TODO Auto-generated constructor stub
    rarLimit = 0;

    raFSM = cFSM("fsm-RA");
    raFSM.setState(PROC_NULL);

    contResTimer = UINT32_MAX;
}

MAC::~MAC() {
    // TODO Auto-generated destructor stub

}

void MAC::initialize(int stage) {
    if (stage == 4) {
        lteCfg = LTEConfigAccess().get();

        lteSched = LTESchedulerAccess().get();

        subT = SubscriberTableAccess().get();

        nb = NotificationBoardAccess().get();

        nb->subscribe(this, NF_TTI_EXP);

        dlEntity = new HARQEntity();
        dlEntity->init(this, 4);

        ulEntity = new HARQEntity();
        ulEntity->init(this, 4);
    }
}

void MAC::handleMessage(cMessage *msg) {
    if (msg->isSelfMessage()) {

    } else {
        if (msg->arrivedOn("lowerLayerIn")) {
            handleLowerMessage(msg);
        } else {
            handleUpperMessage(msg);
        }
    }
}

void MAC::handleUpperMessage(cMessage *msg) {

    queueUp[msg->getKind()] = msg;
//    LTEControlInfo *ctrl = check_and_cast<LTEControlInfo*>(msg->removeControlInfo());
//
//    switch(ctrl->getChannel()) {
//        case BCCH0: {
////            MACProtocolDataUnit *pdu = MACUtils().createPDU(BCH, this->getParentModule()->getId(), msg);
//            queueUp[msg->getKind()] = msg;
//            break;
//        }
//        case BCCH1: {
////            MACProtocolDataUnit *pdu = MACUtils().createPDU(SCH_BCH, this->getParentModule()->getId(), msg);
////            queueUp[pdu->getKind()] = pdu;
//            break;
//        }
//        case ULCCCH: {
////            MACProtocolDataUnit *pdu = MACUtils().createPDU(SCH_CCCH, this->getParentModule()->getId(), msg);
////            queueUp.push_back(pdu);
////            if (raFSM.getState() == PROC_NULL)
////                performRAStateTransition(InitializeProc);
//            break;
//        }
//        default:
//            break;
//    }
}

void MAC::handleLowerMessage(cMessage *msg) {
    MACControlInfo *ctrl = check_and_cast<MACControlInfo*>(msg->getControlInfo());

    if (ctrl->getCtrlId() == BCAST_DATA_CTRL_INFO) {
        TransportBlock *tb = check_and_cast<TransportBlock*>(msg);
        queueDown[tb->getKind()] = tb;
    } else if (ctrl->getCtrlId() == DL_DATA_CTRL_INFO) {
        TransportBlock *tb = check_and_cast<TransportBlock*>(msg);
        queueDown[tb->getKind()] = tb;
    } else if (ctrl->getCtrlId() == UL_DATA_CTRL_INFO) {
        TransportBlock *tb = check_and_cast<TransportBlock*>(msg);
        queueDown[tb->getKind()] = tb;
    } else if (ctrl->getCtrlId() == RAP_CTRL_INFO) {
        ctrl->setChannel(RA_RESP);
        msg->setName("RandomAccessResponse");
        queueUp[msg->getKind()] = msg;
    } else if (ctrl->getCtrlId() == HARQ_CTRL_INFO) {

    }
}

void MAC::dlschDataTransfer(TransportBlock *tb, DownlinkAssignment *dlAssign) {
    unsigned rntiType = dlAssign->getRntiType();
    if (rntiType == CRnti || rntiType == TempCRnti || rntiType == SpsRnti) {
        if (rntiType == CRnti || rntiType == TempCRnti) {

        } else if (rntiType == SpsRnti) {

        } else {
            // not sure you can get here
        }
    }

    if (rntiType == SiRnti) {
        if (dlAssign->getRv() == -1) {
            unsigned k = ((lteSched->getSFN() / 2) % 4);
            dlAssign->setRv((unsigned)ceil(3 / 2 * k) % 4);
        }
        dlAssign->setHarqNo(HARQ_BCAST_PROC_ID);
        dlEntity->indicateDlAssignment(tb, dlAssign);
    }
}

void MAC::ulschDataTransfer(int tti, int msgId, UplinkGrant *ulGrant) {
    if (ulGrant->getRntiType() == CRnti || ulGrant->getRntiType() == TempCRnti || raFSM.getState() == RESP_CORRECT) {
        // TODO if the uplink grant is for UE's C-RNTI and if the previous uplink grant delivered to the HARQ entity for the same HARQ process was either an uplink grant received for the UE's Semi-Persistent Scheduling C-RNTI or a configured uplink grant:
        // -   consider the NDI to have been toggled regardless of the value of the NDI.
        ulEntity->indicateUlGrant(tti, msgId, ulGrant);
    } else if (ulGrant->getRntiType() == SpsRnti) {
        // TODO -   if the NDI in the received HARQ information is 1:
        // TODO-   consider the NDI not to have been toggled;
        // TODO-   deliver the uplink grant and the associated HARQ information to the HARQ entity for this TTI.
        // TODO-   else if the NDI in the received HARQ information is 0:
        // TODO-   if PDCCH contents indicate SPS release:
        // TODO-   clear the configured uplink grant (if any).
        // TODO-   else:
        // TODO-   store the uplink grant and the associated HARQ information as configured uplink grant;
        // TODO-   initialise (if not active) or re-initialise (if already active) the configured uplink grant to start in this TTI and to recur according to rules in subclause 5.10.2;
        // TODO-   consider the NDI bit to have been toggled;
        // TODO-   deliver the configured uplink grant and the associated HARQ information to the HARQ entity for this TTI.
    } else {
        // TODO -   else, if an uplink grant for this TTI has been configured:
        // TODO -   consider the NDI bit to have been toggled;
        // TODO -   deliver the configured uplink grant, and the associated HARQ information to the HARQ entity for this TTI.
    }
}

void MAC::sendUp(TransportBlock *tb, int channel) {
    MACProtocolDataUnit *pdu = check_and_cast<MACProtocolDataUnit*>(tb->decapsulate());
    cMessage *msg;
    if (channel == BCCH0 || channel == BCCH1) {
        msg = pdu->decapsulate();
    } else if (channel == ULSCH) {
        MACSubHeaderUlDl *header = check_and_cast<MACSubHeaderUlDl*>(pdu->getSubHdrs(0));
        MACServiceDataUnit *sdu = pdu->getSdus(0);
        if (header->getLcid() == 0)
            channel = ULCCCH;
        msg = sdu->decapsulate();
    }

    LTEControlInfo *ctrl = new LTEControlInfo();
    ctrl->setChannel(channel);
    msg->setControlInfo(ctrl);

    delete pdu;
    QueueDown::iterator i = queueDown.find(tb->getKind());
    if (i != queueDown.end())
        queueDown.erase(i);

    this->send(msg, gate("upperLayerOut"));
}

void MAC::sendDown(MACProtocolDataUnit *pdu) {
    this->send(pdu, gate("lowerLayerOut"));
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
                case StartContRes: {
                    FSM_Goto(raFSM, START_CONT_RES);
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
            EV << timestamp() << "Random Access Procedure initialization.\n";
            msg3Buffer.clear();
            preambleTransCount = 1;
            backoffParam = 0;

            performRAStateTransition(SelectRes);
            break;
        }
        case RES_SELECTION: {
            EV << timestamp() << "Random Access Resource selection.\n";
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
            EV << timestamp() << "Random Access Preamble transmission.\n";
            // TODO preambleInitialReceivedTargetPower = ...
            //                RAPControlInfo *ctrl = check_and_cast<RAPControlInfo*>(pdu->getControlInfo());

//            MACProtocolDataUnit *pdu = queueUp.back();
            cMessage *msg = new cMessage("RandomAccessPreamble");
            msg->setKind(lteSched->getUlMessageId());
            RAPControlInfo *ctrl = new RAPControlInfo();
            ctrl->setCtrlId(RAP_CTRL_INFO);
            ctrl->setUeId(this->getParentModule()->getId());
            ctrl->setChannel(RACH);
            ctrl->setAttempt(preambleTransCount);
            ctrl->setRapid(preambleIndex);
            msg->setControlInfo(ctrl);
            this->send(msg, gate("lowerLayerOut"));

            raRnti = 1 + lteSched->getTTI(); // TODO add also frequency offset

            break;
        }
        case RESP_RECEPTION: {
            EV << timestamp() << "Random Access Response reception.\n";
            int msgId = lteSched->getDlMessageId();
            TransportBlock *tb = queueDown[msgId];
            MACProtocolDataUnit *pdu = check_and_cast<MACProtocolDataUnit*>(tb->getEncapsulatedPacket());

            MACSubHeaderRar *header = check_and_cast<MACSubHeaderRar*>(pdu->getSubHdrs(0));

            if (header->getT() == false) { // is backoff indicator present
                backoffParam = header->getRapidOrBi();
            } else
                backoffParam = 0;

            if (preambleIndex == header->getRapidOrBi()) {
                performRAStateTransition(CorrectResp);
            }

            break;
        }
        case RESP_CORRECT: {
            EV << timestamp() << "Random Access Response received successfully.\n";
            int msgId = lteSched->getDlMessageId();
            TransportBlock *tb = queueDown[msgId];
            MACProtocolDataUnit *pdu = check_and_cast<MACProtocolDataUnit*>(tb->getEncapsulatedPacket());
            UplinkGrant *ulGrant = lteSched->getUlGrant(downId);

            MACRandomAccessResponse *rar = check_and_cast<MACRandomAccessResponse*>(pdu->getSdus(0));

            // TODO process Timing Advance Command

            // TODO indicate preambleInitialReceivedTargetPower ... to lower layers

            // TODO process UL grant and indicate to lower layers

            if (lteCfg->getPreambleIndex() != 0) {
                performRAStateTransition(CorrectProc);
            } else {
                unsigned rarNr = 0;
                for (QueueDown::iterator i = queueDown.begin(); i != queueDown.end(); i++) {
                    TransportBlock *queueTb = i->second;
                    MACProtocolDataUnit *queuePdu = check_and_cast<MACProtocolDataUnit*>(queueTb->getEncapsulatedPacket());
                    if (queuePdu->getSdusArraySize() > 0) {
                        MACRandomAccessResponse *queueRar = dynamic_cast<MACRandomAccessResponse*>(queuePdu->getSdus(0));
                        if (queueRar) {
                            rarNr++;
                            if (queueRar->getUlGrant() == rar->getUlGrant()) {
                                // set tempcrnti
                                ulGrant->setRnti(queueRar->getTmpCRnti());
                            }
                        }
                    }
                }

                if (rarNr == 1) { // first successfully received Random Access Response
                    cMessage *msg = queueUp[rapId];
                    LTEControlInfo *ctrl = check_and_cast<LTEControlInfo*>(msg->getControlInfo());
                    if (ctrl->getChannel() != ULCCCH) {
                        // TODO indicate to multiplex and assembly unit to include C-RNTI MAC control element ...
                    }

                    MACProtocolDataUnit *msg3Pdu = MACUtils().createPDU(ULSCH, msg, this->getParentModule()->getId());
                    msg3Pdu->setKind(downId);
                    msg3Buffer[downId] = msg3Pdu;
                }
            }
//
//            if (lteSched->getSFN() > rarLimit || preambleIndex != header->getRapidOrBi())
//                performRAStateTransition(IncorrectProc);
//            else
//                performRAStateTransition(CorrectProc);
//
            break;
        }
        case START_CONT_RES: {
            EV << timestamp() << "Starting contention resolution.\n";
            contResTimer = lteSched->getSFN();
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


void MAC::receiveChangeNotification(int category, const cPolymorphic *details) {
    Enter_Method_Silent();

    if (category == NF_TTI_EXP) {
        if (!strncmp(this->getParentModule()->getComponentType()->getName(), "ENB", 3)) {

            int msgId = lteSched->getDlMessageId();
            QueueUp::iterator iUp = queueUp.find(msgId);
            if (msgId != -1 && iUp != queueUp.end()) {
                cMessage *msg = iUp->second;
                LTEControlInfo *ctrl = check_and_cast<LTEControlInfo*>(msg->getControlInfo());

                switch(ctrl->getChannel()) {
                    case BCCH0: {
                        MACProtocolDataUnit *pdu = MACUtils().createPDU(BCH, msg, this->getParentModule()->getId());
                        sendDown(pdu);
                        break;
                    }
                    case BCCH1: {
                        MACProtocolDataUnit *pdu = MACUtils().createPDU(SCH_BCH, msg, this->getParentModule()->getId());
                        sendDown(pdu);
                        break;
                    }
                    case RA_RESP: {
                        // send MAC Random Response
                        MACProtocolDataUnit *pdu = MACUtils().createPDU(SCH_RAR, msg);
                        MACRandomAccessResponse *rar = check_and_cast<MACRandomAccessResponse*>(pdu->getSdus(0));
                        RAPControlInfo *ctrl = check_and_cast<RAPControlInfo*>(msg->getControlInfo());
                        Subscriber *sub = subT->findSubscriberForRapid(ctrl->getRapid());
                        sub->setRnti(rar->getTmpCRnti());
                        sub->setRntiType(TempCRnti);
                        sendDown(pdu);

                        // schedule UE for RRC Connection Request transmission
                        int ttis[1];
                        ttis[0] = (lteSched->getTTI() + 1) % 10;
                        lteSched->scheduleUlMessage(TempCRnti, rar->getTmpCRnti(), lteSched->getSFN() + 6, 1, lteSched->getSFN() + 6, ttis, 1);

                        break;
                    }
                    default:
                        break;
                }
            }

            msgId = lteSched->getUlMessageId();
            QueueDown::iterator iDown = queueDown.find(msgId);
            if (iDown != queueDown.end()) {
                TransportBlock *tb = iDown->second;
                MACControlInfo *ctrl = check_and_cast<MACControlInfo*>(tb->getControlInfo());
                if (ctrl->getCtrlId() == UL_DATA_CTRL_INFO) {
                    sendUp(tb, ULSCH);
                }
            }
        } else {
            int msgId = lteSched->getDlMessageId();
            QueueDown::iterator iDown = queueDown.find(msgId);
            if (iDown != queueDown.end()) {
                TransportBlock *tb = iDown->second;
                MACControlInfo *ctrl = check_and_cast<MACControlInfo*>(tb->getControlInfo());
                if (ctrl->getCtrlId() == BCAST_DATA_CTRL_INFO) {
                    sendUp(tb, BCCH0);
                } else if (ctrl->getCtrlId() == DL_DATA_CTRL_INFO) {
                    DownlinkAssignment *dlAssign = lteSched->getDlAssignment(msgId);
                    if (dlAssign->getRntiType() == RaRnti) {
                        if (raRnti == dlAssign->getRnti()) {
                            // part of LTE physical random access procedure
                            if (raFSM.getState() == PRBL_TRANSMISSION) {
                                int ttis[1];
                                ttis[0] = (lteSched->getTTI() - 1) % 10;
                                downId = lteSched->scheduleUlMessage(TempCRnti, 0, lteSched->getSFN() + 6, 1, lteSched->getSFN() + 6, ttis, 1);
                                performRAStateTransition(ReceiveResp);
                            }
                        }
                    } else {
                        dlschDataTransfer(tb, dlAssign);
                    }
                }
            }

//            int msgId = lteSched->getDlMessageId();
//            if (queueDown[msgId] != NULL) {
//                TransportBlock *tb = check_and_cast<TransportBlock*>(queueDown[msgId]);
//                MACControlInfo *ctrl = new MACControlInfo();
//                ctrl->setUeId(tb->getUeId());
//                switch(tb->getChannelNumber()) {
//                    case PBCH:
//                        ctrl->setChannel(BCH);
//                        ctrl->setCtrlId(BCAST_DATA_CTRL_INFO);
//                        break;
//                    case PDSCH0:
//                        ctrl->setChannel(DLSCH0);
//                        ctrl->setCtrlId(DL_DATA_CTRL_INFO);
//                        break;
//                    case PDSCH1:
//                        ctrl->setChannel(DLSCH1);
//                        ctrl->setCtrlId(DL_DATA_CTRL_INFO);
//                        break;
//                    default:
//                        break;
//                }
//                tb->setControlInfo(ctrl);
//                send(tb, gate("upperLayerOut"));
//                queueDown[msgId] = NULL;
//            }
//
            msgId = lteSched->getUlMessageId();
            QueueUp::iterator iUp = queueUp.find(msgId);
            if (msgId != -1 && iUp != queueUp.end()) {
                cMessage *msg = iUp->second;
                LTEControlInfo *ctrl = check_and_cast<LTEControlInfo*>(msg->getControlInfo());

                if (ctrl->getChannel() == ULCCCH) {
                    rapId = msgId;
                    if (raFSM.getState() == PROC_NULL)
                        performRAStateTransition(InitializeProc);
                }
            }

            MACBuffer::iterator iMsg3 = msg3Buffer.find(msgId);
            if (msgId != -1 && iMsg3 != msg3Buffer.end()) {
                UplinkGrant *ulGrant = lteSched->getUlGrant(msgId);
                ulschDataTransfer(lteSched->getTTI(), msgId, ulGrant);
                performRAStateTransition(StartContRes);
            }

            if (contResTimer != UINT32_MAX && lteSched->getSFN() - contResTimer > lteCfg->getMACContResolTimer()) {
                // TODO mac contention resolution timer expired
            }
        }
    }
}

MACProtocolDataUnit *MAC::getMsg3Pdu(int msgId) {
    MACBuffer::iterator i = msg3Buffer.find(msgId);
    if (i != msg3Buffer.end())
        return i->second;
    else
        return NULL;
}

std::string MAC::timestamp() {
    std::stringstream out;
    out << lteSched->timestamp() << " LTE-MAC: ";
    return out.str();
}
