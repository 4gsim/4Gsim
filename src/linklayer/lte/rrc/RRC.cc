//
// Copyright (C) 2012 Calin Cerchez
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

#include <platdep/sockets.h>
#include "RRC.h"
#include "MACControlInfo_m.h"
#include "RRCUtils.h"
#include "RRCMessage.h"
#include "SubscriberTableAccess.h"
#include "PerEncoder.h"

Define_Module(RRC);

RRC::RRC() {
	// TODO Auto-generated constructor stub

}

RRC::~RRC() {
	// TODO Auto-generated destructor stub
}

void RRC::initialize(int stage) {
    nb = NotificationBoardAccess().get();
    nb->subscribe(this, NF_RAND_ACCESS_COMPL);

    subT = SubscriberTableAccess().get();

    fsm.setState(RRC_IDLE);
}

void RRC::handleMessage(cMessage *msg) {

}

void RRC::sendDown(int logChannel, int choice, const char *name, AbstractType *payload) {
    using namespace rrc;

    RRCMessage *msg = new RRCMessage(name);

    switch(logChannel) {
        case ULCCCH: {
            ULCCCHMessageType ulccchMessageType = ULCCCHMessageType();
            ULCCCHMessageTypeC1 *c1 = dynamic_cast<ULCCCHMessageTypeC1*>(payload);
            ulccchMessageType.setValue(c1, choice);
            ULCCCHMessage *ulccchMessage = new ULCCCHMessage();
            ulccchMessage->setMessage(ulccchMessageType);
            msg->setSdu(ulccchMessage);
            break;
        }
        default:
            break;
    }
    this->send(msg, gate("lowerLayerOut"));
}

void RRC::sendRRCConnectionRequest() {
    using namespace rrc;
    unsigned tmsi = htons(subT->at(0)->getEmmEntity()->getTmsi());
    InitialUEIdentity initUeId = RRCUtils().createInitialUEIdentity(subT->at(0)->getMmeCode(), (char*)&tmsi);

    RRCConnectionRequestr8IEs *rrcConnReqIes = new RRCConnectionRequestr8IEs(initUeId, EstablishmentCause(mo_Signalling_EstablishmentCause), RRCConnectionRequestr8IEsSpare());
    RRCConnectionRequestCriticalExtensions critExt = RRCConnectionRequestCriticalExtensions();
    critExt.setValue(rrcConnReqIes, RRCConnectionRequestCriticalExtensions::rrcConnectionRequestr8);

    RRCConnectionRequest *rrcConnReq = new RRCConnectionRequest(critExt);

    ULCCCHMessageTypeC1 *c1 = new ULCCCHMessageTypeC1();
    c1->setValue(rrcConnReq, ULCCCHMessageTypeC1::rrcConnectionRequest);

    sendDown(ULCCCH, ULCCCHMessageType::uLCCCHMessageTypeC1, "RRCConnectionRequest", c1);
}

void RRC::performStateTransition(RRCEvent &event) {
    int oldState = fsm.getState();

    switch(oldState) {
        case RRC_IDLE:
            switch(event) {
                case RRC_CONN_EST: {
                    sendRRCConnectionRequest();
                    break;
                }
                default:
                    EV << "RRC: Received unexpected event\n";
                    break;
            }
            break;
        default:
            EV << "RRC: Unknown state\n";
            break;
    }

}

void RRC::receiveChangeNotification(int category, const cPolymorphic *details) {
    Enter_Method_Silent();
    if (category == NF_RAND_ACCESS_COMPL) {
        EV << "RRC: Received NF_RAND_ACCESS_COMPL notification. Processing notification.\n";
        RRCEvent event = RRC_CONN_EST;
        performStateTransition(event);
    }
}


