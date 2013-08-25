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
#include "LTEChannelControl.h"

Define_Module(PHYue);

PHYue::PHYue() : PHY()  {
	start = false;
	delayTimer = NULL;
    pbchSubcarriers = 0;
    syncState = NONE;
}

PHYue::~PHYue() {
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

        nb = NotificationBoardAccess().get();

        nb->subscribe(this, PARAMRequest);
        nb->subscribe(this, CONFIGRequest);
        nb->subscribe(this, STARTRequest);
        nb->subscribe(this, TXRequest);
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
		PHYSymbol *symbol = check_and_cast<PHYSymbol*>(msg);
		unsigned char k = 0;
		while (k < symbol->getResArraySize()) {

			// check for PSS
			if (symbol->getRes(k) == PSS) {
				k += 62;
				if (syncState == NONE)
					processPSS(k - 1);
			} else if (symbol->getRes(k) == SSS) {
				k += 62;
				if (syncState == PSS_RECEIVED)
					processSSS(k - 1);
			} else if (symbol->getRes(k) == RS) {
				k++;
				if (syncState == SSS_RECEIVED)
					processReferenceSignal(k - 1);
			} else {
				k++;
			}
		}


//		if (syncState == NONE) {
//            for (unsigned char i = 0; i < symbol->getResArraySize(); i++) {
//                unsigned char re = symbol->getRes(i);
//                if (re == PSS) {
//                    processPSS();
//                    break;
//                }
//            }
//		} else if (syncState == PSS_RECEIVED) {
//            for (unsigned char i = 0; i < symbol->getResArraySize(); i++) {
//                unsigned char re = symbol->getRes(i);
//                if (re == SSS) {
//                    processSSS();
//                    break;
//                }
//            }
//            symb++;
//		} else if (syncState == SSS_RECEIVED || syncState == SYNCHRONIZED) {
//		    if (syncState == SSS_RECEIVED) {
//		        if (symb == 0 || symb == (nDLsymb - 3)) {
//		            unsigned char vShift = nCellId % 6;
//		            unsigned char v = symb == 0 ? 0 : 3;
//		            unsigned char rsOffset = (v + vShift) % 6;
//		            if (symbol->getRes(rsOffset) == RS) {
//		                processReferenceSignal();
//		            }
//		        }
//		    } else {
//		        if (slot == 1 && symb < 4)
//		            processPBCH();
//		    }
//            symb = (symb + 1) % nDLsymb;
//            if (symb == 0) {
//                slot = (slot + 1) % 20;
//                sf = slot / 2;
//
//                if (sf == 0 && sf == 0)
//                    sfn++;
//            }
//		}
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

cMessage *PHYue::getData(unsigned char k) {
    if (dynamic_cast<LTEChannelControl*>(cc) != NULL) {
        return dynamic_cast<LTEChannelControl*>(cc)->getData(k);
    }
    return NULL;
}

void PHYue::processPSS(unsigned char k) {
    cMessage *msg = getData(k);
    if (msg) {
    	EV << "LTE-PHYue: Received Primary Synchronization Signal.\n";
        PSSSignal *pss = check_and_cast<PSSSignal*>(msg);
        n2id = pss->getCellIdInGroup();

        slot = 0;
        symb = 1;
        EV << "LTE-PHYue: Setting slot = " << (unsigned)slot << " and symb = " << (unsigned)symb << ".\n";

        syncState = PSS_RECEIVED;
        delete msg;
    }
}

void PHYue::processSSS(unsigned char k) {
    cMessage *msg = getData(k);
    if (msg) {
    	EV << "LTE-PHYue: Received Secondary Synchronization signal.\n";
        SSSSignal *sss = check_and_cast<SSSSignal*>(msg);

        n1id = sss->getCellGroupId();
        nCellId = 3 * n1id + n2id;

        sf = sss->getSf();  // UE knows the subframe because in reality the sequences for subframe 0 and 5 differ
        slot = sf * 2;
        symb++;
        nDLsymb = symb / 10;
        symb = nDLsymb - 2;
        EV << "LTE-PHYue: Setting number of symbols = " << (unsigned)nDLsymb << ".\n";
        EV << "LTE-PHYue: Resetting slot = " << (unsigned)slot << " and symb = " << (unsigned)symb << ".\n";

        syncState = SSS_RECEIVED;
        delete msg;
    }
}

void PHYue::processReferenceSignal(unsigned char k) {
    cMessage *msg = getData(k);
    if (msg) {
    	EV << "LTE-PHYue: Received Reference Signal.\n";
        ReferenceSignal *refSig = check_and_cast<ReferenceSignal*>(msg);
        if (refSig->getCellId() == nCellId) {
            ncp = refSig->getNcp();
            if (ncp == 1 && (nDLsymb == 7 || nDLsymb == 6))
                nRBsc = 12;
            else if (ncp == 1 && nDLsymb == 3)
                nRBsc = 24;
            syncState = SYNCHRONIZED;
        }
        delete msg;
    }
}

void PHYue::processPBCH() {
    EV << "LTE-PHYue: Processing Physical Broadcast Channel.\n";
//    unsigned char dc = frame->getResArraySize() / 2;
//    for (unsigned char k = dc - 36; k < dc + 36; k++) {
//        if (frame->getRes(k) == PBCH)
//            pbchSubcarriers++;
//    }
//    if (symb == 3 && pbchSubcarriers / 4 == 72) {
//
//        pbchSubcarriers = 0;
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
