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

#include "HARQProcess.h"
#include "LTEControlInfo.h"
#include "MACue.h"

HARQProcess::HARQProcess(MACue *module, unsigned char id) {
    // TODO Auto-generated constructor stub
    this->id = id;
    currTxNb = 0;
    maxTrans = 3;
    this->module = module;
    softBuffer = NULL;
//    buffer = NULL;
}

HARQProcess::~HARQProcess() {
    // TODO Auto-generated destructor stub
}

void HARQProcess::allocate(HarqInformation harqInfo) {
    allocInfos.push_back(harqInfo);
    module->setAllocatedProcess(this);

//    if ((dlAssign->getHarqNo() == HARQ_BCAST_PROC_ID && softBuffer == NULL) || softBuffer == NULL)
//        newTrans = true;
//
//    if (newTrans == true) {
//        softBuffer = tb;
//    } else {
//        // TODO combine tb with softBuffer
//    }
//
//    // TODO attempt to decode...
//
//    if (dlAssign->getHarqNo() == HARQ_BCAST_PROC_ID) {
////        EV << module->timestamp() << "Downlink data transfer for " << tb->getName() << ".\n";
//        module->sendUp(softBuffer, BCCH1);
//        softBuffer = NULL;
//    }
}

void HARQProcess::receiveTransportBlock(TransportBlock *tb) {
    EV << "LTE-HARQProcess id = " << (unsigned)id <<": Receiving transport block.\n";
    bool newTrans = true;

    // TODO -   if the NDI, when provided, has been toggled compared to the value of the previous received transmission corresponding to this TB; or
    // TODO -   if the HARQ process is equal to the broadcast process and if this is the first received transmission for the TB according to the system information schedule indicated by RRC; or
    // TODO -   if this is the very first received transmission for this TB (i.e. there is no previous NDI for this TB):

    if (newTrans == true) {
        softBuffer = tb;
    } else {
        // TODO combine tb with softBuffer
    }

    // TODO attempt to decode...
    // TODO if decoded successfully ...

    if (id == HARQ_BCAST_PROC_ID) {
        LTEControlInfo *ctrl = check_and_cast<LTEControlInfo*>(tb->removeControlInfo());
        MACProtocolDataUnit *pdu = check_and_cast<MACProtocolDataUnit*>(tb->decapsulate());
        MACServiceDataUnit *sdu = check_and_cast<MACServiceDataUnit*>(pdu->decapsulate());
        ctrl->setChannel(BCCH1);
        sdu->setControlInfo(ctrl);

        module->send(sdu, module->gate("upperLayerOut"));
    }
}

//
//void HARQProcess::requestNewTransmission(MACProtocolDataUnit *pdu) {
//    currTxNb = 0;
//
//    currIrv = 0;
//
//    buffer = pdu->dup();
//    MACControlInfo *ctrl = check_and_cast<MACControlInfo*>(pdu->getControlInfo())->dup();
//    buffer->setControlInfo(ctrl);
//
//    harqFeedback = HARQ_FEEDBACK_NACK;
//
//    transmit(pdu);
//
//    if (currTxNb == MAX_NR_OF_TRANS - 1) {
//        delete buffer;
//        buffer = NULL;
//    }
//}
//
//void HARQProcess::transmit(MACProtocolDataUnit *pdu) {
//    int msgId = pdu->getKind();
//    // TODO if there is no measurement gap at the time of the transmission and, in case of retransmission, the retransmission does not collide with a transmission for a MAC PDU obtained from the Msg3 buffer in this TTI:
//    if (module->getMsg3Pdu(msgId) != NULL) {
////        EV << module->timestamp() << "Uplink data transfer for " << pdu->getName() << ".\n";
//        module->sendDown(pdu);
//
//        currIrv++;
//
//        // TODO -    if there is a measurement gap at the time of the HARQ feedback reception for this transmission and if the MAC PDU was not obtained from the Msg3 buffer:
//        // TODO -   set HARQ_FEEDBACK to ACK at the time of the HARQ feedback reception for this transmission.
//
//    }
//}



