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

M2C_UNK func_800162E0(void **, void *, M2C_UNK);    /* extern */
M2C_UNK func_8001BDE4(M2C_UNK *, s32);              /* extern */
M2C_UNK func_8001BE7C(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_8001C08C(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_800375C0(M2C_UNK *, M2C_UNK);          /* extern */
extern void *D_80082780;
extern M2C_UNK D_80082F78;
extern M2C_UNK D_8008C894;
extern M2C_UNK D_8008C8C4;

s32 func_80023FBC(void *arg0, s32 arg2) {
    void *sp10;
    void *sp18;
    void *sp20;
    void *sp28;
    void *sp30;
    s32 temp_a1;
    void *temp_a0;
    void *temp_a1_2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1;

    switch (arg2) {
    case 0x20B:
        func_800375C0(&D_8008C8C4, 1);
        func_8001C08C(&D_80082F78, 0);
block_5:
        func_8001BE7C(&D_80082F78, 0);
        return 0;
    case 0x209:
    case 0x20A:
        func_800375C0(&D_8008C894, 1);
        func_8001C08C(&D_80082F78, 0);
        temp_a1 = M2C_FIELD(arg0, s32 *, 0x34);
        if (temp_a1 != 0) {
            func_8001BDE4(&D_80082F78, temp_a1);
        }
        goto block_5;
    case 0x20F:
        sp10 = D_80082780;
        temp_a1_2 = M2C_FIELD(D_80082780, void **, 4);
        sp18 = D_80082780;
        sp10 = temp_a1_2;
        temp_a0 = M2C_FIELD(arg0, void **, 8);
        sp20 = temp_a0;
        if (D_80082780 == temp_a0) {
            sp28 = temp_a1_2;
            sp10 = M2C_FIELD(temp_a1_2, void **, 4);
        }
block_11:
        func_800162E0(&D_80082780, sp10, 1);
        return 0;
    case 0x210:
        sp10 = D_80082780;
        temp_v1 = M2C_FIELD(D_80082780, void **, 0);
        temp_v0 = arg0 + 8;
        sp18 = temp_v0;
        sp10 = temp_v1;
        if (temp_v1 == temp_v0) {
            temp_v0_2 = M2C_FIELD(arg0, void **, 8);
            sp30 = temp_v0_2;
            sp10 = temp_v0_2;
        }
        goto block_11;
    default:
        return 1;
    }
}
