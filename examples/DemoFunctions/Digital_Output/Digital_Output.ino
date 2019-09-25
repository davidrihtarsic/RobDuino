#include <RobDuino.h>

void setup() {
  pinMode(pD7,OUTPUT);    // pD7 in pD6 bomo definirali kot izhodna priključka,
  pinMode(pD6,OUTPUT);    // s katerima bomo lahko krmilili smer toka skozi motor.
}

void loop() {
  digitalWrite(pD7,HIGH); // Ker el. tok teče od višjega napetostnega potenciala
  digitalWrite(pD6,LOW);  // proti nižjemu, torej v našem primeru od pD7 -> pD6,  
  delay(1000);            // se motor vrti v eno smer.
   
  digitalWrite(pD7,LOW);  // Če sta napetostna potenciala enaka, el. tok ne teče
  digitalWrite(pD6,LOW);  // in motor miruje. Enako velja tudi za kombinacijo 
  delay(1000);            // izhodnih stranj: HIGH - HIGH.
}
