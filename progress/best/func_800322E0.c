/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
extern s32 D_80089248;

void func_800322E0(s16 *arg0) {
    s16 temp_v0;
    s16 temp_v0_2;
    s32 var_v0;

    if ((D_80089248 ^ 1) == 0) {
        temp_v0 = *arg0;
        if (temp_v0 >= 0) {
            var_v0 = temp_v0 < 2;
        } else {
            *arg0 = 1;
            var_v0 = *arg0 < 2;
        }
        goto block_12;
    }
    if ((D_80089248 ^ 2) == 0) {
        if (*arg0 < 2) {
            *arg0 = 3;
        }
        if (*arg0 >= 4) {
            *arg0 = 2;
        }
    } else {
        temp_v0_2 = *arg0;
        var_v0 = temp_v0_2 < 4;
        if (temp_v0_2 < 0) {
            *arg0 = 3;
            var_v0 = *arg0 < 4;
        }
block_12:
        if (var_v0 == 0) {
            *arg0 = 0;
        }
    }
}
