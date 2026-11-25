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

s32 func_80046D2C();
s32 func_80046F80();
s32 func_800474F0();
s32 func_80047898();
s32 func_80049A0C();
void **func_80050988(s32, s32 *);           /* extern */
s32 func_8005A970();
extern char D_80079AB8[];
extern char D_80079AC0[];
extern s16 D_80095AF6;
extern s16 D_80095AFA;
extern s16 D_80095AFE;
extern s32 D_80095B10;

void **func_80047128(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_a0;
    s32 var_v0;
    u32 var_a0;
    void **temp_s0;

    M2C_FIELD(arg0, s32 *, 0xA4) = arg2;
    temp_s0 = func_80050988(arg1, D_80079AB8);
    func_8005A970(arg0 + 4, arg1);
    if (temp_s0 != NULL) {
        M2C_FIELD(arg0, void **, 0xC8) = (void *) *temp_s0;
    }
    var_a0 = 0;
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0xC8), u32 *, 0x14) != 0) {
        do {
            if (*(s32 *)((var_a0 * 2) + M2C_FIELD(M2C_FIELD(arg0, void **, 0xC8), s32 *, 0x1C)) != 0xFFFF) {
                M2C_FIELD(arg0, s32 *, 0x48) = 1;
            }
            var_a0 += 1;
        } while (var_a0 < (u32) M2C_FIELD(M2C_FIELD(arg0, void **, 0xC8), u32 *, 0x14));
    }
    temp_a0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC8), s32 *, 0);
    if (temp_a0 == 0x5D8912FE) {
        M2C_FIELD(arg0, s32 *, 0x44) = 0;
    } else {
        if (temp_a0 == 0x5D8912FF) {
            var_v0 = 1;
            goto block_12;
        }
        var_v0 = 2;
        if (temp_a0 == 0x5D891456) {
block_12:
            M2C_FIELD(arg0, s32 *, 0x44) = var_v0;
        }
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xC8), s32 *, 0) = arg4;
    D_80095B10 = 0;
    M2C_FIELD(arg0, s32 *, 0xC4) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0xC8), s32 *, 0x20);
    func_800474F0(arg0);
    func_80047898(arg0, 0, 0, 0);
    func_80046F80(arg0, D_80079AC0, D_80095AF6, D_80095AFA, (s32) D_80095AFE);
    func_80046D2C(arg0);
    func_80049A0C(M2C_FIELD(arg0, void **, 0xC8));
    return temp_s0;
}
