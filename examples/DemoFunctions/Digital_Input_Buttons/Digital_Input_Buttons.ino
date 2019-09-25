#include "RobDuino.h"         // Tipko lahko definiramo na tri načine:
Button btnC4(pC4);            // - enostavno: tipka je na C4...
//Button btnC4(pC4,true);     // - napredno:  tipka je na C4 in ima pullup upor (prednastavljena izbira)
//Button btnC4(pC4,true,10);  // - ekspert:   tipka je na C4, ima pullup upor ter
                              //              pri debounce uporabljamo 10 ms zakasnitev (prednastavljeno = 2 ms).
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("button down testing...");
  for (int i = 0; i<10 ;i++){
    Serial.print("test ");Serial.print(i);Serial.print("/10=");
    Serial.println(btnC4.down());
    delay(500);
  }
  Serial.println("button up testing...");
  for (int i=0;i<10;i++){
      Serial.print("test ");Serial.print(i);Serial.print("/10=");
      Serial.println(btnC4.up());
      delay(500);
    }
  Serial.println("button wasPressed testing...");
  for (int i=0;i<10;i++){
      Serial.print("test ");Serial.print(i);Serial.print("/10=");
      Serial.println(btnC4.wasPressed());
      delay(500);
    }
}

