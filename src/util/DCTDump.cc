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

#include "DCTDump.h"

#define MAXBUFLENGTH 65536
#define MAXDCTLENGTH 100

Define_Module(DCTDump)

DCTDump::DCTDump() {
    // TODO Auto-generated constructor stub

}

DCTDump::~DCTDump() {
    // TODO Auto-generated destructor stub
}

void DCTDump::initialize() {
    const char* file = this->par("dumpFile");
    char begin_hdr[] = { 0x53, 0x65, 0x73, 0x73, 0x69, 0x6F, 0x6E, 0x20, 0x54, 0x72, 0x61, 0x6E, 0x73, 0x63, 0x72, 0x69,
            0x70, 0x74, 0x20, 0x28, 0x66, 0x6F, 0x72, 0x6D, 0x61, 0x74, 0x20, 0x33, 0x2E, 0x31, 0x2C, 0x20,
            0x72, 0x65, 0x6C, 0x65, 0x61, 0x73, 0x65, 0x20, 0x31, 0x30, 0x2E, 0x36, 0x20, 0x6F, 0x6E, 0x20,
            0x75, 0x6B, 0x65, 0x6E, 0x67, 0x37, 0x2C, 0x20, 0x4C, 0x69, 0x6E, 0x75, 0x78, 0x20, 0x32, 0x2E,
            0x36, 0x2E, 0x38, 0x2D, 0x32, 0x34, 0x2D, 0x73, 0x6D, 0x70, 0x20, 0x69, 0x36, 0x38, 0x36, 0x29,
            0x0A, 0x46, 0x65, 0x62, 0x72, 0x75, 0x61, 0x72, 0x79, 0x20, 0x32, 0x31, 0x2C, 0x20, 0x32, 0x30,
            0x30, 0x36, 0x20, 0x20, 0x20, 0x20, 0x20, 0x31, 0x36, 0x3A, 0x34, 0x35, 0x3A, 0x32, 0x30, 0x2E,
            0x35, 0x31, 0x38, 0x35, 0x0A };
    if (strcmp(file,"")!=0)
    {
        tcpdump.dumpfile = fopen(file, "wb");
        if (!tcpdump.dumpfile)
        {
            fprintf(stderr, "Cannot open file [%s] for writing: %s\n", file, strerror(errno));
            exit(-1);
        }

        fwrite(&begin_hdr, sizeof(begin_hdr), 1, tcpdump.dumpfile);
    }
    else
        tcpdump.dumpfile = NULL;

}

void DCTDump::handleMessage(cMessage *msg) {
    bool write = false;
    if (tcpdump.dumpfile != NULL) {
        const simtime_t stime = simulation.getSimTime();
        std::stringstream vers;
        const char *time = timestamp(stime);
        uint8 buf[MAXBUFLENGTH];
        char dh[MAXDCTLENGTH];
        struct pcaprec_hdr ph;
        char *p = dh;

        // Write pcap header
        ph.ts_sec = (int32)stime.dbl();
        ph.ts_usec = (uint32)((stime.dbl() - ph.ts_sec)*1000000);

        // Write dct2000 header
        memset((void*)&dh, 0, sizeof(dh));

        // context
        IPDatagram *ipPacket = dynamic_cast<IPDatagram*>(msg);
        if (ipPacket) {
            if (ipPacket->getTransportProtocol()==IP_PROT_SCTP) {
                strncpy(p, "SCTP", 4);
                p += 5;
            }
            write = true;
        }

        // context port number
        *p = 1;
        p++;

        // timestamp
        strncpy(p, time, strlen(time));
        p += strlen(time) + 1;

        // protocol
        if (ipPacket) {
            vers << ipPacket->getVersion();
            // protocol name
            strncpy(p, "ip", 2);
            p += 3;
            //protocol version
            strncpy(p, vers.str().c_str(), strlen(vers.str().c_str()));
            p += strlen(vers.str().c_str()) + 1;
        }

        // direction
        if (msg->getArrivalGate()->isName("ifIn"))
            *p = RECEIVED;
        else
            *p = SENT;
        p++;

        // encapsulation
        if (ipPacket) {
            *p = RAW_IP;
            p++;
        }

        memset((void*)&buf, 0, sizeof(buf));

        ph.incl_len = p - dh;
        ph.orig_len = ph.incl_len;

        //fwrite(&ph, sizeof(ph), 1, tcpdump.dumpfile);
        if (write) {
            fwrite(&dh, p - dh, 1, tcpdump.dumpfile);
        }
    }
    // forward
    int index = msg->getArrivalGate()->getIndex();
    int32 id = -1;
    if (msg->getArrivalGate()->isName("ifIn"))
        id = findGate("netOut",index);
    else
        id = findGate("ifOut",index);

    send(msg, id);
}

const char *DCTDump::timestamp(simtime_t stime) {
    std::stringstream out;
    out << (int32)stime.dbl();
    out << ".";
    out << (uint32)((stime.dbl() - (int32)stime.dbl())*1000000);
    return out.str().c_str();
}

void DCTDump::finish()
{
     if (strcmp(this->par("dumpFile"),"")!=0) {
         char end_hdr[] = {0x0A,
                 0x41, 0x2E, 0x31, 0x2F, 0x70, 0x70, 0x70, 0x2F, 0x31, 0x2F, 0x2F, 0x2F, 0x20, 0x73, 0x20, 0x74,
                 0x6D, 0x20, 0x32, 0x30, 0x2E, 0x31, 0x34, 0x31, 0x31, 0x20, 0x6C, 0x20, 0x24, 0x66, 0x66, 0x30,
         };
         fwrite(&end_hdr, sizeof(end_hdr), 1, tcpdump.dumpfile);
         fclose(tcpdump.dumpfile);
     }
}




