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

#ifndef RLC_H_
#define RLC_H_

#include <omnetpp.h>
#include "RLCTMEntity.h"
#include "INETDefs.h"
#include "NotificationBoard.h"
#include "SchedulerCommand_m.h"

#define RLC_DOWN    0
#define RLC_UP      1

class RLC: public cSimpleModule, INotifiable {
private:
    RLCTMEntity *rTM;
    RLCTMEntity *tTM;

    NotificationBoard *nb;

    virtual void receiveChangeNotification(int category, const cPolymorphic *details);
public:
	RLC();
	virtual ~RLC();

	virtual int numInitStages() const  { return 5; }
	virtual void initialize(int stage);
	virtual void handleMessage(cMessage *msg);

//	void sendMessage(cMessage *msg) { this->send(msg, gate("lowerLayerOut")); }
};

#endif /* RLC_H_ */


