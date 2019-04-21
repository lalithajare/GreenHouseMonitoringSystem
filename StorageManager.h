#ifndef __STORAGEMANAGER_H
#define __STORAGEMANAGER_H

#include "IOManager.h"

	//Initializes I2C 
	void configureI2C(void);

	//Stores the data into EPROM via I2C
	void storeSensorData(SensorInformation);

	//Calculates average of whole day's data
	SensorInformation provideAvgOfSensorData(void);

#endif