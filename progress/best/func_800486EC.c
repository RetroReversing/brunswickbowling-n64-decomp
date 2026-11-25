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

extern M2C_UNK D_80095CA8;
extern void *D_8009CC60;

typedef struct { s32 f0; M2C_UNK * f4; } PtrRec_D_8009CC60;
void func_800486EC(void) {
    ((PtrRec_D_8009CC60 *) D_8009CC60)->f0 = 0x06000000;
    ((PtrRec_D_8009CC60 *) D_8009CC60)->f4 = &D_80095CA8;
    D_8009CC60 += 8;
}
