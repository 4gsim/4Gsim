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

#ifndef MACUE_H_
#define MACUE_H_

#include "MAC.h"
#include "MACMessage.h"
#include "PHYFrame_m.h"
#include "HARQEntity.h"
#include "HARQProcess.h"
#include "PHYCommand.h"

class MACue : public MAC {
private:
    typedef std::map<unsigned short, MACServiceDataUnit*> MACBuffer;
    MACBuffer msg3Buffer;

    typedef std::map<unsigned short /* rnti */, DlAssignIndication*> DLAssignments;
    DLAssignments dlAssigns;

	// random access procedure complete
	bool rapComplete;
	bool rarComplete;
	RarIndication *rarInd;

	// used rnti for receiving TB in current subframe
	unsigned short rnti;
	unsigned char rntiType;

	unsigned preambleTransCount;
	bool preambleSignalled;
	unsigned backoffParam;
	typedef std::map<unsigned /* UL-Grant */, std::list<MACRandomAccessResponse*> > RARBuffer;
	RARBuffer rarBuffer;

    HARQEntity *dlEntity;
    HARQProcess *allocProc;

    virtual void receiveChangeNotification(int category, const cPolymorphic *details);
public:
    MACue();
    virtual ~MACue();

    virtual void initialize(int stage);

    virtual void handleUpperMessage(cMessage *msg);
    virtual void handleLowerMessage(cMessage *msg);

    void bchReception(TransportBlock *tb);
    void dlAssignmentReception(DlAssignIndication *dlAssignInd);
    void rapInitialization(unsigned short tti, RaConfiguration raCfg);
    void rarSelection(unsigned short tti, RaConfiguration raCfg);
    void rapTransmission(unsigned short tti, unsigned char preambleIndex);
    void rarReception(TransportBlock *tb);

    void setAllocatedProcess(HARQProcess *harqProc);
};

#endif /* MACUE_H_ */
