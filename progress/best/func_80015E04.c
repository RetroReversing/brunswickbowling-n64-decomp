/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O1, tried by autopilot */
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

extern s32 D_8007E4E0;
extern s32 D_80081AD0;
extern s32 D_8008B3CC;

void func_80015E04(void *arg0) {
    s32 var_a1;
    void *temp_v1;
    s32 *__base_D_80081AD0;

    __base_D_80081AD0 = &D_80081AD0;

    var_a1 = (*(s32 *)((s8 *)arg0 + 4)) + 1;
    if (var_a1 >= 9) {
        temp_v1 = (__base_D_80081AD0)[D_8007E4E0];
        var_a1 = 0;
        (*(u8 *)((s8 *)temp_v1 + 0x2F)) = (u8) ((*(u8 *)((s8 *)temp_v1 + 0x2F)) + 1);
    }
    D_8008B3CC = var_a1;
    (*(s32 *)((s8 *)arg0 + 4)) = var_a1;
}
