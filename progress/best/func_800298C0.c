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

extern M2C_UNK D_8008CEEC;

void func_800298C0(void *arg0, s16 arg1, u16 arg2, s16 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9) {
    s32 temp_v0;
    s32 var_t0;
    s32 var_t1;
    void *temp_v1;

    var_t0 = 0;
    var_t1 = 0;
    M2C_FIELD(arg0, s16 *, 0) = arg1;
    M2C_FIELD(arg0, u16 *, 2) = arg2;
    M2C_FIELD(arg0, s16 *, 4) = arg3;
    M2C_FIELD(arg0, u16 *, 6) = (u16) arg4;
    M2C_FIELD(arg0, s8 *, 8) = (s8) arg5;
    M2C_FIELD(arg0, s8 *, 9) = (s8) arg6;
    M2C_FIELD(arg0, s8 *, 0xA) = (s8) arg7;
    M2C_FIELD(arg0, s32 *, 0xC) = arg8;
    M2C_FIELD(arg0, s32 *, 0x10) = arg9;
loop_1:
    if (var_t1 < arg9) {
        temp_v1 = M2C_FIELD(((var_t1 * 0x10) + M2C_FIELD(arg0, s32 *, 0xC)), void **, 8);
        if (temp_v1 == NULL) {
            var_t0 += 4;
        } else {
            temp_v0 = var_t0 + M2C_FIELD(temp_v1, s32 *, 8);
            var_t0 = temp_v0;
            if (temp_v1 == &D_8008CEEC) {
                var_t0 = temp_v0 - 3;
            }
        }
        var_t1 += 1;
        goto loop_1;
    }
    M2C_FIELD(arg0, s16 *, 0x14) = (s16) ((M2C_FIELD(arg0, u16 *, 2) + ((s32) (M2C_FIELD(arg0, u16 *, 6) << 0x10) >> 0x11)) - ((s32) (var_t0 << 0x10) >> 0x11));
}
