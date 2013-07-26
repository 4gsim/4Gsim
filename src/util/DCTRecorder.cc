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

#include "DCTRecorder.h"

Define_Module(DCTRecorder);

DCTRecorder::DCTRecorder() : cSimpleModule(), dctDumper() {
    // TODO Auto-generated constructor stub

}

DCTRecorder::~DCTRecorder() {
    // TODO Auto-generated destructor stub
}

void DCTRecorder::initialize() {
    const char* file = par("pcapFile");
    snaplen = this->par("snaplen");
    dumpBadFrames = par("dumpBadFrames").boolValue();

    signalList.clear();

    {
        cStringTokenizer signalTokenizer(par("sendingSignalNames"));

        while (signalTokenizer.hasMoreTokens())
            signalList[registerSignal(signalTokenizer.nextToken())] = true;
    }

    {
        cStringTokenizer signalTokenizer(par("receivingSignalNames"));

        while (signalTokenizer.hasMoreTokens())
            signalList[registerSignal(signalTokenizer.nextToken())] = false;
    }

    const char* moduleNames = par("moduleNamePatterns");
    cStringTokenizer moduleTokenizer(moduleNames);

    while (moduleTokenizer.hasMoreTokens()) {
        bool found = false;
        std::string mname(moduleTokenizer.nextToken());
        bool isAllIndex = (mname.length() > 3) && mname.rfind("[*]") == mname.length() - 3;

        if (isAllIndex)
            mname.replace(mname.length() - 3, 3, "");

        for (cModule::SubmoduleIterator i(getParentModule()); !i.end(); i++) {
            cModule *submod = i();
            if (0 == strcmp(isAllIndex ? submod->getName() : submod->getFullName(), mname.c_str())) {
                found = true;

                for (SignalList::iterator s = signalList.begin(); s != signalList.end(); s++) {
                    if (!submod->isSubscribed(s->first, this)) {
                        submod->subscribe(s->first, this);
                        EV << "DCTRecorder " << getFullPath() << " subscribed to "
                           << submod->getFullPath() << ":" << getSignalName(s->first) << endl;
                    }
                }
            }
        }

        if (!found) {
            EV << "The module " << mname << (isAllIndex ? "[*]" : "")
                    << " not found for DCTRecorder " << getFullPath() << endl;
        }
    }

    if (*file)
        dctDumper.openTrace(file);
}

void DCTRecorder::handleMessage(cMessage *msg) {
    throw cRuntimeError("This module does not handle messages");
}

void DCTRecorder::receiveSignal(cComponent *source, simsignal_t signalID, cObject *obj)
{
    cPacket *packet = dynamic_cast<cPacket *>(obj);

    if (packet) {
        SignalList::const_iterator i = signalList.find(signalID);
        bool l2r = (i != signalList.end()) ? i->second : true;
        recordPacket(packet, l2r);
    }
}

void DCTRecorder::recordPacket(cPacket *msg, bool l2r) {
    bool write = false;


}

void DCTRecorder::finish() {
     dctDumper.closeTrace();
}
