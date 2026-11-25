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

M2C_UNK func_8002C0DC(void *, s16, s16);            /* extern */
s32 func_8002C4E0(void *);                          /* extern */

void func_8002C9BC(void *arg0, s16 arg1, s16 arg2) {
    s32 temp_v1;

    func_8002C0DC(arg0 + ((M2C_FIELD(arg0, s32 *, 0xCC) * 0x14) + 4), arg1, arg2);
    if (func_8002C4E0(arg0 + ((M2C_FIELD(arg0, s32 *, 0xCC) * 0x14) + 4)) != 0) {
loop_1:
        temp_v1 = M2C_FIELD(arg0, s32 *, 0xD0);
        if ((temp_v1 < 9) && (M2C_FIELD(((temp_v1 * 0x14) + arg0), u8 *, 0x21) != 0)) {
            M2C_FIELD(arg0, s32 *, 0xD0) = (s32) (temp_v1 + 1);
            goto loop_1;
        }
        M2C_FIELD(arg0, s16 *, 0xD4) = 0x7FE0;
        M2C_FIELD(arg0, s32 *, 0xCC) = (s32) (M2C_FIELD(arg0, s32 *, 0xCC) + 1);
        return;
    }
    M2C_FIELD(arg0, s16 *, 0xD4) = arg2;
    if (arg2 == 0) {
        M2C_FIELD(arg0, s16 *, 0xD4) = 0x7FE0;
    }
}
