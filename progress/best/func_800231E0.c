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
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80016604();
s32 func_8002E428();
extern char D_800827A4[];
extern char D_8008ABE0[];
extern s16 D_8008F098;

void func_800231E0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s16 *, 0x14) = arg1;
    D_8008F098 = arg1;
    func_8002E428(D_8008ABE0, arg1);
    func_80016604(D_800827A4);
}
