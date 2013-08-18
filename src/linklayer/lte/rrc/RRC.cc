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
#include "LTEControlInfo.h"
#include "RRCUtils.h"
#include "RRCMessage.h"
#include "SubscriberTableAccess.h"
#include "PerEncoder.h"
#include "PHYCommand_m.h"
#include "SchedulerCommand_m.h"

Define_Module(RRC);

//http://my.safaribooksonline.com/book/electrical-engineering/communications-engineering/9780511512667/10-random-access/101_random_access_preamble_for?reader=pf&readerfullscreen=&readerleftmenu=1
//http://4g-lte-world.blogspot.co.at/2012/12/transport-block-size-code-rate-protocol.html
//http://www.roke.co.uk/resources/white-papers/0486-LTE-Radio-Resource.pdf
//http://www.freescale.com/files/wireless_comm/doc/white_paper/LTEPTCLOVWWP.pdf
//http://www.sharetechnote.com/html/BasicCallFlow_LTE.html#6_RRCConnectionRequest

RRC::RRC() {
	// TODO Auto-generated constructor stub

}

RRC::~RRC() {
	// TODO Auto-generated destructor stub
}

void RRC::initialize(int stage) {
    if (stage == 4) {
        subT = SubscriberTableAccess().get();
//        lteCfg = LTEConfigAccess().get();
        nb = NotificationBoardAccess().get();

        lteCtrl = LTEControlAccess().get();
    }
}

void RRC::handleMessage(cMessage *msg) {
    if (msg->isSelfMessage()) {

    } else if (msg->arrivedOn("lowerLayerIn")) {
        handleLowerMessage(msg);
    } else {

    }
}

void RRC::sendDown(int msgId, int logChannel, int choice, const char *name, AbstractType *payload) {
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
        case BCCH0: {
            BCCHBCHMessageType *message = dynamic_cast<BCCHBCHMessageType*>(payload);
            BCCHBCHMessage *bcchbchMessage = new BCCHBCHMessage();
            bcchbchMessage->setMessage(*message);
            msg->setSdu(bcchbchMessage);
            break;
        }
        case BCCH1: {
            BCCHDLSCHMessageType bcchdlschMessageType = BCCHDLSCHMessageType();
            BCCHDLSCHMessageTypeC1 *c1 = dynamic_cast<BCCHDLSCHMessageTypeC1*>(payload);
            bcchdlschMessageType.setValue(c1, choice);
            BCCHDLSCHMessage *blcchdlschMessage = new BCCHDLSCHMessage();
            blcchdlschMessage->setMessage(bcchdlschMessageType);
            msg->setSdu(blcchdlschMessage);
            break;
        }
        default:
            break;
    }
    ctrl->setChannel(logChannel);
    msg->setControlInfo(ctrl);
    msg->setKind(msgId);
    EV << "LTE-RRC: Sending message on " << ctrl->getChannelName() << " to lower layer.\n";
    this->send(msg, gate("lowerLayerOut"));
}

