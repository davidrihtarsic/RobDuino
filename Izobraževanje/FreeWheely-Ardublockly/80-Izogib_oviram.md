# Izogib oviram

## Sestavite program tako, da se bo robot ob dotiku ozognil oviri in nadaljeval pot.

```cpp
void loop(){
    if ( digitalRead( A0 ) == 0 ){
        robotNaprej();
    }
    else{
        robotUstavi();
    }
}
```


