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

s32 func_80024124();
s32 func_80039738();
s32 func_8005978C();
extern char D_80076754[];
extern char D_80082790[];
extern char D_8008B22C[];
extern char D_8008B2A4[];
extern char D_8008B3A4[];
extern u16 D_8008BCA8;
extern char D_8008CEB0[];
extern char D_8008CF28[];

void func_8002B3EC(void *arg0) {
    s32 sp18;
    s32 *sp58;
    s32 *temp_v1;
    void *temp_s0;

    func_80024124();
    if (M2C_FIELD(arg0, s32 *, 0x18) == 0) {
        temp_s0 = D_8008B3A4 + 0x34;
        temp_v1 = *(s32 *)((M2C_FIELD(temp_s0, s32 *, 4) * 4) + M2C_FIELD(temp_s0, s32 *, 0xC));
        sp58 = temp_v1;
        func_80039738(D_8008CEB0, 5, 1, 0x19F, 0x41, temp_v1);
        func_80039738(D_8008CF28, 7, 1, 0x19F, 0x4B, *((M2C_FIELD(temp_s0, s32 *, 4) * 4) + D_8008B22C));
        func_8005978C(&sp18, D_80076754, *((*((M2C_FIELD(temp_s0, s32 *, 4) * 4) + D_8008B2A4) * 4) + D_80082790));
        func_80039738(D_8008CF28, 7, 1, 0x19F, (s32) (s16) (D_8008BCA8 + 0x5E), &sp18);
    }
}
