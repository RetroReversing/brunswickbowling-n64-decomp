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

extern unsigned char D_80081A08;
extern unsigned char D_80081A09;
s32 func_80012DA8();
s32 func_8002FDB0();
s32 func_800318E4();
extern char D_8007F618[];
extern char D_8008B130[];

void func_800317F4(s32 arg0) {
    void *temp_s1;

    func_800318E4(arg0, 2, &D_80081A08);
    temp_s1 = arg0 + 0x24;
    func_80012DA8((D_80081A08 * 0x5C) + D_8007F618, 1, func_8002FDB0(0, M2C_FIELD(((M2C_FIELD(temp_s1, s32 *, 4) * 0x1C) + D_8008B130), s32 *, 0x10)));
    func_80012DA8((D_80081A09 * 0x5C) + D_8007F618, 2, func_8002FDB0(1, M2C_FIELD(((M2C_FIELD(temp_s1, s32 *, 4) * 0x1C) + D_8008B130), s32 *, 0x10)));
}
