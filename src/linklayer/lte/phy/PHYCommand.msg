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
    class PhyCommand;
    typedef PhyCommand ParamRequest;
    typedef PhyCommand StartRequest; 
    
    class DlConfigRequestPdu;
    typedef DlConfigRequestPdu *DlConfigRequestPduPtr;
}}

class noncobject DlConfigRequestPduPtr;

enum PhyCommandType
{
    PARAMRequest = 101;
    PARAMResponse = 102;
    SUBFRAMEIndication = 103;
    CONFIGRequest = 104;
    CONFIGResponse = 105;
    STARTRequest = 106;
    DLCONFIGRequest = 107;
    TXRequest = 108;
    DLASSIGNIndication = 109;
};

enum PhyCommandTlvTag
{
    DlBwSupp = 40;
    UlBwSupp = 41;
	PhyState = 60;    
}

enum PhyCommandErrorCode
{
	MsgOk = 0;    
}

enum DlConfigRequestPduType
{
    DciDlPdu = 0;
    BchPdu = 1;
    DlschPdu = 3;
}

class PhyCommandTlv
{
    unsigned int tag;
    unsigned int length;
    unsigned int value;
}

class PhyCommand
{
}

class ParamResponse extends PhyCommand
{ 
    unsigned char errorCode;
    PhyCommandTlv tlvs[];
}

class ConfigRequest extends PhyCommand
{
    PhyCommandTlv tlvs[];
}

class ConfigResponse extends PhyCommand
{
    unsigned char errorCode;
    PhyCommandTlv unsuppTlvs[];
    PhyCommandTlv missTlvs[];
}

class SubframeIndication extends PhyCommand
{
	unsigned short tti;	// tti from 0 to INF    
}

class DlConfigRequestPdu
{
    unsigned char type;
    unsigned short pduIndex = 0;
}

class DlConfigRequestDciDlPdu extends DlConfigRequestPdu
{
 	type = DciDlPdu;
 	unsigned short rnti;   
 	unsigned char rntiType;
}

class DlConfigRequestBchPdu extends DlConfigRequestPdu
{
    type = BchPdu;
}

class DlConfigRequestDlschPdu extends DlConfigRequestPdu
{
	type = DlschPdu;  
	unsigned short rnti; 
}

class DlConfigRequest extends PhyCommand
{
    @customize(true);
    unsigned short tti;
    abstract DlConfigRequestPduPtr pdus[];
}

class TxRequestPdu
{
    unsigned short pduIndex;
    PhyCommandTlv tlvs[];
}

class TxRequest extends PhyCommand
{
    unsigned short tti;
    TxRequestPdu pdus[];
}

class HarqInformation
{
   unsigned char ndi;
   unsigned char rv = 4;
}

class DlAssignIndication extends PhyCommand
{
    unsigned short tti;
    unsigned short rnti;
    unsigned char rntiType;
    unsigned char harqProc;
    HarqInformation harqInfo;
}