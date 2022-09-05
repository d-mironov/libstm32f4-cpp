// Copyright [2022] Daniel Mironow
#include "./pin.h"
#include "./port.h"
#include "./registers.h"
#include "./stm32f4.h"
#include "./stm32f411xe.h"

using stm32f4::peripheral;

void undef_delay() {
    volatile int i = 0;
    for (i = 0; i < 100000; ++i) {
    }
}

int main(void) {
    peripheral periph = peripheral::get_instance();
    // Enable clock for GPIOA and GPIOB
    periph.PA.enable_clock();
    periph.PB.enable_clock();
    // setup PA8, PA9 and PB8 as output
    periph.PA[8].make_output();
    periph.PB[8].make_output();
    periph.PA[9].make_output();

    // Pull PB8 high
    periph.PB[8] = 1;
    while (true) {
        // Pull PA8 high and PA9 low
        periph.PA[8] = 1;
        periph.PA[9] = 0;
        undef_delay();
        // Pull PA8 low and PA9 high
        periph.PA[8] = 0;
        periph.PA[9] = 1;
        undef_delay();
    }
    return 0;
}
