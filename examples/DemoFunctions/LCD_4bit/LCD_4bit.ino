#include <RobDuino.h>
#include <LiquidCrystal.h>                // Za ta namen bomo uporabili knjižnico LiquidCristal.h
LiquidCrystal lcd(11, 10, 13, 9, 12, 8);  // Definiramo nov objekt lcd in njegovo povezavo z uK

void setup() {
  lcd.begin(8, 2);      // Definiramo kakšen lcd imamo - 8 znakov, v 2 vrsticah.
  lcd.print("Zdravo");  // Na lcd napišemo neko bsedilo
  lcd.setCursor(0,1);   // Pisanje bomo nadaljevali v novi vrstici.
  lcd.print("svet");    // in dopišemo še nekaj besedila...
  delay(3000);          // Izvajanje programa nadaljujemo čez 3 s.
  lcd.clear();          // Pobrišemo vsebino zaslona.
}

void loop()
{
    lcd.home();                 // Vrnemo se na začetno pozicijo.
    lcd.print(millis() / 1000); // Izpisujemo lahko tudi števila,
}                               // naprimer koliko sekund je Arduino že vključen.


