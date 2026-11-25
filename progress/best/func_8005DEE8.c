/* Partial candidate from function #408021895413 in project #95; rechecked locally. */
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern f64 D_800092E0;

void *func_8005DEE8(void *arg0, void *arg1) {
    u8 temp_a2;
    u8 temp_a2_2;
    register u8 temp_a2_3;
    u8 temp_v1;
    u8 temp_v1_2;
    u8 var_a2;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_a1_3;
    void *temp_a1_4;
    void *temp_a1_5;
    f64 *__base_D_800092E0;

    __base_D_800092E0 = &D_800092E0;

    var_a2 = (*(u8 *)((char *)(arg1) + 0));
    temp_a1_2 = arg1 + 1;
    if (var_a2 == 0) {
        var_a2 = 1;
    }
    (*(u8 *)((char *)(arg0) + 0xBF)) = var_a2;
    (*(s32 *)((char *)(arg0) + 0x64)) = (s32) (0x400 / var_a2);
    temp_a1_3 = temp_a1_2 + 1;
    (*(u8 *)((char *)(arg0) + 0xC0)) = (u8) (*(u8 *)((char *)(arg1) + 1));
    temp_a2 = (*(u8 *)((char *)(temp_a1_2) + 1));
    temp_a1_4 = temp_a1_3 + 1;
    (*(u8 *)((char *)(arg0) + 0xC6)) = temp_a2;
    temp_v1 = (*(u8 *)((char *)(temp_a1_3) + 1));
    temp_a1_5 = temp_a1_4 + 1;
    (*(f32 *)((char *)(arg0) + 0x58)) = (f32) (((*__base_D_800092E0) / (f64) (f32) temp_a2) * (f64) (f32) (temp_v1 - (*(u8 *)((char *)(arg0) + 0xC0))));
    (*(u8 *)((char *)(arg0) + 0xC1)) = temp_v1;
    temp_a1 = temp_a1_5 + 1;
    temp_a2_2 = (*(u8 *)((char *)(temp_a1_4) + 1));
    (*(u8 *)((char *)(arg0) + 0xC7)) = temp_a2_2;
    temp_v1 = (*(u8 *)((char *)(temp_a1_5) + 1));
    (*(u8 *)((char *)(arg0) + 0xC2)) = temp_v1;
    (*(f32 *)((char *)(arg0) + 0x5C)) = (f32) (((*__base_D_800092E0) / (f64) (f32) temp_a2_2) * (f64) (f32) (temp_v1 - (*(u8 *)((char *)(arg0) + 0xC1))));
    (*(u8 *)((char *)(arg0) + 0xC8)) = temp_a2_3;
    temp_a2_3 = (*(u8 *)((char *)(temp_a1) + 1));
    (*(f32 *)((char *)(arg0) + 0x60)) = (f32) ((*__base_D_800092E0) / (f64) (f32) temp_a2_3);
    return temp_a1 + 1 + 1;
}
