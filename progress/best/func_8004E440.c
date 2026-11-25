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

M2C_UNK func_8004DBC4();                            /* extern */
M2C_UNK func_8004DE50();                            /* extern */
M2C_UNK func_8004FD90(M2C_UNK *, s32);              /* extern */
M2C_UNK func_8004FE94(M2C_UNK *, s32);              /* extern */
M2C_UNK func_8004FF8C(M2C_UNK *, s32);              /* extern */
M2C_UNK func_800503F8(M2C_UNK *, M2C_UNK *, f32 *); /* extern */
M2C_UNK guMtxF2L(M2C_UNK *, void *);           /* extern */
M2C_UNK func_80071430(M2C_UNK *, M2C_UNK, void *, void *); /* extern */
M2C_UNK osWritebackDCache(void **, M2C_UNK);        /* extern */
extern f32 D_80079BFC;
extern M2C_UNK D_80095E60;
extern M2C_UNK D_80096F70;
extern M2C_UNK D_80096FB0;
extern u16 D_8009CBD0;
extern u16 D_8009CBE4;
extern s32 D_8009CC48;
extern void *D_8009CC60;
extern s32 D_8009CD84;
extern void *D_8009CDD8;
extern void *D_8009CDDC;
extern M2C_UNK D_8009CDE0;
extern s32 D_8009CE08;
extern s32 D_8009CFB8;

void func_8004E440(void) {
    M2C_UNK sp10;
    M2C_UNK sp40;
    f32 sp50;
    f32 sp54;
    f32 sp58;
    void *sp60;
    M2C_UNK *var_v0;
    M2C_UNK *var_v1;
    f32 temp_fs0;
    void *temp_a2;
    void *temp_s0;
    void *temp_s0_10;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_s0_4;
    void *temp_s0_5;
    void *temp_s0_6;
    void *temp_s0_7;
    void *temp_s0_8;
    void *temp_s0_9;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v1;
    void *var_s0;

    temp_v0 = D_8009CDD8;
    sp60 = temp_v0;
    func_8004DBC4();
    temp_v0_2 = M2C_FIELD(temp_v0, void **, 4);
    sp60 = temp_v0_2;
    if (temp_v0_2 != NULL) {
        temp_fs0 = D_80079BFC;
        do {
            D_8009CFB8 += 1;
            if (!(M2C_FIELD(sp60, u16 *, 0x70) & 0x8000)) {
                temp_s0 = D_8009CC60;
                D_8009CDDC = sp60;
                D_8009CE08 = (s32) M2C_FIELD(sp60, u16 *, 0x72);
                if (M2C_FIELD(sp60, s32 *, 0x28) == 0) {
                    var_v1 = &sp10;
                    var_v0 = &D_80096F70;
                    do {
                        M2C_FIELD(var_v1, s32 *, 0) = (s32) M2C_FIELD(var_v0, s32 *, 0);
                        M2C_FIELD(var_v1, s32 *, 4) = (s32) M2C_FIELD(var_v0, s32 *, 4);
                        M2C_FIELD(var_v1, s32 *, 8) = (s32) M2C_FIELD(var_v0, s32 *, 8);
                        M2C_FIELD(var_v1, s32 *, 0xC) = (s32) M2C_FIELD(var_v0, s32 *, 0xC);
                        var_v0 += 0x10;
                        var_v1 += 0x10;
                    } while (var_v0 != &D_80096FB0);
                    func_8004FE94(&sp10, M2C_FIELD(sp60, s32 *, 0x20));
                    func_8004FF8C(&sp10, M2C_FIELD(sp60, s32 *, 0x24));
                    func_8004FD90(&sp10, M2C_FIELD(sp60, s32 *, 0x1C));
                    sp50 = M2C_FIELD(sp60, f32 *, 0x10);
                    sp54 = M2C_FIELD(sp60, f32 *, 0x14);
                    sp58 = M2C_FIELD(sp60, f32 *, 0x18);
                    func_800503F8(&sp10, &sp40, &sp50);
                    guMtxF2L(&sp10, sp60 + ((D_8009CC48 << 6) + 0x120));
                }
                temp_s0_2 = temp_s0 + 8;
                temp_s0_3 = temp_s0_2 + 8;
                M2C_FIELD(temp_s0, s32 *, 0) = 0x03800010;
                M2C_FIELD(temp_s0, void **, 4) = (void *) (sp60 + 0x80);
                M2C_FIELD(temp_s0, s32 *, 8) = 0xB6000000;
                M2C_FIELD(temp_s0_2, s32 *, 4) = 0x1F3205;
                M2C_FIELD(temp_s0_2, s32 *, 8) = 0xBB000000;
                M2C_FIELD(temp_s0_3, s32 *, 4) = 0;
                var_s0 = temp_s0_3 + 8;
                if (!(M2C_FIELD(sp60, u16 *, 0x70) & 0x1000)) {
                    temp_v1 = var_s0;
                    M2C_FIELD(temp_s0_3, s32 *, 8) = 0xBC00000E;
                    var_s0 += 8;
                    M2C_FIELD(temp_v1, s32 *, 4) = (s32) M2C_FIELD((sp60 + (D_8009CD84 * 2)), u16 *, 0x1A0);
                }
                if (M2C_FIELD(sp60, u16 *, 0x70) & 0x4000) {
                    temp_s0_4 = var_s0 + 8;
                    temp_s0_5 = temp_s0_4 + 8;
                    temp_s0_6 = temp_s0_5 + 8;
                    M2C_FIELD(var_s0, s32 *, 0) = 0xB900031D;
                    M2C_FIELD(var_s0, s32 *, 4) = 0x0F0A4000;
                    M2C_FIELD(var_s0, s32 *, 8) = 0xBA001402;
                    M2C_FIELD(temp_s0_4, s32 *, 4) = 0x300000;
                    M2C_FIELD(temp_s0_4, s32 *, 8) = 0xF7000000;
                    temp_s0_7 = temp_s0_6 + 8;
                    temp_s0_8 = temp_s0_7 + 8;
                    M2C_FIELD(temp_s0_5, s32 *, 4) = (s32) M2C_FIELD(sp60, s32 *, 0x9C);
                    M2C_FIELD(temp_s0_5, s32 *, 8) = 0xED000000;
                    M2C_FIELD(temp_s0_6, s32 *, 4) = (s32) ((((s32) ((f32) D_8009CBD0 * temp_fs0) & 0xFFF) << 0xC) | ((s32) ((f32) D_8009CBE4 * temp_fs0) & 0xFFF));
                    M2C_FIELD(temp_s0_6, s32 *, 8) = (s32) (((((M2C_FIELD(sp60, s16 *, 0x74) + M2C_FIELD(sp60, s16 *, 0x78)) - 1) & 0x3FF) << 0xE) | (((((M2C_FIELD(sp60, s16 *, 0x76) + M2C_FIELD(sp60, s16 *, 0x7A)) - 1) & 0x3FF) * 4) | 0xF6000000));
                    var_s0 = temp_s0_8 + 8;
                    M2C_FIELD(temp_s0_7, s32 *, 4) = (s32) ((((u16) M2C_FIELD(sp60, s16 *, 0x74) & 0x3FF) << 0xE) | (((u16) M2C_FIELD(sp60, s16 *, 0x76) & 0x3FF) * 4));
                    M2C_FIELD(temp_s0_7, s32 *, 8) = 0xE7000000;
                    M2C_FIELD(temp_s0_8, s32 *, 4) = 0;
                }
                temp_s0_9 = var_s0 + 8;
                temp_s0_10 = temp_s0_9 + 8;
                M2C_FIELD(var_s0, s32 *, 0) = 0x01030040;
                D_8009CC60 = temp_s0_10 + 8;
                temp_a2 = sp60 + ((D_8009CC48 << 6) + 0x120);
                M2C_FIELD(var_s0, void **, 4) = (void *) (sp60 + ((D_8009CD84 << 6) + 0xA0));
                M2C_FIELD(var_s0, s32 *, 8) = 0x01010040;
                M2C_FIELD(temp_s0_9, void **, 4) = temp_a2;
                M2C_FIELD(temp_s0_9, s32 *, 8) = 0x01020040;
                M2C_FIELD(temp_s0_10, M2C_UNK **, 4) = &D_80095E60;
                func_80071430(&D_8009CDE0, 0, temp_a2, var_s0);
                osWritebackDCache(&sp60, 0x1A8);
            }
            temp_v0_3 = M2C_FIELD(sp60, void **, 4);
            sp60 = temp_v0_3;
        } while (temp_v0_3 != NULL);
    }
    func_8004DE50();
}
