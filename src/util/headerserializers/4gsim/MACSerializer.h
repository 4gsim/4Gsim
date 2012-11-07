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

#ifndef MACSERIALIZER_H_
#define MACSERIALIZER_H_

#include "MACMessage.h"

class MACSerializer {
public:
    MACSerializer();
    virtual ~MACSerializer();

    unsigned serializeHeader(MACSubHeader *header, unsigned char *buf);

    unsigned serializeServiceDataUnit(MACServiceDataUnit *sdu, unsigned char *buf);

    unsigned serialize(MACProtocolDataUnit *pdu, unsigned char *buf, unsigned bufsize);
};

#endif /* MACSERIALIZER_H_ */
