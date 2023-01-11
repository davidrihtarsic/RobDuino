/*
  Knjižnica RobDuinoSerialTesting.h vključuje možnost 
  testiranja krmilnika Arduino UNO z modulom RobDuino.

  Odprite Serial Monitor, nastavite način pošiljanja besedila na
  "No Line Ending" in v polje vpišite ukaz:
  testing
  Nato sledite navodilom...
*/

#include <RobDuino.h>
#include <RobDuinoSerialTesting.h>

void setup(){
  Serial.begin(115200);
}

void loop(){

}