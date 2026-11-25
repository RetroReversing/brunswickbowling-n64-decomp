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

s32 func_8002FDB0();
extern char D_8007F618[];
extern u8 D_80081A08;
extern char D_8008B130[];

void func_80030B14(void *arg0, s32 arg1, u16 *arg2, void **arg3, s16 *arg4, s16 *arg5, s16 *arg6, s16 *arg7, s16 *arg8, u16 *arg9, s32 *arg10, s32 *arg11) {
    u16 temp_v0;
    u16 temp_v1;
    void *temp_s0;

    *arg2 = 0;
    if (D_80081A08 != arg1) {
        do {
            temp_v0 = *arg2 + 1;
            *arg2 = temp_v0;
        } while ((&D_80081A08)[(s16) temp_v0] != arg1);
    }
    temp_s0 = (arg1 * 0x5C) + D_8007F618;
    *arg3 = temp_s0;
    *arg4 = (s16) M2C_FIELD(temp_s0, u8 *, 0x3E);
    temp_v1 = M2C_FIELD(temp_s0, u16 *, 0x3C);
    *arg9 = temp_v1;
    *arg5 = M2C_FIELD(temp_s0, u16 *, 0x38) - temp_v1;
    *arg6 = (s16) M2C_FIELD(temp_s0, u8 *, 0x3F);
    *arg7 = (s16) M2C_FIELD(temp_s0, u8 *, 0x40);
    *arg8 = (s16) M2C_FIELD(temp_s0, u8 *, 0x41);
    *arg10 = func_8002FDB0((s16) *arg2, M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x28) * 0x1C) + D_8008B130), s32 *, 0x10));
    *arg11 = M2C_FIELD(temp_s0, s32 *, 0x28);
}
