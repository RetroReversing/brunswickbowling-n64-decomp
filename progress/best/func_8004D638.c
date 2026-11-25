/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O1, tried by autopilot */
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

extern int D_8009CC08;
extern int D_8009CC14;
extern int D_8009CC28;
extern int D_8009CBC0;
extern int D_8009CBC4;
extern int D_80095DB0;
extern int D_80095DB8;
extern int D_8009CC58;
extern int D_8009CC5C;
extern int D_8009CC68;
extern int D_8009CC6C;
s32 *func_8004C9A8();
s32 func_80052794();
s32 func_80065110();
s32 osViSetMode();
s32 osViSetSpecialFeatures();
s32 osViBlack();
extern s32 D_80000300;
extern f32 D_80079BB0;
extern f32 D_80079BB4;
extern f32 D_80079BB8;
extern f32 D_80079BBC;
extern f32 D_80079BC0;
extern f32 D_80079BC4;
extern f32 D_80079BC8;
extern char D_80095CDC[];
extern char D_80095CF4[];
extern char D_80095D24[];
extern char D_80095D3C[];
extern char D_80095D84[];
extern char D_80095D90[];
extern char D_80097E80[];
extern s32 D_8009C898;
extern f32 D_8009CBC8;
extern u16 D_8009CBD0;
extern f32 D_8009CBD4;
extern s32 D_8009CBDC;
extern s32 D_8009CBE0;
extern u16 D_8009CBE4;
extern char D_8009CBE8[];
extern s32 *D_8009CC38;
extern u16 D_8009CC3C;
extern s32 D_8009CC40;
extern s32 D_8009CC44;
extern s32 D_8009CC48;
extern s16 D_8009CC4C;
extern s16 D_8009CC4E;
extern u16 D_8009CC50;
extern s32 D_8009CC60;
extern s32 *D_8009CC64;
extern s32 D_8009CD80;
extern s32 D_8009CD84;

s32 func_8004D638(s32 arg0, s32 arg1, s32 arg2) {
    s32 *var_a1;
    s32 *var_s0;
    s32 *var_v0;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv1;
    s32 *temp_v0;
    s32 *temp_v0_2;
    s32 *temp_v0_3;
    s32 *temp_v0_4;
    s32 *temp_v0_6;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_s1;
    s32 temp_v0_5;
    s32 var_a0;
    s32 var_v0_3;
    s32 var_v1;
    s32 var_v1_2;
    u32 temp_a0;
    u32 temp_a0_2;
    void *temp_v1;
    void *var_v0_2;

    if (D_80000300 != 1) {
        if (D_80000300 < 2) {
            if (D_80000300 != 0) {
                var_a1 = D_8009CBE8;
            } else {
                var_s0 = D_80095D84;
                goto block_14;
            }
        } else if (D_80000300 != 2) {
            var_a1 = D_8009CBE8;
        } else {
            temp_a0 = arg0 & 0xFFFF;
            if (temp_a0 < 4U) {
                var_v1 = temp_a0 * 0xC;
                var_v0 = D_80095D3C;
            } else {
                var_v1 = temp_a0 * 0xC;
                var_v0 = D_80095D24;
            }
            goto block_13;
        }
    } else {
        temp_a0_2 = arg0 & 0xFFFF;
        if (temp_a0_2 < 4U) {
            var_v1 = temp_a0_2 * 0xC;
            var_v0 = D_80095CF4;
        } else {
            var_v1 = temp_a0_2 * 0xC;
            var_v0 = D_80095CDC;
        }
block_13:
        var_s0 = var_v1 + var_v0;
block_14:
        var_a1 = D_8009CBE8;
    }
    var_v0_2 = (M2C_FIELD(var_s0, s32 *, 8) * 0x50) + D_80097E80;
    temp_v1 = var_v0_2 + 0x50;
    do {
        M2C_FIELD(var_a1, s32 *, 0) = (s32) M2C_FIELD(var_v0_2, s32 *, 0);
        M2C_FIELD(var_a1, s32 *, 4) = (s32) M2C_FIELD(var_v0_2, s32 *, 4);
        M2C_FIELD(var_a1, s32 *, 8) = (s32) M2C_FIELD(var_v0_2, s32 *, 8);
        M2C_FIELD(var_a1, s32 *, 0xC) = (s32) M2C_FIELD(var_v0_2, s32 *, 0xC);
        var_v0_2 += 0x10;
        var_a1 += 0x10;
    } while (var_v0_2 != temp_v1);
    D_8009CBDC = 0;
    if ((u32) (arg0 & 0xFFFF) < 4U) {
        D_8009CBC8 = D_80079BB0;
        D_8009CBD4 = D_80079BB0;
    } else {
        D_8009CC08 = 0x400;
        D_8009CBD4 = D_80079BB4;
        D_8009CC14 = 0x400;
        temp_fv1 = D_80079BB4 * D_80079BBC;
        D_8009CBC8 = D_80079BC0;
        if (!(D_80079BB8 <= temp_fv1)) {
            D_8009CC28 = (s32) temp_fv1;
        } else {
            D_8009CC28 = (s32) ((s32) (temp_fv1 - D_80079BB8) | 0x80000000);
        }
    }
    temp_fv0 = (f32) M2C_FIELD(var_s0, u16 *, 0) * D_8009CBC8;
    if (!(D_80079BC4 <= temp_fv0)) {
        var_a0 = (s32) temp_fv0;
    } else {
        var_a0 = (s32) (temp_fv0 - D_80079BC4) | 0x80000000;
    }
    temp_fv0_2 = (f32) M2C_FIELD(var_s0, u16 *, 2) * D_8009CBD4;
    D_8009CBD0 = (u16) var_a0;
    if (!(D_80079BC8 <= temp_fv0_2)) {
        var_v1_2 = (s32) temp_fv0_2;
    } else {
        var_v1_2 = (s32) (temp_fv0_2 - D_80079BC8) | 0x80000000;
    }
    D_8009CBE4 = (u16) var_v1_2;
    D_8009CC4E = 0;
    D_8009CC4C = 0;
    D_8009CC3C = D_8009CBD0;
    D_8009CC50 = D_8009CBE4;
    osViSetMode(D_8009CBE8, &D_8009CBE4, arg0);
    if (D_8009CC40 == 0) {
        osViBlack(1);
        D_8009CC44 = 2;
    }
    D_8009CC40 = 0;
    osViSetSpecialFeatures(2);
    temp_s1 = D_8009CBD0 * D_8009CBE4 * 2;
    temp_v0 = func_8004C9A8(D_8009C898, temp_s1 * M2C_FIELD(var_s0, s32 *, 4), 0x40);
    if (temp_v0 == NULL) {
        goto block_31;
    }
    temp_a1 = *temp_v0;
    D_8009CBC0 = temp_a1;
    if (M2C_FIELD(var_s0, s32 *, 4) != 1) {
        var_v0_3 = temp_a1 + temp_s1;
    } else {
        var_v0_3 = temp_a1 + (D_8009CBD0 * 2);
    }
    D_8009CBC4 = var_v0_3;
    temp_v0_2 = func_8004C9A8(D_8009C898, 0x400, 0x10);
    if (temp_v0_2 != NULL) {
        D_8009CC38 = (s32 *)0x10000;
        D_80095DB0 = (s32) *temp_v0_2;
        temp_v0_3 = func_8004C9A8(D_8009C898, 0x10008, 0x10);
        if (temp_v0_3 != NULL) {
            D_80095DB8 = (s32) *temp_v0_3;
            D_8009CC64 = temp_v0_3;
            M2C_FIELD(D_80095D90, void **, 0x2C) = (void *) (*temp_v0_3 + D_8009CC38);
            temp_v0_4 = func_8004C9A8(D_8009C898, arg2 * 0x10, 0x10, D_8009CC38);
            if (temp_v0_4 != NULL) {
                temp_v0_5 = *temp_v0_4;
                D_8009CC58 = temp_v0_5;
                D_8009CC5C = (s32) (temp_v0_5 + (arg2 * 8));
                temp_v0_6 = func_8004C9A8(D_8009C898, 0xAF00, 0x10, &D_8009CC58);
                if (temp_v0_6 != NULL) {
                    temp_a1_2 = *temp_v0_6;
                    D_8009CBE0 = 0;
                    D_8009CD84 = 0;
                    D_8009CC48 = 0;
                    D_8009CC68 = temp_a1_2;
                    D_8009CC6C = (s32) (temp_a1_2 + 0x5780);
                    D_8009CC60 = D_8009CC58;
                    D_8009CD80 = temp_a1_2;
                    func_80052794(arg1 & 0xFFFF, temp_a1_2);
                    return func_80065110();
                }
            }
        }
    }
block_31:
    return 1;
}
