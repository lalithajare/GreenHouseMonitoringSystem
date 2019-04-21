#ifndef GSMMANAGER_H_INCLUDED
#define GSMMANAGER_H_INCLUDED

#include "IOManager.h"
	
	//GSM is configured
	void configureGSM(void);

	//Sensor data is sent
	void sendData(SensorInformation);

#endif