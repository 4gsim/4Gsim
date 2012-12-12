//
// Copyright (C) 2012 Calin Cerchez
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

cplusplus {{ 
    class MACSubHeader;
    typedef MACSubHeader *MACSubHeaderPtr; 
    class MACServiceDataUnit;
    typedef MACServiceDataUnit *MACServiceDataUnitPtr;
}} // C++ typedef

class noncobject MACSubHeaderPtr;
class noncobject MACServiceDataUnitPtr;

class MACSubHeader
{

}

class MACSubHeaderUlDl extends MACSubHeader
{
    bool e;
    unsigned char lcid;
    bool f;
    unsigned short l;
}

class MACSubHeaderRar extends MACSubHeader
{
    bool e;
    bool t;
    unsigned char rapidOrBi;
}

class MACServiceDataUnit
{
    char value[];
}

class MACControlElement extends MACServiceDataUnit
{

}

packet MACProtocolDataUnit
{
    @customize(true);
    abstract MACSubHeaderPtr subHdrs[];
    abstract MACServiceDataUnitPtr sdus[];	// controlelements go in the same vector
}