/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (((struct { __typeof__(*(type_ptr)0) v; } *)((s8 *)(expr) + (offset)))->v)
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

extern s32 D_8009DB1C;
extern u32 D_8009DB20;

void func_80051240(void *arg0, s32 arg1) {
    s32 temp_a0;
    void *temp_a0_2;
    void *temp_v1;

    if ((u32) D_8009DB20 < 0x1C2U) {
        temp_a0 = D_8009DB20 * 0x30;
        temp_v1 = temp_a0 + D_8009DB1C;
        M2C_FIELD(temp_v1, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 1);
        M2C_FIELD(temp_v1, u16 *, 4) = (u16) M2C_FIELD(arg0, u16 *, 4);
        M2C_FIELD(temp_v1, u16 *, 6) = (u16) M2C_FIELD(arg0, u16 *, 6);
        M2C_FIELD(temp_v1, u16 *, 8) = (u16) M2C_FIELD(arg0, u16 *, 0x10);
        M2C_FIELD(temp_v1, u16 *, 0xA) = (u16) M2C_FIELD(arg0, u16 *, 8);
        M2C_FIELD(temp_v1, u16 *, 0xC) = (u16) M2C_FIELD(arg0, u16 *, 0xA);
        M2C_FIELD(temp_v1, u8 *, 0x1C) = (u8) M2C_FIELD(arg0, u8 *, 0xC);
        M2C_FIELD((temp_a0 + D_8009DB1C), u8 *, 0x1D) = (u8) M2C_FIELD(arg0, u8 *, 0xD);
        M2C_FIELD((temp_a0 + D_8009DB1C), u8 *, 0x1E) = (u8) M2C_FIELD(arg0, u8 *, 0xE);
        temp_a0_2 = temp_a0 + D_8009DB1C;
        M2C_FIELD(temp_a0_2, s32 *, 0x28) = arg1;
        M2C_FIELD(temp_a0_2, s32 *, 0x2C) = 0;
        D_8009DB20 += 1;
    }
}
