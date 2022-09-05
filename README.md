# Hardware Abstraction Layer for STM32F4 devices in C++

This is a simple port of my HAL written in C, to learn and use C++ more frequently.
It's a work in progress and is just me learning new ways to code in Embedded Systems.

### Planned features
- [ ] Change project to pure Makefile project
- [ ] Add more features to the svd2cpp converter
- [x] Add easy to user Hardware Abstraction
- [x] Add GPIO
- [ ] Add UART
- [ ] Add I2C
- [ ] Add SPI
- [ ] Add Timers
- [ ] Add ADC
- [ ] Add EXTI
- [ ] Add RCC configuration
- [ ] Add PWR configuration
- [ ] Add DMA

Since this is a "work in progress" and I have alot of other projects I will add new features 
once I have the time to do so.  
This kind of HAL is also available in C, so make sure to look at [libstm32f4](https://github.com/moonxraccoon/libstm32f4), where 
I have alot more peripherals already implemented.

---

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

### Contact/Contribution

Hit me up if you want to talk about the project or contribute.

E-Mail: [moonxraccoon@protonmail.com](mailto:moonxraccoon@protonmail.com)  
Discord: moonraccoon#4788



