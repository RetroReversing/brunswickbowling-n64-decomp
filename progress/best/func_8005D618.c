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

extern s32 D_800A5A64;
extern s32 D_800A5A78;
extern s32 D_800A5A7C;

void func_8005D618(s8 *arg0) {
    s32 temp_lo;
    s32 var_v1_2;
    s8 *temp_a2;
    char *var_a0;
    u32 var_v1;
    u8 temp_a3;

    var_a0 = arg0;
    temp_a2 = var_a0;
    temp_a3 = M2C_FIELD(temp_a2, u8 *, 0xC9);
    var_v1 = 0;
    M2C_FIELD(temp_a2, s32 *, 4) = 0;
    do {
        *(s8 *)var_a0 = 0;
        var_v1 += 1;
        var_a0 += 1;
    } while (var_v1 < 0x13CU);
    M2C_FIELD(temp_a2, u8 *, 0xCC) = 0xFF;
    M2C_FIELD(temp_a2, u8 *, 0xBE) = 0xFF;
    temp_lo = 0x6000 / (s32) D_800A5A64;
    M2C_FIELD(temp_a2, s8 *, 0xD3) = 0x7F;
    M2C_FIELD(temp_a2, s8 *, 0xBC) = 0x7F;
    M2C_FIELD(temp_a2, s8 *, 0xC1) = 0x7F;
    M2C_FIELD(temp_a2, u8 *, 0xC7) = 0xFF;
    M2C_FIELD(temp_a2, s8 *, 0xC2) = 0x7F;
    M2C_FIELD(temp_a2, s8 *, 0xBD) = 0x40;
    M2C_FIELD(temp_a2, s8 *, 0xBF) = 1;
    M2C_FIELD(temp_a2, s8 *, 0xC6) = 1;
    M2C_FIELD(temp_a2, s8 *, 0xC8) = 0xF;
    var_v1_2 = D_800A5A78;
    M2C_FIELD(temp_a2, s16 *, 0xA0) = 0xFFFF;
    M2C_FIELD(temp_a2, s16 *, 0x9A) = 1;
    M2C_FIELD(temp_a2, s16 *, 0xA2) = 1;
    M2C_FIELD(temp_a2, s16 *, 0xA4) = 1;
    M2C_FIELD(temp_a2, s32 *, 0x10) = -1;
    M2C_FIELD(temp_a2, s16 *, 0x9E) = 0x80;
    M2C_FIELD(temp_a2, s16 *, 0xB0) = 0x80;
    M2C_FIELD(temp_a2, s16 *, 0x98) = 0x80;
    M2C_FIELD(temp_a2, f32 *, 0x28) = 99.9f;
    M2C_FIELD(temp_a2, f32 *, 0x6C) = 0.03125f;
    M2C_FIELD(temp_a2, f32 *, 0x58) = 1.0f;
    M2C_FIELD(temp_a2, f32 *, 0x5C) = 0.003921569f;
    M2C_FIELD(temp_a2, f32 *, 0x60) = 0.06666667f;
    M2C_FIELD(temp_a2, s16 *, 0xA8) = (s16) temp_lo;
    M2C_FIELD(temp_a2, s16 *, 0x9C) = (s16) temp_lo;
    if (var_v1_2 == 0) {
        var_v1_2 = D_800A5A7C;
    }
    M2C_FIELD(temp_a2, s32 *, 0x7C) = var_v1_2;
    M2C_FIELD(temp_a2, u8 *, 0xC9) = temp_a3;
}
