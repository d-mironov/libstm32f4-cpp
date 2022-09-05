#include <cstdint>

#include "./port.h"
#include "./registers.h"

using namespace stm32f4::regs;

template <_gpio& P>
Pin<P>& Port<P>::operator[](u8 _pin) {
    if (_pin > PINS_PER_PORT - 1) {
        return pins[PINS_PER_PORT - 1];
    }
    return pins[_pin];
}

template <stm32f4::regs::_gpio& P>
void Port<P>::write_all(stm32f4::pin::write w) {
    for (Pin<P>& pin : pins) {
        pin.write(w);
    }
}

template <stm32f4::regs::_gpio& P>
void Port<P>::enable_clock() {
    switch (P.base_address) {
        case GPIOA_BASE_ADDRESS:
            rcc.AHB1ENR.modify(RCC_AHB1ENR_GPIOAEN);
            break;
        case GPIOB_BASE_ADDRESS:
            rcc.AHB1ENR.modify(RCC_AHB1ENR_GPIOBEN);
            break;
        case GPIOC_BASE_ADDRESS:
            rcc.AHB1ENR.modify(RCC_AHB1ENR_GPIOCEN);
            break;
        case GPIOD_BASE_ADDRESS:
            rcc.AHB1ENR.modify(RCC_AHB1ENR_GPIODEN);
            break;
        case GPIOE_BASE_ADDRESS:
            rcc.AHB1ENR.modify(RCC_AHB1ENR_GPIOEEN);
            break;
        case GPIOH_BASE_ADDRESS:
            rcc.AHB1ENR.modify(RCC_AHB1ENR_GPIOHEN);
            break;
    }
}
