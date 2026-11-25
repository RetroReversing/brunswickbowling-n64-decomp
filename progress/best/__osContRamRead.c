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

s32 bcopy();
s32 func_80067FC0();
s32 func_8006C2A0();
s32 func_8006C3A4();
s32 func_8006C410();
s32 func_8006DD60();
s32 func_8006DDCC();
u32 __osPfsGetStatus();
extern s32 D_80099100;
extern u8 D_800A7760;
extern s8 D_800ADF50;
extern s32 D_800ADF8C;

u32 __osContRamRead(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp14;
    s32 sp1C;
    s32 var_s5;
    s32 var_v1;
    s8 *temp_s2;
    char *var_s0;
    u32 temp_s6;
    u32 var_s1;

    var_s5 = 2;
    sp14 = arg3;
    func_8006C3A4();
    temp_s6 = arg2 & 0xFFFF;
    sp1C = arg2 << 5;
loop_1:
    var_s0 = &D_800ADF50;
    if (D_800A7760 == 2) {
        if (D_80099100 == arg1) {
            var_s0 = &(&D_800ADF50)[arg1];
        } else {
            goto block_5;
        }
    } else {
block_5:
        D_800A7760 = 2;
        D_80099100 = arg1;
        var_v1 = 0;
        if (arg1 > 0) {
            do {
                *(s8 *)var_s0 = 0;
                var_v1 += 1;
                var_s0 += 1;
            } while (var_v1 < arg1);
        }
        D_800ADF8C = 1;
        M2C_FIELD(var_s0, s8 *, 1) = 3;
        M2C_FIELD(var_s0, u8 *, 0) = 0xFF;
        M2C_FIELD(var_s0, s8 *, 2) = 0x21;
        M2C_FIELD(var_s0, s8 *, 3) = 2;
        M2C_FIELD(var_s0, u8 *, 0x26) = 0xFF;
        M2C_FIELD(var_s0, u8 *, 0x27) = 0xFE;
    }
    M2C_FIELD(var_s0, s8 *, 4) = (s8) (temp_s6 >> 3);
    M2C_FIELD(var_s0, s8 *, 5) = (s8) (func_8006DD60(temp_s6) | sp1C);
    func_8006C2A0(1, &D_800ADF50);
    func_80067FC0(arg0, 0, 1);
    func_8006C2A0(0, &D_800ADF50);
    func_80067FC0(arg0, 0, 1);
    var_s1 = (u32) (M2C_FIELD(var_s0, u8 *, 2) & 0xC0) >> 4;
    if (var_s1 != 0) {
        var_s1 = 1;
        goto block_15;
    }
    temp_s2 = var_s0 + 6;
    if ((func_8006DDCC(temp_s2) & 0xFF) != M2C_FIELD(var_s0, u8 *, 0x26)) {
        var_s1 = __osPfsGetStatus(arg0, arg1);
        if (var_s1 == 0) {
            var_s1 = 4;
block_15:
            goto block_16;
        }
    } else {
        bcopy(temp_s2, sp14, 0x20);
block_16:
        if (var_s1 == 4) {
            var_s5 -= 1;
            if (var_s5 >= 0) {
                goto loop_1;
            }
        }
    }
    func_8006C410();
    return var_s1;
}
