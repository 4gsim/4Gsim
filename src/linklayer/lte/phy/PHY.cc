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

#include "PHY.h"

PHY::PHY() : rs(this->getId()) {
	// TODO Auto-generated constructor stub
    tti = 0;
    ttiTimer = NULL;
}

PHY::~PHY() {
	// TODO Auto-generated destructor stub
}

void PHY::initialize(int stage) {
	ChannelAccess::initialize(stage);

    if (stage == 4) {
        nb = NotificationBoardAccess().get();

        nb->subscribe(this, PARAMRequest);
        nb->subscribe(this, CONFIGRequest);
        nb->subscribe(this, STARTRequest);
        nb->subscribe(this, TXRequest);

        ttiTimer = new cMessage("TTI-TIMER");
        ttiTimer->setContextPointer(this);
    }
}

void PHY::handleMessage(cMessage *msg) {
    if (msg->isSelfMessage()) {
        if (msg == ttiTimer) {
        	sendBufferedData();

        	tti++;

            SubframeIndication *sfInd = new SubframeIndication();
            sfInd->setTti(tti);
            nb->fireChangeNotification(SUBFRAMEIndication, sfInd);

            this->cancelEvent(ttiTimer);
            this->scheduleAt(simTime() + TTI_VALUE, ttiTimer);
        }
    } else {
    	if (msg->arrivedOn("upperLayerIn")) {
    		handleUpperMessage(msg);
    	} else {
    		handleRadioMessage(msg);
    	}
    }
}

const char *PHY::stateName(int state) {
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

const char *PHY::eventName(int event) {
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

void PHY::stateEntered(int category, const cPolymorphic *details) {
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
            	ConfigRequest *cfgReq = check_and_cast<ConfigRequest*>(details);
            	for (unsigned i = 0; i < cfgReq->getTlvsArraySize(); i++) {
            		if (cfgReq->getTlvs(i).getTag() == SfnSf)
            			this->tti = cfgReq->getTlvs(i).getValue();
            	}
                ConfigResponse *cfgResp = new ConfigResponse();
                cfgResp->setErrorCode(MsgOk);
                nb->fireChangeNotification(CONFIGResponse, cfgResp);
            }
            break;
        }
        case RUNNING: {
            if (category == STARTRequest) {
                this->cancelEvent(ttiTimer);
                this->scheduleAt(simTime() + TTI_VALUE, ttiTimer);
            }
            break;
        }
        default:
            EV << "LTE-PHYenb: Unknown state.\n";
            break;
    }
}

void PHY::receiveChangeNotification(int category, const cPolymorphic *details) {
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
                    EV << "LTE-PHY: Received unexpected event.\n";
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
                    EV << "LTE-PHY: Received unexpected event.\n";
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
//                default:
//                    EV << "LTE-PHY: Received unexpected event.\n";
//                    break;
            }
            break;
        default:
            EV << "LTE-PHY: Unknown state.\n";
            break;
    }

//    if (oldState != fsm.getState())
//        EV << "LTE-PHY: PSM-Transition: " << stateName(oldState) << " --> " << stateName(fsm.getState()) << "  (event was: " << eventName(category) << ")\n";
//    else
//        EV << "LTE-PHY: Staying in state: " << stateName(fsm.getState()) << " (event was: " << eventName(category) << ")\n";

    stateEntered(category, details);
}
