////////////////////////////////////////////////////////
// PROGRAMSKE ZANKE
// 1. Nekaj programskih ukazov smo napisali v podprogram
// setup(). Kot smo ugotovili v prejšnji vaji, se ta
// podprogramizvrši le enkrat. Vendar preverite kaj se
// zgodi, če uporabimo zanko:
// while (pogoj){
//   ukazi;
//   ukazi;
// }
// link: https://sites.google.com/site/drtirobotika/izobrazevanje/arduino/robotika-v-tehniki/freewhellyarduino#TOC-Moj-prvi-program
////////////////////////////////////////////////////////
#include "RobDuino.h"
void setup()
{ // nastavitve
  while (1 == 1) {
    PORTD = 1;
    delay(3000);
    PORTD = 0;
    delay(3000);
  }
}

void loop()
{ // glavni program

}

