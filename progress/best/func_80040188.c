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

s32 func_8005978C();
extern char D_80079180[];
extern char D_8007918C[];
extern char D_800791A4[];
extern char D_800791B4[];
extern char D_800791C8[];
extern s32 D_8008E9E0;
extern char D_8008E9E4[];

s32 func_80040188(void *arg0, s32 arg1, u32 arg2) {
    s32 var_s1;
    s32 var_s3;
    s32 var_v0;
    s32 var_v1;
    void *temp_a0;

    var_s3 = 1;
    switch (arg2) {
    case 0:
        if (M2C_FIELD((arg0 + (arg1 * 4)), s32 *, 0x6C) != -2) {
            var_s3 = 0;
            var_v0 = arg1 * 4;
        } else {
            var_s1 = -1;
            func_8005978C(arg0 + ((arg1 * 0x18) + 0xC), D_80079180);
            var_v0 = arg1 * 4;
        }
        var_v1 = ~M2C_FIELD((arg0 + var_v0), s32 *, 0x6C) != 0;
        break;
    case 1:
        func_8005978C(arg0 + ((arg1 * 0x18) + 0xC), D_8007918C, *((arg1 * 4) + D_8008E9E4));
        var_s1 = 0;
block_17:
        var_v1 = 1;
        if (arg1 == M2C_FIELD(arg0, s32 *, 0x8C)) {
            M2C_FIELD(arg0, s32 *, 0x8C) = -1;
        }
        break;
    case 10:
        func_8005978C(arg0 + ((arg1 * 0x18) + 0xC), D_800791A4, *((arg1 * 4) + D_8008E9E4));
    default:
        var_s1 = -2;
        goto block_17;
    case 2:
        func_8005978C(arg0 + ((arg1 * 0x18) + 0xC), D_80079180);
        var_s1 = -1;
        if (arg1 == M2C_FIELD(arg0, s32 *, 0x8C)) {
            M2C_FIELD(arg0, s32 *, 0x8C) = -1;
        }
        var_v1 = 0;
        break;
    case 5:
        func_8005978C(arg0 + ((arg1 * 0x18) + 0xC), D_800791B4, *((arg1 * 4) + D_8008E9E4));
        var_s1 = 3;
        goto block_17;
    case 9:
        var_s1 = 4;
        func_8005978C(arg0 + ((arg1 * 0x18) + 0xC), D_800791B4, *((arg1 * 4) + D_8008E9E4));
        var_v1 = 1;
        break;
    case 7:
        func_8005978C(arg0 + ((arg1 * 0x18) + 0xC), D_800791C8, *((arg1 * 4) + D_8008E9E4));
        var_s1 = 1;
        goto block_17;
    }
    if (var_s3 != 0) {
        temp_a0 = arg0 + (arg1 * 4);
        if (var_s1 != M2C_FIELD(temp_a0, s32 *, 0x6C)) {
            M2C_FIELD(temp_a0, s32 *, 0x6C) = var_s1;
            M2C_FIELD(temp_a0, s32 *, 0x7C) = (s32) D_8008E9E0;
        }
    }
    return var_v1;
}
