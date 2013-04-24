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

#ifndef LTECONFIG_H_
#define LTECONFIG_H_

#include <omnetpp.h>
#include "RRCClassDefinitions.h"

static const unsigned dlBandwiths[6] = { 6, 15, 25, 50, 75, 100 };
static const std::string phichDurations[2] = { "normal", "extended" };
static const double phichResources[4] = {  0.166, 0.5, 1, 2 };
static const unsigned symbNumbers[3] = { 7, 6, 3 };
static const unsigned nrOfRAPreambless[16] = { 4, 8, 12, 16, 20, 24, 28, 32, 36, 40, 44, 48, 52, 56, 60, 64 };
static const unsigned sizeOfRAPreamblesGroupAs[16] = { 4, 8, 12, 16, 20, 24, 28, 32, 36, 40, 44, 48, 52, 56, 60, 64 };
static const unsigned preambleTransMaxs[11] = { 3, 4, 5, 6, 7, 8, 10, 20, 50, 100, 200 };
static const unsigned raRespWdwSizes[8] = { 2, 3, 4, 5, 6, 7, 8, 10 };
static const unsigned macContResolTimers[8] = { 8, 16, 24, 32, 40, 48, 56, 64 };
static const unsigned maxHARQMsg3Txs[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };

#define TDD_MODE    0
#define FDD_MODE    1

//struct LTEResource {
//    int msgId;
//    int prbId;
//};

class LTEConfig : public cSimpleModule {
private:
    struct PLMNIdentity {
        std::string mcc;
        std::string mnc;
    };

    unsigned dlBandwith;
    std::string phichDuration;        // 3GPP TS 36.211 Table 6.9.3-1
    double phichResource;       // 3GPP TS 36.211 6.9
    unsigned symbNumber;        // 3GPP TS 36.211
    char *cellId;
    char *tac;
    std::vector<PLMNIdentity> plmnIds;
    unsigned nrOfRAPreambles;
    unsigned sizeOfRAPreamblesGroupA;
    unsigned preambleTransMax;
    unsigned raRespWdwSize;
    unsigned macContResolTimer;
    unsigned maxHARQMsg3Tx;
    unsigned prachCfgIndex;
    unsigned preambleFmt;
    unsigned prachFreqOff;
    bool transMode;
    unsigned preambleIndex;
    int prachMaskIndex;

    int raSt;

    unsigned find(double value, const double *array, unsigned size);
    unsigned find(unsigned value, const unsigned *array, unsigned size);
    unsigned find(std::string value, const std::string *array, unsigned size);

    void loadConfigFromXML(const char *filename);
protected:
    virtual void initialize();
    virtual void handleMessage(cMessage *msg);

public:
    LTEConfig();

    unsigned getDlBandwith() { return dlBandwith; }
    unsigned getDlBandwithSel() { return find(dlBandwith, dlBandwiths, 6); }
    unsigned getPhichDurationSel() { return find(phichDuration, phichDurations, 2); }
    unsigned getPhichResourceSel() { return find(phichResource, phichResources, 4); }
    unsigned getSymbNumber() { return symbNumber; }
    unsigned getBlockSize(); // 3GPP TS 36.211 Table 6.2.3-1
    unsigned getNrOfRAPreambles() { return nrOfRAPreambles; }
    unsigned getNrOfRAPreamblesSel() { return find(nrOfRAPreambles, nrOfRAPreambless, 16); }
    unsigned getSizeOfRAPreamblesGroupA() { return sizeOfRAPreamblesGroupA; }
    unsigned getSizeOfRAPreamblesGroupASel() { return find(sizeOfRAPreamblesGroupA, sizeOfRAPreamblesGroupAs, 16); }
    unsigned getPreambleTransMax() { return preambleTransMax; }
    unsigned getPreambleTransMaxSel() { return find(preambleTransMax, preambleTransMaxs, 11); }
    unsigned getRaRespWdwSize() { return raRespWdwSize; }
    unsigned getRaRespWdwSizeSel() { return find(raRespWdwSize, raRespWdwSizes, 8); }
    unsigned getMACContResolTimer() { return macContResolTimer; }
    unsigned getMACContResolTimerSel() { return find(macContResolTimer, macContResolTimers, 8); }
    unsigned getMaxHARQMsg3Tx() { return maxHARQMsg3Tx; }
    rrc::PLMNIdentityList getPLMNIdentityList();
    char *getTAC() { return tac; }
    char *getCellId() { return cellId; }
    unsigned getPRACHFreqOffset() { return prachFreqOff; }
    unsigned getPRACHCfgIndex() { return prachCfgIndex; }
    int getRAState() { return raSt; }
    bool getTransmissionMode() { return transMode; }
    unsigned getPreambleIndex() { return preambleIndex; }
    int getPRACHMaskIndex() { return prachCfgIndex; }

    void setDLBandwith(unsigned dlBandwith) { this->dlBandwith = dlBandwiths[find(dlBandwith, dlBandwiths, 6)]; }
    void setDLBandwithIndex(unsigned index) {  if (index < 7) this->dlBandwith = dlBandwiths[index]; }
    void setPhichDuration(const char *phichDuration) { this->phichDuration = phichDurations[find(phichDuration, phichDurations, 2)]; }
    void setPhichDurationIndex(unsigned index) { if (index < 3) this->phichResource = phichResources[index]; }
    void setPhichResource(double phichResource) { this->phichResource = phichResource; }
    void setPhichResourceIndex(unsigned index) { if (index < 4) this->phichResource = phichResources[index]; }
    void setSymbNumber(unsigned symbNumber) { this->symbNumber = symbNumbers[find(symbNumber, symbNumbers, 3)]; }
    void setTAC(char *tac) { this->tac = tac; }
    void setCellId(char *tac) { this->cellId = cellId; }
    void setNrOfRAPreambles(unsigned nrOfRAPreambles) { this->nrOfRAPreambles = nrOfRAPreambless[find(nrOfRAPreambles, nrOfRAPreambless, 16)]; }
    void setNrOfRAPreamblesIndex(unsigned index) {  if (index < 16) this->nrOfRAPreambles = nrOfRAPreambless[index]; }
    void setSizeOfRAPreamblesGroupA(unsigned sizeOfRAPreamblesGroupA) { this->sizeOfRAPreamblesGroupA = sizeOfRAPreamblesGroupAs[find(sizeOfRAPreamblesGroupA, sizeOfRAPreamblesGroupAs, 16)]; }
    void setSizeOfRAPreamblesGroupAIndex(unsigned index) {  if (index < 16) this->sizeOfRAPreamblesGroupA = sizeOfRAPreamblesGroupAs[index]; }
    void setPreambleTransMax(unsigned preambleTransMax) { this->preambleTransMax = preambleTransMaxs[find(preambleTransMax, preambleTransMaxs, 11)]; }
    void setPreambleTransMaxIndex(unsigned index) {  if (index < 12) this->preambleTransMax = preambleTransMaxs[index]; }
    void setRaRespWdwSize(unsigned raRespWdwSize) { this->raRespWdwSize = raRespWdwSizes[find(raRespWdwSize, raRespWdwSizes, 8)]; }
    void setRaRespWdwSizeIndex(unsigned index) {  if (index < 9) this->raRespWdwSize = raRespWdwSizes[index]; }
    void setMACContResolTimer(unsigned macContResolTimer) { this->macContResolTimer = macContResolTimers[find(macContResolTimer, macContResolTimers, 8)]; }
    void setMACContResolTimerIndex(unsigned index) {  if (index < 9) this->macContResolTimer = macContResolTimers[index]; }
    void setMaxHARQMsg3Tx(unsigned maxHARQMsg3Tx) { this->maxHARQMsg3Tx = maxHARQMsg3Txs[find(maxHARQMsg3Tx, maxHARQMsg3Txs, 8)]; }
    void setPRACHFreqOffset(unsigned prachFreqOff) { if (prachFreqOff < 95) this->prachFreqOff = prachFreqOff; }
    void setPRACHCfgIndex(unsigned prachCfgIndex) { if (prachCfgIndex < 64) this->prachCfgIndex = prachCfgIndex; }
    void setRAState(int raSt) { this->raSt = raSt; }

//    void schedulePRBs(bool direction, int sfnBegin, int sfnPeriod, int sfnSize, int ttiBegin, int ttiPeriod, int ttiSize, int prbBegin, int prbPeriod, int prbSize);
};

#endif /* LTECONFIG_H_ */
