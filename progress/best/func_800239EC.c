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
s32 func_80023780();
s32 func_800238B4();
s32 func_800375C0();
extern char D_80082F78[];
extern s32 D_80082FA8;
extern char D_8008C8C4[];

s32 func_800239EC(void *arg0, s32 arg1, s32 arg2) {
    s32 (*temp_v0)(s32 *);

    if (arg2 != 0x20F) {
        if (arg2 < 0x210) {
            if (arg2 != 0x20B) {
                return 1;
            }
            if ((M2C_FIELD(arg0, s32 *, 0x34) != 0) || (D_80082FA8 != 0)) {
                temp_v0 = M2C_FIELD(arg0, s32 (**)(s32 *), 0x38);
                if ((temp_v0 == NULL) || (temp_v0(D_8008C8C4) != 0)) {
                    func_800375C0(D_8008C8C4, 1);
                    func_8001BDE4(D_80082F78, M2C_FIELD(arg0, s32 *, 0x34));
                    return 0;
                }
                goto block_12;
            }
            /* Duplicate return node #14. Try simplifying control flow for better match */
            return 0;
        }
        if (arg2 != 0x210) {
            return 1;
        }
        func_80023780(arg0);
        return 0;
    }
    func_800238B4(arg0);
block_12:
    return 0;
}
