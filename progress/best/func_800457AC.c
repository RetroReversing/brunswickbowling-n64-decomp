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

extern f32 D_80079920;
extern M2C_UNK D_8008F258;
extern s32 D_8008F2B0;
extern s32 D_8008F2B4;
extern s32 D_8008F2B8;
extern s32 D_8008F2C0;
extern u16 D_8009CBD0;
extern u16 D_8009CBE4;
extern void *D_8009CC60;

void func_800457AC(void *arg0) {
    s32 sp0;
    s32 sp8;
    s32 temp_v0;
    s32 temp_v0_2;
    void *temp_a0;
    void *temp_a0_10;
    void *temp_a0_11;
    void *temp_a0_12;
    void *temp_a0_13;
    void *temp_a0_14;
    void *temp_a0_15;
    void *temp_a0_16;
    void *temp_a0_17;
    void *temp_a0_18;
    void *temp_a0_19;
    void *temp_a0_20;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_a0_6;
    void *temp_a0_7;
    void *temp_a0_8;
    void *temp_a0_9;

    if (D_8008F2C0 != 0) {
        temp_v0 = D_8008F2B4 - 1;
        D_8008F2B4 = temp_v0;
        if (temp_v0 == 0) {
            D_8008F2B4 = (s32) M2C_FIELD(arg0, u16 *, 0xA);
        }
        if (D_8008F2B0 != 0) {
            temp_v0_2 = D_8008F2B8 - 1;
            D_8008F2B8 = temp_v0_2;
            if (temp_v0_2 == 0) {
                D_8008F2B8 = (s32) M2C_FIELD(arg0, u16 *, 0xC);
            }
        }
        D_8008F2B0 = D_8008F2B0 == 0;
    }
    sp8 = 0xFCFFFFFF;
    sp0 = 0x04000000;
    temp_a0 = D_8009CC60 + 8;
    temp_a0_2 = temp_a0 + 8;
    temp_a0_3 = temp_a0_2 + 8;
    temp_a0_4 = temp_a0_3 + 8;
    temp_a0_5 = temp_a0_4 + 8;
    temp_a0_6 = temp_a0_5 + 8;
    temp_a0_7 = temp_a0_6 + 8;
    temp_a0_8 = temp_a0_7 + 8;
    temp_a0_9 = temp_a0_8 + 8;
    temp_a0_10 = temp_a0_9 + 8;
    temp_a0_11 = temp_a0_10 + 8;
    temp_a0_12 = temp_a0_11 + 8;
    temp_a0_13 = temp_a0_12 + 8;
    temp_a0_14 = temp_a0_13 + 8;
    sp0 = 0x04000400;
    M2C_FIELD(D_8009CC60, s32 *, 0) = 0xE7000000;
    M2C_FIELD(D_8009CC60, s32 *, 4) = 0;
    M2C_FIELD(D_8009CC60, s32 *, 8) = 0x06000000;
    M2C_FIELD(temp_a0, M2C_UNK **, 4) = &D_8008F258;
    temp_a0_15 = temp_a0_14 + 8;
    M2C_FIELD(temp_a0, s32 *, 8) = 0xED000000;
    M2C_FIELD(temp_a0_2, s32 *, 4) = (s32) ((((s32) ((f32) D_8009CBD0 * D_80079920) & 0xFFF) << 0xC) | ((s32) ((f32) D_8009CBE4 * D_80079920) & 0xFFF));
    M2C_FIELD(temp_a0_2, s32 *, 8) = 0xFD100000;
    M2C_FIELD(temp_a0_3, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 0x18);
    M2C_FIELD(temp_a0_3, s32 *, 8) = 0xE8000000;
    M2C_FIELD(temp_a0_4, s32 *, 4) = 0;
    M2C_FIELD(temp_a0_4, s32 *, 8) = 0xF5000100;
    M2C_FIELD(temp_a0_5, s32 *, 4) = 0x07000000;
    M2C_FIELD(temp_a0_5, s32 *, 8) = 0xE6000000;
    M2C_FIELD(temp_a0_6, s32 *, 4) = 0;
    M2C_FIELD(temp_a0_6, s32 *, 8) = 0xF0000000;
    M2C_FIELD(temp_a0_7, s32 *, 4) = 0x0703C000;
    temp_a0_16 = temp_a0_15 + 8;
    temp_a0_17 = temp_a0_16 + 8;
    temp_a0_18 = temp_a0_17 + 8;
    M2C_FIELD(temp_a0_7, s32 *, 8) = 0xE7000000;
    M2C_FIELD(temp_a0_8, s32 *, 4) = 0;
    M2C_FIELD(temp_a0_8, s32 *, 8) = (s32) (((((u16) M2C_FIELD(arg0, u16 *, 0xA) >> 1) - 1) & 0xFFF) | 0xFD480000);
    temp_a0_19 = temp_a0_18 + 8;
    M2C_FIELD(temp_a0_9, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 0x10);
    M2C_FIELD(temp_a0_10, s32 *, 4) = 0x07014060;
    M2C_FIELD(temp_a0_9, s32 *, 8) = (s32) (((((s32) (((u16) M2C_FIELD(arg0, u16 *, 0xA) >> 1) + 7) >> 3) & 0x1FF) << 9) | 0xF5480000);
    M2C_FIELD(temp_a0_10, s32 *, 8) = 0xE6000000;
    M2C_FIELD(temp_a0_11, s32 *, 4) = 0;
    M2C_FIELD(temp_a0_11, s32 *, 8) = 0xF4000000;
    temp_a0_20 = temp_a0_19 + 8;
    M2C_FIELD(temp_a0_12, s32 *, 4) = (s32) (((((M2C_FIELD(arg0, u16 *, 0xA) - 1) * 2) & 0xFFF) << 0xC) | ((((M2C_FIELD(arg0, u16 *, 0xC) - 1) * 4) & 0xFFF) | 0x07000000));
    M2C_FIELD(temp_a0_12, s32 *, 8) = 0xE7000000;
    M2C_FIELD(temp_a0_13, s32 *, 4) = 0;
    D_8009CC60 = temp_a0_20 + 8;
    M2C_FIELD(temp_a0_14, s32 *, 4) = 0x14060;
    M2C_FIELD(temp_a0_13, s32 *, 8) = (s32) (((((s32) (((u16) M2C_FIELD(arg0, u16 *, 0xA) >> 1) + 7) >> 3) & 0x1FF) << 9) | 0xF5400000);
    M2C_FIELD(temp_a0_14, s32 *, 8) = 0xF2000000;
    M2C_FIELD(temp_a0_15, s32 *, 4) = (s32) (((((M2C_FIELD(arg0, u16 *, 0xA) - 1) * 4) & 0xFFF) << 0xC) | (((M2C_FIELD(arg0, u16 *, 0xC) - 1) * 4) & 0xFFF));
    M2C_FIELD(temp_a0_15, s32 *, 8) = 0xFCFFFFFF;
    M2C_FIELD(temp_a0_16, s32 *, 4) = 0xFFFCF279;
    M2C_FIELD(temp_a0_16, s32 *, 8) = 0xE49FC3BC;
    M2C_FIELD(temp_a0_17, s32 *, 4) = 0;
    M2C_FIELD(temp_a0_17, s32 *, 8) = 0xB4000000;
    M2C_FIELD(temp_a0_18, s32 *, 4) = (s32) ((D_8008F2B4 << 0x15) | ((D_8008F2B8 << 5) & 0xFFFF));
    M2C_FIELD(temp_a0_18, s32 *, 8) = 0xB3000000;
    M2C_FIELD(temp_a0_19, s32 *, 4) = 0x04000400;
    M2C_FIELD(temp_a0_19, s32 *, 8) = 0xE7000000;
    M2C_FIELD(temp_a0_20, s32 *, 4) = 0;
}
