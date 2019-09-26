# Stikalo kot senzor dotika

## Po video gradivu sestavite odbijač, s katerim bomo lahko zaznavali ovire pred seboj.

[Sestavljanje odbijača](https://www.youtube.com/watch?time_continue=4&v=eWldNxh-q2c)

## Povežite priključke Fischertechnik tipke po naslednji tabeli

| priključki tipke | priključki RobDuino modula |
|:----------------:|:--------------------------:|
|         1        |             A0             |
|         2        |             GND            |
|         3        |             +5V            |

## Preverite delovanje stikala

1. V trenutku, ko je stikalo priključeno, ali še vedno svetita napajalni lučki?
2. Ko stikalo skenimo, ali še vedno svetita napajalni lučki?
3. Preskusite s preprostim programom:

```cpp
void loop(){
    if (digitalRead(A0) == 0){
        digitalWrite(3, LOW);
    else{
        digitalWrite(3,HIGH);
    }
}
```


