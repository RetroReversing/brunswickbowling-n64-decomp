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

s32 func_80038640();
s32 func_800479C8();
s32 func_8005ACC0();
extern s32 D_8007E4E0;
extern char D_80081AD0[];
extern char D_8008CBC0[];
extern char D_8008CBF0[];
extern char D_8008CC20[];
extern char D_8008CC3C[];
extern char D_800926E8[];

void func_80038924(s32 arg0, s32 arg1) {
    s8 sp10;
    s32 sp18;
    s32 sp1C;
    s32 *var_v1;
    s32 *temp_s0;
    s32 temp_s0_2;
    s32 var_a1;
    s32 var_s0;
    u8 temp_a0;

    var_s0 = 0;
    switch (arg1) {                                 /* irregular */
    case 1:
        var_s0 = 0;
    default:
block_15:
        temp_a0 = M2C_FIELD(*((D_8007E4E0 * 4) + D_80081AD0), u8 *, 0x19);
        if ((s32) temp_a0 < 7) {
            temp_s0 = (var_s0 * 4) + D_8008CC3C;
            func_8005ACC0(*temp_s0, *((temp_a0 * 4) + D_8008CC20), 2);
            var_a1 = *temp_s0;
        } else {
            func_80038640(temp_a0, &sp10, &sp18, &sp1C);
            if (sp1C != 0) {
                var_v1 = D_8008CBF0;
            } else {
                var_v1 = D_8008CBC0;
            }
            temp_s0_2 = *((var_s0 * 4) + var_v1);
            sp10 = 0x76;
            func_8005ACC0(temp_s0_2, &sp10, 2);
            var_a1 = temp_s0_2;
        }
        func_800479C8(D_800926E8, var_a1);
        break;
    case 2:
        var_s0 = 1;
        goto block_15;
    case 3:
        var_s0 = 2;
        goto block_15;
    case 10:
        var_s0 = 3;
        goto block_15;
    case 8:
        var_s0 = 4;
        goto block_15;
    case 12:
        var_s0 = 5;
        goto block_15;
    case 9:
        var_s0 = 6;
        goto block_15;
    case 4:
        var_s0 = 7;
        goto block_15;
    case 11:
        var_s0 = 8;
        goto block_15;
    case 5:
        var_s0 = 9;
        goto block_15;
    case 6:
        var_s0 = 0xA;
        goto block_15;
    case 7:
        var_s0 = 0xB;
        goto block_15;
    }
}
