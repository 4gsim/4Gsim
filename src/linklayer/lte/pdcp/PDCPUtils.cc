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
#include "PDCPUtils.h"
#include "PDCPSerializer.h"

PDCPUtils::PDCPUtils() {
    // TODO Auto-generated constructor stub

}

PDCPUtils::~PDCPUtils() {
    // TODO Auto-generated destructor stub
}

unsigned PDCPUtils::subWord(unsigned w) {
    unsigned r = w;
    unsigned char *s = (unsigned char*)&r;
    for (unsigned i = 0; i < sizeof(w); i++)
        s[i] = SBOX[(s[i] >> 4) & 0x0f][s[i] & 0x0f];
    return r;
}

unsigned PDCPUtils::rotWord(unsigned w, unsigned n) {
    unsigned r = w;
    for (unsigned i = 0; i < n; i++) {
        unsigned char *s = (unsigned char*)&r;
        unsigned char *t = (unsigned char*)&w;
        for (unsigned j = 0; j < sizeof(w); j++)
            s[j] = t[(j + 1) % sizeof(w)];
        w = r;
    }
    return r;
}

void PDCPUtils::keyExp(unsigned char key[4 * NK], unsigned w[NB * (NR + 1)]) {
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
        if ((i % NK) == 0)
            temp = subWord(rotWord(temp, 1)) ^ RCON[i / NK - 1];
        else if ((NK > 6) && ((i % NK) == 4))
            temp = subWord(temp);
        w[i] = w[i - NK] ^ temp;
        i += 1;
    }
}

void PDCPUtils::addRoundKey(unsigned state[NB], unsigned w[NB]) {
    unsigned i = 0;
    while (i < NB) {
        state[i] = state[i] ^ w[i];
        i += 1;
    }
}

void PDCPUtils::subBytes(unsigned state[NB]) {
    unsigned i = 0;
    while (i < NB) {
        state[i] = subWord(state[i]);
        i += 1;
    }
}

void PDCPUtils::shiftRows(unsigned state[NB]) {
    unsigned i = 0;
    unsigned temp[NB];
    while (i < NB) {
        unsigned j = 0;
        temp[i] = 0;
        while (j < NB) {
            temp[i] += state[(j + i) % NB] & (0x000000ff << (j * 8));
            j += 1;
        }
        i += 1;
    }
    i = 0;
    while (i < NB) {
        state[i] = temp[i];
        i += 1;
    }
}

unsigned char PDCPUtils::multiply(unsigned char a, unsigned char b) {
    unsigned char r = 0;
    unsigned char counter;
    bool hi_bit_set;
    for (counter = 0; counter < 8; counter++) {
            if (b & 1)
                    r ^= a;
            hi_bit_set = (a & 0x80);
            a <<= 1;
            if (hi_bit_set)
                    a ^= 0x1b; /* x^8 + x^4 + x^3 + x + 1 */
            b >>= 1;
    }
    return r;
}

void PDCPUtils::mixColumns(unsigned state[NB]) {
    unsigned char *bytes = (unsigned char*)&state[0];
    unsigned i = 0;
    while (i < NB) {
        unsigned char s0 = multiply(0x02, bytes[4 * i]) ^ multiply(0x03, bytes[4 * i + 1]) ^ bytes[4 * i + 2] ^ bytes[4 * i + 3];
        unsigned char s1 = bytes[4 * i] ^ multiply(0x02, bytes[4 * i + 1]) ^ multiply(0x03, bytes[4 * i + 2]) ^ bytes[4 * i + 3];
        unsigned char s2 = bytes[4 * i] ^ bytes[4 * i + 1] ^ multiply(0x02, bytes[4 * i + 2]) ^ multiply(0x03, bytes[4 * i + 3]);
        unsigned char s3 = multiply(0x03, bytes[4 * i]) ^ bytes[4 * i + 1] ^ bytes[4 * i + 2] ^ multiply(0x02, bytes[4 * i + 3]);
        state[i] = htonl((((s0) << 24) & 0xff000000) +
                        (((s1) << 16) & 0x00ff0000) +
                        (((s2) << 8) & 0x0000ff00) +
                        (((s3)) & 0x000000ff));
        i += 1;
    }
}

void PDCPUtils::cipher(unsigned char in[4 * NB], unsigned char out[4 * NB], unsigned w[NB * (NR + 1)]) {
    unsigned state[NB];
    unsigned i = 0;
    while (i < NB) {
        memcpy(&state[i], in + (4 * i), 4);
        i += 1;
    }

    addRoundKey(state, w);

    for (unsigned round = 1; round < NR; round++) {
        subBytes(state);
        shiftRows(state);
        mixColumns(state);
        addRoundKey(state, w + round * NB);
    }

    subBytes(state);
    shiftRows(state);
    addRoundKey(state, w + NR * NB);

    memcpy(out, state, 4 * NB);
}

void PDCPUtils::leftShift(unsigned char l[4 * NB], unsigned char r[4 * NB], unsigned steps) {
    unsigned i = 0;
    while (i < 4 * NB - 1) {
        r[i] = (l[i] << steps) + (l[i + 1] >> (8 - steps));
        i++;
    }
    r[i] = l[i] << steps;
}

void PDCPUtils::exclusiveOr(const unsigned char *a, const unsigned char *b, unsigned char *r, unsigned size) {
    unsigned i = 0;
    while (i < size) {
        r[i] = a[i] ^ b[i];
        i++;
    }
}

unsigned PDCPUtils::cmac(unsigned char *k, unsigned char *m, unsigned mlen) {
    unsigned char zeros[] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
    unsigned char c0[] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
    unsigned w[NB * (NR + 1)];
    unsigned char l[4 * NB];
    unsigned char k1[4 * NB];
    unsigned char k2[4 * NB];
    unsigned n;
    unsigned t;

    keyExp(k, w);
    cipher(zeros, l, w);

    leftShift(l, k1, 1);
    if (l[0] & 0x80) {
        exclusiveOr(k1, R128, k1, 4 * NB);
    }
    leftShift(k1, k2, 1);
    if (k1[0] & 0x80) {
        exclusiveOr(k2, R128, k2, 4 * NB);
    }

    if (!mlen)
        n = 1;
    else
        n = ceil((double)mlen / 128);

    if (mlen % 128 || !mlen) {
        unsigned begin = floor((double)mlen / 8);
        m[begin] = m[begin] | (0x80 >> (mlen % 8));
        m[begin] = m[begin] & ~((0x80 >> (mlen % 8)) - 1);
        unsigned limit = (n * 128) / 8;
        for (unsigned i = begin + 1; i < limit; i++) {
            m[i] = 0x00;
        }
        exclusiveOr(m + (n - 1) * 4 * NB, k2, m + (n - 1) * 4 * NB, 4 * NB);
    } else {
        exclusiveOr(m + (n - 1) * 4 * NB, k1, m + (n - 1) * 4 * NB, 4 * NB);
    }

    for (unsigned i = 0; i < n; i++) {
        exclusiveOr(c0, m + i * 4 * NB, c0, 4 * NB);
        cipher(c0, c0, w);
    }
    t = htonl((((c0[0]) << 24) & 0xff000000) +
            (((c0[1]) << 16) & 0x00ff0000) +
            (((c0[2]) << 8) & 0x0000ff00) +
            (((c0[3])) & 0x000000ff));
    return t;
}

unsigned PDCPUtils::calcMacI(unsigned count, unsigned char bearer, bool direction, PDCPDataPduCPlane *msg) {
    unsigned char *key = (unsigned char*)malloc(16);
    unsigned char *message = (unsigned char*)malloc(msg->getByteLength());
    unsigned len = PDCPSerializer().serialize(msg, message, 0);

    unsigned char *m = (unsigned char*)calloc(ceil((double)len / 8) + 8, sizeof(unsigned char));
    memcpy(m, &count, sizeof(count));
    m[sizeof(count)] = (bearer << 3) + (direction << 2);
    memcpy(m + 8, message, ceil((double)len / 8));
    unsigned mlen = len + 64;

    return cmac(key, m, mlen);
}

