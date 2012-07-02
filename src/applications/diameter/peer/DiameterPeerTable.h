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

#ifndef DIAMETERPEERTABLE_H_
#define DIAMETERPEERTABLE_H_

#include "DiameterPeer.h"

class DiameterPeerTable {
private:
    typedef std::vector<DiameterPeer*>PeerTable;
    PeerTable peers;
public:
	DiameterPeerTable();
	virtual ~DiameterPeerTable();

    void push_back(DiameterPeer *peer) { peers.push_back(peer); }
    void erase(unsigned start, unsigned end);
    void print();
    DiameterPeer *findPeer(std::string dFQDN, std::string dRealm = "");
    DiameterPeer *findPeer(unsigned applId);
    DiameterPeer *at(unsigned i) { return peers[i]; }

    unsigned size() { return peers.size(); }
};

#endif /* DIAMETERPEERTABLE_H_ */
