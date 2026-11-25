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

void func_8003409C(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_a0;
    s32 var_a1;

    var_a1 = arg1;
    var_a0 = arg0 + 0x1C;
    temp_v0 = var_a1 + 0x2C0;
    if ((var_a1 | var_a0) & 3) {
        __repair_rows: {
            M2C_FIELD(var_a0, M2C_UNK *, 0) = M2C_UNALIGNED32(M2C_FIELD(var_a1, M2C_UNK *, 0));
            M2C_FIELD(var_a0, M2C_UNK *, 4) = M2C_UNALIGNED32(M2C_FIELD(var_a1, M2C_UNK *, 4));
            M2C_FIELD(var_a0, M2C_UNK *, 8) = M2C_UNALIGNED32(M2C_FIELD(var_a1, M2C_UNK *, 8));
            M2C_FIELD(var_a0, M2C_UNK *, 0xC) = M2C_UNALIGNED32(M2C_FIELD(var_a1, M2C_UNK *, 0xC));
            var_a1 += 0x10;
            var_a0 += 0x10;
        }
if (var_a1 != temp_v0) goto __repair_rows;
        return;
    }
    do {
        M2C_FIELD(var_a0, s32 *, 0) = (s32) M2C_FIELD(var_a1, s32 *, 0);
        M2C_FIELD(var_a0, s32 *, 4) = (s32) M2C_FIELD(var_a1, s32 *, 4);
        M2C_FIELD(var_a0, s32 *, 8) = (s32) M2C_FIELD(var_a1, s32 *, 8);
        M2C_FIELD(var_a0, s32 *, 0xC) = (s32) M2C_FIELD(var_a1, s32 *, 0xC);
        var_a1 += 0x10;
        var_a0 += 0x10;
    } while (var_a1 != temp_v0);
}
