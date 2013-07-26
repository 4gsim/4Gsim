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

#include "PHYue.h"
#include "LTEControlInfo_m.h"
#include "SchedulerCommand_m.h"
#include "PHYCommand.h"

Define_Module(PHYue);

PHYue::PHYue() : rs(this->getId())  {
    tti = 0;
    ttiTimer = NULL;
}

PHYue::~PHYue() {
    if (ttiTimer != NULL) {
        if (ttiTimer->getContextPointer() != NULL)
            this->cancelEvent(ttiTimer);
        delete ttiTimer;
    }
}

void PHYue::initialize(int stage) {
    // TODO - Generated method body
    ChannelAccess::initialize(stage);

    if (stage == 2) {
        cc->setRadioChannel(myRadioRef, PDSCH);
        cc->setRadioChannel(myRadioRef, PDSCH0);
        cc->setRadioChannel(myRadioRef, PDSCH1);
        cc->setRadioChannel(myRadioRef, PHICH);
        cc->setRadioChannel(myRadioRef, PBCH);
        cc->setRadioChannel(myRadioRef, PDCCH);
    }
}

void PHYue::handleMessage(cMessage *msg) {
    // TODO - Generated method body
    if (msg->isSelfMessage()) {
        if (msg == ttiTimer) {
            tti++;
            this->cancelEvent(ttiTimer);
            this->scheduleAt(simTime() + TTI_VALUE, ttiTimer);
        }
    } else if (msg->arrivedOn("radioIn")) {
        handleRadioMessage(msg);
    } else {

    }
}

void PHYue::handleRadioMessage(cMessage *msg) {
    PhysicalResourceBlock *prb = check_and_cast<PhysicalResourceBlock*>(msg);
    EV << "LTE-PHYue: Receiving message from physical channel = " << prb->getChannelNumber() << ".\n";
    LTEControlInfo *ctrl = new LTEControlInfo();
    if (prb->getChannelNumber() == PBCH) {
        TransportBlock *tb = check_and_cast<TransportBlock*>(prb);
        ctrl->setChannel(BCH);
        tb->setControlInfo(ctrl);
        this->send(tb, gate("upperLayerOut"));
    } else if (prb->getChannelNumber() == PDCCH) {
        DCIFormat *dci = check_and_cast<DCIFormat*>(prb);
        DlAssignIndication *dlAssignInd = new DlAssignIndication();
        dlAssignInd->setRnti(dci->getRnti());
        dlAssignInd->setRntiType(dci->getRntiType());
        dlAssignInd->setTti(tti);
        nb->fireChangeNotification(DLASSIGNIndication, dlAssignInd);
    } else if (prb->getChannelNumber() == PDSCH0) {
        TransportBlock *tb = check_and_cast<TransportBlock*>(prb);
        ctrl->setChannel(DLSCH0);
        tb->setControlInfo(ctrl);
        this->send(tb, gate("upperLayerOut"));
    }
}
