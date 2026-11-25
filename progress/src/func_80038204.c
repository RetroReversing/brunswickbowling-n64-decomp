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

s32 func_80037868();
extern char D_8008C6B8[];
extern char D_8008C6FC[];
extern char D_8008C754[];
extern char D_8008C798[];
extern char D_8008C7DC[];

void func_80038204(void *arg0) {
    func_80037868(D_8008C6B8);
    func_80037868(D_8008C6B8 + 0x16);
    func_80037868(D_8008C6B8 + 0x2C);
    func_80037868(D_8008C6FC);
    func_80037868(D_8008C6FC + 0x16);
    func_80037868(D_8008C6FC + 0x2C);
    func_80037868(D_8008C6FC + 0x42);
    func_80037868(D_8008C754);
    func_80037868(D_8008C754 + 0x16);
    func_80037868(D_8008C754 + 0x2C);
    func_80037868(D_8008C798);
    func_80037868(D_8008C798 + 0x16);
    func_80037868(D_8008C798 + 0x2C);
    func_80037868(D_8008C7DC);
    func_80037868(D_8008C7DC + 0x16);
    func_80037868(D_8008C7DC + 0x2C);
    M2C_FIELD(arg0, s32 *, 0x138) = 0;
}
