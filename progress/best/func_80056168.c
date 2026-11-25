/* Partial candidate from function #137438953718 in project #32; rechecked locally. */
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80054950();                                /* extern */
s32 func_80054984(s32);                         /* extern */
s32 func_80055BFC(s32, s32, s32, s32);  /* extern */
s32 osRecvMesg(s32 *, s32 *, s32);      /* extern */
s32 osSendMesg(s32 *, s32 *, s32);  /* extern */
extern s32 D_8006DE24;
extern s32 D_80084D80;
extern s32 D_80084F50;

s32 func_80056168(s32 arg0) {
    struct { s32 sp10[2]; unsigned char gap_18[4]; s32 sp1C[4]; } repair_stack_record;
    s32 *sp2C;
    s32 sp30;
    s32 temp_s0;
    s32 temp_v0;

    if (D_8006DE24 == 2) {
        repair_stack_record.sp1C[1] = arg0;
        repair_stack_record.sp1C[0] = 0x80000404;
        repair_stack_record.sp10[1] = 0;
        repair_stack_record.sp1C[3] = 0;
        repair_stack_record.sp1C[2] = 0;
        sp2C = &D_80084F50;
        osSendMesg(&D_80084D80, repair_stack_record.sp10, 1);
        /*__repair_pointer_balance*/if ((unsigned long)sp2C & 0x100) {
osRecvMesg(&D_80084F50, &sp30, 1);
} else {
osRecvMesg(&D_80084F50, &sp30, 1);
}
        if (sp30 & 0x8000) {
            sp30 |= 0xFFFF0000;
        }
    } else {
        temp_s0 = func_80054950();
        temp_v0 = func_80055BFC(0x404, arg0, 0, 0);
        sp30 = temp_v0;
        if (temp_v0 & 0x8000) {
            sp30 = temp_v0 | 0xFFFF0000;
        }
        func_80054984(temp_s0);
    }
    return sp30;
}
