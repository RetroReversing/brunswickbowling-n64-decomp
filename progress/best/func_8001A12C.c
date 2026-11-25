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

extern short D_80082D52;
extern short D_80082D54;
s32 func_8001A028();
s32 func_8002BD80();
s32 func_80037DCC();
s32 func_80037E40();
s32 func_80037EC4();
s32 func_80037F38();
extern s32 D_8007C404;
extern char D_800827A4[];
extern s32 D_8008AA60;
extern char D_8008C9CC[];

void func_8001A12C(void *arg0) {
    s16 var_s1;
    char *var_a0;
    s32 var_a1;
    s32 var_a2;
    s32 var_s2;
    s32 var_v1;

    M2C_FIELD(arg0, s16 *, 0x18) = 0;
    func_8001A028(arg0, D_80082D52);
    if (D_80082D54 == 0) {
        M2C_FIELD(arg0, s16 *, 0x18) = 1;
        func_80037F38(D_8008C9CC);
        if (M2C_FIELD(arg0, s32 *, 0x14) != 0) {
            if (((s16) M2C_FIELD(arg0, s32 *, 0x14) + M2C_FIELD(arg0, s16 *, 0x16)) >= 3) {
                func_80037E40(D_8008C9CC);
                return;
            }
            goto block_23;
        }
    } else {
        var_a2 = 1;
        if (D_80082D54 == D_80082D52) {
            M2C_FIELD(arg0, s16 *, 0x18) = -1;
            return;
        }
        var_s1 = 0;
        var_s2 = 0;
        var_a1 = 0;
        var_v1 = 0xE;
        var_a0 = &D_8007C404;
        do {
            if (((s16) D_80082D54 >> var_v1) & 1) {
                if (*(s32 *)var_a0 == 0) {
                    var_a2 = 0;
                }
                var_s1 += 1;
            }
            if (((s16) D_80082D52 >> var_v1) & 1) {
                var_s2 += 1;
            }
            var_v1 -= 1;
            var_a1 += 1;
            var_a0 += 4;
        } while (var_a1 < 0xA);
        if (var_a2 != 0) {
            func_8001A028((s16) arg0, D_80082D54, var_a2, D_80082D54);
            M2C_FIELD(arg0, s16 *, 0x18) = -2;
            func_80037EC4(D_8008C9CC);
            return;
        }
        if (D_8008AA60 != 0) {
            func_8001A028((s16) arg0, D_80082D54, var_a2, D_80082D54);
            if (M2C_FIELD(arg0, s16 *, 0x16) >= 2) {
                goto block_22;
            }
            goto block_23;
        }
        if ((func_8002BD80(D_80082D52, var_a1, var_a2, D_80082D54) == 0) && (var_s1 == 1) && ((u32) ((var_s2 - 2) & 0xFFFF) < 3U)) {
block_22:
            M2C_FIELD(arg0, s16 *, 0x18) = -1;
            func_80037EC4(D_8008C9CC);
            return;
        }
block_23:
        func_80037DCC(D_8008C9CC);
    }
}
