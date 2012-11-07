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
#include "MACUtils.h"

MACUtils::MACUtils() {

}

MACUtils::~MACUtils() {

}

MACSubHeaderRar *MACUtils::createHeaderRar(bool e, bool t, unsigned char rapidOrBi) {
    MACSubHeaderRar *header = new MACSubHeaderRar();
    header->setE(e);
    header->setT(t);
    header->setRapidOrBi(rapidOrBi);

    return header;
}

MACServiceDataUnit *MACUtils::createRAR(unsigned short timingAdvCmd, unsigned ulGrant, unsigned short tempCRnti) {
    MACServiceDataUnit *sdu = new MACServiceDataUnit();
    unsigned sduLen = 6;
    char *rar = (char*)calloc(sduLen, sizeof(char));
    char *p = rar;

    *((unsigned short*)p) = htons((timingAdvCmd & 0x07ff) << 4);
    *((unsigned*)p) += ntohl(ulGrant & 0x000fffff);
    p += 4;
    *((unsigned short*)p) = htons(tempCRnti);

    sdu->setValueArraySize(sduLen);
    for (unsigned i = 0; i < sduLen; i++)
        sdu->setValue(i, rar[i]);

    return sdu;
}
