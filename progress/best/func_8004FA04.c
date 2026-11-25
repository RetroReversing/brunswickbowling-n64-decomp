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

M2C_UNK osContStartReadData(M2C_UNK *);                   /* extern */
M2C_UNK osContGetReadData(M2C_UNK *);                   /* extern */
M2C_UNK osRecvMesg(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_8009CFE0;
extern s16 D_8009D5B0;
extern M2C_UNK D_8009D5C0;
extern u16 D_8009D5F8;
extern M2C_UNK D_8009D870;

void func_8004FA04(void) {
    M2C_UNK *var_a0;
    M2C_UNK *var_s0;
    s16 *var_a1;
    u16 *var_a2;
    u16 temp_a3;
    u16 var_v1;

    osContStartReadData(&D_8009CFE0);
    osRecvMesg(&D_8009CFE0, 0, 1);
    var_s0 = &D_8009D5C0;
    osContGetReadData(&D_8009D5C0);
    var_a1 = &D_8009D5B0;
    var_a2 = &D_8009D5F8;
    var_a0 = &D_8009D870;
    do {
        temp_a3 = *var_a2;
        var_v1 = temp_a3;
        if (M2C_FIELD(var_s0, u8 *, 4) & 8) {
            M2C_FIELD(var_a0, u8 *, 0) = 0U;
            M2C_FIELD(var_a0, u8 *, 1) = 0U;
        } else {
            if (M2C_FIELD(var_s0, s8 *, 2) < -0x28) {
                M2C_FIELD(var_s0, u16 *, 0) = (u16) (M2C_FIELD(var_s0, u16 *, 0) | 0x200);
            }
            if (M2C_FIELD(var_s0, s8 *, 2) >= 0x29) {
                M2C_FIELD(var_s0, u16 *, 0) = (u16) (M2C_FIELD(var_s0, u16 *, 0) | 0x100);
            }
            if (M2C_FIELD(var_s0, s8 *, 3) >= 0x29) {
                M2C_FIELD(var_s0, u16 *, 0) = (u16) (M2C_FIELD(var_s0, u16 *, 0) | 0x800);
            }
            if (M2C_FIELD(var_s0, s8 *, 3) < -0x28) {
                M2C_FIELD(var_s0, u16 *, 0) = (u16) (M2C_FIELD(var_s0, u16 *, 0) | 0x400);
            }
            var_v1 = M2C_FIELD(var_s0, u16 *, 0);
            M2C_FIELD(var_a0, u8 *, 0) = (u8) M2C_FIELD(var_s0, s8 *, 2);
            M2C_FIELD(var_a0, u8 *, 1) = (u8) M2C_FIELD(var_s0, s8 *, 3);
        }
        *var_a2 = var_v1;
        *var_a1 = ~temp_a3 & var_v1;
        var_a1 += 2;
        var_a2 += 2;
        var_a0 += 4;
        var_s0 += 6;
    } while ((s32) var_a1 < (s32) (&D_8009D5B0 + 8));
}
