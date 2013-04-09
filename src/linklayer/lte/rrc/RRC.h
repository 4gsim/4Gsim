//
// Copyright (C) 2012 Calin Cerchez
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

#ifndef RRC_H_
#define RRC_H_

#include <omnetpp.h>
#include "RRCClassDefinitions.h"
#include "ASNTypes.h"
#include "SubscriberTable.h"
#include "LTEConfigAccess.h"

using namespace rrc;

#define UE_NODE_TYPE        0
#define ENB_NODE_TYPE       1

using namespace rrc;

class RRC : public cSimpleModule {
private:
    bool nodeType;
    SubscriberTable *subT;

    cMessage *mibTimer;
    cMessage *sib1Timer;
    cMessage *sib2Timer;

    LTEConfig *lteCfg;

public:
	RRC();
	virtual ~RRC();

	virtual int numInitStages() const  { return 5; }

	void initialize(int stage);
	void handleMessage(cMessage *msg);
	void handleLowerMessage(cMessage *msg);

	void sendDown(int logChannel, int choice, const char *name, AbstractType *payload);

	void sendMIB();
	void processMIB(MasterInformationBlock mib);
	void sendSIB1();
	void processSIB1(SystemInformationBlockType1 *sib1);
	void sendSIB2();
	void processSIB2(SystemInformationBlockType2 *sib2);

};

#endif /* RRC_H_ */
