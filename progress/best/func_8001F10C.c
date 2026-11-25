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

M2C_UNK func_8001ED08(void *);                      /* extern */
M2C_UNK func_8001EE44(void *, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
void *func_800205E0(M2C_UNK *, s32);                /* extern */
M2C_UNK func_800235F0();                            /* extern */
M2C_UNK func_80023634(void *, M2C_UNK *, M2C_UNK *, s32, M2C_UNK *, s32); /* extern */
extern M2C_UNK D_80075668;
extern M2C_UNK D_8007568C;
extern M2C_UNK D_80083060;
extern M2C_UNK D_80083280;
extern M2C_UNK D_80083430;
extern M2C_UNK D_800837A0;
extern M2C_UNK D_80083BA8;
extern M2C_UNK D_8008CEB0;
extern M2C_UNK D_8008CEEC;
extern M2C_UNK D_8008CF28;
extern M2C_UNK D_8008D8EC;
extern M2C_UNK D_8008D9EC;
extern M2C_UNK D_800992E0;
extern M2C_UNK func_8001318C;
extern M2C_UNK func_8001EC70;

void func_8001F10C(void *arg0) {
    M2C_UNK *var_a0;
    M2C_UNK *var_s0;
    M2C_UNK *var_s3;
    M2C_UNK *var_s5;
    M2C_UNK *var_s6;
    M2C_UNK *var_v1;
    s32 var_a0_2;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s2;
    void *temp_v0;

    func_800235F0();
    var_s1 = 0;
    var_v1 = &D_8008D8EC;
    var_a0 = &D_8008D9EC;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = -1;
    do {
        M2C_FIELD(var_v1, M2C_UNK **, 0xC) = var_a0;
        M2C_FIELD(var_v1, s32 *, 0) = 5;
        M2C_FIELD(var_v1, s32 *, 4) = 1;
        M2C_FIELD(var_v1, M2C_UNK **, 8) = &D_8008CEB0;
        var_v1 += 0x10;
        var_s1 += 1;
        var_a0 += 0x20;
    } while (var_s1 < 9);
    M2C_FIELD(&D_8008D8EC, M2C_UNK **, 8) = &D_8008CEEC;
    M2C_FIELD(&D_8008D8EC, M2C_UNK **, 0x18) = &D_8008CF28;
    M2C_FIELD(&D_8008D8EC, s32 *, 0) = 0;
    M2C_FIELD(&D_8008D8EC, s32 *, 0x10) = 0;
    func_8001EE44(arg0, &D_8008D8EC, 1, 5);
    if (arg0 == &D_800837A0) {
        var_s3 = &func_8001318C;
        var_s6 = &D_80075668;
        var_s5 = &D_80083060;
    } else {
        var_s6 = &D_8007568C;
        var_s3 = &func_8001EC70;
        var_s5 = &D_80083430;
    }
    var_s2 = 0;
    var_s1_2 = 0;
    var_s0 = &D_800992E0;
loop_6:
    if (var_s1_2 < 0xF) {
        temp_v0 = func_800205E0(&D_80083BA8, var_s1_2);
        var_a0_2 = 0;
        if (M2C_FIELD(temp_v0, u8 *, 0) == 0) {
            var_a0_2 = M2C_FIELD(temp_v0, u8 *, 1) == 0;
        }
        if (var_a0_2 != 0) {
            var_s1_2 += 1;
        } else {
            M2C_FIELD(var_s0, void **, 0) = (void *) (temp_v0 + 2);
            if (arg0 == &D_800837A0) {
                M2C_FIELD(var_s0, M2C_UNK **, 4) = &D_80083060;
            } else {
                M2C_FIELD(var_s0, M2C_UNK **, 4) = &D_80083280;
            }
            M2C_FIELD(var_s0, M2C_UNK **, 8) = var_s3;
            M2C_FIELD(var_s0, s32 *, 0xC) = 0x14;
            var_s0 += 0x10;
            var_s2 += 1;
            var_s1_2 += 1;
        }
        goto loop_6;
    }
    func_80023634(arg0, var_s6, &D_800992E0, var_s2, var_s5, 0);
    func_8001ED08(arg0);
}
