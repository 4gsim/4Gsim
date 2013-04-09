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
#include "LTEConfig.h"

class MACResource {
public:
    MACProtocolDataUnit *pdu;
    int sfn;
    int tti;
    int retrNr;
};

class MACScheduler {
private:
//    std::vector<MACProtocolDataUnit*> schMsgs;
//    MACProtocolDataUnit *mib;
//    MACProtocolDataUnit *sib;

    typedef std::vector<MACResource> MACResources;

    MACResources resources;

//    unsigned ttiId;
//    unsigned sfn;

//    unsigned dlBandwith;
//    unsigned blockSize;

    LTEConfig *lteCfg;

//    TransportBlock *getTransportBlock(MACProtocolDataUnit *pdu);
    void initRandomAccessProcedure();
public:
    MACScheduler();
    virtual ~MACScheduler();

//    void scheduleMessage(unsigned ttiNr, MACProtocolDataUnit* pdu);
//    void addMessage(MACProtocolDataUnit *pdu) { schMsgs.push_back(pdu); }

    void setLTEConfig(LTEConfig *lteCfg) { this->lteCfg = lteCfg; }

//    void setMIB(MACProtocolDataUnit *mib) { this->mib = mib; }
//    void setSIB(MACProtocolDataUnit *sib) { this->sib = sib; }

    TransportBlock *getMessageToBeSent();
    void addMACProtocolDataUnit(MACProtocolDataUnit *pdu, int sfn, int tti, int retrNr);
};

#endif /* MACSCHEDULER_H_ */
