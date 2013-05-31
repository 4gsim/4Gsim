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
#include "AirFrame_m.h"
}}

class noncobject AirFrame;

message PhysicalResourceBlock extends AirFrame
{
//    unsigned int tbId = 0;
	int ueId;
}

message TransportBlock extends PhysicalResourceBlock
{
    
}

message RandomAccessPreamble extends TransportBlock
{
	unsigned int rapid;
	unsigned int attempt;    
}

message DCIFormat extends PhysicalResourceBlock
{
    @customize(true);
    bool ndi;
    int rv;
    int harqNo;
    int modCod;
    unsigned int rnti;
    unsigned int rntiType;
    abstract int ttis[];	// should be resource block allocation, but now it is used to signal de tti allocation
}

enum LTERadioTypes
{
    FDDRadioType = 0;
	TDDRadioType = 1;
}

enum LTEDirections
{
	UplinkDirection = 0;
	DownlinkDirection = 1;   
}

//message RAPreamble extends LTEFrame
//{
//    unsigned int rapid;  		// RACH preamble id (0...63)    
//}
//
//message HARQFrame extends LTEFrame
//{
//    bool harqIndicator;
//    simtime_t ttiId;
//}


