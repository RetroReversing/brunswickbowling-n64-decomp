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

extern int D_8008EB3C;
s32 func_80040188();
extern char D_8008EB34[];
extern s32 D_8009C5D0;
extern u8 D_8009D5C4;

void func_8004152C(s32 arg0, s32 arg1) {
    s32 *var_s1;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a2;
    s32 var_v0;

    var_a2 = arg1;
    if (arg0 != 2) {
        if (arg0 < 3) {
            if (arg0 != 1) {
                var_s1 = D_8008EB34;
                goto block_15;
            }
            if ((var_a2 == 2) || (M2C_FIELD(((D_8009C5D0 * 4) + D_8008EB34), s32 *, 0x6C) == -1)) {
                func_80040188(D_8008EB34, D_8009C5D0, var_a2);
                D_8008EB3C = arg0;
                return;
            }
            goto block_14;
        }
        if (arg0 != 3) {
            var_s1 = D_8008EB34;
        } else {
            if (var_a2 == 0) {
                var_a2 = 9;
            }
            goto block_14;
        }
        goto block_15;
    }
    if (var_a2 == arg0) {
        D_8008EB3C = 1;
        return;
    }
block_14:
    var_s1 = D_8008EB34;
block_15:
    func_80040188(var_s1, D_8009C5D0, var_a2);
    temp_v1 = D_8009C5D0 + 1;
    var_v0 = temp_v1;
    if (temp_v1 < 0) {
        var_v0 = D_8009C5D0 + 4;
    }
    temp_v0 = temp_v1 - ((var_v0 >> 2) * 4);
    D_8009C5D0 = temp_v0;
    if ((temp_v0 == 1) && (D_8009D5C4 & 8)) {
        D_8009C5D0 = 4;
        func_80040188(var_s1, 1, 0xA);
        func_80040188(var_s1, 2, 0xA);
        func_80040188(var_s1, 3, 0xA);
    }
    D_8008EB3C = 0;
}
