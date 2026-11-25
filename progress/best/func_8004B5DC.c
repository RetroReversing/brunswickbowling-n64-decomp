/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O1, tried by autopilot */
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

f64 func_8005A340(f64);                             /* extern */
f64 func_8005A420(f64);                             /* extern */
extern char D_80079B10[];
extern f32 D_80079B7C;
extern f32 D_80079B80;
extern f32 D_80079B84;
extern f32 D_80079B88;
extern f32 D_80079B8C;
extern f32 D_80079B90;
extern f32 D_80079B94;

#define sp10 (*(f32 *)(sp + 0x10))
#define sp24 (*(f32 *)(sp + 0x24))
#define sp38 (*(f32 *)(sp + 0x38))
#define sp50 (*(f32 *)(sp + 0x50))
#define sp54 (*(f32 *)(sp + 0x54))
#define sp58 (*(f32 *)(sp + 0x58))
#define sp5C (*(s32 *)(sp + 0x5C))
#define sp60 (*(f32 *)(sp + 0x60))
#define sp64 (*(f32 *)(sp + 0x64))
#define sp68 (*(f32 *)(sp + 0x68))
#define sp6C (*(s32 *)(sp + 0x6C))
#define sp70 (*(f32 *)(sp + 0x70))
#define sp74 (*(f32 *)(sp + 0x74))
#define sp78 (*(f32 *)(sp + 0x78))
#define sp7C (*(s32 *)(sp + 0x7C))
#define sp80 (*(f32 *)(sp + 0x80))
#define sp84 (*(f32 *)(sp + 0x84))
#define sp88 (*(f32 *)(sp + 0x88))
#define sp8C (*(f32 *)(sp + 0x8C))
#define sp90 (*(f32 *)(sp + 0x90))
#define sp94 (*(f32 *)(sp + 0x94))
#define sp98 (*(f32 *)(sp + 0x98))
#define sp9C (*(s32 *)(sp + 0x9C))
#define spA0 (*(f32 *)(sp + 0xA0))
#define spA4 (*(f32 *)(sp + 0xA4))
#define spA8 (*(f32 *)(sp + 0xA8))
#define spAC (*(s32 *)(sp + 0xAC))
#define spB0 (*(f32 *)(sp + 0xB0))
#define spB4 (*(f32 *)(sp + 0xB4))
#define spB8 (*(f32 *)(sp + 0xB8))
#define spBC (*(s32 *)(sp + 0xBC))
#define spC0 (*(f32 *)(sp + 0xC0))
#define spC4 (*(f32 *)(sp + 0xC4))
#define spC8 (*(f32 *)(sp + 0xC8))
#define spCC (*(f32 *)(sp + 0xCC))
#define spD0 (*(f32 *)(sp + 0xD0))
#define spD4 (*(f32 *)(sp + 0xD4))
#define spD8 (*(f32 *)(sp + 0xD8))
#define spDC (*(s32 *)(sp + 0xDC))
#define spE0 (*(f32 *)(sp + 0xE0))
#define spE4 (*(f32 *)(sp + 0xE4))
#define spE8 (*(f32 *)(sp + 0xE8))
#define spEC (*(f32 *)(sp + 0xEC))
#define spF0 (*(f32 *)(sp + 0xF0))
#define spF4 (*(f32 *)(sp + 0xF4))
#define spF8 (*(f32 *)(sp + 0xF8))
#define sp100 (*(f32 *)(sp + 0x100))
#define sp104 (*(f32 *)(sp + 0x104))
#define sp108 (*(f32 *)(sp + 0x108))
#define sp110 (*(f32 *)(sp + 0x110))
#define sp114 (*(f32 *)(sp + 0x114))
#define sp118 (*(f32 *)(sp + 0x118))
#define sp120 (*(f32 *)(sp + 0x120))
#define sp124 (*(s32 *)(sp + 0x124))
#define sp128 (*(f32 *)(sp + 0x128))
#define sp12C (*(s32 *)(sp + 0x12C))
#define sp130 (*(f32 *)(sp + 0x130))
#define sp134 (*(f32 *)(sp + 0x134))
#define sp138 (*(f32 *)(sp + 0x138))
#define sp140 (*(f32 *)(sp + 0x140))
#define sp144 (*(f32 *)(sp + 0x144))
#define sp148 (*(f32 *)(sp + 0x148))
#define sp150 (*(f32 *)(sp + 0x150))
#define sp154 (*(f32 *)(sp + 0x154))
#define sp158 (*(f32 *)(sp + 0x158))
#define sp15C (*(s32 *)(sp + 0x15C))
#define sp160 (*(f32 *)(sp + 0x160))
#define sp164 (*(f32 *)(sp + 0x164))
#define sp168 (*(f32 *)(sp + 0x168))
#define sp16C (*(s32 *)(sp + 0x16C))
#define sp170 (*(f32 *)(sp + 0x170))
#define sp174 (*(f32 *)(sp + 0x174))
#define sp178 (*(s32 *)(sp + 0x178))
#define sp17C (*(s32 *)(sp + 0x17C))
#define sp180 (*(f32 *)(sp + 0x180))
#define sp184 (*(f32 *)(sp + 0x184))
#define sp188 (*(f32 *)(sp + 0x188))
#define sp190 (*(f32 *)(sp + 0x190))
#define sp194 (*(f32 *)(sp + 0x194))
#define sp198 (*(f32 *)(sp + 0x198))
#define sp19C (*(f32 *)(sp + 0x19C))
#define sp1A0 (*(f32 *)(sp + 0x1A0))
#define sp1A4 (*(f32 *)(sp + 0x1A4))
#define sp1A8 (*(f32 *)(sp + 0x1A8))
#define sp1AC (*(f32 *)(sp + 0x1AC))
#define sp1B0 (*(f32 *)(sp + 0x1B0))
#define sp1B4 (*(f32 *)(sp + 0x1B4))
#define sp1B8 (*(f32 *)(sp + 0x1B8))
#define sp1BC (*(f32 *)(sp + 0x1BC))
#define sp1C0 (*(f32 *)(sp + 0x1C0))
#define sp1C4 (*(f32 *)(sp + 0x1C4))
#define sp1C8 (*(f32 *)(sp + 0x1C8))
#define sp1CC (*(f32 *)(sp + 0x1CC))
#define sp1D0 (*(f32 *)(sp + 0x1D0))
#define sp1D4 (*(f32 *)(sp + 0x1D4))
#define sp1D8 (*(f32 *)(sp + 0x1D8))
#define sp1DC (*(f32 *)(sp + 0x1DC))
#define sp1E0 (*(f32 *)(sp + 0x1E0))
#define sp1E4 (*(f32 *)(sp + 0x1E4))
#define sp1E8 (*(f32 *)(sp + 0x1E8))
#define sp1EC (*(f32 *)(sp + 0x1EC))
#define sp1F0 (*(f32 *)(sp + 0x1F0))
#define sp1F4 (*(f32 *)(sp + 0x1F4))
#define sp1F8 (*(f32 *)(sp + 0x1F8))
#define sp1FC (*(f32 *)(sp + 0x1FC))
#define sp200 (*(f32 *)(sp + 0x200))
#define sp204 (*(f32 *)(sp + 0x204))
#define sp208 (*(f32 *)(sp + 0x208))
#define sp20C (*(f32 *)(sp + 0x20C))
#define sp210 (*(f32 *)(sp + 0x210))
#define sp214 (*(f32 *)(sp + 0x214))
#define sp218 (*(f32 *)(sp + 0x218))
#define sp21C (*(f32 *)(sp + 0x21C))
#define sp220 (*(f32 *)(sp + 0x220))
#define sp224 (*(f32 *)(sp + 0x224))
#define sp228 (*(f32 *)(sp + 0x228))
#define sp22C (*(f32 *)(sp + 0x22C))
#define sp230 (*(f32 *)(sp + 0x230))
#define sp234 (*(f32 *)(sp + 0x234))
#define sp238 (*(f32 *)(sp + 0x238))
#define sp23C (*(f32 *)(sp + 0x23C))
#define sp240 (*(f32 *)(sp + 0x240))
#define sp244 (*(f32 *)(sp + 0x244))
#define sp248 (*(f32 *)(sp + 0x248))
#define sp24C (*(f32 *)(sp + 0x24C))
#define sp250 (*(f32 *)(sp + 0x250))
#define sp254 (*(f32 *)(sp + 0x254))
#define sp258 (*(f32 *)(sp + 0x258))
#define sp25C (*(f32 *)(sp + 0x25C))
#define sp260 (*(f32 *)(sp + 0x260))
#define sp264 (*(f32 *)(sp + 0x264))
#define sp268 (*(f32 *)(sp + 0x268))
#define sp26C (*(f32 *)(sp + 0x26C))
#define sp270 (*(f32 *)(sp + 0x270))
#define sp274 (*(f32 *)(sp + 0x274))
#define sp278 (*(f32 *)(sp + 0x278))
#define sp27C (*(f32 *)(sp + 0x27C))
#define sp280 (*(f32 *)(sp + 0x280))
#define sp284 (*(f32 *)(sp + 0x284))
#define sp288 (*(f32 *)(sp + 0x288))
#define sp28C (*(f32 *)(sp + 0x28C))
#define sp290 (*(f32 *)(sp + 0x290))
#define sp294 (*(f32 *)(sp + 0x294))
#define sp298 (*(f32 *)(sp + 0x298))
#define sp29C (*(f32 *)(sp + 0x29C))
#define sp2A0 (*(f32 *)(sp + 0x2A0))
#define sp2A4 (*(f32 *)(sp + 0x2A4))
#define sp2A8 (*(f32 *)(sp + 0x2A8))
#define sp2AC (*(f32 *)(sp + 0x2AC))
#define sp2B0 (*(f32 *)(sp + 0x2B0))
#define sp2B4 (*(f32 *)(sp + 0x2B4))
#define sp2B8 (*(f32 *)(sp + 0x2B8))
#define sp2BC (*(f32 *)(sp + 0x2BC))
#define sp2C0 (*(f32 *)(sp + 0x2C0))
#define sp2C4 (*(f32 *)(sp + 0x2C4))
#define sp2C8 (*(f32 *)(sp + 0x2C8))
#define sp2CC (*(f32 *)(sp + 0x2CC))
#define sp2D0 (*(f32 *)(sp + 0x2D0))
#define sp2D4 (*(f32 *)(sp + 0x2D4))
#define sp2D8 (*(f32 *)(sp + 0x2D8))
#define sp2DC (*(f32 *)(sp + 0x2DC))
#define sp2E0 (*(f32 *)(sp + 0x2E0))
#define sp2E4 (*(f32 *)(sp + 0x2E4))
#define sp2E8 (*(f32 *)(sp + 0x2E8))
#define sp2EC (*(f32 *)(sp + 0x2EC))
#define sp2F0 (*(f32 *)(sp + 0x2F0))
#define sp2F4 (*(f32 *)(sp + 0x2F4))
#define sp2F8 (*(f32 *)(sp + 0x2F8))
#define sp2FC (*(f32 *)(sp + 0x2FC))
#define sp300 (*(f32 *)(sp + 0x300))
#define sp304 (*(f32 *)(sp + 0x304))
#define sp308 (*(f32 *)(sp + 0x308))
#define sp30C (*(f32 *)(sp + 0x30C))
#define sp310 (*(f32 *)(sp + 0x310))
#define sp314 (*(f32 *)(sp + 0x314))
#define sp318 (*(f32 *)(sp + 0x318))
#define sp31C (*(f32 *)(sp + 0x31C))
#define sp320 (*(f32 *)(sp + 0x320))
#define sp324 (*(f32 *)(sp + 0x324))
#define sp328 (*(f32 *)(sp + 0x328))
#define sp32C (*(f32 *)(sp + 0x32C))
#define sp330 (*(f32 *)(sp + 0x330))
#define sp334 (*(f32 *)(sp + 0x334))
#define sp338 (*(f32 *)(sp + 0x338))
#define sp33C (*(f32 *)(sp + 0x33C))
#define sp340 (*(f32 *)(sp + 0x340))
#define sp344 (*(f32 *)(sp + 0x344))
#define sp348 (*(f32 *)(sp + 0x348))
#define sp34C (*(f32 *)(sp + 0x34C))
#define sp350 (*(f32 *)(sp + 0x350))
#define sp354 (*(f32 *)(sp + 0x354))
#define sp358 (*(f32 *)(sp + 0x358))
#define sp35C (*(f32 *)(sp + 0x35C))
#define sp360 (*(f32 *)(sp + 0x360))
#define sp364 (*(f32 *)(sp + 0x364))
#define sp368 (*(f32 *)(sp + 0x368))
#define sp370 (*(f32 *)(sp + 0x370))
#define sp374 (*(f32 *)(sp + 0x374))
void func_8004B5DC(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 sp[960];
    s32 *var_v0;
    char *var_v1;
    f32 temp_fa0;
    f32 temp_fs0_2;
    f32 temp_fs0_3;
    f32 temp_fs0_5;
    f32 temp_fs0_7;
    f32 temp_fs0_8;
    f32 temp_fs1;
    f32 temp_fs1_2;
    f32 temp_fs2;
    f32 temp_fs2_2;
    f32 temp_fs3;
    f32 temp_fs4;
    f32 temp_fs4_10;
    f32 temp_fs4_11;
    f32 temp_fs4_12;
    f32 temp_fs4_13;
    f32 temp_fs4_14;
    f32 temp_fs4_15;
    f32 temp_fs4_16;
    f32 temp_fs4_17;
    f32 temp_fs4_18;
    f32 temp_fs4_19;
    f32 temp_fs4_20;
    f32 temp_fs4_2;
    f32 temp_fs4_3;
    f32 temp_fs4_4;
    f32 temp_fs4_5;
    f32 temp_fs4_6;
    f32 temp_fs4_7;
    f32 temp_fs4_8;
    f32 temp_fs4_9;
    f32 temp_fs5;
    f32 temp_fs5_10;
    f32 temp_fs5_11;
    f32 temp_fs5_12;
    f32 temp_fs5_13;
    f32 temp_fs5_14;
    f32 temp_fs5_15;
    f32 temp_fs5_16;
    f32 temp_fs5_17;
    f32 temp_fs5_18;
    f32 temp_fs5_19;
    f32 temp_fs5_20;
    f32 temp_fs5_21;
    f32 temp_fs5_22;
    f32 temp_fs5_23;
    f32 temp_fs5_24;
    f32 temp_fs5_25;
    f32 temp_fs5_26;
    f32 temp_fs5_2;
    f32 temp_fs5_3;
    f32 temp_fs5_4;
    f32 temp_fs5_5;
    f32 temp_fs5_6;
    f32 temp_fs5_7;
    f32 temp_fs5_8;
    f32 temp_fs5_9;
    f32 temp_ft0;
    f32 temp_ft1;
    f32 temp_ft2;
    f32 temp_ft3;
    f32 temp_ft3_2;
    f32 temp_ft4;
    f32 temp_ft4_2;
    f32 temp_ft5;
    f32 temp_ft5_2;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv0_4;
    f32 temp_fv0_5;
    f32 temp_fv0_6;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 var_fs4;
    f32 var_fv0;
    f64 temp_fs0;
    f64 temp_fs0_4;
    f64 temp_fs0_6;

    sp190 = M2C_FIELD(arg0, f32 *, 0x30);
    temp_fs0 = (f64) M2C_FIELD(arg0, f32 *, 0x40);
    sp194 = M2C_FIELD(arg0, f32 *, 0x34);
    sp198 = M2C_FIELD(arg0, f32 *, 0x38);
    temp_fs0_2 = (f32) func_8005A340(temp_fs0);
    temp_fs5 = D_80079B7C;
    temp_fv0 = (f32) func_8005A420(temp_fs0);
    temp_fs4 = temp_fs5;
    M2C_FIELD(&spD0, f32 *, 0x3C) = temp_fs5;
    M2C_FIELD(&spD0, f32 *, 0x2C) = temp_fs4;
    spE8 = temp_fs0_2;
    temp_fs0_3 = -temp_fs0_2;
    spD0 = temp_fs5;
    sp108 = 0.0f;
    sp104 = 0.0f;
    sp100 = 0.0f;
    spF0 = 0.0f;
    spE0 = 0.0f;
    spDC = 0;
    spD8 = 0.0f;
    spD4 = 0.0f;
    spF8 = temp_fv0;
    spE4 = temp_fv0;
    spF4 = temp_fs0_3;
    spEC = temp_fs0_3;
    temp_fs0_4 = (f64) M2C_FIELD(arg0, f32 *, 0x44);
    temp_fs0_5 = (f32) func_8005A340(temp_fs0_4);
    temp_fv0_2 = (f32) func_8005A420(temp_fs0_4);
    sp138 = temp_fv0_2;
    sp110 = temp_fv0_2;
    sp148 = 0.0f;
    sp144 = 0.0f;
    sp140 = 0.0f;
    sp134 = 0.0f;
    sp12C = 0;
    sp128 = 0.0f;
    sp120 = 0.0f;
    sp114 = 0.0f;
    sp118 = -temp_fs0_5;
    sp130 = temp_fs0_5;
    M2C_FIELD(&sp110, f32 *, 0x3C) = temp_fs4;
    M2C_FIELD(&sp110, f32 *, 0x2C) = temp_fs5;
    M2C_FIELD(&sp110, f32 *, 0x14) = temp_fs4;
    M2C_FIELD(&sp110, f32 *, 0xC) = temp_fs5;
    temp_fs0_6 = (f64) M2C_FIELD(arg0, f32 *, 0x48);
    sp19C = (f32) func_8005A340(temp_fs0_6);
    temp_fv0_3 = (f32) func_8005A420(temp_fs0_6);
    sp1A0 = temp_fv0_3;
    sp164 = temp_fv0_3;
    sp150 = temp_fv0_3;
    sp188 = 0.0f;
    sp184 = 0.0f;
    sp180 = 0.0f;
    sp17C = 0;
    sp174 = 0.0f;
    sp170 = 0.0f;
    sp16C = 0;
    sp168 = 0.0f;
    sp15C = 0;
    sp158 = 0.0f;
    sp154 = sp19C;
    sp160 = -sp19C;
    M2C_FIELD(&sp150, f32 *, 0x3C) = (f32) D_80079B80;
    M2C_FIELD(&sp150, f32 *, 0x28) = (f32) D_80079B80;
    if (arg1 != 0) {
        var_v1 = &sp10;
        var_v0 = D_80079B10;
        do {
            M2C_FIELD(var_v1, f32 *, 0) = M2C_FIELD(var_v0, f32 *, 0);
            M2C_FIELD(var_v1, s32 *, 4) = (s32) M2C_FIELD(var_v0, s32 *, 4);
            M2C_FIELD(var_v1, s32 *, 8) = (s32) M2C_FIELD(var_v0, s32 *, 8);
            M2C_FIELD(var_v1, s32 *, 0xC) = (s32) M2C_FIELD(var_v0, s32 *, 0xC);
            var_v0 += 0x10;
            var_v1 += 0x10;
        } while (var_v0 != (D_80079B10 + 0x40));
        if ((arg2 != 0) || (arg3 > 0)) {
            sp24 = D_80079B84;
            sp38 = D_80079B84;
        }
        temp_fs4_2 = sp10 * spD0;
        sp1A4 = temp_fs4_2;
        temp_ft3 = M2C_FIELD(&sp10, f32 *, 0x10);
        temp_ft4 = M2C_FIELD(&sp10, f32 *, 0x20);
        temp_fv1 = temp_fs4_2 + (temp_ft3 * spD4);
        sp1A8 = temp_fv1;
        temp_fv0_4 = temp_fv1 + (temp_ft4 * spD8);
        sp1AC = temp_fv0_4;
        sp50 = temp_fv0_4;
        temp_fs5_2 = M2C_FIELD(&sp10, f32 *, 4);
        sp1B0 = temp_fs5_2;
        temp_fs1 = M2C_FIELD(&sp10, f32 *, 0x14);
        temp_fs2 = M2C_FIELD(&sp10, f32 *, 0x24);
        temp_fa0 = (temp_fs5_2 * spD0) + (temp_fs1 * spD4) + (temp_fs2 * spD8);
        sp54 = temp_fa0;
        sp1B4 = M2C_FIELD(&sp10, f32 *, 0x18) * spD4;
        temp_fs4_3 = M2C_FIELD(&sp10, f32 *, 0x28);
        sp1B8 = temp_fs4_3;
        temp_fs5_3 = sp10 * spE0;
        temp_fs4_4 = temp_ft4 * spE8;
        sp1C0 = temp_fs5_3;
        sp1CC = temp_fs4_4;
        sp1C4 = temp_ft3 * spE4;
        temp_fs5_4 = temp_fs5_2 * spE0;
        sp1D4 = temp_fs5_4;
        temp_fs4_5 = temp_fs2 * spE8;
        sp1BC = temp_fs4_3 * spD8;
        sp1D8 = temp_fs1 * spE4;
        sp1E0 = temp_fs4_5;
        temp_fs5_5 = M2C_FIELD(&sp10, f32 *, 8) * spE0;
        temp_ft3_2 = temp_ft3 * sp104;
        sp1E8 = temp_fs5_5;
        sp1F8 = temp_ft3 * spF4;
        temp_fs4_6 = sp1B0 * spF0;
        sp1F4 = sp10 * spF0;
        temp_fs5_6 = temp_ft4 * spF8;
        sp208 = temp_fs4_6;
        temp_fs4_7 = temp_fs2 * spF8;
        sp200 = temp_fs5_6;
        temp_fs5_7 = temp_fs1 * spF4;
        temp_fs1_2 = temp_fs1 * sp104;
        sp214 = temp_fs4_7;
        sp20C = temp_fs5_7;
        temp_fs4_8 = sp10 * sp100;
        temp_ft4_2 = temp_ft4 * sp108;
        sp21C = temp_fs4_8;
        temp_fs2_2 = temp_fs2 * sp108;
        sp220 = temp_ft3_2;
        sp230 = temp_fs1_2;
        sp224 = temp_ft4_2;
        sp22C = sp1B0 * sp100;
        sp238 = temp_fs2_2;
        sp244 = M2C_FIELD(&sp10, f32 *, 8) * sp100;
        temp_ft1 = (M2C_FIELD(&sp10, f32 *, 8) * spD0) + sp1B4 + sp1BC;
        temp_fs5_8 = temp_fs5_3 + sp1C4;
        sp1C8 = temp_fs5_8;
        temp_fs5_9 = temp_fs5_4 + sp1D8;
        sp1DC = temp_fs5_9;
        temp_fs5_10 = temp_fs5_8 + temp_fs4_4;
        sp1D0 = temp_fs5_10;
        temp_fs5_11 = temp_fs5_9 + temp_fs4_5;
        sp1E4 = temp_fs5_11;
        temp_ft5 = temp_fs5_5 + (M2C_FIELD(&sp10, f32 *, 0x18) * spE4);
        temp_fs4_9 = sp1F4 + sp1F8;
        sp248 = M2C_FIELD(&sp10, f32 *, 0x18) * sp104;
        sp1EC = temp_ft5;
        sp1FC = temp_fs4_9;
        temp_fs4_10 = temp_fs4_9 + temp_fs5_6;
        sp204 = temp_fs4_10;
        sp210 = temp_fs4_6 + temp_fs5_7;
        sp60 = sp1D0;
        temp_fs5_12 = sp210 + temp_fs4_7;
        sp70 = temp_fs4_10;
        sp218 = temp_fs5_12;
        temp_ft2 = (M2C_FIELD(&sp10, f32 *, 8) * spF0) + (M2C_FIELD(&sp10, f32 *, 0x18) * spF4) + (sp1B8 * spF8);
        sp5C = 0;
        sp6C = 0;
        sp7C = 0;
        sp64 = temp_fs5_11;
        temp_fs0_7 = temp_ft5 + (temp_fs4_3 * spE8);
        sp58 = temp_ft1;
        sp78 = temp_ft2;
        sp1F0 = temp_fs0_7;
        sp74 = temp_fs5_12;
        sp68 = temp_fs0_7;
        temp_fv1_2 = temp_fs4_8 + temp_ft3_2 + temp_ft4_2 + M2C_FIELD(&sp10, f32 *, 0x30);
        sp228 = temp_fv1_2;
        sp80 = temp_fv1_2;
        sp24C = temp_fs4_3 * sp108;
        sp258 = temp_fs5_10 * sp114;
        sp254 = sp1AC * sp110;
        sp264 = temp_fa0 * sp110;
        temp_fs5_13 = temp_fs5_12 * sp118;
        sp25C = temp_fs4_10 * sp118;
        sp26C = temp_fs5_13;
        temp_fs5_14 = sp1AC * sp120;
        sp274 = temp_ft2 * sp118;
        sp268 = sp1E4 * sp114;
        sp278 = temp_fs5_14;
        temp_fs5_15 = sp204 * sp128;
        sp270 = sp1F0 * sp114;
        temp_fs4_11 = sp1D0 * sp124;
        sp280 = temp_fs5_15;
        sp27C = temp_fs4_11;
        sp288 = temp_fa0 * sp120;
        sp28C = temp_fs5_11 * sp124;
        temp_fs4_12 = sp218 * sp128;
        sp294 = sp1F0 * sp124;
        sp290 = temp_fs4_12;
        sp2A0 = temp_fs5_10 * sp134;
        sp298 = temp_ft2 * sp128;
        sp29C = sp1AC * sp130;
        sp2AC = temp_fa0 * sp130;
        temp_fs5_16 = temp_fs5_12 * sp138;
        sp2A4 = temp_fs4_10 * sp138;
        sp2B4 = temp_fs5_16;
        temp_fs5_17 = sp1AC * sp140;
        sp2BC = temp_ft2 * sp138;
        sp2B0 = sp1E4 * sp134;
        sp2C0 = temp_fs5_17;
        temp_fs5_18 = sp204 * sp148;
        sp2B8 = sp1F0 * sp134;
        temp_fs4_13 = sp1D0 * sp144;
        sp2C4 = temp_fs4_13;
        sp2CC = temp_fs5_18;
        sp2D4 = sp1E4 * sp144;
        sp2D8 = temp_fs5_12 * sp148;
        sp2DC = sp1F0 * sp144;
        sp260 = sp254 + sp258 + sp25C;
        sp284 = temp_fs5_14 + temp_fs4_11 + temp_fs5_15;
        sp2E0 = sp284 * sp154;
        sp2A8 = sp29C + sp2A0 + sp2A4;
        temp_fs5_19 = sp22C + temp_fs1_2;
        sp234 = temp_fs5_19;
        temp_fs5_20 = temp_fs5_19 + temp_fs2_2;
        sp23C = temp_fs5_20;
        sp374 = sp244 + sp248;
        temp_fv0_5 = temp_fs5_20 + M2C_FIELD(&sp10, f32 *, 0x34);
        temp_fs4_14 = sp264 + sp268;
        sp240 = temp_fv0_5;
        sp84 = temp_fv0_5;
        sp370 = temp_fs4_14;
        temp_fs3 = sp374 + sp24C + M2C_FIELD(&sp10, f32 *, 0x38);
        sp250 = temp_fs3;
        sp94 = temp_fs4_14 + temp_fs5_13;
        spA4 = sp288 + sp28C + temp_fs4_12;
        sp2C8 = temp_fs5_17 + temp_fs4_13;
        temp_fs4_15 = sp2C8 + temp_fs5_18;
        sp2D0 = temp_fs4_15;
        spC0 = temp_fs4_15 + sp228;
        sp9C = 0;
        spAC = 0;
        spBC = 0;
        sp98 = (temp_ft1 * sp110) + sp270 + sp274;
        spA8 = (temp_ft1 * sp120) + sp294 + sp298;
        spB4 = sp2AC + sp2B0 + temp_fs5_16;
        spCC = D_80079B88;
        sp8C = D_80079B8C;
        sp88 = temp_fs3;
        sp90 = sp260;
        spA0 = sp284;
        spB0 = sp2A8;
        spB8 = (temp_ft1 * sp130) + sp2B8 + sp2BC;
        spC4 = (temp_fa0 * sp140) + sp2D4 + sp2D8 + sp240;
        spC8 = (temp_ft1 * sp140) + sp2DC + (temp_ft2 * sp148) + temp_fs3;
        M2C_FIELD(arg0, f32 *, 0) = (f32) ((sp260 * sp150) + sp2E0 + (sp2A8 * sp158));
        M2C_FIELD(arg0, f32 *, 4) = (f32) ((sp94 * sp150) + (spA4 * sp154) + (spB4 * sp158));
        M2C_FIELD(arg0, f32 *, 0xC) = 0.0f;
        M2C_FIELD(arg0, f32 *, 8) = (f32) ((sp98 * sp150) + (spA8 * sp154) + (spB8 * sp158));
        M2C_FIELD(arg0, f32 *, 0x10) = (f32) ((sp90 * sp160) + (spA0 * sp164) + (spB0 * sp168));
        M2C_FIELD(arg0, f32 *, 0x14) = (f32) ((sp94 * sp160) + (spA4 * sp164) + (spB4 * sp168));
        M2C_FIELD(arg0, f32 *, 0x18) = (f32) ((sp98 * sp160) + (spA8 * sp164) + (spB8 * sp168));
        M2C_FIELD(arg0, f32 *, 0x1C) = 0.0f;
        M2C_FIELD(arg0, f32 *, 0x20) = (f32) ((sp90 * sp170) + (spA0 * sp174) + (spB0 * sp178));
        M2C_FIELD(arg0, f32 *, 0x24) = (f32) ((sp94 * sp170) + (spA4 * sp174) + (spB4 * sp178));
        M2C_FIELD(arg0, f32 *, 0x2C) = 0.0f;
        M2C_FIELD(arg0, f32 *, 0x28) = (f32) ((sp98 * sp170) + (spA8 * sp174) + (spB8 * sp178));
        M2C_FIELD(arg0, f32 *, 0x30) = (f32) ((sp90 * sp180) + (spA0 * sp184) + (spB0 * sp188) + spC0);
        M2C_FIELD(arg0, f32 *, 0x34) = (f32) ((sp94 * sp180) + (spA4 * sp184) + (spB4 * sp188) + spC4);
        var_fs4 = D_80079B90;
        var_fv0 = (sp98 * sp180) + (spA8 * sp184) + (spB8 * sp188) + spC8;
    } else {
        temp_fs4_16 = spF0 * sp118;
        sp2E4 = spD0 * sp110;
        temp_fs5_21 = spE0 * sp114;
        sp2EC = temp_fs4_16;
        sp2E8 = temp_fs5_21;
        sp2F4 = spE4 * sp114;
        sp2F0 = spD4 * sp110;
        sp2FC = spD8 * sp110;
        sp2F8 = spF4 * sp118;
        sp30C = spE0 * sp124;
        temp_fs4_17 = spF0 * sp128;
        sp310 = temp_fs4_17;
        sp314 = spD4 * sp120;
        sp308 = spF8 * sp118;
        sp300 = spE8 * sp114;
        sp318 = spE4 * sp124;
        sp31C = spF4 * sp128;
        temp_fs5_22 = spE8 * sp124;
        sp320 = temp_fs5_22;
        temp_fs5_23 = spF8 * sp128;
        sp324 = temp_fs5_23;
        temp_fs4_18 = spE0 * sp134;
        sp328 = temp_fs4_18;
        sp32C = spF0 * sp138;
        sp330 = spD4 * sp130;
        sp334 = spE4 * sp134;
        temp_fs5_24 = spF4 * sp138;
        sp33C = temp_fs5_24;
        sp340 = spE8 * sp134;
        temp_fs5_25 = spF8 * sp138;
        sp344 = temp_fs5_25;
        sp348 = spD0 * sp140;
        temp_fs5_26 = spF0 * sp148;
        sp34C = spE0 * sp144;
        sp354 = temp_fs5_26;
        sp35C = spE4 * sp144;
        sp360 = spF4 * sp148;
        sp364 = spE8 * sp144;
        temp_ft0 = sp2E4 + temp_fs5_21 + temp_fs4_16;
        sp368 = spF8 * sp148;
        temp_fv0_6 = sp2F0 + sp2F4 + sp2F8;
        sp54 = temp_fv0_6;
        sp304 = sp2FC + sp300;
        sp58 = sp304 + sp308;
        temp_fs0_8 = (spD0 * sp120) + sp30C + temp_fs4_17;
        sp338 = sp330 + sp334;
        temp_ft5_2 = (spD0 * sp130) + temp_fs4_18 + sp32C;
        sp74 = sp338 + temp_fs5_24;
        sp68 = (spD8 * sp120) + temp_fs5_22 + temp_fs5_23;
        sp70 = temp_ft5_2;
        temp_fs4_19 = sp348 + sp34C;
        sp350 = temp_fs4_19;
        temp_fs4_20 = temp_fs4_19 + temp_fs5_26;
        sp358 = temp_fs4_20;
        sp60 = temp_fs0_8;
        sp80 = temp_fs4_20 + sp100;
        sp5C = 0;
        sp6C = 0;
        sp7C = 0;
        sp50 = temp_ft0;
        sp64 = sp314 + sp318 + sp31C;
        sp78 = (spD8 * sp130) + sp340 + temp_fs5_25;
        sp8C = D_80079B94;
        sp84 = (spD4 * sp140) + sp35C + sp360 + sp104;
        sp88 = (spD8 * sp140) + sp364 + sp368 + sp108;
        M2C_FIELD(arg0, f32 *, 0) = (f32) ((temp_ft0 * sp1A0) + (temp_fs0_8 * sp19C) + (temp_ft5_2 * sp188));
        M2C_FIELD(arg0, f32 *, 4) = (f32) ((temp_fv0_6 * sp150) + (sp64 * sp154) + (sp74 * sp158));
        M2C_FIELD(arg0, f32 *, 0xC) = sp188;
        M2C_FIELD(arg0, f32 *, 8) = (f32) ((sp58 * sp150) + (sp68 * sp154) + (sp78 * sp158));
        M2C_FIELD(arg0, f32 *, 0x10) = (f32) ((sp50 * sp160) + (sp60 * sp164) + (sp70 * sp168));
        M2C_FIELD(arg0, f32 *, 0x14) = (f32) ((temp_fv0_6 * sp160) + (sp64 * sp164) + (sp74 * sp168));
        M2C_FIELD(arg0, f32 *, 0x1C) = sp188;
        M2C_FIELD(arg0, f32 *, 0x18) = (f32) ((sp58 * sp160) + (sp68 * sp164) + (sp78 * sp168));
        M2C_FIELD(arg0, f32 *, 0x20) = (f32) ((sp50 * sp170) + (sp60 * sp174) + (sp70 * sp178));
        M2C_FIELD(arg0, f32 *, 0x24) = (f32) ((temp_fv0_6 * sp170) + (sp64 * sp174) + (sp74 * sp178));
        M2C_FIELD(arg0, f32 *, 0x2C) = sp188;
        M2C_FIELD(arg0, f32 *, 0x28) = (f32) ((sp58 * sp170) + (sp68 * sp174) + (sp78 * sp178));
        M2C_FIELD(arg0, f32 *, 0x30) = (f32) ((sp50 * sp180) + (sp60 * sp184) + (sp70 * sp188) + sp80);
        M2C_FIELD(arg0, f32 *, 0x34) = (f32) ((temp_fv0_6 * sp180) + (sp64 * sp184) + (sp74 * sp188) + sp84);
        var_fv0 = (sp58 * sp180) + (sp68 * sp184) + (sp78 * sp188) + sp88;
        var_fs4 = D_80079B94;
    }
    M2C_FIELD(arg0, f32 *, 0x3C) = var_fs4;
    M2C_FIELD(arg0, f32 *, 0x38) = var_fv0;
    M2C_FIELD(arg0, f32 *, 0x30) = sp190;
    M2C_FIELD(arg0, f32 *, 0x34) = sp194;
    M2C_FIELD(arg0, f32 *, 0x38) = sp198;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
}
