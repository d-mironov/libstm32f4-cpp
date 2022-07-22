#include "pin.h"
#include "field.h"
#include "registers.h"

using namespace stm32f4::pin;

/**
 * Pin set to output
 * -----------------------------
 * Set Pin to output mode
 */
template<stm32f4::regs::_gpio& P>
void Pin<P>::make_output() {
    this->port.MODER.clear(bit[2 * pinnum] | bit[2 * pinnum + 1]);
    this->port.MODER.modify(bit[2 * pinnum]);
}

/**
 * Pin set to input 
 * -----------------------------
 * Set Pin to input mode
 */
template<stm32f4::regs::_gpio& P>
void Pin<P>::make_input() {
    this->port.MODER.clear(bit[2 * pinnum] | bit[2 * pinnum + 1]);
}

/**
 * Pin set to analog 
 * -----------------------------
 * Set Pin to analog mode
 */
template<stm32f4::regs::_gpio& P>
void Pin<P>::make_analog() {
    this->port.MODER.modify(bit[2 * pinnum] | bit[2 * pinnum + 1]);
}

/**
 * Pin set to alternate
 * -----------------------------
 * Set Pin to alternate mode
 */
template<stm32f4::regs::_gpio& P>
void Pin<P>::make_alternate() {
    this->port.MODER.clear(bit[2 * pinnum] | bit[2 * pinnum + 1]);
    this->port.MODER.modify(bit[2 * pinnum + 1]);
}

/**
 * Change mode of pin
 * -----------------------------
 * Set pin to selected mode
 *
 * Args:
 * > `m`: Mode to set <`OUTPUT`, `INPUT`, `ALTERNATE`, `ANALOG`>
 */
template<stm32f4::regs::_gpio& P>
void Pin<P>::mode(const stm32f4::pin::mode m) {
    switch (m) {
        case mode::INPUT:
            make_input();
            break;
        case mode::OUTPUT:
            make_output();
            break;
        case mode::ALTERNATE:
            make_alternate();
            break;
        case mode::ANALOG:
            make_analog();
            break;
    };
}


/**
 * Pull Pin high
 */
template<stm32f4::regs::_gpio& P>
void Pin<P>::high() {
    this->port.BSRR.modify(bit[pinnum]);
}

/**
 * Pull Pin high
 */
template<stm32f4::regs::_gpio& P>
void Pin<P>::operator=(uint8_t val) { 
    this->port.BSRR.modify(bit[pinnum + (val ? 0 : 16)]);
}

/**
 * Pull Pin low 
 */
template<stm32f4::regs::_gpio& P>
void Pin<P>::low() {
    this->port.BSRR.modify(bit[pinnum + 16]);
}


template<stm32f4::regs::_gpio& P>
void Pin<P>::out_type(const stm32f4::pin::otype ot) {
    this->port.OTYPER.clear(bit[pinnum]);
    if (ot == otype::OPENDRAIN) {
        this->port.OTYPER.modify(bit[pinnum]);
    }
}

template<stm32f4::regs::_gpio& P>
void Pin<P>::speed(const stm32f4::pin::speed spd) {
    this->port.OSPEEDR.clear(bit[2 * pinnum] | bit[2 * pinnum + 1]);
    switch (spd) {
        case speed::LOW:
            return;
        case speed::MEDIUM:
            this->port.OSPEEDR.modify(bit[2 * pinnum]);
            break;
        case speed::FAST:
            this->port.OSPEEDR.modify(bit[2 * pinnum + 1]);
            break;
        case speed::HIGH:
            this->port.OSPEEDR.modify(bit[2 * pinnum] | bit[2 * pinnum + 1]);
            break;
    }
}

template<stm32f4::regs::_gpio& P>
void Pin<P>::pull(const stm32f4::pin::pull _pull) {
    this->port.PUPDR.clear(bit[2 * pinnum] | bit[2 * pinnum + 1]);
    switch (_pull) {
        case pull::NOPULL:
            return;
        case pull::UP:
            this->port.PUPDR.modify(bit[2 * pinnum]);
            break;
        case pull::DOWN:
            this->port.PUPDR.modify(bit[2 * pinnum + 1]);
            break;
    }
}

template<stm32f4::regs::_gpio& P>
void Pin<P>::alternate(const stm32f4::pin::alternate af) {
    if (pinnum < 8) {
        for (uint8_t i = 0; i < 4; ++i) {
            this->port.AFRL.clear(bit[4 * pinnum + i]);
        }
        this->port.AFRL.modify(af << (4 * pinnum));
    } else {
        for (uint8_t i = 0; i < 4; ++i) {
            this->port.AFRH.clear(bit[4 * (pinnum - 8) + i]);
        }
        this->port.AFRH.modify(af << (4 * (pinnum - 8)));
    }
}


template<stm32f4::regs::_gpio& P>
bool Pin<P>::read() {
    return this->port.IDR.is_set(bit[pinnum]);
}

template<stm32f4::regs::_gpio& P>
bool Pin<P>::is_low() {
    return !this->port.IDR.is_set(bit[pinnum]);
}

template<stm32f4::regs::_gpio& P>
bool Pin<P>::is_high() {
    return read();
}

template<stm32f4::regs::_gpio& P>
void Pin<P>::lock() {
    return this->port.LCKR.modify(bit[pinnum]);
}
