/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O1, tried by autopilot */
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

extern int D_8007D704;
extern int D_8007D700;
s32 func_8002EDE0();
s32 func_800343AC();
extern char D_8008BA90[];

s32 func_8002EC80(void *arg0) {

    if (M2C_FIELD(arg0, const s32 *, 0x14) != 0) {
        func_800343AC(D_8008BA90, 0);
    }
    if (D_8007D704 != 0) {
        func_8002EDE0(arg0);
        return 0;
        D_8007D700 = 1;
    } else {
        return 1;
    }
}
