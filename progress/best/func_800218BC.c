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

void *func_800205F8(void *, s32);                   /* extern */
M2C_UNK func_80020BA8(void *);                      /* extern */
M2C_UNK func_80021378();                            /* extern */
s32 func_80040914(M2C_UNK *, void *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_8008B3A4;
extern M2C_UNK D_8008EB34;

s32 func_800218BC(void *arg0) {
    s32 var_s0;
    s32 var_v0;
    s32 var_v1;
    u8 temp_a1;
    void *temp_v0;
    void *temp_v0_2;
    void *var_a0;
    void *var_v1_2;

    func_80021378();
    M2C_FIELD(arg0, s32 *, 0x167C) = 1;
    var_s0 = 0;
    if (M2C_FIELD(&D_8008B3A4, s32 *, 0x18) != 0) {
loop_2:
        if (var_s0 < 6) {
            temp_v0 = func_800205F8(arg0, var_s0);
            temp_a1 = M2C_FIELD(temp_v0, u8 *, 0);
            var_v1 = 0;
            if (M2C_FIELD(&D_8008B3A4, u8 *, 0x14) == temp_a1) {
                var_v1 = M2C_FIELD((&D_8008B3A4 + 0x14), u8 *, 1) == M2C_FIELD(temp_v0, u8 *, 1);
            }
            if (var_v1 == 0) {
                var_v0 = 0;
                if (temp_a1 == 0) {
                    var_v0 = M2C_FIELD(temp_v0, u8 *, 1) == 0;
                }
                if (var_v0 == 0) {
                    var_s0 += 1;
                    goto loop_2;
                }
            }
        }
        if (var_s0 == 6) {
            return -2;
        }
        var_a0 = arg0 + (var_s0 * 0x94C) + 0x1B3A;
        var_v1_2 = arg0 + 0x20;
        temp_v0_2 = arg0 + 0x960;
        if (((s32) var_v1_2 | (s32) var_a0) & 3) {
            do {
                M2C_FIELD(var_a0, M2C_UNK *, 0) = M2C_UNALIGNED32(M2C_FIELD(var_v1_2, M2C_UNK *, 0));
                M2C_FIELD(var_a0, M2C_UNK *, 4) = M2C_UNALIGNED32(M2C_FIELD(var_v1_2, M2C_UNK *, 4));
                M2C_FIELD(var_a0, M2C_UNK *, 8) = M2C_UNALIGNED32(M2C_FIELD(var_v1_2, M2C_UNK *, 8));
                M2C_FIELD(var_a0, M2C_UNK *, 0xC) = M2C_UNALIGNED32(M2C_FIELD(var_v1_2, M2C_UNK *, 0xC));
                var_v1_2 += 0x10;
                var_a0 += 0x10;
            } while (var_v1_2 != temp_v0_2);
        } else {
            do {
                M2C_FIELD(var_a0, s32 *, 0) = (s32) M2C_FIELD(var_v1_2, s32 *, 0);
                M2C_FIELD(var_a0, s32 *, 4) = (s32) M2C_FIELD(var_v1_2, s32 *, 4);
                M2C_FIELD(var_a0, s32 *, 8) = (s32) M2C_FIELD(var_v1_2, s32 *, 8);
                M2C_FIELD(var_a0, s32 *, 0xC) = (s32) M2C_FIELD(var_v1_2, s32 *, 0xC);
                var_v1_2 += 0x10;
                var_a0 += 0x10;
            } while (var_v1_2 != temp_v0_2);
        }
        M2C_FIELD(var_a0, M2C_UNK *, 0) = M2C_UNALIGNED32(M2C_FIELD(var_v1_2, M2C_UNK *, 0));
        M2C_FIELD(var_a0, M2C_UNK *, 4) = M2C_UNALIGNED32(M2C_FIELD(var_v1_2, M2C_UNK *, 4));
        M2C_FIELD(var_a0, M2C_UNK *, 8) = M2C_UNALIGNED32(M2C_FIELD(var_v1_2, M2C_UNK *, 8));
        goto block_18;
    }
block_18:
    func_80020BA8(arg0);
    return func_80040914(&D_8008EB34, arg0 + 0x1680, 0, -1);
}
