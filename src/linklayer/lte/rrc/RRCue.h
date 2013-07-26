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

#ifndef RRCUE_H_
#define RRCUE_H_

#include "RRC.h"
#include "RRCEntity.h"

class RRCue : public RRC {
private:
    Subscriber *sub;
    RRCEntity *entity;
    bool recvMIB;
    bool recvSIB1;
    bool recvSIB2;
public:
    RRCue();
    virtual ~RRCue();

    virtual void initialize(int stage);
    virtual void handleLowerMessage(cMessage *msg);

    void processMIB(MasterInformationBlock mib);
    void processSIB1(SystemInformationBlockType1 *sib1);
    void processSIB2(SystemInformationBlockType2 *sib2);
};

#endif /* RRCUE_H_ */
