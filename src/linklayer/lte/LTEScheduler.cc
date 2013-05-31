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

#include <algorithm>
#include "LTEScheduler.h"
#include "LTEControlInfo_m.h"

Define_Module(LTEScheduler);

std::ostream& operator<<(std::ostream& os, DownlinkAssignment& d) {
    os << d.info();
    return os;
};

LTEScheduler::LTEScheduler() {
    // TODO Auto-generated constructor stub
    ttiTimer = NULL;
    tti = 0;
    sfn = 0;
    msgIds = 0;
}

LTEScheduler::~LTEScheduler() {
    // TODO Auto-generated destructor stub
    if (ttiTimer != NULL) {
        if (ttiTimer->getContextPointer() != NULL)
            this->cancelEvent(ttiTimer);
        delete ttiTimer;
    }
}

void LTEScheduler::initialize(int stage) {
    // TODO - Generated method body

    if (stage == 0) {
        nb = NotificationBoardAccess().get();
        WATCH_PTRMAP(dlAssigns);
        WATCH_PTRMAP(ulGrants);
    }

    if (stage == 4) {
        ttiTimer = new cMessage("TTI-TIMER");
        this->scheduleAt(simTime(), ttiTimer);
        ttiTimer->setContextPointer(this);
    }
}

void LTEScheduler::handleMessage(cMessage *msg) {
    // TODO - Generated method body
    if (msg == ttiTimer) {
        nb->fireChangeNotification(NF_TTI_EXP, NULL);
        this->cancelEvent(ttiTimer);
        this->scheduleAt(simTime() + TTI_VALUE, ttiTimer);
        incrementTTI();
    }
}

void LTEScheduler::incrementTTI() {
    tti++;

    if (tti % 10 == 0) {
        sfn++;
        tti = 0;
    }
}

unsigned LTEScheduler::gcd(unsigned a, unsigned b) {
    for (;;) {
        if (a == 0) return b;
        b %= a;
        if (b == 0) return a;
        a %= b;
    }
    return 0;
}

unsigned LTEScheduler::lcm(unsigned a, unsigned b) {
    int temp = gcd(a, b);
    return temp ? (a / temp * b) : 0;
}

bool LTEScheduler::checkDlScheduling(unsigned sfnBegin, unsigned sfnPeriod, unsigned sfnEnd, const int *tti, unsigned ttiSize) {

    for (DownlinkAssignments::iterator i = dlAssigns.begin(); i != dlAssigns.end(); i++) {
        DownlinkAssignment *dlAssign = i->second;
        bool checkTTI = false;

        // first check sfn overlap
        if (sfnBegin > dlAssign->getSfnEnd()) {
            // the incoming scheduling info is after the current scheduling info in the queue
            continue;
        } else if (sfnEnd == UINT32_MAX && dlAssign->getSfnEnd() == UINT32_MAX) {
            // incoming and current scheduling info are unlimited, so they are bound to overlap at some point
            checkTTI = true;
        } else {
            // else find the least common multiplier to see if at some point incoming and current scheduling overlap
            unsigned step = lcm(sfnPeriod, dlAssign->getSfnPeriod());
            unsigned overlap = step;
            while (overlap <= sfnEnd && overlap <= dlAssign->getSfnEnd()) {
                // must not go over one of the end limit (incoming or current scheduling)
                if ((overlap >= sfnBegin && overlap <= sfnEnd) && (overlap >= dlAssign->getSfnBegin() && (overlap <= dlAssign->getSfnEnd()))) {
                    // found the overlap
                    checkTTI = true;
                    break;
                }
                overlap += step;
            }
            // if no overlap was found checkTTI will remain false
        }

        // third check tti overlap
        if (checkTTI) {
            for (unsigned j = 0; j < ttiSize; j++) {
                for (unsigned k = 0; k < dlAssign->getTtisArraySize(); k++) {
                    // if at least one tti from incoming and current scheduling is overlapping, no scheduling is possible
                    // and no scheduling will be added to the queue
                    if (tti[j] == dlAssign->getTtis(k))
                        return false;
                }
            }
        }
    }
    return true;
}

bool LTEScheduler::checkUlScheduling(unsigned sfnBegin, unsigned sfnPeriod, unsigned sfnEnd, const int *tti, unsigned ttiSize) {

    for (UplinkGrants::iterator i = ulGrants.begin(); i != ulGrants.end(); i++) {
        UplinkGrant *ulGrant = i->second;
        bool checkTTI = false;

        // first check sfn overlap
        if (sfnBegin > ulGrant->getSfnEnd()) {
            // the incoming scheduling info is after the current scheduling info in the queue
            continue;
        } else if (sfnEnd == UINT32_MAX && ulGrant->getSfnEnd() == UINT32_MAX) {
            // incoming and current scheduling info are unlimited, so they are bound to overlap at some point
            checkTTI = true;
        } else {
            // else find the least common multiplier to see if at some point incoming and current scheduling overlap
            unsigned step = lcm(sfnPeriod, ulGrant->getSfnPeriod());
            unsigned overlap = step;
            while (overlap <= sfnEnd && overlap <= ulGrant->getSfnEnd()) {
                // must not go over one of the end limit (incoming or current scheduling)
                if ((overlap >= sfnBegin && overlap <= sfnEnd) && (overlap >= ulGrant->getSfnBegin() && (overlap <= ulGrant->getSfnEnd()))) {
                    // found the overlap
                    checkTTI = true;
                    break;
                }
                overlap += step;
            }
            // if no overlap was found checkTTI will remain false
        }

        // third check tti overlap
        if (checkTTI) {
            for (unsigned j = 0; j < ttiSize; j++) {
                for (unsigned k = 0; k < ulGrant->getTtisArraySize(); k++) {
                    // if at least one tti from incoming and current scheduling is overlapping, no scheduling is possible
                    // and no scheduling will be added to the queue
                    if (tti[j] == ulGrant->getTtis(k))
                        return false;
                }
            }
        }
    }
    return true;
}

int LTEScheduler::scheduleDlMessage(unsigned rntiType, unsigned rnti, unsigned sfnBegin, unsigned sfnPeriod, unsigned sfnEnd, const int *tti, unsigned ttiSize) {
    // TODO check also PRBs

    if (checkDlScheduling(sfnBegin, sfnPeriod, sfnEnd, tti, ttiSize)) {
        DownlinkAssignment *dlAssign = new DownlinkAssignment();
        dlAssign->setRnti(rnti);
        dlAssign->setRntiType(rntiType);
        dlAssign->setSfnBegin(sfnBegin);
        dlAssign->setSfnPeriod(sfnPeriod);
        dlAssign->setSfnEnd(sfnEnd);
        for (unsigned i = 0; i < ttiSize; i++) {
            dlAssign->pushTti(tti[i]);
        }
        dlAssigns[msgIds] = dlAssign;
        return msgIds++;
    } else
        return -1;
}

int LTEScheduler::scheduleDlMessage(unsigned rntiType, unsigned rnti, unsigned sfnBegin, unsigned sfnEnd) {
    for (unsigned i = sfnBegin; i <= sfnEnd; i++) {
        for (int j = 0; j < 10; j++) {
            int ttis[1];
            ttis[0] = j;
            int msgId = scheduleDlMessage(rntiType, rnti, i, 1, i, ttis, 1);
            if (msgId != -1)
                return msgId;
        }
    }
    return -1;
}

int LTEScheduler::scheduleUlMessage(unsigned rntiType, unsigned rnti, unsigned sfnBegin, unsigned sfnPeriod, unsigned sfnEnd, const int *tti, unsigned ttiSize) {
    // TODO check also PRBs

    if (checkUlScheduling(sfnBegin, sfnPeriod, sfnEnd, tti, ttiSize)) {
        UplinkGrant *ulGrant = new UplinkGrant();
        ulGrant->setRnti(rnti);
        ulGrant->setRntiType(rntiType);
        ulGrant->setSfnBegin(sfnBegin);
        ulGrant->setSfnPeriod(sfnPeriod);
        ulGrant->setSfnEnd(sfnEnd);
        for (unsigned i = 0; i < ttiSize; i++) {
            ulGrant->pushTti(tti[i]);
        }
        ulGrants[msgIds] = ulGrant;
        return msgIds++;
    } else
        return -1;
}

int LTEScheduler::getDlMessageId(unsigned tti) {
    // TODO check also prbSize and prbBegin

//    EV << "LTE-Sched: Retrieving message id during SFN = " << sfn << " and TTI = " << tti << ".\n";
    for (DownlinkAssignments::iterator i = dlAssigns.begin(); i != dlAssigns.end(); i++) {
        DownlinkAssignment *dlAssign = i->second;
        if ((sfn % dlAssign->getSfnPeriod() == 0)
                && (sfn >= dlAssign->getSfnBegin()) && (sfn <= dlAssign->getSfnEnd())) {
//            EV << "LTE-Sched: SFN period = " << schInfo->getSfnPeriod() << " matches for message id = " << schInfo->getMsgId() << ".\n";
            for (unsigned j = 0; j < dlAssign->getTtisArraySize(); j++) {
                if (tti == dlAssign->getTtis(j)) {
//                    EV << "LTE-Sched: TTI = " << schInfo->getTtis(j) << " matches for message id = " << schInfo->getMsgId() << ".\n";
                    return i->first;
                }
            }
        }
    }

    return -1;
}

int LTEScheduler::getUlMessageId(unsigned tti) {
    // TODO check also prbSize and prbBegin

//    EV << "LTE-Sched: Retrieving message id during SFN = " << sfn << " and TTI = " << tti << ".\n";
    for (UplinkGrants::iterator i = ulGrants.begin(); i != ulGrants.end(); i++) {
        UplinkGrant *ulGrant = i->second;
        if ((sfn % ulGrant->getSfnPeriod() == 0)
                && (sfn >= ulGrant->getSfnBegin()) && (sfn <= ulGrant->getSfnEnd())) {
//            EV << "LTE-Sched: SFN period = " << schInfo->getSfnPeriod() << " matches for message id = " << schInfo->getMsgId() << ".\n";
            for (unsigned j = 0; j < ulGrant->getTtisArraySize(); j++) {
                if (tti == ulGrant->getTtis(j)) {
//                    EV << "LTE-Sched: TTI = " << schInfo->getTtis(j) << " matches for message id = " << schInfo->getMsgId() << ".\n";
                    return i->first;
                }
            }
        }
    }

    return -1;
}

DownlinkAssignment *LTEScheduler::getDlAssignment(int msgId) {
    DownlinkAssignments::iterator i = dlAssigns.find(msgId);
    if (i != dlAssigns.end()) {
        DownlinkAssignment *dlAssign = i->second;
        return dlAssign;
    } else
        return NULL;
}

UplinkGrant *LTEScheduler::getUlGrant(int msgId) {
    UplinkGrants::iterator i = ulGrants.find(msgId);
    if (i != ulGrants.end()) {
        UplinkGrant *ulGrant = i->second;
        return ulGrant;
    } else
        return NULL;
}

std::string LTEScheduler::timestamp() {
    std::stringstream out;
    out << "[sfn = " << sfn << ", tti = " << tti << "]";
    return out.str();
}
