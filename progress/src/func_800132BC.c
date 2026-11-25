/* machine draft (m2c) for sn-n64-281 -G0 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mfp64, tried by autopilot */
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

M2C_UNK func_8002E700(M2C_UNK *);                   /* extern */
extern s32 D_8007DA40;
extern s32 D_8007E4E0;
extern M2C_UNK D_8008AD1C;
extern M2C_UNK D_8008AD48;
extern M2C_UNK D_8008AE7C;

s32 func_800132BC(void) {
    s32 var_s1;
    s32 var_s1_2;

    var_s1 = 0;
    D_8007DA40 = 0;
    D_8007E4E0 = 0;
    do {
        func_8002E700(((M2C_UNK *)((u8 *)&D_8008AE7C + var_s1 * 44)));
        var_s1 += 1;
    } while (var_s1 < 7);
    var_s1_2 = 0;
    do {
        func_8002E700(((M2C_UNK *)((u8 *)&D_8008AD48 + var_s1_2 * 44)));
        var_s1_2 += 1;
    } while (var_s1_2 < 7);
    func_8002E700(&D_8008AD1C);
    return 1;
}
