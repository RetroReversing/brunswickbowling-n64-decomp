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

M2C_UNK func_80021EFC(void *);                      /* extern */
M2C_UNK func_800375C0(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK D_8008C864;

s32 func_80021F18(void *arg0, s32 arg2) {
int __repair_literal;

    M2C_UNK (*temp_v0)();
    s32 var_s1;
    void *var_s0;

    /*__repair_loop_weight*/do {do {do { var_s1 = 0; } while (0);} while (0);} while (0);
__repair_literal = 0;

    if (M2C_FIELD(arg0, s32 *, 0x3C) > __repair_literal) {
        var_s0 = arg0;
        __repair_rows: {
            if (arg2 == M2C_FIELD(var_s0, s32 *, 0x24)) {
                func_800375C0(&D_8008C864, 1);
                func_80021EFC(arg0);
                temp_v0 = M2C_FIELD(var_s0, M2C_UNK (**)(), 0x30);
                if (temp_v0 != NULL) {
                    temp_v0();
                }
            }
            var_s1 += 1;
            var_s0 += 4;
        }
if (var_s1 < M2C_FIELD(arg0, s32 *, 0x3C)) goto __repair_rows;
    }
    return 0;
}
