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

#ifndef LTESCHEDULINGINFO_H_
#define LTESCHEDULINGINFO_H_

#include "LTESchedulingInfo_m.h"
#include "INETDefs.h"

/*
 * Class for LTE downlink assignment and uplink grant. This class inherits the message base class from .msg file
 * and adds the vector with the TTI values.
 */

class DownlinkAssignment : public DownlinkAssignment_Base {
private:
    typedef std::vector<int> TTIValues;
    TTIValues ttis;
public:
    DownlinkAssignment(const char *name=NULL, int kind=0) : DownlinkAssignment_Base() {}
    DownlinkAssignment(const DownlinkAssignment& other) : DownlinkAssignment_Base() {operator=(other);}
    virtual ~DownlinkAssignment();

    DownlinkAssignment& operator=(const DownlinkAssignment& other);
    virtual DownlinkAssignment *dup() const {return new DownlinkAssignment(*this);}

    /*
     * Methods overridden but not used. You should use instead pushTTI.
     */
    virtual void setTtisArraySize(unsigned int size);
    virtual void setTtis(unsigned int k, int tti);

    /*
     * Getter methods.
     */
    virtual unsigned int getTtisArraySize() const;
    virtual int getTtis(unsigned int k) const;

    /*
     * Method for pushing TTI value to the vector.
     */
    void pushTti(int tti) { ttis.push_back(tti); }

    virtual std::string info() const;
};

typedef DownlinkAssignment UplinkGrant;

#endif /* LTESCHEDULINGINFO_H_ */
