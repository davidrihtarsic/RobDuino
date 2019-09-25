#include <RobDuino.h>

void setup() {
  pinMode(pD7,OUTPUT);  // pD7 definiramo kot izhodni priključek.
  pinMode(pC4,INPUT);   // Priključek pC4 definirmo kot vhodni priključek,
}                       // na katerega bomo priključili senzor.

void loop() {
  if (analogRead(4)<512){
    digitalWrite(pD7,HIGH);
  }else{
    digitalWrite(pD7,LOW);
  }
}
