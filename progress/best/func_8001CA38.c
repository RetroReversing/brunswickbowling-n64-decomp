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

extern int D_800890CC;
s32 func_800132BC();
s32 func_80021DD0();
s32 func_80021EBC();
s32 func_800239EC();
extern char D_80074CE8[];
extern char D_80074CF0[];
extern s32 D_8007E4E0;
extern char D_80081AD0[];
extern char D_80089080[];
extern char D_80089890[];
extern s32 D_8008B3CC;
extern s32 func_8001C8F0;

s32 func_8001CA38(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_v1;

    if (arg2 == 0x20B) {
        var_v1 = 0;
        if ((M2C_FIELD(*((D_8007E4E0 * 4) + D_80081AD0), s8 *, 0x2F) != 0) || (D_8008B3CC != 0)) {
            var_v1 = 1;
        }
        if (var_v1 != 0) {
            D_800890CC = 0;
            func_80021DD0(D_80089080, D_80089890);
            func_80021EBC(D_80089080, 0x20A, D_80074CE8, &func_8001C8F0);
            func_80021EBC(D_80089080, 0x20B, D_80074CF0, NULL);
            return 0;
        }
        func_800132BC(0, D_80089890);
        goto block_7;
    }
block_7:
    return func_800239EC(arg0, arg1 & 0xFF, arg2, arg3);
}
