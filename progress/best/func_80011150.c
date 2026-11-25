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

M2C_UNK func_80013348();                            /* extern */
M2C_UNK func_80013394(M2C_UNK);                     /* extern */
s32 func_8002AB14(M2C_UNK, s32, s32, s32);          /* extern */
M2C_UNK func_80034244(M2C_UNK *);                   /* extern */
extern s32 D_8007DA40;
extern s32 D_8007DA48;
extern M2C_UNK D_8007F618;
extern M2C_UNK D_8008B3D8;
extern M2C_UNK D_8008BA90;

void func_80011150(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_UNK *var_v0_2;
    s32 *var_v0;
    s32 *var_v1;
    s32 var_a1;
    s32 var_a2;
    s32 var_a3;
    void *var_v1_2;

    var_a1 = arg1;
    var_a2 = arg2;
    var_a3 = arg3;
    if (D_8007DA40 > 0) {
        M2C_FIELD(arg0, s32 *, 0x10) = (s32) D_8007DA40;
        var_v1 = arg0 + 0x18;
        var_v0 = &D_8007DA48;
        do {
            M2C_FIELD(var_v1, s32 *, 0) = M2C_FIELD(var_v0, s32 *, 0);
            M2C_FIELD(var_v1, s32 *, 4) = (s32) M2C_FIELD(var_v0, s32 *, 4);
            M2C_FIELD(var_v1, s32 *, 8) = (s32) M2C_FIELD(var_v0, s32 *, 8);
            M2C_FIELD(var_v1, s32 *, 0xC) = (s32) M2C_FIELD(var_v0, s32 *, 0xC);
            var_v0 += 0x10;
            var_v1 += 0x10;
        } while (var_v0 != (&D_8007DA48 + 0x1C0));
        *var_v1 = *var_v0;
        var_v1_2 = arg0 + 0x1DC;
        var_v0_2 = &D_8007F618;
        do {
            M2C_FIELD(var_v1_2, s32 *, 0) = (s32) M2C_FIELD(var_v0_2, s32 *, 0);
            M2C_FIELD(var_v1_2, s32 *, 4) = (s32) M2C_FIELD(var_v0_2, s32 *, 4);
            M2C_FIELD(var_v1_2, s32 *, 8) = (s32) M2C_FIELD(var_v0_2, s32 *, 8);
            M2C_FIELD(var_v1_2, s32 *, 0xC) = (s32) M2C_FIELD(var_v0_2, s32 *, 0xC);
            var_v0_2 += 4;
            var_v1_2 += 0x10;
        } while (var_v0_2 != (&D_8007F618 + 0x50));
        var_a1 = M2C_FIELD(var_v0_2, s32 *, 0);
        var_a2 = M2C_FIELD(var_v0_2, s32 *, 4);
        var_a3 = M2C_FIELD(var_v0_2, s32 *, 8);
        M2C_FIELD(var_v1_2, s32 *, 0) = var_a1;
        M2C_FIELD(var_v1_2, s32 *, 4) = var_a2;
        M2C_FIELD(var_v1_2, s32 *, 8) = var_a3;
        D_8007DA40 = 0;
    } else {
        M2C_FIELD(arg0, s32 *, 0x10) = -1;
    }
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(&D_8008B3D8, s32 *, 4);
    M2C_FIELD(&D_8008B3D8, s32 *, 4) = func_8002AB14(0xF, var_a1, var_a2, var_a3);
    M2C_FIELD(arg0, s32 *, 4) = 1;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    func_80013348();
    func_80013394(0);
    func_80034244(&D_8008BA90);
}
