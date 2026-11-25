/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
s32 func_8005ADD0(u8);                              /* extern */

s32 func_8005AA40(u8 *arg0, u8 *arg1) {
    s32 temp_s1;
    s32 temp_s1_2;
    u8 *var_s3;
    u8 *var_s4;
    u8 temp_s0;
    u8 temp_s2;

    var_s4 = arg0;
    var_s3 = arg1;
loop_1:
    temp_s2 = *var_s3;
    temp_s0 = *var_s4;
    temp_s1_2 = func_8005ADD0(temp_s0);
    temp_s1 = temp_s1_2 - func_8005ADD0(temp_s2 & 0xFF);
    if (((temp_s1 != 0) | (temp_s0 == 0)) == 0) {
        var_s4 += 1;
        var_s3 += 1;
        goto loop_1;
    }
    return temp_s1;
}
