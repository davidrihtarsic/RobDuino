#include "RobotMovingFunctions.h"
const int LIGHT_SENSOR_PIN = A0;
const int EDGE_LIGHTING    = 250;

void robotForwardPWM()
{
  digitalWrite( LEFT_MOTOR_PIN_1, LOW);
  analogWrite(  LEFT_MOTOR_PIN_2, 150);
  digitalWrite( RIGHT_MOTOR_PIN_1, LOW);
  analogWrite(  RIGHT_MOTOR_PIN_2, 150);
}

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
    robotLeft();
  }
  else
  {
    robotRight();
  }
}
