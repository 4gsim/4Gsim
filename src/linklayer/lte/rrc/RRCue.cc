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

#include "RRCue.h"
#include "RRCMessage.h"
#include "LTEControlInfo.h"

Define_Module(RRCue);

RRCue::RRCue() : RRC() {
    // TODO Auto-generated constructor stub
    recvMIB = false;
    recvSIB1 = false;
    recvSIB2 = false;
}

RRCue::~RRCue() {
    // TODO Auto-generated destructor stub
}

void RRCue::initialize(int stage) {
    RRC::initialize(stage);

    if (stage == 4) {
        bool nodeType = 0;
        sub = subT->at(0);
        sub->initRrcEntity(nodeType);
        entity = sub->getRrcEntity();
        entity->setModule(this);
    }
}

void RRCue::handleLowerMessage(cMessage *msg) {
    RRCMessage *rrcMsg = check_and_cast<RRCMessage*>(PK(msg)->decapsulate());
    LTEControlInfo *ctrl = check_and_cast<LTEControlInfo*>(msg->getControlInfo());
    EV << "LTE-RRCue: Receiving message on channel = " << ctrl->getChannel() << ".\n";
    SequencePtr seq = rrcMsg->getSdu();
    switch(ctrl->getChannel()) {
//        case ULCCCH: {
//            ULCCCHMessage *ulccchMessage = static_cast<ULCCCHMessage*>(seq);
//            ULCCCHMessageType ulccchMessageType = ulccchMessage->getMessage();
//            if (ulccchMessageType.getChoice() == ULCCCHMessageType::uLCCCHMessageTypeC1) {
//                ULCCCHMessageTypeC1 *c1 = static_cast<ULCCCHMessageTypeC1*>(ulccchMessageType.getValue());
//                if (c1->getChoice() == ULCCCHMessageTypeC1::rrcConnectionRequest) {
//                    RRCConnectionRequest *rrcConnReq = static_cast<RRCConnectionRequest*>(c1->getValue());
//                    RRCConnectionRequestCriticalExtensions critExt = rrcConnReq->getRRCConnectionRequestCriticalExtensions();
//                    if (critExt.getChoice() == RRCConnectionRequestCriticalExtensions::rrcConnectionRequestr8) {
//                        RRCConnectionRequestr8IEs *rrcConnReqIes = static_cast<RRCConnectionRequestr8IEs*>(critExt.getValue());
//                        InitialUEIdentity initUeId = rrcConnReqIes->getUeIdentity();
//                        if (initUeId.getChoice() == InitialUEIdentity::initialUEIdentityRandomValue) {
//                            int msgId = lteSched->getUlMessageId();
//                            Subscriber *sub = new Subscriber();
//                            sub->initRrcEntity(nodeType);
//                            RRCEntity *rrc = sub->getRrcEntity();
//                            rrc->setModule(this);
//                            rrc->processRRCConnectionRequest(rrcConnReq);
//                            subT->push_back(sub);
//                        }
//                    }
//                }
//            }
//            break;
//        }
        case BCCH0: {
            BCCHBCHMessage *bcchbchMessage = static_cast<BCCHBCHMessage*>(seq);
            MasterInformationBlock mib = bcchbchMessage->getMessage();
            processMIB(mib);
            break;
        }
        case BCCH1: {
            BCCHDLSCHMessage *bcchdlschMessage = static_cast<BCCHDLSCHMessage*>(seq);
            BCCHDLSCHMessageType bcchdlschMessageType = bcchdlschMessage->getMessage();
            if (bcchdlschMessageType.getChoice() == BCCHDLSCHMessageType::bCCHDLSCHMessageTypeC1) {
                BCCHDLSCHMessageTypeC1 *c1 = static_cast<BCCHDLSCHMessageTypeC1*>(bcchdlschMessageType.getValue());
                if (c1->getChoice() == BCCHDLSCHMessageTypeC1::systemInformationBlockType1) {
                    SystemInformationBlockType1 *sib1 = static_cast<SystemInformationBlockType1*>(c1->getValue());
                    processSIB1(sib1);
                } else if (c1->getChoice() == BCCHDLSCHMessageTypeC1::systemInformation) {
                    SystemInformation *sib = static_cast<SystemInformation*>(c1->getValue());
                    SystemInformationCriticalExtensions critExt = sib->getSystemInformationCriticalExtensions();
                    if(critExt.getChoice() == SystemInformationCriticalExtensions::systemInformationr8) {
                        SystemInformationr8IEs *r8ies = static_cast<SystemInformationr8IEs*>(critExt.getValue());
                        SystemInformationr8IEsSibTypeAndInfo typeAndInfo = r8ies->getSystemInformationr8IEsSibTypeAndInfo();
                        for (unsigned i = 0; i < typeAndInfo.size(); i++) {
                            SibTypeAndInfoItem item = typeAndInfo.at(i);
                            if (item.getChoice() == SibTypeAndInfoItem::sib2) {
                                SystemInformationBlockType2 *sib2 = static_cast<SystemInformationBlockType2*>(item.getValue());
                                processSIB2(sib2);
                            }
                        }
                    }
                }
            }
            break;
        }
        default:
            break;
    }
}

void RRCue::processMIB(MasterInformationBlock mib) {
    if (entity->getState() == UE_RRC_IDLE) {    // TODO UE_RRC_CONNECTED with T3111 running
        dlBandwithSel = mib.getMasterInformationBlockdl_Bandwidth().getValue();
        phichCfg = mib.getPhichConfig();
        sfn = mib.getMasterInformationBlockSystemFrameNumber().getValue()[0];
//        if (!recvMIB) {
//            lteCtrl->startPhysicalLayer((sfn << 2) * 10);
//        }
        recvMIB = true;
    }
}

void RRCue::processSIB1(SystemInformationBlockType1 *sib1) {
    // TODO frequency band check
    SystemInformationBlockType1CellAccessRelatedInfo cellAccRelInfo = sib1->getSystemInformationBlockType1CellAccessRelatedInfo();
    sub->setTac(cellAccRelInfo.getTrackingAreaCode().getValue());
    sub->setCellId(cellAccRelInfo.getCellIdentity().getValue());
    recvSIB1 = true;
}

void RRCue::processSIB2(SystemInformationBlockType2 *sib2) {
    RadioResourceConfigCommonSIB radioResCfgComm = sib2->getRadioResourceConfigCommon();

    rachCfg = radioResCfgComm.getRachConfigCommon();

    prachCfg = radioResCfgComm.getPrachConfig();

    if (recvMIB && recvSIB1 && !recvSIB2) {
    	EV << "LTE-RRCue: Received SIB2. Ready for Random Access Procedure.\n";
        // notify other modules of the configuration parameters
    	// used for random access procedure
        CSchedCellConfigReq *cellCfg = new CSchedCellConfigReq();
        RaConfiguration raCfg = RaConfiguration();
        raCfg.setNrOfRaPreambles(nrOfRAPreambless[rachCfg.getRACHConfigCommonPreambleInfo().getRACHConfigCommonPreambleInfonumberOfRA_Preambles().getValue()]);
        raCfg.setRaRespWdwSize(raRespWdwSizes[rachCfg.getRACHConfigCommonRaSupervisionInfo().getRACHConfigCommonRaSupervisionInfora_ResponseWindowSize().getValue()]);
        if (rachCfg.getRACHConfigCommonPreambleInfo().getOptFlag(0))	// if groupA configuration exists use it
        	raCfg.setSizeOfRaPreamblesGroupA(sizeOfRAPreamblesGroupAs[rachCfg.getRACHConfigCommonPreambleInfo().getRACHConfigCommonPreambleInfoPreamblesGroupAConfig().getRACHConfigCommonPreambleInfoPreamblesGroupAConfigsizeOfRA_PreamblesGroupA().getValue()]);
        else	// else set it the size of group A equal to whole RA preambles size
        	raCfg.setSizeOfRaPreamblesGroupA(nrOfRAPreambless[rachCfg.getRACHConfigCommonPreambleInfo().getRACHConfigCommonPreambleInfonumberOfRA_Preambles().getValue()]);
        cellCfg->setPrachCfgIndex(prachCfg.getPrachConfigInfo().getPRACHConfigInfoPrachConfigIndex().getValue());
        cellCfg->setRaConfig(raCfg);

//        nb->fireChangeNotification(CSCHED_CELL_CONFIG_REQ, cellCfg);
    }

    recvSIB2 = true;
}
