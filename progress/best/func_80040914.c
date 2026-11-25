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

s32 func_800223C4();
s32 func_80034BD8();
s32 func_8003E544();
s32 func_8003F358();
s32 func_80042A1C();
s32 func_8006E4A0();
extern char D_80083AF0[];
extern char D_8008BA90[];
extern char D_8008ED80[];
extern char D_8009C540[];
extern char D_8009D630[];

s32 func_80040914(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_s2;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s1;
    s32 var_s2;
    s32 var_v0;

    var_s2 = arg2;
    var_s0 = arg3;
    var_s1 = -1;
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        M2C_FIELD(arg0, s32 *, 4) = 0;
        var_s2 = 0;
    }
    if (var_s0 == -1) {
        var_s0 = M2C_FIELD(arg0, s32 *, 0x8C);
    }
    if (func_80034BD8(var_s0, 1) != 0) {
        if (var_s2 != 0) {
            var_v0 = 0x500;
        } else {
            var_v0 = 0x3E00;
        }
        var_s0_2 = 0x3C;
        temp_s2 = func_8006E4A0((var_s0 * 0x68) + D_8009D630, *((var_s0 * 4) + D_8009C540), 1, 0, var_v0, arg1);
        do {
            func_800223C4(D_8008BA90);
            func_8003E544(D_80083AF0);
            func_8003F358(D_80083AF0, 1);
            func_80042A1C(D_8008ED80);
            var_s0_2 -= 1;
        } while (var_s0_2 != 0);
        switch (temp_s2) {                          /* irregular */
        case 0:
            var_s1 = 0;
            goto block_15;
        case 2:
            var_s1 = -2;
            goto block_15;
        default:
            return -1;
        }
    } else {
block_15:
        return var_s1;
    }
}
