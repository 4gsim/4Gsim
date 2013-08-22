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

#include "RLC.h"
#include "LTEControlInfo.h"
#include "RLCMessage_m.h"

Define_Module(RLC);

RLC::RLC() {
    tTM = new RLCTMEntity();
    tTM->setModule(this);
    rTM = new RLCTMEntity();
    rTM->setModule(this);
}

RLC::~RLC() {

}

void RLC::initialize(int stage) {
	// TODO - Generated method body
    if (stage == 4) {
        nb = NotificationBoardAccess().get();

        nb->subscribe(this, RLC_TX_OPPORTUNITY);
        nb->subscribe(this, SUBFRAMEIndication);
    }
}

void RLC::handleMessage(cMessage *msg) {
	// TODO - Generated method body
    if (msg->arrivedOn("upperLayerIn")) {
        LTEControlInfo *ctrl = check_and_cast<LTEControlInfo*>(msg->removeControlInfo());
        RLCServiceDataUnit *sdu = new RLCServiceDataUnit(msg->getName());
        EV << "LTE-RLC: Receiving message on channel = " << ctrl->getChannelName() << " from upper layer.\n";

        sdu->encapsulate(PK(msg));
        sdu->setControlInfo(ctrl);
        sdu->setKind(msg->getKind());
        switch (ctrl->getChannel()) {
            case ULCCCH:
            case DLCCCH:
            case BCCH0:
            case BCCH1:
                tTM->handleUpperMessage(sdu);
                break;
            default:
                break;
        }
    } else {
        LTEControlInfo *ctrl = check_and_cast<LTEControlInfo*>(msg->removeControlInfo());
        RLCProtocolDataUnit *pdu = check_and_cast<RLCProtocolDataUnit*>(PK(msg)->decapsulate());
        pdu->setControlInfo(ctrl);
        switch (ctrl->getChannel()) {
            case ULCCCH:
            case DLCCCH:
            case BCCH0:
            case BCCH1:
                tTM->handleLowerMessage(pdu);
                break;
            default:
                break;
        }
    }
}

void RLC::receiveChangeNotification(int category, const cPolymorphic *details) {
    Enter_Method_Silent();

    if (category == RLC_TX_OPPORTUNITY) {
        RlcTxOpportunity *txOpp = check_and_cast<RlcTxOpportunity*>(details);
        if (txOpp->getRnti() == 0 || txOpp->getRnti() == 65535)
            tTM->handleTxOpportunity(txOpp);
    } else if (category == SUBFRAMEIndication) {
    	tTM->handleSubframeIndication();
    }
}
