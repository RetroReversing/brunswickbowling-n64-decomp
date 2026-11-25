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

s32 func_80029704();
s32 func_80039738();
s32 func_80051120();
extern char D_8008CEB0[];
extern char D_8008CF28[];
extern void *D_8008D8E8;
extern char D_8008ED80[];
extern void *D_8008ED84;

void func_80021FE8(void *arg0, void *arg1, void **arg2) {
    s16 var_s0;
    s32 temp_a1;
    s32 var_s1;
    void **var_a2;
    void *temp_s2;
    void *var_a0;
    void *var_a1;

    var_a0 = arg0;
    var_a1 = arg1;
    var_a2 = arg2;
    temp_s2 = var_a0;
    if (M2C_FIELD(temp_s2, s32 *, 0x4C) != -1) {
        var_a2 = &D_8008D8E8;
        var_a0 = D_8008D8E8;
        var_a1 = M2C_FIELD(temp_s2, void **, 0x4C);
        M2C_FIELD(temp_s2, void **, 0x54) = (void *) M2C_FIELD(D_8008ED80, void **, 4);
        M2C_FIELD(temp_s2, void **, 0x50) = var_a0;
        M2C_FIELD(D_8008ED80, void **, 4) = var_a1;
        D_8008D8E8 = M2C_FIELD(temp_s2, void **, 0x4C);
    } else {
        D_8008ED84 = NULL;
        D_8008D8E8 = NULL;
    }
    if (M2C_FIELD(temp_s2, s32 *, 0x14) != 0) {
        func_80051120(var_a0, var_a1, var_a2);
        var_s1 = 0;
        temp_a1 = M2C_FIELD(temp_s2, s32 *, 0x48);
        func_80029704(M2C_FIELD(temp_s2, s32 *, 0x44), temp_a1, 0, 0);
        var_s0 = ((s32) (0xF0 - temp_a1) >> 1) + 0xA;
        if (M2C_FIELD(temp_s2, s32 *, 0x40) > 0) {
            do {
                var_s0 += 0xF;
                func_80039738(D_8008CEB0, 0, 1, 0x140, (s32) var_s0, *(s32 *)((var_s1 * 4) + M2C_FIELD(temp_s2, s32 *, 0x14)));
                var_s1 += 1;
            } while (var_s1 < M2C_FIELD(temp_s2, s32 *, 0x40));
        }
    }
    func_80039738(D_8008CF28, 0, 1, (s16) (0x140 - ((s32) M2C_FIELD(temp_s2, s32 *, 0x44) >> 2)), (s32) (s16) (((M2C_FIELD(temp_s2, s32 *, 0x40) - 1) * 0xF) + ((s32) (0xF0 - M2C_FIELD(temp_s2, s32 *, 0x48)) >> 1) + 0x1E), M2C_FIELD(temp_s2, s32 *, 0x18));
    func_80039738(D_8008CF28, 0, 1, (s16) (((s32) M2C_FIELD(temp_s2, s32 *, 0x44) >> 2) + 0x140), (s32) (s16) (((M2C_FIELD(temp_s2, s32 *, 0x40) - 1) * 0xF) + ((s32) (0xF0 - M2C_FIELD(temp_s2, s32 *, 0x48)) >> 1) + 0x1E), M2C_FIELD(temp_s2, s32 *, 0x1C));
    if (M2C_FIELD(temp_s2, void **, 0x4C) != (void *)-1) {
        D_8008ED84 = M2C_FIELD(temp_s2, void **, 0x54);
        D_8008D8E8 = M2C_FIELD(temp_s2, void **, 0x50);
    }
}
