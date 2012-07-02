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

#ifndef DIAMETERSESSIONTABLE_H_
#define DIAMETERSESSIONTABLE_H_

#include "DiameterSession.h"

class DiameterSessionTable {
private:
	typedef std::vector<DiameterSession*> SessionTable;
	SessionTable sessions;
public:
	DiameterSessionTable();
	virtual ~DiameterSessionTable();

	DiameterSession *find(std::string id);
	DiameterSession *at(unsigned i) { return sessions.at(i); }
	void push_back(DiameterSession *session) { sessions.push_back(session); }
	void erase(unsigned start, unsigned end);
	unsigned size() {return sessions.size();}
//	void deleteSessions();
};

#endif /* DIAMETERSESSIONTABLE_H_ */
