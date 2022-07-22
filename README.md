# Hardware Abstraction Layer for STM32F4 devices in C++

This is a simple port of my HAL written in C, to learn and use C++ more frequently.
It's a work in progress and is just me learning new ways to code in Embedded Systems.

### Example Usage
Simple GPIO usage example: 
```cpp
peripheral periph = peripheral::get_instance();
// Enable clock for GPIOA
periph.PA.enable_clock();
// setup PA8 as output
periph.PA[8].make_output();

while (true) {
    // Pull PA8 high
    periph.PA[8] = 1;
    // OR
    periph.PA[8].high();

    // Delay of undefined length
    undef_delay();
    // Pull PA8 low
    periph.PA[8] = 0;
    // OR
    periph.PA[8].low();

    // Delay of undefined length
    undef_delay();
}
```

You can also just use the registers directly:
```cpp
using namespace stm32f4::regs;

rcc.AHB1ENR.modify(RCC_AHB1ENR_GPIOAEN);
// Setup PA8 as output
gpioa.MODER.modify(bit[2 * 8]);

while (true) {
    // Pull PA8 high
    gpioa.BSRR.modify(bit[8]);
    // OR
    gpioa.BSRR.modify(bits::bit16);
    undef_delay();

    // Pull PA8 low
    gpioa.BSRR.modify(bit[8 + 16]);
    // OR
    gpioa.BSRR.modify(bits::bit24);
    undef_delay();
}
```

For now only GPIO works, but I will implement other examples as soon as I have more time to do it.

### Contact/Contribution

Hit me up if you want to talk about the project or contribute.

E-Mail: [moonxraccoon@proton.me](mailto:moonxraccoon@proton.me)  
Discord: moonraccoon#1337



