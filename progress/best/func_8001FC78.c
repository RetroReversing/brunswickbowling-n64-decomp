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

void func_8001FC78(s32 arg0, s16 arg1, s32 arg2) {
    s32 var_t0;
    void *temp_v1;

    var_t0 = 0xD0;
    if (arg1 == 0) {
        var_t0 = 0xC0;
    }
    temp_v1 = (((s32) (arg2 << 0x10) >> 0x14) * 8) + (arg1 * 0x50) + D_80083980;
    func_80037264(M2C_FIELD(temp_v1, s32 *, 0), 0, var_t0, M2C_FIELD(temp_v1, s32 *, 4), (arg2 & 0xF) * 0x10, 0x10);
}
