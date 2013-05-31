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
#include "LTEFrame.h"
#include "LTEScheduler.h"

#define HARQ_BCAST_PROC_ID  -1

class MAC;

class HARQEntity {
private:
    typedef std::map<unsigned, HARQProcess*> HARQProcesses;
    HARQProcesses procs;

    MAC *module;
public:
    HARQEntity();
    virtual ~HARQEntity();

    void init(MAC *module, unsigned nrOfProcs);

    void indicateDlAssignment(TransportBlock *tb, DownlinkAssignment *dlAssign);
    void indicateUlGrant(int tti, int msgId, UplinkGrant *ulGrant);
};

#endif /* HARQENTITY_H_ */
