
// TemperatureSensor.cpp

#include "TemperatureSensor.h"

const int TemperatureError = -1000;

// Function declarations

// Name: TemperatureSetup
// Parameters: int SensorPin - the pin the sensor is attached to
// Returns: True if the setup succeeds, false if it fails
bool TemperatureSetup(int SensorPin)
{
  Serial.println("Temperature sensor setup not yet implemented");

  return false;
}

// Name: TemperatureLoop
// Parameters: int SensorPin - the pin the sensor is attached to
// Returns: The current temperature, in degrees Celsius, or int.min if it has not been setup yet
int TemperatureLoop(int SensorPin)
{
  // TOOD: Implement this function
  
    int analogValue;
    float temperature;

    // read our temperature sensor
    analogValue = analogRead(SensorPin);

    // convert the 10bit analog value to celcius
    temperature = float(analogValue) / 1023;
    temperature = temperature * 500;
	
	return temperature;

  /*Serial.println("Temperature sensor loop not yet implemented");

  // Return an error
  return TemperatureError;*/
  
}
