/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
s32 func_80057BA0();                             /* extern */

s32 func_80057B50(f64 arg0) {
    s32 temp_ret;

    if (!(arg0 < 0.0)) {
        return func_80057BA0();
    }
    temp_ret = func_80057BA0(-arg0);
    return -temp_ret - (-(s32) (u32) (u64) temp_ret != 0);
}
