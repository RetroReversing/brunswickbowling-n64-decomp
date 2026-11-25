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

s32 func_800375C0();
s32 func_80047948(s32 *, f32, f32, f32);    /* extern */
extern char D_80089974[];
extern char D_80089A04[];
extern char D_80089A08[];
extern char D_8008C87C[];
extern char D_800927B4[];

void func_80029B70(void *arg0, s32 arg1, s32 arg2) {
    void *temp_v0;

    if ((M2C_FIELD(arg0, s32 *, 0x40) != arg1) && (arg2 != 0)) {
        func_800375C0(D_8008C87C, 0);
    }
    temp_v0 = (arg1 * 0xC) + D_80089974;
    M2C_FIELD(arg0, s32 *, 0x40) = arg1;
    func_80047948(D_800927B4, (f32) M2C_FIELD(temp_v0, s32 *, 0), (f32) M2C_FIELD(temp_v0, s32 *, 4), (f32) M2C_FIELD(temp_v0, s32 *, 8));
    *(*(arg1 + D_80089A08) + D_80089A04) = (s8) arg1;
}
