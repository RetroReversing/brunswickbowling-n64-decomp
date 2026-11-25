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

s32 func_80011A4C();
s32 func_80011CA4();
s32 func_80012E10();
s32 func_8002E8F0();
s32 func_80031FD4();
extern s32 D_8007DA40;
extern char D_8007DA48[];
extern s32 D_8007E4E0;
extern char D_8007F618[];
extern s32 D_80082760;
extern char D_8008AD1C[];
extern char D_8008AD48[];
extern char D_8008AE7C[];
extern char D_8008B3A4[];

void func_800215AC(void *arg0) {
    s32 *temp_a1;
    s32 *var_s1_2;
    s32 *var_s1_3;
    s32 temp_a2;
    s32 temp_fp;
    s32 temp_v1;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s1;
    s32 var_v0;
    s32 var_v0_2;
    void *temp_a3;
    void *temp_v0;

    temp_fp = D_8007E4E0;
    if (M2C_FIELD(arg0, s32 *, 8) != 0) {
        var_v0 = D_80082760;
    } else {
        var_v0 = (s32) M2C_FIELD(arg0, u8 *, 0x202);
    }
    var_s0 = 0;
    if (var_v0 != 0) {
        var_s1 = 0;
        M2C_FIELD(D_8007F618, s32 **, 0x50) = D_8008AD48;
        M2C_FIELD(D_8007F618, s32 **, 0x4C) = D_8008AD1C;
        D_8007E4E0 = 0;
        M2C_FIELD(D_8007F618, s32 **, 0x48) = D_8008AE7C;
        var_v0_2 = 0 < 3;
loop_5:
        if (var_v0_2 != 0) {
            temp_v0 = var_s1 + arg0 + 0x20;
            temp_a2 = var_s0;
            var_s1 += 0x50;
            var_s0 += 1;
            M2C_FIELD(arg0, void **, 0) = temp_v0;
            M2C_FIELD(arg0, s32 *, 4) = 8;
            func_80011A4C((D_8007E4E0 * 0x1C4) + D_8007DA48, D_8007F618, temp_a2);
            var_v0_2 = var_s0 < 3;
            goto loop_5;
        }
        func_80011CA4(D_8007F618, D_8007DA48, 1);
    } else {
        D_8007E4E0 = 0;
loop_9:
        if (D_8007E4E0 < D_8007DA40) {
            temp_a3 = (D_8007E4E0 * 0x50) + arg0 + 0x20;
            temp_a1 = (D_8007E4E0 * 0x5C) + D_8007F618;
            temp_v1 = D_8007E4E0 * 0x2C;
            M2C_FIELD(temp_a1, void **, 0x50) = (void *) (temp_v1 + D_8008AD48);
            M2C_FIELD(temp_a1, s32 *, 0x4C) = 0;
            M2C_FIELD(temp_a1, void **, 0x48) = (void *) (temp_v1 + D_8008AE7C);
            M2C_FIELD(arg0, void **, 0) = temp_a3;
            M2C_FIELD(arg0, s32 *, 4) = 8;
            func_80011A4C((D_8007E4E0 * 0x1C4) + D_8007DA48, temp_a1, 2, temp_a3);
            M2C_FIELD(arg0, s32 *, 4) = 8;
            M2C_FIELD(arg0, void **, 0) = (void *) ((D_8007E4E0 * 0x50) + arg0 + 0x12BC);
            func_80011A4C((D_8007E4E0 * 0x1C4) + D_8007DA48, (D_8007E4E0 * 0x5C) + D_8007F618, 2);
            func_80011CA4((D_8007E4E0 * 0x5C) + D_8007F618, (D_8007E4E0 * 0x1C4) + D_8007DA48, 1);
            D_8007E4E0 += 1;
            goto loop_9;
        }
    }
    M2C_FIELD(arg0, void **, 0) = (void *) (arg0 + 0x200);
    M2C_FIELD(arg0, s32 *, 4) = 8;
    func_80031FD4(D_8008B3A4);
    var_s0_2 = 0;
    var_s1_2 = D_8007F618;
    do {
        func_80012E10(var_s1_2);
        var_s0_2 += 1;
        var_s1_2 += 0x5C;
    } while (var_s0_2 < 0x64);
    var_s0_3 = 0;
    var_s1_3 = D_8008AE7C;
    do {
        func_8002E8F0(var_s1_3);
        var_s0_3 += 1;
        var_s1_3 += 0x2C;
    } while (var_s0_3 < 7);
    D_8007E4E0 = temp_fp;
}
