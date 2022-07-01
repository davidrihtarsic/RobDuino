#include "RobotMovingFunctions.h"
const int BUMPER_PIN = A0;
void loop()
{
  bool bumperIsPressed = digitalRead(BUMPER_PIN);
  if ( bumperIsPressed )
  {
    robotStop();
  }
  else
  {
    robotForward();
  }
}
void setup()
{
  setIOpins();
  pinMode( BUMPER_PIN, INPUT);
}
