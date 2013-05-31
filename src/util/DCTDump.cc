//
// Copyright (C) 2012 Calin Cerchez
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

#include <errno.h>
#include "DCTDump.h"
#include "IPv4Serializer.h"
#include "RRCMessage_m.h"
#include "MACSerializer.h"
//#include "LTEPhyControlInfo_m.h"
#include "LTEFrame_m.h"
#include "MACControlInfo_m.h"

#define MAXBUFLENGTH 65536
#define MAXDCTLENGTH 100

Define_Module(DCTDump);

DCTDump::DCTDump() {
    // TODO Auto-generated constructor stub

}

DCTDump::~DCTDump() {
    // TODO Auto-generated destructor stub
}

void DCTDump::initialize() {
    lteSched = LTESchedulerAccess().get();

    const char *file = this->par("dumpFile");
    const char *first_line = "Session Transcript\n";

    // TODO Real timestamp
    const char *second_line = "February 21, 2006     16:45:20.5186\n";
    if (strcmp(file,"")!=0)
    {
        dumpfile = fopen(file, "wb");
        if (!dumpfile)
        {
            fprintf(stderr, "Cannot open file [%s] for writing: %s\n", file, strerror(errno));
            exit(-1);
        }

        fwrite(first_line, 19, 1, dumpfile);
        fwrite(second_line, 36, 1, dumpfile);
    }
    else
        dumpfile = NULL;

}

void DCTDump::handleMessage(cMessage *msg) {

    if (dumpfile != NULL) {
        const simtime_t stime = simulation.getSimTime();
        std::stringstream vers;
        std::stringstream outHdr;
        std::stringstream comment;
        std::string time = timestamp(stime);
        uint8 buf[MAXBUFLENGTH];
        int32 buf_len = 0;
        std::string ascii_buf;
        char dh[MAXDCTLENGTH];
        char *p = dh;
        bool writeHex = false;
        bool writeAscii = false;
        bool hasOutHdr = false;
        bool hasComment = false;

        // Write dump
        memset((void*)&buf, 0, sizeof(buf));

        // Write dct2000 header
        memset((void*)&dh, 0, sizeof(dh));

        // context name - IPv4Datagram
        IPv4Datagram *ipPacket = dynamic_cast<IPv4Datagram*>(msg);
        if (ipPacket) {
            if (ipPacket->getTransportProtocol() == IP_PROT_SCTP) {
                strncpy(p, "SCTP.", 5);
                p += 5;
            } else if (ipPacket->getTransportProtocol() == IP_PROT_UDP) {
                strncpy(p, "UDP.", 4);
                p += 4;
            }
            writeHex = true;

            buf_len = IPv4Serializer().serialize(ipPacket, buf, sizeof(buf), true);
        }

        // context name MACProtocolDataUnit or TransportBlock
        MACControlInfo *macCtrl = dynamic_cast<MACControlInfo*>(msg->getControlInfo());
        if (macCtrl) {
            strncpy(p, "MAC-LTE", 7);
            p += 7;

            if (macCtrl->getCtrlId() == BCAST_DATA_CTRL_INFO || macCtrl->getCtrlId() == DL_DATA_CTRL_INFO || macCtrl->getCtrlId() == SEND_CTRL_INFO) {
                strncpy(p, ".", 1);
                p += 1;

                writeHex = true;
            }

            if (macCtrl->getCtrlId() == BCAST_DATA_CTRL_INFO || macCtrl->getCtrlId() == DL_DATA_CTRL_INFO) {
                TransportBlock *tb = dynamic_cast<TransportBlock*>(msg);

                MACProtocolDataUnit *macPdu = dynamic_cast<MACProtocolDataUnit*>(tb->getEncapsulatedPacket());
                if (macPdu)
                    buf_len = MACSerializer().serialize(macPdu, buf, sizeof(buf));
            }

            if (macCtrl->getCtrlId() == SEND_CTRL_INFO) {
                MACProtocolDataUnit *pdu = dynamic_cast<MACProtocolDataUnit*>(msg);

                buf_len = MACSerializer().serialize(pdu, buf, sizeof(buf));
            }

            if (macCtrl->getCtrlId() == RAP_CTRL_INFO) {
                hasComment = true;

                writeAscii = true;
            }
        }

//        if (tb) {
//            strncpy(p, "MAC-LTE", 7);
//            p += 7;
//
//            if (tb->getChannel() == RACH) {
//                hasComment = true;
//
//                writeAscii = true;
//
//            } else {
//                strncpy(p, ".", 1);
//                p += 1;
//
//                writeHex = true;
//
//
//            }
//        }

        // context name - MACProtocolDataUnit

//        if (pdu) {
//            MACControlInfo *ctrl = check_and_cast<MACControlInfo*>(msg->getControlInfo());
//            strncpy(p, "MAC-LTE", 7);
//            p += 7;
//
//            if (ctrl->getChannel() == RACH) {
////                hasComment = true;
////
////                writeAscii = true;
//
//            } else {
//                strncpy(p, ".", 1);
//                p += 1;
//
//                writeHex = true;
//
//                buf_len = MACSerializer().serialize(pdu, buf, sizeof(buf));
//            }
//        }

        // context name - MAC Random Access Preamble
//        if (dynamic_cast<LTEPhyControlInfo*>(msg->getControlInfo())) {
//            LTEPhyControlInfo *ctrl = check_and_cast<LTEPhyControlInfo*>(msg->getControlInfo());
//            if (ctrl->getChannel() == RACH) {
//                strncpy(p, "MAC-LTE.", 8);
//                p += 8;
//
//                write = true;
//
//                hasComment = true;
//            }
//        }

        if (hasComment) {
            strncpy(p, "/////", 5);
            p += 5;

            RAPControlInfo *rapCtrl = check_and_cast<RAPControlInfo*>(msg->getControlInfo());
            comment << ">> RACH Preamble Request[UE = "
                    << rapCtrl->getUeId() << "]    [RAPID = "
                    << rapCtrl->getRapid() << "]    [Attempt = "
                    << rapCtrl->getAttempt() << "]";
            strncpy((char*)buf, comment.str().c_str(), strlen(comment.str().c_str()));
            buf_len = strlen(comment.str().c_str());

        } else {

            // context port number - always 1
            strncpy(p, "1/", 5);
            p += 2;

            // protocol - IPv4Datagram
            if (ipPacket) {
                vers << ipPacket->getVersion();
                // protocol name
                strncpy(p, "ip/", 3);
                p += 3;
                //protocol version
                strncpy(p, vers.str().c_str(), strlen(vers.str().c_str()));
                p += strlen(vers.str().c_str());
                *p = '/';
                p++;
            }

            // protocol - MACProtocolDataUnit or TransportBlock
            if (macCtrl) {
                vers << 1;

                strncpy(p, "mac_r9_lte/", 11);
                hasOutHdr = true;
                p += 11;

                //protocol version
                strncpy(p, vers.str().c_str(), strlen(vers.str().c_str()));
                p += strlen(vers.str().c_str());
            }


            // out-header
            if (hasOutHdr) {
                unsigned rntiType = NoRnti;
                unsigned rnti = 0;

                DownlinkAssignment *dlAssign = lteSched->getDlAssignment(msg->getKind());
                if (dlAssign != NULL) {
                    rntiType = dlAssign->getRntiType();
                    rnti = dlAssign->getRnti();
                }

                UplinkGrant *ulGrant = lteSched->getUlGrant(msg->getKind());
                if (ulGrant != NULL) {
                    rntiType = ulGrant->getRntiType();
                    if (rntiType == TempCRnti)  // TempCRnti not recognized by wireshark DCT decoder
                        rntiType = CRnti;
                    rnti = ulGrant->getRnti();
                }

                if (macCtrl) {
                    unsigned direction;

                    if (!strncmp(this->getParentModule()->getComponentType()->getName(), "UE", 2))
                        if (msg->getArrivalGate()->isName("lowerLayerIn"))
                            direction = DownlinkDirection;
                        else
                            direction = UplinkDirection;
                    else
                        if (msg->getArrivalGate()->isName("lowerLayerIn"))
                            direction = UplinkDirection;
                        else
                            direction = DownlinkDirection;

                    outHdr  << ","
                            << FDDRadioType << ","
                            << rntiType << ","
                            << direction << ","
                            << "1," // Subframe number
                            << "0," // is predefined data
                            << rnti << ","
                            << macCtrl->getUeId() << ","
//                            << dlAssign->getUeId() << ","
                            << buf_len << ",";
//                    } else {
//                        MACControlInfo *ctrl = check_and_cast<MACControlInfo*>(msg->getControlInfo());
//                        outHdr  << ","
//                                << FDDRadioType << ","
//                                << ctrl->getRntiType() << ","
//                                << direction << ","
//                                << "1," // Subframe number
//                                << "0," // is predefined data
//                                << ctrl->getRnti() << ","
//                                << ctrl->getUeId() << ","
//                                << buf_len << ",";
//                    }

                }
                strncpy(p, outHdr.str().c_str(), strlen(outHdr.str().c_str()));
                p += strlen(outHdr.str().c_str());
            }

            // direction
            if (msg->arrivedOn("lowerLayerIn")) {
                strncpy(p, " r", 2);
            } else
                strncpy(p, " s", 2);
            p += 2;

        }

        // timestamp
        strncpy(p, " tm ", 4);
        p += 4;
        strncpy(p, time.c_str(), strlen(time.c_str()));
        p += strlen(time.c_str());

        if (writeHex) {
            fwrite(&dh, p - dh, 1, dumpfile);
            dumpPacket(buf, buf_len, HEX_DUMP);
        }

        if (writeAscii) {
            fwrite(&dh, p - dh, 1, dumpfile);
            dumpPacket(buf, buf_len, ASCII_DUMP);
        }
    }
    // forward
    int index = msg->getArrivalGate()->getIndex();
    int32 id = -1;
    if (msg->getArrivalGate()->isName("lowerLayerIn"))
        id = findGate("upperLayerOut", index);
    else
        id = findGate("lowerLayerOut", index);

    send(msg, id);
}

std::string DCTDump::timestamp(simtime_t stime) {
//    std::stringstream seconds;
//    std::stringstream subseconds;
    std::string out;

    out = stime.str();
    if (out.find('.') == std::string::npos)
        out += ".0000";

    if (out.size() - out.find('.') > 5)
        out = out.substr(0, out.find('.') + 5);
//    double test = 4.234;
//
//    seconds << test;
//    subseconds << ((stime.dbl() - stime.dbl())*1000000);
//    std::string tmp = seconds.str();
//    for (unsigned i = 0; i < tmp.size(); i++) {
//        if (i > 3)
//            break;
//        out += tmp[i];
//    }
//    out += ".";
//    tmp = subseconds.str();
//    for (unsigned i = 0; i < tmp.size(); i++) {
//        if (i > 3)
//            break;
//        out += tmp[i];
//    }
    return out;
}

void DCTDump::finish() {
     if (strcmp(this->par("dumpFile"),"")!=0) {
         fclose(dumpfile);
     }
}

void DCTDump::dumpPacket(uint8 *buf, int32 len, bool type) {
    if (len > 0) {
        std::string dump = " $";
        int32 j = 0;
        if (type == true) {
            for (int32 i = 0; i < len * 2; i++) {
                if (((buf[j]) >> (4 * ((i + 1) % 2)) & 0x0f) < 10)
                    dump += ((buf[j]) >> (4 * ((i + 1) % 2)) & 0x0f) + 48;
                else
                    dump += ((buf[j]) >> (4 * ((i + 1) % 2)) & 0x0f) + 87;
                j = j + i % 2;
            }
        } else {
            for (int32 i = 0; i < len; i++) {
                dump += (char)buf[i];
            }
        }
        dump += "\n";
        fwrite(dump.c_str(), dump.size(), 1, dumpfile);
    }
}




