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

s32 *func_8004C9A8();
s32 func_8004E814();
s32 func_800580A0();
extern s32 D_8009C640;
extern s32 D_8009C778;
extern s32 D_8009C780;
extern s16 D_8009C788;
extern s32 D_8009C898;
extern char D_8009CE10[];
extern s32 func_80048724;

void func_80048490(void) {
    s32 *temp_v0;
    s32 *temp_v0_2;
    s32 *temp_v0_3;
    char *var_s0;
    s32 var_s1;

    D_8009C788 = 0;
    temp_v0 = func_8004C9A8(D_8009C898, 0x2E68, 8);
    var_s1 = 0;
    if (temp_v0 != NULL) {
        D_8009C778 = *temp_v0;
    }
    var_s0 = &D_8009C780;
    do {
        temp_v0_2 = func_8004C9A8(D_8009C898, 0x700, 8);
        var_s1 += 1;
        if (temp_v0_2 != NULL) {
            *(s32 *)var_s0 = *temp_v0_2;
        }
        var_s0 += 4;
    } while (var_s1 < 2);
    temp_v0_3 = func_8004C9A8(D_8009C898, 0xBB8, 8);
    if (temp_v0_3 != NULL) {
        D_8009C640 = *temp_v0_3;
    }
    func_800580A0(D_8009C640, -1, 0xBB8);
    func_8004E814(&func_80048724, D_8009CE10, 0x3FD3);
}
