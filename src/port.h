#pragma once

#include <registers.h>

#include <array>
#include <cstdint>

#include "./pin.h"

#define PINS_PER_PORT 16

using stm32f4::regs::_gpio;

template <_gpio& P>
class Port {
   private:
    _gpio& port = P;
    std::array<Pin<P>, PINS_PER_PORT> pins;

   public:
    Port() {
        for (u8 i = 0; i < PINS_PER_PORT; ++i) {
            pins[i] = Pin<P>(i);
        }
    }

    Pin<P>& operator[](u8 _pin);

    void write_all(stm32f4::pin::write w);

    void enable_clock();
    void disable_clock();
};

template class Port<stm32f4::regs::gpioa>;
template class Port<stm32f4::regs::gpiob>;
template class Port<stm32f4::regs::gpioc>;
template class Port<stm32f4::regs::gpiod>;
template class Port<stm32f4::regs::gpioe>;
template class Port<stm32f4::regs::gpioh>;
