////////////////////////////////////////////////////////
// KRMILJENJE MOTORJEV
// 1. Naložite in preskusite program tako,
// 2. Preverite, če se vaš robot res pelje NAPREJ...
// 3. Program tudi dopolnite s svojimi idejami tako, da bo robot "zaplesal"...
// link: https://sites.google.com/site/drtirobotika/izobrazevanje/arduino/robotika-v-tehniki/freewhellyarduino#TOC-Vo-nja-naprej-nazaj-levo-desno
////////////////////////////////////////////////////////
#include "RobDuino.h"
DOutDir LevoKolo(pD6, pD7);
DOutDir DesnoKolo(pD4, pD5);

void setup()
{ // nastavitve
  LevoKolo.run(NAPREJ);
  DesnoKolo.run(NAPREJ);
  delay(2000);
  LevoKolo.stop();
  DesnoKolo.stop();
}

void loop()
{ // glavni program

}

