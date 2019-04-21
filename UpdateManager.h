#ifndef UPDATEMANAGER_H_INCLUDED
#define UPDATEMANAGER_H_INCLUDED

#include "IOManager.h"

	//Initializes Timer
	void configureTimer();

	//Initializes RTC
	void configureRTC();


	//Takes temperature reading from IOManager
   	int demandTemperatureData(void);

	//Takes humidity reading from IOManager
	int demandHumidityData(void);

	//Updates sensor information after every 2 secs 
	//Updates LCD & Instructs Storage Module to store the data
	void updateSensorData();

	//Displays current system state 
	void updateDisplay();

	//Sends data at predecided time to GSM Module
	//Calls method 'provideAvgOfSensorData()' from StorageManager
	void sendAverageToGSM();

#endif