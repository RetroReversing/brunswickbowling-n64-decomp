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

extern char D_80095EA0[];
extern char D_80095F08[];
extern char D_80095F40[];
extern void *D_8009CC60;

void func_8004EC84(void *arg0) {
    char *var_t2;
    char *var_t2_2;
    s16 temp_s3;
    s32 temp_a3;
    s32 temp_a3_2;
    s32 temp_t0;
    s32 temp_t0_2;
    s32 temp_t1_3;
    s32 var_t9;
    s32 var_t9_2;
    u16 temp_t1;
    u16 temp_t1_2;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_a2;
    void *temp_a2_2;
    void *temp_a2_3;
    void *temp_a2_4;
    void *temp_t8;
    void *temp_t8_10;
    void *temp_t8_11;
    void *temp_t8_12;
    void *temp_t8_13;
    void *temp_t8_14;
    void *temp_t8_2;
    void *temp_t8_3;
    void *temp_t8_4;
    void *temp_t8_5;
    void *temp_t8_6;
    void *temp_t8_7;
    void *temp_t8_8;
    void *temp_t8_9;
    void *var_a2;
    void *var_a2_2;
    void *var_t3;
    void *var_t3_2;
    void *var_t8;
    void *var_t8_2;

    var_t9 = 0;
    temp_s3 = M2C_FIELD(arg0, s16 *, 0x16);
    temp_t8 = D_8009CC60 + 8;
    temp_t8_2 = temp_t8 + 8;
    temp_t8_3 = temp_t8_2 + 8;
    temp_t8_4 = temp_t8_3 + 8;
    temp_t8_5 = temp_t8_4 + 8;
    temp_t8_6 = temp_t8_5 + 8;
    temp_t8_7 = temp_t8_6 + 8;
    M2C_FIELD(D_8009CC60, s32 *, 0) = 0x06000000;
    M2C_FIELD(D_8009CC60, s32 **, 4) = D_80095EA0;
    M2C_FIELD(temp_t8, s32 **, 4) = D_80095F40;
    M2C_FIELD(D_8009CC60, s32 *, 8) = 0xFD48001F;
    M2C_FIELD(temp_t8_2, s32 *, 4) = 0x07000000;
    M2C_FIELD(temp_t8, s32 *, 8) = 0xF5480800;
    M2C_FIELD(temp_t8_2, s32 *, 8) = 0xE6000000;
    M2C_FIELD(temp_t8_3, s32 *, 4) = 0;
    M2C_FIELD(temp_t8_3, s32 *, 8) = 0xF4000000;
    M2C_FIELD(temp_t8_4, s32 *, 4) = 0x0707E0FC;
    M2C_FIELD(temp_t8_4, s32 *, 8) = 0xE7000000;
    M2C_FIELD(temp_t8_5, s32 *, 4) = 0;
    M2C_FIELD(temp_t8_5, s32 *, 8) = 0xF5400800;
    M2C_FIELD(temp_t8_6, s32 *, 4) = 0;
    M2C_FIELD(temp_t8_6, s32 *, 8) = 0xF2000000;
    M2C_FIELD(temp_t8_7, s32 *, 4) = 0xFC0FC;
    var_t2 = M2C_FIELD(arg0, s16 **, 0x1C);
    var_t8 = temp_t8_7 + 8;
    if (temp_s3 > 0) {
        var_t3 = var_t2 + 2;
        var_a2 = var_t8 - 4;
        do {
            temp_t1 = M2C_FIELD(var_t3, u16 *, 4);
            var_t9 += 1;
            if ((s32) temp_t1 < 0x40) {
                temp_a2 = var_a2 + 8;
                var_t8 += 0x18;
                temp_a3 = *(s16 *)var_t2 + M2C_FIELD(arg0, s16 *, 0xC);
                temp_t0 = M2C_FIELD(var_t3, s16 *, 0) + M2C_FIELD(arg0, s16 *, 0xE);
                temp_a1 = M2C_FIELD(arg0, void **, 0x28);
                M2C_FIELD(var_a2, s32 *, 8) = (s32) ((((temp_a3 * 4) & 0xFFF) << 0xC) | ((temp_t0 * 4) & 0xFFF));
                M2C_FIELD(temp_a2, s32 *, -4) = (s32) ((((((temp_a3 + M2C_FIELD(temp_a1, u16 *, 8)) - 1) * 4) & 0xFFF) << 0xC) | (((((temp_t0 + M2C_FIELD(temp_a1, u16 *, 0xA)) - 1) * 4) & 0xFFF) | 0xE4000000));
                temp_a2_2 = temp_a2 + 8;
                M2C_FIELD(temp_a2_2, s32 *, -4) = 0xB4000000;
                M2C_FIELD(temp_a2, s32 *, 8) = (s32) (((temp_t1 & 7) << 0x18) | ((temp_t1 << 5) & 0xFF00));
                var_a2 = temp_a2_2 + 8;
                M2C_FIELD(var_a2, s32 *, -4) = 0xB3000000;
                M2C_FIELD(temp_a2_2, s32 *, 8) = 0x10000400;
            }
            var_t3 += 8;
            var_t2 += 8;
        } while (var_t9 < temp_s3);
    }
    temp_t8_8 = var_t8 + 8;
    temp_t8_9 = temp_t8_8 + 8;
    temp_t8_10 = temp_t8_9 + 8;
    temp_t8_11 = temp_t8_10 + 8;
    temp_t8_12 = temp_t8_11 + 8;
    temp_t8_13 = temp_t8_12 + 8;
    temp_t8_14 = temp_t8_13 + 8;
    var_t8_2 = temp_t8_14 + 8;
    M2C_FIELD(var_t8, s32 *, 0) = 0xE7000000;
    M2C_FIELD(var_t8, s32 *, 4) = 0;
    M2C_FIELD(temp_t8_8, s32 **, 4) = D_80095F40;
    M2C_FIELD(var_t8, s32 *, 8) = 0xFD48001F;
    M2C_FIELD(temp_t8_9, s32 *, 4) = 0x07000000;
    M2C_FIELD(temp_t8_8, s32 *, 8) = 0xF5480800;
    M2C_FIELD(temp_t8_9, s32 *, 8) = 0xE6000000;
    M2C_FIELD(temp_t8_10, s32 *, 4) = 0;
    M2C_FIELD(temp_t8_10, s32 *, 8) = 0xF4000100;
    M2C_FIELD(temp_t8_11, s32 *, 4) = 0x0707E1FC;
    M2C_FIELD(temp_t8_11, s32 *, 8) = 0xE7000000;
    M2C_FIELD(temp_t8_12, s32 *, 4) = 0;
    M2C_FIELD(temp_t8_12, s32 *, 8) = 0xF5400800;
    M2C_FIELD(temp_t8_13, s32 *, 4) = 0;
    M2C_FIELD(temp_t8_13, s32 *, 8) = 0xF2000100;
    M2C_FIELD(temp_t8_14, s32 *, 4) = 0xFC1FC;
    var_t2_2 = M2C_FIELD(arg0, s16 **, 0x1C);
    var_t9_2 = 0;
    if (temp_s3 > 0) {
        var_t3_2 = var_t2_2 + 2;
        var_a2_2 = var_t8_2 - 4;
        do {
            temp_t1_2 = M2C_FIELD(var_t3_2, u16 *, 4);
            var_t9_2 += 1;
            if ((s32) temp_t1_2 >= 0x40) {
                temp_t1_3 = temp_t1_2 - 0x40;
                temp_a2_3 = var_a2_2 + 8;
                var_t8_2 += 0x18;
                temp_a3_2 = *(s16 *)var_t2_2 + M2C_FIELD(arg0, s16 *, 0xC);
                temp_t0 = M2C_FIELD(var_t3_2, s16 *, 0) + M2C_FIELD(arg0, s16 *, 0xE);
                temp_a1_2 = M2C_FIELD(arg0, void **, 0x28);
                M2C_FIELD(var_a2_2, s32 *, 8) = (s32) ((((temp_a3_2 * 4) & 0xFFF) << 0xC) | ((temp_t0 * 4) & 0xFFF));
                M2C_FIELD(temp_a2_3, s32 *, -4) = (s32) ((((((temp_a3_2 + M2C_FIELD(temp_a1_2, u16 *, 8)) - 1) * 4) & 0xFFF) << 0xC) | (((((temp_t0 + M2C_FIELD(temp_a1_2, u16 *, 0xA)) - 1) * 4) & 0xFFF) | 0xE4000000));
                temp_a2_4 = temp_a2_3 + 8;
                M2C_FIELD(temp_a2_4, s32 *, -4) = 0xB4000000;
                M2C_FIELD(temp_a2_3, s32 *, 8) = (s32) (((temp_t1_3 & 7) << 0x18) | ((temp_t1_3 << 5) & 0xFF00));
                var_a2_2 = temp_a2_4 + 8;
                M2C_FIELD(var_a2_2, s32 *, -4) = 0xB3000000;
                M2C_FIELD(temp_a2_4, s32 *, 8) = 0x10000400;
            }
            var_t3_2 += 8;
            var_t2_2 += 8;
        } while (var_t9_2 < temp_s3);
    }
    M2C_FIELD(var_t8_2, s32 *, 0) = 0x06000000;
    M2C_FIELD(var_t8_2, s32 **, 4) = D_80095F08;
    D_8009CC60 = var_t8_2 + 8;
}
