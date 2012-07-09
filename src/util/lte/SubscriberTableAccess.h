/*
 * SubscriberTableAccess.h
 *
 *  Created on: Mar 5, 2012
 *      Author: root
 */

#ifndef SUBSCRIBERTABLEACCESS_H_
#define SUBSCRIBERTABLEACCESS_H_

#include <omnetpp.h>
#include "ModuleAccess.h"
#include "SubscriberTable.h"

/**
 * Gives access to the SubsciberTable.
 */
class SubscriberTableAccess : public ModuleAccess<SubscriberTable>
{
    public:
		SubscriberTableAccess() : ModuleAccess<SubscriberTable>("subscriberTable") {}
};

#endif /* SUBSCRIBERTABLEACCESS_H_ */
