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

#include "RRC.h"
#include "MACControlInfo_m.h"
#include "RRCUtils.h"
#include "RRCMessage.h"

Define_Module(RRC);

RRC::RRC() {
	// TODO Auto-generated constructor stub

}

RRC::~RRC() {
	// TODO Auto-generated destructor stub
}

void RRC::initialize(int stage) {
    nb = NotificationBoardAccess().get();
    nb->subscribe(this, NF_RAND_ACCESS_COMPL);

    fsm.setState(RRC_IDLE);

    using namespace rrc;
////    char lac[2] = {0x5b, 0x10};


//
//    MNC mnc = MNC();
//    MCC mcc = MCC();
//    mcc.push_back(new MCCMNCDigit(2));
//    mcc.push_back(new MCCMNCDigit(6));
//    mcc.push_back(new MCCMNCDigit((int64_t)0));
//    mnc.push_back(new MCCMNCDigit((int64_t)0));
//    mnc.push_back(new MCCMNCDigit(2));
//    PLMNIdentity plmnId = PLMNIdentity(mnc);
//    plmnId.setMcc(mcc);
//    plmnId.setOptFlag(0, true);
////    plmnId.setMcc(mcc);
////    plmnId.setMnc(mnc);
//    LAI lai = LAI(plmnId, LAILac(lac));
////    lai.setPlmnIdentity(plmnId);
////    lai.setLAILac(LAILac(lac));
//    TMSIandLAIGSMMAP *tMSIandLAIGSMMAP = new TMSIandLAIGSMMAP(TMSIGSMMAP(tmsi), lai);
////    tMSIandLAIGSMMAP->setTmsi(TMSIGSMMAP(tmsi));
////    tMSIandLAIGSMMAP->setLai(lai);
//    InitialUEIdentity initUeId = InitialUEIdentity();
//    initUeId.setValue(tMSIandLAIGSMMAP, InitialUEIdentity::tmsiandLAI);
//    RRCConnectionRequest *rrcConnReq = new RRCConnectionRequest(initUeId, EstablishmentCause(interRAT_CellReselection_EstablishmentCause), ProtocolErrorIndicator(noError_ProtocolErrorIndicator));
////    rrcConnReq->setInitialUEIdentity(initUeId);
////    rrcConnReq->setEstablishmentCause(EstablishmentCause(interRAT_CellReselection_EstablishmentCause));
////    rrcConnReq->setProtocolErrorIndicator(ProtocolErrorIndicator(noError_ProtocolErrorIndicator));
////    MeasuredResultsOnRACH measResOnRach = MeasuredResultsOnRACH();
////    MeasuredResultsOnRACHCurrentCell measResOnRachCurrCell = MeasuredResultsOnRACHCurrentCell();
////    MeasuredResultsOnRACHCurrentCellModeSpecificInfo measResOnRachCurrCellModeSpecInfo = MeasuredResultsOnRACHCurrentCellModeSpecificInfo();
////    MeasuredResultsOnRACHCurrentCellModeSpecificInfoFdd *measResOnRachCurrCellModeSpecInfoFdd = new MeasuredResultsOnRACHCurrentCellModeSpecificInfoFdd();
////    MeasuredResultsOnRACHCurrentCellModeSpecificInfoFddMeasurementQuantity measResOnRachCurrCellModeSpecInfoFddQuant = MeasuredResultsOnRACHCurrentCellModeSpecificInfoFddMeasurementQuantity();
////    measResOnRachCurrCellModeSpecInfoFddQuant.setValue(new CPICHEcN0(37), MeasuredResultsOnRACHCurrentCellModeSpecificInfoFddMeasurementQuantity::cpichEcN0);
////    measResOnRachCurrCellModeSpecInfoFdd->setMeasuredResultsOnRACHCurrentCellModeSpecificInfoFddMeasurementQuantity(measResOnRachCurrCellModeSpecInfoFddQuant);
////    measResOnRachCurrCellModeSpecInfo.setValue(measResOnRachCurrCellModeSpecInfoFdd, MeasuredResultsOnRACHCurrentCellModeSpecificInfo::measuredResultsOnRACHCurrentCellModeSpecificInfoFdd);
////    measResOnRachCurrCell.setMeasuredResultsOnRACHCurrentCellModeSpecificInfo(measResOnRachCurrCellModeSpecInfo);
////    measResOnRach.setMeasuredResultsOnRACHCurrentCell(measResOnRachCurrCell);
////    rrcConnReq->setMeasuredResultsOnRACH(measResOnRach);
////    rrcConnReq->setOptFlag(0, true);

//    PerEncoder perEnc = PerEncoder(UNALIGNED);
//    perEnc.encodeSequence(ulccchMessage);
//    LTEUtils().printBytes(perEnc.getBuffer(), perEnc.getLength());
//    RRCMessage *rrcMsg = new RRCMessage();
//    rrcMsg->setValueArraySize(perEnc.getLength());
//    for (unsigned i = 0; i < rrcMsg->getValueArraySize(); i++) {
//        rrcMsg->setValue(i, perEnc.getByteAt(i));
//    }
//    send(rrcMsg, gate("rlcOut"));
}

void RRC::handleMessage(cMessage *msg) {

}

void RRC::sendDown(int logChannel, int choice, AbstractType *payload) {
    using namespace rrc;

    switch(logChannel) {
        case ULCCCH: {
            ULCCCHMessageType ulccchMessageType = ULCCCHMessageType();
            ULCCCHMessageTypeC1 *c1 = dynamic_cast<ULCCCHMessageTypeC1*>(payload);
            ulccchMessageType.setValue(c1, choice);
            ULCCCHMessage *ulccchMessage = new ULCCCHMessage();
            ulccchMessage->setMessage(ulccchMessageType);
            RRCMessage *msg = new RRCMessage();
            msg->setSdu(ulccchMessage);
            this->send(msg, gate("lowerLayerOut"));
            break;
        }
        default:
            break;
    }
}

void RRC::sendRRCConnectionRequest() {
    using namespace rrc;
    char mmeCode = 0x77;
    char tmsi[4] = {0x19, 0x02, 0x2c, 0xba};
    InitialUEIdentity initUeId = RRCUtils().createInitialUEIdentity(mmeCode, tmsi);

    RRCConnectionRequestr8IEs *rrcConnReqIes = new RRCConnectionRequestr8IEs(initUeId, EstablishmentCause(mo_Signalling_EstablishmentCause), RRCConnectionRequestr8IEsSpare());
    RRCConnectionRequestCriticalExtensions critExt = RRCConnectionRequestCriticalExtensions();
    critExt.setValue(rrcConnReqIes, RRCConnectionRequestCriticalExtensions::rrcConnectionRequestr8);

    RRCConnectionRequest *rrcConnReq = new RRCConnectionRequest(critExt);

    ULCCCHMessageTypeC1 *c1 = new ULCCCHMessageTypeC1();
    c1->setValue(rrcConnReq, ULCCCHMessageTypeC1::rrcConnectionRequest);

    sendDown(ULCCCH, ULCCCHMessageType::uLCCCHMessageTypeC1, c1);
}

void RRC::performStateTransition(RRCEvent &event) {
    int oldState = fsm.getState();

    switch(oldState) {
        case RRC_IDLE:
            switch(event) {
                case RRC_CONN_EST: {
                    sendRRCConnectionRequest();
                    break;
                }
                default:
                    EV << "RRC: Received unexpected event\n";
                    break;
            }
            break;
        default:
            EV << "RRC: Unknown state\n";
            break;
    }

}

void RRC::receiveChangeNotification(int category, const cPolymorphic *details) {
    if (category == NF_RAND_ACCESS_COMPL) {
        EV << "RRC: Received NF_RAND_ACCESS_COMPL notification. Processing notification.\n";
        RRCEvent event = RRC_CONN_EST;
        performStateTransition(event);
    }
}


