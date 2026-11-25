/* Partial candidate from function #408021895361 in project #95; rechecked locally. */
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern s32 D_800FD884;
extern s32 D_800FD88C;

s32 func_8005BB30(s32 arg0, s32 arg1) {
    s32 *__base_D_800FD884;
    u8 __repair_frame[8];
    s32 var_a1;
    s32 var_a2;
    s32 var_a3;
    void *var_v1;

    var_a1 = arg1;
    if (arg0 == 0) {
        return 0;
    }
    if (var_a1 <= 0) {
        var_a1 = 1;
    } else if (var_a1 >= 0x101) {
        var_a1 = 0x100;
    }
    var_a2 = 0;
    var_a3 = 0;
    __base_D_800FD884 = &D_800FD884;
    if ((*(&D_800FD884)) > 0) {
        var_v1 = D_800FD88C + 0x9C;
        __repair_rows: {/*__repair_loop_weight*/do {
            var_a3 += 1;} while (0);
            if ((*(s32 *)((char *)(var_v1) + -0x58)) == arg0) {
                var_a2 += 1;
                (*(s16 *)((char *)(var_v1) + -4)) = var_a1;
                (*(s16 *)((char *)(var_v1) + 0)) = (s16) ((s32) ((*(u16 *)((char *)(var_v1) + 0xC)) * var_a1) >> 7);
            }
            var_v1 += 0x13C;
        }
if (var_a3 < (*__base_D_800FD884)) goto __repair_rows;
    }
    return var_a2;
}
