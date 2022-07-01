#include "RobotMovingFunctions.h"
const int DIST_SEN_PIN   = A0;
const int DISTANCE_LIMIT = 20;
void setup()
{
  setIOpins();
  pinMode(DIST_SEN_PIN,INPUT);
}
float getDistance_cm()
{
  int sen_val    = analogRead(DIST_SEN_PIN);
  float distance = 1/(0.045*sen_val);
  return distance;
}
void loop()
{
  if ( getDistance_cm() > DISTANCE_LIMIT )
  {
    robotForward();
  }
  else
  {
    robotStop();
  }
}
