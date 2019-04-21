/*
  This module is used to schedule the updates of I/O and instruct the Storage Manager to save the data.
*/
#include <LPC214X.H>
#include "UpdateManager.h"

	void configureTimer(void){
		T0CTCR = 0x0; //Timer Mode
		T0TCR = 0x00; //Timer OFF
		T0PR = 59999; //Prescalar values for 1ms
		T0TCR = 0x02; //Timer Reset
	}

	
	//Initializes RTC
	void configureRTC(void){

	}
	
	void delay(unsigned int z){
	 	T0CTCR=0x0;                                 //Select Timer Mode
    	T0TCR=0x00;                 //Timer off
    	T0PR=59999;                 //Prescaler value for 1ms
    	T0TCR=0x02;                 //Timer reset
    	T0TCR=0x01;                 //Timer ON
   		while(T0TC<z);           
   		T0TCR=0x00;                 //Timer OFF
   		T0TC=0;     
	}


	//Takes temperature reading from IOManager
   	int demandTemperatureData(void){

	}

	//Takes humidity reading from IOManager
	int demandHumidityData(void){

	}

	//Updates sensor information after every 2 secs 
	//Updates LCD & Instructs Storage Module to store the data
	void updateSensorData(void){

	}

	//Displays current system state 
	void updateDisplay(void){

	}

	//Sends data at predecided time to GSM Module
	//Calls method 'provideAvgOfSensorData()' from StorageManager
	void sendAverageToGSM(){
	
	}	