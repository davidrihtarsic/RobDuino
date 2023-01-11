#ifndef ROBDUINOSERIALTESTING_H
#define ROBDUINOSERIALTESTING_H

/* testing function is using
 * serialEvent()
 * which is declared in
 * Arduino.h but not defined...
 */
#include <Arduino.h>
#include <HardwareSerial.h>

void printTestingMenu();
void getIO_data();
void respondToUserCommand(String &command);
// void serialEvent()

#endif
