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

M2C_UNK func_800115D4(M2C_UNK *, s32, M2C_UNK);     /* extern */
M2C_UNK func_8001161C(M2C_UNK *, s32, M2C_UNK);     /* extern */
M2C_UNK func_800116AC(M2C_UNK *, s32 *, M2C_UNK);   /* extern */
extern M2C_UNK D_80083BA8;
extern M2C_UNK D_8008AE50;
extern M2C_UNK D_8008AE7C;

void func_80012E10(void *arg0) {
    s32 sp10;
    void *temp_v0;
    void *var_v0;

    func_8001161C(&D_80083BA8, arg0 + 0x30, 0xB);
    func_8001161C(&D_80083BA8, arg0 + 0x32, 0xB);
    func_8001161C(&D_80083BA8, arg0 + 0x34, 0xB);
    func_8001161C(&D_80083BA8, arg0 + 0x36, 0xD);
    func_8001161C(&D_80083BA8, arg0 + 0x38, 0xE);
    func_8001161C(&D_80083BA8, arg0 + 0x3A, 9);
    func_8001161C(&D_80083BA8, arg0 + 0x3C, 0xA);
    func_800115D4(&D_80083BA8, arg0 + 0x3E, 6);
    func_800115D4(&D_80083BA8, arg0 + 0x3F, 5);
    func_800115D4(&D_80083BA8, arg0 + 0x40, 5);
    func_800115D4(&D_80083BA8, arg0 + 0x41, 5);
    func_800115D4(&D_80083BA8, arg0 + 0x42, 5);
    func_800116AC(&D_80083BA8, arg0 + 0x28, 1);
    temp_v0 = M2C_FIELD(arg0, void **, 0x48);
    if (temp_v0 != NULL) {
        sp10 = ((s32) -(((s32)temp_v0 - (s32)&D_8008AE7C) * 0x45D1745D) >> 2) + 1;
    } else {
        sp10 = 0;
    }
    func_800116AC(&D_80083BA8, &sp10, 5);
    if (sp10 != 0) {
        var_v0 = (sp10 * 0x2C) + &D_8008AE50;
    } else {
        var_v0 = NULL;
    }
    M2C_FIELD(arg0, void **, 0x48) = var_v0;
}
