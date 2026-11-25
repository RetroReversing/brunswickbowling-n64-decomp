/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
extern f32 D_80079B58;
extern f32 D_80079B5C;

s32 func_800482C4(f32 arg0, f32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 < 0.0f) {
        var_v0 = 1;
    }
    if (D_80079B58 <= arg0) {
        var_v0 |= 2;
    }
    if (arg1 < 0.0f) {
        var_v0 |= 4;
    }
    if (D_80079B5C <= arg1) {
        var_v0 |= 8;
    }
    return var_v0;
}
