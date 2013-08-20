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
    #define TTI_VALUE           1
}}

enum LTELogicalChannels
{
	ULCCCH = 1;    
	DLCCCH = 2;
	BCCH0 = 3;
	BCCH1 = 4;
	RA_RESP = 5;
}

enum LTETransportChannels
{
    SCH_BCH = 20;
    ULSCH = 21;
    SCH_DxCH = 22;
    SCH_RAR = 23;
    RACH = 24;
    DLSCH0 = 25;
    DLSCH1 = 26;
    BCH = 27;
}

enum LTEPhyChannels 
{
    PRACH = 30;
    PDSCH = 31;
    PDSCH0 = 32;
    PDSCH1 = 33;
    PUSCH = 34;
    PHICH = 35;
    PBCH = 36;
    PDCCH = 37;
    DC = 38;
    PSS = 39;
    SSS	= 40;
};

enum LTEDirection
{
    Uplink = 1;
    Downlink = 2;
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

class LTEControlInfo
{
    @customize(true);
	int channel; // logical or transport channels 
	int ueId;   
} 