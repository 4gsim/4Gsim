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

namespace rrcNamespace {

#define hiPDSCHidentities 64

#define hiPUSCHidentities 64

#define hiRM 256

#define maxAC 16

#define maxAdditionalMeas 4

#define maxASC 8

#define maxASCmap 7

#define maxASCpersist 6

#define maxCCTrCH 8

#define maxCellMeas 32

#define maxCellMeasOnSecULFreq 32

#define maxCellMeas_1 31

#define maxCellMeasOnSecULFreq_1 31

#define maxCNdomains 4

#define maxCommonHRNTI 4

#define maxCommonQueueID 2

#define maxCPCHsets 16

#define maxDedicatedCSGFreq 4

#define maxDPCH_DLchan 8

#define maxDPDCH_UL 6

#define maxDRACclasses 8

#define maxE_DCHMACdFlow 8

#define maxE_DCHMACdFlow_1 7

#define maxEUTRACellPerFreq 16

#define maxEUTRATargetFreqs 8

#define maxEDCHRL 4

#define maxEDCHRL_1 3

#define maxEDCHs 32

#define maxEDCHTxPattern_TDD128 4

#define maxEDCHTxPattern_TDD128_1 3

#define maxERNTIgroup 32

#define maxERNTIperGroup 2

#define maxERUCCH 256

#define maxFACHPCH 8

#define maxFreq 8

#define maxFreqBandsEUTRA 16

#define maxFreqBandsFDD 8

#define maxFreqBandsFDD_ext 15

#define maxFreqBandsTDD 4

#define maxFreqBandsTDD_ext 16

#define maxFreqBandsGSM 16

#define maxGANSS 8

#define maxGANSS_1 7

#define maxGANSSSat 64

#define maxGANSSSat_1 63

#define maxGERAN_SI 8

#define maxGSMTargetCells 32

#define maxHNBNameSize 48

#define maxHProcesses 8

#define maxHS_SCCHLessTrBlk 4

#define maxHSDSCHTBIndex 64

#define maxHSDSCHTBIndex_tdd384 512

#define maxHSSCCHs 4

#define maxHSSCCHs_1 3

#define maxHSSICH_TDD128 4

#define maxHSSICH_TDD128_1 3

#define maxInterSysMessages 4

#define maxLoCHperRLC 2

#define maxMAC_d_PDUsizes 8

#define maxMBMS_CommonCCTrCh 32

#define maxMBMS_CommonPhyCh 32

#define maxMBMS_CommonRB 32

#define maxMBMS_CommonTrCh 32

#define maxMBMS_Freq 4

#define maxMBMS_L1CP 4

#define maxMBMSservCount 8

#define maxMBMSservModif 32

#define maxMBMSservSched 16

#define maxMBMSservSelect 8

#define maxMBMSservUnmodif 64

#define maxMBMSTransmis 4

#define maxMBSFNClusters 16

#define maxMeasCSGRange 4

#define maxMeasEvent 8

#define maxMeasEventOnSecULFreq 8

#define maxMeasIntervals 3

#define maxMeasOccasionPattern 5

#define maxMeasOccasionPattern_1 4

#define maxMeasParEvent 2

#define maxNumCDMA2000Freqs 8

#define maxNumE_AGCH 4

#define maxNumE_HICH 4

#define maxNumEUTRAFreqs 8

#define maxNumGSMCellGroup 16

#define maxNumGSMFreqRanges 32

#define maxNumFDDFreqs 8

#define maxNumTDDFreqs 8

#define maxNoOfMeas 16

#define maxOtherRAT 15

#define maxOtherRAT_16 16

#define maxPage1 8

#define maxPCPCH_APsig 16

#define maxPCPCH_APsubCh 12

#define maxPCPCH_CDsig 16

#define maxPCPCH_CDsubCh 12

#define maxPCPCH_SF 7

#define maxPCPCHs 64

#define maxPDCPAlgoType 8

#define maxPDSCH 8

#define maxPDSCH_TFCIgroups 256

#define maxPRACH 16

#define maxPRACH_FPACH 8

#define maxPredefConfig 16

#define maxPrio 8

#define maxPrio_1 7

#define maxPUSCH 8

#define maxQueueIDs 8

#define maxRABsetup 16

#define maxRAT 16

#define maxRB 32

#define maxRBallRABs 27

#define maxRBMuxOptions 8

#define maxRBperRAB 8

#define maxRBperTrCh 16

#define maxReportedEUTRACellPerFreq 4

#define maxReportedEUTRAFreqs 4

#define maxReportedGSMCells 8

#define maxRL 8

#define maxRL_1 7

#define maxRLCPDUsizePerLogChan 32

#define maxRFC3095_CID 16384

#define maxROHC_PacketSizes_r4 16

#define maxROHC_Profile_r4 8

#define maxRxPatternForHSDSCH_TDD128 4

#define maxRxPatternForHSDSCH_TDD128_1 3

#define maxSat 16

#define maxSatClockModels 4

#define maxSCCPCH 16

#define maxSgnType 8

#define maxSIB 32

#define maxSIB_FACH 8

#define maxSIBperMsg 16

#define maxSIrequest 4

#define maxSRBsetup 8

#define maxSystemCapability 16

#define maxTDD128Carrier 6

#define maxTbsForHSDSCH_TDD128 4

#define maxTbsForHSDSCH_TDD128_1 3

#define maxTF 32

#define maxTF_CPCH 16

#define maxTFC 1024

#define maxTFCsub 1024

#define maxTFCI_2_Combs 512

#define maxTGPS 6

#define maxTrCH 32

#define maxTrCHpreconf 32

#define maxTS 14

#define maxTS_1 13

#define maxTS_2 12

#define maxTS_LCR 6

#define maxTS_LCR_1 5

#define maxURA 8

#define maxURNTI_Group 8

}

#endif /* RRCCONSTANTDEFINITIONS_H_ */
