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

s32 func_8005FEF0();                                /* extern */
M2C_UNK func_8005FF60(s32);                         /* extern */
s32 func_8006C9F0();                                /* extern */
extern s32 D_800ACBD0;
extern s32 D_800ACBE0;
extern s32 D_800ACBE4;

s32 osGetTime(void) {
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_s4;
    u32 temp_s0;

    temp_s4 = func_8005FEF0();
    temp_s2 = D_800ACBE0;
    temp_s3 = D_800ACBE4;
    temp_s0 = func_8006C9F0() - D_800ACBD0;
    func_8005FF60(temp_s4);
    return temp_s2 + ((u32) (temp_s3 + temp_s0) < temp_s0);
}
