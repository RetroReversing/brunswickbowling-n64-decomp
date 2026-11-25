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

extern int D_8008ED84;
s32 func_80045050();
s32 func_80045188();
extern char D_8008ED80[];

void func_80024124(void *arg0) {
    D_8008ED84 = 9;
    func_80045188(D_8008ED80, M2C_FIELD(arg0, s16 *, 0x14), M2C_FIELD(arg0, s16 *, 0x16), 0x15E, 0x8A, 0x20, 0x20, 0x40, 0);
    D_8008ED84 = 2;
    func_80045050(D_8008ED80, M2C_FIELD(arg0, s16 *, 0x14) + M2C_FIELD(arg0, s16 *, 0x22), M2C_FIELD(arg0, s16 *, 0x16) + M2C_FIELD(arg0, s16 *, 0x24), 0, (s32) M2C_FIELD(arg0, s16 *, 0x26), (s32) M2C_FIELD(arg0, s16 *, 0x28), 0x70, 0x80, 0xA0, 0, 0);
    func_80045050(D_8008ED80, M2C_FIELD(arg0, s16 *, 0x14) + 0x15E, M2C_FIELD(arg0, s16 *, 0x16) + 3, 0, 8, 0x87, 8, 8, 8, 1, 0);
    func_80045050(D_8008ED80, M2C_FIELD(arg0, s16 *, 0x14) + 8, M2C_FIELD(arg0, s16 *, 0x16) + 0x8A, 0, 0x15E, 3, 8, 8, 8, 1, 0);
    D_8008ED84 = 0;
}
