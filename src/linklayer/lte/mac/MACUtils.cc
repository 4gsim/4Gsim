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

#include "MACUtils.h"

MACUtils::MACUtils() {

}

MACUtils::~MACUtils() {

}

MACSubHeaderUlDl *MACUtils::createHeaderUlDl(unsigned char lcid) {
    MACSubHeaderUlDl *header = new MACSubHeaderUlDl();
    header->setLcid(lcid);
    return header;
}

MACSubHeaderRar *MACUtils::createHeaderRar(bool t, unsigned char rapidOrBi) {
    MACSubHeaderRar *header = new MACSubHeaderRar();
    header->setT(t);
    header->setRapidOrBi(rapidOrBi);
    return header;
}

MACRandomAccessResponse *MACUtils::createRAR(unsigned short timingAdvCmd, unsigned ulGrant, unsigned short tempCRnti) {
    MACRandomAccessResponse *rar = new MACRandomAccessResponse();
    rar->setTmAdvCmd(timingAdvCmd);
    rar->setUlGrant(ulGrant);
    rar->setTmpCRnti(tempCRnti);
    rar->setByteLength(6);
    return rar;
}
