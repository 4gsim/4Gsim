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
 * Class for LTE fixed scheduling info. This class inherits the message base class from .msg file
 * and adds the vector with the TTI values.
 */

class LTEFixedSchedulingInfo : public LTEFixedSchedulingInfo_Base {
private:
    typedef std::vector<int> TTIValues;
    TTIValues ttis;
public:
    LTEFixedSchedulingInfo(const char *name=NULL, int kind=0) : LTEFixedSchedulingInfo_Base() {}
    LTEFixedSchedulingInfo(const LTEFixedSchedulingInfo& other) : LTEFixedSchedulingInfo_Base() {operator=(other);}
    virtual ~LTEFixedSchedulingInfo();

    LTEFixedSchedulingInfo& operator=(const LTEFixedSchedulingInfo& other);
    virtual LTEFixedSchedulingInfo *dup() const {return new LTEFixedSchedulingInfo(*this);}

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

};

#endif /* LTESCHEDULINGINFO_H_ */
