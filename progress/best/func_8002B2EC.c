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

s32 func_8003EC54();
s32 func_84002000();
extern char D_80083AF0[];
extern char D_8008B2A4[];
extern s32 D_8008B3DC;

void func_8002B2EC(void) {
    func_84002000();
    func_8003EC54(D_80083AF0, *((D_8008B3DC * 4) + D_8008B2A4));
}
