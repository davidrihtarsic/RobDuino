# Programske funkcije

## Naredite programsko funkcij, sestavljeno iz večih programskih stavkov

!!! note: več programskih stavkov združite v funkcijo. Naprimer sestavite funkcijo `robotNaprej` tako, da se bo robotek peljal naprej.

```cpp
void robotNaprej(){
    digitalWrite( 7 , HIGH);
    digitalWrite( 6 , LOW);
    digitalWrite( 5 , HIGH);
    digitalWrite( 4 , LOW);
}
```

!!! note: Sestavite tudi druge programske funkcije:

- `robotNaprej`
- `robotNazaj`
- `robotLevo`
- `robotDesno`
- `robotUstavi`

!!! note: Funkcije v C++ pišemo tako, da ime funkcije sestavimo iz `več jedrnatih besednih zvez`, kje pišemo vse skupaj in prvo besedo začnemo z `malo` tiskano črko, vse ostale naslednje besede v imenu funkcije pa z `veliko začetnico`.

Nekaj primerov imen funkcij:

- toJePredolgoImeZaFunkcijo()
- prekratko()
- ravnoPravDolgo()

## Sestavite daljši program s katerim krmilite vožno robota

!!! hint: Lahko na več mobilnih robotov presnamete `isti` program in ga zaženete na vseh mobilnih robotih hkrati.
