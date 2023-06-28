#include <RobDuino.h>
#include <LiquidCrystal.h>                // Za ta namen bomo uporabili knjižnico LiquidCristal.h
LiquidCrystal lcd(11, 10, 13, 9, 12, 8);  // Definiramo nov objekt lcd in njegovo povezavo z uK

void setup() {
  lcd.begin(8, 2);      // Definiramo kakšen lcd imamo - 8 znakov, v 2 vrsticah.
  lcd.print("  O  O  ");  // Na lcd napišemo neko bsedilo
  lcd.setCursor(0,1);   // Pisanje bomo nadaljevali v novi vrstici.
  lcd.print("  ____  ");    // in dopišemo še nekaj besedila...
  delay(3000);          // Izvajanje programa nadaljujemo čez 3 s.
  lcd.clear();          // Pobrišemo vsebino zaslona.
}

void loop()
{
    lcd.home();
    lcd.print("  O  =  ");lcd.setCursor(0,1);   
    lcd.print("  __/- ");
    delay(1000);

    lcd.home();
    lcd.print("  O  O  ");lcd.setCursor(0,1);
    lcd.print("  ____  ");
    delay(3000);
}

