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

M2C_UNK func_80050EA4();                            /* extern */
void *func_80071668(s32);                           /* extern */
M2C_UNK func_8007169C(s32, void *);                 /* extern */
M2C_UNK func_800716BC(s32 *, void *, u32);          /* extern */
extern u16 D_8009C790;
extern s32 D_8009C898;
extern s32 D_8009DB00;

void *func_8004C9A8(void *arg0, s32 arg1, s32 arg2) {
    s32 *var_s0;
    s32 temp_a0;
    s32 temp_s1;
    u32 var_a2;
    void *temp_v0;
    void *var_v0;

    var_s0 = M2C_FIELD(arg0, s32 **, 4);
    temp_s1 = -arg2;
    temp_v0 = func_80071668(D_8009C898);
    var_v0 = NULL;
    if (temp_v0 != NULL) {
        if (M2C_FIELD(var_s0, s32 *, 4) != 0) {
loop_2:
            if (temp_s1 == -0x100) {
                var_a2 = M2C_FIELD(M2C_FIELD(var_s0, s32 **, 4), s32 *, 0) - arg1;
                temp_a0 = var_a2 + arg1;
                if ((var_a2 & temp_s1) != ((temp_a0 - 1) & temp_s1)) {
                    var_a2 = (temp_a0 & temp_s1) - arg1;
                }
            } else {
                var_a2 = (M2C_FIELD(M2C_FIELD(var_s0, s32 **, 4), s32 *, 0) - arg1) & temp_s1;
            }
            if (var_a2 < (u32) (M2C_FIELD(var_s0, s32 *, 0) + M2C_FIELD(var_s0, s32 *, 0xC))) {
                var_s0 = M2C_FIELD(var_s0, s32 **, 4);
                if (M2C_FIELD(var_s0, s32 *, 4) == 0) {
                    goto block_8;
                }
                goto loop_2;
            }
            M2C_FIELD(temp_v0, u32 *, 0) = var_a2;
            M2C_FIELD(temp_v0, s32 *, 0xC) = arg1;
            M2C_FIELD(temp_v0, void **, 0x14) = arg0;
            M2C_FIELD(temp_v0, u16 *, 0x10) = (u16) D_8009C790;
            func_800716BC(var_s0, temp_v0, var_a2);
            var_v0 = temp_v0;
            /* Duplicate return node #12. Try simplifying control flow for better match */
            return var_v0;
        }
block_8:
        if (arg0 == D_8009C898) {
            D_8009DB00 = -1;
            func_80050EA4();
        }
        func_8007169C(D_8009C898, temp_v0);
        return NULL;
    }
    return var_v0;
}
