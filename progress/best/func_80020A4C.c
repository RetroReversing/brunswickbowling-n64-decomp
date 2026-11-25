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

M2C_UNK func_80011A4C(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */

s32 func_80020A4C(void *arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) ((arg1 * 0x50) + arg0 + 0x168A);
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 8;
    func_80011A4C(arg2, arg3, 2);
    return 0;
}
