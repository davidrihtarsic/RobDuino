////////////////////////////////////////////////////////
// ZAZNAVANJE OVIRE
// 1. Naložite in preskusite program tako,
// 2. Preverite, če spodnji program deluje pravilno...
// 3. Program tudi dopolnite s svojimi idejami tako, da se bo robot ovri izognil. 
// link: https://sites.google.com/site/drtirobotika/izobrazevanje/arduino/robotika-v-tehniki/freewheely-rob#TOC-Zaznavanje-ovire-dogodek-
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
  // nato se začne robot premikati NAPREJ...
  LevoKolo.run(NAPREJ);
  DesnoKolo.run(NAPREJ);
  // Če se dotakne ovire, se bo stikalo sklenilo in
  // na dig. vhodu C0 bomo zaznali log. "0".
  // Tedaj ustavimo robota.
  if (digitalRead(pC0)==1) {
    LevoKolo.stop();
    DesnoKolo.stop();
  }
}

void loop()
{ // glavni program

}

