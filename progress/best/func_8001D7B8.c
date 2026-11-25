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

extern char D_80075178[];
extern char D_80075A20[];
extern char D_800833B0[];

typedef struct { u8 pad_0[0x8]; void * f8; u8 pad_C[0x4]; s32 * f10; } PtrRec_D_800833B0;
void func_8001D7B8(void) {
    void *temp_v0;

    do {
    ((PtrRec_D_800833B0 *) D_800833B0)->f10 = D_80075A20;
    temp_v0 = D_800833B0 + 8;
    M2C_FIELD(temp_v0, void **, 4) = temp_v0;
    ((PtrRec_D_800833B0 *) D_800833B0)->f8 = temp_v0;
    ((PtrRec_D_800833B0 *) D_800833B0)->f10 = D_80075178;
    } while (0);
}
