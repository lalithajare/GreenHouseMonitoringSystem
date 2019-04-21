#ifndef IOMANAGER_H_INCLUDED
#define IOMANAGER_H_INCLUDED

	typedef struct SensorData{
	 	int temperature;
		int humidity;
	}SensorInformation;


	//Initializes ADC
	void configureADC(void);

	//Takes the data from temperature sensor
	void readTemperature(void);

	//Takes the data from humidity sensor
	void readHumidity(void);
	
	//Starts sprinkler if humidity threshold is crossed.
	void activateSprinklers(void);

#endif