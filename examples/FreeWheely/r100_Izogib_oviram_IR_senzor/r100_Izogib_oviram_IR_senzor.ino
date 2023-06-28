////////////////////////////////////////////////////////
// IZOGIB OVIRAM (IR SENZOR)
// 1. Naložite in preskusite program.
// 2. Program tudi dopolnite s svojimi idejami tako, da se bo robot ovri izognil. 
// link: https://sites.google.com/site/drtirobotika/izobrazevanje/arduino/robotika-v-tehniki/freewheely-rob#TOC-Izogib-oviram---IR-senzor-razdalje
////////////////////////////////////////////////////////
#include "RobDuino.h"
Button TipkaC4(pC4);
DOutDir LevoKolo(pD6, pD7);
DOutDir DesnoKolo(pD4, pD5);

void setup()
{ // nastavitve
  while (TipkaC4.up()) {
    // Čakamo, da uporabnik pritisne tipko
    // in izvajanje programa se ne nadaljuje.
  }
}

void loop()
{ // glavni program
  if (analogRead(0) > 400) {
    LevoKolo.stop();
    DesnoKolo.stop();
  }else{
    LevoKolo.run(NAPREJ);
    DesnoKolo.run(NAPREJ);
  }
}

