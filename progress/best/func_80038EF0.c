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

extern int D_8008BAA4;
s32 func_8001AC48();
s32 func_8001C210();
s32 func_8003812C();
s32 func_8003FE98();
s32 func_80046230();
extern char D_80082F00[];
extern char D_8008BA90[];
extern s32 D_8008BA98;
extern char D_8008C9CC[];
extern char D_8008E9B0[];
extern s32 D_8008E9E0;
extern char D_8008F2F0[];

void func_80038EF0(void *arg0, s8 arg1, s32 arg2) {
    int *__base_D_8008BAA4;
    char *__base_D_8008E9B0;
    void *sp18;
    void *sp20;
    void *sp28;
    void *sp30;
    s32 sp38;

    M2C_FIELD(arg0, s32 *, 0x18) = arg2;
    if (arg2 != 0) {
        __base_D_8008BAA4 = &D_8008BAA4;
        if ((*__base_D_8008BAA4) == 0) {
            (*__base_D_8008BAA4) = (s32) D_8008E9E0;
        }
        func_8001AC48(D_80082F00);
        func_8003812C(D_8008C9CC);
        func_80046230(D_8008F2F0);
    }
    sp18 = arg0;
    sp30 = arg0;
    sp28 = arg0;
    sp38 = D_8008BA98;
    func_8001C210(arg0, &sp38);
    sp20 = sp28;
    M2C_FIELD(arg0, s8 *, 0x14) = arg1;
    M2C_FIELD(arg0, s32 *, 0x1C) = 1;
    __base_D_8008E9B0 = D_8008E9B0;
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) M2C_FIELD(((func_8003FE98(__base_D_8008E9B0, arg1 & 0xFF) * 4) + __base_D_8008E9B0), s32 *, 0xC);
}
