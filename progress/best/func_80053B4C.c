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

s32 func_80052C50();
s32 func_80053330();
s32 func_80053338();
extern s32 D_80097050;
extern s32 D_80097054;
extern char D_800970A4[];
extern char D_800970E4[];
extern char D_80097124[];
extern char D_80097160[];
extern s32 D_800A2ED0;
extern s32 D_800A3878;
extern s32 D_800A387C;

s32 func_80053B4C(void) {
    char *var_a0;
    char *var_v0;
    char *var_v1;
    char *var_v1_2;
    char *var_v1_3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s1_3;

    if (D_80097050 == 0) {
        var_s1 = 0x8F;
        var_v0 = D_800A2ED0 + 0x23C;
        do {
            *(s32 *)var_v0 = 8;
            var_s1 -= 1;
            var_v0 -= 4;
        } while (var_s1 >= 0);
        var_s1_2 = 0x90;
        var_v1 = D_800A2ED0 + 0x240;
        do {
            *(s32 *)var_v1 = 9;
            var_s1_2 += 1;
            var_v1 += 4;
        } while (var_s1_2 < 0x100);
        if (var_s1_2 < 0x118) {
            var_v1_2 = &(&D_800A2ED0)[var_s1_2];
            do {
                *(s32 *)var_v1_2 = 7;
                var_s1_2 += 1;
                var_v1_2 += 4;
            } while (var_s1_2 < 0x118);
        }
        if (var_s1_2 < 0x120) {
            var_v1_3 = &(&D_800A2ED0)[var_s1_2];
            do {
                *(s32 *)var_v1_3 = 8;
                var_s1_2 += 1;
                var_v1_3 += 4;
            } while (var_s1_2 < 0x120);
        }
        D_800A3878 = 7;
        temp_v0_2 = func_80052C50(&D_800A2ED0, 0x120, 0x101, D_800970A4, D_800970E4, &D_80097050, &D_800A3878);
        var_s1_3 = temp_v0_2;
        if (var_s1_3 != 0) {
            D_80097050 = 0;
            return temp_v0_2;
        }
        var_a0 = &D_800A2ED0;
        do {
            *(s32 *)var_a0 = 5;
            var_s1_3 += 1;
            var_a0 += 4;
        } while (var_s1_3 < 0x1E);
        D_800A387C = 5;
        temp_v0_2 = func_80052C50(&D_800A2ED0, 0x1E, 0, D_80097124, D_80097160, &D_80097054, &D_800A387C);
        if ((temp_v0_2 != 0) && (temp_v0_2 != 2)) {
            func_80053330(D_80097050);
            D_80097050 = 0;
            D_80097054 = 0;
            return temp_v0_2;
        }
        goto block_18;
    }
block_18:
    return func_80053338(D_80097050, D_80097054, D_800A3878, D_800A387C);
}
