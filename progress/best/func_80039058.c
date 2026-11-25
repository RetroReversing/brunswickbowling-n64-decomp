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

M2C_UNK func_80011CA4(s32, void *, M2C_UNK, u32);   /* extern */
M2C_UNK func_800375C0(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_80038FD0(s32);                         /* extern */
s32 func_8003FE98(M2C_UNK *, u8);                   /* extern */
extern M2C_UNK D_8007DA48;
extern s32 D_8007E4E0;
extern M2C_UNK D_8007F618;
extern M2C_UNK D_80081AD0;
extern s32 D_800827B8;
extern M2C_UNK D_80082E90;
extern M2C_UNK D_80089830;
extern M2C_UNK D_8008C864;
extern M2C_UNK D_8008E9B0;

s32 func_80039058(s32 arg0, u8 arg1, s32 arg2) {
    s32 temp_v0;
    s32 var_a0;
    s32 var_v1;
    void *temp_a1;

    if (arg2 == 0x20A) {
        var_v1 = 0;
        if (M2C_FIELD(&D_80089830, s32 *, 0x34) != 0) {
            var_v1 = M2C_FIELD(((M2C_FIELD(&D_80089830, u8 *, 0x30) * 4) + &D_8008E9B0), s32 *, 0xC) == 0;
        }
        if (var_v1 != 0) {
            M2C_FIELD(&D_80089830, u8 *, 0x30) = arg1;
        }
        var_a0 = 0;
        if (D_800827B8 == &D_80082E90) {
            var_a0 = M2C_FIELD(*((D_8007E4E0 * 4) + &D_80081AD0), u8 *, 0x18) == 1;
        }
        if ((var_a0 != 0) && (M2C_FIELD(((func_8003FE98(&D_8008E9B0, M2C_FIELD(*((D_8007E4E0 * 4) + &D_80081AD0), u8 *, 0x2C)) * 4) + &D_8008E9B0), s32 *, 0xC) == 0)) {
            temp_v0 = *((D_8007E4E0 * 4) + &D_80081AD0);
            temp_a1 = ((((s32)temp_v0 - (s32)&D_8007F618) / 92) * 0x1C4) + &D_8007DA48;
            M2C_FIELD(temp_a1, u8 *, 0x1B8) = arg1;
            func_80011CA4(*((D_8007E4E0 * 4) + &D_80081AD0), temp_a1, 1, MULTU_HI(((s32)temp_v0 - (s32)&D_8007F618), 0xB21642C9));
        }
        func_800375C0(&D_8008C864, 1);
        func_80038FD0(arg0);
    }
    return 0;
}
