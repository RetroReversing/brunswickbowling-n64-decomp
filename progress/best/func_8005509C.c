/* Partial candidate from function #85899348524 in project #20; rechecked locally. */
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_800549B0(s32, s32, u8);                /* extern */
s32 func_80054FB4(s32, u8);                     /* extern */

void func_8005509C(s32 arg0, u8 *arg1, u32 arg2) {
    s32 temp_a0;
    s32 var_a0;
    s32 var_s1;
    s32 var_v0;
    u32 var_s0;
    u8 *var_s2;
    u8 temp_a1_2;
    s32 temp_a2;
    u8 temp_v0;
    u8 temp_v1;
    void *var_s3;

    var_s1 = arg0;
    var_s2 = arg1;
    var_s0 = arg2;
    if (var_s0 != 0) {
        var_v0 = var_s1 & 3;
loop_2:
        temp_a0 = var_s1;
        if (var_v0 != 0) {
      u8 temp_a1;
            /*__repair_loop_weight*/do { var_s1 += 1; } while (0);
            temp_a1 = *var_s2;
            do { var_s2 += 1; } while (0);
            func_80054FB4(temp_a0, temp_a1);
            do { var_s0 -= 1; } while (0);
            var_v0 = var_s1 & 3;
            if (var_s0 != 0) {
                goto loop_2;
            }
        }
    }
    if (var_s0 >= 4U) {
        var_s3 = var_s2 + 3;
        __repair_rows: {
            temp_a2 = (*(u8 *)((char *)(var_s3) + 0));
            temp_v0 = (*(u8 *)((char *)(var_s3) + -2));
            temp_v1 = (*(u8 *)((char *)(var_s3) + -1));
            { var_s3 += 4; }
            func_800549B0(var_s1, (*var_s2 << 0x18) | (temp_v0 << 0x10) | (temp_v1 << 8) | temp_a2, temp_a2);
            do { var_s1 += 4; } while (0);
            do { var_s0 -= 4; } while (0);
            do { var_s2 += 4; } while (0);
        }
if (var_s0 >= 4U) goto __repair_rows;
    }
    if (var_s0 != 0) {
        var_a0 = var_s1;
        do {
            do { var_s1 += 1; } while (0);
            temp_a1_2 = *var_s2;
            do { var_s2 += 1; } while (0);
            func_80054FB4(var_a0, temp_a1_2);
            do { var_s0 -= 1; } while (0);
            var_a0 = var_s1;
        } while (var_s0 != 0);
    }
}
