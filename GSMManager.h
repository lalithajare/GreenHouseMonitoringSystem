#ifndef __GSMMANAGER_H
#define __GSMMANAGER_H

#include "IOManager.h"
	
	//GSM is configured
	void configureGSM(void);

	//Sensor data is sent
	void sendData(SensorInformation);

#endif