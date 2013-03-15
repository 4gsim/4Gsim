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

#include <platdep/sockets.h>
#include "RRC.h"
#include "LTEControlInfo_m.h"
#include "RRCUtils.h"
#include "RRCMessage.h"
#include "SubscriberTableAccess.h"
#include "PerEncoder.h"

Define_Module(RRC);

//http://my.safaribooksonline.com/book/electrical-engineering/communications-engineering/9780511512667/10-random-access/101_random_access_preamble_for?reader=pf&readerfullscreen=&readerleftmenu=1
//http://4g-lte-world.blogspot.co.at/2012/12/transport-block-size-code-rate-protocol.html
//http://www.roke.co.uk/resources/white-papers/0486-LTE-Radio-Resource.pdf
//http://www.freescale.com/files/wireless_comm/doc/white_paper/LTEPTCLOVWWP.pdf
//http://www.sharetechnote.com/html/BasicCallFlow_LTE.html#6_RRCConnectionRequest

RRC::RRC() {
	// TODO Auto-generated constructor stub
    mibTimer = NULL;
    sib1Timer = NULL;
}

RRC::~RRC() {
	// TODO Auto-generated destructor stub
}

void RRC::initialize(int stage) {
    if (stage == 4) {
        subT = SubscriberTableAccess().get();
        lteCfg = LTEConfigAccess().get();

        if (!strncmp(this->getParentModule()->getComponentType()->getName(), "UE", 2)) {
            EV << "LTE-RRC: RRC module for UE.\n";
            nodeType = UE_NODE_TYPE;
            Subscriber *sub = subT->at(0);
            sub->initRrcEntity(nodeType);
            RRCEntity *rrc = sub->getRrcEntity();
            rrc->setModule(this);
//            rrc->performStateTransition(ConnectionEstablishment);
        } else {
            EV << "LTE-RRC: RRC module for ENB.\n";
            nodeType = ENB_NODE_TYPE;

            mibTimer = new cMessage("MIB-TIMER");
            this->scheduleAt(simTime(), mibTimer);
            mibTimer->setContextPointer(this);

            sib1Timer = new cMessage("SIB1-TIMER");
            this->scheduleAt(simTime(), sib1Timer);
            sib1Timer->setContextPointer(this);
        }
    }
}

void RRC::handleMessage(cMessage *msg) {
    if (msg->isSelfMessage()) {
        if (msg == mibTimer) {
            sendMIB();
            this->cancelEvent(mibTimer);
            this->scheduleAt(simTime() + 40 * TTI_VALUE, mibTimer);
        } else if (msg == sib1Timer) {
            sendSIB1();
            this->cancelEvent(sib1Timer);
            this->scheduleAt(simTime() + 80 * TTI_VALUE, sib1Timer);
        }
    } else if (msg->arrivedOn("lowerLayerIn")) {
        handleLowerMessage(msg);
    } else {

    }
}

void RRC::handleLowerMessage(cMessage *msg) {
    EV << "aici-2\n";
    RRCMessage *rrcMsg = check_and_cast<RRCMessage*>(msg);
    LTEControlInfo *ctrl = check_and_cast<LTEControlInfo*>(msg->getControlInfo());
    EV << "aici-1\n";
    SequencePtr seq = rrcMsg->getSdu();
    EV << "aici\n";
    switch(ctrl->getChannel()) {
        case ULCCCH: {
            ULCCCHMessage *ulccchMessage = static_cast<ULCCCHMessage*>(seq);
            ULCCCHMessageType ulccchMessageType = ulccchMessage->getMessage();
            if (ulccchMessageType.getChoice() == ULCCCHMessageType::uLCCCHMessageTypeC1) {
                ULCCCHMessageTypeC1 *c1 = static_cast<ULCCCHMessageTypeC1*>(ulccchMessageType.getValue());
                if (c1->getChoice() == ULCCCHMessageTypeC1::rrcConnectionRequest) {
                    RRCConnectionRequest *rrcConnReq = static_cast<RRCConnectionRequest*>(c1->getValue());
                    RRCConnectionRequestCriticalExtensions critExt = rrcConnReq->getRRCConnectionRequestCriticalExtensions();
                    if (critExt.getChoice() == RRCConnectionRequestCriticalExtensions::rrcConnectionRequestr8) {
                        RRCConnectionRequestr8IEs *rrcConnReqIes = static_cast<RRCConnectionRequestr8IEs*>(critExt.getValue());
                        InitialUEIdentity initUeId = rrcConnReqIes->getUeIdentity();
                        if (initUeId.getChoice() == InitialUEIdentity::initialUEIdentityRandomValue) {
                            Subscriber *sub = new Subscriber();
                            sub->initRrcEntity(nodeType);
                            RRCEntity *rrc = sub->getRrcEntity();
                            rrc->setModule(this);
                            rrc->processRRCConnectionRequest(rrcConnReq);
                            subT->push_back(sub);
                        }
                    }
                }
            }
            break;
        }
        case BCCH0: {
            EV << "aici1\n";
            BCCHBCHMessage *bcchbchMessage = static_cast<BCCHBCHMessage*>(seq);
            EV << "aici2\n";
            MasterInformationBlock mib = bcchbchMessage->getMessage();
            EV << "aici3\n";
            lteCfg->setDLBandwithIndex(mib.getMasterInformationBlockdl_Bandwidth().getValue());
            EV << "aici4\n";
            PHICHConfig phichConfig = mib.getPhichConfig();
            EV << "aici5\n";
            lteCfg->setPhichDurationIndex(phichConfig.getPHICHConfigphich_Duration().getValue());
            EV << "aici6\n";
            lteCfg->setPhichResourceIndex(phichConfig.getPHICHConfigphich_Resource().getValue());
            break;
        }
        default:
            break;
    }
}

void RRC::sendMIB() {
    MasterInformationBlockdl_Bandwidth dlBandwith = MasterInformationBlockdl_Bandwidth(lteCfg->getDlBandwithSel());

    PHICHConfigphich_Duration phichDuration = PHICHConfigphich_Duration(lteCfg->getPhichDurationSel());
    PHICHConfigphich_Resource phichResource = PHICHConfigphich_Resource(lteCfg->getPhichResourceSel());
    PHICHConfig phichConfig = PHICHConfig(phichDuration, phichResource);

    MasterInformationBlockSystemFrameNumber systemFrameNumber = MasterInformationBlockSystemFrameNumber();
    MasterInformationBlockSpare spare = MasterInformationBlockSpare();

    MasterInformationBlock *mib = new MasterInformationBlock(dlBandwith, phichConfig, systemFrameNumber, spare);

    this->sendDown(BCCH0, 0, "MasterInformationBlock", mib);
}

void RRC::sendSIB1() {
    // TODO cellbarred, intrafreqresel, csgId, q-rxlevmin, p-max, freqband, tddconfig, si-windowlength
    PLMNIdentityList plmnIdList = lteCfg->getPLMNIdentityList();
    TrackingAreaCode tac = TrackingAreaCode(lteCfg->getTAC());
    CellIdentity cellId = CellIdentity(lteCfg->getCellId());
    SystemInformationBlockType1CellAccessRelatedInfocellBarred cellBarred = SystemInformationBlockType1CellAccessRelatedInfocellBarred(notBarred_SystemInformationBlockType1CellAccessRelatedInfocellBarred);
    SystemInformationBlockType1CellAccessRelatedInfointraFreqReselection intraFeqResel = SystemInformationBlockType1CellAccessRelatedInfointraFreqReselection(notAllowed_SystemInformationBlockType1CellAccessRelatedInfointraFreqReselection);
    SystemInformationBlockType1CellAccessRelatedInfoCsgIndication csgInd = SystemInformationBlockType1CellAccessRelatedInfoCsgIndication(false);
//    CSGIdentity csgId = CSGIdentity();
    SystemInformationBlockType1CellAccessRelatedInfo cellAccRelInfo = SystemInformationBlockType1CellAccessRelatedInfo(plmnIdList, tac, cellId, cellBarred, intraFeqResel, csgInd);

    QRxLevMin qRxLevMin = QRxLevMin(-53);
//    SystemInformationBlockType1CellSelectionInfoQRxLevMinOffset qRxLevMinOff = SystemInformationBlockType1CellSelectionInfoQRxLevMinOffset();
    SystemInformationBlockType1CellSelectionInfo cellSelInfo = SystemInformationBlockType1CellSelectionInfo(qRxLevMin);

//    PMax pMax = pMax();

    SystemInformationBlockType1FreqBandIndicator freqBandInd = SystemInformationBlockType1FreqBandIndicator(7);

    SchedulingInfoList schedInfoList;
    SchedulingInfo *schedInfo2 = new SchedulingInfo(SchedulingInfosi_Periodicity(rf8_SchedulingInfosi_Periodicity), SIBMappingInfo());
    schedInfoList.push_back(schedInfo2);

//    TDDConfig tddCfg = TDDConfig();

    SystemInformationBlockType1si_WindowLength siWdwLen = SystemInformationBlockType1si_WindowLength(ms20_SystemInformationBlockType1si_WindowLength);

    SystemInformationBlockType1SystemInfoValueTag sysValTag = SystemInformationBlockType1SystemInfoValueTag((int64_t)0);

    SystemInformationBlockType1v890IEs nonCritExt = SystemInformationBlockType1v890IEs();

    SystemInformationBlockType1 *sib1 = new SystemInformationBlockType1(cellAccRelInfo, cellSelInfo, freqBandInd, schedInfoList, siWdwLen, sysValTag);

    BCCHDLSCHMessageTypeC1 *c1 = new BCCHDLSCHMessageTypeC1();
    c1->setValue(sib1, BCCHDLSCHMessageTypeC1::systemInformationBlockType1);

    this->sendDown(BCCH1, BCCHDLSCHMessageType::bCCHDLSCHMessageTypeC1, "SystemInformationBlock1", c1);
}

void RRC::sendDown(int logChannel, int choice, const char *name, AbstractType *payload) {
//    using namespace rrc;

    RRCMessage *msg = new RRCMessage(name);
    LTEControlInfo *ctrl = new LTEControlInfo();

    switch(logChannel) {
        case ULCCCH: {
            ULCCCHMessageType ulccchMessageType = ULCCCHMessageType();
            ULCCCHMessageTypeC1 *c1 = dynamic_cast<ULCCCHMessageTypeC1*>(payload);
            ulccchMessageType.setValue(c1, choice);
            ULCCCHMessage *ulccchMessage = new ULCCCHMessage();
            ulccchMessage->setMessage(ulccchMessageType);
            msg->setSdu(ulccchMessage);
            break;
        }
        case DLCCCH: {
            DLCCCHMessageType dlccchMessageType = DLCCCHMessageType();
            DLCCCHMessageTypeC1 *c1 = dynamic_cast<DLCCCHMessageTypeC1*>(payload);
            dlccchMessageType.setValue(c1, choice);
            DLCCCHMessage *dlccchMessage = new DLCCCHMessage();
            dlccchMessage->setMessage(dlccchMessageType);
            msg->setSdu(dlccchMessage);
            break;
        }
        case BCCH0: {
            BCCHBCHMessageType *message = dynamic_cast<BCCHBCHMessageType*>(payload);
            BCCHBCHMessage *bcchbchMessage = new BCCHBCHMessage();
            bcchbchMessage->setMessage(*message);
            msg->setSdu(bcchbchMessage);
            break;
        }
        case BCCH1: {
            BCCHDLSCHMessageType bcchdlschMessageType = BCCHDLSCHMessageType();
            BCCHDLSCHMessageTypeC1 *c1 = dynamic_cast<BCCHDLSCHMessageTypeC1*>(payload);
            bcchdlschMessageType.setValue(c1, choice);
            BCCHDLSCHMessage *blcchdlschMessage = new BCCHDLSCHMessage();
            blcchdlschMessage->setMessage(bcchdlschMessageType);
            msg->setSdu(blcchdlschMessage);
            break;
        }
        default:
            break;
    }
    ctrl->setChannel(logChannel);
    msg->setControlInfo(ctrl);
    this->send(msg, gate("lowerLayerOut"));
}

//void RRC::processRRCConnectionRequest(RRCConnectionRequest *rrcConnReq) {
//
//
////    Subscriber *sub = subT->findSubscriberForChannel(ctrl->getChannelNumber());
////
////    sub = new Subscriber();
////    sub->initEntities(appType);
////    // only dummy PDN connection to store the UE bearer contexts
////    PDNConnection *conn = new PDNConnection();
////    conn->setOwner(sub->getEsmEntity());
////    sub->getEsmEntity()->addPDNConnection(conn, true);
////    sub->setChannelNr(ctrl->getChannelNumber());
////    sub->setEnbId(subT->genEnbId());
////    sub->setMmeId(0);
////    sub->setStatus(SUB_PENDING);
////    subT->push_back(sub);
//}
