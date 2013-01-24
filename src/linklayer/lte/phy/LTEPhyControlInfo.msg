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

//enum LTEPhyControlInfoTypes
//{
//	RandomAccessRequest = 0;
//	RandomAccessGrant = 1;
//	DLSCHDataTransfer = 2;
//	ULSCHDataTransfer = 3;
//	
//}

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
}

class LTEPhyControlInfo extends LTEControlInfo
{
//	int phyChannel;
//	int type;   
	unsigned int rntiType;
	unsigned int rnti;			// RA-RNTI (1...60)
//	unsigned int radioType;
//	unsigned int direction;
//	unsigned int ueId;
	unsigned int rapid;  		// RACH preamble id (0...63)
}
