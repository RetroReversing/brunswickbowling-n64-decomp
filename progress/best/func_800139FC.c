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

extern unsigned short D_8008BD20;
extern unsigned short D_8008BD22;
s32 func_80037310();
s32 func_8003732C();
s32 func_80039738();
extern s32 D_80082780;
extern char D_8008BD10[];
extern char D_8008BD50[];
extern char D_8008BE90[];
extern char D_8008CEB0[];
extern s32 D_8008D8E8;

void func_800139FC(void *arg0) {
    s32 *var_a0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_s2;
    u16 var_v0;
    u16 var_v1;

    temp_v0 = D_80082780 == (s32) arg0;
    var_s2 = temp_v0 * 2;
    if (M2C_FIELD(arg0, s32 *, 0x20) != 0) {
        var_s2 = 9;
    }
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x40);
    if (temp_v1 != -1) {
        temp_v0_2 = D_8008D8E8;
        D_8008D8E8 = temp_v1;
        M2C_FIELD(arg0, s32 *, 0x44) = temp_v0_2;
        func_8003732C(D_8008BD10, temp_v1, &D_8008D8E8);
        func_8003732C(D_8008BE90, M2C_FIELD(arg0, s32 *, 0x40));
        func_8003732C(D_8008BD50, M2C_FIELD(arg0, s32 *, 0x40));
    }
    if (temp_v0 != 0) {
        D_8008BD20 = (u16) M2C_FIELD(arg0, u16 *, 0x18);
        D_8008BD22 = (u16) M2C_FIELD(arg0, u16 *, 0x1A);
        func_80037310(D_8008BD10);
        var_a0 = D_8008BE90;
        var_v0 = M2C_FIELD(arg0, u16 *, 0x18) + 0xA;
        var_v1 = M2C_FIELD(arg0, u16 *, 0x1A) + 4;
    } else {
        var_v0 = M2C_FIELD(arg0, u16 *, 0x18);
        var_v1 = M2C_FIELD(arg0, u16 *, 0x1A);
        var_a0 = D_8008BD50;
    }
    M2C_FIELD(var_a0, u16 *, 0x10) = var_v0;
    M2C_FIELD(var_a0, u16 *, 0x12) = var_v1;
    func_80037310(var_a0);
    func_80039738(D_8008CEB0, var_s2, 0, (s16) (M2C_FIELD(arg0, u16 *, 0x18) + 0x1E), (s32) (s16) (M2C_FIELD(arg0, u16 *, 0x1A) + 1), M2C_FIELD(arg0, s32 *, 0x14));
    if (M2C_FIELD(arg0, s32 *, 0x40) != -1) {
        D_8008D8E8 = M2C_FIELD(arg0, s32 *, 0x44);
    }
}
