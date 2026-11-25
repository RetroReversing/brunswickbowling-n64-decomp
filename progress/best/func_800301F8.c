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

s32 func_80012DA8();
s32 func_8002FDB0();
s32 func_800300D0();
s32 func_800318E4();
s32 func_80057FA0();
extern char D_8007F618[];
extern char D_80081A08[];
extern char D_80081A6C[];
extern char D_8008B130[];

void func_800301F8(void *arg0) {
    s32 temp_s2;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_s0;
    u8 *temp_s0;
    u8 temp_s5;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v1_2;
    u8 var_s0_2;
    u8 var_v0;

    temp_s5 = M2C_FIELD(arg0, u8 *, 0x48);
    var_s0 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x44) >= 6) {
        func_800318E4(arg0, temp_s5, D_80081A08);
    }
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x44) + 1;
    M2C_FIELD(arg0, s32 *, 0x44) = temp_v1;
    if (((M2C_FIELD(arg0, s32 *, 0x88) ^ 1) == 0) && (temp_v1 == 1)) {
        func_800300D0(arg0);
        M2C_FIELD(arg0, s32 *, 0x44) = 4;
    }
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x44);
    switch (temp_v0) {
    case 1:
    case 2:
    case 3:
        M2C_FIELD(arg0, u8 *, 0x48) = 0x64U;
        var_v0 = M2C_FIELD(arg0, s32 *, 0x68) + 1;
block_13:
        M2C_FIELD(arg0, u8 *, 0x4A) = var_v0;
        break;
    case 4:
        temp_v0_2 = (M2C_FIELD(arg0, s32 *, 0x78) * 2) + 6;
        M2C_FIELD(arg0, u8 *, 0x48) = temp_v0_2;
        func_80057FA0(D_80081A6C, D_80081A08, temp_v0_2 & 0xFF);
        if ((M2C_FIELD(arg0, s32 *, 0x88) ^ 2) != 0) {
            var_v0 = M2C_FIELD(arg0, u8 *, 0x48) - 1;
        } else {
            M2C_FIELD(arg0, s32 *, 0x44) += 1;
        case 5:
            var_v0 = 1;
        }
        goto block_13;
    case 6:
    case 7:
    case 8:
    case 9:
        temp_v0_3 = 0xB - M2C_FIELD(arg0, u8 *, 0x47);
        M2C_FIELD(arg0, u8 *, 0x48) = temp_v0_3;
        var_v0 = 1;
        var_s0 = (temp_v0_3 & 0xFF) - 2;
        goto block_13;
    }
    M2C_FIELD(arg0, u8 *, 0x49) = (u8) M2C_FIELD(arg0, u8 *, 0x4A);
loop_15:
    if (var_s0 < (s32) M2C_FIELD(arg0, u8 *, 0x48)) {
        temp_v1_2 = *(var_s0 + D_80081A08);
        var_s0 += 1;
        M2C_FIELD(((temp_v1_2 * 0x5C) + D_8007F618), u8 *, 0x42) = (u8) M2C_FIELD(arg0, u8 *, 0x49);
        goto loop_15;
    }
    var_s0_2 = M2C_FIELD(arg0, u8 *, 0x48);
loop_18:
    if ((s32) var_s0_2 < (s32) temp_s5) {
        temp_s2 = var_s0_2 + 1;
        temp_s0 = var_s0_2 + D_80081A08;
        func_80012DA8((*temp_s0 * 0x5C) + D_8007F618, temp_s2, func_8002FDB0((s32) var_s0_2, M2C_FIELD(((M2C_FIELD((arg0 + 0x24), s32 *, 4) * 0x1C) + D_8008B130), s32 *, 0x10)));
        if (M2C_FIELD(((*temp_s0 * 0x5C) + D_8007F618), s32 *, 0x28) != 0) {
            M2C_FIELD(arg0, s32 *, 0x20) = 1;
        }
        var_s0_2 = (u8) temp_s2;
        goto loop_18;
    }
}
