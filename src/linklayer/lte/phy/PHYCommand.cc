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

#include "PHYCommand.h"

PhyCommandTlv createPhyCommandTlv(unsigned tag, unsigned length, unsigned value) {
    PhyCommandTlv tlv = PhyCommandTlv();
    tlv.setTag(tag);
    tlv.setLength(length);
    tlv.setValue(value);
    return tlv;
}

Register_Class(DlConfigRequest);

DlConfigRequest& DlConfigRequest::operator=(const DlConfigRequest& other) {
    DlConfigRequest_Base::operator=(other);

    for (unsigned i = 0; i < other.getPdusArraySize(); i++) {
        this->pushPdu(other.pdus.at(i)->dup());
    }

    return *this;
}

DlConfigRequest::~DlConfigRequest() {
    if (this->getPdusArraySize() > 0) {
        while(!pdus.empty()) {
            DlConfigRequestPduPtr pdu = pdus.back();
            pdus.pop_back();
            delete pdu;
        }
    }
}

void DlConfigRequest::setPdusArraySize(unsigned int size) {
     throw new cException(this, "setPduArraySize() not supported, use pushPdu()");
}

unsigned int DlConfigRequest::getPdusArraySize() const {
     return pdus.size();
}

void DlConfigRequest::setPdus(unsigned int k, const DlConfigRequestPduPtr& pdus_var) {
     throw new cException(this, "setPdus() not supported, use use pushPdu()");
}

DlConfigRequestPduPtr& DlConfigRequest::getPdus(unsigned int k) {
    DlConfigRequestPdus::iterator i = pdus.begin();
    while (k > 0 && i != pdus.end())
         (++i, --k);
    return *i;
}
