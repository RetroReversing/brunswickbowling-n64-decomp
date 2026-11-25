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

void func_80012628(void *arg0) {
    s32 temp;
    s32 *temp_a0;
    s32 *temp_a1;
    void *temp_a2;

    temp_a1 = (*(s32 **)((s8 *)arg0 + 0x50));
    temp_a2 = (*(void **)((s8 *)arg0 + 0x44));
    if (temp_a1 != NULL) {
        
        temp = *(s32 *)((s8 *)temp_a2 + 0x110);
        *temp_a1 += temp;
    }
    temp_a0 = (*(s32 **)((s8 *)arg0 + 0x4C));
    if (temp_a0 != NULL) {
        
        temp = *(s32 *)((s8 *)temp_a2 + 0x110);
        *temp_a0 += temp;
    }
}
