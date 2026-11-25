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

extern s32 D_800A5D60;
extern u32 D_800A5D64;
extern s32 D_800A5D6C;

u32 func_8005FA78(s32 arg0) {
    u32 temp_a1;
    u32 var_v0;
    s32 temp;
    s32 temp2;

    var_v0 = D_800A5D64;
    temp2 = arg0 - 0x10;
    temp = ((D_800A5D60 + D_800A5D6C) - temp2) & ~0xF;
    temp_a1 = temp;
    if (temp_a1 >= var_v0) {
        var_v0 = temp_a1;
    }
    return var_v0;
}
