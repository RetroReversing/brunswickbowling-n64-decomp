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
void *func_800205E0();
s32 func_80020704();
s32 func_80023B50();
s32 func_80029B08();
s32 func_800416D0();
s32 func_80041700();
s32 *func_80041730();
s32 func_8004176C();
s32 func_8005978C();
extern char D_800749B8[];
extern char D_800749CC[];
extern char D_800749D8[];
extern char D_800749DC[];
extern char D_800749F0[];
extern char D_80074A00[];
extern char D_80074A10[];
extern char D_80074A1C[];
extern char D_80074A2C[];
extern char D_80074A3C[];
extern char D_80074A4C[];
extern char D_80074A5C[];
extern char D_80074A68[];
extern char D_80074A78[];
extern char D_80074A88[];
extern char D_80074A98[];
extern char D_80074AA8[];
extern char D_80074AB8[];
extern char D_80074AD0[];
extern char D_80074AD8[];
extern char D_80074AE0[];
extern char D_80074AEC[];
extern char D_80074B00[];
extern s32 D_80082FC0;
extern s32 D_80083A70;
extern char D_80083BA8[];
extern char D_8008D8EC[];
extern char D_8008D9EC[];
extern char D_8008DA4C[];
extern char D_8008EB34[];

void func_8001C39C(s32 arg0) {
    s32 *var_a0;
    s32 *var_a0_2;
    s32 *var_a1;
    s32 *var_a1_2;
    s32 *var_a2_2;
    s32 var_a2;
    s32 temp_v0_2;
    s32 var_v1;
    void *temp_v0;

    if (D_8008EBC0 >= 0) {
        temp_v0 = func_800205E0(D_80083BA8, 0);
        var_v1 = 0;
        if (M2C_FIELD(temp_v0, u8 *, 0) == 0) {
            var_v1 = M2C_FIELD(temp_v0, u8 *, 1) == 0;
        }
        if (var_v1 != 0) {
            func_8005978C(D_8008D9EC, D_800749B8);
            var_a0 = D_8008D9EC + 0x20;
            var_a1 = D_800749CC;
            goto block_8;
        }
        if (func_80020704(D_80083BA8, D_800749B8) != 0) {
            func_8005978C(D_8008D9EC, D_800749DC);
            func_8005978C(D_8008D9EC + 0x20, D_800749F0);
            func_8005978C(D_8008D9EC + 0x40, D_800749D8, func_80041730(D_8008EB34, -1));
            func_8005978C(D_8008D9EC + 0x60, D_80074A00);
            func_8005978C(D_8008D9EC + 0x80, D_80074A10);
            var_a2 = 5;
        } else {
            func_8005978C(D_8008D9EC, D_80074A1C);
            var_a0 = D_8008D9EC + 0x20;
            var_a1 = D_80074A2C;
block_8:
            func_8005978C(var_a0, var_a1);
            func_8005978C(D_8008D9EC + 0x40, D_800749D8, func_80041730(D_8008EB34, -1));
            var_a2 = 3;
        }
    } else {
        if (func_80041700(D_8008EB34) != 0) {
            func_8005978C(D_8008D9EC, D_80074A3C);
            var_a0_2 = D_8008D9EC + 0x20;
            var_a1_2 = D_80074A4C;
            goto block_16;
        }
        temp_v0_2 = func_800416D0(D_8008EB34);
        D_80082FC0 = temp_v0_2;
        switch (temp_v0_2) {                        /* irregular */
        case 0:
            func_8005978C(D_8008D9EC, D_80074A5C);
            func_8005978C(D_8008D9EC + 0x20, D_80074A68);
            func_8005978C(D_8008D9EC + 0x40, D_80074A78);
            func_8005978C(D_8008D9EC + 0x60, D_80074A88);
            var_a2 = 4;
            break;
        case 4:
            func_8005978C(D_8008D9EC, D_80074A98);
            var_a0_2 = D_8008D9EC + 0x20;
            var_a1_2 = D_80074AA8;
block_16:
            func_8005978C(var_a0_2, var_a1_2);
            var_a2 = 2;
            break;
        default:
            func_8005978C(D_8008D9EC, D_80074A5C);
            func_8005978C(D_8008D9EC + 0x20, D_80074A68);
            func_8005978C(D_8008D9EC + 0x40, D_80074AB8);
            if (func_8004176C(D_8008EB34) >= 2) {
                var_a2_2 = D_80074AD0;
            } else {
                var_a2_2 = D_80074AD8;
            }
            func_8005978C(D_8008DA4C, D_80074AE0, var_a2_2);
            func_8005978C(D_8008DA4C + 0x20, D_80074AEC);
            func_8005978C(D_8008DA4C + 0x40, D_80074B00);
            var_a2 = 6;
            break;
        }
    }
    func_80029B08(D_80083A70, D_8008D8EC, var_a2);
    func_80023B50(arg0);
}
