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

#include "RLCTMEntity.h"
#include "RLC.h"
#include "LTEControlInfo.h"

RLCTMEntity::RLCTMEntity() {
	// TODO Auto-generated constructor stub
	txOpp = NULL;
}

RLCTMEntity::~RLCTMEntity() {
	// TODO Auto-generated destructor stub
}

void RLCTMEntity::handleUpperMessage(RLCServiceDataUnit *sdu) {
	if (txOpp) {
		LTEControlInfo *ctrl = check_and_cast<LTEControlInfo*>(sdu->removeControlInfo());
		TMDProtocolDataUnit *pdu = new TMDProtocolDataUnit(sdu->getName());
		pdu->encapsulate(sdu);
		pdu->setControlInfo(ctrl);
		pdu->setKind(sdu->getKind());

		EV << "LTE-RLC-TM: Transmission opportunity available. Sending the requested message on " << ctrl->getChannelName() << " to lower layer.\n";
		module->send(pdu, module->gate("lowerLayerOut"));
	} else {
	    EV << "LTE-RLC-TM: Buffering received message.\n";
	    buffer.push_back(sdu);
	}
}

void RLCTMEntity::handleLowerMessage(RLCProtocolDataUnit *pdu) {
    LTEControlInfo *ctrl = check_and_cast<LTEControlInfo*>(pdu->removeControlInfo());
    EV << "LTE-RLCTM: Receiving message on channel = " << ctrl->getChannel() << " from lower layer.\n";
    RLCServiceDataUnit *sdu = check_and_cast<RLCServiceDataUnit*>(pdu->decapsulate());
    sdu->setControlInfo(ctrl);
    module->send(sdu, module->gate("upperLayerOut"));
}

void RLCTMEntity::handleTxOpportunity(RlcTxOpportunity *txOpp) {
    EV << "LTE-RLC-TM: Handling RLC_TX_OPPORTUNITY for message with rnti = " << txOpp->getRnti() << " and lcid = " << (unsigned)txOpp->getLcid() << ".\n";
//    unsigned char index = txOpp->getIndex();
    this->txOpp = txOpp;

    if (!buffer.empty()) {
		RLCServiceDataUnit *sdu = buffer.front();
		buffer.pop_front();

		LTEControlInfo *ctrl = check_and_cast<LTEControlInfo*>(sdu->removeControlInfo());
		TMDProtocolDataUnit *pdu = new TMDProtocolDataUnit(sdu->getName());
		pdu->encapsulate(sdu);
		pdu->setControlInfo(ctrl);
		pdu->setKind(sdu->getKind());

		EV << "LTE-RLC-TM: Buffer not empty. Sending the buffered message on " << ctrl->getChannelName() << " to lower layer.\n";
		module->send(pdu, module->gate("lowerLayerOut"));
    }
}

void RLCTMEntity::handleSubframeIndication() {
	if (txOpp) {
		delete txOpp;
		txOpp = NULL;
	}
}
