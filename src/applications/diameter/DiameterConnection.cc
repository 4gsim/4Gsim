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

#include "DiameterConnection.h"
#include "DiameterPeer.h"
#include "DiameterBase.h"
#include "DiameterUtils.h"
#include "DiameterSerializer.h"

DiameterConnection::DiameterConnection(DiameterBase *module) {
	// TODO Auto-generated constructor stub
	this->module = module;
	peer = NULL;
	socket = NULL;
	ignore = true;
}

DiameterConnection::~DiameterConnection() {
	// TODO Auto-generated destructor stub
}

void DiameterConnection::socketEstablished(int32 connId, void *yourPtr, uint64 buffer) {
	if (type == INITIATOR) {
		PeerEvent event = I_RCV_CONN_ACK;
		peer->performStateTransition(event, NULL);
	}
}

void DiameterConnection::socketDataArrived(int32 connId, void *yourPtr, cPacket *msg, bool urgent) {

	EV << "Received message on Assoc Id = " << socket->getConnectionId() << endl;
	SCTPSimpleMessage* smsg = check_and_cast<SCTPSimpleMessage*>(msg);
	DiameterMessage *dmsg = DiameterSerializer().parse(smsg);
	DiameterHeader hdr = dmsg->getHdr();
	dmsg->print();
	DiameterPeer *newPeer = NULL;
	unsigned resCode = processOrigin(newPeer, dmsg);

	if (peer == NULL) {
		if ((hdr.getCommandCode() == CapabilitiesExchange) && (hdr.getReqFlag() == true)) {
			PeerEvent event = R_CONN_CER;
			if (resCode == DIAMETER_MISSING_AVP) {

			} else {
				if ((newPeer->getState() == R_OPEN)
						|| (newPeer->getState() == I_OPEN)
						|| (newPeer->getState() == WAIT_RETURNS)
						|| (newPeer->getState() == WAIT_CONN_ACK_ELECT)) {
					shutdown();
					newPeer->performStateTransition(event, dmsg);
					return;
				}
				newPeer->rConn = this;
				this->setPeer(newPeer);
				newPeer->performStateTransition(event, dmsg);
			}
		}
		return;
	}

	if (peer->getState() == WAIT_I_CEA) {
		if ((hdr.getCommandCode() != CapabilitiesExchange) || (hdr.getReqFlag() != false)) {
			PeerEvent event = I_RCV_NON_CEA;
			peer->performStateTransition(event, NULL);
			return;
		}
	}
	if (type == RESPONDER) {
		switch (hdr.getCommandCode()) {
		case CapabilitiesExchange: {
			PeerEvent event;
			event = hdr.getReqFlag() == true ? R_RCV_CER : R_RCV_CEA;
			peer->performStateTransition(event, dmsg);
			break;
		}
		case DeviceWatchdog: {
			PeerEvent event = hdr.getReqFlag() == true ? R_RCV_DWR : R_RCV_DWA;
			peer->performStateTransition(event, dmsg);
			break;
		}
		case DisconnectPeer: {
			PeerEvent event = hdr.getReqFlag() == true ? R_RCV_DPR : R_RCV_DPA;
			peer->performStateTransition(event, dmsg);
			break;
		}
		default:
			PeerEvent event = R_RCV_MESSAGE;
			peer->performStateTransition(event, dmsg);
			break;
		}
	} else {
		switch (hdr.getCommandCode()) {
		case CapabilitiesExchange: {
			PeerEvent event = hdr.getReqFlag() == true ? I_RCV_CER : I_RCV_CEA;
			peer->performStateTransition(event, dmsg);
			break;
		}
		case DeviceWatchdog: {
			PeerEvent event = hdr.getReqFlag() == true ? I_RCV_DWR : I_RCV_DWA;
			peer->performStateTransition(event, dmsg);
			break;
		}
		case DisconnectPeer: {
			PeerEvent event = hdr.getReqFlag() == true ? I_RCV_DPR : I_RCV_DPA;
			peer->performStateTransition(event, dmsg);
			break;
		}
		default:
			PeerEvent event = I_RCV_MESSAGE;
			peer->performStateTransition(event, dmsg);
			break;
		}
	}
}

void DiameterConnection::socketDataNotificationArrived(int32 connId, void *yourPtr, cPacket *msg) {
    SCTPCommand *ind = check_and_cast<SCTPCommand *>(msg->removeControlInfo());
    cPacket* cmsg = new cPacket();
    SCTPSendCommand *cmd = new SCTPSendCommand();
    cmd->setAssocId(ind->getAssocId());
    cmd->setSid(ind->getSid());
    cmd->setNumMsgs(ind->getNumMsgs());
    cmsg->setKind(SCTP_C_RECEIVE);
    cmsg->setControlInfo(cmd);
    delete ind;
    socket->sendNotification(cmsg);
}

void DiameterConnection::socketPeerClosed(int32 connId, void *yourPtr) {
	EV << "Peer socket closed (Assoc Id = " << socket->getConnectionId() << ")\n";
	if (peer != NULL) {
		PeerEvent event;
		if (type == INITIATOR) {
			event = I_PEER_DISC;
			peer->iConn = NULL;
		} else {
			event = R_PEER_DISC;
			peer->rConn = NULL;
		}
		if (peer->getState() != CLOSED)
			peer->performStateTransition(event, NULL);
		peer = NULL;
	}
	module->removeConnection(this);
}

void DiameterConnection::socketClosed(int32 connId, void *yourPtr) {
	EV << "Socket closed (Assoc Id = " << socket->getConnectionId() << ")\n";
	if (!ignore) {
		if (peer != NULL) {
			PeerEvent event;
			if ((peer->getState() == WAIT_CONN_ACK) || (peer->getState() == WAIT_CONN_ACK_ELECT))
				event = I_RCV_CONN_NACK;
			else
				event = type == INITIATOR ? I_PEER_DISC : R_PEER_DISC;
			if ((type == peer->getConnectionType()) && (peer->getState() != CLOSED))
				peer->performStateTransition(event, NULL);
			peer = NULL;
		}
		module->removeConnection(this); // connection cleanup
	}
	ignore = false;
}

void DiameterConnection::socketFailure(int32 connId, void *yourPtr, int32 code) {
//	EV << "failed\n";
	//peer->removeMe();
}

void DiameterConnection::send(DiameterMessage *msg, unsigned fqdnPos, unsigned realmPos) {

    cPacket* cmsg = new cPacket(msg->getName());
	msg->insertAvp(fqdnPos, DiameterUtils().createOctetStringAVP(AVP_OriginHost, 0, 1, 0, 0, peer->oFQDN.size(), peer->oFQDN.data()));
	msg->insertAvp(realmPos, DiameterUtils().createOctetStringAVP(AVP_OriginRealm, 0, 1, 0, 0, peer->oRealm.size(), peer->oRealm.data()));

    SCTPSimpleMessage* smsg = DiameterSerializer().serialize(msg);

    cmsg->encapsulate(smsg);
    cmsg->setKind(SCTP_C_SEND);

    //EV << "Diameter-" << moduleName << ": Sending Diameter Packet '" << cmsg->getName() << "' to lower layer\n";
    delete msg;		// all its content is in SCTPSimpleMessage
    socket->send(cmsg, true, true);

}

void DiameterConnection::connect() {
   	socket->connectx(addresses, port, 0);
}

unsigned DiameterConnection::processOrigin(DiameterPeer *&peer, DiameterMessage *msg) {
	AVP *fqdn = msg->findAvp(AVP_OriginHost);
	AVP *realm = msg->findAvp(AVP_OriginRealm);
	//DiameterPeer *peer = NULL;
	if ((fqdn == NULL) || (realm == NULL))
		return DIAMETER_MISSING_AVP;

	std::string dFQDN = DiameterUtils().processOctetStringAVP(fqdn);
	std::string dRealm = DiameterUtils().processOctetStringAVP(realm);

	//module->printPeerList();
	if ((peer = module->findPeer(dFQDN, dRealm)) != NULL) {
		return DIAMETER_PEER_FOUND;
	}
	if (this->peer == NULL)	{// only add another peer if this connection has no peer
		type = RESPONDER;
		peer = module->createPeer(dFQDN, dRealm, this);
	}
	return DIAMETER_SUCCESS;
}

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

