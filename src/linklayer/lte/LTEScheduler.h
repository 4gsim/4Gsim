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

class LTEScheduler : public cSimpleModule {
private:
    unsigned tti;
    unsigned sfn;

    typedef std::vector<LTESchedulingInfo*> LTESchedulings;
    LTESchedulings schedulings;

    int msgIds;

    unsigned gcd(unsigned a, unsigned b);
    unsigned lcm(unsigned a, unsigned b);

    void erase(unsigned start, unsigned end);

public:
    LTEScheduler();
    virtual ~LTEScheduler();

    virtual void initialize();
    virtual void handleMessage(cMessage *msg);

    unsigned getTTI() { return tti; }
    unsigned getSFN() { return sfn; }
    int generateMessageId() { return msgIds++; }
    int getMessageId(bool direction);
    int getMessageId(bool direction, unsigned tti);

//    void setSFN(unsigned short sfn) { this->sfn = sfn; }
    void incrementTTI();
//    void addFixedScheduling(bool direction, int msgId, unsigned sfnPeriod, const int *tti, unsigned ttiSize, int prbId, int prbSize);
    bool scheduleMessage(bool direction, int msgId, unsigned sfnBegin, unsigned sfnPeriod, unsigned sfnEnd, const int *tti, unsigned ttiSize, int prbBegin, int prbSize);
    int scheduleMessage(bool direction, unsigned sfnBegin, unsigned sfnEnd);

};

#endif /* LTESCHEDULER_H_ */
