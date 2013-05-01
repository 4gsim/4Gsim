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
	#define MIB_MSG_ID      0
	#define SIB1_MSG_ID     1 
	#define SIB2_MSG_ID		2 
	#define RA_MSG_ID		3
	
	#define UL_SCHEDULING   0
	#define DL_SCHEDULING   1
}}

class LTESchedulingInfo
{
    @customize(true);
    bool direction;
    int msgId;
    unsigned int sfnBegin;
    unsigned int sfnPeriod;
    unsigned int sfnEnd;
    abstract int ttis[];
    int prbBegin;
    int prbSize;
}

//class LTESchedulingInfo
//{
//    int msgId;
//	int prbId;  
//}
