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

M2C_UNK func_8000FB40();                            /* extern */
M2C_UNK func_800149E4(s32);                         /* extern */
M2C_UNK func_8001A444(M2C_UNK *);                   /* extern */
M2C_UNK func_8001AA60(void *, M2C_UNK *);           /* extern */
s32 func_8002AB14(M2C_UNK);                         /* extern */
M2C_UNK func_80032558(M2C_UNK *, M2C_UNK *, M2C_UNK, s32); /* extern */
M2C_UNK func_80032744(M2C_UNK *, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_80032870(M2C_UNK *);                   /* extern */
extern s32 D_8007E4E0;
extern M2C_UNK D_80081AD0;
extern M2C_UNK D_80082368;
extern M2C_UNK D_800827A4;
extern M2C_UNK D_800827C4;
extern M2C_UNK D_80082ED0;
extern s32 D_80089248;
extern s32 D_8008996C;
extern M2C_UNK D_8008B470;
extern M2C_UNK D_8008C5F8;
extern s32 D_8008F0A0;
extern s32 D_80092524;
extern s32 D_800925F0;

void func_8001AD98(void *arg0) {
    M2C_UNK var_a0_3;
    s32 var_a3;
    s32 var_v0;
    void *temp_a2;
    void *temp_v0;
    void *var_a0;
    void *var_a0_2;
    void *var_a1;
    void *var_v1;

    var_a1 = &D_8008B470 + 0x368;
    var_a0 = &D_8008B470 + 0x338;
    temp_a2 = var_a1;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 1;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(&D_8008B470, s16 *, 0x330) = 0;
    do {
        M2C_FIELD(var_a1, s32 *, 0) = (s32) M2C_FIELD(var_a0, s32 *, 0);
        M2C_FIELD(var_a1, s32 *, 4) = (s32) M2C_FIELD(var_a0, s32 *, 4);
        M2C_FIELD(var_a1, s32 *, 8) = (s32) M2C_FIELD(var_a0, s32 *, 8);
        M2C_FIELD(var_a1, s32 *, 0xC) = (s32) M2C_FIELD(var_a0, s32 *, 0xC);
        var_a0 += 0x10;
        var_a1 += 0x10;
    } while (var_a0 != temp_a2);
    var_a0_2 = &D_8008B470 + 0x1C;
    var_v1 = &D_800827A4 + 0x2E;
    temp_v0 = &D_800827A4 + 0x2EE;
    if (((s32) var_v1 | (s32) var_a0_2) & 3) {
        do {
            var_a3 = M2C_UNALIGNED32(M2C_FIELD(var_v1, M2C_UNK *, 0));
            M2C_FIELD(var_a0_2, M2C_UNK *, 0) = var_a3;
            M2C_FIELD(var_a0_2, M2C_UNK *, 4) = M2C_UNALIGNED32(M2C_FIELD(var_v1, M2C_UNK *, 4));
            M2C_FIELD(var_a0_2, M2C_UNK *, 8) = M2C_UNALIGNED32(M2C_FIELD(var_v1, M2C_UNK *, 8));
            M2C_FIELD(var_a0_2, M2C_UNK *, 0xC) = M2C_UNALIGNED32(M2C_FIELD(var_v1, M2C_UNK *, 0xC));
            var_v1 += 0x10;
            var_a0_2 += 0x10;
        } while (var_v1 != temp_v0);
    } else {
        do {
            var_a3 = M2C_FIELD(var_v1, s32 *, 0);
            M2C_FIELD(var_a0_2, s32 *, 0) = var_a3;
            M2C_FIELD(var_a0_2, s32 *, 4) = (s32) M2C_FIELD(var_v1, s32 *, 4);
            M2C_FIELD(var_a0_2, s32 *, 8) = (s32) M2C_FIELD(var_v1, s32 *, 8);
            M2C_FIELD(var_a0_2, s32 *, 0xC) = (s32) M2C_FIELD(var_v1, s32 *, 0xC);
            var_v1 += 0x10;
            var_a0_2 += 0x10;
        } while (var_v1 != temp_v0);
    }
    D_8008996C = 0;
    if ((M2C_FIELD((&D_80081AD0)[D_8007E4E0], u8 *, 0x18) ^ 1) == 0) {
        func_80032558(&D_8008B470, &D_800827C4, 1, var_a3);
    } else {
        func_80032744(&D_8008B470, 0, 1, var_a3);
    }
    func_8000FB40();
    D_8008F0A0 = 1;
    D_80092524 = 0;
    D_800925F0 = 0;
    func_8001AA60(arg0, &D_8008C5F8);
    func_8001A444(&D_80082ED0);
    func_80032870(&D_8008B470);
    if ((D_80089248 ^ 1) == 0) {
        var_a0_3 = 2;
        goto block_14;
    }
    var_a0_3 = 4;
    if ((D_80089248 ^ 2) == 0) {
        var_v0 = func_8002AB14(2) + 2;
    } else {
block_14:
        var_v0 = func_8002AB14(var_a0_3);
    }
    func_800149E4(*((var_v0 * 4) + &D_80082368));
}
