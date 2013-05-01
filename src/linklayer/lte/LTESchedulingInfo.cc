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

#include "LTESchedulingInfo.h"

Register_Class(LTESchedulingInfo);

LTESchedulingInfo& LTESchedulingInfo::operator=(const LTESchedulingInfo& other) {
    LTESchedulingInfo_Base::operator=(other);

    for (unsigned i = 0; i < other.getTtisArraySize(); i++) {
        this->pushTti(other.ttis.at(i));
    }

    return *this;
}

LTESchedulingInfo::~LTESchedulingInfo() {

}

void LTESchedulingInfo::setTtisArraySize(unsigned int size) {
     throw new cException(this, "setTtisArraySize() not supported, use pushTti()");
}

unsigned int LTESchedulingInfo::getTtisArraySize() const {
     return ttis.size();
}

void LTESchedulingInfo::setTtis(unsigned int k, int tti) {
     throw new cException(this, "setTtis() not supported, use use pushTti()");
}

int LTESchedulingInfo::getTtis(unsigned int k) const {
    return ttis[k];
}

std::string LTESchedulingInfo::info() const {
    std::stringstream out;

    if (direction_var == UL_SCHEDULING)
        out << "dir:UL, ";
    else
        out << "dir:DL, ";
    out << "msgId:" << msgId_var << ", ";
    out << "sfnBegin:" << sfnBegin_var << ", ";
    out << "sfnPeriod:" << sfnPeriod_var << ", ";
    if (sfnEnd_var == UINT32_MAX)
        out << "sfnEnd:INF, ";
    else
        out << "sfnEnd:" << sfnEnd_var << ", ";
    out << "ttis:{ ";
    for (unsigned i = 0; i < ttis.size(); i++)
        out << ttis[i] << " ";
    out << "}";

    return out.str();
}
