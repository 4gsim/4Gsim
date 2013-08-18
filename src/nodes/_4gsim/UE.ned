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

import inet.linklayer.lte.mac.MACue;
import inet.linklayer.lte.mac.MACScheduler;
import inet.linklayer.lte.pdcp.PDCP;
import inet.linklayer.lte.phy.PHYue;
import inet.linklayer.lte.rlc.RLC;
import inet.linklayer.lte.rrc.RRCue;
import inet.linklayer.lte.LTEControl;
import inet.networklayer.ipv4.RoutingTable;
import inet.networklayer.common.InterfaceTable;
import inet.applications.pingapp.PingApp;
import inet.nodes.inet.NetworkLayer;
import inet.util.subscriber.SubscriberTable;
import inet.base.NotificationBoard;
import inet.applications.nas.NAS;
import inet.mobility.IMobility;

module UE
{
    parameters:
        @node();
        @display("i=device/cellphone;bgb=495,472");
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
            @display("p=423,61");
        }
        nas: NAS {
            parameters:
                configFile = configFile;
                @display("p=329,46");
        }
        phy: PHYue {
            @display("p=249,426");
        }
        maCue: MACue {
            @display("p=234,331");
        }
        rlc: RLC {
            @display("p=197,239");
        }
        pdcp: PDCP {
            @display("p=280,166");
        }
        rrcUe: RRCue {
            @display("p=194,88");
        }
        macScheduler: MACScheduler {
            @display("p=423,149");
        }
        lteControl: LTEControl {
            parameters:
                @display("p=423,232");
                configFile = configFile;
        }
    connections allowunconnected:
        phy.upperLayerOut --> maCue.lowerLayerIn;
        maCue.lowerLayerOut --> phy.upperLayerIn;
        rrcUe.lowerLayerOut --> pdcp.upperLayerIn;
        pdcp.upperLayerOut --> rrcUe.lowerLayerIn;
        rlc.upperLayerOut --> pdcp.lowerLayerIn;
        pdcp.lowerLayerOut --> rlc.upperLayerIn;
        rlc.lowerLayerOut --> maCue.upperLayerIn;
        maCue.upperLayerOut --> rlc.lowerLayerIn;
}
