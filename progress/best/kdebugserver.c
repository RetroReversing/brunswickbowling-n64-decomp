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

M2C_UNK send(s32, s32, u8);                         /* extern */
extern u32 D_80097C80;
extern s32 D_80097DD0;
extern u8 D_800A7770;
extern u8 D_800A7771;
extern u8 D_800A7772;
extern u8 D_800A7773;
extern u8 D_800A7774;
extern u8 D_800A7775;
extern u8 D_800A7776;
extern u8 D_800A7777;
extern u8 D_800A7778;

void kdebugserver(u8 arg0, u8 arg2, M2C_UNK arg1) {
    s32 var_a0_2;
    s32 var_a1;
    u32 temp_v1;
    u8 *var_a0;
    u8 temp_v0;
    u8 var_a2;

    var_a2 = arg2;
    var_a0 = &arg0;
    do {
        temp_v1 = D_80097C80;
        D_80097C80 = temp_v1 + 1;
        temp_v0 = *var_a0;
        var_a0 += 1;
        (&D_800A7770)[temp_v1] = temp_v0;
    } while ((u32) var_a0 < (u32) &arg1);
    var_a1 = 0x190;
    if (D_800A7770 == 2) {
        var_a0_2 = D_80097DD0 + 0x20;
        goto block_7;
    }
    if (((u32) D_80097C80 >= 9U) && (D_800A7770 == 1)) {
        var_a2 = D_800A7774;
        var_a0_2 = (D_800A7771 << 0x18) | (D_800A7772 << 0x10) | (D_800A7773 << 8) | var_a2;
        var_a1 = (D_800A7775 << 0x18) | (D_800A7776 << 0x10) | (D_800A7777 << 8) | D_800A7778;
block_7:
        send(var_a0_2, var_a1, var_a2);
        D_80097C80 = 0;
    }
}
