////////////////////////////////////////////////////////
// TEST VMESNIKA
// 1. Naložite program.
// 2. Preskusite delovanje vmesnika tako, da pritiskate na tipki C4 ali C5...
// link:https://sites.google.com/site/drtirobotika/izobrazevanje/arduino/robotika-v-tehniki/freewheely-rob#TOC-Priklju-itev-vmesnika
////////////////////////////////////////////////////////
#include "RobDuino.h"
Button TipkaC4(pC4);
Button TipkaC5(pC5);
bool test_tipk = 1;
int i = 1;
void setup()
{
  PORTD = i;
}

void loop()
{
  if (TipkaC4.down()) i = i<<1;
  if (TipkaC5.down()) i = i>>1;
  if (TipkaC4.down() && TipkaC5.down()) test_tipk = !test_tipk;
  if (test_tipk){
    if (i>255) i = 1;
    if (i<1) i = 128;
    PORTD = i;
  }else{
    PORTD = analogRead(A0) >> 2;
  }
  delay(200);
}
