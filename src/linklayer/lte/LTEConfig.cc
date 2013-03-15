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
    dlBandwith = 0;
    phichDuration = "";
    phichResource = 0;
    symbNumber = 0;
    blockSize = 0;
    cellId = NULL;
    tac = NULL;
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
    WATCH(blockSize);
}

void LTEConfig::handleMessage(cMessage *msg) {
    // TODO - Generated method body
}

unsigned LTEConfig::find(const unsigned *array, unsigned value) {
    for (unsigned i = 0; i < sizeof(array); i++)
        if (array[i] == value)
            return i;
    return sizeof(array) - 1;
}

unsigned LTEConfig::find(const std::string *array, std::string value) {
    for (unsigned i = 0; i < sizeof(array); i++)
        if (!array[i].compare(value))
            return i;
    return sizeof(array) - 1;
}

unsigned LTEConfig::find(const double *array, double value) {
    for (unsigned i = 0; i < sizeof(array); i++)
        if (array[i] == value)
            return i;
    return sizeof(array) - 1;
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

        if (lteCfgNode->getAttribute("dlBandwith")) {
            setDLBandwith(atoi(lteCfgNode->getAttribute("dlBandwith")));
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

        if (phichDuration.compare("normal")) {
            blockSize = 12;
        } else {
            if (symbNumber == 6)
                blockSize = 12;
            else
                blockSize = 24;
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


