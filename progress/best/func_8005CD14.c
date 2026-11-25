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

void func_8005CD14(void *arg0) {
    f32 var_fv0;
    s32 temp_v1;
    u32 temp_v0;
    u32 temp_v0_2;
    u32 temp_v0_3;
    u8 temp_a2;
    u8 temp_v0_4;
    u8 var_v0;
    u8 var_v0_2;
    u8 var_v1;

    if (((M2C_FIELD(arg0, s32 *, 0x54) - M2C_FIELD(arg0, s32 *, 0xC)) < 0) && ((u8) M2C_FIELD(arg0, u8 *, 0xC3) < 4U)) {
        M2C_FIELD(arg0, u8 *, 0xC3) = 4U;
        M2C_FIELD(arg0, u8 *, 0xC5) = 1U;
        M2C_FIELD(arg0, u8 *, 0xCD) = (u8) M2C_FIELD(arg0, u8 *, 0xC4);
    }
    temp_a2 = M2C_FIELD(arg0, u8 *, 0xC3);
    temp_v1 = temp_a2 & 0xFF;
    M2C_FIELD(arg0, u8 *, 0xC5) = (u8) M2C_FIELD(arg0, u8 *, 0xBF);
    switch (temp_v1) {                              /* irregular */
    case 1:
        temp_v0 = (u32) (((u32) (M2C_FIELD(arg0, s32 *, 0xC) - M2C_FIELD(arg0, s32 *, 0x40)) >> 8) * M2C_FIELD(arg0, s32 *, 0x64)) >> 0xA;
        if ((s32) temp_v0 < (s32) M2C_FIELD(arg0, u8 *, 0xC6)) {
            var_v0 = M2C_FIELD(arg0, u8 *, 0xC0);
            var_fv0 = M2C_FIELD(arg0, f32 *, 0x58) * (f32) temp_v0;
block_17:
            M2C_FIELD(arg0, u8 *, 0xC4) = (u8) (var_v0 + (s32) var_fv0);
            return;
        }
        var_v1 = M2C_FIELD(arg0, u8 *, 0xC1);
        var_v0_2 = temp_a2 + 1;
block_19:
        M2C_FIELD(arg0, u8 *, 0xC3) = var_v0_2;
        M2C_FIELD(arg0, u8 *, 0xC4) = var_v1;
        return;
    case 2:
        temp_v0_2 = (u32) ((((u32) (M2C_FIELD(arg0, s32 *, 0xC) - M2C_FIELD(arg0, s32 *, 0x40)) >> 8) - M2C_FIELD(arg0, u8 *, 0xC6)) * M2C_FIELD(arg0, s32 *, 0x64)) >> 0xA;
        if ((s32) temp_v0_2 >= (s32) M2C_FIELD(arg0, u8 *, 0xC7)) {
            var_v0_2 = temp_a2 + 1;
            var_v1 = M2C_FIELD(arg0, u8 *, 0xC2);
            goto block_19;
        }
        var_fv0 = M2C_FIELD(arg0, f32 *, 0x5C) * (f32) temp_v0_2;
        var_v0 = M2C_FIELD(arg0, u8 *, 0xC1);
        goto block_17;
    case 4:
        temp_v0_3 = (u32) (((u32) (M2C_FIELD(arg0, s32 *, 0xC) - M2C_FIELD(arg0, s32 *, 0x54)) >> 8) * M2C_FIELD(arg0, s32 *, 0x64)) >> 0xA;
        if ((s32) temp_v0_3 >= (s32) M2C_FIELD(arg0, u8 *, 0xC8)) {
            M2C_FIELD(arg0, u8 *, 0xC3) = (u8) (temp_a2 + 1);
            M2C_FIELD(arg0, u8 *, 0xC4) = 0U;
        case 3:
            return;
        }
        temp_v0_4 = M2C_FIELD(arg0, u8 *, 0xCD);
        M2C_FIELD(arg0, u8 *, 0xC4) = (u8) (temp_v0_4 - (s32) (M2C_FIELD(arg0, f32 *, 0x60) * (f32) temp_v0_3 * (f32) temp_v0_4));
        return;
    }
}
