#include <RobDuino.h>

void setup() {
  // put your setup code here, to run once:
  pinMode(pB5,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pB5,HIGH);
  delay(500);
  digitalWrite(pB5,LOW);
  delay(500);
}
