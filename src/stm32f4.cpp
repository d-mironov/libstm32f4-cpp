#include "./field.h"
#include "./stm32f4.h"

using stm32f4::Peripheral;

Peripheral& Peripheral::get_instance() {
    static Peripheral instance;
    return instance;
}
