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

message LTEFrame extends AirFrame
{
}

message PhysicalResourceBlock extends AirFrame
{
//    unsigned int tbId = 0;
}

message DCIFormat extends PhysicalResourceBlock
{
    unsigned int rnti;
    unsigned int rntiType;
    unsigned int allocation;	// should be resource block allocation, but now it is used to signal de tti for DLSCH
}

message DCIFormat1A extends DCIFormat
{
    bool ndi;
    unsigned char harqNo; 
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

enum LTERntiTypes
{
 	NoRnti = 0; 
 	PRnti = 1;
 	RaRnti = 2;
 	CRnti = 3;
 	SiRnti = 4;
 	SpsRnti = 5;
 	MRnti = 6;	
 	TempCRnti = 7;
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


