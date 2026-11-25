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

M2C_UNK func_80016604(M2C_UNK *);                   /* extern */
M2C_UNK func_8001B71C(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_800204F8(void *);                      /* extern */
s32 func_800315E0(M2C_UNK *, M2C_UNK);              /* extern */
extern M2C_UNK D_800827A4;
extern M2C_UNK D_80082F78;
extern M2C_UNK D_8008B3A4;
extern M2C_UNK D_8008E7F0;

s32 func_80020420(void *arg0) {
    s32 var_a1;

    func_80016604(&D_800827A4);
    if ((M2C_FIELD(&D_8008B3A4, s32 *, 0x18) != 0) && (M2C_FIELD(arg0, s32 *, 0x12B8) == 0) && (M2C_FIELD(arg0, s32 *, 0x548C) == 0)) {
        var_a1 = 0;
        if (M2C_FIELD(&D_8008B3A4, s32 *, 0x44) == 9) {
            var_a1 = func_800315E0(&D_8008B3A4, 0) != 0;
        }
        if ((var_a1 != 0) || (M2C_FIELD(arg0, s32 *, 0x5490) != 0) || (M2C_FIELD(arg0, s32 *, 0x5488) != 0)) {
            goto block_8;
        }
        M2C_FIELD(arg0, s32 *, 0x548C) = 1;
        M2C_FIELD(arg0, s32 *, 0x5488) = 1;
        M2C_FIELD(&D_8008E7F0, s32 *, 0x50) = 2;
        M2C_FIELD(&D_8008E7F0, s32 *, 0x54) = 0;
        M2C_FIELD(&D_8008E7F0, s32 *, 0x58) = 0;
        func_8001B71C(&D_80082F78, &D_8008E7F0);
        return 0;
    }
block_8:
    func_800204F8(arg0);
    return 0;
}
