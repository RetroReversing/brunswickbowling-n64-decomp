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

M2C_UNK func_800478C0(f32 (*)[], f32 (*)[], f32 (*)[], M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK D_800826D0;

#define sp20 ((s32 *)(sp + 0x20))
#define sp24 (*(s32 *)(sp + 0x24))
#define sp28 ((s32 *)(sp + 0x28))
#define sp2C (*(s32 *)(sp + 0x2C))
#define sp30 ((s32 *)(sp + 0x30))
#define sp34 (*(s32 *)(sp + 0x34))
s32 func_80015540(void) {
    u8 sp[72];
    M2C_UNK *var_a0;
    s32 var_a1;
    s32 var_v0;

    func_800478C0((f32 (*)[]) &sp20[0], (f32 (*)[]) &sp28[0], (f32 (*)[]) &sp30[0], &sp24, &sp2C, &sp34);
    var_a1 = 0;
    var_a0 = &D_800826D0;
loop_1:
    var_v0 = 1;
    if (var_a1 < 5) {
        var_v0 = 0;
        if (!(M2C_FIELD(var_a0, f32 *, 0xC) < ((M2C_FIELD(var_a0, f32 *, 0) * (&sp20[0])[M2C_FIELD(var_a0, s32 *, 0x10)]) + (M2C_FIELD(var_a0, f32 *, 4) * -(&sp28[0])[M2C_FIELD(var_a0, s32 *, 0x14) == 0]) + (M2C_FIELD(var_a0, f32 *, 8) * (&sp30[0])[M2C_FIELD(var_a0, s32 *, 0x18)])))) {
            var_a0 += 7;
            var_a1 += 1;
            goto loop_1;
        }
    }
    return var_v0;
}
