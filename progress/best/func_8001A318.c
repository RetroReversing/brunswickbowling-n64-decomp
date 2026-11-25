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

M2C_UNK func_80037DCC(M2C_UNK *);                   /* extern */
M2C_UNK func_80037E40(M2C_UNK *);                   /* extern */
M2C_UNK func_80037F38(M2C_UNK *);                   /* extern */
M2C_UNK func_80037FAC(M2C_UNK *);                   /* extern */
extern s32 D_8007E4E0;
extern M2C_UNK D_80081AD0;
extern s32 D_8008AB10;
extern M2C_UNK D_8008C9CC;

void func_8001A318(void *arg0) {
    s16 temp_a0;
    s32 var_s0;
    void **temp_v0;
    void *temp_v1;

    var_s0 = 0;
    if ((D_8008AB10 != 0) || (temp_v0 = M2C_FIELD((&D_80081AD0)[D_8007E4E0], void ***, 0x44), temp_v1 = *temp_v0, (M2C_FIELD(M2C_FIELD(temp_v1, void *(**)(void *, M2C_UNK), 0x44)(temp_v0 + M2C_FIELD(temp_v1, s16 *, 0x40), -1), u8 *, 0xD) == 0))) {
        var_s0 = 1;
    }
    if ((var_s0 != 0) && (temp_a0 = M2C_FIELD(arg0, s16 *, 0x14), ((temp_a0 < -2) == 0))) {
        if (temp_a0 < 0) {
            goto block_11;
        }
        if (temp_a0 <= 0) {
            func_80037FAC(&D_8008C9CC);
            return;
        }
        if (temp_a0 < 3) {
            func_80037FAC(&D_8008C9CC);
block_11:
            func_80037DCC(&D_8008C9CC);
            return;
        }
        if (temp_a0 < 5) {
            func_80037FAC(&D_8008C9CC);
            func_80037F38(&D_8008C9CC);
            return;
        }
        func_80037FAC(&D_8008C9CC);
        func_80037E40(&D_8008C9CC);
    }
}
