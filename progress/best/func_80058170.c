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

M2C_UNK func_80059DD0(u8 *);                        /* extern */
M2C_UNK func_80059EE0(s8);                          /* extern */
extern s32 D_800A58E0;
extern s32 D_800A58E4;
extern u8 *D_800A58E8;
extern u8 *D_800A58EC;

void func_80058170(u8 arg0) {
    u64 scratch;
    u8 *temp_v1;
    u8 *var_s0;
    s32 temp_v0;
    u8 var_a0;

    *D_800A58E8 = 0;
    if (D_800A58E4 == 2) {
        D_800A58E8 = D_800A58EC;
        func_80059DD0(D_800A58EC);
    } else {
        D_800A58E8 = D_800A58EC;
        var_s0 = D_800A58EC;
        temp_v0 = *var_s0;
        var_a0 = temp_v0;
        if (temp_v0 != 0) {
  s8 temp;
            loop_goto_1:
            {
                func_80059EE0((s8) var_a0);
                var_s0 += 1;
                var_a0 = *var_s0;
            }
            temp = (s8) *var_s0;
            if (temp != 0)
            {
                goto loop_goto_1;
            }
        }
    }
    D_800A58E0 = 0x7F;
    temp_v1 = D_800A58E8;
    D_800A58E8 = temp_v1 + 1;
    *temp_v1 = arg0;
}
