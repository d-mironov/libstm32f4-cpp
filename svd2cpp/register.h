#pragma once
#include <cstdint>

/*
    General Idea:

    There is the Field type which has a 32-bit register specified to it 
    and there is a Reg type where the whole register is specified with it's 
    fields

    The field class can also contain a bitfield to easily access all the bits.
*/

using reg_type = uint32_t;

enum bits {
    bit0 = (1 << 0), bit1 = (1 << 1), bit2 = (1 << 2), bit3 = (1 << 3),
    bit4 = (1 << 4), bit5 = (1 << 5), bit6 = (1 << 6), bit7 = (1 << 7),
    bit8 = (1 << 8), bit9 = (1 << 9), bit10 = (1 << 10), bit11 = (1 << 11),
    bit12 = (1 << 12), bit13 = (1 << 13), bit14 = (1 << 14), bit15 = (1 << 15),
    bit16 = (1 << 16), bit17 = (1 << 17), bit18 = (1 << 18), bit19 = (1 << 19),
    bit20 = (1 << 20), bit21 = (1 << 21), bit22 = (1 << 22), bit23 = (1 << 23),
    bit24 = (1 << 24), bit25 = (1 << 25), bit26 = (1 << 26), bit27 = (1 << 27),
    bit28 = (1 << 28), bit29 = (1 << 29), bit30 = (1 << 30), bit31 = (1 << 31),
};

template<unsigned int sz>
struct RegisterTrait{};

template<>
struct RegisterTrait<8> {
    using regtype = uint8_t;
};

template<>
struct RegisterTrait<16> {
    using regtype = uint16_t;
};

template<>
struct RegisterTrait<32> {
    using regtype = uint32_t;
};

template<>
struct RegisterTrait<64> {
    using regtype = uint64_t;
};

template<uint8_t bs>
class Field {

 protected:
    using regtype = typename RegisterTrait<bs>::regtype;
    regtype* reg_;
 public:


    explicit Field(regtype reg_addr) {
        reg_ = reinterpret_cast<regtype*>(reg_addr);
    };
    ~Field() = default;


    inline regtype read() {
        return *reg_;
    }

    inline void write(regtype value) {
        *reg_ = value;
    }

    inline void modify(regtype value) {
        *reg_ |= value;
    }

    inline void clear(regtype value) {
        *reg_ &= ~value;
    }
};
