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

Define_Module(LTEScheduler);

std::ostream& operator<<(std::ostream& os, LTESchedulingInfo& s) {
    os << s.info();
    return os;
};

LTEScheduler::LTEScheduler() {
    // TODO Auto-generated constructor stub
    tti = 0;
    sfn = 0;
    msgIds = 100;
}

LTEScheduler::~LTEScheduler() {
    // TODO Auto-generated destructor stub
    erase(0, schedulings.size());
}

void LTEScheduler::initialize() {
    // TODO - Generated method body
    WATCH(tti);
    WATCH(sfn);
    WATCH_PTRVECTOR(schedulings);
}

void LTEScheduler::handleMessage(cMessage *msg) {
    // TODO - Generated method body
}

void LTEScheduler::incrementTTI() {
    tti++;

    if (tti % 10 == 0) {
        // also clean scheduled messages which have expired
        tti = 0;
        sfn++;

//        EV << "LTE-Sched: Cleaning expired UL and DL schedulings.\n";
        LTESchedulings::iterator i = schedulings.begin();
        LTESchedulings::iterator last = schedulings.end();
        for (;i != last;) {
            if ((*i)->getSfnEnd() < sfn) {
//                EV << "LTE-Sched: Found one expired scheduling. Cleaning it.\n";
                delete (*i);
                i = schedulings.erase(i);
            } else
                ++i;
        }
    }
}

unsigned LTEScheduler::gcd(unsigned a, unsigned b) {
    for (;;)
    {
        if (a == 0) return b;
        b %= a;
        if (b == 0) return a;
        a %= b;
    }
}

unsigned LTEScheduler::lcm(unsigned a, unsigned b) {
    int temp = gcd(a, b);
    return temp ? (a / temp * b) : 0;
}

//void LTEScheduler::addFixedScheduling(bool direction, int msgId, unsigned sfnPeriod, const int *tti, unsigned ttiSize, int prbBegin, int prbSize) {
//    LTESchedulingInfo fixedSchedInfo;
//    fixedSchedInfo.setMsgId(msgId);
//    fixedSchedInfo.setSfnPeriod(sfnPeriod);
//    for (unsigned i = 0; i < ttiSize; i++) {
//        fixedSchedInfo.pushTti(tti[i]);
//    }
//    fixedSchedInfo.setPrbBegin(prbBegin);
//    fixedSchedInfo.setPrbSize(prbSize);
//    if (direction == UL_SCHEDULING)
//        ulFixedScheds.push_back(fixedSchedInfo);
//    else
//        dlFixedScheds.push_back(fixedSchedInfo);
//}

bool LTEScheduler::scheduleMessage(bool direction, int msgId, unsigned sfnBegin, unsigned sfnPeriod, unsigned sfnEnd, const int *tti, unsigned ttiSize, int prbBegin, int prbSize) {
    // TODO check also PRBs

    for (unsigned i = 0; i < schedulings.size(); i++) {
        LTESchedulingInfo *schInfo = schedulings.at(i);
        bool checkTTI = false;

        // first check direction
        if (direction != schInfo->getDirection()) {
            // the direction of incoming and current scheduling are not the same
            continue;
        }

        // second check sfn overlap
        if (sfnBegin > schInfo->getSfnEnd()) {
            // the incoming scheduling info is after the current scheduling info in the queue
            continue;
        } else if (sfnEnd == UINT32_MAX && schInfo->getSfnEnd() == UINT32_MAX) {
            // incoming and current scheduling info are unlimited, so they are bound to overlap at some point
            checkTTI = true;
        } else {
            // else find the least common multiplier to see if at some point incoming and current scheduling overlap
            unsigned step = lcm(sfnPeriod, schInfo->getSfnPeriod());
            unsigned overlap = step;
            while (overlap <= sfnEnd && overlap <= schInfo->getSfnEnd()) {
                // must not go over one of the end limit (incoming or current scheduling)
                if ((overlap >= sfnBegin && overlap <= sfnEnd) && (overlap >= schInfo->getSfnBegin() && (overlap <= schInfo->getSfnEnd()))) {
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
                for (unsigned k = 0; k < schInfo->getTtisArraySize(); k++) {
                    // if at least one tti from incoming and current scheduling is overlapping, no scheduling is possible
                    // and no scheduling will be added to the queue
                    if (tti[j] == schInfo->getTtis(k))
                        return false;
                }
            }
        }
    }

    LTESchedulingInfo *newSchedInfo = new LTESchedulingInfo();
    newSchedInfo->setDirection(direction);
    newSchedInfo->setMsgId(msgId);
    newSchedInfo->setSfnBegin(sfnBegin);
    newSchedInfo->setSfnPeriod(sfnPeriod);
    newSchedInfo->setSfnEnd(sfnEnd);
    for (unsigned i = 0; i < ttiSize; i++) {
        newSchedInfo->pushTti(tti[i]);
    }
    newSchedInfo->setPrbBegin(prbBegin);
    newSchedInfo->setPrbSize(prbSize);
    schedulings.push_back(newSchedInfo);

    return true;
}

int LTEScheduler::scheduleMessage(bool direction, unsigned sfnBegin, unsigned sfnEnd) {
    int msgId = msgIds++;
    for (unsigned i = sfnBegin; i <= sfnEnd; i++) {
        for (int j = 0; j < 10; j++) {
            int ttis[1];
            ttis[0] = j;
            if (scheduleMessage(direction, msgId, i, 1, i, ttis, 1, 0, 0))
                return msgId;
        }
    }

    return -1;
}

int LTEScheduler::getMessageId(bool direction) {
    // TODO check also prbSize and prbBegin

//    EV << "LTE-Sched: Retrieving message id during SFN = " << sfn << " and TTI = " << tti << ".\n";
    for (unsigned i = 0; i < schedulings.size(); i++) {
        LTESchedulingInfo *schInfo = schedulings.at(i);
        if ((direction == schInfo->getDirection()) && (sfn % schInfo->getSfnPeriod() == 0)
                && (sfn >= schInfo->getSfnBegin()) && (sfn <= schInfo->getSfnEnd())) {
//            EV << "LTE-Sched: SFN period = " << schInfo->getSfnPeriod() << " matches for message id = " << schInfo->getMsgId() << ".\n";
            for (unsigned j = 0; j < schInfo->getTtisArraySize(); j++) {
                if (tti == schInfo->getTtis(j)) {
//                    EV << "LTE-Sched: TTI = " << schInfo->getTtis(j) << " matches for message id = " << schInfo->getMsgId() << ".\n";
                    return schInfo->getMsgId();
                }
            }
        }
    }

    return -1;
}

int LTEScheduler::getMessageId(bool direction, unsigned tti) {
    // TODO check also prbSize and prbBegin

//    EV << "LTE-Sched: Retrieving message id during SFN = " << sfn << " and TTI = " << tti << ".\n";
    for (unsigned i = 0; i < schedulings.size(); i++) {
        LTESchedulingInfo *schInfo = schedulings.at(i);
        if ((direction == schInfo->getDirection()) && (sfn % schInfo->getSfnPeriod() == 0)
                && (sfn >= schInfo->getSfnBegin()) && (sfn <= schInfo->getSfnEnd())) {
//            EV << "LTE-Sched: SFN period = " << schInfo->getSfnPeriod() << " matches for message id = " << schInfo->getMsgId() << ".\n";
            for (unsigned j = 0; j < schInfo->getTtisArraySize(); j++) {
                if (tti == schInfo->getTtis(j)) {
//                    EV << "LTE-Sched: TTI = " << schInfo->getTtis(j) << " matches for message id = " << schInfo->getMsgId() << ".\n";
                    return schInfo->getMsgId();
                }
            }
        }
    }

    return -1;
}

void LTEScheduler::erase(unsigned start, unsigned end) {
    LTESchedulings::iterator first = schedulings.begin() + start;
    LTESchedulings::iterator last = schedulings.begin() + end;
    LTESchedulings::iterator i = first;
    for (;i != last; ++i) {
        delete *i;
    }
    schedulings.erase(first, last);
}

