#ifndef DISPLAYMANAGER_H_INCLUDED
#define DISPLAYMANAGER_H_INCLUDED

	const int STATE_STARTUP = 0;
	const int STATE_GETTING_SENSOR_DATA = 1;
	const int STATE_STORED_SENSOR_DATA = 2;
	const int STATE_SENDING_SENSOR_DATA = 3;

	//LCD is initialized 
	void configureLCD(void);

	//One of the system-states is passed as argument
	void updateLCDState(int);

	//Message according to system state is displayed on LCD
	void displayLCDMessage(void);

#endif