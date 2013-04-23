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

#ifndef MACMESSAGE_H_
#define MACMESSAGE_H_

#include "MACMessage_m.h"
#include "INETDefs.h"

/*
 * Class for MAC message. This class inherits the message base class from .msg file
 * and adds the vectors with the MAC sub headers and MAC service data units.
 */
class MACProtocolDataUnit : public MACProtocolDataUnit_Base {
private:
    typedef std::vector<MACSubHeaderPtr> MACSubHeaders;
    MACSubHeaders subHdrs;
    typedef std::vector<MACServiceDataUnitPtr> MACServDataUnits;
    MACServDataUnits sdus;
public:
    MACProtocolDataUnit(const char *name=NULL, int kind=0) : MACProtocolDataUnit_Base(name,kind) {}
    MACProtocolDataUnit(const MACProtocolDataUnit& other) : MACProtocolDataUnit_Base(other.getName()) {operator=(other);}
    virtual ~MACProtocolDataUnit();

    MACProtocolDataUnit& operator=(const MACProtocolDataUnit& other);
    virtual MACProtocolDataUnit *dup() const {return new MACProtocolDataUnit(*this);}

    /*
     * Methods overridden but not used. You should use instead pushIe.
     */
    virtual void setSubHdrsArraySize(unsigned int size);
    virtual void setSubHdrs(unsigned int k, const MACSubHeaderPtr& ies_var);
    virtual void setSdusArraySize(unsigned int size);
    virtual void setSdus(unsigned int k, const MACServiceDataUnitPtr& ies_var);

    /*
     * Getter methods.
     */
    virtual unsigned int getSubHdrsArraySize() const;
    virtual MACSubHeaderPtr& getSubHdrs(unsigned int k);
    virtual unsigned int getSdusArraySize() const;
    virtual MACServiceDataUnitPtr& getSdus(unsigned int k);

    /*
     * Method for pushing MACSubheader and MACServiceDataUnit to the vectors.
     */
    void pushSubHdr(MACSubHeaderPtr subHdr) { subHdrs.push_back(subHdr); }
    void pushSdu(MACServiceDataUnitPtr sdu) { sdus.push_back(sdu); }

};

#endif /* MACMESSAGE_H_ */
