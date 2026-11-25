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

s32 func_80029B08();
s32 func_8003E500();
s32 func_8005978C();
extern char D_8007920C[];
extern char D_800792C4[];
extern char D_800792D8[];
extern char D_800792F0[];
extern char D_80079304[];
extern char D_80079308[];
extern char D_8007931C[];
extern char D_80079334[];
extern char D_8007934C[];
extern char D_80079360[];
extern char D_80079374[];
extern char D_8007938C[];
extern char D_800793A0[];
extern char D_800793B0[];
extern char D_800793C4[];
extern char D_800793DC[];
extern char D_800793F0[];
extern char D_80079404[];
extern char D_80079418[];
extern char D_8007942C[];
extern char D_80079440[];
extern char D_80079458[];
extern char D_80079470[];
extern char D_80079484[];
extern char D_80079498[];
extern char D_800794B0[];
extern char D_800794C8[];
extern char D_800794D8[];
extern char D_800794EC[];
extern char D_80079500[];
extern char D_80079518[];
extern char D_8007952C[];
extern char D_80079540[];
extern char D_80079558[];
extern char D_80079570[];
extern char D_80079588[];
extern char D_8007959C[];
extern char D_800795B0[];
extern char D_800795C4[];
extern char D_800795D8[];
extern s32 D_80083A70;
extern char D_80083AF0[];
extern char D_8008CEB0[];
extern char D_8008CF28[];
extern char D_8008D8EC[];
extern char D_8008D9EC[];
extern char D_8008E9E4[];

void func_80040D50(void *arg0, u32 arg1, s32 arg2) {
    s32 *var_a0;
    s32 *var_a0_2;
    s32 *var_a0_3;
    s32 *var_a1;
    s32 *var_a1_2;
    s32 *var_a1_3;
    s32 *var_a1_4;
    s32 *var_v1;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_s3;
    s32 var_s4;
    s32 var_s4_2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;

    var_s3 = arg2;
    var_a2 = 0;
    var_v1 = D_8008D8EC;
    var_a1 = D_8008D9EC;
    do {
        M2C_FIELD(var_v1, s32 **, 0xC) = var_a1;
        M2C_FIELD(var_v1, s32 **, 8) = D_8008CEB0;
        M2C_FIELD(var_v1, s32 *, 0) = 6;
        var_v1 += 0x10;
        var_a2 += 1;
        var_a1 += 0x20;
    } while (var_a2 < 0x10);
    if (var_s3 == -1) {
        var_s3 = M2C_FIELD(arg0, s32 *, 0x8C);
    }
    func_8005978C(D_8008D9EC, D_8007920C, var_a2, 6);
    func_8005978C(D_8008D9EC + 0x20, D_8007920C);
    func_8005978C(D_8008D9EC + 0x40, D_8007920C);
    var_s4 = 4;
    func_8005978C(D_8008D9EC + 0x60, D_8007920C);
    switch (arg1) {
    case 0:
        func_8005978C((4 << 5) + D_8008D9EC, D_800792C4);
        func_8005978C((5 << 5) + D_8008D9EC, D_800792D8);
        func_8005978C((6 << 5) + D_8008D9EC, D_800792F0);
        func_8005978C((7 << 5) + D_8008D9EC, D_80079304, *((var_s3 * 4) + D_8008E9E4));
        temp_v0 = (8 * 0x10) + D_8008D8EC;
        M2C_FIELD(temp_v0, s32 **, 8) = D_8008CF28;
        M2C_FIELD(temp_v0, s32 *, 0) = 8;
        func_8005978C((8 << 5) + D_8008D9EC, D_8007920C);
        var_s4 = 0xA;
        temp_v0_2 = (9 * 0x10) + D_8008D8EC;
        M2C_FIELD(temp_v0_2, s32 **, 8) = D_8008CF28;
        M2C_FIELD(temp_v0_2, s32 *, 0) = 8;
        func_8005978C((9 << 5) + D_8008D9EC, D_80079308);
        break;
    case 1:
        func_8005978C((4 << 5) + D_8008D9EC, D_8007931C);
        func_8005978C((5 << 5) + D_8008D9EC, D_80079334);
        var_s4 = 7;
        var_a0 = (6 << 5) + D_8008D9EC;
        var_a2_2 = *((var_s3 * 4) + D_8008E9E4);
        var_a1_2 = D_80079304;
block_24:
        func_8005978C(var_a0, var_a1_2, var_a2_2);
    default:
        break;
    case 2:
        func_8005978C((4 << 5) + D_8008D9EC, D_8007934C);
        func_8005978C((5 << 5) + D_8008D9EC, D_80079360);
        func_8005978C((6 << 5) + D_8008D9EC, D_800792F0);
        func_8005978C((7 << 5) + D_8008D9EC, D_80079304, *((var_s3 * 4) + D_8008E9E4));
        temp_v0_3 = (8 * 0x10) + D_8008D8EC;
        M2C_FIELD(temp_v0_3, s32 **, 8) = D_8008CF28;
        M2C_FIELD(temp_v0_3, s32 *, 0) = 8;
        func_8005978C((8 << 5) + D_8008D9EC, D_8007920C);
        var_s4 = 0xA;
        var_a0 = (9 << 5) + D_8008D9EC;
        var_a1_2 = D_80079374;
        var_a2_2 = 0x3E;
        temp_v0_4 = (9 * 0x10) + D_8008D8EC;
        M2C_FIELD(temp_v0_4, s32 **, 8) = D_8008CF28;
        M2C_FIELD(temp_v0_4, s32 *, 0) = 8;
        goto block_24;
    case 3:
        func_8005978C((4 << 5) + D_8008D9EC, D_8007938C);
        func_8005978C((5 << 5) + D_8008D9EC, D_800793A0, *((var_s3 * 4) + D_8008E9E4));
        func_8005978C((6 << 5) + D_8008D9EC, D_800793B0);
        func_8005978C((7 << 5) + D_8008D9EC, D_800793C4);
        var_s4 = 9;
        func_8005978C((8 << 5) + D_8008D9EC, D_800793DC);
        break;
    case 6:
        func_8005978C((4 << 5) + D_8008D9EC, D_800793F0);
        func_8005978C((5 << 5) + D_8008D9EC, D_80079404);
        var_s4 = 7;
        var_a0 = (6 << 5) + D_8008D9EC;
        var_a2_2 = *((var_s3 * 4) + D_8008E9E4);
        var_a1_2 = D_80079418;
        goto block_24;
    case 7:
        func_8005978C((4 << 5) + D_8008D9EC, D_8007942C);
        func_8005978C((5 << 5) + D_8008D9EC, D_80079440);
        func_8005978C((6 << 5) + D_8008D9EC, D_80079458, *((var_s3 * 4) + D_8008E9E4));
        temp_v0_5 = (7 * 0x10) + D_8008D8EC;
        M2C_FIELD(temp_v0_5, s32 **, 8) = D_8008CF28;
        M2C_FIELD(temp_v0_5, s32 *, 0) = 8;
        func_8005978C((7 << 5) + D_8008D9EC, D_8007920C);
        var_s4 = 9;
        var_a0 = (8 << 5) + D_8008D9EC;
        var_a1_2 = D_80079470;
        var_a2_2 = 0x3E;
        temp_v0_6 = (8 * 0x10) + D_8008D8EC;
        M2C_FIELD(temp_v0_6, s32 **, 8) = D_8008CF28;
        M2C_FIELD(temp_v0_6, s32 *, 0) = 8;
        goto block_24;
    case 15:
        func_8005978C((4 << 5) + D_8008D9EC, D_80079484);
        func_8005978C((5 << 5) + D_8008D9EC, D_80079498);
        var_s4 = 7;
        var_a0 = (6 << 5) + D_8008D9EC;
        var_a2_2 = *((var_s3 * 4) + D_8008E9E4);
        var_a1_2 = D_800794B0;
        goto block_24;
    case 14:
        var_a0_2 = (4 << 5) + D_8008D9EC;
        var_a1_3 = D_800794C8;
block_22:
        func_8005978C(var_a0_2, var_a1_3);
        var_s4_2 = 6;
        var_a0_3 = (5 << 5) + D_8008D9EC;
        var_a1_4 = D_800794D8;
block_23:
        func_8005978C(var_a0_3, var_a1_4);
        var_s4 = var_s4_2 + 1;
        var_a0 = (var_s4_2 << 5) + D_8008D9EC;
        var_a2_2 = *((var_s3 * 4) + D_8008E9E4);
        var_a1_2 = D_80079458;
        goto block_24;
    case 12:
        func_8005978C((4 << 5) + D_8008D9EC, D_800794EC);
        var_s4_2 = 6;
        var_a0_3 = (5 << 5) + D_8008D9EC;
        var_a1_4 = D_80079500;
        goto block_23;
    case 13:
        func_8005978C((4 << 5) + D_8008D9EC, D_80079518);
        var_s4_2 = 6;
        var_a0_3 = (5 << 5) + D_8008D9EC;
        var_a1_4 = D_80079500;
        goto block_23;
    case 17:
        func_8005978C((4 << 5) + D_8008D9EC, D_8007952C);
        var_s4_2 = 6;
        var_a0_3 = (5 << 5) + D_8008D9EC;
        var_a1_4 = D_80079540;
        goto block_23;
    case 16:
        func_8005978C((4 << 5) + D_8008D9EC, D_8007952C);
        var_s4_2 = 6;
        var_a0_3 = (5 << 5) + D_8008D9EC;
        var_a1_4 = D_80079558;
        goto block_23;
    case 8:
        func_8005978C((4 << 5) + D_8008D9EC, D_800794EC);
        var_s4_2 = 6;
        var_a0_3 = (5 << 5) + D_8008D9EC;
        var_a1_4 = D_80079570;
        goto block_23;
    case 10:
        func_8005978C((4 << 5) + D_8008D9EC, D_80079518);
        func_8005978C((5 << 5) + D_8008D9EC, D_80079588);
        func_8005978C((6 << 5) + D_8008D9EC, D_8007959C);
        var_s4 = 8;
        var_a0 = (7 << 5) + D_8008D9EC;
        var_a2_2 = *((var_s3 * 4) + D_8008E9E4);
        var_a1_2 = D_800795B0;
        goto block_24;
    case 9:
        func_8005978C((4 << 5) + D_8008D9EC, D_8007952C);
        var_s4_2 = 6;
        var_a0_3 = (5 << 5) + D_8008D9EC;
        var_a1_4 = D_800795C4;
        goto block_23;
    case 11:
        var_a0_2 = (4 << 5) + D_8008D9EC;
        var_a1_3 = D_800795D8;
        goto block_22;
    }
    func_80029B08(D_80083A70, D_8008D8EC, var_s4);
    func_8003E500(D_80083AF0, 0x18);
}
