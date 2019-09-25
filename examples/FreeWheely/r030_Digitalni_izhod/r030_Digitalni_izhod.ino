////////////////////////////////////////////////////////
// DOLOČITEV DIGITALNIH STANJ
// 1. Naložite in preskusite program.
// 2. Nato preskusite še druge zapise določitve digitalnega stanja:
//    PORTD = 80;
//    PORTD = 0b11001100;
//    digitalWrite(pD7,HIGH);
// link: https://sites.google.com/site/drtirobotika/izobrazevanje/arduino/robotika-v-tehniki/freewhellyarduino#TOC-Dolo-itev-stanja-na-digitalnih-izhodih
////////////////////////////////////////////////////////
#include "RobDuino.h"              
void setup()
{// nastavitve
  PORTD = 80;
  delay(3000);
  PORTD = 0;
}

void loop()
{// glavni program
  
}

