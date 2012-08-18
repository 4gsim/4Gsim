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

#ifndef RRCMESSAGE_H_
#define RRCMESSAGE_H_

#include "RRCPdu.h"

enum UlCcchMessageTypes {
    cellUpdate = 0,
    rrcConnectionRequest = 1,
    uraUpdate = 2,
    spareUlCcchMessageType = 3
};

class UlCcchMessageType : public Choice {
private:
    static const void *choicesInfo[4];
public:
    static const Info theInfo;
    UlCcchMessageType() : Choice(&theInfo) {}

//  void setId(char *id);
//  char *getId();
};

class UlCcchMessage : public Sequence {
private:
    static const void *itemsInfo[2];
    static bool itemsPres[2];
public:
    static const Info theInfo;
    UlCcchMessage(UlCcchMessageType& message, IntegrityCheckInfo *integrityCheckInfo = NULL);

//  unsigned char getProcedureCode() { return static_cast<IntegerBase*>(items.at(0))->getValue(); }
//  OpenType *getValue() { return static_cast<OpenType*>(items.at(2)); }
//
    void setUlCchMessageType(UlCcchMessageType& message) { *static_cast<UlCcchMessageType*>(items[1]) = message; }
//    void setEstablishmentCause(unsigned char estCause) { static_cast<EstablishmentCause*>(items[1])->setValue(estCause); }
//    void setProtocolErrorIndicator(unsigned char protErrInd) { static_cast<ProtocolErrorIndicator*>(items[1])->setValue(protErrInd); }

};

#endif /* RRCMESSAGE_H_ */
