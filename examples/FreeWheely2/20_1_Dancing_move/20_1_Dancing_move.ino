#include "RobotMovingFunctions.h"
void setup()
{
  setIOpins();
  // Funny dancing move.
  int i = 0;
  for (i = 0; i < 10; i++)
  {
    robotLeft();
    delay(100);
    robotRight();
    delay(100);
  }
  robotStop();
}
void loop()
{
}
