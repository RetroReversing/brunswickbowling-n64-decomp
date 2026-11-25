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

u32 func_800549E4(M2C_UNK);                         /* extern */
M2C_UNK func_80054A50();                            /* extern */
M2C_UNK func_80054C18(u32, u32, u32);               /* extern */
M2C_UNK func_80054EA4(u32, u32, u32);               /* extern */
M2C_UNK func_8005509C(u32, u32, u32);               /* extern */
M2C_UNK func_80055314(u32, M2C_UNK, u32);           /* extern */
M2C_UNK func_800553DC(u32, u32, u32);               /* extern */
extern M2C_UNK D_800A4910;
extern M2C_UNK D_8F0A4D40;

void func_8005544C(s32 arg0) {
    s32 var_a0_2;
    s32 var_v0;
    u32 var_a0;
    u32 var_a0_3;
    u32 var_a1;
    u32 var_s0;
    u32 var_s1;
    u32 var_s2;
    u32 var_s3;
    void *temp_v0;
    void *temp_v1;

    var_s2 = 0xB1FE0000;
    var_s1 = func_800549E4(0xB1FFFFF4);
    var_s3 = func_800549E4(0xB1FFFFF8);
    if ((u32) (var_s1 + 0x80000000) > 0x3FFFFFFFU) {
        func_80054A50();
    }
    if (var_s1 > 0xEFFFFFFFU) {
        var_s1 = (u32) (var_s1 + &D_8F0A4D40);
    }
    if (var_s3 != 0) {
        do {
            var_a0 = 0;
            if ((var_s1 < (u32) M2C_FIELD(&D_800A4910, u32 *, 0)) || (var_v0 = 0U < 0x30U, (((u32) M2C_FIELD(&D_800A4910, u32 *, 4) < var_s1) != 0))) {
                do {
loop_8:
                    var_a0 += 1;
                    temp_v1 = (var_a0 * 0xC) + &D_800A4910;
                    if (var_s1 < (u32) M2C_FIELD(temp_v1, u32 *, 0)) {
                        goto loop_8;
                    }
                } while ((u32) M2C_FIELD(temp_v1, u32 *, 4) < var_s1);
                var_v0 = var_a0 < 0x30U;
            }
            if (var_v0 == 0) {
                var_a0_2 = 0;
                var_s0 = 0x1000 - (var_s1 & 0xFFF);
            } else {
                temp_v0 = (var_a0 * 0xC) + &D_800A4910;
                var_a0_2 = M2C_FIELD(temp_v0, s32 *, 8);
                var_s0 = M2C_FIELD(temp_v0, s32 *, 4) - (var_s1 - 1);
            }
            if (var_s3 < var_s0) {
                var_s0 = var_s3;
            }
            if (!(var_a0_2 & arg0)) {
                if (arg0 == 1) {
                    func_80055314(var_s2, 0, var_s0);
                    var_s2 += var_s0;
                } else {
                    goto block_29;
                }
            } else if (var_a0_2 & 4) {
                var_a0_3 = var_s1;
                if (arg0 == 1) {
                    var_a0_3 = var_s2;
                    var_a1 = var_s1;
                } else {
                    var_a1 = var_s2;
                }
                func_800553DC(var_a0_3, var_a1, var_s0);
                var_s2 += var_s0;
            } else if (arg0 == 1) {
                func_8005509C(var_s2, var_s1, var_s0);
                var_s2 += var_s0;
            } else if (var_a0_2 & 8) {
                func_80054EA4(var_s2, var_s1, var_s0);
                var_s2 += var_s0;
            } else {
                func_80054C18(var_s2, var_s1, var_s0);
block_29:
                var_s2 += var_s0;
            }
            var_s3 -= var_s0;
            var_s1 += var_s0;
        } while (var_s3 != 0);
    }
}
