#include <RobDuino.h>
DOutDir Motor0(pD6, pD7);
DOutDir Motor1(pD4, pD5);
DOutDir Motor2(pD2, pD3);
DOutDir Motor3(pD0, pD1);

int pin[4] = {9,10,11,12};
byte max_in = 3;
int duration[4];
byte pwm_val[4];
byte direction[4];

void setup() {
  pinMode(pin, INPUT);
  pinMode(pin + 1, INPUT);
  pinMode(pin + 2, INPUT);
  pinMode(pin + 3, INPUT);
  //Serial.begin(9600);

}

void loop() {
  for (byte i = 0; i < max_in; i++) {
    duration[i] = pulseIn(pin[i], HIGH);
  }

  for (byte i = 0; i < max_in; i++) {
    if (duration[i] > 2000){
      direction[i] = 1;
      pwm_val[i] = 255;
    }
    else if (duration[i] > 1550) {
      direction[i] = 1;
      pwm_val[i] = map(duration[i], 1550, 2000, 0, 255);
    } else if (duration[i] < 1000){
      direction[i] = 2;
      pwm_val[i] = 255;
    }
      else if (duration[i] < 1450) {
      direction[i] = 2;
      pwm_val[i] = map(duration[i], 1450, 1000, 0, 255);
    } else {
      direction[i] = 0;
      pwm_val[i] = 0;
    }
  }


  Motor0.run(direction[0], pwm_val[0]);
  Motor1.run(direction[1], pwm_val[1]);
  Motor2.run(direction[2], pwm_val[2]);
  Motor3.run(direction[3], pwm_val[3]);
  
  //Serial.print(duration[0]);Serial.print(" ");
  //Serial.print(direction[0]);Serial.print(" ");
  //Serial.println(pwm_val[0]);
  delay(50);
}
