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

M2C_UNK func_80036DA4(M2C_UNK *);                   /* extern */
extern M2C_UNK D_8008E860;
extern M2C_UNK D_8008E8A0;
extern M2C_UNK D_8008E8E0;
extern M2C_UNK D_8008E920;
extern M2C_UNK D_8008E960;

void func_8003F730(void) {
    func_80036DA4(&D_8008E860);
    func_80036DA4(&D_8008E8A0);
    func_80036DA4(&D_8008E8E0);
    func_80036DA4(&D_8008E920);
    func_80036DA4(&D_8008E960);
}
