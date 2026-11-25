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

s32 func_8002C8E8(void *arg0) {
    int arg0_flag;
    s32 temp_a1;
    s32 var_v1;
    u8 *temp;

    temp_a1 = (*(s32 *)((s8 *)arg0 + 0xCC)) * 0x14;
    var_v1 = 0;
     temp = (u8 *)((s8 *)(temp_a1 + arg0) + (-7));
     arg0_flag = *temp; 
    if (arg0_flag == 0) {
        var_v1 = 1;
        if ((*(u8 *)((s8 *)(((*(s32 *)((s8 *)arg0 + 0xCC)) * 0x14) + arg0) + (-0x1B))) == 0) {
            var_v1 = 2;
        }
    }
    return var_v1;
}
