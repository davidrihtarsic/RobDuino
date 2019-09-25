////////////////////////////////////////////////////////
// DOGODEK ali POGOJNO IZVAJANJE UKAZOV - IF stavek
// 1. Naložite in preskusite program.
// 2. Dodajte programske ukaze še za tipko C5.
// link: https://sites.google.com/site/drtirobotika/izobrazevanje/arduino/robotika-v-tehniki/freewhellyarduino#TOC-Dogodek-ali-pogojno-izvajanje-ukazov---IF-stavek
////////////////////////////////////////////////////////
#include "RobDuino.h"
Button TipkaC4(pC4);
DOutDir LevoKolo(pD6, pD7);
DOutDir DesnoKolo(pD4, pD5);

void setup()
{ // nastavitve

}

void loop()
{ // glavni program
  if (TipkaC4.down()) {
    LevoKolo.run(NAPREJ);
    DesnoKolo.run(NAPREJ);
    delay(2000);
    LevoKolo.stop();
    DesnoKolo.stop();
  }
}

