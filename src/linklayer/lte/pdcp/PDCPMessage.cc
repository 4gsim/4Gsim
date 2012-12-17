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

#include "PDCPMessage.h"

Register_Class(PDCPDataPduCPlane);

PDCPDataPduCPlane& PDCPDataPduCPlane::operator=(const PDCPDataPduCPlane& other) {
    PDCPDataPduCPlane_Base::operator=(other);

    this->setSdu(other.sdu->dup());

    return *this;
}

PDCPDataPduCPlane::~PDCPDataPduCPlane() {
    delete sdu;
}

void PDCPDataPduCPlane::setSdu(const PDCPSduPtr& sdu) {
    throw new cException(this, "setSdu(const PDCPSduPtr&) not supported, use use setSdu(PDCPSduPtr&)");
}

void PDCPDataPduCPlane::setSdu(PDCPSduPtr& sdu) {
    this->sdu = sdu;
}

PDCPSduPtr& PDCPDataPduCPlane::getSdu() {
    return sdu;
}


