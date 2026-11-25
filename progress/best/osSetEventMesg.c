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

s32 func_8005FEF0();
s32 func_8005FF60();
s32 func_800680F0();
extern s32 D_80097CA0;
extern s32 D_8009911C;
extern char D_800A7980[];

void osSetEventMesg(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s3;
    void *temp_v1;

    temp_v1 = (arg0 * 8) + D_800A7980;
    temp_s3 = func_8005FEF0();
    M2C_FIELD(temp_v1, s32 *, 0) = arg1;
    M2C_FIELD(temp_v1, s32 *, 4) = arg2;
    if (arg0 == 0xE) {
        if ((D_8009911C != 0) && (D_80097CA0 == 0)) {
            func_800680F0(arg1, arg2, 0);
        }
        D_80097CA0 = 1;
    }
    func_8005FF60(temp_s3);
}
