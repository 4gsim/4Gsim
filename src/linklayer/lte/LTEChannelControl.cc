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

#include "LTEChannelControl.h"

Define_Module(LTEChannelControl);

LTEChannelControl::LTEChannelControl() {

}

LTEChannelControl::~LTEChannelControl() {

}

LTEChannelControl::RadioRef LTEChannelControl::registerRadio(cModule *radio, cGate *radioInGate)
{
    Enter_Method_Silent();

    RadioRef radioRef = lookupRadio(radio);

    if (radioRef)
        throw cRuntimeError("Radio %s already registered", radio->getFullPath().c_str());

    if (!radioInGate)
        radioInGate = radio->gate("radioIn");

    RadioEntry re;
    re.radioModule = radio;
    re.radioInGate = radioInGate->getPathStartGate();
    re.isNeighborListValid = false;
    //re.channel = 0;  // for now
    re.isActive = true;
    radios.push_back(re);
    return &radios.back(); // last element
}

void LTEChannelControl::unregisterRadio(RadioRef r)
{
    Enter_Method_Silent();
    for (RadioList::iterator it = radios.begin(); it != radios.end(); it++)
    {
        if (it->radioModule == r->radioModule)
        {
            RadioRef radioToRemove = &*it;
            // erase radio from all registered radios' neighbor list
            for (RadioList::iterator i2 = radios.begin(); i2 != radios.end(); ++i2)
            {
                RadioRef otherRadio = &*i2;
                otherRadio->neighbors.erase(radioToRemove);
                otherRadio->isNeighborListValid = false;
                radioToRemove->isNeighborListValid = false;
            }

            // erase radio from registered radios
            radios.erase(it);
            return;
        }
    }

    error("unregisterRadio failed: no such radio");
}

LTEChannelControl::RadioRef LTEChannelControl::lookupRadio(cModule *radio)
{
    Enter_Method_Silent();
    for (RadioList::iterator it = radios.begin(); it != radios.end(); it++)
        if (it->radioModule == radio)
            return &(*it);
    return 0;
}

