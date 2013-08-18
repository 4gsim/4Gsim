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

#ifndef PHY_H_
#define PHY_H_

#include <omnetpp.h>
#include "ChannelAccess.h"
#include "NotificationBoard.h"
#include "PHYCommand.h"
#include "RadioState.h"
#include "LTEControlInfo.h"
#include "SchedulerCommand_m.h"
#include "PHYCommand.h"
#include "PHYFrame_m.h"

#define TTI_VALUE   1

enum PHYState {
    IDLE        = FSM_Steady(0),
    CONFIGURED  = FSM_Steady(1),
    RUNNING     = FSM_Steady(2),
};

class PHY : public ChannelAccess {
protected:
    cFSM fsm;

    RadioState rs;

    unsigned tti;
    cMessage *ttiTimer;

    NotificationBoard *nb;

    const char *stateName(int state);
    const char *eventName(int event);

    virtual void receiveChangeNotification(int category, const cPolymorphic *details);

    virtual void stateEntered(int category, const cPolymorphic *details);
public:
	PHY();
	virtual ~PHY();

    virtual int numInitStages() const  { return 5; }
    virtual void initialize(int stage);
    virtual void handleMessage(cMessage *msg);

    virtual void handleUpperMessage(cMessage *msg) = 0;
    virtual void handleRadioMessage(cMessage *msg) = 0;
    virtual void sendBufferedData() = 0;
};

#endif /* PHY_H_ */
