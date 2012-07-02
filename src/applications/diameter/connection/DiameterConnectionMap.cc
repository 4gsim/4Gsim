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

#include "DiameterConnectionMap.h"

DiameterConnectionMap::DiameterConnectionMap() {
	// TODO Auto-generated constructor stub

}

DiameterConnectionMap::~DiameterConnectionMap() {
	// TODO Auto-generated destructor stub
}

DiameterConnection *DiameterConnectionMap::findConnectionFor(cMessage *msg) {
    SCTPCommand *ind = dynamic_cast<SCTPCommand *>(msg->getControlInfo());
    if (!ind)
        opp_error("DiameterConnectionMap: findConnectionFor(): no SCTPCommand control info in message (not from SCTP?)");
    int assocId = ind->getAssocId();
    ConnMap::iterator i = connMap.find(assocId);
    ASSERT(i == connMap.end() || i->first == i->second->getConnectionId());
    return (i == connMap.end()) ? NULL : i->second;
}

void DiameterConnectionMap::addConnection(DiameterConnection *conn) {
    ASSERT(connMap.find(conn->getConnectionId()) == connMap.end());
    connMap[conn->getConnectionId()] = conn;
}

DiameterConnection *DiameterConnectionMap::removeConnection(DiameterConnection *conn) {
    ConnMap::iterator i = connMap.find(conn->getConnectionId());
    if (i != connMap.end())
        connMap.erase(i);
    printConnectionMap();
    return conn;
}
/*
void DiameterConnectionMap::deleteConnections()
{
    for (ConnMap::iterator i = connMap.begin(); i != connMap.end(); ++i)
       delete i->second;
}
*/
void DiameterConnectionMap::printConnectionMap() {
	EV << "=====================================================================\n"
	   << "Connection Map:\n"
	   << "-------------------------------------------------------------------------------\n"
	   << "Conn Id\t| Local Addr\t| Local Port\t| Remote Addr\t| Remote Port\n"
	   << "---------------------------------------------------------------------\n";
	for (ConnMap::iterator i = connMap.begin(); i != connMap.end(); ++i)
		EV << (i->second)->getConnectionId() << endl;// << "\t| " << (i->second)->getLocalAddresses().at(0) << "\t| " << "" << "\t| " << "" << "\t| " << "" << endl;
	EV << "=====================================================================\n";
}

