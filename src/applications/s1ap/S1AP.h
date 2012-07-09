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

#ifndef S1AP_H_
#define S1AP_H_

#include <omnetpp.h>
#include "SCTPSocket.h"
#include "S1APUtils.h"
#include "S1APConnectionTable.h"
#include "SubscriberTableAccess.h"
#include "IRoutingTable.h"
#include "NotificationBoard.h"

#define LISTENER	0
#define CONNECTOR	1

class S1AP : public cSimpleModule, public INotifiable {
private:
	bool type;
	char *plmnId;
	char *cellId;
	std::vector<SupportedTaItem> suppTas;
	std::vector<ServedGummeiItem> servGummeis;
	std::string name;
	unsigned char pagDrx;
	unsigned char relMmeCapac;
	int outboundStreams;
	SCTPSocket serverSocket;
	S1APConnectionTable conns;
    void loadOwnConfigFromXML(const cXMLElement &s1apNode);
    void loadSuppTasFromXML(const cXMLElement &suppTasNode);
    void loadServGummeisFromXML(const cXMLElement &servGummeisNode);
    void loadConnectorsFromXML(const cXMLElement &s1apNode);
    void loadListenersFromXML(const cXMLElement &s1apNode);
    void loadConfigFromXML(const char *filename);
    cQueue sendQueue;
    cMessage *retryTimer;
    IRoutingTable *rT;
    NotificationBoard *nb;
public:
	S1AP();
	virtual ~S1AP();

	virtual int numInitStages() const  { return 5; }
    virtual void initialize(int stage);
    virtual void handleMessage(cMessage *msg);
    void handleLowerMessage(cMessage *msg);
    void handleUpperMessage(cMessage *msg);
    void processTimer(cMessage *msg);

    std::string getName() { return name; }
    bool getType() { return type; }
//    char *getCellId() { return cellId; }	// same as home enb id
    char *getPlmnId() { return plmnId; }
//    std::vector<SupportedTaItem*> getSupportedTas() { return suppTas; }
    std::vector<ServedGummeiItem> getServedGummeis() { return servGummeis; }
    unsigned char getPagingDrx() { return pagDrx; }
    unsigned char getRelMmeCapac() { return relMmeCapac; }
    SubscriberTable *subT;
    void sendMessageUp(Subscriber *sub, NasPdu *nasPdu);

	/* notification */
	virtual void receiveChangeNotification(int category, const cPolymorphic *details);
	void fireChangeNotification(int category, const cPolymorphic *details) { nb->fireChangeNotification(category, details); }
};

#endif /* S1AP_H_ */
