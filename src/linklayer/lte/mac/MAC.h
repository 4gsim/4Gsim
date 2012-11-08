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

#ifndef MAC_H_
#define MAC_H_

#include <omnetpp.h>

class MAC : public cSimpleModule {
protected:
    unsigned rnti;

public:
    MAC();
    virtual ~MAC();

    virtual int numInitStages() const  { return 5; }

    virtual void initialize(int stage);
    virtual void handleMessage(cMessage *msg);

    void handleLowerMessage(cMessage *msg);

    void sendDown(cMessage *msg, int channelNumber, int ctrlType, unsigned rntiType, unsigned rnti, unsigned direction);
};

#endif /* MAC_H_ */
