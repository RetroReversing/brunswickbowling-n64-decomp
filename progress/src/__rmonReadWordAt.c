/* identical to __rmonReadWordAt in BLUES BROTHERS 2000 (local match library) (matched), with its names changed by decompdecomp */
/* Partial candidate from function #137438953984 in project #32; rechecked locally. */
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

s32 func_8006AFD0();

s32 __rmonReadWordAt(s32 arg0) {
    s32 sp10;

    if ((u32) (arg0 + 0xFC000000) <= 0xFFFFFFU) {
        func_8006AFD0(arg0, &sp10);
        return sp10;
    }
    return 0;
}
