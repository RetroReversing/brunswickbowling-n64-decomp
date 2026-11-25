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

s32 func_80037264();
extern char D_80083980[];

void func_8001FCF0(void *arg0, s16 arg1, s16 arg2, s32 arg3) {
    s32 var_a2;
    void *temp_v1;

    if ((arg1 << 0x10) == 0) {
        var_a2 = 0x20;
        if (arg2 >= M2C_FIELD(arg0, s16 *, 0x18)) {
            var_a2 = 0x40;
            if (arg2 < M2C_FIELD(arg0, s16 *, 0x1A)) {
                var_a2 = 0x60;
            }
        }
    } else {
        var_a2 = 0;
        if ((arg2 >= M2C_FIELD(arg0, s16 *, 0x1C)) && (M2C_FIELD(arg0, s16 *, 0x22) >= arg2)) {
            var_a2 = 0x80;
            if ((arg2 >= M2C_FIELD(arg0, s16 *, 0x1E)) && (M2C_FIELD(arg0, s16 *, 0x20) >= arg2)) {
                var_a2 = 0xA0;
            }
        }
    }
    temp_v1 = (((s32) (arg2 << 0x10) >> 0x14) * 8) + (arg1 * 0x50) + D_80083980;
    if (arg3 != 0) {
        var_a2 += 0x10;
    }
    func_80037264(M2C_FIELD(temp_v1, s32 *, 0), 0, var_a2, M2C_FIELD(temp_v1, s32 *, 4), (arg2 & 0xF) * 0x10, 0x10);
}
