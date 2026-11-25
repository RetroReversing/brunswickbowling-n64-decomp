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

s32 func_80022328(void *arg0) {
    void *sp10;
    s32 sp18;
    s32 temp_s0;
    s32 temp_v0_3;
    void *temp_v0;
    void *temp_v0_2;

    temp_s0 = arg0 + 8;
    sp10 = M2C_FIELD(arg0, void **, 8);
loop_1:
    sp18 = temp_s0;
    if (sp10 != temp_s0) {
        temp_v0_2 = M2C_FIELD(sp10, void **, 0x10);
        temp_v0_3 = M2C_FIELD(temp_v0_2, s32 (**)(void *), 0x14)(sp10 + M2C_FIELD(temp_v0_2, s16 *, 0x10));
        if (temp_v0_3 == 0) {
            return 0;
        }
        if (temp_v0_3 != 2) {
            sp10 = M2C_FIELD(sp10, void **, 0);
            goto loop_1;
        }
        goto block_6;
    }
block_6:
    temp_v0 = M2C_FIELD(arg0, void **, 0x10);
    return M2C_FIELD(temp_v0, s32 (**)(void *), 0x24)(arg0 + M2C_FIELD(temp_v0, s16 *, 0x20));
}
