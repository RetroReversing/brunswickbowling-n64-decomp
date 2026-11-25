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

extern void *D_8009CC60;

void func_8004F2A0(void *arg0, s32 arg1) {
    s32 temp_a1;
    void *temp_a2;
    void *temp_a2_2;
    void *temp_a2_3;
    void *temp_a2_4;

    temp_a1 = arg1 & 0xFFFF;
    temp_a2 = D_8009CC60 + 8;
    temp_a2_2 = temp_a2 + 8;
    temp_a2_3 = temp_a2_2 + 8;
    M2C_FIELD(D_8009CC60, s32 *, 0) = 0xB900031D;
    M2C_FIELD(D_8009CC60, s32 *, 4) = 0x0F0A4000;
    M2C_FIELD(temp_a2, s32 *, 4) = 0x300000;
    M2C_FIELD(D_8009CC60, s32 *, 8) = 0xBA001402;
    M2C_FIELD(temp_a2, s32 *, 8) = 0xF7000000;
    M2C_FIELD(temp_a2_2, s32 *, 4) = (s32) ((temp_a1 << 0x10) | temp_a1);
    temp_a2_4 = temp_a2_3 + 8;
    M2C_FIELD(temp_a2_2, s32 *, 8) = (s32) ((((M2C_FIELD(arg0, s16 *, 0) + M2C_FIELD(arg0, s16 *, 4)) & 0x3FF) << 0xE) | ((((M2C_FIELD(arg0, s16 *, 2) + M2C_FIELD(arg0, s16 *, 6)) & 0x3FF) * 4) | 0xF6000000));
    D_8009CC60 = temp_a2_4 + 8;
    M2C_FIELD(temp_a2_3, s32 *, 4) = (s32) ((((u16) M2C_FIELD(arg0, s16 *, 0) & 0x3FF) << 0xE) | (((u16) M2C_FIELD(arg0, s16 *, 2) & 0x3FF) * 4));
    M2C_FIELD(temp_a2_3, s32 *, 8) = 0xE7000000;
    M2C_FIELD(temp_a2_4, s32 *, 4) = 0;
}
