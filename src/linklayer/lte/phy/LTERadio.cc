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

#include "LTERadio.h"
#include "FWMath.h"
#include "PhyControlInfo_m.h"
#include "Radio80211aControlInfo_m.h"
#include "BasicBattery.h"
#include "InterfaceTableAccess.h"
#include "IPv4InterfaceData.h"
#include "LTEFrame_m.h"

Define_Module(LTERadio);

LTERadio::LTERadio() : rs(this->getId()) {
    radioModel = NULL;
    receptionModel = NULL;
}

LTERadio::~LTERadio() {
    delete radioModel;
    delete receptionModel;
}

void LTERadio::initialize(int stage) {

    ChannelAccess::initialize(stage);

    if (stage == 0) {
//    	rs.setChannelNumber((int)par("channelNumber"));
//    	rs.setState(RadioState::IDLE);

    	receptionModel = createReceptionModel();
    	radioModel = createRadioModel();
    } else if (stage == 2) {
        //cc->setRadioChannel(myRadioRef, rs.getChannelNumber());
        int type = (int)par("type");
        if (type == ENB) {
            cc->setRadioChannel(myRadioRef, PRACH);
        }
    }
//    else  if(stage == 4)
//	{
//    	if(rs.getChannelNumber()!=10)
//    	{
//			ift = InterfaceTableAccess().get();
//			InterfaceEntry *entry = new InterfaceEntry(this);
//			IPv4InterfaceData *ipv4data = new IPv4InterfaceData();
//			entry->setIPv4Data(ipv4data);
//			entry->setName("UERadioInterface");
//			entry->setMACAddress(MACAddress::generateAutoAddress());
//			ift->addInterface(entry);
//    	}
//	}


}

void LTERadio::handleMessage(cMessage *msg) {
    if (msg->arrivedOn("radioIn")) {    // from radio interface
        handleRadioMessage(msg);
    } else { // from upper layer
        handleUpperMsg(msg);
    }
}

void LTERadio::sendToRadio(cMessage *msg, int channel) {
    AirFrame *airFrame = new AirFrame(msg->getName());
    airFrame->setChannelNumber(channel);
    airFrame->encapsulate(PK(msg));
    sendToChannel(airFrame);
}

//AirFrame *LTERadio::encapsulatePacket(cPacket *frame) {
////   PhyControlInfo *ctrl = dynamic_cast<PhyControlInfo *>(frame->removeControlInfo());
////
////    // Note: we don't set length() of the AirFrame, because duration will be used everywhere instead
////    AirFrame *airframe = new AirFrame();
////    airframe->setName(frame->getName());
//////    airframe->setPSend(transmitterPower);
////    if (ctrl == NULL) {
////    	airframe->setChannelNumber(rs.getChannelNumber());
////    } else {
////    	airframe->setChannelNumber(ctrl->getChannelNumber());
////    	delete ctrl;
////    }
////    airframe->encapsulate(frame);
//////    airframe->setBitrate(ctrl ? ctrl->getBitrate() : rs.getBitrate());
//////    airframe->setDuration(radioModel->calculateDuration(airframe));
//////    airframe->setSenderPos(getMyPosition());
////
////
//////    EV << "Frame (" << frame->getClassName() << ")" << frame->getName()
//////       << " will be transmitted at " << (airframe->getBitrate()/1e6) << "Mbps\n";
////    return airframe;
//}

void LTERadio::handleUpperMsg(cMessage* msg) {
    LTEPhyCommand *cmd = check_and_cast<LTEPhyCommand*>(msg->getControlInfo());

    switch(cmd->getCommandCode()) {
    case RandomAccessRequest: {
        RandomAccessFrame *frame = new RandomAccessFrame();
        frame->setChannelNumber(cmd->getChannelNumber());
        frame->setRaRnti(cmd->getRaRnti());
        sendToChannel(frame);
        break;
    }
    default:
        EV << "LTERadio: Unknown LTEPhyCommand.\n";
        break;
    }
    delete cmd;
}

void LTERadio::handleRadioMsg(cMessage *msg) {
//	EV << "receiving frame " << airframe->getName() << endl;
//	EV << "reception of frame over, preparing to send packet to upper layer\n";
//	sendUp(airframe);
}

void LTERadio::sendUp(AirFrame *airframe) {
//    cPacket *frame = airframe->decapsulate();
//    PhyControlInfo *ctrl = new PhyControlInfo();
//    ctrl->setChannelNumber(airframe->getChannelNumber());
//    frame->setControlInfo(ctrl);
//
//    EV << "sending up frame " << frame->getName() << endl;
//    if(airframe->getKind()==control)
//    	send(frame, gate("upperLayerOut"));
//    else
//    	send(frame,gate("netOUT"));
//    delete airframe;
}

//void LTERadio::sendDown(AirFrame *airframe) {
////	sendToChannel(airframe);
//}
