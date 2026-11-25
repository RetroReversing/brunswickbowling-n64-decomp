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

s32 func_8001BDE4();
s32 func_8001BE7C();
s32 func_8001C08C();
s32 func_8002AAC0();
s32 func_800375C0();
extern s32 D_80082780;
extern char D_80082F78[];
extern char D_8008C894[];
extern char D_8008C8AC[];

s32 func_800138E4(void *arg0, s32 arg1, s32 arg2) {
    s32 (*temp_v0)(s32);
    s32 var_v1;
    void *temp_v0_2;
    void *temp_v1;

    if (arg2 == 0x20A) {
        if (D_80082780 == arg0) {
            func_8002AAC0(-1);
            var_v1 = 1;
            if (M2C_FIELD(arg0, s32 *, 0x20) != 0) {
                var_v1 = 0;
            } else {
                temp_v0 = M2C_FIELD(arg0, s32 (**)(s32), 0x38);
                if (temp_v0 != NULL) {
                    var_v1 = temp_v0(M2C_FIELD(arg0, s32 *, 0x3C));
                }
            }
            if (var_v1 != 0) {
                if (M2C_FIELD(arg0, void **, 0x34) != (void *)-1) {
                    func_800375C0(D_8008C894, 1);
                    temp_v1 = M2C_FIELD(arg0, void **, 0x34);
                    if ((temp_v1 == NULL) || (temp_v0_2 = M2C_FIELD(temp_v1, void **, 0x10), (M2C_FIELD(temp_v0_2, s32 (**)(void *), 0x44)(temp_v1 + M2C_FIELD(temp_v0_2, s16 *, 0x40)) == 0))) {
                        func_8001BDE4(D_80082F78, M2C_FIELD(arg0, void **, 0x34));
                        return 0;
                    }
                    func_8001BE7C(D_80082F78, M2C_FIELD(arg0, void **, 0x34));
                    func_8001C08C(D_80082F78, arg0);
                    return 0;
                }
                goto block_13;
            }
            func_800375C0(D_8008C8AC, 1);
block_13:
            return 0;
        }
        /* Duplicate return node #15. Try simplifying control flow for better match */
        return 1;
    }
    return 1;
}
