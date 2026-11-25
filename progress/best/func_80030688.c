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

s32 func_800318E4();
extern char D_8007F618[];
extern char D_80081A08[];

void func_80030688(void *arg0, s32 *arg1, s32 arg2) {
    s32 var_a1;
    s32 var_a3;
    s32 var_a3_2;
    s32 var_t0;
    u8 temp_a3;
    u8 temp_v1;
    u8 temp_v1_2;

    var_a1 = 0;
    var_a3 = 0;
loop_1:
    if (var_a3 < (s32) M2C_FIELD(arg0, u8 *, 0x48)) {
        temp_v1 = *(var_a3 + D_80081A08);
        if (M2C_FIELD(((temp_v1 * 0x5C) + D_8007F618), s32 *, 0x28) != 0) {
            *(u8 *)(arg2 + var_a1) = temp_v1;
            var_a1 += 1;
        }
        var_a3 += 1;
        goto loop_1;
    }
    var_t0 = -1;
    if (M2C_FIELD(arg0, s32 *, 0x44) < 4) {
        var_t0 = (M2C_FIELD(arg0, s32 *, 0x78) * 2) + 5;
        temp_a3 = *(var_t0 + D_80081A08);
        if (M2C_FIELD(((temp_a3 * 0x5C) + D_8007F618), s32 *, 0x28) == 0) {
            *(u8 *)(arg2 + var_a1) = temp_a3;
            var_a1 += 1;
        }
    }
    var_a3_2 = 0;
loop_9:
    if (var_a3_2 < (s32) M2C_FIELD(arg0, u8 *, 0x48)) {
        temp_v1_2 = *(var_a3_2 + D_80081A08);
        if ((M2C_FIELD(((temp_v1_2 * 0x5C) + D_8007F618), s32 *, 0x28) == 0) && (var_a3_2 != var_t0)) {
            *(u8 *)(arg2 + var_a1) = temp_v1_2;
            var_a1 += 1;
        }
        var_a3_2 += 1;
        if (var_a1 != *arg1) {
            goto loop_9;
        }
    }
    *arg1 = var_a1;
    func_800318E4(arg0, var_a1, var_a3_2);
}
