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

#ifndef RRCPDU_H_
#define RRCPDU_H_

#include "RRCIe.h"

class CellUpdate : public Sequence {
private:
    static const void *itemsInfo[9];
    static bool itemsPres[9];
public:
    static const Info theInfo;
//    RRCConnectionRequest(InitialUeIdentity& initUeId, unsigned char estCause, bool protErrInd, MeasuredResultsOnRACH *measResOnRach = NULL, V3d0NonCriticalExtensions *v3d0NonCritExt = NULL);

//  unsigned char getProcedureCode() { return static_cast<IntegerBase*>(items.at(0))->getValue(); }
//  OpenType *getValue() { return static_cast<OpenType*>(items.at(2)); }
//
//    void setInitialUeIdentity(InitialUeIdentity& initUeId) { *static_cast<InitialUeIdentity*>(items[0]) = initUeId; }
//    void setEstablishmentCause(unsigned char estCause) { static_cast<EstablishmentCause*>(items[1])->setValue(estCause); }
//    void setProtocolErrorIndicator(unsigned char protErrInd) { static_cast<ProtocolErrorIndicator*>(items[1])->setValue(protErrInd); }

};

class RRCConnectionRequest : public Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	RRCConnectionRequest(InitialUeIdentity& initUeId, unsigned char estCause, bool protErrInd, MeasuredResultsOnRACH *measResOnRach = NULL, V3d0NonCriticalExtensions *v3d0NonCritExt = NULL);

//	unsigned char getProcedureCode() { return static_cast<IntegerBase*>(items.at(0))->getValue(); }
//	OpenType *getValue() { return static_cast<OpenType*>(items.at(2)); }
//
	void setInitialUeIdentity(InitialUeIdentity& initUeId) { *static_cast<InitialUeIdentity*>(items[0]) = initUeId; }
	void setEstablishmentCause(unsigned char estCause) { static_cast<EstablishmentCause*>(items[1])->setValue(estCause); }
	void setProtocolErrorIndicator(unsigned char protErrInd) { static_cast<ProtocolErrorIndicator*>(items[1])->setValue(protErrInd); }

};

class URAUpdate : public Sequence {
private:
    static const void *itemsInfo[4];
    static bool itemsPres[4];
public:
    static const Info theInfo;
//    RRCConnectionRequest(InitialUeIdentity& initUeId, unsigned char estCause, bool protErrInd, MeasuredResultsOnRACH *measResOnRach = NULL, V3d0NonCriticalExtensions *v3d0NonCritExt = NULL);

//  unsigned char getProcedureCode() { return static_cast<IntegerBase*>(items.at(0))->getValue(); }
//  OpenType *getValue() { return static_cast<OpenType*>(items.at(2)); }
//
//    void setInitialUeIdentity(InitialUeIdentity& initUeId) { *static_cast<InitialUeIdentity*>(items[0]) = initUeId; }
//    void setEstablishmentCause(unsigned char estCause) { static_cast<EstablishmentCause*>(items[1])->setValue(estCause); }
//    void setProtocolErrorIndicator(unsigned char protErrInd) { static_cast<ProtocolErrorIndicator*>(items[1])->setValue(protErrInd); }

};

#endif /* RRCPDU_H_ */
