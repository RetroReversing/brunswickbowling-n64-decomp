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

extern int D_8008D8EC;
extern int D_8008D8F0;
extern int D_8008D8FC;
extern int D_8008D90C;
s32 func_800137B0();
s32 func_800235F0();
s32 func_80023634();
s32 func_80029B08();
extern char D_80074BF0[];
extern char D_80074C00[];
extern char D_80074C0C[];
extern char D_80074C18[];
extern char D_80074C1C[];
extern s32 D_8007DA40;
extern char D_8007F504[];
extern char D_80081B20[];
extern char D_80081B6C[];
extern char D_800830B0[];
extern char D_80083300[];
extern s32 D_80083A70;
extern char D_8008AFB0[];
extern char D_8008CEB0[];
extern char D_8008CF28[];

void func_8001C6C0(s32 arg0) {
    s32 *var_t0;
    s32 var_a2;
    void *temp_a0;
    void *temp_v1;
    void *var_a3;

    func_800235F0();
    func_80023634(arg0, D_80074BF0, D_800830B0, 6, D_80083300, 0);
    temp_a0 = D_8008D8EC + 0x10;
    M2C_FIELD(temp_a0, s32 *, 4) = 1;
    var_a2 = 3;
    var_t0 = D_8007F504 + 0x114;
    var_a3 = D_8008D8EC + 0x30;
    D_8008D8EC = 0;
    *(s32 *)(s32 * *)(D_8008D8EC + 0xC) = D_80074C00;
    D_8008D8F0 = 1;
    *(s32 *)(s32 * *)(D_8008D8EC + 8) = D_8008CEB0;
    D_8008D8FC = 0;
    M2C_FIELD(temp_a0, s32 **, 8) = D_8008CEB0;
    M2C_FIELD(temp_a0, s32 **, 0xC) = D_80074C0C;
    D_8008D90C = 0;
    temp_v1 = D_8008D8EC + 0x20;
    M2C_FIELD(temp_v1, s32 **, 8) = D_8008CF28;
    M2C_FIELD(temp_v1, s32 *, 4) = 1;
    M2C_FIELD(temp_v1, s32 **, 0xC) = D_80074C18;
loop_1:
    if (var_a2 < 9) {
        M2C_FIELD(var_a3, s32 *, 0) = 6;
        M2C_FIELD(var_a3, s32 *, 4) = 1;
        M2C_FIELD(var_a3, s32 **, 8) = D_8008CEB0;
        if ((var_a2 - 3) < D_8007DA40) {
            M2C_FIELD(var_a3, s32 **, 0xC) = var_t0;
        } else {
            M2C_FIELD(var_a3, s32 **, 0xC) = D_80074C1C;
        }
        var_t0 += 0x5C;
        var_a3 += 0x10;
        var_a2 += 1;
        goto loop_1;
    }
    func_80029B08(D_80083A70, &D_8008D8EC, var_a2, var_a3);
    if (D_8007DA40 == 6) {
        func_800137B0(D_80081B20, D_8008AFB0, -1, -1, 2);
    }
    if (D_8007DA40 == 0) {
        func_800137B0(D_80081B6C, D_8008AFB0, 0x1B3, 0x82, 2);
        func_800137B0(D_80081B6C + 0x4C, D_8008AFB0, 0x1B3, 0x82, 2);
        func_800137B0(D_80081B6C + 0x98, D_8008AFB0, 0x1B3, 0x82, 2);
        func_800137B0(D_80081B6C + 0xE4, D_8008AFB0, -1, -1, 2);
    }
}
