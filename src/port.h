#pragma once

#include <cstdint>
#include <array>
#include <registers.h>
#include "pin.h"

#define PINS_PER_PORT 16


template<stm32f4::regs::_gpio& P>
class Port {
 private:
    stm32f4::regs::_gpio& port = P;
    std::array<Pin<P>, PINS_PER_PORT> pins;

 public:
    Port() {
        for (uint8_t i = 0; i < PINS_PER_PORT; ++i) {
            pins[i] = Pin<P>(i);
        }
    }

    Pin<P>& operator[](uint8_t _pin);
    
    void enable_clock();
    void disable_clock();
};

template class Port<stm32f4::regs::gpioa>;
template class Port<stm32f4::regs::gpiob>;
template class Port<stm32f4::regs::gpioc>;
template class Port<stm32f4::regs::gpiod>;
template class Port<stm32f4::regs::gpioe>;
template class Port<stm32f4::regs::gpioh>;
