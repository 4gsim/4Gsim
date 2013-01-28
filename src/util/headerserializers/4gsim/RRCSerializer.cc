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

#include "RRCSerializer.h"
#include "PerEncoder.h"

RRCSerializer::RRCSerializer() {
    // TODO Auto-generated constructor stub

}

RRCSerializer::~RRCSerializer() {
    // TODO Auto-generated destructor stub
}

unsigned RRCSerializer::serialize(RRCMessage *pdu, unsigned char *buf, unsigned bufsize) {
    PerEncoder perEnc = PerEncoder(UNALIGNED);
    SequencePtr sdu = pdu->getSdu();
    perEnc.encodeSequence(*sdu);
    memcpy(buf, perEnc.getBuffer(), bufsize);

    return bufsize;
}

