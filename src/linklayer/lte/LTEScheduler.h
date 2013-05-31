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

#ifndef LTESCHEDULER_H_
#define LTESCHEDULER_H_

#include <omnetpp.h>
#include "LTESchedulingInfo.h"
#include "NotificationBoard.h"

typedef std::map<int, DownlinkAssignment*> DownlinkAssignments;
typedef std::map<int, UplinkGrant*> UplinkGrants;

class LTEScheduler : public cSimpleModule, INotifiable {
private:
    unsigned tti;
    unsigned sfn;
    int msgIds;

    cMessage *ttiTimer;

    DownlinkAssignments dlAssigns;

    UplinkGrants ulGrants;

    NotificationBoard *nb;

    virtual void receiveChangeNotification(int category, const cPolymorphic *details) {}

    unsigned gcd(unsigned a, unsigned b);
    unsigned lcm(unsigned a, unsigned b);
    bool checkDlScheduling(unsigned sfnBegin, unsigned sfnPeriod, unsigned sfnEnd, const int *tti, unsigned ttiSize);
    bool checkUlScheduling(unsigned sfnBegin, unsigned sfnPeriod, unsigned sfnEnd, const int *tti, unsigned ttiSize);
public:
    LTEScheduler();
    virtual ~LTEScheduler();

    virtual int numInitStages() const { return 5; }
    virtual void initialize(int stage);
    virtual void handleMessage(cMessage *msg);

    unsigned getTTI() { return tti; }
    unsigned getSFN() { return sfn; }

    int getDlMessageId(unsigned tti);
    int getDlMessageId() { return getDlMessageId(tti); }
    int getUlMessageId(unsigned tti);
    int getUlMessageId() { return getUlMessageId(tti); }

    void incrementTTI();
    int scheduleDlMessage(unsigned rntiType, unsigned rnti, unsigned sfnBegin, unsigned sfnPeriod, unsigned sfnEnd, const int *tti, unsigned ttiSize);
    int scheduleUlMessage(unsigned rntiType, unsigned rnti, unsigned sfnBegin, unsigned sfnPeriod, unsigned sfnEnd, const int *tti, unsigned ttiSize);
    int scheduleDlMessage(unsigned rntiType, unsigned rnti, unsigned sfnBegin, unsigned sfnPeriod);

    DownlinkAssignments getDlAssignments() { return dlAssigns; }
    DownlinkAssignment *getDlAssignment(int msgId);
    UplinkGrant *getUlGrant(int msgId);

    std::string timestamp();
};

#endif /* LTESCHEDULER_H_ */
