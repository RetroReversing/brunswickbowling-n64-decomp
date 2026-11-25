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

void func_80021EBC(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
char *__repair_addr;

__repair_addr = (char *)((arg0 + ((*(s32 *)((s8 *)arg0 + 0x3C)) * 4)));

    (*(s32 *)((s8 *)__repair_addr + 0x24)) = arg1;
    (*(s32 *)((s8 *)(arg0 + (((*(s32 *)((s8 *)arg0 + 0x3C)) << 2))) + 0x18)) = arg2;
    (*(s32 *)((s8 *)(arg0 + (((*(s32 *)((s8 *)arg0 + 0x3C)) << 2))) + 0x30)) = arg3;
    (*(s32 *)((s8 *)arg0 + 0x3C)) = (s32) ((*(s32 *)((s8 *)arg0 + 0x3C)) + 1);
}
