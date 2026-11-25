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

s32 bcmp(void *, M2C_UNK *, M2C_UNK);               /* extern */
s32 __osPfsSelectBank();                 /* extern */
s32 __osContRamRead(s32, s32, M2C_UNK, M2C_UNK *);    /* extern */

s32 __osCheckId(void *arg0) {
    s32 __repair_read_buffer[8];
    s32 __repair_read_error;

    if (M2C_FIELD(arg0, u8 *, 101) != 0) {
        __repair_read_error = __osPfsSelectBank(arg0, 0);
        if (__repair_read_error == 2) {
            __repair_read_error = __osPfsSelectBank(arg0, 0);
        }
        if (__repair_read_error != 0) {
            return __repair_read_error;
        }
    }
    __repair_read_error = __osContRamRead(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), 1, __repair_read_buffer);
    if (__repair_read_error != 0) {
        if (__repair_read_error != 2) {
            return __repair_read_error;
        }
        __repair_read_error = __osContRamRead(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), 1, __repair_read_buffer);
        if (__repair_read_error != 0) {
            return __repair_read_error;
        }
    }
    return (bcmp((char *)arg0 + 12, __repair_read_buffer, 32) != 0) * 2;
}
