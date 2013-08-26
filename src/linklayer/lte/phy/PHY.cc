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
#include "RRC.h"

PHY::PHY() : rs(this->getId()) {
	// TODO Auto-generated constructor stub
    sfn = 0;
    sf = 0;
    symbolTimer = NULL;
    symb = 0;
    slot = 0;

    nRBsc = 12;
    nDLsymb = 7;

    nDLrb = 255;
    ncp = 255;
    n1id = 255;
    n2id = 255;
    nCellId = 65535;

    symbPeriod = 1e-3 / nDLsymb;

    dlSubframe = NULL;
    dlBuffer = NULL;
}

PHY::~PHY() {
	// TODO Auto-generated destructor stub
    if (symbolTimer != NULL) {
        if (symbolTimer->getContextPointer() != NULL)
            this->cancelEvent(symbolTimer);
        delete symbolTimer;
    }

    if (dlSubframe) {
    	delete [] dlSubframe;
    }

    if (dlBuffer) {
    	for (unsigned char l = 0; l < nDLsymb * 2; l++)
    		delete [] dlBuffer[l];
    	delete [] dlBuffer;
    }
}

void PHY::initialize(int stage) {
	ChannelAccess::initialize(stage);

    if (stage == 4) {
        symbolTimer = new cMessage("SYMB-TIMER");
        symbolTimer->setContextPointer(this);
        this->scheduleAt(simTime(), symbolTimer);
    }
}

void PHY::handleMessage(cMessage *msg) {
    if (msg->isSelfMessage()) {

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
            		if (cfgReq->getTlvs(i).getTag() == SfnSf) {
            			sfn = cfgReq->getTlvs(i).getValue() / 10;
            			sf = cfgReq->getTlvs(i).getValue() % 10;
            		}
                    if (cfgReq->getTlvs(i).getTag() == DlCyclicPrefixType) {
                        ncp = cfgReq->getTlvs(i).getValue() == RRC_CP_NORMAL ? PHY_CP_NORMAL : PHY_CP_EXTENDED;
                    }
                    if (cfgReq->getTlvs(i).getTag() == DlChannelBandwith) {
                        nDLrb = cfgReq->getTlvs(i).getValue();
                    }
                    if (cfgReq->getTlvs(i).getTag() == PhysicalCellId) {
                        nCellId = cfgReq->getTlvs(i).getValue();
                        n1id = nCellId / 3;
                        n2id = nCellId % 3;
                    }
            	}
                ConfigResponse *cfgResp = new ConfigResponse();
                cfgResp->setErrorCode(MsgOk);
                nb->fireChangeNotification(CONFIGResponse, cfgResp);
            }
            break;
        }
        case RUNNING: {
            if (category == STARTRequest) {
            	dlSubframe = new PHYSymbol*[nDLsymb * 2];
            	for (unsigned char i = 0; i < nDLsymb * 2; i++)
            		dlSubframe[i] = NULL;

            	dlBuffer = new PHYFramePtr*[nDLsymb * 2];
            	for (unsigned char l = 0; l < nDLsymb * 2; l++)
            		dlBuffer[l] = new PHYFramePtr[nRBsc * nDLrb];
            	for (unsigned char l = 0; l < nDLsymb * 2; l++)
            		for (unsigned short k = 0; k < nRBsc * nDLrb; k++)
            			dlBuffer[l][k] = NULL;

                this->cancelEvent(symbolTimer);
                this->scheduleAt(simTime(), symbolTimer);
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
