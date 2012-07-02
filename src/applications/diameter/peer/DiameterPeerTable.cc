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

#include "DiameterPeerTable.h"

DiameterPeerTable::DiameterPeerTable() {
	// TODO Auto-generated constructor stub

}

DiameterPeerTable::~DiameterPeerTable() {
	// TODO Auto-generated destructor stub
}

DiameterPeer *DiameterPeerTable::findPeer(std::string dFQDN, std::string dRealm) {
	if (dRealm == "") {
		for (unsigned i = 0; i < peers.size(); i++) {
			DiameterPeer *peer = peers[i];
			if ((peer->dFQDN.find(dFQDN)) != std::string::npos)
				return peer;
		}
	} else {
		for (unsigned i = 0; i < peers.size(); i++) {
			DiameterPeer *peer = peers[i];
			if ((peer->dFQDN == dFQDN) && (peer->dRealm == dRealm))
				return peer;
		}
	}
	return NULL;
}

DiameterPeer *DiameterPeerTable::findPeer(unsigned applId) {
	for (unsigned i = 0; i < peers.size(); i++) {
		DiameterPeer *peer = peers[i];
		if (peer->appl->applId == applId)
			return peer;
	}
	return NULL;
}

void DiameterPeerTable::erase(unsigned start, unsigned end) {
	PeerTable::iterator first = peers.begin() + start;
	PeerTable::iterator last = peers.begin() + end;
	PeerTable::iterator i = first;
	for (;i != last; ++i)
		delete *i;
	peers.erase(first, last);
}

void DiameterPeerTable::print() {
	EV << "=====================================================================\n"
	   << "Diameter Peer Table:\n";
	for (unsigned int i = 0; i < peers.size(); i++) {
		EV << "DiameterPeer nr. " << i << ":{\n";
		DiameterPeer *peer = peers.at(i);
		EV << "\torigFQDN:" << peer->oFQDN << endl;
		EV << "\tdestFQDN:" << peer->dFQDN << endl;
		EV << "\tstate:" << peer->getStateName() << endl;
		if (peer->appl) {
			EV << "\tappl:{\n";
			EV << "\t\tapplId:" << peer->appl->applId << endl;
			EV << "\t\tvendorId:" << peer->appl->vendorId << endl;
			EV << "}\n";
		}
		EV << "}\n";
	}
	EV << "=====================================================================\n";
}
