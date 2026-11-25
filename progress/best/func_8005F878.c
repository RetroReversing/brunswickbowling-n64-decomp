/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

M2C_UNK func_8005F2A4();                            /* extern */
s32 func_8005FA78(u32);                             /* extern */
u32 func_80060D50();                                /* extern */
s32 func_80060D60();                                /* extern */
M2C_UNK osAiSetNextBuffer(s32, s32);                    /* extern */
s32 alAudioFrame(s32, s32 *, s32, s32);            /* extern */
s32 func_80065630(s32);                             /* extern */
extern M2C_UNK D_80002570;
extern M2C_UNK D_8007AF50;
extern void *D_800978EC;
extern void *D_800978F0;
extern s32 D_800A5D04;
extern s32 D_800A5D08;

void func_8005F878(void) {
    s32 sp10;
    s32 sp14;
    M2C_UNK *sp18;
    M2C_UNK *sp1C;
    s32 sp20;
    s32 temp_a0;
    s32 temp_s0;
    s32 var_s1;
    u32 temp_s2;
    void *temp_s0_2;

    sp18 = &D_80002570;
    sp1C = &D_8007AF50;
    sp10 = D_800A5D08;
    var_s1 = 0;
    M2C_FIELD(D_800978EC, M2C_UNK (**)(void *), 0)(D_800978EC);
loop_1:
    M2C_FIELD(D_800978EC, M2C_UNK (**)(), 4)();
    temp_s0 = func_80060D60();
    temp_s2 = func_80060D50() >> 2;
    if (temp_s0 & 0x80000000) {
        goto loop_1;
    }
    func_8005F2A4();
    if ((D_800978F0 != NULL) & (sp20 != 0)) {
        osAiSetNextBuffer(M2C_FIELD(D_800978F0, s32 *, 0), M2C_FIELD(D_800978F0, s32 *, 4) * 4);
    }
    temp_s0_2 = D_800A5D04 + (var_s1 * 8);
    M2C_FIELD(temp_s0_2, s32 *, 4) = func_8005FA78(temp_s2);
    temp_a0 = alAudioFrame(D_800A5D08, &sp20, func_80065630(M2C_FIELD(temp_s0_2, s32 *, 0)), M2C_FIELD(temp_s0_2, s32 *, 4));
    if (sp20 != 0) {
        sp14 = ((s32) (temp_a0 - D_800A5D08) >> 3) * 8;
        M2C_FIELD(D_800978EC, M2C_UNK (**)(s32 *), 8)(&sp10);
        D_800978F0 = temp_s0_2;
    }
    var_s1 = (var_s1 + 1) % 3;
    goto loop_1;
}
