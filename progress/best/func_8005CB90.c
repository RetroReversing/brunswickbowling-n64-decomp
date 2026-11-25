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

M2C_UNK alSynSetPitch(M2C_UNK *, s32, f32);         /* extern */
f32 func_8005D258(f32, u16);                        /* extern */
extern f64 D_8007A1B0;
extern f64 D_8007A1B8;
extern s32 D_800A5A58;
extern M2C_UNK D_800A5D10;

void func_8005CB90(void *arg0, s32 arg1, f32 arg2) {
    f32 temp_ft0;
    f32 temp_ft1;
    f32 var_ft1;
    f32 var_ft1_2;
    s32 temp_v1;
    u8 temp_v0;
    void *temp_s0;
    void *var_a0;

    var_a0 = arg0;
    temp_s0 = var_a0;
    temp_v0 = M2C_FIELD(temp_s0, u8 *, 0xB8);
    var_ft1 = M2C_FIELD(temp_s0, f32 *, 0x2C);
    temp_v1 = temp_v0 & 0xFF;
    if (temp_v1 != 0) {
        var_a0 = (void *) M2C_FIELD(temp_s0, u16 *, 0xAA);
        if (temp_v0 >= (u32) var_a0) {
            temp_ft0 = M2C_FIELD(temp_s0, f32 *, 0x4C);
            var_ft1 = temp_ft0 + (((var_ft1 - temp_ft0) / (f32) (s32)temp_v1) * (f32) (s32)var_a0);
        }
        M2C_FIELD(temp_s0, f32 *, 0x50) = var_ft1;
    }
    temp_ft1 = var_ft1 + (arg2 + M2C_FIELD(temp_s0, f32 *, 0x24));
    if (temp_ft1 != M2C_FIELD(temp_s0, f32 *, 0x28)) {
        M2C_FIELD(temp_s0, f32 *, 0x28) = temp_ft1;
        var_ft1_2 = func_8005D258((f32) ((f64) temp_ft1 * D_8007A1B0), (u16) var_a0);
        if (D_8007A1B8 < (f64) var_ft1_2) {
            var_ft1_2 = 2.0f;
            M2C_FIELD(temp_s0, s8 *, 0xBB) = 0;
        }
        alSynSetPitch(&D_800A5D10, D_800A5A58 + (arg1 * 0x1C), var_ft1_2);
    }
}
