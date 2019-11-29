
// LightSensor.cpp

#include "LightSensor.h"

const int LightError = -1000;

// Function declarations

// Name: LightSetup
// Parameters: int SensorPin - the pin the sensor is attached to
// Returns: True if the setup succeeds, false if it fails
bool LightSetup(int SensorPin)
{
  Serial.println("Light sensor setup not yet implemented");

  return false;
}

// Name: LightLoop
// Parameters: int SensorPin - the pin the sensor is attached to
// Returns: The current Light, in degrees Celsius, or int.min if it has not been setup yet
int LightLoop(int SensorPin)
{
  // TOOD: Implement this function
  Serial.println("Light sensor loop not yet implemented");

  // Return an error
  return LightError;
}
