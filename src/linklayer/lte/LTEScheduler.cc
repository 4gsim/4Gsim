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

#include "LTEScheduler.h"

Define_Module(LTEScheduler);

LTEScheduler::LTEScheduler() {
    // TODO Auto-generated constructor stub
    tti = 0;
    sfn = 0;
    msgIds = 100;
}

LTEScheduler::~LTEScheduler() {
    // TODO Auto-generated destructor stub
}

void LTEScheduler::initialize() {
    // TODO - Generated method body
    WATCH(tti);
    WATCH(sfn);
}

void LTEScheduler::handleMessage(cMessage *msg) {
    // TODO - Generated method body
}

void LTEScheduler::incrementTTI() {
    tti++;

    if (tti % 10 == 0) {
        tti = 0;
        sfn++;
    }
}

void LTEScheduler::addFixedScheduling(bool direction, int msgId, int sfnPeriod, const int *tti, unsigned ttiSize, int prbBegin, int prbSize) {
    LTEFixedSchedulingInfo fixedSchedInfo;
    fixedSchedInfo.setMsgId(msgId);
    fixedSchedInfo.setSfnPeriod(sfnPeriod);
    for (unsigned i = 0; i < ttiSize; i++) {
        fixedSchedInfo.pushTti(tti[i]);
    }
    fixedSchedInfo.setPrbBegin(prbBegin);
    fixedSchedInfo.setPrbSize(prbSize);
    if (direction == UL_SCHEDULING)
        ulFixedScheds.push_back(fixedSchedInfo);
    else
        dlFixedScheds.push_back(fixedSchedInfo);
}

int LTEScheduler::getMessageId(bool direction) {
    // TODO check also prbSize and prbBegin
    LTEFixedSchedulings *fixedScheds;
    if (direction == UL_SCHEDULING)
        fixedScheds = &ulFixedScheds;
    else
        fixedScheds = &dlFixedScheds;

    for (unsigned i = 0; i < fixedScheds->size(); i++) {
        LTEFixedSchedulingInfo schInfo = fixedScheds->at(i);
        if (sfn % schInfo.getSfnPeriod() == 0) {
            for (unsigned j = 0; j < schInfo.getTtisArraySize(); j++) {
                if (tti == schInfo.getTtis(j)) {
                    return schInfo.getMsgId();
                }
            }
        }
    }

    return -1;
}

