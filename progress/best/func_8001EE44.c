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

s32 func_80011700();
s32 func_80011CA4();
s32 func_80020A4C();
s32 func_80024EE0();
s32 func_80024FDC();
s32 func_80029B08();
s32 func_8005978C();
extern char D_800755CC[];
extern char D_800755D0[];
extern char D_800755E0[];
extern char D_800755EC[];
extern char D_800755F8[];
extern char D_80075604[];
extern char D_80075614[];
extern char D_8007561C[];
extern char D_80075620[];
extern char D_80075630[];
extern char D_80075640[];
extern char D_80075654[];
extern s32 D_80083A70;
extern char D_80083BA8[];
extern char D_8008D8EC[];
extern char D_8008D9EC[];
extern char D_8008DA0C[];
extern char D_8008DA8C[];
extern char D_8008DAAC[];

#define sp10 (*(s32 *)(sp + 0x10))
#define sp24 (*(s32 *)(sp + 0x24))
#define sp1D8 (*(s32 *)(sp + 0x1D8))
#define sp1FC (*(s32 *)(sp + 0x1FC))
#define sp228 (*(s32 * *)(sp + 0x228))
#define sp238 (*(s32 *)(sp + 0x238))
#define sp268 (*(s32 *)(sp + 0x268))
void func_8001EE44(void *arg0) {
    u8 sp[664];
    s32 *var_a2;
    u16 temp_a2;
    u16 temp_a2_2;

    func_80011700(&sp10);
    sp228 = &sp238;
    func_80020A4C(D_80083BA8, M2C_FIELD(arg0, s32 *, 0x50), &sp10, &sp1D8);
    func_80011CA4(&sp1D8, &sp10, 0);
    func_8005978C(D_8008D9EC, D_800755CC, &sp24);
    func_80024EE0(sp238, &sp268);
    if (sp1FC != 0) {
        var_a2 = D_800755D0;
    } else {
        var_a2 = D_800755E0;
    }
    func_8005978C(D_8008DA0C, D_800755CC, var_a2);
    func_8005978C(D_8008DA0C + 0x20, D_800755EC, &sp268);
    func_80024FDC(&sp268, M2C_FIELD(&sp238, s32 *, 4), M2C_FIELD(&sp238, u16 *, 8));
    func_8005978C(D_8008DA0C + 0x40, D_800755F8, &sp268);
    func_8005978C(D_8008DA0C + 0x60, D_80075604, (s32 *) M2C_FIELD(&sp238, u16 *, 8));
    if ((u16) M2C_FIELD(&sp238, u16 *, 0x18) >= 3U) {
        func_8005978C(&sp268, D_80075614, (s32 *) M2C_FIELD(&sp238, u16 *, 0x18));
    } else {
        func_8005978C(&sp268, D_8007561C);
    }
    func_8005978C(D_8008DA8C, D_80075620, (s32 *) M2C_FIELD(&sp238, u16 *, 0x16), &sp268);
    if ((u16) M2C_FIELD(&sp238, u16 *, 0x1C) >= 2U) {
        func_8005978C(&sp268, D_80075614, (s32 *) M2C_FIELD(&sp238, u16 *, 0x1C));
    } else {
        func_8005978C(&sp268, D_8007561C);
    }
    func_8005978C(D_8008DAAC, D_80075630, (s32 *) M2C_FIELD(&sp238, u16 *, 0x1A), &sp268);
    temp_a2 = M2C_FIELD(&sp238, u16 *, 0x1E);
    func_80024FDC(&sp268, temp_a2 * 0x64, temp_a2 + M2C_FIELD(&sp238, u16 *, 0x20));
    func_8005978C(D_8008DAAC + 0x20, D_80075640, &sp268);
    temp_a2_2 = M2C_FIELD(&sp238, u16 *, 0x22);
    func_80024FDC(&sp268, temp_a2_2 * 0x64, temp_a2_2 + M2C_FIELD(&sp238, u16 *, 0x24));
    func_8005978C(D_8008DAAC + 0x40, D_80075654, &sp268);
    func_80029B08(D_80083A70, D_8008D8EC, 9);
}
