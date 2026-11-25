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

M2C_UNK guPerspective(s32, s32, M2C_UNK, f32, f32, f32, f32); /* extern */
extern f32 D_80079BE0;
extern f32 D_80079BE4;
extern f32 D_80079BE8;
extern u16 D_8009CBD0;
extern f32 D_8009CBD4;
extern u16 D_8009CBE4;
extern s32 D_8009CD84;

void func_8004E194(void *arg0, M2C_UNK arg1) {
    s32 temp_a1;

    temp_a1 = D_8009CD84 ^ 1;
    D_8009CD84 = temp_a1;
    guPerspective(arg0 + ((temp_a1 << 6) + 0xA0), arg0 + ((temp_a1 * 2) + 0x1A0), arg1, (f32) D_8009CBD0 / ((f32) D_8009CBE4 / D_8009CBD4), D_80079BE0, D_80079BE4, D_80079BE8);
    M2C_FIELD(arg0, u16 *, 0x70) = (u16) (M2C_FIELD(arg0, u16 *, 0x70) & 0xEFFF);
}
