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

M2C_UNK func_80003390();                            /* extern */
M2C_UNK func_8000F784();                            /* extern */
M2C_UNK func_800103D4();                            /* extern */
M2C_UNK func_80010524();                            /* extern */
M2C_UNK func_800107E0();                            /* extern */
extern s32 D_8007B210;
extern s32 D_8007C400;
extern s32 D_8007CCDC;
extern s32 D_8009913C;

s32 func_8000FCD0(void) {
    s32 temp_v0;

    func_800103D4();
    func_80010524();
    func_800107E0();
    func_80003390();
    temp_v0 = D_8009913C - 1;
    D_8009913C = temp_v0;
    if ((temp_v0 == 0) && (func_8000F784(), D_8009913C = 1, (D_8007C400 != 0))) {
        if ((D_8007B210 - D_8007C400) >= 0x1E0) {
            D_8007CCDC = 1;
        }
    }
    return D_8007CCDC == 0;
}
