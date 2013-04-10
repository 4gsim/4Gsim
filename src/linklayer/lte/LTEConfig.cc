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

#include "LTEConfig.h"
#include "LTEUtils.h"

Define_Module(LTEConfig);

LTEConfig::LTEConfig() {
    dlBandwith = 6;
    phichDuration = "normal";
    phichResource = 1;
    symbNumber = 7;
    cellId = NULL;
    tac = NULL;
    tti = 0;
    sfn = 0;
    nrOfRAPreambles = 52;
    preambleTransMax = 6;
    raRespWdwSize = 10;
    macContResolTimer = 48;
    maxHARQMsg3Tx = 4;
    prachCfgIndex = 0;
    prachFreqOff = 0;
    preambleFmt = 0;
    raSt = -1;
    msgIds = 100;
}

void LTEConfig::initialize() {
    // TODO - Generated method body

    const char *fileName = par("configFile");
    if (fileName == NULL || (!strcmp(fileName, "")))
        error("LTEConfig: Error reading configuration from file %s", fileName);
    this->loadConfigFromXML(fileName);

    symbNumber = 7;

    WATCH(dlBandwith);
    WATCH(phichDuration);
    WATCH(phichResource);
    WATCH(symbNumber);
    WATCH(tti);
    WATCH(sfn);
    WATCH(nrOfRAPreambles);
    WATCH(preambleTransMax);
    WATCH(raRespWdwSize);
    WATCH(macContResolTimer);
    WATCH(maxHARQMsg3Tx);
    WATCH(preambleFmt);
    WATCH(prachCfgIndex);
    WATCH(prachFreqOff);
}

void LTEConfig::handleMessage(cMessage *msg) {
    // TODO - Generated method body
}

unsigned LTEConfig::find(unsigned value, const unsigned *array, unsigned size) {
    for (unsigned i = 0; i < size; i++)
        if (array[i] == value)
            return i;
    return sizeof(array) - 1;
}

unsigned LTEConfig::find(std::string value, const std::string *array, unsigned size) {
    for (unsigned i = 0; i < size; i++)
        if (!array[i].compare(value))
            return i;
    return sizeof(array) - 1;
}

unsigned LTEConfig::find(double value, const double *array, unsigned size) {
    for (unsigned i = 0; i < size; i++)
        if (array[i] == value)
            return i;
    return sizeof(array) - 1;
}

unsigned LTEConfig::getBlockSize() {
    if (phichDuration.compare("normal")) {
        return 12;
    } else {
        if (symbNumber == 6)
            return 12;
        else
            return 24;
    }
}

rrc::PLMNIdentityList LTEConfig::getPLMNIdentityList() {
    // TODO cellReservedforOperatorUse
    rrc::PLMNIdentityList plmnIdentityList;
    for (unsigned i = 0; i < plmnIds.size(); i++) {
        rrc::PLMNIdentity plmnIdentity;
        PLMNIdentity plmnId = plmnIds[i];
        rrc::MCC mcc;
        mcc.push_back(new rrc::MCCMNCDigit(atoi(plmnId.mcc.substr(0, 1).c_str()) % 10));
        mcc.push_back(new rrc::MCCMNCDigit(atoi(plmnId.mcc.substr(1, 1).c_str()) % 10));
        mcc.push_back(new rrc::MCCMNCDigit(atoi(plmnId.mcc.substr(2, 1).c_str()) % 10));
        rrc::MNC mnc;
        mnc.push_back(new rrc::MCCMNCDigit(atoi(plmnId.mnc.substr(0, 1).c_str()) % 10));
        mnc.push_back(new rrc::MCCMNCDigit(atoi(plmnId.mnc.substr(1, 1).c_str()) % 10));
        if (plmnId.mnc.size() > 2)
            mnc.push_back(rrc::MCCMNCDigit(atoi(plmnId.mnc.substr(2, 1).c_str()) % 10));
        plmnIdentity.setMcc(mcc);
        plmnIdentity.setOptFlag(0, true);
        plmnIdentity.setMnc(mnc);
        rrc::PLMNIdentityInfocellReservedForOperatorUse infoCellResForOpUse = rrc::PLMNIdentityInfocellReservedForOperatorUse(rrc::notReserved_PLMNIdentityInfocellReservedForOperatorUse);
        rrc::PLMNIdentityInfo *plmnIdentityInfo = new rrc::PLMNIdentityInfo(plmnIdentity, infoCellResForOpUse);
        plmnIdentityList.push_back(plmnIdentityInfo);
    }
    return plmnIdentityList;
}

void LTEConfig::loadConfigFromXML(const char *filename) {
    cXMLElement* config = ev.getXMLDocument(filename);
    if (config == NULL)
        error("LTEConfig: Cannot read configuration from file: %s", filename);

    cXMLElement* lteCfgNode = config->getElementByPath("LTEConfig");
    if (lteCfgNode != NULL) {

//        if (lteCfgNode->getAttribute("dlBandwith")) {
//            setDLBandwith(atoi(lteCfgNode->getAttribute("dlBandwith")));
//
//
//
//            if (dlBandwith == 6)
//                preambleFmt = 0;
//        }

        prachFreqOff = uniform(0, dlBandwith - 6);

        switch (prachCfgIndex % 16) {
            case 0: {
//                schedulePRBs(UL_SCHEDULING, -1, 0, 2, INF, 1, 10, INF, prachFreqOff, 1, 6);
                break;
            }
            default:
                break;
        }

        if (lteCfgNode->getAttribute("phichDuration")) {
            setPhichDuration(lteCfgNode->getAttribute("phichDuration"));
        }

        if (lteCfgNode->getAttribute("phichResource")) {
            setPhichResource(atof(lteCfgNode->getAttribute("phichResource")));
        }

        if (lteCfgNode->getAttribute("cellId")) {
            cellId = LTEUtils().toByteString(lteCfgNode->getAttribute("cellId"), CELLID_UNCODED_SIZE);
        }

        if (lteCfgNode->getAttribute("tac")) {
            tac = LTEUtils().toByteString(lteCfgNode->getAttribute("tac"), TAC_UNCODED_SIZE);
        }

        if (lteCfgNode->getAttribute("symbNumber")) {
            setSymbNumber(atoi(lteCfgNode->getAttribute("symbNumber")));
        }

        cXMLElement* plmnIdListNode = lteCfgNode->getElementByPath("PLMNIdentityList");
        if (plmnIdListNode != NULL) {
            cXMLElementList plmnIdList = plmnIdListNode->getChildren();
            for (cXMLElementList::iterator plmnIdListIt = plmnIdList.begin(); plmnIdListIt != plmnIdList.end(); plmnIdListIt++) {
                std::string elementName = (*plmnIdListIt)->getTagName();
                if ((elementName == "PLMNIdentity")) {
                    if ((*plmnIdListIt)->getAttribute("mcc") == NULL && strlen((*plmnIdListIt)->getAttribute("mcc")) < 3)
                        continue;
                    if ((*plmnIdListIt)->getAttribute("mnc") == NULL && strlen((*plmnIdListIt)->getAttribute("mnc")) < 2)
                        continue;
                    PLMNIdentity plmnId;
                    plmnId.mcc = (*plmnIdListIt)->getAttribute("mcc");
                    plmnId.mnc = (*plmnIdListIt)->getAttribute("mnc");
                    plmnIds.push_back(plmnId);
                }
            }

        }
    }
}

void LTEConfig::incrementTTI() {
    tti++;

    if (tti % 10 == 0) {
        tti = 0;
        sfn++;
    }
}

void LTEConfig::schedulePRBs(bool direction, int sfnBegin, int sfnPeriod, int sfnSize, int ttiBegin, int ttiPeriod, int ttiSize, int prbBegin, int prbPeriod, int prbSize) {



    LTETimestamp sfn;
    sfn.setBegin(sfnBegin);
    sfn.setPeriod(sfnPeriod);
    sfn.setSize(sfnSize);
    LTETimestamp tti;
    tti.setBegin(ttiBegin);
    tti.setPeriod(ttiPeriod);
    tti.setSize(ttiSize);
    LTETimestamp prb;
    prb.setPeriod(prbPeriod);
    prb.setSize(prbSize);
    LTESchedulingInfo schInfo;
    schInfo.setSfn(sfn);
    schInfo.setTti(tti);
    schInfo.setPrb(prb);
    if (direction == UL_SCHEDULING)
        ulSchedulings.push_back(schInfo);
    else
        dlSchedulings.push_back(schInfo);
}

void LTEConfig::addFixedScheduling(int msgId, int sfnPeriod, int ttiPeriod, int prbBegin, int prbSize) {
    LTEFixedSchedulingInfo fixedSchedInfo;
    fixedSchedInfo.setMsgId(msgId);
    fixedSchedInfo.setSfnPeriod(sfnPeriod);
    fixedSchedInfo.setTtiPeriod(ttiPeriod);
    fixedSchedInfo.setPrbBegin(prbBegin);
    fixedSchedInfo.setPrbSize(prbSize);
}
