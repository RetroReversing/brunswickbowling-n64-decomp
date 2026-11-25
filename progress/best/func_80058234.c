/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
extern s32 D_800A58F0;
extern u8 D_800A5A20;

u8 *func_80058234(u32 arg0, u32 arg1) {
    u32 temp_hi;
    u32 var_a0;
    char *var_a2;

    var_a0 = arg0;
    var_a2 = &D_800A5A20;
    do {
        var_a2 -= 1;
        temp_hi = var_a0 % arg1;
        var_a0 = var_a0 / arg1;
        *(u8 *)var_a2 = *(s32 *)(D_800A58F0 + temp_hi);
    } while (var_a0 != 0);
    return var_a2;
}
