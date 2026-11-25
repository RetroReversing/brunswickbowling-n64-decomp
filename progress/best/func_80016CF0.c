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

extern M2C_UNK D_80081AD0;
extern s32 D_8008B3E8;

s32 func_80016CF0(void) {
    s16 temp_s0;
    void **temp_v0;
    void **temp_v1;
    void *temp_a2;
    void *temp_v1_2;

    if (D_8008B3E8 >= 6) {
        temp_v0 = M2C_FIELD(M2C_FIELD(&D_80081AD0, void **, 0), void ***, 0x44);
        temp_v1_2 = *temp_v0;
        temp_v1 = M2C_FIELD(M2C_FIELD(&D_80081AD0, void **, 4), void ***, 0x44);
        temp_a2 = *temp_v1;
        temp_s0 = M2C_FIELD(M2C_FIELD(temp_v1_2, void *(**)(void *, M2C_UNK), 0x44)(temp_v0 + M2C_FIELD(temp_v1_2, s16 *, 0x40), 9), s16 *, 4);
        return temp_s0 == M2C_FIELD(M2C_FIELD(temp_a2, void *(**)(void *, M2C_UNK, void *), 0x44)(temp_v1 + M2C_FIELD(temp_a2, s16 *, 0x40), 9, temp_a2), s16 *, 4);
    }
    return 0;
}
