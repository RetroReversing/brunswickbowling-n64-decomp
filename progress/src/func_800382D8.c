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

s32 func_8003792C();
extern char D_8008C6B8[];
extern char D_8008C6FC[];
extern char D_8008C754[];
extern char D_8008C798[];
extern char D_8008C7DC[];

void func_800382D8(s32 arg0, s32 arg1) {
    func_8003792C(D_8008C6B8);
    func_8003792C(D_8008C6B8 + 0x16, arg1);
    func_8003792C(D_8008C6B8 + 0x2C, arg1);
    func_8003792C(D_8008C6FC, arg1);
    func_8003792C(D_8008C6FC + 0x16, arg1);
    func_8003792C(D_8008C6FC + 0x2C, arg1);
    func_8003792C(D_8008C6FC + 0x42, arg1);
    func_8003792C(D_8008C754, arg1);
    func_8003792C(D_8008C754 + 0x16, arg1);
    func_8003792C(D_8008C754 + 0x2C, arg1);
    func_8003792C(D_8008C798, arg1);
    func_8003792C(D_8008C798 + 0x16, arg1);
    func_8003792C(D_8008C798 + 0x2C, arg1);
    func_8003792C(D_8008C7DC, arg1);
    func_8003792C(D_8008C7DC + 0x16, arg1);
    func_8003792C(D_8008C7DC + 0x2C, arg1);
}
