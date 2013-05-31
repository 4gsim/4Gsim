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
	#include "LTEControlInfo_m.h"    
}}

class noncobject LTEControlInfo;

enum MACControlId
{
    SEND_CTRL_INFO			= 0;
    UL_DATA_CTRL_INFO		= 1;
    DL_DATA_CTRL_INFO		= 2;
    BCAST_DATA_CTRL_INFO	= 3;
    RAP_CTRL_INFO			= 4;
}

class MACControlInfo extends LTEControlInfo
{
	unsigned int ctrlId;
	int ueId;
}

class RAPControlInfo extends MACControlInfo
{
	unsigned int rapid;
	unsigned int attempt;    
}