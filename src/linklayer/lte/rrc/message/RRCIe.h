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

#ifndef RRCIE_H_
#define RRCIE_H_

#include "ASNTypes.h"

/*
 * Simple RRC message information elements.
 */

typedef Integer<CONSTRAINED, 0, 9> Digit;

typedef BitString<CONSTRAINED, 32, 32> EsnDs41;

enum EstablishmentCauseValues {
	originatingConversationalCall,
	originatingStreamingCall,
	originatingInteractiveCall,
	originatingBackgroundCall,
	originatingSubscribedTrafficCall,
	terminatingConversationalCall,
	terminatingStreamingCall,
	terminatingInteractiveCall,
	terminatingBackgroundCall,
	emergencyCall,
	interRATCellReselection,
	interRATCellChangeOrder,
	registration,
	detach,
	originatingHighPrioritySignalling,
	originatingLowPrioritySignalling,
	callReestablishment,
	terminatingHighPrioritySignalling,
	terminatingLowPrioritySignalling,
	terminatingCauseUnknown,
	mbmsReception,
	mbmsPTPRBRequest,
	spare10,
	spare9,
	spare8,
	spare7,
	spare6,
	spare5,
	spare4,
	spare3,
	spare2,
	spare1
};

typedef Enumerated<CONSTRAINED, 32> EstablishmentCause;

typedef Integer<CONSTRAINED, 0, 15> ImeiDigit;

typedef OctetString<CONSTRAINED, 5, 7> ImsiDs41;

typedef BitString<CONSTRAINED, 16, 16> Lac;

enum ProtocolErrorIndicatorValues {
	noError,
	errorOcurred
};

typedef Enumerated<CONSTRAINED, 2> ProtocolErrorIndicator;

typedef BitString<CONSTRAINED, 32, 32> PTmsiGsmMap;

typedef BitString<CONSTRAINED, 8, 8> RoutingAreaCode;

typedef OctetString<CONSTRAINED, 2, 17> TmsiDs41;

typedef BitString<CONSTRAINED, 32, 32> TmsiGsmMap;




/*
 * Compound RRC message information elements.
 */

typedef SequenceOf<Digit, CONSTRAINED, 15, 15> Imei;
//ERabToBeSetupListCtxtSuReq *toERabToBeSetupListCtxtSuReq(std::vector<BearerContext*> bearers);
//std::vector<BearerContext*> fromERabToBeSetupListCtxtSuReq(ERabToBeSetupListCtxtSuReq *eRabToBeSetupListCtxtSuReq);

class ImsiAndEsnDs41 : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ImsiAndEsnDs41() : Sequence(&theInfo) {}
//	AllocationAndRetentionPriority(unsigned char prioLvl = 0, unsigned char preCapab = 0, unsigned char preVul = 0, ProtocolExtContainer *exts = NULL);

//	unsigned char getPriorityLevel() const { return static_cast<PriorityLevel*>(items[0])->getValue(); }
//	unsigned char getPreEmptionCapability() const { return static_cast<PreEmptionCapability*>(items[1])->getValue(); }
//	unsigned char getPreEmptionVulnerability() const { return static_cast<PreEmptionVulnerability*>(items[2])->getValue(); }
//
//	void setPriorityLevel(unsigned char prioLvl) { static_cast<PriorityLevel*>(items[0])->setValue(prioLvl); }
//	void setPreEmptionCapability(unsigned char preCapab) { static_cast<PriorityLevel*>(items[1])->setValue(preCapab); }
//	void setPreEmptionVulnerability(unsigned char preVul) { static_cast<PriorityLevel*>(items[2])->setValue(preVul); }
//	void setProtocolExtContainer(ProtocolExtContainer *exts);
};

typedef SequenceOf<Digit, CONSTRAINED, 6, 21> ImsiGsmMap;
//ERabToBeSetupListCtxtSuReq *toERabToBeSetupListCtxtSuReq(std::vector<BearerContext*> bearers);
//std::vector<BearerContext*> fromERabToBeSetupListCtxtSuReq(ERabToBeSetupListCtxtSuReq *eRabToBeSetupListCtxtSuReq);

typedef SequenceOf<Digit, CONSTRAINED, 3, 3> Mcc;
Mcc *toMcc(std::vector<unsigned char> mcc);
std::vector<unsigned char> fromMcc(Mcc *mcc);

typedef SequenceOf<Digit, CONSTRAINED, 2, 3> Mnc;
Mnc *toMnc(std::vector<unsigned char> mnc);
std::vector<unsigned char> fromMnc(Mnc *mnc);

class MeasuredResultsOnRACH : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MeasuredResultsOnRACH() : Sequence(&theInfo) {}
//	AllocationAndRetentionPriority(unsigned char prioLvl = 0, unsigned char preCapab = 0, unsigned char preVul = 0, ProtocolExtContainer *exts = NULL);

//	unsigned char getPriorityLevel() const { return static_cast<PriorityLevel*>(items[0])->getValue(); }
//	unsigned char getPreEmptionCapability() const { return static_cast<PreEmptionCapability*>(items[1])->getValue(); }
//	unsigned char getPreEmptionVulnerability() const { return static_cast<PreEmptionVulnerability*>(items[2])->getValue(); }
//
//	void setPriorityLevel(unsigned char prioLvl) { static_cast<PriorityLevel*>(items[0])->setValue(prioLvl); }
//	void setPreEmptionCapability(unsigned char preCapab) { static_cast<PriorityLevel*>(items[1])->setValue(preCapab); }
//	void setPreEmptionVulnerability(unsigned char preVul) { static_cast<PriorityLevel*>(items[2])->setValue(preVul); }
//	void setProtocolExtContainer(ProtocolExtContainer *exts);
};

class PlmnIdentity : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PlmnIdentity() : Sequence(&theInfo) {}
	PlmnIdentity(std::vector<unsigned char> mcc, std::vector<unsigned char>mnc);

	//	unsigned char getPriorityLevel() const { return static_cast<PriorityLevel*>(items[0])->getValue(); }
//	unsigned char getPreEmptionCapability() const { return static_cast<PreEmptionCapability*>(items[1])->getValue(); }
//	unsigned char getPreEmptionVulnerability() const { return static_cast<PreEmptionVulnerability*>(items[2])->getValue(); }
//
	void setMcc(std::vector<unsigned char> mcc) { *static_cast<Mcc*>(items[0]) = toMcc(mcc); }
	void setMnc(std::vector<unsigned char>mnc) { *static_cast<Mnc*>(items[1]) = toMnc(mnc); }
};

class Lai : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Lai() : Sequence(&theInfo) {}
	Lai(PlmnIdentity& plmnId, char *lac);

//	unsigned char getPriorityLevel() const { return static_cast<PriorityLevel*>(items[0])->getValue(); }
//	unsigned char getPreEmptionCapability() const { return static_cast<PreEmptionCapability*>(items[1])->getValue(); }
//	unsigned char getPreEmptionVulnerability() const { return static_cast<PreEmptionVulnerability*>(items[2])->getValue(); }

	void setPlmnIdentity(PlmnIdentity& plmnId) { *static_cast<PlmnIdentity*>(items[0]) = plmnId; }
	void setLac(char *lac) { static_cast<Lac*>(items[1])->setValue(lac); }
};

class Rai : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Rai() : Sequence(&theInfo) {}
//	AllocationAndRetentionPriority(unsigned char prioLvl = 0, unsigned char preCapab = 0, unsigned char preVul = 0, ProtocolExtContainer *exts = NULL);

//	unsigned char getPriorityLevel() const { return static_cast<PriorityLevel*>(items[0])->getValue(); }
//	unsigned char getPreEmptionCapability() const { return static_cast<PreEmptionCapability*>(items[1])->getValue(); }
//	unsigned char getPreEmptionVulnerability() const { return static_cast<PreEmptionVulnerability*>(items[2])->getValue(); }
//
//	void setPriorityLevel(unsigned char prioLvl) { static_cast<PriorityLevel*>(items[0])->setValue(prioLvl); }
//	void setPreEmptionCapability(unsigned char preCapab) { static_cast<PriorityLevel*>(items[1])->setValue(preCapab); }
//	void setPreEmptionVulnerability(unsigned char preVul) { static_cast<PriorityLevel*>(items[2])->setValue(preVul); }
//	void setProtocolExtContainer(ProtocolExtContainer *exts);
};

class PTmsiAndRaiGsmMap : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PTmsiAndRaiGsmMap() : Sequence(&theInfo) {}
//	AllocationAndRetentionPriority(unsigned char prioLvl = 0, unsigned char preCapab = 0, unsigned char preVul = 0, ProtocolExtContainer *exts = NULL);

//	unsigned char getPriorityLevel() const { return static_cast<PriorityLevel*>(items[0])->getValue(); }
//	unsigned char getPreEmptionCapability() const { return static_cast<PreEmptionCapability*>(items[1])->getValue(); }
//	unsigned char getPreEmptionVulnerability() const { return static_cast<PreEmptionVulnerability*>(items[2])->getValue(); }
//
//	void setPriorityLevel(unsigned char prioLvl) { static_cast<PriorityLevel*>(items[0])->setValue(prioLvl); }
//	void setPreEmptionCapability(unsigned char preCapab) { static_cast<PriorityLevel*>(items[1])->setValue(preCapab); }
//	void setPreEmptionVulnerability(unsigned char preVul) { static_cast<PriorityLevel*>(items[2])->setValue(preVul); }
//	void setProtocolExtContainer(ProtocolExtContainer *exts);
};

class TmsiAndLaiGsmMap : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TmsiAndLaiGsmMap() : Sequence(&theInfo) {}
	TmsiAndLaiGsmMap(char *tmsi, Lai& lai);

//	unsigned char getPriorityLevel() const { return static_cast<PriorityLevel*>(items[0])->getValue(); }
//	unsigned char getPreEmptionCapability() const { return static_cast<PreEmptionCapability*>(items[1])->getValue(); }
//	unsigned char getPreEmptionVulnerability() const { return static_cast<PreEmptionVulnerability*>(items[2])->getValue(); }
//
	void setTmsiGsmMap(char *tmsi) { static_cast<TmsiGsmMap*>(items[0])->setValue(tmsi); }
	void setLai(Lai& lai) { *static_cast<Lai*>(items[0]) = lai; }
};

enum InitialUeIdentityChoices {
	imsi = 0,
	tmsiAndLai = 1,
	pTmsiAndRai = 2,
	imei = 3,
	esnDs41 = 4,
	imsiDs41 = 5,
	imsiAndEsnDs41 = 6,
	tmsiAndDs41 = 7
};

class InitialUeIdentity : public Choice {
private:
	static const void *choicesInfo[8];
public:
	static const Info theInfo;
	InitialUeIdentity() : Choice(&theInfo) {}

//	void setId(char *id);
//	char *getId();
};

class V3d0NonCriticalExtensions : public Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	V3d0NonCriticalExtensions() : Sequence(&theInfo) {}
//	AllocationAndRetentionPriority(unsigned char prioLvl = 0, unsigned char preCapab = 0, unsigned char preVul = 0, ProtocolExtContainer *exts = NULL);

//	unsigned char getPriorityLevel() const { return static_cast<PriorityLevel*>(items[0])->getValue(); }
//	unsigned char getPreEmptionCapability() const { return static_cast<PreEmptionCapability*>(items[1])->getValue(); }
//	unsigned char getPreEmptionVulnerability() const { return static_cast<PreEmptionVulnerability*>(items[2])->getValue(); }
//
//	void setPriorityLevel(unsigned char prioLvl) { static_cast<PriorityLevel*>(items[0])->setValue(prioLvl); }
//	void setPreEmptionCapability(unsigned char preCapab) { static_cast<PriorityLevel*>(items[1])->setValue(preCapab); }
//	void setPreEmptionVulnerability(unsigned char preVul) { static_cast<PriorityLevel*>(items[2])->setValue(preVul); }
//	void setProtocolExtContainer(ProtocolExtContainer *exts);
};

#endif /* RRCIE_H_ */
