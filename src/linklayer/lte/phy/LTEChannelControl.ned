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

package inet.linklayer.lte.phy;

simple LTEChannelControl
{
    parameters:
        bool coreDebug = default(false); // debug switch for core framework
        double pMax @unit("mW") = default(20mW); // maximum sending power used for this network (in mW)
        double sat @unit("dBm") = default(-110dBm); // signal attenuation threshold (in dBm)
        double alpha = default(2); // path loss coefficient
        double carrierFrequency @unit("Hz") = default(2.4GHz); // base carrier frequency of all the channels (in Hz)
        int numChannels = default(1); // number of radio channels (frequencies)
        string propagationModel @enum("FreeSpaceModel","TwoRayGroundModel","RiceModel","RayleighModel","NakagamiModel","LogNormalShadowingModel") = default("FreeSpaceModel");
        @display("i=misc/sun");
        @labels(node);
};
