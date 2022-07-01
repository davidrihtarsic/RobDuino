#include "RobotMovingFunctions.h"
int time_on_black = 0;
int time_on_white = 0;
void setup()
{
  setIOpins();
}
void loop()
{
  int lightSensorValue= analogRead(A1);
  if ( lightSensorValue < 400 )
  {
    // BLACK area
    robotLeft();
    time_on_white = 0; // reset time on white
    time_on_black++;   // meas. time on black
    delay(100);
  }
  else
  {
    // WHITE area
    robotRight();
    // Do similar meas.
    // of time on white
    delay(100);
    // If time is signif.
    // longer:
    // robotStop();exit(0);
  }
}
