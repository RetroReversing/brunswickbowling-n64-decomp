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

extern char D_8009D5B0[];
extern char D_8009D5E0[];
extern char D_8009D5F8[];
extern char D_8009D608[];
extern u16 D_8009D838;
extern u16 D_8009D884;

void func_8004FB6C(s32 arg0) {
    s32 temp_a2;
    s32 temp_v1;
    u16 *temp_a0;
    u16 *temp_a1;
    u16 temp_v0;

    temp_a2 = arg0 * 2;
    temp_a0 = temp_a2 + D_8009D5F8;
    if (*(temp_a2 + D_8009D5E0) == *temp_a0) {
        temp_a1 = temp_a2 + D_8009D608;
        temp_v0 = *temp_a1 - 1;
        *temp_a1 = temp_v0;
        if ((temp_v0 & 0xFFFF) == 0xFFFF) {
            *(temp_a2 + D_8009D5B0) = *temp_a0;
            *temp_a1 = D_8009D838;
        }
    } else {
        *(temp_a2 + D_8009D608) = D_8009D884;
    }
    temp_v1 = arg0 * 2;
    *(temp_v1 + D_8009D5E0) = *(temp_v1 + D_8009D5F8);
}
