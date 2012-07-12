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

#ifndef GTPMESSAGE_H_
#define GTPMESSAGE_H_

#include "GTPMessage_m.h"
#include "INETDefs.h"

class GTPMessage : public GTPMessage_Base {
private:
	typedef std::vector<GTPInfoElemPtr> GTPInfoElems;
	GTPInfoElems ies;
public:
	GTPMessage(const char *name=NULL, int kind=0) : GTPMessage_Base(name,kind) {}
	GTPMessage(const GTPMessage& other) : GTPMessage_Base(other.getName()) {operator=(other);}
	virtual ~GTPMessage();
	GTPMessage& operator=(const GTPMessage& other);
	virtual GTPMessage *dup() const {return new GTPMessage(*this);}

    virtual void setIesArraySize(unsigned int size);
    virtual void setIes(unsigned int k, const GTPInfoElemPtr& ies_var);
    virtual unsigned int getIesArraySize() const;
    virtual GTPInfoElemPtr& getIes(unsigned int k);

	void pushIe(GTPInfoElemPtr ie) { ies.push_back(ie); }
//	void insertAvp(unsigned pos, AVPPtr avp);
	void print();
	GTPInfoElemPtr findIe(unsigned char type, unsigned char instance);
	std::vector<GTPInfoElemPtr> findIes(unsigned char type, unsigned char instance);
};

#endif /* GTPMESSAGE_H_ */
