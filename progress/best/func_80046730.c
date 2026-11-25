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

M2C_UNK func_80048490();                            /* extern */
M2C_UNK func_8004C850(M2C_UNK);                     /* extern */
s32 func_8004CAD8(M2C_UNK);                         /* extern */
M2C_UNK func_8004D2E4(M2C_UNK);                     /* extern */
M2C_UNK func_8004D638(s32, s32, M2C_UNK, M2C_UNK);  /* extern */
M2C_UNK func_8004E00C(M2C_UNK);                     /* extern */
M2C_UNK func_8004EAB8(M2C_UNK);                     /* extern */
M2C_UNK func_800506C0(s32, M2C_UNK);                /* extern */
M2C_UNK func_80051128();                            /* extern */
M2C_UNK func_80051204(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern s32 D_8009CBD8;
extern M2C_UNK func_8003A0D8;

void func_80046730(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    M2C_UNK var_a1;
    s32 temp_v0;
    s32 var_a0;

    func_8004C850(0x100);
    func_8004D2E4(0x40);
    func_8004D638(arg0 & 0xFFFF, arg1 & 0xFFFF, arg2, arg3);
    func_8004E00C(1);
    func_8004EAB8(8);
    func_80048490();
    func_80051128();
    func_80051204(&func_8003A0D8, 0, 1);
    func_80051204(&func_8003A0D8, 1, 1);
    func_80051204(&func_8003A0D8, 2, 1);
    func_80051204(&func_8003A0D8, 3, 1);
    temp_v0 = func_8004CAD8(0x3D090);
    var_a0 = temp_v0;
    if (temp_v0 == 0) {
        var_a0 = D_8009CBD8;
        var_a1 = 0x4B000;
    } else {
        var_a1 = 0x3D090;
    }
    func_800506C0(var_a0, var_a1);
}
