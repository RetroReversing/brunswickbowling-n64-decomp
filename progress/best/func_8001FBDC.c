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

M2C_UNK func_8001FCF0(s32, s16, s16, M2C_UNK);      /* extern */

void func_8001FBDC(s32 arg0, s16 arg1, s16 arg2) {
    s16 temp_v0;
    void *temp_v1;
    s32 temp;

    temp = arg0 + (arg1 * 2);
    do { temp_v1 = temp; } while (0);
    if (arg2 >= M2C_FIELD(temp_v1, s16 *, 0x14)) {
        do {
            do { func_8001FCF0(arg0, arg1, M2C_FIELD(temp_v1, s16 *, 0x14), 1); } while (0);
            temp_v0 = (u16) M2C_FIELD(temp_v1, s16 *, 0x14) + 1;
            M2C_FIELD(temp_v1, s16 *, 0x14) = temp_v0;
        } while (arg2 >= temp_v0);
    }
}
