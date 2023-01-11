#include "RobDuinoSerialTesting.h"
// Testing IO pins...
bool testing_is_running = false;

void serialEvent(){
  String test_string = Serial.readString();
  if (test_string == "testing"){
      printTestingMenu();
    while (test_string != "exit") {
      test_string = Serial.readString();
      respondToUserCommand(test_string);
      if (testing_is_running) getIO_data();
    }
  } else {
    Serial.println("\n" + test_string + " is not valid command.");
  }
}

void respondToUserCommand(String &command){
  char first_char = command.charAt(0);
  if (first_char == 'D'){
    //teggle pins output
    command.remove(0,1);
    int i = command.toInt();
    if (i > 0 && i < 14) digitalWrite(i, !digitalRead(i));
  }else if (command == "help"){
    //print help
    printTestingMenu();
    testing_is_running = false;
  }else if (command == "run"){
    // toggle monitoring of figital pins
    testing_is_running = !testing_is_running;
  }else if (command != "\0"){
    Serial.print(F("Command: "));Serial.print(command);Serial.println(F(" not found."));
  }
}

void printTestingMenu(){
      Serial.println(F("*** Testing mode - menu - ******************"));
      Serial.println(F("*    help - prints this text menu"));
      Serial.println(F("*    D5   - toggles output state of D5"));
      Serial.println(F("*    Dx   - toggles output state of any Dx,"));
      Serial.println(F("*           x is any num. from 0 .. 13."));
      Serial.println(F("*    run  - toggles monitoring I/O pins"));
      Serial.println(F("*    exit - exits the Testing mode."));
      Serial.println(F("*-------------------------------------------"));
      Serial.println(F("Type any command to continue ..."));
}

void getIO_data(){
  Serial.println(F("\nMonitor IO pins:"));
  Serial.print(F("Outputs\t\tIn. Dig. ADC"));
  for (int i = 0; i < 8; i++ ){
    Serial.print(F("\nD"));Serial.print(i);Serial.print(F(" "));Serial.print(digitalRead(i));
    if (i > 5) continue;
    // print Input state
    Serial.print(F("\t\tA"));Serial.print(i);Serial.print(F(" "));Serial.print(digitalRead(14+i));Serial.print(F("\t"));Serial.print(analogRead(i));
    //Serial.print(F("\t\tA"));Serial.print(i);Serial.print(F(" = "));Serial.print(analogRead(i));
  }
  Serial.println(F("\n--------------"));
}
