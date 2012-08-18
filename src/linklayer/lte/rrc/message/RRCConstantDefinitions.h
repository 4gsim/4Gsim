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

#ifndef RRCCONSTANTDEFINITIONS_H_
#define RRCCONSTANTDEFINITIONS_H_

#include "ASNTypes.h"


const IntegerBase hiPDSCHidentities(64);

const IntegerBase hiPUSCHidentities(64);

const IntegerBase hiRM(256);

const IntegerBase maxAC(16);

const IntegerBase maxAdditionalMeas(4);

const IntegerBase maxASC(8);

const IntegerBase maxASCmap(7);

const IntegerBase maxASCpersist(6);

const IntegerBase maxCCTrCH(8);

const IntegerBase maxCellMeas(32);

const IntegerBase maxCellMeasOnSecULFreq(32);

const IntegerBase maxCellMeas_1(31);

const IntegerBase maxCellMeasOnSecULFreq_1(31);

extern const IntegerBase maxCNdomains;

const IntegerBase maxCommonHRNTI(4);

const IntegerBase maxCommonQueueID(2);

const IntegerBase maxCPCHsets(16);

const IntegerBase maxDedicatedCSGFreq(4);

const IntegerBase maxDPCH_DLchan(8);

const IntegerBase maxDPDCH_UL(6);

const IntegerBase maxDRACclasses(8);

const IntegerBase maxE_DCHMACdFlow(8);

const IntegerBase maxE_DCHMACdFlow_1(7);

const IntegerBase maxEUTRACellPerFreq(16);

const IntegerBase maxEUTRATargetFreqs(8);

const IntegerBase maxEDCHRL(4);

const IntegerBase maxEDCHRL_1(3);

const IntegerBase maxEDCHs(32);

const IntegerBase maxEDCHTxPattern_TDD128(4);

const IntegerBase maxEDCHTxPattern_TDD128_1(3);

const IntegerBase maxERNTIgroup(32);

const IntegerBase maxERNTIperGroup(2);

const IntegerBase maxERUCCH(256);

const IntegerBase maxFACHPCH(8);

const IntegerBase maxFreq(8);

const IntegerBase maxFreqBandsEUTRA(16);

const IntegerBase maxFreqBandsFDD(8);

const IntegerBase maxFreqBandsFDD_ext(15);

const IntegerBase maxFreqBandsTDD(4);

const IntegerBase maxFreqBandsTDD_ext(16);

const IntegerBase maxFreqBandsGSM(16);

const IntegerBase maxGANSS(8);

const IntegerBase maxGANSS_1(7);

const IntegerBase maxGANSSSat(64);

const IntegerBase maxGANSSSat_1(63);

const IntegerBase maxGERAN_SI(8);

const IntegerBase maxGSMTargetCells(32);

const IntegerBase maxHNBNameSize(48);

const IntegerBase maxHProcesses(8);

const IntegerBase maxHS_SCCHLessTrBlk(4);

const IntegerBase maxHSDSCHTBIndex(64);

const IntegerBase maxHSDSCHTBIndex_tdd384(512);

const IntegerBase maxHSSCCHs(4);

const IntegerBase maxHSSCCHs_1(3);

const IntegerBase maxHSSICH_TDD128(4);

const IntegerBase maxHSSICH_TDD128_1(3);

const IntegerBase maxInterSysMessages(4);

const IntegerBase maxLoCHperRLC(2);

const IntegerBase maxMAC_d_PDUsizes(8);

const IntegerBase maxMBMS_CommonCCTrCh(32);

const IntegerBase maxMBMS_CommonPhyCh(32);

const IntegerBase maxMBMS_CommonRB(32);

const IntegerBase maxMBMS_CommonTrCh(32);

const IntegerBase maxMBMS_Freq(4);

const IntegerBase maxMBMS_L1CP(4);

const IntegerBase maxMBMSservCount(8);

const IntegerBase maxMBMSservModif(32);

const IntegerBase maxMBMSservSched(16);

const IntegerBase maxMBMSservSelect(8);

const IntegerBase maxMBMSservUnmodif(64);

const IntegerBase maxMBMSTransmis(4);

const IntegerBase maxMBSFNClusters(16);

const IntegerBase maxMeasCSGRange(4);

const IntegerBase maxMeasEvent(8);

const IntegerBase maxMeasEventOnSecULFreq(8);

const IntegerBase maxMeasIntervals(3);

const IntegerBase maxMeasOccasionPattern(5);

const IntegerBase maxMeasOccasionPattern_1(4);

const IntegerBase maxMeasParEvent(2);

const IntegerBase maxNumCDMA2000Freqs(8);

const IntegerBase maxNumE_AGCH(4);

const IntegerBase maxNumE_HICH(4);

const IntegerBase maxNumEUTRAFreqs(8);

const IntegerBase maxNumGSMCellGroup(16);

const IntegerBase maxNumGSMFreqRanges(32);

const IntegerBase maxNumFDDFreqs(8);

const IntegerBase maxNumTDDFreqs(8);

const IntegerBase maxNoOfMeas(16);

const IntegerBase maxOtherRAT(15);

const IntegerBase maxOtherRAT_16(16);

const IntegerBase maxPage1(8);

const IntegerBase maxPCPCH_APsig(16);

const IntegerBase maxPCPCH_APsubCh(12);

const IntegerBase maxPCPCH_CDsig(16);

const IntegerBase maxPCPCH_CDsubCh(12);

const IntegerBase maxPCPCH_SF(7);

const IntegerBase maxPCPCHs(64);

const IntegerBase maxPDCPAlgoType(8);

const IntegerBase maxPDSCH(8);

const IntegerBase maxPDSCH_TFCIgroups(256);

const IntegerBase maxPRACH(16);

const IntegerBase maxPRACH_FPACH(8);

const IntegerBase maxPredefConfig(16);

const IntegerBase maxPrio(8);

const IntegerBase maxPrio_1(7);

const IntegerBase maxPUSCH(8);

const IntegerBase maxQueueIDs(8);

const IntegerBase maxRABsetup(16);

const IntegerBase maxRAT(16);

const IntegerBase maxRB(32);

const IntegerBase maxRBallRABs(27);

const IntegerBase maxRBMuxOptions(8);

const IntegerBase maxRBperRAB(8);

const IntegerBase maxRBperTrCh(16);

const IntegerBase maxReportedEUTRACellPerFreq(4);

const IntegerBase maxReportedEUTRAFreqs(4);

const IntegerBase maxReportedGSMCells(8);

const IntegerBase maxRL(8);

const IntegerBase maxRL_1(7);

const IntegerBase maxRLCPDUsizePerLogChan(32);

const IntegerBase maxRFC3095_CID(16384);

const IntegerBase maxROHC_PacketSizes_r4(16);

const IntegerBase maxROHC_Profile_r4(8);

const IntegerBase maxRxPatternForHSDSCH_TDD128(4);

const IntegerBase maxRxPatternForHSDSCH_TDD128_1(3);

const IntegerBase maxSat(16);

const IntegerBase maxSatClockModels(4);

const IntegerBase maxSCCPCH(16);

const IntegerBase maxSgnType(8);

const IntegerBase maxSIB(32);

const IntegerBase maxSIB_FACH(8);

const IntegerBase maxSIBperMsg(16);

const IntegerBase maxSIrequest(4);

const IntegerBase maxSRBsetup(8);

const IntegerBase maxSystemCapability(16);

const IntegerBase maxTDD128Carrier(6);

const IntegerBase maxTbsForHSDSCH_TDD128(4);

const IntegerBase maxTbsForHSDSCH_TDD128_1(3);

const IntegerBase maxTF(32);

const IntegerBase maxTF_CPCH(16);

const IntegerBase maxTFC(1024);

const IntegerBase maxTFCsub(1024);

const IntegerBase maxTFCI_2_Combs(512);

const IntegerBase maxTGPS(6);

const IntegerBase maxTrCH(32);

const IntegerBase maxTrCHpreconf(32);

const IntegerBase maxTS(14);

const IntegerBase maxTS_1(13);

const IntegerBase maxTS_2(12);

const IntegerBase maxTS_LCR(6);

const IntegerBase maxTS_LCR_1(5);

const IntegerBase maxURA(8);

const IntegerBase maxURNTI_Group(8);

//typedef SequenceOf<CNDomainInformationFull, CONSTRAINED, 1, maxCNdomains> CNDomainInformationListFull;


#endif /* RRCCONSTANTDEFINITIONS_H_ */
