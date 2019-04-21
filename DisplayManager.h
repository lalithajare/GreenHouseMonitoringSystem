#ifndef __DISPLAYMANAGER_H
#define __DISPLAYMANAGER_H

	//LCD is initialized 
	void configureLCD(void);

	//One of the system-states is passed as argument
	void updateLCDState(int);

	//Message according to system state is displayed on LCD
	void displayLCDMessage(void);

#endif