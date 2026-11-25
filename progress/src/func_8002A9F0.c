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

s32 func_8002A9F0(void *arg0, s32 arg1, s32 arg2) {
    if (arg2 == 0x209) {
        M2C_FIELD(arg0, s32 *, 0x11C) = 0;
        M2C_FIELD(arg0, s32 *, 0x114) = 0;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), void ***, 4) = (void **) M2C_FIELD(arg0, void ***, 4);
        *M2C_FIELD(arg0, void ***, 4) = M2C_FIELD(arg0, void **, 0);
        return 2;
    }
    if (arg2 == 0x20A) {
        M2C_FIELD(arg0, s32 *, 0x11C) = 0;
        M2C_FIELD(arg0, s32 *, 0x114) = 0;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), void ***, 4) = (void **) M2C_FIELD(arg0, void ***, 4);
        *M2C_FIELD(arg0, void ***, 4) = M2C_FIELD(arg0, void **, 0);
    }
    return 0;
}
