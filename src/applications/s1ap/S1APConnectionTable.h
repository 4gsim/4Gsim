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

#ifndef S1APPEERTABLE_H_
#define S1APPEERTABLE_H_

#include "S1APConnection.h"

class S1APConnectionTable {
private:
	typedef std::vector<S1APConnection*> ConnTable;
	ConnTable conns;
public:
	S1APConnectionTable();
	virtual ~S1APConnectionTable();

	S1APConnection *findConnectionForId(int connId);
	S1APConnection *findConnectionForCellId(char *cellId);
	S1APConnection *findConnectionForState(int state);
	S1APConnection *at(unsigned i) { return conns.at(i); }
	void push_back(S1APConnection *conn) { conns.push_back(conn); }
	void erase(unsigned start, unsigned end);
	void clear() { conns.clear(); }
	unsigned int size() {return conns.size();}
//	void printTable();
};

#endif /* S1APPEERTABLE_H_ */
