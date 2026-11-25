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

M2C_UNK func_80015F18(s32, M2C_UNK, M2C_UNK, M2C_UNK *, s32); /* extern */
extern M2C_UNK D_80073CC4;
extern M2C_UNK D_80073CF0;
extern M2C_UNK D_80073D08;
extern M2C_UNK D_80073F18;
extern M2C_UNK D_8007F18C;
extern M2C_UNK D_8007F198;
extern M2C_UNK D_8007F1AC;
extern M2C_UNK D_8007F1BC;
extern M2C_UNK D_8007F1CC;
extern M2C_UNK D_8007F1DC;
extern M2C_UNK D_8007F1EC;
extern M2C_UNK D_8007F1F8;
extern M2C_UNK D_8007F204;
extern M2C_UNK D_8007F210;

void func_80011700(void *arg0) {
    void *temp_a0;
    void *temp_a0_10;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_a0_6;
    void *temp_a0_7;
    void *temp_a0_8;
    void *temp_a0_9;

    M2C_FIELD(arg0, M2C_UNK **, 4) = &D_80073CF0;
    func_80015F18(arg0 + 0xC, 0x96, 0x18, &D_80073CC4, 0);
    temp_a0 = arg0 + 0x118;
    M2C_FIELD(arg0, M2C_UNK **, 0x118) = &D_80073F18;
    M2C_FIELD(temp_a0, s32 *, 8) = 2;
    M2C_FIELD(temp_a0, s32 *, 4) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x118) = &D_80073D08;
    M2C_FIELD(temp_a0, M2C_UNK **, 0xC) = &D_8007F18C;
    temp_a0_2 = arg0 + 0x128;
    M2C_FIELD(arg0, M2C_UNK **, 0x128) = &D_80073F18;
    M2C_FIELD(temp_a0_2, s32 *, 8) = 4;
    M2C_FIELD(temp_a0_2, s32 *, 4) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x128) = &D_80073D08;
    M2C_FIELD(temp_a0_2, M2C_UNK **, 0xC) = &D_8007F198;
    temp_a0_3 = arg0 + 0x138;
    M2C_FIELD(arg0, M2C_UNK **, 0x138) = &D_80073F18;
    M2C_FIELD(temp_a0_3, s32 *, 8) = 3;
    M2C_FIELD(temp_a0_3, s32 *, 4) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x138) = &D_80073D08;
    M2C_FIELD(temp_a0_3, M2C_UNK **, 0xC) = &D_8007F1AC;
    temp_a0_4 = arg0 + 0x148;
    M2C_FIELD(arg0, M2C_UNK **, 0x148) = &D_80073F18;
    M2C_FIELD(temp_a0_4, s32 *, 8) = 3;
    M2C_FIELD(temp_a0_4, s32 *, 4) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x148) = &D_80073D08;
    M2C_FIELD(temp_a0_4, M2C_UNK **, 0xC) = &D_8007F1BC;
    temp_a0_5 = arg0 + 0x158;
    M2C_FIELD(arg0, M2C_UNK **, 0x158) = &D_80073F18;
    M2C_FIELD(temp_a0_5, s32 *, 8) = 3;
    M2C_FIELD(temp_a0_5, s32 *, 4) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x158) = &D_80073D08;
    M2C_FIELD(temp_a0_5, M2C_UNK **, 0xC) = &D_8007F1CC;
    temp_a0_6 = arg0 + 0x168;
    M2C_FIELD(arg0, M2C_UNK **, 0x168) = &D_80073F18;
    M2C_FIELD(temp_a0_6, s32 *, 8) = 3;
    M2C_FIELD(temp_a0_6, s32 *, 4) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x168) = &D_80073D08;
    M2C_FIELD(temp_a0_6, M2C_UNK **, 0xC) = &D_8007F1DC;
    temp_a0_7 = arg0 + 0x178;
    M2C_FIELD(arg0, M2C_UNK **, 0x178) = &D_80073F18;
    M2C_FIELD(temp_a0_7, s32 *, 8) = 2;
    M2C_FIELD(temp_a0_7, s32 *, 4) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x178) = &D_80073D08;
    M2C_FIELD(temp_a0_7, M2C_UNK **, 0xC) = &D_8007F1EC;
    temp_a0_8 = arg0 + 0x188;
    M2C_FIELD(arg0, M2C_UNK **, 0x188) = &D_80073F18;
    M2C_FIELD(temp_a0_8, s32 *, 8) = 2;
    M2C_FIELD(temp_a0_8, s32 *, 4) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x188) = &D_80073D08;
    M2C_FIELD(temp_a0_8, M2C_UNK **, 0xC) = &D_8007F1F8;
    temp_a0_9 = arg0 + 0x198;
    M2C_FIELD(arg0, M2C_UNK **, 0x198) = &D_80073F18;
    M2C_FIELD(temp_a0_9, s32 *, 8) = 2;
    M2C_FIELD(temp_a0_9, s32 *, 4) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x198) = &D_80073D08;
    M2C_FIELD(temp_a0_9, M2C_UNK **, 0xC) = &D_8007F204;
    temp_a0_10 = arg0 + 0x1A8;
    M2C_FIELD(arg0, M2C_UNK **, 0x1A8) = &D_80073F18;
    M2C_FIELD(temp_a0_10, s32 *, 8) = 1;
    M2C_FIELD(temp_a0_10, s32 *, 4) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x1A8) = &D_80073D08;
    M2C_FIELD(temp_a0_10, M2C_UNK **, 0xC) = &D_8007F210;
    M2C_FIELD(arg0, s8 *, 0x1B8) = 1;
    M2C_FIELD(arg0, s8 *, 0x1BD) = -1;
}
