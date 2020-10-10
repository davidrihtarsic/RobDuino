# Namestitev programske opreme

Za prenos programa na krmilnik Arduino UNO boste potrebovali posebno programsko opremo. Na tem mestu je naštetih nekaj korakov kako lahko namestite naslednje programe:
1. [Arduino IDE](#arduino-ide) je osnovno programsko okolje za pisanje programov za krmilnike Arduino.
2. Programska knjižnica [RobDuino](#RobDuino), ki jo boste potrebovali za lažje programiranje modula RobDuino.
3. [Ardublockly](#ardublockly) je odlično didaktično programsko orodje za začetniško programiranje.
4. [Python](#namestitev-pythona) ... 😥 potrebujete za zagon Ardublockly-a.

## Arduino IDE

Na Arduino spletni strani lahko najdete zavihek Software->[Download](https://www.arduino.cc/en/Main/Software). Na tej strani je na voljo za prenos zadnja različica Arduino IDE programskega okolja.

>Vendar, ker trenutna najnovejša različica programa **Arduino IDE 1.8.10** ponudi kar preveč podatkov pri prenosu programske kode na krmilnik Arduino, priporočamo, da presnamete in namestite neko prejšnjo različico.

1. Priporočamo, da presnamete [Arduino IDE 1.8.9](https://www.arduino.cc/en/Main/OldSoftwareReleases#previous) tako, da izberete [Windows Install](https://www.arduino.cc/download_handler.php?f=/arduino-1.8.9-windows.exe)...
2. ... in nato kliknete `JUST DOWNLOAD`.
3. Nato le še poženete preneseno datoteko `arduino-1.8.9.exe` in sledite navodilom.

### Priporočljive nastavitve za začetnike

Za prvi preizkus delovanja programskega orodja, gonilnikov, povezav in krmilnika priporočamo:

4. Najprej priključite krmilnik Arduino Uno z ustreznim USB-kablom na računalnik.\
    `Arduino Uno` 🔌  💻
5. nato odprite primer osnovnega programa, ki ga najdete v:\
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
6. Nato nastavite tudi naslednje nastavitve, ki jih najdete v `Tools` ->
    1. `Board:` Arduino/Genuino Uno
    2. `Port:` COM3 *lahko je tudi druga številka*

7. Sedaj ste pripravljeni za preizkus in lahko kliknete:\
    (➡) `Upload` za prenos programa na krmilnik Arduino.

8. V kolikor je bilo vse v redu bi na krmilniku Arduino Uno morali opaziti, da ena svetleča dioda 🚨 utripa... In v spodnjem delu programskega okolja bi morali videti naslednje besedilo:

```
Done uploading.
Sketch uses 970 bytes (3%) of program storage space. Maximum is 32256 bytes.
Global variables use 9 bytes (0%) of dynamic memory, leaving 2039 bytes for local variables. Maximum is 2048 bytes.
```
9. Priporočamo, da nastavite tudi nekoliko naprednejše nastavitve, ki jih lahko najdete v:\
`File` -> `Preferences`:
    1. `Editor Language`: English   *Ker programsko okolje ni v celoti prevedeno v slovenski jezik.*
    2. `Editor font size`: 20       *V primeru, da ste učitelj in želite razločnejši prikaz.*
    3. `Show verbose output during`: [ ]compiling [x] upload *Izpiše nekaj več besedila pri nalaganju programa in tako lažje najdemo napake.*
    4. `[x] Display linenumbers`    *Lažje se sklicujemo na določeno vrstico.*
    5. `[x] Enable code folding`    *Omogočaj da nekatere dele programske kode skrijemo in se lažje osredotočimo na pomembnejši del*.

## RobDuino
RobDuino je programska knjižnica za lažje programiranje modula RobDuino, ki se ga priključi na krmilnik Arduino Uno.

### Namestitev
1. presnemi zip:
   * [RobDuino-master.zip](https://github.com/davidrihtarsic/RobDuino/archive/master.zip)
2. preimenuj RobDuino-master.zip v:
   * **RobDuino.zip**
3. zaženi Arduino IDE
4. izberi:
   * `Sketch` --> `Include Library` --> `Add .ZIP Library...`
5. izberi presneto datoteko:
   * `.../Download/RobDuino.zip`
   * `[OK]`

## Ardublockly

[Ardublockly](https://ardublockly.embeddedlog.com/) je programsko orodje za sestavljanje programov v [slikovnem načinu programiranja](https://en.wikipedia.org/wiki/Visual_programming_language). Njegov način programiranja lahko preizkusite v spletni [demo](https://ardublockly.embeddedlog.com/demo/#) različici.

>Za samo pretvorbo in prenos programske kode na Arduino krmilnike pa potrebuje program Arduino IDE.

### Namestitev Pythona

Priporočamo, da Ardublockly zaženete preko Python programskega jezika. Ardublockly je še vedno v \"Beta\" različici in se zgodi, da delovanje ni brezhibno. V primeru težav nam Python ponudi nekaj več poročila o napaki in lažje napake odstranimo.

1. Najprej namestite [Python 3.7.4](https://www.python.org/) program, tako da kliknete na zavihek [Download](https://www.python.org/downloads/) in presnamete zadnjo različico za vaš operacijski sistem.

2. Zaženite presneto datoteko. Odpre se spremno namestitveno okno, kjer morate izbrati:
    1. `[x] Add Python to PATH` in
    2. izbrati `Clasic Instalation`

### Namestitev Ardublockly-ja
Ko zaključite z namestitvijo Python-a, lahko nadaljujete z namestitvijo Ardublockly-a.

3. Najprej iz [github.com/.../ardublockly](https://github.com/carlosperate/ardublockly) presnemite **zip** datoteko tako, da kliknete na gumb **Clone or download** in izberete [Download ZIP file](https://github.com/carlosperate/ardublockly/archive/master.zip).

4. Datoteka `ardublockly-master.zip` se vam bo najverjetneje prenesla v vaš `...\Download\` mapo (ali ...\Prenosi\). Datoteko \"od-zipajte\" v `C:\Program Files(x86)` ali na katerokoli drugo lokacijo, kjer imate locirane vaše nameščene programe.

5. Namestitev programa je tako končana in lahko vključite krmilnik Arduino UNO!

6. Nato z [📂] File explorerjem (Raziskovalcem) odprete mapo `C:\Program Files(x86)\ardublockly-master` in dvokliknete (zaženete) datoteko []`start.py`. V tej datoteki je programska koda za programski jezik Python. Najprej bi se moralo odpreti:
    1. terminalno okno z nekaj podatki o zagonu Python programa...
    2. nato pa še program Ardublockly v Internetnem brskalniku.
Če se to ne zgodi morate []`start.py` zagnati tako da na datoteko kliknete z desnim miškinim [] gumbom in izberete opcijo [⌥] `Start program with` (Za odpiranje uporabi) in izberete `Python 3.7`.

### Nastavitve

7. V levem zgornjem kotu najdete ikono `[=] menu` in izberete `[⚙] Settings`, in nastavite naslednje:
    1. `Compiler Location:` C:\Program Files (x86)\Arduino\arduino_debug.exe
    2. `Arduino Board:` Uno
    3. `Com port:` COM3 *lahko je tudi druga številka*
    4. in potrdite spremembe tako, da kliknete `[RETURN]` gumb na dnu okna.

## VSC in PlatformIO

Program Visual Studio Code je IDE, ki podpira vač različnih programskih jezikov in platform. Ena od jih je tudi Arduino, ki jo v programu VSC namestimo z vtičnikom PlatformIO.

> Pomembno: Pred namestitvijo morate namestiti Arduino IDE! Program Arduino IDE mora biti nameščen (Windows Installer) in ne le dodan med vaše programe kot Windows App.

Za namestitev Visual Studio Code (VSC) najprej s spletne strani [presnemite](https://code.visualstudio.com/download) namestitveno datoteko za vaš operacijski sistem in sledite naslednjim korakom:

1. zaženite namestitveno datoteko `VSCodeUserSetup-ia32-1.49.3.exe`.
2. Zaženite porogram VSC in kliknite na ikono za vtičnike (Extensions)
3. V iskalno vrstico vpišite `PlatformIO IDE` in 
4. kliknite `Install`.
5. Ko se namestitev vtičnika konča morate ponovno zagnati VSC ali le kliknite na `Reload now`.

Tako je namestitev končana in se lahko preizkusite s prvim projektom `Blink`:

1. Vključite Arduino Uno.
2. Odprite `PlatformIO - Home Page`:
  - lahko, da se vam ta stran že samodejno odpre...
  - v levem oknu z možnimi aktivnostmi kliknite na ikono `PlatformIO` in nato
    + `QUICK ACCESS` -> `PIO Home` -> `Open`
3. Kliknite `+ New Project`
4. Nastavitve:
  - `Name:` ime_projekta
  - `Board:` Arduino UNO
  - `Framework:` Arduino Framework
5. Nato kliknite `Finish` in PIO bo preveril, če imate res nameščene vse potrebne komponente kot so: Arduino IDE, gcc-toolchain, SDK ... in vam pripravil arhitekturo projekta (z raznimi datotekami), ki se bo prikazala v levem oknu.
6. Poiščite mapo `src` (skarjšano iz angl. `SouRce Code`), v kateri bose našli izvorno kodo vašega programa = `source code`.
7. Vpišite program, na primer:
```cpp
#include <Arduino.h>
void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13,HIGH);
  delay(500);
  digitalWrite(13,LOW);
  delay(500);
}
```
8. Nato spodaj kliknete `Build` in `Upload`.
