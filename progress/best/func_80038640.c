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

s32 func_8005A970();
extern char D_80078030[];
extern s32 D_8007E4E0;
extern char D_80081AD0[];

void func_80038640(s32 arg0, void *arg1, s32 *arg2, s32 *arg3) {
    s32 temp;

    *arg3 = M2C_FIELD(*((D_8007E4E0 * 4) + D_80081AD0), s32 *, 0x24);
    if (arg0 < 7) {
        *arg2 = 1;
        temp = arg0 * 3;
        do { func_8005A970(arg1, temp + D_80078030); } while (0);
        return;
    }
    *arg2 = 0;
    arg0 -= 7;
    if (*arg3 != 0) {
        arg0 -= 0xF;
    }
    M2C_FIELD(arg1, s8 *, 0) = 0x31;
    M2C_FIELD(arg1, s8 *, 2) = 0;
    M2C_FIELD(arg1, s8 *, 1) = (s8) ((arg0 % 3) + 0x61);
}
