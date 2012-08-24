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

#ifndef RRCIE_H_
#define RRCIE_H_

#include "ASNTypes.h"
#include "RRCConstant.h"

typedef OpenType DummyIe;

/*
 * Simple RRC message information elements.
 */

typedef BitString<CONSTRAINED, 14, 14> Ansi41IDNNS;

typedef Integer<CONSTRAINED, 0, 9> Digit;

typedef Integer<CONSTRAINED, 0, 15> IMEIDigit;

typedef OctetString<CONSTRAINED, 1, 4095> NASMessage;

typedef BitString<CONSTRAINED, 4, 4> NASSynchronisationIndicator;

typedef OctetString<CONSTRAINED, 1, 8> NASSystemInformationGSMMAP;

typedef BitString<CONSTRAINED, 32, 32> PTMSIGSMMAP;

typedef BitString<CONSTRAINED, 8, 8> RoutingAreaCode;

typedef BitString<CONSTRAINED, 10, 10> RoutingParameter;

typedef BitString<CONSTRAINED, 32, 32> TMSIGSMMAP;

typedef BitString<CONSTRAINED, 28, 28> CellIdentity;

typedef BitString<CONSTRAINED, 27, 27> CSGIdentity;

typedef Integer<CONSTRAINED, 0, 127> MapParameter;

typedef Integer<CONSTRAINED, 1, maxSCCPCH> OccurrenceSequenceNumberOfPICH;

typedef Integer<CONSTRAINED, 0, 20> QHystS;

typedef Integer<CONSTRAINED, 0, 40> QHystSFine;

typedef Integer<CONSTRAINED, -16, 10> SSearchQual;

typedef Integer<CONSTRAINED, -53, 45> SSearchRXLEV;

typedef Integer<CONSTRAINED, 0, 10> SpeedDependentScalingFactor;

typedef Integer<CONSTRAINED, 0, 31> TReselectionS;

typedef Integer<CONSTRAINED, 0, 31> TReselectionSFine;

typedef Integer<CONSTRAINED, 4, 19> TreselectionScalingFactor;

typedef Integer<CONSTRAINED, 1, 91> UpperLimit;

typedef BitString<CONSTRAINED, 16, 16> URAIdentity;

typedef Integer<CONSTRAINED, 0, 255> ActivationTime;

typedef Integer<CONSTRAINED, 1, 256> BandComb;

typedef BitString<CONSTRAINED, 16, 16> CRNTI;

typedef Integer<CONSTRAINED, 6, 9> CNDRXCycleLengthCoefficient;

typedef Integer<CONSTRAINED, 0, 63> DLDPCCHBER;

typedef BitString<CONSTRAINED, 16, 16> DSCHRNTI;

typedef BitString<CONSTRAINED, 16, 16> ERNTI;

typedef BitString<CONSTRAINED, 32, 32> ESNDS41;

typedef BitString<CONSTRAINED, 16, 16> HRNTI;

typedef Integer<CONSTRAINED, 1, 64> HSDSCHphysicallayercategory;

typedef Integer<CONSTRAINED, 1, 20> HSDSCHphysicallayercategoryext;

typedef Integer<CONSTRAINED, 21, 24> HSDSCHphysicallayercategoryext2;

typedef Integer<CONSTRAINED, 25, 28> HSDSCHphysicallayercategoryext3;

typedef Integer<CONSTRAINED, 1, 64> HSDSCHphysicallayercategoryextension;

typedef Integer<CONSTRAINED, 1, 64> MultiCarrierHSDSCHphysicallayercategory;

typedef Integer<CONSTRAINED, 1, 36> MultiCarrierHSDSCHphysicallayercategoryextension;

typedef BitString<CONSTRAINED, 4, 4> UESpecificBehaviourInformation1idle;

typedef BitString<CONSTRAINED, 8, 8> UESpecificBehaviourInformation1interRAT;

typedef OctetString<CONSTRAINED, 5, 7> IMSIDS41;

typedef BitString<CONSTRAINED, 32, 32> IntegrityProtInitNumber;

typedef Integer<CONSTRAINED, 0, 32> MaximumBitRate;

typedef Integer<CONSTRAINED, 1, 224> MaxPhysChPerFrame;

typedef Integer<CONSTRAINED, 1, 448> MaxPhysChPerFrame768;

typedef Integer<CONSTRAINED, 1, 96> MaxPhysChPerSubFramer4;

typedef Integer<CONSTRAINED, 1, 4> MaxPhysChPerTimeslotLCRr7;

typedef Integer<CONSTRAINED, 1, 16> MaxPhysChPerTS;

typedef Integer<CONSTRAINED, 1, 32> MaxPhysChPerTS768;

typedef Integer<CONSTRAINED, 1, 8> MaxSimultaneousCCTrCHCount;

typedef Integer<CONSTRAINED, 1, 14> MaxTSPerFrame;

typedef Integer<CONSTRAINED, 1, 6> MaxTSPerSubFramer4;

typedef BitString<CONSTRAINED, 32, 32> MessageAuthenticationCode;

typedef Integer<CONSTRAINED, 0, 7> N300;

typedef Integer<CONSTRAINED, 0, 7> N301;

typedef Integer<CONSTRAINED, 0, 7> N302;

typedef Integer<CONSTRAINED, 0, 7> N304;

typedef Integer<CONSTRAINED, 1, 8> N308;

typedef Integer<CONSTRAINED, 0, 7> N310;

typedef Integer<CONSTRAINED, 1, 64> NAccessFails;

typedef Integer<CONSTRAINED, 1, 64> NAPRetransMax;

typedef Integer<CONSTRAINED, 0, 31> NFBOAllBusy;

typedef Integer<CONSTRAINED, 0, 31> NFBONoAICH;

typedef Integer<CONSTRAINED, 0, 127> NFBOMismatch;

typedef Integer<CONSTRAINED, 0, 63> NSBOBusy;

typedef Integer<CONSTRAINED, 0, 28> NSIP;

typedef Integer<CONSTRAINED, 1, 64> RadioFrequencyBandEUTRA;

typedef Integer<CONSTRAINED, 0, 15> RRCMessageSequenceNumber;

typedef Integer<CONSTRAINED, 0, 3> RRCTransactionIdentifier;

typedef BitString<CONSTRAINED, 20, 20> SRNTI;

typedef BitString<CONSTRAINED, 10, 10> SRNTI2;

typedef BitString<CONSTRAINED, 12, 12> SRNCIdentity;

typedef BitString<CONSTRAINED, 20, 20> STARTValue;

typedef Integer<CONSTRAINED, 1, 8> T309;

typedef Integer<CONSTRAINED, 0, 15> T312;

typedef Integer<CONSTRAINED, 0, 15> T313;

typedef OctetString<CONSTRAINED, 2, 17> TMSIDS41;

typedef Integer<CONSTRAINED, 1, 8> TransmissionProbability;

typedef Integer<CONSTRAINED, 1, 4> UEPowerClass;

typedef Integer<CONSTRAINED, 3, 9> UTRANDRXCycleLengthCoefficient;

typedef Integer<CONSTRAINED, 0, 15> WaitTime;

typedef Integer<CONSTRAINED, 0, 4294967295> COUNTC;

typedef Integer<CONSTRAINED, 0, 33554431> COUNTCMSB;

typedef Integer<CONSTRAINED, 0, 10> DefaultConfigIdentity;

typedef Integer<CONSTRAINED, 0, 12> DefaultConfigIdentityr4;

typedef Integer<CONSTRAINED, 0, 13> DefaultConfigIdentityr5;

typedef Integer<CONSTRAINED, 0, 31> DefaultConfigIdentityr6;

typedef Integer<CONSTRAINED, 0, 15> DefaultConfigIdForCellFACH;

typedef Integer<CONSTRAINED, 0, 62> DDI;

typedef Integer<CONSTRAINED, 1, 15> LogicalChannelIdentity;

typedef BitString<CONSTRAINED, 24, 24> MACdHFNinitialvalue;

typedef Integer<CONSTRAINED, 1, 8> MACLogicalChannelPriority;

typedef Integer<CONSTRAINED, 0, 18> MaxCSDelay;

typedef Integer<CONSTRAINED, 0, 65535> PDCPSNInfo;

typedef Integer<CONSTRAINED, 0, 15> PredefinedConfigIdentity;

typedef Integer<CONSTRAINED, 0, 15> PredefinedConfigValueTag;

typedef Integer<CONSTRAINED, 1, 32> RBIdentity;

typedef Integer<CONSTRAINED, 0, 4095> RLCSequenceNumber;

typedef Integer<CONSTRAINED, 1, 3> ROHCProfiler4;

typedef Integer<CONSTRAINED, 2, 1500> ROHCPacketSizer4;

typedef Integer<CONSTRAINED, -63, 0> BLERQualityValue;

typedef Integer<CONSTRAINED, 1, maxCPCHsets> CPCHSetID;

typedef Integer<CONSTRAINED, 1, maxDRACclasses> DRACClassIdentity;

typedef Integer<CONSTRAINED, 0, maxE-DCHMACdFlow-1> EDCHMACdFlowIdentity;

typedef Integer<CONSTRAINED, 0, 15> EDCHMACdFlowMaxRetrans;

typedef BitString<CONSTRAINED, maxE-DCHMACdFlow, maxE-DCHMACdFlow> EDCHMACdFlowMultiplexingList;

typedef Integer<CONSTRAINED, 0, 6> EDCHMACdFlowPowerOffset;

typedef Integer<CONSTRAINED, 0, 15> GainFactor;

typedef Integer<CONSTRAINED, 0, 7> MACdFlowIdentity;

typedef Integer<CONSTRAINED, 0, 7> MACehsQueueId;

typedef Integer<CONSTRAINED, -5, 10> PowerOffsetPpm;

typedef Integer<CONSTRAINED, 1, hiRM> RateMatchingAttribute;

typedef Integer<CONSTRAINED, 0, 3> ReferenceTFCID;

typedef Integer<CONSTRAINED, 0, 1023> TFCValue;

typedef Integer<CONSTRAINED, 1, 8> TFCSIdentityPlain;

typedef Integer<CONSTRAINED, 1, 256> TimeDurationBeforeRetry;

typedef Integer<CONSTRAINED, 1, 256> TransmissionTimeValidity;

typedef Integer<CONSTRAINED, 1, 32> TransportChannelIdentity;

typedef Integer<CONSTRAINED, 1, 4> ACKNACKrepetitionFactor;

typedef Integer<CONSTRAINED, 0, 7> ACToASCMapping;

typedef Integer<CONSTRAINED, 0 ,  255> ActivationTimeOffset;

typedef Integer<CONSTRAINED, -22, 5> AICHPowerOffset;

typedef Integer<CONSTRAINED, 0, 8> Alpha;

typedef Integer<CONSTRAINED, 0, 255> APAICHChannelisationCode;

typedef Integer<CONSTRAINED, 0, 79> APPreambleScramblingCode;

typedef Integer<CONSTRAINED, 0, 15> APSignature;

typedef Integer<CONSTRAINED, 0, 11> APSubchannel;

typedef BitStringtypedef BitStringtypedef Integer<CONSTRAINED, -63, 0> BlerTarget;

typedef Integer<CONSTRAINED, 0, 11> CDAccessSlotSubchannel;

typedef Integer<CONSTRAINED, 0, 255> CDCAICHChannelisationCode;

typedef Integer<CONSTRAINED, 0, 79> CDPreambleScramblingCode;

typedef Integer<CONSTRAINED, 0, 15> CDSignatureCode;

typedef Integer<CONSTRAINED, 0, 127> CellParametersID;

typedef Integer<CONSTRAINED, 0, 255> Cfntargetsfnframeoffset;

typedef Integer<CONSTRAINED, 0, 255> ChannelisationCode256;

typedef Integer<CONSTRAINED, 0, 255> CodeNumberDSCH;

typedef Integer<CONSTRAINED, -35, -10> ConstantValue;

typedef Integer<CONSTRAINED, -35, 10> ConstantValueTdd;

typedef Integer<CONSTRAINED, 1, 4> CQIRepetitionFactor;

typedef Integer<CONSTRAINED, -10, 5> CSICHPowerOffset;

typedef Integer<CONSTRAINED, 0, 599> DefaultDPCHOffsetValueFDD;

typedef Integer<CONSTRAINED, 0, 7> DefaultDPCHOffsetValueTDD;

typedef Integer<CONSTRAINED, -10, 10> DeltaPpm;

typedef Integer<CONSTRAINED, 0, 8> DeltaCQI;

typedef Integer<CONSTRAINED, 0, 8> DeltaNACK;

typedef Integer<CONSTRAINED, 0, 8> DeltaACK;

typedef Integer<CONSTRAINED, 0, 30> DeltaSIR;

typedef Integer<CONSTRAINED, -20, 10> DHSSync;

typedef Integer<CONSTRAINED, -82, -3> DPCCHPowerOffset;

typedef Integer<CONSTRAINED, -28, -13> DPCCHPowerOffset2;

typedef Integer<CONSTRAINED, 0, 149> DPCHFrameOffset;

typedef Integer<CONSTRAINED, 0, 9> FDPCHSlotFormat;

typedef Integer<CONSTRAINED, 0, 511> DSCHRadioLinkIdentifier;

typedef Integer<CONSTRAINED, 1, 4096> DurationTimeInfo;

typedef Integer<CONSTRAINED, 1, 8> DynamicPersistenceLevel;

typedef Integer<CONSTRAINED, 0, 255> EAGCHChannelisationCode;

typedef Integer<CONSTRAINED, 0, 127> EDCHMinimumSetETFCI;

typedef Integer<CONSTRAINED, 0, 8> EDPCCHDPCCHPowerOffset;

typedef Integer<CONSTRAINED, 11, 25> EDPDCHPLNonMax;

typedef Integer<CONSTRAINED, 0, 127> EHICHChannelisationCode;

typedef Integer<CONSTRAINED, 0, 39> EHICHRGCHSignatureSequence;

typedef Integer<CONSTRAINED, 0, 5> ERGCHCombinationIndex;

typedef Integer<CONSTRAINED, 0, 1> ETFCITableIndex;

typedef Integer<CONSTRAINED, 0, 65535> EARFCN;

typedef Integer<CONSTRAINED, 0, 1> HARQPreambleMode;

typedef Integer<CONSTRAINED, 0, 127> HSSCCHCodes;

typedef Integer<CONSTRAINED, 1, 128> NidentifyAbort;

typedef Integer<CONSTRAINED, -50, 33> MaxAllowedULTXPower;

typedef Integer<CONSTRAINED, 1, 64> MaxAvailablePCPCHNumber;

typedef Integer<CONSTRAINED, 0, 3> MaxPowerIncreaser4;

typedef Integer<CONSTRAINED, 1, 1023> MaxTFCIField2Value;

typedef Integer<CONSTRAINED, 0, 15> MidambleShiftLong;

typedef Integer<CONSTRAINED, 0, 5> MidambleShiftShort;

typedef Integer<CONSTRAINED, 0, 7> MidambleShiftShortVHCR;

typedef Integer<CONSTRAINED, 1, 16> MultiCodeInfo;

typedef Integer<CONSTRAINED, 0, 7> NEOT;

typedef Integer<CONSTRAINED, 1, 8> NPCH;

typedef Integer<CONSTRAINED, 1, 8> NStartMessage;

typedef Integer<CONSTRAINED, 0, 50> NB01;

typedef Integer<CONSTRAINED, 1, 64> NFMax;

typedef Integer<CONSTRAINED, 1, maxDPDCH-UL> NumberOfDPDCH;

typedef Integer<CONSTRAINED, 1, 2> NumberOfFBIBits;

typedef Integer<CONSTRAINED, 0, 7> PCPreamble;

typedef Integer<CONSTRAINED, 1, hiPDSCHidentities> PDSCHIdentity;

typedef Integer<CONSTRAINED, -10, 5> PICHPowerOffset;

typedef Integer<CONSTRAINED, -12, 26> MeasurementPowerOffset;

typedef Integer<CONSTRAINED, 0, 255> PowerControlGAP;

typedef Integer<CONSTRAINED, 0, 24> PowerOffsetPilotpdpdch;

typedef Integer<CONSTRAINED, 0, 24> PowerOffsetTPCpdpdch;

typedef Integer<CONSTRAINED, 1, 8> PowerRampStep;

typedef Integer<CONSTRAINED, 1, 64> PreambleRetransMax;

typedef Integer<CONSTRAINED, 0, 15> PreambleScramblingCodeWordNumber;

typedef Integer<CONSTRAINED, 6, 43> PrimaryCCPCHTXPower;

typedef Integer<CONSTRAINED, -10, 50> PrimaryCPICHTXPower;

typedef Integer<CONSTRAINED, 0, 511> PrimaryScramblingCode;

typedef Integer<CONSTRAINED, 1, hiPUSCHidentities> PUSCHIdentity;

typedef Integer<CONSTRAINED, 0, 8191> ReducedScramblingCodeNumber;

typedef Integer<CONSTRAINED, -6, 0> SCPICHPowerOffsetMIMO;

typedef Integer<CONSTRAINED, 1, 15> SecondaryScramblingCode;

typedef Integer<CONSTRAINED, 0, 3> ServingCellChangeTrId;

typedef Integer<CONSTRAINED, 0, 7> SpecialBurstScheduling;

typedef Integer<CONSTRAINED, 0, 7> SRBdelay;

typedef BitStringtypedef Integer<CONSTRAINED, -110, -52> TDDULInterference;

typedef Integer<CONSTRAINED, 0, 255> TGCFN;

typedef Integer<CONSTRAINED, 15, 270> TGD;

typedef Integer<CONSTRAINED, 1, 14> TGL;

typedef Integer<CONSTRAINED, 0, 255> TGPSReconfigurationCFN;

typedef Integer<CONSTRAINED, 1, 144> TGPL;

typedef Integer<CONSTRAINED, 0, 511> TGPRC;

typedef Integer<CONSTRAINED, 1, maxTGPS> TGPSI;

typedef Integer<CONSTRAINED, 0, 14> TGSN;

typedef Integer<CONSTRAINED, 0, 14> TimeslotNumber;

typedef Integer<CONSTRAINED, 0, 6> TimeslotNumberLCRr4;

typedef Integer<CONSTRAINED, 1, 6> TimeslotNumberPRACHLCRr4;

typedef Integer<CONSTRAINED, 0, 6> TimeslotSync2;

typedef Integer<CONSTRAINED, 0, 149> TimingOffset;

typedef Integer<CONSTRAINED, 0, 5> TPCCombinationIndex;

typedef Integer<CONSTRAINED, 0, 10> TPCCommandTargetRate;

typedef Integer<CONSTRAINED, 0, 1> TPCStepSizeFDD;

typedef Integer<CONSTRAINED, 1, 3> TPCStepSizeTDD;

typedef Integer<CONSTRAINED, 1, 32> TransportBlockSizeIndex;

typedef Integer<CONSTRAINED, 1, 20> TreconfirmAbort;

typedef Integer<CONSTRAINED, 0, 16383> UARFCN;

typedef Integer<CONSTRAINED, 0, 159> UEDTXDRXOffset;

typedef Integer<CONSTRAINED, -110, -70> ULInterference;

typedef Integer<CONSTRAINED, 0, 16777215> ULScramblingCode;

typedef Integer<CONSTRAINED, 0, 62> ULTargetSIR;

typedef Integer<CONSTRAINED, 0, 63> ULTimingAdvance;

typedef Integer<CONSTRAINED, 0, 127> UpPCHpositionLCR;

typedef Integer<CONSTRAINED, 1, 4> WiLCR;

typedef Integer<CONSTRAINED, 0, 1023> BCCHARFCN;

typedef Integer<CONSTRAINED, -20, 20> CellIndividualOffset;

typedef Integer<CONSTRAINED, 0, 63> CPICHEcN0;

typedef Integer<CONSTRAINED, 0, 127> CPICHRSCP;

typedef Integer<CONSTRAINED, -127, 127> DeltaPRC;

typedef Integer<CONSTRAINED, -2, -1> DeltaQrxlevmin;

typedef Integer<CONSTRAINED, -5, -1> DeltaRSCP;

typedef Integer<CONSTRAINED, -7, 7> DeltaRRC;

typedef BitString<CONSTRAINED, 8, 8> DGANSSSigIdReq;

typedef Integer<CONSTRAINED, 0, 63> DLTransportChannelBLER;

typedef Integer<CONSTRAINED, 0, 15> FineSFNSFN;

typedef Integer<CONSTRAINED, 0, 7> GANSSSignalId;

typedef BitString<CONSTRAINED, 6, 6> GSMCarrierRSSI;

typedef Integer<CONSTRAINED, 0, 604799999> GPSTOW1msec;

typedef Integer<CONSTRAINED, 0, 604799> GPSTOW1sec;

typedef Integer<CONSTRAINED, 0, 7> HCSPRIO;

typedef Integer<CONSTRAINED, 0, 15> Hysteresis;

typedef Integer<CONSTRAINED, 0, 29> HysteresisInterFreq;

typedef Integer<CONSTRAINED, 0, maxCellMeas-1> InterFreqCellID;

typedef Integer<CONSTRAINED, 0, maxCellMeas-1> InterRATCellID;

typedef Integer<CONSTRAINED, 0, 3> InterRATCellInfoIndication;

typedef Integer<CONSTRAINED, -50, 50> InterRATCellIndividualOffset;

typedef Integer<CONSTRAINED, 0, maxCellMeas-1> IntraFreqCellID;

typedef Integer<CONSTRAINED, 0, maxCellMeasOnSecULFreq-1> IntraFreqCellIDOnSecULFreq;

typedef Integer<CONSTRAINED, 0, 255> IODE;

typedef Integer<CONSTRAINED, 1, 8> MaxReportedCellsOnRACHinterFreq;

typedef Integer<CONSTRAINED, 1, 16> MeasurementIdentity;

typedef Integer<CONSTRAINED, 17, 32> MeasurementIdentityExt;

typedef Integer<CONSTRAINED, 1, 32> MeasurementIdentityr9;

typedef BitString<CONSTRAINED, 3, 3> NCMode;

typedef Integer<CONSTRAINED, 0, 4095> ObservedTimeDifferenceToGSM;

typedef Integer<CONSTRAINED, 46, 173> Pathloss;

typedef Integer<CONSTRAINED, -2047, 2047> PRC;

typedef Integer<CONSTRAINED, 0, 127> PrimaryCCPCHRSCP;

typedef Integer<CONSTRAINED, 0, 99> QHCS;

typedef Integer<CONSTRAINED, -50, 50> QOffsetSN;

typedef Integer<CONSTRAINED, -24, 0> QQualMin;

typedef Integer<CONSTRAINED, 1, 16> QQualMinOffset;

typedef Integer<CONSTRAINED, -58, -13> QRxlevMin;

typedef Integer<CONSTRAINED, 1, 8> QRxlevMinOffset;

typedef Integer<CONSTRAINED, 0, 29> ReportingRange;

typedef Integer<CONSTRAINED, -127, 127> RRC;

typedef Integer<CONSTRAINED, 0, 63> SatID;

typedef Integer<CONSTRAINED, 0, 16777215> SFNSFNObsTimeDifference1;

typedef Integer<CONSTRAINED, 0, 65535> SFNSFNObsTimeDifference2;

typedef Integer<CONSTRAINED, 0, 63> SIR;

typedef Integer<CONSTRAINED, -115, 0> Threshold;

typedef Integer<CONSTRAINED, -120, 0> Thresholdr6;

typedef Integer<CONSTRAINED, -115, 165> ThresholdUsedFrequency;

typedef Integer<CONSTRAINED, -120, 165> ThresholdUsedFrequencyr6;

typedef Integer<CONSTRAINED, 1, 13> TimeInterval;

typedef Integer<CONSTRAINED, 0, 127> TimeslotISCP;

typedef Integer<CONSTRAINED, -50, 33> TransmittedPowerThreshold;

typedef Integer<CONSTRAINED, 768, 1791> UERXTXTimeDifferenceType1;

typedef Integer<CONSTRAINED, 0, 8191> UERXTXTimeDifferenceType2;

typedef Integer<CONSTRAINED, 768, 1280> UERXTXTimeDifferenceThreshold;

typedef Integer<CONSTRAINED, 0, 104> UETransmittedPower;

typedef BitString<CONSTRAINED, 7, 7> UEPositioningAccuracy;

typedef Integer<CONSTRAINED, 0, 127> UEPositioningGPSReferenceTimeUncertainty;

typedef Integer<CONSTRAINED, 0, 127> UTRACarrierRSSI;

typedef Integer<CONSTRAINED, 0, 20> W;

typedef Integer<CONSTRAINED, 0, 7> BCC;

typedef Integer<CONSTRAINED, 0, 511> BCCHModificationTime;

typedef Integer<CONSTRAINED, 1, 4> CellValueTag;

typedef OctetStringtypedef Integer<CONSTRAINED, 0, 503> EUTRAPhysicalCellIdentity;

typedef Integer<CONSTRAINED, 1, 8> ExpirationTimeFactor;

typedef OctetString<CONSTRAINED, 1, 23> GERANSystemInfoBlock;

typedef OctetString<CONSTRAINED, 5, 5> GSMClassmark2;

typedef OctetString<CONSTRAINED, 1, 32> GSMClassmark3;

typedef OctetString<CONSTRAINED, 1, 64> GSMMSRadioAccessCapability;

typedef BitStringtypedef OctetString<CONSTRAINED, 1, maxHNBNameSize> HNBName;

typedef BitString<CONSTRAINED, 1, 170> GERANIuRadioAccessCapability;

typedef Integer<CONSTRAINED, 1, 8> MIBValueTag;

typedef Integer<CONSTRAINED, 0, 7> NCC;

typedef Integer<CONSTRAINED, 1, 256> PLMNValueTag;

typedef Integer<CONSTRAINED, 1, 16> SegCount;

typedef Integer<CONSTRAINED, 1, 15> SegmentIndex;

typedef Integer<CONSTRAINED, 0, 2047> SFNPrime;

typedef BitString<CONSTRAINED, 222, 222> SIBDatafixed;

typedef BitString<CONSTRAINED, 1, 214> SIBDatavariable;

typedef Integer<CONSTRAINED, 0, 15> SIBOccurIdentity;

typedef Integer<CONSTRAINED, 0, 15> SIBOccurValueTag;

typedef BitString<CONSTRAINED, 1, 2048> ANSI41NASParameter;

typedef BitString<CONSTRAINED, 8, 8> MinPREV;

typedef BitString<CONSTRAINED, 16, 16> NID;

typedef BitString<CONSTRAINED, 8, 8> PREV;

typedef BitString<CONSTRAINED, 15, 15> SID;

typedef BitString<CONSTRAINED, 12, 12> MBMSCellGroupIdentityr6;

typedef Integer<CONSTRAINED, 1, 32> MBMSCommonCCTrChIdentity;

typedef Integer<CONSTRAINED, 1, 32> MBMSCommonPhyChIdentity;

typedef Integer<CONSTRAINED, 1, 32> MBMSCommonRBIdentity;

typedef Integer<CONSTRAINED, 1, 32> MBMSCommonTrChIdentity;

typedef Integer<CONSTRAINED, 0, 3> MBMSL1CombiningTransmTimeDiff;

typedef Integer<CONSTRAINED, 1, 15> MBMSLogicalChIdentity;

typedef Integer<CONSTRAINED, -10, 5> MBMSMICHPowerOffset;

typedef Integer<CONSTRAINED, 0, 32> MBMSNumberOfNeighbourCellsr6;

typedef Integer<CONSTRAINED, 1, maxMBMS-Freq> MBMSPFLIndex;

typedef Integer<CONSTRAINED, 0, 2047> MBMSPTMActivationTimer6;

typedef Integer<CONSTRAINED, 1, maxSCCPCH> MBMSSCCPCHIdentity;

typedef OctetString<CONSTRAINED, 1, 1> MBMSSessionIdentity;

typedef Integer<CONSTRAINED, 1, maxMBMSservUnmodif> MBMSShortTransmissionID;

typedef Integer<CONSTRAINED, 1, maxMBSFNClusters> MBSFNClusterFrequencyr7;


/*
 * Compound RRC message information elements.
 */

class Fdd : public Sequence {
private:
    static const void *itemsInfo[1];
    static bool itemsPres[1];
public:
    static const Info theInfo;
    Fdd() : Sequence(&theInfo) {}
//  AllocationAndRetentionPriority(unsigned char prioLvl = 0, unsigned char preCapab = 0, unsigned char preVul = 0, ProtocolExtContainer *exts = NULL);

//  unsigned char getPriorityLevel() const { return static_cast<PriorityLevel*>(items[0])->getValue(); }
//  unsigned char getPreEmptionCapability() const { return static_cast<PreEmptionCapability*>(items[1])->getValue(); }
//  unsigned char getPreEmptionVulnerability() const { return static_cast<PreEmptionVulnerability*>(items[2])->getValue(); }
//
//  void setPriorityLevel(unsigned char prioLvl) { static_cast<PriorityLevel*>(items[0])->setValue(prioLvl); }
//  void setPreEmptionCapability(unsigned char preCapab) { static_cast<PriorityLevel*>(items[1])->setValue(preCapab); }
//  void setPreEmptionVulnerability(unsigned char preVul) { static_cast<PriorityLevel*>(items[2])->setValue(preVul); }
//  void setProtocolExtContainer(ProtocolExtContainer *exts);
};

typedef SequenceOf<Digit, CONSTRAINED, 15, 15> Imei;
//ERabToBeSetupListCtxtSuReq *toERabToBeSetupListCtxtSuReq(std::vector<BearerContext*> bearers);
//std::vector<BearerContext*> fromERabToBeSetupListCtxtSuReq(ERabToBeSetupListCtxtSuReq *eRabToBeSetupListCtxtSuReq);

class ImsiAndEsnDs41 : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ImsiAndEsnDs41() : Sequence(&theInfo) {}
//	AllocationAndRetentionPriority(unsigned char prioLvl = 0, unsigned char preCapab = 0, unsigned char preVul = 0, ProtocolExtContainer *exts = NULL);

//	unsigned char getPriorityLevel() const { return static_cast<PriorityLevel*>(items[0])->getValue(); }
//	unsigned char getPreEmptionCapability() const { return static_cast<PreEmptionCapability*>(items[1])->getValue(); }
//	unsigned char getPreEmptionVulnerability() const { return static_cast<PreEmptionVulnerability*>(items[2])->getValue(); }
//
//	void setPriorityLevel(unsigned char prioLvl) { static_cast<PriorityLevel*>(items[0])->setValue(prioLvl); }
//	void setPreEmptionCapability(unsigned char preCapab) { static_cast<PriorityLevel*>(items[1])->setValue(preCapab); }
//	void setPreEmptionVulnerability(unsigned char preVul) { static_cast<PriorityLevel*>(items[2])->setValue(preVul); }
//	void setProtocolExtContainer(ProtocolExtContainer *exts);
};

class IntegrityCheckInfo : public Sequence {
private:
    static const void *itemsInfo[2];
    static bool itemsPres[2];
public:
    static const Info theInfo;
    IntegrityCheckInfo() : Sequence(&theInfo) {}
//  AllocationAndRetentionPriority(unsigned char prioLvl = 0, unsigned char preCapab = 0, unsigned char preVul = 0, ProtocolExtContainer *exts = NULL);

//  unsigned char getPriorityLevel() const { return static_cast<PriorityLevel*>(items[0])->getValue(); }
//  unsigned char getPreEmptionCapability() const { return static_cast<PreEmptionCapability*>(items[1])->getValue(); }
//  unsigned char getPreEmptionVulnerability() const { return static_cast<PreEmptionVulnerability*>(items[2])->getValue(); }
//
//  void setPriorityLevel(unsigned char prioLvl) { static_cast<PriorityLevel*>(items[0])->setValue(prioLvl); }
//  void setPreEmptionCapability(unsigned char preCapab) { static_cast<PriorityLevel*>(items[1])->setValue(preCapab); }
//  void setPreEmptionVulnerability(unsigned char preVul) { static_cast<PriorityLevel*>(items[2])->setValue(preVul); }
//  void setProtocolExtContainer(ProtocolExtContainer *exts);
};

typedef SequenceOf<Digit, CONSTRAINED, 6, 21> ImsiGsmMap;
//ERabToBeSetupListCtxtSuReq *toERabToBeSetupListCtxtSuReq(std::vector<BearerContext*> bearers);
//std::vector<BearerContext*> fromERabToBeSetupListCtxtSuReq(ERabToBeSetupListCtxtSuReq *eRabToBeSetupListCtxtSuReq);

typedef SequenceOf<Digit, CONSTRAINED, 3, 3> Mcc;
Mcc *toMcc(std::vector<unsigned char> mcc);
std::vector<unsigned char> fromMcc(Mcc *mcc);

typedef SequenceOf<Digit, CONSTRAINED, 2, 3> Mnc;
Mnc *toMnc(std::vector<unsigned char> mnc);
std::vector<unsigned char> fromMnc(Mnc *mnc);

enum MeasurementQuantityChoices {
    cpichEcN0 = 0,
    cpichRscp = 1,
    pathloss = 2,
    spareMeasurementQuantity = 3
};

class MeasurementQuantity : public Choice {
private:
    static const void *choicesInfo[4];
public:
    static const Info theInfo;
    MeasurementQuantity() : Choice(&theInfo) {}

//  void setId(char *id);
//  char *getId();
};

class MeasuredResultsOnRACH : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MeasuredResultsOnRACH() : Sequence(&theInfo) {}
//	AllocationAndRetentionPriority(unsigned char prioLvl = 0, unsigned char preCapab = 0, unsigned char preVul = 0, ProtocolExtContainer *exts = NULL);

//	unsigned char getPriorityLevel() const { return static_cast<PriorityLevel*>(items[0])->getValue(); }
//	unsigned char getPreEmptionCapability() const { return static_cast<PreEmptionCapability*>(items[1])->getValue(); }
//	unsigned char getPreEmptionVulnerability() const { return static_cast<PreEmptionVulnerability*>(items[2])->getValue(); }
//
//	void setPriorityLevel(unsigned char prioLvl) { static_cast<PriorityLevel*>(items[0])->setValue(prioLvl); }
//	void setPreEmptionCapability(unsigned char preCapab) { static_cast<PriorityLevel*>(items[1])->setValue(preCapab); }
//	void setPreEmptionVulnerability(unsigned char preVul) { static_cast<PriorityLevel*>(items[2])->setValue(preVul); }
//	void setProtocolExtContainer(ProtocolExtContainer *exts);
};

class PlmnIdentity : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PlmnIdentity() : Sequence(&theInfo) {}
	PlmnIdentity(std::vector<unsigned char> mcc, std::vector<unsigned char>mnc);

	//	unsigned char getPriorityLevel() const { return static_cast<PriorityLevel*>(items[0])->getValue(); }
//	unsigned char getPreEmptionCapability() const { return static_cast<PreEmptionCapability*>(items[1])->getValue(); }
//	unsigned char getPreEmptionVulnerability() const { return static_cast<PreEmptionVulnerability*>(items[2])->getValue(); }
//
	void setMcc(std::vector<unsigned char> mcc) { *static_cast<Mcc*>(items[0]) = toMcc(mcc); }
	void setMnc(std::vector<unsigned char>mnc) { *static_cast<Mnc*>(items[1]) = toMnc(mnc); }
};

class Lai : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Lai() : Sequence(&theInfo) {}
	Lai(PlmnIdentity& plmnId, char *lac);

//	unsigned char getPriorityLevel() const { return static_cast<PriorityLevel*>(items[0])->getValue(); }
//	unsigned char getPreEmptionCapability() const { return static_cast<PreEmptionCapability*>(items[1])->getValue(); }
//	unsigned char getPreEmptionVulnerability() const { return static_cast<PreEmptionVulnerability*>(items[2])->getValue(); }

	void setPlmnIdentity(PlmnIdentity& plmnId) { *static_cast<PlmnIdentity*>(items[0]) = plmnId; }
	void setLac(char *lac) { static_cast<Lac*>(items[1])->setValue(lac); }
};

class Rai : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Rai() : Sequence(&theInfo) {}
//	AllocationAndRetentionPriority(unsigned char prioLvl = 0, unsigned char preCapab = 0, unsigned char preVul = 0, ProtocolExtContainer *exts = NULL);

//	unsigned char getPriorityLevel() const { return static_cast<PriorityLevel*>(items[0])->getValue(); }
//	unsigned char getPreEmptionCapability() const { return static_cast<PreEmptionCapability*>(items[1])->getValue(); }
//	unsigned char getPreEmptionVulnerability() const { return static_cast<PreEmptionVulnerability*>(items[2])->getValue(); }
//
//	void setPriorityLevel(unsigned char prioLvl) { static_cast<PriorityLevel*>(items[0])->setValue(prioLvl); }
//	void setPreEmptionCapability(unsigned char preCapab) { static_cast<PriorityLevel*>(items[1])->setValue(preCapab); }
//	void setPreEmptionVulnerability(unsigned char preVul) { static_cast<PriorityLevel*>(items[2])->setValue(preVul); }
//	void setProtocolExtContainer(ProtocolExtContainer *exts);
};

class PTmsiAndRaiGsmMap : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PTmsiAndRaiGsmMap() : Sequence(&theInfo) {}
//	AllocationAndRetentionPriority(unsigned char prioLvl = 0, unsigned char preCapab = 0, unsigned char preVul = 0, ProtocolExtContainer *exts = NULL);

//	unsigned char getPriorityLevel() const { return static_cast<PriorityLevel*>(items[0])->getValue(); }
//	unsigned char getPreEmptionCapability() const { return static_cast<PreEmptionCapability*>(items[1])->getValue(); }
//	unsigned char getPreEmptionVulnerability() const { return static_cast<PreEmptionVulnerability*>(items[2])->getValue(); }
//
//	void setPriorityLevel(unsigned char prioLvl) { static_cast<PriorityLevel*>(items[0])->setValue(prioLvl); }
//	void setPreEmptionCapability(unsigned char preCapab) { static_cast<PriorityLevel*>(items[1])->setValue(preCapab); }
//	void setPreEmptionVulnerability(unsigned char preVul) { static_cast<PriorityLevel*>(items[2])->setValue(preVul); }
//	void setProtocolExtContainer(ProtocolExtContainer *exts);
};

enum SfnSfnObsTimeDifferenceChoices {
    type1 = 0,
    type2 = 1
};

class SfnSfnObsTimeDifference : public Choice {
private:
    static const void *choicesInfo[2];
public:
    static const Info theInfo;
    SfnSfnObsTimeDifference() : Choice(&theInfo) {}

//  void setId(char *id);
//  char *getId();
};

class Tdd : public Sequence {
private:
    static const void *itemsInfo[2];
    static bool itemsPres[2];
public:
    static const Info theInfo;
    Tdd() : Sequence(&theInfo) {}
//  AllocationAndRetentionPriority(unsigned char prioLvl = 0, unsigned char preCapab = 0, unsigned char preVul = 0, ProtocolExtContainer *exts = NULL);

//  unsigned char getPriorityLevel() const { return static_cast<PriorityLevel*>(items[0])->getValue(); }
//  unsigned char getPreEmptionCapability() const { return static_cast<PreEmptionCapability*>(items[1])->getValue(); }
//  unsigned char getPreEmptionVulnerability() const { return static_cast<PreEmptionVulnerability*>(items[2])->getValue(); }
//
//  void setPriorityLevel(unsigned char prioLvl) { static_cast<PriorityLevel*>(items[0])->setValue(prioLvl); }
//  void setPreEmptionCapability(unsigned char preCapab) { static_cast<PriorityLevel*>(items[1])->setValue(preCapab); }
//  void setPreEmptionVulnerability(unsigned char preVul) { static_cast<PriorityLevel*>(items[2])->setValue(preVul); }
//  void setProtocolExtContainer(ProtocolExtContainer *exts);
};

typedef SequenceOf<TimeslotIscp, CONSTRAINED, 1, maxTS> TimeslotIscpList;

class TmsiAndLaiGsmMap : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TmsiAndLaiGsmMap() : Sequence(&theInfo) {}
	TmsiAndLaiGsmMap(char *tmsi, Lai& lai);

//	unsigned char getPriorityLevel() const { return static_cast<PriorityLevel*>(items[0])->getValue(); }
//	unsigned char getPreEmptionCapability() const { return static_cast<PreEmptionCapability*>(items[1])->getValue(); }
//	unsigned char getPreEmptionVulnerability() const { return static_cast<PreEmptionVulnerability*>(items[2])->getValue(); }
//
	void setTmsiGsmMap(char *tmsi) { static_cast<TmsiGsmMap*>(items[0])->setValue(tmsi); }
	void setLai(Lai& lai) { *static_cast<Lai*>(items[1]) = lai; }
};

enum InitialUeIdentityChoices {
	imsi = 0,
	tmsiAndLai = 1,
	pTmsiAndRai = 2,
	imei = 3,
	esnDs41 = 4,
	imsiDs41 = 5,
	imsiAndEsnDs41 = 6,
	tmsiAndDs41 = 7
};

class InitialUeIdentity : public Choice {
private:
	static const void *choicesInfo[8];
public:
	static const Info theInfo;
	InitialUeIdentity() : Choice(&theInfo) {}

//	void setId(char *id);
//	char *getId();
};

class V3d0NonCriticalExtensions : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V3d0NonCriticalExtensions() : Sequence(&theInfo) {}
//	AllocationAndRetentionPriority(unsigned char prioLvl = 0, unsigned char preCapab = 0, unsigned char preVul = 0, ProtocolExtContainer *exts = NULL);

//	unsigned char getPriorityLevel() const { return static_cast<PriorityLevel*>(items[0])->getValue(); }
//	unsigned char getPreEmptionCapability() const { return static_cast<PreEmptionCapability*>(items[1])->getValue(); }
//	unsigned char getPreEmptionVulnerability() const { return static_cast<PreEmptionVulnerability*>(items[2])->getValue(); }
//
//	void setPriorityLevel(unsigned char prioLvl) { static_cast<PriorityLevel*>(items[0])->setValue(prioLvl); }
//	void setPreEmptionCapability(unsigned char preCapab) { static_cast<PriorityLevel*>(items[1])->setValue(preCapab); }
//	void setPreEmptionVulnerability(unsigned char preVul) { static_cast<PriorityLevel*>(items[2])->setValue(preVul); }
//	void setProtocolExtContainer(ProtocolExtContainer *exts);
};

#endif /* RRCIE_H_ */
