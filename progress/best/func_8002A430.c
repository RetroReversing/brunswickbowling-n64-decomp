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

s32 func_80029B70();
s32 func_80029C2C();
s32 func_80029D3C();
s32 func_80029EE8();
s32 func_80029F84();
extern char D_800899EC[];
extern char D_800899F8[];
extern char D_80089A04[];
extern char D_80089A08[];

s32 func_8002A430(void *arg0, s32 arg1, s32 arg2) {
    s32 *var_v0;
    s32 var_a1;
    s32 var_v1;
    u8 temp_a0;
    u8 temp_a0_2;

    switch (arg2) {
    case 0x20D:
        if (M2C_FIELD(arg0, s32 *, 0x40) != 0) {
            var_v0 = D_800899F8;
block_6:
            func_80029B70(arg0, *(M2C_FIELD(arg0, s32 *, 0x40) + var_v0), 1);
            func_80029C2C(arg0);
        }
        break;
    case 0x20E:
        if (M2C_FIELD(arg0, s32 *, 0x40) != 0) {
            var_v0 = D_800899EC;
            goto block_6;
        }
        break;
    case 0x20F:
        temp_a0 = *(M2C_FIELD(arg0, s32 *, 0x40) + D_80089A08);
        var_v1 = temp_a0 + 1;
        var_a1 = var_v1;
        if (var_v1 < 0) {
            var_a1 = temp_a0 + 4;
        }
block_11:
        func_80029B70(arg0, *((var_v1 - (var_a1 & 0x1FC)) + D_80089A04), 1);
        break;
    case 0x210:
        temp_a0_2 = *(M2C_FIELD(arg0, s32 *, 0x40) + D_80089A08);
        var_v1 = temp_a0_2 + 3;
        var_a1 = var_v1;
        if (var_v1 < 0) {
            var_a1 = temp_a0_2 + 6;
        }
        goto block_11;
    case 0x216:
        func_80029EE8(arg0);
        break;
    case 0x20A:
        func_80029D3C(arg0, M2C_FIELD(arg0, s32 *, 0x40), 1);
        break;
    case 0x20B:
        func_80029F84(arg0);
        break;
    }
    return 0;
}
