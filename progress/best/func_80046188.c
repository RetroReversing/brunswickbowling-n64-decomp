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

s32 func_80037744();
extern char D_8008BA90[];
extern char D_8008C90C[];
extern u8 D_8008F340;

void func_80046188(void *arg0) {
    s32 *sp10;
    s32 *sp18;
    s32 *temp_a0;
    s32 *var_v0;
    s32 var_a1;

    if (D_8008F340 != 0) {
        func_80037744(D_8008C90C);
        temp_a0 = D_8008BA90 + 8;
        M2C_FIELD(arg0, s8 *, 0x14) = 0;
        M2C_FIELD(arg0, s8 *, 0x15) = 0;
        var_v0 = M2C_FIELD(D_8008BA90, s32 **, 8);
        var_a1 = 1;
        D_8008F340 = 0;
loop_2:
        sp10 = var_v0;
        sp18 = temp_a0;
        if (sp10 != temp_a0) {
            if (sp10 != arg0) {
                var_v0 = *sp10;
                sp18 = sp10;
                goto loop_2;
            }
        } else {
            var_a1 = 0;
        }
        if (var_a1 != 0) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), void ***, 4) = (void **) M2C_FIELD(arg0, void ***, 4);
            *M2C_FIELD(arg0, void ***, 4) = M2C_FIELD(arg0, void **, 0);
        }
    }
}
