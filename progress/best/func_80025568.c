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

M2C_UNK func_80039738(M2C_UNK *, M2C_UNK, M2C_UNK, s16, s32, s32); /* extern */
M2C_UNK func_80045050(M2C_UNK *, s32, s32, M2C_UNK, s32, s32, s32, s32, s32, s32, s32); /* extern */
extern s32 *D_800898FC;
extern s32 D_80089918;
extern s32 D_8008991C;
extern s32 D_80089920;
extern s32 D_80089924;
extern s32 D_80089928;
extern M2C_UNK D_8008CEB0;
extern s32 D_8008D8E8;
extern M2C_UNK D_8008ED80;
extern s32 D_8008ED84;

void func_80025568(void) {
    s32 *var_v1;
    s32 temp_s6;
    s32 temp_s7;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;

    temp_s7 = M2C_FIELD(&D_8008ED80, s32 *, 4);
    temp_s6 = D_8008D8E8;
    D_8008D8E8 = D_80089918;
    M2C_FIELD(&D_8008ED80, s32 *, 4) = (s32) D_80089918;
    if ((D_800898FC != NULL) && (*D_800898FC != 0)) {
        var_s3 = D_80089928;
        if (var_s3 < 0) {
            var_s3 = 0x1C4;
        }
        var_s1 = D_80089924;
        if (var_s1 < 0) {
            var_s1 = 0x82;
        }
        func_80045050(&D_8008ED80, var_s3 - ((s32) D_80089920 >> 1), var_s1 - ((s32) D_8008991C >> 1), 0, D_80089920, D_8008991C, 8, 8, 8, 2, 0);
        var_v1 = D_800898FC;
        var_s2 = 0;
        if (*var_v1 != 0) {
            do {
                var_s1 -= 6;
                var_v1 += 4;
                var_s2 += 1;
            } while (*var_v1 != 0);
        }
        var_s0 = 0;
        if (var_s2 > 0) {
            do {
                temp_v0 = var_s1 << 0x10;
                var_s1 += 0xC;
                temp_v0_2 = D_800898FC[var_s0];
                var_s0 += 1;
                func_80039738(&D_8008CEB0, 0, 1, (s16) var_s3, temp_v0 >> 0x10, temp_v0_2);
            } while (var_s0 < var_s2);
        }
    }
    D_8008D8E8 = temp_s6;
    D_8008ED84 = temp_s7;
}
