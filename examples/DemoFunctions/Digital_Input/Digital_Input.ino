#include <RobDuino.h>

void setup() {
  pinMode(pD7,OUTPUT);          // pD7 definiramo kot izhodni priključek.
  pinMode(pC0,INPUT);           // pC0 bomo definirali kot vhodni priključek, s ka-
}                               // terim bomo opazovali logično stanje ["0" ali "1"].

void loop() {
  if (digitalRead(pC0)==HIGH){  // Če je pC0 v logični "1"...
    digitalWrite(pD7,HIGH);     // Potem nastavimo pD7 v "1"...
  }else{                        // Drugače...
    digitalWrite(pD7,LOW);      // Nastavimo pD7 v "0"...
  }
}
