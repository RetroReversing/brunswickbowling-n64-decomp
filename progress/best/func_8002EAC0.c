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

M2C_UNK func_8001C210(void *, void **);             /* extern */

void func_8002EAC0(void *arg0, void *arg1) {
    void *sp18;
    void *sp20;
    void *sp28;
    void *sp30;
    void *sp38;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v1;
    void *temp_v1_2;

    temp_v1 = M2C_FIELD(arg0, void **, 0x18);
    if (temp_v1 != NULL) {
        temp_v0 = M2C_FIELD(temp_v1, void **, 0x10);
        M2C_FIELD(temp_v0, M2C_UNK (**)(void *), 0x4C)(temp_v1 + M2C_FIELD(temp_v0, s16 *, 0x48));
        temp_v0_2 = M2C_FIELD(arg0, void **, 0x18);
        M2C_FIELD(M2C_FIELD(temp_v0_2, void **, 0), void ***, 4) = (void **) M2C_FIELD(temp_v0_2, void ***, 4);
        *M2C_FIELD(temp_v0_2, void ***, 4) = M2C_FIELD(temp_v0_2, void **, 0);
    }
    M2C_FIELD(arg0, void **, 0x18) = arg1;
    if (arg1 != NULL) {
        sp18 = arg1;
        sp30 = arg1;
        sp28 = arg1;
        sp38 = arg0 + 8;
        func_8001C210(arg1, &sp38);
        sp20 = sp28;
        temp_v1_2 = M2C_FIELD(arg0, void **, 0x18);
        temp_v0_3 = M2C_FIELD(temp_v1_2, void **, 0x10);
        M2C_FIELD(temp_v0_3, M2C_UNK (**)(void *, void *), 0x44)(temp_v1_2 + M2C_FIELD(temp_v0_3, s16 *, 0x40), sp18);
    }
}
