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

extern int D_80089248;
s32 func_800149E4();
s32 func_8001C210();
s32 func_8001FAD0();
u8 func_8002AB14();
s32 func_8002D7E0();
s32 func_80038924();
s32 func_80047A68();
s32 func_80047D74();
extern s32 D_8007E4E0;
extern char D_80081AD0[];
extern s32 D_80082044;
extern char D_800823A8[];
extern u8 D_800827C2;
extern s8 D_80082D58;
extern s32 D_80082EB8;
extern u8 D_80082EBC;
extern s32 D_80082EC0;
extern char D_80083950[];
extern char D_800891B0[];
extern char D_8008AAA0[];
extern char D_8008CB50[];
extern char D_800926E8[];

void func_800190B4(void *arg0) {
    s32 *sp10;
    s32 *sp18;
    s32 *sp20;
    s32 *sp28;
    s32 *sp30;
    s32 *sp38;
    s32 *sp40;
    void *sp48;
    u8 sp50;
    u8 sp51;
    s32 *temp_a0;
    s32 *var_v0;
    s32 temp_s1;
    s32 var_s0;
    s32 var_v0_2;
    u8 var_a0;
    u8 var_s2;
    void **temp_v1;

    M2C_FIELD(arg0, s32 *, 0x1C) = 1;
    D_80082EC0 = 2;
    func_80038924(D_8008CB50);
    temp_v1 = (D_8007E4E0 * 4) + D_80081AD0;
    if ((M2C_FIELD(*temp_v1, u8 *, 0x18) ^ 1) == 0) {
        D_80082D58 = 0;
        D_800827C2 = M2C_FIELD(*temp_v1, u8 *, 0x2C);
        var_v0 = M2C_FIELD(arg0, s32 **, 8);
        temp_a0 = arg0 + 8;
loop_2:
        sp10 = var_v0;
        sp18 = temp_a0;
        if (sp10 != temp_a0) {
            var_v0_2 = 1;
            if (sp10 != D_80083950) {
                var_v0 = *sp10;
                sp18 = sp10;
                goto loop_2;
            }
        } else {
            var_v0_2 = 0;
        }
        if (var_v0_2 == 0) {
            sp28 = D_80083950;
            sp48 = arg0 + 8;
            sp40 = D_80083950;
            sp38 = D_80083950;
            func_8001C210(D_80083950, &sp48);
            sp30 = sp38;
            sp20 = sp28;
        }
        M2C_FIELD(arg0, s32 *, 0x18) = 0;
        M2C_FIELD(arg0, s32 *, 0x14) = 0;
        M2C_FIELD(arg0, s16 *, 0x26) = -1;
        M2C_FIELD(arg0, s16 *, 0x24) = -1;
        M2C_FIELD(arg0, s16 *, 0x20) = 0;
        M2C_FIELD(arg0, s16 *, 0x22) = 0;
        func_8001FAD0(D_80083950, 4, 4, 0x10);
    } else {
        func_8002D7E0(D_8008AAA0);
    }
    func_80047D74(D_800926E8, &sp50, &sp51);
    var_s0 = 0;
    temp_s1 = sp50 - sp51;
loop_11:
    if (var_s0 < 0xA) {
        if ((D_80089248 ^ 1) == 0) {
            var_a0 = sp51;
            goto block_17;
        }
        if ((D_80089248 ^ 2) == 0) {
            var_s2 = sp51 + func_8002AB14(temp_s1 & 0xFF);
        } else {
            var_a0 = sp51 + (temp_s1 & 0xFF);
block_17:
            var_s2 = func_8002AB14(var_a0);
        }
        var_s0 += 1;
        if ((var_s2 & 0xFF) != D_80082EBC) {

        } else {
            goto loop_11;
        }
    }
    D_80082EBC = var_s2;
    D_80082044 = var_s2 & 0xFF;
    func_800149E4(D_800823A8);
    func_80047A68(D_800926E8);
    D_80082EB8 = 1;
}
