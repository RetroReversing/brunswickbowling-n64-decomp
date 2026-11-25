/* Partial candidate from function #85899348540 in project #20; rechecked locally. */
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80054950();                                /* extern */
s32 func_80054984(s32);                         /* extern */
s32 func_80054C18(s32, s32, s32);           /* extern */
s32 func_80055BFC(s32, s32, u32, s32);      /* extern */
s32 func_80067FC0(s32 *, s32 *, s32);      /* extern */
s32 func_800680F0(s32 *, s32 *, s32);      /* extern */
extern s32 D_8006DE24;
extern s32 D_80084D80;
extern s32 D_80084F50;

s32 func_80056248(s32 arg0, s32 arg1, u32 arg2) {
    s32 sp10[7];
    union { s32 * pointer; s32 value; } __repair_phase_storage;
    unsigned sp30;
    
    s32 temp_v0;
    s32 var_s1;
    s32 var_s2;
    u32 var_s0;
    u32 var_v1;
    
    s32 *__base_D_80084D80;
    s32 *__base_D_80084F50;

    __base_D_80084D80 = &D_80084D80;

    __base_D_80084F50 = &D_80084F50;

    var_s1 = arg1;
    var_s0 = arg2;
    if (D_8006DE24 == 2) {
      var_s2 = 0;
        if (var_s0 != 0) {
            for (;;) {
                var_v1 = var_s0;
                if (var_s0 > 0x8000U) {
                    var_v1 = 0x8000;
                }
                sp10[1] = 1;
                sp10[0] = var_s1;
                sp10[3] = 0x80000505;
                sp10[4] = arg0;
                sp10[5] = var_v1;
                sp10[2] = 0;
                sp10[6] = 0;
                __repair_phase_storage.pointer = (&D_80084F50);
                func_800680F0(__base_D_80084D80, sp10, 1);
                /*__repair_pointer_balance*/if ((unsigned long)__base_D_80084F50 & 0x100) {
func_80067FC0(__base_D_80084F50, &sp30, 1);
} else {
func_80067FC0(__base_D_80084F50, &sp30, 1);
}
                var_s1 += sp30;
                if (sp30 == 0) {
                    break;
                }
                var_s0 -= sp30;
                var_s2 += sp30;
                if (var_s0 == 0) {
                    return var_s2;
                }
            }
            goto block_15;
        }
        goto block_15;
    }
    __repair_phase_storage.value = func_80054950();
    if (var_s0 != 0) {
        for (;;) {
            var_v1 = var_s0;
            if (var_s0 > 0x8000U) {
                var_v1 = 0x8000;
            }
            temp_v0 = func_80055BFC(0x505, arg0, var_v1, 0);
            sp30 = temp_v0;
            if (temp_v0 != 0) {
                func_80054C18(0xB1FF0000, var_s1, temp_v0);
                var_s1 += sp30;
                var_s0 -= sp30;
                var_s2 += sp30;
                if (var_s0 != 0) {
                    continue;
                }
            }
            break;
        }
    }
    func_80054984(__repair_phase_storage.value);
block_15:
    return var_s2;
}
