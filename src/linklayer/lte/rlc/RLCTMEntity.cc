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

#include "RLCTMEntity.h"
#include "RLCMessage_m.h"
#include "RLC.h"
#include "INETDefs.h"
#include "LTEControlInfo_m.h"

RLCTMEntity::RLCTMEntity() {
	// TODO Auto-generated constructor stub

}

RLCTMEntity::~RLCTMEntity() {
	// TODO Auto-generated destructor stub
}

void RLCTMEntity::processMessage(cMessage *msg) {
    // TODO implement transmission buffer
    LTEControlInfo *ctrl = check_and_cast<LTEControlInfo*>(msg->removeControlInfo());
    if (msg->arrivedOn("upperLayerIn")) {
        TMDProtocolDataUnit *pdu = new TMDProtocolDataUnit(msg->getName());
        pdu->encapsulate(PK(msg));
        pdu->setControlInfo(ctrl);
        module->send(pdu, module->gate("lowerLayerOut"));
    } else {
        TMDProtocolDataUnit *pdu = check_and_cast<TMDProtocolDataUnit*>(msg);
        cMessage *encap = pdu->decapsulate();
        encap->setControlInfo(ctrl);
        module->send(encap, module->gate("upperLayerOut"));
        delete pdu;
    }
}

