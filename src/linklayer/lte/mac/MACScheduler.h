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

#define I_TBS_SIZE	27
#define N_PRB_SIZE	110
static const unsigned tbSizeTable[N_PRB_SIZE][I_TBS_SIZE] = {
		{ 16, 24, 32, 40, 56, 72, 328, 104, 120, 136, 144, 176, 208, 224, 256, 280, 328, 336, 376, 408, 440, 488, 520, 552, 584, 616, 712 },
		{ 32, 56, 72, 104, 120, 144, 176, 224, 256, 296, 328, 376, 440, 488, 552, 600, 632, 696, 776, 840, 904, 1000, 1064, 1128, 1192, 1256, 1480 },
		{ 56, 88, 144, 176, 208, 224, 256, 328, 392, 456, 504, 584, 680, 744, 840, 904, 968, 1064, 1160, 1288, 1384, 1480, 1608, 1736, 1800, 1864, 2216	}
};

class MACScheduler : public cSimpleModule, INotifiable {
private:
    // Cell configuration
    SiConfiguration siCfg;

    // Random Access configuration
    RaConfiguration raCfg;
    unsigned char prachCfgIndex;

    unsigned char dlBandwith;

    // Random Access Response buffer
    typedef std::map<unsigned short /* tti */, unsigned short /* tempCRnti */> RARBuffer;
    RARBuffer rarBuffer;

    NotificationBoard *nb;

    unsigned char getRBGSize();
    unsigned getRIV(unsigned char lCRB, unsigned char rbStart);

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
