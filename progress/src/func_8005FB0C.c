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

M2C_UNK alHeapDBAlloc(M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK, s32); /* extern */
extern M2C_UNK D_800A5D70;

void func_8005FB0C(s32 arg0) {
    alHeapDBAlloc(0, 0, &D_800A5D70, 1, arg0);
}
