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

s32 func_80010E04();
s32 func_8001113C();
s32 func_8001268C();
extern f64 D_80074458;
extern f64 D_80074460;
extern f64 D_80074468;
extern char D_8007D6F8[];
extern s32 D_8007E4E0;
extern char D_80081AD0[];
extern char D_80081AE8[];
extern s16 D_80082D52;
extern char D_8008B7A8[];
extern s32 D_8008F09C;

s16 func_80017B98(void) {
    s32 sp20;
    void *temp_a1;
    void *temp_s0;

    func_8001113C(D_8007D6F8, *((M2C_FIELD(*((D_8007E4E0 * 4) + D_80081AD0), u8 *, 0x2D) * 4) + D_80081AE8));
    func_80010E04(D_8007D6F8, D_80082D52, func_8001268C(*((D_8007E4E0 * 4) + D_80081AD0)) & 0xFF, D_8008B7A8, D_8008B7A8 + 8, D_8008B7A8 + 0x10, D_8008B7A8 + 0x18, &sp20);
    temp_s0 = D_8008B7A8 - 0x338;
    M2C_FIELD(temp_s0, s32 *, 0x360) = 1;
    M2C_FIELD(temp_s0, s32 *, 0x364) = (s32) D_8008F09C;
    M2C_FIELD(*((D_8007E4E0 * 4) + D_80081AD0), u8 *, 0x20) = (u8) M2C_FIELD(&sp20, u8 *, 3);
    M2C_FIELD(temp_s0, u16 *, 0x358) = (u16) M2C_FIELD(&sp20, u16 *, 2);
    temp_a1 = *((D_8007E4E0 * 4) + D_80081AD0);
    M2C_FIELD(temp_a1, s8 *, 0x1F) = (s8) ((((M2C_FIELD(temp_a1, u8 *, 0x19) % 3) & 0xFF) * 2) + (M2C_FIELD(&sp20, u8 *, 3) & 1));
    M2C_FIELD(temp_s0, s16 *, 0x35A) = (s16) M2C_FIELD(*((D_8007E4E0 * 4) + D_80081AD0), u8 *, 0x1F);
    return (s16) (s32) ((M2C_FIELD(temp_s0, f64 *, 0x338) * D_80074458 * D_80074460) + D_80074468);
}
