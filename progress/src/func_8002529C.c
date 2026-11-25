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

M2C_UNK func_800251A0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_80037310(M2C_UNK *);                   /* extern */
M2C_UNK func_80039738(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_80045050(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32, s32, s32); /* extern */
extern s32 D_8008B3BC;
extern M2C_UNK D_8008C250;
extern M2C_UNK D_8008C2D0;
extern M2C_UNK D_8008CEEC;
extern M2C_UNK D_8008CF28;
extern s32 D_8008D8E8;
extern M2C_UNK D_8008ED80;

void func_8002529C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_UNK *var_a0;

    D_8008D8E8 = 0;
    func_800251A0(1, 0xD);
    func_800251A0(0, 0x38);
    func_80045050(&D_8008ED80, 0, 0x11, 0, 0x280, 0x27, 0x20, 0x20, 0x40, 0, 0);
    if (arg1 != 0) {
        func_80039738(&D_8008CEEC, 0, 1, 0x140, 0x12, arg1);
    }
    if (arg2 != 0) {
        func_80039738(&D_8008CF28, 0, 1, 0x140, 0x22, arg2);
    }
    if (arg3 != 0) {
        func_80039738(&D_8008CF28, 0, 1, 0x140, 0x2C, arg3);
    }
    if (arg0 != 0) {
        if (D_8008B3BC != 0) {
            var_a0 = &D_8008C250;
        } else {
            var_a0 = &D_8008C2D0;
        }
        M2C_FIELD(var_a0, s16 *, 0x10) = 0x2D;
        M2C_FIELD(var_a0, s16 *, 0x12) = 0xD;
        func_80037310(var_a0);
    }
    func_80045050(&D_8008ED80, 0, 0xCE, 0, 0x280, 0x16, 0x20, 0x20, 0x40, 0, 0);
}
