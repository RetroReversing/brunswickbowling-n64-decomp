/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
s32 func_8005061C();
s32 func_80057FA0();
extern char D_8009D8E0[];

void func_800504D8(s32 arg0, s32 arg1, u32 arg2) {
    s32 temp_a0;
    s32 temp_s4;
    s32 temp_v0;
    s32 var_s2;
    s32 var_s3;
    u32 temp_s0;
    u32 var_a2;
    u32 var_s0;
    u32 var_s1;
    u32 var_v0;

    var_s2 = arg0;
    var_s3 = arg1;
    var_s1 = arg2;
    temp_a0 = var_s2 & ~0xFF;
    temp_s4 = var_s2 - temp_a0;
    if (temp_s4 != 0) {
        func_8005061C(temp_a0, D_8009D8E0, 0x100U);
        var_s0 = 0x100 - temp_s4;
        if (var_s1 < var_s0) {
            var_s0 = var_s1;
        }
        func_80057FA0(var_s3, temp_s4 + D_8009D8E0, var_s0);
        var_s2 += var_s0;
        var_s3 += var_s0;
        var_s1 -= var_s0;
    }
    var_v0 = var_s1;
    if ((s32) var_s1 < 0) {
        var_v0 = var_s1 + 0xFF;
    }
    temp_v0 = (s32) var_v0 >> 8;
    temp_s0 = temp_v0 << 8;
    if (temp_v0 != 0) {
        func_8005061C(var_s2, (s32 *) var_s3, temp_s0);
        var_s2 += temp_s0;
        var_s3 += temp_s0;
        var_s1 -= temp_s0;
    }
    if (var_s1 != 0) {
        if (var_s1 & 1) {
            var_a2 = var_s1 + 1;
            goto block_13;
        }
        if (var_s3 & 7) {
            var_a2 = var_s1;
block_13:
            func_8005061C(var_s2, D_8009D8E0, var_a2);
            func_80057FA0(var_s3, D_8009D8E0, var_s1);
            return;
        }
        func_8005061C(var_s2, (s32 *) var_s3, var_s1);
    }
}
