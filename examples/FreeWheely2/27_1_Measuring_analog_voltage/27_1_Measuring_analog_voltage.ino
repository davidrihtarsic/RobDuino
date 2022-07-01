const int DIST_SEN_PIN = A0;
void setup()
{
  pinMode(DIST_SEN_PIN, INPUT);
  Serial.begin(9600);
}
void loop()
{
  int sen_value = analogRead(DIST_SEN_PIN);
  Serial.println(sen_value);
  delay(1000);
}
