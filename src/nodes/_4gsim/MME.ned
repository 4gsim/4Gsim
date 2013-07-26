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
import inet.networklayer.gtp.GTPControl;
import inet.transport.udp.UDP;
import inet.applications.diameter.DiameterBase;
import inet.applications.nas.NAS;
import inet.util.subscriber.SubscriberTable;
import inet.base.NotificationBoard;
import inet.linklayer.ethernet.EthernetInterface;
import inet.linklayer.ppp.PPPInterface;
import inet.linklayer.ext.ExtInterface;
import inet.networklayer.common.InterfaceTable;
import inet.networklayer.ipv4.RoutingTable;
import inet.nodes.inet.NetworkLayer;
import inet.transport.sctp.SCTP;
import inet.applications.pingapp.PingApp;
import inet.applications.s1ap.S1AP;
import inet.networklayer.gtp.tunnel.TunnelEndpointTable;
import inet.networklayer.gtp.path.GTPPathTable;
import inet.nodes.inet.NodeBase;

module MME extends NodeBase
{
    parameters:
        @node();
        @display("i=device/server;bgb=720,438");
        int numSctpApps = default(0);
        string sctpAppType = default("n/a");
        string configFile;
        int namid = default(-1);
        string dumpFile = default("");
    submodules:
        diameterBase: <"DiameterS6a"> like DiameterBase {
            configFile = configFile;
            @display("p=328,93");
        }
        pingApp: PingApp {
            parameters:
                @display("p=501,230");
        }
        sctp: SCTP {
            @display("p=408,163;i=block/wheelbarrow");
        }
        s1ap: S1AP {
            parameters:
                configFile = configFile;
                @display("p=501,93");
        }
        subscriberTable: SubscriberTable {
            @display("p=642,41");
        }
        nas: NAS {
            configFile = configFile;
            @display("p=462,26");
        }
        pathTable: GTPPathTable {
            @display("p=642,180");
        }
        tunnelEndpointTable: TunnelEndpointTable {
            @display("p=642,110");
        }
        udp: UDP {
            @display("p=225,163");
        }
        gtpc: GTPControl {
            configFile = configFile;
            @display("p=203,93");
        }
        gatewayTable: GatewayTable {
            configFile = configFile;
            @display("p=613,269");
        }
    connections allowunconnected:
        sctp.to_appl++ --> s1ap.sctpIn;
        s1ap.sctpOut --> sctp.from_appl++;

        sctp.to_ip --> networkLayer.sctpIn;
        networkLayer.sctpOut --> sctp.from_ip;

        networkLayer.pingOut++ --> pingApp.pingIn;
        networkLayer.pingIn++ <-- pingApp.pingOut;

        // connections to network outside
        for i=0..sizeof(pppg)-1 {
            pppg[i] <--> ppp[i].phys;
        }

        for i=0..sizeof(ethg)-1 {
            ethg[i] <--> eth[i].phys;
        }

        nas.s1apOut --> s1ap.nasIn;
        s1ap.nasOut --> nas.s1apIn;
        diameterBase.sctpOut --> sctp.from_appl++;
        sctp.to_appl++ --> diameterBase.sctpIn;
        udp.ipOut --> networkLayer.udpIn;
        networkLayer.udpOut --> udp.ipIn;
        udp.appOut++ --> gtpc.udpIn;
        gtpc.udpOut --> udp.appIn++;
}
