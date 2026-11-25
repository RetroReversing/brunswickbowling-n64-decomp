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

s32 func_80016C70(M2C_UNK *);                       /* extern */
s32 func_80016CF0(M2C_UNK *);                       /* extern */
M2C_UNK func_80025438();                            /* extern */
M2C_UNK func_800256F0(M2C_UNK, s32, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_80039738(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, s32, M2C_UNK *); /* extern */
s32 func_80039BC4(M2C_UNK *, M2C_UNK *);            /* extern */
M2C_UNK func_80045050(M2C_UNK *, s32, M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32, s32, s32); /* extern */
extern M2C_UNK D_800762EC;
extern s32 D_8007DA44;
extern M2C_UNK D_800827A4;
extern M2C_UNK D_80089930;
extern M2C_UNK D_8008AB10;
extern M2C_UNK D_8008CEEC;
extern M2C_UNK D_8008ED80;

void func_800271F8(void) {
    M2C_UNK var_a2;
    s32 temp_s0;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s1;
    s32 var_v0;
    s32 var_v1;

    var_s0 = 0;
    var_s1 = 0x6E - ((D_8007DA44 - 1) * 8);
loop_1:
    if (var_s0 < D_8007DA44) {
        if (M2C_FIELD(&D_80089930, s32 *, 0x14) != 0) {
            var_a2 = 0x25C;
            var_v0 = var_s0 == 0;
        } else if (M2C_FIELD(&D_8008AB10, s32 *, 0) != 0) {
            var_v1 = M2C_FIELD(&D_8008AB10, s32 *, 0x2C);
            if (var_v1 >= 0xD) {
                var_v1 = 0xC;
            }
            if (var_v1 >= 0xA) {

            }
            var_a2 = 0x108;
            var_v0 = var_s0 == 0;
        } else {
            var_a2 = 0x108;
            var_v0 = var_s0 == 0;
        }
        func_800256F0(0, var_s1, var_a2, 0x28, var_v0);
        if (var_s0 != 0) {
            var_s1 += 0x14;
        } else {
            var_s1 += 0x1E;
        }
        var_s0 += 1;
        goto loop_1;
    }
    var_s0_2 = 0;
    if (func_80016C70(&D_800827A4) != 0) {
        var_s0_2 = func_80016CF0(&D_800827A4) != 0;
    }
    if (var_s0_2 != 0) {
        temp_s0 = 0x122 - (func_80039BC4(&D_8008CEEC, &D_800762EC) >> 1);
        func_80045050(&D_8008ED80, temp_s0, 0xA3, 0, func_80039BC4(&D_8008CEEC, &D_800762EC) + 0x3C, M2C_FIELD(&D_8008CEEC, s32 *, 8) + 0x14, 0x20, 0x20, 0x40, 2, 0);
        func_80039738(&D_8008CEEC, 0, 1, 0x140, 0xAD, &D_800762EC);
    }
    func_80025438();
}
