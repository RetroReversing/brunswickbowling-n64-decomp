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

M2C_UNK osRecvMesg(s32, s16 **, M2C_UNK);        /* extern */
extern s32 D_800A5B44;

void func_8005F600(void) {
    s16 *sp10;

    do {
        osRecvMesg(D_800A5B44 + 8, &sp10, 1);
        osRecvMesg(D_800A5B44 + 8, NULL, 0);
    } while (*sp10 != 1);
}
