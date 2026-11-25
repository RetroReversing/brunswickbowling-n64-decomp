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

void func_80050CD0(void *arg0, s32 arg1) {
    s32 temp_a0;
    u32 temp_v0;
    u32 var_a2;
    void *temp_a0_2;
    void *temp_v1;

    M2C_FIELD(arg0, void **, 0x18) = (void *) ((s32)(M2C_FIELD(arg0, void **, 0x18) - arg1) + (s32)arg0);
    M2C_FIELD(arg0, void **, 0x1C) = (void *) ((s32)(M2C_FIELD(arg0, void **, 0x1C) - arg1) + (s32)arg0);
    M2C_FIELD(arg0, void **, 0x20) = (void *) ((s32)(M2C_FIELD(arg0, void **, 0x20) - arg1) + (s32)arg0);
    M2C_FIELD(arg0, void **, 0x24) = (void *) ((s32)(M2C_FIELD(arg0, void **, 0x24) - arg1) + (s32)arg0);
    M2C_FIELD(arg0, void **, 0x28) = (void *) ((s32)(M2C_FIELD(arg0, void **, 0x28) - arg1) + (s32)arg0);
    M2C_FIELD(arg0, void **, 0x2C) = (void *) ((s32)(M2C_FIELD(arg0, void **, 0x2C) - arg1) + (s32)arg0);
    M2C_FIELD(arg0, void **, 0x30) = (void *) ((s32)(M2C_FIELD(arg0, void **, 0x30) - arg1) + (s32)arg0);
    M2C_FIELD(arg0, void **, 0x3C) = (void *) ((s32)(M2C_FIELD(arg0, void **, 0x3C) - arg1) + (s32)arg0);
    M2C_FIELD(arg0, void **, 0x58) = (void *) ((s32)(M2C_FIELD(arg0, void **, 0x58) - arg1) + (s32)arg0);
    M2C_FIELD(arg0, void **, 0x60) = (void *) ((s32)(M2C_FIELD(arg0, void **, 0x60) - arg1) + (s32)arg0);
    temp_v0 = M2C_FIELD(arg0, u32 *, 0x10);
    M2C_FIELD(arg0, void **, 0x5C) = (void *) ((s32)(M2C_FIELD(arg0, void **, 0x5C) - arg1) + (s32)arg0);
    if (temp_v0 != 0) {
        var_a2 = 0;
        if (temp_v0 != 0) {
            do {
                temp_a0 = var_a2 << 5;
                temp_v1 = temp_a0 + M2C_FIELD(arg0, void **, 0x30);
                M2C_FIELD(temp_v1, void **, 0x10) = (void *) ((s32)(M2C_FIELD(temp_v1, void **, 0x10) - arg1) + (s32)arg0);
                temp_a0_2 = temp_a0 + M2C_FIELD(arg0, void **, 0x30);
                M2C_FIELD(temp_a0_2, void **, 0x14) = (void *) ((s32)(M2C_FIELD(temp_a0_2, void **, 0x14) - arg1) + (s32)arg0);
                var_a2 += 1;
            } while (var_a2 < (u32) M2C_FIELD(arg0, u32 *, 0x10));
        }
    }
}
