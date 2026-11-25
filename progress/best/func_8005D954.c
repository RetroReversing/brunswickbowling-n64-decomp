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

extern s32 D_800A5A70;

s32 func_8005D954(void *arg0, void *arg1, s32 arg2, s16 arg3, s32 arg4, s32 arg5) {
    s32 temp_v0;
    s32 temp_v1;
s32 __repair_phase_temp_v1;

    func_8005D618();
    do {
    do { M2C_FIELD(arg0, s16 *, 0xA6) = (s16) arg2; } while (0);
    do { M2C_FIELD(arg0, void **, 0x78) = arg1; } while (0);
    do { M2C_FIELD(arg0, s16 *, 0x9E) = arg3; } while (0);
    do { M2C_FIELD(arg0, s16 *, 0xB0) = (s16) arg4; } while (0);
    do { M2C_FIELD(arg0, s32 *, 0x44) = (s32) D_800A5A70; } while (0);
    M2C_FIELD(arg0, s32 *, 0x48) = arg5;
    temp_v1 = M2C_FIELD(arg1, s32 *, 0x10);
    } while (0);
    D_800A5A70 += 1;
    if (temp_v1 != 0) {
        do { M2C_FIELD(arg0, s32 *, 0x7C) = temp_v1; } while (0);
    }
    do { __repair_phase_temp_v1 = M2C_FIELD((arg1 + ((arg2 << 3))), s32 *, 0x18); } while (0);
    do { M2C_FIELD(arg0, s32 *, 0x80) = __repair_phase_temp_v1; } while (0);
    do { M2C_FIELD(arg0, s32 *, 4) = __repair_phase_temp_v1; } while (0);
    return M2C_FIELD(arg0, s32 *, 0x44);
}
