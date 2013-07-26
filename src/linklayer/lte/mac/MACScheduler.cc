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

#include "MACScheduler.h"
#include "LTEControlInfo_m.h"

Define_Module(MACScheduler);

void MACScheduler::initialize(int stage) {
    // TODO - Generated method body
    if (stage == 3) {
        nb = NotificationBoardAccess().get();

        nb->subscribe(this, SCHED_DL_TRIGGER_REQ);
        nb->subscribe(this, CSCHED_CELL_CONFIG_REQ);
    }
}

void MACScheduler::handleMessage(cMessage *msg) {
    // TODO - Generated method body
}

void MACScheduler::receiveChangeNotification(int category, const cPolymorphic *details) {
    Enter_Method_Silent();

    if (category == SCHED_DL_TRIGGER_REQ) {
        SchedDlTriggerReq *triggReq = check_and_cast<SchedDlTriggerReq*>(details);
        unsigned tti = triggReq->getTti();
        unsigned sfn = tti / 10;
        unsigned nrBldBcastList = 0;
        SchedDlConfigInd *cfgInd = new SchedDlConfigInd();
        cfgInd->setTti(tti);

        // MasterInformationBlock scheduling
        if (sfn % 4 == 0 && tti % 10 == 0) {
            BuildBcastListElement bcastEl = BuildBcastListElement();
            bcastEl.setIndex(MIB);
            DlDciListElement dciEl = DlDciListElement();
            dciEl.setRnti(0);
            bcastEl.setDci(dciEl);
            cfgInd->setBldBcastListArraySize(++nrBldBcastList);
            cfgInd->setBldBcastList(nrBldBcastList - 1, bcastEl);
        }

        // SystemInformationBlock1 scheduling
        if (sfn % 2 == 0 && tti % 10 == 5) {
            BuildBcastListElement bcastEl = BuildBcastListElement();
            bcastEl.setIndex(SIB1);
            DlDciListElement dciEl = DlDciListElement();
            dciEl.setRnti(65535);
            dciEl.setRv((unsigned)ceil(3 / 2 * ((sfn / 2) % 4)) % 4);
            bcastEl.setDci(dciEl);
            cfgInd->setBldBcastListArraySize(++nrBldBcastList);
            cfgInd->setBldBcastList(nrBldBcastList - 1, bcastEl);
        }

        // SystemInformationBlock scheduling
        unsigned w = siCfg.getSiWdwLen();
        for (unsigned n = 0; n < siCfg.getSiMsgListArraySize(); n++) {
            SiMessageListElement msgEl = siCfg.getSiMsgList(0);
            unsigned x = n * w;
            unsigned T = msgEl.getPeriod();
            if ((sfn % T == (unsigned)floor(x / 10)) && (tti % 10 == x)) {
                BuildBcastListElement bcastEl = BuildBcastListElement();
                bcastEl.setIndex(n + 1);
                DlDciListElement dciEl = DlDciListElement();
                dciEl.setRnti(65535);
                bcastEl.setDci(dciEl);
                cfgInd->setBldBcastListArraySize(++nrBldBcastList);
                cfgInd->setBldBcastList(nrBldBcastList - 1, bcastEl);
            }
        }

        nb->fireChangeNotification(SCHED_DL_CONFIG_IND, cfgInd);
    } else if (category == CSCHED_CELL_CONFIG_REQ) {
        CSchedCellConfigReq *cellCfg = check_and_cast<CSchedCellConfigReq*>(details);

        siCfg = cellCfg->getSiConfig();
    }
}
