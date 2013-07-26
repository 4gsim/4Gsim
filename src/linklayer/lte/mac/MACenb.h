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

#ifndef MACENB_H_
#define MACENB_H_

#include "MAC.h"
#include "MACMessage.h"

class MACenb : public MAC {
private:
    typedef std::map<unsigned short, MACServiceDataUnit*> MACBuffer;
    MACBuffer buffer;
    virtual void receiveChangeNotification(int category, const cPolymorphic *details);
public:
    MACenb();
    virtual ~MACenb();

    virtual void initialize(int stage);

    virtual void handleUpperMessage(cMessage *msg);
    virtual void handleLowerMessage(cMessage *msg);
};

#endif /* MACENB_H_ */
