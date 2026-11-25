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

void *func_80071668(s32);                           /* extern */
M2C_UNK func_8007175C(M2C_UNK, void *);             /* extern */
extern s32 D_8009CBB8;

void *func_8004D480(s32 arg0, M2C_UNK arg1, s32 arg2) {
    void *temp_v0;

    temp_v0 = func_80071668(D_8009CBB8);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 0) = arg2;
        M2C_FIELD(temp_v0, s32 *, 0x1C) = arg0;
        M2C_FIELD(temp_v0, s16 *, 0xC) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x14) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x10) = 1;
        func_8007175C(arg1, temp_v0);
    }
    return temp_v0;
}
