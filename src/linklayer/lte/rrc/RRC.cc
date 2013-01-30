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
#include "LTEControlInfo_m.h"
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
    if (stage == 4) {
        subT = SubscriberTableAccess().get();

        if (!strncmp(this->getParentModule()->getComponentType()->getName(), "UE", 2)) {
            nodeType = UE_NODE_TYPE;
            Subscriber *sub = subT->at(0);
            sub->initRrcEntity(nodeType);
            RRCEntity *rrc = sub->getRrcEntity();
            rrc->setModule(this);
            rrc->performStateTransition(ConnectionEstablishment);
        } else
            nodeType = ENB_NODE_TYPE;
    }
}

void RRC::handleMessage(cMessage *msg) {
    if (msg->arrivedOn("lowerLayerIn")) {
        handleLowerMessage(msg);
    }
}

void RRC::handleLowerMessage(cMessage *msg) {
    RRCMessage *rrcMsg = check_and_cast<RRCMessage*>(msg);
    LTEControlInfo *ctrl = check_and_cast<LTEControlInfo*>(msg->getControlInfo());
    switch(ctrl->getChannel()) {
    case ULCCCH: {
        SequencePtr seq = rrcMsg->getSdu();
        ULCCCHMessage *ulccchMessage = static_cast<ULCCCHMessage*>(seq);
        ULCCCHMessageType ulccchMessageType = ulccchMessage->getMessage();
        if (ulccchMessageType.getChoice() == ULCCCHMessageType::uLCCCHMessageTypeC1) {
            ULCCCHMessageTypeC1 *c1 = static_cast<ULCCCHMessageTypeC1*>(ulccchMessageType.getValue());
            if (c1->getChoice() == ULCCCHMessageTypeC1::rrcConnectionRequest) {
                RRCConnectionRequest *rrcConnReq = static_cast<RRCConnectionRequest*>(c1->getValue());
                RRCConnectionRequestCriticalExtensions critExt = rrcConnReq->getRRCConnectionRequestCriticalExtensions();
                if (critExt.getChoice() == RRCConnectionRequestCriticalExtensions::rrcConnectionRequestr8) {
                    RRCConnectionRequestr8IEs *rrcConnReqIes = static_cast<RRCConnectionRequestr8IEs*>(critExt.getValue());
                    InitialUEIdentity initUeId = rrcConnReqIes->getUeIdentity();
                    if (initUeId.getChoice() == InitialUEIdentity::initialUEIdentityRandomValue) {
                        Subscriber *sub = new Subscriber();
                        sub->initRrcEntity(nodeType);
                        RRCEntity *rrc = sub->getRrcEntity();
                        rrc->setModule(this);
                        rrc->processRRCConnectionRequest(rrcConnReq);
                        subT->push_back(sub);
                    }
                }
            }
        }
        break;
    }
    default:
        break;
    }
}

void RRC::sendDown(int logChannel, int choice, const char *name, AbstractType *payload) {
//    using namespace rrc;

    RRCMessage *msg = new RRCMessage(name);
    LTEControlInfo *ctrl = new LTEControlInfo();

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
        case DLCCCH: {
            DLCCCHMessageType dlccchMessageType = DLCCCHMessageType();
            DLCCCHMessageTypeC1 *c1 = dynamic_cast<DLCCCHMessageTypeC1*>(payload);
            dlccchMessageType.setValue(c1, choice);
            DLCCCHMessage *dlccchMessage = new DLCCCHMessage();
            dlccchMessage->setMessage(dlccchMessageType);
            msg->setSdu(dlccchMessage);
            break;
        }
        default:
            break;
    }
    ctrl->setChannel(logChannel);
    msg->setControlInfo(ctrl);
    this->send(msg, gate("lowerLayerOut"));
}

//void RRC::processRRCConnectionRequest(RRCConnectionRequest *rrcConnReq) {
//
//
////    Subscriber *sub = subT->findSubscriberForChannel(ctrl->getChannelNumber());
////
////    sub = new Subscriber();
////    sub->initEntities(appType);
////    // only dummy PDN connection to store the UE bearer contexts
////    PDNConnection *conn = new PDNConnection();
////    conn->setOwner(sub->getEsmEntity());
////    sub->getEsmEntity()->addPDNConnection(conn, true);
////    sub->setChannelNr(ctrl->getChannelNumber());
////    sub->setEnbId(subT->genEnbId());
////    sub->setMmeId(0);
////    sub->setStatus(SUB_PENDING);
////    subT->push_back(sub);
//}
