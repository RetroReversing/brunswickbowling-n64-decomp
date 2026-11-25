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

M2C_UNK func_800137B0(void *, M2C_UNK *, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_800235F0(s32, s32);                    /* extern */
M2C_UNK func_80023634(s32, M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK *, s32); /* extern */
extern M2C_UNK D_80074CD8;
extern s32 D_8007E4E0;
extern u8 D_8007F631;
extern M2C_UNK D_80081AD0;
extern M2C_UNK D_80081B20;
extern M2C_UNK D_80083160;
extern M2C_UNK D_80083210;
extern M2C_UNK D_800833B0;
extern M2C_UNK D_8008B044;
extern s32 D_8008B3CC;

void func_8001C920(s32 arg0) {
    M2C_UNK *var_v0;
    s32 var_a1;
    s32 var_v1;
    void *temp_a0;

    var_a1 = 0x10;
    if ((u8) D_8007F631 < 7U) {
        var_a1 = 9;
    }
    M2C_FIELD(&D_80083160, s32 *, 0x1C) = var_a1;
    func_800235F0(arg0, var_a1);
    var_v1 = 0;
    if ((M2C_FIELD((&D_80081AD0)[D_8007E4E0], s8 *, 0x2F) != 0) || (D_8008B3CC != 0)) {
        var_v1 = 1;
    }
    if (var_v1 != 0) {
        var_v0 = &D_800833B0;
    } else {
        var_v0 = &D_80083210;
    }
    func_80023634(arg0, &D_80074CD8, &D_80083160, 3, var_v0, 0);
    M2C_FIELD(&D_80081B20, s32 *, 0x40) = 2;
    temp_a0 = &D_80081B20 + 0x4C;
    M2C_FIELD(temp_a0, s32 *, 0x40) = 2;
    if ((u8) D_8007F631 < 7U) {
        func_800137B0(temp_a0, &D_8008B044, -1, -1, 2);
    }
}
