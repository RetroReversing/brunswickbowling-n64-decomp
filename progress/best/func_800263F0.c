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

extern int D_8008B3BC;
extern short D_8008C260;
extern short D_8008C262;
extern int D_8008AB10;
extern short D_8008C2E0;
extern short D_8008C2E2;
s32 func_80037310();
s32 func_80039738();
s32 func_80044FB0();
s32 func_8005978C();
s32 func_8005A970();
extern char D_800760C4[];
extern char D_800760D8[];
extern char D_80076108[];
extern char D_8007611C[];
extern char D_80076148[];
extern char D_80076160[];
extern char D_80076178[];
extern char D_8007617C[];
extern char D_80076180[];
extern char D_80076188[];
extern char D_80076190[];
extern char D_8007619C[];
extern char D_800761A4[];
extern char D_800761C8[];
extern s32 D_8007D704;
extern s32 *D_8007DA40;
extern char D_8007F618[];
extern s32 D_800898EC;
extern s32 D_800898F0;
extern s32 D_800898F4;
extern s32 D_80089944;
extern void *D_8008ABD4;
extern char D_8008B130[];
extern char D_8008B22C[];
extern char D_8008B268[];
extern char D_8008B3A4[];
extern char D_8008C250[];
extern char D_8008C2D0[];
extern char D_8008CEB0[];
extern char D_8008CEEC[];
extern char D_8008ED80[];

void func_800263F0(void) {
    s32 sp18;
    s32 *var_a1_3;
    s32 *var_a2;
    s32 *var_v0;
    s32 var_a1;
    s32 temp_s2;
    s32 var_a1_2;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s1;
    void *temp_v1;

    func_80044FB0(D_8008ED80, 0);
    if (D_8008B3BC != 0) {
        D_8008C260 = 0x100;
        temp_s0 = D_8008B3A4 + 0x24;
        D_8008C262 = 0x38;
        temp_s2 = M2C_FIELD(temp_s0, s32 *, 4);
        func_80037310(D_8008C250);
        func_8005978C(&sp18, D_800760C4, M2C_FIELD(((M2C_FIELD(temp_s0, s32 *, 4) * 0x1C) + D_8008B130), s32 **, 0xC));
        func_80039738(D_8008CEEC, 0, 1, 0x140, (s32 *)0x7D, &sp18);
        temp_s1 = (temp_s2 * 0x1C) + D_8008B130;
        func_80039738(D_8008CEEC, 0, 1, 0x140, (s32 *)0x8C, M2C_FIELD(temp_s1, s32 **, 4));
        if (M2C_FIELD(temp_s1, s32 **, 8) != NULL) {
            func_80039738(D_8008CEEC, 0, 1, 0x140, (s32 *)0x9B, M2C_FIELD(temp_s1, s32 **, 8));
        }
        func_8005978C(&sp18, D_800760D8);
        func_80039738(D_8008CEB0, 5, 1, 0x140, (s32 *)0xB1, &sp18);
        func_8005978C(&sp18, D_80076108, *((M2C_FIELD(temp_s1, u8 *, 0x15) * 4) + D_8008B22C));
        var_a1 = 5;
    } else if (D_8008AB10 != 0) {
        D_8008C2E0 = 0x100;
        D_8008C2E2 = 0x38;
        func_80037310(D_8008C2D0);
        func_8005978C(&sp18, D_800760C4, M2C_FIELD(*(s32 *)(void * *)(D_8008AB10 + 0xC4), s32 **, 0xC));
        if (M2C_FIELD(*(s32 *)(void * *)(D_8008AB10 + 0xC4), s32 **, 8) != NULL) {
            func_80039738(D_8008CEEC, 0, 1, 0x140, (s32 *)0x7D, &sp18);
            func_80039738(D_8008CEEC, 0, 1, 0x140, (s32 *)0x8C, M2C_FIELD(*(s32 *)(void * *)(D_8008AB10 + 0xC4), s32 **, 4));
            var_v0 = M2C_FIELD(*(s32 *)(void * *)(D_8008AB10 + 0xC4), s32 **, 8);
        } else {
            func_80039738(D_8008CEEC, 0, 1, 0x140, (s32 *)0x84, &sp18);
            var_v0 = M2C_FIELD(*(s32 *)(void * *)(D_8008AB10 + 0xC4), s32 **, 4);
        }
        func_80039738(D_8008CEEC, 0, 1, 0x140, var_v0);
        var_a2 = (s32 *)4;
        if (D_8007DA40 != (s32 *)1) {
            var_a2 = D_8007DA40;
        }
        func_8005978C(&sp18, D_8007611C, var_a2);
        func_80039738(D_8008CEB0, 5, 1, 0x140, (s32 *)0xB1, &sp18);
        func_8005978C(&sp18, D_80076108, *((M2C_FIELD(D_8008ABD4, u8 *, 0x15) * 4) + D_8008B22C));
        var_a1 = 5;
    } else {
        if (D_80089944 != 0) {
            var_a1_2 = D_800898F4;
        } else if (D_8007D704 != 0) {
            var_a1_2 = D_800898EC;
        } else {
            var_a1_2 = D_800898F0;
        }
        func_8005A970(&sp18, var_a1_2);
        func_80039738(D_8008CEEC, 0, 1, 0x140, (s32 *)0x46, &sp18);
        temp_s0_2 = D_8008B3A4 + 0x34;
        func_8005978C(&sp18, D_80076148, *((M2C_FIELD(temp_s0_2, s32 *, 4) * 4) + D_8008B22C));
        func_80039738(D_8008CEB0, 7, 1, 0x140, (s32 *)0x68, &sp18);
        func_8005978C(&sp18, D_80076160, *((M2C_FIELD(temp_s0_2, s32 *, 4) * 4) + D_8008B268));
        func_80039738(D_8008CEB0, 7, 1, 0x140, (s32 *)0x74, &sp18);
        temp_v1 = D_8007DA40 - 1;
        switch ((s32) temp_v1) {
        case 0:
            func_8005978C(&sp18, D_80076178, D_8007F618);
block_26:
            func_80039738(D_8008CEEC, 5, 1, 0x140);
            break;
        case 1:
            func_8005978C(&sp18, D_80076178, D_8007F618);
            func_80039738(D_8008CEEC, 5, 1, 0x140, (s32 *)0x84, &sp18);
            func_8005978C(&sp18, D_8007617C);
            func_80039738(D_8008CEB0, 5, 1, 0x140, (s32 *)0x94, &sp18);
            func_8005978C(&sp18, D_80076178, D_8007F618 + 0x5C);
            goto block_26;
        case 2:
            func_8005978C(&sp18, D_80076180, D_8007F618, D_8007F618 + 0x5C);
            func_80039738(D_8008CEEC, 5, 1, 0x140, (s32 *)0x84, &sp18);
            func_8005978C(&sp18, D_8007617C);
            func_80039738(D_8008CEB0, 5, 1, 0x140, (s32 *)0x94, &sp18);
            func_8005978C(&sp18, D_80076178, D_8007F618 + 0xB8);
            goto block_26;
        case 3:
            func_8005978C(&sp18, D_80076188, D_8007F618, D_8007F618 + 0x5C);
            func_80039738(D_8008CEEC, 5, 1, 0x140, (s32 *)0x84, &sp18);
            func_8005978C(&sp18, D_80076190, D_8007F618 + 0xB8, D_8007F618 + 0x114);
block_25:
            goto block_26;
        case 4:
            func_8005978C(&sp18, D_80076188, D_8007F618, D_8007F618 + 0x5C);
            func_80039738(D_8008CEEC, 5, 1, 0x140, (s32 *)0x84, &sp18);
            func_8005978C(&sp18, D_80076188, D_8007F618 + 0xB8, D_8007F618 + 0x114);
            func_80039738(D_8008CEEC, 5, 1, 0x140, (s32 *)0x92, &sp18);
            func_8005978C(&sp18, D_8007619C, D_8007F618 + 0x170);
block_24:
            goto block_25;
        case 5:
            func_8005978C(&sp18, D_80076188, D_8007F618, D_8007F618 + 0x5C);
            func_80039738(D_8008CEEC, 5, 1, 0x140, (s32 *)0x84, &sp18);
            func_8005978C(&sp18, D_80076188, D_8007F618 + 0xB8, D_8007F618 + 0x114);
            func_80039738(D_8008CEEC, 5, 1, 0x140, (s32 *)0x92, &sp18);
            func_8005978C(&sp18, D_80076190, D_8007F618 + 0x170, D_8007F618 + 0x1CC);
            goto block_24;
        }
        if (D_80089944 != 0) {
            var_a1_3 = D_800761A4;
        } else {
            var_a1_3 = D_800761C8;
        }
        func_8005978C(&sp18, var_a1_3);
        var_a1 = 7;
    }
    func_80039738(D_8008CEB0, var_a1, 1, 0x140);
}
