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

extern short D_8008C2A0;
extern unsigned short D_8008C2A6;
extern unsigned short D_8008C2A8;
extern short D_8008C2A2;
extern int D_8008923C;
extern int D_80089244;
s32 func_80024124();
s32 func_80037310();
s32 func_80039738();
extern char D_80089238[];
extern char D_8008C290[];
extern char D_8008CEB0[];

void func_800465A4(void *arg0) {
    s16 temp_a1;
    s32 temp_v1;

    func_80024124();
    D_8008C2A0 = (s16) (M2C_FIELD(arg0, u16 *, 0x14) + ((s32) (0x15E - D_8008C2A6) >> 1));
    temp_a1 = M2C_FIELD(arg0, u16 *, 0x16) + ((s32) (0x8A - D_8008C2A8) >> 1);
    D_8008C2A2 = temp_a1;
    func_80037310(D_8008C290, temp_a1);
    temp_v1 = *(s32 *)((D_8008923C * 4) + D_80089244);
    func_80039738(D_8008CEB0, 7, 1, 0x140, 0x23, temp_v1, temp_v1);
}
