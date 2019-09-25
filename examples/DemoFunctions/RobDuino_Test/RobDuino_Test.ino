////////////////////////////////////////////////////////
// TEST VMESNIKA
// 1. Naložite program.
// 2. Preskusite delovanje vmesnika tako, da pritiskate na tipki C4 ali C5...
// link:https://sites.google.com/site/drtirobotika/izobrazevanje/arduino/robotika-v-tehniki/freewhellyarduino#TOC-Priklju-itev-vmesnika
////////////////////////////////////////////////////////
#include "RobDuino.h"         
Button TipkaC4(pC4);  
Button TipkaC5(pC5);        
int i = 1;
void setup()
{
  PORTD = i;
}

void loop()
{
  if (TipkaC4.down()){
    i = i<<1;
    if (i>255) i = 1;
  }
  if (TipkaC5.down()){
    i = i>>1;
    if (i<1) i = 128;
  }
  PORTD = i;
  delay(50);
}

