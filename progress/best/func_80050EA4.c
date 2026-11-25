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

void **func_8004C9A8(s32, s32, s32);            /* extern */
s32 func_8004CBA0();
s32 func_80055F38();
s32 func_80056168();
s32 func_800563C4();
s32 func_800580A0();
s32 func_8005978C();
s32 func_80059F80();
s32 func_8005AAD0();
extern char D_80079C60[];
extern char D_80079C84[];
extern char D_80079C90[];
extern char D_80079C98[];
extern char D_80079CA4[];
extern s32 D_80096FB0;
extern s32 D_8009C898;
extern u32 D_8009DA60;
extern void *D_8009DA70;
extern char D_8009DA80[];
extern s32 D_8009DB00;
extern s32 func_80050E68;

void func_80050EA4(void) {
    s32 temp_a2;
    s32 temp_s6;
    s32 temp_v0_2;
    s32 var_s3;
    s32 var_v0;
    u32 var_s1;
    u32 var_s1_2;
    u32 var_s1_3;
    u32 var_s4;
    void **temp_v0;
    void **var_v1;
    void *temp_a1;
    void *temp_a3;
    void *temp_s3;
    void *temp_v1;
    void *var_a0;
    void *var_a0_2;
    void *var_s0;

    var_s4 = 0;
    if (D_8009DB00 != 0) {
        var_a0 = D_8009DA70;
        var_s1 = 0;
        if ((u32) D_8009DA60 > 0U) {
            do {
                if (M2C_FIELD(var_a0, s32 *, 0x1C) != 0) {
                    var_s4 += 1;
                }
                var_s1 += 1;
                var_a0 += 0x28;
            } while (var_s1 < (u32) D_8009DA60);
        }
        temp_v0 = func_8004C9A8(D_8009C898, var_s4 * 4, 4);
        if (temp_v0 != NULL) {
            temp_s3 = *temp_v0;
            var_s1_2 = 0;
            func_8005978C(D_8009DA80, D_80079C60, D_80096FB0);
            var_a0_2 = D_8009DA70;
            temp_s6 = func_80055F38(D_8009DA80, 0);
            if (D_8009DA60 != 0) {
                var_v1 = (0 * 4) + temp_s3;
                do {
                    var_s1_2 += 1;
                    if (M2C_FIELD(var_a0_2, s32 *, 0x1C) != 0) {
                        *var_v1 = var_a0_2;
                        var_v1 += 4;
                    }
                    var_a0_2 += 0x28;
                } while (var_s1_2 < (u32) D_8009DA60);
            }
            func_80059F80(temp_s3, var_s4, 4, &func_80050E68);
            var_s1_3 = 0;
            if (var_s4 != 0) {
                var_s0 = temp_s3;
                var_v0 = var_s4 - 1;
                do {
                    var_s3 = 0;
                    if (var_s1_3 != var_v0) {
                        temp_a1 = M2C_FIELD(var_s0, void **, 0);
                        var_s3 = *M2C_FIELD(M2C_FIELD(var_s0, void **, 4), s32 **, 0x1C) - (*M2C_FIELD(temp_a1, s32 **, 0x1C) + M2C_FIELD(temp_a1, s32 *, 0x18));
                    }
                    func_800580A0(D_8009DA80, 0x20, 0x80);
                    temp_a3 = M2C_FIELD(var_s0, void **, 0);
                    var_s1_3 += 1;
                    *(func_8005978C(D_8009DA80, D_80079C84, *M2C_FIELD(temp_a3, s32 **, 0x1C), temp_a3) + D_8009DA80) = 0x20;
                    M2C_FIELD((func_8005978C(D_8009DA80 + 0x1A, D_80079C90, M2C_FIELD(M2C_FIELD(var_s0, void **, 0), s32 *, 0x18)) + D_8009DA80), s8 *, 0x1A) = 0x20;
                    temp_v1 = M2C_FIELD(var_s0, void **, 0);
                    temp_a2 = M2C_FIELD(temp_v1, s32 *, 0x18);
                    temp_v0_2 = *M2C_FIELD(temp_v1, s32 **, 0x1C);
                    var_s0 += 4;
                    M2C_FIELD((func_8005978C(D_8009DA80 + 0x28, D_80079C98, temp_v0_2 + temp_a2) + D_8009DA80), s8 *, 0x28) = 0x20;
                    func_8005978C(D_8009DA80 + 0x38, D_80079CA4, var_s3);
                    func_800563C4(temp_s6, D_8009DA80, func_8005AAD0(D_8009DA80));
                    var_v0 = var_s4 - 1;
                } while (var_s1_3 < var_s4);
            }
            func_80056168(temp_s6);
            D_80096FB0 += 1;
            func_8004CBA0(D_8009C898, temp_v0, &D_80096FB0);
        }
    }
}
