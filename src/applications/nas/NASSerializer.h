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

#ifndef NASSERIALIZER_H_
#define NASSERIALIZER_H_

#include "NASMessage_m.h"

class NASSerializer {
private:
	unsigned char shift;
	unsigned serializeHeader(NASHeader hdr, char *p);

	unsigned serializeIE(NASInfoElem ie, char *p);

	unsigned calcLength(NASPlainMessage *msg);
public:
	unsigned short skip;
	NASSerializer();
	virtual ~NASSerializer();

	unsigned serialize(NASPlainMessage *msg, char *&buffer);
	NASHeader parseHeader(char *p);
	NASInfoElem parseIE(char *p, unsigned char format, unsigned char ieType, unsigned short length = 0);
//	NASPlainMessage *parse(char *buffer, unsigned len);
};

#endif /* NASSERIALIZER_H_ */
