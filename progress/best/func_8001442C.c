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

extern char D_80073DA8[];
extern char D_80073DF0[];
extern char D_80075A20[];
extern char D_80081B20[];
extern char D_80081CE8[];

void func_8001442C(void) {
    char *var_a0;
    s32 var_a1;
    
    void *temp_v0;
    void *temp_v0_2;
    void *var_v1;
    void *var_v1_2;
    s32 *temp;

    var_a0 = D_80081B20;
    var_v1 = D_80081B20 + 0x10;
    var_a1 = 5;
    do {
        temp = var_a0 + 8;
        temp_v0 = temp;
        M2C_FIELD(var_v1, s32 **, 0) = D_80075A20;
        M2C_FIELD(var_v1, void **, -4) = temp_v0;
        M2C_FIELD(var_v1, void **, -8) = temp_v0;
        M2C_FIELD(var_v1, s32 **, 0) = D_80073DF0;
        var_v1 += 0x4C;
        /*__repair_update_run*/do { var_a1 -= 1;
        var_a0 += 0x4C; } while (0);
    } while (var_a1 != -1);
    var_a1 = 0xB;
    var_a0 = D_80081CE8;
    var_v1_2 = D_80081CE8 + 0x10;
    do {
        temp_v0_2 = var_a0 + 8;
        M2C_FIELD(var_v1_2, s32 **, 0) = D_80075A20;
        M2C_FIELD(var_v1_2, void **, -4) = temp_v0_2;
        M2C_FIELD(var_v1_2, void **, -8) = temp_v0_2;
        M2C_FIELD(var_v1_2, s32 **, 0) = D_80073DA8;
        var_v1_2 += 0x40;
        var_a1 -= 1;
        var_a0 += 0x40;
    } while (var_a1 != -1);
}
