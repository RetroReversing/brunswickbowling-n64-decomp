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

M2C_UNK func_8002BEE0(void *);                      /* extern */

void func_8002C478(void *arg0, s16 arg1) {
    u8 temp_v0;
    void *temp_a0;

    if (M2C_FIELD(arg0, u8 *, 9) == 0) {
        temp_a0 = M2C_FIELD(arg0, void **, 0);
        if (temp_a0 != NULL) {
            func_8002C478(temp_a0, arg1);
        }
        temp_v0 = M2C_FIELD(arg0, u8 *, 0xD);
        M2C_FIELD(arg0, u8 *, 0xD) = (u8) (temp_v0 + 1);
        M2C_FIELD((arg0 + (temp_v0 & 0xFF)), s8 *, 0xF) = (s8) arg1;
        func_8002BEE0(arg0);
    }
}
