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
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O1, tried by autopilot */

extern char D_80075A20[];
extern char D_80077178[];
extern char D_8008B110[];

void func_8002FD30(void) {
    char *__base_D_8008B110;
    void *temp_v0;
    s8 *temp;
    s32 **temp2;

    do { __base_D_8008B110 = D_8008B110; } while (0);
    temp = (s8 *)(__base_D_8008B110);
    temp2 = (s32 **)(temp + (0x10));
    (*temp2) = D_80075A20;
    do { temp_v0 = __base_D_8008B110 + 8; } while (0);
    (*(void **)((s8 *)(temp_v0) + (4))) = temp_v0;
    (*(void **)((s8 *)(__base_D_8008B110) + (8))) = temp_v0;
    (*(s32 **)((s8 *)(__base_D_8008B110) + (0x10))) = D_80077178;
    (*(s32 *)((s8 *)(__base_D_8008B110) + (0x1C))) = 0;
}
