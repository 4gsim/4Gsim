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
#include "RRCControlInfo_m.h"
#include "PerEncoder.h"
//#include "LTERadio.h"

Define_Module(RRC);

//http://my.safaribooksonline.com/book/electrical-engineering/communications-engineering/9780511512667/10-random-access/101_random_access_preamble_for?reader=pf&readerfullscreen=&readerleftmenu=1
//http://4g-lte-world.blogspot.co.at/2012/12/transport-block-size-code-rate-protocol.html
//http://www.roke.co.uk/resources/white-papers/0486-LTE-Radio-Resource.pdf
//http://www.freescale.com/files/wireless_comm/doc/white_paper/LTEPTCLOVWWP.pdf
//http://www.sharetechnote.com/html/BasicCallFlow_LTE.html#6_RRCConnectionRequest

RRC::RRC() {
	// TODO Auto-generated constructor stub

}

RRC::~RRC() {
	// TODO Auto-generated destructor stub
}

void RRC::initialize(int stage) {
    if (stage == 4) {
        subT = SubscriberTableAccess().get();
        lteCfg = LTEConfigAccess().get();
        lteSched = LTESchedulerAccess().get();
        nb = NotificationBoardAccess().get();

        nb->subscribe(this, NF_TTI_EXP);

        if (!strncmp(this->getParentModule()->getComponentType()->getName(), "UE", 2)) {
            EV << "LTE-RRC: RRC module for UE.\n";
            nodeType = UE_NODE_TYPE;
            Subscriber *sub = subT->at(0);
            sub->initRrcEntity(nodeType);
            RRCEntity *rrc = sub->getRrcEntity();
            rrc->setModule(this);
//            rrc->performStateTransition(ConnectionEstablishment);

            mibId = lteSched->scheduleDlMessage(NoRnti, 0, 0, 1, UINT32_MAX, mibTTIsU, 1);

        } else {
            EV << "LTE-RRC: RRC module for ENB.\n";
            nodeType = ENB_NODE_TYPE;

//            int prbBegin = ceil((lteCfg->getDlBandwith() * lteCfg->getBlockSize() / 2 - 36 + 0) / lteCfg->getBlockSize());
//            int prbSize = ceil((lteCfg->getDlBandwith() * lteCfg->getBlockSize() / 2 - 36 + 71) / lteCfg->getBlockSize()) - prbBegin;
            mibId = lteSched->scheduleDlMessage(NoRnti, 0, 0, 1, UINT32_MAX, mibTTIsN, 1);

            // TODO calculate the actual size of SIB1 for PRBs
            sib1Id = lteSched->scheduleDlMessage(SiRnti, 65535, 8, 2, UINT32_MAX, sib1TTIs, 1);

            sib2Id = lteSched->scheduleDlMessage(SiRnti, 65535, 8, 2, UINT32_MAX, sib2TTIs, 1);
        }
    }
}

void RRC::handleMessage(cMessage *msg) {
    if (msg->isSelfMessage()) {

    } else if (msg->arrivedOn("lowerLayerIn")) {
        handleLowerMessage(msg);
    } else {

    }
}

void RRC::handleLowerMessage(cMessage *msg) {
    EV << timestamp() << "Receiving " << msg->getName() << ".\n";
    RRCMessage *rrcMsg = check_and_cast<RRCMessage*>(msg);
    LTEControlInfo *ctrl = check_and_cast<LTEControlInfo*>(msg->getControlInfo());
    SequencePtr seq = rrcMsg->getSdu();
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
                            int msgId = lteSched->getUlMessageId();
                            Subscriber *sub = new Subscriber();
//                            sub->initRrcEntity(nodeType);
//                            RRCEntity *rrc = sub->getRrcEntity();
//                            rrc->setModule(this);
//                            rrc->processRRCConnectionRequest(rrcConnReq);
//                            subT->push_back(sub);
                        }
                    }
                }
            }
            break;
        }
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

void RRC::sendMIB() {
    MasterInformationBlockdl_Bandwidth dlBandwith = MasterInformationBlockdl_Bandwidth(lteCfg->getDlBandwithSel());

    PHICHConfigphich_Duration phichDuration = PHICHConfigphich_Duration(lteCfg->getPhichDurationSel());
    PHICHConfigphich_Resource phichResource = PHICHConfigphich_Resource(lteCfg->getPhichResourceSel());
    PHICHConfig phichConfig = PHICHConfig(phichDuration, phichResource);

    unsigned char sfn = (unsigned char)(lteSched->getSFN() >> 2);
    MasterInformationBlockSystemFrameNumber systemFrameNumber = MasterInformationBlockSystemFrameNumber((char *)&sfn);
    MasterInformationBlockSpare spare = MasterInformationBlockSpare();

    MasterInformationBlock *mib = new MasterInformationBlock(dlBandwith, phichConfig, systemFrameNumber, spare);

    this->sendDown(mibId, BCCH0, 0, "MasterInformationBlock", mib);
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

    this->sendDown(sib1Id, BCCH1, BCCHDLSCHMessageType::bCCHDLSCHMessageTypeC1, "SystemInformationBlock1", c1);
}

void RRC::sendSIB2() {
    // TODO preambles group a config, power ramping params, bcch config, pcch config, prach config, pdsch config, pusch config
    // pucch config, sounding rs ul config, uplink power control, ue timers, freq info, time allignment timer
    /* RACHConfigCommon */
    RACHConfigCommonPreambleInfonumberOfRA_Preambles nrOfRAPreambles = RACHConfigCommonPreambleInfonumberOfRA_Preambles(lteCfg->getNrOfRAPreamblesSel());
    RACHConfigCommonPreambleInfo preambleInfo = RACHConfigCommonPreambleInfo(nrOfRAPreambles);
    RACHConfigCommonPowerRampingParameterspowerRampingStep powRampingStep = RACHConfigCommonPowerRampingParameterspowerRampingStep(1);
    RACHConfigCommonPowerRampingParameterspreambleInitialReceivedTargetPower preambleInitRcvdTargetPow = RACHConfigCommonPowerRampingParameterspreambleInitialReceivedTargetPower(8);
    RACHConfigCommonPowerRampingParameters powRampingParams = RACHConfigCommonPowerRampingParameters(powRampingStep, preambleInitRcvdTargetPow);
    RACHConfigCommonRaSupervisionInfopreambleTransMaxValues preambleTransMax = RACHConfigCommonRaSupervisionInfopreambleTransMaxValues(lteCfg->getPreambleTransMaxSel());
    RACHConfigCommonRaSupervisionInfora_ResponseWindowSize raRespWdwSize = RACHConfigCommonRaSupervisionInfora_ResponseWindowSize(lteCfg->getRaRespWdwSizeSel());
    RACHConfigCommonRaSupervisionInfomac_ContentionResolutionTimer macContResolTimer = RACHConfigCommonRaSupervisionInfomac_ContentionResolutionTimer(lteCfg->getMACContResolTimerSel());
    RACHConfigCommonRaSupervisionInfo raSupervInfo = RACHConfigCommonRaSupervisionInfo(preambleTransMax, raRespWdwSize, macContResolTimer);
    RACHConfigCommonMaxHARQMsg3Tx maxHARQMsg3Tx = RACHConfigCommonMaxHARQMsg3Tx(lteCfg->getMaxHARQMsg3Tx());
    RACHConfigCommon rachCfg = RACHConfigCommon(preambleInfo, powRampingParams, raSupervInfo, maxHARQMsg3Tx);

    /* BCCHConfig */
    BCCHConfigmodificationPeriodCoeff modifPerCoeff = BCCHConfigmodificationPeriodCoeff(1);
    BCCHConfig bcchCfg = BCCHConfig(modifPerCoeff);

    /* PCCHConfig */
    PCCHConfigdefaultPagingCycle defPagCycl = PCCHConfigdefaultPagingCycle(2);
    PCCHConfignB nb = PCCHConfignB(2);
    PCCHConfig pcchCfg = PCCHConfig(defPagCycl, nb);

    /* PRACHConfigSIB */
    PRACHConfigRootSequenceIndex rootSeqIndex = PRACHConfigRootSequenceIndex(22);
    PRACHConfigInfoPrachConfigIndex prachCfgIndex = PRACHConfigInfoPrachConfigIndex(lteCfg->getPRACHCfgIndex());
    PRACHConfigInfoHighSpeedFlag highSpeedFlag = PRACHConfigInfoHighSpeedFlag(false);
    PRACHConfigInfoZeroCorrelationZoneConfig zeroCorrZoneCfg = PRACHConfigInfoZeroCorrelationZoneConfig(5);
    PRACHConfigInfoPrachFreqOffset prachFreqOff = PRACHConfigInfoPrachFreqOffset(lteCfg->getPRACHFreqOffset());
    PRACHConfigInfo prachCfgInfo = PRACHConfigInfo(prachCfgIndex, highSpeedFlag, zeroCorrZoneCfg, prachFreqOff);
    PRACHConfigSIB prachCfg = PRACHConfigSIB(rootSeqIndex, prachCfgInfo);

    /* PDSCHConfigCommon */
    PDSCHConfigCommonReferenceSignalPower refSignPow = PDSCHConfigCommonReferenceSignalPower(18);
    PDSCHConfigCommonPb pb = PDSCHConfigCommonPb((int64_t)0);
    PDSCHConfigCommon pdschCfg = PDSCHConfigCommon(refSignPow, pb);

    /* PUSCHConfigCommon */
    PUSCHConfigCommonPuschConfigBasicNSB nSB = PUSCHConfigCommonPuschConfigBasicNSB(1);
    PUSCHConfigCommonPuschConfigBasichoppingMode hoppMode = PUSCHConfigCommonPuschConfigBasichoppingMode((int64_t)0);
    PUSCHConfigCommonPuschConfigBasicPuschHoppingOffset puschHoppOff = PUSCHConfigCommonPuschConfigBasicPuschHoppingOffset(4);
    PUSCHConfigCommonPuschConfigBasicEnable64QAM en64QAM = PUSCHConfigCommonPuschConfigBasicEnable64QAM(false);
    PUSCHConfigCommonPuschConfigBasic puschCfgBasic = PUSCHConfigCommonPuschConfigBasic(nSB, hoppMode, puschHoppOff, en64QAM);
    ULReferenceSignalsPUSCHGroupHoppingEnabled grHoppEn = ULReferenceSignalsPUSCHGroupHoppingEnabled(true);
    ULReferenceSignalsPUSCHGroupAssignmentPUSCH grAssignPUSCH = ULReferenceSignalsPUSCHGroupAssignmentPUSCH((int64_t)0);
    ULReferenceSignalsPUSCHSequenceHoppingEnabled seqHoppEn = ULReferenceSignalsPUSCHSequenceHoppingEnabled(false);
    ULReferenceSignalsPUSCHCyclicShift cyclShift = ULReferenceSignalsPUSCHCyclicShift((int64_t)0);
    ULReferenceSignalsPUSCH ulRefSignPUSCH = ULReferenceSignalsPUSCH(grHoppEn, grAssignPUSCH, seqHoppEn, cyclShift);
    PUSCHConfigCommon puschCfg = PUSCHConfigCommon(puschCfgBasic, ulRefSignPUSCH);

    /* PUCCHConfigCommon */
    PUCCHConfigCommondeltaPUCCH_Shift deltaPUCCHShift = PUCCHConfigCommondeltaPUCCH_Shift(1);
    PUCCHConfigCommonNRBCQI nRBCqi = PUCCHConfigCommonNRBCQI(2);
    PUCCHConfigCommonNCSAN nCSSan = PUCCHConfigCommonNCSAN(6);
    PUCCHConfigCommonN1PUCCHAN n1PUCCHAn = PUCCHConfigCommonN1PUCCHAN((int64_t)0);
    PUCCHConfigCommon pucchCfg = PUCCHConfigCommon(deltaPUCCHShift, nRBCqi, nCSSan, n1PUCCHAn);

    /* SoundingRSULConfigCommon */
    SoundingRSULConfigCommonSetupsrs_BandwidthConfig srsBandCfg = SoundingRSULConfigCommonSetupsrs_BandwidthConfig(3);
    SoundingRSULConfigCommonSetupsrs_SubframeConfig srsSubfrCfg = SoundingRSULConfigCommonSetupsrs_SubframeConfig((int64_t)0);
    SoundingRSULConfigCommonSetupAckNackSRSSimultaneousTransmission ackNackSrsSimTrans = SoundingRSULConfigCommonSetupAckNackSRSSimultaneousTransmission(true);
    SoundingRSULConfigCommonSetup *setup = new SoundingRSULConfigCommonSetup(srsBandCfg, srsSubfrCfg, ackNackSrsSimTrans);
    SoundingRSULConfigCommon soundRSULCfg = SoundingRSULConfigCommon();
    soundRSULCfg.setValue(setup, SoundingRSULConfigCommon::soundingRSULConfigCommonSetup);

    /* UplinkPowerControlCommon */
    UplinkPowerControlCommonP0NominalPUSCH p0NomPUSCH = UplinkPowerControlCommonP0NominalPUSCH(-85);
    UplinkPowerControlCommonalpha alpha = UplinkPowerControlCommonalpha(5);
    UplinkPowerControlCommonP0NominalPUCCH p0NomPUCCH = UplinkPowerControlCommonP0NominalPUCCH(-117);
    DeltaFListPUCCHdeltaF_PUCCH_Format1 deltaFPUCCHForm1 = DeltaFListPUCCHdeltaF_PUCCH_Format1(1);
    DeltaFListPUCCHdeltaF_PUCCH_Format1b deltaFPUCCHForm1b = DeltaFListPUCCHdeltaF_PUCCH_Format1b(1);
    DeltaFListPUCCHdeltaF_PUCCH_Format2 deltaFPUCCHForm2 = DeltaFListPUCCHdeltaF_PUCCH_Format2(1);
    DeltaFListPUCCHdeltaF_PUCCH_Format2a deltaFPUCCHForm2a = DeltaFListPUCCHdeltaF_PUCCH_Format2a(1);
    DeltaFListPUCCHdeltaF_PUCCH_Format2b deltaFPUCCHForm2b = DeltaFListPUCCHdeltaF_PUCCH_Format2b(1);
    DeltaFListPUCCH deltaFListPUCCH = DeltaFListPUCCH(deltaFPUCCHForm1, deltaFPUCCHForm1b, deltaFPUCCHForm2, deltaFPUCCHForm2a, deltaFPUCCHForm2b);
    UplinkPowerControlCommonDeltaPreambleMsg3 deltaPreambleMsg3 = UplinkPowerControlCommonDeltaPreambleMsg3(4);
    UplinkPowerControlCommon ulPowCtrl = UplinkPowerControlCommon(p0NomPUSCH, alpha, p0NomPUCCH, deltaFListPUCCH, deltaPreambleMsg3);

    /* ULCyclicPrefixLength */
    ULCyclicPrefixLength ulCyclPrefLen = ULCyclicPrefixLength((int64_t)0);

    /* RadioResourceConfigCommonSIB */
    RadioResourceConfigCommonSIB radioResCfgComm = RadioResourceConfigCommonSIB(rachCfg, bcchCfg, pcchCfg, prachCfg, pdschCfg, puschCfg, pucchCfg, soundRSULCfg, ulPowCtrl, ulCyclPrefLen);

    /* UETimersAndConstants */
    UETimersAndConstantst300 t300 = UETimersAndConstantst300(5);
    UETimersAndConstantst301 t301 = UETimersAndConstantst301(5);
    UETimersAndConstantst310 t310 = UETimersAndConstantst310(5);
    UETimersAndConstantsn310 n310 = UETimersAndConstantsn310((int64_t)0);
    UETimersAndConstantst311 t311 = UETimersAndConstantst311((int64_t)0);
    UETimersAndConstantsn311 n311 = UETimersAndConstantsn311((int64_t)0);
    UETimersAndConstants ueTimersAndCt = UETimersAndConstants(t300, t301, t310, n310, t311, n311);

    /* SystemInformationBlockType2FreqInfo */
    AdditionalSpectrumEmission addSpectrEm = AdditionalSpectrumEmission(1);
    SystemInformationBlockType2FreqInfo freqInfo = SystemInformationBlockType2FreqInfo(addSpectrEm);

    /* TimeAlignmentTimer */
    TimeAlignmentTimer timeAllignTimer = TimeAlignmentTimer(1);

    SystemInformationBlockType2 *sib2 = new SystemInformationBlockType2(radioResCfgComm, ueTimersAndCt, freqInfo, timeAllignTimer);

    SibTypeAndInfoItem *sibTypeAndInfoItem = new SibTypeAndInfoItem();
    sibTypeAndInfoItem->setValue(sib2, SibTypeAndInfoItem::sib2);

    SystemInformationr8IEsSibTypeAndInfo sibTypeAndInfo = SystemInformationr8IEsSibTypeAndInfo();
    sibTypeAndInfo.push_back(sibTypeAndInfoItem);

    SystemInformationr8IEs *sibR8Ie = new SystemInformationr8IEs(sibTypeAndInfo);
    SystemInformationCriticalExtensions critExt = SystemInformationCriticalExtensions();
    critExt.setValue(sibR8Ie, SystemInformationCriticalExtensions::systemInformationr8);

    SystemInformation *sib = new SystemInformation(critExt);

    BCCHDLSCHMessageTypeC1 *c1 = new BCCHDLSCHMessageTypeC1();
    c1->setValue(sib, BCCHDLSCHMessageTypeC1::systemInformation);

    this->sendDown(sib2Id, BCCH1, BCCHDLSCHMessageType::bCCHDLSCHMessageTypeC1, "SystemInformationBlock2", c1);
}

void RRC::sendDown(int msgId, int logChannel, int choice, const char *name, AbstractType *payload) {
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
    msg->setKind(msgId);
    EV << timestamp() << "Sending " << msg->getName() << ".\n";
    this->send(msg, gate("lowerLayerOut"));
}

void RRC::processMIB(MasterInformationBlock mib) {
    RRCEntity *entity = subT->at(0)->getRrcEntity();
    if (entity->getState() == UE_RRC_IDLE) {    // TODO UE_RRC_CONNECTED with T3111 running
        lteCfg->setDLBandwithIndex(mib.getMasterInformationBlockdl_Bandwidth().getValue());
        PHICHConfig phichConfig = mib.getPhichConfig();
        lteCfg->setPhichDurationIndex(phichConfig.getPHICHConfigphich_Duration().getValue());
        lteCfg->setPhichResourceIndex(phichConfig.getPHICHConfigphich_Resource().getValue());
//        lteSched->setSFN(mib.getMasterInformationBlockSystemFrameNumber().getValue()[0]);
    }
}

void RRC::processSIB1(SystemInformationBlockType1 *sib1) {
    // TODO frequency band check
    SystemInformationBlockType1CellAccessRelatedInfo cellAccRelInfo = sib1->getSystemInformationBlockType1CellAccessRelatedInfo();
    lteCfg->setTAC(cellAccRelInfo.getTrackingAreaCode().getValue());
    lteCfg->setCellId(cellAccRelInfo.getCellIdentity().getValue());
}

void RRC::processSIB2(SystemInformationBlockType2 *sib2) {
    RadioResourceConfigCommonSIB radioResCfgComm = sib2->getRadioResourceConfigCommon();

    RACHConfigCommon rachCfg = radioResCfgComm.getRachConfigCommon();

    RACHConfigCommonPreambleInfo preambleInfo = rachCfg.getRACHConfigCommonPreambleInfo();

    lteCfg->setNrOfRAPreamblesIndex(preambleInfo.getRACHConfigCommonPreambleInfonumberOfRA_Preambles().getValue());
    if (preambleInfo.getOptFlag(0)) {
        RACHConfigCommonPreambleInfoPreamblesGroupAConfig preamblesGrACfg = preambleInfo.getRACHConfigCommonPreambleInfoPreamblesGroupAConfig();
        lteCfg->setSizeOfRAPreamblesGroupAIndex(preamblesGrACfg.getRACHConfigCommonPreambleInfoPreamblesGroupAConfigsizeOfRA_PreamblesGroupA().getValue());
        // TODO message size group a and messsage power offset group b
    } else {
        lteCfg->setSizeOfRAPreamblesGroupAIndex(lteCfg->getNrOfRAPreamblesSel());
    }

    RACHConfigCommonRaSupervisionInfo raSupervInfo = rachCfg.getRACHConfigCommonRaSupervisionInfo();

    lteCfg->setPreambleTransMaxIndex(raSupervInfo.getRACHConfigCommonRaSupervisionInfopreambleTransMax().getValue());
    lteCfg->setRaRespWdwSize(raSupervInfo.getRACHConfigCommonRaSupervisionInfora_ResponseWindowSize().getValue());
    lteCfg->setMACContResolTimer(raSupervInfo.getRACHConfigCommonRaSupervisionInfomac_ContentionResolutionTimer().getValue());

    lteCfg->setMaxHARQMsg3Tx(rachCfg.getRACHConfigCommonMaxHARQMsg3Tx().getValue());

    PRACHConfigSIB prachCfg = radioResCfgComm.getPrachConfig();

    PRACHConfigInfo prachCfgInfo = prachCfg.getPrachConfigInfo();

    lteCfg->setPRACHCfgIndex(prachCfgInfo.getPRACHConfigInfoPrachConfigIndex().getValue());
    lteCfg->setPRACHFreqOffset(prachCfgInfo.getPRACHConfigInfoPrachFreqOffset().getValue());

    if (lteSched->getSFN() % 8 == 0) {
        // TODO rest of the table 3GPP TS 36211 Table 5.7.1-2 pag. 32
        switch (lteCfg->getPRACHCfgIndex() % 16) {
            case 0:
                rapId = lteSched->scheduleUlMessage(RaRnti, 0, lteSched->getSFN(), 2, lteSched->getSFN() + 7, prachCfgIndex0TTIs, 1);
                break;
            default:
                break;
        }
    }

    Subscriber *sub = subT->at(0);
    RRCEntity *rrc = sub->getRrcEntity();
    if (rrc->getState() == UE_RRC_IDLE)
        rrc->performStateTransition(ConnectionEstablishment);

}

void RRC::receiveChangeNotification(int category, const cPolymorphic *details) {
    Enter_Method_Silent();

    if (category == NF_TTI_EXP) {
        if (!strncmp(this->getParentModule()->getComponentType()->getName(), "ENB", 3)) {
            if (lteSched->getSFN() % 4 == 3 && lteSched->getTTI() == 9)
                sendMIB();
            if (lteSched->getSFN() % 8 == 7 && lteSched->getTTI() == 3)
                sendSIB1();
            if (lteSched->getSFN() % 8 == 7 && lteSched->getTTI() == 4)
                sendSIB2();
        }
    }
}

std::string RRC::timestamp() {
    std::stringstream out;
    out << lteSched->timestamp() << " LTE-RRC: ";
    return out.str();
}
