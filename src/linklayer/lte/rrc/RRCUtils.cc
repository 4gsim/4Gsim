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

#include "RRCUtils.h"

RRCUtils::RRCUtils() {
    // TODO Auto-generated constructor stub

}

RRCUtils::~RRCUtils() {
    // TODO Auto-generated destructor stub
}

InitialUEIdentity RRCUtils::createInitialUEIdentity(char mmeCode, char tmsi[4]) {
    MMEC mmec = MMEC(&mmeCode);
    STMSIMTMSI mtmsi = STMSIMTMSI(tmsi);
    STMSI *stmsi = new STMSI(mmec, mtmsi);
    InitialUEIdentity initUeId = InitialUEIdentity();
    initUeId.setValue(stmsi, InitialUEIdentity::sTMSI);
    return initUeId;
}

