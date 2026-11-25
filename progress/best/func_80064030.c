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

s32 func_80064030(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void *temp_a0;
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    temp_a0 = M2C_FIELD(arg0, void **, 0);
    temp_v0 = M2C_FIELD(temp_a0, void *(**)(void *, s32), 4)(temp_a0, arg4);
    temp_v1_2 = temp_v0 + 8;
    temp_v1_3 = temp_v1_2 + 8;
    temp_v1 = temp_v1_3 + 8;
    M2C_FIELD(temp_v0, s32 *, 4) = (s32) ((arg2 * 2) & 0xFFFF);
    M2C_FIELD(temp_v0, s32 *, 0) = 0x08000000;
    M2C_FIELD(temp_v0, s32 *, 8) = 0x0D000000;
    M2C_FIELD(temp_v1_2, s32 *, 4) = 0x04400580;
    M2C_FIELD(temp_v1_2, s32 *, 8) = 0x08000000;
    M2C_FIELD(temp_v1_3, s32 *, 4) = (s32) ((arg2 * 4) & 0xFFFF);
    M2C_FIELD(temp_v1_3, s32 *, 8) = 0x06000000;
    M2C_FIELD(temp_v1, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 0x14);
    return temp_v1 + 8;
}
