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
}

enum LTETransportChannels
{
    SCH_CCCH = 20;
    SCH_DxCH = 21;
    SCH_RAR = 22;
    RACH = 23;
    DLSCH0 = 24;
    DLSCH1 = 25;
    BCH = 26;
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
};

enum LTEDirection
{
    Uplink = 1;
    Downlink = 2;
}


class LTEControlInfo
{
	int channel; // logical or transport channels    
} 