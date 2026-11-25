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

M2C_UNK func_8002BE68(void *);                      /* extern */
M2C_UNK func_8002C5CC(void *);                      /* extern */

void func_8002CA9C(void *arg0) {
    s32 temp_v1;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s1;
    s32 var_s1_2;

    var_s1 = 0;
    var_s0 = 4;
    M2C_FIELD(arg0, s32 *, 0xCC) = 8;
    M2C_FIELD(arg0, s16 *, 0xD4) = 0x7FE0;
    M2C_FIELD(arg0, s32 *, 0xD0) = -1;
    do {
        func_8002C5CC(arg0 + var_s0);
        var_s1 += 1;
        var_s0 += 0x14;
    } while (var_s1 < 8);
    var_s1_2 = 8;
    var_s0_2 = 0xA4;
    do {
        func_8002BE68(arg0 + var_s0_2);
        var_s1_2 += 1;
        var_s0_2 += 0x14;
    } while (var_s1_2 < 0xA);
loop_4:
    temp_v1 = M2C_FIELD(arg0, s32 *, 0xD0);
    if ((temp_v1 < 9) && (M2C_FIELD(((temp_v1 * 0x14) + arg0), u8 *, 0x21) != 0)) {
        M2C_FIELD(arg0, s32 *, 0xD0) = (s32) (temp_v1 + 1);
        goto loop_4;
    }
}
