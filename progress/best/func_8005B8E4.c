/* Partial candidate from function #408021895356 in project #95; rechecked locally. */
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern s32 D_800FD884;
extern s32 *D_800FD88C;

s32 func_8005B8E4(s32 arg0, s32 arg1) {
    u8 __repair_frame[8];
    char *var_a2;
    char *var_v1;
    s32 var_a3;
    s32 var_t0;
    register s32 var_t1;

    if (arg0 == 0) {
        return 0;
    }
    var_t1 = arg1;
    if ((s32)arg1 == 0) {
        var_t1 = 1;
    }
    var_t0 = 0;
    var_a2 = D_800FD88C;
    var_a3 = 0;
    if (D_800FD884 > 0) {
        var_v1 = var_a2 + 0x10;
        do {
            if (((*(s32 *)((char *)(var_v1) + 0x34)) == arg0) && ((*(s32 *)((char *)(var_v1) + 0)) == -1)) {
                if (!(*(s32 *)var_a2 & 1)) {
                    (*(s32 *)((char *)(var_v1) + 0xC)) = var_t1;
                    (*(s32 *)((char *)(var_v1) + 0)) = (s32)arg1;
                } else {
                    (*(s32 *)((char *)(var_v1) + 0xC)) = 1;
                    *(s32 *)var_a2 &= ~1;
                    (*(s32 *)((char *)(var_v1) + 0)) = 0;
                }
                var_a3 += 1;
            }
            var_t0 += 1;
            var_v1 += 0x13C;
            var_a2 += 0x13C;
        } while (var_t0 < D_800FD884);
    }
    return var_a3;
}
