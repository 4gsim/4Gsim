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

#include "RRCClassDefinitions.h"

namespace rrc {

const void *DLDCCHMessageType::choicesInfo[1] = {
	&ActiveSetUpdate::theInfo,
};
const DLDCCHMessageType::Info DLDCCHMessageType::theInfo = {
	DLDCCHMessageType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *ULDCCHMessageType::choicesInfo[1] = {
	&ActiveSetUpdateComplete::theInfo,
};
const ULDCCHMessageType::Info ULDCCHMessageType::theInfo = {
	ULDCCHMessageType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *DLCCCHMessageType::choicesInfo[1] = {
	&CellUpdateConfirmCCCH::theInfo,
};
const DLCCCHMessageType::Info DLCCCHMessageType::theInfo = {
	DLCCCHMessageType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *ULCCCHMessageType::choicesInfo[1] = {
	&CellUpdate::theInfo,
};
const ULCCCHMessageType::Info ULCCCHMessageType::theInfo = {
	ULCCCHMessageType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *PCCHMessageType::choicesInfo[1] = {
	&PagingType1::theInfo,
};
const PCCHMessageType::Info PCCHMessageType::theInfo = {
	PCCHMessageType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *PCCHMessage::itemsInfo[1] = {
	&PCCHMessageType::theInfo,
};
bool PCCHMessage::itemsPres[1] = {
	1,
};
const PCCHMessage::Info PCCHMessage::theInfo = {
	PCCHMessage::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *DLSHCCHMessageType::choicesInfo[1] = {
	&PhysicalSharedChannelAllocation::theInfo,
};
const DLSHCCHMessageType::Info DLSHCCHMessageType::theInfo = {
	DLSHCCHMessageType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *DLSHCCHMessage::itemsInfo[1] = {
	&DLSHCCHMessageType::theInfo,
};
bool DLSHCCHMessage::itemsPres[1] = {
	1,
};
const DLSHCCHMessage::Info DLSHCCHMessage::theInfo = {
	DLSHCCHMessage::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *ULSHCCHMessageType::choicesInfo[1] = {
	&PUSCHCapacityRequest::theInfo,
};
const ULSHCCHMessageType::Info ULSHCCHMessageType::theInfo = {
	ULSHCCHMessageType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *ULSHCCHMessage::itemsInfo[1] = {
	&ULSHCCHMessageType::theInfo,
};
bool ULSHCCHMessage::itemsPres[1] = {
	1,
};
const ULSHCCHMessage::Info ULSHCCHMessage::theInfo = {
	ULSHCCHMessage::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *BCCHFACHMessageType::choicesInfo[1] = {
	&SystemInformationFACH::theInfo,
};
const BCCHFACHMessageType::Info BCCHFACHMessageType::theInfo = {
	BCCHFACHMessageType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *BCCHFACHMessage::itemsInfo[1] = {
	&BCCHFACHMessageType::theInfo,
};
bool BCCHFACHMessage::itemsPres[1] = {
	1,
};
const BCCHFACHMessage::Info BCCHFACHMessage::theInfo = {
	BCCHFACHMessage::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *BCCHBCHMessage::itemsInfo[1] = {
	&SystemInformationBCH::theInfo,
};
bool BCCHBCHMessage::itemsPres[1] = {
	1,
};
const BCCHBCHMessage::Info BCCHBCHMessage::theInfo = {
	BCCHBCHMessage::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MCCHMessageType::choicesInfo[1] = {
	&MBMSAccessInformation::theInfo,
};
const MCCHMessageType::Info MCCHMessageType::theInfo = {
	MCCHMessageType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *MCCHMessage::itemsInfo[1] = {
	&MCCHMessageType::theInfo,
};
bool MCCHMessage::itemsPres[1] = {
	1,
};
const MCCHMessage::Info MCCHMessage::theInfo = {
	MCCHMessage::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

const void *MSCHMessageType::choicesInfo[1] = {
	&MBMSSchedulingInformation::theInfo,
};
const MSCHMessageType::Info MSCHMessageType::theInfo = {
	MSCHMessageType::create,
	CHOICE,
	0,
	false,
	choicesInfo,
	0
};

const void *MSCHMessage::itemsInfo[1] = {
	&MSCHMessageType::theInfo,
};
bool MSCHMessage::itemsPres[1] = {
	1,
};
const MSCHMessage::Info MSCHMessage::theInfo = {
	MSCHMessage::create,
	SEQUENCE,
	0,
	false,
	itemsInfo,
	itemsPres,
	1, 0, 0
};

}
