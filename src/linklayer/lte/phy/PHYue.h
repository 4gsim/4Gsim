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

#ifndef PHYUE_H_
#define PHYUE_H_

#include "PHY.h"
#include "SubscriberTableAccess.h"

enum SyncState
{
    NONE,
    PSS_RECEIVED,
    SSS_RECEIVED,
    SYNCHRONIZED
};

class PHYue : public PHY {
private:
    unsigned char syncState;
    unsigned pbchSubcarriers;

	cMessage *delayTimer;
	bool start;

	SubscriberTable *subT;

	cMessage *getData(unsigned char channel);
	void processPSS();
	void processSSS();
	void processReferenceSignal();
	void processPBCH(PHYFrame *frame);

	virtual void stateEntered(int category, const cPolymorphic *details);
public:
    PHYue();
    virtual ~PHYue();

    virtual void initialize(int stage);

    virtual void handleMessage(cMessage *msg);

    virtual void handleRadioMessage(cMessage *msg);
    virtual void handleUpperMessage(cMessage *msg);

    virtual void sendBufferedData();
};

#endif /* PHYUE_H_ */
