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

s16 func_80037B94(s32, M2C_UNK, s16);               /* extern */
s32 func_8005B998(s32);                             /* extern */
extern s16 D_8008C9C8;
extern s32 D_8008E9E0;

s16 func_80037A58(s32 arg0, M2C_UNK arg1) {
    s16 temp_v1;
    s16 var_s2;
    s16 var_v0;
    s32 temp_v0;
    s32 var_v0_2;
    s32 var_v1;
    void *temp_s0;
    void *temp_v1_2;

    var_s2 = 1;
loop_1:
    var_v0 = -1;
    if (var_s2 < 0x11) {
        temp_v0 = D_8008C9C8 + var_s2;
        var_v1 = temp_v0;
        if (temp_v0 < 0) {
            var_v1 = temp_v0 + 0xF;
        }
        temp_v1 = temp_v0 - ((var_v1 >> 4) * 0x10);
        temp_s0 = arg0 + (temp_v1 * 4);
        if (M2C_FIELD(temp_s0, void **, 4) != NULL) {
            if (func_8005B998(M2C_FIELD(temp_s0, s32 *, 0x140)) != 0) {
                var_s2 += 1;
                goto loop_1;
            }
            if (M2C_FIELD(temp_s0, s32 *, 0xB4) == D_8008E9E0) {
                var_s2 += 1;
                goto loop_1;
            }
            temp_v1_2 = M2C_FIELD(temp_s0, void **, 4);
            if (M2C_FIELD(temp_v1_2, s16 *, 0xE) == temp_v1) {
                M2C_FIELD(temp_v1_2, s16 *, 0xE) = -1;
                goto block_15;
            }
            var_v0_2 = var_s2 << 0x10;
            goto block_16;
        }
block_15:
        var_v0_2 = var_s2 << 0x10;
block_16:
        if ((var_v0_2 >> 0x10) >= 0x11) {
            return -1;
        }
        D_8008C9C8 = temp_v1;
        var_v0 = func_80037B94(arg0, arg1, temp_v1);
        /* Duplicate return node #19. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
