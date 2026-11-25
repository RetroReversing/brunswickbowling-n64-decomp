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

s32 func_8004CAD8(M2C_UNK);                         /* extern */
M2C_UNK func_80050AE8(s32, s32, s32, M2C_UNK, s32, s32); /* extern */
extern void *D_8009DA74;

s32 func_80050A18(s32 arg0, M2C_UNK arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_8004CAD8(arg1);
    if (temp_v0 != 0) {
        func_80050AE8(arg0, M2C_FIELD(D_8009DA74, s32 *, 0x24), temp_v0, arg1, M2C_FIELD(D_8009DA74, s32 *, 0x20), arg2);
    }
    return temp_v0;
}
