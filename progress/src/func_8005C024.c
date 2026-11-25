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

M2C_UNK func_8005DE18(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_8005F0D4(s32);                         /* extern */

void func_8005C024(void *arg0) {
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 0);
    switch (temp_v1) {                              /* irregular */
    case 0:
        func_8005DE18(M2C_FIELD(arg0, s32 *, 4), -2, 1);
        return;
    case 1:
        func_8005DE18(M2C_FIELD(arg0, s32 *, 4), -2, 0);
        return;
    case 2:
        func_8005F0D4(M2C_FIELD(arg0, s32 *, 4));
        return;
    }
}
