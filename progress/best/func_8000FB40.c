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

M2C_UNK func_8000FA40(s32, s32, s32);               /* extern */
extern s32 D_8007B210;
extern M2C_UNK D_8007BB04;
extern s32 D_8007C3F4;

void func_8000FB40(void) {
    s32 temp_s3;
    s32 var_s1;
    s32 var_s4;
    u16 *temp_s0;
    u16 *temp_s1;
    u16 *temp_s2;

    var_s4 = 1;
    if ((D_8007B210 - 1) > 1) {
        var_s1 = 1 * 2;
        do {
            temp_s1 = var_s1 + &D_8007BB04;
            temp_s3 = var_s4 + 4;
            temp_s2 = (temp_s3 * 2) + &D_8007BB04;
            temp_s0 = ((var_s4 + 2) * 2) + &D_8007BB04;
            func_8000FA40(D_8007C3F4 + (*temp_s1 * 0x48), D_8007C3F4 + (*temp_s2 * 0x48), D_8007C3F4 + (*temp_s0 * 0x48));
            func_8000FA40(D_8007C3F4 + (*temp_s1 * 0x48), D_8007C3F4 + (*temp_s0 * 0x48), D_8007C3F4 + (*(((var_s4 + 1) * 2) + &D_8007BB04) * 0x48));
            func_8000FA40(D_8007C3F4 + (*temp_s0 * 0x48), D_8007C3F4 + (*temp_s2 * 0x48), D_8007C3F4 + (*(((var_s4 + 3) * 2) + &D_8007BB04) * 0x48));
            var_s4 = temp_s3;
            var_s1 = var_s4 * 2;
        } while (var_s4 < (D_8007B210 - 1));
    }
}
