/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O1, tried by autopilot */
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

extern s32 D_8007E4E0;
extern M2C_UNK D_80081AD0;
extern s32 D_8008397C;
extern s32 D_8008E9E0;

s32 func_80019380(void *arg0, s32 arg1, s32 arg3) {
    void *temp_a0;
    void *temp_v1;

    temp_v1 = (&D_80081AD0)[D_8007E4E0];
    if (((M2C_FIELD(temp_v1, u8 *, 0x18) ^ 1) == 0) && (D_8008397C == 0) && (arg3 == 0x208) && ((arg1 & 0xFF) == M2C_FIELD(temp_v1, u8 *, 0x2C))) {
        temp_a0 = arg0 + (M2C_FIELD(arg0, s16 *, 0x20) * 4);
        if (M2C_FIELD(temp_a0, s32 *, 0x14) == 0) {
            M2C_FIELD(temp_a0, s32 *, 0x14) = (s32) D_8008E9E0;
        }
    }
    return 1;
}
