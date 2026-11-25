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

void *func_800205F8(M2C_UNK *, s32);                /* extern */
s32 func_80020620(M2C_UNK *, s32, s32);             /* extern */
M2C_UNK func_80029B08(s32, M2C_UNK *, s32);         /* extern */
M2C_UNK func_8005A970(void *, s32);                 /* extern */
extern M2C_UNK D_80075758;
extern M2C_UNK D_80075764;
extern M2C_UNK D_80075768;
extern M2C_UNK D_80075774;
extern s32 D_80083A70;
extern M2C_UNK D_80083BA8;
extern M2C_UNK D_8008B130;
extern M2C_UNK D_8008CEB0;
extern M2C_UNK D_8008CF28;
extern M2C_UNK D_8008D8EC;
extern M2C_UNK D_8008D9EC;

void func_8001F59C(void *arg0) {
    M2C_UNK *var_v1;
    s32 temp_a2_2;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s3;
    void *temp_a0;
    void *temp_a2;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s1;
    void *temp_v0;
    void *var_s0;
    void *var_s4;

    var_s2 = 0;
    var_v1 = &D_8008D8EC;
    do {
        M2C_FIELD(var_v1, s32 *, 0) = 0;
        M2C_FIELD(var_v1, s32 *, 4) = 1;
        M2C_FIELD(var_v1, M2C_UNK **, 8) = &D_8008CEB0;
        var_s2 += 1;
        var_v1 += 0x10;
    } while (var_s2 < 0x10);
    temp_v0 = func_800205F8(&D_80083BA8, M2C_FIELD(arg0, s32 *, 0x50));
    if (M2C_FIELD(temp_v0, u8 *, 2) != 0) {
        temp_s0 = (0 << 5) + &D_8008D9EC;
        func_8005A970(temp_s0, func_80020620(&D_80083BA8, M2C_FIELD(arg0, s32 *, 0x50), 0) + 2);
        M2C_FIELD(((0 * 0x10) + &D_8008D8EC), void **, 0xC) = temp_s0;
        temp_a0 = (2 * 0x10) + &D_8008D8EC;
        M2C_FIELD(((1 * 0x10) + &D_8008D8EC), M2C_UNK **, 0xC) = &D_80075758;
        M2C_FIELD(temp_a0, M2C_UNK **, 8) = &D_8008CF28;
        M2C_FIELD(temp_a0, M2C_UNK **, 0xC) = &D_80075764;
        temp_s0_2 = (3 << 5) + &D_8008D9EC;
        func_8005A970(temp_s0_2, *((M2C_FIELD(temp_v0, u8 *, 3) * 0x1C) + &D_8008B130));
        var_s3 = 4;
        M2C_FIELD(((3 * 0x10) + &D_8008D8EC), void **, 0xC) = temp_s0_2;
    } else {
        temp_s1 = (0 << 5) + &D_8008D9EC;
        var_s2_2 = 0;
        func_8005A970(temp_s1, *((M2C_FIELD(temp_v0, u8 *, 3) * 0x1C) + &D_8008B130));
        var_s3 = 4;
        var_s4 = (4 << 5) + &D_8008D9EC;
        var_s0 = (4 * 0x10) + &D_8008D8EC;
        temp_a2 = (2 * 0x10) + &D_8008D8EC;
        M2C_FIELD(((0 * 0x10) + &D_8008D8EC), void **, 0xC) = temp_s1;
        M2C_FIELD(((1 * 0x10) + &D_8008D8EC), M2C_UNK **, 0xC) = &D_80075768;
        M2C_FIELD(temp_a2, M2C_UNK **, 8) = &D_8008CF28;
        M2C_FIELD(temp_a2, M2C_UNK **, 0xC) = &D_80075764;
        M2C_FIELD(((3 * 0x10) + &D_8008D8EC), M2C_UNK **, 0xC) = &D_80075774;
        do {
            temp_a2_2 = var_s2_2;
            var_s2_2 += 1;
            M2C_FIELD(var_s0, s32 *, 0) = 6;
            M2C_FIELD(var_s0, s32 *, 4) = 1;
            M2C_FIELD(var_s0, M2C_UNK **, 8) = &D_8008CEB0;
            var_s3 += 1;
            func_8005A970(var_s4, func_80020620(&D_80083BA8, M2C_FIELD(arg0, s32 *, 0x50), temp_a2_2) + 2);
            M2C_FIELD(var_s0, void **, 0xC) = var_s4;
            var_s4 += 0x20;
            var_s0 += 0x10;
        } while (var_s2_2 < 6);
    }
    func_80029B08(D_80083A70, &D_8008D8EC, var_s3);
}
