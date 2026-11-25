/* Partial candidate from function #137438953721 in project #32; rechecked locally. */
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80054950();                                /* extern */
s32 func_80054984(s32);                         /* extern */
s32 func_80055BFC(s32, s32, s32, s32);          /* extern */
s32 osRecvMesg(s32 *, s32 *, s32);      /* extern */
s32 osSendMesg(s32 *, s32 *, s32);  /* extern */
extern s32 D_8006DE24;
extern s32 D_80084D80;
extern s32 D_80084F50;

s32 func_8005653C(s32 arg0, s32 arg1, s32 arg2) {
    
    s32 sp1C[5];
    s32 *sp2C;
    s32 sp30;
    s32 temp_s0;
    unsigned long temp;

    if (D_8006DE24 == 2) {
      s32 sp10[2];
        sp1C[2] = arg0;
        sp1C[1] = 0x80000707;
        sp1C[3] = arg1;
        sp1C[4] = arg2;
        sp10[1] = 0;
        sp2C = &D_80084F50;
        osSendMesg(&D_80084D80, sp10, 1);
        /*__repair_pointer_balance*/temp = (unsigned long)sp2C & 0x100; if (temp) {
osRecvMesg(&D_80084F50, &sp30, 1);
} else {
osRecvMesg(&D_80084F50, &sp30, 1);
}
    } else {
        temp_s0 = func_80054950();
        sp30 = func_80055BFC(0x707, arg0, arg1, arg2);
        func_80054984(temp_s0);
    }
    return sp30;
}
