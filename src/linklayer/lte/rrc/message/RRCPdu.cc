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

#include "RRCPdu.h"

const void *CellUpdate::itemsInfo[9] = {
    &DummyIe::theInfo,
    &DummyIe::theInfo,
    &DummyIe::theInfo,
    &DummyIe::theInfo,
    &DummyIe::theInfo,
    &DummyIe::theInfo,
    &DummyIe::theInfo,
    &DummyIe::theInfo,
    &DummyIe::theInfo,
};

bool CellUpdate::itemsPres[9] = {
    1,
    1,
    1,
    1,
    1,
    0,
    1,
    0,
    0,
};

const CellUpdate::Info CellUpdate::theInfo = {
    CellUpdate::create,
    SEQUENCE,
    0,
    false,
    itemsInfo,
    itemsPres,
    9, 3, 0
};

const void *RRCConnectionRequest::itemsInfo[5] = {
	&InitialUeIdentity::theInfo,
	&EstablishmentCause::theInfo,
	&ProtocolErrorIndicator::theInfo,
	&MeasuredResultsOnRACH::theInfo,
	&V3d0NonCriticalExtensions::theInfo,
};

bool RRCConnectionRequest::itemsPres[5] = {
	1,
	1,
	1,
	0,
	0
};

const RRCConnectionRequest::Info RRCConnectionRequest::theInfo = {
    RRCConnectionRequest::create,
    SEQUENCE,
    0,
    false,
    itemsInfo,
    itemsPres,
    5, 2, 0
};

RRCConnectionRequest::RRCConnectionRequest(InitialUeIdentity& initUeId, unsigned char estCause, bool protErrInd, MeasuredResultsOnRACH *measResOnRach, V3d0NonCriticalExtensions *v3d0NonCritExt) : Sequence(&theInfo) {
	setInitialUeIdentity(initUeId);
	setEstablishmentCause(estCause);
	setProtocolErrorIndicator(protErrInd);
}

const void *URAUpdate::itemsInfo[4] = {
    &DummyIe::theInfo,
    &DummyIe::theInfo,
    &DummyIe::theInfo,
    &DummyIe::theInfo,
};

bool URAUpdate::itemsPres[4] = {
    1,
    1,
    1,
    0
};

const URAUpdate::Info URAUpdate::theInfo = {
    URAUpdate::create,
    SEQUENCE,
    0,
    false,
    itemsInfo,
    itemsPres,
    4, 1, 0
};
