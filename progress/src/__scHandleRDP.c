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

s32 __scTaskComplete();
s32 __scExec();
s32 __scSchedule();

void __scHandleRDP(void *arg0) {
    s32 sp10;
    s32 sp14;
    s32 var_s0;
    void *temp_a1;

    temp_a1 = M2C_FIELD(arg0, void **, 0x278);
    sp10 = 0;
    sp14 = 0;
    M2C_FIELD(arg0, void **, 0x278) = NULL;
    M2C_FIELD(temp_a1, s32 *, 4) &= ~1;
    __scTaskComplete(arg0, temp_a1);
    var_s0 = (M2C_FIELD(arg0, s32 *, 0x274) == 0) * 2;
    if (M2C_FIELD(arg0, void **, 0x278) == NULL) {
        var_s0 |= 1;
    }
    if (__scSchedule(arg0, &sp10, &sp14, var_s0) != var_s0) {
        __scExec(arg0, sp10, sp14);
    }
}
