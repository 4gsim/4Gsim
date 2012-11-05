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

#ifndef LTECHANNELCONTROL_H_
#define LTECHANNELCONTROL_H_

#include "IChannelControl.h"

struct IChannelControl::RadioEntry {
    cModule *radioModule;  // the module that registered this radio interface
    cGate *radioInGate;  // gate on host module used to receive airframes
    std::vector<int> channels;
    Coord pos; // cached radio position

    struct Compare {
        bool operator() (const RadioRef &lhs, const RadioRef &rhs) const {
            ASSERT(lhs && rhs);
            return lhs->radioModule->getId() < rhs->radioModule->getId();
        }
    };
    // we cache neighbors set in an std::vector, because std::set iteration is slow;
    // std::vector is created and updated on demand
    std::set<RadioRef, Compare> neighbors; // cached neighbor list
    std::vector<RadioRef> neighborList;
    bool isNeighborListValid;
    bool isActive;
};

class LTEChannelControl : public cSimpleModule, public IChannelControl {

protected:
    typedef std::list<RadioEntry> RadioList;
    typedef std::vector<RadioRef> RadioRefVector;

    RadioList radios;

    /** the number of controlled channels */
    int numChannels;

    /** Returns the "handle" of a previously registered radio. The pointer to the registering (radio) module must be provided */
    virtual RadioRef lookupRadio(cModule *radioModule);
public:
    LTEChannelControl();
    virtual ~LTEChannelControl();

    /** Registers the given radio. If radioInGate==NULL, the "radioIn" gate is assumed */
    virtual RadioRef registerRadio(cModule *radioModule, cGate *radioInGate = NULL);

    /** Unregisters the given radio */
    virtual void unregisterRadio(RadioRef r);

    /** Returns the host module that contains the given radio */
    virtual cModule *getRadioModule(RadioRef r) const { return r->radioModule; }

    /** Returns the input gate of the host for receiving AirFrames */
    virtual cGate *getRadioGate(RadioRef r) const { return r->radioInGate; }

    /** Returns the channel the given radio listens on - dummy */
    virtual int getRadioChannel(RadioRef r) const { return -1; }

    /** To be called when the host moved; updates proximity info */
    virtual void setRadioPosition(RadioRef r, const Coord& pos);

    /** Called when host switches channel - dummy */
    virtual void setRadioChannel(RadioRef r, int channel) {}

    /** Returns the number of radio channels (frequencies) simulated */
    virtual int getNumChannels() { return numChannels; }

};

#endif /* LTECHANNELCONTROL_H_ */
