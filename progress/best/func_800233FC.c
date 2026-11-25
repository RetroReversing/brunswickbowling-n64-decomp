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

M2C_UNK func_80013824(M2C_UNK *, M2C_UNK **, s32, M2C_UNK, s32); /* extern */
M2C_UNK func_8001C210(M2C_UNK *, void **);          /* extern */
extern M2C_UNK D_80075CC4;
extern M2C_UNK D_80081B20;

void func_800233FC(void *arg0, M2C_UNK arg1) {
    M2C_UNK *sp18;
    s32 sp1C;
    M2C_UNK *sp20;
    s32 sp24;
    M2C_UNK *sp28;
    M2C_UNK *sp30;
    M2C_UNK *sp38;
    void *sp40;
    M2C_UNK *temp_a0;
    M2C_UNK *var_a0;
    M2C_UNK *var_s0;
    s16 temp_s0;
    s32 temp_a2;
    s32 var_a1_2;
    s32 var_s1;
    s32 var_s3;
    s32 var_v0;
    u16 var_a1;
    void **temp_v1;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;

    temp_v0 = M2C_FIELD(arg0, void **, 0x10);
    var_s3 = 0x53;
    if (M2C_FIELD(temp_v0, s32 (**)(void *), 0x74)(arg0 + M2C_FIELD(temp_v0, s16 *, 0x70)) == 6) {
        var_s3 = 0x4B;
    }
    temp_v0_2 = M2C_FIELD(arg0, void **, 0x10);
    temp_s0 = M2C_FIELD(arg0, s16 *, 0x4A);
    if (M2C_FIELD(temp_v0_2, s32 (**)(void *), 0x74)(arg0 + M2C_FIELD(temp_v0_2, s16 *, 0x70)) >= temp_s0) {
        var_a1 = (u16) M2C_FIELD(arg0, s16 *, 0x4A);
        var_v0 = var_a1 << 0x10;
    } else {
        temp_v0_3 = M2C_FIELD(arg0, void **, 0x10);
        var_a1 = M2C_FIELD(temp_v0_3, s32 (**)(void *), 0x74)(arg0 + M2C_FIELD(temp_v0_3, s16 *, 0x70));
        var_v0 = var_a1 << 0x10;
    }
    M2C_FIELD(arg0, u16 *, 0x48) = var_a1;
    if (M2C_FIELD(arg0, s16 *, 0x4A) < (M2C_FIELD(arg0, s16 *, 0x4C) + (var_v0 >> 0x10))) {
        M2C_FIELD(arg0, s16 *, 0x4C) = (s16) ((u16) M2C_FIELD(arg0, s16 *, 0x4A) - var_a1);
    }
    var_a1_2 = 0;
    var_a0 = &D_80081B20;
loop_8:
    if (var_a1_2 < 0xC) {
        var_a1_2 += 1;
        if (M2C_FIELD(arg0, s32 *, 8) != (arg0 + 8)) {
            M2C_FIELD(M2C_FIELD(var_a0, void **, 0), void ***, 4) = (void **) M2C_FIELD(var_a0, void ***, 4);
            temp_v1 = M2C_FIELD(var_a0, void ***, 4);
            temp_v0_4 = M2C_FIELD(var_a0, void **, 0);
            var_a0 += 19;
            *temp_v1 = temp_v0_4;
            goto loop_8;
        }
    }
    var_s1 = 0;
    if ((s16) M2C_FIELD(arg0, u16 *, 0x48) > 0) {
        var_s0 = &D_80081B20;
loop_13:
        if (var_s1 < (s16) M2C_FIELD(arg0, u16 *, 0x48)) {
            sp20 = var_s0;
            sp38 = var_s0;
            sp30 = var_s0;
            sp40 = arg0 + 8;
            func_8001C210(var_s0, &sp40);
            temp_a0 = var_s0;
            sp28 = sp30;
            sp18 = sp20;
            var_s0 += 0x4C;
            var_s3 += 0x13;
            temp_a2 = M2C_FIELD(arg0, s16 *, 0x4C) + var_s1;
            func_80013824(temp_a0, M2C_FIELD(arg0, s32 *, 0x44) + (temp_a2 * 0x10), temp_a2, arg1, var_s3);
            var_s1 += 1;
            goto loop_13;
        }
    } else {
        sp18 = M2C_FIELD(&D_80075CC4, M2C_UNK **, 0);
        sp1C = M2C_FIELD(&D_80075CC4, s32 *, 4);
        sp20 = M2C_FIELD(&D_80075CC4, M2C_UNK **, 8);
        sp24 = M2C_FIELD(&D_80075CC4, s32 *, 0xC);
        func_80013824(&D_80081B20, &sp18, 0, arg1, var_s3);
    }
}
