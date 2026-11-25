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

s32 func_8005ED54();
s32 func_80063804();
extern s32 D_800978C0;
extern char D_800978C4[];
extern void *D_800A5AC0;

s32 func_8005F0D4(s32 arg0) {
    s32 temp_a2;

    if (arg0 >= D_800978C0) {
        return 1;
    }
    func_8005ED54(*(u32 *)(D_800978C4 + (arg0 * 4)));
    temp_a2 = M2C_FIELD(D_800A5AC0, s32 *, 0x34);
    func_80063804(temp_a2 + 0x20, 1, temp_a2);
    return 0;
    return 1;
}
