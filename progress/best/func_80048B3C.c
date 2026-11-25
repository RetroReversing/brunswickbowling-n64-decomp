/* machine draft (m2c) for sn-n64-281 -G0 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mfp64, tried by autopilot */
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

extern s32 D_80095B28;
extern u16 D_8009C776;
extern s32 D_8009C778;
extern M2C_UNK D_8009C780;
extern u16 D_8009C788;

void func_80048B3C(void *arg0) {
    s16 var_a3;
    void *temp_t1;
    void *temp_v0;
    void *var_a2;
    void *var_v0;

    if ((s32) D_8009C776 < 0x20) {
        var_a3 = 3;
        if (!(M2C_FIELD(arg0, s32 *, 0x28) & ~0xFF)) {
            var_a3 = 2;
        }
        if (!(M2C_FIELD(arg0, s32 *, 0x18) & ~0xFF)) {
            var_a3 = 1;
        }
        var_a2 = arg0;
        temp_t1 = var_a2 + 0x30;
        temp_v0 = (D_8009C788 * 0x6C) + D_8009C778;
        M2C_FIELD(temp_v0, s16 *, 0x50) = var_a3;
        M2C_FIELD(temp_v0, s32 *, 0x54) = (s32) D_8009C776;
        var_v0 = (D_8009C776 * 0x38) + *((D_80095B28 * 4) + &D_8009C780);
        __repair_rows: {
            M2C_FIELD(var_v0, s32 *, 0) = (s32) M2C_FIELD(var_a2, s32 *, 0);
            M2C_FIELD(var_v0, s32 *, 4) = (s32) M2C_FIELD(var_a2, s32 *, 4);
            M2C_FIELD(var_v0, s32 *, 8) = (s32) M2C_FIELD(var_a2, s32 *, 8);
            M2C_FIELD(var_v0, s32 *, 0xC) = (s32) M2C_FIELD(var_a2, s32 *, 0xC);
            var_a2 += 0x10;
            var_v0 += 0x10;
        }
if (var_a2 != temp_t1) goto __repair_rows;
        M2C_FIELD(var_v0, s32 *, 0) = (s32) M2C_FIELD(var_a2, s32 *, 0);
        M2C_FIELD(var_v0, s32 *, 4) = (s32) M2C_FIELD(var_a2, s32 *, 4);
        D_8009C788 += 1;
        D_8009C776 += 1;
    }
}
