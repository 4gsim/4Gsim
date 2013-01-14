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

#ifndef RRCMESSAGE_H_
#define RRCMESSAGE_H_

#include "RRCMessage_m.h"
#include "INETDefs.h"

/*
 * Class for RRC message. This class inherits the message base class from .msg file
 * and adds the pointer to a ASN.1 sequence that can be one of the messages defined in
 * Class-Definitions.asn.
 */
class RRCMessage : public RRCMessage_Base {
private:
    SequencePtr sdu;
public:
    RRCMessage(const char *name=NULL, int kind=0) : RRCMessage_Base(name,kind) {}
    RRCMessage(const RRCMessage& other) : RRCMessage_Base(other.getName()) {operator=(other);}
    virtual ~RRCMessage();

    RRCMessage& operator=(const RRCMessage& other);
    virtual RRCMessage *dup() const {return new RRCMessage(*this);}

    /*
     * Setter methods.
     */
    virtual void setSdu(const SequencePtr& sdu);
    virtual void setSdu(SequencePtr& sdu);

    /*
     * Getter methods.
     */
    virtual SequencePtr& getSdu();

};

#endif /* RRCMESSAGE_H_ */
