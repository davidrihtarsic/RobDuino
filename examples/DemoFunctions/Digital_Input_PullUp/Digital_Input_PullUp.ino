#include <RobDuino.h>

void setup() {
  pinMode(pD7,OUTPUT);          // pD7 in pD6 definiramo kot izhodna priključeka.
  pinMode(pD6,OUTPUT);          // Na priključkih pC4 in pC5 imamo priključeni 2
  pinMode(pC4,INPUT_PULLUP);    // tipki, ki sta vezani proti 0 V. Zato moramo 
  pinMode(pC5,INPUT_PULLUP);    // vključiti notranje upore uK-ja proti napajanju.
}                               // Ko tipko pritisnemo priključek povežemo z 0 V. 

void loop() {
  if (digitalRead(pC4)==LOW){   // Če pritisnemo tipko pC4 (= 0V = LOW),
    digitalWrite(pD7,LOW);      // potem nastavimo pD7 v "0"
    digitalWrite(pD6,HIGH);     // in pD6 v "1".
  }
  if (digitalRead(pC5)==LOW){   // Če pritisnemo tipko pC5,
    digitalWrite(pD7,HIGH);     // potem nastavimo pD7 v "1"
    digitalWrite(pD6,LOW);      // in pD6 v "0".
  }  
}
