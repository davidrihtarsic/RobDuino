////////////////////////////////////////////////////////
// KRMILJENJE IZHODOV
// 1. Naložite in preskusite program tako,
//    da pritiskate tipki C4 in C5.
// 2. Ugotovite koliko možnih stanj lahko nastavite.
// link: https://sites.google.com/site/drtirobotika/izobrazevanje/arduino/robotika-v-tehniki/freewheely-rob#TOC-Krmiljenje-digitalnih-izhodov
////////////////////////////////////////////////////////
#include "RobDuino.h"   
Button TipkaC4(pC4);
Button TipkaC5(pC5);           
void setup()
{// nastavitve

}

void loop()
{// glavni program
  digitalWrite(pD7, TipkaC4.down());
  digitalWrite(pD6, TipkaC5.down());
}

