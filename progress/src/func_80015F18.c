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

M2C_UNK func_8005A970(void *, M2C_UNK);             /* extern */
extern M2C_UNK D_80073EF0;
extern M2C_UNK D_8008CF28;

void *func_80015F18(void *arg0, s32 arg1, s16 arg2, M2C_UNK arg3, M2C_UNK *arg4) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_80073EF0;
    if (arg4 == NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 4) = &D_8008CF28;
    } else {
        M2C_FIELD(arg0, M2C_UNK **, 4) = arg4;
    }
    M2C_FIELD(arg0, s16 *, 0x108) = (s16) (arg1 + 0x14);
    M2C_FIELD(arg0, s16 *, 0x10A) = arg2;
    func_8005A970(arg0 + 8, arg3);
    return arg0;
}
