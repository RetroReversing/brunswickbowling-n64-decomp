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

extern u32 D_8009D858;

void func_8004005C(void *arg0) {
    s32 var_a2;
    char *var_a3;
    u32 temp_v1;
    void *var_a1;

    var_a2 = 0;
    var_a1 = arg0;
    var_a3 = &D_8009D858;
    M2C_FIELD(arg0, s32 *, 0x8C) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    do {
        M2C_FIELD(var_a1, s32 *, 0x7C) = 0;
        temp_v1 = *(u32 *)var_a3;
        switch (temp_v1) {
        case 0:
        case 2:
        case 9:
            M2C_FIELD(var_a1, s32 *, 0x6C) = 3;
            if (M2C_FIELD(arg0, s32 *, 0x8C) == -1) {
                M2C_FIELD(arg0, s32 *, 0x8C) = var_a2;
block_10:
                var_a1 += 4;
            } else {
                var_a1 += 4;
            }
            break;
        case 1:
            M2C_FIELD(var_a1, s32 *, 0x6C) = 0;
            goto block_10;
        case 7:
            M2C_FIELD(var_a1, s32 *, 0x6C) = 1;
            goto block_10;
        default:
            M2C_FIELD(var_a1, s32 *, 0x6C) = -2;
            goto block_10;
        }
        var_a2 += 1;
        var_a3 += 4;
    } while (var_a2 < 4);
}
