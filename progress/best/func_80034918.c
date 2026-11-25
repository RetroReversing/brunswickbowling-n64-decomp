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

s32 func_80039738();
s32 func_80042A1C();
s32 func_80045278();
s32 func_8004684C();
s32 func_8004EA00();
s32 func_8004FC64();
s32 osPfsRepairId();
extern char D_80077968[];
extern char D_8007797C[];
extern char D_80077994[];
extern char D_800779A4[];
extern s32 D_80083BA0;
extern s32 D_80083BA4;
extern char D_8008CEB0[];
extern char D_8008CEEC[];
extern char D_8008ED80[];
extern char D_8009CE10[];
extern u16 D_8009D5B0;
extern char D_8009D630[];

s32 func_80034918(s32 arg0) {
    s32 sp18;
    s32 *var_a0;
    s32 var_a1;
    s32 var_a3;
    s32 temp_v0;
    s32 var_fp;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s1;
    s32 var_s3;
    s32 var_s4;

    var_fp = 0;
    var_s4 = 1;
    sp18 = arg0 * 0x68;
loop_1:
    var_s3 = 0;
    var_s1 = 0;
    if (osPfsRepairId(sp18 + D_8009D630) == 0) {
        var_s3 = 1;
        goto block_7;
    }
    var_fp = 0;
    if (var_fp == 0) {
        temp_v0 = func_8004FC64(arg0);
        var_fp = 1;
        if (temp_v0 == 2) {
            D_80083BA4 = temp_v0;
            D_80083BA0 = 1;
            return 1;
        }
        goto block_26;
    }
    var_s1 = 1;
block_7:
    func_8004EA00(D_8009CE10, 0, 0, 0, 1);
    func_80045278(D_8008ED80, 0);
    var_s0 = 0;
    do {
        switch (var_s1) {                           /* switch 1; irregular */
        case 0:                                     /* switch 1 */
            func_80039738(D_8008CEEC, 7, 1, 0x140, 0x73, D_80077968);
            var_a0 = D_8008CEEC;
            var_a1 = 5;
            var_a3 = 0x64;
block_13:
            func_80039738(var_a0, var_a1, 0, var_a3);
            break;
        case 1:                                     /* switch 1 */
            func_80039738(D_8008CEEC, 7, 1, 0x140, 0x73, D_80077994);
            func_80039738(D_8008CEEC, 5, 0, 0x64, 0x87, D_800779A4);
            func_80039738(D_8008CEEC, 5, 0, 0x64, 0x9B, D_8007797C);
            var_a0 = D_8008CEB0;
            var_a1 = 7;
            var_a3 = 0xA0;
            goto block_13;
        }
        func_80042A1C(D_8008ED80);
        var_s0 += 1;
    } while (var_s0 < 2);
    var_s0_2 = 0;
    do {
        switch (var_s1) {                           /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            if (D_8009D5B0 & 0x4000) {
                var_s0_2 = 1;
                var_s4 = 0;
            }
            break;
        case 1:                                     /* switch 2 */
            if (D_8009D5B0 & 0x8000) {
                var_s0_2 = 1;
                var_s4 = 1;
                var_s3 = 0;
            }
            if (D_8009D5B0 & 0x4000) {
                var_s0_2 = 1;
                var_s4 = 0;
                var_s3 = 0;
            }
            break;
        }
        func_8004684C(1);
    } while (var_s0_2 == 0);
block_26:
    if (var_s4 != 1) {
        return var_s3;
    }
    goto loop_1;
}
