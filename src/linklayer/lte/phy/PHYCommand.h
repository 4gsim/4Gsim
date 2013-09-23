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

#ifndef PHYCOMMAND_H_
#define PHYCOMMAND_H_

#include "PHYCommand_m.h"
#include "INETDefs.h"

PhyCommandTlv createPhyCommandTlv(unsigned tag, unsigned length, unsigned value);

/*
 * Class for DlConfigRequest class. This class inherits the base class from .msg file
 * and adds the vector with DlConfigRequest PDU.
 */
class DlConfigRequest : public DlConfigRequest_Base {
private:
    typedef std::vector<DlConfigRequestPduPtr> DlConfigRequestPdus;
    DlConfigRequestPdus pdus;
public:
    DlConfigRequest() : DlConfigRequest_Base() {}
    DlConfigRequest(const DlConfigRequest& other) : DlConfigRequest_Base(other) { operator=(other); }
    virtual ~DlConfigRequest();

    DlConfigRequest& operator=(const DlConfigRequest& other);
    virtual DlConfigRequest *dup() const { return new DlConfigRequest(*this); }

    /*
     * Methods overridden but not used. You should use instead pushPdu.
     */
    virtual void setPdusArraySize(unsigned int size);
    virtual void setPdus(unsigned int k, const DlConfigRequestPduPtr& pdus_var);

    /*
     * Getter methods.
     */
    virtual unsigned int getPdusArraySize() const;
    virtual DlConfigRequestPduPtr& getPdus(unsigned int k);

    /*
     * Method for pushing DlConfigRequestPduPtr to vector.
     */
    void pushPdu(DlConfigRequestPduPtr pdu) { pdus.push_back(pdu); }
    DlConfigRequestPduPtr backPdu() { return pdus.back(); }
    void popPdu() { pdus.pop_back(); }
};

#endif /* PHYCOMMAND_H_ */
