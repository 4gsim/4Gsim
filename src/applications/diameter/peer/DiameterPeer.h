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

#ifndef DIAMETERPEER_H_
#define DIAMETERPEER_H_

#include "DiameterMessage.h"
#include "DiameterConnection.h"
#include "DiameterApplication.h"

#define TC_TIMER_TIMEOUT	1
#define TW_TIMER_TIMEOUT	30
#define TS_TIMER_TIMEOUT	10
#define TE_TIMER_TIMEOUT	30

#define EPHEMERAL_PORT_MIN	32768
#define EPHEMERAL_PORT_MAX	61000

#define STATIC	0
#define DYNAMIC	1

enum PeerState {
	CLOSED 					= FSM_Steady(0),
	WAIT_CONN_ACK 			= FSM_Steady(1),
	WAIT_I_CEA 				= FSM_Steady(2),
	WAIT_CONN_ACK_ELECT 	= FSM_Steady(3),
	WAIT_RETURNS 			= FSM_Steady(4),
	R_OPEN 					= FSM_Steady(5),
	I_OPEN 					= FSM_Steady(6),
	CLOSING 				= FSM_Steady(7)
};

enum PeerEvent {
    START,
    R_CONN_CER,
    I_RCV_CONN_ACK,
    I_RCV_CONN_NACK,
    TIMEOUT,
    R_RCV_CER,
    I_RCV_CER,
    I_RCV_CEA,
    R_RCV_CEA,
    I_RCV_NON_CEA,
    I_PEER_DISC,
    R_PEER_DISC,
    R_RCV_DPR,
    I_RCV_DPR,
    R_RCV_DPA,
    I_RCV_DPA,
    WIN_ELECTION,
    SEND_MESSAGE,
    R_RCV_MESSAGE,
    I_RCV_MESSAGE,
    R_RCV_DWR,
    I_RCV_DWR,
    I_RCV_DWA,
    R_RCV_DWA,
    STOP
};

class DiameterPeerStateVariables : public cPolymorphic {
public:
	DiameterPeerStateVariables();
	DiameterMessage *msg;			// for inter state message handling
};

class DiameterPeer : public cPolymorphic {
private:
	bool type;
	bool isTLSEnabled;
	DiameterBase *module;
	cFSM fsm;
public:
	std::string dFQDN;
	std::string oFQDN;
	std::string dRealm;
	std::string oRealm;
	DiameterApplication *appl;
	DiameterConnection *iConn;
	DiameterConnection *rConn;
    cMessage *tcTimer;
    cMessage *twTimer;	// watchdog
    cMessage *tsTimer; 	// test timer
    cMessage *teTimer;	// connection expire timer
private:
    DiameterPeerStateVariables *state;

	void sendCER(DiameterConnection *conn);
	unsigned processCER(DiameterMessage *msg);
	void sendCEA(DiameterConnection *conn, DiameterMessage *cer, unsigned resCode);
	unsigned processCEA(DiameterMessage *msg);
	void sendDWR(DiameterConnection *conn);
	unsigned processDWR(DiameterMessage *msg);
	void sendDWA(DiameterConnection *conn, DiameterMessage *dwr, unsigned resCode);
	unsigned processDWA(DiameterMessage *msg);
	void sendDPR(DiameterConnection *conn);
	void sendDPA(DiameterConnection *conn, DiameterMessage *dpr);

	const char *stateName(int state);
	const char *eventName(int event);
public:
	DiameterPeer(DiameterBase *module);
	virtual ~DiameterPeer();

	void iDisconnect();
	void rDisconnect();
	void cleanup();
	void error() { cleanup(); }
	void elect();

 	DiameterConnection *getIConnection() { return iConn; }
 	DiameterConnection *getRConnection() { return rConn; }

 	bool getType() { return type; }
 	const char *getTypeName() { if (type == STATIC) return "STATIC"; else return "DYNAMIC"; }
 	void setType(bool type) { this->type = type; }
 	bool getConnectionType();
 	int getConnectionId() { if (rConn == NULL) return iConn->getConnectionId(); else return rConn->getConnectionId(); }

 	int getState() { return fsm.getState(); }
 	const char *getStateName() { return stateName(fsm.getState()); }

 	void processTimer(cMessage *timer);

 	void performStateTransition(PeerEvent &event, DiameterMessage *msg);
 	void stateEntered();

 	void startTimer(cMessage *&timer, const char *name, simtime_t timeout);
 	void sendApplMessage(DiameterConnection *conn, DiameterMessage *msg);
 	void processApplMessage(DiameterConnection *conn, DiameterMessage *msg);
};

#endif /* DIAMETERPEER_H_ */
