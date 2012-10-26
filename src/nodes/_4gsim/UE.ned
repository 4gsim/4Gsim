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

import inet.linklayer.lte.rrc.RRC;
import inet.networklayer.ipv4.RoutingTable;
import inet.networklayer.common.InterfaceTable;
import inet.applications.pingapp.PingApp;
import inet.nodes.inet.NetworkLayer;
import inet.util.DCTDump;
import inet.util.subscriber.SubscriberTable;
import inet.base.NotificationBoard;
import inet.applications.nas.NAS;
import inet.linklayer.lte.LTERadio;
import inet.mobility.IMobility;

module UE
{
    parameters:
        @node();
        @display("i=device/cellphone;bgb=512,472");
        string mobilityType = default("StationaryMobility");
        string destAddr = default("");
        volatile double interval @unit("s") = default(1s);
        int channelNumber;
        string configFile;
    gates:
        input radioIn @directIn;
    submodules:
        mobility: <mobilityType> like IMobility {
            parameters:
                @display("p=50,61");
        }
        lteRadio: LTERadio {
            channelNumber = channelNumber;
            @display("p=227,287");
        }
        notificationBoard: NotificationBoard {
            @display("p=55,223");
        }
        subscriberTable: SubscriberTable {
            @display("p=55,135");
        }
        nas: NAS {
            @display("p=342,174");
            configFile = configFile;
            channelNumber = channelNumber;
        }
        networkLayer: NetworkLayer {
            @display("p=173,182");
        }
        pingApp: PingApp {
            destAddr = destAddr;
            @display("p=173,108");
        }
        interfaceTable: InterfaceTable {
            @display("p=61,302");
        }
        routingTable: RoutingTable {
            @display("p=266,54");
        }
        rrc: RRC {
            @display("p=381,281");
        }
        dctDump: DCTDump {
            @display("p=381,398");
        }
    connections allowunconnected:
        radioIn --> lteRadio.radioIn;

        lteRadio.upperLayerIn <-- nas.radioOut;
        lteRadio.upperLayerOut --> nas.radioIn;
        lteRadio.netOUT --> networkLayer.ifIn++;
        networkLayer.ifOut++ --> lteRadio.netIN;
        networkLayer.pingOut++ --> pingApp.pingIn;
        pingApp.pingOut --> networkLayer.pingIn++;
        rrc.rlcOut --> dctDump.netIn++;
        dctDump.netOut++ --> rrc.rlcIn;
        dctDump.ifOut++ --> rrc.nasIn;
        rrc.nasOut --> dctDump.ifIn++;
}
