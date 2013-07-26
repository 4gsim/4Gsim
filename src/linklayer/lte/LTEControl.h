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

#ifndef LTECONTROL_H_
#define LTECONTROL_H_

#include <omnetpp.h>
#include "LTEUtils.h"
#include "NotificationBoard.h"
#include "RRCClassDefinitions.h"

class LTEControl : public cSimpleModule, public INotifiable {
private:
    NotificationBoard *nb;

    struct PLMNIdentity {
        std::string mcc;
        std::string mnc;
    };
    char *cellId;
    char *tac;
    std::vector<PLMNIdentity> plmnIds;

    void loadConfigFromXML(const char *filename);

    void receiveChangeNotification(int category, const cPolymorphic *details);
public:
    LTEControl();
    virtual ~LTEControl();

    virtual int numInitStages() const  { return 5; }
    virtual void initialize(int stage);
    virtual void handleMessage(cMessage *msg);

    rrc::PLMNIdentityList getPLMNIdentityList();
    char *getTAC() { return tac; }
    char *getCellId() { return cellId; }
};

#endif /* LTECONTROL_H_ */
