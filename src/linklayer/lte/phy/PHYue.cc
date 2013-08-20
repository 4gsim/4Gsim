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

#include "PHYue.h"

Define_Module(PHYue);

PHYue::PHYue() : PHY()  {
	start = false;
	delayTimer = NULL;
}

PHYue::~PHYue() {
    if (ttiTimer != NULL) {
        if (ttiTimer->getContextPointer() != NULL)
            this->cancelEvent(ttiTimer);
        delete ttiTimer;
    }

    if (delayTimer != NULL) {
        if (delayTimer->getContextPointer() != NULL)
            this->cancelEvent(delayTimer);
        delete delayTimer;
    }
}

void PHYue::initialize(int stage) {
    // TODO - Generated method body
    PHY::initialize(stage);

    if (stage == 2) {
//        cc->setRadioChannel(myRadioRef, PDSCH);
//        cc->setRadioChannel(myRadioRef, PDSCH0);
//        cc->setRadioChannel(myRadioRef, PDSCH1);
//        cc->setRadioChannel(myRadioRef, PHICH);
//        cc->setRadioChannel(myRadioRef, PBCH);
//        cc->setRadioChannel(myRadioRef, PDCCH);
//        cc->setRadioChannel(myRadioRef, DC);
        cc->setRadioChannel(myRadioRef, Downlink);
    }

    if (stage == 4) {
    	subT = SubscriberTableAccess().get();

        fsm = cFSM("fsm-PHYue");
        fsm.setState(IDLE);

        nb->subscribe(this, ULCONFIGRequest);
        nb->subscribe(this, RACHRequest);

        delayTimer = new cMessage("DELAY-TIMER");
        delayTimer->setContextPointer(this);
        this->scheduleAt(simTime() + 0.01, delayTimer);
    }
}

void PHYue::handleMessage(cMessage *msg) {
	PHY::handleMessage(msg);

	if (msg->isSelfMessage()) {
		if (msg == delayTimer) {
			start = true;
		}
	}
}

void PHYue::handleUpperMessage(cMessage *msg) {

}

void PHYue::handleRadioMessage(cMessage *msg) {
	if (start) {
		PHYFrame *frame = check_and_cast<PHYFrame*>(msg);
		if (frame->getChannelNumber() == Downlink)
			EV << "PHYue: Found DC subcarier at " << simTime() << ".\n";
	}
	delete msg;
//    PhysicalResourceBlock *prb = check_and_cast<PhysicalResourceBlock*>(msg);
//    EV << "LTE-PHYue: Receiving message from ";
//    LTEControlInfo *ctrl = new LTEControlInfo();
//    if (prb->getChannelNumber() == PBCH) {
//    	EV << "BCH.\n";
//        TransportBlock *tb = check_and_cast<TransportBlock*>(prb);
//        ctrl->setChannel(BCH);
//        tb->setControlInfo(ctrl);
//        this->send(tb, gate("upperLayerOut"));
//    } else if (prb->getChannelNumber() == PDCCH) {
//    	EV << "PDCCH.\n";
//        DCIFormat *dci = check_and_cast<DCIFormat*>(prb);
//        if (dci->getRntiType() == RaRnti) {
//        	Subscriber *sub = subT->at(0);
//        	if (sub->getRaRtni() == dci->getRnti()) {
//        		RarIndication *rarInd = new RarIndication();
//        		rarInd->setRnti(dci->getRnti());
//        		rarInd->setTti(tti);
//        		nb->fireChangeNotification(RARIndication, rarInd);
//        	}
//        } else {
//			DlAssignIndication *dlAssignInd = new DlAssignIndication();
//			dlAssignInd->setRnti(dci->getRnti());
////			dlAssignInd->setRntiType(dci->getRntiType());
//			dlAssignInd->setTti(tti);
//			nb->fireChangeNotification(DLASSIGNIndication, dlAssignInd);
//        }
//    } else if (prb->getChannelNumber() == PDSCH0) {
//    	EV << "PDSCH0.\n";
//        TransportBlock *tb = check_and_cast<TransportBlock*>(prb);
//        ctrl->setChannel(DLSCH0);
//        tb->setControlInfo(ctrl);
//        this->send(tb, gate("upperLayerOut"));
//    } else if (prb->getChannelNumber() == PDSCH1) {
//    	EV << "PDSCH1.\n";
//        TransportBlock *tb = check_and_cast<TransportBlock*>(prb);
//        ctrl->setChannel(DLSCH1);
//        tb->setControlInfo(ctrl);
//        this->send(tb, gate("upperLayerOut"));
//    }
}

void PHYue::stateEntered(int category, const cPolymorphic *details) {
	PHY::stateEntered(category, details);

	if (fsm.getState() == RUNNING) {
		if (category == ULCONFIGRequest) {

		} else if (category == RACHRequest) {
			RachRequest *rachReq = check_and_cast<RachRequest*>(details);
			for (unsigned i = 0; i < rachReq->getPreamblesArraySize(); i++) {	// normally it should be only one preamble
				RachPreamble preamble = rachReq->getPreambles(i);
				RAPreamble *raPreamble = new RAPreamble();
				raPreamble->setName("RAPreamble");
				raPreamble->setChannelNumber(PRACH);
				raPreamble->setRnti(preamble.getRnti());
				raPreamble->setRntiType(RaRnti);
				raPreamble->setRapid(preamble.getPreamble());
				this->sendToChannel(raPreamble);
			}
		}
	}
}

void PHYue::sendBufferedData() {

}
