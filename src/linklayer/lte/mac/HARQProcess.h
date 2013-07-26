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

#ifndef HARQPROCESS_H_
#define HARQPROCESS_H_

#include "MACMessage.h"
#include "PHYCommand.h"
#include "PHYFrame_m.h"

#define HARQ_FEEDBACK_ACK   1
#define HARQ_FEEDBACK_NACK  0

#define MAX_NR_OF_TRANS     3

class MACue;

class HARQProcess {
private:
    unsigned char id;
    TransportBlock *softBuffer;
//    MACProtocolDataUnit *buffer;
    std::vector<HarqInformation> allocInfos;

    unsigned currTxNb;
    unsigned currIrv;
    bool harqFeedback;
    unsigned maxTrans;

    MACue *module;
public:
    HARQProcess(MACue *module, unsigned char id);
    virtual ~HARQProcess();

    void allocate(HarqInformation harqInfo);
    void receiveTransportBlock(TransportBlock *tb);
//
//    MACProtocolDataUnit *getBuffer() { return buffer; }
//
//    void requestNewTransmission(MACProtocolDataUnit *pdu);
//
//    void transmit(MACProtocolDataUnit *pdu);
};

#endif /* HARQPROCESS_H_ */
