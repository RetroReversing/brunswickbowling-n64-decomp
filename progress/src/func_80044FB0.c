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

M2C_UNK func_80037310(M2C_UNK *);                   /* extern */
M2C_UNK func_80045200(M2C_UNK (**)(), M2C_UNK);     /* extern */
M2C_UNK func_80048478(M2C_UNK);                     /* extern */
M2C_UNK func_80051240(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK D_8008F0BC;
extern M2C_UNK D_8008F0FC;
extern M2C_UNK D_8008F13C;
extern M2C_UNK D_8008F224;
extern M2C_UNK D_8008F238;

void func_80044FB0(M2C_UNK (**arg0)(), M2C_UNK arg1) {
    M2C_UNK (*temp_s1)();
    M2C_UNK var_s0;

    func_80048478(0x10);
    func_80045200(arg0, arg1);
    temp_s1 = *arg0;
    var_s0 = 2;
    if (temp_s1 != NULL) {
        var_s0 = 1;
        temp_s1();
    }
    func_80051240(&D_8008F224, var_s0);
    func_80037310(&D_8008F0BC);
    func_80037310(&D_8008F0FC);
    func_80037310(&D_8008F13C);
    func_80051240(&D_8008F238, var_s0);
}
