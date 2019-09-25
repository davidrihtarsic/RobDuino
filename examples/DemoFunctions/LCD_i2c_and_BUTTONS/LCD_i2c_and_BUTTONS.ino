#include <RobDuino.h>
#include <Wire.h>                                              
#include <LiquidCrystal_I2C.h>                                  // dosegljivo na: https://bitbucket.org/fmalpartida/new-liquidcrystal/downloads/
LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);  // Naslov LCDja (0x27) morate vpisati sami, 
                                                                // Lahko si pomagate s programom I2C scann.
Button btnC4(pC4);      // deklariramo tipko na C4
Button btnC5(pC5);      // in še na C5...
void setup()              
{                         // --==! POMEMBNO !==--
  lcd.begin(8, 2);        // Če pri izpisovanju na LCD, uporabljamo I2C
  lcd.print("Pritisni");  // komunikacijo, se ta komunikacija vrši ravno 
  lcd.setCursor(0,1);     // preko priključkov C4 in C5. Zato ne moremo
  lcd.print("C4/C5");     // hkrati uporabljati tipki in pisati na LCD.
}                         // Lahko pa to počnemo ločeno! V ta namen moramo
                          // uporabljati btnC4.wasPressed(), ki čaka uporabnika,
                          // da bo tipko tudi izpustil.
void loop()
{
  if (btnC4.wasPressed()){  // Ko nekdo tipko C4 pritisne in jo nato tudi izpusti...
    lcd.clear();          // šele tedaj nadaljujemo z izpisovanjem na LCD.
    lcd.print("C4");
    delay(1000);
    setup();
  }
    if (btnC5.wasPressed()){  // Ko nekdo tipko C4 pritisne in jo nato tudi izpusti...
    lcd.clear();          // šele tedaj nadaljujemo z izpisovanjem na LCD.
    lcd.print("C5");
    delay(1000);
    setup();
    }
}   
