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

void func_800223C4(void *arg0) {
    void *sp10;
    s32 sp18;
    s32 temp_v0_2;
    void *temp_a0;
    void *temp_v0;
    void *temp_v0_3;

    temp_v0 = M2C_FIELD(arg0, void **, 0x10);
    M2C_FIELD(temp_v0, M2C_UNK (**)(void *), 0x2C)(arg0 + M2C_FIELD(temp_v0, s16 *, 0x28));
    sp10 = arg0 + 8;
loop_1:
    temp_v0_2 = M2C_FIELD(arg0, s32 *, 8);
    sp18 = temp_v0_2;
    if (sp10 != temp_v0_2) {
        temp_a0 = M2C_FIELD(sp10, void **, 4);
        sp10 = temp_a0;
        temp_v0_3 = M2C_FIELD(temp_a0, void **, 0x10);
        M2C_FIELD(temp_v0_3, M2C_UNK (**)(void *), 0x3C)(temp_a0 + M2C_FIELD(temp_v0_3, s16 *, 0x38));
        goto loop_1;
    }
}
