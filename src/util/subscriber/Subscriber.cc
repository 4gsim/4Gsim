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

#include "Subscriber.h"
#include "LTEUtils.h"
#include "GTPUtils.h"
#include "LTEControlInfo_m.h"

Subscriber::Subscriber() {
	// TODO Auto-generated constructor stub
	ratType = EUTRAN;
	s11Tunn = NULL;
	msisdn = NULL;
	ueId = -1;
	rapid = 65;
	rnti = 65536;
	rntiType = 8;
	enbId = 0;
	mmeId = 0;
	plmnId = NULL;
	cellId = NULL;
	tac = NULL;
	emm = NULL;
	esm = NULL;
	rrc = NULL;
	mmeCode = (char*)calloc(1, sizeof(char));
	mmeGrId = NULL;
	status = SUB_INACTIVE;
	gtpProc = NoProcedure;
}

Subscriber::~Subscriber() {
	// TODO Auto-generated destructor stub
	if (emm != NULL) {
		delete emm;
		emm = NULL;
	}
	if (esm != NULL) {
		delete esm;
		esm = NULL;
	}
	if (rrc != NULL) {
	    delete rrc;
	    rrc = NULL;
	}
}

std::string Subscriber::info() const {

    std::stringstream out;
    if (enbId != 0)
    	out << "\tenbId:" << enbId << "\n";
    if (mmeId != 0)
    	out << "\tmmeId:" << mmeId << "\n";
    out << "\tstatus:" << statusName() << "\n";
    if (ueId != -1)
    	out << "\tueId:" << ueId << "\n";
    if (rapid < 65)
        out << "\trapid:" << rapid << "\n";
    if (rntiType < 8)
        out << "\trntiType:" << rntiTypeName() << "\n";
    if (rnti < 65536)
        out << "\trnti:" << rnti << "\n";
    if (emm != NULL)
    	out << emm->info(1);
    if (plmnId != NULL)
    	out << "\tplmnId:" << LTEUtils().toASCIIString(plmnId, PLMNID_CODED_SIZE) << "\n";
    if (cellId != NULL)
    	out << "\tcellId:" << LTEUtils().toASCIIString(cellId, CELLID_CODED_SIZE, ASCII_TYPE) << "\n";
    if (tac != NULL)
    	out << "\ttac:" << LTEUtils().toASCIIString(tac, TAC_CODED_SIZE, ASCII_TYPE) << "\n";
    if (msisdn != NULL)
    	out << "\tmsisdn:" << LTEUtils().toASCIIString(msisdn, MSISDN_CODED_SIZE) << "\n";
    if (s11Tunn != NULL)
    	out << "\ts11tunn:{ " << s11Tunn->info(2) <<" }\n";
    if (esm != NULL)
    	out << esm->info(1);
    if (rrc != NULL)
        out << rrc->info(1);
    return out.str();
}

const char *Subscriber::statusName() const {
#define CASE(x) case x: s=#x; break
    const char *s = "unknown";
    switch (status) {
        CASE(SUB_ACTIVE);
        CASE(SUB_INACTIVE);
        CASE(SUB_PENDING);
    }
    return s;
#undef CASE
}

const char *Subscriber::rntiTypeName() const {
#define CASE(x) case x: s=#x; break
    const char *s = "unknown";
    switch (rntiType) {
        CASE(NoRnti);
        CASE(PRnti);
        CASE(RaRnti);
        CASE(CRnti);
        CASE(SiRnti);
        CASE(SpsRnti);
        CASE(MRnti);
        CASE(TempCRnti);
    }
    return s;
#undef CASE
}

void Subscriber::initNasEntities(unsigned char appType) {
	ESMEntity *esm = new ESMEntity(appType);
	EMMEntity *emm = new EMMEntity(appType);
	emm->setPeer(esm);
	esm->setPeer(emm);
	emm->setOwner(this);
	esm->setOwner(this);
}

void Subscriber::initRrcEntity(bool nodeType) {
    RRCEntity *rrc = new RRCEntity(nodeType);
    rrc->setOwner(this);
}

unsigned Subscriber::popSeqNr() {
	unsigned seqNr = seqNrs.back();
	seqNrs.pop_back();
	return seqNr;
}

