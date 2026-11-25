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

extern char D_800756B0[];
extern char D_80075A20[];
extern char D_800837A0[];
extern char D_800837F8[];

void func_8001F2F0(void) {
    char *__base_D_800837F8;
    char *__base_D_800837A0;
    void *temp_v0;
    void *temp_v0_2;
    s32 **temp;

    do { __base_D_800837A0 = D_800837A0;
 temp_v0 = __base_D_800837A0 + 8; } while (0);
    (*(s32 **)((s8 *)__base_D_800837A0 + 0x10)) = D_80075A20;
    (*(void **)((s8 *)temp_v0 + 4)) = temp_v0;
    (*(void **)((s8 *)__base_D_800837A0 + 8)) = temp_v0;
    (*(s32 **)((s8 *)__base_D_800837A0 + 0x10)) = D_800756B0;
    __base_D_800837F8 = D_800837F8;
    temp_v0_2 = __base_D_800837F8 + 8;
    temp = (s32 **)((s8 *)__base_D_800837F8 + 0x10);
    (*temp) = D_80075A20;
    (*(void **)((s8 *)temp_v0_2 + 4)) = temp_v0_2;
    (*(void **)((s8 *)__base_D_800837F8 + 8)) = temp_v0_2;
    (*(s32 **)((s8 *)__base_D_800837F8 + 0x10)) = D_800756B0;
}
