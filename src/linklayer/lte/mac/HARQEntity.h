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

#ifndef HARQENTITY_H_
#define HARQENTITY_H_

#include "HARQProcess.h"
#include "MACMessage.h"

#define HARQ_BCAST_PROC_ID  -1

class MAC;

class HARQEntity {
private:
    HARQProcess *bcastProc;
    std::map<unsigned, HARQProcess*> procs;
    std::list<MACProtocolDataUnit*> msg3;

public:
    HARQEntity();
    virtual ~HARQEntity();

    void init(MAC *module, unsigned nrOfProcs);

    void processUplinkGrant(unsigned ulGrant, unsigned ttiId);

    void pushMsg3(MACProtocolDataUnit *pdu) { msg3.push_back(pdu); }

    void indicateDownlinkAssignment(TransportBlock *tb);
};

#endif /* HARQENTITY_H_ */
