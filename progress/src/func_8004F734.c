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

M2C_UNK func_8004D53C(s32);                         /* extern */
s32 func_8004E814(M2C_UNK *, M2C_UNK *, M2C_UNK);   /* extern */
extern M2C_UNK D_8009CE10;
extern s32 D_8009CFD0;
extern s32 D_8009CFD4;
extern s32 D_8009CFD8;
extern f32 D_8009CFDC;
extern M2C_UNK func_8004F5EC;

void func_8004F734(f32 arg0, s32 arg1) {
    if (D_8009CFD0 != 0) {
        func_8004D53C(D_8009CFD0);
        D_8009CFD0 = 0;
    }
    D_8009CFD4 = arg1 & 0xFFFFFF;
    D_8009CFDC = arg0;
    D_8009CFD8 = 0;
    D_8009CFD0 = func_8004E814(&func_8004F5EC, &D_8009CE10, 0);
}
