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
extern M2C_UNK D_80075A20;
extern M2C_UNK D_800777B8;
extern M2C_UNK D_8008B268;
extern M2C_UNK D_8008B334;
extern M2C_UNK D_8008B358;
extern M2C_UNK D_8008B380;
extern M2C_UNK D_8008B398;

void func_8002FE38(void *arg0) {
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_v1;

    temp_v1 = arg0 + 8;
    M2C_FIELD(arg0, M2C_UNK **, 0x10) = &D_80075A20;
    M2C_FIELD(temp_v1, void **, 4) = temp_v1;
    M2C_FIELD(arg0, M2C_UNK **, 0x10) = &D_80075A20;
    temp_a0 = arg0 + 0x24;
    M2C_FIELD(arg0, void **, 8) = temp_v1;
    M2C_FIELD(arg0, M2C_UNK **, 0x24) = &D_80073F18;
    M2C_FIELD(temp_a0, s32 *, 8) = 8;
    M2C_FIELD(temp_a0, s32 *, 4) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x24) = &D_800777B8;
    M2C_FIELD(temp_a0, M2C_UNK **, 0xC) = &D_8008B334;
    temp_a0_2 = arg0 + 0x34;
    M2C_FIELD(arg0, M2C_UNK **, 0x34) = &D_80073F18;
    M2C_FIELD(temp_a0_2, s32 *, 8) = 0xE;
    M2C_FIELD(temp_a0_2, s32 *, 4) = 5;
    M2C_FIELD(arg0, M2C_UNK **, 0x34) = &D_800777B8;
    M2C_FIELD(temp_a0_2, M2C_UNK **, 0xC) = &D_8008B268;
    temp_a0_3 = arg0 + 0x64;
    M2C_FIELD(arg0, M2C_UNK **, 0x64) = &D_80073F18;
    M2C_FIELD(temp_a0_3, s32 *, 8) = 5;
    M2C_FIELD(temp_a0_3, s32 *, 4) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x64) = &D_800777B8;
    M2C_FIELD(temp_a0_3, M2C_UNK **, 0xC) = &D_8008B380;
    temp_a0_4 = arg0 + 0x74;
    M2C_FIELD(arg0, M2C_UNK **, 0x74) = &D_80073F18;
    M2C_FIELD(temp_a0_4, s32 *, 8) = 9;
    M2C_FIELD(temp_a0_4, s32 *, 4) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x74) = &D_800777B8;
    M2C_FIELD(temp_a0_4, M2C_UNK **, 0xC) = &D_8008B358;
    temp_a0_5 = arg0 + 0x84;
    M2C_FIELD(arg0, M2C_UNK **, 0x84) = &D_80073F18;
    M2C_FIELD(temp_a0_5, s32 *, 8) = 2;
    M2C_FIELD(temp_a0_5, s32 *, 4) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x84) = &D_800777B8;
    M2C_FIELD(temp_a0_5, M2C_UNK **, 0xC) = &D_8008B398;
    M2C_FIELD(arg0, s32 *, 0x18) = 1;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
}
