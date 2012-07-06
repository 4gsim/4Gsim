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

#ifndef DIAMETERS6A_H_
#define DIAMETERS6A_H_

#include "DiameterBase.h"
//#include "SubscriberTableAccess.h"
#include "NotificationBoard.h"

class DiameterS6a : public DiameterBase, public INotifiable {
private:
//	SubscriberTable *subT;
	NotificationBoard *nb;	// only for MME

	virtual void receiveChangeNotification(int category, const cPolymorphic *details);
//
//	DiameterMessage *createULR(Subscriber *sub);
//	DiameterMessage *processULR(DiameterMessage *ulr);
//	void processULA(DiameterMessage *ula);
public:
	DiameterS6a();
	virtual ~DiameterS6a();

	void initialize(int stage);
//	void handleMessage(cMessage *msg) { DiameterBase::handleMessage(msg); }

	DiameterMessage *processMessage(DiameterMessage *msg);
};

#endif /* DIAMETERS6A_H_ */
