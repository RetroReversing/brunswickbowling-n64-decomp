/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O1, tried by autopilot */
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

M2C_UNK func_800162E0(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_8001C210(M2C_UNK *, void **);          /* extern */
extern M2C_UNK D_80081CE8;
extern M2C_UNK D_80082780;

void func_80023E08(void *arg0, s16 arg1, s16 arg2, s32 arg3, s32 arg4) {
    M2C_UNK *sp18;
    M2C_UNK *sp20;
    M2C_UNK *sp28;
    M2C_UNK *sp30;
    void *sp38;
    M2C_UNK *var_a0;
    M2C_UNK *var_s0;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 var_a1;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s2;

    var_a1 = 0;
    M2C_FIELD(arg0, s16 *, 0x22) = arg1;
    M2C_FIELD(arg0, s16 *, 0x24) = arg2;
    var_s2 = arg2 + 5;
    var_s1 = 0;
    var_a0 = &D_80081CE8;
    M2C_FIELD(arg0, s32 *, 0x18) = 1;
    M2C_FIELD(arg0, s16 *, 0x20) = 0xF0;
    M2C_FIELD(arg0, s16 *, 0x14) = 0x280;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s16 *, 0x16) = 0x3D;
loop_1:
    if (var_s1 < arg4) {
        temp_v1 = M2C_FIELD(var_a0, s16 *, 0x38);
        if (var_a1 < temp_v1) {
            var_a1 = temp_v1;
        }
        var_a0 += 16;
        var_s1 += 1;
        goto loop_1;
    }
    var_s1_2 = 0;
    var_s0 = &D_80081CE8;
loop_6:
    if (var_s1_2 < arg4) {
        sp18 = var_s0;
        sp30 = var_s0;
        sp28 = var_s0;
        sp38 = arg0 + 8;
        func_8001C210(var_s0, &sp38);
        sp20 = sp28;
        var_s1_2 += 1;
        M2C_FIELD(var_s0, s16 *, 0x3A) = (s16) (arg3 - 0x14);
        temp_v1_2 = M2C_FIELD(arg0, s16 *, 0x16) + var_s2;
        var_s2 += 0xA;
        M2C_FIELD(var_s0, s16 *, 0x18) = (s16) (M2C_FIELD(arg0, s16 *, 0x14) + (arg1 + 0xA));
        M2C_FIELD(var_s0, s16 *, 0x1A) = temp_v1_2;
        var_s0 += 0x40;
        goto loop_6;
    }
    M2C_FIELD(arg0, s16 *, 0x28) = (s16) ((var_s2 + 5) - arg2);
    M2C_FIELD(arg0, u16 *, 0x26) = (u16) arg3;
    func_800162E0(&D_80082780, &D_80081CE8, 0);
}
