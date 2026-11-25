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

M2C_UNK func_80037034(M2C_UNK *, M2C_UNK, s32);     /* extern */
extern s32 D_8007E4E0;
extern M2C_UNK D_80081AD0;
extern M2C_UNK D_8008C0D0;

void func_8002E428(s32 arg1) {
    s16 var_v0;

    var_v0 = arg1 + 0x2E;
    if (M2C_FIELD((&D_80081AD0)[D_8007E4E0], s32 *, 0x24) == 0) {
        var_v0 = arg1 + 0x31;
    }
    M2C_FIELD(&D_8008C0D0, s16 *, 0x10) = var_v0;
    M2C_FIELD(&D_8008C0D0, s16 *, 0x12) = 0xBA;
    func_80037034(&D_8008C0D0, 0x17, M2C_FIELD(*((D_8007E4E0 * 4) + &D_80081AD0), s32 *, 0x24) == 0);
}
