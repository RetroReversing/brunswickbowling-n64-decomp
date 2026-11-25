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

M2C_UNK func_8001BFE4(M2C_UNK *);                   /* extern */
s32 func_80057660(s32);                             /* extern */
extern M2C_UNK D_80082F78;
extern s32 D_8008E9E0;

s32 func_80024280(void *arg0) {
    void *sp10;
    void *sp18;
    s32 temp_s0;
    s32 temp_s3;
    s32 temp_v1;
    s32 var_a0;
    s32 var_s1;
    s32 var_v1;
    void *temp_a1;
    void *temp_v0;

    if (M2C_FIELD(arg0, s32 *, 0x18) != 0) {
        temp_v1 = M2C_FIELD(arg0, s32 *, 0x2C);
        if (temp_v1 != 0) {
            var_v1 = D_8008E9E0 - temp_v1;
            if (var_v1 >= 0xFB) {
                var_v1 = 0xFA;
            }
            var_s1 = (s32) (var_v1 * 5) >> 3;
            if (M2C_FIELD(arg0, s32 *, 0x1C) == 0) {
                var_s1 = -var_s1;
            }
            temp_v1 = M2C_FIELD(arg0, s16 *, 0x14) - M2C_FIELD(arg0, s16 *, 0x20);
            temp_s0 = func_80057660(var_s1);
            var_a0 = var_s1;
            if (temp_s0 >= func_80057660(temp_v1)) {
                var_a0 = -temp_v1;
            }
            temp_a1 = arg0 + 8;
            sp10 = M2C_FIELD(arg0, void **, 8);
loop_9:
            sp18 = temp_a1;
            if (sp10 != temp_a1) {
                M2C_FIELD(sp10, u16 *, 0x18) = (u16) (M2C_FIELD(sp10, u16 *, 0x18) + var_a0);
                sp10 = M2C_FIELD(sp10, void **, 0);
                goto loop_9;
            }
            M2C_FIELD(arg0, s16 *, 0x14) = (s16) ((u16) M2C_FIELD(arg0, s16 *, 0x14) + var_a0);
            if (var_a0 == 0) {
                if (M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
                    temp_v0 = M2C_FIELD(arg0, void **, 0x10);
                    M2C_FIELD(temp_v0, M2C_UNK (**)(void *, void *), 0x54)(arg0 + M2C_FIELD(temp_v0, s16 *, 0x50), temp_a1);
                    func_8001BFE4(&D_80082F78);
                }
                M2C_FIELD(arg0, s32 *, 0x18) = 0;
            }
        }
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) D_8008E9E0;
    }
    return 1;
}
