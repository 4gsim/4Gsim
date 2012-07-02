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

#ifndef DIAMETERCONNECTIONMAP_H_
#define DIAMETERCONNECTIONMAP_H_

#include "DiameterConnection.h"

class DiameterConnectionMap {
private:
	typedef std::map<int,DiameterConnection*> ConnMap;
	ConnMap connMap;
public:
	DiameterConnectionMap();
	virtual ~DiameterConnectionMap();

	DiameterConnection *findConnectionFor(cMessage *msg);
	void addConnection(DiameterConnection *conn);
	DiameterConnection *removeConnection(DiameterConnection *conn);
	unsigned int size() {return connMap.size();}
//	void deleteConnections();

	void printConnectionMap();
};

#endif /* DIAMETERCONNECTIONMAP_H_ */
