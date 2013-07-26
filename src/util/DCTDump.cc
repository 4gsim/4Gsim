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

#include <errno.h>
#include "DCTDump.h"
//#include "MACSerializer.h"

#ifdef WITH_IPv4
#include "IPv4Datagram.h"
#include "IPv4Serializer.h"
#endif

#define MAXBUFLENGTH 65536
#define MAXDCTLENGTH 100

Define_Module(DCTDump);

DCTDump::DCTDump() {
    // TODO Auto-generated constructor stub
    dumpfile = NULL;
}

DCTDump::~DCTDump() {
    // TODO Auto-generated destructor stub
}

void DCTDump::openTrace(const char* filename) {
    const char *first_line = "Session Transcript\n";

    // TODO Real timestamp
    const char *second_line = "February 21, 2006     16:45:20.5186\n";
    if (strcmp(filename, "")!=0)
    {
        dumpfile = fopen(filename, "wb");
        if (!dumpfile)
        {
            fprintf(stderr, "Cannot open file [%s] for writing: %s\n", filename, strerror(errno));
            exit(-1);
        }

        fwrite(first_line, 19, 1, dumpfile);
        fwrite(second_line, 36, 1, dumpfile);
    }
}

void DCTDump::readPacket(simtime_t stime, const cPacket *pkt) {

}

std::string DCTDump::timestamp(simtime_t stime) {
    std::string out;

    out = stime.str();
    if (out.find('.') == std::string::npos)
        out += ".0000";

    if (out.size() - out.find('.') > 5)
        out = out.substr(0, out.find('.') + 5);

    return out;
}

void DCTDump::closeTrace() {
    if (dumpfile) {
        fclose(dumpfile);
        dumpfile = NULL;
    }
}

void DCTDump::dumpPacket(uint8 *buf, int32 len, bool type) {
    if (len > 0) {
        std::string dump = " $";
        int32 j = 0;
        if (type == true) {
            for (int32 i = 0; i < len * 2; i++) {
                if (((buf[j]) >> (4 * ((i + 1) % 2)) & 0x0f) < 10)
                    dump += ((buf[j]) >> (4 * ((i + 1) % 2)) & 0x0f) + 48;
                else
                    dump += ((buf[j]) >> (4 * ((i + 1) % 2)) & 0x0f) + 87;
                j = j + i % 2;
            }
        } else {
            for (int32 i = 0; i < len; i++) {
                dump += (char)buf[i];
            }
        }
        dump += "\n";
        fwrite(dump.c_str(), dump.size(), 1, dumpfile);
    }
}




