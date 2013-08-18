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

#include "LTEControlInfo.h"

LTEControlInfo::LTEControlInfo() : LTEControlInfo_Base() {
	// TODO Auto-generated constructor stub

}

LTEControlInfo::~LTEControlInfo() {
	// TODO Auto-generated destructor stub
}

LTEControlInfo& LTEControlInfo::operator=(const LTEControlInfo& other) {
	LTEControlInfo_Base::operator=(other);

	return *this;
}

const char *LTEControlInfo::getChannelName() {
#define CASE(x) case x: s=#x; break
    const char *s = "unknown";
    switch (channel_var) {
        CASE(BCCH1);
        CASE(BCCH0);
        CASE(BCH);
        CASE(DLSCH0);
        CASE(DLSCH1);
        CASE(PDCCH);
    }
    return s;
#undef CASE
}

