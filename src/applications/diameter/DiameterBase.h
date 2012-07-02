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

    virtual DiameterMessage *processMessage(DiameterMessage *msg) {}

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
