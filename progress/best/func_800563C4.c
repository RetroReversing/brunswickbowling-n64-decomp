/* Partial candidate from function #137438953720 in project #32; rechecked locally. */
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80054950();                                /* extern */
s32 func_80054984(s32);                         /* extern */
s32 func_8005509C(s32, s32, u32);           /* extern */
s32 func_80055BFC(s32, s32, u32, s32);      /* extern */
s32 func_80067FC0(s32 *, s32 *, s32);      /* extern */
s32 func_800680F0(s32 *, s32 *, s32);      /* extern */
extern s32 D_8006DE24;
extern s32 D_80084D80;
extern s32 D_80084F50;

s32 func_800563C4(s32 arg0, s32 arg1, u32 arg2) {
    s32 sp10[7];
    s32 *sp2C;
    s32 sp30;
    s32 temp_s4;
    s32 temp_v0;
    s32 var_s2;
    s32 var_s3;
    u32 var_s0;
    u32 var_s0_2;
    u32 var_s1;
    s32 *__base_D_80084D80;
    s32 *__base_D_80084F50;

    __base_D_80084F50 = &D_80084F50;

    __base_D_80084D80 = &D_80084D80;

    var_s2 = arg1;
    var_s1 = arg2;
    var_s3 = 0;
    if (D_8006DE24 == 2) {
        if (var_s1 != 0) {
            for (;;) {
                var_s0 = var_s1;
                if (var_s1 > 0x8000U) {
                    var_s0 = 0x8000;
                }
                sp10[0] = var_s2;
                sp10[1] = var_s0;
                sp10[2] = 1;
                sp10[3] = 0x80000606;
                sp10[4] = arg0;
                sp10[6] = 0;
                sp10[5] = var_s0;
                sp2C = __base_D_80084F50;
                func_800680F0(__base_D_80084D80, sp10, 1);
                func_80067FC0(__base_D_80084F50, &sp30, 1);
                var_s2 += sp30;
                if (sp30 == 0) {
                    break;
                }
                var_s1 -= sp30;
                var_s3 += sp30;
                if (var_s1 == 0) {
                    return var_s3;
                }
            }
            goto block_15;
        }
        goto block_15;
    }
    temp_s4 = func_80054950();
    if (var_s1 != 0) {
loop_10:
        var_s0_2 = var_s1;
        if (var_s1 > 0x8000U) {
            var_s0_2 = 0x8000;
        }
        func_8005509C(0xB1FF0000, var_s2, var_s0_2);
        temp_v0 = func_80055BFC(0x606, arg0, var_s0_2, 0);
        sp30 = temp_v0;
        if (temp_v0 != 0) {
            var_s2 += temp_v0;
            var_s1 -= temp_v0;
            var_s3 += temp_v0;
            if (var_s1 != 0) {
                goto loop_10;
            }
        }
    }
    func_80054984(temp_s4);
block_15:
    return var_s3;
}
