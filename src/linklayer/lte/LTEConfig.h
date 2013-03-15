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
    unsigned blockSize;         // 3GPP TS 36.211 Table 6.2.3-1
    char *cellId;
    char *tac;
    std::vector<PLMNIdentity> plmnIds;

    unsigned find(const double *array, double value);
    unsigned find(const unsigned *array, unsigned value);
    unsigned find(const std::string *array, std::string value);

    void loadConfigFromXML(const char *filename);
protected:
    virtual void initialize();
    virtual void handleMessage(cMessage *msg);

public:
    LTEConfig();

    unsigned getDlBandwith() { return dlBandwith; }
    unsigned getDlBandwithSel() { return find(dlBandwiths, dlBandwith); }
    unsigned getPhichDurationSel() { return find(phichDurations, phichDuration); }
    unsigned getPhichResourceSel() { return find(phichResources, phichResource); }
    unsigned getSymbNumber() { return symbNumber; }
    unsigned getBlockSize() { return blockSize; }
    rrc::PLMNIdentityList getPLMNIdentityList();
    const char *getTAC() { return tac; }
    const char *getCellId() { return cellId; }

    void setDLBandwith(unsigned dlBandwith) { this->dlBandwith = dlBandwiths[find(dlBandwiths, dlBandwith)]; }
    void setDLBandwithIndex(unsigned index) {  if (index < 7) this->dlBandwith = dlBandwiths[index]; }
    void setPhichDuration(const char *phichDuration) { this->phichDuration = phichDurations[find(phichDurations, phichDuration)]; }
    void setPhichDurationIndex(unsigned index) { if (index < 3) this->phichResource = phichResources[index]; }
    void setPhichResource(double phichResource) { this->phichResource = phichResource; }
    void setPhichResourceIndex(unsigned index) { if (index < 4) this->phichDuration = phichDurations[index]; }
    void setSymbNumber(unsigned symbNumber) { this->symbNumber = symbNumbers[find(symbNumbers, symbNumber)]; }
};

#endif /* LTECONFIG_H_ */
