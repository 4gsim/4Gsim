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

#ifndef DCTDUMP_H_
#define DCTDUMP_H_

#include <omnetpp.h>
#include "TCPDump.h"

#define RECEIVED    1
#define SENT        0

#define RAW_IP      7

#define MAX_FIRST_LINE_LENGTH      200
#define MAX_TIMESTAMP_LINE_LENGTH  100
#define MAX_LINE_LENGTH            65536
#define MAX_TIMESTAMP_LEN          32
#define MAX_SECONDS_CHARS          16
#define MAX_SUBSECOND_DECIMALS     4
#define MAX_CONTEXT_NAME           64
#define MAX_PROTOCOL_NAME          64
#define MAX_PORT_DIGITS            2
#define MAX_VARIANT_DIGITS         32
#define MAX_OUTHDR_NAME            256
#define AAL_HEADER_CHARS           12

/*
 * out file:
 *  - first line at least "Session Transcript"
 *  - second line, timestamp "February 21, 2006     16:45:20.5186"
 *  - packet:
 *      - context name "test_ETSI" followed by '.'
 *      - port number "1" followed by '/'
 *      - protocol name "isdn_l3" followed by '/'
 *      - protocol variant "1" followed by ',' if outhdr is present else followed by '/'
 *      - direction " s"
 *      - timestamp " tm 17.1505 "
 *      - start of dump "$"
 *      - dump of packet in ascii format (0x03 -> 0x30 0x33)
 *      - new line after each dump
 */

class DCTDump : public TCPDump {
private:
    const char *timestamp(simtime_t stime);
    void dumpPacket(uint8 *buf, int32 len);
public:
    DCTDump();
    virtual ~DCTDump();

    virtual void handleMessage(cMessage *msg);
    virtual void initialize();
    virtual void finish();
};

#endif /* DCTDUMP_H_ */
