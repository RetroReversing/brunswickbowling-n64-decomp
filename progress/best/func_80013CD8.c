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

extern unsigned short D_8008BEA0;
extern short D_8008BEA2;
s32 func_80037310();
s32 func_8003732C();
s32 func_80039738();
s32 func_8005978C();
extern char D_80073D70[];
extern s32 D_80082780;
extern char D_8008BE90[];
extern char D_8008CF28[];
extern s32 D_8008D8E8;

void func_80013CD8(void *arg0) {
    s32 sp18;
    s32 *sp98;
    s32 var_a1;
    s32 var_a1_2;
    s16 temp_s1;
    s32 temp_v0;
    s32 temp_v0_2;
    void **temp_v1;
    void *temp_v0_3;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x28);
    temp_s1 = M2C_FIELD(arg0, s16 *, 0x18);
    if (temp_v0 != -1) {
        temp_v0_2 = D_8008D8E8;
        D_8008D8E8 = temp_v0;
        M2C_FIELD(arg0, s32 *, 0x2C) = temp_v0_2;
        func_8003732C(D_8008BE90, temp_v0, &D_8008D8E8);
    }
    if (D_80082780 == arg0) {
        D_8008BEA0 = (u16) M2C_FIELD(arg0, s16 *, 0x18);
        D_8008BEA2 = (s16) (M2C_FIELD(arg0, u16 *, 0x1A) + 2);
        func_80037310(D_8008BE90);
    }
    func_8005978C(&sp18, D_80073D70, M2C_FIELD(arg0, s32 *, 0x14));
    var_a1 = 7;
    if (D_80082780 == arg0) {
        var_a1 = 2;
    }
    func_80039738(D_8008CF28, var_a1, 0, (s16) (temp_s1 + 0x10), (s32) (s16) M2C_FIELD(arg0, u16 *, 0x1A), &sp18);
    temp_v1 = M2C_FIELD(arg0, void ***, 0x34);
    temp_v0_3 = *temp_v1;
    M2C_FIELD(temp_v0_3, s32 (**)(void *, s32 **), 0x14)(temp_v1 + M2C_FIELD(temp_v0_3, s16 *, 0x10), &sp98);
    var_a1_2 = 5;
    if (D_80082780 == arg0) {
        var_a1_2 = 2;
    }
    func_80039738(D_8008CF28, var_a1_2, 2, (s16) ((u16) M2C_FIELD(arg0, s16 *, 0x18) + M2C_FIELD(arg0, u16 *, 0x3A)), (s32) (s16) M2C_FIELD(arg0, u16 *, 0x1A), sp98);
    if (M2C_FIELD(arg0, s32 *, 0x28) != -1) {
        D_8008D8E8 = M2C_FIELD(arg0, s32 *, 0x2C);
    }
}
