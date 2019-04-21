#include <lpc214x.h>

#include "Constants.h"
#include "IOManager.h"
#include "UpdateManager.h"
#include "StorageManager.h"
#include "DisplayManager.h"
#include "GSMManager.h"

int main(void){
	//Initialize all modules		
	configureLCD();
	configureI2C();
	configureTimer();
	configureRTC();
	configureADC();
	configureGSM();

	updateLCDState(STATE_STARTUP);

	while(1){
		
		//after every 2 secs read sensor data	   {TIME LOGIC}
		updateLCDState(STATE_GETTING_SENSOR_DATA);
	 	IO0SET=0xffffffff;        
		delay(2000);               //1sec delay
		updateSensorData();
		updateLCDState(STATE_STORED_SENSOR_DATA);
        IO0CLR=0xffffffff;
        delay(2000); 

	}
	 
	return 0;
}