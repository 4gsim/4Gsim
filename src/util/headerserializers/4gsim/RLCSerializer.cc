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

#include "RLCSerializer.h"
#include "RRCMessage.h"
#include "RRCSerializer.h"

RLCSerializer::RLCSerializer() {
    // TODO Auto-generated constructor stub

}

RLCSerializer::~RLCSerializer() {
    // TODO Auto-generated destructor stub
}

unsigned RLCSerializer::serialize(RLCProtocolDataUnit *pdu, unsigned char *buf, unsigned bufsize) {
    if (dynamic_cast<TMDProtocolDataUnit*>(pdu)) {
        RRCMessage *rrcMsg = dynamic_cast<RRCMessage*>(pdu->getEncapsulatedPacket());
        if (rrcMsg) {
            RRCSerializer().serialize(rrcMsg, buf, rrcMsg->getByteLength());
        }
    }

    return bufsize;
}
