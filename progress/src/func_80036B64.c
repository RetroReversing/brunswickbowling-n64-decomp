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

M2C_UNK func_8003F358(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_80042A1C(M2C_UNK *);                   /* extern */
M2C_UNK func_80042B04(M2C_UNK *);                   /* extern */
M2C_UNK func_800527A0(M2C_UNK);                     /* extern */
extern M2C_UNK D_80083AF0;
extern M2C_UNK D_8008ED80;

void func_80036B64(s32 arg0) {
    s32 var_s0;

    func_80042B04(&D_8008ED80);
    func_8003F358(&D_80083AF0, 3);
    func_80042A1C(&D_8008ED80);
    func_800527A0(0);
    var_s0 = 0;
    if (arg0 > 0) {
        do {
            func_8003F358(&D_80083AF0, 3);
            func_80042A1C(&D_8008ED80);
            var_s0 += 1;
        } while (var_s0 < arg0);
    }
}
