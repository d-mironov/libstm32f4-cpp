#pragma once
#include "field.h"
#include "port.h"
#include "registers.h"

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
}  // namespace stm32f4
