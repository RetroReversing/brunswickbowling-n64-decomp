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

M2C_UNK func_8005B354(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_8005BC44(s32, s32);                    /* extern */
M2C_UNK func_8005BE0C(s32);                         /* extern */
M2C_UNK func_8005BFC0(s32);                         /* extern */
M2C_UNK func_8005D618(s32);                         /* extern */
M2C_UNK func_8005F590(s32);                         /* extern */
M2C_UNK func_8005F740(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_8005FAC0(s32, s32);                    /* extern */
s32 func_8005FB0C(s32);                             /* extern */
M2C_UNK func_8005FB3C();                            /* extern */
M2C_UNK alSynAddPlayer(M2C_UNK *, s32 *);            /* extern */
M2C_UNK func_800649C0(M2C_UNK *, s32, s16 *);       /* extern */
extern s32 D_80000300;
extern s32 D_800A5A40;
extern s32 *D_800A5A44;
extern M2C_UNK *D_800A5A48;
extern s32 D_800A5A54;
extern s32 D_800A5A58;
extern s32 D_800A5A5C;
extern s32 D_800A5A60;
extern s32 D_800A5A64;
extern s32 D_800A5A68;
extern s32 D_800A5A70;
extern s32 D_800A5A74;
extern s32 D_800A5A78;
extern s32 D_800A5A7C;
extern s32 D_800A5A84;
extern s32 D_800A5A88;
extern s32 D_800A5A8C;
extern s32 D_800A5A90;
extern s32 D_800A5AB0;
extern s32 D_800A5B30;
extern M2C_UNK D_800A5D10;
extern M2C_UNK func_8005C13C;

void func_8005B0BC(void *arg0) {
    s16 sp10;
    s16 sp12;
    s8 sp14;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_v0;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_v0;

    D_800A5B30 = M2C_FIELD(arg0, s32 *, 0x40);
    D_800A5AB0 = M2C_FIELD(arg0, s32 *, 0);
    D_800A5A54 = M2C_FIELD(arg0, s32 *, 4) + 4;
    var_v0 = 0x3C;
    if (D_80000300 == 0) {
        var_v0 = 0x32;
    }
    D_800A5A64 = var_v0;
    D_800A5A68 = 0xF4240 / (s32) D_800A5A64;
    func_8005FAC0(M2C_FIELD(arg0, s32 *, 0x10), M2C_FIELD(arg0, s32 *, 0x14));
    func_8005F590(M2C_FIELD(arg0, s32 *, 8));
    D_800A5A58 = func_8005FB0C((D_800A5A54 - 4) * 0x1C);
    temp_v0 = func_8005FB0C(D_800A5A54 * 0x13C);
    D_800A5A5C = temp_v0;
    D_800A5A60 = temp_v0 + 0x4F0;
    func_8005BFC0(M2C_FIELD(arg0, s32 *, 0x24));
    temp_a0 = M2C_FIELD(arg0, s32 *, 0x18);
    D_800A5A78 = 0;
    D_800A5A7C = 0;
    if (temp_a0 != 0) {
        temp_a1 = M2C_FIELD(arg0, s32 *, 0x1C);
        if (temp_a1 != 0) {
            func_8005BC44(temp_a0, temp_a1);
        }
    }
    temp_a0_2 = M2C_FIELD(arg0, s32 *, 0x20);
    D_800A5A8C = 0;
    D_800A5A88 = 0;
    if (temp_a0_2 != 0) {
        func_8005BE0C(temp_a0_2);
    }
    D_800A5A90 = 0;
    D_800A5A84 = 2;
    func_8005F740(arg0, D_800A5A64, 2);
    func_8005B354(3, 0x7FFF);
    D_800A5A70 = 1;
    D_800A5A74 = 0x12345678;
    D_800A5A40 = 0;
    D_800A5A48 = &func_8005C13C;
    D_800A5A44 = &D_800A5A40;
    var_s1 = 0;
    alSynAddPlayer(&D_800A5D10, &D_800A5A40);
    if (D_800A5A54 > 0) {
        var_s2 = -0x70;
        var_s0 = 0;
        do {
            M2C_FIELD((var_s0 + D_800A5A5C), s8 *, 0xC9) = 0;
            func_8005D618(D_800A5A5C + var_s0);
            sp14 = 0;
            sp12 = 0;
            sp10 = (s16) M2C_FIELD(arg0, s32 *, 0xC);
            if (var_s1 >= 4) {
                func_800649C0(&D_800A5D10, D_800A5A58 + var_s2, &sp10);
            }
            var_s2 += 0x1C;
            var_s1 += 1;
            var_s0 += 0x13C;
        } while (var_s1 < D_800A5A54);
    }
    func_8005FB3C();
}
