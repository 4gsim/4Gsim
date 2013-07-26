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

#include "PHYenb.h"
#include "LTEControlInfo_m.h"
#include "PHYFrame_m.h"

Define_Module(PHYenb);

PHYenb::PHYenb() : rs(this->getId())  {
    dlBandwith = 6;
    ulBandwith = 6;
    tti = 0;
    ttiTimer = NULL;
}

PHYenb::~PHYenb() {
    if (ttiTimer != NULL) {
        if (ttiTimer->getContextPointer() != NULL)
            this->cancelEvent(ttiTimer);
        delete ttiTimer;
    }
}

void PHYenb::initialize(int stage) {
    // TODO - Generated method body
    ChannelAccess::initialize(stage);

    if (stage == 2) {
        cc->setRadioChannel(myRadioRef, PRACH);
        cc->setRadioChannel(myRadioRef, PUSCH);
    }

    if (stage == 4) {
        nb = NotificationBoardAccess().get();

        nb->subscribe(this, PARAMRequest);
        nb->subscribe(this, CONFIGRequest);
        nb->subscribe(this, STARTRequest);
        nb->subscribe(this, DLCONFIGRequest);
        nb->subscribe(this, TXRequest);

        fsm = cFSM("fsm-PHYenb");
        fsm.setState(IDLE);

        ttiTimer = new cMessage("TTI-TIMER");
        ttiTimer->setContextPointer(this);
    }
}

void PHYenb::handleMessage(cMessage *msg) {
    // TODO - Generated method body
    if (msg->isSelfMessage()) {
        if (msg == ttiTimer) {
            SubframeIndication *sfInd = new SubframeIndication();
            sfInd->setTti(tti++);
            nb->fireChangeNotification(SUBFRAMEIndication, sfInd);
            this->cancelEvent(ttiTimer);
            this->scheduleAt(simTime() + TTI_VALUE, ttiTimer);
        }
    } else if (msg->arrivedOn("upperLayerIn")) {
        handleUpperMessage(msg);
    }
}

void PHYenb::handleUpperMessage(cMessage *msg) {
    EV << "LTE-PHYenb: Receiving message with id = " << msg->getKind() << " from upper layer.\n";
    if (findTxRequestPdu(msg->getKind())) {
        LTEControlInfo *ctrl = check_and_cast<LTEControlInfo*>(msg->removeControlInfo());
        TransportBlock *tb = new TransportBlock();
        tb->encapsulate(PK(msg));
        switch(ctrl->getChannel()) {
            case BCH:
                tb->setChannelNumber(PBCH);
                break;
            case DLSCH0:
                tb->setChannelNumber(PDSCH0);
                break;
            case DLSCH1:
                tb->setChannelNumber(PDSCH1);
                break;
            default:
                break;
        }
        sendToChannel(tb);
    }
}

const char *PHYenb::stateName(int state) {
#define CASE(x) case x: s=#x; break
    const char *s = "unknown";
    switch (state) {
        CASE(IDLE);
        CASE(CONFIGURED);
        CASE(RUNNING);
    }
    return s;
#undef CASE
}

const char *PHYenb::eventName(int event) {
#define CASE(x) case x: s=#x; break
    const char *s = "unknown";
    switch (event) {
        CASE(PARAMRequest);
        CASE(CONFIGRequest);
        CASE(STARTRequest);
        CASE(DLCONFIGRequest);
        CASE(TXRequest);
    }
    return s;
#undef CASE
}

void PHYenb::stateEntered(int category, const cPolymorphic *details) {
    switch(fsm.getState()) {
        case IDLE: {
            ParamResponse *paramResp = new ParamResponse();
            paramResp->setErrorCode(MsgOk);
            paramResp->setTlvsArraySize(1);
            paramResp->setTlvs(0, createPhyCommandTlv(PhyState, 1, IDLE));
            nb->fireChangeNotification(PARAMResponse, paramResp);
            break;
        }
        case CONFIGURED: {
            if (category == CONFIGRequest) {
                ConfigResponse *cfgResp = new ConfigResponse();
                cfgResp->setErrorCode(MsgOk);
                nb->fireChangeNotification(CONFIGResponse, cfgResp);
            }
            break;
        }
        case RUNNING: {
            if (category == STARTRequest) {
                this->cancelEvent(ttiTimer);
                this->scheduleAt(simTime(), ttiTimer);
            } else if (category == DLCONFIGRequest) {
                DlConfigRequest *dlCfgReq = check_and_cast<DlConfigRequest*>(details);
                for (unsigned i = 0; i < dlCfgReq->getPdusArraySize(); i++) {
                    DlConfigRequestPduPtr pdu = dlCfgReq->getPdus(i);
                    EV << "LTE-PHYenb: Received DLCONFIGRequest for PDU with type = " << (unsigned)pdu->getType() << ".\n";
                    if (pdu->getType() == DciDlPdu) {
                        sendDCIFormat(pdu);
                    } else {
                        dlCfgReqPdus[pdu->getPduIndex()] = pdu;
                    }
                }
            } else if (category == TXRequest) {
                TxRequest *txReq = check_and_cast<TxRequest*>(details);
                for (unsigned i = 0; i < txReq->getPdusArraySize(); i++) {
                    TxRequestPdu pdu = txReq->getPdus(i);
                    if (findDlConfigRequestPdu(pdu.getPduIndex()) != NULL) {
                        PhyCommandTlv tlv = pdu.getTlvs(0);
                        EV << "LTE-PHYenb: Received TXRequest for PDU with id = " << tlv.getValue() << ".\n";
                        txReqPdus[tlv.getValue()] = pdu;
                    }
                }
            }
            break;
        }
        default:
            EV << "LTE-PHYenb: Unknown state.\n";
            break;
    }
}

void PHYenb::sendDCIFormat(DlConfigRequestPduPtr pdu) {
    DlConfigRequestDciDlPdu *dciPdu = check_and_cast<DlConfigRequestDciDlPdu*>(pdu);
    DCIFormat *dci = new DCIFormat();
    dci->setRnti(dciPdu->getRnti());
    dci->setRntiType(dciPdu->getRntiType());
    dci->setChannelNumber(PDCCH);
    sendToChannel(dci);
}

void PHYenb::receiveChangeNotification(int category, const cPolymorphic *details) {
    Enter_Method_Silent();

    int oldState = fsm.getState();

    switch(oldState) {
        case IDLE:
            switch(category) {
                case PARAMRequest: {
                    break;
                }
                case CONFIGRequest: {
                    FSM_Goto(fsm, CONFIGURED);
                    break;
                }
                default:
                    EV << "LTE-PHYenb: Received unexpected event.\n";
                    break;
            }
            break;
        case CONFIGURED:
            switch(category) {
                case STARTRequest: {
                    FSM_Goto(fsm, RUNNING);
                    break;
                }
                default:
                    EV << "LTE-PHYenb: Received unexpected event.\n";
                    break;
            }
            break;
        case RUNNING:
            switch(category) {
                case DLCONFIGRequest: {
                    break;
                }
                case TXRequest : {
                    break;
                }
                default:
                    EV << "LTE-PHYenb: Received unexpected event.\n";
                    break;
            }
            break;
        default:
            EV << "LTE-PHYenb: Unknown state.\n";
            break;
    }

//    if (oldState != fsm.getState())
//        EV << "LTE-PHYenb: PSM-Transition: " << stateName(oldState) << " --> " << stateName(fsm.getState()) << "  (event was: " << eventName(category) << ")\n";
//    else
//        EV << "LTE-PHYenb: Staying in state: " << stateName(fsm.getState()) << " (event was: " << eventName(category) << ")\n";

    stateEntered(category, details);
}

DlConfigRequestPduPtr PHYenb::findDlConfigRequestPdu(unsigned short pduIndex) {
    DlConfigRequestPdus::iterator i = dlCfgReqPdus.find(pduIndex);
    if (i != dlCfgReqPdus.end()) {
        return i->second;
    } else {
        return NULL;
    }
}

bool PHYenb::findTxRequestPdu(unsigned msgId) {
    TxRequestPdus::iterator i = txReqPdus.find(msgId);
    if (i != txReqPdus.end()) {
        return true;
    } else {
        return false;
    }
}
