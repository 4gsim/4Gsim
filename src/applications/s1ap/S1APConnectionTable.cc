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

#include "S1APConnectionTable.h"
#include "LTEUtils.h"
#include "S1APUtils.h"

S1APConnectionTable::S1APConnectionTable() {
	// TODO Auto-generated constructor stub

}

S1APConnectionTable::~S1APConnectionTable() {
	// TODO Auto-generated destructor stub
	erase(0, conns.size());
}

S1APConnection *S1APConnectionTable::findConnectionForId(int connId) {
	for (unsigned i = 0; i < conns.size(); i++) {
		S1APConnection *conn = conns[i];
		if (conn->getConnectionId() == connId)
			return conn;
	}
	return NULL;
}

S1APConnection *S1APConnectionTable::findConnectionForCellId(char *cellId) {
	if (cellId == NULL)
		return NULL;
	for (unsigned i = 0; i < conns.size(); i++) {
		S1APConnection *conn = conns[i];
		if (!strncmp(conn->getCellId(), cellId, CELLID_CODED_SIZE))
			return conn;
	}
	return NULL;
}

S1APConnection *S1APConnectionTable::findConnectionForState(int state) {
	for (unsigned i = 0; i < conns.size(); i++) {
		S1APConnection *conn = conns[i];
		if (conn->getState() == state)
			return conn;
	}
	return NULL;
}

void S1APConnectionTable::erase(unsigned start, unsigned end) {
	ConnTable::iterator first = conns.begin() + start;
	ConnTable::iterator last = conns.begin() + end;
	ConnTable::iterator i = first;
	for (;i != last; ++i)
		delete *i;
	conns.erase(first, last);
}

//void S1APConnectionTable::printTable() {
//	EV << "==================================\n"
//	   << "S1AP Connection Table:{\n";
//	for (unsigned i = 0; i < conns.size(); i++) {
//		S1APConnection *conn = conns.at(i);
//		EV << "  Connection nr. " << conn->getConnectionId() << ": {\n";
//		EV << "    PLMN id: "; LTEUtils().printBytes(conn->getPlmnId(), PLMNID_CODED_SIZE);
//		EV << "    Cell Id: "; LTEUtils().printBytes(conn->getCellId(), CELLID_CODED_SIZE);
//		EV << "      SupportedTas: {\n";
//		std::vector<SupportedTaItem*>suppTas = conn->getSupportedTas();
//		for (unsigned j = 0; j < suppTas.size(); j++) {
//			EV << "      SupportedTa nr. " << j << ": {\n";
//			EV << "        TAC: "; LTEUtils().printBytes((suppTas.at(j))->tac, TAC_CODED_SIZE);
//			EV << "        Broadcast PLMNs: {\n";
//			std::vector<char*>bplmns = (suppTas.at(j))->bplmns;
//			for (unsigned k = 0; k < bplmns.size(); k++) {
//				EV << "          Broadcast PLMN nr. " << k << ": "; LTEUtils().printBytes(bplmns.at(k), PLMNID_CODED_SIZE);
//			}
//			EV << "        }\n      }\n";
//		}
//		EV << "    }\n";
//	}
//	EV << "  }\n}\n";
//	EV << "==================================\n";
//
//}
