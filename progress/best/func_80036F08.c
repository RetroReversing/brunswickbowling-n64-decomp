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

M2C_UNK func_80037034(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_80037200(void *);                          /* extern */
void **func_80050988(M2C_UNK, M2C_UNK);             /* extern */
M2C_UNK func_80050A94(M2C_UNK, M2C_UNK, void *);    /* extern */

s32 func_80036F08(void *arg0, M2C_UNK arg1, M2C_UNK arg2, void *arg3) {
    s32 temp_v1;
    s32 var_s2;
    void **temp_v0;
    void *temp_s0;
    void *temp_s0_2;
    void *var_a0;
    void *var_a2;

    var_s2 = 0;
    if (arg3 == NULL) {
        temp_v0 = func_80050988(arg1, arg2);
        if (temp_v0 != NULL) {
            M2C_FIELD(arg0, void ***, 0x20) = temp_v0;
            var_a2 = *temp_v0;
            goto block_7;
        }
        return 0;
    }
    func_80050A94(arg1, arg2, arg3);
    M2C_FIELD(arg0, void ***, 0x20) = NULL;
    var_a2 = arg3;
block_7:
    temp_s0 = M2C_FIELD(var_a2, void **, 4);
    temp_v1 = M2C_FIELD(temp_s0, s32 *, 4);
    if (temp_v1 & 8) {
        if (temp_v1 & 1) {
            func_80037034(arg0, 0x18, 1);
            var_s2 = 1;
        } else {
            func_80037034(arg0, 0x18, 0);
            var_s2 = 2;
        }
        temp_s0_2 = temp_s0 + 0x10;
        M2C_FIELD(arg0, void **, 0x24) = temp_s0_2;
        var_a0 = temp_s0_2 + ((func_80037200(arg0) & 0xFFFF) * 2);
    } else {
        if ((temp_v1 & 0xF) == 5) {
            func_80037034(arg0, 0x18, 5);
            var_s2 = 1;
        } else {
            func_80037034(arg0, 0x18, 2);
        }
        var_a0 = temp_s0 + 8;
    }
    M2C_FIELD(arg0, u16 *, 0x18) = (u16) M2C_FIELD(var_a0, u16 *, 6);
    M2C_FIELD(arg0, void **, 0x1C) = (void *) (var_a0 + 8);
    M2C_FIELD(arg0, s16 *, 0x16) = (s16) (M2C_FIELD(var_a0, s16 *, 4) << var_s2);
    return -1;
}
