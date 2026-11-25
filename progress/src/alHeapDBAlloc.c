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

u32 alHeapDBAlloc(s32 arg0, s32 arg1, void *arg2, s32 arg3, s32 arg4) {
    u32 temp_a0;
    u32 temp_a1;
    u32 var_t0;
    u32 __repair_alloc_size;

    __repair_alloc_size = ((arg3 * arg4) + 0xF) & -0x10;
    temp_a1 = M2C_FIELD(arg2, u32 *, 4);
    temp_a0 = temp_a1 + __repair_alloc_size;
    var_t0 = 0;
    if ((u32) (M2C_FIELD(arg2, s32 *, 0) + M2C_FIELD(arg2, s32 *, 8)) >= temp_a0) {
        var_t0 = temp_a1;
        M2C_FIELD(arg2, u32 *, 4) = temp_a0;
    }
    return var_t0;
}
