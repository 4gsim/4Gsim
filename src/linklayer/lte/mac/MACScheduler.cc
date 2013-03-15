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

#include "MACScheduler.h"
#include "LTEControlInfo_m.h"

MACScheduler::MACScheduler() {
    // TODO Auto-generated constructor stub
    mib = NULL;
    sib1 = NULL;
    dlBandwith = 0;
    blockSize = 0;
}

MACScheduler::~MACScheduler() {
    // TODO Auto-generated destructor stub
}

void MACScheduler::configure(unsigned dlBandwith, unsigned blockSize) {
    this->dlBandwith = dlBandwith;
    this->blockSize = blockSize;
}

TransportBlock *MACScheduler::getTransportBlock(MACProtocolDataUnit *pdu, int channelNumber, unsigned rntiType, unsigned short rnti) {
    TransportBlock *tb = new TransportBlock();
    tb->setName(pdu->getName());
    tb->encapsulate(pdu);
    tb->setChannel(channelNumber);
    tb->setRntiType(rntiType);
    tb->setRnti(rnti);

    return tb;
}

TransportBlock *MACScheduler::getMessageToBeSent() {
    TransportBlock *tb = NULL;
    unsigned prbs[dlBandwith];
    memset(prbs, 0, dlBandwith);

    if (!(ttiId % 10) && mib != NULL) { // MIB send time
        // MIB is sent alone in one transparent MAC PDU
        tb = getTransportBlock(mib, BCH, NoRnti, 0);
//        unsigned k = (dlBandwith * blockSize / 2 - 36) / 12;
//        unsigned limit = k + 6;
//        for (; k < limit; k++)
//            prbs[k] = PBCH;
    }

    return tb;
}

