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

#ifndef DIAMETERCONNECTION_H_
#define DIAMETERCONNECTION_H_

#include <omnetpp.h>
#include "SCTPSocket.h"
#include "INETDefs.h"
#include "DiameterMessage.h"

#define INITIATOR	0
#define RESPONDER	1

class DiameterPeer;
class DiameterBase;

class DiameterConnection : public SCTPSocket::CallbackInterface {
private:
	bool type;	// initiator or responder
	bool ignore;
	DiameterBase *module;
	DiameterPeer *peer;

	SCTPSocket *socket;
	AddressVector addresses;
	int port;

	void socketEstablished(int32 connId, void *yourPtr, uint64 buffer);
	void socketDataArrived(int32 connId, void *yourPtr, cPacket *msg, bool urgent);
	void socketDataNotificationArrived(int32 connId, void *yourPtr, cPacket *msg);
	void socketPeerClosed(int32 connId, void *yourPtr);
	void socketClosed(int32 connId, void *yourPtr);
	void socketFailure(int32 connId, void *yourPtr, int32 code);
	void socketStatusArrived(int32 connId, void *yourPtr, SCTPStatusInfo *status) { delete status; }

public:
	DiameterConnection(DiameterBase *module);
	virtual ~DiameterConnection();

	void processMessage(cMessage *msg) { socket->processMessage(PK(msg)); }
	unsigned processOrigin(DiameterPeer *&peer, DiameterMessage *msg);

	void setPeer(DiameterPeer *peer) { this->peer = peer; }
	bool getType() { return type; }
	void setType(bool type) { this->type = type; }
//	SCTPSocket *getSocket() { return socket; }
	void setSocket(SCTPSocket *socket) { this->socket = socket; }
	void setAddresses(AddressVector addresses) { this->addresses = addresses; }
	void setPort(int port) { this->port = port; }

	void shutdown() { EV << "Shutting down Assoc Id = " << socket->getConnectionId() << endl; socket->shutdown(); }
	void close() { EV << "Closing Assoc Id = " << socket->getConnectionId() << endl; socket->close(); }
	void connect();
	void send(DiameterMessage *msg, unsigned fqdnPos, unsigned realmPos);	// adds also information about source identity

	int getConnectionId() { return socket->getConnectionId(); }
};

#endif /* DIAMETERCONNECTION_H_ */
