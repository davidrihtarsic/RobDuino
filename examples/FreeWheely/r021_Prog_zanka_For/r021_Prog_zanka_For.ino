////////////////////////////////////////////////////////
// PROGRAMSKE ZANKE
// 1. V tem primeru je uporabljena zanka:
// for (začetno stanje; pogoj; povečevanje){
//   ukazi;
//   ukazi;
// }
// Preverite kakšno vlogo ima ta zanka...
// link: https://sites.google.com/site/drtirobotika/izobrazevanje/arduino/robotika-v-tehniki/freewheely-rob#TOC-Programske-zanke
////////////////////////////////////////////////////////
#include "RobDuino.h"
void setup()
{ // nastavitve
  for (int i = 1; i<255; i++) {
    PORTD = i;
    delay(10);
  }
}

void loop()
{ // glavni program

}

