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

#ifndef MACSCHEDULER_H_
#define MACSCHEDULER_H_

#include <omnetpp.h>
#include "NotificationBoard.h"
#include "SchedulerCommand_m.h"

class MACScheduler : public cSimpleModule, INotifiable {
private:
    // Cell configuration
    SiConfiguration siCfg;

    // Random Access configuration
    RaConfiguration raCfg;

    unsigned char prachCfgIndex;

    // Random Access Response buffer
    typedef std::map<unsigned short /* tti */, unsigned short /* tempCRnti */> RARBuffer;
    RARBuffer rarBuffer;

    NotificationBoard *nb;

    void processScheduleDlTriggerRequest(SchedDlTriggerReq *triggReq);
    void processScheduleUlTriggerRequest(SchedUlTriggerReq *triggReq);
    virtual void receiveChangeNotification(int category, const cPolymorphic *details);
public:
    MACScheduler();
    virtual ~MACScheduler();
    virtual int numInitStages() const  { return 5; }
    virtual void initialize(int stage);
    virtual void handleMessage(cMessage *msg);
};

#endif /* MACSCHEDULER_H_ */
