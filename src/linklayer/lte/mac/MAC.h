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
#include "LTESchedulerAccess.h"

#define RA_RNTI_MIN_VALUE   1
#define RA_RNTI_MAX_VALUE   60
#define C_RNTI_MIN_VALUE    1
#define C_RNTI_MAX_VALUE    65523
//#define TTI_VALUE           1

enum RAState {
    PROC_NULL               = FSM_Steady(0),
    PROC_INITIALIZATION     = FSM_Steady(1),
    RES_SELECTION           = FSM_Steady(2),
    PRBL_TRANSMISSION       = FSM_Steady(3),
    RESP_RECEPTION          = FSM_Steady(4),
    RESP_CORRECT            = FSM_Steady(5),
    PROC_DONE               = FSM_Steady(6),
    PROC_ERROR              = FSM_Steady(7)
};

enum RAEvent {
    InitializeProc,
    SelectRes,
    TransmitPrbl,
    ReceiveResp,
    CorrectResp,
    CorrectProc,
    IncorrectProc
};

class MAC : public cSimpleModule, public INotifiable {
protected:
//    unsigned rntiType;
//    unsigned short rnti;
//    unsigned ueId;
    unsigned preambleTransCount;
    unsigned backoffParam;
    unsigned rarLimit;
    unsigned preambleIndex;
    unsigned prachIndex;

    cMessage *ttiTimer;
//    unsigned ttiId;
//    unsigned schTtid;

    HARQEntity *dlEntity;
    MACScheduler *scheduler;

    NotificationBoard *nb;

    cFSM raFSM;

//    MACProtocolDataUnit *bcchMsg;

    LTEConfig *lteCfg;
    LTEScheduler *lteSched;

    typedef std::vector<MACProtocolDataUnit*> QueueUp;
    QueueUp queueUp;
//    std::map<int, TransportBlock*> queueDown;


    typedef std::map<unsigned, MACProtocolDataUnit*> MACBuffer;
//    MACBuffer queue;
    MACBuffer msg3Buffer;
//    std::vector<MACRandomAccessResponse*> rars;

    virtual void receiveChangeNotification(int category, const cPolymorphic *details);

    void addHarqInformation(TransportBlock *tb, int harqProcId);

    const char *channelName(int channelNumber);

    void performRAStateTransition(RAEvent event);

    void raStateEntered();

public:
    MAC();
    virtual ~MAC();

    virtual int numInitStages() const  { return 5; }

    virtual void initialize(int stage);
    virtual void handleMessage(cMessage *msg);

    void handleLowerMessage(cMessage *msg);
    void handleUpperMessage(cMessage *msg);

//    void sendDown(cMessage *msg, int channelNumber, unsigned rntiType, unsigned short rnti);
    void sendUp(cMessage *msg, int channel);
    void sendDown(int channel, unsigned rntiType, unsigned rnti, unsigned ueId, MACProtocolDataUnit *pdu);

//    unsigned getUeId() { return ueId; }

    void ulschDataTransfer(int channel, unsigned rnti, unsigned rntiType);

//    void sendRACommand(int channel, int rnti, int rntiType);
};

#endif /* MAC_H_ */
