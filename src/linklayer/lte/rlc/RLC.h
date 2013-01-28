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

#ifndef RLC_H_
#define RLC_H_

#include <omnetpp.h>
#include "RLCTMEntity.h"

/**
 * TODO - Generated class
 */

#define RLC_DOWN    0
#define RLC_UP      1

class RLC: public cSimpleModule {
private:
    RLCTMEntity *rTM;
    RLCTMEntity *tTM;
public:
	RLC();
	virtual ~RLC();
	virtual void initialize();
	virtual void handleMessage(cMessage *msg);

//	void sendMessage(cMessage *msg) { this->send(msg, gate("lowerLayerOut")); }
};

#endif /* RLC_H_ */


