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
#include "ASNTypes.h"
#include "SubscriberTable.h"
#include "NotificationBoard.h"
#include "SchedulerCommand_m.h"
#include "LTEControlAccess.h"

using namespace rrc;

static const unsigned char dlBandwiths[6] = { 6, 15, 25, 50, 75, 100 };
static const std::string phichDurations[2] = { "normal", "extended" };
static const double phichResources[4] = {  0.166, 0.5, 1, 2 };
static const unsigned nrOfRAPreambless[16] = { 4, 8, 12, 16, 20, 24, 28, 32, 36, 40, 44, 48, 52, 56, 60, 64 };
static const unsigned sizeOfRAPreamblesGroupAs[16] = { 4, 8, 12, 16, 20, 24, 28, 32, 36, 40, 44, 48, 52, 56, 60, 64 };
static const unsigned preambleTransMaxs[11] = { 3, 4, 5, 6, 7, 8, 10, 20, 50, 100, 200 };
static const unsigned raRespWdwSizes[8] = { 2, 3, 4, 5, 6, 7, 8, 10 };
static const unsigned macContResolTimers[8] = { 8, 16, 24, 32, 40, 48, 56, 64 };

enum RRCCyclicPrefix
{
    CTRL_CP_NORMAL = 0,
    CTRL_CP_EXTENDED = 1
};

class RRC : public cSimpleModule, public INotifiable {
protected:
    unsigned short sfn;
    unsigned char sf;

    unsigned char dlBandwithSel;
    unsigned char cyclicPrefix;
    unsigned short phyCellId;
    unsigned char nrOfAntennas;

    PHICHConfig phichCfg;
    RACHConfigCommon rachCfg;
    PRACHConfigSIB prachCfg;

    SubscriberTable *subT;

    NotificationBoard *nb;

    LTEControl *lteCtrl;

    virtual void receiveChangeNotification(int category, const cPolymorphic *details) {}
public:
	RRC();
	virtual ~RRC();

	virtual int numInitStages() const  { return 5; }

	virtual void initialize(int stage);
	virtual void handleMessage(cMessage *msg);
	virtual void handleLowerMessage(cMessage *msg) {}

	void sendDown(int msgId, int logChannel, int choice, const char *name, AbstractType *payload);
};

#endif /* RRC_H_ */
