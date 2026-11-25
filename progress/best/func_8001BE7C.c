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

M2C_UNK func_8001C210(void *, s32 *);               /* extern */

void func_8001BE7C(void *arg0, void *arg1) {
    void *sp18;
    void *sp20;
    void *sp28;
    void *sp30;
    s32 sp38;
    void *temp_a0;
    void *temp_v0;
    void *temp_v0_2;

    if ((sp28 = M2C_FIELD(arg0, void **, 0x1C)) == NULL) {
        M2C_FIELD(arg0, void **, 0x1C) = arg1;
        if (arg1 != NULL) {
            temp_v0 = M2C_FIELD(arg1, void **, 0x10);
            M2C_FIELD(temp_v0, M2C_UNK (**)(void *), 0x4C)(arg1 + M2C_FIELD(temp_v0, s16 *, 0x48));
            temp_a0 = M2C_FIELD(arg0, void **, 0x1C);
            sp18 = temp_a0;
            sp30 = temp_a0;
            sp38 = M2C_FIELD(arg0, s32 *, 8);
            sp28 = temp_a0;
            func_8001C210(temp_a0, &sp38);
            sp20 = sp28;
        }
    } else {
        sp28 = M2C_FIELD(arg0, void **, 0x1C);
        M2C_FIELD(arg0, void **, 0x20) = arg1;
        temp_v0_2 = M2C_FIELD(sp28, void **, 0x10);
        M2C_FIELD(temp_v0_2, M2C_UNK (**)(void *), 0x5C)(sp28 + M2C_FIELD(temp_v0_2, s16 *, 0x58));
    }
}
