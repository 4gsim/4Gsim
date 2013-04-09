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

#include "MACScheduler.h"
#include "LTEControlInfo_m.h"
#include "MACControlInfo_m.h"

MACScheduler::MACScheduler() {
    // TODO Auto-generated constructor stub
//    mib = NULL;
//    sib = NULL;
}

MACScheduler::~MACScheduler() {
    // TODO Auto-generated destructor stub
}

void MACScheduler::addMACProtocolDataUnit(MACProtocolDataUnit *pdu, int sfn, int tti, int retrNr) {
    MACResource resource;
    resource.pdu = pdu;
    resource.sfn = sfn;
    resource.tti = tti;
    resource.retrNr = retrNr;
    resources.push_back(resource);
}

TransportBlock *MACScheduler::getMessageToBeSent() {
    unsigned prbs[lteCfg->getDlBandwith()];
    memset(prbs, 0, lteCfg->getDlBandwith());

    if (lteCfg->getRAState() == 0) {
        initRandomAccessProcedure();
    }

    for (MACResources::iterator it = resources.begin(); it != resources.end(); ++it) {
        MACResource resource = (*it);
        if ((resource.sfn == -1 && resource.tti == lteCfg->getTTI()) ||
                (lteCfg->getSFN() % resource.sfn == 0 &&  resource.tti == lteCfg->getTTI())) {
            MACProtocolDataUnit *pdu = resource.pdu;
            MACControlInfo *ctrl = check_and_cast<MACControlInfo*>(pdu->getControlInfo());
            TransportBlock *tb = new TransportBlock();
            tb->setName(pdu->getName());
            tb->encapsulate(pdu->dup());
            tb->setChannel(ctrl->getChannel());
            tb->setRntiType(ctrl->getRntiType());
            tb->setRnti(ctrl->getRnti());
            resource.retrNr--;
            if (!resource.retrNr) {
                delete pdu;
                resources.erase(it);
            }
            return tb;
        }
    }

//    if (lteCfg->getTTIid() == 0 && mib != NULL) { // MIB send time
//        // MIB is sent alone in one transparent MAC PDU
//        tb = getTransportBlock(mib->dup(), BCH, NoRnti, 0);
////        unsigned k = (dlBandwith * blockSize / 2 - 36) / 12;
////        unsigned limit = k + 6;
////        for (; k < limit; k++)
////            prbs[k] = PBCH;
//    }
//
//    if (lteCfg->getSFN() % 2 == 0 && (lteCfg->getTTIid() == 4 || lteCfg->getTTIid() == 5) && sib != NULL) {    // SIB1 send time
//        tb = getTransportBlock(sib->dup(), DLSCH0, SiRnti, 65535);
//    }

    return NULL;
}

void MACScheduler::initRandomAccessProcedure() {
    // random access resource selection

    /*
     * if new transmission
     *      select preamble group A or B (if exists)
     * randomly select preamble within the group
     * prach mask index = 0
     * determine next available subframe
     *
     */
    lteCfg->setRAState(1);
}

