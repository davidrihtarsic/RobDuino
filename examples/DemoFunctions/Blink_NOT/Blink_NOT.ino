#include <RobDuino.h>

void setup() {
  // put your setup code here, to run once:
  pinMode(pB5,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(200);
  digitalWrite(pB5,!digitalRead(pB5));
}
