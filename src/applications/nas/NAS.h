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

#ifndef NAS_H_
#define NAS_H_

#include <omnetpp.h>
#include "NASMessage_m.h"
#include "SubscriberTableAccess.h"
#include "NotificationBoard.h"
#include "IInterfaceTable.h"
#include "RoutingTable.h"

#define UE_APPL_TYPE		0
#define MME_APPL_TYPE		1
#define RELAY_APPL_TYPE		2
#define SEND_RETRY_TIMER	2

/*
 * Module class that implements NAS protocol.
 */
class NAS : public cSimpleModule, public INotifiable {
private:
	unsigned char appType;

	int channelNumber;

	SubscriberTable *subT;
	IInterfaceTable *ift;
	IRoutingTable *rt;
    NotificationBoard *nb;  // only for MME

    /*
     * Notification methods.
     */
    virtual void receiveChangeNotification(int category, const cPolymorphic *details);

    void loadConfigFromXML(const char *filename);
    void loadEMMConfigFromXML(const cXMLElement &nasNode);
    void loadESMConfigFromXML(const cXMLElement &nasNode);
public:
	NAS();
	virtual ~NAS();

    /*
     * Method for initializing the module. During initialization
     * the XML configuration file will be read, and the module
     * will try to gain access to needed table and boards.
     */
	virtual void initialize(int stage);

    /*
     * Method for message handling. This is just a decision method,
     * the actual message processing is done in handleMessageFromS1AP
     * and handleMessageFromS1AP according to the source of the message
     * and the application type.
     */
	virtual void handleMessage(cMessage *msg);

	/*
	 * Getter methods.
	 */
	int getChannelNumber() { return channelNumber; }


	void handleMessageFromS1AP(cMessage *msg);
	void handleMessageFromRadio(cMessage *msg);


	void sendToS1AP(NASPlainMessage *nmsg, unsigned subEnbId, unsigned subMmeId);
	void sendToRadio(NASPlainMessage *nmsg, int channelNr);

	/*
	 * Wrapper methods.
	 */
	void dropTimer(cMessage *timer) { drop(timer); }
	void takeTimer(cMessage *timer) { take(timer); }

	/*
	 * Utility methods.
	 */
	virtual int numInitStages() const  { return 5; }

};

#endif /* NAS_H_ */
