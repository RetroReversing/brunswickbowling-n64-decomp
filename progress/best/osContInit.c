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

M2C_UNK func_800654BC(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_80065570(M2C_UNK);                     /* extern */
M2C_UNK func_80066C50(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_80067FC0(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
s32 func_8006C2A0(M2C_UNK, M2C_UNK *);              /* extern */
M2C_UNK func_8006C350();                            /* extern */
u64 osGetTime();                                /* extern */
M2C_UNK func_8006CA00(M2C_UNK *, s32, s32, M2C_UNK *, M2C_UNK *); /* extern */
extern s32 D_80097C30;
extern M2C_UNK D_800A7700;
extern M2C_UNK D_800A7718;
extern s8 D_800A771C;
extern M2C_UNK D_800A7720;
extern s8 D_800A7760;

s32 osContInit(M2C_UNK *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    M2C_UNK sp20;
    M2C_UNK sp40;
    M2C_UNK sp58;
    s32 temp_s0;
    u64 temp_ret;
    u64 temp_v0;

    if (D_80097C30 != 0) {
        return 0;
    }
    D_80097C30 = 1;
    temp_ret = osGetTime();
    temp_v0 = temp_ret;
    if (temp_v0 == 0) {
        if (temp_v0 == 0) {
            if ((u32) temp_ret <= 0x0165A0BBU) {
                goto block_6;
            }
        } else {
block_6:
            func_80066C50(&sp40, &sp58, 1);
            func_8006CA00(&sp20, 0, 0, &sp40, &sp58);
            func_80067FC0(&sp40, &sp58, 1);
        }
    }
    D_800A771C = 4;
    func_80065570(0);
    func_8006C2A0(1, &D_800A7720);
    func_80067FC0(arg0, &sp58, 1);
    temp_s0 = func_8006C2A0(0, &D_800A7720);
    func_80067FC0(arg0, &sp58, 1);
    func_800654BC(arg1, arg2);
    D_800A7760 = 0;
    func_8006C350();
    func_80066C50(&D_800A7700, &D_800A7718, 1);
    return temp_s0;
}
