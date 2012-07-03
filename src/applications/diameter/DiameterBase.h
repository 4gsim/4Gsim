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

#ifndef DIAMETERBASE_H_
#define DIAMETERBASE_H_

#include <omnetpp.h>
#include <string>
#include "SCTPSocket.h"
#include "DiameterConnectionMap.h"
#include "DiameterSessionTable.h"
#include "DiameterPeerTable.h"
#include "RoutingTableAccess.h"

/*
 * Implements the SCTP protocol. This section describes the internal
 * architecture of the SCTP model.
 *
 *   You may want to check the SCTPSocket
 * class which makes it easier to use SCTP from applications.
 *
 * The SCTP protocol implementation is composed of several classes (discussion
 * follows below):
 *   - SCTP: the module class
 *   - SCTPAssociation: manages a connection
 *   - SCTPSendQueue, SCTPReceiveQueue: abstract base classes for various types
 *      of send and receive queues
 *   - SCTPAlgorithm: abstract base class for SCTP algorithms
 *
 * SCTP subclassed from cSimpleModule. It manages socketpair-to-connection
 * mapping, and dispatches segments and user commands to the appropriate
 * SCTPAssociation object.
 *
 * SCTPAssociation manages the connection, with the help of other objects.
 * SCTPAssociation itself implements the basic SCTP "machinery": takes care
 * of the state machine, stores the state variables (TCB), sends/receives
 *   etc.
 *
 * SCTPAssociation internally relies on 3 objects. The first two are subclassed
 * from SCTPSendQueue and SCTPReceiveQueue. They manage the actual data stream,
 * so SCTPAssociation itself only works with sequence number variables.
 * This makes it possible to easily accomodate need for various types of
 * simulated data transfer: real byte stream, "virtual" bytes (byte counts
 * only), and sequence of cMessage objects (where every message object is
 * mapped to a SCTP sequence number range).
 *
 * Currently implemented send queue and receive queue classes are
 * SCTPVirtualDataSendQueue and SCTPVirtualDataRcvQueue which implement
 * queues with "virtual" bytes (byte counts only).
 *
 * The third object is subclassed from SCTPAlgorithm. Control over
 * retransmissions, congestion control and ACK sending are "outsourced"
 * from SCTPAssociation into SCTPAlgorithm: delayed acks, slow start, fast rexmit,
 * etc. are all implemented in SCTPAlgorithm subclasses.
 *
 * The concrete SCTPAlgorithm class to use can be chosen per connection (in OPEN)
 * or in a module parameter.
 */
class DiameterBase : public cSimpleModule {
public:
	std::string fqdn;
	std::string realm;
	unsigned vendorId;
	std::string productName;
	unsigned sessionIds;

protected:
	int outboundStreams;
    SCTPSocket serverSocket;
    DiameterConnectionMap connMap;
    DiameterSessionTable sessions;
    DiameterPeerTable peers;
    IRoutingTable *rT;

    void loadOwnConfigFromXML(const cXMLElement & diameterNode);
    void loadPeersFromXML(const cXMLElement & diameterNode);
    void loadListenersFromXML(const cXMLElement & diameterNode);
    void loadConfigFromXML(const char *filename);
    AddressVector queryDNS(const cXMLElement& diameterNode, const std::string fqdnIn, int port);
    AddressVector findLocalAddresses(AddressVector remoteAddrs);
public:
    DiameterBase();
    virtual ~DiameterBase();

    virtual int numInitStages() const  { return 5; }
    void initialize(int stage);
    void handleMessage(cMessage *msg);

    /*
     *
     */
    virtual DiameterMessage *processMessage(DiameterMessage *msg) { return NULL; }

    int getOutboundStreams() { return outboundStreams; }
	SCTPSocket getServerSocket() { return serverSocket; }

    DiameterConnection *createConnection(AddressVector addresses, int port);
	DiameterPeer *createPeer(std::string dFQDN, std::string dRealm, DiameterConnection *conn, DiameterApplication *appl = NULL);
	DiameterConnection *removeConnection(DiameterConnection *conn) { return connMap.removeConnection(conn); }
	DiameterPeer *findPeer(std::string dFQDN, std::string dRealm = "") { return peers.findPeer(dFQDN, dRealm); }
	DiameterPeer *findPeer(unsigned applId) { return peers.findPeer(applId); }
	DiameterSession *createSession(bool stType);
};

#endif /* DIAMETERBASE_H_ */
