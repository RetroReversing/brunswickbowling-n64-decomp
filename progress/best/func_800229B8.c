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

extern M2C_UNK D_80073F18;
extern M2C_UNK D_80075B70;
extern M2C_UNK D_80075B88;
extern M2C_UNK D_80082770;
extern M2C_UNK D_80089250;
extern M2C_UNK D_80089258;
extern M2C_UNK D_80089264;
extern M2C_UNK D_80089294;

void func_800229B8(void *arg0) {
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;

    temp_a0 = arg0 + 8;
    M2C_FIELD(arg0, M2C_UNK **, 4) = &D_80075B70;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &D_80073F18;
    M2C_FIELD(temp_a0, s32 *, 8) = 1;
    M2C_FIELD(temp_a0, s32 *, 4) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &D_80075B88;
    M2C_FIELD(temp_a0, M2C_UNK **, 0xC) = &D_80089250;
    temp_a0_2 = arg0 + 0x18;
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &D_80073F18;
    M2C_FIELD(temp_a0_2, s32 *, 8) = 0xB;
    M2C_FIELD(temp_a0_2, s32 *, 4) = 9;
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &D_80075B88;
    M2C_FIELD(temp_a0_2, M2C_UNK **, 0xC) = &D_80089264;
    temp_a0_3 = arg0 + 0x28;
    M2C_FIELD(arg0, M2C_UNK **, 0x28) = &D_80073F18;
    M2C_FIELD(temp_a0_3, s32 *, 4) = 6;
    temp_v1 = arg0 + 0x38;
    M2C_FIELD(temp_a0_3, s32 *, 8) = 0xB;
    M2C_FIELD(arg0, M2C_UNK **, 0x28) = &D_80075B88;
    M2C_FIELD(temp_a0_3, M2C_UNK **, 0xC) = &D_80089264;
    M2C_FIELD(arg0, M2C_UNK **, 0x38) = &D_80073F18;
    M2C_FIELD(temp_v1, s32 *, 8) = 0xB;
    M2C_FIELD(temp_v1, s32 *, 4) = 0xA;
    M2C_FIELD(arg0, M2C_UNK **, 0x38) = &D_80075B88;
    M2C_FIELD(temp_v1, M2C_UNK **, 0xC) = &D_80089264;
    temp_v1_2 = arg0 + 0x48;
    M2C_FIELD(arg0, M2C_UNK **, 0x48) = &D_80073F18;
    M2C_FIELD(temp_v1_2, s32 *, 8) = 0xB;
    M2C_FIELD(temp_v1_2, s32 *, 4) = 0xA;
    M2C_FIELD(arg0, M2C_UNK **, 0x48) = &D_80075B88;
    M2C_FIELD(temp_v1_2, M2C_UNK **, 0xC) = &D_80089264;
    temp_v1_3 = arg0 + 0x58;
    M2C_FIELD(arg0, M2C_UNK **, 0x58) = &D_80073F18;
    M2C_FIELD(temp_v1_3, s32 *, 8) = 1;
    M2C_FIELD(temp_v1_3, s32 *, 4) = 1;
    M2C_FIELD(arg0, M2C_UNK **, 0x58) = &D_80075B88;
    M2C_FIELD(temp_v1_3, M2C_UNK **, 0xC) = &D_80082770;
    temp_v1_4 = arg0 + 0x68;
    M2C_FIELD(arg0, M2C_UNK **, 0x68) = &D_80073F18;
    M2C_FIELD(temp_v1_4, s32 *, 8) = 1;
    M2C_FIELD(temp_v1_4, s32 *, 4) = 1;
    M2C_FIELD(arg0, M2C_UNK **, 0x68) = &D_80075B88;
    M2C_FIELD(temp_v1_4, M2C_UNK **, 0xC) = &D_80082770;
    temp_a0_4 = arg0 + 0x78;
    M2C_FIELD(arg0, M2C_UNK **, 0x78) = &D_80073F18;
    M2C_FIELD(temp_a0_4, s32 *, 8) = 2;
    M2C_FIELD(temp_a0_4, s32 *, 4) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x78) = &D_80075B88;
    M2C_FIELD(temp_a0_4, M2C_UNK **, 0xC) = &D_80089294;
    temp_a0_5 = arg0 + 0x88;
    M2C_FIELD(arg0, M2C_UNK **, 0x88) = &D_80073F18;
    M2C_FIELD(temp_a0_5, s32 *, 8) = 2;
    M2C_FIELD(temp_a0_5, s32 *, 4) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x88) = &D_80075B88;
    M2C_FIELD(temp_a0_5, M2C_UNK **, 0xC) = &D_80089258;
}
