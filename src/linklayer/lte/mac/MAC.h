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

#ifndef MAC_H_
#define MAC_H_

#include <omnetpp.h>
#include "NotificationBoard.h"
#include "HARQEntity.h"
#include "MACScheduler.h"
#include "LTEConfigAccess.h"

#define RA_RNTI_MIN_VALUE   1
#define RA_RNTI_MAX_VALUE   60
#define C_RNTI_MIN_VALUE    1
#define C_RNTI_MAX_VALUE    65523
//#define TTI_VALUE           1

class MAC : public cSimpleModule, public INotifiable {
protected:
    unsigned rntiType;
    unsigned short rnti;
    unsigned ueId;

    cMessage *ttiTimer;
//    unsigned ttiId;
//    unsigned schTtid;

    HARQEntity *entity;
    MACScheduler *scheduler;

    NotificationBoard *nb;

//    MACProtocolDataUnit *bcchMsg;

    LTEConfig *lteCfg;

    virtual void receiveChangeNotification(int category, const cPolymorphic *details);

    const char *channelName(int channelNumber);
public:
    MAC();
    virtual ~MAC();

    virtual int numInitStages() const  { return 5; }

    virtual void initialize(int stage);
    virtual void handleMessage(cMessage *msg);

    void handleLowerMessage(cMessage *msg);
    void handleUpperMessage(cMessage *msg);

//    void sendDown(cMessage *msg, int channelNumber, unsigned rntiType, unsigned short rnti);
    void sendUp(cMessage *msg, int channelNumber);
    unsigned getUeId() { return ueId; }
};

#endif /* MAC_H_ */
