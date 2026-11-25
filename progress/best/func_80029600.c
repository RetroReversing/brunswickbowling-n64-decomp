/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O1, tried by autopilot */
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

extern int D_8008CEF4;
s32 func_800251A0();
s32 func_80037310();
s32 func_80039738();
s32 func_80045050();
extern char D_800764F4[];
extern s32 D_8008B3BC;
extern char D_8008C250[];
extern char D_8008C2D0[];
extern char D_8008CEEC[];
extern s32 D_8008D8E8;
extern char D_8008ED80[];

void func_80029600(void) {
    s32 *var_a0;
    s32 temp_s1;

    temp_s1 = D_8008D8E8;
    func_800251A0(1, 0xD);
    func_800251A0(0, 0x38);
    func_80045050(D_8008ED80, 0, 0x11, 0, 0x280, 0x27, 0x20, 0x20, 0x40, 0, 0);
    D_8008D8E8 = 0;
    func_80039738(D_8008CEEC, 0, 1, 0x140, (s32) (s16) (0x24 - ((s32) D_8008CEF4 >> 1)), D_800764F4);
    D_8008D8E8 = temp_s1;
    if (D_8008B3BC != 0) {
        var_a0 = D_8008C250;
    } else {
        var_a0 = D_8008C2D0;
    }
    M2C_FIELD(var_a0, s16 *, 0x10) = 0x2D;
    M2C_FIELD(var_a0, s16 *, 0x12) = 0xB;
    func_80037310(var_a0);
}
