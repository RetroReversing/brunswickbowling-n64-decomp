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


extern int (*D_80097610[])();
M2C_UNK func_8005BD58(s32);                         /* extern */
M2C_UNK func_8005D080(s32);                         /* extern */
M2C_UNK func_8005D144(s32);                         /* extern */
s32 func_8005DBAC();                                /* extern */
extern s32 D_800A5A54;
extern s32 D_800A5A5C;

s32 func_8005B3B0(s32 arg0, s32 arg1) {
    s32 temp_s3;
    s32 var_s1;
    s32 var_s2;
    s32 var_v0;
    u16 var_v1;
    u32 temp_v1;
    u8 temp_a0;
    u8 temp_a0_2;
    u8 temp_a1_2;
    u8 var_a0;
    void *temp_a1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *var_a1;
    void *var_s0;

    var_s1 = D_800A5A5C;
    var_s2 = 0;
    temp_s3 = func_8005DBAC();
    if (D_800A5A54 > 0) {
        var_s0 = var_s1 + 0x34;
        do {
            if ((M2C_FIELD(var_s0, s32 *, 0x10) == temp_s3) && (M2C_FIELD(var_s0, s32 *, 0x40) == arg0) && (M2C_FIELD(var_s0, void **, -0x30) != NULL)) {
loop_5:
                temp_a1 = M2C_FIELD(var_s0, void **, -0x30);
                temp_a0 = M2C_FIELD(temp_a1, u8 *, 0);
                temp_v1 = temp_a0 & 0xFF;
                if (temp_v1 >= 0x80U) {
                    var_v0 = temp_a0 & 0x7F;
                    if ((temp_v1 != 0xAB) || (var_v0 = temp_a0 & 0x7F, (M2C_FIELD(temp_a1, u8 *, 1) != arg1))) {
                        M2C_FIELD(var_s0, void **, -0x30) = D_80097610[var_v0](var_s1, temp_a1 + 1);
                        goto block_20;
                    }
                } else {
                    M2C_FIELD(var_s0, void **, -0x30) = (void *) (temp_a1 + 1);
                    if (M2C_FIELD(var_s0, u8 *, 0x9E) != 0) {
                        M2C_FIELD(var_s0, void **, -0x30) = (void *) (temp_a1 + 2);
                        temp_a1_2 = M2C_FIELD(temp_a1, u8 *, 1);
                        M2C_FIELD(var_s0, u8 *, 0x87) = temp_a1_2;
                        if ((u32) (temp_a1_2 & 0xFF) >= 0x80U) {
                            M2C_FIELD(var_s0, u8 *, 0x87) = (u8) (temp_a1_2 & 0x7F);
                            M2C_FIELD(var_s0, u8 *, 0x9E) = 0U;
                            M2C_FIELD(var_s0, u8 *, 0x9F) = (u8) M2C_FIELD(var_s0, u8 *, 0x87);
                        }
                    } else {
                        M2C_FIELD(var_s0, u8 *, 0x87) = (u8) M2C_FIELD(var_s0, u8 *, 0x9F);
                    }
                    var_v1 = M2C_FIELD(var_s0, u16 *, 0x78);
                    if ((var_v1 == 0) || (M2C_FIELD(var_s0, u8 *, 0x83) != 0)) {
                        temp_v1_2 = M2C_FIELD(var_s0, void **, -0x30);
                        M2C_FIELD(var_s0, u8 *, 0x83) = 0U;
                        M2C_FIELD(var_s0, void **, -0x30) = (void *) (temp_v1_2 + 1);
                        temp_a0_2 = M2C_FIELD(temp_v1_2, u8 *, 0);
                        if ((u32) (temp_a0_2 & 0xFF) < 0x80U) {
                            M2C_FIELD(var_s0, u16 *, 0x66) = (u16) temp_a0_2;
                        } else {
                            M2C_FIELD(var_s0, void **, -0x30) = (void *) (temp_v1_2 + 2);
                            var_v1 = M2C_FIELD(temp_v1_2, u8 *, 1) + ((temp_a0_2 & 0x7F) << 8);
                            goto block_18;
                        }
                    } else {
block_18:
                        M2C_FIELD(var_s0, u16 *, 0x66) = var_v1;
                    }
                    M2C_FIELD(var_s0, s32 *, -0x28) = (s32) (M2C_FIELD(var_s0, s32 *, -0x28) + (M2C_FIELD(var_s0, u16 *, 0x66) << 8));
block_20:
                    if (M2C_FIELD(var_s0, void **, -0x30) != NULL) {
                        goto loop_5;
                    }
                }
                temp_v1_3 = M2C_FIELD(var_s0, void **, -0x30);
                M2C_FIELD(var_s0, s32 *, 8) = (s32) M2C_FIELD(var_s0, s32 *, -0x28);
                if (temp_v1_3 != NULL) {
                    var_a0 = M2C_FIELD(temp_v1_3, u8 *, 2);
                    var_a1 = temp_v1_3 + 3;
                    if ((s32) var_a0 >= 0x80) {
                        var_a1 = temp_v1_3 + 4;
                        var_a0 = ((var_a0 & 0x7F) << 8) | M2C_FIELD(temp_v1_3, u8 *, 3);
                    }
                    M2C_FIELD(var_s0, s16 *, 0x76) = 0;
                    M2C_FIELD(var_s0, u16 *, 0x66) = (u16) var_a0;
                    M2C_FIELD(var_s0, void **, -0x30) = var_a1;
                    M2C_FIELD(var_s0, s32 *, -0x28) = (s32) (M2C_FIELD(var_s0, s32 *, -0x28) - (var_a0 << 8));
                }
                M2C_FIELD(var_s0, s32 *, 0xC) = (s32) M2C_FIELD(var_s0, s32 *, -0x28);
                if (M2C_FIELD(var_s0, s32 *, 4) != 0) {
                    func_8005D080(var_s1);
                }
                if (M2C_FIELD(var_s0, s32 *, 0) != 0) {
                    func_8005D144(var_s1);
                }
            }
            var_s2 += 1;
            var_s0 += 0x13C;
            var_s1 += 0x13C;
        } while (var_s2 < D_800A5A54);
    }
    func_8005BD58(temp_s3);
    return temp_s3;
}
