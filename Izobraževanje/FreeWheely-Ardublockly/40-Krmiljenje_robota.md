# Krmiljenje robota

## Preskusite različne kombinacije izhodnjih stanj

| D7 | D6 | Stanje Motorja |
|:--:|:--:|:--------------:|
|  0 |  0 |        ?       |
|  0 |  1 |        ?       |
|  1 |  0 |        ?       |
|  1 |  1 |        ?       |


!!! note: Če sta oba motora priključena na `iste digitalne izhode` se bo robot lako gibal le naprej in nazaj. Takmu sistem pravimo sistem z `eno prostostno stopnjo`

!!! hint: Da se lahko robot giblje tudi levo in desno, pa moramo `krmiliti oba motorja neodvisno`. Zato morate priključiti drugi motor na `digitalna` izhoda `D5` in `D4`.

```cpp
void setup(){
    // Krmiljenje levega pogonjskega motorja.
    digitalWrite( 7 , HIGH );
    digitalWrite( 6 , LOW );

    // Krmiljenje desnega pogonjskega motorja.
    digitalWrite( 5 , HIGH );
    digitalWrite( 4 , LOW );

    // Nato naj se izvajanje programa zakasni za 3 s.
    delay( 3000 );

    // Nato naj se robot ustavi...
    digitalWrite( 7 , LOW );
    digitalWrite( 6 , LOW );
    digitalWrite( 5 , LOW );
    digitalWrite( 4 , LOW );
}
```





