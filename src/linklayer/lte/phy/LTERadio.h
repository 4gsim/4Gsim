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

#ifndef LTERADIO_H_
#define LTERADIO_H_

#include "NotificationBoard.h"
#include "ChannelAccess.h"
#include "RadioState.h"
#include "LTEFrame.h"
#include "LTESchedulerAccess.h"
#include "SubscriberTableAccess.h"
#include "LTEConfigAccess.h"

#define HARQ_NACK   0
#define HARQ_ACK    1

class LTERadio : public ChannelAccess {
protected:
    LTEScheduler *lteSched;

    LTEConfig *lteCfg;

    SubscriberTable *subT;

    RadioState rs;

    std::list<HARQInformation*> harqs;

    virtual void receiveChangeNotification(int category, const cPolymorphic *details);
public:
    LTERadio();
    virtual ~LTERadio();

    virtual int numInitStages() const { return 5; }
    virtual void initialize(int stage);
    virtual void handleMessage(cMessage *msg);

    void handleRadioMessage(cMessage *msg);
    void handleUpperMessage(cMessage *msg);

    void processSendCommand(cMessage *msg);
    void processRAPCommand(cMessage *msg);

    void sendDCI();
    void addHARQInformation(bool harq, TransportBlock *tb);
};

#endif /* LTERADIO_H_ */
