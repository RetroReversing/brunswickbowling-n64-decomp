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

M2C_UNK func_800260E8();                            /* extern */
M2C_UNK func_800263F0();                            /* extern */
M2C_UNK func_80039738(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, s32, M2C_UNK *); /* extern */
extern M2C_UNK D_800770C4;
extern s32 D_8008B074;
extern M2C_UNK D_8008CEB0;

void func_8002F470(void) {
    if (D_8008B074 != 0) {
        func_800260E8();
    } else {
        func_800263F0();
    }
    func_80039738(&D_8008CEB0, 7, 2, 0x253, 0xCF, &D_800770C4);
}
