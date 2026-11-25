/* Partial candidate from function #408021895347 in project #95; rechecked locally. */
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern f64 D_80009240;

void *func_8005AF70(void *arg0, void *arg1) {
    u8 temp_a2;
    u8 temp_a2_2;
    u8 temp_a2_3;
    u8 temp_v1;
    u8 temp_v1_2;
    u8 var_a2;
    
    void *temp_v0;
    void *var_a1;

    var_a2 = (*(u8 *)((char *)(arg1) + 0));
    var_a1 = arg1 + 1;
    if (var_a2 & 0x80) {
        var_a2 = ((var_a2 & 0x7F) << 8) | (*(u8 *)((char *)(arg1) + 1));
        var_a1 += 1;
    }
    temp_v0 = (var_a2 * 7) + (*(s32 *)((char *)((*(void **)((char *)(arg0) + 0x74))) + 0x18));
    var_a2 = (*(u8 *)((char *)(temp_v0) + 0));
    if (var_a2 == 0) {
        var_a2 = 1;
    }
    (*(u8 *)((char *)(arg0) + 0xBF)) = var_a2;
    (*(s32 *)((char *)(arg0) + 0x64)) = (s32) (0x400 / (s32) var_a2);
    (*(u8 *)((char *)(arg0) + 0xC0)) = (u8) (*(u8 *)((char *)(temp_v0) + 1));
    temp_a2 = (*(u8 *)((char *)(temp_v0) + 2));
    (*(u8 *)((char *)(arg0) + 0xC6)) = temp_a2;
    temp_v1 = (*(u8 *)((char *)(temp_v0) + 3));
    (*(u8 *)((char *)(arg0) + 0xC1)) = temp_v1;
    (*(f32 *)((char *)(arg0) + 0x58)) = (f32) ((D_80009240 / (f64) (f32) temp_a2) * (f64) (f32) (temp_v1 - (*(u8 *)((char *)(arg0) + 0xC0))));
    temp_a2_2 = (*(u8 *)((char *)(temp_v0) + 4));
    (*(u8 *)((char *)(arg0) + 0xC7)) = temp_a2_2;
    temp_v1 = (*(u8 *)((char *)(temp_v0) + 5));
    (*(u8 *)((char *)(arg0) + 0xC2)) = temp_v1;
    (*(f32 *)((char *)(arg0) + 0x5C)) = (f32) ((D_80009240 / (f64) (f32) temp_a2_2) * (f64) (f32) (temp_v1 - (*(u8 *)((char *)(arg0) + 0xC1))));
    temp_a2_3 = (*(u8 *)((char *)(temp_v0) + 6));
    (*(f32 *)((char *)(arg0) + 0x60)) = (f32) (D_80009240 / (f64) (f32) ((*(u8 *)((char *)(temp_v0) + 6))));
    (*(u8 *)((char *)(arg0) + 0xC8)) = temp_a2_3;
    return var_a1;
}
