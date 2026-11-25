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

extern int D_8008ED84;
s32 func_80024EE0();
s32 func_80024FDC();
s32 func_80025084();
s32 func_80039738();
s32 func_80045050();
s32 func_8005978C();
s32 func_8005AAD0();
extern char D_80076030[];
extern s32 D_80076088;
extern char D_80076178[];
extern s32 D_80076384;
extern char D_80076404[];
extern char D_8007640C[];
extern char D_80076414[];
extern char D_80076420[];
extern char D_80076430[];
extern char D_8007643C[];
extern char D_80076444[];
extern s32 D_8007644C;
extern s32 D_80076460;
extern s32 D_80076474;
extern s32 D_80076484;
extern char D_80076494[];
extern s32 D_800764A0;
extern s32 D_800764B4;
extern char D_800764BC[];
extern s32 D_800764C4;
extern s32 D_800764D0;
extern s32 D_800764DC;
extern s32 D_800764E8;
extern s32 D_8007E4E0;
extern char D_80081AD0[];
extern s32 D_80082760;
extern s32 D_8008B3E8;
extern char D_8008CEB0[];
extern char D_8008CF28[];
extern s32 D_8008D8E8;
extern char D_8008ED80[];

#define sp30 (*(s32 *)(sp + 0x30))
#define sp130 (*(s32 *)(sp + 0x130))
#define sp138 (*(s32 *)(sp + 0x138))
#define sp13C (*(s32 *)(sp + 0x13C))
#define sp140 (*(s32 * *)(sp + 0x140))
#define sp144 (*(s32 * *)(sp + 0x144))
#define sp148 (*(void * *)(sp + 0x148))
#define sp14C (*(s32 *)(sp + 0x14C))
#define sp150 (*(void * *)(sp + 0x150))
#define sp154 (*(s32 *)(sp + 0x154))
#define sp158 (*(s32 *)(sp + 0x158))
#define sp15C (*(s32 *)(sp + 0x15C))
#define sp160 (*(s32 *)(sp + 0x160))
void func_80028BB8(void) {
    u8 sp[400];
    s32 *var_a2;
    s16 temp_a3;
    s16 var_a3;
    s32 *temp_v1;
    char *var_s3;
    s32 temp_s2;
    s32 temp_v0;
    s32 var_s4;
    s32 var_v1;
    u16 temp_v0_6;
    u16 temp_v0_7;
    u16 temp_v1_3;
    u16 temp_v1_4;
    u16 temp_v1_5;
    void **temp_a0;
    void **var_s2;
    void *temp_a0_2;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v1_2;
    void *temp_v1_6;
    void *temp_v1_7;
    void *var_v0;

    sp15C = D_8008D8E8;
    D_8008D8E8 = 1;
    sp158 = D_8008ED84;
    D_8008ED84 = 1;
    func_80045050(D_8008ED80, 0x64, 0x23, 0, 0x1B8, 0xAA, 0, 0, 0, 2, 0);
    temp_v1 = *((D_8007E4E0 * 4) + D_80081AD0);
    temp_s2 = M2C_FIELD(temp_v1, s8 *, 0x2F) + 1;
    func_80039738(D_8008CEB0, 1, 1, 0x140, 0x29, temp_v1);
    if (M2C_FIELD(*((D_8007E4E0 * 4) + D_80081AD0), s32 *, 0x24) != 0) {
        var_a2 = D_80076404;
    } else {
        var_a2 = D_8007640C;
    }
    func_8005978C(&sp30, D_80076414, var_a2);
    if (D_80082760 != 0) {
        func_80025084(&sp130, temp_s2 % 100000);
        func_8005978C(&sp30 + func_8005AAD0(&sp30), D_80076420, &sp130);
    }
    func_80039738(D_8008CF28, 1, 1, 0x140, 0x37, &sp30);
    var_a3 = 0x78;
    sp138 = 0x172;
    sp13C = 0x1E0;
    if (D_80082760 == 0) {
        var_a3 = 0xA5;
        sp138 = 0x1B3;
    }
    sp140 = D_80076430;
    sp144 = D_8007643C;
    temp_a0 = (D_8007E4E0 * 4) + D_80081AD0;
    temp_v1_2 = M2C_FIELD(*temp_a0, void **, 0x50);
    var_v0 = NULL;
    if (temp_v1_2 != NULL) {
        var_v0 = temp_v1_2;
    }
    sp150 = var_v0;
    temp_v0 = M2C_FIELD(*temp_a0, s32 *, 0x4C);
    var_v1 = 0;
    if (temp_v0 != 0) {
        var_v1 = temp_v0;
    }
    var_s4 = 0;
    var_s2 = &sp148;
    var_s3 = &sp138;
    sp160 = 0;
    sp154 = var_v1;
    sp148 = sp150;
    sp14C = sp154;
loop_12:
    if (D_80082760 >= var_s4) {
        func_80039738(D_8008CF28, 1, 1, M2C_FIELD(var_s3, s16 *, 2), 0x4B, M2C_FIELD((sp + sp160), s32 **, 0x140));
        func_80024EE0(M2C_FIELD(*var_s2, s32 *, 0), &sp30);
        if (var_s4 == 0) {
            func_80039738(D_8008CF28, 1, 0, var_a3, 0x55, &D_80076384);
        }
        func_80039738(D_8008CF28, 6, 1, M2C_FIELD(var_s3, s16 *, 2), 0x55, &sp30);
        temp_a0_2 = *var_s2;
        temp_v1_3 = M2C_FIELD(temp_a0_2, u16 *, 0x26);
        switch (temp_v1_3) {                        /* switch 1; irregular */
        case 0:                                     /* switch 1 */
            sp30 = D_80076088;
            break;
        case 1:                                     /* switch 1 */
            func_80025084(&sp130, M2C_FIELD(temp_a0_2, u8 *, 0x28));
            func_8005978C(&sp30, D_80076178, &sp130);
            break;
        default:                                    /* switch 1 */
            func_80025084(&sp130, M2C_FIELD(*var_s2, u8 *, 0x28));
            func_8005978C(&sp30, D_80076444, &sp130, M2C_FIELD(*var_s2, u16 *, 0x26));
            break;
        }
        if (var_s4 == 0) {
            func_80039738(D_8008CF28, 1, 0, var_a3, 0x5F0000 >> 0x10, &D_8007644C);
        }
        func_80039738(D_8008CF28, 6, 1, M2C_FIELD(var_s3, s16 *, 2), 0x5F0000 >> 0x10, &sp30);
        func_8005978C(&sp30, D_80076030, (s32 *) M2C_FIELD(*var_s2, u16 *, 0xA));
        if (var_s4 == 0) {
            func_80039738(D_8008CF28, 1, 0, var_a3, 0x690000 >> 0x10, &D_80076460);
        }
        func_80039738(D_8008CF28, 6, 1, M2C_FIELD(var_s3, s16 *, 2), 0x690000 >> 0x10, &sp30);
        func_8005978C(&sp30, D_80076030, (s32 *) M2C_FIELD(*var_s2, u16 *, 0xC));
        if (var_s4 == 0) {
            func_80039738(D_8008CF28, 1, 0, var_a3, 0x730000 >> 0x10, &D_80076474);
        }
        func_80039738(D_8008CF28, 6, 1, M2C_FIELD(var_s3, s16 *, 2), 0x730000 >> 0x10, &sp30);
        func_8005978C(&sp30, D_80076030, M2C_FIELD(*var_s2, u16 *, 0xE) + (D_8008B3E8 >= 6));
        if (var_s4 == 0) {
            func_80039738(D_8008CF28, 1, 0, var_a3, 0x7D0000 >> 0x10, &D_80076484);
        }
        func_80039738(D_8008CF28, 6, 1, M2C_FIELD(var_s3, s16 *, 2), 0x7D0000 >> 0x10, &sp30);
        temp_v0_2 = *var_s2;
        func_8005978C(&sp30, D_80076494, (s32 *) M2C_FIELD(temp_v0_2, u16 *, 0x10), M2C_FIELD(temp_v0_2, u16 *, 0x12), (s32) M2C_FIELD(temp_v0_2, u16 *, 0x14));
        if (var_s4 == 0) {
            func_80039738(D_8008CF28, 1, 0, var_a3, 0x870000 >> 0x10, &D_800764A0);
        }
        func_80039738(D_8008CF28, 6, 1, M2C_FIELD(var_s3, s16 *, 2), 0x870000 >> 0x10, &sp30);
        temp_v0_3 = *var_s2;
        func_80024FDC(&sp30, M2C_FIELD(temp_v0_3, s32 *, 4), M2C_FIELD(temp_v0_3, u16 *, 8));
        if (var_s4 == 0) {
            func_80039738(D_8008CF28, 1, 0, var_a3, 0x910000 >> 0x10, &D_800764B4);
        }
        func_80039738(D_8008CF28, 6, 1, M2C_FIELD(var_s3, s16 *, 2), 0x910000 >> 0x10, &sp30);
        temp_a1 = *var_s2;
        temp_v1_4 = M2C_FIELD(temp_a1, u16 *, 0x18);
        switch (temp_v1_4) {                        /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            sp30 = D_80076088;
            break;
        case 1:                                     /* switch 2 */
            func_8005978C(&sp30, D_80076030, (s32 *) M2C_FIELD(temp_a1, u16 *, 0x16));
            break;
        default:                                    /* switch 2 */
            temp_v0_4 = *var_s2;
            func_8005978C(&sp30, D_800764BC, (s32 *) M2C_FIELD(temp_v0_4, u16 *, 0x16), M2C_FIELD(temp_v0_4, u16 *, 0x18));
            break;
        }
        if (var_s4 == 0) {
            func_80039738(D_8008CF28, 1, 0, var_a3, 0x9B0000 >> 0x10, &D_800764C4);
        }
        func_80039738(D_8008CF28, 6, 1, M2C_FIELD(var_s3, s16 *, 2), 0x9B0000 >> 0x10, &sp30);
        temp_a1_2 = *var_s2;
        temp_v1_5 = M2C_FIELD(temp_a1_2, u16 *, 0x1C);
        switch (temp_v1_5) {                        /* switch 3; irregular */
        case 0:                                     /* switch 3 */
            sp30 = D_80076088;
            break;
        case 1:                                     /* switch 3 */
            func_8005978C(&sp30, D_80076030, (s32 *) M2C_FIELD(temp_a1_2, u16 *, 0x1A));
            break;
        default:                                    /* switch 3 */
            temp_v0_5 = *var_s2;
            func_8005978C(&sp30, D_800764BC, (s32 *) M2C_FIELD(temp_v0_5, u16 *, 0x1A), M2C_FIELD(temp_v0_5, u16 *, 0x1C));
            break;
        }
        if (var_s4 == 0) {
            func_80039738(D_8008CF28, 1, 0, var_a3, 0xA50000 >> 0x10, &D_800764D0);
        }
        func_80039738(D_8008CF28, 6, 1, M2C_FIELD(var_s3, s16 *, 2), 0xA50000 >> 0x10, &sp30);
        temp_v1_6 = *var_s2;
        temp_v0_6 = M2C_FIELD(temp_v1_6, u16 *, 0x1E);
        func_80024FDC(&sp30, temp_v0_6 * 0x64, temp_v0_6 + M2C_FIELD(temp_v1_6, u16 *, 0x20));
        if (var_s4 == 0) {
            func_80039738(D_8008CF28, 1, 0, var_a3, 0xAF0000 >> 0x10, &D_800764DC);
        }
        func_80039738(D_8008CF28, 6, 1, M2C_FIELD(var_s3, s16 *, 2), 0xAF0000 >> 0x10, &sp30);
        temp_v1_7 = *var_s2;
        temp_v0_7 = M2C_FIELD(temp_v1_7, u16 *, 0x22);
        func_80024FDC(&sp30, temp_v0_7 * 0x64, temp_v0_7 + M2C_FIELD(temp_v1_7, u16 *, 0x24));
        if (var_s4 == 0) {
            func_80039738(D_8008CF28, 1, 0, var_a3, 0xB90000 >> 0x10, &D_800764E8);
        }
        var_s2 += 4;
        temp_a3 = M2C_FIELD(var_s3, s16 *, 2);
        var_s3 += 4;
        var_s4 += 1;
        sp160 += 4;
        func_80039738(D_8008CF28, 6, 1, temp_a3, 0xB90000 >> 0x10, &sp30);
        goto loop_12;
    }
    D_8008ED84 = sp158;
    D_8008D8E8 = sp15C;
}
