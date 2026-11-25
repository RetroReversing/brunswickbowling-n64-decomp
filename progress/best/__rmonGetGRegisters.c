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

void *__rmonGetTCB(s32);                           /* extern */
M2C_UNK __rmonSendReply(M2C_UNK *, M2C_UNK, M2C_UNK, void *); /* extern */

s32 __rmonGetGRegisters(void *arg0) {
    M2C_UNK sp10;
    u8 sp14;
    s16 sp16;
    s32 sp1C;
    s32 sp20;
    M2C_UNK sp80;
    s32 spA8;
    s32 spAC;
    s32 spB0;
    M2C_UNK *var_a2_2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_v0;
    u8 *var_a2;
    void *temp_v0;
    void *var_a0;
    void *var_a0_2;

    sp1C = M2C_FIELD(arg0, s32 *, 0xC);
    sp16 = 0;
    sp14 = M2C_FIELD(arg0, u8 *, 4);
    var_v0 = -2;
    if (M2C_FIELD(arg0, u8 *, 9) == 0) {
        temp_v0 = __rmonGetTCB(M2C_FIELD(arg0, s32 *, 0xC));
        var_a1 = 1;
        if (temp_v0 == NULL) {
            return -2;
        }
        var_a0 = temp_v0 + 0x20;
        var_a2 = &sp14;
        do {
            temp_v1 = M2C_FIELD(var_a0, s32 *, 4);
            var_a1 += 1;
            var_a0 += 8;
            M2C_FIELD(var_a2, s32 *, 0x10) = temp_v1;
            var_a2 += 4;
        } while (var_a1 < 0x1A);
        var_a1_2 = 0x1C;
        var_a0_2 = temp_v0 + 0xE8;
        var_a2_2 = &sp80;
        do {
            temp_v1_2 = M2C_FIELD(var_a0_2, s32 *, 4);
            var_a1_2 += 1;
            var_a0_2 += 8;
            M2C_FIELD(var_a2_2, s32 *, 0x10) = temp_v1_2;
            var_a2_2 += 4;
        } while (var_a1_2 < 0x22);
        spA8 = M2C_FIELD(temp_v0, s32 *, 0x120);
        spAC = M2C_FIELD(temp_v0, s32 *, 0x11C);
        sp20 = 0;
        spB0 = M2C_FIELD(temp_v0, s32 *, 0x118);
        __rmonSendReply(&sp10, 0xA4, 1, temp_v0);
        var_v0 = 0;
        /* Duplicate return node #8. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
