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

M2C_UNK func_80057FA0(s32, s32, s32);               /* extern */

void func_80037264(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4_in, s32 arg5) {
  s32 arg4;
    s32 temp_a1;
    s32 temp_v0;
  arg4 = arg4_in;
  arg4_in = 0;

    if (M2C_FIELD(arg0, u16 *, 4) == 0) {
        temp_a1 = M2C_FIELD(arg0, s32 *, 0x24);
        func_80057FA0((arg4 * 2) + temp_a1, (arg2 * 2) + temp_a1, arg5 * 2);
        return;
    }
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x3C);
    if (temp_v0 != 0) {
        func_80057FA0((((arg3 << 8) + arg4) * 2) + temp_v0, (((arg1 << 8) + arg2) * 2) + temp_v0, arg5 * 2);
        if (arg3 == M2C_FIELD(arg0, u16 *, 6)) {
            do { do { do { M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C) + (arg3 << 9)); } while (0); } while (0); } while (0);
        }
    }
}
