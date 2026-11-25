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

M2C_UNK func_8002BE68(s32);                         /* extern */
s32 func_8002DB9C(void *, s32);                     /* extern */
extern s32 D_8007DA44;
extern void *D_80081AD0;

s32 func_8002DD30(void *arg0, s32 arg1) {
    s32 temp_hi;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_s1;
    s32 var_s3;
    s32 var_v1;
    void **var_s0;
    void *temp_v0;
    void *var_s4;

    var_s3 = arg1;
    var_s4 = M2C_FIELD((&D_80081AD0)[var_s3], void **, 0x44);
loop_1:
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        M2C_FIELD(var_s4, s32 *, 0x108) = (s32) (M2C_FIELD(var_s4, s32 *, 0x108) + 1);
    }
    var_s3 += 1;
    if (var_s3 >= D_8007DA44) {
        var_s3 = 0;
    }
    var_s4 = M2C_FIELD((&D_80081AD0)[var_s3], void **, 0x44);
    if (var_s3 == M2C_FIELD(arg0, s32 *, 0xC)) {
        if (M2C_FIELD(arg0, s32 *, 4) != 0) {
            temp_v1 = M2C_FIELD(arg0, s32 *, 0x2C) + 1;
            M2C_FIELD(arg0, s32 *, 0x2C) = temp_v1;
            if (temp_v1 == 0xC) {
                var_s3 = 0;
                M2C_FIELD(arg0, s32 *, 8) = 1;
                M2C_FIELD(arg0, s32 *, 0xC) = 0;
                M2C_FIELD(arg0, s32 *, 0x10) = -1;
            }
            M2C_FIELD(arg0, s32 *, 0x30) = 0;
            var_s1 = 0;
            var_s0 = &D_80081AD0;
loop_10:
            var_s1 += 1;
            if (var_s1 < D_8007DA44) {
                temp_v0 = *var_s0;
                var_s0 += 1;
                func_8002BE68(M2C_FIELD(temp_v0, s32 *, 0x44) + 0xF4);
                goto loop_10;
            }
            if (M2C_FIELD(arg0, s32 *, 8) == 0) {
                temp_v0_2 = func_8002DB9C(arg0, M2C_FIELD(arg0, s32 *, 0x2C));
                temp_hi = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + 1) % (s32) D_8007DA44;
                M2C_FIELD(arg0, s32 *, 4) = 0;
                M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + temp_v0_2);
                M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) + 1);
                M2C_FIELD(arg0, s32 *, 0xC) = temp_hi;
                return temp_hi;
            }
            goto block_15;
        }
        M2C_FIELD(arg0, s32 *, 4) = 1;
        goto block_15;
    }
block_15:
    var_v1 = 0;
    if (((M2C_FIELD(arg0, s32 *, 4) != 0) && (M2C_FIELD(var_s4, s32 *, 0x118) == 0) && (M2C_FIELD(arg0, s32 *, 8) == 0)) || (M2C_FIELD(var_s4, s32 *, 0x114) != 0)) {
        var_v1 = 1;
    }
    if ((var_v1 == 0) && ((M2C_FIELD(arg0, s32 *, 8) != 0) || (M2C_FIELD(arg0, s32 *, 0x30) != 2))) {
        return var_s3;
    }
    goto loop_1;
}
