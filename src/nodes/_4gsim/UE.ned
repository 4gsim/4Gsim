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

import inet.linklayer.lte.LTEConfig;
import inet.linklayer.lte.LTEScheduler;
import inet.linklayer.lte.mac.MAC;
import inet.linklayer.lte.pdcp.PDCP;
import inet.linklayer.lte.rlc.RLC;
import inet.linklayer.lte.rrc.RRC;
import inet.networklayer.ipv4.RoutingTable;
import inet.networklayer.common.InterfaceTable;
import inet.applications.pingapp.PingApp;
import inet.nodes.inet.NetworkLayer;
import inet.util.DCTDump;
import inet.util.subscriber.SubscriberTable;
import inet.base.NotificationBoard;
import inet.applications.nas.NAS;
import inet.linklayer.lte.phy.LTERadio;
import inet.mobility.IMobility;

module UE
{
    parameters:
        @node();
        @display("i=device/cellphone;bgb=512,472");
        string mobilityType = default("StationaryMobility");
        string destAddr = default("");
        volatile double interval @unit("s") = default(1s);
        string configFile;
        string dumpFile = default("");
    gates:
        input radioIn @directIn;
    submodules:
        mobility: <mobilityType> like IMobility {
            parameters:
                @display("p=50,61");
        }
        lteConfig: LTEConfig {
            parameters:
                @display("p=433,202");
                configFile = configFile;
        }
        lteScheduler: LTEScheduler {
            @display("p=424,290");
        }
        lteRadio: LTERadio {
            @display("p=273,420");
        }
        notificationBoard: NotificationBoard {
            @display("p=55,223");
        }
        subscriberTable: SubscriberTable {
            @display("p=55,135");
        }
        interfaceTable: InterfaceTable {
            @display("p=61,302");
        }
        routingTable: RoutingTable {
            @display("p=453,61");
        }
        mac: MAC {
            @display("p=273,302");
        }
        dctDump: DCTDump {
            parameters:
                dumpFile = dumpFile;
                @display("p=194,360");
        }
        pdcp: PDCP {
            @display("p=273,184");
        }
        rlc: RLC {
            @display("p=194,244");
        }
        rrc: RRC {
            @display("p=213,121");
        }
        nas: NAS {
            parameters:
                configFile = configFile;
                @display("p=329,46");
        }
    connections allowunconnected:
        radioIn --> lteRadio.radioIn;

        mac.lowerLayerOut --> dctDump.upperLayerIn++;
        dctDump.upperLayerOut++ --> mac.lowerLayerIn;
        lteRadio.upperLayerOut --> dctDump.lowerLayerIn++;
        dctDump.lowerLayerOut++ --> lteRadio.upperLayerIn;
        mac.upperLayerOut --> rlc.lowerLayerIn;
        rlc.lowerLayerOut --> mac.upperLayerIn;
        rlc.upperLayerOut --> pdcp.lowerLayerIn;
        pdcp.lowerLayerOut --> rlc.upperLayerIn;
        rrc.lowerLayerOut --> pdcp.upperLayerIn;
        pdcp.upperLayerOut --> rrc.lowerLayerIn;
}
