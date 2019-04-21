#ifndef __UPDATEMANAGER_H
#define __UPDATEMANAGER_H

	//Initializes Timer
	void configureTimer(void);

	//Initializes RTC
	void configureRTC(void);

	//Generates delay of required time
	void delay(unsigned int);

	//Takes temperature reading from IOManager
   	int demandTemperatureData(void);

	//Takes humidity reading from IOManager
	int demandHumidityData(void);

	//Updates sensor information after every 2 secs 
	//Updates LCD & Instructs Storage Module to store the data
	void updateSensorData(void);

	//Displays current system state 
	void updateDisplay(void);

	//Sends data at predecided time to GSM Module
	//Calls method 'provideAvgOfSensorData()' from StorageManager
	void sendAverageToGSM();

#endif