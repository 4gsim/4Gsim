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

#include "RRCEntity.h"
#include "RRC.h"
#include "LTEControlInfo_m.h"

RRCEntity::RRCEntity() {
    // TODO Auto-generated constructor stub
    init();
}

RRCEntity::RRCEntity(bool nodeType) {
    init();
    this->nodeType = nodeType;
    if (nodeType == UE_NODE_TYPE) {
        fsm = cFSM("fsm-RRC-UE");
        fsm.setState(UE_RRC_IDLE);
//        take(fsm);
    } else {
        fsm = cFSM("fsm-RRC-ENB");
        fsm.setState(EUTRAN_RRC_IDLE);
//        take(fsm);
    }
}

RRCEntity::~RRCEntity() {
    // TODO Auto-generated destructor stub
}

void RRCEntity::init() {
    module = NULL;
}

void RRCEntity::performStateTransition(RRCEvent event) {
    int oldState = fsm.getState();

    switch(oldState) {
        case UE_RRC_IDLE:
            switch(event) {
                case ConnectionEstablishment: {
                    sendRRCConnectionRequest();
                    break;
                }
                default:
                    EV << "RRC: Received unexpected event.\n";
                    break;
            }
            break;
        case EUTRAN_RRC_IDLE:
            switch(event) {
                case ConnectionEstablishment: {
                    sendRRCConnectionSetup();
                    FSM_Goto(fsm, EUTRAN_RRC_CONNECTED);
                    break;
                }
                default:
                    EV << "RRC: Received unexpected event.\n";
                    break;
            }
            break;
        default:
            EV << "RRC: Unknown state.\n";
            break;
    }
}

void RRCEntity::sendRRCConnectionRequest() {
//    using namespace rrc;
    char *randVal = (char*)malloc(5);
    InitialUEIdentity initUeId = InitialUEIdentity();
    initUeId.setValue(new InitialUEIdentityRandomValue(randVal), InitialUEIdentity::initialUEIdentityRandomValue);

    RRCConnectionRequestr8IEs *rrcConnReqIes = new RRCConnectionRequestr8IEs(initUeId, EstablishmentCause(mo_Signalling_EstablishmentCause), RRCConnectionRequestr8IEsSpare());
    RRCConnectionRequestCriticalExtensions critExt = RRCConnectionRequestCriticalExtensions();
    critExt.setValue(rrcConnReqIes, RRCConnectionRequestCriticalExtensions::rrcConnectionRequestr8);

    RRCConnectionRequest *rrcConnReq = new RRCConnectionRequest(critExt);

    ULCCCHMessageTypeC1 *c1 = new ULCCCHMessageTypeC1();
    c1->setValue(rrcConnReq, ULCCCHMessageTypeC1::rrcConnectionRequest);

    module->sendDown(-1, ULCCCH, ULCCCHMessageType::uLCCCHMessageTypeC1, "RRCConnectionRequest", c1);
}

void RRCEntity::sendRRCConnectionSetup() {
    RRCTransactionIdentifier rrcTransId = RRCTransactionIdentifier((int64_t)0);

    SRBToAddModSrbIdentity srbId = SRBToAddModSrbIdentity(1);
    SRBToAddModRlcConfig rlcConf = SRBToAddModRlcConfig();
    rlcConf.setValue(new Null(), SRBToAddModRlcConfig::sRBToAddModRlcConfigDefaultValue);
    SRBToAddModLogicalChannelConfig logChConf = SRBToAddModLogicalChannelConfig();
    logChConf.setValue(new Null(), SRBToAddModLogicalChannelConfig::sRBToAddModLogicalChannelConfigDefaultValue);

    SRBToAddMod *srbTodAddMod = new SRBToAddMod(srbId);
    srbTodAddMod->setSRBToAddModRlcConfig(rlcConf);
    srbTodAddMod->setSRBToAddModLogicalChannelConfig(logChConf);

    SRBToAddModList srbToAddModList = SRBToAddModList();
    srbToAddModList.push_back(srbTodAddMod);

    RadioResourceConfigDedicated radioResConfDed = RadioResourceConfigDedicated();
    radioResConfDed.setSrbToAddModList(srbToAddModList);

    RRCConnectionSetupr8IEs *rrcConnSetIes = new RRCConnectionSetupr8IEs(radioResConfDed);
    RRCConnectionSetupCriticalExtensions critExt = RRCConnectionSetupCriticalExtensions();
    critExt.setValue(rrcConnSetIes, RRCConnectionSetupCriticalExtensions::rRCConnectionSetupCriticalExtensionsC1);

    RRCConnectionSetup *rrcConnSet = new RRCConnectionSetup(rrcTransId, critExt);

    DLCCCHMessageTypeC1 *c1 = new DLCCCHMessageTypeC1();
    c1->setValue(rrcConnSet, DLCCCHMessageTypeC1::rrcConnectionSetup);

//    module->sendDown(DLCCCH, DLCCCHMessageType::dLCCCHMessageTypeC1, "RRCConnectionSetup", c1);
}

void RRCEntity::processRRCConnectionRequest(RRCConnectionRequest *rrcConnReq) {
    this->performStateTransition(ConnectionEstablishment);
}

const char *RRCEntity::stateName(int state) const {
#define CASE(x) case x: s=#x; break
    const char *s = "unknown";
    switch (state) {
        CASE(UE_RRC_CONNECTED);
        CASE(UE_RRC_IDLE);
        CASE(EUTRAN_RRC_CONNECTED);
        CASE(EUTRAN_RRC_IDLE);
    }
    return s;
#undef CASE
}

const char *RRCEntity::eventName(int event) {
#define CASE(x) case x: s=#x; break
    const char *s = "unknown";
    switch (event) {
        CASE(ConnectionEstablishment);
        CASE(ConnectionRelease);
    }
    return s;
#undef CASE
}

void RRCEntity::setModule(RRC *module) {
    this->module = module;
}

RRC *RRCEntity::getModule() {
    return module;
}

void RRCEntity::setOwner(Subscriber *ownerp) {
    ownerp->setRrcEntity(this);
    this->ownerp = ownerp;
}

Subscriber *RRCEntity::getOwner() {
    return ownerp;
}

std::string RRCEntity::info(int tabs) const {
    std::stringstream out;
    for (int i = 0; i < tabs; i++) out << "\t";
        out << "rrcSt:" << stateName(fsm.getState()) << "\n";


    return out.str();
}

