/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
s8 *func_8005AF00(u32 arg0, s8 *arg1, u32 arg2) {
    s8 *var_a1;
    s8 var_v0;
    u32 temp_hi;
    u32 temp_lo;

    var_a1 = arg1;
    temp_hi = arg0 % arg2;
    temp_lo = arg0 / arg2;
    if (temp_lo != 0) {
        var_a1 = func_8005AF00(temp_lo, arg1, arg2);
    }
    var_v0 = temp_hi + 0x30;
    if ((s8) temp_hi >= 0xA) {
        var_v0 = temp_hi + 0x57;
    }
    *var_a1 = var_v0;
    return var_a1 + 1;
}
