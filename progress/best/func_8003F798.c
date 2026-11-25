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

extern s32 D_8008E9E0;
extern M2C_UNK D_8008E9F4;
extern M2C_UNK D_8009C220;
extern M2C_UNK D_8009C240;
extern M2C_UNK D_8009C430;
extern s16 D_8009C528;
extern s16 D_8009C52A;
extern M2C_UNK D_8009C52C;

void func_8003F798(void *arg0) {
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 var_a1;
    s16 var_a2;
    s16 var_a2_2;
    s16 var_a2_3;
    s32 temp_v1;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v1;

    var_a2 = 0;
    D_8009C528 = 0;
    D_8009C52A = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    var_v0 = 0 << 0x10;
    do {
        *((var_v0 >> 0xE) + &D_8009C430) = 0;
        temp_v0 = var_a2 + 1;
        var_a2 = temp_v0;
        var_v0 = var_a2 << 0x10;
    } while (temp_v0 < 0x3E);
    var_a2_2 = 0;
    var_v1 = 0 << 0x10;
    do {
        temp_v1 = var_v1 >> 0x10;
        *(temp_v1 + &D_8009C52C) = 5;
        var_a1 = 0;
        var_v0_2 = 0 << 0x10;
loop_4:
        *((var_v0_2 >> 0xF) + (temp_v1 * 0x7C) + &D_8009C240) = 0;
        temp_v0_3 = var_a1 + 1;
        var_a1 = temp_v0_3;
        var_v0_2 = var_a1 << 0x10;
        if (temp_v0_3 < 0x3E) {
            goto loop_4;
        }
        temp_v0_2 = var_a2_2 + 1;
        var_a2_2 = temp_v0_2;
        var_v1 = var_a2_2 << 0x10;
    } while (temp_v0_2 < 4);
    var_a2_3 = 0;
    var_v0_3 = 0 << 0x10;
    do {
        *((var_v0_3 >> 0x10) + &D_8009C220) = 0;
        temp_v0_4 = var_a2_3 + 1;
        var_a2_3 = temp_v0_4;
        var_v0_3 = var_a2_3 << 0x10;
    } while (temp_v0_4 < 0x17);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_8008E9F4;
    D_8008E9E0 = 0x10;
}
