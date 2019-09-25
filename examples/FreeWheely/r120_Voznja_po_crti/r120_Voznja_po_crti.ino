////////////////////////////////////////////////////////
// VOŽNJA PO ČRTI
// 1. Program napišete tako, da v glavnem podprogramu
//    void loop() stalno preverjal odziv svetlobnega
//    senzorja in ustrezno odreagiral:
//      a.  Če je robot na črni površini,
//          naj zavije LEVO, a le z enim kolesom.
//      b.  Če je robot na beli površini,
//          naj zavije DESNO, a le z enim kolesom.
//    Poleg tega ne pozabite, da mora biti ves čas vožnje
//    vključena tudi lučka na digitalnem izhodu D3.
// link: 
////////////////////////////////////////////////////////
#include "RobDuino.h"
Button TipkaC4(pC4);
DOutDir LevoKolo(pD6, pD7);
DOutDir DesnoKolo(pD4, pD5);

void setup()
{ // nastavitve
  while (TipkaC4.up()){} // Čakamo, da uporabnik pritisne tipko.
  
}

void loop()
{ // glavni program

}

