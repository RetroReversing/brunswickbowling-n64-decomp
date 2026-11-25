/* Partial candidate from function #137438953716 in project #32; rechecked locally. */
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

s32 func_80054950();                                /* extern */
M2C_UNK func_80054984(s32);                         /* extern */
M2C_UNK func_8005509C(M2C_UNK, s32, s32);           /* extern */
s32 func_80055AF4();                                /* extern */
s32 func_80055BFC(M2C_UNK, s32, s32, M2C_UNK);      /* extern */
M2C_UNK func_80067FC0(M2C_UNK *, s32 *, M2C_UNK);      /* extern */
M2C_UNK func_800680F0(M2C_UNK *, s32 *);      /* extern */
extern s32 D_8006DE24;
extern M2C_UNK D_80084D80;
extern M2C_UNK D_80084F50;

s32 func_80055F38(s32 arg0, s32 arg1) {
    s32 sp10[7];
    M2C_UNK *sp2C;
    s32 sp30;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_v0;

    temp_s0 = func_80055AF4();
    if (D_8006DE24 == 2) {
        sp10[1] = temp_s0;
        sp10[4] = temp_s0;
        sp10[0] = arg0;
        sp10[2] = 1;
        sp10[3] = 0x80000202;
        sp10[5] = arg1;
        sp10[6] = 0;
        sp2C = &D_80084F50;
        func_800680F0(&D_80084D80, sp10);
        /*__repair_pointer_balance*/if ((unsigned long)sp2C & 0x100) {
func_80067FC0(&D_80084F50, &sp30, 1);
} else {
func_80067FC0(&D_80084F50, &sp30, 1);
}
        if (sp30 & 0x8000) {
            sp30 |= 0xFFFF0000;
        }
    } else {
        temp_s1 = func_80054950();
        func_8005509C(0xB1FF0000, arg0, temp_s0);
        temp_v0 = func_80055BFC(0x202, temp_s0, arg1, 0);
        sp30 = temp_v0;
        if (temp_v0 & 0x8000) {
            sp30 = temp_v0 | 0xFFFF0000;
        }
        func_80054984(temp_s1);
    }
    return sp30;
}
