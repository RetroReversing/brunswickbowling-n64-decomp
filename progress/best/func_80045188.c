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
extern s32 D_8008F24C;

void func_80045188(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u8 arg5, u8 arg6, u8 arg7, s32 arg8) {
    M2C_FIELD(arg0, s32 *, 4) = 9;
    func_80045050(arg0, D_8008F24C, arg3, arg4, arg5 & 0xFF, arg6 & 0xFF, arg7 & 0xFF, arg8, 0);
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
