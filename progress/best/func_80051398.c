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

M2C_UNK func_80051938(s32);                         /* extern */
M2C_UNK func_80051AA4(s32, M2C_UNK);                /* extern */
extern f32 D_80079CB0;
extern u16 D_8009CBD0;
extern u16 D_8009CBE4;
extern u16 D_8009CC3C;
extern u16 D_8009CC4C;
extern u16 D_8009CC4E;
extern s32 *D_8009CC60;
extern s32 D_8009DB20;

void func_80051398(void) {
    s32 *temp_a2;
    s32 var_a0;
    s32 var_s0;

    if (D_8009CC4C == 0) {
        if (D_8009CC4E == 0) {
            if (D_8009CC3C == D_8009CBD0) {
                var_s0 = 0xA;
                if (D_8009CBE4 != 0) {
                    goto block_4;
                }
            } else {
                goto block_6;
            }
        } else {
            goto block_5;
        }
    } else {
block_4:
block_5:
block_6:
        temp_a2 = D_8009CC60;
        M2C_FIELD(temp_a2, s32 *, 0) = 0xED000000;
        D_8009CC60 += 8;
        M2C_FIELD(temp_a2, s32 *, 4) = (s32) ((((s32) ((f32) D_8009CBD0 * D_80079CB0) & 0xFFF) << 0xC) | ((s32) ((f32) D_8009CBE4 * D_80079CB0) & 0xFFF));
        var_s0 = 0xA;
    }
    var_a0 = 0xA;
    do {
        func_80051AA4(var_a0, 0);
        func_80051938(var_s0);
        func_80051AA4(var_s0, 1);
        var_s0 -= 1;
        var_a0 = var_s0;
    } while (var_s0 >= 0);
    D_8009DB20 = 0;
}
