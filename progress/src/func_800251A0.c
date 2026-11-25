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

s32 func_80045050();
extern char D_8008ED80[];

void func_800251A0(s32 arg0, s32 arg1) {
    func_80045050(D_8008ED80, 0, arg1, 0x280, 0, 1, 0xFF, 0xE0, 0x90, 0, 0);
    func_80045050(D_8008ED80, 0, arg1 + 1, 0, 0x280, 2, 0xC8, 0x90, 0, 0, 0);
    func_80045050(D_8008ED80, 0, arg1 + 3, 0, 0x280, 1, 0x78, 0x50, 0, 0, 0);
}
