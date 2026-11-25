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

extern f32 D_80079B64;
extern u8 D_80095B24;
extern u8 D_8009C774;
extern s32 D_8009C778;
extern u16 D_8009C788;

void func_80048578(s32 arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4, f32 arg5, s32 arg6) {
    f32 temp_ft0;
    f32 temp_ft1;
    f32 temp_fv1;
    s32 temp_a0;
    s32 temp_t2;
    void *temp_v0;
    void *temp_v1;
    void *var_a1;
    void *var_v1;

    var_a1 = arg1;
    if ((s32) D_8009C788 < 0x6E) {
        temp_t2 = D_8009C788 * 0x6C;
        temp_v1 = temp_t2 + D_8009C778;
        M2C_FIELD(temp_v1, s16 *, 0x50) = (s16) D_80095B24;
        if (D_8009C774 != 0) {
            M2C_FIELD(temp_v1, s16 *, 0x50) = (s16) (D_80095B24 | 0x8000);
        }
        var_v1 = temp_t2 + D_8009C778;
        M2C_FIELD(var_v1, s32 *, 0x54) = arg0;
        M2C_FIELD(var_v1, s32 *, 0x58) = arg2;
        M2C_FIELD(var_v1, s32 *, 0x5C) = arg3;
        M2C_FIELD(var_v1, s32 *, 0x60) = arg4;
        M2C_FIELD(var_v1, f32 *, 0x64) = arg5;
        temp_a0 = var_a1 + 0x50;
        M2C_FIELD(var_v1, s32 *, 0x68) = arg6;
        __repair_rows: {
            M2C_FIELD(var_v1, s32 *, 0) = (s32) M2C_FIELD(var_a1, s32 *, 0);
            M2C_FIELD(var_v1, s32 *, 4) = (s32) M2C_FIELD(var_a1, s32 *, 4);
            M2C_FIELD(var_v1, s32 *, 8) = (s32) M2C_FIELD(var_a1, s32 *, 8);
            M2C_FIELD(var_v1, s32 *, 0xC) = (s32) M2C_FIELD(var_a1, s32 *, 0xC);
            var_a1 += 0x10;
            var_v1 += 0x10;
        }
if (var_a1 != temp_a0) goto __repair_rows;
        temp_v0 = (D_8009C788 * 0x6C) + D_8009C778;
        temp_ft1 = M2C_FIELD(temp_v0, f32 *, 0x30) * D_80079B64;
        temp_ft0 = M2C_FIELD(temp_v0, f32 *, 0x34) * D_80079B64;
        temp_fv1 = M2C_FIELD(temp_v0, f32 *, 0x38) * D_80079B64;
        D_8009C788 += 1;
        M2C_FIELD(temp_v0, f32 *, 0x30) = temp_ft1;
        M2C_FIELD(temp_v0, f32 *, 0x34) = temp_ft0;
        M2C_FIELD(temp_v0, f32 *, 0x38) = temp_fv1;
    }
}
