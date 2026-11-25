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

s32 func_80065F40();
s32 func_800660D8();
extern f64 D_80079B50;
extern char D_8009C650[];
extern char D_8009C6D0[];
extern f32 D_8009C710;
extern f32 D_8009C714;
extern f32 D_8009C718;
extern f32 D_8009C71C;
extern s32 D_8009CC48;
extern s32 D_8009CD84;
extern char D_8009CF30[];

void func_800481D8(void) {
    void *temp_s1;

    func_80065F40((D_8009CC48 << 6) + D_8009CF30, (D_8009CD84 << 6) + (D_8009CF30 - 0x80), D_8009C650);
    func_800660D8(D_8009C6D0, D_8009C650);
    temp_s1 = D_8009CF30 - 0x120;
    D_8009C710 = (f32) ((f64) M2C_FIELD(temp_s1, s16 *, 0x80) * D_80079B50);
    D_8009C714 = (f32) ((f64) M2C_FIELD(temp_s1, s16 *, 0x82) * D_80079B50);
    D_8009C718 = (f32) ((f64) M2C_FIELD(temp_s1, s16 *, 0x88) * D_80079B50);
    D_8009C71C = (f32) ((f64) M2C_FIELD(temp_s1, s16 *, 0x8A) * D_80079B50);
}
