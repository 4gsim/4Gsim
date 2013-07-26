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

#ifndef PHYENB_H_
#define PHYENB_H_

#include <omnetpp.h>
#include "NotificationBoard.h"
#include "PHYCommand.h"
#include "ChannelAccess.h"
#include "RadioState.h"

#define TTI_VALUE   1

enum PHYState {
    IDLE        = FSM_Steady(0),
    CONFIGURED  = FSM_Steady(1),
    RUNNING     = FSM_Steady(2),
};

class PHYenb : public ChannelAccess {
private:
    unsigned dlBandwith;
    unsigned ulBandwith;

    typedef std::map<unsigned short, DlConfigRequestPduPtr> DlConfigRequestPdus;
    DlConfigRequestPdus dlCfgReqPdus;
    typedef std::map<unsigned, TxRequestPdu> TxRequestPdus;
    TxRequestPdus txReqPdus;

    cFSM fsm;

    RadioState rs;

    unsigned tti;
    cMessage *ttiTimer;

    NotificationBoard *nb;

    const char *stateName(int state);
    const char *eventName(int event);

    virtual void receiveChangeNotification(int category, const cPolymorphic *details);

    void stateEntered(int category, const cPolymorphic *details);

    DlConfigRequestPduPtr findDlConfigRequestPdu(unsigned short pduIndex);
    bool findTxRequestPdu(unsigned msgId);

    void sendDCIFormat(DlConfigRequestPduPtr pdu);
public:
    PHYenb();
    virtual ~PHYenb();
    virtual int numInitStages() const  { return 5; }
    virtual void initialize(int stage);
    virtual void handleMessage(cMessage *msg);
    virtual void handleUpperMessage(cMessage *msg);
};

#endif /* PHYENB_H_ */

