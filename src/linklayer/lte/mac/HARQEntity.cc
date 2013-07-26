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

#include "HARQEntity.h"
#include "MACue.h"
#include "LTEControlInfo_m.h"

HARQEntity::HARQEntity() {
    // TODO Auto-generated constructor stub
    module = NULL;
}

HARQEntity::~HARQEntity() {
    // TODO Auto-generated destructor stub
}

void HARQEntity::init(MACue *module, unsigned char nrOfProcs) {
    this->module = module;

    for (unsigned i = 0; i < nrOfProcs; i++) {
        procs[i] = new HARQProcess(module, i);
    }

    procs[HARQ_BCAST_PROC_ID] = new HARQProcess(module, HARQ_BCAST_PROC_ID);
}

void HARQEntity::indicateDlAssignment(DlAssignIndication *dlAssignInd) {
    HarqInformation harqInfo = dlAssignInd->getHarqInfo();
    HARQProcesses::iterator i = procs.find(dlAssignInd->getHarqProc());
    if (i != procs.end()) {
        HARQProcess *harqProc = i->second;
        EV << "LTE-HARQEntity: Allocating HARQ process with id = " << (unsigned)dlAssignInd->getHarqProc() << ".\n";
        harqProc->allocate(harqInfo);
    }
}
//
//void HARQEntity::indicateUlGrant(int tti, int msgId, UplinkGrant *ulGrant) {
//    // identify the HARQ process associated with this TTI;
////    unsigned procId = tti % procs.size() - 1; // exclude broadcast process
////    HARQProcesses::iterator i = procs.find(procId);
////    if (i != procs.end()) {
////        HARQProcess *harqProc = i->second;
////        if (tti == ulGrant->getTtis(0)) {
////            // TODO if the received grant was not addressed to a Temporary C-RNTI on PDCCH and if the NDI provided in the associated HARQ information has been toggled compared to the value in the previous transmission of this HARQ process; or
////            if ((ulGrant->getRntiType() == CRnti && harqProc->getBuffer() == NULL) || (module->getRAState() == RESP_CORRECT)) {
////                MACProtocolDataUnit *pdu = NULL;
////                if (module->getMsg3Pdu(msgId) != NULL && module->getRAState() == RESP_CORRECT) {
////                    pdu = module->getMsg3Pdu(msgId);
////                } else {
////                    // TODO obtain the MAC PDU to transmit from the "Multiplexing and assembly" entity;
////                }
////                harqProc->requestNewTransmission(pdu);
////            } else {
////                // TODO -   deliver the uplink grant and the HARQ information (redundancy version) to the identified HARQ process;
////                // TODO -   instruct the identified HARQ process to generate an adaptive retransmission.
////            }
////        } else {
////            // TODO else, if the HARQ buffer of the HARQ process corresponding to this TTI is not empty:
////            // TODO -   instruct the identified HARQ process to generate a non-adaptive retransmission.
////        }
////    }
//
//    // TODO When determining if NDI has been toggled compared to the value in the previous transmission UE shall ignore NDI received in all uplink grants on PDCCH for its Temporary C-RNTI.
//}

