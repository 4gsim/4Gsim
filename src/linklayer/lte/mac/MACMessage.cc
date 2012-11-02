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

#include "MACMessage.h"

Register_Class(MACProtocolDataUnit);

MACProtocolDataUnit& MACProtocolDataUnit::operator=(const MACProtocolDataUnit& other) {
    MACProtocolDataUnit_Base::operator=(other);

    for (unsigned i = 0; i < other.getSubHdrsArraySize(); i++) {
        this->pushSubHdr(other.subHdrs.at(i)->dup());
    }

    for (unsigned i = 0; i < other.getSdusArraySize(); i++) {
        this->pushSdu(other.sdus.at(i)->dup());
    }

    return *this;
}

MACProtocolDataUnit::~MACProtocolDataUnit() {
    if (this->getSubHdrsArraySize() > 0) {
        while(!subHdrs.empty()) {
            MACSubHeaderPtr subHdr = subHdrs.back();
            subHdrs.pop_back();
            delete subHdr;
        }
    }
    if (this->getSdusArraySize() > 0) {
        while(!sdus.empty()) {
            MACServiceDataUnitPtr sdu = sdus.back();
            sdus.pop_back();
            delete sdu;
        }
    }
}

void MACProtocolDataUnit::setSubHdrsArraySize(unsigned int size) {
     throw new cException(this, "setSubHdrsArraySize() not supported, use pushSubHdr()");
}

unsigned int MACProtocolDataUnit::getSubHdrsArraySize() const {
     return subHdrs.size();
}

void MACProtocolDataUnit::setSdusArraySize(unsigned int size) {
     throw new cException(this, "setSdusArraySize() not supported, use pushSdu()");
}

unsigned int MACProtocolDataUnit::getSdusArraySize() const {
     return sdus.size();
}

void MACProtocolDataUnit::setSubHdrs(unsigned int k, const MACSubHeaderPtr& subHdrs_var) {
     throw new cException(this, "setSubHdrs() not supported, use use pushSubHdr()");
}

MACSubHeaderPtr& MACProtocolDataUnit::getSubHdrs(unsigned int k) {
    MACSubHeaders::iterator i = subHdrs.begin();
    while (k > 0 && i != subHdrs.end())
         (++i, --k);
    return *i;
}

void MACProtocolDataUnit::setSdus(unsigned int k, const MACServiceDataUnitPtr& subHdrs_var) {
     throw new cException(this, "setSdus() not supported, use use pushSdu()");
}

MACServiceDataUnitPtr& MACProtocolDataUnit::getSdus(unsigned int k) {
    MACServDataUnits::iterator i = sdus.begin();
    while (k > 0 && i != sdus.end())
         (++i, --k);
    return *i;
}

//GTPInfoElemPtr GTPMessage::findIe(unsigned char type, unsigned char instance) {
//    if (this->getHeader()->getVersion() == 2) {
//        for (unsigned i = 0; i < this->getIesArraySize(); i++) {
//            GTPInfoElemPtr ie = this->getIes(i);
//            if ((ie->getType() == type) && (ie->getInstance() == instance))
//                return ie;
//        }
//    }
//    return NULL;
//}
//
//std::vector<GTPInfoElemPtr> GTPMessage::findIes(unsigned char type, unsigned char instance) {
//    std::vector<GTPInfoElemPtr> ies;
//    if (this->getHeader()->getVersion() == 2) {
//        for (unsigned i = 0; i < this->getIesArraySize(); i++) {
//            GTPInfoElemPtr ie = this->getIes(i);
//            if ((ie->getType() == type) && (ie->getInstance() == instance))
//                ies.push_back(ie);
//        }
//    }
//    return ies;
//}
//
//void GTPMessage::print() {
//    EV << "===================================================\n";
//    EV << "Version: " << (unsigned)this->getHeader()->getVersion() << endl;
//    EV << "Flags:\n";
//    if (this->getHeader()->getVersion() == GTP_V1) {
//        GTPv1Header *hdr = dynamic_cast<GTPv1Header*>(this->getHeader());
//        EV << "\tProt. Type Flag: " << hdr->getPt() << endl;
//        EV << "\tExt. Flag: " << hdr->getE() << endl;
//        EV << "\tSeq. Nr. Flag: " << hdr->getS() << endl;
//        EV << "\tNPDU Flag: " << hdr->getPn() << endl;
//        EV << "Message Type: " << (unsigned)hdr->getType() << endl;
//        EV << "TEID: " << hdr->getTeid() << endl;
//        if (hdr->getE() || hdr->getE() || hdr->getS()) {
//            EV << "Seq. Nr.: " << hdr->getSeqNr() << endl;
//            EV << "NPDU Nr.: " << (unsigned)hdr->getNpduNr() << endl;
//            EV << "Next Ext. Hdr. Type: " << (unsigned)hdr->getExtNextType() << endl;
//        }
//    } else if (this->getHeader()->getVersion() == GTP_V2) {
//        GTPv2Header *hdr = dynamic_cast<GTPv2Header*>(this->getHeader());
//        EV << "\tPiggyback. Flag: " << hdr->getP() << endl;
//        EV << "\tTEID Flag: " << hdr->getT() << endl;
//        EV << "Message Type: " << (unsigned)hdr->getType() << endl;
//        if (hdr->getT())
//            EV << "TEID: " << hdr->getTeid() << endl;
//        EV << "Seq. Nr.: " << hdr->getSeqNr() << endl;
//    }
//    EV << "===================================================\n";
//}
