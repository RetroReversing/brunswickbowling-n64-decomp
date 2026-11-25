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

extern M2C_UNK D_8008CCB0;

void func_80039540(void) {
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a1;
    s32 var_a2;
    s32 var_t1;
    s32 var_v0;
    s32 var_v0_2;
    u16 *temp_v0;
    u16 temp_a0;
    u16 temp_v1;

    var_a1 = 0;
    M2C_FIELD(M2C_FIELD(&D_8008CCB0, void **, 0x3C), u16 *, 0) = M2C_UNALIGNED32(M2C_FIELD(M2C_FIELD(&D_8008CCB0, void **, 0x24), M2C_UNK *, 0));
    M2C_FIELD(M2C_FIELD(&D_8008CCB0, void **, 0x3C), M2C_UNK *, 4) = M2C_UNALIGNED32(M2C_FIELD(M2C_FIELD(&D_8008CCB0, void **, 0x24), M2C_UNK *, 4));
    M2C_FIELD(M2C_FIELD(&D_8008CCB0, void **, 0x3C), M2C_UNK *, 8) = M2C_UNALIGNED32(M2C_FIELD(M2C_FIELD(&D_8008CCB0, void **, 0x24), M2C_UNK *, 8));
    M2C_FIELD(M2C_FIELD(&D_8008CCB0, void **, 0x3C), M2C_UNK *, 0xC) = M2C_UNALIGNED32(M2C_FIELD(M2C_FIELD(&D_8008CCB0, void **, 0x24), M2C_UNK *, 0xC));
    M2C_FIELD(M2C_FIELD(&D_8008CCB0, void **, 0x3C), M2C_UNK *, 0x10) = M2C_UNALIGNED32(M2C_FIELD(M2C_FIELD(&D_8008CCB0, void **, 0x24), M2C_UNK *, 0x10));
    M2C_FIELD(M2C_FIELD(&D_8008CCB0, void **, 0x3C), M2C_UNK *, 0x14) = M2C_UNALIGNED32(M2C_FIELD(M2C_FIELD(&D_8008CCB0, void **, 0x24), M2C_UNK *, 0x14));
    M2C_FIELD(M2C_FIELD(&D_8008CCB0, void **, 0x3C), M2C_UNK *, 0x18) = M2C_UNALIGNED32(M2C_FIELD(M2C_FIELD(&D_8008CCB0, void **, 0x24), M2C_UNK *, 0x18));
    M2C_FIELD(M2C_FIELD(&D_8008CCB0, void **, 0x3C), M2C_UNK *, 0x1C) = M2C_UNALIGNED32(M2C_FIELD(M2C_FIELD(&D_8008CCB0, void **, 0x24), M2C_UNK *, 0x1C));
    M2C_FIELD(M2C_FIELD(&D_8008CCB0, void **, 8), void **, 0) = (void *) M2C_FIELD(&D_8008CCB0, void **, 0x3C);
    do {
        temp_v0 = (var_a1 * 2) + M2C_FIELD(&D_8008CCB0, void **, 0x3C);
        temp_v1 = M2C_FIELD(temp_v0, u16 *, 0);
        var_a1 += 1;
        M2C_FIELD(temp_v0, u16 *, 0x20) = temp_v1;
        var_t1 = 0;
    } while (var_a1 < 0x10);
    M2C_FIELD(M2C_FIELD(&D_8008CCB0, void **, 0x3C), u16 *, 0x22) = (u16) M2C_FIELD(M2C_FIELD(&D_8008CCB0, void **, 0x3C), u16 *, 0);
    var_a2 = 0;
    M2C_FIELD(M2C_FIELD(&D_8008CCB0, void **, 0x3C), u16 *, 0x30) = (u16) M2C_FIELD(M2C_FIELD(&D_8008CCB0, void **, 0x3C), u16 *, 0);
    M2C_FIELD(M2C_FIELD(&D_8008CCB0, void **, 8), void **, 4) = (void *) (M2C_FIELD(&D_8008CCB0, void **, 0x3C) + 0x20);
loop_3:
    var_a0 = 0;
    if (var_t1 < 2) {
        var_v0 = var_a2;
        do {
            var_a0 += 1;
            M2C_FIELD(((var_v0 * 2) + M2C_FIELD(&D_8008CCB0, void **, 0x3C)), s16 *, 0x40) = 0xFFFF;
            var_v0 = var_a2 + var_a0;
        } while (var_a0 < 8);
        var_a0_2 = 8;
        var_v0_2 = var_a2 + 8;
        do {
            var_a0_2 += 1;
            M2C_FIELD(((var_v0_2 * 2) + M2C_FIELD(&D_8008CCB0, void **, 0x3C)), s16 *, 0x40) = (s16) ((-0x800 & 0xF800) | 0x7C0 | (0x1F * 2) | 1);
            var_v0_2 = var_a2 + var_a0_2;
        } while (var_a0_2 < 0x10);
        var_a2 += 0x10;
        var_t1 += 1;
        goto loop_3;
    }
    temp_a0 = M2C_FIELD(M2C_FIELD(&D_8008CCB0, void **, 0x3C), u16 *, 0);
    M2C_FIELD(M2C_FIELD(&D_8008CCB0, void **, 0x3C), u16 *, 0x60) = temp_a0;
    M2C_FIELD(M2C_FIELD(&D_8008CCB0, void **, 0x3C), u16 *, 0x40) = temp_a0;
    M2C_FIELD(M2C_FIELD(&D_8008CCB0, void **, 0x3C), u16 *, 0x42) = (u16) M2C_FIELD(M2C_FIELD(&D_8008CCB0, void **, 0x3C), u16 *, 2);
    M2C_FIELD(M2C_FIELD(&D_8008CCB0, void **, 0x3C), u16 *, 0x62) = (u16) M2C_FIELD(M2C_FIELD(&D_8008CCB0, void **, 0x3C), u16 *, 0);
    M2C_FIELD(M2C_FIELD(&D_8008CCB0, void **, 0x3C), s16 *, 0x50) = (s16) (M2C_FIELD(M2C_FIELD(&D_8008CCB0, void **, 0x3C), u16 *, 2) | 1);
    M2C_FIELD(M2C_FIELD(&D_8008CCB0, void **, 0x3C), u16 *, 0x70) = (u16) M2C_FIELD(M2C_FIELD(&D_8008CCB0, void **, 0x3C), u16 *, 0);
    M2C_FIELD(M2C_FIELD(&D_8008CCB0, void **, 8), void **, 8) = (void *) (M2C_FIELD(&D_8008CCB0, void **, 0x3C) + 0x40);
    M2C_FIELD(M2C_FIELD(&D_8008CCB0, void **, 8), void **, 0xC) = (void *) (M2C_FIELD(&D_8008CCB0, void **, 0x3C) + 0x60);
}
