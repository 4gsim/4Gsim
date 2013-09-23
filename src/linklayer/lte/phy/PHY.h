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

enum PHYCyclicPrefix {
    PHY_CP_EXTENDED = 0,
    PHY_CP_NORMAL = 1
};

typedef PHYFrame* PHYFramePtr;

typedef struct {
	unsigned short k;
	unsigned char l;
} RE;

typedef RE* REG;		// RE_0, RE_1, RE_2, RE_3 and if available RE_4  RE_5
typedef REG* REGs;		// REG_0, REG_1 and if available REG_2

class PHY : public ChannelAccess {
protected:
    unsigned short sfn;
    unsigned char sf;
    unsigned char symb;
    unsigned char slot;
    simtime_t symbPeriod;

    unsigned char nRBsc;    // number of subcarriers in a resurse block
    unsigned char nDLsymb;  // number of downlink symbols in slot

    unsigned char nDLrb;    // number of downlink resource blocks

    unsigned char n1id;     // physical cell group id
    unsigned char n2id;     // id in the physical cell group
    unsigned short nCellId; // physical cell id

    unsigned char ncp;      // cyclic prefix

    unsigned char p;		// number of antenna ports

    unsigned char cfi;

    PHYSymbol **dlSubframe;	// symbol[nDLsymb]

    PHYFramePtr **dlBuffer;	// frame[nDLsymb * 2][nRBsc * nDLrb]

    REGs **allRegs;			// REGs[k0][l]

    cFSM fsm;

    RadioState rs;

    cMessage *symbolTimer;

    NotificationBoard *nb;

    unsigned char getRegNrInRegs(unsigned char l);
    unsigned char getReNrInReg(unsigned char l);
    REG findExactReg(unsigned char l, unsigned short k0);
    void configureRegs();

    const char *stateName(int state);
    const char *eventName(int event);

    virtual void receiveChangeNotification(int category, const cPolymorphic *details) = 0;

    virtual void stateEntered(int category, const cPolymorphic *details) = 0;

    void printSubframe();
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
