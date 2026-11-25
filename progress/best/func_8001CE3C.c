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

M2C_UNK func_800162E0(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_800235F0(void *);                      /* extern */
M2C_UNK func_80023634(void *, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK *, s32); /* extern */
M2C_UNK func_8003732C(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_8003E500(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK D_8001CB70;
extern M2C_UNK D_80074D70;
extern M2C_UNK D_80082780;
extern s32 D_80083200;
extern M2C_UNK D_80083430;
extern M2C_UNK D_80083AF0;
extern s32 D_8008CEB8;
extern s32 D_8008CEF4;
extern s32 D_8008CF30;
extern M2C_UNK *D_8008ED80;
extern M2C_UNK D_8008F0BC;
extern M2C_UNK D_8008F0FC;

void func_8001CE3C(void *arg0) {
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a1;
    u8 *temp_v0;
    u8 temp_v1;
    void *var_v1;

    func_8003732C(&D_8008F0BC, 1);
    func_8003732C(&D_8008F0FC, 1);
    func_800235F0(arg0);
    func_80023634(arg0, &D_80074D70, 0, 0, &D_80083430, 0);
    D_80083200 = 1;
    D_8008ED80 = &D_8001CB70;
    func_800162E0(&D_80082780, 0, 0);
    func_8003E500(&D_80083AF0, -1);
    M2C_FIELD(arg0, s32 *, 0x54) = (s32) M2C_FIELD(&D_80083AF0, s32 *, 0x74);
    var_a0 = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = (s32) M2C_FIELD(&D_80083AF0, s32 *, 0x7C);
    if (M2C_FIELD(&D_80083AF0, s32 *, 0x7C) > 0) {
        do {
            temp_v0 = M2C_FIELD(arg0, s32 *, 0x54) + var_a0;
            temp_v1 = *temp_v0;
            if ((temp_v1 == 0xA) || (temp_v1 == 0xD)) {
                *temp_v0 = 0;
            }
            var_a0 += 1;
        } while (var_a0 < M2C_FIELD(arg0, s32 *, 0x50));
    }
    var_a0_2 = 0;
    M2C_FIELD(arg0, s32 *, 0x64) = (s32) D_8008CF30;
    var_a1 = 0xA;
    M2C_FIELD(arg0, s32 *, 0x68) = (s32) D_8008CEB8;
    var_v1 = arg0;
    M2C_FIELD(arg0, s32 *, 0x6C) = (s32) D_8008CEF4;
    do {
        if (M2C_FIELD(var_v1, s32 *, 0x64) == 0) {
            M2C_FIELD(var_v1, s32 *, 0x64) = var_a1;
        }
        var_a1 += 5;
        var_a0_2 += 1;
        var_v1 += 4;
    } while (var_a0_2 < 3);
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    M2C_FIELD(arg0, s32 *, 0x5C) = 0xCE;
    M2C_FIELD(arg0, s32 *, 0x60) = 0;
}
