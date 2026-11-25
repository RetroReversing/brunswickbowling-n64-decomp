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
M2C_UNK func_800233FC(void *, s16);                 /* extern */
extern void *D_80082780;
extern s32 D_80089820;
extern s32 D_80089824;
extern s32 D_8008E9E0;

void func_800238B4(void *arg0) {
    void *sp10;
    void *sp18;
    void *sp20;
    void *sp28;
    void *sp30;
    s16 temp_s0;
    void *temp_a0;
    void *temp_a1;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1;
    void *var_v0;

    D_80089820 = 1;
    sp10 = D_80082780;
    temp_a1 = M2C_FIELD(arg0, void **, 0x10);
    temp_s0 = M2C_FIELD(arg0, s16 *, 0x4A);
    D_80089824 = D_8008E9E0;
    if (M2C_FIELD(temp_a1, s32 (**)(void *, void *, void **), 0x74)(arg0 + M2C_FIELD(temp_a1, s16 *, 0x70), temp_a1, &D_80082780) < temp_s0) {
        temp_v0 = M2C_FIELD(arg0, void **, 8);
        sp18 = temp_v0;
        if (sp10 == temp_v0) {
            if (M2C_FIELD(arg0, s16 *, 0x4C) > 0) {
                func_800162E0(&D_80082780, NULL, 1);
                M2C_FIELD(arg0, s16 *, 0x4C) = (s16) ((u16) M2C_FIELD(arg0, s16 *, 0x4C) - 1);
                func_800233FC(arg0, M2C_FIELD(arg0, s16 *, 0x20));
            }
        } else {
            var_v0 = M2C_FIELD(sp10, void **, 4);
            sp20 = sp10;
            goto block_7;
        }
    } else {
        temp_v1 = sp10;
        temp_a0 = M2C_FIELD(temp_v1, void **, 4);
        sp18 = temp_v1;
        sp10 = temp_a0;
        temp_v0_2 = M2C_FIELD(arg0, void **, 8);
        sp28 = temp_v0_2;
        if (temp_v1 == temp_v0_2) {
            var_v0 = M2C_FIELD(temp_a0, void **, 4);
            sp30 = temp_a0;
block_7:
            sp10 = var_v0;
        }
    }
    func_800162E0(&D_80082780, sp10, 1);
}
