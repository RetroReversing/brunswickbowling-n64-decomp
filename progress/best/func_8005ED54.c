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

extern int D_800A5ADC;
s32 func_80060F50();
extern f64 D_8007A280;
extern f64 D_8007A288;
extern void *D_800A5AC0;
extern s32 D_800A5AD0;
extern s32 D_800A5AD4;
extern char D_800A5AD8[];

void func_8005ED54(void *arg0) {
    f64 var_ft0;
    s32 temp_a0;
    s32 temp_a2;
    s32 temp_s0;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_v0;
    void *temp_a1;
    void *temp_s3;
    void *temp_v1;

    temp_v1 = M2C_FIELD(D_800A5AC0, void **, 0x34);
    M2C_FIELD(temp_v1, s8 *, 0x44) = (s8) M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(temp_v1, s32 *, 0x3C) = (s32) M2C_FIELD(arg0, s32 *, 4);
    var_s0 = 2;
    M2C_FIELD(temp_v1, s32 *, 0x40) = (s32) D_800A5AD0;
    var_s2 = 0;
    temp_s3 = temp_v1 + 0x20;
    M2C_FIELD(temp_v1, s32 *, 0x34) = (s32) D_800A5AD4;
    M2C_FIELD(temp_v1, s32 *, 0x38) = (s32) D_800A5AD4;
    if (M2C_FIELD(temp_v1, s32 *, 0x3C) != 0) {
        do {
            *(s32 *)(((var_s2 & 0xFFFF) * 2) + M2C_FIELD(temp_s3, s32 *, 0x14)) = 0;
            var_s2 += 1;
        } while ((u32) (var_s2 & 0xFFFF) < (u32) M2C_FIELD(temp_s3, u32 *, 0x1C));
    }
    var_s2_2 = 0;
    if (M2C_FIELD(temp_s3, u8 *, 0x24) != 0) {
        var_v0 = 0 & 0xFFFF;
        do {
            temp_a2 = var_s0 + 1;
            temp_a1 = M2C_FIELD(temp_s3, s32 *, 0x20) + (var_v0 * 0x28);
            M2C_FIELD(temp_a1, s32 *, 0) = (s32) *(s32 *)(((var_s0 & 0xFFFF) * 4) + arg0);
            M2C_FIELD(temp_a1, s32 *, 4) = (s32) *(s32 *)(((temp_a2 & 0xFFFF) * 4) + arg0);
            M2C_FIELD(temp_a1, s16 *, 0xA) = (s16) *(s16 *)((((temp_a2 + 1) & 0xFFFF) * 4) + arg0);
            M2C_FIELD(temp_a1, s16 *, 8) = (s16) *(s16 *)((((temp_a2 + 2) & 0xFFFF) * 4) + arg0);
            temp_s0 = temp_a2 + 4;
            M2C_FIELD(temp_a1, s16 *, 0xC) = (s16) *(s16 *)((((temp_a2 + 3) & 0xFFFF) * 4) + arg0);
            if (*(s32 *)(((temp_s0 & 0xFFFF) * 4) + arg0) != 0) {
                var_s0_2 = temp_a2 + 6;
                temp_a0 = M2C_FIELD(temp_a1, s32 *, 4) - M2C_FIELD(temp_a1, s32 *, 0);
                var_ft0 = (f64) temp_a0;
                M2C_FIELD(temp_a1, f32 *, 0x10) = (f32) ((2.0 * (f64) (*(f32 *)(((temp_s0 & 0xFFFF) * 4) + arg0) / 1000.0f)) / (f64) M2C_FIELD(D_800A5AC0, s32 *, 0x44));
                if (temp_a0 < 0) {
                    var_ft0 += D_8007A288;
                }
                M2C_FIELD(temp_a1, s32 *, 0x18) = 0;
                M2C_FIELD(temp_a1, f32 *, 0x14) = 1.0f;
                M2C_FIELD(temp_a1, f32 *, 0x1C) = (f32) (((f64) *(f32 *)((((temp_a2 + 5) & 0xFFFF) * 4) + arg0) / D_8007A280) * var_ft0);
                M2C_FIELD(temp_a1, void **, 0x24) = (void *) M2C_FIELD(D_800A5AD8, void **, 0);
                M2C_FIELD(M2C_FIELD(D_800A5AD8, void **, 0), s32 *, 0x14) = (s32) D_800A5ADC;
                M2C_FIELD(M2C_FIELD(temp_a1, void **, 0x24), s32 *, 0x20) = 0;
                M2C_FIELD(M2C_FIELD(temp_a1, void **, 0x24), s32 *, 0x24) = 1;
            } else {
                M2C_FIELD(temp_a1, void **, 0x24) = NULL;
                var_s0_2 = temp_a2 + 6;
            }
            if (*(s32 *)(((var_s0_2 & 0xFFFF) * 4) + arg0) == 0) {
                M2C_FIELD(temp_a1, s16 **, 0x20) = NULL;
                var_s0 = var_s0_2 + 1;
            } else {
                M2C_FIELD(temp_a1, s16 **, 0x20) = (s16 *) M2C_FIELD(D_800A5AD8, s16 **, 8);
                M2C_FIELD(M2C_FIELD(D_800A5AD8, s16 **, 8), s32 *, 0x28) = (s32) M2C_FIELD((D_800A5AD8 + 8), s32 *, 4);
                *M2C_FIELD(temp_a1, s16 **, 0x20) = (s16) *(s16 *)(((var_s0_2 & 0xFFFF) * 4) + arg0);
                var_s0 = var_s0_2 + 1;
                func_80060F50(M2C_FIELD(temp_a1, s16 **, 0x20), temp_a1, temp_a2);
            }
            var_s2_2 += 1;
            var_v0 = var_s2_2 & 0xFFFF;
        } while ((u32) (var_s2_2 & 0xFFFF) < (u8) M2C_FIELD(temp_s3, u8 *, 0x24));
    }
}
