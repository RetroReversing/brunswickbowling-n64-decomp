/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
s32 func_80010DD0(s32 arg0) {
    s32 temp_v0;
    s32 var_a1;
    s32 var_a1_b1;
    s32 var_v1;
    var_a1 = arg0;

    var_v1 = var_a1;
    /*__repair_loop_weight*/do { var_a1_b1 = 0; } while (0);
    if ((arg0 << 0x10) != 0) {
        do {
            if (var_v1 & 1) {
                var_a1_b1 += 1;
            }
            temp_v0 = (s32) (var_v1 << 0x10) >> 0x11;
            var_v1 = temp_v0;
        } while (temp_v0 != 0);
    }
    return var_a1_b1 < 6;
}
