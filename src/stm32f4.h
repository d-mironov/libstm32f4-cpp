#pragma once
#include "field.h"
#include "registers.h"
#include "port.h"

namespace stm32f4 { 
    class peripheral {
     private:
     public:
        static peripheral& get_instance();
        Port<regs::gpioa> PA; 
        Port<regs::gpiob> PB; 
        Port<regs::gpioc> PC; 
        Port<regs::gpiod> PD; 
        Port<regs::gpioe> PE; 
        Port<regs::gpioh> PH; 
    };
}
