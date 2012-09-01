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
#include "RRCMessage_m.h"
#include "PerEncoder.h"
#include "LTEUtils.h"

Define_Module(RRC);

RRC::RRC() {
	// TODO Auto-generated constructor stub

}

RRC::~RRC() {
	// TODO Auto-generated destructor stub
}

void RRC::initialize(int stage) {
    using namespace rrc;
    char lac[2] = {0x5b, 0x10};
    char tmsi[4] = {0x19, 0x02, 0x2c, 0xba};

    MNC mnc = MNC();
    MCC mcc = MCC();
    mcc.push_back(new Digit(2));
    mcc.push_back(new Digit(6));
    mcc.push_back(new Digit(0));
    mnc.push_back(new Digit(0));
    mnc.push_back(new Digit(2));
    PLMNIdentity plmnId = PLMNIdentity(mcc, mnc);
//    plmnId.setMcc(mcc);
//    plmnId.setMnc(mnc);
    LAI lai = LAI(plmnId, LAILac(lac));
//    lai.setPlmnIdentity(plmnId);
//    lai.setLAILac(LAILac(lac));
    TMSIandLAIGSMMAP *tMSIandLAIGSMMAP = new TMSIandLAIGSMMAP(TMSIGSMMAP(tmsi), lai);
//    tMSIandLAIGSMMAP->setTmsi(TMSIGSMMAP(tmsi));
//    tMSIandLAIGSMMAP->setLai(lai);
    InitialUEIdentity initUeId = InitialUEIdentity();
    initUeId.setValue(tMSIandLAIGSMMAP, InitialUEIdentity::tmsiandLAI);
    RRCConnectionRequest *rrcConnReq = new RRCConnectionRequest(initUeId, EstablishmentCause(interRAT_CellReselection_EstablishmentCause), ProtocolErrorIndicator(noError_ProtocolErrorIndicator));
//    rrcConnReq->setInitialUEIdentity(initUeId);
//    rrcConnReq->setEstablishmentCause(EstablishmentCause(interRAT_CellReselection_EstablishmentCause));
//    rrcConnReq->setProtocolErrorIndicator(ProtocolErrorIndicator(noError_ProtocolErrorIndicator));
//    MeasuredResultsOnRACH measResOnRach = MeasuredResultsOnRACH();
//    MeasuredResultsOnRACHCurrentCell measResOnRachCurrCell = MeasuredResultsOnRACHCurrentCell();
//    MeasuredResultsOnRACHCurrentCellModeSpecificInfo measResOnRachCurrCellModeSpecInfo = MeasuredResultsOnRACHCurrentCellModeSpecificInfo();
//    MeasuredResultsOnRACHCurrentCellModeSpecificInfoFdd *measResOnRachCurrCellModeSpecInfoFdd = new MeasuredResultsOnRACHCurrentCellModeSpecificInfoFdd();
//    MeasuredResultsOnRACHCurrentCellModeSpecificInfoFddMeasurementQuantity measResOnRachCurrCellModeSpecInfoFddQuant = MeasuredResultsOnRACHCurrentCellModeSpecificInfoFddMeasurementQuantity();
//    measResOnRachCurrCellModeSpecInfoFddQuant.setValue(new CPICHEcN0(37), MeasuredResultsOnRACHCurrentCellModeSpecificInfoFddMeasurementQuantity::cpichEcN0);
//    measResOnRachCurrCellModeSpecInfoFdd->setMeasuredResultsOnRACHCurrentCellModeSpecificInfoFddMeasurementQuantity(measResOnRachCurrCellModeSpecInfoFddQuant);
//    measResOnRachCurrCellModeSpecInfo.setValue(measResOnRachCurrCellModeSpecInfoFdd, MeasuredResultsOnRACHCurrentCellModeSpecificInfo::measuredResultsOnRACHCurrentCellModeSpecificInfoFdd);
//    measResOnRachCurrCell.setMeasuredResultsOnRACHCurrentCellModeSpecificInfo(measResOnRachCurrCellModeSpecInfo);
//    measResOnRach.setMeasuredResultsOnRACHCurrentCell(measResOnRachCurrCell);
//    rrcConnReq->setMeasuredResultsOnRACH(measResOnRach);
//    rrcConnReq->setOptFlag(0, true);
    ULCCCHMessageType ulccchMessageType = ULCCCHMessageType();
    ulccchMessageType.setValue(rrcConnReq, ULCCCHMessageType::rrcConnectionRequest);
    ULCCCHMessage ulccchMessage = ULCCCHMessage();
    ulccchMessage.setMessage(ulccchMessageType);
    PerEncoder perEnc = PerEncoder(UNALIGNED);
    perEnc.encodeSequence(ulccchMessage);
    LTEUtils().printBytes(perEnc.getBuffer(), perEnc.getLength());
    RRCMessage *rrcMsg = new RRCMessage();
    rrcMsg->setValueArraySize(perEnc.getLength());
    for (unsigned i = 0; i < rrcMsg->getValueArraySize(); i++) {
        rrcMsg->setValue(i, perEnc.getByteAt(i));
    }
    send(rrcMsg, gate("rlcOut"));
}

void RRC::handleMessage(cMessage *msg) {

}

