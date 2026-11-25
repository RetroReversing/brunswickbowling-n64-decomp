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

M2C_UNK func_8001154C(M2C_UNK *, void *, M2C_UNK);  /* extern */
M2C_UNK func_800115D4(M2C_UNK *, u8 *, M2C_UNK);    /* extern */
M2C_UNK func_8001161C(M2C_UNK *, void *, M2C_UNK);  /* extern */
M2C_UNK func_80011664(M2C_UNK *, void *, M2C_UNK);  /* extern */
M2C_UNK func_800116AC(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK D_8007DA44;
extern M2C_UNK D_80081A08;
extern M2C_UNK D_80081A6C;
extern M2C_UNK D_80082760;
extern M2C_UNK D_80083BA8;

void func_80031FD4(void *arg0) {
    u8 sp10;
    s32 var_s0;
    s32 var_s3;
    s32 var_s4;
    s32 var_s5;
    u32 var_s1;
    u32 var_s1_2;
    void *var_s1_3;

    if (M2C_FIELD(&D_80083BA8, s32 *, 8) == 0) {
        M2C_FIELD(arg0, s32 *, 0x18) = 1;
    }
    func_8001154C(&D_80083BA8, arg0 + 0x14, 2);
    func_800116AC(&D_80083BA8, &D_80082760, 8);
    func_80011664(&D_80083BA8, arg0 + 0x28, 8);
    func_800116AC(&D_80083BA8, arg0 + 0x44, 8);
    var_s1 = 0;
    sp10 = M2C_FIELD(&D_80082760, u8 *, 7);
    func_800115D4(&D_80083BA8, &sp10, 8);
    M2C_FIELD(&D_80082760, s32 *, 4) = (s32) (s8) sp10;
    func_80011664(&D_80083BA8, arg0 + 0x38, 4);
    func_800116AC(&D_80083BA8, arg0 + 0x20, 1);
    func_800115D4(&D_80083BA8, arg0 + 0x48, 7);
    func_800115D4(&D_80083BA8, arg0 + 0x49, 5);
    func_800115D4(&D_80083BA8, arg0 + 0x4A, 5);
    func_800115D4(&D_80083BA8, arg0 + 0x4B, 8);
    func_80011664(&D_80083BA8, arg0 + 0x68, 3);
    func_80011664(&D_80083BA8, arg0 + 0x78, 4);
    func_80011664(&D_80083BA8, arg0 + 0x88, 2);
    func_800116AC(&D_80083BA8, &D_8007DA44, 3);
    __repair_rows: {
        func_800115D4(&D_80083BA8, var_s1 + &D_80081A08, 7);
        var_s1 += 1;
    }
if (var_s1 < 0x64U) goto __repair_rows;
    var_s1_2 = 0;
    do {
        func_800115D4(&D_80083BA8, var_s1_2 + &D_80081A6C, 7);
        var_s1_2 += 1;
    } while (var_s1_2 < 0x64U);
    var_s5 = 0;
    var_s4 = 0x4C;
    var_s3 = 0x5C;
loop_7:
    var_s0 = 0;
    if (var_s5 < 4) {
        var_s1_3 = arg0 + var_s4;
        do {
            func_800115D4(&D_80083BA8, arg0 + var_s3 + var_s0, 7);
            func_8001161C(&D_80083BA8, var_s1_3, 9);
            var_s0 += 1;
            var_s1_3 += 2;
        } while (var_s0 < 2);
        var_s4 += 4;
        var_s3 += 2;
        var_s5 += 1;
        goto loop_7;
    }
}
