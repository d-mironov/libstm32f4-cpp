#pragma once

#include "pin.h"
#include "field.h"
#include "registers.h"
#include <cstdint>
#include "stm32f4xx.h"

namespace stm32f4 {
    namespace pin {
        enum otype {
            PUSHPULL,
            OPENDRAIN,
        };

        enum speed {
            LOW,
            MEDIUM,
            FAST,
            HIGH,
        };

        enum pull {
            NOPULL,
            UP,
            DOWN,
        };

        enum alternate {
            AF00, AF01, AF02, AF03, AF04, AF05, AF06, AF07,
            AF08, AF09, AF10, AF11, AF12, AF13, AF14, AF15
        };

        enum mode {
            INPUT, OUTPUT, ALTERNATE, ANALOG
        };
    }
};

template<stm32f4::regs::_gpio& P>
class Pin {
    
 private:
    stm32f4::regs::_gpio port = P;
    uint8_t pinnum;
 public:
    Pin() : pinnum(0) {
    };

    Pin(int _pin) : pinnum(_pin) {
    };


    void make_output();
    void make_input();
    void make_analog();
    void make_alternate();
    void mode(const stm32f4::pin::mode m);


    void out_type(const stm32f4::pin::otype ot);
    void speed(const stm32f4::pin::speed spd);
    void pull(const stm32f4::pin::pull p);
    void alternate(const stm32f4::pin::alternate af);

    void operator=(uint8_t val);
    void high();
    void low();

    bool read();
    bool is_low();
    bool is_high();

    uint8_t get_pin();
    void lock();
};

template class Pin<stm32f4::regs::gpioa>;
template class Pin<stm32f4::regs::gpiob>;
template class Pin<stm32f4::regs::gpioc>;
template class Pin<stm32f4::regs::gpiod>;
template class Pin<stm32f4::regs::gpioe>;
template class Pin<stm32f4::regs::gpioh>;
