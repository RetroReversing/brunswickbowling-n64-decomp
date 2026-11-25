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

M2C_UNK func_80040914(M2C_UNK *, s32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_800580A0(s32, M2C_UNK, M2C_UNK);       /* extern */
extern M2C_UNK D_8008EB34;

void func_800211D8(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_a0;
    s32 var_a1;
    s32 var_a2;
    s32 var_v1;

    var_a2 = arg1;
    if (var_a2 < 5) {
        var_a1 = (var_a2 * 0x94C) + arg0;
        do {
            var_a0 = var_a1 + 0x1B3A;
            var_v1 = var_a1 + 0x2486;
            temp_v0 = var_a1 + 0x2DC6;
            if ((var_v1 | var_a0) & 3) {
                do {
                    M2C_FIELD(var_a0, M2C_UNK *, 0) = M2C_UNALIGNED32(M2C_FIELD(var_v1, M2C_UNK *, 0));
                    M2C_FIELD(var_a0, M2C_UNK *, 4) = M2C_UNALIGNED32(M2C_FIELD(var_v1, M2C_UNK *, 4));
                    M2C_FIELD(var_a0, M2C_UNK *, 8) = M2C_UNALIGNED32(M2C_FIELD(var_v1, M2C_UNK *, 8));
                    M2C_FIELD(var_a0, M2C_UNK *, 0xC) = M2C_UNALIGNED32(M2C_FIELD(var_v1, M2C_UNK *, 0xC));
                    var_v1 += 0x10;
                    var_a0 += 0x10;
                } while (var_v1 != temp_v0);
            } else {
                do {
                    M2C_FIELD(var_a0, s32 *, 0) = (s32) M2C_FIELD(var_v1, s32 *, 0);
                    M2C_FIELD(var_a0, s32 *, 4) = (s32) M2C_FIELD(var_v1, s32 *, 4);
                    M2C_FIELD(var_a0, s32 *, 8) = (s32) M2C_FIELD(var_v1, s32 *, 8);
                    M2C_FIELD(var_a0, s32 *, 0xC) = (s32) M2C_FIELD(var_v1, s32 *, 0xC);
                    var_v1 += 0x10;
                    var_a0 += 0x10;
                } while (var_v1 != temp_v0);
            }
            M2C_FIELD(var_a0, M2C_UNK *, 0) = M2C_UNALIGNED32(M2C_FIELD(var_v1, M2C_UNK *, 0));
            M2C_FIELD(var_a0, M2C_UNK *, 4) = M2C_UNALIGNED32(M2C_FIELD(var_v1, M2C_UNK *, 4));
            M2C_FIELD(var_a0, M2C_UNK *, 8) = M2C_UNALIGNED32(M2C_FIELD(var_v1, M2C_UNK *, 8));
            var_a2 += 1;
            var_a1 += 0x94C;
        } while (var_a2 < 5);
    }
    func_800580A0(arg0 + 0x49B6, 0, 0x94C);
    func_80040914(&D_8008EB34, arg0 + 0x1680, 0, -1);
}
