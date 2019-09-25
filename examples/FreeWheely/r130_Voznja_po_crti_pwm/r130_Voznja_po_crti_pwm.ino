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
int osv_max = 480;
int osv_min = 20;
int osv;
int pwm_levo_kolo;
int pwm_desno_kolo;
int pwm_min = 100;

void setup()
{ // nastavitve
  while (TipkaC4.up()) {} // Čakamo, da uporabnik pritisne tipko.
  digitalWrite(pD3, HIGH);
}

void loop()
{ // glavni program
  osv = analogRead(1);
  pwm_levo_kolo = map(osv, osv_min, osv_max, pwm_min, 255);
  pwm_desno_kolo = map(osv, osv_min, osv_max, 255, pwm_min);
  LevoKolo.run(NAPREJ, pwm_levo_kolo);
  DesnoKolo.run(NAPREJ, pwm_desno_kolo);
  delay(100);
}

