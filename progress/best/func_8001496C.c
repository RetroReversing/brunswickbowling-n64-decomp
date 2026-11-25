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

void func_8001496C(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10, s32 arg11, s32 arg12, s32 arg13, s32 arg14, s32 arg15, s32 arg16) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = arg2;
    M2C_FIELD(arg0, s32 *, 8) = arg4;
    M2C_FIELD(arg0, s32 *, 0xC) = arg5;
    M2C_FIELD(arg0, s32 *, 0x10) = arg6;
    M2C_FIELD(arg0, s32 *, 0x14) = arg7;
    M2C_FIELD(arg0, s32 *, 0x18) = arg8;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg9;
    M2C_FIELD(arg0, s32 *, 0x20) = arg10;
    M2C_FIELD(arg0, s32 *, 0x24) = arg11;
    M2C_FIELD(arg0, s32 *, 0x28) = arg12;
    M2C_FIELD(arg0, s32 *, 0x2C) = arg13;
    M2C_FIELD(arg0, s32 *, 0x30) = arg14;
    M2C_FIELD(arg0, s32 *, 0x34) = arg15;
    M2C_FIELD(arg0, s8 *, 0x38) = (s8) arg16;
}
