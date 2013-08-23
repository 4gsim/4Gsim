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

enum SchedulerCommandType
{
    RLC_TX_OPPORTUNITY = 200;
    CSCHED_CELL_CONFIG_REQ = 201;
    SCHED_DL_TRIGGER_REQ = 202;
    SCHED_DL_CONFIG_IND = 203;
   	SCHED_UL_TRIGGER_REQ = 204;
   	SCHED_UL_CONFIG_IND = 205;
   	SCHED_DL_RACH_INFO_REQ = 206;
}

class SchedulerCommand
{
}

class SiMessageListElement
{
    unsigned short period;
}

class SiConfiguration
{
	unsigned char siWdwLen;
	SiMessageListElement siMsgList[];	    
}

class RaConfiguration
{
    unsigned char raPreambleIndex = 61;	// maximal value if used should be 60
    unsigned char raPrachMaskIndex = 0;
    unsigned char raRespWdwSize;
    unsigned char nrOfRaPreambles;
    unsigned char sizeOfRaPreamblesGroupA;    
}

class CSchedCellConfigReq extends SchedulerCommand
{
    SiConfiguration siConfig;
    unsigned char prachCfgIndex;
	RaConfiguration raConfig;
}

enum HarqStatus
{
    ACK = 0;
    NACK = 1;
    DTX = 2;
}

class DlInfoListElement
{
    unsigned short rnti;
    unsigned char harqProcId;
    unsigned char harqStats[];
}
    
class SchedDlTriggerReq extends SchedulerCommand
{
    unsigned short sfn;
    unsigned char sf;
    DlInfoListElement dlInfoList[];
}

class SchedUlTriggerReq extends SchedulerCommand
{
	unsigned short tti;  
	bool rapComplete;   
}

class RlcPduListElement
{
    unsigned char logChannelId;
}

class DlDciListElement
{
	unsigned short rnti;    
	unsigned char rv;
}

class BuildDataListElement
{
    unsigned short rnti;
    DlDciListElement dci;
    RlcPduListElement rlcPduList[];
}

class BuildRarListElement
{
	unsigned short rnti;
	unsigned int grant;
	DlDciListElement dci;  
}

enum BcastMessageIndex
{
	SIB1 = 0;
	SIB2 = 1;
	MIB = 64;    
}

class BuildBcastListElement
{
    unsigned char index;
    DlDciListElement dci;
}

class SchedDlConfigInd extends SchedulerCommand
{
    unsigned short sfn;
    unsigned char sf;
    BuildBcastListElement bldBcastList[];
    BuildRarListElement bldRarList[];
}

class SchedUlConfigInd extends SchedulerCommand
{
	unsigned short tti;   
	RaConfiguration raConfigList[];	// made list because it is simpler than pointer
}

class RlcTxOpportunity 
{
    unsigned short rnti = 0;
	unsigned char lcid = 32;    
}

class RachListElement
{
	unsigned short rnti;	// TempCRnti
}

class SchedDlRachInfoReq extends SchedulerCommand
{
	unsigned short tti;   
	RachListElement rachList[]; 
}