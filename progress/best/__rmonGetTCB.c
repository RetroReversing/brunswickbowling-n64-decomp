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

void *func_8006C950();                              /* extern */

void *__rmonGetTCB(s32 arg0) {
    void *var_a0;
    void *var_v0;

    do { do { do { var_a0 = func_8006C950(); } while (0); } while (0); } while (0);
    if (arg0 <= 0) {
        return NULL;
    }
    var_v0 = NULL;
    if ((*(s32 *)((s8 *)var_a0 + 4)) != -1) {
for (;;)
{
        s32 temp;
        temp = *(s32 *)((s8 *)var_a0 + 0x14);
        var_v0 = var_a0;
        if (temp != arg0) {
            do { var_a0 = (*(void **)((s8 *)var_a0 + 0xC)); } while (0);
            var_v0 = NULL;
            if ((*(s32 *)((s8 *)var_a0 + 4)) != -1) {
                continue;
            }
        }
break;
}
    }
    return var_v0;
}
