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

#include "MACenb.h"
#include "LTEControlInfo_m.h"
#include "MACUtils.h"

Define_Module(MACenb);

MACenb::MACenb() {
    // TODO Auto-generated constructor stub

}

MACenb::~MACenb() {
    // TODO Auto-generated destructor stub
}

void MACenb::initialize(int stage) {
    if (stage == 4) {
        nb = NotificationBoardAccess().get();

        nb->subscribe(this, SUBFRAMEIndication);
        nb->subscribe(this, SCHED_DL_CONFIG_IND);
    }
}

void MACenb::handleLowerMessage(cMessage *msg) {

}

void MACenb::handleUpperMessage(cMessage *msg) {
    EV << "LTE-MACenb: Receiving message with id = " << msg->getKind() << " from upper layer.\n";
    LTEControlInfo *ctrl = check_and_cast<LTEControlInfo*>(msg->removeControlInfo());

    MACServiceDataUnit *sdu = new MACServiceDataUnit();
    sdu->encapsulate(PK(msg));
    sdu->setKind(msg->getKind());

    if (ctrl->getChannel() == BCCH0) {
        MACProtocolDataUnit *pdu = MACUtils().createTransparentPDU(BCH, sdu);
        EV << "LTE-MACenb: Sending transparent message with id = " << msg->getKind() << " to lower layer.\n";
        this->send(pdu, gate("lowerLayerOut"));
    } else if (ctrl->getChannel() == BCCH1) {
        EV << "LTE-MACenb: Buffering message with id = " << msg->getKind() << "\n.";
        buffer[sdu->getKind()] = sdu;

        MACProtocolDataUnit *pdu = MACUtils().createTransparentPDU(DLSCH0, sdu->dup());
        EV << "LTE-MACenb: Sending transparent message with id = " << msg->getKind() << " to lower layer.\n";
        this->send(pdu, gate("lowerLayerOut"));
    }
}

void MACenb::receiveChangeNotification(int category, const cPolymorphic *details) {
    Enter_Method_Silent();

    if (category == SUBFRAMEIndication) {
        SubframeIndication *sfInd = check_and_cast<SubframeIndication*>(details);
        unsigned tti = sfInd->getTti();

        // downlink scheduling
        SchedDlTriggerReq *triggReq = new SchedDlTriggerReq();
        triggReq->setTti(tti);
        // TODO harq proc information
        nb->fireChangeNotification(SCHED_DL_TRIGGER_REQ, triggReq);

    } else if (category == SCHED_DL_CONFIG_IND) {
        SchedDlConfigInd *cfgInd = check_and_cast<SchedDlConfigInd*>(details);
        unsigned tti = cfgInd->getTti();

        // prepare downlink config request for physical layer
        unsigned pduIndex = 0;
        DlConfigRequest *dlReq = new DlConfigRequest();
        dlReq->setTti(tti);

        // prepare tx request for physical layer (sent only if tx is scheduled)
        TxRequest *txReq = new TxRequest();
        txReq->setTti(tti);

        // check broadcast messages
        for (unsigned i = 0; i < cfgInd->getBldBcastListArraySize(); i++) {
            BuildBcastListElement bcastEl = cfgInd->getBldBcastList(i);
            DlDciListElement dciEl = bcastEl.getDci();

            // notify RLC layer of transmission opportunity
            if (dciEl.getRv() == 0) {
                EV << "LTE-MACenb: Sending RLC_TX_OPPORTUNITY for message with id = " << (unsigned)bcastEl.getIndex() << ".\n";
                RlcTxOpportunity *txOpp = new RlcTxOpportunity();
                txOpp->setIndex(bcastEl.getIndex());
                nb->fireChangeNotification(RLC_TX_OPPORTUNITY, txOpp);
            } else { // check for packet in buffer that should be retransmitted
                MACBuffer::iterator i = buffer.find(bcastEl.getIndex());
                if (i != buffer.end()) {
                    MACServiceDataUnit *sdu = i->second;
                    MACProtocolDataUnit *pdu = MACUtils().createTransparentPDU(DLSCH0, sdu->dup());
                    EV << "LTE-MACenb: Resending message with id = " << sdu->getKind() << " to lower layer.\n";
                    this->send(pdu, gate("lowerLayerOut"));
                }
            }

            // add pdu information to downlink request notification
            if (bcastEl.getIndex() == MIB) {
                DlConfigRequestBchPdu *dlReqBCHpdu = new DlConfigRequestBchPdu();
                dlReqBCHpdu->setPduIndex(pduIndex);
                dlReq->pushPdu(dlReqBCHpdu);
            } else {
                DlConfigRequestDciDlPdu *dlReqDCIpdu = new DlConfigRequestDciDlPdu();
                dlReqDCIpdu->setRnti(dciEl.getRnti());
                dlReqDCIpdu->setRntiType(SiRnti);
                dlReq->pushPdu(dlReqDCIpdu);

                DlConfigRequestDlschPdu *dlReqDLSCHpdu = new DlConfigRequestDlschPdu();
                dlReqDLSCHpdu->setPduIndex(pduIndex);
                dlReqDLSCHpdu->setRnti(dciEl.getRnti());
                dlReq->pushPdu(dlReqDLSCHpdu);
            }

            // add tx pdu information to tx request notification
            TxRequestPdu txReqPdu = TxRequestPdu();
            txReqPdu.setPduIndex(pduIndex++);
            txReqPdu.setTlvsArraySize(1);
            txReqPdu.setTlvs(0, createPhyCommandTlv(0, 0, bcastEl.getIndex()));

            txReq->setPdusArraySize(pduIndex);
            txReq->setPdus(pduIndex - 1, txReqPdu);
        }

        nb->fireChangeNotification(DLCONFIGRequest, dlReq);

        if (pduIndex > 0)
            nb->fireChangeNotification(TXRequest, txReq);
    }
}
