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

extern void *D_8009CC60;

typedef struct { s32 f0; s32 f4; s32 f8; } PtrRec_D_8009CC60;
void func_8004DE50(void) {
    void *temp_v0;

    do { do { do { do { temp_v0 = (void *)(D_8009CC60); temp_v0 = (void *)((char *)temp_v0 + (s32)(8)); } while (0); } while (0); } while (0); } while (0);
    ((PtrRec_D_8009CC60 *) D_8009CC60)->f0 = 0xE9000000;
    ((PtrRec_D_8009CC60 *) D_8009CC60)->f4 = 0;
    ((PtrRec_D_8009CC60 *) D_8009CC60)->f8 = 0xB8000000;
    M2C_FIELD(temp_v0, s32 *, 4) = 0;
    D_8009CC60 = temp_v0 + 8;
}
