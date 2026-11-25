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

s16 func_80039BC4(M2C_UNK *);                       /* extern */
extern M2C_UNK D_8008CF28;

typedef struct { u8 pad_0[0x14]; s32 f14; u8 pad_18[0x4]; s32 f1C; s32 f20; u8 pad_24[0x10]; s32 f34; s16 f38; u8 pad_3A[0x2]; s32 f3C; } PtrRec_arg0;
void func_80013B4C(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    ((PtrRec_arg0 *) arg0)->f14 = arg1;
    ((PtrRec_arg0 *) arg0)->f1C = -1;
    ((PtrRec_arg0 *) arg0)->f20 = 0;
    ((PtrRec_arg0 *) arg0)->f34 = arg2;
    ((PtrRec_arg0 *) arg0)->f38 = func_80039BC4(&D_8008CF28);
    ((PtrRec_arg0 *) arg0)->f1C = arg3;
    ((PtrRec_arg0 *) arg0)->f3C = arg4;
}
