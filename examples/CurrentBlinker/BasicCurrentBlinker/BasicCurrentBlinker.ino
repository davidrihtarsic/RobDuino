/*
# VEZJE ZA VIZUALNI PRIKAZ TOKA - BLINKER

Na krmilnik Arduino priključimo
upor in kondenzator po skici


               +-----[USB]-----+
               | [13]    [D12] |
               | [3V3]   [D11] |
               | [Aref]  [D10] |
               | [A0]     [D9] |
               | [A1]     [D8] |
               | [A2]     [D7] |
               | [A3]     [D6] |
               | [A4]     [D5] |
    +--[R220]--o [A5]     [D4] |
    |          | [A6]     [D3] |
    +----------o [A7]     [D2] |
    |  C10uF   | [5V0]   [GND] |
    |   ||     | [RST]   [RST] |
    +---||-----o [GND]    [D0] |
        ||     | [Vin]    [D1] |
               +---------------+
*/
#define PIN_C A7
#define CAPACITANCE_uF 22      // Kapaciteta kondenzatorja v uF (mikrofaradih)
#define PIN_R 19                // 19 je označen kot A5
#define LED 13
#define SPR 12
#define LO_TRSH 400
#define HI_TRSH 700

unsigned long startTime;
void charge_cycle(){
  startTime=millis();
  digitalWrite(LED, 1);
  digitalWrite(SPR, 0);
  digitalWrite(PIN_R, 1);
  int C_ADC = analogRead(PIN_C);
  while (C_ADC < HI_TRSH) C_ADC = analogRead(PIN_C);
}
void discharge_cycle(){
  digitalWrite(LED, 0);
  digitalWrite(SPR, 1);
  digitalWrite(PIN_R,0);
  int C_ADC = analogRead(PIN_C);
  while (C_ADC > LO_TSH ) C_ADC = analogRead(PIN_C);
}
void printTime(){        // Čas je prikazan v ms -> milisekundah
  unsigned long timePeriod = millis() - startTime;
  Serial.println(timePeriod);
}
void printCurrent(){     // Tok je prikazan v mA -> miliamperih
  unsigned long timePeriod = millis() - startTime;
  float cVoltage = 5.0 * (HI_TRSH - LO_TRSH) / 1023;
  float charge = cVoltage * CAPACITANCE_uF;
  float current = 2 * charge/timePeriod;
  Serial.println(current,4);
}
void setup() {
  pinMode(PIN_C, INPUT);
  pinMode(PIN_R, OUTPUT);
  pinMode(LED, OUTPUT);
  pinMode(SPR, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  charge_cycle();
  discharge_cycle();
}
