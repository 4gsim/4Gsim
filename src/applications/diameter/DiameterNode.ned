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

package inet.applications.diameter;

import inet.applications.pingapp.PingApp;
import inet.applications.diameter.DiameterBase;
import inet.base.NotificationBoard;
import inet.linklayer.ethernet.EthernetInterface;
import inet.linklayer.ext.ExtInterface;
import inet.linklayer.ppp.PPPInterface;
import inet.networklayer.common.InterfaceTable;
import inet.networklayer.ipv4.RoutingTable;
import inet.transport.sctp.SCTP;
import inet.util.DCTDump;
import inet.nodes.inet.NetworkLayer;


module DiameterNode
{
    parameters:
        @node();
        @labels(node,ethernet-node);
        @display("i=device/pc2");
        int numSctpApps = default(0);
        string sctpAppType = default("n/a");
        string diameterAppType = default("n/a");
        string tcpType = default("TCP");  // tcp implementation (e.g. TCP, TCP_old, TCP_NSC)
        string configFile;
        bool IPForward = default(false);
        int namid = default(-1);
        string routingFile = default("");
        int numExtInterfaces = default(0);
        string dumpFile = default("");
    gates:
        inout pppg[] @labels(PPPFrame-conn);
        inout ethg[] @labels(EtherFrame-conn);
    submodules:
        notificationBoard: NotificationBoard {
            parameters:
                @display("p=57,54");
        }
        interfaceTable: InterfaceTable {
            parameters:
                @display("p=57,134");
        }
        routingTable: RoutingTable {
            parameters:
                IPForward = IPForward;
                routerId = "";
                routingFile = routingFile;
                @display("p=57,214");
        }
        sctp: SCTP {
            @display("p=320,105;i=block/wheelbarrow");
        }
        pingApp: PingApp {
            parameters:
                @display("p=320,179");
        }
        networkLayer: NetworkLayer {
            parameters:
                proxyARP = false;
                @display("p=206,179;q=queue");
            gates:
                ifIn[sizeof(pppg)+sizeof(ethg)+numExtInterfaces];
                ifOut[sizeof(pppg)+sizeof(ethg)+numExtInterfaces];
        }
        ppp[sizeof(pppg)]: PPPInterface {
            parameters:
                @display("p=64,352,row,90;q=txQueue");
        }
        eth[sizeof(ethg)]: EthernetInterface {
            parameters:
                @display("p=206,352,row,90;q=txQueue");
        }
        ext[numExtInterfaces]: ExtInterface {
            parameters:
                @display("p=320,352,row,90;q=txQueue;i=block/ifcard");
        }
        dctdump: DCTDump {
            parameters:
                @display("p=206,264;i=abstract/cache_s");
                dumpFile = dumpFile;
            gates:
                ifIn[sizeof(pppg)+sizeof(ethg)+numExtInterfaces];
                netIn[sizeof(pppg)+sizeof(ethg)+numExtInterfaces];
                ifOut[sizeof(pppg)+sizeof(ethg)+numExtInterfaces];
                netOut[sizeof(pppg)+sizeof(ethg)+numExtInterfaces];
        }
        diameter: <diameterAppType> like DiameterBase {
            parameters:
                configFile = configFile;
                @display("p=206,40");
        }
    connections allowunconnected:
        sctp.to_appl++ --> diameter.sctpIn;
        diameter.sctpOut --> sctp.from_appl++;

        sctp.to_ip --> networkLayer.sctpIn;
        networkLayer.sctpOut --> sctp.from_ip;

        networkLayer.pingOut++ --> pingApp.pingIn;
        networkLayer.pingIn++ <-- pingApp.pingOut;

        // connections to network outside
        for i=0..sizeof(pppg)-1 {
            pppg[i] <--> ppp[i].phys;
            ppp[i].upperLayerOut --> dctdump.ifIn[i];
            dctdump.netOut[i] --> networkLayer.ifIn[i];
            ppp[i].upperLayerIn <-- dctdump.ifOut[i];
            dctdump.netIn[i] <-- networkLayer.ifOut[i];
        }

        for i=0..sizeof(ethg)-1 {
            ethg[i] <--> eth[i].phys;
            eth[i].upperLayerOut --> dctdump.ifIn[sizeof(pppg)+i];
            dctdump.netOut[sizeof(pppg)+i] --> networkLayer.ifIn[sizeof(pppg)+i];
            eth[i].upperLayerIn <-- dctdump.ifOut[sizeof(pppg)+i];
            dctdump.netIn[sizeof(pppg)+i] <-- networkLayer.ifOut[sizeof(pppg)+i];
        }

        for i=0..numExtInterfaces-1 {
            ext[i].upperLayerOut --> dctdump.ifIn[sizeof(pppg)+sizeof(ethg)+i];
            dctdump.netOut[sizeof(pppg)+sizeof(ethg)+i] --> networkLayer.ifIn[sizeof(pppg)+sizeof(ethg)+i];
            ext[i].upperLayerIn <-- dctdump.ifOut[sizeof(pppg)+sizeof(ethg)+i];
            dctdump.netIn[sizeof(pppg)+sizeof(ethg)+i] <-- networkLayer.ifOut[sizeof(pppg)+sizeof(ethg)+i];
        }
}
