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

u64 func_800570C0();
u64 func_800598D0();
extern s32 D_800A58F0;
extern u8 D_800A5A20;

u8 *func_80058278(u64 arg0, u32 arg1, s32 arg2) {
    u32 sp10;
    s32 temp_s6;
    u32 temp_v1;
    
    u32 var_s3;
    u64 temp_ret;
    u64 var_s2;
    char *var_s4;

    var_s2 = arg0;
    var_s4 = &D_800A5A20;
    temp_s6 = arg2 >> 0x1F;
    do { var_s3 = arg1; } while (0);
    do {
loop_1:
        temp_v1 = (u32) func_800598D0(var_s2, var_s3, temp_s6);
        sp10 = temp_v1;
        var_s4 -= 1;
        *(u8 *)var_s4 = *(s32 *)(D_800A58F0 + temp_v1);
        do { do { do { temp_ret = func_800570C0(var_s2, var_s3, temp_s6, arg2); } while (0); } while (0); } while (0);
        temp_s6 = (u32) temp_ret;
        var_s2 = temp_ret;
        var_s3 = temp_s6;
        do { if (var_s2 != 0) {
            goto loop_1;
        } } while (0);
    } while (var_s3 != 0);
    return var_s4;
}
