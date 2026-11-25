/* identical to __scAppendList in CruisnExotica (local match library) (matched), with its names changed by decompdecomp */
/* identical to __scAppendList in BLUES BROTHERS 2000 (local match library) (matched), with its names changed by decompdecomp */
/* Partial candidate from function #64424513051 in project #15; rechecked locally. */
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

void __scAppendList(void *arg0, M2C_UNK *arg1) {
    M2C_UNK *temp_v0;
    M2C_UNK *temp_v0_2;

    if (M2C_FIELD(arg1, s32 *, 0x10) == 2) {
        temp_v0 = M2C_FIELD(arg0, M2C_UNK **, 0x26C);
        if (temp_v0 != NULL) {
            *temp_v0 = arg1;
        } else {
            M2C_FIELD(arg0, M2C_UNK **, 0x264) = arg1;
        }
        M2C_FIELD(arg0, M2C_UNK **, 0x26C) = arg1;
        M2C_FIELD(arg0, s32 *, 0x280) = 1;
    } else {
        temp_v0_2 = M2C_FIELD(arg0, M2C_UNK **, 0x270);
        if (temp_v0_2 != NULL) {
            *temp_v0_2 = arg1;
        } else {
            M2C_FIELD(arg0, M2C_UNK **, 0x268) = arg1;
        }
        M2C_FIELD(arg0, M2C_UNK **, 0x270) = arg1;
    }
    M2C_FIELD(arg1, M2C_UNK **, 0) = NULL;
    M2C_FIELD(arg1, s32 *, 4) = (s32) (M2C_FIELD(arg1, s32 *, 8) & 3);
}
