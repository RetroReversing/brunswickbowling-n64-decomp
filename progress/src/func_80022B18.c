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

M2C_UNK func_80013490();                            /* extern */
M2C_UNK func_800134D0();                            /* extern */
M2C_UNK func_800135C4();                            /* extern */
M2C_UNK func_800136FC();                            /* extern */
M2C_UNK func_80013758();                            /* extern */
M2C_UNK func_8003F780(M2C_UNK *, s32);              /* extern */
extern M2C_UNK D_8008E9B0;

void func_80022B18(void *arg0) {
    func_8003F780(&D_8008E9B0, M2C_FIELD(arg0, s32 *, 0x8C));
    func_80013758();
    func_80013490();
    func_800134D0();
    func_800136FC();
    func_800135C4();
    M2C_FIELD(arg0, s32 *, 0x98) = (s32) M2C_FIELD(arg0, s32 *, 0x7C);
    M2C_FIELD(arg0, s32 *, 0x9C) = (s32) M2C_FIELD(arg0, s32 *, 0x6C);
}
