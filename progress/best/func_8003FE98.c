/* machine draft (m2c) for sn-n64-281 -G0 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mfp64, tried by autopilot */
s32 func_8003FE98(s32 arg0, u8 arg1) {
    s32 var_v1;
    u32 temp_a0;
    u32 var_v0;

    var_v1 = 0;
    if (!(arg1 & 1)) {
        var_v0 = arg1 & 0xFF;
loop_2:
        temp_a0 = var_v0 >> 1;
        var_v1 += 1;
        if (var_v1 >= 5) {
            return -1;
        }
        var_v0 = temp_a0 & 0xFF;
        if (temp_a0 & 1) {
            /* Duplicate return node #5. Try simplifying control flow for better match */
            return var_v1;
        }
        goto loop_2;
    }
    return var_v1;
}
