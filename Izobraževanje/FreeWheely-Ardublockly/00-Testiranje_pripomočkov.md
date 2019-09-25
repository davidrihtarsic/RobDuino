# Preverite delovanje naprav in programov

1. Najprej priključite krmilnik Arduino Uno z ustreznim USB-kablom na računalnik.\
    `Arduino Uno` 🔌  💻
2. nato odprite primer osnovnega programa, ki ga najdete v:\
    `files` -> `examples` -> `01.basics` -> `blink`

```c++
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
```
3. Nato nastavite tudi naslednje nastavitve, ki jih najdete v `Tools` ->
    1. `Board:` Arduino/Genuino Uno
    2. `Port:` COM3 *lahko je tudi druga številka*

4. Sedaj ste pripravljeni za preizkus in lahko kliknete:\
    (➡) `Upload` za prenos programa na krmilnik Arduino.

5. V kolikor je bilo vse v redu bi na krmilniku Arduino Uno morali opaziti, da ena svetleča dioda 🚨 utripa... In v spodnjem delu programskega okolja bi morali videti naslednje besedilo:

```
Done uploading.
Sketch uses 970 bytes (3%) of program storage space. Maximum is 32256 bytes.
Global variables use 9 bytes (0%) of dynamic memory, leaving 2039 bytes for local variables. Maximum is 2048 bytes.
```
---
# Preverite delovanje Ardublockly programa

1. Najprej priključite krmilnik Arduino Uno z ustreznim USB-kablom na računalnik.\
    `Arduino Uno` 🔌  💻 
2. Zaženite Ardublockly.
3. V levem zgornjem kotu najdete ikono `[=] menu` in izberete `[⚙] Settings`, in nastavite naslednje:
    1. `Compiler Location:` C:\Program Files (x86)\Arduino\arduino_debug.exe
    2. `Arduino Board:` Uno
    3. `Com port:` COM3 *lahko je tudi druga številka*
    4. in potrdite spremembe tako, da kliknete `[RETURN]` gumb na dnu okna.
4. Pritisnite na gumb `Play` in če je vse Ok, bi morali videti naslednji text:
        
        Successfully Uploaded Sketch
        WARNING: Error loading hardware folder /home/david/Arduino/hardware/WAV8F
        No valid hardware definitions found in folder WAV8F.
        Sketch uses 444 bytes (1%) of program storage space. Maximum is 32256 bytes.
        Global variables use 9 bytes (0%) of dynamic memory, leaving 2039 bytes for local variables. Maximum is 2048 bytes.
