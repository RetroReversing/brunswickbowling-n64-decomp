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

s32 func_800137B0();
s32 func_800235F0();
s32 func_80023634();
s32 func_8005A970();
extern char D_8001DF60[];
extern char D_800753E4[];
extern char D_800753FC[];
extern s32 D_8007DA40;
extern char D_8007DA48[];
extern char D_80081B20[];
extern char D_80083060[];
extern char D_800835F0[];
extern char D_80083640[];
extern char D_80083690[];
extern char D_80089CA8[];
extern char D_8008B044[];
extern char D_8008D9EC[];
extern s32 func_8001DF70;

void func_8001E198(s32 arg0) {
    s32 *var_a1;
    s32 *var_s0;
    s32 *var_s0_2;
    s32 *var_s1;
    s32 *var_s1_2;
    s32 *var_s2;
    s32 *var_s6;
    s32 var_s2_2;
    s32 var_s3;
    s32 var_s4;
    s32 var_v0;

    func_800235F0();
    if (arg0 == D_800835F0) {
        var_s6 = D_800753E4;
    } else {
        var_s6 = D_800753FC;
    }
    var_s4 = 0;
    var_s0 = D_80083690;
    var_s2 = D_8007DA48;
    var_s3 = 0;
    var_s1 = D_8008D9EC;
loop_4:
    if (var_s4 < D_8007DA40) {
        func_8005A970(var_s1, var_s2 + 0x14);
        M2C_FIELD(var_s0, s32 **, 0) = var_s1;
        if (arg0 == D_80083640) {
            M2C_FIELD(var_s0, s32 **, 4) = D_80083060;
            M2C_FIELD(var_s0, s32 **, 8) = &func_8001DF70;
        } else {
            M2C_FIELD(var_s0, s32 **, 4) = D_80089CA8;
            M2C_FIELD(var_s0, s32 **, 8) = D_8001DF60;
            M2C_FIELD((var_s3 + D_80081B20), s32 *, 0x40) = 1;
        }
        var_v0 = 9;
        if (M2C_FIELD(var_s2, u8 *, 0x1B9) == 0) {
            var_v0 = 0x10;
        }
        M2C_FIELD(var_s0, s32 *, 0xC) = var_v0;
        var_s0 += 0x10;
        var_s2 += 0x1C4;
        var_s3 += 0x4C;
        var_s1 += 0x20;
        var_s4 += 1;
        goto loop_4;
    }
    func_80023634(arg0, var_s6, D_80083690, D_8007DA40, D_80083060, 0);
    var_s2_2 = 0;
    if (arg0 == D_800835F0) {
        var_s1_2 = D_80081B20;
        var_s0_2 = D_8007DA48;
loop_13:
        if (var_s2_2 < D_8007DA40) {
            var_a1 = NULL;
            if (M2C_FIELD(var_s0_2, u8 *, 0x1B9) != 0) {
                var_a1 = D_8008B044;
            }
            func_800137B0(var_s1_2, var_a1, -1, -1, 2);
            var_s1_2 += 0x4C;
            var_s0_2 += 0x1C4;
            var_s2_2 += 1;
            goto loop_13;
        }
    }
}
