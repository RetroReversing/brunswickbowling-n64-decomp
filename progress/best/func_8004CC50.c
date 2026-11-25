/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
s32 func_8004CD7C();
s32 func_8007169C();
s32 func_80071700();
extern s32 D_8009C798;
extern s32 D_8009C898;
extern u32 D_8009C8A0;

s32 func_8004CC50(s32 arg0) {
    char *var_s2;
    s32 temp_v0;
    u32 var_s1;

    var_s1 = 0;
    if (D_8009C8A0 != 0) {
        var_s2 = &D_8009C798;
loop_2:
        temp_v0 = func_8004CD7C(*(s32 *)var_s2, arg0);
        var_s1 += 1;
        if (temp_v0 != 0) {
            func_80071700(temp_v0);
            func_8007169C(D_8009C898, temp_v0);
            return -1;
        }
        var_s2 += 4;
        if (var_s1 >= (u32) D_8009C8A0) {
            goto block_5;
        }
        goto loop_2;
    }
block_5:
    return 0;
}
