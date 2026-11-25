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

M2C_UNK func_8001AC48(M2C_UNK *);                   /* extern */
M2C_UNK func_8001C210(void *, s32 *);               /* extern */
M2C_UNK func_80032EC8(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_800375C0(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_8003812C(M2C_UNK *);                   /* extern */
M2C_UNK func_80046230(M2C_UNK *);                   /* extern */
extern s32 D_8007DA40;
extern s32 D_8007E4E0;
extern M2C_UNK D_8007F618;
extern M2C_UNK D_80081AD0;
extern M2C_UNK D_80082F00;
extern s32 D_800898C8;
extern M2C_UNK D_80089930;
extern M2C_UNK D_8008B3A4;
extern s32 D_8008B3BC;
extern M2C_UNK D_8008B470;
extern s16 D_8008B7A0;
extern M2C_UNK D_8008BA90;
extern M2C_UNK D_8008C864;
extern M2C_UNK D_8008C9CC;
extern s32 D_8008E9E0;
extern M2C_UNK D_8008F2F0;
extern s32 D_8008F3B0;

void func_800244FC(void *arg0, s32 arg1) {
    void *sp18;
    void *sp20;
    void *sp28;
    void *sp30;
    s32 sp38;
    M2C_UNK *var_a0;
    s16 temp_v0_4;
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 var_a1;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a2_3;
    s32 var_t0;
    s32 var_v1;
    s32 var_v1_2;
    void *temp_a1;

    M2C_FIELD(arg0, s32 *, 0x34) = 1;
    D_800898C8 = D_8008F3B0;
    if (M2C_FIELD(&D_8008BA90, s32 *, 0x14) == 0) {
        M2C_FIELD(&D_8008BA90, s32 *, 0x14) = (s32) D_8008E9E0;
    }
    func_8001AC48(&D_80082F00);
    func_8003812C(&D_8008C9CC);
    func_80046230(&D_8008F2F0);
    func_800375C0(&D_8008C864, 1);
    if (arg1 != 0) {
        func_80032EC8(&D_8008B470, &D_8008B3A4);
        M2C_FIELD(&D_8008B470, u8 *, 0x31A) = (u8) M2C_FIELD(arg0, u8 *, 0x30);
        return;
    }
    sp18 = arg0;
    sp30 = arg0;
    sp28 = arg0;
    sp38 = M2C_FIELD(&D_8008BA90, s32 *, 8);
    func_8001C210(arg0, &sp38);
    sp20 = sp28;
    M2C_FIELD(arg0, u16 *, 0x14) = 0xAU;
    M2C_FIELD(arg0, s16 *, 0x2A) = 0;
    M2C_FIELD(arg0, s16 *, 0x16) = 0;
    var_a2 = 1;
    if (D_8008B7A0 != 0) {
        var_a2 = 2;
        M2C_FIELD(arg0, s16 *, 0x18) = 1;
    } else {
        M2C_FIELD(arg0, u16 *, 0x14) = (u16) (M2C_FIELD(arg0, u16 *, 0x14) - 1);
    }
    temp_a0 = var_a2 + 1;
    M2C_FIELD((arg0 + ((s32) (var_a2 << 0x10) >> 0xF)), s16 *, 0x16) = 2;
    temp_a1 = *((D_8007E4E0 * 4) + &D_80081AD0);
    var_a2_2 = temp_a0;
    var_v1 = 0;
    if (M2C_FIELD(temp_a1, s32 *, 0x28) != 0) {
        var_v1 = M2C_FIELD(temp_a1, u8 *, 0x18) == 1;
    }
    if (var_v1 != 0) {
        var_a2_2 = temp_a0 + 1;
        M2C_FIELD((arg0 + ((s32) (temp_a0 << 0x10) >> 0xF)), s16 *, 0x16) = 3;
    } else {
        M2C_FIELD(arg0, u16 *, 0x14) = (u16) (M2C_FIELD(arg0, u16 *, 0x14) - 1);
    }
    var_v1_2 = 0;
    if (M2C_FIELD(&D_80089930, s32 *, 0x14) != 0) {
        var_v1_2 = (u32) M2C_FIELD(&D_80089930, u32 *, 0x3C) > 0U;
    }
    temp_v0 = var_a2_2 + 1;
    if (var_v1_2 != 0) {
        temp_v1 = var_a2_2 << 0x10;
        var_a2_2 = temp_v0 + 1;
        M2C_FIELD((arg0 + (temp_v1 >> 0xF)), s16 *, 0x16) = 4;
        M2C_FIELD((arg0 + ((s32) (temp_v0 << 0x10) >> 0xF)), s16 *, 0x16) = 5;
    } else {
        M2C_FIELD(arg0, u16 *, 0x14) = (u16) (M2C_FIELD(arg0, u16 *, 0x14) - 2);
    }
    var_a2_3 = var_a2_2 + 1;
    var_t0 = 0;
    var_a1 = 0;
    var_a0 = &D_8007F618;
    M2C_FIELD((arg0 + ((s32) (var_a2_2 << 0x10) >> 0xF)), s16 *, 0x16) = 6;
loop_18:
    if (var_a1 < D_8007DA40) {
        if ((M2C_FIELD(var_a0, u8 *, 0x18) ^ 2) != 0) {
            var_t0 = 1;
        } else {
            var_a0 += 23;
            var_a1 += 1;
            goto loop_18;
        }
    }
    temp_v0_2 = var_a2_3;
    if (var_t0 != 0) {
        var_a2_3 += 1;
        M2C_FIELD((arg0 + ((s32) (temp_v0_2 << 0x10) >> 0xF)), s16 *, 0x16) = 7;
    } else {
        M2C_FIELD(arg0, u16 *, 0x14) = (u16) (M2C_FIELD(arg0, u16 *, 0x14) - 1);
    }
    temp_v0_3 = var_a2_3;
    if (D_8008B3BC != 0) {
        var_a2_3 += 1;
        M2C_FIELD((arg0 + ((s32) (temp_v0_3 << 0x10) >> 0xF)), s16 *, 0x16) = 8;
    } else {
        M2C_FIELD(arg0, u16 *, 0x14) = (u16) (M2C_FIELD(arg0, u16 *, 0x14) - 1);
    }
    M2C_FIELD((arg0 + ((s32) (var_a2_3 << 0x10) >> 0xF)), s16 *, 0x16) = 9;
    temp_v0_4 = (((s16) M2C_FIELD(arg0, u16 *, 0x14) + 1) * 0xE) + 0x1A;
    M2C_FIELD(arg0, s16 *, 0x2C) = temp_v0_4;
    M2C_FIELD(arg0, s16 *, 0x2E) = (s16) (0x78 - ((s32) (temp_v0_4 << 0x10) >> 0x11));
}
