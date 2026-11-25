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

s32 func_80037590();
s32 func_800375A8();
extern char D_8008C5E0[];
extern char D_8008C5F8[];
extern char D_8008C610[];
extern char D_8008C628[];
extern char D_8008C640[];
extern char D_8008C658[];
extern char D_8008C670[];
extern char D_8008C688[];
extern char D_8008C6A0[];
extern char D_8008C6B8[];
extern char D_8008C6FC[];
extern char D_8008C754[];
extern char D_8008C798[];
extern char D_8008C7DC[];
extern char D_8008C820[];
extern char D_8008C84C[];
extern char D_8008C864[];
extern char D_8008C87C[];
extern char D_8008C894[];
extern char D_8008C8AC[];
extern char D_8008C8C4[];
extern char D_8008C8DC[];
extern char D_8008C8F4[];
extern char D_8008C90C[];

void func_800383E4(void) {
    s32 *var_s1;
    s32 var_s0;

    func_800375A8(D_8008C5E0, 0x11);
    func_800375A8(D_8008C5F8, 0xF);
    func_800375A8(D_8008C610, 0xE);
    func_800375A8(D_8008C628, 0x14);
    func_800375A8(D_8008C640, 0x13);
    func_800375A8(D_8008C658, 0x12);
    func_800375A8(D_8008C670, 0x10);
    func_800375A8(D_8008C688, 0xD);
    func_800375A8(D_8008C6A0, 0xD);
    func_800375A8(D_8008C6B8, 2);
    func_800375A8(D_8008C6B8 + 0x16, 2);
    func_800375A8(D_8008C6B8 + 0x2C, 2);
    func_800375A8(D_8008C6FC, 4);
    func_800375A8(D_8008C6FC + 0x16, 4);
    func_800375A8(D_8008C6FC + 0x2C, 4);
    func_800375A8(D_8008C6FC + 0x42, 4);
    func_800375A8(D_8008C754, 1);
    func_800375A8(D_8008C754 + 0x16, 1);
    func_800375A8(D_8008C754 + 0x2C, 1);
    func_800375A8(D_8008C798, 0);
    func_800375A8(D_8008C798 + 0x16, 0);
    func_800375A8(D_8008C798 + 0x2C, 0);
    func_800375A8(D_8008C7DC, 3);
    func_800375A8(D_8008C7DC + 0x16, 3);
    func_800375A8(D_8008C7DC + 0x2C, 3);
    var_s1 = D_8008C820;
    var_s0 = 1;
    do {
        func_80037590(var_s1);
        var_s0 -= 1;
        var_s1 += 0x16;
    } while (var_s0 != -1);
    func_800375A8(D_8008C84C, 0x15);
    func_800375A8(D_8008C864, 0x16);
    func_800375A8(D_8008C87C, 0x17);
    func_800375A8(D_8008C894, 0x19);
    func_800375A8(D_8008C8AC, 0x18);
    func_800375A8(D_8008C8C4, 0x1A);
    func_800375A8(D_8008C8DC, 0x1B);
    func_800375A8(D_8008C8F4, 0x1C);
    func_800375A8(D_8008C90C, 0xC);
}
