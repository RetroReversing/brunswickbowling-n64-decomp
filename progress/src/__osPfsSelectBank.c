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

s32 __osContRamWrite(s32, s32, M2C_UNK, M2C_UNK *, s32); /* extern */

void __osPfsSelectBank(void *arg0, s8 arg1) {
    s32 __repair_fill_buffer[8];
    s32 var_v1;

    var_v1 = 31;
    do {
        ((s8 *)__repair_fill_buffer)[var_v1] = arg1;
        var_v1 -= 1;
    } while (var_v1 >= 0);
    if (__osContRamWrite(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), 1024, (M2C_UNK *)__repair_fill_buffer, 0) == 0) {
        M2C_FIELD(arg0, s8 *, 101) = arg1;
    }
}
