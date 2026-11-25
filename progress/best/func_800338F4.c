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

extern int D_8008BA80;
extern unsigned char D_8008BA85;
extern unsigned char D_8008BA86;
extern int D_8008BA88;
extern unsigned char D_8008BA8D;
extern int D_8008BA48;
extern unsigned char D_8008BA4D;
extern int D_8008BA58;
extern unsigned char D_8008BA5D;
extern int D_8008BA68;
extern unsigned char D_8008BA6D;
extern int D_8008BA78;
extern unsigned char D_8008BA7D;
extern int D_8008BA70;
extern unsigned char D_8008BA75;
extern int D_8008BA50;
extern unsigned char D_8008BA55;
extern int D_8008BA60;
extern unsigned char D_8008BA65;
s32 func_800149E4();
s32 func_80032A74();
s32 func_80032AB0();
s32 func_80032CE8();
s32 func_800330A4();
s32 func_80037264();
s32 func_8003FD68();
s32 func_800473DC();
extern f64 D_800778C8;
extern s32 D_80082040;
extern char D_80082198[];
extern char D_80082368[];
extern char D_8008E9B0[];
extern s32 D_8008E9E0;
extern char D_80092484[];

#define sp18 (*(s32 *)(sp + 0x18))
#define sp28 (*(s32 *)(sp + 0x28))
s32 func_800338F4(void *arg0) {
    u8 sp[64];
    s32 *var_v1;
    s32 var_a1;
    s32 var_a1_2;
    s16 var_v0;
    s32 temp_a0;
    s32 temp_a2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 temp_v1_5;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x2F0);
    if ((temp_v1 != 0) && ((u32) (D_8008E9E0 - temp_v1) >= 0xFBU)) {
        func_80037264(D_8008BA80, 0, 1, 0, (s32) D_8008BA85, 4);
        M2C_FIELD(arg0, s32 *, 0x2F0) = 0;
    }
    temp_v1_2 = M2C_FIELD(arg0, s32 *, 0x2EC);
    if ((temp_v1_2 != 0) && ((u32) (D_8008E9E0 - temp_v1_2) >= 0xFBU)) {
        func_80037264(D_8008BA80, 0, 1, 0, (s32) D_8008BA86, 4);
        M2C_FIELD(arg0, s32 *, 0x2EC) = 0;
    }
    temp_v1_3 = M2C_FIELD(arg0, s32 *, 0x2F4);
    if (temp_v1_3 != 0) {
        if ((u32) (D_8008E9E0 - temp_v1_3) >= 0xFBU) {
            func_80037264(D_8008BA88, 0, 1, 0, (s32) D_8008BA8D, 4);
            M2C_FIELD(arg0, s32 *, 0x2F4) = 0;
            func_800330A4(arg0);
            return 1;
        }
        goto block_10;
    }
block_10:
    func_800473DC(D_80092484, &sp18);
    if (D_800778C8 < sp28) {
        var_v0 = M2C_FIELD(arg0, s16 *, 0x300);
        var_v1 = D_80082198;
    } else {
        var_v0 = M2C_FIELD(arg0, s16 *, 0x302);
        var_v1 = D_80082368;
    }
    temp_a0 = *((var_v0 * 4) + var_v1);
    if (temp_a0 != D_80082040) {
        func_800149E4(temp_a0);
    }
    temp_a2 = M2C_FIELD(arg0, s32 *, 0x308);
    if (temp_a2 != 0) {
        if (func_8003FD68(D_8008E9B0, M2C_FIELD(arg0, u8 *, 0x31A), temp_a2) == 0) {
            temp_v1_4 = M2C_FIELD(arg0, s32 *, 0x30C);
            M2C_FIELD(arg0, s32 *, 0x308) = 0;
            switch (temp_v1_4) {                    /* irregular */
            case 0x20A:
                var_a1 = -1;
block_22:
                func_80032A74(arg0, var_a1, 1);
                func_80032AB0(arg0, M2C_FIELD(arg0, s16 *, 0x2FA));
                break;
            case 0x215:
                var_a1 = 1;
                goto block_22;
            }
            func_80037264(D_8008BA48, 0, 1, 0, (s32) D_8008BA4D, 4);
            func_80037264(D_8008BA58, 0, 1, 0, (s32) D_8008BA5D, 4);
            func_80037264(D_8008BA68, 0, 1, 0, (s32) D_8008BA6D, 4);
            func_80037264(D_8008BA78, 0, 1, 0, (s32) D_8008BA7D, 4);
            return 1;
        }
        if ((u16) M2C_FIELD(arg0, u16 *, 0x304) < (u32) (D_8008E9E0 - M2C_FIELD(arg0, s32 *, 0x2E8))) {
            if (M2C_FIELD(arg0, s32 *, 0x31C) == 0) {
                temp_v1_5 = M2C_FIELD(arg0, s32 *, 0x308);
                if (temp_v1_5 != 0x20D) {
                    if (temp_v1_5 == 0x20E) {
                        var_a1_2 = -1;
                        goto block_30;
                    }
                } else {
                    var_a1_2 = 1;
block_30:
                    func_80032A74(arg0, var_a1_2, 6);
                    func_80032AB0(arg0, M2C_FIELD(arg0, s16 *, 0x2FA));
                }
                M2C_FIELD(arg0, s32 *, 0x31C) = 1;
            }
            func_80032CE8(arg0);
            return 1;
        }
        /* Duplicate return node #36. Try simplifying control flow for better match */
        return 1;
    }
    if ((M2C_FIELD(arg0, s32 *, 0x30C) != 0x216) && (func_80032CE8(arg0) == 0)) {
        func_80037264(D_8008BA70, 0, 1, 0, (s32) D_8008BA75, 4);
        func_80037264(D_8008BA50, 0, 1, 0, (s32) D_8008BA55, 4);
        func_80037264(D_8008BA60, 0, 5, 0, (s32) D_8008BA65, 4);
        M2C_FIELD(arg0, s32 *, 0x30C) = 0x216;
    }
    return 1;
}
