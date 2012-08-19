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

#ifndef RRCINTERNODEDEFINITIONS_H_
#define RRCINTERNODEDEFINITIONS_H_

#include "ASNTypes.h"
#include "RRCPDUDefinitions.h"
#include "RRCInformationElements.h"
#include "RRCConstantDefinitions.h"

typedef BitString<CONSTRAINED, 16, 16> SecurityCapabilityCipheringAlgorithmCap;
typedef BitString<CONSTRAINED, 16, 16> SecurityCapabilityIntegrityProtectionAlgorithmCap;
class SecurityCapability : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SecurityCapability(): Sequence(&theInfo) {}
};
