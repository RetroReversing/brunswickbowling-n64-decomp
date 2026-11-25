/* machine draft (m2c) for sn-n64-281 -G0 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mfp64, tried by autopilot */
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

M2C_UNK func_80048B3C(u8 *, s32, u8 *, s32);        /* extern */

void func_800421A8(s32 arg0, s32 arg1) {
    u8 sp10;
    u8 sp11;
    u8 sp12;
    s32 temp_a3;
    s32 temp_v0;
    s32 var_a1;
    u8 *var_a0;
    u8 *var_a2;
    void *var_v1;

    var_a2 = &sp10;
    temp_v0 = (arg1 * 0x38) + arg0;
    var_v1 = temp_v0 + 0x48;
    do {
        M2C_FIELD(var_a2, s32 *, 0) = (s32) M2C_FIELD(var_v1, s32 *, 0);
        M2C_FIELD(var_a2, s32 *, 4) = (s32) M2C_FIELD(var_v1, s32 *, 4);
        M2C_FIELD(var_a2, s32 *, 8) = (s32) M2C_FIELD(var_v1, s32 *, 8);
        M2C_FIELD(var_a2, s32 *, 0xC) = (s32) M2C_FIELD(var_v1, s32 *, 0xC);
        var_v1 += 0x10;
        var_a2 += 0x10;
    } while (var_v1 != (temp_v0 + 0x78));
    var_a1 = 0;
    var_a0 = &sp10;
    temp_a3 = M2C_FIELD(var_v1, s32 *, 0);
    M2C_FIELD(var_a2, s32 *, 0) = temp_a3;
    M2C_FIELD(var_a2, s32 *, 4) = (s32) M2C_FIELD(var_v1, s32 *, 4);
    sp10 = (u8) (sp10 >> 1);
    sp12 = (u8) (sp12 >> 1);
    sp11 = (u8) (sp11 >> 1);
    __repair_rows: {
        var_a1 += 1;
        M2C_FIELD(var_a0, u8 *, 0x11) = (u8) -(s32) M2C_FIELD(var_a0, u8 *, 0x11);
        M2C_FIELD(var_a0, s8 *, 8) = (s8) ((u8) M2C_FIELD(var_a0, u8 *, 0xC) >> 3);
        M2C_FIELD(var_a0, s8 *, 9) = (s8) ((u8) M2C_FIELD(var_a0, u8 *, 0xD) >> 3);
        M2C_FIELD(var_a0, s8 *, 0xA) = (s8) ((u8) M2C_FIELD(var_a0, u8 *, 0xE) >> 3);
        var_a0 += 0x10;
    }
if (var_a1 < 3) goto __repair_rows;
    func_80048B3C(&sp10, var_a1, var_a2, temp_a3);
}
