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

extern f64 D_8007A1C0;

void func_8005D144(void *arg0) {
    f32 temp_fv0;
    f32 temp_fv0_2;
    u16 temp_v1;
    u16 temp_v1_5;
    u32 temp_a0;
    u8 *temp_a0_2;
    u8 *temp_v0;
    u8 *temp_v1_3;
    u8 temp_v1_2;
    u8 temp_v1_4;

    do {
        temp_v1 = M2C_FIELD(arg0, u16 *, 0xA4) - 1;
        M2C_FIELD(arg0, u16 *, 0xA4) = temp_v1;
        M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) + 0x100);
        if (!(temp_v1 & 0xFFFF)) {
            temp_v0 = M2C_FIELD(arg0, u8 **, 0x34);
            M2C_FIELD(arg0, u8 **, 0x34) = (u8 *) (temp_v0 + 1);
            temp_v1_2 = *temp_v0;
            temp_a0 = temp_v1_2 & 0xFF;
            if (temp_a0 >= 0x80U) {
                temp_fv0 = (f32) ((f64) (f32) (temp_v1_2 & 0x7F) - D_8007A1C0);
                temp_v1_3 = M2C_FIELD(arg0, u8 **, 0x34);
                M2C_FIELD(arg0, u8 **, 0x34) = (u8 *) (temp_v1_3 + 1);
                M2C_FIELD(arg0, f32 *, 0x70) = temp_fv0;
                M2C_FIELD(arg0, f32 *, 0x24) = (f32) (temp_fv0 * M2C_FIELD(arg0, f32 *, 0x6C));
                temp_v1_4 = *temp_v1_3;
                if ((u32) (temp_v1_4 & 0xFF) >= 0x80U) {
                    temp_a0_2 = M2C_FIELD(arg0, u8 **, 0x34);
                    temp_v1_5 = (temp_v1_4 & 0x7F) << 8;
                    M2C_FIELD(arg0, u16 *, 0xA4) = temp_v1_5;
                    M2C_FIELD(arg0, u8 **, 0x34) = (u8 *) (temp_a0_2 + 1);
                    M2C_FIELD(arg0, u16 *, 0xA4) = (u16) (*temp_a0_2 + (temp_v1_5 + 2));
                } else {
                    M2C_FIELD(arg0, u16 *, 0xA4) = (u16) (temp_v1_4 + 2);
                }
            } else {
                temp_fv0_2 = (f32) ((f64) (f32) temp_a0 - D_8007A1C0);
                M2C_FIELD(arg0, u16 *, 0xA4) = 1U;
                M2C_FIELD(arg0, f32 *, 0x70) = temp_fv0_2;
                M2C_FIELD(arg0, f32 *, 0x24) = (f32) (temp_fv0_2 * M2C_FIELD(arg0, f32 *, 0x6C));
            }
        }
    } while ((M2C_FIELD(arg0, s32 *, 0x18) - M2C_FIELD(arg0, s32 *, 0xC)) < 0);
}
