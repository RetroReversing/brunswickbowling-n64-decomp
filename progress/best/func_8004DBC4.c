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

s32 func_80065630(s32, M2C_UNK, void *, void *);    /* extern */
extern f32 D_80079BCC;
extern s32 D_80095CF0;
extern M2C_UNK D_80095DD8;
extern M2C_UNK D_8009CBC0;
extern u16 D_8009CBD0;
extern s32 D_8009CBD8;
extern s32 D_8009CBE0;
extern u16 D_8009CBE4;
extern u16 D_8009CC3C;
extern u16 D_8009CC4C;
extern u16 D_8009CC4E;
extern u16 D_8009CC50;
extern M2C_UNK D_8009CC58;
extern void *D_8009CC60;
extern M2C_UNK D_8009CC68;
extern s32 D_8009CD80;

void func_8004DBC4(M2C_UNK arg1, void *arg2, void *arg3) {
    M2C_UNK var_a1;
    s32 temp_a0;
    s32 temp_v1;
    void *temp_a0_2;
    void *temp_s2;
    void *temp_s2_2;
    void *temp_s2_3;
    void *temp_s2_4;
    void *temp_s2_5;
    void *temp_s2_6;
    void *temp_s2_7;
    void *temp_s2_8;
    void *temp_s2_9;
    void *temp_v0;
    void *var_a2;
    void *var_a3;
    void *var_s2;

    var_a1 = arg1;
    var_a2 = arg2;
    var_a3 = arg3;
    temp_v1 = D_8009CBE0 * 4;
    temp_s2 = *(temp_v1 + &D_8009CC58);
    var_s2 = temp_s2 + 8;
    D_8009CD80 = *(temp_v1 + &D_8009CC68);
    M2C_FIELD(temp_s2, s32 *, 0) = 0x06000000;
    M2C_FIELD(temp_s2, M2C_UNK **, 4) = &D_80095DD8;
    if (D_8009CBD8 != 0) {
        temp_v0 = var_s2;
        if (D_80095CF0 != 0) {
            temp_s2_2 = var_s2 + 8;
            temp_s2_3 = temp_s2_2 + 8;
            var_a2 = temp_s2_3;
            temp_s2_4 = temp_s2_3 + 8;
            var_a3 = temp_s2_4;
            temp_s2_5 = temp_s2_4 + 8;
            temp_s2_6 = temp_s2_5 + 8;
            var_s2 = temp_s2_6 + 8;
            var_a1 = 0xE7000000;
            M2C_FIELD(temp_v0, s32 *, 0) = 0xE7000000;
            M2C_FIELD(temp_v0, s32 *, 4) = 0;
            M2C_FIELD(var_s2, s32 *, 8) = 0xBA001402;
            M2C_FIELD(temp_s2_2, s32 *, 4) = 0x300000;
            M2C_FIELD(var_a2, s32 *, 4) = (s32) D_8009CBD8;
            temp_a0 = D_8009CBD0 - 1;
            M2C_FIELD(temp_s2_2, s32 *, 8) = (s32) ((temp_a0 & 0xFFF) | 0xFF100000);
            M2C_FIELD(temp_s2_3, s32 *, 8) = 0xE7000000;
            M2C_FIELD(var_a3, s32 *, 4) = 0;
            M2C_FIELD(temp_s2_4, s32 *, 8) = 0xF7000000;
            M2C_FIELD(temp_s2_5, s32 *, 4) = 0xFFFCFFFC;
            M2C_FIELD(temp_s2_6, s32 *, 4) = 0;
            M2C_FIELD(temp_s2_5, s32 *, 8) = (s32) (((temp_a0 & 0x3FF) << 0xE) | ((((D_8009CBE4 - 1) & 0x3FF) * 4) | 0xF6000000));
        }
        temp_a0_2 = var_s2;
        var_s2 += 8;
        M2C_FIELD(temp_a0_2, s32 *, 0) = 0xFE000000;
        M2C_FIELD(temp_a0_2, s32 *, 4) = (s32) D_8009CBD8;
    }
    temp_s2_7 = var_s2 + 8;
    M2C_FIELD(var_s2, s32 *, 0) = 0xE7000000;
    M2C_FIELD(var_s2, s32 *, 4) = 0;
    M2C_FIELD(var_s2, s32 *, 8) = (s32) (((D_8009CBD0 - 1) & 0xFFF) | 0xFF100000);
    temp_s2_8 = temp_s2_7 + 8;
    temp_s2_9 = temp_s2_8 + 8;
    M2C_FIELD(temp_s2_7, s32 *, 4) = func_80065630((&D_8009CBC0)[D_8009CBE0], var_a1, var_a2, var_a3);
    D_8009CC60 = temp_s2_9 + 8;
    M2C_FIELD(temp_s2_7, s32 *, 8) = (s32) ((((s32) ((f32) D_8009CC4C * D_80079BCC) & 0xFFF) << 0xC) | (((s32) ((f32) D_8009CC4E * D_80079BCC) & 0xFFF) | 0xED000000));
    M2C_FIELD(temp_s2_8, s32 *, 4) = (s32) ((((s32) ((f32) D_8009CC3C * D_80079BCC) & 0xFFF) << 0xC) | ((s32) ((f32) D_8009CC50 * D_80079BCC) & 0xFFF));
    M2C_FIELD(temp_s2_8, s32 *, 8) = 0xE7000000;
    M2C_FIELD(temp_s2_9, s32 *, 4) = 0;
}
