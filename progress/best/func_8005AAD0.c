/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
s32 func_8005AAD0(s32 arg0) {
    s32 temp_a1;
    s32 temp_v1;
    s32 var_a0;
    s32 var_v0;
    s32 var_v0_2;

    var_a0 = arg0;
    temp_a1 = var_a0;
    if (var_a0 & 3) {
loop_1:
        var_v0 = var_a0 - temp_a1;
        if (*(s32 *)var_a0 != 0) {
            var_a0 += 1;
            if (!(var_a0 & 3)) {
                goto loop_3;
            }
            goto loop_1;
        }
        /* Duplicate return node #12. Try simplifying control flow for better match */
        return var_v0;
    }
loop_3:
    temp_v1 = *(s32 *)var_a0;
    if (!(temp_v1 & 0xFF000000)) {
        return var_a0 - temp_a1;
    }
    if (!(temp_v1 & 0xFF0000)) {
        var_v0_2 = temp_a1 - 1;
        goto block_11;
    }
    if (!(temp_v1 & 0xFF00)) {
        var_v0_2 = temp_a1 - 2;
        goto block_11;
    }
    var_v0_2 = temp_a1 - 3;
    if (temp_v1 & 0xFF) {
        var_a0 += 4;
        goto loop_3;
    }
block_11:
    var_v0 = var_a0 - var_v0_2;
    return var_v0;
}
