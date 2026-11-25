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

extern void *D_80097DE0;
extern s32 D_800ACBD0;
extern s32 D_800ACBD4;
extern s32 D_800ACBE0;
extern s32 D_800ACBE4;

void __osTimerServicesInit(void) {
    D_800ACBE0 = 0;
    D_800ACBE4 = 0;
    D_800ACBD0 = 0;
    D_800ACBD4 = 0;
    M2C_FIELD(D_80097DE0, s32 *, 0x10) = 0;
    M2C_FIELD(D_80097DE0, s32 *, 0x14) = 0;
    M2C_FIELD(D_80097DE0, s32 *, 8) = 0;
    M2C_FIELD(D_80097DE0, s32 *, 0xC) = 0;
    M2C_FIELD(D_80097DE0, void **, 4) = (void *) D_80097DE0;
    M2C_FIELD(D_80097DE0, void **, 0) = (void *) D_80097DE0;
    M2C_FIELD(D_80097DE0, s32 *, 0x18) = 0;
    M2C_FIELD(D_80097DE0, s32 *, 0x1C) = 0;
}
