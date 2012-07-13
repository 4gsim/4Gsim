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

#ifndef ESMENTITY_H_
#define ESMENTITY_H_

#include <omnetpp.h>
#include "PDNConnection.h"
#include "NASMessage_m.h"

class Subscriber;
class EMMEntity;
class NAS;

class ESMEntity {
private:
	unsigned connIds;
	unsigned char bearerIds;
	unsigned char appType;
	Subscriber *ownerp;
	PDNConnection *defConn;
	typedef std::vector<PDNConnection*> PDNConnections;
	PDNConnections conns;
	NAS *module;
	EMMEntity *peer;
public:
	ESMEntity();
	ESMEntity(unsigned char appType);
	virtual ~ESMEntity();

	/* init */
	void init();

	/* setter */
	void setOwner(Subscriber *owernp);
	void setDefPDNConnection(PDNConnection *defConn) { this->defConn = defConn; }
	void setPeer(EMMEntity *peer);
	void setModule(NAS *module);

	/* getter */
	Subscriber *getOwner();
	unsigned char getAppType() { return appType; }
	PDNConnection *getDefPDNConnection() { return defConn; }
	EMMEntity *getPeer();
	unsigned size() { return conns.size(); }

	/* pdn connection */
	void addPDNConnection(PDNConnection *conn, bool def);
	void delPDNConnection(unsigned start, unsigned end);

	/* gen bearer ids */
	unsigned char genBearerId() { return ++bearerIds; }
	unsigned genPDNConnectionId() { return ++connIds; }

	/* diameter avp */
	AVP *createAPNConfigProfAVP();
	bool processAPNConfigProfAVP(AVP *apnConfigProf);

	std::string info(int tabs) const;
};

#endif /* ESMENTITY_H_ */
