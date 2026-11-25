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
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern char D_8009DB28[];
extern u32 D_8009DB58;

u32 func_80051204(s32 arg0, s16 arg1, s16 arg2) {
        u32 count_next;
    void *temp_v1;
    u32 temp;

    temp = (u32) D_8009DB58;
    if (temp < 6U) {
        temp_v1 = (D_8009DB58 * 8) + D_8009DB28;
        count_next = D_8009DB58 + 1;
        M2C_FIELD(temp_v1, s32 *, 0) = arg0;
        M2C_FIELD(temp_v1, s16 *, 4) = arg2;
        M2C_FIELD(temp_v1, s16 *, 6) = arg1;
        D_8009DB58 = count_next;
        return D_8009DB58;
    }
}
