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

#ifndef HARQENTITY_H_
#define HARQENTITY_H_

#include "HARQProcess.h"

#define HARQ_MAX_PROCS  10

class HARQEntity {
private:
    std::list<MACProtocolDataUnit*> msg3;
    std::map<unsigned, HARQProcess*> procs;
public:
    HARQEntity();
    virtual ~HARQEntity();

    void init();
};

#endif /* HARQENTITY_H_ */
