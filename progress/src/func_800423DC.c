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

void func_800423DC(s32 arg0, void *arg1, s8 arg2, s8 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10, s32 arg11, s32 arg12, s32 arg13, s32 arg14, s32 arg15, s32 arg16, s32 arg17, s32 arg18, s32 arg19) {
    M2C_FIELD(arg1, s8 *, 4) = arg2;
    M2C_FIELD(arg1, s8 *, 0) = arg2;
    M2C_FIELD(arg1, s8 *, 5) = arg3;
    M2C_FIELD(arg1, s8 *, 1) = arg3;
    M2C_FIELD(arg1, s8 *, 6) = (s8) arg4;
    M2C_FIELD(arg1, s8 *, 2) = (s8) arg4;
    M2C_FIELD(arg1, s8 *, 0xC) = (s8) arg5;
    M2C_FIELD(arg1, s8 *, 8) = (s8) arg5;
    M2C_FIELD(arg1, s8 *, 0xD) = (s8) arg6;
    M2C_FIELD(arg1, s8 *, 9) = (s8) arg6;
    M2C_FIELD(arg1, s8 *, 0xE) = (s8) arg7;
    M2C_FIELD(arg1, s8 *, 0xA) = (s8) arg7;
    M2C_FIELD(arg1, s8 *, 0x10) = (s8) arg8;
    M2C_FIELD(arg1, s8 *, 0x11) = (s8) arg9;
    M2C_FIELD(arg1, s8 *, 0x12) = (s8) arg10;
    M2C_FIELD(arg1, s8 *, 0x1C) = (s8) arg11;
    M2C_FIELD(arg1, s8 *, 0x18) = (s8) arg11;
    M2C_FIELD(arg1, s8 *, 0x1D) = (s8) arg12;
    M2C_FIELD(arg1, s8 *, 0x19) = (s8) arg12;
    M2C_FIELD(arg1, s8 *, 0x1E) = (s8) arg13;
    M2C_FIELD(arg1, s8 *, 0x1A) = (s8) arg13;
    M2C_FIELD(arg1, s8 *, 0x20) = (s8) arg14;
    M2C_FIELD(arg1, s8 *, 0x21) = (s8) arg15;
    M2C_FIELD(arg1, s8 *, 0x22) = (s8) arg16;
    M2C_FIELD(arg1, s8 *, 0x2C) = (s8) arg17;
    M2C_FIELD(arg1, s8 *, 0x28) = (s8) arg17;
    M2C_FIELD(arg1, s8 *, 0x2D) = (s8) arg18;
    M2C_FIELD(arg1, s8 *, 0x29) = (s8) arg18;
    M2C_FIELD(arg1, s8 *, 0x2E) = (s8) arg19;
    M2C_FIELD(arg1, s8 *, 0x2A) = (s8) arg19;
    M2C_FIELD(arg1, s8 *, 0x30) = (s8) arg8;
    M2C_FIELD(arg1, s8 *, 0x31) = (s8) arg9;
    M2C_FIELD(arg1, s8 *, 0x32) = (s8) arg10;
}
