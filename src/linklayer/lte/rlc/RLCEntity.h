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

#ifndef RLCENTITY_H_
#define RLCENTITY_H_

#include <omnetpp.h>
#include "RLCMessage_m.h"
#include "SchedulerCommand_m.h"

class RLC;

class RLCEntity {
protected:
    RLC *module;

    RlcTxOpportunity *txOpp;
public:
    RLCEntity();
    virtual ~RLCEntity();

    void setModule(RLC *module);

    virtual void handleUpperMessage(RLCServiceDataUnit *sdu) = 0;
    virtual void handleLowerMessage(RLCProtocolDataUnit *pdu) = 0;
    virtual void handleSubframeIndication() = 0;
};

#endif /* RLCENTITY_H_ */
