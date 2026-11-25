/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
s32 func_8005C0A4(s8 *);                            /* extern */
extern s32 D_800A5A80;
extern s32 D_800A5A84;

void func_8005BDB0(s32 arg0) {
    s32 *__base_D_800A5A84;
    struct {
        s8 f10;
        s32 f14;
    } __repair_frame;
    s32 var_v0;

    var_v0 = 1;
    if (arg0 == 0) {
        __repair_frame.f10 = 2;
        __base_D_800A5A84 = &D_800A5A84;
        __repair_frame.f14 = (*__base_D_800A5A84);
        (*(&D_800A5A84)) = (*__base_D_800A5A84);
        var_v0 = func_8005C0A4(&__repair_frame);
    }
    if (var_v0 != 0) {
        D_800A5A80 = arg0;
    }
}
