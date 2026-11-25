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

extern short D_8008F218;
extern unsigned short D_8008F214;
extern short D_8008C522;
extern unsigned short D_8008C520;
extern unsigned short D_8008C560;
extern short D_8008C562;
extern unsigned short D_8008C568;
extern short D_8008C322;
extern short D_8008C320;
extern short D_8008C4A2;
extern short D_8008C4A0;
extern short D_8008C4E2;
extern short D_8008C4E0;
extern short D_8008C420;
extern short D_8008C422;
extern short D_8008C360;
extern unsigned short D_8008C362;
extern short D_8008C462;
extern short D_8008C460;
extern short D_8008C3A2;
extern short D_8008C3A0;
extern short D_8008F204;
extern short D_8008F200;
extern short D_8008B76E;
extern unsigned short D_8008C3A8;
extern unsigned short D_8008C3A6;
extern short D_8008C3E2;
extern short D_8008C3E0;
f64 func_8001266C();
s32 func_80037310();
s32 func_80039738();
s32 func_80045050();
s32 func_80051240();
extern f64 D_800798C0;
extern f64 D_800798C8;
extern f64 D_800798D0;
extern f64 D_800798D8;
extern f64 D_800798E0;
extern f64 D_800798E8;
extern f64 D_800798F0;
extern u16 D_8007B214;
extern char D_8007BB04[];
extern u16 D_8007BB06;
extern s32 D_8007C3F4;
extern char D_8007D940[];
extern s32 D_8007E4E0;
extern char D_80081AD0[];
extern char D_8008B470[];
extern char D_8008C0D0[];
extern char D_8008C310[];
extern char D_8008C350[];
extern char D_8008C390[];
extern char D_8008C3D0[];
extern char D_8008C410[];
extern char D_8008C450[];
extern char D_8008C490[];
extern char D_8008C4D0[];
extern char D_8008C510[];
extern char D_8008C550[];
extern char D_8008CF28[];
extern s32 D_8008ED40;
extern s32 D_8008ED84;
extern u16 D_8008F1D4;
extern u16 D_8008F1E8;
extern char D_8008F1FC[];
extern char D_8008F210[];

void func_80044990(void *arg0) {
    s16 temp_v1;
    s16 var_v0;
    s32 temp_s1;
    s32 temp_v1_2;
    s32 var_s3;
    s32 var_s3_2;
    s32 var_v1;
    char *var_s0;
    char *var_s1;
    u16 temp_a1;
    u16 temp_v0;
    u16 temp_v0_2;
    u16 var_s2;
    void *temp_s0;
    void *temp_v0_3;

    if (D_8008ED40 != 0) {
        temp_v0 = M2C_FIELD(arg0, u16 *, 0x318);
        D_8008F218 = 0x9F;
        D_8008F214 = temp_v0;
        if ((temp_v0 << 0x10) > 0) {
            D_8008F214 = 0U;
            D_8008F218 = (s16) (M2C_FIELD(arg0, u16 *, 0x318) + 0x9F);
        }
        D_8008ED84 = 2;
        func_80051240(D_8008F210, 2);
        D_8008C522 = 0;
        D_8008C520 = (u16) M2C_FIELD(arg0, u16 *, 0x318);
        func_80037310(D_8008C510);
        D_8008C560 = (u16) M2C_FIELD(arg0, u16 *, 0x318);
        D_8008C562 = (s16) (0xF0 - D_8008C568);
        func_80037310(D_8008C550);
        func_80045050(arg0, (s16) M2C_FIELD(arg0, u16 *, 0x318) + 0x9A, 0, 0, 2, 0xF0, 0xA8, 0, 0xFF, 0, 0);
        func_80045050(arg0, (s16) M2C_FIELD(arg0, u16 *, 0x318) + 0x9C, 0, 0, 2, 0xF0, 0x60, 0x20, 0x80, 0, 0);
        D_8008C322 = 0xE;
        D_8008C320 = (s16) (M2C_FIELD(arg0, u16 *, 0x318) + 0x2D);
        func_80037310(D_8008C310);
        D_8008C4A2 = 0xE;
        D_8008C4A0 = (s16) (M2C_FIELD(arg0, u16 *, 0x318) + 0x1D);
        func_80037310(D_8008C490);
        D_8008C4E2 = 0xE;
        D_8008C4E0 = (s16) (M2C_FIELD(arg0, u16 *, 0x318) + 0x73);
        func_80037310(D_8008C4D0);
        temp_v1 = (s16) M2C_FIELD(arg0, u16 *, 0x318);
        var_v0 = temp_v1 + 0x2F;
        if (M2C_FIELD(*((D_8007E4E0 * 4) + D_80081AD0), s32 *, 0x24) == 0) {
            var_v0 = temp_v1 + 0x43;
        }
        D_8008C420 = var_v0;
        D_8008C422 = 0xBB;
        func_80037310(D_8008C410);
        func_80037310(D_8008C0D0);
        var_s3 = 0;
        func_80039738(D_8008CF28, 0, 1, (s16) (M2C_FIELD(arg0, u16 *, 0x318) + 0x50), 0xD9, *((M2C_FIELD(*((D_8007E4E0 * 4) + D_80081AD0), u8 *, 0x1F) << 5) + D_8007D940));
        var_s1 = &D_8008F1E8;
        var_s0 = &D_8008F1D4;
        var_s2 = D_8007B214;
loop_6:
        temp_v0_2 = var_s2 * 2;
        if (var_s3 < 0xA) {
            var_s2 = temp_v0_2;
            if (temp_v0_2 & 0x8000) {
                temp_a1 = *(u16 *)var_s1;
                D_8008C360 = (s16) (M2C_FIELD(arg0, u16 *, 0x318) + *(u16 *)var_s0);
                D_8008C362 = temp_a1;
                func_80037310(D_8008C350, temp_a1);
            }
            var_s1 += 2;
            var_s0 += 2;
            var_s3 += 1;
            goto loop_6;
        }
        D_8008C462 = 0x8F;
        D_8008C460 = (s16) ((s16) M2C_FIELD(arg0, u16 *, 0x318) + 0x30);
        func_80037310(D_8008C450);
        D_8008C462 = 0x8C;
        D_8008C460 = (s16) (M2C_FIELD(arg0, u16 *, 0x318) + 0x3A);
        func_80037310(D_8008C450);
        D_8008C462 = 0x89;
        D_8008C460 = (s16) (M2C_FIELD(arg0, u16 *, 0x318) + 0x44);
        func_80037310(D_8008C450);
        D_8008C462 = 0x86;
        D_8008C460 = (s16) (M2C_FIELD(arg0, u16 *, 0x318) + 0x4E);
        func_80037310(D_8008C450);
        D_8008C462 = 0x89;
        D_8008C460 = (s16) (M2C_FIELD(arg0, u16 *, 0x318) + 0x58);
        func_80037310(D_8008C450);
        D_8008C462 = 0x8C;
        D_8008C460 = (s16) (M2C_FIELD(arg0, u16 *, 0x318) + 0x62);
        func_80037310(D_8008C450);
        D_8008C462 = 0x8F;
        D_8008C460 = (s16) (M2C_FIELD(arg0, u16 *, 0x318) + 0x6C);
        func_80037310(D_8008C450);
        D_8008C3A2 = 0xAF;
        D_8008C3A0 = (s16) ((s16) M2C_FIELD(arg0, u16 *, 0x318) + 0x30);
        func_80037310(D_8008C390);
        D_8008C3A2 = 0xAF;
        D_8008C3A0 = (s16) (M2C_FIELD(arg0, u16 *, 0x318) + 0x3A);
        func_80037310(D_8008C390);
        D_8008C3A2 = 0xAF;
        D_8008C3A0 = (s16) (M2C_FIELD(arg0, u16 *, 0x318) + 0x44);
        func_80037310(D_8008C390);
        D_8008C3A2 = 0xAF;
        D_8008C3A0 = (s16) (M2C_FIELD(arg0, u16 *, 0x318) + 0x4E);
        func_80037310(D_8008C390);
        D_8008C3A2 = 0xAF;
        D_8008C3A0 = (s16) (M2C_FIELD(arg0, u16 *, 0x318) + 0x58);
        func_80037310(D_8008C390);
        D_8008C3A2 = 0xAF;
        D_8008C3A0 = (s16) (M2C_FIELD(arg0, u16 *, 0x318) + 0x62);
        func_80037310(D_8008C390);
        D_8008C3A2 = 0xAF;
        D_8008C3A0 = (s16) (M2C_FIELD(arg0, u16 *, 0x318) + 0x6C);
        func_80037310(D_8008C390);
        D_8008F204 = 0x45;
        D_8008F200 = (s16) (M2C_FIELD(arg0, u16 *, 0x318) + 0x2D);
        func_80051240(D_8008F1FC, 1);
        var_s3_2 = 1;
        if ((s16) M2C_FIELD(arg0, u16 *, 0x318) >= 0) {
            var_v1 = 1 << 0x10;
loop_12:
            temp_v1_2 = var_v1 >> 0x10;
            if (temp_v1_2 < D_8008B76E) {
                temp_s1 = *((temp_v1_2 * 2) + D_8007BB04) * 0x48;
                temp_s0 = temp_s1 + D_8007C3F4;
                if (!(func_8001266C(*((D_8007E4E0 * 4) + D_80081AD0)) < M2C_FIELD(temp_s0, f64 *, 0x10))) {
                    temp_v0_3 = temp_s1 + D_8007C3F4;
                    var_s3_2 += 1;
                    D_8008C3A2 = (s16) (s32) ((D_800798D8 - (M2C_FIELD(temp_v0_3, f64 *, 0x10) * D_800798C8)) - (f64) D_8008C3A8);
                    D_8008C3A0 = (s16) (s32) (((f64) (s16) M2C_FIELD(arg0, u16 *, 0x318) + ((M2C_FIELD(temp_v0_3, f64 *, 0) * D_800798C0) + D_800798D0)) - (f64) ((u16) D_8008C3A6 >> 1));
                    func_80037310(D_8008C390);
                    var_v1 = var_s3_2 << 0x10;
                    goto loop_12;
                }
            }
        }
        D_8008C3E2 = 0xAD;
        D_8008C3E0 = (s16) (s32) (((f64) (s16) M2C_FIELD(arg0, u16 *, 0x318) + ((*(s32 *)((D_8007BB06 * 0x48) + D_8007C3F4) * D_800798E0) + D_800798E8)) - D_800798F0);
        func_80037310(D_8008C3D0);
    }
}
