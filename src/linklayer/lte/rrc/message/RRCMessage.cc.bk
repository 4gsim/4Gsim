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

#include "RRCMessage.h"

const void *UlCcchMessageType::choicesInfo[4] = {
    &CellUpdate::theInfo,
    &RRCConnectionRequest::theInfo,
    &URAUpdate::theInfo,
    &Spare::theInfo,
};

const UlCcchMessageType::Info UlCcchMessageType::theInfo = {
    UlCcchMessageType::create,
    CHOICE,
    0,
    false,
    choicesInfo,
    3
};

const void *UlCcchMessage::itemsInfo[2] = {
    &IntegrityCheckInfo::theInfo,
    &UlCcchMessageType::theInfo,
};

bool UlCcchMessage::itemsPres[2] = {
    0,
    1
};

const UlCcchMessage::Info UlCcchMessage::theInfo = {
    UlCcchMessage::create,
    SEQUENCE,
    0,
    false,
    itemsInfo,
    itemsPres,
    2, 1, 0
};

UlCcchMessage::UlCcchMessage(UlCcchMessageType& message, IntegrityCheckInfo *integrityCheckInfo) : Sequence(&theInfo) {
    setUlCchMessageType(message);
}

