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

void func_80037248(void *arg0, s16 arg1) {
    s16 *temp;
    int temp2;
    s32 temp3;
    temp = (s16 *)((s8 *)arg0 + 6);
    (*temp) = arg1;
    temp2 = arg1 & 0xFFFF;
    temp3 = *(s32 *)((s8 *)arg0 + 0x3C);
    (*(s32 *)((s8 *)arg0 + 0x24)) = (s32) (temp3 + (temp2 << 9));
}
