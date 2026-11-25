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

M2C_UNK func_8001BF14(M2C_UNK *);                   /* extern */
s32 func_80057660();                        /* extern */
extern M2C_UNK D_80082F78;
extern s32 D_80089820;
extern s32 D_8008E9E0;

s32 func_80023B50(void *arg0) {
    void *sp10;
    void *sp18;
    s16 var_a0;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_v1;
    s32 var_a1;
    s32 var_s4;
    s32 var_v1;
    s32 var_v1_2;
    void *temp_s5;
    void *temp_v0;

    if (M2C_FIELD(arg0, s32 *, 0x18) != 0) {
        temp_v1 = M2C_FIELD(arg0, s32 *, 0x24);
        D_80089820 = 0;
        if (temp_v1 != 0) {
            var_v1 = D_8008E9E0 - temp_v1;
            if (var_v1 >= 0xFB) {
                var_v1 = 0xFA;
            }
            var_s4 = (s32) (var_v1 * 5) >> 3;
            if (M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
                var_s4 = -var_s4;
            }
            var_a1 = 1;
            temp_s5 = arg0 + 8;
            sp10 = M2C_FIELD(arg0, void **, 8);
loop_7:
            sp18 = temp_s5;
            if (sp10 != temp_s5) {
                var_a0 = 0x1A;
                if (sp10 != M2C_FIELD(arg0, s32 *, 0x28)) {
                    var_a0 = M2C_FIELD(arg0, s16 *, 0x20);
                }
                temp_s1 = M2C_FIELD(sp10, s16 *, 0x18) - var_a0;
                if (temp_s1 != 0) {
                    temp_s0 = func_80057660(var_s4, var_a1);
                    var_v1_2 = var_s4;
                    if (temp_s0 >= func_80057660(temp_s1)) {
                        var_v1_2 = -temp_s1;
                    }
                    var_a1 = 0;
                    M2C_FIELD(sp10, s16 *, 0x18) = (s16) ((u16) M2C_FIELD(sp10, s16 *, 0x18) + var_v1_2);
                }
                sp10 = M2C_FIELD(sp10, void **, 0);
                goto loop_7;
            }
            if (var_a1 != 0) {
                M2C_FIELD(arg0, s32 *, 0x18) = 0;
                if (M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
                    if (M2C_FIELD(arg0, s32 *, 0x28) == 0) {
                        temp_v0 = M2C_FIELD(arg0, void **, 0x10);
                        M2C_FIELD(temp_v0, M2C_UNK (**)(void *, s32), 0x54)(arg0 + M2C_FIELD(temp_v0, s16 *, 0x50), var_a1);
                        func_8001BF14(&D_80082F78);
                    }
                }
            }
        }
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) D_8008E9E0;
    }
    return 1;
}
