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

#include "PHY.h"
#include "RRC.h"
#include <fstream>

PHY::PHY() : rs(this->getId()) {
	// TODO Auto-generated constructor stub
    symbolTimer = NULL;

	nDLrb = 255;
    ncp = 255;
    n1id = 255;
    n2id = 255;
    nCellId = 65535;
    p = 1;

    dlSubframe = NULL;
    dlBuffer = NULL;
    allRegs = NULL;

    cfi = 0;
}

PHY::~PHY() {
	// TODO Auto-generated destructor stub
    if (symbolTimer != NULL) {
        if (symbolTimer->getContextPointer() != NULL)
            this->cancelEvent(symbolTimer);
        delete symbolTimer;
    }

    if (dlSubframe) {
    	delete [] dlSubframe;
    }

    if (dlBuffer) {
    	for (unsigned char l = 0; l < nDLsymb * 2; l++)
    		delete [] dlBuffer[l];
    	delete [] dlBuffer;
    }

    if (allRegs) {
    	for (unsigned char l = 0; l < 4; l++) {
    		for (unsigned short k = 0; k < nRBsc * nDLrb; k++) {
    			if (allRegs[l][k]) {
    				REGs regs = allRegs[l][k];
    				unsigned char regNr = getRegNrInRegs(l);
    				for (unsigned char r = 0; r < regNr; r++) {
    					REG reg = regs[r];
    					delete [] reg;
    				}
    				delete [] regs;
    			}
    		}
    		delete [] allRegs[l];
    	}
    	delete [] allRegs;
    }
}

void PHY::initialize(int stage) {
	ChannelAccess::initialize(stage);

    if (stage == 4) {
        symbolTimer = new cMessage("SYMB-TIMER");
        symbolTimer->setContextPointer(this);
        this->scheduleAt(simTime(), symbolTimer);
    }
}

void PHY::handleMessage(cMessage *msg) {
    if (msg->isSelfMessage()) {

    } else {
    	if (msg->arrivedOn("upperLayerIn")) {
    		handleUpperMessage(msg);
    	} else {
    		handleRadioMessage(msg);
    	}
    }
}

const char *PHY::stateName(int state) {
#define CASE(x) case x: s=#x; break
    const char *s = "unknown";
    switch (state) {
        CASE(IDLE);
        CASE(CONFIGURED);
        CASE(RUNNING);
    }
    return s;
#undef CASE
}

const char *PHY::eventName(int event) {
#define CASE(x) case x: s=#x; break
    const char *s = "unknown";
    switch (event) {
        CASE(PARAMRequest);
        CASE(CONFIGRequest);
        CASE(STARTRequest);
        CASE(DLCONFIGRequest);
        CASE(TXRequest);
    }
    return s;
#undef CASE
}

unsigned char PHY::getRegNrInRegs(unsigned char l) {
	if (l == 0)
		return 2;
	else if (l == 1 && p == 4)
		return 2;
	else if (l == 1 && p != 4)
		return 3;
	else if (l == 2)
		return 3;
	else if (l == 3 && ncp == PHY_CP_NORMAL)
		return 3;
	else if (l == 3 && ncp == PHY_CP_EXTENDED)
		return 2;
	return 0;
}

unsigned char PHY::getReNrInReg(unsigned char l) {
	if (l == 0)
		return 6;
	else if (l == 1 && p == 4)
		return 6;
	else if (l == 1 && p != 4)
		return 4;
	else if (l == 2)
		return 4;
	else if (l == 3 && ncp == PHY_CP_NORMAL)
		return 4;
	else if (l == 3 && ncp == PHY_CP_EXTENDED)
		return 6;
	return 0;
}

REG PHY::findExactReg(unsigned char l, unsigned short k0) {
	unsigned char regNr = getRegNrInRegs(l);
	for (unsigned char r = 0; r < regNr; r++) {
		if ((k0 >= r * (12 / regNr)) && (allRegs[l][k0 - r * (12 / regNr)] != NULL)) {
			REGs regs = allRegs[l][k0 - r * (12 / regNr)];
			return regs[r];
		}
	}
	return NULL;
}

void PHY::configureRegs() {
	allRegs = new REGs*[4];
	for (unsigned char l = 0; l < 4; l++) {
		allRegs[l] = new REGs[nRBsc * nDLrb];
		for (unsigned short k = 0; k < nRBsc * nDLrb; k++) {
			if (k % nRBsc == 0) {
				unsigned short k0 = k;
				unsigned char regNr = getRegNrInRegs(l);
				REGs regs = new REG[regNr];
//            	EV << "(\n";
				for (unsigned char r = 0; r < regNr; r++) {
//            		EV << "(";
					unsigned char reNr = getReNrInReg(l);
					REG reg = new RE[reNr];
					for (unsigned char kRel = 0; kRel < reNr; kRel++) {
						reg[kRel].k = k0 + r * (12 / regNr) + kRel;
						reg[kRel].l = l;
//            			EV << "(" << (unsigned)reg[kRel].k << "," << (unsigned)reg[kRel].l << "), ";
					}
					regs[r] = reg;
//            		EV << "),\n";
				}
				allRegs[l][k] = regs;
//            	EV << ")\n";
			} else
				allRegs[l][k] = NULL;
		}
	}
}

void PHY::printSubframe() {
	std::ofstream file;
	file.open("out.txt");
	for (unsigned short k = 0; k < nDLrb * nRBsc; k++) {
		for (unsigned char l = 0; l < nDLsymb * 2; l++) {
			file << (unsigned)dlSubframe[l]->getRes(k) << "\t";
		}
		file << endl;
	}
	file.close();
}
