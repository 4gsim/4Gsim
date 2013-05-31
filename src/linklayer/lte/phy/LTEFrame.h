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

#ifndef LTEFRAME_H_
#define LTEFRAME_H_

#include "LTEFrame_m.h"
#include "INETDefs.h"

/*
 * Class for LTE fixed scheduling info. This class inherits the message base class from .msg file
 * and adds the vector with the TTI values.
 */

class DCIFormat : public DCIFormat_Base {
private:
    typedef std::vector<int> TTIValues;
    TTIValues ttis;
public:
    DCIFormat(const char *name=NULL, int kind=0) : DCIFormat_Base() {}
    DCIFormat(const DCIFormat& other) : DCIFormat_Base() {operator=(other);}
    virtual ~DCIFormat();

    DCIFormat& operator=(const DCIFormat& other);
    virtual DCIFormat *dup() const {return new DCIFormat(*this);}

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


#endif /* LTEFRAME_H_ */
