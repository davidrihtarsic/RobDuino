#include "RobotMovingFunctions.h"
const int LIGHT_SENSOR_PIN = A0;
const int EDGE_LIGHTING    = 250;
void setup()
{
  setIOpins();
  pinMode(LIGHT_SENSOR_PIN, INPUT);
}
void loop()
{
  int light_sensor_value = analogRead(LIGHT_SENSOR_PIN);
  if ( light_sensor_value < EDGE_LIGHTING )
  {
    // do this if robot is over the black line

  }
  else
  {
    // do this if robot is over white area

  }
}
