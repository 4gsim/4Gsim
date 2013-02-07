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

#define HARQ_FEEDBACK_ACK   1
#define HARQ_FEEDBACK_NACK  0

class MAC;

class HARQProcess {
private:
    std::list<MACProtocolDataUnit*> buffer;

    unsigned currTxNb;
    bool harqFeedback;
    unsigned maxTrans;

    MAC *module;
public:
    HARQProcess(MAC *module);
    virtual ~HARQProcess();

    void send(unsigned ulGrant, MACProtocolDataUnit *pdu);
};

#endif /* HARQPROCESS_H_ */
