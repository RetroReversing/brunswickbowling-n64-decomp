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

M2C_UNK func_80037264(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
extern M2C_UNK D_8008C0D0;

void func_8002E54C(s32 *arg0) {
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;

    temp_v1 = *arg0;
    if (temp_v1 > 0) {
        func_80037264(&D_8008C0D0, 0, 8, 0, ((temp_v1 - 1) * 7) + 0xF, 7);
        temp_v1_2 = *arg0;
        temp_v0 = temp_v1_2 - 1;
        *arg0 = temp_v0;
        if (temp_v0 > 0) {
            func_80037264(&D_8008C0D0, 0, 1, 0, ((temp_v1_2 - 2) * 7) + 0xF, 7);
        }
    }
}
