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

extern int D_800A202C;
extern char D_8009CBC0[];
extern s32 D_8009CBE0;
extern char D_8009FE20[];

void func_80042B04(void) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_v1;
    s32 var_v1_2;

    do {

    } while (D_800A202C != 0);
    var_a1 = *((D_8009CBE0 * 4) + D_8009CBC0);
    var_v1 = *(((D_8009CBE0 ^ 1) * 4) + D_8009CBC0);
    if ((var_v1 | var_a1) & 3) {
        temp_v0 = var_v1 + 0x4B000;
        do {
            M2C_FIELD(var_a1, s32 *, 0) = M2C_UNALIGNED32(M2C_FIELD(var_v1, s32 *, 0));
            M2C_FIELD(var_a1, s32 *, 4) = M2C_UNALIGNED32(M2C_FIELD(var_v1, s32 *, 4));
            M2C_FIELD(var_a1, s32 *, 8) = M2C_UNALIGNED32(M2C_FIELD(var_v1, s32 *, 8));
            M2C_FIELD(var_a1, s32 *, 0xC) = M2C_UNALIGNED32(M2C_FIELD(var_v1, s32 *, 0xC));
            var_v1 += 0x10;
            var_a1 += 0x10;
        } while (var_v1 != temp_v0);
    } else {
        temp_v0_2 = var_v1 + 0x4B000;
        do {
            M2C_FIELD(var_a1, s32 *, 0) = (s32) M2C_FIELD(var_v1, s32 *, 0);
            M2C_FIELD(var_a1, s32 *, 4) = (s32) M2C_FIELD(var_v1, s32 *, 4);
            M2C_FIELD(var_a1, s32 *, 8) = (s32) M2C_FIELD(var_v1, s32 *, 8);
            M2C_FIELD(var_a1, s32 *, 0xC) = (s32) M2C_FIELD(var_v1, s32 *, 0xC);
            var_v1 += 0x10;
            var_a1 += 0x10;
        } while (var_v1 != temp_v0_2);
    }
    var_a1_2 = *(((D_8009CBE0 ^ 1) * 4) + D_8009CBC0);
    var_v1_2 = *((D_8009CBE0 * 4) + D_8009CBC0);
    if ((var_v1_2 | var_a1_2) & 3) {
        temp_v0_3 = var_v1_2 + 0x4B000;
        do {
            M2C_FIELD(var_a1_2, s32 *, 0) = M2C_UNALIGNED32(M2C_FIELD(var_v1_2, s32 *, 0));
            M2C_FIELD(var_a1_2, s32 *, 4) = M2C_UNALIGNED32(M2C_FIELD(var_v1_2, s32 *, 4));
            M2C_FIELD(var_a1_2, s32 *, 8) = M2C_UNALIGNED32(M2C_FIELD(var_v1_2, s32 *, 8));
            M2C_FIELD(var_a1_2, s32 *, 0xC) = M2C_UNALIGNED32(M2C_FIELD(var_v1_2, s32 *, 0xC));
            var_v1_2 += 0x10;
            var_a1_2 += 0x10;
        } while (var_v1_2 != temp_v0_3);
        return;
    }
    temp_v0_4 = var_v1_2 + 0x4B000;
    do {
        M2C_FIELD(var_a1_2, s32 *, 0) = (s32) M2C_FIELD(var_v1_2, s32 *, 0);
        M2C_FIELD(var_a1_2, s32 *, 4) = (s32) M2C_FIELD(var_v1_2, s32 *, 4);
        M2C_FIELD(var_a1_2, s32 *, 8) = (s32) M2C_FIELD(var_v1_2, s32 *, 8);
        M2C_FIELD(var_a1_2, s32 *, 0xC) = (s32) M2C_FIELD(var_v1_2, s32 *, 0xC);
        var_v1_2 += 0x10;
        var_a1_2 += 0x10;
    } while (var_v1_2 != temp_v0_4);
}
