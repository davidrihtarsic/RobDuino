#include <Wire.h>¸                                              
#include <LiquidCrystal_I2C.h>                                  // dosegljivo na: https://bitbucket.org/fmalpartida/new-liquidcrystal/downloads
LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);  // Naslov LCDja (0x27) morate vpisati sami, 
                                                                // Lahko si pomagate s programom I2C scann.
void setup()            // Avtor knjižnice se je potrudil, da lahko uporabljamo popolnoma enake ukaze,
{                       // kot pri uporabi LCDja z vzporednim podatkovnim vodilom.
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
}   
