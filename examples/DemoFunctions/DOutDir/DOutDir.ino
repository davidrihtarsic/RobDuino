#include <RobDuino.h>
DOutDir Motor(pD7,pD6);
// poimenujemo napravo in določimo kam smo jo priključili
void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
  Motor.run(NAPREJ);
  delay(1000);
  Motor.run(NAPREJ,128);
  delay(500);
  for(int i=0;i<=255;i++){
    Motor.run(NAPREJ,i);
    delay(5);
  }
  Motor.stop();
  delay(500);
  for(int i=0;i<=255;i++){
    Motor.run(NAZAJ,i);
    delay(5);
  }
  Motor.stop();
  delay(500);
}
