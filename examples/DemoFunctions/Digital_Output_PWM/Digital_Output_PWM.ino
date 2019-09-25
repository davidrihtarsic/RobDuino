#include <RobDuino.h>   // pD4 in pD5 bomo definirali kot izhodna priključka,
                        // s katerima bomo lahko krmilili smer toka skozi motor.
void setup() {          // Moč motorja bomo krmili s pulzno-širinsko-modulacijo
  pinMode(pD4,OUTPUT);  // na priključku B3.   
  pinMode(pD5,OUTPUT);  // --==! POMEMBNO !==--  
  pinMode(pB3,OUTPUT);  // na dodatku RobDuino moramo prestaviti kratkostičnik    
}                       // B3 v položaj, ki je prikazan spodaj.
                        // +----------------------+
                        // |  PortD.EN | PWM      |
                        // |  0,1 [x x] o o o B1  |
                        // |  2,3 [x x] o o o B2  |
                        // |  4,5  o [x x]o o B3  | <- položaj kratkostičnika za PWM
                        // |  6,7 [x x]           |
                        // +----------------------+                         
void loop() {
  digitalWrite(pD5,HIGH); // Motor zaženemo v eno smer.
  digitalWrite(pD4,LOW);  // Nato lahko nastavimo moč motorja:                    
  analogWrite(pB3,255);   // 255 => 100% 
  delay(2000);
  analogWrite(pB3,192);   // 192 => 75% 
  delay(2000); 
  analogWrite(pB3,128);   // 128 => 50% 
  delay(2000);
  analogWrite(pB3,64);    //  64 => 25% 
  delay(2000);
}
