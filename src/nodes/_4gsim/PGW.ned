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

package inet.nodes._4gsim;

import inet.util.gateway.GatewayTable;
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
import inet.nodes.inet.NetworkLayer;
import inet.networklayer.gtp.GTPControl;
import inet.networklayer.gtp.tunnel.TunnelEndpointTable;
import inet.networklayer.gtp.path.GTPPathTable;
import inet.nodes.inet.NodeBase;

module PGW extends NodeBase
{
    parameters:
        @node();
        @labels(node,ethernet-node);
        @display("i=device/router");
        int numUdpApps = 2;
        string udpAppType = default("n/a");
        int namid = default(-1);
        string configFile;
        string dumpFile = default("");
    submodules:
        udp: UDP {
            parameters:
                @display("p=336,141");
        }
        pingApp: PingApp {
            parameters:
                @display("p=501,230");
        }
        gtpc: GTPControl {
            @display("p=414,67");
            configFile = configFile;
        }
        subscriberTable: SubscriberTable {
            @display("p=59,368");
        }
        gtpu: GTPUser {
            @display("p=277,70");
            configFile = configFile;
        }
        tunnelEndpointTable: TunnelEndpointTable {
            @display("p=153,43");
        }
        pathTable: GTPPathTable {
            @display("p=153,152");
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
        }

        for i=0..sizeof(ethg)-1 {
            ethg[i] <--> eth[i].phys;
        }

}
