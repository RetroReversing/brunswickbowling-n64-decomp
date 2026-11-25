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

extern s32 D_8007DA44;
extern M2C_UNK D_80081AD0;

s32 func_8002DC00(void *arg0, s32 arg1) {
    s32 var_a1;
    s32 var_a3;
    void *temp_a2;

    var_a1 = arg1 + 1;
loop_1:
    if (var_a1 >= D_8007DA44) {
        var_a1 = 0;
    }
    if (var_a1 == M2C_FIELD(arg0, s32 *, 0xC)) {
        return 1;
    }
    temp_a2 = M2C_FIELD((&D_80081AD0)[var_a1], void **, 0x44);
    var_a3 = 0;
    if (((M2C_FIELD(arg0, s32 *, 4) != 0) && (M2C_FIELD(temp_a2, s32 *, 0x118) == 0) && (M2C_FIELD(arg0, s32 *, 8) == 0)) || (M2C_FIELD(temp_a2, s32 *, 0x114) != 0)) {
        var_a3 = 1;
    }
    var_a1 += 1;
    if (var_a3 == 0) {
        return 0;
    }
    goto loop_1;
}
