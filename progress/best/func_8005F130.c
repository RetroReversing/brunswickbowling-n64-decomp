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

s32 func_8005FB0C(s32);                             /* extern */
M2C_UNK func_8005FB60(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_80066C50(M2C_UNK *, s32, s32, void *); /* extern */
s32 osCartRomInit();                                /* extern */
extern s32 D_800A5AF0;
extern s32 D_800A5AF4;
extern s32 D_800A5AF8;
extern s32 D_800A5AFC;
extern s32 D_800A5B00;
extern s32 D_800A5B04;
extern s32 D_800A5B08;
extern M2C_UNK D_800A5B10;
extern s32 D_800A5B28;
extern M2C_UNK func_8005F374;

M2C_UNK *func_8005F130(s32 arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_4;
    s32 var_s0;
    s32 var_s1;
    void *temp_a3;
    void *temp_v0_3;
    void *temp_v1;

    D_800A5B28 = osCartRomInit();
    D_800A5AFC = func_8005FB0C(arg0 * 0x30);
    temp_s0 = arg0 * 0x14;
    D_800A5B00 = func_8005FB0C(arg0 * 8);
    temp_v0 = func_8005FB0C(temp_s0);
    D_800A5AF8 = temp_v0;
    func_8005FB60(temp_v0, 0, temp_s0);
    temp_v0_2 = arg0 - 1;
    var_s1 = 0;
    if (temp_v0_2 > 0) {
        var_s0 = 0;
        __repair_rows: {
            temp_v0_3 = var_s0 + D_800A5AF8;
            M2C_FIELD(temp_v0_3, s32 *, 4) = (s32) (temp_v0_3 + 0x14);
            M2C_FIELD(temp_v0_3, void **, 0x14) = temp_v0_3;
            var_s1 += 1;
            temp_v1 = var_s0 + D_800A5AF8;
            var_s0 += 0x14;
            M2C_FIELD(temp_v1, s32 *, 0x10) = func_8005FB0C(arg1);
            M2C_FIELD(temp_v1, s32 *, 0xC) = -1;
        }
if (var_s1 < temp_v0_2) goto __repair_rows;
    }
    temp_v0_4 = func_8005FB0C(arg1);
    D_800A5B04 = arg1;
    D_800A5B08 = 0;
    D_800A5AF0 = 0;
    temp_a3 = (var_s1 * 0x14) + D_800A5AF8;
    M2C_FIELD(temp_a3, s32 *, 0x10) = temp_v0_4;
    M2C_FIELD(temp_a3, s32 *, 0xC) = -1;
    D_800A5AF4 = D_800A5AF8;
    func_80066C50(&D_800A5B10, D_800A5B00, arg0 * 2, temp_a3);
    return &func_8005F374;
}
