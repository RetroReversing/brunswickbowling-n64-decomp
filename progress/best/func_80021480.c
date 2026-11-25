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

M2C_UNK func_800215AC(void *, s32, s32);            /* extern */

void func_80021480(void *arg0) {
    s32 temp_a2;
    s32 temp_a3;
    void *temp_a1;
    void *var_a1;
    void *var_v0;
    void *var_v1;
    void *var_v1_2;

    var_a1 = arg0 + 0x20;
    if (M2C_FIELD(arg0, s32 *, 0x12B8) != 0) {
        var_v1 = arg0 + 0x96C;
        M2C_FIELD(arg0, s32 *, 0x12B8) = 0;
        if (((s32) var_v1 | (s32) var_a1) & 3) {
            do {
                M2C_FIELD(var_a1, M2C_UNK *, 0) = M2C_UNALIGNED32(M2C_FIELD(var_v1, M2C_UNK *, 0));
                M2C_FIELD(var_a1, M2C_UNK *, 4) = M2C_UNALIGNED32(M2C_FIELD(var_v1, M2C_UNK *, 4));
                M2C_FIELD(var_a1, M2C_UNK *, 8) = M2C_UNALIGNED32(M2C_FIELD(var_v1, M2C_UNK *, 8));
                M2C_FIELD(var_a1, M2C_UNK *, 0xC) = M2C_UNALIGNED32(M2C_FIELD(var_v1, M2C_UNK *, 0xC));
                var_v1 += 0x10;
                var_a1 += 0x10;
            } while (var_v1 != (arg0 + 0x12AC));
        } else {
            do {
                M2C_FIELD(var_a1, s32 *, 0) = (s32) M2C_FIELD(var_v1, s32 *, 0);
                M2C_FIELD(var_a1, s32 *, 4) = (s32) M2C_FIELD(var_v1, s32 *, 4);
                M2C_FIELD(var_a1, s32 *, 8) = (s32) M2C_FIELD(var_v1, s32 *, 8);
                M2C_FIELD(var_a1, s32 *, 0xC) = (s32) M2C_FIELD(var_v1, s32 *, 0xC);
                var_v1 += 0x10;
                var_a1 += 0x10;
            } while (var_v1 != (arg0 + 0x12AC));
        }
        M2C_FIELD(var_a1, M2C_UNK *, 0) = M2C_UNALIGNED32(M2C_FIELD(var_v1, M2C_UNK *, 0));
        M2C_FIELD(var_a1, M2C_UNK *, 4) = M2C_UNALIGNED32(M2C_FIELD(var_v1, M2C_UNK *, 4));
        M2C_FIELD(var_a1, M2C_UNK *, 8) = M2C_UNALIGNED32(M2C_FIELD(var_v1, M2C_UNK *, 8));
        var_v1_2 = arg0 + 0x12BC;
        var_v0 = arg0 + 0x149C;
        temp_a1 = arg0 + 0x167C;
        do {
            temp_a2 = M2C_FIELD(var_v0, s32 *, 0);
            temp_a3 = M2C_FIELD(var_v0, s32 *, 4);
            M2C_FIELD(var_v1_2, s32 *, 0) = temp_a2;
            M2C_FIELD(var_v1_2, s32 *, 4) = temp_a3;
            M2C_FIELD(var_v1_2, s32 *, 8) = (s32) M2C_FIELD(var_v0, s32 *, 8);
            M2C_FIELD(var_v1_2, s32 *, 0xC) = (s32) M2C_FIELD(var_v0, s32 *, 0xC);
            var_v0 += 0x10;
            var_v1_2 += 0x10;
        } while (var_v0 != temp_a1);
        M2C_FIELD(arg0, s32 *, 8) = 0;
        func_800215AC(temp_a1, temp_a2, temp_a3);
    }
}
