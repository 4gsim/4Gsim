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
#include "MACSerializer.h"
#include "RLCSerializer.h"

MACSerializer::MACSerializer() {
    // TODO Auto-generated constructor stub

}

MACSerializer::~MACSerializer() {
    // TODO Auto-generated destructor stub
}

unsigned MACSerializer::serializeHeader(MACSubHeader *header, bool isExt, bool isFixed, unsigned short sduLen, unsigned char *buf) {
    unsigned hdrLen = 0;
    unsigned char *p = buf;
    if (dynamic_cast<MACSubHeaderRar*>(header)) {
        MACSubHeaderRar *rarHdr = dynamic_cast<MACSubHeaderRar*>(header);
        *((unsigned char*)(p)) =
                        ((isExt << 7) & 0x80) | ((rarHdr->getT() << 6) & 0x40);
        if (rarHdr->getT()) // BI
            *((unsigned char*)(p)) += rarHdr->getRapidOrBi() & 0x0f;
        else
            *((unsigned char*)(p)) += rarHdr->getRapidOrBi() & 0x3f;
        hdrLen = 1;
    } else if (dynamic_cast<MACSubHeaderUlDl*>(header)) {
        MACSubHeaderUlDl *uldlHdr = dynamic_cast<MACSubHeaderUlDl*>(header);
        *((unsigned char*)(p)) =
                        ((isExt << 5) & 0x20) | (uldlHdr->getLcid() & 0x0f);
        p++;
        if (!isFixed) {
            bool format = sduLen > 129 ? true : false;
            *((unsigned char*)(p)) = ((format << 7) & 0x80);
            if (!format) {
                *((unsigned char*)(p)) += sduLen & 0x007f;
                p++;
            } else {
                *((unsigned short*)(p)) += htons(sduLen & 0x7fff);
                p += 2;
            }
        }
        hdrLen = p - buf;
    }
    return hdrLen;
}

unsigned MACSerializer::serializeServiceDataUnit(MACServiceDataUnit *sdu, unsigned char *buf) {
    unsigned char *p = buf;
    if (dynamic_cast<MACRandomAccessResponse*>(sdu)) {
        MACRandomAccessResponse *rar = check_and_cast<MACRandomAccessResponse*>(sdu);
        *((unsigned short*)p) = htons((rar->getTmAdvCmd() & 0x07ff) << 4);
        *((unsigned*)p) += ntohl(rar->getUlGrant() & 0x000fffff);
        p += 4;
        *((unsigned short*)p) = htons(rar->getTmpCRnti());
    } else {
        RLCProtocolDataUnit *pdu = check_and_cast<RLCProtocolDataUnit*>(sdu->getEncapsulatedPacket());
        p += RLCSerializer().serialize(pdu, p, pdu->getByteLength());
    }
    return sdu->getByteLength();
}

unsigned MACSerializer::serialize(MACProtocolDataUnit *pdu, unsigned char *buf, unsigned bufsize) {
    unsigned msgLen = 0;
    bool isExt = pdu->getSdusArraySize() > 1 ? true : false;
    unsigned i = 0;

    for (i = 0; i < pdu->getSubHdrsArraySize() - 1; i++) {
        msgLen += serializeHeader(pdu->getSubHdrs(i), isExt, false, pdu->getSdus(i)->getByteLength(), buf + msgLen);
    }
    if (pdu->getSubHdrsArraySize() > 0)
        msgLen += serializeHeader(pdu->getSubHdrs(i), isExt, true, pdu->getSdus(i)->getByteLength(), buf + msgLen);

    for (i = 0; i < pdu->getSdusArraySize(); i++)
        msgLen += serializeServiceDataUnit(pdu->getSdus(i), buf + msgLen);

    return msgLen;
}
