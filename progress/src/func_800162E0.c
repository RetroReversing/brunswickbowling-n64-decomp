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

M2C_UNK func_800375C0(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK D_8008C87C;

void func_800162E0(void **arg0, void *arg1, s32 arg2) {
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1;

    temp_v1 = *arg0;
    if (temp_v1 != arg1) {
        if (temp_v1 != NULL) {
            temp_v0 = M2C_FIELD(temp_v1, void **, 0x10);
            M2C_FIELD(temp_v0, M2C_UNK (**)(void *, M2C_UNK), 0x44)(temp_v1 + M2C_FIELD(temp_v0, s16 *, 0x40), 0);
        }
        if (arg1 != NULL) {
            temp_v0_2 = M2C_FIELD(arg1, void **, 0x10);
            M2C_FIELD(temp_v0_2, M2C_UNK (**)(void *, M2C_UNK), 0x44)(arg1 + M2C_FIELD(temp_v0_2, s16 *, 0x40), 1);
            if (arg2 != 0) {
                func_800375C0(&D_8008C87C, 1);
            }
        }
        *arg0 = arg1;
    }
}
