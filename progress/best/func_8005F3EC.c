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

M2C_UNK osEPiStartDma(s32, void *, M2C_UNK, M2C_UNK *); /* extern */
extern s32 D_800A5AB0;
extern M2C_UNK *D_800A5AF0;
extern M2C_UNK *D_800A5AF4;
extern s32 D_800A5AFC;
extern s32 D_800A5B04;
extern s32 D_800A5B08;
extern M2C_UNK D_800A5B10;
extern s32 D_800A5B28;
extern s32 D_800A5B30;

M2C_UNK *func_8005F3EC(u32 arg0, s32 arg1) {
    M2C_UNK *temp_s0;
    M2C_UNK *temp_v0;
    M2C_UNK *var_a2;
    M2C_UNK *var_a3;
    M2C_UNK *var_v0;
    s32 temp_v1_2;
    s32 var_t1;
    u32 temp_v1;
    u32 var_a0;
    void *temp_a1;

    var_a0 = arg0;
    if ((var_a0 & 0xFF000000) == 0xFF000000) {
        var_t1 = D_800A5B30;
        var_a0 = (var_a0 & 0xFFFFFF) + 0x140000;
        goto block_4;
    }
    var_v0 = NULL;
    if (!(D_800A5AB0 & 1)) {
        var_t1 = D_800A5B28;
block_4:
        var_a2 = D_800A5AF0;
        var_a3 = NULL;
        if (var_a2 != NULL) {
loop_6:
            temp_v1 = M2C_FIELD(var_a2, u32 *, 0xC);
            if (var_a0 >= temp_v1) {
                var_a3 = var_a2;
                if ((u32) (temp_v1 + D_800A5B04) < (u32) (var_a0 + arg1)) {
                    var_a2 = M2C_FIELD(var_a2, M2C_UNK **, 4);
                    if (var_a2 == NULL) {
                        goto block_9;
                    }
                    goto loop_6;
                }
                M2C_FIELD(var_a2, s32 *, 8) = 2;
                return var_a2;
            }
            goto block_9;
        }
block_9:
        temp_s0 = D_800A5AF4;
        if (temp_s0 == NULL) {
            return D_800A5AF0;
        }
        D_800A5AF4 = M2C_FIELD(temp_s0, M2C_UNK **, 4);
        if (var_a3 != NULL) {
            temp_v0 = M2C_FIELD(var_a3, M2C_UNK **, 4);
            M2C_FIELD(temp_s0, M2C_UNK **, 4) = temp_v0;
            if (temp_v0 != NULL) {
                *temp_v0 = temp_s0;
            }
            M2C_FIELD(temp_s0, M2C_UNK **, 0) = var_a3;
            M2C_FIELD(var_a3, M2C_UNK **, 4) = temp_s0;
        } else {
            M2C_FIELD(temp_s0, M2C_UNK **, 0) = NULL;
            M2C_FIELD(temp_s0, M2C_UNK **, 4) = (M2C_UNK *) D_800A5AF0;
            if (D_800A5AF0 != NULL) {
                *D_800A5AF0 = temp_s0;
            }
            D_800A5AF0 = temp_s0;
        }
        temp_v1_2 = D_800A5B08;
        M2C_FIELD(temp_s0, s32 *, 0xC) = (s32) (var_a0 & ~1);
        M2C_FIELD(temp_s0, s32 *, 8) = 2;
        D_800A5B08 = temp_v1_2 + 1;
        temp_a1 = D_800A5AFC + (temp_v1_2 * 0x18);
        M2C_FIELD(temp_a1, s8 *, 2) = 0;
        M2C_FIELD(temp_a1, M2C_UNK **, 4) = &D_800A5B10;
        M2C_FIELD(temp_a1, s32 *, 8) = (s32) M2C_FIELD(temp_s0, s32 *, 0x10);
        M2C_FIELD(temp_a1, s32 *, 0x10) = (s32) D_800A5B04;
        M2C_FIELD(temp_a1, s32 *, 0xC) = (s32) M2C_FIELD(temp_s0, s32 *, 0xC);
        osEPiStartDma(var_t1, temp_a1, 0, var_a3);
        var_v0 = temp_s0;
        /* Duplicate return node #20. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
