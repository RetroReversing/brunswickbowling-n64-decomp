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

M2C_UNK func_80015E60(s32, void *, u16, void *);    /* extern */

void func_80016044(void *arg0, u8 *arg1) {
    s32 var_a0;
    u8 *var_a1;
    u8 temp_v0;

    var_a1 = arg1;
    var_a0 = 0;
    if (*var_a1 != 0) {
loop_1:
        if (var_a0 < 0xFF) {
            temp_v0 = *var_a1;
            var_a1 += 1;
            M2C_FIELD((arg0 + var_a0), u8 *, 8) = temp_v0;
            var_a0 += 1;
            if (*var_a1 != 0) {
                goto loop_1;
            }
        }
    }
    M2C_FIELD((arg0 + var_a0), s8 *, 8) = 0;
    func_80015E60(M2C_FIELD(arg0, s32 *, 4), arg0 + 8, M2C_FIELD(arg0, u16 *, 0x108), arg0);
}
