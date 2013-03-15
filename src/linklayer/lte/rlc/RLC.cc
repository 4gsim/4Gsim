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

#include "RLC.h"
#include "LTEControlInfo_m.h"

Define_Module(RLC);

RLC::RLC() {
    tTM = new RLCTMEntity();
    tTM->setModule(this);
    rTM = new RLCTMEntity();
    rTM->setModule(this);
}

RLC::~RLC() {

}

void RLC::initialize() {
	// TODO - Generated method body
}

void RLC::handleMessage(cMessage *msg) {
	// TODO - Generated method body
    LTEControlInfo *ctrl = check_and_cast<LTEControlInfo*>(msg->getControlInfo());
    switch (ctrl->getChannel()) {
        case ULCCCH:
        case DLCCCH:
        case BCCH0:
        case BCCH1:
            tTM->processMessage(msg);
            break;
        default:
            break;
    }
}
