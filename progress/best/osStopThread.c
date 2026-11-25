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

s32 func_8005FEF0();                                /* extern */
M2C_UNK func_8005FF60(s32);                         /* extern */
M2C_UNK func_800678C4(M2C_UNK);                     /* extern */
M2C_UNK func_8006C8C0(s32, void *);                 /* extern */
extern void *D_80097DD0;

void osStopThread(void *arg0) {
    s32 temp_s1;
    s32 temp_v1;
    u16 var_v1;

    var_v1 = 4;
    temp_s1 = func_8005FEF0();
    if (arg0 != NULL) {
        var_v1 = M2C_FIELD(arg0, u16 *, 0x10);
    }
    temp_v1 = var_v1 & 0xFFFF;
    switch (temp_v1) {                              /* irregular */
    case 4:
        M2C_FIELD(D_80097DD0, s16 *, 0x10) = 1;
        func_800678C4(0);
        break;
    case 8:
    case 2:
        M2C_FIELD(arg0, u16 *, 0x10) = 1U;
        func_8006C8C0(M2C_FIELD(arg0, s32 *, 8), arg0);
        break;
    }
    func_8005FF60(temp_s1);
}
