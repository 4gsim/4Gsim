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

#include "MACue.h"
#include "LTEControlInfo_m.h"

Define_Module(MACue);

MACue::MACue() {
    // TODO Auto-generated constructor stub
    allocProc = NULL;
}

MACue::~MACue() {
    // TODO Auto-generated destructor stub
}

void MACue::initialize(int stage) {
    if (stage == 4) {
        nb = NotificationBoardAccess().get();

        nb->subscribe(this, DLASSIGNIndication);

        dlEntity = new HARQEntity();
        dlEntity->init(this, 7);
    }
}

void MACue::handleLowerMessage(cMessage *msg) {
    LTEControlInfo *ctrl = check_and_cast<LTEControlInfo*>(msg->getControlInfo());
    TransportBlock *tb = check_and_cast<TransportBlock*>(msg);
    if (ctrl->getChannel() == BCH) {
        bchReception(tb);
    } else if (ctrl->getChannel() == DLSCH0) {
        allocProc->receiveTransportBlock(tb);
    }
}

void MACue::handleUpperMessage(cMessage *msg) {
    EV << "LTE-MACue: Receiving message with id = " << msg->getKind() << " from upper layer.\n";

}

void MACue::bchReception(TransportBlock *tb) {
    // TODO receive and attempt to decode BCH

    // if TB successfully decoded
    LTEControlInfo *ctrl = check_and_cast<LTEControlInfo*>(tb->removeControlInfo());
    MACProtocolDataUnit *pdu = check_and_cast<MACProtocolDataUnit*>(tb->decapsulate());
    MACServiceDataUnit *sdu = check_and_cast<MACServiceDataUnit*>(pdu->decapsulate());
    ctrl->setChannel(BCCH0);
    sdu->setControlInfo(ctrl);

    this->send(sdu, gate("upperLayerOut"));
}

void MACue::dlAssignmentReception(DlAssignIndication *dlAssignInd) {
    unsigned char rntiType = dlAssignInd->getRntiType();
    EV << "LTE-MACue: DL assignment reception for rnti type = " << (unsigned)rntiType << ".\n";
    HarqInformation harqInfo = dlAssignInd->getHarqInfo();
    if (rntiType == CRnti || rntiType == SpsRnti || rntiType == TempCRnti) {
        if (dlAssignInd->getRntiType() == CRnti || dlAssignInd->getRntiType() == TempCRnti) {

        } else if (dlAssignInd->getRntiType() == SpsRnti) {

        } else {
            // not sure you can get here
        }
    }

    if (rntiType == SiRnti) {
        // TODO if rv is not defined ...
        dlAssignInd->setHarqProc(HARQ_BCAST_PROC_ID);
        dlEntity->indicateDlAssignment(dlAssignInd);
    }
}

void MACue::setAllocatedProcess(HARQProcess *harqProc) {
    this->allocProc = harqProc;
}

void MACue::receiveChangeNotification(int category, const cPolymorphic *details) {
    Enter_Method_Silent();
    if (category == DLASSIGNIndication) {
        DlAssignIndication *dlAssignInd = check_and_cast<DlAssignIndication*>(details);
        dlAssignmentReception(dlAssignInd);
    }
}
