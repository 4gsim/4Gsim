//
// Copyright (C) 2012 Calin Cerchez
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this program; if not, see <http://www.gnu.org/licenses/>.
//


package inet.networklayer.gtp;

import inet.networklayer.gtp.GTPUser;
import inet.util.subscriber.SubscriberTable;
import inet.applications.pingapp.PingApp;
import inet.base.NotificationBoard;
import inet.linklayer.ethernet.EthernetInterface;
import inet.linklayer.ext.ExtInterface;
import inet.linklayer.ppp.PPPInterface;
import inet.networklayer.common.InterfaceTable;
import inet.networklayer.ipv4.RoutingTable;
import inet.transport.sctp.SCTP;
import inet.transport.udp.UDP;
import inet.util.DCTDump;
import inet.nodes.inet.NetworkLayer;
import inet.networklayer.gtp.GTPControl;
import inet.networklayer.gtp.path.GTPPathTable;
import inet.networklayer.gtp.tunnel.TunnelEndpointTable;

//
// 
//
module GTPNode
{
    parameters:
        @node();
        @labels(node,ethernet-node);
        @display("i=device/pc2;bgb=573,427");
        int numUdpApps = 2;
        string udpAppType = default("n/a");
        string gtpType = default("n/a");
        bool IPForward = default(false);
        int namid = default(-1);
        string routingFile = default("");
        int numExtInterfaces = default(0);
        string configFile;
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
        udp: UDP {
            parameters:
                @display("p=336,141");
        }
        pingApp: PingApp {
            parameters:
                @display("p=501,230");
        }
        networkLayer: NetworkLayer {
            parameters:
                proxyARP = false;
                @display("p=336,230;q=queue");
            gates:
                ifIn[sizeof(pppg)+sizeof(ethg)+numExtInterfaces];
                ifOut[sizeof(pppg)+sizeof(ethg)+numExtInterfaces];
        }
        ppp[sizeof(pppg)]: PPPInterface {
            parameters:
                @display("p=186,390,row,90;q=txQueue");
        }
        eth[sizeof(ethg)]: EthernetInterface {
            parameters:
                @display("p=336,390,row,90;q=txQueue");
        }
        ext[numExtInterfaces]: ExtInterface {
            parameters:
                @display("p=501,390,row,90;q=txQueue;i=block/ifcard");
        }
        dctdump: DCTDump {
            parameters:
                dumpFile = dumpFile;
            gates:
                lowerLayerIn[sizeof(pppg)+sizeof(ethg)+numExtInterfaces];
                upperLayerIn[sizeof(pppg)+sizeof(ethg)+numExtInterfaces];
                lowerLayerOut[sizeof(pppg)+sizeof(ethg)+numExtInterfaces];
                upperLayerOut[sizeof(pppg)+sizeof(ethg)+numExtInterfaces];
        }

        gtpc: GTPControl {
            @display("p=414,67");
            configFile = configFile;
        }
        subscriberTable: SubscriberTable {
            @display("p=59,368");
            configFile = configFile;
        }
        gtpu: GTPUser {
            @display("p=277,70");
            configFile = configFile;
        }
        tunnelEndpointTable: TunnelEndpointTable {
            @display("p=155,253");
        }
        pathTable: GTPPathTable {
            @display("p=155,173");
        }
    connections allowunconnected:
        gtpc.udpOut --> udp.appIn++;
        gtpc.udpIn <-- udp.appOut++;

        gtpu.udpOut --> udp.appIn++;
        gtpu.udpIn <-- udp.appOut++;

        udp.ipOut --> networkLayer.udpIn;
        udp.ipIn <-- networkLayer.udpOut;

        networkLayer.pingOut++ --> pingApp.pingIn;
        networkLayer.pingIn++ <-- pingApp.pingOut;

        // connections to network outside
        for i=0..sizeof(pppg)-1 {
            pppg[i] <--> ppp[i].phys;
            ppp[i].upperLayerOut --> dctdump.lowerLayerIn[i];
            dctdump.upperLayerOut[i] --> networkLayer.ifIn[i];
            ppp[i].upperLayerIn <-- dctdump.lowerLayerOut[i];
            dctdump.upperLayerIn[i] <-- networkLayer.ifOut[i];
        }

        for i=0..sizeof(ethg)-1 {
            ethg[i] <--> eth[i].phys;
            eth[i].upperLayerOut --> dctdump.lowerLayerIn[sizeof(pppg)+i];
            dctdump.upperLayerOut[sizeof(pppg)+i] --> networkLayer.ifIn[sizeof(pppg)+i];
            eth[i].upperLayerIn <-- dctdump.lowerLayerOut[sizeof(pppg)+i];
            dctdump.upperLayerIn[sizeof(pppg)+i] <-- networkLayer.ifOut[sizeof(pppg)+i];
        }

        for i=0..numExtInterfaces-1 {
            ext[i].upperLayerOut --> dctdump.lowerLayerIn[sizeof(pppg)+sizeof(ethg)+i];
            dctdump.upperLayerOut[sizeof(pppg)+sizeof(ethg)+i] --> networkLayer.ifIn[sizeof(pppg)+sizeof(ethg)+i];
            ext[i].upperLayerIn <-- dctdump.lowerLayerOut[sizeof(pppg)+sizeof(ethg)+i];
            dctdump.upperLayerIn[sizeof(pppg)+sizeof(ethg)+i] <-- networkLayer.ifOut[sizeof(pppg)+sizeof(ethg)+i];
        }
}
