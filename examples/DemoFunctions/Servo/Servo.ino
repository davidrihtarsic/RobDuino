// --== !! POMEMBNO !! ==--
// Ko uporabljate priključek pB1, pB2 ali pB3 za krmiljenje
// servo-motorjev, na teh priključkih ne morete uporabljati
// funkcije analogWrite() za PWM krmiljenje ali LCD s 4-bitnim
// podatkovnim vodilom.
// Več o tej funkciji si lahko ogledate na spletnem naslovu
// Arduino strani: http://www.arduino.org/learning/reference/servo

#include <Servo.h>
#include <RobDuino.h>

Servo servo1;             // Ustvarimo nov objekt z imenom servo1.
void setup() {            
  servo1.attach(pB1);     // Servo-motor smo priključili na pB1.
}                         
                          

void loop() {
  servo1.write(125);      // Servomotor postavimo v orientacijo 125°.
  delay(2000);            // V tem poloaju vstrajamo 2s.
  servo1.write(55);       // Servomotor postavimo v orientacijo 55°.
  delay(2000);            // Zopet za 2s.
}
