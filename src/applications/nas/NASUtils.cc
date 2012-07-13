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

#include "NASUtils.h"
#include "NASSerializer.h"
#include "LTEUtils.h"

NASUtils::NASUtils() {
	// TODO Auto-generated constructor stub

}

NASUtils::~NASUtils() {
	// TODO Auto-generated destructor stub
}

NASHeader NASUtils::createHeader(unsigned char epsBearerId, unsigned char secHdrType, unsigned char protDiscr, unsigned char procTransId, unsigned char msgType) {
	NASHeader hdr = NASHeader();
	hdr.setEpsBearerId(epsBearerId);
	hdr.setSecHdrType(secHdrType);
	hdr.setProtDiscr(protDiscr);
	hdr.setProcTransId(procTransId);
	hdr.setMsgType(msgType);
	hdr.setLength(protDiscr == ESMMessage ? NAS_ESM_HEADER_SIZE : NAS_EMM_HEADER_SIZE);
	return hdr;
}


NASInfoElem NASUtils::createIE(unsigned char format, unsigned char ieType, unsigned char type, char value) {
	NASInfoElem ie = NASInfoElem();
	ie.setFormat(format);
	ie.setIeType(ieType);
	ie.setType(type);
	ie.setValueArraySize(1);
	ie.setValue(0, value);
	return ie;
}

NASInfoElem NASUtils::createIE(unsigned char format, unsigned char ieType, unsigned char type, unsigned short length, const char *value) {
	NASInfoElem ie = NASInfoElem();
	ie.setFormat(format);
	ie.setIeType(ieType);
	ie.setType(type);
	ie.setValueArraySize(length);
	for (unsigned i = 0; i < length; i++)
		ie.setValue(i, value[i]);
	return ie;
}

//NASInfoElem NASUtils::createIE(unsigned char format, unsigned char ieType, unsigned short length) {
//	NASInfoElem ie = NASInfoElem();
//	ie.setFormat(format);
//	ie.setIeType(ieType);
//	ie.setValueArraySize(length);
//	return ie;
//}

NASInfoElem NASUtils::createEPSMobileIdIE(unsigned char format, unsigned char typeOfId, char *id) {
	char *epsMobileId;
	unsigned short length;
	if (typeOfId == IMSI_ID) {
		bool odd = ((id[1] & 0xf0) == 0xf0);
		length = odd ? IMSI_CODED_SIZE : IMSI_CODED_SIZE + 1;
		epsMobileId = (char*)calloc(length, sizeof(char));
		epsMobileId[0] = (odd ? 0x08 : 0) + typeOfId;
		if (odd) {
			epsMobileId[0] += ((unsigned char)id[0] << 4);
			epsMobileId[1] = ((unsigned char)id[0] >> 4) + ((unsigned char)id[1] << 4);
			memcpy(epsMobileId + 2, id + 2, IMSI_CODED_SIZE - 2);
		} else {
			unsigned j = 1;
			unsigned l = 0;
			unsigned k = 0;
			for (unsigned i = 0; i < length; i += k % 2) {
				epsMobileId[i] += (k % 2) ? ((unsigned char)(id[l] & ((j % 2) ? 0x0f : 0xf0)) >> 4) : ((unsigned char)(id[l] & ((j % 2) ? 0x0f : 0xf0)) << 4);
				j++;
				k++;
				l += j % 2;
			}
			epsMobileId[l] += 0xf0;
		}
	}
	return createIE(format, IEType4, EPSMobileId, length, epsMobileId);
}

char *NASUtils::processIE(NASInfoElem ie) {
	char *value = (char*)calloc(ie.getValueArraySize(), sizeof(char));
	for (unsigned i = 0; i < ie.getValueArraySize(); i++)
		value[i] = ie.getValue(i);
	return value;
}

unsigned NASUtils::processEPSMobileIdIE(NASInfoElem ie, char *&id) {
	char *value = processIE(ie);
	unsigned char typeOfId = value[0] & 0x07;
	bool odd = value[0] & 0x08;
	unsigned short length;
	if (typeOfId == IMSI_ID) {
		length = IMSI_CODED_SIZE;
		id = (char*)calloc(length, sizeof(char));
		if (odd) {
			id[0] = ((value[0] >> 4) & 0x0f) + ((value[1] << 4) & 0xf0);
			id[1] = ((value[1] >> 4) & 0x0f) + 0xf0;
			memcpy(id + 2, value + 2, IMSI_CODED_SIZE - 2);
		} else {
			for (unsigned i = 0; i < length; i++) {
				id[i] += ((value[i] >> 4) & 0x0f) + ((value[i + 1] << 4) & 0xf0);
			}
		}
	}
	return length;
}

bool NASUtils::parseAttachRequest(NASPlainMessage *msg, char *buf) {
	char *p = buf;
	msg->setIesArraySize(5);
	NASSerializer parser = NASSerializer();

	/* NAS key set identifier */
	msg->setIes(0, parser.parseIE(p, IE_V, IEType1));
	p += parser.skip;

	/* EPS attach type */
	msg->setIes(1, parser.parseIE(p, IE_V, IEType1));
	p += parser.skip;

	/* EPS mobile identity */
	msg->setIes(2, parser.parseIE(p, IE_LV, IEType4));
	p += parser.skip;

	/* UE network capability */
	msg->setIes(3, parser.parseIE(p, IE_LV, IEType4));
	p += parser.skip;

	/* ESM message container */
	msg->setIes(4, parser.parseIE(p, IE_LVE, IEType6));
	p += parser.skip;

	buf = NASUtils().processIE(msg->getIes(4));
	p = buf;
	NASPlainMessage *smsg = new NASPlainMessage();
	NASHeader hdr = NASSerializer().parseHeader(p);
	if (!hdr.getLength()) {
		EV << "NAS: Message decoding error. Dropping message.\n";
		return false;
	}
	p += hdr.getLength();
	smsg->setHdr(hdr);

	if (smsg->getHdr().getMsgType() == PDNConnectivityRequest) {
		smsg->setName("PDN-Connectivity-Request");
		NASUtils().parsePDNConnectivityRequest(smsg, p);
		msg->encapsulate(smsg);
	} else {
		delete smsg;
	}
	return true;
}

void NASUtils::parsePDNConnectivityRequest(NASPlainMessage *msg, char *buf) {
	char *p = buf;
	msg->setIesArraySize(2);
	NASSerializer parser = NASSerializer();

	/* PDN type */
	msg->setIes(0, parser.parseIE(p, IE_V, IEType1));
	p += parser.skip;

	/* Request type */
	msg->setIes(1, parser.parseIE(p, IE_V, IEType1));
	p += parser.skip;
}

bool NASUtils::parseAttachAccept(NASPlainMessage *msg, char *buf) {
	char *p = buf;
	msg->setIesArraySize(5);
	NASSerializer parser = NASSerializer();

	/* EPS attach result */
	msg->setIes(0, parser.parseIE(p, IE_V, IEType1));
	p += parser.skip;

	/* Spare half octet */
	msg->setIes(1, parser.parseIE(p, IE_V, IEType1));
	p += parser.skip;

	/* T3412 value */
	msg->setIes(2, parser.parseIE(p, IE_V, IEType3, 1));
	p += parser.skip;

	/* TAI list */
	msg->setIes(3, parser.parseIE(p, IE_LV, IEType4));
	p += parser.skip;

	/* ESM message container */
	msg->setIes(4, parser.parseIE(p, IE_LVE, IEType6));
	p += parser.skip;

	buf = NASUtils().processIE(msg->getIes(4));
	p = buf;
	NASPlainMessage *smsg = new NASPlainMessage();
	NASHeader hdr = NASSerializer().parseHeader(p);
	if (!hdr.getLength()) {
		EV << "NAS: Message decoding error. Dropping message.\n";
		return false;
	}
	p += hdr.getLength();
	smsg->setHdr(hdr);

	if (smsg->getHdr().getMsgType() == ActDefEPSBearerCtxtReq) {
		smsg->setName("Activate-Default-Bearer-Request");
		NASUtils().parseActDefBearerRequest(smsg, p);
		msg->encapsulate(smsg);
	} else {
		delete smsg;
	}

	return true;
}

void NASUtils::parseActDefBearerRequest(NASPlainMessage *msg, char *buf) {
	char *p = buf;
	msg->setIesArraySize(3);
	NASSerializer parser = NASSerializer();

	/* EPS QoS */
	msg->setIes(0, parser.parseIE(p, IE_LV, IEType4));
	p += parser.skip;

	/* APN */
	msg->setIes(1, parser.parseIE(p, IE_LV, IEType4));
	p += parser.skip;

	/* PDN address */
	msg->setIes(2, parser.parseIE(p, IE_LV, IEType4));
}

bool NASUtils::parseAttachReject(NASPlainMessage *msg, char *buf) {
	char *p = buf;
	msg->setIesArraySize(1);
	NASSerializer parser = NASSerializer();

	/* T3412 value */
	msg->setIes(0, parser.parseIE(p, IE_V, IEType3, 1));
	p += parser.skip;

	/* ESM message container */
//	msg->setIes(0, parser.parseIE(p, IE_LVE, IEType6));
//	p += parser.skip;
//
//	buf = NASUtils().processIE(msg->getIes(0));
//	p = buf;
//	NASPlainMessage *smsg = new NASPlainMessage();
//	NASHeader hdr = NASSerializer().parseHeader(p);
//	if (!hdr.getLength()) {
//		EV << "NAS: Message decoding error. Dropping message.\n";
//		return false;
//	}
//	p += hdr.getLength();
//	smsg->setHdr(hdr);
//
//	if (smsg->getHdr().getMsgType() == ActDefEPSBearerCtxtAcc) {
//		smsg->setName("Activate-Default-Bearer-Request");
//		NASUtils().parseActDefBearerAccept(smsg, p);
//		msg->encapsulate(smsg);
//	} else {
//		delete smsg;
//	}

	return true;
}

bool NASUtils::parseAttachComplete(NASPlainMessage *msg, char *buf) {
	char *p = buf;
	msg->setIesArraySize(1);
	NASSerializer parser = NASSerializer();

	/* ESM message container */
	msg->setIes(0, parser.parseIE(p, IE_LVE, IEType6));
	p += parser.skip;

	buf = NASUtils().processIE(msg->getIes(0));
	p = buf;
	NASPlainMessage *smsg = new NASPlainMessage();
	NASHeader hdr = NASSerializer().parseHeader(p);
	if (!hdr.getLength()) {
		EV << "NAS: Message decoding error. Dropping message.\n";
		return false;
	}
	p += hdr.getLength();
	smsg->setHdr(hdr);

	if (smsg->getHdr().getMsgType() == ActDefEPSBearerCtxtAcc) {
		smsg->setName("Activate-Default-Bearer-Request");
		NASUtils().parseActDefBearerAccept(smsg, p);
		msg->encapsulate(smsg);
	} else {
		delete smsg;
	}

	return true;
}

void NASUtils::printMessage(NASPlainMessage *msg) {
	NASHeader hdr = msg->getHdr();
	EV << "===================================================\n";
	EV << "NASMessage:\n";
	if ((hdr.getMsgType() & 0xc0) == 0xc0)
		EV << "EPSBearerId: " << (unsigned)hdr.getEpsBearerId() << endl;
	if ((hdr.getMsgType() & 0x80) == 0x80)
		EV << "SecHdrType: " << (unsigned)hdr.getSecHdrType() << endl;
	EV << "ProtDiscr: " << (unsigned)hdr.getProtDiscr() << endl;
	if ((hdr.getMsgType() & 0xc0) == 0xc0)
		EV << "ProcTransId: " << (unsigned)hdr.getProcTransId() << endl;
	EV << "MsgType: " << (unsigned)hdr.getMsgType() << endl;
	for (unsigned i = 0; i < msg->getIesArraySize(); i++) {
		NASInfoElem ie = msg->getIes(i);
		EV << "NASInfoElem nr. " << i << ": ";
	    char str[ie.getValueArraySize() * 3 + 1];
	    int k = 0;
		for (unsigned j = 0; j < ie.getValueArraySize(); j++, k += 3)
			sprintf(&str[k], " %02x ", (unsigned char)ie.getValue(j));
	    str[ie.getValueArraySize() * 3] = '\0';
	    EV << str << endl;
	}
	EV << "===================================================\n";
}
