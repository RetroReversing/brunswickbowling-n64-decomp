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

M2C_UNK func_800162E0(M2C_UNK *, s32, M2C_UNK);     /* extern */
extern M2C_UNK D_80082780;

void func_80023AD4(void *arg0, s32 arg1) {
    s32 temp_v0;
    void *temp_v0_2;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x28);
    M2C_FIELD(arg0, s32 *, 0x2C) = temp_v0;
    if (temp_v0 != 0) {
        func_800162E0(&D_80082780, temp_v0, 1);
        M2C_FIELD(arg0, s32 *, 0x18) = 1;
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
        M2C_FIELD(arg0, s16 *, 0x20) = 0x1A;
        return;
    }
    temp_v0_2 = M2C_FIELD(arg0, void **, 0x10);
    M2C_FIELD(arg0, s32 *, 0x28) = arg1;
    M2C_FIELD(temp_v0_2, M2C_UNK (**)(void *, s32), 0x5C)(arg0 + M2C_FIELD(temp_v0_2, s16 *, 0x58), temp_v0);
}
