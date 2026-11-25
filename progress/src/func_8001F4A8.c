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

M2C_UNK func_8001D190(M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK *, s32, M2C_UNK *); /* extern */
void *func_800205F8(M2C_UNK *, M2C_UNK);            /* extern */
extern M2C_UNK D_80075744;
extern M2C_UNK D_80083280;
extern M2C_UNK D_80083430;
extern M2C_UNK D_800838A4;
extern M2C_UNK D_80083BA8;
extern s32 D_800993D0;
extern M2C_UNK func_8001F468;

s32 func_8001F4A8(s32 arg0) {
    M2C_UNK *var_a3;
    s32 var_v1;
    void *temp_v0;

    temp_v0 = func_800205F8(&D_80083BA8, 1);
    var_v1 = 0;
    if (M2C_FIELD(temp_v0, u8 *, 0) == 0) {
        var_v1 = M2C_FIELD(temp_v0, u8 *, 1) == 0;
    }
    if (var_v1 != 0) {
        var_a3 = &D_80083430;
    } else {
        var_a3 = &D_800838A4;
    }
    func_8001D190(&D_80083280, &D_80075744, &D_800838A4, var_a3, 0, &func_8001F468);
    D_800993D0 = arg0;
    return 1;
}
