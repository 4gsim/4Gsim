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

Register_Class(DownlinkAssignment);

DownlinkAssignment& DownlinkAssignment::operator=(const DownlinkAssignment& other) {
    DownlinkAssignment_Base::operator=(other);

    for (unsigned i = 0; i < other.getTtisArraySize(); i++) {
        this->pushTti(other.ttis.at(i));
    }

    return *this;
}

DownlinkAssignment::~DownlinkAssignment() {

}

void DownlinkAssignment::setTtisArraySize(unsigned int size) {
     throw new cException(this, "setTtisArraySize() not supported, use pushTti()");
}

unsigned int DownlinkAssignment::getTtisArraySize() const {
     return ttis.size();
}

void DownlinkAssignment::setTtis(unsigned int k, int tti) {
     throw new cException(this, "setTtis() not supported, use use pushTti()");
}

int DownlinkAssignment::getTtis(unsigned int k) const {
    return ttis[k];
}

std::string DownlinkAssignment::info() const {
    std::stringstream out;

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

