////////////////////////////////////////////////////////
// TEST TIPKE
// 1. Naložite in preskusite program...
// 2. in preverite odziv tipke v "Serijskem Oknu" (angl. Serial Monitor - bližnica = [Shift]+[Ctrl]+[M])
// link: https://sites.google.com/site/drtirobotika/izobrazevanje/arduino/robotika-v-tehniki/freewheely-rob#TOC-Priklju-itev-tipke
////////////////////////////////////////////////////////
#include "RobDuino.h"
int ADC_vrednost = 0;
float napetost = 0;
void setup()
{ // nastavitve
  Serial.begin(9600);
  Serial.println("+----------------------------------------------------+");
  Serial.println("|         TEST IR SENZORJA RAZDALJE                  |");
  Serial.println("+----------------------------------------------------+");
}

void loop()
{ // glavni program
  ADC_vrednost = 0;
  for (int i = 0; i < 16; i++) ADC_vrednost += analogRead(0);
  ADC_vrednost = ADC_vrednost >> 4;
  napetost = (float) ADC_vrednost/1024*5;
  Serial.print("Odziv senzorja: ");
  Serial.print(napetost);
  Serial.print("V ADC: ");
  Serial.print(ADC_vrednost);
  // še stolpec
  if (ADC_vrednost < 10) Serial.print(" ");
  if (ADC_vrednost < 100) Serial.print(" ");
  if (ADC_vrednost < 1000) Serial.print(" ");
  Serial.print(" |");
  for (int i =0; i < ADC_vrednost/10; i++) Serial.print("#");
  Serial.println("");
  delay(100);
}

