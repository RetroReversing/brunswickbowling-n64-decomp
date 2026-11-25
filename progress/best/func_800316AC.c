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

extern char D_8007F618[];
extern char D_80081A08[];

s32 func_800316AC(void *arg0) {
    s32 var_a0;
    s32 var_a1;
    void *temp_v1;

    var_a1 = 0;
loop_1:
    if (var_a1 < (s32) M2C_FIELD(arg0, u8 *, 0x48)) {
        temp_v1 = (*(var_a1 + D_80081A08) * 0x5C) + D_8007F618;
        var_a0 = 0;
        if ((M2C_FIELD(temp_v1, u8 *, 0x18) != 2) || (M2C_FIELD(temp_v1, s32 *, 0x28) != 0)) {
            var_a0 = 1;
        }
        var_a1 += 1;
        if (var_a0 != 0) {
            return 0;
        }
        goto loop_1;
    }
    return 1;
}
