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
extern char D_80079210[];
extern char D_80079220[];
extern char D_80079234[];
extern char D_80079248[];
extern char D_80079258[];
extern char D_8007926C[];
extern char D_8007927C[];
extern char D_80079298[];
extern char D_800792B0[];
extern s32 D_80083A70;
extern char D_80083AF0[];
extern char D_8008CEB0[];
extern char D_8008CF28[];
extern char D_8008D8EC[];
extern s32 D_8008D944;
extern char D_8008D9EC[];
extern char D_8008E9E4[];

void func_80040A5C(void *arg0, s32 arg1, s32 arg2) {
    s32 *var_a0_2;
    s32 *var_a1;
    s32 *var_a1_4;
    s32 *var_v1;
    s32 temp_s2;
    s32 temp_s2_2;
    s32 temp_s2_3;
    s32 var_a0;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a2_3;
    s32 var_s2;
    s32 var_s4;
    s32 var_v0;
    void *var_a1_2;
    void *var_a1_3;
    void *var_v1_2;
    void *var_v1_3;

    var_s4 = arg2;
    var_a2 = 0;
    var_v1 = D_8008D8EC;
    var_a1 = D_8008D9EC;
    do {
        M2C_FIELD(var_v1, s32 **, 0xC) = var_a1;
        M2C_FIELD(var_v1, s32 **, 8) = D_8008CF28;
        M2C_FIELD(var_v1, s32 *, 0) = 7;
        var_v1 += 0x10;
        var_a2 += 1;
        var_a1 += 0x20;
    } while (var_a2 < 6);
    var_a2_2 = 6;
    var_v1_2 = D_8008D8EC + 0x60;
    var_a1_2 = D_8008D9EC + 0xC0;
    do {
        M2C_FIELD(var_v1_2, void **, 0xC) = var_a1_2;
        M2C_FIELD(var_v1_2, s32 **, 8) = D_8008CEB0;
        M2C_FIELD(var_v1_2, s32 *, 0) = 6;
        var_v1_2 += 0x10;
        var_a2_2 += 1;
        var_a1_2 += 0x20;
    } while (var_a2_2 < 9);
    var_a2_3 = 9;
    var_v1_3 = D_8008D8EC + 0x90;
    var_a1_3 = D_8008D9EC + 0x120;
    do {
        M2C_FIELD(var_v1_3, void **, 0xC) = var_a1_3;
        M2C_FIELD(var_v1_3, s32 **, 8) = D_8008CF28;
        M2C_FIELD(var_v1_3, s32 *, 0) = 7;
        var_v1_3 += 0x10;
        var_a2_3 += 1;
        var_a1_3 += 0x20;
    } while (var_a2_3 < 0xD);
    if (var_s4 == -1) {
        var_s4 = M2C_FIELD(arg0, s32 *, 0x8C);
    }
    func_8005978C(D_8008D9EC, D_8007920C, var_a2_3, 7);
    func_8005978C(D_8008D9EC + 0x20, D_8007920C);
    func_8005978C(D_8008D9EC + 0x40, D_8007920C);
    func_8005978C(D_8008D9EC + 0x60, D_8007920C);
    func_8005978C(D_8008D9EC + 0x80, D_8007920C);
    D_8008D944 = 0;
    var_s2 = 6;
    func_8005978C(D_8008D9EC + 0xA0, D_8007920C);
    if (arg1 != 1) {
        if (arg1 < 2) {
            var_v0 = 6 * 0x10;
            if (arg1 != 0) {
                var_a0 = 6 << 5;
            } else {
                var_a0_2 = D_8008D9EC + 0xC0;
                var_a1_4 = D_80079210;
                goto block_19;
            }
        } else {
            var_a0_2 = D_8008D9EC + 0xC0;
            if (arg1 != 2) {
                var_v0 = 6 * 0x10;
                if (arg1 != 3) {
                    var_a0 = 6 << 5;
                } else {
                    var_a1_4 = D_8007926C;
                    goto block_19;
                }
            } else {
                var_a1_4 = D_80079258;
                goto block_19;
            }
        }
    } else {
        var_a0_2 = D_8008D9EC + 0xC0;
        var_a1_4 = D_80079248;
block_19:
        var_s2 = 9;
        func_8005978C(var_a0_2, var_a1_4);
        func_8005978C(D_8008D9EC + 0xE0, D_80079220);
        func_8005978C(D_8008D9EC + 0x100, D_80079234, *((var_s4 * 4) + D_8008E9E4));
        var_v0 = 9 * 0x10;
        var_a0 = 9 << 5;
    }
    temp_s2 = var_s2 + 1;
    M2C_FIELD((var_v0 + D_8008D8EC), s32 *, 8) = 0;
    func_8005978C(var_a0 + D_8008D9EC, D_8007920C);
    temp_s2_2 = temp_s2 + 1;
    func_8005978C((temp_s2 << 5) + D_8008D9EC, D_8007927C);
    temp_s2_3 = temp_s2_2 + 1;
    func_8005978C((temp_s2_2 << 5) + D_8008D9EC, D_80079298);
    func_8005978C((temp_s2_3 << 5) + D_8008D9EC, D_800792B0, *((var_s4 * 4) + D_8008E9E4));
    func_80029B08(D_80083A70, D_8008D8EC, temp_s2_3 + 1);
    func_8003E500(D_80083AF0, 0x18);
}
