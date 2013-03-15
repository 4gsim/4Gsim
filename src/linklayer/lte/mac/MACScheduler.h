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

#ifndef MACSCHEDULER_H_
#define MACSCHEDULER_H_

#include "MACMessage.h"
#include "LTEFrame_m.h"

class MACScheduler {
private:
//    std::vector<MACProtocolDataUnit*> schMsgs;
    MACProtocolDataUnit *mib;
    MACProtocolDataUnit *sib1;

    unsigned ttiId;

    unsigned dlBandwith;
    unsigned blockSize;

    TransportBlock *getTransportBlock(MACProtocolDataUnit *pdu, int channelNumber, unsigned rntiType, unsigned short rnti);
public:
    MACScheduler();
    virtual ~MACScheduler();

//    void scheduleMessage(unsigned ttiNr, MACProtocolDataUnit* pdu);
//    void addMessage(MACProtocolDataUnit *pdu) { schMsgs.push_back(pdu); }

    void configure(unsigned dlBandwith, unsigned blockSize);

    void setMIB(MACProtocolDataUnit *mib) { this->mib = mib; }
    void setSIB1(MACProtocolDataUnit *sib1) { this->sib1 = sib1; }

    TransportBlock *getMessageToBeSent();
};

#endif /* MACSCHEDULER_H_ */
