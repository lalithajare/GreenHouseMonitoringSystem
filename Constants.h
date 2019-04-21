#ifndef __CONSTANTS_H
#define __CONSTANTS_H

	const int TEMP_THRESHOLD = 40;
	const int HUMIDITY_THRESHOLD = 10;

	
	const int STATE_STARTUP = 0;
	const int STATE_GETTING_SENSOR_DATA = 1;
	const int STATE_STORED_SENSOR_DATA = 2;
	const int STATE_SENDING_SENSOR_DATA = 3;

#endif
