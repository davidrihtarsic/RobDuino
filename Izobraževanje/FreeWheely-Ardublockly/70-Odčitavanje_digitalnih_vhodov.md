# Odčitavanje digitalnih vhodov

## Napišite program za preverjanje digitalnega vhoda


```cpp
void setup(){
    // Najprej naj robotek pelje naprej.
    while ( digitalRead( A0 ) == 0 ){
        robotNaprej();
    }
    robotStop();
}
```


