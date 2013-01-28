//
// Copyright (C) 2012 Calin Cerchez
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

#ifndef RRC_H_
#define RRC_H_

#include <omnetpp.h>
#include "RRCClassDefinitions.h"
#include "NotificationBoard.h"
#include "ASNTypes.h"
#include "SubscriberTable.h"

enum RRCStates {
    RRC_IDLE,
    RRC_CONNECTED
};

enum RRCEvent {
    RRC_CONN_EST,
    RRC_CONN_REL
};

class RRC : public cSimpleModule, public INotifiable {
private:
    NotificationBoard *nb;

    SubscriberTable *subT;

    virtual void receiveChangeNotification(int category, const cPolymorphic *details);

    void performStateTransition(RRCEvent &event);
public:
	RRC();
	virtual ~RRC();

	cFSM fsm;

	virtual int numInitStages() const  { return 5; }

	void initialize(int stage);
	void handleMessage(cMessage *msg);
	void handleLowerMessage(cMessage *msg);

	void sendRRCConnectionRequest();
	void sendDown(int logChannel, int choice, const char *name, AbstractType *payload);
};

#endif /* RRC_H_ */
