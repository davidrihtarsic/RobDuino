////////////////////////////////////////////////////////
// TEST TIPKE
// 1. Naložite in preskusite program...
// 2. in preverite odziv tipke v "Serijskem Oknu" (angl. Serial Monitor - bližnica = [Shift]+[Ctrl]+[M])
// link: https://sites.google.com/site/drtirobotika/izobrazevanje/arduino/robotika-v-tehniki/freewheely-rob#TOC-Priklju-itev-tipke
////////////////////////////////////////////////////////
#include "RobDuino.h"
bool zadnje_stanje_tipke = 0;
bool trenutno_stanje_tipke = 0;
void setup()
{ // nastavitve
  Serial.begin(9600);
  Serial.println("+----------------------------------------------------+");
  Serial.println("|         TEST TIPKE NA DIGITALNEM VHODU C0          |");
  Serial.println("+----------------------------------------------------+");
  trenutno_stanje_tipke = digitalRead(pC0);
}

void loop()
{ // glavni program
  trenutno_stanje_tipke = digitalRead(pC0);
  if (trenutno_stanje_tipke != zadnje_stanje_tipke) {
    // prislo je do spremembe stanja na C0...
    Serial.print("Stanje digitalnega vhoda C0: ");
    Serial.print(digitalRead(pC0));
    if (digitalRead(pC0)) {
      Serial.println(" - Tipka je SKLENJENA.");
    } else {
      Serial.println(" - Tipka je RAZKLENJENA.");
    }
     Serial.println("+----------------------------------------------------+");
    zadnje_stanje_tipke = trenutno_stanje_tipke;
  }
  delay(30);
}

