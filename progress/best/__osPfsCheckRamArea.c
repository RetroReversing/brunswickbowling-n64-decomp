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

s32 bcmp();
s32 func_8006FEA0();
s32 __osContRamRead();
s32 __osContRamWrite();

s32 __osPfsCheckRamArea(void *arg0) {
    s32 sp18;
    s8 sp37;
    s32 sp38;
    s32 sp58;
    s32 var_v0;
    char *var_v1;
    s8 var_v0_2;

    var_v0 = func_8006FEA0(arg0, 0);
    if (var_v0 == 0) {
        var_v0 = __osContRamRead(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), 0, &sp58);
        var_v1 = &sp37;
        if (var_v0 == 0) {
            var_v0_2 = 0x1F;
            do {
                *(s8 *)var_v1 = var_v0_2;
                var_v0_2 -= 1;
                var_v1 -= 1;
            } while (var_v0_2 >= 0);
            var_v0 = __osContRamWrite(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), 0, &sp18, 0);
            if (var_v0 == 0) {
                var_v0 = __osContRamRead(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), 0, &sp38);
                if (var_v0 == 0) {
                    var_v0 = 0xB;
                    if (bcmp(&sp18, &sp38, 0x20) == 0) {
                        var_v0 = __osContRamWrite(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), 0, &sp58, 0);
                    }
                }
            }
        }
    }
    return var_v0;
}
