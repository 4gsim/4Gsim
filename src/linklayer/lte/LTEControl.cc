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

#include "LTEControl.h"
#include "PHYCommand_m.h"
#include "PHYenb.h"

Define_Module(LTEControl);

LTEControl::LTEControl() {
    cellId = NULL;
    tac = NULL;
}

LTEControl::~LTEControl() {

}

void LTEControl::initialize(int stage) {
    // TODO - Generated method body
    if (stage == 4) {
        nb = NotificationBoardAccess().get();

        nb->subscribe(this, PARAMResponse);
        nb->subscribe(this, CONFIGResponse);

        const char *fileName = par("configFile");
        if (fileName == NULL || (!strcmp(fileName, "")))
            error("LTEConfig: Error reading configuration from file %s", fileName);
        this->loadConfigFromXML(fileName);

        ParamRequest *paramReq = new ParamRequest();
        nb->fireChangeNotification(PARAMRequest, paramReq);
    }
}

void LTEControl::handleMessage(cMessage *msg) {
    // TODO - Generated method body
}

rrc::PLMNIdentityList LTEControl::getPLMNIdentityList() {
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

void LTEControl::loadConfigFromXML(const char *filename) {
    cXMLElement* config = ev.getXMLDocument(filename);
    if (config == NULL)
        error("LTEConfig: Cannot read configuration from file: %s", filename);

    cXMLElement* lteCfgNode = config->getElementByPath("LTEControl");
    if (lteCfgNode != NULL) {

        if (lteCfgNode->getAttribute("cellId")) {
            cellId = LTEUtils().toByteString(lteCfgNode->getAttribute("cellId"), CELLID_UNCODED_SIZE);
        }

        if (lteCfgNode->getAttribute("tac")) {
            tac = LTEUtils().toByteString(lteCfgNode->getAttribute("tac"), TAC_UNCODED_SIZE);
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

void LTEControl::receiveChangeNotification(int category, const cPolymorphic *details) {
    Enter_Method_Silent();

    if (category == PARAMResponse) {
        ParamResponse *paramResp = check_and_cast<ParamResponse*>(details);
        PhyCommandTlv phySt = paramResp->getTlvs(0);
        if (phySt.getValue() == IDLE) {
            ConfigRequest *cfgReq = new ConfigRequest();
            nb->fireChangeNotification(CONFIGRequest, cfgReq);
        }
    } else if (category == CONFIGResponse) {
        StartRequest *startReq = new StartRequest();
        nb->fireChangeNotification(STARTRequest, startReq);
    }
}
