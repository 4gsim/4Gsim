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

MACScheduler::MACScheduler() {
	prachCfgIndex = 64;
}

MACScheduler::~MACScheduler() {

}

void MACScheduler::initialize(int stage) {
    // TODO - Generated method body
    if (stage == 3) {
        nb = NotificationBoardAccess().get();

        nb->subscribe(this, SCHED_DL_TRIGGER_REQ);
        nb->subscribe(this, SCHED_UL_TRIGGER_REQ);
        nb->subscribe(this, CSCHED_CELL_CONFIG_REQ);
        nb->subscribe(this, SCHED_DL_RACH_INFO_REQ);
    }
}

void MACScheduler::handleMessage(cMessage *msg) {
    // TODO - Generated method body
}

void MACScheduler::processScheduleDlTriggerRequest(SchedDlTriggerReq *triggReq) {
//	EV << "MACScheduler: Received SCHED_DL_TRIGGER_REQ. Processing the request.\n";
    unsigned char sf = triggReq->getSf();
    unsigned short sfn = triggReq->getSfn();
    unsigned nrBldBcastList = 0;
    SchedDlConfigInd *cfgInd = new SchedDlConfigInd();
    cfgInd->setSf(sf);
    cfgInd->setSfn(sfn);

//    // MasterInformationBlock scheduling
//    if (sfn % 4 == 0 && tti % 10 == 0) {
//        BuildBcastListElement bcastEl = BuildBcastListElement();
//        bcastEl.setIndex(MIB);
//        DlDciListElement dciEl = DlDciListElement();
//        dciEl.setRnti(0);
//        bcastEl.setDci(dciEl);
//        cfgInd->setBldBcastListArraySize(++nrBldBcastList);
//        cfgInd->setBldBcastList(nrBldBcastList - 1, bcastEl);
//    }
//
//    // SystemInformationBlock1 scheduling
//    if (sfn % 2 == 0 && tti % 10 == 5) {
//        BuildBcastListElement bcastEl = BuildBcastListElement();
//        bcastEl.setIndex(SIB1);
//        DlDciListElement dciEl = DlDciListElement();
//        dciEl.setRnti(65535);
//        dciEl.setRv((unsigned)ceil(3 / 2 * ((sfn / 2) % 4)) % 4);
//        bcastEl.setDci(dciEl);
//        cfgInd->setBldBcastListArraySize(++nrBldBcastList);
//        cfgInd->setBldBcastList(nrBldBcastList - 1, bcastEl);
//    }
//
//    // SystemInformationBlock scheduling
//    unsigned w = siCfg.getSiWdwLen();
//    for (unsigned n = 0; n < siCfg.getSiMsgListArraySize(); n++) {
//        SiMessageListElement msgEl = siCfg.getSiMsgList(0);
//        unsigned x = n * w;
//        unsigned T = msgEl.getPeriod();
//        if ((sfn % T == (unsigned)floor(x / 10)) && (tti % 10 == x)) {
//            BuildBcastListElement bcastEl = BuildBcastListElement();
//            bcastEl.setIndex(n + 1);
//            DlDciListElement dciEl = DlDciListElement();
//            dciEl.setRnti(65535);
//            bcastEl.setDci(dciEl);
//            cfgInd->setBldBcastListArraySize(++nrBldBcastList);
//            cfgInd->setBldBcastList(nrBldBcastList - 1, bcastEl);
//        }
//    }
//
//    // Random Access Response scheduling
//    RARBuffer::iterator i = rarBuffer.find(tti);
//    if (i != rarBuffer.end()) {
//    	BuildRarListElement rarEl = BuildRarListElement();
//    	rarEl.setGrant(0);	// TODO UL grant split into bits
//    	rarEl.setRnti(i->second);
////        DlDciListElement dciEl = DlDciListElement();
////        dciEl.setRnti(0);
////    	rarEl.setDci(dciEl);
//    	cfgInd->setBldRarListArraySize(1);
//    	cfgInd->setBldRarList(0, rarEl);
//    }

    nb->fireChangeNotification(SCHED_DL_CONFIG_IND, cfgInd);
}

void MACScheduler::processScheduleUlTriggerRequest(SchedUlTriggerReq *triggReq) {
	EV << "MACScheduler: Received SCHED_UL_TRIGGER_REQ. Processing the request.\n";
    unsigned tti = triggReq->getTti();
    unsigned sfn = tti / 10;
    SchedUlConfigInd *cfgInd = new SchedUlConfigInd();
    cfgInd->setTti(tti);

    // RACH scheduling
    if (prachCfgIndex != 64 && !triggReq->getRapComplete()) {
    	switch(prachCfgIndex % 16) {
    	case 0:
    		if (tti % 10 == 1 && sfn % 2 == 0) {
    			cfgInd->setRaConfigListArraySize(1);
    			cfgInd->setRaConfigList(0, raCfg);
    		}
    		break;
    	case 1:
    		if (tti % 10 == 4 && sfn % 2 == 0) {
    			cfgInd->setRaConfigListArraySize(1);
    			cfgInd->setRaConfigList(0, raCfg);
    		}
    		break;
    	default:
    		break;
    	}
    }

    nb->fireChangeNotification(SCHED_UL_CONFIG_IND, cfgInd);
}

void MACScheduler::receiveChangeNotification(int category, const cPolymorphic *details) {
    Enter_Method_Silent();

    if (category == SCHED_DL_TRIGGER_REQ) {
    	SchedDlTriggerReq *triggReq = check_and_cast<SchedDlTriggerReq*>(details);
    	processScheduleDlTriggerRequest(triggReq);
    } else if (category == SCHED_UL_TRIGGER_REQ) {
        SchedUlTriggerReq *triggReq = check_and_cast<SchedUlTriggerReq*>(details);
        processScheduleUlTriggerRequest(triggReq);
    } else if (category == SCHED_DL_RACH_INFO_REQ) {
    	EV << "MACScheduler: Received SCHED_DL_RACH_INFO_REQ. Processing the request.\n";
    	SchedDlRachInfoReq *rachReq = check_and_cast<SchedDlRachInfoReq*>(details);
    	for (unsigned i = 0; i < rachReq->getRachListArraySize(); i++) {	// normally it should be only one
    		RachListElement rachEl = rachReq->getRachList(i);
    		unsigned short schedTti = rachReq->getTti() + 3 + uniform(0, raCfg.getRaRespWdwSize());
    		rarBuffer[schedTti] = rachEl.getRnti();
    	}
    } else if (category == CSCHED_CELL_CONFIG_REQ) {
    	EV << "MACScheduler: Received CSCHED_CELL_CONFIG_REQ. Processing the request.\n";
        CSchedCellConfigReq *cellCfg = check_and_cast<CSchedCellConfigReq*>(details);

        siCfg = cellCfg->getSiConfig();

        raCfg = cellCfg->getRaConfig();

        prachCfgIndex = cellCfg->getPrachCfgIndex();;
    }
}
