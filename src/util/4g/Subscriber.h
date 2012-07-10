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

#ifndef SUBSCRIBER_H_
#define SUBSCRIBER_H_

#include "NotificationBoard.h"
#include "TunnelEndpoint.h"
#include "EMMEntity.h"
#include "ESMEntity.h"

enum SubscriberStatus {
	SUB_INACTIVE,
	SUB_PENDING,
	SUB_ACTIVE
};

enum SubscriberGTPProcedure {
	NoProcedure = 0,
	EUTRANInitAttachReq = 2,
	EUTRANInitAttachRes = 3,
};

class Subscriber : public cPolymorphic {
private:
	unsigned enbId;
	unsigned mmeId;
	int channelNr;
//	char *imsi;
	char *plmnId;
	char *cellId;
	char *tac;
	char *mmeCode;
	char *mmeGrId;
	char *msisdn;
	char ratType;
	char status;	// for deleting the subscriber
	TunnelEndpoint *s11Tunn;
	std::list<unsigned> seqNrs;
	EMMEntity *emm;
	ESMEntity *esm;
	unsigned char gtpProc;
public:
	Subscriber();
	virtual ~Subscriber();

	/* setter */
	void setEnbId(unsigned enbId) { this->enbId = enbId; }
	void setMmeId(unsigned mmeId) { this->mmeId = mmeId; }
	void setMmeGroupId(char *mmeGrId) { this->mmeGrId = mmeGrId; }
	void setMmeCode(char *mmeCode) { this->mmeCode = mmeCode; }
	void setChannelNr(unsigned channelNr) { this->channelNr = channelNr; }
	void setImsi(char *imsi) { emm->setImsi(imsi); }
	void setCellId(char *cellId) { this->cellId = cellId; }
	void setPlmnId(char *plmnId) { this->plmnId = plmnId; }
	void setTac(char *tac) { this->tac = tac; }
	void setMsisdn(char *msisdn) { this->msisdn = msisdn; }
	void setS11TunnEnd(TunnelEndpoint *s11Tunn) { s11Tunn->setOwner(this); this->s11Tunn = s11Tunn; }
	void setEmmEntity(EMMEntity *emm) { this->emm = emm; }
	void setEsmEntity(ESMEntity *esm) { this->esm = esm; }
	void setStatus(char status) { this->status = status; }
	void setGTPProcedure(unsigned gtpProc) { this->gtpProc = gtpProc; }

	/* getter */
	unsigned getEnbId() { return enbId; }
	unsigned getMmeId() { return mmeId; }
	char *getMmeCode() { return mmeCode; }
	char *getMmeGroupId() { return mmeGrId; }
	int getChannelNr() { return channelNr; }
	char *getCellId() { return cellId; }
	char *getPlmnId() { return plmnId; }
	char *getTac() { return tac; }
	char *getMsisdn() { return msisdn; }
	char getRatType() { return ratType; }
	TunnelEndpoint *getS11TunnEnd() { return s11Tunn; }
	EMMEntity *getEmmEntity() { return emm; }
	ESMEntity *getEsmEntity() { return esm; }
	virtual const char *getName() const  {return "Sub";}
	PDNConnection *getDefaultPDNConn() { return esm->getDefPDNConnection(); }
	char getStatus() { return status; }
	const char *statusName() const;
	unsigned char getGTPProcedure() { return gtpProc; }

	/* message sequence numbers */
	void pushSeqNr(unsigned seqNr) { seqNrs.push_back(seqNr); }
	unsigned popSeqNr();
	unsigned backSeqNr() { return seqNrs.back(); }

	void initEntities(unsigned char appType);

	std::string info() const;
};

#endif /* SUBSCRIBER_H_ */
