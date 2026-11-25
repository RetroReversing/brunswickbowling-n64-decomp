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

extern s32 D_80095B20;
extern void *D_8009CC60;
extern M2C_UNK D_8009CE10;

void func_80045B98(void) {
    void *temp_a1;
    void *temp_a1_2;
    void *temp_a1_3;
    void *temp_a1_4;
    void *temp_a1_5;
    void *temp_a1_6;
    void *temp_a1_7;
    void *temp_a1_8;

    D_80095B20 = 0;
    temp_a1 = D_8009CC60 + 8;
    temp_a1_2 = temp_a1 + 8;
    temp_a1_3 = temp_a1_2 + 8;
    temp_a1_4 = temp_a1_3 + 8;
    temp_a1_5 = temp_a1_4 + 8;
    temp_a1_6 = temp_a1_5 + 8;
    temp_a1_7 = temp_a1_6 + 8;
    M2C_FIELD(D_8009CC60, s32 *, 0) = 0xE7000000;
    M2C_FIELD(D_8009CC60, s32 *, 4) = 0;
    M2C_FIELD(D_8009CC60, s32 *, 8) = 0xBA001402;
    M2C_FIELD(temp_a1, s32 *, 4) = 0;
    M2C_FIELD(temp_a1, s32 *, 8) = 0xB900031D;
    M2C_FIELD(temp_a1_2, s32 *, 4) = 0x0F0A4020;
    M2C_FIELD(temp_a1_3, s32 *, 4) = 4;
    M2C_FIELD(temp_a1_2, s32 *, 8) = 0xB9000201;
    M2C_FIELD(temp_a1_3, s32 *, 8) = 0xEE000000;
    M2C_FIELD(temp_a1_4, s32 *, 4) = 0xFFFC0000;
    temp_a1_8 = temp_a1_7 + 8;
    M2C_FIELD(temp_a1_4, s32 *, 8) = 0xFA000000;
    M2C_FIELD(temp_a1_5, s32 *, 4) = 0;
    M2C_FIELD(temp_a1_5, s32 *, 8) = 0xFCFFFFFF;
    M2C_FIELD(temp_a1_6, s32 *, 4) = 0xFFFDF6FB;
    M2C_FIELD(temp_a1_6, s32 *, 8) = (s32) (((((M2C_FIELD(&D_8009CE10, s16 *, 0x74) + M2C_FIELD(&D_8009CE10, s16 *, 0x78)) - 1) & 0x3FF) << 0xE) | (((((M2C_FIELD(&D_8009CE10, s16 *, 0x76) + M2C_FIELD(&D_8009CE10, s16 *, 0x7A)) - 1) & 0x3FF) * 4) | 0xF6000000));
    D_8009CC60 = temp_a1_8 + 8;
    M2C_FIELD(temp_a1_7, s32 *, 4) = (s32) ((((u16) M2C_FIELD(&D_8009CE10, s16 *, 0x74) & 0x3FF) << 0xE) | (((u16) M2C_FIELD(&D_8009CE10, s16 *, 0x76) & 0x3FF) * 4));
    M2C_FIELD(temp_a1_7, s32 *, 8) = 0xE7000000;
    M2C_FIELD(temp_a1_8, s32 *, 4) = 0;
}
