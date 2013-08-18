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

#ifndef RLCTMENTITY_H_
#define RLCTMENTITY_H_

#include "RLCEntity.h"

class RLCTMEntity : public RLCEntity {
private:
    typedef std::list<RLCServiceDataUnit*> TransmissionBuffer;
    TransmissionBuffer buffer;
public:
	RLCTMEntity();
	virtual ~RLCTMEntity();

	virtual void handleUpperMessage(RLCServiceDataUnit *sdu);
	virtual void handleLowerMessage(RLCProtocolDataUnit *pdu);

	void handleTxOpportunity(RlcTxOpportunity *txOpp);
	virtual void handleSubframeIndication();
};

#endif /* RLCTMENTITY_H_ */
