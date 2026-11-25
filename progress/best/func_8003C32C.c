/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O1, tried by autopilot */
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

M2C_UNK func_800235F0();                            /* extern */
M2C_UNK func_80023634(s32, M2C_UNK *, M2C_UNK *, s32, M2C_UNK *, s32); /* extern */
M2C_UNK func_8003C090(s32);                         /* extern */
M2C_UNK func_8003C1EC(s32, M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK D_80078740;
extern s32 D_8007DA40;
extern M2C_UNK D_80083060;
extern M2C_UNK D_8008CEB0;
extern M2C_UNK D_8008CEEC;
extern M2C_UNK D_8008D8EC;
extern M2C_UNK D_8008D9EC;
extern M2C_UNK D_8008E560;
extern M2C_UNK D_8008E670;

void func_8003C32C(s32 arg0) {
    M2C_UNK *var_a0;
    M2C_UNK *var_s0;
    M2C_UNK *var_v1;
    s32 var_a1;

    func_800235F0();
    if (arg0 == &D_8008E560) {
        var_s0 = NULL;
    } else {
        var_s0 = &D_80083060;
    }
    func_8003C090(arg0);
    func_80023634(arg0, &D_80078740, &D_8008E670, D_8007DA40, var_s0, 0);
    var_a1 = 0;
    var_v1 = &D_8008D8EC;
    var_a0 = &D_8008D9EC;
    do {
        M2C_FIELD(var_v1, M2C_UNK **, 0xC) = var_a0;
        M2C_FIELD(var_v1, s32 *, 0) = 5;
        M2C_FIELD(var_v1, s32 *, 4) = 1;
        M2C_FIELD(var_v1, M2C_UNK **, 8) = &D_8008CEB0;
        var_v1 += 0x10;
        var_a1 += 1;
        var_a0 += 8;
    } while (var_a1 < 9);
    M2C_FIELD(&D_8008D8EC, M2C_UNK **, 8) = &D_8008CEEC;
    M2C_FIELD(&D_8008D8EC, M2C_UNK **, 0x18) = &D_8008CEB0;
    M2C_FIELD(&D_8008D8EC, s32 *, 0) = 0;
    M2C_FIELD(&D_8008D8EC, s32 *, 0x10) = 7;
    func_8003C1EC(arg0, &D_8008D8EC, &D_8008CEB0, 1);
}
