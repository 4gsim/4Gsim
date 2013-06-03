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
#include "MAC.h"
#include "MACControlInfo_m.h"

HARQProcess::HARQProcess(MAC *module) {
    // TODO Auto-generated constructor stub
    currTxNb = 0;
    maxTrans = 3;
    this->module = module;
    softBuffer = NULL;
    buffer = NULL;
}

HARQProcess::~HARQProcess() {
    // TODO Auto-generated destructor stub
}

void HARQProcess::allocate(TransportBlock *tb, DownlinkAssignment *dlAssign) {
    bool newTrans = false;

    if ((dlAssign->getHarqNo() == HARQ_BCAST_PROC_ID && softBuffer == NULL) || softBuffer == NULL)
        newTrans = true;

    if (newTrans == true) {
        softBuffer = tb;
    } else {
        // TODO combine tb with softBuffer
    }

    // TODO attempt to decode...

    if (dlAssign->getHarqNo() == HARQ_BCAST_PROC_ID) {
//        EV << module->timestamp() << "Downlink data transfer for " << tb->getName() << ".\n";
        module->sendUp(softBuffer, BCCH1);
        softBuffer = NULL;
    }
}

void HARQProcess::requestNewTransmission(MACProtocolDataUnit *pdu) {
    currTxNb = 0;

    currIrv = 0;

    buffer = pdu->dup();
    MACControlInfo *ctrl = check_and_cast<MACControlInfo*>(pdu->getControlInfo())->dup();
    buffer->setControlInfo(ctrl);

    harqFeedback = HARQ_FEEDBACK_NACK;

    transmit(pdu);

    if (currTxNb == MAX_NR_OF_TRANS - 1) {
        delete buffer;
        buffer = NULL;
    }
}

void HARQProcess::transmit(MACProtocolDataUnit *pdu) {
    int msgId = pdu->getKind();
    // TODO if there is no measurement gap at the time of the transmission and, in case of retransmission, the retransmission does not collide with a transmission for a MAC PDU obtained from the Msg3 buffer in this TTI:
    if (module->getMsg3Pdu(msgId) != NULL) {
//        EV << module->timestamp() << "Uplink data transfer for " << pdu->getName() << ".\n";
        module->sendDown(pdu);

        currIrv++;

        // TODO -    if there is a measurement gap at the time of the HARQ feedback reception for this transmission and if the MAC PDU was not obtained from the Msg3 buffer:
        // TODO -   set HARQ_FEEDBACK to ACK at the time of the HARQ feedback reception for this transmission.

    }
}



