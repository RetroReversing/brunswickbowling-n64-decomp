/* machine draft (m2c) for sn-n64-281 -G0 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mfp64, tried by autopilot */
s32 func_80057FA0(u8 *arg0, u8 *arg1, u32 arg2) {
    s32 var_a2_2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v1_2;
    u32 var_a2;
    u32 var_v1;
    u8 *var_a1;
    u8 *var_a3;

    var_a1 = arg1;
    var_a2 = arg2;
    if (var_a2 != 0) {
        var_a3 = arg0;
        if ((var_a1 - arg0) & 3) {
            var_a2_2 = var_a2 - 1;
            if (var_a2_2 != -1) {
                do {
                    *var_a3 = *var_a1;
                    var_a1 += 1;
                    var_a2_2 -= 1;
                    var_a3 += 1;
                } while (var_a2_2 != -1);
            }
        } else {
            var_v0 = var_a2 < 2U;
            if ((s32) var_a3 & 1) {
                *var_a3 = *var_a1;
                var_a1 += 1;
                var_a3 += 1;
                var_a2 -= 1;
                var_v0 = var_a2 < 2U;
            }
            var_v1 = var_a2 >> 2;
            if (var_v0 == 0) {
                var_v1_2 = var_v1 - 1;
                if ((s32) var_a3 & 2) {
                    *var_a3 = (u16) *var_a1;
                    var_a1 += 2;
                    var_a3 += 2;
                    var_a2 -= 2;
                    var_v1 = var_a2 >> 2;
                    goto block_11;
                }
            } else {
block_11:
                var_v1_2 = var_v1 - 1;
            }
            var_v0_2 = var_a2 & 2;
            if (var_v1_2 != -1) {
                __repair_rows: {
                    *var_a3 = (s32) *var_a1;
                    var_a1 += 4;
                    var_v1_2 -= 1;
                    var_a3 += 4;
                }
if (var_v1_2 != -1) goto __repair_rows;
                var_v0_2 = var_a2 & 2;
            }
            var_v0_3 = var_a2 & 1;
            if (var_v0_2 != 0) {
                *var_a3 = (u16) *var_a1;
                var_a1 += 2;
                var_a3 += 2;
                var_v0_3 = var_a2 & 1;
            }
            if (var_v0_3 != 0) {
                *var_a3 = *var_a1;
            }
        }
    }
    return (s32) arg0;
}
