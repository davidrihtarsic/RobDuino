#include "RobotMovingFunctions.h"
void setup()
{
  setIOpins();
  //to-do: config the A4 and A5 pins

  //to-do: while-loop waiting for A4 is pressed
}
void loop()
{
  robotForward();
  //to-do: Stop the robot when A5 key is pressed
  bool stopTheRobotKey = 0;
  if (stopTheRobotKey == 1)
  {
    robotStop();
    exit(0);     //terminate the program
  }
}

