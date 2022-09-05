#include "./field.h"
#include "./stm32f4.h"

using stm32f4::peripheral;

peripheral& peripheral::get_instance() {
    static peripheral instance;
    return instance;
}
