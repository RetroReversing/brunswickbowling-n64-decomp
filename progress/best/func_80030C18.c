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

extern int D_800776E4;
extern int D_800776E8;
extern signed char D_800776EC;
extern signed char D_800776ED;
extern signed char D_800776EE;
extern int D_800776F0;
extern int D_800776F4;
extern int D_800776F8;
extern int D_800776FC;
extern signed char D_80077700;
extern signed char D_80077701;
extern int D_80077704;
extern int D_80077708;
extern signed char D_8007770C;
extern signed char D_8007770D;
extern int D_80077710;
extern int D_80077714;
extern int D_80077718;
extern int D_8007771C;
extern signed char D_80077720;
extern signed char D_80077721;
extern signed char D_80077722;
extern int D_8008AB10;
s32 func_8005978C();
s32 func_8005A970();
extern char D_800776D0[];
extern char D_80077724[];
extern char D_80077730[];
extern s32 D_80089944;
extern char D_8008B448[];
extern char D_8008B454[];

void func_80030C18(void *arg0, s32 **arg1, void *arg2, void *arg3) {
    s32 *var_v0;
    s32 temp_a1;
    s32 temp_v0;
    s32 temp_v1_2;
    u8 temp_a3;
    void *temp_v1;
    void *temp_v1_3;

    M2C_FIELD(arg3, s8 *, 0) = 0;
    M2C_FIELD(arg2, s8 *, 0) = 0;
    temp_v1 = arg0 + 0x24;
    if (M2C_FIELD(arg0, s32 *, 0x18) != 0) {
        *arg1 = *(s32 *)((M2C_FIELD(temp_v1, s32 *, 4) * 4) + M2C_FIELD(temp_v1, s32 *, 0xC));
        temp_v0 = M2C_FIELD(arg0, s32 *, 0x44);
        switch (temp_v0) {
        case 1:
        case 2:
        case 3:
            func_8005978C(arg2, D_800776D0, M2C_FIELD(arg0, s32 *, 0x44));
block_10:
            temp_a3 = M2C_FIELD(arg0, u8 *, 0x4A);
            func_8005978C(arg3, D_80077730, (temp_a3 - M2C_FIELD(arg0, u8 *, 0x49)) + 1, temp_a3);
            return;
        case 4:
            M2C_FIELD(arg2, s8 *, 0) = M2C_UNALIGNED32(D_800776E4);
            M2C_FIELD(arg2, s32 *, 4) = M2C_UNALIGNED32(D_800776E8);
            M2C_FIELD(arg2, s8 *, 8) = (s8) D_800776EC;
            M2C_FIELD(arg2, s8 *, 9) = (s8) D_800776ED;
            M2C_FIELD(arg2, s8 *, 0xA) = (s8) D_800776EE;
            goto block_10;
        case 5:
            M2C_FIELD(arg2, s8 *, 0) = M2C_UNALIGNED32(D_800776F0);
            M2C_FIELD(arg2, s32 *, 4) = M2C_UNALIGNED32(D_800776F4);
            M2C_FIELD(arg2, s8 *, 8) = M2C_UNALIGNED32(D_800776F8);
            M2C_FIELD(arg2, s32 *, 0xC) = M2C_UNALIGNED32(D_800776FC);
            M2C_FIELD(arg2, s8 *, 0x10) = (s8) D_80077700;
            M2C_FIELD(arg2, s8 *, 0x11) = (s8) D_80077701;
            goto block_10;
        case 6:
        case 7:
        case 8:
        case 9:
            M2C_FIELD(arg2, s8 *, 0) = M2C_UNALIGNED32(D_80077704);
            M2C_FIELD(arg2, s32 *, 4) = M2C_UNALIGNED32(D_80077708);
            M2C_FIELD(arg2, s8 *, 8) = (s8) D_8007770C;
            M2C_FIELD(arg2, s8 *, 9) = (s8) D_8007770D;
            temp_v1_2 = M2C_FIELD(arg0, s32 *, 0x44);
            if (temp_v1_2 == 9) {
                M2C_FIELD(arg3, s8 *, 0) = M2C_UNALIGNED32(D_80077710);
                M2C_FIELD(arg3, s32 *, 4) = M2C_UNALIGNED32(D_80077714);
                M2C_FIELD(arg3, s32 *, 8) = M2C_UNALIGNED32(D_80077718);
                M2C_FIELD(arg3, s32 *, 0xC) = M2C_UNALIGNED32(D_8007771C);
                M2C_FIELD(arg3, s8 *, 0x10) = (s8) D_80077720;
                M2C_FIELD(arg3, s8 *, 0x11) = (s8) D_80077721;
                M2C_FIELD(arg3, s8 *, 0x12) = (s8) D_80077722;
                return;
            }
            func_8005978C(arg3, D_80077724, temp_v1_2 - 5);
            return;
        default:
            goto block_10;
        }
    } else {
        if (D_80089944 == 0) {
            if (D_8008AB10 != 0) {
                *arg1 = *(s32 *)*(s32 *)(s32 ** *)(D_8008AB10 + 0xC4);
            } else {
                var_v0 = D_8008B454;
                goto block_18;
            }
        } else {
            var_v0 = D_8008B448;
block_18:
            *arg1 = var_v0;
        }
        temp_v1_3 = arg0 + 0x34;
        temp_a1 = *(s32 *)((M2C_FIELD(temp_v1_3, s32 *, 4) * 4) + M2C_FIELD(temp_v1_3, s32 *, 0xC));
        func_8005A970(arg3, temp_a1, temp_a1);
    }
}
