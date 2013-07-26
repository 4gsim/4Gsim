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

#ifndef RRCENB_H_
#define RRCENB_H_

#include "RRC.h"
#include "LTEControlAccess.h"

using namespace rrc;

static const unsigned siWindowLengths[7] = { 1, 2, 5, 10, 15, 20, 40 };
static const unsigned siPeriodicities[7] = { 8, 16, 32, 64, 128, 256, 512 };

class RRCenb : public RRC {
private:
    LTEControl *lteCtrl;

    // scheduling information for SystemInformationBlock
    SchedulingInfoList schedInfoList;
    SystemInformationBlockType1si_WindowLength siWdwLen;

    virtual void receiveChangeNotification(int category, const cPolymorphic *details);
public:
    RRCenb();
    virtual ~RRCenb();

    virtual void initialize(int stage);
    virtual void handleLowerMessage(cMessage *msg);

    void sendMIB();
    void sendSIB1();
    void sendSIB2();
};

#endif /* RRCENB_H_ */
