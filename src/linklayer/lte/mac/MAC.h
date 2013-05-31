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

#include "NotificationBoard.h"
#include "LTESchedulerAccess.h"
#include "LTEConfigAccess.h"
#include "LTEFrame.h"
#include "HARQEntity.h"
#include "SubscriberTableAccess.h"

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

class MAC : public cSimpleModule, INotifiable {
private:
    unsigned preambleTransCount;
    unsigned backoffParam;
    unsigned rarLimit;
    unsigned preambleIndex;
    unsigned prachIndex;
    int rapId;
    int downId;
    unsigned raRnti;

    typedef std::map<int, TransportBlock*> QueueDown;
    QueueDown queueDown;
    typedef std::map<int, cMessage*> QueueUp;
    QueueUp queueUp;
    typedef std::map<int, MACProtocolDataUnit*> MACBuffer;
//    MACBuffer queue;
    MACBuffer msg3Buffer;

    NotificationBoard *nb;

    LTEScheduler *lteSched;

    LTEConfig *lteCfg;

    SubscriberTable *subT;

    HARQEntity *dlEntity;
    HARQEntity *ulEntity;

    cFSM raFSM;

    virtual void receiveChangeNotification(int category, const cPolymorphic *details);

    void performRAStateTransition(RAEvent event);

    void raStateEntered();
public:
    MAC();
    virtual ~MAC();

    virtual int numInitStages() const  { return 5; }

    virtual void initialize(int stage);
    virtual void handleMessage(cMessage *msg);

    void handleUpperMessage(cMessage *msg);
    void handleLowerMessage(cMessage *msg);

    void sendUp(TransportBlock *tb, int channel);
    void sendDown(MACProtocolDataUnit *pdu);

    void dlschDataTransfer(TransportBlock *tb, DownlinkAssignment *dlAssign);
    void ulschDataTransfer(int tti, int msgId, UplinkGrant *ulGrant);

    int getRAState() { return raFSM.getState(); }
    MACProtocolDataUnit *getMsg3Pdu(int msgId);

    std::string timestamp();
};

#endif /* MAC_H_ */
