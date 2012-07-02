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

#ifndef DIAMETERSERIALIZER_H_
#define DIAMETERSERIALIZER_H_

#include "DiameterMessage.h"
#include "SCTPMessage_m.h"

class DiameterSerializer {
private:
	unsigned getMessageLength(DiameterMessage *msg);
	unsigned serializeHeader(DiameterHeader hdr, unsigned len, char *p);
	unsigned parseHeader(DiameterHeader *hdr, char *p);
public:
	DiameterSerializer();
	virtual ~DiameterSerializer();

	unsigned serializeAVP(AVP *avp, char *p);
	unsigned parseAVP(AVP *avp, char *p);
    SCTPSimpleMessage *serialize(DiameterMessage *msg);
    DiameterMessage *parse(const SCTPSimpleMessage *msg);
};

#endif /* DIAMETERSERIALIZER_H_ */
