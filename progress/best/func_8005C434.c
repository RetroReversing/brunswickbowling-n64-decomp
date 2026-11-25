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

M2C_UNK alSynSetFXMix(M2C_UNK *, s32, s32);         /* extern */
M2C_UNK func_8005C9A0(void *, s32);                 /* extern */
M2C_UNK func_8005CCA4(void *, void *);              /* extern */
M2C_UNK func_8005CEF0(void *);                      /* extern */
M2C_UNK func_80064BA0(M2C_UNK *, s32);              /* extern */
M2C_UNK func_80064D50(M2C_UNK *, s32, M2C_UNK, s32); /* extern */
extern f64 D_8007A1A8;
extern M2C_UNK D_80097610;
extern s32 D_800A5A58;
extern s32 D_800A5A68;
extern M2C_UNK D_800A5D10;

void func_8005C434(void *arg0, s32 arg1) {
    f32 temp_fv1;
    s32 temp_a2;
    s32 temp_lo;
    s32 temp_s0;
    s32 temp_v1_3;
    s32 temp_v1_6;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v1_3;
    u16 temp_s1;
    u16 temp_s1_2;
    u16 var_v1_2;
    u8 *temp_a0_2;
    u8 *temp_v1;
    u8 *temp_v1_2;
    u8 *var_a1;
    u8 *var_v0;
    u8 temp_a0;
    u8 temp_a0_3;
    u8 temp_a0_4;
    u8 temp_a0_5;
    u8 temp_a1;
    u8 temp_a2_2;
    u8 temp_v1_4;
    u8 temp_v1_5;
    u8 var_a0;
    u8 var_a0_2;
    u8 var_s2;
    u8 var_v1;
    void *temp_s4;
    void *temp_v0;
    void *temp_v0_2;
    void *var_a1_2;

    var_a1 = M2C_FIELD(arg0, u8 **, 4);
    if (var_a1 == NULL) {
        M2C_FIELD(arg0, u8 **, 4) = var_a1;
        goto block_53;
    }
loop_3:
    temp_a0 = *var_a1;
    if ((u32) (temp_a0 & 0xFF) >= 0x80U) {
        var_a1 = ((s32 (*)()) *(s32 *)(&D_80097610 + ((temp_a0 & 0x7F) * 4)))(arg0, var_a1 + 1);
        if (var_a1 != NULL) {
            goto loop_3;
        }
    }
    M2C_FIELD(arg0, u8 **, 4) = var_a1;
    if (var_a1 != NULL) {
        temp_a0_2 = M2C_FIELD(arg0, u8 **, 4);
        M2C_FIELD(arg0, f32 *, 0x4C) = (f32) M2C_FIELD(arg0, f32 *, 0x50);
        M2C_FIELD(arg0, u8 **, 4) = (u8 *) (temp_a0_2 + 1);
        var_s2 = M2C_FIELD(temp_a0_2, u8 *, 0);
        if (M2C_FIELD(arg0, u8 *, 0xD2) != 0) {
            M2C_FIELD(arg0, u8 **, 4) = (u8 *) (temp_a0_2 + 2);
            var_v1 = M2C_FIELD(temp_a0_2, u8 *, 1);
            if ((u32) (var_v1 & 0xFF) >= 0x80U) {
                var_v1 &= 0x7F;
                M2C_FIELD(arg0, u8 *, 0xD2) = 0U;
                M2C_FIELD(arg0, u8 *, 0xD3) = var_v1;
            }
            if (var_s2 != 0x60) {
                M2C_FIELD(arg0, u8 *, 0xBB) = var_v1;
            }
        } else {
            M2C_FIELD(arg0, u8 *, 0xBB) = (u8) M2C_FIELD(arg0, u8 *, 0xD3);
        }
        var_v1_2 = M2C_FIELD(arg0, u16 *, 0xAC);
        if (var_v1_2 != 0) {
            if (M2C_FIELD(arg0, u8 *, 0xB7) != 0) {
                temp_v1 = M2C_FIELD(arg0, u8 **, 4);
                M2C_FIELD(arg0, u8 *, 0xB7) = 0U;
                M2C_FIELD(arg0, u8 **, 4) = (u8 *) (temp_v1 + 1);
                var_a0 = M2C_FIELD(temp_v1, u8 *, 0);
                if ((u32) (var_a0 & 0xFF) < 0x80U) {
                    M2C_FIELD(arg0, u16 *, 0x9A) = (u16) var_a0;
                } else {
                    var_v0 = temp_v1 + 2;
                    goto block_22;
                }
            } else {
                goto block_23;
            }
        } else {
            temp_v1_2 = M2C_FIELD(arg0, u8 **, 4);
            M2C_FIELD(arg0, u8 **, 4) = (u8 *) (temp_v1_2 + 1);
            var_a0 = M2C_FIELD(temp_v1_2, u8 *, 0);
            var_v0 = temp_v1_2 + 2;
            if ((u32) (var_a0 & 0xFF) < 0x80U) {
                M2C_FIELD(arg0, u16 *, 0x9A) = (u16) var_a0;
            } else {
block_22:
                M2C_FIELD(arg0, u8 **, 4) = var_v0;
                var_v1_2 = M2C_FIELD(M2C_FIELD(arg0, u8 **, 4), u8 *, 1) + ((var_a0 & 0x7F) << 8);
block_23:
                M2C_FIELD(arg0, u16 *, 0x9A) = var_v1_2;
            }
        }
        var_a1_2 = M2C_FIELD(arg0, void **, 0x74);
        M2C_FIELD(arg0, s32 *, 0x40) = (s32) M2C_FIELD(arg0, s32 *, 0x3C);
        M2C_FIELD(arg0, s16 *, 0xAA) = 0;
        M2C_FIELD(arg0, s8 *, 0xD1) = 0;
        M2C_FIELD(arg0, u8 *, 0xD0) = (u8) M2C_FIELD(arg0, u8 *, 0xCF);
        M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C) + (M2C_FIELD(arg0, u16 *, 0x9A) << 8));
        if (var_a1_2 != NULL) {
            if (M2C_FIELD(arg0, s32 *, 0x84) == 0) {
                if (*(s32 *)((M2C_FIELD(arg0, u16 *, 0xAE) * 2) + M2C_FIELD(var_a1_2, s32 *, 0x20)) == 0xFFFF) {
                    var_s2 = 0x60;
                }
            }
        }
        if (var_s2 != 0x60) {
            temp_v1_3 = M2C_FIELD(arg0, s32 *, 0x84);
            temp_s4 = M2C_FIELD(arg0, void **, 0x7C);
            if (temp_v1_3 != 0) {
                temp_a2 = var_s2 * 6;
                M2C_FIELD(arg0, u16 *, 0xAE) = (u16) *(s32 *)(temp_a2 + temp_v1_3);
                M2C_FIELD(arg0, s8 *, 0xBD) = (s8) ((u8) M2C_FIELD((temp_a2 + M2C_FIELD(arg0, s32 *, 0x84)), u8 *, 4) >> 1);
                temp_v0 = (M2C_FIELD((temp_a2 + M2C_FIELD(arg0, s32 *, 0x84)), u16 *, 2) * 7) + M2C_FIELD(M2C_FIELD(arg0, void **, 0x74), s32 *, 0x18);
                var_a0_2 = M2C_FIELD(temp_v0, u8 *, 0);
                var_a1_2 = temp_v0;
                if (var_a0_2 == 0) {
                    var_a0_2 = 1;
                }
                M2C_FIELD(arg0, u8 *, 0xBF) = var_a0_2;
                M2C_FIELD(arg0, s32 *, 0x64) = (s32) (0x400 / (s32) var_a0_2);
                M2C_FIELD(arg0, u8 *, 0xC0) = (u8) M2C_FIELD(var_a1_2, u8 *, 1);
                temp_a0_3 = M2C_FIELD(var_a1_2, u8 *, 2);
                M2C_FIELD(arg0, u8 *, 0xC6) = temp_a0_3;
                temp_v1_4 = M2C_FIELD(var_a1_2, u8 *, 3);
                M2C_FIELD(arg0, u8 *, 0xC1) = temp_v1_4;
                M2C_FIELD(arg0, f32 *, 0x58) = (f32) ((D_8007A1A8 / (f64) (f32) temp_a0_3) * (f64) (f32) (temp_v1_4 - M2C_FIELD(arg0, u8 *, 0xC0)));
                temp_a0_4 = M2C_FIELD(var_a1_2, u8 *, 4);
                M2C_FIELD(arg0, u8 *, 0xC7) = temp_a0_4;
                temp_v1_4 = M2C_FIELD(var_a1_2, u8 *, 5);
                M2C_FIELD(arg0, u8 *, 0xC2) = temp_v1_4;
                M2C_FIELD(arg0, f32 *, 0x5C) = (f32) ((D_8007A1A8 / (f64) (f32) temp_a0_4) * (f64) (f32) (temp_v1_4 - M2C_FIELD(arg0, u8 *, 0xC1)));
                temp_a0_5 = M2C_FIELD(var_a1_2, u8 *, 6);
                M2C_FIELD(arg0, u8 *, 0xC8) = temp_a0_5;
                M2C_FIELD(arg0, f32 *, 0x60) = (f32) (D_8007A1A8 / (f64) (f32) temp_a0_5);
                var_s2 = M2C_FIELD((temp_a2 + M2C_FIELD(arg0, s32 *, 0x84)), u8 *, 5);
            }
            if (M2C_FIELD(arg0, u8 *, 0xD6) == 0) {
                func_8005CCA4(arg0, var_a1_2);
            }
            if (M2C_FIELD(arg0, u8 *, 0xD4) != 0) {
                func_8005CEF0(arg0);
            }
            temp_v0_2 = M2C_FIELD(arg0, void **, 0x74);
            temp_s1 = M2C_FIELD(arg0, u16 *, 0xAE);
            if (temp_v0_2 != NULL) {
                var_v1_3 = M2C_FIELD(temp_v0_2, s32 *, 0x20);
                var_v0_2 = temp_s1 * 2;
            } else {
                var_v1_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x78), s32 *, 0x14);
                var_v0_2 = temp_s1 * 2;
            }
            temp_s1_2 = *(s32 *)(var_v0_2 + var_v1_3);
            if (M2C_FIELD(arg0, u8 *, 0xD7) == 0) {
                M2C_FIELD(arg0, s32 *, 8) = (s32) *(s32 *)((temp_s1_2 * 4) + M2C_FIELD(temp_s4, s32 *, 0x2C));
                if ((M2C_FIELD(arg0, u8 *, 0xC9) != 0) && (M2C_FIELD(arg0, u16 *, 0xA0) != 0)) {
                    M2C_FIELD(arg0, u16 *, 0xA0) = 0U;
                    func_80064D50(&D_800A5D10, D_800A5A58 + (arg1 * 0x1C), 0, D_800A5A68);
                } else {
                    func_8005C9A0(arg0, arg1);
                }
            }
            temp_lo = M2C_FIELD(arg0, u8 *, 0xB9) * (1 - M2C_FIELD(arg0, u8 *, 0xBA));
            temp_fv1 = (f32) var_s2 + *(s32 *)((temp_s1_2 * 4) + M2C_FIELD(temp_s4, s32 *, 0x28));
            M2C_FIELD(arg0, f32 *, 0x2C) = temp_fv1;
            if (temp_lo & 0x80) {
                var_v0_3 = (temp_lo & 0xFF) - 0x100;
            } else {
                var_v0_3 = temp_lo & 0xFF;
            }
            M2C_FIELD(arg0, f32 *, 0x2C) = (f32) (temp_fv1 + (f32) var_v0_3);
            temp_a1 = M2C_FIELD(arg0, u8 *, 0xCA);
            temp_v1_6 = temp_a1 & 0xFF;
            if (temp_v1_6 != M2C_FIELD(arg0, u8 *, 0xCC)) {
                temp_a2_2 = M2C_FIELD(arg0, u8 *, 0xCB);
                M2C_FIELD(arg0, u8 *, 0xCC) = temp_a1;
                alSynSetFXMix(&D_800A5D10, D_800A5A58 + (arg1 * 0x1C), (temp_a2_2 + ((s32) ((0x80 - temp_a2_2) * temp_v1_6) >> 7)) & 0xFF);
            }
        } else if ((u8) M2C_FIELD(arg0, u8 *, 0xC3) < 4U) {
            M2C_FIELD(arg0, u8 *, 0xC3) = 4U;
            M2C_FIELD(arg0, s8 *, 0xC5) = 1;
            M2C_FIELD(arg0, s32 *, 0x54) = (s32) M2C_FIELD(arg0, s32 *, 0xC);
            M2C_FIELD(arg0, u8 *, 0xCD) = (u8) M2C_FIELD(arg0, u8 *, 0xC4);
        }
    } else {
block_53:
        if (M2C_FIELD(arg0, u8 *, 0xC9) != 0) {
            M2C_FIELD(arg0, u8 *, 0xC9) = 0U;
            temp_s0 = arg1 * 0x1C;
            func_80064D50(&D_800A5D10, D_800A5A58 + temp_s0, 0, D_800A5A68);
            func_80064BA0(&D_800A5D10, D_800A5A58 + temp_s0);
        }
    }
}
