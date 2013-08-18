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

#ifndef MAC_H_
#define MAC_H_

#include <omnetpp.h>
#include "NotificationBoard.h"
#include "PHYCommand.h"
#include "SchedulerCommand_m.h"
#include "SubscriberTableAccess.h"

class MAC : public cSimpleModule, public INotifiable {
protected:
	SubscriberTable *subT;

    NotificationBoard *nb;

    virtual void receiveChangeNotification(int category, const cPolymorphic *details) {}
public:
    MAC();
    virtual ~MAC();

    virtual int numInitStages() const  { return 5; }

    virtual void initialize(int stage);
    virtual void handleMessage(cMessage *msg);

    virtual void handleUpperMessage(cMessage *msg) {}
    virtual void handleLowerMessage(cMessage *msg) {}
};

#endif /* MAC_H_ */
