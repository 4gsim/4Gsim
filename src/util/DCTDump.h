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

//struct dct2000_hdr {
//    const char *ctxt_name;
//    uint8 port_nr;
//    const char *timestamp;
//    const char *prot_name;
//    const char *prot_var;
//    const char *out_hdr;
//    uint8 direct;
//    uint8 encap;
//};

class DCTDump : public TCPDump {
private:
    const char *timestamp(simtime_t stime);
public:
    DCTDump();
    virtual ~DCTDump();

    virtual void handleMessage(cMessage *msg);
    virtual void initialize();
    virtual void finish();
};

#endif /* DCTDUMP_H_ */
