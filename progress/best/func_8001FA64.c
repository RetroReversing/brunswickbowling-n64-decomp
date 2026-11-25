/* machine draft (m2c) for sn-n64-281 -G0 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mfp64, tried by autopilot */
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

extern M2C_UNK D_800757E0;
extern M2C_UNK D_80075A20;
extern M2C_UNK D_80083850;
extern M2C_UNK D_800838A4;
extern M2C_UNK D_800838F8;

void func_8001FA64(void) {
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;

    temp_v0 = &D_80083850 + 8;
    M2C_FIELD(&D_80083850, M2C_UNK **, 0x10) = &D_80075A20;
    M2C_FIELD(temp_v0, void **, 4) = temp_v0;
    M2C_FIELD(&D_80083850, void **, 8) = temp_v0;
    M2C_FIELD(&D_80083850, M2C_UNK **, 0x10) = &D_800757E0;
    temp_v0_2 = &D_800838A4 + 8;
    M2C_FIELD(&D_800838A4, M2C_UNK **, 0x10) = &D_80075A20;
    M2C_FIELD(temp_v0_2, void **, 4) = temp_v0_2;
    M2C_FIELD(&D_800838A4, void **, 8) = temp_v0_2;
    M2C_FIELD(&D_800838A4, M2C_UNK **, 0x10) = &D_800757E0;
    temp_v0_3 = &D_800838F8 + 8;
    M2C_FIELD(&D_800838F8, M2C_UNK **, 0x10) = &D_80075A20;
    M2C_FIELD(temp_v0_3, void **, 4) = temp_v0_3;
    M2C_FIELD(&D_800838F8, void **, 8) = temp_v0_3;
    M2C_FIELD(&D_800838F8, M2C_UNK **, 0x10) = &D_800757E0;
}
