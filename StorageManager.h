#ifndef STORAGEMANAGER_H_INCLUDED
#define STORAGEMANAGER_H_INCLUDED

#include "IOManager.h"

	//Initializes I2C 
	void configureI2C(void)

	//Stores the data into EPROM via I2C
	void storeSensorData(SensorInformation);

	SensorInformation provideAvgOfSensorData(void);

#endif