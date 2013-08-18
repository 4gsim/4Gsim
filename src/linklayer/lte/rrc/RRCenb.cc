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

#include "RRCenb.h"
#include "PHYCommand.h"
#include "LTEControlInfo.h"
#include "RRCMessage.h"

Define_Module(RRCenb);

RRCenb::RRCenb() {
    // TODO Auto-generated constructor stub
    sfn = 0;
    dlBandwithSel = 0;
}

RRCenb::~RRCenb() {
    // TODO Auto-generated destructor stub
}

void RRCenb::initialize(int stage) {
    RRC::initialize(stage);

    if (stage == 4) {
        lteCtrl->startPhysicalLayer(0);

        nb->subscribe(this, SUBFRAMEIndication);

        // initialize own configuration parameters
        SchedulingInfo *schedInfo2 = new SchedulingInfo(SchedulingInfosi_Periodicity(rf8_SchedulingInfosi_Periodicity), SIBMappingInfo());
        schedInfoList.push_back(schedInfo2);

        siWdwLen = SystemInformationBlockType1si_WindowLength(ms20_SystemInformationBlockType1si_WindowLength);

        /* PHICHConfig */
        PHICHConfigphich_Duration phichDuration = PHICHConfigphich_Duration(normal_PHICHConfigphich_Duration);
        PHICHConfigphich_Resource phichResource = PHICHConfigphich_Resource(one_PHICHConfigphich_Resource);
        phichCfg = PHICHConfig(phichDuration, phichResource);

        /* RACHConfigCommon */
        RACHConfigCommonPreambleInfonumberOfRA_Preambles nrOfRAPreambles = RACHConfigCommonPreambleInfonumberOfRA_Preambles(n52_RACHConfigCommonPreambleInfonumberOfRA_Preambles);
        RACHConfigCommonPreambleInfo preambleInfo = RACHConfigCommonPreambleInfo(nrOfRAPreambles);
        RACHConfigCommonPowerRampingParameterspowerRampingStep powRampingStep = RACHConfigCommonPowerRampingParameterspowerRampingStep(1);
        RACHConfigCommonPowerRampingParameterspreambleInitialReceivedTargetPower preambleInitRcvdTargetPow = RACHConfigCommonPowerRampingParameterspreambleInitialReceivedTargetPower(8);
        RACHConfigCommonPowerRampingParameters powRampingParams = RACHConfigCommonPowerRampingParameters(powRampingStep, preambleInitRcvdTargetPow);
        RACHConfigCommonRaSupervisionInfopreambleTransMaxValues preambleTransMax = RACHConfigCommonRaSupervisionInfopreambleTransMaxValues(n6_RACHConfigCommonRaSupervisionInfopreambleTransMax);
        RACHConfigCommonRaSupervisionInfora_ResponseWindowSize raRespWdwSize = RACHConfigCommonRaSupervisionInfora_ResponseWindowSize(sf10_RACHConfigCommonRaSupervisionInfora_ResponseWindowSize);
        RACHConfigCommonRaSupervisionInfomac_ContentionResolutionTimer macContResolTimer = RACHConfigCommonRaSupervisionInfomac_ContentionResolutionTimer(sf48_RACHConfigCommonRaSupervisionInfomac_ContentionResolutionTimer);
        RACHConfigCommonRaSupervisionInfo raSupervInfo = RACHConfigCommonRaSupervisionInfo(preambleTransMax, raRespWdwSize, macContResolTimer);
        RACHConfigCommonMaxHARQMsg3Tx maxHARQMsg3Tx = RACHConfigCommonMaxHARQMsg3Tx(4);
        rachCfg = RACHConfigCommon(preambleInfo, powRampingParams, raSupervInfo, maxHARQMsg3Tx);

        /* PRACHConfigSIB */
        PRACHConfigRootSequenceIndex rootSeqIndex = PRACHConfigRootSequenceIndex(22);
        PRACHConfigInfoPrachConfigIndex prachCfgIndex = PRACHConfigInfoPrachConfigIndex(1);
        PRACHConfigInfoHighSpeedFlag highSpeedFlag = PRACHConfigInfoHighSpeedFlag(false);
        PRACHConfigInfoZeroCorrelationZoneConfig zeroCorrZoneCfg = PRACHConfigInfoZeroCorrelationZoneConfig(5);
        PRACHConfigInfoPrachFreqOffset prachFreqOff = PRACHConfigInfoPrachFreqOffset((int64_t)0);
        PRACHConfigInfo prachCfgInfo = PRACHConfigInfo(prachCfgIndex, highSpeedFlag, zeroCorrZoneCfg, prachFreqOff);
        prachCfg = PRACHConfigSIB(rootSeqIndex, prachCfgInfo);

        // notify other modules of the configuration parameters
        CSchedCellConfigReq *cellCfg = new CSchedCellConfigReq();
        SiConfiguration siCfg = SiConfiguration();
        SiMessageListElement siMsgEl = SiMessageListElement();
        siMsgEl.setPeriod(siPeriodicities[schedInfo2->getSchedulingInfosi_Periodicity().getValue()]);
        siCfg.setSiWdwLen(siWindowLengths[siWdwLen.getValue()]);
        siCfg.setSiMsgListArraySize(1);
        siCfg.setSiMsgList(0, siMsgEl);
        cellCfg->setSiConfig(siCfg);

        nb->fireChangeNotification(CSCHED_CELL_CONFIG_REQ, cellCfg);
    }
}

void RRCenb::handleLowerMessage(cMessage *msg) {
    RRCMessage *rrcMsg = check_and_cast<RRCMessage*>(PK(msg)->decapsulate());
    LTEControlInfo *ctrl = check_and_cast<LTEControlInfo*>(msg->getControlInfo());
    EV << "LTE-RRCenb: Receiving message on channel = " << ctrl->getChannel() << ".\n";
    SequencePtr seq = rrcMsg->getSdu();
}

void RRCenb::sendMIB() {
    MasterInformationBlockdl_Bandwidth dlBandwith = MasterInformationBlockdl_Bandwidth(dlBandwithSel);

    unsigned char sfn = (unsigned char)(this->sfn >> 2);
    MasterInformationBlockSystemFrameNumber systemFrameNumber = MasterInformationBlockSystemFrameNumber((char *)&sfn);
    MasterInformationBlockSpare spare = MasterInformationBlockSpare();

    MasterInformationBlock *mib = new MasterInformationBlock(dlBandwith, phichCfg, systemFrameNumber, spare);

    sendDown(MIB, BCCH0, 0, "MasterInformationBlock", mib);
}

void RRCenb::sendSIB1() {
    // TODO cellbarred, intrafreqresel, csgId, q-rxlevmin, p-max, freqband, tddconfig, si-windowlength
    PLMNIdentityList plmnIdList = lteCtrl->getPLMNIdentityList();
    TrackingAreaCode tac = TrackingAreaCode(lteCtrl->getTAC());
    CellIdentity cellId = CellIdentity(lteCtrl->getCellId());
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

    SystemInformationBlockType1SystemInfoValueTag sysValTag = SystemInformationBlockType1SystemInfoValueTag((int64_t)0);

    SystemInformationBlockType1v890IEs nonCritExt = SystemInformationBlockType1v890IEs();

    SystemInformationBlockType1 *sib1 = new SystemInformationBlockType1(cellAccRelInfo, cellSelInfo, freqBandInd, schedInfoList, siWdwLen, sysValTag);

    BCCHDLSCHMessageTypeC1 *c1 = new BCCHDLSCHMessageTypeC1();
    c1->setValue(sib1, BCCHDLSCHMessageTypeC1::systemInformationBlockType1);

    this->sendDown(SIB1, BCCH1, BCCHDLSCHMessageType::bCCHDLSCHMessageTypeC1, "SystemInformationBlock1", c1);
}

void RRCenb::sendSIB2() {
    // TODO preambles group a config, power ramping params, bcch config, pcch config, prach config, pdsch config, pusch config
    // pucch config, sounding rs ul config, uplink power control, ue timers, freq info, time allignment timer

    /* BCCHConfig */
    BCCHConfigmodificationPeriodCoeff modifPerCoeff = BCCHConfigmodificationPeriodCoeff(1);
    BCCHConfig bcchCfg = BCCHConfig(modifPerCoeff);

    /* PCCHConfig */
    PCCHConfigdefaultPagingCycle defPagCycl = PCCHConfigdefaultPagingCycle(2);
    PCCHConfignB nb = PCCHConfignB(2);
    PCCHConfig pcchCfg = PCCHConfig(defPagCycl, nb);

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

    this->sendDown(SIB2, BCCH1, BCCHDLSCHMessageType::bCCHDLSCHMessageTypeC1, "SystemInformationBlock2", c1);
}

void RRCenb::receiveChangeNotification(int category, const cPolymorphic *details) {
    Enter_Method_Silent();

    if (category == SUBFRAMEIndication) {
        SubframeIndication *sfInd = check_and_cast<SubframeIndication*>(details);
        unsigned short tti = sfInd->getTti();
        sfn = tti / 10;

        // sending MasterInformationBlock
        if (sfn % 4 == 0 && tti % 10 == 0) {
            sendMIB();
        }

        // sending SystemInformationBlocks
        if (sfn % 8 == 0 && tti % 10 == 5) {
            sendSIB1();
        } else if (!(sfn % 2 == 0 && tti % 10 == 5)) {
            unsigned w = siWindowLengths[siWdwLen.getValue()];

            for (unsigned n = 0; n < schedInfoList.size(); n++) {
                SchedulingInfo schedInfo = schedInfoList.at(n);
                unsigned x = n * w;
                unsigned T = siPeriodicities[schedInfo.getSchedulingInfosi_Periodicity().getValue()];
                if ((sfn % T == (unsigned)floor(x / 10)) && (tti % 10 == x)) {
                    if (schedInfo.getSibMappingInfo().size() == 0)
                        sendSIB2();
                }
            }
        }
    }
}
