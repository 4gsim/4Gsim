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

#include "LTERadio.h"
#include "MACControlInfo_m.h"

Define_Module(LTERadio);

LTERadio::LTERadio() : rs(this->getId()) {
    // TODO Auto-generated constructor stub

}

LTERadio::~LTERadio() {
    // TODO Auto-generated destructor stub
}

void LTERadio::initialize(int stage) {
    ChannelAccess::initialize(stage);

    if (stage == 2) {
        if (!strncmp(this->getParentModule()->getComponentType()->getName(), "ENB", 3)) {
            EV << "LTE-Radio: LTE physical module for ENB.\n";
            cc->setRadioChannel(myRadioRef, PRACH);
            cc->setRadioChannel(myRadioRef, PUSCH);
        } else if (!strncmp(this->getParentModule()->getComponentType()->getName(), "UE", 2)) {
            EV << "LTE-Radio: LTE physical module for UE.\n";
            cc->setRadioChannel(myRadioRef, PDSCH);
            cc->setRadioChannel(myRadioRef, PDSCH0);
            cc->setRadioChannel(myRadioRef, PDSCH1);
            cc->setRadioChannel(myRadioRef, PHICH);
            cc->setRadioChannel(myRadioRef, PBCH);
            cc->setRadioChannel(myRadioRef, PDCCH);
        }
    }

    if (stage == 4) {
        lteSched = LTESchedulerAccess().get();

        lteCfg = LTEConfigAccess().get();

        nb->subscribe(this, NF_TTI_EXP);

        subT = SubscriberTableAccess().get();
    }
}

void LTERadio::handleMessage(cMessage *msg) {
    if (msg->arrivedOn("radioIn")) {
        handleRadioMessage(msg);
    } else {
        handleUpperMessage(msg);
    }
}

void LTERadio::handleRadioMessage(cMessage *msg) {
    PhysicalResourceBlock *prb = static_cast<PhysicalResourceBlock*>(msg);

    if (prb->getChannelNumber() == PDCCH) {
        DCIFormat *dci = check_and_cast<DCIFormat*>(msg);
        unsigned sfn = lteSched->getSFN();
        int ttis[dci->getTtisArraySize()];
        for (unsigned i = 0; i < dci->getTtisArraySize(); i++)
            ttis[i] = dci->getTtis(i);
        if (lteSched->scheduleDlMessage(dci->getRntiType(), dci->getRnti(), sfn, 1, sfn, ttis, dci->getTtisArraySize()) == -1) {
            EV << "LTE-Radio: Cannot receive message for this downlink assignment. Resource is already occupied.\n";
        }
    } else if (prb->getChannelNumber() == PRACH) {
        unsigned rnti = lteSched->getTTI(); // TODO add also frequency offset
        int msgId = lteSched->scheduleDlMessage(RaRnti, rnti, lteSched->getSFN() + 3, lteSched->getSFN() + 3 + lteCfg->getRaRespWdwSize());
        if (msgId != -1) {
            RandomAccessPreamble *rap = check_and_cast<RandomAccessPreamble*>(msg);

            // create new subscriber
            Subscriber *sub = subT->findSubscriberForRapid(rap->getRapid());
            if (sub == NULL) {
                Subscriber *sub = new Subscriber();
                sub->setRnti(rnti);
                sub->setRntiType(RaRnti);
                sub->setUeId(rap->getUeId());
                sub->setRapid(rap->getRapid());
                subT->push_back(sub);
            }

            // forward the preamble to MAC layer
            cMessage *msg = new cMessage("RandomAccessPreamble");
            RAPControlInfo *ctrl = new RAPControlInfo();
            ctrl->setCtrlId(RAP_CTRL_INFO);
            ctrl->setChannel(RACH);
            ctrl->setUeId(rap->getUeId());
            ctrl->setAttempt(rap->getAttempt());
            ctrl->setRapid(rap->getRapid());
            msg->setControlInfo(ctrl);
            msg->setKind(msgId);
            this->send(msg, gate("upperLayerOut"));
        }
    } else {
        bool isForMe = false;
        TransportBlock *tb = check_and_cast<TransportBlock*>(prb);
        int msgId = lteSched->getDlMessageId(lteSched->getTTI());
        if (msgId != -1) {
            MACControlInfo *ctrl = new MACControlInfo();
            ctrl->setUeId(tb->getUeId());
            tb->setKind(msgId);
            switch(tb->getChannelNumber()) {
                case PBCH:
                    ctrl->setChannel(BCH);
                    ctrl->setCtrlId(BCAST_DATA_CTRL_INFO);
                    isForMe = true;
                    break;
                case PDSCH0:
                    ctrl->setChannel(DLSCH0);
                    ctrl->setCtrlId(DL_DATA_CTRL_INFO);
                    isForMe = true;
                    break;
                case PDSCH1:
                    if (tb->getUeId() == this->getParentModule()->getId()) {
                        isForMe = true;
                        ctrl->setChannel(DLSCH1);
                        ctrl->setCtrlId(DL_DATA_CTRL_INFO);
                    }
                    break;
                default:
                    break;
            }

            msgId = lteSched->getUlMessageId();

            tb->setControlInfo(ctrl);
            if (isForMe)
                send(tb, gate("upperLayerOut"));
        }
    }
}

void LTERadio::handleUpperMessage(cMessage *msg) {
    MACControlInfo *ctrl = check_and_cast<MACControlInfo*>(msg->getControlInfo());
    if (ctrl->getCtrlId() == SEND_CTRL_INFO) {
        processSendCommand(msg);
    } else if (ctrl->getCtrlId() == RAP_CTRL_INFO) {
        processRAPCommand(msg);
    }
}

void LTERadio::processSendCommand(cMessage *msg) {
    MACControlInfo *ctrl = check_and_cast<MACControlInfo*>(msg->removeControlInfo());
    TransportBlock *tb = new TransportBlock();
    tb->encapsulate(PK(msg));
    tb->setName(msg->getName());
    tb->setKind(msg->getKind());
    tb->setUeId(ctrl->getUeId());
    switch(ctrl->getChannel()) {
        case BCH:
            tb->setChannelNumber(PBCH);
            break;
        case ULSCH:
            tb->setChannelNumber(PUSCH);
            break;
        case DLSCH0:
            tb->setChannelNumber(PDSCH0);
            break;
        case DLSCH1:
            tb->setChannelNumber(PDSCH1);
            break;
        default:
            break;
    }
    sendToChannel(tb);
}

void LTERadio::processRAPCommand(cMessage *msg) {
    RAPControlInfo *ctrl = check_and_cast<RAPControlInfo*>(msg->removeControlInfo());
    RandomAccessPreamble *rap = new RandomAccessPreamble();
    rap->setChannelNumber(PRACH);
    rap->setName(msg->getName());
    rap->setKind(msg->getKind());
    rap->setUeId(ctrl->getUeId());
    rap->setRapid(ctrl->getRapid());
    rap->setAttempt(ctrl->getAttempt());
    sendToChannel(rap);
}

void LTERadio::sendDCI() {
    DownlinkAssignments dlAssigns = lteSched->getDlAssignments();
    unsigned sfn = lteSched->getSFN();

    for (DownlinkAssignments::iterator i = dlAssigns.begin(); i != dlAssigns.end(); i++) {
        DownlinkAssignment *dlAssign = i->second;
        if (dlAssign->getRntiType() != NoRnti && dlAssign->getSfnBegin() <= sfn &&
                dlAssign->getSfnEnd() >= sfn && sfn % dlAssign->getSfnPeriod() == 0) {
                DCIFormat *dci = new DCIFormat();
                dci->setName("DCIFormat");
                dci->setChannelNumber(PDCCH);
                dci->setRnti(dlAssign->getRnti());
                dci->setRntiType(dlAssign->getRntiType());
                for (unsigned i = 0; i < dlAssign->getTtisArraySize(); i++)
                    dci->pushTti((dlAssign->getTtis(i) + 1) % 10);
                sendToChannel(dci);
        }
    }
}

void LTERadio::receiveChangeNotification(int category, const cPolymorphic *details) {
    Enter_Method_Silent();
    if (!strncmp(this->getParentModule()->getComponentType()->getName(), "ENB", 3)) {
        if (lteSched->getTTI() == 0) {
            sendDCI();
        }
    }
}
