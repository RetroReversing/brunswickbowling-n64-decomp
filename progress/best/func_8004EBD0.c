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

M2C_UNK func_8004EC84(void *);                      /* extern */
M2C_UNK func_8004F0A8(void *);                      /* extern */
M2C_UNK func_8004F2A0(void *, u16);                 /* extern */
extern s32 D_8009CE08;
extern void *D_8009CFC8;

void func_8004EBD0(void) {
    s32 temp_a0;
    void *var_s0;

    var_s0 = M2C_FIELD(D_8009CFC8, void **, 4);
    if (var_s0 != NULL) {
        do {
            temp_a0 = M2C_FIELD(var_s0, s32 *, 0);
            if (!(temp_a0 & 4)) {
                if (D_8009CE08 == M2C_FIELD(var_s0, s32 *, 0x3C)) {
                    if (temp_a0 & 2) {
                        func_8004F2A0(var_s0 + 0xC, M2C_FIELD(var_s0, u16 *, 0x38));
                    }
                    if (M2C_FIELD(var_s0, s16 *, 0x16) != 0) {
                        func_8004EC84(var_s0);
                    }
                    goto block_7;
                }
            } else {
block_7:
                if ((D_8009CE08 == M2C_FIELD(var_s0, s32 *, 0x3C)) && (M2C_FIELD(var_s0, s32 *, 0) & 1)) {
                    func_8004F0A8(var_s0);
                }
            }
            var_s0 = M2C_FIELD(var_s0, void **, 4);
        } while (var_s0 != NULL);
    }
}
