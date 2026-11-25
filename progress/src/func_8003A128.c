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
M2C_UNK func_80039300(M2C_UNK *);                   /* extern */
extern M2C_UNK D_8008CCB0;
extern M2C_UNK D_8008CCF0;
extern M2C_UNK D_8008CD30;
extern M2C_UNK D_8008CD70;
extern M2C_UNK D_8008CDB0;
extern M2C_UNK D_8008CDF0;
extern M2C_UNK D_8008CE30;
extern M2C_UNK D_8008CE70;
extern M2C_UNK D_8008CEB0;
extern M2C_UNK D_8008CEEC;
extern M2C_UNK D_8008CF28;

void func_8003A128(void) {
    func_80036DA4(&D_8008CCB0);
    func_80036DA4(&D_8008CCF0);
    func_80036DA4(&D_8008CD30);
    func_80036DA4(&D_8008CD70);
    func_80036DA4(&D_8008CDB0);
    func_80036DA4(&D_8008CDF0);
    func_80036DA4(&D_8008CE30);
    func_80036DA4(&D_8008CE70);
    func_80039300(&D_8008CEB0);
    func_80039300(&D_8008CEEC);
    func_80039300(&D_8008CF28);
}
