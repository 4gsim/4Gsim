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
#include "LTEControlInfo.h"
#include "MACUtils.h"

Define_Module(MACenb);

MACenb::MACenb() {
    // TODO Auto-generated constructor stub
	msgIds = 0;
}

MACenb::~MACenb() {
    // TODO Auto-generated destructor stub
}

void MACenb::initialize(int stage) {
	MAC::initialize(stage);

    if (stage == 4) {
        nb->subscribe(this, SUBFRAMEIndication);
        nb->subscribe(this, RACHIndication);
        nb->subscribe(this, SCHED_DL_CONFIG_IND);
    }
}

void MACenb::handleLowerMessage(cMessage *msg) {

}

void MACenb::handleUpperMessage(cMessage *msg) {
    LTEControlInfo *ctrl = check_and_cast<LTEControlInfo*>(msg->removeControlInfo());
    EV << "LTE-MACenb: Receiving message on " << ctrl->getChannelName() << " from upper layer.\n";

    MACServiceDataUnit *sdu = new MACServiceDataUnit(msg->getName());
    sdu->encapsulate(PK(msg));
    sdu->setKind(msg->getKind());

    if (ctrl->getChannel() == BCCH0) {
    	MACProtocolDataUnit *pdu = MACUtils().createTransparentPDU(BCH, sdu);
        EV << "LTE-MACenb: Sending message with id = " << pdu->getKind() << " on BCH to lower layer.\n";
        this->send(pdu, gate("lowerLayerOut"));
    } else if (ctrl->getChannel() == BCCH1) {
        EV << "LTE-MACenb: Buffering received message.\n";
        buffer[sdu->getKind()] = sdu;

        MACProtocolDataUnit *pdu = MACUtils().createTransparentPDU(DLSCH0, sdu->dup());
        EV << "LTE-MACenb: Sending message with id = " << pdu->getKind() << " on DLSCH0 to lower layer.\n";
        this->send(pdu, gate("lowerLayerOut"));
    }
}

DlConfigRequestDciDlPdu *MACenb::getDciDlPdu(unsigned char rntiType, DlDciListElement &dciEl) {
	DlConfigRequestDciDlPdu *dlReqDCIpdu = new DlConfigRequestDciDlPdu();
	dlReqDCIpdu->setDciFormat(dciEl.getFormat());
 	dlReqDCIpdu->setRnti(dciEl.getRnti());
 	dlReqDCIpdu->setResAllocType(dciEl.getResAlloc());
 	dlReqDCIpdu->setVrbFlag(dciEl.getVrbFormat());
 	dlReqDCIpdu->setRbCoding(dciEl.getRbBitmap());
 	dlReqDCIpdu->setMcs1(dciEl.getMcs(0));
 	dlReqDCIpdu->setRv1(dciEl.getRv(0));
 	dlReqDCIpdu->setTpc(dciEl.getTpc());
 	dlReqDCIpdu->setTbIndex(dciEl.getTbsIdx());
 	dlReqDCIpdu->setRntiType(rntiType);
 	return dlReqDCIpdu;
}

void MACenb::receiveChangeNotification(int category, const cPolymorphic *details) {
    Enter_Method_Silent();

    if (category == SUBFRAMEIndication) {
        SubframeIndication *sfInd = check_and_cast<SubframeIndication*>(details);
        unsigned char sf = sfInd->getSf();
        unsigned short sfn = sfInd->getSfn();

        // downlink scheduling
        SchedDlTriggerReq *triggReq = new SchedDlTriggerReq();
        triggReq->setSf(sf);
        triggReq->setSfn(sfn);
        // TODO harq proc information
        nb->fireChangeNotification(SCHED_DL_TRIGGER_REQ, triggReq);
//
    } else if (category == SCHED_DL_CONFIG_IND) {
        SchedDlConfigInd *cfgInd = check_and_cast<SchedDlConfigInd*>(details);
        unsigned char sf = cfgInd->getSf();
        unsigned short sfn = cfgInd->getSfn();

        // prepare downlink config request for physical layer
        unsigned pduIndex = 0;
        DlConfigRequest *dlReq = new DlConfigRequest();
        dlReq->setSfn(sfn);
        dlReq->setSf(sf);
        dlReq->setNrPdcchSymb(cfgInd->getNrOfPdcchSymb());

        // prepare tx request for physical layer (sent only if tx is scheduled)
        TxRequest *txReq = new TxRequest();
        txReq->setSfn(sfn);
        txReq->setSf(sf);

        // BCH scheduling
        if (sfn % 4 == 0 && sf == 0) {
        	EV << "LTE-MACenb: Sending RLC_TX_OPPORTUNITY for message with rnti = 0.\n";
            RlcTxOpportunity *txOpp = new RlcTxOpportunity();
            txOpp->setRnti(0);
            nb->fireChangeNotification(RLC_TX_OPPORTUNITY, txOpp);

            // add pdu information to downlink request notification
            DlConfigRequestBchPdu *dlReqBCHpdu = new DlConfigRequestBchPdu();
            dlReqBCHpdu->setPduIndex(pduIndex);
            dlReq->pushPdu(dlReqBCHpdu);

            // add tx pdu information to tx request notification
            TxRequestPdu txReqPdu = TxRequestPdu();
            txReqPdu.setPduIndex(pduIndex++);
            txReqPdu.setMsgKindsArraySize(1);
            txReqPdu.setMsgKinds(0, MIB);

            txReq->setPdusArraySize(pduIndex);
            txReq->setPdus(pduIndex - 1, txReqPdu);
        }

        // SIBx scheduling
        for (unsigned i = 0; i < cfgInd->getBldBcastListArraySize(); i++) {
            BuildBcastListElement bcastEl = cfgInd->getBldBcastList(i);
            DlDciListElement dciEl = bcastEl.getDci();

            // notify RLC layer of transmission opportunity
            if (dciEl.getRv(0) == 0) {
                EV << "LTE-MACenb: Sending RLC_TX_OPPORTUNITY for message with rnti = " << dciEl.getRnti() << ".\n";
                RlcTxOpportunity *txOpp = new RlcTxOpportunity();
                txOpp->setRnti(dciEl.getRnti());
                nb->fireChangeNotification(RLC_TX_OPPORTUNITY, txOpp);
            } else { // check for packet in buffer that should be retransmitted
//                MACBuffer::iterator i = buffer.find(bcastEl.getIndex());
//                if (i != buffer.end()) {
//                    MACServiceDataUnit *sdu = i->second;
//
//                    MACProtocolDataUnit *pdu = MACUtils().createTransparentPDU(DLSCH0, sdu->dup());
//                    EV << "LTE-MACenb: Sending buffered message with id = " << pdu->getKind() << " on DLSCH0 to lower layer.\n";
//                    this->send(pdu, gate("lowerLayerOut"));
//                }
            }

            // add pdu information to downlink request notification
            DlConfigRequestDciDlPdu *dlReqDCIpdu = getDciDlPdu(SiRnti, dciEl);
            dlReq->pushPdu(dlReqDCIpdu);
            DlConfigRequestDlschPdu *dlReqDLSCHpdu = new DlConfigRequestDlschPdu();
            dlReqDLSCHpdu->setPduIndex(pduIndex);
            dlReqDLSCHpdu->setRnti(dciEl.getRnti());
        	dlReqDLSCHpdu->setResAlloctype(dciEl.getResAlloc());
        	dlReqDLSCHpdu->setVrbFlag(dciEl.getVrbFormat());
        	dlReqDLSCHpdu->setRbCoding(dciEl.getRbBitmap());
        	dlReqDLSCHpdu->setRv(dciEl.getRv(0));
        	dlReqDLSCHpdu->setTbNumber(1);
            dlReq->pushPdu(dlReqDLSCHpdu);

            // add tx pdu information to tx request notification
            TxRequestPdu txReqPdu = TxRequestPdu();
            txReqPdu.setPduIndex(pduIndex++);
            txReqPdu.setMsgKindsArraySize(1);
            txReqPdu.setMsgKinds(0, bcastEl.getIndex());

            txReq->setPdusArraySize(pduIndex);
            txReq->setPdus(pduIndex - 1, txReqPdu);
        }
//
////        // check random access response message
//        for (unsigned i = 0; i < cfgInd->getBldRarListArraySize(); i++) {
//        	BuildRarListElement rarEl = cfgInd->getBldRarList(i);
//        	Subscriber *sub = subT->findSubscriberForRnti(TempCRnti, rarEl.getRnti());
//
//        	if (sub) {
//        		// create MAC RAR PDU
//        		MACRandomAccessResponse *rarSdu = MACUtils().createRAR(0, rarEl.getGrant(), sub->getRnti());
//        		MACProtocolDataUnit *pdu = MACUtils().createRandomAccessPDU(true, sub->getRapid(), rarSdu);
//
//                // add pdu information to downlink request notification
//                DlConfigRequestDciDlPdu *dlReqDCIpdu = new DlConfigRequestDciDlPdu();
//                dlReqDCIpdu->setRnti(sub->getRaRtni());
//                dlReqDCIpdu->setRntiType(RaRnti);
//                dlReq->pushPdu(dlReqDCIpdu);
//
//                DlConfigRequestDlschPdu *dlReqDLSCHpdu = new DlConfigRequestDlschPdu();
//                dlReqDLSCHpdu->setPduIndex(pduIndex);
//                dlReqDLSCHpdu->setRnti(sub->getRaRtni());
//                dlReq->pushPdu(dlReqDLSCHpdu);
//
//                // add tx pdu information to tx request notification
//                TxRequestPdu txReqPdu = TxRequestPdu();
//                txReqPdu.setPduIndex(pduIndex++);
//                txReqPdu.setMsgKindsArraySize(1);
//                txReqPdu.setMsgKinds(0, rarEl.getRnti());	// tempCRnti will also identify the message in phy layer
//
//                txReq->setPdusArraySize(pduIndex);
//                txReq->setPdus(pduIndex - 1, txReqPdu);
//
//                EV << "LTE-MACenb: Sending message with id = " << pdu->getKind() << " on DLSCH1 to lower layer.\n";
//                this->send(pdu, gate("lowerLayerOut"));
//        	}
//        }
//
        nb->fireChangeNotification(DLCONFIGRequest, dlReq);

        if (pduIndex > 0)
            nb->fireChangeNotification(TXRequest, txReq);

        delete dlReq;
        delete txReq;

    } else if (category == RACHIndication) {
    	// TODO check RACH type

    	RachIndication *rachInd = check_and_cast<RachIndication*>(details);
    	for (unsigned i = 0; i < rachInd->getPreamblesArraySize(); i++) {	// normally it should be only one preamble
    		RachPreamble preamble = rachInd->getPreambles(i);
    		unsigned short tempCRnti = uniform(0, 65523);
    		EV << "LTE-MACenb: Received RACHIndication for preamble with id = " << (unsigned)preamble.getPreamble() << " and RA-RNTI = " << preamble.getRnti() << ". Creating new subscriber.\n";

    		// subscriber creation
    		Subscriber *sub = new Subscriber();
    		sub->setRaRnti(preamble.getRnti());
    		sub->setRapid(preamble.getPreamble());
    		sub->setRntiType(TempCRnti);
    		sub->setRnti(tempCRnti);
    		subT->push_back(sub);

    		// scheduler configuration
    		SchedDlRachInfoReq *rachReq = new SchedDlRachInfoReq();
    		rachReq->setTti(rachInd->getTti());
    		rachReq->setRachListArraySize(1);
    		RachListElement rachEl = RachListElement();
    		rachEl.setRnti(tempCRnti);
    		rachReq->setRachList(0, rachEl);
    		nb->fireChangeNotification(SCHED_DL_RACH_INFO_REQ, rachReq);
    	}
    }
}
