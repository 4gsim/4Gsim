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

#include "DiameterSessionTable.h"
#include <algorithm>

DiameterSessionTable::DiameterSessionTable() {
	// TODO Auto-generated constructor stub

}

DiameterSessionTable::~DiameterSessionTable() {
	// TODO Auto-generated destructor stub
}

DiameterSession *DiameterSessionTable::find(std::string id) {
	for (unsigned i = 0; i < sessions.size(); i++) {
		if (sessions.at(i)->getId() == id)
			return sessions.at(i);
	}
	return NULL;
}

void DiameterSessionTable::erase(unsigned start, unsigned end) {
	SessionTable::iterator first = sessions.begin() + start;
	SessionTable::iterator last = sessions.begin() + end;
	SessionTable::iterator i = first;
	for (;i != last; ++i)
		delete *i;
	sessions.erase(first, last);
}
