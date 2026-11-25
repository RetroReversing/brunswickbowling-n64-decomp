/* Partial candidate from function #137438953717 in project #32; rechecked locally. */
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80054950();                                /* extern */
s32 func_80054984(s32);                         /* extern */
s32 func_8005509C(s32, s32, s32);           /* extern */
s32 func_80055AF4();                                /* extern */
s32 func_80055BFC(s32, s32, s32, s32);      /* extern */
s32 func_80067FC0(s32 *, s32 *, s32);      /* extern */
s32 func_800680F0(s32 *, s32 *);      /* extern */
extern s32 D_8006DE24;
extern s32 D_80084D80;
extern s32 D_80084F50;

s32 func_80056050(s32 arg0, s32 arg1) {
    s32 sp10[7];
    s32 *sp2C;
    s32 sp30;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_v0;

    temp_s0 = func_80055AF4();
    if (D_8006DE24 == 2) {
        sp10[1] = temp_s0;
        sp10[0] = arg0;
        sp10[4] = temp_s0;
        sp10[2] = 1;
        sp10[3] = 0x80000303;
        sp10[6] = 0;
        sp10[5] = arg1;
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
        temp_v0 = func_80055BFC(0x303, temp_s0, arg1, 0);
        sp30 = temp_v0;
        if (temp_v0 & 0x8000) {
            sp30 = temp_v0 | 0xFFFF0000;
        }
        func_80054984(temp_s1);
    }
    return sp30;
}
