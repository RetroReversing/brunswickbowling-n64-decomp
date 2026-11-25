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

s32 func_80036F08();
s32 func_800370C4();
s32 func_8003732C();
s32 *func_80050988();
s32 func_80050DE8();
s32 func_80057FA0();
s32 func_8005AB60();
extern char D_8007819C[];
extern char D_80078428[];
extern char D_80078430[];
extern char D_80078438[];
extern s32 D_8008B3DC;
extern char D_8008C3D0[];
extern char D_8008C410[];
extern char D_8008DC50[];
extern char D_8008DC80[];
extern char D_80092484[];
extern char D_800926E8[];

void func_8003AEBC(s32 arg0) {
    s32 *temp_s1_2;
    s32 temp_s0;
    s32 var_a1;
    s32 var_s0;
    s32 var_s2;
    s32 var_s3;
    u32 var_s2_2;
    void *temp_s1;
    void *temp_s1_3;
    void *temp_s1_4;

    if (D_8008B3DC == 0xE) {
        temp_s1 = (arg0 * 8) + D_8008DC50;
        func_80036F08(D_8008C410, M2C_FIELD(temp_s1, s32 *, 4), D_8007819C, D_8008DC80);
        var_a1 = M2C_FIELD(temp_s1, s32 *, 4);
    } else {
        temp_s1_2 = (arg0 * 8) + D_8008DC50;
        func_80036F08(D_8008C410, *temp_s1_2, D_8007819C, D_8008DC80);
        var_a1 = *temp_s1_2;
    }
    func_80036F08(D_8008C3D0, var_a1, D_8007819C, D_8008DC80);
    func_8003732C(D_8008C410, 1);
    func_800370C4(D_8008C3D0, 0x14, 0xA);
    func_8003732C(D_8008C3D0, 1);
    var_s2 = 0;
    do {
        temp_s0 = var_s2 << 5;
        var_s2 += 1;
        temp_s1_3 = M2C_FIELD(M2C_FIELD(D_80092484, void **, 0xC8), s32 *, 0x30) + temp_s0;
        func_80050DE8(temp_s1_3, D_80078428);
        M2C_FIELD(temp_s1_3, s8 *, 4) = (s8) (arg0 + 0x61);
        func_80057FA0(M2C_FIELD(M2C_FIELD(D_80092484, void **, 0xC8), s32 *, 0x30) + temp_s0 + 0x10, *func_80050988(temp_s1_3, D_80078428), 0x10);
    } while (var_s2 < 2);
    var_s2_2 = 0;
    if (M2C_FIELD(M2C_FIELD(D_800926E8, void **, 0xC8), u32 *, 0x10) != 0) {
        var_s3 = 0;
        do {
            var_s0 = 0;
            temp_s1_4 = M2C_FIELD(M2C_FIELD(D_800926E8, void **, 0xC8), s32 *, 0x30) + var_s3;
            if ((func_8005AB60(D_80078430, temp_s1_4, 4) == 0) || (func_8005AB60(D_80078438, temp_s1_4, 4) == 0)) {
                var_s0 = 1;
            }
            if (var_s0 != 0) {
                func_80050DE8(temp_s1_4, D_80078428);
                M2C_FIELD(temp_s1_4, s8 *, 4) = (s8) (arg0 + 0x61);
                func_80057FA0(M2C_FIELD(M2C_FIELD(D_800926E8, void **, 0xC8), s32 *, 0x30) + var_s3 + 0x10, *func_80050988(temp_s1_4, D_80078428), 0x10);
            }
            var_s2_2 += 1;
            var_s3 += 0x20;
        } while (var_s2_2 < (u32) M2C_FIELD(M2C_FIELD(D_800926E8, void **, 0xC8), u32 *, 0x10));
    }
}
