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

package inet.examples._4gsim;

import inet.examples.ethernet.lans.LargeLAN;
import inet.nodes._4gsim.SGW;
import inet.nodes._4gsim.PGW;
import inet.nodes._4gsim.HSS;
import inet.nodes._4gsim.MME;
import inet.networklayer.autorouting.FlatNetworkConfigurator;
import inet.nodes._4gsim.UE;
import inet.nodes._4gsim.ENB;
import inet.world.ChannelControl;
import ned.DatarateChannel;

network Test
{
    parameters:
        double playgroundSizeX;
        double playgroundSizeY;
        @display("p=10,10;b=712,152;bgb=540,367");
    types:
    submodules:
        enb: ENB {
            @display("p=110,218");
        }
        ue2: UE {
            @display("p=30,200");
        }
        channelcontrol: ChannelControl {
            playgroundSizeX = playgroundSizeX;
            playgroundSizeY = playgroundSizeY;
            @display("p=110,36");
        }
        mme: MME {
            @display("p=278,207");
        }
        ue1: UE {
            @display("p=106,108");
        }
        hss: HSS {
            @display("p=363,129");
        }
        pgw: PGW {
            @display("p=448,312");
        }
        sgw: SGW {
            @display("p=220,322");
        }
    connections:
        enb.ethg++ <--> mme.ethg++;
        hss.ethg++ <--> mme.ethg++;
        sgw.ethg++ <--> pgw.ethg++;
        mme.ethg++ <--> sgw.ethg++;
        sgw.ethg++ <--> pgw.ethg++;
        enb.ethg++ <--> sgw.ethg++;
}

