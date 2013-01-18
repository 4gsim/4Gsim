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

#include "PDCP.h"
#include "RRCMessage.h"
#include "RRCClassDefinitions.h"
#include "LTEControlInfo_m.h"

Define_Module(PDCP);

PDCP::PDCP() {
    // TODO Auto-generated constructor stub

}

PDCP::~PDCP() {
    // TODO Auto-generated destructor stub
}

void PDCP::initialize(int stage) {
    if (stage == 4) {
//        PDCPDataPduCPlane *msg = new PDCPDataPduCPlane();
//        msg->setSn(uniform(0, 32));
//        msg->setByteLength(5);
//        unsigned count = htonl(uniform(0, 65254));
//        unsigned char bearer = 0x18;
//        bool direction = 0;

//        msg->setMacI(calcMacI(count, bearer, direction, msg));
    }
}

void PDCP::handleMessage(cMessage *msg) {
    /*
     * PDCP is used for SRBs and DRBs mapped on DCCH and DTCH type of logical channels.
     * PDCP is not used for any other type of logical channels.
     */
    if (msg->arrivedOn("upperLayerIn")) {
        LTEControlInfo *ctrl = check_and_cast<LTEControlInfo*>(msg->getControlInfo());
        if (ctrl->getChannel() == ULCCCH) {
            this->send(msg, gate("lowerLayerOut"));
        }
    }
}

