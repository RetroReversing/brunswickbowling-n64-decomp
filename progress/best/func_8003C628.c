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

extern int D_8008D92C;
extern int D_8008D93C;
extern int D_8008D94C;
extern int D_8008D91C;
s32 func_80022250();
s32 func_80023B50();
s32 func_80023DC0();
s32 func_80029B08();
s32 *func_80041730();
s32 func_8005978C();
extern char D_80078838[];
extern char D_80078844[];
extern char D_80078848[];
extern char D_8007884C[];
extern char D_8007885C[];
extern char D_80078870[];
extern char D_80078878[];
extern char D_8007887C[];
extern char D_8007888C[];
extern char D_8007889C[];
extern char D_800788B4[];
extern char D_800788C8[];
extern char D_800788D8[];
extern char D_800788E4[];
extern s32 D_80083A70;
extern char D_8008CEB0[];
extern char D_8008CF28[];
extern char D_8008D8EC[];
extern char D_8008D9EC[];
extern char D_8008E9E4[];
extern char D_8008EB34[];

void func_8003C628(void *arg0) {
    s32 *var_a0;
    s32 *var_v1;
    s32 var_a2;
    s32 temp_a3;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a0_2;
    s32 var_a1;
    s32 var_v1_2;

    temp_a3 = func_80023DC0();
    var_a1 = 0;
    var_v1 = D_8008D8EC;
    var_a0 = D_8008D9EC;
    do {
        M2C_FIELD(var_v1, s32 **, 0xC) = var_a0;
        M2C_FIELD(var_v1, s32 *, 0) = 5;
        M2C_FIELD(var_v1, s32 *, 4) = 1;
        M2C_FIELD(var_v1, s32 **, 8) = D_8008CEB0;
        var_v1 += 0x10;
        var_a1 += 1;
        var_a0 += 0x20;
    } while (var_a1 < 7);
    if (temp_a3 == 1) {
        if (M2C_FIELD(arg0, s32 *, 0x54) == 0) {
            if (M2C_FIELD(arg0, s32 *, 0x58) != 0) {
                goto block_6;
            }
            func_8005978C(D_8008D9EC, D_80078878, func_80041730(D_8008EB34, M2C_FIELD(arg0, s32 *, 0x50), D_8008CEB0, temp_a3));
            func_8005978C(D_8008D9EC + 0x20, D_8007887C);
            func_8005978C(D_8008D9EC + 0x40, D_8007888C);
            func_8005978C(D_8008D9EC + 0x60, D_80078848);
            func_8005978C(D_8008D9EC + 0x80, D_8007889C);
            func_8005978C(D_8008D9EC + 0xA0, D_800788B4);
            func_8005978C(D_8008D9EC + 0xC0, D_800788C8);
            var_a2 = 7;
            M2C_FIELD(D_8008D8EC, s32 **, 0x38) = D_8008CF28;
            M2C_FIELD(D_8008D8EC, s32 **, 0x48) = D_8008CF28;
            M2C_FIELD(D_8008D8EC, s32 **, 0x58) = D_8008CF28;
            M2C_FIELD(D_8008D8EC, s32 **, 0x68) = D_8008CF28;
            D_8008D92C = 7;
            D_8008D93C = 7;
            D_8008D94C = 7;
        } else {
block_6:
            func_8005978C(D_8008D9EC, D_80078838, D_8008CEB0, temp_a3);
            func_8005978C(D_8008D9EC + 0x20, D_80078844, func_80041730(D_8008EB34, M2C_FIELD(arg0, s32 *, 0x50)));
            func_8005978C(D_8008D9EC + 0x40, D_80078848);
            func_8005978C(D_8008D9EC + 0x60, D_8007884C);
            func_8005978C(D_8008D9EC + 0x80, D_8007885C);
            func_8005978C(D_8008D9EC + 0xA0, D_80078870, *((M2C_FIELD(arg0, s32 *, 0x50) * 4) + D_8008E9E4));
            var_a2 = 6;
            M2C_FIELD(D_8008D8EC, s32 **, 0x28) = D_8008CF28;
            M2C_FIELD(D_8008D8EC, s32 **, 0x38) = D_8008CF28;
            M2C_FIELD(D_8008D8EC, s32 **, 0x48) = D_8008CF28;
            M2C_FIELD(D_8008D8EC, s32 **, 0x58) = D_8008CF28;
            D_8008D91C = 7;
            D_8008D92C = 7;
            D_8008D93C = 7;
        }
    } else {
        func_8005978C(D_8008D9EC, D_800788D8, D_8008CEB0, temp_a3);
        func_8005978C(D_8008D9EC + 0x20, D_800788E4);
        func_8005978C(D_8008D9EC + 0x40, D_80078878, func_80041730(D_8008EB34, M2C_FIELD(arg0, s32 *, 0x50)));
        var_a2 = 3;
    }
    func_80029B08(D_80083A70, D_8008D8EC, var_a2);
    var_a0_2 = 0;
    var_v1_2 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x18) != 0) {
        var_v1_2 = (u32) M2C_FIELD(arg0, u32 *, 0x1C) > 0U;
    }
    if ((var_v1_2 == 0) && ((M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x50) * 4) + D_8008EB34), s32 *, 0x6C) != 2) || ((M2C_FIELD(arg0, s32 *, 0x5C) != 0) && (M2C_FIELD(arg0, s32 *, 0x58) == 0)))) {
        var_a0_2 = 1;
    }
    if (var_a0_2 != 0) {
        func_80022250(arg0, 1, 0x20B, 0);
    } else {
        temp_v0 = M2C_FIELD(arg0, s32 *, 0x54);
        if (temp_v0 == 0) {
            temp_v1 = M2C_FIELD(arg0, s32 *, 0x58);
            if (temp_v1 != 0) {
                if (M2C_FIELD(arg0, s32 *, 0x5C) == 0) {
                    M2C_FIELD(arg0, s32 *, 0x5C) = 1;
                } else {
                    M2C_FIELD(arg0, s32 *, 0x58) = (s32) (temp_v1 - 1);
                }
            }
        } else {
            M2C_FIELD(arg0, s32 *, 0x54) = (s32) (temp_v0 - 1);
        }
    }
    func_80023B50(arg0);
}
