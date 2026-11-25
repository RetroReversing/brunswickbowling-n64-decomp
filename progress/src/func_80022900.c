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

M2C_UNK func_80011664(M2C_UNK *, s32, M2C_UNK);     /* extern */
M2C_UNK func_80022B18(s32);                         /* extern */
extern M2C_UNK D_80083BA8;

void func_80022900(s32 arg0) {
    func_80011664(&D_80083BA8, arg0 + 0xC, 1);
    func_80011664(&D_80083BA8, arg0 + 0x1C, 4);
    func_80011664(&D_80083BA8, arg0 + 0x2C, 4);
    func_80011664(&D_80083BA8, arg0 + 0x3C, 4);
    func_80011664(&D_80083BA8, arg0 + 0x4C, 4);
    func_80011664(&D_80083BA8, arg0 + 0x6C, 1);
    func_80011664(&D_80083BA8, arg0 + 0x7C, 2);
    func_80011664(&D_80083BA8, arg0 + 0x8C, 2);
    func_80022B18(arg0);
}
