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

#include "HARQProcess.h"
#include "MAC.h"
#include "LTEControlInfo_m.h"

HARQProcess::HARQProcess(MAC *module) {
    // TODO Auto-generated constructor stub
    currTxNb = 0;
    maxTrans = 3;
    this->module = module;
}

HARQProcess::~HARQProcess() {
    // TODO Auto-generated destructor stub
}

void HARQProcess::send(unsigned ulGrant, MACProtocolDataUnit *pdu) {
    currTxNb = 0;
    buffer.push_back(pdu);
    // TODO store ulGrant
    harqFeedback = HARQ_FEEDBACK_NACK;

//    module->scheduleDown(pdu, ULSCH, TTI_VALUE);

    if (currTxNb == maxTrans - 1) {
        while(!buffer.empty()) {
            delete buffer.front();
            buffer.pop_front();
        }
    }
}

