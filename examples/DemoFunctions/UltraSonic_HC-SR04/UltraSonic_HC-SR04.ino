#include <RobDuino.h>

UltraSonic hcSR04(pB0,pB1); // +---------+---------+
                            // | HC-SC04 | Arduino |
                            // +---------+---------+
                            // |   Vcc   |   5V    |
                            // |   Trig  |   pB0   |
                            // |   Echo  |   pB1   |
                            // |   Gnd   |   GND   |
                            // +---------+---------+
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(1000);
  Serial.print("razdalja : ");
  Serial.print(hcSR04.distanceRead());
  Serial.println("cm");
}
