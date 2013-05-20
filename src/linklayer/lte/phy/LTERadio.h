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

#ifndef LTERADIO_H_
#define LTERADIO_H_

#include "ChannelAccess.h"
#include "RadioState.h"
#include "AirFrame_m.h"
#include "IRadioModel.h"
#include "IReceptionModel.h"
#include "SnrList.h"
#include "ObstacleControl.h"
#include "IPowerControl.h"
#include "INoiseGenerator.h"
#include "InterfaceTable.h"
#include "LTEPhyControlInfo_m.h"
#include "LTEFrame_m.h"
#include "LTEConfigAccess.h"
#include "LTESchedulerAccess.h"
#include "MACMessage.h"

#define HARQ_FEEDBACK_DELAY 1
#define HARQ_FEEDBACK_ACK   1
#define HARQ_FEEDBACK_NACK  0
#define PRB_MAX_SIZE        6

//enum kind {
//	control = 0,
//	user = 1
//};

//static const char *prbNames[PRB_MAX_SIZE] = { "PRB1", "PRB2", "PRB3", "PRB4", "PRB5", "PRB6" };

class LTERadio : public ChannelAccess, INotifiable {
public:
	LTERadio();
	virtual ~LTERadio();
protected:
	RadioState rs;

    IRadioModel *radioModel;
    IReceptionModel *receptionModel;
    IInterfaceTable *ift;

//    std::list<HARQFrame*> harqFbs;

    cMessage *ttiTimer;
//    std::vector<TransportBlock*> tbBuffer;
    PhysicalResourceBlock *subFrame[PRB_MAX_SIZE];

    NotificationBoard *nb;

    LTEConfig *lteCfg;
    LTEScheduler *lteSched;

    std::map<int, TransportBlock*> queue;
    typedef std::vector<DCIFormat*> DCIFormats;
    DCIFormats dcis;

    unsigned dir;
    char *dirStr;

    unsigned ueId;

	virtual IReceptionModel *createReceptionModel() {return (IReceptionModel *)createOne("FreeSpaceModel");}
    virtual IRadioModel *createRadioModel() {return (IRadioModel *)createOne("LTERadioModel");}
	virtual int numInitStages() const {
		return 5;
	}
    virtual void initialize(int stage);
    virtual void handleMessage(cMessage *msg);

    virtual void handleUpperMessage(cMessage *msg);
    virtual void handleRadioMessage(cMessage *msg);

    //virtual AirFrame *encapsulatePacket(cPacket *frame);

    // implements function from ChannelAccess
    void sendToRadio(cMessage *msg, int channel);
    void sendUp(LTEFrame *frame, LTEPhyControlInfo *ctrl);
    void scheduleHARQFeedback(bool harqIndicator, unsigned ueId);

    virtual void receiveChangeNotification(int category, const cPolymorphic *details) {}
    void sendDown(TransportBlock *tb);
    void sendDCIFormats();
    void checkDCIFormats(TransportBlock *tb);
    //virtual void sendDown(AirFrame *airframe);
//    virtual void sendUp(AirFrame *airframe);
};

#endif /* LTERADIO_H_ */
