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

#ifndef SUBSCRIBERTABLE_H_
#define SUBSCRIBERTABLE_H_

#include "Subscriber.h"
#include "NotificationBoard.h"

#define INACTIVE_TIMER_TIMEOUT	10

class SubscriberTable : public cSimpleModule, public INotifiable {
private:
	unsigned enbIds;
	unsigned mmeIds;
	cMessage *inactiveTimer;
	NotificationBoard *nb;
	typedef std::vector<Subscriber*> Subscribers;
	Subscribers subs;

	void loadPDNConnectionsFromXML(const cXMLElement& subElem, Subscriber *sub);
	void loadSubscribersFromXML(const cXMLElement& config);
	virtual void receiveChangeNotification(int category, const cPolymorphic *details) {}
public:
	SubscriberTable();
	virtual ~SubscriberTable();

	virtual void initialize(int stage);
	virtual void handleMessage(cMessage *msg);

	Subscriber *findSubscriberForId(unsigned enbId, unsigned mmeId);
	Subscriber *findSubscriberForChannel(int channelNr);
	Subscriber *findSubscriberForIMSI(char *imsi);
	Subscriber *findSubscriberForSeqNr(unsigned seqNr);
	Subscriber *at(unsigned it) { return subs.at(it); }
	void push_back(Subscriber *sub) { subs.push_back(sub); }
	void erase(unsigned it);
	void erase(unsigned start, unsigned end);
	unsigned size() {return subs.size();}
	unsigned genEnbId() { return ++enbIds; }
	unsigned genMmeId() { return ++mmeIds; }
//	void notify(int category, const cPolymorphic *details) { nb->fireChangeNotification(category, details); }
};

#endif /* SUBSCRIBERTABLE_H_ */
