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

#include "MACue.h"
#include "LTEControlInfo.h"

Define_Module(MACue);

MACue::MACue() {
    // TODO Auto-generated constructor stub
    allocProc = NULL;
    rapComplete = false;
    rarComplete = false;
    preambleSignalled = false;
    rarInd = NULL;
}

MACue::~MACue() {
    // TODO Auto-generated destructor stub
}

void MACue::initialize(int stage) {
	MAC::initialize(stage);

    if (stage == 4) {
        nb->subscribe(this, DLASSIGNIndication);
        nb->subscribe(this, RARIndication);
        nb->subscribe(this, SUBFRAMEIndication);
        nb->subscribe(this, SCHED_UL_CONFIG_IND);

        dlEntity = new HARQEntity();
        dlEntity->init(this, 7);
    }
}

void MACue::handleLowerMessage(cMessage *msg) {
    LTEControlInfo *ctrl = check_and_cast<LTEControlInfo*>(msg->getControlInfo());
    TransportBlock *tb = check_and_cast<TransportBlock*>(msg);
    EV << "LTE-MACue: Receiving message on " << ctrl->getChannelName() << " from lower layer.\n";

    if (ctrl->getChannel() == BCH) {
        bchReception(tb);
    } else if (ctrl->getChannel() == DLSCH0) {
    	DLAssignments::iterator i = dlAssigns.find(tb->getRnti());
    	if (i != dlAssigns.end()) {

    	}
//        allocProc->receiveTransportBlock(tb);
    } else if (ctrl->getChannel() == DLSCH1) {
    	if (rarInd) {
    		rarReception(tb);
    	}
    }
}

void MACue::handleUpperMessage(cMessage *msg) {
    EV << "LTE-MACue: Receiving message with id = " << msg->getKind() << " from upper layer.\n";

}

void MACue::bchReception(TransportBlock *tb) {
    // TODO receive and attempt to decode BCH

    // if TB successfully decoded
    LTEControlInfo *ctrl = check_and_cast<LTEControlInfo*>(tb->removeControlInfo());
    MACProtocolDataUnit *pdu = check_and_cast<MACProtocolDataUnit*>(tb->decapsulate());
    MACServiceDataUnit *sdu = check_and_cast<MACServiceDataUnit*>(pdu->decapsulate());
    ctrl->setChannel(BCCH0);
    sdu->setControlInfo(ctrl);

    this->send(sdu, gate("upperLayerOut"));
}

void MACue::dlAssignmentReception(DlAssignIndication *dlAssignInd) {
    unsigned short rnti = dlAssignInd->getRnti();
    EV << "LTE-MACue: DL assignment reception for rnti = " << rnti << ".\n";
    HarqInformation harqInfo = dlAssignInd->getHarqInfo();
//    if (rntiType == CRnti || rntiType == SpsRnti || rntiType == TempCRnti) {
//        if (dlAssignInd->getRntiType() == CRnti || dlAssignInd->getRntiType() == TempCRnti) {
//
//        } else if (dlAssignInd->getRntiType() == SpsRnti) {
//
//        } else {
//            // not sure you can get here
//        }
//    }

    if (rnti == 65535) {
        // TODO if rv is not defined ...
        dlAssignInd->setHarqProc(HARQ_BCAST_PROC_ID);
        dlEntity->indicateDlAssignment(dlAssignInd);
    }
}

void MACue::rapInitialization(unsigned short tti, RaConfiguration raCfg) {
	EV << "LTE-MACue: Random Access Procedure initialization.\n";
	preambleTransCount = 1;
	backoffParam = 0;

	// TODO msg3Buffer flush

	rarSelection(tti, raCfg);
}

void MACue::rarSelection(unsigned short tti, RaConfiguration raCfg) {
	EV << "LTE-MACue: Random Access Resource selection.\n";
	unsigned char preambleIndex = 0;
	unsigned char prachMaskIndex = 0;
	unsigned char groupSize = 0;

    if (raCfg.getRaPreambleIndex() != 64 && raCfg.getRaPrachMaskIndex() != 0) {
        preambleIndex = raCfg.getRaPreambleIndex();
        prachMaskIndex = raCfg.getRaPrachMaskIndex();
        preambleSignalled = true;
    } else {
    	if (msg3Buffer.empty()) {	// msg3 has not been transmitted
    		if (raCfg.getNrOfRaPreambles() != raCfg.getSizeOfRaPreamblesGroupA()) {	// TODO select group B

    		} else {	// select group A
    			groupSize = raCfg.getSizeOfRaPreamblesGroupA();
    		}
    	} else {
    		// TODO select the group size previously used for the transmission of msg3
    	}

        preambleIndex = uniform(0, groupSize);
        prachMaskIndex = 0;
    }

    // TODO select PRACH from available PRACHs

    rapTransmission(tti, preambleIndex);
}

void MACue::rapTransmission(unsigned short tti, unsigned char preambleIndex) {
	EV << "LTE-MACue: Random Access Preamble transmission.\n";

//	UlConfigRequest *ulCfgReq = new UlConfigRequest();
//	ulCfgReq->setTti(tti);
//	ulCfgReq->setRachFreqRes(1);
//
//	nb->fireChangeNotification(ULCONFIGRequest, ulCfgReq);
	unsigned short raRnti = 1 + tti; // TODO add also frequency offset 10 * f_id
	Subscriber *sub = subT->at(0);
	sub->setRaRnti(raRnti);
	sub->setRapid(preambleIndex);

	RachRequest *rachReq = new RachRequest();
	rachReq->setTti(tti);
	rachReq->setPreamblesArraySize(1);
	RachPreamble rachPrbl = RachPreamble();
	rachPrbl.setRnti(raRnti);
	rachPrbl.setPreamble(preambleIndex);
	rachPrbl.setTimingAdvance(0);
	rachReq->setPreambles(0, rachPrbl);

	nb->fireChangeNotification(RACHRequest, rachReq);
}

void MACue::rarReception(TransportBlock *tb) {
	EV << "LTE-MACue: Random Access Response reception.\n";
	// If a downlink assignment for this TTI has been received on the PDCCH for the RA-RNTI
	// and the received TB is successfully decoded, the UE shall
	// regardless of the possible occurrence of a measurement gap: - already done in PHYue

	MACProtocolDataUnit *pdu = check_and_cast<MACProtocolDataUnit*>(tb->decapsulate());
	MACSubHeaderRar *header = dynamic_cast<MACSubHeaderRar*>(pdu->getSubHdrs(0));
	if (header) {
		if (!header->getT())
			backoffParam = header->getRapidOrBi();
		else {
			backoffParam = 0;

			Subscriber *sub = subT->at(0);
			if (sub->getRapid() == header->getRapidOrBi()) {
				rarInd = NULL;

				// TODO process the received Timing Advance Command (see subclause 5.2);

				// TODO indicate the preambleInitialReceivedTargetPower and the amount of power ramping applied to the latest preamble transmission to lower layers (i.e., (PREAMBLE_TRANSMISSION_COUNTER - 1) * powerRampingStep);

				// TODO process the received UL grant value and indicate it to the lower layers;

				if (preambleSignalled) {
					rapComplete = true;
				} else {
					MACRandomAccessResponse *rar = check_and_cast<MACRandomAccessResponse*>(pdu->getSdus(0));
					unsigned ulGrant = rar->getUlGrant();
					unsigned short tempCRnti = 0;

					rarBuffer[ulGrant].push_back(rar);

					tempCRnti = rarBuffer[ulGrant].front()->getTmpCRnti();
					sub->setRnti(tempCRnti);
					sub->setRntiType(TempCRnti);

					if (!rarComplete) {

					}

					rarComplete = true;
				}
			}
		}
	}
}

void MACue::setAllocatedProcess(HARQProcess *harqProc) {
    this->allocProc = harqProc;
}

void MACue::receiveChangeNotification(int category, const cPolymorphic *details) {
    Enter_Method_Silent();

    if (category == SUBFRAMEIndication) {
//    	EV << "MACue: Received SUBFRAMEIndication from physical layer. Processing the indication.\n";
//        SubframeIndication *sfInd = check_and_cast<SubframeIndication*>(details);
//        unsigned tti = sfInd->getTti();
//
//        // uplink scheduling
//        SchedUlTriggerReq *triggReq = new SchedUlTriggerReq();
//        triggReq->setTti(tti);
//        triggReq->setRapComplete(rapComplete);
//
//        nb->fireChangeNotification(SCHED_UL_TRIGGER_REQ, triggReq);

    } else if (category == SCHED_UL_CONFIG_IND) {
    	EV << "MACue: Received SCHED_UL_CONFIG_IND from physical layer. Processing the indication.\n";
        SchedUlConfigInd *cfgInd = check_and_cast<SchedUlConfigInd*>(details);
        unsigned tti = cfgInd->getTti();

        // check Random Access scheduling
        // normally it should be only one scheduling element
        for (unsigned i = 0; i < cfgInd->getRaConfigListArraySize(); i++) {
        	rapInitialization(tti, cfgInd->getRaConfigList(i));
        }
    } else if (category == DLASSIGNIndication) {
    	EV << "MACue: Received DLASSIGNIndication from physical layer. Processing the indication.\n";
        DlAssignIndication *dlAssignInd = check_and_cast<DlAssignIndication*>(details);
        dlAssigns[dlAssignInd->getRnti()] = dlAssignInd;
//        dlAssignmentReception(dlAssignInd);
    } else if (category == RARIndication) {
    	EV << "MACue: Received RARIndication from physical layer. Processing the indication.\n";
    	RarIndication *rarInd = check_and_cast<RarIndication*>(details);
    	this->rarInd = rarInd;
    }
}
