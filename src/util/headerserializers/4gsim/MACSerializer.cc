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

#include "MACSerializer.h"

MACSerializer::MACSerializer() {
    // TODO Auto-generated constructor stub

}

MACSerializer::~MACSerializer() {
    // TODO Auto-generated destructor stub
}

unsigned MACSerializer::serializeHeader(MACSubHeader *header, unsigned char *buf) {
    unsigned hdrLen = 0;
    if (dynamic_cast<MACSubHeaderRar*>(header)) {
        MACSubHeaderRar *rarHdr = dynamic_cast<MACSubHeaderRar*>(header);
        *((unsigned char*)(buf)) =
                        ((rarHdr->getE() << 7) & 0x80) | ((rarHdr->getT() << 6) & 0x40);
        if (rarHdr->getT()) // BI
            *((unsigned char*)(buf)) += rarHdr->getRapidOrBi() & 0x0f;
        else
            *((unsigned char*)(buf)) += rarHdr->getRapidOrBi() & 0x3f;
        hdrLen = 1;
    }
    return hdrLen;
}

unsigned MACSerializer::serializeServiceDataUnit(MACServiceDataUnit *sdu, unsigned char *buf) {
    unsigned char *p = buf;
    for (unsigned i = 0; i < sdu->getValueArraySize(); i++)
        p[i] = sdu->getValue(i);
    return sdu->getValueArraySize();
}

unsigned MACSerializer::serialize(MACProtocolDataUnit *pdu, unsigned char *buf, unsigned bufsize) {
    unsigned msgLen = 0;

    for (unsigned i = 0; i < pdu->getSubHdrsArraySize(); i++)
        msgLen += serializeHeader(pdu->getSubHdrs(i), buf + msgLen);

    for (unsigned i = 0; i < pdu->getSdusArraySize(); i++)
        msgLen += serializeServiceDataUnit(pdu->getSdus(i), buf + msgLen);

    return msgLen;
}
