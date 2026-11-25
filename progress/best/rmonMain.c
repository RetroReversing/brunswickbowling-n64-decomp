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

M2C_UNK __rmonHitBreak();                           /* extern */
M2C_UNK __rmonHitSpBreak();                         /* extern */
M2C_UNK __rmonInit();                               /* extern */
M2C_UNK func_80067FC0(M2C_UNK *, s32 *, M2C_UNK);   /* extern */
M2C_UNK func_80068C8C();                            /* extern */
extern s32 D_80097D90;
extern M2C_UNK D_800AC6A0;
extern s32 D_800AC6E0;
extern M2C_UNK D_800AC6F0;
extern s8 D_800ACB50;
extern s8 D_800ACB51;
extern s32 D_800ACB54;
extern M2C_UNK *D_800ACB58;

void rmonMain(void) {
    s32 sp10;

    D_800AC6E0 = 0;
    D_800ACB51 = 0;
    D_800ACB50 = 0;
    __rmonInit();
    D_80097D90 = 1;
    D_800ACB54 = 0;
    D_800ACB58 = &D_800AC6F0;
loop_1:
    func_80067FC0(&D_800AC6A0, &sp10, 1);
    D_800AC6E0 |= sp10;
    if (D_800AC6E0 & 2) {
        D_800AC6E0 &= ~2;
        __rmonHitBreak();
    }
    if (D_800AC6E0 & 4) {
        D_800AC6E0 &= ~4;
        __rmonHitSpBreak();
    }
    if (D_800AC6E0 & 8) {
        D_800AC6E0 &= ~8;
        func_80068C8C();
    }
    if (D_800AC6E0 & 0x10) {
        D_800AC6E0 &= 0xEF;
    }
    if (!(D_800AC6E0 & 0x20)) {
        goto loop_1;
    }
    D_800AC6E0 &= 0xDF;
    goto loop_1;
}
