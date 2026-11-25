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

extern int D_800891B0;
s32 func_80022AF4();
s32 func_80022B18();
s32 func_80023FBC();
s32 func_80047948();
extern char D_80083430[];
extern char D_8008FD78[];

void func_8002B6C4(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg2 >= 0x209) {
        if (arg2 >= 0x20B) {
            if (arg2 == 0x20B) {
                M2C_FIELD(*(s32 *)(void * *)(D_800891B0 + 4), s32 (**)(void *, s32, s32 *), 0xC)(M2C_FIELD(*(s32 *)(void * *)(D_800891B0 + 4), s16 *, 8) + &D_800891B0, D_800891B0, &D_800891B0);
                func_80022B18(&D_800891B0);
                goto block_6;
            }
        } else {
            func_80022B18(&D_800891B0);
            if (func_80022AF4(&D_800891B0) == 0) {
                M2C_FIELD(arg0, s32 **, 0x34) = D_80083430;
            }
block_6:
            func_80047948(D_8008FD78, 0, 0, 0);
        }
    }
    func_80023FBC(arg0, arg1 & 0xFF, arg2, arg3);
}
