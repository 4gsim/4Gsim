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

#include "MAC.h"
#include "LTEPhyCommand_m.h"
#include "LTERadio.h"

Define_Module(MAC);

MAC::MAC() {
    // TODO Auto-generated constructor stub

}

MAC::~MAC() {
    // TODO Auto-generated destructor stub
}

void MAC::initialize(int stage) {
    raRnti = uniform(1, 71);

    if (stage == 4) {
        startRandomAccess();
    }
}

void MAC::startRandomAccess() {
    cMessage *msg = new cMessage("RandomAccessRequest");

    LTEPhyCommand *cmd = new LTEPhyCommand();
    cmd->setChannelNumber(PRACH);
    cmd->setRaRnti(raRnti);
    cmd->setCommandCode(RandomAccessRequest);

    msg->setControlInfo(cmd);

    send(msg, gate("lowerLayerOut"));
}

void MAC::handleMessage(cMessage *msg) {

}

