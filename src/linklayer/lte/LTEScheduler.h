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

#define UL_SCHEDULING   0
#define DL_SCHEDULING   1

class LTEScheduler : public cSimpleModule {
private:
    unsigned short tti;
    unsigned short sfn;

    typedef std::vector<LTEFixedSchedulingInfo> LTEFixedSchedulings;
    LTEFixedSchedulings dlFixedScheds;
    LTEFixedSchedulings ulFixedScheds;

    int msgIds;

public:
    LTEScheduler();
    virtual ~LTEScheduler();

    virtual void initialize();
    virtual void handleMessage(cMessage *msg);

    unsigned short getTTI() { return tti; }
    unsigned short getSFN() { return sfn; }
    int generateMessageId() { return msgIds++; }
    int getMessageId(bool direction);

    void setSFN(unsigned short sfn) { this->sfn = sfn; }

    void incrementTTI();
    void addFixedScheduling(bool direction, int msgId, int sfnPeriod, const int *tti, unsigned ttiSize, int prbId, int prbSize);

};

#endif /* LTESCHEDULER_H_ */
