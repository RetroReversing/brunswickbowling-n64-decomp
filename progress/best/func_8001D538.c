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

extern int D_8008EBC0;
void *func_800205F8();
s32 func_80023B50();
s32 func_80029B08();
s32 func_800416D0();
s32 func_80041700();
s32 *func_80041730();
s32 func_8004176C();
s32 func_8005978C();
extern char D_80075068[];
extern char D_80075078[];
extern char D_80075084[];
extern char D_80075088[];
extern char D_80075098[];
extern char D_800750A4[];
extern char D_800750B4[];
extern char D_800750C4[];
extern char D_800750D4[];
extern char D_800750E4[];
extern char D_800750F4[];
extern char D_80075104[];
extern char D_80075114[];
extern char D_80075124[];
extern char D_8007513C[];
extern char D_80075144[];
extern char D_8007514C[];
extern char D_80075158[];
extern char D_8007516C[];
extern s32 D_80083A70;
extern char D_80083BA8[];
extern s32 D_8008D8E8;
extern char D_8008D8EC[];
extern char D_8008D9EC[];
extern char D_8008DA4C[];
extern char D_8008EB34[];
extern s32 D_800991A0;

void func_8001D538(s32 arg0) {
    s32 *var_a0;
    s32 *var_a0_2;
    s32 *var_a1;
    s32 *var_a1_2;
    s32 *var_a2_2;
    s32 var_a2;
    s32 temp_v0_2;
    s32 var_v1;
    void *temp_v0;

    D_8008D8E8 = 1;
    if (D_8008EBC0 >= 0) {
        temp_v0 = func_800205F8(D_80083BA8, 0);
        var_v1 = 0;
        if (M2C_FIELD(temp_v0, u8 *, 0) == 0) {
            var_v1 = M2C_FIELD(temp_v0, u8 *, 1) == 0;
        }
        if (var_v1 != 0) {
            func_8005978C(D_8008D9EC, D_80075068);
            var_a0 = D_8008D9EC + 0x20;
            var_a1 = D_80075078;
        } else {
            func_8005978C(D_8008D9EC, D_80075088);
            var_a0 = D_8008D9EC + 0x20;
            var_a1 = D_80075098;
        }
        func_8005978C(var_a0, var_a1);
        func_8005978C(D_8008D9EC + 0x40, D_80075084, func_80041730(D_8008EB34, -1));
        var_a2 = 3;
    } else {
        if (func_80041700(D_8008EB34) != 0) {
            func_8005978C(D_8008D9EC, D_800750A4);
            var_a0_2 = D_8008D9EC + 0x20;
            var_a1_2 = D_800750B4;
            goto block_14;
        }
        temp_v0_2 = func_800416D0(D_8008EB34);
        D_800991A0 = temp_v0_2;
        switch (temp_v0_2) {                        /* irregular */
        case 0:
            func_8005978C(D_8008D9EC, D_800750C4);
            func_8005978C(D_8008D9EC + 0x20, D_800750D4);
            func_8005978C(D_8008D9EC + 0x40, D_800750E4);
            func_8005978C(D_8008D9EC + 0x60, D_800750F4);
            var_a2 = 4;
            break;
        case 4:
            func_8005978C(D_8008D9EC, D_80075104);
            var_a0_2 = D_8008D9EC + 0x20;
            var_a1_2 = D_80075114;
block_14:
            func_8005978C(var_a0_2, var_a1_2);
            var_a2 = 2;
            break;
        default:
            func_8005978C(D_8008D9EC, D_800750C4);
            func_8005978C(D_8008D9EC + 0x20, D_800750D4);
            func_8005978C(D_8008D9EC + 0x40, D_80075124);
            if (func_8004176C(D_8008EB34) >= 2) {
                var_a2_2 = D_8007513C;
            } else {
                var_a2_2 = D_80075144;
            }
            func_8005978C(D_8008DA4C, D_8007514C, var_a2_2);
            func_8005978C(D_8008DA4C + 0x20, D_80075158);
            func_8005978C(D_8008DA4C + 0x40, D_8007516C);
            var_a2 = 6;
            break;
        }
    }
    func_80029B08(D_80083A70, D_8008D8EC, var_a2);
    func_80023B50(arg0);
}
