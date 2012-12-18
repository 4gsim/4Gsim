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

#include <platdep/sockets.h>
#include "PDCP.h"

Define_Module(PDCP);

PDCP::PDCP() {
    // TODO Auto-generated constructor stub

}

PDCP::~PDCP() {
    // TODO Auto-generated destructor stub
}

unsigned subword(unsigned w) {
    unsigned r = w;
    unsigned char *s = (unsigned char*)&r;
    for (unsigned i = 0; i < sizeof(w); i++)
        s[i] = SBOX[(s[i] >> 4) & 0x0f][s[i] & 0x0f];
    return r;
}

unsigned rotword(unsigned w) {
    unsigned r = w;
    unsigned char *s = (unsigned char*)&r;
    unsigned char *t = (unsigned char*)&w;
    for (unsigned i = 0; i < sizeof(w); i++)
        s[i] = t[(i + 1) % sizeof(w)];
    return r;
}

void keyExp(unsigned char key[4 * NK], unsigned w[NB * (NR + 1)]) {
    unsigned temp;
    unsigned i = 0;
    while (i < NK) {
        w[i] = htonl(((((unsigned)key[4 * i]) << 24) & 0xff000000) +
                ((((unsigned)key[4 * i + 1]) << 16) & 0x00ff0000) +
                ((((unsigned)key[4 * i + 2]) << 8) & 0x0000ff00) +
                ((((unsigned)key[4 * i + 3])) & 0x000000ff));
        i += 1;
    }

    i = NK;

    while (i < NB * (NR + 1)) {
        temp = w[i - 1];
        unsigned rcon = htonl((2 ^ (0)) * 0x01000000);
        if ((i % NK) == 0)
            temp = subword(rotword(temp)) ^ rcon;
        else if ((NK > 6) && ((i % NK) == 4))
            temp = subword(temp);
        w[i] = w[i - NK] ^ temp;
        i += 1;
    }
}

void PDCP::initialize(int stage) {
    if (stage == 4) {
//        PDCPDataPduCPlane *msg = new PDCPDataPduCPlane();
//        msg->setSn(uniform(0, 32));
        unsigned countI = 950464598;
        unsigned char bearer = 18;
        bool direction = 0;
        char message[] = {0x33, 0x32, 0x34, 0x62, 0x63, 0x39, 0x38, 0x40};
        unsigned char key[] = { 0x2b, 0x7e, 0x15, 0x16, 0x28, 0xae, 0xd2, 0xa6, 0xab, 0xf7, 0x15, 0x88, 0x09, 0xcf, 0x4f, 0x3c};
        unsigned w[NB * (NR + 1)];
//        unsigned char key[] = { 0xd6, 0x45, 0x9f, 0x82, 0xc5, 0xb3, 0x00, 0x95, 0x2c, 0x49, 0x10, 0x48, 0x81, 0xff, 0x48 };
        keyExp(key, w);
        subword(countI);
    }
}

void cipher(unsigned char *in, unsigned char *out, unsigned *w) {
    unsigned char state[4 * NB];
    memcpy(state, in, 4 * NB);
}

void PDCP::handleMessage(cMessage *msg) {

}

