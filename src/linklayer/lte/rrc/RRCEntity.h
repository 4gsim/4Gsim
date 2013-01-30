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

#ifndef RRCENTITY_H_
#define RRCENTITY_H_

#include <omnetpp.h>
#include "RRCClassDefinitions.h"
#include "ASNTypes.h"

class RRC;
class Subscriber;

enum RRCState {
    UE_RRC_CONNECTED        = FSM_Steady(0),
    UE_RRC_IDLE             = FSM_Steady(1),
    EUTRAN_RRC_CONNECTED    = FSM_Steady(2),
    EUTRAN_RRC_IDLE         = FSM_Steady(3),
};

enum RRCEvent {
    ConnectionEstablishment,
    ConnectionRelease
};

using namespace rrc;

class RRCEntity {
private:
    bool nodeType;

    cFSM *fsm;

    RRC *module;

    Subscriber *ownerp;
public:
    RRCEntity();
    RRCEntity(bool nodeType);
    virtual ~RRCEntity();

    void init();

    void setOwner(Subscriber *ownerp);
    void setModule(RRC *module);

    RRC *getModule();
    Subscriber *getOwner();
    int getState() { return fsm->getState(); }
    cFSM *getFSM() { return fsm; }

    void performStateTransition(RRCEvent event);
    const char *stateName(int state) const;
    const char *eventName(int event);

    void sendRRCConnectionRequest();
    void sendRRCConnectionSetup();
    void processRRCConnectionRequest(RRCConnectionRequest *rrcOnnReq);

    /*
     * Method for printing information about RRC entity for a subscriber.
     */
    std::string info(int tabs) const;
};

#endif /* RRCENTITY_H_ */
