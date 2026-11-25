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

extern int D_8007D704;
extern int D_8007D70C;
s32 func_80011150();
extern char D_8007D700[];
extern u8 D_800890E4;
extern s32 D_80089100;
extern s32 D_8008E9E0;

s32 func_8002271C(void *arg0) {
    s32 var_v1;

    if (D_800890E4 != 0) {
        D_800890E4 -= 1;
    }
    if (D_80089100 != 0) {
        D_80089100 = 0;
        D_8007D70C = D_8008E9E0;
        goto block_8;
    }
    var_v1 = 0;
    if (D_8007D704 == 0) {
        var_v1 = (u32) (D_8008E9E0 - D_8007D70C) >= 0x7531U;
    }
    if (var_v1 != 0) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), void ***, 4) = (void **) M2C_FIELD(arg0, void ***, 4);
        *M2C_FIELD(arg0, void ***, 4) = M2C_FIELD(arg0, void **, 0);
        func_80011150(D_8007D700, arg0);
        return 0;
    }
block_8:
    return 1;
}
