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

import inet.applications.diameter.DiameterBase;
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
import inet.nodes.inet.NodeBase;

module HSS extends NodeBase
{
    parameters:
        @node();
        @display("i=abstract/db;bgb=576,436");
        int numSctpApps = default(0);
        string sctpAppType = default("n/a");
        string tcpType = default("TCP");  // tcp implementation (e.g. TCP, TCP_old, TCP_NSC)
        string configFile;
        int namid = default(-1);
        string dumpFile = default("");
    submodules:
        subscriberTable: SubscriberTable {
            configFile = configFile;
            @display("p=142,93");
        }
        diameterBase: <"DiameterS6a"> like DiameterBase {
            configFile = configFile;
            @display("p=386,93");
        }
        pingApp: PingApp {
            parameters:
                @display("p=501,230");
        }
        sctp: SCTP {
            @display("p=501,141;i=block/wheelbarrow");
        }
    connections allowunconnected:
        sctp.to_ip --> networkLayer.sctpIn;
        networkLayer.sctpOut --> sctp.from_ip;

        networkLayer.pingOut++ --> pingApp.pingIn;
        networkLayer.pingIn++ <-- pingApp.pingOut;

        diameterBase.sctpOut --> sctp.from_appl++;
        sctp.to_appl++ --> diameterBase.sctpIn;

        // connections to network outside
        for i=0..sizeof(pppg)-1 {
            pppg[i] <--> ppp[i].phys;
        }

        for i=0..sizeof(ethg)-1 {
            ethg[i] <--> eth[i].phys;
        }

}

