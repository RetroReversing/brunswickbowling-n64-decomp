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

M2C_UNK func_8002744C(s32);                         /* extern */
M2C_UNK func_80027C44();                            /* extern */
M2C_UNK func_800284A8(s32);                         /* extern */
s32 func_800315E0(M2C_UNK *, M2C_UNK);              /* extern */
M2C_UNK func_80039738(); /* extern */
extern M2C_UNK D_80077144;
extern M2C_UNK D_80077154;
extern M2C_UNK D_8007715C;
extern M2C_UNK D_8007716C;
extern s32 D_80082760;
extern s32 D_80085224;
extern M2C_UNK D_8008B3A4;
extern M2C_UNK D_8008B3D8;
extern s16 D_8008B7A0;
extern M2C_UNK D_8008CF28;
extern s32 D_800994E0;
extern s32 D_800994E4;

void func_8002F7B0(void *arg0) {
    M2C_UNK *var_v0;
    M2C_UNK var_a3;
    s32 temp_a0;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_v1;
    s32 var_a1;
    s32 var_s0;
    void *temp_s1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x14);
    switch (temp_v1) {                              /* irregular */
    case 0:
        func_8002744C(M2C_FIELD(arg0, s32 *, 0x1C));
        break;
    case 2:
        func_800284A8(M2C_FIELD(arg0, s32 *, 0x1C));
        break;
    case 3:
        temp_s1 = &D_8008B3D8 - 0x10;
        temp_s3 = M2C_FIELD(&D_8008B3D8, s32 *, 4);
        temp_s2 = M2C_FIELD(temp_s1, s32 *, 4);
        if (D_80082760 != 0) {
            M2C_FIELD(&D_8008B3D8, s32 *, 4) = (s32) D_800994E4;
            M2C_FIELD(temp_s1, s32 *, 4) = (s32) D_800994E0;
        }
        func_800284A8(0);
        if (D_80082760 != 0) {
            M2C_FIELD(&D_8008B3D8, s32 *, 4) = temp_s3;
            M2C_FIELD(temp_s1, s32 *, 4) = temp_s2;
        }
        break;
    case 1:
        func_80027C44();
        break;
    }
    var_s0 = 0;
    if (D_80085224 == 0) {
        var_a1 = 0;
        if (M2C_FIELD(&D_8008B3A4, s32 *, 0x44) == 9) {
            var_a1 = func_800315E0(&D_8008B3A4, 0) != 0;
        }
        if (var_a1 == 0) {
            var_s0 = 1;
        }
    }
    if (var_s0 != 0) {
        if (D_8008B7A0 != 0) {
            func_80039738(&D_8008CF28, 0, 1, 0x118, (M2C_UNK *)0xD4, &D_80077144);
            var_a3 = 0x1A4;
            var_v0 = &D_80077154;
        } else {
            var_a3 = 0x140;
            var_v0 = &D_80077154;
        }
        goto block_25;
    }
    if (D_8008B7A0 != 0) {
        var_a3 = 0x140;
        var_v0 = &D_80077144;
block_25:
        func_80039738(&D_8008CF28, 0, 1, var_a3, var_v0);
    }
    temp_a0 = M2C_FIELD(arg0, s32 *, 0x14);
    if ((temp_a0 == 0) || (temp_a0 == 2)) {
        func_80039738(&D_8008CF28, 0, 0, 0x2D, (M2C_UNK *)0xD4, &D_8007715C);
    }
    func_80039738(&D_8008CF28, 0, 2, 0x253, (M2C_UNK *)0xD4, &D_8007716C);
}
