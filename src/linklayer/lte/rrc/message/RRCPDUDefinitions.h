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

#ifndef RRCPDUDEFINITIONS_H_
#define RRCPDUDEFINITIONS_H_

#include "ASNTypes.h"
#include "RRCInformationElements.h"
#include "RRCConstantDefinitions.h"

namespace rrc {

class ActiveSetUpdater3IEs : Sequence {
private:
	static const void *itemsInfo[12];
	static bool itemsPres[12];
public:
	static const Info theInfo;
	ActiveSetUpdater3IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase ActiveSetUpdateR3LaterNonCriticalExtensionsActiveSetUpdater3addext;

class ActiveSetUpdatev4b0extIEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ActiveSetUpdatev4b0extIEs(): Sequence(&theInfo) {}
};

class ActiveSetUpdatev590extIEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ActiveSetUpdatev590extIEs(): Sequence(&theInfo) {}
};

class ActiveSetUpdatev690extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ActiveSetUpdatev690extIEs(): Sequence(&theInfo) {}
};

class ActiveSetUpdateR3LaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	ActiveSetUpdateR3LaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class ActiveSetUpdateR3LaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ActiveSetUpdateR3LaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensions(): Sequence(&theInfo) {}
};

class ActiveSetUpdateR3LaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ActiveSetUpdateR3LaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensions(): Sequence(&theInfo) {}
};

class ActiveSetUpdateR3LaterNonCriticalExtensionsV4b0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ActiveSetUpdateR3LaterNonCriticalExtensionsV4b0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class ActiveSetUpdateR3LaterNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ActiveSetUpdateR3LaterNonCriticalExtensions(): Sequence(&theInfo) {}
};

class ActiveSetUpdateR3 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ActiveSetUpdateR3(): Sequence(&theInfo) {}
};

class ActiveSetUpdater6IEs : Sequence {
private:
	static const void *itemsInfo[13];
	static bool itemsPres[13];
public:
	static const Info theInfo;
	ActiveSetUpdater6IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase ActiveSetUpdateLaterthanr3CriticalExtensionsR6ActiveSetUpdater6addext;

class ActiveSetUpdatev6b0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ActiveSetUpdatev6b0extIEs(): Sequence(&theInfo) {}
};

class ActiveSetUpdateLaterthanr3CriticalExtensionsR6V6b0NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	ActiveSetUpdateLaterthanr3CriticalExtensionsR6V6b0NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class ActiveSetUpdateLaterthanr3CriticalExtensionsR6V6b0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ActiveSetUpdateLaterthanr3CriticalExtensionsR6V6b0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class ActiveSetUpdateLaterthanr3CriticalExtensionsR6 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	ActiveSetUpdateLaterthanr3CriticalExtensionsR6(): Sequence(&theInfo) {}
};

class ActiveSetUpdater7IEs : Sequence {
private:
	static const void *itemsInfo[21];
	static bool itemsPres[21];
public:
	static const Info theInfo;
	ActiveSetUpdater7IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase ActiveSetUpdateLaterthanr3CriticalExtensionsCriticalExtensionsR7ActiveSetUpdater7addext;

class ActiveSetUpdatev780extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ActiveSetUpdatev780extIEs(): Sequence(&theInfo) {}
};

class ActiveSetUpdatev7f0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ActiveSetUpdatev7f0extIEs(): Sequence(&theInfo) {}
};

class ActiveSetUpdatev7g0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ActiveSetUpdatev7g0extIEs(): Sequence(&theInfo) {}
};

class ActiveSetUpdateLaterthanr3CriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensionsV7f0NonCriticalExtensionsV7g0NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	ActiveSetUpdateLaterthanr3CriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensionsV7f0NonCriticalExtensionsV7g0NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class ActiveSetUpdateLaterthanr3CriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensionsV7f0NonCriticalExtensionsV7g0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ActiveSetUpdateLaterthanr3CriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensionsV7f0NonCriticalExtensionsV7g0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class ActiveSetUpdateLaterthanr3CriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensionsV7f0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ActiveSetUpdateLaterthanr3CriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensionsV7f0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class ActiveSetUpdateLaterthanr3CriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ActiveSetUpdateLaterthanr3CriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensions(): Sequence(&theInfo) {}
};

class ActiveSetUpdateLaterthanr3CriticalExtensionsCriticalExtensionsR7 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	ActiveSetUpdateLaterthanr3CriticalExtensionsCriticalExtensionsR7(): Sequence(&theInfo) {}
};

class ActiveSetUpdater8IEs : Sequence {
private:
	static const void *itemsInfo[23];
	static bool itemsPres[23];
public:
	static const Info theInfo;
	ActiveSetUpdater8IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase ActiveSetUpdateLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR8ActiveSetUpdater8addext;

class ActiveSetUpdatev890extIEs : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	ActiveSetUpdatev890extIEs(): Sequence(&theInfo) {}
};

class ActiveSetUpdateLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR8V890NonCriticalExtensionsV7g0NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	ActiveSetUpdateLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR8V890NonCriticalExtensionsV7g0NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class ActiveSetUpdateLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR8V890NonCriticalExtensionsV7g0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ActiveSetUpdateLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR8V890NonCriticalExtensionsV7g0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class ActiveSetUpdateLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR8V890NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ActiveSetUpdateLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR8V890NonCriticalExtensions(): Sequence(&theInfo) {}
};

class ActiveSetUpdateLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR8 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	ActiveSetUpdateLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR8(): Sequence(&theInfo) {}
};

class ActiveSetUpdater9IEs : Sequence {
private:
	static const void *itemsInfo[27];
	static bool itemsPres[27];
public:
	static const Info theInfo;
	ActiveSetUpdater9IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase ActiveSetUpdateLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9ActiveSetUpdater9addext;

class ActiveSetUpdatev950extIEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ActiveSetUpdatev950extIEs(): Sequence(&theInfo) {}
};

class ActiveSetUpdateLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9V950NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	ActiveSetUpdateLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9V950NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class ActiveSetUpdateLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9V950NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ActiveSetUpdateLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9V950NonCriticalExtensions(): Sequence(&theInfo) {}
};

class ActiveSetUpdateLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	ActiveSetUpdateLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9(): Sequence(&theInfo) {}
};

class ActiveSetUpdateLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	ActiveSetUpdateLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions(): Sequence(&theInfo) {}
};

class ActiveSetUpdateLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ActiveSetUpdateLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions(): Choice(&theInfo) {}
};

class ActiveSetUpdateLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ActiveSetUpdateLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensions(): Choice(&theInfo) {}
};

class ActiveSetUpdateLaterthanr3CriticalExtensionsCriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ActiveSetUpdateLaterthanr3CriticalExtensionsCriticalExtensions(): Choice(&theInfo) {}
};

class ActiveSetUpdateLaterthanr3CriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ActiveSetUpdateLaterthanr3CriticalExtensions(): Choice(&theInfo) {}
};

class ActiveSetUpdateLaterthanr3 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ActiveSetUpdateLaterthanr3(): Sequence(&theInfo) {}
};

class ActiveSetUpdate : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ActiveSetUpdate(): Choice(&theInfo) {}
};

typedef BitStringBase ActiveSetUpdateCompleteLaterNonCriticalExtensionsActiveSetUpdateCompleter3addext;

class ActiveSetUpdateCompleteLaterNonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	ActiveSetUpdateCompleteLaterNonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class ActiveSetUpdateCompleteLaterNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ActiveSetUpdateCompleteLaterNonCriticalExtensions(): Sequence(&theInfo) {}
};

class ActiveSetUpdateComplete : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	ActiveSetUpdateComplete(): Sequence(&theInfo) {}
};

typedef BitStringBase ActiveSetUpdateFailureLaterNonCriticalExtensionsActiveSetUpdateFailurer3addext;

class ActiveSetUpdateFailureLaterNonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	ActiveSetUpdateFailureLaterNonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class ActiveSetUpdateFailureLaterNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ActiveSetUpdateFailureLaterNonCriticalExtensions(): Sequence(&theInfo) {}
};

class ActiveSetUpdateFailure : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	ActiveSetUpdateFailure(): Sequence(&theInfo) {}
};

class AssistanceDataDeliveryr3IEs : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	AssistanceDataDeliveryr3IEs(): Sequence(&theInfo) {}
};

class AssistanceDataDeliveryv3a0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	AssistanceDataDeliveryv3a0ext(): Sequence(&theInfo) {}
};

typedef BitStringBase AssistanceDataDeliveryR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsAssistanceDataDeliveryr3addext;

class AssistanceDataDeliveryv4b0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	AssistanceDataDeliveryv4b0extIEs(): Sequence(&theInfo) {}
};

class AssistanceDataDeliveryv770extIEs : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	AssistanceDataDeliveryv770extIEs(): Sequence(&theInfo) {}
};

class AssistanceDataDeliveryv860extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	AssistanceDataDeliveryv860extIEs(): Sequence(&theInfo) {}
};

class AssistanceDataDeliveryv920extIEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	AssistanceDataDeliveryv920extIEs(): Sequence(&theInfo) {}
};

class AssistanceDataDeliveryR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV770NonCriticalExtensionV860NonCriticalExtensionV920NonCriticalExtensionNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	AssistanceDataDeliveryR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV770NonCriticalExtensionV860NonCriticalExtensionV920NonCriticalExtensionNonCriticalExtensions(): Sequence(&theInfo) {}
};

class AssistanceDataDeliveryR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV770NonCriticalExtensionV860NonCriticalExtensionV920NonCriticalExtension : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	AssistanceDataDeliveryR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV770NonCriticalExtensionV860NonCriticalExtensionV920NonCriticalExtension(): Sequence(&theInfo) {}
};

class AssistanceDataDeliveryR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV770NonCriticalExtensionV860NonCriticalExtension : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	AssistanceDataDeliveryR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV770NonCriticalExtensionV860NonCriticalExtension(): Sequence(&theInfo) {}
};

class AssistanceDataDeliveryR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV770NonCriticalExtension : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	AssistanceDataDeliveryR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV770NonCriticalExtension(): Sequence(&theInfo) {}
};

class AssistanceDataDeliveryR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	AssistanceDataDeliveryR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class AssistanceDataDeliveryR3V3a0NonCriticalExtensionsLaterNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	AssistanceDataDeliveryR3V3a0NonCriticalExtensionsLaterNonCriticalExtensions(): Sequence(&theInfo) {}
};

class AssistanceDataDeliveryR3V3a0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	AssistanceDataDeliveryR3V3a0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class AssistanceDataDeliveryR3 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	AssistanceDataDeliveryR3(): Sequence(&theInfo) {}
};

class AssistanceDataDeliveryLaterthanr3CriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	AssistanceDataDeliveryLaterthanr3CriticalExtensions(): Sequence(&theInfo) {}
};

class AssistanceDataDeliveryLaterthanr3 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	AssistanceDataDeliveryLaterthanr3(): Sequence(&theInfo) {}
};

class AssistanceDataDelivery : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	AssistanceDataDelivery(): Choice(&theInfo) {}
};

class CellChangeOrderFromUTRANr3IEs : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	CellChangeOrderFromUTRANr3IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase CellChangeOrderFromUTRANR3LaterNonCriticalExtensionsCellChangeOrderFromUTRANr3addext;

class CellChangeOrderFromUTRANv590extIEsGeranSystemInfoType : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CellChangeOrderFromUTRANv590extIEsGeranSystemInfoType(): Choice(&theInfo) {}
};

class CellChangeOrderFromUTRANv590extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellChangeOrderFromUTRANv590extIEs(): Sequence(&theInfo) {}
};

class CellChangeOrderFromUTRANR3LaterNonCriticalExtensionsV590NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	CellChangeOrderFromUTRANR3LaterNonCriticalExtensionsV590NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class CellChangeOrderFromUTRANR3LaterNonCriticalExtensionsV590NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellChangeOrderFromUTRANR3LaterNonCriticalExtensionsV590NonCriticalExtensions(): Sequence(&theInfo) {}
};

class CellChangeOrderFromUTRANR3LaterNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellChangeOrderFromUTRANR3LaterNonCriticalExtensions(): Sequence(&theInfo) {}
};

class CellChangeOrderFromUTRANR3 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellChangeOrderFromUTRANR3(): Sequence(&theInfo) {}
};

class CellChangeOrderFromUTRANLaterthanr3CriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	CellChangeOrderFromUTRANLaterthanr3CriticalExtensions(): Sequence(&theInfo) {}
};

class CellChangeOrderFromUTRANLaterthanr3 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellChangeOrderFromUTRANLaterthanr3(): Sequence(&theInfo) {}
};

class CellChangeOrderFromUTRAN : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CellChangeOrderFromUTRAN(): Choice(&theInfo) {}
};

class CellChangeOrderFromUTRANFailurer3IEs : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	CellChangeOrderFromUTRANFailurer3IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase CellChangeOrderFromUTRANFailureR3LaterNonCriticalExtensionsCellChangeOrderFromUTRANFailurer3addext;

class CellChangeOrderFromUTRANFailureR3LaterNonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	CellChangeOrderFromUTRANFailureR3LaterNonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class CellChangeOrderFromUTRANFailureR3LaterNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellChangeOrderFromUTRANFailureR3LaterNonCriticalExtensions(): Sequence(&theInfo) {}
};

class CellChangeOrderFromUTRANFailureR3 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellChangeOrderFromUTRANFailureR3(): Sequence(&theInfo) {}
};

class CellChangeOrderFromUTRANFailureDummyCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	CellChangeOrderFromUTRANFailureDummyCriticalExtensions(): Sequence(&theInfo) {}
};

class CellChangeOrderFromUTRANFailureDummy : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellChangeOrderFromUTRANFailureDummy(): Sequence(&theInfo) {}
};

class CellChangeOrderFromUTRANFailure : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CellChangeOrderFromUTRANFailure(): Choice(&theInfo) {}
};

typedef Boolean CellUpdateAmRLCErrorIndicationRb23or4;

typedef Boolean CellUpdateAmRLCErrorIndicationRb5orAbove;

typedef BitStringBase CellUpdateLaterNonCriticalExtensionsCellUpdater3addext;

class CellUpdatev590ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellUpdatev590ext(): Sequence(&theInfo) {}
};

enum CellUpdatev690extIEstrafficVolumeIndicatorValues {
	true_CellUpdatev690extIEstrafficVolumeIndicator = 0,
};
typedef Enumerated<CONSTRAINED, 0> CellUpdatev690extIEstrafficVolumeIndicator;

enum CellUpdatev690extIEsreconfigurationStatusIndicatorValues {
	true_CellUpdatev690extIEsreconfigurationStatusIndicator = 0,
};
typedef Enumerated<CONSTRAINED, 0> CellUpdatev690extIEsreconfigurationStatusIndicator;

class CellUpdatev690extIEs : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CellUpdatev690extIEs(): Sequence(&theInfo) {}
};

class CellUpdatev6b0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellUpdatev6b0extIEs(): Sequence(&theInfo) {}
};

enum CellUpdatev770extIEscsCallTypeValues {
	speech_CellUpdatev770extIEscsCallType = 0,
	video_CellUpdatev770extIEscsCallType = 1,
	other_CellUpdatev770extIEscsCallType = 2,
	spare_CellUpdatev770extIEscsCallType = 3,
};
typedef Enumerated<CONSTRAINED, 3> CellUpdatev770extIEscsCallType;

enum CellUpdatev770extIEshspdschReception_CellFachValues {
	true_CellUpdatev770extIEshspdschReception_CellFach = 0,
};
typedef Enumerated<CONSTRAINED, 0> CellUpdatev770extIEshspdschReception_CellFach;

enum CellUpdatev770extIEscapabilityChangeIndicatorValues {
	true_CellUpdatev770extIEscapabilityChangeIndicator = 0,
};
typedef Enumerated<CONSTRAINED, 0> CellUpdatev770extIEscapabilityChangeIndicator;

class CellUpdatev770extIEs : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CellUpdatev770extIEs(): Sequence(&theInfo) {}
};

enum CellUpdatev860extIEssupportOfCommonEDCHValues {
	true_CellUpdatev860extIEssupportOfCommonEDCH = 0,
};
typedef Enumerated<CONSTRAINED, 0> CellUpdatev860extIEssupportOfCommonEDCH;

enum CellUpdatev860extIEssupportOfHS_DSCHDRXOperationValues {
	true_CellUpdatev860extIEssupportOfHS_DSCHDRXOperation = 0,
};
typedef Enumerated<CONSTRAINED, 0> CellUpdatev860extIEssupportOfHS_DSCHDRXOperation;

enum CellUpdatev860extIEssupportOfMACiisValues {
	true_CellUpdatev860extIEssupportOfMACiis = 0,
};
typedef Enumerated<CONSTRAINED, 0> CellUpdatev860extIEssupportOfMACiis;

enum CellUpdatev860extIEssupportOfSPSOperationValues {
	true_CellUpdatev860extIEssupportOfSPSOperation = 0,
};
typedef Enumerated<CONSTRAINED, 0> CellUpdatev860extIEssupportOfSPSOperation;

enum CellUpdatev860extIEssupportOfControlChannelDRXOperationValues {
	true_CellUpdatev860extIEssupportOfControlChannelDRXOperation = 0,
};
typedef Enumerated<CONSTRAINED, 0> CellUpdatev860extIEssupportOfControlChannelDRXOperation;

class CellUpdatev860extIEs : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	CellUpdatev860extIEs(): Sequence(&theInfo) {}
};

class CellUpdateLaterNonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensionsV6b0NonCriticalExtensionsV770NonCriticalExtensionsV860NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	CellUpdateLaterNonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensionsV6b0NonCriticalExtensionsV770NonCriticalExtensionsV860NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class CellUpdateLaterNonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensionsV6b0NonCriticalExtensionsV770NonCriticalExtensionsV860NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellUpdateLaterNonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensionsV6b0NonCriticalExtensionsV770NonCriticalExtensionsV860NonCriticalExtensions(): Sequence(&theInfo) {}
};

class CellUpdateLaterNonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensionsV6b0NonCriticalExtensionsV770NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellUpdateLaterNonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensionsV6b0NonCriticalExtensionsV770NonCriticalExtensions(): Sequence(&theInfo) {}
};

class CellUpdateLaterNonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensionsV6b0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellUpdateLaterNonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensionsV6b0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class CellUpdateLaterNonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellUpdateLaterNonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensions(): Sequence(&theInfo) {}
};

class CellUpdateLaterNonCriticalExtensionsV590NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellUpdateLaterNonCriticalExtensionsV590NonCriticalExtensions(): Sequence(&theInfo) {}
};

class CellUpdateLaterNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellUpdateLaterNonCriticalExtensions(): Sequence(&theInfo) {}
};

class CellUpdate : Sequence {
private:
	static const void *itemsInfo[9];
	static bool itemsPres[9];
public:
	static const Info theInfo;
	CellUpdate(): Sequence(&theInfo) {}
};

enum CellUpdatev7e0extIEssupportForTwoDRXSchemesInPCHValues {
	true_CellUpdatev7e0extIEssupportForTwoDRXSchemesInPCH = 0,
};
typedef Enumerated<CONSTRAINED, 0> CellUpdatev7e0extIEssupportForTwoDRXSchemesInPCH;

class CellUpdatev7e0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellUpdatev7e0extIEs(): Sequence(&theInfo) {}
};

class CellUpdatev7g0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellUpdatev7g0extIEs(): Sequence(&theInfo) {}
};

class CellUpdater3addextIEsV7g0NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	CellUpdater3addextIEsV7g0NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class CellUpdater3addextIEsV7g0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellUpdater3addextIEsV7g0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class CellUpdater3addextIEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellUpdater3addextIEs(): Sequence(&theInfo) {}
};

typedef Boolean CellUpdateConfirmr3IEsRlcReestablishIndicatorRb23or4;

typedef Boolean CellUpdateConfirmr3IEsRlcReestablishIndicatorRb5orAbove;

class CellUpdateConfirmr3IEsModeSpecificTransChInfoFdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellUpdateConfirmr3IEsModeSpecificTransChInfoFdd(): Sequence(&theInfo) {}
};

typedef Null CellUpdateConfirmr3IEsModeSpecificTransChInfoTdd;

class CellUpdateConfirmr3IEsModeSpecificTransChInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CellUpdateConfirmr3IEsModeSpecificTransChInfo(): Choice(&theInfo) {}
};

class CellUpdateConfirmr3IEsModeSpecificPhysChInfoFdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellUpdateConfirmr3IEsModeSpecificPhysChInfoFdd(): Sequence(&theInfo) {}
};

typedef Null CellUpdateConfirmr3IEsModeSpecificPhysChInfoTdd;

class CellUpdateConfirmr3IEsModeSpecificPhysChInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CellUpdateConfirmr3IEsModeSpecificPhysChInfo(): Choice(&theInfo) {}
};

class CellUpdateConfirmr3IEs : Sequence {
private:
	static const void *itemsInfo[29];
	static bool itemsPres[29];
public:
	static const Info theInfo;
	CellUpdateConfirmr3IEs(): Sequence(&theInfo) {}
};

class CellUpdateConfirmv3a0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellUpdateConfirmv3a0ext(): Sequence(&theInfo) {}
};

typedef BitStringBase CellUpdateConfirmR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsCellUpdateConfirmr3addext;

class CellUpdateConfirmv4b0extIEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellUpdateConfirmv4b0extIEs(): Sequence(&theInfo) {}
};

class CellUpdateConfirmv590extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellUpdateConfirmv590extIEs(): Sequence(&theInfo) {}
};

class CellUpdateConfirmv5d0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellUpdateConfirmv5d0extIEs(): Sequence(&theInfo) {}
};

enum CellUpdateConfirmv690extIEspostVerificationPeriodValues {
	true_CellUpdateConfirmv690extIEspostVerificationPeriod = 0,
};
typedef Enumerated<CONSTRAINED, 0> CellUpdateConfirmv690extIEspostVerificationPeriod;

class CellUpdateConfirmv690extIEs : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	CellUpdateConfirmv690extIEs(): Sequence(&theInfo) {}
};

class CellUpdateConfirmR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtenstionsV5d0NonCriticalExtenstionsV690NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	CellUpdateConfirmR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtenstionsV5d0NonCriticalExtenstionsV690NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class CellUpdateConfirmR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtenstionsV5d0NonCriticalExtenstionsV690NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellUpdateConfirmR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtenstionsV5d0NonCriticalExtenstionsV690NonCriticalExtensions(): Sequence(&theInfo) {}
};

class CellUpdateConfirmR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtenstionsV5d0NonCriticalExtenstions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellUpdateConfirmR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtenstionsV5d0NonCriticalExtenstions(): Sequence(&theInfo) {}
};

class CellUpdateConfirmR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtenstions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellUpdateConfirmR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtenstions(): Sequence(&theInfo) {}
};

class CellUpdateConfirmR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellUpdateConfirmR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class CellUpdateConfirmR3V3a0NonCriticalExtensionsLaterNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellUpdateConfirmR3V3a0NonCriticalExtensionsLaterNonCriticalExtensions(): Sequence(&theInfo) {}
};

class CellUpdateConfirmR3V3a0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellUpdateConfirmR3V3a0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class CellUpdateConfirmR3 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellUpdateConfirmR3(): Sequence(&theInfo) {}
};

typedef Boolean CellUpdateConfirmr4IEsRlcReestablishIndicatorRb23or4;

typedef Boolean CellUpdateConfirmr4IEsRlcReestablishIndicatorRb5orAbove;

class CellUpdateConfirmr4IEsModeSpecificTransChInfoFdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellUpdateConfirmr4IEsModeSpecificTransChInfoFdd(): Sequence(&theInfo) {}
};

typedef Null CellUpdateConfirmr4IEsModeSpecificTransChInfoTdd;

class CellUpdateConfirmr4IEsModeSpecificTransChInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CellUpdateConfirmr4IEsModeSpecificTransChInfo(): Choice(&theInfo) {}
};

class CellUpdateConfirmr4IEsModeSpecificPhysChInfoFdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellUpdateConfirmr4IEsModeSpecificPhysChInfoFdd(): Sequence(&theInfo) {}
};

typedef Null CellUpdateConfirmr4IEsModeSpecificPhysChInfoTdd;

class CellUpdateConfirmr4IEsModeSpecificPhysChInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CellUpdateConfirmr4IEsModeSpecificPhysChInfo(): Choice(&theInfo) {}
};

class CellUpdateConfirmr4IEs : Sequence {
private:
	static const void *itemsInfo[29];
	static bool itemsPres[29];
public:
	static const Info theInfo;
	CellUpdateConfirmr4IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase CellUpdateConfirmLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsCellUpdateConfirmr4addext;

class CellUpdateConfirmLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtenstionsV5d0NonCriticalExtenstionsV690NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	CellUpdateConfirmLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtenstionsV5d0NonCriticalExtenstionsV690NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class CellUpdateConfirmLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtenstionsV5d0NonCriticalExtenstionsV690NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellUpdateConfirmLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtenstionsV5d0NonCriticalExtenstionsV690NonCriticalExtensions(): Sequence(&theInfo) {}
};

class CellUpdateConfirmLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtenstionsV5d0NonCriticalExtenstions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellUpdateConfirmLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtenstionsV5d0NonCriticalExtenstions(): Sequence(&theInfo) {}
};

class CellUpdateConfirmLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtenstions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellUpdateConfirmLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtenstions(): Sequence(&theInfo) {}
};

class CellUpdateConfirmLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellUpdateConfirmLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class CellUpdateConfirmLaterthanr3CriticalExtensionsR4 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellUpdateConfirmLaterthanr3CriticalExtensionsR4(): Sequence(&theInfo) {}
};

typedef Boolean CellUpdateConfirmr5IEsRlcReestablishIndicatorRb23or4;

typedef Boolean CellUpdateConfirmr5IEsRlcReestablishIndicatorRb5orAbove;

class CellUpdateConfirmr5IEsModeSpecificTransChInfoFdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellUpdateConfirmr5IEsModeSpecificTransChInfoFdd(): Sequence(&theInfo) {}
};

typedef Null CellUpdateConfirmr5IEsModeSpecificTransChInfoTdd;

class CellUpdateConfirmr5IEsModeSpecificTransChInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CellUpdateConfirmr5IEsModeSpecificTransChInfo(): Choice(&theInfo) {}
};

class CellUpdateConfirmr5IEsModeSpecificPhysChInfoFdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellUpdateConfirmr5IEsModeSpecificPhysChInfoFdd(): Sequence(&theInfo) {}
};

typedef Null CellUpdateConfirmr5IEsModeSpecificPhysChInfoTdd;

class CellUpdateConfirmr5IEsModeSpecificPhysChInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CellUpdateConfirmr5IEsModeSpecificPhysChInfo(): Choice(&theInfo) {}
};

class CellUpdateConfirmr5IEs : Sequence {
private:
	static const void *itemsInfo[31];
	static bool itemsPres[31];
public:
	static const Info theInfo;
	CellUpdateConfirmr5IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase CellUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensionsR5CellUpdateConfirmr5addext;

class CellUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensionsR5V5d0NonCriticalExtenstionsV690NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	CellUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensionsR5V5d0NonCriticalExtenstionsV690NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class CellUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensionsR5V5d0NonCriticalExtenstionsV690NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensionsR5V5d0NonCriticalExtenstionsV690NonCriticalExtensions(): Sequence(&theInfo) {}
};

class CellUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensionsR5V5d0NonCriticalExtenstions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensionsR5V5d0NonCriticalExtenstions(): Sequence(&theInfo) {}
};

class CellUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensionsR5 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	CellUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensionsR5(): Sequence(&theInfo) {}
};

typedef Boolean CellUpdateConfirmr6IEsRlcReestablishIndicatorRb23or4;

typedef Boolean CellUpdateConfirmr6IEsRlcReestablishIndicatorRb5orAbove;

class CellUpdateConfirmr6IEs : Sequence {
private:
	static const void *itemsInfo[34];
	static bool itemsPres[34];
public:
	static const Info theInfo;
	CellUpdateConfirmr6IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase CellUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR6CellUpdateConfirmr6addext;

class CellUpdateConfirmv6b0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellUpdateConfirmv6b0extIEs(): Sequence(&theInfo) {}
};

class CellUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR6V6b0NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	CellUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR6V6b0NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class CellUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR6V6b0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR6V6b0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class CellUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR6 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	CellUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR6(): Sequence(&theInfo) {}
};

typedef Boolean CellUpdateConfirmr7IEsRlcReestablishIndicatorRb23or4;

typedef Boolean CellUpdateConfirmr7IEsRlcReestablishIndicatorRb5orAbove;

typedef Boolean CellUpdateConfirmr7IEsSupportForChangeOfUECapability;

class CellUpdateConfirmr7IEs : Sequence {
private:
	static const void *itemsInfo[41];
	static bool itemsPres[41];
public:
	static const Info theInfo;
	CellUpdateConfirmr7IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase CellUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7CellUpdateConfirmr7addext;

class CellUpdateConfirmv780extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellUpdateConfirmv780extIEs(): Sequence(&theInfo) {}
};

class CellUpdateConfirmv860extIEsRabInformationSetup : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellUpdateConfirmv860extIEsRabInformationSetup(): Sequence(&theInfo) {}
};

class CellUpdateConfirmv860extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellUpdateConfirmv860extIEs(): Sequence(&theInfo) {}
};

class CellUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensionsV860NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	CellUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensionsV860NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class CellUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensionsV860NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensionsV860NonCriticalExtensions(): Sequence(&theInfo) {}
};

class CellUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensions(): Sequence(&theInfo) {}
};

class CellUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	CellUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7(): Sequence(&theInfo) {}
};

typedef Boolean CellUpdateConfirmr8IEsRlcReestablishIndicatorRb23or4;

typedef Boolean CellUpdateConfirmr8IEsRlcReestablishIndicatorRb5orAbove;

typedef Boolean CellUpdateConfirmr8IEsSupportForChangeOfUECapability;

class CellUpdateConfirmr8IEs : Sequence {
private:
	static const void *itemsInfo[46];
	static bool itemsPres[46];
public:
	static const Info theInfo;
	CellUpdateConfirmr8IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase CellUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8CellUpdateConfirmr8addext;

class CellUpdateConfirmv7d0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellUpdateConfirmv7d0extIEs(): Sequence(&theInfo) {}
};

class CellUpdateConfirmv7f0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellUpdateConfirmv7f0extIEs(): Sequence(&theInfo) {}
};

class CellUpdateConfirmv890extIEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellUpdateConfirmv890extIEs(): Sequence(&theInfo) {}
};

class CellUpdateConfirmv7g0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellUpdateConfirmv7g0extIEs(): Sequence(&theInfo) {}
};

class CellUpdateConfirmv8a0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellUpdateConfirmv8a0extIEs(): Sequence(&theInfo) {}
};

class CellUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV7f0NonCriticalExtensionsV890NonCriticalExtensionsV7g0NonCriticalExtensionsV8a0NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	CellUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV7f0NonCriticalExtensionsV890NonCriticalExtensionsV7g0NonCriticalExtensionsV8a0NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class CellUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV7f0NonCriticalExtensionsV890NonCriticalExtensionsV7g0NonCriticalExtensionsV8a0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV7f0NonCriticalExtensionsV890NonCriticalExtensionsV7g0NonCriticalExtensionsV8a0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class CellUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV7f0NonCriticalExtensionsV890NonCriticalExtensionsV7g0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV7f0NonCriticalExtensionsV890NonCriticalExtensionsV7g0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class CellUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV7f0NonCriticalExtensionsV890NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV7f0NonCriticalExtensionsV890NonCriticalExtensions(): Sequence(&theInfo) {}
};

class CellUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV7f0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV7f0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class CellUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class CellUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	CellUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8(): Sequence(&theInfo) {}
};

typedef Boolean CellUpdateConfirmr9IEsRlcReestablishIndicatorRb23or4;

typedef Boolean CellUpdateConfirmr9IEsRlcReestablishIndicatorRb5orAbove;

typedef Boolean CellUpdateConfirmr9IEsSupportForChangeOfUECapability;

class CellUpdateConfirmr9IEs : Sequence {
private:
	static const void *itemsInfo[48];
	static bool itemsPres[48];
public:
	static const Info theInfo;
	CellUpdateConfirmr9IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase CellUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9CellUpdateConfirmr9addext;

class CellUpdateConfirmv950extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellUpdateConfirmv950extIEs(): Sequence(&theInfo) {}
};

class CellUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9V950NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	CellUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9V950NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class CellUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9V950NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9V950NonCriticalExtensions(): Sequence(&theInfo) {}
};

class CellUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	CellUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9(): Sequence(&theInfo) {}
};

class CellUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	CellUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions(): Sequence(&theInfo) {}
};

class CellUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CellUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions(): Choice(&theInfo) {}
};

class CellUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CellUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions(): Choice(&theInfo) {}
};

class CellUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CellUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions(): Choice(&theInfo) {}
};

class CellUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CellUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensions(): Choice(&theInfo) {}
};

class CellUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CellUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensions(): Choice(&theInfo) {}
};

class CellUpdateConfirmLaterthanr3CriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CellUpdateConfirmLaterthanr3CriticalExtensions(): Choice(&theInfo) {}
};

class CellUpdateConfirmLaterthanr3 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellUpdateConfirmLaterthanr3(): Sequence(&theInfo) {}
};

class CellUpdateConfirm : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CellUpdateConfirm(): Choice(&theInfo) {}
};

class CellUpdateConfirmr7addextIEsV7f0NonCriticalExtensionsV7g0NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	CellUpdateConfirmr7addextIEsV7f0NonCriticalExtensionsV7g0NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class CellUpdateConfirmr7addextIEsV7f0NonCriticalExtensionsV7g0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellUpdateConfirmr7addextIEsV7f0NonCriticalExtensionsV7g0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class CellUpdateConfirmr7addextIEsV7f0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellUpdateConfirmr7addextIEsV7f0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class CellUpdateConfirmr7addextIEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellUpdateConfirmr7addextIEs(): Sequence(&theInfo) {}
};

typedef BitStringBase CellUpdateConfirmCCCHR3LaterNonCriticalExtensionsCellUpdateConfirmCCCHr3addext;

class CellUpdateConfirmCCCHR3LaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV5d0NonCriticalExtenstionsV690NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	CellUpdateConfirmCCCHR3LaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV5d0NonCriticalExtenstionsV690NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class CellUpdateConfirmCCCHR3LaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV5d0NonCriticalExtenstionsV690NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellUpdateConfirmCCCHR3LaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV5d0NonCriticalExtenstionsV690NonCriticalExtensions(): Sequence(&theInfo) {}
};

class CellUpdateConfirmCCCHR3LaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV5d0NonCriticalExtenstions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellUpdateConfirmCCCHR3LaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV5d0NonCriticalExtenstions(): Sequence(&theInfo) {}
};

class CellUpdateConfirmCCCHR3LaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellUpdateConfirmCCCHR3LaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensions(): Sequence(&theInfo) {}
};

class CellUpdateConfirmCCCHR3LaterNonCriticalExtensionsV4b0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellUpdateConfirmCCCHR3LaterNonCriticalExtensionsV4b0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class CellUpdateConfirmCCCHR3LaterNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellUpdateConfirmCCCHR3LaterNonCriticalExtensions(): Sequence(&theInfo) {}
};

class CellUpdateConfirmCCCHR3 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	CellUpdateConfirmCCCHR3(): Sequence(&theInfo) {}
};

typedef BitStringBase CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsCellUpdateConfirmCCCHr4addext;

class CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtensionsV5d0NonCriticalExtenstionsV690NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtensionsV5d0NonCriticalExtenstionsV690NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtensionsV5d0NonCriticalExtenstionsV690NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtensionsV5d0NonCriticalExtenstionsV690NonCriticalExtensions(): Sequence(&theInfo) {}
};

class CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtensionsV5d0NonCriticalExtenstions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtensionsV5d0NonCriticalExtenstions(): Sequence(&theInfo) {}
};

class CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtensions(): Sequence(&theInfo) {}
};

class CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsR4 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsR4(): Sequence(&theInfo) {}
};

typedef BitStringBase CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsCriticalExtensionsR5CellUpdateConfirmCCCHr5addext;

class CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsCriticalExtensionsR5V5d0NonCriticalExtenstionsV690NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsCriticalExtensionsR5V5d0NonCriticalExtenstionsV690NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsCriticalExtensionsR5V5d0NonCriticalExtenstionsV690NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsCriticalExtensionsR5V5d0NonCriticalExtenstionsV690NonCriticalExtensions(): Sequence(&theInfo) {}
};

class CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsCriticalExtensionsR5V5d0NonCriticalExtenstions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsCriticalExtensionsR5V5d0NonCriticalExtenstions(): Sequence(&theInfo) {}
};

class CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsCriticalExtensionsR5 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsCriticalExtensionsR5(): Sequence(&theInfo) {}
};

typedef BitStringBase CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR6CellUpdateConfirmr6addext;

class CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR6V6b0NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR6V6b0NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR6V6b0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR6V6b0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR6 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR6(): Sequence(&theInfo) {}
};

typedef BitStringBase CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7CellUpdateConfirmr7addext;

class CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensionsV860NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensionsV860NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensionsV860NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensionsV860NonCriticalExtensions(): Sequence(&theInfo) {}
};

class CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensions(): Sequence(&theInfo) {}
};

class CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7(): Sequence(&theInfo) {}
};

typedef BitStringBase CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8CellUpdateConfirmr8addext;

class CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV890NonCriticalExtensionsV8a0NonCriticalExtensionsV7f0NonCriticalExtensionsV7g0NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV890NonCriticalExtensionsV8a0NonCriticalExtensionsV7f0NonCriticalExtensionsV7g0NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV890NonCriticalExtensionsV8a0NonCriticalExtensionsV7f0NonCriticalExtensionsV7g0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV890NonCriticalExtensionsV8a0NonCriticalExtensionsV7f0NonCriticalExtensionsV7g0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV890NonCriticalExtensionsV8a0NonCriticalExtensionsV7f0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV890NonCriticalExtensionsV8a0NonCriticalExtensionsV7f0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV890NonCriticalExtensionsV8a0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV890NonCriticalExtensionsV8a0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV890NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV890NonCriticalExtensions(): Sequence(&theInfo) {}
};

class CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8(): Sequence(&theInfo) {}
};

typedef BitStringBase CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9CellUpdateConfirmr9addext;

class CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9NonCriticalExtensions(): Sequence(&theInfo) {}
};

class CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9(): Sequence(&theInfo) {}
};

class CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions(): Sequence(&theInfo) {}
};

class CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions(): Choice(&theInfo) {}
};

class CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions(): Choice(&theInfo) {}
};

class CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions(): Choice(&theInfo) {}
};

class CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensions(): Choice(&theInfo) {}
};

class CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsCriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CellUpdateConfirmCCCHLaterthanr3CriticalExtensionsCriticalExtensions(): Choice(&theInfo) {}
};

class CellUpdateConfirmCCCHLaterthanr3CriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CellUpdateConfirmCCCHLaterthanr3CriticalExtensions(): Choice(&theInfo) {}
};

class CellUpdateConfirmCCCHLaterthanr3 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	CellUpdateConfirmCCCHLaterthanr3(): Sequence(&theInfo) {}
};

class CellUpdateConfirmCCCH : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CellUpdateConfirmCCCH(): Choice(&theInfo) {}
};

class CounterCheckr3IEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CounterCheckr3IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase CounterCheckR3LaterNonCriticalExtensionsCounterCheckr3addext;

class CounterCheckR3LaterNonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	CounterCheckR3LaterNonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class CounterCheckR3LaterNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CounterCheckR3LaterNonCriticalExtensions(): Sequence(&theInfo) {}
};

class CounterCheckR3 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CounterCheckR3(): Sequence(&theInfo) {}
};

class CounterCheckLaterthanr3CriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	CounterCheckLaterthanr3CriticalExtensions(): Sequence(&theInfo) {}
};

class CounterCheckLaterthanr3 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CounterCheckLaterthanr3(): Sequence(&theInfo) {}
};

class CounterCheck : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CounterCheck(): Choice(&theInfo) {}
};

typedef BitStringBase CounterCheckResponseLaterNonCriticalExtensionsCounterCheckResponser3addext;

class CounterCheckResponseLaterNonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	CounterCheckResponseLaterNonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class CounterCheckResponseLaterNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CounterCheckResponseLaterNonCriticalExtensions(): Sequence(&theInfo) {}
};

class CounterCheckResponse : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	CounterCheckResponse(): Sequence(&theInfo) {}
};

class DownlinkDirectTransferr3IEs : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DownlinkDirectTransferr3IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase DownlinkDirectTransferR3LaterNonCriticalExtensionsDownlinkDirectTransferr3addext;

class DownlinkDirectTransferR3LaterNonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	DownlinkDirectTransferR3LaterNonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class DownlinkDirectTransferR3LaterNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DownlinkDirectTransferR3LaterNonCriticalExtensions(): Sequence(&theInfo) {}
};

class DownlinkDirectTransferR3 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DownlinkDirectTransferR3(): Sequence(&theInfo) {}
};

class DownlinkDirectTransferLaterthanr3CriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	DownlinkDirectTransferLaterthanr3CriticalExtensions(): Sequence(&theInfo) {}
};

class DownlinkDirectTransferLaterthanr3 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DownlinkDirectTransferLaterthanr3(): Sequence(&theInfo) {}
};

class DownlinkDirectTransfer : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DownlinkDirectTransfer(): Choice(&theInfo) {}
};

class ETWSPrimaryNotificationWithSecurityNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	ETWSPrimaryNotificationWithSecurityNonCriticalExtensions(): Sequence(&theInfo) {}
};

class ETWSPrimaryNotificationWithSecurity : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	ETWSPrimaryNotificationWithSecurity(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandr3IEsSpecificationModeCompleteModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr3IEsSpecificationModeCompleteModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

typedef Null HandoverToUTRANCommandr3IEsSpecificationModeCompleteModeSpecificInfoTdd;

class HandoverToUTRANCommandr3IEsSpecificationModeCompleteModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr3IEsSpecificationModeCompleteModeSpecificInfo(): Choice(&theInfo) {}
};

class HandoverToUTRANCommandr3IEsSpecificationModeComplete : Sequence {
private:
	static const void *itemsInfo[11];
	static bool itemsPres[11];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr3IEsSpecificationModeComplete(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandr3IEsSpecificationModePreconfigurationPreConfigModeDefaultConfig : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr3IEsSpecificationModePreconfigurationPreConfigModeDefaultConfig(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandr3IEsSpecificationModePreconfigurationPreConfigMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr3IEsSpecificationModePreconfigurationPreConfigMode(): Choice(&theInfo) {}
};

class HandoverToUTRANCommandr3IEsSpecificationModePreconfigurationModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr3IEsSpecificationModePreconfigurationModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandr3IEsSpecificationModePreconfigurationModeSpecificInfoTdd : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr3IEsSpecificationModePreconfigurationModeSpecificInfoTdd(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandr3IEsSpecificationModePreconfigurationModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr3IEsSpecificationModePreconfigurationModeSpecificInfo(): Choice(&theInfo) {}
};

class HandoverToUTRANCommandr3IEsSpecificationModePreconfiguration : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr3IEsSpecificationModePreconfiguration(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandr3IEsSpecificationMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr3IEsSpecificationMode(): Choice(&theInfo) {}
};

class HandoverToUTRANCommandr3IEs : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr3IEs(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandR3NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	HandoverToUTRANCommandR3NonCriticalExtensions(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandR3 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HandoverToUTRANCommandR3(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandr4IEsSpecificationModeCompleteModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr4IEsSpecificationModeCompleteModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

typedef Null HandoverToUTRANCommandr4IEsSpecificationModeCompleteModeSpecificInfoTdd;

class HandoverToUTRANCommandr4IEsSpecificationModeCompleteModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr4IEsSpecificationModeCompleteModeSpecificInfo(): Choice(&theInfo) {}
};

class HandoverToUTRANCommandr4IEsSpecificationModeComplete : Sequence {
private:
	static const void *itemsInfo[11];
	static bool itemsPres[11];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr4IEsSpecificationModeComplete(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandr4IEsSpecificationModePreconfigurationPreConfigModeDefaultConfig : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr4IEsSpecificationModePreconfigurationPreConfigModeDefaultConfig(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandr4IEsSpecificationModePreconfigurationPreConfigMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr4IEsSpecificationModePreconfigurationPreConfigMode(): Choice(&theInfo) {}
};

class HandoverToUTRANCommandr4IEsSpecificationModePreconfigurationModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr4IEsSpecificationModePreconfigurationModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandr4IEsSpecificationModePreconfigurationModeSpecificInfoTddTdd384 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr4IEsSpecificationModePreconfigurationModeSpecificInfoTddTdd384(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandr4IEsSpecificationModePreconfigurationModeSpecificInfoTddTdd128 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr4IEsSpecificationModePreconfigurationModeSpecificInfoTddTdd128(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandr4IEsSpecificationModePreconfigurationModeSpecificInfoTdd : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr4IEsSpecificationModePreconfigurationModeSpecificInfoTdd(): Choice(&theInfo) {}
};

class HandoverToUTRANCommandr4IEsSpecificationModePreconfigurationModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr4IEsSpecificationModePreconfigurationModeSpecificInfo(): Choice(&theInfo) {}
};

class HandoverToUTRANCommandr4IEsSpecificationModePreconfiguration : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr4IEsSpecificationModePreconfiguration(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandr4IEsSpecificationMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr4IEsSpecificationMode(): Choice(&theInfo) {}
};

class HandoverToUTRANCommandr4IEs : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr4IEs(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandCriticalExtensionsR4NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	HandoverToUTRANCommandCriticalExtensionsR4NonCriticalExtensions(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandCriticalExtensionsR4 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HandoverToUTRANCommandCriticalExtensionsR4(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandr5IEsSpecificationModeCompleteModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr5IEsSpecificationModeCompleteModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

typedef Null HandoverToUTRANCommandr5IEsSpecificationModeCompleteModeSpecificInfoTdd;

class HandoverToUTRANCommandr5IEsSpecificationModeCompleteModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr5IEsSpecificationModeCompleteModeSpecificInfo(): Choice(&theInfo) {}
};

class HandoverToUTRANCommandr5IEsSpecificationModeComplete : Sequence {
private:
	static const void *itemsInfo[11];
	static bool itemsPres[11];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr5IEsSpecificationModeComplete(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandr5IEsSpecificationModePreconfigurationPreConfigModeDefaultConfig : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr5IEsSpecificationModePreconfigurationPreConfigModeDefaultConfig(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandr5IEsSpecificationModePreconfigurationPreConfigMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr5IEsSpecificationModePreconfigurationPreConfigMode(): Choice(&theInfo) {}
};

class HandoverToUTRANCommandr5IEsSpecificationModePreconfigurationModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr5IEsSpecificationModePreconfigurationModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandr5IEsSpecificationModePreconfigurationModeSpecificInfoTddTdd384 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr5IEsSpecificationModePreconfigurationModeSpecificInfoTddTdd384(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandr5IEsSpecificationModePreconfigurationModeSpecificInfoTddTdd128 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr5IEsSpecificationModePreconfigurationModeSpecificInfoTddTdd128(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandr5IEsSpecificationModePreconfigurationModeSpecificInfoTdd : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr5IEsSpecificationModePreconfigurationModeSpecificInfoTdd(): Choice(&theInfo) {}
};

class HandoverToUTRANCommandr5IEsSpecificationModePreconfigurationModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr5IEsSpecificationModePreconfigurationModeSpecificInfo(): Choice(&theInfo) {}
};

class HandoverToUTRANCommandr5IEsSpecificationModePreconfiguration : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr5IEsSpecificationModePreconfiguration(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandr5IEsSpecificationMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr5IEsSpecificationMode(): Choice(&theInfo) {}
};

class HandoverToUTRANCommandr5IEs : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr5IEs(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandCriticalExtensionsCriticalExtensionsR5NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	HandoverToUTRANCommandCriticalExtensionsCriticalExtensionsR5NonCriticalExtensions(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandCriticalExtensionsCriticalExtensionsR5 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HandoverToUTRANCommandCriticalExtensionsCriticalExtensionsR5(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandr6IEsSpecificationModeComplete : Sequence {
private:
	static const void *itemsInfo[12];
	static bool itemsPres[12];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr6IEsSpecificationModeComplete(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandr6IEsSpecificationModePreconfigurationPreConfigModeDefaultConfig : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr6IEsSpecificationModePreconfigurationPreConfigModeDefaultConfig(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandr6IEsSpecificationModePreconfigurationPreConfigMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr6IEsSpecificationModePreconfigurationPreConfigMode(): Choice(&theInfo) {}
};

class HandoverToUTRANCommandr6IEsSpecificationModePreconfigurationModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr6IEsSpecificationModePreconfigurationModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandr6IEsSpecificationModePreconfigurationModeSpecificInfoTddTdd384 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr6IEsSpecificationModePreconfigurationModeSpecificInfoTddTdd384(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandr6IEsSpecificationModePreconfigurationModeSpecificInfoTddTdd128 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr6IEsSpecificationModePreconfigurationModeSpecificInfoTddTdd128(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandr6IEsSpecificationModePreconfigurationModeSpecificInfoTdd : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr6IEsSpecificationModePreconfigurationModeSpecificInfoTdd(): Choice(&theInfo) {}
};

class HandoverToUTRANCommandr6IEsSpecificationModePreconfigurationModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr6IEsSpecificationModePreconfigurationModeSpecificInfo(): Choice(&theInfo) {}
};

class HandoverToUTRANCommandr6IEsSpecificationModePreconfiguration : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr6IEsSpecificationModePreconfiguration(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandr6IEsSpecificationMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr6IEsSpecificationMode(): Choice(&theInfo) {}
};

class HandoverToUTRANCommandr6IEs : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr6IEs(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandv6b0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HandoverToUTRANCommandv6b0extIEs(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandCriticalExtensionsCriticalExtensionsCriticalExtensionsR6V6b0NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	HandoverToUTRANCommandCriticalExtensionsCriticalExtensionsCriticalExtensionsR6V6b0NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandCriticalExtensionsCriticalExtensionsCriticalExtensionsR6V6b0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HandoverToUTRANCommandCriticalExtensionsCriticalExtensionsCriticalExtensionsR6V6b0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandCriticalExtensionsCriticalExtensionsCriticalExtensionsR6 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HandoverToUTRANCommandCriticalExtensionsCriticalExtensionsCriticalExtensionsR6(): Sequence(&theInfo) {}
};

typedef Boolean HandoverToUTRANCommandr7IEsSupportForChangeOfUECapability;

class HandoverToUTRANCommandr7IEsSpecificationModeComplete : Sequence {
private:
	static const void *itemsInfo[13];
	static bool itemsPres[13];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr7IEsSpecificationModeComplete(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandr7IEsSpecificationModePreconfigurationPreConfigModeDefaultConfig : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr7IEsSpecificationModePreconfigurationPreConfigModeDefaultConfig(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandr7IEsSpecificationModePreconfigurationPreConfigMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr7IEsSpecificationModePreconfigurationPreConfigMode(): Choice(&theInfo) {}
};

class HandoverToUTRANCommandr7IEsSpecificationModePreconfigurationModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr7IEsSpecificationModePreconfigurationModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandr7IEsSpecificationModePreconfigurationModeSpecificInfoTddTdd384 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr7IEsSpecificationModePreconfigurationModeSpecificInfoTddTdd384(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandr7IEsSpecificationModePreconfigurationModeSpecificInfoTddTdd128 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr7IEsSpecificationModePreconfigurationModeSpecificInfoTddTdd128(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandr7IEsSpecificationModePreconfigurationModeSpecificInfoTddTdd768 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr7IEsSpecificationModePreconfigurationModeSpecificInfoTddTdd768(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandr7IEsSpecificationModePreconfigurationModeSpecificInfoTdd : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr7IEsSpecificationModePreconfigurationModeSpecificInfoTdd(): Choice(&theInfo) {}
};

class HandoverToUTRANCommandr7IEsSpecificationModePreconfigurationModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr7IEsSpecificationModePreconfigurationModeSpecificInfo(): Choice(&theInfo) {}
};

class HandoverToUTRANCommandr7IEsSpecificationModePreconfiguration : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr7IEsSpecificationModePreconfiguration(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandr7IEsSpecificationMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr7IEsSpecificationMode(): Choice(&theInfo) {}
};

class HandoverToUTRANCommandr7IEs : Sequence {
private:
	static const void *itemsInfo[8];
	static bool itemsPres[8];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr7IEs(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandv780extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HandoverToUTRANCommandv780extIEs(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandv820extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HandoverToUTRANCommandv820extIEs(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandv7d0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HandoverToUTRANCommandv7d0extIEs(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensionsV820NonCriticalExtensionsV7d0NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	HandoverToUTRANCommandCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensionsV820NonCriticalExtensionsV7d0NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensionsV820NonCriticalExtensionsV7d0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HandoverToUTRANCommandCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensionsV820NonCriticalExtensionsV7d0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensionsV820NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HandoverToUTRANCommandCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensionsV820NonCriticalExtensions(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HandoverToUTRANCommandCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensions(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HandoverToUTRANCommandCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7(): Sequence(&theInfo) {}
};

typedef Boolean HandoverToUTRANCommandr8IEsSupportForChangeOfUECapability;

class HandoverToUTRANCommandr8IEsSpecificationModeComplete : Sequence {
private:
	static const void *itemsInfo[13];
	static bool itemsPres[13];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr8IEsSpecificationModeComplete(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandr8IEsSpecificationModePreconfigurationPreConfigModeDefaultConfig : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr8IEsSpecificationModePreconfigurationPreConfigModeDefaultConfig(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandr8IEsSpecificationModePreconfigurationPreConfigMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr8IEsSpecificationModePreconfigurationPreConfigMode(): Choice(&theInfo) {}
};

class HandoverToUTRANCommandr8IEsSpecificationModePreconfigurationModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr8IEsSpecificationModePreconfigurationModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandr8IEsSpecificationModePreconfigurationModeSpecificInfoTddTdd384 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr8IEsSpecificationModePreconfigurationModeSpecificInfoTddTdd384(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandr8IEsSpecificationModePreconfigurationModeSpecificInfoTddTdd128 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr8IEsSpecificationModePreconfigurationModeSpecificInfoTddTdd128(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandr8IEsSpecificationModePreconfigurationModeSpecificInfoTddTdd768 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr8IEsSpecificationModePreconfigurationModeSpecificInfoTddTdd768(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandr8IEsSpecificationModePreconfigurationModeSpecificInfoTdd : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr8IEsSpecificationModePreconfigurationModeSpecificInfoTdd(): Choice(&theInfo) {}
};

class HandoverToUTRANCommandr8IEsSpecificationModePreconfigurationModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr8IEsSpecificationModePreconfigurationModeSpecificInfo(): Choice(&theInfo) {}
};

class HandoverToUTRANCommandr8IEsSpecificationModePreconfiguration : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr8IEsSpecificationModePreconfiguration(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandr8IEsSpecificationMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr8IEsSpecificationMode(): Choice(&theInfo) {}
};

class HandoverToUTRANCommandr8IEs : Sequence {
private:
	static const void *itemsInfo[9];
	static bool itemsPres[9];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr8IEs(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandv890extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HandoverToUTRANCommandv890extIEs(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandv8a0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HandoverToUTRANCommandv8a0extIEs(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV890NonCriticalExtensionsV8a0NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	HandoverToUTRANCommandCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV890NonCriticalExtensionsV8a0NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV890NonCriticalExtensionsV8a0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HandoverToUTRANCommandCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV890NonCriticalExtensionsV8a0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV890NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HandoverToUTRANCommandCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV890NonCriticalExtensions(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HandoverToUTRANCommandCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HandoverToUTRANCommandCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8(): Sequence(&theInfo) {}
};

typedef Boolean HandoverToUTRANCommandr9IEsSupportForChangeOfUECapability;

class HandoverToUTRANCommandr9IEsSpecificationModeComplete : Sequence {
private:
	static const void *itemsInfo[13];
	static bool itemsPres[13];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr9IEsSpecificationModeComplete(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandr9IEsSpecificationModePreconfigurationPreConfigModeDefaultConfig : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr9IEsSpecificationModePreconfigurationPreConfigModeDefaultConfig(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandr9IEsSpecificationModePreconfigurationPreConfigMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr9IEsSpecificationModePreconfigurationPreConfigMode(): Choice(&theInfo) {}
};

class HandoverToUTRANCommandr9IEsSpecificationModePreconfigurationModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr9IEsSpecificationModePreconfigurationModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandr9IEsSpecificationModePreconfigurationModeSpecificInfoTddTdd384 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr9IEsSpecificationModePreconfigurationModeSpecificInfoTddTdd384(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandr9IEsSpecificationModePreconfigurationModeSpecificInfoTddTdd128 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr9IEsSpecificationModePreconfigurationModeSpecificInfoTddTdd128(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandr9IEsSpecificationModePreconfigurationModeSpecificInfoTddTdd768 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr9IEsSpecificationModePreconfigurationModeSpecificInfoTddTdd768(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandr9IEsSpecificationModePreconfigurationModeSpecificInfoTdd : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr9IEsSpecificationModePreconfigurationModeSpecificInfoTdd(): Choice(&theInfo) {}
};

class HandoverToUTRANCommandr9IEsSpecificationModePreconfigurationModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr9IEsSpecificationModePreconfigurationModeSpecificInfo(): Choice(&theInfo) {}
};

class HandoverToUTRANCommandr9IEsSpecificationModePreconfiguration : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr9IEsSpecificationModePreconfiguration(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandr9IEsSpecificationMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr9IEsSpecificationMode(): Choice(&theInfo) {}
};

class HandoverToUTRANCommandr9IEs : Sequence {
private:
	static const void *itemsInfo[9];
	static bool itemsPres[9];
public:
	static const Info theInfo;
	HandoverToUTRANCommandr9IEs(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	HandoverToUTRANCommandCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9NonCriticalExtensions(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HandoverToUTRANCommandCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	HandoverToUTRANCommandCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions(): Sequence(&theInfo) {}
};

class HandoverToUTRANCommandCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	HandoverToUTRANCommandCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions(): Choice(&theInfo) {}
};

class HandoverToUTRANCommandCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	HandoverToUTRANCommandCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions(): Choice(&theInfo) {}
};

class HandoverToUTRANCommandCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	HandoverToUTRANCommandCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions(): Choice(&theInfo) {}
};

class HandoverToUTRANCommandCriticalExtensionsCriticalExtensionsCriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	HandoverToUTRANCommandCriticalExtensionsCriticalExtensionsCriticalExtensions(): Choice(&theInfo) {}
};

class HandoverToUTRANCommandCriticalExtensionsCriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	HandoverToUTRANCommandCriticalExtensionsCriticalExtensions(): Choice(&theInfo) {}
};

class HandoverToUTRANCommandCriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	HandoverToUTRANCommandCriticalExtensions(): Choice(&theInfo) {}
};

class HandoverToUTRANCommand : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	HandoverToUTRANCommand(): Choice(&theInfo) {}
};

typedef BitStringBase HandoverToUTRANCompleteLaterNonCriticalExtensionsHandoverToUTRANCompleter3addext;

class HandoverToUTRANCompleteLaterNonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	HandoverToUTRANCompleteLaterNonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class HandoverToUTRANCompleteLaterNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HandoverToUTRANCompleteLaterNonCriticalExtensions(): Sequence(&theInfo) {}
};

class HandoverToUTRANComplete : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	HandoverToUTRANComplete(): Sequence(&theInfo) {}
};

class InitialDirectTransferv3a0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InitialDirectTransferv3a0ext(): Sequence(&theInfo) {}
};

typedef BitStringBase InitialDirectTransferV3a0NonCriticalExtensionsLaterNonCriticalExtensionsInitialDirectTransferr3addext;

class InitialDirectTransferv590ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InitialDirectTransferv590ext(): Sequence(&theInfo) {}
};

class InitialDirectTransferv690extIEs : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	InitialDirectTransferv690extIEs(): Sequence(&theInfo) {}
};

enum InitialDirectTransferv770extIEscsCallTypeValues {
	speech_InitialDirectTransferv770extIEscsCallType = 0,
	video_InitialDirectTransferv770extIEscsCallType = 1,
	other_InitialDirectTransferv770extIEscsCallType = 2,
	spare_InitialDirectTransferv770extIEscsCallType = 3,
};
typedef Enumerated<CONSTRAINED, 3> InitialDirectTransferv770extIEscsCallType;

class InitialDirectTransferv770extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InitialDirectTransferv770extIEs(): Sequence(&theInfo) {}
};

enum InitialDirectTransferv860extIEssupportOfCSGValues {
	true_InitialDirectTransferv860extIEssupportOfCSG = 0,
};
typedef Enumerated<CONSTRAINED, 0> InitialDirectTransferv860extIEssupportOfCSG;

class InitialDirectTransferv860extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InitialDirectTransferv860extIEs(): Sequence(&theInfo) {}
};

class InitialDirectTransferV3a0NonCriticalExtensionsLaterNonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensionsV770NonCriticalExtensionsV860NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	InitialDirectTransferV3a0NonCriticalExtensionsLaterNonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensionsV770NonCriticalExtensionsV860NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class InitialDirectTransferV3a0NonCriticalExtensionsLaterNonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensionsV770NonCriticalExtensionsV860NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	InitialDirectTransferV3a0NonCriticalExtensionsLaterNonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensionsV770NonCriticalExtensionsV860NonCriticalExtensions(): Sequence(&theInfo) {}
};

class InitialDirectTransferV3a0NonCriticalExtensionsLaterNonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensionsV770NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	InitialDirectTransferV3a0NonCriticalExtensionsLaterNonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensionsV770NonCriticalExtensions(): Sequence(&theInfo) {}
};

class InitialDirectTransferV3a0NonCriticalExtensionsLaterNonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	InitialDirectTransferV3a0NonCriticalExtensionsLaterNonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensions(): Sequence(&theInfo) {}
};

class InitialDirectTransferV3a0NonCriticalExtensionsLaterNonCriticalExtensionsV590NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	InitialDirectTransferV3a0NonCriticalExtensionsLaterNonCriticalExtensionsV590NonCriticalExtensions(): Sequence(&theInfo) {}
};

class InitialDirectTransferV3a0NonCriticalExtensionsLaterNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	InitialDirectTransferV3a0NonCriticalExtensionsLaterNonCriticalExtensions(): Sequence(&theInfo) {}
};

class InitialDirectTransferV3a0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	InitialDirectTransferV3a0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class InitialDirectTransfer : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	InitialDirectTransfer(): Sequence(&theInfo) {}
};

class InitialDirectTransferv7g0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InitialDirectTransferv7g0extIEs(): Sequence(&theInfo) {}
};

class InitialDirectTransferr3addextIEsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	InitialDirectTransferr3addextIEsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class InitialDirectTransferr3addextIEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	InitialDirectTransferr3addextIEs(): Sequence(&theInfo) {}
};

class HandoverFromUTRANCommandGSMr3IEsGsmmessageSingleGSMMessage : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	HandoverFromUTRANCommandGSMr3IEsGsmmessageSingleGSMMessage(): Sequence(&theInfo) {}
};

class HandoverFromUTRANCommandGSMr3IEsGsmmessageGsmMessageList : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HandoverFromUTRANCommandGSMr3IEsGsmmessageGsmMessageList(): Sequence(&theInfo) {}
};

class HandoverFromUTRANCommandGSMr3IEsGsmmessage : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	HandoverFromUTRANCommandGSMr3IEsGsmmessage(): Choice(&theInfo) {}
};

class HandoverFromUTRANCommandGSMr3IEs : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	HandoverFromUTRANCommandGSMr3IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase HandoverFromUTRANCommandGSMR3LaterNonCriticalExtensionsHandoverFromUTRANCommandGSMr3addext;

class HandoverFromUTRANCommandGSMv690extIEsGeranSystemInfoType : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	HandoverFromUTRANCommandGSMv690extIEsGeranSystemInfoType(): Choice(&theInfo) {}
};

class HandoverFromUTRANCommandGSMv690extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HandoverFromUTRANCommandGSMv690extIEs(): Sequence(&theInfo) {}
};

class HandoverFromUTRANCommandGSMv860extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HandoverFromUTRANCommandGSMv860extIEs(): Sequence(&theInfo) {}
};

class HandoverFromUTRANCommandGSMR3LaterNonCriticalExtensionsV690NonCriticalExtensionsV860NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	HandoverFromUTRANCommandGSMR3LaterNonCriticalExtensionsV690NonCriticalExtensionsV860NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class HandoverFromUTRANCommandGSMR3LaterNonCriticalExtensionsV690NonCriticalExtensionsV860NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HandoverFromUTRANCommandGSMR3LaterNonCriticalExtensionsV690NonCriticalExtensionsV860NonCriticalExtensions(): Sequence(&theInfo) {}
};

class HandoverFromUTRANCommandGSMR3LaterNonCriticalExtensionsV690NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HandoverFromUTRANCommandGSMR3LaterNonCriticalExtensionsV690NonCriticalExtensions(): Sequence(&theInfo) {}
};

class HandoverFromUTRANCommandGSMR3LaterNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HandoverFromUTRANCommandGSMR3LaterNonCriticalExtensions(): Sequence(&theInfo) {}
};

class HandoverFromUTRANCommandGSMR3 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HandoverFromUTRANCommandGSMR3(): Sequence(&theInfo) {}
};

class HandoverFromUTRANCommandGSMr6IEsGsmmessageSingleGSMMessage : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	HandoverFromUTRANCommandGSMr6IEsGsmmessageSingleGSMMessage(): Sequence(&theInfo) {}
};

class HandoverFromUTRANCommandGSMr6IEsGsmmessageGsmMessageList : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HandoverFromUTRANCommandGSMr6IEsGsmmessageGsmMessageList(): Sequence(&theInfo) {}
};

class HandoverFromUTRANCommandGSMr6IEsGsmmessage : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	HandoverFromUTRANCommandGSMr6IEsGsmmessage(): Choice(&theInfo) {}
};

class HandoverFromUTRANCommandGSMr6IEsGeranSystemInfoType : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	HandoverFromUTRANCommandGSMr6IEsGeranSystemInfoType(): Choice(&theInfo) {}
};

class HandoverFromUTRANCommandGSMr6IEs : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	HandoverFromUTRANCommandGSMr6IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase HandoverFromUTRANCommandGSMLaterthanr3CriticalExtensionsR6HandoverFromUTRANCommandGSMr6addext;

class HandoverFromUTRANCommandGSMLaterthanr3CriticalExtensionsR6V860NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	HandoverFromUTRANCommandGSMLaterthanr3CriticalExtensionsR6V860NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class HandoverFromUTRANCommandGSMLaterthanr3CriticalExtensionsR6V860NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HandoverFromUTRANCommandGSMLaterthanr3CriticalExtensionsR6V860NonCriticalExtensions(): Sequence(&theInfo) {}
};

class HandoverFromUTRANCommandGSMLaterthanr3CriticalExtensionsR6 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	HandoverFromUTRANCommandGSMLaterthanr3CriticalExtensionsR6(): Sequence(&theInfo) {}
};

class HandoverFromUTRANCommandGSMLaterthanr3CriticalExtensionsCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	HandoverFromUTRANCommandGSMLaterthanr3CriticalExtensionsCriticalExtensions(): Sequence(&theInfo) {}
};

class HandoverFromUTRANCommandGSMLaterthanr3CriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	HandoverFromUTRANCommandGSMLaterthanr3CriticalExtensions(): Choice(&theInfo) {}
};

class HandoverFromUTRANCommandGSMLaterthanr3 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HandoverFromUTRANCommandGSMLaterthanr3(): Sequence(&theInfo) {}
};

class HandoverFromUTRANCommandGSM : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	HandoverFromUTRANCommandGSM(): Choice(&theInfo) {}
};

class HandoverFromUTRANCommandGERANIur5IEsGeranIuMessageSingleGERANIuMessage : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	HandoverFromUTRANCommandGERANIur5IEsGeranIuMessageSingleGERANIuMessage(): Sequence(&theInfo) {}
};

class HandoverFromUTRANCommandGERANIur5IEsGeranIuMessageGeranIuMessageList : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HandoverFromUTRANCommandGERANIur5IEsGeranIuMessageGeranIuMessageList(): Sequence(&theInfo) {}
};

class HandoverFromUTRANCommandGERANIur5IEsGeranIuMessage : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	HandoverFromUTRANCommandGERANIur5IEsGeranIuMessage(): Choice(&theInfo) {}
};

class HandoverFromUTRANCommandGERANIur5IEs : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	HandoverFromUTRANCommandGERANIur5IEs(): Sequence(&theInfo) {}
};

class HandoverFromUTRANCommandGERANIuHandoverFromUTRANCommandGERANIuR5NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	HandoverFromUTRANCommandGERANIuHandoverFromUTRANCommandGERANIuR5NonCriticalExtensions(): Sequence(&theInfo) {}
};

class HandoverFromUTRANCommandGERANIuHandoverFromUTRANCommandGERANIuR5 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HandoverFromUTRANCommandGERANIuHandoverFromUTRANCommandGERANIuR5(): Sequence(&theInfo) {}
};

class HandoverFromUTRANCommandGERANIuHandoverFromUTRANCommandGERANIuLaterthanr5CriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	HandoverFromUTRANCommandGERANIuHandoverFromUTRANCommandGERANIuLaterthanr5CriticalExtensions(): Sequence(&theInfo) {}
};

class HandoverFromUTRANCommandGERANIuHandoverFromUTRANCommandGERANIuLaterthanr5 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HandoverFromUTRANCommandGERANIuHandoverFromUTRANCommandGERANIuLaterthanr5(): Sequence(&theInfo) {}
};

class HandoverFromUTRANCommandGERANIuHandoverFromUTRANCommandGERANIu : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	HandoverFromUTRANCommandGERANIuHandoverFromUTRANCommandGERANIu(): Choice(&theInfo) {}
};

class HandoverFromUTRANCommandGERANIu : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HandoverFromUTRANCommandGERANIu(): Sequence(&theInfo) {}
};

class HandoverFromUTRANCommandCDMA2000r3IEs : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	HandoverFromUTRANCommandCDMA2000r3IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase HandoverFromUTRANCommandCDMA2000R3LaterNonCriticalExtensionsHandoverFromUTRANCommandCDMA2000r3addext;

class HandoverFromUTRANCommandCDMA2000R3LaterNonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	HandoverFromUTRANCommandCDMA2000R3LaterNonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class HandoverFromUTRANCommandCDMA2000R3LaterNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HandoverFromUTRANCommandCDMA2000R3LaterNonCriticalExtensions(): Sequence(&theInfo) {}
};

class HandoverFromUTRANCommandCDMA2000R3 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HandoverFromUTRANCommandCDMA2000R3(): Sequence(&theInfo) {}
};

class HandoverFromUTRANCommandCDMA2000Laterthanr3CriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	HandoverFromUTRANCommandCDMA2000Laterthanr3CriticalExtensions(): Sequence(&theInfo) {}
};

class HandoverFromUTRANCommandCDMA2000Laterthanr3 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HandoverFromUTRANCommandCDMA2000Laterthanr3(): Sequence(&theInfo) {}
};

class HandoverFromUTRANCommandCDMA2000 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	HandoverFromUTRANCommandCDMA2000(): Choice(&theInfo) {}
};

typedef OctetStringBase HandoverFromUTRANCommandEUTRAr8IEsEutraMessage;

class HandoverFromUTRANCommandEUTRAr8IEs : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	HandoverFromUTRANCommandEUTRAr8IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase HandoverFromUTRANCommandEUTRACriticalExtensionsR8HandoverFromUTRANCommandEUTRAr8addext;

class HandoverFromUTRANCommandEUTRACriticalExtensionsR8NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	HandoverFromUTRANCommandEUTRACriticalExtensionsR8NonCriticalExtensions(): Sequence(&theInfo) {}
};

class HandoverFromUTRANCommandEUTRACriticalExtensionsR8 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	HandoverFromUTRANCommandEUTRACriticalExtensionsR8(): Sequence(&theInfo) {}
};

class HandoverFromUTRANCommandEUTRACriticalExtensionsCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	HandoverFromUTRANCommandEUTRACriticalExtensionsCriticalExtensions(): Sequence(&theInfo) {}
};

class HandoverFromUTRANCommandEUTRACriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	HandoverFromUTRANCommandEUTRACriticalExtensions(): Choice(&theInfo) {}
};

class HandoverFromUTRANCommandEUTRA : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HandoverFromUTRANCommandEUTRA(): Sequence(&theInfo) {}
};

class HandoverFromUTRANFailureInterRATMessageGsm : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HandoverFromUTRANFailureInterRATMessageGsm(): Sequence(&theInfo) {}
};

class HandoverFromUTRANFailureInterRATMessageCdma2000 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HandoverFromUTRANFailureInterRATMessageCdma2000(): Sequence(&theInfo) {}
};

class HandoverFromUTRANFailureInterRATMessage : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	HandoverFromUTRANFailureInterRATMessage(): Choice(&theInfo) {}
};

typedef BitStringBase HandoverFromUTRANFailureLaterNonCriticalExtensionsHandoverFromUTRANFailurer3addext;

class HandoverFromUtranFailurev590extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HandoverFromUtranFailurev590extIEs(): Sequence(&theInfo) {}
};

typedef OctetStringBase HandoverFromUtranFailurev860extIEsEutraMessage;

class HandoverFromUtranFailurev860extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HandoverFromUtranFailurev860extIEs(): Sequence(&theInfo) {}
};

class HandoverFromUTRANFailureLaterNonCriticalExtensionsV590NonCriticalExtensionsV860NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	HandoverFromUTRANFailureLaterNonCriticalExtensionsV590NonCriticalExtensionsV860NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class HandoverFromUTRANFailureLaterNonCriticalExtensionsV590NonCriticalExtensionsV860NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HandoverFromUTRANFailureLaterNonCriticalExtensionsV590NonCriticalExtensionsV860NonCriticalExtensions(): Sequence(&theInfo) {}
};

class HandoverFromUTRANFailureLaterNonCriticalExtensionsV590NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HandoverFromUTRANFailureLaterNonCriticalExtensionsV590NonCriticalExtensions(): Sequence(&theInfo) {}
};

class HandoverFromUTRANFailureLaterNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HandoverFromUTRANFailureLaterNonCriticalExtensions(): Sequence(&theInfo) {}
};

class HandoverFromUTRANFailure : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	HandoverFromUTRANFailure(): Sequence(&theInfo) {}
};

typedef Null InterRATHandoverInfoPredefinedConfigStatusListAbsent;

class InterRATHandoverInfoPredefinedConfigStatusList : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	InterRATHandoverInfoPredefinedConfigStatusList(): Choice(&theInfo) {}
};

typedef Null InterRATHandoverInfoUESecurityInformationAbsent;

class InterRATHandoverInfoUESecurityInformation : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	InterRATHandoverInfoUESecurityInformation(): Choice(&theInfo) {}
};

typedef Null InterRATHandoverInfoUeCapabilityContainerAbsent;

typedef OctetString<CONSTRAINED, 0, 63> InterRATHandoverInfoUeCapabilityContainerPresent;

class InterRATHandoverInfoUeCapabilityContainer : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	InterRATHandoverInfoUeCapabilityContainer(): Choice(&theInfo) {}
};

typedef Null InterRATHandoverInfoV390NonCriticalExtensionsAbsent;

class InterRATHandoverInfov390extIEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	InterRATHandoverInfov390extIEs(): Sequence(&theInfo) {}
};

class InterRATHandoverInfov3a0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterRATHandoverInfov3a0extIEs(): Sequence(&theInfo) {}
};

class InterRATHandoverInfov3d0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterRATHandoverInfov3d0extIEs(): Sequence(&theInfo) {}
};

typedef BitStringBase InterRATHandoverInfoV390NonCriticalExtensionsPresentV3a0NonCriticalExtensionsLaterNonCriticalExtensionsInterRATHandoverInfor3addext;

class InterRATHandoverInfov3g0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterRATHandoverInfov3g0extIEs(): Sequence(&theInfo) {}
};

class InterRATHandoverInfov4b0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterRATHandoverInfov4b0extIEs(): Sequence(&theInfo) {}
};

class InterRATHandoverInfov4d0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterRATHandoverInfov4d0extIEs(): Sequence(&theInfo) {}
};

class InterRATHandoverInfov590extIEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	InterRATHandoverInfov590extIEs(): Sequence(&theInfo) {}
};

class InterRATHandoverInfov690extIEs : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	InterRATHandoverInfov690extIEs(): Sequence(&theInfo) {}
};

enum InterRATHandoverInfov6b0extIEssupportForSIB11bisValues {
	true_InterRATHandoverInfov6b0extIEssupportForSIB11bis = 0,
};
typedef Enumerated<CONSTRAINED, 0> InterRATHandoverInfov6b0extIEssupportForSIB11bis;

class InterRATHandoverInfov6b0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterRATHandoverInfov6b0extIEs(): Sequence(&theInfo) {}
};

enum InterRATHandoverInfov6e0extIEssupportForFDPCHValues {
	true_InterRATHandoverInfov6e0extIEssupportForFDPCH = 0,
};
typedef Enumerated<CONSTRAINED, 0> InterRATHandoverInfov6e0extIEssupportForFDPCH;

class InterRATHandoverInfov6e0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterRATHandoverInfov6e0extIEs(): Sequence(&theInfo) {}
};

class InterRATHandoverInfov770extIEs : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	InterRATHandoverInfov770extIEs(): Sequence(&theInfo) {}
};

enum InterRATHandoverInfov790extIEssupportForEDPCCHPowerBoostingValues {
	true_InterRATHandoverInfov790extIEssupportForEDPCCHPowerBoosting = 0,
};
typedef Enumerated<CONSTRAINED, 0> InterRATHandoverInfov790extIEssupportForEDPCCHPowerBoosting;

class InterRATHandoverInfov790extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterRATHandoverInfov790extIEs(): Sequence(&theInfo) {}
};

class InterRATHandoverInfov860extIEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	InterRATHandoverInfov860extIEs(): Sequence(&theInfo) {}
};

class InterRATHandoverInfov880extIEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	InterRATHandoverInfov880extIEs(): Sequence(&theInfo) {}
};

class InterRATHandoverInfov920extIEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	InterRATHandoverInfov920extIEs(): Sequence(&theInfo) {}
};

class InterRATHandoverInfov8b0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterRATHandoverInfov8b0extIEs(): Sequence(&theInfo) {}
};

class InterRATHandoverInfov950extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterRATHandoverInfov950extIEs(): Sequence(&theInfo) {}
};

class InterRATHandoverInfoNonCriticalExtensionv6b0IEsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790nonCriticalExtensionsV860NonCriticalExtensionsV880NonCriticalExtensionsV920NonCriticalExtensionsV8b0NonCriticalExtensionsV950NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	InterRATHandoverInfoNonCriticalExtensionv6b0IEsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790nonCriticalExtensionsV860NonCriticalExtensionsV880NonCriticalExtensionsV920NonCriticalExtensionsV8b0NonCriticalExtensionsV950NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class InterRATHandoverInfoNonCriticalExtensionv6b0IEsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790nonCriticalExtensionsV860NonCriticalExtensionsV880NonCriticalExtensionsV920NonCriticalExtensionsV8b0NonCriticalExtensionsV950NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	InterRATHandoverInfoNonCriticalExtensionv6b0IEsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790nonCriticalExtensionsV860NonCriticalExtensionsV880NonCriticalExtensionsV920NonCriticalExtensionsV8b0NonCriticalExtensionsV950NonCriticalExtensions(): Sequence(&theInfo) {}
};

class InterRATHandoverInfoNonCriticalExtensionv6b0IEsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790nonCriticalExtensionsV860NonCriticalExtensionsV880NonCriticalExtensionsV920NonCriticalExtensionsV8b0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	InterRATHandoverInfoNonCriticalExtensionv6b0IEsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790nonCriticalExtensionsV860NonCriticalExtensionsV880NonCriticalExtensionsV920NonCriticalExtensionsV8b0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class InterRATHandoverInfoNonCriticalExtensionv6b0IEsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790nonCriticalExtensionsV860NonCriticalExtensionsV880NonCriticalExtensionsV920NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	InterRATHandoverInfoNonCriticalExtensionv6b0IEsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790nonCriticalExtensionsV860NonCriticalExtensionsV880NonCriticalExtensionsV920NonCriticalExtensions(): Sequence(&theInfo) {}
};

class InterRATHandoverInfoNonCriticalExtensionv6b0IEsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790nonCriticalExtensionsV860NonCriticalExtensionsV880NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	InterRATHandoverInfoNonCriticalExtensionv6b0IEsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790nonCriticalExtensionsV860NonCriticalExtensionsV880NonCriticalExtensions(): Sequence(&theInfo) {}
};

class InterRATHandoverInfoNonCriticalExtensionv6b0IEsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790nonCriticalExtensionsV860NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	InterRATHandoverInfoNonCriticalExtensionv6b0IEsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790nonCriticalExtensionsV860NonCriticalExtensions(): Sequence(&theInfo) {}
};

class InterRATHandoverInfoNonCriticalExtensionv6b0IEsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790nonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	InterRATHandoverInfoNonCriticalExtensionv6b0IEsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790nonCriticalExtensions(): Sequence(&theInfo) {}
};

class InterRATHandoverInfoNonCriticalExtensionv6b0IEsV6e0NonCriticalExtensionsV770NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	InterRATHandoverInfoNonCriticalExtensionv6b0IEsV6e0NonCriticalExtensionsV770NonCriticalExtensions(): Sequence(&theInfo) {}
};

class InterRATHandoverInfoNonCriticalExtensionv6b0IEsV6e0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	InterRATHandoverInfoNonCriticalExtensionv6b0IEsV6e0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class InterRATHandoverInfoNonCriticalExtensionv6b0IEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	InterRATHandoverInfoNonCriticalExtensionv6b0IEs(): Sequence(&theInfo) {}
};

class InterRATHandoverInfoV390NonCriticalExtensionsPresentV3a0NonCriticalExtensionsLaterNonCriticalExtensionsV3g0NonCriticalExtensionsV4b0NonCriticalExtensionsV4d0NonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	InterRATHandoverInfoV390NonCriticalExtensionsPresentV3a0NonCriticalExtensionsLaterNonCriticalExtensionsV3g0NonCriticalExtensionsV4b0NonCriticalExtensionsV4d0NonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensions(): Sequence(&theInfo) {}
};

class InterRATHandoverInfoV390NonCriticalExtensionsPresentV3a0NonCriticalExtensionsLaterNonCriticalExtensionsV3g0NonCriticalExtensionsV4b0NonCriticalExtensionsV4d0NonCriticalExtensionsV590NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	InterRATHandoverInfoV390NonCriticalExtensionsPresentV3a0NonCriticalExtensionsLaterNonCriticalExtensionsV3g0NonCriticalExtensionsV4b0NonCriticalExtensionsV4d0NonCriticalExtensionsV590NonCriticalExtensions(): Sequence(&theInfo) {}
};

class InterRATHandoverInfoV390NonCriticalExtensionsPresentV3a0NonCriticalExtensionsLaterNonCriticalExtensionsV3g0NonCriticalExtensionsV4b0NonCriticalExtensionsV4d0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	InterRATHandoverInfoV390NonCriticalExtensionsPresentV3a0NonCriticalExtensionsLaterNonCriticalExtensionsV3g0NonCriticalExtensionsV4b0NonCriticalExtensionsV4d0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class InterRATHandoverInfoV390NonCriticalExtensionsPresentV3a0NonCriticalExtensionsLaterNonCriticalExtensionsV3g0NonCriticalExtensionsV4b0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	InterRATHandoverInfoV390NonCriticalExtensionsPresentV3a0NonCriticalExtensionsLaterNonCriticalExtensionsV3g0NonCriticalExtensionsV4b0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class InterRATHandoverInfoV390NonCriticalExtensionsPresentV3a0NonCriticalExtensionsLaterNonCriticalExtensionsV3g0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	InterRATHandoverInfoV390NonCriticalExtensionsPresentV3a0NonCriticalExtensionsLaterNonCriticalExtensionsV3g0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class InterRATHandoverInfoV390NonCriticalExtensionsPresentV3a0NonCriticalExtensionsLaterNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	InterRATHandoverInfoV390NonCriticalExtensionsPresentV3a0NonCriticalExtensionsLaterNonCriticalExtensions(): Sequence(&theInfo) {}
};

class InterRATHandoverInfoV390NonCriticalExtensionsPresentV3a0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	InterRATHandoverInfoV390NonCriticalExtensionsPresentV3a0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class InterRATHandoverInfoV390NonCriticalExtensionsPresent : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	InterRATHandoverInfoV390NonCriticalExtensionsPresent(): Sequence(&theInfo) {}
};

class InterRATHandoverInfoV390NonCriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	InterRATHandoverInfoV390NonCriticalExtensions(): Choice(&theInfo) {}
};

class InterRATHandoverInfo : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	InterRATHandoverInfo(): Sequence(&theInfo) {}
};

class InterRATHandoverInfov690ext1IEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterRATHandoverInfov690ext1IEs(): Sequence(&theInfo) {}
};

class InterRATHandoverInfov7e0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterRATHandoverInfov7e0extIEs(): Sequence(&theInfo) {}
};

class InterRATHandoverInfov7f0extIEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	InterRATHandoverInfov7f0extIEs(): Sequence(&theInfo) {}
};

class InterRATHandoverInfor3addextIEsV7e0NonCriticalExtensionsV7f0NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	InterRATHandoverInfor3addextIEsV7e0NonCriticalExtensionsV7f0NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class InterRATHandoverInfor3addextIEsV7e0NonCriticalExtensionsV7f0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	InterRATHandoverInfor3addextIEsV7e0NonCriticalExtensionsV7f0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class InterRATHandoverInfor3addextIEsV7e0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	InterRATHandoverInfor3addextIEsV7e0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class InterRATHandoverInfor3addextIEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	InterRATHandoverInfor3addextIEs(): Sequence(&theInfo) {}
};

class MeasurementControlr3IEs : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	MeasurementControlr3IEs(): Sequence(&theInfo) {}
};

class MeasurementControlv390ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasurementControlv390ext(): Sequence(&theInfo) {}
};

class MeasurementControlv3a0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasurementControlv3a0ext(): Sequence(&theInfo) {}
};

typedef BitStringBase MeasurementControlR3V390nonCriticalExtensionsV3a0NonCriticalExtensionsLaterNonCriticalExtensionsMeasurementControlr3addext;

class MeasurementControlv590extIEsMeasurementCommandv590ext : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	MeasurementControlv590extIEsMeasurementCommandv590ext(): Choice(&theInfo) {}
};

class MeasurementControlv590extIEs : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	MeasurementControlv590extIEs(): Sequence(&theInfo) {}
};

class MeasurementControlv5b0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasurementControlv5b0extIEs(): Sequence(&theInfo) {}
};

class MeasurementControlR3V390nonCriticalExtensionsV3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV5b0NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	MeasurementControlR3V390nonCriticalExtensionsV3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV5b0NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class MeasurementControlR3V390nonCriticalExtensionsV3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV5b0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MeasurementControlR3V390nonCriticalExtensionsV3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV5b0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class MeasurementControlR3V390nonCriticalExtensionsV3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MeasurementControlR3V390nonCriticalExtensionsV3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensions(): Sequence(&theInfo) {}
};

class MeasurementControlR3V390nonCriticalExtensionsV3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasurementControlR3V390nonCriticalExtensionsV3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class MeasurementControlR3V390nonCriticalExtensionsV3a0NonCriticalExtensionsLaterNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MeasurementControlR3V390nonCriticalExtensionsV3a0NonCriticalExtensionsLaterNonCriticalExtensions(): Sequence(&theInfo) {}
};

class MeasurementControlR3V390nonCriticalExtensionsV3a0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MeasurementControlR3V390nonCriticalExtensionsV3a0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class MeasurementControlR3V390nonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MeasurementControlR3V390nonCriticalExtensions(): Sequence(&theInfo) {}
};

class MeasurementControlR3 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MeasurementControlR3(): Sequence(&theInfo) {}
};

class MeasurementControlr4IEs : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	MeasurementControlr4IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase MeasurementControlLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsMeasurementControlr4addext;

class MeasurementControlLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtensionsV5b0NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	MeasurementControlLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtensionsV5b0NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class MeasurementControlLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtensionsV5b0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MeasurementControlLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtensionsV5b0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class MeasurementControlLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MeasurementControlLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtensions(): Sequence(&theInfo) {}
};

class MeasurementControlLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MeasurementControlLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class MeasurementControlLaterthanr3CriticalExtensionsR4 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MeasurementControlLaterthanr3CriticalExtensionsR4(): Sequence(&theInfo) {}
};

class MeasurementControlr6IEs : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	MeasurementControlr6IEs(): Sequence(&theInfo) {}
};

class MeasurementControlv6a0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasurementControlv6a0extIEs(): Sequence(&theInfo) {}
};

class MeasurementControlLaterthanr3CriticalExtensionsLaterthanr4CriticalExtensionsR6V6a0NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	MeasurementControlLaterthanr3CriticalExtensionsLaterthanr4CriticalExtensionsR6V6a0NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class MeasurementControlLaterthanr3CriticalExtensionsLaterthanr4CriticalExtensionsR6V6a0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MeasurementControlLaterthanr3CriticalExtensionsLaterthanr4CriticalExtensionsR6V6a0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class MeasurementControlLaterthanr3CriticalExtensionsLaterthanr4CriticalExtensionsR6 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MeasurementControlLaterthanr3CriticalExtensionsLaterthanr4CriticalExtensionsR6(): Sequence(&theInfo) {}
};

class MeasurementControlr7IEs : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	MeasurementControlr7IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase MeasurementControlLaterthanr3CriticalExtensionsLaterthanr4CriticalExtensionsCriticalExtensionsR7MeasurementControlr7addext;

class MeasurementControlv7b0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasurementControlv7b0extIEs(): Sequence(&theInfo) {}
};

class MeasurementControlLaterthanr3CriticalExtensionsLaterthanr4CriticalExtensionsCriticalExtensionsR7V7b0NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	MeasurementControlLaterthanr3CriticalExtensionsLaterthanr4CriticalExtensionsCriticalExtensionsR7V7b0NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class MeasurementControlLaterthanr3CriticalExtensionsLaterthanr4CriticalExtensionsCriticalExtensionsR7V7b0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MeasurementControlLaterthanr3CriticalExtensionsLaterthanr4CriticalExtensionsCriticalExtensionsR7V7b0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class MeasurementControlLaterthanr3CriticalExtensionsLaterthanr4CriticalExtensionsCriticalExtensionsR7 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	MeasurementControlLaterthanr3CriticalExtensionsLaterthanr4CriticalExtensionsCriticalExtensionsR7(): Sequence(&theInfo) {}
};

class MeasurementControlr8IEs : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	MeasurementControlr8IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase MeasurementControlLaterthanr3CriticalExtensionsLaterthanr4CriticalExtensionsCriticalExtensionsCriticalExtensionsR8MeasurementControlr8addext;

class MeasurementControlv8a0extIEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MeasurementControlv8a0extIEs(): Sequence(&theInfo) {}
};

class MeasurementControlLaterthanr3CriticalExtensionsLaterthanr4CriticalExtensionsCriticalExtensionsCriticalExtensionsR8V8a0NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	MeasurementControlLaterthanr3CriticalExtensionsLaterthanr4CriticalExtensionsCriticalExtensionsCriticalExtensionsR8V8a0NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class MeasurementControlLaterthanr3CriticalExtensionsLaterthanr4CriticalExtensionsCriticalExtensionsCriticalExtensionsR8V8a0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MeasurementControlLaterthanr3CriticalExtensionsLaterthanr4CriticalExtensionsCriticalExtensionsCriticalExtensionsR8V8a0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class MeasurementControlLaterthanr3CriticalExtensionsLaterthanr4CriticalExtensionsCriticalExtensionsCriticalExtensionsR8 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	MeasurementControlLaterthanr3CriticalExtensionsLaterthanr4CriticalExtensionsCriticalExtensionsCriticalExtensionsR8(): Sequence(&theInfo) {}
};

class MeasurementControlr9IEs : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	MeasurementControlr9IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase MeasurementControlLaterthanr3CriticalExtensionsLaterthanr4CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9MeasurementControlr9addext;

class MeasurementControlLaterthanr3CriticalExtensionsLaterthanr4CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	MeasurementControlLaterthanr3CriticalExtensionsLaterthanr4CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9NonCriticalExtensions(): Sequence(&theInfo) {}
};

class MeasurementControlLaterthanr3CriticalExtensionsLaterthanr4CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	MeasurementControlLaterthanr3CriticalExtensionsLaterthanr4CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9(): Sequence(&theInfo) {}
};

class MeasurementControlLaterthanr3CriticalExtensionsLaterthanr4CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	MeasurementControlLaterthanr3CriticalExtensionsLaterthanr4CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions(): Sequence(&theInfo) {}
};

class MeasurementControlLaterthanr3CriticalExtensionsLaterthanr4CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	MeasurementControlLaterthanr3CriticalExtensionsLaterthanr4CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions(): Choice(&theInfo) {}
};

class MeasurementControlLaterthanr3CriticalExtensionsLaterthanr4CriticalExtensionsCriticalExtensionsCriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	MeasurementControlLaterthanr3CriticalExtensionsLaterthanr4CriticalExtensionsCriticalExtensionsCriticalExtensions(): Choice(&theInfo) {}
};

class MeasurementControlLaterthanr3CriticalExtensionsLaterthanr4CriticalExtensionsCriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	MeasurementControlLaterthanr3CriticalExtensionsLaterthanr4CriticalExtensionsCriticalExtensions(): Choice(&theInfo) {}
};

class MeasurementControlLaterthanr3CriticalExtensionsLaterthanr4CriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	MeasurementControlLaterthanr3CriticalExtensionsLaterthanr4CriticalExtensions(): Choice(&theInfo) {}
};

class MeasurementControlLaterthanr3CriticalExtensionsLaterthanr4 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MeasurementControlLaterthanr3CriticalExtensionsLaterthanr4(): Sequence(&theInfo) {}
};

class MeasurementControlLaterthanr3CriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	MeasurementControlLaterthanr3CriticalExtensions(): Choice(&theInfo) {}
};

class MeasurementControlLaterthanr3 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MeasurementControlLaterthanr3(): Sequence(&theInfo) {}
};

class MeasurementControl : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	MeasurementControl(): Choice(&theInfo) {}
};

typedef BitStringBase MeasurementControlFailureLaterNonCriticalExtensionsMeasurementControlFailurer3addext;

class MeasurementControlFailurev590extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasurementControlFailurev590extIEs(): Sequence(&theInfo) {}
};

class MeasurementControlFailureLaterNonCriticalExtensionsV590NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	MeasurementControlFailureLaterNonCriticalExtensionsV590NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class MeasurementControlFailureLaterNonCriticalExtensionsV590NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MeasurementControlFailureLaterNonCriticalExtensionsV590NonCriticalExtensions(): Sequence(&theInfo) {}
};

class MeasurementControlFailureLaterNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MeasurementControlFailureLaterNonCriticalExtensions(): Sequence(&theInfo) {}
};

class MeasurementControlFailure : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	MeasurementControlFailure(): Sequence(&theInfo) {}
};

class MeasurementReportv390ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasurementReportv390ext(): Sequence(&theInfo) {}
};

typedef BitStringBase MeasurementReportV390nonCriticalExtensionsLaterNonCriticalExtensionsMeasurementReportr3addext;

class MeasurementReportv4b0extIEs : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	MeasurementReportv4b0extIEs(): Sequence(&theInfo) {}
};

class MeasurementReportv590extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasurementReportv590extIEs(): Sequence(&theInfo) {}
};

class MeasurementReportv5b0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasurementReportv5b0extIEs(): Sequence(&theInfo) {}
};

class MeasurementReportv690extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasurementReportv690extIEs(): Sequence(&theInfo) {}
};

class MeasurementReportv770extIEs : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	MeasurementReportv770extIEs(): Sequence(&theInfo) {}
};

class MeasurementReportv860extIEs : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	MeasurementReportv860extIEs(): Sequence(&theInfo) {}
};

class MeasurementReportv920extIEs : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	MeasurementReportv920extIEs(): Sequence(&theInfo) {}
};

class MeasurementReportV390nonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV5b0NonCriticalExtensionsV690NonCriticalExtensionsV770NonCriticalExtensionsV860NonCriticalExtensionsV920NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	MeasurementReportV390nonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV5b0NonCriticalExtensionsV690NonCriticalExtensionsV770NonCriticalExtensionsV860NonCriticalExtensionsV920NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class MeasurementReportV390nonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV5b0NonCriticalExtensionsV690NonCriticalExtensionsV770NonCriticalExtensionsV860NonCriticalExtensionsV920NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MeasurementReportV390nonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV5b0NonCriticalExtensionsV690NonCriticalExtensionsV770NonCriticalExtensionsV860NonCriticalExtensionsV920NonCriticalExtensions(): Sequence(&theInfo) {}
};

class MeasurementReportV390nonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV5b0NonCriticalExtensionsV690NonCriticalExtensionsV770NonCriticalExtensionsV860NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MeasurementReportV390nonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV5b0NonCriticalExtensionsV690NonCriticalExtensionsV770NonCriticalExtensionsV860NonCriticalExtensions(): Sequence(&theInfo) {}
};

class MeasurementReportV390nonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV5b0NonCriticalExtensionsV690NonCriticalExtensionsV770NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MeasurementReportV390nonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV5b0NonCriticalExtensionsV690NonCriticalExtensionsV770NonCriticalExtensions(): Sequence(&theInfo) {}
};

class MeasurementReportV390nonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV5b0NonCriticalExtensionsV690NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MeasurementReportV390nonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV5b0NonCriticalExtensionsV690NonCriticalExtensions(): Sequence(&theInfo) {}
};

class MeasurementReportV390nonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV5b0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MeasurementReportV390nonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV5b0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class MeasurementReportV390nonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MeasurementReportV390nonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensions(): Sequence(&theInfo) {}
};

class MeasurementReportV390nonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MeasurementReportV390nonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class MeasurementReportV390nonCriticalExtensionsLaterNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MeasurementReportV390nonCriticalExtensionsLaterNonCriticalExtensions(): Sequence(&theInfo) {}
};

class MeasurementReportV390nonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MeasurementReportV390nonCriticalExtensions(): Sequence(&theInfo) {}
};

class MeasurementReport : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	MeasurementReport(): Sequence(&theInfo) {}
};

typedef BitStringBase PagingType1LaterNonCriticalExtensionsPagingType1r3addext;

class PagingType1v590extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PagingType1v590extIEs(): Sequence(&theInfo) {}
};

class PagingType1v860extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PagingType1v860extIEs(): Sequence(&theInfo) {}
};

class PagingType1LaterNonCriticalExtensionsV590NonCriticalExtensionsV860NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	PagingType1LaterNonCriticalExtensionsV590NonCriticalExtensionsV860NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class PagingType1LaterNonCriticalExtensionsV590NonCriticalExtensionsV860NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PagingType1LaterNonCriticalExtensionsV590NonCriticalExtensionsV860NonCriticalExtensions(): Sequence(&theInfo) {}
};

class PagingType1LaterNonCriticalExtensionsV590NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PagingType1LaterNonCriticalExtensionsV590NonCriticalExtensions(): Sequence(&theInfo) {}
};

class PagingType1LaterNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PagingType1LaterNonCriticalExtensions(): Sequence(&theInfo) {}
};

class PagingType1 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PagingType1(): Sequence(&theInfo) {}
};

typedef BitStringBase PagingType2LaterNonCriticalExtensionsPagingType2r3addext;

class PagingType2LaterNonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	PagingType2LaterNonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class PagingType2LaterNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PagingType2LaterNonCriticalExtensions(): Sequence(&theInfo) {}
};

class PagingType2 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	PagingType2(): Sequence(&theInfo) {}
};

class PhysicalChannelReconfigurationr3IEsModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationr3IEsModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

typedef Null PhysicalChannelReconfigurationr3IEsModeSpecificInfoTdd;

class PhysicalChannelReconfigurationr3IEsModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationr3IEsModeSpecificInfo(): Choice(&theInfo) {}
};

class PhysicalChannelReconfigurationr3IEs : Sequence {
private:
	static const void *itemsInfo[17];
	static bool itemsPres[17];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationr3IEs(): Sequence(&theInfo) {}
};

class PhysicalChannelReconfigurationv3a0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationv3a0ext(): Sequence(&theInfo) {}
};

typedef BitStringBase PhysicalChannelReconfigurationR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsPhysicalChannelReconfigurationr3addext;

class PhysicalChannelReconfigurationv4b0extIEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationv4b0extIEs(): Sequence(&theInfo) {}
};

class PhysicalChannelReconfigurationv590extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationv590extIEs(): Sequence(&theInfo) {}
};

enum PhysicalChannelReconfigurationv690extIEspostVerificationPeriodValues {
	true_PhysicalChannelReconfigurationv690extIEspostVerificationPeriod = 0,
};
typedef Enumerated<CONSTRAINED, 0> PhysicalChannelReconfigurationv690extIEspostVerificationPeriod;

class PhysicalChannelReconfigurationv690extIEs : Sequence {
private:
	static const void *itemsInfo[8];
	static bool itemsPres[8];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationv690extIEs(): Sequence(&theInfo) {}
};

class PhysicalChannelReconfigurationv770extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationv770extIEs(): Sequence(&theInfo) {}
};

class PhysicalChannelReconfigurationR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtenstionsV590NonCriticalExtenstionsV690NonCriticalExtensionsV770NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtenstionsV590NonCriticalExtenstionsV690NonCriticalExtensionsV770NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class PhysicalChannelReconfigurationR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtenstionsV590NonCriticalExtenstionsV690NonCriticalExtensionsV770NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtenstionsV590NonCriticalExtenstionsV690NonCriticalExtensionsV770NonCriticalExtensions(): Sequence(&theInfo) {}
};

class PhysicalChannelReconfigurationR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtenstionsV590NonCriticalExtenstionsV690NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtenstionsV590NonCriticalExtenstionsV690NonCriticalExtensions(): Sequence(&theInfo) {}
};

class PhysicalChannelReconfigurationR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtenstionsV590NonCriticalExtenstions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtenstionsV590NonCriticalExtenstions(): Sequence(&theInfo) {}
};

class PhysicalChannelReconfigurationR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtenstions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtenstions(): Sequence(&theInfo) {}
};

class PhysicalChannelReconfigurationR3V3a0NonCriticalExtensionsLaterNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationR3V3a0NonCriticalExtensionsLaterNonCriticalExtensions(): Sequence(&theInfo) {}
};

class PhysicalChannelReconfigurationR3V3a0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationR3V3a0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class PhysicalChannelReconfigurationR3 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationR3(): Sequence(&theInfo) {}
};

class PhysicalChannelReconfigurationr4IEsModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationr4IEsModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

typedef Null PhysicalChannelReconfigurationr4IEsModeSpecificInfoTdd;

class PhysicalChannelReconfigurationr4IEsModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationr4IEsModeSpecificInfo(): Choice(&theInfo) {}
};

class PhysicalChannelReconfigurationr4IEs : Sequence {
private:
	static const void *itemsInfo[17];
	static bool itemsPres[17];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationr4IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsPhysicalChannelReconfigurationr4addext;

class PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtenstionsV690NonCriticalExtensionsV770NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtenstionsV690NonCriticalExtensionsV770NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtenstionsV690NonCriticalExtensionsV770NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtenstionsV690NonCriticalExtensionsV770NonCriticalExtensions(): Sequence(&theInfo) {}
};

class PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtenstionsV690NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtenstionsV690NonCriticalExtensions(): Sequence(&theInfo) {}
};

class PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtenstions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtenstions(): Sequence(&theInfo) {}
};

class PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsR4 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsR4(): Sequence(&theInfo) {}
};

class PhysicalChannelReconfigurationr5IEsModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationr5IEsModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

typedef Null PhysicalChannelReconfigurationr5IEsModeSpecificInfoTdd;

class PhysicalChannelReconfigurationr5IEsModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationr5IEsModeSpecificInfo(): Choice(&theInfo) {}
};

class PhysicalChannelReconfigurationr5IEs : Sequence {
private:
	static const void *itemsInfo[19];
	static bool itemsPres[19];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationr5IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsR5PhysicalChannelReconfigurationr5addext;

class PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsR5V690NonCriticalExtensionsV770NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsR5V690NonCriticalExtensionsV770NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsR5V690NonCriticalExtensionsV770NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsR5V690NonCriticalExtensionsV770NonCriticalExtensions(): Sequence(&theInfo) {}
};

class PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsR5V690NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsR5V690NonCriticalExtensions(): Sequence(&theInfo) {}
};

class PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsR5 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsR5(): Sequence(&theInfo) {}
};

class PhysicalChannelReconfigurationr6IEs : Sequence {
private:
	static const void *itemsInfo[23];
	static bool itemsPres[23];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationr6IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR6PhysicalChannelReconfigurationr6addext;

class PhysicalChannelReconfigurationv6b0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationv6b0extIEs(): Sequence(&theInfo) {}
};

class PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR6V6b0NonCriticalExtensionsV770NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR6V6b0NonCriticalExtensionsV770NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR6V6b0NonCriticalExtensionsV770NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR6V6b0NonCriticalExtensionsV770NonCriticalExtensions(): Sequence(&theInfo) {}
};

class PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR6V6b0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR6V6b0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR6 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR6(): Sequence(&theInfo) {}
};

typedef Boolean PhysicalChannelReconfigurationr7IEsSupportForChangeOfUECapability;

enum PhysicalChannelReconfigurationr7IEsresponseToChangeOfUE_CapabilityValues {
	true_PhysicalChannelReconfigurationr7IEsresponseToChangeOfUE_Capability = 0,
};
typedef Enumerated<CONSTRAINED, 0> PhysicalChannelReconfigurationr7IEsresponseToChangeOfUE_Capability;

class PhysicalChannelReconfigurationr7IEs : Sequence {
private:
	static const void *itemsInfo[31];
	static bool itemsPres[31];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationr7IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7PhysicalChannelReconfigurationr7addext;

class PhysicalChannelReconfigurationv780extIEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationv780extIEs(): Sequence(&theInfo) {}
};

class PhysicalChannelReconfigurationv7d0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationv7d0extIEs(): Sequence(&theInfo) {}
};

class PhysicalChannelReconfigurationv7f0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationv7f0extIEs(): Sequence(&theInfo) {}
};

class PhysicalChannelReconfigurationv7g0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationv7g0extIEs(): Sequence(&theInfo) {}
};

class PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensionsV7d0NonCriticalExtensionsV7f0NonCriticalExtensionsV7g0NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensionsV7d0NonCriticalExtensionsV7f0NonCriticalExtensionsV7g0NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensionsV7d0NonCriticalExtensionsV7f0NonCriticalExtensionsV7g0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensionsV7d0NonCriticalExtensionsV7f0NonCriticalExtensionsV7g0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensionsV7d0NonCriticalExtensionsV7f0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensionsV7d0NonCriticalExtensionsV7f0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensionsV7d0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensionsV7d0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensions(): Sequence(&theInfo) {}
};

class PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7(): Sequence(&theInfo) {}
};

typedef Boolean PhysicalChannelReconfigurationr8IEsSupportForChangeOfUECapability;

enum PhysicalChannelReconfigurationr8IEsresponseToChangeOfUE_CapabilityValues {
	true_PhysicalChannelReconfigurationr8IEsresponseToChangeOfUE_Capability = 0,
};
typedef Enumerated<CONSTRAINED, 0> PhysicalChannelReconfigurationr8IEsresponseToChangeOfUE_Capability;

class PhysicalChannelReconfigurationr8IEs : Sequence {
private:
	static const void *itemsInfo[35];
	static bool itemsPres[35];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationr8IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8PhysicalChannelReconfigurationr8addext;

class PhysicalChannelReconfigurationv890extIEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationv890extIEs(): Sequence(&theInfo) {}
};

class PhysicalChannelReconfigurationv8a0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationv8a0extIEs(): Sequence(&theInfo) {}
};

class PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV7f0NonCriticalExtensionsV890NonCriticalExtensionsV7g0NonCriticalExtensionsV8a0NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV7f0NonCriticalExtensionsV890NonCriticalExtensionsV7g0NonCriticalExtensionsV8a0NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV7f0NonCriticalExtensionsV890NonCriticalExtensionsV7g0NonCriticalExtensionsV8a0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV7f0NonCriticalExtensionsV890NonCriticalExtensionsV7g0NonCriticalExtensionsV8a0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV7f0NonCriticalExtensionsV890NonCriticalExtensionsV7g0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV7f0NonCriticalExtensionsV890NonCriticalExtensionsV7g0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV7f0NonCriticalExtensionsV890NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV7f0NonCriticalExtensionsV890NonCriticalExtensions(): Sequence(&theInfo) {}
};

class PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV7f0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV7f0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8(): Sequence(&theInfo) {}
};

typedef Boolean PhysicalChannelReconfigurationr9IEsSupportForChangeOfUECapability;

enum PhysicalChannelReconfigurationr9IEsresponseToChangeOfUE_CapabilityValues {
	true_PhysicalChannelReconfigurationr9IEsresponseToChangeOfUE_Capability = 0,
};
typedef Enumerated<CONSTRAINED, 0> PhysicalChannelReconfigurationr9IEsresponseToChangeOfUE_Capability;

class PhysicalChannelReconfigurationr9IEs : Sequence {
private:
	static const void *itemsInfo[37];
	static bool itemsPres[37];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationr9IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9PhysicalChannelReconfigurationr9addext;

class PhysicalChannelReconfigurationv950extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationv950extIEs(): Sequence(&theInfo) {}
};

class PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9V950NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9V950NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9V950NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9V950NonCriticalExtensions(): Sequence(&theInfo) {}
};

class PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9(): Sequence(&theInfo) {}
};

class PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions(): Sequence(&theInfo) {}
};

class PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions(): Choice(&theInfo) {}
};

class PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions(): Choice(&theInfo) {}
};

class PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions(): Choice(&theInfo) {}
};

class PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensions(): Choice(&theInfo) {}
};

class PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensions(): Choice(&theInfo) {}
};

class PhysicalChannelReconfigurationLaterthanr3CriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationLaterthanr3CriticalExtensions(): Choice(&theInfo) {}
};

class PhysicalChannelReconfigurationLaterthanr3 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationLaterthanr3(): Sequence(&theInfo) {}
};

class PhysicalChannelReconfiguration : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PhysicalChannelReconfiguration(): Choice(&theInfo) {}
};

typedef BitStringBase PhysicalChannelReconfigurationCompleteLaterNonCriticalExtensionsPhysicalChannelReconfigurationCompleter3addext;

enum PhysicalChannelReconfigurationCompletev770extIEsdeferredMeasurementControlReadingValues {
	true_PhysicalChannelReconfigurationCompletev770extIEsdeferredMeasurementControlReading = 0,
};
typedef Enumerated<CONSTRAINED, 0> PhysicalChannelReconfigurationCompletev770extIEsdeferredMeasurementControlReading;

class PhysicalChannelReconfigurationCompletev770extIEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationCompletev770extIEs(): Sequence(&theInfo) {}
};

class PhysicalChannelReconfigurationCompleteLaterNonCriticalExtensionsV770NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationCompleteLaterNonCriticalExtensionsV770NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class PhysicalChannelReconfigurationCompleteLaterNonCriticalExtensionsV770NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationCompleteLaterNonCriticalExtensionsV770NonCriticalExtensions(): Sequence(&theInfo) {}
};

class PhysicalChannelReconfigurationCompleteLaterNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationCompleteLaterNonCriticalExtensions(): Sequence(&theInfo) {}
};

class PhysicalChannelReconfigurationComplete : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationComplete(): Sequence(&theInfo) {}
};

typedef BitStringBase PhysicalChannelReconfigurationFailureLaterNonCriticalExtensionsPhysicalChannelReconfigurationFailurer3addext;

class PhysicalChannelReconfigurationFailureLaterNonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationFailureLaterNonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class PhysicalChannelReconfigurationFailureLaterNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationFailureLaterNonCriticalExtensions(): Sequence(&theInfo) {}
};

class PhysicalChannelReconfigurationFailure : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PhysicalChannelReconfigurationFailure(): Sequence(&theInfo) {}
};

enum PhysicalSharedChannelAllocationr3IEsconfirmRequestValues {
	confirmPDSCH_PhysicalSharedChannelAllocationr3IEsconfirmRequest = 0,
	confirmPUSCH_PhysicalSharedChannelAllocationr3IEsconfirmRequest = 1,
};
typedef Enumerated<CONSTRAINED, 1> PhysicalSharedChannelAllocationr3IEsconfirmRequest;

typedef Integer<CONSTRAINED, 0, 255> PhysicalSharedChannelAllocationr3IEsTrafficVolumeReportRequest;

typedef Boolean PhysicalSharedChannelAllocationr3IEsRequestPCCPCHRSCP;

class PhysicalSharedChannelAllocationr3IEs : Sequence {
private:
	static const void *itemsInfo[9];
	static bool itemsPres[9];
public:
	static const Info theInfo;
	PhysicalSharedChannelAllocationr3IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase PhysicalSharedChannelAllocationR3LaterNonCriticalExtensionsPhysicalSharedChannelAllocationr3addext;

class PhysicalSharedChannelAllocationR3LaterNonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	PhysicalSharedChannelAllocationR3LaterNonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class PhysicalSharedChannelAllocationR3LaterNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PhysicalSharedChannelAllocationR3LaterNonCriticalExtensions(): Sequence(&theInfo) {}
};

class PhysicalSharedChannelAllocationR3 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PhysicalSharedChannelAllocationR3(): Sequence(&theInfo) {}
};

enum PhysicalSharedChannelAllocationr4IEsconfirmRequestValues {
	confirmPDSCH_PhysicalSharedChannelAllocationr4IEsconfirmRequest = 0,
	confirmPUSCH_PhysicalSharedChannelAllocationr4IEsconfirmRequest = 1,
};
typedef Enumerated<CONSTRAINED, 1> PhysicalSharedChannelAllocationr4IEsconfirmRequest;

typedef Integer<CONSTRAINED, 0, 255> PhysicalSharedChannelAllocationr4IEsTrafficVolumeReportRequest;

typedef Boolean PhysicalSharedChannelAllocationr4IEsRequestPCCPCHRSCP;

class PhysicalSharedChannelAllocationr4IEs : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	PhysicalSharedChannelAllocationr4IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase PhysicalSharedChannelAllocationLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsPhysicalSharedChannelAllocationr4addext;

class PhysicalSharedChannelAllocationv690extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PhysicalSharedChannelAllocationv690extIEs(): Sequence(&theInfo) {}
};

class PhysicalSharedChannelAllocationv770extIEs : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PhysicalSharedChannelAllocationv770extIEs(): Sequence(&theInfo) {}
};

class PhysicalSharedChannelAllocationLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV690NonCriticalExtensionsV770NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	PhysicalSharedChannelAllocationLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV690NonCriticalExtensionsV770NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class PhysicalSharedChannelAllocationLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV690NonCriticalExtensionsV770NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PhysicalSharedChannelAllocationLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV690NonCriticalExtensionsV770NonCriticalExtensions(): Sequence(&theInfo) {}
};

class PhysicalSharedChannelAllocationLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV690NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PhysicalSharedChannelAllocationLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV690NonCriticalExtensions(): Sequence(&theInfo) {}
};

class PhysicalSharedChannelAllocationLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PhysicalSharedChannelAllocationLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class PhysicalSharedChannelAllocationLaterthanr3CriticalExtensionsR4 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PhysicalSharedChannelAllocationLaterthanr3CriticalExtensionsR4(): Sequence(&theInfo) {}
};

class PhysicalSharedChannelAllocationLaterthanr3CriticalExtensionsCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	PhysicalSharedChannelAllocationLaterthanr3CriticalExtensionsCriticalExtensions(): Sequence(&theInfo) {}
};

class PhysicalSharedChannelAllocationLaterthanr3CriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PhysicalSharedChannelAllocationLaterthanr3CriticalExtensions(): Choice(&theInfo) {}
};

class PhysicalSharedChannelAllocationLaterthanr3 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PhysicalSharedChannelAllocationLaterthanr3(): Sequence(&theInfo) {}
};

class PhysicalSharedChannelAllocation : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PhysicalSharedChannelAllocation(): Choice(&theInfo) {}
};

class PUSCHCapacityRequestAllocationConfirmation : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PUSCHCapacityRequestAllocationConfirmation(): Choice(&theInfo) {}
};

typedef BitStringBase PUSCHCapacityRequestLaterNonCriticalExtensionsPuschCapacityRequestr3addext;

class PUSCHCapacityRequestv590ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PUSCHCapacityRequestv590ext(): Sequence(&theInfo) {}
};

class PUSCHCapacityRequestLaterNonCriticalExtensionsV590NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	PUSCHCapacityRequestLaterNonCriticalExtensionsV590NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class PUSCHCapacityRequestLaterNonCriticalExtensionsV590NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PUSCHCapacityRequestLaterNonCriticalExtensionsV590NonCriticalExtensions(): Sequence(&theInfo) {}
};

class PUSCHCapacityRequestLaterNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PUSCHCapacityRequestLaterNonCriticalExtensions(): Sequence(&theInfo) {}
};

class PUSCHCapacityRequest : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	PUSCHCapacityRequest(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationr3IEsDummyFdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationr3IEsDummyFdd(): Sequence(&theInfo) {}
};

typedef Null RadioBearerReconfigurationr3IEsDummyTdd;

class RadioBearerReconfigurationr3IEsDummy : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationr3IEsDummy(): Choice(&theInfo) {}
};

class RadioBearerReconfigurationr3IEsModeSpecificPhysChInfoFdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RadioBearerReconfigurationr3IEsModeSpecificPhysChInfoFdd(): Sequence(&theInfo) {}
};

typedef Null RadioBearerReconfigurationr3IEsModeSpecificPhysChInfoTdd;

class RadioBearerReconfigurationr3IEsModeSpecificPhysChInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationr3IEsModeSpecificPhysChInfo(): Choice(&theInfo) {}
};

class RadioBearerReconfigurationr3IEs : Sequence {
private:
	static const void *itemsInfo[26];
	static bool itemsPres[26];
public:
	static const Info theInfo;
	RadioBearerReconfigurationr3IEs(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationv3a0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RadioBearerReconfigurationv3a0ext(): Sequence(&theInfo) {}
};

typedef BitStringBase RadioBearerReconfigurationR3V3aoNonCriticalExtensionsLaterNonCriticalExtensionsRadioBearerReconfigurationr3addext;

class RadioBearerReconfigurationv4b0extIEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationv4b0extIEs(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationv590extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RadioBearerReconfigurationv590extIEs(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationv5d0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RadioBearerReconfigurationv5d0extIEs(): Sequence(&theInfo) {}
};

enum RadioBearerReconfigurationv690extIEspostVerificationPeriodValues {
	true_RadioBearerReconfigurationv690extIEspostVerificationPeriod = 0,
};
typedef Enumerated<CONSTRAINED, 0> RadioBearerReconfigurationv690extIEspostVerificationPeriod;

class RadioBearerReconfigurationv690extIEs : Sequence {
private:
	static const void *itemsInfo[8];
	static bool itemsPres[8];
public:
	static const Info theInfo;
	RadioBearerReconfigurationv690extIEs(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationv770extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RadioBearerReconfigurationv770extIEs(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationR3V3aoNonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV5d0NonCriticalExtenstionsV690NonCriticalExtensionsV770NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RadioBearerReconfigurationR3V3aoNonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV5d0NonCriticalExtenstionsV690NonCriticalExtensionsV770NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationR3V3aoNonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV5d0NonCriticalExtenstionsV690NonCriticalExtensionsV770NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationR3V3aoNonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV5d0NonCriticalExtenstionsV690NonCriticalExtensionsV770NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationR3V3aoNonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV5d0NonCriticalExtenstionsV690NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationR3V3aoNonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV5d0NonCriticalExtenstionsV690NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationR3V3aoNonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV5d0NonCriticalExtenstions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationR3V3aoNonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV5d0NonCriticalExtenstions(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationR3V3aoNonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationR3V3aoNonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationR3V3aoNonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationR3V3aoNonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationR3V3aoNonCriticalExtensionsLaterNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationR3V3aoNonCriticalExtensionsLaterNonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationR3V3aoNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationR3V3aoNonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationR3 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationR3(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationr4IEsDummyFdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationr4IEsDummyFdd(): Sequence(&theInfo) {}
};

typedef Null RadioBearerReconfigurationr4IEsDummyTdd;

class RadioBearerReconfigurationr4IEsDummy : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationr4IEsDummy(): Choice(&theInfo) {}
};

class RadioBearerReconfigurationr4IEsModeSpecificPhysChInfoFdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RadioBearerReconfigurationr4IEsModeSpecificPhysChInfoFdd(): Sequence(&theInfo) {}
};

typedef Null RadioBearerReconfigurationr4IEsModeSpecificPhysChInfoTdd;

class RadioBearerReconfigurationr4IEsModeSpecificPhysChInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationr4IEsModeSpecificPhysChInfo(): Choice(&theInfo) {}
};

class RadioBearerReconfigurationr4IEs : Sequence {
private:
	static const void *itemsInfo[26];
	static bool itemsPres[26];
public:
	static const Info theInfo;
	RadioBearerReconfigurationr4IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase RadioBearerReconfigurationLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsRadioBearerReconfigurationr4addext;

class RadioBearerReconfigurationLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtensionsV5d0NonCriticalExtenstionsV690NonCriticalExtensionsV770NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RadioBearerReconfigurationLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtensionsV5d0NonCriticalExtenstionsV690NonCriticalExtensionsV770NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtensionsV5d0NonCriticalExtenstionsV690NonCriticalExtensionsV770NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtensionsV5d0NonCriticalExtenstionsV690NonCriticalExtensionsV770NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtensionsV5d0NonCriticalExtenstionsV690NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtensionsV5d0NonCriticalExtenstionsV690NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtensionsV5d0NonCriticalExtenstions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtensionsV5d0NonCriticalExtenstions(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationLaterthanr3CriticalExtensionsR4 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationLaterthanr3CriticalExtensionsR4(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationr5IEsSpecificationModeCompleteDummyFdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationr5IEsSpecificationModeCompleteDummyFdd(): Sequence(&theInfo) {}
};

typedef Null RadioBearerReconfigurationr5IEsSpecificationModeCompleteDummyTdd;

class RadioBearerReconfigurationr5IEsSpecificationModeCompleteDummy : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationr5IEsSpecificationModeCompleteDummy(): Choice(&theInfo) {}
};

class RadioBearerReconfigurationr5IEsSpecificationModeComplete : Sequence {
private:
	static const void *itemsInfo[11];
	static bool itemsPres[11];
public:
	static const Info theInfo;
	RadioBearerReconfigurationr5IEsSpecificationModeComplete(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationr5IEsSpecificationModePreconfigurationPreConfigModeDefaultConfig : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationr5IEsSpecificationModePreconfigurationPreConfigModeDefaultConfig(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationr5IEsSpecificationModePreconfigurationPreConfigMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationr5IEsSpecificationModePreconfigurationPreConfigMode(): Choice(&theInfo) {}
};

class RadioBearerReconfigurationr5IEsSpecificationModePreconfiguration : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RadioBearerReconfigurationr5IEsSpecificationModePreconfiguration(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationr5IEsSpecificationMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationr5IEsSpecificationMode(): Choice(&theInfo) {}
};

class RadioBearerReconfigurationr5IEsModeSpecificPhysChInfoFdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RadioBearerReconfigurationr5IEsModeSpecificPhysChInfoFdd(): Sequence(&theInfo) {}
};

typedef Null RadioBearerReconfigurationr5IEsModeSpecificPhysChInfoTdd;

class RadioBearerReconfigurationr5IEsModeSpecificPhysChInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationr5IEsModeSpecificPhysChInfo(): Choice(&theInfo) {}
};

class RadioBearerReconfigurationr5IEs : Sequence {
private:
	static const void *itemsInfo[19];
	static bool itemsPres[19];
public:
	static const Info theInfo;
	RadioBearerReconfigurationr5IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsR5RadioBearerReconfigurationr5addext;

class RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsR5V5d0NonCriticalExtenstionsV690NonCriticalExtensionsV770NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsR5V5d0NonCriticalExtenstionsV690NonCriticalExtensionsV770NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsR5V5d0NonCriticalExtenstionsV690NonCriticalExtensionsV770NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsR5V5d0NonCriticalExtenstionsV690NonCriticalExtensionsV770NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsR5V5d0NonCriticalExtenstionsV690NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsR5V5d0NonCriticalExtenstionsV690NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsR5V5d0NonCriticalExtenstions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsR5V5d0NonCriticalExtenstions(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsR5 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsR5(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationr6IEsSpecificationModeComplete : Sequence {
private:
	static const void *itemsInfo[11];
	static bool itemsPres[11];
public:
	static const Info theInfo;
	RadioBearerReconfigurationr6IEsSpecificationModeComplete(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationr6IEsSpecificationModePreconfigurationPreConfigModeDefaultConfig : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationr6IEsSpecificationModePreconfigurationPreConfigModeDefaultConfig(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationr6IEsSpecificationModePreconfigurationPreConfigMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationr6IEsSpecificationModePreconfigurationPreConfigMode(): Choice(&theInfo) {}
};

class RadioBearerReconfigurationr6IEsSpecificationModePreconfiguration : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RadioBearerReconfigurationr6IEsSpecificationModePreconfiguration(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationr6IEsSpecificationMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationr6IEsSpecificationMode(): Choice(&theInfo) {}
};

class RadioBearerReconfigurationr6IEs : Sequence {
private:
	static const void *itemsInfo[23];
	static bool itemsPres[23];
public:
	static const Info theInfo;
	RadioBearerReconfigurationr6IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR6RadioBearerReconfigurationr6addext;

class RadioBearerReconfigurationv6b0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RadioBearerReconfigurationv6b0extIEs(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationv6f0extIEsSpecificationModeComplete : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RadioBearerReconfigurationv6f0extIEsSpecificationModeComplete(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationv6f0extIEsSpecificationMode : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	RadioBearerReconfigurationv6f0extIEsSpecificationMode(): Choice(&theInfo) {}
};

class RadioBearerReconfigurationv6f0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RadioBearerReconfigurationv6f0extIEs(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR6V6b0NonCriticalExtensionsV6f0NonCriticalExtensionsV770NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR6V6b0NonCriticalExtensionsV6f0NonCriticalExtensionsV770NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR6V6b0NonCriticalExtensionsV6f0NonCriticalExtensionsV770NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR6V6b0NonCriticalExtensionsV6f0NonCriticalExtensionsV770NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR6V6b0NonCriticalExtensionsV6f0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR6V6b0NonCriticalExtensionsV6f0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR6V6b0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR6V6b0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR6 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR6(): Sequence(&theInfo) {}
};

typedef Boolean RadioBearerReconfigurationr7IEsSupportForChangeOfUECapability;

enum RadioBearerReconfigurationr7IEsresponseToChangeOfUE_CapabilityValues {
	true_RadioBearerReconfigurationr7IEsresponseToChangeOfUE_Capability = 0,
};
typedef Enumerated<CONSTRAINED, 0> RadioBearerReconfigurationr7IEsresponseToChangeOfUE_Capability;

class RadioBearerReconfigurationr7IEsSpecificationModeComplete : Sequence {
private:
	static const void *itemsInfo[12];
	static bool itemsPres[12];
public:
	static const Info theInfo;
	RadioBearerReconfigurationr7IEsSpecificationModeComplete(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationr7IEsSpecificationModePreconfigurationPreConfigModeDefaultConfig : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationr7IEsSpecificationModePreconfigurationPreConfigModeDefaultConfig(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationr7IEsSpecificationModePreconfigurationPreConfigMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationr7IEsSpecificationModePreconfigurationPreConfigMode(): Choice(&theInfo) {}
};

class RadioBearerReconfigurationr7IEsSpecificationModePreconfiguration : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RadioBearerReconfigurationr7IEsSpecificationModePreconfiguration(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationr7IEsSpecificationMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationr7IEsSpecificationMode(): Choice(&theInfo) {}
};

class RadioBearerReconfigurationr7IEs : Sequence {
private:
	static const void *itemsInfo[31];
	static bool itemsPres[31];
public:
	static const Info theInfo;
	RadioBearerReconfigurationr7IEs(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationv780extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RadioBearerReconfigurationv780extIEs(): Sequence(&theInfo) {}
};

typedef BitStringBase RadioBearerReconfigurationv790extIEsRadioBearerReconfigurationr7addext;

class RadioBearerReconfigurationv790extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RadioBearerReconfigurationv790extIEs(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationv7d0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RadioBearerReconfigurationv7d0extIEs(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationv7f0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RadioBearerReconfigurationv7f0extIEs(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationv7g0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RadioBearerReconfigurationv7g0extIEs(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensionsV790NonCriticalExtensionsV7d0NonCriticalExtensionsV7f0NonCriticalExtensionsV7g0NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensionsV790NonCriticalExtensionsV7d0NonCriticalExtensionsV7f0NonCriticalExtensionsV7g0NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensionsV790NonCriticalExtensionsV7d0NonCriticalExtensionsV7f0NonCriticalExtensionsV7g0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensionsV790NonCriticalExtensionsV7d0NonCriticalExtensionsV7f0NonCriticalExtensionsV7g0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensionsV790NonCriticalExtensionsV7d0NonCriticalExtensionsV7f0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensionsV790NonCriticalExtensionsV7d0NonCriticalExtensionsV7f0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensionsV790NonCriticalExtensionsV7d0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensionsV790NonCriticalExtensionsV7d0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensionsV790NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensionsV790NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7(): Sequence(&theInfo) {}
};

typedef Boolean RadioBearerReconfigurationr8IEsSupportForChangeOfUECapability;

enum RadioBearerReconfigurationr8IEsresponseToChangeOfUE_CapabilityValues {
	true_RadioBearerReconfigurationr8IEsresponseToChangeOfUE_Capability = 0,
};
typedef Enumerated<CONSTRAINED, 0> RadioBearerReconfigurationr8IEsresponseToChangeOfUE_Capability;

class RadioBearerReconfigurationr8IEsSpecificationModeComplete : Sequence {
private:
	static const void *itemsInfo[12];
	static bool itemsPres[12];
public:
	static const Info theInfo;
	RadioBearerReconfigurationr8IEsSpecificationModeComplete(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationr8IEsSpecificationModePreconfigurationPreConfigModeDefaultConfig : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationr8IEsSpecificationModePreconfigurationPreConfigModeDefaultConfig(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationr8IEsSpecificationModePreconfigurationPreConfigMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationr8IEsSpecificationModePreconfigurationPreConfigMode(): Choice(&theInfo) {}
};

class RadioBearerReconfigurationr8IEsSpecificationModePreconfiguration : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RadioBearerReconfigurationr8IEsSpecificationModePreconfiguration(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationr8IEsSpecificationMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationr8IEsSpecificationMode(): Choice(&theInfo) {}
};

class RadioBearerReconfigurationr8IEs : Sequence {
private:
	static const void *itemsInfo[35];
	static bool itemsPres[35];
public:
	static const Info theInfo;
	RadioBearerReconfigurationr8IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8RadioBearerReconfigurationr8addext;

class RadioBearerReconfigurationv890extIEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationv890extIEs(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationv8a0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RadioBearerReconfigurationv8a0extIEs(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV7f0NonCriticalExtensionsV890NonCriticalExtensionsV7g0NonCriticalExtensionsV8a0NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV7f0NonCriticalExtensionsV890NonCriticalExtensionsV7g0NonCriticalExtensionsV8a0NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV7f0NonCriticalExtensionsV890NonCriticalExtensionsV7g0NonCriticalExtensionsV8a0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV7f0NonCriticalExtensionsV890NonCriticalExtensionsV7g0NonCriticalExtensionsV8a0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV7f0NonCriticalExtensionsV890NonCriticalExtensionsV7g0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV7f0NonCriticalExtensionsV890NonCriticalExtensionsV7g0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV7f0NonCriticalExtensionsV890NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV7f0NonCriticalExtensionsV890NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV7f0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV7f0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8(): Sequence(&theInfo) {}
};

typedef Boolean RadioBearerReconfigurationr9IEsSupportForChangeOfUECapability;

enum RadioBearerReconfigurationr9IEsresponseToChangeOfUE_CapabilityValues {
	true_RadioBearerReconfigurationr9IEsresponseToChangeOfUE_Capability = 0,
};
typedef Enumerated<CONSTRAINED, 0> RadioBearerReconfigurationr9IEsresponseToChangeOfUE_Capability;

class RadioBearerReconfigurationr9IEsSpecificationModeComplete : Sequence {
private:
	static const void *itemsInfo[12];
	static bool itemsPres[12];
public:
	static const Info theInfo;
	RadioBearerReconfigurationr9IEsSpecificationModeComplete(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationr9IEsSpecificationModePreconfigurationPreConfigModeDefaultConfig : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationr9IEsSpecificationModePreconfigurationPreConfigModeDefaultConfig(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationr9IEsSpecificationModePreconfigurationPreConfigMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationr9IEsSpecificationModePreconfigurationPreConfigMode(): Choice(&theInfo) {}
};

class RadioBearerReconfigurationr9IEsSpecificationModePreconfiguration : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RadioBearerReconfigurationr9IEsSpecificationModePreconfiguration(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationr9IEsSpecificationMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationr9IEsSpecificationMode(): Choice(&theInfo) {}
};

class RadioBearerReconfigurationr9IEs : Sequence {
private:
	static const void *itemsInfo[37];
	static bool itemsPres[37];
public:
	static const Info theInfo;
	RadioBearerReconfigurationr9IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9RadioBearerReconfigurationr9addext;

class RadioBearerReconfigurationv950extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RadioBearerReconfigurationv950extIEs(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9V950NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9V950NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9V950NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9V950NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions(): Choice(&theInfo) {}
};

class RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions(): Choice(&theInfo) {}
};

class RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions(): Choice(&theInfo) {}
};

class RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensions(): Choice(&theInfo) {}
};

class RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationLaterthanr3CriticalExtensionsCriticalExtensions(): Choice(&theInfo) {}
};

class RadioBearerReconfigurationLaterthanr3CriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationLaterthanr3CriticalExtensions(): Choice(&theInfo) {}
};

class RadioBearerReconfigurationLaterthanr3 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationLaterthanr3(): Sequence(&theInfo) {}
};

class RadioBearerReconfiguration : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RadioBearerReconfiguration(): Choice(&theInfo) {}
};

typedef BitStringBase RadioBearerReconfigurationCompleteLaterNonCriticalExtensionsRadioBearerReconfigurationCompleter3addext;

enum RadioBearerReconfigurationCompletev770extIEsdeferredMeasurementControlReadingValues {
	true_RadioBearerReconfigurationCompletev770extIEsdeferredMeasurementControlReading = 0,
};
typedef Enumerated<CONSTRAINED, 0> RadioBearerReconfigurationCompletev770extIEsdeferredMeasurementControlReading;

class RadioBearerReconfigurationCompletev770extIEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationCompletev770extIEs(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationCompleteLaterNonCriticalExtensionsV770NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RadioBearerReconfigurationCompleteLaterNonCriticalExtensionsV770NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationCompleteLaterNonCriticalExtensionsV770NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationCompleteLaterNonCriticalExtensionsV770NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationCompleteLaterNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationCompleteLaterNonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationComplete : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	RadioBearerReconfigurationComplete(): Sequence(&theInfo) {}
};

typedef BitStringBase RadioBearerReconfigurationFailureLaterNonCriticalExtensionsRadioBearerReconfigurationFailurer3addext;

class RadioBearerReconfigurationFailureLaterNonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RadioBearerReconfigurationFailureLaterNonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationFailureLaterNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReconfigurationFailureLaterNonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReconfigurationFailure : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	RadioBearerReconfigurationFailure(): Sequence(&theInfo) {}
};

class RadioBearerReleaser3IEsDummyFdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReleaser3IEsDummyFdd(): Sequence(&theInfo) {}
};

typedef Null RadioBearerReleaser3IEsDummyTdd;

class RadioBearerReleaser3IEsDummy : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RadioBearerReleaser3IEsDummy(): Choice(&theInfo) {}
};

class RadioBearerReleaser3IEsModeSpecificPhysChInfoFdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RadioBearerReleaser3IEsModeSpecificPhysChInfoFdd(): Sequence(&theInfo) {}
};

typedef Null RadioBearerReleaser3IEsModeSpecificPhysChInfoTdd;

class RadioBearerReleaser3IEsModeSpecificPhysChInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RadioBearerReleaser3IEsModeSpecificPhysChInfo(): Choice(&theInfo) {}
};

class RadioBearerReleaser3IEs : Sequence {
private:
	static const void *itemsInfo[28];
	static bool itemsPres[28];
public:
	static const Info theInfo;
	RadioBearerReleaser3IEs(): Sequence(&theInfo) {}
};

class RadioBearerReleasev3a0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RadioBearerReleasev3a0ext(): Sequence(&theInfo) {}
};

typedef BitStringBase RadioBearerReleaseR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsRadioBearerReleaser3addext;

class RadioBearerReleasev4b0extIEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReleasev4b0extIEs(): Sequence(&theInfo) {}
};

class RadioBearerReleasev590extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RadioBearerReleasev590extIEs(): Sequence(&theInfo) {}
};

enum RadioBearerReleasev690extIEspostVerificationPeriodValues {
	true_RadioBearerReleasev690extIEspostVerificationPeriod = 0,
};
typedef Enumerated<CONSTRAINED, 0> RadioBearerReleasev690extIEspostVerificationPeriod;

class RadioBearerReleasev690extIEs : Sequence {
private:
	static const void *itemsInfo[8];
	static bool itemsPres[8];
public:
	static const Info theInfo;
	RadioBearerReleasev690extIEs(): Sequence(&theInfo) {}
};

class RadioBearerReleasev770extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RadioBearerReleasev770extIEs(): Sequence(&theInfo) {}
};

class RadioBearerReleaseR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensionsV770NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RadioBearerReleaseR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensionsV770NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReleaseR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensionsV770NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReleaseR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensionsV770NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReleaseR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReleaseR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReleaseR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReleaseR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReleaseR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReleaseR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReleaseR3V3a0NonCriticalExtensionsLaterNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReleaseR3V3a0NonCriticalExtensionsLaterNonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReleaseR3V3a0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReleaseR3V3a0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReleaseR3 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReleaseR3(): Sequence(&theInfo) {}
};

class RadioBearerReleaser4IEsDummyFdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReleaser4IEsDummyFdd(): Sequence(&theInfo) {}
};

typedef Null RadioBearerReleaser4IEsDummyTdd;

class RadioBearerReleaser4IEsDummy : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RadioBearerReleaser4IEsDummy(): Choice(&theInfo) {}
};

class RadioBearerReleaser4IEsModeSpecificPhysChInfoFdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RadioBearerReleaser4IEsModeSpecificPhysChInfoFdd(): Sequence(&theInfo) {}
};

typedef Null RadioBearerReleaser4IEsModeSpecificPhysChInfoTdd;

class RadioBearerReleaser4IEsModeSpecificPhysChInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RadioBearerReleaser4IEsModeSpecificPhysChInfo(): Choice(&theInfo) {}
};

class RadioBearerReleaser4IEs : Sequence {
private:
	static const void *itemsInfo[28];
	static bool itemsPres[28];
public:
	static const Info theInfo;
	RadioBearerReleaser4IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase RadioBearerReleaseLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsRadioBearerReleaser4addext;

class RadioBearerReleaseLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensionsV770NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RadioBearerReleaseLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensionsV770NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReleaseLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensionsV770NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReleaseLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensionsV770NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReleaseLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReleaseLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReleaseLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReleaseLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReleaseLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReleaseLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReleaseLaterthanr3CriticalExtensionsR4 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReleaseLaterthanr3CriticalExtensionsR4(): Sequence(&theInfo) {}
};

class RadioBearerReleaser5IEsDummyFdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReleaser5IEsDummyFdd(): Sequence(&theInfo) {}
};

typedef Null RadioBearerReleaser5IEsDummyTdd;

class RadioBearerReleaser5IEsDummy : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RadioBearerReleaser5IEsDummy(): Choice(&theInfo) {}
};

class RadioBearerReleaser5IEsModeSpecificPhysChInfoFdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RadioBearerReleaser5IEsModeSpecificPhysChInfoFdd(): Sequence(&theInfo) {}
};

typedef Null RadioBearerReleaser5IEsModeSpecificPhysChInfoTdd;

class RadioBearerReleaser5IEsModeSpecificPhysChInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RadioBearerReleaser5IEsModeSpecificPhysChInfo(): Choice(&theInfo) {}
};

class RadioBearerReleaser5IEs : Sequence {
private:
	static const void *itemsInfo[30];
	static bool itemsPres[30];
public:
	static const Info theInfo;
	RadioBearerReleaser5IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase RadioBearerReleaseLaterthanr3CriticalExtensionsCriticalExtensionsR5RadioBearerReleaser5addext;

class RadioBearerReleaseLaterthanr3CriticalExtensionsCriticalExtensionsR5V690NonCriticalExtensionsV770NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RadioBearerReleaseLaterthanr3CriticalExtensionsCriticalExtensionsR5V690NonCriticalExtensionsV770NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReleaseLaterthanr3CriticalExtensionsCriticalExtensionsR5V690NonCriticalExtensionsV770NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReleaseLaterthanr3CriticalExtensionsCriticalExtensionsR5V690NonCriticalExtensionsV770NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReleaseLaterthanr3CriticalExtensionsCriticalExtensionsR5V690NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReleaseLaterthanr3CriticalExtensionsCriticalExtensionsR5V690NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReleaseLaterthanr3CriticalExtensionsCriticalExtensionsR5 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RadioBearerReleaseLaterthanr3CriticalExtensionsCriticalExtensionsR5(): Sequence(&theInfo) {}
};

class RadioBearerReleaser6IEs : Sequence {
private:
	static const void *itemsInfo[34];
	static bool itemsPres[34];
public:
	static const Info theInfo;
	RadioBearerReleaser6IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase RadioBearerReleaseLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR6RadioBearerReleaser6addext;

class RadioBearerReleasev6b0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RadioBearerReleasev6b0extIEs(): Sequence(&theInfo) {}
};

class RadioBearerReleaseLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR6V6b0NonCriticalExtensionsV770NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RadioBearerReleaseLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR6V6b0NonCriticalExtensionsV770NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReleaseLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR6V6b0NonCriticalExtensionsV770NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReleaseLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR6V6b0NonCriticalExtensionsV770NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReleaseLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR6V6b0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReleaseLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR6V6b0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReleaseLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR6 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RadioBearerReleaseLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR6(): Sequence(&theInfo) {}
};

typedef Boolean RadioBearerReleaser7IEsSupportForChangeOfUECapability;

class RadioBearerReleaser7IEs : Sequence {
private:
	static const void *itemsInfo[41];
	static bool itemsPres[41];
public:
	static const Info theInfo;
	RadioBearerReleaser7IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase RadioBearerReleaseLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7RadioBearerReleaser7addext;

class RadioBearerReleasev780extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RadioBearerReleasev780extIEs(): Sequence(&theInfo) {}
};

class RadioBearerReleasev7d0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RadioBearerReleasev7d0extIEs(): Sequence(&theInfo) {}
};

class RadioBearerReleasev7f0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RadioBearerReleasev7f0extIEs(): Sequence(&theInfo) {}
};

class RadioBearerReleasev7g0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RadioBearerReleasev7g0extIEs(): Sequence(&theInfo) {}
};

class RadioBearerReleaseLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensionsV7d0NonCriticalExtensionsV7f0NonCriticalExtensionsV7g0NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RadioBearerReleaseLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensionsV7d0NonCriticalExtensionsV7f0NonCriticalExtensionsV7g0NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReleaseLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensionsV7d0NonCriticalExtensionsV7f0NonCriticalExtensionsV7g0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReleaseLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensionsV7d0NonCriticalExtensionsV7f0NonCriticalExtensionsV7g0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReleaseLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensionsV7d0NonCriticalExtensionsV7f0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReleaseLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensionsV7d0NonCriticalExtensionsV7f0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReleaseLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensionsV7d0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReleaseLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensionsV7d0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReleaseLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReleaseLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReleaseLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RadioBearerReleaseLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7(): Sequence(&theInfo) {}
};

typedef Boolean RadioBearerReleaser8IEsSupportForChangeOfUECapability;

class RadioBearerReleaser8IEs : Sequence {
private:
	static const void *itemsInfo[44];
	static bool itemsPres[44];
public:
	static const Info theInfo;
	RadioBearerReleaser8IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase RadioBearerReleaseLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8RadioBearerReleaser8addext;

class RadioBearerReleasev890extIEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReleasev890extIEs(): Sequence(&theInfo) {}
};

class RadioBearerReleasev8a0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RadioBearerReleasev8a0extIEs(): Sequence(&theInfo) {}
};

class RadioBearerReleaseLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV7f0NonCriticalExtensionsV890NonCriticalExtensionsV7g0NonCriticalExtensionsV8a0NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RadioBearerReleaseLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV7f0NonCriticalExtensionsV890NonCriticalExtensionsV7g0NonCriticalExtensionsV8a0NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReleaseLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV7f0NonCriticalExtensionsV890NonCriticalExtensionsV7g0NonCriticalExtensionsV8a0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReleaseLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV7f0NonCriticalExtensionsV890NonCriticalExtensionsV7g0NonCriticalExtensionsV8a0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReleaseLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV7f0NonCriticalExtensionsV890NonCriticalExtensionsV7g0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReleaseLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV7f0NonCriticalExtensionsV890NonCriticalExtensionsV7g0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReleaseLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV7f0NonCriticalExtensionsV890NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReleaseLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV7f0NonCriticalExtensionsV890NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReleaseLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV7f0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReleaseLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV7f0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReleaseLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReleaseLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReleaseLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RadioBearerReleaseLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8(): Sequence(&theInfo) {}
};

typedef Boolean RadioBearerReleaser9IEsSupportForChangeOfUECapability;

class RadioBearerReleaser9IEs : Sequence {
private:
	static const void *itemsInfo[45];
	static bool itemsPres[45];
public:
	static const Info theInfo;
	RadioBearerReleaser9IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase RadioBearerReleaseLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9RadioBearerReleaser9addext;

class RadioBearerReleasev950extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RadioBearerReleasev950extIEs(): Sequence(&theInfo) {}
};

class RadioBearerReleaseLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9V950NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RadioBearerReleaseLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9V950NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReleaseLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9V950NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReleaseLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9V950NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReleaseLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RadioBearerReleaseLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9(): Sequence(&theInfo) {}
};

class RadioBearerReleaseLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RadioBearerReleaseLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReleaseLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RadioBearerReleaseLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions(): Choice(&theInfo) {}
};

class RadioBearerReleaseLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RadioBearerReleaseLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions(): Choice(&theInfo) {}
};

class RadioBearerReleaseLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RadioBearerReleaseLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions(): Choice(&theInfo) {}
};

class RadioBearerReleaseLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RadioBearerReleaseLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensions(): Choice(&theInfo) {}
};

class RadioBearerReleaseLaterthanr3CriticalExtensionsCriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RadioBearerReleaseLaterthanr3CriticalExtensionsCriticalExtensions(): Choice(&theInfo) {}
};

class RadioBearerReleaseLaterthanr3CriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RadioBearerReleaseLaterthanr3CriticalExtensions(): Choice(&theInfo) {}
};

class RadioBearerReleaseLaterthanr3 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReleaseLaterthanr3(): Sequence(&theInfo) {}
};

class RadioBearerRelease : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RadioBearerRelease(): Choice(&theInfo) {}
};

typedef BitStringBase RadioBearerReleaseCompleteLaterNonCriticalExtensionsRadioBearerReleaseCompleter3addext;

enum RadioBearerReleaseCompletev770extIEsdeferredMeasurementControlReadingValues {
	true_RadioBearerReleaseCompletev770extIEsdeferredMeasurementControlReading = 0,
};
typedef Enumerated<CONSTRAINED, 0> RadioBearerReleaseCompletev770extIEsdeferredMeasurementControlReading;

class RadioBearerReleaseCompletev770extIEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReleaseCompletev770extIEs(): Sequence(&theInfo) {}
};

class RadioBearerReleaseCompleteLaterNonCriticalExtensionsV770NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RadioBearerReleaseCompleteLaterNonCriticalExtensionsV770NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReleaseCompleteLaterNonCriticalExtensionsV770NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReleaseCompleteLaterNonCriticalExtensionsV770NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReleaseCompleteLaterNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReleaseCompleteLaterNonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReleaseComplete : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	RadioBearerReleaseComplete(): Sequence(&theInfo) {}
};

typedef BitStringBase RadioBearerReleaseFailureLaterNonCriticalExtensionsRadioBearerReleaseFailurer3addext;

class RadioBearerReleaseFailureLaterNonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RadioBearerReleaseFailureLaterNonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReleaseFailureLaterNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerReleaseFailureLaterNonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerReleaseFailure : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	RadioBearerReleaseFailure(): Sequence(&theInfo) {}
};

class RadioBearerSetupr3IEsDummyFdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerSetupr3IEsDummyFdd(): Sequence(&theInfo) {}
};

typedef Null RadioBearerSetupr3IEsDummyTdd;

class RadioBearerSetupr3IEsDummy : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RadioBearerSetupr3IEsDummy(): Choice(&theInfo) {}
};

class RadioBearerSetupr3IEsModeSpecificPhysChInfoFdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RadioBearerSetupr3IEsModeSpecificPhysChInfoFdd(): Sequence(&theInfo) {}
};

typedef Null RadioBearerSetupr3IEsModeSpecificPhysChInfoTdd;

class RadioBearerSetupr3IEsModeSpecificPhysChInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RadioBearerSetupr3IEsModeSpecificPhysChInfo(): Choice(&theInfo) {}
};

class RadioBearerSetupr3IEs : Sequence {
private:
	static const void *itemsInfo[27];
	static bool itemsPres[27];
public:
	static const Info theInfo;
	RadioBearerSetupr3IEs(): Sequence(&theInfo) {}
};

class RadioBearerSetupv3a0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RadioBearerSetupv3a0ext(): Sequence(&theInfo) {}
};

typedef BitStringBase RadioBearerSetupR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsRadioBearerSetupr3addext;

class RadioBearerSetupv4b0extIEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerSetupv4b0extIEs(): Sequence(&theInfo) {}
};

class RadioBearerSetupv590extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RadioBearerSetupv590extIEs(): Sequence(&theInfo) {}
};

class RadioBearerSetupv5d0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RadioBearerSetupv5d0extIEs(): Sequence(&theInfo) {}
};

enum RadioBearerSetupv690extIEspostVerificationPeriodValues {
	true_RadioBearerSetupv690extIEspostVerificationPeriod = 0,
};
typedef Enumerated<CONSTRAINED, 0> RadioBearerSetupv690extIEspostVerificationPeriod;

class RadioBearerSetupv690extIEs : Sequence {
private:
	static const void *itemsInfo[8];
	static bool itemsPres[8];
public:
	static const Info theInfo;
	RadioBearerSetupv690extIEs(): Sequence(&theInfo) {}
};

class RadioBearerSetupR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV5d0NonCriticalExtenstionsV690NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RadioBearerSetupR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV5d0NonCriticalExtenstionsV690NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerSetupR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV5d0NonCriticalExtenstionsV690NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerSetupR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV5d0NonCriticalExtenstionsV690NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerSetupR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV5d0NonCriticalExtenstions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerSetupR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV5d0NonCriticalExtenstions(): Sequence(&theInfo) {}
};

class RadioBearerSetupR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerSetupR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerSetupR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerSetupR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerSetupR3V3a0NonCriticalExtensionsLaterNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerSetupR3V3a0NonCriticalExtensionsLaterNonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerSetupR3V3a0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerSetupR3V3a0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerSetupR3 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerSetupR3(): Sequence(&theInfo) {}
};

class RadioBearerSetupr4IEsDummyFdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerSetupr4IEsDummyFdd(): Sequence(&theInfo) {}
};

typedef Null RadioBearerSetupr4IEsDummyTdd;

class RadioBearerSetupr4IEsDummy : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RadioBearerSetupr4IEsDummy(): Choice(&theInfo) {}
};

class RadioBearerSetupr4IEsModeSpecificPhysChInfoFdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RadioBearerSetupr4IEsModeSpecificPhysChInfoFdd(): Sequence(&theInfo) {}
};

typedef Null RadioBearerSetupr4IEsModeSpecificPhysChInfoTdd;

class RadioBearerSetupr4IEsModeSpecificPhysChInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RadioBearerSetupr4IEsModeSpecificPhysChInfo(): Choice(&theInfo) {}
};

class RadioBearerSetupr4IEs : Sequence {
private:
	static const void *itemsInfo[27];
	static bool itemsPres[27];
public:
	static const Info theInfo;
	RadioBearerSetupr4IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase RadioBearerSetupLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsRadioBearerSetupr4addext;

class RadioBearerSetupLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtensionsV5d0NonCriticalExtenstionsV690NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RadioBearerSetupLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtensionsV5d0NonCriticalExtenstionsV690NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerSetupLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtensionsV5d0NonCriticalExtenstionsV690NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerSetupLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtensionsV5d0NonCriticalExtenstionsV690NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerSetupLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtensionsV5d0NonCriticalExtenstions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerSetupLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtensionsV5d0NonCriticalExtenstions(): Sequence(&theInfo) {}
};

class RadioBearerSetupLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerSetupLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerSetupLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerSetupLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerSetupLaterthanr3CriticalExtensionsR4 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerSetupLaterthanr3CriticalExtensionsR4(): Sequence(&theInfo) {}
};

class RadioBearerSetupr5IEsDummyFdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerSetupr5IEsDummyFdd(): Sequence(&theInfo) {}
};

typedef Null RadioBearerSetupr5IEsDummyTdd;

class RadioBearerSetupr5IEsDummy : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RadioBearerSetupr5IEsDummy(): Choice(&theInfo) {}
};

class RadioBearerSetupr5IEsModeSpecificPhysChInfoFdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RadioBearerSetupr5IEsModeSpecificPhysChInfoFdd(): Sequence(&theInfo) {}
};

typedef Null RadioBearerSetupr5IEsModeSpecificPhysChInfoTdd;

class RadioBearerSetupr5IEsModeSpecificPhysChInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RadioBearerSetupr5IEsModeSpecificPhysChInfo(): Choice(&theInfo) {}
};

class RadioBearerSetupr5IEs : Sequence {
private:
	static const void *itemsInfo[29];
	static bool itemsPres[29];
public:
	static const Info theInfo;
	RadioBearerSetupr5IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase RadioBearerSetupLaterthanr3CriticalExtensionsCriticalExtensionsR5RadioBearerSetupr5addext;

class RadioBearerSetupLaterthanr3CriticalExtensionsCriticalExtensionsR5V5d0NonCriticalExtenstionsV690NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RadioBearerSetupLaterthanr3CriticalExtensionsCriticalExtensionsR5V5d0NonCriticalExtenstionsV690NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerSetupLaterthanr3CriticalExtensionsCriticalExtensionsR5V5d0NonCriticalExtenstionsV690NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerSetupLaterthanr3CriticalExtensionsCriticalExtensionsR5V5d0NonCriticalExtenstionsV690NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerSetupLaterthanr3CriticalExtensionsCriticalExtensionsR5V5d0NonCriticalExtenstions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerSetupLaterthanr3CriticalExtensionsCriticalExtensionsR5V5d0NonCriticalExtenstions(): Sequence(&theInfo) {}
};

class RadioBearerSetupLaterthanr3CriticalExtensionsCriticalExtensionsR5 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RadioBearerSetupLaterthanr3CriticalExtensionsCriticalExtensionsR5(): Sequence(&theInfo) {}
};

class RadioBearerSetupr6IEsSpecificationModeComplete : Sequence {
private:
	static const void *itemsInfo[13];
	static bool itemsPres[13];
public:
	static const Info theInfo;
	RadioBearerSetupr6IEsSpecificationModeComplete(): Sequence(&theInfo) {}
};

class RadioBearerSetupr6IEsSpecificationModeDummy : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	RadioBearerSetupr6IEsSpecificationModeDummy(): Sequence(&theInfo) {}
};

class RadioBearerSetupr6IEsSpecificationMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RadioBearerSetupr6IEsSpecificationMode(): Choice(&theInfo) {}
};

class RadioBearerSetupr6IEs : Sequence {
private:
	static const void *itemsInfo[22];
	static bool itemsPres[22];
public:
	static const Info theInfo;
	RadioBearerSetupr6IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase RadioBearerSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR6RadioBearerSetupr6addext;

class RadioBearerSetupv6b0extIEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerSetupv6b0extIEs(): Sequence(&theInfo) {}
};

class RadioBearerSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR6V6b0NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RadioBearerSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR6V6b0NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR6V6b0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR6V6b0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR6 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RadioBearerSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR6(): Sequence(&theInfo) {}
};

typedef Boolean RadioBearerSetupr7IEsSupportForChangeOfUECapability;

class RadioBearerSetupr7IEsSpecificationModeComplete : Sequence {
private:
	static const void *itemsInfo[13];
	static bool itemsPres[13];
public:
	static const Info theInfo;
	RadioBearerSetupr7IEsSpecificationModeComplete(): Sequence(&theInfo) {}
};

typedef Null RadioBearerSetupr7IEsSpecificationModeDummy;

class RadioBearerSetupr7IEsSpecificationMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RadioBearerSetupr7IEsSpecificationMode(): Choice(&theInfo) {}
};

class RadioBearerSetupr7IEs : Sequence {
private:
	static const void *itemsInfo[28];
	static bool itemsPres[28];
public:
	static const Info theInfo;
	RadioBearerSetupr7IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase RadioBearerSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7RadioBearerSetupr7addext;

class RadioBearerSetupv780extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RadioBearerSetupv780extIEs(): Sequence(&theInfo) {}
};

class RadioBearerSetupv820extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RadioBearerSetupv820extIEs(): Sequence(&theInfo) {}
};

class RadioBearerSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensionsV820NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RadioBearerSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensionsV820NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensionsV820NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensionsV820NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RadioBearerSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7(): Sequence(&theInfo) {}
};

typedef Boolean RadioBearerSetupr8IEsSupportForChangeOfUECapability;

class RadioBearerSetupr8IEs : Sequence {
private:
	static const void *itemsInfo[44];
	static bool itemsPres[44];
public:
	static const Info theInfo;
	RadioBearerSetupr8IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase RadioBearerSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8RadioBearerSetupr8addext;

class RadioBearerSetupv7d0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RadioBearerSetupv7d0extIEs(): Sequence(&theInfo) {}
};

class RadioBearerSetupv7f0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RadioBearerSetupv7f0extIEs(): Sequence(&theInfo) {}
};

class RadioBearerSetupv890extIEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerSetupv890extIEs(): Sequence(&theInfo) {}
};

class RadioBearerSetupv7g0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RadioBearerSetupv7g0extIEs(): Sequence(&theInfo) {}
};

class RadioBearerSetupv8a0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RadioBearerSetupv8a0extIEs(): Sequence(&theInfo) {}
};

class RadioBearerSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV7f0NonCriticalExtensionsV890NonCriticalExtensionsV7g0NonCriticalExtensionsV8a0NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RadioBearerSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV7f0NonCriticalExtensionsV890NonCriticalExtensionsV7g0NonCriticalExtensionsV8a0NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV7f0NonCriticalExtensionsV890NonCriticalExtensionsV7g0NonCriticalExtensionsV8a0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV7f0NonCriticalExtensionsV890NonCriticalExtensionsV7g0NonCriticalExtensionsV8a0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV7f0NonCriticalExtensionsV890NonCriticalExtensionsV7g0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV7f0NonCriticalExtensionsV890NonCriticalExtensionsV7g0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV7f0NonCriticalExtensionsV890NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV7f0NonCriticalExtensionsV890NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV7f0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV7f0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RadioBearerSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8(): Sequence(&theInfo) {}
};

typedef Boolean RadioBearerSetupr9IEsSupportForChangeOfUECapability;

class RadioBearerSetupr9IEs : Sequence {
private:
	static const void *itemsInfo[46];
	static bool itemsPres[46];
public:
	static const Info theInfo;
	RadioBearerSetupr9IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase RadioBearerSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9RadioBearerSetupr9addext;

class RadioBearerSetupv950extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RadioBearerSetupv950extIEs(): Sequence(&theInfo) {}
};

class RadioBearerSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9V950NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RadioBearerSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9V950NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9V950NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9V950NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RadioBearerSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9(): Sequence(&theInfo) {}
};

class RadioBearerSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RadioBearerSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RadioBearerSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions(): Choice(&theInfo) {}
};

class RadioBearerSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RadioBearerSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions(): Choice(&theInfo) {}
};

class RadioBearerSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RadioBearerSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions(): Choice(&theInfo) {}
};

class RadioBearerSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RadioBearerSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensions(): Choice(&theInfo) {}
};

class RadioBearerSetupLaterthanr3CriticalExtensionsCriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RadioBearerSetupLaterthanr3CriticalExtensionsCriticalExtensions(): Choice(&theInfo) {}
};

class RadioBearerSetupLaterthanr3CriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RadioBearerSetupLaterthanr3CriticalExtensions(): Choice(&theInfo) {}
};

class RadioBearerSetupLaterthanr3 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerSetupLaterthanr3(): Sequence(&theInfo) {}
};

class RadioBearerSetup : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RadioBearerSetup(): Choice(&theInfo) {}
};

class RadioBearerSetupr7addextIEsV7f0NonCriticalExtensionsV7g0NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RadioBearerSetupr7addextIEsV7f0NonCriticalExtensionsV7g0NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerSetupr7addextIEsV7f0NonCriticalExtensionsV7g0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerSetupr7addextIEsV7f0NonCriticalExtensionsV7g0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerSetupr7addextIEsV7f0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerSetupr7addextIEsV7f0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerSetupr7addextIEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerSetupr7addextIEs(): Sequence(&theInfo) {}
};

typedef BitStringBase RadioBearerSetupCompleteLaterNonCriticalExtensionsRadioBearerSetupCompleter3addext;

enum RadioBearerSetupCompletev770extIEsdeferredMeasurementControlReadingValues {
	true_RadioBearerSetupCompletev770extIEsdeferredMeasurementControlReading = 0,
};
typedef Enumerated<CONSTRAINED, 0> RadioBearerSetupCompletev770extIEsdeferredMeasurementControlReading;

class RadioBearerSetupCompletev770extIEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerSetupCompletev770extIEs(): Sequence(&theInfo) {}
};

class RadioBearerSetupCompleteLaterNonCriticalExtensionsV770NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RadioBearerSetupCompleteLaterNonCriticalExtensionsV770NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerSetupCompleteLaterNonCriticalExtensionsV770NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerSetupCompleteLaterNonCriticalExtensionsV770NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerSetupCompleteLaterNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerSetupCompleteLaterNonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerSetupComplete : Sequence {
private:
	static const void *itemsInfo[8];
	static bool itemsPres[8];
public:
	static const Info theInfo;
	RadioBearerSetupComplete(): Sequence(&theInfo) {}
};

typedef BitStringBase RadioBearerSetupFailureLaterNonCriticalExtensionsRadioBearerSetupFailurer3addext;

class RadioBearerSetupFailureLaterNonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RadioBearerSetupFailureLaterNonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerSetupFailureLaterNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RadioBearerSetupFailureLaterNonCriticalExtensions(): Sequence(&theInfo) {}
};

class RadioBearerSetupFailure : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	RadioBearerSetupFailure(): Sequence(&theInfo) {}
};

class RRCConnectionRejectr3IEs : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	RRCConnectionRejectr3IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase RRCConnectionRejectR3LaterNonCriticalExtensionsRrcConnectionRejectr3addext;

class RRCConnectionRejectv690extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RRCConnectionRejectv690extIEs(): Sequence(&theInfo) {}
};

enum RRCConnectionRejectv6f0extIEscountingCompletionValues {
	true_RRCConnectionRejectv6f0extIEscountingCompletion = 0,
};
typedef Enumerated<CONSTRAINED, 0> RRCConnectionRejectv6f0extIEscountingCompletion;

class RRCConnectionRejectv6f0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RRCConnectionRejectv6f0extIEs(): Sequence(&theInfo) {}
};

class RRCConnectionRejectv860extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RRCConnectionRejectv860extIEs(): Sequence(&theInfo) {}
};

class RRCConnectionRejectR3LaterNonCriticalExtensionsV690NonCriticalExtensionsV6f0NonCriticalExtensionsV860NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RRCConnectionRejectR3LaterNonCriticalExtensionsV690NonCriticalExtensionsV6f0NonCriticalExtensionsV860NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionRejectR3LaterNonCriticalExtensionsV690NonCriticalExtensionsV6f0NonCriticalExtensionsV860NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionRejectR3LaterNonCriticalExtensionsV690NonCriticalExtensionsV6f0NonCriticalExtensionsV860NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionRejectR3LaterNonCriticalExtensionsV690NonCriticalExtensionsV6f0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionRejectR3LaterNonCriticalExtensionsV690NonCriticalExtensionsV6f0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionRejectR3LaterNonCriticalExtensionsV690NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionRejectR3LaterNonCriticalExtensionsV690NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionRejectR3LaterNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionRejectR3LaterNonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionRejectR3 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionRejectR3(): Sequence(&theInfo) {}
};

class RRCConnectionRejectLaterthanr3CriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RRCConnectionRejectLaterthanr3CriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionRejectLaterthanr3 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RRCConnectionRejectLaterthanr3(): Sequence(&theInfo) {}
};

class RRCConnectionReject : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RRCConnectionReject(): Choice(&theInfo) {}
};

class RRCConnectionReleaser3IEs : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	RRCConnectionReleaser3IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase RRCConnectionReleaseR3LaterNonCriticalExtensionsRrcConnectionReleaser3addext;

class RRCConnectionReleasev690extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RRCConnectionReleasev690extIEs(): Sequence(&theInfo) {}
};

class RRCConnectionReleasev770extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RRCConnectionReleasev770extIEs(): Sequence(&theInfo) {}
};

class RRCConnectionReleasev860extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RRCConnectionReleasev860extIEs(): Sequence(&theInfo) {}
};

class RRCConnectionReleaseR3LaterNonCriticalExtensionsV690NonCriticalExtensionsV770NonCriticalExtensionsV860NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RRCConnectionReleaseR3LaterNonCriticalExtensionsV690NonCriticalExtensionsV770NonCriticalExtensionsV860NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionReleaseR3LaterNonCriticalExtensionsV690NonCriticalExtensionsV770NonCriticalExtensionsV860NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionReleaseR3LaterNonCriticalExtensionsV690NonCriticalExtensionsV770NonCriticalExtensionsV860NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionReleaseR3LaterNonCriticalExtensionsV690NonCriticalExtensionsV770NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionReleaseR3LaterNonCriticalExtensionsV690NonCriticalExtensionsV770NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionReleaseR3LaterNonCriticalExtensionsV690NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionReleaseR3LaterNonCriticalExtensionsV690NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionReleaseR3LaterNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionReleaseR3LaterNonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionReleaseR3 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionReleaseR3(): Sequence(&theInfo) {}
};

class RRCConnectionReleaser4IEs : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RRCConnectionReleaser4IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase RRCConnectionReleaseLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsRrcConnectionReleaser4addext;

class RRCConnectionReleaseLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV690NonCriticalExtensionsV770NonCriticalExtensionsV860NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RRCConnectionReleaseLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV690NonCriticalExtensionsV770NonCriticalExtensionsV860NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionReleaseLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV690NonCriticalExtensionsV770NonCriticalExtensionsV860NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionReleaseLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV690NonCriticalExtensionsV770NonCriticalExtensionsV860NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionReleaseLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV690NonCriticalExtensionsV770NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionReleaseLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV690NonCriticalExtensionsV770NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionReleaseLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV690NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionReleaseLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV690NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionReleaseLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionReleaseLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionReleaseLaterthanr3CriticalExtensionsR4 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionReleaseLaterthanr3CriticalExtensionsR4(): Sequence(&theInfo) {}
};

class RRCConnectionReleaseLaterthanr3CriticalExtensionsCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RRCConnectionReleaseLaterthanr3CriticalExtensionsCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionReleaseLaterthanr3CriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RRCConnectionReleaseLaterthanr3CriticalExtensions(): Choice(&theInfo) {}
};

class RRCConnectionReleaseLaterthanr3 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionReleaseLaterthanr3(): Sequence(&theInfo) {}
};

class RRCConnectionRelease : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RRCConnectionRelease(): Choice(&theInfo) {}
};

class RRCConnectionReleaseCCCHr3IEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionReleaseCCCHr3IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase RRCConnectionReleaseCCCHR3LaterNonCriticalExtensionsRrcConnectionReleaseCCCHr3addext;

typedef RRCConnectionReleasev690extIEs RRCConnectionReleaseCCCHv690extIEs;

typedef RRCConnectionReleasev860extIEs RRCConnectionReleaseCCCHv860extIEs;

class RRCConnectionReleaseCCCHR3LaterNonCriticalExtensionsV690NonCriticalExtensionsV860NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RRCConnectionReleaseCCCHR3LaterNonCriticalExtensionsV690NonCriticalExtensionsV860NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionReleaseCCCHR3LaterNonCriticalExtensionsV690NonCriticalExtensionsV860NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionReleaseCCCHR3LaterNonCriticalExtensionsV690NonCriticalExtensionsV860NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionReleaseCCCHR3LaterNonCriticalExtensionsV690NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionReleaseCCCHR3LaterNonCriticalExtensionsV690NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionReleaseCCCHR3LaterNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionReleaseCCCHR3LaterNonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionReleaseCCCHR3 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionReleaseCCCHR3(): Sequence(&theInfo) {}
};

class RRCConnectionReleaseCCCHr4IEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RRCConnectionReleaseCCCHr4IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase RRCConnectionReleaseCCCHLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsRrcConnectionReleaseCCCHr4addext;

class RRCConnectionReleaseCCCHLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV690NonCriticalExtensionsV860NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RRCConnectionReleaseCCCHLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV690NonCriticalExtensionsV860NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionReleaseCCCHLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV690NonCriticalExtensionsV860NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionReleaseCCCHLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV690NonCriticalExtensionsV860NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionReleaseCCCHLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV690NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionReleaseCCCHLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV690NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionReleaseCCCHLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionReleaseCCCHLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionReleaseCCCHLaterthanr3CriticalExtensionsR4 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionReleaseCCCHLaterthanr3CriticalExtensionsR4(): Sequence(&theInfo) {}
};

typedef SequenceOf<GroupReleaseInformation, CONSTRAINED, 1 ,  maxURNTI_Group> RRCConnectionReleaseCCCHLaterthanr3CriticalExtensionsCriticalExtensionsGroupIdentity;

typedef RRCConnectionReleaseCCCHr4IEs RRCConnectionReleaseCCCHr5IEs;

typedef BitStringBase RRCConnectionReleaseCCCHLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR5RrcConnectionReleaseCCCHr5addext;

class RRCConnectionReleaseCCCHLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR5V690NonCriticalExtensionsV860NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RRCConnectionReleaseCCCHLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR5V690NonCriticalExtensionsV860NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionReleaseCCCHLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR5V690NonCriticalExtensionsV860NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionReleaseCCCHLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR5V690NonCriticalExtensionsV860NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionReleaseCCCHLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR5V690NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionReleaseCCCHLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR5V690NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionReleaseCCCHLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR5 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RRCConnectionReleaseCCCHLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR5(): Sequence(&theInfo) {}
};

class RRCConnectionReleaseCCCHLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RRCConnectionReleaseCCCHLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionReleaseCCCHLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RRCConnectionReleaseCCCHLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensions(): Choice(&theInfo) {}
};

class RRCConnectionReleaseCCCHLaterthanr3CriticalExtensionsCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionReleaseCCCHLaterthanr3CriticalExtensionsCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionReleaseCCCHLaterthanr3CriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RRCConnectionReleaseCCCHLaterthanr3CriticalExtensions(): Choice(&theInfo) {}
};

class RRCConnectionReleaseCCCHLaterthanr3 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RRCConnectionReleaseCCCHLaterthanr3(): Sequence(&theInfo) {}
};

class RRCConnectionReleaseCCCH : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RRCConnectionReleaseCCCH(): Choice(&theInfo) {}
};

typedef BitStringBase RRCConnectionReleaseCompleteLaterNonCriticalExtensionsRrcConnectionReleaseCompleter3addext;

class RRCConnectionReleaseCompleteLaterNonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RRCConnectionReleaseCompleteLaterNonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionReleaseCompleteLaterNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionReleaseCompleteLaterNonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionReleaseComplete : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RRCConnectionReleaseComplete(): Sequence(&theInfo) {}
};

class RRCConnectionRequestv3d0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RRCConnectionRequestv3d0extIEs(): Sequence(&theInfo) {}
};

class RRCConnectionRequestv4b0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RRCConnectionRequestv4b0extIEs(): Sequence(&theInfo) {}
};

typedef Boolean RRCConnectionRequestv590extIEsPredefinedConfigStatusInfo;

class RRCConnectionRequestv590extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RRCConnectionRequestv590extIEs(): Sequence(&theInfo) {}
};

enum RRCConnectionRequestv690extIEsueCapabilityIndicationValues {
	hsdch_RRCConnectionRequestv690extIEsueCapabilityIndication = 0,
	hsdch_edch_RRCConnectionRequestv690extIEsueCapabilityIndication = 1,
};
typedef Enumerated<CONSTRAINED, 1> RRCConnectionRequestv690extIEsueCapabilityIndication;

enum RRCConnectionRequestv690extIEsDomainIndicatorCsdomaincsCallTypeValues {
	speech_RRCConnectionRequestv690extIEsDomainIndicatorCsdomaincsCallType = 0,
	video_RRCConnectionRequestv690extIEsDomainIndicatorCsdomaincsCallType = 1,
	other_RRCConnectionRequestv690extIEsDomainIndicatorCsdomaincsCallType = 2,
	spare_RRCConnectionRequestv690extIEsDomainIndicatorCsdomaincsCallType = 3,
};
typedef Enumerated<CONSTRAINED, 3> RRCConnectionRequestv690extIEsDomainIndicatorCsdomaincsCallType;

class RRCConnectionRequestv690extIEsDomainIndicatorCsdomain : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RRCConnectionRequestv690extIEsDomainIndicatorCsdomain(): Sequence(&theInfo) {}
};

typedef Null RRCConnectionRequestv690extIEsDomainIndicatorPsdomain;

class RRCConnectionRequestv690extIEsDomainIndicator : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RRCConnectionRequestv690extIEsDomainIndicator(): Choice(&theInfo) {}
};

class RRCConnectionRequestv690extIEs : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RRCConnectionRequestv690extIEs(): Sequence(&theInfo) {}
};

class RRCConnectionRequestv6b0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RRCConnectionRequestv6b0extIEs(): Sequence(&theInfo) {}
};

enum RRCConnectionRequestv6e0extIEssupportForFDPCHValues {
	true_RRCConnectionRequestv6e0extIEssupportForFDPCH = 0,
};
typedef Enumerated<CONSTRAINED, 0> RRCConnectionRequestv6e0extIEssupportForFDPCH;

class RRCConnectionRequestv6e0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RRCConnectionRequestv6e0extIEs(): Sequence(&theInfo) {}
};

enum RRCConnectionRequestv770extIEshspdschReception_CellFachValues {
	true_RRCConnectionRequestv770extIEshspdschReception_CellFach = 0,
};
typedef Enumerated<CONSTRAINED, 0> RRCConnectionRequestv770extIEshspdschReception_CellFach;

enum RRCConnectionRequestv770extIEsmac_ehsSupportValues {
	true_RRCConnectionRequestv770extIEsmac_ehsSupport = 0,
};
typedef Enumerated<CONSTRAINED, 0> RRCConnectionRequestv770extIEsmac_ehsSupport;

enum RRCConnectionRequestv770extIEsdiscontinuousDpcchTransmissionValues {
	true_RRCConnectionRequestv770extIEsdiscontinuousDpcchTransmission = 0,
};
typedef Enumerated<CONSTRAINED, 0> RRCConnectionRequestv770extIEsdiscontinuousDpcchTransmission;

class RRCConnectionRequestv770extIEs : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	RRCConnectionRequestv770extIEs(): Sequence(&theInfo) {}
};

enum RRCConnectionRequestv7b0extIEssupportForE_FDPCHValues {
	true_RRCConnectionRequestv7b0extIEssupportForE_FDPCH = 0,
};
typedef Enumerated<CONSTRAINED, 0> RRCConnectionRequestv7b0extIEssupportForE_FDPCH;

class RRCConnectionRequestv7b0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RRCConnectionRequestv7b0extIEs(): Sequence(&theInfo) {}
};

enum RRCConnectionRequestv860extIEssupportOfCommonEDCHValues {
	true_RRCConnectionRequestv860extIEssupportOfCommonEDCH = 0,
};
typedef Enumerated<CONSTRAINED, 0> RRCConnectionRequestv860extIEssupportOfCommonEDCH;

enum RRCConnectionRequestv860extIEsmultiCellSupportValues {
	true_RRCConnectionRequestv860extIEsmultiCellSupport = 0,
};
typedef Enumerated<CONSTRAINED, 0> RRCConnectionRequestv860extIEsmultiCellSupport;

enum RRCConnectionRequestv860extIEssupportOfMACiisValues {
	true_RRCConnectionRequestv860extIEssupportOfMACiis = 0,
};
typedef Enumerated<CONSTRAINED, 0> RRCConnectionRequestv860extIEssupportOfMACiis;

enum RRCConnectionRequestv860extIEssupportOfSPSOperationValues {
	true_RRCConnectionRequestv860extIEssupportOfSPSOperation = 0,
};
typedef Enumerated<CONSTRAINED, 0> RRCConnectionRequestv860extIEssupportOfSPSOperation;

class RRCConnectionRequestv860extIEs : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	RRCConnectionRequestv860extIEs(): Sequence(&theInfo) {}
};

enum RRCConnectionRequestv7e0extIEssupportForCSVoiceoverHSPAValues {
	true_RRCConnectionRequestv7e0extIEssupportForCSVoiceoverHSPA = 0,
};
typedef Enumerated<CONSTRAINED, 0> RRCConnectionRequestv7e0extIEssupportForCSVoiceoverHSPA;

class RRCConnectionRequestv7e0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RRCConnectionRequestv7e0extIEs(): Sequence(&theInfo) {}
};

class RRCConnectionRequestv7g0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RRCConnectionRequestv7g0extIEs(): Sequence(&theInfo) {}
};

enum RRCConnectionRequestv920extIEssupportOfDualCellMIMOValues {
	true_RRCConnectionRequestv920extIEssupportOfDualCellMIMO = 0,
};
typedef Enumerated<CONSTRAINED, 0> RRCConnectionRequestv920extIEssupportOfDualCellMIMO;

class RRCConnectionRequestv920extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RRCConnectionRequestv920extIEs(): Sequence(&theInfo) {}
};

enum RRCConnectionRequestv940extIEssystemInformationContainerStoredIndicatorValues {
	true_RRCConnectionRequestv940extIEssystemInformationContainerStoredIndicator = 0,
};
typedef Enumerated<CONSTRAINED, 0> RRCConnectionRequestv940extIEssystemInformationContainerStoredIndicator;

class RRCConnectionRequestv940extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RRCConnectionRequestv940extIEs(): Sequence(&theInfo) {}
};

class RRCConnectionRequestV3d0NonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensionsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV7b0NonCriticalExtensionsV860NonCriticalExtensionsV7e0NonCriticalExtensionsV7g0NonCriticalExtensionsV920NonCriticalExtensionsV940NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RRCConnectionRequestV3d0NonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensionsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV7b0NonCriticalExtensionsV860NonCriticalExtensionsV7e0NonCriticalExtensionsV7g0NonCriticalExtensionsV920NonCriticalExtensionsV940NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionRequestV3d0NonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensionsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV7b0NonCriticalExtensionsV860NonCriticalExtensionsV7e0NonCriticalExtensionsV7g0NonCriticalExtensionsV920NonCriticalExtensionsV940NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionRequestV3d0NonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensionsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV7b0NonCriticalExtensionsV860NonCriticalExtensionsV7e0NonCriticalExtensionsV7g0NonCriticalExtensionsV920NonCriticalExtensionsV940NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionRequestV3d0NonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensionsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV7b0NonCriticalExtensionsV860NonCriticalExtensionsV7e0NonCriticalExtensionsV7g0NonCriticalExtensionsV920NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionRequestV3d0NonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensionsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV7b0NonCriticalExtensionsV860NonCriticalExtensionsV7e0NonCriticalExtensionsV7g0NonCriticalExtensionsV920NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionRequestV3d0NonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensionsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV7b0NonCriticalExtensionsV860NonCriticalExtensionsV7e0NonCriticalExtensionsV7g0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionRequestV3d0NonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensionsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV7b0NonCriticalExtensionsV860NonCriticalExtensionsV7e0NonCriticalExtensionsV7g0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionRequestV3d0NonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensionsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV7b0NonCriticalExtensionsV860NonCriticalExtensionsV7e0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionRequestV3d0NonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensionsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV7b0NonCriticalExtensionsV860NonCriticalExtensionsV7e0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionRequestV3d0NonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensionsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV7b0NonCriticalExtensionsV860NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionRequestV3d0NonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensionsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV7b0NonCriticalExtensionsV860NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionRequestV3d0NonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensionsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV7b0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionRequestV3d0NonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensionsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV7b0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionRequestV3d0NonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensionsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionRequestV3d0NonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensionsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionRequestV3d0NonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensionsV6b0NonCriticalExtensionsV6e0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionRequestV3d0NonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensionsV6b0NonCriticalExtensionsV6e0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionRequestV3d0NonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensionsV6b0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionRequestV3d0NonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensionsV6b0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionRequestV3d0NonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionRequestV3d0NonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionRequestV3d0NonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionRequestV3d0NonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionRequestV3d0NonCriticalExtensionsV4b0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionRequestV3d0NonCriticalExtensionsV4b0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionRequestV3d0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionRequestV3d0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionRequest : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	RRCConnectionRequest(): Sequence(&theInfo) {}
};

class RRCConnectionSetupr3IEs : Sequence {
private:
	static const void *itemsInfo[18];
	static bool itemsPres[18];
public:
	static const Info theInfo;
	RRCConnectionSetupr3IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase RRCConnectionSetupR3LaterNonCriticalExtensionsRrcConnectionSetupr3addext;

class RRCConnectionSetupv4b0extIEs : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RRCConnectionSetupv4b0extIEs(): Sequence(&theInfo) {}
};

class RRCConnectionSetupv590extIEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionSetupv590extIEs(): Sequence(&theInfo) {}
};

enum RRCConnectionSetupv690extIEspostVerificationPeriodValues {
	true_RRCConnectionSetupv690extIEspostVerificationPeriod = 0,
};
typedef Enumerated<CONSTRAINED, 0> RRCConnectionSetupv690extIEspostVerificationPeriod;

class RRCConnectionSetupv690extIEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionSetupv690extIEs(): Sequence(&theInfo) {}
};

class RRCConnectionSetupR3LaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RRCConnectionSetupR3LaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionSetupR3LaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionSetupR3LaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionSetupR3LaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionSetupR3LaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionSetupR3LaterNonCriticalExtensionsV4b0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionSetupR3LaterNonCriticalExtensionsV4b0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionSetupR3LaterNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionSetupR3LaterNonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionSetupR3 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionSetupR3(): Sequence(&theInfo) {}
};

class RRCConnectionSetupr4IEs : Sequence {
private:
	static const void *itemsInfo[16];
	static bool itemsPres[16];
public:
	static const Info theInfo;
	RRCConnectionSetupr4IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase RRCConnectionSetupLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsRrcConnectionSetupr4addext;

class RRCConnectionSetupLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RRCConnectionSetupLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionSetupLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionSetupLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionSetupLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionSetupLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionSetupLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionSetupLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionSetupLaterthanr3CriticalExtensionsR4 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionSetupLaterthanr3CriticalExtensionsR4(): Sequence(&theInfo) {}
};

class RRCConnectionSetupr5IEsSpecificationModeComplete : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	RRCConnectionSetupr5IEsSpecificationModeComplete(): Sequence(&theInfo) {}
};

class RRCConnectionSetupr5IEsSpecificationModePreconfigurationPreConfigModeDefaultConfig : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionSetupr5IEsSpecificationModePreconfigurationPreConfigModeDefaultConfig(): Sequence(&theInfo) {}
};

class RRCConnectionSetupr5IEsSpecificationModePreconfigurationPreConfigMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RRCConnectionSetupr5IEsSpecificationModePreconfigurationPreConfigMode(): Choice(&theInfo) {}
};

class RRCConnectionSetupr5IEsSpecificationModePreconfiguration : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RRCConnectionSetupr5IEsSpecificationModePreconfiguration(): Sequence(&theInfo) {}
};

class RRCConnectionSetupr5IEsSpecificationMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RRCConnectionSetupr5IEsSpecificationMode(): Choice(&theInfo) {}
};

class RRCConnectionSetupr5IEs : Sequence {
private:
	static const void *itemsInfo[12];
	static bool itemsPres[12];
public:
	static const Info theInfo;
	RRCConnectionSetupr5IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase RRCConnectionSetupLaterthanr3CriticalExtensionsCriticalExtensionsR5RrcConnectionSetupr5addext;

class RRCConnectionSetupLaterthanr3CriticalExtensionsCriticalExtensionsR5V690NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RRCConnectionSetupLaterthanr3CriticalExtensionsCriticalExtensionsR5V690NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionSetupLaterthanr3CriticalExtensionsCriticalExtensionsR5V690NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionSetupLaterthanr3CriticalExtensionsCriticalExtensionsR5V690NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionSetupLaterthanr3CriticalExtensionsCriticalExtensionsR5 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RRCConnectionSetupLaterthanr3CriticalExtensionsCriticalExtensionsR5(): Sequence(&theInfo) {}
};

class RRCConnectionSetupr6IEsSpecificationModeComplete : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	RRCConnectionSetupr6IEsSpecificationModeComplete(): Sequence(&theInfo) {}
};

class RRCConnectionSetupr6IEsSpecificationModePreconfigurationPreConfigModeDefaultConfig : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionSetupr6IEsSpecificationModePreconfigurationPreConfigModeDefaultConfig(): Sequence(&theInfo) {}
};

class RRCConnectionSetupr6IEsSpecificationModePreconfigurationPreConfigMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RRCConnectionSetupr6IEsSpecificationModePreconfigurationPreConfigMode(): Choice(&theInfo) {}
};

class RRCConnectionSetupr6IEsSpecificationModePreconfiguration : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RRCConnectionSetupr6IEsSpecificationModePreconfiguration(): Sequence(&theInfo) {}
};

class RRCConnectionSetupr6IEsSpecificationMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RRCConnectionSetupr6IEsSpecificationMode(): Choice(&theInfo) {}
};

class RRCConnectionSetupr6IEs : Sequence {
private:
	static const void *itemsInfo[17];
	static bool itemsPres[17];
public:
	static const Info theInfo;
	RRCConnectionSetupr6IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase RRCConnectionSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR6RrcConnectionSetupr6addext;

class RRCConnectionSetupv6b0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RRCConnectionSetupv6b0extIEs(): Sequence(&theInfo) {}
};

class RRCConnectionSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR6V6b0NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RRCConnectionSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR6V6b0NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR6V6b0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR6V6b0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR6 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RRCConnectionSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR6(): Sequence(&theInfo) {}
};

typedef Boolean RRCConnectionSetupr7IEsSupportForChangeOfUECapability;

class RRCConnectionSetupr7IEsSpecificationModeComplete : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	RRCConnectionSetupr7IEsSpecificationModeComplete(): Sequence(&theInfo) {}
};

class RRCConnectionSetupr7IEsSpecificationModePreconfigurationPreConfigModeDefaultConfig : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionSetupr7IEsSpecificationModePreconfigurationPreConfigModeDefaultConfig(): Sequence(&theInfo) {}
};

class RRCConnectionSetupr7IEsSpecificationModePreconfigurationPreConfigMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RRCConnectionSetupr7IEsSpecificationModePreconfigurationPreConfigMode(): Choice(&theInfo) {}
};

class RRCConnectionSetupr7IEsSpecificationModePreconfiguration : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RRCConnectionSetupr7IEsSpecificationModePreconfiguration(): Sequence(&theInfo) {}
};

class RRCConnectionSetupr7IEsSpecificationMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RRCConnectionSetupr7IEsSpecificationMode(): Choice(&theInfo) {}
};

class RRCConnectionSetupr7IEs : Sequence {
private:
	static const void *itemsInfo[22];
	static bool itemsPres[22];
public:
	static const Info theInfo;
	RRCConnectionSetupr7IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase RRCConnectionSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7RrcConnectionSetupr7addext;

class RRCConnectionSetupv780extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RRCConnectionSetupv780extIEs(): Sequence(&theInfo) {}
};

class RRCConnectionSetupv7d0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RRCConnectionSetupv7d0extIEs(): Sequence(&theInfo) {}
};

class RRCConnectionSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensionsV7d0NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RRCConnectionSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensionsV7d0NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensionsV7d0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensionsV7d0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RRCConnectionSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7(): Sequence(&theInfo) {}
};

typedef Boolean RRCConnectionSetupr8IEsSupportForChangeOfUECapability;

class RRCConnectionSetupr8IEsSpecificationModeComplete : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	RRCConnectionSetupr8IEsSpecificationModeComplete(): Sequence(&theInfo) {}
};

class RRCConnectionSetupr8IEsSpecificationModePreconfigurationPreConfigModeDefaultConfig : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionSetupr8IEsSpecificationModePreconfigurationPreConfigModeDefaultConfig(): Sequence(&theInfo) {}
};

class RRCConnectionSetupr8IEsSpecificationModePreconfigurationPreConfigMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RRCConnectionSetupr8IEsSpecificationModePreconfigurationPreConfigMode(): Choice(&theInfo) {}
};

class RRCConnectionSetupr8IEsSpecificationModePreconfiguration : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RRCConnectionSetupr8IEsSpecificationModePreconfiguration(): Sequence(&theInfo) {}
};

class RRCConnectionSetupr8IEsSpecificationMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RRCConnectionSetupr8IEsSpecificationMode(): Choice(&theInfo) {}
};

class RRCConnectionSetupr8IEs : Sequence {
private:
	static const void *itemsInfo[25];
	static bool itemsPres[25];
public:
	static const Info theInfo;
	RRCConnectionSetupr8IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase RRCConnectionSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8RrcConnectionSetupr8addext;

class RRCConnectionSetupv890extIEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionSetupv890extIEs(): Sequence(&theInfo) {}
};

class RRCConnectionSetupv8a0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RRCConnectionSetupv8a0extIEs(): Sequence(&theInfo) {}
};

class RRCConnectionSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV890NonCriticalExtensionsV8a0NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RRCConnectionSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV890NonCriticalExtensionsV8a0NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV890NonCriticalExtensionsV8a0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV890NonCriticalExtensionsV8a0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV890NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV890NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RRCConnectionSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8(): Sequence(&theInfo) {}
};

typedef Boolean RRCConnectionSetupr9IEsSupportForChangeOfUECapability;

class RRCConnectionSetupr9IEsSpecificationModeComplete : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	RRCConnectionSetupr9IEsSpecificationModeComplete(): Sequence(&theInfo) {}
};

class RRCConnectionSetupr9IEsSpecificationModePreconfigurationPreConfigModeDefaultConfig : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionSetupr9IEsSpecificationModePreconfigurationPreConfigModeDefaultConfig(): Sequence(&theInfo) {}
};

class RRCConnectionSetupr9IEsSpecificationModePreconfigurationPreConfigMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RRCConnectionSetupr9IEsSpecificationModePreconfigurationPreConfigMode(): Choice(&theInfo) {}
};

class RRCConnectionSetupr9IEsSpecificationModePreconfiguration : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RRCConnectionSetupr9IEsSpecificationModePreconfiguration(): Sequence(&theInfo) {}
};

class RRCConnectionSetupr9IEsSpecificationMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RRCConnectionSetupr9IEsSpecificationMode(): Choice(&theInfo) {}
};

class RRCConnectionSetupr9IEs : Sequence {
private:
	static const void *itemsInfo[25];
	static bool itemsPres[25];
public:
	static const Info theInfo;
	RRCConnectionSetupr9IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase RRCConnectionSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9RrcConnectionSetupr9addext;

class RRCConnectionSetupv950extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RRCConnectionSetupv950extIEs(): Sequence(&theInfo) {}
};

class RRCConnectionSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9V950NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RRCConnectionSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9V950NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9V950NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9V950NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RRCConnectionSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9(): Sequence(&theInfo) {}
};

class RRCConnectionSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RRCConnectionSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RRCConnectionSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions(): Choice(&theInfo) {}
};

class RRCConnectionSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RRCConnectionSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions(): Choice(&theInfo) {}
};

class RRCConnectionSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RRCConnectionSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions(): Choice(&theInfo) {}
};

class RRCConnectionSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RRCConnectionSetupLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensions(): Choice(&theInfo) {}
};

class RRCConnectionSetupLaterthanr3CriticalExtensionsCriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RRCConnectionSetupLaterthanr3CriticalExtensionsCriticalExtensions(): Choice(&theInfo) {}
};

class RRCConnectionSetupLaterthanr3CriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RRCConnectionSetupLaterthanr3CriticalExtensions(): Choice(&theInfo) {}
};

class RRCConnectionSetupLaterthanr3 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RRCConnectionSetupLaterthanr3(): Sequence(&theInfo) {}
};

class RRCConnectionSetup : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RRCConnectionSetup(): Choice(&theInfo) {}
};

class RRCConnectionSetupCompletev370ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RRCConnectionSetupCompletev370ext(): Sequence(&theInfo) {}
};

class RRCConnectionSetupCompletev380extIEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionSetupCompletev380extIEs(): Sequence(&theInfo) {}
};

class RRCConnectionSetupCompletev3a0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RRCConnectionSetupCompletev3a0extIEs(): Sequence(&theInfo) {}
};

typedef BitStringBase RRCConnectionSetupCompleteV370NonCriticalExtensionsV380NonCriticalExtensionsV3a0NonCriticalExtensionsLaterNonCriticalExtensionsRrcConnectionSetupCompleter3addext;

class RRCConnectionSetupCompletev3g0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RRCConnectionSetupCompletev3g0extIEs(): Sequence(&theInfo) {}
};

class RRCConnectionSetupCompletev4b0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RRCConnectionSetupCompletev4b0extIEs(): Sequence(&theInfo) {}
};

class RRCConnectionSetupCompletev590extIEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionSetupCompletev590extIEs(): Sequence(&theInfo) {}
};

class RRCConnectionSetupCompletev5c0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RRCConnectionSetupCompletev5c0extIEs(): Sequence(&theInfo) {}
};

typedef BitStringBase RRCConnectionSetupCompletev690extIEsUeCapabilityContainer;

class RRCConnectionSetupCompletev690extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RRCConnectionSetupCompletev690extIEs(): Sequence(&theInfo) {}
};

enum RRCConnectionSetupCompletev770extIEsdeferredMeasurementControlReadingValues {
	true_RRCConnectionSetupCompletev770extIEsdeferredMeasurementControlReading = 0,
};
typedef Enumerated<CONSTRAINED, 0> RRCConnectionSetupCompletev770extIEsdeferredMeasurementControlReading;

class RRCConnectionSetupCompletev770extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RRCConnectionSetupCompletev770extIEs(): Sequence(&theInfo) {}
};

class RRCConnectionSetupCompleteV370NonCriticalExtensionsV380NonCriticalExtensionsV3a0NonCriticalExtensionsLaterNonCriticalExtensionsV3g0NonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV5c0NonCriticalExtensionsV690NonCriticalExtensionsV770NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RRCConnectionSetupCompleteV370NonCriticalExtensionsV380NonCriticalExtensionsV3a0NonCriticalExtensionsLaterNonCriticalExtensionsV3g0NonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV5c0NonCriticalExtensionsV690NonCriticalExtensionsV770NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionSetupCompleteV370NonCriticalExtensionsV380NonCriticalExtensionsV3a0NonCriticalExtensionsLaterNonCriticalExtensionsV3g0NonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV5c0NonCriticalExtensionsV690NonCriticalExtensionsV770NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionSetupCompleteV370NonCriticalExtensionsV380NonCriticalExtensionsV3a0NonCriticalExtensionsLaterNonCriticalExtensionsV3g0NonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV5c0NonCriticalExtensionsV690NonCriticalExtensionsV770NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionSetupCompleteV370NonCriticalExtensionsV380NonCriticalExtensionsV3a0NonCriticalExtensionsLaterNonCriticalExtensionsV3g0NonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV5c0NonCriticalExtensionsV690NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionSetupCompleteV370NonCriticalExtensionsV380NonCriticalExtensionsV3a0NonCriticalExtensionsLaterNonCriticalExtensionsV3g0NonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV5c0NonCriticalExtensionsV690NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionSetupCompleteV370NonCriticalExtensionsV380NonCriticalExtensionsV3a0NonCriticalExtensionsLaterNonCriticalExtensionsV3g0NonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV5c0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionSetupCompleteV370NonCriticalExtensionsV380NonCriticalExtensionsV3a0NonCriticalExtensionsLaterNonCriticalExtensionsV3g0NonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV5c0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionSetupCompleteV370NonCriticalExtensionsV380NonCriticalExtensionsV3a0NonCriticalExtensionsLaterNonCriticalExtensionsV3g0NonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionSetupCompleteV370NonCriticalExtensionsV380NonCriticalExtensionsV3a0NonCriticalExtensionsLaterNonCriticalExtensionsV3g0NonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionSetupCompleteV370NonCriticalExtensionsV380NonCriticalExtensionsV3a0NonCriticalExtensionsLaterNonCriticalExtensionsV3g0NonCriticalExtensionsV4b0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionSetupCompleteV370NonCriticalExtensionsV380NonCriticalExtensionsV3a0NonCriticalExtensionsLaterNonCriticalExtensionsV3g0NonCriticalExtensionsV4b0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionSetupCompleteV370NonCriticalExtensionsV380NonCriticalExtensionsV3a0NonCriticalExtensionsLaterNonCriticalExtensionsV3g0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionSetupCompleteV370NonCriticalExtensionsV380NonCriticalExtensionsV3a0NonCriticalExtensionsLaterNonCriticalExtensionsV3g0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionSetupCompleteV370NonCriticalExtensionsV380NonCriticalExtensionsV3a0NonCriticalExtensionsLaterNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionSetupCompleteV370NonCriticalExtensionsV380NonCriticalExtensionsV3a0NonCriticalExtensionsLaterNonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionSetupCompleteV370NonCriticalExtensionsV380NonCriticalExtensionsV3a0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionSetupCompleteV370NonCriticalExtensionsV380NonCriticalExtensionsV3a0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionSetupCompleteV370NonCriticalExtensionsV380NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionSetupCompleteV370NonCriticalExtensionsV380NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionSetupCompleteV370NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionSetupCompleteV370NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionSetupComplete : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	RRCConnectionSetupComplete(): Sequence(&theInfo) {}
};

class RRCConnectionSetupCompletev650extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RRCConnectionSetupCompletev650extIEs(): Sequence(&theInfo) {}
};

class RRCConnectionSetupCompletev680extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RRCConnectionSetupCompletev680extIEs(): Sequence(&theInfo) {}
};

class RRCConnectionSetupCompletev7e0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RRCConnectionSetupCompletev7e0extIEs(): Sequence(&theInfo) {}
};

class RRCConnectionSetupCompletev7f0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RRCConnectionSetupCompletev7f0extIEs(): Sequence(&theInfo) {}
};

class RRCConnectionSetupCompleter3addextIEsV680NonCriticalExtensionsV7e0NonCriticalExtensionsV7f0NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RRCConnectionSetupCompleter3addextIEsV680NonCriticalExtensionsV7e0NonCriticalExtensionsV7f0NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionSetupCompleter3addextIEsV680NonCriticalExtensionsV7e0NonCriticalExtensionsV7f0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionSetupCompleter3addextIEsV680NonCriticalExtensionsV7e0NonCriticalExtensionsV7f0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionSetupCompleter3addextIEsV680NonCriticalExtensionsV7e0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionSetupCompleter3addextIEsV680NonCriticalExtensionsV7e0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionSetupCompleter3addextIEsV680NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionSetupCompleter3addextIEsV680NonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCConnectionSetupCompleter3addextIEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCConnectionSetupCompleter3addextIEs(): Sequence(&theInfo) {}
};

class RRCFailureInfor3IEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RRCFailureInfor3IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase RRCFailureInfoR3LaterNonCriticalExtensionsRrcFailureInfor3addext;

class RRCFailureInfoR3LaterNonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RRCFailureInfoR3LaterNonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCFailureInfoR3LaterNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCFailureInfoR3LaterNonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCFailureInfoR3 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCFailureInfoR3(): Sequence(&theInfo) {}
};

class RRCFailureInfoCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RRCFailureInfoCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCFailureInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RRCFailureInfo(): Choice(&theInfo) {}
};

typedef BitStringBase RRCStatusLaterNonCriticalExtensionsRrcStatusr3addext;

class RRCStatusLaterNonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	RRCStatusLaterNonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCStatusLaterNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCStatusLaterNonCriticalExtensions(): Sequence(&theInfo) {}
};

class RRCStatus : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RRCStatus(): Sequence(&theInfo) {}
};

class SecurityModeCommandr3IEs : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	SecurityModeCommandr3IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase SecurityModeCommandR3LaterNonCriticalExtensionsSecurityModeCommandr3addext;

class SecurityModeCommandR3LaterNonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	SecurityModeCommandR3LaterNonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class SecurityModeCommandR3LaterNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SecurityModeCommandR3LaterNonCriticalExtensions(): Sequence(&theInfo) {}
};

class SecurityModeCommandR3 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SecurityModeCommandR3(): Sequence(&theInfo) {}
};

class SecurityModeCommandr7IEs : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	SecurityModeCommandr7IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase SecurityModeCommandLaterthanr3CriticalExtensionsR7SecurityModeCommandr7addext;

class SecurityModeCommandLaterthanr3CriticalExtensionsR7NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	SecurityModeCommandLaterthanr3CriticalExtensionsR7NonCriticalExtensions(): Sequence(&theInfo) {}
};

class SecurityModeCommandLaterthanr3CriticalExtensionsR7 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	SecurityModeCommandLaterthanr3CriticalExtensionsR7(): Sequence(&theInfo) {}
};

class SecurityModeCommandLaterthanr3CriticalExtensionsCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	SecurityModeCommandLaterthanr3CriticalExtensionsCriticalExtensions(): Sequence(&theInfo) {}
};

class SecurityModeCommandLaterthanr3CriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	SecurityModeCommandLaterthanr3CriticalExtensions(): Choice(&theInfo) {}
};

class SecurityModeCommandLaterthanr3 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SecurityModeCommandLaterthanr3(): Sequence(&theInfo) {}
};

class SecurityModeCommand : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	SecurityModeCommand(): Choice(&theInfo) {}
};

typedef BitStringBase SecurityModeCompleteLaterNonCriticalExtensionsSecurityModeCompleter3addext;

class SecurityModeCompleteLaterNonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	SecurityModeCompleteLaterNonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class SecurityModeCompleteLaterNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SecurityModeCompleteLaterNonCriticalExtensions(): Sequence(&theInfo) {}
};

class SecurityModeComplete : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	SecurityModeComplete(): Sequence(&theInfo) {}
};

typedef BitStringBase SecurityModeFailureLaterNonCriticalExtensionsSecurityModeFailurer3addext;

class SecurityModeFailureLaterNonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	SecurityModeFailureLaterNonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class SecurityModeFailureLaterNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SecurityModeFailureLaterNonCriticalExtensions(): Sequence(&theInfo) {}
};

class SecurityModeFailure : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	SecurityModeFailure(): Sequence(&theInfo) {}
};

class SignallingConnectionReleaser3IEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SignallingConnectionReleaser3IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase SignallingConnectionReleaseR3LaterNonCriticalExtensionsSignallingConnectionReleaser3addext;

class SignallingConnectionReleaseR3LaterNonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	SignallingConnectionReleaseR3LaterNonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class SignallingConnectionReleaseR3LaterNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SignallingConnectionReleaseR3LaterNonCriticalExtensions(): Sequence(&theInfo) {}
};

class SignallingConnectionReleaseR3 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SignallingConnectionReleaseR3(): Sequence(&theInfo) {}
};

class SignallingConnectionReleaseLaterthanr3CriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	SignallingConnectionReleaseLaterthanr3CriticalExtensions(): Sequence(&theInfo) {}
};

class SignallingConnectionReleaseLaterthanr3 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SignallingConnectionReleaseLaterthanr3(): Sequence(&theInfo) {}
};

class SignallingConnectionRelease : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	SignallingConnectionRelease(): Choice(&theInfo) {}
};

typedef BitStringBase SignallingConnectionReleaseIndicationLaterNonCriticalExtensionsSignallingConnectionReleaseIndicationr3addext;

enum SignallingConnectionReleaseIndicationv860extsignallingConnectionReleaseIndicationCauseValues {
	uERequestedPSDataSessionEnd_SignallingConnectionReleaseIndicationv860extsignallingConnectionReleaseIndicationCause = 0,
	anyOtherCause_SignallingConnectionReleaseIndicationv860extsignallingConnectionReleaseIndicationCause = 1,
};
typedef Enumerated<CONSTRAINED, 1> SignallingConnectionReleaseIndicationv860extsignallingConnectionReleaseIndicationCause;

class SignallingConnectionReleaseIndicationv860ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SignallingConnectionReleaseIndicationv860ext(): Sequence(&theInfo) {}
};

class SignallingConnectionReleaseIndicationLaterNonCriticalExtensionsV860nonCriticalExtentionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	SignallingConnectionReleaseIndicationLaterNonCriticalExtensionsV860nonCriticalExtentionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class SignallingConnectionReleaseIndicationLaterNonCriticalExtensionsV860nonCriticalExtentions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SignallingConnectionReleaseIndicationLaterNonCriticalExtensionsV860nonCriticalExtentions(): Sequence(&theInfo) {}
};

class SignallingConnectionReleaseIndicationLaterNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SignallingConnectionReleaseIndicationLaterNonCriticalExtensions(): Sequence(&theInfo) {}
};

class SignallingConnectionReleaseIndication : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SignallingConnectionReleaseIndication(): Sequence(&theInfo) {}
};

typedef Null SystemInformationBCHPayloadNoSegment;

class FirstSegment : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	FirstSegment(): Sequence(&theInfo) {}
};

class SubsequentSegment : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	SubsequentSegment(): Sequence(&theInfo) {}
};

class LastSegmentShort : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	LastSegmentShort(): Sequence(&theInfo) {}
};

class FirstSegmentShort : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	FirstSegmentShort(): Sequence(&theInfo) {}
};

class SystemInformationBCHPayloadLastAndFirst : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SystemInformationBCHPayloadLastAndFirst(): Sequence(&theInfo) {}
};

class CompleteSIBshort : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CompleteSIBshort(): Sequence(&theInfo) {}
};

typedef SequenceOf<CompleteSIBshort, CONSTRAINED, 1, maxSIBperMsg> CompleteSIBList;

class SystemInformationBCHPayloadLastAndComplete : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SystemInformationBCHPayloadLastAndComplete(): Sequence(&theInfo) {}
};

class SystemInformationBCHPayloadLastAndCompleteAndFirst : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	SystemInformationBCHPayloadLastAndCompleteAndFirst(): Sequence(&theInfo) {}
};

class SystemInformationBCHPayloadCompleteAndFirst : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SystemInformationBCHPayloadCompleteAndFirst(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED, 226, 226> CompleteSIBSibDatafixed;

class CompleteSIB : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CompleteSIB(): Sequence(&theInfo) {}
};

class LastSegment : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	LastSegment(): Sequence(&theInfo) {}
};

typedef Null SystemInformationBCHPayloadSpare5;

typedef Null SystemInformationBCHPayloadSpare4;

typedef Null SystemInformationBCHPayloadSpare3;

typedef Null SystemInformationBCHPayloadSpare2;

typedef Null SystemInformationBCHPayloadSpare1;

class SystemInformationBCHPayload : Choice {
private:
	static const void *choicesInfo[16];
public:
	static const Info theInfo;
	SystemInformationBCHPayload(): Choice(&theInfo) {}
};

class SystemInformationBCH : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SystemInformationBCH(): Sequence(&theInfo) {}
};

typedef Null SystemInformationFACHPayloadNoSegment;

class SystemInformationFACHPayloadLastAndFirst : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SystemInformationFACHPayloadLastAndFirst(): Sequence(&theInfo) {}
};

class SystemInformationFACHPayloadLastAndComplete : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SystemInformationFACHPayloadLastAndComplete(): Sequence(&theInfo) {}
};

class SystemInformationFACHPayloadLastAndCompleteAndFirst : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	SystemInformationFACHPayloadLastAndCompleteAndFirst(): Sequence(&theInfo) {}
};

class SystemInformationFACHPayloadCompleteAndFirst : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SystemInformationFACHPayloadCompleteAndFirst(): Sequence(&theInfo) {}
};

typedef Null SystemInformationFACHPayloadSpare5;

typedef Null SystemInformationFACHPayloadSpare4;

typedef Null SystemInformationFACHPayloadSpare3;

typedef Null SystemInformationFACHPayloadSpare2;

typedef Null SystemInformationFACHPayloadSpare1;

class SystemInformationFACHPayload : Choice {
private:
	static const void *choicesInfo[16];
public:
	static const Info theInfo;
	SystemInformationFACHPayload(): Choice(&theInfo) {}
};

class SystemInformationFACH : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SystemInformationFACH(): Sequence(&theInfo) {}
};

typedef BitStringBase SystemInformationChangeIndicationLaterNonCriticalExtensionsSystemInformationChangeIndicationr3addext;

class SystemInformationChangeIndicationv860extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SystemInformationChangeIndicationv860extIEs(): Sequence(&theInfo) {}
};

class SystemInformationChangeIndicationLaterNonCriticalExtensionsV860NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	SystemInformationChangeIndicationLaterNonCriticalExtensionsV860NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class SystemInformationChangeIndicationLaterNonCriticalExtensionsV860NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SystemInformationChangeIndicationLaterNonCriticalExtensionsV860NonCriticalExtensions(): Sequence(&theInfo) {}
};

class SystemInformationChangeIndicationLaterNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SystemInformationChangeIndicationLaterNonCriticalExtensions(): Sequence(&theInfo) {}
};

class SystemInformationChangeIndication : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SystemInformationChangeIndication(): Sequence(&theInfo) {}
};

class TransportChannelReconfigurationr3IEsDummyFdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TransportChannelReconfigurationr3IEsDummyFdd(): Sequence(&theInfo) {}
};

typedef Null TransportChannelReconfigurationr3IEsDummyTdd;

class TransportChannelReconfigurationr3IEsDummy : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	TransportChannelReconfigurationr3IEsDummy(): Choice(&theInfo) {}
};

class TransportChannelReconfigurationr3IEsModeSpecificPhysChInfoFdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	TransportChannelReconfigurationr3IEsModeSpecificPhysChInfoFdd(): Sequence(&theInfo) {}
};

typedef Null TransportChannelReconfigurationr3IEsModeSpecificPhysChInfoTdd;

class TransportChannelReconfigurationr3IEsModeSpecificPhysChInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	TransportChannelReconfigurationr3IEsModeSpecificPhysChInfo(): Choice(&theInfo) {}
};

class TransportChannelReconfigurationr3IEs : Sequence {
private:
	static const void *itemsInfo[22];
	static bool itemsPres[22];
public:
	static const Info theInfo;
	TransportChannelReconfigurationr3IEs(): Sequence(&theInfo) {}
};

class TransportChannelReconfigurationv3a0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	TransportChannelReconfigurationv3a0ext(): Sequence(&theInfo) {}
};

typedef BitStringBase TransportChannelReconfigurationR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsTransportChannelReconfigurationr3addext;

class TransportChannelReconfigurationv4b0extIEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TransportChannelReconfigurationv4b0extIEs(): Sequence(&theInfo) {}
};

class TransportChannelReconfigurationv590extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	TransportChannelReconfigurationv590extIEs(): Sequence(&theInfo) {}
};

enum TransportChannelReconfigurationv690extIEspostVerificationPeriodValues {
	true_TransportChannelReconfigurationv690extIEspostVerificationPeriod = 0,
};
typedef Enumerated<CONSTRAINED, 0> TransportChannelReconfigurationv690extIEspostVerificationPeriod;

class TransportChannelReconfigurationv690extIEs : Sequence {
private:
	static const void *itemsInfo[8];
	static bool itemsPres[8];
public:
	static const Info theInfo;
	TransportChannelReconfigurationv690extIEs(): Sequence(&theInfo) {}
};

class TransportChannelReconfigurationv770extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	TransportChannelReconfigurationv770extIEs(): Sequence(&theInfo) {}
};

class TransportChannelReconfigurationR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensionsV770NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	TransportChannelReconfigurationR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensionsV770NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class TransportChannelReconfigurationR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensionsV770NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TransportChannelReconfigurationR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensionsV770NonCriticalExtensions(): Sequence(&theInfo) {}
};

class TransportChannelReconfigurationR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TransportChannelReconfigurationR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensions(): Sequence(&theInfo) {}
};

class TransportChannelReconfigurationR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TransportChannelReconfigurationR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensions(): Sequence(&theInfo) {}
};

class TransportChannelReconfigurationR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TransportChannelReconfigurationR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class TransportChannelReconfigurationR3V3a0NonCriticalExtensionsLaterNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TransportChannelReconfigurationR3V3a0NonCriticalExtensionsLaterNonCriticalExtensions(): Sequence(&theInfo) {}
};

class TransportChannelReconfigurationR3V3a0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TransportChannelReconfigurationR3V3a0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class TransportChannelReconfigurationR3 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TransportChannelReconfigurationR3(): Sequence(&theInfo) {}
};

class TransportChannelReconfigurationr4IEsDummyFdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TransportChannelReconfigurationr4IEsDummyFdd(): Sequence(&theInfo) {}
};

typedef Null TransportChannelReconfigurationr4IEsDummyTdd;

class TransportChannelReconfigurationr4IEsDummy : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	TransportChannelReconfigurationr4IEsDummy(): Choice(&theInfo) {}
};

class TransportChannelReconfigurationr4IEsModeSpecificPhysChInfoFdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	TransportChannelReconfigurationr4IEsModeSpecificPhysChInfoFdd(): Sequence(&theInfo) {}
};

typedef Null TransportChannelReconfigurationr4IEsModeSpecificPhysChInfoTdd;

class TransportChannelReconfigurationr4IEsModeSpecificPhysChInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	TransportChannelReconfigurationr4IEsModeSpecificPhysChInfo(): Choice(&theInfo) {}
};

class TransportChannelReconfigurationr4IEs : Sequence {
private:
	static const void *itemsInfo[22];
	static bool itemsPres[22];
public:
	static const Info theInfo;
	TransportChannelReconfigurationr4IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase TransportChannelReconfigurationLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsTransportChannelReconfigurationr4addext;

class TransportChannelReconfigurationLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensionsV770NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	TransportChannelReconfigurationLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensionsV770NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class TransportChannelReconfigurationLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensionsV770NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TransportChannelReconfigurationLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensionsV770NonCriticalExtensions(): Sequence(&theInfo) {}
};

class TransportChannelReconfigurationLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TransportChannelReconfigurationLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtensionsV690NonCriticalExtensions(): Sequence(&theInfo) {}
};

class TransportChannelReconfigurationLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TransportChannelReconfigurationLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV590NonCriticalExtensions(): Sequence(&theInfo) {}
};

class TransportChannelReconfigurationLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TransportChannelReconfigurationLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class TransportChannelReconfigurationLaterthanr3CriticalExtensionsR4 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TransportChannelReconfigurationLaterthanr3CriticalExtensionsR4(): Sequence(&theInfo) {}
};

class TransportChannelReconfigurationr5IEsDummyFdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TransportChannelReconfigurationr5IEsDummyFdd(): Sequence(&theInfo) {}
};

typedef Null TransportChannelReconfigurationr5IEsDummyTdd;

class TransportChannelReconfigurationr5IEsDummy : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	TransportChannelReconfigurationr5IEsDummy(): Choice(&theInfo) {}
};

class TransportChannelReconfigurationr5IEsModeSpecificPhysChInfoFdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	TransportChannelReconfigurationr5IEsModeSpecificPhysChInfoFdd(): Sequence(&theInfo) {}
};

typedef Null TransportChannelReconfigurationr5IEsModeSpecificPhysChInfoTdd;

class TransportChannelReconfigurationr5IEsModeSpecificPhysChInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	TransportChannelReconfigurationr5IEsModeSpecificPhysChInfo(): Choice(&theInfo) {}
};

class TransportChannelReconfigurationr5IEs : Sequence {
private:
	static const void *itemsInfo[24];
	static bool itemsPres[24];
public:
	static const Info theInfo;
	TransportChannelReconfigurationr5IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase TransportChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsR5TransportChannelReconfigurationr5addext;

class TransportChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsR5V690NonCriticalExtensionsV770NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	TransportChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsR5V690NonCriticalExtensionsV770NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class TransportChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsR5V690NonCriticalExtensionsV770NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TransportChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsR5V690NonCriticalExtensionsV770NonCriticalExtensions(): Sequence(&theInfo) {}
};

class TransportChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsR5V690NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TransportChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsR5V690NonCriticalExtensions(): Sequence(&theInfo) {}
};

class TransportChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsR5 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	TransportChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsR5(): Sequence(&theInfo) {}
};

class TransportChannelReconfigurationr6IEs : Sequence {
private:
	static const void *itemsInfo[27];
	static bool itemsPres[27];
public:
	static const Info theInfo;
	TransportChannelReconfigurationr6IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase TransportChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR6TransportChannelReconfigurationr6addext;

class TransportChannelReconfigurationv6b0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	TransportChannelReconfigurationv6b0extIEs(): Sequence(&theInfo) {}
};

class TransportChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR6V6b0NonCriticalExtensionsV770NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	TransportChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR6V6b0NonCriticalExtensionsV770NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class TransportChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR6V6b0NonCriticalExtensionsV770NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TransportChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR6V6b0NonCriticalExtensionsV770NonCriticalExtensions(): Sequence(&theInfo) {}
};

class TransportChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR6V6b0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TransportChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR6V6b0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class TransportChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR6 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	TransportChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR6(): Sequence(&theInfo) {}
};

typedef Boolean TransportChannelReconfigurationr7IEsSupportForChangeOfUECapability;

enum TransportChannelReconfigurationr7IEsresponseToChangeOfUE_CapabilityValues {
	true_TransportChannelReconfigurationr7IEsresponseToChangeOfUE_Capability = 0,
};
typedef Enumerated<CONSTRAINED, 0> TransportChannelReconfigurationr7IEsresponseToChangeOfUE_Capability;

class TransportChannelReconfigurationr7IEs : Sequence {
private:
	static const void *itemsInfo[35];
	static bool itemsPres[35];
public:
	static const Info theInfo;
	TransportChannelReconfigurationr7IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase TransportChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7TransportChannelReconfigurationr7addext;

class TransportChannelReconfigurationv780extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	TransportChannelReconfigurationv780extIEs(): Sequence(&theInfo) {}
};

class TransportChannelReconfigurationv7d0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	TransportChannelReconfigurationv7d0extIEs(): Sequence(&theInfo) {}
};

class TransportChannelReconfigurationv7f0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	TransportChannelReconfigurationv7f0extIEs(): Sequence(&theInfo) {}
};

class TransportChannelReconfigurationv7g0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	TransportChannelReconfigurationv7g0extIEs(): Sequence(&theInfo) {}
};

class TransportChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensionsV7d0NonCriticalExtensionsV7f0NonCriticalExtensionsV7g0NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	TransportChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensionsV7d0NonCriticalExtensionsV7f0NonCriticalExtensionsV7g0NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class TransportChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensionsV7d0NonCriticalExtensionsV7f0NonCriticalExtensionsV7g0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TransportChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensionsV7d0NonCriticalExtensionsV7f0NonCriticalExtensionsV7g0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class TransportChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensionsV7d0NonCriticalExtensionsV7f0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TransportChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensionsV7d0NonCriticalExtensionsV7f0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class TransportChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensionsV7d0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TransportChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensionsV7d0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class TransportChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TransportChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7V780NonCriticalExtensions(): Sequence(&theInfo) {}
};

class TransportChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	TransportChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR7(): Sequence(&theInfo) {}
};

typedef Boolean TransportChannelReconfigurationr8IEsSupportForChangeOfUECapability;

enum TransportChannelReconfigurationr8IEsresponseToChangeOfUE_CapabilityValues {
	true_TransportChannelReconfigurationr8IEsresponseToChangeOfUE_Capability = 0,
};
typedef Enumerated<CONSTRAINED, 0> TransportChannelReconfigurationr8IEsresponseToChangeOfUE_Capability;

class TransportChannelReconfigurationr8IEs : Sequence {
private:
	static const void *itemsInfo[38];
	static bool itemsPres[38];
public:
	static const Info theInfo;
	TransportChannelReconfigurationr8IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase TransportChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8TransportChannelReconfigurationr8addext;

class TransportChannelReconfigurationv890extIEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TransportChannelReconfigurationv890extIEs(): Sequence(&theInfo) {}
};

class TransportChannelReconfigurationv8a0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	TransportChannelReconfigurationv8a0extIEs(): Sequence(&theInfo) {}
};

class TransportChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV7f0NonCriticalExtensionsV890NonCriticalExtensionsV7g0NonCriticalExtensionsV8a0NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	TransportChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV7f0NonCriticalExtensionsV890NonCriticalExtensionsV7g0NonCriticalExtensionsV8a0NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class TransportChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV7f0NonCriticalExtensionsV890NonCriticalExtensionsV7g0NonCriticalExtensionsV8a0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TransportChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV7f0NonCriticalExtensionsV890NonCriticalExtensionsV7g0NonCriticalExtensionsV8a0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class TransportChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV7f0NonCriticalExtensionsV890NonCriticalExtensionsV7g0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TransportChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV7f0NonCriticalExtensionsV890NonCriticalExtensionsV7g0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class TransportChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV7f0NonCriticalExtensionsV890NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TransportChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV7f0NonCriticalExtensionsV890NonCriticalExtensions(): Sequence(&theInfo) {}
};

class TransportChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV7f0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TransportChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensionsV7f0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class TransportChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TransportChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8V7d0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class TransportChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	TransportChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR8(): Sequence(&theInfo) {}
};

typedef Boolean TransportChannelReconfigurationr9IEsSupportForChangeOfUECapability;

enum TransportChannelReconfigurationr9IEsresponseToChangeOfUE_CapabilityValues {
	true_TransportChannelReconfigurationr9IEsresponseToChangeOfUE_Capability = 0,
};
typedef Enumerated<CONSTRAINED, 0> TransportChannelReconfigurationr9IEsresponseToChangeOfUE_Capability;

class TransportChannelReconfigurationr9IEs : Sequence {
private:
	static const void *itemsInfo[40];
	static bool itemsPres[40];
public:
	static const Info theInfo;
	TransportChannelReconfigurationr9IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase TransportChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9TransportChannelReconfigurationr9addext;

class TransportChannelReconfigurationv950extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	TransportChannelReconfigurationv950extIEs(): Sequence(&theInfo) {}
};

class TransportChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9V950NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	TransportChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9V950NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class TransportChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9V950NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TransportChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9V950NonCriticalExtensions(): Sequence(&theInfo) {}
};

class TransportChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	TransportChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsR9(): Sequence(&theInfo) {}
};

class TransportChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	TransportChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions(): Sequence(&theInfo) {}
};

class TransportChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	TransportChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions(): Choice(&theInfo) {}
};

class TransportChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	TransportChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions(): Choice(&theInfo) {}
};

class TransportChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	TransportChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions(): Choice(&theInfo) {}
};

class TransportChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	TransportChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensions(): Choice(&theInfo) {}
};

class TransportChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	TransportChannelReconfigurationLaterthanr3CriticalExtensionsCriticalExtensions(): Choice(&theInfo) {}
};

class TransportChannelReconfigurationLaterthanr3CriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	TransportChannelReconfigurationLaterthanr3CriticalExtensions(): Choice(&theInfo) {}
};

class TransportChannelReconfigurationLaterthanr3 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TransportChannelReconfigurationLaterthanr3(): Sequence(&theInfo) {}
};

class TransportChannelReconfiguration : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	TransportChannelReconfiguration(): Choice(&theInfo) {}
};

typedef BitStringBase TransportChannelReconfigurationCompleteLaterNonCriticalExtensionsTransportChannelReconfigurationCompleter3addext;

enum TransportChannelReconfigurationCompletev770extIEsdeferredMeasurementControlReadingValues {
	true_TransportChannelReconfigurationCompletev770extIEsdeferredMeasurementControlReading = 0,
};
typedef Enumerated<CONSTRAINED, 0> TransportChannelReconfigurationCompletev770extIEsdeferredMeasurementControlReading;

class TransportChannelReconfigurationCompletev770extIEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TransportChannelReconfigurationCompletev770extIEs(): Sequence(&theInfo) {}
};

class TransportChannelReconfigurationCompleteLaterNonCriticalExtensionsV770NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	TransportChannelReconfigurationCompleteLaterNonCriticalExtensionsV770NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class TransportChannelReconfigurationCompleteLaterNonCriticalExtensionsV770NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TransportChannelReconfigurationCompleteLaterNonCriticalExtensionsV770NonCriticalExtensions(): Sequence(&theInfo) {}
};

class TransportChannelReconfigurationCompleteLaterNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TransportChannelReconfigurationCompleteLaterNonCriticalExtensions(): Sequence(&theInfo) {}
};

class TransportChannelReconfigurationComplete : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	TransportChannelReconfigurationComplete(): Sequence(&theInfo) {}
};

typedef BitStringBase TransportChannelReconfigurationFailureLaterNonCriticalExtensionsTransportChannelReconfigurationFailurer3addext;

class TransportChannelReconfigurationFailureLaterNonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	TransportChannelReconfigurationFailureLaterNonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class TransportChannelReconfigurationFailureLaterNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TransportChannelReconfigurationFailureLaterNonCriticalExtensions(): Sequence(&theInfo) {}
};

class TransportChannelReconfigurationFailure : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	TransportChannelReconfigurationFailure(): Sequence(&theInfo) {}
};

typedef Null TransportFormatCombinationControlModeSpecificInfoFdd;

class TransportFormatCombinationControlModeSpecificInfoTdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	TransportFormatCombinationControlModeSpecificInfoTdd(): Sequence(&theInfo) {}
};

class TransportFormatCombinationControlModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	TransportFormatCombinationControlModeSpecificInfo(): Choice(&theInfo) {}
};

typedef BitStringBase TransportFormatCombinationControlLaterNonCriticalExtensionsTransportFormatCombinationControlr3addext;

class TransportFormatCombinationControlv820extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	TransportFormatCombinationControlv820extIEs(): Sequence(&theInfo) {}
};

class TransportFormatCombinationControlLaterNonCriticalExtensionsV820NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	TransportFormatCombinationControlLaterNonCriticalExtensionsV820NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class TransportFormatCombinationControlLaterNonCriticalExtensionsV820NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TransportFormatCombinationControlLaterNonCriticalExtensionsV820NonCriticalExtensions(): Sequence(&theInfo) {}
};

class TransportFormatCombinationControlLaterNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TransportFormatCombinationControlLaterNonCriticalExtensions(): Sequence(&theInfo) {}
};

class TransportFormatCombinationControl : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	TransportFormatCombinationControl(): Sequence(&theInfo) {}
};

typedef BitStringBase TransportFormatCombinationControlFailureLaterNonCriticalExtensionsTransportFormatCombinationControlFailurer3addext;

class TransportFormatCombinationControlFailureLaterNonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	TransportFormatCombinationControlFailureLaterNonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class TransportFormatCombinationControlFailureLaterNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TransportFormatCombinationControlFailureLaterNonCriticalExtensions(): Sequence(&theInfo) {}
};

class TransportFormatCombinationControlFailure : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	TransportFormatCombinationControlFailure(): Sequence(&theInfo) {}
};

class UECapabilityEnquiryr3IEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UECapabilityEnquiryr3IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase UECapabilityEnquiryR3LaterNonCriticalExtensionsUeCapabilityEnquiryr3addext;

class UECapabilityEnquiryv4b0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UECapabilityEnquiryv4b0extIEs(): Sequence(&theInfo) {}
};

class UECapabilityEnquiryv590extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UECapabilityEnquiryv590extIEs(): Sequence(&theInfo) {}
};

class UECapabilityEnquiryv770extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UECapabilityEnquiryv770extIEs(): Sequence(&theInfo) {}
};

class UECapabilityEnquiryv860extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UECapabilityEnquiryv860extIEs(): Sequence(&theInfo) {}
};

class UECapabilityEnquiryR3LaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV770NonCriticalExtensionsV860NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	UECapabilityEnquiryR3LaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV770NonCriticalExtensionsV860NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class UECapabilityEnquiryR3LaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV770NonCriticalExtensionsV860NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UECapabilityEnquiryR3LaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV770NonCriticalExtensionsV860NonCriticalExtensions(): Sequence(&theInfo) {}
};

class UECapabilityEnquiryR3LaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV770NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UECapabilityEnquiryR3LaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV770NonCriticalExtensions(): Sequence(&theInfo) {}
};

class UECapabilityEnquiryR3LaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UECapabilityEnquiryR3LaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensions(): Sequence(&theInfo) {}
};

class UECapabilityEnquiryR3LaterNonCriticalExtensionsV4b0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UECapabilityEnquiryR3LaterNonCriticalExtensionsV4b0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class UECapabilityEnquiryR3LaterNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UECapabilityEnquiryR3LaterNonCriticalExtensions(): Sequence(&theInfo) {}
};

class UECapabilityEnquiryR3 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UECapabilityEnquiryR3(): Sequence(&theInfo) {}
};

class UECapabilityEnquiryLaterthanr3CriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	UECapabilityEnquiryLaterthanr3CriticalExtensions(): Sequence(&theInfo) {}
};

class UECapabilityEnquiryLaterthanr3 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UECapabilityEnquiryLaterthanr3(): Sequence(&theInfo) {}
};

class UECapabilityEnquiry : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	UECapabilityEnquiry(): Choice(&theInfo) {}
};

class UECapabilityInformationv370ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UECapabilityInformationv370ext(): Sequence(&theInfo) {}
};

class UECapabilityInformationv380extIEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UECapabilityInformationv380extIEs(): Sequence(&theInfo) {}
};

class UECapabilityInformationv3a0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UECapabilityInformationv3a0extIEs(): Sequence(&theInfo) {}
};

typedef BitStringBase UECapabilityInformationV370NonCriticalExtensionsV380NonCriticalExtensionsV3a0NonCriticalExtensionsLaterNonCriticalExtensionsUeCapabilityInformationr3addext;

class UECapabilityInformationv4b0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UECapabilityInformationv4b0ext(): Sequence(&theInfo) {}
};

class UECapabilityInformationv590ext : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	UECapabilityInformationv590ext(): Sequence(&theInfo) {}
};

class UECapabilityInformationv5c0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UECapabilityInformationv5c0ext(): Sequence(&theInfo) {}
};

typedef BitStringBase UECapabilityInformationv690extIEsUeCapabilityContainer;

class UECapabilityInformationv690extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UECapabilityInformationv690extIEs(): Sequence(&theInfo) {}
};

class UECapabilityInformationV370NonCriticalExtensionsV380NonCriticalExtensionsV3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV5c0NonCriticalExtensionsV690NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	UECapabilityInformationV370NonCriticalExtensionsV380NonCriticalExtensionsV3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV5c0NonCriticalExtensionsV690NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class UECapabilityInformationV370NonCriticalExtensionsV380NonCriticalExtensionsV3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV5c0NonCriticalExtensionsV690NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UECapabilityInformationV370NonCriticalExtensionsV380NonCriticalExtensionsV3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV5c0NonCriticalExtensionsV690NonCriticalExtensions(): Sequence(&theInfo) {}
};

class UECapabilityInformationV370NonCriticalExtensionsV380NonCriticalExtensionsV3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV5c0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UECapabilityInformationV370NonCriticalExtensionsV380NonCriticalExtensionsV3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensionsV5c0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class UECapabilityInformationV370NonCriticalExtensionsV380NonCriticalExtensionsV3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UECapabilityInformationV370NonCriticalExtensionsV380NonCriticalExtensionsV3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensionsV590NonCriticalExtensions(): Sequence(&theInfo) {}
};

class UECapabilityInformationV370NonCriticalExtensionsV380NonCriticalExtensionsV3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UECapabilityInformationV370NonCriticalExtensionsV380NonCriticalExtensionsV3a0NonCriticalExtensionsLaterNonCriticalExtensionsV4b0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class UECapabilityInformationV370NonCriticalExtensionsV380NonCriticalExtensionsV3a0NonCriticalExtensionsLaterNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UECapabilityInformationV370NonCriticalExtensionsV380NonCriticalExtensionsV3a0NonCriticalExtensionsLaterNonCriticalExtensions(): Sequence(&theInfo) {}
};

class UECapabilityInformationV370NonCriticalExtensionsV380NonCriticalExtensionsV3a0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UECapabilityInformationV370NonCriticalExtensionsV380NonCriticalExtensionsV3a0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class UECapabilityInformationV370NonCriticalExtensionsV380NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UECapabilityInformationV370NonCriticalExtensionsV380NonCriticalExtensions(): Sequence(&theInfo) {}
};

class UECapabilityInformationV370NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UECapabilityInformationV370NonCriticalExtensions(): Sequence(&theInfo) {}
};

class UECapabilityInformation : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	UECapabilityInformation(): Sequence(&theInfo) {}
};

class UECapabilityInformationv650extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UECapabilityInformationv650extIEs(): Sequence(&theInfo) {}
};

class UECapabilityInformationv680extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UECapabilityInformationv680extIEs(): Sequence(&theInfo) {}
};

class UECapabilityInformationv7e0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UECapabilityInformationv7e0extIEs(): Sequence(&theInfo) {}
};

class UECapabilityInformationv7f0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UECapabilityInformationv7f0extIEs(): Sequence(&theInfo) {}
};

class UECapabilityInformationr3addextIEsV680NonCriticalExtensionsV7e0NonCriticalExtensionsV7f0NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	UECapabilityInformationr3addextIEsV680NonCriticalExtensionsV7e0NonCriticalExtensionsV7f0NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class UECapabilityInformationr3addextIEsV680NonCriticalExtensionsV7e0NonCriticalExtensionsV7f0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UECapabilityInformationr3addextIEsV680NonCriticalExtensionsV7e0NonCriticalExtensionsV7f0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class UECapabilityInformationr3addextIEsV680NonCriticalExtensionsV7e0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UECapabilityInformationr3addextIEsV680NonCriticalExtensionsV7e0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class UECapabilityInformationr3addextIEsV680NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UECapabilityInformationr3addextIEsV680NonCriticalExtensions(): Sequence(&theInfo) {}
};

class UECapabilityInformationr3addextIEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UECapabilityInformationr3addextIEs(): Sequence(&theInfo) {}
};

class UECapabilityInformationConfirmr3IEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UECapabilityInformationConfirmr3IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase UECapabilityInformationConfirmR3LaterNonCriticalExtensionsUeCapabilityInformationConfirmr3addext;

enum UECapabilityInformationConfirmv770extIEsacceptanceOfChangeOfCapabilityValues {
	refused_UECapabilityInformationConfirmv770extIEsacceptanceOfChangeOfCapability = 0,
	accepted_UECapabilityInformationConfirmv770extIEsacceptanceOfChangeOfCapability = 1,
	acceptedWithReconfigurationToFollow_UECapabilityInformationConfirmv770extIEsacceptanceOfChangeOfCapability = 2,
};
typedef Enumerated<CONSTRAINED, 2> UECapabilityInformationConfirmv770extIEsacceptanceOfChangeOfCapability;

class UECapabilityInformationConfirmv770extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UECapabilityInformationConfirmv770extIEs(): Sequence(&theInfo) {}
};

class UECapabilityInformationConfirmR3LaterNonCriticalExtensionsV770NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	UECapabilityInformationConfirmR3LaterNonCriticalExtensionsV770NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class UECapabilityInformationConfirmR3LaterNonCriticalExtensionsV770NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UECapabilityInformationConfirmR3LaterNonCriticalExtensionsV770NonCriticalExtensions(): Sequence(&theInfo) {}
};

class UECapabilityInformationConfirmR3LaterNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UECapabilityInformationConfirmR3LaterNonCriticalExtensions(): Sequence(&theInfo) {}
};

class UECapabilityInformationConfirmR3 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UECapabilityInformationConfirmR3(): Sequence(&theInfo) {}
};

class UECapabilityInformationConfirmLaterthanr3CriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	UECapabilityInformationConfirmLaterthanr3CriticalExtensions(): Sequence(&theInfo) {}
};

class UECapabilityInformationConfirmLaterthanr3 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UECapabilityInformationConfirmLaterthanr3(): Sequence(&theInfo) {}
};

class UECapabilityInformationConfirm : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	UECapabilityInformationConfirm(): Choice(&theInfo) {}
};

typedef BitStringBase UplinkDirectTransferLaterNonCriticalExtensionsUplinkDirectTransferr3addext;

class UplinkDirectTransferv690extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UplinkDirectTransferv690extIEs(): Sequence(&theInfo) {}
};

class UplinkDirectTransferv7g0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UplinkDirectTransferv7g0extIEs(): Sequence(&theInfo) {}
};

class UplinkDirectTransferLaterNonCriticalExtensionsV690NonCriticalExtensionsV7g0NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	UplinkDirectTransferLaterNonCriticalExtensionsV690NonCriticalExtensionsV7g0NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class UplinkDirectTransferLaterNonCriticalExtensionsV690NonCriticalExtensionsV7g0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UplinkDirectTransferLaterNonCriticalExtensionsV690NonCriticalExtensionsV7g0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class UplinkDirectTransferLaterNonCriticalExtensionsV690NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UplinkDirectTransferLaterNonCriticalExtensionsV690NonCriticalExtensions(): Sequence(&theInfo) {}
};

class UplinkDirectTransferLaterNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UplinkDirectTransferLaterNonCriticalExtensions(): Sequence(&theInfo) {}
};

class UplinkDirectTransfer : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	UplinkDirectTransfer(): Sequence(&theInfo) {}
};

class UplinkPhysicalChannelControlr3IEs : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	UplinkPhysicalChannelControlr3IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase UplinkPhysicalChannelControlR3LaterNonCriticalExtensionsUplinkPhysicalChannelControlr3addext;

class UplinkPhysicalChannelControlv4b0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UplinkPhysicalChannelControlv4b0extIEs(): Sequence(&theInfo) {}
};

class UplinkPhysicalChannelControlR3LaterNonCriticalExtensionsV4b0NonCriticalExtensionsNoncriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	UplinkPhysicalChannelControlR3LaterNonCriticalExtensionsV4b0NonCriticalExtensionsNoncriticalExtensions(): Sequence(&theInfo) {}
};

class UplinkPhysicalChannelControlR3LaterNonCriticalExtensionsV4b0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UplinkPhysicalChannelControlR3LaterNonCriticalExtensionsV4b0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class UplinkPhysicalChannelControlR3LaterNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UplinkPhysicalChannelControlR3LaterNonCriticalExtensions(): Sequence(&theInfo) {}
};

class UplinkPhysicalChannelControlR3 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UplinkPhysicalChannelControlR3(): Sequence(&theInfo) {}
};

class UplinkPhysicalChannelControlr4IEsTddOptionTdd384 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	UplinkPhysicalChannelControlr4IEsTddOptionTdd384(): Sequence(&theInfo) {}
};

class UplinkPhysicalChannelControlr4IEsTddOptionTdd128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UplinkPhysicalChannelControlr4IEsTddOptionTdd128(): Sequence(&theInfo) {}
};

class UplinkPhysicalChannelControlr4IEsTddOption : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	UplinkPhysicalChannelControlr4IEsTddOption(): Choice(&theInfo) {}
};

class UplinkPhysicalChannelControlr4IEs : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	UplinkPhysicalChannelControlr4IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase UplinkPhysicalChannelControlLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsUplinkPhysicalChannelControlr4addext;

class UplinkPhysicalChannelControlv690extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UplinkPhysicalChannelControlv690extIEs(): Sequence(&theInfo) {}
};

class UplinkPhysicalChannelControlLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV690NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	UplinkPhysicalChannelControlLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV690NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class UplinkPhysicalChannelControlLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV690NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UplinkPhysicalChannelControlLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensionsV690NonCriticalExtensions(): Sequence(&theInfo) {}
};

class UplinkPhysicalChannelControlLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UplinkPhysicalChannelControlLaterthanr3CriticalExtensionsR4V4d0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class UplinkPhysicalChannelControlLaterthanr3CriticalExtensionsR4 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UplinkPhysicalChannelControlLaterthanr3CriticalExtensionsR4(): Sequence(&theInfo) {}
};

class UplinkPhysicalChannelControlr5IEsTddOptionTdd384 : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	UplinkPhysicalChannelControlr5IEsTddOptionTdd384(): Sequence(&theInfo) {}
};

class UplinkPhysicalChannelControlr5IEsTddOptionTdd128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UplinkPhysicalChannelControlr5IEsTddOptionTdd128(): Sequence(&theInfo) {}
};

class UplinkPhysicalChannelControlr5IEsTddOption : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	UplinkPhysicalChannelControlr5IEsTddOption(): Choice(&theInfo) {}
};

class UplinkPhysicalChannelControlr5IEs : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	UplinkPhysicalChannelControlr5IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase UplinkPhysicalChannelControlLaterthanr3CriticalExtensionsCriticalExtensionsR5UplinkPhysicalChannelControlr5addext;

typedef Integer<CONSTRAINED, -120, -58> UplinkPhysicalChannelControlv6a0extIEsDesiredHSSICHPowerLevel;

enum UplinkPhysicalChannelControlv6a0extIEstpc_Step_SizeValues {
	s1_UplinkPhysicalChannelControlv6a0extIEstpc_Step_Size = 0,
	s2_UplinkPhysicalChannelControlv6a0extIEstpc_Step_Size = 1,
	s3_UplinkPhysicalChannelControlv6a0extIEstpc_Step_Size = 2,
	spare1_UplinkPhysicalChannelControlv6a0extIEstpc_Step_Size = 3,
};
typedef Enumerated<CONSTRAINED, 3> UplinkPhysicalChannelControlv6a0extIEstpc_Step_Size;

class UplinkPhysicalChannelControlv6a0extIEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UplinkPhysicalChannelControlv6a0extIEs(): Sequence(&theInfo) {}
};

class UplinkPhysicalChannelControlLaterthanr3CriticalExtensionsCriticalExtensionsR5V690NonCriticalExtensionsV6a0NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	UplinkPhysicalChannelControlLaterthanr3CriticalExtensionsCriticalExtensionsR5V690NonCriticalExtensionsV6a0NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class UplinkPhysicalChannelControlLaterthanr3CriticalExtensionsCriticalExtensionsR5V690NonCriticalExtensionsV6a0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UplinkPhysicalChannelControlLaterthanr3CriticalExtensionsCriticalExtensionsR5V690NonCriticalExtensionsV6a0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class UplinkPhysicalChannelControlLaterthanr3CriticalExtensionsCriticalExtensionsR5V690NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UplinkPhysicalChannelControlLaterthanr3CriticalExtensionsCriticalExtensionsR5V690NonCriticalExtensions(): Sequence(&theInfo) {}
};

class UplinkPhysicalChannelControlLaterthanr3CriticalExtensionsCriticalExtensionsR5 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	UplinkPhysicalChannelControlLaterthanr3CriticalExtensionsCriticalExtensionsR5(): Sequence(&theInfo) {}
};

class UplinkPhysicalChannelControlr7IEsTddOptionTdd384 : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	UplinkPhysicalChannelControlr7IEsTddOptionTdd384(): Sequence(&theInfo) {}
};

class UplinkPhysicalChannelControlr7IEsTddOptionTdd768 : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	UplinkPhysicalChannelControlr7IEsTddOptionTdd768(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, -120, -58> UplinkPhysicalChannelControlr7IEsTddOptionTdd128DesiredHSSICHPowerLevel;

enum UplinkPhysicalChannelControlr7IEsTddOptionTdd128tpc_Step_SizeValues {
	s1_UplinkPhysicalChannelControlr7IEsTddOptionTdd128tpc_Step_Size = 0,
	s2_UplinkPhysicalChannelControlr7IEsTddOptionTdd128tpc_Step_Size = 1,
	s3_UplinkPhysicalChannelControlr7IEsTddOptionTdd128tpc_Step_Size = 2,
	spare1_UplinkPhysicalChannelControlr7IEsTddOptionTdd128tpc_Step_Size = 3,
};
typedef Enumerated<CONSTRAINED, 3> UplinkPhysicalChannelControlr7IEsTddOptionTdd128tpc_Step_Size;

class UplinkPhysicalChannelControlr7IEsTddOptionTdd128 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	UplinkPhysicalChannelControlr7IEsTddOptionTdd128(): Sequence(&theInfo) {}
};

class UplinkPhysicalChannelControlr7IEsTddOption : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	UplinkPhysicalChannelControlr7IEsTddOption(): Choice(&theInfo) {}
};

class UplinkPhysicalChannelControlr7IEs : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	UplinkPhysicalChannelControlr7IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase UplinkPhysicalChannelControlLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR7UplinkPhysicalChannelControlr7addext;

class UplinkPhysicalChannelControlLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR7NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	UplinkPhysicalChannelControlLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR7NonCriticalExtensions(): Sequence(&theInfo) {}
};

class UplinkPhysicalChannelControlLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR7 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	UplinkPhysicalChannelControlLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsR7(): Sequence(&theInfo) {}
};

class UplinkPhysicalChannelControlLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	UplinkPhysicalChannelControlLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensionsCriticalExtensions(): Sequence(&theInfo) {}
};

class UplinkPhysicalChannelControlLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	UplinkPhysicalChannelControlLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensions(): Choice(&theInfo) {}
};

class UplinkPhysicalChannelControlLaterthanr3CriticalExtensionsCriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	UplinkPhysicalChannelControlLaterthanr3CriticalExtensionsCriticalExtensions(): Choice(&theInfo) {}
};

class UplinkPhysicalChannelControlLaterthanr3CriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	UplinkPhysicalChannelControlLaterthanr3CriticalExtensions(): Choice(&theInfo) {}
};

class UplinkPhysicalChannelControlLaterthanr3 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UplinkPhysicalChannelControlLaterthanr3(): Sequence(&theInfo) {}
};

class UplinkPhysicalChannelControl : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	UplinkPhysicalChannelControl(): Choice(&theInfo) {}
};

typedef BitStringBase URAUpdateLaterNonCriticalExtensionsUraUpdater3addext;

enum UraUpdatev770extIEssupport_hsdschReception_CellUraPchValues {
	true_UraUpdatev770extIEssupport_hsdschReception_CellUraPch = 0,
};
typedef Enumerated<CONSTRAINED, 0> UraUpdatev770extIEssupport_hsdschReception_CellUraPch;

enum UraUpdatev770extIEssupport_hsdschReception_CellFachValues {
	true_UraUpdatev770extIEssupport_hsdschReception_CellFach = 0,
};
typedef Enumerated<CONSTRAINED, 0> UraUpdatev770extIEssupport_hsdschReception_CellFach;

class UraUpdatev770extIEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UraUpdatev770extIEs(): Sequence(&theInfo) {}
};

enum URAUpdatev860extIEssupportOfHS_DSCHDRXOperationValues {
	true_URAUpdatev860extIEssupportOfHS_DSCHDRXOperation = 0,
};
typedef Enumerated<CONSTRAINED, 0> URAUpdatev860extIEssupportOfHS_DSCHDRXOperation;

enum URAUpdatev860extIEssupportOfCommonEDCHValues {
	true_URAUpdatev860extIEssupportOfCommonEDCH = 0,
};
typedef Enumerated<CONSTRAINED, 0> URAUpdatev860extIEssupportOfCommonEDCH;

enum URAUpdatev860extIEssupportOfMACiisValues {
	true_URAUpdatev860extIEssupportOfMACiis = 0,
};
typedef Enumerated<CONSTRAINED, 0> URAUpdatev860extIEssupportOfMACiis;

class URAUpdatev860extIEs : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	URAUpdatev860extIEs(): Sequence(&theInfo) {}
};

class URAUpdateLaterNonCriticalExtensionsV770NonCriticalExtensionsV860NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	URAUpdateLaterNonCriticalExtensionsV770NonCriticalExtensionsV860NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class URAUpdateLaterNonCriticalExtensionsV770NonCriticalExtensionsV860NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	URAUpdateLaterNonCriticalExtensionsV770NonCriticalExtensionsV860NonCriticalExtensions(): Sequence(&theInfo) {}
};

class URAUpdateLaterNonCriticalExtensionsV770NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	URAUpdateLaterNonCriticalExtensionsV770NonCriticalExtensions(): Sequence(&theInfo) {}
};

class URAUpdateLaterNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	URAUpdateLaterNonCriticalExtensions(): Sequence(&theInfo) {}
};

class URAUpdate : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	URAUpdate(): Sequence(&theInfo) {}
};

enum URAUpdatev7e0extIEssupportForTwoDRXSchemesInPCHValues {
	true_URAUpdatev7e0extIEssupportForTwoDRXSchemesInPCH = 0,
};
typedef Enumerated<CONSTRAINED, 0> URAUpdatev7e0extIEssupportForTwoDRXSchemesInPCH;

class URAUpdatev7e0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	URAUpdatev7e0extIEs(): Sequence(&theInfo) {}
};

class URAUpdater3addextIEsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	URAUpdater3addextIEsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class URAUpdater3addextIEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	URAUpdater3addextIEs(): Sequence(&theInfo) {}
};

class URAUpdateConfirmr3IEs : Sequence {
private:
	static const void *itemsInfo[10];
	static bool itemsPres[10];
public:
	static const Info theInfo;
	URAUpdateConfirmr3IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase URAUpdateConfirmR3LaterNonCriticalExtensionsUraUpdateConfirmr3addext;

class URAUpdateConfirmv690extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	URAUpdateConfirmv690extIEs(): Sequence(&theInfo) {}
};

class URAUpdateConfirmR3LaterNonCriticalExtensionsV690NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	URAUpdateConfirmR3LaterNonCriticalExtensionsV690NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class URAUpdateConfirmR3LaterNonCriticalExtensionsV690NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	URAUpdateConfirmR3LaterNonCriticalExtensionsV690NonCriticalExtensions(): Sequence(&theInfo) {}
};

class URAUpdateConfirmR3LaterNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	URAUpdateConfirmR3LaterNonCriticalExtensions(): Sequence(&theInfo) {}
};

class URAUpdateConfirmR3 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	URAUpdateConfirmR3(): Sequence(&theInfo) {}
};

class URAUpdateConfirmr5IEs : Sequence {
private:
	static const void *itemsInfo[9];
	static bool itemsPres[9];
public:
	static const Info theInfo;
	URAUpdateConfirmr5IEs(): Sequence(&theInfo) {}
};

class URAUpdateConfirmLaterthanr3CriticalExtensionsR5V690NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	URAUpdateConfirmLaterthanr3CriticalExtensionsR5V690NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class URAUpdateConfirmLaterthanr3CriticalExtensionsR5V690NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	URAUpdateConfirmLaterthanr3CriticalExtensionsR5V690NonCriticalExtensions(): Sequence(&theInfo) {}
};

class URAUpdateConfirmLaterthanr3CriticalExtensionsR5 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	URAUpdateConfirmLaterthanr3CriticalExtensionsR5(): Sequence(&theInfo) {}
};

typedef Boolean URAUpdateConfirmr7IEsSupportForChangeOfUECapability;

class URAUpdateConfirmr7IEs : Sequence {
private:
	static const void *itemsInfo[11];
	static bool itemsPres[11];
public:
	static const Info theInfo;
	URAUpdateConfirmr7IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase URAUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensionsR7UraUpdateConfirmr7addext;

class URAUpdateConfirmv860extIEs : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	URAUpdateConfirmv860extIEs(): Sequence(&theInfo) {}
};

class URAUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensionsR7V860NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	URAUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensionsR7V860NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class URAUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensionsR7V860NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	URAUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensionsR7V860NonCriticalExtensions(): Sequence(&theInfo) {}
};

class URAUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensionsR7 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	URAUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensionsR7(): Sequence(&theInfo) {}
};

class URAUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	URAUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensions(): Sequence(&theInfo) {}
};

class URAUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	URAUpdateConfirmLaterthanr3CriticalExtensionsCriticalExtensions(): Choice(&theInfo) {}
};

class URAUpdateConfirmLaterthanr3CriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	URAUpdateConfirmLaterthanr3CriticalExtensions(): Choice(&theInfo) {}
};

class URAUpdateConfirmLaterthanr3 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	URAUpdateConfirmLaterthanr3(): Sequence(&theInfo) {}
};

class URAUpdateConfirm : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	URAUpdateConfirm(): Choice(&theInfo) {}
};

class URAUpdateConfirmCCCHr3IEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	URAUpdateConfirmCCCHr3IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase URAUpdateConfirmCCCHR3LaterNonCriticalExtensionsUraUpdateConfirmCCCHr3addext;

class URAUpdateConfirmCCCHR3LaterNonCriticalExtensionsV690NonCriticalExtensionsV860NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	URAUpdateConfirmCCCHR3LaterNonCriticalExtensionsV690NonCriticalExtensionsV860NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class URAUpdateConfirmCCCHR3LaterNonCriticalExtensionsV690NonCriticalExtensionsV860NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	URAUpdateConfirmCCCHR3LaterNonCriticalExtensionsV690NonCriticalExtensionsV860NonCriticalExtensions(): Sequence(&theInfo) {}
};

class URAUpdateConfirmCCCHR3LaterNonCriticalExtensionsV690NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	URAUpdateConfirmCCCHR3LaterNonCriticalExtensionsV690NonCriticalExtensions(): Sequence(&theInfo) {}
};

class URAUpdateConfirmCCCHR3LaterNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	URAUpdateConfirmCCCHR3LaterNonCriticalExtensions(): Sequence(&theInfo) {}
};

class URAUpdateConfirmCCCHR3 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	URAUpdateConfirmCCCHR3(): Sequence(&theInfo) {}
};

class URAUpdateConfirmCCCHLaterthanr3CriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	URAUpdateConfirmCCCHLaterthanr3CriticalExtensions(): Sequence(&theInfo) {}
};

class URAUpdateConfirmCCCHLaterthanr3 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	URAUpdateConfirmCCCHLaterthanr3(): Sequence(&theInfo) {}
};

class URAUpdateConfirmCCCH : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	URAUpdateConfirmCCCH(): Choice(&theInfo) {}
};

class UTRANMobilityInformationr3IEsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	UTRANMobilityInformationr3IEsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class UTRANMobilityInformationr3IEs : Sequence {
private:
	static const void *itemsInfo[10];
	static bool itemsPres[10];
public:
	static const Info theInfo;
	UTRANMobilityInformationr3IEs(): Sequence(&theInfo) {}
};

class UTRANMobilityInformationv3a0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UTRANMobilityInformationv3a0extIEs(): Sequence(&theInfo) {}
};

typedef BitStringBase UTRANMobilityInformationR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsUtranMobilityInformationr3addext;

class UtranMobilityInformationv690extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UtranMobilityInformationv690extIEs(): Sequence(&theInfo) {}
};

class UTRANMobilityInformationv860ext1IEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UTRANMobilityInformationv860ext1IEs(): Sequence(&theInfo) {}
};

class UTRANMobilityInformationR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsV690NonCriticalExtensionsV860NonCriticalExtentionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	UTRANMobilityInformationR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsV690NonCriticalExtensionsV860NonCriticalExtentionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class UTRANMobilityInformationR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsV690NonCriticalExtensionsV860NonCriticalExtentions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UTRANMobilityInformationR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsV690NonCriticalExtensionsV860NonCriticalExtentions(): Sequence(&theInfo) {}
};

class UTRANMobilityInformationR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsV690NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UTRANMobilityInformationR3V3a0NonCriticalExtensionsLaterNonCriticalExtensionsV690NonCriticalExtensions(): Sequence(&theInfo) {}
};

class UTRANMobilityInformationR3V3a0NonCriticalExtensionsLaterNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UTRANMobilityInformationR3V3a0NonCriticalExtensionsLaterNonCriticalExtensions(): Sequence(&theInfo) {}
};

class UTRANMobilityInformationR3V3a0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UTRANMobilityInformationR3V3a0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class UTRANMobilityInformationR3 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UTRANMobilityInformationR3(): Sequence(&theInfo) {}
};

class UTRANMobilityInformationr5IEs : Sequence {
private:
	static const void *itemsInfo[8];
	static bool itemsPres[8];
public:
	static const Info theInfo;
	UTRANMobilityInformationr5IEs(): Sequence(&theInfo) {}
};

class UTRANMobilityInformationLaterthanr3CriticalExtensionsR5V690NonCriticalExtensionsV860NonCriticalExtentionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	UTRANMobilityInformationLaterthanr3CriticalExtensionsR5V690NonCriticalExtensionsV860NonCriticalExtentionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class UTRANMobilityInformationLaterthanr3CriticalExtensionsR5V690NonCriticalExtensionsV860NonCriticalExtentions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UTRANMobilityInformationLaterthanr3CriticalExtensionsR5V690NonCriticalExtensionsV860NonCriticalExtentions(): Sequence(&theInfo) {}
};

class UTRANMobilityInformationLaterthanr3CriticalExtensionsR5V690NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UTRANMobilityInformationLaterthanr3CriticalExtensionsR5V690NonCriticalExtensions(): Sequence(&theInfo) {}
};

class UTRANMobilityInformationLaterthanr3CriticalExtensionsR5 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UTRANMobilityInformationLaterthanr3CriticalExtensionsR5(): Sequence(&theInfo) {}
};

typedef Boolean UTRANMobilityInformationr7IEsSupportForChangeOfUECapability;

class UTRANMobilityInformationr7IEs : Sequence {
private:
	static const void *itemsInfo[11];
	static bool itemsPres[11];
public:
	static const Info theInfo;
	UTRANMobilityInformationr7IEs(): Sequence(&theInfo) {}
};

typedef BitStringBase UTRANMobilityInformationLaterthanr3CriticalExtensionsCriticalExtensionsR7UtranMobilityInformationr7addext;

class UTRANMobilityInformationv860ext2IEs : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	UTRANMobilityInformationv860ext2IEs(): Sequence(&theInfo) {}
};

class UTRANMobilityInformationLaterthanr3CriticalExtensionsCriticalExtensionsR7V860NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	UTRANMobilityInformationLaterthanr3CriticalExtensionsCriticalExtensionsR7V860NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class UTRANMobilityInformationLaterthanr3CriticalExtensionsCriticalExtensionsR7V860NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UTRANMobilityInformationLaterthanr3CriticalExtensionsCriticalExtensionsR7V860NonCriticalExtensions(): Sequence(&theInfo) {}
};

class UTRANMobilityInformationLaterthanr3CriticalExtensionsCriticalExtensionsR7 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	UTRANMobilityInformationLaterthanr3CriticalExtensionsCriticalExtensionsR7(): Sequence(&theInfo) {}
};

class UTRANMobilityInformationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	UTRANMobilityInformationLaterthanr3CriticalExtensionsCriticalExtensionsCriticalExtensions(): Sequence(&theInfo) {}
};

class UTRANMobilityInformationLaterthanr3CriticalExtensionsCriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	UTRANMobilityInformationLaterthanr3CriticalExtensionsCriticalExtensions(): Choice(&theInfo) {}
};

class UTRANMobilityInformationLaterthanr3CriticalExtensions : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	UTRANMobilityInformationLaterthanr3CriticalExtensions(): Choice(&theInfo) {}
};

class UTRANMobilityInformationLaterthanr3 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UTRANMobilityInformationLaterthanr3(): Sequence(&theInfo) {}
};

class UTRANMobilityInformation : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	UTRANMobilityInformation(): Choice(&theInfo) {}
};

typedef BitStringBase UTRANMobilityInformationConfirmLaterNonCriticalExtensionsUtranMobilityInformationConfirmr3addext;

enum UTRANMobilityInformationConfirmv770extIEsdeferredMeasurementControlReadingValues {
	true_UTRANMobilityInformationConfirmv770extIEsdeferredMeasurementControlReading = 0,
};
typedef Enumerated<CONSTRAINED, 0> UTRANMobilityInformationConfirmv770extIEsdeferredMeasurementControlReading;

class UTRANMobilityInformationConfirmv770extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UTRANMobilityInformationConfirmv770extIEs(): Sequence(&theInfo) {}
};

class UTRANMobilityInformationConfirmLaterNonCriticalExtensionsV770NonCriticalExtensionNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	UTRANMobilityInformationConfirmLaterNonCriticalExtensionsV770NonCriticalExtensionNonCriticalExtensions(): Sequence(&theInfo) {}
};

class UTRANMobilityInformationConfirmLaterNonCriticalExtensionsV770NonCriticalExtension : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UTRANMobilityInformationConfirmLaterNonCriticalExtensionsV770NonCriticalExtension(): Sequence(&theInfo) {}
};

class UTRANMobilityInformationConfirmLaterNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UTRANMobilityInformationConfirmLaterNonCriticalExtensions(): Sequence(&theInfo) {}
};

class UTRANMobilityInformationConfirm : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	UTRANMobilityInformationConfirm(): Sequence(&theInfo) {}
};

typedef BitStringBase UTRANMobilityInformationFailureLaterNonCriticalExtensionsUtranMobilityInformationFailurer3addext;

class UTRANMobilityInformationFailureLaterNonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	UTRANMobilityInformationFailureLaterNonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class UTRANMobilityInformationFailureLaterNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UTRANMobilityInformationFailureLaterNonCriticalExtensions(): Sequence(&theInfo) {}
};

class UTRANMobilityInformationFailure : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	UTRANMobilityInformationFailure(): Sequence(&theInfo) {}
};

class MBMSAccessInformationNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	MBMSAccessInformationNonCriticalExtensions(): Sequence(&theInfo) {}
};

class MBMSAccessInformation : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MBMSAccessInformation(): Sequence(&theInfo) {}
};

class MBMSCommonPTMRBInformationv770extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBMSCommonPTMRBInformationv770extIEs(): Sequence(&theInfo) {}
};

class MBMSCommonPTMRBInformationv780extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBMSCommonPTMRBInformationv780extIEs(): Sequence(&theInfo) {}
};

class MBMSCommonPTMRBInformationv860extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBMSCommonPTMRBInformationv860extIEs(): Sequence(&theInfo) {}
};

class MBMSCommonPTMRBInformationV770NonCriticalExtensionsV780NonCriticalExtensionsV860NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	MBMSCommonPTMRBInformationV770NonCriticalExtensionsV780NonCriticalExtensionsV860NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class MBMSCommonPTMRBInformationV770NonCriticalExtensionsV780NonCriticalExtensionsV860NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MBMSCommonPTMRBInformationV770NonCriticalExtensionsV780NonCriticalExtensionsV860NonCriticalExtensions(): Sequence(&theInfo) {}
};

class MBMSCommonPTMRBInformationV770NonCriticalExtensionsV780NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MBMSCommonPTMRBInformationV770NonCriticalExtensionsV780NonCriticalExtensions(): Sequence(&theInfo) {}
};

class MBMSCommonPTMRBInformationV770NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MBMSCommonPTMRBInformationV770NonCriticalExtensions(): Sequence(&theInfo) {}
};

class MBMSCommonPTMRBInformation : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	MBMSCommonPTMRBInformation(): Sequence(&theInfo) {}
};

class MBMSCurrentCellPTMRBInfov770extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBMSCurrentCellPTMRBInfov770extIEs(): Sequence(&theInfo) {}
};

class MBMSCurrentCellPTMRBInformationV770NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	MBMSCurrentCellPTMRBInformationV770NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class MBMSCurrentCellPTMRBInformationV770NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MBMSCurrentCellPTMRBInformationV770NonCriticalExtensions(): Sequence(&theInfo) {}
};

class MBMSCurrentCellPTMRBInformation : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	MBMSCurrentCellPTMRBInformation(): Sequence(&theInfo) {}
};

typedef Boolean MBMSGeneralInformationv6b0extIEsIndicateChangeInSelectedServices;

class MBMSGeneralInformationv6b0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBMSGeneralInformationv6b0extIEs(): Sequence(&theInfo) {}
};

class MBMSGeneralInformationv770extIEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MBMSGeneralInformationv770extIEs(): Sequence(&theInfo) {}
};

class MBMSGeneralInformationv860extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBMSGeneralInformationv860extIEs(): Sequence(&theInfo) {}
};

class MBMSGeneralInformationv890extIEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MBMSGeneralInformationv890extIEs(): Sequence(&theInfo) {}
};

class MBMSGeneralInformationV6b0NonCriticalExtensionsV770NonCriticalExtensionsV860NonCriticalExtensionsV890NoncriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	MBMSGeneralInformationV6b0NonCriticalExtensionsV770NonCriticalExtensionsV860NonCriticalExtensionsV890NoncriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class MBMSGeneralInformationV6b0NonCriticalExtensionsV770NonCriticalExtensionsV860NonCriticalExtensionsV890NoncriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MBMSGeneralInformationV6b0NonCriticalExtensionsV770NonCriticalExtensionsV860NonCriticalExtensionsV890NoncriticalExtensions(): Sequence(&theInfo) {}
};

class MBMSGeneralInformationV6b0NonCriticalExtensionsV770NonCriticalExtensionsV860NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MBMSGeneralInformationV6b0NonCriticalExtensionsV770NonCriticalExtensionsV860NonCriticalExtensions(): Sequence(&theInfo) {}
};

class MBMSGeneralInformationV6b0NonCriticalExtensionsV770NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MBMSGeneralInformationV6b0NonCriticalExtensionsV770NonCriticalExtensions(): Sequence(&theInfo) {}
};

class MBMSGeneralInformationV6b0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MBMSGeneralInformationV6b0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class MBMSGeneralInformation : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	MBMSGeneralInformation(): Sequence(&theInfo) {}
};

class MBMSModificationRequestv6b0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBMSModificationRequestv6b0extIEs(): Sequence(&theInfo) {}
};

enum MBMSModificationRequestv6f0extIEsmbmsSupportOfServiceChangeForAPtpRBValues {
	true_MBMSModificationRequestv6f0extIEsmbmsSupportOfServiceChangeForAPtpRB = 0,
};
typedef Enumerated<CONSTRAINED, 0> MBMSModificationRequestv6f0extIEsmbmsSupportOfServiceChangeForAPtpRB;

class MBMSModificationRequestv6f0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBMSModificationRequestv6f0extIEs(): Sequence(&theInfo) {}
};

class MBMSModificationRequestV6b0NonCriticalExtensionsV6f0NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	MBMSModificationRequestV6b0NonCriticalExtensionsV6f0NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class MBMSModificationRequestV6b0NonCriticalExtensionsV6f0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MBMSModificationRequestV6b0NonCriticalExtensionsV6f0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class MBMSModificationRequestV6b0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MBMSModificationRequestV6b0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class MBMSModificationRequest : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	MBMSModificationRequest(): Sequence(&theInfo) {}
};

enum MBMSModifiedServicesInformationmbms_ReacquireMCCHValues {
	true_MBMSModifiedServicesInformationmbms_ReacquireMCCH = 0,
};
typedef Enumerated<CONSTRAINED, 0> MBMSModifiedServicesInformationmbms_ReacquireMCCH;

typedef Integer<CONSTRAINED, 1, 16> MBMSModifiedServicesInformationEndOfModifiedMCCHInformation;

enum MBMSModifiedServicesInformationmbms_AllUnmodifiedPTMServicesValues {
	true_MBMSModifiedServicesInformationmbms_AllUnmodifiedPTMServices = 0,
};
typedef Enumerated<CONSTRAINED, 0> MBMSModifiedServicesInformationmbms_AllUnmodifiedPTMServices;

class MBMSModifiedServicesInformationv770extIEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MBMSModifiedServicesInformationv770extIEs(): Sequence(&theInfo) {}
};

class MBMSModifiedServicesInformationv7c0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBMSModifiedServicesInformationv7c0extIEs(): Sequence(&theInfo) {}
};

class MBMSModifiedServicesInformationV770NonCriticalExtensionsV7c0NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	MBMSModifiedServicesInformationV770NonCriticalExtensionsV7c0NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class MBMSModifiedServicesInformationV770NonCriticalExtensionsV7c0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MBMSModifiedServicesInformationV770NonCriticalExtensionsV7c0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class MBMSModifiedServicesInformationV770NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MBMSModifiedServicesInformationV770NonCriticalExtensions(): Sequence(&theInfo) {}
};

class MBMSModifiedServicesInformation : Sequence {
private:
	static const void *itemsInfo[8];
	static bool itemsPres[8];
public:
	static const Info theInfo;
	MBMSModifiedServicesInformation(): Sequence(&theInfo) {}
};

class MBMSNeighbouringCellPTMRBInformationv770extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBMSNeighbouringCellPTMRBInformationv770extIEs(): Sequence(&theInfo) {}
};

class MBMSNeighbouringCellPTMRBInformationV770NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	MBMSNeighbouringCellPTMRBInformationV770NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class MBMSNeighbouringCellPTMRBInformationV770NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MBMSNeighbouringCellPTMRBInformationV770NonCriticalExtensions(): Sequence(&theInfo) {}
};

class MBMSNeighbouringCellPTMRBInformation : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	MBMSNeighbouringCellPTMRBInformation(): Sequence(&theInfo) {}
};

class MBMSSchedulingInformationNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	MBMSSchedulingInformationNonCriticalExtensions(): Sequence(&theInfo) {}
};

class MBMSSchedulingInformation : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MBMSSchedulingInformation(): Sequence(&theInfo) {}
};

class MBMSUnmodifiedServicesInformationv770extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MBMSUnmodifiedServicesInformationv770extIEs(): Sequence(&theInfo) {}
};

class MBMSUnmodifiedServicesInformationV770NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	MBMSUnmodifiedServicesInformationV770NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class MBMSUnmodifiedServicesInformationV770NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MBMSUnmodifiedServicesInformationV770NonCriticalExtensions(): Sequence(&theInfo) {}
};

class MBMSUnmodifiedServicesInformation : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MBMSUnmodifiedServicesInformation(): Sequence(&theInfo) {}
};

typedef OctetStringBase SystemInformationContainerMib;

typedef OctetStringBase SystemInformationContainerSysInfoTypeSB1;

typedef OctetStringBase SystemInformationContainerSysInfoTypeSB2;

typedef OctetStringBase SystemInformationContainerSysInfoType1;

typedef OctetStringBase SystemInformationContainerSysInfoType3;

typedef OctetStringBase SystemInformationContainerSysInfoType5;

typedef OctetStringBase SystemInformationContainerSysInfoType7;

typedef OctetStringBase SystemInformationContainerSysInfoType11;

typedef OctetStringBase SystemInformationContainerSysInfoType11bis;

typedef OctetStringBase SystemInformationContainerSysInfoType12;

class SystemInformationContainerNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	SystemInformationContainerNonCriticalExtensions(): Sequence(&theInfo) {}
};

class SystemInformationContainer : Sequence {
private:
	static const void *itemsInfo[11];
	static bool itemsPres[11];
public:
	static const Info theInfo;
	SystemInformationContainer(): Sequence(&theInfo) {}
};

}

#endif /* RRCPDUDEFINITIONS_H_ */
