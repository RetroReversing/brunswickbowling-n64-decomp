/* Partial candidate from function #85899348536 in project #20; rechecked locally. */
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
/* Partial candidate from function #103079215132 in project #24; rechecked locally. */
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80055B14();
s32 func_80067FC0();
s32 func_800680F0();
extern s32 D_8006DE24;
extern char D_80084D80[];
extern char D_80084F50[];

s32 func_80055EB8(void) {
    s32 sp10[2];
    s32 sp1C[4];
    s32 *sp2C;
    s32 sp30;

    D_8006DE24 = 2;
    func_80055B14(0xFF);
    sp1C[0] = 0x80000101;
    sp1C[2] = 0;
    sp1C[3] = 0;
    sp10[1] = 0;
    sp1C[1] = 0;
    sp2C = D_80084F50;
    func_800680F0(D_80084D80, sp10, 1);
    /*__repair_pointer_balance*/if ((unsigned long)sp2C & 0x100) {
func_80067FC0(D_80084F50, &sp30, 1);
} else {
func_80067FC0(D_80084F50, &sp30, 1);
}
    return sp30;
}
