/* Partial candidate from function #85899348527 in project #20; rechecked locally. */
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80054BA0(s32);                             /* extern */
s32 func_80054FB4(s32, s32);                    /* extern */

void func_800553DC(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_a0;
    s32 var_a0;
    s32 var_s0;
    s32 var_s1;
    
s32 __repair_phase_var_s2;

    temp_a0 = arg1;
    var_s1 = arg0;
    var_s0 = arg2 - 1;
    if (arg2 != 0) {
        var_a0 = temp_a0;
        __repair_rows: {do{
            __repair_phase_var_s2 = var_a0 + 1;}while(0);
            temp_a0 = var_s1;/*__repair_loop_weight*/do {do {do {
            var_s1 += 1;} while (0);} while (0);} while (0);
            func_80054FB4(temp_a0, func_80054BA0(var_a0) & 0xFF);
            var_s0 -= 1;
            var_a0 = __repair_phase_var_s2;
        }
if (var_s0 != -1) goto __repair_rows;
    }
}
