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
#include "LTEControlInfo_m.h"
}}

class noncobject AirFrame;

message PhysicalResourceBlock extends AirFrame
{
	int ueId;
	unsigned short rnti;   
 	unsigned char rntiType;
}

message TransportBlock extends PhysicalResourceBlock
{
    
}

message RAPreamble extends PhysicalResourceBlock
{
	unsigned char rapid;   
}

class Subcarier extends AirFrame
{
    
}

message PHYSymbol extends AirFrame
{
   unsigned char res[];	// Resource Elements
}

message PHYFrame
{
    unsigned char channel = 0;
}

message PSSSignal extends PHYFrame
{
    channel = PSS;
	unsigned char cellIdInGroup;    
}

message SSSSignal extends PHYFrame
{
    channel = SSS;
	unsigned char cellGroupId;
	unsigned char sf;    
}

message ReferenceSignal extends PHYFrame
{
    channel = RS;
	unsigned char cellId;
	unsigned char ncp;    	// cyclic prefix
}

message PCFICHMessage extends PHYFrame
{
    channel = PCFICH;
    unsigned char cfi;
}

message DCIFormat extends PHYFrame
{
    channel = PDCCH;
    unsigned short rnti;   // scrambled in CRC
    unsigned char rntiType;
    unsigned char formatFlag;
 	bool vrbFlag;
 	unsigned int rbCoding;
 	unsigned char mcs;
 	unsigned char rv;
 	unsigned char tpc;
}

message PBCHMessage extends PHYFrame
{
    channel = PBCH;
	unsigned char cellId;    
}