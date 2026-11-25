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

M2C_UNK func_8001B858(void *);                      /* extern */
M2C_UNK func_8001C210(void *, void **);             /* extern */
M2C_UNK func_80025484(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80034244(M2C_UNK *);                   /* extern */
extern M2C_UNK D_8008BA90;

void func_8001BF14(void *arg0) {
    void *sp18;
    void *sp20;
    void *sp28;
    void *sp30;
    void *sp38;
    void *temp_a0;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;

    temp_v0 = M2C_FIELD(arg0, void **, 0x14);
    M2C_FIELD(M2C_FIELD(temp_v0, void **, 0), void ***, 4) = (void **) M2C_FIELD(temp_v0, void ***, 4);
    *M2C_FIELD(temp_v0, void ***, 4) = M2C_FIELD(temp_v0, void **, 0);
    func_80025484(0, -1, -1, 0);
    temp_v0_2 = M2C_FIELD(arg0, void **, 0x18);
    M2C_FIELD(arg0, void **, 0x18) = NULL;
    M2C_FIELD(arg0, void **, 0x14) = temp_v0_2;
    if (temp_v0_2 != NULL) {
        temp_v0_3 = M2C_FIELD(temp_v0_2, void **, 0x10);
        M2C_FIELD(temp_v0_3, M2C_UNK (**)(void *), 0x4C)(temp_v0_2 + M2C_FIELD(temp_v0_3, s16 *, 0x48));
        temp_a0 = M2C_FIELD(arg0, void **, 0x14);
        sp38 = arg0 + 8;
        sp18 = temp_a0;
        sp30 = temp_a0;
        sp28 = temp_a0;
        func_8001C210(temp_a0, &sp38);
        sp20 = sp28;
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x30) != 0) {
        func_8001B858(arg0);
        return;
    }
    func_80034244(&D_8008BA90);
}
