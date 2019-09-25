#include <RobDuino.h>   // Vse časovnike (Timer-je) vam bo program že samodejno nastavil
                        // in zagnal. Program že uporablja časovnik T0 za finkcijo millis(),
void setup() {          // zato uporabo odsvetujemo. Uporabljate pa lahko T1 in T2.
    pinMode(pD7,OUTPUT);      
    pinMode(pD6,OUTPUT);
    pinMode(pC4,INPUT_PULLUP);
    TIMSK2 = 1;         // Omogočimo prekinitev (interrupt) za časovnik 2 
}                       // Bolj napredne nastavitve časovnikov najdete
                        // na: http://www.8bit-era.cz/arduino-timer-interrupts-calculator.html

ISR(TIMER2_OVF_vect){                   // Ta procedura se bo izvršila vsakič,
  digitalWrite(pD7,!digitalRead(pC4));  // ko bo T2 preštel do konca (do 255).
}                                       // Torej vsake 2.04 ms 

void loop() {               
  digitalWrite(pD6,HIGH);   // Glavni program krmili izhodno stanje.
  delay(500);               // priključka pD6...
  digitalWrite(pD6,LOW);    // medtem, ko za stanje priključka pD7 skrbi 
  delay(500);               // prekinitev časovnika 2 (TIMER2_OVF_vect).
}
