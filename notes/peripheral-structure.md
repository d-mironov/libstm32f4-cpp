# General Peripheral Structure
## Target GPIO example usage

Blinking Pin PB8:  
```cpp
#include "stm32f4.h"
/*
 * PB is an object of a "Port" class created in the 
 * header/source file
 *
 * PB[x] should return Pin "x" of that port -> "Pin" is also a class/struct
 */
using namespace stm32f4::periph;

int main(void) {
    // enable clock on Port B
    PB.clock_enable();
    // setup PB8 as an output pin
    PB[8].make_output();
    while (true) {
        // Pull PB8 high
        PB[8] = 1;      // OR
        PB[8].high();
        delay_ms(500);

        // Pull PB8 low
        PB[8] = 0;      // OR
        PB[8].low();
        delay_ms(500);
    }
    return 0;
}
```

```
stm32f4:
    regs:
        gpioreg:
            attr:
                fields
        class ...:

    periph:
        port:
            

```
