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
s32 func_8005F04C();
s32 func_8005F090();
s32 func_80063050();
s32 alHeapDBAlloc();
extern s32 D_800A5AD0;
extern s32 D_800A5AD4;
extern s32 D_800A5AD8;
extern s32 D_800A5ADC;
extern s32 D_800A5AE0;
extern s32 D_800A5AE4;
extern s32 alFxPull;
extern s32 func_80063804;
extern s32 alFxParamHdl;

void func_8005EC08(void *arg0, void *arg1, s32 arg2) {
    func_80063050(arg0, 0, &func_80063804, 5);
    M2C_FIELD(arg0, s32 **, 4) = &alFxPull;
    M2C_FIELD(arg0, s32 **, 0x28) = &alFxParamHdl;
    D_800A5AD0 = alHeapDBAlloc(0, 0, arg2, func_8005F04C(), 0x28);
    D_800A5AD4 = alHeapDBAlloc(0, 0, arg2, func_8005F090(), 2);
    D_800A5AD8 = alHeapDBAlloc(0, 0, arg2, 1, 0x34);
    D_800A5ADC = alHeapDBAlloc(0, 0, arg2, 1, 0x20);
    D_800A5AE0 = alHeapDBAlloc(0, 0, arg2, 1, 0x30);
    D_800A5AE4 = alHeapDBAlloc(0, 0, arg2, 1, 8);
    func_8005ED54(M2C_FIELD(arg1, s32 *, 0x20));
}
