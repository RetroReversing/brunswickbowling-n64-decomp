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

extern int D_8007B210;
extern unsigned short D_8007B212;
s32 func_80032B14();
extern s32 D_8008E9E0;

s32 func_80032CE8(void *arg0) {
    s16 temp_v0;
    s16 var_a1;
    s32 var_v0;
    u32 temp_a3;
    u32 var_s0;

    temp_a3 = M2C_FIELD(arg0, u32 *, 0x2DC);
    temp_v0 = ((u32) ((D_8008E9E0 - M2C_FIELD(arg0, s32 *, 0x2E4)) * temp_a3) / (u32) M2C_FIELD(arg0, u32 *, 0x2E0)) + 1;
    var_a1 = temp_v0;
    do { var_s0 = 0; } while (0);
    if (temp_v0 <= 0) {
        var_a1 = 1;
        var_s0 = temp_a3 >> 0x1F;
    } else if (temp_v0 >= D_8007B210) {
        var_s0 = (s32) temp_a3 > 0;
        var_a1 = D_8007B212 - 1;
    }
    do { var_v0 = var_s0 ^ 1; } while (0);
    if (var_a1 != M2C_FIELD(arg0, s16 *, 0x2FA)) {/*__repair_call_balance*/if(var_s0){
        func_80032B14(arg0, var_a1 & 0xFFFF);}else{
        func_80032B14(arg0, var_a1 & 0xFFFF);}
        do { var_v0 = var_s0 ^ 1; } while (0);
    }
    return var_v0;
}
